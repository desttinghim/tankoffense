#ifndef INCLUDED_luxe_utils_unifill__CodePoint_CodePoint_Impl_
#define INCLUDED_luxe_utils_unifill__CodePoint_CodePoint_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(luxe,utils,unifill,_CodePoint,CodePoint_Impl_)
namespace luxe{
namespace utils{
namespace unifill{
namespace _CodePoint{


class HXCPP_CLASS_ATTRIBUTES  CodePoint_Impl__obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef CodePoint_Impl__obj OBJ_;
		CodePoint_Impl__obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< CodePoint_Impl__obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~CodePoint_Impl__obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("CodePoint_Impl_"); }

		static ::String cons( int a,::String b);
		static Dynamic cons_dyn();

		static ::String snoc( ::String a,int b);
		static Dynamic snoc_dyn();

		static int addInt( int a,int b);
		static Dynamic addInt_dyn();

		static int sub( int a,int b);
		static Dynamic sub_dyn();

		static int subInt( int a,int b);
		static Dynamic subInt_dyn();

		static int _new( int code);
		static Dynamic _new_dyn();

		static ::String toString( int this1);
		static Dynamic toString_dyn();

		static int toInt( int this1);
		static Dynamic toInt_dyn();

};

} // end namespace luxe
} // end namespace utils
} // end namespace unifill
} // end namespace _CodePoint

#endif /* INCLUDED_luxe_utils_unifill__CodePoint_CodePoint_Impl_ */ 
