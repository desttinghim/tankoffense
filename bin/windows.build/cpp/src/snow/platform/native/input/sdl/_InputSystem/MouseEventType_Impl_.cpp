#include <hxcpp.h>

#ifndef INCLUDED_snow_platform_native_input_sdl__InputSystem_MouseEventType_Impl_
#include <snow/platform/native/input/sdl/_InputSystem/MouseEventType_Impl_.h>
#endif
namespace snow{
namespace platform{
namespace native{
namespace input{
namespace sdl{
namespace _InputSystem{

Void MouseEventType_Impl__obj::__construct()
{
	return null();
}

//MouseEventType_Impl__obj::~MouseEventType_Impl__obj() { }

Dynamic MouseEventType_Impl__obj::__CreateEmpty() { return  new MouseEventType_Impl__obj; }
hx::ObjectPtr< MouseEventType_Impl__obj > MouseEventType_Impl__obj::__new()
{  hx::ObjectPtr< MouseEventType_Impl__obj > result = new MouseEventType_Impl__obj();
	result->__construct();
	return result;}

Dynamic MouseEventType_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< MouseEventType_Impl__obj > result = new MouseEventType_Impl__obj();
	result->__construct();
	return result;}

int MouseEventType_Impl__obj::move;

int MouseEventType_Impl__obj::down;

int MouseEventType_Impl__obj::up;

int MouseEventType_Impl__obj::wheel;


MouseEventType_Impl__obj::MouseEventType_Impl__obj()
{
}

Dynamic MouseEventType_Impl__obj::__Field(const ::String &inName,bool inCallProp)
{
	return super::__Field(inName,inCallProp);
}

Dynamic MouseEventType_Impl__obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void MouseEventType_Impl__obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("move"),
	HX_CSTRING("down"),
	HX_CSTRING("up"),
	HX_CSTRING("wheel"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MouseEventType_Impl__obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(MouseEventType_Impl__obj::move,"move");
	HX_MARK_MEMBER_NAME(MouseEventType_Impl__obj::down,"down");
	HX_MARK_MEMBER_NAME(MouseEventType_Impl__obj::up,"up");
	HX_MARK_MEMBER_NAME(MouseEventType_Impl__obj::wheel,"wheel");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MouseEventType_Impl__obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(MouseEventType_Impl__obj::move,"move");
	HX_VISIT_MEMBER_NAME(MouseEventType_Impl__obj::down,"down");
	HX_VISIT_MEMBER_NAME(MouseEventType_Impl__obj::up,"up");
	HX_VISIT_MEMBER_NAME(MouseEventType_Impl__obj::wheel,"wheel");
};

#endif

Class MouseEventType_Impl__obj::__mClass;

void MouseEventType_Impl__obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("snow.platform.native.input.sdl._InputSystem.MouseEventType_Impl_"), hx::TCanCast< MouseEventType_Impl__obj> ,sStaticFields,sMemberFields,
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

void MouseEventType_Impl__obj::__boot()
{
	move= (int)1024;
	down= (int)1025;
	up= (int)1026;
	wheel= (int)1027;
}

} // end namespace snow
} // end namespace platform
} // end namespace native
} // end namespace input
} // end namespace sdl
} // end namespace _InputSystem
