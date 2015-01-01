#ifndef INCLUDED_phoenix__Vector_Vec_Impl_
#define INCLUDED_phoenix__Vector_Vec_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(phoenix,Vector)
HX_DECLARE_CLASS2(phoenix,_Vector,Vec_Impl_)
namespace phoenix{
namespace _Vector{


class HXCPP_CLASS_ATTRIBUTES  Vec_Impl__obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Vec_Impl__obj OBJ_;
		Vec_Impl__obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Vec_Impl__obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Vec_Impl__obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("Vec_Impl_"); }

		static ::phoenix::Vector _new( Dynamic _x,Dynamic _y,Dynamic _z,Dynamic _w);
		static Dynamic _new_dyn();

		static ::phoenix::Vector _multiply( ::phoenix::Vector lhs,::phoenix::Vector rhs);
		static Dynamic _multiply_dyn();

		static ::phoenix::Vector _multiply_scalar( ::phoenix::Vector lhs,Float rhs);
		static Dynamic _multiply_scalar_dyn();

		static ::phoenix::Vector _multiply_scalar_int( ::phoenix::Vector lhs,int rhs);
		static Dynamic _multiply_scalar_int_dyn();

		static ::phoenix::Vector _divide( ::phoenix::Vector lhs,::phoenix::Vector rhs);
		static Dynamic _divide_dyn();

		static ::phoenix::Vector _divide_scalar( ::phoenix::Vector lhs,Float rhs);
		static Dynamic _divide_scalar_dyn();

		static ::phoenix::Vector _divide_scalar_int( ::phoenix::Vector lhs,int rhs);
		static Dynamic _divide_scalar_int_dyn();

		static ::phoenix::Vector _add( ::phoenix::Vector lhs,::phoenix::Vector rhs);
		static Dynamic _add_dyn();

		static ::phoenix::Vector _add_scalar( ::phoenix::Vector lhs,Float rhs);
		static Dynamic _add_scalar_dyn();

		static ::phoenix::Vector _add_scalar_int( ::phoenix::Vector lhs,int rhs);
		static Dynamic _add_scalar_int_dyn();

		static ::phoenix::Vector _subtract( ::phoenix::Vector lhs,::phoenix::Vector rhs);
		static Dynamic _subtract_dyn();

		static ::phoenix::Vector _subtract_scalar( ::phoenix::Vector lhs,Float rhs);
		static Dynamic _subtract_scalar_dyn();

		static ::phoenix::Vector _subtract_scalar_int( ::phoenix::Vector lhs,int rhs);
		static Dynamic _subtract_scalar_int_dyn();

};

} // end namespace phoenix
} // end namespace _Vector

#endif /* INCLUDED_phoenix__Vector_Vec_Impl_ */ 
