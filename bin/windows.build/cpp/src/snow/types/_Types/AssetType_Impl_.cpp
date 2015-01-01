#include <hxcpp.h>

#ifndef INCLUDED_snow_types__Types_AssetType_Impl_
#include <snow/types/_Types/AssetType_Impl_.h>
#endif
namespace snow{
namespace types{
namespace _Types{

Void AssetType_Impl__obj::__construct()
{
	return null();
}

//AssetType_Impl__obj::~AssetType_Impl__obj() { }

Dynamic AssetType_Impl__obj::__CreateEmpty() { return  new AssetType_Impl__obj; }
hx::ObjectPtr< AssetType_Impl__obj > AssetType_Impl__obj::__new()
{  hx::ObjectPtr< AssetType_Impl__obj > result = new AssetType_Impl__obj();
	result->__construct();
	return result;}

Dynamic AssetType_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< AssetType_Impl__obj > result = new AssetType_Impl__obj();
	result->__construct();
	return result;}

int AssetType_Impl__obj::bytes;

int AssetType_Impl__obj::text;

int AssetType_Impl__obj::image;

int AssetType_Impl__obj::audio;


AssetType_Impl__obj::AssetType_Impl__obj()
{
}

Dynamic AssetType_Impl__obj::__Field(const ::String &inName,bool inCallProp)
{
	return super::__Field(inName,inCallProp);
}

Dynamic AssetType_Impl__obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void AssetType_Impl__obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("bytes"),
	HX_CSTRING("text"),
	HX_CSTRING("image"),
	HX_CSTRING("audio"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AssetType_Impl__obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(AssetType_Impl__obj::bytes,"bytes");
	HX_MARK_MEMBER_NAME(AssetType_Impl__obj::text,"text");
	HX_MARK_MEMBER_NAME(AssetType_Impl__obj::image,"image");
	HX_MARK_MEMBER_NAME(AssetType_Impl__obj::audio,"audio");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AssetType_Impl__obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(AssetType_Impl__obj::bytes,"bytes");
	HX_VISIT_MEMBER_NAME(AssetType_Impl__obj::text,"text");
	HX_VISIT_MEMBER_NAME(AssetType_Impl__obj::image,"image");
	HX_VISIT_MEMBER_NAME(AssetType_Impl__obj::audio,"audio");
};

#endif

Class AssetType_Impl__obj::__mClass;

void AssetType_Impl__obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("snow.types._Types.AssetType_Impl_"), hx::TCanCast< AssetType_Impl__obj> ,sStaticFields,sMemberFields,
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

void AssetType_Impl__obj::__boot()
{
	bytes= (int)0;
	text= (int)1;
	image= (int)2;
	audio= (int)3;
}

} // end namespace snow
} // end namespace types
} // end namespace _Types
