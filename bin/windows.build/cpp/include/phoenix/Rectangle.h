#ifndef INCLUDED_phoenix_Rectangle
#define INCLUDED_phoenix_Rectangle

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(phoenix,Rectangle)
HX_DECLARE_CLASS1(phoenix,Vector)
namespace phoenix{


class HXCPP_CLASS_ATTRIBUTES  Rectangle_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Rectangle_obj OBJ_;
		Rectangle_obj();
		Void __construct(Dynamic __o__x,Dynamic __o__y,Dynamic __o__w,Dynamic __o__h);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Rectangle_obj > __new(Dynamic __o__x,Dynamic __o__y,Dynamic __o__w,Dynamic __o__h);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Rectangle_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Rectangle"); }

		Float x;
		Float y;
		Float w;
		Float h;
		bool ignore_listeners;
		Dynamic listen_x;
		Dynamic &listen_x_dyn() { return listen_x;}
		Dynamic listen_y;
		Dynamic &listen_y_dyn() { return listen_y;}
		Dynamic listen_w;
		Dynamic &listen_w_dyn() { return listen_w;}
		Dynamic listen_h;
		Dynamic &listen_h_dyn() { return listen_h;}
		virtual ::String toString( );
		Dynamic toString_dyn();

		virtual bool point_inside( ::phoenix::Vector _p);
		Dynamic point_inside_dyn();

		virtual bool overlaps( ::phoenix::Rectangle _other);
		Dynamic overlaps_dyn();

		virtual ::phoenix::Rectangle clone( );
		Dynamic clone_dyn();

		virtual bool equal( ::phoenix::Rectangle _other);
		Dynamic equal_dyn();

		virtual Void copy_from( ::phoenix::Rectangle _rect);
		Dynamic copy_from_dyn();

		virtual ::phoenix::Rectangle set( Dynamic _x,Dynamic _y,Dynamic _w,Dynamic _h);
		Dynamic set_dyn();

		virtual Float set_x( Float _x);
		Dynamic set_x_dyn();

		virtual Float set_y( Float _y);
		Dynamic set_y_dyn();

		virtual Float set_w( Float _w);
		Dynamic set_w_dyn();

		virtual Float set_h( Float _h);
		Dynamic set_h_dyn();

		static Void listen( ::phoenix::Rectangle _r,Dynamic listener);
		static Dynamic listen_dyn();

};

} // end namespace phoenix

#endif /* INCLUDED_phoenix_Rectangle */ 
