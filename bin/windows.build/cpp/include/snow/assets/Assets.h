#ifndef INCLUDED_snow_assets_Assets
#define INCLUDED_snow_assets_Assets

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS1(snow,Snow)
HX_DECLARE_CLASS2(snow,assets,Asset)
HX_DECLARE_CLASS2(snow,assets,AssetAudio)
HX_DECLARE_CLASS2(snow,assets,AssetBytes)
HX_DECLARE_CLASS2(snow,assets,AssetImage)
HX_DECLARE_CLASS2(snow,assets,AssetSystemBinding)
HX_DECLARE_CLASS2(snow,assets,AssetText)
HX_DECLARE_CLASS2(snow,assets,Assets)
HX_DECLARE_CLASS4(snow,platform,native,assets,AssetSystem)
HX_DECLARE_CLASS2(snow,utils,AbstractClass)
namespace snow{
namespace assets{


class HXCPP_CLASS_ATTRIBUTES  Assets_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Assets_obj OBJ_;
		Assets_obj();
		Void __construct(::snow::Snow _lib);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Assets_obj > __new(::snow::Snow _lib);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Assets_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Assets"); }

		::haxe::ds::StringMap list;
		::String assets_root;
		::String manifest_path;
		bool strict;
		::snow::platform::native::assets::AssetSystem platform;
		::snow::Snow lib;
		virtual Void add( Dynamic _list);
		Dynamic add_dyn();

		virtual Dynamic get( ::String _id);
		Dynamic get_dyn();

		virtual bool listed( ::String _id);
		Dynamic listed_dyn();

		virtual bool exists( ::String _id,Dynamic _strict);
		Dynamic exists_dyn();

		virtual ::String path( ::String _id);
		Dynamic path_dyn();

		virtual ::snow::assets::AssetBytes bytes( ::String _id,Dynamic options);
		Dynamic bytes_dyn();

		virtual ::snow::assets::AssetText text( ::String _id,Dynamic options);
		Dynamic text_dyn();

		virtual ::snow::assets::AssetImage image( ::String _id,Dynamic options);
		Dynamic image_dyn();

		virtual ::snow::assets::AssetAudio audio( ::String _id,Dynamic options);
		Dynamic audio_dyn();

		virtual Dynamic info_from_id( ::String _id,::String _type);
		Dynamic info_from_id_dyn();

		virtual Void exists_error( ::String _id);
		Dynamic exists_error_dyn();

		virtual Void load_error( ::String _id,::String reason);
		Dynamic load_error_dyn();

};

} // end namespace snow
} // end namespace assets

#endif /* INCLUDED_snow_assets_Assets */ 
