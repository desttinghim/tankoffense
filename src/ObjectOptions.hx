
import luxe.Vector;
import luxe.Rectangle;
import luxe.options.SpriteOptions;

typedef ObjectOptions = {

	>SpriteOptions,

	@:optional var hitbox : Rectangle;
	@:optional var movement : Vector;
	@:optional var side : Int;
}
