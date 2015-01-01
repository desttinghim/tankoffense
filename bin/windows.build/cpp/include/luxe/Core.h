#ifndef INCLUDED_luxe_Core
#define INCLUDED_luxe_Core

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <snow/App.h>
HX_DECLARE_CLASS2(cpp,vm,Thread)
HX_DECLARE_CLASS1(luxe,Audio)
HX_DECLARE_CLASS1(luxe,Core)
HX_DECLARE_CLASS1(luxe,Debug)
HX_DECLARE_CLASS1(luxe,Draw)
HX_DECLARE_CLASS1(luxe,Emitter)
HX_DECLARE_CLASS1(luxe,Events)
HX_DECLARE_CLASS1(luxe,Game)
HX_DECLARE_CLASS1(luxe,Input)
HX_DECLARE_CLASS1(luxe,Objects)
HX_DECLARE_CLASS1(luxe,Physics)
HX_DECLARE_CLASS1(luxe,Scene)
HX_DECLARE_CLASS1(luxe,Screen)
HX_DECLARE_CLASS1(luxe,Timer)
HX_DECLARE_CLASS2(luxe,resource,ResourceManager)
HX_DECLARE_CLASS1(phoenix,Renderer)
HX_DECLARE_CLASS1(phoenix,Vector)
HX_DECLARE_CLASS1(snow,App)
HX_DECLARE_CLASS2(snow,window,Window)
namespace luxe{


class HXCPP_CLASS_ATTRIBUTES  Core_obj : public ::snow::App_obj{
	public:
		typedef ::snow::App_obj super;
		typedef Core_obj OBJ_;
		Core_obj();
		Void __construct(::luxe::Game _game);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Core_obj > __new(::luxe::Game _game);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Core_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Core"); }

		::luxe::Game game;
		::cpp::vm::Thread core_thread;
		Dynamic thread_message;
		bool console_visible;
		bool headless;
		::luxe::Emitter emitter;
		::luxe::Debug debug;
		::luxe::Draw draw;
		::luxe::Timer timer;
		::luxe::Events events;
		::luxe::Input input;
		::luxe::Audio audio;
		::luxe::Scene scene;
		::luxe::resource::ResourceManager resources;
		::phoenix::Renderer renderer;
		::luxe::Screen screen;
		::luxe::Physics physics;
		::phoenix::Vector _mouse_pos;
		::phoenix::Vector _touch_pos;
		bool shutting_down;
		bool has_shutdown;
		bool has_inited;
		virtual Void ready( );

		virtual Void ondestroy( );

		virtual Void init( );
		Dynamic init_dyn();

		virtual Void shutdown( );
		Dynamic shutdown_dyn();

		virtual Void on( ::String event,Dynamic handler);
		Dynamic on_dyn();

		virtual bool off( ::String event,Dynamic handler);
		Dynamic off_dyn();

		virtual Void emit( ::String event,Dynamic data);
		Dynamic emit_dyn();

		virtual Void onevent( Dynamic event);

		virtual Void update( Float dt);

		virtual Void window_event( Dynamic _event);
		Dynamic window_event_dyn();

		virtual Void render( ::snow::window::Window window);
		Dynamic render_dyn();

		virtual Void show_console( hx::Null< bool >  _show);
		Dynamic show_console_dyn();

		virtual Void onkeydown( int keycode,int scancode,bool repeat,Dynamic mod,Float timestamp,int window_id);

		virtual Void onkeyup( int keycode,int scancode,bool repeat,Dynamic mod,Float timestamp,int window_id);

		virtual Void ontextinput( ::String text,int start,int length,int type,Float timestamp,int window_id);

		virtual Void oninputdown( ::String name,Dynamic event);
		Dynamic oninputdown_dyn();

		virtual Void oninputup( ::String name,Dynamic event);
		Dynamic oninputup_dyn();

		virtual Void onmousedown( int x,int y,int button,Float timestamp,int window_id);

		virtual Void onmouseup( int x,int y,int button,Float timestamp,int window_id);

		virtual Void onmousemove( int x,int y,int xrel,int yrel,Float timestamp,int window_id);

		virtual Void onmousewheel( int x,int y,Float timestamp,int window_id);

		virtual Void ontouchdown( Float x,Float y,int touch_id,Float timestamp);

		virtual Void ontouchup( Float x,Float y,int touch_id,Float timestamp);

		virtual Void ontouchmove( Float x,Float y,Float dx,Float dy,int touch_id,Float timestamp);

		virtual Void ongamepadaxis( int gamepad,int axis,Float value,Float timestamp);

		virtual Void ongamepaddown( int gamepad,int button,Float value,Float timestamp);

		virtual Void ongamepadup( int gamepad,int button,Float value,Float timestamp);

		virtual Void ongamepaddevice( int gamepad,int type,Float timestamp);

		virtual Dynamic config( Dynamic config);

		virtual Void process_loading_thread( );
		Dynamic process_loading_thread_dyn();

		static ::String core_tag_update;
		static ::String core_tag_renderdt;
		static ::String game_tag_update;
		static ::String core_tag_render;
		static ::String core_tag_debug;
		static ::String core_tag_updates;
		static ::String core_tag_events;
		static ::String core_tag_audio;
		static ::String core_tag_input;
		static ::String core_tag_timer;
		static ::String core_tag_scene;
};

} // end namespace luxe

#endif /* INCLUDED_luxe_Core */ 
