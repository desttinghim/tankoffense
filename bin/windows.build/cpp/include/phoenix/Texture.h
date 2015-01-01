#ifndef INCLUDED_phoenix_Texture
#define INCLUDED_phoenix_Texture

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <luxe/resource/Resource.h>
HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS2(luxe,resource,Resource)
HX_DECLARE_CLASS2(luxe,resource,ResourceManager)
HX_DECLARE_CLASS2(luxe,resource,ResourceType)
HX_DECLARE_CLASS1(phoenix,ClampType)
HX_DECLARE_CLASS1(phoenix,Color)
HX_DECLARE_CLASS1(phoenix,FilterType)
HX_DECLARE_CLASS1(phoenix,Texture)
HX_DECLARE_CLASS1(phoenix,Vector)
HX_DECLARE_CLASS2(snow,assets,Asset)
HX_DECLARE_CLASS2(snow,assets,AssetImage)
HX_DECLARE_CLASS5(snow,platform,native,render,opengl,GLObject)
HX_DECLARE_CLASS5(snow,platform,native,render,opengl,GLTexture)
HX_DECLARE_CLASS4(snow,platform,native,utils,ArrayBufferView)
HX_DECLARE_CLASS4(snow,platform,native,utils,ByteArray)
HX_DECLARE_CLASS4(snow,platform,native,utils,UInt8Array)
HX_DECLARE_CLASS2(snow,utils,IDataInput)
HX_DECLARE_CLASS2(snow,utils,IMemoryRange)
namespace phoenix{


class HXCPP_CLASS_ATTRIBUTES  Texture_obj : public ::luxe::resource::Resource_obj{
	public:
		typedef ::luxe::resource::Resource_obj super;
		typedef Texture_obj OBJ_;
		Texture_obj();
		Void __construct(::luxe::resource::ResourceManager _manager,::luxe::resource::ResourceType _type);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Texture_obj > __new(::luxe::resource::ResourceManager _manager,::luxe::resource::ResourceType _type);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Texture_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Texture"); }

		::snow::platform::native::render::opengl::GLTexture texture;
		::snow::assets::AssetImage asset;
		int width_actual;
		int height_actual;
		int width;
		int height;
		bool loaded;
		int slot;
		Dynamic _onload_handlers;
		::phoenix::FilterType filter;
		::phoenix::FilterType filter_min;
		::phoenix::FilterType filter_mag;
		::phoenix::ClampType clamp;
		virtual Dynamic set_onload( Dynamic f);
		Dynamic set_onload_dyn();

		virtual Void do_onload( );
		Dynamic do_onload_dyn();

		virtual ::String toString( );
		Dynamic toString_dyn();

		virtual ::String estimated_memory( );
		Dynamic estimated_memory_dyn();

		virtual Void check_size( );
		Dynamic check_size_dyn();

		virtual Void reset( );
		Dynamic reset_dyn();

		virtual Void from_asset( ::snow::assets::AssetImage _asset);
		Dynamic from_asset_dyn();

		virtual Void generate_mipmaps( );
		Dynamic generate_mipmaps_dyn();

		virtual Void bind( );
		Dynamic bind_dyn();

		virtual Dynamic get_pixel( ::phoenix::Vector _pos);
		Dynamic get_pixel_dyn();

		virtual Void set_pixel( ::phoenix::Vector _pos,::phoenix::Color _color);
		Dynamic set_pixel_dyn();

		virtual bool lock( );
		Dynamic lock_dyn();

		virtual Void unlock( );
		Dynamic unlock_dyn();

		virtual Void drop( );

		virtual Void activate( int att);
		Dynamic activate_dyn();

		virtual Void destroy( );
		Dynamic destroy_dyn();

		virtual Void _set_clamp( ::phoenix::ClampType _clamp);
		Dynamic _set_clamp_dyn();

		virtual ::phoenix::ClampType set_clamp( ::phoenix::ClampType _clamp);
		Dynamic set_clamp_dyn();

		virtual Void _set_filter( ::phoenix::FilterType _filter);
		Dynamic _set_filter_dyn();

		virtual Void _set_filter_min( ::phoenix::FilterType _filter);
		Dynamic _set_filter_min_dyn();

		virtual Void _set_filter_mag( ::phoenix::FilterType _filter);
		Dynamic _set_filter_mag_dyn();

		virtual ::phoenix::FilterType set_filter( ::phoenix::FilterType _filter);
		Dynamic set_filter_dyn();

		virtual ::phoenix::FilterType set_filter_min( ::phoenix::FilterType _filter);
		Dynamic set_filter_min_dyn();

		virtual ::phoenix::FilterType set_filter_mag( ::phoenix::FilterType _filter);
		Dynamic set_filter_mag_dyn();

		static ::phoenix::Texture load( ::String _id,Dynamic _onloaded,Dynamic _silent);
		static Dynamic load_dyn();

		static ::phoenix::Texture load_from_resource( ::String _name,Dynamic _cache);
		static Dynamic load_from_resource_dyn();

		static ::phoenix::Texture load_from_bytearray( ::String _name,::snow::platform::native::utils::ByteArray _bytes,Dynamic _cache);
		static Dynamic load_from_bytearray_dyn();

		static ::phoenix::Texture load_from_pixels( ::String _id,int _width,int _height,::snow::platform::native::utils::UInt8Array _pixels,Dynamic _cache);
		static Dynamic load_from_pixels_dyn();

};

} // end namespace phoenix

#endif /* INCLUDED_phoenix_Texture */ 
