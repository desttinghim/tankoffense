#ifndef INCLUDED_phoenix_ColorHSV
#define INCLUDED_phoenix_ColorHSV

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <phoenix/Color.h>
HX_DECLARE_CLASS3(luxe,tween,actuators,IGenericActuator)
HX_DECLARE_CLASS1(phoenix,Color)
HX_DECLARE_CLASS1(phoenix,ColorHSL)
HX_DECLARE_CLASS1(phoenix,ColorHSV)
namespace phoenix{


class HXCPP_CLASS_ATTRIBUTES  ColorHSV_obj : public ::phoenix::Color_obj{
	public:
		typedef ::phoenix::Color_obj super;
		typedef ColorHSV_obj OBJ_;
		ColorHSV_obj();
		Void __construct(hx::Null< Float >  __o__h,hx::Null< Float >  __o__s,hx::Null< Float >  __o__v,hx::Null< Float >  __o__a);

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< ColorHSV_obj > __new(hx::Null< Float >  __o__h,hx::Null< Float >  __o__s,hx::Null< Float >  __o__v,hx::Null< Float >  __o__a);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ColorHSV_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("ColorHSV"); }

		Float h;
		Float s;
		Float v;
		virtual Float set_h( Float _h);
		Dynamic set_h_dyn();

		virtual Float set_s( Float _s);
		Dynamic set_s_dyn();

		virtual Float set_v( Float _v);
		Dynamic set_v_dyn();

		virtual ::phoenix::Color set( Dynamic _h,Dynamic _s,Dynamic _v,Dynamic _a);

		virtual ::luxe::tween::actuators::IGenericActuator tween( Dynamic _time_in_seconds,Dynamic _dest,hx::Null< bool >  _override);

		virtual ::phoenix::ColorHSV _refresh( );
		Dynamic _refresh_dyn();

		virtual ::phoenix::Color clone( );

		virtual ::phoenix::Color toColor( );
		Dynamic toColor_dyn();

		virtual ::phoenix::ColorHSL toColorHSL( );

		virtual ::phoenix::Color fromColorHSL( ::phoenix::ColorHSL _color_hsl);

		virtual ::phoenix::ColorHSV fromColor( ::phoenix::Color _color);
		Dynamic fromColor_dyn();

		virtual ::String toString( );

};

} // end namespace phoenix

#endif /* INCLUDED_phoenix_ColorHSV */ 
