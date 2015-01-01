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
#ifndef INCLUDED_snow_platform_native_utils_Float32Array
#include <snow/platform/native/utils/Float32Array.h>
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

Void Float32Array_obj::__construct(Dynamic bufferOrArray,hx::Null< int >  __o_start,Dynamic length)
{
HX_STACK_FRAME("snow.platform.native.utils.Float32Array","new",0xe0f6c2d4,"snow.platform.native.utils.Float32Array.new","snow/platform/native/utils/Float32Array.hx",9,0x1a556e7a)
HX_STACK_THIS(this)
HX_STACK_ARG(bufferOrArray,"bufferOrArray")
HX_STACK_ARG(__o_start,"start")
HX_STACK_ARG(length,"length")
int start = __o_start.Default(0);
{
	HX_STACK_LINE(11)
	this->BYTES_PER_ELEMENT = (int)4;
	HX_STACK_LINE(13)
	if ((::Std_obj::is(bufferOrArray,hx::ClassOf< ::Int >()))){
		HX_STACK_LINE(15)
		int _g = ::Std_obj::_int(bufferOrArray);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(15)
		int _g1 = (int(_g) << int((int)2));		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(15)
		super::__construct(_g1,null(),null());
		HX_STACK_LINE(16)
		this->length = bufferOrArray;
	}
	else{
		HX_STACK_LINE(18)
		if ((::Std_obj::is(bufferOrArray,hx::ClassOf< Array<int> >()))){
			HX_STACK_LINE(20)
			Array< Float > floats = bufferOrArray;		HX_STACK_VAR(floats,"floats");
			HX_STACK_LINE(21)
			if (((length != null()))){
				HX_STACK_LINE(21)
				this->length = length;
			}
			else{
				HX_STACK_LINE(21)
				this->length = (floats->length - start);
			}
			HX_STACK_LINE(22)
			super::__construct((int(this->length) << int((int)2)),null(),null());
			HX_STACK_LINE(28)
			{
				HX_STACK_LINE(28)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(28)
				int _g = this->length;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(28)
				while((true)){
					HX_STACK_LINE(28)
					if ((!(((_g1 < _g))))){
						HX_STACK_LINE(28)
						break;
					}
					HX_STACK_LINE(28)
					int i = (_g1)++;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(31)
					::__hxcpp_memory_set_float(this->bytes,(int(i) << int((int)2)),floats->__get((i + start)));
				}
			}
		}
		else{
			HX_STACK_LINE(38)
			if ((::Std_obj::is(bufferOrArray,hx::ClassOf< ::snow::platform::native::utils::Float32Array >()))){
				HX_STACK_LINE(40)
				::snow::platform::native::utils::Float32Array floats = bufferOrArray;		HX_STACK_VAR(floats,"floats");
				HX_STACK_LINE(41)
				if (((length != null()))){
					HX_STACK_LINE(41)
					this->length = length;
				}
				else{
					HX_STACK_LINE(41)
					this->length = (floats->length - start);
				}
				HX_STACK_LINE(42)
				super::__construct((int(this->length) << int((int)2)),null(),null());
				HX_STACK_LINE(48)
				{
					HX_STACK_LINE(48)
					int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(48)
					int _g = this->length;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(48)
					while((true)){
						HX_STACK_LINE(48)
						if ((!(((_g1 < _g))))){
							HX_STACK_LINE(48)
							break;
						}
						HX_STACK_LINE(48)
						int i = (_g1)++;		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(51)
						::__hxcpp_memory_set_float(this->bytes,(int(i) << int((int)2)),floats->__get((i + start)));
					}
				}
			}
			else{
				HX_STACK_LINE(60)
				super::__construct(bufferOrArray,start,(  (((length != null()))) ? Dynamic((int(length) << int((int)2))) : Dynamic(null()) ));
				HX_STACK_LINE(62)
				if (((((int(this->byteLength) & int((int)3))) > (int)0))){
					HX_STACK_LINE(63)
					HX_STACK_DO_THROW(HX_CSTRING("Invalid array size"));
				}
				HX_STACK_LINE(66)
				this->length = (int(this->byteLength) >> int((int)2));
				HX_STACK_LINE(68)
				if ((((int(this->length) << int((int)2)) != this->byteLength))){
					HX_STACK_LINE(69)
					HX_STACK_DO_THROW(HX_CSTRING("Invalid length multiple"));
				}
			}
		}
	}
}
;
	return null();
}

//Float32Array_obj::~Float32Array_obj() { }

Dynamic Float32Array_obj::__CreateEmpty() { return  new Float32Array_obj; }
hx::ObjectPtr< Float32Array_obj > Float32Array_obj::__new(Dynamic bufferOrArray,hx::Null< int >  __o_start,Dynamic length)
{  hx::ObjectPtr< Float32Array_obj > result = new Float32Array_obj();
	result->__construct(bufferOrArray,__o_start,length);
	return result;}

Dynamic Float32Array_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Float32Array_obj > result = new Float32Array_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

Void Float32Array_obj::set( Dynamic bufferOrArray,hx::Null< int >  __o_offset){
int offset = __o_offset.Default(0);
	HX_STACK_FRAME("snow.platform.native.utils.Float32Array","set",0xe0fa8e16,"snow.platform.native.utils.Float32Array.set","snow/platform/native/utils/Float32Array.hx",78,0x1a556e7a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(bufferOrArray,"bufferOrArray")
	HX_STACK_ARG(offset,"offset")
{
		HX_STACK_LINE(78)
		if ((::Std_obj::is(bufferOrArray,hx::ClassOf< Array<int> >()))){
			HX_STACK_LINE(80)
			Array< Float > floats = bufferOrArray;		HX_STACK_VAR(floats,"floats");
			HX_STACK_LINE(82)
			{
				HX_STACK_LINE(82)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(82)
				int _g = floats->length;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(82)
				while((true)){
					HX_STACK_LINE(82)
					if ((!(((_g1 < _g))))){
						HX_STACK_LINE(82)
						break;
					}
					HX_STACK_LINE(82)
					int i = (_g1)++;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(83)
					::__hxcpp_memory_set_float(this->bytes,(((int((i + offset)) << int((int)2))) + this->byteOffset),floats->__get(i));
				}
			}
		}
		else{
			HX_STACK_LINE(86)
			if ((::Std_obj::is(bufferOrArray,hx::ClassOf< ::snow::platform::native::utils::Float32Array >()))){
				HX_STACK_LINE(88)
				::snow::platform::native::utils::Float32Array floats = bufferOrArray;		HX_STACK_VAR(floats,"floats");
				HX_STACK_LINE(90)
				{
					HX_STACK_LINE(90)
					int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(90)
					int _g = floats->length;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(90)
					while((true)){
						HX_STACK_LINE(90)
						if ((!(((_g1 < _g))))){
							HX_STACK_LINE(90)
							break;
						}
						HX_STACK_LINE(90)
						int i = (_g1)++;		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(91)
						::__hxcpp_memory_set_float(this->bytes,(((int((i + offset)) << int((int)2))) + this->byteOffset),floats->__get(i));
					}
				}
			}
			else{
				HX_STACK_LINE(96)
				HX_STACK_DO_THROW(HX_CSTRING("Invalid input buffer"));
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Float32Array_obj,set,(void))

::snow::platform::native::utils::Float32Array Float32Array_obj::subarray( int start,Dynamic end){
	HX_STACK_FRAME("snow.platform.native.utils.Float32Array","subarray",0x5a56fd25,"snow.platform.native.utils.Float32Array.subarray","snow/platform/native/utils/Float32Array.hx",102,0x1a556e7a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(start,"start")
	HX_STACK_ARG(end,"end")
	HX_STACK_LINE(104)
	if (((end == null()))){
		HX_STACK_LINE(104)
		end = this->length;
	}
	else{
		HX_STACK_LINE(104)
		end = end;
	}
	HX_STACK_LINE(105)
	return ::snow::platform::native::utils::Float32Array_obj::__new(this->buffer,(int(start) << int((int)2)),(end - start));
}


HX_DEFINE_DYNAMIC_FUNC2(Float32Array_obj,subarray,return )

Float Float32Array_obj::__get_d( int index){
	HX_STACK_FRAME("snow.platform.native.utils.Float32Array","__get_d",0x983e3a8f,"snow.platform.native.utils.Float32Array.__get_d","snow/platform/native/utils/Float32Array.hx",111,0x1a556e7a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(111)
	return ::__hxcpp_memory_get_float(this->bytes,(((int(index) << int((int)2))) + this->byteOffset));
}


HX_DEFINE_DYNAMIC_FUNC1(Float32Array_obj,__get_d,return )

Void Float32Array_obj::__set_d( int index,Float value){
{
		HX_STACK_FRAME("snow.platform.native.utils.Float32Array","__set_d",0x810d309b,"snow.platform.native.utils.Float32Array.__set_d","snow/platform/native/utils/Float32Array.hx",119,0x1a556e7a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(index,"index")
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(119)
		::__hxcpp_memory_set_float(this->bytes,(((int(index) << int((int)2))) + this->byteOffset),value);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Float32Array_obj,__set_d,(void))

Float Float32Array_obj::__get( int index){
	HX_STACK_FRAME("snow.platform.native.utils.Float32Array","__get",0x774658ea,"snow.platform.native.utils.Float32Array.__get","snow/platform/native/utils/Float32Array.hx",129,0x1a556e7a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(129)
	return ::__hxcpp_memory_get_float(this->bytes,(((int(index) << int((int)2))) + this->byteOffset));
}


HX_DEFINE_DYNAMIC_FUNC1(Float32Array_obj,__get,return )

Void Float32Array_obj::__set( int index,Float value){
{
		HX_STACK_FRAME("snow.platform.native.utils.Float32Array","__set",0x774f73f6,"snow.platform.native.utils.Float32Array.__set","snow/platform/native/utils/Float32Array.hx",133,0x1a556e7a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(index,"index")
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(133)
		::__hxcpp_memory_set_float(this->bytes,(((int(index) << int((int)2))) + this->byteOffset),value);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Float32Array_obj,__set,(void))


Float32Array_obj::Float32Array_obj()
{
}

Dynamic Float32Array_obj::__Field(const ::String &inName,bool inCallProp)
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
	case 7:
		if (HX_FIELD_EQ(inName,"__get_d") ) { return __get_d_dyn(); }
		if (HX_FIELD_EQ(inName,"__set_d") ) { return __set_d_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"subarray") ) { return subarray_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"BYTES_PER_ELEMENT") ) { return BYTES_PER_ELEMENT; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Float32Array_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
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

void Float32Array_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("BYTES_PER_ELEMENT"));
	outFields->push(HX_CSTRING("length"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(Float32Array_obj,BYTES_PER_ELEMENT),HX_CSTRING("BYTES_PER_ELEMENT")},
	{hx::fsInt,(int)offsetof(Float32Array_obj,length),HX_CSTRING("length")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("BYTES_PER_ELEMENT"),
	HX_CSTRING("length"),
	HX_CSTRING("set"),
	HX_CSTRING("subarray"),
	HX_CSTRING("__get_d"),
	HX_CSTRING("__set_d"),
	HX_CSTRING("__get"),
	HX_CSTRING("__set"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Float32Array_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Float32Array_obj::__mClass,"__mClass");
};

#endif

Class Float32Array_obj::__mClass;

void Float32Array_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("snow.platform.native.utils.Float32Array"), hx::TCanCast< Float32Array_obj> ,sStaticFields,sMemberFields,
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

void Float32Array_obj::__boot()
{
}

} // end namespace snow
} // end namespace platform
} // end namespace native
} // end namespace utils
