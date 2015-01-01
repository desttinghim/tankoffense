#ifndef INCLUDED_luxe_Entity
#define INCLUDED_luxe_Entity

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <luxe/Objects.h>
HX_DECLARE_CLASS0(IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS1(luxe,Emitter)
HX_DECLARE_CLASS1(luxe,Entity)
HX_DECLARE_CLASS1(luxe,Events)
HX_DECLARE_CLASS1(luxe,ID)
HX_DECLARE_CLASS1(luxe,Objects)
HX_DECLARE_CLASS1(luxe,Scene)
HX_DECLARE_CLASS2(luxe,components,Components)
HX_DECLARE_CLASS1(phoenix,Quaternion)
HX_DECLARE_CLASS1(phoenix,Transform)
HX_DECLARE_CLASS1(phoenix,Vector)
HX_DECLARE_CLASS2(snow,utils,Timer)
namespace luxe{


class HXCPP_CLASS_ATTRIBUTES  Entity_obj : public ::luxe::Objects_obj{
	public:
		typedef ::luxe::Objects_obj super;
		typedef Entity_obj OBJ_;
		Entity_obj();
		Void __construct(Dynamic _options);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Entity_obj > __new(Dynamic _options);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Entity_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Entity"); }

		::luxe::Events events;
		Array< ::Dynamic > children;
		bool destroyed;
		bool inited;
		bool started;
		Float fixed_rate;
		::luxe::Entity parent;
		::luxe::Scene scene;
		bool active;
		::phoenix::Transform transform;
		::luxe::components::Components _components;
		::snow::utils::Timer fixed_rate_timer;
		Dynamic options;
		virtual Void init( );
		Dynamic init_dyn();

		virtual Void update( Float dt);
		Dynamic update_dyn();

		virtual Void onfixedupdate( Float rate);
		Dynamic onfixedupdate_dyn();

		virtual Void onreset( );
		Dynamic onreset_dyn();

		virtual Void ondestroy( );
		Dynamic ondestroy_dyn();

		virtual Void onkeyup( Dynamic event);
		Dynamic onkeyup_dyn();

		virtual Void onkeydown( Dynamic event);
		Dynamic onkeydown_dyn();

		virtual Void ontextinput( Dynamic event);
		Dynamic ontextinput_dyn();

		virtual Void oninputdown( ::String name,Dynamic event);
		Dynamic oninputdown_dyn();

		virtual Void oninputup( ::String name,Dynamic event);
		Dynamic oninputup_dyn();

		virtual Void onmousedown( Dynamic event);
		Dynamic onmousedown_dyn();

		virtual Void onmouseup( Dynamic event);
		Dynamic onmouseup_dyn();

		virtual Void onmousemove( Dynamic event);
		Dynamic onmousemove_dyn();

		virtual Void onmousewheel( Dynamic event);
		Dynamic onmousewheel_dyn();

		virtual Void ontouchdown( Dynamic event);
		Dynamic ontouchdown_dyn();

		virtual Void ontouchup( Dynamic event);
		Dynamic ontouchup_dyn();

		virtual Void ontouchmove( Dynamic event);
		Dynamic ontouchmove_dyn();

		virtual Void ongamepadup( Dynamic event);
		Dynamic ongamepadup_dyn();

		virtual Void ongamepaddown( Dynamic event);
		Dynamic ongamepaddown_dyn();

		virtual Void ongamepadaxis( Dynamic event);
		Dynamic ongamepadaxis_dyn();

		virtual Void ongamepaddevice( Dynamic event);
		Dynamic ongamepaddevice_dyn();

		virtual Dynamic add( Dynamic _component);
		Dynamic add_dyn();

		virtual bool remove( ::String _name);
		Dynamic remove_dyn();

		virtual Dynamic get( ::String _name,Dynamic _in_children);
		Dynamic get_dyn();

		virtual Dynamic get_any( ::String _name,Dynamic _in_children,Dynamic _first_only);
		Dynamic get_any_dyn();

		virtual bool has( ::String _name);
		Dynamic has_dyn();

		virtual Void _init( );
		Dynamic _init_dyn();

		virtual Void _reset( Dynamic _);
		Dynamic _reset_dyn();

		virtual Void destroy( Dynamic _from_parent);
		Dynamic destroy_dyn();

		virtual Void _update( Float dt);
		Dynamic _update_dyn();

		virtual Void _fixed_update( );
		Dynamic _fixed_update_dyn();

		virtual Void _listen( ::String _event,Dynamic _handler,Dynamic _self);
		Dynamic _listen_dyn();

		virtual Void _unlisten( ::String _event,Dynamic _handler,Dynamic _self);
		Dynamic _unlisten_dyn();

		virtual Void _detach_scene( );
		Dynamic _detach_scene_dyn();

		virtual Void _attach_scene( );
		Dynamic _attach_scene_dyn();

		virtual Void _keyup( Dynamic _event);
		Dynamic _keyup_dyn();

		virtual Void _keydown( Dynamic _event);
		Dynamic _keydown_dyn();

		virtual Void _textinput( Dynamic _event);
		Dynamic _textinput_dyn();

		virtual Void _mousedown( Dynamic _event);
		Dynamic _mousedown_dyn();

		virtual Void _mouseup( Dynamic _event);
		Dynamic _mouseup_dyn();

		virtual Void _mousewheel( Dynamic _event);
		Dynamic _mousewheel_dyn();

		virtual Void _mousemove( Dynamic _event);
		Dynamic _mousemove_dyn();

		virtual Void _touchdown( Dynamic _event);
		Dynamic _touchdown_dyn();

		virtual Void _touchup( Dynamic _event);
		Dynamic _touchup_dyn();

		virtual Void _touchmove( Dynamic _event);
		Dynamic _touchmove_dyn();

		virtual Void _gamepadaxis( Dynamic _event);
		Dynamic _gamepadaxis_dyn();

		virtual Void _gamepaddown( Dynamic _event);
		Dynamic _gamepaddown_dyn();

		virtual Void _gamepadup( Dynamic _event);
		Dynamic _gamepadup_dyn();

		virtual Void _gamepaddevice( Dynamic _event);
		Dynamic _gamepaddevice_dyn();

		virtual Void _inputdown( Dynamic _event);
		Dynamic _inputdown_dyn();

		virtual Void _inputup( Dynamic _event);
		Dynamic _inputup_dyn();

		virtual Float get_fixed_rate( );
		Dynamic get_fixed_rate_dyn();

		virtual Float set_fixed_rate( Float _rate);
		Dynamic set_fixed_rate_dyn();

		virtual Void _stop_fixed_rate_timer( );
		Dynamic _stop_fixed_rate_timer_dyn();

		virtual Void _set_fixed_rate_timer( Float _rate,Dynamic _pos);
		Dynamic _set_fixed_rate_timer_dyn();

		virtual ::haxe::ds::StringMap get_components( );
		Dynamic get_components_dyn();

		virtual Void _add_child( ::luxe::Entity child);
		Dynamic _add_child_dyn();

		virtual Void _remove_child( ::luxe::Entity child);
		Dynamic _remove_child_dyn();

		virtual Void set_pos_from_transform( ::phoenix::Vector _pos);
		Dynamic set_pos_from_transform_dyn();

		virtual Void set_rotation_from_transform( ::phoenix::Quaternion _rotation);
		Dynamic set_rotation_from_transform_dyn();

		virtual Void set_scale_from_transform( ::phoenix::Vector _scale);
		Dynamic set_scale_from_transform_dyn();

		virtual Void set_origin_from_transform( ::phoenix::Vector _origin);
		Dynamic set_origin_from_transform_dyn();

		virtual Void set_parent_from_transform( ::phoenix::Transform _parent);
		Dynamic set_parent_from_transform_dyn();

		virtual ::phoenix::Vector set_pos( ::phoenix::Vector _p);
		Dynamic set_pos_dyn();

		virtual ::phoenix::Vector get_pos( );
		Dynamic get_pos_dyn();

		virtual ::phoenix::Quaternion set_rotation( ::phoenix::Quaternion _r);
		Dynamic set_rotation_dyn();

		virtual ::phoenix::Quaternion get_rotation( );
		Dynamic get_rotation_dyn();

		virtual ::phoenix::Vector set_scale( ::phoenix::Vector _s);
		Dynamic set_scale_dyn();

		virtual ::phoenix::Vector get_scale( );
		Dynamic get_scale_dyn();

		virtual ::phoenix::Vector set_origin( ::phoenix::Vector _origin);
		Dynamic set_origin_dyn();

		virtual ::phoenix::Vector get_origin( );
		Dynamic get_origin_dyn();

		virtual ::luxe::Entity set_parent( ::luxe::Entity other);
		Dynamic set_parent_dyn();

		virtual ::luxe::Entity get_parent( );
		Dynamic get_parent_dyn();

		virtual ::luxe::Scene set_scene( ::luxe::Scene _scene);
		Dynamic set_scene_dyn();

		virtual ::luxe::Scene get_scene( );
		Dynamic get_scene_dyn();

		virtual bool set_active( bool _active);
		Dynamic set_active_dyn();

		virtual bool get_active( );
		Dynamic get_active_dyn();

};

} // end namespace luxe

#endif /* INCLUDED_luxe_Entity */ 
