
import luxe.Component;

class Attack extends Component {
	
	var attack : Int;

	public function new(attackAmount:Int) {
		attack = attackAmount;
		super({name:"attack"});
	}
}