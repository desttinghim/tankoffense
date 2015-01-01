#include <hxcpp.h>

#ifndef INCLUDED_luxe_utils_unifill_InternalEncodingIter
#include <luxe/utils/unifill/InternalEncodingIter.h>
#endif
namespace luxe{
namespace utils{
namespace unifill{

Void InternalEncodingIter_obj::__construct(::String s,int beginIndex,int endIndex)
{
HX_STACK_FRAME("luxe.utils.unifill.InternalEncodingIter","new",0xbfb7316a,"luxe.utils.unifill.InternalEncodingIter.new","luxe/utils/unifill/InternalEncodingIter.hx",9,0xc79c18e3)
HX_STACK_THIS(this)
HX_STACK_ARG(s,"s")
HX_STACK_ARG(beginIndex,"beginIndex")
HX_STACK_ARG(endIndex,"endIndex")
{
	HX_STACK_LINE(10)
	this->string = s;
	HX_STACK_LINE(11)
	this->index = beginIndex;
	HX_STACK_LINE(12)
	this->endIndex = endIndex;
}
;
	return null();
}

//InternalEncodingIter_obj::~InternalEncodingIter_obj() { }

Dynamic InternalEncodingIter_obj::__CreateEmpty() { return  new InternalEncodingIter_obj; }
hx::ObjectPtr< InternalEncodingIter_obj > InternalEncodingIter_obj::__new(::String s,int beginIndex,int endIndex)
{  hx::ObjectPtr< InternalEncodingIter_obj > result = new InternalEncodingIter_obj();
	result->__construct(s,beginIndex,endIndex);
	return result;}

Dynamic InternalEncodingIter_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< InternalEncodingIter_obj > result = new InternalEncodingIter_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

bool InternalEncodingIter_obj::hasNext( ){
	HX_STACK_FRAME("luxe.utils.unifill.InternalEncodingIter","hasNext",0x65705377,"luxe.utils.unifill.InternalEncodingIter.hasNext","luxe/utils/unifill/InternalEncodingIter.hx",16,0xc79c18e3)
	HX_STACK_THIS(this)
	HX_STACK_LINE(16)
	return (this->index < this->endIndex);
}


HX_DEFINE_DYNAMIC_FUNC0(InternalEncodingIter_obj,hasNext,return )

int InternalEncodingIter_obj::next( ){
	HX_STACK_FRAME("luxe.utils.unifill.InternalEncodingIter","next",0x00940ca9,"luxe.utils.unifill.InternalEncodingIter.next","luxe/utils/unifill/InternalEncodingIter.hx",19,0xc79c18e3)
	HX_STACK_THIS(this)
	HX_STACK_LINE(20)
	int i = this->index;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(21)
	int _g;		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(21)
	{
		HX_STACK_LINE(21)
		::String u_str = this->string;		HX_STACK_VAR(u_str,"u_str");
		HX_STACK_LINE(21)
		{
			HX_STACK_LINE(21)
			int c = u_str.cca(this->index);		HX_STACK_VAR(c,"c");
			HX_STACK_LINE(21)
			if (((c < (int)192))){
				HX_STACK_LINE(21)
				_g = (int)1;
			}
			else{
				HX_STACK_LINE(21)
				if (((c < (int)224))){
					HX_STACK_LINE(21)
					_g = (int)2;
				}
				else{
					HX_STACK_LINE(21)
					if (((c < (int)240))){
						HX_STACK_LINE(21)
						_g = (int)3;
					}
					else{
						HX_STACK_LINE(21)
						if (((c < (int)248))){
							HX_STACK_LINE(21)
							_g = (int)4;
						}
						else{
							HX_STACK_LINE(21)
							_g = (int)1;
						}
					}
				}
			}
		}
	}
	HX_STACK_LINE(21)
	hx::AddEq(this->index,_g);
	HX_STACK_LINE(22)
	return i;
}


HX_DEFINE_DYNAMIC_FUNC0(InternalEncodingIter_obj,next,return )


InternalEncodingIter_obj::InternalEncodingIter_obj()
{
}

void InternalEncodingIter_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(InternalEncodingIter);
	HX_MARK_MEMBER_NAME(string,"string");
	HX_MARK_MEMBER_NAME(index,"index");
	HX_MARK_MEMBER_NAME(endIndex,"endIndex");
	HX_MARK_END_CLASS();
}

void InternalEncodingIter_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(string,"string");
	HX_VISIT_MEMBER_NAME(index,"index");
	HX_VISIT_MEMBER_NAME(endIndex,"endIndex");
}

Dynamic InternalEncodingIter_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { return next_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"index") ) { return index; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"string") ) { return string; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"hasNext") ) { return hasNext_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"endIndex") ) { return endIndex; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic InternalEncodingIter_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"index") ) { index=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"string") ) { string=inValue.Cast< ::String >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"endIndex") ) { endIndex=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void InternalEncodingIter_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("string"));
	outFields->push(HX_CSTRING("index"));
	outFields->push(HX_CSTRING("endIndex"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(InternalEncodingIter_obj,string),HX_CSTRING("string")},
	{hx::fsInt,(int)offsetof(InternalEncodingIter_obj,index),HX_CSTRING("index")},
	{hx::fsInt,(int)offsetof(InternalEncodingIter_obj,endIndex),HX_CSTRING("endIndex")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("string"),
	HX_CSTRING("index"),
	HX_CSTRING("endIndex"),
	HX_CSTRING("hasNext"),
	HX_CSTRING("next"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(InternalEncodingIter_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(InternalEncodingIter_obj::__mClass,"__mClass");
};

#endif

Class InternalEncodingIter_obj::__mClass;

void InternalEncodingIter_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("luxe.utils.unifill.InternalEncodingIter"), hx::TCanCast< InternalEncodingIter_obj> ,sStaticFields,sMemberFields,
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

void InternalEncodingIter_obj::__boot()
{
}

} // end namespace luxe
} // end namespace utils
} // end namespace unifill
