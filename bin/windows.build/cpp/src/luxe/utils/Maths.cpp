#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_luxe_Core
#include <luxe/Core.h>
#endif
#ifndef INCLUDED_luxe_utils_Maths
#include <luxe/utils/Maths.h>
#endif
#ifndef INCLUDED_snow_App
#include <snow/App.h>
#endif
namespace luxe{
namespace utils{

Void Maths_obj::__construct(::luxe::Core _luxe)
{
HX_STACK_FRAME("luxe.utils.Maths","new",0x8e0da6c8,"luxe.utils.Maths.new","luxe/utils/Maths.hx",11,0x6644526a)
HX_STACK_THIS(this)
HX_STACK_ARG(_luxe,"_luxe")
{
	HX_STACK_LINE(11)
	this->luxe = _luxe;
}
;
	return null();
}

//Maths_obj::~Maths_obj() { }

Dynamic Maths_obj::__CreateEmpty() { return  new Maths_obj; }
hx::ObjectPtr< Maths_obj > Maths_obj::__new(::luxe::Core _luxe)
{  hx::ObjectPtr< Maths_obj > result = new Maths_obj();
	result->__construct(_luxe);
	return result;}

Dynamic Maths_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Maths_obj > result = new Maths_obj();
	result->__construct(inArgs[0]);
	return result;}

Float Maths_obj::_PI_OVER_180;

Float Maths_obj::_180_OVER_PI;

Float Maths_obj::fixed( Float value,int precision){
	HX_STACK_FRAME("luxe.utils.Maths","fixed",0xd14c39dc,"luxe.utils.Maths.fixed","luxe/utils/Maths.hx",21,0x6644526a)
	HX_STACK_ARG(value,"value")
	HX_STACK_ARG(precision,"precision")
	HX_STACK_LINE(23)
	Float n = ::Math_obj::pow((int)10,precision);		HX_STACK_VAR(n,"n");
	HX_STACK_LINE(24)
	int _g = ::Std_obj::_int((value * n));		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(24)
	return (Float(_g) / Float(n));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Maths_obj,fixed,return )

Float Maths_obj::lerp( Float value,Float target,Float t){
	HX_STACK_FRAME("luxe.utils.Maths","lerp",0xbc91d70f,"luxe.utils.Maths.lerp","luxe/utils/Maths.hx",28,0x6644526a)
	HX_STACK_ARG(value,"value")
	HX_STACK_ARG(target,"target")
	HX_STACK_ARG(t,"t")
	HX_STACK_LINE(30)
	if (((t < (int)0))){
		HX_STACK_LINE(30)
		t = (int)0;
	}
	else{
		HX_STACK_LINE(30)
		if (((t > (int)1))){
			HX_STACK_LINE(30)
			t = (int)1;
		}
		else{
			HX_STACK_LINE(30)
			t = t;
		}
	}
	HX_STACK_LINE(32)
	return (value + (t * ((target - value))));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Maths_obj,lerp,return )

Float Maths_obj::weighted_avg( Float value,Float target,Float slowness){
	HX_STACK_FRAME("luxe.utils.Maths","weighted_avg",0x406fb2c2,"luxe.utils.Maths.weighted_avg","luxe/utils/Maths.hx",36,0x6644526a)
	HX_STACK_ARG(value,"value")
	HX_STACK_ARG(target,"target")
	HX_STACK_ARG(slowness,"slowness")
	HX_STACK_LINE(39)
	if (((slowness == (int)0))){
		HX_STACK_LINE(39)
		slowness = 0.00000001;
	}
	HX_STACK_LINE(41)
	return (Float((((value * ((slowness - (int)1))) + target))) / Float(slowness));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Maths_obj,weighted_avg,return )

Float Maths_obj::clamp( Float value,Float a,Float b){
	HX_STACK_FRAME("luxe.utils.Maths","clamp",0x1902b363,"luxe.utils.Maths.clamp","luxe/utils/Maths.hx",46,0x6644526a)
	HX_STACK_ARG(value,"value")
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(46)
	if (((value < a))){
		HX_STACK_LINE(46)
		return a;
	}
	else{
		HX_STACK_LINE(46)
		if (((value > b))){
			HX_STACK_LINE(46)
			return b;
		}
		else{
			HX_STACK_LINE(46)
			return value;
		}
	}
	HX_STACK_LINE(46)
	return 0.;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Maths_obj,clamp,return )

Float Maths_obj::clamp_bottom( Float value,Float a){
	HX_STACK_FRAME("luxe.utils.Maths","clamp_bottom",0x237bc787,"luxe.utils.Maths.clamp_bottom","luxe/utils/Maths.hx",50,0x6644526a)
	HX_STACK_ARG(value,"value")
	HX_STACK_ARG(a,"a")
	HX_STACK_LINE(50)
	if (((value < a))){
		HX_STACK_LINE(50)
		return a;
	}
	else{
		HX_STACK_LINE(50)
		return value;
	}
	HX_STACK_LINE(50)
	return 0.;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Maths_obj,clamp_bottom,return )

bool Maths_obj::within_range( Float value,Float start_range,Float end_range){
	HX_STACK_FRAME("luxe.utils.Maths","within_range",0x4493cb41,"luxe.utils.Maths.within_range","luxe/utils/Maths.hx",54,0x6644526a)
	HX_STACK_ARG(value,"value")
	HX_STACK_ARG(start_range,"start_range")
	HX_STACK_ARG(end_range,"end_range")
	HX_STACK_LINE(54)
	return (bool((value >= start_range)) && bool((value <= end_range)));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Maths_obj,within_range,return )

Float Maths_obj::wrap_angle( Float degrees,Float lower,Float upper){
	HX_STACK_FRAME("luxe.utils.Maths","wrap_angle",0x41b47ef6,"luxe.utils.Maths.wrap_angle","luxe/utils/Maths.hx",57,0x6644526a)
	HX_STACK_ARG(degrees,"degrees")
	HX_STACK_ARG(lower,"lower")
	HX_STACK_ARG(upper,"upper")
	HX_STACK_LINE(59)
	Float _radians = (degrees * 0.017453292519943278);		HX_STACK_VAR(_radians,"_radians");
	HX_STACK_LINE(60)
	Float _distance = (upper - lower);		HX_STACK_VAR(_distance,"_distance");
	HX_STACK_LINE(61)
	Float _times = ::Math_obj::floor((Float(((degrees - lower))) / Float(_distance)));		HX_STACK_VAR(_times,"_times");
	HX_STACK_LINE(63)
	return (degrees - (_times * _distance));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Maths_obj,wrap_angle,return )

int Maths_obj::nearest_power_of_two( int _value){
	HX_STACK_FRAME("luxe.utils.Maths","nearest_power_of_two",0xd8e2f7b7,"luxe.utils.Maths.nearest_power_of_two","luxe/utils/Maths.hx",67,0x6644526a)
	HX_STACK_ARG(_value,"_value")
	HX_STACK_LINE(69)
	(_value)--;
	HX_STACK_LINE(70)
	hx::OrEq(_value,(int(_value) >> int((int)1)));
	HX_STACK_LINE(71)
	hx::OrEq(_value,(int(_value) >> int((int)2)));
	HX_STACK_LINE(72)
	hx::OrEq(_value,(int(_value) >> int((int)4)));
	HX_STACK_LINE(73)
	hx::OrEq(_value,(int(_value) >> int((int)8)));
	HX_STACK_LINE(74)
	hx::OrEq(_value,(int(_value) >> int((int)16)));
	HX_STACK_LINE(75)
	(_value)++;
	HX_STACK_LINE(77)
	return _value;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Maths_obj,nearest_power_of_two,return )

Float Maths_obj::map_linear( Float value,Float a1,Float a2,Float b1,Float b2){
	HX_STACK_FRAME("luxe.utils.Maths","map_linear",0x21a26b00,"luxe.utils.Maths.map_linear","luxe/utils/Maths.hx",82,0x6644526a)
	HX_STACK_ARG(value,"value")
	HX_STACK_ARG(a1,"a1")
	HX_STACK_ARG(a2,"a2")
	HX_STACK_ARG(b1,"b1")
	HX_STACK_ARG(b2,"b2")
	HX_STACK_LINE(82)
	return (b1 + (Float((((value - a1)) * ((b2 - b1)))) / Float(((a2 - a1)))));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(Maths_obj,map_linear,return )

Float Maths_obj::smoothstep( Float x,Float min,Float max){
	HX_STACK_FRAME("luxe.utils.Maths","smoothstep",0x89a4e512,"luxe.utils.Maths.smoothstep","luxe/utils/Maths.hx",85,0x6644526a)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(min,"min")
	HX_STACK_ARG(max,"max")
	HX_STACK_LINE(87)
	if (((x <= min))){
		HX_STACK_LINE(88)
		return (int)0;
	}
	HX_STACK_LINE(91)
	if (((x >= max))){
		HX_STACK_LINE(92)
		return (int)1;
	}
	HX_STACK_LINE(95)
	x = (Float(((x - min))) / Float(((max - min))));
	HX_STACK_LINE(97)
	return ((x * x) * (((int)3 - ((int)2 * x))));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Maths_obj,smoothstep,return )

Float Maths_obj::smootherstep( Float x,Float min,Float max){
	HX_STACK_FRAME("luxe.utils.Maths","smootherstep",0x31edf57f,"luxe.utils.Maths.smootherstep","luxe/utils/Maths.hx",101,0x6644526a)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(min,"min")
	HX_STACK_ARG(max,"max")
	HX_STACK_LINE(103)
	if (((x <= min))){
		HX_STACK_LINE(104)
		return (int)0;
	}
	HX_STACK_LINE(107)
	if (((x >= max))){
		HX_STACK_LINE(108)
		return (int)1;
	}
	HX_STACK_LINE(111)
	x = (Float(((x - min))) / Float(((max - min))));
	HX_STACK_LINE(113)
	return (((x * x) * x) * (((x * (((x * (int)6) - (int)15))) + (int)10)));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Maths_obj,smootherstep,return )

Float Maths_obj::random16( ){
	HX_STACK_FRAME("luxe.utils.Maths","random16",0x1b1a0440,"luxe.utils.Maths.random16","luxe/utils/Maths.hx",117,0x6644526a)
	HX_STACK_LINE(118)
	Float _g = ::Math_obj::random();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(118)
	Float _g1 = ((int)65280 * _g);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(118)
	Float _g2 = ::Math_obj::random();		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(118)
	Float _g3 = ((int)255 * _g2);		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(118)
	Float _g4 = (_g1 + _g3);		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(118)
	return (Float(_g4) / Float((int)65535));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Maths_obj,random16,return )

int Maths_obj::random_int( int low,int high){
	HX_STACK_FRAME("luxe.utils.Maths","random_int",0xb762780b,"luxe.utils.Maths.random_int","luxe/utils/Maths.hx",121,0x6644526a)
	HX_STACK_ARG(low,"low")
	HX_STACK_ARG(high,"high")
	HX_STACK_LINE(122)
	Float _g = ::Math_obj::random();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(122)
	Float _g1 = (_g * (((high - low) + (int)1)));		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(122)
	int _g2 = ::Math_obj::floor(_g1);		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(122)
	return (low + _g2);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Maths_obj,random_int,return )

Float Maths_obj::random_float( Float low,Float high){
	HX_STACK_FRAME("luxe.utils.Maths","random_float",0x736f2fb8,"luxe.utils.Maths.random_float","luxe/utils/Maths.hx",125,0x6644526a)
	HX_STACK_ARG(low,"low")
	HX_STACK_ARG(high,"high")
	HX_STACK_LINE(126)
	Float _g = ::Math_obj::random();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(126)
	Float _g1 = (_g * ((high - low)));		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(126)
	return (low + _g1);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Maths_obj,random_float,return )

Float Maths_obj::random_float_spread( Float range){
	HX_STACK_FRAME("luxe.utils.Maths","random_float_spread",0xf9b08b5a,"luxe.utils.Maths.random_float_spread","luxe/utils/Maths.hx",129,0x6644526a)
	HX_STACK_ARG(range,"range")
	HX_STACK_LINE(130)
	Float _g = ::Math_obj::random();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(130)
	Float _g1 = (0.5 - _g);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(130)
	return (range * _g1);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Maths_obj,random_float_spread,return )

int Maths_obj::sign( Float x){
	HX_STACK_FRAME("luxe.utils.Maths","sign",0xc13554d5,"luxe.utils.Maths.sign","luxe/utils/Maths.hx",134,0x6644526a)
	HX_STACK_ARG(x,"x")
	HX_STACK_LINE(134)
	if (((x < (int)0))){
		HX_STACK_LINE(134)
		return (int)-1;
	}
	else{
		HX_STACK_LINE(134)
		if (((x > (int)0))){
			HX_STACK_LINE(134)
			return (int)1;
		}
		else{
			HX_STACK_LINE(134)
			return (int)0;
		}
	}
	HX_STACK_LINE(134)
	return (int)0;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Maths_obj,sign,return )

Float Maths_obj::radians( Float degrees){
	HX_STACK_FRAME("luxe.utils.Maths","radians",0x26f970da,"luxe.utils.Maths.radians","luxe/utils/Maths.hx",138,0x6644526a)
	HX_STACK_ARG(degrees,"degrees")
	HX_STACK_LINE(138)
	return (degrees * 0.017453292519943278);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Maths_obj,radians,return )

Float Maths_obj::degrees( Float radians){
	HX_STACK_FRAME("luxe.utils.Maths","degrees",0x3a640e0f,"luxe.utils.Maths.degrees","luxe/utils/Maths.hx",142,0x6644526a)
	HX_STACK_ARG(radians,"radians")
	HX_STACK_LINE(142)
	return (radians * 57.29577951308238);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Maths_obj,degrees,return )


Maths_obj::Maths_obj()
{
}

void Maths_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Maths);
	HX_MARK_MEMBER_NAME(luxe,"luxe");
	HX_MARK_END_CLASS();
}

void Maths_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(luxe,"luxe");
}

Dynamic Maths_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"lerp") ) { return lerp_dyn(); }
		if (HX_FIELD_EQ(inName,"sign") ) { return sign_dyn(); }
		if (HX_FIELD_EQ(inName,"luxe") ) { return luxe; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"fixed") ) { return fixed_dyn(); }
		if (HX_FIELD_EQ(inName,"clamp") ) { return clamp_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"radians") ) { return radians_dyn(); }
		if (HX_FIELD_EQ(inName,"degrees") ) { return degrees_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"random16") ) { return random16_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"wrap_angle") ) { return wrap_angle_dyn(); }
		if (HX_FIELD_EQ(inName,"map_linear") ) { return map_linear_dyn(); }
		if (HX_FIELD_EQ(inName,"smoothstep") ) { return smoothstep_dyn(); }
		if (HX_FIELD_EQ(inName,"random_int") ) { return random_int_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"weighted_avg") ) { return weighted_avg_dyn(); }
		if (HX_FIELD_EQ(inName,"clamp_bottom") ) { return clamp_bottom_dyn(); }
		if (HX_FIELD_EQ(inName,"within_range") ) { return within_range_dyn(); }
		if (HX_FIELD_EQ(inName,"smootherstep") ) { return smootherstep_dyn(); }
		if (HX_FIELD_EQ(inName,"random_float") ) { return random_float_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"random_float_spread") ) { return random_float_spread_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"nearest_power_of_two") ) { return nearest_power_of_two_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Maths_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"luxe") ) { luxe=inValue.Cast< ::luxe::Core >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Maths_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("luxe"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("_PI_OVER_180"),
	HX_CSTRING("_180_OVER_PI"),
	HX_CSTRING("fixed"),
	HX_CSTRING("lerp"),
	HX_CSTRING("weighted_avg"),
	HX_CSTRING("clamp"),
	HX_CSTRING("clamp_bottom"),
	HX_CSTRING("within_range"),
	HX_CSTRING("wrap_angle"),
	HX_CSTRING("nearest_power_of_two"),
	HX_CSTRING("map_linear"),
	HX_CSTRING("smoothstep"),
	HX_CSTRING("smootherstep"),
	HX_CSTRING("random16"),
	HX_CSTRING("random_int"),
	HX_CSTRING("random_float"),
	HX_CSTRING("random_float_spread"),
	HX_CSTRING("sign"),
	HX_CSTRING("radians"),
	HX_CSTRING("degrees"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::luxe::Core*/ ,(int)offsetof(Maths_obj,luxe),HX_CSTRING("luxe")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("luxe"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Maths_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Maths_obj::_PI_OVER_180,"_PI_OVER_180");
	HX_MARK_MEMBER_NAME(Maths_obj::_180_OVER_PI,"_180_OVER_PI");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Maths_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Maths_obj::_PI_OVER_180,"_PI_OVER_180");
	HX_VISIT_MEMBER_NAME(Maths_obj::_180_OVER_PI,"_180_OVER_PI");
};

#endif

Class Maths_obj::__mClass;

void Maths_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("luxe.utils.Maths"), hx::TCanCast< Maths_obj> ,sStaticFields,sMemberFields,
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

void Maths_obj::__boot()
{
	_PI_OVER_180= 0.017453292519943278;
	_180_OVER_PI= 57.29577951308238;
}

} // end namespace luxe
} // end namespace utils
