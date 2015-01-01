#ifndef INCLUDED_phoenix_geometry_QuadGeometry
#define INCLUDED_phoenix_geometry_QuadGeometry

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <phoenix/geometry/Geometry.h>
HX_DECLARE_CLASS1(phoenix,Rectangle)
HX_DECLARE_CLASS1(phoenix,Vector)
HX_DECLARE_CLASS2(phoenix,geometry,Geometry)
HX_DECLARE_CLASS2(phoenix,geometry,QuadGeometry)
namespace phoenix{
namespace geometry{


class HXCPP_CLASS_ATTRIBUTES  QuadGeometry_obj : public ::phoenix::geometry::Geometry_obj{
	public:
		typedef ::phoenix::geometry::Geometry_obj super;
		typedef QuadGeometry_obj OBJ_;
		QuadGeometry_obj();
		Void __construct(Dynamic options);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< QuadGeometry_obj > __new(Dynamic options);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~QuadGeometry_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("QuadGeometry"); }

		bool flipx;
		bool flipy;
		::phoenix::Rectangle _uv_cache;
		bool is_set;
		virtual Void uv( ::phoenix::Rectangle _rect);
		Dynamic uv_dyn();

		virtual Void uv_space( ::phoenix::Rectangle _rect);
		Dynamic uv_space_dyn();

		virtual Void resize( ::phoenix::Vector quad);
		Dynamic resize_dyn();

		virtual Void set( ::phoenix::Rectangle quad);
		Dynamic set_dyn();

		virtual bool set_flipx( bool _val);
		Dynamic set_flipx_dyn();

		virtual bool set_flipy( bool _val);
		Dynamic set_flipy_dyn();

};

} // end namespace phoenix
} // end namespace geometry

#endif /* INCLUDED_phoenix_geometry_QuadGeometry */ 
