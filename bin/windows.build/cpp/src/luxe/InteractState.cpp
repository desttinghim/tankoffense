#include <hxcpp.h>

#ifndef INCLUDED_luxe_InteractState
#include <luxe/InteractState.h>
#endif
namespace luxe{

::luxe::InteractState InteractState_obj::axis;

::luxe::InteractState InteractState_obj::down;

::luxe::InteractState InteractState_obj::move;

::luxe::InteractState InteractState_obj::none;

::luxe::InteractState InteractState_obj::unknown;

::luxe::InteractState InteractState_obj::up;

::luxe::InteractState InteractState_obj::wheel;

HX_DEFINE_CREATE_ENUM(InteractState_obj)

int InteractState_obj::__FindIndex(::String inName)
{
	if (inName==HX_CSTRING("axis")) return 6;
	if (inName==HX_CSTRING("down")) return 2;
	if (inName==HX_CSTRING("move")) return 4;
	if (inName==HX_CSTRING("none")) return 1;
	if (inName==HX_CSTRING("unknown")) return 0;
	if (inName==HX_CSTRING("up")) return 3;
	if (inName==HX_CSTRING("wheel")) return 5;
	return super::__FindIndex(inName);
}

int InteractState_obj::__FindArgCount(::String inName)
{
	if (inName==HX_CSTRING("axis")) return 0;
	if (inName==HX_CSTRING("down")) return 0;
	if (inName==HX_CSTRING("move")) return 0;
	if (inName==HX_CSTRING("none")) return 0;
	if (inName==HX_CSTRING("unknown")) return 0;
	if (inName==HX_CSTRING("up")) return 0;
	if (inName==HX_CSTRING("wheel")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic InteractState_obj::__Field(const ::String &inName,bool inCallProp)
{
	if (inName==HX_CSTRING("axis")) return axis;
	if (inName==HX_CSTRING("down")) return down;
	if (inName==HX_CSTRING("move")) return move;
	if (inName==HX_CSTRING("none")) return none;
	if (inName==HX_CSTRING("unknown")) return unknown;
	if (inName==HX_CSTRING("up")) return up;
	if (inName==HX_CSTRING("wheel")) return wheel;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_CSTRING("unknown"),
	HX_CSTRING("none"),
	HX_CSTRING("down"),
	HX_CSTRING("up"),
	HX_CSTRING("move"),
	HX_CSTRING("wheel"),
	HX_CSTRING("axis"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(InteractState_obj::axis,"axis");
	HX_MARK_MEMBER_NAME(InteractState_obj::down,"down");
	HX_MARK_MEMBER_NAME(InteractState_obj::move,"move");
	HX_MARK_MEMBER_NAME(InteractState_obj::none,"none");
	HX_MARK_MEMBER_NAME(InteractState_obj::unknown,"unknown");
	HX_MARK_MEMBER_NAME(InteractState_obj::up,"up");
	HX_MARK_MEMBER_NAME(InteractState_obj::wheel,"wheel");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(InteractState_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(InteractState_obj::axis,"axis");
	HX_VISIT_MEMBER_NAME(InteractState_obj::down,"down");
	HX_VISIT_MEMBER_NAME(InteractState_obj::move,"move");
	HX_VISIT_MEMBER_NAME(InteractState_obj::none,"none");
	HX_VISIT_MEMBER_NAME(InteractState_obj::unknown,"unknown");
	HX_VISIT_MEMBER_NAME(InteractState_obj::up,"up");
	HX_VISIT_MEMBER_NAME(InteractState_obj::wheel,"wheel");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
Class InteractState_obj::__mClass;

Dynamic __Create_InteractState_obj() { return new InteractState_obj; }

void InteractState_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("luxe.InteractState"), hx::TCanCast< InteractState_obj >,sStaticFields,sMemberFields,
	&__Create_InteractState_obj, &__Create,
	&super::__SGetClass(), &CreateInteractState_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void InteractState_obj::__boot()
{
hx::Static(axis) = hx::CreateEnum< InteractState_obj >(HX_CSTRING("axis"),6);
hx::Static(down) = hx::CreateEnum< InteractState_obj >(HX_CSTRING("down"),2);
hx::Static(move) = hx::CreateEnum< InteractState_obj >(HX_CSTRING("move"),4);
hx::Static(none) = hx::CreateEnum< InteractState_obj >(HX_CSTRING("none"),1);
hx::Static(unknown) = hx::CreateEnum< InteractState_obj >(HX_CSTRING("unknown"),0);
hx::Static(up) = hx::CreateEnum< InteractState_obj >(HX_CSTRING("up"),3);
hx::Static(wheel) = hx::CreateEnum< InteractState_obj >(HX_CSTRING("wheel"),5);
}


} // end namespace luxe
