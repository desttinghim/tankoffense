#ifndef INCLUDED_luxe_resource_ResourceStats
#define INCLUDED_luxe_resource_ResourceStats

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(luxe,resource,ResourceStats)
namespace luxe{
namespace resource{


class HXCPP_CLASS_ATTRIBUTES  ResourceStats_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ResourceStats_obj OBJ_;
		ResourceStats_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< ResourceStats_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ResourceStats_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("ResourceStats"); }

		int resources;
		int fonts;
		int textures;
		int render_textures;
		int shaders;
		int texts;
		int jsons;
		int datas;
		int sounds;
		int unknown;
		virtual ::String toString( );
		Dynamic toString_dyn();

		virtual Void reset( );
		Dynamic reset_dyn();

};

} // end namespace luxe
} // end namespace resource

#endif /* INCLUDED_luxe_resource_ResourceStats */ 
