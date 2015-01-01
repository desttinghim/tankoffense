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
#ifndef INCLUDED_snow_utils_AbstractClass
#include <snow/utils/AbstractClass.h>
#endif
#ifndef INCLUDED_snow_window_Window
#include <snow/window/Window.h>
#endif
namespace snow{
namespace input{

Void InputSystemBinding_obj::__construct()
{
	return null();
}

//InputSystemBinding_obj::~InputSystemBinding_obj() { }

Dynamic InputSystemBinding_obj::__CreateEmpty() { return  new InputSystemBinding_obj; }
hx::ObjectPtr< InputSystemBinding_obj > InputSystemBinding_obj::__new()
{  hx::ObjectPtr< InputSystemBinding_obj > result = new InputSystemBinding_obj();
	result->__construct();
	return result;}

Dynamic InputSystemBinding_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< InputSystemBinding_obj > result = new InputSystemBinding_obj();
	result->__construct();
	return result;}

hx::Object *InputSystemBinding_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::snow::utils::AbstractClass_obj)) return operator ::snow::utils::AbstractClass_obj *();
	return super::__ToInterface(inType);
}

Void InputSystemBinding_obj::init( ){
{
		HX_STACK_FRAME("snow.input.InputSystemBinding","init",0x4660bb63,"snow.input.InputSystemBinding.init","snow/utils/AbstractClass.hx",140,0x08288ed2)
		HX_STACK_THIS(this)
		HX_STACK_LINE(140)
		HX_STACK_DO_THROW(HX_CSTRING("abstract method, must override"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(InputSystemBinding_obj,init,(void))

Void InputSystemBinding_obj::process( ){
{
		HX_STACK_FRAME("snow.input.InputSystemBinding","process",0xf7f1d7fc,"snow.input.InputSystemBinding.process","snow/utils/AbstractClass.hx",140,0x08288ed2)
		HX_STACK_THIS(this)
		HX_STACK_LINE(140)
		HX_STACK_DO_THROW(HX_CSTRING("abstract method, must override"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(InputSystemBinding_obj,process,(void))

Void InputSystemBinding_obj::destroy( ){
{
		HX_STACK_FRAME("snow.input.InputSystemBinding","destroy",0x2b2d6287,"snow.input.InputSystemBinding.destroy","snow/utils/AbstractClass.hx",140,0x08288ed2)
		HX_STACK_THIS(this)
		HX_STACK_LINE(140)
		HX_STACK_DO_THROW(HX_CSTRING("abstract method, must override"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(InputSystemBinding_obj,destroy,(void))

Void InputSystemBinding_obj::on_event( Dynamic _event){
{
		HX_STACK_FRAME("snow.input.InputSystemBinding","on_event",0xe86c378d,"snow.input.InputSystemBinding.on_event","snow/utils/AbstractClass.hx",140,0x08288ed2)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_event,"_event")
		HX_STACK_LINE(140)
		HX_STACK_DO_THROW(HX_CSTRING("abstract method, must override"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(InputSystemBinding_obj,on_event,(void))

Void InputSystemBinding_obj::text_input_start( ){
{
		HX_STACK_FRAME("snow.input.InputSystemBinding","text_input_start",0x4c7a9e2e,"snow.input.InputSystemBinding.text_input_start","snow/utils/AbstractClass.hx",140,0x08288ed2)
		HX_STACK_THIS(this)
		HX_STACK_LINE(140)
		HX_STACK_DO_THROW(HX_CSTRING("abstract method, must override"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(InputSystemBinding_obj,text_input_start,(void))

Void InputSystemBinding_obj::text_input_stop( ){
{
		HX_STACK_FRAME("snow.input.InputSystemBinding","text_input_stop",0x39be03b6,"snow.input.InputSystemBinding.text_input_stop","snow/utils/AbstractClass.hx",140,0x08288ed2)
		HX_STACK_THIS(this)
		HX_STACK_LINE(140)
		HX_STACK_DO_THROW(HX_CSTRING("abstract method, must override"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(InputSystemBinding_obj,text_input_stop,(void))

Void InputSystemBinding_obj::text_input_rect( int x,int y,int w,int h){
{
		HX_STACK_FRAME("snow.input.InputSystemBinding","text_input_rect",0x390960d8,"snow.input.InputSystemBinding.text_input_rect","snow/utils/AbstractClass.hx",140,0x08288ed2)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(w,"w")
		HX_STACK_ARG(h,"h")
		HX_STACK_LINE(140)
		HX_STACK_DO_THROW(HX_CSTRING("abstract method, must override"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(InputSystemBinding_obj,text_input_rect,(void))

Void InputSystemBinding_obj::gamepad_add( int id){
{
		HX_STACK_FRAME("snow.input.InputSystemBinding","gamepad_add",0x36f3fc50,"snow.input.InputSystemBinding.gamepad_add","snow/utils/AbstractClass.hx",140,0x08288ed2)
		HX_STACK_THIS(this)
		HX_STACK_ARG(id,"id")
		HX_STACK_LINE(140)
		HX_STACK_DO_THROW(HX_CSTRING("abstract method, must override"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(InputSystemBinding_obj,gamepad_add,(void))

Void InputSystemBinding_obj::gamepad_remove( int id){
{
		HX_STACK_FRAME("snow.input.InputSystemBinding","gamepad_remove",0x8f51d975,"snow.input.InputSystemBinding.gamepad_remove","snow/utils/AbstractClass.hx",140,0x08288ed2)
		HX_STACK_THIS(this)
		HX_STACK_ARG(id,"id")
		HX_STACK_LINE(140)
		HX_STACK_DO_THROW(HX_CSTRING("abstract method, must override"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(InputSystemBinding_obj,gamepad_remove,(void))

Void InputSystemBinding_obj::listen( ::snow::window::Window window){
{
		HX_STACK_FRAME("snow.input.InputSystemBinding","listen",0x853e435a,"snow.input.InputSystemBinding.listen","snow/utils/AbstractClass.hx",140,0x08288ed2)
		HX_STACK_THIS(this)
		HX_STACK_ARG(window,"window")
		HX_STACK_LINE(140)
		HX_STACK_DO_THROW(HX_CSTRING("abstract method, must override"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(InputSystemBinding_obj,listen,(void))

Void InputSystemBinding_obj::unlisten( ::snow::window::Window window){
{
		HX_STACK_FRAME("snow.input.InputSystemBinding","unlisten",0xbde89d33,"snow.input.InputSystemBinding.unlisten","snow/utils/AbstractClass.hx",140,0x08288ed2)
		HX_STACK_THIS(this)
		HX_STACK_ARG(window,"window")
		HX_STACK_LINE(140)
		HX_STACK_DO_THROW(HX_CSTRING("abstract method, must override"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(InputSystemBinding_obj,unlisten,(void))


InputSystemBinding_obj::InputSystemBinding_obj()
{
}

void InputSystemBinding_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(InputSystemBinding);
	HX_MARK_MEMBER_NAME(manager,"manager");
	HX_MARK_MEMBER_NAME(lib,"lib");
	HX_MARK_END_CLASS();
}

void InputSystemBinding_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(manager,"manager");
	HX_VISIT_MEMBER_NAME(lib,"lib");
}

Dynamic InputSystemBinding_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"lib") ) { return lib; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"listen") ) { return listen_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"manager") ) { return manager; }
		if (HX_FIELD_EQ(inName,"process") ) { return process_dyn(); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"on_event") ) { return on_event_dyn(); }
		if (HX_FIELD_EQ(inName,"unlisten") ) { return unlisten_dyn(); }
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
	}
	return super::__Field(inName,inCallProp);
}

Dynamic InputSystemBinding_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"lib") ) { lib=inValue.Cast< ::snow::Snow >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"manager") ) { manager=inValue.Cast< ::snow::input::Input >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void InputSystemBinding_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("manager"));
	outFields->push(HX_CSTRING("lib"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::snow::input::Input*/ ,(int)offsetof(InputSystemBinding_obj,manager),HX_CSTRING("manager")},
	{hx::fsObject /*::snow::Snow*/ ,(int)offsetof(InputSystemBinding_obj,lib),HX_CSTRING("lib")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("manager"),
	HX_CSTRING("lib"),
	HX_CSTRING("init"),
	HX_CSTRING("process"),
	HX_CSTRING("destroy"),
	HX_CSTRING("on_event"),
	HX_CSTRING("text_input_start"),
	HX_CSTRING("text_input_stop"),
	HX_CSTRING("text_input_rect"),
	HX_CSTRING("gamepad_add"),
	HX_CSTRING("gamepad_remove"),
	HX_CSTRING("listen"),
	HX_CSTRING("unlisten"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(InputSystemBinding_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(InputSystemBinding_obj::__mClass,"__mClass");
};

#endif

Class InputSystemBinding_obj::__mClass;

void InputSystemBinding_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("snow.input.InputSystemBinding"), hx::TCanCast< InputSystemBinding_obj> ,sStaticFields,sMemberFields,
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

void InputSystemBinding_obj::__boot()
{
}

} // end namespace snow
} // end namespace input
