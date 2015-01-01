#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
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

Void ColorHSV_obj::__construct(hx::Null< Float >  __o__h,hx::Null< Float >  __o__s,hx::Null< Float >  __o__v,hx::Null< Float >  __o__a)
{
HX_STACK_FRAME("phoenix.ColorHSV","new",0xa18c7ab9,"phoenix.ColorHSV.new","phoenix/Color.hx",456,0xf59e6b1b)
HX_STACK_THIS(this)
HX_STACK_ARG(__o__h,"_h")
HX_STACK_ARG(__o__s,"_s")
HX_STACK_ARG(__o__v,"_v")
HX_STACK_ARG(__o__a,"_a")
Float _h = __o__h.Default(0.0);
Float _s = __o__s.Default(0.0);
Float _v = __o__v.Default(1.0);
Float _a = __o__a.Default(1.0);
{
	HX_STACK_LINE(460)
	this->v = 1.0;
	HX_STACK_LINE(459)
	this->s = 0.0;
	HX_STACK_LINE(458)
	this->h = 0.0;
	HX_STACK_LINE(480)
	super::__construct(null(),null(),null(),null());
	HX_STACK_LINE(482)
	this->is_hsv = true;
	HX_STACK_LINE(484)
	this->set_h(_h);
	HX_STACK_LINE(485)
	this->set_s(_s);
	HX_STACK_LINE(486)
	this->set_v(_v);
	HX_STACK_LINE(487)
	this->a = _a;
	HX_STACK_LINE(489)
	this->_refresh();
}
;
	return null();
}

//ColorHSV_obj::~ColorHSV_obj() { }

Dynamic ColorHSV_obj::__CreateEmpty() { return  new ColorHSV_obj; }
hx::ObjectPtr< ColorHSV_obj > ColorHSV_obj::__new(hx::Null< Float >  __o__h,hx::Null< Float >  __o__s,hx::Null< Float >  __o__v,hx::Null< Float >  __o__a)
{  hx::ObjectPtr< ColorHSV_obj > result = new ColorHSV_obj();
	result->__construct(__o__h,__o__s,__o__v,__o__a);
	return result;}

Dynamic ColorHSV_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ColorHSV_obj > result = new ColorHSV_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return result;}

Float ColorHSV_obj::set_h( Float _h){
	HX_STACK_FRAME("phoenix.ColorHSV","set_h",0x5aaa4de4,"phoenix.ColorHSV.set_h","phoenix/Color.hx",462,0xf59e6b1b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_h,"_h")
	HX_STACK_LINE(463)
	this->h = _h;
	HX_STACK_LINE(464)
	this->_refresh();
	HX_STACK_LINE(465)
	return _h;
}


HX_DEFINE_DYNAMIC_FUNC1(ColorHSV_obj,set_h,return )

Float ColorHSV_obj::set_s( Float _s){
	HX_STACK_FRAME("phoenix.ColorHSV","set_s",0x5aaa4def,"phoenix.ColorHSV.set_s","phoenix/Color.hx",467,0xf59e6b1b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_s,"_s")
	HX_STACK_LINE(468)
	this->s = _s;
	HX_STACK_LINE(469)
	this->_refresh();
	HX_STACK_LINE(470)
	return this->s;
}


HX_DEFINE_DYNAMIC_FUNC1(ColorHSV_obj,set_s,return )

Float ColorHSV_obj::set_v( Float _v){
	HX_STACK_FRAME("phoenix.ColorHSV","set_v",0x5aaa4df2,"phoenix.ColorHSV.set_v","phoenix/Color.hx",472,0xf59e6b1b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_v,"_v")
	HX_STACK_LINE(473)
	this->v = _v;
	HX_STACK_LINE(474)
	this->_refresh();
	HX_STACK_LINE(475)
	return this->v;
}


HX_DEFINE_DYNAMIC_FUNC1(ColorHSV_obj,set_v,return )

::phoenix::Color ColorHSV_obj::set( Dynamic _h,Dynamic _s,Dynamic _v,Dynamic _a){
	HX_STACK_FRAME("phoenix.ColorHSV","set",0xa19045fb,"phoenix.ColorHSV.set","phoenix/Color.hx",493,0xf59e6b1b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_h,"_h")
	HX_STACK_ARG(_s,"_s")
	HX_STACK_ARG(_v,"_v")
	HX_STACK_ARG(_a,"_a")
	HX_STACK_LINE(495)
	Float _seth = this->h;		HX_STACK_VAR(_seth,"_seth");
	HX_STACK_LINE(496)
	Float _sets = this->s;		HX_STACK_VAR(_sets,"_sets");
	HX_STACK_LINE(497)
	Float _setv = this->v;		HX_STACK_VAR(_setv,"_setv");
	HX_STACK_LINE(498)
	Float _seta = this->a;		HX_STACK_VAR(_seta,"_seta");
	HX_STACK_LINE(501)
	if (((_h != null()))){
		HX_STACK_LINE(501)
		_seth = _h;
	}
	HX_STACK_LINE(502)
	if (((_s != null()))){
		HX_STACK_LINE(502)
		_sets = _s;
	}
	HX_STACK_LINE(503)
	if (((_v != null()))){
		HX_STACK_LINE(503)
		_setv = _v;
	}
	HX_STACK_LINE(504)
	if (((_a != null()))){
		HX_STACK_LINE(504)
		_seta = _a;
	}
	HX_STACK_LINE(506)
	this->set_h(_seth);
	HX_STACK_LINE(507)
	this->set_s(_sets);
	HX_STACK_LINE(508)
	this->set_v(_setv);
	HX_STACK_LINE(509)
	this->a = _seta;
	HX_STACK_LINE(512)
	this->_refresh();
	HX_STACK_LINE(514)
	return hx::ObjectPtr<OBJ_>(this);
}


::luxe::tween::actuators::IGenericActuator ColorHSV_obj::tween( Dynamic __o__time_in_seconds,Dynamic _dest,hx::Null< bool >  __o__override){
Dynamic _time_in_seconds = __o__time_in_seconds.Default(0.5);
bool _override = __o__override.Default(true);
	HX_STACK_FRAME("phoenix.ColorHSV","tween",0xf9eb5d04,"phoenix.ColorHSV.tween","phoenix/Color.hx",518,0xf59e6b1b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_time_in_seconds,"_time_in_seconds")
	HX_STACK_ARG(_dest,"_dest")
	HX_STACK_ARG(_override,"_override")
{
		HX_STACK_LINE(520)
		this->super::tween(_time_in_seconds,_dest,_override);
		HX_STACK_LINE(522)
		if (((_dest != null()))){
			HX_STACK_LINE(524)
			Float _dest_h = this->h;		HX_STACK_VAR(_dest_h,"_dest_h");
			HX_STACK_LINE(525)
			Float _dest_s = this->s;		HX_STACK_VAR(_dest_s,"_dest_s");
			HX_STACK_LINE(526)
			Float _dest_v = this->v;		HX_STACK_VAR(_dest_v,"_dest_v");
			HX_STACK_LINE(527)
			Float _dest_a = this->a;		HX_STACK_VAR(_dest_a,"_dest_a");
			HX_STACK_LINE(529)
			bool _change_h = false;		HX_STACK_VAR(_change_h,"_change_h");
			HX_STACK_LINE(530)
			bool _change_s = false;		HX_STACK_VAR(_change_s,"_change_s");
			HX_STACK_LINE(531)
			bool _change_v = false;		HX_STACK_VAR(_change_v,"_change_v");
			HX_STACK_LINE(532)
			bool _change_a = false;		HX_STACK_VAR(_change_a,"_change_a");
			HX_STACK_LINE(534)
			if ((::Std_obj::is(_dest,hx::ClassOf< ::phoenix::ColorHSV >()))){
				HX_STACK_LINE(536)
				_dest_h = _dest->__Field(HX_CSTRING("h"),true);
				HX_STACK_LINE(537)
				_dest_s = _dest->__Field(HX_CSTRING("s"),true);
				HX_STACK_LINE(538)
				_dest_v = _dest->__Field(HX_CSTRING("v"),true);
				HX_STACK_LINE(539)
				_dest_a = _dest->__Field(HX_CSTRING("a"),true);
				HX_STACK_LINE(541)
				_change_h = true;
				HX_STACK_LINE(542)
				_change_s = true;
				HX_STACK_LINE(543)
				_change_v = true;
				HX_STACK_LINE(544)
				_change_a = true;
			}
			else{
				HX_STACK_LINE(548)
				if (((_dest->__Field(HX_CSTRING("h"),true) != null()))){
					HX_STACK_LINE(548)
					_dest_h = _dest->__Field(HX_CSTRING("h"),true);
					HX_STACK_LINE(548)
					_change_h = true;
				}
				HX_STACK_LINE(549)
				if (((_dest->__Field(HX_CSTRING("s"),true) != null()))){
					HX_STACK_LINE(549)
					_dest_s = _dest->__Field(HX_CSTRING("s"),true);
					HX_STACK_LINE(549)
					_change_s = true;
				}
				HX_STACK_LINE(550)
				if (((_dest->__Field(HX_CSTRING("v"),true) != null()))){
					HX_STACK_LINE(550)
					_dest_v = _dest->__Field(HX_CSTRING("v"),true);
					HX_STACK_LINE(550)
					_change_v = true;
				}
				HX_STACK_LINE(551)
				if (((_dest->__Field(HX_CSTRING("a"),true) != null()))){
					HX_STACK_LINE(551)
					_dest_a = _dest->__Field(HX_CSTRING("a"),true);
					HX_STACK_LINE(551)
					_change_a = true;
				}
			}
			struct _Function_2_1{
				inline static Dynamic Block( ){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Color.hx",555,0xf59e6b1b)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(555)
			Dynamic _properties = _Function_2_1::Block();		HX_STACK_VAR(_properties,"_properties");
			HX_STACK_LINE(557)
			if ((_change_h)){
				HX_STACK_LINE(557)
				_properties->__FieldRef(HX_CSTRING("h")) = _dest_h;
			}
			HX_STACK_LINE(558)
			if ((_change_s)){
				HX_STACK_LINE(558)
				_properties->__FieldRef(HX_CSTRING("s")) = _dest_s;
			}
			HX_STACK_LINE(559)
			if ((_change_v)){
				HX_STACK_LINE(559)
				_properties->__FieldRef(HX_CSTRING("v")) = _dest_v;
			}
			HX_STACK_LINE(560)
			if ((_change_a)){
				HX_STACK_LINE(560)
				_properties->__FieldRef(HX_CSTRING("a")) = _dest_a;
			}
			HX_STACK_LINE(562)
			return ::luxe::tween::Actuate_obj::tween(hx::ObjectPtr<OBJ_>(this),_time_in_seconds,_properties,_override,null());
		}
		else{
			HX_STACK_LINE(565)
			HX_STACK_DO_THROW(HX_CSTRING(" Warning: Color.tween passed a null destination "));
		}
		HX_STACK_LINE(522)
		return null();
	}
}


::phoenix::ColorHSV ColorHSV_obj::_refresh( ){
	HX_STACK_FRAME("phoenix.ColorHSV","_refresh",0x5bbb6663,"phoenix.ColorHSV._refresh","phoenix/Color.hx",570,0xf59e6b1b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(572)
	this->refreshing = true;
	HX_STACK_LINE(573)
	this->super::fromColorHSV(hx::ObjectPtr<OBJ_>(this));
	HX_STACK_LINE(574)
	this->refreshing = false;
	HX_STACK_LINE(576)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC0(ColorHSV_obj,_refresh,return )

::phoenix::Color ColorHSV_obj::clone( ){
	HX_STACK_FRAME("phoenix.ColorHSV","clone",0x28ddc5f6,"phoenix.ColorHSV.clone","phoenix/Color.hx",580,0xf59e6b1b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(580)
	return ::phoenix::ColorHSV_obj::__new(this->h,this->s,this->v,this->a);
}


::phoenix::Color ColorHSV_obj::toColor( ){
	HX_STACK_FRAME("phoenix.ColorHSV","toColor",0x116008c1,"phoenix.ColorHSV.toColor","phoenix/Color.hx",585,0xf59e6b1b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(585)
	return this->_refresh();
}


HX_DEFINE_DYNAMIC_FUNC0(ColorHSV_obj,toColor,return )

::phoenix::ColorHSL ColorHSV_obj::toColorHSL( ){
	HX_STACK_FRAME("phoenix.ColorHSV","toColorHSL",0xd41e10c0,"phoenix.ColorHSV.toColorHSL","phoenix/Color.hx",588,0xf59e6b1b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(589)
	this->_refresh();
	HX_STACK_LINE(590)
	return this->super::toColorHSL();
}


::phoenix::Color ColorHSV_obj::fromColorHSL( ::phoenix::ColorHSL _color_hsl){
	HX_STACK_FRAME("phoenix.ColorHSV","fromColorHSL",0xef43d76f,"phoenix.ColorHSV.fromColorHSL","phoenix/Color.hx",593,0xf59e6b1b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_color_hsl,"_color_hsl")
	HX_STACK_LINE(595)
	_color_hsl->_refresh();
	HX_STACK_LINE(596)
	return this->fromColor(_color_hsl);
}


::phoenix::ColorHSV ColorHSV_obj::fromColor( ::phoenix::Color _color){
	HX_STACK_FRAME("phoenix.ColorHSV","fromColor",0x0fefceb2,"phoenix.ColorHSV.fromColor","phoenix/Color.hx",599,0xf59e6b1b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_color,"_color")
	HX_STACK_LINE(601)
	Float max = _color->maxRGB();		HX_STACK_VAR(max,"max");
	HX_STACK_LINE(602)
	Float min = _color->minRGB();		HX_STACK_VAR(min,"min");
	HX_STACK_LINE(603)
	Float add = (max + min);		HX_STACK_VAR(add,"add");
	HX_STACK_LINE(604)
	Float sub = (max - min);		HX_STACK_VAR(sub,"sub");
	HX_STACK_LINE(606)
	Float _h = (int)0;		HX_STACK_VAR(_h,"_h");
	HX_STACK_LINE(608)
	if (((max == min))){
		HX_STACK_LINE(609)
		_h = (int)0;
	}
	else{
		HX_STACK_LINE(610)
		if (((max == _color->r))){
			HX_STACK_LINE(611)
			_h = hx::Mod((((Float(((int)60 * ((_color->g - _color->b)))) / Float(sub)) + (int)360)),(int)360);
		}
		else{
			HX_STACK_LINE(612)
			if (((max == _color->g))){
				HX_STACK_LINE(613)
				_h = ((Float(((int)60 * ((_color->b - _color->r)))) / Float(sub)) + (int)120);
			}
			else{
				HX_STACK_LINE(614)
				if (((max == _color->b))){
					HX_STACK_LINE(615)
					_h = ((Float(((int)60 * ((_color->r - _color->g)))) / Float(sub)) + (int)240);
				}
			}
		}
	}
	HX_STACK_LINE(618)
	Float _s;		HX_STACK_VAR(_s,"_s");
	HX_STACK_LINE(618)
	if (((max == (int)0))){
		HX_STACK_LINE(619)
		_s = (int)0;
	}
	else{
		HX_STACK_LINE(621)
		_s = ((int)1 - (Float(min) / Float(max)));
	}
	HX_STACK_LINE(624)
	this->set_h(_h);
	HX_STACK_LINE(625)
	this->set_s(_s);
	HX_STACK_LINE(626)
	this->set_v(max);
	HX_STACK_LINE(627)
	this->a = _color->a;
	HX_STACK_LINE(629)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(ColorHSV_obj,fromColor,return )

::String ColorHSV_obj::toString( ){
	HX_STACK_FRAME("phoenix.ColorHSV","toString",0x6d5103b3,"phoenix.ColorHSV.toString","phoenix/Color.hx",634,0xf59e6b1b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(634)
	return ((((((((HX_CSTRING("{ h:") + this->h) + HX_CSTRING(" , s:")) + this->s) + HX_CSTRING(" , v:")) + this->v) + HX_CSTRING(" , a:")) + this->a) + HX_CSTRING(" }"));
}



ColorHSV_obj::ColorHSV_obj()
{
}

Dynamic ColorHSV_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"h") ) { return h; }
		if (HX_FIELD_EQ(inName,"s") ) { return s; }
		if (HX_FIELD_EQ(inName,"v") ) { return v; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"set") ) { return set_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"set_h") ) { return set_h_dyn(); }
		if (HX_FIELD_EQ(inName,"set_s") ) { return set_s_dyn(); }
		if (HX_FIELD_EQ(inName,"set_v") ) { return set_v_dyn(); }
		if (HX_FIELD_EQ(inName,"tween") ) { return tween_dyn(); }
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"toColor") ) { return toColor_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_refresh") ) { return _refresh_dyn(); }
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"fromColor") ) { return fromColor_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"toColorHSL") ) { return toColorHSL_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"fromColorHSL") ) { return fromColorHSL_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ColorHSV_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"h") ) { if (inCallProp) return set_h(inValue);h=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"s") ) { if (inCallProp) return set_s(inValue);s=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"v") ) { if (inCallProp) return set_v(inValue);v=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ColorHSV_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("h"));
	outFields->push(HX_CSTRING("s"));
	outFields->push(HX_CSTRING("v"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(ColorHSV_obj,h),HX_CSTRING("h")},
	{hx::fsFloat,(int)offsetof(ColorHSV_obj,s),HX_CSTRING("s")},
	{hx::fsFloat,(int)offsetof(ColorHSV_obj,v),HX_CSTRING("v")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("h"),
	HX_CSTRING("s"),
	HX_CSTRING("v"),
	HX_CSTRING("set_h"),
	HX_CSTRING("set_s"),
	HX_CSTRING("set_v"),
	HX_CSTRING("set"),
	HX_CSTRING("tween"),
	HX_CSTRING("_refresh"),
	HX_CSTRING("clone"),
	HX_CSTRING("toColor"),
	HX_CSTRING("toColorHSL"),
	HX_CSTRING("fromColorHSL"),
	HX_CSTRING("fromColor"),
	HX_CSTRING("toString"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ColorHSV_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ColorHSV_obj::__mClass,"__mClass");
};

#endif

Class ColorHSV_obj::__mClass;

void ColorHSV_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("phoenix.ColorHSV"), hx::TCanCast< ColorHSV_obj> ,sStaticFields,sMemberFields,
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

void ColorHSV_obj::__boot()
{
}

} // end namespace phoenix
