#ifndef INCLUDED_snow_platform_native_utils_ArrayBufferView
#define INCLUDED_snow_platform_native_utils_ArrayBufferView

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <snow/utils/IMemoryRange.h>
HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS4(snow,platform,native,utils,ArrayBufferView)
HX_DECLARE_CLASS4(snow,platform,native,utils,ByteArray)
HX_DECLARE_CLASS2(snow,utils,IDataInput)
HX_DECLARE_CLASS2(snow,utils,IMemoryRange)
namespace snow{
namespace platform{
namespace native{
namespace utils{


class HXCPP_CLASS_ATTRIBUTES  ArrayBufferView_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ArrayBufferView_obj OBJ_;
		ArrayBufferView_obj();
		Void __construct(Dynamic lengthOrBuffer,hx::Null< int >  __o_byteOffset,Dynamic length);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< ArrayBufferView_obj > __new(Dynamic lengthOrBuffer,hx::Null< int >  __o_byteOffset,Dynamic length);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ArrayBufferView_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		inline operator ::snow::utils::IMemoryRange_obj *()
			{ return new ::snow::utils::IMemoryRange_delegate_< ArrayBufferView_obj >(this); }
		hx::Object *__ToInterface(const hx::type_info &inType);
		::String __ToString() const { return HX_CSTRING("ArrayBufferView"); }

		::snow::platform::native::utils::ByteArray buffer;
		int byteOffset;
		int byteLength;
		Array< unsigned char > bytes;
		virtual ::snow::platform::native::utils::ByteArray getByteBuffer( );
		Dynamic getByteBuffer_dyn();

		virtual int getLength( );
		Dynamic getLength_dyn();

		virtual int getStart( );
		Dynamic getStart_dyn();

		virtual int getInt8( int position);
		Dynamic getInt8_dyn();

		virtual Void setInt8( int position,int value);
		Dynamic setInt8_dyn();

		virtual int getUInt8( int position);
		Dynamic getUInt8_dyn();

		virtual Void setUInt8( int position,int value);
		Dynamic setUInt8_dyn();

		virtual int getInt16( int position);
		Dynamic getInt16_dyn();

		virtual Void setInt16( int position,int value);
		Dynamic setInt16_dyn();

		virtual int getUInt16( int position);
		Dynamic getUInt16_dyn();

		virtual Void setUInt16( int position,int value);
		Dynamic setUInt16_dyn();

		virtual int getInt32( int position);
		Dynamic getInt32_dyn();

		virtual Void setInt32( int position,int value);
		Dynamic setInt32_dyn();

		virtual int getUInt32( int position);
		Dynamic getUInt32_dyn();

		virtual Void setUInt32( int position,int value);
		Dynamic setUInt32_dyn();

		virtual Float getFloat32( int position);
		Dynamic getFloat32_dyn();

		virtual Void setFloat32( int position,Float value);
		Dynamic setFloat32_dyn();

};

} // end namespace snow
} // end namespace platform
} // end namespace native
} // end namespace utils

#endif /* INCLUDED_snow_platform_native_utils_ArrayBufferView */ 
