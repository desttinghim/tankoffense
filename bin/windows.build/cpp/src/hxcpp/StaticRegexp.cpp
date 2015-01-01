#include <hxcpp.h>

#ifndef INCLUDED_hxcpp_StaticRegexp
#include <hxcpp/StaticRegexp.h>
#endif
extern "C" void regexp_register_prims();
namespace hxcpp{

Void StaticRegexp_obj::__construct()
{
	return null();
}

//StaticRegexp_obj::~StaticRegexp_obj() { }

Dynamic StaticRegexp_obj::__CreateEmpty() { return  new StaticRegexp_obj; }
hx::ObjectPtr< StaticRegexp_obj > StaticRegexp_obj::__new()
{  hx::ObjectPtr< StaticRegexp_obj > result = new StaticRegexp_obj();
	result->__construct();
	return result;}

Dynamic StaticRegexp_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< StaticRegexp_obj > result = new StaticRegexp_obj();
	result->__construct();
	return result;}

void StaticRegexp_obj::__init__() {
HX_STACK_FRAME("hxcpp.StaticRegexp","__init__",0xe665bccc,"hxcpp.StaticRegexp.__init__","hxcpp/StaticRegexp.hx",13,0x9f955eab)
{
	HX_STACK_LINE(13)
	regexp_register_prims();;
}
}


StaticRegexp_obj::StaticRegexp_obj()
{
}

Dynamic StaticRegexp_obj::__Field(const ::String &inName,bool inCallProp)
{
	return super::__Field(inName,inCallProp);
}

Dynamic StaticRegexp_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void StaticRegexp_obj::__GetFields(Array< ::String> &outFields)
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
	HX_MARK_MEMBER_NAME(StaticRegexp_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(StaticRegexp_obj::__mClass,"__mClass");
};

#endif

Class StaticRegexp_obj::__mClass;

void StaticRegexp_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("hxcpp.StaticRegexp"), hx::TCanCast< StaticRegexp_obj> ,sStaticFields,sMemberFields,
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

void StaticRegexp_obj::__boot()
{
}

} // end namespace hxcpp
