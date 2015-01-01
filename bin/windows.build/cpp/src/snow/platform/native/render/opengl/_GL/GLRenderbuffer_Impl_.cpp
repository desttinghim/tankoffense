#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_snow_platform_native_render_opengl_GLObject
#include <snow/platform/native/render/opengl/GLObject.h>
#endif
#ifndef INCLUDED_snow_platform_native_render_opengl_GLRBO
#include <snow/platform/native/render/opengl/GLRBO.h>
#endif
#ifndef INCLUDED_snow_platform_native_render_opengl__GL_GLRenderbuffer_Impl_
#include <snow/platform/native/render/opengl/_GL/GLRenderbuffer_Impl_.h>
#endif
namespace snow{
namespace platform{
namespace native{
namespace render{
namespace opengl{
namespace _GL{

Void GLRenderbuffer_Impl__obj::__construct()
{
	return null();
}

//GLRenderbuffer_Impl__obj::~GLRenderbuffer_Impl__obj() { }

Dynamic GLRenderbuffer_Impl__obj::__CreateEmpty() { return  new GLRenderbuffer_Impl__obj; }
hx::ObjectPtr< GLRenderbuffer_Impl__obj > GLRenderbuffer_Impl__obj::__new()
{  hx::ObjectPtr< GLRenderbuffer_Impl__obj > result = new GLRenderbuffer_Impl__obj();
	result->__construct();
	return result;}

Dynamic GLRenderbuffer_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< GLRenderbuffer_Impl__obj > result = new GLRenderbuffer_Impl__obj();
	result->__construct();
	return result;}

::snow::platform::native::render::opengl::GLRBO GLRenderbuffer_Impl__obj::_new( int _id){
	HX_STACK_FRAME("snow.platform.native.render.opengl._GL.GLRenderbuffer_Impl_","_new",0xb69aed7c,"snow.platform.native.render.opengl._GL.GLRenderbuffer_Impl_._new","snow/platform/native/render/opengl/GL.hx",136,0x9056cf0a)
	HX_STACK_ARG(_id,"_id")
	HX_STACK_LINE(136)
	return ::snow::platform::native::render::opengl::GLRBO_obj::__new(_id);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLRenderbuffer_Impl__obj,_new,return )

int GLRenderbuffer_Impl__obj::get_id( ::snow::platform::native::render::opengl::GLRBO this1){
	HX_STACK_FRAME("snow.platform.native.render.opengl._GL.GLRenderbuffer_Impl_","get_id",0xd36647ff,"snow.platform.native.render.opengl._GL.GLRenderbuffer_Impl_.get_id","snow/platform/native/render/opengl/GL.hx",140,0x9056cf0a)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(140)
	return this1->id;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLRenderbuffer_Impl__obj,get_id,return )

bool GLRenderbuffer_Impl__obj::get_invalidated( ::snow::platform::native::render::opengl::GLRBO this1){
	HX_STACK_FRAME("snow.platform.native.render.opengl._GL.GLRenderbuffer_Impl_","get_invalidated",0x86a1a1e5,"snow.platform.native.render.opengl._GL.GLRenderbuffer_Impl_.get_invalidated","snow/platform/native/render/opengl/GL.hx",144,0x9056cf0a)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(144)
	return this1->invalidated;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLRenderbuffer_Impl__obj,get_invalidated,return )

bool GLRenderbuffer_Impl__obj::set_invalidated( ::snow::platform::native::render::opengl::GLRBO this1,bool _invalidated){
	HX_STACK_FRAME("snow.platform.native.render.opengl._GL.GLRenderbuffer_Impl_","set_invalidated",0x826d1ef1,"snow.platform.native.render.opengl._GL.GLRenderbuffer_Impl_.set_invalidated","snow/platform/native/render/opengl/GL.hx",148,0x9056cf0a)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(_invalidated,"_invalidated")
	HX_STACK_LINE(148)
	return this1->set_invalidated(_invalidated);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GLRenderbuffer_Impl__obj,set_invalidated,return )

::snow::platform::native::render::opengl::GLRBO GLRenderbuffer_Impl__obj::fromInt( int _id){
	HX_STACK_FRAME("snow.platform.native.render.opengl._GL.GLRenderbuffer_Impl_","fromInt",0x574ec86a,"snow.platform.native.render.opengl._GL.GLRenderbuffer_Impl_.fromInt","snow/platform/native/render/opengl/GL.hx",153,0x9056cf0a)
	HX_STACK_ARG(_id,"_id")
	HX_STACK_LINE(153)
	return ::snow::platform::native::render::opengl::GLRBO_obj::__new(_id);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLRenderbuffer_Impl__obj,fromInt,return )

::snow::platform::native::render::opengl::GLRBO GLRenderbuffer_Impl__obj::fromDynamic( Dynamic _id){
	HX_STACK_FRAME("snow.platform.native.render.opengl._GL.GLRenderbuffer_Impl_","fromDynamic",0xa4d7347a,"snow.platform.native.render.opengl._GL.GLRenderbuffer_Impl_.fromDynamic","snow/platform/native/render/opengl/GL.hx",158,0x9056cf0a)
	HX_STACK_ARG(_id,"_id")
	HX_STACK_LINE(158)
	int _id1 = ::Std_obj::_int(_id);		HX_STACK_VAR(_id1,"_id1");
	HX_STACK_LINE(158)
	return ::snow::platform::native::render::opengl::GLRBO_obj::__new(_id1);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLRenderbuffer_Impl__obj,fromDynamic,return )


GLRenderbuffer_Impl__obj::GLRenderbuffer_Impl__obj()
{
}

Dynamic GLRenderbuffer_Impl__obj::__Field(const ::String &inName,bool inCallProp)
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

Dynamic GLRenderbuffer_Impl__obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void GLRenderbuffer_Impl__obj::__GetFields(Array< ::String> &outFields)
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
	HX_MARK_MEMBER_NAME(GLRenderbuffer_Impl__obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GLRenderbuffer_Impl__obj::__mClass,"__mClass");
};

#endif

Class GLRenderbuffer_Impl__obj::__mClass;

void GLRenderbuffer_Impl__obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("snow.platform.native.render.opengl._GL.GLRenderbuffer_Impl_"), hx::TCanCast< GLRenderbuffer_Impl__obj> ,sStaticFields,sMemberFields,
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

void GLRenderbuffer_Impl__obj::__boot()
{
}

} // end namespace snow
} // end namespace platform
} // end namespace native
} // end namespace render
} // end namespace opengl
} // end namespace _GL
