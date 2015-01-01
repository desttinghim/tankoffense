#include <hxcpp.h>

#ifndef INCLUDED_luxe_SizeMode
#include <luxe/SizeMode.h>
#endif
namespace luxe{

::luxe::SizeMode SizeMode_obj::contain;

::luxe::SizeMode SizeMode_obj::cover;

::luxe::SizeMode SizeMode_obj::fit;

HX_DEFINE_CREATE_ENUM(SizeMode_obj)

int SizeMode_obj::__FindIndex(::String inName)
{
	if (inName==HX_CSTRING("contain")) return 2;
	if (inName==HX_CSTRING("cover")) return 1;
	if (inName==HX_CSTRING("fit")) return 0;
	return super::__FindIndex(inName);
}

int SizeMode_obj::__FindArgCount(::String inName)
{
	if (inName==HX_CSTRING("contain")) return 0;
	if (inName==HX_CSTRING("cover")) return 0;
	if (inName==HX_CSTRING("fit")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic SizeMode_obj::__Field(const ::String &inName,bool inCallProp)
{
	if (inName==HX_CSTRING("contain")) return contain;
	if (inName==HX_CSTRING("cover")) return cover;
	if (inName==HX_CSTRING("fit")) return fit;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_CSTRING("fit"),
	HX_CSTRING("cover"),
	HX_CSTRING("contain"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SizeMode_obj::contain,"contain");
	HX_MARK_MEMBER_NAME(SizeMode_obj::cover,"cover");
	HX_MARK_MEMBER_NAME(SizeMode_obj::fit,"fit");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SizeMode_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(SizeMode_obj::contain,"contain");
	HX_VISIT_MEMBER_NAME(SizeMode_obj::cover,"cover");
	HX_VISIT_MEMBER_NAME(SizeMode_obj::fit,"fit");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
Class SizeMode_obj::__mClass;

Dynamic __Create_SizeMode_obj() { return new SizeMode_obj; }

void SizeMode_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("luxe.SizeMode"), hx::TCanCast< SizeMode_obj >,sStaticFields,sMemberFields,
	&__Create_SizeMode_obj, &__Create,
	&super::__SGetClass(), &CreateSizeMode_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void SizeMode_obj::__boot()
{
hx::Static(contain) = hx::CreateEnum< SizeMode_obj >(HX_CSTRING("contain"),2);
hx::Static(cover) = hx::CreateEnum< SizeMode_obj >(HX_CSTRING("cover"),1);
hx::Static(fit) = hx::CreateEnum< SizeMode_obj >(HX_CSTRING("fit"),0);
}


} // end namespace luxe
