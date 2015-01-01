#ifndef INCLUDED_phoenix__Vector_ComponentOrder_Impl_
#define INCLUDED_phoenix__Vector_ComponentOrder_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(phoenix,_Vector,ComponentOrder_Impl_)
namespace phoenix{
namespace _Vector{


class HXCPP_CLASS_ATTRIBUTES  ComponentOrder_Impl__obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ComponentOrder_Impl__obj OBJ_;
		ComponentOrder_Impl__obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< ComponentOrder_Impl__obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ComponentOrder_Impl__obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("ComponentOrder_Impl_"); }

		static int XYZ;
		static int YXZ;
		static int ZXY;
		static int ZYX;
		static int YZX;
		static int XZY;
};

} // end namespace phoenix
} // end namespace _Vector

#endif /* INCLUDED_phoenix__Vector_ComponentOrder_Impl_ */ 
