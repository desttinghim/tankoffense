#ifndef INCLUDED_phoenix_geometry_GeometryState
#define INCLUDED_phoenix_geometry_GeometryState

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(luxe,resource,Resource)
HX_DECLARE_CLASS1(phoenix,Rectangle)
HX_DECLARE_CLASS1(phoenix,Shader)
HX_DECLARE_CLASS1(phoenix,Texture)
HX_DECLARE_CLASS2(phoenix,geometry,GeometryState)
namespace phoenix{
namespace geometry{


class HXCPP_CLASS_ATTRIBUTES  GeometryState_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef GeometryState_obj OBJ_;
		GeometryState_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< GeometryState_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~GeometryState_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("GeometryState"); }

		bool dirty;
		int primitive_type;
		::phoenix::Shader shader;
		::phoenix::Texture texture;
		Float depth;
		int group;
		bool clip;
		::phoenix::Rectangle clip_rect;
		bool log;
		virtual Void clone_onto( ::phoenix::geometry::GeometryState _other);
		Dynamic clone_onto_dyn();

		virtual Void str( );
		Dynamic str_dyn();

		virtual Void clean( );
		Dynamic clean_dyn();

		virtual Void update( ::phoenix::geometry::GeometryState other);
		Dynamic update_dyn();

		virtual int set_primitive_type( int val);
		Dynamic set_primitive_type_dyn();

		virtual ::phoenix::Texture set_texture( ::phoenix::Texture val);
		Dynamic set_texture_dyn();

		virtual ::phoenix::Shader set_shader( ::phoenix::Shader val);
		Dynamic set_shader_dyn();

		virtual Float set_depth( Float val);
		Dynamic set_depth_dyn();

		virtual int set_group( int val);
		Dynamic set_group_dyn();

		virtual bool set_clip( bool val);
		Dynamic set_clip_dyn();

		virtual ::phoenix::Rectangle set_clip_rect( ::phoenix::Rectangle val);
		Dynamic set_clip_rect_dyn();

};

} // end namespace phoenix
} // end namespace geometry

#endif /* INCLUDED_phoenix_geometry_GeometryState */ 
