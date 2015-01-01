#ifndef INCLUDED_snow_AppFixedTimestep
#define INCLUDED_snow_AppFixedTimestep

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <snow/App.h>
HX_DECLARE_CLASS1(snow,App)
HX_DECLARE_CLASS1(snow,AppFixedTimestep)
namespace snow{


class HXCPP_CLASS_ATTRIBUTES  AppFixedTimestep_obj : public ::snow::App_obj{
	public:
		typedef ::snow::App_obj super;
		typedef AppFixedTimestep_obj OBJ_;
		AppFixedTimestep_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< AppFixedTimestep_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~AppFixedTimestep_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("AppFixedTimestep"); }

		Float frame_time;
		Float overflow;
		virtual Void on_internal_init( );

		virtual Void on_internal_update( );

};

} // end namespace snow

#endif /* INCLUDED_snow_AppFixedTimestep */ 
