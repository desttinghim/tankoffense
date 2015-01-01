#ifndef INCLUDED_luxe_Debug
#define INCLUDED_luxe_Debug

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS1(luxe,Core)
HX_DECLARE_CLASS1(luxe,Debug)
HX_DECLARE_CLASS1(luxe,Emitter)
HX_DECLARE_CLASS1(luxe,Objects)
HX_DECLARE_CLASS2(luxe,debug,DebugView)
HX_DECLARE_CLASS2(luxe,debug,Inspector)
HX_DECLARE_CLASS2(luxe,resource,Resource)
HX_DECLARE_CLASS1(phoenix,Batcher)
HX_DECLARE_CLASS1(phoenix,BitmapFont)
HX_DECLARE_CLASS1(phoenix,Camera)
HX_DECLARE_CLASS1(phoenix,Vector)
HX_DECLARE_CLASS2(phoenix,geometry,Geometry)
HX_DECLARE_CLASS2(phoenix,geometry,QuadGeometry)
HX_DECLARE_CLASS1(snow,App)
namespace luxe{


class HXCPP_CLASS_ATTRIBUTES  Debug_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Debug_obj OBJ_;
		Debug_obj();
		Void __construct(::luxe::Core _core);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Debug_obj > __new(::luxe::Core _core);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Debug_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Debug"); }

		::luxe::Core core;
		bool visible;
		::luxe::debug::Inspector debug_inspector;
		::phoenix::geometry::QuadGeometry overlay;
		::phoenix::Batcher batcher;
		::phoenix::Camera view;
		::phoenix::BitmapFont debug_font;
		Float dt_average;
		Float dt_average_accum;
		int dt_average_span;
		int dt_average_count;
		int current_view_index;
		int last_view_index;
		::luxe::debug::DebugView current_view;
		::phoenix::Vector padding;
		bool started;
		::String profile_path;
		bool profiling;
		virtual Void init( );
		Dynamic init_dyn();

		virtual Void start( ::String _name,Dynamic _max);
		Dynamic start_dyn();

		virtual Void end( ::String _name);
		Dynamic end_dyn();

		virtual Void remove_trace_listener( ::String _name);
		Dynamic remove_trace_listener_dyn();

		virtual Void add_trace_listener( ::String _name,Dynamic _callback);
		Dynamic add_trace_listener_dyn();

		virtual Void create_debug_console( );
		Dynamic create_debug_console_dyn();

		virtual Void mouseup( Dynamic e);
		Dynamic mouseup_dyn();

		virtual Void mousedown( Dynamic e);
		Dynamic mousedown_dyn();

		virtual Void mousewheel( Dynamic e);
		Dynamic mousewheel_dyn();

		virtual Void mousemove( Dynamic e);
		Dynamic mousemove_dyn();

		virtual Void keyup( Dynamic e);
		Dynamic keyup_dyn();

		virtual Void keydown( Dynamic e);
		Dynamic keydown_dyn();

		virtual Void onresize( Dynamic e);
		Dynamic onresize_dyn();

		virtual Void refresh( );
		Dynamic refresh_dyn();

		virtual Void switch_view( );
		Dynamic switch_view_dyn();

		bool last_cursor_shown;
		bool last_cursor_grab;
		virtual Void show_console( hx::Null< bool >  _show);
		Dynamic show_console_dyn();

		virtual Void destroy( );
		Dynamic destroy_dyn();

		virtual Void process( );
		Dynamic process_dyn();

		static bool shut_down;
		static Array< ::Dynamic > views;
		static ::haxe::ds::StringMap trace_callbacks;
		static Void default_native_trace( Dynamic v,Dynamic infos);
		static Dynamic default_native_trace_dyn();

		static Void internal_trace( Dynamic v,Dynamic inf);
		static Dynamic internal_trace_dyn();

};

} // end namespace luxe

#endif /* INCLUDED_luxe_Debug */ 
