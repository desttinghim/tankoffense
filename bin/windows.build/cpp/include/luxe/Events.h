#ifndef INCLUDED_luxe_Events
#define INCLUDED_luxe_Events

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS1(luxe,Events)
namespace luxe{


class HXCPP_CLASS_ATTRIBUTES  Events_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Events_obj OBJ_;
		Events_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Events_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Events_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Events"); }

		::haxe::ds::StringMap event_queue;
		::haxe::ds::StringMap event_connections;
		::haxe::ds::StringMap event_slots;
		::haxe::ds::StringMap event_filters;
		::haxe::ds::StringMap event_schedules;
		virtual Void destroy( );
		Dynamic destroy_dyn();

		virtual Void clear( );
		Dynamic clear_dyn();

		virtual bool does_filter_event( ::String _filter,::String _event);
		Dynamic does_filter_event_dyn();

		virtual ::String listen( ::String _event_name,Dynamic _listener);
		Dynamic listen_dyn();

		virtual bool disconnect( ::String event_id);
		Dynamic disconnect_dyn();

		virtual ::String queue( ::String event_name,Dynamic properties);
		Dynamic queue_dyn();

		virtual bool dequeue( ::String event_id);
		Dynamic dequeue_dyn();

		virtual Void process( );
		Dynamic process_dyn();

		virtual bool fire( ::String _event_name,Dynamic _properties);
		Dynamic fire_dyn();

		virtual ::String schedule( Float time,::String event_name,Dynamic properties);
		Dynamic schedule_dyn();

		virtual bool unschedule( ::String schedule_id);
		Dynamic unschedule_dyn();

		virtual Dynamic tag_properties( Dynamic _properties,::String _name,int _count);
		Dynamic tag_properties_dyn();

};

} // end namespace luxe

#endif /* INCLUDED_luxe_Events */ 
