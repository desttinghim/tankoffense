#ifndef INCLUDED_phoenix_Color
#define INCLUDED_phoenix_Color

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(luxe,tween,actuators,IGenericActuator)
HX_DECLARE_CLASS1(phoenix,Color)
HX_DECLARE_CLASS1(phoenix,ColorHSL)
HX_DECLARE_CLASS1(phoenix,ColorHSV)
namespace phoenix{


class HXCPP_CLASS_ATTRIBUTES  Color_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Color_obj OBJ_;
		Color_obj();
		Void __construct(hx::Null< Float >  __o__r,hx::Null< Float >  __o__g,hx::Null< Float >  __o__b,hx::Null< Float >  __o__a);

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Color_obj > __new(hx::Null< Float >  __o__r,hx::Null< Float >  __o__g,hx::Null< Float >  __o__b,hx::Null< Float >  __o__a);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Color_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("Color"); }

		Float r;
		Float g;
		Float b;
		Float a;
		bool is_hsl;
		bool is_hsv;
		bool refreshing;
		virtual Float set_r( Float _r);
		Dynamic set_r_dyn();

		virtual Float set_g( Float _g);
		Dynamic set_g_dyn();

		virtual Float set_b( Float _b);
		Dynamic set_b_dyn();

		virtual ::phoenix::Color set( Dynamic _r,Dynamic _g,Dynamic _b,Dynamic _a);
		Dynamic set_dyn();

		virtual Float maxRGB( );
		Dynamic maxRGB_dyn();

		virtual Float minRGB( );
		Dynamic minRGB_dyn();

		virtual ::luxe::tween::actuators::IGenericActuator tween( Dynamic _time_in_seconds,Dynamic _properties_to_tween,hx::Null< bool >  _override);
		Dynamic tween_dyn();

		virtual ::phoenix::Color clone( );
		Dynamic clone_dyn();

		virtual ::phoenix::Color rgb( hx::Null< int >  _rgb);
		Dynamic rgb_dyn();

		virtual ::phoenix::ColorHSL toColorHSL( );
		Dynamic toColorHSL_dyn();

		virtual ::phoenix::ColorHSV toColorHSV( );
		Dynamic toColorHSV_dyn();

		virtual Void fromColorHSV( ::phoenix::ColorHSV _color_hsv);
		Dynamic fromColorHSV_dyn();

		virtual ::phoenix::Color fromColorHSL( ::phoenix::ColorHSL _color_hsl);
		Dynamic fromColorHSL_dyn();

		virtual ::String toString( );
		Dynamic toString_dyn();

		virtual Void from_int( int _i);
		Dynamic from_int_dyn();

		static ::phoenix::Color random( Dynamic _include_alpha);
		static Dynamic random_dyn();

};

} // end namespace phoenix

#endif /* INCLUDED_phoenix_Color */ 
