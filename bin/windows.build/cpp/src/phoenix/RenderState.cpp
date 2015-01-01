#include <hxcpp.h>

#ifndef INCLUDED_Luxe
#include <Luxe.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_luxe_Core
#include <luxe/Core.h>
#endif
#ifndef INCLUDED_phoenix_Rectangle
#include <phoenix/Rectangle.h>
#endif
#ifndef INCLUDED_phoenix_RenderState
#include <phoenix/RenderState.h>
#endif
#ifndef INCLUDED_phoenix_Renderer
#include <phoenix/Renderer.h>
#endif
#ifndef INCLUDED_phoenix_Vector
#include <phoenix/Vector.h>
#endif
#ifndef INCLUDED_snow_App
#include <snow/App.h>
#endif
#ifndef INCLUDED_snow_Snow
#include <snow/Snow.h>
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
#ifndef INCLUDED_snow_platform_native_render_opengl_GLProgram
#include <snow/platform/native/render/opengl/GLProgram.h>
#endif
#ifndef INCLUDED_snow_platform_native_render_opengl_GLRBO
#include <snow/platform/native/render/opengl/GLRBO.h>
#endif
#ifndef INCLUDED_snow_platform_native_render_opengl_GLTexture
#include <snow/platform/native/render/opengl/GLTexture.h>
#endif
namespace phoenix{

Void RenderState_obj::__construct(::phoenix::Renderer _renderer)
{
HX_STACK_FRAME("phoenix.RenderState","new",0x0858464e,"phoenix.RenderState.new","phoenix/RenderState.hx",5,0x46f51ca3)
HX_STACK_THIS(this)
HX_STACK_ARG(_renderer,"_renderer")
{
	HX_STACK_LINE(150)
	this->_last_depth_mask = true;
	HX_STACK_LINE(142)
	this->_last_line_width = (int)1;
	HX_STACK_LINE(134)
	this->_bound_texture_2D = null();
	HX_STACK_LINE(126)
	this->_active_texture = (int)-1;
	HX_STACK_LINE(118)
	this->_used_program = null();
	HX_STACK_LINE(103)
	this->_current_rbo = null();
	HX_STACK_LINE(88)
	this->_current_fbo = null();
	HX_STACK_LINE(53)
	this->depth_func = (int)-1;
	HX_STACK_LINE(9)
	this->depth_mask = true;
	HX_STACK_LINE(8)
	this->depth_test = false;
	HX_STACK_LINE(7)
	this->cull_face = false;
	HX_STACK_LINE(15)
	this->renderer = _renderer;
	HX_STACK_LINE(16)
	::phoenix::Rectangle _g = ::phoenix::Rectangle_obj::__new((int)0,(int)0,(int)0,(int)0);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(16)
	this->_viewport = _g;
}
;
	return null();
}

//RenderState_obj::~RenderState_obj() { }

Dynamic RenderState_obj::__CreateEmpty() { return  new RenderState_obj; }
hx::ObjectPtr< RenderState_obj > RenderState_obj::__new(::phoenix::Renderer _renderer)
{  hx::ObjectPtr< RenderState_obj > result = new RenderState_obj();
	result->__construct(_renderer);
	return result;}

Dynamic RenderState_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< RenderState_obj > result = new RenderState_obj();
	result->__construct(inArgs[0]);
	return result;}

Void RenderState_obj::enable( int what){
{
		HX_STACK_FRAME("phoenix.RenderState","enable",0xbe4b2155,"phoenix.RenderState.enable","phoenix/RenderState.hx",20,0x46f51ca3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(what,"what")
		HX_STACK_LINE(20)
		switch( (int)(what)){
			case (int)2884: {
				HX_STACK_LINE(22)
				if ((!(this->cull_face))){
					HX_STACK_LINE(23)
					this->cull_face = true;
					HX_STACK_LINE(24)
					::snow::platform::native::render::opengl::GL_obj::enable((int)2884);
				}
			}
			;break;
			case (int)2929: {
				HX_STACK_LINE(27)
				if ((::Luxe_obj::core->app->config->__Field(HX_CSTRING("render"),true)->__Field(HX_CSTRING("depth"),true))){
					HX_STACK_LINE(28)
					if ((!(this->depth_test))){
						HX_STACK_LINE(29)
						this->depth_test = true;
						HX_STACK_LINE(30)
						::snow::platform::native::render::opengl::GL_obj::enable((int)2929);
					}
				}
			}
			;break;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(RenderState_obj,enable,(void))

Void RenderState_obj::disable( int what){
{
		HX_STACK_FRAME("phoenix.RenderState","disable",0xf6996ed6,"phoenix.RenderState.disable","phoenix/RenderState.hx",37,0x46f51ca3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(what,"what")
		HX_STACK_LINE(37)
		switch( (int)(what)){
			case (int)2884: {
				HX_STACK_LINE(39)
				if ((this->cull_face)){
					HX_STACK_LINE(40)
					this->cull_face = false;
					HX_STACK_LINE(41)
					::snow::platform::native::render::opengl::GL_obj::disable((int)2884);
				}
			}
			;break;
			case (int)2929: {
				HX_STACK_LINE(44)
				if ((::Luxe_obj::core->app->config->__Field(HX_CSTRING("render"),true)->__Field(HX_CSTRING("depth"),true))){
					HX_STACK_LINE(45)
					if ((this->depth_test)){
						HX_STACK_LINE(46)
						this->depth_test = false;
						HX_STACK_LINE(47)
						::snow::platform::native::render::opengl::GL_obj::disable((int)2929);
					}
				}
			}
			;break;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(RenderState_obj,disable,(void))

Void RenderState_obj::depth_function( int what){
{
		HX_STACK_FRAME("phoenix.RenderState","depth_function",0x7ee58de6,"phoenix.RenderState.depth_function","phoenix/RenderState.hx",55,0x46f51ca3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(what,"what")
		HX_STACK_LINE(55)
		if (((this->depth_func != this->depth_func))){
			HX_STACK_LINE(56)
			::snow::platform::native::render::opengl::GL_obj::depthFunc(what);
			HX_STACK_LINE(57)
			this->depth_func = what;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(RenderState_obj,depth_function,(void))

Void RenderState_obj::viewport( Float x,Float y,Float w,Float h){
{
		HX_STACK_FRAME("phoenix.RenderState","viewport",0xf04897b8,"phoenix.RenderState.viewport","phoenix/RenderState.hx",63,0x46f51ca3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(w,"w")
		HX_STACK_ARG(h,"h")
		HX_STACK_LINE(63)
		if (((bool((bool((bool((this->_viewport->x != x)) || bool((this->_viewport->y != y)))) || bool((this->_viewport->w != w)))) || bool((this->_viewport->h != h))))){
			HX_STACK_LINE(70)
			this->_viewport->set_x(x);
			HX_STACK_LINE(71)
			this->_viewport->set_y(y);
			HX_STACK_LINE(72)
			this->_viewport->set_w(w);
			HX_STACK_LINE(73)
			this->_viewport->set_h(h);
			HX_STACK_LINE(80)
			Float _y = (this->renderer->target_size->y - ((y + h)));		HX_STACK_VAR(_y,"_y");
			HX_STACK_LINE(82)
			int _g = ::Std_obj::_int(x);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(82)
			int _g1 = ::Std_obj::_int(_y);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(82)
			int _g2 = ::Std_obj::_int(w);		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(82)
			int _g3 = ::Std_obj::_int(h);		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(82)
			::snow::platform::native::render::opengl::GL_obj::viewport(_g,_g1,_g2,_g3);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(RenderState_obj,viewport,(void))

Void RenderState_obj::bindFramebuffer( ::snow::platform::native::render::opengl::GLFBO buffer){
{
		HX_STACK_FRAME("phoenix.RenderState","bindFramebuffer",0xb7b6691e,"phoenix.RenderState.bindFramebuffer","phoenix/RenderState.hx",91,0x46f51ca3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(buffer,"buffer")
		HX_STACK_LINE(91)
		if (((this->_current_fbo != buffer))){
			HX_STACK_LINE(93)
			if (((buffer == null()))){
				HX_STACK_LINE(94)
				buffer = this->renderer->default_fbo;
			}
			HX_STACK_LINE(97)
			::snow::platform::native::render::opengl::GL_obj::bindFramebuffer((int)36160,buffer);
			HX_STACK_LINE(98)
			this->_current_fbo = buffer;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(RenderState_obj,bindFramebuffer,(void))

Void RenderState_obj::bindRenderbuffer( ::snow::platform::native::render::opengl::GLRBO buffer){
{
		HX_STACK_FRAME("phoenix.RenderState","bindRenderbuffer",0x8e71a385,"phoenix.RenderState.bindRenderbuffer","phoenix/RenderState.hx",106,0x46f51ca3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(buffer,"buffer")
		HX_STACK_LINE(106)
		if (((this->_current_rbo != buffer))){
			HX_STACK_LINE(108)
			if (((buffer == null()))){
				HX_STACK_LINE(109)
				buffer = this->renderer->default_rbo;
			}
			HX_STACK_LINE(112)
			::snow::platform::native::render::opengl::GL_obj::bindRenderbuffer((int)36161,buffer);
			HX_STACK_LINE(113)
			this->_current_rbo = buffer;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(RenderState_obj,bindRenderbuffer,(void))

Void RenderState_obj::useProgram( ::snow::platform::native::render::opengl::GLProgram program){
{
		HX_STACK_FRAME("phoenix.RenderState","useProgram",0xf236b0cf,"phoenix.RenderState.useProgram","phoenix/RenderState.hx",120,0x46f51ca3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(program,"program")
		HX_STACK_LINE(120)
		if (((this->_used_program != program))){
			HX_STACK_LINE(121)
			this->_used_program = program;
			HX_STACK_LINE(122)
			::snow::platform::native::render::opengl::GL_obj::useProgram(program);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(RenderState_obj,useProgram,(void))

Void RenderState_obj::activeTexture( int val){
{
		HX_STACK_FRAME("phoenix.RenderState","activeTexture",0x817a7f23,"phoenix.RenderState.activeTexture","phoenix/RenderState.hx",128,0x46f51ca3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(val,"val")
		HX_STACK_LINE(128)
		if (((this->_active_texture != val))){
			HX_STACK_LINE(129)
			::snow::platform::native::render::opengl::GL_obj::activeTexture(val);
			HX_STACK_LINE(130)
			this->_active_texture = val;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(RenderState_obj,activeTexture,(void))

Void RenderState_obj::bindTexture2D( ::snow::platform::native::render::opengl::GLTexture tex){
{
		HX_STACK_FRAME("phoenix.RenderState","bindTexture2D",0xa3c9575e,"phoenix.RenderState.bindTexture2D","phoenix/RenderState.hx",136,0x46f51ca3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(tex,"tex")
		HX_STACK_LINE(136)
		if (((this->_bound_texture_2D != tex))){
			HX_STACK_LINE(137)
			this->_bound_texture_2D = tex;
			HX_STACK_LINE(138)
			::snow::platform::native::render::opengl::GL_obj::bindTexture((int)3553,tex);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(RenderState_obj,bindTexture2D,(void))

Void RenderState_obj::lineWidth( Float _width){
{
		HX_STACK_FRAME("phoenix.RenderState","lineWidth",0xec9c55e0,"phoenix.RenderState.lineWidth","phoenix/RenderState.hx",144,0x46f51ca3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_width,"_width")
		HX_STACK_LINE(144)
		if (((this->_last_line_width != _width))){
			HX_STACK_LINE(145)
			this->_last_line_width = _width;
			HX_STACK_LINE(146)
			::snow::platform::native::render::opengl::GL_obj::lineWidth(_width);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(RenderState_obj,lineWidth,(void))

Void RenderState_obj::depthMask( bool _enable){
{
		HX_STACK_FRAME("phoenix.RenderState","depthMask",0x7a1837fd,"phoenix.RenderState.depthMask","phoenix/RenderState.hx",152,0x46f51ca3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_enable,"_enable")
		HX_STACK_LINE(152)
		if (((this->_last_depth_mask != _enable))){
			HX_STACK_LINE(153)
			this->_last_depth_mask = _enable;
			HX_STACK_LINE(154)
			::snow::platform::native::render::opengl::GL_obj::depthMask(_enable);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(RenderState_obj,depthMask,(void))


RenderState_obj::RenderState_obj()
{
}

void RenderState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(RenderState);
	HX_MARK_MEMBER_NAME(cull_face,"cull_face");
	HX_MARK_MEMBER_NAME(depth_test,"depth_test");
	HX_MARK_MEMBER_NAME(depth_mask,"depth_mask");
	HX_MARK_MEMBER_NAME(renderer,"renderer");
	HX_MARK_MEMBER_NAME(_viewport,"_viewport");
	HX_MARK_MEMBER_NAME(depth_func,"depth_func");
	HX_MARK_MEMBER_NAME(_current_fbo,"_current_fbo");
	HX_MARK_MEMBER_NAME(_current_rbo,"_current_rbo");
	HX_MARK_MEMBER_NAME(_used_program,"_used_program");
	HX_MARK_MEMBER_NAME(_active_texture,"_active_texture");
	HX_MARK_MEMBER_NAME(_bound_texture_2D,"_bound_texture_2D");
	HX_MARK_MEMBER_NAME(_last_line_width,"_last_line_width");
	HX_MARK_MEMBER_NAME(_last_depth_mask,"_last_depth_mask");
	HX_MARK_END_CLASS();
}

void RenderState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(cull_face,"cull_face");
	HX_VISIT_MEMBER_NAME(depth_test,"depth_test");
	HX_VISIT_MEMBER_NAME(depth_mask,"depth_mask");
	HX_VISIT_MEMBER_NAME(renderer,"renderer");
	HX_VISIT_MEMBER_NAME(_viewport,"_viewport");
	HX_VISIT_MEMBER_NAME(depth_func,"depth_func");
	HX_VISIT_MEMBER_NAME(_current_fbo,"_current_fbo");
	HX_VISIT_MEMBER_NAME(_current_rbo,"_current_rbo");
	HX_VISIT_MEMBER_NAME(_used_program,"_used_program");
	HX_VISIT_MEMBER_NAME(_active_texture,"_active_texture");
	HX_VISIT_MEMBER_NAME(_bound_texture_2D,"_bound_texture_2D");
	HX_VISIT_MEMBER_NAME(_last_line_width,"_last_line_width");
	HX_VISIT_MEMBER_NAME(_last_depth_mask,"_last_depth_mask");
}

Dynamic RenderState_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"enable") ) { return enable_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"disable") ) { return disable_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"renderer") ) { return renderer; }
		if (HX_FIELD_EQ(inName,"viewport") ) { return viewport_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"cull_face") ) { return cull_face; }
		if (HX_FIELD_EQ(inName,"_viewport") ) { return _viewport; }
		if (HX_FIELD_EQ(inName,"lineWidth") ) { return lineWidth_dyn(); }
		if (HX_FIELD_EQ(inName,"depthMask") ) { return depthMask_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"depth_test") ) { return depth_test; }
		if (HX_FIELD_EQ(inName,"depth_mask") ) { return depth_mask; }
		if (HX_FIELD_EQ(inName,"depth_func") ) { return depth_func; }
		if (HX_FIELD_EQ(inName,"useProgram") ) { return useProgram_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_current_fbo") ) { return _current_fbo; }
		if (HX_FIELD_EQ(inName,"_current_rbo") ) { return _current_rbo; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_used_program") ) { return _used_program; }
		if (HX_FIELD_EQ(inName,"activeTexture") ) { return activeTexture_dyn(); }
		if (HX_FIELD_EQ(inName,"bindTexture2D") ) { return bindTexture2D_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"depth_function") ) { return depth_function_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"bindFramebuffer") ) { return bindFramebuffer_dyn(); }
		if (HX_FIELD_EQ(inName,"_active_texture") ) { return _active_texture; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"bindRenderbuffer") ) { return bindRenderbuffer_dyn(); }
		if (HX_FIELD_EQ(inName,"_last_line_width") ) { return _last_line_width; }
		if (HX_FIELD_EQ(inName,"_last_depth_mask") ) { return _last_depth_mask; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_bound_texture_2D") ) { return _bound_texture_2D; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic RenderState_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"renderer") ) { renderer=inValue.Cast< ::phoenix::Renderer >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"cull_face") ) { cull_face=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_viewport") ) { _viewport=inValue.Cast< ::phoenix::Rectangle >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"depth_test") ) { depth_test=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"depth_mask") ) { depth_mask=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"depth_func") ) { depth_func=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_current_fbo") ) { _current_fbo=inValue.Cast< ::snow::platform::native::render::opengl::GLFBO >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_current_rbo") ) { _current_rbo=inValue.Cast< ::snow::platform::native::render::opengl::GLRBO >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_used_program") ) { _used_program=inValue.Cast< ::snow::platform::native::render::opengl::GLProgram >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_active_texture") ) { _active_texture=inValue.Cast< int >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_last_line_width") ) { _last_line_width=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_last_depth_mask") ) { _last_depth_mask=inValue.Cast< bool >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_bound_texture_2D") ) { _bound_texture_2D=inValue.Cast< ::snow::platform::native::render::opengl::GLTexture >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void RenderState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("cull_face"));
	outFields->push(HX_CSTRING("depth_test"));
	outFields->push(HX_CSTRING("depth_mask"));
	outFields->push(HX_CSTRING("renderer"));
	outFields->push(HX_CSTRING("_viewport"));
	outFields->push(HX_CSTRING("depth_func"));
	outFields->push(HX_CSTRING("_current_fbo"));
	outFields->push(HX_CSTRING("_current_rbo"));
	outFields->push(HX_CSTRING("_used_program"));
	outFields->push(HX_CSTRING("_active_texture"));
	outFields->push(HX_CSTRING("_bound_texture_2D"));
	outFields->push(HX_CSTRING("_last_line_width"));
	outFields->push(HX_CSTRING("_last_depth_mask"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(RenderState_obj,cull_face),HX_CSTRING("cull_face")},
	{hx::fsBool,(int)offsetof(RenderState_obj,depth_test),HX_CSTRING("depth_test")},
	{hx::fsBool,(int)offsetof(RenderState_obj,depth_mask),HX_CSTRING("depth_mask")},
	{hx::fsObject /*::phoenix::Renderer*/ ,(int)offsetof(RenderState_obj,renderer),HX_CSTRING("renderer")},
	{hx::fsObject /*::phoenix::Rectangle*/ ,(int)offsetof(RenderState_obj,_viewport),HX_CSTRING("_viewport")},
	{hx::fsInt,(int)offsetof(RenderState_obj,depth_func),HX_CSTRING("depth_func")},
	{hx::fsObject /*::snow::platform::native::render::opengl::GLFBO*/ ,(int)offsetof(RenderState_obj,_current_fbo),HX_CSTRING("_current_fbo")},
	{hx::fsObject /*::snow::platform::native::render::opengl::GLRBO*/ ,(int)offsetof(RenderState_obj,_current_rbo),HX_CSTRING("_current_rbo")},
	{hx::fsObject /*::snow::platform::native::render::opengl::GLProgram*/ ,(int)offsetof(RenderState_obj,_used_program),HX_CSTRING("_used_program")},
	{hx::fsInt,(int)offsetof(RenderState_obj,_active_texture),HX_CSTRING("_active_texture")},
	{hx::fsObject /*::snow::platform::native::render::opengl::GLTexture*/ ,(int)offsetof(RenderState_obj,_bound_texture_2D),HX_CSTRING("_bound_texture_2D")},
	{hx::fsFloat,(int)offsetof(RenderState_obj,_last_line_width),HX_CSTRING("_last_line_width")},
	{hx::fsBool,(int)offsetof(RenderState_obj,_last_depth_mask),HX_CSTRING("_last_depth_mask")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("cull_face"),
	HX_CSTRING("depth_test"),
	HX_CSTRING("depth_mask"),
	HX_CSTRING("renderer"),
	HX_CSTRING("_viewport"),
	HX_CSTRING("enable"),
	HX_CSTRING("disable"),
	HX_CSTRING("depth_func"),
	HX_CSTRING("depth_function"),
	HX_CSTRING("viewport"),
	HX_CSTRING("_current_fbo"),
	HX_CSTRING("bindFramebuffer"),
	HX_CSTRING("_current_rbo"),
	HX_CSTRING("bindRenderbuffer"),
	HX_CSTRING("_used_program"),
	HX_CSTRING("useProgram"),
	HX_CSTRING("_active_texture"),
	HX_CSTRING("activeTexture"),
	HX_CSTRING("_bound_texture_2D"),
	HX_CSTRING("bindTexture2D"),
	HX_CSTRING("_last_line_width"),
	HX_CSTRING("lineWidth"),
	HX_CSTRING("_last_depth_mask"),
	HX_CSTRING("depthMask"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(RenderState_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(RenderState_obj::__mClass,"__mClass");
};

#endif

Class RenderState_obj::__mClass;

void RenderState_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("phoenix.RenderState"), hx::TCanCast< RenderState_obj> ,sStaticFields,sMemberFields,
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

void RenderState_obj::__boot()
{
}

} // end namespace phoenix
