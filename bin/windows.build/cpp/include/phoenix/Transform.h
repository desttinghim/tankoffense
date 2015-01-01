#ifndef INCLUDED_phoenix_Transform
#define INCLUDED_phoenix_Transform

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <luxe/ID.h>
HX_DECLARE_CLASS1(luxe,ID)
HX_DECLARE_CLASS1(phoenix,Matrix)
HX_DECLARE_CLASS1(phoenix,Quaternion)
HX_DECLARE_CLASS1(phoenix,Spatial)
HX_DECLARE_CLASS1(phoenix,Transform)
HX_DECLARE_CLASS1(phoenix,Vector)
namespace phoenix{


class HXCPP_CLASS_ATTRIBUTES  Transform_obj : public ::luxe::ID_obj{
	public:
		typedef ::luxe::ID_obj super;
		typedef Transform_obj OBJ_;
		Transform_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Transform_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Transform_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Transform"); }

		::phoenix::Transform parent;
		::phoenix::Spatial local;
		::phoenix::Spatial world;
		::phoenix::Vector origin;
		bool dirty;
		::phoenix::Matrix _origin_undo_matrix;
		::phoenix::Matrix _pos_matrix;
		::phoenix::Matrix _rotation_matrix;
		bool _setup;
		bool _cleaning;
		Dynamic _clean_handlers;
		Dynamic _dirty_handlers;
		Dynamic _pos_handlers;
		Dynamic _rotation_handlers;
		Dynamic _scale_handlers;
		Dynamic _origin_handlers;
		Dynamic _parent_handlers;
		bool _destroying;
		virtual Void destroy( );
		Dynamic destroy_dyn();

		virtual bool set_dirty( bool _dirty);
		Dynamic set_dirty_dyn();

		virtual Void on_local_pos_change( ::phoenix::Vector v);
		Dynamic on_local_pos_change_dyn();

		virtual Void on_local_rotation_change( ::phoenix::Quaternion r);
		Dynamic on_local_rotation_change_dyn();

		virtual Void on_local_scale_change( ::phoenix::Vector s);
		Dynamic on_local_scale_change_dyn();

		virtual Void on_parent_cleaned( ::phoenix::Transform p);
		Dynamic on_parent_cleaned_dyn();

		virtual ::phoenix::Spatial get_local( );
		Dynamic get_local_dyn();

		virtual ::phoenix::Spatial set_local( ::phoenix::Spatial l);
		Dynamic set_local_dyn();

		virtual ::phoenix::Spatial get_world( );
		Dynamic get_world_dyn();

		virtual Void clean_check( );
		Dynamic clean_check_dyn();

		virtual Void clean( );
		Dynamic clean_dyn();

		virtual ::String toString( );
		Dynamic toString_dyn();

		virtual ::phoenix::Vector get_origin( );
		Dynamic get_origin_dyn();

		virtual ::phoenix::Vector set_origin( ::phoenix::Vector o);
		Dynamic set_origin_dyn();

		virtual ::phoenix::Spatial set_world( ::phoenix::Spatial w);
		Dynamic set_world_dyn();

		virtual ::phoenix::Transform get_parent( );
		Dynamic get_parent_dyn();

		virtual ::phoenix::Transform set_parent( ::phoenix::Transform _p);
		Dynamic set_parent_dyn();

		virtual ::phoenix::Vector get_pos( );
		Dynamic get_pos_dyn();

		virtual ::phoenix::Quaternion get_rotation( );
		Dynamic get_rotation_dyn();

		virtual ::phoenix::Vector get_scale( );
		Dynamic get_scale_dyn();

		virtual ::phoenix::Vector set_pos( ::phoenix::Vector value);
		Dynamic set_pos_dyn();

		virtual ::phoenix::Quaternion set_rotation( ::phoenix::Quaternion value);
		Dynamic set_rotation_dyn();

		virtual ::phoenix::Vector set_scale( ::phoenix::Vector value);
		Dynamic set_scale_dyn();

		virtual Void propagate_clean( );
		Dynamic propagate_clean_dyn();

		virtual Void propagate_dirty( );
		Dynamic propagate_dirty_dyn();

		virtual Void propagate_pos( ::phoenix::Vector _pos);
		Dynamic propagate_pos_dyn();

		virtual Void propagate_rotation( ::phoenix::Quaternion _rotation);
		Dynamic propagate_rotation_dyn();

		virtual Void propagate_scale( ::phoenix::Vector _scale);
		Dynamic propagate_scale_dyn();

		virtual Void propagate_origin( ::phoenix::Vector _origin);
		Dynamic propagate_origin_dyn();

		virtual Void propagate_parent( ::phoenix::Transform _parent);
		Dynamic propagate_parent_dyn();

		virtual Void listen( Dynamic _handler);
		Dynamic listen_dyn();

		virtual bool unlisten( Dynamic _handler);
		Dynamic unlisten_dyn();

		virtual Void listen_dirty( Dynamic _handler);
		Dynamic listen_dirty_dyn();

		virtual bool unlisten_dirty( Dynamic _handler);
		Dynamic unlisten_dirty_dyn();

		virtual Void listen_pos( Dynamic _handler);
		Dynamic listen_pos_dyn();

		virtual bool unlisten_pos( Dynamic _handler);
		Dynamic unlisten_pos_dyn();

		virtual Void listen_scale( Dynamic _handler);
		Dynamic listen_scale_dyn();

		virtual bool unlisten_scale( Dynamic _handler);
		Dynamic unlisten_scale_dyn();

		virtual Void listen_rotation( Dynamic _handler);
		Dynamic listen_rotation_dyn();

		virtual bool unlisten_rotation( Dynamic _handler);
		Dynamic unlisten_rotation_dyn();

		virtual Void listen_origin( Dynamic _handler);
		Dynamic listen_origin_dyn();

		virtual bool unlisten_origin( Dynamic _handler);
		Dynamic unlisten_origin_dyn();

		virtual Void listen_parent( Dynamic _handler);
		Dynamic listen_parent_dyn();

		virtual bool unlisten_parent( Dynamic _handler);
		Dynamic unlisten_parent_dyn();

};

} // end namespace phoenix

#endif /* INCLUDED_phoenix_Transform */ 
