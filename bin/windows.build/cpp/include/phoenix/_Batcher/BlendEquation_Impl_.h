#ifndef INCLUDED_phoenix__Batcher_BlendEquation_Impl_
#define INCLUDED_phoenix__Batcher_BlendEquation_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(phoenix,_Batcher,BlendEquation_Impl_)
namespace phoenix{
namespace _Batcher{


class HXCPP_CLASS_ATTRIBUTES  BlendEquation_Impl__obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef BlendEquation_Impl__obj OBJ_;
		BlendEquation_Impl__obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< BlendEquation_Impl__obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~BlendEquation_Impl__obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("BlendEquation_Impl_"); }

		static int add;
		static int subtract;
		static int reverse_subtract;
};

} // end namespace phoenix
} // end namespace _Batcher

#endif /* INCLUDED_phoenix__Batcher_BlendEquation_Impl_ */ 
