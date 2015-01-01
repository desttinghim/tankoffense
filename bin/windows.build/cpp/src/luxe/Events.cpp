#include <hxcpp.h>

#ifndef INCLUDED_EReg
#include <EReg.h>
#endif
#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_Luxe
#include <Luxe.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_luxe_Events
#include <luxe/Events.h>
#endif
#ifndef INCLUDED_luxe_Timer
#include <luxe/Timer.h>
#endif
#ifndef INCLUDED_luxe__Events_EventConnection
#include <luxe/_Events/EventConnection.h>
#endif
#ifndef INCLUDED_luxe__Events_EventObject
#include <luxe/_Events/EventObject.h>
#endif
#ifndef INCLUDED_luxe_utils_Utils
#include <luxe/utils/Utils.h>
#endif
#ifndef INCLUDED_snow_utils_Timer
#include <snow/utils/Timer.h>
#endif
namespace luxe{

Void Events_obj::__construct()
{
HX_STACK_FRAME("luxe.Events","new",0xd3c5ce63,"luxe.Events.new","luxe/Events.hx",15,0xab6dc64c)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(18)
	::haxe::ds::StringMap _g = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(18)
	this->event_connections = _g;
	HX_STACK_LINE(19)
	::haxe::ds::StringMap _g1 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(19)
	this->event_slots = _g1;
	HX_STACK_LINE(20)
	::haxe::ds::StringMap _g2 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(20)
	this->event_filters = _g2;
	HX_STACK_LINE(21)
	::haxe::ds::StringMap _g3 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(21)
	this->event_queue = _g3;
	HX_STACK_LINE(22)
	::haxe::ds::StringMap _g4 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(22)
	this->event_schedules = _g4;
}
;
	return null();
}

//Events_obj::~Events_obj() { }

Dynamic Events_obj::__CreateEmpty() { return  new Events_obj; }
hx::ObjectPtr< Events_obj > Events_obj::__new()
{  hx::ObjectPtr< Events_obj > result = new Events_obj();
	result->__construct();
	return result;}

Dynamic Events_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Events_obj > result = new Events_obj();
	result->__construct();
	return result;}

Void Events_obj::destroy( ){
{
		HX_STACK_FRAME("luxe.Events","destroy",0x8602e87d,"luxe.Events.destroy","luxe/Events.hx",29,0xab6dc64c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(29)
		this->clear();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Events_obj,destroy,(void))

Void Events_obj::clear( ){
{
		HX_STACK_FRAME("luxe.Events","clear",0x5acb3650,"luxe.Events.clear","luxe/Events.hx",34,0xab6dc64c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(36)
		for(::cpp::FastIterator_obj< ::snow::utils::Timer > *__it = ::cpp::CreateFastIterator< ::snow::utils::Timer >(this->event_schedules->iterator());  __it->hasNext(); ){
			::snow::utils::Timer schedule = __it->next();
			{
				HX_STACK_LINE(37)
				schedule->stop();
				HX_STACK_LINE(38)
				schedule = null();
			}
;
		}
		HX_STACK_LINE(41)
		for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(this->event_connections->keys());  __it->hasNext(); ){
			::String connection = __it->next();
			this->event_connections->remove(connection);
		}
		HX_STACK_LINE(45)
		for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(this->event_filters->keys());  __it->hasNext(); ){
			::String filter = __it->next();
			this->event_filters->remove(filter);
		}
		HX_STACK_LINE(49)
		for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(this->event_slots->keys());  __it->hasNext(); ){
			::String slot = __it->next();
			this->event_slots->remove(slot);
		}
		HX_STACK_LINE(53)
		for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(this->event_queue->keys());  __it->hasNext(); ){
			::String event = __it->next();
			this->event_queue->remove(event);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Events_obj,clear,(void))

bool Events_obj::does_filter_event( ::String _filter,::String _event){
	HX_STACK_FRAME("luxe.Events","does_filter_event",0xeac610dc,"luxe.Events.does_filter_event","luxe/Events.hx",60,0xab6dc64c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_filter,"_filter")
	HX_STACK_ARG(_event,"_event")
	HX_STACK_LINE(62)
	::EReg _replace_stars = ::EReg_obj::__new(HX_CSTRING("\\*"),HX_CSTRING("gi"));		HX_STACK_VAR(_replace_stars,"_replace_stars");
	HX_STACK_LINE(63)
	::String _final_filter = _replace_stars->replace(_filter,HX_CSTRING(".*?"));		HX_STACK_VAR(_final_filter,"_final_filter");
	HX_STACK_LINE(64)
	::EReg _final_search = ::EReg_obj::__new(_final_filter,HX_CSTRING("gi"));		HX_STACK_VAR(_final_search,"_final_search");
	HX_STACK_LINE(66)
	return _final_search->match(_event);
}


HX_DEFINE_DYNAMIC_FUNC2(Events_obj,does_filter_event,return )

::String Events_obj::listen( ::String _event_name,Dynamic _listener){
	HX_STACK_FRAME("luxe.Events","listen",0xff562e24,"luxe.Events.listen","luxe/Events.hx",74,0xab6dc64c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_event_name,"_event_name")
	HX_STACK_ARG(_listener,"_listener")
	HX_STACK_LINE(77)
	::String id = ::Luxe_obj::utils->uniqueid(null());		HX_STACK_VAR(id,"id");
	HX_STACK_LINE(78)
	::luxe::_Events::EventConnection connection = ::luxe::_Events::EventConnection_obj::__new(id,_event_name,_listener);		HX_STACK_VAR(connection,"connection");
	HX_STACK_LINE(81)
	this->event_connections->set(id,connection);
	HX_STACK_LINE(86)
	::EReg _has_stars = ::EReg_obj::__new(HX_CSTRING("\\*"),HX_CSTRING("gi"));		HX_STACK_VAR(_has_stars,"_has_stars");
	HX_STACK_LINE(87)
	if ((_has_stars->match(_event_name))){
		HX_STACK_LINE(90)
		if ((!(this->event_filters->exists(_event_name)))){
			HX_STACK_LINE(92)
			Array< ::Dynamic > value = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(92)
			this->event_filters->set(_event_name,value);
		}
		HX_STACK_LINE(96)
		this->event_filters->get(_event_name)->__Field(HX_CSTRING("push"),true)(connection);
	}
	else{
		HX_STACK_LINE(101)
		if ((!(this->event_slots->exists(_event_name)))){
			HX_STACK_LINE(103)
			Array< ::Dynamic > value = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(103)
			this->event_slots->set(_event_name,value);
		}
		HX_STACK_LINE(107)
		this->event_slots->get(_event_name)->__Field(HX_CSTRING("push"),true)(connection);
	}
	HX_STACK_LINE(112)
	return id;
}


HX_DEFINE_DYNAMIC_FUNC2(Events_obj,listen,return )

bool Events_obj::disconnect( ::String event_id){
	HX_STACK_FRAME("luxe.Events","disconnect",0x0ec57cb9,"luxe.Events.disconnect","luxe/Events.hx",121,0xab6dc64c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(event_id,"event_id")
	HX_STACK_LINE(121)
	if ((this->event_connections->exists(event_id))){
		HX_STACK_LINE(123)
		::luxe::_Events::EventConnection connection = this->event_connections->get(event_id);		HX_STACK_VAR(connection,"connection");
		HX_STACK_LINE(124)
		Array< ::Dynamic > event_slot = this->event_slots->get(connection->event_name);		HX_STACK_VAR(event_slot,"event_slot");
		HX_STACK_LINE(126)
		if (((event_slot != null()))){
			HX_STACK_LINE(127)
			event_slot->remove(connection);
			HX_STACK_LINE(128)
			return true;
		}
		else{
			HX_STACK_LINE(130)
			Array< ::Dynamic > event_filter = this->event_filters->get(connection->event_name);		HX_STACK_VAR(event_filter,"event_filter");
			HX_STACK_LINE(131)
			if (((event_filter != null()))){
				HX_STACK_LINE(132)
				event_filter->remove(connection);
				HX_STACK_LINE(133)
				return true;
			}
			else{
				HX_STACK_LINE(135)
				return false;
			}
		}
		HX_STACK_LINE(139)
		return true;
	}
	else{
		HX_STACK_LINE(142)
		return false;
	}
	HX_STACK_LINE(121)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(Events_obj,disconnect,return )

::String Events_obj::queue( ::String event_name,Dynamic properties){
	HX_STACK_FRAME("luxe.Events","queue",0x705a5254,"luxe.Events.queue","luxe/Events.hx",151,0xab6dc64c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(event_name,"event_name")
	HX_STACK_ARG(properties,"properties")
	HX_STACK_LINE(153)
	::String id = ::Luxe_obj::utils->uniqueid(null());		HX_STACK_VAR(id,"id");
	HX_STACK_LINE(156)
	::luxe::_Events::EventObject event = ::luxe::_Events::EventObject_obj::__new(id,event_name,properties);		HX_STACK_VAR(event,"event");
	HX_STACK_LINE(159)
	this->event_queue->set(id,event);
	HX_STACK_LINE(162)
	return id;
}


HX_DEFINE_DYNAMIC_FUNC2(Events_obj,queue,return )

bool Events_obj::dequeue( ::String event_id){
	HX_STACK_FRAME("luxe.Events","dequeue",0x5fd51df3,"luxe.Events.dequeue","luxe/Events.hx",166,0xab6dc64c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(event_id,"event_id")
	HX_STACK_LINE(168)
	if ((this->event_queue->exists(event_id))){
		HX_STACK_LINE(170)
		::luxe::_Events::EventObject event = this->event_queue->get(event_id);		HX_STACK_VAR(event,"event");
		HX_STACK_LINE(171)
		event = null();
		HX_STACK_LINE(172)
		this->event_queue->remove(event_id);
		HX_STACK_LINE(173)
		return true;
	}
	HX_STACK_LINE(176)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(Events_obj,dequeue,return )

Void Events_obj::process( ){
{
		HX_STACK_FRAME("luxe.Events","process",0x52c75df2,"luxe.Events.process","luxe/Events.hx",181,0xab6dc64c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(184)
		for(::cpp::FastIterator_obj< ::luxe::_Events::EventObject > *__it = ::cpp::CreateFastIterator< ::luxe::_Events::EventObject >(this->event_queue->iterator());  __it->hasNext(); ){
			::luxe::_Events::EventObject event = __it->next();
			this->fire(event->name,event->properties);
		}
		HX_STACK_LINE(189)
		if ((this->event_queue->keys()->__Field(HX_CSTRING("hasNext"),true)())){
			HX_STACK_LINE(191)
			this->event_queue = null();
			HX_STACK_LINE(192)
			::haxe::ds::StringMap _g = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(192)
			this->event_queue = _g;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Events_obj,process,(void))

bool Events_obj::fire( ::String _event_name,Dynamic _properties){
	HX_STACK_FRAME("luxe.Events","fire",0x74081853,"luxe.Events.fire","luxe/Events.hx",201,0xab6dc64c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_event_name,"_event_name")
	HX_STACK_ARG(_properties,"_properties")
	HX_STACK_LINE(204)
	for(::cpp::FastIterator_obj< Array< ::Dynamic > > *__it = ::cpp::CreateFastIterator< Array< ::Dynamic > >(this->event_filters->iterator());  __it->hasNext(); ){
		Array< ::Dynamic > _filter = __it->next();
		if (((_filter->length > (int)0))){
			HX_STACK_LINE(208)
			::String _filter_name = _filter->__get((int)0).StaticCast< ::luxe::_Events::EventConnection >()->event_name;		HX_STACK_VAR(_filter_name,"_filter_name");
			HX_STACK_LINE(209)
			if ((this->does_filter_event(_filter_name,_event_name))){
				HX_STACK_LINE(211)
				Dynamic _g = this->tag_properties(_properties,_event_name,_filter->length);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(211)
				_properties = _g;
				HX_STACK_LINE(213)
				{
					HX_STACK_LINE(213)
					int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(213)
					while((true)){
						HX_STACK_LINE(213)
						if ((!(((_g1 < _filter->length))))){
							HX_STACK_LINE(213)
							break;
						}
						HX_STACK_LINE(213)
						::luxe::_Events::EventConnection _connection = _filter->__get(_g1).StaticCast< ::luxe::_Events::EventConnection >();		HX_STACK_VAR(_connection,"_connection");
						HX_STACK_LINE(213)
						++(_g1);
						HX_STACK_LINE(214)
						_connection->listener(_properties);
					}
				}
			}
		}
;
	}
	HX_STACK_LINE(222)
	if ((this->event_slots->exists(_event_name))){
		HX_STACK_LINE(225)
		Array< ::Dynamic > connections = this->event_slots->get(_event_name);		HX_STACK_VAR(connections,"connections");
		HX_STACK_LINE(232)
		{
			HX_STACK_LINE(232)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(232)
			while((true)){
				HX_STACK_LINE(232)
				if ((!(((_g < connections->length))))){
					HX_STACK_LINE(232)
					break;
				}
				HX_STACK_LINE(232)
				::luxe::_Events::EventConnection connection = connections->__get(_g).StaticCast< ::luxe::_Events::EventConnection >();		HX_STACK_VAR(connection,"connection");
				HX_STACK_LINE(232)
				++(_g);
				HX_STACK_LINE(233)
				connection->listener(_properties);
			}
		}
	}
	else{
		HX_STACK_LINE(238)
		return false;
	}
	HX_STACK_LINE(241)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC2(Events_obj,fire,return )

::String Events_obj::schedule( Float time,::String event_name,Dynamic properties){
	HX_STACK_FRAME("luxe.Events","schedule",0xb1262174,"luxe.Events.schedule","luxe/Events.hx",249,0xab6dc64c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(time,"time")
	HX_STACK_ARG(event_name,"event_name")
	HX_STACK_ARG(properties,"properties")
	HX_STACK_LINE(249)
	Dynamic properties1 = Dynamic( Array_obj<Dynamic>::__new().Add(properties));		HX_STACK_VAR(properties1,"properties1");
	HX_STACK_LINE(249)
	Array< ::String > event_name1 = Array_obj< ::String >::__new().Add(event_name);		HX_STACK_VAR(event_name1,"event_name1");
	HX_STACK_LINE(249)
	Array< ::Dynamic > _g = Array_obj< ::Dynamic >::__new().Add(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(251)
	::String id = ::Luxe_obj::utils->uniqueid(null());		HX_STACK_VAR(id,"id");

	HX_BEGIN_LOCAL_FUNC_S3(hx::LocalFunc,_Function_1_1,Array< ::Dynamic >,_g,Dynamic,properties1,Array< ::String >,event_name1)
	Void run(){
		HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","luxe/Events.hx",254,0xab6dc64c)
		{
			HX_STACK_LINE(254)
			_g->__get((int)0).StaticCast< ::luxe::Events >()->fire(event_name1->__get((int)0),properties1->__GetItem((int)0));
		}
		return null();
	}
	HX_END_LOCAL_FUNC0((void))

	HX_STACK_LINE(253)
	::snow::utils::Timer _timer = ::Luxe_obj::timer->schedule(time, Dynamic(new _Function_1_1(_g,properties1,event_name1)),null());		HX_STACK_VAR(_timer,"_timer");
	HX_STACK_LINE(257)
	this->event_schedules->set(id,_timer);
	HX_STACK_LINE(259)
	return id;
}


HX_DEFINE_DYNAMIC_FUNC3(Events_obj,schedule,return )

bool Events_obj::unschedule( ::String schedule_id){
	HX_STACK_FRAME("luxe.Events","unschedule",0xf0c3ca0d,"luxe.Events.unschedule","luxe/Events.hx",266,0xab6dc64c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(schedule_id,"schedule_id")
	HX_STACK_LINE(268)
	if ((this->event_schedules->exists(schedule_id))){
		HX_STACK_LINE(270)
		::snow::utils::Timer timer = this->event_schedules->get(schedule_id);		HX_STACK_VAR(timer,"timer");
		HX_STACK_LINE(272)
		timer->stop();
		HX_STACK_LINE(274)
		this->event_schedules->remove(schedule_id);
		HX_STACK_LINE(276)
		return true;
	}
	HX_STACK_LINE(279)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(Events_obj,unschedule,return )

Dynamic Events_obj::tag_properties( Dynamic _properties,::String _name,int _count){
	HX_STACK_FRAME("luxe.Events","tag_properties",0x704843d5,"luxe.Events.tag_properties","luxe/Events.hx",283,0xab6dc64c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_properties,"_properties")
	HX_STACK_ARG(_name,"_name")
	HX_STACK_ARG(_count,"_count")
	HX_STACK_LINE(285)
	if (((_properties == null()))){
		struct _Function_2_1{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/Events.hx",286,0xab6dc64c)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(286)
		_properties = _Function_2_1::Block();
	}
	HX_STACK_LINE(290)
	if (((_properties != null()))){
		HX_STACK_LINE(290)
		_properties->__SetField(HX_CSTRING("_event_name_"),_name,false);
	}
	HX_STACK_LINE(292)
	if (((_properties != null()))){
		HX_STACK_LINE(292)
		_properties->__SetField(HX_CSTRING("_event_connection_count_"),_count,false);
	}
	HX_STACK_LINE(294)
	return _properties;
}


HX_DEFINE_DYNAMIC_FUNC3(Events_obj,tag_properties,return )


Events_obj::Events_obj()
{
}

void Events_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Events);
	HX_MARK_MEMBER_NAME(event_queue,"event_queue");
	HX_MARK_MEMBER_NAME(event_connections,"event_connections");
	HX_MARK_MEMBER_NAME(event_slots,"event_slots");
	HX_MARK_MEMBER_NAME(event_filters,"event_filters");
	HX_MARK_MEMBER_NAME(event_schedules,"event_schedules");
	HX_MARK_END_CLASS();
}

void Events_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(event_queue,"event_queue");
	HX_VISIT_MEMBER_NAME(event_connections,"event_connections");
	HX_VISIT_MEMBER_NAME(event_slots,"event_slots");
	HX_VISIT_MEMBER_NAME(event_filters,"event_filters");
	HX_VISIT_MEMBER_NAME(event_schedules,"event_schedules");
}

Dynamic Events_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"fire") ) { return fire_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		if (HX_FIELD_EQ(inName,"queue") ) { return queue_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"listen") ) { return listen_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"dequeue") ) { return dequeue_dyn(); }
		if (HX_FIELD_EQ(inName,"process") ) { return process_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"schedule") ) { return schedule_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"disconnect") ) { return disconnect_dyn(); }
		if (HX_FIELD_EQ(inName,"unschedule") ) { return unschedule_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"event_queue") ) { return event_queue; }
		if (HX_FIELD_EQ(inName,"event_slots") ) { return event_slots; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"event_filters") ) { return event_filters; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"tag_properties") ) { return tag_properties_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"event_schedules") ) { return event_schedules; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"event_connections") ) { return event_connections; }
		if (HX_FIELD_EQ(inName,"does_filter_event") ) { return does_filter_event_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Events_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"event_queue") ) { event_queue=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"event_slots") ) { event_slots=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"event_filters") ) { event_filters=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"event_schedules") ) { event_schedules=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"event_connections") ) { event_connections=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Events_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("event_queue"));
	outFields->push(HX_CSTRING("event_connections"));
	outFields->push(HX_CSTRING("event_slots"));
	outFields->push(HX_CSTRING("event_filters"));
	outFields->push(HX_CSTRING("event_schedules"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(Events_obj,event_queue),HX_CSTRING("event_queue")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(Events_obj,event_connections),HX_CSTRING("event_connections")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(Events_obj,event_slots),HX_CSTRING("event_slots")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(Events_obj,event_filters),HX_CSTRING("event_filters")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(Events_obj,event_schedules),HX_CSTRING("event_schedules")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("event_queue"),
	HX_CSTRING("event_connections"),
	HX_CSTRING("event_slots"),
	HX_CSTRING("event_filters"),
	HX_CSTRING("event_schedules"),
	HX_CSTRING("destroy"),
	HX_CSTRING("clear"),
	HX_CSTRING("does_filter_event"),
	HX_CSTRING("listen"),
	HX_CSTRING("disconnect"),
	HX_CSTRING("queue"),
	HX_CSTRING("dequeue"),
	HX_CSTRING("process"),
	HX_CSTRING("fire"),
	HX_CSTRING("schedule"),
	HX_CSTRING("unschedule"),
	HX_CSTRING("tag_properties"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Events_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Events_obj::__mClass,"__mClass");
};

#endif

Class Events_obj::__mClass;

void Events_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("luxe.Events"), hx::TCanCast< Events_obj> ,sStaticFields,sMemberFields,
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

void Events_obj::__boot()
{
}

} // end namespace luxe
