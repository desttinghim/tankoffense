#ifndef INCLUDED_luxe_Screen
#define INCLUDED_luxe_Screen

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(luxe,Core)
HX_DECLARE_CLASS1(luxe,Cursor)
HX_DECLARE_CLASS1(luxe,Screen)
HX_DECLARE_CLASS1(phoenix,Vector)
HX_DECLARE_CLASS1(snow,App)
namespace luxe{


class HXCPP_CLASS_ATTRIBUTES  Screen_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Screen_obj OBJ_;
		Screen_obj();
		Void __construct(::luxe::Core _core,int _x,int _y,int _w,int _h);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Screen_obj > __new(::luxe::Core _core,int _x,int _y,int _w,int _h);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Screen_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Screen"); }

		Float x;
		Float y;
		Float w;
		Float h;
		::luxe::Cursor cursor;
		::luxe::Core core;
		::phoenix::Vector mid;
		::phoenix::Vector size;
		virtual ::String toString( );
		Dynamic toString_dyn();

		virtual ::phoenix::Vector get_mid( );
		Dynamic get_mid_dyn();

		virtual Void internal_resized( Float _w,Float _h);
		Dynamic internal_resized_dyn();

		virtual ::phoenix::Vector get_size( );
		Dynamic get_size_dyn();

		virtual bool point_inside( ::phoenix::Vector _p);
		Dynamic point_inside_dyn();

};

} // end namespace luxe

#endif /* INCLUDED_luxe_Screen */ 
