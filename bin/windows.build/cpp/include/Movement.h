#ifndef INCLUDED_Movement
#define INCLUDED_Movement

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <luxe/Component.h>
HX_DECLARE_CLASS0(Movement)
HX_DECLARE_CLASS1(luxe,Component)
HX_DECLARE_CLASS1(luxe,Emitter)
HX_DECLARE_CLASS1(luxe,Entity)
HX_DECLARE_CLASS1(luxe,ID)
HX_DECLARE_CLASS1(luxe,Objects)
HX_DECLARE_CLASS1(luxe,Sprite)
HX_DECLARE_CLASS1(luxe,Visual)
HX_DECLARE_CLASS1(phoenix,Vector)


class HXCPP_CLASS_ATTRIBUTES  Movement_obj : public ::luxe::Component_obj{
	public:
		typedef ::luxe::Component_obj super;
		typedef Movement_obj OBJ_;
		Movement_obj();
		Void __construct(::phoenix::Vector speed);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Movement_obj > __new(::phoenix::Vector speed);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Movement_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Movement"); }

		::phoenix::Vector velocity;
		::luxe::Sprite sprite;
		virtual Void init( );

		virtual Void update( Float dt);

		virtual Void onreset( );

		virtual Void ondestroy( );

		virtual Void onremoved( );

};


#endif /* INCLUDED_Movement */ 
