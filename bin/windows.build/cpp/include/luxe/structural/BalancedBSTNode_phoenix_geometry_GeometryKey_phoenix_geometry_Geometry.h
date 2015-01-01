#ifndef INCLUDED_luxe_structural_BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry
#define INCLUDED_luxe_structural_BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(luxe,structural,BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry)
HX_DECLARE_CLASS2(phoenix,geometry,Geometry)
HX_DECLARE_CLASS2(phoenix,geometry,GeometryKey)
namespace luxe{
namespace structural{


class HXCPP_CLASS_ATTRIBUTES  BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj OBJ_;
		BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj();
		Void __construct(::phoenix::geometry::GeometryKey _key,::phoenix::geometry::Geometry _value,int _node_count,bool _color);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj > __new(::phoenix::geometry::GeometryKey _key,::phoenix::geometry::Geometry _value,int _node_count,bool _color);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry"); }

		::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry left;
		::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry right;
		int nodecount;
		bool color;
		::phoenix::geometry::GeometryKey key;
		::phoenix::geometry::Geometry value;
};

} // end namespace luxe
} // end namespace structural

#endif /* INCLUDED_luxe_structural_BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry */ 
