
import luxe.Sprite;
import luxe.Component;

class Object extends Sprite {

	@:isVar public var hitbox : Hitbox;
	@:isVar public var movement : Movement;
	@:isVar public var side : Side;
	
	//Figure out how to add more components
	public function new(options:ObjectOptions) {

		if(options.hitbox != null) {
			hitbox = new Hitbox(options.hitbox);
			add(hitbox);
		}

		if(options.movement != null) {
			movement = new Movement(options.movement);
			add(movement);
		}

		if(options.side != null) {
			side = new Side(options.side);
			add(side);
		}

		super( options );
	}
}