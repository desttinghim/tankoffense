#include <hxcpp.h>

#ifndef INCLUDED_luxe_utils_unifill_Exception
#include <luxe/utils/unifill/Exception.h>
#endif
namespace luxe{
namespace utils{
namespace unifill{

::luxe::utils::unifill::Exception  Exception_obj::InvalidCodePoint(int code)
	{ return hx::CreateEnum< Exception_obj >(HX_CSTRING("InvalidCodePoint"),0,hx::DynamicArray(0,1).Add(code)); }

::luxe::utils::unifill::Exception  Exception_obj::InvalidCodeUnitSequence(int index)
	{ return hx::CreateEnum< Exception_obj >(HX_CSTRING("InvalidCodeUnitSequence"),1,hx::DynamicArray(0,1).Add(index)); }

HX_DEFINE_CREATE_ENUM(Exception_obj)

int Exception_obj::__FindIndex(::String inName)
{
	if (inName==HX_CSTRING("InvalidCodePoint")) return 0;
	if (inName==HX_CSTRING("InvalidCodeUnitSequence")) return 1;
	return super::__FindIndex(inName);
}

STATIC_HX_DEFINE_DYNAMIC_FUNC1(Exception_obj,InvalidCodePoint,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(Exception_obj,InvalidCodeUnitSequence,return)

int Exception_obj::__FindArgCount(::String inName)
{
	if (inName==HX_CSTRING("InvalidCodePoint")) return 1;
	if (inName==HX_CSTRING("InvalidCodeUnitSequence")) return 1;
	return super::__FindArgCount(inName);
}

Dynamic Exception_obj::__Field(const ::String &inName,bool inCallProp)
{
	if (inName==HX_CSTRING("InvalidCodePoint")) return InvalidCodePoint_dyn();
	if (inName==HX_CSTRING("InvalidCodeUnitSequence")) return InvalidCodeUnitSequence_dyn();
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_CSTRING("InvalidCodePoint"),
	HX_CSTRING("InvalidCodeUnitSequence"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Exception_obj::__mClass,"__mClass");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
Class Exception_obj::__mClass;

Dynamic __Create_Exception_obj() { return new Exception_obj; }

void Exception_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("luxe.utils.unifill.Exception"), hx::TCanCast< Exception_obj >,sStaticFields,sMemberFields,
	&__Create_Exception_obj, &__Create,
	&super::__SGetClass(), &CreateException_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void Exception_obj::__boot()
{
}


} // end namespace luxe
} // end namespace utils
} // end namespace unifill
