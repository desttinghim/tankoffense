
import luxe.Component;

class Health extends Component {
	
	public var health : Int;

	public function new(healthAmount:Int) {
		health = healthAmount;
		super({name:"health"});
	}
}