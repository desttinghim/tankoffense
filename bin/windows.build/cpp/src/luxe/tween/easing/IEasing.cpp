#include <hxcpp.h>

#ifndef INCLUDED_luxe_tween_easing_IEasing
#include <luxe/tween/easing/IEasing.h>
#endif
namespace luxe{
namespace tween{
namespace easing{

HX_DEFINE_DYNAMIC_FUNC1(IEasing_obj,calculate,return )

HX_DEFINE_DYNAMIC_FUNC4(IEasing_obj,ease,return )


static ::String sMemberFields[] = {
	HX_CSTRING("calculate"),
	HX_CSTRING("ease"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(IEasing_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(IEasing_obj::__mClass,"__mClass");
};

#endif

Class IEasing_obj::__mClass;

void IEasing_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("luxe.tween.easing.IEasing"), hx::TCanCast< IEasing_obj> ,0,sMemberFields,
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

void IEasing_obj::__boot()
{
}

} // end namespace luxe
} // end namespace tween
} // end namespace easing
