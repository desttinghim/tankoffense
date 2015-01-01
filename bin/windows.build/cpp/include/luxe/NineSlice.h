#ifndef INCLUDED_luxe_NineSlice
#define INCLUDED_luxe_NineSlice

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <luxe/Sprite.h>
HX_DECLARE_CLASS1(luxe,Emitter)
HX_DECLARE_CLASS1(luxe,Entity)
HX_DECLARE_CLASS1(luxe,NineSlice)
HX_DECLARE_CLASS1(luxe,Objects)
HX_DECLARE_CLASS1(luxe,Sprite)
HX_DECLARE_CLASS1(luxe,Visual)
HX_DECLARE_CLASS1(phoenix,Batcher)
HX_DECLARE_CLASS1(phoenix,Color)
HX_DECLARE_CLASS1(phoenix,Rectangle)
HX_DECLARE_CLASS1(phoenix,Vector)
HX_DECLARE_CLASS2(phoenix,geometry,Geometry)
HX_DECLARE_CLASS2(phoenix,geometry,QuadPackGeometry)
namespace luxe{


class HXCPP_CLASS_ATTRIBUTES  NineSlice_obj : public ::luxe::Sprite_obj{
	public:
		typedef ::luxe::Sprite_obj super;
		typedef NineSlice_obj OBJ_;
		NineSlice_obj();
		Void __construct(Dynamic _options);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< NineSlice_obj > __new(Dynamic _options);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~NineSlice_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("NineSlice"); }

		Float top;
		Float left;
		Float right;
		Float width;
		Float bottom;
		Float height;
		Float source_x;
		Float source_y;
		Float source_w;
		Float source_h;
		bool is_set;
		Float midwidth;
		Float midheight;
		Dynamic slices;
		bool added;
		Dynamic nineslice_options;
		::phoenix::geometry::QuadPackGeometry _geometry;
		::phoenix::Batcher _batcher;
		virtual Void lock( );
		Dynamic lock_dyn();

		virtual Void dirty( );
		Dynamic dirty_dyn();

		virtual Void update_size( Float _width,Float _height);
		Dynamic update_size_dyn();

		virtual Void set( Float _width,Float _height);
		Dynamic set_dyn();

		virtual ::phoenix::Vector set_size( ::phoenix::Vector _v);

		virtual ::phoenix::Vector set_pos( ::phoenix::Vector _v);

		virtual Void ondestroy( );

		virtual bool set_visible( bool _v);

		virtual Float set_depth( Float _d);

		virtual ::phoenix::Rectangle set_clip_rect( ::phoenix::Rectangle val);

		virtual ::phoenix::Color set_color( ::phoenix::Color _color);

		virtual Void _create( ::phoenix::Vector _pos,Float _w,Float _h,Dynamic _reset);
		Dynamic _create_dyn();

		virtual Void create( ::phoenix::Vector _pos,Float _w,Float _h,Dynamic _reset);
		Dynamic create_dyn();

		virtual Void init( );

};

} // end namespace luxe

#endif /* INCLUDED_luxe_NineSlice */ 
