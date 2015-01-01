#include <hxcpp.h>

#ifndef INCLUDED_snow_platform_native_input_sdl__InputSystem_ModValue_Impl_
#include <snow/platform/native/input/sdl/_InputSystem/ModValue_Impl_.h>
#endif
namespace snow{
namespace platform{
namespace native{
namespace input{
namespace sdl{
namespace _InputSystem{

Void ModValue_Impl__obj::__construct()
{
	return null();
}

//ModValue_Impl__obj::~ModValue_Impl__obj() { }

Dynamic ModValue_Impl__obj::__CreateEmpty() { return  new ModValue_Impl__obj; }
hx::ObjectPtr< ModValue_Impl__obj > ModValue_Impl__obj::__new()
{  hx::ObjectPtr< ModValue_Impl__obj > result = new ModValue_Impl__obj();
	result->__construct();
	return result;}

Dynamic ModValue_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ModValue_Impl__obj > result = new ModValue_Impl__obj();
	result->__construct();
	return result;}

int ModValue_Impl__obj::NONE;

int ModValue_Impl__obj::LSHIFT;

int ModValue_Impl__obj::RSHIFT;

int ModValue_Impl__obj::LCTRL;

int ModValue_Impl__obj::RCTRL;

int ModValue_Impl__obj::LALT;

int ModValue_Impl__obj::RALT;

int ModValue_Impl__obj::LMETA;

int ModValue_Impl__obj::RMETA;

int ModValue_Impl__obj::NUM;

int ModValue_Impl__obj::CAPS;

int ModValue_Impl__obj::MODE;


ModValue_Impl__obj::ModValue_Impl__obj()
{
}

Dynamic ModValue_Impl__obj::__Field(const ::String &inName,bool inCallProp)
{
	return super::__Field(inName,inCallProp);
}

Dynamic ModValue_Impl__obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void ModValue_Impl__obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("NONE"),
	HX_CSTRING("LSHIFT"),
	HX_CSTRING("RSHIFT"),
	HX_CSTRING("LCTRL"),
	HX_CSTRING("RCTRL"),
	HX_CSTRING("LALT"),
	HX_CSTRING("RALT"),
	HX_CSTRING("LMETA"),
	HX_CSTRING("RMETA"),
	HX_CSTRING("NUM"),
	HX_CSTRING("CAPS"),
	HX_CSTRING("MODE"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ModValue_Impl__obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ModValue_Impl__obj::NONE,"NONE");
	HX_MARK_MEMBER_NAME(ModValue_Impl__obj::LSHIFT,"LSHIFT");
	HX_MARK_MEMBER_NAME(ModValue_Impl__obj::RSHIFT,"RSHIFT");
	HX_MARK_MEMBER_NAME(ModValue_Impl__obj::LCTRL,"LCTRL");
	HX_MARK_MEMBER_NAME(ModValue_Impl__obj::RCTRL,"RCTRL");
	HX_MARK_MEMBER_NAME(ModValue_Impl__obj::LALT,"LALT");
	HX_MARK_MEMBER_NAME(ModValue_Impl__obj::RALT,"RALT");
	HX_MARK_MEMBER_NAME(ModValue_Impl__obj::LMETA,"LMETA");
	HX_MARK_MEMBER_NAME(ModValue_Impl__obj::RMETA,"RMETA");
	HX_MARK_MEMBER_NAME(ModValue_Impl__obj::NUM,"NUM");
	HX_MARK_MEMBER_NAME(ModValue_Impl__obj::CAPS,"CAPS");
	HX_MARK_MEMBER_NAME(ModValue_Impl__obj::MODE,"MODE");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ModValue_Impl__obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ModValue_Impl__obj::NONE,"NONE");
	HX_VISIT_MEMBER_NAME(ModValue_Impl__obj::LSHIFT,"LSHIFT");
	HX_VISIT_MEMBER_NAME(ModValue_Impl__obj::RSHIFT,"RSHIFT");
	HX_VISIT_MEMBER_NAME(ModValue_Impl__obj::LCTRL,"LCTRL");
	HX_VISIT_MEMBER_NAME(ModValue_Impl__obj::RCTRL,"RCTRL");
	HX_VISIT_MEMBER_NAME(ModValue_Impl__obj::LALT,"LALT");
	HX_VISIT_MEMBER_NAME(ModValue_Impl__obj::RALT,"RALT");
	HX_VISIT_MEMBER_NAME(ModValue_Impl__obj::LMETA,"LMETA");
	HX_VISIT_MEMBER_NAME(ModValue_Impl__obj::RMETA,"RMETA");
	HX_VISIT_MEMBER_NAME(ModValue_Impl__obj::NUM,"NUM");
	HX_VISIT_MEMBER_NAME(ModValue_Impl__obj::CAPS,"CAPS");
	HX_VISIT_MEMBER_NAME(ModValue_Impl__obj::MODE,"MODE");
};

#endif

Class ModValue_Impl__obj::__mClass;

void ModValue_Impl__obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("snow.platform.native.input.sdl._InputSystem.ModValue_Impl_"), hx::TCanCast< ModValue_Impl__obj> ,sStaticFields,sMemberFields,
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

void ModValue_Impl__obj::__boot()
{
	NONE= (int)0;
	LSHIFT= (int)1;
	RSHIFT= (int)2;
	LCTRL= (int)64;
	RCTRL= (int)128;
	LALT= (int)256;
	RALT= (int)512;
	LMETA= (int)1024;
	RMETA= (int)2048;
	NUM= (int)4096;
	CAPS= (int)8192;
	MODE= (int)16384;
}

} // end namespace snow
} // end namespace platform
} // end namespace native
} // end namespace input
} // end namespace sdl
} // end namespace _InputSystem
