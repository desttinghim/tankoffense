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

		Luxe.input.bind_mouse('spawn', MouseButton.left);


		loaded = true;
	}

	private function create_unit( xpos, ypos) {
		trace("Unit created.");
		var unitNum = units.length;
		units.push(new Sprite({
					name: 'player' + unitNum,
					texture: image,
					pos: new Vector( xpos, ypos),
					size: new Vector(64,64)
				}));
		units[unitNum].add(new Movement( 200, 0 ));
		//units[unitNum].add(new Sid)
	}
	
	override function update( delta:Float ) {

		if(!loaded) return;

		//Create units on button presses
		if(Luxe.input.inputreleased('spawn')) {
			if(Luxe.mouse.y < Luxe.screen.h / 3) {
				create_unit(0, Luxe.screen.h / 6);
			} else if(Luxe.mouse.y >= Luxe.screen.h / 3 && Luxe.mouse.y < Luxe.screen.h * 2 / 3) {
				create_unit(0, Luxe.screen.h / 2);
			} else if(Luxe.mouse.y >= Luxe.screen.h * 2 / 3){
				create_unit(0, Luxe.screen.h * 5 / 6);
			}
		}

	}
	
	override function onkeyup( event:KeyEvent ) {
		
		if(event.keycode == Key.escape) {
			Luxe.shutdown();
		}
		
	}
	
}