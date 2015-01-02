
import luxe.Rectangle;
import luxe.Component;
import luxe.Sprite;

class Hitbox extends Component {
	
	private var sprite : Sprite;
	public var hitbox : Rectangle;
	public var x : Float;
	public var y : Float;
	public var h : Float;
	public var w : Float;

	public function new( rect : Rectangle ) {
		hitbox = rect;
		super({name:"hitbox"});
	}

	override function init() {

		sprite = cast entity;

	}

	override function update( dt:Float ) {

		hitbox.x = sprite.pos.x - hitbox.w / 2;
		hitbox.y = sprite.pos.y - hitbox.h / 2;
		x = hitbox.x;
		y = hitbox.y;
		w = hitbox.w;
		h = hitbox.h;
	}
}