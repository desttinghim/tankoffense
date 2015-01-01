#include <hxcpp.h>

#ifndef INCLUDED_phoenix_FOVType
#include <phoenix/FOVType.h>
#endif
namespace phoenix{

::phoenix::FOVType FOVType_obj::horizontal;

::phoenix::FOVType FOVType_obj::vertical;

HX_DEFINE_CREATE_ENUM(FOVType_obj)

int FOVType_obj::__FindIndex(::String inName)
{
	if (inName==HX_CSTRING("horizontal")) return 1;
	if (inName==HX_CSTRING("vertical")) return 0;
	return super::__FindIndex(inName);
}

int FOVType_obj::__FindArgCount(::String inName)
{
	if (inName==HX_CSTRING("horizontal")) return 0;
	if (inName==HX_CSTRING("vertical")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic FOVType_obj::__Field(const ::String &inName,bool inCallProp)
{
	if (inName==HX_CSTRING("horizontal")) return horizontal;
	if (inName==HX_CSTRING("vertical")) return vertical;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_CSTRING("vertical"),
	HX_CSTRING("horizontal"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FOVType_obj::horizontal,"horizontal");
	HX_MARK_MEMBER_NAME(FOVType_obj::vertical,"vertical");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FOVType_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FOVType_obj::horizontal,"horizontal");
	HX_VISIT_MEMBER_NAME(FOVType_obj::vertical,"vertical");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
Class FOVType_obj::__mClass;

Dynamic __Create_FOVType_obj() { return new FOVType_obj; }

void FOVType_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("phoenix.FOVType"), hx::TCanCast< FOVType_obj >,sStaticFields,sMemberFields,
	&__Create_FOVType_obj, &__Create,
	&super::__SGetClass(), &CreateFOVType_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void FOVType_obj::__boot()
{
hx::Static(horizontal) = hx::CreateEnum< FOVType_obj >(HX_CSTRING("horizontal"),1);
hx::Static(vertical) = hx::CreateEnum< FOVType_obj >(HX_CSTRING("vertical"),0);
}


} // end namespace phoenix
