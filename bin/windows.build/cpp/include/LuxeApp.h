#ifndef INCLUDED_LuxeApp
#define INCLUDED_LuxeApp

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(LuxeApp)
HX_DECLARE_CLASS0(Main)
HX_DECLARE_CLASS1(luxe,Core)
HX_DECLARE_CLASS1(luxe,Emitter)
HX_DECLARE_CLASS1(luxe,Game)
HX_DECLARE_CLASS1(snow,App)
HX_DECLARE_CLASS1(snow,Snow)


class HXCPP_CLASS_ATTRIBUTES  LuxeApp_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef LuxeApp_obj OBJ_;
		LuxeApp_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< LuxeApp_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~LuxeApp_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("LuxeApp"); }

		static ::Main _game;
		static ::luxe::Core _core;
		static ::snow::Snow _snow;
		static Void main( );
		static Dynamic main_dyn();

};


#endif /* INCLUDED_LuxeApp */ 
