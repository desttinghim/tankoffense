#include <hxcpp.h>

#ifndef INCLUDED_snow_platform_native_render_opengl_GLObject
#include <snow/platform/native/render/opengl/GLObject.h>
#endif
#ifndef INCLUDED_snow_platform_native_render_opengl_GLRBO
#include <snow/platform/native/render/opengl/GLRBO.h>
#endif
namespace snow{
namespace platform{
namespace native{
namespace render{
namespace opengl{

Void GLRBO_obj::__construct(int id)
{
HX_STACK_FRAME("snow.platform.native.render.opengl.GLRBO","new",0xa6f5877e,"snow.platform.native.render.opengl.GLRBO.new","snow/platform/native/render/opengl/GL.hx",88,0x9056cf0a)
HX_STACK_THIS(this)
HX_STACK_ARG(id,"id")
{
	HX_STACK_LINE(88)
	super::__construct(id);
}
;
	return null();
}

//GLRBO_obj::~GLRBO_obj() { }

Dynamic GLRBO_obj::__CreateEmpty() { return  new GLRBO_obj; }
hx::ObjectPtr< GLRBO_obj > GLRBO_obj::__new(int id)
{  hx::ObjectPtr< GLRBO_obj > result = new GLRBO_obj();
	result->__construct(id);
	return result;}

Dynamic GLRBO_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< GLRBO_obj > result = new GLRBO_obj();
	result->__construct(inArgs[0]);
	return result;}

::String GLRBO_obj::toString( ){
	HX_STACK_FRAME("snow.platform.native.render.opengl.GLRBO","toString",0x37ea8cce,"snow.platform.native.render.opengl.GLRBO.toString","snow/platform/native/render/opengl/GL.hx",91,0x9056cf0a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(91)
	return ((HX_CSTRING("GLRenderbuffer(") + this->id) + HX_CSTRING(")"));
}



GLRBO_obj::GLRBO_obj()
{
}

Dynamic GLRBO_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic GLRBO_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void GLRBO_obj::__GetFields(Array< ::String> &outFields)
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
	HX_MARK_MEMBER_NAME(GLRBO_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GLRBO_obj::__mClass,"__mClass");
};

#endif

Class GLRBO_obj::__mClass;

void GLRBO_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("snow.platform.native.render.opengl.GLRBO"), hx::TCanCast< GLRBO_obj> ,sStaticFields,sMemberFields,
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

void GLRBO_obj::__boot()
{
}

} // end namespace snow
} // end namespace platform
} // end namespace native
} // end namespace render
} // end namespace opengl
