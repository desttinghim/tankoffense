#ifndef INCLUDED_snow_platform_native_utils_Int32Array
#define INCLUDED_snow_platform_native_utils_Int32Array

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <snow/platform/native/utils/ArrayBufferView.h>
HX_DECLARE_CLASS4(snow,platform,native,utils,ArrayBufferView)
HX_DECLARE_CLASS4(snow,platform,native,utils,Int32Array)
HX_DECLARE_CLASS2(snow,utils,IMemoryRange)
namespace snow{
namespace platform{
namespace native{
namespace utils{


class HXCPP_CLASS_ATTRIBUTES  Int32Array_obj : public ::snow::platform::native::utils::ArrayBufferView_obj{
	public:
		typedef ::snow::platform::native::utils::ArrayBufferView_obj super;
		typedef Int32Array_obj OBJ_;
		Int32Array_obj();
		Void __construct(Dynamic bufferOrArray,hx::Null< int >  __o_start,Dynamic length);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Int32Array_obj > __new(Dynamic bufferOrArray,hx::Null< int >  __o_start,Dynamic length);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Int32Array_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("Int32Array"); }

		typedef int __array_access;
		int BYTES_PER_ELEMENT;
		int length;
		virtual Void set( Dynamic bufferOrArray,hx::Null< int >  offset);
		Dynamic set_dyn();

		virtual ::snow::platform::native::utils::Int32Array subarray( int start,Dynamic end);
		Dynamic subarray_dyn();

		virtual int __get( int index);
		Dynamic __get_dyn();

		virtual Void __set( int index,int value);
		Dynamic __set_dyn();

};

} // end namespace snow
} // end namespace platform
} // end namespace native
} // end namespace utils

#endif /* INCLUDED_snow_platform_native_utils_Int32Array */ 
