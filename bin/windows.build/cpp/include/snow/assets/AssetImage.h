#ifndef INCLUDED_snow_assets_AssetImage
#define INCLUDED_snow_assets_AssetImage

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <snow/assets/Asset.h>
HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS2(snow,assets,Asset)
HX_DECLARE_CLASS2(snow,assets,AssetImage)
HX_DECLARE_CLASS2(snow,assets,Assets)
HX_DECLARE_CLASS4(snow,platform,native,utils,ArrayBufferView)
HX_DECLARE_CLASS4(snow,platform,native,utils,ByteArray)
HX_DECLARE_CLASS4(snow,platform,native,utils,UInt8Array)
HX_DECLARE_CLASS2(snow,utils,IDataInput)
HX_DECLARE_CLASS2(snow,utils,IMemoryRange)
namespace snow{
namespace assets{


class HXCPP_CLASS_ATTRIBUTES  AssetImage_obj : public ::snow::assets::Asset_obj{
	public:
		typedef ::snow::assets::Asset_obj super;
		typedef AssetImage_obj OBJ_;
		AssetImage_obj();
		Void __construct(::snow::assets::Assets _assets,Dynamic _info,Dynamic __o__components);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< AssetImage_obj > __new(::snow::assets::Assets _assets,Dynamic _info,Dynamic __o__components);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~AssetImage_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("AssetImage"); }

		Dynamic image;
		int components;
		virtual Void load( Dynamic onload);
		Dynamic load_dyn();

		virtual Void load_from_bytes( ::snow::platform::native::utils::ByteArray bytes,Dynamic onload);
		Dynamic load_from_bytes_dyn();

		virtual Void load_from_pixels( ::String _id,int _width,int _height,::snow::platform::native::utils::UInt8Array _pixels,Dynamic onload);
		Dynamic load_from_pixels_dyn();

};

} // end namespace snow
} // end namespace assets

#endif /* INCLUDED_snow_assets_AssetImage */ 
