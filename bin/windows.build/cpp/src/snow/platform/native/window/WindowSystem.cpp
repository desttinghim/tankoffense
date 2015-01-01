#include <hxcpp.h>

#ifndef INCLUDED_snow_Snow
#include <snow/Snow.h>
#endif
#ifndef INCLUDED_snow_platform_native_window_WindowSystem
#include <snow/platform/native/window/WindowSystem.h>
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
namespace snow{
namespace platform{
namespace native{
namespace window{

Void WindowSystem_obj::__construct(::snow::window::Windowing _manager,::snow::Snow _lib)
{
HX_STACK_FRAME("snow.platform.native.window.WindowSystem","new",0x3d50ee68,"snow.platform.native.window.WindowSystem.new","snow/platform/native/window/WindowSystem.hx",17,0x4f642408)
HX_STACK_THIS(this)
HX_STACK_ARG(_manager,"_manager")
HX_STACK_ARG(_lib,"_lib")
{
	HX_STACK_LINE(19)
	this->manager = _manager;
	HX_STACK_LINE(20)
	this->lib = _lib;
}
;
	return null();
}

//WindowSystem_obj::~WindowSystem_obj() { }

Dynamic WindowSystem_obj::__CreateEmpty() { return  new WindowSystem_obj; }
hx::ObjectPtr< WindowSystem_obj > WindowSystem_obj::__new(::snow::window::Windowing _manager,::snow::Snow _lib)
{  hx::ObjectPtr< WindowSystem_obj > result = new WindowSystem_obj();
	result->__construct(_manager,_lib);
	return result;}

Dynamic WindowSystem_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< WindowSystem_obj > result = new WindowSystem_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

Void WindowSystem_obj::init( ){
{
		HX_STACK_FRAME("snow.platform.native.window.WindowSystem","init",0x66386408,"snow.platform.native.window.WindowSystem.init","snow/platform/native/window/WindowSystem.hx",24,0x4f642408)
		HX_STACK_THIS(this)
	}
return null();
}


Void WindowSystem_obj::process( ){
{
		HX_STACK_FRAME("snow.platform.native.window.WindowSystem","process",0x91636477,"snow.platform.native.window.WindowSystem.process","snow/platform/native/window/WindowSystem.hx",27,0x4f642408)
		HX_STACK_THIS(this)
	}
return null();
}


Void WindowSystem_obj::destroy( ){
{
		HX_STACK_FRAME("snow.platform.native.window.WindowSystem","destroy",0xc49eef02,"snow.platform.native.window.WindowSystem.destroy","snow/platform/native/window/WindowSystem.hx",30,0x4f642408)
		HX_STACK_THIS(this)
	}
return null();
}


Void WindowSystem_obj::listen( ::snow::window::Window window){
{
		HX_STACK_FRAME("snow.platform.native.window.WindowSystem","listen",0x08cd1f3f,"snow.platform.native.window.WindowSystem.listen","snow/platform/native/window/WindowSystem.hx",33,0x4f642408)
		HX_STACK_THIS(this)
		HX_STACK_ARG(window,"window")
	}
return null();
}


Void WindowSystem_obj::unlisten( ::snow::window::Window window){
{
		HX_STACK_FRAME("snow.platform.native.window.WindowSystem","unlisten",0x67d1fc58,"snow.platform.native.window.WindowSystem.unlisten","snow/platform/native/window/WindowSystem.hx",36,0x4f642408)
		HX_STACK_THIS(this)
		HX_STACK_ARG(window,"window")
	}
return null();
}


Void WindowSystem_obj::create( Dynamic render_config,Dynamic config,Dynamic on_created){
{
		HX_STACK_FRAME("snow.platform.native.window.WindowSystem","create",0x94e2bdf4,"snow.platform.native.window.WindowSystem.create","snow/platform/native/window/WindowSystem.hx",40,0x4f642408)
		HX_STACK_THIS(this)
		HX_STACK_ARG(render_config,"render_config")
		HX_STACK_ARG(config,"config")
		HX_STACK_ARG(on_created,"on_created")
		HX_STACK_LINE(40)
		::snow::platform::native::window::WindowSystem_obj::snow_window_create(render_config,config,on_created);
	}
return null();
}


Void WindowSystem_obj::close( ::snow::window::Window window){
{
		HX_STACK_FRAME("snow.platform.native.window.WindowSystem","close",0x9569c7c0,"snow.platform.native.window.WindowSystem.close","snow/platform/native/window/WindowSystem.hx",44,0x4f642408)
		HX_STACK_THIS(this)
		HX_STACK_ARG(window,"window")
		HX_STACK_LINE(44)
		::snow::platform::native::window::WindowSystem_obj::snow_window_close(window->handle);
	}
return null();
}


Void WindowSystem_obj::show( ::snow::window::Window window){
{
		HX_STACK_FRAME("snow.platform.native.window.WindowSystem","show",0x6ccffdf5,"snow.platform.native.window.WindowSystem.show","snow/platform/native/window/WindowSystem.hx",48,0x4f642408)
		HX_STACK_THIS(this)
		HX_STACK_ARG(window,"window")
		HX_STACK_LINE(48)
		::snow::platform::native::window::WindowSystem_obj::snow_window_show(window->handle);
	}
return null();
}


Void WindowSystem_obj::destroy_window( ::snow::window::Window window){
{
		HX_STACK_FRAME("snow.platform.native.window.WindowSystem","destroy_window",0x77157acd,"snow.platform.native.window.WindowSystem.destroy_window","snow/platform/native/window/WindowSystem.hx",52,0x4f642408)
		HX_STACK_THIS(this)
		HX_STACK_ARG(window,"window")
		HX_STACK_LINE(52)
		::snow::platform::native::window::WindowSystem_obj::snow_window_destroy_window(window->handle);
	}
return null();
}


Void WindowSystem_obj::update( ::snow::window::Window window){
{
		HX_STACK_FRAME("snow.platform.native.window.WindowSystem","update",0x9fd8dd01,"snow.platform.native.window.WindowSystem.update","snow/platform/native/window/WindowSystem.hx",56,0x4f642408)
		HX_STACK_THIS(this)
		HX_STACK_ARG(window,"window")
		HX_STACK_LINE(56)
		::snow::platform::native::window::WindowSystem_obj::snow_window_update(window->handle);
	}
return null();
}


Void WindowSystem_obj::render( ::snow::window::Window window){
{
		HX_STACK_FRAME("snow.platform.native.window.WindowSystem","render",0x1dfcc24e,"snow.platform.native.window.WindowSystem.render","snow/platform/native/window/WindowSystem.hx",60,0x4f642408)
		HX_STACK_THIS(this)
		HX_STACK_ARG(window,"window")
		HX_STACK_LINE(60)
		::snow::platform::native::window::WindowSystem_obj::snow_window_render(window->handle);
	}
return null();
}


Void WindowSystem_obj::swap( ::snow::window::Window window){
{
		HX_STACK_FRAME("snow.platform.native.window.WindowSystem","swap",0x6cdb538b,"snow.platform.native.window.WindowSystem.swap","snow/platform/native/window/WindowSystem.hx",64,0x4f642408)
		HX_STACK_THIS(this)
		HX_STACK_ARG(window,"window")
		HX_STACK_LINE(64)
		::snow::platform::native::window::WindowSystem_obj::snow_window_swap(window->handle);
	}
return null();
}


Void WindowSystem_obj::simple_message( ::snow::window::Window window,::String message,::String __o_title){
::String title = __o_title.Default(HX_CSTRING(""));
	HX_STACK_FRAME("snow.platform.native.window.WindowSystem","simple_message",0xb30a2472,"snow.platform.native.window.WindowSystem.simple_message","snow/platform/native/window/WindowSystem.hx",68,0x4f642408)
	HX_STACK_THIS(this)
	HX_STACK_ARG(window,"window")
	HX_STACK_ARG(message,"message")
	HX_STACK_ARG(title,"title")
{
		HX_STACK_LINE(68)
		::snow::platform::native::window::WindowSystem_obj::snow_window_simple_message(window->handle,message,title);
	}
return null();
}


Void WindowSystem_obj::set_size( ::snow::window::Window window,int w,int h){
{
		HX_STACK_FRAME("snow.platform.native.window.WindowSystem","set_size",0xeffcbab6,"snow.platform.native.window.WindowSystem.set_size","snow/platform/native/window/WindowSystem.hx",72,0x4f642408)
		HX_STACK_THIS(this)
		HX_STACK_ARG(window,"window")
		HX_STACK_ARG(w,"w")
		HX_STACK_ARG(h,"h")
		HX_STACK_LINE(72)
		::snow::platform::native::window::WindowSystem_obj::snow_window_set_size(window->handle,w,h);
	}
return null();
}


Void WindowSystem_obj::set_position( ::snow::window::Window window,int x,int y){
{
		HX_STACK_FRAME("snow.platform.native.window.WindowSystem","set_position",0x0cd0591e,"snow.platform.native.window.WindowSystem.set_position","snow/platform/native/window/WindowSystem.hx",76,0x4f642408)
		HX_STACK_THIS(this)
		HX_STACK_ARG(window,"window")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_LINE(76)
		::snow::platform::native::window::WindowSystem_obj::snow_window_set_position(window->handle,x,y);
	}
return null();
}


Void WindowSystem_obj::set_title( ::snow::window::Window window,::String title){
{
		HX_STACK_FRAME("snow.platform.native.window.WindowSystem","set_title",0xa088b203,"snow.platform.native.window.WindowSystem.set_title","snow/platform/native/window/WindowSystem.hx",80,0x4f642408)
		HX_STACK_THIS(this)
		HX_STACK_ARG(window,"window")
		HX_STACK_ARG(title,"title")
		HX_STACK_LINE(80)
		::snow::platform::native::window::WindowSystem_obj::snow_window_set_title(window->handle,title);
	}
return null();
}


Void WindowSystem_obj::set_max_size( ::snow::window::Window window,int w,int h){
{
		HX_STACK_FRAME("snow.platform.native.window.WindowSystem","set_max_size",0x582a57f1,"snow.platform.native.window.WindowSystem.set_max_size","snow/platform/native/window/WindowSystem.hx",84,0x4f642408)
		HX_STACK_THIS(this)
		HX_STACK_ARG(window,"window")
		HX_STACK_ARG(w,"w")
		HX_STACK_ARG(h,"h")
		HX_STACK_LINE(84)
		::snow::platform::native::window::WindowSystem_obj::snow_window_set_max_size(window->handle,w,h);
	}
return null();
}


Void WindowSystem_obj::set_min_size( ::snow::window::Window window,int w,int h){
{
		HX_STACK_FRAME("snow.platform.native.window.WindowSystem","set_min_size",0xa5447243,"snow.platform.native.window.WindowSystem.set_min_size","snow/platform/native/window/WindowSystem.hx",88,0x4f642408)
		HX_STACK_THIS(this)
		HX_STACK_ARG(window,"window")
		HX_STACK_ARG(w,"w")
		HX_STACK_ARG(h,"h")
		HX_STACK_LINE(88)
		::snow::platform::native::window::WindowSystem_obj::snow_window_set_min_size(window->handle,w,h);
	}
return null();
}


Void WindowSystem_obj::fullscreen( ::snow::window::Window window,bool fullscreen){
{
		HX_STACK_FRAME("snow.platform.native.window.WindowSystem","fullscreen",0xb94a6d33,"snow.platform.native.window.WindowSystem.fullscreen","snow/platform/native/window/WindowSystem.hx",92,0x4f642408)
		HX_STACK_THIS(this)
		HX_STACK_ARG(window,"window")
		HX_STACK_ARG(fullscreen,"fullscreen")
		HX_STACK_LINE(92)
		::snow::platform::native::window::WindowSystem_obj::snow_window_fullscreen(window->handle,fullscreen,(  ((window->config->__Field(HX_CSTRING("fullscreen_desktop"),true))) ? int((int)0) : int((int)1) ));
	}
return null();
}


Void WindowSystem_obj::bordered( ::snow::window::Window window,bool bordered){
{
		HX_STACK_FRAME("snow.platform.native.window.WindowSystem","bordered",0xce89bd43,"snow.platform.native.window.WindowSystem.bordered","snow/platform/native/window/WindowSystem.hx",96,0x4f642408)
		HX_STACK_THIS(this)
		HX_STACK_ARG(window,"window")
		HX_STACK_ARG(bordered,"bordered")
		HX_STACK_LINE(96)
		::snow::platform::native::window::WindowSystem_obj::snow_window_bordered(window->handle,bordered);
	}
return null();
}


Void WindowSystem_obj::grab( ::snow::window::Window window,bool grabbed){
{
		HX_STACK_FRAME("snow.platform.native.window.WindowSystem","grab",0x64e8f8c4,"snow.platform.native.window.WindowSystem.grab","snow/platform/native/window/WindowSystem.hx",100,0x4f642408)
		HX_STACK_THIS(this)
		HX_STACK_ARG(window,"window")
		HX_STACK_ARG(grabbed,"grabbed")
		HX_STACK_LINE(100)
		::snow::platform::native::window::WindowSystem_obj::snow_window_grab(window->handle,grabbed);
	}
return null();
}


Void WindowSystem_obj::set_cursor_position( ::snow::window::Window window,int x,int y){
{
		HX_STACK_FRAME("snow.platform.native.window.WindowSystem","set_cursor_position",0xfc45ee9d,"snow.platform.native.window.WindowSystem.set_cursor_position","snow/platform/native/window/WindowSystem.hx",104,0x4f642408)
		HX_STACK_THIS(this)
		HX_STACK_ARG(window,"window")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_LINE(104)
		::snow::platform::native::window::WindowSystem_obj::snow_window_set_cursor_position(window->handle,x,y);
	}
return null();
}


Void WindowSystem_obj::system_lock_cursor( bool enable){
{
		HX_STACK_FRAME("snow.platform.native.window.WindowSystem","system_lock_cursor",0xb9108252,"snow.platform.native.window.WindowSystem.system_lock_cursor","snow/platform/native/window/WindowSystem.hx",112,0x4f642408)
		HX_STACK_THIS(this)
		HX_STACK_ARG(enable,"enable")
		HX_STACK_LINE(112)
		::snow::platform::native::window::WindowSystem_obj::snow_system_lock_cursor(enable);
	}
return null();
}


Void WindowSystem_obj::system_enable_cursor( bool enable){
{
		HX_STACK_FRAME("snow.platform.native.window.WindowSystem","system_enable_cursor",0x50d3dcba,"snow.platform.native.window.WindowSystem.system_enable_cursor","snow/platform/native/window/WindowSystem.hx",117,0x4f642408)
		HX_STACK_THIS(this)
		HX_STACK_ARG(enable,"enable")
		HX_STACK_LINE(117)
		::snow::platform::native::window::WindowSystem_obj::snow_system_show_cursor(enable);
	}
return null();
}


int WindowSystem_obj::system_enable_vsync( bool enable){
	HX_STACK_FRAME("snow.platform.native.window.WindowSystem","system_enable_vsync",0xb9b8286d,"snow.platform.native.window.WindowSystem.system_enable_vsync","snow/platform/native/window/WindowSystem.hx",122,0x4f642408)
	HX_STACK_THIS(this)
	HX_STACK_ARG(enable,"enable")
	HX_STACK_LINE(122)
	return ::snow::platform::native::window::WindowSystem_obj::snow_system_enable_vsync(enable);
}


int WindowSystem_obj::display_count( ){
	HX_STACK_FRAME("snow.platform.native.window.WindowSystem","display_count",0x25dacbda,"snow.platform.native.window.WindowSystem.display_count","snow/platform/native/window/WindowSystem.hx",130,0x4f642408)
	HX_STACK_THIS(this)
	HX_STACK_LINE(130)
	return ::snow::platform::native::window::WindowSystem_obj::snow_desktop_get_display_count();
}


int WindowSystem_obj::display_mode_count( int display){
	HX_STACK_FRAME("snow.platform.native.window.WindowSystem","display_mode_count",0x25249cc8,"snow.platform.native.window.WindowSystem.display_mode_count","snow/platform/native/window/WindowSystem.hx",134,0x4f642408)
	HX_STACK_THIS(this)
	HX_STACK_ARG(display,"display")
	HX_STACK_LINE(134)
	return ::snow::platform::native::window::WindowSystem_obj::snow_desktop_get_display_mode_count(display);
}


Dynamic WindowSystem_obj::display_native_mode( int display){
	HX_STACK_FRAME("snow.platform.native.window.WindowSystem","display_native_mode",0xb902e396,"snow.platform.native.window.WindowSystem.display_native_mode","snow/platform/native/window/WindowSystem.hx",138,0x4f642408)
	HX_STACK_THIS(this)
	HX_STACK_ARG(display,"display")
	HX_STACK_LINE(138)
	return ::snow::platform::native::window::WindowSystem_obj::snow_desktop_get_display_native_mode(display);
}


Dynamic WindowSystem_obj::display_current_mode( int display){
	HX_STACK_FRAME("snow.platform.native.window.WindowSystem","display_current_mode",0x5012a4be,"snow.platform.native.window.WindowSystem.display_current_mode","snow/platform/native/window/WindowSystem.hx",142,0x4f642408)
	HX_STACK_THIS(this)
	HX_STACK_ARG(display,"display")
	HX_STACK_LINE(142)
	return ::snow::platform::native::window::WindowSystem_obj::snow_desktop_get_display_current_mode(display);
}


Dynamic WindowSystem_obj::display_mode( int display,int mode_index){
	HX_STACK_FRAME("snow.platform.native.window.WindowSystem","display_mode",0xec6036b8,"snow.platform.native.window.WindowSystem.display_mode","snow/platform/native/window/WindowSystem.hx",146,0x4f642408)
	HX_STACK_THIS(this)
	HX_STACK_ARG(display,"display")
	HX_STACK_ARG(mode_index,"mode_index")
	HX_STACK_LINE(146)
	return ::snow::platform::native::window::WindowSystem_obj::snow_desktop_get_display_mode(display,mode_index);
}


Dynamic WindowSystem_obj::display_bounds( int display){
	HX_STACK_FRAME("snow.platform.native.window.WindowSystem","display_bounds",0x933c290a,"snow.platform.native.window.WindowSystem.display_bounds","snow/platform/native/window/WindowSystem.hx",150,0x4f642408)
	HX_STACK_THIS(this)
	HX_STACK_ARG(display,"display")
	HX_STACK_LINE(150)
	return ::snow::platform::native::window::WindowSystem_obj::snow_desktop_get_display_bounds(display);
}


::String WindowSystem_obj::display_name( int display){
	HX_STACK_FRAME("snow.platform.native.window.WindowSystem","display_name",0xecfed5a0,"snow.platform.native.window.WindowSystem.display_name","snow/platform/native/window/WindowSystem.hx",154,0x4f642408)
	HX_STACK_THIS(this)
	HX_STACK_ARG(display,"display")
	HX_STACK_LINE(154)
	return ::snow::platform::native::window::WindowSystem_obj::snow_desktop_get_display_name(display);
}


Dynamic WindowSystem_obj::snow_window_create;

Dynamic WindowSystem_obj::snow_window_close;

Dynamic WindowSystem_obj::snow_window_show;

Dynamic WindowSystem_obj::snow_window_destroy_window;

Dynamic WindowSystem_obj::snow_window_update;

Dynamic WindowSystem_obj::snow_window_render;

Dynamic WindowSystem_obj::snow_window_swap;

Dynamic WindowSystem_obj::snow_window_simple_message;

Dynamic WindowSystem_obj::snow_window_set_size;

Dynamic WindowSystem_obj::snow_window_set_position;

Dynamic WindowSystem_obj::snow_window_set_title;

Dynamic WindowSystem_obj::snow_window_set_max_size;

Dynamic WindowSystem_obj::snow_window_set_min_size;

Dynamic WindowSystem_obj::snow_window_fullscreen;

Dynamic WindowSystem_obj::snow_window_bordered;

Dynamic WindowSystem_obj::snow_window_grab;

Dynamic WindowSystem_obj::snow_window_set_cursor_position;

Dynamic WindowSystem_obj::snow_system_show_cursor;

Dynamic WindowSystem_obj::snow_system_lock_cursor;

Dynamic WindowSystem_obj::snow_system_enable_vsync;

Dynamic WindowSystem_obj::snow_desktop_get_display_count;

Dynamic WindowSystem_obj::snow_desktop_get_display_mode_count;

Dynamic WindowSystem_obj::snow_desktop_get_display_native_mode;

Dynamic WindowSystem_obj::snow_desktop_get_display_current_mode;

Dynamic WindowSystem_obj::snow_desktop_get_display_mode;

Dynamic WindowSystem_obj::snow_desktop_get_display_bounds;

Dynamic WindowSystem_obj::snow_desktop_get_display_name;


WindowSystem_obj::WindowSystem_obj()
{
}

Dynamic WindowSystem_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		if (HX_FIELD_EQ(inName,"show") ) { return show_dyn(); }
		if (HX_FIELD_EQ(inName,"swap") ) { return swap_dyn(); }
		if (HX_FIELD_EQ(inName,"grab") ) { return grab_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"close") ) { return close_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"listen") ) { return listen_dyn(); }
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"render") ) { return render_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"process") ) { return process_dyn(); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"unlisten") ) { return unlisten_dyn(); }
		if (HX_FIELD_EQ(inName,"set_size") ) { return set_size_dyn(); }
		if (HX_FIELD_EQ(inName,"bordered") ) { return bordered_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"set_title") ) { return set_title_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"fullscreen") ) { return fullscreen_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"set_position") ) { return set_position_dyn(); }
		if (HX_FIELD_EQ(inName,"set_max_size") ) { return set_max_size_dyn(); }
		if (HX_FIELD_EQ(inName,"set_min_size") ) { return set_min_size_dyn(); }
		if (HX_FIELD_EQ(inName,"display_mode") ) { return display_mode_dyn(); }
		if (HX_FIELD_EQ(inName,"display_name") ) { return display_name_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"display_count") ) { return display_count_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"destroy_window") ) { return destroy_window_dyn(); }
		if (HX_FIELD_EQ(inName,"simple_message") ) { return simple_message_dyn(); }
		if (HX_FIELD_EQ(inName,"display_bounds") ) { return display_bounds_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"snow_window_show") ) { return snow_window_show; }
		if (HX_FIELD_EQ(inName,"snow_window_swap") ) { return snow_window_swap; }
		if (HX_FIELD_EQ(inName,"snow_window_grab") ) { return snow_window_grab; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"snow_window_close") ) { return snow_window_close; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"snow_window_create") ) { return snow_window_create; }
		if (HX_FIELD_EQ(inName,"snow_window_update") ) { return snow_window_update; }
		if (HX_FIELD_EQ(inName,"snow_window_render") ) { return snow_window_render; }
		if (HX_FIELD_EQ(inName,"system_lock_cursor") ) { return system_lock_cursor_dyn(); }
		if (HX_FIELD_EQ(inName,"display_mode_count") ) { return display_mode_count_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"set_cursor_position") ) { return set_cursor_position_dyn(); }
		if (HX_FIELD_EQ(inName,"system_enable_vsync") ) { return system_enable_vsync_dyn(); }
		if (HX_FIELD_EQ(inName,"display_native_mode") ) { return display_native_mode_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"snow_window_set_size") ) { return snow_window_set_size; }
		if (HX_FIELD_EQ(inName,"snow_window_bordered") ) { return snow_window_bordered; }
		if (HX_FIELD_EQ(inName,"system_enable_cursor") ) { return system_enable_cursor_dyn(); }
		if (HX_FIELD_EQ(inName,"display_current_mode") ) { return display_current_mode_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"snow_window_set_title") ) { return snow_window_set_title; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"snow_window_fullscreen") ) { return snow_window_fullscreen; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"snow_system_show_cursor") ) { return snow_system_show_cursor; }
		if (HX_FIELD_EQ(inName,"snow_system_lock_cursor") ) { return snow_system_lock_cursor; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"snow_window_set_position") ) { return snow_window_set_position; }
		if (HX_FIELD_EQ(inName,"snow_window_set_max_size") ) { return snow_window_set_max_size; }
		if (HX_FIELD_EQ(inName,"snow_window_set_min_size") ) { return snow_window_set_min_size; }
		if (HX_FIELD_EQ(inName,"snow_system_enable_vsync") ) { return snow_system_enable_vsync; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"snow_window_destroy_window") ) { return snow_window_destroy_window; }
		if (HX_FIELD_EQ(inName,"snow_window_simple_message") ) { return snow_window_simple_message; }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"snow_desktop_get_display_mode") ) { return snow_desktop_get_display_mode; }
		if (HX_FIELD_EQ(inName,"snow_desktop_get_display_name") ) { return snow_desktop_get_display_name; }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"snow_desktop_get_display_count") ) { return snow_desktop_get_display_count; }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"snow_window_set_cursor_position") ) { return snow_window_set_cursor_position; }
		if (HX_FIELD_EQ(inName,"snow_desktop_get_display_bounds") ) { return snow_desktop_get_display_bounds; }
		break;
	case 35:
		if (HX_FIELD_EQ(inName,"snow_desktop_get_display_mode_count") ) { return snow_desktop_get_display_mode_count; }
		break;
	case 36:
		if (HX_FIELD_EQ(inName,"snow_desktop_get_display_native_mode") ) { return snow_desktop_get_display_native_mode; }
		break;
	case 37:
		if (HX_FIELD_EQ(inName,"snow_desktop_get_display_current_mode") ) { return snow_desktop_get_display_current_mode; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic WindowSystem_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 16:
		if (HX_FIELD_EQ(inName,"snow_window_show") ) { snow_window_show=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"snow_window_swap") ) { snow_window_swap=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"snow_window_grab") ) { snow_window_grab=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"snow_window_close") ) { snow_window_close=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"snow_window_create") ) { snow_window_create=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"snow_window_update") ) { snow_window_update=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"snow_window_render") ) { snow_window_render=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"snow_window_set_size") ) { snow_window_set_size=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"snow_window_bordered") ) { snow_window_bordered=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"snow_window_set_title") ) { snow_window_set_title=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"snow_window_fullscreen") ) { snow_window_fullscreen=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"snow_system_show_cursor") ) { snow_system_show_cursor=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"snow_system_lock_cursor") ) { snow_system_lock_cursor=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"snow_window_set_position") ) { snow_window_set_position=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"snow_window_set_max_size") ) { snow_window_set_max_size=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"snow_window_set_min_size") ) { snow_window_set_min_size=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"snow_system_enable_vsync") ) { snow_system_enable_vsync=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"snow_window_destroy_window") ) { snow_window_destroy_window=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"snow_window_simple_message") ) { snow_window_simple_message=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"snow_desktop_get_display_mode") ) { snow_desktop_get_display_mode=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"snow_desktop_get_display_name") ) { snow_desktop_get_display_name=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"snow_desktop_get_display_count") ) { snow_desktop_get_display_count=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"snow_window_set_cursor_position") ) { snow_window_set_cursor_position=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"snow_desktop_get_display_bounds") ) { snow_desktop_get_display_bounds=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 35:
		if (HX_FIELD_EQ(inName,"snow_desktop_get_display_mode_count") ) { snow_desktop_get_display_mode_count=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 36:
		if (HX_FIELD_EQ(inName,"snow_desktop_get_display_native_mode") ) { snow_desktop_get_display_native_mode=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 37:
		if (HX_FIELD_EQ(inName,"snow_desktop_get_display_current_mode") ) { snow_desktop_get_display_current_mode=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void WindowSystem_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("snow_window_create"),
	HX_CSTRING("snow_window_close"),
	HX_CSTRING("snow_window_show"),
	HX_CSTRING("snow_window_destroy_window"),
	HX_CSTRING("snow_window_update"),
	HX_CSTRING("snow_window_render"),
	HX_CSTRING("snow_window_swap"),
	HX_CSTRING("snow_window_simple_message"),
	HX_CSTRING("snow_window_set_size"),
	HX_CSTRING("snow_window_set_position"),
	HX_CSTRING("snow_window_set_title"),
	HX_CSTRING("snow_window_set_max_size"),
	HX_CSTRING("snow_window_set_min_size"),
	HX_CSTRING("snow_window_fullscreen"),
	HX_CSTRING("snow_window_bordered"),
	HX_CSTRING("snow_window_grab"),
	HX_CSTRING("snow_window_set_cursor_position"),
	HX_CSTRING("snow_system_show_cursor"),
	HX_CSTRING("snow_system_lock_cursor"),
	HX_CSTRING("snow_system_enable_vsync"),
	HX_CSTRING("snow_desktop_get_display_count"),
	HX_CSTRING("snow_desktop_get_display_mode_count"),
	HX_CSTRING("snow_desktop_get_display_native_mode"),
	HX_CSTRING("snow_desktop_get_display_current_mode"),
	HX_CSTRING("snow_desktop_get_display_mode"),
	HX_CSTRING("snow_desktop_get_display_bounds"),
	HX_CSTRING("snow_desktop_get_display_name"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("init"),
	HX_CSTRING("process"),
	HX_CSTRING("destroy"),
	HX_CSTRING("listen"),
	HX_CSTRING("unlisten"),
	HX_CSTRING("create"),
	HX_CSTRING("close"),
	HX_CSTRING("show"),
	HX_CSTRING("destroy_window"),
	HX_CSTRING("update"),
	HX_CSTRING("render"),
	HX_CSTRING("swap"),
	HX_CSTRING("simple_message"),
	HX_CSTRING("set_size"),
	HX_CSTRING("set_position"),
	HX_CSTRING("set_title"),
	HX_CSTRING("set_max_size"),
	HX_CSTRING("set_min_size"),
	HX_CSTRING("fullscreen"),
	HX_CSTRING("bordered"),
	HX_CSTRING("grab"),
	HX_CSTRING("set_cursor_position"),
	HX_CSTRING("system_lock_cursor"),
	HX_CSTRING("system_enable_cursor"),
	HX_CSTRING("system_enable_vsync"),
	HX_CSTRING("display_count"),
	HX_CSTRING("display_mode_count"),
	HX_CSTRING("display_native_mode"),
	HX_CSTRING("display_current_mode"),
	HX_CSTRING("display_mode"),
	HX_CSTRING("display_bounds"),
	HX_CSTRING("display_name"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(WindowSystem_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(WindowSystem_obj::snow_window_create,"snow_window_create");
	HX_MARK_MEMBER_NAME(WindowSystem_obj::snow_window_close,"snow_window_close");
	HX_MARK_MEMBER_NAME(WindowSystem_obj::snow_window_show,"snow_window_show");
	HX_MARK_MEMBER_NAME(WindowSystem_obj::snow_window_destroy_window,"snow_window_destroy_window");
	HX_MARK_MEMBER_NAME(WindowSystem_obj::snow_window_update,"snow_window_update");
	HX_MARK_MEMBER_NAME(WindowSystem_obj::snow_window_render,"snow_window_render");
	HX_MARK_MEMBER_NAME(WindowSystem_obj::snow_window_swap,"snow_window_swap");
	HX_MARK_MEMBER_NAME(WindowSystem_obj::snow_window_simple_message,"snow_window_simple_message");
	HX_MARK_MEMBER_NAME(WindowSystem_obj::snow_window_set_size,"snow_window_set_size");
	HX_MARK_MEMBER_NAME(WindowSystem_obj::snow_window_set_position,"snow_window_set_position");
	HX_MARK_MEMBER_NAME(WindowSystem_obj::snow_window_set_title,"snow_window_set_title");
	HX_MARK_MEMBER_NAME(WindowSystem_obj::snow_window_set_max_size,"snow_window_set_max_size");
	HX_MARK_MEMBER_NAME(WindowSystem_obj::snow_window_set_min_size,"snow_window_set_min_size");
	HX_MARK_MEMBER_NAME(WindowSystem_obj::snow_window_fullscreen,"snow_window_fullscreen");
	HX_MARK_MEMBER_NAME(WindowSystem_obj::snow_window_bordered,"snow_window_bordered");
	HX_MARK_MEMBER_NAME(WindowSystem_obj::snow_window_grab,"snow_window_grab");
	HX_MARK_MEMBER_NAME(WindowSystem_obj::snow_window_set_cursor_position,"snow_window_set_cursor_position");
	HX_MARK_MEMBER_NAME(WindowSystem_obj::snow_system_show_cursor,"snow_system_show_cursor");
	HX_MARK_MEMBER_NAME(WindowSystem_obj::snow_system_lock_cursor,"snow_system_lock_cursor");
	HX_MARK_MEMBER_NAME(WindowSystem_obj::snow_system_enable_vsync,"snow_system_enable_vsync");
	HX_MARK_MEMBER_NAME(WindowSystem_obj::snow_desktop_get_display_count,"snow_desktop_get_display_count");
	HX_MARK_MEMBER_NAME(WindowSystem_obj::snow_desktop_get_display_mode_count,"snow_desktop_get_display_mode_count");
	HX_MARK_MEMBER_NAME(WindowSystem_obj::snow_desktop_get_display_native_mode,"snow_desktop_get_display_native_mode");
	HX_MARK_MEMBER_NAME(WindowSystem_obj::snow_desktop_get_display_current_mode,"snow_desktop_get_display_current_mode");
	HX_MARK_MEMBER_NAME(WindowSystem_obj::snow_desktop_get_display_mode,"snow_desktop_get_display_mode");
	HX_MARK_MEMBER_NAME(WindowSystem_obj::snow_desktop_get_display_bounds,"snow_desktop_get_display_bounds");
	HX_MARK_MEMBER_NAME(WindowSystem_obj::snow_desktop_get_display_name,"snow_desktop_get_display_name");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(WindowSystem_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(WindowSystem_obj::snow_window_create,"snow_window_create");
	HX_VISIT_MEMBER_NAME(WindowSystem_obj::snow_window_close,"snow_window_close");
	HX_VISIT_MEMBER_NAME(WindowSystem_obj::snow_window_show,"snow_window_show");
	HX_VISIT_MEMBER_NAME(WindowSystem_obj::snow_window_destroy_window,"snow_window_destroy_window");
	HX_VISIT_MEMBER_NAME(WindowSystem_obj::snow_window_update,"snow_window_update");
	HX_VISIT_MEMBER_NAME(WindowSystem_obj::snow_window_render,"snow_window_render");
	HX_VISIT_MEMBER_NAME(WindowSystem_obj::snow_window_swap,"snow_window_swap");
	HX_VISIT_MEMBER_NAME(WindowSystem_obj::snow_window_simple_message,"snow_window_simple_message");
	HX_VISIT_MEMBER_NAME(WindowSystem_obj::snow_window_set_size,"snow_window_set_size");
	HX_VISIT_MEMBER_NAME(WindowSystem_obj::snow_window_set_position,"snow_window_set_position");
	HX_VISIT_MEMBER_NAME(WindowSystem_obj::snow_window_set_title,"snow_window_set_title");
	HX_VISIT_MEMBER_NAME(WindowSystem_obj::snow_window_set_max_size,"snow_window_set_max_size");
	HX_VISIT_MEMBER_NAME(WindowSystem_obj::snow_window_set_min_size,"snow_window_set_min_size");
	HX_VISIT_MEMBER_NAME(WindowSystem_obj::snow_window_fullscreen,"snow_window_fullscreen");
	HX_VISIT_MEMBER_NAME(WindowSystem_obj::snow_window_bordered,"snow_window_bordered");
	HX_VISIT_MEMBER_NAME(WindowSystem_obj::snow_window_grab,"snow_window_grab");
	HX_VISIT_MEMBER_NAME(WindowSystem_obj::snow_window_set_cursor_position,"snow_window_set_cursor_position");
	HX_VISIT_MEMBER_NAME(WindowSystem_obj::snow_system_show_cursor,"snow_system_show_cursor");
	HX_VISIT_MEMBER_NAME(WindowSystem_obj::snow_system_lock_cursor,"snow_system_lock_cursor");
	HX_VISIT_MEMBER_NAME(WindowSystem_obj::snow_system_enable_vsync,"snow_system_enable_vsync");
	HX_VISIT_MEMBER_NAME(WindowSystem_obj::snow_desktop_get_display_count,"snow_desktop_get_display_count");
	HX_VISIT_MEMBER_NAME(WindowSystem_obj::snow_desktop_get_display_mode_count,"snow_desktop_get_display_mode_count");
	HX_VISIT_MEMBER_NAME(WindowSystem_obj::snow_desktop_get_display_native_mode,"snow_desktop_get_display_native_mode");
	HX_VISIT_MEMBER_NAME(WindowSystem_obj::snow_desktop_get_display_current_mode,"snow_desktop_get_display_current_mode");
	HX_VISIT_MEMBER_NAME(WindowSystem_obj::snow_desktop_get_display_mode,"snow_desktop_get_display_mode");
	HX_VISIT_MEMBER_NAME(WindowSystem_obj::snow_desktop_get_display_bounds,"snow_desktop_get_display_bounds");
	HX_VISIT_MEMBER_NAME(WindowSystem_obj::snow_desktop_get_display_name,"snow_desktop_get_display_name");
};

#endif

Class WindowSystem_obj::__mClass;

void WindowSystem_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("snow.platform.native.window.WindowSystem"), hx::TCanCast< WindowSystem_obj> ,sStaticFields,sMemberFields,
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

void WindowSystem_obj::__boot()
{
	snow_window_create= ::snow::Snow_obj::load(HX_CSTRING("snow"),HX_CSTRING("snow_window_create"),(int)3);
	snow_window_close= ::snow::Snow_obj::load(HX_CSTRING("snow"),HX_CSTRING("snow_window_close"),(int)1);
	snow_window_show= ::snow::Snow_obj::load(HX_CSTRING("snow"),HX_CSTRING("snow_window_show"),(int)1);
	snow_window_destroy_window= ::snow::Snow_obj::load(HX_CSTRING("snow"),HX_CSTRING("snow_window_destroy_window"),(int)1);
	snow_window_update= ::snow::Snow_obj::load(HX_CSTRING("snow"),HX_CSTRING("snow_window_update"),(int)1);
	snow_window_render= ::snow::Snow_obj::load(HX_CSTRING("snow"),HX_CSTRING("snow_window_render"),(int)1);
	snow_window_swap= ::snow::Snow_obj::load(HX_CSTRING("snow"),HX_CSTRING("snow_window_swap"),(int)1);
	snow_window_simple_message= ::snow::Snow_obj::load(HX_CSTRING("snow"),HX_CSTRING("snow_window_simple_message"),(int)3);
	snow_window_set_size= ::snow::Snow_obj::load(HX_CSTRING("snow"),HX_CSTRING("snow_window_set_size"),(int)3);
	snow_window_set_position= ::snow::Snow_obj::load(HX_CSTRING("snow"),HX_CSTRING("snow_window_set_position"),(int)3);
	snow_window_set_title= ::snow::Snow_obj::load(HX_CSTRING("snow"),HX_CSTRING("snow_window_set_title"),(int)2);
	snow_window_set_max_size= ::snow::Snow_obj::load(HX_CSTRING("snow"),HX_CSTRING("snow_window_set_max_size"),(int)3);
	snow_window_set_min_size= ::snow::Snow_obj::load(HX_CSTRING("snow"),HX_CSTRING("snow_window_set_min_size"),(int)3);
	snow_window_fullscreen= ::snow::Snow_obj::load(HX_CSTRING("snow"),HX_CSTRING("snow_window_fullscreen"),(int)3);
	snow_window_bordered= ::snow::Snow_obj::load(HX_CSTRING("snow"),HX_CSTRING("snow_window_bordered"),(int)2);
	snow_window_grab= ::snow::Snow_obj::load(HX_CSTRING("snow"),HX_CSTRING("snow_window_grab"),(int)2);
	snow_window_set_cursor_position= ::snow::Snow_obj::load(HX_CSTRING("snow"),HX_CSTRING("snow_window_set_cursor_position"),(int)3);
	snow_system_show_cursor= ::snow::Snow_obj::load(HX_CSTRING("snow"),HX_CSTRING("snow_system_show_cursor"),(int)1);
	snow_system_lock_cursor= ::snow::Snow_obj::load(HX_CSTRING("snow"),HX_CSTRING("snow_system_lock_cursor"),(int)1);
	snow_system_enable_vsync= ::snow::Snow_obj::load(HX_CSTRING("snow"),HX_CSTRING("snow_system_enable_vsync"),(int)1);
	snow_desktop_get_display_count= ::snow::Snow_obj::load(HX_CSTRING("snow"),HX_CSTRING("snow_desktop_get_display_count"),(int)0);
	snow_desktop_get_display_mode_count= ::snow::Snow_obj::load(HX_CSTRING("snow"),HX_CSTRING("snow_desktop_get_display_mode_count"),(int)1);
	snow_desktop_get_display_native_mode= ::snow::Snow_obj::load(HX_CSTRING("snow"),HX_CSTRING("snow_desktop_get_display_native_mode"),(int)1);
	snow_desktop_get_display_current_mode= ::snow::Snow_obj::load(HX_CSTRING("snow"),HX_CSTRING("snow_desktop_get_display_current_mode"),(int)1);
	snow_desktop_get_display_mode= ::snow::Snow_obj::load(HX_CSTRING("snow"),HX_CSTRING("snow_desktop_get_display_mode"),(int)2);
	snow_desktop_get_display_bounds= ::snow::Snow_obj::load(HX_CSTRING("snow"),HX_CSTRING("snow_desktop_get_display_bounds"),(int)1);
	snow_desktop_get_display_name= ::snow::Snow_obj::load(HX_CSTRING("snow"),HX_CSTRING("snow_desktop_get_display_name"),(int)1);
}

} // end namespace snow
} // end namespace platform
} // end namespace native
} // end namespace window
