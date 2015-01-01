#include <hxcpp.h>

#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_snow_CoreBinding
#include <snow/CoreBinding.h>
#endif
#ifndef INCLUDED_snow_Snow
#include <snow/Snow.h>
#endif
#ifndef INCLUDED_snow_platform_native_Core
#include <snow/platform/native/Core.h>
#endif
#ifndef INCLUDED_snow_platform_native_render_opengl_GL
#include <snow/platform/native/render/opengl/GL.h>
#endif
#ifndef INCLUDED_snow_platform_native_window_WindowSystem
#include <snow/platform/native/window/WindowSystem.h>
#endif
#ifndef INCLUDED_snow_platform_native_window_sdl_WindowSystem
#include <snow/platform/native/window/sdl/WindowSystem.h>
#endif
#ifndef INCLUDED_snow_utils_AbstractClass
#include <snow/utils/AbstractClass.h>
#endif
#ifndef INCLUDED_snow_window_Window
#include <snow/window/Window.h>
#endif
#ifndef INCLUDED_snow_window_WindowSystemBinding
#include <snow/window/WindowSystemBinding.h>
#endif
#ifndef INCLUDED_snow_window_Windowing
#include <snow/window/Windowing.h>
#endif
namespace snow{
namespace window{

Void Window_obj::__construct(::snow::window::Windowing _manager,Dynamic _config)
{
HX_STACK_FRAME("snow.window.Window","new",0x613c7415,"snow.window.Window.new","snow/window/Window.hx",15,0x9e5eaedb)
HX_STACK_THIS(this)
HX_STACK_ARG(_manager,"_manager")
HX_STACK_ARG(_config,"_config")
{
	HX_STACK_LINE(64)
	this->internal_resize = false;
	HX_STACK_LINE(63)
	this->internal_position = false;
	HX_STACK_LINE(62)
	this->minimized = false;
	HX_STACK_LINE(58)
	this->closed = true;
	HX_STACK_LINE(56)
	this->auto_render = true;
	HX_STACK_LINE(54)
	this->auto_swap = true;
	HX_STACK_LINE(46)
	this->height = (int)0;
	HX_STACK_LINE(45)
	this->width = (int)0;
	HX_STACK_LINE(44)
	this->y = (int)0;
	HX_STACK_LINE(43)
	this->x = (int)0;
	HX_STACK_LINE(40)
	this->fullscreen = false;
	HX_STACK_LINE(38)
	this->grab = false;
	HX_STACK_LINE(36)
	this->bordered = true;
	HX_STACK_LINE(34)
	this->title = HX_CSTRING("snow window");
	struct _Function_1_1{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","snow/window/Window.hx",68,0x9e5eaedb)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("x") , (int)0,false);
				__result->Add(HX_CSTRING("y") , (int)0,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(68)
	this->set_max_size(_Function_1_1::Block());
	struct _Function_1_2{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","snow/window/Window.hx",69,0x9e5eaedb)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("x") , (int)0,false);
				__result->Add(HX_CSTRING("y") , (int)0,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(69)
	this->set_min_size(_Function_1_2::Block());
	HX_STACK_LINE(71)
	this->manager = _manager;
	HX_STACK_LINE(72)
	this->asked_config = _config;
	HX_STACK_LINE(73)
	this->config = _config;
	HX_STACK_LINE(76)
	if (((this->config->__Field(HX_CSTRING("x"),true) == null()))){
		HX_STACK_LINE(77)
		this->config->__FieldRef(HX_CSTRING("x")) = (int)536805376;
	}
	HX_STACK_LINE(80)
	if (((this->config->__Field(HX_CSTRING("y"),true) == null()))){
		HX_STACK_LINE(81)
		this->config->__FieldRef(HX_CSTRING("y")) = (int)536805376;
	}
	HX_STACK_LINE(84)
	this->manager->platform->create(_manager->lib->config->__Field(HX_CSTRING("render"),true),_config,this->on_window_created_dyn());
}
;
	return null();
}

//Window_obj::~Window_obj() { }

Dynamic Window_obj::__CreateEmpty() { return  new Window_obj; }
hx::ObjectPtr< Window_obj > Window_obj::__new(::snow::window::Windowing _manager,Dynamic _config)
{  hx::ObjectPtr< Window_obj > result = new Window_obj();
	result->__construct(_manager,_config);
	return result;}

Dynamic Window_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Window_obj > result = new Window_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

Void Window_obj::on_window_created( Dynamic _handle,int _id,Dynamic _configs){
{
		HX_STACK_FRAME("snow.window.Window","on_window_created",0xc69eec2e,"snow.window.Window.on_window_created","snow/window/Window.hx",88,0x9e5eaedb)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_handle,"_handle")
		HX_STACK_ARG(_id,"_id")
		HX_STACK_ARG(_configs,"_configs")
		HX_STACK_LINE(90)
		::haxe::Log_obj::trace(_configs,hx::SourceInfo(HX_CSTRING("Window.hx"),90,HX_CSTRING("snow.window.Window"),HX_CSTRING("on_window_created")));
		HX_STACK_LINE(92)
		this->id = _id;
		HX_STACK_LINE(93)
		this->handle = _handle;
		HX_STACK_LINE(95)
		if (((this->handle == null()))){
			HX_STACK_LINE(96)
			::haxe::Log_obj::trace(HX_CSTRING("   i / window / failed to create window"),hx::SourceInfo(HX_CSTRING("Window.hx"),96,HX_CSTRING("snow.window.Window"),HX_CSTRING("on_window_created")));
			HX_STACK_LINE(97)
			return null();
		}
		HX_STACK_LINE(100)
		this->closed = false;
		HX_STACK_LINE(102)
		this->config = _configs->__Field(HX_CSTRING("config"),true);
		HX_STACK_LINE(104)
		this->manager->lib->config->__FieldRef(HX_CSTRING("render")) = _configs->__Field(HX_CSTRING("render_config"),true);
		HX_STACK_LINE(108)
		this->internal_position = true;
		HX_STACK_LINE(109)
		this->set_x(this->config->__Field(HX_CSTRING("x"),true));
		HX_STACK_LINE(110)
		this->set_y(this->config->__Field(HX_CSTRING("y"),true));
		HX_STACK_LINE(111)
		this->internal_position = false;
		HX_STACK_LINE(113)
		this->internal_resize = true;
		HX_STACK_LINE(114)
		this->set_width(this->config->__Field(HX_CSTRING("width"),true));
		HX_STACK_LINE(115)
		this->set_height(this->config->__Field(HX_CSTRING("height"),true));
		HX_STACK_LINE(116)
		this->internal_resize = false;
		HX_STACK_LINE(125)
		Float _g = ::snow::Snow_obj::core->timestamp();		HX_STACK_VAR(_g,"_g");
		struct _Function_1_1{
			inline static Dynamic Block( Float &_g,int &_id){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","snow/window/Window.hx",122,0x9e5eaedb)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("type") , (int)1,false);
					__result->Add(HX_CSTRING("window_id") , _id,false);
					__result->Add(HX_CSTRING("timestamp") , _g,false);
					struct _Function_2_1{
						inline static Dynamic Block( ){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","snow/window/Window.hx",126,0x9e5eaedb)
							{
								hx::Anon __result = hx::Anon_obj::Create();
								return __result;
							}
							return null();
						}
					};
					__result->Add(HX_CSTRING("event") , _Function_2_1::Block(),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(122)
		Dynamic _g1 = _Function_1_1::Block(_g,_id);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(122)
		this->on_event(_g1);
		HX_STACK_LINE(136)
		Dynamic();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Window_obj,on_window_created,(void))

Void Window_obj::on_event( Dynamic _event){
{
		HX_STACK_FRAME("snow.window.Window","on_event",0xfd455de5,"snow.window.Window.on_event","snow/window/Window.hx",134,0x9e5eaedb)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_event,"_event")
		HX_STACK_LINE(138)
		{
			HX_STACK_LINE(138)
			Dynamic _g = _event->__Field(HX_CSTRING("type"),true);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(138)
			switch( (int)(_g)){
				case (int)5: {
					HX_STACK_LINE(142)
					this->internal_position = true;
					HX_STACK_LINE(143)
					this->set_position(_event->__Field(HX_CSTRING("event"),true)->__Field(HX_CSTRING("x"),true),_event->__Field(HX_CSTRING("event"),true)->__Field(HX_CSTRING("y"),true));
					HX_STACK_LINE(144)
					this->internal_position = false;
				}
				;break;
				case (int)6: {
					HX_STACK_LINE(150)
					this->internal_resize = true;
					HX_STACK_LINE(151)
					this->set_size(_event->__Field(HX_CSTRING("event"),true)->__Field(HX_CSTRING("x"),true),_event->__Field(HX_CSTRING("event"),true)->__Field(HX_CSTRING("y"),true));
					HX_STACK_LINE(152)
					this->internal_resize = false;
				}
				;break;
				case (int)7: {
					HX_STACK_LINE(158)
					this->internal_resize = true;
					HX_STACK_LINE(159)
					this->set_size(_event->__Field(HX_CSTRING("event"),true)->__Field(HX_CSTRING("x"),true),_event->__Field(HX_CSTRING("event"),true)->__Field(HX_CSTRING("y"),true));
					HX_STACK_LINE(160)
					this->internal_resize = false;
				}
				;break;
				case (int)8: {
					HX_STACK_LINE(166)
					this->minimized = true;
				}
				;break;
				case (int)10: {
					HX_STACK_LINE(172)
					this->minimized = false;
				}
				;break;
				default: {
				}
			}
		}
		HX_STACK_LINE(180)
		if (((this->onevent_dyn() != null()))){
			HX_STACK_LINE(181)
			this->onevent(_event);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Window_obj,on_event,(void))

Void Window_obj::update( ){
{
		HX_STACK_FRAME("snow.window.Window","update",0xdc886174,"snow.window.Window.update","snow/window/Window.hx",188,0x9e5eaedb)
		HX_STACK_THIS(this)
		HX_STACK_LINE(188)
		if (((bool((this->handle != null())) && bool(!(this->closed))))){
			HX_STACK_LINE(189)
			this->manager->platform->update(hx::ObjectPtr<OBJ_>(this));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Window_obj,update,(void))

Void Window_obj::render( ){
{
		HX_STACK_FRAME("snow.window.Window","render",0x5aac46c1,"snow.window.Window.render","snow/window/Window.hx",196,0x9e5eaedb)
		HX_STACK_THIS(this)
		HX_STACK_LINE(198)
		if (((bool(this->minimized) || bool(this->closed)))){
			HX_STACK_LINE(199)
			return null();
		}
		HX_STACK_LINE(202)
		if (((this->handle == null()))){
			HX_STACK_LINE(203)
			return null();
		}
		HX_STACK_LINE(206)
		this->manager->platform->render(hx::ObjectPtr<OBJ_>(this));
		HX_STACK_LINE(208)
		if (((this->onrender_dyn() != null()))){
			HX_STACK_LINE(210)
			this->onrender(hx::ObjectPtr<OBJ_>(this));
			HX_STACK_LINE(212)
			if ((this->auto_swap)){
				HX_STACK_LINE(213)
				this->swap();
			}
			HX_STACK_LINE(216)
			return null();
		}
		HX_STACK_LINE(223)
		::snow::platform::native::render::opengl::GL_obj::clearColor(0.8,0.12,0.12,1.0);
		HX_STACK_LINE(224)
		::snow::platform::native::render::opengl::GL_obj::clear((int)16384);
		HX_STACK_LINE(226)
		if ((this->auto_swap)){
			HX_STACK_LINE(227)
			this->swap();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Window_obj,render,(void))

Void Window_obj::swap( ){
{
		HX_STACK_FRAME("snow.window.Window","swap",0xb704c53e,"snow.window.Window.swap","snow/window/Window.hx",233,0x9e5eaedb)
		HX_STACK_THIS(this)
		HX_STACK_LINE(235)
		if (((bool((bool((this->handle == null())) || bool(this->closed))) || bool(this->minimized)))){
			HX_STACK_LINE(236)
			return null();
		}
		HX_STACK_LINE(239)
		this->manager->platform->swap(hx::ObjectPtr<OBJ_>(this));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Window_obj,swap,(void))

Void Window_obj::destroy( ){
{
		HX_STACK_FRAME("snow.window.Window","destroy",0xa1834f2f,"snow.window.Window.destroy","snow/window/Window.hx",244,0x9e5eaedb)
		HX_STACK_THIS(this)
		HX_STACK_LINE(246)
		this->closed = true;
		HX_STACK_LINE(248)
		if (((this->handle == null()))){
			HX_STACK_LINE(249)
			return null();
		}
		HX_STACK_LINE(252)
		this->manager->remove(hx::ObjectPtr<OBJ_>(this));
		HX_STACK_LINE(254)
		this->manager->platform->destroy_window(hx::ObjectPtr<OBJ_>(this));
		HX_STACK_LINE(256)
		this->handle = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Window_obj,destroy,(void))

Void Window_obj::close( ){
{
		HX_STACK_FRAME("snow.window.Window","close",0x2f83d2ad,"snow.window.Window.close","snow/window/Window.hx",261,0x9e5eaedb)
		HX_STACK_THIS(this)
		HX_STACK_LINE(263)
		this->closed = true;
		HX_STACK_LINE(265)
		if (((this->handle == null()))){
			HX_STACK_LINE(266)
			return null();
		}
		HX_STACK_LINE(269)
		this->manager->platform->close(hx::ObjectPtr<OBJ_>(this));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Window_obj,close,(void))

Void Window_obj::show( ){
{
		HX_STACK_FRAME("snow.window.Window","show",0xb6f96fa8,"snow.window.Window.show","snow/window/Window.hx",274,0x9e5eaedb)
		HX_STACK_THIS(this)
		HX_STACK_LINE(276)
		if (((this->handle == null()))){
			HX_STACK_LINE(277)
			return null();
		}
		HX_STACK_LINE(280)
		this->closed = false;
		HX_STACK_LINE(282)
		this->manager->platform->show(hx::ObjectPtr<OBJ_>(this));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Window_obj,show,(void))

Void Window_obj::simple_message( ::String message,::String __o_title){
::String title = __o_title.Default(HX_CSTRING(""));
	HX_STACK_FRAME("snow.window.Window","simple_message",0xf34fd3e5,"snow.window.Window.simple_message","snow/window/Window.hx",287,0x9e5eaedb)
	HX_STACK_THIS(this)
	HX_STACK_ARG(message,"message")
	HX_STACK_ARG(title,"title")
{
		HX_STACK_LINE(289)
		if (((this->handle == null()))){
			HX_STACK_LINE(290)
			return null();
		}
		HX_STACK_LINE(293)
		this->manager->platform->simple_message(hx::ObjectPtr<OBJ_>(this),message,title);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Window_obj,simple_message,(void))

bool Window_obj::get_fullscreen( ){
	HX_STACK_FRAME("snow.window.Window","get_fullscreen",0xc6e680ef,"snow.window.Window.get_fullscreen","snow/window/Window.hx",299,0x9e5eaedb)
	HX_STACK_THIS(this)
	HX_STACK_LINE(299)
	return this->fullscreen;
}


HX_DEFINE_DYNAMIC_FUNC0(Window_obj,get_fullscreen,return )

bool Window_obj::set_fullscreen( bool _enable){
	HX_STACK_FRAME("snow.window.Window","set_fullscreen",0xe7066963,"snow.window.Window.set_fullscreen","snow/window/Window.hx",304,0x9e5eaedb)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_enable,"_enable")
	HX_STACK_LINE(306)
	if (((this->handle != null()))){
		HX_STACK_LINE(307)
		this->manager->platform->fullscreen(hx::ObjectPtr<OBJ_>(this),_enable);
	}
	HX_STACK_LINE(310)
	return this->fullscreen = _enable;
}


HX_DEFINE_DYNAMIC_FUNC1(Window_obj,set_fullscreen,return )

bool Window_obj::get_bordered( ){
	HX_STACK_FRAME("snow.window.Window","get_bordered",0xaf2429ff,"snow.window.Window.get_bordered","snow/window/Window.hx",316,0x9e5eaedb)
	HX_STACK_THIS(this)
	HX_STACK_LINE(316)
	return this->bordered;
}


HX_DEFINE_DYNAMIC_FUNC0(Window_obj,get_bordered,return )

bool Window_obj::get_grab( ){
	HX_STACK_FRAME("snow.window.Window","get_grab",0xa4a75780,"snow.window.Window.get_grab","snow/window/Window.hx",322,0x9e5eaedb)
	HX_STACK_THIS(this)
	HX_STACK_LINE(322)
	return this->grab;
}


HX_DEFINE_DYNAMIC_FUNC0(Window_obj,get_grab,return )

Dynamic Window_obj::get_max_size( ){
	HX_STACK_FRAME("snow.window.Window","get_max_size",0x6c801130,"snow.window.Window.get_max_size","snow/window/Window.hx",328,0x9e5eaedb)
	HX_STACK_THIS(this)
	HX_STACK_LINE(328)
	return this->max_size;
}


HX_DEFINE_DYNAMIC_FUNC0(Window_obj,get_max_size,return )

Dynamic Window_obj::get_min_size( ){
	HX_STACK_FRAME("snow.window.Window","get_min_size",0xb99a2b82,"snow.window.Window.get_min_size","snow/window/Window.hx",334,0x9e5eaedb)
	HX_STACK_THIS(this)
	HX_STACK_LINE(334)
	return this->min_size;
}


HX_DEFINE_DYNAMIC_FUNC0(Window_obj,get_min_size,return )

::String Window_obj::get_title( ){
	HX_STACK_FRAME("snow.window.Window","get_title",0xe4164b64,"snow.window.Window.get_title","snow/window/Window.hx",340,0x9e5eaedb)
	HX_STACK_THIS(this)
	HX_STACK_LINE(340)
	return this->title;
}


HX_DEFINE_DYNAMIC_FUNC0(Window_obj,get_title,return )

::String Window_obj::set_title( ::String _title){
	HX_STACK_FRAME("snow.window.Window","set_title",0xc7673770,"snow.window.Window.set_title","snow/window/Window.hx",344,0x9e5eaedb)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_title,"_title")
	HX_STACK_LINE(346)
	if (((this->handle != null()))){
		HX_STACK_LINE(347)
		this->manager->platform->set_title(hx::ObjectPtr<OBJ_>(this),_title);
	}
	HX_STACK_LINE(350)
	return this->title = _title;
}


HX_DEFINE_DYNAMIC_FUNC1(Window_obj,set_title,return )

int Window_obj::set_x( int _x){
	HX_STACK_FRAME("snow.window.Window","set_x",0x61505650,"snow.window.Window.set_x","snow/window/Window.hx",354,0x9e5eaedb)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_x,"_x")
	HX_STACK_LINE(356)
	this->x = _x;
	HX_STACK_LINE(358)
	if (((bool((this->handle != null())) && bool(!(this->internal_position))))){
		HX_STACK_LINE(359)
		this->manager->platform->set_position(hx::ObjectPtr<OBJ_>(this),this->x,this->y);
	}
	HX_STACK_LINE(362)
	return this->x;
}


HX_DEFINE_DYNAMIC_FUNC1(Window_obj,set_x,return )

int Window_obj::set_y( int _y){
	HX_STACK_FRAME("snow.window.Window","set_y",0x61505651,"snow.window.Window.set_y","snow/window/Window.hx",366,0x9e5eaedb)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_y,"_y")
	HX_STACK_LINE(368)
	this->y = _y;
	HX_STACK_LINE(370)
	if (((bool((this->handle != null())) && bool(!(this->internal_position))))){
		HX_STACK_LINE(371)
		this->manager->platform->set_position(hx::ObjectPtr<OBJ_>(this),this->x,this->y);
	}
	HX_STACK_LINE(374)
	return this->y;
}


HX_DEFINE_DYNAMIC_FUNC1(Window_obj,set_y,return )

int Window_obj::set_width( int _width){
	HX_STACK_FRAME("snow.window.Window","set_width",0x818ed7de,"snow.window.Window.set_width","snow/window/Window.hx",378,0x9e5eaedb)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_width,"_width")
	HX_STACK_LINE(380)
	this->width = _width;
	HX_STACK_LINE(382)
	if (((bool((this->handle != null())) && bool(!(this->internal_resize))))){
		HX_STACK_LINE(383)
		this->manager->platform->set_size(hx::ObjectPtr<OBJ_>(this),this->width,this->height);
	}
	HX_STACK_LINE(386)
	return this->width;
}


HX_DEFINE_DYNAMIC_FUNC1(Window_obj,set_width,return )

int Window_obj::set_height( int _height){
	HX_STACK_FRAME("snow.window.Window","set_height",0x91bd830f,"snow.window.Window.set_height","snow/window/Window.hx",390,0x9e5eaedb)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_height,"_height")
	HX_STACK_LINE(392)
	this->height = _height;
	HX_STACK_LINE(394)
	if (((bool((this->handle != null())) && bool(!(this->internal_resize))))){
		HX_STACK_LINE(395)
		this->manager->platform->set_size(hx::ObjectPtr<OBJ_>(this),this->width,this->height);
	}
	HX_STACK_LINE(398)
	return this->height;
}


HX_DEFINE_DYNAMIC_FUNC1(Window_obj,set_height,return )

Void Window_obj::set_cursor_position( int _x,int _y){
{
		HX_STACK_FRAME("snow.window.Window","set_cursor_position",0x11105e4a,"snow.window.Window.set_cursor_position","snow/window/Window.hx",404,0x9e5eaedb)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_x,"_x")
		HX_STACK_ARG(_y,"_y")
		HX_STACK_LINE(404)
		if (((bool((this->handle != null())) && bool(!(this->closed))))){
			HX_STACK_LINE(405)
			this->manager->platform->set_cursor_position(hx::ObjectPtr<OBJ_>(this),_x,_y);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Window_obj,set_cursor_position,(void))

Void Window_obj::set_position( int _x,int _y){
{
		HX_STACK_FRAME("snow.window.Window","set_position",0x361f35d1,"snow.window.Window.set_position","snow/window/Window.hx",410,0x9e5eaedb)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_x,"_x")
		HX_STACK_ARG(_y,"_y")
		HX_STACK_LINE(413)
		bool last_internal_position_flag = this->internal_position;		HX_STACK_VAR(last_internal_position_flag,"last_internal_position_flag");
		HX_STACK_LINE(416)
		this->internal_position = true;
		HX_STACK_LINE(417)
		this->set_x(_x);
		HX_STACK_LINE(418)
		this->set_y(_y);
		HX_STACK_LINE(419)
		this->internal_position = last_internal_position_flag;
		HX_STACK_LINE(422)
		if (((bool((this->handle != null())) && bool(!(this->internal_position))))){
			HX_STACK_LINE(423)
			this->manager->platform->set_position(hx::ObjectPtr<OBJ_>(this),this->x,this->y);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Window_obj,set_position,(void))

Void Window_obj::set_size( int _width,int _height){
{
		HX_STACK_FRAME("snow.window.Window","set_size",0x5aec81e9,"snow.window.Window.set_size","snow/window/Window.hx",428,0x9e5eaedb)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_width,"_width")
		HX_STACK_ARG(_height,"_height")
		HX_STACK_LINE(431)
		bool last_internal_resize_flag = this->internal_resize;		HX_STACK_VAR(last_internal_resize_flag,"last_internal_resize_flag");
		HX_STACK_LINE(434)
		this->internal_resize = true;
		HX_STACK_LINE(435)
		this->set_width(_width);
		HX_STACK_LINE(436)
		this->set_height(_height);
		HX_STACK_LINE(437)
		this->internal_resize = last_internal_resize_flag;
		HX_STACK_LINE(439)
		if (((bool((this->handle != null())) && bool(!(this->internal_resize))))){
			HX_STACK_LINE(440)
			this->manager->platform->set_size(hx::ObjectPtr<OBJ_>(this),_width,_height);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Window_obj,set_size,(void))

Dynamic Window_obj::set_max_size( Dynamic _size){
	HX_STACK_FRAME("snow.window.Window","set_max_size",0x817934a4,"snow.window.Window.set_max_size","snow/window/Window.hx",445,0x9e5eaedb)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_size,"_size")
	HX_STACK_LINE(447)
	Dynamic _g = this->get_max_size();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(447)
	if (((  (((_g != null()))) ? bool((this->handle != null())) : bool(false) ))){
		HX_STACK_LINE(448)
		this->manager->platform->set_max_size(hx::ObjectPtr<OBJ_>(this),_size->__Field(HX_CSTRING("x"),true),_size->__Field(HX_CSTRING("y"),true));
	}
	HX_STACK_LINE(451)
	return this->max_size = _size;
}


HX_DEFINE_DYNAMIC_FUNC1(Window_obj,set_max_size,return )

Dynamic Window_obj::set_min_size( Dynamic _size){
	HX_STACK_FRAME("snow.window.Window","set_min_size",0xce934ef6,"snow.window.Window.set_min_size","snow/window/Window.hx",455,0x9e5eaedb)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_size,"_size")
	HX_STACK_LINE(457)
	Dynamic _g = this->get_min_size();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(457)
	if (((  (((_g != null()))) ? bool((this->handle != null())) : bool(false) ))){
		HX_STACK_LINE(458)
		this->manager->platform->set_min_size(hx::ObjectPtr<OBJ_>(this),_size->__Field(HX_CSTRING("x"),true),_size->__Field(HX_CSTRING("y"),true));
	}
	HX_STACK_LINE(461)
	return this->min_size = _size;
}


HX_DEFINE_DYNAMIC_FUNC1(Window_obj,set_min_size,return )

bool Window_obj::set_bordered( bool _bordered){
	HX_STACK_FRAME("snow.window.Window","set_bordered",0xc41d4d73,"snow.window.Window.set_bordered","snow/window/Window.hx",465,0x9e5eaedb)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_bordered,"_bordered")
	HX_STACK_LINE(467)
	if (((this->handle != null()))){
		HX_STACK_LINE(468)
		this->manager->platform->bordered(hx::ObjectPtr<OBJ_>(this),_bordered);
	}
	HX_STACK_LINE(471)
	return this->bordered = _bordered;
}


HX_DEFINE_DYNAMIC_FUNC1(Window_obj,set_bordered,return )

bool Window_obj::set_grab( bool _grab){
	HX_STACK_FRAME("snow.window.Window","set_grab",0x5304b0f4,"snow.window.Window.set_grab","snow/window/Window.hx",475,0x9e5eaedb)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_grab,"_grab")
	HX_STACK_LINE(477)
	if (((this->handle != null()))){
		HX_STACK_LINE(478)
		this->manager->platform->grab(hx::ObjectPtr<OBJ_>(this),_grab);
	}
	HX_STACK_LINE(481)
	return this->grab = _grab;
}


HX_DEFINE_DYNAMIC_FUNC1(Window_obj,set_grab,return )


Window_obj::Window_obj()
{
}

void Window_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Window);
	HX_MARK_MEMBER_NAME(id,"id");
	HX_MARK_MEMBER_NAME(manager,"manager");
	HX_MARK_MEMBER_NAME(asked_config,"asked_config");
	HX_MARK_MEMBER_NAME(config,"config");
	HX_MARK_MEMBER_NAME(handle,"handle");
	HX_MARK_MEMBER_NAME(onevent,"onevent");
	HX_MARK_MEMBER_NAME(onrender,"onrender");
	HX_MARK_MEMBER_NAME(title,"title");
	HX_MARK_MEMBER_NAME(bordered,"bordered");
	HX_MARK_MEMBER_NAME(grab,"grab");
	HX_MARK_MEMBER_NAME(fullscreen,"fullscreen");
	HX_MARK_MEMBER_NAME(x,"x");
	HX_MARK_MEMBER_NAME(y,"y");
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(max_size,"max_size");
	HX_MARK_MEMBER_NAME(min_size,"min_size");
	HX_MARK_MEMBER_NAME(auto_swap,"auto_swap");
	HX_MARK_MEMBER_NAME(auto_render,"auto_render");
	HX_MARK_MEMBER_NAME(closed,"closed");
	HX_MARK_MEMBER_NAME(minimized,"minimized");
	HX_MARK_MEMBER_NAME(internal_position,"internal_position");
	HX_MARK_MEMBER_NAME(internal_resize,"internal_resize");
	HX_MARK_END_CLASS();
}

void Window_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(id,"id");
	HX_VISIT_MEMBER_NAME(manager,"manager");
	HX_VISIT_MEMBER_NAME(asked_config,"asked_config");
	HX_VISIT_MEMBER_NAME(config,"config");
	HX_VISIT_MEMBER_NAME(handle,"handle");
	HX_VISIT_MEMBER_NAME(onevent,"onevent");
	HX_VISIT_MEMBER_NAME(onrender,"onrender");
	HX_VISIT_MEMBER_NAME(title,"title");
	HX_VISIT_MEMBER_NAME(bordered,"bordered");
	HX_VISIT_MEMBER_NAME(grab,"grab");
	HX_VISIT_MEMBER_NAME(fullscreen,"fullscreen");
	HX_VISIT_MEMBER_NAME(x,"x");
	HX_VISIT_MEMBER_NAME(y,"y");
	HX_VISIT_MEMBER_NAME(width,"width");
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(max_size,"max_size");
	HX_VISIT_MEMBER_NAME(min_size,"min_size");
	HX_VISIT_MEMBER_NAME(auto_swap,"auto_swap");
	HX_VISIT_MEMBER_NAME(auto_render,"auto_render");
	HX_VISIT_MEMBER_NAME(closed,"closed");
	HX_VISIT_MEMBER_NAME(minimized,"minimized");
	HX_VISIT_MEMBER_NAME(internal_position,"internal_position");
	HX_VISIT_MEMBER_NAME(internal_resize,"internal_resize");
}

Dynamic Window_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return x; }
		if (HX_FIELD_EQ(inName,"y") ) { return y; }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return id; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"grab") ) { return inCallProp ? get_grab() : grab; }
		if (HX_FIELD_EQ(inName,"swap") ) { return swap_dyn(); }
		if (HX_FIELD_EQ(inName,"show") ) { return show_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"title") ) { return inCallProp ? get_title() : title; }
		if (HX_FIELD_EQ(inName,"width") ) { return width; }
		if (HX_FIELD_EQ(inName,"close") ) { return close_dyn(); }
		if (HX_FIELD_EQ(inName,"set_x") ) { return set_x_dyn(); }
		if (HX_FIELD_EQ(inName,"set_y") ) { return set_y_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"config") ) { return config; }
		if (HX_FIELD_EQ(inName,"handle") ) { return handle; }
		if (HX_FIELD_EQ(inName,"height") ) { return height; }
		if (HX_FIELD_EQ(inName,"closed") ) { return closed; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"render") ) { return render_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"manager") ) { return manager; }
		if (HX_FIELD_EQ(inName,"onevent") ) { return onevent; }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"onrender") ) { return onrender; }
		if (HX_FIELD_EQ(inName,"bordered") ) { return inCallProp ? get_bordered() : bordered; }
		if (HX_FIELD_EQ(inName,"max_size") ) { return inCallProp ? get_max_size() : max_size; }
		if (HX_FIELD_EQ(inName,"min_size") ) { return inCallProp ? get_min_size() : min_size; }
		if (HX_FIELD_EQ(inName,"on_event") ) { return on_event_dyn(); }
		if (HX_FIELD_EQ(inName,"get_grab") ) { return get_grab_dyn(); }
		if (HX_FIELD_EQ(inName,"set_size") ) { return set_size_dyn(); }
		if (HX_FIELD_EQ(inName,"set_grab") ) { return set_grab_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"auto_swap") ) { return auto_swap; }
		if (HX_FIELD_EQ(inName,"minimized") ) { return minimized; }
		if (HX_FIELD_EQ(inName,"get_title") ) { return get_title_dyn(); }
		if (HX_FIELD_EQ(inName,"set_title") ) { return set_title_dyn(); }
		if (HX_FIELD_EQ(inName,"set_width") ) { return set_width_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"fullscreen") ) { return inCallProp ? get_fullscreen() : fullscreen; }
		if (HX_FIELD_EQ(inName,"set_height") ) { return set_height_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"auto_render") ) { return auto_render; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"asked_config") ) { return asked_config; }
		if (HX_FIELD_EQ(inName,"get_bordered") ) { return get_bordered_dyn(); }
		if (HX_FIELD_EQ(inName,"get_max_size") ) { return get_max_size_dyn(); }
		if (HX_FIELD_EQ(inName,"get_min_size") ) { return get_min_size_dyn(); }
		if (HX_FIELD_EQ(inName,"set_position") ) { return set_position_dyn(); }
		if (HX_FIELD_EQ(inName,"set_max_size") ) { return set_max_size_dyn(); }
		if (HX_FIELD_EQ(inName,"set_min_size") ) { return set_min_size_dyn(); }
		if (HX_FIELD_EQ(inName,"set_bordered") ) { return set_bordered_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"simple_message") ) { return simple_message_dyn(); }
		if (HX_FIELD_EQ(inName,"get_fullscreen") ) { return get_fullscreen_dyn(); }
		if (HX_FIELD_EQ(inName,"set_fullscreen") ) { return set_fullscreen_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"internal_resize") ) { return internal_resize; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"internal_position") ) { return internal_position; }
		if (HX_FIELD_EQ(inName,"on_window_created") ) { return on_window_created_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"set_cursor_position") ) { return set_cursor_position_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Window_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { if (inCallProp) return set_x(inValue);x=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { if (inCallProp) return set_y(inValue);y=inValue.Cast< int >(); return inValue; }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< int >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"grab") ) { if (inCallProp) return set_grab(inValue);grab=inValue.Cast< bool >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"title") ) { if (inCallProp) return set_title(inValue);title=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"width") ) { if (inCallProp) return set_width(inValue);width=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"config") ) { config=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"handle") ) { handle=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"height") ) { if (inCallProp) return set_height(inValue);height=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"closed") ) { closed=inValue.Cast< bool >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"manager") ) { manager=inValue.Cast< ::snow::window::Windowing >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onevent") ) { onevent=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"onrender") ) { onrender=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"bordered") ) { if (inCallProp) return set_bordered(inValue);bordered=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"max_size") ) { if (inCallProp) return set_max_size(inValue);max_size=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"min_size") ) { if (inCallProp) return set_min_size(inValue);min_size=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"auto_swap") ) { auto_swap=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"minimized") ) { minimized=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"fullscreen") ) { if (inCallProp) return set_fullscreen(inValue);fullscreen=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"auto_render") ) { auto_render=inValue.Cast< bool >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"asked_config") ) { asked_config=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"internal_resize") ) { internal_resize=inValue.Cast< bool >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"internal_position") ) { internal_position=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Window_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("id"));
	outFields->push(HX_CSTRING("manager"));
	outFields->push(HX_CSTRING("asked_config"));
	outFields->push(HX_CSTRING("config"));
	outFields->push(HX_CSTRING("handle"));
	outFields->push(HX_CSTRING("title"));
	outFields->push(HX_CSTRING("bordered"));
	outFields->push(HX_CSTRING("grab"));
	outFields->push(HX_CSTRING("fullscreen"));
	outFields->push(HX_CSTRING("x"));
	outFields->push(HX_CSTRING("y"));
	outFields->push(HX_CSTRING("width"));
	outFields->push(HX_CSTRING("height"));
	outFields->push(HX_CSTRING("max_size"));
	outFields->push(HX_CSTRING("min_size"));
	outFields->push(HX_CSTRING("auto_swap"));
	outFields->push(HX_CSTRING("auto_render"));
	outFields->push(HX_CSTRING("closed"));
	outFields->push(HX_CSTRING("minimized"));
	outFields->push(HX_CSTRING("internal_position"));
	outFields->push(HX_CSTRING("internal_resize"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(Window_obj,id),HX_CSTRING("id")},
	{hx::fsObject /*::snow::window::Windowing*/ ,(int)offsetof(Window_obj,manager),HX_CSTRING("manager")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Window_obj,asked_config),HX_CSTRING("asked_config")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Window_obj,config),HX_CSTRING("config")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Window_obj,handle),HX_CSTRING("handle")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Window_obj,onevent),HX_CSTRING("onevent")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Window_obj,onrender),HX_CSTRING("onrender")},
	{hx::fsString,(int)offsetof(Window_obj,title),HX_CSTRING("title")},
	{hx::fsBool,(int)offsetof(Window_obj,bordered),HX_CSTRING("bordered")},
	{hx::fsBool,(int)offsetof(Window_obj,grab),HX_CSTRING("grab")},
	{hx::fsBool,(int)offsetof(Window_obj,fullscreen),HX_CSTRING("fullscreen")},
	{hx::fsInt,(int)offsetof(Window_obj,x),HX_CSTRING("x")},
	{hx::fsInt,(int)offsetof(Window_obj,y),HX_CSTRING("y")},
	{hx::fsInt,(int)offsetof(Window_obj,width),HX_CSTRING("width")},
	{hx::fsInt,(int)offsetof(Window_obj,height),HX_CSTRING("height")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Window_obj,max_size),HX_CSTRING("max_size")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Window_obj,min_size),HX_CSTRING("min_size")},
	{hx::fsBool,(int)offsetof(Window_obj,auto_swap),HX_CSTRING("auto_swap")},
	{hx::fsBool,(int)offsetof(Window_obj,auto_render),HX_CSTRING("auto_render")},
	{hx::fsBool,(int)offsetof(Window_obj,closed),HX_CSTRING("closed")},
	{hx::fsBool,(int)offsetof(Window_obj,minimized),HX_CSTRING("minimized")},
	{hx::fsBool,(int)offsetof(Window_obj,internal_position),HX_CSTRING("internal_position")},
	{hx::fsBool,(int)offsetof(Window_obj,internal_resize),HX_CSTRING("internal_resize")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("id"),
	HX_CSTRING("manager"),
	HX_CSTRING("asked_config"),
	HX_CSTRING("config"),
	HX_CSTRING("handle"),
	HX_CSTRING("onevent"),
	HX_CSTRING("onrender"),
	HX_CSTRING("title"),
	HX_CSTRING("bordered"),
	HX_CSTRING("grab"),
	HX_CSTRING("fullscreen"),
	HX_CSTRING("x"),
	HX_CSTRING("y"),
	HX_CSTRING("width"),
	HX_CSTRING("height"),
	HX_CSTRING("max_size"),
	HX_CSTRING("min_size"),
	HX_CSTRING("auto_swap"),
	HX_CSTRING("auto_render"),
	HX_CSTRING("closed"),
	HX_CSTRING("minimized"),
	HX_CSTRING("internal_position"),
	HX_CSTRING("internal_resize"),
	HX_CSTRING("on_window_created"),
	HX_CSTRING("on_event"),
	HX_CSTRING("update"),
	HX_CSTRING("render"),
	HX_CSTRING("swap"),
	HX_CSTRING("destroy"),
	HX_CSTRING("close"),
	HX_CSTRING("show"),
	HX_CSTRING("simple_message"),
	HX_CSTRING("get_fullscreen"),
	HX_CSTRING("set_fullscreen"),
	HX_CSTRING("get_bordered"),
	HX_CSTRING("get_grab"),
	HX_CSTRING("get_max_size"),
	HX_CSTRING("get_min_size"),
	HX_CSTRING("get_title"),
	HX_CSTRING("set_title"),
	HX_CSTRING("set_x"),
	HX_CSTRING("set_y"),
	HX_CSTRING("set_width"),
	HX_CSTRING("set_height"),
	HX_CSTRING("set_cursor_position"),
	HX_CSTRING("set_position"),
	HX_CSTRING("set_size"),
	HX_CSTRING("set_max_size"),
	HX_CSTRING("set_min_size"),
	HX_CSTRING("set_bordered"),
	HX_CSTRING("set_grab"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Window_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Window_obj::__mClass,"__mClass");
};

#endif

Class Window_obj::__mClass;

void Window_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("snow.window.Window"), hx::TCanCast< Window_obj> ,sStaticFields,sMemberFields,
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

void Window_obj::__boot()
{
}

} // end namespace snow
} // end namespace window
