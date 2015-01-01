#ifndef INCLUDED_snow_window_Windowing
#define INCLUDED_snow_window_Windowing

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(IMap)
HX_DECLARE_CLASS2(haxe,ds,BalancedTree)
HX_DECLARE_CLASS2(haxe,ds,IntMap)
HX_DECLARE_CLASS1(snow,Snow)
HX_DECLARE_CLASS4(snow,platform,native,window,WindowSystem)
HX_DECLARE_CLASS5(snow,platform,native,window,sdl,WindowSystem)
HX_DECLARE_CLASS2(snow,utils,AbstractClass)
HX_DECLARE_CLASS2(snow,window,Window)
HX_DECLARE_CLASS2(snow,window,WindowSystemBinding)
HX_DECLARE_CLASS2(snow,window,Windowing)
HX_DECLARE_CLASS3(snow,window,_Windowing,WindowHandleMap)
namespace snow{
namespace window{


class HXCPP_CLASS_ATTRIBUTES  Windowing_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Windowing_obj OBJ_;
		Windowing_obj();
		Void __construct(::snow::Snow _lib);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Windowing_obj > __new(::snow::Snow _lib);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Windowing_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Windowing"); }

		::haxe::ds::IntMap window_list;
		::snow::window::_Windowing::WindowHandleMap window_handles;
		int window_count;
		::snow::Snow lib;
		::snow::platform::native::window::sdl::WindowSystem platform;
		virtual ::snow::window::Window create( Dynamic _config);
		Dynamic create_dyn();

		virtual Void remove( ::snow::window::Window _window);
		Dynamic remove_dyn();

		virtual ::snow::window::Window window_from_handle( Dynamic _handle);
		Dynamic window_from_handle_dyn();

		virtual ::snow::window::Window window_from_id( int _id);
		Dynamic window_from_id_dyn();

		virtual int enable_vsync( bool _enable);
		Dynamic enable_vsync_dyn();

		virtual Void enable_cursor( bool _enable);
		Dynamic enable_cursor_dyn();

		virtual Void enable_cursor_lock( bool _enable);
		Dynamic enable_cursor_lock_dyn();

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

		virtual Void on_event( Dynamic _event);
		Dynamic on_event_dyn();

		virtual Void update( );
		Dynamic update_dyn();

		virtual Void destroy( );
		Dynamic destroy_dyn();

};

} // end namespace snow
} // end namespace window

#endif /* INCLUDED_snow_window_Windowing */ 
