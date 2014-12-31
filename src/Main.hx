package ;

import luxe.Input;
import luxe.Sprite;
import luxe.Color;
import luxe.Vector;
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

	}
	
	override function onmousemove( event:MouseEvent ) {
		
	}
	
	override function onkeyup( event:KeyEvent ) {
		
		if(event.keycode == Key.escape) {
			Luxe.shutdown();
		}
		
	}
	
	override function update( delta:Float ) {

	}

	
}