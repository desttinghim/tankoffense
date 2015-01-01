#ifndef INCLUDED_snow_platform_native_render_opengl_GLObject
#define INCLUDED_snow_platform_native_render_opengl_GLObject

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS5(snow,platform,native,render,opengl,GLObject)
namespace snow{
namespace platform{
namespace native{
namespace render{
namespace opengl{


class HXCPP_CLASS_ATTRIBUTES  GLObject_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef GLObject_obj OBJ_;
		GLObject_obj();
		Void __construct(int id);

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< GLObject_obj > __new(int id);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~GLObject_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("GLObject"); }

		int id;
		bool invalidated;
		virtual ::String toString( );
		Dynamic toString_dyn();

		virtual bool set_invalidated( bool value);
		Dynamic set_invalidated_dyn();

};

} // end namespace snow
} // end namespace platform
} // end namespace native
} // end namespace render
} // end namespace opengl

#endif /* INCLUDED_snow_platform_native_render_opengl_GLObject */ 
