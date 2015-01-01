#include <hxcpp.h>

#ifndef INCLUDED_snow_platform_native_input_sdl__InputSystem_ControllerEventType_Impl_
#include <snow/platform/native/input/sdl/_InputSystem/ControllerEventType_Impl_.h>
#endif
namespace snow{
namespace platform{
namespace native{
namespace input{
namespace sdl{
namespace _InputSystem{

Void ControllerEventType_Impl__obj::__construct()
{
	return null();
}

//ControllerEventType_Impl__obj::~ControllerEventType_Impl__obj() { }

Dynamic ControllerEventType_Impl__obj::__CreateEmpty() { return  new ControllerEventType_Impl__obj; }
hx::ObjectPtr< ControllerEventType_Impl__obj > ControllerEventType_Impl__obj::__new()
{  hx::ObjectPtr< ControllerEventType_Impl__obj > result = new ControllerEventType_Impl__obj();
	result->__construct();
	return result;}

Dynamic ControllerEventType_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ControllerEventType_Impl__obj > result = new ControllerEventType_Impl__obj();
	result->__construct();
	return result;}

int ControllerEventType_Impl__obj::axis;

int ControllerEventType_Impl__obj::button_down;

int ControllerEventType_Impl__obj::button_up;

int ControllerEventType_Impl__obj::added;

int ControllerEventType_Impl__obj::removed;

int ControllerEventType_Impl__obj::remapped;


ControllerEventType_Impl__obj::ControllerEventType_Impl__obj()
{
}

Dynamic ControllerEventType_Impl__obj::__Field(const ::String &inName,bool inCallProp)
{
	return super::__Field(inName,inCallProp);
}

Dynamic ControllerEventType_Impl__obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void ControllerEventType_Impl__obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("axis"),
	HX_CSTRING("button_down"),
	HX_CSTRING("button_up"),
	HX_CSTRING("added"),
	HX_CSTRING("removed"),
	HX_CSTRING("remapped"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ControllerEventType_Impl__obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ControllerEventType_Impl__obj::axis,"axis");
	HX_MARK_MEMBER_NAME(ControllerEventType_Impl__obj::button_down,"button_down");
	HX_MARK_MEMBER_NAME(ControllerEventType_Impl__obj::button_up,"button_up");
	HX_MARK_MEMBER_NAME(ControllerEventType_Impl__obj::added,"added");
	HX_MARK_MEMBER_NAME(ControllerEventType_Impl__obj::removed,"removed");
	HX_MARK_MEMBER_NAME(ControllerEventType_Impl__obj::remapped,"remapped");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ControllerEventType_Impl__obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ControllerEventType_Impl__obj::axis,"axis");
	HX_VISIT_MEMBER_NAME(ControllerEventType_Impl__obj::button_down,"button_down");
	HX_VISIT_MEMBER_NAME(ControllerEventType_Impl__obj::button_up,"button_up");
	HX_VISIT_MEMBER_NAME(ControllerEventType_Impl__obj::added,"added");
	HX_VISIT_MEMBER_NAME(ControllerEventType_Impl__obj::removed,"removed");
	HX_VISIT_MEMBER_NAME(ControllerEventType_Impl__obj::remapped,"remapped");
};

#endif

Class ControllerEventType_Impl__obj::__mClass;

void ControllerEventType_Impl__obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("snow.platform.native.input.sdl._InputSystem.ControllerEventType_Impl_"), hx::TCanCast< ControllerEventType_Impl__obj> ,sStaticFields,sMemberFields,
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

void ControllerEventType_Impl__obj::__boot()
{
	axis= (int)1616;
	button_down= (int)1617;
	button_up= (int)1618;
	added= (int)1619;
	removed= (int)1620;
	remapped= (int)1621;
}

} // end namespace snow
} // end namespace platform
} // end namespace native
} // end namespace input
} // end namespace sdl
} // end namespace _InputSystem
