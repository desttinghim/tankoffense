#include <hxcpp.h>

#ifndef INCLUDED_luxe_tween_easing_IEasing
#include <luxe/tween/easing/IEasing.h>
#endif
#ifndef INCLUDED_luxe_tween_easing_QuadEaseInOut
#include <luxe/tween/easing/QuadEaseInOut.h>
#endif
namespace luxe{
namespace tween{
namespace easing{

Void QuadEaseInOut_obj::__construct()
{
HX_STACK_FRAME("luxe.tween.easing.QuadEaseInOut","new",0x3753f97e,"luxe.tween.easing.QuadEaseInOut.new","luxe/tween/easing/Quad.hx",73,0xf74ebc30)
HX_STACK_THIS(this)
{
}
;
	return null();
}

//QuadEaseInOut_obj::~QuadEaseInOut_obj() { }

Dynamic QuadEaseInOut_obj::__CreateEmpty() { return  new QuadEaseInOut_obj; }
hx::ObjectPtr< QuadEaseInOut_obj > QuadEaseInOut_obj::__new()
{  hx::ObjectPtr< QuadEaseInOut_obj > result = new QuadEaseInOut_obj();
	result->__construct();
	return result;}

Dynamic QuadEaseInOut_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< QuadEaseInOut_obj > result = new QuadEaseInOut_obj();
	result->__construct();
	return result;}

hx::Object *QuadEaseInOut_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::luxe::tween::easing::IEasing_obj)) return operator ::luxe::tween::easing::IEasing_obj *();
	return super::__ToInterface(inType);
}

Float QuadEaseInOut_obj::calculate( Float k){
	HX_STACK_FRAME("luxe.tween.easing.QuadEaseInOut","calculate",0x4bf36904,"luxe.tween.easing.QuadEaseInOut.calculate","luxe/tween/easing/Quad.hx",80,0xf74ebc30)
	HX_STACK_THIS(this)
	HX_STACK_ARG(k,"k")
	HX_STACK_LINE(82)
	Float _g = hx::MultEq(k,(int)2);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(82)
	if (((_g < (int)1))){
		HX_STACK_LINE(83)
		return ((0.5 * k) * k);
	}
	HX_STACK_LINE(85)
	return (-0.5 * (((((k - (int)1)) * ((k - (int)3))) - (int)1)));
}


HX_DEFINE_DYNAMIC_FUNC1(QuadEaseInOut_obj,calculate,return )

Float QuadEaseInOut_obj::ease( Float t,Float b,Float c,Float d){
	HX_STACK_FRAME("luxe.tween.easing.QuadEaseInOut","ease",0x2c305d10,"luxe.tween.easing.QuadEaseInOut.ease","luxe/tween/easing/Quad.hx",90,0xf74ebc30)
	HX_STACK_THIS(this)
	HX_STACK_ARG(t,"t")
	HX_STACK_ARG(b,"b")
	HX_STACK_ARG(c,"c")
	HX_STACK_ARG(d,"d")
	HX_STACK_LINE(92)
	Float _g = hx::DivEq(t,(Float(d) / Float((int)2)));		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(92)
	if (((_g < (int)1))){
		HX_STACK_LINE(93)
		return ((((Float(c) / Float((int)2)) * t) * t) + b);
	}
	HX_STACK_LINE(95)
	return (((Float(-(c)) / Float((int)2)) * (((((t - (int)1)) * ((t - (int)3))) - (int)1))) + b);
}


HX_DEFINE_DYNAMIC_FUNC4(QuadEaseInOut_obj,ease,return )


QuadEaseInOut_obj::QuadEaseInOut_obj()
{
}

Dynamic QuadEaseInOut_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"ease") ) { return ease_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"calculate") ) { return calculate_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic QuadEaseInOut_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void QuadEaseInOut_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("calculate"),
	HX_CSTRING("ease"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(QuadEaseInOut_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(QuadEaseInOut_obj::__mClass,"__mClass");
};

#endif

Class QuadEaseInOut_obj::__mClass;

void QuadEaseInOut_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("luxe.tween.easing.QuadEaseInOut"), hx::TCanCast< QuadEaseInOut_obj> ,sStaticFields,sMemberFields,
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

void QuadEaseInOut_obj::__boot()
{
}

} // end namespace luxe
} // end namespace tween
} // end namespace easing
