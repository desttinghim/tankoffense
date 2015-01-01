#ifndef INCLUDED_phoenix_geometry_LineGeometry
#define INCLUDED_phoenix_geometry_LineGeometry

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <phoenix/geometry/Geometry.h>
HX_DECLARE_CLASS1(phoenix,Vector)
HX_DECLARE_CLASS2(phoenix,geometry,Geometry)
HX_DECLARE_CLASS2(phoenix,geometry,LineGeometry)
namespace phoenix{
namespace geometry{


class HXCPP_CLASS_ATTRIBUTES  LineGeometry_obj : public ::phoenix::geometry::Geometry_obj{
	public:
		typedef ::phoenix::geometry::Geometry_obj super;
		typedef LineGeometry_obj OBJ_;
		LineGeometry_obj();
		Void __construct(Dynamic options);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< LineGeometry_obj > __new(Dynamic options);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~LineGeometry_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("LineGeometry"); }

		::phoenix::Vector p0;
		::phoenix::Vector p1;
		virtual ::phoenix::Vector set_p0( ::phoenix::Vector _p);
		Dynamic set_p0_dyn();

		virtual ::phoenix::Vector set_p1( ::phoenix::Vector _p);
		Dynamic set_p1_dyn();

		virtual Void set( Dynamic options);
		Dynamic set_dyn();

};

} // end namespace phoenix
} // end namespace geometry

#endif /* INCLUDED_phoenix_geometry_LineGeometry */ 
