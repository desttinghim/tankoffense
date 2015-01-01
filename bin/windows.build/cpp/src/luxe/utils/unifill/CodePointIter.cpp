#include <hxcpp.h>

#ifndef INCLUDED_luxe_utils_unifill_CodePointIter
#include <luxe/utils/unifill/CodePointIter.h>
#endif
#ifndef INCLUDED_luxe_utils_unifill_InternalEncodingIter
#include <luxe/utils/unifill/InternalEncodingIter.h>
#endif
#ifndef INCLUDED_luxe_utils_unifill_Utf
#include <luxe/utils/unifill/Utf.h>
#endif
#ifndef INCLUDED_luxe_utils_unifill_Utf8
#include <luxe/utils/unifill/Utf8.h>
#endif
namespace luxe{
namespace utils{
namespace unifill{

Void CodePointIter_obj::__construct(::String s)
{
HX_STACK_FRAME("luxe.utils.unifill.CodePointIter","new",0x0b9c58fd,"luxe.utils.unifill.CodePointIter.new","luxe/utils/unifill/CodePointIter.hx",7,0x99e093d6)
HX_STACK_THIS(this)
HX_STACK_ARG(s,"s")
{
	HX_STACK_LINE(8)
	this->s = s;
	HX_STACK_LINE(9)
	::luxe::utils::unifill::InternalEncodingIter _g = ::luxe::utils::unifill::InternalEncodingIter_obj::__new(s,(int)0,s.length);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(9)
	this->itr = _g;
}
;
	return null();
}

//CodePointIter_obj::~CodePointIter_obj() { }

Dynamic CodePointIter_obj::__CreateEmpty() { return  new CodePointIter_obj; }
hx::ObjectPtr< CodePointIter_obj > CodePointIter_obj::__new(::String s)
{  hx::ObjectPtr< CodePointIter_obj > result = new CodePointIter_obj();
	result->__construct(s);
	return result;}

Dynamic CodePointIter_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< CodePointIter_obj > result = new CodePointIter_obj();
	result->__construct(inArgs[0]);
	return result;}

bool CodePointIter_obj::hasNext( ){
	HX_STACK_FRAME("luxe.utils.unifill.CodePointIter","hasNext",0x4c5c408a,"luxe.utils.unifill.CodePointIter.hasNext","luxe/utils/unifill/CodePointIter.hx",13,0x99e093d6)
	HX_STACK_THIS(this)
	HX_STACK_LINE(13)
	::luxe::utils::unifill::InternalEncodingIter _this = this->itr;		HX_STACK_VAR(_this,"_this");
	HX_STACK_LINE(13)
	return (_this->index < _this->endIndex);
}


HX_DEFINE_DYNAMIC_FUNC0(CodePointIter_obj,hasNext,return )

int CodePointIter_obj::next( ){
	HX_STACK_FRAME("luxe.utils.unifill.CodePointIter","next",0x1d3185b6,"luxe.utils.unifill.CodePointIter.next","luxe/utils/unifill/CodePointIter.hx",17,0x99e093d6)
	HX_STACK_THIS(this)
	struct _Function_1_1{
		inline static int Block( hx::ObjectPtr< ::luxe::utils::unifill::CodePointIter_obj > __this){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/utils/unifill/CodePointIter.hx",17,0x99e093d6)
			{
				HX_STACK_LINE(17)
				int index;		HX_STACK_VAR(index,"index");
				HX_STACK_LINE(17)
				{
					HX_STACK_LINE(17)
					::luxe::utils::unifill::InternalEncodingIter _this = __this->itr;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(17)
					int i = _this->index;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(17)
					int _g;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(17)
					{
						HX_STACK_LINE(17)
						::String u_str = _this->string;		HX_STACK_VAR(u_str,"u_str");
						HX_STACK_LINE(17)
						{
							HX_STACK_LINE(17)
							int c = u_str.cca(_this->index);		HX_STACK_VAR(c,"c");
							HX_STACK_LINE(17)
							if (((c < (int)192))){
								HX_STACK_LINE(17)
								_g = (int)1;
							}
							else{
								HX_STACK_LINE(17)
								if (((c < (int)224))){
									HX_STACK_LINE(17)
									_g = (int)2;
								}
								else{
									HX_STACK_LINE(17)
									if (((c < (int)240))){
										HX_STACK_LINE(17)
										_g = (int)3;
									}
									else{
										HX_STACK_LINE(17)
										if (((c < (int)248))){
											HX_STACK_LINE(17)
											_g = (int)4;
										}
										else{
											HX_STACK_LINE(17)
											_g = (int)1;
										}
									}
								}
							}
						}
					}
					HX_STACK_LINE(17)
					hx::AddEq(_this->index,_g);
					HX_STACK_LINE(17)
					index = i;
				}
				HX_STACK_LINE(17)
				::luxe::utils::unifill::Utf8 u = ::luxe::utils::unifill::Utf8_obj::__new(__this->s);		HX_STACK_VAR(u,"u");
				HX_STACK_LINE(17)
				return u->codePointAt(index);
			}
			return null();
		}
	};
	HX_STACK_LINE(17)
	return _Function_1_1::Block(this);
}


HX_DEFINE_DYNAMIC_FUNC0(CodePointIter_obj,next,return )


CodePointIter_obj::CodePointIter_obj()
{
}

void CodePointIter_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(CodePointIter);
	HX_MARK_MEMBER_NAME(s,"s");
	HX_MARK_MEMBER_NAME(itr,"itr");
	HX_MARK_END_CLASS();
}

void CodePointIter_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(s,"s");
	HX_VISIT_MEMBER_NAME(itr,"itr");
}

Dynamic CodePointIter_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"s") ) { return s; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"itr") ) { return itr; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { return next_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"hasNext") ) { return hasNext_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic CodePointIter_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"s") ) { s=inValue.Cast< ::String >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"itr") ) { itr=inValue.Cast< ::luxe::utils::unifill::InternalEncodingIter >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void CodePointIter_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("s"));
	outFields->push(HX_CSTRING("itr"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(CodePointIter_obj,s),HX_CSTRING("s")},
	{hx::fsObject /*::luxe::utils::unifill::InternalEncodingIter*/ ,(int)offsetof(CodePointIter_obj,itr),HX_CSTRING("itr")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("s"),
	HX_CSTRING("itr"),
	HX_CSTRING("hasNext"),
	HX_CSTRING("next"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CodePointIter_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CodePointIter_obj::__mClass,"__mClass");
};

#endif

Class CodePointIter_obj::__mClass;

void CodePointIter_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("luxe.utils.unifill.CodePointIter"), hx::TCanCast< CodePointIter_obj> ,sStaticFields,sMemberFields,
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

void CodePointIter_obj::__boot()
{
}

} // end namespace luxe
} // end namespace utils
} // end namespace unifill
