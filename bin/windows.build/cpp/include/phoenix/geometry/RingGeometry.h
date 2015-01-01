#ifndef INCLUDED_phoenix_geometry_RingGeometry
#define INCLUDED_phoenix_geometry_RingGeometry

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <phoenix/geometry/CircleGeometry.h>
HX_DECLARE_CLASS2(phoenix,geometry,CircleGeometry)
HX_DECLARE_CLASS2(phoenix,geometry,Geometry)
HX_DECLARE_CLASS2(phoenix,geometry,RingGeometry)
namespace phoenix{
namespace geometry{


class HXCPP_CLASS_ATTRIBUTES  RingGeometry_obj : public ::phoenix::geometry::CircleGeometry_obj{
	public:
		typedef ::phoenix::geometry::CircleGeometry_obj super;
		typedef RingGeometry_obj OBJ_;
		RingGeometry_obj();
		Void __construct(Dynamic options);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< RingGeometry_obj > __new(Dynamic options);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~RingGeometry_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("RingGeometry"); }

		virtual Void set( Float _x,Float _y,Float _rx,Float _ry,int _steps,hx::Null< Float >  _start_angle_degrees,hx::Null< Float >  _end_angle_degrees);

};

} // end namespace phoenix
} // end namespace geometry

#endif /* INCLUDED_phoenix_geometry_RingGeometry */ 
