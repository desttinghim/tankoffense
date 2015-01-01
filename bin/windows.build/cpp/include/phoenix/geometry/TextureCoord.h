#ifndef INCLUDED_phoenix_geometry_TextureCoord
#define INCLUDED_phoenix_geometry_TextureCoord

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(phoenix,geometry,TextureCoord)
namespace phoenix{
namespace geometry{


class HXCPP_CLASS_ATTRIBUTES  TextureCoord_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef TextureCoord_obj OBJ_;
		TextureCoord_obj();
		Void __construct(hx::Null< Float >  __o__u,hx::Null< Float >  __o__v,hx::Null< Float >  __o__w,hx::Null< Float >  __o__t);

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< TextureCoord_obj > __new(hx::Null< Float >  __o__u,hx::Null< Float >  __o__v,hx::Null< Float >  __o__w,hx::Null< Float >  __o__t);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~TextureCoord_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("TextureCoord"); }

		Float u;
		Float v;
		Float w;
		Float t;
		virtual ::phoenix::geometry::TextureCoord clone( );
		Dynamic clone_dyn();

		virtual ::phoenix::geometry::TextureCoord set( Float _u,Float _v,Float _w,Float _t);
		Dynamic set_dyn();

		virtual ::phoenix::geometry::TextureCoord set_uv( Float _u,Float _v);
		Dynamic set_uv_dyn();

		virtual ::String toString( );
		Dynamic toString_dyn();

};

} // end namespace phoenix
} // end namespace geometry

#endif /* INCLUDED_phoenix_geometry_TextureCoord */ 
