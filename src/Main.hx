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

/**
 * @author Desttinghim
 * null
 * null
 */
class Main extends luxe.Game
{
	var image : Texture;
	var loaded : Bool = false;
	var units : Array<Sprite> = [];
	var rows : Array<Rectangle> = [];
	var collisionGroup : Array<Rectangle> = [];
	var gameFieldHeight : Float;
	var enemyAttack : Bool = true;
	var playerSide : Int = 1;
	var enemySide : Int = 4;

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

	}

	private function assets_loaded(_) {
		trace("Assets have been loaded.");

		image = Luxe.loadTexture('assets/testingsquare.png');
		image.filter = FilterType.nearest;

		Luxe.input.bind_mouse('select', MouseButton.left);

		for( i in 0...3 ) {
			rows[i] = new Rectangle( Luxe.screen.w * i / 3, 0, Luxe.screen.w / 3, Luxe.screen.h );
		}

		gameFieldHeight = Luxe.screen.h * 2;

		Luxe.camera.bounds = new Rectangle( 0, 0, 480, gameFieldHeight + Luxe.screen.h / 2 );

		loaded = true;
	}

	private function create_unit( xpos, ypos, speed, side) {
		trace("Unit created.");
		var unitNum = units.length;

		units.push(new Gameobject({
			name: 'unit' + unitNum,
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
		//collisionGroup.push(units[unitNum].get('hitbox').hitbox);
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
		if(Luxe.input.inputreleased('select')) {
			if( rows[0].point_inside(Luxe.mouse) ) {
				create_unit( rows[0].x + rows[0].w / 2, gameFieldHeight, -200, playerSide );
			} else if( rows[1].point_inside(Luxe.mouse) ) {
				create_unit( rows[1].x + rows[1].w / 2, gameFieldHeight, -200, playerSide );
			} else if( rows[2].point_inside(Luxe.mouse) ){
				create_unit( rows[2].x + rows[2].w / 2, gameFieldHeight, -200, playerSide );
			}
		}

		if(Luxe.input.keydown(Key.down)) {
			Luxe.camera.pos.y += 300 * delta;
		}

		if(Luxe.input.keydown(Key.up)) {
			Luxe.camera.pos.y -= 300 * delta;
		}

		if(enemyAttack) {
			var rand = Math.floor(Math.random() * 3);
			create_unit( rows[rand].x + rows[rand].w / 2, 0, 200, enemySide);
			enemyAttack = false;
		}

		for(i in units) {
			if(i.get('health') != null) {
				if(i.get('health').health <= 0) {
					//Add stuff to destroy the object
					i.destroy();
					units.remove(i);
				}
			}
		}
	}

	function collisionUpdate( delta:Float ) {
		var collisions = [];
		var otherCollisions = [];

		for(i in units) {
			for(a in units) {
				if(i.get('hitbox') != null && a.get('hitbox') != null && i != a) {
					if(theseOverlap(i.get('hitbox').hitbox , a.get('hitbox').hitbox)) {
						
						i.get('movement').stopped = true;
						a.get('movement').stopped = true;

						a.get('health').health -= i.get('attack').attack;

					}
				}
			}
		}

	}

	function theseOverlap( rect1:Rectangle, rect2:Rectangle ) {

		if(rect1.overlaps(rect2)) return true;
		return false;

	}
	
}