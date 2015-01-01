#include <hxcpp.h>

#ifndef INCLUDED_snow_platform_native_render_opengl_GLObject
#include <snow/platform/native/render/opengl/GLObject.h>
#endif
#ifndef INCLUDED_snow_platform_native_render_opengl_GLTexture
#include <snow/platform/native/render/opengl/GLTexture.h>
#endif
namespace snow{
namespace platform{
namespace native{
namespace render{
namespace opengl{

Void GLTexture_obj::__construct(int id)
{
HX_STACK_FRAME("snow.platform.native.render.opengl.GLTexture","new",0x39e17e1a,"snow.platform.native.render.opengl.GLTexture.new","snow/platform/native/render/opengl/GL.hx",173,0x9056cf0a)
HX_STACK_THIS(this)
HX_STACK_ARG(id,"id")
{
	HX_STACK_LINE(173)
	super::__construct(id);
}
;
	return null();
}

//GLTexture_obj::~GLTexture_obj() { }

Dynamic GLTexture_obj::__CreateEmpty() { return  new GLTexture_obj; }
hx::ObjectPtr< GLTexture_obj > GLTexture_obj::__new(int id)
{  hx::ObjectPtr< GLTexture_obj > result = new GLTexture_obj();
	result->__construct(id);
	return result;}

Dynamic GLTexture_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< GLTexture_obj > result = new GLTexture_obj();
	result->__construct(inArgs[0]);
	return result;}

::String GLTexture_obj::toString( ){
	HX_STACK_FRAME("snow.platform.native.render.opengl.GLTexture","toString",0x5b8f20b2,"snow.platform.native.render.opengl.GLTexture.toString","snow/platform/native/render/opengl/GL.hx",176,0x9056cf0a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(176)
	return ((HX_CSTRING("GLTexture(") + this->id) + HX_CSTRING(")"));
}



GLTexture_obj::GLTexture_obj()
{
}

Dynamic GLTexture_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic GLTexture_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void GLTexture_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("toString"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GLTexture_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GLTexture_obj::__mClass,"__mClass");
};

#endif

Class GLTexture_obj::__mClass;

void GLTexture_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("snow.platform.native.render.opengl.GLTexture"), hx::TCanCast< GLTexture_obj> ,sStaticFields,sMemberFields,
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

void GLTexture_obj::__boot()
{
}

} // end namespace snow
} // end namespace platform
} // end namespace native
} // end namespace render
} // end namespace opengl
