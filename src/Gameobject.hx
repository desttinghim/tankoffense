
import luxe.Sprite;
import luxe.Component;
import luxe.Rectangle;
import luxe.Vector;

class Gameobject extends Sprite {

	@:isVar public var hitbox (default, set): Hitbox = new Hitbox(new Rectangle(0,0,32,32));
	@:isVar public var movement (default, set): Movement = new Movement(new Vector(0,0));
	@:isVar public var side (default, set): Side = new Side(0);
	@:isVar public var health (default, set): Health = new Health(10);
	
	//Figure out how to add more components
	public function new(options:ObjectOptions) {

		if(options.hitbox != null) {
			hitbox = new Hitbox(options.hitbox);
		}

		if(options.movement != null) {
			movement = new Movement(options.movement);
		}

		if(options.side != null) {
			side = new Side(options.side);
		}

		if(options.health != null) {
			health = new Health(options.health);
		}

		super( options );
	}

	override function init() {

		if(hitbox != null) {
			add(hitbox);
		}
		if(movement != null) {
			add(movement);
		}
		if(side != null) {
			add(side);
		}
		
	}

	function set_hitbox(_hitbox : Hitbox) {
		
		hitbox = _hitbox;
		return hitbox;

	}

	function set_movement(_movement : Movement) {

		movement = _movement;
		return movement;

	}

	function set_side(_side:Side) {

		side = _side;
		return side;

	}

	function set_health(_health:Health) {

		health = _health;
		return health;

	}
}