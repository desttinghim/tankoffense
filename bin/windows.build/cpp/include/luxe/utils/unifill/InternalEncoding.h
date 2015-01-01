#ifndef INCLUDED_luxe_utils_unifill_InternalEncoding
#define INCLUDED_luxe_utils_unifill_InternalEncoding

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(luxe,utils,unifill,InternalEncoding)
namespace luxe{
namespace utils{
namespace unifill{


class HXCPP_CLASS_ATTRIBUTES  InternalEncoding_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef InternalEncoding_obj OBJ_;
		InternalEncoding_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< InternalEncoding_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~InternalEncoding_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("InternalEncoding"); }

		static ::String get_internalEncoding( );
		static Dynamic get_internalEncoding_dyn();

		static int codeUnitAt( ::String s,int index);
		static Dynamic codeUnitAt_dyn();

		static int codePointAt( ::String s,int index);
		static Dynamic codePointAt_dyn();

		static ::String charAt( ::String s,int index);
		static Dynamic charAt_dyn();

		static int codePointCount( ::String s,int beginIndex,int endIndex);
		static Dynamic codePointCount_dyn();

		static int codePointWidthAt( ::String s,int index);
		static Dynamic codePointWidthAt_dyn();

		static int codePointWidthBefore( ::String s,int index);
		static Dynamic codePointWidthBefore_dyn();

		static int offsetByCodePoints( ::String s,int index,int codePointOffset);
		static Dynamic offsetByCodePoints_dyn();

		static int backwardOffsetByCodePoints( ::String s,int index,int codePointOffset);
		static Dynamic backwardOffsetByCodePoints_dyn();

		static ::String fromCodePoint( int codePoint);
		static Dynamic fromCodePoint_dyn();

		static ::String fromCodePoints( Dynamic codePoints);
		static Dynamic fromCodePoints_dyn();

		static Void validate( ::String s);
		static Dynamic validate_dyn();

		static bool isValidString( ::String s);
		static Dynamic isValidString_dyn();

};

} // end namespace luxe
} // end namespace utils
} // end namespace unifill

#endif /* INCLUDED_luxe_utils_unifill_InternalEncoding */ 
