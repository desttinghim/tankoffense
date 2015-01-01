#include <hxcpp.h>

#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_io_Path
#include <haxe/io/Path.h>
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
#ifndef INCLUDED_snow_utils_Libs
#include <snow/utils/Libs.h>
#endif
#ifndef INCLUDED_sys_FileSystem
#include <sys/FileSystem.h>
#endif
namespace snow{
namespace platform{
namespace native{
namespace assets{

Void AssetSystem_obj::__construct(::snow::assets::Assets _manager)
{
HX_STACK_FRAME("snow.platform.native.assets.AssetSystem","new",0xdcf87ced,"snow.platform.native.assets.AssetSystem.new","snow/platform/native/assets/AssetSystem.hx",18,0xc6d1b123)
HX_STACK_THIS(this)
HX_STACK_ARG(_manager,"_manager")
{
	HX_STACK_LINE(18)
	this->manager = _manager;
}
;
	return null();
}

//AssetSystem_obj::~AssetSystem_obj() { }

Dynamic AssetSystem_obj::__CreateEmpty() { return  new AssetSystem_obj; }
hx::ObjectPtr< AssetSystem_obj > AssetSystem_obj::__new(::snow::assets::Assets _manager)
{  hx::ObjectPtr< AssetSystem_obj > result = new AssetSystem_obj();
	result->__construct(_manager);
	return result;}

Dynamic AssetSystem_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< AssetSystem_obj > result = new AssetSystem_obj();
	result->__construct(inArgs[0]);
	return result;}

bool AssetSystem_obj::exists( ::String _id,Dynamic __o__strict){
Dynamic _strict = __o__strict.Default(true);
	HX_STACK_FRAME("snow.platform.native.assets.AssetSystem","exists",0x6fa2076f,"snow.platform.native.assets.AssetSystem.exists","snow/platform/native/assets/AssetSystem.hx",24,0xc6d1b123)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_id,"_id")
	HX_STACK_ARG(_strict,"_strict")
{
		HX_STACK_LINE(26)
		bool listed = this->manager->listed(_id);		HX_STACK_VAR(listed,"listed");
		HX_STACK_LINE(27)
		if ((_strict)){
			HX_STACK_LINE(28)
			return listed;
		}
		HX_STACK_LINE(32)
		::String _path = this->manager->path(_id);		HX_STACK_VAR(_path,"_path");
		HX_STACK_LINE(33)
		::String _g = ::haxe::io::Path_obj::removeTrailingSlashes(_path);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(33)
		bool on_disk = ::sys::FileSystem_obj::sys_exists(_g);		HX_STACK_VAR(on_disk,"on_disk");
		HX_STACK_LINE(35)
		return (bool(listed) || bool(on_disk));
	}
}


Dynamic AssetSystem_obj::image_load_info( ::String _path,Dynamic __o__components,Dynamic _onload){
Dynamic _components = __o__components.Default(4);
	HX_STACK_FRAME("snow.platform.native.assets.AssetSystem","image_load_info",0x972a7750,"snow.platform.native.assets.AssetSystem.image_load_info","snow/platform/native/assets/AssetSystem.hx",41,0xc6d1b123)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_path,"_path")
	HX_STACK_ARG(_components,"_components")
	HX_STACK_ARG(_onload,"_onload")
{
		HX_STACK_LINE(43)
		Dynamic _native_info = ::snow::platform::native::assets::AssetSystem_obj::snow_assets_image_load_info(_path,_components);		HX_STACK_VAR(_native_info,"_native_info");
		HX_STACK_LINE(44)
		Dynamic info = null();		HX_STACK_VAR(info,"info");
		HX_STACK_LINE(46)
		if (((_native_info != null()))){
			HX_STACK_LINE(56)
			::snow::platform::native::utils::UInt8Array _g = ::snow::platform::native::utils::UInt8Array_obj::__new(_native_info->__Field(HX_CSTRING("data"),true),null(),null());		HX_STACK_VAR(_g,"_g");
			struct _Function_2_1{
				inline static Dynamic Block( ::snow::platform::native::utils::UInt8Array &_g,Dynamic &_native_info){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","snow/platform/native/assets/AssetSystem.hx",48,0xc6d1b123)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_CSTRING("id") , _native_info->__Field(HX_CSTRING("id"),true),false);
						__result->Add(HX_CSTRING("bpp") , _native_info->__Field(HX_CSTRING("bpp"),true),false);
						__result->Add(HX_CSTRING("width") , _native_info->__Field(HX_CSTRING("width"),true),false);
						__result->Add(HX_CSTRING("height") , _native_info->__Field(HX_CSTRING("height"),true),false);
						__result->Add(HX_CSTRING("width_actual") , _native_info->__Field(HX_CSTRING("width"),true),false);
						__result->Add(HX_CSTRING("height_actual") , _native_info->__Field(HX_CSTRING("height"),true),false);
						__result->Add(HX_CSTRING("bpp_source") , _native_info->__Field(HX_CSTRING("bpp_source"),true),false);
						__result->Add(HX_CSTRING("data") , _g,false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(48)
			Dynamic _g1 = _Function_2_1::Block(_g,_native_info);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(48)
			info = _g1;
		}
		HX_STACK_LINE(62)
		if (((_onload != null()))){
			HX_STACK_LINE(63)
			_onload(info).Cast< Void >();
		}
		HX_STACK_LINE(67)
		_native_info = null();
		HX_STACK_LINE(70)
		return info;
	}
}


Dynamic AssetSystem_obj::image_info_from_bytes( ::String _path,::snow::platform::native::utils::ByteArray _bytes,Dynamic __o__components){
Dynamic _components = __o__components.Default(4);
	HX_STACK_FRAME("snow.platform.native.assets.AssetSystem","image_info_from_bytes",0xedef6bb0,"snow.platform.native.assets.AssetSystem.image_info_from_bytes","snow/platform/native/assets/AssetSystem.hx",74,0xc6d1b123)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_path,"_path")
	HX_STACK_ARG(_bytes,"_bytes")
	HX_STACK_ARG(_components,"_components")
{
		HX_STACK_LINE(76)
		Dynamic _native_info = ::snow::platform::native::assets::AssetSystem_obj::snow_assets_image_info_from_bytes(_path,_bytes,_components);		HX_STACK_VAR(_native_info,"_native_info");
		HX_STACK_LINE(86)
		::snow::platform::native::utils::UInt8Array _g = ::snow::platform::native::utils::UInt8Array_obj::__new(_native_info->__Field(HX_CSTRING("data"),true),null(),null());		HX_STACK_VAR(_g,"_g");
		struct _Function_1_1{
			inline static Dynamic Block( ::snow::platform::native::utils::UInt8Array &_g,Dynamic &_native_info){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","snow/platform/native/assets/AssetSystem.hx",78,0xc6d1b123)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("id") , _native_info->__Field(HX_CSTRING("id"),true),false);
					__result->Add(HX_CSTRING("bpp") , _native_info->__Field(HX_CSTRING("bpp"),true),false);
					__result->Add(HX_CSTRING("width") , _native_info->__Field(HX_CSTRING("width"),true),false);
					__result->Add(HX_CSTRING("height") , _native_info->__Field(HX_CSTRING("height"),true),false);
					__result->Add(HX_CSTRING("width_actual") , _native_info->__Field(HX_CSTRING("width"),true),false);
					__result->Add(HX_CSTRING("height_actual") , _native_info->__Field(HX_CSTRING("height"),true),false);
					__result->Add(HX_CSTRING("bpp_source") , _native_info->__Field(HX_CSTRING("bpp_source"),true),false);
					__result->Add(HX_CSTRING("data") , _g,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(78)
		Dynamic info = _Function_1_1::Block(_g,_native_info);		HX_STACK_VAR(info,"info");
		HX_STACK_LINE(89)
		_native_info = null();
		HX_STACK_LINE(91)
		return info;
	}
}


Dynamic AssetSystem_obj::audio_load_info( ::String _path,Dynamic _format,Dynamic __o__load,Dynamic _onload){
Dynamic _load = __o__load.Default(true);
	HX_STACK_FRAME("snow.platform.native.assets.AssetSystem","audio_load_info",0x6228988b,"snow.platform.native.assets.AssetSystem.audio_load_info","snow/platform/native/assets/AssetSystem.hx",97,0xc6d1b123)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_path,"_path")
	HX_STACK_ARG(_format,"_format")
	HX_STACK_ARG(_load,"_load")
	HX_STACK_ARG(_onload,"_onload")
{
		HX_STACK_LINE(99)
		Dynamic info = null();		HX_STACK_VAR(info,"info");
		HX_STACK_LINE(101)
		switch( (int)(_format)){
			case (int)2: {
				HX_STACK_LINE(104)
				Dynamic _g = this->audio_load_wav(_path,_load);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(104)
				info = _g;
			}
			;break;
			case (int)1: {
				HX_STACK_LINE(108)
				Dynamic _g1 = this->audio_load_ogg(_path,_load);		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(108)
				info = _g1;
			}
			;break;
			case (int)3: {
				HX_STACK_LINE(112)
				Dynamic _g2 = this->audio_load_pcm(_path,_load);		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(112)
				info = _g2;
			}
			;break;
			default: {
			}
		}
		HX_STACK_LINE(119)
		if (((info == null()))){
			HX_STACK_LINE(120)
			::haxe::Log_obj::trace((HX_CSTRING("i / assetsystem / ") + ((_path + HX_CSTRING(" audio info returned null")))),hx::SourceInfo(HX_CSTRING("AssetSystem.hx"),120,HX_CSTRING("snow.platform.native.assets.AssetSystem"),HX_CSTRING("audio_load_info")));
			HX_STACK_LINE(121)
			return null();
		}
		HX_STACK_LINE(125)
		if (((info->__Field(HX_CSTRING("data"),true) == null()))){
			HX_STACK_LINE(126)
			::haxe::Log_obj::trace((HX_CSTRING("i / assetsystem / ") + ((_path + HX_CSTRING(" audio info data was null")))),hx::SourceInfo(HX_CSTRING("AssetSystem.hx"),126,HX_CSTRING("snow.platform.native.assets.AssetSystem"),HX_CSTRING("audio_load_info")));
			HX_STACK_LINE(127)
			return null();
		}
		HX_STACK_LINE(130)
		if (((_onload != null()))){
			HX_STACK_LINE(131)
			_onload(info).Cast< Void >();
		}
		HX_STACK_LINE(134)
		return info;
	}
}


bool AssetSystem_obj::audio_seek_source( Dynamic _info,int _to){
	HX_STACK_FRAME("snow.platform.native.assets.AssetSystem","audio_seek_source",0x2c201526,"snow.platform.native.assets.AssetSystem.audio_seek_source","snow/platform/native/assets/AssetSystem.hx",138,0xc6d1b123)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_info,"_info")
	HX_STACK_ARG(_to,"_to")
	HX_STACK_LINE(140)
	{
		HX_STACK_LINE(140)
		int _g = _info->__Field(HX_CSTRING("format"),true);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(140)
		switch( (int)(_g)){
			case (int)1: {
				HX_STACK_LINE(142)
				return this->audio_seek_source_ogg(_info,_to);
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(144)
				return this->audio_seek_source_wav(_info,_to);
			}
			;break;
			case (int)3: {
				HX_STACK_LINE(146)
				return this->audio_seek_source_pcm(_info,_to);
			}
			;break;
			default: {
				HX_STACK_LINE(148)
				return false;
			}
		}
	}
	HX_STACK_LINE(151)
	return false;
}


Dynamic AssetSystem_obj::audio_load_portion( Dynamic _info,int _start,int _len){
	HX_STACK_FRAME("snow.platform.native.assets.AssetSystem","audio_load_portion",0xb105c0ea,"snow.platform.native.assets.AssetSystem.audio_load_portion","snow/platform/native/assets/AssetSystem.hx",155,0xc6d1b123)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_info,"_info")
	HX_STACK_ARG(_start,"_start")
	HX_STACK_ARG(_len,"_len")
	HX_STACK_LINE(157)
	{
		HX_STACK_LINE(157)
		int _g = _info->__Field(HX_CSTRING("format"),true);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(157)
		switch( (int)(_g)){
			case (int)1: {
				HX_STACK_LINE(159)
				return this->audio_load_portion_ogg(_info,_start,_len);
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(161)
				return this->audio_load_portion_wav(_info,_start,_len);
			}
			;break;
			case (int)3: {
				HX_STACK_LINE(163)
				return this->audio_load_portion_pcm(_info,_start,_len);
			}
			;break;
			default: {
				HX_STACK_LINE(165)
				return null();
			}
		}
	}
	HX_STACK_LINE(168)
	return null();
}


Dynamic AssetSystem_obj::audio_load_ogg( ::String _path,Dynamic __o_load){
Dynamic load = __o_load.Default(true);
	HX_STACK_FRAME("snow.platform.native.assets.AssetSystem","audio_load_ogg",0x4d5f66d2,"snow.platform.native.assets.AssetSystem.audio_load_ogg","snow/platform/native/assets/AssetSystem.hx",175,0xc6d1b123)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_path,"_path")
	HX_STACK_ARG(load,"load")
{
		HX_STACK_LINE(175)
		return ::snow::platform::native::assets::AssetSystem_obj::snow_assets_audio_load_info_ogg(_path,load);
	}
}


HX_DEFINE_DYNAMIC_FUNC2(AssetSystem_obj,audio_load_ogg,return )

Dynamic AssetSystem_obj::audio_load_portion_ogg( Dynamic _info,int _start,int _len){
	HX_STACK_FRAME("snow.platform.native.assets.AssetSystem","audio_load_portion_ogg",0x01c9573a,"snow.platform.native.assets.AssetSystem.audio_load_portion_ogg","snow/platform/native/assets/AssetSystem.hx",179,0xc6d1b123)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_info,"_info")
	HX_STACK_ARG(_start,"_start")
	HX_STACK_ARG(_len,"_len")
	HX_STACK_LINE(179)
	return ::snow::platform::native::assets::AssetSystem_obj::snow_assets_audio_read_bytes_ogg(_info,_start,_len);
}


HX_DEFINE_DYNAMIC_FUNC3(AssetSystem_obj,audio_load_portion_ogg,return )

bool AssetSystem_obj::audio_seek_source_ogg( Dynamic _info,int _to){
	HX_STACK_FRAME("snow.platform.native.assets.AssetSystem","audio_seek_source_ogg",0x46a87976,"snow.platform.native.assets.AssetSystem.audio_seek_source_ogg","snow/platform/native/assets/AssetSystem.hx",183,0xc6d1b123)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_info,"_info")
	HX_STACK_ARG(_to,"_to")
	HX_STACK_LINE(183)
	return ::snow::platform::native::assets::AssetSystem_obj::snow_assets_audio_seek_bytes_ogg(_info,_to);
}


HX_DEFINE_DYNAMIC_FUNC2(AssetSystem_obj,audio_seek_source_ogg,return )

Dynamic AssetSystem_obj::audio_load_wav( ::String _path,Dynamic __o_load){
Dynamic load = __o_load.Default(true);
	HX_STACK_FRAME("snow.platform.native.assets.AssetSystem","audio_load_wav",0x4d6573af,"snow.platform.native.assets.AssetSystem.audio_load_wav","snow/platform/native/assets/AssetSystem.hx",189,0xc6d1b123)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_path,"_path")
	HX_STACK_ARG(load,"load")
{
		HX_STACK_LINE(189)
		return ::snow::platform::native::assets::AssetSystem_obj::snow_assets_audio_load_info_wav(_path,load);
	}
}


HX_DEFINE_DYNAMIC_FUNC2(AssetSystem_obj,audio_load_wav,return )

Dynamic AssetSystem_obj::audio_load_portion_wav( Dynamic _info,int _start,int _len){
	HX_STACK_FRAME("snow.platform.native.assets.AssetSystem","audio_load_portion_wav",0x01cf6417,"snow.platform.native.assets.AssetSystem.audio_load_portion_wav","snow/platform/native/assets/AssetSystem.hx",193,0xc6d1b123)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_info,"_info")
	HX_STACK_ARG(_start,"_start")
	HX_STACK_ARG(_len,"_len")
	HX_STACK_LINE(193)
	return ::snow::platform::native::assets::AssetSystem_obj::snow_assets_audio_read_bytes_wav(_info,_start,_len);
}


HX_DEFINE_DYNAMIC_FUNC3(AssetSystem_obj,audio_load_portion_wav,return )

bool AssetSystem_obj::audio_seek_source_wav( Dynamic _info,int _to){
	HX_STACK_FRAME("snow.platform.native.assets.AssetSystem","audio_seek_source_wav",0x46ae8653,"snow.platform.native.assets.AssetSystem.audio_seek_source_wav","snow/platform/native/assets/AssetSystem.hx",197,0xc6d1b123)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_info,"_info")
	HX_STACK_ARG(_to,"_to")
	HX_STACK_LINE(197)
	return ::snow::platform::native::assets::AssetSystem_obj::snow_assets_audio_seek_bytes_wav(_info,_to);
}


HX_DEFINE_DYNAMIC_FUNC2(AssetSystem_obj,audio_seek_source_wav,return )

Dynamic AssetSystem_obj::audio_load_pcm( ::String _path,Dynamic __o_load){
Dynamic load = __o_load.Default(true);
	HX_STACK_FRAME("snow.platform.native.assets.AssetSystem","audio_load_pcm",0x4d60259d,"snow.platform.native.assets.AssetSystem.audio_load_pcm","snow/platform/native/assets/AssetSystem.hx",203,0xc6d1b123)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_path,"_path")
	HX_STACK_ARG(load,"load")
{
		HX_STACK_LINE(203)
		return ::snow::platform::native::assets::AssetSystem_obj::snow_assets_audio_load_info_pcm(_path,load);
	}
}


HX_DEFINE_DYNAMIC_FUNC2(AssetSystem_obj,audio_load_pcm,return )

Dynamic AssetSystem_obj::audio_load_portion_pcm( Dynamic _info,int _start,int _len){
	HX_STACK_FRAME("snow.platform.native.assets.AssetSystem","audio_load_portion_pcm",0x01ca1605,"snow.platform.native.assets.AssetSystem.audio_load_portion_pcm","snow/platform/native/assets/AssetSystem.hx",207,0xc6d1b123)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_info,"_info")
	HX_STACK_ARG(_start,"_start")
	HX_STACK_ARG(_len,"_len")
	HX_STACK_LINE(207)
	return ::snow::platform::native::assets::AssetSystem_obj::snow_assets_audio_read_bytes_pcm(_info,_start,_len);
}


HX_DEFINE_DYNAMIC_FUNC3(AssetSystem_obj,audio_load_portion_pcm,return )

bool AssetSystem_obj::audio_seek_source_pcm( Dynamic _info,int _to){
	HX_STACK_FRAME("snow.platform.native.assets.AssetSystem","audio_seek_source_pcm",0x46a93841,"snow.platform.native.assets.AssetSystem.audio_seek_source_pcm","snow/platform/native/assets/AssetSystem.hx",211,0xc6d1b123)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_info,"_info")
	HX_STACK_ARG(_to,"_to")
	HX_STACK_LINE(211)
	return ::snow::platform::native::assets::AssetSystem_obj::snow_assets_audio_seek_bytes_pcm(_info,_to);
}


HX_DEFINE_DYNAMIC_FUNC2(AssetSystem_obj,audio_seek_source_pcm,return )

Dynamic AssetSystem_obj::snow_assets_image_load_info;

Dynamic AssetSystem_obj::snow_assets_image_info_from_bytes;

Dynamic AssetSystem_obj::snow_assets_audio_load_info_ogg;

Dynamic AssetSystem_obj::snow_assets_audio_read_bytes_ogg;

Dynamic AssetSystem_obj::snow_assets_audio_seek_bytes_ogg;

Dynamic AssetSystem_obj::snow_assets_audio_load_info_wav;

Dynamic AssetSystem_obj::snow_assets_audio_read_bytes_wav;

Dynamic AssetSystem_obj::snow_assets_audio_seek_bytes_wav;

Dynamic AssetSystem_obj::snow_assets_audio_load_info_pcm;

Dynamic AssetSystem_obj::snow_assets_audio_read_bytes_pcm;

Dynamic AssetSystem_obj::snow_assets_audio_seek_bytes_pcm;


AssetSystem_obj::AssetSystem_obj()
{
}

Dynamic AssetSystem_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"exists") ) { return exists_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"audio_load_ogg") ) { return audio_load_ogg_dyn(); }
		if (HX_FIELD_EQ(inName,"audio_load_wav") ) { return audio_load_wav_dyn(); }
		if (HX_FIELD_EQ(inName,"audio_load_pcm") ) { return audio_load_pcm_dyn(); }
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
		if (HX_FIELD_EQ(inName,"audio_seek_source_ogg") ) { return audio_seek_source_ogg_dyn(); }
		if (HX_FIELD_EQ(inName,"audio_seek_source_wav") ) { return audio_seek_source_wav_dyn(); }
		if (HX_FIELD_EQ(inName,"audio_seek_source_pcm") ) { return audio_seek_source_pcm_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"audio_load_portion_ogg") ) { return audio_load_portion_ogg_dyn(); }
		if (HX_FIELD_EQ(inName,"audio_load_portion_wav") ) { return audio_load_portion_wav_dyn(); }
		if (HX_FIELD_EQ(inName,"audio_load_portion_pcm") ) { return audio_load_portion_pcm_dyn(); }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"snow_assets_image_load_info") ) { return snow_assets_image_load_info; }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"snow_assets_audio_load_info_ogg") ) { return snow_assets_audio_load_info_ogg; }
		if (HX_FIELD_EQ(inName,"snow_assets_audio_load_info_wav") ) { return snow_assets_audio_load_info_wav; }
		if (HX_FIELD_EQ(inName,"snow_assets_audio_load_info_pcm") ) { return snow_assets_audio_load_info_pcm; }
		break;
	case 32:
		if (HX_FIELD_EQ(inName,"snow_assets_audio_read_bytes_ogg") ) { return snow_assets_audio_read_bytes_ogg; }
		if (HX_FIELD_EQ(inName,"snow_assets_audio_seek_bytes_ogg") ) { return snow_assets_audio_seek_bytes_ogg; }
		if (HX_FIELD_EQ(inName,"snow_assets_audio_read_bytes_wav") ) { return snow_assets_audio_read_bytes_wav; }
		if (HX_FIELD_EQ(inName,"snow_assets_audio_seek_bytes_wav") ) { return snow_assets_audio_seek_bytes_wav; }
		if (HX_FIELD_EQ(inName,"snow_assets_audio_read_bytes_pcm") ) { return snow_assets_audio_read_bytes_pcm; }
		if (HX_FIELD_EQ(inName,"snow_assets_audio_seek_bytes_pcm") ) { return snow_assets_audio_seek_bytes_pcm; }
		break;
	case 33:
		if (HX_FIELD_EQ(inName,"snow_assets_image_info_from_bytes") ) { return snow_assets_image_info_from_bytes; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic AssetSystem_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 27:
		if (HX_FIELD_EQ(inName,"snow_assets_image_load_info") ) { snow_assets_image_load_info=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"snow_assets_audio_load_info_ogg") ) { snow_assets_audio_load_info_ogg=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"snow_assets_audio_load_info_wav") ) { snow_assets_audio_load_info_wav=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"snow_assets_audio_load_info_pcm") ) { snow_assets_audio_load_info_pcm=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 32:
		if (HX_FIELD_EQ(inName,"snow_assets_audio_read_bytes_ogg") ) { snow_assets_audio_read_bytes_ogg=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"snow_assets_audio_seek_bytes_ogg") ) { snow_assets_audio_seek_bytes_ogg=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"snow_assets_audio_read_bytes_wav") ) { snow_assets_audio_read_bytes_wav=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"snow_assets_audio_seek_bytes_wav") ) { snow_assets_audio_seek_bytes_wav=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"snow_assets_audio_read_bytes_pcm") ) { snow_assets_audio_read_bytes_pcm=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"snow_assets_audio_seek_bytes_pcm") ) { snow_assets_audio_seek_bytes_pcm=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 33:
		if (HX_FIELD_EQ(inName,"snow_assets_image_info_from_bytes") ) { snow_assets_image_info_from_bytes=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void AssetSystem_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("snow_assets_image_load_info"),
	HX_CSTRING("snow_assets_image_info_from_bytes"),
	HX_CSTRING("snow_assets_audio_load_info_ogg"),
	HX_CSTRING("snow_assets_audio_read_bytes_ogg"),
	HX_CSTRING("snow_assets_audio_seek_bytes_ogg"),
	HX_CSTRING("snow_assets_audio_load_info_wav"),
	HX_CSTRING("snow_assets_audio_read_bytes_wav"),
	HX_CSTRING("snow_assets_audio_seek_bytes_wav"),
	HX_CSTRING("snow_assets_audio_load_info_pcm"),
	HX_CSTRING("snow_assets_audio_read_bytes_pcm"),
	HX_CSTRING("snow_assets_audio_seek_bytes_pcm"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("exists"),
	HX_CSTRING("image_load_info"),
	HX_CSTRING("image_info_from_bytes"),
	HX_CSTRING("audio_load_info"),
	HX_CSTRING("audio_seek_source"),
	HX_CSTRING("audio_load_portion"),
	HX_CSTRING("audio_load_ogg"),
	HX_CSTRING("audio_load_portion_ogg"),
	HX_CSTRING("audio_seek_source_ogg"),
	HX_CSTRING("audio_load_wav"),
	HX_CSTRING("audio_load_portion_wav"),
	HX_CSTRING("audio_seek_source_wav"),
	HX_CSTRING("audio_load_pcm"),
	HX_CSTRING("audio_load_portion_pcm"),
	HX_CSTRING("audio_seek_source_pcm"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AssetSystem_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(AssetSystem_obj::snow_assets_image_load_info,"snow_assets_image_load_info");
	HX_MARK_MEMBER_NAME(AssetSystem_obj::snow_assets_image_info_from_bytes,"snow_assets_image_info_from_bytes");
	HX_MARK_MEMBER_NAME(AssetSystem_obj::snow_assets_audio_load_info_ogg,"snow_assets_audio_load_info_ogg");
	HX_MARK_MEMBER_NAME(AssetSystem_obj::snow_assets_audio_read_bytes_ogg,"snow_assets_audio_read_bytes_ogg");
	HX_MARK_MEMBER_NAME(AssetSystem_obj::snow_assets_audio_seek_bytes_ogg,"snow_assets_audio_seek_bytes_ogg");
	HX_MARK_MEMBER_NAME(AssetSystem_obj::snow_assets_audio_load_info_wav,"snow_assets_audio_load_info_wav");
	HX_MARK_MEMBER_NAME(AssetSystem_obj::snow_assets_audio_read_bytes_wav,"snow_assets_audio_read_bytes_wav");
	HX_MARK_MEMBER_NAME(AssetSystem_obj::snow_assets_audio_seek_bytes_wav,"snow_assets_audio_seek_bytes_wav");
	HX_MARK_MEMBER_NAME(AssetSystem_obj::snow_assets_audio_load_info_pcm,"snow_assets_audio_load_info_pcm");
	HX_MARK_MEMBER_NAME(AssetSystem_obj::snow_assets_audio_read_bytes_pcm,"snow_assets_audio_read_bytes_pcm");
	HX_MARK_MEMBER_NAME(AssetSystem_obj::snow_assets_audio_seek_bytes_pcm,"snow_assets_audio_seek_bytes_pcm");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AssetSystem_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(AssetSystem_obj::snow_assets_image_load_info,"snow_assets_image_load_info");
	HX_VISIT_MEMBER_NAME(AssetSystem_obj::snow_assets_image_info_from_bytes,"snow_assets_image_info_from_bytes");
	HX_VISIT_MEMBER_NAME(AssetSystem_obj::snow_assets_audio_load_info_ogg,"snow_assets_audio_load_info_ogg");
	HX_VISIT_MEMBER_NAME(AssetSystem_obj::snow_assets_audio_read_bytes_ogg,"snow_assets_audio_read_bytes_ogg");
	HX_VISIT_MEMBER_NAME(AssetSystem_obj::snow_assets_audio_seek_bytes_ogg,"snow_assets_audio_seek_bytes_ogg");
	HX_VISIT_MEMBER_NAME(AssetSystem_obj::snow_assets_audio_load_info_wav,"snow_assets_audio_load_info_wav");
	HX_VISIT_MEMBER_NAME(AssetSystem_obj::snow_assets_audio_read_bytes_wav,"snow_assets_audio_read_bytes_wav");
	HX_VISIT_MEMBER_NAME(AssetSystem_obj::snow_assets_audio_seek_bytes_wav,"snow_assets_audio_seek_bytes_wav");
	HX_VISIT_MEMBER_NAME(AssetSystem_obj::snow_assets_audio_load_info_pcm,"snow_assets_audio_load_info_pcm");
	HX_VISIT_MEMBER_NAME(AssetSystem_obj::snow_assets_audio_read_bytes_pcm,"snow_assets_audio_read_bytes_pcm");
	HX_VISIT_MEMBER_NAME(AssetSystem_obj::snow_assets_audio_seek_bytes_pcm,"snow_assets_audio_seek_bytes_pcm");
};

#endif

Class AssetSystem_obj::__mClass;

void AssetSystem_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("snow.platform.native.assets.AssetSystem"), hx::TCanCast< AssetSystem_obj> ,sStaticFields,sMemberFields,
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

void AssetSystem_obj::__boot()
{
	snow_assets_image_load_info= ::snow::utils::Libs_obj::load(HX_CSTRING("snow"),HX_CSTRING("snow_assets_image_load_info"),(int)2);
	snow_assets_image_info_from_bytes= ::snow::utils::Libs_obj::load(HX_CSTRING("snow"),HX_CSTRING("snow_assets_image_info_from_bytes"),(int)3);
	snow_assets_audio_load_info_ogg= ::snow::utils::Libs_obj::load(HX_CSTRING("snow"),HX_CSTRING("snow_assets_audio_load_info_ogg"),(int)2);
	snow_assets_audio_read_bytes_ogg= ::snow::utils::Libs_obj::load(HX_CSTRING("snow"),HX_CSTRING("snow_assets_audio_read_bytes_ogg"),(int)3);
	snow_assets_audio_seek_bytes_ogg= ::snow::utils::Libs_obj::load(HX_CSTRING("snow"),HX_CSTRING("snow_assets_audio_seek_bytes_ogg"),(int)2);
	snow_assets_audio_load_info_wav= ::snow::utils::Libs_obj::load(HX_CSTRING("snow"),HX_CSTRING("snow_assets_audio_load_info_wav"),(int)2);
	snow_assets_audio_read_bytes_wav= ::snow::utils::Libs_obj::load(HX_CSTRING("snow"),HX_CSTRING("snow_assets_audio_read_bytes_wav"),(int)3);
	snow_assets_audio_seek_bytes_wav= ::snow::utils::Libs_obj::load(HX_CSTRING("snow"),HX_CSTRING("snow_assets_audio_seek_bytes_wav"),(int)2);
	snow_assets_audio_load_info_pcm= ::snow::utils::Libs_obj::load(HX_CSTRING("snow"),HX_CSTRING("snow_assets_audio_load_info_pcm"),(int)2);
	snow_assets_audio_read_bytes_pcm= ::snow::utils::Libs_obj::load(HX_CSTRING("snow"),HX_CSTRING("snow_assets_audio_read_bytes_pcm"),(int)3);
	snow_assets_audio_seek_bytes_pcm= ::snow::utils::Libs_obj::load(HX_CSTRING("snow"),HX_CSTRING("snow_assets_audio_seek_bytes_pcm"),(int)2);
}

} // end namespace snow
} // end namespace platform
} // end namespace native
} // end namespace assets
