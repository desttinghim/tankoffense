#include <hxcpp.h>

#ifndef INCLUDED_luxe_tween_easing_IEasing
#include <luxe/tween/easing/IEasing.h>
#endif
#ifndef INCLUDED_luxe_tween_easing_QuadEaseIn
#include <luxe/tween/easing/QuadEaseIn.h>
#endif
namespace luxe{
namespace tween{
namespace easing{

Void QuadEaseIn_obj::__construct()
{
HX_STACK_FRAME("luxe.tween.easing.QuadEaseIn","new",0xf5c2b114,"luxe.tween.easing.QuadEaseIn.new","luxe/tween/easing/Quad.hx",46,0xf74ebc30)
HX_STACK_THIS(this)
{
}
;
	return null();
}

//QuadEaseIn_obj::~QuadEaseIn_obj() { }

Dynamic QuadEaseIn_obj::__CreateEmpty() { return  new QuadEaseIn_obj; }
hx::ObjectPtr< QuadEaseIn_obj > QuadEaseIn_obj::__new()
{  hx::ObjectPtr< QuadEaseIn_obj > result = new QuadEaseIn_obj();
	result->__construct();
	return result;}

Dynamic QuadEaseIn_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< QuadEaseIn_obj > result = new QuadEaseIn_obj();
	result->__construct();
	return result;}

hx::Object *QuadEaseIn_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::luxe::tween::easing::IEasing_obj)) return operator ::luxe::tween::easing::IEasing_obj *();
	return super::__ToInterface(inType);
}

Float QuadEaseIn_obj::calculate( Float k){
	HX_STACK_FRAME("luxe.tween.easing.QuadEaseIn","calculate",0xc658f51a,"luxe.tween.easing.QuadEaseIn.calculate","luxe/tween/easing/Quad.hx",55,0xf74ebc30)
	HX_STACK_THIS(this)
	HX_STACK_ARG(k,"k")
	HX_STACK_LINE(55)
	return (k * k);
}


HX_DEFINE_DYNAMIC_FUNC1(QuadEaseIn_obj,calculate,return )

Float QuadEaseIn_obj::ease( Float t,Float b,Float c,Float d){
	HX_STACK_FRAME("luxe.tween.easing.QuadEaseIn","ease",0x0ea248ba,"luxe.tween.easing.QuadEaseIn.ease","luxe/tween/easing/Quad.hx",60,0xf74ebc30)
	HX_STACK_THIS(this)
	HX_STACK_ARG(t,"t")
	HX_STACK_ARG(b,"b")
	HX_STACK_ARG(c,"c")
	HX_STACK_ARG(d,"d")
	HX_STACK_LINE(62)
	Float _g = hx::DivEq(t,d);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(62)
	Float _g1 = (c * _g);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(62)
	Float _g2 = (_g1 * t);		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(62)
	return (_g2 + b);
}


HX_DEFINE_DYNAMIC_FUNC4(QuadEaseIn_obj,ease,return )


QuadEaseIn_obj::QuadEaseIn_obj()
{
}

Dynamic QuadEaseIn_obj::__Field(const ::String &inName,bool inCallProp)
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

Dynamic QuadEaseIn_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void QuadEaseIn_obj::__GetFields(Array< ::String> &outFields)
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
	HX_MARK_MEMBER_NAME(QuadEaseIn_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(QuadEaseIn_obj::__mClass,"__mClass");
};

#endif

Class QuadEaseIn_obj::__mClass;

void QuadEaseIn_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("luxe.tween.easing.QuadEaseIn"), hx::TCanCast< QuadEaseIn_obj> ,sStaticFields,sMemberFields,
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

void QuadEaseIn_obj::__boot()
{
}

} // end namespace luxe
} // end namespace tween
} // end namespace easing
