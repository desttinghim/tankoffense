#ifndef INCLUDED_luxe_debug_TraceDebugView
#define INCLUDED_luxe_debug_TraceDebugView

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
HX_DECLARE_CLASS2(luxe,debug,TraceDebugView)
namespace luxe{
namespace debug{


class HXCPP_CLASS_ATTRIBUTES  TraceDebugView_obj : public ::luxe::debug::DebugView_obj{
	public:
		typedef ::luxe::debug::DebugView_obj super;
		typedef TraceDebugView_obj OBJ_;
		TraceDebugView_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< TraceDebugView_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~TraceDebugView_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("TraceDebugView"); }

		Array< ::String > logged;
		::luxe::Text lines;
		int max_lines;
		virtual Void on_trace( Dynamic v,Dynamic inf);
		Dynamic on_trace_dyn();

		virtual Void create( );

		virtual Void add_line( ::String _t);
		Dynamic add_line_dyn();

		int _last_logged_length;
		virtual Void refresh_lines( );
		Dynamic refresh_lines_dyn();

		virtual Void refresh( );

		virtual Void process( );

		virtual Void show( );

		virtual Void hide( );

};

} // end namespace luxe
} // end namespace debug

#endif /* INCLUDED_luxe_debug_TraceDebugView */ 
