#include <hxcpp.h>

#ifndef INCLUDED_luxe_tween__Actuate_TweenTimer
#include <luxe/tween/_Actuate/TweenTimer.h>
#endif
namespace luxe{
namespace tween{
namespace _Actuate{

Void TweenTimer_obj::__construct(Float progress)
{
HX_STACK_FRAME("luxe.tween._Actuate.TweenTimer","new",0x58e5f5ef,"luxe.tween._Actuate.TweenTimer.new","luxe/tween/Actuate.hx",376,0x5242ff4c)
HX_STACK_THIS(this)
HX_STACK_ARG(progress,"progress")
{
	HX_STACK_LINE(376)
	this->progress = progress;
}
;
	return null();
}

//TweenTimer_obj::~TweenTimer_obj() { }

Dynamic TweenTimer_obj::__CreateEmpty() { return  new TweenTimer_obj; }
hx::ObjectPtr< TweenTimer_obj > TweenTimer_obj::__new(Float progress)
{  hx::ObjectPtr< TweenTimer_obj > result = new TweenTimer_obj();
	result->__construct(progress);
	return result;}

Dynamic TweenTimer_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TweenTimer_obj > result = new TweenTimer_obj();
	result->__construct(inArgs[0]);
	return result;}


TweenTimer_obj::TweenTimer_obj()
{
}

Dynamic TweenTimer_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"progress") ) { return progress; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic TweenTimer_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"progress") ) { progress=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TweenTimer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("progress"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(TweenTimer_obj,progress),HX_CSTRING("progress")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("progress"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TweenTimer_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TweenTimer_obj::__mClass,"__mClass");
};

#endif

Class TweenTimer_obj::__mClass;

void TweenTimer_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("luxe.tween._Actuate.TweenTimer"), hx::TCanCast< TweenTimer_obj> ,sStaticFields,sMemberFields,
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

void TweenTimer_obj::__boot()
{
}

} // end namespace luxe
} // end namespace tween
} // end namespace _Actuate
