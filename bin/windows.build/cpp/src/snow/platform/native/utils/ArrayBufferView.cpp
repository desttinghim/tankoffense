#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_snow_platform_native_utils_ArrayBufferView
#include <snow/platform/native/utils/ArrayBufferView.h>
#endif
#ifndef INCLUDED_snow_platform_native_utils_ByteArray
#include <snow/platform/native/utils/ByteArray.h>
#endif
#ifndef INCLUDED_snow_utils_IDataInput
#include <snow/utils/IDataInput.h>
#endif
#ifndef INCLUDED_snow_utils_IMemoryRange
#include <snow/utils/IMemoryRange.h>
#endif
namespace snow{
namespace platform{
namespace native{
namespace utils{

Void ArrayBufferView_obj::__construct(Dynamic lengthOrBuffer,hx::Null< int >  __o_byteOffset,Dynamic length)
{
HX_STACK_FRAME("snow.platform.native.utils.ArrayBufferView","new",0xe0d2246c,"snow.platform.native.utils.ArrayBufferView.new","snow/platform/native/utils/ArrayBufferView.hx",21,0x52a33fe6)
HX_STACK_THIS(this)
HX_STACK_ARG(lengthOrBuffer,"lengthOrBuffer")
HX_STACK_ARG(__o_byteOffset,"byteOffset")
HX_STACK_ARG(length,"length")
int byteOffset = __o_byteOffset.Default(0);
{
	HX_STACK_LINE(23)
	if ((::Std_obj::is(lengthOrBuffer,hx::ClassOf< ::Int >()))){
		HX_STACK_LINE(25)
		int _g = ::Std_obj::_int(lengthOrBuffer);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(25)
		this->byteLength = _g;
		HX_STACK_LINE(26)
		this->byteOffset = (int)0;
		HX_STACK_LINE(27)
		int _g1 = ::Std_obj::_int(lengthOrBuffer);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(27)
		::snow::platform::native::utils::ByteArray _g2 = ::snow::platform::native::utils::ByteArray_obj::__new(_g1);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(27)
		this->buffer = _g2;
	}
	else{
		HX_STACK_LINE(31)
		::Class _g3 = ::Type_obj::getClass(lengthOrBuffer);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(31)
		if (((_g3 == hx::ClassOf< ::haxe::io::Bytes >()))){
			HX_STACK_LINE(32)
			HX_STACK_DO_THROW(HX_CSTRING("ArrayBuffer (i.e ByteArray) is required"));
		}
		HX_STACK_LINE(35)
		this->buffer = lengthOrBuffer;
		HX_STACK_LINE(37)
		if (((this->buffer == null()))){
			HX_STACK_LINE(38)
			HX_STACK_DO_THROW(HX_CSTRING("Invalid input buffer"));
		}
		HX_STACK_LINE(41)
		this->byteOffset = byteOffset;
		HX_STACK_LINE(43)
		if (((byteOffset > this->buffer->length))){
			HX_STACK_LINE(44)
			HX_STACK_DO_THROW(HX_CSTRING("Invalid starting position"));
		}
		HX_STACK_LINE(47)
		if (((length == null()))){
			HX_STACK_LINE(48)
			this->byteLength = (this->buffer->length - byteOffset);
		}
		else{
			HX_STACK_LINE(50)
			this->byteLength = length;
			HX_STACK_LINE(52)
			if ((((this->byteLength + byteOffset) > this->buffer->length))){
				HX_STACK_LINE(53)
				HX_STACK_DO_THROW(HX_CSTRING("Invalid buffer length"));
			}
		}
	}
	HX_STACK_LINE(59)
	this->buffer->bigEndian = false;
	HX_STACK_LINE(62)
	this->bytes = this->buffer->b;
}
;
	return null();
}

//ArrayBufferView_obj::~ArrayBufferView_obj() { }

Dynamic ArrayBufferView_obj::__CreateEmpty() { return  new ArrayBufferView_obj; }
hx::ObjectPtr< ArrayBufferView_obj > ArrayBufferView_obj::__new(Dynamic lengthOrBuffer,hx::Null< int >  __o_byteOffset,Dynamic length)
{  hx::ObjectPtr< ArrayBufferView_obj > result = new ArrayBufferView_obj();
	result->__construct(lengthOrBuffer,__o_byteOffset,length);
	return result;}

Dynamic ArrayBufferView_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ArrayBufferView_obj > result = new ArrayBufferView_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

hx::Object *ArrayBufferView_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::snow::utils::IMemoryRange_obj)) return operator ::snow::utils::IMemoryRange_obj *();
	return super::__ToInterface(inType);
}

::snow::platform::native::utils::ByteArray ArrayBufferView_obj::getByteBuffer( ){
	HX_STACK_FRAME("snow.platform.native.utils.ArrayBufferView","getByteBuffer",0xb4a7fd6a,"snow.platform.native.utils.ArrayBufferView.getByteBuffer","snow/platform/native/utils/ArrayBufferView.hx",69,0x52a33fe6)
	HX_STACK_THIS(this)
	HX_STACK_LINE(69)
	return this->buffer;
}


HX_DEFINE_DYNAMIC_FUNC0(ArrayBufferView_obj,getByteBuffer,return )

int ArrayBufferView_obj::getLength( ){
	HX_STACK_FRAME("snow.platform.native.utils.ArrayBufferView","getLength",0x6c550328,"snow.platform.native.utils.ArrayBufferView.getLength","snow/platform/native/utils/ArrayBufferView.hx",75,0x52a33fe6)
	HX_STACK_THIS(this)
	HX_STACK_LINE(75)
	return this->byteLength;
}


HX_DEFINE_DYNAMIC_FUNC0(ArrayBufferView_obj,getLength,return )

int ArrayBufferView_obj::getStart( ){
	HX_STACK_FRAME("snow.platform.native.utils.ArrayBufferView","getStart",0x413c0460,"snow.platform.native.utils.ArrayBufferView.getStart","snow/platform/native/utils/ArrayBufferView.hx",81,0x52a33fe6)
	HX_STACK_THIS(this)
	HX_STACK_LINE(81)
	return this->byteOffset;
}


HX_DEFINE_DYNAMIC_FUNC0(ArrayBufferView_obj,getStart,return )

int ArrayBufferView_obj::getInt8( int position){
	HX_STACK_FRAME("snow.platform.native.utils.ArrayBufferView","getInt8",0xa1453e2b,"snow.platform.native.utils.ArrayBufferView.getInt8","snow/platform/native/utils/ArrayBufferView.hx",88,0x52a33fe6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(position,"position")
	HX_STACK_LINE(88)
	return ::__hxcpp_memory_get_byte(this->bytes,(position + this->byteOffset));
}


HX_DEFINE_DYNAMIC_FUNC1(ArrayBufferView_obj,getInt8,return )

Void ArrayBufferView_obj::setInt8( int position,int value){
{
		HX_STACK_FRAME("snow.platform.native.utils.ArrayBufferView","setInt8",0x9446cf37,"snow.platform.native.utils.ArrayBufferView.setInt8","snow/platform/native/utils/ArrayBufferView.hx",99,0x52a33fe6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(position,"position")
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(99)
		::__hxcpp_memory_set_byte(this->bytes,(position + this->byteOffset),value);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(ArrayBufferView_obj,setInt8,(void))

int ArrayBufferView_obj::getUInt8( int position){
	HX_STACK_FRAME("snow.platform.native.utils.ArrayBufferView","getUInt8",0x4ba6df7c,"snow.platform.native.utils.ArrayBufferView.getUInt8","snow/platform/native/utils/ArrayBufferView.hx",107,0x52a33fe6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(position,"position")
	HX_STACK_LINE(110)
	int _g = ::__hxcpp_memory_get_byte(this->bytes,(position + this->byteOffset));		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(110)
	return (int(_g) & int((int)255));
}


HX_DEFINE_DYNAMIC_FUNC1(ArrayBufferView_obj,getUInt8,return )

Void ArrayBufferView_obj::setUInt8( int position,int value){
{
		HX_STACK_FRAME("snow.platform.native.utils.ArrayBufferView","setUInt8",0xfa0438f0,"snow.platform.native.utils.ArrayBufferView.setUInt8","snow/platform/native/utils/ArrayBufferView.hx",121,0x52a33fe6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(position,"position")
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(121)
		::__hxcpp_memory_set_byte(this->bytes,(position + this->byteOffset),value);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(ArrayBufferView_obj,setUInt8,(void))

int ArrayBufferView_obj::getInt16( int position){
	HX_STACK_FRAME("snow.platform.native.utils.ArrayBufferView","getInt16",0x7b512192,"snow.platform.native.utils.ArrayBufferView.getInt16","snow/platform/native/utils/ArrayBufferView.hx",132,0x52a33fe6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(position,"position")
	HX_STACK_LINE(132)
	return ::__hxcpp_memory_get_i16(this->bytes,(position + this->byteOffset));
}


HX_DEFINE_DYNAMIC_FUNC1(ArrayBufferView_obj,getInt16,return )

Void ArrayBufferView_obj::setInt16( int position,int value){
{
		HX_STACK_FRAME("snow.platform.native.utils.ArrayBufferView","setInt16",0x29ae7b06,"snow.platform.native.utils.ArrayBufferView.setInt16","snow/platform/native/utils/ArrayBufferView.hx",143,0x52a33fe6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(position,"position")
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(143)
		::__hxcpp_memory_set_i16(this->bytes,(position + this->byteOffset),value);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(ArrayBufferView_obj,setInt16,(void))

int ArrayBufferView_obj::getUInt16( int position){
	HX_STACK_FRAME("snow.platform.native.utils.ArrayBufferView","getUInt16",0xe65ca721,"snow.platform.native.utils.ArrayBufferView.getUInt16","snow/platform/native/utils/ArrayBufferView.hx",151,0x52a33fe6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(position,"position")
	HX_STACK_LINE(154)
	int _g = ::__hxcpp_memory_get_ui16(this->bytes,(position + this->byteOffset));		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(154)
	return (int(_g) & int((int)65535));
}


HX_DEFINE_DYNAMIC_FUNC1(ArrayBufferView_obj,getUInt16,return )

Void ArrayBufferView_obj::setUInt16( int position,int value){
{
		HX_STACK_FRAME("snow.platform.native.utils.ArrayBufferView","setUInt16",0xc9ad932d,"snow.platform.native.utils.ArrayBufferView.setUInt16","snow/platform/native/utils/ArrayBufferView.hx",165,0x52a33fe6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(position,"position")
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(165)
		::__hxcpp_memory_set_ui16(this->bytes,(position + this->byteOffset),value);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(ArrayBufferView_obj,setUInt16,(void))

int ArrayBufferView_obj::getInt32( int position){
	HX_STACK_FRAME("snow.platform.native.utils.ArrayBufferView","getInt32",0x7b51234c,"snow.platform.native.utils.ArrayBufferView.getInt32","snow/platform/native/utils/ArrayBufferView.hx",176,0x52a33fe6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(position,"position")
	HX_STACK_LINE(176)
	return ::__hxcpp_memory_get_i32(this->bytes,(position + this->byteOffset));
}


HX_DEFINE_DYNAMIC_FUNC1(ArrayBufferView_obj,getInt32,return )

Void ArrayBufferView_obj::setInt32( int position,int value){
{
		HX_STACK_FRAME("snow.platform.native.utils.ArrayBufferView","setInt32",0x29ae7cc0,"snow.platform.native.utils.ArrayBufferView.setInt32","snow/platform/native/utils/ArrayBufferView.hx",187,0x52a33fe6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(position,"position")
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(187)
		::__hxcpp_memory_set_i32(this->bytes,(position + this->byteOffset),value);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(ArrayBufferView_obj,setInt32,(void))

int ArrayBufferView_obj::getUInt32( int position){
	HX_STACK_FRAME("snow.platform.native.utils.ArrayBufferView","getUInt32",0xe65ca8db,"snow.platform.native.utils.ArrayBufferView.getUInt32","snow/platform/native/utils/ArrayBufferView.hx",198,0x52a33fe6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(position,"position")
	HX_STACK_LINE(198)
	return ::__hxcpp_memory_get_ui32(this->bytes,(position + this->byteOffset));
}


HX_DEFINE_DYNAMIC_FUNC1(ArrayBufferView_obj,getUInt32,return )

Void ArrayBufferView_obj::setUInt32( int position,int value){
{
		HX_STACK_FRAME("snow.platform.native.utils.ArrayBufferView","setUInt32",0xc9ad94e7,"snow.platform.native.utils.ArrayBufferView.setUInt32","snow/platform/native/utils/ArrayBufferView.hx",209,0x52a33fe6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(position,"position")
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(209)
		::__hxcpp_memory_set_ui32(this->bytes,(position + this->byteOffset),value);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(ArrayBufferView_obj,setUInt32,(void))

Float ArrayBufferView_obj::getFloat32( int position){
	HX_STACK_FRAME("snow.platform.native.utils.ArrayBufferView","getFloat32",0xc07b9cb9,"snow.platform.native.utils.ArrayBufferView.getFloat32","snow/platform/native/utils/ArrayBufferView.hx",220,0x52a33fe6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(position,"position")
	HX_STACK_LINE(220)
	return ::__hxcpp_memory_get_float(this->bytes,(position + this->byteOffset));
}


HX_DEFINE_DYNAMIC_FUNC1(ArrayBufferView_obj,getFloat32,return )

Void ArrayBufferView_obj::setFloat32( int position,Float value){
{
		HX_STACK_FRAME("snow.platform.native.utils.ArrayBufferView","setFloat32",0xc3f93b2d,"snow.platform.native.utils.ArrayBufferView.setFloat32","snow/platform/native/utils/ArrayBufferView.hx",231,0x52a33fe6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(position,"position")
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(231)
		::__hxcpp_memory_set_float(this->bytes,(position + this->byteOffset),value);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(ArrayBufferView_obj,setFloat32,(void))


ArrayBufferView_obj::ArrayBufferView_obj()
{
}

void ArrayBufferView_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ArrayBufferView);
	HX_MARK_MEMBER_NAME(buffer,"buffer");
	HX_MARK_MEMBER_NAME(byteOffset,"byteOffset");
	HX_MARK_MEMBER_NAME(byteLength,"byteLength");
	HX_MARK_MEMBER_NAME(bytes,"bytes");
	HX_MARK_END_CLASS();
}

void ArrayBufferView_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(buffer,"buffer");
	HX_VISIT_MEMBER_NAME(byteOffset,"byteOffset");
	HX_VISIT_MEMBER_NAME(byteLength,"byteLength");
	HX_VISIT_MEMBER_NAME(bytes,"bytes");
}

Dynamic ArrayBufferView_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"bytes") ) { return bytes; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"buffer") ) { return buffer; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"getInt8") ) { return getInt8_dyn(); }
		if (HX_FIELD_EQ(inName,"setInt8") ) { return setInt8_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getStart") ) { return getStart_dyn(); }
		if (HX_FIELD_EQ(inName,"getUInt8") ) { return getUInt8_dyn(); }
		if (HX_FIELD_EQ(inName,"setUInt8") ) { return setUInt8_dyn(); }
		if (HX_FIELD_EQ(inName,"getInt16") ) { return getInt16_dyn(); }
		if (HX_FIELD_EQ(inName,"setInt16") ) { return setInt16_dyn(); }
		if (HX_FIELD_EQ(inName,"getInt32") ) { return getInt32_dyn(); }
		if (HX_FIELD_EQ(inName,"setInt32") ) { return setInt32_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"getLength") ) { return getLength_dyn(); }
		if (HX_FIELD_EQ(inName,"getUInt16") ) { return getUInt16_dyn(); }
		if (HX_FIELD_EQ(inName,"setUInt16") ) { return setUInt16_dyn(); }
		if (HX_FIELD_EQ(inName,"getUInt32") ) { return getUInt32_dyn(); }
		if (HX_FIELD_EQ(inName,"setUInt32") ) { return setUInt32_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"byteOffset") ) { return byteOffset; }
		if (HX_FIELD_EQ(inName,"byteLength") ) { return byteLength; }
		if (HX_FIELD_EQ(inName,"getFloat32") ) { return getFloat32_dyn(); }
		if (HX_FIELD_EQ(inName,"setFloat32") ) { return setFloat32_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"getByteBuffer") ) { return getByteBuffer_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ArrayBufferView_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"bytes") ) { bytes=inValue.Cast< Array< unsigned char > >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"buffer") ) { buffer=inValue.Cast< ::snow::platform::native::utils::ByteArray >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"byteOffset") ) { byteOffset=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"byteLength") ) { byteLength=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ArrayBufferView_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("buffer"));
	outFields->push(HX_CSTRING("byteOffset"));
	outFields->push(HX_CSTRING("byteLength"));
	outFields->push(HX_CSTRING("bytes"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::snow::platform::native::utils::ByteArray*/ ,(int)offsetof(ArrayBufferView_obj,buffer),HX_CSTRING("buffer")},
	{hx::fsInt,(int)offsetof(ArrayBufferView_obj,byteOffset),HX_CSTRING("byteOffset")},
	{hx::fsInt,(int)offsetof(ArrayBufferView_obj,byteLength),HX_CSTRING("byteLength")},
	{hx::fsObject /*Array< unsigned char >*/ ,(int)offsetof(ArrayBufferView_obj,bytes),HX_CSTRING("bytes")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("buffer"),
	HX_CSTRING("byteOffset"),
	HX_CSTRING("byteLength"),
	HX_CSTRING("bytes"),
	HX_CSTRING("getByteBuffer"),
	HX_CSTRING("getLength"),
	HX_CSTRING("getStart"),
	HX_CSTRING("getInt8"),
	HX_CSTRING("setInt8"),
	HX_CSTRING("getUInt8"),
	HX_CSTRING("setUInt8"),
	HX_CSTRING("getInt16"),
	HX_CSTRING("setInt16"),
	HX_CSTRING("getUInt16"),
	HX_CSTRING("setUInt16"),
	HX_CSTRING("getInt32"),
	HX_CSTRING("setInt32"),
	HX_CSTRING("getUInt32"),
	HX_CSTRING("setUInt32"),
	HX_CSTRING("getFloat32"),
	HX_CSTRING("setFloat32"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ArrayBufferView_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ArrayBufferView_obj::__mClass,"__mClass");
};

#endif

Class ArrayBufferView_obj::__mClass;

void ArrayBufferView_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("snow.platform.native.utils.ArrayBufferView"), hx::TCanCast< ArrayBufferView_obj> ,sStaticFields,sMemberFields,
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

void ArrayBufferView_obj::__boot()
{
}

} // end namespace snow
} // end namespace platform
} // end namespace native
} // end namespace utils
