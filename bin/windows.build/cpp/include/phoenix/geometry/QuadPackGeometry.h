#ifndef INCLUDED_phoenix_geometry_QuadPackGeometry
#define INCLUDED_phoenix_geometry_QuadPackGeometry

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <phoenix/geometry/Geometry.h>
HX_DECLARE_CLASS0(IMap)
HX_DECLARE_CLASS2(haxe,ds,IntMap)
HX_DECLARE_CLASS1(phoenix,Color)
HX_DECLARE_CLASS1(phoenix,Rectangle)
HX_DECLARE_CLASS1(phoenix,Vector)
HX_DECLARE_CLASS2(phoenix,geometry,Geometry)
HX_DECLARE_CLASS2(phoenix,geometry,QuadPackGeometry)
namespace phoenix{
namespace geometry{


class HXCPP_CLASS_ATTRIBUTES  QuadPackGeometry_obj : public ::phoenix::geometry::Geometry_obj{
	public:
		typedef ::phoenix::geometry::Geometry_obj super;
		typedef QuadPackGeometry_obj OBJ_;
		QuadPackGeometry_obj();
		Void __construct(Dynamic _options);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< QuadPackGeometry_obj > __new(Dynamic _options);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~QuadPackGeometry_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("QuadPackGeometry"); }

		::haxe::ds::IntMap quads;
		virtual Void clear( );
		Dynamic clear_dyn();

		virtual int quad_add( Dynamic _options);
		Dynamic quad_add_dyn();

		virtual Void quad_remove( int _quad_id);
		Dynamic quad_remove_dyn();

		virtual Void quad_visible( int _quad_id,bool visible);
		Dynamic quad_visible_dyn();

		virtual Void quad_resize( int _quad_id,::phoenix::Rectangle _size);
		Dynamic quad_resize_dyn();

		virtual Void quad_pos( int _quad_id,::phoenix::Vector _p);
		Dynamic quad_pos_dyn();

		virtual Void quad_color( int _quad_id,::phoenix::Color _c);
		Dynamic quad_color_dyn();

		virtual Void quad_alpha( int _quad_id,Float _a);
		Dynamic quad_alpha_dyn();

		virtual Void quad_uv_space( int _quad_id,::phoenix::Rectangle _uv);
		Dynamic quad_uv_space_dyn();

		virtual Void quad_uv( int _quad_id,::phoenix::Rectangle _uv);
		Dynamic quad_uv_dyn();

		virtual Void quad_flipx( int _quad_id,bool _flip);
		Dynamic quad_flipx_dyn();

		virtual Void quad_flipy( int _quad_id,bool _flip);
		Dynamic quad_flipy_dyn();

};

} // end namespace phoenix
} // end namespace geometry

#endif /* INCLUDED_phoenix_geometry_QuadPackGeometry */ 
