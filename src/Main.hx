package ;

import luxe.Input;
import luxe.Color;
import luxe.Vector;

import luxe.Parcel;
import luxe.ParcelProgress;

import luxe.Sprite;
import phoenix.Texture;

import luxe.tween.Actuate;
import luxe.Rectangle;
import luxe.AppConfig;

import phoenix.Batcher;
import phoenix.Camera;

/**
 * @author Desttinghim
 * null
 * null
 */
class Main extends luxe.Game
{
	var image : Texture;
	var loaded : Bool = false;

	var rows : Array<Rectangle> = [];
	var gameFieldHeight : Float;
	var enemyAttack : Bool = false;

	var playerSide : Int = 1;
	var enemySide : Int = 4;
	var unitCount : Int = 0;
	var units : Array<Sprite> = [];
	//Input stuff - maybe panning later?
	//var dragging : Bool = false;
	var button : Sprite;
	var buttonPressed : Bool = false;

	var hud_batcher : Batcher;

	override function config( config:AppConfig ):AppConfig {
		
		if(config.runtime.window != null) {
			if(config.runtime.window.width != null) {
				config.window.width = Std.int(config.runtime.window.width);
			}
			if(config.runtime.window.height != null) {
				config.window.height = Std.int(config.runtime.window.height);
			}
		}

		config.window.title = "Tank Offense";

		return config;
	}

	override function ready() {

		//Must figure out this parcel problem


		// var json_asset = Luxe.loadJSON('assets/parcel.json');

		// var preload = new Parcel();
		// 	preload.from_json(json_asset.json);

		// new ParcelProgress({
		// 	parcel: preload,
		// 	background: new Color(1,1,1,0.85),
		// 	oncomplete: assets_loaded
		// });

		// preload.load();
		image = Luxe.loadTexture('assets/testingsquare.png');

		image.onload = assets_loaded;


		for( i in 0...3 ) {
			rows[i] = new Rectangle( Luxe.screen.w * i / 3, 0, Luxe.screen.w / 3, Luxe.screen.h );
		}

		gameFieldHeight = Luxe.screen.h*3;

		Luxe.camera.bounds = new Rectangle( 0, 0, 480, gameFieldHeight + Luxe.screen.h / 2 );
		Luxe.camera.pos.y = gameFieldHeight;
		Luxe.camera.add(new CameraDrag({name:'drag'}));

		Luxe.events.listen('button', button_handle);
		Luxe.events.listen('unit.destroy', unit_destroy);

		hud_batcher = new Batcher(Luxe.renderer, 'hud_batcher');
		var hud_view = new Camera();
		hud_batcher.view = hud_view;
		hud_batcher.layer = 2;

		Luxe.renderer.add_batch(hud_batcher);

		button = new Sprite({
			name: 'button',
			pos: new Vector(Luxe.screen.w-32, Luxe.screen.h-32),
			color: new Color().rgb(0xf94b04),
			size: new Vector(64, 64),
			batcher: hud_batcher	
		});
		button.add(new Button());
	}

	private function assets_loaded(_) {
		trace("Assets have been loaded.");

		image = Luxe.loadTexture('assets/testingsquare.png');
		image.filter = FilterType.nearest;

		loaded = true;
	}

	private function button_handle( data:Dynamic ) {

		buttonPressed = true;
		Luxe.camera.get('drag').draggable = false;
		Luxe.camera.get('drag').zoomable = false;
		
	}

	private function unit_destroy( data:Dynamic ) {

		units.remove(data.object);

	}
	
	override function update( delta:Float ) {

		if(!loaded) return;

		inputUpdate( delta );
		collisionUpdate( delta );

	}
	
	override function onkeyup( event:KeyEvent ) {
		
		if(event.keycode == Key.escape) {
			Luxe.shutdown();
		}
		
	}

	function inputUpdate( delta:Float ) {
		//Create units on button presses
		if(Luxe.input.mousedown(MouseButton.left) && buttonPressed) {
			if( rows[0].point_inside(Luxe.mouse) ) {
				create_unit( rows[0].x + rows[0].w / 2, gameFieldHeight, -50, playerSide );
				enemyAttack = true;
			} else if( rows[1].point_inside(Luxe.mouse) ) {
				create_unit( rows[1].x + rows[1].w / 2, gameFieldHeight, -50, playerSide );
				enemyAttack = true;
			} else if( rows[2].point_inside(Luxe.mouse) ){
				create_unit( rows[2].x + rows[2].w / 2, gameFieldHeight, -50, playerSide );
				enemyAttack = true;
			}
			buttonPressed = false;
			Luxe.camera.get('drag').draggable = true;
			Luxe.camera.get('drag').zoomable = true;
		}

		// if(Luxe.input.keydown(Key.down)) {
		// 	Luxe.camera.pos.y += 300 * delta;
		// }

		// if(Luxe.input.keydown(Key.up)) {
		// 	Luxe.camera.pos.y -= 300 * delta;
		// }

		if(enemyAttack) {
			var rand = Math.floor(Math.random() * 3);
			create_unit( rows[rand].x + rows[rand].w / 2, 0, 50, enemySide);
			enemyAttack = false;
		}
	}

	function collisionUpdate( delta:Float ) {
		var collisions = [];
		var otherCollisions = [];

		for(i in units) {
			for(a in units) {

				if(i.get('hitbox') != null && a.get('hitbox') != null && i != a) {
					if(theseOverlap(i.get('hitbox').hitbox , a.get('hitbox').hitbox)) {
						
						i.events.fire('collision', {from: a, damage_amount: a.get('attack').attack });

					}
				}

			}
		}

		for(i in units) {
			if(collisions.indexOf(i) == -1) {
				if(i.get('movement') != null) {
					i.get('movement').stopped = false;
				}
			}
		}

	}

	function theseOverlap( rect1:Rectangle, rect2:Rectangle ) {

		if(rect1.overlaps(rect2)) return true;
		return false;

	}

	private function create_unit( xpos, ypos, speed, side) {
		trace("Unit created.");
		var unitNum = units.length;

		units.push(new Gameobject({
			name: 'unit' + unitCount++,
			texture: image,
			pos: new Vector( xpos, ypos ),
			size: new Vector( 64, 64 ),
			movement: new Vector( 0, speed ),
			hitbox: new Rectangle( 0, 0, 64, 64 ),
			side: side,
			health: 50,
			attack: 11 - side
		}));
		if(side == enemySide) {
			units[unitNum].rotation_z = 45;
		}
	}
	
}