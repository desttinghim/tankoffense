#ifndef INCLUDED_snow_platform_native_Core
#define INCLUDED_snow_platform_native_Core

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <snow/CoreBinding.h>
HX_DECLARE_CLASS1(snow,CoreBinding)
HX_DECLARE_CLASS1(snow,Snow)
HX_DECLARE_CLASS3(snow,platform,native,Core)
HX_DECLARE_CLASS2(snow,utils,AbstractClass)
namespace snow{
namespace platform{
namespace native{


class HXCPP_CLASS_ATTRIBUTES  Core_obj : public ::snow::CoreBinding_obj{
	public:
		typedef ::snow::CoreBinding_obj super;
		typedef Core_obj OBJ_;
		Core_obj();
		Void __construct(::snow::Snow _app);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Core_obj > __new(::snow::Snow _app);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Core_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("Core"); }

		Float start_timestamp;
		virtual Void init( Dynamic _event_handler);

		virtual Void shutdown( );

		virtual Float timestamp( );

		virtual ::String app_path( );

		virtual ::String pref_path( ::String _package,::String _appname);

		static Dynamic snow_init;
		static Dynamic &snow_init_dyn() { return snow_init;}
		static Dynamic snow_shutdown;
		static Dynamic &snow_shutdown_dyn() { return snow_shutdown;}
		static Dynamic snow_timestamp;
		static Dynamic &snow_timestamp_dyn() { return snow_timestamp;}
		static Dynamic snow_app_path;
		static Dynamic &snow_app_path_dyn() { return snow_app_path;}
		static Dynamic snow_pref_path;
		static Dynamic &snow_pref_path_dyn() { return snow_pref_path;}
};

} // end namespace snow
} // end namespace platform
} // end namespace native

#endif /* INCLUDED_snow_platform_native_Core */ 
