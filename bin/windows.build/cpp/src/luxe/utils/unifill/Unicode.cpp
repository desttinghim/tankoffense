#include <hxcpp.h>

#ifndef INCLUDED_luxe_utils_unifill_Unicode
#include <luxe/utils/unifill/Unicode.h>
#endif
namespace luxe{
namespace utils{
namespace unifill{

Void Unicode_obj::__construct()
{
	return null();
}

//Unicode_obj::~Unicode_obj() { }

Dynamic Unicode_obj::__CreateEmpty() { return  new Unicode_obj; }
hx::ObjectPtr< Unicode_obj > Unicode_obj::__new()
{  hx::ObjectPtr< Unicode_obj > result = new Unicode_obj();
	result->__construct();
	return result;}

Dynamic Unicode_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Unicode_obj > result = new Unicode_obj();
	result->__construct();
	return result;}

int Unicode_obj::minCodePoint;

int Unicode_obj::maxCodePoint;

int Unicode_obj::minHighSurrogate;

int Unicode_obj::maxHighSurrogate;

int Unicode_obj::minLowSurrogate;

int Unicode_obj::maxLowSurrogate;

int Unicode_obj::decodeSurrogate( int hi,int lo){
	HX_STACK_FRAME("luxe.utils.unifill.Unicode","decodeSurrogate",0x7c7a1569,"luxe.utils.unifill.Unicode.decodeSurrogate","luxe/utils/unifill/Unicode.hx",13,0x9b9efe54)
	HX_STACK_ARG(hi,"hi")
	HX_STACK_ARG(lo,"lo")
	HX_STACK_LINE(13)
	return (int((int((hi - (int)55232)) << int((int)10))) | int((int(lo) & int((int)1023))));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Unicode_obj,decodeSurrogate,return )

int Unicode_obj::encodeHighSurrogate( int c){
	HX_STACK_FRAME("luxe.utils.unifill.Unicode","encodeHighSurrogate",0xb587d83f,"luxe.utils.unifill.Unicode.encodeHighSurrogate","luxe/utils/unifill/Unicode.hx",16,0x9b9efe54)
	HX_STACK_ARG(c,"c")
	HX_STACK_LINE(16)
	return (((int(c) >> int((int)10))) + (int)55232);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Unicode_obj,encodeHighSurrogate,return )

int Unicode_obj::encodeLowSurrogate( int c){
	HX_STACK_FRAME("luxe.utils.unifill.Unicode","encodeLowSurrogate",0x51ac509b,"luxe.utils.unifill.Unicode.encodeLowSurrogate","luxe/utils/unifill/Unicode.hx",19,0x9b9efe54)
	HX_STACK_ARG(c,"c")
	HX_STACK_LINE(19)
	return (int((int(c) & int((int)1023))) | int((int)56320));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Unicode_obj,encodeLowSurrogate,return )

bool Unicode_obj::isScalar( int code){
	HX_STACK_FRAME("luxe.utils.unifill.Unicode","isScalar",0xc0c7f237,"luxe.utils.unifill.Unicode.isScalar","luxe/utils/unifill/Unicode.hx",22,0x9b9efe54)
	HX_STACK_ARG(code,"code")
	HX_STACK_LINE(22)
	return (bool((bool((bool(((int)0 <= code)) && bool((code <= (int)1114111)))) && bool(!(((bool(((int)55296 <= code)) && bool((code <= (int)56319)))))))) && bool(!(((bool(((int)56320 <= code)) && bool((code <= (int)57343)))))));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Unicode_obj,isScalar,return )

bool Unicode_obj::isHighSurrogate( int code){
	HX_STACK_FRAME("luxe.utils.unifill.Unicode","isHighSurrogate",0xe88f9e6b,"luxe.utils.unifill.Unicode.isHighSurrogate","luxe/utils/unifill/Unicode.hx",26,0x9b9efe54)
	HX_STACK_ARG(code,"code")
	HX_STACK_LINE(26)
	return (bool(((int)55296 <= code)) && bool((code <= (int)56319)));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Unicode_obj,isHighSurrogate,return )

bool Unicode_obj::isLowSurrogate( int code){
	HX_STACK_FRAME("luxe.utils.unifill.Unicode","isLowSurrogate",0xaee373ef,"luxe.utils.unifill.Unicode.isLowSurrogate","luxe/utils/unifill/Unicode.hx",30,0x9b9efe54)
	HX_STACK_ARG(code,"code")
	HX_STACK_LINE(30)
	return (bool(((int)56320 <= code)) && bool((code <= (int)57343)));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Unicode_obj,isLowSurrogate,return )


Unicode_obj::Unicode_obj()
{
}

Dynamic Unicode_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"isScalar") ) { return isScalar_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"isLowSurrogate") ) { return isLowSurrogate_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"decodeSurrogate") ) { return decodeSurrogate_dyn(); }
		if (HX_FIELD_EQ(inName,"isHighSurrogate") ) { return isHighSurrogate_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"encodeLowSurrogate") ) { return encodeLowSurrogate_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"encodeHighSurrogate") ) { return encodeHighSurrogate_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Unicode_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void Unicode_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("minCodePoint"),
	HX_CSTRING("maxCodePoint"),
	HX_CSTRING("minHighSurrogate"),
	HX_CSTRING("maxHighSurrogate"),
	HX_CSTRING("minLowSurrogate"),
	HX_CSTRING("maxLowSurrogate"),
	HX_CSTRING("decodeSurrogate"),
	HX_CSTRING("encodeHighSurrogate"),
	HX_CSTRING("encodeLowSurrogate"),
	HX_CSTRING("isScalar"),
	HX_CSTRING("isHighSurrogate"),
	HX_CSTRING("isLowSurrogate"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Unicode_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Unicode_obj::minCodePoint,"minCodePoint");
	HX_MARK_MEMBER_NAME(Unicode_obj::maxCodePoint,"maxCodePoint");
	HX_MARK_MEMBER_NAME(Unicode_obj::minHighSurrogate,"minHighSurrogate");
	HX_MARK_MEMBER_NAME(Unicode_obj::maxHighSurrogate,"maxHighSurrogate");
	HX_MARK_MEMBER_NAME(Unicode_obj::minLowSurrogate,"minLowSurrogate");
	HX_MARK_MEMBER_NAME(Unicode_obj::maxLowSurrogate,"maxLowSurrogate");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Unicode_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Unicode_obj::minCodePoint,"minCodePoint");
	HX_VISIT_MEMBER_NAME(Unicode_obj::maxCodePoint,"maxCodePoint");
	HX_VISIT_MEMBER_NAME(Unicode_obj::minHighSurrogate,"minHighSurrogate");
	HX_VISIT_MEMBER_NAME(Unicode_obj::maxHighSurrogate,"maxHighSurrogate");
	HX_VISIT_MEMBER_NAME(Unicode_obj::minLowSurrogate,"minLowSurrogate");
	HX_VISIT_MEMBER_NAME(Unicode_obj::maxLowSurrogate,"maxLowSurrogate");
};

#endif

Class Unicode_obj::__mClass;

void Unicode_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("luxe.utils.unifill.Unicode"), hx::TCanCast< Unicode_obj> ,sStaticFields,sMemberFields,
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

void Unicode_obj::__boot()
{
	minCodePoint= (int)0;
	maxCodePoint= (int)1114111;
	minHighSurrogate= (int)55296;
	maxHighSurrogate= (int)56319;
	minLowSurrogate= (int)56320;
	maxLowSurrogate= (int)57343;
}

} // end namespace luxe
} // end namespace utils
} // end namespace unifill
