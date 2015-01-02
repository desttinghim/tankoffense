#ifndef INCLUDED_Hitbox
#define INCLUDED_Hitbox

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <luxe/Component.h>
HX_DECLARE_CLASS0(Hitbox)
HX_DECLARE_CLASS1(luxe,Component)
HX_DECLARE_CLASS1(luxe,Emitter)
HX_DECLARE_CLASS1(luxe,Entity)
HX_DECLARE_CLASS1(luxe,ID)
HX_DECLARE_CLASS1(luxe,Objects)
HX_DECLARE_CLASS1(luxe,Sprite)
HX_DECLARE_CLASS1(luxe,Visual)
HX_DECLARE_CLASS1(phoenix,Rectangle)


class HXCPP_CLASS_ATTRIBUTES  Hitbox_obj : public ::luxe::Component_obj{
	public:
		typedef ::luxe::Component_obj super;
		typedef Hitbox_obj OBJ_;
		Hitbox_obj();
		Void __construct(::phoenix::Rectangle rect);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Hitbox_obj > __new(::phoenix::Rectangle rect);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Hitbox_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Hitbox"); }

		::luxe::Sprite sprite;
		::phoenix::Rectangle hitbox;
		Float x;
		Float y;
		Float h;
		Float w;
		virtual Void init( );

		virtual Void update( Float dt);

		virtual Void ondestroy( );

		virtual Void onremoved( );

};


#endif /* INCLUDED_Hitbox */ 
