#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_phoenix_utils_Rendering
#include <phoenix/utils/Rendering.h>
#endif
namespace phoenix{
namespace utils{

Void Rendering_obj::__construct()
{
	return null();
}

//Rendering_obj::~Rendering_obj() { }

Dynamic Rendering_obj::__CreateEmpty() { return  new Rendering_obj; }
hx::ObjectPtr< Rendering_obj > Rendering_obj::__new()
{  hx::ObjectPtr< Rendering_obj > result = new Rendering_obj();
	result->__construct();
	return result;}

Dynamic Rendering_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Rendering_obj > result = new Rendering_obj();
	result->__construct();
	return result;}

int Rendering_obj::gl_blend_mode_from_BlendMode( int _b){
	HX_STACK_FRAME("phoenix.utils.Rendering","gl_blend_mode_from_BlendMode",0xf5abd9d1,"phoenix.utils.Rendering.gl_blend_mode_from_BlendMode","phoenix/utils/Rendering.hx",11,0x8a2baeb0)
	HX_STACK_ARG(_b,"_b")
	HX_STACK_LINE(11)
	switch( (int)(_b)){
		case (int)0: {
			HX_STACK_LINE(13)
			return (int)0;
		}
		;break;
		case (int)1: {
			HX_STACK_LINE(15)
			return (int)1;
		}
		;break;
		case (int)768: {
			HX_STACK_LINE(17)
			return (int)768;
		}
		;break;
		case (int)769: {
			HX_STACK_LINE(19)
			return (int)769;
		}
		;break;
		case (int)770: {
			HX_STACK_LINE(21)
			return (int)770;
		}
		;break;
		case (int)771: {
			HX_STACK_LINE(23)
			return (int)771;
		}
		;break;
		case (int)772: {
			HX_STACK_LINE(25)
			return (int)772;
		}
		;break;
		case (int)773: {
			HX_STACK_LINE(27)
			return (int)773;
		}
		;break;
		case (int)774: {
			HX_STACK_LINE(29)
			return (int)774;
		}
		;break;
		case (int)775: {
			HX_STACK_LINE(31)
			return (int)775;
		}
		;break;
		case (int)776: {
			HX_STACK_LINE(33)
			return (int)776;
		}
		;break;
	}
	HX_STACK_LINE(11)
	return (int)0;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Rendering_obj,gl_blend_mode_from_BlendMode,return )

int Rendering_obj::get_elements_for_type( int type,int length){
	HX_STACK_FRAME("phoenix.utils.Rendering","get_elements_for_type",0xb01f8cf1,"phoenix.utils.Rendering.get_elements_for_type","phoenix/utils/Rendering.hx",40,0x8a2baeb0)
	HX_STACK_ARG(type,"type")
	HX_STACK_ARG(length,"length")
	HX_STACK_LINE(40)
	switch( (int)(type)){
		case (int)0: {
			HX_STACK_LINE(42)
			return ::Std_obj::_int((Float(length) / Float((int)4)));
		}
		;break;
		case (int)1: {
			HX_STACK_LINE(44)
			return ::Std_obj::_int((Float(length) / Float((int)4)));
		}
		;break;
		case (int)3: {
			HX_STACK_LINE(46)
			return ::Std_obj::_int((Float(length) / Float((int)4)));
		}
		;break;
		case (int)2: {
			HX_STACK_LINE(48)
			return ::Std_obj::_int((Float(length) / Float((int)4)));
		}
		;break;
		case (int)5: {
			HX_STACK_LINE(50)
			return ::Std_obj::_int((Float(length) / Float((int)4)));
		}
		;break;
		case (int)6: {
			HX_STACK_LINE(52)
			return ::Std_obj::_int((Float(length) / Float((int)4)));
		}
		;break;
		default: {
			HX_STACK_LINE(54)
			return ::Std_obj::_int((Float(length) / Float((int)4)));
		}
	}
	HX_STACK_LINE(40)
	return (int)0;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Rendering_obj,get_elements_for_type,return )

Float Rendering_obj::fovx_to_y( Float fovx,Float aspect){
	HX_STACK_FRAME("phoenix.utils.Rendering","fovx_to_y",0xb6e51a8b,"phoenix.utils.Rendering.fovx_to_y","phoenix/utils/Rendering.hx",58,0x8a2baeb0)
	HX_STACK_ARG(fovx,"fovx")
	HX_STACK_ARG(aspect,"aspect")
	HX_STACK_LINE(59)
	Float _g = ::Math_obj::tan((Float((fovx * ((Float(::Math_obj::PI) / Float((int)180))))) / Float((int)2)));		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(59)
	Float _g1 = (_g * ((Float((int)1) / Float(aspect))));		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(59)
	Float _g2 = ::Math_obj::atan(_g1);		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(59)
	Float _g3 = ((int)2 * _g2);		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(59)
	return ((Float((int)180) / Float(::Math_obj::PI)) * _g3);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Rendering_obj,fovx_to_y,return )


Rendering_obj::Rendering_obj()
{
}

Dynamic Rendering_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"fovx_to_y") ) { return fovx_to_y_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"get_elements_for_type") ) { return get_elements_for_type_dyn(); }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"gl_blend_mode_from_BlendMode") ) { return gl_blend_mode_from_BlendMode_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Rendering_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void Rendering_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("gl_blend_mode_from_BlendMode"),
	HX_CSTRING("get_elements_for_type"),
	HX_CSTRING("fovx_to_y"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Rendering_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Rendering_obj::__mClass,"__mClass");
};

#endif

Class Rendering_obj::__mClass;

void Rendering_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("phoenix.utils.Rendering"), hx::TCanCast< Rendering_obj> ,sStaticFields,sMemberFields,
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

void Rendering_obj::__boot()
{
}

} // end namespace phoenix
} // end namespace utils
