#include <hxcpp.h>

#ifndef INCLUDED_snow_platform_native_render_opengl_GLObject
#include <snow/platform/native/render/opengl/GLObject.h>
#endif
#ifndef INCLUDED_snow_platform_native_render_opengl_GLShader
#include <snow/platform/native/render/opengl/GLShader.h>
#endif
namespace snow{
namespace platform{
namespace native{
namespace render{
namespace opengl{

Void GLShader_obj::__construct(int id)
{
HX_STACK_FRAME("snow.platform.native.render.opengl.GLShader","new",0x7d87646a,"snow.platform.native.render.opengl.GLShader.new","snow/platform/native/render/opengl/GL.hx",164,0x9056cf0a)
HX_STACK_THIS(this)
HX_STACK_ARG(id,"id")
{
	HX_STACK_LINE(164)
	super::__construct(id);
}
;
	return null();
}

//GLShader_obj::~GLShader_obj() { }

Dynamic GLShader_obj::__CreateEmpty() { return  new GLShader_obj; }
hx::ObjectPtr< GLShader_obj > GLShader_obj::__new(int id)
{  hx::ObjectPtr< GLShader_obj > result = new GLShader_obj();
	result->__construct(id);
	return result;}

Dynamic GLShader_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< GLShader_obj > result = new GLShader_obj();
	result->__construct(inArgs[0]);
	return result;}

::String GLShader_obj::toString( ){
	HX_STACK_FRAME("snow.platform.native.render.opengl.GLShader","toString",0xd3545862,"snow.platform.native.render.opengl.GLShader.toString","snow/platform/native/render/opengl/GL.hx",167,0x9056cf0a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(167)
	return ((HX_CSTRING("GLShader(") + this->id) + HX_CSTRING(")"));
}



GLShader_obj::GLShader_obj()
{
}

Dynamic GLShader_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic GLShader_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void GLShader_obj::__GetFields(Array< ::String> &outFields)
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
	HX_MARK_MEMBER_NAME(GLShader_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GLShader_obj::__mClass,"__mClass");
};

#endif

Class GLShader_obj::__mClass;

void GLShader_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("snow.platform.native.render.opengl.GLShader"), hx::TCanCast< GLShader_obj> ,sStaticFields,sMemberFields,
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

void GLShader_obj::__boot()
{
}

} // end namespace snow
} // end namespace platform
} // end namespace native
} // end namespace render
} // end namespace opengl
