#ifndef INCLUDED_snow_assets_AssetText
#define INCLUDED_snow_assets_AssetText

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <snow/assets/Asset.h>
HX_DECLARE_CLASS2(snow,assets,Asset)
HX_DECLARE_CLASS2(snow,assets,AssetText)
HX_DECLARE_CLASS2(snow,assets,Assets)
namespace snow{
namespace assets{


class HXCPP_CLASS_ATTRIBUTES  AssetText_obj : public ::snow::assets::Asset_obj{
	public:
		typedef ::snow::assets::Asset_obj super;
		typedef AssetText_obj OBJ_;
		AssetText_obj();
		Void __construct(::snow::assets::Assets _assets,Dynamic _info,Dynamic __o__async);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< AssetText_obj > __new(::snow::assets::Assets _assets,Dynamic _info,Dynamic __o__async);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~AssetText_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("AssetText"); }

		::String text;
		bool async;
		virtual Void load( Dynamic onload);
		Dynamic load_dyn();

		virtual Void load_from_string( ::String _string,Dynamic onload);
		Dynamic load_from_string_dyn();

};

} // end namespace snow
} // end namespace assets

#endif /* INCLUDED_snow_assets_AssetText */ 
