#include <hxcpp.h>

#ifndef INCLUDED_snow_platform_native_StaticSnow
#include <snow/platform/native/StaticSnow.h>
#endif
extern "C" void snow_register_prims();
namespace snow{
namespace platform{
namespace native{

Void StaticSnow_obj::__construct()
{
	return null();
}

//StaticSnow_obj::~StaticSnow_obj() { }

Dynamic StaticSnow_obj::__CreateEmpty() { return  new StaticSnow_obj; }
hx::ObjectPtr< StaticSnow_obj > StaticSnow_obj::__new()
{  hx::ObjectPtr< StaticSnow_obj > result = new StaticSnow_obj();
	result->__construct();
	return result;}

Dynamic StaticSnow_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< StaticSnow_obj > result = new StaticSnow_obj();
	result->__construct();
	return result;}

void StaticSnow_obj::__init__() {
HX_STACK_FRAME("snow.platform.native.StaticSnow","__init__",0x45959f06,"snow.platform.native.StaticSnow.__init__","snow/platform/native/StaticSnow.hx",73,0x03844b85)
{
	HX_STACK_LINE(73)
	snow_register_prims();;
}
}


StaticSnow_obj::StaticSnow_obj()
{
}

Dynamic StaticSnow_obj::__Field(const ::String &inName,bool inCallProp)
{
	return super::__Field(inName,inCallProp);
}

Dynamic StaticSnow_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void StaticSnow_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(StaticSnow_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(StaticSnow_obj::__mClass,"__mClass");
};

#endif

Class StaticSnow_obj::__mClass;

void StaticSnow_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("snow.platform.native.StaticSnow"), hx::TCanCast< StaticSnow_obj> ,sStaticFields,sMemberFields,
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

void StaticSnow_obj::__boot()
{
}

} // end namespace snow
} // end namespace platform
} // end namespace native
