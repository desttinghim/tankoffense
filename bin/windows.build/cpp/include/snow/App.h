#ifndef INCLUDED_snow_App
#define INCLUDED_snow_App

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(snow,App)
HX_DECLARE_CLASS1(snow,Snow)
namespace snow{


class HXCPP_CLASS_ATTRIBUTES  App_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef App_obj OBJ_;
		App_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< App_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~App_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("App"); }

		::snow::Snow app;
		Float timescale;
		Float fixed_delta;
		Float render_rate;
		Float update_rate;
		Float max_frame_time;
		Float delta_time;
		Float delta_sim;
		Float last_frame_start;
		Float current_time;
		Float cur_frame_start;
		Float alpha;
		Float next_tick;
		Float next_render;
		virtual Dynamic config( Dynamic config);
		Dynamic config_dyn();

		virtual Void ready( );
		Dynamic ready_dyn();

		virtual Void update( Float dt);
		Dynamic update_dyn();

		virtual Void ondestroy( );
		Dynamic ondestroy_dyn();

		virtual Void onevent( Dynamic event);
		Dynamic onevent_dyn();

		virtual Void onkeydown( int keycode,int scancode,bool repeat,Dynamic mod,Float timestamp,int window_id);
		Dynamic onkeydown_dyn();

		virtual Void onkeyup( int keycode,int scancode,bool repeat,Dynamic mod,Float timestamp,int window_id);
		Dynamic onkeyup_dyn();

		virtual Void ontextinput( ::String text,int start,int length,int type,Float timestamp,int window_id);
		Dynamic ontextinput_dyn();

		virtual Void onmousedown( int x,int y,int button,Float timestamp,int window_id);
		Dynamic onmousedown_dyn();

		virtual Void onmouseup( int x,int y,int button,Float timestamp,int window_id);
		Dynamic onmouseup_dyn();

		virtual Void onmousewheel( int x,int y,Float timestamp,int window_id);
		Dynamic onmousewheel_dyn();

		virtual Void onmousemove( int x,int y,int xrel,int yrel,Float timestamp,int window_id);
		Dynamic onmousemove_dyn();

		virtual Void ontouchdown( Float x,Float y,int touch_id,Float timestamp);
		Dynamic ontouchdown_dyn();

		virtual Void ontouchup( Float x,Float y,int touch_id,Float timestamp);
		Dynamic ontouchup_dyn();

		virtual Void ontouchmove( Float x,Float y,Float dx,Float dy,int touch_id,Float timestamp);
		Dynamic ontouchmove_dyn();

		virtual Void ongamepadaxis( int gamepad,int axis,Float value,Float timestamp);
		Dynamic ongamepadaxis_dyn();

		virtual Void ongamepaddown( int gamepad,int button,Float value,Float timestamp);
		Dynamic ongamepaddown_dyn();

		virtual Void ongamepadup( int gamepad,int button,Float value,Float timestamp);
		Dynamic ongamepadup_dyn();

		virtual Void ongamepaddevice( int gamepad,int type,Float timestamp);
		Dynamic ongamepaddevice_dyn();

		virtual Void on_internal_init( );
		Dynamic on_internal_init_dyn();

		virtual Void on_internal_update( );
		Dynamic on_internal_update_dyn();

};

} // end namespace snow

#endif /* INCLUDED_snow_App */ 
