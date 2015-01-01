#ifndef INCLUDED_luxe_debug_ProfilerDebugView
#define INCLUDED_luxe_debug_ProfilerDebugView

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <luxe/debug/DebugView.h>
HX_DECLARE_CLASS0(IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS1(luxe,Emitter)
HX_DECLARE_CLASS1(luxe,Objects)
HX_DECLARE_CLASS2(luxe,debug,DebugView)
HX_DECLARE_CLASS2(luxe,debug,ProfilerDebugView)
namespace luxe{
namespace debug{


class HXCPP_CLASS_ATTRIBUTES  ProfilerDebugView_obj : public ::luxe::debug::DebugView_obj{
	public:
		typedef ::luxe::debug::DebugView_obj super;
		typedef ProfilerDebugView_obj OBJ_;
		ProfilerDebugView_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< ProfilerDebugView_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ProfilerDebugView_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("ProfilerDebugView"); }

		bool _setup;
		virtual Void show( );

		virtual Void hide( );

		static ::haxe::ds::StringMap lists;
		static Void add_offset( ::String _id,::String _offset);
		static Dynamic add_offset_dyn();

		static Void hide_item( ::String _id);
		static Dynamic hide_item_dyn();

		static Void show_item( ::String _id);
		static Dynamic show_item_dyn();

		static Void start( ::String _id,Dynamic _max);
		static Dynamic start_dyn();

		static Void end( ::String _id);
		static Dynamic end_dyn();

};

} // end namespace luxe
} // end namespace debug

#endif /* INCLUDED_luxe_debug_ProfilerDebugView */ 
