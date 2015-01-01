#include <hxcpp.h>

#ifndef INCLUDED_haxe_Utf8
#include <haxe/Utf8.h>
#endif
#ifndef INCLUDED_snow_input_Keycodes
#include <snow/input/Keycodes.h>
#endif
#ifndef INCLUDED_snow_input_Scancodes
#include <snow/input/Scancodes.h>
#endif
namespace snow{
namespace input{

Void Keycodes_obj::__construct()
{
	return null();
}

//Keycodes_obj::~Keycodes_obj() { }

Dynamic Keycodes_obj::__CreateEmpty() { return  new Keycodes_obj; }
hx::ObjectPtr< Keycodes_obj > Keycodes_obj::__new()
{  hx::ObjectPtr< Keycodes_obj > result = new Keycodes_obj();
	result->__construct();
	return result;}

Dynamic Keycodes_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Keycodes_obj > result = new Keycodes_obj();
	result->__construct();
	return result;}

int Keycodes_obj::from_scan( int scancode){
	HX_STACK_FRAME("snow.input.Keycodes","from_scan",0x88f2ac7a,"snow.input.Keycodes.from_scan","snow/input/Keycodes.hx",10,0x2f8555c6)
	HX_STACK_ARG(scancode,"scancode")
	HX_STACK_LINE(10)
	return (int(scancode) | int(::snow::input::Scancodes_obj::MASK));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Keycodes_obj,from_scan,return )

int Keycodes_obj::to_scan( int keycode){
	HX_STACK_FRAME("snow.input.Keycodes","to_scan",0x44b4ccc9,"snow.input.Keycodes.to_scan","snow/input/Keycodes.hx",16,0x2f8555c6)
	HX_STACK_ARG(keycode,"keycode")
	HX_STACK_LINE(20)
	if (((((int(keycode) & int(::snow::input::Scancodes_obj::MASK))) != (int)0))){
		HX_STACK_LINE(21)
		return (int(keycode) & int(~(int)(::snow::input::Scancodes_obj::MASK)));
	}
	HX_STACK_LINE(26)
	int _switch_1 = (keycode);
	if (  ( _switch_1==::snow::input::Keycodes_obj::enter)){
		HX_STACK_LINE(27)
		return ::snow::input::Scancodes_obj::enter;
	}
	else if (  ( _switch_1==::snow::input::Keycodes_obj::escape)){
		HX_STACK_LINE(28)
		return ::snow::input::Scancodes_obj::escape;
	}
	else if (  ( _switch_1==::snow::input::Keycodes_obj::backspace)){
		HX_STACK_LINE(29)
		return ::snow::input::Scancodes_obj::backspace;
	}
	else if (  ( _switch_1==::snow::input::Keycodes_obj::tab)){
		HX_STACK_LINE(30)
		return ::snow::input::Scancodes_obj::tab;
	}
	else if (  ( _switch_1==::snow::input::Keycodes_obj::space)){
		HX_STACK_LINE(31)
		return ::snow::input::Scancodes_obj::space;
	}
	else if (  ( _switch_1==::snow::input::Keycodes_obj::slash)){
		HX_STACK_LINE(32)
		return ::snow::input::Scancodes_obj::slash;
	}
	else if (  ( _switch_1==::snow::input::Keycodes_obj::key_0)){
		HX_STACK_LINE(33)
		return ::snow::input::Scancodes_obj::key_0;
	}
	else if (  ( _switch_1==::snow::input::Keycodes_obj::key_1)){
		HX_STACK_LINE(34)
		return ::snow::input::Scancodes_obj::key_1;
	}
	else if (  ( _switch_1==::snow::input::Keycodes_obj::key_2)){
		HX_STACK_LINE(35)
		return ::snow::input::Scancodes_obj::key_2;
	}
	else if (  ( _switch_1==::snow::input::Keycodes_obj::key_3)){
		HX_STACK_LINE(36)
		return ::snow::input::Scancodes_obj::key_3;
	}
	else if (  ( _switch_1==::snow::input::Keycodes_obj::key_4)){
		HX_STACK_LINE(37)
		return ::snow::input::Scancodes_obj::key_4;
	}
	else if (  ( _switch_1==::snow::input::Keycodes_obj::key_5)){
		HX_STACK_LINE(38)
		return ::snow::input::Scancodes_obj::key_5;
	}
	else if (  ( _switch_1==::snow::input::Keycodes_obj::key_6)){
		HX_STACK_LINE(39)
		return ::snow::input::Scancodes_obj::key_6;
	}
	else if (  ( _switch_1==::snow::input::Keycodes_obj::key_7)){
		HX_STACK_LINE(40)
		return ::snow::input::Scancodes_obj::key_7;
	}
	else if (  ( _switch_1==::snow::input::Keycodes_obj::key_8)){
		HX_STACK_LINE(41)
		return ::snow::input::Scancodes_obj::key_8;
	}
	else if (  ( _switch_1==::snow::input::Keycodes_obj::key_9)){
		HX_STACK_LINE(42)
		return ::snow::input::Scancodes_obj::key_9;
	}
	else if (  ( _switch_1==::snow::input::Keycodes_obj::semicolon)){
		HX_STACK_LINE(43)
		return ::snow::input::Scancodes_obj::semicolon;
	}
	else if (  ( _switch_1==::snow::input::Keycodes_obj::equals)){
		HX_STACK_LINE(44)
		return ::snow::input::Scancodes_obj::equals;
	}
	else if (  ( _switch_1==::snow::input::Keycodes_obj::leftbracket)){
		HX_STACK_LINE(45)
		return ::snow::input::Scancodes_obj::leftbracket;
	}
	else if (  ( _switch_1==::snow::input::Keycodes_obj::backslash)){
		HX_STACK_LINE(46)
		return ::snow::input::Scancodes_obj::backslash;
	}
	else if (  ( _switch_1==::snow::input::Keycodes_obj::rightbracket)){
		HX_STACK_LINE(47)
		return ::snow::input::Scancodes_obj::rightbracket;
	}
	else if (  ( _switch_1==::snow::input::Keycodes_obj::backquote)){
		HX_STACK_LINE(48)
		return ::snow::input::Scancodes_obj::grave;
	}
	else if (  ( _switch_1==::snow::input::Keycodes_obj::key_a)){
		HX_STACK_LINE(49)
		return ::snow::input::Scancodes_obj::key_a;
	}
	else if (  ( _switch_1==::snow::input::Keycodes_obj::key_b)){
		HX_STACK_LINE(50)
		return ::snow::input::Scancodes_obj::key_b;
	}
	else if (  ( _switch_1==::snow::input::Keycodes_obj::key_c)){
		HX_STACK_LINE(51)
		return ::snow::input::Scancodes_obj::key_c;
	}
	else if (  ( _switch_1==::snow::input::Keycodes_obj::key_d)){
		HX_STACK_LINE(52)
		return ::snow::input::Scancodes_obj::key_d;
	}
	else if (  ( _switch_1==::snow::input::Keycodes_obj::key_e)){
		HX_STACK_LINE(53)
		return ::snow::input::Scancodes_obj::key_e;
	}
	else if (  ( _switch_1==::snow::input::Keycodes_obj::key_f)){
		HX_STACK_LINE(54)
		return ::snow::input::Scancodes_obj::key_f;
	}
	else if (  ( _switch_1==::snow::input::Keycodes_obj::key_g)){
		HX_STACK_LINE(55)
		return ::snow::input::Scancodes_obj::key_g;
	}
	else if (  ( _switch_1==::snow::input::Keycodes_obj::key_h)){
		HX_STACK_LINE(56)
		return ::snow::input::Scancodes_obj::key_h;
	}
	else if (  ( _switch_1==::snow::input::Keycodes_obj::key_i)){
		HX_STACK_LINE(57)
		return ::snow::input::Scancodes_obj::key_i;
	}
	else if (  ( _switch_1==::snow::input::Keycodes_obj::key_j)){
		HX_STACK_LINE(58)
		return ::snow::input::Scancodes_obj::key_j;
	}
	else if (  ( _switch_1==::snow::input::Keycodes_obj::key_k)){
		HX_STACK_LINE(59)
		return ::snow::input::Scancodes_obj::key_k;
	}
	else if (  ( _switch_1==::snow::input::Keycodes_obj::key_l)){
		HX_STACK_LINE(60)
		return ::snow::input::Scancodes_obj::key_l;
	}
	else if (  ( _switch_1==::snow::input::Keycodes_obj::key_m)){
		HX_STACK_LINE(61)
		return ::snow::input::Scancodes_obj::key_m;
	}
	else if (  ( _switch_1==::snow::input::Keycodes_obj::key_n)){
		HX_STACK_LINE(62)
		return ::snow::input::Scancodes_obj::key_n;
	}
	else if (  ( _switch_1==::snow::input::Keycodes_obj::key_o)){
		HX_STACK_LINE(63)
		return ::snow::input::Scancodes_obj::key_o;
	}
	else if (  ( _switch_1==::snow::input::Keycodes_obj::key_p)){
		HX_STACK_LINE(64)
		return ::snow::input::Scancodes_obj::key_p;
	}
	else if (  ( _switch_1==::snow::input::Keycodes_obj::key_q)){
		HX_STACK_LINE(65)
		return ::snow::input::Scancodes_obj::key_q;
	}
	else if (  ( _switch_1==::snow::input::Keycodes_obj::key_r)){
		HX_STACK_LINE(66)
		return ::snow::input::Scancodes_obj::key_r;
	}
	else if (  ( _switch_1==::snow::input::Keycodes_obj::key_s)){
		HX_STACK_LINE(67)
		return ::snow::input::Scancodes_obj::key_s;
	}
	else if (  ( _switch_1==::snow::input::Keycodes_obj::key_t)){
		HX_STACK_LINE(68)
		return ::snow::input::Scancodes_obj::key_t;
	}
	else if (  ( _switch_1==::snow::input::Keycodes_obj::key_u)){
		HX_STACK_LINE(69)
		return ::snow::input::Scancodes_obj::key_u;
	}
	else if (  ( _switch_1==::snow::input::Keycodes_obj::key_v)){
		HX_STACK_LINE(70)
		return ::snow::input::Scancodes_obj::key_v;
	}
	else if (  ( _switch_1==::snow::input::Keycodes_obj::key_w)){
		HX_STACK_LINE(71)
		return ::snow::input::Scancodes_obj::key_w;
	}
	else if (  ( _switch_1==::snow::input::Keycodes_obj::key_x)){
		HX_STACK_LINE(72)
		return ::snow::input::Scancodes_obj::key_x;
	}
	else if (  ( _switch_1==::snow::input::Keycodes_obj::key_y)){
		HX_STACK_LINE(73)
		return ::snow::input::Scancodes_obj::key_y;
	}
	else if (  ( _switch_1==::snow::input::Keycodes_obj::key_z)){
		HX_STACK_LINE(74)
		return ::snow::input::Scancodes_obj::key_z;
	}
	HX_STACK_LINE(106)
	return ::snow::input::Scancodes_obj::unknown;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Keycodes_obj,to_scan,return )

::String Keycodes_obj::name( int keycode){
	HX_STACK_FRAME("snow.input.Keycodes","name",0xf6af0e83,"snow.input.Keycodes.name","snow/input/Keycodes.hx",111,0x2f8555c6)
	HX_STACK_ARG(keycode,"keycode")
	HX_STACK_LINE(116)
	if (((((int(keycode) & int(::snow::input::Scancodes_obj::MASK))) != (int)0))){
		HX_STACK_LINE(117)
		return ::snow::input::Scancodes_obj::name((int(keycode) & int(~(int)(::snow::input::Scancodes_obj::MASK))));
	}
	HX_STACK_LINE(120)
	int _switch_2 = (keycode);
	if (  ( _switch_2==::snow::input::Keycodes_obj::enter)){
		HX_STACK_LINE(122)
		return ::snow::input::Scancodes_obj::name(::snow::input::Scancodes_obj::enter);
	}
	else if (  ( _switch_2==::snow::input::Keycodes_obj::escape)){
		HX_STACK_LINE(123)
		return ::snow::input::Scancodes_obj::name(::snow::input::Scancodes_obj::escape);
	}
	else if (  ( _switch_2==::snow::input::Keycodes_obj::backspace)){
		HX_STACK_LINE(124)
		return ::snow::input::Scancodes_obj::name(::snow::input::Scancodes_obj::backspace);
	}
	else if (  ( _switch_2==::snow::input::Keycodes_obj::tab)){
		HX_STACK_LINE(125)
		return ::snow::input::Scancodes_obj::name(::snow::input::Scancodes_obj::tab);
	}
	else if (  ( _switch_2==::snow::input::Keycodes_obj::space)){
		HX_STACK_LINE(126)
		return ::snow::input::Scancodes_obj::name(::snow::input::Scancodes_obj::space);
	}
	else if (  ( _switch_2==::snow::input::Keycodes_obj::_delete)){
		HX_STACK_LINE(127)
		return ::snow::input::Scancodes_obj::name(::snow::input::Scancodes_obj::_delete);
	}
	else  {
		HX_STACK_LINE(131)
		::haxe::Utf8 decoder = ::haxe::Utf8_obj::__new(null());		HX_STACK_VAR(decoder,"decoder");
		HX_STACK_LINE(132)
		decoder->addChar(keycode);
		HX_STACK_LINE(134)
		return decoder->toString();
	}
;
;
	HX_STACK_LINE(120)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Keycodes_obj,name,return )

int Keycodes_obj::unknown;

int Keycodes_obj::enter;

int Keycodes_obj::escape;

int Keycodes_obj::backspace;

int Keycodes_obj::tab;

int Keycodes_obj::space;

int Keycodes_obj::exclaim;

int Keycodes_obj::quotedbl;

int Keycodes_obj::hash;

int Keycodes_obj::percent;

int Keycodes_obj::dollar;

int Keycodes_obj::ampersand;

int Keycodes_obj::quote;

int Keycodes_obj::leftparen;

int Keycodes_obj::rightparen;

int Keycodes_obj::asterisk;

int Keycodes_obj::plus;

int Keycodes_obj::comma;

int Keycodes_obj::minus;

int Keycodes_obj::period;

int Keycodes_obj::slash;

int Keycodes_obj::key_0;

int Keycodes_obj::key_1;

int Keycodes_obj::key_2;

int Keycodes_obj::key_3;

int Keycodes_obj::key_4;

int Keycodes_obj::key_5;

int Keycodes_obj::key_6;

int Keycodes_obj::key_7;

int Keycodes_obj::key_8;

int Keycodes_obj::key_9;

int Keycodes_obj::colon;

int Keycodes_obj::semicolon;

int Keycodes_obj::less;

int Keycodes_obj::equals;

int Keycodes_obj::greater;

int Keycodes_obj::question;

int Keycodes_obj::at;

int Keycodes_obj::leftbracket;

int Keycodes_obj::backslash;

int Keycodes_obj::rightbracket;

int Keycodes_obj::caret;

int Keycodes_obj::underscore;

int Keycodes_obj::backquote;

int Keycodes_obj::key_a;

int Keycodes_obj::key_b;

int Keycodes_obj::key_c;

int Keycodes_obj::key_d;

int Keycodes_obj::key_e;

int Keycodes_obj::key_f;

int Keycodes_obj::key_g;

int Keycodes_obj::key_h;

int Keycodes_obj::key_i;

int Keycodes_obj::key_j;

int Keycodes_obj::key_k;

int Keycodes_obj::key_l;

int Keycodes_obj::key_m;

int Keycodes_obj::key_n;

int Keycodes_obj::key_o;

int Keycodes_obj::key_p;

int Keycodes_obj::key_q;

int Keycodes_obj::key_r;

int Keycodes_obj::key_s;

int Keycodes_obj::key_t;

int Keycodes_obj::key_u;

int Keycodes_obj::key_v;

int Keycodes_obj::key_w;

int Keycodes_obj::key_x;

int Keycodes_obj::key_y;

int Keycodes_obj::key_z;

int Keycodes_obj::capslock;

int Keycodes_obj::f1;

int Keycodes_obj::f2;

int Keycodes_obj::f3;

int Keycodes_obj::f4;

int Keycodes_obj::f5;

int Keycodes_obj::f6;

int Keycodes_obj::f7;

int Keycodes_obj::f8;

int Keycodes_obj::f9;

int Keycodes_obj::f10;

int Keycodes_obj::f11;

int Keycodes_obj::f12;

int Keycodes_obj::printscreen;

int Keycodes_obj::scrolllock;

int Keycodes_obj::pause;

int Keycodes_obj::insert;

int Keycodes_obj::home;

int Keycodes_obj::pageup;

int Keycodes_obj::_delete;

int Keycodes_obj::end;

int Keycodes_obj::pagedown;

int Keycodes_obj::right;

int Keycodes_obj::left;

int Keycodes_obj::down;

int Keycodes_obj::up;

int Keycodes_obj::numlockclear;

int Keycodes_obj::kp_divide;

int Keycodes_obj::kp_multiply;

int Keycodes_obj::kp_minus;

int Keycodes_obj::kp_plus;

int Keycodes_obj::kp_enter;

int Keycodes_obj::kp_1;

int Keycodes_obj::kp_2;

int Keycodes_obj::kp_3;

int Keycodes_obj::kp_4;

int Keycodes_obj::kp_5;

int Keycodes_obj::kp_6;

int Keycodes_obj::kp_7;

int Keycodes_obj::kp_8;

int Keycodes_obj::kp_9;

int Keycodes_obj::kp_0;

int Keycodes_obj::kp_period;

int Keycodes_obj::application;

int Keycodes_obj::power;

int Keycodes_obj::kp_equals;

int Keycodes_obj::f13;

int Keycodes_obj::f14;

int Keycodes_obj::f15;

int Keycodes_obj::f16;

int Keycodes_obj::f17;

int Keycodes_obj::f18;

int Keycodes_obj::f19;

int Keycodes_obj::f20;

int Keycodes_obj::f21;

int Keycodes_obj::f22;

int Keycodes_obj::f23;

int Keycodes_obj::f24;

int Keycodes_obj::execute;

int Keycodes_obj::help;

int Keycodes_obj::menu;

int Keycodes_obj::select;

int Keycodes_obj::stop;

int Keycodes_obj::again;

int Keycodes_obj::undo;

int Keycodes_obj::cut;

int Keycodes_obj::copy;

int Keycodes_obj::paste;

int Keycodes_obj::find;

int Keycodes_obj::mute;

int Keycodes_obj::volumeup;

int Keycodes_obj::volumedown;

int Keycodes_obj::kp_comma;

int Keycodes_obj::kp_equalsas400;

int Keycodes_obj::alterase;

int Keycodes_obj::sysreq;

int Keycodes_obj::cancel;

int Keycodes_obj::clear;

int Keycodes_obj::prior;

int Keycodes_obj::return2;

int Keycodes_obj::separator;

int Keycodes_obj::out;

int Keycodes_obj::oper;

int Keycodes_obj::clearagain;

int Keycodes_obj::crsel;

int Keycodes_obj::exsel;

int Keycodes_obj::kp_00;

int Keycodes_obj::kp_000;

int Keycodes_obj::thousandsseparator;

int Keycodes_obj::decimalseparator;

int Keycodes_obj::currencyunit;

int Keycodes_obj::currencysubunit;

int Keycodes_obj::kp_leftparen;

int Keycodes_obj::kp_rightparen;

int Keycodes_obj::kp_leftbrace;

int Keycodes_obj::kp_rightbrace;

int Keycodes_obj::kp_tab;

int Keycodes_obj::kp_backspace;

int Keycodes_obj::kp_a;

int Keycodes_obj::kp_b;

int Keycodes_obj::kp_c;

int Keycodes_obj::kp_d;

int Keycodes_obj::kp_e;

int Keycodes_obj::kp_f;

int Keycodes_obj::kp_xor;

int Keycodes_obj::kp_power;

int Keycodes_obj::kp_percent;

int Keycodes_obj::kp_less;

int Keycodes_obj::kp_greater;

int Keycodes_obj::kp_ampersand;

int Keycodes_obj::kp_dblampersand;

int Keycodes_obj::kp_verticalbar;

int Keycodes_obj::kp_dblverticalbar;

int Keycodes_obj::kp_colon;

int Keycodes_obj::kp_hash;

int Keycodes_obj::kp_space;

int Keycodes_obj::kp_at;

int Keycodes_obj::kp_exclam;

int Keycodes_obj::kp_memstore;

int Keycodes_obj::kp_memrecall;

int Keycodes_obj::kp_memclear;

int Keycodes_obj::kp_memadd;

int Keycodes_obj::kp_memsubtract;

int Keycodes_obj::kp_memmultiply;

int Keycodes_obj::kp_memdivide;

int Keycodes_obj::kp_plusminus;

int Keycodes_obj::kp_clear;

int Keycodes_obj::kp_clearentry;

int Keycodes_obj::kp_binary;

int Keycodes_obj::kp_octal;

int Keycodes_obj::kp_decimal;

int Keycodes_obj::kp_hexadecimal;

int Keycodes_obj::lctrl;

int Keycodes_obj::lshift;

int Keycodes_obj::lalt;

int Keycodes_obj::lmeta;

int Keycodes_obj::rctrl;

int Keycodes_obj::rshift;

int Keycodes_obj::ralt;

int Keycodes_obj::rmeta;

int Keycodes_obj::mode;

int Keycodes_obj::audionext;

int Keycodes_obj::audioprev;

int Keycodes_obj::audiostop;

int Keycodes_obj::audioplay;

int Keycodes_obj::audiomute;

int Keycodes_obj::mediaselect;

int Keycodes_obj::www;

int Keycodes_obj::mail;

int Keycodes_obj::calculator;

int Keycodes_obj::computer;

int Keycodes_obj::ac_search;

int Keycodes_obj::ac_home;

int Keycodes_obj::ac_back;

int Keycodes_obj::ac_forward;

int Keycodes_obj::ac_stop;

int Keycodes_obj::ac_refresh;

int Keycodes_obj::ac_bookmarks;

int Keycodes_obj::brightnessdown;

int Keycodes_obj::brightnessup;

int Keycodes_obj::displayswitch;

int Keycodes_obj::kbdillumtoggle;

int Keycodes_obj::kbdillumdown;

int Keycodes_obj::kbdillumup;

int Keycodes_obj::eject;

int Keycodes_obj::sleep;


Keycodes_obj::Keycodes_obj()
{
}

Dynamic Keycodes_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"at") ) { return at; }
		if (HX_FIELD_EQ(inName,"f1") ) { return f1; }
		if (HX_FIELD_EQ(inName,"f2") ) { return f2; }
		if (HX_FIELD_EQ(inName,"f3") ) { return f3; }
		if (HX_FIELD_EQ(inName,"f4") ) { return f4; }
		if (HX_FIELD_EQ(inName,"f5") ) { return f5; }
		if (HX_FIELD_EQ(inName,"f6") ) { return f6; }
		if (HX_FIELD_EQ(inName,"f7") ) { return f7; }
		if (HX_FIELD_EQ(inName,"f8") ) { return f8; }
		if (HX_FIELD_EQ(inName,"f9") ) { return f9; }
		if (HX_FIELD_EQ(inName,"up") ) { return up; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"tab") ) { return tab; }
		if (HX_FIELD_EQ(inName,"f10") ) { return f10; }
		if (HX_FIELD_EQ(inName,"f11") ) { return f11; }
		if (HX_FIELD_EQ(inName,"f12") ) { return f12; }
		if (HX_FIELD_EQ(inName,"end") ) { return end; }
		if (HX_FIELD_EQ(inName,"f13") ) { return f13; }
		if (HX_FIELD_EQ(inName,"f14") ) { return f14; }
		if (HX_FIELD_EQ(inName,"f15") ) { return f15; }
		if (HX_FIELD_EQ(inName,"f16") ) { return f16; }
		if (HX_FIELD_EQ(inName,"f17") ) { return f17; }
		if (HX_FIELD_EQ(inName,"f18") ) { return f18; }
		if (HX_FIELD_EQ(inName,"f19") ) { return f19; }
		if (HX_FIELD_EQ(inName,"f20") ) { return f20; }
		if (HX_FIELD_EQ(inName,"f21") ) { return f21; }
		if (HX_FIELD_EQ(inName,"f22") ) { return f22; }
		if (HX_FIELD_EQ(inName,"f23") ) { return f23; }
		if (HX_FIELD_EQ(inName,"f24") ) { return f24; }
		if (HX_FIELD_EQ(inName,"cut") ) { return cut; }
		if (HX_FIELD_EQ(inName,"out") ) { return out; }
		if (HX_FIELD_EQ(inName,"www") ) { return www; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return name_dyn(); }
		if (HX_FIELD_EQ(inName,"hash") ) { return hash; }
		if (HX_FIELD_EQ(inName,"plus") ) { return plus; }
		if (HX_FIELD_EQ(inName,"less") ) { return less; }
		if (HX_FIELD_EQ(inName,"home") ) { return home; }
		if (HX_FIELD_EQ(inName,"left") ) { return left; }
		if (HX_FIELD_EQ(inName,"down") ) { return down; }
		if (HX_FIELD_EQ(inName,"kp_1") ) { return kp_1; }
		if (HX_FIELD_EQ(inName,"kp_2") ) { return kp_2; }
		if (HX_FIELD_EQ(inName,"kp_3") ) { return kp_3; }
		if (HX_FIELD_EQ(inName,"kp_4") ) { return kp_4; }
		if (HX_FIELD_EQ(inName,"kp_5") ) { return kp_5; }
		if (HX_FIELD_EQ(inName,"kp_6") ) { return kp_6; }
		if (HX_FIELD_EQ(inName,"kp_7") ) { return kp_7; }
		if (HX_FIELD_EQ(inName,"kp_8") ) { return kp_8; }
		if (HX_FIELD_EQ(inName,"kp_9") ) { return kp_9; }
		if (HX_FIELD_EQ(inName,"kp_0") ) { return kp_0; }
		if (HX_FIELD_EQ(inName,"help") ) { return help; }
		if (HX_FIELD_EQ(inName,"menu") ) { return menu; }
		if (HX_FIELD_EQ(inName,"stop") ) { return stop; }
		if (HX_FIELD_EQ(inName,"undo") ) { return undo; }
		if (HX_FIELD_EQ(inName,"copy") ) { return copy; }
		if (HX_FIELD_EQ(inName,"find") ) { return find; }
		if (HX_FIELD_EQ(inName,"mute") ) { return mute; }
		if (HX_FIELD_EQ(inName,"oper") ) { return oper; }
		if (HX_FIELD_EQ(inName,"kp_a") ) { return kp_a; }
		if (HX_FIELD_EQ(inName,"kp_b") ) { return kp_b; }
		if (HX_FIELD_EQ(inName,"kp_c") ) { return kp_c; }
		if (HX_FIELD_EQ(inName,"kp_d") ) { return kp_d; }
		if (HX_FIELD_EQ(inName,"kp_e") ) { return kp_e; }
		if (HX_FIELD_EQ(inName,"kp_f") ) { return kp_f; }
		if (HX_FIELD_EQ(inName,"lalt") ) { return lalt; }
		if (HX_FIELD_EQ(inName,"ralt") ) { return ralt; }
		if (HX_FIELD_EQ(inName,"mode") ) { return mode; }
		if (HX_FIELD_EQ(inName,"mail") ) { return mail; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"enter") ) { return enter; }
		if (HX_FIELD_EQ(inName,"space") ) { return space; }
		if (HX_FIELD_EQ(inName,"quote") ) { return quote; }
		if (HX_FIELD_EQ(inName,"comma") ) { return comma; }
		if (HX_FIELD_EQ(inName,"minus") ) { return minus; }
		if (HX_FIELD_EQ(inName,"slash") ) { return slash; }
		if (HX_FIELD_EQ(inName,"key_0") ) { return key_0; }
		if (HX_FIELD_EQ(inName,"key_1") ) { return key_1; }
		if (HX_FIELD_EQ(inName,"key_2") ) { return key_2; }
		if (HX_FIELD_EQ(inName,"key_3") ) { return key_3; }
		if (HX_FIELD_EQ(inName,"key_4") ) { return key_4; }
		if (HX_FIELD_EQ(inName,"key_5") ) { return key_5; }
		if (HX_FIELD_EQ(inName,"key_6") ) { return key_6; }
		if (HX_FIELD_EQ(inName,"key_7") ) { return key_7; }
		if (HX_FIELD_EQ(inName,"key_8") ) { return key_8; }
		if (HX_FIELD_EQ(inName,"key_9") ) { return key_9; }
		if (HX_FIELD_EQ(inName,"colon") ) { return colon; }
		if (HX_FIELD_EQ(inName,"caret") ) { return caret; }
		if (HX_FIELD_EQ(inName,"key_a") ) { return key_a; }
		if (HX_FIELD_EQ(inName,"key_b") ) { return key_b; }
		if (HX_FIELD_EQ(inName,"key_c") ) { return key_c; }
		if (HX_FIELD_EQ(inName,"key_d") ) { return key_d; }
		if (HX_FIELD_EQ(inName,"key_e") ) { return key_e; }
		if (HX_FIELD_EQ(inName,"key_f") ) { return key_f; }
		if (HX_FIELD_EQ(inName,"key_g") ) { return key_g; }
		if (HX_FIELD_EQ(inName,"key_h") ) { return key_h; }
		if (HX_FIELD_EQ(inName,"key_i") ) { return key_i; }
		if (HX_FIELD_EQ(inName,"key_j") ) { return key_j; }
		if (HX_FIELD_EQ(inName,"key_k") ) { return key_k; }
		if (HX_FIELD_EQ(inName,"key_l") ) { return key_l; }
		if (HX_FIELD_EQ(inName,"key_m") ) { return key_m; }
		if (HX_FIELD_EQ(inName,"key_n") ) { return key_n; }
		if (HX_FIELD_EQ(inName,"key_o") ) { return key_o; }
		if (HX_FIELD_EQ(inName,"key_p") ) { return key_p; }
		if (HX_FIELD_EQ(inName,"key_q") ) { return key_q; }
		if (HX_FIELD_EQ(inName,"key_r") ) { return key_r; }
		if (HX_FIELD_EQ(inName,"key_s") ) { return key_s; }
		if (HX_FIELD_EQ(inName,"key_t") ) { return key_t; }
		if (HX_FIELD_EQ(inName,"key_u") ) { return key_u; }
		if (HX_FIELD_EQ(inName,"key_v") ) { return key_v; }
		if (HX_FIELD_EQ(inName,"key_w") ) { return key_w; }
		if (HX_FIELD_EQ(inName,"key_x") ) { return key_x; }
		if (HX_FIELD_EQ(inName,"key_y") ) { return key_y; }
		if (HX_FIELD_EQ(inName,"key_z") ) { return key_z; }
		if (HX_FIELD_EQ(inName,"pause") ) { return pause; }
		if (HX_FIELD_EQ(inName,"right") ) { return right; }
		if (HX_FIELD_EQ(inName,"power") ) { return power; }
		if (HX_FIELD_EQ(inName,"again") ) { return again; }
		if (HX_FIELD_EQ(inName,"paste") ) { return paste; }
		if (HX_FIELD_EQ(inName,"clear") ) { return clear; }
		if (HX_FIELD_EQ(inName,"prior") ) { return prior; }
		if (HX_FIELD_EQ(inName,"crsel") ) { return crsel; }
		if (HX_FIELD_EQ(inName,"exsel") ) { return exsel; }
		if (HX_FIELD_EQ(inName,"kp_00") ) { return kp_00; }
		if (HX_FIELD_EQ(inName,"kp_at") ) { return kp_at; }
		if (HX_FIELD_EQ(inName,"lctrl") ) { return lctrl; }
		if (HX_FIELD_EQ(inName,"lmeta") ) { return lmeta; }
		if (HX_FIELD_EQ(inName,"rctrl") ) { return rctrl; }
		if (HX_FIELD_EQ(inName,"rmeta") ) { return rmeta; }
		if (HX_FIELD_EQ(inName,"eject") ) { return eject; }
		if (HX_FIELD_EQ(inName,"sleep") ) { return sleep; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"escape") ) { return escape; }
		if (HX_FIELD_EQ(inName,"dollar") ) { return dollar; }
		if (HX_FIELD_EQ(inName,"period") ) { return period; }
		if (HX_FIELD_EQ(inName,"equals") ) { return equals; }
		if (HX_FIELD_EQ(inName,"insert") ) { return insert; }
		if (HX_FIELD_EQ(inName,"pageup") ) { return pageup; }
		if (HX_FIELD_EQ(inName,"delete") ) { return _delete; }
		if (HX_FIELD_EQ(inName,"select") ) { return select; }
		if (HX_FIELD_EQ(inName,"sysreq") ) { return sysreq; }
		if (HX_FIELD_EQ(inName,"cancel") ) { return cancel; }
		if (HX_FIELD_EQ(inName,"kp_000") ) { return kp_000; }
		if (HX_FIELD_EQ(inName,"kp_tab") ) { return kp_tab; }
		if (HX_FIELD_EQ(inName,"kp_xor") ) { return kp_xor; }
		if (HX_FIELD_EQ(inName,"lshift") ) { return lshift; }
		if (HX_FIELD_EQ(inName,"rshift") ) { return rshift; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"to_scan") ) { return to_scan_dyn(); }
		if (HX_FIELD_EQ(inName,"unknown") ) { return unknown; }
		if (HX_FIELD_EQ(inName,"exclaim") ) { return exclaim; }
		if (HX_FIELD_EQ(inName,"percent") ) { return percent; }
		if (HX_FIELD_EQ(inName,"greater") ) { return greater; }
		if (HX_FIELD_EQ(inName,"kp_plus") ) { return kp_plus; }
		if (HX_FIELD_EQ(inName,"execute") ) { return execute; }
		if (HX_FIELD_EQ(inName,"return2") ) { return return2; }
		if (HX_FIELD_EQ(inName,"kp_less") ) { return kp_less; }
		if (HX_FIELD_EQ(inName,"kp_hash") ) { return kp_hash; }
		if (HX_FIELD_EQ(inName,"ac_home") ) { return ac_home; }
		if (HX_FIELD_EQ(inName,"ac_back") ) { return ac_back; }
		if (HX_FIELD_EQ(inName,"ac_stop") ) { return ac_stop; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"quotedbl") ) { return quotedbl; }
		if (HX_FIELD_EQ(inName,"asterisk") ) { return asterisk; }
		if (HX_FIELD_EQ(inName,"question") ) { return question; }
		if (HX_FIELD_EQ(inName,"capslock") ) { return capslock; }
		if (HX_FIELD_EQ(inName,"pagedown") ) { return pagedown; }
		if (HX_FIELD_EQ(inName,"kp_minus") ) { return kp_minus; }
		if (HX_FIELD_EQ(inName,"kp_enter") ) { return kp_enter; }
		if (HX_FIELD_EQ(inName,"volumeup") ) { return volumeup; }
		if (HX_FIELD_EQ(inName,"kp_comma") ) { return kp_comma; }
		if (HX_FIELD_EQ(inName,"alterase") ) { return alterase; }
		if (HX_FIELD_EQ(inName,"kp_power") ) { return kp_power; }
		if (HX_FIELD_EQ(inName,"kp_colon") ) { return kp_colon; }
		if (HX_FIELD_EQ(inName,"kp_space") ) { return kp_space; }
		if (HX_FIELD_EQ(inName,"kp_clear") ) { return kp_clear; }
		if (HX_FIELD_EQ(inName,"kp_octal") ) { return kp_octal; }
		if (HX_FIELD_EQ(inName,"computer") ) { return computer; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"from_scan") ) { return from_scan_dyn(); }
		if (HX_FIELD_EQ(inName,"backspace") ) { return backspace; }
		if (HX_FIELD_EQ(inName,"ampersand") ) { return ampersand; }
		if (HX_FIELD_EQ(inName,"leftparen") ) { return leftparen; }
		if (HX_FIELD_EQ(inName,"semicolon") ) { return semicolon; }
		if (HX_FIELD_EQ(inName,"backslash") ) { return backslash; }
		if (HX_FIELD_EQ(inName,"backquote") ) { return backquote; }
		if (HX_FIELD_EQ(inName,"kp_divide") ) { return kp_divide; }
		if (HX_FIELD_EQ(inName,"kp_period") ) { return kp_period; }
		if (HX_FIELD_EQ(inName,"kp_equals") ) { return kp_equals; }
		if (HX_FIELD_EQ(inName,"separator") ) { return separator; }
		if (HX_FIELD_EQ(inName,"kp_exclam") ) { return kp_exclam; }
		if (HX_FIELD_EQ(inName,"kp_memadd") ) { return kp_memadd; }
		if (HX_FIELD_EQ(inName,"kp_binary") ) { return kp_binary; }
		if (HX_FIELD_EQ(inName,"audionext") ) { return audionext; }
		if (HX_FIELD_EQ(inName,"audioprev") ) { return audioprev; }
		if (HX_FIELD_EQ(inName,"audiostop") ) { return audiostop; }
		if (HX_FIELD_EQ(inName,"audioplay") ) { return audioplay; }
		if (HX_FIELD_EQ(inName,"audiomute") ) { return audiomute; }
		if (HX_FIELD_EQ(inName,"ac_search") ) { return ac_search; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"rightparen") ) { return rightparen; }
		if (HX_FIELD_EQ(inName,"underscore") ) { return underscore; }
		if (HX_FIELD_EQ(inName,"scrolllock") ) { return scrolllock; }
		if (HX_FIELD_EQ(inName,"volumedown") ) { return volumedown; }
		if (HX_FIELD_EQ(inName,"clearagain") ) { return clearagain; }
		if (HX_FIELD_EQ(inName,"kp_percent") ) { return kp_percent; }
		if (HX_FIELD_EQ(inName,"kp_greater") ) { return kp_greater; }
		if (HX_FIELD_EQ(inName,"kp_decimal") ) { return kp_decimal; }
		if (HX_FIELD_EQ(inName,"calculator") ) { return calculator; }
		if (HX_FIELD_EQ(inName,"ac_forward") ) { return ac_forward; }
		if (HX_FIELD_EQ(inName,"ac_refresh") ) { return ac_refresh; }
		if (HX_FIELD_EQ(inName,"kbdillumup") ) { return kbdillumup; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"leftbracket") ) { return leftbracket; }
		if (HX_FIELD_EQ(inName,"printscreen") ) { return printscreen; }
		if (HX_FIELD_EQ(inName,"kp_multiply") ) { return kp_multiply; }
		if (HX_FIELD_EQ(inName,"application") ) { return application; }
		if (HX_FIELD_EQ(inName,"kp_memstore") ) { return kp_memstore; }
		if (HX_FIELD_EQ(inName,"kp_memclear") ) { return kp_memclear; }
		if (HX_FIELD_EQ(inName,"mediaselect") ) { return mediaselect; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"rightbracket") ) { return rightbracket; }
		if (HX_FIELD_EQ(inName,"numlockclear") ) { return numlockclear; }
		if (HX_FIELD_EQ(inName,"currencyunit") ) { return currencyunit; }
		if (HX_FIELD_EQ(inName,"kp_leftparen") ) { return kp_leftparen; }
		if (HX_FIELD_EQ(inName,"kp_leftbrace") ) { return kp_leftbrace; }
		if (HX_FIELD_EQ(inName,"kp_backspace") ) { return kp_backspace; }
		if (HX_FIELD_EQ(inName,"kp_ampersand") ) { return kp_ampersand; }
		if (HX_FIELD_EQ(inName,"kp_memrecall") ) { return kp_memrecall; }
		if (HX_FIELD_EQ(inName,"kp_memdivide") ) { return kp_memdivide; }
		if (HX_FIELD_EQ(inName,"kp_plusminus") ) { return kp_plusminus; }
		if (HX_FIELD_EQ(inName,"ac_bookmarks") ) { return ac_bookmarks; }
		if (HX_FIELD_EQ(inName,"brightnessup") ) { return brightnessup; }
		if (HX_FIELD_EQ(inName,"kbdillumdown") ) { return kbdillumdown; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"kp_rightparen") ) { return kp_rightparen; }
		if (HX_FIELD_EQ(inName,"kp_rightbrace") ) { return kp_rightbrace; }
		if (HX_FIELD_EQ(inName,"kp_clearentry") ) { return kp_clearentry; }
		if (HX_FIELD_EQ(inName,"displayswitch") ) { return displayswitch; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"kp_equalsas400") ) { return kp_equalsas400; }
		if (HX_FIELD_EQ(inName,"kp_verticalbar") ) { return kp_verticalbar; }
		if (HX_FIELD_EQ(inName,"kp_memsubtract") ) { return kp_memsubtract; }
		if (HX_FIELD_EQ(inName,"kp_memmultiply") ) { return kp_memmultiply; }
		if (HX_FIELD_EQ(inName,"kp_hexadecimal") ) { return kp_hexadecimal; }
		if (HX_FIELD_EQ(inName,"brightnessdown") ) { return brightnessdown; }
		if (HX_FIELD_EQ(inName,"kbdillumtoggle") ) { return kbdillumtoggle; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"currencysubunit") ) { return currencysubunit; }
		if (HX_FIELD_EQ(inName,"kp_dblampersand") ) { return kp_dblampersand; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"decimalseparator") ) { return decimalseparator; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"kp_dblverticalbar") ) { return kp_dblverticalbar; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"thousandsseparator") ) { return thousandsseparator; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Keycodes_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"at") ) { at=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"f1") ) { f1=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"f2") ) { f2=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"f3") ) { f3=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"f4") ) { f4=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"f5") ) { f5=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"f6") ) { f6=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"f7") ) { f7=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"f8") ) { f8=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"f9") ) { f9=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"up") ) { up=inValue.Cast< int >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"tab") ) { tab=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"f10") ) { f10=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"f11") ) { f11=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"f12") ) { f12=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"end") ) { end=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"f13") ) { f13=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"f14") ) { f14=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"f15") ) { f15=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"f16") ) { f16=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"f17") ) { f17=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"f18") ) { f18=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"f19") ) { f19=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"f20") ) { f20=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"f21") ) { f21=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"f22") ) { f22=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"f23") ) { f23=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"f24") ) { f24=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"cut") ) { cut=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"out") ) { out=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"www") ) { www=inValue.Cast< int >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"hash") ) { hash=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"plus") ) { plus=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"less") ) { less=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"home") ) { home=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"left") ) { left=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"down") ) { down=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"kp_1") ) { kp_1=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"kp_2") ) { kp_2=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"kp_3") ) { kp_3=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"kp_4") ) { kp_4=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"kp_5") ) { kp_5=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"kp_6") ) { kp_6=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"kp_7") ) { kp_7=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"kp_8") ) { kp_8=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"kp_9") ) { kp_9=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"kp_0") ) { kp_0=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"help") ) { help=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"menu") ) { menu=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"stop") ) { stop=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"undo") ) { undo=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"copy") ) { copy=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"find") ) { find=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mute") ) { mute=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"oper") ) { oper=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"kp_a") ) { kp_a=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"kp_b") ) { kp_b=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"kp_c") ) { kp_c=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"kp_d") ) { kp_d=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"kp_e") ) { kp_e=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"kp_f") ) { kp_f=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lalt") ) { lalt=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ralt") ) { ralt=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mode") ) { mode=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mail") ) { mail=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"enter") ) { enter=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"space") ) { space=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"quote") ) { quote=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"comma") ) { comma=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"minus") ) { minus=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"slash") ) { slash=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"key_0") ) { key_0=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"key_1") ) { key_1=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"key_2") ) { key_2=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"key_3") ) { key_3=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"key_4") ) { key_4=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"key_5") ) { key_5=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"key_6") ) { key_6=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"key_7") ) { key_7=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"key_8") ) { key_8=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"key_9") ) { key_9=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"colon") ) { colon=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"caret") ) { caret=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"key_a") ) { key_a=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"key_b") ) { key_b=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"key_c") ) { key_c=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"key_d") ) { key_d=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"key_e") ) { key_e=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"key_f") ) { key_f=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"key_g") ) { key_g=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"key_h") ) { key_h=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"key_i") ) { key_i=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"key_j") ) { key_j=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"key_k") ) { key_k=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"key_l") ) { key_l=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"key_m") ) { key_m=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"key_n") ) { key_n=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"key_o") ) { key_o=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"key_p") ) { key_p=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"key_q") ) { key_q=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"key_r") ) { key_r=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"key_s") ) { key_s=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"key_t") ) { key_t=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"key_u") ) { key_u=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"key_v") ) { key_v=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"key_w") ) { key_w=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"key_x") ) { key_x=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"key_y") ) { key_y=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"key_z") ) { key_z=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"pause") ) { pause=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"right") ) { right=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"power") ) { power=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"again") ) { again=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"paste") ) { paste=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"clear") ) { clear=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"prior") ) { prior=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"crsel") ) { crsel=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"exsel") ) { exsel=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"kp_00") ) { kp_00=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"kp_at") ) { kp_at=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lctrl") ) { lctrl=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lmeta") ) { lmeta=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"rctrl") ) { rctrl=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"rmeta") ) { rmeta=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"eject") ) { eject=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"sleep") ) { sleep=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"escape") ) { escape=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"dollar") ) { dollar=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"period") ) { period=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"equals") ) { equals=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"insert") ) { insert=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"pageup") ) { pageup=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"delete") ) { _delete=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"select") ) { select=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"sysreq") ) { sysreq=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"cancel") ) { cancel=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"kp_000") ) { kp_000=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"kp_tab") ) { kp_tab=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"kp_xor") ) { kp_xor=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lshift") ) { lshift=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"rshift") ) { rshift=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"unknown") ) { unknown=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"exclaim") ) { exclaim=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"percent") ) { percent=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"greater") ) { greater=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"kp_plus") ) { kp_plus=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"execute") ) { execute=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"return2") ) { return2=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"kp_less") ) { kp_less=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"kp_hash") ) { kp_hash=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ac_home") ) { ac_home=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ac_back") ) { ac_back=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ac_stop") ) { ac_stop=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"quotedbl") ) { quotedbl=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"asterisk") ) { asterisk=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"question") ) { question=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"capslock") ) { capslock=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"pagedown") ) { pagedown=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"kp_minus") ) { kp_minus=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"kp_enter") ) { kp_enter=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"volumeup") ) { volumeup=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"kp_comma") ) { kp_comma=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"alterase") ) { alterase=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"kp_power") ) { kp_power=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"kp_colon") ) { kp_colon=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"kp_space") ) { kp_space=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"kp_clear") ) { kp_clear=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"kp_octal") ) { kp_octal=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"computer") ) { computer=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"backspace") ) { backspace=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ampersand") ) { ampersand=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"leftparen") ) { leftparen=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"semicolon") ) { semicolon=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"backslash") ) { backslash=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"backquote") ) { backquote=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"kp_divide") ) { kp_divide=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"kp_period") ) { kp_period=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"kp_equals") ) { kp_equals=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"separator") ) { separator=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"kp_exclam") ) { kp_exclam=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"kp_memadd") ) { kp_memadd=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"kp_binary") ) { kp_binary=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"audionext") ) { audionext=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"audioprev") ) { audioprev=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"audiostop") ) { audiostop=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"audioplay") ) { audioplay=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"audiomute") ) { audiomute=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ac_search") ) { ac_search=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"rightparen") ) { rightparen=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"underscore") ) { underscore=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scrolllock") ) { scrolllock=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"volumedown") ) { volumedown=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"clearagain") ) { clearagain=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"kp_percent") ) { kp_percent=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"kp_greater") ) { kp_greater=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"kp_decimal") ) { kp_decimal=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"calculator") ) { calculator=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ac_forward") ) { ac_forward=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ac_refresh") ) { ac_refresh=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"kbdillumup") ) { kbdillumup=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"leftbracket") ) { leftbracket=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"printscreen") ) { printscreen=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"kp_multiply") ) { kp_multiply=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"application") ) { application=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"kp_memstore") ) { kp_memstore=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"kp_memclear") ) { kp_memclear=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mediaselect") ) { mediaselect=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"rightbracket") ) { rightbracket=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"numlockclear") ) { numlockclear=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"currencyunit") ) { currencyunit=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"kp_leftparen") ) { kp_leftparen=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"kp_leftbrace") ) { kp_leftbrace=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"kp_backspace") ) { kp_backspace=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"kp_ampersand") ) { kp_ampersand=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"kp_memrecall") ) { kp_memrecall=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"kp_memdivide") ) { kp_memdivide=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"kp_plusminus") ) { kp_plusminus=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ac_bookmarks") ) { ac_bookmarks=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"brightnessup") ) { brightnessup=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"kbdillumdown") ) { kbdillumdown=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"kp_rightparen") ) { kp_rightparen=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"kp_rightbrace") ) { kp_rightbrace=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"kp_clearentry") ) { kp_clearentry=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"displayswitch") ) { displayswitch=inValue.Cast< int >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"kp_equalsas400") ) { kp_equalsas400=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"kp_verticalbar") ) { kp_verticalbar=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"kp_memsubtract") ) { kp_memsubtract=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"kp_memmultiply") ) { kp_memmultiply=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"kp_hexadecimal") ) { kp_hexadecimal=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"brightnessdown") ) { brightnessdown=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"kbdillumtoggle") ) { kbdillumtoggle=inValue.Cast< int >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"currencysubunit") ) { currencysubunit=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"kp_dblampersand") ) { kp_dblampersand=inValue.Cast< int >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"decimalseparator") ) { decimalseparator=inValue.Cast< int >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"kp_dblverticalbar") ) { kp_dblverticalbar=inValue.Cast< int >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"thousandsseparator") ) { thousandsseparator=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Keycodes_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("from_scan"),
	HX_CSTRING("to_scan"),
	HX_CSTRING("name"),
	HX_CSTRING("unknown"),
	HX_CSTRING("enter"),
	HX_CSTRING("escape"),
	HX_CSTRING("backspace"),
	HX_CSTRING("tab"),
	HX_CSTRING("space"),
	HX_CSTRING("exclaim"),
	HX_CSTRING("quotedbl"),
	HX_CSTRING("hash"),
	HX_CSTRING("percent"),
	HX_CSTRING("dollar"),
	HX_CSTRING("ampersand"),
	HX_CSTRING("quote"),
	HX_CSTRING("leftparen"),
	HX_CSTRING("rightparen"),
	HX_CSTRING("asterisk"),
	HX_CSTRING("plus"),
	HX_CSTRING("comma"),
	HX_CSTRING("minus"),
	HX_CSTRING("period"),
	HX_CSTRING("slash"),
	HX_CSTRING("key_0"),
	HX_CSTRING("key_1"),
	HX_CSTRING("key_2"),
	HX_CSTRING("key_3"),
	HX_CSTRING("key_4"),
	HX_CSTRING("key_5"),
	HX_CSTRING("key_6"),
	HX_CSTRING("key_7"),
	HX_CSTRING("key_8"),
	HX_CSTRING("key_9"),
	HX_CSTRING("colon"),
	HX_CSTRING("semicolon"),
	HX_CSTRING("less"),
	HX_CSTRING("equals"),
	HX_CSTRING("greater"),
	HX_CSTRING("question"),
	HX_CSTRING("at"),
	HX_CSTRING("leftbracket"),
	HX_CSTRING("backslash"),
	HX_CSTRING("rightbracket"),
	HX_CSTRING("caret"),
	HX_CSTRING("underscore"),
	HX_CSTRING("backquote"),
	HX_CSTRING("key_a"),
	HX_CSTRING("key_b"),
	HX_CSTRING("key_c"),
	HX_CSTRING("key_d"),
	HX_CSTRING("key_e"),
	HX_CSTRING("key_f"),
	HX_CSTRING("key_g"),
	HX_CSTRING("key_h"),
	HX_CSTRING("key_i"),
	HX_CSTRING("key_j"),
	HX_CSTRING("key_k"),
	HX_CSTRING("key_l"),
	HX_CSTRING("key_m"),
	HX_CSTRING("key_n"),
	HX_CSTRING("key_o"),
	HX_CSTRING("key_p"),
	HX_CSTRING("key_q"),
	HX_CSTRING("key_r"),
	HX_CSTRING("key_s"),
	HX_CSTRING("key_t"),
	HX_CSTRING("key_u"),
	HX_CSTRING("key_v"),
	HX_CSTRING("key_w"),
	HX_CSTRING("key_x"),
	HX_CSTRING("key_y"),
	HX_CSTRING("key_z"),
	HX_CSTRING("capslock"),
	HX_CSTRING("f1"),
	HX_CSTRING("f2"),
	HX_CSTRING("f3"),
	HX_CSTRING("f4"),
	HX_CSTRING("f5"),
	HX_CSTRING("f6"),
	HX_CSTRING("f7"),
	HX_CSTRING("f8"),
	HX_CSTRING("f9"),
	HX_CSTRING("f10"),
	HX_CSTRING("f11"),
	HX_CSTRING("f12"),
	HX_CSTRING("printscreen"),
	HX_CSTRING("scrolllock"),
	HX_CSTRING("pause"),
	HX_CSTRING("insert"),
	HX_CSTRING("home"),
	HX_CSTRING("pageup"),
	HX_CSTRING("delete"),
	HX_CSTRING("end"),
	HX_CSTRING("pagedown"),
	HX_CSTRING("right"),
	HX_CSTRING("left"),
	HX_CSTRING("down"),
	HX_CSTRING("up"),
	HX_CSTRING("numlockclear"),
	HX_CSTRING("kp_divide"),
	HX_CSTRING("kp_multiply"),
	HX_CSTRING("kp_minus"),
	HX_CSTRING("kp_plus"),
	HX_CSTRING("kp_enter"),
	HX_CSTRING("kp_1"),
	HX_CSTRING("kp_2"),
	HX_CSTRING("kp_3"),
	HX_CSTRING("kp_4"),
	HX_CSTRING("kp_5"),
	HX_CSTRING("kp_6"),
	HX_CSTRING("kp_7"),
	HX_CSTRING("kp_8"),
	HX_CSTRING("kp_9"),
	HX_CSTRING("kp_0"),
	HX_CSTRING("kp_period"),
	HX_CSTRING("application"),
	HX_CSTRING("power"),
	HX_CSTRING("kp_equals"),
	HX_CSTRING("f13"),
	HX_CSTRING("f14"),
	HX_CSTRING("f15"),
	HX_CSTRING("f16"),
	HX_CSTRING("f17"),
	HX_CSTRING("f18"),
	HX_CSTRING("f19"),
	HX_CSTRING("f20"),
	HX_CSTRING("f21"),
	HX_CSTRING("f22"),
	HX_CSTRING("f23"),
	HX_CSTRING("f24"),
	HX_CSTRING("execute"),
	HX_CSTRING("help"),
	HX_CSTRING("menu"),
	HX_CSTRING("select"),
	HX_CSTRING("stop"),
	HX_CSTRING("again"),
	HX_CSTRING("undo"),
	HX_CSTRING("cut"),
	HX_CSTRING("copy"),
	HX_CSTRING("paste"),
	HX_CSTRING("find"),
	HX_CSTRING("mute"),
	HX_CSTRING("volumeup"),
	HX_CSTRING("volumedown"),
	HX_CSTRING("kp_comma"),
	HX_CSTRING("kp_equalsas400"),
	HX_CSTRING("alterase"),
	HX_CSTRING("sysreq"),
	HX_CSTRING("cancel"),
	HX_CSTRING("clear"),
	HX_CSTRING("prior"),
	HX_CSTRING("return2"),
	HX_CSTRING("separator"),
	HX_CSTRING("out"),
	HX_CSTRING("oper"),
	HX_CSTRING("clearagain"),
	HX_CSTRING("crsel"),
	HX_CSTRING("exsel"),
	HX_CSTRING("kp_00"),
	HX_CSTRING("kp_000"),
	HX_CSTRING("thousandsseparator"),
	HX_CSTRING("decimalseparator"),
	HX_CSTRING("currencyunit"),
	HX_CSTRING("currencysubunit"),
	HX_CSTRING("kp_leftparen"),
	HX_CSTRING("kp_rightparen"),
	HX_CSTRING("kp_leftbrace"),
	HX_CSTRING("kp_rightbrace"),
	HX_CSTRING("kp_tab"),
	HX_CSTRING("kp_backspace"),
	HX_CSTRING("kp_a"),
	HX_CSTRING("kp_b"),
	HX_CSTRING("kp_c"),
	HX_CSTRING("kp_d"),
	HX_CSTRING("kp_e"),
	HX_CSTRING("kp_f"),
	HX_CSTRING("kp_xor"),
	HX_CSTRING("kp_power"),
	HX_CSTRING("kp_percent"),
	HX_CSTRING("kp_less"),
	HX_CSTRING("kp_greater"),
	HX_CSTRING("kp_ampersand"),
	HX_CSTRING("kp_dblampersand"),
	HX_CSTRING("kp_verticalbar"),
	HX_CSTRING("kp_dblverticalbar"),
	HX_CSTRING("kp_colon"),
	HX_CSTRING("kp_hash"),
	HX_CSTRING("kp_space"),
	HX_CSTRING("kp_at"),
	HX_CSTRING("kp_exclam"),
	HX_CSTRING("kp_memstore"),
	HX_CSTRING("kp_memrecall"),
	HX_CSTRING("kp_memclear"),
	HX_CSTRING("kp_memadd"),
	HX_CSTRING("kp_memsubtract"),
	HX_CSTRING("kp_memmultiply"),
	HX_CSTRING("kp_memdivide"),
	HX_CSTRING("kp_plusminus"),
	HX_CSTRING("kp_clear"),
	HX_CSTRING("kp_clearentry"),
	HX_CSTRING("kp_binary"),
	HX_CSTRING("kp_octal"),
	HX_CSTRING("kp_decimal"),
	HX_CSTRING("kp_hexadecimal"),
	HX_CSTRING("lctrl"),
	HX_CSTRING("lshift"),
	HX_CSTRING("lalt"),
	HX_CSTRING("lmeta"),
	HX_CSTRING("rctrl"),
	HX_CSTRING("rshift"),
	HX_CSTRING("ralt"),
	HX_CSTRING("rmeta"),
	HX_CSTRING("mode"),
	HX_CSTRING("audionext"),
	HX_CSTRING("audioprev"),
	HX_CSTRING("audiostop"),
	HX_CSTRING("audioplay"),
	HX_CSTRING("audiomute"),
	HX_CSTRING("mediaselect"),
	HX_CSTRING("www"),
	HX_CSTRING("mail"),
	HX_CSTRING("calculator"),
	HX_CSTRING("computer"),
	HX_CSTRING("ac_search"),
	HX_CSTRING("ac_home"),
	HX_CSTRING("ac_back"),
	HX_CSTRING("ac_forward"),
	HX_CSTRING("ac_stop"),
	HX_CSTRING("ac_refresh"),
	HX_CSTRING("ac_bookmarks"),
	HX_CSTRING("brightnessdown"),
	HX_CSTRING("brightnessup"),
	HX_CSTRING("displayswitch"),
	HX_CSTRING("kbdillumtoggle"),
	HX_CSTRING("kbdillumdown"),
	HX_CSTRING("kbdillumup"),
	HX_CSTRING("eject"),
	HX_CSTRING("sleep"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Keycodes_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Keycodes_obj::unknown,"unknown");
	HX_MARK_MEMBER_NAME(Keycodes_obj::enter,"enter");
	HX_MARK_MEMBER_NAME(Keycodes_obj::escape,"escape");
	HX_MARK_MEMBER_NAME(Keycodes_obj::backspace,"backspace");
	HX_MARK_MEMBER_NAME(Keycodes_obj::tab,"tab");
	HX_MARK_MEMBER_NAME(Keycodes_obj::space,"space");
	HX_MARK_MEMBER_NAME(Keycodes_obj::exclaim,"exclaim");
	HX_MARK_MEMBER_NAME(Keycodes_obj::quotedbl,"quotedbl");
	HX_MARK_MEMBER_NAME(Keycodes_obj::hash,"hash");
	HX_MARK_MEMBER_NAME(Keycodes_obj::percent,"percent");
	HX_MARK_MEMBER_NAME(Keycodes_obj::dollar,"dollar");
	HX_MARK_MEMBER_NAME(Keycodes_obj::ampersand,"ampersand");
	HX_MARK_MEMBER_NAME(Keycodes_obj::quote,"quote");
	HX_MARK_MEMBER_NAME(Keycodes_obj::leftparen,"leftparen");
	HX_MARK_MEMBER_NAME(Keycodes_obj::rightparen,"rightparen");
	HX_MARK_MEMBER_NAME(Keycodes_obj::asterisk,"asterisk");
	HX_MARK_MEMBER_NAME(Keycodes_obj::plus,"plus");
	HX_MARK_MEMBER_NAME(Keycodes_obj::comma,"comma");
	HX_MARK_MEMBER_NAME(Keycodes_obj::minus,"minus");
	HX_MARK_MEMBER_NAME(Keycodes_obj::period,"period");
	HX_MARK_MEMBER_NAME(Keycodes_obj::slash,"slash");
	HX_MARK_MEMBER_NAME(Keycodes_obj::key_0,"key_0");
	HX_MARK_MEMBER_NAME(Keycodes_obj::key_1,"key_1");
	HX_MARK_MEMBER_NAME(Keycodes_obj::key_2,"key_2");
	HX_MARK_MEMBER_NAME(Keycodes_obj::key_3,"key_3");
	HX_MARK_MEMBER_NAME(Keycodes_obj::key_4,"key_4");
	HX_MARK_MEMBER_NAME(Keycodes_obj::key_5,"key_5");
	HX_MARK_MEMBER_NAME(Keycodes_obj::key_6,"key_6");
	HX_MARK_MEMBER_NAME(Keycodes_obj::key_7,"key_7");
	HX_MARK_MEMBER_NAME(Keycodes_obj::key_8,"key_8");
	HX_MARK_MEMBER_NAME(Keycodes_obj::key_9,"key_9");
	HX_MARK_MEMBER_NAME(Keycodes_obj::colon,"colon");
	HX_MARK_MEMBER_NAME(Keycodes_obj::semicolon,"semicolon");
	HX_MARK_MEMBER_NAME(Keycodes_obj::less,"less");
	HX_MARK_MEMBER_NAME(Keycodes_obj::equals,"equals");
	HX_MARK_MEMBER_NAME(Keycodes_obj::greater,"greater");
	HX_MARK_MEMBER_NAME(Keycodes_obj::question,"question");
	HX_MARK_MEMBER_NAME(Keycodes_obj::at,"at");
	HX_MARK_MEMBER_NAME(Keycodes_obj::leftbracket,"leftbracket");
	HX_MARK_MEMBER_NAME(Keycodes_obj::backslash,"backslash");
	HX_MARK_MEMBER_NAME(Keycodes_obj::rightbracket,"rightbracket");
	HX_MARK_MEMBER_NAME(Keycodes_obj::caret,"caret");
	HX_MARK_MEMBER_NAME(Keycodes_obj::underscore,"underscore");
	HX_MARK_MEMBER_NAME(Keycodes_obj::backquote,"backquote");
	HX_MARK_MEMBER_NAME(Keycodes_obj::key_a,"key_a");
	HX_MARK_MEMBER_NAME(Keycodes_obj::key_b,"key_b");
	HX_MARK_MEMBER_NAME(Keycodes_obj::key_c,"key_c");
	HX_MARK_MEMBER_NAME(Keycodes_obj::key_d,"key_d");
	HX_MARK_MEMBER_NAME(Keycodes_obj::key_e,"key_e");
	HX_MARK_MEMBER_NAME(Keycodes_obj::key_f,"key_f");
	HX_MARK_MEMBER_NAME(Keycodes_obj::key_g,"key_g");
	HX_MARK_MEMBER_NAME(Keycodes_obj::key_h,"key_h");
	HX_MARK_MEMBER_NAME(Keycodes_obj::key_i,"key_i");
	HX_MARK_MEMBER_NAME(Keycodes_obj::key_j,"key_j");
	HX_MARK_MEMBER_NAME(Keycodes_obj::key_k,"key_k");
	HX_MARK_MEMBER_NAME(Keycodes_obj::key_l,"key_l");
	HX_MARK_MEMBER_NAME(Keycodes_obj::key_m,"key_m");
	HX_MARK_MEMBER_NAME(Keycodes_obj::key_n,"key_n");
	HX_MARK_MEMBER_NAME(Keycodes_obj::key_o,"key_o");
	HX_MARK_MEMBER_NAME(Keycodes_obj::key_p,"key_p");
	HX_MARK_MEMBER_NAME(Keycodes_obj::key_q,"key_q");
	HX_MARK_MEMBER_NAME(Keycodes_obj::key_r,"key_r");
	HX_MARK_MEMBER_NAME(Keycodes_obj::key_s,"key_s");
	HX_MARK_MEMBER_NAME(Keycodes_obj::key_t,"key_t");
	HX_MARK_MEMBER_NAME(Keycodes_obj::key_u,"key_u");
	HX_MARK_MEMBER_NAME(Keycodes_obj::key_v,"key_v");
	HX_MARK_MEMBER_NAME(Keycodes_obj::key_w,"key_w");
	HX_MARK_MEMBER_NAME(Keycodes_obj::key_x,"key_x");
	HX_MARK_MEMBER_NAME(Keycodes_obj::key_y,"key_y");
	HX_MARK_MEMBER_NAME(Keycodes_obj::key_z,"key_z");
	HX_MARK_MEMBER_NAME(Keycodes_obj::capslock,"capslock");
	HX_MARK_MEMBER_NAME(Keycodes_obj::f1,"f1");
	HX_MARK_MEMBER_NAME(Keycodes_obj::f2,"f2");
	HX_MARK_MEMBER_NAME(Keycodes_obj::f3,"f3");
	HX_MARK_MEMBER_NAME(Keycodes_obj::f4,"f4");
	HX_MARK_MEMBER_NAME(Keycodes_obj::f5,"f5");
	HX_MARK_MEMBER_NAME(Keycodes_obj::f6,"f6");
	HX_MARK_MEMBER_NAME(Keycodes_obj::f7,"f7");
	HX_MARK_MEMBER_NAME(Keycodes_obj::f8,"f8");
	HX_MARK_MEMBER_NAME(Keycodes_obj::f9,"f9");
	HX_MARK_MEMBER_NAME(Keycodes_obj::f10,"f10");
	HX_MARK_MEMBER_NAME(Keycodes_obj::f11,"f11");
	HX_MARK_MEMBER_NAME(Keycodes_obj::f12,"f12");
	HX_MARK_MEMBER_NAME(Keycodes_obj::printscreen,"printscreen");
	HX_MARK_MEMBER_NAME(Keycodes_obj::scrolllock,"scrolllock");
	HX_MARK_MEMBER_NAME(Keycodes_obj::pause,"pause");
	HX_MARK_MEMBER_NAME(Keycodes_obj::insert,"insert");
	HX_MARK_MEMBER_NAME(Keycodes_obj::home,"home");
	HX_MARK_MEMBER_NAME(Keycodes_obj::pageup,"pageup");
	HX_MARK_MEMBER_NAME(Keycodes_obj::_delete,"delete");
	HX_MARK_MEMBER_NAME(Keycodes_obj::end,"end");
	HX_MARK_MEMBER_NAME(Keycodes_obj::pagedown,"pagedown");
	HX_MARK_MEMBER_NAME(Keycodes_obj::right,"right");
	HX_MARK_MEMBER_NAME(Keycodes_obj::left,"left");
	HX_MARK_MEMBER_NAME(Keycodes_obj::down,"down");
	HX_MARK_MEMBER_NAME(Keycodes_obj::up,"up");
	HX_MARK_MEMBER_NAME(Keycodes_obj::numlockclear,"numlockclear");
	HX_MARK_MEMBER_NAME(Keycodes_obj::kp_divide,"kp_divide");
	HX_MARK_MEMBER_NAME(Keycodes_obj::kp_multiply,"kp_multiply");
	HX_MARK_MEMBER_NAME(Keycodes_obj::kp_minus,"kp_minus");
	HX_MARK_MEMBER_NAME(Keycodes_obj::kp_plus,"kp_plus");
	HX_MARK_MEMBER_NAME(Keycodes_obj::kp_enter,"kp_enter");
	HX_MARK_MEMBER_NAME(Keycodes_obj::kp_1,"kp_1");
	HX_MARK_MEMBER_NAME(Keycodes_obj::kp_2,"kp_2");
	HX_MARK_MEMBER_NAME(Keycodes_obj::kp_3,"kp_3");
	HX_MARK_MEMBER_NAME(Keycodes_obj::kp_4,"kp_4");
	HX_MARK_MEMBER_NAME(Keycodes_obj::kp_5,"kp_5");
	HX_MARK_MEMBER_NAME(Keycodes_obj::kp_6,"kp_6");
	HX_MARK_MEMBER_NAME(Keycodes_obj::kp_7,"kp_7");
	HX_MARK_MEMBER_NAME(Keycodes_obj::kp_8,"kp_8");
	HX_MARK_MEMBER_NAME(Keycodes_obj::kp_9,"kp_9");
	HX_MARK_MEMBER_NAME(Keycodes_obj::kp_0,"kp_0");
	HX_MARK_MEMBER_NAME(Keycodes_obj::kp_period,"kp_period");
	HX_MARK_MEMBER_NAME(Keycodes_obj::application,"application");
	HX_MARK_MEMBER_NAME(Keycodes_obj::power,"power");
	HX_MARK_MEMBER_NAME(Keycodes_obj::kp_equals,"kp_equals");
	HX_MARK_MEMBER_NAME(Keycodes_obj::f13,"f13");
	HX_MARK_MEMBER_NAME(Keycodes_obj::f14,"f14");
	HX_MARK_MEMBER_NAME(Keycodes_obj::f15,"f15");
	HX_MARK_MEMBER_NAME(Keycodes_obj::f16,"f16");
	HX_MARK_MEMBER_NAME(Keycodes_obj::f17,"f17");
	HX_MARK_MEMBER_NAME(Keycodes_obj::f18,"f18");
	HX_MARK_MEMBER_NAME(Keycodes_obj::f19,"f19");
	HX_MARK_MEMBER_NAME(Keycodes_obj::f20,"f20");
	HX_MARK_MEMBER_NAME(Keycodes_obj::f21,"f21");
	HX_MARK_MEMBER_NAME(Keycodes_obj::f22,"f22");
	HX_MARK_MEMBER_NAME(Keycodes_obj::f23,"f23");
	HX_MARK_MEMBER_NAME(Keycodes_obj::f24,"f24");
	HX_MARK_MEMBER_NAME(Keycodes_obj::execute,"execute");
	HX_MARK_MEMBER_NAME(Keycodes_obj::help,"help");
	HX_MARK_MEMBER_NAME(Keycodes_obj::menu,"menu");
	HX_MARK_MEMBER_NAME(Keycodes_obj::select,"select");
	HX_MARK_MEMBER_NAME(Keycodes_obj::stop,"stop");
	HX_MARK_MEMBER_NAME(Keycodes_obj::again,"again");
	HX_MARK_MEMBER_NAME(Keycodes_obj::undo,"undo");
	HX_MARK_MEMBER_NAME(Keycodes_obj::cut,"cut");
	HX_MARK_MEMBER_NAME(Keycodes_obj::copy,"copy");
	HX_MARK_MEMBER_NAME(Keycodes_obj::paste,"paste");
	HX_MARK_MEMBER_NAME(Keycodes_obj::find,"find");
	HX_MARK_MEMBER_NAME(Keycodes_obj::mute,"mute");
	HX_MARK_MEMBER_NAME(Keycodes_obj::volumeup,"volumeup");
	HX_MARK_MEMBER_NAME(Keycodes_obj::volumedown,"volumedown");
	HX_MARK_MEMBER_NAME(Keycodes_obj::kp_comma,"kp_comma");
	HX_MARK_MEMBER_NAME(Keycodes_obj::kp_equalsas400,"kp_equalsas400");
	HX_MARK_MEMBER_NAME(Keycodes_obj::alterase,"alterase");
	HX_MARK_MEMBER_NAME(Keycodes_obj::sysreq,"sysreq");
	HX_MARK_MEMBER_NAME(Keycodes_obj::cancel,"cancel");
	HX_MARK_MEMBER_NAME(Keycodes_obj::clear,"clear");
	HX_MARK_MEMBER_NAME(Keycodes_obj::prior,"prior");
	HX_MARK_MEMBER_NAME(Keycodes_obj::return2,"return2");
	HX_MARK_MEMBER_NAME(Keycodes_obj::separator,"separator");
	HX_MARK_MEMBER_NAME(Keycodes_obj::out,"out");
	HX_MARK_MEMBER_NAME(Keycodes_obj::oper,"oper");
	HX_MARK_MEMBER_NAME(Keycodes_obj::clearagain,"clearagain");
	HX_MARK_MEMBER_NAME(Keycodes_obj::crsel,"crsel");
	HX_MARK_MEMBER_NAME(Keycodes_obj::exsel,"exsel");
	HX_MARK_MEMBER_NAME(Keycodes_obj::kp_00,"kp_00");
	HX_MARK_MEMBER_NAME(Keycodes_obj::kp_000,"kp_000");
	HX_MARK_MEMBER_NAME(Keycodes_obj::thousandsseparator,"thousandsseparator");
	HX_MARK_MEMBER_NAME(Keycodes_obj::decimalseparator,"decimalseparator");
	HX_MARK_MEMBER_NAME(Keycodes_obj::currencyunit,"currencyunit");
	HX_MARK_MEMBER_NAME(Keycodes_obj::currencysubunit,"currencysubunit");
	HX_MARK_MEMBER_NAME(Keycodes_obj::kp_leftparen,"kp_leftparen");
	HX_MARK_MEMBER_NAME(Keycodes_obj::kp_rightparen,"kp_rightparen");
	HX_MARK_MEMBER_NAME(Keycodes_obj::kp_leftbrace,"kp_leftbrace");
	HX_MARK_MEMBER_NAME(Keycodes_obj::kp_rightbrace,"kp_rightbrace");
	HX_MARK_MEMBER_NAME(Keycodes_obj::kp_tab,"kp_tab");
	HX_MARK_MEMBER_NAME(Keycodes_obj::kp_backspace,"kp_backspace");
	HX_MARK_MEMBER_NAME(Keycodes_obj::kp_a,"kp_a");
	HX_MARK_MEMBER_NAME(Keycodes_obj::kp_b,"kp_b");
	HX_MARK_MEMBER_NAME(Keycodes_obj::kp_c,"kp_c");
	HX_MARK_MEMBER_NAME(Keycodes_obj::kp_d,"kp_d");
	HX_MARK_MEMBER_NAME(Keycodes_obj::kp_e,"kp_e");
	HX_MARK_MEMBER_NAME(Keycodes_obj::kp_f,"kp_f");
	HX_MARK_MEMBER_NAME(Keycodes_obj::kp_xor,"kp_xor");
	HX_MARK_MEMBER_NAME(Keycodes_obj::kp_power,"kp_power");
	HX_MARK_MEMBER_NAME(Keycodes_obj::kp_percent,"kp_percent");
	HX_MARK_MEMBER_NAME(Keycodes_obj::kp_less,"kp_less");
	HX_MARK_MEMBER_NAME(Keycodes_obj::kp_greater,"kp_greater");
	HX_MARK_MEMBER_NAME(Keycodes_obj::kp_ampersand,"kp_ampersand");
	HX_MARK_MEMBER_NAME(Keycodes_obj::kp_dblampersand,"kp_dblampersand");
	HX_MARK_MEMBER_NAME(Keycodes_obj::kp_verticalbar,"kp_verticalbar");
	HX_MARK_MEMBER_NAME(Keycodes_obj::kp_dblverticalbar,"kp_dblverticalbar");
	HX_MARK_MEMBER_NAME(Keycodes_obj::kp_colon,"kp_colon");
	HX_MARK_MEMBER_NAME(Keycodes_obj::kp_hash,"kp_hash");
	HX_MARK_MEMBER_NAME(Keycodes_obj::kp_space,"kp_space");
	HX_MARK_MEMBER_NAME(Keycodes_obj::kp_at,"kp_at");
	HX_MARK_MEMBER_NAME(Keycodes_obj::kp_exclam,"kp_exclam");
	HX_MARK_MEMBER_NAME(Keycodes_obj::kp_memstore,"kp_memstore");
	HX_MARK_MEMBER_NAME(Keycodes_obj::kp_memrecall,"kp_memrecall");
	HX_MARK_MEMBER_NAME(Keycodes_obj::kp_memclear,"kp_memclear");
	HX_MARK_MEMBER_NAME(Keycodes_obj::kp_memadd,"kp_memadd");
	HX_MARK_MEMBER_NAME(Keycodes_obj::kp_memsubtract,"kp_memsubtract");
	HX_MARK_MEMBER_NAME(Keycodes_obj::kp_memmultiply,"kp_memmultiply");
	HX_MARK_MEMBER_NAME(Keycodes_obj::kp_memdivide,"kp_memdivide");
	HX_MARK_MEMBER_NAME(Keycodes_obj::kp_plusminus,"kp_plusminus");
	HX_MARK_MEMBER_NAME(Keycodes_obj::kp_clear,"kp_clear");
	HX_MARK_MEMBER_NAME(Keycodes_obj::kp_clearentry,"kp_clearentry");
	HX_MARK_MEMBER_NAME(Keycodes_obj::kp_binary,"kp_binary");
	HX_MARK_MEMBER_NAME(Keycodes_obj::kp_octal,"kp_octal");
	HX_MARK_MEMBER_NAME(Keycodes_obj::kp_decimal,"kp_decimal");
	HX_MARK_MEMBER_NAME(Keycodes_obj::kp_hexadecimal,"kp_hexadecimal");
	HX_MARK_MEMBER_NAME(Keycodes_obj::lctrl,"lctrl");
	HX_MARK_MEMBER_NAME(Keycodes_obj::lshift,"lshift");
	HX_MARK_MEMBER_NAME(Keycodes_obj::lalt,"lalt");
	HX_MARK_MEMBER_NAME(Keycodes_obj::lmeta,"lmeta");
	HX_MARK_MEMBER_NAME(Keycodes_obj::rctrl,"rctrl");
	HX_MARK_MEMBER_NAME(Keycodes_obj::rshift,"rshift");
	HX_MARK_MEMBER_NAME(Keycodes_obj::ralt,"ralt");
	HX_MARK_MEMBER_NAME(Keycodes_obj::rmeta,"rmeta");
	HX_MARK_MEMBER_NAME(Keycodes_obj::mode,"mode");
	HX_MARK_MEMBER_NAME(Keycodes_obj::audionext,"audionext");
	HX_MARK_MEMBER_NAME(Keycodes_obj::audioprev,"audioprev");
	HX_MARK_MEMBER_NAME(Keycodes_obj::audiostop,"audiostop");
	HX_MARK_MEMBER_NAME(Keycodes_obj::audioplay,"audioplay");
	HX_MARK_MEMBER_NAME(Keycodes_obj::audiomute,"audiomute");
	HX_MARK_MEMBER_NAME(Keycodes_obj::mediaselect,"mediaselect");
	HX_MARK_MEMBER_NAME(Keycodes_obj::www,"www");
	HX_MARK_MEMBER_NAME(Keycodes_obj::mail,"mail");
	HX_MARK_MEMBER_NAME(Keycodes_obj::calculator,"calculator");
	HX_MARK_MEMBER_NAME(Keycodes_obj::computer,"computer");
	HX_MARK_MEMBER_NAME(Keycodes_obj::ac_search,"ac_search");
	HX_MARK_MEMBER_NAME(Keycodes_obj::ac_home,"ac_home");
	HX_MARK_MEMBER_NAME(Keycodes_obj::ac_back,"ac_back");
	HX_MARK_MEMBER_NAME(Keycodes_obj::ac_forward,"ac_forward");
	HX_MARK_MEMBER_NAME(Keycodes_obj::ac_stop,"ac_stop");
	HX_MARK_MEMBER_NAME(Keycodes_obj::ac_refresh,"ac_refresh");
	HX_MARK_MEMBER_NAME(Keycodes_obj::ac_bookmarks,"ac_bookmarks");
	HX_MARK_MEMBER_NAME(Keycodes_obj::brightnessdown,"brightnessdown");
	HX_MARK_MEMBER_NAME(Keycodes_obj::brightnessup,"brightnessup");
	HX_MARK_MEMBER_NAME(Keycodes_obj::displayswitch,"displayswitch");
	HX_MARK_MEMBER_NAME(Keycodes_obj::kbdillumtoggle,"kbdillumtoggle");
	HX_MARK_MEMBER_NAME(Keycodes_obj::kbdillumdown,"kbdillumdown");
	HX_MARK_MEMBER_NAME(Keycodes_obj::kbdillumup,"kbdillumup");
	HX_MARK_MEMBER_NAME(Keycodes_obj::eject,"eject");
	HX_MARK_MEMBER_NAME(Keycodes_obj::sleep,"sleep");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Keycodes_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::unknown,"unknown");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::enter,"enter");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::escape,"escape");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::backspace,"backspace");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::tab,"tab");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::space,"space");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::exclaim,"exclaim");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::quotedbl,"quotedbl");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::hash,"hash");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::percent,"percent");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::dollar,"dollar");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::ampersand,"ampersand");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::quote,"quote");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::leftparen,"leftparen");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::rightparen,"rightparen");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::asterisk,"asterisk");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::plus,"plus");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::comma,"comma");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::minus,"minus");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::period,"period");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::slash,"slash");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::key_0,"key_0");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::key_1,"key_1");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::key_2,"key_2");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::key_3,"key_3");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::key_4,"key_4");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::key_5,"key_5");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::key_6,"key_6");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::key_7,"key_7");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::key_8,"key_8");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::key_9,"key_9");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::colon,"colon");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::semicolon,"semicolon");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::less,"less");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::equals,"equals");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::greater,"greater");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::question,"question");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::at,"at");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::leftbracket,"leftbracket");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::backslash,"backslash");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::rightbracket,"rightbracket");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::caret,"caret");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::underscore,"underscore");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::backquote,"backquote");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::key_a,"key_a");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::key_b,"key_b");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::key_c,"key_c");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::key_d,"key_d");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::key_e,"key_e");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::key_f,"key_f");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::key_g,"key_g");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::key_h,"key_h");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::key_i,"key_i");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::key_j,"key_j");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::key_k,"key_k");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::key_l,"key_l");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::key_m,"key_m");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::key_n,"key_n");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::key_o,"key_o");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::key_p,"key_p");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::key_q,"key_q");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::key_r,"key_r");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::key_s,"key_s");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::key_t,"key_t");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::key_u,"key_u");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::key_v,"key_v");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::key_w,"key_w");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::key_x,"key_x");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::key_y,"key_y");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::key_z,"key_z");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::capslock,"capslock");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::f1,"f1");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::f2,"f2");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::f3,"f3");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::f4,"f4");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::f5,"f5");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::f6,"f6");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::f7,"f7");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::f8,"f8");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::f9,"f9");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::f10,"f10");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::f11,"f11");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::f12,"f12");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::printscreen,"printscreen");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::scrolllock,"scrolllock");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::pause,"pause");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::insert,"insert");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::home,"home");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::pageup,"pageup");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::_delete,"delete");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::end,"end");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::pagedown,"pagedown");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::right,"right");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::left,"left");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::down,"down");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::up,"up");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::numlockclear,"numlockclear");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::kp_divide,"kp_divide");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::kp_multiply,"kp_multiply");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::kp_minus,"kp_minus");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::kp_plus,"kp_plus");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::kp_enter,"kp_enter");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::kp_1,"kp_1");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::kp_2,"kp_2");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::kp_3,"kp_3");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::kp_4,"kp_4");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::kp_5,"kp_5");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::kp_6,"kp_6");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::kp_7,"kp_7");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::kp_8,"kp_8");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::kp_9,"kp_9");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::kp_0,"kp_0");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::kp_period,"kp_period");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::application,"application");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::power,"power");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::kp_equals,"kp_equals");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::f13,"f13");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::f14,"f14");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::f15,"f15");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::f16,"f16");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::f17,"f17");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::f18,"f18");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::f19,"f19");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::f20,"f20");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::f21,"f21");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::f22,"f22");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::f23,"f23");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::f24,"f24");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::execute,"execute");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::help,"help");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::menu,"menu");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::select,"select");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::stop,"stop");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::again,"again");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::undo,"undo");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::cut,"cut");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::copy,"copy");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::paste,"paste");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::find,"find");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::mute,"mute");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::volumeup,"volumeup");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::volumedown,"volumedown");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::kp_comma,"kp_comma");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::kp_equalsas400,"kp_equalsas400");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::alterase,"alterase");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::sysreq,"sysreq");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::cancel,"cancel");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::clear,"clear");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::prior,"prior");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::return2,"return2");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::separator,"separator");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::out,"out");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::oper,"oper");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::clearagain,"clearagain");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::crsel,"crsel");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::exsel,"exsel");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::kp_00,"kp_00");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::kp_000,"kp_000");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::thousandsseparator,"thousandsseparator");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::decimalseparator,"decimalseparator");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::currencyunit,"currencyunit");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::currencysubunit,"currencysubunit");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::kp_leftparen,"kp_leftparen");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::kp_rightparen,"kp_rightparen");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::kp_leftbrace,"kp_leftbrace");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::kp_rightbrace,"kp_rightbrace");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::kp_tab,"kp_tab");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::kp_backspace,"kp_backspace");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::kp_a,"kp_a");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::kp_b,"kp_b");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::kp_c,"kp_c");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::kp_d,"kp_d");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::kp_e,"kp_e");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::kp_f,"kp_f");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::kp_xor,"kp_xor");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::kp_power,"kp_power");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::kp_percent,"kp_percent");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::kp_less,"kp_less");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::kp_greater,"kp_greater");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::kp_ampersand,"kp_ampersand");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::kp_dblampersand,"kp_dblampersand");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::kp_verticalbar,"kp_verticalbar");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::kp_dblverticalbar,"kp_dblverticalbar");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::kp_colon,"kp_colon");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::kp_hash,"kp_hash");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::kp_space,"kp_space");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::kp_at,"kp_at");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::kp_exclam,"kp_exclam");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::kp_memstore,"kp_memstore");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::kp_memrecall,"kp_memrecall");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::kp_memclear,"kp_memclear");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::kp_memadd,"kp_memadd");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::kp_memsubtract,"kp_memsubtract");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::kp_memmultiply,"kp_memmultiply");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::kp_memdivide,"kp_memdivide");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::kp_plusminus,"kp_plusminus");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::kp_clear,"kp_clear");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::kp_clearentry,"kp_clearentry");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::kp_binary,"kp_binary");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::kp_octal,"kp_octal");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::kp_decimal,"kp_decimal");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::kp_hexadecimal,"kp_hexadecimal");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::lctrl,"lctrl");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::lshift,"lshift");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::lalt,"lalt");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::lmeta,"lmeta");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::rctrl,"rctrl");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::rshift,"rshift");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::ralt,"ralt");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::rmeta,"rmeta");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::mode,"mode");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::audionext,"audionext");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::audioprev,"audioprev");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::audiostop,"audiostop");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::audioplay,"audioplay");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::audiomute,"audiomute");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::mediaselect,"mediaselect");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::www,"www");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::mail,"mail");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::calculator,"calculator");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::computer,"computer");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::ac_search,"ac_search");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::ac_home,"ac_home");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::ac_back,"ac_back");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::ac_forward,"ac_forward");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::ac_stop,"ac_stop");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::ac_refresh,"ac_refresh");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::ac_bookmarks,"ac_bookmarks");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::brightnessdown,"brightnessdown");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::brightnessup,"brightnessup");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::displayswitch,"displayswitch");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::kbdillumtoggle,"kbdillumtoggle");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::kbdillumdown,"kbdillumdown");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::kbdillumup,"kbdillumup");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::eject,"eject");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::sleep,"sleep");
};

#endif

Class Keycodes_obj::__mClass;

void Keycodes_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("snow.input.Keycodes"), hx::TCanCast< Keycodes_obj> ,sStaticFields,sMemberFields,
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

void Keycodes_obj::__boot()
{
	unknown= (int)0;
	enter= (int)13;
	escape= (int)27;
	backspace= (int)8;
	tab= (int)9;
	space= (int)32;
	exclaim= (int)33;
	quotedbl= (int)34;
	hash= (int)35;
	percent= (int)37;
	dollar= (int)36;
	ampersand= (int)38;
	quote= (int)39;
	leftparen= (int)40;
	rightparen= (int)41;
	asterisk= (int)42;
	plus= (int)43;
	comma= (int)44;
	minus= (int)45;
	period= (int)46;
	slash= (int)47;
	key_0= (int)48;
	key_1= (int)49;
	key_2= (int)50;
	key_3= (int)51;
	key_4= (int)52;
	key_5= (int)53;
	key_6= (int)54;
	key_7= (int)55;
	key_8= (int)56;
	key_9= (int)57;
	colon= (int)58;
	semicolon= (int)59;
	less= (int)60;
	equals= (int)61;
	greater= (int)62;
	question= (int)63;
	at= (int)64;
	leftbracket= (int)91;
	backslash= (int)92;
	rightbracket= (int)93;
	caret= (int)94;
	underscore= (int)95;
	backquote= (int)96;
	key_a= (int)97;
	key_b= (int)98;
	key_c= (int)99;
	key_d= (int)100;
	key_e= (int)101;
	key_f= (int)102;
	key_g= (int)103;
	key_h= (int)104;
	key_i= (int)105;
	key_j= (int)106;
	key_k= (int)107;
	key_l= (int)108;
	key_m= (int)109;
	key_n= (int)110;
	key_o= (int)111;
	key_p= (int)112;
	key_q= (int)113;
	key_r= (int)114;
	key_s= (int)115;
	key_t= (int)116;
	key_u= (int)117;
	key_v= (int)118;
	key_w= (int)119;
	key_x= (int)120;
	key_y= (int)121;
	key_z= (int)122;
	capslock= ::snow::input::Keycodes_obj::from_scan(::snow::input::Scancodes_obj::capslock);
	f1= ::snow::input::Keycodes_obj::from_scan(::snow::input::Scancodes_obj::f1);
	f2= ::snow::input::Keycodes_obj::from_scan(::snow::input::Scancodes_obj::f2);
	f3= ::snow::input::Keycodes_obj::from_scan(::snow::input::Scancodes_obj::f3);
	f4= ::snow::input::Keycodes_obj::from_scan(::snow::input::Scancodes_obj::f4);
	f5= ::snow::input::Keycodes_obj::from_scan(::snow::input::Scancodes_obj::f5);
	f6= ::snow::input::Keycodes_obj::from_scan(::snow::input::Scancodes_obj::f6);
	f7= ::snow::input::Keycodes_obj::from_scan(::snow::input::Scancodes_obj::f7);
	f8= ::snow::input::Keycodes_obj::from_scan(::snow::input::Scancodes_obj::f8);
	f9= ::snow::input::Keycodes_obj::from_scan(::snow::input::Scancodes_obj::f9);
	f10= ::snow::input::Keycodes_obj::from_scan(::snow::input::Scancodes_obj::f10);
	f11= ::snow::input::Keycodes_obj::from_scan(::snow::input::Scancodes_obj::f11);
	f12= ::snow::input::Keycodes_obj::from_scan(::snow::input::Scancodes_obj::f12);
	printscreen= ::snow::input::Keycodes_obj::from_scan(::snow::input::Scancodes_obj::printscreen);
	scrolllock= ::snow::input::Keycodes_obj::from_scan(::snow::input::Scancodes_obj::scrolllock);
	pause= ::snow::input::Keycodes_obj::from_scan(::snow::input::Scancodes_obj::pause);
	insert= ::snow::input::Keycodes_obj::from_scan(::snow::input::Scancodes_obj::insert);
	home= ::snow::input::Keycodes_obj::from_scan(::snow::input::Scancodes_obj::home);
	pageup= ::snow::input::Keycodes_obj::from_scan(::snow::input::Scancodes_obj::pageup);
	_delete= (int)127;
	end= ::snow::input::Keycodes_obj::from_scan(::snow::input::Scancodes_obj::end);
	pagedown= ::snow::input::Keycodes_obj::from_scan(::snow::input::Scancodes_obj::pagedown);
	right= ::snow::input::Keycodes_obj::from_scan(::snow::input::Scancodes_obj::right);
	left= ::snow::input::Keycodes_obj::from_scan(::snow::input::Scancodes_obj::left);
	down= ::snow::input::Keycodes_obj::from_scan(::snow::input::Scancodes_obj::down);
	up= ::snow::input::Keycodes_obj::from_scan(::snow::input::Scancodes_obj::up);
	numlockclear= ::snow::input::Keycodes_obj::from_scan(::snow::input::Scancodes_obj::numlockclear);
	kp_divide= ::snow::input::Keycodes_obj::from_scan(::snow::input::Scancodes_obj::kp_divide);
	kp_multiply= ::snow::input::Keycodes_obj::from_scan(::snow::input::Scancodes_obj::kp_multiply);
	kp_minus= ::snow::input::Keycodes_obj::from_scan(::snow::input::Scancodes_obj::kp_minus);
	kp_plus= ::snow::input::Keycodes_obj::from_scan(::snow::input::Scancodes_obj::kp_plus);
	kp_enter= ::snow::input::Keycodes_obj::from_scan(::snow::input::Scancodes_obj::kp_enter);
	kp_1= ::snow::input::Keycodes_obj::from_scan(::snow::input::Scancodes_obj::kp_1);
	kp_2= ::snow::input::Keycodes_obj::from_scan(::snow::input::Scancodes_obj::kp_2);
	kp_3= ::snow::input::Keycodes_obj::from_scan(::snow::input::Scancodes_obj::kp_3);
	kp_4= ::snow::input::Keycodes_obj::from_scan(::snow::input::Scancodes_obj::kp_4);
	kp_5= ::snow::input::Keycodes_obj::from_scan(::snow::input::Scancodes_obj::kp_5);
	kp_6= ::snow::input::Keycodes_obj::from_scan(::snow::input::Scancodes_obj::kp_6);
	kp_7= ::snow::input::Keycodes_obj::from_scan(::snow::input::Scancodes_obj::kp_7);
	kp_8= ::snow::input::Keycodes_obj::from_scan(::snow::input::Scancodes_obj::kp_8);
	kp_9= ::snow::input::Keycodes_obj::from_scan(::snow::input::Scancodes_obj::kp_9);
	kp_0= ::snow::input::Keycodes_obj::from_scan(::snow::input::Scancodes_obj::kp_0);
	kp_period= ::snow::input::Keycodes_obj::from_scan(::snow::input::Scancodes_obj::kp_period);
	application= ::snow::input::Keycodes_obj::from_scan(::snow::input::Scancodes_obj::application);
	power= ::snow::input::Keycodes_obj::from_scan(::snow::input::Scancodes_obj::power);
	kp_equals= ::snow::input::Keycodes_obj::from_scan(::snow::input::Scancodes_obj::kp_equals);
	f13= ::snow::input::Keycodes_obj::from_scan(::snow::input::Scancodes_obj::f13);
	f14= ::snow::input::Keycodes_obj::from_scan(::snow::input::Scancodes_obj::f14);
	f15= ::snow::input::Keycodes_obj::from_scan(::snow::input::Scancodes_obj::f15);
	f16= ::snow::input::Keycodes_obj::from_scan(::snow::input::Scancodes_obj::f16);
	f17= ::snow::input::Keycodes_obj::from_scan(::snow::input::Scancodes_obj::f17);
	f18= ::snow::input::Keycodes_obj::from_scan(::snow::input::Scancodes_obj::f18);
	f19= ::snow::input::Keycodes_obj::from_scan(::snow::input::Scancodes_obj::f19);
	f20= ::snow::input::Keycodes_obj::from_scan(::snow::input::Scancodes_obj::f20);
	f21= ::snow::input::Keycodes_obj::from_scan(::snow::input::Scancodes_obj::f21);
	f22= ::snow::input::Keycodes_obj::from_scan(::snow::input::Scancodes_obj::f22);
	f23= ::snow::input::Keycodes_obj::from_scan(::snow::input::Scancodes_obj::f23);
	f24= ::snow::input::Keycodes_obj::from_scan(::snow::input::Scancodes_obj::f24);
	execute= ::snow::input::Keycodes_obj::from_scan(::snow::input::Scancodes_obj::execute);
	help= ::snow::input::Keycodes_obj::from_scan(::snow::input::Scancodes_obj::help);
	menu= ::snow::input::Keycodes_obj::from_scan(::snow::input::Scancodes_obj::menu);
	select= ::snow::input::Keycodes_obj::from_scan(::snow::input::Scancodes_obj::select);
	stop= ::snow::input::Keycodes_obj::from_scan(::snow::input::Scancodes_obj::stop);
	again= ::snow::input::Keycodes_obj::from_scan(::snow::input::Scancodes_obj::again);
	undo= ::snow::input::Keycodes_obj::from_scan(::snow::input::Scancodes_obj::undo);
	cut= ::snow::input::Keycodes_obj::from_scan(::snow::input::Scancodes_obj::cut);
	copy= ::snow::input::Keycodes_obj::from_scan(::snow::input::Scancodes_obj::copy);
	paste= ::snow::input::Keycodes_obj::from_scan(::snow::input::Scancodes_obj::paste);
	find= ::snow::input::Keycodes_obj::from_scan(::snow::input::Scancodes_obj::find);
	mute= ::snow::input::Keycodes_obj::from_scan(::snow::input::Scancodes_obj::mute);
	volumeup= ::snow::input::Keycodes_obj::from_scan(::snow::input::Scancodes_obj::volumeup);
	volumedown= ::snow::input::Keycodes_obj::from_scan(::snow::input::Scancodes_obj::volumedown);
	kp_comma= ::snow::input::Keycodes_obj::from_scan(::snow::input::Scancodes_obj::kp_comma);
	kp_equalsas400= ::snow::input::Keycodes_obj::from_scan(::snow::input::Scancodes_obj::kp_equalsas400);
	alterase= ::snow::input::Keycodes_obj::from_scan(::snow::input::Scancodes_obj::alterase);
	sysreq= ::snow::input::Keycodes_obj::from_scan(::snow::input::Scancodes_obj::sysreq);
	cancel= ::snow::input::Keycodes_obj::from_scan(::snow::input::Scancodes_obj::cancel);
	clear= ::snow::input::Keycodes_obj::from_scan(::snow::input::Scancodes_obj::clear);
	prior= ::snow::input::Keycodes_obj::from_scan(::snow::input::Scancodes_obj::prior);
	return2= ::snow::input::Keycodes_obj::from_scan(::snow::input::Scancodes_obj::return2);
	separator= ::snow::input::Keycodes_obj::from_scan(::snow::input::Scancodes_obj::separator);
	out= ::snow::input::Keycodes_obj::from_scan(::snow::input::Scancodes_obj::out);
	oper= ::snow::input::Keycodes_obj::from_scan(::snow::input::Scancodes_obj::oper);
	clearagain= ::snow::input::Keycodes_obj::from_scan(::snow::input::Scancodes_obj::clearagain);
	crsel= ::snow::input::Keycodes_obj::from_scan(::snow::input::Scancodes_obj::crsel);
	exsel= ::snow::input::Keycodes_obj::from_scan(::snow::input::Scancodes_obj::exsel);
	kp_00= ::snow::input::Keycodes_obj::from_scan(::snow::input::Scancodes_obj::kp_00);
	kp_000= ::snow::input::Keycodes_obj::from_scan(::snow::input::Scancodes_obj::kp_000);
	thousandsseparator= ::snow::input::Keycodes_obj::from_scan(::snow::input::Scancodes_obj::thousandsseparator);
	decimalseparator= ::snow::input::Keycodes_obj::from_scan(::snow::input::Scancodes_obj::decimalseparator);
	currencyunit= ::snow::input::Keycodes_obj::from_scan(::snow::input::Scancodes_obj::currencyunit);
	currencysubunit= ::snow::input::Keycodes_obj::from_scan(::snow::input::Scancodes_obj::currencysubunit);
	kp_leftparen= ::snow::input::Keycodes_obj::from_scan(::snow::input::Scancodes_obj::kp_leftparen);
	kp_rightparen= ::snow::input::Keycodes_obj::from_scan(::snow::input::Scancodes_obj::kp_rightparen);
	kp_leftbrace= ::snow::input::Keycodes_obj::from_scan(::snow::input::Scancodes_obj::kp_leftbrace);
	kp_rightbrace= ::snow::input::Keycodes_obj::from_scan(::snow::input::Scancodes_obj::kp_rightbrace);
	kp_tab= ::snow::input::Keycodes_obj::from_scan(::snow::input::Scancodes_obj::kp_tab);
	kp_backspace= ::snow::input::Keycodes_obj::from_scan(::snow::input::Scancodes_obj::kp_backspace);
	kp_a= ::snow::input::Keycodes_obj::from_scan(::snow::input::Scancodes_obj::kp_a);
	kp_b= ::snow::input::Keycodes_obj::from_scan(::snow::input::Scancodes_obj::kp_b);
	kp_c= ::snow::input::Keycodes_obj::from_scan(::snow::input::Scancodes_obj::kp_c);
	kp_d= ::snow::input::Keycodes_obj::from_scan(::snow::input::Scancodes_obj::kp_d);
	kp_e= ::snow::input::Keycodes_obj::from_scan(::snow::input::Scancodes_obj::kp_e);
	kp_f= ::snow::input::Keycodes_obj::from_scan(::snow::input::Scancodes_obj::kp_f);
	kp_xor= ::snow::input::Keycodes_obj::from_scan(::snow::input::Scancodes_obj::kp_xor);
	kp_power= ::snow::input::Keycodes_obj::from_scan(::snow::input::Scancodes_obj::kp_power);
	kp_percent= ::snow::input::Keycodes_obj::from_scan(::snow::input::Scancodes_obj::kp_percent);
	kp_less= ::snow::input::Keycodes_obj::from_scan(::snow::input::Scancodes_obj::kp_less);
	kp_greater= ::snow::input::Keycodes_obj::from_scan(::snow::input::Scancodes_obj::kp_greater);
	kp_ampersand= ::snow::input::Keycodes_obj::from_scan(::snow::input::Scancodes_obj::kp_ampersand);
	kp_dblampersand= ::snow::input::Keycodes_obj::from_scan(::snow::input::Scancodes_obj::kp_dblampersand);
	kp_verticalbar= ::snow::input::Keycodes_obj::from_scan(::snow::input::Scancodes_obj::kp_verticalbar);
	kp_dblverticalbar= ::snow::input::Keycodes_obj::from_scan(::snow::input::Scancodes_obj::kp_dblverticalbar);
	kp_colon= ::snow::input::Keycodes_obj::from_scan(::snow::input::Scancodes_obj::kp_colon);
	kp_hash= ::snow::input::Keycodes_obj::from_scan(::snow::input::Scancodes_obj::kp_hash);
	kp_space= ::snow::input::Keycodes_obj::from_scan(::snow::input::Scancodes_obj::kp_space);
	kp_at= ::snow::input::Keycodes_obj::from_scan(::snow::input::Scancodes_obj::kp_at);
	kp_exclam= ::snow::input::Keycodes_obj::from_scan(::snow::input::Scancodes_obj::kp_exclam);
	kp_memstore= ::snow::input::Keycodes_obj::from_scan(::snow::input::Scancodes_obj::kp_memstore);
	kp_memrecall= ::snow::input::Keycodes_obj::from_scan(::snow::input::Scancodes_obj::kp_memrecall);
	kp_memclear= ::snow::input::Keycodes_obj::from_scan(::snow::input::Scancodes_obj::kp_memclear);
	kp_memadd= ::snow::input::Keycodes_obj::from_scan(::snow::input::Scancodes_obj::kp_memadd);
	kp_memsubtract= ::snow::input::Keycodes_obj::from_scan(::snow::input::Scancodes_obj::kp_memsubtract);
	kp_memmultiply= ::snow::input::Keycodes_obj::from_scan(::snow::input::Scancodes_obj::kp_memmultiply);
	kp_memdivide= ::snow::input::Keycodes_obj::from_scan(::snow::input::Scancodes_obj::kp_memdivide);
	kp_plusminus= ::snow::input::Keycodes_obj::from_scan(::snow::input::Scancodes_obj::kp_plusminus);
	kp_clear= ::snow::input::Keycodes_obj::from_scan(::snow::input::Scancodes_obj::kp_clear);
	kp_clearentry= ::snow::input::Keycodes_obj::from_scan(::snow::input::Scancodes_obj::kp_clearentry);
	kp_binary= ::snow::input::Keycodes_obj::from_scan(::snow::input::Scancodes_obj::kp_binary);
	kp_octal= ::snow::input::Keycodes_obj::from_scan(::snow::input::Scancodes_obj::kp_octal);
	kp_decimal= ::snow::input::Keycodes_obj::from_scan(::snow::input::Scancodes_obj::kp_decimal);
	kp_hexadecimal= ::snow::input::Keycodes_obj::from_scan(::snow::input::Scancodes_obj::kp_hexadecimal);
	lctrl= ::snow::input::Keycodes_obj::from_scan(::snow::input::Scancodes_obj::lctrl);
	lshift= ::snow::input::Keycodes_obj::from_scan(::snow::input::Scancodes_obj::lshift);
	lalt= ::snow::input::Keycodes_obj::from_scan(::snow::input::Scancodes_obj::lalt);
	lmeta= ::snow::input::Keycodes_obj::from_scan(::snow::input::Scancodes_obj::lmeta);
	rctrl= ::snow::input::Keycodes_obj::from_scan(::snow::input::Scancodes_obj::rctrl);
	rshift= ::snow::input::Keycodes_obj::from_scan(::snow::input::Scancodes_obj::rshift);
	ralt= ::snow::input::Keycodes_obj::from_scan(::snow::input::Scancodes_obj::ralt);
	rmeta= ::snow::input::Keycodes_obj::from_scan(::snow::input::Scancodes_obj::rmeta);
	mode= ::snow::input::Keycodes_obj::from_scan(::snow::input::Scancodes_obj::mode);
	audionext= ::snow::input::Keycodes_obj::from_scan(::snow::input::Scancodes_obj::audionext);
	audioprev= ::snow::input::Keycodes_obj::from_scan(::snow::input::Scancodes_obj::audioprev);
	audiostop= ::snow::input::Keycodes_obj::from_scan(::snow::input::Scancodes_obj::audiostop);
	audioplay= ::snow::input::Keycodes_obj::from_scan(::snow::input::Scancodes_obj::audioplay);
	audiomute= ::snow::input::Keycodes_obj::from_scan(::snow::input::Scancodes_obj::audiomute);
	mediaselect= ::snow::input::Keycodes_obj::from_scan(::snow::input::Scancodes_obj::mediaselect);
	www= ::snow::input::Keycodes_obj::from_scan(::snow::input::Scancodes_obj::www);
	mail= ::snow::input::Keycodes_obj::from_scan(::snow::input::Scancodes_obj::mail);
	calculator= ::snow::input::Keycodes_obj::from_scan(::snow::input::Scancodes_obj::calculator);
	computer= ::snow::input::Keycodes_obj::from_scan(::snow::input::Scancodes_obj::computer);
	ac_search= ::snow::input::Keycodes_obj::from_scan(::snow::input::Scancodes_obj::ac_search);
	ac_home= ::snow::input::Keycodes_obj::from_scan(::snow::input::Scancodes_obj::ac_home);
	ac_back= ::snow::input::Keycodes_obj::from_scan(::snow::input::Scancodes_obj::ac_back);
	ac_forward= ::snow::input::Keycodes_obj::from_scan(::snow::input::Scancodes_obj::ac_forward);
	ac_stop= ::snow::input::Keycodes_obj::from_scan(::snow::input::Scancodes_obj::ac_stop);
	ac_refresh= ::snow::input::Keycodes_obj::from_scan(::snow::input::Scancodes_obj::ac_refresh);
	ac_bookmarks= ::snow::input::Keycodes_obj::from_scan(::snow::input::Scancodes_obj::ac_bookmarks);
	brightnessdown= ::snow::input::Keycodes_obj::from_scan(::snow::input::Scancodes_obj::brightnessdown);
	brightnessup= ::snow::input::Keycodes_obj::from_scan(::snow::input::Scancodes_obj::brightnessup);
	displayswitch= ::snow::input::Keycodes_obj::from_scan(::snow::input::Scancodes_obj::displayswitch);
	kbdillumtoggle= ::snow::input::Keycodes_obj::from_scan(::snow::input::Scancodes_obj::kbdillumtoggle);
	kbdillumdown= ::snow::input::Keycodes_obj::from_scan(::snow::input::Scancodes_obj::kbdillumdown);
	kbdillumup= ::snow::input::Keycodes_obj::from_scan(::snow::input::Scancodes_obj::kbdillumup);
	eject= ::snow::input::Keycodes_obj::from_scan(::snow::input::Scancodes_obj::eject);
	sleep= ::snow::input::Keycodes_obj::from_scan(::snow::input::Scancodes_obj::sleep);
}

} // end namespace snow
} // end namespace input
