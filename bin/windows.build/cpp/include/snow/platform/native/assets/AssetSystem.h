#ifndef INCLUDED_snow_platform_native_assets_AssetSystem
#define INCLUDED_snow_platform_native_assets_AssetSystem

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <snow/assets/AssetSystemBinding.h>
HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS2(snow,assets,AssetSystemBinding)
HX_DECLARE_CLASS2(snow,assets,Assets)
HX_DECLARE_CLASS4(snow,platform,native,assets,AssetSystem)
HX_DECLARE_CLASS4(snow,platform,native,utils,ByteArray)
HX_DECLARE_CLASS2(snow,utils,AbstractClass)
HX_DECLARE_CLASS2(snow,utils,IDataInput)
HX_DECLARE_CLASS2(snow,utils,IMemoryRange)
namespace snow{
namespace platform{
namespace native{
namespace assets{


class HXCPP_CLASS_ATTRIBUTES  AssetSystem_obj : public ::snow::assets::AssetSystemBinding_obj{
	public:
		typedef ::snow::assets::AssetSystemBinding_obj super;
		typedef AssetSystem_obj OBJ_;
		AssetSystem_obj();
		Void __construct(::snow::assets::Assets _manager);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< AssetSystem_obj > __new(::snow::assets::Assets _manager);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~AssetSystem_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("AssetSystem"); }

		virtual bool exists( ::String _id,Dynamic _strict);

		virtual Dynamic image_load_info( ::String _path,Dynamic _components,Dynamic _onload);

		virtual Dynamic image_info_from_bytes( ::String _path,::snow::platform::native::utils::ByteArray _bytes,Dynamic _components);

		virtual Dynamic audio_load_info( ::String _path,Dynamic _format,Dynamic _load,Dynamic _onload);

		virtual bool audio_seek_source( Dynamic _info,int _to);

		virtual Dynamic audio_load_portion( Dynamic _info,int _start,int _len);

		virtual Dynamic audio_load_ogg( ::String _path,Dynamic load);
		Dynamic audio_load_ogg_dyn();

		virtual Dynamic audio_load_portion_ogg( Dynamic _info,int _start,int _len);
		Dynamic audio_load_portion_ogg_dyn();

		virtual bool audio_seek_source_ogg( Dynamic _info,int _to);
		Dynamic audio_seek_source_ogg_dyn();

		virtual Dynamic audio_load_wav( ::String _path,Dynamic load);
		Dynamic audio_load_wav_dyn();

		virtual Dynamic audio_load_portion_wav( Dynamic _info,int _start,int _len);
		Dynamic audio_load_portion_wav_dyn();

		virtual bool audio_seek_source_wav( Dynamic _info,int _to);
		Dynamic audio_seek_source_wav_dyn();

		virtual Dynamic audio_load_pcm( ::String _path,Dynamic load);
		Dynamic audio_load_pcm_dyn();

		virtual Dynamic audio_load_portion_pcm( Dynamic _info,int _start,int _len);
		Dynamic audio_load_portion_pcm_dyn();

		virtual bool audio_seek_source_pcm( Dynamic _info,int _to);
		Dynamic audio_seek_source_pcm_dyn();

		static Dynamic snow_assets_image_load_info;
		static Dynamic &snow_assets_image_load_info_dyn() { return snow_assets_image_load_info;}
		static Dynamic snow_assets_image_info_from_bytes;
		static Dynamic &snow_assets_image_info_from_bytes_dyn() { return snow_assets_image_info_from_bytes;}
		static Dynamic snow_assets_audio_load_info_ogg;
		static Dynamic &snow_assets_audio_load_info_ogg_dyn() { return snow_assets_audio_load_info_ogg;}
		static Dynamic snow_assets_audio_read_bytes_ogg;
		static Dynamic &snow_assets_audio_read_bytes_ogg_dyn() { return snow_assets_audio_read_bytes_ogg;}
		static Dynamic snow_assets_audio_seek_bytes_ogg;
		static Dynamic &snow_assets_audio_seek_bytes_ogg_dyn() { return snow_assets_audio_seek_bytes_ogg;}
		static Dynamic snow_assets_audio_load_info_wav;
		static Dynamic &snow_assets_audio_load_info_wav_dyn() { return snow_assets_audio_load_info_wav;}
		static Dynamic snow_assets_audio_read_bytes_wav;
		static Dynamic &snow_assets_audio_read_bytes_wav_dyn() { return snow_assets_audio_read_bytes_wav;}
		static Dynamic snow_assets_audio_seek_bytes_wav;
		static Dynamic &snow_assets_audio_seek_bytes_wav_dyn() { return snow_assets_audio_seek_bytes_wav;}
		static Dynamic snow_assets_audio_load_info_pcm;
		static Dynamic &snow_assets_audio_load_info_pcm_dyn() { return snow_assets_audio_load_info_pcm;}
		static Dynamic snow_assets_audio_read_bytes_pcm;
		static Dynamic &snow_assets_audio_read_bytes_pcm_dyn() { return snow_assets_audio_read_bytes_pcm;}
		static Dynamic snow_assets_audio_seek_bytes_pcm;
		static Dynamic &snow_assets_audio_seek_bytes_pcm_dyn() { return snow_assets_audio_seek_bytes_pcm;}
};

} // end namespace snow
} // end namespace platform
} // end namespace native
} // end namespace assets

#endif /* INCLUDED_snow_platform_native_assets_AssetSystem */ 
