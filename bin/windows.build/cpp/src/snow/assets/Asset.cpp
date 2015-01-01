#include <hxcpp.h>

#ifndef INCLUDED_snow_assets_Asset
#include <snow/assets/Asset.h>
#endif
#ifndef INCLUDED_snow_assets_Assets
#include <snow/assets/Assets.h>
#endif
namespace snow{
namespace assets{

Void Asset_obj::__construct(::snow::assets::Assets _assets,Dynamic _info)
{
HX_STACK_FRAME("snow.assets.Asset","new",0x69a8ad62,"snow.assets.Asset.new","snow/assets/Asset.hx",8,0xe65f266e)
HX_STACK_THIS(this)
HX_STACK_ARG(_assets,"_assets")
HX_STACK_ARG(_info,"_info")
{
	HX_STACK_LINE(20)
	this->loaded = false;
	HX_STACK_LINE(26)
	this->assets = _assets;
	HX_STACK_LINE(27)
	this->info = _info;
	HX_STACK_LINE(28)
	this->id = this->info->__Field(HX_CSTRING("id"),true);
}
;
	return null();
}

//Asset_obj::~Asset_obj() { }

Dynamic Asset_obj::__CreateEmpty() { return  new Asset_obj; }
hx::ObjectPtr< Asset_obj > Asset_obj::__new(::snow::assets::Assets _assets,Dynamic _info)
{  hx::ObjectPtr< Asset_obj > result = new Asset_obj();
	result->__construct(_assets,_info);
	return result;}

Dynamic Asset_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Asset_obj > result = new Asset_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}


Asset_obj::Asset_obj()
{
}

void Asset_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Asset);
	HX_MARK_MEMBER_NAME(assets,"assets");
	HX_MARK_MEMBER_NAME(id,"id");
	HX_MARK_MEMBER_NAME(info,"info");
	HX_MARK_MEMBER_NAME(type,"type");
	HX_MARK_MEMBER_NAME(loaded,"loaded");
	HX_MARK_END_CLASS();
}

void Asset_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(assets,"assets");
	HX_VISIT_MEMBER_NAME(id,"id");
	HX_VISIT_MEMBER_NAME(info,"info");
	HX_VISIT_MEMBER_NAME(type,"type");
	HX_VISIT_MEMBER_NAME(loaded,"loaded");
}

Dynamic Asset_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return id; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"info") ) { return info; }
		if (HX_FIELD_EQ(inName,"type") ) { return type; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"assets") ) { return assets; }
		if (HX_FIELD_EQ(inName,"loaded") ) { return loaded; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Asset_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< ::String >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"info") ) { info=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"assets") ) { assets=inValue.Cast< ::snow::assets::Assets >(); return inValue; }
		if (HX_FIELD_EQ(inName,"loaded") ) { loaded=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Asset_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("assets"));
	outFields->push(HX_CSTRING("id"));
	outFields->push(HX_CSTRING("info"));
	outFields->push(HX_CSTRING("type"));
	outFields->push(HX_CSTRING("loaded"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::snow::assets::Assets*/ ,(int)offsetof(Asset_obj,assets),HX_CSTRING("assets")},
	{hx::fsString,(int)offsetof(Asset_obj,id),HX_CSTRING("id")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Asset_obj,info),HX_CSTRING("info")},
	{hx::fsInt,(int)offsetof(Asset_obj,type),HX_CSTRING("type")},
	{hx::fsBool,(int)offsetof(Asset_obj,loaded),HX_CSTRING("loaded")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("assets"),
	HX_CSTRING("id"),
	HX_CSTRING("info"),
	HX_CSTRING("type"),
	HX_CSTRING("loaded"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Asset_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Asset_obj::__mClass,"__mClass");
};

#endif

Class Asset_obj::__mClass;

void Asset_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("snow.assets.Asset"), hx::TCanCast< Asset_obj> ,sStaticFields,sMemberFields,
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

void Asset_obj::__boot()
{
}

} // end namespace snow
} // end namespace assets
