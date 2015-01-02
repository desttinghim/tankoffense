#include <hxcpp.h>

#ifndef INCLUDED_Hitbox
#include <Hitbox.h>
#endif
#ifndef INCLUDED_Movement
#include <Movement.h>
#endif
#ifndef INCLUDED_Object
#include <Object.h>
#endif
#ifndef INCLUDED_Side
#include <Side.h>
#endif
#ifndef INCLUDED_luxe_Component
#include <luxe/Component.h>
#endif
#ifndef INCLUDED_luxe_Emitter
#include <luxe/Emitter.h>
#endif
#ifndef INCLUDED_luxe_Entity
#include <luxe/Entity.h>
#endif
#ifndef INCLUDED_luxe_ID
#include <luxe/ID.h>
#endif
#ifndef INCLUDED_luxe_Objects
#include <luxe/Objects.h>
#endif
#ifndef INCLUDED_luxe_Sprite
#include <luxe/Sprite.h>
#endif
#ifndef INCLUDED_luxe_Visual
#include <luxe/Visual.h>
#endif
#ifndef INCLUDED_phoenix_Rectangle
#include <phoenix/Rectangle.h>
#endif
#ifndef INCLUDED_phoenix_Vector
#include <phoenix/Vector.h>
#endif

Void Object_obj::__construct(Dynamic options)
{
HX_STACK_FRAME("Object","new",0xaccbef51,"Object.new","Object.hx",12,0xe539253f)
HX_STACK_THIS(this)
HX_STACK_ARG(options,"options")
{
	HX_STACK_LINE(14)
	if (((options->__Field(HX_CSTRING("hitbox"),true) != null()))){
		HX_STACK_LINE(15)
		::Hitbox _g = ::Hitbox_obj::__new(options->__Field(HX_CSTRING("hitbox"),true));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(15)
		this->hitbox = _g;
		HX_STACK_LINE(16)
		this->add(this->hitbox);
	}
	HX_STACK_LINE(19)
	if (((options->__Field(HX_CSTRING("movement"),true) != null()))){
		HX_STACK_LINE(20)
		::Movement _g1 = ::Movement_obj::__new(options->__Field(HX_CSTRING("movement"),true));		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(20)
		this->movement = _g1;
		HX_STACK_LINE(21)
		this->add(this->movement);
	}
	HX_STACK_LINE(24)
	if (((options->__Field(HX_CSTRING("side"),true) != null()))){
		HX_STACK_LINE(25)
		::Side _g2 = ::Side_obj::__new(options->__Field(HX_CSTRING("side"),true));		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(25)
		this->side = _g2;
		HX_STACK_LINE(26)
		this->add(this->side);
	}
	HX_STACK_LINE(29)
	super::__construct(options);
}
;
	return null();
}

//Object_obj::~Object_obj() { }

Dynamic Object_obj::__CreateEmpty() { return  new Object_obj; }
hx::ObjectPtr< Object_obj > Object_obj::__new(Dynamic options)
{  hx::ObjectPtr< Object_obj > result = new Object_obj();
	result->__construct(options);
	return result;}

Dynamic Object_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Object_obj > result = new Object_obj();
	result->__construct(inArgs[0]);
	return result;}

Void Object_obj::init( ){
{
		HX_STACK_FRAME("Object","init",0x825e2eff,"Object.init","luxe/macros/EntityRules.hx",35,0xed942299)
		HX_STACK_THIS(this)
	}
return null();
}


Void Object_obj::ondestroy( ){
{
		HX_STACK_FRAME("Object","ondestroy",0x2ef7276c,"Object.ondestroy","luxe/macros/EntityRules.hx",47,0xed942299)
		HX_STACK_THIS(this)
		HX_STACK_LINE(47)
		this->super::ondestroy();
	}
return null();
}



Object_obj::Object_obj()
{
}

void Object_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Object);
	HX_MARK_MEMBER_NAME(hitbox,"hitbox");
	HX_MARK_MEMBER_NAME(movement,"movement");
	HX_MARK_MEMBER_NAME(side,"side");
	::luxe::Sprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Object_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(hitbox,"hitbox");
	HX_VISIT_MEMBER_NAME(movement,"movement");
	HX_VISIT_MEMBER_NAME(side,"side");
	::luxe::Sprite_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Object_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"side") ) { return side; }
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"hitbox") ) { return hitbox; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"movement") ) { return movement; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"ondestroy") ) { return ondestroy_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Object_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"side") ) { side=inValue.Cast< ::Side >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"hitbox") ) { hitbox=inValue.Cast< ::Hitbox >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"movement") ) { movement=inValue.Cast< ::Movement >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Object_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("hitbox"));
	outFields->push(HX_CSTRING("movement"));
	outFields->push(HX_CSTRING("side"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::Hitbox*/ ,(int)offsetof(Object_obj,hitbox),HX_CSTRING("hitbox")},
	{hx::fsObject /*::Movement*/ ,(int)offsetof(Object_obj,movement),HX_CSTRING("movement")},
	{hx::fsObject /*::Side*/ ,(int)offsetof(Object_obj,side),HX_CSTRING("side")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("hitbox"),
	HX_CSTRING("movement"),
	HX_CSTRING("side"),
	HX_CSTRING("init"),
	HX_CSTRING("ondestroy"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Object_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Object_obj::__mClass,"__mClass");
};

#endif

Class Object_obj::__mClass;

void Object_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("Object"), hx::TCanCast< Object_obj> ,sStaticFields,sMemberFields,
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

void Object_obj::__boot()
{
}

