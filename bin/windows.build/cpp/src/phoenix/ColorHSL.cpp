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
namespace phoenix{

Void ColorHSL_obj::__construct(hx::Null< Float >  __o__h,hx::Null< Float >  __o__s,hx::Null< Float >  __o__l,hx::Null< Float >  __o__a)
{
HX_STACK_FRAME("phoenix.ColorHSL","new",0xdf8aadaf,"phoenix.ColorHSL.new","phoenix/Color.hx",281,0xf59e6b1b)
HX_STACK_THIS(this)
HX_STACK_ARG(__o__h,"_h")
HX_STACK_ARG(__o__s,"_s")
HX_STACK_ARG(__o__l,"_l")
HX_STACK_ARG(__o__a,"_a")
Float _h = __o__h.Default(0.0);
Float _s = __o__s.Default(1.0);
Float _l = __o__l.Default(1.0);
Float _a = __o__a.Default(1.0);
{
	HX_STACK_LINE(285)
	this->l = 1.0;
	HX_STACK_LINE(284)
	this->s = 1.0;
	HX_STACK_LINE(283)
	this->h = 0.0;
	HX_STACK_LINE(305)
	super::__construct(null(),null(),null(),null());
	HX_STACK_LINE(307)
	this->is_hsl = true;
	HX_STACK_LINE(309)
	this->set_h(_h);
	HX_STACK_LINE(310)
	this->set_s(_s);
	HX_STACK_LINE(311)
	this->set_l(_l);
	HX_STACK_LINE(312)
	this->a = _a;
	HX_STACK_LINE(314)
	this->_refresh();
}
;
	return null();
}

//ColorHSL_obj::~ColorHSL_obj() { }

Dynamic ColorHSL_obj::__CreateEmpty() { return  new ColorHSL_obj; }
hx::ObjectPtr< ColorHSL_obj > ColorHSL_obj::__new(hx::Null< Float >  __o__h,hx::Null< Float >  __o__s,hx::Null< Float >  __o__l,hx::Null< Float >  __o__a)
{  hx::ObjectPtr< ColorHSL_obj > result = new ColorHSL_obj();
	result->__construct(__o__h,__o__s,__o__l,__o__a);
	return result;}

Dynamic ColorHSL_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ColorHSL_obj > result = new ColorHSL_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return result;}

Float ColorHSL_obj::set_h( Float _h){
	HX_STACK_FRAME("phoenix.ColorHSL","set_h",0xbad3aa5a,"phoenix.ColorHSL.set_h","phoenix/Color.hx",287,0xf59e6b1b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_h,"_h")
	HX_STACK_LINE(288)
	this->h = _h;
	HX_STACK_LINE(289)
	this->_refresh();
	HX_STACK_LINE(290)
	return _h;
}


HX_DEFINE_DYNAMIC_FUNC1(ColorHSL_obj,set_h,return )

Float ColorHSL_obj::set_s( Float _s){
	HX_STACK_FRAME("phoenix.ColorHSL","set_s",0xbad3aa65,"phoenix.ColorHSL.set_s","phoenix/Color.hx",292,0xf59e6b1b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_s,"_s")
	HX_STACK_LINE(293)
	this->s = _s;
	HX_STACK_LINE(294)
	this->_refresh();
	HX_STACK_LINE(295)
	return _s;
}


HX_DEFINE_DYNAMIC_FUNC1(ColorHSL_obj,set_s,return )

Float ColorHSL_obj::set_l( Float _l){
	HX_STACK_FRAME("phoenix.ColorHSL","set_l",0xbad3aa5e,"phoenix.ColorHSL.set_l","phoenix/Color.hx",297,0xf59e6b1b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_l,"_l")
	HX_STACK_LINE(298)
	this->l = _l;
	HX_STACK_LINE(299)
	this->_refresh();
	HX_STACK_LINE(300)
	return _l;
}


HX_DEFINE_DYNAMIC_FUNC1(ColorHSL_obj,set_l,return )

::phoenix::Color ColorHSL_obj::set( Dynamic _h,Dynamic _s,Dynamic _l,Dynamic _a){
	HX_STACK_FRAME("phoenix.ColorHSL","set",0xdf8e78f1,"phoenix.ColorHSL.set","phoenix/Color.hx",318,0xf59e6b1b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_h,"_h")
	HX_STACK_ARG(_s,"_s")
	HX_STACK_ARG(_l,"_l")
	HX_STACK_ARG(_a,"_a")
	HX_STACK_LINE(320)
	Float _seth = this->h;		HX_STACK_VAR(_seth,"_seth");
	HX_STACK_LINE(321)
	Float _sets = this->s;		HX_STACK_VAR(_sets,"_sets");
	HX_STACK_LINE(322)
	Float _setl = this->l;		HX_STACK_VAR(_setl,"_setl");
	HX_STACK_LINE(323)
	Float _seta = this->a;		HX_STACK_VAR(_seta,"_seta");
	HX_STACK_LINE(326)
	if (((_h != null()))){
		HX_STACK_LINE(326)
		_seth = _h;
	}
	HX_STACK_LINE(327)
	if (((_s != null()))){
		HX_STACK_LINE(327)
		_sets = _s;
	}
	HX_STACK_LINE(328)
	if (((_l != null()))){
		HX_STACK_LINE(328)
		_setl = _l;
	}
	HX_STACK_LINE(329)
	if (((_a != null()))){
		HX_STACK_LINE(329)
		_seta = _a;
	}
	HX_STACK_LINE(331)
	this->set_h(_seth);
	HX_STACK_LINE(332)
	this->set_s(_sets);
	HX_STACK_LINE(333)
	this->set_l(_setl);
	HX_STACK_LINE(334)
	this->a = _seta;
	HX_STACK_LINE(336)
	this->_refresh();
	HX_STACK_LINE(338)
	return hx::ObjectPtr<OBJ_>(this);
}


::luxe::tween::actuators::IGenericActuator ColorHSL_obj::tween( Dynamic __o__time_in_seconds,Dynamic _dest,hx::Null< bool >  __o__override){
Dynamic _time_in_seconds = __o__time_in_seconds.Default(0.5);
bool _override = __o__override.Default(true);
	HX_STACK_FRAME("phoenix.ColorHSL","tween",0x5a14b97a,"phoenix.ColorHSL.tween","phoenix/Color.hx",342,0xf59e6b1b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_time_in_seconds,"_time_in_seconds")
	HX_STACK_ARG(_dest,"_dest")
	HX_STACK_ARG(_override,"_override")
{
		HX_STACK_LINE(344)
		this->super::tween(_time_in_seconds,_dest,_override);
		HX_STACK_LINE(346)
		if (((_dest != null()))){
			HX_STACK_LINE(348)
			Float _dest_h = this->h;		HX_STACK_VAR(_dest_h,"_dest_h");
			HX_STACK_LINE(349)
			Float _dest_s = this->s;		HX_STACK_VAR(_dest_s,"_dest_s");
			HX_STACK_LINE(350)
			Float _dest_l = this->l;		HX_STACK_VAR(_dest_l,"_dest_l");
			HX_STACK_LINE(351)
			Float _dest_a = this->a;		HX_STACK_VAR(_dest_a,"_dest_a");
			HX_STACK_LINE(353)
			bool _change_h = false;		HX_STACK_VAR(_change_h,"_change_h");
			HX_STACK_LINE(354)
			bool _change_s = false;		HX_STACK_VAR(_change_s,"_change_s");
			HX_STACK_LINE(355)
			bool _change_l = false;		HX_STACK_VAR(_change_l,"_change_l");
			HX_STACK_LINE(356)
			bool _change_a = false;		HX_STACK_VAR(_change_a,"_change_a");
			HX_STACK_LINE(358)
			if ((::Std_obj::is(_dest,hx::ClassOf< ::phoenix::ColorHSL >()))){
				HX_STACK_LINE(360)
				_dest_h = _dest->__Field(HX_CSTRING("h"),true);
				HX_STACK_LINE(361)
				_dest_s = _dest->__Field(HX_CSTRING("s"),true);
				HX_STACK_LINE(362)
				_dest_l = _dest->__Field(HX_CSTRING("l"),true);
				HX_STACK_LINE(363)
				_dest_a = _dest->__Field(HX_CSTRING("a"),true);
				HX_STACK_LINE(365)
				_change_h = true;
				HX_STACK_LINE(366)
				_change_s = true;
				HX_STACK_LINE(367)
				_change_l = true;
				HX_STACK_LINE(368)
				_change_a = true;
			}
			else{
				HX_STACK_LINE(372)
				if (((_dest->__Field(HX_CSTRING("h"),true) != null()))){
					HX_STACK_LINE(372)
					_dest_h = _dest->__Field(HX_CSTRING("h"),true);
					HX_STACK_LINE(372)
					_change_h = true;
				}
				HX_STACK_LINE(373)
				if (((_dest->__Field(HX_CSTRING("s"),true) != null()))){
					HX_STACK_LINE(373)
					_dest_s = _dest->__Field(HX_CSTRING("s"),true);
					HX_STACK_LINE(373)
					_change_s = true;
				}
				HX_STACK_LINE(374)
				if (((_dest->__Field(HX_CSTRING("l"),true) != null()))){
					HX_STACK_LINE(374)
					_dest_l = _dest->__Field(HX_CSTRING("l"),true);
					HX_STACK_LINE(374)
					_change_l = true;
				}
				HX_STACK_LINE(375)
				if (((_dest->__Field(HX_CSTRING("a"),true) != null()))){
					HX_STACK_LINE(375)
					_dest_a = _dest->__Field(HX_CSTRING("a"),true);
					HX_STACK_LINE(375)
					_change_a = true;
				}
			}
			struct _Function_2_1{
				inline static Dynamic Block( ){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Color.hx",379,0xf59e6b1b)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(379)
			Dynamic _properties = _Function_2_1::Block();		HX_STACK_VAR(_properties,"_properties");
			HX_STACK_LINE(381)
			if ((_change_h)){
				HX_STACK_LINE(381)
				_properties->__FieldRef(HX_CSTRING("h")) = _dest_h;
			}
			HX_STACK_LINE(382)
			if ((_change_s)){
				HX_STACK_LINE(382)
				_properties->__FieldRef(HX_CSTRING("s")) = _dest_s;
			}
			HX_STACK_LINE(383)
			if ((_change_l)){
				HX_STACK_LINE(383)
				_properties->__FieldRef(HX_CSTRING("l")) = _dest_l;
			}
			HX_STACK_LINE(384)
			if ((_change_a)){
				HX_STACK_LINE(384)
				_properties->__FieldRef(HX_CSTRING("a")) = _dest_a;
			}
			HX_STACK_LINE(386)
			return ::luxe::tween::Actuate_obj::tween(hx::ObjectPtr<OBJ_>(this),_time_in_seconds,_properties,_override,null());
		}
		else{
			HX_STACK_LINE(389)
			HX_STACK_DO_THROW(HX_CSTRING(" Warning: Color.tween passed a null destination "));
		}
		HX_STACK_LINE(346)
		return null();
	}
}


::phoenix::ColorHSL ColorHSL_obj::_refresh( ){
	HX_STACK_FRAME("phoenix.ColorHSL","_refresh",0xd8d2b7ad,"phoenix.ColorHSL._refresh","phoenix/Color.hx",394,0xf59e6b1b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(396)
	this->refreshing = true;
	HX_STACK_LINE(397)
	this->super::fromColorHSL(hx::ObjectPtr<OBJ_>(this));
	HX_STACK_LINE(398)
	this->refreshing = false;
	HX_STACK_LINE(400)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC0(ColorHSL_obj,_refresh,return )

::phoenix::Color ColorHSL_obj::clone( ){
	HX_STACK_FRAME("phoenix.ColorHSL","clone",0x8907226c,"phoenix.ColorHSL.clone","phoenix/Color.hx",404,0xf59e6b1b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(404)
	return ::phoenix::ColorHSL_obj::__new(this->h,this->s,this->l,this->a);
}


::phoenix::Color ColorHSL_obj::toColor( ){
	HX_STACK_FRAME("phoenix.ColorHSL","toColor",0xd3f1eeb7,"phoenix.ColorHSL.toColor","phoenix/Color.hx",408,0xf59e6b1b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(408)
	return this->_refresh();
}


HX_DEFINE_DYNAMIC_FUNC0(ColorHSL_obj,toColor,return )

::phoenix::ColorHSL ColorHSL_obj::fromColor( ::phoenix::Color _color){
	HX_STACK_FRAME("phoenix.ColorHSL","fromColor",0x073f9e28,"phoenix.ColorHSL.fromColor","phoenix/Color.hx",411,0xf59e6b1b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_color,"_color")
	HX_STACK_LINE(413)
	Float max = _color->maxRGB();		HX_STACK_VAR(max,"max");
	HX_STACK_LINE(414)
	Float min = _color->minRGB();		HX_STACK_VAR(min,"min");
	HX_STACK_LINE(415)
	Float add = (max + min);		HX_STACK_VAR(add,"add");
	HX_STACK_LINE(416)
	Float sub = (max - min);		HX_STACK_VAR(sub,"sub");
	HX_STACK_LINE(418)
	Float _h = (int)0;		HX_STACK_VAR(_h,"_h");
	HX_STACK_LINE(419)
	if (((max == min))){
		HX_STACK_LINE(420)
		_h = (int)0;
	}
	else{
		HX_STACK_LINE(421)
		if (((max == _color->r))){
			HX_STACK_LINE(422)
			_h = hx::Mod((((Float(((int)60 * ((_color->g - _color->b)))) / Float(sub)) + (int)360)),(int)360);
		}
		else{
			HX_STACK_LINE(423)
			if (((max == _color->g))){
				HX_STACK_LINE(424)
				_h = ((Float(((int)60 * ((_color->b - _color->r)))) / Float(sub)) + (int)120);
			}
			else{
				HX_STACK_LINE(425)
				if (((max == _color->b))){
					HX_STACK_LINE(426)
					_h = ((Float(((int)60 * ((_color->r - _color->g)))) / Float(sub)) + (int)240);
				}
			}
		}
	}
	HX_STACK_LINE(429)
	Float _l = (Float(add) / Float((int)2));		HX_STACK_VAR(_l,"_l");
	HX_STACK_LINE(431)
	Float _s;		HX_STACK_VAR(_s,"_s");
	HX_STACK_LINE(431)
	if (((max == min))){
		HX_STACK_LINE(432)
		_s = (int)0;
	}
	else{
		HX_STACK_LINE(433)
		if (((this->l <= 0.5))){
			HX_STACK_LINE(434)
			_s = (Float(sub) / Float(add));
		}
		else{
			HX_STACK_LINE(436)
			_s = (Float(sub) / Float((((int)2 - add))));
		}
	}
	HX_STACK_LINE(439)
	this->set_h(_h);
	HX_STACK_LINE(440)
	this->set_s(_s);
	HX_STACK_LINE(441)
	this->set_l(_l);
	HX_STACK_LINE(442)
	this->a = _color->a;
	HX_STACK_LINE(444)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(ColorHSL_obj,fromColor,return )

::String ColorHSL_obj::toString( ){
	HX_STACK_FRAME("phoenix.ColorHSL","toString",0xea6854fd,"phoenix.ColorHSL.toString","phoenix/Color.hx",449,0xf59e6b1b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(449)
	return ((((((((HX_CSTRING("{ h:") + this->h) + HX_CSTRING(" , s:")) + this->s) + HX_CSTRING(" , l:")) + this->l) + HX_CSTRING(" , a:")) + this->a) + HX_CSTRING(" }"));
}



ColorHSL_obj::ColorHSL_obj()
{
}

Dynamic ColorHSL_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"h") ) { return h; }
		if (HX_FIELD_EQ(inName,"s") ) { return s; }
		if (HX_FIELD_EQ(inName,"l") ) { return l; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"set") ) { return set_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"set_h") ) { return set_h_dyn(); }
		if (HX_FIELD_EQ(inName,"set_s") ) { return set_s_dyn(); }
		if (HX_FIELD_EQ(inName,"set_l") ) { return set_l_dyn(); }
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
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ColorHSL_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"h") ) { if (inCallProp) return set_h(inValue);h=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"s") ) { if (inCallProp) return set_s(inValue);s=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"l") ) { if (inCallProp) return set_l(inValue);l=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ColorHSL_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("h"));
	outFields->push(HX_CSTRING("s"));
	outFields->push(HX_CSTRING("l"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(ColorHSL_obj,h),HX_CSTRING("h")},
	{hx::fsFloat,(int)offsetof(ColorHSL_obj,s),HX_CSTRING("s")},
	{hx::fsFloat,(int)offsetof(ColorHSL_obj,l),HX_CSTRING("l")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("h"),
	HX_CSTRING("s"),
	HX_CSTRING("l"),
	HX_CSTRING("set_h"),
	HX_CSTRING("set_s"),
	HX_CSTRING("set_l"),
	HX_CSTRING("set"),
	HX_CSTRING("tween"),
	HX_CSTRING("_refresh"),
	HX_CSTRING("clone"),
	HX_CSTRING("toColor"),
	HX_CSTRING("fromColor"),
	HX_CSTRING("toString"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ColorHSL_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ColorHSL_obj::__mClass,"__mClass");
};

#endif

Class ColorHSL_obj::__mClass;

void ColorHSL_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("phoenix.ColorHSL"), hx::TCanCast< ColorHSL_obj> ,sStaticFields,sMemberFields,
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

void ColorHSL_obj::__boot()
{
}

} // end namespace phoenix
