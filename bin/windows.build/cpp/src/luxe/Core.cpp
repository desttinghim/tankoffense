#include <hxcpp.h>

#ifndef INCLUDED_Luxe
#include <Luxe.h>
#endif
#ifndef INCLUDED_cpp_vm_Thread
#include <cpp/vm/Thread.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_Resource
#include <haxe/Resource.h>
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
#ifndef INCLUDED_luxe_Game
#include <luxe/Game.h>
#endif
#ifndef INCLUDED_luxe_GamepadEventType
#include <luxe/GamepadEventType.h>
#endif
#ifndef INCLUDED_luxe_Input
#include <luxe/Input.h>
#endif
#ifndef INCLUDED_luxe_InteractState
#include <luxe/InteractState.h>
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
#ifndef INCLUDED_luxe_TextEventType
#include <luxe/TextEventType.h>
#endif
#ifndef INCLUDED_luxe_Timer
#include <luxe/Timer.h>
#endif
#ifndef INCLUDED_luxe__Core_CoreThreadRequest
#include <luxe/_Core/CoreThreadRequest.h>
#endif
#ifndef INCLUDED_luxe_resource_Resource
#include <luxe/resource/Resource.h>
#endif
#ifndef INCLUDED_luxe_resource_ResourceManager
#include <luxe/resource/ResourceManager.h>
#endif
#ifndef INCLUDED_luxe_utils_Utils
#include <luxe/utils/Utils.h>
#endif
#ifndef INCLUDED_phoenix_Camera
#include <phoenix/Camera.h>
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
#ifndef INCLUDED_snow_Snow
#include <snow/Snow.h>
#endif
#ifndef INCLUDED_snow_input_Scancodes
#include <snow/input/Scancodes.h>
#endif
#ifndef INCLUDED_snow_window_Window
#include <snow/window/Window.h>
#endif
namespace luxe{

Void Core_obj::__construct(::luxe::Game _game)
{
HX_STACK_FRAME("luxe.Core","new",0x819c31a9,"luxe.Core.new","luxe/Core.hx",63,0xa921e806)
HX_STACK_THIS(this)
HX_STACK_ARG(_game,"_game")
{
	HX_STACK_LINE(104)
	this->has_inited = false;
	HX_STACK_LINE(103)
	this->has_shutdown = false;
	HX_STACK_LINE(102)
	this->shutting_down = false;
	HX_STACK_LINE(78)
	this->headless = false;
	HX_STACK_LINE(76)
	this->console_visible = false;
	HX_STACK_LINE(109)
	super::__construct();
	HX_STACK_LINE(111)
	this->game = _game;
	HX_STACK_LINE(114)
	this->game->app = hx::ObjectPtr<OBJ_>(this);
	HX_STACK_LINE(118)
	::cpp::vm::Thread _g = ::cpp::vm::Thread_obj::current();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(118)
	this->core_thread = _g;
	HX_STACK_LINE(122)
	::luxe::Emitter _g1 = ::luxe::Emitter_obj::__new();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(122)
	this->emitter = _g1;
	HX_STACK_LINE(124)
	::phoenix::Vector _g2 = ::phoenix::Vector_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(124)
	this->_mouse_pos = _g2;
	HX_STACK_LINE(125)
	::phoenix::Vector _g3 = ::phoenix::Vector_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(125)
	this->_touch_pos = _g3;
	HX_STACK_LINE(126)
	::Luxe_obj::mouse = this->_mouse_pos;
	HX_STACK_LINE(129)
	::Luxe_obj::core = hx::ObjectPtr<OBJ_>(this);
	HX_STACK_LINE(130)
	::luxe::utils::Utils _g4 = ::luxe::utils::Utils_obj::__new(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(130)
	::Luxe_obj::utils = _g4;
}
;
	return null();
}

//Core_obj::~Core_obj() { }

Dynamic Core_obj::__CreateEmpty() { return  new Core_obj; }
hx::ObjectPtr< Core_obj > Core_obj::__new(::luxe::Game _game)
{  hx::ObjectPtr< Core_obj > result = new Core_obj();
	result->__construct(_game);
	return result;}

Dynamic Core_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Core_obj > result = new Core_obj();
	result->__construct(inArgs[0]);
	return result;}

Void Core_obj::ready( ){
{
		HX_STACK_FRAME("luxe.Core","ready",0x93d4a5ec,"luxe.Core.ready","luxe/Core.hx",136,0xa921e806)
		HX_STACK_THIS(this)
		HX_STACK_LINE(138)
		::String _g = ::haxe::Resource_obj::getString(HX_CSTRING("version"));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(138)
		::Luxe_obj::version = _g;
		HX_STACK_LINE(140)
		::String _g1 = ::haxe::Resource_obj::getString(HX_CSTRING("build"));		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(140)
		::String _g2 = (::Luxe_obj::version + _g1);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(140)
		::Luxe_obj::build = _g2;
		HX_STACK_LINE(142)
		::haxe::Log_obj::trace((HX_CSTRING("     i / luxe / ") + ((HX_CSTRING("version ") + ::Luxe_obj::build))),hx::SourceInfo(HX_CSTRING("Core.hx"),142,HX_CSTRING("luxe.Core"),HX_CSTRING("ready")));
		HX_STACK_LINE(145)
		this->init();
		HX_STACK_LINE(152)
		this->game->ready();
		HX_STACK_LINE(155)
		if ((!(this->shutting_down))){
			HX_STACK_LINE(159)
			this->emitter->emit(HX_CSTRING("init"),null(),hx::SourceInfo(HX_CSTRING("Core.hx"),159,HX_CSTRING("luxe.Core"),HX_CSTRING("ready")));
			HX_STACK_LINE(160)
			this->has_inited = true;
			HX_STACK_LINE(163)
			this->physics->reset();
			HX_STACK_LINE(166)
			if ((!(this->app->snow_config->__Field(HX_CSTRING("has_loop"),true)))){
				HX_STACK_LINE(167)
				this->shutdown();
			}
		}
	}
return null();
}


Void Core_obj::ondestroy( ){
{
		HX_STACK_FRAME("luxe.Core","ondestroy",0x53c5bbc4,"luxe.Core.ondestroy","luxe/Core.hx",174,0xa921e806)
		HX_STACK_THIS(this)
		HX_STACK_LINE(177)
		this->shutting_down = true;
		HX_STACK_LINE(179)
		::haxe::Log_obj::trace(HX_CSTRING("     i / luxe / shutting down..."),hx::SourceInfo(HX_CSTRING("Core.hx"),179,HX_CSTRING("luxe.Core"),HX_CSTRING("ondestroy")));
		HX_STACK_LINE(182)
		this->game->ondestroy();
		HX_STACK_LINE(185)
		this->emitter->emit(HX_CSTRING("destroy"),null(),hx::SourceInfo(HX_CSTRING("Core.hx"),185,HX_CSTRING("luxe.Core"),HX_CSTRING("ondestroy")));
		HX_STACK_LINE(188)
		if (((this->renderer != null()))){
			HX_STACK_LINE(189)
			this->renderer->destroy();
		}
		HX_STACK_LINE(192)
		this->physics->destroy();
		HX_STACK_LINE(193)
		this->input->destroy();
		HX_STACK_LINE(194)
		this->audio->destroy();
		HX_STACK_LINE(195)
		this->timer->destroy();
		HX_STACK_LINE(196)
		this->events->destroy();
		HX_STACK_LINE(197)
		this->debug->destroy();
		HX_STACK_LINE(200)
		this->emitter = null();
		HX_STACK_LINE(201)
		this->input = null();
		HX_STACK_LINE(202)
		this->audio = null();
		HX_STACK_LINE(203)
		this->events = null();
		HX_STACK_LINE(204)
		this->timer = null();
		HX_STACK_LINE(205)
		this->debug = null();
		HX_STACK_LINE(206)
		::Luxe_obj::utils = null();
		HX_STACK_LINE(209)
		this->has_shutdown = true;
		HX_STACK_LINE(211)
		::haxe::Log_obj::trace(HX_CSTRING("     i / luxe / goodbye."),hx::SourceInfo(HX_CSTRING("Core.hx"),211,HX_CSTRING("luxe.Core"),HX_CSTRING("ondestroy")));
	}
return null();
}


Void Core_obj::init( ){
{
		HX_STACK_FRAME("luxe.Core","init",0xe3c7f9a7,"luxe.Core.init","luxe/Core.hx",215,0xa921e806)
		HX_STACK_THIS(this)
		HX_STACK_LINE(222)
		::luxe::Debug _g = ::luxe::Debug_obj::__new(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(222)
		this->debug = _g;
		HX_STACK_LINE(223)
		::Luxe_obj::debug = this->debug;
		HX_STACK_LINE(225)
		::luxe::Draw _g1 = ::luxe::Draw_obj::__new(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(225)
		this->draw = _g1;
		HX_STACK_LINE(226)
		::luxe::Timer _g2 = ::luxe::Timer_obj::__new(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(226)
		this->timer = _g2;
		HX_STACK_LINE(227)
		::luxe::Events _g3 = ::luxe::Events_obj::__new();		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(227)
		this->events = _g3;
		HX_STACK_LINE(228)
		::luxe::Audio _g4 = ::luxe::Audio_obj::__new(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(228)
		this->audio = _g4;
		HX_STACK_LINE(229)
		::luxe::Input _g5 = ::luxe::Input_obj::__new(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(229)
		this->input = _g5;
		HX_STACK_LINE(230)
		::luxe::Physics _g6 = ::luxe::Physics_obj::__new(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(230)
		this->physics = _g6;
		HX_STACK_LINE(233)
		::luxe::resource::ResourceManager _g7 = ::luxe::resource::ResourceManager_obj::__new();		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(233)
		this->resources = _g7;
		HX_STACK_LINE(234)
		::Luxe_obj::resources = this->resources;
		HX_STACK_LINE(237)
		this->headless = (this->app->window == null());
		HX_STACK_LINE(239)
		if ((!(this->headless))){
			HX_STACK_LINE(241)
			this->app->window->onevent = this->window_event_dyn();
			HX_STACK_LINE(243)
			::phoenix::Renderer _g8 = ::phoenix::Renderer_obj::__new(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(_g8,"_g8");
			HX_STACK_LINE(243)
			this->renderer = _g8;
			HX_STACK_LINE(245)
			::Luxe_obj::renderer = this->renderer;
		}
		HX_STACK_LINE(250)
		int _window_w = (int)0;		HX_STACK_VAR(_window_w,"_window_w");
		HX_STACK_LINE(251)
		int _window_h = (int)0;		HX_STACK_VAR(_window_h,"_window_h");
		HX_STACK_LINE(253)
		if (((this->app->window != null()))){
			HX_STACK_LINE(254)
			_window_w = this->app->window->width;
			HX_STACK_LINE(255)
			_window_h = this->app->window->height;
		}
		HX_STACK_LINE(259)
		::luxe::Screen _g9 = ::luxe::Screen_obj::__new(hx::ObjectPtr<OBJ_>(this),(int)0,(int)0,_window_w,_window_h);		HX_STACK_VAR(_g9,"_g9");
		HX_STACK_LINE(259)
		this->screen = _g9;
		HX_STACK_LINE(264)
		this->debug->init();
		HX_STACK_LINE(265)
		this->timer->init();
		HX_STACK_LINE(266)
		this->audio->init();
		HX_STACK_LINE(267)
		this->input->init();
		HX_STACK_LINE(269)
		if ((!(this->headless))){
			HX_STACK_LINE(270)
			this->renderer->init();
		}
		HX_STACK_LINE(273)
		this->physics->init();
		HX_STACK_LINE(275)
		::Luxe_obj::audio = this->audio;
		HX_STACK_LINE(276)
		::Luxe_obj::draw = this->draw;
		HX_STACK_LINE(277)
		::Luxe_obj::events = this->events;
		HX_STACK_LINE(278)
		::Luxe_obj::timer = this->timer;
		HX_STACK_LINE(279)
		::Luxe_obj::input = this->input;
		HX_STACK_LINE(281)
		if ((!(this->headless))){
			struct _Function_2_1{
				inline static Dynamic Block( hx::ObjectPtr< ::luxe::Core_obj > __this){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/Core.hx",282,0xa921e806)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_CSTRING("name") , HX_CSTRING("default camera"),false);
						__result->Add(HX_CSTRING("view") , __this->renderer->camera,false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(282)
			::luxe::Camera _g10 = ::luxe::Camera_obj::__new(_Function_2_1::Block(this));		HX_STACK_VAR(_g10,"_g10");
			HX_STACK_LINE(282)
			::Luxe_obj::camera = _g10;
		}
		HX_STACK_LINE(285)
		::Luxe_obj::physics = this->physics;
		HX_STACK_LINE(287)
		::luxe::Scene _g11 = ::luxe::Scene_obj::__new(HX_CSTRING("default scene"));		HX_STACK_VAR(_g11,"_g11");
		HX_STACK_LINE(287)
		this->scene = _g11;
		HX_STACK_LINE(288)
		::Luxe_obj::scene = this->scene;
		HX_STACK_LINE(290)
		if ((!(this->headless))){
			HX_STACK_LINE(291)
			this->scene->add(::Luxe_obj::camera);
			HX_STACK_LINE(292)
			this->debug->create_debug_console();
		}
		HX_STACK_LINE(297)
		if (((bool((this->app->window != null())) && bool(!(this->headless))))){
			HX_STACK_LINE(299)
			this->app->window->onrender = this->render_dyn();
			HX_STACK_LINE(302)
			this->debug->start(::luxe::Core_obj::core_tag_update,(int)50);
			HX_STACK_LINE(303)
			this->debug->start(::luxe::Core_obj::core_tag_renderdt,(int)50);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Core_obj,init,(void))

Void Core_obj::shutdown( ){
{
		HX_STACK_FRAME("luxe.Core","shutdown",0x12d152ad,"luxe.Core.shutdown","luxe/Core.hx",309,0xa921e806)
		HX_STACK_THIS(this)
		HX_STACK_LINE(312)
		this->shutting_down = true;
		HX_STACK_LINE(315)
		::snow::Snow_obj::next(this->app->shutdown_dyn());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Core_obj,shutdown,(void))

Void Core_obj::on( ::String event,Dynamic handler){
{
		HX_STACK_FRAME("luxe.Core","on",0x6fef7bf6,"luxe.Core.on","luxe/Core.hx",320,0xa921e806)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_ARG(handler,"handler")
		HX_STACK_LINE(320)
		this->emitter->on(event,handler,hx::SourceInfo(HX_CSTRING("Core.hx"),320,HX_CSTRING("luxe.Core"),HX_CSTRING("on")));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Core_obj,on,(void))

bool Core_obj::off( ::String event,Dynamic handler){
	HX_STACK_FRAME("luxe.Core","off",0x819cf4b8,"luxe.Core.off","luxe/Core.hx",324,0xa921e806)
	HX_STACK_THIS(this)
	HX_STACK_ARG(event,"event")
	HX_STACK_ARG(handler,"handler")
	HX_STACK_LINE(324)
	return this->emitter->off(event,handler,hx::SourceInfo(HX_CSTRING("Core.hx"),324,HX_CSTRING("luxe.Core"),HX_CSTRING("off")));
}


HX_DEFINE_DYNAMIC_FUNC2(Core_obj,off,return )

Void Core_obj::emit( ::String event,Dynamic data){
{
		HX_STACK_FRAME("luxe.Core","emit",0xe1225cea,"luxe.Core.emit","luxe/Core.hx",328,0xa921e806)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_ARG(data,"data")
		HX_STACK_LINE(328)
		return null(this->emitter->emit(event,data,hx::SourceInfo(HX_CSTRING("Core.hx"),328,HX_CSTRING("luxe.Core"),HX_CSTRING("emit"))));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Core_obj,emit,(void))

Void Core_obj::onevent( Dynamic event){
{
		HX_STACK_FRAME("luxe.Core","onevent",0x24a23064,"luxe.Core.onevent","luxe/Core.hx",335,0xa921e806)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(335)
		this->game->onevent(event);
	}
return null();
}


Void Core_obj::update( Float dt){
{
		HX_STACK_FRAME("luxe.Core","update",0x50b05860,"luxe.Core.update","luxe/Core.hx",340,0xa921e806)
		HX_STACK_THIS(this)
		HX_STACK_ARG(dt,"dt")
		HX_STACK_LINE(346)
		if ((this->has_shutdown)){
			HX_STACK_LINE(346)
			return null();
		}
		HX_STACK_LINE(348)
		this->debug->end(::luxe::Core_obj::core_tag_update);
		HX_STACK_LINE(349)
		this->debug->start(::luxe::Core_obj::core_tag_update,null());
		HX_STACK_LINE(354)
		this->timer->process();
		HX_STACK_LINE(358)
		this->input->process();
		HX_STACK_LINE(362)
		this->audio->process();
		HX_STACK_LINE(366)
		this->events->process();
		HX_STACK_LINE(370)
		this->physics->process();
		HX_STACK_LINE(374)
		this->process_loading_thread();
		HX_STACK_LINE(377)
		this->debug->start(::luxe::Core_obj::core_tag_updates,null());
		HX_STACK_LINE(378)
		this->emitter->emit(HX_CSTRING("update"),dt,hx::SourceInfo(HX_CSTRING("Core.hx"),378,HX_CSTRING("luxe.Core"),HX_CSTRING("update")));
		HX_STACK_LINE(379)
		this->debug->end(::luxe::Core_obj::core_tag_updates);
		HX_STACK_LINE(382)
		this->debug->start(::luxe::Core_obj::game_tag_update,null());
		HX_STACK_LINE(383)
		this->game->update(dt);
		HX_STACK_LINE(384)
		this->debug->end(::luxe::Core_obj::game_tag_update);
		HX_STACK_LINE(388)
		this->debug->process();
	}
return null();
}


Void Core_obj::window_event( Dynamic _event){
{
		HX_STACK_FRAME("luxe.Core","window_event",0x26e7e4e2,"luxe.Core.window_event","luxe/Core.hx",393,0xa921e806)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_event,"_event")
		HX_STACK_LINE(395)
		if ((this->shutting_down)){
			HX_STACK_LINE(396)
			return null();
		}
		HX_STACK_LINE(399)
		this->emitter->emit(HX_CSTRING("window.event"),_event,hx::SourceInfo(HX_CSTRING("Core.hx"),399,HX_CSTRING("luxe.Core"),HX_CSTRING("window_event")));
		HX_STACK_LINE(401)
		{
			HX_STACK_LINE(401)
			Dynamic _g = _event->__Field(HX_CSTRING("type"),true);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(401)
			switch( (int)(_g)){
				case (int)5: {
					HX_STACK_LINE(404)
					this->emitter->emit(HX_CSTRING("window.moved"),_event,hx::SourceInfo(HX_CSTRING("Core.hx"),404,HX_CSTRING("luxe.Core"),HX_CSTRING("window_event")));
				}
				;break;
				case (int)6: {
					HX_STACK_LINE(408)
					this->screen->internal_resized(_event->__Field(HX_CSTRING("event"),true)->__Field(HX_CSTRING("x"),true),_event->__Field(HX_CSTRING("event"),true)->__Field(HX_CSTRING("y"),true));
					HX_STACK_LINE(409)
					this->renderer->internal_resized(_event->__Field(HX_CSTRING("event"),true)->__Field(HX_CSTRING("x"),true),_event->__Field(HX_CSTRING("event"),true)->__Field(HX_CSTRING("y"),true));
					HX_STACK_LINE(410)
					this->emitter->emit(HX_CSTRING("window.resized"),_event,hx::SourceInfo(HX_CSTRING("Core.hx"),410,HX_CSTRING("luxe.Core"),HX_CSTRING("window_event")));
				}
				;break;
				case (int)7: {
					HX_STACK_LINE(414)
					this->screen->internal_resized(_event->__Field(HX_CSTRING("event"),true)->__Field(HX_CSTRING("x"),true),_event->__Field(HX_CSTRING("event"),true)->__Field(HX_CSTRING("y"),true));
					HX_STACK_LINE(415)
					this->renderer->internal_resized(_event->__Field(HX_CSTRING("event"),true)->__Field(HX_CSTRING("x"),true),_event->__Field(HX_CSTRING("event"),true)->__Field(HX_CSTRING("y"),true));
					HX_STACK_LINE(416)
					this->emitter->emit(HX_CSTRING("window.size_changed"),_event,hx::SourceInfo(HX_CSTRING("Core.hx"),416,HX_CSTRING("luxe.Core"),HX_CSTRING("window_event")));
				}
				;break;
				case (int)8: {
					HX_STACK_LINE(420)
					this->emitter->emit(HX_CSTRING("window.minimized"),_event,hx::SourceInfo(HX_CSTRING("Core.hx"),420,HX_CSTRING("luxe.Core"),HX_CSTRING("window_event")));
				}
				;break;
				case (int)10: {
					HX_STACK_LINE(424)
					this->emitter->emit(HX_CSTRING("window.restored"),_event,hx::SourceInfo(HX_CSTRING("Core.hx"),424,HX_CSTRING("luxe.Core"),HX_CSTRING("window_event")));
				}
				;break;
				default: {
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Core_obj,window_event,(void))

Void Core_obj::render( ::snow::window::Window window){
{
		HX_STACK_FRAME("luxe.Core","render",0xced43dad,"luxe.Core.render","luxe/Core.hx",433,0xa921e806)
		HX_STACK_THIS(this)
		HX_STACK_ARG(window,"window")
		HX_STACK_LINE(435)
		if ((this->shutting_down)){
			HX_STACK_LINE(436)
			return null();
		}
		HX_STACK_LINE(439)
		this->debug->end(::luxe::Core_obj::core_tag_renderdt);
		HX_STACK_LINE(440)
		this->debug->start(::luxe::Core_obj::core_tag_renderdt,null());
		HX_STACK_LINE(442)
		if ((!(this->headless))){
			HX_STACK_LINE(444)
			this->debug->start(::luxe::Core_obj::core_tag_render,null());
			HX_STACK_LINE(446)
			this->emitter->emit(HX_CSTRING("prerender"),null(),hx::SourceInfo(HX_CSTRING("Core.hx"),446,HX_CSTRING("luxe.Core"),HX_CSTRING("render")));
			HX_STACK_LINE(447)
			this->game->onprerender();
			HX_STACK_LINE(449)
			this->emitter->emit(HX_CSTRING("render"),null(),hx::SourceInfo(HX_CSTRING("Core.hx"),449,HX_CSTRING("luxe.Core"),HX_CSTRING("render")));
			HX_STACK_LINE(450)
			this->game->onrender();
			HX_STACK_LINE(451)
			this->renderer->process();
			HX_STACK_LINE(453)
			this->emitter->emit(HX_CSTRING("postrender"),null(),hx::SourceInfo(HX_CSTRING("Core.hx"),453,HX_CSTRING("luxe.Core"),HX_CSTRING("render")));
			HX_STACK_LINE(454)
			this->game->onpostrender();
			HX_STACK_LINE(456)
			this->debug->end(::luxe::Core_obj::core_tag_render);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Core_obj,render,(void))

Void Core_obj::show_console( hx::Null< bool >  __o__show){
bool _show = __o__show.Default(true);
	HX_STACK_FRAME("luxe.Core","show_console",0xc6c98c6c,"luxe.Core.show_console","luxe/Core.hx",462,0xa921e806)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_show,"_show")
{
		HX_STACK_LINE(464)
		this->console_visible = _show;
		HX_STACK_LINE(465)
		this->debug->show_console(this->console_visible);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Core_obj,show_console,(void))

Void Core_obj::onkeydown( int keycode,int scancode,bool repeat,Dynamic mod,Float timestamp,int window_id){
{
		HX_STACK_FRAME("luxe.Core","onkeydown",0xe0adcc4b,"luxe.Core.onkeydown","luxe/Core.hx",486,0xa921e806)
		HX_STACK_THIS(this)
		HX_STACK_ARG(keycode,"keycode")
		HX_STACK_ARG(scancode,"scancode")
		HX_STACK_ARG(repeat,"repeat")
		HX_STACK_ARG(mod,"mod")
		HX_STACK_ARG(timestamp,"timestamp")
		HX_STACK_ARG(window_id,"window_id")
		struct _Function_1_1{
			inline static Dynamic Block( Float &timestamp,bool &repeat,int &window_id,Dynamic &mod,int &scancode,int &keycode){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/Core.hx",488,0xa921e806)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("scancode") , scancode,false);
					__result->Add(HX_CSTRING("keycode") , keycode,false);
					__result->Add(HX_CSTRING("state") , ::luxe::InteractState_obj::down,false);
					__result->Add(HX_CSTRING("mod") , mod,false);
					__result->Add(HX_CSTRING("repeat") , repeat,false);
					__result->Add(HX_CSTRING("timestamp") , timestamp,false);
					__result->Add(HX_CSTRING("window_id") , window_id,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(488)
		Dynamic event = _Function_1_1::Block(timestamp,repeat,window_id,mod,scancode,keycode);		HX_STACK_VAR(event,"event");
		HX_STACK_LINE(498)
		if ((!(this->shutting_down))){
			HX_STACK_LINE(501)
			this->input->check_named_keys(event,true);
			HX_STACK_LINE(502)
			this->emitter->emit(HX_CSTRING("keydown"),event,hx::SourceInfo(HX_CSTRING("Core.hx"),502,HX_CSTRING("luxe.Core"),HX_CSTRING("onkeydown")));
			HX_STACK_LINE(504)
			this->game->onkeydown(event);
			HX_STACK_LINE(506)
			if (((scancode == ::snow::input::Scancodes_obj::grave))){
				HX_STACK_LINE(507)
				this->show_console(!(this->console_visible));
			}
		}
	}
return null();
}


Void Core_obj::onkeyup( int keycode,int scancode,bool repeat,Dynamic mod,Float timestamp,int window_id){
{
		HX_STACK_FRAME("luxe.Core","onkeyup",0x8ddc3e04,"luxe.Core.onkeyup","luxe/Core.hx",514,0xa921e806)
		HX_STACK_THIS(this)
		HX_STACK_ARG(keycode,"keycode")
		HX_STACK_ARG(scancode,"scancode")
		HX_STACK_ARG(repeat,"repeat")
		HX_STACK_ARG(mod,"mod")
		HX_STACK_ARG(timestamp,"timestamp")
		HX_STACK_ARG(window_id,"window_id")
		struct _Function_1_1{
			inline static Dynamic Block( Float &timestamp,bool &repeat,int &window_id,Dynamic &mod,int &scancode,int &keycode){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/Core.hx",516,0xa921e806)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("scancode") , scancode,false);
					__result->Add(HX_CSTRING("keycode") , keycode,false);
					__result->Add(HX_CSTRING("state") , ::luxe::InteractState_obj::up,false);
					__result->Add(HX_CSTRING("mod") , mod,false);
					__result->Add(HX_CSTRING("repeat") , repeat,false);
					__result->Add(HX_CSTRING("timestamp") , timestamp,false);
					__result->Add(HX_CSTRING("window_id") , window_id,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(516)
		Dynamic event = _Function_1_1::Block(timestamp,repeat,window_id,mod,scancode,keycode);		HX_STACK_VAR(event,"event");
		HX_STACK_LINE(526)
		if ((!(this->shutting_down))){
			HX_STACK_LINE(529)
			this->input->check_named_keys(event,null());
			HX_STACK_LINE(530)
			this->emitter->emit(HX_CSTRING("keyup"),event,hx::SourceInfo(HX_CSTRING("Core.hx"),530,HX_CSTRING("luxe.Core"),HX_CSTRING("onkeyup")));
			HX_STACK_LINE(532)
			this->game->onkeyup(event);
		}
	}
return null();
}


Void Core_obj::ontextinput( ::String text,int start,int length,int type,Float timestamp,int window_id){
{
		HX_STACK_FRAME("luxe.Core","ontextinput",0xed363987,"luxe.Core.ontextinput","luxe/Core.hx",538,0xa921e806)
		HX_STACK_THIS(this)
		HX_STACK_ARG(text,"text")
		HX_STACK_ARG(start,"start")
		HX_STACK_ARG(length,"length")
		HX_STACK_ARG(type,"type")
		HX_STACK_ARG(timestamp,"timestamp")
		HX_STACK_ARG(window_id,"window_id")
		HX_STACK_LINE(540)
		::luxe::TextEventType _type = ::luxe::TextEventType_obj::unknown;		HX_STACK_VAR(_type,"_type");
		HX_STACK_LINE(542)
		switch( (int)(type)){
			case (int)1: {
				HX_STACK_LINE(543)
				_type = ::luxe::TextEventType_obj::edit;
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(544)
				_type = ::luxe::TextEventType_obj::input;
			}
			;break;
			default: {
				HX_STACK_LINE(546)
				return null();
			}
		}
		struct _Function_1_1{
			inline static Dynamic Block( int &length,::luxe::TextEventType &_type,Float &timestamp,int &window_id,::String &text,int &start){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/Core.hx",550,0xa921e806)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("text") , text,false);
					__result->Add(HX_CSTRING("start") , start,false);
					__result->Add(HX_CSTRING("length") , length,false);
					__result->Add(HX_CSTRING("type") , _type,false);
					__result->Add(HX_CSTRING("timestamp") , timestamp,false);
					__result->Add(HX_CSTRING("window_id") , window_id,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(550)
		Dynamic event = _Function_1_1::Block(length,_type,timestamp,window_id,text,start);		HX_STACK_VAR(event,"event");
		HX_STACK_LINE(559)
		if ((!(this->shutting_down))){
			HX_STACK_LINE(561)
			this->emitter->emit(HX_CSTRING("textinput"),event,hx::SourceInfo(HX_CSTRING("Core.hx"),561,HX_CSTRING("luxe.Core"),HX_CSTRING("ontextinput")));
			HX_STACK_LINE(563)
			this->game->ontextinput(event);
		}
	}
return null();
}


Void Core_obj::oninputdown( ::String name,Dynamic event){
{
		HX_STACK_FRAME("luxe.Core","oninputdown",0x4817deb6,"luxe.Core.oninputdown","luxe/Core.hx",573,0xa921e806)
		HX_STACK_THIS(this)
		HX_STACK_ARG(name,"name")
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(573)
		if ((!(this->shutting_down))){
			struct _Function_2_1{
				inline static Dynamic Block( Dynamic &event,::String &name){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/Core.hx",575,0xa921e806)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_CSTRING("name") , name,false);
						__result->Add(HX_CSTRING("event") , event,false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(575)
			this->emitter->emit(HX_CSTRING("inputdown"),_Function_2_1::Block(event,name),hx::SourceInfo(HX_CSTRING("Core.hx"),575,HX_CSTRING("luxe.Core"),HX_CSTRING("oninputdown")));
			HX_STACK_LINE(577)
			this->game->oninputdown(name,event);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Core_obj,oninputdown,(void))

Void Core_obj::oninputup( ::String name,Dynamic event){
{
		HX_STACK_FRAME("luxe.Core","oninputup",0x035e4faf,"luxe.Core.oninputup","luxe/Core.hx",585,0xa921e806)
		HX_STACK_THIS(this)
		HX_STACK_ARG(name,"name")
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(585)
		if ((!(this->shutting_down))){
			struct _Function_2_1{
				inline static Dynamic Block( Dynamic &event,::String &name){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/Core.hx",587,0xa921e806)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_CSTRING("name") , name,false);
						__result->Add(HX_CSTRING("event") , event,false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(587)
			this->emitter->emit(HX_CSTRING("inputup"),_Function_2_1::Block(event,name),hx::SourceInfo(HX_CSTRING("Core.hx"),587,HX_CSTRING("luxe.Core"),HX_CSTRING("oninputup")));
			HX_STACK_LINE(589)
			this->game->oninputup(name,event);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Core_obj,oninputup,(void))

Void Core_obj::onmousedown( int x,int y,int button,Float timestamp,int window_id){
{
		HX_STACK_FRAME("luxe.Core","onmousedown",0x2d41da51,"luxe.Core.onmousedown","luxe/Core.hx",597,0xa921e806)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(button,"button")
		HX_STACK_ARG(timestamp,"timestamp")
		HX_STACK_ARG(window_id,"window_id")
		HX_STACK_LINE(600)
		::phoenix::Vector _g = ::phoenix::Vector_obj::__new(x,y,null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(600)
		this->_mouse_pos = _g;
		HX_STACK_LINE(601)
		::Luxe_obj::mouse = this->_mouse_pos;
		struct _Function_1_1{
			inline static Dynamic Block( hx::ObjectPtr< ::luxe::Core_obj > __this,Float &timestamp,int &button,int &x,int &window_id,int &y){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/Core.hx",603,0xa921e806)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("timestamp") , timestamp,false);
					__result->Add(HX_CSTRING("window_id") , window_id,false);
					__result->Add(HX_CSTRING("state") , ::luxe::InteractState_obj::down,false);
					__result->Add(HX_CSTRING("button") , button,false);
					__result->Add(HX_CSTRING("x") , x,false);
					__result->Add(HX_CSTRING("y") , y,false);
					__result->Add(HX_CSTRING("xrel") , x,false);
					__result->Add(HX_CSTRING("yrel") , y,false);
					__result->Add(HX_CSTRING("pos") , __this->_mouse_pos,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(603)
		Dynamic event = _Function_1_1::Block(this,timestamp,button,x,window_id,y);		HX_STACK_VAR(event,"event");
		HX_STACK_LINE(615)
		if ((!(this->shutting_down))){
			HX_STACK_LINE(617)
			this->input->check_named_mouse(event,true);
			HX_STACK_LINE(618)
			this->emitter->emit(HX_CSTRING("mousedown"),event,hx::SourceInfo(HX_CSTRING("Core.hx"),618,HX_CSTRING("luxe.Core"),HX_CSTRING("onmousedown")));
			HX_STACK_LINE(619)
			this->game->onmousedown(event);
		}
	}
return null();
}


Void Core_obj::onmouseup( int x,int y,int button,Float timestamp,int window_id){
{
		HX_STACK_FRAME("luxe.Core","onmouseup",0xefb29e8a,"luxe.Core.onmouseup","luxe/Core.hx",625,0xa921e806)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(button,"button")
		HX_STACK_ARG(timestamp,"timestamp")
		HX_STACK_ARG(window_id,"window_id")
		HX_STACK_LINE(627)
		::phoenix::Vector _g = ::phoenix::Vector_obj::__new(x,y,null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(627)
		this->_mouse_pos = _g;
		HX_STACK_LINE(628)
		::Luxe_obj::mouse = this->_mouse_pos;
		struct _Function_1_1{
			inline static Dynamic Block( hx::ObjectPtr< ::luxe::Core_obj > __this,Float &timestamp,int &button,int &x,int &window_id,int &y){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/Core.hx",630,0xa921e806)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("timestamp") , timestamp,false);
					__result->Add(HX_CSTRING("window_id") , window_id,false);
					__result->Add(HX_CSTRING("state") , ::luxe::InteractState_obj::up,false);
					__result->Add(HX_CSTRING("button") , button,false);
					__result->Add(HX_CSTRING("x") , x,false);
					__result->Add(HX_CSTRING("y") , y,false);
					__result->Add(HX_CSTRING("xrel") , x,false);
					__result->Add(HX_CSTRING("yrel") , y,false);
					__result->Add(HX_CSTRING("pos") , __this->_mouse_pos,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(630)
		Dynamic event = _Function_1_1::Block(this,timestamp,button,x,window_id,y);		HX_STACK_VAR(event,"event");
		HX_STACK_LINE(642)
		if ((!(this->shutting_down))){
			HX_STACK_LINE(644)
			this->input->check_named_mouse(event,null());
			HX_STACK_LINE(645)
			this->emitter->emit(HX_CSTRING("mouseup"),event,hx::SourceInfo(HX_CSTRING("Core.hx"),645,HX_CSTRING("luxe.Core"),HX_CSTRING("onmouseup")));
			HX_STACK_LINE(646)
			this->game->onmouseup(event);
		}
	}
return null();
}


Void Core_obj::onmousemove( int x,int y,int xrel,int yrel,Float timestamp,int window_id){
{
		HX_STACK_FRAME("luxe.Core","onmousemove",0x3334c500,"luxe.Core.onmousemove","luxe/Core.hx",652,0xa921e806)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(xrel,"xrel")
		HX_STACK_ARG(yrel,"yrel")
		HX_STACK_ARG(timestamp,"timestamp")
		HX_STACK_ARG(window_id,"window_id")
		HX_STACK_LINE(654)
		::phoenix::Vector _g = ::phoenix::Vector_obj::__new(x,y,null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(654)
		this->_mouse_pos = _g;
		HX_STACK_LINE(655)
		::Luxe_obj::mouse = this->_mouse_pos;
		struct _Function_1_1{
			inline static Dynamic Block( hx::ObjectPtr< ::luxe::Core_obj > __this,Float &timestamp,int &yrel,int &xrel,int &x,int &window_id,int &y){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/Core.hx",657,0xa921e806)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("timestamp") , timestamp,false);
					__result->Add(HX_CSTRING("window_id") , window_id,false);
					__result->Add(HX_CSTRING("state") , ::luxe::InteractState_obj::move,false);
					__result->Add(HX_CSTRING("button") , (int)0,false);
					__result->Add(HX_CSTRING("x") , x,false);
					__result->Add(HX_CSTRING("y") , y,false);
					__result->Add(HX_CSTRING("xrel") , xrel,false);
					__result->Add(HX_CSTRING("yrel") , yrel,false);
					__result->Add(HX_CSTRING("pos") , __this->_mouse_pos,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(657)
		Dynamic event = _Function_1_1::Block(this,timestamp,yrel,xrel,x,window_id,y);		HX_STACK_VAR(event,"event");
		HX_STACK_LINE(669)
		if ((!(this->shutting_down))){
			HX_STACK_LINE(671)
			this->emitter->emit(HX_CSTRING("mousemove"),event,hx::SourceInfo(HX_CSTRING("Core.hx"),671,HX_CSTRING("luxe.Core"),HX_CSTRING("onmousemove")));
			HX_STACK_LINE(672)
			this->game->onmousemove(event);
		}
	}
return null();
}


Void Core_obj::onmousewheel( int x,int y,Float timestamp,int window_id){
{
		HX_STACK_FRAME("luxe.Core","onmousewheel",0x584c03cc,"luxe.Core.onmousewheel","luxe/Core.hx",678,0xa921e806)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(timestamp,"timestamp")
		HX_STACK_ARG(window_id,"window_id")
		struct _Function_1_1{
			inline static Dynamic Block( hx::ObjectPtr< ::luxe::Core_obj > __this,Float &timestamp,int &x,int &window_id,int &y){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/Core.hx",680,0xa921e806)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("timestamp") , timestamp,false);
					__result->Add(HX_CSTRING("window_id") , window_id,false);
					__result->Add(HX_CSTRING("state") , ::luxe::InteractState_obj::wheel,false);
					__result->Add(HX_CSTRING("button") , (int)0,false);
					__result->Add(HX_CSTRING("x") , x,false);
					__result->Add(HX_CSTRING("y") , y,false);
					__result->Add(HX_CSTRING("xrel") , x,false);
					__result->Add(HX_CSTRING("yrel") , y,false);
					__result->Add(HX_CSTRING("pos") , __this->_mouse_pos,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(680)
		Dynamic event = _Function_1_1::Block(this,timestamp,x,window_id,y);		HX_STACK_VAR(event,"event");
		HX_STACK_LINE(692)
		if ((!(this->shutting_down))){
			HX_STACK_LINE(694)
			this->input->check_named_mouse(event,false);
			HX_STACK_LINE(695)
			this->emitter->emit(HX_CSTRING("mousewheel"),event,hx::SourceInfo(HX_CSTRING("Core.hx"),695,HX_CSTRING("luxe.Core"),HX_CSTRING("onmousewheel")));
			HX_STACK_LINE(696)
			this->game->onmousewheel(event);
		}
	}
return null();
}


Void Core_obj::ontouchdown( Float x,Float y,int touch_id,Float timestamp){
{
		HX_STACK_FRAME("luxe.Core","ontouchdown",0x4659b0eb,"luxe.Core.ontouchdown","luxe/Core.hx",704,0xa921e806)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(touch_id,"touch_id")
		HX_STACK_ARG(timestamp,"timestamp")
		HX_STACK_LINE(706)
		::phoenix::Vector _g = ::phoenix::Vector_obj::__new(x,y,null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(706)
		this->_touch_pos = _g;
		struct _Function_1_1{
			inline static Dynamic Block( hx::ObjectPtr< ::luxe::Core_obj > __this,Float &timestamp,Float &x,int &touch_id,Float &y){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/Core.hx",708,0xa921e806)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("state") , ::luxe::InteractState_obj::down,false);
					__result->Add(HX_CSTRING("timestamp") , timestamp,false);
					__result->Add(HX_CSTRING("touch_id") , touch_id,false);
					__result->Add(HX_CSTRING("x") , x,false);
					__result->Add(HX_CSTRING("y") , y,false);
					__result->Add(HX_CSTRING("dx") , x,false);
					__result->Add(HX_CSTRING("dy") , y,false);
					__result->Add(HX_CSTRING("pos") , __this->_touch_pos,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(708)
		Dynamic event = _Function_1_1::Block(this,timestamp,x,touch_id,y);		HX_STACK_VAR(event,"event");
		HX_STACK_LINE(719)
		if ((!(this->shutting_down))){
			HX_STACK_LINE(721)
			this->emitter->emit(HX_CSTRING("touchdown"),event,hx::SourceInfo(HX_CSTRING("Core.hx"),721,HX_CSTRING("luxe.Core"),HX_CSTRING("ontouchdown")));
			HX_STACK_LINE(723)
			this->game->ontouchdown(event);
			HX_STACK_LINE(726)
			if (((touch_id == (int)2))){
				HX_STACK_LINE(727)
				if ((this->console_visible)){
					HX_STACK_LINE(728)
					this->debug->switch_view();
				}
			}
			HX_STACK_LINE(733)
			if (((touch_id == (int)3))){
				HX_STACK_LINE(734)
				this->show_console(!(this->console_visible));
			}
		}
	}
return null();
}


Void Core_obj::ontouchup( Float x,Float y,int touch_id,Float timestamp){
{
		HX_STACK_FRAME("luxe.Core","ontouchup",0x0837baa4,"luxe.Core.ontouchup","luxe/Core.hx",741,0xa921e806)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(touch_id,"touch_id")
		HX_STACK_ARG(timestamp,"timestamp")
		HX_STACK_LINE(743)
		::phoenix::Vector _g = ::phoenix::Vector_obj::__new(x,y,null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(743)
		this->_touch_pos = _g;
		struct _Function_1_1{
			inline static Dynamic Block( hx::ObjectPtr< ::luxe::Core_obj > __this,Float &timestamp,Float &x,int &touch_id,Float &y){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/Core.hx",745,0xa921e806)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("state") , ::luxe::InteractState_obj::up,false);
					__result->Add(HX_CSTRING("timestamp") , timestamp,false);
					__result->Add(HX_CSTRING("touch_id") , touch_id,false);
					__result->Add(HX_CSTRING("x") , x,false);
					__result->Add(HX_CSTRING("y") , y,false);
					__result->Add(HX_CSTRING("dx") , x,false);
					__result->Add(HX_CSTRING("dy") , y,false);
					__result->Add(HX_CSTRING("pos") , __this->_touch_pos,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(745)
		Dynamic event = _Function_1_1::Block(this,timestamp,x,touch_id,y);		HX_STACK_VAR(event,"event");
		HX_STACK_LINE(756)
		if ((!(this->shutting_down))){
			HX_STACK_LINE(758)
			this->emitter->emit(HX_CSTRING("touchup"),event,hx::SourceInfo(HX_CSTRING("Core.hx"),758,HX_CSTRING("luxe.Core"),HX_CSTRING("ontouchup")));
			HX_STACK_LINE(759)
			this->game->ontouchup(event);
		}
	}
return null();
}


Void Core_obj::ontouchmove( Float x,Float y,Float dx,Float dy,int touch_id,Float timestamp){
{
		HX_STACK_FRAME("luxe.Core","ontouchmove",0x4c4c9b9a,"luxe.Core.ontouchmove","luxe/Core.hx",765,0xa921e806)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(dx,"dx")
		HX_STACK_ARG(dy,"dy")
		HX_STACK_ARG(touch_id,"touch_id")
		HX_STACK_ARG(timestamp,"timestamp")
		HX_STACK_LINE(767)
		::phoenix::Vector _g = ::phoenix::Vector_obj::__new(x,y,null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(767)
		this->_touch_pos = _g;
		struct _Function_1_1{
			inline static Dynamic Block( hx::ObjectPtr< ::luxe::Core_obj > __this,Float &timestamp,Float &dy,Float &x,Float &dx,int &touch_id,Float &y){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/Core.hx",769,0xa921e806)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("state") , ::luxe::InteractState_obj::move,false);
					__result->Add(HX_CSTRING("timestamp") , timestamp,false);
					__result->Add(HX_CSTRING("touch_id") , touch_id,false);
					__result->Add(HX_CSTRING("x") , x,false);
					__result->Add(HX_CSTRING("y") , y,false);
					__result->Add(HX_CSTRING("dx") , dx,false);
					__result->Add(HX_CSTRING("dy") , dy,false);
					__result->Add(HX_CSTRING("pos") , __this->_touch_pos,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(769)
		Dynamic event = _Function_1_1::Block(this,timestamp,dy,x,dx,touch_id,y);		HX_STACK_VAR(event,"event");
		HX_STACK_LINE(780)
		if ((!(this->shutting_down))){
			HX_STACK_LINE(782)
			this->emitter->emit(HX_CSTRING("touchmove"),event,hx::SourceInfo(HX_CSTRING("Core.hx"),782,HX_CSTRING("luxe.Core"),HX_CSTRING("ontouchmove")));
			HX_STACK_LINE(783)
			this->game->ontouchmove(event);
		}
	}
return null();
}


Void Core_obj::ongamepadaxis( int gamepad,int axis,Float value,Float timestamp){
{
		HX_STACK_FRAME("luxe.Core","ongamepadaxis",0x56021d8c,"luxe.Core.ongamepadaxis","luxe/Core.hx",791,0xa921e806)
		HX_STACK_THIS(this)
		HX_STACK_ARG(gamepad,"gamepad")
		HX_STACK_ARG(axis,"axis")
		HX_STACK_ARG(value,"value")
		HX_STACK_ARG(timestamp,"timestamp")
		struct _Function_1_1{
			inline static Dynamic Block( int &axis,Float &timestamp,Float &value,int &gamepad){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/Core.hx",793,0xa921e806)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("timestamp") , timestamp,false);
					__result->Add(HX_CSTRING("type") , ::luxe::GamepadEventType_obj::axis,false);
					__result->Add(HX_CSTRING("state") , ::luxe::InteractState_obj::axis,false);
					__result->Add(HX_CSTRING("gamepad") , gamepad,false);
					__result->Add(HX_CSTRING("button") , (int)-1,false);
					__result->Add(HX_CSTRING("axis") , axis,false);
					__result->Add(HX_CSTRING("value") , value,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(793)
		Dynamic event = _Function_1_1::Block(axis,timestamp,value,gamepad);		HX_STACK_VAR(event,"event");
		HX_STACK_LINE(803)
		if ((!(this->shutting_down))){
			HX_STACK_LINE(805)
			this->emitter->emit(HX_CSTRING("gamepadaxis"),event,hx::SourceInfo(HX_CSTRING("Core.hx"),805,HX_CSTRING("luxe.Core"),HX_CSTRING("ongamepadaxis")));
			HX_STACK_LINE(806)
			this->game->ongamepadaxis(event);
		}
	}
return null();
}


Void Core_obj::ongamepaddown( int gamepad,int button,Float value,Float timestamp){
{
		HX_STACK_FRAME("luxe.Core","ongamepaddown",0x57f6f94d,"luxe.Core.ongamepaddown","luxe/Core.hx",812,0xa921e806)
		HX_STACK_THIS(this)
		HX_STACK_ARG(gamepad,"gamepad")
		HX_STACK_ARG(button,"button")
		HX_STACK_ARG(value,"value")
		HX_STACK_ARG(timestamp,"timestamp")
		struct _Function_1_1{
			inline static Dynamic Block( Float &timestamp,int &button,Float &value,int &gamepad){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/Core.hx",814,0xa921e806)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("timestamp") , timestamp,false);
					__result->Add(HX_CSTRING("type") , ::luxe::GamepadEventType_obj::button,false);
					__result->Add(HX_CSTRING("state") , ::luxe::InteractState_obj::down,false);
					__result->Add(HX_CSTRING("gamepad") , gamepad,false);
					__result->Add(HX_CSTRING("button") , button,false);
					__result->Add(HX_CSTRING("axis") , (int)-1,false);
					__result->Add(HX_CSTRING("value") , value,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(814)
		Dynamic event = _Function_1_1::Block(timestamp,button,value,gamepad);		HX_STACK_VAR(event,"event");
		HX_STACK_LINE(824)
		if ((!(this->shutting_down))){
			HX_STACK_LINE(826)
			this->emitter->emit(HX_CSTRING("gamepaddown"),event,hx::SourceInfo(HX_CSTRING("Core.hx"),826,HX_CSTRING("luxe.Core"),HX_CSTRING("ongamepaddown")));
			HX_STACK_LINE(827)
			this->game->ongamepaddown(event);
		}
	}
return null();
}


Void Core_obj::ongamepadup( int gamepad,int button,Float value,Float timestamp){
{
		HX_STACK_FRAME("luxe.Core","ongamepadup",0x8890c686,"luxe.Core.ongamepadup","luxe/Core.hx",833,0xa921e806)
		HX_STACK_THIS(this)
		HX_STACK_ARG(gamepad,"gamepad")
		HX_STACK_ARG(button,"button")
		HX_STACK_ARG(value,"value")
		HX_STACK_ARG(timestamp,"timestamp")
		struct _Function_1_1{
			inline static Dynamic Block( Float &timestamp,int &button,Float &value,int &gamepad){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/Core.hx",835,0xa921e806)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("timestamp") , timestamp,false);
					__result->Add(HX_CSTRING("type") , ::luxe::GamepadEventType_obj::button,false);
					__result->Add(HX_CSTRING("state") , ::luxe::InteractState_obj::up,false);
					__result->Add(HX_CSTRING("gamepad") , gamepad,false);
					__result->Add(HX_CSTRING("button") , button,false);
					__result->Add(HX_CSTRING("axis") , (int)-1,false);
					__result->Add(HX_CSTRING("value") , value,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(835)
		Dynamic event = _Function_1_1::Block(timestamp,button,value,gamepad);		HX_STACK_VAR(event,"event");
		HX_STACK_LINE(845)
		if ((!(this->shutting_down))){
			HX_STACK_LINE(847)
			this->emitter->emit(HX_CSTRING("gamepadup"),event,hx::SourceInfo(HX_CSTRING("Core.hx"),847,HX_CSTRING("luxe.Core"),HX_CSTRING("ongamepadup")));
			HX_STACK_LINE(848)
			this->game->ongamepadup(event);
		}
	}
return null();
}


Void Core_obj::ongamepaddevice( int gamepad,int type,Float timestamp){
{
		HX_STACK_FRAME("luxe.Core","ongamepaddevice",0xbbf32e41,"luxe.Core.ongamepaddevice","luxe/Core.hx",854,0xa921e806)
		HX_STACK_THIS(this)
		HX_STACK_ARG(gamepad,"gamepad")
		HX_STACK_ARG(type,"type")
		HX_STACK_ARG(timestamp,"timestamp")
		HX_STACK_LINE(856)
		::luxe::GamepadEventType _event_type = ::luxe::GamepadEventType_obj::unknown;		HX_STACK_VAR(_event_type,"_event_type");
		HX_STACK_LINE(858)
		switch( (int)(type)){
			case (int)1: {
				HX_STACK_LINE(860)
				_event_type = ::luxe::GamepadEventType_obj::device_added;
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(862)
				_event_type = ::luxe::GamepadEventType_obj::device_removed;
			}
			;break;
			case (int)3: {
				HX_STACK_LINE(864)
				_event_type = ::luxe::GamepadEventType_obj::device_remapped;
			}
			;break;
			default: {
			}
		}
		struct _Function_1_1{
			inline static Dynamic Block( Float &timestamp,::luxe::GamepadEventType &_event_type,int &gamepad){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/Core.hx",868,0xa921e806)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("timestamp") , timestamp,false);
					__result->Add(HX_CSTRING("type") , _event_type,false);
					__result->Add(HX_CSTRING("state") , ::luxe::InteractState_obj::none,false);
					__result->Add(HX_CSTRING("gamepad") , gamepad,false);
					__result->Add(HX_CSTRING("button") , (int)-1,false);
					__result->Add(HX_CSTRING("axis") , (int)-1,false);
					__result->Add(HX_CSTRING("value") , (int)0,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(868)
		Dynamic event = _Function_1_1::Block(timestamp,_event_type,gamepad);		HX_STACK_VAR(event,"event");
		HX_STACK_LINE(878)
		if ((!(this->shutting_down))){
			HX_STACK_LINE(880)
			this->game->ongamepaddevice(event);
		}
	}
return null();
}


Dynamic Core_obj::config( Dynamic config){
	HX_STACK_FRAME("luxe.Core","config",0x917d2919,"luxe.Core.config","luxe/Core.hx",887,0xa921e806)
	HX_STACK_THIS(this)
	HX_STACK_ARG(config,"config")
	HX_STACK_LINE(889)
	config->__Field(HX_CSTRING("window"),true)->__FieldRef(HX_CSTRING("title")) = HX_CSTRING("luxe app");
	HX_STACK_LINE(891)
	return this->game->config(config);
}


Void Core_obj::process_loading_thread( ){
{
		HX_STACK_FRAME("luxe.Core","process_loading_thread",0x16cbb0d4,"luxe.Core.process_loading_thread","luxe/Core.hx",895,0xa921e806)
		HX_STACK_THIS(this)
		HX_STACK_LINE(899)
		Dynamic _g = ::cpp::vm::Thread_obj::readMessage(false);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(899)
		this->thread_message = _g;
		HX_STACK_LINE(901)
		if (((this->thread_message != null()))){
			HX_STACK_LINE(903)
			::luxe::_Core::CoreThreadRequest type = this->thread_message->__Field(HX_CSTRING("type"),true);		HX_STACK_VAR(type,"type");
			HX_STACK_LINE(904)
			switch( (int)(type->__Index())){
				case (int)0: {
					HX_STACK_LINE(906)
					Dynamic info = this->thread_message->__Field(HX_CSTRING("info"),true);		HX_STACK_VAR(info,"info");
					HX_STACK_LINE(907)
					::Luxe_obj::loadTexture(info->__Field(HX_CSTRING("id"),true),info->__Field(HX_CSTRING("onloaded"),true),false);
				}
				;break;
				case (int)1: {
					HX_STACK_LINE(911)
					Dynamic info = this->thread_message->__Field(HX_CSTRING("info"),true);		HX_STACK_VAR(info,"info");
					HX_STACK_LINE(912)
					::Luxe_obj::loadShader(info->__Field(HX_CSTRING("ps_id"),true),info->__Field(HX_CSTRING("vs_id"),true),info->__Field(HX_CSTRING("onloaded"),true),null());
				}
				;break;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Core_obj,process_loading_thread,(void))

::String Core_obj::core_tag_update;

::String Core_obj::core_tag_renderdt;

::String Core_obj::game_tag_update;

::String Core_obj::core_tag_render;

::String Core_obj::core_tag_debug;

::String Core_obj::core_tag_updates;

::String Core_obj::core_tag_events;

::String Core_obj::core_tag_audio;

::String Core_obj::core_tag_input;

::String Core_obj::core_tag_timer;

::String Core_obj::core_tag_scene;


Core_obj::Core_obj()
{
}

void Core_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Core);
	HX_MARK_MEMBER_NAME(game,"game");
	HX_MARK_MEMBER_NAME(core_thread,"core_thread");
	HX_MARK_MEMBER_NAME(thread_message,"thread_message");
	HX_MARK_MEMBER_NAME(console_visible,"console_visible");
	HX_MARK_MEMBER_NAME(headless,"headless");
	HX_MARK_MEMBER_NAME(emitter,"emitter");
	HX_MARK_MEMBER_NAME(debug,"debug");
	HX_MARK_MEMBER_NAME(draw,"draw");
	HX_MARK_MEMBER_NAME(timer,"timer");
	HX_MARK_MEMBER_NAME(events,"events");
	HX_MARK_MEMBER_NAME(input,"input");
	HX_MARK_MEMBER_NAME(audio,"audio");
	HX_MARK_MEMBER_NAME(scene,"scene");
	HX_MARK_MEMBER_NAME(resources,"resources");
	HX_MARK_MEMBER_NAME(renderer,"renderer");
	HX_MARK_MEMBER_NAME(screen,"screen");
	HX_MARK_MEMBER_NAME(physics,"physics");
	HX_MARK_MEMBER_NAME(_mouse_pos,"_mouse_pos");
	HX_MARK_MEMBER_NAME(_touch_pos,"_touch_pos");
	HX_MARK_MEMBER_NAME(shutting_down,"shutting_down");
	HX_MARK_MEMBER_NAME(has_shutdown,"has_shutdown");
	HX_MARK_MEMBER_NAME(has_inited,"has_inited");
	::snow::App_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Core_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(game,"game");
	HX_VISIT_MEMBER_NAME(core_thread,"core_thread");
	HX_VISIT_MEMBER_NAME(thread_message,"thread_message");
	HX_VISIT_MEMBER_NAME(console_visible,"console_visible");
	HX_VISIT_MEMBER_NAME(headless,"headless");
	HX_VISIT_MEMBER_NAME(emitter,"emitter");
	HX_VISIT_MEMBER_NAME(debug,"debug");
	HX_VISIT_MEMBER_NAME(draw,"draw");
	HX_VISIT_MEMBER_NAME(timer,"timer");
	HX_VISIT_MEMBER_NAME(events,"events");
	HX_VISIT_MEMBER_NAME(input,"input");
	HX_VISIT_MEMBER_NAME(audio,"audio");
	HX_VISIT_MEMBER_NAME(scene,"scene");
	HX_VISIT_MEMBER_NAME(resources,"resources");
	HX_VISIT_MEMBER_NAME(renderer,"renderer");
	HX_VISIT_MEMBER_NAME(screen,"screen");
	HX_VISIT_MEMBER_NAME(physics,"physics");
	HX_VISIT_MEMBER_NAME(_mouse_pos,"_mouse_pos");
	HX_VISIT_MEMBER_NAME(_touch_pos,"_touch_pos");
	HX_VISIT_MEMBER_NAME(shutting_down,"shutting_down");
	HX_VISIT_MEMBER_NAME(has_shutdown,"has_shutdown");
	HX_VISIT_MEMBER_NAME(has_inited,"has_inited");
	::snow::App_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Core_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"on") ) { return on_dyn(); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"off") ) { return off_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"game") ) { return game; }
		if (HX_FIELD_EQ(inName,"draw") ) { return draw; }
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		if (HX_FIELD_EQ(inName,"emit") ) { return emit_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"debug") ) { return debug; }
		if (HX_FIELD_EQ(inName,"timer") ) { return timer; }
		if (HX_FIELD_EQ(inName,"input") ) { return input; }
		if (HX_FIELD_EQ(inName,"audio") ) { return audio; }
		if (HX_FIELD_EQ(inName,"scene") ) { return scene; }
		if (HX_FIELD_EQ(inName,"ready") ) { return ready_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"events") ) { return events; }
		if (HX_FIELD_EQ(inName,"screen") ) { return screen; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"render") ) { return render_dyn(); }
		if (HX_FIELD_EQ(inName,"config") ) { return config_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"emitter") ) { return emitter; }
		if (HX_FIELD_EQ(inName,"physics") ) { return physics; }
		if (HX_FIELD_EQ(inName,"onevent") ) { return onevent_dyn(); }
		if (HX_FIELD_EQ(inName,"onkeyup") ) { return onkeyup_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"headless") ) { return headless; }
		if (HX_FIELD_EQ(inName,"renderer") ) { return renderer; }
		if (HX_FIELD_EQ(inName,"shutdown") ) { return shutdown_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"resources") ) { return resources; }
		if (HX_FIELD_EQ(inName,"ondestroy") ) { return ondestroy_dyn(); }
		if (HX_FIELD_EQ(inName,"onkeydown") ) { return onkeydown_dyn(); }
		if (HX_FIELD_EQ(inName,"oninputup") ) { return oninputup_dyn(); }
		if (HX_FIELD_EQ(inName,"onmouseup") ) { return onmouseup_dyn(); }
		if (HX_FIELD_EQ(inName,"ontouchup") ) { return ontouchup_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_mouse_pos") ) { return _mouse_pos; }
		if (HX_FIELD_EQ(inName,"_touch_pos") ) { return _touch_pos; }
		if (HX_FIELD_EQ(inName,"has_inited") ) { return has_inited; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"core_thread") ) { return core_thread; }
		if (HX_FIELD_EQ(inName,"ontextinput") ) { return ontextinput_dyn(); }
		if (HX_FIELD_EQ(inName,"oninputdown") ) { return oninputdown_dyn(); }
		if (HX_FIELD_EQ(inName,"onmousedown") ) { return onmousedown_dyn(); }
		if (HX_FIELD_EQ(inName,"onmousemove") ) { return onmousemove_dyn(); }
		if (HX_FIELD_EQ(inName,"ontouchdown") ) { return ontouchdown_dyn(); }
		if (HX_FIELD_EQ(inName,"ontouchmove") ) { return ontouchmove_dyn(); }
		if (HX_FIELD_EQ(inName,"ongamepadup") ) { return ongamepadup_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"has_shutdown") ) { return has_shutdown; }
		if (HX_FIELD_EQ(inName,"window_event") ) { return window_event_dyn(); }
		if (HX_FIELD_EQ(inName,"show_console") ) { return show_console_dyn(); }
		if (HX_FIELD_EQ(inName,"onmousewheel") ) { return onmousewheel_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"shutting_down") ) { return shutting_down; }
		if (HX_FIELD_EQ(inName,"ongamepadaxis") ) { return ongamepadaxis_dyn(); }
		if (HX_FIELD_EQ(inName,"ongamepaddown") ) { return ongamepaddown_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"core_tag_debug") ) { return core_tag_debug; }
		if (HX_FIELD_EQ(inName,"core_tag_audio") ) { return core_tag_audio; }
		if (HX_FIELD_EQ(inName,"core_tag_input") ) { return core_tag_input; }
		if (HX_FIELD_EQ(inName,"core_tag_timer") ) { return core_tag_timer; }
		if (HX_FIELD_EQ(inName,"core_tag_scene") ) { return core_tag_scene; }
		if (HX_FIELD_EQ(inName,"thread_message") ) { return thread_message; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"core_tag_update") ) { return core_tag_update; }
		if (HX_FIELD_EQ(inName,"game_tag_update") ) { return game_tag_update; }
		if (HX_FIELD_EQ(inName,"core_tag_render") ) { return core_tag_render; }
		if (HX_FIELD_EQ(inName,"core_tag_events") ) { return core_tag_events; }
		if (HX_FIELD_EQ(inName,"console_visible") ) { return console_visible; }
		if (HX_FIELD_EQ(inName,"ongamepaddevice") ) { return ongamepaddevice_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"core_tag_updates") ) { return core_tag_updates; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"core_tag_renderdt") ) { return core_tag_renderdt; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"process_loading_thread") ) { return process_loading_thread_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Core_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"game") ) { game=inValue.Cast< ::luxe::Game >(); return inValue; }
		if (HX_FIELD_EQ(inName,"draw") ) { draw=inValue.Cast< ::luxe::Draw >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"debug") ) { debug=inValue.Cast< ::luxe::Debug >(); return inValue; }
		if (HX_FIELD_EQ(inName,"timer") ) { timer=inValue.Cast< ::luxe::Timer >(); return inValue; }
		if (HX_FIELD_EQ(inName,"input") ) { input=inValue.Cast< ::luxe::Input >(); return inValue; }
		if (HX_FIELD_EQ(inName,"audio") ) { audio=inValue.Cast< ::luxe::Audio >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scene") ) { scene=inValue.Cast< ::luxe::Scene >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"events") ) { events=inValue.Cast< ::luxe::Events >(); return inValue; }
		if (HX_FIELD_EQ(inName,"screen") ) { screen=inValue.Cast< ::luxe::Screen >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"emitter") ) { emitter=inValue.Cast< ::luxe::Emitter >(); return inValue; }
		if (HX_FIELD_EQ(inName,"physics") ) { physics=inValue.Cast< ::luxe::Physics >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"headless") ) { headless=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"renderer") ) { renderer=inValue.Cast< ::phoenix::Renderer >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"resources") ) { resources=inValue.Cast< ::luxe::resource::ResourceManager >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_mouse_pos") ) { _mouse_pos=inValue.Cast< ::phoenix::Vector >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_touch_pos") ) { _touch_pos=inValue.Cast< ::phoenix::Vector >(); return inValue; }
		if (HX_FIELD_EQ(inName,"has_inited") ) { has_inited=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"core_thread") ) { core_thread=inValue.Cast< ::cpp::vm::Thread >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"has_shutdown") ) { has_shutdown=inValue.Cast< bool >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"shutting_down") ) { shutting_down=inValue.Cast< bool >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"core_tag_debug") ) { core_tag_debug=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"core_tag_audio") ) { core_tag_audio=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"core_tag_input") ) { core_tag_input=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"core_tag_timer") ) { core_tag_timer=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"core_tag_scene") ) { core_tag_scene=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"thread_message") ) { thread_message=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"core_tag_update") ) { core_tag_update=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"game_tag_update") ) { game_tag_update=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"core_tag_render") ) { core_tag_render=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"core_tag_events") ) { core_tag_events=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"console_visible") ) { console_visible=inValue.Cast< bool >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"core_tag_updates") ) { core_tag_updates=inValue.Cast< ::String >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"core_tag_renderdt") ) { core_tag_renderdt=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Core_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("game"));
	outFields->push(HX_CSTRING("core_thread"));
	outFields->push(HX_CSTRING("thread_message"));
	outFields->push(HX_CSTRING("console_visible"));
	outFields->push(HX_CSTRING("headless"));
	outFields->push(HX_CSTRING("emitter"));
	outFields->push(HX_CSTRING("debug"));
	outFields->push(HX_CSTRING("draw"));
	outFields->push(HX_CSTRING("timer"));
	outFields->push(HX_CSTRING("events"));
	outFields->push(HX_CSTRING("input"));
	outFields->push(HX_CSTRING("audio"));
	outFields->push(HX_CSTRING("scene"));
	outFields->push(HX_CSTRING("resources"));
	outFields->push(HX_CSTRING("renderer"));
	outFields->push(HX_CSTRING("screen"));
	outFields->push(HX_CSTRING("physics"));
	outFields->push(HX_CSTRING("_mouse_pos"));
	outFields->push(HX_CSTRING("_touch_pos"));
	outFields->push(HX_CSTRING("shutting_down"));
	outFields->push(HX_CSTRING("has_shutdown"));
	outFields->push(HX_CSTRING("has_inited"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("core_tag_update"),
	HX_CSTRING("core_tag_renderdt"),
	HX_CSTRING("game_tag_update"),
	HX_CSTRING("core_tag_render"),
	HX_CSTRING("core_tag_debug"),
	HX_CSTRING("core_tag_updates"),
	HX_CSTRING("core_tag_events"),
	HX_CSTRING("core_tag_audio"),
	HX_CSTRING("core_tag_input"),
	HX_CSTRING("core_tag_timer"),
	HX_CSTRING("core_tag_scene"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::luxe::Game*/ ,(int)offsetof(Core_obj,game),HX_CSTRING("game")},
	{hx::fsObject /*::cpp::vm::Thread*/ ,(int)offsetof(Core_obj,core_thread),HX_CSTRING("core_thread")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Core_obj,thread_message),HX_CSTRING("thread_message")},
	{hx::fsBool,(int)offsetof(Core_obj,console_visible),HX_CSTRING("console_visible")},
	{hx::fsBool,(int)offsetof(Core_obj,headless),HX_CSTRING("headless")},
	{hx::fsObject /*::luxe::Emitter*/ ,(int)offsetof(Core_obj,emitter),HX_CSTRING("emitter")},
	{hx::fsObject /*::luxe::Debug*/ ,(int)offsetof(Core_obj,debug),HX_CSTRING("debug")},
	{hx::fsObject /*::luxe::Draw*/ ,(int)offsetof(Core_obj,draw),HX_CSTRING("draw")},
	{hx::fsObject /*::luxe::Timer*/ ,(int)offsetof(Core_obj,timer),HX_CSTRING("timer")},
	{hx::fsObject /*::luxe::Events*/ ,(int)offsetof(Core_obj,events),HX_CSTRING("events")},
	{hx::fsObject /*::luxe::Input*/ ,(int)offsetof(Core_obj,input),HX_CSTRING("input")},
	{hx::fsObject /*::luxe::Audio*/ ,(int)offsetof(Core_obj,audio),HX_CSTRING("audio")},
	{hx::fsObject /*::luxe::Scene*/ ,(int)offsetof(Core_obj,scene),HX_CSTRING("scene")},
	{hx::fsObject /*::luxe::resource::ResourceManager*/ ,(int)offsetof(Core_obj,resources),HX_CSTRING("resources")},
	{hx::fsObject /*::phoenix::Renderer*/ ,(int)offsetof(Core_obj,renderer),HX_CSTRING("renderer")},
	{hx::fsObject /*::luxe::Screen*/ ,(int)offsetof(Core_obj,screen),HX_CSTRING("screen")},
	{hx::fsObject /*::luxe::Physics*/ ,(int)offsetof(Core_obj,physics),HX_CSTRING("physics")},
	{hx::fsObject /*::phoenix::Vector*/ ,(int)offsetof(Core_obj,_mouse_pos),HX_CSTRING("_mouse_pos")},
	{hx::fsObject /*::phoenix::Vector*/ ,(int)offsetof(Core_obj,_touch_pos),HX_CSTRING("_touch_pos")},
	{hx::fsBool,(int)offsetof(Core_obj,shutting_down),HX_CSTRING("shutting_down")},
	{hx::fsBool,(int)offsetof(Core_obj,has_shutdown),HX_CSTRING("has_shutdown")},
	{hx::fsBool,(int)offsetof(Core_obj,has_inited),HX_CSTRING("has_inited")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("game"),
	HX_CSTRING("core_thread"),
	HX_CSTRING("thread_message"),
	HX_CSTRING("console_visible"),
	HX_CSTRING("headless"),
	HX_CSTRING("emitter"),
	HX_CSTRING("debug"),
	HX_CSTRING("draw"),
	HX_CSTRING("timer"),
	HX_CSTRING("events"),
	HX_CSTRING("input"),
	HX_CSTRING("audio"),
	HX_CSTRING("scene"),
	HX_CSTRING("resources"),
	HX_CSTRING("renderer"),
	HX_CSTRING("screen"),
	HX_CSTRING("physics"),
	HX_CSTRING("_mouse_pos"),
	HX_CSTRING("_touch_pos"),
	HX_CSTRING("shutting_down"),
	HX_CSTRING("has_shutdown"),
	HX_CSTRING("has_inited"),
	HX_CSTRING("ready"),
	HX_CSTRING("ondestroy"),
	HX_CSTRING("init"),
	HX_CSTRING("shutdown"),
	HX_CSTRING("on"),
	HX_CSTRING("off"),
	HX_CSTRING("emit"),
	HX_CSTRING("onevent"),
	HX_CSTRING("update"),
	HX_CSTRING("window_event"),
	HX_CSTRING("render"),
	HX_CSTRING("show_console"),
	HX_CSTRING("onkeydown"),
	HX_CSTRING("onkeyup"),
	HX_CSTRING("ontextinput"),
	HX_CSTRING("oninputdown"),
	HX_CSTRING("oninputup"),
	HX_CSTRING("onmousedown"),
	HX_CSTRING("onmouseup"),
	HX_CSTRING("onmousemove"),
	HX_CSTRING("onmousewheel"),
	HX_CSTRING("ontouchdown"),
	HX_CSTRING("ontouchup"),
	HX_CSTRING("ontouchmove"),
	HX_CSTRING("ongamepadaxis"),
	HX_CSTRING("ongamepaddown"),
	HX_CSTRING("ongamepadup"),
	HX_CSTRING("ongamepaddevice"),
	HX_CSTRING("config"),
	HX_CSTRING("process_loading_thread"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Core_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Core_obj::core_tag_update,"core_tag_update");
	HX_MARK_MEMBER_NAME(Core_obj::core_tag_renderdt,"core_tag_renderdt");
	HX_MARK_MEMBER_NAME(Core_obj::game_tag_update,"game_tag_update");
	HX_MARK_MEMBER_NAME(Core_obj::core_tag_render,"core_tag_render");
	HX_MARK_MEMBER_NAME(Core_obj::core_tag_debug,"core_tag_debug");
	HX_MARK_MEMBER_NAME(Core_obj::core_tag_updates,"core_tag_updates");
	HX_MARK_MEMBER_NAME(Core_obj::core_tag_events,"core_tag_events");
	HX_MARK_MEMBER_NAME(Core_obj::core_tag_audio,"core_tag_audio");
	HX_MARK_MEMBER_NAME(Core_obj::core_tag_input,"core_tag_input");
	HX_MARK_MEMBER_NAME(Core_obj::core_tag_timer,"core_tag_timer");
	HX_MARK_MEMBER_NAME(Core_obj::core_tag_scene,"core_tag_scene");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Core_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Core_obj::core_tag_update,"core_tag_update");
	HX_VISIT_MEMBER_NAME(Core_obj::core_tag_renderdt,"core_tag_renderdt");
	HX_VISIT_MEMBER_NAME(Core_obj::game_tag_update,"game_tag_update");
	HX_VISIT_MEMBER_NAME(Core_obj::core_tag_render,"core_tag_render");
	HX_VISIT_MEMBER_NAME(Core_obj::core_tag_debug,"core_tag_debug");
	HX_VISIT_MEMBER_NAME(Core_obj::core_tag_updates,"core_tag_updates");
	HX_VISIT_MEMBER_NAME(Core_obj::core_tag_events,"core_tag_events");
	HX_VISIT_MEMBER_NAME(Core_obj::core_tag_audio,"core_tag_audio");
	HX_VISIT_MEMBER_NAME(Core_obj::core_tag_input,"core_tag_input");
	HX_VISIT_MEMBER_NAME(Core_obj::core_tag_timer,"core_tag_timer");
	HX_VISIT_MEMBER_NAME(Core_obj::core_tag_scene,"core_tag_scene");
};

#endif

Class Core_obj::__mClass;

void Core_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("luxe.Core"), hx::TCanCast< Core_obj> ,sStaticFields,sMemberFields,
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

void Core_obj::__boot()
{
	core_tag_update= HX_CSTRING("real dt");
	core_tag_renderdt= HX_CSTRING("render dt");
	game_tag_update= HX_CSTRING("game.update");
	core_tag_render= HX_CSTRING("core.render");
	core_tag_debug= HX_CSTRING("core.debug");
	core_tag_updates= HX_CSTRING("core.updates");
	core_tag_events= HX_CSTRING("core.events");
	core_tag_audio= HX_CSTRING("core.audio");
	core_tag_input= HX_CSTRING("core.input");
	core_tag_timer= HX_CSTRING("core.timer");
	core_tag_scene= HX_CSTRING("core.scene");
}

} // end namespace luxe
