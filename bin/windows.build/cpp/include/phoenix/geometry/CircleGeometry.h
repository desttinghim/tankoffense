#ifndef INCLUDED_phoenix_geometry_CircleGeometry
#define INCLUDED_phoenix_geometry_CircleGeometry

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <phoenix/geometry/Geometry.h>
HX_DECLARE_CLASS2(phoenix,geometry,CircleGeometry)
HX_DECLARE_CLASS2(phoenix,geometry,Geometry)
namespace phoenix{
namespace geometry{


class HXCPP_CLASS_ATTRIBUTES  CircleGeometry_obj : public ::phoenix::geometry::Geometry_obj{
	public:
		typedef ::phoenix::geometry::Geometry_obj super;
		typedef CircleGeometry_obj OBJ_;
		CircleGeometry_obj();
		Void __construct(Dynamic options);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< CircleGeometry_obj > __new(Dynamic options);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~CircleGeometry_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("CircleGeometry"); }

		virtual Void set( Float _x,Float _y,Float _rx,Float _ry,int _steps,hx::Null< Float >  _start_angle,hx::Null< Float >  _end_angle);
		Dynamic set_dyn();

};

} // end namespace phoenix
} // end namespace geometry

#endif /* INCLUDED_phoenix_geometry_CircleGeometry */ 
