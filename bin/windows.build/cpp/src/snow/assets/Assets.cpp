#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_Lambda
#include <Lambda.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_io_Path
#include <haxe/io/Path.h>
#endif
#ifndef INCLUDED_snow_Snow
#include <snow/Snow.h>
#endif
#ifndef INCLUDED_snow_assets_Asset
#include <snow/assets/Asset.h>
#endif
#ifndef INCLUDED_snow_assets_AssetAudio
#include <snow/assets/AssetAudio.h>
#endif
#ifndef INCLUDED_snow_assets_AssetBytes
#include <snow/assets/AssetBytes.h>
#endif
#ifndef INCLUDED_snow_assets_AssetImage
#include <snow/assets/AssetImage.h>
#endif
#ifndef INCLUDED_snow_assets_AssetSystemBinding
#include <snow/assets/AssetSystemBinding.h>
#endif
#ifndef INCLUDED_snow_assets_AssetText
#include <snow/assets/AssetText.h>
#endif
#ifndef INCLUDED_snow_assets_Assets
#include <snow/assets/Assets.h>
#endif
#ifndef INCLUDED_snow_platform_native_assets_AssetSystem
#include <snow/platform/native/assets/AssetSystem.h>
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

Void Assets_obj::__construct(::snow::Snow _lib)
{
HX_STACK_FRAME("snow.assets.Assets","new",0x9a4e2c75,"snow.assets.Assets.new","snow/assets/Assets.hx",20,0xda52227b)
HX_STACK_THIS(this)
HX_STACK_ARG(_lib,"_lib")
{
	HX_STACK_LINE(30)
	this->strict = true;
	HX_STACK_LINE(28)
	this->manifest_path = HX_CSTRING("manifest");
	HX_STACK_LINE(26)
	this->assets_root = HX_CSTRING("");
	HX_STACK_LINE(49)
	this->lib = _lib;
	HX_STACK_LINE(50)
	::haxe::ds::StringMap _g = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(50)
	this->list = _g;
	HX_STACK_LINE(51)
	::snow::platform::native::assets::AssetSystem _g1 = ::snow::platform::native::assets::AssetSystem_obj::__new(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(51)
	this->platform = _g1;
}
;
	return null();
}

//Assets_obj::~Assets_obj() { }

Dynamic Assets_obj::__CreateEmpty() { return  new Assets_obj; }
hx::ObjectPtr< Assets_obj > Assets_obj::__new(::snow::Snow _lib)
{  hx::ObjectPtr< Assets_obj > result = new Assets_obj();
	result->__construct(_lib);
	return result;}

Dynamic Assets_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Assets_obj > result = new Assets_obj();
	result->__construct(inArgs[0]);
	return result;}

Void Assets_obj::add( Dynamic _list){
{
		HX_STACK_FRAME("snow.assets.Assets","add",0x9a444e36,"snow.assets.Assets.add","snow/assets/Assets.hx",58,0xda52227b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_list,"_list")
		HX_STACK_LINE(58)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(58)
		while((true)){
			HX_STACK_LINE(58)
			if ((!(((_g < _list->__Field(HX_CSTRING("length"),true)))))){
				HX_STACK_LINE(58)
				break;
			}
			HX_STACK_LINE(58)
			Dynamic _asset = _list->__GetItem(_g);		HX_STACK_VAR(_asset,"_asset");
			HX_STACK_LINE(58)
			++(_g);
			HX_STACK_LINE(62)
			Array< ::String > images = Array_obj< ::String >::__new().Add(HX_CSTRING("psd")).Add(HX_CSTRING("bmp")).Add(HX_CSTRING("tga")).Add(HX_CSTRING("gif")).Add(HX_CSTRING("jpg")).Add(HX_CSTRING("png"));		HX_STACK_VAR(images,"images");
			HX_STACK_LINE(63)
			Array< ::String > sounds = Array_obj< ::String >::__new().Add(HX_CSTRING("pcm")).Add(HX_CSTRING("ogg")).Add(HX_CSTRING("wav"));		HX_STACK_VAR(sounds,"sounds");
			HX_STACK_LINE(65)
			if ((::Lambda_obj::has(images,_asset->__Field(HX_CSTRING("ext"),true)))){
				HX_STACK_LINE(66)
				_asset->__FieldRef(HX_CSTRING("type")) = HX_CSTRING("image");
			}
			else{
				HX_STACK_LINE(67)
				if ((::Lambda_obj::has(sounds,_asset->__Field(HX_CSTRING("ext"),true)))){
					HX_STACK_LINE(68)
					_asset->__FieldRef(HX_CSTRING("type")) = HX_CSTRING("sound");
				}
			}
			HX_STACK_LINE(73)
			this->list->set(_asset->__Field(HX_CSTRING("id"),true),_asset);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,add,(void))

Dynamic Assets_obj::get( ::String _id){
	HX_STACK_FRAME("snow.assets.Assets","get",0x9a48dcab,"snow.assets.Assets.get","snow/assets/Assets.hx",82,0xda52227b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_id,"_id")
	HX_STACK_LINE(82)
	return this->list->get(_id);
}


HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,get,return )

bool Assets_obj::listed( ::String _id){
	HX_STACK_FRAME("snow.assets.Assets","listed",0x2bc26748,"snow.assets.Assets.listed","snow/assets/Assets.hx",89,0xda52227b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_id,"_id")
	HX_STACK_LINE(89)
	return this->list->exists(_id);
}


HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,listed,return )

bool Assets_obj::exists( ::String _id,Dynamic __o__strict){
Dynamic _strict = __o__strict.Default(true);
	HX_STACK_FRAME("snow.assets.Assets","exists",0xfba8bce7,"snow.assets.Assets.exists","snow/assets/Assets.hx",98,0xda52227b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_id,"_id")
	HX_STACK_ARG(_strict,"_strict")
{
		HX_STACK_LINE(98)
		return this->platform->exists(_id,_strict);
	}
}


HX_DEFINE_DYNAMIC_FUNC2(Assets_obj,exists,return )

::String Assets_obj::path( ::String _id){
	HX_STACK_FRAME("snow.assets.Assets","path",0x6b681bf0,"snow.assets.Assets.path","snow/assets/Assets.hx",105,0xda52227b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_id,"_id")
	HX_STACK_LINE(107)
	if ((this->listed(_id))){
		HX_STACK_LINE(108)
		return this->get(_id)->__Field(HX_CSTRING("path"),true);
	}
	HX_STACK_LINE(111)
	return (this->assets_root + _id);
}


HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,path,return )

::snow::assets::AssetBytes Assets_obj::bytes( ::String _id,Dynamic options){
	HX_STACK_FRAME("snow.assets.Assets","bytes",0x8ff153c0,"snow.assets.Assets.bytes","snow/assets/Assets.hx",117,0xda52227b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_id,"_id")
	HX_STACK_ARG(options,"options")
	HX_STACK_LINE(119)
	bool _strict = this->strict;		HX_STACK_VAR(_strict,"_strict");
	HX_STACK_LINE(121)
	if (((bool((options != null())) && bool((options->__Field(HX_CSTRING("strict"),true) != null()))))){
		HX_STACK_LINE(122)
		_strict = options->__Field(HX_CSTRING("strict"),true);
	}
	HX_STACK_LINE(126)
	if ((this->exists(_id,_strict))){
		HX_STACK_LINE(128)
		Dynamic info = this->get(_id);		HX_STACK_VAR(info,"info");
		HX_STACK_LINE(130)
		if (((info == null()))){
			HX_STACK_LINE(131)
			Dynamic _g = this->info_from_id(_id,HX_CSTRING("bytes"));		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(131)
			info = _g;
		}
		HX_STACK_LINE(134)
		::snow::assets::AssetBytes asset = ::snow::assets::AssetBytes_obj::__new(hx::ObjectPtr<OBJ_>(this),info,(  (((options != null()))) ? Dynamic(options->__Field(HX_CSTRING("async"),true)) : Dynamic(null()) ));		HX_STACK_VAR(asset,"asset");
		HX_STACK_LINE(135)
		asset->load((  (((options != null()))) ? Dynamic(options->__Field(HX_CSTRING("onload"),true)) : Dynamic(null()) ));
		HX_STACK_LINE(137)
		return asset;
	}
	else{
		HX_STACK_LINE(140)
		this->exists_error(_id);
	}
	HX_STACK_LINE(143)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Assets_obj,bytes,return )

::snow::assets::AssetText Assets_obj::text( ::String _id,Dynamic options){
	HX_STACK_FRAME("snow.assets.Assets","text",0x6e1002f8,"snow.assets.Assets.text","snow/assets/Assets.hx",148,0xda52227b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_id,"_id")
	HX_STACK_ARG(options,"options")
	HX_STACK_LINE(150)
	bool _strict = this->strict;		HX_STACK_VAR(_strict,"_strict");
	HX_STACK_LINE(152)
	if (((bool((options != null())) && bool((options->__Field(HX_CSTRING("strict"),true) != null()))))){
		HX_STACK_LINE(153)
		_strict = options->__Field(HX_CSTRING("strict"),true);
	}
	HX_STACK_LINE(157)
	if ((this->exists(_id,_strict))){
		HX_STACK_LINE(159)
		Dynamic info = this->get(_id);		HX_STACK_VAR(info,"info");
		HX_STACK_LINE(161)
		if (((info == null()))){
			HX_STACK_LINE(162)
			Dynamic _g = this->info_from_id(_id,HX_CSTRING("text"));		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(162)
			info = _g;
		}
		HX_STACK_LINE(165)
		::snow::assets::AssetText asset = ::snow::assets::AssetText_obj::__new(hx::ObjectPtr<OBJ_>(this),info,(  (((options != null()))) ? Dynamic(options->__Field(HX_CSTRING("async"),true)) : Dynamic(null()) ));		HX_STACK_VAR(asset,"asset");
		HX_STACK_LINE(166)
		asset->load((  (((options != null()))) ? Dynamic(options->__Field(HX_CSTRING("onload"),true)) : Dynamic(null()) ));
		HX_STACK_LINE(168)
		return asset;
	}
	else{
		HX_STACK_LINE(171)
		this->exists_error(_id);
	}
	HX_STACK_LINE(174)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Assets_obj,text,return )

::snow::assets::AssetImage Assets_obj::image( ::String _id,Dynamic options){
	HX_STACK_FRAME("snow.assets.Assets","image",0x8fc26ab0,"snow.assets.Assets.image","snow/assets/Assets.hx",179,0xda52227b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_id,"_id")
	HX_STACK_ARG(options,"options")
	HX_STACK_LINE(181)
	bool _strict = this->strict;		HX_STACK_VAR(_strict,"_strict");
	HX_STACK_LINE(182)
	bool from_bytes = (bool((options != null())) && bool((options->__Field(HX_CSTRING("bytes"),true) != null())));		HX_STACK_VAR(from_bytes,"from_bytes");
	HX_STACK_LINE(184)
	if (((bool((options != null())) && bool((options->__Field(HX_CSTRING("strict"),true) != null()))))){
		HX_STACK_LINE(185)
		_strict = options->__Field(HX_CSTRING("strict"),true);
	}
	HX_STACK_LINE(189)
	if (((  ((!(this->exists(_id,_strict)))) ? bool(from_bytes) : bool(true) ))){
		HX_STACK_LINE(191)
		if (((options == null()))){
			struct _Function_3_1{
				inline static Dynamic Block( ){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","snow/assets/Assets.hx",192,0xda52227b)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_CSTRING("components") , (int)4,false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(192)
			options = _Function_3_1::Block();
		}
		HX_STACK_LINE(195)
		Dynamic info = this->get(_id);		HX_STACK_VAR(info,"info");
		HX_STACK_LINE(197)
		if (((info == null()))){
			HX_STACK_LINE(198)
			Dynamic _g = this->info_from_id(_id,HX_CSTRING("image"));		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(198)
			info = _g;
		}
		HX_STACK_LINE(201)
		Dynamic comp;		HX_STACK_VAR(comp,"comp");
		HX_STACK_LINE(201)
		if (((options->__Field(HX_CSTRING("components"),true) == null()))){
			HX_STACK_LINE(201)
			comp = (int)4;
		}
		else{
			HX_STACK_LINE(201)
			comp = options->__Field(HX_CSTRING("components"),true);
		}
		HX_STACK_LINE(203)
		::snow::assets::AssetImage asset = ::snow::assets::AssetImage_obj::__new(hx::ObjectPtr<OBJ_>(this),info,comp);		HX_STACK_VAR(asset,"asset");
		HX_STACK_LINE(205)
		if ((!(from_bytes))){
			HX_STACK_LINE(206)
			asset->load(options->__Field(HX_CSTRING("onload"),true));
		}
		else{
			HX_STACK_LINE(208)
			asset->load_from_bytes(options->__Field(HX_CSTRING("bytes"),true),options->__Field(HX_CSTRING("onload"),true));
		}
		HX_STACK_LINE(211)
		return asset;
	}
	else{
		HX_STACK_LINE(214)
		this->exists_error(_id);
	}
	HX_STACK_LINE(217)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Assets_obj,image,return )

::snow::assets::AssetAudio Assets_obj::audio( ::String _id,Dynamic options){
	HX_STACK_FRAME("snow.assets.Assets","audio",0xf9d9c42b,"snow.assets.Assets.audio","snow/assets/Assets.hx",222,0xda52227b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_id,"_id")
	HX_STACK_ARG(options,"options")
	HX_STACK_LINE(224)
	bool _strict = this->strict;		HX_STACK_VAR(_strict,"_strict");
	HX_STACK_LINE(226)
	if (((bool((options != null())) && bool((options->__Field(HX_CSTRING("strict"),true) != null()))))){
		HX_STACK_LINE(227)
		_strict = options->__Field(HX_CSTRING("strict"),true);
	}
	HX_STACK_LINE(231)
	if ((this->exists(_id,_strict))){
		HX_STACK_LINE(233)
		Dynamic info = this->get(_id);		HX_STACK_VAR(info,"info");
		HX_STACK_LINE(235)
		if (((info == null()))){
			HX_STACK_LINE(236)
			Dynamic _g = this->info_from_id(_id,HX_CSTRING("audio"));		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(236)
			info = _g;
		}
		HX_STACK_LINE(243)
		if (((options == null()))){
			struct _Function_3_1{
				inline static Dynamic Block( Dynamic &info){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","snow/assets/Assets.hx",244,0xda52227b)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_CSTRING("type") , info->__Field(HX_CSTRING("ext"),true),false);
						__result->Add(HX_CSTRING("load") , true,false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(244)
			options = _Function_3_1::Block(info);
		}
		else{
			HX_STACK_LINE(246)
			if (((bool((options->__Field(HX_CSTRING("type"),true) == null())) || bool((options->__Field(HX_CSTRING("type"),true) == HX_CSTRING("")))))){
				HX_STACK_LINE(247)
				options->__FieldRef(HX_CSTRING("type")) = info->__Field(HX_CSTRING("ext"),true);
			}
		}
		HX_STACK_LINE(251)
		int _type = (int)0;		HX_STACK_VAR(_type,"_type");
		HX_STACK_LINE(252)
		{
			HX_STACK_LINE(252)
			::String _g = options->__Field(HX_CSTRING("type"),true);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(252)
			::String _switch_1 = (_g);
			if (  ( _switch_1==HX_CSTRING("wav"))){
				HX_STACK_LINE(254)
				_type = (int)2;
			}
			else if (  ( _switch_1==HX_CSTRING("ogg"))){
				HX_STACK_LINE(257)
				_type = (int)1;
			}
			else if (  ( _switch_1==HX_CSTRING("pcm"))){
				HX_STACK_LINE(260)
				_type = (int)3;
			}
			else  {
				HX_STACK_LINE(263)
				this->load_error(_id,HX_CSTRING("unrecognized audio format"));
				HX_STACK_LINE(264)
				return null();
			}
;
;
		}
		HX_STACK_LINE(268)
		::snow::assets::AssetAudio asset = ::snow::assets::AssetAudio_obj::__new(hx::ObjectPtr<OBJ_>(this),info,_type,options->__Field(HX_CSTRING("load"),true));		HX_STACK_VAR(asset,"asset");
		HX_STACK_LINE(269)
		asset->load((  (((options != null()))) ? Dynamic(options->__Field(HX_CSTRING("onload"),true)) : Dynamic(null()) ));
		HX_STACK_LINE(271)
		return asset;
	}
	else{
		HX_STACK_LINE(274)
		this->exists_error(_id);
	}
	HX_STACK_LINE(277)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Assets_obj,audio,return )

Dynamic Assets_obj::info_from_id( ::String _id,::String _type){
	HX_STACK_FRAME("snow.assets.Assets","info_from_id",0xdd28340a,"snow.assets.Assets.info_from_id","snow/assets/Assets.hx",283,0xda52227b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_id,"_id")
	HX_STACK_ARG(_type,"_type")
	HX_STACK_LINE(287)
	::String _g = ::haxe::io::Path_obj::extension(_id);		HX_STACK_VAR(_g,"_g");
	struct _Function_1_1{
		inline static Dynamic Block( ::String &_type,::String &_g,::String &_id){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","snow/assets/Assets.hx",284,0xda52227b)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("id") , _id,false);
				__result->Add(HX_CSTRING("path") , _id,false);
				__result->Add(HX_CSTRING("ext") , _g,false);
				__result->Add(HX_CSTRING("type") , _type,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(284)
	return _Function_1_1::Block(_type,_g,_id);
}


HX_DEFINE_DYNAMIC_FUNC2(Assets_obj,info_from_id,return )

Void Assets_obj::exists_error( ::String _id){
{
		HX_STACK_FRAME("snow.assets.Assets","exists_error",0xe1ccf730,"snow.assets.Assets.exists_error","snow/assets/Assets.hx",294,0xda52227b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_id,"_id")
		HX_STACK_LINE(294)
		::haxe::Log_obj::trace((HX_CSTRING("   i / assets / ") + (((HX_CSTRING("not found \"") + _id) + HX_CSTRING("\"")))),hx::SourceInfo(HX_CSTRING("Assets.hx"),294,HX_CSTRING("snow.assets.Assets"),HX_CSTRING("exists_error")));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,exists_error,(void))

Void Assets_obj::load_error( ::String _id,::String __o_reason){
::String reason = __o_reason.Default(HX_CSTRING("unknown"));
	HX_STACK_FRAME("snow.assets.Assets","load_error",0xbb144e3a,"snow.assets.Assets.load_error","snow/assets/Assets.hx",298,0xda52227b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_id,"_id")
	HX_STACK_ARG(reason,"reason")
{
		HX_STACK_LINE(298)
		::haxe::Log_obj::trace((HX_CSTRING("   i / assets / ") + (((((HX_CSTRING("found \"") + _id) + HX_CSTRING("\" but it failed to load (")) + reason) + HX_CSTRING(")")))),hx::SourceInfo(HX_CSTRING("Assets.hx"),298,HX_CSTRING("snow.assets.Assets"),HX_CSTRING("load_error")));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Assets_obj,load_error,(void))


Assets_obj::Assets_obj()
{
}

void Assets_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Assets);
	HX_MARK_MEMBER_NAME(list,"list");
	HX_MARK_MEMBER_NAME(assets_root,"assets_root");
	HX_MARK_MEMBER_NAME(manifest_path,"manifest_path");
	HX_MARK_MEMBER_NAME(strict,"strict");
	HX_MARK_MEMBER_NAME(platform,"platform");
	HX_MARK_MEMBER_NAME(lib,"lib");
	HX_MARK_END_CLASS();
}

void Assets_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(list,"list");
	HX_VISIT_MEMBER_NAME(assets_root,"assets_root");
	HX_VISIT_MEMBER_NAME(manifest_path,"manifest_path");
	HX_VISIT_MEMBER_NAME(strict,"strict");
	HX_VISIT_MEMBER_NAME(platform,"platform");
	HX_VISIT_MEMBER_NAME(lib,"lib");
}

Dynamic Assets_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"lib") ) { return lib; }
		if (HX_FIELD_EQ(inName,"add") ) { return add_dyn(); }
		if (HX_FIELD_EQ(inName,"get") ) { return get_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"list") ) { return list; }
		if (HX_FIELD_EQ(inName,"path") ) { return path_dyn(); }
		if (HX_FIELD_EQ(inName,"text") ) { return text_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"bytes") ) { return bytes_dyn(); }
		if (HX_FIELD_EQ(inName,"image") ) { return image_dyn(); }
		if (HX_FIELD_EQ(inName,"audio") ) { return audio_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"strict") ) { return strict; }
		if (HX_FIELD_EQ(inName,"listed") ) { return listed_dyn(); }
		if (HX_FIELD_EQ(inName,"exists") ) { return exists_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"platform") ) { return platform; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"load_error") ) { return load_error_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"assets_root") ) { return assets_root; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"info_from_id") ) { return info_from_id_dyn(); }
		if (HX_FIELD_EQ(inName,"exists_error") ) { return exists_error_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"manifest_path") ) { return manifest_path; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Assets_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"lib") ) { lib=inValue.Cast< ::snow::Snow >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"list") ) { list=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"strict") ) { strict=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"platform") ) { platform=inValue.Cast< ::snow::platform::native::assets::AssetSystem >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"assets_root") ) { assets_root=inValue.Cast< ::String >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"manifest_path") ) { manifest_path=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Assets_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("list"));
	outFields->push(HX_CSTRING("assets_root"));
	outFields->push(HX_CSTRING("manifest_path"));
	outFields->push(HX_CSTRING("strict"));
	outFields->push(HX_CSTRING("platform"));
	outFields->push(HX_CSTRING("lib"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(Assets_obj,list),HX_CSTRING("list")},
	{hx::fsString,(int)offsetof(Assets_obj,assets_root),HX_CSTRING("assets_root")},
	{hx::fsString,(int)offsetof(Assets_obj,manifest_path),HX_CSTRING("manifest_path")},
	{hx::fsBool,(int)offsetof(Assets_obj,strict),HX_CSTRING("strict")},
	{hx::fsObject /*::snow::platform::native::assets::AssetSystem*/ ,(int)offsetof(Assets_obj,platform),HX_CSTRING("platform")},
	{hx::fsObject /*::snow::Snow*/ ,(int)offsetof(Assets_obj,lib),HX_CSTRING("lib")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("list"),
	HX_CSTRING("assets_root"),
	HX_CSTRING("manifest_path"),
	HX_CSTRING("strict"),
	HX_CSTRING("platform"),
	HX_CSTRING("lib"),
	HX_CSTRING("add"),
	HX_CSTRING("get"),
	HX_CSTRING("listed"),
	HX_CSTRING("exists"),
	HX_CSTRING("path"),
	HX_CSTRING("bytes"),
	HX_CSTRING("text"),
	HX_CSTRING("image"),
	HX_CSTRING("audio"),
	HX_CSTRING("info_from_id"),
	HX_CSTRING("exists_error"),
	HX_CSTRING("load_error"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Assets_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Assets_obj::__mClass,"__mClass");
};

#endif

Class Assets_obj::__mClass;

void Assets_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("snow.assets.Assets"), hx::TCanCast< Assets_obj> ,sStaticFields,sMemberFields,
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

void Assets_obj::__boot()
{
}

} // end namespace snow
} // end namespace assets
