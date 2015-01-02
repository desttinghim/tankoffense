
import luxe.Component;
import luxe.Vector;
import luxe.Sprite;

class Movement extends Component {

	public var velocity:Vector;
	private var sprite:Sprite;
	
	public function new( speed : Vector ):Void {

		super({name:"movement"});

		velocity = speed;
	}
	override function init() {
		//the function that started it all
		sprite = cast entity;
	}

	override function update( dt:Float ) {
		//stuff all the time
		sprite.pos = Vector.Add(sprite.pos, Vector.Multiply( velocity, dt ));
	}

	override function onreset() {
		//when the world restarts
	}

}