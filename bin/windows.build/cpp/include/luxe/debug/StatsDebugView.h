#ifndef INCLUDED_luxe_debug_StatsDebugView
#define INCLUDED_luxe_debug_StatsDebugView

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <luxe/debug/DebugView.h>
HX_DECLARE_CLASS1(luxe,Emitter)
HX_DECLARE_CLASS1(luxe,Entity)
HX_DECLARE_CLASS1(luxe,Objects)
HX_DECLARE_CLASS1(luxe,Text)
HX_DECLARE_CLASS1(luxe,Visual)
HX_DECLARE_CLASS2(luxe,debug,DebugView)
HX_DECLARE_CLASS2(luxe,debug,StatsDebugView)
namespace luxe{
namespace debug{


class HXCPP_CLASS_ATTRIBUTES  StatsDebugView_obj : public ::luxe::debug::DebugView_obj{
	public:
		typedef ::luxe::debug::DebugView_obj super;
		typedef StatsDebugView_obj OBJ_;
		StatsDebugView_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< StatsDebugView_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~StatsDebugView_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("StatsDebugView"); }

		Dynamic _last_render_stats;
		Dynamic _render_stats;
		int debug_draw_call_count;
		int debug_geometry_count;
		int font_size;
		::luxe::Text render_stats_text;
		::luxe::Text resource_stats_text;
		::luxe::Text resource_list_text;
		virtual ::String get_resource_stats_string( );
		Dynamic get_resource_stats_string_dyn();

		virtual ::String get_render_stats_string( );
		Dynamic get_render_stats_string_dyn();

		virtual Void create( );

		virtual Void refresh( );

		virtual Void process( );

		virtual Void onkeydown( Dynamic e);

		virtual Void show( );

		virtual Void hide( );

		virtual Void refresh_render_stats( );
		Dynamic refresh_render_stats_dyn();

		bool hide_debug;
		virtual Void toggle_debug_stats( );
		Dynamic toggle_debug_stats_dyn();

		virtual Void update_render_stats( );
		Dynamic update_render_stats_dyn();

};

} // end namespace luxe
} // end namespace debug

#endif /* INCLUDED_luxe_debug_StatsDebugView */ 
