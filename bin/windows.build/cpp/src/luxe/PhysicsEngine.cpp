#include <hxcpp.h>

#ifndef INCLUDED_Luxe
#include <Luxe.h>
#endif
#ifndef INCLUDED_luxe_PhysicsEngine
#include <luxe/PhysicsEngine.h>
#endif
#ifndef INCLUDED_phoenix_Vector
#include <phoenix/Vector.h>
#endif
namespace luxe{

Void PhysicsEngine_obj::__construct()
{
HX_STACK_FRAME("luxe.PhysicsEngine","new",0x3df79a83,"luxe.PhysicsEngine.new","luxe/Physics.hx",158,0xe794c970)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(164)
	this->draw = true;
	HX_STACK_LINE(162)
	this->paused = false;
	HX_STACK_LINE(160)
	this->name = HX_CSTRING("engine");
	HX_STACK_LINE(168)
	::phoenix::Vector _g = ::phoenix::Vector_obj::__new((int)0,-9.8,(int)0,null());		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(168)
	this->set_gravity(_g);
	HX_STACK_LINE(169)
	::Luxe_obj::on(HX_CSTRING("render"),this->_render_dyn());
}
;
	return null();
}

//PhysicsEngine_obj::~PhysicsEngine_obj() { }

Dynamic PhysicsEngine_obj::__CreateEmpty() { return  new PhysicsEngine_obj; }
hx::ObjectPtr< PhysicsEngine_obj > PhysicsEngine_obj::__new()
{  hx::ObjectPtr< PhysicsEngine_obj > result = new PhysicsEngine_obj();
	result->__construct();
	return result;}

Dynamic PhysicsEngine_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< PhysicsEngine_obj > result = new PhysicsEngine_obj();
	result->__construct();
	return result;}

Void PhysicsEngine_obj::init( ){
{
		HX_STACK_FRAME("luxe.PhysicsEngine","init",0xf7684f8d,"luxe.PhysicsEngine.init","luxe/Physics.hx",173,0xe794c970)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(PhysicsEngine_obj,init,(void))

Void PhysicsEngine_obj::_render( Dynamic _){
{
		HX_STACK_FRAME("luxe.PhysicsEngine","_render",0xd6f79498,"luxe.PhysicsEngine._render","luxe/Physics.hx",178,0xe794c970)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_,"_")
		HX_STACK_LINE(178)
		this->render();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(PhysicsEngine_obj,_render,(void))

Void PhysicsEngine_obj::process( ){
{
		HX_STACK_FRAME("luxe.PhysicsEngine","process",0x54a1ba12,"luxe.PhysicsEngine.process","luxe/Physics.hx",181,0xe794c970)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(PhysicsEngine_obj,process,(void))

Void PhysicsEngine_obj::update( ){
{
		HX_STACK_FRAME("luxe.PhysicsEngine","update",0xcd7e73c6,"luxe.PhysicsEngine.update","luxe/Physics.hx",185,0xe794c970)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(PhysicsEngine_obj,update,(void))

Void PhysicsEngine_obj::render( ){
{
		HX_STACK_FRAME("luxe.PhysicsEngine","render",0x4ba25913,"luxe.PhysicsEngine.render","luxe/Physics.hx",189,0xe794c970)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(PhysicsEngine_obj,render,(void))

bool PhysicsEngine_obj::get_paused( ){
	HX_STACK_FRAME("luxe.PhysicsEngine","get_paused",0x8cbac0b4,"luxe.PhysicsEngine.get_paused","luxe/Physics.hx",195,0xe794c970)
	HX_STACK_THIS(this)
	HX_STACK_LINE(195)
	return this->paused;
}


HX_DEFINE_DYNAMIC_FUNC0(PhysicsEngine_obj,get_paused,return )

bool PhysicsEngine_obj::set_paused( Dynamic _pause){
	HX_STACK_FRAME("luxe.PhysicsEngine","set_paused",0x90385f28,"luxe.PhysicsEngine.set_paused","luxe/Physics.hx",201,0xe794c970)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_pause,"_pause")
	HX_STACK_LINE(201)
	return this->paused = _pause;
}


HX_DEFINE_DYNAMIC_FUNC1(PhysicsEngine_obj,set_paused,return )

bool PhysicsEngine_obj::get_draw( ){
	HX_STACK_FRAME("luxe.PhysicsEngine","get_draw",0x4b087e8a,"luxe.PhysicsEngine.get_draw","luxe/Physics.hx",207,0xe794c970)
	HX_STACK_THIS(this)
	HX_STACK_LINE(207)
	return this->draw;
}


HX_DEFINE_DYNAMIC_FUNC0(PhysicsEngine_obj,get_draw,return )

bool PhysicsEngine_obj::set_draw( bool _draw){
	HX_STACK_FRAME("luxe.PhysicsEngine","set_draw",0xf965d7fe,"luxe.PhysicsEngine.set_draw","luxe/Physics.hx",213,0xe794c970)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_draw,"_draw")
	HX_STACK_LINE(213)
	return this->draw = _draw;
}


HX_DEFINE_DYNAMIC_FUNC1(PhysicsEngine_obj,set_draw,return )

::phoenix::Vector PhysicsEngine_obj::get_gravity( ){
	HX_STACK_FRAME("luxe.PhysicsEngine","get_gravity",0x6a78f388,"luxe.PhysicsEngine.get_gravity","luxe/Physics.hx",219,0xe794c970)
	HX_STACK_THIS(this)
	HX_STACK_LINE(219)
	return this->gravity;
}


HX_DEFINE_DYNAMIC_FUNC0(PhysicsEngine_obj,get_gravity,return )

::phoenix::Vector PhysicsEngine_obj::set_gravity( ::phoenix::Vector _gravity){
	HX_STACK_FRAME("luxe.PhysicsEngine","set_gravity",0x74e5fa94,"luxe.PhysicsEngine.set_gravity","luxe/Physics.hx",225,0xe794c970)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_gravity,"_gravity")
	HX_STACK_LINE(225)
	return this->gravity = _gravity;
}


HX_DEFINE_DYNAMIC_FUNC1(PhysicsEngine_obj,set_gravity,return )

Void PhysicsEngine_obj::destroy( ){
{
		HX_STACK_FRAME("luxe.PhysicsEngine","destroy",0x87dd449d,"luxe.PhysicsEngine.destroy","luxe/Physics.hx",229,0xe794c970)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(PhysicsEngine_obj,destroy,(void))


PhysicsEngine_obj::PhysicsEngine_obj()
{
}

void PhysicsEngine_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(PhysicsEngine);
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(paused,"paused");
	HX_MARK_MEMBER_NAME(gravity,"gravity");
	HX_MARK_MEMBER_NAME(draw,"draw");
	HX_MARK_END_CLASS();
}

void PhysicsEngine_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(paused,"paused");
	HX_VISIT_MEMBER_NAME(gravity,"gravity");
	HX_VISIT_MEMBER_NAME(draw,"draw");
}

Dynamic PhysicsEngine_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return name; }
		if (HX_FIELD_EQ(inName,"draw") ) { return inCallProp ? get_draw() : draw; }
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"paused") ) { return inCallProp ? get_paused() : paused; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"render") ) { return render_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"gravity") ) { return inCallProp ? get_gravity() : gravity; }
		if (HX_FIELD_EQ(inName,"_render") ) { return _render_dyn(); }
		if (HX_FIELD_EQ(inName,"process") ) { return process_dyn(); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_draw") ) { return get_draw_dyn(); }
		if (HX_FIELD_EQ(inName,"set_draw") ) { return set_draw_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_paused") ) { return get_paused_dyn(); }
		if (HX_FIELD_EQ(inName,"set_paused") ) { return set_paused_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"get_gravity") ) { return get_gravity_dyn(); }
		if (HX_FIELD_EQ(inName,"set_gravity") ) { return set_gravity_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic PhysicsEngine_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"draw") ) { if (inCallProp) return set_draw(inValue);draw=inValue.Cast< bool >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"paused") ) { if (inCallProp) return set_paused(inValue);paused=inValue.Cast< bool >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"gravity") ) { if (inCallProp) return set_gravity(inValue);gravity=inValue.Cast< ::phoenix::Vector >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void PhysicsEngine_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("name"));
	outFields->push(HX_CSTRING("paused"));
	outFields->push(HX_CSTRING("gravity"));
	outFields->push(HX_CSTRING("draw"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(PhysicsEngine_obj,name),HX_CSTRING("name")},
	{hx::fsBool,(int)offsetof(PhysicsEngine_obj,paused),HX_CSTRING("paused")},
	{hx::fsObject /*::phoenix::Vector*/ ,(int)offsetof(PhysicsEngine_obj,gravity),HX_CSTRING("gravity")},
	{hx::fsBool,(int)offsetof(PhysicsEngine_obj,draw),HX_CSTRING("draw")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("name"),
	HX_CSTRING("paused"),
	HX_CSTRING("gravity"),
	HX_CSTRING("draw"),
	HX_CSTRING("init"),
	HX_CSTRING("_render"),
	HX_CSTRING("process"),
	HX_CSTRING("update"),
	HX_CSTRING("render"),
	HX_CSTRING("get_paused"),
	HX_CSTRING("set_paused"),
	HX_CSTRING("get_draw"),
	HX_CSTRING("set_draw"),
	HX_CSTRING("get_gravity"),
	HX_CSTRING("set_gravity"),
	HX_CSTRING("destroy"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PhysicsEngine_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PhysicsEngine_obj::__mClass,"__mClass");
};

#endif

Class PhysicsEngine_obj::__mClass;

void PhysicsEngine_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("luxe.PhysicsEngine"), hx::TCanCast< PhysicsEngine_obj> ,sStaticFields,sMemberFields,
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

void PhysicsEngine_obj::__boot()
{
}

} // end namespace luxe
