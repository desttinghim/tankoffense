#ifndef INCLUDED_phoenix_geometry_Vertex
#define INCLUDED_phoenix_geometry_Vertex

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(phoenix,Color)
HX_DECLARE_CLASS1(phoenix,Vector)
HX_DECLARE_CLASS2(phoenix,geometry,TextureCoordSet)
HX_DECLARE_CLASS2(phoenix,geometry,Vertex)
namespace phoenix{
namespace geometry{


class HXCPP_CLASS_ATTRIBUTES  Vertex_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Vertex_obj OBJ_;
		Vertex_obj();
		Void __construct(::phoenix::Vector _pos,::phoenix::Color _color,::phoenix::Vector _normal);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Vertex_obj > __new(::phoenix::Vector _pos,::phoenix::Color _color,::phoenix::Vector _normal);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Vertex_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Vertex"); }

		::phoenix::Vector pos;
		::phoenix::Color color;
		::phoenix::geometry::TextureCoordSet uv;
		::phoenix::Vector normal;
		virtual ::phoenix::geometry::Vertex clone( );
		Dynamic clone_dyn();

};

} // end namespace phoenix
} // end namespace geometry

#endif /* INCLUDED_phoenix_geometry_Vertex */ 
