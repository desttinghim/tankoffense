#ifndef INCLUDED_phoenix__Batcher_PrimitiveType_Impl_
#define INCLUDED_phoenix__Batcher_PrimitiveType_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(phoenix,_Batcher,PrimitiveType_Impl_)
namespace phoenix{
namespace _Batcher{


class HXCPP_CLASS_ATTRIBUTES  PrimitiveType_Impl__obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef PrimitiveType_Impl__obj OBJ_;
		PrimitiveType_Impl__obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< PrimitiveType_Impl__obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~PrimitiveType_Impl__obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("PrimitiveType_Impl_"); }

		static int none;
		static int line_strip;
		static int line_loop;
		static int lines;
		static int triangle_strip;
		static int triangles;
		static int triangle_fan;
		static int points;
};

} // end namespace phoenix
} // end namespace _Batcher

#endif /* INCLUDED_phoenix__Batcher_PrimitiveType_Impl_ */ 
