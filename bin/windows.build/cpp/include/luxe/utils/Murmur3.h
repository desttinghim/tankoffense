#ifndef INCLUDED_luxe_utils_Murmur3
#define INCLUDED_luxe_utils_Murmur3

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS2(luxe,utils,Murmur3)
namespace luxe{
namespace utils{


class HXCPP_CLASS_ATTRIBUTES  Murmur3_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Murmur3_obj OBJ_;
		Murmur3_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Murmur3_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Murmur3_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("Murmur3"); }

		static int C1;
		static int C2;
		static int R1;
		static int R2;
		static int M;
		static int N;
		static int hash( ::haxe::io::Bytes bytes,hx::Null< int >  seed);
		static Dynamic hash_dyn();

};

} // end namespace luxe
} // end namespace utils

#endif /* INCLUDED_luxe_utils_Murmur3 */ 
