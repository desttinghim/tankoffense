#ifndef INCLUDED_snow_platform_native_render_opengl_GLRBO
#define INCLUDED_snow_platform_native_render_opengl_GLRBO

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <snow/platform/native/render/opengl/GLObject.h>
HX_DECLARE_CLASS5(snow,platform,native,render,opengl,GLObject)
HX_DECLARE_CLASS5(snow,platform,native,render,opengl,GLRBO)
namespace snow{
namespace platform{
namespace native{
namespace render{
namespace opengl{


class HXCPP_CLASS_ATTRIBUTES  GLRBO_obj : public ::snow::platform::native::render::opengl::GLObject_obj{
	public:
		typedef ::snow::platform::native::render::opengl::GLObject_obj super;
		typedef GLRBO_obj OBJ_;
		GLRBO_obj();
		Void __construct(int id);

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< GLRBO_obj > __new(int id);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~GLRBO_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("GLRBO"); }

		virtual ::String toString( );

};

} // end namespace snow
} // end namespace platform
} // end namespace native
} // end namespace render
} // end namespace opengl

#endif /* INCLUDED_snow_platform_native_render_opengl_GLRBO */ 
