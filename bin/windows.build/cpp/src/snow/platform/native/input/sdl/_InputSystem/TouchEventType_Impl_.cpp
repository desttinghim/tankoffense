#include <hxcpp.h>

#ifndef INCLUDED_snow_platform_native_input_sdl__InputSystem_TouchEventType_Impl_
#include <snow/platform/native/input/sdl/_InputSystem/TouchEventType_Impl_.h>
#endif
namespace snow{
namespace platform{
namespace native{
namespace input{
namespace sdl{
namespace _InputSystem{

Void TouchEventType_Impl__obj::__construct()
{
	return null();
}

//TouchEventType_Impl__obj::~TouchEventType_Impl__obj() { }

Dynamic TouchEventType_Impl__obj::__CreateEmpty() { return  new TouchEventType_Impl__obj; }
hx::ObjectPtr< TouchEventType_Impl__obj > TouchEventType_Impl__obj::__new()
{  hx::ObjectPtr< TouchEventType_Impl__obj > result = new TouchEventType_Impl__obj();
	result->__construct();
	return result;}

Dynamic TouchEventType_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TouchEventType_Impl__obj > result = new TouchEventType_Impl__obj();
	result->__construct();
	return result;}

int TouchEventType_Impl__obj::down;

int TouchEventType_Impl__obj::up;

int TouchEventType_Impl__obj::move;


TouchEventType_Impl__obj::TouchEventType_Impl__obj()
{
}

Dynamic TouchEventType_Impl__obj::__Field(const ::String &inName,bool inCallProp)
{
	return super::__Field(inName,inCallProp);
}

Dynamic TouchEventType_Impl__obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void TouchEventType_Impl__obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("down"),
	HX_CSTRING("up"),
	HX_CSTRING("move"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TouchEventType_Impl__obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(TouchEventType_Impl__obj::down,"down");
	HX_MARK_MEMBER_NAME(TouchEventType_Impl__obj::up,"up");
	HX_MARK_MEMBER_NAME(TouchEventType_Impl__obj::move,"move");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TouchEventType_Impl__obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(TouchEventType_Impl__obj::down,"down");
	HX_VISIT_MEMBER_NAME(TouchEventType_Impl__obj::up,"up");
	HX_VISIT_MEMBER_NAME(TouchEventType_Impl__obj::move,"move");
};

#endif

Class TouchEventType_Impl__obj::__mClass;

void TouchEventType_Impl__obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("snow.platform.native.input.sdl._InputSystem.TouchEventType_Impl_"), hx::TCanCast< TouchEventType_Impl__obj> ,sStaticFields,sMemberFields,
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

void TouchEventType_Impl__obj::__boot()
{
	down= (int)1792;
	up= (int)1793;
	move= (int)1794;
}

} // end namespace snow
} // end namespace platform
} // end namespace native
} // end namespace input
} // end namespace sdl
} // end namespace _InputSystem
