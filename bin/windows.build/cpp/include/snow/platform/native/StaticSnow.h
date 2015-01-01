#ifndef INCLUDED_snow_platform_native_StaticSnow
#define INCLUDED_snow_platform_native_StaticSnow

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(snow,platform,native,StaticSnow)
namespace snow{
namespace platform{
namespace native{


class HXCPP_CLASS_ATTRIBUTES  StaticSnow_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef StaticSnow_obj OBJ_;
		StaticSnow_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< StaticSnow_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~StaticSnow_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		static void __init__();

		::String __ToString() const { return HX_CSTRING("StaticSnow"); }

};

} // end namespace snow
} // end namespace platform
} // end namespace native

#endif /* INCLUDED_snow_platform_native_StaticSnow */ 
