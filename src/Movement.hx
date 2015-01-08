
import luxe.Component;
import luxe.Vector;
import luxe.Sprite;

class Movement extends Component {

	public var velocity:Vector;
	public var usualVelocity:Vector;
	public var stopped:Bool = false;
	private var sprite:Sprite;
	
	public function new( speed : Vector ):Void {

		super({name:"movement"});

		usualVelocity = speed;
		velocity = usualVelocity;
	}
	override function init() {
		//the function that started it all
		sprite = cast entity;
	}

	override function update( dt:Float ) {
		//stuff all the time
		sprite.pos = Vector.Add(sprite.pos, Vector.Multiply( velocity, dt ));

		if(stopped) {
			velocity = new Vector(0,0);
		}

		if(velocity.y == 0 && !stopped && sprite.get('health').health > 0) {
			velocity = usualVelocity;
		}
	}

	override function onreset() {
		//when the world restarts
	}

}