#ifndef INCLUDED_Object
#define INCLUDED_Object

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <luxe/Sprite.h>
HX_DECLARE_CLASS0(Hitbox)
HX_DECLARE_CLASS0(Movement)
HX_DECLARE_CLASS0(Object)
HX_DECLARE_CLASS0(Side)
HX_DECLARE_CLASS1(luxe,Component)
HX_DECLARE_CLASS1(luxe,Emitter)
HX_DECLARE_CLASS1(luxe,Entity)
HX_DECLARE_CLASS1(luxe,ID)
HX_DECLARE_CLASS1(luxe,Objects)
HX_DECLARE_CLASS1(luxe,Sprite)
HX_DECLARE_CLASS1(luxe,Visual)


class HXCPP_CLASS_ATTRIBUTES  Object_obj : public ::luxe::Sprite_obj{
	public:
		typedef ::luxe::Sprite_obj super;
		typedef Object_obj OBJ_;
		Object_obj();
		Void __construct(Dynamic options);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Object_obj > __new(Dynamic options);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Object_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Object"); }

		::Hitbox hitbox;
		::Movement movement;
		::Side side;
		virtual Void init( );

		virtual Void ondestroy( );

};


#endif /* INCLUDED_Object */ 
