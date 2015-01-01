#include <hxcpp.h>

#ifndef INCLUDED_hxcpp_StaticZlib
#include <hxcpp/StaticZlib.h>
#endif
extern "C" void zlib_register_prims();
namespace hxcpp{

Void StaticZlib_obj::__construct()
{
	return null();
}

//StaticZlib_obj::~StaticZlib_obj() { }

Dynamic StaticZlib_obj::__CreateEmpty() { return  new StaticZlib_obj; }
hx::ObjectPtr< StaticZlib_obj > StaticZlib_obj::__new()
{  hx::ObjectPtr< StaticZlib_obj > result = new StaticZlib_obj();
	result->__construct();
	return result;}

Dynamic StaticZlib_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< StaticZlib_obj > result = new StaticZlib_obj();
	result->__construct();
	return result;}

void StaticZlib_obj::__init__() {
HX_STACK_FRAME("hxcpp.StaticZlib","__init__",0x1c6d618a,"hxcpp.StaticZlib.__init__","hxcpp/StaticZlib.hx",13,0xe631eb29)
{
	HX_STACK_LINE(13)
	zlib_register_prims();;
}
}


StaticZlib_obj::StaticZlib_obj()
{
}

Dynamic StaticZlib_obj::__Field(const ::String &inName,bool inCallProp)
{
	return super::__Field(inName,inCallProp);
}

Dynamic StaticZlib_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void StaticZlib_obj::__GetFields(Array< ::String> &outFields)
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
	HX_MARK_MEMBER_NAME(StaticZlib_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(StaticZlib_obj::__mClass,"__mClass");
};

#endif

Class StaticZlib_obj::__mClass;

void StaticZlib_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("hxcpp.StaticZlib"), hx::TCanCast< StaticZlib_obj> ,sStaticFields,sMemberFields,
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

void StaticZlib_obj::__boot()
{
}

} // end namespace hxcpp
