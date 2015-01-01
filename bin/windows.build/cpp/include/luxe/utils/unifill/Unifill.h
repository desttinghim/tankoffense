#ifndef INCLUDED_luxe_utils_unifill_Unifill
#define INCLUDED_luxe_utils_unifill_Unifill

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(luxe,utils,unifill,Unifill)
namespace luxe{
namespace utils{
namespace unifill{


class HXCPP_CLASS_ATTRIBUTES  Unifill_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Unifill_obj OBJ_;
		Unifill_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Unifill_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Unifill_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("Unifill"); }

		static int uLength( ::String s);
		static Dynamic uLength_dyn();

		static ::String uCharAt( ::String s,int index);
		static Dynamic uCharAt_dyn();

		static int uCharCodeAt( ::String s,int index);
		static Dynamic uCharCodeAt_dyn();

		static int uCodePointAt( ::String s,int index);
		static Dynamic uCodePointAt_dyn();

		static int uIndexOf( ::String s,::String value,hx::Null< int >  startIndex);
		static Dynamic uIndexOf_dyn();

		static int uLastIndexOf( ::String s,::String value,Dynamic startIndex);
		static Dynamic uLastIndexOf_dyn();

		static Array< ::String > uSplit( ::String s,::String delimiter);
		static Dynamic uSplit_dyn();

		static ::String uSubstr( ::String s,int startIndex,Dynamic length);
		static Dynamic uSubstr_dyn();

		static ::String uSubstring( ::String s,int startIndex,Dynamic endIndex);
		static Dynamic uSubstring_dyn();

		static Dynamic uIterator( ::String s);
		static Dynamic uIterator_dyn();

		static int uCompare( ::String a,::String b);
		static Dynamic uCompare_dyn();

		static ::String uToString( Dynamic codePoints);
		static Dynamic uToString_dyn();

};

} // end namespace luxe
} // end namespace utils
} // end namespace unifill

#endif /* INCLUDED_luxe_utils_unifill_Unifill */ 
