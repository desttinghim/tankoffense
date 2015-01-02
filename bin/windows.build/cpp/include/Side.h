#ifndef INCLUDED_Side
#define INCLUDED_Side

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <luxe/Component.h>
HX_DECLARE_CLASS0(Side)
HX_DECLARE_CLASS1(luxe,Component)
HX_DECLARE_CLASS1(luxe,ID)


class HXCPP_CLASS_ATTRIBUTES  Side_obj : public ::luxe::Component_obj{
	public:
		typedef ::luxe::Component_obj super;
		typedef Side_obj OBJ_;
		Side_obj();
		Void __construct(int whichSide);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Side_obj > __new(int whichSide);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Side_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("Side"); }

		int side;
		virtual Void init( );

		virtual Void ondestroy( );

		virtual Void onremoved( );

};


#endif /* INCLUDED_Side */ 
