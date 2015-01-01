#ifndef INCLUDED_snow_assets_AssetBytes
#define INCLUDED_snow_assets_AssetBytes

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <snow/assets/Asset.h>
HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS2(snow,assets,Asset)
HX_DECLARE_CLASS2(snow,assets,AssetBytes)
HX_DECLARE_CLASS2(snow,assets,Assets)
HX_DECLARE_CLASS4(snow,platform,native,utils,ByteArray)
HX_DECLARE_CLASS2(snow,utils,IDataInput)
HX_DECLARE_CLASS2(snow,utils,IMemoryRange)
namespace snow{
namespace assets{


class HXCPP_CLASS_ATTRIBUTES  AssetBytes_obj : public ::snow::assets::Asset_obj{
	public:
		typedef ::snow::assets::Asset_obj super;
		typedef AssetBytes_obj OBJ_;
		AssetBytes_obj();
		Void __construct(::snow::assets::Assets _assets,Dynamic _info,Dynamic __o__async);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< AssetBytes_obj > __new(::snow::assets::Assets _assets,Dynamic _info,Dynamic __o__async);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~AssetBytes_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("AssetBytes"); }

		::snow::platform::native::utils::ByteArray bytes;
		bool async;
		virtual Void load( Dynamic onload);
		Dynamic load_dyn();

		virtual Void load_from_bytes( ::snow::platform::native::utils::ByteArray _bytes,Dynamic onload);
		Dynamic load_from_bytes_dyn();

};

} // end namespace snow
} // end namespace assets

#endif /* INCLUDED_snow_assets_AssetBytes */ 
