#ifndef INCLUDED_snow_CoreBinding
#define INCLUDED_snow_CoreBinding

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <snow/utils/AbstractClass.h>
HX_DECLARE_CLASS1(snow,CoreBinding)
HX_DECLARE_CLASS1(snow,Snow)
HX_DECLARE_CLASS2(snow,utils,AbstractClass)
namespace snow{


class HXCPP_CLASS_ATTRIBUTES  CoreBinding_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef CoreBinding_obj OBJ_;
		CoreBinding_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< CoreBinding_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~CoreBinding_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		inline operator ::snow::utils::AbstractClass_obj *()
			{ return new ::snow::utils::AbstractClass_delegate_< CoreBinding_obj >(this); }
		hx::Object *__ToInterface(const hx::type_info &inType);
		::String __ToString() const { return HX_CSTRING("CoreBinding"); }

		::snow::Snow app;
		virtual Void init( Dynamic _event_handler);
		Dynamic init_dyn();

		virtual Void shutdown( );
		Dynamic shutdown_dyn();

		virtual Float timestamp( );
		Dynamic timestamp_dyn();

		virtual ::String app_path( );
		Dynamic app_path_dyn();

		virtual ::String pref_path( ::String _package,::String _appname);
		Dynamic pref_path_dyn();

};

} // end namespace snow

#endif /* INCLUDED_snow_CoreBinding */ 
