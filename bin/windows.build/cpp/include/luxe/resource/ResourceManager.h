#ifndef INCLUDED_luxe_resource_ResourceManager
#define INCLUDED_luxe_resource_ResourceManager

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS2(luxe,resource,DataResource)
HX_DECLARE_CLASS2(luxe,resource,JSONResource)
HX_DECLARE_CLASS2(luxe,resource,Resource)
HX_DECLARE_CLASS2(luxe,resource,ResourceManager)
HX_DECLARE_CLASS2(luxe,resource,ResourceStats)
HX_DECLARE_CLASS2(luxe,resource,SoundResource)
HX_DECLARE_CLASS2(luxe,resource,TextResource)
HX_DECLARE_CLASS1(phoenix,BitmapFont)
HX_DECLARE_CLASS1(phoenix,RenderTexture)
HX_DECLARE_CLASS1(phoenix,Shader)
HX_DECLARE_CLASS1(phoenix,Texture)
namespace luxe{
namespace resource{


class HXCPP_CLASS_ATTRIBUTES  ResourceManager_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ResourceManager_obj OBJ_;
		ResourceManager_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< ResourceManager_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ResourceManager_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("ResourceManager"); }

		Array< ::Dynamic > resourcelist;
		::haxe::ds::StringMap render_textures;
		::haxe::ds::StringMap textures;
		::haxe::ds::StringMap shaders;
		::haxe::ds::StringMap fonts;
		::haxe::ds::StringMap data;
		::haxe::ds::StringMap text;
		::haxe::ds::StringMap json;
		::haxe::ds::StringMap sounds;
		::luxe::resource::ResourceStats stats;
		virtual Void add( ::luxe::resource::Resource res);
		Dynamic add_dyn();

		virtual Void remove( ::luxe::resource::Resource res);
		Dynamic remove_dyn();

		virtual Void uncache( ::luxe::resource::Resource res);
		Dynamic uncache_dyn();

		virtual Void cache( ::luxe::resource::Resource res);
		Dynamic cache_dyn();

		virtual ::phoenix::RenderTexture find_render_texture( ::String _name);
		Dynamic find_render_texture_dyn();

		virtual ::phoenix::Texture find_texture( ::String _name);
		Dynamic find_texture_dyn();

		virtual ::phoenix::Shader find_shader( ::String _name);
		Dynamic find_shader_dyn();

		virtual ::phoenix::BitmapFont find_font( ::String _name);
		Dynamic find_font_dyn();

		virtual ::luxe::resource::SoundResource find_sound( ::String _name);
		Dynamic find_sound_dyn();

		virtual ::luxe::resource::TextResource find_text( ::String _name);
		Dynamic find_text_dyn();

		virtual ::luxe::resource::JSONResource find_json( ::String _name);
		Dynamic find_json_dyn();

		virtual ::luxe::resource::DataResource find_data( ::String _name);
		Dynamic find_data_dyn();

		virtual Void clear( Dynamic and_persistent);
		Dynamic clear_dyn();

		virtual ::luxe::resource::Resource find( ::String id);
		Dynamic find_dyn();

};

} // end namespace luxe
} // end namespace resource

#endif /* INCLUDED_luxe_resource_ResourceManager */ 
