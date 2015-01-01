#ifndef INCLUDED_phoenix__Batcher_BlendMode_Impl_
#define INCLUDED_phoenix__Batcher_BlendMode_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(phoenix,_Batcher,BlendMode_Impl_)
namespace phoenix{
namespace _Batcher{


class HXCPP_CLASS_ATTRIBUTES  BlendMode_Impl__obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef BlendMode_Impl__obj OBJ_;
		BlendMode_Impl__obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< BlendMode_Impl__obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~BlendMode_Impl__obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("BlendMode_Impl_"); }

		static int zero;
		static int one;
		static int src_color;
		static int one_minus_src_color;
		static int src_alpha;
		static int one_minus_src_alpha;
		static int dst_alpha;
		static int one_minus_dst_alpha;
		static int dst_color;
		static int one_minus_dst_color;
		static int src_alpha_saturate;
};

} // end namespace phoenix
} // end namespace _Batcher

#endif /* INCLUDED_phoenix__Batcher_BlendMode_Impl_ */ 
