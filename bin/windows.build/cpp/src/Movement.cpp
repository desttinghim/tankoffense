#include <hxcpp.h>

#ifndef INCLUDED_Movement
#include <Movement.h>
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
#ifndef INCLUDED_phoenix_Vector
#include <phoenix/Vector.h>
#endif

Void Movement_obj::__construct(::phoenix::Vector speed)
{
HX_STACK_FRAME("Movement","new",0x298135c1,"Movement.new","Movement.hx",11,0xa8f07ccf)
HX_STACK_THIS(this)
HX_STACK_ARG(speed,"speed")
{
	struct _Function_1_1{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Movement.hx",13,0xa8f07ccf)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("name") , HX_CSTRING("movement"),false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(13)
	super::__construct(_Function_1_1::Block());
	HX_STACK_LINE(15)
	this->velocity = speed;
}
;
	return null();
}

//Movement_obj::~Movement_obj() { }

Dynamic Movement_obj::__CreateEmpty() { return  new Movement_obj; }
hx::ObjectPtr< Movement_obj > Movement_obj::__new(::phoenix::Vector speed)
{  hx::ObjectPtr< Movement_obj > result = new Movement_obj();
	result->__construct(speed);
	return result;}

Dynamic Movement_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Movement_obj > result = new Movement_obj();
	result->__construct(inArgs[0]);
	return result;}

Void Movement_obj::init( ){
{
		HX_STACK_FRAME("Movement","init",0x24468a8f,"Movement.init","Movement.hx",17,0xa8f07ccf)
		HX_STACK_THIS(this)
		HX_STACK_LINE(19)
		::luxe::Sprite _g = this->get_entity();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(19)
		this->sprite = _g;
	}
return null();
}


Void Movement_obj::update( Float dt){
{
		HX_STACK_FRAME("Movement","update",0x9aa2f348,"Movement.update","Movement.hx",22,0xa8f07ccf)
		HX_STACK_THIS(this)
		HX_STACK_ARG(dt,"dt")
		HX_STACK_LINE(24)
		::phoenix::Vector _g;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(24)
		{
			HX_STACK_LINE(24)
			::phoenix::Vector a = this->sprite->get_pos();		HX_STACK_VAR(a,"a");
			HX_STACK_LINE(24)
			::phoenix::Vector b = ::phoenix::Vector_obj::Multiply(this->velocity,dt);		HX_STACK_VAR(b,"b");
			HX_STACK_LINE(24)
			_g = ::phoenix::Vector_obj::__new((a->x + b->x),(a->y + b->y),(a->z + b->z),null());
		}
		HX_STACK_LINE(24)
		this->sprite->set_pos(_g);
	}
return null();
}


Void Movement_obj::onreset( ){
{
		HX_STACK_FRAME("Movement","onreset",0xfffaa231,"Movement.onreset","Movement.hx",27,0xa8f07ccf)
		HX_STACK_THIS(this)
	}
return null();
}


Void Movement_obj::ondestroy( ){
{
		HX_STACK_FRAME("Movement","ondestroy",0xb148e1dc,"Movement.ondestroy","luxe/macros/ComponentRules.hx",50,0x7da94735)
		HX_STACK_THIS(this)
		HX_STACK_LINE(50)
		this->super::ondestroy();
	}
return null();
}


Void Movement_obj::onremoved( ){
{
		HX_STACK_FRAME("Movement","onremoved",0x7fc2d482,"Movement.onremoved","luxe/macros/ComponentRules.hx",62,0x7da94735)
		HX_STACK_THIS(this)
		HX_STACK_LINE(62)
		this->super::onremoved();
	}
return null();
}



Movement_obj::Movement_obj()
{
}

void Movement_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Movement);
	HX_MARK_MEMBER_NAME(velocity,"velocity");
	HX_MARK_MEMBER_NAME(sprite,"sprite");
	::luxe::Component_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Movement_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(velocity,"velocity");
	HX_VISIT_MEMBER_NAME(sprite,"sprite");
	::luxe::Component_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Movement_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"sprite") ) { return sprite; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"onreset") ) { return onreset_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"velocity") ) { return velocity; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"ondestroy") ) { return ondestroy_dyn(); }
		if (HX_FIELD_EQ(inName,"onremoved") ) { return onremoved_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Movement_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"sprite") ) { sprite=inValue.Cast< ::luxe::Sprite >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"velocity") ) { velocity=inValue.Cast< ::phoenix::Vector >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Movement_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("velocity"));
	outFields->push(HX_CSTRING("sprite"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::phoenix::Vector*/ ,(int)offsetof(Movement_obj,velocity),HX_CSTRING("velocity")},
	{hx::fsObject /*::luxe::Sprite*/ ,(int)offsetof(Movement_obj,sprite),HX_CSTRING("sprite")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("velocity"),
	HX_CSTRING("sprite"),
	HX_CSTRING("init"),
	HX_CSTRING("update"),
	HX_CSTRING("onreset"),
	HX_CSTRING("ondestroy"),
	HX_CSTRING("onremoved"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Movement_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Movement_obj::__mClass,"__mClass");
};

#endif

Class Movement_obj::__mClass;

void Movement_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("Movement"), hx::TCanCast< Movement_obj> ,sStaticFields,sMemberFields,
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

void Movement_obj::__boot()
{
}

