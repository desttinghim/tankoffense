#include <hxcpp.h>

#ifndef INCLUDED_snow_Snow
#include <snow/Snow.h>
#endif
#ifndef INCLUDED_snow_input_Input
#include <snow/input/Input.h>
#endif
#ifndef INCLUDED_snow_input_InputSystemBinding
#include <snow/input/InputSystemBinding.h>
#endif
#ifndef INCLUDED_snow_platform_native_input_InputSystem
#include <snow/platform/native/input/InputSystem.h>
#endif
#ifndef INCLUDED_snow_utils_AbstractClass
#include <snow/utils/AbstractClass.h>
#endif
#ifndef INCLUDED_snow_window_Window
#include <snow/window/Window.h>
#endif
namespace snow{
namespace platform{
namespace native{
namespace input{

Void InputSystem_obj::__construct(::snow::input::Input _manager,::snow::Snow _lib)
{
HX_STACK_FRAME("snow.platform.native.input.InputSystem","new",0xb7b447e0,"snow.platform.native.input.InputSystem.new","snow/platform/native/input/InputSystem.hx",12,0xe8ed6df2)
HX_STACK_THIS(this)
HX_STACK_ARG(_manager,"_manager")
HX_STACK_ARG(_lib,"_lib")
{
	HX_STACK_LINE(14)
	this->manager = _manager;
	HX_STACK_LINE(15)
	this->lib = _lib;
}
;
	return null();
}

//InputSystem_obj::~InputSystem_obj() { }

Dynamic InputSystem_obj::__CreateEmpty() { return  new InputSystem_obj; }
hx::ObjectPtr< InputSystem_obj > InputSystem_obj::__new(::snow::input::Input _manager,::snow::Snow _lib)
{  hx::ObjectPtr< InputSystem_obj > result = new InputSystem_obj();
	result->__construct(_manager,_lib);
	return result;}

Dynamic InputSystem_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< InputSystem_obj > result = new InputSystem_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

Void InputSystem_obj::init( ){
{
		HX_STACK_FRAME("snow.platform.native.input.InputSystem","init",0x02c35390,"snow.platform.native.input.InputSystem.init","snow/platform/native/input/InputSystem.hx",19,0xe8ed6df2)
		HX_STACK_THIS(this)
	}
return null();
}


Void InputSystem_obj::process( ){
{
		HX_STACK_FRAME("snow.platform.native.input.InputSystem","process",0x3afcd9ef,"snow.platform.native.input.InputSystem.process","snow/platform/native/input/InputSystem.hx",22,0xe8ed6df2)
		HX_STACK_THIS(this)
	}
return null();
}


Void InputSystem_obj::destroy( ){
{
		HX_STACK_FRAME("snow.platform.native.input.InputSystem","destroy",0x6e38647a,"snow.platform.native.input.InputSystem.destroy","snow/platform/native/input/InputSystem.hx",25,0xe8ed6df2)
		HX_STACK_THIS(this)
	}
return null();
}


Void InputSystem_obj::listen( ::snow::window::Window window){
{
		HX_STACK_FRAME("snow.platform.native.input.InputSystem","listen",0x119900c7,"snow.platform.native.input.InputSystem.listen","snow/platform/native/input/InputSystem.hx",28,0xe8ed6df2)
		HX_STACK_THIS(this)
		HX_STACK_ARG(window,"window")
	}
return null();
}


Void InputSystem_obj::unlisten( ::snow::window::Window window){
{
		HX_STACK_FRAME("snow.platform.native.input.InputSystem","unlisten",0x247f4fe0,"snow.platform.native.input.InputSystem.unlisten","snow/platform/native/input/InputSystem.hx",32,0xe8ed6df2)
		HX_STACK_THIS(this)
		HX_STACK_ARG(window,"window")
	}
return null();
}


Void InputSystem_obj::on_event( Dynamic _event){
{
		HX_STACK_FRAME("snow.platform.native.input.InputSystem","on_event",0x4f02ea3a,"snow.platform.native.input.InputSystem.on_event","snow/platform/native/input/InputSystem.hx",36,0xe8ed6df2)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_event,"_event")
	}
return null();
}


Void InputSystem_obj::text_input_start( ){
{
		HX_STACK_FRAME("snow.platform.native.input.InputSystem","text_input_start",0xa13745db,"snow.platform.native.input.InputSystem.text_input_start","snow/platform/native/input/InputSystem.hx",42,0xe8ed6df2)
		HX_STACK_THIS(this)
		HX_STACK_LINE(42)
		::snow::platform::native::input::InputSystem_obj::snow_input_text_start();
	}
return null();
}


Void InputSystem_obj::text_input_stop( ){
{
		HX_STACK_FRAME("snow.platform.native.input.InputSystem","text_input_stop",0x2c58b0a9,"snow.platform.native.input.InputSystem.text_input_stop","snow/platform/native/input/InputSystem.hx",47,0xe8ed6df2)
		HX_STACK_THIS(this)
		HX_STACK_LINE(47)
		::snow::platform::native::input::InputSystem_obj::snow_input_text_stop();
	}
return null();
}


Void InputSystem_obj::text_input_rect( int x,int y,int w,int h){
{
		HX_STACK_FRAME("snow.platform.native.input.InputSystem","text_input_rect",0x2ba40dcb,"snow.platform.native.input.InputSystem.text_input_rect","snow/platform/native/input/InputSystem.hx",52,0xe8ed6df2)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(w,"w")
		HX_STACK_ARG(h,"h")
		HX_STACK_LINE(52)
		::snow::platform::native::input::InputSystem_obj::snow_input_text_rect(x,y,w,h);
	}
return null();
}


Void InputSystem_obj::gamepad_add( int id){
{
		HX_STACK_FRAME("snow.platform.native.input.InputSystem","gamepad_add",0xac7273c3,"snow.platform.native.input.InputSystem.gamepad_add","snow/platform/native/input/InputSystem.hx",56,0xe8ed6df2)
		HX_STACK_THIS(this)
		HX_STACK_ARG(id,"id")
		HX_STACK_LINE(56)
		::snow::platform::native::input::InputSystem_obj::snow_gamepad_open(id);
	}
return null();
}


Void InputSystem_obj::gamepad_remove( int id){
{
		HX_STACK_FRAME("snow.platform.native.input.InputSystem","gamepad_remove",0x10fb4be2,"snow.platform.native.input.InputSystem.gamepad_remove","snow/platform/native/input/InputSystem.hx",60,0xe8ed6df2)
		HX_STACK_THIS(this)
		HX_STACK_ARG(id,"id")
		HX_STACK_LINE(60)
		::snow::platform::native::input::InputSystem_obj::snow_gamepad_close(id);
	}
return null();
}


Dynamic InputSystem_obj::snow_input_text_start;

Dynamic InputSystem_obj::snow_input_text_stop;

Dynamic InputSystem_obj::snow_input_text_rect;

Dynamic InputSystem_obj::snow_gamepad_open;

Dynamic InputSystem_obj::snow_gamepad_close;


InputSystem_obj::InputSystem_obj()
{
}

Dynamic InputSystem_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"listen") ) { return listen_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"process") ) { return process_dyn(); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"unlisten") ) { return unlisten_dyn(); }
		if (HX_FIELD_EQ(inName,"on_event") ) { return on_event_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"gamepad_add") ) { return gamepad_add_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"gamepad_remove") ) { return gamepad_remove_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"text_input_stop") ) { return text_input_stop_dyn(); }
		if (HX_FIELD_EQ(inName,"text_input_rect") ) { return text_input_rect_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"text_input_start") ) { return text_input_start_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"snow_gamepad_open") ) { return snow_gamepad_open; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"snow_gamepad_close") ) { return snow_gamepad_close; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"snow_input_text_stop") ) { return snow_input_text_stop; }
		if (HX_FIELD_EQ(inName,"snow_input_text_rect") ) { return snow_input_text_rect; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"snow_input_text_start") ) { return snow_input_text_start; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic InputSystem_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 17:
		if (HX_FIELD_EQ(inName,"snow_gamepad_open") ) { snow_gamepad_open=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"snow_gamepad_close") ) { snow_gamepad_close=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"snow_input_text_stop") ) { snow_input_text_stop=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"snow_input_text_rect") ) { snow_input_text_rect=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"snow_input_text_start") ) { snow_input_text_start=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void InputSystem_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("snow_input_text_start"),
	HX_CSTRING("snow_input_text_stop"),
	HX_CSTRING("snow_input_text_rect"),
	HX_CSTRING("snow_gamepad_open"),
	HX_CSTRING("snow_gamepad_close"),
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
	HX_CSTRING("on_event"),
	HX_CSTRING("text_input_start"),
	HX_CSTRING("text_input_stop"),
	HX_CSTRING("text_input_rect"),
	HX_CSTRING("gamepad_add"),
	HX_CSTRING("gamepad_remove"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(InputSystem_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(InputSystem_obj::snow_input_text_start,"snow_input_text_start");
	HX_MARK_MEMBER_NAME(InputSystem_obj::snow_input_text_stop,"snow_input_text_stop");
	HX_MARK_MEMBER_NAME(InputSystem_obj::snow_input_text_rect,"snow_input_text_rect");
	HX_MARK_MEMBER_NAME(InputSystem_obj::snow_gamepad_open,"snow_gamepad_open");
	HX_MARK_MEMBER_NAME(InputSystem_obj::snow_gamepad_close,"snow_gamepad_close");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(InputSystem_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(InputSystem_obj::snow_input_text_start,"snow_input_text_start");
	HX_VISIT_MEMBER_NAME(InputSystem_obj::snow_input_text_stop,"snow_input_text_stop");
	HX_VISIT_MEMBER_NAME(InputSystem_obj::snow_input_text_rect,"snow_input_text_rect");
	HX_VISIT_MEMBER_NAME(InputSystem_obj::snow_gamepad_open,"snow_gamepad_open");
	HX_VISIT_MEMBER_NAME(InputSystem_obj::snow_gamepad_close,"snow_gamepad_close");
};

#endif

Class InputSystem_obj::__mClass;

void InputSystem_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("snow.platform.native.input.InputSystem"), hx::TCanCast< InputSystem_obj> ,sStaticFields,sMemberFields,
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

void InputSystem_obj::__boot()
{
	snow_input_text_start= ::snow::Snow_obj::load(HX_CSTRING("snow"),HX_CSTRING("snow_input_text_start"),(int)0);
	snow_input_text_stop= ::snow::Snow_obj::load(HX_CSTRING("snow"),HX_CSTRING("snow_input_text_stop"),(int)0);
	snow_input_text_rect= ::snow::Snow_obj::load(HX_CSTRING("snow"),HX_CSTRING("snow_input_text_rect"),(int)4);
	snow_gamepad_open= ::snow::Snow_obj::load(HX_CSTRING("snow"),HX_CSTRING("snow_gamepad_open"),(int)1);
	snow_gamepad_close= ::snow::Snow_obj::load(HX_CSTRING("snow"),HX_CSTRING("snow_gamepad_close"),(int)1);
}

} // end namespace snow
} // end namespace platform
} // end namespace native
} // end namespace input
