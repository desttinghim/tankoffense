#ifndef INCLUDED_luxe__Events_EventObject
#define INCLUDED_luxe__Events_EventObject

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(luxe,_Events,EventObject)
namespace luxe{
namespace _Events{


class HXCPP_CLASS_ATTRIBUTES  EventObject_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef EventObject_obj OBJ_;
		EventObject_obj();
		Void __construct(::String _id,::String _event_name,Dynamic _event_properties);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< EventObject_obj > __new(::String _id,::String _event_name,Dynamic _event_properties);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~EventObject_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("EventObject"); }

		::String id;
		::String name;
		Dynamic properties;
};

} // end namespace luxe
} // end namespace _Events

#endif /* INCLUDED_luxe__Events_EventObject */ 
