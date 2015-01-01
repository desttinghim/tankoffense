#include <hxcpp.h>

#ifndef INCLUDED_snow_platform_native_render_opengl_GLFBO
#include <snow/platform/native/render/opengl/GLFBO.h>
#endif
#ifndef INCLUDED_snow_platform_native_render_opengl_GLObject
#include <snow/platform/native/render/opengl/GLObject.h>
#endif
namespace snow{
namespace platform{
namespace native{
namespace render{
namespace opengl{

Void GLFBO_obj::__construct(int id)
{
HX_STACK_FRAME("snow.platform.native.render.opengl.GLFBO","new",0xb3f3f672,"snow.platform.native.render.opengl.GLFBO.new","snow/platform/native/render/opengl/GL.hx",80,0x9056cf0a)
HX_STACK_THIS(this)
HX_STACK_ARG(id,"id")
{
	HX_STACK_LINE(80)
	super::__construct(id);
}
;
	return null();
}

//GLFBO_obj::~GLFBO_obj() { }

Dynamic GLFBO_obj::__CreateEmpty() { return  new GLFBO_obj; }
hx::ObjectPtr< GLFBO_obj > GLFBO_obj::__new(int id)
{  hx::ObjectPtr< GLFBO_obj > result = new GLFBO_obj();
	result->__construct(id);
	return result;}

Dynamic GLFBO_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< GLFBO_obj > result = new GLFBO_obj();
	result->__construct(inArgs[0]);
	return result;}

::String GLFBO_obj::toString( ){
	HX_STACK_FRAME("snow.platform.native.render.opengl.GLFBO","toString",0x22f1695a,"snow.platform.native.render.opengl.GLFBO.toString","snow/platform/native/render/opengl/GL.hx",83,0x9056cf0a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(83)
	return ((HX_CSTRING("GLFramebuffer(") + this->id) + HX_CSTRING(")"));
}



GLFBO_obj::GLFBO_obj()
{
}

Dynamic GLFBO_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic GLFBO_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void GLFBO_obj::__GetFields(Array< ::String> &outFields)
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
	HX_MARK_MEMBER_NAME(GLFBO_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GLFBO_obj::__mClass,"__mClass");
};

#endif

Class GLFBO_obj::__mClass;

void GLFBO_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("snow.platform.native.render.opengl.GLFBO"), hx::TCanCast< GLFBO_obj> ,sStaticFields,sMemberFields,
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

void GLFBO_obj::__boot()
{
}

} // end namespace snow
} // end namespace platform
} // end namespace native
} // end namespace render
} // end namespace opengl
