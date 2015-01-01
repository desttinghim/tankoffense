#ifndef INCLUDED_luxe_Camera
#define INCLUDED_luxe_Camera

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <luxe/Entity.h>
HX_DECLARE_CLASS1(luxe,Camera)
HX_DECLARE_CLASS1(luxe,Emitter)
HX_DECLARE_CLASS1(luxe,Entity)
HX_DECLARE_CLASS1(luxe,Objects)
HX_DECLARE_CLASS1(luxe,SizeMode)
HX_DECLARE_CLASS1(phoenix,Camera)
HX_DECLARE_CLASS1(phoenix,Quaternion)
HX_DECLARE_CLASS1(phoenix,Rectangle)
HX_DECLARE_CLASS1(phoenix,Vector)
namespace luxe{


class HXCPP_CLASS_ATTRIBUTES  Camera_obj : public ::luxe::Entity_obj{
	public:
		typedef ::luxe::Entity_obj super;
		typedef Camera_obj OBJ_;
		Camera_obj();
		Void __construct(Dynamic options);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Camera_obj > __new(Dynamic options);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Camera_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Camera"); }

		::phoenix::Vector size;
		::luxe::SizeMode size_mode;
		::phoenix::Camera view;
		::phoenix::Rectangle bounds;
		::phoenix::Vector shake_vector;
		Float shake_amount;
		bool shaking;
		Float minimum_shake;
		::phoenix::Vector update_view_pos;
		::phoenix::Vector _size_factor;
		::phoenix::Vector _final_pos;
		::phoenix::Vector _rotation_radian;
		::phoenix::Quaternion _rotation_cache;
		virtual ::phoenix::Rectangle get_viewport( );
		Dynamic get_viewport_dyn();

		virtual ::phoenix::Rectangle set_viewport( ::phoenix::Rectangle _v);
		Dynamic set_viewport_dyn();

		virtual ::phoenix::Vector get_center( );
		Dynamic get_center_dyn();

		virtual ::phoenix::Vector set_center( ::phoenix::Vector _c);
		Dynamic set_center_dyn();

		virtual Float get_minimum_zoom( );
		Dynamic get_minimum_zoom_dyn();

		virtual Float set_minimum_zoom( Float _m);
		Dynamic set_minimum_zoom_dyn();

		virtual Float get_zoom( );
		Dynamic get_zoom_dyn();

		virtual Float set_zoom( Float _z);
		Dynamic set_zoom_dyn();

		virtual ::phoenix::Vector get_size( );
		Dynamic get_size_dyn();

		virtual ::luxe::SizeMode get_size_mode( );
		Dynamic get_size_mode_dyn();

		virtual ::luxe::SizeMode set_size_mode( ::luxe::SizeMode _m);
		Dynamic set_size_mode_dyn();

		virtual ::phoenix::Vector set_size( ::phoenix::Vector _size);
		Dynamic set_size_dyn();

		virtual Void focus( ::phoenix::Vector _p,hx::Null< Float >  _t,Dynamic oncomplete);
		Dynamic focus_dyn();

		virtual ::phoenix::Vector screen_point_to_world( ::phoenix::Vector _vector);
		Dynamic screen_point_to_world_dyn();

		virtual ::phoenix::Vector world_point_to_screen( ::phoenix::Vector _vector,::phoenix::Rectangle _viewport);
		Dynamic world_point_to_screen_dyn();

		virtual Void set_pos_from_transform( ::phoenix::Vector _pos);

		virtual Void set_rotation_from_transform( ::phoenix::Quaternion _rotation);

		virtual Void set_scale_from_transform( ::phoenix::Vector _scale);

		virtual Void shake( Float amount);
		Dynamic shake_dyn();

		virtual Void update( Float dt);

		virtual Void init( );

		virtual Void ondestroy( );

};

} // end namespace luxe

#endif /* INCLUDED_luxe_Camera */ 
