#include <hxcpp.h>

#ifndef INCLUDED_Luxe
#include <Luxe.h>
#endif
#ifndef INCLUDED_luxe_resource_Resource
#include <luxe/resource/Resource.h>
#endif
#ifndef INCLUDED_luxe_resource_ResourceManager
#include <luxe/resource/ResourceManager.h>
#endif
#ifndef INCLUDED_luxe_resource_ResourceType
#include <luxe/resource/ResourceType.h>
#endif
namespace luxe{
namespace resource{

Void Resource_obj::__construct(::luxe::resource::ResourceManager _manager,::luxe::resource::ResourceType _type,Dynamic _load_time)
{
HX_STACK_FRAME("luxe.resource.Resource","new",0x99ea21c8,"luxe.resource.Resource.new","luxe/resource/Resource.hx",20,0x204e02c8)
HX_STACK_THIS(this)
HX_STACK_ARG(_manager,"_manager")
HX_STACK_ARG(_type,"_type")
HX_STACK_ARG(_load_time,"_load_time")
{
	HX_STACK_LINE(29)
	this->dropped = false;
	HX_STACK_LINE(28)
	this->time_created = (int)0;
	HX_STACK_LINE(27)
	this->time_to_load = (int)0;
	HX_STACK_LINE(26)
	this->persistent = false;
	HX_STACK_LINE(34)
	if (((_manager == null()))){
		HX_STACK_LINE(34)
		this->manager = ::Luxe_obj::resources;
	}
	else{
		HX_STACK_LINE(34)
		this->manager = _manager;
	}
	HX_STACK_LINE(35)
	this->type = _type;
	HX_STACK_LINE(37)
	this->time_to_load = _load_time;
	HX_STACK_LINE(38)
	Float _g = ::Luxe_obj::get_time();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(38)
	this->time_created = _g;
	HX_STACK_LINE(40)
	this->manager->add(hx::ObjectPtr<OBJ_>(this));
}
;
	return null();
}

//Resource_obj::~Resource_obj() { }

Dynamic Resource_obj::__CreateEmpty() { return  new Resource_obj; }
hx::ObjectPtr< Resource_obj > Resource_obj::__new(::luxe::resource::ResourceManager _manager,::luxe::resource::ResourceType _type,Dynamic _load_time)
{  hx::ObjectPtr< Resource_obj > result = new Resource_obj();
	result->__construct(_manager,_type,_load_time);
	return result;}

Dynamic Resource_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Resource_obj > result = new Resource_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

Void Resource_obj::drop( ){
{
		HX_STACK_FRAME("luxe.resource.Resource","drop",0x0c6121c7,"luxe.resource.Resource.drop","luxe/resource/Resource.hx",45,0x204e02c8)
		HX_STACK_THIS(this)
		HX_STACK_LINE(45)
		if ((!(this->dropped))){
			HX_STACK_LINE(46)
			this->dropped = true;
			HX_STACK_LINE(47)
			this->manager->remove(hx::ObjectPtr<OBJ_>(this));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Resource_obj,drop,(void))


Resource_obj::Resource_obj()
{
}

void Resource_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Resource);
	HX_MARK_MEMBER_NAME(manager,"manager");
	HX_MARK_MEMBER_NAME(type,"type");
	HX_MARK_MEMBER_NAME(id,"id");
	HX_MARK_MEMBER_NAME(persistent,"persistent");
	HX_MARK_MEMBER_NAME(time_to_load,"time_to_load");
	HX_MARK_MEMBER_NAME(time_created,"time_created");
	HX_MARK_MEMBER_NAME(dropped,"dropped");
	HX_MARK_END_CLASS();
}

void Resource_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(manager,"manager");
	HX_VISIT_MEMBER_NAME(type,"type");
	HX_VISIT_MEMBER_NAME(id,"id");
	HX_VISIT_MEMBER_NAME(persistent,"persistent");
	HX_VISIT_MEMBER_NAME(time_to_load,"time_to_load");
	HX_VISIT_MEMBER_NAME(time_created,"time_created");
	HX_VISIT_MEMBER_NAME(dropped,"dropped");
}

Dynamic Resource_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return id; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { return type; }
		if (HX_FIELD_EQ(inName,"drop") ) { return drop_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"manager") ) { return manager; }
		if (HX_FIELD_EQ(inName,"dropped") ) { return dropped; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"persistent") ) { return persistent; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"time_to_load") ) { return time_to_load; }
		if (HX_FIELD_EQ(inName,"time_created") ) { return time_created; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Resource_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< ::String >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast< ::luxe::resource::ResourceType >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"manager") ) { manager=inValue.Cast< ::luxe::resource::ResourceManager >(); return inValue; }
		if (HX_FIELD_EQ(inName,"dropped") ) { dropped=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"persistent") ) { persistent=inValue.Cast< bool >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"time_to_load") ) { time_to_load=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"time_created") ) { time_created=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Resource_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("manager"));
	outFields->push(HX_CSTRING("type"));
	outFields->push(HX_CSTRING("id"));
	outFields->push(HX_CSTRING("persistent"));
	outFields->push(HX_CSTRING("time_to_load"));
	outFields->push(HX_CSTRING("time_created"));
	outFields->push(HX_CSTRING("dropped"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::luxe::resource::ResourceManager*/ ,(int)offsetof(Resource_obj,manager),HX_CSTRING("manager")},
	{hx::fsObject /*::luxe::resource::ResourceType*/ ,(int)offsetof(Resource_obj,type),HX_CSTRING("type")},
	{hx::fsString,(int)offsetof(Resource_obj,id),HX_CSTRING("id")},
	{hx::fsBool,(int)offsetof(Resource_obj,persistent),HX_CSTRING("persistent")},
	{hx::fsFloat,(int)offsetof(Resource_obj,time_to_load),HX_CSTRING("time_to_load")},
	{hx::fsFloat,(int)offsetof(Resource_obj,time_created),HX_CSTRING("time_created")},
	{hx::fsBool,(int)offsetof(Resource_obj,dropped),HX_CSTRING("dropped")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("manager"),
	HX_CSTRING("type"),
	HX_CSTRING("id"),
	HX_CSTRING("persistent"),
	HX_CSTRING("time_to_load"),
	HX_CSTRING("time_created"),
	HX_CSTRING("dropped"),
	HX_CSTRING("drop"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Resource_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Resource_obj::__mClass,"__mClass");
};

#endif

Class Resource_obj::__mClass;

void Resource_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("luxe.resource.Resource"), hx::TCanCast< Resource_obj> ,sStaticFields,sMemberFields,
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

void Resource_obj::__boot()
{
}

} // end namespace luxe
} // end namespace resource
