#ifndef INCLUDED_snow_assets_Asset
#define INCLUDED_snow_assets_Asset

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(snow,assets,Asset)
HX_DECLARE_CLASS2(snow,assets,Assets)
namespace snow{
namespace assets{


class HXCPP_CLASS_ATTRIBUTES  Asset_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Asset_obj OBJ_;
		Asset_obj();
		Void __construct(::snow::assets::Assets _assets,Dynamic _info);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Asset_obj > __new(::snow::assets::Assets _assets,Dynamic _info);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Asset_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Asset"); }

		::snow::assets::Assets assets;
		::String id;
		Dynamic info;
		int type;
		bool loaded;
};

} // end namespace snow
} // end namespace assets

#endif /* INCLUDED_snow_assets_Asset */ 
