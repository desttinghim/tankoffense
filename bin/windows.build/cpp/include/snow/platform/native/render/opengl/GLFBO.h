#ifndef INCLUDED_snow_platform_native_render_opengl_GLFBO
#define INCLUDED_snow_platform_native_render_opengl_GLFBO

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <snow/platform/native/render/opengl/GLObject.h>
HX_DECLARE_CLASS5(snow,platform,native,render,opengl,GLFBO)
HX_DECLARE_CLASS5(snow,platform,native,render,opengl,GLObject)
namespace snow{
namespace platform{
namespace native{
namespace render{
namespace opengl{


class HXCPP_CLASS_ATTRIBUTES  GLFBO_obj : public ::snow::platform::native::render::opengl::GLObject_obj{
	public:
		typedef ::snow::platform::native::render::opengl::GLObject_obj super;
		typedef GLFBO_obj OBJ_;
		GLFBO_obj();
		Void __construct(int id);

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< GLFBO_obj > __new(int id);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~GLFBO_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("GLFBO"); }

		virtual ::String toString( );

};

} // end namespace snow
} // end namespace platform
} // end namespace native
} // end namespace render
} // end namespace opengl

#endif /* INCLUDED_snow_platform_native_render_opengl_GLFBO */ 
