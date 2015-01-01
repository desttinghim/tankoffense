#ifndef INCLUDED_phoenix_Batcher
#define INCLUDED_phoenix_Batcher

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(IMap)
HX_DECLARE_CLASS2(haxe,ds,IntMap)
HX_DECLARE_CLASS2(luxe,resource,Resource)
HX_DECLARE_CLASS2(luxe,structural,BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry)
HX_DECLARE_CLASS1(phoenix,BatchState)
HX_DECLARE_CLASS1(phoenix,Batcher)
HX_DECLARE_CLASS1(phoenix,Camera)
HX_DECLARE_CLASS1(phoenix,Renderer)
HX_DECLARE_CLASS1(phoenix,Shader)
HX_DECLARE_CLASS2(phoenix,geometry,Geometry)
HX_DECLARE_CLASS2(phoenix,geometry,GeometryKey)
HX_DECLARE_CLASS5(snow,platform,native,render,opengl,GLBuffer)
HX_DECLARE_CLASS5(snow,platform,native,render,opengl,GLObject)
HX_DECLARE_CLASS4(snow,platform,native,utils,ArrayBufferView)
HX_DECLARE_CLASS4(snow,platform,native,utils,Float32Array)
HX_DECLARE_CLASS2(snow,utils,IMemoryRange)
namespace phoenix{


class HXCPP_CLASS_ATTRIBUTES  Batcher_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Batcher_obj OBJ_;
		Batcher_obj();
		Void __construct(::phoenix::Renderer _r,::String __o__name);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Batcher_obj > __new(::phoenix::Renderer _r,::String __o__name);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Batcher_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Batcher"); }

		::String id;
		int layer;
		bool enabled;
		::luxe::structural::BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry geometry;
		::haxe::ds::IntMap groups;
		bool tree_changed;
		::snow::platform::native::utils::Float32Array vertlist;
		::snow::platform::native::utils::Float32Array tcoordlist;
		::snow::platform::native::utils::Float32Array colorlist;
		::snow::platform::native::utils::Float32Array normallist;
		::snow::platform::native::utils::Float32Array static_vertlist;
		::snow::platform::native::utils::Float32Array static_tcoordlist;
		::snow::platform::native::utils::Float32Array static_colorlist;
		::snow::platform::native::utils::Float32Array static_normallist;
		int vert_floats;
		int tcoord_floats;
		int color_floats;
		int normal_floats;
		int static_vert_floats;
		int static_tcoord_floats;
		int static_color_floats;
		int static_normal_floats;
		int buffer_count;
		int buffer_index;
		int max_verts;
		int max_floats;
		int vert_count;
		Array< ::Dynamic > vertexBuffers;
		Array< ::Dynamic > tcoordBuffers;
		Array< ::Dynamic > vcolorBuffers;
		int projectionmatrix_attribute;
		int modelviewmatrix_attribute;
		int vert_attribute;
		int tcoord_attribute;
		int color_attribute;
		int tex0_attribute;
		int tex1_attribute;
		int tex2_attribute;
		int tex3_attribute;
		int tex4_attribute;
		int tex5_attribute;
		int tex6_attribute;
		int tex7_attribute;
		::phoenix::Renderer renderer;
		::phoenix::Camera view;
		int draw_calls;
		int dynamic_batched_count;
		int static_batched_count;
		int visible_count;
		bool log;
		::String name;
		int sequence;
		virtual int set_layer( int _layer);
		Dynamic set_layer_dyn();

		virtual ::String toString( );
		Dynamic toString_dyn();

		virtual int compare( ::phoenix::Batcher other);
		Dynamic compare_dyn();

		virtual Void add_group( int _group,Dynamic _pre_render,Dynamic _post_render);
		Dynamic add_group_dyn();

		virtual ::String compare_rule_to_string( int r);
		Dynamic compare_rule_to_string_dyn();

		virtual int compare_rule( ::phoenix::geometry::GeometryKey a,::phoenix::geometry::GeometryKey b);
		Dynamic compare_rule_dyn();

		virtual int geometry_compare( ::phoenix::geometry::GeometryKey a,::phoenix::geometry::GeometryKey b);
		Dynamic geometry_compare_dyn();

		virtual Void list_geometry( );
		Dynamic list_geometry_dyn();

		virtual Void add( ::phoenix::geometry::Geometry _geom,hx::Null< bool >  _force_add);
		Dynamic add_dyn();

		virtual Void empty( hx::Null< bool >  _drop);
		Dynamic empty_dyn();

		virtual Void remove( ::phoenix::geometry::Geometry _geom,Dynamic _remove_batcher_from_geometry);
		Dynamic remove_dyn();

		virtual Void shader_activate( ::phoenix::Shader _shader);
		Dynamic shader_activate_dyn();

		::phoenix::BatchState state;
		virtual Void batch( hx::Null< bool >  persist_immediate);
		Dynamic batch_dyn();

		virtual Void draw( Dynamic persist_immediate);
		Dynamic draw_dyn();

		virtual Void submit_static_geometry( ::phoenix::geometry::Geometry geom);
		Dynamic submit_static_geometry_dyn();

		virtual Void submit_current_vertex_list( int type);
		Dynamic submit_current_vertex_list_dyn();

		virtual Void geometry_batch( ::phoenix::geometry::Geometry geom);
		Dynamic geometry_batch_dyn();

		virtual Void geometry_batch_static( ::phoenix::geometry::Geometry geom);
		Dynamic geometry_batch_static_dyn();

		virtual Void _enable_attributes( );
		Dynamic _enable_attributes_dyn();

		virtual Void _disable_attributes( );
		Dynamic _disable_attributes_dyn();

		static int _sequence_key;
};

} // end namespace phoenix

#endif /* INCLUDED_phoenix_Batcher */ 
