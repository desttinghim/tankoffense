#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_snow_App
#include <snow/App.h>
#endif
#ifndef INCLUDED_snow_Snow
#include <snow/Snow.h>
#endif
#ifndef INCLUDED_snow_input_Input
#include <snow/input/Input.h>
#endif
#ifndef INCLUDED_snow_input_InputSystemBinding
#include <snow/input/InputSystemBinding.h>
#endif
#ifndef INCLUDED_snow_platform_native_input_InputSystem
#include <snow/platform/native/input/InputSystem.h>
#endif
#ifndef INCLUDED_snow_platform_native_input_sdl_InputSystem
#include <snow/platform/native/input/sdl/InputSystem.h>
#endif
#ifndef INCLUDED_snow_utils_AbstractClass
#include <snow/utils/AbstractClass.h>
#endif
#ifndef INCLUDED_snow_window_Window
#include <snow/window/Window.h>
#endif
namespace snow{
namespace input{

Void Input_obj::__construct(::snow::Snow _lib)
{
HX_STACK_FRAME("snow.input.Input","new",0xaf93cc8d,"snow.input.Input.new","snow/input/Input.hx",42,0xdca8cc45)
HX_STACK_THIS(this)
HX_STACK_ARG(_lib,"_lib")
{
	HX_STACK_LINE(44)
	this->lib = _lib;
	HX_STACK_LINE(46)
	::snow::platform::native::input::sdl::InputSystem _g = ::snow::platform::native::input::sdl::InputSystem_obj::__new(hx::ObjectPtr<OBJ_>(this),this->lib);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(46)
	this->platform = _g;
	HX_STACK_LINE(48)
	this->platform->init();
	HX_STACK_LINE(52)
	::haxe::ds::IntMap _g1 = ::haxe::ds::IntMap_obj::__new();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(52)
	this->key_code_pressed = _g1;
	HX_STACK_LINE(53)
	::haxe::ds::IntMap _g2 = ::haxe::ds::IntMap_obj::__new();		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(53)
	this->key_code_down = _g2;
	HX_STACK_LINE(54)
	::haxe::ds::IntMap _g3 = ::haxe::ds::IntMap_obj::__new();		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(54)
	this->key_code_released = _g3;
	HX_STACK_LINE(56)
	::haxe::ds::IntMap _g4 = ::haxe::ds::IntMap_obj::__new();		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(56)
	this->scan_code_pressed = _g4;
	HX_STACK_LINE(57)
	::haxe::ds::IntMap _g5 = ::haxe::ds::IntMap_obj::__new();		HX_STACK_VAR(_g5,"_g5");
	HX_STACK_LINE(57)
	this->scan_code_down = _g5;
	HX_STACK_LINE(58)
	::haxe::ds::IntMap _g6 = ::haxe::ds::IntMap_obj::__new();		HX_STACK_VAR(_g6,"_g6");
	HX_STACK_LINE(58)
	this->scan_code_released = _g6;
	HX_STACK_LINE(61)
	::haxe::ds::IntMap _g7 = ::haxe::ds::IntMap_obj::__new();		HX_STACK_VAR(_g7,"_g7");
	HX_STACK_LINE(61)
	this->mouse_button_pressed = _g7;
	HX_STACK_LINE(62)
	::haxe::ds::IntMap _g8 = ::haxe::ds::IntMap_obj::__new();		HX_STACK_VAR(_g8,"_g8");
	HX_STACK_LINE(62)
	this->mouse_button_down = _g8;
	HX_STACK_LINE(63)
	::haxe::ds::IntMap _g9 = ::haxe::ds::IntMap_obj::__new();		HX_STACK_VAR(_g9,"_g9");
	HX_STACK_LINE(63)
	this->mouse_button_released = _g9;
	HX_STACK_LINE(66)
	::haxe::ds::IntMap _g10 = ::haxe::ds::IntMap_obj::__new();		HX_STACK_VAR(_g10,"_g10");
	HX_STACK_LINE(66)
	this->gamepad_button_pressed = _g10;
	HX_STACK_LINE(67)
	::haxe::ds::IntMap _g11 = ::haxe::ds::IntMap_obj::__new();		HX_STACK_VAR(_g11,"_g11");
	HX_STACK_LINE(67)
	this->gamepad_button_down = _g11;
	HX_STACK_LINE(68)
	::haxe::ds::IntMap _g12 = ::haxe::ds::IntMap_obj::__new();		HX_STACK_VAR(_g12,"_g12");
	HX_STACK_LINE(68)
	this->gamepad_button_released = _g12;
	HX_STACK_LINE(69)
	::haxe::ds::IntMap _g13 = ::haxe::ds::IntMap_obj::__new();		HX_STACK_VAR(_g13,"_g13");
	HX_STACK_LINE(69)
	this->gamepad_axis_values = _g13;
}
;
	return null();
}

//Input_obj::~Input_obj() { }

Dynamic Input_obj::__CreateEmpty() { return  new Input_obj; }
hx::ObjectPtr< Input_obj > Input_obj::__new(::snow::Snow _lib)
{  hx::ObjectPtr< Input_obj > result = new Input_obj();
	result->__construct(_lib);
	return result;}

Dynamic Input_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Input_obj > result = new Input_obj();
	result->__construct(inArgs[0]);
	return result;}

bool Input_obj::keypressed( int _code){
	HX_STACK_FRAME("snow.input.Input","keypressed",0xd7f2de56,"snow.input.Input.keypressed","snow/input/Input.hx",81,0xdca8cc45)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_code,"_code")
	HX_STACK_LINE(81)
	return this->key_code_pressed->exists(_code);
}


HX_DEFINE_DYNAMIC_FUNC1(Input_obj,keypressed,return )

bool Input_obj::keyreleased( int _code){
	HX_STACK_FRAME("snow.input.Input","keyreleased",0x2365ba89,"snow.input.Input.keyreleased","snow/input/Input.hx",86,0xdca8cc45)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_code,"_code")
	HX_STACK_LINE(86)
	return this->key_code_released->exists(_code);
}


HX_DEFINE_DYNAMIC_FUNC1(Input_obj,keyreleased,return )

bool Input_obj::keydown( int _code){
	HX_STACK_FRAME("snow.input.Input","keydown",0x4f64542e,"snow.input.Input.keydown","snow/input/Input.hx",91,0xdca8cc45)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_code,"_code")
	HX_STACK_LINE(91)
	return this->key_code_down->exists(_code);
}


HX_DEFINE_DYNAMIC_FUNC1(Input_obj,keydown,return )

bool Input_obj::scanpressed( int _code){
	HX_STACK_FRAME("snow.input.Input","scanpressed",0x39ce9ff2,"snow.input.Input.scanpressed","snow/input/Input.hx",96,0xdca8cc45)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_code,"_code")
	HX_STACK_LINE(96)
	return this->scan_code_pressed->exists(_code);
}


HX_DEFINE_DYNAMIC_FUNC1(Input_obj,scanpressed,return )

bool Input_obj::scanreleased( int _code){
	HX_STACK_FRAME("snow.input.Input","scanreleased",0x61d3616d,"snow.input.Input.scanreleased","snow/input/Input.hx",101,0xdca8cc45)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_code,"_code")
	HX_STACK_LINE(101)
	return this->scan_code_released->exists(_code);
}


HX_DEFINE_DYNAMIC_FUNC1(Input_obj,scanreleased,return )

bool Input_obj::scandown( int _code){
	HX_STACK_FRAME("snow.input.Input","scandown",0xc0f3b912,"snow.input.Input.scandown","snow/input/Input.hx",106,0xdca8cc45)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_code,"_code")
	HX_STACK_LINE(106)
	return this->scan_code_down->exists(_code);
}


HX_DEFINE_DYNAMIC_FUNC1(Input_obj,scandown,return )

bool Input_obj::mousepressed( int _button){
	HX_STACK_FRAME("snow.input.Input","mousepressed",0x5a329150,"snow.input.Input.mousepressed","snow/input/Input.hx",113,0xdca8cc45)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_button,"_button")
	HX_STACK_LINE(113)
	return this->mouse_button_pressed->exists(_button);
}


HX_DEFINE_DYNAMIC_FUNC1(Input_obj,mousepressed,return )

bool Input_obj::mousereleased( int _button){
	HX_STACK_FRAME("snow.input.Input","mousereleased",0x98e2a24f,"snow.input.Input.mousereleased","snow/input/Input.hx",118,0xdca8cc45)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_button,"_button")
	HX_STACK_LINE(118)
	return this->mouse_button_released->exists(_button);
}


HX_DEFINE_DYNAMIC_FUNC1(Input_obj,mousereleased,return )

bool Input_obj::mousedown( int _button){
	HX_STACK_FRAME("snow.input.Input","mousedown",0x9c9460f4,"snow.input.Input.mousedown","snow/input/Input.hx",123,0xdca8cc45)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_button,"_button")
	HX_STACK_LINE(123)
	return this->mouse_button_down->exists(_button);
}


HX_DEFINE_DYNAMIC_FUNC1(Input_obj,mousedown,return )

bool Input_obj::gamepadpressed( int _gamepad,int _button){
	HX_STACK_FRAME("snow.input.Input","gamepadpressed",0xe1468114,"snow.input.Input.gamepadpressed","snow/input/Input.hx",129,0xdca8cc45)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_gamepad,"_gamepad")
	HX_STACK_ARG(_button,"_button")
	HX_STACK_LINE(131)
	::haxe::ds::IntMap _gamepad_state = this->gamepad_button_pressed->get(_gamepad);		HX_STACK_VAR(_gamepad_state,"_gamepad_state");
	HX_STACK_LINE(132)
	if (((_gamepad_state != null()))){
		HX_STACK_LINE(132)
		return _gamepad_state->exists(_button);
	}
	else{
		HX_STACK_LINE(132)
		return false;
	}
	HX_STACK_LINE(132)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC2(Input_obj,gamepadpressed,return )

bool Input_obj::gamepadreleased( int _gamepad,int _button){
	HX_STACK_FRAME("snow.input.Input","gamepadreleased",0x43407e0b,"snow.input.Input.gamepadreleased","snow/input/Input.hx",137,0xdca8cc45)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_gamepad,"_gamepad")
	HX_STACK_ARG(_button,"_button")
	HX_STACK_LINE(139)
	::haxe::ds::IntMap _gamepad_state = this->gamepad_button_released->get(_gamepad);		HX_STACK_VAR(_gamepad_state,"_gamepad_state");
	HX_STACK_LINE(140)
	if (((_gamepad_state != null()))){
		HX_STACK_LINE(140)
		return _gamepad_state->exists(_button);
	}
	else{
		HX_STACK_LINE(140)
		return false;
	}
	HX_STACK_LINE(140)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC2(Input_obj,gamepadreleased,return )

bool Input_obj::gamepaddown( int _gamepad,int _button){
	HX_STACK_FRAME("snow.input.Input","gamepaddown",0x25f2aeb0,"snow.input.Input.gamepaddown","snow/input/Input.hx",145,0xdca8cc45)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_gamepad,"_gamepad")
	HX_STACK_ARG(_button,"_button")
	HX_STACK_LINE(147)
	::haxe::ds::IntMap _gamepad_state = this->gamepad_button_down->get(_gamepad);		HX_STACK_VAR(_gamepad_state,"_gamepad_state");
	HX_STACK_LINE(148)
	if (((_gamepad_state != null()))){
		HX_STACK_LINE(148)
		return _gamepad_state->exists(_button);
	}
	else{
		HX_STACK_LINE(148)
		return false;
	}
	HX_STACK_LINE(148)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC2(Input_obj,gamepaddown,return )

Float Input_obj::gamepadaxis( int _gamepad,int _axis){
	HX_STACK_FRAME("snow.input.Input","gamepadaxis",0x23fdd2ef,"snow.input.Input.gamepadaxis","snow/input/Input.hx",153,0xdca8cc45)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_gamepad,"_gamepad")
	HX_STACK_ARG(_axis,"_axis")
	HX_STACK_LINE(155)
	::haxe::ds::IntMap _gamepad_state = this->gamepad_axis_values->get(_gamepad);		HX_STACK_VAR(_gamepad_state,"_gamepad_state");
	HX_STACK_LINE(156)
	if (((_gamepad_state != null()))){
		HX_STACK_LINE(157)
		if ((_gamepad_state->exists(_axis))){
			HX_STACK_LINE(158)
			return _gamepad_state->get(_axis);
		}
	}
	HX_STACK_LINE(162)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC2(Input_obj,gamepadaxis,return )

Void Input_obj::dispatch_key_down_event( int keycode,int scancode,bool repeat,Dynamic mod,Float timestamp,int window_id){
{
		HX_STACK_FRAME("snow.input.Input","dispatch_key_down_event",0x6cbc92ef,"snow.input.Input.dispatch_key_down_event","snow/input/Input.hx",167,0xdca8cc45)
		HX_STACK_THIS(this)
		HX_STACK_ARG(keycode,"keycode")
		HX_STACK_ARG(scancode,"scancode")
		HX_STACK_ARG(repeat,"repeat")
		HX_STACK_ARG(mod,"mod")
		HX_STACK_ARG(timestamp,"timestamp")
		HX_STACK_ARG(window_id,"window_id")
		HX_STACK_LINE(170)
		if ((!(repeat))){
			HX_STACK_LINE(172)
			this->key_code_pressed->set(keycode,false);
			HX_STACK_LINE(174)
			this->key_code_down->set(keycode,true);
			HX_STACK_LINE(176)
			this->scan_code_pressed->set(scancode,false);
			HX_STACK_LINE(178)
			this->scan_code_down->set(scancode,true);
		}
		HX_STACK_LINE(182)
		this->lib->host->onkeydown(keycode,scancode,repeat,mod,timestamp,window_id);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC6(Input_obj,dispatch_key_down_event,(void))

Void Input_obj::dispatch_key_up_event( int keycode,int scancode,bool repeat,Dynamic mod,Float timestamp,int window_id){
{
		HX_STACK_FRAME("snow.input.Input","dispatch_key_up_event",0xa0161128,"snow.input.Input.dispatch_key_up_event","snow/input/Input.hx",187,0xdca8cc45)
		HX_STACK_THIS(this)
		HX_STACK_ARG(keycode,"keycode")
		HX_STACK_ARG(scancode,"scancode")
		HX_STACK_ARG(repeat,"repeat")
		HX_STACK_ARG(mod,"mod")
		HX_STACK_ARG(timestamp,"timestamp")
		HX_STACK_ARG(window_id,"window_id")
		HX_STACK_LINE(190)
		this->key_code_released->set(keycode,false);
		HX_STACK_LINE(192)
		this->key_code_down->remove(keycode);
		HX_STACK_LINE(195)
		this->scan_code_released->set(scancode,false);
		HX_STACK_LINE(197)
		this->scan_code_down->remove(scancode);
		HX_STACK_LINE(201)
		this->lib->host->onkeyup(keycode,scancode,repeat,mod,timestamp,window_id);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC6(Input_obj,dispatch_key_up_event,(void))

Void Input_obj::dispatch_text_event( ::String text,int start,int length,int type,Float timestamp,int window_id){
{
		HX_STACK_FRAME("snow.input.Input","dispatch_text_event",0x812e669a,"snow.input.Input.dispatch_text_event","snow/input/Input.hx",208,0xdca8cc45)
		HX_STACK_THIS(this)
		HX_STACK_ARG(text,"text")
		HX_STACK_ARG(start,"start")
		HX_STACK_ARG(length,"length")
		HX_STACK_ARG(type,"type")
		HX_STACK_ARG(timestamp,"timestamp")
		HX_STACK_ARG(window_id,"window_id")
		HX_STACK_LINE(208)
		this->lib->host->ontextinput(text,start,length,type,timestamp,window_id);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC6(Input_obj,dispatch_text_event,(void))

Void Input_obj::dispatch_mouse_move_event( int x,int y,int xrel,int yrel,Float timestamp,int window_id){
{
		HX_STACK_FRAME("snow.input.Input","dispatch_mouse_move_event",0xc6369898,"snow.input.Input.dispatch_mouse_move_event","snow/input/Input.hx",216,0xdca8cc45)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(xrel,"xrel")
		HX_STACK_ARG(yrel,"yrel")
		HX_STACK_ARG(timestamp,"timestamp")
		HX_STACK_ARG(window_id,"window_id")
		HX_STACK_LINE(216)
		this->lib->host->onmousemove(x,y,xrel,yrel,timestamp,window_id);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC6(Input_obj,dispatch_mouse_move_event,(void))

Void Input_obj::dispatch_mouse_down_event( int x,int y,int button,Float timestamp,int window_id){
{
		HX_STACK_FRAME("snow.input.Input","dispatch_mouse_down_event",0xb30c00a9,"snow.input.Input.dispatch_mouse_down_event","snow/input/Input.hx",221,0xdca8cc45)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(button,"button")
		HX_STACK_ARG(timestamp,"timestamp")
		HX_STACK_ARG(window_id,"window_id")
		HX_STACK_LINE(224)
		this->mouse_button_pressed->set(button,false);
		HX_STACK_LINE(226)
		this->mouse_button_down->set(button,true);
		HX_STACK_LINE(229)
		this->lib->host->onmousedown(x,y,button,timestamp,window_id);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(Input_obj,dispatch_mouse_down_event,(void))

Void Input_obj::dispatch_mouse_up_event( int x,int y,int button,Float timestamp,int window_id){
{
		HX_STACK_FRAME("snow.input.Input","dispatch_mouse_up_event",0x27f8bc62,"snow.input.Input.dispatch_mouse_up_event","snow/input/Input.hx",234,0xdca8cc45)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(button,"button")
		HX_STACK_ARG(timestamp,"timestamp")
		HX_STACK_ARG(window_id,"window_id")
		HX_STACK_LINE(237)
		this->mouse_button_released->set(button,false);
		HX_STACK_LINE(239)
		this->mouse_button_down->remove(button);
		HX_STACK_LINE(242)
		this->lib->host->onmouseup(x,y,button,timestamp,window_id);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(Input_obj,dispatch_mouse_up_event,(void))

Void Input_obj::dispatch_mouse_wheel_event( int x,int y,Float timestamp,int window_id){
{
		HX_STACK_FRAME("snow.input.Input","dispatch_mouse_wheel_event",0x6606a54a,"snow.input.Input.dispatch_mouse_wheel_event","snow/input/Input.hx",249,0xdca8cc45)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(timestamp,"timestamp")
		HX_STACK_ARG(window_id,"window_id")
		HX_STACK_LINE(249)
		this->lib->host->onmousewheel(x,y,timestamp,window_id);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Input_obj,dispatch_mouse_wheel_event,(void))

Void Input_obj::dispatch_touch_down_event( Float x,Float y,int touch_id,Float timestamp){
{
		HX_STACK_FRAME("snow.input.Input","dispatch_touch_down_event",0x8e93914f,"snow.input.Input.dispatch_touch_down_event","snow/input/Input.hx",256,0xdca8cc45)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(touch_id,"touch_id")
		HX_STACK_ARG(timestamp,"timestamp")
		HX_STACK_LINE(256)
		this->lib->host->ontouchdown(x,y,touch_id,timestamp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Input_obj,dispatch_touch_down_event,(void))

Void Input_obj::dispatch_touch_up_event( Float x,Float y,int touch_id,Float timestamp){
{
		HX_STACK_FRAME("snow.input.Input","dispatch_touch_up_event",0xadaeb788,"snow.input.Input.dispatch_touch_up_event","snow/input/Input.hx",263,0xdca8cc45)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(touch_id,"touch_id")
		HX_STACK_ARG(timestamp,"timestamp")
		HX_STACK_LINE(263)
		this->lib->host->ontouchup(x,y,touch_id,timestamp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Input_obj,dispatch_touch_up_event,(void))

Void Input_obj::dispatch_touch_move_event( Float x,Float y,Float dx,Float dy,int touch_id,Float timestamp){
{
		HX_STACK_FRAME("snow.input.Input","dispatch_touch_move_event",0xa1be293e,"snow.input.Input.dispatch_touch_move_event","snow/input/Input.hx",270,0xdca8cc45)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(dx,"dx")
		HX_STACK_ARG(dy,"dy")
		HX_STACK_ARG(touch_id,"touch_id")
		HX_STACK_ARG(timestamp,"timestamp")
		HX_STACK_LINE(270)
		this->lib->host->ontouchmove(x,y,dx,dy,touch_id,timestamp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC6(Input_obj,dispatch_touch_move_event,(void))

Void Input_obj::dispatch_gamepad_axis_event( int gamepad,int axis,Float value,Float timestamp){
{
		HX_STACK_FRAME("snow.input.Input","dispatch_gamepad_axis_event",0x7ede25ac,"snow.input.Input.dispatch_gamepad_axis_event","snow/input/Input.hx",275,0xdca8cc45)
		HX_STACK_THIS(this)
		HX_STACK_ARG(gamepad,"gamepad")
		HX_STACK_ARG(axis,"axis")
		HX_STACK_ARG(value,"value")
		HX_STACK_ARG(timestamp,"timestamp")
		HX_STACK_LINE(278)
		if ((!(this->gamepad_axis_values->exists(gamepad)))){
			HX_STACK_LINE(279)
			::haxe::ds::IntMap value1 = ::haxe::ds::IntMap_obj::__new();		HX_STACK_VAR(value1,"value1");
			HX_STACK_LINE(279)
			this->gamepad_axis_values->set(gamepad,value1);
		}
		HX_STACK_LINE(283)
		{
			HX_STACK_LINE(283)
			::IMap this1 = this->gamepad_axis_values->get(gamepad);		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(283)
			this1->set(axis,value);
		}
		HX_STACK_LINE(285)
		this->lib->host->ongamepadaxis(gamepad,axis,value,timestamp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Input_obj,dispatch_gamepad_axis_event,(void))

Void Input_obj::dispatch_gamepad_button_down_event( int gamepad,int button,Float value,Float timestamp){
{
		HX_STACK_FRAME("snow.input.Input","dispatch_gamepad_button_down_event",0x6e101cba,"snow.input.Input.dispatch_gamepad_button_down_event","snow/input/Input.hx",290,0xdca8cc45)
		HX_STACK_THIS(this)
		HX_STACK_ARG(gamepad,"gamepad")
		HX_STACK_ARG(button,"button")
		HX_STACK_ARG(value,"value")
		HX_STACK_ARG(timestamp,"timestamp")
		HX_STACK_LINE(293)
		if ((!(this->gamepad_button_pressed->exists(gamepad)))){
			HX_STACK_LINE(294)
			::haxe::ds::IntMap value1 = ::haxe::ds::IntMap_obj::__new();		HX_STACK_VAR(value1,"value1");
			HX_STACK_LINE(294)
			this->gamepad_button_pressed->set(gamepad,value1);
		}
		HX_STACK_LINE(297)
		if ((!(this->gamepad_button_down->exists(gamepad)))){
			HX_STACK_LINE(298)
			::haxe::ds::IntMap value1 = ::haxe::ds::IntMap_obj::__new();		HX_STACK_VAR(value1,"value1");
			HX_STACK_LINE(298)
			this->gamepad_button_down->set(gamepad,value1);
		}
		HX_STACK_LINE(302)
		{
			HX_STACK_LINE(302)
			::IMap this1 = this->gamepad_button_pressed->get(gamepad);		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(302)
			this1->set(button,false);
		}
		HX_STACK_LINE(304)
		{
			HX_STACK_LINE(304)
			::IMap this1 = this->gamepad_button_down->get(gamepad);		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(304)
			this1->set(button,true);
		}
		HX_STACK_LINE(307)
		this->lib->host->ongamepaddown(gamepad,button,value,timestamp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Input_obj,dispatch_gamepad_button_down_event,(void))

Void Input_obj::dispatch_gamepad_button_up_event( int gamepad,int button,Float value,Float timestamp){
{
		HX_STACK_FRAME("snow.input.Input","dispatch_gamepad_button_up_event",0x37830233,"snow.input.Input.dispatch_gamepad_button_up_event","snow/input/Input.hx",312,0xdca8cc45)
		HX_STACK_THIS(this)
		HX_STACK_ARG(gamepad,"gamepad")
		HX_STACK_ARG(button,"button")
		HX_STACK_ARG(value,"value")
		HX_STACK_ARG(timestamp,"timestamp")
		HX_STACK_LINE(316)
		if ((!(this->gamepad_button_released->exists(gamepad)))){
			HX_STACK_LINE(317)
			::haxe::ds::IntMap value1 = ::haxe::ds::IntMap_obj::__new();		HX_STACK_VAR(value1,"value1");
			HX_STACK_LINE(317)
			this->gamepad_button_released->set(gamepad,value1);
		}
		HX_STACK_LINE(320)
		if ((!(this->gamepad_button_down->exists(gamepad)))){
			HX_STACK_LINE(321)
			::haxe::ds::IntMap value1 = ::haxe::ds::IntMap_obj::__new();		HX_STACK_VAR(value1,"value1");
			HX_STACK_LINE(321)
			this->gamepad_button_down->set(gamepad,value1);
		}
		HX_STACK_LINE(325)
		{
			HX_STACK_LINE(325)
			::IMap this1 = this->gamepad_button_released->get(gamepad);		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(325)
			this1->set(button,false);
		}
		HX_STACK_LINE(327)
		{
			HX_STACK_LINE(327)
			::IMap this1 = this->gamepad_button_down->get(gamepad);		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(327)
			this1->remove(button);
		}
		HX_STACK_LINE(329)
		this->lib->host->ongamepadup(gamepad,button,value,timestamp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Input_obj,dispatch_gamepad_button_up_event,(void))

Void Input_obj::dispatch_gamepad_device_event( int gamepad,int type,Float timestamp){
{
		HX_STACK_FRAME("snow.input.Input","dispatch_gamepad_device_event",0x01dd6761,"snow.input.Input.dispatch_gamepad_device_event","snow/input/Input.hx",336,0xdca8cc45)
		HX_STACK_THIS(this)
		HX_STACK_ARG(gamepad,"gamepad")
		HX_STACK_ARG(type,"type")
		HX_STACK_ARG(timestamp,"timestamp")
		HX_STACK_LINE(336)
		this->lib->host->ongamepaddevice(gamepad,type,timestamp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Input_obj,dispatch_gamepad_device_event,(void))

Void Input_obj::listen( ::snow::window::Window _window){
{
		HX_STACK_FRAME("snow.input.Input","listen",0xc19de63a,"snow.input.Input.listen","snow/input/Input.hx",345,0xdca8cc45)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_window,"_window")
		HX_STACK_LINE(345)
		this->platform->listen(_window);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Input_obj,listen,(void))

Void Input_obj::unlisten( ::snow::window::Window _window){
{
		HX_STACK_FRAME("snow.input.Input","unlisten",0x8b9eb813,"snow.input.Input.unlisten","snow/input/Input.hx",352,0xdca8cc45)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_window,"_window")
		HX_STACK_LINE(352)
		this->platform->unlisten(_window);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Input_obj,unlisten,(void))

Void Input_obj::on_event( Dynamic _event){
{
		HX_STACK_FRAME("snow.input.Input","on_event",0xb622526d,"snow.input.Input.on_event","snow/input/Input.hx",359,0xdca8cc45)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_event,"_event")
		HX_STACK_LINE(359)
		if (((_event->__Field(HX_CSTRING("type"),true) == (int)6))){
			HX_STACK_LINE(360)
			this->platform->on_event(_event->__Field(HX_CSTRING("input"),true));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Input_obj,on_event,(void))

Void Input_obj::on_gamepad_added( Dynamic _event){
{
		HX_STACK_FRAME("snow.input.Input","on_gamepad_added",0xee9540b5,"snow.input.Input.on_gamepad_added","snow/input/Input.hx",368,0xdca8cc45)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_event,"_event")
		HX_STACK_LINE(368)
		this->platform->gamepad_add(_event->__Field(HX_CSTRING("which"),true));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Input_obj,on_gamepad_added,(void))

Void Input_obj::on_gamepad_removed( Dynamic _event){
{
		HX_STACK_FRAME("snow.input.Input","on_gamepad_removed",0x0d7c32d5,"snow.input.Input.on_gamepad_removed","snow/input/Input.hx",375,0xdca8cc45)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_event,"_event")
		HX_STACK_LINE(375)
		this->platform->gamepad_remove(_event->__Field(HX_CSTRING("which"),true));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Input_obj,on_gamepad_removed,(void))

Void Input_obj::update( ){
{
		HX_STACK_FRAME("snow.input.Input","update",0x58a9a3fc,"snow.input.Input.update","snow/input/Input.hx",381,0xdca8cc45)
		HX_STACK_THIS(this)
		HX_STACK_LINE(383)
		this->platform->process();
		HX_STACK_LINE(385)
		this->_update_keystate();
		HX_STACK_LINE(386)
		this->_update_gamepadstate();
		HX_STACK_LINE(387)
		this->_update_mousestate();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Input_obj,update,(void))

Void Input_obj::destroy( ){
{
		HX_STACK_FRAME("snow.input.Input","destroy",0xc27c43a7,"snow.input.Input.destroy","snow/input/Input.hx",395,0xdca8cc45)
		HX_STACK_THIS(this)
		HX_STACK_LINE(395)
		this->platform->destroy();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Input_obj,destroy,(void))

Void Input_obj::_update_mousestate( ){
{
		HX_STACK_FRAME("snow.input.Input","_update_mousestate",0xf0143eb6,"snow.input.Input._update_mousestate","snow/input/Input.hx",402,0xdca8cc45)
		HX_STACK_THIS(this)
		HX_STACK_LINE(404)
		for(::cpp::FastIterator_obj< int > *__it = ::cpp::CreateFastIterator< int >(this->mouse_button_pressed->keys());  __it->hasNext(); ){
			int _code = __it->next();
			if ((this->mouse_button_pressed->get(_code))){
				HX_STACK_LINE(407)
				this->mouse_button_pressed->remove(_code);
			}
			else{
				HX_STACK_LINE(409)
				this->mouse_button_pressed->set(_code,true);
			}
;
		}
		HX_STACK_LINE(414)
		for(::cpp::FastIterator_obj< int > *__it = ::cpp::CreateFastIterator< int >(this->mouse_button_released->keys());  __it->hasNext(); ){
			int _code = __it->next();
			if ((this->mouse_button_released->get(_code))){
				HX_STACK_LINE(417)
				this->mouse_button_released->remove(_code);
			}
			else{
				HX_STACK_LINE(419)
				this->mouse_button_released->set(_code,true);
			}
;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Input_obj,_update_mousestate,(void))

Void Input_obj::_update_gamepadstate( ){
{
		HX_STACK_FRAME("snow.input.Input","_update_gamepadstate",0xaaa2813a,"snow.input.Input._update_gamepadstate","snow/input/Input.hx",427,0xdca8cc45)
		HX_STACK_THIS(this)
		HX_STACK_LINE(429)
		for(::cpp::FastIterator_obj< ::haxe::ds::IntMap > *__it = ::cpp::CreateFastIterator< ::haxe::ds::IntMap >(this->gamepad_button_pressed->iterator());  __it->hasNext(); ){
			::haxe::ds::IntMap _gamepad_pressed = __it->next();
			{
				HX_STACK_LINE(430)
				for(::cpp::FastIterator_obj< int > *__it = ::cpp::CreateFastIterator< int >(_gamepad_pressed->keys());  __it->hasNext(); ){
					int _button = __it->next();
					if ((_gamepad_pressed->get(_button))){
						HX_STACK_LINE(433)
						_gamepad_pressed->remove(_button);
					}
					else{
						HX_STACK_LINE(435)
						_gamepad_pressed->set(_button,true);
					}
;
				}
			}
;
		}
		HX_STACK_LINE(441)
		for(::cpp::FastIterator_obj< ::haxe::ds::IntMap > *__it = ::cpp::CreateFastIterator< ::haxe::ds::IntMap >(this->gamepad_button_released->iterator());  __it->hasNext(); ){
			::haxe::ds::IntMap _gamepad_released = __it->next();
			{
				HX_STACK_LINE(442)
				for(::cpp::FastIterator_obj< int > *__it = ::cpp::CreateFastIterator< int >(_gamepad_released->keys());  __it->hasNext(); ){
					int _button = __it->next();
					if ((_gamepad_released->get(_button))){
						HX_STACK_LINE(445)
						_gamepad_released->remove(_button);
					}
					else{
						HX_STACK_LINE(447)
						_gamepad_released->set(_button,true);
					}
;
				}
			}
;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Input_obj,_update_gamepadstate,(void))

Void Input_obj::_update_keystate( ){
{
		HX_STACK_FRAME("snow.input.Input","_update_keystate",0x615f027c,"snow.input.Input._update_keystate","snow/input/Input.hx",456,0xdca8cc45)
		HX_STACK_THIS(this)
		HX_STACK_LINE(461)
		for(::cpp::FastIterator_obj< int > *__it = ::cpp::CreateFastIterator< int >(this->key_code_pressed->keys());  __it->hasNext(); ){
			int _code = __it->next();
			if ((this->key_code_pressed->get(_code))){
				HX_STACK_LINE(464)
				this->key_code_pressed->remove(_code);
			}
			else{
				HX_STACK_LINE(466)
				this->key_code_pressed->set(_code,true);
			}
;
		}
		HX_STACK_LINE(474)
		for(::cpp::FastIterator_obj< int > *__it = ::cpp::CreateFastIterator< int >(this->key_code_released->keys());  __it->hasNext(); ){
			int _code = __it->next();
			if ((this->key_code_released->get(_code))){
				HX_STACK_LINE(477)
				this->key_code_released->remove(_code);
			}
			else{
				HX_STACK_LINE(479)
				this->key_code_released->set(_code,true);
			}
;
		}
		HX_STACK_LINE(489)
		for(::cpp::FastIterator_obj< int > *__it = ::cpp::CreateFastIterator< int >(this->scan_code_pressed->keys());  __it->hasNext(); ){
			int _code = __it->next();
			if ((this->scan_code_pressed->get(_code))){
				HX_STACK_LINE(492)
				this->scan_code_pressed->remove(_code);
			}
			else{
				HX_STACK_LINE(494)
				this->scan_code_pressed->set(_code,true);
			}
;
		}
		HX_STACK_LINE(502)
		for(::cpp::FastIterator_obj< int > *__it = ::cpp::CreateFastIterator< int >(this->scan_code_released->keys());  __it->hasNext(); ){
			int _code = __it->next();
			if ((this->scan_code_released->get(_code))){
				HX_STACK_LINE(505)
				this->scan_code_released->remove(_code);
			}
			else{
				HX_STACK_LINE(507)
				this->scan_code_released->set(_code,true);
			}
;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Input_obj,_update_keystate,(void))


Input_obj::Input_obj()
{
}

void Input_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Input);
	HX_MARK_MEMBER_NAME(lib,"lib");
	HX_MARK_MEMBER_NAME(platform,"platform");
	HX_MARK_MEMBER_NAME(key_code_down,"key_code_down");
	HX_MARK_MEMBER_NAME(key_code_pressed,"key_code_pressed");
	HX_MARK_MEMBER_NAME(key_code_released,"key_code_released");
	HX_MARK_MEMBER_NAME(scan_code_down,"scan_code_down");
	HX_MARK_MEMBER_NAME(scan_code_pressed,"scan_code_pressed");
	HX_MARK_MEMBER_NAME(scan_code_released,"scan_code_released");
	HX_MARK_MEMBER_NAME(mouse_button_down,"mouse_button_down");
	HX_MARK_MEMBER_NAME(mouse_button_pressed,"mouse_button_pressed");
	HX_MARK_MEMBER_NAME(mouse_button_released,"mouse_button_released");
	HX_MARK_MEMBER_NAME(gamepad_button_down,"gamepad_button_down");
	HX_MARK_MEMBER_NAME(gamepad_button_pressed,"gamepad_button_pressed");
	HX_MARK_MEMBER_NAME(gamepad_button_released,"gamepad_button_released");
	HX_MARK_MEMBER_NAME(gamepad_axis_values,"gamepad_axis_values");
	HX_MARK_END_CLASS();
}

void Input_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(lib,"lib");
	HX_VISIT_MEMBER_NAME(platform,"platform");
	HX_VISIT_MEMBER_NAME(key_code_down,"key_code_down");
	HX_VISIT_MEMBER_NAME(key_code_pressed,"key_code_pressed");
	HX_VISIT_MEMBER_NAME(key_code_released,"key_code_released");
	HX_VISIT_MEMBER_NAME(scan_code_down,"scan_code_down");
	HX_VISIT_MEMBER_NAME(scan_code_pressed,"scan_code_pressed");
	HX_VISIT_MEMBER_NAME(scan_code_released,"scan_code_released");
	HX_VISIT_MEMBER_NAME(mouse_button_down,"mouse_button_down");
	HX_VISIT_MEMBER_NAME(mouse_button_pressed,"mouse_button_pressed");
	HX_VISIT_MEMBER_NAME(mouse_button_released,"mouse_button_released");
	HX_VISIT_MEMBER_NAME(gamepad_button_down,"gamepad_button_down");
	HX_VISIT_MEMBER_NAME(gamepad_button_pressed,"gamepad_button_pressed");
	HX_VISIT_MEMBER_NAME(gamepad_button_released,"gamepad_button_released");
	HX_VISIT_MEMBER_NAME(gamepad_axis_values,"gamepad_axis_values");
}

Dynamic Input_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"lib") ) { return lib; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"listen") ) { return listen_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"keydown") ) { return keydown_dyn(); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"platform") ) { return platform; }
		if (HX_FIELD_EQ(inName,"scandown") ) { return scandown_dyn(); }
		if (HX_FIELD_EQ(inName,"unlisten") ) { return unlisten_dyn(); }
		if (HX_FIELD_EQ(inName,"on_event") ) { return on_event_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"mousedown") ) { return mousedown_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"keypressed") ) { return keypressed_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"keyreleased") ) { return keyreleased_dyn(); }
		if (HX_FIELD_EQ(inName,"scanpressed") ) { return scanpressed_dyn(); }
		if (HX_FIELD_EQ(inName,"gamepaddown") ) { return gamepaddown_dyn(); }
		if (HX_FIELD_EQ(inName,"gamepadaxis") ) { return gamepadaxis_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"scanreleased") ) { return scanreleased_dyn(); }
		if (HX_FIELD_EQ(inName,"mousepressed") ) { return mousepressed_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"key_code_down") ) { return key_code_down; }
		if (HX_FIELD_EQ(inName,"mousereleased") ) { return mousereleased_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"scan_code_down") ) { return scan_code_down; }
		if (HX_FIELD_EQ(inName,"gamepadpressed") ) { return gamepadpressed_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"gamepadreleased") ) { return gamepadreleased_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"key_code_pressed") ) { return key_code_pressed; }
		if (HX_FIELD_EQ(inName,"on_gamepad_added") ) { return on_gamepad_added_dyn(); }
		if (HX_FIELD_EQ(inName,"_update_keystate") ) { return _update_keystate_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"key_code_released") ) { return key_code_released; }
		if (HX_FIELD_EQ(inName,"scan_code_pressed") ) { return scan_code_pressed; }
		if (HX_FIELD_EQ(inName,"mouse_button_down") ) { return mouse_button_down; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"scan_code_released") ) { return scan_code_released; }
		if (HX_FIELD_EQ(inName,"on_gamepad_removed") ) { return on_gamepad_removed_dyn(); }
		if (HX_FIELD_EQ(inName,"_update_mousestate") ) { return _update_mousestate_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"gamepad_button_down") ) { return gamepad_button_down; }
		if (HX_FIELD_EQ(inName,"gamepad_axis_values") ) { return gamepad_axis_values; }
		if (HX_FIELD_EQ(inName,"dispatch_text_event") ) { return dispatch_text_event_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"mouse_button_pressed") ) { return mouse_button_pressed; }
		if (HX_FIELD_EQ(inName,"_update_gamepadstate") ) { return _update_gamepadstate_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"mouse_button_released") ) { return mouse_button_released; }
		if (HX_FIELD_EQ(inName,"dispatch_key_up_event") ) { return dispatch_key_up_event_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"gamepad_button_pressed") ) { return gamepad_button_pressed; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"gamepad_button_released") ) { return gamepad_button_released; }
		if (HX_FIELD_EQ(inName,"dispatch_key_down_event") ) { return dispatch_key_down_event_dyn(); }
		if (HX_FIELD_EQ(inName,"dispatch_mouse_up_event") ) { return dispatch_mouse_up_event_dyn(); }
		if (HX_FIELD_EQ(inName,"dispatch_touch_up_event") ) { return dispatch_touch_up_event_dyn(); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"dispatch_mouse_move_event") ) { return dispatch_mouse_move_event_dyn(); }
		if (HX_FIELD_EQ(inName,"dispatch_mouse_down_event") ) { return dispatch_mouse_down_event_dyn(); }
		if (HX_FIELD_EQ(inName,"dispatch_touch_down_event") ) { return dispatch_touch_down_event_dyn(); }
		if (HX_FIELD_EQ(inName,"dispatch_touch_move_event") ) { return dispatch_touch_move_event_dyn(); }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"dispatch_mouse_wheel_event") ) { return dispatch_mouse_wheel_event_dyn(); }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"dispatch_gamepad_axis_event") ) { return dispatch_gamepad_axis_event_dyn(); }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"dispatch_gamepad_device_event") ) { return dispatch_gamepad_device_event_dyn(); }
		break;
	case 32:
		if (HX_FIELD_EQ(inName,"dispatch_gamepad_button_up_event") ) { return dispatch_gamepad_button_up_event_dyn(); }
		break;
	case 34:
		if (HX_FIELD_EQ(inName,"dispatch_gamepad_button_down_event") ) { return dispatch_gamepad_button_down_event_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Input_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"lib") ) { lib=inValue.Cast< ::snow::Snow >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"platform") ) { platform=inValue.Cast< ::snow::platform::native::input::sdl::InputSystem >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"key_code_down") ) { key_code_down=inValue.Cast< ::haxe::ds::IntMap >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"scan_code_down") ) { scan_code_down=inValue.Cast< ::haxe::ds::IntMap >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"key_code_pressed") ) { key_code_pressed=inValue.Cast< ::haxe::ds::IntMap >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"key_code_released") ) { key_code_released=inValue.Cast< ::haxe::ds::IntMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scan_code_pressed") ) { scan_code_pressed=inValue.Cast< ::haxe::ds::IntMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mouse_button_down") ) { mouse_button_down=inValue.Cast< ::haxe::ds::IntMap >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"scan_code_released") ) { scan_code_released=inValue.Cast< ::haxe::ds::IntMap >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"gamepad_button_down") ) { gamepad_button_down=inValue.Cast< ::haxe::ds::IntMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"gamepad_axis_values") ) { gamepad_axis_values=inValue.Cast< ::haxe::ds::IntMap >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"mouse_button_pressed") ) { mouse_button_pressed=inValue.Cast< ::haxe::ds::IntMap >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"mouse_button_released") ) { mouse_button_released=inValue.Cast< ::haxe::ds::IntMap >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"gamepad_button_pressed") ) { gamepad_button_pressed=inValue.Cast< ::haxe::ds::IntMap >(); return inValue; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"gamepad_button_released") ) { gamepad_button_released=inValue.Cast< ::haxe::ds::IntMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Input_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("lib"));
	outFields->push(HX_CSTRING("platform"));
	outFields->push(HX_CSTRING("key_code_down"));
	outFields->push(HX_CSTRING("key_code_pressed"));
	outFields->push(HX_CSTRING("key_code_released"));
	outFields->push(HX_CSTRING("scan_code_down"));
	outFields->push(HX_CSTRING("scan_code_pressed"));
	outFields->push(HX_CSTRING("scan_code_released"));
	outFields->push(HX_CSTRING("mouse_button_down"));
	outFields->push(HX_CSTRING("mouse_button_pressed"));
	outFields->push(HX_CSTRING("mouse_button_released"));
	outFields->push(HX_CSTRING("gamepad_button_down"));
	outFields->push(HX_CSTRING("gamepad_button_pressed"));
	outFields->push(HX_CSTRING("gamepad_button_released"));
	outFields->push(HX_CSTRING("gamepad_axis_values"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::snow::Snow*/ ,(int)offsetof(Input_obj,lib),HX_CSTRING("lib")},
	{hx::fsObject /*::snow::platform::native::input::sdl::InputSystem*/ ,(int)offsetof(Input_obj,platform),HX_CSTRING("platform")},
	{hx::fsObject /*::haxe::ds::IntMap*/ ,(int)offsetof(Input_obj,key_code_down),HX_CSTRING("key_code_down")},
	{hx::fsObject /*::haxe::ds::IntMap*/ ,(int)offsetof(Input_obj,key_code_pressed),HX_CSTRING("key_code_pressed")},
	{hx::fsObject /*::haxe::ds::IntMap*/ ,(int)offsetof(Input_obj,key_code_released),HX_CSTRING("key_code_released")},
	{hx::fsObject /*::haxe::ds::IntMap*/ ,(int)offsetof(Input_obj,scan_code_down),HX_CSTRING("scan_code_down")},
	{hx::fsObject /*::haxe::ds::IntMap*/ ,(int)offsetof(Input_obj,scan_code_pressed),HX_CSTRING("scan_code_pressed")},
	{hx::fsObject /*::haxe::ds::IntMap*/ ,(int)offsetof(Input_obj,scan_code_released),HX_CSTRING("scan_code_released")},
	{hx::fsObject /*::haxe::ds::IntMap*/ ,(int)offsetof(Input_obj,mouse_button_down),HX_CSTRING("mouse_button_down")},
	{hx::fsObject /*::haxe::ds::IntMap*/ ,(int)offsetof(Input_obj,mouse_button_pressed),HX_CSTRING("mouse_button_pressed")},
	{hx::fsObject /*::haxe::ds::IntMap*/ ,(int)offsetof(Input_obj,mouse_button_released),HX_CSTRING("mouse_button_released")},
	{hx::fsObject /*::haxe::ds::IntMap*/ ,(int)offsetof(Input_obj,gamepad_button_down),HX_CSTRING("gamepad_button_down")},
	{hx::fsObject /*::haxe::ds::IntMap*/ ,(int)offsetof(Input_obj,gamepad_button_pressed),HX_CSTRING("gamepad_button_pressed")},
	{hx::fsObject /*::haxe::ds::IntMap*/ ,(int)offsetof(Input_obj,gamepad_button_released),HX_CSTRING("gamepad_button_released")},
	{hx::fsObject /*::haxe::ds::IntMap*/ ,(int)offsetof(Input_obj,gamepad_axis_values),HX_CSTRING("gamepad_axis_values")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("lib"),
	HX_CSTRING("platform"),
	HX_CSTRING("key_code_down"),
	HX_CSTRING("key_code_pressed"),
	HX_CSTRING("key_code_released"),
	HX_CSTRING("scan_code_down"),
	HX_CSTRING("scan_code_pressed"),
	HX_CSTRING("scan_code_released"),
	HX_CSTRING("mouse_button_down"),
	HX_CSTRING("mouse_button_pressed"),
	HX_CSTRING("mouse_button_released"),
	HX_CSTRING("gamepad_button_down"),
	HX_CSTRING("gamepad_button_pressed"),
	HX_CSTRING("gamepad_button_released"),
	HX_CSTRING("gamepad_axis_values"),
	HX_CSTRING("keypressed"),
	HX_CSTRING("keyreleased"),
	HX_CSTRING("keydown"),
	HX_CSTRING("scanpressed"),
	HX_CSTRING("scanreleased"),
	HX_CSTRING("scandown"),
	HX_CSTRING("mousepressed"),
	HX_CSTRING("mousereleased"),
	HX_CSTRING("mousedown"),
	HX_CSTRING("gamepadpressed"),
	HX_CSTRING("gamepadreleased"),
	HX_CSTRING("gamepaddown"),
	HX_CSTRING("gamepadaxis"),
	HX_CSTRING("dispatch_key_down_event"),
	HX_CSTRING("dispatch_key_up_event"),
	HX_CSTRING("dispatch_text_event"),
	HX_CSTRING("dispatch_mouse_move_event"),
	HX_CSTRING("dispatch_mouse_down_event"),
	HX_CSTRING("dispatch_mouse_up_event"),
	HX_CSTRING("dispatch_mouse_wheel_event"),
	HX_CSTRING("dispatch_touch_down_event"),
	HX_CSTRING("dispatch_touch_up_event"),
	HX_CSTRING("dispatch_touch_move_event"),
	HX_CSTRING("dispatch_gamepad_axis_event"),
	HX_CSTRING("dispatch_gamepad_button_down_event"),
	HX_CSTRING("dispatch_gamepad_button_up_event"),
	HX_CSTRING("dispatch_gamepad_device_event"),
	HX_CSTRING("listen"),
	HX_CSTRING("unlisten"),
	HX_CSTRING("on_event"),
	HX_CSTRING("on_gamepad_added"),
	HX_CSTRING("on_gamepad_removed"),
	HX_CSTRING("update"),
	HX_CSTRING("destroy"),
	HX_CSTRING("_update_mousestate"),
	HX_CSTRING("_update_gamepadstate"),
	HX_CSTRING("_update_keystate"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Input_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Input_obj::__mClass,"__mClass");
};

#endif

Class Input_obj::__mClass;

void Input_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("snow.input.Input"), hx::TCanCast< Input_obj> ,sStaticFields,sMemberFields,
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

void Input_obj::__boot()
{
}

} // end namespace snow
} // end namespace input
