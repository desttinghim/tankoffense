#include <hxcpp.h>

#ifndef INCLUDED_snow_platform_native_input_sdl__InputSystem_KeyEventType_Impl_
#include <snow/platform/native/input/sdl/_InputSystem/KeyEventType_Impl_.h>
#endif
namespace snow{
namespace platform{
namespace native{
namespace input{
namespace sdl{
namespace _InputSystem{

Void KeyEventType_Impl__obj::__construct()
{
	return null();
}

//KeyEventType_Impl__obj::~KeyEventType_Impl__obj() { }

Dynamic KeyEventType_Impl__obj::__CreateEmpty() { return  new KeyEventType_Impl__obj; }
hx::ObjectPtr< KeyEventType_Impl__obj > KeyEventType_Impl__obj::__new()
{  hx::ObjectPtr< KeyEventType_Impl__obj > result = new KeyEventType_Impl__obj();
	result->__construct();
	return result;}

Dynamic KeyEventType_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< KeyEventType_Impl__obj > result = new KeyEventType_Impl__obj();
	result->__construct();
	return result;}

int KeyEventType_Impl__obj::down;

int KeyEventType_Impl__obj::up;

int KeyEventType_Impl__obj::textedit;

int KeyEventType_Impl__obj::textinput;


KeyEventType_Impl__obj::KeyEventType_Impl__obj()
{
}

Dynamic KeyEventType_Impl__obj::__Field(const ::String &inName,bool inCallProp)
{
	return super::__Field(inName,inCallProp);
}

Dynamic KeyEventType_Impl__obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void KeyEventType_Impl__obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("down"),
	HX_CSTRING("up"),
	HX_CSTRING("textedit"),
	HX_CSTRING("textinput"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(KeyEventType_Impl__obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(KeyEventType_Impl__obj::down,"down");
	HX_MARK_MEMBER_NAME(KeyEventType_Impl__obj::up,"up");
	HX_MARK_MEMBER_NAME(KeyEventType_Impl__obj::textedit,"textedit");
	HX_MARK_MEMBER_NAME(KeyEventType_Impl__obj::textinput,"textinput");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(KeyEventType_Impl__obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(KeyEventType_Impl__obj::down,"down");
	HX_VISIT_MEMBER_NAME(KeyEventType_Impl__obj::up,"up");
	HX_VISIT_MEMBER_NAME(KeyEventType_Impl__obj::textedit,"textedit");
	HX_VISIT_MEMBER_NAME(KeyEventType_Impl__obj::textinput,"textinput");
};

#endif

Class KeyEventType_Impl__obj::__mClass;

void KeyEventType_Impl__obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("snow.platform.native.input.sdl._InputSystem.KeyEventType_Impl_"), hx::TCanCast< KeyEventType_Impl__obj> ,sStaticFields,sMemberFields,
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

void KeyEventType_Impl__obj::__boot()
{
	down= (int)768;
	up= (int)769;
	textedit= (int)770;
	textinput= (int)771;
}

} // end namespace snow
} // end namespace platform
} // end namespace native
} // end namespace input
} // end namespace sdl
} // end namespace _InputSystem
