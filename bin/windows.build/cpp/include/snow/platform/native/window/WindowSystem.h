#ifndef INCLUDED_snow_platform_native_window_WindowSystem
#define INCLUDED_snow_platform_native_window_WindowSystem

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <snow/window/WindowSystemBinding.h>
HX_DECLARE_CLASS1(snow,Snow)
HX_DECLARE_CLASS4(snow,platform,native,window,WindowSystem)
HX_DECLARE_CLASS2(snow,utils,AbstractClass)
HX_DECLARE_CLASS2(snow,window,Window)
HX_DECLARE_CLASS2(snow,window,WindowSystemBinding)
HX_DECLARE_CLASS2(snow,window,Windowing)
namespace snow{
namespace platform{
namespace native{
namespace window{


class HXCPP_CLASS_ATTRIBUTES  WindowSystem_obj : public ::snow::window::WindowSystemBinding_obj{
	public:
		typedef ::snow::window::WindowSystemBinding_obj super;
		typedef WindowSystem_obj OBJ_;
		WindowSystem_obj();
		Void __construct(::snow::window::Windowing _manager,::snow::Snow _lib);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< WindowSystem_obj > __new(::snow::window::Windowing _manager,::snow::Snow _lib);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~WindowSystem_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("WindowSystem"); }

		virtual Void init( );

		virtual Void process( );

		virtual Void destroy( );

		virtual Void listen( ::snow::window::Window window);

		virtual Void unlisten( ::snow::window::Window window);

		virtual Void create( Dynamic render_config,Dynamic config,Dynamic on_created);

		virtual Void close( ::snow::window::Window window);

		virtual Void show( ::snow::window::Window window);

		virtual Void destroy_window( ::snow::window::Window window);

		virtual Void update( ::snow::window::Window window);

		virtual Void render( ::snow::window::Window window);

		virtual Void swap( ::snow::window::Window window);

		virtual Void simple_message( ::snow::window::Window window,::String message,::String title);

		virtual Void set_size( ::snow::window::Window window,int w,int h);

		virtual Void set_position( ::snow::window::Window window,int x,int y);

		virtual Void set_title( ::snow::window::Window window,::String title);

		virtual Void set_max_size( ::snow::window::Window window,int w,int h);

		virtual Void set_min_size( ::snow::window::Window window,int w,int h);

		virtual Void fullscreen( ::snow::window::Window window,bool fullscreen);

		virtual Void bordered( ::snow::window::Window window,bool bordered);

		virtual Void grab( ::snow::window::Window window,bool grabbed);

		virtual Void set_cursor_position( ::snow::window::Window window,int x,int y);

		virtual Void system_lock_cursor( bool enable);

		virtual Void system_enable_cursor( bool enable);

		virtual int system_enable_vsync( bool enable);

		virtual int display_count( );

		virtual int display_mode_count( int display);

		virtual Dynamic display_native_mode( int display);

		virtual Dynamic display_current_mode( int display);

		virtual Dynamic display_mode( int display,int mode_index);

		virtual Dynamic display_bounds( int display);

		virtual ::String display_name( int display);

		static Dynamic snow_window_create;
		static Dynamic &snow_window_create_dyn() { return snow_window_create;}
		static Dynamic snow_window_close;
		static Dynamic &snow_window_close_dyn() { return snow_window_close;}
		static Dynamic snow_window_show;
		static Dynamic &snow_window_show_dyn() { return snow_window_show;}
		static Dynamic snow_window_destroy_window;
		static Dynamic &snow_window_destroy_window_dyn() { return snow_window_destroy_window;}
		static Dynamic snow_window_update;
		static Dynamic &snow_window_update_dyn() { return snow_window_update;}
		static Dynamic snow_window_render;
		static Dynamic &snow_window_render_dyn() { return snow_window_render;}
		static Dynamic snow_window_swap;
		static Dynamic &snow_window_swap_dyn() { return snow_window_swap;}
		static Dynamic snow_window_simple_message;
		static Dynamic &snow_window_simple_message_dyn() { return snow_window_simple_message;}
		static Dynamic snow_window_set_size;
		static Dynamic &snow_window_set_size_dyn() { return snow_window_set_size;}
		static Dynamic snow_window_set_position;
		static Dynamic &snow_window_set_position_dyn() { return snow_window_set_position;}
		static Dynamic snow_window_set_title;
		static Dynamic &snow_window_set_title_dyn() { return snow_window_set_title;}
		static Dynamic snow_window_set_max_size;
		static Dynamic &snow_window_set_max_size_dyn() { return snow_window_set_max_size;}
		static Dynamic snow_window_set_min_size;
		static Dynamic &snow_window_set_min_size_dyn() { return snow_window_set_min_size;}
		static Dynamic snow_window_fullscreen;
		static Dynamic &snow_window_fullscreen_dyn() { return snow_window_fullscreen;}
		static Dynamic snow_window_bordered;
		static Dynamic &snow_window_bordered_dyn() { return snow_window_bordered;}
		static Dynamic snow_window_grab;
		static Dynamic &snow_window_grab_dyn() { return snow_window_grab;}
		static Dynamic snow_window_set_cursor_position;
		static Dynamic &snow_window_set_cursor_position_dyn() { return snow_window_set_cursor_position;}
		static Dynamic snow_system_show_cursor;
		static Dynamic &snow_system_show_cursor_dyn() { return snow_system_show_cursor;}
		static Dynamic snow_system_lock_cursor;
		static Dynamic &snow_system_lock_cursor_dyn() { return snow_system_lock_cursor;}
		static Dynamic snow_system_enable_vsync;
		static Dynamic &snow_system_enable_vsync_dyn() { return snow_system_enable_vsync;}
		static Dynamic snow_desktop_get_display_count;
		static Dynamic &snow_desktop_get_display_count_dyn() { return snow_desktop_get_display_count;}
		static Dynamic snow_desktop_get_display_mode_count;
		static Dynamic &snow_desktop_get_display_mode_count_dyn() { return snow_desktop_get_display_mode_count;}
		static Dynamic snow_desktop_get_display_native_mode;
		static Dynamic &snow_desktop_get_display_native_mode_dyn() { return snow_desktop_get_display_native_mode;}
		static Dynamic snow_desktop_get_display_current_mode;
		static Dynamic &snow_desktop_get_display_current_mode_dyn() { return snow_desktop_get_display_current_mode;}
		static Dynamic snow_desktop_get_display_mode;
		static Dynamic &snow_desktop_get_display_mode_dyn() { return snow_desktop_get_display_mode;}
		static Dynamic snow_desktop_get_display_bounds;
		static Dynamic &snow_desktop_get_display_bounds_dyn() { return snow_desktop_get_display_bounds;}
		static Dynamic snow_desktop_get_display_name;
		static Dynamic &snow_desktop_get_display_name_dyn() { return snow_desktop_get_display_name;}
};

} // end namespace snow
} // end namespace platform
} // end namespace native
} // end namespace window

#endif /* INCLUDED_snow_platform_native_window_WindowSystem */ 
