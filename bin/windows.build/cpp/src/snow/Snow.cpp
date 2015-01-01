#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Sys
#include <Sys.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_crypto_Md5
#include <haxe/crypto/Md5.h>
#endif
#ifndef INCLUDED_haxe_format_JsonParser
#include <haxe/format/JsonParser.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_io_Path
#include <haxe/io/Path.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_snow_App
#include <snow/App.h>
#endif
#ifndef INCLUDED_snow_CoreBinding
#include <snow/CoreBinding.h>
#endif
#ifndef INCLUDED_snow_Snow
#include <snow/Snow.h>
#endif
#ifndef INCLUDED_snow_assets_Asset
#include <snow/assets/Asset.h>
#endif
#ifndef INCLUDED_snow_assets_AssetText
#include <snow/assets/AssetText.h>
#endif
#ifndef INCLUDED_snow_assets_Assets
#include <snow/assets/Assets.h>
#endif
#ifndef INCLUDED_snow_audio_Audio
#include <snow/audio/Audio.h>
#endif
#ifndef INCLUDED_snow_input_Input
#include <snow/input/Input.h>
#endif
#ifndef INCLUDED_snow_io_IO
#include <snow/io/IO.h>
#endif
#ifndef INCLUDED_snow_platform_native_Core
#include <snow/platform/native/Core.h>
#endif
#ifndef INCLUDED_snow_platform_native_utils_ByteArray
#include <snow/platform/native/utils/ByteArray.h>
#endif
#ifndef INCLUDED_snow_utils_AbstractClass
#include <snow/utils/AbstractClass.h>
#endif
#ifndef INCLUDED_snow_utils_IDataInput
#include <snow/utils/IDataInput.h>
#endif
#ifndef INCLUDED_snow_utils_IMemoryRange
#include <snow/utils/IMemoryRange.h>
#endif
#ifndef INCLUDED_snow_utils_Libs
#include <snow/utils/Libs.h>
#endif
#ifndef INCLUDED_snow_utils_Timer
#include <snow/utils/Timer.h>
#endif
#ifndef INCLUDED_snow_window_Window
#include <snow/window/Window.h>
#endif
#ifndef INCLUDED_snow_window_Windowing
#include <snow/window/Windowing.h>
#endif
namespace snow{

Void Snow_obj::__construct()
{
HX_STACK_FRAME("snow.Snow","new",0x2ec45060,"snow.Snow.new","snow/Snow.hx",24,0x86524d2f)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(70)
	this->is_ready = false;
	HX_STACK_LINE(68)
	this->was_ready = false;
	HX_STACK_LINE(61)
	this->has_shutdown = false;
	HX_STACK_LINE(59)
	this->shutting_down = false;
	HX_STACK_LINE(43)
	this->freeze = false;
	HX_STACK_LINE(78)
	::snow::platform::native::Core _g = ::snow::platform::native::Core_obj::__new(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(78)
	::snow::Snow_obj::core = _g;
	HX_STACK_LINE(79)
	::snow::Snow_obj::next_list = Dynamic( Array_obj<Dynamic>::__new());
}
;
	return null();
}

//Snow_obj::~Snow_obj() { }

Dynamic Snow_obj::__CreateEmpty() { return  new Snow_obj; }
hx::ObjectPtr< Snow_obj > Snow_obj::__new()
{  hx::ObjectPtr< Snow_obj > result = new Snow_obj();
	result->__construct();
	return result;}

Dynamic Snow_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Snow_obj > result = new Snow_obj();
	result->__construct();
	return result;}

Void Snow_obj::init( Dynamic _snow_config,::snow::App _host){
{
		HX_STACK_FRAME("snow.Snow","init",0xb9babb10,"snow.Snow.init","snow/Snow.hx",85,0x86524d2f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_snow_config,"_snow_config")
		HX_STACK_ARG(_host,"_host")
		HX_STACK_LINE(87)
		this->snow_config = _snow_config;
		struct _Function_1_1{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","snow/Snow.hx",89,0x86524d2f)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("has_window") , true,false);
					struct _Function_2_1{
						inline static Dynamic Block( ){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","snow/Snow.hx",91,0x86524d2f)
							{
								hx::Anon __result = hx::Anon_obj::Create();
								return __result;
							}
							return null();
						}
					};
					__result->Add(HX_CSTRING("runtime") , _Function_2_1::Block(),false);
					__result->Add(HX_CSTRING("window") , null(),false);
					__result->Add(HX_CSTRING("render") , null(),false);
					__result->Add(HX_CSTRING("assets") , Dynamic( Array_obj<Dynamic>::__new()),false);
					struct _Function_2_2{
						inline static Dynamic Block( ){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","snow/Snow.hx",95,0x86524d2f)
							{
								hx::Anon __result = hx::Anon_obj::Create();
								__result->Add(HX_CSTRING("no_context_menu") , true,false);
								__result->Add(HX_CSTRING("true_fullscreen") , false,false);
								return __result;
							}
							return null();
						}
					};
					__result->Add(HX_CSTRING("web") , _Function_2_2::Block(),false);
					struct _Function_2_3{
						inline static Dynamic Block( ){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","snow/Snow.hx",99,0x86524d2f)
							{
								hx::Anon __result = hx::Anon_obj::Create();
								__result->Add(HX_CSTRING("audio_buffer_length") , (int)176400,false);
								__result->Add(HX_CSTRING("audio_buffer_count") , (int)4,false);
								return __result;
							}
							return null();
						}
					};
					__result->Add(HX_CSTRING("native") , _Function_2_3::Block(),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(89)
		this->config = _Function_1_1::Block();
		HX_STACK_LINE(105)
		this->host = _host;
		HX_STACK_LINE(106)
		this->host->app = hx::ObjectPtr<OBJ_>(this);
		HX_STACK_LINE(108)
		::snow::Snow_obj::core->init(this->on_event_dyn());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Snow_obj,init,(void))

Void Snow_obj::shutdown( ){
{
		HX_STACK_FRAME("snow.Snow","shutdown",0x94cb7c96,"snow.Snow.shutdown","snow/Snow.hx",113,0x86524d2f)
		HX_STACK_THIS(this)
		HX_STACK_LINE(115)
		this->shutting_down = true;
		HX_STACK_LINE(117)
		this->host->ondestroy();
		HX_STACK_LINE(118)
		this->io->destroy();
		HX_STACK_LINE(119)
		this->audio->destroy();
		HX_STACK_LINE(120)
		this->input->destroy();
		HX_STACK_LINE(121)
		this->windowing->destroy();
		HX_STACK_LINE(123)
		::snow::Snow_obj::core->shutdown();
		HX_STACK_LINE(125)
		this->has_shutdown = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Snow_obj,shutdown,(void))

Float Snow_obj::get_time( ){
	HX_STACK_FRAME("snow.Snow","get_time",0xf6770796,"snow.Snow.get_time","snow/Snow.hx",131,0x86524d2f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(131)
	return ::snow::Snow_obj::core->timestamp();
}


HX_DEFINE_DYNAMIC_FUNC0(Snow_obj,get_time,return )

Void Snow_obj::on_snow_init( ){
{
		HX_STACK_FRAME("snow.Snow","on_snow_init",0xe7e6932c,"snow.Snow.on_snow_init","snow/Snow.hx",135,0x86524d2f)
		HX_STACK_THIS(this)
		HX_STACK_LINE(143)
		::String app_path = ::snow::Snow_obj::core->app_path();		HX_STACK_VAR(app_path,"app_path");
		HX_STACK_LINE(147)
		::Sys_obj::setCwd(app_path);
		HX_STACK_LINE(159)
		this->host->on_internal_init();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Snow_obj,on_snow_init,(void))

Void Snow_obj::on_snow_ready( ){
{
		HX_STACK_FRAME("snow.Snow","on_snow_ready",0x2a7c60c7,"snow.Snow.on_snow_ready","snow/Snow.hx",163,0x86524d2f)
		HX_STACK_THIS(this)
		HX_STACK_LINE(165)
		if ((this->was_ready)){
			HX_STACK_LINE(166)
			::haxe::Log_obj::trace(HX_CSTRING("     i / snow / firing ready event repeatedly is not ideal..."),hx::SourceInfo(HX_CSTRING("Snow.hx"),166,HX_CSTRING("snow.Snow"),HX_CSTRING("on_snow_ready")));
			HX_STACK_LINE(167)
			return null();
		}
		HX_STACK_LINE(175)
		::snow::io::IO _g = ::snow::io::IO_obj::__new(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(175)
		this->io = _g;
		HX_STACK_LINE(176)
		::snow::input::Input _g1 = ::snow::input::Input_obj::__new(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(176)
		this->input = _g1;
		HX_STACK_LINE(177)
		::snow::audio::Audio _g2 = ::snow::audio::Audio_obj::__new(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(177)
		this->audio = _g2;
		HX_STACK_LINE(178)
		::snow::assets::Assets _g3 = ::snow::assets::Assets_obj::__new(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(178)
		this->assets = _g3;
		HX_STACK_LINE(179)
		::snow::window::Windowing _g4 = ::snow::window::Windowing_obj::__new(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(179)
		this->windowing = _g4;
		HX_STACK_LINE(182)
		if ((!(this->snow_config->__Field(HX_CSTRING("config_custom_assets"),true)))){
			HX_STACK_LINE(185)
			this->assets->manifest_path = this->snow_config->__Field(HX_CSTRING("config_assets_path"),true);
			HX_STACK_LINE(191)
			Dynamic _g5 = this->default_asset_list();		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(191)
			this->config->__FieldRef(HX_CSTRING("assets")) = _g5;
			HX_STACK_LINE(193)
			this->assets->add(this->config->__Field(HX_CSTRING("assets"),true));
		}
		HX_STACK_LINE(197)
		if ((!(this->snow_config->__Field(HX_CSTRING("config_custom_runtime"),true)))){
			HX_STACK_LINE(199)
			Dynamic _g6 = this->default_runtime_config();		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(199)
			this->config->__FieldRef(HX_CSTRING("runtime")) = _g6;
		}
		HX_STACK_LINE(202)
		Dynamic _g7 = this->default_window_config();		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(202)
		this->config->__FieldRef(HX_CSTRING("window")) = _g7;
		HX_STACK_LINE(203)
		Dynamic _g8 = this->default_render_config();		HX_STACK_VAR(_g8,"_g8");
		HX_STACK_LINE(203)
		this->config->__FieldRef(HX_CSTRING("render")) = _g8;
		HX_STACK_LINE(208)
		Dynamic _g9 = this->host->config(this->config);		HX_STACK_VAR(_g9,"_g9");
		HX_STACK_LINE(208)
		this->config = _g9;
		HX_STACK_LINE(211)
		this->was_ready = true;
		HX_STACK_LINE(216)
		if (((this->config->__Field(HX_CSTRING("has_window"),true) == true))){
			HX_STACK_LINE(218)
			::snow::window::Window _g10 = this->windowing->create(this->config->__Field(HX_CSTRING("window"),true));		HX_STACK_VAR(_g10,"_g10");
			HX_STACK_LINE(218)
			this->window = _g10;
			HX_STACK_LINE(221)
			if (((this->window->handle == null()))){
				HX_STACK_LINE(222)
				HX_STACK_DO_THROW(HX_CSTRING("requested default window cannot be created. Cannot continue."));
			}
		}
		HX_STACK_LINE(228)
		this->is_ready = true;
		HX_STACK_LINE(231)
		this->host->ready();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Snow_obj,on_snow_ready,(void))

Void Snow_obj::do_internal_update( Float dt){
{
		HX_STACK_FRAME("snow.Snow","do_internal_update",0xda766217,"snow.Snow.do_internal_update","snow/Snow.hx",236,0x86524d2f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(dt,"dt")
		HX_STACK_LINE(238)
		this->io->update();
		HX_STACK_LINE(239)
		this->input->update();
		HX_STACK_LINE(240)
		this->audio->update();
		HX_STACK_LINE(241)
		this->host->update(dt);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Snow_obj,do_internal_update,(void))

Void Snow_obj::render( ){
{
		HX_STACK_FRAME("snow.Snow","render",0x1808eb56,"snow.Snow.render","snow/Snow.hx",248,0x86524d2f)
		HX_STACK_THIS(this)
		HX_STACK_LINE(248)
		this->windowing->update();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Snow_obj,render,(void))

Void Snow_obj::on_snow_update( ){
{
		HX_STACK_FRAME("snow.Snow","on_snow_update",0x8ccc1d25,"snow.Snow.on_snow_update","snow/Snow.hx",252,0x86524d2f)
		HX_STACK_THIS(this)
		HX_STACK_LINE(254)
		if (((bool(!(this->is_ready)) || bool(this->freeze)))){
			HX_STACK_LINE(255)
			return null();
		}
		HX_STACK_LINE(259)
		::snow::utils::Timer_obj::update();
		HX_STACK_LINE(262)
		if (((::snow::Snow_obj::next_list->__Field(HX_CSTRING("length"),true) > (int)0))){
			HX_STACK_LINE(265)
			int _pre_next_length = ::snow::Snow_obj::next_list->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(_pre_next_length,"_pre_next_length");
			HX_STACK_LINE(268)
			{
				HX_STACK_LINE(268)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(268)
				int _g = ::snow::Snow_obj::next_list->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(268)
				while((true)){
					HX_STACK_LINE(268)
					if ((!(((_g1 < _g))))){
						HX_STACK_LINE(268)
						break;
					}
					HX_STACK_LINE(268)
					int i = (_g1)++;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(269)
					::snow::Snow_obj::next_list->__GetItem(i)().Cast< Void >();
				}
			}
			HX_STACK_LINE(272)
			::snow::Snow_obj::next_list->__Field(HX_CSTRING("splice"),true)((int)0,_pre_next_length);
		}
		HX_STACK_LINE(277)
		this->host->on_internal_update();
		HX_STACK_LINE(281)
		::Sys_obj::sleep((int)0);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Snow_obj,on_snow_update,(void))

Void Snow_obj::dispatch_system_event( Dynamic _event){
{
		HX_STACK_FRAME("snow.Snow","dispatch_system_event",0x61ee1b6f,"snow.Snow.dispatch_system_event","snow/Snow.hx",288,0x86524d2f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_event,"_event")
		HX_STACK_LINE(288)
		this->on_event(_event);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Snow_obj,dispatch_system_event,(void))

Void Snow_obj::on_event( Dynamic _event){
{
		HX_STACK_FRAME("snow.Snow","on_event",0x468411ba,"snow.Snow.on_event","snow/Snow.hx",292,0x86524d2f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_event,"_event")
		HX_STACK_LINE(294)
		if (((bool((bool((bool((_event->__Field(HX_CSTRING("type"),true) != (int)3)) && bool((_event->__Field(HX_CSTRING("type"),true) != (int)0)))) && bool((_event->__Field(HX_CSTRING("type"),true) != (int)5)))) && bool((_event->__Field(HX_CSTRING("type"),true) != (int)6))))){
			HX_STACK_LINE(136)
			Dynamic();
		}
		HX_STACK_LINE(303)
		if (((_event->__Field(HX_CSTRING("type"),true) != (int)3))){
			HX_STACK_LINE(202)
			Dynamic();
		}
		HX_STACK_LINE(309)
		if ((this->is_ready)){
			HX_STACK_LINE(310)
			this->io->on_event(_event);
			HX_STACK_LINE(311)
			this->audio->on_event(_event);
			HX_STACK_LINE(312)
			this->windowing->on_event(_event);
			HX_STACK_LINE(313)
			this->input->on_event(_event);
			HX_STACK_LINE(314)
			this->host->onevent(_event);
		}
		HX_STACK_LINE(317)
		{
			HX_STACK_LINE(317)
			Dynamic _g = _event->__Field(HX_CSTRING("type"),true);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(317)
			switch( (int)(_g)){
				case (int)1: {
					HX_STACK_LINE(320)
					this->on_snow_init();
				}
				;break;
				case (int)2: {
					HX_STACK_LINE(324)
					this->on_snow_ready();
				}
				;break;
				case (int)3: {
					HX_STACK_LINE(328)
					this->on_snow_update();
				}
				;break;
				case (int)7: case (int)8: {
					HX_STACK_LINE(332)
					this->shutdown();
				}
				;break;
				case (int)4: {
					HX_STACK_LINE(336)
					::haxe::Log_obj::trace(HX_CSTRING("     i / snow / Goodbye."),hx::SourceInfo(HX_CSTRING("Snow.hx"),336,HX_CSTRING("snow.Snow"),HX_CSTRING("on_event")));
				}
				;break;
				default: {
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Snow_obj,on_event,(void))

bool Snow_obj::set_freeze( bool _freeze){
	HX_STACK_FRAME("snow.Snow","set_freeze",0x5bc91894,"snow.Snow.set_freeze","snow/Snow.hx",347,0x86524d2f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_freeze,"_freeze")
	HX_STACK_LINE(349)
	this->freeze = _freeze;
	HX_STACK_LINE(351)
	if ((_freeze)){
		HX_STACK_LINE(352)
		this->audio->suspend();
	}
	else{
		HX_STACK_LINE(354)
		this->audio->resume();
	}
	HX_STACK_LINE(357)
	return this->freeze;
}


HX_DEFINE_DYNAMIC_FUNC1(Snow_obj,set_freeze,return )

Dynamic Snow_obj::default_runtime_config( ){
	HX_STACK_FRAME("snow.Snow","default_runtime_config",0xc6956f87,"snow.Snow.default_runtime_config","snow/Snow.hx",365,0x86524d2f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(368)
	::snow::assets::AssetText config_data = this->assets->text(this->snow_config->__Field(HX_CSTRING("config_runtime_path"),true),null());		HX_STACK_VAR(config_data,"config_data");
	HX_STACK_LINE(371)
	if (((bool((config_data != null())) && bool((config_data->text != null()))))){
		HX_STACK_LINE(373)
		try
		{
		HX_STACK_CATCHABLE(Dynamic, 0);
		{
			HX_STACK_LINE(375)
			Dynamic json = ::haxe::format::JsonParser_obj::__new(config_data->text)->parseRec();		HX_STACK_VAR(json,"json");
			HX_STACK_LINE(379)
			return json;
		}
		}
		catch(Dynamic __e){
			{
				HX_STACK_BEGIN_CATCH
				Dynamic e = __e;{
					HX_STACK_LINE(383)
					::haxe::Log_obj::trace(HX_CSTRING("     i / snow / config / failed / default runtime config failed to parse as JSON. cannot recover."),hx::SourceInfo(HX_CSTRING("Snow.hx"),383,HX_CSTRING("snow.Snow"),HX_CSTRING("default_runtime_config")));
					HX_STACK_LINE(384)
					HX_STACK_DO_THROW(e);
				}
			}
		}
	}
	struct _Function_1_1{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","snow/Snow.hx",389,0x86524d2f)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(389)
	return _Function_1_1::Block();
}


HX_DEFINE_DYNAMIC_FUNC0(Snow_obj,default_runtime_config,return )

Dynamic Snow_obj::default_asset_list( ){
	HX_STACK_FRAME("snow.Snow","default_asset_list",0x660ae24b,"snow.Snow.default_asset_list","snow/Snow.hx",394,0x86524d2f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(396)
	Dynamic asset_list = Dynamic( Array_obj<Dynamic>::__new());		HX_STACK_VAR(asset_list,"asset_list");
	HX_STACK_LINE(397)
	::snow::platform::native::utils::ByteArray manifest_data;		HX_STACK_VAR(manifest_data,"manifest_data");
	HX_STACK_LINE(397)
	{
		HX_STACK_LINE(397)
		::snow::platform::native::utils::ByteArray array = ::snow::platform::native::utils::ByteArray_obj::snow_byte_array_read_file((this->assets->assets_root + this->assets->manifest_path));		HX_STACK_VAR(array,"array");
		HX_STACK_LINE(397)
		manifest_data = array;
	}
	HX_STACK_LINE(399)
	if (((bool((manifest_data != null())) && bool((manifest_data->length != (int)0))))){
		HX_STACK_LINE(401)
		Array< ::String > _list;		HX_STACK_VAR(_list,"_list");
		HX_STACK_LINE(401)
		{
			HX_STACK_LINE(401)
			::String text = manifest_data->toString();		HX_STACK_VAR(text,"text");
			HX_STACK_LINE(401)
			_list = ::haxe::format::JsonParser_obj::__new(text)->parseRec();
		}
		HX_STACK_LINE(403)
		{
			HX_STACK_LINE(403)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(403)
			while((true)){
				HX_STACK_LINE(403)
				if ((!(((_g < _list->length))))){
					HX_STACK_LINE(403)
					break;
				}
				HX_STACK_LINE(403)
				::String asset = _list->__get(_g);		HX_STACK_VAR(asset,"asset");
				HX_STACK_LINE(403)
				++(_g);
				HX_STACK_LINE(407)
				::String _g1 = ::haxe::io::Path_obj::join(Array_obj< ::String >::__new().Add(this->assets->assets_root).Add(asset));		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(408)
				::String _g11 = ::haxe::io::Path_obj::extension(asset);		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(409)
				::String _g2 = ::haxe::io::Path_obj::extension(asset);		HX_STACK_VAR(_g2,"_g2");
				struct _Function_4_1{
					inline static Dynamic Block( ::String &_g1,::String &_g11,::String &asset,::String &_g2){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","snow/Snow.hx",405,0x86524d2f)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_CSTRING("id") , asset,false);
							__result->Add(HX_CSTRING("path") , _g1,false);
							__result->Add(HX_CSTRING("type") , _g11,false);
							__result->Add(HX_CSTRING("ext") , _g2,false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(405)
				Dynamic _g3 = _Function_4_1::Block(_g1,_g11,asset,_g2);		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(405)
				asset_list->__Field(HX_CSTRING("push"),true)(_g3);
			}
		}
		HX_STACK_LINE(136)
		Dynamic();
	}
	else{
		HX_STACK_LINE(418)
		::haxe::Log_obj::trace(HX_CSTRING("     i / snow / config / failed / default asset manifest not found, or length was zero"),hx::SourceInfo(HX_CSTRING("Snow.hx"),418,HX_CSTRING("snow.Snow"),HX_CSTRING("default_asset_list")));
	}
	HX_STACK_LINE(422)
	return asset_list;
}


HX_DEFINE_DYNAMIC_FUNC0(Snow_obj,default_asset_list,return )

Dynamic Snow_obj::default_render_config( ){
	HX_STACK_FRAME("snow.Snow","default_render_config",0xe3496c8d,"snow.Snow.default_render_config","snow/Snow.hx",430,0x86524d2f)
	HX_STACK_THIS(this)
	struct _Function_1_1{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","snow/Snow.hx",430,0x86524d2f)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("depth") , false,false);
				__result->Add(HX_CSTRING("stencil") , false,false);
				__result->Add(HX_CSTRING("antialiasing") , (int)0,false);
				__result->Add(HX_CSTRING("red_bits") , (int)8,false);
				__result->Add(HX_CSTRING("green_bits") , (int)8,false);
				__result->Add(HX_CSTRING("blue_bits") , (int)8,false);
				__result->Add(HX_CSTRING("alpha_bits") , (int)8,false);
				__result->Add(HX_CSTRING("depth_bits") , (int)0,false);
				__result->Add(HX_CSTRING("stencil_bits") , (int)0,false);
				struct _Function_2_1{
					inline static Dynamic Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","snow/Snow.hx",440,0x86524d2f)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_CSTRING("minor") , (int)0,false);
							__result->Add(HX_CSTRING("major") , (int)0,false);
							__result->Add(HX_CSTRING("profile") , (int)0,false);
							return __result;
						}
						return null();
					}
				};
				__result->Add(HX_CSTRING("opengl") , _Function_2_1::Block(),false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(430)
	return _Function_1_1::Block();
}


HX_DEFINE_DYNAMIC_FUNC0(Snow_obj,default_render_config,return )

Dynamic Snow_obj::default_window_config( ){
	HX_STACK_FRAME("snow.Snow","default_window_config",0xa273eb33,"snow.Snow.default_window_config","snow/Snow.hx",451,0x86524d2f)
	HX_STACK_THIS(this)
	struct _Function_1_1{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","snow/Snow.hx",451,0x86524d2f)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("fullscreen_desktop") , true,false);
				__result->Add(HX_CSTRING("fullscreen") , false,false);
				__result->Add(HX_CSTRING("resizable") , true,false);
				__result->Add(HX_CSTRING("borderless") , false,false);
				__result->Add(HX_CSTRING("x") , (int)536805376,false);
				__result->Add(HX_CSTRING("y") , (int)536805376,false);
				__result->Add(HX_CSTRING("width") , (int)960,false);
				__result->Add(HX_CSTRING("height") , (int)640,false);
				__result->Add(HX_CSTRING("title") , HX_CSTRING("snow app"),false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(451)
	return _Function_1_1::Block();
}


HX_DEFINE_DYNAMIC_FUNC0(Snow_obj,default_window_config,return )

::String Snow_obj::get_uniqueid( ){
	HX_STACK_FRAME("snow.Snow","get_uniqueid",0xd043c935,"snow.Snow.get_uniqueid","snow/Snow.hx",476,0x86524d2f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(478)
	Float _g = ::snow::Snow_obj::core->timestamp();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(478)
	Float _g1 = ::Math_obj::random();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(478)
	Float _g2 = (_g * _g1);		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(478)
	::String _g3 = ::Std_obj::string(_g2);		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(478)
	return ::haxe::crypto::Md5_obj::encode(_g3);
}


HX_DEFINE_DYNAMIC_FUNC0(Snow_obj,get_uniqueid,return )

::snow::platform::native::Core Snow_obj::core;

Dynamic Snow_obj::load( ::String library,::String method,hx::Null< int >  __o_args){
int args = __o_args.Default(0);
	HX_STACK_FRAME("snow.Snow","load",0xbbb71a26,"snow.Snow.load","snow/Snow.hx",485,0x86524d2f)
	HX_STACK_ARG(library,"library")
	HX_STACK_ARG(method,"method")
	HX_STACK_ARG(args,"args")
{
		HX_STACK_LINE(485)
		return ::snow::utils::Libs_obj::load(library,method,args);
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Snow_obj,load,return )

Dynamic Snow_obj::next_list;

Void Snow_obj::next( Dynamic func){
{
		HX_STACK_FRAME("snow.Snow","next",0xbd0204f3,"snow.Snow.next","snow/Snow.hx",495,0x86524d2f)
		HX_STACK_ARG(func,"func")
		HX_STACK_LINE(495)
		if (((func != null()))){
			HX_STACK_LINE(496)
			::snow::Snow_obj::next_list->__Field(HX_CSTRING("push"),true)(func);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Snow_obj,next,(void))


Snow_obj::Snow_obj()
{
}

void Snow_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Snow);
	HX_MARK_MEMBER_NAME(host,"host");
	HX_MARK_MEMBER_NAME(config,"config");
	HX_MARK_MEMBER_NAME(snow_config,"snow_config");
	HX_MARK_MEMBER_NAME(freeze,"freeze");
	HX_MARK_MEMBER_NAME(io,"io");
	HX_MARK_MEMBER_NAME(input,"input");
	HX_MARK_MEMBER_NAME(assets,"assets");
	HX_MARK_MEMBER_NAME(audio,"audio");
	HX_MARK_MEMBER_NAME(windowing,"windowing");
	HX_MARK_MEMBER_NAME(shutting_down,"shutting_down");
	HX_MARK_MEMBER_NAME(has_shutdown,"has_shutdown");
	HX_MARK_MEMBER_NAME(window,"window");
	HX_MARK_MEMBER_NAME(was_ready,"was_ready");
	HX_MARK_MEMBER_NAME(is_ready,"is_ready");
	HX_MARK_END_CLASS();
}

void Snow_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(host,"host");
	HX_VISIT_MEMBER_NAME(config,"config");
	HX_VISIT_MEMBER_NAME(snow_config,"snow_config");
	HX_VISIT_MEMBER_NAME(freeze,"freeze");
	HX_VISIT_MEMBER_NAME(io,"io");
	HX_VISIT_MEMBER_NAME(input,"input");
	HX_VISIT_MEMBER_NAME(assets,"assets");
	HX_VISIT_MEMBER_NAME(audio,"audio");
	HX_VISIT_MEMBER_NAME(windowing,"windowing");
	HX_VISIT_MEMBER_NAME(shutting_down,"shutting_down");
	HX_VISIT_MEMBER_NAME(has_shutdown,"has_shutdown");
	HX_VISIT_MEMBER_NAME(window,"window");
	HX_VISIT_MEMBER_NAME(was_ready,"was_ready");
	HX_VISIT_MEMBER_NAME(is_ready,"is_ready");
}

Dynamic Snow_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"io") ) { return io; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"core") ) { return core; }
		if (HX_FIELD_EQ(inName,"load") ) { return load_dyn(); }
		if (HX_FIELD_EQ(inName,"next") ) { return next_dyn(); }
		if (HX_FIELD_EQ(inName,"time") ) { return get_time(); }
		if (HX_FIELD_EQ(inName,"host") ) { return host; }
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"input") ) { return input; }
		if (HX_FIELD_EQ(inName,"audio") ) { return audio; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"config") ) { return config; }
		if (HX_FIELD_EQ(inName,"freeze") ) { return freeze; }
		if (HX_FIELD_EQ(inName,"assets") ) { return assets; }
		if (HX_FIELD_EQ(inName,"window") ) { return window; }
		if (HX_FIELD_EQ(inName,"render") ) { return render_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"uniqueid") ) { return get_uniqueid(); }
		if (HX_FIELD_EQ(inName,"is_ready") ) { return is_ready; }
		if (HX_FIELD_EQ(inName,"shutdown") ) { return shutdown_dyn(); }
		if (HX_FIELD_EQ(inName,"get_time") ) { return get_time_dyn(); }
		if (HX_FIELD_EQ(inName,"on_event") ) { return on_event_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"next_list") ) { return next_list; }
		if (HX_FIELD_EQ(inName,"windowing") ) { return windowing; }
		if (HX_FIELD_EQ(inName,"was_ready") ) { return was_ready; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"set_freeze") ) { return set_freeze_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"snow_config") ) { return snow_config; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"has_shutdown") ) { return has_shutdown; }
		if (HX_FIELD_EQ(inName,"on_snow_init") ) { return on_snow_init_dyn(); }
		if (HX_FIELD_EQ(inName,"get_uniqueid") ) { return get_uniqueid_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"shutting_down") ) { return shutting_down; }
		if (HX_FIELD_EQ(inName,"on_snow_ready") ) { return on_snow_ready_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"on_snow_update") ) { return on_snow_update_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"do_internal_update") ) { return do_internal_update_dyn(); }
		if (HX_FIELD_EQ(inName,"default_asset_list") ) { return default_asset_list_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"dispatch_system_event") ) { return dispatch_system_event_dyn(); }
		if (HX_FIELD_EQ(inName,"default_render_config") ) { return default_render_config_dyn(); }
		if (HX_FIELD_EQ(inName,"default_window_config") ) { return default_window_config_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"default_runtime_config") ) { return default_runtime_config_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Snow_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"io") ) { io=inValue.Cast< ::snow::io::IO >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"core") ) { core=inValue.Cast< ::snow::platform::native::Core >(); return inValue; }
		if (HX_FIELD_EQ(inName,"host") ) { host=inValue.Cast< ::snow::App >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"input") ) { input=inValue.Cast< ::snow::input::Input >(); return inValue; }
		if (HX_FIELD_EQ(inName,"audio") ) { audio=inValue.Cast< ::snow::audio::Audio >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"config") ) { config=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"freeze") ) { if (inCallProp) return set_freeze(inValue);freeze=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"assets") ) { assets=inValue.Cast< ::snow::assets::Assets >(); return inValue; }
		if (HX_FIELD_EQ(inName,"window") ) { window=inValue.Cast< ::snow::window::Window >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"is_ready") ) { is_ready=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"next_list") ) { next_list=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"windowing") ) { windowing=inValue.Cast< ::snow::window::Windowing >(); return inValue; }
		if (HX_FIELD_EQ(inName,"was_ready") ) { was_ready=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"snow_config") ) { snow_config=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"has_shutdown") ) { has_shutdown=inValue.Cast< bool >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"shutting_down") ) { shutting_down=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Snow_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("time"));
	outFields->push(HX_CSTRING("uniqueid"));
	outFields->push(HX_CSTRING("host"));
	outFields->push(HX_CSTRING("config"));
	outFields->push(HX_CSTRING("snow_config"));
	outFields->push(HX_CSTRING("freeze"));
	outFields->push(HX_CSTRING("io"));
	outFields->push(HX_CSTRING("input"));
	outFields->push(HX_CSTRING("assets"));
	outFields->push(HX_CSTRING("audio"));
	outFields->push(HX_CSTRING("windowing"));
	outFields->push(HX_CSTRING("shutting_down"));
	outFields->push(HX_CSTRING("has_shutdown"));
	outFields->push(HX_CSTRING("window"));
	outFields->push(HX_CSTRING("was_ready"));
	outFields->push(HX_CSTRING("is_ready"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("core"),
	HX_CSTRING("load"),
	HX_CSTRING("next_list"),
	HX_CSTRING("next"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::snow::App*/ ,(int)offsetof(Snow_obj,host),HX_CSTRING("host")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Snow_obj,config),HX_CSTRING("config")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Snow_obj,snow_config),HX_CSTRING("snow_config")},
	{hx::fsBool,(int)offsetof(Snow_obj,freeze),HX_CSTRING("freeze")},
	{hx::fsObject /*::snow::io::IO*/ ,(int)offsetof(Snow_obj,io),HX_CSTRING("io")},
	{hx::fsObject /*::snow::input::Input*/ ,(int)offsetof(Snow_obj,input),HX_CSTRING("input")},
	{hx::fsObject /*::snow::assets::Assets*/ ,(int)offsetof(Snow_obj,assets),HX_CSTRING("assets")},
	{hx::fsObject /*::snow::audio::Audio*/ ,(int)offsetof(Snow_obj,audio),HX_CSTRING("audio")},
	{hx::fsObject /*::snow::window::Windowing*/ ,(int)offsetof(Snow_obj,windowing),HX_CSTRING("windowing")},
	{hx::fsBool,(int)offsetof(Snow_obj,shutting_down),HX_CSTRING("shutting_down")},
	{hx::fsBool,(int)offsetof(Snow_obj,has_shutdown),HX_CSTRING("has_shutdown")},
	{hx::fsObject /*::snow::window::Window*/ ,(int)offsetof(Snow_obj,window),HX_CSTRING("window")},
	{hx::fsBool,(int)offsetof(Snow_obj,was_ready),HX_CSTRING("was_ready")},
	{hx::fsBool,(int)offsetof(Snow_obj,is_ready),HX_CSTRING("is_ready")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("host"),
	HX_CSTRING("config"),
	HX_CSTRING("snow_config"),
	HX_CSTRING("freeze"),
	HX_CSTRING("io"),
	HX_CSTRING("input"),
	HX_CSTRING("assets"),
	HX_CSTRING("audio"),
	HX_CSTRING("windowing"),
	HX_CSTRING("shutting_down"),
	HX_CSTRING("has_shutdown"),
	HX_CSTRING("window"),
	HX_CSTRING("was_ready"),
	HX_CSTRING("is_ready"),
	HX_CSTRING("init"),
	HX_CSTRING("shutdown"),
	HX_CSTRING("get_time"),
	HX_CSTRING("on_snow_init"),
	HX_CSTRING("on_snow_ready"),
	HX_CSTRING("do_internal_update"),
	HX_CSTRING("render"),
	HX_CSTRING("on_snow_update"),
	HX_CSTRING("dispatch_system_event"),
	HX_CSTRING("on_event"),
	HX_CSTRING("set_freeze"),
	HX_CSTRING("default_runtime_config"),
	HX_CSTRING("default_asset_list"),
	HX_CSTRING("default_render_config"),
	HX_CSTRING("default_window_config"),
	HX_CSTRING("get_uniqueid"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Snow_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Snow_obj::core,"core");
	HX_MARK_MEMBER_NAME(Snow_obj::next_list,"next_list");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Snow_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Snow_obj::core,"core");
	HX_VISIT_MEMBER_NAME(Snow_obj::next_list,"next_list");
};

#endif

Class Snow_obj::__mClass;

void Snow_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("snow.Snow"), hx::TCanCast< Snow_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatics
#endif
#ifdef HXCPP_SCRIPTABLE
    , sMemberStorageInfo
#endif
);
}

void Snow_obj::__boot()
{
}

} // end namespace snow
