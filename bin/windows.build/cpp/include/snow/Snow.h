#ifndef INCLUDED_snow_Snow
#define INCLUDED_snow_Snow

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(snow,App)
HX_DECLARE_CLASS1(snow,CoreBinding)
HX_DECLARE_CLASS1(snow,Snow)
HX_DECLARE_CLASS2(snow,assets,Assets)
HX_DECLARE_CLASS2(snow,audio,Audio)
HX_DECLARE_CLASS2(snow,input,Input)
HX_DECLARE_CLASS2(snow,io,IO)
HX_DECLARE_CLASS3(snow,platform,native,Core)
HX_DECLARE_CLASS2(snow,utils,AbstractClass)
HX_DECLARE_CLASS2(snow,window,Window)
HX_DECLARE_CLASS2(snow,window,Windowing)
namespace snow{


class HXCPP_CLASS_ATTRIBUTES  Snow_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Snow_obj OBJ_;
		Snow_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Snow_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Snow_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Snow"); }

		::snow::App host;
		Dynamic config;
		Dynamic snow_config;
		bool freeze;
		::snow::io::IO io;
		::snow::input::Input input;
		::snow::assets::Assets assets;
		::snow::audio::Audio audio;
		::snow::window::Windowing windowing;
		bool shutting_down;
		bool has_shutdown;
		::snow::window::Window window;
		bool was_ready;
		bool is_ready;
		virtual Void init( Dynamic _snow_config,::snow::App _host);
		Dynamic init_dyn();

		virtual Void shutdown( );
		Dynamic shutdown_dyn();

		virtual Float get_time( );
		Dynamic get_time_dyn();

		virtual Void on_snow_init( );
		Dynamic on_snow_init_dyn();

		virtual Void on_snow_ready( );
		Dynamic on_snow_ready_dyn();

		virtual Void do_internal_update( Float dt);
		Dynamic do_internal_update_dyn();

		virtual Void render( );
		Dynamic render_dyn();

		virtual Void on_snow_update( );
		Dynamic on_snow_update_dyn();

		virtual Void dispatch_system_event( Dynamic _event);
		Dynamic dispatch_system_event_dyn();

		virtual Void on_event( Dynamic _event);
		Dynamic on_event_dyn();

		virtual bool set_freeze( bool _freeze);
		Dynamic set_freeze_dyn();

		virtual Dynamic default_runtime_config( );
		Dynamic default_runtime_config_dyn();

		virtual Dynamic default_asset_list( );
		Dynamic default_asset_list_dyn();

		virtual Dynamic default_render_config( );
		Dynamic default_render_config_dyn();

		virtual Dynamic default_window_config( );
		Dynamic default_window_config_dyn();

		virtual ::String get_uniqueid( );
		Dynamic get_uniqueid_dyn();

		static ::snow::platform::native::Core core;
		static Dynamic load( ::String library,::String method,hx::Null< int >  args);
		static Dynamic load_dyn();

		static Dynamic next_list;
		static Void next( Dynamic func);
		static Dynamic next_dyn();

};

} // end namespace snow

#endif /* INCLUDED_snow_Snow */ 
