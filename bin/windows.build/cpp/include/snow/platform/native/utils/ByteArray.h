#ifndef INCLUDED_snow_platform_native_utils_ByteArray
#define INCLUDED_snow_platform_native_utils_ByteArray

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <haxe/io/Bytes.h>
#include <snow/utils/IMemoryRange.h>
#include <snow/utils/IDataInput.h>
HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS4(snow,platform,native,utils,ByteArray)
HX_DECLARE_CLASS4(snow,platform,native,utils,Compression)
HX_DECLARE_CLASS2(snow,utils,IDataInput)
HX_DECLARE_CLASS2(snow,utils,IMemoryRange)
HX_DECLARE_CLASS2(snow,utils,Libs)
namespace snow{
namespace platform{
namespace native{
namespace utils{


class HXCPP_CLASS_ATTRIBUTES  ByteArray_obj : public ::haxe::io::Bytes_obj{
	public:
		typedef ::haxe::io::Bytes_obj super;
		typedef ByteArray_obj OBJ_;
		ByteArray_obj();
		Void __construct(hx::Null< int >  __o_inSize);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< ByteArray_obj > __new(hx::Null< int >  __o_inSize);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ByteArray_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		inline operator ::snow::utils::IDataInput_obj *()
			{ return new ::snow::utils::IDataInput_delegate_< ByteArray_obj >(this); }
		inline operator ::snow::utils::IMemoryRange_obj *()
			{ return new ::snow::utils::IMemoryRange_delegate_< ByteArray_obj >(this); }
		hx::Object *__ToInterface(const hx::type_info &inType);
		static void __init__();

		::String __ToString() const { return HX_CSTRING("ByteArray"); }

		typedef int __array_access;
		bool bigEndian;
		int bytesAvailable;
		int position;
		int byteLength;
		virtual int __get( int pos);
		Dynamic __get_dyn();

		virtual Void __set( int pos,int v);
		Dynamic __set_dyn();

		virtual ::String asString( );
		Dynamic asString_dyn();

		virtual Void checkData( int inLength);
		Dynamic checkData_dyn();

		virtual Void clear( );
		Dynamic clear_dyn();

		virtual Void compress( ::snow::platform::native::utils::Compression algorithm);
		Dynamic compress_dyn();

		virtual Void uncompress( ::snow::platform::native::utils::Compression algorithm);
		Dynamic uncompress_dyn();

		virtual Void deflate( );
		Dynamic deflate_dyn();

		virtual Void inflate( );
		Dynamic inflate_dyn();

		virtual int getLength( );
		Dynamic getLength_dyn();

		virtual ::snow::platform::native::utils::ByteArray getByteBuffer( );
		Dynamic getByteBuffer_dyn();

		virtual int getStart( );
		Dynamic getStart_dyn();

		virtual Void setLength( int inLength);
		Dynamic setLength_dyn();

		virtual ::snow::platform::native::utils::ByteArray slice( int inBegin,Dynamic inEnd);
		Dynamic slice_dyn();

		virtual bool readBoolean( );
		Dynamic readBoolean_dyn();

		virtual int readByte( );
		Dynamic readByte_dyn();

		virtual Void readBytes( ::snow::platform::native::utils::ByteArray outData,hx::Null< int >  inOffset,hx::Null< int >  inLen);
		Dynamic readBytes_dyn();

		virtual Float readDouble( );
		Dynamic readDouble_dyn();

		virtual Float readFloat( );
		Dynamic readFloat_dyn();

		virtual int readInt( );
		Dynamic readInt_dyn();

		virtual ::String readMultiByte( int inLen,::String charSet);
		Dynamic readMultiByte_dyn();

		virtual int readShort( );
		Dynamic readShort_dyn();

		virtual int readUnsignedByte( );
		Dynamic readUnsignedByte_dyn();

		virtual int readUnsignedInt( );
		Dynamic readUnsignedInt_dyn();

		virtual int readUnsignedShort( );
		Dynamic readUnsignedShort_dyn();

		virtual ::String readUTF( );
		Dynamic readUTF_dyn();

		virtual ::String readUTFBytes( int inLen);
		Dynamic readUTFBytes_dyn();

		virtual Void write_uncheck( int inByte);
		Dynamic write_uncheck_dyn();

		virtual Void writeBoolean( bool value);
		Dynamic writeBoolean_dyn();

		virtual Void writeByte( int value);
		Dynamic writeByte_dyn();

		virtual Void writeBytes( ::haxe::io::Bytes bytes,hx::Null< int >  inOffset,hx::Null< int >  inLength);
		Dynamic writeBytes_dyn();

		virtual Void writeDouble( Float x);
		Dynamic writeDouble_dyn();

		virtual Void writeFloat( Float x);
		Dynamic writeFloat_dyn();

		virtual Void writeInt( int value);
		Dynamic writeInt_dyn();

		virtual Void writeShort( int value);
		Dynamic writeShort_dyn();

		virtual Void writeUnsignedInt( int value);
		Dynamic writeUnsignedInt_dyn();

		virtual Void writeUTF( ::String s);
		Dynamic writeUTF_dyn();

		virtual Void writeUTFBytes( ::String s);
		Dynamic writeUTFBytes_dyn();

		virtual Void writeFile( ::String inString);
		Dynamic writeFile_dyn();

		virtual Void ensureElem( int inSize,bool inUpdateLength);
		Dynamic ensureElem_dyn();

		virtual Void internal_from_bytes( ::haxe::io::Bytes inBytes);
		Dynamic internal_from_bytes_dyn();

		virtual int ThrowEOFi( );
		Dynamic ThrowEOFi_dyn();

		virtual int get_bytesAvailable( );
		Dynamic get_bytesAvailable_dyn();

		virtual int get_byteLength( );
		Dynamic get_byteLength_dyn();

		virtual ::String get_endian( );
		Dynamic get_endian_dyn();

		virtual ::String set_endian( ::String s);
		Dynamic set_endian_dyn();

		static ::snow::platform::native::utils::ByteArray fromBytes( ::haxe::io::Bytes inBytes);
		static Dynamic fromBytes_dyn();

		static ::snow::platform::native::utils::ByteArray readFile( ::String inString,Dynamic async,Dynamic onload);
		static Dynamic readFile_dyn();

		static ::String _BIG_ENDIAN;
		static ::String _LITTLE_ENDIAN;
		static Dynamic std_double_bytes;
		static Dynamic &std_double_bytes_dyn() { return std_double_bytes;}
		static Dynamic std_double_of_bytes;
		static Dynamic &std_double_of_bytes_dyn() { return std_double_of_bytes;}
		static Dynamic std_float_bytes;
		static Dynamic &std_float_bytes_dyn() { return std_float_bytes;}
		static Dynamic std_float_of_bytes;
		static Dynamic &std_float_of_bytes_dyn() { return std_float_of_bytes;}
		static Dynamic snow_lzma_encode;
		static Dynamic &snow_lzma_encode_dyn() { return snow_lzma_encode;}
		static Dynamic snow_lzma_decode;
		static Dynamic &snow_lzma_decode_dyn() { return snow_lzma_decode;}
		static Dynamic snow_byte_array_overwrite_file;
		static Dynamic &snow_byte_array_overwrite_file_dyn() { return snow_byte_array_overwrite_file;}
		static Dynamic snow_byte_array_read_file;
		static Dynamic &snow_byte_array_read_file_dyn() { return snow_byte_array_read_file;}
};

} // end namespace snow
} // end namespace platform
} // end namespace native
} // end namespace utils

#endif /* INCLUDED_snow_platform_native_utils_ByteArray */ 
