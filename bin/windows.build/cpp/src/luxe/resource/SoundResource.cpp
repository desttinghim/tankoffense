#include <hxcpp.h>

#ifndef INCLUDED_luxe_resource_Resource
#include <luxe/resource/Resource.h>
#endif
#ifndef INCLUDED_luxe_resource_ResourceManager
#include <luxe/resource/ResourceManager.h>
#endif
#ifndef INCLUDED_luxe_resource_ResourceType
#include <luxe/resource/ResourceType.h>
#endif
#ifndef INCLUDED_luxe_resource_SoundResource
#include <luxe/resource/SoundResource.h>
#endif
namespace luxe{
namespace resource{

Void SoundResource_obj::__construct(::String _id,::String _name,::luxe::resource::ResourceManager _manager)
{
HX_STACK_FRAME("luxe.resource.SoundResource","new",0xd5abee27,"luxe.resource.SoundResource.new","luxe/resource/Resource.hx",119,0x204e02c8)
HX_STACK_THIS(this)
HX_STACK_ARG(_id,"_id")
HX_STACK_ARG(_name,"_name")
HX_STACK_ARG(_manager,"_manager")
{
	HX_STACK_LINE(121)
	this->id = _id;
	HX_STACK_LINE(123)
	super::__construct(_manager,::luxe::resource::ResourceType_obj::sound,null());
	HX_STACK_LINE(125)
	this->name = _name;
}
;
	return null();
}

//SoundResource_obj::~SoundResource_obj() { }

Dynamic SoundResource_obj::__CreateEmpty() { return  new SoundResource_obj; }
hx::ObjectPtr< SoundResource_obj > SoundResource_obj::__new(::String _id,::String _name,::luxe::resource::ResourceManager _manager)
{  hx::ObjectPtr< SoundResource_obj > result = new SoundResource_obj();
	result->__construct(_id,_name,_manager);
	return result;}

Dynamic SoundResource_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< SoundResource_obj > result = new SoundResource_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}


SoundResource_obj::SoundResource_obj()
{
}

void SoundResource_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SoundResource);
	HX_MARK_MEMBER_NAME(name,"name");
	::luxe::resource::Resource_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void SoundResource_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(name,"name");
	::luxe::resource::Resource_obj::__Visit(HX_VISIT_ARG);
}

Dynamic SoundResource_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return name; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic SoundResource_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void SoundResource_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("name"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(SoundResource_obj,name),HX_CSTRING("name")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("name"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SoundResource_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SoundResource_obj::__mClass,"__mClass");
};

#endif

Class SoundResource_obj::__mClass;

void SoundResource_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("luxe.resource.SoundResource"), hx::TCanCast< SoundResource_obj> ,sStaticFields,sMemberFields,
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

void SoundResource_obj::__boot()
{
}

} // end namespace luxe
} // end namespace resource
