#include <hxcpp.h>

#ifndef INCLUDED_snow_Snow
#include <snow/Snow.h>
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
namespace window{

Void WindowSystemBinding_obj::__construct()
{
	return null();
}

//WindowSystemBinding_obj::~WindowSystemBinding_obj() { }

Dynamic WindowSystemBinding_obj::__CreateEmpty() { return  new WindowSystemBinding_obj; }
hx::ObjectPtr< WindowSystemBinding_obj > WindowSystemBinding_obj::__new()
{  hx::ObjectPtr< WindowSystemBinding_obj > result = new WindowSystemBinding_obj();
	result->__construct();
	return result;}

Dynamic WindowSystemBinding_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< WindowSystemBinding_obj > result = new WindowSystemBinding_obj();
	result->__construct();
	return result;}

hx::Object *WindowSystemBinding_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::snow::utils::AbstractClass_obj)) return operator ::snow::utils::AbstractClass_obj *();
	return super::__ToInterface(inType);
}

Void WindowSystemBinding_obj::init( ){
{
		HX_STACK_FRAME("snow.window.WindowSystemBinding","init",0xd8ec80eb,"snow.window.WindowSystemBinding.init","snow/utils/AbstractClass.hx",140,0x08288ed2)
		HX_STACK_THIS(this)
		HX_STACK_LINE(140)
		HX_STACK_DO_THROW(HX_CSTRING("abstract method, must override"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(WindowSystemBinding_obj,init,(void))

Void WindowSystemBinding_obj::process( ){
{
		HX_STACK_FRAME("snow.window.WindowSystemBinding","process",0xdf343774,"snow.window.WindowSystemBinding.process","snow/utils/AbstractClass.hx",140,0x08288ed2)
		HX_STACK_THIS(this)
		HX_STACK_LINE(140)
		HX_STACK_DO_THROW(HX_CSTRING("abstract method, must override"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(WindowSystemBinding_obj,process,(void))

Void WindowSystemBinding_obj::destroy( ){
{
		HX_STACK_FRAME("snow.window.WindowSystemBinding","destroy",0x126fc1ff,"snow.window.WindowSystemBinding.destroy","snow/utils/AbstractClass.hx",140,0x08288ed2)
		HX_STACK_THIS(this)
		HX_STACK_LINE(140)
		HX_STACK_DO_THROW(HX_CSTRING("abstract method, must override"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(WindowSystemBinding_obj,destroy,(void))

Void WindowSystemBinding_obj::listen( ::snow::window::Window window){
{
		HX_STACK_FRAME("snow.window.WindowSystemBinding","listen",0xa66c7ae2,"snow.window.WindowSystemBinding.listen","snow/utils/AbstractClass.hx",140,0x08288ed2)
		HX_STACK_THIS(this)
		HX_STACK_ARG(window,"window")
		HX_STACK_LINE(140)
		HX_STACK_DO_THROW(HX_CSTRING("abstract method, must override"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(WindowSystemBinding_obj,listen,(void))

Void WindowSystemBinding_obj::unlisten( ::snow::window::Window window){
{
		HX_STACK_FRAME("snow.window.WindowSystemBinding","unlisten",0x30b9c6bb,"snow.window.WindowSystemBinding.unlisten","snow/utils/AbstractClass.hx",140,0x08288ed2)
		HX_STACK_THIS(this)
		HX_STACK_ARG(window,"window")
		HX_STACK_LINE(140)
		HX_STACK_DO_THROW(HX_CSTRING("abstract method, must override"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(WindowSystemBinding_obj,unlisten,(void))

Void WindowSystemBinding_obj::create( Dynamic render_config,Dynamic config,Dynamic on_created){
{
		HX_STACK_FRAME("snow.window.WindowSystemBinding","create",0x32821997,"snow.window.WindowSystemBinding.create","snow/utils/AbstractClass.hx",140,0x08288ed2)
		HX_STACK_THIS(this)
		HX_STACK_ARG(render_config,"render_config")
		HX_STACK_ARG(config,"config")
		HX_STACK_ARG(on_created,"on_created")
		HX_STACK_LINE(140)
		HX_STACK_DO_THROW(HX_CSTRING("abstract method, must override"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(WindowSystemBinding_obj,create,(void))

Void WindowSystemBinding_obj::close( ::snow::window::Window window){
{
		HX_STACK_FRAME("snow.window.WindowSystemBinding","close",0x804ef17d,"snow.window.WindowSystemBinding.close","snow/utils/AbstractClass.hx",140,0x08288ed2)
		HX_STACK_THIS(this)
		HX_STACK_ARG(window,"window")
		HX_STACK_LINE(140)
		HX_STACK_DO_THROW(HX_CSTRING("abstract method, must override"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(WindowSystemBinding_obj,close,(void))

Void WindowSystemBinding_obj::show( ::snow::window::Window window){
{
		HX_STACK_FRAME("snow.window.WindowSystemBinding","show",0xdf841ad8,"snow.window.WindowSystemBinding.show","snow/utils/AbstractClass.hx",140,0x08288ed2)
		HX_STACK_THIS(this)
		HX_STACK_ARG(window,"window")
		HX_STACK_LINE(140)
		HX_STACK_DO_THROW(HX_CSTRING("abstract method, must override"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(WindowSystemBinding_obj,show,(void))

Void WindowSystemBinding_obj::destroy_window( ::snow::window::Window window){
{
		HX_STACK_FRAME("snow.window.WindowSystemBinding","destroy_window",0x6bbdb170,"snow.window.WindowSystemBinding.destroy_window","snow/utils/AbstractClass.hx",140,0x08288ed2)
		HX_STACK_THIS(this)
		HX_STACK_ARG(window,"window")
		HX_STACK_LINE(140)
		HX_STACK_DO_THROW(HX_CSTRING("abstract method, must override"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(WindowSystemBinding_obj,destroy_window,(void))

Void WindowSystemBinding_obj::update( ::snow::window::Window window){
{
		HX_STACK_FRAME("snow.window.WindowSystemBinding","update",0x3d7838a4,"snow.window.WindowSystemBinding.update","snow/utils/AbstractClass.hx",140,0x08288ed2)
		HX_STACK_THIS(this)
		HX_STACK_ARG(window,"window")
		HX_STACK_LINE(140)
		HX_STACK_DO_THROW(HX_CSTRING("abstract method, must override"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(WindowSystemBinding_obj,update,(void))

Void WindowSystemBinding_obj::render( ::snow::window::Window window){
{
		HX_STACK_FRAME("snow.window.WindowSystemBinding","render",0xbb9c1df1,"snow.window.WindowSystemBinding.render","snow/utils/AbstractClass.hx",140,0x08288ed2)
		HX_STACK_THIS(this)
		HX_STACK_ARG(window,"window")
		HX_STACK_LINE(140)
		HX_STACK_DO_THROW(HX_CSTRING("abstract method, must override"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(WindowSystemBinding_obj,render,(void))

Void WindowSystemBinding_obj::swap( ::snow::window::Window window){
{
		HX_STACK_FRAME("snow.window.WindowSystemBinding","swap",0xdf8f706e,"snow.window.WindowSystemBinding.swap","snow/utils/AbstractClass.hx",140,0x08288ed2)
		HX_STACK_THIS(this)
		HX_STACK_ARG(window,"window")
		HX_STACK_LINE(140)
		HX_STACK_DO_THROW(HX_CSTRING("abstract method, must override"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(WindowSystemBinding_obj,swap,(void))

Void WindowSystemBinding_obj::simple_message( ::snow::window::Window window,::String message,::String __o_title){
::String title = __o_title.Default(HX_CSTRING(""));
	HX_STACK_FRAME("snow.window.WindowSystemBinding","simple_message",0xa7b25b15,"snow.window.WindowSystemBinding.simple_message","snow/utils/AbstractClass.hx",140,0x08288ed2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(window,"window")
	HX_STACK_ARG(message,"message")
	HX_STACK_ARG(title,"title")
{
		HX_STACK_LINE(140)
		HX_STACK_DO_THROW(HX_CSTRING("abstract method, must override"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(WindowSystemBinding_obj,simple_message,(void))

Void WindowSystemBinding_obj::set_size( ::snow::window::Window window,int w,int h){
{
		HX_STACK_FRAME("snow.window.WindowSystemBinding","set_size",0xb8e48519,"snow.window.WindowSystemBinding.set_size","snow/utils/AbstractClass.hx",140,0x08288ed2)
		HX_STACK_THIS(this)
		HX_STACK_ARG(window,"window")
		HX_STACK_ARG(w,"w")
		HX_STACK_ARG(h,"h")
		HX_STACK_LINE(140)
		HX_STACK_DO_THROW(HX_CSTRING("abstract method, must override"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(WindowSystemBinding_obj,set_size,(void))

Void WindowSystemBinding_obj::set_position( ::snow::window::Window window,int x,int y){
{
		HX_STACK_FRAME("snow.window.WindowSystemBinding","set_position",0xc7109101,"snow.window.WindowSystemBinding.set_position","snow/utils/AbstractClass.hx",140,0x08288ed2)
		HX_STACK_THIS(this)
		HX_STACK_ARG(window,"window")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_LINE(140)
		HX_STACK_DO_THROW(HX_CSTRING("abstract method, must override"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(WindowSystemBinding_obj,set_position,(void))

Void WindowSystemBinding_obj::set_title( ::snow::window::Window window,::String title){
{
		HX_STACK_FRAME("snow.window.WindowSystemBinding","set_title",0xa271fe40,"snow.window.WindowSystemBinding.set_title","snow/utils/AbstractClass.hx",140,0x08288ed2)
		HX_STACK_THIS(this)
		HX_STACK_ARG(window,"window")
		HX_STACK_ARG(title,"title")
		HX_STACK_LINE(140)
		HX_STACK_DO_THROW(HX_CSTRING("abstract method, must override"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(WindowSystemBinding_obj,set_title,(void))

Void WindowSystemBinding_obj::set_max_size( ::snow::window::Window window,int w,int h){
{
		HX_STACK_FRAME("snow.window.WindowSystemBinding","set_max_size",0x126a8fd4,"snow.window.WindowSystemBinding.set_max_size","snow/utils/AbstractClass.hx",140,0x08288ed2)
		HX_STACK_THIS(this)
		HX_STACK_ARG(window,"window")
		HX_STACK_ARG(w,"w")
		HX_STACK_ARG(h,"h")
		HX_STACK_LINE(140)
		HX_STACK_DO_THROW(HX_CSTRING("abstract method, must override"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(WindowSystemBinding_obj,set_max_size,(void))

Void WindowSystemBinding_obj::set_min_size( ::snow::window::Window window,int w,int h){
{
		HX_STACK_FRAME("snow.window.WindowSystemBinding","set_min_size",0x5f84aa26,"snow.window.WindowSystemBinding.set_min_size","snow/utils/AbstractClass.hx",140,0x08288ed2)
		HX_STACK_THIS(this)
		HX_STACK_ARG(window,"window")
		HX_STACK_ARG(w,"w")
		HX_STACK_ARG(h,"h")
		HX_STACK_LINE(140)
		HX_STACK_DO_THROW(HX_CSTRING("abstract method, must override"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(WindowSystemBinding_obj,set_min_size,(void))

Void WindowSystemBinding_obj::fullscreen( ::snow::window::Window window,bool fullscreen){
{
		HX_STACK_FRAME("snow.window.WindowSystemBinding","fullscreen",0x6383d656,"snow.window.WindowSystemBinding.fullscreen","snow/utils/AbstractClass.hx",140,0x08288ed2)
		HX_STACK_THIS(this)
		HX_STACK_ARG(window,"window")
		HX_STACK_ARG(fullscreen,"fullscreen")
		HX_STACK_LINE(140)
		HX_STACK_DO_THROW(HX_CSTRING("abstract method, must override"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(WindowSystemBinding_obj,fullscreen,(void))

Void WindowSystemBinding_obj::bordered( ::snow::window::Window window,bool bordered){
{
		HX_STACK_FRAME("snow.window.WindowSystemBinding","bordered",0x977187a6,"snow.window.WindowSystemBinding.bordered","snow/utils/AbstractClass.hx",140,0x08288ed2)
		HX_STACK_THIS(this)
		HX_STACK_ARG(window,"window")
		HX_STACK_ARG(bordered,"bordered")
		HX_STACK_LINE(140)
		HX_STACK_DO_THROW(HX_CSTRING("abstract method, must override"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(WindowSystemBinding_obj,bordered,(void))

Void WindowSystemBinding_obj::grab( ::snow::window::Window window,bool grabbed){
{
		HX_STACK_FRAME("snow.window.WindowSystemBinding","grab",0xd79d15a7,"snow.window.WindowSystemBinding.grab","snow/utils/AbstractClass.hx",140,0x08288ed2)
		HX_STACK_THIS(this)
		HX_STACK_ARG(window,"window")
		HX_STACK_ARG(grabbed,"grabbed")
		HX_STACK_LINE(140)
		HX_STACK_DO_THROW(HX_CSTRING("abstract method, must override"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(WindowSystemBinding_obj,grab,(void))

Void WindowSystemBinding_obj::set_cursor_position( ::snow::window::Window window,int x,int y){
{
		HX_STACK_FRAME("snow.window.WindowSystemBinding","set_cursor_position",0x9845c91a,"snow.window.WindowSystemBinding.set_cursor_position","snow/utils/AbstractClass.hx",140,0x08288ed2)
		HX_STACK_THIS(this)
		HX_STACK_ARG(window,"window")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_LINE(140)
		HX_STACK_DO_THROW(HX_CSTRING("abstract method, must override"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(WindowSystemBinding_obj,set_cursor_position,(void))

Void WindowSystemBinding_obj::system_enable_cursor( bool enable){
{
		HX_STACK_FRAME("snow.window.WindowSystemBinding","system_enable_cursor",0x34b32f9d,"snow.window.WindowSystemBinding.system_enable_cursor","snow/utils/AbstractClass.hx",140,0x08288ed2)
		HX_STACK_THIS(this)
		HX_STACK_ARG(enable,"enable")
		HX_STACK_LINE(140)
		HX_STACK_DO_THROW(HX_CSTRING("abstract method, must override"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(WindowSystemBinding_obj,system_enable_cursor,(void))

Void WindowSystemBinding_obj::system_lock_cursor( bool enable){
{
		HX_STACK_FRAME("snow.window.WindowSystemBinding","system_lock_cursor",0x9f5c4675,"snow.window.WindowSystemBinding.system_lock_cursor","snow/utils/AbstractClass.hx",140,0x08288ed2)
		HX_STACK_THIS(this)
		HX_STACK_ARG(enable,"enable")
		HX_STACK_LINE(140)
		HX_STACK_DO_THROW(HX_CSTRING("abstract method, must override"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(WindowSystemBinding_obj,system_lock_cursor,(void))

int WindowSystemBinding_obj::system_enable_vsync( bool enable){
	HX_STACK_FRAME("snow.window.WindowSystemBinding","system_enable_vsync",0x55b802ea,"snow.window.WindowSystemBinding.system_enable_vsync","snow/utils/AbstractClass.hx",142,0x08288ed2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(enable,"enable")
	HX_STACK_LINE(142)
	HX_STACK_DO_THROW(HX_CSTRING("abstract method, must override"));
	HX_STACK_LINE(142)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC1(WindowSystemBinding_obj,system_enable_vsync,return )

int WindowSystemBinding_obj::display_count( ){
	HX_STACK_FRAME("snow.window.WindowSystemBinding","display_count",0x63cb7a97,"snow.window.WindowSystemBinding.display_count","snow/utils/AbstractClass.hx",142,0x08288ed2)
	HX_STACK_THIS(this)
	HX_STACK_LINE(142)
	HX_STACK_DO_THROW(HX_CSTRING("abstract method, must override"));
	HX_STACK_LINE(142)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC0(WindowSystemBinding_obj,display_count,return )

int WindowSystemBinding_obj::display_mode_count( int display){
	HX_STACK_FRAME("snow.window.WindowSystemBinding","display_mode_count",0x0b7060eb,"snow.window.WindowSystemBinding.display_mode_count","snow/utils/AbstractClass.hx",142,0x08288ed2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(display,"display")
	HX_STACK_LINE(142)
	HX_STACK_DO_THROW(HX_CSTRING("abstract method, must override"));
	HX_STACK_LINE(142)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC1(WindowSystemBinding_obj,display_mode_count,return )

Dynamic WindowSystemBinding_obj::display_native_mode( int display){
	HX_STACK_FRAME("snow.window.WindowSystemBinding","display_native_mode",0x5502be13,"snow.window.WindowSystemBinding.display_native_mode","snow/utils/AbstractClass.hx",142,0x08288ed2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(display,"display")
	HX_STACK_LINE(142)
	HX_STACK_DO_THROW(HX_CSTRING("abstract method, must override"));
	HX_STACK_LINE(142)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(WindowSystemBinding_obj,display_native_mode,return )

Dynamic WindowSystemBinding_obj::display_current_mode( int display){
	HX_STACK_FRAME("snow.window.WindowSystemBinding","display_current_mode",0x33f1f7a1,"snow.window.WindowSystemBinding.display_current_mode","snow/utils/AbstractClass.hx",142,0x08288ed2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(display,"display")
	HX_STACK_LINE(142)
	HX_STACK_DO_THROW(HX_CSTRING("abstract method, must override"));
	HX_STACK_LINE(142)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(WindowSystemBinding_obj,display_current_mode,return )

Dynamic WindowSystemBinding_obj::display_mode( int display,int mode_index){
	HX_STACK_FRAME("snow.window.WindowSystemBinding","display_mode",0xa6a06e9b,"snow.window.WindowSystemBinding.display_mode","snow/utils/AbstractClass.hx",142,0x08288ed2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(display,"display")
	HX_STACK_ARG(mode_index,"mode_index")
	HX_STACK_LINE(142)
	HX_STACK_DO_THROW(HX_CSTRING("abstract method, must override"));
	HX_STACK_LINE(142)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC2(WindowSystemBinding_obj,display_mode,return )

Dynamic WindowSystemBinding_obj::display_bounds( int display){
	HX_STACK_FRAME("snow.window.WindowSystemBinding","display_bounds",0x87e45fad,"snow.window.WindowSystemBinding.display_bounds","snow/utils/AbstractClass.hx",142,0x08288ed2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(display,"display")
	HX_STACK_LINE(142)
	HX_STACK_DO_THROW(HX_CSTRING("abstract method, must override"));
	HX_STACK_LINE(142)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(WindowSystemBinding_obj,display_bounds,return )

::String WindowSystemBinding_obj::display_name( int display){
	HX_STACK_FRAME("snow.window.WindowSystemBinding","display_name",0xa73f0d83,"snow.window.WindowSystemBinding.display_name","snow/utils/AbstractClass.hx",142,0x08288ed2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(display,"display")
	HX_STACK_LINE(142)
	HX_STACK_DO_THROW(HX_CSTRING("abstract method, must override"));
	HX_STACK_LINE(142)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(WindowSystemBinding_obj,display_name,return )


WindowSystemBinding_obj::WindowSystemBinding_obj()
{
}

void WindowSystemBinding_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(WindowSystemBinding);
	HX_MARK_MEMBER_NAME(manager,"manager");
	HX_MARK_MEMBER_NAME(lib,"lib");
	HX_MARK_END_CLASS();
}

void WindowSystemBinding_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(manager,"manager");
	HX_VISIT_MEMBER_NAME(lib,"lib");
}

Dynamic WindowSystemBinding_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"lib") ) { return lib; }
		break;
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
		if (HX_FIELD_EQ(inName,"manager") ) { return manager; }
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
	case 18:
		if (HX_FIELD_EQ(inName,"system_lock_cursor") ) { return system_lock_cursor_dyn(); }
		if (HX_FIELD_EQ(inName,"display_mode_count") ) { return display_mode_count_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"set_cursor_position") ) { return set_cursor_position_dyn(); }
		if (HX_FIELD_EQ(inName,"system_enable_vsync") ) { return system_enable_vsync_dyn(); }
		if (HX_FIELD_EQ(inName,"display_native_mode") ) { return display_native_mode_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"system_enable_cursor") ) { return system_enable_cursor_dyn(); }
		if (HX_FIELD_EQ(inName,"display_current_mode") ) { return display_current_mode_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic WindowSystemBinding_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"lib") ) { lib=inValue.Cast< ::snow::Snow >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"manager") ) { manager=inValue.Cast< ::snow::window::Windowing >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void WindowSystemBinding_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("manager"));
	outFields->push(HX_CSTRING("lib"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::snow::window::Windowing*/ ,(int)offsetof(WindowSystemBinding_obj,manager),HX_CSTRING("manager")},
	{hx::fsObject /*::snow::Snow*/ ,(int)offsetof(WindowSystemBinding_obj,lib),HX_CSTRING("lib")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("manager"),
	HX_CSTRING("lib"),
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
	HX_CSTRING("system_enable_cursor"),
	HX_CSTRING("system_lock_cursor"),
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
	HX_MARK_MEMBER_NAME(WindowSystemBinding_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(WindowSystemBinding_obj::__mClass,"__mClass");
};

#endif

Class WindowSystemBinding_obj::__mClass;

void WindowSystemBinding_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("snow.window.WindowSystemBinding"), hx::TCanCast< WindowSystemBinding_obj> ,sStaticFields,sMemberFields,
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

void WindowSystemBinding_obj::__boot()
{
}

} // end namespace snow
} // end namespace window
