#ifndef INCLUDED_snow_window_WindowSystemBinding
#define INCLUDED_snow_window_WindowSystemBinding

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <snow/utils/AbstractClass.h>
HX_DECLARE_CLASS1(snow,Snow)
HX_DECLARE_CLASS2(snow,utils,AbstractClass)
HX_DECLARE_CLASS2(snow,window,Window)
HX_DECLARE_CLASS2(snow,window,WindowSystemBinding)
HX_DECLARE_CLASS2(snow,window,Windowing)
namespace snow{
namespace window{


class HXCPP_CLASS_ATTRIBUTES  WindowSystemBinding_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef WindowSystemBinding_obj OBJ_;
		WindowSystemBinding_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< WindowSystemBinding_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~WindowSystemBinding_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		inline operator ::snow::utils::AbstractClass_obj *()
			{ return new ::snow::utils::AbstractClass_delegate_< WindowSystemBinding_obj >(this); }
		hx::Object *__ToInterface(const hx::type_info &inType);
		::String __ToString() const { return HX_CSTRING("WindowSystemBinding"); }

		::snow::window::Windowing manager;
		::snow::Snow lib;
		virtual Void init( );
		Dynamic init_dyn();

		virtual Void process( );
		Dynamic process_dyn();

		virtual Void destroy( );
		Dynamic destroy_dyn();

		virtual Void listen( ::snow::window::Window window);
		Dynamic listen_dyn();

		virtual Void unlisten( ::snow::window::Window window);
		Dynamic unlisten_dyn();

		virtual Void create( Dynamic render_config,Dynamic config,Dynamic on_created);
		Dynamic create_dyn();

		virtual Void close( ::snow::window::Window window);
		Dynamic close_dyn();

		virtual Void show( ::snow::window::Window window);
		Dynamic show_dyn();

		virtual Void destroy_window( ::snow::window::Window window);
		Dynamic destroy_window_dyn();

		virtual Void update( ::snow::window::Window window);
		Dynamic update_dyn();

		virtual Void render( ::snow::window::Window window);
		Dynamic render_dyn();

		virtual Void swap( ::snow::window::Window window);
		Dynamic swap_dyn();

		virtual Void simple_message( ::snow::window::Window window,::String message,::String title);
		Dynamic simple_message_dyn();

		virtual Void set_size( ::snow::window::Window window,int w,int h);
		Dynamic set_size_dyn();

		virtual Void set_position( ::snow::window::Window window,int x,int y);
		Dynamic set_position_dyn();

		virtual Void set_title( ::snow::window::Window window,::String title);
		Dynamic set_title_dyn();

		virtual Void set_max_size( ::snow::window::Window window,int w,int h);
		Dynamic set_max_size_dyn();

		virtual Void set_min_size( ::snow::window::Window window,int w,int h);
		Dynamic set_min_size_dyn();

		virtual Void fullscreen( ::snow::window::Window window,bool fullscreen);
		Dynamic fullscreen_dyn();

		virtual Void bordered( ::snow::window::Window window,bool bordered);
		Dynamic bordered_dyn();

		virtual Void grab( ::snow::window::Window window,bool grabbed);
		Dynamic grab_dyn();

		virtual Void set_cursor_position( ::snow::window::Window window,int x,int y);
		Dynamic set_cursor_position_dyn();

		virtual Void system_enable_cursor( bool enable);
		Dynamic system_enable_cursor_dyn();

		virtual Void system_lock_cursor( bool enable);
		Dynamic system_lock_cursor_dyn();

		virtual int system_enable_vsync( bool enable);
		Dynamic system_enable_vsync_dyn();

		virtual int display_count( );
		Dynamic display_count_dyn();

		virtual int display_mode_count( int display);
		Dynamic display_mode_count_dyn();

		virtual Dynamic display_native_mode( int display);
		Dynamic display_native_mode_dyn();

		virtual Dynamic display_current_mode( int display);
		Dynamic display_current_mode_dyn();

		virtual Dynamic display_mode( int display,int mode_index);
		Dynamic display_mode_dyn();

		virtual Dynamic display_bounds( int display);
		Dynamic display_bounds_dyn();

		virtual ::String display_name( int display);
		Dynamic display_name_dyn();

};

} // end namespace snow
} // end namespace window

#endif /* INCLUDED_snow_window_WindowSystemBinding */ 
