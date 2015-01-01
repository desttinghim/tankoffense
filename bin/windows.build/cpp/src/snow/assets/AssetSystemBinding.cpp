#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_snow_assets_AssetSystemBinding
#include <snow/assets/AssetSystemBinding.h>
#endif
#ifndef INCLUDED_snow_assets_Assets
#include <snow/assets/Assets.h>
#endif
#ifndef INCLUDED_snow_platform_native_utils_ByteArray
#include <snow/platform/native/utils/ByteArray.h>
#endif
#ifndef INCLUDED_snow_utils_AbstractClass
#include <snow/utils/AbstractClass.h>
#endif
#ifndef INCLUDED_snow_utils_IDataInput
#include <snow/utils/IDataInput.h>
#endif
#ifndef INCLUDED_snow_utils_IMemoryRange
#include <snow/utils/IMemoryRange.h>
#endif
namespace snow{
namespace assets{

Void AssetSystemBinding_obj::__construct()
{
	return null();
}

//AssetSystemBinding_obj::~AssetSystemBinding_obj() { }

Dynamic AssetSystemBinding_obj::__CreateEmpty() { return  new AssetSystemBinding_obj; }
hx::ObjectPtr< AssetSystemBinding_obj > AssetSystemBinding_obj::__new()
{  hx::ObjectPtr< AssetSystemBinding_obj > result = new AssetSystemBinding_obj();
	result->__construct();
	return result;}

Dynamic AssetSystemBinding_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< AssetSystemBinding_obj > result = new AssetSystemBinding_obj();
	result->__construct();
	return result;}

hx::Object *AssetSystemBinding_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::snow::utils::AbstractClass_obj)) return operator ::snow::utils::AbstractClass_obj *();
	return super::__ToInterface(inType);
}

bool AssetSystemBinding_obj::exists( ::String _id,Dynamic __o__strict){
Dynamic _strict = __o__strict.Default(true);
	HX_STACK_FRAME("snow.assets.AssetSystemBinding","exists",0xc3d733c4,"snow.assets.AssetSystemBinding.exists","snow/utils/AbstractClass.hx",142,0x08288ed2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_id,"_id")
	HX_STACK_ARG(_strict,"_strict")
{
		HX_STACK_LINE(142)
		HX_STACK_DO_THROW(HX_CSTRING("abstract method, must override"));
		HX_STACK_LINE(142)
		return false;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(AssetSystemBinding_obj,exists,return )

Dynamic AssetSystemBinding_obj::image_load_info( ::String _path,Dynamic __o__components,Dynamic _onload){
Dynamic _components = __o__components.Default(4);
	HX_STACK_FRAME("snow.assets.AssetSystemBinding","image_load_info",0x39a9985b,"snow.assets.AssetSystemBinding.image_load_info","snow/utils/AbstractClass.hx",142,0x08288ed2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_path,"_path")
	HX_STACK_ARG(_components,"_components")
	HX_STACK_ARG(_onload,"_onload")
{
		HX_STACK_LINE(142)
		HX_STACK_DO_THROW(HX_CSTRING("abstract method, must override"));
		HX_STACK_LINE(142)
		return null();
	}
}


HX_DEFINE_DYNAMIC_FUNC3(AssetSystemBinding_obj,image_load_info,return )

Dynamic AssetSystemBinding_obj::image_info_from_bytes( ::String _path,::snow::platform::native::utils::ByteArray _bytes,Dynamic __o__components){
Dynamic _components = __o__components.Default(4);
	HX_STACK_FRAME("snow.assets.AssetSystemBinding","image_info_from_bytes",0x076966fb,"snow.assets.AssetSystemBinding.image_info_from_bytes","snow/utils/AbstractClass.hx",142,0x08288ed2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_path,"_path")
	HX_STACK_ARG(_bytes,"_bytes")
	HX_STACK_ARG(_components,"_components")
{
		HX_STACK_LINE(142)
		HX_STACK_DO_THROW(HX_CSTRING("abstract method, must override"));
		HX_STACK_LINE(142)
		return null();
	}
}


HX_DEFINE_DYNAMIC_FUNC3(AssetSystemBinding_obj,image_info_from_bytes,return )

Dynamic AssetSystemBinding_obj::audio_load_info( ::String _path,Dynamic _format,Dynamic __o__load,Dynamic _onload){
Dynamic _load = __o__load.Default(true);
	HX_STACK_FRAME("snow.assets.AssetSystemBinding","audio_load_info",0x04a7b996,"snow.assets.AssetSystemBinding.audio_load_info","snow/utils/AbstractClass.hx",142,0x08288ed2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_path,"_path")
	HX_STACK_ARG(_format,"_format")
	HX_STACK_ARG(_load,"_load")
	HX_STACK_ARG(_onload,"_onload")
{
		HX_STACK_LINE(142)
		HX_STACK_DO_THROW(HX_CSTRING("abstract method, must override"));
		HX_STACK_LINE(142)
		return null();
	}
}


HX_DEFINE_DYNAMIC_FUNC4(AssetSystemBinding_obj,audio_load_info,return )

bool AssetSystemBinding_obj::audio_seek_source( Dynamic _info,int _to){
	HX_STACK_FRAME("snow.assets.AssetSystemBinding","audio_seek_source",0xc571cef1,"snow.assets.AssetSystemBinding.audio_seek_source","snow/utils/AbstractClass.hx",142,0x08288ed2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_info,"_info")
	HX_STACK_ARG(_to,"_to")
	HX_STACK_LINE(142)
	HX_STACK_DO_THROW(HX_CSTRING("abstract method, must override"));
	HX_STACK_LINE(142)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC2(AssetSystemBinding_obj,audio_seek_source,return )

Dynamic AssetSystemBinding_obj::audio_load_portion( Dynamic _info,int _start,int _len){
	HX_STACK_FRAME("snow.assets.AssetSystemBinding","audio_load_portion",0x3f3698bf,"snow.assets.AssetSystemBinding.audio_load_portion","snow/utils/AbstractClass.hx",142,0x08288ed2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_info,"_info")
	HX_STACK_ARG(_start,"_start")
	HX_STACK_ARG(_len,"_len")
	HX_STACK_LINE(142)
	HX_STACK_DO_THROW(HX_CSTRING("abstract method, must override"));
	HX_STACK_LINE(142)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC3(AssetSystemBinding_obj,audio_load_portion,return )


AssetSystemBinding_obj::AssetSystemBinding_obj()
{
}

void AssetSystemBinding_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(AssetSystemBinding);
	HX_MARK_MEMBER_NAME(manager,"manager");
	HX_MARK_END_CLASS();
}

void AssetSystemBinding_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(manager,"manager");
}

Dynamic AssetSystemBinding_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"exists") ) { return exists_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"manager") ) { return manager; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"image_load_info") ) { return image_load_info_dyn(); }
		if (HX_FIELD_EQ(inName,"audio_load_info") ) { return audio_load_info_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"audio_seek_source") ) { return audio_seek_source_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"audio_load_portion") ) { return audio_load_portion_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"image_info_from_bytes") ) { return image_info_from_bytes_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic AssetSystemBinding_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"manager") ) { manager=inValue.Cast< ::snow::assets::Assets >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void AssetSystemBinding_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("manager"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::snow::assets::Assets*/ ,(int)offsetof(AssetSystemBinding_obj,manager),HX_CSTRING("manager")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("manager"),
	HX_CSTRING("exists"),
	HX_CSTRING("image_load_info"),
	HX_CSTRING("image_info_from_bytes"),
	HX_CSTRING("audio_load_info"),
	HX_CSTRING("audio_seek_source"),
	HX_CSTRING("audio_load_portion"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AssetSystemBinding_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AssetSystemBinding_obj::__mClass,"__mClass");
};

#endif

Class AssetSystemBinding_obj::__mClass;

void AssetSystemBinding_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("snow.assets.AssetSystemBinding"), hx::TCanCast< AssetSystemBinding_obj> ,sStaticFields,sMemberFields,
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

void AssetSystemBinding_obj::__boot()
{
}

} // end namespace snow
} // end namespace assets
