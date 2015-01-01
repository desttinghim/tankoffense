#ifndef INCLUDED_luxe_debug_BatcherDebugView
#define INCLUDED_luxe_debug_BatcherDebugView

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <luxe/debug/DebugView.h>
HX_DECLARE_CLASS1(luxe,Emitter)
HX_DECLARE_CLASS1(luxe,Objects)
HX_DECLARE_CLASS2(luxe,debug,BatcherDebugView)
HX_DECLARE_CLASS2(luxe,debug,DebugView)
HX_DECLARE_CLASS2(luxe,structural,BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry)
HX_DECLARE_CLASS1(phoenix,Batcher)
HX_DECLARE_CLASS1(phoenix,Vector)
HX_DECLARE_CLASS2(phoenix,geometry,CompositeGeometry)
HX_DECLARE_CLASS2(phoenix,geometry,Geometry)
HX_DECLARE_CLASS2(phoenix,geometry,GeometryKey)
namespace luxe{
namespace debug{


class HXCPP_CLASS_ATTRIBUTES  BatcherDebugView_obj : public ::luxe::debug::DebugView_obj{
	public:
		typedef ::luxe::debug::DebugView_obj super;
		typedef BatcherDebugView_obj OBJ_;
		BatcherDebugView_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< BatcherDebugView_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~BatcherDebugView_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("BatcherDebugView"); }

		::phoenix::Batcher batcher;
		virtual Void create( );

		virtual Void refresh( );

		bool dragging;
		::phoenix::Vector dragstart;
		::phoenix::Vector dragmstart;
		virtual Void onmousedown( Dynamic e);

		virtual Void onmouseup( Dynamic e);

		virtual Void onmousemove( Dynamic e);

		virtual Void onmousewheel( Dynamic e);

		::phoenix::geometry::CompositeGeometry _tree_geom;
		bool as_immediate;
		virtual Void clear_batcher_tree( );
		Dynamic clear_batcher_tree_dyn();

		virtual ::String keystr( ::phoenix::geometry::GeometryKey key,::phoenix::geometry::GeometryKey key2);
		Dynamic keystr_dyn();

		virtual Void draw_geom_node( bool l,::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry _leaf,::phoenix::Vector _p,hx::Null< Float >  _bbw);
		Dynamic draw_geom_node_dyn();

		virtual Void draw_geom_leaf( bool L,::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry _leaf,::phoenix::Vector _p);
		Dynamic draw_geom_leaf_dyn();

		virtual Void draw_batcher_tree( );
		Dynamic draw_batcher_tree_dyn();

		virtual Void process( );

		virtual Void show( );

		virtual Void hide( );

};

} // end namespace luxe
} // end namespace debug

#endif /* INCLUDED_luxe_debug_BatcherDebugView */ 
