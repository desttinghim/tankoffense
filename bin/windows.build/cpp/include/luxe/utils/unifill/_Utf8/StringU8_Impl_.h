#ifndef INCLUDED_luxe_utils_unifill__Utf8_StringU8_Impl_
#define INCLUDED_luxe_utils_unifill__Utf8_StringU8_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS4(luxe,utils,unifill,_Utf8,StringU8_Impl_)
namespace luxe{
namespace utils{
namespace unifill{
namespace _Utf8{


class HXCPP_CLASS_ATTRIBUTES  StringU8_Impl__obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef StringU8_Impl__obj OBJ_;
		StringU8_Impl__obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< StringU8_Impl__obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~StringU8_Impl__obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("StringU8_Impl_"); }

		static ::String fromString( ::String s);
		static Dynamic fromString_dyn();

		static ::String ofBytes( ::haxe::io::Bytes b);
		static Dynamic ofBytes_dyn();

		static ::String fromBytes( ::haxe::io::Bytes b);
		static Dynamic fromBytes_dyn();

		static int codeUnitAt( ::String this1,int index);
		static Dynamic codeUnitAt_dyn();

		static ::String substr( ::String this1,int index,Dynamic len);
		static Dynamic substr_dyn();

		static ::String toString( ::String this1);
		static Dynamic toString_dyn();

		static ::haxe::io::Bytes toBytes( ::String this1);
		static Dynamic toBytes_dyn();

		static ::String _new( ::String s);
		static Dynamic _new_dyn();

		static int get_length( ::String this1);
		static Dynamic get_length_dyn();

};

} // end namespace luxe
} // end namespace utils
} // end namespace unifill
} // end namespace _Utf8

#endif /* INCLUDED_luxe_utils_unifill__Utf8_StringU8_Impl_ */ 
