#include <hxcpp.h>

#ifndef INCLUDED_luxe_utils_unifill_Utf
#include <luxe/utils/unifill/Utf.h>
#endif
namespace luxe{
namespace utils{
namespace unifill{

HX_DEFINE_DYNAMIC_FUNC1(Utf_obj,codeUnitAt,return )

HX_DEFINE_DYNAMIC_FUNC1(Utf_obj,codePointAt,return )

HX_DEFINE_DYNAMIC_FUNC1(Utf_obj,codePointWidthAt,return )

HX_DEFINE_DYNAMIC_FUNC1(Utf_obj,codePointWidthBefore,return )

HX_DEFINE_DYNAMIC_FUNC0(Utf_obj,validate,)


static ::String sMemberFields[] = {
	HX_CSTRING("codeUnitAt"),
	HX_CSTRING("codePointAt"),
	HX_CSTRING("codePointWidthAt"),
	HX_CSTRING("codePointWidthBefore"),
	HX_CSTRING("validate"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Utf_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Utf_obj::__mClass,"__mClass");
};

#endif

Class Utf_obj::__mClass;

void Utf_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("luxe.utils.unifill.Utf"), hx::TCanCast< Utf_obj> ,0,sMemberFields,
	0, 0,
	&super::__SGetClass(), 0, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatics
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void Utf_obj::__boot()
{
}

} // end namespace luxe
} // end namespace utils
} // end namespace unifill
