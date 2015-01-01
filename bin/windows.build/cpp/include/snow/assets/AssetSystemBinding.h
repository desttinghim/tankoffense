#ifndef INCLUDED_snow_assets_AssetSystemBinding
#define INCLUDED_snow_assets_AssetSystemBinding

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <snow/utils/AbstractClass.h>
HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS2(snow,assets,AssetSystemBinding)
HX_DECLARE_CLASS2(snow,assets,Assets)
HX_DECLARE_CLASS4(snow,platform,native,utils,ByteArray)
HX_DECLARE_CLASS2(snow,utils,AbstractClass)
HX_DECLARE_CLASS2(snow,utils,IDataInput)
HX_DECLARE_CLASS2(snow,utils,IMemoryRange)
namespace snow{
namespace assets{


class HXCPP_CLASS_ATTRIBUTES  AssetSystemBinding_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef AssetSystemBinding_obj OBJ_;
		AssetSystemBinding_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< AssetSystemBinding_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~AssetSystemBinding_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		inline operator ::snow::utils::AbstractClass_obj *()
			{ return new ::snow::utils::AbstractClass_delegate_< AssetSystemBinding_obj >(this); }
		hx::Object *__ToInterface(const hx::type_info &inType);
		::String __ToString() const { return HX_CSTRING("AssetSystemBinding"); }

		::snow::assets::Assets manager;
		virtual bool exists( ::String _id,Dynamic _strict);
		Dynamic exists_dyn();

		virtual Dynamic image_load_info( ::String _path,Dynamic _components,Dynamic _onload);
		Dynamic image_load_info_dyn();

		virtual Dynamic image_info_from_bytes( ::String _path,::snow::platform::native::utils::ByteArray _bytes,Dynamic _components);
		Dynamic image_info_from_bytes_dyn();

		virtual Dynamic audio_load_info( ::String _path,Dynamic _format,Dynamic _load,Dynamic _onload);
		Dynamic audio_load_info_dyn();

		virtual bool audio_seek_source( Dynamic _info,int _to);
		Dynamic audio_seek_source_dyn();

		virtual Dynamic audio_load_portion( Dynamic _info,int _start,int _len);
		Dynamic audio_load_portion_dyn();

};

} // end namespace snow
} // end namespace assets

#endif /* INCLUDED_snow_assets_AssetSystemBinding */ 
