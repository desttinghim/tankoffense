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
	var gameFieldWidth : Float;
	var enemyAttack : Bool = true;
	var playerSide : Int = 1;
	var enemySide : Int = 2;

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

		var json_asset = Luxe.loadJSON('assets/parcel.json');

		var preload = new Parcel();
			preload.from_json(json_asset.json);

		new ParcelProgress({
			parcel: preload,
			background: new Color(1,1,1,0.85),
			oncomplete: assets_loaded
		});

		preload.load();

	}

	private function assets_loaded(_) {
		trace("Assets have been loaded.");

		image = Luxe.loadTexture('assets/testingsquare.png');
		image.filter = FilterType.nearest;

		Luxe.input.bind_mouse('select', MouseButton.left);

		for( i in 0...3 ) {
			rows[i] = new Rectangle( 0, Luxe.screen.h * i / 3, Luxe.screen.w, Luxe.screen.h / 3 );
		}

		gameFieldWidth = Luxe.screen.h * 5;

		Luxe.camera.bounds = new Rectangle( 0, 0, gameFieldWidth, Luxe.screen.h );

		loaded = true;
	}

	private function create_unit( xpos, ypos, speed, side) {
		trace("Unit created.");
		var unitNum = units.length;

		units.push(new Object({
			name: 'unit' + unitNum,
			texture: image,
			pos: new Vector( xpos, ypos ),
			size: new Vector( 64, 64 ),
			movement: new Vector( 0, speed ),
			hitbox: new Rectangle( 0, 0, 64, 64 ),
			side: side
			}));
		// units.push(new Sprite({
		// 			name: 'player' + unitNum,
		// 			texture: image,
		// 			pos: new Vector( xpos, ypos),
		// 			size: new Vector(64,64)
		// 		}));
		// units[unitNum].add(new Movement( speed, 0 ));
		//units[unitNum].add(new Sid)
	}
	
	override function update( delta:Float ) {

		if(!loaded) return;

		//Create units on button presses
		if(Luxe.input.inputreleased('select')) {
			if( rows[0].point_inside(Luxe.mouse) ) {
				create_unit(0,  rows[0].y + rows[0].h / 2, 200, playerSide );
			} else if( rows[1].point_inside(Luxe.mouse) ) {
				create_unit(0,  rows[1].y + rows[1].h / 2, 200, playerSide );
			} else if( rows[2].point_inside(Luxe.mouse) ){
				create_unit(0,  rows[2].y + rows[2].h / 2, 200, playerSide );
			}
		}

		if(Luxe.input.keydown(Key.right)) {
			Luxe.camera.pos.x += 300 * delta;
		}

		if(Luxe.input.keydown(Key.left)) {
			Luxe.camera.pos.x -= 300 * delta;
		}

		if(enemyAttack) {
			var rand = Math.floor(Math.random() * 3);
			create_unit(gameFieldWidth, rows[rand].y + rows[rand].h / 2, -200, enemySide);
			enemyAttack = false;
		}

	}
	
	override function onkeyup( event:KeyEvent ) {
		
		if(event.keycode == Key.escape) {
			Luxe.shutdown();
		}
		
	}
	
}