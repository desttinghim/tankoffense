#include <hxcpp.h>

#ifndef INCLUDED_hxcpp_StaticStd
#include <hxcpp/StaticStd.h>
#endif
extern "C" void std_register_prims();
namespace hxcpp{

Void StaticStd_obj::__construct()
{
	return null();
}

//StaticStd_obj::~StaticStd_obj() { }

Dynamic StaticStd_obj::__CreateEmpty() { return  new StaticStd_obj; }
hx::ObjectPtr< StaticStd_obj > StaticStd_obj::__new()
{  hx::ObjectPtr< StaticStd_obj > result = new StaticStd_obj();
	result->__construct();
	return result;}

Dynamic StaticStd_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< StaticStd_obj > result = new StaticStd_obj();
	result->__construct();
	return result;}

void StaticStd_obj::__init__() {
HX_STACK_FRAME("hxcpp.StaticStd","__init__",0xfea86be4,"hxcpp.StaticStd.__init__","hxcpp/StaticStd.hx",14,0xf90d8025)
{
	HX_STACK_LINE(14)
	std_register_prims();;
}
}


StaticStd_obj::StaticStd_obj()
{
}

Dynamic StaticStd_obj::__Field(const ::String &inName,bool inCallProp)
{
	return super::__Field(inName,inCallProp);
}

Dynamic StaticStd_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void StaticStd_obj::__GetFields(Array< ::String> &outFields)
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
	HX_MARK_MEMBER_NAME(StaticStd_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(StaticStd_obj::__mClass,"__mClass");
};

#endif

Class StaticStd_obj::__mClass;

void StaticStd_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("hxcpp.StaticStd"), hx::TCanCast< StaticStd_obj> ,sStaticFields,sMemberFields,
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

void StaticStd_obj::__boot()
{
}

} // end namespace hxcpp
