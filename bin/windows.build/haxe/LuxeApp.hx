import Main;

import luxe.Core;
import snow.Snow;
import snow.types.Types;

class LuxeApp {

    public static var _game : Main;
    public static var _core : Core;
    public static var _snow : Snow;

    public static function main () {

            //Create the runtime
        _snow = new Snow();
            //Create the app class, give it to the bootstrapper
        _game = new Main();
            //Create the core luxe runtime
        _core = new Core( _game );

        var _snow_config : SnowConfig = {
            has_loop : true,
            config_custom_assets : false,
            config_custom_runtime : false,
            config_runtime_path : 'config.json',
            config_assets_path : 'manifest'
        };

            //Start up, giving luxe as the host
        _snow.init( _snow_config, _core );

    } //main

} //LuxeApp