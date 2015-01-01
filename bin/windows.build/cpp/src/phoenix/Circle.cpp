#include <hxcpp.h>

#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_phoenix_Circle
#include <phoenix/Circle.h>
#endif
#ifndef INCLUDED_phoenix_Vector
#include <phoenix/Vector.h>
#endif
namespace phoenix{

Void Circle_obj::__construct(Dynamic __o__x,Dynamic __o__y,Dynamic __o__r)
{
HX_STACK_FRAME("phoenix.Circle","new",0x7a9201a1,"phoenix.Circle.new","phoenix/Circle.hx",10,0x7ad044ce)
HX_STACK_THIS(this)
HX_STACK_ARG(__o__x,"_x")
HX_STACK_ARG(__o__y,"_y")
HX_STACK_ARG(__o__r,"_r")
Dynamic _x = __o__x.Default(0);
Dynamic _y = __o__y.Default(0);
Dynamic _r = __o__r.Default(0);
{
	HX_STACK_LINE(11)
	this->x = _x;
	HX_STACK_LINE(12)
	this->y = _y;
	HX_STACK_LINE(13)
	this->r = _r;
}
;
	return null();
}

//Circle_obj::~Circle_obj() { }

Dynamic Circle_obj::__CreateEmpty() { return  new Circle_obj; }
hx::ObjectPtr< Circle_obj > Circle_obj::__new(Dynamic __o__x,Dynamic __o__y,Dynamic __o__r)
{  hx::ObjectPtr< Circle_obj > result = new Circle_obj();
	result->__construct(__o__x,__o__y,__o__r);
	return result;}

Dynamic Circle_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Circle_obj > result = new Circle_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

::String Circle_obj::toString( ){
	HX_STACK_FRAME("phoenix.Circle","toString",0x575173cb,"phoenix.Circle.toString","phoenix/Circle.hx",17,0x7ad044ce)
	HX_STACK_THIS(this)
	HX_STACK_LINE(17)
	return ((((((HX_CSTRING("{ x:") + this->x) + HX_CSTRING(", y:")) + this->y) + HX_CSTRING(", r:")) + this->r) + HX_CSTRING(" }"));
}


HX_DEFINE_DYNAMIC_FUNC0(Circle_obj,toString,return )

bool Circle_obj::point_inside( ::phoenix::Vector _p){
	HX_STACK_FRAME("phoenix.Circle","point_inside",0x7f85e5ea,"phoenix.Circle.point_inside","phoenix/Circle.hx",20,0x7ad044ce)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_p,"_p")
	HX_STACK_LINE(22)
	::phoenix::Vector diff = ::phoenix::Vector_obj::__new((_p->x - this->x),(_p->y - this->y),null(),null());		HX_STACK_VAR(diff,"diff");
	HX_STACK_LINE(24)
	Float _g = ::Math_obj::sqrt((((diff->x * diff->x) + (diff->y * diff->y)) + (diff->z * diff->z)));		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(24)
	return (_g <= this->r);
}


HX_DEFINE_DYNAMIC_FUNC1(Circle_obj,point_inside,return )

::phoenix::Circle Circle_obj::clone( ){
	HX_STACK_FRAME("phoenix.Circle","clone",0x7380d6de,"phoenix.Circle.clone","phoenix/Circle.hx",29,0x7ad044ce)
	HX_STACK_THIS(this)
	HX_STACK_LINE(29)
	return ::phoenix::Circle_obj::__new(this->x,this->y,this->r);
}


HX_DEFINE_DYNAMIC_FUNC0(Circle_obj,clone,return )

::phoenix::Circle Circle_obj::set( Dynamic _x,Dynamic _y,Dynamic _r){
	HX_STACK_FRAME("phoenix.Circle","set",0x7a95cce3,"phoenix.Circle.set","phoenix/Circle.hx",32,0x7ad044ce)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_x,"_x")
	HX_STACK_ARG(_y,"_y")
	HX_STACK_ARG(_r,"_r")
	HX_STACK_LINE(33)
	Float _setx = this->x;		HX_STACK_VAR(_setx,"_setx");
	HX_STACK_LINE(34)
	Float _sety = this->y;		HX_STACK_VAR(_sety,"_sety");
	HX_STACK_LINE(35)
	Float _setr = this->r;		HX_STACK_VAR(_setr,"_setr");
	HX_STACK_LINE(38)
	if (((_x != null()))){
		HX_STACK_LINE(38)
		_setx = _x;
	}
	HX_STACK_LINE(39)
	if (((_y != null()))){
		HX_STACK_LINE(39)
		_sety = _y;
	}
	HX_STACK_LINE(40)
	if (((_r != null()))){
		HX_STACK_LINE(40)
		_setr = _r;
	}
	HX_STACK_LINE(42)
	this->x = _setx;
	HX_STACK_LINE(43)
	this->y = _sety;
	HX_STACK_LINE(44)
	this->r = _setr;
	HX_STACK_LINE(46)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC3(Circle_obj,set,return )


Circle_obj::Circle_obj()
{
}

Dynamic Circle_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return x; }
		if (HX_FIELD_EQ(inName,"y") ) { return y; }
		if (HX_FIELD_EQ(inName,"r") ) { return r; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"set") ) { return set_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"point_inside") ) { return point_inside_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Circle_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"r") ) { r=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Circle_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("x"));
	outFields->push(HX_CSTRING("y"));
	outFields->push(HX_CSTRING("r"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(Circle_obj,x),HX_CSTRING("x")},
	{hx::fsFloat,(int)offsetof(Circle_obj,y),HX_CSTRING("y")},
	{hx::fsFloat,(int)offsetof(Circle_obj,r),HX_CSTRING("r")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("x"),
	HX_CSTRING("y"),
	HX_CSTRING("r"),
	HX_CSTRING("toString"),
	HX_CSTRING("point_inside"),
	HX_CSTRING("clone"),
	HX_CSTRING("set"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Circle_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Circle_obj::__mClass,"__mClass");
};

#endif

Class Circle_obj::__mClass;

void Circle_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("phoenix.Circle"), hx::TCanCast< Circle_obj> ,sStaticFields,sMemberFields,
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

void Circle_obj::__boot()
{
}

} // end namespace phoenix
