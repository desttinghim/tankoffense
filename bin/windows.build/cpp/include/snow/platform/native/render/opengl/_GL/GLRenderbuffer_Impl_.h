#ifndef INCLUDED_snow_platform_native_render_opengl__GL_GLRenderbuffer_Impl_
#define INCLUDED_snow_platform_native_render_opengl__GL_GLRenderbuffer_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS5(snow,platform,native,render,opengl,GLObject)
HX_DECLARE_CLASS5(snow,platform,native,render,opengl,GLRBO)
HX_DECLARE_CLASS6(snow,platform,native,render,opengl,_GL,GLRenderbuffer_Impl_)
namespace snow{
namespace platform{
namespace native{
namespace render{
namespace opengl{
namespace _GL{


class HXCPP_CLASS_ATTRIBUTES  GLRenderbuffer_Impl__obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef GLRenderbuffer_Impl__obj OBJ_;
		GLRenderbuffer_Impl__obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< GLRenderbuffer_Impl__obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~GLRenderbuffer_Impl__obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("GLRenderbuffer_Impl_"); }

		static ::snow::platform::native::render::opengl::GLRBO _new( int _id);
		static Dynamic _new_dyn();

		static int get_id( ::snow::platform::native::render::opengl::GLRBO this1);
		static Dynamic get_id_dyn();

		static bool get_invalidated( ::snow::platform::native::render::opengl::GLRBO this1);
		static Dynamic get_invalidated_dyn();

		static bool set_invalidated( ::snow::platform::native::render::opengl::GLRBO this1,bool _invalidated);
		static Dynamic set_invalidated_dyn();

		static ::snow::platform::native::render::opengl::GLRBO fromInt( int _id);
		static Dynamic fromInt_dyn();

		static ::snow::platform::native::render::opengl::GLRBO fromDynamic( Dynamic _id);
		static Dynamic fromDynamic_dyn();

};

} // end namespace snow
} // end namespace platform
} // end namespace native
} // end namespace render
} // end namespace opengl
} // end namespace _GL

#endif /* INCLUDED_snow_platform_native_render_opengl__GL_GLRenderbuffer_Impl_ */ 
