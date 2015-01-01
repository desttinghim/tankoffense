#ifndef INCLUDED_snow_utils_Libs
#define INCLUDED_snow_utils_Libs

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS2(snow,utils,Libs)
namespace snow{
namespace utils{


class HXCPP_CLASS_ATTRIBUTES  Libs_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Libs_obj OBJ_;
		Libs_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Libs_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Libs_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("Libs"); }

		static ::haxe::ds::StringMap __moduleNames;
		static Dynamic tryLoad( ::String name,::String library,::String func,int args);
		static Dynamic tryLoad_dyn();

		static ::String findHaxeLib( ::String library);
		static Dynamic findHaxeLib_dyn();

		static ::String get_system_name( );
		static Dynamic get_system_name_dyn();

		static Dynamic load( ::String library,::String method,hx::Null< int >  args);
		static Dynamic load_dyn();

		static Void loaderTrace( ::String message);
		static Dynamic loaderTrace_dyn();

};

} // end namespace snow
} // end namespace utils

#endif /* INCLUDED_snow_utils_Libs */ 
