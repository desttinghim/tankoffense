#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_snow_platform_native_render_opengl_GLFBO
#include <snow/platform/native/render/opengl/GLFBO.h>
#endif
#ifndef INCLUDED_snow_platform_native_render_opengl_GLObject
#include <snow/platform/native/render/opengl/GLObject.h>
#endif
#ifndef INCLUDED_snow_platform_native_render_opengl__GL_GLFramebuffer_Impl_
#include <snow/platform/native/render/opengl/_GL/GLFramebuffer_Impl_.h>
#endif
namespace snow{
namespace platform{
namespace native{
namespace render{
namespace opengl{
namespace _GL{

Void GLFramebuffer_Impl__obj::__construct()
{
	return null();
}

//GLFramebuffer_Impl__obj::~GLFramebuffer_Impl__obj() { }

Dynamic GLFramebuffer_Impl__obj::__CreateEmpty() { return  new GLFramebuffer_Impl__obj; }
hx::ObjectPtr< GLFramebuffer_Impl__obj > GLFramebuffer_Impl__obj::__new()
{  hx::ObjectPtr< GLFramebuffer_Impl__obj > result = new GLFramebuffer_Impl__obj();
	result->__construct();
	return result;}

Dynamic GLFramebuffer_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< GLFramebuffer_Impl__obj > result = new GLFramebuffer_Impl__obj();
	result->__construct();
	return result;}

::snow::platform::native::render::opengl::GLFBO GLFramebuffer_Impl__obj::_new( int _id){
	HX_STACK_FRAME("snow.platform.native.render.opengl._GL.GLFramebuffer_Impl_","_new",0x229abedf,"snow.platform.native.render.opengl._GL.GLFramebuffer_Impl_._new","snow/platform/native/render/opengl/GL.hx",103,0x9056cf0a)
	HX_STACK_ARG(_id,"_id")
	HX_STACK_LINE(103)
	return ::snow::platform::native::render::opengl::GLFBO_obj::__new(_id);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLFramebuffer_Impl__obj,_new,return )

int GLFramebuffer_Impl__obj::get_id( ::snow::platform::native::render::opengl::GLFBO this1){
	HX_STACK_FRAME("snow.platform.native.render.opengl._GL.GLFramebuffer_Impl_","get_id",0x1c077822,"snow.platform.native.render.opengl._GL.GLFramebuffer_Impl_.get_id","snow/platform/native/render/opengl/GL.hx",107,0x9056cf0a)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(107)
	return this1->id;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLFramebuffer_Impl__obj,get_id,return )

bool GLFramebuffer_Impl__obj::get_invalidated( ::snow::platform::native::render::opengl::GLFBO this1){
	HX_STACK_FRAME("snow.platform.native.render.opengl._GL.GLFramebuffer_Impl_","get_invalidated",0xe288d562,"snow.platform.native.render.opengl._GL.GLFramebuffer_Impl_.get_invalidated","snow/platform/native/render/opengl/GL.hx",111,0x9056cf0a)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(111)
	return this1->invalidated;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLFramebuffer_Impl__obj,get_invalidated,return )

bool GLFramebuffer_Impl__obj::set_invalidated( ::snow::platform::native::render::opengl::GLFBO this1,bool _invalidated){
	HX_STACK_FRAME("snow.platform.native.render.opengl._GL.GLFramebuffer_Impl_","set_invalidated",0xde54526e,"snow.platform.native.render.opengl._GL.GLFramebuffer_Impl_.set_invalidated","snow/platform/native/render/opengl/GL.hx",115,0x9056cf0a)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(_invalidated,"_invalidated")
	HX_STACK_LINE(115)
	return this1->set_invalidated(_invalidated);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GLFramebuffer_Impl__obj,set_invalidated,return )

::snow::platform::native::render::opengl::GLFBO GLFramebuffer_Impl__obj::fromInt( int _id){
	HX_STACK_FRAME("snow.platform.native.render.opengl._GL.GLFramebuffer_Impl_","fromInt",0x9bb7b6e7,"snow.platform.native.render.opengl._GL.GLFramebuffer_Impl_.fromInt","snow/platform/native/render/opengl/GL.hx",120,0x9056cf0a)
	HX_STACK_ARG(_id,"_id")
	HX_STACK_LINE(120)
	return ::snow::platform::native::render::opengl::GLFBO_obj::__new(_id);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLFramebuffer_Impl__obj,fromInt,return )

::snow::platform::native::render::opengl::GLFBO GLFramebuffer_Impl__obj::fromDynamic( Dynamic _id){
	HX_STACK_FRAME("snow.platform.native.render.opengl._GL.GLFramebuffer_Impl_","fromDynamic",0x9465a577,"snow.platform.native.render.opengl._GL.GLFramebuffer_Impl_.fromDynamic","snow/platform/native/render/opengl/GL.hx",125,0x9056cf0a)
	HX_STACK_ARG(_id,"_id")
	HX_STACK_LINE(125)
	int _id1 = ::Std_obj::_int(_id);		HX_STACK_VAR(_id1,"_id1");
	HX_STACK_LINE(125)
	return ::snow::platform::native::render::opengl::GLFBO_obj::__new(_id1);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLFramebuffer_Impl__obj,fromDynamic,return )


GLFramebuffer_Impl__obj::GLFramebuffer_Impl__obj()
{
}

Dynamic GLFramebuffer_Impl__obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_new") ) { return _new_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"get_id") ) { return get_id_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"fromInt") ) { return fromInt_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"fromDynamic") ) { return fromDynamic_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_invalidated") ) { return get_invalidated_dyn(); }
		if (HX_FIELD_EQ(inName,"set_invalidated") ) { return set_invalidated_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic GLFramebuffer_Impl__obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void GLFramebuffer_Impl__obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("_new"),
	HX_CSTRING("get_id"),
	HX_CSTRING("get_invalidated"),
	HX_CSTRING("set_invalidated"),
	HX_CSTRING("fromInt"),
	HX_CSTRING("fromDynamic"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GLFramebuffer_Impl__obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GLFramebuffer_Impl__obj::__mClass,"__mClass");
};

#endif

Class GLFramebuffer_Impl__obj::__mClass;

void GLFramebuffer_Impl__obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("snow.platform.native.render.opengl._GL.GLFramebuffer_Impl_"), hx::TCanCast< GLFramebuffer_Impl__obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatics
#endif
#ifdef HXCPP_SCRIPTABLE
    , sMemberStorageInfo
#endif
);
}

void GLFramebuffer_Impl__obj::__boot()
{
}

} // end namespace snow
} // end namespace platform
} // end namespace native
} // end namespace render
} // end namespace opengl
} // end namespace _GL
