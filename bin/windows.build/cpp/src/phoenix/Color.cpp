#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_luxe_tween_Actuate
#include <luxe/tween/Actuate.h>
#endif
#ifndef INCLUDED_luxe_tween_actuators_IGenericActuator
#include <luxe/tween/actuators/IGenericActuator.h>
#endif
#ifndef INCLUDED_phoenix_Color
#include <phoenix/Color.h>
#endif
#ifndef INCLUDED_phoenix_ColorHSL
#include <phoenix/ColorHSL.h>
#endif
#ifndef INCLUDED_phoenix_ColorHSV
#include <phoenix/ColorHSV.h>
#endif
namespace phoenix{

Void Color_obj::__construct(hx::Null< Float >  __o__r,hx::Null< Float >  __o__g,hx::Null< Float >  __o__b,hx::Null< Float >  __o__a)
{
HX_STACK_FRAME("phoenix.Color","new",0x34b95216,"phoenix.Color.new","phoenix/Color.hx",10,0xf59e6b1b)
HX_STACK_THIS(this)
HX_STACK_ARG(__o__r,"_r")
HX_STACK_ARG(__o__g,"_g")
HX_STACK_ARG(__o__b,"_b")
HX_STACK_ARG(__o__a,"_a")
Float _r = __o__r.Default(1.0);
Float _g = __o__g.Default(1.0);
Float _b = __o__b.Default(1.0);
Float _a = __o__a.Default(1.0);
{
	HX_STACK_LINE(20)
	this->refreshing = false;
	HX_STACK_LINE(19)
	this->is_hsv = false;
	HX_STACK_LINE(18)
	this->is_hsl = false;
	HX_STACK_LINE(16)
	this->a = 1.0;
	HX_STACK_LINE(14)
	this->b = 1.0;
	HX_STACK_LINE(13)
	this->g = 1.0;
	HX_STACK_LINE(12)
	this->r = 1.0;
	HX_STACK_LINE(24)
	this->set_r(_r);
	HX_STACK_LINE(25)
	this->set_g(_g);
	HX_STACK_LINE(26)
	this->set_b(_b);
	HX_STACK_LINE(27)
	this->a = _a;
}
;
	return null();
}

//Color_obj::~Color_obj() { }

Dynamic Color_obj::__CreateEmpty() { return  new Color_obj; }
hx::ObjectPtr< Color_obj > Color_obj::__new(hx::Null< Float >  __o__r,hx::Null< Float >  __o__g,hx::Null< Float >  __o__b,hx::Null< Float >  __o__a)
{  hx::ObjectPtr< Color_obj > result = new Color_obj();
	result->__construct(__o__r,__o__g,__o__b,__o__a);
	return result;}

Dynamic Color_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Color_obj > result = new Color_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return result;}

Float Color_obj::set_r( Float _r){
	HX_STACK_FRAME("phoenix.Color","set_r",0xb441768b,"phoenix.Color.set_r","phoenix/Color.hx",31,0xf59e6b1b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_r,"_r")
	HX_STACK_LINE(32)
	this->r = _r;
	HX_STACK_LINE(34)
	if ((!(this->refreshing))){
		HX_STACK_LINE(35)
		if ((this->is_hsl)){
			HX_STACK_LINE(36)
			::phoenix::ColorHSL colorhsl = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(colorhsl,"colorhsl");
			HX_STACK_LINE(37)
			colorhsl->fromColor(hx::ObjectPtr<OBJ_>(this));
		}
		else{
			HX_STACK_LINE(38)
			if ((this->is_hsv)){
				HX_STACK_LINE(39)
				::phoenix::ColorHSV colorhsv = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(colorhsv,"colorhsv");
				HX_STACK_LINE(40)
				colorhsv->fromColor(hx::ObjectPtr<OBJ_>(this));
			}
		}
	}
	HX_STACK_LINE(44)
	return this->r;
}


HX_DEFINE_DYNAMIC_FUNC1(Color_obj,set_r,return )

Float Color_obj::set_g( Float _g){
	HX_STACK_FRAME("phoenix.Color","set_g",0xb4417680,"phoenix.Color.set_g","phoenix/Color.hx",46,0xf59e6b1b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_g,"_g")
	HX_STACK_LINE(47)
	this->g = _g;
	HX_STACK_LINE(49)
	if ((!(this->refreshing))){
		HX_STACK_LINE(50)
		if ((this->is_hsl)){
			HX_STACK_LINE(51)
			::phoenix::ColorHSL colorhsl = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(colorhsl,"colorhsl");
			HX_STACK_LINE(52)
			colorhsl->fromColor(hx::ObjectPtr<OBJ_>(this));
		}
		else{
			HX_STACK_LINE(53)
			if ((this->is_hsv)){
				HX_STACK_LINE(54)
				::phoenix::ColorHSV colorhsv = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(colorhsv,"colorhsv");
				HX_STACK_LINE(55)
				colorhsv->fromColor(hx::ObjectPtr<OBJ_>(this));
			}
		}
	}
	HX_STACK_LINE(59)
	return this->g;
}


HX_DEFINE_DYNAMIC_FUNC1(Color_obj,set_g,return )

Float Color_obj::set_b( Float _b){
	HX_STACK_FRAME("phoenix.Color","set_b",0xb441767b,"phoenix.Color.set_b","phoenix/Color.hx",61,0xf59e6b1b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_b,"_b")
	HX_STACK_LINE(62)
	this->b = _b;
	HX_STACK_LINE(64)
	if ((!(this->refreshing))){
		HX_STACK_LINE(65)
		if ((this->is_hsl)){
			HX_STACK_LINE(66)
			::phoenix::ColorHSL colorhsl = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(colorhsl,"colorhsl");
			HX_STACK_LINE(67)
			colorhsl->fromColor(hx::ObjectPtr<OBJ_>(this));
		}
		else{
			HX_STACK_LINE(68)
			if ((this->is_hsv)){
				HX_STACK_LINE(69)
				::phoenix::ColorHSV colorhsv = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(colorhsv,"colorhsv");
				HX_STACK_LINE(70)
				colorhsv->fromColor(hx::ObjectPtr<OBJ_>(this));
			}
		}
	}
	HX_STACK_LINE(74)
	return this->b;
}


HX_DEFINE_DYNAMIC_FUNC1(Color_obj,set_b,return )

::phoenix::Color Color_obj::set( Dynamic _r,Dynamic _g,Dynamic _b,Dynamic _a){
	HX_STACK_FRAME("phoenix.Color","set",0x34bd1d58,"phoenix.Color.set","phoenix/Color.hx",82,0xf59e6b1b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_r,"_r")
	HX_STACK_ARG(_g,"_g")
	HX_STACK_ARG(_b,"_b")
	HX_STACK_ARG(_a,"_a")
	HX_STACK_LINE(84)
	Float _setr = this->r;		HX_STACK_VAR(_setr,"_setr");
	HX_STACK_LINE(85)
	Float _setg = this->g;		HX_STACK_VAR(_setg,"_setg");
	HX_STACK_LINE(86)
	Float _setb = this->b;		HX_STACK_VAR(_setb,"_setb");
	HX_STACK_LINE(87)
	Float _seta = this->a;		HX_STACK_VAR(_seta,"_seta");
	HX_STACK_LINE(90)
	if (((_r != null()))){
		HX_STACK_LINE(90)
		_setr = _r;
	}
	HX_STACK_LINE(91)
	if (((_g != null()))){
		HX_STACK_LINE(91)
		_setg = _g;
	}
	HX_STACK_LINE(92)
	if (((_b != null()))){
		HX_STACK_LINE(92)
		_setb = _b;
	}
	HX_STACK_LINE(93)
	if (((_a != null()))){
		HX_STACK_LINE(93)
		_seta = _a;
	}
	HX_STACK_LINE(95)
	this->set_r(_setr);
	HX_STACK_LINE(96)
	this->set_g(_setg);
	HX_STACK_LINE(97)
	this->set_b(_setb);
	HX_STACK_LINE(98)
	this->a = _seta;
	HX_STACK_LINE(100)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC4(Color_obj,set,return )

Float Color_obj::maxRGB( ){
	HX_STACK_FRAME("phoenix.Color","maxRGB",0x53e29ed3,"phoenix.Color.maxRGB","phoenix/Color.hx",103,0xf59e6b1b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(104)
	Float _g = ::Math_obj::max(this->g,this->b);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(104)
	return ::Math_obj::max(this->r,_g);
}


HX_DEFINE_DYNAMIC_FUNC0(Color_obj,maxRGB,return )

Float Color_obj::minRGB( ){
	HX_STACK_FRAME("phoenix.Color","minRGB",0xe87b20a5,"phoenix.Color.minRGB","phoenix/Color.hx",107,0xf59e6b1b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(108)
	Float _g = ::Math_obj::min(this->g,this->b);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(108)
	return ::Math_obj::min(this->r,_g);
}


HX_DEFINE_DYNAMIC_FUNC0(Color_obj,minRGB,return )

::luxe::tween::actuators::IGenericActuator Color_obj::tween( Dynamic __o__time_in_seconds,Dynamic _properties_to_tween,hx::Null< bool >  __o__override){
Dynamic _time_in_seconds = __o__time_in_seconds.Default(0.5);
bool _override = __o__override.Default(true);
	HX_STACK_FRAME("phoenix.Color","tween",0x538285a1,"phoenix.Color.tween","phoenix/Color.hx",113,0xf59e6b1b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_time_in_seconds,"_time_in_seconds")
	HX_STACK_ARG(_properties_to_tween,"_properties_to_tween")
	HX_STACK_ARG(_override,"_override")
{
		HX_STACK_LINE(113)
		if (((_properties_to_tween != null()))){
			HX_STACK_LINE(115)
			Float _dest_r = this->r;		HX_STACK_VAR(_dest_r,"_dest_r");
			HX_STACK_LINE(116)
			Float _dest_g = this->g;		HX_STACK_VAR(_dest_g,"_dest_g");
			HX_STACK_LINE(117)
			Float _dest_b = this->b;		HX_STACK_VAR(_dest_b,"_dest_b");
			HX_STACK_LINE(118)
			Float _dest_a = this->a;		HX_STACK_VAR(_dest_a,"_dest_a");
			HX_STACK_LINE(120)
			bool _change_r = false;		HX_STACK_VAR(_change_r,"_change_r");
			HX_STACK_LINE(121)
			bool _change_g = false;		HX_STACK_VAR(_change_g,"_change_g");
			HX_STACK_LINE(122)
			bool _change_b = false;		HX_STACK_VAR(_change_b,"_change_b");
			HX_STACK_LINE(123)
			bool _change_a = false;		HX_STACK_VAR(_change_a,"_change_a");
			HX_STACK_LINE(125)
			if ((::Std_obj::is(_properties_to_tween,hx::ClassOf< ::phoenix::Color >()))){
				HX_STACK_LINE(127)
				_dest_r = _properties_to_tween->__Field(HX_CSTRING("r"),true);
				HX_STACK_LINE(128)
				_dest_g = _properties_to_tween->__Field(HX_CSTRING("g"),true);
				HX_STACK_LINE(129)
				_dest_b = _properties_to_tween->__Field(HX_CSTRING("b"),true);
				HX_STACK_LINE(130)
				_dest_a = _properties_to_tween->__Field(HX_CSTRING("a"),true);
				HX_STACK_LINE(132)
				_change_r = true;
				HX_STACK_LINE(133)
				_change_g = true;
				HX_STACK_LINE(134)
				_change_b = true;
				HX_STACK_LINE(135)
				_change_a = true;
			}
			else{
				HX_STACK_LINE(139)
				if (((_properties_to_tween->__Field(HX_CSTRING("r"),true) != null()))){
					HX_STACK_LINE(139)
					_dest_r = _properties_to_tween->__Field(HX_CSTRING("r"),true);
					HX_STACK_LINE(139)
					_change_r = true;
				}
				HX_STACK_LINE(140)
				if (((_properties_to_tween->__Field(HX_CSTRING("g"),true) != null()))){
					HX_STACK_LINE(140)
					_dest_g = _properties_to_tween->__Field(HX_CSTRING("g"),true);
					HX_STACK_LINE(140)
					_change_g = true;
				}
				HX_STACK_LINE(141)
				if (((_properties_to_tween->__Field(HX_CSTRING("b"),true) != null()))){
					HX_STACK_LINE(141)
					_dest_b = _properties_to_tween->__Field(HX_CSTRING("b"),true);
					HX_STACK_LINE(141)
					_change_b = true;
				}
				HX_STACK_LINE(142)
				if (((_properties_to_tween->__Field(HX_CSTRING("a"),true) != null()))){
					HX_STACK_LINE(142)
					_dest_a = _properties_to_tween->__Field(HX_CSTRING("a"),true);
					HX_STACK_LINE(142)
					_change_a = true;
				}
			}
			struct _Function_2_1{
				inline static Dynamic Block( ){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Color.hx",146,0xf59e6b1b)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(146)
			Dynamic _properties = _Function_2_1::Block();		HX_STACK_VAR(_properties,"_properties");
			HX_STACK_LINE(148)
			if ((_change_r)){
				HX_STACK_LINE(148)
				_properties->__FieldRef(HX_CSTRING("r")) = _dest_r;
			}
			HX_STACK_LINE(149)
			if ((_change_g)){
				HX_STACK_LINE(149)
				_properties->__FieldRef(HX_CSTRING("g")) = _dest_g;
			}
			HX_STACK_LINE(150)
			if ((_change_b)){
				HX_STACK_LINE(150)
				_properties->__FieldRef(HX_CSTRING("b")) = _dest_b;
			}
			HX_STACK_LINE(151)
			if ((_change_a)){
				HX_STACK_LINE(151)
				_properties->__FieldRef(HX_CSTRING("a")) = _dest_a;
			}
			HX_STACK_LINE(153)
			return ::luxe::tween::Actuate_obj::tween(hx::ObjectPtr<OBJ_>(this),_time_in_seconds,_properties,_override,null());
		}
		else{
			HX_STACK_LINE(156)
			HX_STACK_DO_THROW(HX_CSTRING(" Warning: Color.tween passed a null destination "));
		}
		HX_STACK_LINE(113)
		return null();
	}
}


HX_DEFINE_DYNAMIC_FUNC3(Color_obj,tween,return )

::phoenix::Color Color_obj::clone( ){
	HX_STACK_FRAME("phoenix.Color","clone",0x8274ee93,"phoenix.Color.clone","phoenix/Color.hx",162,0xf59e6b1b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(162)
	return ::phoenix::Color_obj::__new(this->r,this->g,this->b,this->a);
}


HX_DEFINE_DYNAMIC_FUNC0(Color_obj,clone,return )

::phoenix::Color Color_obj::rgb( hx::Null< int >  __o__rgb){
int _rgb = __o__rgb.Default(16777215);
	HX_STACK_FRAME("phoenix.Color","rgb",0x34bc5cc3,"phoenix.Color.rgb","phoenix/Color.hx",165,0xf59e6b1b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_rgb,"_rgb")
{
		HX_STACK_LINE(166)
		this->from_int(_rgb);
		HX_STACK_LINE(167)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC1(Color_obj,rgb,return )

::phoenix::ColorHSL Color_obj::toColorHSL( ){
	HX_STACK_FRAME("phoenix.Color","toColorHSL",0x639d8f03,"phoenix.Color.toColorHSL","phoenix/Color.hx",171,0xf59e6b1b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(171)
	return ::phoenix::ColorHSL_obj::__new(null(),null(),null(),null())->fromColor(hx::ObjectPtr<OBJ_>(this));
}


HX_DEFINE_DYNAMIC_FUNC0(Color_obj,toColorHSL,return )

::phoenix::ColorHSV Color_obj::toColorHSV( ){
	HX_STACK_FRAME("phoenix.Color","toColorHSV",0x639d8f0d,"phoenix.Color.toColorHSV","phoenix/Color.hx",175,0xf59e6b1b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(175)
	return ::phoenix::ColorHSV_obj::__new(null(),null(),null(),null())->fromColor(hx::ObjectPtr<OBJ_>(this));
}


HX_DEFINE_DYNAMIC_FUNC0(Color_obj,toColorHSV,return )

Void Color_obj::fromColorHSV( ::phoenix::ColorHSV _color_hsv){
{
		HX_STACK_FRAME("phoenix.Color","fromColorHSV",0xfc51ac7c,"phoenix.Color.fromColorHSV","phoenix/Color.hx",178,0xf59e6b1b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_color_hsv,"_color_hsv")
		HX_STACK_LINE(180)
		Float d = (Float(hx::Mod(_color_hsv->h,(int)360)) / Float((int)60));		HX_STACK_VAR(d,"d");
		HX_STACK_LINE(182)
		if (((d < (int)0))){
			HX_STACK_LINE(183)
			hx::AddEq(d,(int)6);
		}
		HX_STACK_LINE(186)
		int hf = ::Math_obj::floor(d);		HX_STACK_VAR(hf,"hf");
		HX_STACK_LINE(187)
		int hi = hx::Mod(hf,(int)6);		HX_STACK_VAR(hi,"hi");
		HX_STACK_LINE(188)
		Float f = (d - hf);		HX_STACK_VAR(f,"f");
		HX_STACK_LINE(190)
		Float v = _color_hsv->v;		HX_STACK_VAR(v,"v");
		HX_STACK_LINE(191)
		Float p = (_color_hsv->v * (((int)1 - _color_hsv->s)));		HX_STACK_VAR(p,"p");
		HX_STACK_LINE(192)
		Float q = (_color_hsv->v * (((int)1 - (f * _color_hsv->s))));		HX_STACK_VAR(q,"q");
		HX_STACK_LINE(193)
		Float t = (_color_hsv->v * (((int)1 - ((((int)1 - f)) * _color_hsv->s))));		HX_STACK_VAR(t,"t");
		HX_STACK_LINE(195)
		switch( (int)(hi)){
			case (int)0: {
				HX_STACK_LINE(196)
				this->set_r(v);
				HX_STACK_LINE(196)
				this->set_g(t);
				HX_STACK_LINE(196)
				this->set_b(p);
			}
			;break;
			case (int)1: {
				HX_STACK_LINE(197)
				this->set_r(q);
				HX_STACK_LINE(197)
				this->set_g(v);
				HX_STACK_LINE(197)
				this->set_b(p);
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(198)
				this->set_r(p);
				HX_STACK_LINE(198)
				this->set_g(v);
				HX_STACK_LINE(198)
				this->set_b(t);
			}
			;break;
			case (int)3: {
				HX_STACK_LINE(199)
				this->set_r(p);
				HX_STACK_LINE(199)
				this->set_g(q);
				HX_STACK_LINE(199)
				this->set_b(v);
			}
			;break;
			case (int)4: {
				HX_STACK_LINE(200)
				this->set_r(t);
				HX_STACK_LINE(200)
				this->set_g(p);
				HX_STACK_LINE(200)
				this->set_b(v);
			}
			;break;
			case (int)5: {
				HX_STACK_LINE(201)
				this->set_r(v);
				HX_STACK_LINE(201)
				this->set_g(p);
				HX_STACK_LINE(201)
				this->set_b(q);
			}
			;break;
		}
		HX_STACK_LINE(204)
		this->a = _color_hsv->a;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Color_obj,fromColorHSV,(void))

::phoenix::Color Color_obj::fromColorHSL( ::phoenix::ColorHSL _color_hsl){
	HX_STACK_FRAME("phoenix.Color","fromColorHSL",0xfc51ac72,"phoenix.Color.fromColorHSL","phoenix/Color.hx",208,0xf59e6b1b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_color_hsl,"_color_hsl")
	HX_STACK_LINE(210)
	Float q = (int)1;		HX_STACK_VAR(q,"q");
	HX_STACK_LINE(212)
	if (((_color_hsl->l < 0.5))){
		HX_STACK_LINE(213)
		q = (_color_hsl->l * (((int)1 + _color_hsl->s)));
	}
	else{
		HX_STACK_LINE(215)
		q = ((_color_hsl->l + _color_hsl->s) - (_color_hsl->l * _color_hsl->s));
	}
	HX_STACK_LINE(218)
	Float p = (((int)2 * _color_hsl->l) - q);		HX_STACK_VAR(p,"p");
	HX_STACK_LINE(219)
	Float hk = (Float(hx::Mod(_color_hsl->h,(int)360)) / Float((int)360));		HX_STACK_VAR(hk,"hk");
	HX_STACK_LINE(221)
	Float tr = (hk + 0.33333333333333331);		HX_STACK_VAR(tr,"tr");
	HX_STACK_LINE(222)
	Float tg = hk;		HX_STACK_VAR(tg,"tg");
	HX_STACK_LINE(223)
	Float tb = (hk - 0.33333333333333331);		HX_STACK_VAR(tb,"tb");
	HX_STACK_LINE(225)
	Array< Float > tc = Array_obj< Float >::__new().Add(tr).Add(tg).Add(tb);		HX_STACK_VAR(tc,"tc");
	HX_STACK_LINE(227)
	{
		HX_STACK_LINE(227)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(227)
		int _g = tc->length;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(227)
		while((true)){
			HX_STACK_LINE(227)
			if ((!(((_g1 < _g))))){
				HX_STACK_LINE(227)
				break;
			}
			HX_STACK_LINE(227)
			int n = (_g1)++;		HX_STACK_VAR(n,"n");
			HX_STACK_LINE(229)
			Float t = tc->__get(n);		HX_STACK_VAR(t,"t");
			HX_STACK_LINE(231)
			if (((t < (int)0))){
				HX_STACK_LINE(231)
				hx::AddEq(t,(int)1);
			}
			HX_STACK_LINE(232)
			if (((t > (int)1))){
				HX_STACK_LINE(232)
				hx::SubEq(t,(int)1);
			}
			HX_STACK_LINE(234)
			if (((t < 0.16666666666666666))){
				HX_STACK_LINE(234)
				tc[n] = (p + ((((q - p)) * (int)6) * t));
			}
			else{
				HX_STACK_LINE(236)
				if (((t < 0.5))){
					HX_STACK_LINE(234)
					tc[n] = q;
				}
				else{
					HX_STACK_LINE(238)
					if (((t < 0.66666666666666663))){
						HX_STACK_LINE(234)
						tc[n] = (p + ((((q - p)) * (int)6) * ((0.66666666666666663 - t))));
					}
					else{
						HX_STACK_LINE(234)
						tc[n] = p;
					}
				}
			}
		}
	}
	HX_STACK_LINE(247)
	this->set_r(tc->__get((int)0));
	HX_STACK_LINE(248)
	this->set_g(tc->__get((int)1));
	HX_STACK_LINE(249)
	this->set_b(tc->__get((int)2));
	HX_STACK_LINE(251)
	this->a = _color_hsl->a;
	HX_STACK_LINE(253)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(Color_obj,fromColorHSL,return )

::String Color_obj::toString( ){
	HX_STACK_FRAME("phoenix.Color","toString",0xc4695b36,"phoenix.Color.toString","phoenix/Color.hx",259,0xf59e6b1b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(259)
	return ((((((((HX_CSTRING("{ r:") + this->r) + HX_CSTRING(" , g:")) + this->g) + HX_CSTRING(" , b:")) + this->b) + HX_CSTRING(" , a:")) + this->a) + HX_CSTRING(" }"));
}


HX_DEFINE_DYNAMIC_FUNC0(Color_obj,toString,return )

Void Color_obj::from_int( int _i){
{
		HX_STACK_FRAME("phoenix.Color","from_int",0x3e087ee4,"phoenix.Color.from_int","phoenix/Color.hx",262,0xf59e6b1b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_i,"_i")
		HX_STACK_LINE(264)
		int _r = (int(_i) >> int((int)16));		HX_STACK_VAR(_r,"_r");
		HX_STACK_LINE(265)
		int _g = (int((int(_i) >> int((int)8))) & int((int)255));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(266)
		int _b = (int(_i) & int((int)255));		HX_STACK_VAR(_b,"_b");
		HX_STACK_LINE(269)
		this->set_r((Float(_r) / Float((int)255)));
		HX_STACK_LINE(270)
		this->set_g((Float(_g) / Float((int)255)));
		HX_STACK_LINE(271)
		this->set_b((Float(_b) / Float((int)255)));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Color_obj,from_int,(void))

::phoenix::Color Color_obj::random( Dynamic __o__include_alpha){
Dynamic _include_alpha = __o__include_alpha.Default(false);
	HX_STACK_FRAME("phoenix.Color","random",0x4d1d160d,"phoenix.Color.random","phoenix/Color.hx",78,0xf59e6b1b)
	HX_STACK_ARG(_include_alpha,"_include_alpha")
{
		HX_STACK_LINE(79)
		Float _g = ::Math_obj::random();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(79)
		Float _g1 = ::Math_obj::random();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(79)
		Float _g2 = ::Math_obj::random();		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(79)
		Float _g3;		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(79)
		if ((_include_alpha)){
			HX_STACK_LINE(79)
			_g3 = ::Math_obj::random();
		}
		else{
			HX_STACK_LINE(79)
			_g3 = 1.0;
		}
		HX_STACK_LINE(79)
		return ::phoenix::Color_obj::__new(_g,_g1,_g2,_g3);
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Color_obj,random,return )


Color_obj::Color_obj()
{
}

Dynamic Color_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"r") ) { return r; }
		if (HX_FIELD_EQ(inName,"g") ) { return g; }
		if (HX_FIELD_EQ(inName,"b") ) { return b; }
		if (HX_FIELD_EQ(inName,"a") ) { return a; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"set") ) { return set_dyn(); }
		if (HX_FIELD_EQ(inName,"rgb") ) { return rgb_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"set_r") ) { return set_r_dyn(); }
		if (HX_FIELD_EQ(inName,"set_g") ) { return set_g_dyn(); }
		if (HX_FIELD_EQ(inName,"set_b") ) { return set_b_dyn(); }
		if (HX_FIELD_EQ(inName,"tween") ) { return tween_dyn(); }
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"random") ) { return random_dyn(); }
		if (HX_FIELD_EQ(inName,"is_hsl") ) { return is_hsl; }
		if (HX_FIELD_EQ(inName,"is_hsv") ) { return is_hsv; }
		if (HX_FIELD_EQ(inName,"maxRGB") ) { return maxRGB_dyn(); }
		if (HX_FIELD_EQ(inName,"minRGB") ) { return minRGB_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		if (HX_FIELD_EQ(inName,"from_int") ) { return from_int_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"refreshing") ) { return refreshing; }
		if (HX_FIELD_EQ(inName,"toColorHSL") ) { return toColorHSL_dyn(); }
		if (HX_FIELD_EQ(inName,"toColorHSV") ) { return toColorHSV_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"fromColorHSV") ) { return fromColorHSV_dyn(); }
		if (HX_FIELD_EQ(inName,"fromColorHSL") ) { return fromColorHSL_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Color_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"r") ) { if (inCallProp) return set_r(inValue);r=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"g") ) { if (inCallProp) return set_g(inValue);g=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"b") ) { if (inCallProp) return set_b(inValue);b=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"a") ) { a=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"is_hsl") ) { is_hsl=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"is_hsv") ) { is_hsv=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"refreshing") ) { refreshing=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Color_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("r"));
	outFields->push(HX_CSTRING("g"));
	outFields->push(HX_CSTRING("b"));
	outFields->push(HX_CSTRING("a"));
	outFields->push(HX_CSTRING("is_hsl"));
	outFields->push(HX_CSTRING("is_hsv"));
	outFields->push(HX_CSTRING("refreshing"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("random"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(Color_obj,r),HX_CSTRING("r")},
	{hx::fsFloat,(int)offsetof(Color_obj,g),HX_CSTRING("g")},
	{hx::fsFloat,(int)offsetof(Color_obj,b),HX_CSTRING("b")},
	{hx::fsFloat,(int)offsetof(Color_obj,a),HX_CSTRING("a")},
	{hx::fsBool,(int)offsetof(Color_obj,is_hsl),HX_CSTRING("is_hsl")},
	{hx::fsBool,(int)offsetof(Color_obj,is_hsv),HX_CSTRING("is_hsv")},
	{hx::fsBool,(int)offsetof(Color_obj,refreshing),HX_CSTRING("refreshing")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("r"),
	HX_CSTRING("g"),
	HX_CSTRING("b"),
	HX_CSTRING("a"),
	HX_CSTRING("is_hsl"),
	HX_CSTRING("is_hsv"),
	HX_CSTRING("refreshing"),
	HX_CSTRING("set_r"),
	HX_CSTRING("set_g"),
	HX_CSTRING("set_b"),
	HX_CSTRING("set"),
	HX_CSTRING("maxRGB"),
	HX_CSTRING("minRGB"),
	HX_CSTRING("tween"),
	HX_CSTRING("clone"),
	HX_CSTRING("rgb"),
	HX_CSTRING("toColorHSL"),
	HX_CSTRING("toColorHSV"),
	HX_CSTRING("fromColorHSV"),
	HX_CSTRING("fromColorHSL"),
	HX_CSTRING("toString"),
	HX_CSTRING("from_int"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Color_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Color_obj::__mClass,"__mClass");
};

#endif

Class Color_obj::__mClass;

void Color_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("phoenix.Color"), hx::TCanCast< Color_obj> ,sStaticFields,sMemberFields,
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

void Color_obj::__boot()
{
}

} // end namespace phoenix
