#ifndef INCLUDED_phoenix_ColorHSL
#define INCLUDED_phoenix_ColorHSL

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <phoenix/Color.h>
HX_DECLARE_CLASS3(luxe,tween,actuators,IGenericActuator)
HX_DECLARE_CLASS1(phoenix,Color)
HX_DECLARE_CLASS1(phoenix,ColorHSL)
namespace phoenix{


class HXCPP_CLASS_ATTRIBUTES  ColorHSL_obj : public ::phoenix::Color_obj{
	public:
		typedef ::phoenix::Color_obj super;
		typedef ColorHSL_obj OBJ_;
		ColorHSL_obj();
		Void __construct(hx::Null< Float >  __o__h,hx::Null< Float >  __o__s,hx::Null< Float >  __o__l,hx::Null< Float >  __o__a);

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< ColorHSL_obj > __new(hx::Null< Float >  __o__h,hx::Null< Float >  __o__s,hx::Null< Float >  __o__l,hx::Null< Float >  __o__a);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ColorHSL_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("ColorHSL"); }

		Float h;
		Float s;
		Float l;
		virtual Float set_h( Float _h);
		Dynamic set_h_dyn();

		virtual Float set_s( Float _s);
		Dynamic set_s_dyn();

		virtual Float set_l( Float _l);
		Dynamic set_l_dyn();

		virtual ::phoenix::Color set( Dynamic _h,Dynamic _s,Dynamic _l,Dynamic _a);

		virtual ::luxe::tween::actuators::IGenericActuator tween( Dynamic _time_in_seconds,Dynamic _dest,hx::Null< bool >  _override);

		virtual ::phoenix::ColorHSL _refresh( );
		Dynamic _refresh_dyn();

		virtual ::phoenix::Color clone( );

		virtual ::phoenix::Color toColor( );
		Dynamic toColor_dyn();

		virtual ::phoenix::ColorHSL fromColor( ::phoenix::Color _color);
		Dynamic fromColor_dyn();

		virtual ::String toString( );

};

} // end namespace phoenix

#endif /* INCLUDED_phoenix_ColorHSL */ 
