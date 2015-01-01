#include <hxcpp.h>

#ifndef INCLUDED_snow_platform_native_render_opengl_GLObject
#include <snow/platform/native/render/opengl/GLObject.h>
#endif
namespace snow{
namespace platform{
namespace native{
namespace render{
namespace opengl{

Void GLObject_obj::__construct(int id)
{
HX_STACK_FRAME("snow.platform.native.render.opengl.GLObject","new",0x1126f904,"snow.platform.native.render.opengl.GLObject.new","snow/platform/native/render/opengl/GL.hx",52,0x9056cf0a)
HX_STACK_THIS(this)
HX_STACK_ARG(id,"id")
{
	HX_STACK_LINE(52)
	this->id = id;
}
;
	return null();
}

//GLObject_obj::~GLObject_obj() { }

Dynamic GLObject_obj::__CreateEmpty() { return  new GLObject_obj; }
hx::ObjectPtr< GLObject_obj > GLObject_obj::__new(int id)
{  hx::ObjectPtr< GLObject_obj > result = new GLObject_obj();
	result->__construct(id);
	return result;}

Dynamic GLObject_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< GLObject_obj > result = new GLObject_obj();
	result->__construct(inArgs[0]);
	return result;}

::String GLObject_obj::toString( ){
	HX_STACK_FRAME("snow.platform.native.render.opengl.GLObject","toString",0x23b1d588,"snow.platform.native.render.opengl.GLObject.toString","snow/platform/native/render/opengl/GL.hx",58,0x9056cf0a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(58)
	return ((HX_CSTRING("GLObject(") + this->id) + HX_CSTRING(")"));
}


HX_DEFINE_DYNAMIC_FUNC0(GLObject_obj,toString,return )

bool GLObject_obj::set_invalidated( bool value){
	HX_STACK_FRAME("snow.platform.native.render.opengl.GLObject","set_invalidated",0xbe98f5d0,"snow.platform.native.render.opengl.GLObject.set_invalidated","snow/platform/native/render/opengl/GL.hx",62,0x9056cf0a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(64)
	this->id = (int)-1;
	HX_STACK_LINE(65)
	return this->invalidated = value;
}


HX_DEFINE_DYNAMIC_FUNC1(GLObject_obj,set_invalidated,return )


GLObject_obj::GLObject_obj()
{
}

Dynamic GLObject_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return id; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"invalidated") ) { return invalidated; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"set_invalidated") ) { return set_invalidated_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic GLObject_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"invalidated") ) { if (inCallProp) return set_invalidated(inValue);invalidated=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void GLObject_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("id"));
	outFields->push(HX_CSTRING("invalidated"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(GLObject_obj,id),HX_CSTRING("id")},
	{hx::fsBool,(int)offsetof(GLObject_obj,invalidated),HX_CSTRING("invalidated")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("id"),
	HX_CSTRING("invalidated"),
	HX_CSTRING("toString"),
	HX_CSTRING("set_invalidated"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GLObject_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GLObject_obj::__mClass,"__mClass");
};

#endif

Class GLObject_obj::__mClass;

void GLObject_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("snow.platform.native.render.opengl.GLObject"), hx::TCanCast< GLObject_obj> ,sStaticFields,sMemberFields,
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

void GLObject_obj::__boot()
{
}

} // end namespace snow
} // end namespace platform
} // end namespace native
} // end namespace render
} // end namespace opengl
