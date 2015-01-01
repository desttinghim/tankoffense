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
#ifndef INCLUDED_luxe_resource_TextResource
#include <luxe/resource/TextResource.h>
#endif
namespace luxe{
namespace resource{

Void TextResource_obj::__construct(::String _id,::String _text,::luxe::resource::ResourceManager _manager)
{
HX_STACK_FRAME("luxe.resource.TextResource","new",0x22782e15,"luxe.resource.TextResource.new","luxe/resource/Resource.hx",61,0x204e02c8)
HX_STACK_THIS(this)
HX_STACK_ARG(_id,"_id")
HX_STACK_ARG(_text,"_text")
HX_STACK_ARG(_manager,"_manager")
{
	HX_STACK_LINE(63)
	this->id = _id;
	HX_STACK_LINE(65)
	super::__construct(_manager,::luxe::resource::ResourceType_obj::text,null());
	HX_STACK_LINE(67)
	this->text = _text;
}
;
	return null();
}

//TextResource_obj::~TextResource_obj() { }

Dynamic TextResource_obj::__CreateEmpty() { return  new TextResource_obj; }
hx::ObjectPtr< TextResource_obj > TextResource_obj::__new(::String _id,::String _text,::luxe::resource::ResourceManager _manager)
{  hx::ObjectPtr< TextResource_obj > result = new TextResource_obj();
	result->__construct(_id,_text,_manager);
	return result;}

Dynamic TextResource_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TextResource_obj > result = new TextResource_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}


TextResource_obj::TextResource_obj()
{
}

void TextResource_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TextResource);
	HX_MARK_MEMBER_NAME(text,"text");
	::luxe::resource::Resource_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void TextResource_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(text,"text");
	::luxe::resource::Resource_obj::__Visit(HX_VISIT_ARG);
}

Dynamic TextResource_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"text") ) { return text; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic TextResource_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"text") ) { text=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TextResource_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("text"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(TextResource_obj,text),HX_CSTRING("text")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("text"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TextResource_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TextResource_obj::__mClass,"__mClass");
};

#endif

Class TextResource_obj::__mClass;

void TextResource_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("luxe.resource.TextResource"), hx::TCanCast< TextResource_obj> ,sStaticFields,sMemberFields,
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

void TextResource_obj::__boot()
{
}

} // end namespace luxe
} // end namespace resource
