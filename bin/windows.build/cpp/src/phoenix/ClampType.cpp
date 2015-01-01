#include <hxcpp.h>

#ifndef INCLUDED_phoenix_ClampType
#include <phoenix/ClampType.h>
#endif
namespace phoenix{

::phoenix::ClampType ClampType_obj::edge;

::phoenix::ClampType ClampType_obj::mirror;

::phoenix::ClampType ClampType_obj::repeat;

HX_DEFINE_CREATE_ENUM(ClampType_obj)

int ClampType_obj::__FindIndex(::String inName)
{
	if (inName==HX_CSTRING("edge")) return 0;
	if (inName==HX_CSTRING("mirror")) return 2;
	if (inName==HX_CSTRING("repeat")) return 1;
	return super::__FindIndex(inName);
}

int ClampType_obj::__FindArgCount(::String inName)
{
	if (inName==HX_CSTRING("edge")) return 0;
	if (inName==HX_CSTRING("mirror")) return 0;
	if (inName==HX_CSTRING("repeat")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic ClampType_obj::__Field(const ::String &inName,bool inCallProp)
{
	if (inName==HX_CSTRING("edge")) return edge;
	if (inName==HX_CSTRING("mirror")) return mirror;
	if (inName==HX_CSTRING("repeat")) return repeat;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_CSTRING("edge"),
	HX_CSTRING("repeat"),
	HX_CSTRING("mirror"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ClampType_obj::edge,"edge");
	HX_MARK_MEMBER_NAME(ClampType_obj::mirror,"mirror");
	HX_MARK_MEMBER_NAME(ClampType_obj::repeat,"repeat");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ClampType_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ClampType_obj::edge,"edge");
	HX_VISIT_MEMBER_NAME(ClampType_obj::mirror,"mirror");
	HX_VISIT_MEMBER_NAME(ClampType_obj::repeat,"repeat");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
Class ClampType_obj::__mClass;

Dynamic __Create_ClampType_obj() { return new ClampType_obj; }

void ClampType_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("phoenix.ClampType"), hx::TCanCast< ClampType_obj >,sStaticFields,sMemberFields,
	&__Create_ClampType_obj, &__Create,
	&super::__SGetClass(), &CreateClampType_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void ClampType_obj::__boot()
{
hx::Static(edge) = hx::CreateEnum< ClampType_obj >(HX_CSTRING("edge"),0);
hx::Static(mirror) = hx::CreateEnum< ClampType_obj >(HX_CSTRING("mirror"),2);
hx::Static(repeat) = hx::CreateEnum< ClampType_obj >(HX_CSTRING("repeat"),1);
}


} // end namespace phoenix
