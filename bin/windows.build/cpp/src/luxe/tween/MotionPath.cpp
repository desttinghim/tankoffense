#include <hxcpp.h>

#ifndef INCLUDED_luxe_tween_BezierPath
#include <luxe/tween/BezierPath.h>
#endif
#ifndef INCLUDED_luxe_tween_ComponentPath
#include <luxe/tween/ComponentPath.h>
#endif
#ifndef INCLUDED_luxe_tween_IComponentPath
#include <luxe/tween/IComponentPath.h>
#endif
#ifndef INCLUDED_luxe_tween_LinearPath
#include <luxe/tween/LinearPath.h>
#endif
#ifndef INCLUDED_luxe_tween_MotionPath
#include <luxe/tween/MotionPath.h>
#endif
#ifndef INCLUDED_luxe_tween_RotationPath
#include <luxe/tween/RotationPath.h>
#endif
namespace luxe{
namespace tween{

Void MotionPath_obj::__construct()
{
HX_STACK_FRAME("luxe.tween.MotionPath","new",0xfe5c63e8,"luxe.tween.MotionPath.new","luxe/tween/MotionPath.hx",20,0x24788886)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(22)
	::luxe::tween::ComponentPath _g = ::luxe::tween::ComponentPath_obj::__new();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(22)
	this->_x = _g;
	HX_STACK_LINE(23)
	::luxe::tween::ComponentPath _g1 = ::luxe::tween::ComponentPath_obj::__new();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(23)
	this->_y = _g1;
	HX_STACK_LINE(25)
	this->_rotation = null();
}
;
	return null();
}

//MotionPath_obj::~MotionPath_obj() { }

Dynamic MotionPath_obj::__CreateEmpty() { return  new MotionPath_obj; }
hx::ObjectPtr< MotionPath_obj > MotionPath_obj::__new()
{  hx::ObjectPtr< MotionPath_obj > result = new MotionPath_obj();
	result->__construct();
	return result;}

Dynamic MotionPath_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< MotionPath_obj > result = new MotionPath_obj();
	result->__construct();
	return result;}

::luxe::tween::MotionPath MotionPath_obj::bezier( Float x,Float y,Float controlX,Float controlY,hx::Null< Float >  __o_strength){
Float strength = __o_strength.Default(1);
	HX_STACK_FRAME("luxe.tween.MotionPath","bezier",0xa2a05197,"luxe.tween.MotionPath.bezier","luxe/tween/MotionPath.hx",39,0x24788886)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_ARG(controlX,"controlX")
	HX_STACK_ARG(controlY,"controlY")
	HX_STACK_ARG(strength,"strength")
{
		HX_STACK_LINE(41)
		::luxe::tween::BezierPath _g = ::luxe::tween::BezierPath_obj::__new(x,controlX,strength);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(41)
		this->_x->addPath(_g);
		HX_STACK_LINE(42)
		::luxe::tween::BezierPath _g1 = ::luxe::tween::BezierPath_obj::__new(y,controlY,strength);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(42)
		this->_y->addPath(_g1);
		HX_STACK_LINE(44)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC5(MotionPath_obj,bezier,return )

::luxe::tween::MotionPath MotionPath_obj::line( Float x,Float y,hx::Null< Float >  __o_strength){
Float strength = __o_strength.Default(1);
	HX_STACK_FRAME("luxe.tween.MotionPath","line",0x912b9b6c,"luxe.tween.MotionPath.line","luxe/tween/MotionPath.hx",56,0x24788886)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_ARG(strength,"strength")
{
		HX_STACK_LINE(58)
		::luxe::tween::LinearPath _g = ::luxe::tween::LinearPath_obj::__new(x,strength);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(58)
		this->_x->addPath(_g);
		HX_STACK_LINE(59)
		::luxe::tween::LinearPath _g1 = ::luxe::tween::LinearPath_obj::__new(y,strength);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(59)
		this->_y->addPath(_g1);
		HX_STACK_LINE(61)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC3(MotionPath_obj,line,return )

::luxe::tween::RotationPath MotionPath_obj::get_rotation( ){
	HX_STACK_FRAME("luxe.tween.MotionPath","get_rotation",0xa8fcacbf,"luxe.tween.MotionPath.get_rotation","luxe/tween/MotionPath.hx",73,0x24788886)
	HX_STACK_THIS(this)
	HX_STACK_LINE(75)
	if (((this->_rotation == null()))){
		HX_STACK_LINE(77)
		::luxe::tween::RotationPath _g = ::luxe::tween::RotationPath_obj::__new(this->_x,this->_y);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(77)
		this->_rotation = _g;
	}
	HX_STACK_LINE(81)
	return this->_rotation;
}


HX_DEFINE_DYNAMIC_FUNC0(MotionPath_obj,get_rotation,return )

::luxe::tween::IComponentPath MotionPath_obj::get_x( ){
	HX_STACK_FRAME("luxe.tween.MotionPath","get_x",0x915b2ad7,"luxe.tween.MotionPath.get_x","luxe/tween/MotionPath.hx",88,0x24788886)
	HX_STACK_THIS(this)
	HX_STACK_LINE(88)
	return this->_x;
}


HX_DEFINE_DYNAMIC_FUNC0(MotionPath_obj,get_x,return )

::luxe::tween::IComponentPath MotionPath_obj::get_y( ){
	HX_STACK_FRAME("luxe.tween.MotionPath","get_y",0x915b2ad8,"luxe.tween.MotionPath.get_y","luxe/tween/MotionPath.hx",95,0x24788886)
	HX_STACK_THIS(this)
	HX_STACK_LINE(95)
	return this->_y;
}


HX_DEFINE_DYNAMIC_FUNC0(MotionPath_obj,get_y,return )


MotionPath_obj::MotionPath_obj()
{
}

void MotionPath_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(MotionPath);
	HX_MARK_MEMBER_NAME(rotation,"rotation");
	HX_MARK_MEMBER_NAME(x,"x");
	HX_MARK_MEMBER_NAME(y,"y");
	HX_MARK_MEMBER_NAME(_rotation,"_rotation");
	HX_MARK_MEMBER_NAME(_x,"_x");
	HX_MARK_MEMBER_NAME(_y,"_y");
	HX_MARK_END_CLASS();
}

void MotionPath_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(rotation,"rotation");
	HX_VISIT_MEMBER_NAME(x,"x");
	HX_VISIT_MEMBER_NAME(y,"y");
	HX_VISIT_MEMBER_NAME(_rotation,"_rotation");
	HX_VISIT_MEMBER_NAME(_x,"_x");
	HX_VISIT_MEMBER_NAME(_y,"_y");
}

Dynamic MotionPath_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return inCallProp ? get_x() : x; }
		if (HX_FIELD_EQ(inName,"y") ) { return inCallProp ? get_y() : y; }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"_x") ) { return _x; }
		if (HX_FIELD_EQ(inName,"_y") ) { return _y; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"line") ) { return line_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"get_x") ) { return get_x_dyn(); }
		if (HX_FIELD_EQ(inName,"get_y") ) { return get_y_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"bezier") ) { return bezier_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"rotation") ) { return inCallProp ? get_rotation() : rotation; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_rotation") ) { return _rotation; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_rotation") ) { return get_rotation_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic MotionPath_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< ::luxe::tween::IComponentPath >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< ::luxe::tween::IComponentPath >(); return inValue; }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"_x") ) { _x=inValue.Cast< ::luxe::tween::ComponentPath >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_y") ) { _y=inValue.Cast< ::luxe::tween::ComponentPath >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"rotation") ) { rotation=inValue.Cast< ::luxe::tween::RotationPath >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_rotation") ) { _rotation=inValue.Cast< ::luxe::tween::RotationPath >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void MotionPath_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("rotation"));
	outFields->push(HX_CSTRING("x"));
	outFields->push(HX_CSTRING("y"));
	outFields->push(HX_CSTRING("_rotation"));
	outFields->push(HX_CSTRING("_x"));
	outFields->push(HX_CSTRING("_y"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::luxe::tween::RotationPath*/ ,(int)offsetof(MotionPath_obj,rotation),HX_CSTRING("rotation")},
	{hx::fsObject /*::luxe::tween::IComponentPath*/ ,(int)offsetof(MotionPath_obj,x),HX_CSTRING("x")},
	{hx::fsObject /*::luxe::tween::IComponentPath*/ ,(int)offsetof(MotionPath_obj,y),HX_CSTRING("y")},
	{hx::fsObject /*::luxe::tween::RotationPath*/ ,(int)offsetof(MotionPath_obj,_rotation),HX_CSTRING("_rotation")},
	{hx::fsObject /*::luxe::tween::ComponentPath*/ ,(int)offsetof(MotionPath_obj,_x),HX_CSTRING("_x")},
	{hx::fsObject /*::luxe::tween::ComponentPath*/ ,(int)offsetof(MotionPath_obj,_y),HX_CSTRING("_y")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("rotation"),
	HX_CSTRING("x"),
	HX_CSTRING("y"),
	HX_CSTRING("_rotation"),
	HX_CSTRING("_x"),
	HX_CSTRING("_y"),
	HX_CSTRING("bezier"),
	HX_CSTRING("line"),
	HX_CSTRING("get_rotation"),
	HX_CSTRING("get_x"),
	HX_CSTRING("get_y"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MotionPath_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MotionPath_obj::__mClass,"__mClass");
};

#endif

Class MotionPath_obj::__mClass;

void MotionPath_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("luxe.tween.MotionPath"), hx::TCanCast< MotionPath_obj> ,sStaticFields,sMemberFields,
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

void MotionPath_obj::__boot()
{
}

} // end namespace luxe
} // end namespace tween
