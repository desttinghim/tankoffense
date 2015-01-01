#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_luxe_resource_DataResource
#include <luxe/resource/DataResource.h>
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
#ifndef INCLUDED_snow_platform_native_utils_ByteArray
#include <snow/platform/native/utils/ByteArray.h>
#endif
#ifndef INCLUDED_snow_utils_IDataInput
#include <snow/utils/IDataInput.h>
#endif
#ifndef INCLUDED_snow_utils_IMemoryRange
#include <snow/utils/IMemoryRange.h>
#endif
namespace luxe{
namespace resource{

Void DataResource_obj::__construct(::String _id,::snow::platform::native::utils::ByteArray _data,::luxe::resource::ResourceManager _manager)
{
HX_STACK_FRAME("luxe.resource.DataResource","new",0x23887f12,"luxe.resource.DataResource.new","luxe/resource/Resource.hx",99,0x204e02c8)
HX_STACK_THIS(this)
HX_STACK_ARG(_id,"_id")
HX_STACK_ARG(_data,"_data")
HX_STACK_ARG(_manager,"_manager")
{
	HX_STACK_LINE(101)
	this->id = _id;
	HX_STACK_LINE(103)
	super::__construct(_manager,::luxe::resource::ResourceType_obj::data,null());
	HX_STACK_LINE(105)
	this->data = _data;
}
;
	return null();
}

//DataResource_obj::~DataResource_obj() { }

Dynamic DataResource_obj::__CreateEmpty() { return  new DataResource_obj; }
hx::ObjectPtr< DataResource_obj > DataResource_obj::__new(::String _id,::snow::platform::native::utils::ByteArray _data,::luxe::resource::ResourceManager _manager)
{  hx::ObjectPtr< DataResource_obj > result = new DataResource_obj();
	result->__construct(_id,_data,_manager);
	return result;}

Dynamic DataResource_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< DataResource_obj > result = new DataResource_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}


DataResource_obj::DataResource_obj()
{
}

void DataResource_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(DataResource);
	HX_MARK_MEMBER_NAME(data,"data");
	::luxe::resource::Resource_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void DataResource_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(data,"data");
	::luxe::resource::Resource_obj::__Visit(HX_VISIT_ARG);
}

Dynamic DataResource_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { return data; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic DataResource_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { data=inValue.Cast< ::snow::platform::native::utils::ByteArray >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void DataResource_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("data"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::snow::platform::native::utils::ByteArray*/ ,(int)offsetof(DataResource_obj,data),HX_CSTRING("data")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("data"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DataResource_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DataResource_obj::__mClass,"__mClass");
};

#endif

Class DataResource_obj::__mClass;

void DataResource_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("luxe.resource.DataResource"), hx::TCanCast< DataResource_obj> ,sStaticFields,sMemberFields,
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

void DataResource_obj::__boot()
{
}

} // end namespace luxe
} // end namespace resource
