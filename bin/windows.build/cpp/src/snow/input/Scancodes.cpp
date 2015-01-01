#include <hxcpp.h>

#ifndef INCLUDED_snow_input_Scancodes
#include <snow/input/Scancodes.h>
#endif
namespace snow{
namespace input{

Void Scancodes_obj::__construct()
{
	return null();
}

//Scancodes_obj::~Scancodes_obj() { }

Dynamic Scancodes_obj::__CreateEmpty() { return  new Scancodes_obj; }
hx::ObjectPtr< Scancodes_obj > Scancodes_obj::__new()
{  hx::ObjectPtr< Scancodes_obj > result = new Scancodes_obj();
	result->__construct();
	return result;}

Dynamic Scancodes_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Scancodes_obj > result = new Scancodes_obj();
	result->__construct();
	return result;}

::String Scancodes_obj::name( int scancode){
	HX_STACK_FRAME("snow.input.Scancodes","name",0x1f10049f,"snow.input.Scancodes.name","snow/input/Keycodes.hx",402,0x2f8555c6)
	HX_STACK_ARG(scancode,"scancode")
	HX_STACK_LINE(404)
	::String res = null();		HX_STACK_VAR(res,"res");
	HX_STACK_LINE(406)
	if (((bool((scancode >= (int)0)) && bool((scancode < ::snow::input::Scancodes_obj::scancode_names->length))))){
		HX_STACK_LINE(407)
		res = ::snow::input::Scancodes_obj::scancode_names->__get(scancode);
	}
	HX_STACK_LINE(410)
	if (((res != null()))){
		HX_STACK_LINE(410)
		return res;
	}
	else{
		HX_STACK_LINE(410)
		return HX_CSTRING("");
	}
	HX_STACK_LINE(410)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Scancodes_obj,name,return )

int Scancodes_obj::MASK;

int Scancodes_obj::unknown;

int Scancodes_obj::key_a;

int Scancodes_obj::key_b;

int Scancodes_obj::key_c;

int Scancodes_obj::key_d;

int Scancodes_obj::key_e;

int Scancodes_obj::key_f;

int Scancodes_obj::key_g;

int Scancodes_obj::key_h;

int Scancodes_obj::key_i;

int Scancodes_obj::key_j;

int Scancodes_obj::key_k;

int Scancodes_obj::key_l;

int Scancodes_obj::key_m;

int Scancodes_obj::key_n;

int Scancodes_obj::key_o;

int Scancodes_obj::key_p;

int Scancodes_obj::key_q;

int Scancodes_obj::key_r;

int Scancodes_obj::key_s;

int Scancodes_obj::key_t;

int Scancodes_obj::key_u;

int Scancodes_obj::key_v;

int Scancodes_obj::key_w;

int Scancodes_obj::key_x;

int Scancodes_obj::key_y;

int Scancodes_obj::key_z;

int Scancodes_obj::key_1;

int Scancodes_obj::key_2;

int Scancodes_obj::key_3;

int Scancodes_obj::key_4;

int Scancodes_obj::key_5;

int Scancodes_obj::key_6;

int Scancodes_obj::key_7;

int Scancodes_obj::key_8;

int Scancodes_obj::key_9;

int Scancodes_obj::key_0;

int Scancodes_obj::enter;

int Scancodes_obj::escape;

int Scancodes_obj::backspace;

int Scancodes_obj::tab;

int Scancodes_obj::space;

int Scancodes_obj::minus;

int Scancodes_obj::equals;

int Scancodes_obj::leftbracket;

int Scancodes_obj::rightbracket;

int Scancodes_obj::backslash;

int Scancodes_obj::nonushash;

int Scancodes_obj::semicolon;

int Scancodes_obj::apostrophe;

int Scancodes_obj::grave;

int Scancodes_obj::comma;

int Scancodes_obj::period;

int Scancodes_obj::slash;

int Scancodes_obj::capslock;

int Scancodes_obj::f1;

int Scancodes_obj::f2;

int Scancodes_obj::f3;

int Scancodes_obj::f4;

int Scancodes_obj::f5;

int Scancodes_obj::f6;

int Scancodes_obj::f7;

int Scancodes_obj::f8;

int Scancodes_obj::f9;

int Scancodes_obj::f10;

int Scancodes_obj::f11;

int Scancodes_obj::f12;

int Scancodes_obj::printscreen;

int Scancodes_obj::scrolllock;

int Scancodes_obj::pause;

int Scancodes_obj::insert;

int Scancodes_obj::home;

int Scancodes_obj::pageup;

int Scancodes_obj::_delete;

int Scancodes_obj::end;

int Scancodes_obj::pagedown;

int Scancodes_obj::right;

int Scancodes_obj::left;

int Scancodes_obj::down;

int Scancodes_obj::up;

int Scancodes_obj::numlockclear;

int Scancodes_obj::kp_divide;

int Scancodes_obj::kp_multiply;

int Scancodes_obj::kp_minus;

int Scancodes_obj::kp_plus;

int Scancodes_obj::kp_enter;

int Scancodes_obj::kp_1;

int Scancodes_obj::kp_2;

int Scancodes_obj::kp_3;

int Scancodes_obj::kp_4;

int Scancodes_obj::kp_5;

int Scancodes_obj::kp_6;

int Scancodes_obj::kp_7;

int Scancodes_obj::kp_8;

int Scancodes_obj::kp_9;

int Scancodes_obj::kp_0;

int Scancodes_obj::kp_period;

int Scancodes_obj::nonusbackslash;

int Scancodes_obj::application;

int Scancodes_obj::power;

int Scancodes_obj::kp_equals;

int Scancodes_obj::f13;

int Scancodes_obj::f14;

int Scancodes_obj::f15;

int Scancodes_obj::f16;

int Scancodes_obj::f17;

int Scancodes_obj::f18;

int Scancodes_obj::f19;

int Scancodes_obj::f20;

int Scancodes_obj::f21;

int Scancodes_obj::f22;

int Scancodes_obj::f23;

int Scancodes_obj::f24;

int Scancodes_obj::execute;

int Scancodes_obj::help;

int Scancodes_obj::menu;

int Scancodes_obj::select;

int Scancodes_obj::stop;

int Scancodes_obj::again;

int Scancodes_obj::undo;

int Scancodes_obj::cut;

int Scancodes_obj::copy;

int Scancodes_obj::paste;

int Scancodes_obj::find;

int Scancodes_obj::mute;

int Scancodes_obj::volumeup;

int Scancodes_obj::volumedown;

int Scancodes_obj::kp_comma;

int Scancodes_obj::kp_equalsas400;

int Scancodes_obj::international1;

int Scancodes_obj::international2;

int Scancodes_obj::international3;

int Scancodes_obj::international4;

int Scancodes_obj::international5;

int Scancodes_obj::international6;

int Scancodes_obj::international7;

int Scancodes_obj::international8;

int Scancodes_obj::international9;

int Scancodes_obj::lang1;

int Scancodes_obj::lang2;

int Scancodes_obj::lang3;

int Scancodes_obj::lang4;

int Scancodes_obj::lang5;

int Scancodes_obj::lang6;

int Scancodes_obj::lang7;

int Scancodes_obj::lang8;

int Scancodes_obj::lang9;

int Scancodes_obj::alterase;

int Scancodes_obj::sysreq;

int Scancodes_obj::cancel;

int Scancodes_obj::clear;

int Scancodes_obj::prior;

int Scancodes_obj::return2;

int Scancodes_obj::separator;

int Scancodes_obj::out;

int Scancodes_obj::oper;

int Scancodes_obj::clearagain;

int Scancodes_obj::crsel;

int Scancodes_obj::exsel;

int Scancodes_obj::kp_00;

int Scancodes_obj::kp_000;

int Scancodes_obj::thousandsseparator;

int Scancodes_obj::decimalseparator;

int Scancodes_obj::currencyunit;

int Scancodes_obj::currencysubunit;

int Scancodes_obj::kp_leftparen;

int Scancodes_obj::kp_rightparen;

int Scancodes_obj::kp_leftbrace;

int Scancodes_obj::kp_rightbrace;

int Scancodes_obj::kp_tab;

int Scancodes_obj::kp_backspace;

int Scancodes_obj::kp_a;

int Scancodes_obj::kp_b;

int Scancodes_obj::kp_c;

int Scancodes_obj::kp_d;

int Scancodes_obj::kp_e;

int Scancodes_obj::kp_f;

int Scancodes_obj::kp_xor;

int Scancodes_obj::kp_power;

int Scancodes_obj::kp_percent;

int Scancodes_obj::kp_less;

int Scancodes_obj::kp_greater;

int Scancodes_obj::kp_ampersand;

int Scancodes_obj::kp_dblampersand;

int Scancodes_obj::kp_verticalbar;

int Scancodes_obj::kp_dblverticalbar;

int Scancodes_obj::kp_colon;

int Scancodes_obj::kp_hash;

int Scancodes_obj::kp_space;

int Scancodes_obj::kp_at;

int Scancodes_obj::kp_exclam;

int Scancodes_obj::kp_memstore;

int Scancodes_obj::kp_memrecall;

int Scancodes_obj::kp_memclear;

int Scancodes_obj::kp_memadd;

int Scancodes_obj::kp_memsubtract;

int Scancodes_obj::kp_memmultiply;

int Scancodes_obj::kp_memdivide;

int Scancodes_obj::kp_plusminus;

int Scancodes_obj::kp_clear;

int Scancodes_obj::kp_clearentry;

int Scancodes_obj::kp_binary;

int Scancodes_obj::kp_octal;

int Scancodes_obj::kp_decimal;

int Scancodes_obj::kp_hexadecimal;

int Scancodes_obj::lctrl;

int Scancodes_obj::lshift;

int Scancodes_obj::lalt;

int Scancodes_obj::lmeta;

int Scancodes_obj::rctrl;

int Scancodes_obj::rshift;

int Scancodes_obj::ralt;

int Scancodes_obj::rmeta;

int Scancodes_obj::mode;

int Scancodes_obj::audionext;

int Scancodes_obj::audioprev;

int Scancodes_obj::audiostop;

int Scancodes_obj::audioplay;

int Scancodes_obj::audiomute;

int Scancodes_obj::mediaselect;

int Scancodes_obj::www;

int Scancodes_obj::mail;

int Scancodes_obj::calculator;

int Scancodes_obj::computer;

int Scancodes_obj::ac_search;

int Scancodes_obj::ac_home;

int Scancodes_obj::ac_back;

int Scancodes_obj::ac_forward;

int Scancodes_obj::ac_stop;

int Scancodes_obj::ac_refresh;

int Scancodes_obj::ac_bookmarks;

int Scancodes_obj::brightnessdown;

int Scancodes_obj::brightnessup;

int Scancodes_obj::displayswitch;

int Scancodes_obj::kbdillumtoggle;

int Scancodes_obj::kbdillumdown;

int Scancodes_obj::kbdillumup;

int Scancodes_obj::eject;

int Scancodes_obj::sleep;

int Scancodes_obj::app1;

int Scancodes_obj::app2;

Array< ::String > Scancodes_obj::scancode_names;


Scancodes_obj::Scancodes_obj()
{
}

Dynamic Scancodes_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
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
		if (HX_FIELD_EQ(inName,"MASK") ) { return MASK; }
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
		if (HX_FIELD_EQ(inName,"app1") ) { return app1; }
		if (HX_FIELD_EQ(inName,"app2") ) { return app2; }
		break;
	case 5:
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
		if (HX_FIELD_EQ(inName,"key_1") ) { return key_1; }
		if (HX_FIELD_EQ(inName,"key_2") ) { return key_2; }
		if (HX_FIELD_EQ(inName,"key_3") ) { return key_3; }
		if (HX_FIELD_EQ(inName,"key_4") ) { return key_4; }
		if (HX_FIELD_EQ(inName,"key_5") ) { return key_5; }
		if (HX_FIELD_EQ(inName,"key_6") ) { return key_6; }
		if (HX_FIELD_EQ(inName,"key_7") ) { return key_7; }
		if (HX_FIELD_EQ(inName,"key_8") ) { return key_8; }
		if (HX_FIELD_EQ(inName,"key_9") ) { return key_9; }
		if (HX_FIELD_EQ(inName,"key_0") ) { return key_0; }
		if (HX_FIELD_EQ(inName,"enter") ) { return enter; }
		if (HX_FIELD_EQ(inName,"space") ) { return space; }
		if (HX_FIELD_EQ(inName,"minus") ) { return minus; }
		if (HX_FIELD_EQ(inName,"grave") ) { return grave; }
		if (HX_FIELD_EQ(inName,"comma") ) { return comma; }
		if (HX_FIELD_EQ(inName,"slash") ) { return slash; }
		if (HX_FIELD_EQ(inName,"pause") ) { return pause; }
		if (HX_FIELD_EQ(inName,"right") ) { return right; }
		if (HX_FIELD_EQ(inName,"power") ) { return power; }
		if (HX_FIELD_EQ(inName,"again") ) { return again; }
		if (HX_FIELD_EQ(inName,"paste") ) { return paste; }
		if (HX_FIELD_EQ(inName,"lang1") ) { return lang1; }
		if (HX_FIELD_EQ(inName,"lang2") ) { return lang2; }
		if (HX_FIELD_EQ(inName,"lang3") ) { return lang3; }
		if (HX_FIELD_EQ(inName,"lang4") ) { return lang4; }
		if (HX_FIELD_EQ(inName,"lang5") ) { return lang5; }
		if (HX_FIELD_EQ(inName,"lang6") ) { return lang6; }
		if (HX_FIELD_EQ(inName,"lang7") ) { return lang7; }
		if (HX_FIELD_EQ(inName,"lang8") ) { return lang8; }
		if (HX_FIELD_EQ(inName,"lang9") ) { return lang9; }
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
		if (HX_FIELD_EQ(inName,"equals") ) { return equals; }
		if (HX_FIELD_EQ(inName,"period") ) { return period; }
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
		if (HX_FIELD_EQ(inName,"unknown") ) { return unknown; }
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
		if (HX_FIELD_EQ(inName,"backspace") ) { return backspace; }
		if (HX_FIELD_EQ(inName,"backslash") ) { return backslash; }
		if (HX_FIELD_EQ(inName,"nonushash") ) { return nonushash; }
		if (HX_FIELD_EQ(inName,"semicolon") ) { return semicolon; }
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
		if (HX_FIELD_EQ(inName,"apostrophe") ) { return apostrophe; }
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
		if (HX_FIELD_EQ(inName,"nonusbackslash") ) { return nonusbackslash; }
		if (HX_FIELD_EQ(inName,"kp_equalsas400") ) { return kp_equalsas400; }
		if (HX_FIELD_EQ(inName,"international1") ) { return international1; }
		if (HX_FIELD_EQ(inName,"international2") ) { return international2; }
		if (HX_FIELD_EQ(inName,"international3") ) { return international3; }
		if (HX_FIELD_EQ(inName,"international4") ) { return international4; }
		if (HX_FIELD_EQ(inName,"international5") ) { return international5; }
		if (HX_FIELD_EQ(inName,"international6") ) { return international6; }
		if (HX_FIELD_EQ(inName,"international7") ) { return international7; }
		if (HX_FIELD_EQ(inName,"international8") ) { return international8; }
		if (HX_FIELD_EQ(inName,"international9") ) { return international9; }
		if (HX_FIELD_EQ(inName,"kp_verticalbar") ) { return kp_verticalbar; }
		if (HX_FIELD_EQ(inName,"kp_memsubtract") ) { return kp_memsubtract; }
		if (HX_FIELD_EQ(inName,"kp_memmultiply") ) { return kp_memmultiply; }
		if (HX_FIELD_EQ(inName,"kp_hexadecimal") ) { return kp_hexadecimal; }
		if (HX_FIELD_EQ(inName,"brightnessdown") ) { return brightnessdown; }
		if (HX_FIELD_EQ(inName,"kbdillumtoggle") ) { return kbdillumtoggle; }
		if (HX_FIELD_EQ(inName,"scancode_names") ) { return scancode_names; }
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

Dynamic Scancodes_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 2:
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
		if (HX_FIELD_EQ(inName,"MASK") ) { MASK=inValue.Cast< int >(); return inValue; }
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
		if (HX_FIELD_EQ(inName,"app1") ) { app1=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"app2") ) { app2=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
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
		if (HX_FIELD_EQ(inName,"key_1") ) { key_1=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"key_2") ) { key_2=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"key_3") ) { key_3=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"key_4") ) { key_4=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"key_5") ) { key_5=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"key_6") ) { key_6=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"key_7") ) { key_7=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"key_8") ) { key_8=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"key_9") ) { key_9=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"key_0") ) { key_0=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"enter") ) { enter=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"space") ) { space=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"minus") ) { minus=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"grave") ) { grave=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"comma") ) { comma=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"slash") ) { slash=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"pause") ) { pause=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"right") ) { right=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"power") ) { power=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"again") ) { again=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"paste") ) { paste=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lang1") ) { lang1=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lang2") ) { lang2=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lang3") ) { lang3=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lang4") ) { lang4=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lang5") ) { lang5=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lang6") ) { lang6=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lang7") ) { lang7=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lang8") ) { lang8=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lang9") ) { lang9=inValue.Cast< int >(); return inValue; }
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
		if (HX_FIELD_EQ(inName,"equals") ) { equals=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"period") ) { period=inValue.Cast< int >(); return inValue; }
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
		if (HX_FIELD_EQ(inName,"backslash") ) { backslash=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nonushash") ) { nonushash=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"semicolon") ) { semicolon=inValue.Cast< int >(); return inValue; }
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
		if (HX_FIELD_EQ(inName,"apostrophe") ) { apostrophe=inValue.Cast< int >(); return inValue; }
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
		if (HX_FIELD_EQ(inName,"nonusbackslash") ) { nonusbackslash=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"kp_equalsas400") ) { kp_equalsas400=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"international1") ) { international1=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"international2") ) { international2=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"international3") ) { international3=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"international4") ) { international4=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"international5") ) { international5=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"international6") ) { international6=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"international7") ) { international7=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"international8") ) { international8=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"international9") ) { international9=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"kp_verticalbar") ) { kp_verticalbar=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"kp_memsubtract") ) { kp_memsubtract=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"kp_memmultiply") ) { kp_memmultiply=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"kp_hexadecimal") ) { kp_hexadecimal=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"brightnessdown") ) { brightnessdown=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"kbdillumtoggle") ) { kbdillumtoggle=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scancode_names") ) { scancode_names=inValue.Cast< Array< ::String > >(); return inValue; }
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

void Scancodes_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("name"),
	HX_CSTRING("MASK"),
	HX_CSTRING("unknown"),
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
	HX_CSTRING("key_1"),
	HX_CSTRING("key_2"),
	HX_CSTRING("key_3"),
	HX_CSTRING("key_4"),
	HX_CSTRING("key_5"),
	HX_CSTRING("key_6"),
	HX_CSTRING("key_7"),
	HX_CSTRING("key_8"),
	HX_CSTRING("key_9"),
	HX_CSTRING("key_0"),
	HX_CSTRING("enter"),
	HX_CSTRING("escape"),
	HX_CSTRING("backspace"),
	HX_CSTRING("tab"),
	HX_CSTRING("space"),
	HX_CSTRING("minus"),
	HX_CSTRING("equals"),
	HX_CSTRING("leftbracket"),
	HX_CSTRING("rightbracket"),
	HX_CSTRING("backslash"),
	HX_CSTRING("nonushash"),
	HX_CSTRING("semicolon"),
	HX_CSTRING("apostrophe"),
	HX_CSTRING("grave"),
	HX_CSTRING("comma"),
	HX_CSTRING("period"),
	HX_CSTRING("slash"),
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
	HX_CSTRING("nonusbackslash"),
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
	HX_CSTRING("international1"),
	HX_CSTRING("international2"),
	HX_CSTRING("international3"),
	HX_CSTRING("international4"),
	HX_CSTRING("international5"),
	HX_CSTRING("international6"),
	HX_CSTRING("international7"),
	HX_CSTRING("international8"),
	HX_CSTRING("international9"),
	HX_CSTRING("lang1"),
	HX_CSTRING("lang2"),
	HX_CSTRING("lang3"),
	HX_CSTRING("lang4"),
	HX_CSTRING("lang5"),
	HX_CSTRING("lang6"),
	HX_CSTRING("lang7"),
	HX_CSTRING("lang8"),
	HX_CSTRING("lang9"),
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
	HX_CSTRING("app1"),
	HX_CSTRING("app2"),
	HX_CSTRING("scancode_names"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Scancodes_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Scancodes_obj::MASK,"MASK");
	HX_MARK_MEMBER_NAME(Scancodes_obj::unknown,"unknown");
	HX_MARK_MEMBER_NAME(Scancodes_obj::key_a,"key_a");
	HX_MARK_MEMBER_NAME(Scancodes_obj::key_b,"key_b");
	HX_MARK_MEMBER_NAME(Scancodes_obj::key_c,"key_c");
	HX_MARK_MEMBER_NAME(Scancodes_obj::key_d,"key_d");
	HX_MARK_MEMBER_NAME(Scancodes_obj::key_e,"key_e");
	HX_MARK_MEMBER_NAME(Scancodes_obj::key_f,"key_f");
	HX_MARK_MEMBER_NAME(Scancodes_obj::key_g,"key_g");
	HX_MARK_MEMBER_NAME(Scancodes_obj::key_h,"key_h");
	HX_MARK_MEMBER_NAME(Scancodes_obj::key_i,"key_i");
	HX_MARK_MEMBER_NAME(Scancodes_obj::key_j,"key_j");
	HX_MARK_MEMBER_NAME(Scancodes_obj::key_k,"key_k");
	HX_MARK_MEMBER_NAME(Scancodes_obj::key_l,"key_l");
	HX_MARK_MEMBER_NAME(Scancodes_obj::key_m,"key_m");
	HX_MARK_MEMBER_NAME(Scancodes_obj::key_n,"key_n");
	HX_MARK_MEMBER_NAME(Scancodes_obj::key_o,"key_o");
	HX_MARK_MEMBER_NAME(Scancodes_obj::key_p,"key_p");
	HX_MARK_MEMBER_NAME(Scancodes_obj::key_q,"key_q");
	HX_MARK_MEMBER_NAME(Scancodes_obj::key_r,"key_r");
	HX_MARK_MEMBER_NAME(Scancodes_obj::key_s,"key_s");
	HX_MARK_MEMBER_NAME(Scancodes_obj::key_t,"key_t");
	HX_MARK_MEMBER_NAME(Scancodes_obj::key_u,"key_u");
	HX_MARK_MEMBER_NAME(Scancodes_obj::key_v,"key_v");
	HX_MARK_MEMBER_NAME(Scancodes_obj::key_w,"key_w");
	HX_MARK_MEMBER_NAME(Scancodes_obj::key_x,"key_x");
	HX_MARK_MEMBER_NAME(Scancodes_obj::key_y,"key_y");
	HX_MARK_MEMBER_NAME(Scancodes_obj::key_z,"key_z");
	HX_MARK_MEMBER_NAME(Scancodes_obj::key_1,"key_1");
	HX_MARK_MEMBER_NAME(Scancodes_obj::key_2,"key_2");
	HX_MARK_MEMBER_NAME(Scancodes_obj::key_3,"key_3");
	HX_MARK_MEMBER_NAME(Scancodes_obj::key_4,"key_4");
	HX_MARK_MEMBER_NAME(Scancodes_obj::key_5,"key_5");
	HX_MARK_MEMBER_NAME(Scancodes_obj::key_6,"key_6");
	HX_MARK_MEMBER_NAME(Scancodes_obj::key_7,"key_7");
	HX_MARK_MEMBER_NAME(Scancodes_obj::key_8,"key_8");
	HX_MARK_MEMBER_NAME(Scancodes_obj::key_9,"key_9");
	HX_MARK_MEMBER_NAME(Scancodes_obj::key_0,"key_0");
	HX_MARK_MEMBER_NAME(Scancodes_obj::enter,"enter");
	HX_MARK_MEMBER_NAME(Scancodes_obj::escape,"escape");
	HX_MARK_MEMBER_NAME(Scancodes_obj::backspace,"backspace");
	HX_MARK_MEMBER_NAME(Scancodes_obj::tab,"tab");
	HX_MARK_MEMBER_NAME(Scancodes_obj::space,"space");
	HX_MARK_MEMBER_NAME(Scancodes_obj::minus,"minus");
	HX_MARK_MEMBER_NAME(Scancodes_obj::equals,"equals");
	HX_MARK_MEMBER_NAME(Scancodes_obj::leftbracket,"leftbracket");
	HX_MARK_MEMBER_NAME(Scancodes_obj::rightbracket,"rightbracket");
	HX_MARK_MEMBER_NAME(Scancodes_obj::backslash,"backslash");
	HX_MARK_MEMBER_NAME(Scancodes_obj::nonushash,"nonushash");
	HX_MARK_MEMBER_NAME(Scancodes_obj::semicolon,"semicolon");
	HX_MARK_MEMBER_NAME(Scancodes_obj::apostrophe,"apostrophe");
	HX_MARK_MEMBER_NAME(Scancodes_obj::grave,"grave");
	HX_MARK_MEMBER_NAME(Scancodes_obj::comma,"comma");
	HX_MARK_MEMBER_NAME(Scancodes_obj::period,"period");
	HX_MARK_MEMBER_NAME(Scancodes_obj::slash,"slash");
	HX_MARK_MEMBER_NAME(Scancodes_obj::capslock,"capslock");
	HX_MARK_MEMBER_NAME(Scancodes_obj::f1,"f1");
	HX_MARK_MEMBER_NAME(Scancodes_obj::f2,"f2");
	HX_MARK_MEMBER_NAME(Scancodes_obj::f3,"f3");
	HX_MARK_MEMBER_NAME(Scancodes_obj::f4,"f4");
	HX_MARK_MEMBER_NAME(Scancodes_obj::f5,"f5");
	HX_MARK_MEMBER_NAME(Scancodes_obj::f6,"f6");
	HX_MARK_MEMBER_NAME(Scancodes_obj::f7,"f7");
	HX_MARK_MEMBER_NAME(Scancodes_obj::f8,"f8");
	HX_MARK_MEMBER_NAME(Scancodes_obj::f9,"f9");
	HX_MARK_MEMBER_NAME(Scancodes_obj::f10,"f10");
	HX_MARK_MEMBER_NAME(Scancodes_obj::f11,"f11");
	HX_MARK_MEMBER_NAME(Scancodes_obj::f12,"f12");
	HX_MARK_MEMBER_NAME(Scancodes_obj::printscreen,"printscreen");
	HX_MARK_MEMBER_NAME(Scancodes_obj::scrolllock,"scrolllock");
	HX_MARK_MEMBER_NAME(Scancodes_obj::pause,"pause");
	HX_MARK_MEMBER_NAME(Scancodes_obj::insert,"insert");
	HX_MARK_MEMBER_NAME(Scancodes_obj::home,"home");
	HX_MARK_MEMBER_NAME(Scancodes_obj::pageup,"pageup");
	HX_MARK_MEMBER_NAME(Scancodes_obj::_delete,"delete");
	HX_MARK_MEMBER_NAME(Scancodes_obj::end,"end");
	HX_MARK_MEMBER_NAME(Scancodes_obj::pagedown,"pagedown");
	HX_MARK_MEMBER_NAME(Scancodes_obj::right,"right");
	HX_MARK_MEMBER_NAME(Scancodes_obj::left,"left");
	HX_MARK_MEMBER_NAME(Scancodes_obj::down,"down");
	HX_MARK_MEMBER_NAME(Scancodes_obj::up,"up");
	HX_MARK_MEMBER_NAME(Scancodes_obj::numlockclear,"numlockclear");
	HX_MARK_MEMBER_NAME(Scancodes_obj::kp_divide,"kp_divide");
	HX_MARK_MEMBER_NAME(Scancodes_obj::kp_multiply,"kp_multiply");
	HX_MARK_MEMBER_NAME(Scancodes_obj::kp_minus,"kp_minus");
	HX_MARK_MEMBER_NAME(Scancodes_obj::kp_plus,"kp_plus");
	HX_MARK_MEMBER_NAME(Scancodes_obj::kp_enter,"kp_enter");
	HX_MARK_MEMBER_NAME(Scancodes_obj::kp_1,"kp_1");
	HX_MARK_MEMBER_NAME(Scancodes_obj::kp_2,"kp_2");
	HX_MARK_MEMBER_NAME(Scancodes_obj::kp_3,"kp_3");
	HX_MARK_MEMBER_NAME(Scancodes_obj::kp_4,"kp_4");
	HX_MARK_MEMBER_NAME(Scancodes_obj::kp_5,"kp_5");
	HX_MARK_MEMBER_NAME(Scancodes_obj::kp_6,"kp_6");
	HX_MARK_MEMBER_NAME(Scancodes_obj::kp_7,"kp_7");
	HX_MARK_MEMBER_NAME(Scancodes_obj::kp_8,"kp_8");
	HX_MARK_MEMBER_NAME(Scancodes_obj::kp_9,"kp_9");
	HX_MARK_MEMBER_NAME(Scancodes_obj::kp_0,"kp_0");
	HX_MARK_MEMBER_NAME(Scancodes_obj::kp_period,"kp_period");
	HX_MARK_MEMBER_NAME(Scancodes_obj::nonusbackslash,"nonusbackslash");
	HX_MARK_MEMBER_NAME(Scancodes_obj::application,"application");
	HX_MARK_MEMBER_NAME(Scancodes_obj::power,"power");
	HX_MARK_MEMBER_NAME(Scancodes_obj::kp_equals,"kp_equals");
	HX_MARK_MEMBER_NAME(Scancodes_obj::f13,"f13");
	HX_MARK_MEMBER_NAME(Scancodes_obj::f14,"f14");
	HX_MARK_MEMBER_NAME(Scancodes_obj::f15,"f15");
	HX_MARK_MEMBER_NAME(Scancodes_obj::f16,"f16");
	HX_MARK_MEMBER_NAME(Scancodes_obj::f17,"f17");
	HX_MARK_MEMBER_NAME(Scancodes_obj::f18,"f18");
	HX_MARK_MEMBER_NAME(Scancodes_obj::f19,"f19");
	HX_MARK_MEMBER_NAME(Scancodes_obj::f20,"f20");
	HX_MARK_MEMBER_NAME(Scancodes_obj::f21,"f21");
	HX_MARK_MEMBER_NAME(Scancodes_obj::f22,"f22");
	HX_MARK_MEMBER_NAME(Scancodes_obj::f23,"f23");
	HX_MARK_MEMBER_NAME(Scancodes_obj::f24,"f24");
	HX_MARK_MEMBER_NAME(Scancodes_obj::execute,"execute");
	HX_MARK_MEMBER_NAME(Scancodes_obj::help,"help");
	HX_MARK_MEMBER_NAME(Scancodes_obj::menu,"menu");
	HX_MARK_MEMBER_NAME(Scancodes_obj::select,"select");
	HX_MARK_MEMBER_NAME(Scancodes_obj::stop,"stop");
	HX_MARK_MEMBER_NAME(Scancodes_obj::again,"again");
	HX_MARK_MEMBER_NAME(Scancodes_obj::undo,"undo");
	HX_MARK_MEMBER_NAME(Scancodes_obj::cut,"cut");
	HX_MARK_MEMBER_NAME(Scancodes_obj::copy,"copy");
	HX_MARK_MEMBER_NAME(Scancodes_obj::paste,"paste");
	HX_MARK_MEMBER_NAME(Scancodes_obj::find,"find");
	HX_MARK_MEMBER_NAME(Scancodes_obj::mute,"mute");
	HX_MARK_MEMBER_NAME(Scancodes_obj::volumeup,"volumeup");
	HX_MARK_MEMBER_NAME(Scancodes_obj::volumedown,"volumedown");
	HX_MARK_MEMBER_NAME(Scancodes_obj::kp_comma,"kp_comma");
	HX_MARK_MEMBER_NAME(Scancodes_obj::kp_equalsas400,"kp_equalsas400");
	HX_MARK_MEMBER_NAME(Scancodes_obj::international1,"international1");
	HX_MARK_MEMBER_NAME(Scancodes_obj::international2,"international2");
	HX_MARK_MEMBER_NAME(Scancodes_obj::international3,"international3");
	HX_MARK_MEMBER_NAME(Scancodes_obj::international4,"international4");
	HX_MARK_MEMBER_NAME(Scancodes_obj::international5,"international5");
	HX_MARK_MEMBER_NAME(Scancodes_obj::international6,"international6");
	HX_MARK_MEMBER_NAME(Scancodes_obj::international7,"international7");
	HX_MARK_MEMBER_NAME(Scancodes_obj::international8,"international8");
	HX_MARK_MEMBER_NAME(Scancodes_obj::international9,"international9");
	HX_MARK_MEMBER_NAME(Scancodes_obj::lang1,"lang1");
	HX_MARK_MEMBER_NAME(Scancodes_obj::lang2,"lang2");
	HX_MARK_MEMBER_NAME(Scancodes_obj::lang3,"lang3");
	HX_MARK_MEMBER_NAME(Scancodes_obj::lang4,"lang4");
	HX_MARK_MEMBER_NAME(Scancodes_obj::lang5,"lang5");
	HX_MARK_MEMBER_NAME(Scancodes_obj::lang6,"lang6");
	HX_MARK_MEMBER_NAME(Scancodes_obj::lang7,"lang7");
	HX_MARK_MEMBER_NAME(Scancodes_obj::lang8,"lang8");
	HX_MARK_MEMBER_NAME(Scancodes_obj::lang9,"lang9");
	HX_MARK_MEMBER_NAME(Scancodes_obj::alterase,"alterase");
	HX_MARK_MEMBER_NAME(Scancodes_obj::sysreq,"sysreq");
	HX_MARK_MEMBER_NAME(Scancodes_obj::cancel,"cancel");
	HX_MARK_MEMBER_NAME(Scancodes_obj::clear,"clear");
	HX_MARK_MEMBER_NAME(Scancodes_obj::prior,"prior");
	HX_MARK_MEMBER_NAME(Scancodes_obj::return2,"return2");
	HX_MARK_MEMBER_NAME(Scancodes_obj::separator,"separator");
	HX_MARK_MEMBER_NAME(Scancodes_obj::out,"out");
	HX_MARK_MEMBER_NAME(Scancodes_obj::oper,"oper");
	HX_MARK_MEMBER_NAME(Scancodes_obj::clearagain,"clearagain");
	HX_MARK_MEMBER_NAME(Scancodes_obj::crsel,"crsel");
	HX_MARK_MEMBER_NAME(Scancodes_obj::exsel,"exsel");
	HX_MARK_MEMBER_NAME(Scancodes_obj::kp_00,"kp_00");
	HX_MARK_MEMBER_NAME(Scancodes_obj::kp_000,"kp_000");
	HX_MARK_MEMBER_NAME(Scancodes_obj::thousandsseparator,"thousandsseparator");
	HX_MARK_MEMBER_NAME(Scancodes_obj::decimalseparator,"decimalseparator");
	HX_MARK_MEMBER_NAME(Scancodes_obj::currencyunit,"currencyunit");
	HX_MARK_MEMBER_NAME(Scancodes_obj::currencysubunit,"currencysubunit");
	HX_MARK_MEMBER_NAME(Scancodes_obj::kp_leftparen,"kp_leftparen");
	HX_MARK_MEMBER_NAME(Scancodes_obj::kp_rightparen,"kp_rightparen");
	HX_MARK_MEMBER_NAME(Scancodes_obj::kp_leftbrace,"kp_leftbrace");
	HX_MARK_MEMBER_NAME(Scancodes_obj::kp_rightbrace,"kp_rightbrace");
	HX_MARK_MEMBER_NAME(Scancodes_obj::kp_tab,"kp_tab");
	HX_MARK_MEMBER_NAME(Scancodes_obj::kp_backspace,"kp_backspace");
	HX_MARK_MEMBER_NAME(Scancodes_obj::kp_a,"kp_a");
	HX_MARK_MEMBER_NAME(Scancodes_obj::kp_b,"kp_b");
	HX_MARK_MEMBER_NAME(Scancodes_obj::kp_c,"kp_c");
	HX_MARK_MEMBER_NAME(Scancodes_obj::kp_d,"kp_d");
	HX_MARK_MEMBER_NAME(Scancodes_obj::kp_e,"kp_e");
	HX_MARK_MEMBER_NAME(Scancodes_obj::kp_f,"kp_f");
	HX_MARK_MEMBER_NAME(Scancodes_obj::kp_xor,"kp_xor");
	HX_MARK_MEMBER_NAME(Scancodes_obj::kp_power,"kp_power");
	HX_MARK_MEMBER_NAME(Scancodes_obj::kp_percent,"kp_percent");
	HX_MARK_MEMBER_NAME(Scancodes_obj::kp_less,"kp_less");
	HX_MARK_MEMBER_NAME(Scancodes_obj::kp_greater,"kp_greater");
	HX_MARK_MEMBER_NAME(Scancodes_obj::kp_ampersand,"kp_ampersand");
	HX_MARK_MEMBER_NAME(Scancodes_obj::kp_dblampersand,"kp_dblampersand");
	HX_MARK_MEMBER_NAME(Scancodes_obj::kp_verticalbar,"kp_verticalbar");
	HX_MARK_MEMBER_NAME(Scancodes_obj::kp_dblverticalbar,"kp_dblverticalbar");
	HX_MARK_MEMBER_NAME(Scancodes_obj::kp_colon,"kp_colon");
	HX_MARK_MEMBER_NAME(Scancodes_obj::kp_hash,"kp_hash");
	HX_MARK_MEMBER_NAME(Scancodes_obj::kp_space,"kp_space");
	HX_MARK_MEMBER_NAME(Scancodes_obj::kp_at,"kp_at");
	HX_MARK_MEMBER_NAME(Scancodes_obj::kp_exclam,"kp_exclam");
	HX_MARK_MEMBER_NAME(Scancodes_obj::kp_memstore,"kp_memstore");
	HX_MARK_MEMBER_NAME(Scancodes_obj::kp_memrecall,"kp_memrecall");
	HX_MARK_MEMBER_NAME(Scancodes_obj::kp_memclear,"kp_memclear");
	HX_MARK_MEMBER_NAME(Scancodes_obj::kp_memadd,"kp_memadd");
	HX_MARK_MEMBER_NAME(Scancodes_obj::kp_memsubtract,"kp_memsubtract");
	HX_MARK_MEMBER_NAME(Scancodes_obj::kp_memmultiply,"kp_memmultiply");
	HX_MARK_MEMBER_NAME(Scancodes_obj::kp_memdivide,"kp_memdivide");
	HX_MARK_MEMBER_NAME(Scancodes_obj::kp_plusminus,"kp_plusminus");
	HX_MARK_MEMBER_NAME(Scancodes_obj::kp_clear,"kp_clear");
	HX_MARK_MEMBER_NAME(Scancodes_obj::kp_clearentry,"kp_clearentry");
	HX_MARK_MEMBER_NAME(Scancodes_obj::kp_binary,"kp_binary");
	HX_MARK_MEMBER_NAME(Scancodes_obj::kp_octal,"kp_octal");
	HX_MARK_MEMBER_NAME(Scancodes_obj::kp_decimal,"kp_decimal");
	HX_MARK_MEMBER_NAME(Scancodes_obj::kp_hexadecimal,"kp_hexadecimal");
	HX_MARK_MEMBER_NAME(Scancodes_obj::lctrl,"lctrl");
	HX_MARK_MEMBER_NAME(Scancodes_obj::lshift,"lshift");
	HX_MARK_MEMBER_NAME(Scancodes_obj::lalt,"lalt");
	HX_MARK_MEMBER_NAME(Scancodes_obj::lmeta,"lmeta");
	HX_MARK_MEMBER_NAME(Scancodes_obj::rctrl,"rctrl");
	HX_MARK_MEMBER_NAME(Scancodes_obj::rshift,"rshift");
	HX_MARK_MEMBER_NAME(Scancodes_obj::ralt,"ralt");
	HX_MARK_MEMBER_NAME(Scancodes_obj::rmeta,"rmeta");
	HX_MARK_MEMBER_NAME(Scancodes_obj::mode,"mode");
	HX_MARK_MEMBER_NAME(Scancodes_obj::audionext,"audionext");
	HX_MARK_MEMBER_NAME(Scancodes_obj::audioprev,"audioprev");
	HX_MARK_MEMBER_NAME(Scancodes_obj::audiostop,"audiostop");
	HX_MARK_MEMBER_NAME(Scancodes_obj::audioplay,"audioplay");
	HX_MARK_MEMBER_NAME(Scancodes_obj::audiomute,"audiomute");
	HX_MARK_MEMBER_NAME(Scancodes_obj::mediaselect,"mediaselect");
	HX_MARK_MEMBER_NAME(Scancodes_obj::www,"www");
	HX_MARK_MEMBER_NAME(Scancodes_obj::mail,"mail");
	HX_MARK_MEMBER_NAME(Scancodes_obj::calculator,"calculator");
	HX_MARK_MEMBER_NAME(Scancodes_obj::computer,"computer");
	HX_MARK_MEMBER_NAME(Scancodes_obj::ac_search,"ac_search");
	HX_MARK_MEMBER_NAME(Scancodes_obj::ac_home,"ac_home");
	HX_MARK_MEMBER_NAME(Scancodes_obj::ac_back,"ac_back");
	HX_MARK_MEMBER_NAME(Scancodes_obj::ac_forward,"ac_forward");
	HX_MARK_MEMBER_NAME(Scancodes_obj::ac_stop,"ac_stop");
	HX_MARK_MEMBER_NAME(Scancodes_obj::ac_refresh,"ac_refresh");
	HX_MARK_MEMBER_NAME(Scancodes_obj::ac_bookmarks,"ac_bookmarks");
	HX_MARK_MEMBER_NAME(Scancodes_obj::brightnessdown,"brightnessdown");
	HX_MARK_MEMBER_NAME(Scancodes_obj::brightnessup,"brightnessup");
	HX_MARK_MEMBER_NAME(Scancodes_obj::displayswitch,"displayswitch");
	HX_MARK_MEMBER_NAME(Scancodes_obj::kbdillumtoggle,"kbdillumtoggle");
	HX_MARK_MEMBER_NAME(Scancodes_obj::kbdillumdown,"kbdillumdown");
	HX_MARK_MEMBER_NAME(Scancodes_obj::kbdillumup,"kbdillumup");
	HX_MARK_MEMBER_NAME(Scancodes_obj::eject,"eject");
	HX_MARK_MEMBER_NAME(Scancodes_obj::sleep,"sleep");
	HX_MARK_MEMBER_NAME(Scancodes_obj::app1,"app1");
	HX_MARK_MEMBER_NAME(Scancodes_obj::app2,"app2");
	HX_MARK_MEMBER_NAME(Scancodes_obj::scancode_names,"scancode_names");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Scancodes_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::MASK,"MASK");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::unknown,"unknown");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::key_a,"key_a");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::key_b,"key_b");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::key_c,"key_c");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::key_d,"key_d");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::key_e,"key_e");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::key_f,"key_f");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::key_g,"key_g");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::key_h,"key_h");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::key_i,"key_i");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::key_j,"key_j");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::key_k,"key_k");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::key_l,"key_l");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::key_m,"key_m");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::key_n,"key_n");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::key_o,"key_o");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::key_p,"key_p");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::key_q,"key_q");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::key_r,"key_r");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::key_s,"key_s");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::key_t,"key_t");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::key_u,"key_u");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::key_v,"key_v");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::key_w,"key_w");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::key_x,"key_x");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::key_y,"key_y");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::key_z,"key_z");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::key_1,"key_1");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::key_2,"key_2");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::key_3,"key_3");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::key_4,"key_4");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::key_5,"key_5");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::key_6,"key_6");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::key_7,"key_7");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::key_8,"key_8");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::key_9,"key_9");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::key_0,"key_0");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::enter,"enter");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::escape,"escape");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::backspace,"backspace");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::tab,"tab");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::space,"space");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::minus,"minus");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::equals,"equals");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::leftbracket,"leftbracket");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::rightbracket,"rightbracket");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::backslash,"backslash");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::nonushash,"nonushash");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::semicolon,"semicolon");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::apostrophe,"apostrophe");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::grave,"grave");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::comma,"comma");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::period,"period");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::slash,"slash");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::capslock,"capslock");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::f1,"f1");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::f2,"f2");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::f3,"f3");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::f4,"f4");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::f5,"f5");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::f6,"f6");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::f7,"f7");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::f8,"f8");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::f9,"f9");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::f10,"f10");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::f11,"f11");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::f12,"f12");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::printscreen,"printscreen");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::scrolllock,"scrolllock");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::pause,"pause");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::insert,"insert");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::home,"home");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::pageup,"pageup");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::_delete,"delete");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::end,"end");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::pagedown,"pagedown");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::right,"right");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::left,"left");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::down,"down");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::up,"up");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::numlockclear,"numlockclear");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::kp_divide,"kp_divide");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::kp_multiply,"kp_multiply");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::kp_minus,"kp_minus");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::kp_plus,"kp_plus");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::kp_enter,"kp_enter");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::kp_1,"kp_1");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::kp_2,"kp_2");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::kp_3,"kp_3");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::kp_4,"kp_4");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::kp_5,"kp_5");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::kp_6,"kp_6");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::kp_7,"kp_7");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::kp_8,"kp_8");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::kp_9,"kp_9");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::kp_0,"kp_0");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::kp_period,"kp_period");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::nonusbackslash,"nonusbackslash");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::application,"application");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::power,"power");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::kp_equals,"kp_equals");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::f13,"f13");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::f14,"f14");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::f15,"f15");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::f16,"f16");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::f17,"f17");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::f18,"f18");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::f19,"f19");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::f20,"f20");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::f21,"f21");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::f22,"f22");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::f23,"f23");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::f24,"f24");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::execute,"execute");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::help,"help");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::menu,"menu");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::select,"select");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::stop,"stop");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::again,"again");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::undo,"undo");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::cut,"cut");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::copy,"copy");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::paste,"paste");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::find,"find");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::mute,"mute");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::volumeup,"volumeup");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::volumedown,"volumedown");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::kp_comma,"kp_comma");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::kp_equalsas400,"kp_equalsas400");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::international1,"international1");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::international2,"international2");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::international3,"international3");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::international4,"international4");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::international5,"international5");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::international6,"international6");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::international7,"international7");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::international8,"international8");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::international9,"international9");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::lang1,"lang1");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::lang2,"lang2");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::lang3,"lang3");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::lang4,"lang4");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::lang5,"lang5");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::lang6,"lang6");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::lang7,"lang7");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::lang8,"lang8");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::lang9,"lang9");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::alterase,"alterase");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::sysreq,"sysreq");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::cancel,"cancel");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::clear,"clear");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::prior,"prior");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::return2,"return2");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::separator,"separator");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::out,"out");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::oper,"oper");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::clearagain,"clearagain");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::crsel,"crsel");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::exsel,"exsel");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::kp_00,"kp_00");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::kp_000,"kp_000");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::thousandsseparator,"thousandsseparator");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::decimalseparator,"decimalseparator");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::currencyunit,"currencyunit");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::currencysubunit,"currencysubunit");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::kp_leftparen,"kp_leftparen");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::kp_rightparen,"kp_rightparen");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::kp_leftbrace,"kp_leftbrace");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::kp_rightbrace,"kp_rightbrace");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::kp_tab,"kp_tab");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::kp_backspace,"kp_backspace");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::kp_a,"kp_a");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::kp_b,"kp_b");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::kp_c,"kp_c");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::kp_d,"kp_d");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::kp_e,"kp_e");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::kp_f,"kp_f");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::kp_xor,"kp_xor");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::kp_power,"kp_power");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::kp_percent,"kp_percent");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::kp_less,"kp_less");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::kp_greater,"kp_greater");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::kp_ampersand,"kp_ampersand");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::kp_dblampersand,"kp_dblampersand");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::kp_verticalbar,"kp_verticalbar");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::kp_dblverticalbar,"kp_dblverticalbar");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::kp_colon,"kp_colon");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::kp_hash,"kp_hash");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::kp_space,"kp_space");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::kp_at,"kp_at");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::kp_exclam,"kp_exclam");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::kp_memstore,"kp_memstore");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::kp_memrecall,"kp_memrecall");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::kp_memclear,"kp_memclear");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::kp_memadd,"kp_memadd");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::kp_memsubtract,"kp_memsubtract");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::kp_memmultiply,"kp_memmultiply");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::kp_memdivide,"kp_memdivide");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::kp_plusminus,"kp_plusminus");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::kp_clear,"kp_clear");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::kp_clearentry,"kp_clearentry");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::kp_binary,"kp_binary");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::kp_octal,"kp_octal");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::kp_decimal,"kp_decimal");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::kp_hexadecimal,"kp_hexadecimal");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::lctrl,"lctrl");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::lshift,"lshift");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::lalt,"lalt");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::lmeta,"lmeta");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::rctrl,"rctrl");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::rshift,"rshift");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::ralt,"ralt");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::rmeta,"rmeta");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::mode,"mode");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::audionext,"audionext");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::audioprev,"audioprev");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::audiostop,"audiostop");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::audioplay,"audioplay");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::audiomute,"audiomute");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::mediaselect,"mediaselect");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::www,"www");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::mail,"mail");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::calculator,"calculator");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::computer,"computer");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::ac_search,"ac_search");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::ac_home,"ac_home");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::ac_back,"ac_back");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::ac_forward,"ac_forward");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::ac_stop,"ac_stop");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::ac_refresh,"ac_refresh");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::ac_bookmarks,"ac_bookmarks");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::brightnessdown,"brightnessdown");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::brightnessup,"brightnessup");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::displayswitch,"displayswitch");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::kbdillumtoggle,"kbdillumtoggle");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::kbdillumdown,"kbdillumdown");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::kbdillumup,"kbdillumup");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::eject,"eject");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::sleep,"sleep");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::app1,"app1");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::app2,"app2");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::scancode_names,"scancode_names");
};

#endif

Class Scancodes_obj::__mClass;

void Scancodes_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("snow.input.Scancodes"), hx::TCanCast< Scancodes_obj> ,sStaticFields,sMemberFields,
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

void Scancodes_obj::__boot()
{
	MASK= (int)1073741824;
	unknown= (int)0;
	key_a= (int)4;
	key_b= (int)5;
	key_c= (int)6;
	key_d= (int)7;
	key_e= (int)8;
	key_f= (int)9;
	key_g= (int)10;
	key_h= (int)11;
	key_i= (int)12;
	key_j= (int)13;
	key_k= (int)14;
	key_l= (int)15;
	key_m= (int)16;
	key_n= (int)17;
	key_o= (int)18;
	key_p= (int)19;
	key_q= (int)20;
	key_r= (int)21;
	key_s= (int)22;
	key_t= (int)23;
	key_u= (int)24;
	key_v= (int)25;
	key_w= (int)26;
	key_x= (int)27;
	key_y= (int)28;
	key_z= (int)29;
	key_1= (int)30;
	key_2= (int)31;
	key_3= (int)32;
	key_4= (int)33;
	key_5= (int)34;
	key_6= (int)35;
	key_7= (int)36;
	key_8= (int)37;
	key_9= (int)38;
	key_0= (int)39;
	enter= (int)40;
	escape= (int)41;
	backspace= (int)42;
	tab= (int)43;
	space= (int)44;
	minus= (int)45;
	equals= (int)46;
	leftbracket= (int)47;
	rightbracket= (int)48;
	backslash= (int)49;
	nonushash= (int)50;
	semicolon= (int)51;
	apostrophe= (int)52;
	grave= (int)53;
	comma= (int)54;
	period= (int)55;
	slash= (int)56;
	capslock= (int)57;
	f1= (int)58;
	f2= (int)59;
	f3= (int)60;
	f4= (int)61;
	f5= (int)62;
	f6= (int)63;
	f7= (int)64;
	f8= (int)65;
	f9= (int)66;
	f10= (int)67;
	f11= (int)68;
	f12= (int)69;
	printscreen= (int)70;
	scrolllock= (int)71;
	pause= (int)72;
	insert= (int)73;
	home= (int)74;
	pageup= (int)75;
	_delete= (int)76;
	end= (int)77;
	pagedown= (int)78;
	right= (int)79;
	left= (int)80;
	down= (int)81;
	up= (int)82;
	numlockclear= (int)83;
	kp_divide= (int)84;
	kp_multiply= (int)85;
	kp_minus= (int)86;
	kp_plus= (int)87;
	kp_enter= (int)88;
	kp_1= (int)89;
	kp_2= (int)90;
	kp_3= (int)91;
	kp_4= (int)92;
	kp_5= (int)93;
	kp_6= (int)94;
	kp_7= (int)95;
	kp_8= (int)96;
	kp_9= (int)97;
	kp_0= (int)98;
	kp_period= (int)99;
	nonusbackslash= (int)100;
	application= (int)101;
	power= (int)102;
	kp_equals= (int)103;
	f13= (int)104;
	f14= (int)105;
	f15= (int)106;
	f16= (int)107;
	f17= (int)108;
	f18= (int)109;
	f19= (int)110;
	f20= (int)111;
	f21= (int)112;
	f22= (int)113;
	f23= (int)114;
	f24= (int)115;
	execute= (int)116;
	help= (int)117;
	menu= (int)118;
	select= (int)119;
	stop= (int)120;
	again= (int)121;
	undo= (int)122;
	cut= (int)123;
	copy= (int)124;
	paste= (int)125;
	find= (int)126;
	mute= (int)127;
	volumeup= (int)128;
	volumedown= (int)129;
	kp_comma= (int)133;
	kp_equalsas400= (int)134;
	international1= (int)135;
	international2= (int)136;
	international3= (int)137;
	international4= (int)138;
	international5= (int)139;
	international6= (int)140;
	international7= (int)141;
	international8= (int)142;
	international9= (int)143;
	lang1= (int)144;
	lang2= (int)145;
	lang3= (int)146;
	lang4= (int)147;
	lang5= (int)148;
	lang6= (int)149;
	lang7= (int)150;
	lang8= (int)151;
	lang9= (int)152;
	alterase= (int)153;
	sysreq= (int)154;
	cancel= (int)155;
	clear= (int)156;
	prior= (int)157;
	return2= (int)158;
	separator= (int)159;
	out= (int)160;
	oper= (int)161;
	clearagain= (int)162;
	crsel= (int)163;
	exsel= (int)164;
	kp_00= (int)176;
	kp_000= (int)177;
	thousandsseparator= (int)178;
	decimalseparator= (int)179;
	currencyunit= (int)180;
	currencysubunit= (int)181;
	kp_leftparen= (int)182;
	kp_rightparen= (int)183;
	kp_leftbrace= (int)184;
	kp_rightbrace= (int)185;
	kp_tab= (int)186;
	kp_backspace= (int)187;
	kp_a= (int)188;
	kp_b= (int)189;
	kp_c= (int)190;
	kp_d= (int)191;
	kp_e= (int)192;
	kp_f= (int)193;
	kp_xor= (int)194;
	kp_power= (int)195;
	kp_percent= (int)196;
	kp_less= (int)197;
	kp_greater= (int)198;
	kp_ampersand= (int)199;
	kp_dblampersand= (int)200;
	kp_verticalbar= (int)201;
	kp_dblverticalbar= (int)202;
	kp_colon= (int)203;
	kp_hash= (int)204;
	kp_space= (int)205;
	kp_at= (int)206;
	kp_exclam= (int)207;
	kp_memstore= (int)208;
	kp_memrecall= (int)209;
	kp_memclear= (int)210;
	kp_memadd= (int)211;
	kp_memsubtract= (int)212;
	kp_memmultiply= (int)213;
	kp_memdivide= (int)214;
	kp_plusminus= (int)215;
	kp_clear= (int)216;
	kp_clearentry= (int)217;
	kp_binary= (int)218;
	kp_octal= (int)219;
	kp_decimal= (int)220;
	kp_hexadecimal= (int)221;
	lctrl= (int)224;
	lshift= (int)225;
	lalt= (int)226;
	lmeta= (int)227;
	rctrl= (int)228;
	rshift= (int)229;
	ralt= (int)230;
	rmeta= (int)231;
	mode= (int)257;
	audionext= (int)258;
	audioprev= (int)259;
	audiostop= (int)260;
	audioplay= (int)261;
	audiomute= (int)262;
	mediaselect= (int)263;
	www= (int)264;
	mail= (int)265;
	calculator= (int)266;
	computer= (int)267;
	ac_search= (int)268;
	ac_home= (int)269;
	ac_back= (int)270;
	ac_forward= (int)271;
	ac_stop= (int)272;
	ac_refresh= (int)273;
	ac_bookmarks= (int)274;
	brightnessdown= (int)275;
	brightnessup= (int)276;
	displayswitch= (int)277;
	kbdillumtoggle= (int)278;
	kbdillumdown= (int)279;
	kbdillumup= (int)280;
	eject= (int)281;
	sleep= (int)282;
	app1= (int)283;
	app2= (int)284;
	scancode_names= Array_obj< ::String >::__new().Add(null()).Add(null()).Add(null()).Add(null()).Add(HX_CSTRING("A")).Add(HX_CSTRING("B")).Add(HX_CSTRING("C")).Add(HX_CSTRING("D")).Add(HX_CSTRING("E")).Add(HX_CSTRING("F")).Add(HX_CSTRING("G")).Add(HX_CSTRING("H")).Add(HX_CSTRING("I")).Add(HX_CSTRING("J")).Add(HX_CSTRING("K")).Add(HX_CSTRING("L")).Add(HX_CSTRING("M")).Add(HX_CSTRING("N")).Add(HX_CSTRING("O")).Add(HX_CSTRING("P")).Add(HX_CSTRING("Q")).Add(HX_CSTRING("R")).Add(HX_CSTRING("S")).Add(HX_CSTRING("T")).Add(HX_CSTRING("U")).Add(HX_CSTRING("V")).Add(HX_CSTRING("W")).Add(HX_CSTRING("X")).Add(HX_CSTRING("Y")).Add(HX_CSTRING("Z")).Add(HX_CSTRING("1")).Add(HX_CSTRING("2")).Add(HX_CSTRING("3")).Add(HX_CSTRING("4")).Add(HX_CSTRING("5")).Add(HX_CSTRING("6")).Add(HX_CSTRING("7")).Add(HX_CSTRING("8")).Add(HX_CSTRING("9")).Add(HX_CSTRING("0")).Add(HX_CSTRING("Enter")).Add(HX_CSTRING("Escape")).Add(HX_CSTRING("Backspace")).Add(HX_CSTRING("Tab")).Add(HX_CSTRING("Space")).Add(HX_CSTRING("-")).Add(HX_CSTRING("=")).Add(HX_CSTRING("[")).Add(HX_CSTRING("]")).Add(HX_CSTRING("\\")).Add(HX_CSTRING("#")).Add(HX_CSTRING(";")).Add(HX_CSTRING("'")).Add(HX_CSTRING("`")).Add(HX_CSTRING(",")).Add(HX_CSTRING(".")).Add(HX_CSTRING("/")).Add(HX_CSTRING("CapsLock")).Add(HX_CSTRING("F1")).Add(HX_CSTRING("F2")).Add(HX_CSTRING("F3")).Add(HX_CSTRING("F4")).Add(HX_CSTRING("F5")).Add(HX_CSTRING("F6")).Add(HX_CSTRING("F7")).Add(HX_CSTRING("F8")).Add(HX_CSTRING("F9")).Add(HX_CSTRING("F10")).Add(HX_CSTRING("F11")).Add(HX_CSTRING("F12")).Add(HX_CSTRING("PrintScreen")).Add(HX_CSTRING("ScrollLock")).Add(HX_CSTRING("Pause")).Add(HX_CSTRING("Insert")).Add(HX_CSTRING("Home")).Add(HX_CSTRING("PageUp")).Add(HX_CSTRING("Delete")).Add(HX_CSTRING("End")).Add(HX_CSTRING("PageDown")).Add(HX_CSTRING("Right")).Add(HX_CSTRING("Left")).Add(HX_CSTRING("Down")).Add(HX_CSTRING("Up")).Add(HX_CSTRING("Numlock")).Add(HX_CSTRING("Keypad /")).Add(HX_CSTRING("Keypad *")).Add(HX_CSTRING("Keypad -")).Add(HX_CSTRING("Keypad +")).Add(HX_CSTRING("Keypad Enter")).Add(HX_CSTRING("Keypad 1")).Add(HX_CSTRING("Keypad 2")).Add(HX_CSTRING("Keypad 3")).Add(HX_CSTRING("Keypad 4")).Add(HX_CSTRING("Keypad 5")).Add(HX_CSTRING("Keypad 6")).Add(HX_CSTRING("Keypad 7")).Add(HX_CSTRING("Keypad 8")).Add(HX_CSTRING("Keypad 9")).Add(HX_CSTRING("Keypad 0")).Add(HX_CSTRING("Keypad .")).Add(null()).Add(HX_CSTRING("Application")).Add(HX_CSTRING("Power")).Add(HX_CSTRING("Keypad =")).Add(HX_CSTRING("F13")).Add(HX_CSTRING("F14")).Add(HX_CSTRING("F15")).Add(HX_CSTRING("F16")).Add(HX_CSTRING("F17")).Add(HX_CSTRING("F18")).Add(HX_CSTRING("F19")).Add(HX_CSTRING("F20")).Add(HX_CSTRING("F21")).Add(HX_CSTRING("F22")).Add(HX_CSTRING("F23")).Add(HX_CSTRING("F24")).Add(HX_CSTRING("Execute")).Add(HX_CSTRING("Help")).Add(HX_CSTRING("Menu")).Add(HX_CSTRING("Select")).Add(HX_CSTRING("Stop")).Add(HX_CSTRING("Again")).Add(HX_CSTRING("Undo")).Add(HX_CSTRING("Cut")).Add(HX_CSTRING("Copy")).Add(HX_CSTRING("Paste")).Add(HX_CSTRING("Find")).Add(HX_CSTRING("Mute")).Add(HX_CSTRING("VolumeUp")).Add(HX_CSTRING("VolumeDown")).Add(null()).Add(null()).Add(null()).Add(HX_CSTRING("Keypad ,")).Add(HX_CSTRING("Keypad = (AS400)")).Add(null()).Add(null()).Add(null()).Add(null()).Add(null()).Add(null()).Add(null()).Add(null()).Add(null()).Add(null()).Add(null()).Add(null()).Add(null()).Add(null()).Add(null()).Add(null()).Add(null()).Add(null()).Add(HX_CSTRING("AltErase")).Add(HX_CSTRING("SysReq")).Add(HX_CSTRING("Cancel")).Add(HX_CSTRING("Clear")).Add(HX_CSTRING("Prior")).Add(HX_CSTRING("Enter")).Add(HX_CSTRING("Separator")).Add(HX_CSTRING("Out")).Add(HX_CSTRING("Oper")).Add(HX_CSTRING("Clear / Again")).Add(HX_CSTRING("CrSel")).Add(HX_CSTRING("ExSel")).Add(null()).Add(null()).Add(null()).Add(null()).Add(null()).Add(null()).Add(null()).Add(null()).Add(null()).Add(null()).Add(null()).Add(HX_CSTRING("Keypad 00")).Add(HX_CSTRING("Keypad 000")).Add(HX_CSTRING("ThousandsSeparator")).Add(HX_CSTRING("DecimalSeparator")).Add(HX_CSTRING("CurrencyUnit")).Add(HX_CSTRING("CurrencySubUnit")).Add(HX_CSTRING("Keypad (")).Add(HX_CSTRING("Keypad )")).Add(HX_CSTRING("Keypad {")).Add(HX_CSTRING("Keypad }")).Add(HX_CSTRING("Keypad Tab")).Add(HX_CSTRING("Keypad Backspace")).Add(HX_CSTRING("Keypad A")).Add(HX_CSTRING("Keypad B")).Add(HX_CSTRING("Keypad C")).Add(HX_CSTRING("Keypad D")).Add(HX_CSTRING("Keypad E")).Add(HX_CSTRING("Keypad F")).Add(HX_CSTRING("Keypad XOR")).Add(HX_CSTRING("Keypad ^")).Add(HX_CSTRING("Keypad %")).Add(HX_CSTRING("Keypad <")).Add(HX_CSTRING("Keypad >")).Add(HX_CSTRING("Keypad &")).Add(HX_CSTRING("Keypad &&")).Add(HX_CSTRING("Keypad |")).Add(HX_CSTRING("Keypad ||")).Add(HX_CSTRING("Keypad :")).Add(HX_CSTRING("Keypad #")).Add(HX_CSTRING("Keypad Space")).Add(HX_CSTRING("Keypad @")).Add(HX_CSTRING("Keypad !")).Add(HX_CSTRING("Keypad MemStore")).Add(HX_CSTRING("Keypad MemRecall")).Add(HX_CSTRING("Keypad MemClear")).Add(HX_CSTRING("Keypad MemAdd")).Add(HX_CSTRING("Keypad MemSubtract")).Add(HX_CSTRING("Keypad MemMultiply")).Add(HX_CSTRING("Keypad MemDivide")).Add(HX_CSTRING("Keypad +/-")).Add(HX_CSTRING("Keypad Clear")).Add(HX_CSTRING("Keypad ClearEntry")).Add(HX_CSTRING("Keypad Binary")).Add(HX_CSTRING("Keypad Octal")).Add(HX_CSTRING("Keypad Decimal")).Add(HX_CSTRING("Keypad Hexadecimal")).Add(null()).Add(null()).Add(HX_CSTRING("Left Ctrl")).Add(HX_CSTRING("Left Shift")).Add(HX_CSTRING("Left Alt")).Add(HX_CSTRING("Left Meta")).Add(HX_CSTRING("Right Ctrl")).Add(HX_CSTRING("Right Shift")).Add(HX_CSTRING("Right Alt")).Add(HX_CSTRING("Right Meta")).Add(null()).Add(null()).Add(null()).Add(null()).Add(null()).Add(null()).Add(null()).Add(null()).Add(null()).Add(null()).Add(null()).Add(null()).Add(null()).Add(null()).Add(null()).Add(null()).Add(null()).Add(null()).Add(null()).Add(null()).Add(null()).Add(null()).Add(null()).Add(null()).Add(null()).Add(HX_CSTRING("ModeSwitch")).Add(HX_CSTRING("AudioNext")).Add(HX_CSTRING("AudioPrev")).Add(HX_CSTRING("AudioStop")).Add(HX_CSTRING("AudioPlay")).Add(HX_CSTRING("AudioMute")).Add(HX_CSTRING("MediaSelect")).Add(HX_CSTRING("WWW")).Add(HX_CSTRING("Mail")).Add(HX_CSTRING("Calculator")).Add(HX_CSTRING("Computer")).Add(HX_CSTRING("AC Search")).Add(HX_CSTRING("AC Home")).Add(HX_CSTRING("AC Back")).Add(HX_CSTRING("AC Forward")).Add(HX_CSTRING("AC Stop")).Add(HX_CSTRING("AC Refresh")).Add(HX_CSTRING("AC Bookmarks")).Add(HX_CSTRING("BrightnessDown")).Add(HX_CSTRING("BrightnessUp")).Add(HX_CSTRING("DisplaySwitch")).Add(HX_CSTRING("KBDIllumToggle")).Add(HX_CSTRING("KBDIllumDown")).Add(HX_CSTRING("KBDIllumUp")).Add(HX_CSTRING("Eject")).Add(HX_CSTRING("Sleep"));
}

} // end namespace snow
} // end namespace input
