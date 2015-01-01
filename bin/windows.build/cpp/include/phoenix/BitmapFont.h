#ifndef INCLUDED_phoenix_BitmapFont
#define INCLUDED_phoenix_BitmapFont

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <luxe/resource/Resource.h>
HX_DECLARE_CLASS0(IMap)
HX_DECLARE_CLASS2(haxe,ds,IntMap)
HX_DECLARE_CLASS2(luxe,resource,Resource)
HX_DECLARE_CLASS1(phoenix,BitmapFont)
HX_DECLARE_CLASS1(phoenix,Rectangle)
HX_DECLARE_CLASS1(phoenix,Texture)
HX_DECLARE_CLASS1(phoenix,Vector)
HX_DECLARE_CLASS2(phoenix,geometry,Geometry)
HX_DECLARE_CLASS2(phoenix,geometry,TextGeometry)
namespace phoenix{


class HXCPP_CLASS_ATTRIBUTES  BitmapFont_obj : public ::luxe::resource::Resource_obj{
	public:
		typedef ::luxe::resource::Resource_obj super;
		typedef BitmapFont_obj OBJ_;
		BitmapFont_obj();
		Void __construct(Dynamic _options);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< BitmapFont_obj > __new(Dynamic _options);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~BitmapFont_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("BitmapFont"); }

		::haxe::ds::IntMap pages;
		Dynamic info;
		Dynamic options;
		Dynamic onload;
		Dynamic &onload_dyn() { return onload;}
		bool loaded;
		Dynamic space_char;
		int items_loaded;
		int items_total;
		virtual Void from_string( ::String _id,::String _bitmapfont_data,::String _path,Dynamic _onload,Array< ::Dynamic > _custom_pages,Dynamic _silent);
		Dynamic from_string_dyn();

		virtual Dynamic kerning( int _first,int _second);
		Dynamic kerning_dyn();

		virtual ::String wrap_string_to_bounds( ::String _string,::phoenix::Rectangle _bounds,hx::Null< Float >  _point_size,hx::Null< Float >  _letter_spc);
		Dynamic wrap_string_to_bounds_dyn();

		virtual Float width_of( ::String _string,hx::Null< Float >  _point_size,hx::Null< Float >  _letter_spc,Array< Float > _line_widths);
		Dynamic width_of_dyn();

		virtual Float height_of( ::String _string,Float _point_size,hx::Null< Float >  _line_spc);
		Dynamic height_of_dyn();

		virtual ::phoenix::Vector dimensions_of( ::String _string,Float _point_size,::phoenix::Vector _into,hx::Null< Float >  _letter_spc,hx::Null< Float >  _line_spc);
		Dynamic dimensions_of_dyn();

		virtual Float height_of_lines( Array< ::String > _lines,Float _point_size,hx::Null< Float >  _line_spc);
		Dynamic height_of_lines_dyn();

		virtual Void default_options( );
		Dynamic default_options_dyn();

		virtual Void do_onload( hx::Null< bool >  success);
		Dynamic do_onload_dyn();

		virtual Void page_loaded( ::phoenix::Texture t);
		Dynamic page_loaded_dyn();

		virtual Void load_pages( ::String _path,Array< ::Dynamic > _custom_pages);
		Dynamic load_pages_dyn();

		virtual ::phoenix::geometry::TextGeometry draw_text( Dynamic opt);
		Dynamic draw_text_dyn();

		virtual ::String toString( );
		Dynamic toString_dyn();

		static Array< ::String > generic_names;
		static ::phoenix::BitmapFont load( Dynamic _options);
		static Dynamic load_dyn();

};

} // end namespace phoenix

#endif /* INCLUDED_phoenix_BitmapFont */ 
