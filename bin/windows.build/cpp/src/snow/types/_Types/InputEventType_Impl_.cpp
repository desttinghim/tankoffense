#include <hxcpp.h>

#ifndef INCLUDED_snow_types__Types_InputEventType_Impl_
#include <snow/types/_Types/InputEventType_Impl_.h>
#endif
namespace snow{
namespace types{
namespace _Types{

Void InputEventType_Impl__obj::__construct()
{
	return null();
}

//InputEventType_Impl__obj::~InputEventType_Impl__obj() { }

Dynamic InputEventType_Impl__obj::__CreateEmpty() { return  new InputEventType_Impl__obj; }
hx::ObjectPtr< InputEventType_Impl__obj > InputEventType_Impl__obj::__new()
{  hx::ObjectPtr< InputEventType_Impl__obj > result = new InputEventType_Impl__obj();
	result->__construct();
	return result;}

Dynamic InputEventType_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< InputEventType_Impl__obj > result = new InputEventType_Impl__obj();
	result->__construct();
	return result;}

int InputEventType_Impl__obj::unknown;

int InputEventType_Impl__obj::key;

int InputEventType_Impl__obj::mouse;

int InputEventType_Impl__obj::touch;

int InputEventType_Impl__obj::joystick;

int InputEventType_Impl__obj::controller;


InputEventType_Impl__obj::InputEventType_Impl__obj()
{
}

Dynamic InputEventType_Impl__obj::__Field(const ::String &inName,bool inCallProp)
{
	return super::__Field(inName,inCallProp);
}

Dynamic InputEventType_Impl__obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void InputEventType_Impl__obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("unknown"),
	HX_CSTRING("key"),
	HX_CSTRING("mouse"),
	HX_CSTRING("touch"),
	HX_CSTRING("joystick"),
	HX_CSTRING("controller"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(InputEventType_Impl__obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(InputEventType_Impl__obj::unknown,"unknown");
	HX_MARK_MEMBER_NAME(InputEventType_Impl__obj::key,"key");
	HX_MARK_MEMBER_NAME(InputEventType_Impl__obj::mouse,"mouse");
	HX_MARK_MEMBER_NAME(InputEventType_Impl__obj::touch,"touch");
	HX_MARK_MEMBER_NAME(InputEventType_Impl__obj::joystick,"joystick");
	HX_MARK_MEMBER_NAME(InputEventType_Impl__obj::controller,"controller");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(InputEventType_Impl__obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(InputEventType_Impl__obj::unknown,"unknown");
	HX_VISIT_MEMBER_NAME(InputEventType_Impl__obj::key,"key");
	HX_VISIT_MEMBER_NAME(InputEventType_Impl__obj::mouse,"mouse");
	HX_VISIT_MEMBER_NAME(InputEventType_Impl__obj::touch,"touch");
	HX_VISIT_MEMBER_NAME(InputEventType_Impl__obj::joystick,"joystick");
	HX_VISIT_MEMBER_NAME(InputEventType_Impl__obj::controller,"controller");
};

#endif

Class InputEventType_Impl__obj::__mClass;

void InputEventType_Impl__obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("snow.types._Types.InputEventType_Impl_"), hx::TCanCast< InputEventType_Impl__obj> ,sStaticFields,sMemberFields,
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

void InputEventType_Impl__obj::__boot()
{
	unknown= (int)0;
	key= (int)1;
	mouse= (int)2;
	touch= (int)3;
	joystick= (int)4;
	controller= (int)5;
}

} // end namespace snow
} // end namespace types
} // end namespace _Types
