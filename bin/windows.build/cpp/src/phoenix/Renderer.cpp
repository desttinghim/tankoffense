#include <hxcpp.h>

#ifndef INCLUDED_Luxe
#include <Luxe.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_Resource
#include <haxe/Resource.h>
#endif
#ifndef INCLUDED_luxe_Core
#include <luxe/Core.h>
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
#ifndef INCLUDED_phoenix_Batcher
#include <phoenix/Batcher.h>
#endif
#ifndef INCLUDED_phoenix_BitmapFont
#include <phoenix/BitmapFont.h>
#endif
#ifndef INCLUDED_phoenix_Camera
#include <phoenix/Camera.h>
#endif
#ifndef INCLUDED_phoenix_Color
#include <phoenix/Color.h>
#endif
#ifndef INCLUDED_phoenix_FilterType
#include <phoenix/FilterType.h>
#endif
#ifndef INCLUDED_phoenix_RenderPath
#include <phoenix/RenderPath.h>
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
#ifndef INCLUDED_phoenix_RendererStats
#include <phoenix/RendererStats.h>
#endif
#ifndef INCLUDED_phoenix_Shader
#include <phoenix/Shader.h>
#endif
#ifndef INCLUDED_phoenix_Texture
#include <phoenix/Texture.h>
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
#ifndef INCLUDED_snow_platform_native_render_opengl_GLRBO
#include <snow/platform/native/render/opengl/GLRBO.h>
#endif
#ifndef INCLUDED_snow_window_Windowing
#include <snow/window/Windowing.h>
#endif
namespace phoenix{

Void Renderer_obj::__construct(::luxe::Core _core)
{
HX_STACK_FRAME("phoenix.Renderer","new",0x1fe39014,"phoenix.Renderer.new","phoenix/Renderer.hx",44,0x3d4c7b7b)
HX_STACK_THIS(this)
HX_STACK_ARG(_core,"_core")
{
	HX_STACK_LINE(71)
	this->stop_count = (int)0;
	HX_STACK_LINE(70)
	this->stop = false;
	HX_STACK_LINE(69)
	this->should_clear = true;
	HX_STACK_LINE(78)
	this->core = _core;
	HX_STACK_LINE(83)
	::snow::platform::native::render::opengl::GLFBO _g;		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(83)
	{
		HX_STACK_LINE(83)
		Dynamic _id = ::snow::platform::native::render::opengl::GL_obj::getParameter((int)36006);		HX_STACK_VAR(_id,"_id");
		HX_STACK_LINE(83)
		{
			HX_STACK_LINE(83)
			int _id1 = ::Std_obj::_int(_id);		HX_STACK_VAR(_id1,"_id1");
			HX_STACK_LINE(83)
			_g = ::snow::platform::native::render::opengl::GLFBO_obj::__new(_id1);
		}
	}
	HX_STACK_LINE(83)
	this->default_fbo = _g;
	HX_STACK_LINE(84)
	::snow::platform::native::render::opengl::GLRBO _g1;		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(84)
	{
		HX_STACK_LINE(84)
		Dynamic _id = ::snow::platform::native::render::opengl::GL_obj::getParameter((int)36007);		HX_STACK_VAR(_id,"_id");
		HX_STACK_LINE(84)
		{
			HX_STACK_LINE(84)
			int _id1 = ::Std_obj::_int(_id);		HX_STACK_VAR(_id1,"_id1");
			HX_STACK_LINE(84)
			_g1 = ::snow::platform::native::render::opengl::GLRBO_obj::__new(_id1);
		}
	}
	HX_STACK_LINE(84)
	this->default_rbo = _g1;
	HX_STACK_LINE(138)
	Dynamic();
}
;
	return null();
}

//Renderer_obj::~Renderer_obj() { }

Dynamic Renderer_obj::__CreateEmpty() { return  new Renderer_obj; }
hx::ObjectPtr< Renderer_obj > Renderer_obj::__new(::luxe::Core _core)
{  hx::ObjectPtr< Renderer_obj > result = new Renderer_obj();
	result->__construct(_core);
	return result;}

Dynamic Renderer_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Renderer_obj > result = new Renderer_obj();
	result->__construct(inArgs[0]);
	return result;}

Void Renderer_obj::init( ){
{
		HX_STACK_FRAME("phoenix.Renderer","init",0xc3f338dc,"phoenix.Renderer.init","phoenix/Renderer.hx",91,0x3d4c7b7b)
		HX_STACK_THIS(this)
		HX_STACK_LINE(93)
		::phoenix::RenderState _g = ::phoenix::RenderState_obj::__new(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(93)
		this->state = _g;
		HX_STACK_LINE(94)
		::phoenix::Color _g1 = ::phoenix::Color_obj::__new(null(),null(),null(),null())->rgb((int)1710618);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(94)
		this->clear_color = _g1;
		HX_STACK_LINE(95)
		::phoenix::RendererStats _g2 = ::phoenix::RendererStats_obj::__new();		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(95)
		this->stats = _g2;
		HX_STACK_LINE(96)
		this->batchers = Array_obj< ::Dynamic >::__new();
		HX_STACK_LINE(99)
		::phoenix::Vector _g3 = ::phoenix::Vector_obj::__new(::Luxe_obj::get_screen()->w,::Luxe_obj::get_screen()->h,null(),null());		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(99)
		this->target_size = _g3;
		HX_STACK_LINE(100)
		::phoenix::Camera _g4 = ::phoenix::Camera_obj::__new(null());		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(100)
		this->camera = _g4;
		HX_STACK_LINE(102)
		::phoenix::RenderPath _g5 = ::phoenix::RenderPath_obj::__new(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(102)
		this->default_render_path = _g5;
		HX_STACK_LINE(104)
		this->render_path = this->default_render_path;
		HX_STACK_LINE(107)
		this->create_default_shaders();
		HX_STACK_LINE(110)
		::phoenix::Batcher _g6 = ::phoenix::Batcher_obj::__new(hx::ObjectPtr<OBJ_>(this),HX_CSTRING("default batcher"));		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(110)
		this->batcher = _g6;
		HX_STACK_LINE(111)
		this->batcher->set_layer((int)1);
		HX_STACK_LINE(112)
		this->add_batch(this->batcher);
		HX_STACK_LINE(116)
		this->create_default_font();
		HX_STACK_LINE(120)
		if ((::Luxe_obj::core->app->config->__Field(HX_CSTRING("render"),true)->__Field(HX_CSTRING("depth"),true))){
			HX_STACK_LINE(122)
			this->state->enable((int)2929);
			HX_STACK_LINE(124)
			this->state->depth_function((int)515);
			HX_STACK_LINE(126)
			::snow::platform::native::render::opengl::GL_obj::clearDepth(1.0);
		}
		HX_STACK_LINE(130)
		::snow::platform::native::render::opengl::GL_obj::enable((int)3042);
		HX_STACK_LINE(131)
		::snow::platform::native::render::opengl::GL_obj::blendFunc((int)770,(int)771);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Renderer_obj,init,(void))

Void Renderer_obj::destroy( ){
{
		HX_STACK_FRAME("phoenix.Renderer","destroy",0xe481d6ae,"phoenix.Renderer.destroy","phoenix/Renderer.hx",140,0x3d4c7b7b)
		HX_STACK_THIS(this)
		HX_STACK_LINE(142)
		::phoenix::Color _g = ::phoenix::Color_obj::__new(null(),null(),null(),null())->rgb((int)16729099);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(142)
		this->clear(_g);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Renderer_obj,destroy,(void))

int Renderer_obj::sort_batchers( ::phoenix::Batcher a,::phoenix::Batcher b){
	HX_STACK_FRAME("phoenix.Renderer","sort_batchers",0x489f0ce1,"phoenix.Renderer.sort_batchers","phoenix/Renderer.hx",147,0x3d4c7b7b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(148)
	if (((a->layer < b->layer))){
		HX_STACK_LINE(148)
		return (int)-1;
	}
	HX_STACK_LINE(149)
	if (((a->layer > b->layer))){
		HX_STACK_LINE(149)
		return (int)1;
	}
	HX_STACK_LINE(150)
	if (((a->sequence < b->sequence))){
		HX_STACK_LINE(150)
		return (int)-1;
	}
	HX_STACK_LINE(151)
	if (((a->sequence > b->sequence))){
		HX_STACK_LINE(151)
		return (int)1;
	}
	HX_STACK_LINE(152)
	return (int)1;
}


HX_DEFINE_DYNAMIC_FUNC2(Renderer_obj,sort_batchers,return )

Void Renderer_obj::add_batch( ::phoenix::Batcher batch){
{
		HX_STACK_FRAME("phoenix.Renderer","add_batch",0xa2b26e90,"phoenix.Renderer.add_batch","phoenix/Renderer.hx",155,0x3d4c7b7b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(batch,"batch")
		HX_STACK_LINE(157)
		this->batchers->push(batch);
		HX_STACK_LINE(158)
		this->batchers->sort(this->sort_batchers_dyn());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Renderer_obj,add_batch,(void))

Void Renderer_obj::remove_batch( ::phoenix::Batcher batch){
{
		HX_STACK_FRAME("phoenix.Renderer","remove_batch",0x9e98000b,"phoenix.Renderer.remove_batch","phoenix/Renderer.hx",164,0x3d4c7b7b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(batch,"batch")
		HX_STACK_LINE(164)
		this->batchers->remove(batch);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Renderer_obj,remove_batch,(void))

::phoenix::Batcher Renderer_obj::create_batcher( Dynamic options){
	HX_STACK_FRAME("phoenix.Renderer","create_batcher",0xfc84f3f0,"phoenix.Renderer.create_batcher","phoenix/Renderer.hx",169,0x3d4c7b7b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(options,"options")
	HX_STACK_LINE(171)
	int _new_batcher_layer = (int)2;		HX_STACK_VAR(_new_batcher_layer,"_new_batcher_layer");
	HX_STACK_LINE(173)
	if (((options != null()))){
		HX_STACK_LINE(175)
		if (((options->__Field(HX_CSTRING("name"),true) == null()))){
			HX_STACK_LINE(176)
			options->__FieldRef(HX_CSTRING("name")) = HX_CSTRING("batcher");
		}
		HX_STACK_LINE(178)
		if (((options->__Field(HX_CSTRING("layer"),true) == null()))){
			HX_STACK_LINE(179)
			options->__FieldRef(HX_CSTRING("layer")) = _new_batcher_layer;
		}
		HX_STACK_LINE(181)
		if (((options->__Field(HX_CSTRING("camera"),true) == null()))){
			HX_STACK_LINE(182)
			::phoenix::Camera _g = ::phoenix::Camera_obj::__new(null());		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(182)
			options->__FieldRef(HX_CSTRING("camera")) = _g;
		}
	}
	else{
		HX_STACK_LINE(188)
		::phoenix::Camera _g1 = ::phoenix::Camera_obj::__new(null());		HX_STACK_VAR(_g1,"_g1");
		struct _Function_2_1{
			inline static Dynamic Block( ::phoenix::Camera &_g1,int &_new_batcher_layer){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Renderer.hx",186,0x3d4c7b7b)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("name") , HX_CSTRING("batcher"),false);
					__result->Add(HX_CSTRING("camera") , _g1,false);
					__result->Add(HX_CSTRING("layer") , _new_batcher_layer,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(186)
		Dynamic _g2 = _Function_2_1::Block(_g1,_new_batcher_layer);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(186)
		options = _g2;
	}
	HX_STACK_LINE(193)
	::phoenix::Batcher _batcher = ::phoenix::Batcher_obj::__new(hx::ObjectPtr<OBJ_>(this),options->__Field(HX_CSTRING("name"),true));		HX_STACK_VAR(_batcher,"_batcher");
	HX_STACK_LINE(194)
	_batcher->view = options->__Field(HX_CSTRING("camera"),true);
	HX_STACK_LINE(195)
	_batcher->set_layer(options->__Field(HX_CSTRING("layer"),true));
	HX_STACK_LINE(197)
	if (((bool((options->__Field(HX_CSTRING("no_add"),true) == null())) || bool((options->__Field(HX_CSTRING("no_add"),true) == false))))){
		HX_STACK_LINE(198)
		this->add_batch(_batcher);
	}
	HX_STACK_LINE(201)
	return _batcher;
}


HX_DEFINE_DYNAMIC_FUNC1(Renderer_obj,create_batcher,return )

Void Renderer_obj::clear( ::phoenix::Color _color){
{
		HX_STACK_FRAME("phoenix.Renderer","clear",0x3b218641,"phoenix.Renderer.clear","phoenix/Renderer.hx",206,0x3d4c7b7b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_color,"_color")
		HX_STACK_LINE(208)
		if (((_color == null()))){
			HX_STACK_LINE(209)
			_color = this->clear_color;
		}
		HX_STACK_LINE(212)
		::snow::platform::native::render::opengl::GL_obj::clearColor(_color->r,_color->g,_color->b,_color->a);
		HX_STACK_LINE(214)
		if ((::Luxe_obj::core->app->config->__Field(HX_CSTRING("render"),true)->__Field(HX_CSTRING("depth"),true))){
			HX_STACK_LINE(215)
			::snow::platform::native::render::opengl::GL_obj::clear((int)16640);
			HX_STACK_LINE(216)
			::snow::platform::native::render::opengl::GL_obj::clearDepth(1.0);
		}
		else{
			HX_STACK_LINE(218)
			::snow::platform::native::render::opengl::GL_obj::clear((int)16384);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Renderer_obj,clear,(void))

Void Renderer_obj::blend_mode( Dynamic __o__src_mode,hx::Null< int >  __o__dst_mode){
Dynamic _src_mode = __o__src_mode.Default(770);
int _dst_mode = __o__dst_mode.Default(771);
	HX_STACK_FRAME("phoenix.Renderer","blend_mode",0x5b8aa01d,"phoenix.Renderer.blend_mode","phoenix/Renderer.hx",225,0x3d4c7b7b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_src_mode,"_src_mode")
	HX_STACK_ARG(_dst_mode,"_dst_mode")
{
		HX_STACK_LINE(225)
		::snow::platform::native::render::opengl::GL_obj::blendFunc(_src_mode,_dst_mode);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Renderer_obj,blend_mode,(void))

Void Renderer_obj::blend_equation( Dynamic __o__equation){
Dynamic _equation = __o__equation.Default(32774);
	HX_STACK_FRAME("phoenix.Renderer","blend_equation",0x0d046d46,"phoenix.Renderer.blend_equation","phoenix/Renderer.hx",231,0x3d4c7b7b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_equation,"_equation")
{
		HX_STACK_LINE(231)
		::snow::platform::native::render::opengl::GL_obj::blendEquation(_equation);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Renderer_obj,blend_equation,(void))

Void Renderer_obj::internal_resized( int _w,int _h){
{
		HX_STACK_FRAME("phoenix.Renderer","internal_resized",0xd68aa17a,"phoenix.Renderer.internal_resized","phoenix/Renderer.hx",237,0x3d4c7b7b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_w,"_w")
		HX_STACK_ARG(_h,"_h")
		HX_STACK_LINE(239)
		::phoenix::RenderTexture _g = this->get_target();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(239)
		if (((_g == null()))){
			HX_STACK_LINE(240)
			::phoenix::Vector _this = this->target_size;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(240)
			bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
			HX_STACK_LINE(240)
			_this->ignore_listeners = true;
			HX_STACK_LINE(240)
			{
				HX_STACK_LINE(240)
				_this->x = _w;
				HX_STACK_LINE(240)
				if ((_this->_construct)){
					HX_STACK_LINE(240)
					_this->x;
				}
				else{
					HX_STACK_LINE(240)
					if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
						HX_STACK_LINE(240)
						_this->listen_x(_w);
					}
					HX_STACK_LINE(240)
					_this->x;
				}
			}
			HX_STACK_LINE(240)
			{
				HX_STACK_LINE(240)
				_this->y = _h;
				HX_STACK_LINE(240)
				if ((_this->_construct)){
					HX_STACK_LINE(240)
					_this->y;
				}
				else{
					HX_STACK_LINE(240)
					if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
						HX_STACK_LINE(240)
						_this->listen_y(_h);
					}
					HX_STACK_LINE(240)
					_this->y;
				}
			}
			HX_STACK_LINE(240)
			_this->ignore_listeners = prev;
			HX_STACK_LINE(240)
			if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
				HX_STACK_LINE(240)
				_this->listen_x(_this->x);
			}
			HX_STACK_LINE(240)
			if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
				HX_STACK_LINE(240)
				_this->listen_y(_this->y);
			}
			HX_STACK_LINE(240)
			_this;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Renderer_obj,internal_resized,(void))

Void Renderer_obj::process( ){
{
		HX_STACK_FRAME("phoenix.Renderer","process",0xb1464c23,"phoenix.Renderer.process","phoenix/Renderer.hx",247,0x3d4c7b7b)
		HX_STACK_THIS(this)
		HX_STACK_LINE(249)
		if ((this->stop)){
			HX_STACK_LINE(249)
			return null();
		}
		HX_STACK_LINE(251)
		if ((this->should_clear)){
			HX_STACK_LINE(252)
			this->clear(this->clear_color);
		}
		HX_STACK_LINE(255)
		this->stats->batchers = this->batchers->length;
		HX_STACK_LINE(256)
		this->stats->reset();
		HX_STACK_LINE(259)
		this->render_path->render(this->batchers,this->stats);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Renderer_obj,process,(void))

Void Renderer_obj::onresize( Dynamic e){
{
		HX_STACK_FRAME("phoenix.Renderer","onresize",0xefccb01f,"phoenix.Renderer.onresize","phoenix/Renderer.hx",268,0x3d4c7b7b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Renderer_obj,onresize,(void))

bool Renderer_obj::set_vsync( bool _vsync){
	HX_STACK_FRAME("phoenix.Renderer","set_vsync",0xda22f4e8,"phoenix.Renderer.set_vsync","phoenix/Renderer.hx",272,0x3d4c7b7b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_vsync,"_vsync")
	HX_STACK_LINE(274)
	::Luxe_obj::core->app->windowing->enable_vsync(_vsync);
	HX_STACK_LINE(276)
	return this->vsync = _vsync;
}


HX_DEFINE_DYNAMIC_FUNC1(Renderer_obj,set_vsync,return )

bool Renderer_obj::get_vsync( ){
	HX_STACK_FRAME("phoenix.Renderer","get_vsync",0xf6d208dc,"phoenix.Renderer.get_vsync","phoenix/Renderer.hx",282,0x3d4c7b7b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(282)
	return this->vsync;
}


HX_DEFINE_DYNAMIC_FUNC0(Renderer_obj,get_vsync,return )

::phoenix::RenderTexture Renderer_obj::get_target( ){
	HX_STACK_FRAME("phoenix.Renderer","get_target",0xd262c1e6,"phoenix.Renderer.get_target","phoenix/Renderer.hx",288,0x3d4c7b7b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(288)
	return this->target;
}


HX_DEFINE_DYNAMIC_FUNC0(Renderer_obj,get_target,return )

::phoenix::RenderTexture Renderer_obj::set_target( ::phoenix::RenderTexture _target){
	HX_STACK_FRAME("phoenix.Renderer","set_target",0xd5e0605a,"phoenix.Renderer.set_target","phoenix/Renderer.hx",292,0x3d4c7b7b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_target,"_target")
	HX_STACK_LINE(294)
	if (((_target != null()))){
		HX_STACK_LINE(296)
		{
			HX_STACK_LINE(296)
			::phoenix::Vector _this = this->target_size;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(296)
			Float _x = _target->width;		HX_STACK_VAR(_x,"_x");
			HX_STACK_LINE(296)
			_this->x = _x;
			HX_STACK_LINE(296)
			if ((_this->_construct)){
				HX_STACK_LINE(296)
				_this->x;
			}
			else{
				HX_STACK_LINE(296)
				if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
					HX_STACK_LINE(296)
					_this->listen_x(_x);
				}
				HX_STACK_LINE(296)
				_this->x;
			}
		}
		HX_STACK_LINE(297)
		{
			HX_STACK_LINE(297)
			::phoenix::Vector _this = this->target_size;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(297)
			Float _y = _target->height;		HX_STACK_VAR(_y,"_y");
			HX_STACK_LINE(297)
			_this->y = _y;
			HX_STACK_LINE(297)
			if ((_this->_construct)){
				HX_STACK_LINE(297)
				_this->y;
			}
			else{
				HX_STACK_LINE(297)
				if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
					HX_STACK_LINE(297)
					_this->listen_y(_y);
				}
				HX_STACK_LINE(297)
				_this->y;
			}
		}
		HX_STACK_LINE(299)
		this->state->bindFramebuffer(_target->fbo);
	}
	else{
		HX_STACK_LINE(303)
		{
			HX_STACK_LINE(303)
			::phoenix::Vector _this = this->target_size;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(303)
			Float _x = ::Luxe_obj::get_screen()->w;		HX_STACK_VAR(_x,"_x");
			HX_STACK_LINE(303)
			_this->x = _x;
			HX_STACK_LINE(303)
			if ((_this->_construct)){
				HX_STACK_LINE(303)
				_this->x;
			}
			else{
				HX_STACK_LINE(303)
				if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
					HX_STACK_LINE(303)
					_this->listen_x(_x);
				}
				HX_STACK_LINE(303)
				_this->x;
			}
		}
		HX_STACK_LINE(304)
		{
			HX_STACK_LINE(304)
			::phoenix::Vector _this = this->target_size;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(304)
			Float _y = ::Luxe_obj::get_screen()->h;		HX_STACK_VAR(_y,"_y");
			HX_STACK_LINE(304)
			_this->y = _y;
			HX_STACK_LINE(304)
			if ((_this->_construct)){
				HX_STACK_LINE(304)
				_this->y;
			}
			else{
				HX_STACK_LINE(304)
				if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
					HX_STACK_LINE(304)
					_this->listen_y(_y);
				}
				HX_STACK_LINE(304)
				_this->y;
			}
		}
		HX_STACK_LINE(306)
		this->state->bindFramebuffer(null());
	}
	HX_STACK_LINE(310)
	return this->target = _target;
}


HX_DEFINE_DYNAMIC_FUNC1(Renderer_obj,set_target,return )

Void Renderer_obj::create_default_shaders( ){
{
		HX_STACK_FRAME("phoenix.Renderer","create_default_shaders",0xf69f9f39,"phoenix.Renderer.create_default_shaders","phoenix/Renderer.hx",314,0x3d4c7b7b)
		HX_STACK_THIS(this)
		HX_STACK_LINE(318)
		::String vert = ::haxe::Resource_obj::getString(HX_CSTRING("default.vert.glsl"));		HX_STACK_VAR(vert,"vert");
		HX_STACK_LINE(319)
		::String frag = ::haxe::Resource_obj::getString(HX_CSTRING("default.frag.glsl"));		HX_STACK_VAR(frag,"frag");
		HX_STACK_LINE(320)
		::String frag_textured = ::haxe::Resource_obj::getString(HX_CSTRING("default.frag.textured.glsl"));		HX_STACK_VAR(frag_textured,"frag_textured");
		HX_STACK_LINE(321)
		::String frag_bitmapfont = ::haxe::Resource_obj::getString(HX_CSTRING("default.frag.bitmapfont.glsl"));		HX_STACK_VAR(frag_bitmapfont,"frag_bitmapfont");
		HX_STACK_LINE(334)
		::phoenix::Shader _plain = ::phoenix::Shader_obj::__new(this->core->resources);		HX_STACK_VAR(_plain,"_plain");
		HX_STACK_LINE(335)
		::phoenix::Shader _textured = ::phoenix::Shader_obj::__new(this->core->resources);		HX_STACK_VAR(_textured,"_textured");
		HX_STACK_LINE(336)
		::phoenix::Shader _font = ::phoenix::Shader_obj::__new(this->core->resources);		HX_STACK_VAR(_font,"_font");
		HX_STACK_LINE(340)
		::String _dvs = HX_CSTRING("default vertex shader");		HX_STACK_VAR(_dvs,"_dvs");
		HX_STACK_LINE(342)
		_plain->id = HX_CSTRING("default_shader");
		HX_STACK_LINE(343)
		_textured->id = HX_CSTRING("default_shader_textured");
		HX_STACK_LINE(344)
		_font->id = HX_CSTRING("default_shader_bitmapfont");
		HX_STACK_LINE(348)
		_plain->from_string(vert,frag,_dvs,HX_CSTRING("default fragment shader"),false);
		HX_STACK_LINE(349)
		_textured->from_string(vert,frag_textured,_dvs,HX_CSTRING("default textured shader"),false);
		HX_STACK_LINE(350)
		_font->from_string(vert,frag_bitmapfont,_dvs,HX_CSTRING("default bitmapfont shader"),false);
		struct _Function_1_1{
			inline static Dynamic Block( ::String &frag,::phoenix::Shader &_plain,::phoenix::Shader &_font,::String &frag_textured,::phoenix::Shader &_textured,::String &vert,::String &frag_bitmapfont){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Renderer.hx",354,0x3d4c7b7b)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					struct _Function_2_1{
						inline static Dynamic Block( ::String &frag,::phoenix::Shader &_plain,::String &vert){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Renderer.hx",355,0x3d4c7b7b)
							{
								hx::Anon __result = hx::Anon_obj::Create();
								__result->Add(HX_CSTRING("shader") , _plain,false);
								struct _Function_3_1{
									inline static Dynamic Block( ::String &frag,::String &vert){
										HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Renderer.hx",355,0x3d4c7b7b)
										{
											hx::Anon __result = hx::Anon_obj::Create();
											__result->Add(HX_CSTRING("vert") , vert,false);
											__result->Add(HX_CSTRING("frag") , frag,false);
											return __result;
										}
										return null();
									}
								};
								__result->Add(HX_CSTRING("source") , _Function_3_1::Block(frag,vert),false);
								return __result;
							}
							return null();
						}
					};
					__result->Add(HX_CSTRING("plain") , _Function_2_1::Block(frag,_plain,vert),false);
					struct _Function_2_2{
						inline static Dynamic Block( ::String &frag_textured,::phoenix::Shader &_textured,::String &vert){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Renderer.hx",356,0x3d4c7b7b)
							{
								hx::Anon __result = hx::Anon_obj::Create();
								__result->Add(HX_CSTRING("shader") , _textured,false);
								struct _Function_3_1{
									inline static Dynamic Block( ::String &frag_textured,::String &vert){
										HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Renderer.hx",356,0x3d4c7b7b)
										{
											hx::Anon __result = hx::Anon_obj::Create();
											__result->Add(HX_CSTRING("vert") , vert,false);
											__result->Add(HX_CSTRING("frag") , frag_textured,false);
											return __result;
										}
										return null();
									}
								};
								__result->Add(HX_CSTRING("source") , _Function_3_1::Block(frag_textured,vert),false);
								return __result;
							}
							return null();
						}
					};
					__result->Add(HX_CSTRING("textured") , _Function_2_2::Block(frag_textured,_textured,vert),false);
					struct _Function_2_3{
						inline static Dynamic Block( ::phoenix::Shader &_font,::String &vert,::String &frag_bitmapfont){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Renderer.hx",357,0x3d4c7b7b)
							{
								hx::Anon __result = hx::Anon_obj::Create();
								__result->Add(HX_CSTRING("shader") , _font,false);
								struct _Function_3_1{
									inline static Dynamic Block( ::String &vert,::String &frag_bitmapfont){
										HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Renderer.hx",357,0x3d4c7b7b)
										{
											hx::Anon __result = hx::Anon_obj::Create();
											__result->Add(HX_CSTRING("vert") , vert,false);
											__result->Add(HX_CSTRING("frag") , frag_bitmapfont,false);
											return __result;
										}
										return null();
									}
								};
								__result->Add(HX_CSTRING("source") , _Function_3_1::Block(vert,frag_bitmapfont),false);
								return __result;
							}
							return null();
						}
					};
					__result->Add(HX_CSTRING("bitmapfont") , _Function_2_3::Block(_font,vert,frag_bitmapfont),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(354)
		this->shaders = _Function_1_1::Block(frag,_plain,_font,frag_textured,_textured,vert,frag_bitmapfont);
		HX_STACK_LINE(138)
		Dynamic();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Renderer_obj,create_default_shaders,(void))

Void Renderer_obj::create_default_font( ){
{
		HX_STACK_FRAME("phoenix.Renderer","create_default_font",0xfe822b64,"phoenix.Renderer.create_default_font","phoenix/Renderer.hx",364,0x3d4c7b7b)
		HX_STACK_THIS(this)
		struct _Function_1_1{
			inline static Dynamic Block( hx::ObjectPtr< ::phoenix::Renderer_obj > __this){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Renderer.hx",368,0x3d4c7b7b)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("resources") , __this->core->resources,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(368)
		::phoenix::BitmapFont _g = ::phoenix::BitmapFont_obj::__new(_Function_1_1::Block(this));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(368)
		this->font = _g;
		HX_STACK_LINE(371)
		::phoenix::Texture _font_texture = ::phoenix::Texture_obj::load_from_resource(HX_CSTRING("default.png"),null());		HX_STACK_VAR(_font_texture,"_font_texture");
		HX_STACK_LINE(372)
		_font_texture->set_filter_min(::phoenix::FilterType_obj::linear);
		HX_STACK_LINE(375)
		::String _g1 = ::haxe::Resource_obj::getString(HX_CSTRING("default.fnt"));		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(375)
		this->font->from_string(HX_CSTRING("default.fnt"),_g1,HX_CSTRING(""),null(),Array_obj< ::Dynamic >::__new().Add(_font_texture),null());
		HX_STACK_LINE(138)
		Dynamic();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Renderer_obj,create_default_font,(void))


Renderer_obj::Renderer_obj()
{
}

void Renderer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Renderer);
	HX_MARK_MEMBER_NAME(batchers,"batchers");
	HX_MARK_MEMBER_NAME(core,"core");
	HX_MARK_MEMBER_NAME(state,"state");
	HX_MARK_MEMBER_NAME(default_fbo,"default_fbo");
	HX_MARK_MEMBER_NAME(default_rbo,"default_rbo");
	HX_MARK_MEMBER_NAME(shaders,"shaders");
	HX_MARK_MEMBER_NAME(batcher,"batcher");
	HX_MARK_MEMBER_NAME(camera,"camera");
	HX_MARK_MEMBER_NAME(font,"font");
	HX_MARK_MEMBER_NAME(render_path,"render_path");
	HX_MARK_MEMBER_NAME(default_render_path,"default_render_path");
	HX_MARK_MEMBER_NAME(vsync,"vsync");
	HX_MARK_MEMBER_NAME(target,"target");
	HX_MARK_MEMBER_NAME(target_size,"target_size");
	HX_MARK_MEMBER_NAME(should_clear,"should_clear");
	HX_MARK_MEMBER_NAME(stop,"stop");
	HX_MARK_MEMBER_NAME(stop_count,"stop_count");
	HX_MARK_MEMBER_NAME(clear_color,"clear_color");
	HX_MARK_MEMBER_NAME(stats,"stats");
	HX_MARK_END_CLASS();
}

void Renderer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(batchers,"batchers");
	HX_VISIT_MEMBER_NAME(core,"core");
	HX_VISIT_MEMBER_NAME(state,"state");
	HX_VISIT_MEMBER_NAME(default_fbo,"default_fbo");
	HX_VISIT_MEMBER_NAME(default_rbo,"default_rbo");
	HX_VISIT_MEMBER_NAME(shaders,"shaders");
	HX_VISIT_MEMBER_NAME(batcher,"batcher");
	HX_VISIT_MEMBER_NAME(camera,"camera");
	HX_VISIT_MEMBER_NAME(font,"font");
	HX_VISIT_MEMBER_NAME(render_path,"render_path");
	HX_VISIT_MEMBER_NAME(default_render_path,"default_render_path");
	HX_VISIT_MEMBER_NAME(vsync,"vsync");
	HX_VISIT_MEMBER_NAME(target,"target");
	HX_VISIT_MEMBER_NAME(target_size,"target_size");
	HX_VISIT_MEMBER_NAME(should_clear,"should_clear");
	HX_VISIT_MEMBER_NAME(stop,"stop");
	HX_VISIT_MEMBER_NAME(stop_count,"stop_count");
	HX_VISIT_MEMBER_NAME(clear_color,"clear_color");
	HX_VISIT_MEMBER_NAME(stats,"stats");
}

Dynamic Renderer_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"core") ) { return core; }
		if (HX_FIELD_EQ(inName,"font") ) { return font; }
		if (HX_FIELD_EQ(inName,"stop") ) { return stop; }
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"state") ) { return state; }
		if (HX_FIELD_EQ(inName,"vsync") ) { return inCallProp ? get_vsync() : vsync; }
		if (HX_FIELD_EQ(inName,"stats") ) { return stats; }
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"camera") ) { return camera; }
		if (HX_FIELD_EQ(inName,"target") ) { return inCallProp ? get_target() : target; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"shaders") ) { return shaders; }
		if (HX_FIELD_EQ(inName,"batcher") ) { return batcher; }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"process") ) { return process_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"batchers") ) { return batchers; }
		if (HX_FIELD_EQ(inName,"onresize") ) { return onresize_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"add_batch") ) { return add_batch_dyn(); }
		if (HX_FIELD_EQ(inName,"set_vsync") ) { return set_vsync_dyn(); }
		if (HX_FIELD_EQ(inName,"get_vsync") ) { return get_vsync_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"stop_count") ) { return stop_count; }
		if (HX_FIELD_EQ(inName,"blend_mode") ) { return blend_mode_dyn(); }
		if (HX_FIELD_EQ(inName,"get_target") ) { return get_target_dyn(); }
		if (HX_FIELD_EQ(inName,"set_target") ) { return set_target_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"default_fbo") ) { return default_fbo; }
		if (HX_FIELD_EQ(inName,"default_rbo") ) { return default_rbo; }
		if (HX_FIELD_EQ(inName,"render_path") ) { return render_path; }
		if (HX_FIELD_EQ(inName,"target_size") ) { return target_size; }
		if (HX_FIELD_EQ(inName,"clear_color") ) { return clear_color; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"should_clear") ) { return should_clear; }
		if (HX_FIELD_EQ(inName,"remove_batch") ) { return remove_batch_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"sort_batchers") ) { return sort_batchers_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"create_batcher") ) { return create_batcher_dyn(); }
		if (HX_FIELD_EQ(inName,"blend_equation") ) { return blend_equation_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"internal_resized") ) { return internal_resized_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"default_render_path") ) { return default_render_path; }
		if (HX_FIELD_EQ(inName,"create_default_font") ) { return create_default_font_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"create_default_shaders") ) { return create_default_shaders_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Renderer_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"core") ) { core=inValue.Cast< ::luxe::Core >(); return inValue; }
		if (HX_FIELD_EQ(inName,"font") ) { font=inValue.Cast< ::phoenix::BitmapFont >(); return inValue; }
		if (HX_FIELD_EQ(inName,"stop") ) { stop=inValue.Cast< bool >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"state") ) { state=inValue.Cast< ::phoenix::RenderState >(); return inValue; }
		if (HX_FIELD_EQ(inName,"vsync") ) { if (inCallProp) return set_vsync(inValue);vsync=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"stats") ) { stats=inValue.Cast< ::phoenix::RendererStats >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"camera") ) { camera=inValue.Cast< ::phoenix::Camera >(); return inValue; }
		if (HX_FIELD_EQ(inName,"target") ) { if (inCallProp) return set_target(inValue);target=inValue.Cast< ::phoenix::RenderTexture >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"shaders") ) { shaders=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"batcher") ) { batcher=inValue.Cast< ::phoenix::Batcher >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"batchers") ) { batchers=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"stop_count") ) { stop_count=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"default_fbo") ) { default_fbo=inValue.Cast< ::snow::platform::native::render::opengl::GLFBO >(); return inValue; }
		if (HX_FIELD_EQ(inName,"default_rbo") ) { default_rbo=inValue.Cast< ::snow::platform::native::render::opengl::GLRBO >(); return inValue; }
		if (HX_FIELD_EQ(inName,"render_path") ) { render_path=inValue.Cast< ::phoenix::RenderPath >(); return inValue; }
		if (HX_FIELD_EQ(inName,"target_size") ) { target_size=inValue.Cast< ::phoenix::Vector >(); return inValue; }
		if (HX_FIELD_EQ(inName,"clear_color") ) { clear_color=inValue.Cast< ::phoenix::Color >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"should_clear") ) { should_clear=inValue.Cast< bool >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"default_render_path") ) { default_render_path=inValue.Cast< ::phoenix::RenderPath >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Renderer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("batchers"));
	outFields->push(HX_CSTRING("core"));
	outFields->push(HX_CSTRING("state"));
	outFields->push(HX_CSTRING("default_fbo"));
	outFields->push(HX_CSTRING("default_rbo"));
	outFields->push(HX_CSTRING("shaders"));
	outFields->push(HX_CSTRING("batcher"));
	outFields->push(HX_CSTRING("camera"));
	outFields->push(HX_CSTRING("font"));
	outFields->push(HX_CSTRING("render_path"));
	outFields->push(HX_CSTRING("default_render_path"));
	outFields->push(HX_CSTRING("vsync"));
	outFields->push(HX_CSTRING("target"));
	outFields->push(HX_CSTRING("target_size"));
	outFields->push(HX_CSTRING("should_clear"));
	outFields->push(HX_CSTRING("stop"));
	outFields->push(HX_CSTRING("stop_count"));
	outFields->push(HX_CSTRING("clear_color"));
	outFields->push(HX_CSTRING("stats"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Renderer_obj,batchers),HX_CSTRING("batchers")},
	{hx::fsObject /*::luxe::Core*/ ,(int)offsetof(Renderer_obj,core),HX_CSTRING("core")},
	{hx::fsObject /*::phoenix::RenderState*/ ,(int)offsetof(Renderer_obj,state),HX_CSTRING("state")},
	{hx::fsObject /*::snow::platform::native::render::opengl::GLFBO*/ ,(int)offsetof(Renderer_obj,default_fbo),HX_CSTRING("default_fbo")},
	{hx::fsObject /*::snow::platform::native::render::opengl::GLRBO*/ ,(int)offsetof(Renderer_obj,default_rbo),HX_CSTRING("default_rbo")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Renderer_obj,shaders),HX_CSTRING("shaders")},
	{hx::fsObject /*::phoenix::Batcher*/ ,(int)offsetof(Renderer_obj,batcher),HX_CSTRING("batcher")},
	{hx::fsObject /*::phoenix::Camera*/ ,(int)offsetof(Renderer_obj,camera),HX_CSTRING("camera")},
	{hx::fsObject /*::phoenix::BitmapFont*/ ,(int)offsetof(Renderer_obj,font),HX_CSTRING("font")},
	{hx::fsObject /*::phoenix::RenderPath*/ ,(int)offsetof(Renderer_obj,render_path),HX_CSTRING("render_path")},
	{hx::fsObject /*::phoenix::RenderPath*/ ,(int)offsetof(Renderer_obj,default_render_path),HX_CSTRING("default_render_path")},
	{hx::fsBool,(int)offsetof(Renderer_obj,vsync),HX_CSTRING("vsync")},
	{hx::fsObject /*::phoenix::RenderTexture*/ ,(int)offsetof(Renderer_obj,target),HX_CSTRING("target")},
	{hx::fsObject /*::phoenix::Vector*/ ,(int)offsetof(Renderer_obj,target_size),HX_CSTRING("target_size")},
	{hx::fsBool,(int)offsetof(Renderer_obj,should_clear),HX_CSTRING("should_clear")},
	{hx::fsBool,(int)offsetof(Renderer_obj,stop),HX_CSTRING("stop")},
	{hx::fsInt,(int)offsetof(Renderer_obj,stop_count),HX_CSTRING("stop_count")},
	{hx::fsObject /*::phoenix::Color*/ ,(int)offsetof(Renderer_obj,clear_color),HX_CSTRING("clear_color")},
	{hx::fsObject /*::phoenix::RendererStats*/ ,(int)offsetof(Renderer_obj,stats),HX_CSTRING("stats")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("batchers"),
	HX_CSTRING("core"),
	HX_CSTRING("state"),
	HX_CSTRING("default_fbo"),
	HX_CSTRING("default_rbo"),
	HX_CSTRING("shaders"),
	HX_CSTRING("batcher"),
	HX_CSTRING("camera"),
	HX_CSTRING("font"),
	HX_CSTRING("render_path"),
	HX_CSTRING("default_render_path"),
	HX_CSTRING("vsync"),
	HX_CSTRING("target"),
	HX_CSTRING("target_size"),
	HX_CSTRING("should_clear"),
	HX_CSTRING("stop"),
	HX_CSTRING("stop_count"),
	HX_CSTRING("clear_color"),
	HX_CSTRING("stats"),
	HX_CSTRING("init"),
	HX_CSTRING("destroy"),
	HX_CSTRING("sort_batchers"),
	HX_CSTRING("add_batch"),
	HX_CSTRING("remove_batch"),
	HX_CSTRING("create_batcher"),
	HX_CSTRING("clear"),
	HX_CSTRING("blend_mode"),
	HX_CSTRING("blend_equation"),
	HX_CSTRING("internal_resized"),
	HX_CSTRING("process"),
	HX_CSTRING("onresize"),
	HX_CSTRING("set_vsync"),
	HX_CSTRING("get_vsync"),
	HX_CSTRING("get_target"),
	HX_CSTRING("set_target"),
	HX_CSTRING("create_default_shaders"),
	HX_CSTRING("create_default_font"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Renderer_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Renderer_obj::__mClass,"__mClass");
};

#endif

Class Renderer_obj::__mClass;

void Renderer_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("phoenix.Renderer"), hx::TCanCast< Renderer_obj> ,sStaticFields,sMemberFields,
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

void Renderer_obj::__boot()
{
}

} // end namespace phoenix
