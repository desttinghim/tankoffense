#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_luxe_utils_unifill__Utf8_StringU8_Impl_
#include <luxe/utils/unifill/_Utf8/StringU8_Impl_.h>
#endif
namespace luxe{
namespace utils{
namespace unifill{
namespace _Utf8{

Void StringU8_Impl__obj::__construct()
{
	return null();
}

//StringU8_Impl__obj::~StringU8_Impl__obj() { }

Dynamic StringU8_Impl__obj::__CreateEmpty() { return  new StringU8_Impl__obj; }
hx::ObjectPtr< StringU8_Impl__obj > StringU8_Impl__obj::__new()
{  hx::ObjectPtr< StringU8_Impl__obj > result = new StringU8_Impl__obj();
	result->__construct();
	return result;}

Dynamic StringU8_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< StringU8_Impl__obj > result = new StringU8_Impl__obj();
	result->__construct();
	return result;}

::String StringU8_Impl__obj::fromString( ::String s){
	HX_STACK_FRAME("luxe.utils.unifill._Utf8.StringU8_Impl_","fromString",0x27489647,"luxe.utils.unifill._Utf8.StringU8_Impl_.fromString","luxe/utils/unifill/Utf8.hx",254,0xbecfbbba)
	HX_STACK_ARG(s,"s")
	HX_STACK_LINE(254)
	return s;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(StringU8_Impl__obj,fromString,return )

::String StringU8_Impl__obj::ofBytes( ::haxe::io::Bytes b){
	HX_STACK_FRAME("luxe.utils.unifill._Utf8.StringU8_Impl_","ofBytes",0x70201fe8,"luxe.utils.unifill._Utf8.StringU8_Impl_.ofBytes","luxe/utils/unifill/Utf8.hx",258,0xbecfbbba)
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(258)
	::String s = b->toString();		HX_STACK_VAR(s,"s");
	HX_STACK_LINE(258)
	return s;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(StringU8_Impl__obj,ofBytes,return )

::String StringU8_Impl__obj::fromBytes( ::haxe::io::Bytes b){
	HX_STACK_FRAME("luxe.utils.unifill._Utf8.StringU8_Impl_","fromBytes",0xda647bb5,"luxe.utils.unifill._Utf8.StringU8_Impl_.fromBytes","luxe/utils/unifill/Utf8.hx",262,0xbecfbbba)
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(262)
	::String s = b->toString();		HX_STACK_VAR(s,"s");
	HX_STACK_LINE(262)
	return s;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(StringU8_Impl__obj,fromBytes,return )

int StringU8_Impl__obj::codeUnitAt( ::String this1,int index){
	HX_STACK_FRAME("luxe.utils.unifill._Utf8.StringU8_Impl_","codeUnitAt",0xfe22da10,"luxe.utils.unifill._Utf8.StringU8_Impl_.codeUnitAt","luxe/utils/unifill/Utf8.hx",268,0xbecfbbba)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(268)
	return this1.cca(index);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(StringU8_Impl__obj,codeUnitAt,return )

::String StringU8_Impl__obj::substr( ::String this1,int index,Dynamic len){
	HX_STACK_FRAME("luxe.utils.unifill._Utf8.StringU8_Impl_","substr",0xaf0fb19d,"luxe.utils.unifill._Utf8.StringU8_Impl_.substr","luxe/utils/unifill/Utf8.hx",272,0xbecfbbba)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(index,"index")
	HX_STACK_ARG(len,"len")
	HX_STACK_LINE(272)
	::String s = this1.substr(index,len);		HX_STACK_VAR(s,"s");
	HX_STACK_LINE(272)
	return s;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(StringU8_Impl__obj,substr,return )

::String StringU8_Impl__obj::toString( ::String this1){
	HX_STACK_FRAME("luxe.utils.unifill._Utf8.StringU8_Impl_","toString",0x29fa0618,"luxe.utils.unifill._Utf8.StringU8_Impl_.toString","luxe/utils/unifill/Utf8.hx",276,0xbecfbbba)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(276)
	return this1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(StringU8_Impl__obj,toString,return )

::haxe::io::Bytes StringU8_Impl__obj::toBytes( ::String this1){
	HX_STACK_FRAME("luxe.utils.unifill._Utf8.StringU8_Impl_","toBytes",0xd941b104,"luxe.utils.unifill._Utf8.StringU8_Impl_.toBytes","luxe/utils/unifill/Utf8.hx",280,0xbecfbbba)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(280)
	return ::haxe::io::Bytes_obj::ofString(this1);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(StringU8_Impl__obj,toBytes,return )

::String StringU8_Impl__obj::_new( ::String s){
	HX_STACK_FRAME("luxe.utils.unifill._Utf8.StringU8_Impl_","_new",0xa23024cd,"luxe.utils.unifill._Utf8.StringU8_Impl_._new","luxe/utils/unifill/Utf8.hx",284,0xbecfbbba)
	HX_STACK_ARG(s,"s")
	HX_STACK_LINE(284)
	return s;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(StringU8_Impl__obj,_new,return )

int StringU8_Impl__obj::get_length( ::String this1){
	HX_STACK_FRAME("luxe.utils.unifill._Utf8.StringU8_Impl_","get_length",0x62636d1b,"luxe.utils.unifill._Utf8.StringU8_Impl_.get_length","luxe/utils/unifill/Utf8.hx",288,0xbecfbbba)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(288)
	return this1.length;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(StringU8_Impl__obj,get_length,return )


StringU8_Impl__obj::StringU8_Impl__obj()
{
}

Dynamic StringU8_Impl__obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_new") ) { return _new_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"substr") ) { return substr_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"ofBytes") ) { return ofBytes_dyn(); }
		if (HX_FIELD_EQ(inName,"toBytes") ) { return toBytes_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"fromBytes") ) { return fromBytes_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"fromString") ) { return fromString_dyn(); }
		if (HX_FIELD_EQ(inName,"codeUnitAt") ) { return codeUnitAt_dyn(); }
		if (HX_FIELD_EQ(inName,"get_length") ) { return get_length_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic StringU8_Impl__obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void StringU8_Impl__obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("fromString"),
	HX_CSTRING("ofBytes"),
	HX_CSTRING("fromBytes"),
	HX_CSTRING("codeUnitAt"),
	HX_CSTRING("substr"),
	HX_CSTRING("toString"),
	HX_CSTRING("toBytes"),
	HX_CSTRING("_new"),
	HX_CSTRING("get_length"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(StringU8_Impl__obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(StringU8_Impl__obj::__mClass,"__mClass");
};

#endif

Class StringU8_Impl__obj::__mClass;

void StringU8_Impl__obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("luxe.utils.unifill._Utf8.StringU8_Impl_"), hx::TCanCast< StringU8_Impl__obj> ,sStaticFields,sMemberFields,
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

void StringU8_Impl__obj::__boot()
{
}

} // end namespace luxe
} // end namespace utils
} // end namespace unifill
} // end namespace _Utf8
