#ifndef INCLUDED_luxe_Parcel
#define INCLUDED_luxe_Parcel

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <luxe/resource/ResourceManager.h>
HX_DECLARE_CLASS1(luxe,Parcel)
HX_DECLARE_CLASS2(luxe,resource,DataResource)
HX_DECLARE_CLASS2(luxe,resource,Resource)
HX_DECLARE_CLASS2(luxe,resource,ResourceManager)
HX_DECLARE_CLASS2(luxe,resource,SoundResource)
HX_DECLARE_CLASS2(luxe,resource,TextResource)
HX_DECLARE_CLASS1(phoenix,BitmapFont)
HX_DECLARE_CLASS1(phoenix,Shader)
HX_DECLARE_CLASS1(phoenix,Texture)
namespace luxe{


class HXCPP_CLASS_ATTRIBUTES  Parcel_obj : public ::luxe::resource::ResourceManager_obj{
	public:
		typedef ::luxe::resource::ResourceManager_obj super;
		typedef Parcel_obj OBJ_;
		Parcel_obj();
		Void __construct(Dynamic _options);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Parcel_obj > __new(Dynamic _options);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Parcel_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Parcel"); }

		Float time_to_load;
		Float time_start_load;
		Array< ::String > texture_list;
		Dynamic shader_list;
		Dynamic font_list;
		Dynamic sound_list;
		Dynamic text_list;
		Dynamic data_list;
		int total_items;
		int current_count;
		Dynamic options;
		int index_textures;
		int index_fonts;
		int index_shaders;
		int index_sounds;
		int index_datas;
		int index_texts;
		virtual Void refresh_total_items( );
		Dynamic refresh_total_items_dyn();

		virtual Void load( );
		Dynamic load_dyn();

		virtual Void from_json( Dynamic _json_object);
		Dynamic from_json_dyn();

		virtual Void start_textures_load( );
		Dynamic start_textures_load_dyn();

		virtual Void start_fonts_load( );
		Dynamic start_fonts_load_dyn();

		virtual Void start_shaders_load( );
		Dynamic start_shaders_load_dyn();

		virtual Void start_sounds_load( );
		Dynamic start_sounds_load_dyn();

		virtual Void start_datas_load( );
		Dynamic start_datas_load_dyn();

		virtual Void start_texts_load( );
		Dynamic start_texts_load_dyn();

		virtual Void load_textures( );
		Dynamic load_textures_dyn();

		virtual Void load_fonts( );
		Dynamic load_fonts_dyn();

		virtual Void load_shaders( );
		Dynamic load_shaders_dyn();

		virtual Void load_sounds( );
		Dynamic load_sounds_dyn();

		virtual Void load_datas( );
		Dynamic load_datas_dyn();

		virtual Void load_texts( );
		Dynamic load_texts_dyn();

		virtual Void recursive_load_textures( ::luxe::resource::Resource item);
		Dynamic recursive_load_textures_dyn();

		virtual Void recursive_load_shaders( ::luxe::resource::Resource item);
		Dynamic recursive_load_shaders_dyn();

		virtual Void recursive_load_fonts( ::luxe::resource::Resource item);
		Dynamic recursive_load_fonts_dyn();

		virtual Void recursive_load_sounds( ::luxe::resource::Resource item);
		Dynamic recursive_load_sounds_dyn();

		virtual Void recursive_load_datas( ::luxe::resource::Resource item);
		Dynamic recursive_load_datas_dyn();

		virtual Void recursive_load_texts( ::luxe::resource::Resource item);
		Dynamic recursive_load_texts_dyn();

		virtual Void add_texture( ::String _id);
		Dynamic add_texture_dyn();

		virtual Void add_textures( Array< ::String > list);
		Dynamic add_textures_dyn();

		virtual Void add_shader( ::String ps_id,::String vs_id);
		Dynamic add_shader_dyn();

		virtual Void add_shaders( Dynamic list);
		Dynamic add_shaders_dyn();

		virtual Void add_font( ::String _id,::String _path);
		Dynamic add_font_dyn();

		virtual Void add_fonts( Dynamic list);
		Dynamic add_fonts_dyn();

		virtual Void add_sound( ::String _id,::String _name,hx::Null< bool >  _is_stream);
		Dynamic add_sound_dyn();

		virtual Void add_sounds( Dynamic list);
		Dynamic add_sounds_dyn();

		virtual Void add_text( ::String _id,Dynamic _async);
		Dynamic add_text_dyn();

		virtual Void add_texts( Dynamic list);
		Dynamic add_texts_dyn();

		virtual Void add_data( ::String _id,Dynamic _async);
		Dynamic add_data_dyn();

		virtual Void add_datas( Dynamic list);
		Dynamic add_datas_dyn();

		virtual Void load_texture( ::String _tex,Dynamic _complete);
		Dynamic load_texture_dyn();

		virtual Void load_shader( Dynamic _shader,Dynamic _complete);
		Dynamic load_shader_dyn();

		virtual Void load_font( Dynamic _font,Dynamic _complete);
		Dynamic load_font_dyn();

		virtual Void load_data( Dynamic _data_info,Dynamic _complete);
		Dynamic load_data_dyn();

		virtual Void load_text( Dynamic _text_info,Dynamic _complete);
		Dynamic load_text_dyn();

		virtual Void load_sound( Dynamic _sound,Dynamic _complete);
		Dynamic load_sound_dyn();

		virtual Void do_complete( );
		Dynamic do_complete_dyn();

		virtual Void single_item_complete( ::luxe::resource::Resource item);
		Dynamic single_item_complete_dyn();

};

} // end namespace luxe

#endif /* INCLUDED_luxe_Parcel */ 
