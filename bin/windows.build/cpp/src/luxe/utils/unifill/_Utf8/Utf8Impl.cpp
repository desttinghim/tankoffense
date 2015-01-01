#include <hxcpp.h>

#ifndef INCLUDED_luxe_utils_unifill_Exception
#include <luxe/utils/unifill/Exception.h>
#endif
#ifndef INCLUDED_luxe_utils_unifill__Utf8_Utf8Impl
#include <luxe/utils/unifill/_Utf8/Utf8Impl.h>
#endif
namespace luxe{
namespace utils{
namespace unifill{
namespace _Utf8{

Void Utf8Impl_obj::__construct()
{
	return null();
}

//Utf8Impl_obj::~Utf8Impl_obj() { }

Dynamic Utf8Impl_obj::__CreateEmpty() { return  new Utf8Impl_obj; }
hx::ObjectPtr< Utf8Impl_obj > Utf8Impl_obj::__new()
{  hx::ObjectPtr< Utf8Impl_obj > result = new Utf8Impl_obj();
	result->__construct();
	return result;}

Dynamic Utf8Impl_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Utf8Impl_obj > result = new Utf8Impl_obj();
	result->__construct();
	return result;}

int Utf8Impl_obj::code_point_width( int c){
	HX_STACK_FRAME("luxe.utils.unifill._Utf8.Utf8Impl","code_point_width",0xe8ec57d4,"luxe.utils.unifill._Utf8.Utf8Impl.code_point_width","luxe/utils/unifill/Utf8.hx",169,0xbecfbbba)
	HX_STACK_ARG(c,"c")
	HX_STACK_LINE(169)
	if (((c < (int)192))){
		HX_STACK_LINE(169)
		return (int)1;
	}
	else{
		HX_STACK_LINE(169)
		if (((c < (int)224))){
			HX_STACK_LINE(169)
			return (int)2;
		}
		else{
			HX_STACK_LINE(169)
			if (((c < (int)240))){
				HX_STACK_LINE(169)
				return (int)3;
			}
			else{
				HX_STACK_LINE(169)
				if (((c < (int)248))){
					HX_STACK_LINE(169)
					return (int)4;
				}
				else{
					HX_STACK_LINE(169)
					return (int)1;
				}
			}
		}
	}
	HX_STACK_LINE(169)
	return (int)0;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Utf8Impl_obj,code_point_width,return )

int Utf8Impl_obj::find_prev_code_point( Dynamic accessor,int index){
	HX_STACK_FRAME("luxe.utils.unifill._Utf8.Utf8Impl","find_prev_code_point",0xa7890d53,"luxe.utils.unifill._Utf8.Utf8Impl.find_prev_code_point","luxe/utils/unifill/Utf8.hx",172,0xbecfbbba)
	HX_STACK_ARG(accessor,"accessor")
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(173)
	int c1 = accessor((index - (int)1)).Cast< int >();		HX_STACK_VAR(c1,"c1");
	HX_STACK_LINE(174)
	if (((bool((c1 < (int)128)) || bool((c1 >= (int)192))))){
		HX_STACK_LINE(174)
		return (int)1;
	}
	else{
		HX_STACK_LINE(175)
		int _g = accessor((index - (int)2)).Cast< int >();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(175)
		int _g1 = (int(_g) & int((int)224));		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(175)
		if (((_g1 == (int)192))){
			HX_STACK_LINE(175)
			return (int)2;
		}
		else{
			HX_STACK_LINE(176)
			int _g2 = accessor((index - (int)3)).Cast< int >();		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(176)
			int _g3 = (int(_g2) & int((int)240));		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(176)
			if (((_g3 == (int)224))){
				HX_STACK_LINE(176)
				return (int)3;
			}
			else{
				HX_STACK_LINE(177)
				int _g4 = accessor((index - (int)4)).Cast< int >();		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(177)
				int _g5 = (int(_g4) & int((int)248));		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(177)
				if (((_g5 == (int)240))){
					HX_STACK_LINE(177)
					return (int)4;
				}
				else{
					HX_STACK_LINE(178)
					return (int)1;
				}
			}
		}
	}
	HX_STACK_LINE(174)
	return (int)0;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Utf8Impl_obj,find_prev_code_point,return )

Void Utf8Impl_obj::encode_code_point( Dynamic addUnit,int codePoint){
{
		HX_STACK_FRAME("luxe.utils.unifill._Utf8.Utf8Impl","encode_code_point",0xd40a54d8,"luxe.utils.unifill._Utf8.Utf8Impl.encode_code_point","luxe/utils/unifill/Utf8.hx",182,0xbecfbbba)
		HX_STACK_ARG(addUnit,"addUnit")
		HX_STACK_ARG(codePoint,"codePoint")
		HX_STACK_LINE(182)
		if (((codePoint <= (int)127))){
			HX_STACK_LINE(183)
			addUnit(codePoint).Cast< Void >();
		}
		else{
			HX_STACK_LINE(184)
			if (((codePoint <= (int)2047))){
				HX_STACK_LINE(185)
				addUnit((int((int)192) | int((int(codePoint) >> int((int)6))))).Cast< Void >();
				HX_STACK_LINE(186)
				addUnit((int((int)128) | int((int(codePoint) & int((int)63))))).Cast< Void >();
			}
			else{
				HX_STACK_LINE(187)
				if (((codePoint <= (int)65535))){
					HX_STACK_LINE(188)
					addUnit((int((int)224) | int((int(codePoint) >> int((int)12))))).Cast< Void >();
					HX_STACK_LINE(189)
					addUnit((int((int)128) | int((int((int(codePoint) >> int((int)6))) & int((int)63))))).Cast< Void >();
					HX_STACK_LINE(190)
					addUnit((int((int)128) | int((int(codePoint) & int((int)63))))).Cast< Void >();
				}
				else{
					HX_STACK_LINE(191)
					if (((codePoint <= (int)1114111))){
						HX_STACK_LINE(192)
						addUnit((int((int)240) | int((int(codePoint) >> int((int)18))))).Cast< Void >();
						HX_STACK_LINE(193)
						addUnit((int((int)128) | int((int((int(codePoint) >> int((int)12))) & int((int)63))))).Cast< Void >();
						HX_STACK_LINE(194)
						addUnit((int((int)128) | int((int((int(codePoint) >> int((int)6))) & int((int)63))))).Cast< Void >();
						HX_STACK_LINE(195)
						addUnit((int((int)128) | int((int(codePoint) & int((int)63))))).Cast< Void >();
					}
					else{
						HX_STACK_LINE(197)
						HX_STACK_DO_THROW(::luxe::utils::unifill::Exception_obj::InvalidCodePoint(codePoint));
					}
				}
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Utf8Impl_obj,encode_code_point,(void))

int Utf8Impl_obj::decode_code_point( int len,Dynamic accessor,int index){
	HX_STACK_FRAME("luxe.utils.unifill._Utf8.Utf8Impl","decode_code_point",0x506510c0,"luxe.utils.unifill._Utf8.Utf8Impl.decode_code_point","luxe/utils/unifill/Utf8.hx",201,0xbecfbbba)
	HX_STACK_ARG(len,"len")
	HX_STACK_ARG(accessor,"accessor")
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(202)
	int i = index;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(203)
	if (((bool((i < (int)0)) || bool((len <= i))))){
		HX_STACK_LINE(204)
		HX_STACK_DO_THROW(::luxe::utils::unifill::Exception_obj::InvalidCodeUnitSequence(index));
	}
	HX_STACK_LINE(205)
	int c1 = accessor(i).Cast< int >();		HX_STACK_VAR(c1,"c1");
	HX_STACK_LINE(206)
	if (((c1 < (int)128))){
		HX_STACK_LINE(207)
		return c1;
	}
	HX_STACK_LINE(209)
	if (((c1 < (int)192))){
		HX_STACK_LINE(210)
		HX_STACK_DO_THROW(::luxe::utils::unifill::Exception_obj::InvalidCodeUnitSequence(index));
	}
	HX_STACK_LINE(212)
	++(i);
	HX_STACK_LINE(213)
	if (((bool((i < (int)0)) || bool((len <= i))))){
		HX_STACK_LINE(214)
		HX_STACK_DO_THROW(::luxe::utils::unifill::Exception_obj::InvalidCodeUnitSequence(index));
	}
	HX_STACK_LINE(215)
	int c2 = accessor(i).Cast< int >();		HX_STACK_VAR(c2,"c2");
	HX_STACK_LINE(216)
	if (((c1 < (int)224))){
		HX_STACK_LINE(217)
		if (((bool((((int(c1) & int((int)30))) != (int)0)) && bool((((int(c2) & int((int)192))) == (int)128))))){
			HX_STACK_LINE(218)
			return (int((int(((int(c1) & int((int)63)))) << int((int)6))) | int((int(c2) & int((int)127))));
		}
		else{
			HX_STACK_LINE(220)
			HX_STACK_DO_THROW(::luxe::utils::unifill::Exception_obj::InvalidCodeUnitSequence(index));
		}
	}
	HX_STACK_LINE(222)
	++(i);
	HX_STACK_LINE(223)
	if (((bool((i < (int)0)) || bool((len <= i))))){
		HX_STACK_LINE(224)
		HX_STACK_DO_THROW(::luxe::utils::unifill::Exception_obj::InvalidCodeUnitSequence(index));
	}
	HX_STACK_LINE(225)
	int c3 = accessor(i).Cast< int >();		HX_STACK_VAR(c3,"c3");
	HX_STACK_LINE(226)
	if (((c1 < (int)240))){
		HX_STACK_LINE(227)
		if (((bool((bool((bool(((bool((((int(c1) & int((int)15))) != (int)0)) || bool((((int(c2) & int((int)32))) != (int)0))))) && bool((((int(c2) & int((int)192))) == (int)128)))) && bool((((int(c3) & int((int)192))) == (int)128)))) && bool(!(((bool((bool((c1 == (int)237)) && bool(((int)160 <= c2)))) && bool((c2 <= (int)191))))))))){
			HX_STACK_LINE(229)
			return (int((int((int(((int(c1) & int((int)31)))) << int((int)12))) | int((int(((int(c2) & int((int)127)))) << int((int)6))))) | int((int(c3) & int((int)127))));
		}
		else{
			HX_STACK_LINE(231)
			HX_STACK_DO_THROW(::luxe::utils::unifill::Exception_obj::InvalidCodeUnitSequence(index));
		}
	}
	HX_STACK_LINE(233)
	++(i);
	HX_STACK_LINE(234)
	if (((bool((i < (int)0)) || bool((len <= i))))){
		HX_STACK_LINE(235)
		HX_STACK_DO_THROW(::luxe::utils::unifill::Exception_obj::InvalidCodeUnitSequence(index));
	}
	HX_STACK_LINE(236)
	int c4 = accessor(i).Cast< int >();		HX_STACK_VAR(c4,"c4");
	HX_STACK_LINE(237)
	if (((c1 < (int)248))){
		HX_STACK_LINE(238)
		if (((bool((bool((bool((bool(((bool((((int(c1) & int((int)7))) != (int)0)) || bool((((int(c2) & int((int)48))) != (int)0))))) && bool((((int(c2) & int((int)192))) == (int)128)))) && bool((((int(c3) & int((int)192))) == (int)128)))) && bool((((int(c4) & int((int)192))) == (int)128)))) && bool(!(((bool((bool((c1 == (int)244)) && bool((c2 > (int)143)))) || bool((c1 > (int)244))))))))){
			HX_STACK_LINE(240)
			return (int((int((int((int(((int(c1) & int((int)15)))) << int((int)18))) | int((int(((int(c2) & int((int)127)))) << int((int)12))))) | int((int(((int(c3) & int((int)127)))) << int((int)6))))) | int((int(c4) & int((int)127))));
		}
		else{
			HX_STACK_LINE(242)
			HX_STACK_DO_THROW(::luxe::utils::unifill::Exception_obj::InvalidCodeUnitSequence(index));
		}
	}
	HX_STACK_LINE(244)
	HX_STACK_DO_THROW(::luxe::utils::unifill::Exception_obj::InvalidCodeUnitSequence(index));
	HX_STACK_LINE(244)
	return (int)0;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Utf8Impl_obj,decode_code_point,return )


Utf8Impl_obj::Utf8Impl_obj()
{
}

Dynamic Utf8Impl_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 16:
		if (HX_FIELD_EQ(inName,"code_point_width") ) { return code_point_width_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"encode_code_point") ) { return encode_code_point_dyn(); }
		if (HX_FIELD_EQ(inName,"decode_code_point") ) { return decode_code_point_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"find_prev_code_point") ) { return find_prev_code_point_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Utf8Impl_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void Utf8Impl_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("code_point_width"),
	HX_CSTRING("find_prev_code_point"),
	HX_CSTRING("encode_code_point"),
	HX_CSTRING("decode_code_point"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Utf8Impl_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Utf8Impl_obj::__mClass,"__mClass");
};

#endif

Class Utf8Impl_obj::__mClass;

void Utf8Impl_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("luxe.utils.unifill._Utf8.Utf8Impl"), hx::TCanCast< Utf8Impl_obj> ,sStaticFields,sMemberFields,
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

void Utf8Impl_obj::__boot()
{
}

} // end namespace luxe
} // end namespace utils
} // end namespace unifill
} // end namespace _Utf8
