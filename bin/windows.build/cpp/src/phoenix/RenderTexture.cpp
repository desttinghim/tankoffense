#include <hxcpp.h>

#ifndef INCLUDED_Luxe
#include <Luxe.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_luxe_Screen
#include <luxe/Screen.h>
#endif
#ifndef INCLUDED_luxe_resource_Resource
#include <luxe/resource/Resource.h>
#endif
#ifndef INCLUDED_luxe_resource_ResourceManager
#include <luxe/resource/ResourceManager.h>
#endif
#ifndef INCLUDED_luxe_resource_ResourceType
#include <luxe/resource/ResourceType.h>
#endif
#ifndef INCLUDED_phoenix_ClampType
#include <phoenix/ClampType.h>
#endif
#ifndef INCLUDED_phoenix_FilterType
#include <phoenix/FilterType.h>
#endif
#ifndef INCLUDED_phoenix_RenderState
#include <phoenix/RenderState.h>
#endif
#ifndef INCLUDED_phoenix_RenderTexture
#include <phoenix/RenderTexture.h>
#endif
#ifndef INCLUDED_phoenix_Renderer
#include <phoenix/Renderer.h>
#endif
#ifndef INCLUDED_phoenix_Texture
#include <phoenix/Texture.h>
#endif
#ifndef INCLUDED_phoenix_Vector
#include <phoenix/Vector.h>
#endif
#ifndef INCLUDED_snow_platform_native_render_opengl_GL
#include <snow/platform/native/render/opengl/GL.h>
#endif
#ifndef INCLUDED_snow_platform_native_render_opengl_GLFBO
#include <snow/platform/native/render/opengl/GLFBO.h>
#endif
#ifndef INCLUDED_snow_platform_native_render_opengl_GLObject
#include <snow/platform/native/render/opengl/GLObject.h>
#endif
#ifndef INCLUDED_snow_platform_native_render_opengl_GLRBO
#include <snow/platform/native/render/opengl/GLRBO.h>
#endif
#ifndef INCLUDED_snow_platform_native_render_opengl_GLTexture
#include <snow/platform/native/render/opengl/GLTexture.h>
#endif
#ifndef INCLUDED_snow_platform_native_utils_ArrayBufferView
#include <snow/platform/native/utils/ArrayBufferView.h>
#endif
#ifndef INCLUDED_snow_utils_IMemoryRange
#include <snow/utils/IMemoryRange.h>
#endif
namespace phoenix{

Void RenderTexture_obj::__construct(::luxe::resource::ResourceManager _manager,::phoenix::Vector _size)
{
HX_STACK_FRAME("phoenix.RenderTexture","new",0xaa824ed8,"phoenix.RenderTexture.new","phoenix/RenderTexture.hx",17,0xd65f2599)
HX_STACK_THIS(this)
HX_STACK_ARG(_manager,"_manager")
HX_STACK_ARG(_size,"_size")
{
	HX_STACK_LINE(19)
	super::__construct(_manager,::luxe::resource::ResourceType_obj::render_texture);
	HX_STACK_LINE(22)
	if (((_size == null()))){
		HX_STACK_LINE(22)
		::phoenix::Vector_obj::__new(::Luxe_obj::get_screen()->w,::Luxe_obj::get_screen()->h,null(),null());
	}
	else{
		HX_STACK_LINE(22)
		_size;
	}
	HX_STACK_LINE(24)
	int _g = ::Std_obj::_int(_size->x);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(24)
	int _g1 = this->width_actual = _g;		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(24)
	this->width = _g1;
	HX_STACK_LINE(25)
	int _g2 = ::Std_obj::_int(_size->y);		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(25)
	int _g3 = this->height_actual = _g2;		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(25)
	this->height = _g3;
	HX_STACK_LINE(28)
	::snow::platform::native::render::opengl::GLTexture _g4 = ::snow::platform::native::render::opengl::GL_obj::createTexture();		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(28)
	this->texture = _g4;
	HX_STACK_LINE(30)
	this->bind();
	HX_STACK_LINE(32)
	::snow::platform::native::render::opengl::GL_obj::texImage2D((int)3553,(int)0,(int)6408,this->width,this->height,(int)0,(int)6408,(int)5121,null());
	HX_STACK_LINE(34)
	this->_set_filter(::phoenix::FilterType_obj::linear);
	HX_STACK_LINE(35)
	this->_set_clamp(::phoenix::ClampType_obj::edge);
	HX_STACK_LINE(38)
	::snow::platform::native::render::opengl::GLFBO _g5 = ::snow::platform::native::render::opengl::GL_obj::createFramebuffer();		HX_STACK_VAR(_g5,"_g5");
	HX_STACK_LINE(38)
	this->fbo = _g5;
	HX_STACK_LINE(40)
	this->bindBuffer();
	HX_STACK_LINE(43)
	::snow::platform::native::render::opengl::GLRBO _g6 = ::snow::platform::native::render::opengl::GL_obj::createRenderbuffer();		HX_STACK_VAR(_g6,"_g6");
	HX_STACK_LINE(43)
	this->renderbuffer = _g6;
	HX_STACK_LINE(45)
	this->bindRenderBuffer();
	HX_STACK_LINE(49)
	::snow::platform::native::render::opengl::GL_obj::renderbufferStorage((int)36161,(int)33189,this->width,this->height);
	HX_STACK_LINE(51)
	::snow::platform::native::render::opengl::GL_obj::framebufferTexture2D((int)36160,(int)36064,(int)3553,this->texture,(int)0);
	HX_STACK_LINE(53)
	::snow::platform::native::render::opengl::GL_obj::framebufferRenderbuffer((int)36160,(int)36096,(int)36161,this->renderbuffer);
	HX_STACK_LINE(56)
	int status = ::snow::platform::native::render::opengl::GL_obj::checkFramebufferStatus((int)36160);		HX_STACK_VAR(status,"status");
	HX_STACK_LINE(58)
	switch( (int)(status)){
		case (int)36053: {
		}
		;break;
		case (int)36054: {
			HX_STACK_LINE(63)
			HX_STACK_DO_THROW(HX_CSTRING("Incomplete framebuffer: FRAMEBUFFER_INCOMPLETE_ATTACHMENT"));
		}
		;break;
		case (int)36055: {
			HX_STACK_LINE(66)
			HX_STACK_DO_THROW(HX_CSTRING("Incomplete framebuffer: FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT"));
		}
		;break;
		case (int)36057: {
			HX_STACK_LINE(69)
			HX_STACK_DO_THROW(HX_CSTRING("Incomplete framebuffer: FRAMEBUFFER_INCOMPLETE_DIMENSIONS"));
		}
		;break;
		case (int)36061: {
			HX_STACK_LINE(72)
			HX_STACK_DO_THROW(HX_CSTRING("Incomplete framebuffer: FRAMEBUFFER_UNSUPPORTED"));
		}
		;break;
		default: {
			HX_STACK_LINE(75)
			HX_STACK_DO_THROW((HX_CSTRING("Incomplete framebuffer: ") + status));
		}
	}
	HX_STACK_LINE(79)
	this->unbindBuffer(null());
	HX_STACK_LINE(80)
	this->unbindRenderBuffer(null());
	HX_STACK_LINE(82)
	this->loaded = true;
}
;
	return null();
}

//RenderTexture_obj::~RenderTexture_obj() { }

Dynamic RenderTexture_obj::__CreateEmpty() { return  new RenderTexture_obj; }
hx::ObjectPtr< RenderTexture_obj > RenderTexture_obj::__new(::luxe::resource::ResourceManager _manager,::phoenix::Vector _size)
{  hx::ObjectPtr< RenderTexture_obj > result = new RenderTexture_obj();
	result->__construct(_manager,_size);
	return result;}

Dynamic RenderTexture_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< RenderTexture_obj > result = new RenderTexture_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

Void RenderTexture_obj::destroy( ){
{
		HX_STACK_FRAME("phoenix.RenderTexture","destroy",0x12e14772,"phoenix.RenderTexture.destroy","phoenix/RenderTexture.hx",86,0xd65f2599)
		HX_STACK_THIS(this)
		HX_STACK_LINE(88)
		::snow::platform::native::render::opengl::GL_obj::deleteFramebuffer(this->fbo);
		HX_STACK_LINE(89)
		::snow::platform::native::render::opengl::GL_obj::deleteRenderbuffer(this->renderbuffer);
		HX_STACK_LINE(91)
		this->super::destroy();
	}
return null();
}


Void RenderTexture_obj::bindBuffer( ){
{
		HX_STACK_FRAME("phoenix.RenderTexture","bindBuffer",0xb4215325,"phoenix.RenderTexture.bindBuffer","phoenix/RenderTexture.hx",97,0xd65f2599)
		HX_STACK_THIS(this)
		HX_STACK_LINE(97)
		::Luxe_obj::renderer->state->bindFramebuffer(this->fbo);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(RenderTexture_obj,bindBuffer,(void))

Void RenderTexture_obj::unbindBuffer( ::snow::platform::native::render::opengl::GLFBO _other){
{
		HX_STACK_FRAME("phoenix.RenderTexture","unbindBuffer",0xcec7b4be,"phoenix.RenderTexture.unbindBuffer","phoenix/RenderTexture.hx",103,0xd65f2599)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_other,"_other")
		HX_STACK_LINE(103)
		::Luxe_obj::renderer->state->bindFramebuffer(_other);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(RenderTexture_obj,unbindBuffer,(void))

Void RenderTexture_obj::bindRenderBuffer( ){
{
		HX_STACK_FRAME("phoenix.RenderTexture","bindRenderBuffer",0xeaa600db,"phoenix.RenderTexture.bindRenderBuffer","phoenix/RenderTexture.hx",109,0xd65f2599)
		HX_STACK_THIS(this)
		HX_STACK_LINE(109)
		::Luxe_obj::renderer->state->bindRenderbuffer(this->renderbuffer);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(RenderTexture_obj,bindRenderBuffer,(void))

Void RenderTexture_obj::unbindRenderBuffer( ::snow::platform::native::render::opengl::GLRBO _other){
{
		HX_STACK_FRAME("phoenix.RenderTexture","unbindRenderBuffer",0x021f1b34,"phoenix.RenderTexture.unbindRenderBuffer","phoenix/RenderTexture.hx",115,0xd65f2599)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_other,"_other")
		HX_STACK_LINE(115)
		::Luxe_obj::renderer->state->bindRenderbuffer(_other);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(RenderTexture_obj,unbindRenderBuffer,(void))


RenderTexture_obj::RenderTexture_obj()
{
}

void RenderTexture_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(RenderTexture);
	HX_MARK_MEMBER_NAME(fbo,"fbo");
	HX_MARK_MEMBER_NAME(renderbuffer,"renderbuffer");
	::phoenix::Texture_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void RenderTexture_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(fbo,"fbo");
	HX_VISIT_MEMBER_NAME(renderbuffer,"renderbuffer");
	::phoenix::Texture_obj::__Visit(HX_VISIT_ARG);
}

Dynamic RenderTexture_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"fbo") ) { return fbo; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"bindBuffer") ) { return bindBuffer_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"renderbuffer") ) { return renderbuffer; }
		if (HX_FIELD_EQ(inName,"unbindBuffer") ) { return unbindBuffer_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"bindRenderBuffer") ) { return bindRenderBuffer_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"unbindRenderBuffer") ) { return unbindRenderBuffer_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic RenderTexture_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"fbo") ) { fbo=inValue.Cast< ::snow::platform::native::render::opengl::GLFBO >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"renderbuffer") ) { renderbuffer=inValue.Cast< ::snow::platform::native::render::opengl::GLRBO >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void RenderTexture_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("fbo"));
	outFields->push(HX_CSTRING("renderbuffer"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::snow::platform::native::render::opengl::GLFBO*/ ,(int)offsetof(RenderTexture_obj,fbo),HX_CSTRING("fbo")},
	{hx::fsObject /*::snow::platform::native::render::opengl::GLRBO*/ ,(int)offsetof(RenderTexture_obj,renderbuffer),HX_CSTRING("renderbuffer")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("fbo"),
	HX_CSTRING("renderbuffer"),
	HX_CSTRING("destroy"),
	HX_CSTRING("bindBuffer"),
	HX_CSTRING("unbindBuffer"),
	HX_CSTRING("bindRenderBuffer"),
	HX_CSTRING("unbindRenderBuffer"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(RenderTexture_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(RenderTexture_obj::__mClass,"__mClass");
};

#endif

Class RenderTexture_obj::__mClass;

void RenderTexture_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("phoenix.RenderTexture"), hx::TCanCast< RenderTexture_obj> ,sStaticFields,sMemberFields,
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

void RenderTexture_obj::__boot()
{
}

} // end namespace phoenix
