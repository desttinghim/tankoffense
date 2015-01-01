#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_BalancedTree
#include <haxe/ds/BalancedTree.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_snow_Snow
#include <snow/Snow.h>
#endif
#ifndef INCLUDED_snow_input_Input
#include <snow/input/Input.h>
#endif
#ifndef INCLUDED_snow_platform_native_window_WindowSystem
#include <snow/platform/native/window/WindowSystem.h>
#endif
#ifndef INCLUDED_snow_platform_native_window_sdl_WindowSystem
#include <snow/platform/native/window/sdl/WindowSystem.h>
#endif
#ifndef INCLUDED_snow_utils_AbstractClass
#include <snow/utils/AbstractClass.h>
#endif
#ifndef INCLUDED_snow_window_Window
#include <snow/window/Window.h>
#endif
#ifndef INCLUDED_snow_window_WindowSystemBinding
#include <snow/window/WindowSystemBinding.h>
#endif
#ifndef INCLUDED_snow_window_Windowing
#include <snow/window/Windowing.h>
#endif
#ifndef INCLUDED_snow_window__Windowing_WindowHandleMap
#include <snow/window/_Windowing/WindowHandleMap.h>
#endif
namespace snow{
namespace window{

Void Windowing_obj::__construct(::snow::Snow _lib)
{
HX_STACK_FRAME("snow.window.Windowing","new",0x53384b91,"snow.window.Windowing.new","snow/window/Windowing.hx",12,0xc4a0331f)
HX_STACK_THIS(this)
HX_STACK_ARG(_lib,"_lib")
{
	HX_STACK_LINE(19)
	this->window_count = (int)0;
	HX_STACK_LINE(30)
	this->lib = _lib;
	HX_STACK_LINE(31)
	::haxe::ds::IntMap _g = ::haxe::ds::IntMap_obj::__new();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(31)
	this->window_list = _g;
	HX_STACK_LINE(32)
	::snow::window::_Windowing::WindowHandleMap _g1 = ::snow::window::_Windowing::WindowHandleMap_obj::__new();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(32)
	this->window_handles = _g1;
	HX_STACK_LINE(34)
	::snow::platform::native::window::sdl::WindowSystem _g2 = ::snow::platform::native::window::sdl::WindowSystem_obj::__new(hx::ObjectPtr<OBJ_>(this),this->lib);		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(34)
	this->platform = _g2;
	HX_STACK_LINE(36)
	this->platform->init();
}
;
	return null();
}

//Windowing_obj::~Windowing_obj() { }

Dynamic Windowing_obj::__CreateEmpty() { return  new Windowing_obj; }
hx::ObjectPtr< Windowing_obj > Windowing_obj::__new(::snow::Snow _lib)
{  hx::ObjectPtr< Windowing_obj > result = new Windowing_obj();
	result->__construct(_lib);
	return result;}

Dynamic Windowing_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Windowing_obj > result = new Windowing_obj();
	result->__construct(inArgs[0]);
	return result;}

::snow::window::Window Windowing_obj::create( Dynamic _config){
	HX_STACK_FRAME("snow.window.Windowing","create",0x7d4d406b,"snow.window.Windowing.create","snow/window/Windowing.hx",43,0xc4a0331f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_config,"_config")
	HX_STACK_LINE(45)
	::snow::window::Window _window = ::snow::window::Window_obj::__new(hx::ObjectPtr<OBJ_>(this),_config);		HX_STACK_VAR(_window,"_window");
	HX_STACK_LINE(47)
	this->window_list->set(_window->id,_window);
	HX_STACK_LINE(48)
	this->window_handles->set(_window->handle,_window->id);
	HX_STACK_LINE(49)
	(this->window_count)++;
	HX_STACK_LINE(53)
	this->platform->listen(_window);
	HX_STACK_LINE(57)
	if (((bool((_config->__Field(HX_CSTRING("no_input"),true) == null())) || bool((_config->__Field(HX_CSTRING("no_input"),true) == false))))){
		HX_STACK_LINE(58)
		this->lib->input->listen(_window);
	}
	HX_STACK_LINE(61)
	return _window;
}


HX_DEFINE_DYNAMIC_FUNC1(Windowing_obj,create,return )

Void Windowing_obj::remove( ::snow::window::Window _window){
{
		HX_STACK_FRAME("snow.window.Windowing","remove",0x05c675b3,"snow.window.Windowing.remove","snow/window/Windowing.hx",67,0xc4a0331f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_window,"_window")
		HX_STACK_LINE(69)
		this->window_list->remove(_window->id);
		HX_STACK_LINE(70)
		this->window_handles->remove(_window->handle);
		HX_STACK_LINE(71)
		(this->window_count)--;
		HX_STACK_LINE(73)
		this->platform->unlisten(_window);
		HX_STACK_LINE(75)
		if (((bool((_window->config->__Field(HX_CSTRING("no_input"),true) == null())) || bool((_window->config->__Field(HX_CSTRING("no_input"),true) == false))))){
			HX_STACK_LINE(76)
			this->lib->input->unlisten(_window);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Windowing_obj,remove,(void))

::snow::window::Window Windowing_obj::window_from_handle( Dynamic _handle){
	HX_STACK_FRAME("snow.window.Windowing","window_from_handle",0x0a15fefd,"snow.window.Windowing.window_from_handle","snow/window/Windowing.hx",82,0xc4a0331f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_handle,"_handle")
	HX_STACK_LINE(84)
	if ((this->window_handles->exists(_handle))){
		HX_STACK_LINE(85)
		Dynamic _id = this->window_handles->get(_handle);		HX_STACK_VAR(_id,"_id");
		HX_STACK_LINE(86)
		return this->window_list->get(_id);
	}
	HX_STACK_LINE(89)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Windowing_obj,window_from_handle,return )

::snow::window::Window Windowing_obj::window_from_id( int _id){
	HX_STACK_FRAME("snow.window.Windowing","window_from_id",0xd0d948b0,"snow.window.Windowing.window_from_id","snow/window/Windowing.hx",96,0xc4a0331f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_id,"_id")
	HX_STACK_LINE(96)
	return this->window_list->get(_id);
}


HX_DEFINE_DYNAMIC_FUNC1(Windowing_obj,window_from_id,return )

int Windowing_obj::enable_vsync( bool _enable){
	HX_STACK_FRAME("snow.window.Windowing","enable_vsync",0x75fe7e84,"snow.window.Windowing.enable_vsync","snow/window/Windowing.hx",105,0xc4a0331f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_enable,"_enable")
	HX_STACK_LINE(105)
	return this->platform->system_enable_vsync(_enable);
}


HX_DEFINE_DYNAMIC_FUNC1(Windowing_obj,enable_vsync,return )

Void Windowing_obj::enable_cursor( bool _enable){
{
		HX_STACK_FRAME("snow.window.Windowing","enable_cursor",0x5218dac3,"snow.window.Windowing.enable_cursor","snow/window/Windowing.hx",112,0xc4a0331f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_enable,"_enable")
		HX_STACK_LINE(112)
		this->platform->system_enable_cursor(_enable);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Windowing_obj,enable_cursor,(void))

Void Windowing_obj::enable_cursor_lock( bool _enable){
{
		HX_STACK_FRAME("snow.window.Windowing","enable_cursor_lock",0xd5f0fa27,"snow.window.Windowing.enable_cursor_lock","snow/window/Windowing.hx",119,0xc4a0331f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_enable,"_enable")
		HX_STACK_LINE(119)
		this->platform->system_lock_cursor(_enable);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Windowing_obj,enable_cursor_lock,(void))

int Windowing_obj::display_count( ){
	HX_STACK_FRAME("snow.window.Windowing","display_count",0xb3179643,"snow.window.Windowing.display_count","snow/window/Windowing.hx",129,0xc4a0331f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(129)
	return this->platform->display_count();
}


HX_DEFINE_DYNAMIC_FUNC0(Windowing_obj,display_count,return )

int Windowing_obj::display_mode_count( int display){
	HX_STACK_FRAME("snow.window.Windowing","display_mode_count",0x30c475bf,"snow.window.Windowing.display_mode_count","snow/window/Windowing.hx",134,0xc4a0331f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(display,"display")
	HX_STACK_LINE(134)
	return this->platform->display_mode_count(display);
}


HX_DEFINE_DYNAMIC_FUNC1(Windowing_obj,display_mode_count,return )

Dynamic Windowing_obj::display_native_mode( int display){
	HX_STACK_FRAME("snow.window.Windowing","display_native_mode",0xd940e2bf,"snow.window.Windowing.display_native_mode","snow/window/Windowing.hx",139,0xc4a0331f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(display,"display")
	HX_STACK_LINE(139)
	return this->platform->display_native_mode(display);
}


HX_DEFINE_DYNAMIC_FUNC1(Windowing_obj,display_native_mode,return )

Dynamic Windowing_obj::display_current_mode( int display){
	HX_STACK_FRAME("snow.window.Windowing","display_current_mode",0x6613e975,"snow.window.Windowing.display_current_mode","snow/window/Windowing.hx",144,0xc4a0331f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(display,"display")
	HX_STACK_LINE(144)
	return this->platform->display_current_mode(display);
}


HX_DEFINE_DYNAMIC_FUNC1(Windowing_obj,display_current_mode,return )

Dynamic Windowing_obj::display_mode( int display,int mode_index){
	HX_STACK_FRAME("snow.window.Windowing","display_mode",0x3b126c6f,"snow.window.Windowing.display_mode","snow/window/Windowing.hx",149,0xc4a0331f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(display,"display")
	HX_STACK_ARG(mode_index,"mode_index")
	HX_STACK_LINE(149)
	return this->platform->display_mode(display,mode_index);
}


HX_DEFINE_DYNAMIC_FUNC2(Windowing_obj,display_mode,return )

Dynamic Windowing_obj::display_bounds( int display){
	HX_STACK_FRAME("snow.window.Windowing","display_bounds",0x9b307a81,"snow.window.Windowing.display_bounds","snow/window/Windowing.hx",154,0xc4a0331f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(display,"display")
	HX_STACK_LINE(154)
	return this->platform->display_bounds(display);
}


HX_DEFINE_DYNAMIC_FUNC1(Windowing_obj,display_bounds,return )

::String Windowing_obj::display_name( int display){
	HX_STACK_FRAME("snow.window.Windowing","display_name",0x3bb10b57,"snow.window.Windowing.display_name","snow/window/Windowing.hx",159,0xc4a0331f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(display,"display")
	HX_STACK_LINE(159)
	return this->platform->display_name(display);
}


HX_DEFINE_DYNAMIC_FUNC1(Windowing_obj,display_name,return )

Void Windowing_obj::on_event( Dynamic _event){
{
		HX_STACK_FRAME("snow.window.Windowing","on_event",0x4c3ee4e9,"snow.window.Windowing.on_event","snow/window/Windowing.hx",169,0xc4a0331f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_event,"_event")
		HX_STACK_LINE(169)
		if (((_event->__Field(HX_CSTRING("type"),true) == (int)5))){
			HX_STACK_LINE(171)
			Dynamic _window_event = _event->__Field(HX_CSTRING("window"),true);		HX_STACK_VAR(_window_event,"_window_event");
			HX_STACK_LINE(173)
			::snow::window::Window _window = this->window_list->get(_window_event->__Field(HX_CSTRING("window_id"),true));		HX_STACK_VAR(_window,"_window");
			HX_STACK_LINE(175)
			if (((_window != null()))){
				HX_STACK_LINE(176)
				_window->on_event(_window_event);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Windowing_obj,on_event,(void))

Void Windowing_obj::update( ){
{
		HX_STACK_FRAME("snow.window.Windowing","update",0x88435f78,"snow.window.Windowing.update","snow/window/Windowing.hx",185,0xc4a0331f)
		HX_STACK_THIS(this)
		HX_STACK_LINE(187)
		this->platform->process();
		HX_STACK_LINE(189)
		for(::cpp::FastIterator_obj< ::snow::window::Window > *__it = ::cpp::CreateFastIterator< ::snow::window::Window >(this->window_list->iterator());  __it->hasNext(); ){
			::snow::window::Window window = __it->next();
			window->update();
		}
		HX_STACK_LINE(193)
		for(::cpp::FastIterator_obj< ::snow::window::Window > *__it = ::cpp::CreateFastIterator< ::snow::window::Window >(this->window_list->iterator());  __it->hasNext(); ){
			::snow::window::Window window = __it->next();
			if ((window->auto_render)){
				HX_STACK_LINE(195)
				window->render();
			}
;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Windowing_obj,update,(void))

Void Windowing_obj::destroy( ){
{
		HX_STACK_FRAME("snow.window.Windowing","destroy",0x396694ab,"snow.window.Windowing.destroy","snow/window/Windowing.hx",205,0xc4a0331f)
		HX_STACK_THIS(this)
		HX_STACK_LINE(205)
		this->platform->destroy();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Windowing_obj,destroy,(void))


Windowing_obj::Windowing_obj()
{
}

void Windowing_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Windowing);
	HX_MARK_MEMBER_NAME(window_list,"window_list");
	HX_MARK_MEMBER_NAME(window_handles,"window_handles");
	HX_MARK_MEMBER_NAME(window_count,"window_count");
	HX_MARK_MEMBER_NAME(lib,"lib");
	HX_MARK_MEMBER_NAME(platform,"platform");
	HX_MARK_END_CLASS();
}

void Windowing_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(window_list,"window_list");
	HX_VISIT_MEMBER_NAME(window_handles,"window_handles");
	HX_VISIT_MEMBER_NAME(window_count,"window_count");
	HX_VISIT_MEMBER_NAME(lib,"lib");
	HX_VISIT_MEMBER_NAME(platform,"platform");
}

Dynamic Windowing_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"lib") ) { return lib; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		if (HX_FIELD_EQ(inName,"remove") ) { return remove_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"platform") ) { return platform; }
		if (HX_FIELD_EQ(inName,"on_event") ) { return on_event_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"window_list") ) { return window_list; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"window_count") ) { return window_count; }
		if (HX_FIELD_EQ(inName,"enable_vsync") ) { return enable_vsync_dyn(); }
		if (HX_FIELD_EQ(inName,"display_mode") ) { return display_mode_dyn(); }
		if (HX_FIELD_EQ(inName,"display_name") ) { return display_name_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"enable_cursor") ) { return enable_cursor_dyn(); }
		if (HX_FIELD_EQ(inName,"display_count") ) { return display_count_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"window_handles") ) { return window_handles; }
		if (HX_FIELD_EQ(inName,"window_from_id") ) { return window_from_id_dyn(); }
		if (HX_FIELD_EQ(inName,"display_bounds") ) { return display_bounds_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"window_from_handle") ) { return window_from_handle_dyn(); }
		if (HX_FIELD_EQ(inName,"enable_cursor_lock") ) { return enable_cursor_lock_dyn(); }
		if (HX_FIELD_EQ(inName,"display_mode_count") ) { return display_mode_count_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"display_native_mode") ) { return display_native_mode_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"display_current_mode") ) { return display_current_mode_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Windowing_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"lib") ) { lib=inValue.Cast< ::snow::Snow >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"platform") ) { platform=inValue.Cast< ::snow::platform::native::window::sdl::WindowSystem >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"window_list") ) { window_list=inValue.Cast< ::haxe::ds::IntMap >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"window_count") ) { window_count=inValue.Cast< int >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"window_handles") ) { window_handles=inValue.Cast< ::snow::window::_Windowing::WindowHandleMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Windowing_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("window_list"));
	outFields->push(HX_CSTRING("window_handles"));
	outFields->push(HX_CSTRING("window_count"));
	outFields->push(HX_CSTRING("lib"));
	outFields->push(HX_CSTRING("platform"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ds::IntMap*/ ,(int)offsetof(Windowing_obj,window_list),HX_CSTRING("window_list")},
	{hx::fsObject /*::snow::window::_Windowing::WindowHandleMap*/ ,(int)offsetof(Windowing_obj,window_handles),HX_CSTRING("window_handles")},
	{hx::fsInt,(int)offsetof(Windowing_obj,window_count),HX_CSTRING("window_count")},
	{hx::fsObject /*::snow::Snow*/ ,(int)offsetof(Windowing_obj,lib),HX_CSTRING("lib")},
	{hx::fsObject /*::snow::platform::native::window::sdl::WindowSystem*/ ,(int)offsetof(Windowing_obj,platform),HX_CSTRING("platform")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("window_list"),
	HX_CSTRING("window_handles"),
	HX_CSTRING("window_count"),
	HX_CSTRING("lib"),
	HX_CSTRING("platform"),
	HX_CSTRING("create"),
	HX_CSTRING("remove"),
	HX_CSTRING("window_from_handle"),
	HX_CSTRING("window_from_id"),
	HX_CSTRING("enable_vsync"),
	HX_CSTRING("enable_cursor"),
	HX_CSTRING("enable_cursor_lock"),
	HX_CSTRING("display_count"),
	HX_CSTRING("display_mode_count"),
	HX_CSTRING("display_native_mode"),
	HX_CSTRING("display_current_mode"),
	HX_CSTRING("display_mode"),
	HX_CSTRING("display_bounds"),
	HX_CSTRING("display_name"),
	HX_CSTRING("on_event"),
	HX_CSTRING("update"),
	HX_CSTRING("destroy"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Windowing_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Windowing_obj::__mClass,"__mClass");
};

#endif

Class Windowing_obj::__mClass;

void Windowing_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("snow.window.Windowing"), hx::TCanCast< Windowing_obj> ,sStaticFields,sMemberFields,
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

void Windowing_obj::__boot()
{
}

} // end namespace snow
} // end namespace window
