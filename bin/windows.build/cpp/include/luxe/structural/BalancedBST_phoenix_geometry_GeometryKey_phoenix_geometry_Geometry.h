#ifndef INCLUDED_luxe_structural_BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry
#define INCLUDED_luxe_structural_BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(luxe,structural,BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry)
HX_DECLARE_CLASS2(luxe,structural,BalancedBSTTraverseMethod)
HX_DECLARE_CLASS2(luxe,structural,BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry)
HX_DECLARE_CLASS2(phoenix,geometry,Geometry)
HX_DECLARE_CLASS2(phoenix,geometry,GeometryKey)
namespace luxe{
namespace structural{


class HXCPP_CLASS_ATTRIBUTES  BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj OBJ_;
		BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj();
		Void __construct(Dynamic compare_function);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj > __new(Dynamic compare_function);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry"); }

		::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry root;
		Dynamic compare;
		Dynamic &compare_dyn() { return compare;}
		bool empty;
		Array< ::Dynamic > _array;
		virtual int size( );
		Dynamic size_dyn();

		virtual int depth( );
		Dynamic depth_dyn();

		virtual Void insert( ::phoenix::geometry::GeometryKey _key,::phoenix::geometry::Geometry _value);
		Dynamic insert_dyn();

		virtual bool contains( ::phoenix::geometry::GeometryKey _key);
		Dynamic contains_dyn();

		virtual ::phoenix::geometry::Geometry find( ::phoenix::geometry::GeometryKey _key);
		Dynamic find_dyn();

		virtual int rank( ::phoenix::geometry::GeometryKey _key);
		Dynamic rank_dyn();

		virtual ::phoenix::geometry::GeometryKey select( int _rank);
		Dynamic select_dyn();

		virtual ::phoenix::geometry::GeometryKey smallest( );
		Dynamic smallest_dyn();

		virtual ::phoenix::geometry::GeometryKey largest( );
		Dynamic largest_dyn();

		virtual bool remove( ::phoenix::geometry::GeometryKey _key);
		Dynamic remove_dyn();

		virtual bool remove_smallest( );
		Dynamic remove_smallest_dyn();

		virtual bool remove_largest( );
		Dynamic remove_largest_dyn();

		virtual ::phoenix::geometry::GeometryKey floor( ::phoenix::geometry::GeometryKey _key);
		Dynamic floor_dyn();

		virtual ::phoenix::geometry::GeometryKey ceil( ::phoenix::geometry::GeometryKey _key);
		Dynamic ceil_dyn();

		virtual Array< ::Dynamic > toArray( );
		Dynamic toArray_dyn();

		virtual Array< ::Dynamic > keys( );
		Dynamic keys_dyn();

		virtual Dynamic iterator( );
		Dynamic iterator_dyn();

		virtual Void traverse_node( ::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry _node,::luxe::structural::BalancedBSTTraverseMethod _method,Dynamic _on_traverse);
		Dynamic traverse_node_dyn();

		virtual bool get_empty( );
		Dynamic get_empty_dyn();

		virtual int node_depth( ::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry _node);
		Dynamic node_depth_dyn();

		virtual int node_count( ::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry _node);
		Dynamic node_count_dyn();

		virtual ::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry node_insert( ::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry _node,::phoenix::geometry::GeometryKey _key,::phoenix::geometry::Geometry _value);
		Dynamic node_insert_dyn();

		virtual ::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry node_update_count( ::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry _node);
		Dynamic node_update_count_dyn();

		virtual ::phoenix::geometry::Geometry node_find( ::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry _node,::phoenix::geometry::GeometryKey _key);
		Dynamic node_find_dyn();

		virtual int node_rank( ::phoenix::geometry::GeometryKey _key,::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry _node);
		Dynamic node_rank_dyn();

		virtual ::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry node_select( ::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry _node,int _rank);
		Dynamic node_select_dyn();

		virtual ::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry node_smallest( ::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry _node);
		Dynamic node_smallest_dyn();

		virtual ::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry node_largest( ::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry _node);
		Dynamic node_largest_dyn();

		virtual ::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry node_floor( ::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry _node,::phoenix::geometry::GeometryKey _key);
		Dynamic node_floor_dyn();

		virtual ::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry node_ceil( ::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry _node,::phoenix::geometry::GeometryKey _key);
		Dynamic node_ceil_dyn();

		virtual ::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry node_remove_smallest( ::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry _node);
		Dynamic node_remove_smallest_dyn();

		virtual ::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry node_remove_largest( ::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry _node);
		Dynamic node_remove_largest_dyn();

		virtual ::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry node_remove( ::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry _node,::phoenix::geometry::GeometryKey _key);
		Dynamic node_remove_dyn();

		virtual bool is_red( ::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry _node);
		Dynamic is_red_dyn();

		virtual ::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry rotate_left( ::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry _node);
		Dynamic rotate_left_dyn();

		virtual ::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry rotate_right( ::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry _node);
		Dynamic rotate_right_dyn();

		virtual Void swap_color( ::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry _node);
		Dynamic swap_color_dyn();

		virtual ::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry move_red_left( ::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry _node);
		Dynamic move_red_left_dyn();

		virtual ::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry move_red_right( ::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry _node);
		Dynamic move_red_right_dyn();

		virtual ::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry balance( ::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry _node);
		Dynamic balance_dyn();

};

} // end namespace luxe
} // end namespace structural

#endif /* INCLUDED_luxe_structural_BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry */ 
