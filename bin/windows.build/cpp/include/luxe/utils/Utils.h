#ifndef INCLUDED_luxe_utils_Utils
#define INCLUDED_luxe_utils_Utils

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS1(luxe,Core)
HX_DECLARE_CLASS2(luxe,utils,GeometryUtils)
HX_DECLARE_CLASS2(luxe,utils,Utils)
HX_DECLARE_CLASS1(snow,App)
namespace luxe{
namespace utils{


class HXCPP_CLASS_ATTRIBUTES  Utils_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Utils_obj OBJ_;
		Utils_obj();
		Void __construct(::luxe::Core _luxe);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Utils_obj > __new(::luxe::Core _luxe);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Utils_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Utils"); }

		::luxe::utils::GeometryUtils geometry;
		::luxe::Core core;
		Array< ::String > _byte_levels;
		virtual ::String uniqueid( Dynamic val);
		Dynamic uniqueid_dyn();

		virtual int uniquehash( );
		Dynamic uniquehash_dyn();

		virtual int hash( ::String string);
		Dynamic hash_dyn();

		virtual int hashmurmur( ::haxe::io::Bytes _bytes,Dynamic _seed);
		Dynamic hashmurmur_dyn();

		virtual int hashdjb2( ::String string);
		Dynamic hashdjb2_dyn();

		virtual ::String uniqueid2( );
		Dynamic uniqueid2_dyn();

		virtual ::String uuid( );
		Dynamic uuid_dyn();

		virtual ::String stacktrace( Dynamic _depth);
		Dynamic stacktrace_dyn();

		virtual bool path_is_relative( ::String _path);
		Dynamic path_is_relative_dyn();

		virtual Array< ::String > find_assets_image_sequence( ::String _name,::String _ext,::String _start);
		Dynamic find_assets_image_sequence_dyn();

		virtual Array< ::String > text_wrap_column_knuth_plass( ::String _string,hx::Null< int >  _column);
		Dynamic text_wrap_column_knuth_plass_dyn();

		virtual ::String text_wrap_column( ::String _text,::String _brk,hx::Null< int >  _column);
		Dynamic text_wrap_column_dyn();

		virtual ::String bytes_to_string( int bytes);
		Dynamic bytes_to_string_dyn();

		virtual ::haxe::io::Bytes array_to_bytes( Array< int > array);
		Dynamic array_to_bytes_dyn();

};

} // end namespace luxe
} // end namespace utils

#endif /* INCLUDED_luxe_utils_Utils */ 
