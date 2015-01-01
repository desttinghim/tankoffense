#ifndef INCLUDED_luxe__Events_EventConnection
#define INCLUDED_luxe__Events_EventConnection

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(luxe,_Events,EventConnection)
namespace luxe{
namespace _Events{


class HXCPP_CLASS_ATTRIBUTES  EventConnection_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef EventConnection_obj OBJ_;
		EventConnection_obj();
		Void __construct(::String _id,::String _event_name,Dynamic _listener);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< EventConnection_obj > __new(::String _id,::String _event_name,Dynamic _listener);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~EventConnection_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("EventConnection"); }

		Dynamic listener;
		Dynamic &listener_dyn() { return listener;}
		::String id;
		::String event_name;
};

} // end namespace luxe
} // end namespace _Events

#endif /* INCLUDED_luxe__Events_EventConnection */ 
