#ifndef INCLUDED_Main
#define INCLUDED_Main

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <luxe/Game.h>
HX_DECLARE_CLASS0(Main)
HX_DECLARE_CLASS1(luxe,Emitter)
HX_DECLARE_CLASS1(luxe,Entity)
HX_DECLARE_CLASS1(luxe,Game)
HX_DECLARE_CLASS1(luxe,Objects)
HX_DECLARE_CLASS1(luxe,Parcel)
HX_DECLARE_CLASS1(luxe,Sprite)
HX_DECLARE_CLASS1(luxe,Visual)
HX_DECLARE_CLASS2(luxe,resource,Resource)
HX_DECLARE_CLASS2(luxe,resource,ResourceManager)
HX_DECLARE_CLASS1(phoenix,Texture)


class HXCPP_CLASS_ATTRIBUTES  Main_obj : public ::luxe::Game_obj{
	public:
		typedef ::luxe::Game_obj super;
		typedef Main_obj OBJ_;
		Main_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Main_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Main_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Main"); }

		::luxe::Sprite player;
		::phoenix::Texture image;
		virtual Dynamic config( Dynamic config);

		virtual Void ready( );

		virtual Void assets_loaded( ::luxe::Parcel _);
		Dynamic assets_loaded_dyn();

		virtual Void create_player( );
		Dynamic create_player_dyn();

		virtual Void update( Float delta);

		virtual Void onkeyup( Dynamic event);

};


#endif /* INCLUDED_Main */ 
