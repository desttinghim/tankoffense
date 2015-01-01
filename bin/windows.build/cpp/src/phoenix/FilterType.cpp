#include <hxcpp.h>

#ifndef INCLUDED_phoenix_FilterType
#include <phoenix/FilterType.h>
#endif
namespace phoenix{

::phoenix::FilterType FilterType_obj::linear;

::phoenix::FilterType FilterType_obj::mip_linear_linear;

::phoenix::FilterType FilterType_obj::mip_linear_nearest;

::phoenix::FilterType FilterType_obj::mip_nearest_linear;

::phoenix::FilterType FilterType_obj::mip_nearest_nearest;

::phoenix::FilterType FilterType_obj::nearest;

HX_DEFINE_CREATE_ENUM(FilterType_obj)

int FilterType_obj::__FindIndex(::String inName)
{
	if (inName==HX_CSTRING("linear")) return 1;
	if (inName==HX_CSTRING("mip_linear_linear")) return 5;
	if (inName==HX_CSTRING("mip_linear_nearest")) return 3;
	if (inName==HX_CSTRING("mip_nearest_linear")) return 4;
	if (inName==HX_CSTRING("mip_nearest_nearest")) return 2;
	if (inName==HX_CSTRING("nearest")) return 0;
	return super::__FindIndex(inName);
}

int FilterType_obj::__FindArgCount(::String inName)
{
	if (inName==HX_CSTRING("linear")) return 0;
	if (inName==HX_CSTRING("mip_linear_linear")) return 0;
	if (inName==HX_CSTRING("mip_linear_nearest")) return 0;
	if (inName==HX_CSTRING("mip_nearest_linear")) return 0;
	if (inName==HX_CSTRING("mip_nearest_nearest")) return 0;
	if (inName==HX_CSTRING("nearest")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic FilterType_obj::__Field(const ::String &inName,bool inCallProp)
{
	if (inName==HX_CSTRING("linear")) return linear;
	if (inName==HX_CSTRING("mip_linear_linear")) return mip_linear_linear;
	if (inName==HX_CSTRING("mip_linear_nearest")) return mip_linear_nearest;
	if (inName==HX_CSTRING("mip_nearest_linear")) return mip_nearest_linear;
	if (inName==HX_CSTRING("mip_nearest_nearest")) return mip_nearest_nearest;
	if (inName==HX_CSTRING("nearest")) return nearest;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_CSTRING("nearest"),
	HX_CSTRING("linear"),
	HX_CSTRING("mip_nearest_nearest"),
	HX_CSTRING("mip_linear_nearest"),
	HX_CSTRING("mip_nearest_linear"),
	HX_CSTRING("mip_linear_linear"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FilterType_obj::linear,"linear");
	HX_MARK_MEMBER_NAME(FilterType_obj::mip_linear_linear,"mip_linear_linear");
	HX_MARK_MEMBER_NAME(FilterType_obj::mip_linear_nearest,"mip_linear_nearest");
	HX_MARK_MEMBER_NAME(FilterType_obj::mip_nearest_linear,"mip_nearest_linear");
	HX_MARK_MEMBER_NAME(FilterType_obj::mip_nearest_nearest,"mip_nearest_nearest");
	HX_MARK_MEMBER_NAME(FilterType_obj::nearest,"nearest");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FilterType_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FilterType_obj::linear,"linear");
	HX_VISIT_MEMBER_NAME(FilterType_obj::mip_linear_linear,"mip_linear_linear");
	HX_VISIT_MEMBER_NAME(FilterType_obj::mip_linear_nearest,"mip_linear_nearest");
	HX_VISIT_MEMBER_NAME(FilterType_obj::mip_nearest_linear,"mip_nearest_linear");
	HX_VISIT_MEMBER_NAME(FilterType_obj::mip_nearest_nearest,"mip_nearest_nearest");
	HX_VISIT_MEMBER_NAME(FilterType_obj::nearest,"nearest");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
Class FilterType_obj::__mClass;

Dynamic __Create_FilterType_obj() { return new FilterType_obj; }

void FilterType_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("phoenix.FilterType"), hx::TCanCast< FilterType_obj >,sStaticFields,sMemberFields,
	&__Create_FilterType_obj, &__Create,
	&super::__SGetClass(), &CreateFilterType_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void FilterType_obj::__boot()
{
hx::Static(linear) = hx::CreateEnum< FilterType_obj >(HX_CSTRING("linear"),1);
hx::Static(mip_linear_linear) = hx::CreateEnum< FilterType_obj >(HX_CSTRING("mip_linear_linear"),5);
hx::Static(mip_linear_nearest) = hx::CreateEnum< FilterType_obj >(HX_CSTRING("mip_linear_nearest"),3);
hx::Static(mip_nearest_linear) = hx::CreateEnum< FilterType_obj >(HX_CSTRING("mip_nearest_linear"),4);
hx::Static(mip_nearest_nearest) = hx::CreateEnum< FilterType_obj >(HX_CSTRING("mip_nearest_nearest"),2);
hx::Static(nearest) = hx::CreateEnum< FilterType_obj >(HX_CSTRING("nearest"),0);
}


} // end namespace phoenix
