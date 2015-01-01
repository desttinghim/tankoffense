#include <hxcpp.h>

#ifndef INCLUDED_luxe__Events_EventConnection
#include <luxe/_Events/EventConnection.h>
#endif
namespace luxe{
namespace _Events{

Void EventConnection_obj::__construct(::String _id,::String _event_name,Dynamic _listener)
{
HX_STACK_FRAME("luxe._Events.EventConnection","new",0x937c525c,"luxe._Events.EventConnection.new","luxe/Events.hx",307,0xab6dc64c)
HX_STACK_THIS(this)
HX_STACK_ARG(_id,"_id")
HX_STACK_ARG(_event_name,"_event_name")
HX_STACK_ARG(_listener,"_listener")
{
	HX_STACK_LINE(309)
	this->id = _id;
	HX_STACK_LINE(310)
	this->listener = _listener;
	HX_STACK_LINE(311)
	this->event_name = _event_name;
}
;
	return null();
}

//EventConnection_obj::~EventConnection_obj() { }

Dynamic EventConnection_obj::__CreateEmpty() { return  new EventConnection_obj; }
hx::ObjectPtr< EventConnection_obj > EventConnection_obj::__new(::String _id,::String _event_name,Dynamic _listener)
{  hx::ObjectPtr< EventConnection_obj > result = new EventConnection_obj();
	result->__construct(_id,_event_name,_listener);
	return result;}

Dynamic EventConnection_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< EventConnection_obj > result = new EventConnection_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}


EventConnection_obj::EventConnection_obj()
{
}

void EventConnection_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(EventConnection);
	HX_MARK_MEMBER_NAME(listener,"listener");
	HX_MARK_MEMBER_NAME(id,"id");
	HX_MARK_MEMBER_NAME(event_name,"event_name");
	HX_MARK_END_CLASS();
}

void EventConnection_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(listener,"listener");
	HX_VISIT_MEMBER_NAME(id,"id");
	HX_VISIT_MEMBER_NAME(event_name,"event_name");
}

Dynamic EventConnection_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return id; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"listener") ) { return listener; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"event_name") ) { return event_name; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic EventConnection_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< ::String >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"listener") ) { listener=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"event_name") ) { event_name=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void EventConnection_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("id"));
	outFields->push(HX_CSTRING("event_name"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(EventConnection_obj,listener),HX_CSTRING("listener")},
	{hx::fsString,(int)offsetof(EventConnection_obj,id),HX_CSTRING("id")},
	{hx::fsString,(int)offsetof(EventConnection_obj,event_name),HX_CSTRING("event_name")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("listener"),
	HX_CSTRING("id"),
	HX_CSTRING("event_name"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(EventConnection_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(EventConnection_obj::__mClass,"__mClass");
};

#endif

Class EventConnection_obj::__mClass;

void EventConnection_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("luxe._Events.EventConnection"), hx::TCanCast< EventConnection_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatics
#endif
#ifdef HXCPP_SCRIPTABLE
    , sMemberStorageInfo
#endif
);
}

void EventConnection_obj::__boot()
{
}

} // end namespace luxe
} // end namespace _Events
