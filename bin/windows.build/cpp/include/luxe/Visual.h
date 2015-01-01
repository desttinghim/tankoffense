#ifndef INCLUDED_luxe_Visual
#define INCLUDED_luxe_Visual

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <luxe/Entity.h>
HX_DECLARE_CLASS1(luxe,Emitter)
HX_DECLARE_CLASS1(luxe,Entity)
HX_DECLARE_CLASS1(luxe,ID)
HX_DECLARE_CLASS1(luxe,Objects)
HX_DECLARE_CLASS1(luxe,Visual)
HX_DECLARE_CLASS2(luxe,resource,Resource)
HX_DECLARE_CLASS1(phoenix,Color)
HX_DECLARE_CLASS1(phoenix,Quaternion)
HX_DECLARE_CLASS1(phoenix,Rectangle)
HX_DECLARE_CLASS1(phoenix,Shader)
HX_DECLARE_CLASS1(phoenix,Texture)
HX_DECLARE_CLASS1(phoenix,Transform)
HX_DECLARE_CLASS1(phoenix,Vector)
HX_DECLARE_CLASS2(phoenix,geometry,Geometry)
namespace luxe{


class HXCPP_CLASS_ATTRIBUTES  Visual_obj : public ::luxe::Entity_obj{
	public:
		typedef ::luxe::Entity_obj super;
		typedef Visual_obj OBJ_;
		Visual_obj();
		Void __construct(Dynamic _options);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Visual_obj > __new(Dynamic _options);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Visual_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Visual"); }

		::phoenix::Vector size;
		::phoenix::geometry::Geometry geometry;
		bool locked;
		::phoenix::Texture texture;
		::phoenix::Shader shader;
		::phoenix::Color color;
		bool visible;
		Float depth;
		int group;
		::phoenix::Rectangle clip_rect;
		Float radians;
		::phoenix::Vector _rotation_euler;
		::phoenix::Quaternion _rotation_quat;
		bool _has_custom_origin;
		bool _creating_geometry;
		virtual Void _create_geometry( );
		Dynamic _create_geometry_dyn();

		virtual Void ondestroy( );

		virtual Void on_geometry_created( );
		Dynamic on_geometry_created_dyn();

		virtual bool set_visible( bool _v);
		Dynamic set_visible_dyn();

		virtual Float set_depth( Float _v);
		Dynamic set_depth_dyn();

		virtual int set_group( int _v);
		Dynamic set_group_dyn();

		virtual ::phoenix::Color set_color( ::phoenix::Color _c);
		Dynamic set_color_dyn();

		virtual ::phoenix::Texture set_texture( ::phoenix::Texture _t);
		Dynamic set_texture_dyn();

		virtual ::phoenix::Shader set_shader( ::phoenix::Shader _s);
		Dynamic set_shader_dyn();

		bool ignore_texture_on_geometry_change;
		virtual ::phoenix::geometry::Geometry set_geometry( ::phoenix::geometry::Geometry _g);
		Dynamic set_geometry_dyn();

		virtual Void set_parent_from_transform( ::phoenix::Transform _parent);

		virtual Void set_rotation_from_transform( ::phoenix::Quaternion _rotation);

		virtual ::phoenix::Vector set_size( ::phoenix::Vector _v);
		Dynamic set_size_dyn();

		virtual Float get_rotation_z( );
		Dynamic get_rotation_z_dyn();

		virtual Float set_rotation_z( Float _degrees);
		Dynamic set_rotation_z_dyn();

		virtual Float set_radians( Float _r);
		Dynamic set_radians_dyn();

		virtual Float get_radians( );
		Dynamic get_radians_dyn();

		virtual bool set_locked( bool _l);
		Dynamic set_locked_dyn();

		virtual ::phoenix::Rectangle set_clip_rect( ::phoenix::Rectangle _val);
		Dynamic set_clip_rect_dyn();

		virtual Void _size_change( Float _v);
		Dynamic _size_change_dyn();

		virtual Void init( );

};

} // end namespace luxe

#endif /* INCLUDED_luxe_Visual */ 
