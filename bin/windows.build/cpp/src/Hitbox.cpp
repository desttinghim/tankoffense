#include <hxcpp.h>

#ifndef INCLUDED_Hitbox
#include <Hitbox.h>
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

Void Hitbox_obj::__construct(::phoenix::Rectangle rect)
{
HX_STACK_FRAME("Hitbox","new",0x08773eaa,"Hitbox.new","Hitbox.hx",15,0x0938c406)
HX_STACK_THIS(this)
HX_STACK_ARG(rect,"rect")
{
	HX_STACK_LINE(16)
	this->hitbox = rect;
	struct _Function_1_1{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Hitbox.hx",17,0x0938c406)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("name") , HX_CSTRING("hitbox"),false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(17)
	super::__construct(_Function_1_1::Block());
}
;
	return null();
}

//Hitbox_obj::~Hitbox_obj() { }

Dynamic Hitbox_obj::__CreateEmpty() { return  new Hitbox_obj; }
hx::ObjectPtr< Hitbox_obj > Hitbox_obj::__new(::phoenix::Rectangle rect)
{  hx::ObjectPtr< Hitbox_obj > result = new Hitbox_obj();
	result->__construct(rect);
	return result;}

Dynamic Hitbox_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Hitbox_obj > result = new Hitbox_obj();
	result->__construct(inArgs[0]);
	return result;}

Void Hitbox_obj::init( ){
{
		HX_STACK_FRAME("Hitbox","init",0x5c984d86,"Hitbox.init","Hitbox.hx",20,0x0938c406)
		HX_STACK_THIS(this)
		HX_STACK_LINE(22)
		::luxe::Sprite _g = this->get_entity();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(22)
		this->sprite = _g;
	}
return null();
}


Void Hitbox_obj::update( Float dt){
{
		HX_STACK_FRAME("Hitbox","update",0xdd24a1ff,"Hitbox.update","Hitbox.hx",26,0x0938c406)
		HX_STACK_THIS(this)
		HX_STACK_ARG(dt,"dt")
		HX_STACK_LINE(28)
		this->hitbox->set_x((this->sprite->get_pos()->x - (Float(this->hitbox->w) / Float((int)2))));
		HX_STACK_LINE(29)
		this->hitbox->set_y((this->sprite->get_pos()->y - (Float(this->hitbox->h) / Float((int)2))));
		HX_STACK_LINE(30)
		this->x = this->hitbox->x;
		HX_STACK_LINE(31)
		this->y = this->hitbox->y;
		HX_STACK_LINE(32)
		this->w = this->hitbox->w;
		HX_STACK_LINE(33)
		this->h = this->hitbox->h;
	}
return null();
}


Void Hitbox_obj::ondestroy( ){
{
		HX_STACK_FRAME("Hitbox","ondestroy",0xb17dff85,"Hitbox.ondestroy","luxe/macros/ComponentRules.hx",50,0x7da94735)
		HX_STACK_THIS(this)
		HX_STACK_LINE(50)
		this->super::ondestroy();
	}
return null();
}


Void Hitbox_obj::onremoved( ){
{
		HX_STACK_FRAME("Hitbox","onremoved",0x7ff7f22b,"Hitbox.onremoved","luxe/macros/ComponentRules.hx",62,0x7da94735)
		HX_STACK_THIS(this)
		HX_STACK_LINE(62)
		this->super::onremoved();
	}
return null();
}



Hitbox_obj::Hitbox_obj()
{
}

void Hitbox_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Hitbox);
	HX_MARK_MEMBER_NAME(sprite,"sprite");
	HX_MARK_MEMBER_NAME(hitbox,"hitbox");
	HX_MARK_MEMBER_NAME(x,"x");
	HX_MARK_MEMBER_NAME(y,"y");
	HX_MARK_MEMBER_NAME(h,"h");
	HX_MARK_MEMBER_NAME(w,"w");
	::luxe::Component_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Hitbox_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(sprite,"sprite");
	HX_VISIT_MEMBER_NAME(hitbox,"hitbox");
	HX_VISIT_MEMBER_NAME(x,"x");
	HX_VISIT_MEMBER_NAME(y,"y");
	HX_VISIT_MEMBER_NAME(h,"h");
	HX_VISIT_MEMBER_NAME(w,"w");
	::luxe::Component_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Hitbox_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return x; }
		if (HX_FIELD_EQ(inName,"y") ) { return y; }
		if (HX_FIELD_EQ(inName,"h") ) { return h; }
		if (HX_FIELD_EQ(inName,"w") ) { return w; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"sprite") ) { return sprite; }
		if (HX_FIELD_EQ(inName,"hitbox") ) { return hitbox; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"ondestroy") ) { return ondestroy_dyn(); }
		if (HX_FIELD_EQ(inName,"onremoved") ) { return onremoved_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Hitbox_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"h") ) { h=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"w") ) { w=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"sprite") ) { sprite=inValue.Cast< ::luxe::Sprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hitbox") ) { hitbox=inValue.Cast< ::phoenix::Rectangle >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Hitbox_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("sprite"));
	outFields->push(HX_CSTRING("hitbox"));
	outFields->push(HX_CSTRING("x"));
	outFields->push(HX_CSTRING("y"));
	outFields->push(HX_CSTRING("h"));
	outFields->push(HX_CSTRING("w"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::luxe::Sprite*/ ,(int)offsetof(Hitbox_obj,sprite),HX_CSTRING("sprite")},
	{hx::fsObject /*::phoenix::Rectangle*/ ,(int)offsetof(Hitbox_obj,hitbox),HX_CSTRING("hitbox")},
	{hx::fsFloat,(int)offsetof(Hitbox_obj,x),HX_CSTRING("x")},
	{hx::fsFloat,(int)offsetof(Hitbox_obj,y),HX_CSTRING("y")},
	{hx::fsFloat,(int)offsetof(Hitbox_obj,h),HX_CSTRING("h")},
	{hx::fsFloat,(int)offsetof(Hitbox_obj,w),HX_CSTRING("w")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("sprite"),
	HX_CSTRING("hitbox"),
	HX_CSTRING("x"),
	HX_CSTRING("y"),
	HX_CSTRING("h"),
	HX_CSTRING("w"),
	HX_CSTRING("init"),
	HX_CSTRING("update"),
	HX_CSTRING("ondestroy"),
	HX_CSTRING("onremoved"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Hitbox_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Hitbox_obj::__mClass,"__mClass");
};

#endif

Class Hitbox_obj::__mClass;

void Hitbox_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("Hitbox"), hx::TCanCast< Hitbox_obj> ,sStaticFields,sMemberFields,
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

void Hitbox_obj::__boot()
{
}

