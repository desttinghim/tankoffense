#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_snow_Snow
#include <snow/Snow.h>
#endif
#ifndef INCLUDED_snow_assets_Asset
#include <snow/assets/Asset.h>
#endif
#ifndef INCLUDED_snow_assets_AssetImage
#include <snow/assets/AssetImage.h>
#endif
#ifndef INCLUDED_snow_assets_AssetSystemBinding
#include <snow/assets/AssetSystemBinding.h>
#endif
#ifndef INCLUDED_snow_assets_Assets
#include <snow/assets/Assets.h>
#endif
#ifndef INCLUDED_snow_platform_native_assets_AssetSystem
#include <snow/platform/native/assets/AssetSystem.h>
#endif
#ifndef INCLUDED_snow_platform_native_utils_ArrayBufferView
#include <snow/platform/native/utils/ArrayBufferView.h>
#endif
#ifndef INCLUDED_snow_platform_native_utils_ByteArray
#include <snow/platform/native/utils/ByteArray.h>
#endif
#ifndef INCLUDED_snow_platform_native_utils_UInt8Array
#include <snow/platform/native/utils/UInt8Array.h>
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

Void AssetImage_obj::__construct(::snow::assets::Assets _assets,Dynamic _info,Dynamic __o__components)
{
HX_STACK_FRAME("snow.assets.AssetImage","new",0xc229c73d,"snow.assets.AssetImage.new","snow/assets/AssetImage.hx",12,0x636c68b3)
HX_STACK_THIS(this)
HX_STACK_ARG(_assets,"_assets")
HX_STACK_ARG(_info,"_info")
HX_STACK_ARG(__o__components,"_components")
Dynamic _components = __o__components.Default(4);
{
	HX_STACK_LINE(18)
	this->components = (int)4;
	HX_STACK_LINE(24)
	super::__construct(_assets,_info);
	HX_STACK_LINE(25)
	this->type = (int)2;
	HX_STACK_LINE(26)
	this->components = _components;
}
;
	return null();
}

//AssetImage_obj::~AssetImage_obj() { }

Dynamic AssetImage_obj::__CreateEmpty() { return  new AssetImage_obj; }
hx::ObjectPtr< AssetImage_obj > AssetImage_obj::__new(::snow::assets::Assets _assets,Dynamic _info,Dynamic __o__components)
{  hx::ObjectPtr< AssetImage_obj > result = new AssetImage_obj();
	result->__construct(_assets,_info,__o__components);
	return result;}

Dynamic AssetImage_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< AssetImage_obj > result = new AssetImage_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

Void AssetImage_obj::load( Dynamic onload){
{
		HX_STACK_FRAME("snow.assets.AssetImage","load",0x2119a4a9,"snow.assets.AssetImage.load","snow/assets/AssetImage.hx",32,0x636c68b3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(onload,"onload")
		HX_STACK_LINE(32)
		Dynamic onload1 = Dynamic( Array_obj<Dynamic>::__new().Add(onload));		HX_STACK_VAR(onload1,"onload1");
		HX_STACK_LINE(32)
		Array< ::Dynamic > _g = Array_obj< ::Dynamic >::__new().Add(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(34)
		this->loaded = false;
		HX_STACK_LINE(36)
		this->image = null();

		HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_1_1,Array< ::Dynamic >,_g,Dynamic,onload1)
		Void run(Dynamic _image){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","snow/assets/AssetImage.hx",39,0x636c68b3)
			HX_STACK_ARG(_image,"_image")
			{
				HX_STACK_LINE(41)
				if (((_image != null()))){
					HX_STACK_LINE(42)
					_g->__get((int)0).StaticCast< ::snow::assets::AssetImage >()->image = _image;
					HX_STACK_LINE(43)
					_g->__get((int)0).StaticCast< ::snow::assets::AssetImage >()->loaded = true;
				}
				HX_STACK_LINE(46)
				if (((onload1->__GetItem((int)0) != null()))){

					HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_3_1,Array< ::Dynamic >,_g,Dynamic,onload1)
					Void run(){
						HX_STACK_FRAME("*","_Function_3_1",0x520271b9,"*._Function_3_1","snow/assets/AssetImage.hx",48,0x636c68b3)
						{
							HX_STACK_LINE(48)
							onload1->__GetItem((int)0)(_g->__get((int)0).StaticCast< ::snow::assets::AssetImage >()).Cast< Void >();
						}
						return null();
					}
					HX_END_LOCAL_FUNC0((void))

					HX_STACK_LINE(47)
					::snow::Snow_obj::next( Dynamic(new _Function_3_1(_g,onload1)));
				}
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(39)
		this->assets->platform->image_load_info(this->info->__Field(HX_CSTRING("path"),true),this->components, Dynamic(new _Function_1_1(_g,onload1)));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(AssetImage_obj,load,(void))

Void AssetImage_obj::load_from_bytes( ::snow::platform::native::utils::ByteArray bytes,Dynamic onload){
{
		HX_STACK_FRAME("snow.assets.AssetImage","load_from_bytes",0xd7d8e7ac,"snow.assets.AssetImage.load_from_bytes","snow/assets/AssetImage.hx",57,0x636c68b3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(bytes,"bytes")
		HX_STACK_ARG(onload,"onload")
		HX_STACK_LINE(57)
		Dynamic onload1 = Dynamic( Array_obj<Dynamic>::__new().Add(onload));		HX_STACK_VAR(onload1,"onload1");
		HX_STACK_LINE(57)
		Array< ::Dynamic > _g = Array_obj< ::Dynamic >::__new().Add(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(59)
		this->loaded = false;
		HX_STACK_LINE(62)
		this->image = null();
		HX_STACK_LINE(64)
		Dynamic _g1 = this->assets->platform->image_info_from_bytes(this->info->__Field(HX_CSTRING("path"),true),bytes,this->components);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(64)
		this->image = _g1;
		HX_STACK_LINE(66)
		if (((onload1->__GetItem((int)0) != null()))){

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,Array< ::Dynamic >,_g,Dynamic,onload1)
			Void run(){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","snow/assets/AssetImage.hx",68,0x636c68b3)
				{
					HX_STACK_LINE(68)
					onload1->__GetItem((int)0)(_g->__get((int)0).StaticCast< ::snow::assets::AssetImage >()).Cast< Void >();
				}
				return null();
			}
			HX_END_LOCAL_FUNC0((void))

			HX_STACK_LINE(67)
			::snow::Snow_obj::next( Dynamic(new _Function_2_1(_g,onload1)));
		}
		HX_STACK_LINE(72)
		this->loaded = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(AssetImage_obj,load_from_bytes,(void))

Void AssetImage_obj::load_from_pixels( ::String _id,int _width,int _height,::snow::platform::native::utils::UInt8Array _pixels,Dynamic onload){
{
		HX_STACK_FRAME("snow.assets.AssetImage","load_from_pixels",0x6b2c68cc,"snow.assets.AssetImage.load_from_pixels","snow/assets/AssetImage.hx",77,0x636c68b3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_id,"_id")
		HX_STACK_ARG(_width,"_width")
		HX_STACK_ARG(_height,"_height")
		HX_STACK_ARG(_pixels,"_pixels")
		HX_STACK_ARG(onload,"onload")
		HX_STACK_LINE(77)
		Dynamic onload1 = Dynamic( Array_obj<Dynamic>::__new().Add(onload));		HX_STACK_VAR(onload1,"onload1");
		HX_STACK_LINE(77)
		Array< ::Dynamic > _g = Array_obj< ::Dynamic >::__new().Add(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(79)
		this->loaded = false;
		HX_STACK_LINE(82)
		this->image = null();
		struct _Function_1_1{
			inline static Dynamic Block( int &_height,int &_width,::String &_id,::snow::platform::native::utils::UInt8Array &_pixels){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","snow/assets/AssetImage.hx",84,0x636c68b3)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("id") , _id,false);
					__result->Add(HX_CSTRING("width") , _width,false);
					__result->Add(HX_CSTRING("width_actual") , _width,false);
					__result->Add(HX_CSTRING("height") , _height,false);
					__result->Add(HX_CSTRING("height_actual") , _height,false);
					__result->Add(HX_CSTRING("bpp") , (int)4,false);
					__result->Add(HX_CSTRING("bpp_source") , (int)4,false);
					__result->Add(HX_CSTRING("data") , _pixels,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(84)
		this->image = _Function_1_1::Block(_height,_width,_id,_pixels);
		HX_STACK_LINE(95)
		if (((onload1->__GetItem((int)0) != null()))){

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,Array< ::Dynamic >,_g,Dynamic,onload1)
			Void run(){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","snow/assets/AssetImage.hx",97,0x636c68b3)
				{
					HX_STACK_LINE(97)
					onload1->__GetItem((int)0)(_g->__get((int)0).StaticCast< ::snow::assets::AssetImage >()).Cast< Void >();
				}
				return null();
			}
			HX_END_LOCAL_FUNC0((void))

			HX_STACK_LINE(96)
			::snow::Snow_obj::next( Dynamic(new _Function_2_1(_g,onload1)));
		}
		HX_STACK_LINE(101)
		this->loaded = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(AssetImage_obj,load_from_pixels,(void))


AssetImage_obj::AssetImage_obj()
{
}

void AssetImage_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(AssetImage);
	HX_MARK_MEMBER_NAME(image,"image");
	HX_MARK_MEMBER_NAME(components,"components");
	::snow::assets::Asset_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void AssetImage_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(image,"image");
	HX_VISIT_MEMBER_NAME(components,"components");
	::snow::assets::Asset_obj::__Visit(HX_VISIT_ARG);
}

Dynamic AssetImage_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"load") ) { return load_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"image") ) { return image; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"components") ) { return components; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"load_from_bytes") ) { return load_from_bytes_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"load_from_pixels") ) { return load_from_pixels_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic AssetImage_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"image") ) { image=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"components") ) { components=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void AssetImage_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("image"));
	outFields->push(HX_CSTRING("components"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(AssetImage_obj,image),HX_CSTRING("image")},
	{hx::fsInt,(int)offsetof(AssetImage_obj,components),HX_CSTRING("components")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("image"),
	HX_CSTRING("components"),
	HX_CSTRING("load"),
	HX_CSTRING("load_from_bytes"),
	HX_CSTRING("load_from_pixels"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AssetImage_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AssetImage_obj::__mClass,"__mClass");
};

#endif

Class AssetImage_obj::__mClass;

void AssetImage_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("snow.assets.AssetImage"), hx::TCanCast< AssetImage_obj> ,sStaticFields,sMemberFields,
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

void AssetImage_obj::__boot()
{
}

} // end namespace snow
} // end namespace assets
