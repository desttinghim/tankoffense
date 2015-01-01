#ifndef INCLUDED_phoenix_geometry_GeometryKey
#define INCLUDED_phoenix_geometry_GeometryKey

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(luxe,resource,Resource)
HX_DECLARE_CLASS1(phoenix,Shader)
HX_DECLARE_CLASS1(phoenix,Texture)
HX_DECLARE_CLASS2(phoenix,geometry,GeometryKey)
namespace phoenix{
namespace geometry{


class HXCPP_CLASS_ATTRIBUTES  GeometryKey_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef GeometryKey_obj OBJ_;
		GeometryKey_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< GeometryKey_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~GeometryKey_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("GeometryKey"); }

		Float timestamp;
		int sequence;
		::String uuid;
		int primitive_type;
		::phoenix::Texture texture;
		::phoenix::Shader shader;
		int group;
		Float depth;
		bool clip;
};

} // end namespace phoenix
} // end namespace geometry

#endif /* INCLUDED_phoenix_geometry_GeometryKey */ 
