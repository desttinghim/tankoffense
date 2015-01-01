#include <hxcpp.h>

#ifndef INCLUDED_luxe_tween_easing_IEasing
#include <luxe/tween/easing/IEasing.h>
#endif
#ifndef INCLUDED_luxe_tween_easing_Quad
#include <luxe/tween/easing/Quad.h>
#endif
#ifndef INCLUDED_luxe_tween_easing_QuadEaseIn
#include <luxe/tween/easing/QuadEaseIn.h>
#endif
#ifndef INCLUDED_luxe_tween_easing_QuadEaseInOut
#include <luxe/tween/easing/QuadEaseInOut.h>
#endif
#ifndef INCLUDED_luxe_tween_easing_QuadEaseOut
#include <luxe/tween/easing/QuadEaseOut.h>
#endif
namespace luxe{
namespace tween{
namespace easing{

Void Quad_obj::__construct()
{
	return null();
}

//Quad_obj::~Quad_obj() { }

Dynamic Quad_obj::__CreateEmpty() { return  new Quad_obj; }
hx::ObjectPtr< Quad_obj > Quad_obj::__new()
{  hx::ObjectPtr< Quad_obj > result = new Quad_obj();
	result->__construct();
	return result;}

Dynamic Quad_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Quad_obj > result = new Quad_obj();
	result->__construct();
	return result;}

::luxe::tween::easing::IEasing Quad_obj::get_easeIn( ){
	HX_STACK_FRAME("luxe.tween.easing.Quad","get_easeIn",0x2d7bd2fb,"luxe.tween.easing.Quad.get_easeIn","luxe/tween/easing/Quad.hx",21,0xf74ebc30)
	HX_STACK_LINE(21)
	return ::luxe::tween::easing::QuadEaseIn_obj::__new();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Quad_obj,get_easeIn,return )

::luxe::tween::easing::IEasing Quad_obj::get_easeInOut( ){
	HX_STACK_FRAME("luxe.tween.easing.Quad","get_easeInOut",0xa6585453,"luxe.tween.easing.Quad.get_easeInOut","luxe/tween/easing/Quad.hx",28,0xf74ebc30)
	HX_STACK_LINE(28)
	return ::luxe::tween::easing::QuadEaseInOut_obj::__new();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Quad_obj,get_easeInOut,return )

::luxe::tween::easing::IEasing Quad_obj::get_easeOut( ){
	HX_STACK_FRAME("luxe.tween.easing.Quad","get_easeOut",0x9ee15cb8,"luxe.tween.easing.Quad.get_easeOut","luxe/tween/easing/Quad.hx",35,0xf74ebc30)
	HX_STACK_LINE(35)
	return ::luxe::tween::easing::QuadEaseOut_obj::__new();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Quad_obj,get_easeOut,return )


Quad_obj::Quad_obj()
{
}

Dynamic Quad_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"easeIn") ) { return get_easeIn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"easeOut") ) { return get_easeOut(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"easeInOut") ) { return get_easeInOut(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_easeIn") ) { return get_easeIn_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"get_easeOut") ) { return get_easeOut_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"get_easeInOut") ) { return get_easeInOut_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Quad_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void Quad_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("get_easeIn"),
	HX_CSTRING("get_easeInOut"),
	HX_CSTRING("get_easeOut"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Quad_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Quad_obj::__mClass,"__mClass");
};

#endif

Class Quad_obj::__mClass;

void Quad_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("luxe.tween.easing.Quad"), hx::TCanCast< Quad_obj> ,sStaticFields,sMemberFields,
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

void Quad_obj::__boot()
{
}

} // end namespace luxe
} // end namespace tween
} // end namespace easing
