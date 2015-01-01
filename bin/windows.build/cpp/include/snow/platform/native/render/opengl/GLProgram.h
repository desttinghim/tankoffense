#ifndef INCLUDED_snow_platform_native_render_opengl_GLProgram
#define INCLUDED_snow_platform_native_render_opengl_GLProgram

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <snow/platform/native/render/opengl/GLObject.h>
HX_DECLARE_CLASS5(snow,platform,native,render,opengl,GLObject)
HX_DECLARE_CLASS5(snow,platform,native,render,opengl,GLProgram)
HX_DECLARE_CLASS5(snow,platform,native,render,opengl,GLShader)
namespace snow{
namespace platform{
namespace native{
namespace render{
namespace opengl{


class HXCPP_CLASS_ATTRIBUTES  GLProgram_obj : public ::snow::platform::native::render::opengl::GLObject_obj{
	public:
		typedef ::snow::platform::native::render::opengl::GLObject_obj super;
		typedef GLProgram_obj OBJ_;
		GLProgram_obj();
		Void __construct(int id);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< GLProgram_obj > __new(int id);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~GLProgram_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("GLProgram"); }

		Array< ::Dynamic > shaders;
		virtual ::String toString( );

};

} // end namespace snow
} // end namespace platform
} // end namespace native
} // end namespace render
} // end namespace opengl

#endif /* INCLUDED_snow_platform_native_render_opengl_GLProgram */ 
