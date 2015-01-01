#ifndef INCLUDED_hxcpp_StaticRegexp
#define INCLUDED_hxcpp_StaticRegexp

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(hxcpp,StaticRegexp)
namespace hxcpp{


class HXCPP_CLASS_ATTRIBUTES  StaticRegexp_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef StaticRegexp_obj OBJ_;
		StaticRegexp_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< StaticRegexp_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~StaticRegexp_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		static void __init__();

		::String __ToString() const { return HX_CSTRING("StaticRegexp"); }

};

} // end namespace hxcpp

#endif /* INCLUDED_hxcpp_StaticRegexp */ 
