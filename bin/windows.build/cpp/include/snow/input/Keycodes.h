#ifndef INCLUDED_snow_input_Keycodes
#define INCLUDED_snow_input_Keycodes

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(snow,input,Keycodes)
namespace snow{
namespace input{


class HXCPP_CLASS_ATTRIBUTES  Keycodes_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Keycodes_obj OBJ_;
		Keycodes_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Keycodes_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Keycodes_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("Keycodes"); }

		static int from_scan( int scancode);
		static Dynamic from_scan_dyn();

		static int to_scan( int keycode);
		static Dynamic to_scan_dyn();

		static ::String name( int keycode);
		static Dynamic name_dyn();

		static int unknown;
		static int enter;
		static int escape;
		static int backspace;
		static int tab;
		static int space;
		static int exclaim;
		static int quotedbl;
		static int hash;
		static int percent;
		static int dollar;
		static int ampersand;
		static int quote;
		static int leftparen;
		static int rightparen;
		static int asterisk;
		static int plus;
		static int comma;
		static int minus;
		static int period;
		static int slash;
		static int key_0;
		static int key_1;
		static int key_2;
		static int key_3;
		static int key_4;
		static int key_5;
		static int key_6;
		static int key_7;
		static int key_8;
		static int key_9;
		static int colon;
		static int semicolon;
		static int less;
		static int equals;
		static int greater;
		static int question;
		static int at;
		static int leftbracket;
		static int backslash;
		static int rightbracket;
		static int caret;
		static int underscore;
		static int backquote;
		static int key_a;
		static int key_b;
		static int key_c;
		static int key_d;
		static int key_e;
		static int key_f;
		static int key_g;
		static int key_h;
		static int key_i;
		static int key_j;
		static int key_k;
		static int key_l;
		static int key_m;
		static int key_n;
		static int key_o;
		static int key_p;
		static int key_q;
		static int key_r;
		static int key_s;
		static int key_t;
		static int key_u;
		static int key_v;
		static int key_w;
		static int key_x;
		static int key_y;
		static int key_z;
		static int capslock;
		static int f1;
		static int f2;
		static int f3;
		static int f4;
		static int f5;
		static int f6;
		static int f7;
		static int f8;
		static int f9;
		static int f10;
		static int f11;
		static int f12;
		static int printscreen;
		static int scrolllock;
		static int pause;
		static int insert;
		static int home;
		static int pageup;
		static int _delete;
		static int end;
		static int pagedown;
		static int right;
		static int left;
		static int down;
		static int up;
		static int numlockclear;
		static int kp_divide;
		static int kp_multiply;
		static int kp_minus;
		static int kp_plus;
		static int kp_enter;
		static int kp_1;
		static int kp_2;
		static int kp_3;
		static int kp_4;
		static int kp_5;
		static int kp_6;
		static int kp_7;
		static int kp_8;
		static int kp_9;
		static int kp_0;
		static int kp_period;
		static int application;
		static int power;
		static int kp_equals;
		static int f13;
		static int f14;
		static int f15;
		static int f16;
		static int f17;
		static int f18;
		static int f19;
		static int f20;
		static int f21;
		static int f22;
		static int f23;
		static int f24;
		static int execute;
		static int help;
		static int menu;
		static int select;
		static int stop;
		static int again;
		static int undo;
		static int cut;
		static int copy;
		static int paste;
		static int find;
		static int mute;
		static int volumeup;
		static int volumedown;
		static int kp_comma;
		static int kp_equalsas400;
		static int alterase;
		static int sysreq;
		static int cancel;
		static int clear;
		static int prior;
		static int return2;
		static int separator;
		static int out;
		static int oper;
		static int clearagain;
		static int crsel;
		static int exsel;
		static int kp_00;
		static int kp_000;
		static int thousandsseparator;
		static int decimalseparator;
		static int currencyunit;
		static int currencysubunit;
		static int kp_leftparen;
		static int kp_rightparen;
		static int kp_leftbrace;
		static int kp_rightbrace;
		static int kp_tab;
		static int kp_backspace;
		static int kp_a;
		static int kp_b;
		static int kp_c;
		static int kp_d;
		static int kp_e;
		static int kp_f;
		static int kp_xor;
		static int kp_power;
		static int kp_percent;
		static int kp_less;
		static int kp_greater;
		static int kp_ampersand;
		static int kp_dblampersand;
		static int kp_verticalbar;
		static int kp_dblverticalbar;
		static int kp_colon;
		static int kp_hash;
		static int kp_space;
		static int kp_at;
		static int kp_exclam;
		static int kp_memstore;
		static int kp_memrecall;
		static int kp_memclear;
		static int kp_memadd;
		static int kp_memsubtract;
		static int kp_memmultiply;
		static int kp_memdivide;
		static int kp_plusminus;
		static int kp_clear;
		static int kp_clearentry;
		static int kp_binary;
		static int kp_octal;
		static int kp_decimal;
		static int kp_hexadecimal;
		static int lctrl;
		static int lshift;
		static int lalt;
		static int lmeta;
		static int rctrl;
		static int rshift;
		static int ralt;
		static int rmeta;
		static int mode;
		static int audionext;
		static int audioprev;
		static int audiostop;
		static int audioplay;
		static int audiomute;
		static int mediaselect;
		static int www;
		static int mail;
		static int calculator;
		static int computer;
		static int ac_search;
		static int ac_home;
		static int ac_back;
		static int ac_forward;
		static int ac_stop;
		static int ac_refresh;
		static int ac_bookmarks;
		static int brightnessdown;
		static int brightnessup;
		static int displayswitch;
		static int kbdillumtoggle;
		static int kbdillumdown;
		static int kbdillumup;
		static int eject;
		static int sleep;
};

} // end namespace snow
} // end namespace input

#endif /* INCLUDED_snow_input_Keycodes */ 
