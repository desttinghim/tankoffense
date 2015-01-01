#ifndef INCLUDED_luxe_Scene
#define INCLUDED_luxe_Scene

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <luxe/Objects.h>
HX_DECLARE_CLASS0(IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS1(luxe,Emitter)
HX_DECLARE_CLASS1(luxe,Entity)
HX_DECLARE_CLASS1(luxe,Objects)
HX_DECLARE_CLASS1(luxe,Scene)
namespace luxe{


class HXCPP_CLASS_ATTRIBUTES  Scene_obj : public ::luxe::Objects_obj{
	public:
		typedef ::luxe::Objects_obj super;
		typedef Scene_obj OBJ_;
		Scene_obj();
		Void __construct(::String __o__name);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Scene_obj > __new(::String __o__name);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Scene_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Scene"); }

		::haxe::ds::StringMap entities;
		bool inited;
		bool started;
		Array< ::Dynamic > _delayed_init_entities;
		Array< ::Dynamic > _delayed_reset_entities;
		int length;
		virtual Void add( ::luxe::Entity entity);
		Dynamic add_dyn();

		virtual bool remove( ::luxe::Entity entity);
		Dynamic remove_dyn();

		virtual Void empty( );
		Dynamic empty_dyn();

		virtual Array< ::Dynamic > get_named_like( ::String _name,Array< ::Dynamic > into);
		Dynamic get_named_like_dyn();

		virtual Void render( Dynamic _);
		Dynamic render_dyn();

		virtual Void prerender( Dynamic _);
		Dynamic prerender_dyn();

		virtual Void postrender( Dynamic _);
		Dynamic postrender_dyn();

		virtual Void keydown( Dynamic e);
		Dynamic keydown_dyn();

		virtual Void keyup( Dynamic e);
		Dynamic keyup_dyn();

		virtual Void textinput( Dynamic e);
		Dynamic textinput_dyn();

		virtual Void mousedown( Dynamic e);
		Dynamic mousedown_dyn();

		virtual Void mousewheel( Dynamic e);
		Dynamic mousewheel_dyn();

		virtual Void mouseup( Dynamic e);
		Dynamic mouseup_dyn();

		virtual Void mousemove( Dynamic e);
		Dynamic mousemove_dyn();

		virtual Void touchdown( Dynamic event);
		Dynamic touchdown_dyn();

		virtual Void touchup( Dynamic event);
		Dynamic touchup_dyn();

		virtual Void touchmove( Dynamic event);
		Dynamic touchmove_dyn();

		virtual Void gamepadaxis( Dynamic event);
		Dynamic gamepadaxis_dyn();

		virtual Void gamepadup( Dynamic event);
		Dynamic gamepadup_dyn();

		virtual Void gamepaddown( Dynamic event);
		Dynamic gamepaddown_dyn();

		virtual Void gamepaddevice( Dynamic event);
		Dynamic gamepaddevice_dyn();

		virtual Void inputdown( Dynamic event);
		Dynamic inputdown_dyn();

		virtual Void inputup( Dynamic event);
		Dynamic inputup_dyn();

		virtual Void _destroy( Dynamic _);
		Dynamic _destroy_dyn();

		virtual Void destroy( );
		Dynamic destroy_dyn();

		virtual bool _do_init( );
		Dynamic _do_init_dyn();

		virtual Void init( Dynamic _);
		Dynamic init_dyn();

		virtual Void reset( );
		Dynamic reset_dyn();

		virtual Void update( Float dt);
		Dynamic update_dyn();

		virtual Void handle_delayed_additions( );
		Dynamic handle_delayed_additions_dyn();

		virtual int get_length( );
		Dynamic get_length_dyn();

		virtual ::String toString( );
		Dynamic toString_dyn();

};

} // end namespace luxe

#endif /* INCLUDED_luxe_Scene */ 
