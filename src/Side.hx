
import luxe.Component;

class Side extends Component {

	public var side : Int;

	public function new(whichSide:Int) {
		side = whichSide;
		super({name:"side"});
	}

}