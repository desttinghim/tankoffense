#include <hxcpp.h>

#ifndef INCLUDED_Luxe
#include <Luxe.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_format_JsonParser
#include <haxe/format/JsonParser.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_luxe_Audio
#include <luxe/Audio.h>
#endif
#ifndef INCLUDED_luxe_Camera
#include <luxe/Camera.h>
#endif
#ifndef INCLUDED_luxe_Core
#include <luxe/Core.h>
#endif
#ifndef INCLUDED_luxe_Debug
#include <luxe/Debug.h>
#endif
#ifndef INCLUDED_luxe_Draw
#include <luxe/Draw.h>
#endif
#ifndef INCLUDED_luxe_Emitter
#include <luxe/Emitter.h>
#endif
#ifndef INCLUDED_luxe_Entity
#include <luxe/Entity.h>
#endif
#ifndef INCLUDED_luxe_Events
#include <luxe/Events.h>
#endif
#ifndef INCLUDED_luxe_Input
#include <luxe/Input.h>
#endif
#ifndef INCLUDED_luxe_Objects
#include <luxe/Objects.h>
#endif
#ifndef INCLUDED_luxe_Physics
#include <luxe/Physics.h>
#endif
#ifndef INCLUDED_luxe_Scene
#include <luxe/Scene.h>
#endif
#ifndef INCLUDED_luxe_Screen
#include <luxe/Screen.h>
#endif
#ifndef INCLUDED_luxe_Timer
#include <luxe/Timer.h>
#endif
#ifndef INCLUDED_luxe_resource_DataResource
#include <luxe/resource/DataResource.h>
#endif
#ifndef INCLUDED_luxe_resource_JSONResource
#include <luxe/resource/JSONResource.h>
#endif
#ifndef INCLUDED_luxe_resource_Resource
#include <luxe/resource/Resource.h>
#endif
#ifndef INCLUDED_luxe_resource_ResourceManager
#include <luxe/resource/ResourceManager.h>
#endif
#ifndef INCLUDED_luxe_resource_SoundResource
#include <luxe/resource/SoundResource.h>
#endif
#ifndef INCLUDED_luxe_resource_TextResource
#include <luxe/resource/TextResource.h>
#endif
#ifndef INCLUDED_luxe_utils_Utils
#include <luxe/utils/Utils.h>
#endif
#ifndef INCLUDED_phoenix_BitmapFont
#include <phoenix/BitmapFont.h>
#endif
#ifndef INCLUDED_phoenix_Renderer
#include <phoenix/Renderer.h>
#endif
#ifndef INCLUDED_phoenix_Shader
#include <phoenix/Shader.h>
#endif
#ifndef INCLUDED_phoenix_Texture
#include <phoenix/Texture.h>
#endif
#ifndef INCLUDED_phoenix_Vector
#include <phoenix/Vector.h>
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
#ifndef INCLUDED_snow_assets_AssetBytes
#include <snow/assets/AssetBytes.h>
#endif
#ifndef INCLUDED_snow_assets_AssetText
#include <snow/assets/AssetText.h>
#endif
#ifndef INCLUDED_snow_assets_Assets
#include <snow/assets/Assets.h>
#endif
#ifndef INCLUDED_snow_audio_SoundBinding
#include <snow/audio/SoundBinding.h>
#endif
#ifndef INCLUDED_snow_io_IO
#include <snow/io/IO.h>
#endif
#ifndef INCLUDED_snow_platform_native_Core
#include <snow/platform/native/Core.h>
#endif
#ifndef INCLUDED_snow_platform_native_audio_Sound
#include <snow/platform/native/audio/Sound.h>
#endif
#ifndef INCLUDED_snow_platform_native_audio_openal_Sound
#include <snow/platform/native/audio/openal/Sound.h>
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

Void Luxe_obj::__construct()
{
	return null();
}

//Luxe_obj::~Luxe_obj() { }

Dynamic Luxe_obj::__CreateEmpty() { return  new Luxe_obj; }
hx::ObjectPtr< Luxe_obj > Luxe_obj::__new()
{  hx::ObjectPtr< Luxe_obj > result = new Luxe_obj();
	result->__construct();
	return result;}

Dynamic Luxe_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Luxe_obj > result = new Luxe_obj();
	result->__construct();
	return result;}

::phoenix::Vector Luxe_obj::mouse;

::luxe::Core Luxe_obj::core;

::luxe::Debug Luxe_obj::debug;

::luxe::Draw Luxe_obj::draw;

::luxe::Audio Luxe_obj::audio;

::luxe::Timer Luxe_obj::timer;

::luxe::Events Luxe_obj::events;

::luxe::Input Luxe_obj::input;

::luxe::Scene Luxe_obj::scene;

::luxe::utils::Utils Luxe_obj::utils;

::luxe::Physics Luxe_obj::physics;

::luxe::Camera Luxe_obj::camera;

::luxe::resource::ResourceManager Luxe_obj::resources;

::phoenix::Renderer Luxe_obj::renderer;

Float Luxe_obj::time;

::luxe::Screen Luxe_obj::screen;

::String Luxe_obj::version;

::String Luxe_obj::build;

Void Luxe_obj::on( ::String event,Dynamic handler){
{
		HX_STACK_FRAME("Luxe","on",0x7b1beab7,"Luxe.on","Luxe.hx",86,0x7b1be4a8)
		HX_STACK_ARG(event,"event")
		HX_STACK_ARG(handler,"handler")
		HX_STACK_LINE(86)
		::Luxe_obj::core->emitter->on(event,handler,hx::SourceInfo(HX_CSTRING("Luxe.hx"),86,HX_CSTRING("Luxe"),HX_CSTRING("on")));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Luxe_obj,on,(void))

bool Luxe_obj::off( ::String event,Dynamic handler){
	HX_STACK_FRAME("Luxe","off",0x3d516ed7,"Luxe.off","Luxe.hx",91,0x7b1be4a8)
	HX_STACK_ARG(event,"event")
	HX_STACK_ARG(handler,"handler")
	HX_STACK_LINE(91)
	return ::Luxe_obj::core->emitter->off(event,handler,hx::SourceInfo(HX_CSTRING("Luxe.hx"),91,HX_CSTRING("Luxe"),HX_CSTRING("off")));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Luxe_obj,off,return )

::luxe::Screen Luxe_obj::get_screen( ){
	HX_STACK_FRAME("Luxe","get_screen",0x36878ccd,"Luxe.get_screen","Luxe.hx",96,0x7b1be4a8)
	HX_STACK_LINE(96)
	return ::Luxe_obj::core->screen;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Luxe_obj,get_screen,return )

Float Luxe_obj::get_time( ){
	HX_STACK_FRAME("Luxe","get_time",0xbb5e532e,"Luxe.get_time","Luxe.hx",102,0x7b1be4a8)
	HX_STACK_LINE(102)
	return ::snow::Snow_obj::core->timestamp();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Luxe_obj,get_time,return )

Void Luxe_obj::shutdown( ){
{
		HX_STACK_FRAME("Luxe","shutdown",0x59b2c82e,"Luxe.shutdown","Luxe.hx",109,0x7b1be4a8)
		HX_STACK_LINE(109)
		::Luxe_obj::core->shutdown();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Luxe_obj,shutdown,(void))

Void Luxe_obj::showConsole( bool _show){
{
		HX_STACK_FRAME("Luxe","showConsole",0xc5540b42,"Luxe.showConsole","Luxe.hx",116,0x7b1be4a8)
		HX_STACK_ARG(_show,"_show")
		HX_STACK_LINE(116)
		::Luxe_obj::core->show_console(_show);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Luxe_obj,showConsole,(void))

::luxe::resource::JSONResource Luxe_obj::loadJSON( ::String _id,Dynamic _onload,Dynamic __o__async){
Dynamic _async = __o__async.Default(false);
	HX_STACK_FRAME("Luxe","loadJSON",0xa5967ae6,"Luxe.loadJSON","Luxe.hx",121,0x7b1be4a8)
	HX_STACK_ARG(_id,"_id")
	HX_STACK_ARG(_onload,"_onload")
	HX_STACK_ARG(_async,"_async")
{
		HX_STACK_LINE(121)
		Dynamic _onload1 = Dynamic( Array_obj<Dynamic>::__new().Add(_onload));		HX_STACK_VAR(_onload1,"_onload1");
		HX_STACK_LINE(123)
		Array< ::Dynamic > res = Array_obj< ::Dynamic >::__new().Add(::luxe::resource::JSONResource_obj::__new(_id,null(),::Luxe_obj::resources));		HX_STACK_VAR(res,"res");
		struct _Function_1_1{
			inline static Dynamic Block( Dynamic &_onload1,Dynamic &_async,Array< ::Dynamic > &res){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Luxe.hx",125,0x7b1be4a8)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("async") , _async,false);

					HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,Dynamic,_onload1,Array< ::Dynamic >,res)
					Void run(::snow::assets::AssetText _asset){
						HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","Luxe.hx",127,0x7b1be4a8)
						HX_STACK_ARG(_asset,"_asset")
						{
							HX_STACK_LINE(129)
							res->__get((int)0).StaticCast< ::luxe::resource::JSONResource >()->json = ::haxe::format::JsonParser_obj::__new(_asset->text)->parseRec();
							HX_STACK_LINE(131)
							if (((_onload1->__GetItem((int)0) != null()))){
								HX_STACK_LINE(132)
								_onload1->__GetItem((int)0)(res->__get((int)0).StaticCast< ::luxe::resource::JSONResource >()).Cast< Void >();
							}
							HX_STACK_LINE(135)
							::Luxe_obj::resources->cache(res->__get((int)0).StaticCast< ::luxe::resource::JSONResource >());
						}
						return null();
					}
					HX_END_LOCAL_FUNC1((void))

					__result->Add(HX_CSTRING("onload") ,  Dynamic(new _Function_2_1(_onload1,res)),true);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(125)
		::Luxe_obj::core->app->assets->text(_id,_Function_1_1::Block(_onload1,_async,res));
		HX_STACK_LINE(140)
		return res->__get((int)0).StaticCast< ::luxe::resource::JSONResource >();
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Luxe_obj,loadJSON,return )

::luxe::resource::TextResource Luxe_obj::loadText( ::String _id,Dynamic _onload,Dynamic __o__async){
Dynamic _async = __o__async.Default(false);
	HX_STACK_FRAME("Luxe","loadText",0xac40698b,"Luxe.loadText","Luxe.hx",144,0x7b1be4a8)
	HX_STACK_ARG(_id,"_id")
	HX_STACK_ARG(_onload,"_onload")
	HX_STACK_ARG(_async,"_async")
{
		HX_STACK_LINE(144)
		Dynamic _onload1 = Dynamic( Array_obj<Dynamic>::__new().Add(_onload));		HX_STACK_VAR(_onload1,"_onload1");
		HX_STACK_LINE(146)
		Array< ::Dynamic > res = Array_obj< ::Dynamic >::__new().Add(::luxe::resource::TextResource_obj::__new(_id,null(),::Luxe_obj::resources));		HX_STACK_VAR(res,"res");
		struct _Function_1_1{
			inline static Dynamic Block( Dynamic &_onload1,Dynamic &_async,Array< ::Dynamic > &res){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Luxe.hx",148,0x7b1be4a8)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("async") , _async,false);

					HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,Dynamic,_onload1,Array< ::Dynamic >,res)
					Void run(::snow::assets::AssetText _asset){
						HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","Luxe.hx",150,0x7b1be4a8)
						HX_STACK_ARG(_asset,"_asset")
						{
							HX_STACK_LINE(152)
							res->__get((int)0).StaticCast< ::luxe::resource::TextResource >()->text = _asset->text;
							HX_STACK_LINE(154)
							if (((_onload1->__GetItem((int)0) != null()))){
								HX_STACK_LINE(155)
								_onload1->__GetItem((int)0)(res->__get((int)0).StaticCast< ::luxe::resource::TextResource >()).Cast< Void >();
							}
							HX_STACK_LINE(158)
							::Luxe_obj::resources->cache(res->__get((int)0).StaticCast< ::luxe::resource::TextResource >());
						}
						return null();
					}
					HX_END_LOCAL_FUNC1((void))

					__result->Add(HX_CSTRING("onload") ,  Dynamic(new _Function_2_1(_onload1,res)),true);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(148)
		::Luxe_obj::core->app->assets->text(_id,_Function_1_1::Block(_onload1,_async,res));
		HX_STACK_LINE(163)
		return res->__get((int)0).StaticCast< ::luxe::resource::TextResource >();
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Luxe_obj,loadText,return )

::luxe::resource::DataResource Luxe_obj::loadData( ::String _id,Dynamic _onload,Dynamic __o__async){
Dynamic _async = __o__async.Default(false);
	HX_STACK_FRAME("Luxe","loadData",0xa1a9f308,"Luxe.loadData","Luxe.hx",168,0x7b1be4a8)
	HX_STACK_ARG(_id,"_id")
	HX_STACK_ARG(_onload,"_onload")
	HX_STACK_ARG(_async,"_async")
{
		HX_STACK_LINE(168)
		Dynamic _onload1 = Dynamic( Array_obj<Dynamic>::__new().Add(_onload));		HX_STACK_VAR(_onload1,"_onload1");
		HX_STACK_LINE(170)
		Array< ::Dynamic > res = Array_obj< ::Dynamic >::__new().Add(::luxe::resource::DataResource_obj::__new(_id,null(),::Luxe_obj::resources));		HX_STACK_VAR(res,"res");
		struct _Function_1_1{
			inline static Dynamic Block( Dynamic &_onload1,Dynamic &_async,Array< ::Dynamic > &res){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Luxe.hx",172,0x7b1be4a8)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("async") , _async,false);

					HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,Dynamic,_onload1,Array< ::Dynamic >,res)
					Void run(::snow::assets::AssetBytes _asset){
						HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","Luxe.hx",174,0x7b1be4a8)
						HX_STACK_ARG(_asset,"_asset")
						{
							HX_STACK_LINE(176)
							res->__get((int)0).StaticCast< ::luxe::resource::DataResource >()->data = _asset->bytes;
							HX_STACK_LINE(178)
							if (((_onload1->__GetItem((int)0) != null()))){
								HX_STACK_LINE(179)
								_onload1->__GetItem((int)0)(res->__get((int)0).StaticCast< ::luxe::resource::DataResource >()).Cast< Void >();
							}
							HX_STACK_LINE(182)
							::Luxe_obj::resources->cache(res->__get((int)0).StaticCast< ::luxe::resource::DataResource >());
						}
						return null();
					}
					HX_END_LOCAL_FUNC1((void))

					__result->Add(HX_CSTRING("onload") ,  Dynamic(new _Function_2_1(_onload1,res)),true);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(172)
		::Luxe_obj::core->app->assets->bytes(_id,_Function_1_1::Block(_onload1,_async,res));
		HX_STACK_LINE(187)
		return res->__get((int)0).StaticCast< ::luxe::resource::DataResource >();
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Luxe_obj,loadData,return )

::luxe::resource::SoundResource Luxe_obj::loadSound( ::String _name,::String _id,Dynamic __o__is_music,Dynamic _onload){
Dynamic _is_music = __o__is_music.Default(false);
	HX_STACK_FRAME("Luxe","loadSound",0x7f4f3231,"Luxe.loadSound","Luxe.hx",192,0x7b1be4a8)
	HX_STACK_ARG(_name,"_name")
	HX_STACK_ARG(_id,"_id")
	HX_STACK_ARG(_is_music,"_is_music")
	HX_STACK_ARG(_onload,"_onload")
{
		HX_STACK_LINE(194)
		::luxe::resource::SoundResource existing = ::Luxe_obj::resources->find_sound(_id);		HX_STACK_VAR(existing,"existing");
		HX_STACK_LINE(195)
		if (((existing != null()))){
			HX_STACK_LINE(197)
			::haxe::Log_obj::trace((HX_CSTRING("     i / luxe / ") + (((HX_CSTRING("sound at ") + _id) + HX_CSTRING(" was already a registered resource, returning existing instance")))),hx::SourceInfo(HX_CSTRING("Luxe.hx"),197,HX_CSTRING("Luxe"),HX_CSTRING("loadSound")));
			HX_STACK_LINE(199)
			if (((_onload != null()))){
				HX_STACK_LINE(200)
				_onload(existing).Cast< Void >();
			}
			HX_STACK_LINE(203)
			return existing;
		}
		HX_STACK_LINE(206)
		::Luxe_obj::audio->create(_id,_name,_is_music);
		HX_STACK_LINE(208)
		::luxe::resource::SoundResource res = ::luxe::resource::SoundResource_obj::__new(_id,_name,::Luxe_obj::resources);		HX_STACK_VAR(res,"res");
		HX_STACK_LINE(210)
		if (((_onload != null()))){
			HX_STACK_LINE(211)
			_onload(res).Cast< Void >();
		}
		HX_STACK_LINE(214)
		::Luxe_obj::resources->cache(res);
		HX_STACK_LINE(216)
		return res;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Luxe_obj,loadSound,return )

::phoenix::Texture Luxe_obj::loadTexture( ::String _id,Dynamic _onload,Dynamic __o__silent){
Dynamic _silent = __o__silent.Default(false);
	HX_STACK_FRAME("Luxe","loadTexture",0x3f610abd,"Luxe.loadTexture","Luxe.hx",223,0x7b1be4a8)
	HX_STACK_ARG(_id,"_id")
	HX_STACK_ARG(_onload,"_onload")
	HX_STACK_ARG(_silent,"_silent")
{
		HX_STACK_LINE(223)
		return ::phoenix::Texture_obj::load(_id,_onload,_silent);
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Luxe_obj,loadTexture,return )

Void Luxe_obj::loadTextures( Array< ::String > _ids,Dynamic _onload,Dynamic __o__silent){
Dynamic _silent = __o__silent.Default(false);
	HX_STACK_FRAME("Luxe","loadTextures",0x35885b16,"Luxe.loadTextures","Luxe.hx",228,0x7b1be4a8)
	HX_STACK_ARG(_ids,"_ids")
	HX_STACK_ARG(_onload,"_onload")
	HX_STACK_ARG(_silent,"_silent")
{
		HX_STACK_LINE(228)
		Dynamic _onload1 = Dynamic( Array_obj<Dynamic>::__new().Add(_onload));		HX_STACK_VAR(_onload1,"_onload1");
		HX_STACK_LINE(230)
		Array< int > total_count = Array_obj< int >::__new().Add(_ids->length);		HX_STACK_VAR(total_count,"total_count");
		HX_STACK_LINE(231)
		Array< int > loaded_count = Array_obj< int >::__new().Add((int)0);		HX_STACK_VAR(loaded_count,"loaded_count");
		HX_STACK_LINE(232)
		Array< ::Dynamic > loaded = Array_obj< ::Dynamic >::__new().Add(Array_obj< ::Dynamic >::__new());		HX_STACK_VAR(loaded,"loaded");

		HX_BEGIN_LOCAL_FUNC_S4(hx::LocalFunc,_Function_1_1,Dynamic,_onload1,Array< ::Dynamic >,loaded,Array< int >,loaded_count,Array< int >,total_count)
		Void run(::phoenix::Texture texture){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","Luxe.hx",234,0x7b1be4a8)
			HX_STACK_ARG(texture,"texture")
			{
				HX_STACK_LINE(236)
				loaded->__get((int)0).StaticCast< Array< ::Dynamic > >()->push(texture);
				HX_STACK_LINE(237)
				(loaded_count[(int)0])++;
				HX_STACK_LINE(239)
				if (((loaded_count->__get((int)0) == total_count->__get((int)0)))){
					HX_STACK_LINE(240)
					_onload1->__GetItem((int)0)(loaded->__get((int)0).StaticCast< Array< ::Dynamic > >()).Cast< Void >();
				}
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(234)
		Dynamic on_single_texture_complete =  Dynamic(new _Function_1_1(_onload1,loaded,loaded_count,total_count));		HX_STACK_VAR(on_single_texture_complete,"on_single_texture_complete");
		HX_STACK_LINE(245)
		{
			HX_STACK_LINE(245)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(245)
			while((true)){
				HX_STACK_LINE(245)
				if ((!(((_g < _ids->length))))){
					HX_STACK_LINE(245)
					break;
				}
				HX_STACK_LINE(245)
				::String _id = _ids->__get(_g);		HX_STACK_VAR(_id,"_id");
				HX_STACK_LINE(245)
				++(_g);
				HX_STACK_LINE(246)
				::Luxe_obj::loadTexture(_id,on_single_texture_complete,_silent);
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Luxe_obj,loadTextures,(void))

::phoenix::BitmapFont Luxe_obj::loadFont( ::String _id,::String _path,Dynamic _onload,Dynamic __o__silent){
Dynamic _silent = __o__silent.Default(false);
	HX_STACK_FRAME("Luxe","loadFont",0xa306faad,"Luxe.loadFont","Luxe.hx",254,0x7b1be4a8)
	HX_STACK_ARG(_id,"_id")
	HX_STACK_ARG(_path,"_path")
	HX_STACK_ARG(_onload,"_onload")
	HX_STACK_ARG(_silent,"_silent")
{
		struct _Function_1_1{
			inline static Dynamic Block( Dynamic &_silent,::String &_id,::String &_path,Dynamic &_onload){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Luxe.hx",254,0x7b1be4a8)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("id") , _id,false);
					__result->Add(HX_CSTRING("path") , _path,false);
					__result->Add(HX_CSTRING("onload") , _onload,false);
					__result->Add(HX_CSTRING("silent") , _silent,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(254)
		return ::phoenix::BitmapFont_obj::load(_Function_1_1::Block(_silent,_id,_path,_onload));
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Luxe_obj,loadFont,return )

::phoenix::Shader Luxe_obj::loadShader( ::String __o__ps_id,::String __o__vs_id,Dynamic _onload,Dynamic __o__silent){
::String _ps_id = __o__ps_id.Default(HX_CSTRING("default"));
::String _vs_id = __o__vs_id.Default(HX_CSTRING("default"));
Dynamic _silent = __o__silent.Default(false);
	HX_STACK_FRAME("Luxe","loadShader",0xd0eecf83,"Luxe.loadShader","Luxe.hx",261,0x7b1be4a8)
	HX_STACK_ARG(_ps_id,"_ps_id")
	HX_STACK_ARG(_vs_id,"_vs_id")
	HX_STACK_ARG(_onload,"_onload")
	HX_STACK_ARG(_silent,"_silent")
{
		HX_STACK_LINE(261)
		return ::phoenix::Shader_obj::load(_ps_id,_vs_id,_onload,_silent);
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Luxe_obj,loadShader,return )

Void Luxe_obj::openURL( ::String _url){
{
		HX_STACK_FRAME("Luxe","openURL",0x4de86d2d,"Luxe.openURL","Luxe.hx",270,0x7b1be4a8)
		HX_STACK_ARG(_url,"_url")
		HX_STACK_LINE(270)
		::Luxe_obj::core->app->io->url_open(_url);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Luxe_obj,openURL,(void))

Float Luxe_obj::get_timescale( ){
	HX_STACK_FRAME("Luxe","get_timescale",0xcc0e349c,"Luxe.get_timescale","Luxe.hx",278,0x7b1be4a8)
	HX_STACK_LINE(278)
	return ::Luxe_obj::core->timescale;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Luxe_obj,get_timescale,return )

Float Luxe_obj::get_fixed_delta( ){
	HX_STACK_FRAME("Luxe","get_fixed_delta",0x4418c6ac,"Luxe.get_fixed_delta","Luxe.hx",282,0x7b1be4a8)
	HX_STACK_LINE(282)
	return ::Luxe_obj::core->fixed_delta;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Luxe_obj,get_fixed_delta,return )

Float Luxe_obj::get_update_rate( ){
	HX_STACK_FRAME("Luxe","get_update_rate",0xda8e7715,"Luxe.get_update_rate","Luxe.hx",286,0x7b1be4a8)
	HX_STACK_LINE(286)
	return ::Luxe_obj::core->update_rate;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Luxe_obj,get_update_rate,return )

Float Luxe_obj::get_max_frame_time( ){
	HX_STACK_FRAME("Luxe","get_max_frame_time",0xbee403fb,"Luxe.get_max_frame_time","Luxe.hx",290,0x7b1be4a8)
	HX_STACK_LINE(290)
	return ::Luxe_obj::core->max_frame_time;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Luxe_obj,get_max_frame_time,return )

Float Luxe_obj::get_dt( ){
	HX_STACK_FRAME("Luxe","get_dt",0xb22c2471,"Luxe.get_dt","Luxe.hx",294,0x7b1be4a8)
	HX_STACK_LINE(294)
	return ::Luxe_obj::core->delta_time;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Luxe_obj,get_dt,return )

Float Luxe_obj::get_delta_sim( ){
	HX_STACK_FRAME("Luxe","get_delta_sim",0x2e25294f,"Luxe.get_delta_sim","Luxe.hx",298,0x7b1be4a8)
	HX_STACK_LINE(298)
	return ::Luxe_obj::core->delta_sim;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Luxe_obj,get_delta_sim,return )

Float Luxe_obj::get_last_frame_start( ){
	HX_STACK_FRAME("Luxe","get_last_frame_start",0x964e2988,"Luxe.get_last_frame_start","Luxe.hx",302,0x7b1be4a8)
	HX_STACK_LINE(302)
	return ::Luxe_obj::core->last_frame_start;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Luxe_obj,get_last_frame_start,return )

Float Luxe_obj::get_current_time( ){
	HX_STACK_FRAME("Luxe","get_current_time",0x6acb6d34,"Luxe.get_current_time","Luxe.hx",306,0x7b1be4a8)
	HX_STACK_LINE(306)
	return ::Luxe_obj::core->current_time;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Luxe_obj,get_current_time,return )

Float Luxe_obj::get_cur_frame_start( ){
	HX_STACK_FRAME("Luxe","get_cur_frame_start",0x7da88190,"Luxe.get_cur_frame_start","Luxe.hx",310,0x7b1be4a8)
	HX_STACK_LINE(310)
	return ::Luxe_obj::core->cur_frame_start;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Luxe_obj,get_cur_frame_start,return )

Float Luxe_obj::get_alpha( ){
	HX_STACK_FRAME("Luxe","get_alpha",0x488b5d1d,"Luxe.get_alpha","Luxe.hx",314,0x7b1be4a8)
	HX_STACK_LINE(314)
	return ::Luxe_obj::core->alpha;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Luxe_obj,get_alpha,return )

Float Luxe_obj::set_timescale( Float value){
	HX_STACK_FRAME("Luxe","set_timescale",0x111416a8,"Luxe.set_timescale","Luxe.hx",320,0x7b1be4a8)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(320)
	return ::Luxe_obj::core->timescale = value;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Luxe_obj,set_timescale,return )

Float Luxe_obj::set_fixed_delta( Float value){
	HX_STACK_FRAME("Luxe","set_fixed_delta",0x3fe443b8,"Luxe.set_fixed_delta","Luxe.hx",324,0x7b1be4a8)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(324)
	return ::Luxe_obj::core->fixed_delta = value;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Luxe_obj,set_fixed_delta,return )

Float Luxe_obj::set_update_rate( Float value){
	HX_STACK_FRAME("Luxe","set_update_rate",0xd659f421,"Luxe.set_update_rate","Luxe.hx",328,0x7b1be4a8)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(328)
	return ::Luxe_obj::core->update_rate = value;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Luxe_obj,set_update_rate,return )

Float Luxe_obj::set_max_frame_time( Float value){
	HX_STACK_FRAME("Luxe","set_max_frame_time",0x9b93366f,"Luxe.set_max_frame_time","Luxe.hx",332,0x7b1be4a8)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(332)
	return ::Luxe_obj::core->max_frame_time = value;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Luxe_obj,set_max_frame_time,return )

Float Luxe_obj::set_dt( Float value){
	HX_STACK_FRAME("Luxe","set_dt",0x7e7478e5,"Luxe.set_dt","Luxe.hx",336,0x7b1be4a8)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(336)
	return ::Luxe_obj::core->delta_time = value;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Luxe_obj,set_dt,return )

Float Luxe_obj::set_delta_sim( Float value){
	HX_STACK_FRAME("Luxe","set_delta_sim",0x732b0b5b,"Luxe.set_delta_sim","Luxe.hx",340,0x7b1be4a8)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(340)
	return ::Luxe_obj::core->delta_sim = value;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Luxe_obj,set_delta_sim,return )

Float Luxe_obj::set_last_frame_start( Float value){
	HX_STACK_FRAME("Luxe","set_last_frame_start",0x6305e0fc,"Luxe.set_last_frame_start","Luxe.hx",344,0x7b1be4a8)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(344)
	return ::Luxe_obj::core->last_frame_start = value;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Luxe_obj,set_last_frame_start,return )

Float Luxe_obj::set_current_time( Float value){
	HX_STACK_FRAME("Luxe","set_current_time",0xc10d5aa8,"Luxe.set_current_time","Luxe.hx",348,0x7b1be4a8)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(348)
	return ::Luxe_obj::core->current_time = value;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Luxe_obj,set_current_time,return )

Float Luxe_obj::set_cur_frame_start( Float value){
	HX_STACK_FRAME("Luxe","set_cur_frame_start",0xba45749c,"Luxe.set_cur_frame_start","Luxe.hx",352,0x7b1be4a8)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(352)
	return ::Luxe_obj::core->cur_frame_start = value;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Luxe_obj,set_cur_frame_start,return )

Float Luxe_obj::set_alpha( Float value){
	HX_STACK_FRAME("Luxe","set_alpha",0x2bdc4929,"Luxe.set_alpha","Luxe.hx",356,0x7b1be4a8)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(356)
	return ::Luxe_obj::core->alpha = value;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Luxe_obj,set_alpha,return )


Luxe_obj::Luxe_obj()
{
}

Dynamic Luxe_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"dt") ) { return get_dt(); }
		if (HX_FIELD_EQ(inName,"on") ) { return on_dyn(); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"off") ) { return off_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"core") ) { return core; }
		if (HX_FIELD_EQ(inName,"draw") ) { return draw; }
		if (HX_FIELD_EQ(inName,"time") ) { return inCallProp ? get_time() : time; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"mouse") ) { return mouse; }
		if (HX_FIELD_EQ(inName,"debug") ) { return debug; }
		if (HX_FIELD_EQ(inName,"audio") ) { return audio; }
		if (HX_FIELD_EQ(inName,"timer") ) { return timer; }
		if (HX_FIELD_EQ(inName,"input") ) { return input; }
		if (HX_FIELD_EQ(inName,"scene") ) { return scene; }
		if (HX_FIELD_EQ(inName,"utils") ) { return utils; }
		if (HX_FIELD_EQ(inName,"build") ) { return build; }
		if (HX_FIELD_EQ(inName,"alpha") ) { return get_alpha(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"events") ) { return events; }
		if (HX_FIELD_EQ(inName,"camera") ) { return camera; }
		if (HX_FIELD_EQ(inName,"screen") ) { return inCallProp ? get_screen() : screen; }
		if (HX_FIELD_EQ(inName,"get_dt") ) { return get_dt_dyn(); }
		if (HX_FIELD_EQ(inName,"set_dt") ) { return set_dt_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"physics") ) { return physics; }
		if (HX_FIELD_EQ(inName,"version") ) { return version; }
		if (HX_FIELD_EQ(inName,"openURL") ) { return openURL_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"renderer") ) { return renderer; }
		if (HX_FIELD_EQ(inName,"get_time") ) { return get_time_dyn(); }
		if (HX_FIELD_EQ(inName,"shutdown") ) { return shutdown_dyn(); }
		if (HX_FIELD_EQ(inName,"loadJSON") ) { return loadJSON_dyn(); }
		if (HX_FIELD_EQ(inName,"loadText") ) { return loadText_dyn(); }
		if (HX_FIELD_EQ(inName,"loadData") ) { return loadData_dyn(); }
		if (HX_FIELD_EQ(inName,"loadFont") ) { return loadFont_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"resources") ) { return resources; }
		if (HX_FIELD_EQ(inName,"timescale") ) { return get_timescale(); }
		if (HX_FIELD_EQ(inName,"delta_sim") ) { return get_delta_sim(); }
		if (HX_FIELD_EQ(inName,"loadSound") ) { return loadSound_dyn(); }
		if (HX_FIELD_EQ(inName,"get_alpha") ) { return get_alpha_dyn(); }
		if (HX_FIELD_EQ(inName,"set_alpha") ) { return set_alpha_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_screen") ) { return get_screen_dyn(); }
		if (HX_FIELD_EQ(inName,"loadShader") ) { return loadShader_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"fixed_delta") ) { return get_fixed_delta(); }
		if (HX_FIELD_EQ(inName,"update_rate") ) { return get_update_rate(); }
		if (HX_FIELD_EQ(inName,"showConsole") ) { return showConsole_dyn(); }
		if (HX_FIELD_EQ(inName,"loadTexture") ) { return loadTexture_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"current_time") ) { return get_current_time(); }
		if (HX_FIELD_EQ(inName,"loadTextures") ) { return loadTextures_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"get_timescale") ) { return get_timescale_dyn(); }
		if (HX_FIELD_EQ(inName,"get_delta_sim") ) { return get_delta_sim_dyn(); }
		if (HX_FIELD_EQ(inName,"set_timescale") ) { return set_timescale_dyn(); }
		if (HX_FIELD_EQ(inName,"set_delta_sim") ) { return set_delta_sim_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"max_frame_time") ) { return get_max_frame_time(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"cur_frame_start") ) { return get_cur_frame_start(); }
		if (HX_FIELD_EQ(inName,"get_fixed_delta") ) { return get_fixed_delta_dyn(); }
		if (HX_FIELD_EQ(inName,"get_update_rate") ) { return get_update_rate_dyn(); }
		if (HX_FIELD_EQ(inName,"set_fixed_delta") ) { return set_fixed_delta_dyn(); }
		if (HX_FIELD_EQ(inName,"set_update_rate") ) { return set_update_rate_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"last_frame_start") ) { return get_last_frame_start(); }
		if (HX_FIELD_EQ(inName,"get_current_time") ) { return get_current_time_dyn(); }
		if (HX_FIELD_EQ(inName,"set_current_time") ) { return set_current_time_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"get_max_frame_time") ) { return get_max_frame_time_dyn(); }
		if (HX_FIELD_EQ(inName,"set_max_frame_time") ) { return set_max_frame_time_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"get_cur_frame_start") ) { return get_cur_frame_start_dyn(); }
		if (HX_FIELD_EQ(inName,"set_cur_frame_start") ) { return set_cur_frame_start_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"get_last_frame_start") ) { return get_last_frame_start_dyn(); }
		if (HX_FIELD_EQ(inName,"set_last_frame_start") ) { return set_last_frame_start_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Luxe_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"dt") ) { return set_dt(inValue); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"core") ) { core=inValue.Cast< ::luxe::Core >(); return inValue; }
		if (HX_FIELD_EQ(inName,"draw") ) { draw=inValue.Cast< ::luxe::Draw >(); return inValue; }
		if (HX_FIELD_EQ(inName,"time") ) { time=inValue.Cast< Float >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"mouse") ) { mouse=inValue.Cast< ::phoenix::Vector >(); return inValue; }
		if (HX_FIELD_EQ(inName,"debug") ) { debug=inValue.Cast< ::luxe::Debug >(); return inValue; }
		if (HX_FIELD_EQ(inName,"audio") ) { audio=inValue.Cast< ::luxe::Audio >(); return inValue; }
		if (HX_FIELD_EQ(inName,"timer") ) { timer=inValue.Cast< ::luxe::Timer >(); return inValue; }
		if (HX_FIELD_EQ(inName,"input") ) { input=inValue.Cast< ::luxe::Input >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scene") ) { scene=inValue.Cast< ::luxe::Scene >(); return inValue; }
		if (HX_FIELD_EQ(inName,"utils") ) { utils=inValue.Cast< ::luxe::utils::Utils >(); return inValue; }
		if (HX_FIELD_EQ(inName,"build") ) { build=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"alpha") ) { return set_alpha(inValue); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"events") ) { events=inValue.Cast< ::luxe::Events >(); return inValue; }
		if (HX_FIELD_EQ(inName,"camera") ) { camera=inValue.Cast< ::luxe::Camera >(); return inValue; }
		if (HX_FIELD_EQ(inName,"screen") ) { screen=inValue.Cast< ::luxe::Screen >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"physics") ) { physics=inValue.Cast< ::luxe::Physics >(); return inValue; }
		if (HX_FIELD_EQ(inName,"version") ) { version=inValue.Cast< ::String >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"renderer") ) { renderer=inValue.Cast< ::phoenix::Renderer >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"resources") ) { resources=inValue.Cast< ::luxe::resource::ResourceManager >(); return inValue; }
		if (HX_FIELD_EQ(inName,"timescale") ) { return set_timescale(inValue); }
		if (HX_FIELD_EQ(inName,"delta_sim") ) { return set_delta_sim(inValue); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"fixed_delta") ) { return set_fixed_delta(inValue); }
		if (HX_FIELD_EQ(inName,"update_rate") ) { return set_update_rate(inValue); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"current_time") ) { return set_current_time(inValue); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"max_frame_time") ) { return set_max_frame_time(inValue); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"cur_frame_start") ) { return set_cur_frame_start(inValue); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"last_frame_start") ) { return set_last_frame_start(inValue); }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Luxe_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("mouse"),
	HX_CSTRING("core"),
	HX_CSTRING("debug"),
	HX_CSTRING("draw"),
	HX_CSTRING("audio"),
	HX_CSTRING("timer"),
	HX_CSTRING("events"),
	HX_CSTRING("input"),
	HX_CSTRING("scene"),
	HX_CSTRING("utils"),
	HX_CSTRING("physics"),
	HX_CSTRING("camera"),
	HX_CSTRING("resources"),
	HX_CSTRING("renderer"),
	HX_CSTRING("time"),
	HX_CSTRING("screen"),
	HX_CSTRING("version"),
	HX_CSTRING("build"),
	HX_CSTRING("on"),
	HX_CSTRING("off"),
	HX_CSTRING("get_screen"),
	HX_CSTRING("get_time"),
	HX_CSTRING("shutdown"),
	HX_CSTRING("showConsole"),
	HX_CSTRING("loadJSON"),
	HX_CSTRING("loadText"),
	HX_CSTRING("loadData"),
	HX_CSTRING("loadSound"),
	HX_CSTRING("loadTexture"),
	HX_CSTRING("loadTextures"),
	HX_CSTRING("loadFont"),
	HX_CSTRING("loadShader"),
	HX_CSTRING("openURL"),
	HX_CSTRING("get_timescale"),
	HX_CSTRING("get_fixed_delta"),
	HX_CSTRING("get_update_rate"),
	HX_CSTRING("get_max_frame_time"),
	HX_CSTRING("get_dt"),
	HX_CSTRING("get_delta_sim"),
	HX_CSTRING("get_last_frame_start"),
	HX_CSTRING("get_current_time"),
	HX_CSTRING("get_cur_frame_start"),
	HX_CSTRING("get_alpha"),
	HX_CSTRING("set_timescale"),
	HX_CSTRING("set_fixed_delta"),
	HX_CSTRING("set_update_rate"),
	HX_CSTRING("set_max_frame_time"),
	HX_CSTRING("set_dt"),
	HX_CSTRING("set_delta_sim"),
	HX_CSTRING("set_last_frame_start"),
	HX_CSTRING("set_current_time"),
	HX_CSTRING("set_cur_frame_start"),
	HX_CSTRING("set_alpha"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Luxe_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Luxe_obj::mouse,"mouse");
	HX_MARK_MEMBER_NAME(Luxe_obj::core,"core");
	HX_MARK_MEMBER_NAME(Luxe_obj::debug,"debug");
	HX_MARK_MEMBER_NAME(Luxe_obj::draw,"draw");
	HX_MARK_MEMBER_NAME(Luxe_obj::audio,"audio");
	HX_MARK_MEMBER_NAME(Luxe_obj::timer,"timer");
	HX_MARK_MEMBER_NAME(Luxe_obj::events,"events");
	HX_MARK_MEMBER_NAME(Luxe_obj::input,"input");
	HX_MARK_MEMBER_NAME(Luxe_obj::scene,"scene");
	HX_MARK_MEMBER_NAME(Luxe_obj::utils,"utils");
	HX_MARK_MEMBER_NAME(Luxe_obj::physics,"physics");
	HX_MARK_MEMBER_NAME(Luxe_obj::camera,"camera");
	HX_MARK_MEMBER_NAME(Luxe_obj::resources,"resources");
	HX_MARK_MEMBER_NAME(Luxe_obj::renderer,"renderer");
	HX_MARK_MEMBER_NAME(Luxe_obj::time,"time");
	HX_MARK_MEMBER_NAME(Luxe_obj::screen,"screen");
	HX_MARK_MEMBER_NAME(Luxe_obj::version,"version");
	HX_MARK_MEMBER_NAME(Luxe_obj::build,"build");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Luxe_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Luxe_obj::mouse,"mouse");
	HX_VISIT_MEMBER_NAME(Luxe_obj::core,"core");
	HX_VISIT_MEMBER_NAME(Luxe_obj::debug,"debug");
	HX_VISIT_MEMBER_NAME(Luxe_obj::draw,"draw");
	HX_VISIT_MEMBER_NAME(Luxe_obj::audio,"audio");
	HX_VISIT_MEMBER_NAME(Luxe_obj::timer,"timer");
	HX_VISIT_MEMBER_NAME(Luxe_obj::events,"events");
	HX_VISIT_MEMBER_NAME(Luxe_obj::input,"input");
	HX_VISIT_MEMBER_NAME(Luxe_obj::scene,"scene");
	HX_VISIT_MEMBER_NAME(Luxe_obj::utils,"utils");
	HX_VISIT_MEMBER_NAME(Luxe_obj::physics,"physics");
	HX_VISIT_MEMBER_NAME(Luxe_obj::camera,"camera");
	HX_VISIT_MEMBER_NAME(Luxe_obj::resources,"resources");
	HX_VISIT_MEMBER_NAME(Luxe_obj::renderer,"renderer");
	HX_VISIT_MEMBER_NAME(Luxe_obj::time,"time");
	HX_VISIT_MEMBER_NAME(Luxe_obj::screen,"screen");
	HX_VISIT_MEMBER_NAME(Luxe_obj::version,"version");
	HX_VISIT_MEMBER_NAME(Luxe_obj::build,"build");
};

#endif

Class Luxe_obj::__mClass;

void Luxe_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("Luxe"), hx::TCanCast< Luxe_obj> ,sStaticFields,sMemberFields,
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

void Luxe_obj::__boot()
{
	version= HX_CSTRING("dev");
	build= HX_CSTRING("+98dfb33408");
}

