#ifndef INCLUDED_snow_window_Window
#define INCLUDED_snow_window_Window

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(snow,window,Window)
HX_DECLARE_CLASS2(snow,window,Windowing)
namespace snow{
namespace window{


class HXCPP_CLASS_ATTRIBUTES  Window_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Window_obj OBJ_;
		Window_obj();
		Void __construct(::snow::window::Windowing _manager,Dynamic _config);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Window_obj > __new(::snow::window::Windowing _manager,Dynamic _config);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Window_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Window"); }

		int id;
		::snow::window::Windowing manager;
		Dynamic asked_config;
		Dynamic config;
		Dynamic handle;
		Dynamic onevent;
		Dynamic &onevent_dyn() { return onevent;}
		Dynamic onrender;
		Dynamic &onrender_dyn() { return onrender;}
		::String title;
		bool bordered;
		bool grab;
		bool fullscreen;
		int x;
		int y;
		int width;
		int height;
		Dynamic max_size;
		Dynamic min_size;
		bool auto_swap;
		bool auto_render;
		bool closed;
		bool minimized;
		bool internal_position;
		bool internal_resize;
		virtual Void on_window_created( Dynamic _handle,int _id,Dynamic _configs);
		Dynamic on_window_created_dyn();

		virtual Void on_event( Dynamic _event);
		Dynamic on_event_dyn();

		virtual Void update( );
		Dynamic update_dyn();

		virtual Void render( );
		Dynamic render_dyn();

		virtual Void swap( );
		Dynamic swap_dyn();

		virtual Void destroy( );
		Dynamic destroy_dyn();

		virtual Void close( );
		Dynamic close_dyn();

		virtual Void show( );
		Dynamic show_dyn();

		virtual Void simple_message( ::String message,::String title);
		Dynamic simple_message_dyn();

		virtual bool get_fullscreen( );
		Dynamic get_fullscreen_dyn();

		virtual bool set_fullscreen( bool _enable);
		Dynamic set_fullscreen_dyn();

		virtual bool get_bordered( );
		Dynamic get_bordered_dyn();

		virtual bool get_grab( );
		Dynamic get_grab_dyn();

		virtual Dynamic get_max_size( );
		Dynamic get_max_size_dyn();

		virtual Dynamic get_min_size( );
		Dynamic get_min_size_dyn();

		virtual ::String get_title( );
		Dynamic get_title_dyn();

		virtual ::String set_title( ::String _title);
		Dynamic set_title_dyn();

		virtual int set_x( int _x);
		Dynamic set_x_dyn();

		virtual int set_y( int _y);
		Dynamic set_y_dyn();

		virtual int set_width( int _width);
		Dynamic set_width_dyn();

		virtual int set_height( int _height);
		Dynamic set_height_dyn();

		virtual Void set_cursor_position( int _x,int _y);
		Dynamic set_cursor_position_dyn();

		virtual Void set_position( int _x,int _y);
		Dynamic set_position_dyn();

		virtual Void set_size( int _width,int _height);
		Dynamic set_size_dyn();

		virtual Dynamic set_max_size( Dynamic _size);
		Dynamic set_max_size_dyn();

		virtual Dynamic set_min_size( Dynamic _size);
		Dynamic set_min_size_dyn();

		virtual bool set_bordered( bool _bordered);
		Dynamic set_bordered_dyn();

		virtual bool set_grab( bool _grab);
		Dynamic set_grab_dyn();

};

} // end namespace snow
} // end namespace window

#endif /* INCLUDED_snow_window_Window */ 
