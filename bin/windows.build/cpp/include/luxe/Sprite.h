#ifndef INCLUDED_luxe_Sprite
#define INCLUDED_luxe_Sprite

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <luxe/Visual.h>
HX_DECLARE_CLASS1(luxe,Emitter)
HX_DECLARE_CLASS1(luxe,Entity)
HX_DECLARE_CLASS1(luxe,Objects)
HX_DECLARE_CLASS1(luxe,Sprite)
HX_DECLARE_CLASS1(luxe,Visual)
HX_DECLARE_CLASS1(phoenix,Rectangle)
HX_DECLARE_CLASS1(phoenix,Vector)
HX_DECLARE_CLASS2(phoenix,geometry,Geometry)
HX_DECLARE_CLASS2(phoenix,geometry,QuadGeometry)
namespace luxe{


class HXCPP_CLASS_ATTRIBUTES  Sprite_obj : public ::luxe::Visual_obj{
	public:
		typedef ::luxe::Visual_obj super;
		typedef Sprite_obj OBJ_;
		Sprite_obj();
		Void __construct(Dynamic options);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Sprite_obj > __new(Dynamic options);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Sprite_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Sprite"); }

		bool centered;
		bool flipx;
		bool flipy;
		::phoenix::Rectangle uv;
		::phoenix::geometry::QuadGeometry geometry_quad;
		virtual Void on_geometry_created( );

		virtual ::phoenix::geometry::Geometry set_geometry( ::phoenix::geometry::Geometry _g);

		virtual bool point_inside( ::phoenix::Vector _p);
		Dynamic point_inside_dyn();

		virtual bool point_inside_AABB( ::phoenix::Vector _p);
		Dynamic point_inside_AABB_dyn();

		virtual ::phoenix::Rectangle set_uv( ::phoenix::Rectangle _uv);
		Dynamic set_uv_dyn();

		virtual bool set_flipy( bool _v);
		Dynamic set_flipy_dyn();

		virtual bool set_flipx( bool _v);
		Dynamic set_flipx_dyn();

		virtual ::phoenix::Vector set_size( ::phoenix::Vector _v);

		virtual bool set_centered( bool _c);
		Dynamic set_centered_dyn();

		virtual Void _uv_change( Float _v);
		Dynamic _uv_change_dyn();

		virtual Void init( );

		virtual Void ondestroy( );

};

} // end namespace luxe

#endif /* INCLUDED_luxe_Sprite */ 
