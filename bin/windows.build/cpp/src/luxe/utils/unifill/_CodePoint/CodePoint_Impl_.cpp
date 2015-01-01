#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_io_BytesBuffer
#include <haxe/io/BytesBuffer.h>
#endif
#ifndef INCLUDED_luxe_utils_unifill_Exception
#include <luxe/utils/unifill/Exception.h>
#endif
#ifndef INCLUDED_luxe_utils_unifill__CodePoint_CodePoint_Impl_
#include <luxe/utils/unifill/_CodePoint/CodePoint_Impl_.h>
#endif
#ifndef INCLUDED_luxe_utils_unifill__Utf8_Utf8Impl
#include <luxe/utils/unifill/_Utf8/Utf8Impl.h>
#endif
namespace luxe{
namespace utils{
namespace unifill{
namespace _CodePoint{

Void CodePoint_Impl__obj::__construct()
{
	return null();
}

//CodePoint_Impl__obj::~CodePoint_Impl__obj() { }

Dynamic CodePoint_Impl__obj::__CreateEmpty() { return  new CodePoint_Impl__obj; }
hx::ObjectPtr< CodePoint_Impl__obj > CodePoint_Impl__obj::__new()
{  hx::ObjectPtr< CodePoint_Impl__obj > result = new CodePoint_Impl__obj();
	result->__construct();
	return result;}

Dynamic CodePoint_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< CodePoint_Impl__obj > result = new CodePoint_Impl__obj();
	result->__construct();
	return result;}

::String CodePoint_Impl__obj::cons( int a,::String b){
	HX_STACK_FRAME("luxe.utils.unifill._CodePoint.CodePoint_Impl_","cons",0x33e9aed6,"luxe.utils.unifill._CodePoint.CodePoint_Impl_.cons","luxe/utils/unifill/CodePoint.hx",7,0x1d0b0a0e)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(7)
	::String _g1;		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(7)
	{
		HX_STACK_LINE(7)
		::haxe::io::BytesBuffer buf = ::haxe::io::BytesBuffer_obj::__new();		HX_STACK_VAR(buf,"buf");
		HX_STACK_LINE(7)
		::luxe::utils::unifill::_Utf8::Utf8Impl_obj::encode_code_point(buf->addByte_dyn(),a);
		HX_STACK_LINE(7)
		::String _g;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(7)
		{
			HX_STACK_LINE(7)
			::haxe::io::Bytes b1 = buf->getBytes();		HX_STACK_VAR(b1,"b1");
			HX_STACK_LINE(7)
			{
				HX_STACK_LINE(7)
				::String s = b1->toString();		HX_STACK_VAR(s,"s");
				HX_STACK_LINE(7)
				_g = s;
			}
		}
		HX_STACK_LINE(7)
		::String _this_str = _g;		HX_STACK_VAR(_this_str,"_this_str");
		HX_STACK_LINE(7)
		_g1 = _this_str;
	}
	HX_STACK_LINE(7)
	return (_g1 + b);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CodePoint_Impl__obj,cons,return )

::String CodePoint_Impl__obj::snoc( ::String a,int b){
	HX_STACK_FRAME("luxe.utils.unifill._CodePoint.CodePoint_Impl_","snoc",0x3e7c5754,"luxe.utils.unifill._CodePoint.CodePoint_Impl_.snoc","luxe/utils/unifill/CodePoint.hx",11,0x1d0b0a0e)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(11)
	::String _g1;		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(11)
	{
		HX_STACK_LINE(11)
		::haxe::io::BytesBuffer buf = ::haxe::io::BytesBuffer_obj::__new();		HX_STACK_VAR(buf,"buf");
		HX_STACK_LINE(11)
		::luxe::utils::unifill::_Utf8::Utf8Impl_obj::encode_code_point(buf->addByte_dyn(),b);
		HX_STACK_LINE(11)
		::String _g;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(11)
		{
			HX_STACK_LINE(11)
			::haxe::io::Bytes b1 = buf->getBytes();		HX_STACK_VAR(b1,"b1");
			HX_STACK_LINE(11)
			{
				HX_STACK_LINE(11)
				::String s = b1->toString();		HX_STACK_VAR(s,"s");
				HX_STACK_LINE(11)
				_g = s;
			}
		}
		HX_STACK_LINE(11)
		::String _this_str = _g;		HX_STACK_VAR(_this_str,"_this_str");
		HX_STACK_LINE(11)
		_g1 = _this_str;
	}
	HX_STACK_LINE(11)
	return (a + _g1);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CodePoint_Impl__obj,snoc,return )

int CodePoint_Impl__obj::addInt( int a,int b){
	HX_STACK_FRAME("luxe.utils.unifill._CodePoint.CodePoint_Impl_","addInt",0x1bf8d573,"luxe.utils.unifill._CodePoint.CodePoint_Impl_.addInt","luxe/utils/unifill/CodePoint.hx",15,0x1d0b0a0e)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(15)
	return (a + b);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CodePoint_Impl__obj,addInt,return )

int CodePoint_Impl__obj::sub( int a,int b){
	HX_STACK_FRAME("luxe.utils.unifill._CodePoint.CodePoint_Impl_","sub",0x50a3983b,"luxe.utils.unifill._CodePoint.CodePoint_Impl_.sub","luxe/utils/unifill/CodePoint.hx",19,0x1d0b0a0e)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(19)
	return (a - b);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CodePoint_Impl__obj,sub,return )

int CodePoint_Impl__obj::subInt( int a,int b){
	HX_STACK_FRAME("luxe.utils.unifill._CodePoint.CodePoint_Impl_","subInt",0x16e2c374,"luxe.utils.unifill._CodePoint.CodePoint_Impl_.subInt","luxe/utils/unifill/CodePoint.hx",23,0x1d0b0a0e)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(23)
	return (a - b);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CodePoint_Impl__obj,subInt,return )

int CodePoint_Impl__obj::_new( int code){
	HX_STACK_FRAME("luxe.utils.unifill._CodePoint.CodePoint_Impl_","_new",0x31440a46,"luxe.utils.unifill._CodePoint.CodePoint_Impl_._new","luxe/utils/unifill/CodePoint.hx",32,0x1d0b0a0e)
	HX_STACK_ARG(code,"code")
	HX_STACK_LINE(32)
	int this1;		HX_STACK_VAR(this1,"this1");
	HX_STACK_LINE(33)
	if ((!(((bool((bool((bool(((int)0 <= code)) && bool((code <= (int)1114111)))) && bool(!(((bool(((int)55296 <= code)) && bool((code <= (int)56319)))))))) && bool(!(((bool(((int)56320 <= code)) && bool((code <= (int)57343))))))))))){
		HX_STACK_LINE(34)
		HX_STACK_DO_THROW(::luxe::utils::unifill::Exception_obj::InvalidCodePoint(code));
	}
	HX_STACK_LINE(36)
	this1 = code;
	HX_STACK_LINE(32)
	return this1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CodePoint_Impl__obj,_new,return )

::String CodePoint_Impl__obj::toString( int this1){
	HX_STACK_FRAME("luxe.utils.unifill._CodePoint.CodePoint_Impl_","toString",0xace09c11,"luxe.utils.unifill._CodePoint.CodePoint_Impl_.toString","luxe/utils/unifill/CodePoint.hx",40,0x1d0b0a0e)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(40)
	::haxe::io::BytesBuffer buf = ::haxe::io::BytesBuffer_obj::__new();		HX_STACK_VAR(buf,"buf");
	HX_STACK_LINE(40)
	::luxe::utils::unifill::_Utf8::Utf8Impl_obj::encode_code_point(buf->addByte_dyn(),this1);
	HX_STACK_LINE(40)
	::String _g;		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(40)
	{
		HX_STACK_LINE(40)
		::haxe::io::Bytes b = buf->getBytes();		HX_STACK_VAR(b,"b");
		HX_STACK_LINE(40)
		{
			HX_STACK_LINE(40)
			::String s = b->toString();		HX_STACK_VAR(s,"s");
			HX_STACK_LINE(40)
			_g = s;
		}
	}
	HX_STACK_LINE(40)
	::String _this_str = _g;		HX_STACK_VAR(_this_str,"_this_str");
	HX_STACK_LINE(40)
	return _this_str;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CodePoint_Impl__obj,toString,return )

int CodePoint_Impl__obj::toInt( int this1){
	HX_STACK_FRAME("luxe.utils.unifill._CodePoint.CodePoint_Impl_","toInt",0x024311af,"luxe.utils.unifill._CodePoint.CodePoint_Impl_.toInt","luxe/utils/unifill/CodePoint.hx",43,0x1d0b0a0e)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(43)
	return this1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CodePoint_Impl__obj,toInt,return )


CodePoint_Impl__obj::CodePoint_Impl__obj()
{
}

Dynamic CodePoint_Impl__obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"sub") ) { return sub_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"cons") ) { return cons_dyn(); }
		if (HX_FIELD_EQ(inName,"snoc") ) { return snoc_dyn(); }
		if (HX_FIELD_EQ(inName,"_new") ) { return _new_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"toInt") ) { return toInt_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"addInt") ) { return addInt_dyn(); }
		if (HX_FIELD_EQ(inName,"subInt") ) { return subInt_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic CodePoint_Impl__obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void CodePoint_Impl__obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("cons"),
	HX_CSTRING("snoc"),
	HX_CSTRING("addInt"),
	HX_CSTRING("sub"),
	HX_CSTRING("subInt"),
	HX_CSTRING("_new"),
	HX_CSTRING("toString"),
	HX_CSTRING("toInt"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CodePoint_Impl__obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CodePoint_Impl__obj::__mClass,"__mClass");
};

#endif

Class CodePoint_Impl__obj::__mClass;

void CodePoint_Impl__obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("luxe.utils.unifill._CodePoint.CodePoint_Impl_"), hx::TCanCast< CodePoint_Impl__obj> ,sStaticFields,sMemberFields,
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

void CodePoint_Impl__obj::__boot()
{
}

} // end namespace luxe
} // end namespace utils
} // end namespace unifill
} // end namespace _CodePoint
