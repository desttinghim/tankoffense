
import luxe.Sprite;
import luxe.Component;
import luxe.Rectangle;
import luxe.Vector;

class Gameobject extends Sprite {

	@:isVar public var hitbox (default, set): Hitbox = new Hitbox(new Rectangle(0,0,32,32));
	@:isVar public var movement (default, set): Movement = new Movement(new Vector(0,0));
	@:isVar public var side (default, set): Side = new Side(0);
	@:isVar public var health (default, set): Health = new Health(10);
	@:isVar public var attack (default, set): Attack = new Attack(10);
	
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

		if(options.attack != null) {
			attack = new Attack(options.attack);
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
		if(health != null) {
			add(health);
		}
		if(attack != null) {
			add(attack);
		}

		events.listen('collision', on_collision);
		events.listen('damage', on_damage);
		
	}

	function on_collision( data:Dynamic ) {
		health.health -= Std.int(data.from.get('attack').attack);
		this.events.fire('damage');
		movement.stopped = true;
	}

	function on_damage( data:Dynamic ) {
		if(health.health <= 0) {
			Luxe.events.fire('unit.destroy', {object: this});
			this.destroy();
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

	function set_attack(_attack:Attack) {

		attack = _attack;
		return attack;

	}
}