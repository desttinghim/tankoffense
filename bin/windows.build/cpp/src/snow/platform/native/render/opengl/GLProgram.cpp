#include <hxcpp.h>

#ifndef INCLUDED_snow_platform_native_render_opengl_GLObject
#include <snow/platform/native/render/opengl/GLObject.h>
#endif
#ifndef INCLUDED_snow_platform_native_render_opengl_GLProgram
#include <snow/platform/native/render/opengl/GLProgram.h>
#endif
#ifndef INCLUDED_snow_platform_native_render_opengl_GLShader
#include <snow/platform/native/render/opengl/GLShader.h>
#endif
namespace snow{
namespace platform{
namespace native{
namespace render{
namespace opengl{

Void GLProgram_obj::__construct(int id)
{
HX_STACK_FRAME("snow.platform.native.render.opengl.GLProgram","new",0xfa868843,"snow.platform.native.render.opengl.GLProgram.new","snow/platform/native/render/opengl/GL.hx",186,0x9056cf0a)
HX_STACK_THIS(this)
HX_STACK_ARG(id,"id")
{
	HX_STACK_LINE(188)
	super::__construct(id);
	HX_STACK_LINE(189)
	this->shaders = Array_obj< ::Dynamic >::__new();
}
;
	return null();
}

//GLProgram_obj::~GLProgram_obj() { }

Dynamic GLProgram_obj::__CreateEmpty() { return  new GLProgram_obj; }
hx::ObjectPtr< GLProgram_obj > GLProgram_obj::__new(int id)
{  hx::ObjectPtr< GLProgram_obj > result = new GLProgram_obj();
	result->__construct(id);
	return result;}

Dynamic GLProgram_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< GLProgram_obj > result = new GLProgram_obj();
	result->__construct(inArgs[0]);
	return result;}

::String GLProgram_obj::toString( ){
	HX_STACK_FRAME("snow.platform.native.render.opengl.GLProgram","toString",0x1b07a1e9,"snow.platform.native.render.opengl.GLProgram.toString","snow/platform/native/render/opengl/GL.hx",195,0x9056cf0a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(195)
	return ((HX_CSTRING("GLProgram(") + this->id) + HX_CSTRING(")"));
}



GLProgram_obj::GLProgram_obj()
{
}

void GLProgram_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(GLProgram);
	HX_MARK_MEMBER_NAME(shaders,"shaders");
	HX_MARK_END_CLASS();
}

void GLProgram_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(shaders,"shaders");
}

Dynamic GLProgram_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"shaders") ) { return shaders; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic GLProgram_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"shaders") ) { shaders=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void GLProgram_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("shaders"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(GLProgram_obj,shaders),HX_CSTRING("shaders")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("shaders"),
	HX_CSTRING("toString"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GLProgram_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GLProgram_obj::__mClass,"__mClass");
};

#endif

Class GLProgram_obj::__mClass;

void GLProgram_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("snow.platform.native.render.opengl.GLProgram"), hx::TCanCast< GLProgram_obj> ,sStaticFields,sMemberFields,
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

void GLProgram_obj::__boot()
{
}

} // end namespace snow
} // end namespace platform
} // end namespace native
} // end namespace render
} // end namespace opengl
