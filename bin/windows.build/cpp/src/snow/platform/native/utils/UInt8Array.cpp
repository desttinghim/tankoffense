#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
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
#ifndef INCLUDED_snow_platform_native_utils_UInt8Array
#include <snow/platform/native/utils/UInt8Array.h>
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

Void UInt8Array_obj::__construct(Dynamic bufferOrArray,hx::Null< int >  __o_start,Dynamic length)
{
HX_STACK_FRAME("snow.platform.native.utils.UInt8Array","new",0xa355bb31,"snow.platform.native.utils.UInt8Array.new","snow/platform/native/utils/UInt8Array.hx",11,0x48703d3d)
HX_STACK_THIS(this)
HX_STACK_ARG(bufferOrArray,"bufferOrArray")
HX_STACK_ARG(__o_start,"start")
HX_STACK_ARG(length,"length")
int start = __o_start.Default(0);
{
	HX_STACK_LINE(13)
	this->BYTES_PER_ELEMENT = (int)1;
	HX_STACK_LINE(15)
	if ((::Std_obj::is(bufferOrArray,hx::ClassOf< ::Int >()))){
		HX_STACK_LINE(17)
		int _g = ::Std_obj::_int(bufferOrArray);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(17)
		super::__construct(_g,null(),null());
		HX_STACK_LINE(18)
		this->length = bufferOrArray;
	}
	else{
		HX_STACK_LINE(20)
		if ((::Std_obj::is(bufferOrArray,hx::ClassOf< Array<int> >()))){
			HX_STACK_LINE(22)
			Array< int > ints = bufferOrArray;		HX_STACK_VAR(ints,"ints");
			HX_STACK_LINE(23)
			if (((length != null()))){
				HX_STACK_LINE(23)
				this->length = length;
			}
			else{
				HX_STACK_LINE(23)
				this->length = (ints->length - start);
			}
			HX_STACK_LINE(24)
			super::__construct(this->length,null(),null());
			HX_STACK_LINE(30)
			{
				HX_STACK_LINE(30)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(30)
				int _g = this->length;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(30)
				while((true)){
					HX_STACK_LINE(30)
					if ((!(((_g1 < _g))))){
						HX_STACK_LINE(30)
						break;
					}
					HX_STACK_LINE(30)
					int i = (_g1)++;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(33)
					::__hxcpp_memory_set_byte(this->bytes,i,ints->__get((i + start)));
				}
			}
		}
		else{
			HX_STACK_LINE(40)
			if ((::Std_obj::is(bufferOrArray,hx::ClassOf< ::snow::platform::native::utils::UInt8Array >()))){
				HX_STACK_LINE(42)
				::snow::platform::native::utils::UInt8Array ints = bufferOrArray;		HX_STACK_VAR(ints,"ints");
				HX_STACK_LINE(43)
				if (((length != null()))){
					HX_STACK_LINE(43)
					this->length = length;
				}
				else{
					HX_STACK_LINE(43)
					this->length = (ints->length - start);
				}
				HX_STACK_LINE(44)
				super::__construct(this->length,null(),null());
				HX_STACK_LINE(50)
				{
					HX_STACK_LINE(50)
					int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(50)
					int _g = this->length;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(50)
					while((true)){
						HX_STACK_LINE(50)
						if ((!(((_g1 < _g))))){
							HX_STACK_LINE(50)
							break;
						}
						HX_STACK_LINE(50)
						int i = (_g1)++;		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(53)
						::__hxcpp_memory_set_byte(this->bytes,i,ints->__get((i + start)));
					}
				}
			}
			else{
				HX_STACK_LINE(62)
				super::__construct(bufferOrArray,start,length);
				HX_STACK_LINE(63)
				this->length = this->byteLength;
			}
		}
	}
}
;
	return null();
}

//UInt8Array_obj::~UInt8Array_obj() { }

Dynamic UInt8Array_obj::__CreateEmpty() { return  new UInt8Array_obj; }
hx::ObjectPtr< UInt8Array_obj > UInt8Array_obj::__new(Dynamic bufferOrArray,hx::Null< int >  __o_start,Dynamic length)
{  hx::ObjectPtr< UInt8Array_obj > result = new UInt8Array_obj();
	result->__construct(bufferOrArray,__o_start,length);
	return result;}

Dynamic UInt8Array_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< UInt8Array_obj > result = new UInt8Array_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

Void UInt8Array_obj::set( Dynamic bufferOrArray,hx::Null< int >  __o_offset){
int offset = __o_offset.Default(0);
	HX_STACK_FRAME("snow.platform.native.utils.UInt8Array","set",0xa3598673,"snow.platform.native.utils.UInt8Array.set","snow/platform/native/utils/UInt8Array.hx",71,0x48703d3d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(bufferOrArray,"bufferOrArray")
	HX_STACK_ARG(offset,"offset")
{
		HX_STACK_LINE(71)
		if ((::Std_obj::is(bufferOrArray,hx::ClassOf< Array<int> >()))){
			HX_STACK_LINE(73)
			Array< int > ints = bufferOrArray;		HX_STACK_VAR(ints,"ints");
			HX_STACK_LINE(75)
			{
				HX_STACK_LINE(75)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(75)
				int _g = ints->length;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(75)
				while((true)){
					HX_STACK_LINE(75)
					if ((!(((_g1 < _g))))){
						HX_STACK_LINE(75)
						break;
					}
					HX_STACK_LINE(75)
					int i = (_g1)++;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(76)
					::__hxcpp_memory_set_byte(this->bytes,((i + offset) + this->byteOffset),ints->__get(i));
				}
			}
		}
		else{
			HX_STACK_LINE(79)
			if ((::Std_obj::is(bufferOrArray,hx::ClassOf< ::snow::platform::native::utils::UInt8Array >()))){
				HX_STACK_LINE(81)
				::snow::platform::native::utils::UInt8Array ints = bufferOrArray;		HX_STACK_VAR(ints,"ints");
				HX_STACK_LINE(83)
				{
					HX_STACK_LINE(83)
					int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(83)
					int _g = ints->length;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(83)
					while((true)){
						HX_STACK_LINE(83)
						if ((!(((_g1 < _g))))){
							HX_STACK_LINE(83)
							break;
						}
						HX_STACK_LINE(83)
						int i = (_g1)++;		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(84)
						::__hxcpp_memory_set_byte(this->bytes,((i + offset) + this->byteOffset),ints->__get(i));
					}
				}
			}
			else{
				HX_STACK_LINE(89)
				HX_STACK_DO_THROW(HX_CSTRING("Invalid input buffer"));
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(UInt8Array_obj,set,(void))

::snow::platform::native::utils::UInt8Array UInt8Array_obj::subarray( int start,Dynamic end){
	HX_STACK_FRAME("snow.platform.native.utils.UInt8Array","subarray",0xf3e593a8,"snow.platform.native.utils.UInt8Array.subarray","snow/platform/native/utils/UInt8Array.hx",95,0x48703d3d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(start,"start")
	HX_STACK_ARG(end,"end")
	HX_STACK_LINE(97)
	if (((end == null()))){
		HX_STACK_LINE(97)
		end = this->length;
	}
	else{
		HX_STACK_LINE(97)
		end = end;
	}
	HX_STACK_LINE(98)
	return ::snow::platform::native::utils::UInt8Array_obj::__new(this->buffer,start,(end - start));
}


HX_DEFINE_DYNAMIC_FUNC2(UInt8Array_obj,subarray,return )

int UInt8Array_obj::__get( int index){
	HX_STACK_FRAME("snow.platform.native.utils.UInt8Array","__get",0xc999e287,"snow.platform.native.utils.UInt8Array.__get","snow/platform/native/utils/UInt8Array.hx",102,0x48703d3d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(102)
	int _g = ::__hxcpp_memory_get_byte(this->bytes,(index + this->byteOffset));		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(102)
	return (int(_g) & int((int)255));
}


HX_DEFINE_DYNAMIC_FUNC1(UInt8Array_obj,__get,return )

Void UInt8Array_obj::__set( int index,int value){
{
		HX_STACK_FRAME("snow.platform.native.utils.UInt8Array","__set",0xc9a2fd93,"snow.platform.native.utils.UInt8Array.__set","snow/platform/native/utils/UInt8Array.hx",103,0x48703d3d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(index,"index")
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(103)
		::__hxcpp_memory_set_byte(this->bytes,(index + this->byteOffset),value);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(UInt8Array_obj,__set,(void))


UInt8Array_obj::UInt8Array_obj()
{
}

Dynamic UInt8Array_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"set") ) { return set_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"__get") ) { return __get_dyn(); }
		if (HX_FIELD_EQ(inName,"__set") ) { return __set_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { return length; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"subarray") ) { return subarray_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"BYTES_PER_ELEMENT") ) { return BYTES_PER_ELEMENT; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic UInt8Array_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { length=inValue.Cast< int >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"BYTES_PER_ELEMENT") ) { BYTES_PER_ELEMENT=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void UInt8Array_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("BYTES_PER_ELEMENT"));
	outFields->push(HX_CSTRING("length"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(UInt8Array_obj,BYTES_PER_ELEMENT),HX_CSTRING("BYTES_PER_ELEMENT")},
	{hx::fsInt,(int)offsetof(UInt8Array_obj,length),HX_CSTRING("length")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("BYTES_PER_ELEMENT"),
	HX_CSTRING("length"),
	HX_CSTRING("set"),
	HX_CSTRING("subarray"),
	HX_CSTRING("__get"),
	HX_CSTRING("__set"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(UInt8Array_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(UInt8Array_obj::__mClass,"__mClass");
};

#endif

Class UInt8Array_obj::__mClass;

void UInt8Array_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("snow.platform.native.utils.UInt8Array"), hx::TCanCast< UInt8Array_obj> ,sStaticFields,sMemberFields,
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

void UInt8Array_obj::__boot()
{
}

} // end namespace snow
} // end namespace platform
} // end namespace native
} // end namespace utils
