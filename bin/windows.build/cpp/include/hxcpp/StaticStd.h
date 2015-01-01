#ifndef INCLUDED_hxcpp_StaticStd
#define INCLUDED_hxcpp_StaticStd

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(hxcpp,StaticStd)
namespace hxcpp{


class HXCPP_CLASS_ATTRIBUTES  StaticStd_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef StaticStd_obj OBJ_;
		StaticStd_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< StaticStd_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~StaticStd_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		static void __init__();

		::String __ToString() const { return HX_CSTRING("StaticStd"); }

};

} // end namespace hxcpp

#endif /* INCLUDED_hxcpp_StaticStd */ 
