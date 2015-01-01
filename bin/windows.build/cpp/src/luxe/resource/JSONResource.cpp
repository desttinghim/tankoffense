#include <hxcpp.h>

#ifndef INCLUDED_luxe_resource_JSONResource
#include <luxe/resource/JSONResource.h>
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

Void JSONResource_obj::__construct(::String _id,Dynamic _json,::luxe::resource::ResourceManager _manager)
{
HX_STACK_FRAME("luxe.resource.JSONResource","new",0x58905bf0,"luxe.resource.JSONResource.new","luxe/resource/Resource.hx",80,0x204e02c8)
HX_STACK_THIS(this)
HX_STACK_ARG(_id,"_id")
HX_STACK_ARG(_json,"_json")
HX_STACK_ARG(_manager,"_manager")
{
	HX_STACK_LINE(82)
	this->id = _id;
	HX_STACK_LINE(84)
	super::__construct(_manager,::luxe::resource::ResourceType_obj::json,null());
	HX_STACK_LINE(86)
	this->json = _json;
}
;
	return null();
}

//JSONResource_obj::~JSONResource_obj() { }

Dynamic JSONResource_obj::__CreateEmpty() { return  new JSONResource_obj; }
hx::ObjectPtr< JSONResource_obj > JSONResource_obj::__new(::String _id,Dynamic _json,::luxe::resource::ResourceManager _manager)
{  hx::ObjectPtr< JSONResource_obj > result = new JSONResource_obj();
	result->__construct(_id,_json,_manager);
	return result;}

Dynamic JSONResource_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< JSONResource_obj > result = new JSONResource_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}


JSONResource_obj::JSONResource_obj()
{
}

void JSONResource_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(JSONResource);
	HX_MARK_MEMBER_NAME(json,"json");
	::luxe::resource::Resource_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void JSONResource_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(json,"json");
	::luxe::resource::Resource_obj::__Visit(HX_VISIT_ARG);
}

Dynamic JSONResource_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"json") ) { return json; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic JSONResource_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"json") ) { json=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void JSONResource_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("json"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(JSONResource_obj,json),HX_CSTRING("json")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("json"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(JSONResource_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(JSONResource_obj::__mClass,"__mClass");
};

#endif

Class JSONResource_obj::__mClass;

void JSONResource_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("luxe.resource.JSONResource"), hx::TCanCast< JSONResource_obj> ,sStaticFields,sMemberFields,
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

void JSONResource_obj::__boot()
{
}

} // end namespace luxe
} // end namespace resource
