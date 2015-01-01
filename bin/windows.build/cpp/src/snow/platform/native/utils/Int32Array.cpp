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
#ifndef INCLUDED_snow_platform_native_utils_Int32Array
#include <snow/platform/native/utils/Int32Array.h>
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

Void Int32Array_obj::__construct(Dynamic bufferOrArray,hx::Null< int >  __o_start,Dynamic length)
{
HX_STACK_FRAME("snow.platform.native.utils.Int32Array","new",0xe84c7d61,"snow.platform.native.utils.Int32Array.new","snow/platform/native/utils/Int32Array.hx",11,0xc4bad10d)
HX_STACK_THIS(this)
HX_STACK_ARG(bufferOrArray,"bufferOrArray")
HX_STACK_ARG(__o_start,"start")
HX_STACK_ARG(length,"length")
int start = __o_start.Default(0);
{
	HX_STACK_LINE(13)
	this->BYTES_PER_ELEMENT = (int)4;
	HX_STACK_LINE(15)
	if ((::Std_obj::is(bufferOrArray,hx::ClassOf< ::Int >()))){
		HX_STACK_LINE(17)
		int _g = ::Std_obj::_int(bufferOrArray);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(17)
		int _g1 = (int(_g) << int((int)2));		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(17)
		super::__construct(_g1,null(),null());
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
			super::__construct((int(this->length) << int((int)2)),null(),null());
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
					::__hxcpp_memory_set_i32(this->bytes,(int(i) << int((int)2)),ints->__get((i + start)));
				}
			}
		}
		else{
			HX_STACK_LINE(40)
			if ((::Std_obj::is(bufferOrArray,hx::ClassOf< ::snow::platform::native::utils::Int32Array >()))){
				HX_STACK_LINE(42)
				::snow::platform::native::utils::Int32Array ints = bufferOrArray;		HX_STACK_VAR(ints,"ints");
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
				super::__construct((int(this->length) << int((int)2)),null(),null());
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
						::__hxcpp_memory_set_i32(this->bytes,(int(i) << int((int)2)),ints->__get((i + start)));
					}
				}
			}
			else{
				HX_STACK_LINE(62)
				super::__construct(bufferOrArray,start,(  (((length != null()))) ? Dynamic((int(length) << int((int)2))) : Dynamic(null()) ));
				HX_STACK_LINE(64)
				if (((((int(this->byteLength) & int((int)3))) > (int)0))){
					HX_STACK_LINE(65)
					HX_STACK_DO_THROW(HX_CSTRING("Invalid array size"));
				}
				HX_STACK_LINE(68)
				this->length = (int(this->byteLength) >> int((int)2));
				HX_STACK_LINE(70)
				if ((((int(this->length) << int((int)2)) != this->byteLength))){
					HX_STACK_LINE(71)
					HX_STACK_DO_THROW(HX_CSTRING("Invalid length multiple"));
				}
			}
		}
	}
}
;
	return null();
}

//Int32Array_obj::~Int32Array_obj() { }

Dynamic Int32Array_obj::__CreateEmpty() { return  new Int32Array_obj; }
hx::ObjectPtr< Int32Array_obj > Int32Array_obj::__new(Dynamic bufferOrArray,hx::Null< int >  __o_start,Dynamic length)
{  hx::ObjectPtr< Int32Array_obj > result = new Int32Array_obj();
	result->__construct(bufferOrArray,__o_start,length);
	return result;}

Dynamic Int32Array_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Int32Array_obj > result = new Int32Array_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

Void Int32Array_obj::set( Dynamic bufferOrArray,hx::Null< int >  __o_offset){
int offset = __o_offset.Default(0);
	HX_STACK_FRAME("snow.platform.native.utils.Int32Array","set",0xe85048a3,"snow.platform.native.utils.Int32Array.set","snow/platform/native/utils/Int32Array.hx",80,0xc4bad10d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(bufferOrArray,"bufferOrArray")
	HX_STACK_ARG(offset,"offset")
{
		HX_STACK_LINE(80)
		if ((::Std_obj::is(bufferOrArray,hx::ClassOf< Array<int> >()))){
			HX_STACK_LINE(82)
			Array< int > ints = bufferOrArray;		HX_STACK_VAR(ints,"ints");
			HX_STACK_LINE(84)
			{
				HX_STACK_LINE(84)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(84)
				int _g = ints->length;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(84)
				while((true)){
					HX_STACK_LINE(84)
					if ((!(((_g1 < _g))))){
						HX_STACK_LINE(84)
						break;
					}
					HX_STACK_LINE(84)
					int i = (_g1)++;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(85)
					::__hxcpp_memory_set_i32(this->bytes,(((int((i + offset)) << int((int)2))) + this->byteOffset),ints->__get(i));
				}
			}
		}
		else{
			HX_STACK_LINE(88)
			if ((::Std_obj::is(bufferOrArray,hx::ClassOf< ::snow::platform::native::utils::Int32Array >()))){
				HX_STACK_LINE(90)
				::snow::platform::native::utils::Int32Array ints = bufferOrArray;		HX_STACK_VAR(ints,"ints");
				HX_STACK_LINE(92)
				{
					HX_STACK_LINE(92)
					int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(92)
					int _g = ints->length;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(92)
					while((true)){
						HX_STACK_LINE(92)
						if ((!(((_g1 < _g))))){
							HX_STACK_LINE(92)
							break;
						}
						HX_STACK_LINE(92)
						int i = (_g1)++;		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(93)
						::__hxcpp_memory_set_i32(this->bytes,(((int((i + offset)) << int((int)2))) + this->byteOffset),ints->__get(i));
					}
				}
			}
			else{
				HX_STACK_LINE(98)
				HX_STACK_DO_THROW(HX_CSTRING("Invalid input buffer"));
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Int32Array_obj,set,(void))

::snow::platform::native::utils::Int32Array Int32Array_obj::subarray( int start,Dynamic end){
	HX_STACK_FRAME("snow.platform.native.utils.Int32Array","subarray",0x6050e378,"snow.platform.native.utils.Int32Array.subarray","snow/platform/native/utils/Int32Array.hx",104,0xc4bad10d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(start,"start")
	HX_STACK_ARG(end,"end")
	HX_STACK_LINE(106)
	if (((end == null()))){
		HX_STACK_LINE(106)
		end = this->length;
	}
	else{
		HX_STACK_LINE(106)
		end = end;
	}
	HX_STACK_LINE(107)
	return ::snow::platform::native::utils::Int32Array_obj::__new(this->buffer,(int(start) << int((int)2)),(end - start));
}


HX_DEFINE_DYNAMIC_FUNC2(Int32Array_obj,subarray,return )

int Int32Array_obj::__get( int index){
	HX_STACK_FRAME("snow.platform.native.utils.Int32Array","__get",0x4b6990b7,"snow.platform.native.utils.Int32Array.__get","snow/platform/native/utils/Int32Array.hx",111,0xc4bad10d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(111)
	return ::__hxcpp_memory_get_i32(this->bytes,(((int(index) << int((int)2))) + this->byteOffset));
}


HX_DEFINE_DYNAMIC_FUNC1(Int32Array_obj,__get,return )

Void Int32Array_obj::__set( int index,int value){
{
		HX_STACK_FRAME("snow.platform.native.utils.Int32Array","__set",0x4b72abc3,"snow.platform.native.utils.Int32Array.__set","snow/platform/native/utils/Int32Array.hx",112,0xc4bad10d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(index,"index")
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(112)
		::__hxcpp_memory_set_i32(this->bytes,(((int(index) << int((int)2))) + this->byteOffset),value);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Int32Array_obj,__set,(void))


Int32Array_obj::Int32Array_obj()
{
}

Dynamic Int32Array_obj::__Field(const ::String &inName,bool inCallProp)
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

Dynamic Int32Array_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
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

void Int32Array_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("BYTES_PER_ELEMENT"));
	outFields->push(HX_CSTRING("length"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(Int32Array_obj,BYTES_PER_ELEMENT),HX_CSTRING("BYTES_PER_ELEMENT")},
	{hx::fsInt,(int)offsetof(Int32Array_obj,length),HX_CSTRING("length")},
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
	HX_MARK_MEMBER_NAME(Int32Array_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Int32Array_obj::__mClass,"__mClass");
};

#endif

Class Int32Array_obj::__mClass;

void Int32Array_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("snow.platform.native.utils.Int32Array"), hx::TCanCast< Int32Array_obj> ,sStaticFields,sMemberFields,
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

void Int32Array_obj::__boot()
{
}

} // end namespace snow
} // end namespace platform
} // end namespace native
} // end namespace utils
