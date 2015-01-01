#include <hxcpp.h>

#ifndef INCLUDED_luxe__Events_EventObject
#include <luxe/_Events/EventObject.h>
#endif
namespace luxe{
namespace _Events{

Void EventObject_obj::__construct(::String _id,::String _event_name,Dynamic _event_properties)
{
HX_STACK_FRAME("luxe._Events.EventObject","new",0xc4a57f7d,"luxe._Events.EventObject.new","luxe/Events.hx",326,0xab6dc64c)
HX_STACK_THIS(this)
HX_STACK_ARG(_id,"_id")
HX_STACK_ARG(_event_name,"_event_name")
HX_STACK_ARG(_event_properties,"_event_properties")
{
	HX_STACK_LINE(328)
	this->id = _id;
	HX_STACK_LINE(329)
	this->name = _event_name;
	HX_STACK_LINE(330)
	this->properties = _event_properties;
}
;
	return null();
}

//EventObject_obj::~EventObject_obj() { }

Dynamic EventObject_obj::__CreateEmpty() { return  new EventObject_obj; }
hx::ObjectPtr< EventObject_obj > EventObject_obj::__new(::String _id,::String _event_name,Dynamic _event_properties)
{  hx::ObjectPtr< EventObject_obj > result = new EventObject_obj();
	result->__construct(_id,_event_name,_event_properties);
	return result;}

Dynamic EventObject_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< EventObject_obj > result = new EventObject_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}


EventObject_obj::EventObject_obj()
{
}

void EventObject_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(EventObject);
	HX_MARK_MEMBER_NAME(id,"id");
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(properties,"properties");
	HX_MARK_END_CLASS();
}

void EventObject_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(id,"id");
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(properties,"properties");
}

Dynamic EventObject_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return id; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return name; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"properties") ) { return properties; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic EventObject_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< ::String >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"properties") ) { properties=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void EventObject_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("id"));
	outFields->push(HX_CSTRING("name"));
	outFields->push(HX_CSTRING("properties"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(EventObject_obj,id),HX_CSTRING("id")},
	{hx::fsString,(int)offsetof(EventObject_obj,name),HX_CSTRING("name")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(EventObject_obj,properties),HX_CSTRING("properties")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("id"),
	HX_CSTRING("name"),
	HX_CSTRING("properties"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(EventObject_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(EventObject_obj::__mClass,"__mClass");
};

#endif

Class EventObject_obj::__mClass;

void EventObject_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("luxe._Events.EventObject"), hx::TCanCast< EventObject_obj> ,sStaticFields,sMemberFields,
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

void EventObject_obj::__boot()
{
}

} // end namespace luxe
} // end namespace _Events
