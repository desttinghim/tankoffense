
import luxe.Component;
import luxe.Sprite;
import luxe.Input;
import luxe.Color;
import luxe.tween.Actuate;

class Button extends Component {
	
	public var amount : Float = 0.3;
	public var start : Float = 1;
	public var active : Bool = true;
	public var speed : Float = 0.1;
	public var hovered : Bool = true;

	var sprite:Sprite;

	public function new() {

		super({name:"button"});

	} //new

	override function init() {

	} //init

	override function onadded() {

		sprite = cast entity;

	} //onadded

	override function onmousemove( event:MouseEvent ) {

		if(!active) return;

		if(sprite.point_inside_AABB(event.pos)) {

			if(!hovered) {
				hover();
			}

		} else {

			if(hovered) {
				unhover();
			}

		}
	} // mousemove

	override function onmouseup( event:MouseEvent ) {

		if(!active) return;

		if(hovered) {
			trace("Button pressed!");
			Luxe.events.queue('button', {which:'one of them'} );
		}

	}

	public function hover() {

		hovered = true;
		sprite.color.tween(speed, { a:start-amount });

	}

	public function unhover() {

		hovered = false;
		sprite.color.tween(speed, {a:start });
	}

}