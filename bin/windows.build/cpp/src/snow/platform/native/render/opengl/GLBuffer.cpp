#include <hxcpp.h>

#ifndef INCLUDED_snow_platform_native_render_opengl_GLBuffer
#include <snow/platform/native/render/opengl/GLBuffer.h>
#endif
#ifndef INCLUDED_snow_platform_native_render_opengl_GLObject
#include <snow/platform/native/render/opengl/GLObject.h>
#endif
namespace snow{
namespace platform{
namespace native{
namespace render{
namespace opengl{

Void GLBuffer_obj::__construct(int id)
{
HX_STACK_FRAME("snow.platform.native.render.opengl.GLBuffer","new",0xdffeebc5,"snow.platform.native.render.opengl.GLBuffer.new","snow/platform/native/render/opengl/GL.hx",71,0x9056cf0a)
HX_STACK_THIS(this)
HX_STACK_ARG(id,"id")
{
	HX_STACK_LINE(71)
	super::__construct(id);
}
;
	return null();
}

//GLBuffer_obj::~GLBuffer_obj() { }

Dynamic GLBuffer_obj::__CreateEmpty() { return  new GLBuffer_obj; }
hx::ObjectPtr< GLBuffer_obj > GLBuffer_obj::__new(int id)
{  hx::ObjectPtr< GLBuffer_obj > result = new GLBuffer_obj();
	result->__construct(id);
	return result;}

Dynamic GLBuffer_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< GLBuffer_obj > result = new GLBuffer_obj();
	result->__construct(inArgs[0]);
	return result;}

::String GLBuffer_obj::toString( ){
	HX_STACK_FRAME("snow.platform.native.render.opengl.GLBuffer","toString",0xb1ad4727,"snow.platform.native.render.opengl.GLBuffer.toString","snow/platform/native/render/opengl/GL.hx",74,0x9056cf0a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(74)
	return ((HX_CSTRING("GLBuffer(") + this->id) + HX_CSTRING(")"));
}



GLBuffer_obj::GLBuffer_obj()
{
}

Dynamic GLBuffer_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic GLBuffer_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void GLBuffer_obj::__GetFields(Array< ::String> &outFields)
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
	HX_MARK_MEMBER_NAME(GLBuffer_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GLBuffer_obj::__mClass,"__mClass");
};

#endif

Class GLBuffer_obj::__mClass;

void GLBuffer_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("snow.platform.native.render.opengl.GLBuffer"), hx::TCanCast< GLBuffer_obj> ,sStaticFields,sMemberFields,
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

void GLBuffer_obj::__boot()
{
}

} // end namespace snow
} // end namespace platform
} // end namespace native
} // end namespace render
} // end namespace opengl
