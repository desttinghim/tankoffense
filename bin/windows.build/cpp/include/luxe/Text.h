#ifndef INCLUDED_luxe_Text
#define INCLUDED_luxe_Text

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <luxe/Visual.h>
HX_DECLARE_CLASS1(luxe,Emitter)
HX_DECLARE_CLASS1(luxe,Entity)
HX_DECLARE_CLASS1(luxe,Objects)
HX_DECLARE_CLASS1(luxe,Text)
HX_DECLARE_CLASS1(luxe,Visual)
HX_DECLARE_CLASS2(luxe,resource,Resource)
HX_DECLARE_CLASS1(phoenix,BitmapFont)
HX_DECLARE_CLASS1(phoenix,Color)
HX_DECLARE_CLASS1(phoenix,Rectangle)
HX_DECLARE_CLASS1(phoenix,Vector)
HX_DECLARE_CLASS2(phoenix,geometry,Geometry)
HX_DECLARE_CLASS2(phoenix,geometry,TextGeometry)
namespace luxe{


class HXCPP_CLASS_ATTRIBUTES  Text_obj : public ::luxe::Visual_obj{
	public:
		typedef ::luxe::Visual_obj super;
		typedef Text_obj OBJ_;
		Text_obj();
		Void __construct(Dynamic _options);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Text_obj > __new(Dynamic _options);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Text_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Text"); }

		::phoenix::geometry::TextGeometry geom;
		virtual ::String get_text( );
		Dynamic get_text_dyn();

		virtual ::String set_text( ::String _s);
		Dynamic set_text_dyn();

		virtual ::phoenix::BitmapFont get_font( );
		Dynamic get_font_dyn();

		virtual ::phoenix::BitmapFont set_font( ::phoenix::BitmapFont _f);
		Dynamic set_font_dyn();

		virtual Float get_point_size( );
		Dynamic get_point_size_dyn();

		virtual Float set_point_size( Float _s);
		Dynamic set_point_size_dyn();

		virtual Float get_letter_spacing( );
		Dynamic get_letter_spacing_dyn();

		virtual Float set_letter_spacing( Float _s);
		Dynamic set_letter_spacing_dyn();

		virtual Float get_line_spacing( );
		Dynamic get_line_spacing_dyn();

		virtual Float set_line_spacing( Float _s);
		Dynamic set_line_spacing_dyn();

		virtual ::phoenix::Rectangle get_bounds( );
		Dynamic get_bounds_dyn();

		virtual ::phoenix::Rectangle set_bounds( ::phoenix::Rectangle _b);
		Dynamic set_bounds_dyn();

		virtual bool get_bounds_wrap( );
		Dynamic get_bounds_wrap_dyn();

		virtual bool set_bounds_wrap( bool _b);
		Dynamic set_bounds_wrap_dyn();

		virtual int get_align( );
		Dynamic get_align_dyn();

		virtual int set_align( int _a);
		Dynamic set_align_dyn();

		virtual int get_align_vertical( );
		Dynamic get_align_vertical_dyn();

		virtual int set_align_vertical( int _a);
		Dynamic set_align_vertical_dyn();

		virtual bool get_sdf( );
		Dynamic get_sdf_dyn();

		virtual bool set_sdf( bool _s);
		Dynamic set_sdf_dyn();

		virtual Float get_smoothness( );
		Dynamic get_smoothness_dyn();

		virtual Float set_smoothness( Float _s);
		Dynamic set_smoothness_dyn();

		virtual Float get_thickness( );
		Dynamic get_thickness_dyn();

		virtual Float set_thickness( Float _t);
		Dynamic set_thickness_dyn();

		virtual Float get_outline( );
		Dynamic get_outline_dyn();

		virtual Float set_outline( Float _o);
		Dynamic set_outline_dyn();

		virtual ::phoenix::Color get_outline_color( );
		Dynamic get_outline_color_dyn();

		virtual ::phoenix::Color set_outline_color( ::phoenix::Color _c);
		Dynamic set_outline_color_dyn();

		virtual Float get_glow_threshold( );
		Dynamic get_glow_threshold_dyn();

		virtual Float set_glow_threshold( Float _s);
		Dynamic set_glow_threshold_dyn();

		virtual Float get_glow_amount( );
		Dynamic get_glow_amount_dyn();

		virtual Float set_glow_amount( Float _e);
		Dynamic set_glow_amount_dyn();

		virtual ::phoenix::Color get_glow_color( );
		Dynamic get_glow_color_dyn();

		virtual ::phoenix::Color set_glow_color( ::phoenix::Color _c);
		Dynamic set_glow_color_dyn();

		Dynamic text_options;
		virtual bool point_inside( ::phoenix::Vector p);
		Dynamic point_inside_dyn();

		virtual Void set_pos_from_transform( ::phoenix::Vector _p);

		virtual Void init( );

		virtual Void ondestroy( );

};

} // end namespace luxe

#endif /* INCLUDED_luxe_Text */ 
