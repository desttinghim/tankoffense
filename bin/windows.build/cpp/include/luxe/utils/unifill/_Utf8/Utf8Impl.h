#ifndef INCLUDED_luxe_utils_unifill__Utf8_Utf8Impl
#define INCLUDED_luxe_utils_unifill__Utf8_Utf8Impl

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(luxe,utils,unifill,_Utf8,Utf8Impl)
namespace luxe{
namespace utils{
namespace unifill{
namespace _Utf8{


class HXCPP_CLASS_ATTRIBUTES  Utf8Impl_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Utf8Impl_obj OBJ_;
		Utf8Impl_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Utf8Impl_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Utf8Impl_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("Utf8Impl"); }

		static int code_point_width( int c);
		static Dynamic code_point_width_dyn();

		static int find_prev_code_point( Dynamic accessor,int index);
		static Dynamic find_prev_code_point_dyn();

		static Void encode_code_point( Dynamic addUnit,int codePoint);
		static Dynamic encode_code_point_dyn();

		static int decode_code_point( int len,Dynamic accessor,int index);
		static Dynamic decode_code_point_dyn();

};

} // end namespace luxe
} // end namespace utils
} // end namespace unifill
} // end namespace _Utf8

#endif /* INCLUDED_luxe_utils_unifill__Utf8_Utf8Impl */ 
