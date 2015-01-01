#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_Luxe
#include <Luxe.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_luxe_Core
#include <luxe/Core.h>
#endif
#ifndef INCLUDED_luxe_Cursor
#include <luxe/Cursor.h>
#endif
#ifndef INCLUDED_luxe_Debug
#include <luxe/Debug.h>
#endif
#ifndef INCLUDED_luxe_Emitter
#include <luxe/Emitter.h>
#endif
#ifndef INCLUDED_luxe_Entity
#include <luxe/Entity.h>
#endif
#ifndef INCLUDED_luxe_Objects
#include <luxe/Objects.h>
#endif
#ifndef INCLUDED_luxe_Screen
#include <luxe/Screen.h>
#endif
#ifndef INCLUDED_luxe_Text
#include <luxe/Text.h>
#endif
#ifndef INCLUDED_luxe_Visual
#include <luxe/Visual.h>
#endif
#ifndef INCLUDED_luxe_debug_DebugView
#include <luxe/debug/DebugView.h>
#endif
#ifndef INCLUDED_luxe_debug_Inspector
#include <luxe/debug/Inspector.h>
#endif
#ifndef INCLUDED_luxe_debug_ProfilerDebugView
#include <luxe/debug/ProfilerDebugView.h>
#endif
#ifndef INCLUDED_luxe_debug_StatsDebugView
#include <luxe/debug/StatsDebugView.h>
#endif
#ifndef INCLUDED_luxe_debug_TraceDebugView
#include <luxe/debug/TraceDebugView.h>
#endif
#ifndef INCLUDED_luxe_resource_Resource
#include <luxe/resource/Resource.h>
#endif
#ifndef INCLUDED_phoenix_Batcher
#include <phoenix/Batcher.h>
#endif
#ifndef INCLUDED_phoenix_BitmapFont
#include <phoenix/BitmapFont.h>
#endif
#ifndef INCLUDED_phoenix_Camera
#include <phoenix/Camera.h>
#endif
#ifndef INCLUDED_phoenix_Color
#include <phoenix/Color.h>
#endif
#ifndef INCLUDED_phoenix_Rectangle
#include <phoenix/Rectangle.h>
#endif
#ifndef INCLUDED_phoenix_Renderer
#include <phoenix/Renderer.h>
#endif
#ifndef INCLUDED_phoenix_Vector
#include <phoenix/Vector.h>
#endif
#ifndef INCLUDED_phoenix_geometry_Geometry
#include <phoenix/geometry/Geometry.h>
#endif
#ifndef INCLUDED_phoenix_geometry_QuadGeometry
#include <phoenix/geometry/QuadGeometry.h>
#endif
#ifndef INCLUDED_snow_App
#include <snow/App.h>
#endif
#ifndef INCLUDED_snow_input_Keycodes
#include <snow/input/Keycodes.h>
#endif
namespace luxe{

Void Debug_obj::__construct(::luxe::Core _core)
{
HX_STACK_FRAME("luxe.Debug","new",0xf1f6bded,"luxe.Debug.new","luxe/Debug.hx",24,0xe4198724)
HX_STACK_THIS(this)
HX_STACK_ARG(_core,"_core")
{
	HX_STACK_LINE(327)
	this->last_cursor_grab = false;
	HX_STACK_LINE(326)
	this->last_cursor_shown = true;
	HX_STACK_LINE(54)
	this->profiling = false;
	HX_STACK_LINE(53)
	this->profile_path = HX_CSTRING("profile.txt");
	HX_STACK_LINE(50)
	this->started = false;
	HX_STACK_LINE(44)
	this->last_view_index = (int)0;
	HX_STACK_LINE(43)
	this->current_view_index = (int)0;
	HX_STACK_LINE(41)
	this->dt_average_count = (int)0;
	HX_STACK_LINE(40)
	this->dt_average_span = (int)60;
	HX_STACK_LINE(39)
	this->dt_average_accum = (int)0;
	HX_STACK_LINE(38)
	this->dt_average = (int)0;
	HX_STACK_LINE(27)
	this->visible = false;
	HX_STACK_LINE(59)
	this->core = _core;
}
;
	return null();
}

//Debug_obj::~Debug_obj() { }

Dynamic Debug_obj::__CreateEmpty() { return  new Debug_obj; }
hx::ObjectPtr< Debug_obj > Debug_obj::__new(::luxe::Core _core)
{  hx::ObjectPtr< Debug_obj > result = new Debug_obj();
	result->__construct(_core);
	return result;}

Dynamic Debug_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Debug_obj > result = new Debug_obj();
	result->__construct(inArgs[0]);
	return result;}

Void Debug_obj::init( ){
{
		HX_STACK_FRAME("luxe.Debug","init",0xc2a828e3,"luxe.Debug.init","luxe/Debug.hx",62,0xe4198724)
		HX_STACK_THIS(this)
		HX_STACK_LINE(64)
		::haxe::ds::StringMap _g = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(64)
		::luxe::Debug_obj::trace_callbacks = _g;
		HX_STACK_LINE(68)
		::luxe::debug::TraceDebugView _g1 = ::luxe::debug::TraceDebugView_obj::__new();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(69)
		::luxe::debug::StatsDebugView _g2 = ::luxe::debug::StatsDebugView_obj::__new();		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(71)
		::luxe::debug::ProfilerDebugView _g3 = ::luxe::debug::ProfilerDebugView_obj::__new();		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(67)
		Array< ::Dynamic > _g4 = Array_obj< ::Dynamic >::__new().Add(_g1).Add(_g2).Add(_g3);		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(67)
		::luxe::Debug_obj::views = _g4;
		HX_STACK_LINE(77)
		this->current_view = ::luxe::Debug_obj::views->__get((int)0).StaticCast< ::luxe::debug::DebugView >();
		HX_STACK_LINE(79)
		::haxe::Log_obj::trace = ::luxe::Debug_obj::internal_trace_dyn();
		HX_STACK_LINE(138)
		Dynamic();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Debug_obj,init,(void))

Void Debug_obj::start( ::String _name,Dynamic __o__max){
Dynamic _max = __o__max.Default(0.0);
	HX_STACK_FRAME("luxe.Debug","start",0x566e9f2f,"luxe.Debug.start","luxe/Debug.hx",88,0xe4198724)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_name,"_name")
	HX_STACK_ARG(_max,"_max")
{
		HX_STACK_LINE(88)
		if ((!(this->core->headless))){
			HX_STACK_LINE(89)
			::luxe::debug::ProfilerDebugView_obj::start(_name,_max);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Debug_obj,start,(void))

Void Debug_obj::end( ::String _name){
{
		HX_STACK_FRAME("luxe.Debug","end",0xf1eff168,"luxe.Debug.end","luxe/Debug.hx",97,0xe4198724)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_name,"_name")
		HX_STACK_LINE(97)
		if ((!(this->core->headless))){
			HX_STACK_LINE(98)
			::luxe::debug::ProfilerDebugView_obj::end(_name);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Debug_obj,end,(void))

Void Debug_obj::remove_trace_listener( ::String _name){
{
		HX_STACK_FRAME("luxe.Debug","remove_trace_listener",0x28bf5e56,"luxe.Debug.remove_trace_listener","luxe/Debug.hx",104,0xe4198724)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_name,"_name")
		HX_STACK_LINE(104)
		::luxe::Debug_obj::trace_callbacks->remove(_name);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Debug_obj,remove_trace_listener,(void))

Void Debug_obj::add_trace_listener( ::String _name,Dynamic _callback){
{
		HX_STACK_FRAME("luxe.Debug","add_trace_listener",0x1a792d5f,"luxe.Debug.add_trace_listener","luxe/Debug.hx",109,0xe4198724)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_name,"_name")
		HX_STACK_ARG(_callback,"_callback")
		HX_STACK_LINE(109)
		::luxe::Debug_obj::trace_callbacks->set(_name,_callback);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Debug_obj,add_trace_listener,(void))

Void Debug_obj::create_debug_console( ){
{
		HX_STACK_FRAME("luxe.Debug","create_debug_console",0x55dabe3b,"luxe.Debug.create_debug_console","luxe/Debug.hx",153,0xe4198724)
		HX_STACK_THIS(this)
		HX_STACK_LINE(153)
		Array< ::Dynamic > _g = Array_obj< ::Dynamic >::__new().Add(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(157)
		this->core->on(HX_CSTRING("keyup"),this->keyup_dyn());
		HX_STACK_LINE(158)
		this->core->on(HX_CSTRING("keydown"),this->keydown_dyn());
		HX_STACK_LINE(159)
		this->core->on(HX_CSTRING("mouseup"),this->mouseup_dyn());
		HX_STACK_LINE(160)
		this->core->on(HX_CSTRING("mousedown"),this->mousedown_dyn());
		HX_STACK_LINE(161)
		this->core->on(HX_CSTRING("mousemove"),this->mousemove_dyn());
		HX_STACK_LINE(162)
		this->core->on(HX_CSTRING("mousewheel"),this->mousewheel_dyn());
		HX_STACK_LINE(165)
		::phoenix::Batcher _g1 = ::phoenix::Batcher_obj::__new(::Luxe_obj::renderer,HX_CSTRING("debug_batcher"));		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(165)
		this->batcher = _g1;
		HX_STACK_LINE(167)
		::phoenix::Camera _g11 = ::phoenix::Camera_obj::__new(null());		HX_STACK_VAR(_g11,"_g11");
		HX_STACK_LINE(167)
		this->view = _g11;
		HX_STACK_LINE(169)
		this->batcher->view = this->view;
		HX_STACK_LINE(171)
		this->batcher->set_layer((int)999);
		HX_STACK_LINE(173)
		::Luxe_obj::renderer->add_batch(this->batcher);
		HX_STACK_LINE(178)
		::phoenix::Color _g2 = ::phoenix::Color_obj::__new((int)0,(int)0,(int)0,0.8);		HX_STACK_VAR(_g2,"_g2");
		struct _Function_1_1{
			inline static Dynamic Block( hx::ObjectPtr< ::luxe::Debug_obj > __this,::phoenix::Color &_g2){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/Debug.hx",175,0xe4198724)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("x") , (int)0,false);
					__result->Add(HX_CSTRING("y") , (int)0,false);
					__result->Add(HX_CSTRING("w") , ::Luxe_obj::get_screen()->w,false);
					__result->Add(HX_CSTRING("h") , ::Luxe_obj::get_screen()->h,false);
					__result->Add(HX_CSTRING("color") , _g2,false);
					__result->Add(HX_CSTRING("depth") , (int)999,false);
					__result->Add(HX_CSTRING("group") , (int)999,false);
					__result->Add(HX_CSTRING("visible") , false,false);
					__result->Add(HX_CSTRING("batcher") , __this->batcher,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(175)
		Dynamic _g3 = _Function_1_1::Block(this,_g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(175)
		::phoenix::geometry::QuadGeometry _g4 = ::phoenix::geometry::QuadGeometry_obj::__new(_g3);		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(175)
		this->overlay = _g4;
		HX_STACK_LINE(186)
		::phoenix::Vector _g5 = ::phoenix::Vector_obj::__new((::Luxe_obj::get_screen()->w * 0.05),(::Luxe_obj::get_screen()->h * 0.05),null(),null());		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(186)
		this->padding = _g5;
		HX_STACK_LINE(189)
		::phoenix::Vector _g6 = ::phoenix::Vector_obj::__new(this->padding->x,this->padding->y,null(),null());		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(190)
		::phoenix::Vector _g7 = ::phoenix::Vector_obj::__new((::Luxe_obj::get_screen()->w - (this->padding->x * (int)2)),(::Luxe_obj::get_screen()->h - (this->padding->y * (int)2)),null(),null());		HX_STACK_VAR(_g7,"_g7");
		struct _Function_1_2{
			inline static Dynamic Block( ::phoenix::Vector &_g7,hx::ObjectPtr< ::luxe::Debug_obj > __this,::phoenix::Vector &_g6){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/Debug.hx",187,0xe4198724)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("title") , HX_CSTRING("luxe debug"),false);
					__result->Add(HX_CSTRING("pos") , _g6,false);
					__result->Add(HX_CSTRING("size") , _g7,false);
					__result->Add(HX_CSTRING("batcher") , __this->batcher,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(187)
		Dynamic _g8 = _Function_1_2::Block(_g7,this,_g6);		HX_STACK_VAR(_g8,"_g8");
		HX_STACK_LINE(187)
		::luxe::debug::Inspector _g9 = ::luxe::debug::Inspector_obj::__new(_g8);		HX_STACK_VAR(_g9,"_g9");
		HX_STACK_LINE(187)
		this->debug_inspector = _g9;
		HX_STACK_LINE(194)
		this->debug_inspector->onrefresh = this->refresh_dyn();

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_3,Array< ::Dynamic >,_g)
		Void run(Dynamic _event){
			HX_STACK_FRAME("*","_Function_1_3",0x5200ed39,"*._Function_1_3","luxe/Debug.hx",197,0xe4198724)
			HX_STACK_ARG(_event,"_event")
			{
				HX_STACK_LINE(198)
				Float _w = _event->__Field(HX_CSTRING("event"),true)->__Field(HX_CSTRING("x"),true);		HX_STACK_VAR(_w,"_w");
				HX_STACK_LINE(199)
				Float _h = _event->__Field(HX_CSTRING("event"),true)->__Field(HX_CSTRING("y"),true);		HX_STACK_VAR(_h,"_h");
				HX_STACK_LINE(201)
				_g->__get((int)0).StaticCast< ::luxe::Debug >()->overlay->resize(::phoenix::Vector_obj::__new(_w,_h,null(),null()));
				HX_STACK_LINE(202)
				_g->__get((int)0).StaticCast< ::luxe::Debug >()->view->set_viewport(::phoenix::Rectangle_obj::__new((int)0,(int)0,_w,_h));
				HX_STACK_LINE(203)
				_g->__get((int)0).StaticCast< ::luxe::Debug >()->debug_inspector->set_size(::phoenix::Vector_obj::__new((_w - (_g->__get((int)0).StaticCast< ::luxe::Debug >()->padding->x * (int)2)),(_h - (_g->__get((int)0).StaticCast< ::luxe::Debug >()->padding->y * (int)2)),null(),null()));
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(197)
		this->core->on(HX_CSTRING("window.resized"), Dynamic(new _Function_1_3(_g)));
		HX_STACK_LINE(207)
		this->batcher->enabled = false;
		HX_STACK_LINE(209)
		{
			HX_STACK_LINE(209)
			int _g10 = (int)0;		HX_STACK_VAR(_g10,"_g10");
			HX_STACK_LINE(209)
			Array< ::Dynamic > _g12 = ::luxe::Debug_obj::views;		HX_STACK_VAR(_g12,"_g12");
			HX_STACK_LINE(209)
			while((true)){
				HX_STACK_LINE(209)
				if ((!(((_g10 < _g12->length))))){
					HX_STACK_LINE(209)
					break;
				}
				HX_STACK_LINE(209)
				::luxe::debug::DebugView view = _g12->__get(_g10).StaticCast< ::luxe::debug::DebugView >();		HX_STACK_VAR(view,"view");
				HX_STACK_LINE(209)
				++(_g10);
				HX_STACK_LINE(210)
				view->create();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Debug_obj,create_debug_console,(void))

Void Debug_obj::mouseup( Dynamic e){
{
		HX_STACK_FRAME("luxe.Debug","mouseup",0x521047cd,"luxe.Debug.mouseup","luxe/Debug.hx",218,0xe4198724)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(218)
		if ((this->visible)){
			HX_STACK_LINE(219)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(219)
			Array< ::Dynamic > _g1 = ::luxe::Debug_obj::views;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(219)
			while((true)){
				HX_STACK_LINE(219)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(219)
					break;
				}
				HX_STACK_LINE(219)
				::luxe::debug::DebugView view = _g1->__get(_g).StaticCast< ::luxe::debug::DebugView >();		HX_STACK_VAR(view,"view");
				HX_STACK_LINE(219)
				++(_g);
				HX_STACK_LINE(220)
				view->onmouseup(e);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Debug_obj,mouseup,(void))

Void Debug_obj::mousedown( Dynamic e){
{
		HX_STACK_FRAME("luxe.Debug","mousedown",0x214e9a54,"luxe.Debug.mousedown","luxe/Debug.hx",226,0xe4198724)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(226)
		if ((this->visible)){
			HX_STACK_LINE(227)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(227)
			Array< ::Dynamic > _g1 = ::luxe::Debug_obj::views;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(227)
			while((true)){
				HX_STACK_LINE(227)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(227)
					break;
				}
				HX_STACK_LINE(227)
				::luxe::debug::DebugView view = _g1->__get(_g).StaticCast< ::luxe::debug::DebugView >();		HX_STACK_VAR(view,"view");
				HX_STACK_LINE(227)
				++(_g);
				HX_STACK_LINE(228)
				view->onmousedown(e);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Debug_obj,mousedown,(void))

Void Debug_obj::mousewheel( Dynamic e){
{
		HX_STACK_FRAME("luxe.Debug","mousewheel",0xef674669,"luxe.Debug.mousewheel","luxe/Debug.hx",234,0xe4198724)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(234)
		if ((this->visible)){
			HX_STACK_LINE(235)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(235)
			Array< ::Dynamic > _g1 = ::luxe::Debug_obj::views;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(235)
			while((true)){
				HX_STACK_LINE(235)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(235)
					break;
				}
				HX_STACK_LINE(235)
				::luxe::debug::DebugView view = _g1->__get(_g).StaticCast< ::luxe::debug::DebugView >();		HX_STACK_VAR(view,"view");
				HX_STACK_LINE(235)
				++(_g);
				HX_STACK_LINE(236)
				view->onmousewheel(e);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Debug_obj,mousewheel,(void))

Void Debug_obj::mousemove( Dynamic e){
{
		HX_STACK_FRAME("luxe.Debug","mousemove",0x27418503,"luxe.Debug.mousemove","luxe/Debug.hx",242,0xe4198724)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(242)
		if ((this->visible)){
			HX_STACK_LINE(243)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(243)
			Array< ::Dynamic > _g1 = ::luxe::Debug_obj::views;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(243)
			while((true)){
				HX_STACK_LINE(243)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(243)
					break;
				}
				HX_STACK_LINE(243)
				::luxe::debug::DebugView view = _g1->__get(_g).StaticCast< ::luxe::debug::DebugView >();		HX_STACK_VAR(view,"view");
				HX_STACK_LINE(243)
				++(_g);
				HX_STACK_LINE(244)
				view->onmousemove(e);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Debug_obj,mousemove,(void))

Void Debug_obj::keyup( Dynamic e){
{
		HX_STACK_FRAME("luxe.Debug","keyup",0xb1620087,"luxe.Debug.keyup","luxe/Debug.hx",251,0xe4198724)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(251)
		if ((this->visible)){
			HX_STACK_LINE(252)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(252)
			Array< ::Dynamic > _g1 = ::luxe::Debug_obj::views;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(252)
			while((true)){
				HX_STACK_LINE(252)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(252)
					break;
				}
				HX_STACK_LINE(252)
				::luxe::debug::DebugView view = _g1->__get(_g).StaticCast< ::luxe::debug::DebugView >();		HX_STACK_VAR(view,"view");
				HX_STACK_LINE(252)
				++(_g);
				HX_STACK_LINE(253)
				view->onkeyup(e);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Debug_obj,keyup,(void))

Void Debug_obj::keydown( Dynamic e){
{
		HX_STACK_FRAME("luxe.Debug","keydown",0x430b758e,"luxe.Debug.keydown","luxe/Debug.hx",271,0xe4198724)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(271)
		if ((this->visible)){
			HX_STACK_LINE(273)
			if (((bool((e->__Field(HX_CSTRING("keycode"),true) == ::snow::input::Keycodes_obj::key_1)) && bool(this->core->console_visible)))){
				HX_STACK_LINE(274)
				this->switch_view();
			}
			HX_STACK_LINE(277)
			{
				HX_STACK_LINE(277)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(277)
				Array< ::Dynamic > _g1 = ::luxe::Debug_obj::views;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(277)
				while((true)){
					HX_STACK_LINE(277)
					if ((!(((_g < _g1->length))))){
						HX_STACK_LINE(277)
						break;
					}
					HX_STACK_LINE(277)
					::luxe::debug::DebugView view = _g1->__get(_g).StaticCast< ::luxe::debug::DebugView >();		HX_STACK_VAR(view,"view");
					HX_STACK_LINE(277)
					++(_g);
					HX_STACK_LINE(278)
					view->onkeydown(e);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Debug_obj,keydown,(void))

Void Debug_obj::onresize( Dynamic e){
{
		HX_STACK_FRAME("luxe.Debug","onresize",0x8b87afa6,"luxe.Debug.onresize","luxe/Debug.hx",295,0xe4198724)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(296)
		::phoenix::Rectangle _g = ::phoenix::Rectangle_obj::__new((int)0,(int)0,::Luxe_obj::get_screen()->w,::Luxe_obj::get_screen()->h);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(296)
		this->view->set_viewport(_g);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Debug_obj,onresize,(void))

Void Debug_obj::refresh( ){
{
		HX_STACK_FRAME("luxe.Debug","refresh",0x7ebe11e8,"luxe.Debug.refresh","luxe/Debug.hx",300,0xe4198724)
		HX_STACK_THIS(this)
		HX_STACK_LINE(300)
		this->current_view->refresh();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Debug_obj,refresh,(void))

Void Debug_obj::switch_view( ){
{
		HX_STACK_FRAME("luxe.Debug","switch_view",0x7281325d,"luxe.Debug.switch_view","luxe/Debug.hx",304,0xe4198724)
		HX_STACK_THIS(this)
		HX_STACK_LINE(307)
		this->last_view_index = this->current_view_index;
		HX_STACK_LINE(309)
		(this->current_view_index)++;
		HX_STACK_LINE(312)
		if (((this->current_view_index > (::luxe::Debug_obj::views->length - (int)1)))){
			HX_STACK_LINE(313)
			this->current_view_index = (int)0;
		}
		HX_STACK_LINE(317)
		::luxe::Debug_obj::views->__get(this->last_view_index).StaticCast< ::luxe::debug::DebugView >()->hide();
		HX_STACK_LINE(319)
		this->current_view = ::luxe::Debug_obj::views->__get(this->current_view_index).StaticCast< ::luxe::debug::DebugView >();
		HX_STACK_LINE(322)
		this->current_view->show();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Debug_obj,switch_view,(void))

Void Debug_obj::show_console( hx::Null< bool >  __o__show){
bool _show = __o__show.Default(true);
	HX_STACK_FRAME("luxe.Debug","show_console",0x488557a8,"luxe.Debug.show_console","luxe/Debug.hx",329,0xe4198724)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_show,"_show")
{
		HX_STACK_LINE(335)
		if ((_show)){
			HX_STACK_LINE(337)
			bool _g = ::Luxe_obj::get_screen()->cursor->get_visible();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(337)
			this->last_cursor_shown = _g;
			HX_STACK_LINE(338)
			bool _g1 = ::Luxe_obj::get_screen()->cursor->get_grab();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(338)
			this->last_cursor_grab = _g1;
			HX_STACK_LINE(340)
			::Luxe_obj::get_screen()->cursor->set_visible(true);
			HX_STACK_LINE(341)
			::Luxe_obj::get_screen()->cursor->set_grab(false);
		}
		else{
			HX_STACK_LINE(345)
			if (((this->last_cursor_shown != true))){
				HX_STACK_LINE(346)
				::Luxe_obj::get_screen()->cursor->set_visible(this->last_cursor_shown);
			}
			HX_STACK_LINE(349)
			if (((this->last_cursor_grab != false))){
				HX_STACK_LINE(350)
				::Luxe_obj::get_screen()->cursor->set_grab(this->last_cursor_grab);
			}
		}
		HX_STACK_LINE(354)
		this->visible = _show;
		HX_STACK_LINE(355)
		this->batcher->enabled = _show;
		HX_STACK_LINE(357)
		if ((_show)){
			HX_STACK_LINE(358)
			this->current_view->show();
			HX_STACK_LINE(359)
			this->overlay->set_visible(true);
			HX_STACK_LINE(360)
			this->debug_inspector->show();
		}
		else{
			HX_STACK_LINE(362)
			this->current_view->hide();
			HX_STACK_LINE(363)
			this->debug_inspector->hide();
			HX_STACK_LINE(364)
			this->overlay->set_visible(false);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Debug_obj,show_console,(void))

Void Debug_obj::destroy( ){
{
		HX_STACK_FRAME("luxe.Debug","destroy",0xb6236507,"luxe.Debug.destroy","luxe/Debug.hx",369,0xe4198724)
		HX_STACK_THIS(this)
		HX_STACK_LINE(371)
		this->core->off(HX_CSTRING("keyup"),this->keyup_dyn());
		HX_STACK_LINE(372)
		this->core->off(HX_CSTRING("keydown"),this->keydown_dyn());
		HX_STACK_LINE(373)
		this->core->off(HX_CSTRING("mouseup"),this->mouseup_dyn());
		HX_STACK_LINE(374)
		this->core->off(HX_CSTRING("mousedown"),this->mousedown_dyn());
		HX_STACK_LINE(375)
		this->core->off(HX_CSTRING("mousemove"),this->mousemove_dyn());
		HX_STACK_LINE(376)
		this->core->off(HX_CSTRING("mousewheel"),this->mousewheel_dyn());
		HX_STACK_LINE(379)
		::luxe::Debug_obj::shut_down = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Debug_obj,destroy,(void))

Void Debug_obj::process( ){
{
		HX_STACK_FRAME("luxe.Debug","process",0x82e7da7c,"luxe.Debug.process","luxe/Debug.hx",383,0xe4198724)
		HX_STACK_THIS(this)
		HX_STACK_LINE(385)
		hx::AddEq(this->dt_average_accum,::Luxe_obj::core->delta_time);
		HX_STACK_LINE(386)
		(this->dt_average_count)++;
		HX_STACK_LINE(388)
		if (((this->dt_average_count == (this->dt_average_span - (int)1)))){
			HX_STACK_LINE(389)
			this->dt_average = (Float(this->dt_average_accum) / Float(this->dt_average_span));
			HX_STACK_LINE(390)
			this->dt_average_accum = this->dt_average;
			HX_STACK_LINE(391)
			this->dt_average_count = (int)0;
		}
		HX_STACK_LINE(394)
		if ((!(this->visible))){
			HX_STACK_LINE(395)
			return null();
		}
		HX_STACK_LINE(399)
		Float _g1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(399)
		{
			HX_STACK_LINE(399)
			Float n = ::Math_obj::pow((int)10,(int)5);		HX_STACK_VAR(n,"n");
			HX_STACK_LINE(399)
			int _g = ::Std_obj::_int((::Luxe_obj::core->delta_time * n));		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(399)
			_g1 = (Float(_g) / Float(n));
		}
		HX_STACK_LINE(399)
		::String _g2 = (((HX_CSTRING("[ ") + this->current_view->name) + HX_CSTRING(" ] ")) + _g1);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(399)
		::String _g3 = (_g2 + HX_CSTRING(" / "));		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(399)
		Float _g5;		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(399)
		{
			HX_STACK_LINE(399)
			Float n = ::Math_obj::pow((int)10,(int)5);		HX_STACK_VAR(n,"n");
			HX_STACK_LINE(399)
			int _g4 = ::Std_obj::_int((this->dt_average * n));		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(399)
			_g5 = (Float(_g4) / Float(n));
		}
		HX_STACK_LINE(399)
		::String _g6 = (_g3 + _g5);		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(399)
		this->debug_inspector->_title_text->set_text(_g6);
		HX_STACK_LINE(402)
		{
			HX_STACK_LINE(402)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(402)
			Array< ::Dynamic > _g11 = ::luxe::Debug_obj::views;		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(402)
			while((true)){
				HX_STACK_LINE(402)
				if ((!(((_g < _g11->length))))){
					HX_STACK_LINE(402)
					break;
				}
				HX_STACK_LINE(402)
				::luxe::debug::DebugView view = _g11->__get(_g).StaticCast< ::luxe::debug::DebugView >();		HX_STACK_VAR(view,"view");
				HX_STACK_LINE(402)
				++(_g);
				HX_STACK_LINE(403)
				view->process();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Debug_obj,process,(void))

bool Debug_obj::shut_down;

Array< ::Dynamic > Debug_obj::views;

::haxe::ds::StringMap Debug_obj::trace_callbacks;

Void Debug_obj::default_native_trace( Dynamic v,Dynamic infos){
{
		HX_STACK_FRAME("luxe.Debug","default_native_trace",0x3ba603ee,"luxe.Debug.default_native_trace","luxe/Debug.hx",116,0xe4198724)
		HX_STACK_ARG(v,"v")
		HX_STACK_ARG(infos,"infos")
		HX_STACK_LINE(116)
		if (((bool((infos != null())) && bool((infos->__Field(HX_CSTRING("customParams"),true) != null()))))){
			HX_STACK_LINE(118)
			::String extra = HX_CSTRING("");		HX_STACK_VAR(extra,"extra");
			HX_STACK_LINE(120)
			{
				HX_STACK_LINE(120)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(120)
				Dynamic _g1 = infos->__Field(HX_CSTRING("customParams"),true);		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(120)
				while((true)){
					HX_STACK_LINE(120)
					if ((!(((_g < _g1->__Field(HX_CSTRING("length"),true)))))){
						HX_STACK_LINE(120)
						break;
					}
					HX_STACK_LINE(120)
					Dynamic v1 = _g1->__GetItem(_g);		HX_STACK_VAR(v1,"v1");
					HX_STACK_LINE(120)
					++(_g);
					HX_STACK_LINE(120)
					::String _g2 = ::Std_obj::string(v1);		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(120)
					::String _g11 = (HX_CSTRING(",") + _g2);		HX_STACK_VAR(_g11,"_g11");
					HX_STACK_LINE(120)
					hx::AddEq(extra,_g11);
				}
			}
			HX_STACK_LINE(122)
			__trace((::Std_obj::string(v) + extra),infos);
		}
		else{
			HX_STACK_LINE(125)
			__trace(v,infos);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Debug_obj,default_native_trace,(void))

Void Debug_obj::internal_trace( Dynamic v,Dynamic inf){
{
		HX_STACK_FRAME("luxe.Debug","internal_trace",0x7eeb5c56,"luxe.Debug.internal_trace","luxe/Debug.hx",131,0xe4198724)
		HX_STACK_ARG(v,"v")
		HX_STACK_ARG(inf,"inf")
		HX_STACK_LINE(133)
		::String _g = ::Std_obj::string(inf->__Field(HX_CSTRING("lineNumber"),true));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(133)
		::String _line = ::StringTools_obj::rpad(_g,HX_CSTRING(" "),(int)4);		HX_STACK_VAR(_line,"_line");
		HX_STACK_LINE(135)
		::luxe::Debug_obj::default_native_trace(v,inf);
		HX_STACK_LINE(142)
		if ((::luxe::Debug_obj::shut_down)){
			HX_STACK_LINE(143)
			return null();
		}
		HX_STACK_LINE(147)
		for(::cpp::FastIterator_obj< Dynamic > *__it = ::cpp::CreateFastIterator< Dynamic >(::luxe::Debug_obj::trace_callbacks->iterator());  __it->hasNext(); ){
			Dynamic _callback = __it->next();
			_callback(v,inf).Cast< Void >();
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Debug_obj,internal_trace,(void))


Debug_obj::Debug_obj()
{
}

void Debug_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Debug);
	HX_MARK_MEMBER_NAME(core,"core");
	HX_MARK_MEMBER_NAME(visible,"visible");
	HX_MARK_MEMBER_NAME(debug_inspector,"debug_inspector");
	HX_MARK_MEMBER_NAME(overlay,"overlay");
	HX_MARK_MEMBER_NAME(batcher,"batcher");
	HX_MARK_MEMBER_NAME(view,"view");
	HX_MARK_MEMBER_NAME(debug_font,"debug_font");
	HX_MARK_MEMBER_NAME(dt_average,"dt_average");
	HX_MARK_MEMBER_NAME(dt_average_accum,"dt_average_accum");
	HX_MARK_MEMBER_NAME(dt_average_span,"dt_average_span");
	HX_MARK_MEMBER_NAME(dt_average_count,"dt_average_count");
	HX_MARK_MEMBER_NAME(current_view_index,"current_view_index");
	HX_MARK_MEMBER_NAME(last_view_index,"last_view_index");
	HX_MARK_MEMBER_NAME(current_view,"current_view");
	HX_MARK_MEMBER_NAME(padding,"padding");
	HX_MARK_MEMBER_NAME(started,"started");
	HX_MARK_MEMBER_NAME(profile_path,"profile_path");
	HX_MARK_MEMBER_NAME(profiling,"profiling");
	HX_MARK_MEMBER_NAME(last_cursor_shown,"last_cursor_shown");
	HX_MARK_MEMBER_NAME(last_cursor_grab,"last_cursor_grab");
	HX_MARK_END_CLASS();
}

void Debug_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(core,"core");
	HX_VISIT_MEMBER_NAME(visible,"visible");
	HX_VISIT_MEMBER_NAME(debug_inspector,"debug_inspector");
	HX_VISIT_MEMBER_NAME(overlay,"overlay");
	HX_VISIT_MEMBER_NAME(batcher,"batcher");
	HX_VISIT_MEMBER_NAME(view,"view");
	HX_VISIT_MEMBER_NAME(debug_font,"debug_font");
	HX_VISIT_MEMBER_NAME(dt_average,"dt_average");
	HX_VISIT_MEMBER_NAME(dt_average_accum,"dt_average_accum");
	HX_VISIT_MEMBER_NAME(dt_average_span,"dt_average_span");
	HX_VISIT_MEMBER_NAME(dt_average_count,"dt_average_count");
	HX_VISIT_MEMBER_NAME(current_view_index,"current_view_index");
	HX_VISIT_MEMBER_NAME(last_view_index,"last_view_index");
	HX_VISIT_MEMBER_NAME(current_view,"current_view");
	HX_VISIT_MEMBER_NAME(padding,"padding");
	HX_VISIT_MEMBER_NAME(started,"started");
	HX_VISIT_MEMBER_NAME(profile_path,"profile_path");
	HX_VISIT_MEMBER_NAME(profiling,"profiling");
	HX_VISIT_MEMBER_NAME(last_cursor_shown,"last_cursor_shown");
	HX_VISIT_MEMBER_NAME(last_cursor_grab,"last_cursor_grab");
}

Dynamic Debug_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"end") ) { return end_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"core") ) { return core; }
		if (HX_FIELD_EQ(inName,"view") ) { return view; }
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"views") ) { return views; }
		if (HX_FIELD_EQ(inName,"start") ) { return start_dyn(); }
		if (HX_FIELD_EQ(inName,"keyup") ) { return keyup_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"visible") ) { return visible; }
		if (HX_FIELD_EQ(inName,"overlay") ) { return overlay; }
		if (HX_FIELD_EQ(inName,"batcher") ) { return batcher; }
		if (HX_FIELD_EQ(inName,"padding") ) { return padding; }
		if (HX_FIELD_EQ(inName,"started") ) { return started; }
		if (HX_FIELD_EQ(inName,"mouseup") ) { return mouseup_dyn(); }
		if (HX_FIELD_EQ(inName,"keydown") ) { return keydown_dyn(); }
		if (HX_FIELD_EQ(inName,"refresh") ) { return refresh_dyn(); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"process") ) { return process_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"onresize") ) { return onresize_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"shut_down") ) { return shut_down; }
		if (HX_FIELD_EQ(inName,"profiling") ) { return profiling; }
		if (HX_FIELD_EQ(inName,"mousedown") ) { return mousedown_dyn(); }
		if (HX_FIELD_EQ(inName,"mousemove") ) { return mousemove_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"debug_font") ) { return debug_font; }
		if (HX_FIELD_EQ(inName,"dt_average") ) { return dt_average; }
		if (HX_FIELD_EQ(inName,"mousewheel") ) { return mousewheel_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"switch_view") ) { return switch_view_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"current_view") ) { return current_view; }
		if (HX_FIELD_EQ(inName,"profile_path") ) { return profile_path; }
		if (HX_FIELD_EQ(inName,"show_console") ) { return show_console_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"internal_trace") ) { return internal_trace_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"trace_callbacks") ) { return trace_callbacks; }
		if (HX_FIELD_EQ(inName,"debug_inspector") ) { return debug_inspector; }
		if (HX_FIELD_EQ(inName,"dt_average_span") ) { return dt_average_span; }
		if (HX_FIELD_EQ(inName,"last_view_index") ) { return last_view_index; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"dt_average_accum") ) { return dt_average_accum; }
		if (HX_FIELD_EQ(inName,"dt_average_count") ) { return dt_average_count; }
		if (HX_FIELD_EQ(inName,"last_cursor_grab") ) { return last_cursor_grab; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"last_cursor_shown") ) { return last_cursor_shown; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"current_view_index") ) { return current_view_index; }
		if (HX_FIELD_EQ(inName,"add_trace_listener") ) { return add_trace_listener_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"default_native_trace") ) { return default_native_trace_dyn(); }
		if (HX_FIELD_EQ(inName,"create_debug_console") ) { return create_debug_console_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"remove_trace_listener") ) { return remove_trace_listener_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Debug_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"core") ) { core=inValue.Cast< ::luxe::Core >(); return inValue; }
		if (HX_FIELD_EQ(inName,"view") ) { view=inValue.Cast< ::phoenix::Camera >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"views") ) { views=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"visible") ) { visible=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"overlay") ) { overlay=inValue.Cast< ::phoenix::geometry::QuadGeometry >(); return inValue; }
		if (HX_FIELD_EQ(inName,"batcher") ) { batcher=inValue.Cast< ::phoenix::Batcher >(); return inValue; }
		if (HX_FIELD_EQ(inName,"padding") ) { padding=inValue.Cast< ::phoenix::Vector >(); return inValue; }
		if (HX_FIELD_EQ(inName,"started") ) { started=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"shut_down") ) { shut_down=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"profiling") ) { profiling=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"debug_font") ) { debug_font=inValue.Cast< ::phoenix::BitmapFont >(); return inValue; }
		if (HX_FIELD_EQ(inName,"dt_average") ) { dt_average=inValue.Cast< Float >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"current_view") ) { current_view=inValue.Cast< ::luxe::debug::DebugView >(); return inValue; }
		if (HX_FIELD_EQ(inName,"profile_path") ) { profile_path=inValue.Cast< ::String >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"trace_callbacks") ) { trace_callbacks=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"debug_inspector") ) { debug_inspector=inValue.Cast< ::luxe::debug::Inspector >(); return inValue; }
		if (HX_FIELD_EQ(inName,"dt_average_span") ) { dt_average_span=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"last_view_index") ) { last_view_index=inValue.Cast< int >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"dt_average_accum") ) { dt_average_accum=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"dt_average_count") ) { dt_average_count=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"last_cursor_grab") ) { last_cursor_grab=inValue.Cast< bool >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"last_cursor_shown") ) { last_cursor_shown=inValue.Cast< bool >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"current_view_index") ) { current_view_index=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Debug_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("core"));
	outFields->push(HX_CSTRING("visible"));
	outFields->push(HX_CSTRING("debug_inspector"));
	outFields->push(HX_CSTRING("overlay"));
	outFields->push(HX_CSTRING("batcher"));
	outFields->push(HX_CSTRING("view"));
	outFields->push(HX_CSTRING("debug_font"));
	outFields->push(HX_CSTRING("dt_average"));
	outFields->push(HX_CSTRING("dt_average_accum"));
	outFields->push(HX_CSTRING("dt_average_span"));
	outFields->push(HX_CSTRING("dt_average_count"));
	outFields->push(HX_CSTRING("current_view_index"));
	outFields->push(HX_CSTRING("last_view_index"));
	outFields->push(HX_CSTRING("current_view"));
	outFields->push(HX_CSTRING("padding"));
	outFields->push(HX_CSTRING("started"));
	outFields->push(HX_CSTRING("profile_path"));
	outFields->push(HX_CSTRING("profiling"));
	outFields->push(HX_CSTRING("last_cursor_shown"));
	outFields->push(HX_CSTRING("last_cursor_grab"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("shut_down"),
	HX_CSTRING("views"),
	HX_CSTRING("trace_callbacks"),
	HX_CSTRING("default_native_trace"),
	HX_CSTRING("internal_trace"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::luxe::Core*/ ,(int)offsetof(Debug_obj,core),HX_CSTRING("core")},
	{hx::fsBool,(int)offsetof(Debug_obj,visible),HX_CSTRING("visible")},
	{hx::fsObject /*::luxe::debug::Inspector*/ ,(int)offsetof(Debug_obj,debug_inspector),HX_CSTRING("debug_inspector")},
	{hx::fsObject /*::phoenix::geometry::QuadGeometry*/ ,(int)offsetof(Debug_obj,overlay),HX_CSTRING("overlay")},
	{hx::fsObject /*::phoenix::Batcher*/ ,(int)offsetof(Debug_obj,batcher),HX_CSTRING("batcher")},
	{hx::fsObject /*::phoenix::Camera*/ ,(int)offsetof(Debug_obj,view),HX_CSTRING("view")},
	{hx::fsObject /*::phoenix::BitmapFont*/ ,(int)offsetof(Debug_obj,debug_font),HX_CSTRING("debug_font")},
	{hx::fsFloat,(int)offsetof(Debug_obj,dt_average),HX_CSTRING("dt_average")},
	{hx::fsFloat,(int)offsetof(Debug_obj,dt_average_accum),HX_CSTRING("dt_average_accum")},
	{hx::fsInt,(int)offsetof(Debug_obj,dt_average_span),HX_CSTRING("dt_average_span")},
	{hx::fsInt,(int)offsetof(Debug_obj,dt_average_count),HX_CSTRING("dt_average_count")},
	{hx::fsInt,(int)offsetof(Debug_obj,current_view_index),HX_CSTRING("current_view_index")},
	{hx::fsInt,(int)offsetof(Debug_obj,last_view_index),HX_CSTRING("last_view_index")},
	{hx::fsObject /*::luxe::debug::DebugView*/ ,(int)offsetof(Debug_obj,current_view),HX_CSTRING("current_view")},
	{hx::fsObject /*::phoenix::Vector*/ ,(int)offsetof(Debug_obj,padding),HX_CSTRING("padding")},
	{hx::fsBool,(int)offsetof(Debug_obj,started),HX_CSTRING("started")},
	{hx::fsString,(int)offsetof(Debug_obj,profile_path),HX_CSTRING("profile_path")},
	{hx::fsBool,(int)offsetof(Debug_obj,profiling),HX_CSTRING("profiling")},
	{hx::fsBool,(int)offsetof(Debug_obj,last_cursor_shown),HX_CSTRING("last_cursor_shown")},
	{hx::fsBool,(int)offsetof(Debug_obj,last_cursor_grab),HX_CSTRING("last_cursor_grab")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("core"),
	HX_CSTRING("visible"),
	HX_CSTRING("debug_inspector"),
	HX_CSTRING("overlay"),
	HX_CSTRING("batcher"),
	HX_CSTRING("view"),
	HX_CSTRING("debug_font"),
	HX_CSTRING("dt_average"),
	HX_CSTRING("dt_average_accum"),
	HX_CSTRING("dt_average_span"),
	HX_CSTRING("dt_average_count"),
	HX_CSTRING("current_view_index"),
	HX_CSTRING("last_view_index"),
	HX_CSTRING("current_view"),
	HX_CSTRING("padding"),
	HX_CSTRING("started"),
	HX_CSTRING("profile_path"),
	HX_CSTRING("profiling"),
	HX_CSTRING("init"),
	HX_CSTRING("start"),
	HX_CSTRING("end"),
	HX_CSTRING("remove_trace_listener"),
	HX_CSTRING("add_trace_listener"),
	HX_CSTRING("create_debug_console"),
	HX_CSTRING("mouseup"),
	HX_CSTRING("mousedown"),
	HX_CSTRING("mousewheel"),
	HX_CSTRING("mousemove"),
	HX_CSTRING("keyup"),
	HX_CSTRING("keydown"),
	HX_CSTRING("onresize"),
	HX_CSTRING("refresh"),
	HX_CSTRING("switch_view"),
	HX_CSTRING("last_cursor_shown"),
	HX_CSTRING("last_cursor_grab"),
	HX_CSTRING("show_console"),
	HX_CSTRING("destroy"),
	HX_CSTRING("process"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Debug_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Debug_obj::shut_down,"shut_down");
	HX_MARK_MEMBER_NAME(Debug_obj::views,"views");
	HX_MARK_MEMBER_NAME(Debug_obj::trace_callbacks,"trace_callbacks");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Debug_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Debug_obj::shut_down,"shut_down");
	HX_VISIT_MEMBER_NAME(Debug_obj::views,"views");
	HX_VISIT_MEMBER_NAME(Debug_obj::trace_callbacks,"trace_callbacks");
};

#endif

Class Debug_obj::__mClass;

void Debug_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("luxe.Debug"), hx::TCanCast< Debug_obj> ,sStaticFields,sMemberFields,
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

void Debug_obj::__boot()
{
	shut_down= false;
}

} // end namespace luxe
