#ifndef INCLUDED_snow_assets_AssetAudio
#define INCLUDED_snow_assets_AssetAudio

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <snow/assets/Asset.h>
HX_DECLARE_CLASS2(snow,assets,Asset)
HX_DECLARE_CLASS2(snow,assets,AssetAudio)
HX_DECLARE_CLASS2(snow,assets,Assets)
namespace snow{
namespace assets{


class HXCPP_CLASS_ATTRIBUTES  AssetAudio_obj : public ::snow::assets::Asset_obj{
	public:
		typedef ::snow::assets::Asset_obj super;
		typedef AssetAudio_obj OBJ_;
		AssetAudio_obj();
		Void __construct(::snow::assets::Assets _assets,Dynamic _info,int _format,Dynamic __o__load);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< AssetAudio_obj > __new(::snow::assets::Assets _assets,Dynamic _info,int _format,Dynamic __o__load);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~AssetAudio_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("AssetAudio"); }

		Dynamic audio;
		int format;
		bool load_full;
		virtual Void load( Dynamic onload);
		Dynamic load_dyn();

};

} // end namespace snow
} // end namespace assets

#endif /* INCLUDED_snow_assets_AssetAudio */ 
