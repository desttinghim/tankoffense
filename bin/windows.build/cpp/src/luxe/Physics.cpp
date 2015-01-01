#include <hxcpp.h>

#ifndef INCLUDED_Luxe
#include <Luxe.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_luxe_Core
#include <luxe/Core.h>
#endif
#ifndef INCLUDED_luxe_Debug
#include <luxe/Debug.h>
#endif
#ifndef INCLUDED_luxe_Physics
#include <luxe/Physics.h>
#endif
#ifndef INCLUDED_luxe_PhysicsEngine
#include <luxe/PhysicsEngine.h>
#endif
#ifndef INCLUDED_luxe_Timer
#include <luxe/Timer.h>
#endif
#ifndef INCLUDED_snow_App
#include <snow/App.h>
#endif
#ifndef INCLUDED_snow_utils_Timer
#include <snow/utils/Timer.h>
#endif
namespace luxe{

Void Physics_obj::__construct(::luxe::Core _core)
{
HX_STACK_FRAME("luxe.Physics","new",0x78e08861,"luxe.Physics.new","luxe/Physics.hx",16,0xe794c970)
HX_STACK_THIS(this)
HX_STACK_ARG(_core,"_core")
{
	HX_STACK_LINE(33)
	this->step_delta = 0.016666666666666666;
	HX_STACK_LINE(31)
	this->step_rate = 0.016666666666666666;
	HX_STACK_LINE(40)
	this->core = _core;
}
;
	return null();
}

//Physics_obj::~Physics_obj() { }

Dynamic Physics_obj::__CreateEmpty() { return  new Physics_obj; }
hx::ObjectPtr< Physics_obj > Physics_obj::__new(::luxe::Core _core)
{  hx::ObjectPtr< Physics_obj > result = new Physics_obj();
	result->__construct(_core);
	return result;}

Dynamic Physics_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Physics_obj > result = new Physics_obj();
	result->__construct(inArgs[0]);
	return result;}

Void Physics_obj::init( ){
{
		HX_STACK_FRAME("luxe.Physics","init",0x484f83ef,"luxe.Physics.init","luxe/Physics.hx",46,0xe794c970)
		HX_STACK_THIS(this)
		HX_STACK_LINE(46)
		this->engines = Array_obj< ::Dynamic >::__new();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Physics_obj,init,(void))

Void Physics_obj::reset( ){
{
		HX_STACK_FRAME("luxe.Physics","reset",0x25f3c410,"luxe.Physics.reset","luxe/Physics.hx",58,0xe794c970)
		HX_STACK_THIS(this)
		HX_STACK_LINE(61)
		if (((this->timer != null()))){
			HX_STACK_LINE(62)
			this->timer->stop();
			HX_STACK_LINE(63)
			this->timer = null();
		}
		HX_STACK_LINE(66)
		if (((this->step_rate != (int)0))){
			HX_STACK_LINE(69)
			::snow::utils::Timer _g = ::Luxe_obj::timer->schedule(this->step_rate,this->fixed_update_dyn(),true);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(69)
			this->timer = _g;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Physics_obj,reset,(void))

Void Physics_obj::fixed_update( ){
{
		HX_STACK_FRAME("luxe.Physics","fixed_update",0x133e3493,"luxe.Physics.fixed_update","luxe/Physics.hx",78,0xe794c970)
		HX_STACK_THIS(this)
		HX_STACK_LINE(80)
		::Luxe_obj::debug->start(::luxe::Physics_obj::tag_physics,null());
		HX_STACK_LINE(82)
		this->update();
		HX_STACK_LINE(84)
		::Luxe_obj::debug->end(::luxe::Physics_obj::tag_physics);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Physics_obj,fixed_update,(void))

Dynamic Physics_obj::add_engine( ::Class type,Dynamic _data){
	HX_STACK_FRAME("luxe.Physics","add_engine",0x7161177f,"luxe.Physics.add_engine","luxe/Physics.hx",88,0xe794c970)
	HX_STACK_THIS(this)
	HX_STACK_ARG(type,"type")
	HX_STACK_ARG(_data,"_data")
	HX_STACK_LINE(90)
	Dynamic _engine_instance = ::Type_obj::createInstance(type,Dynamic( Array_obj<Dynamic>::__new().Add(_data)));		HX_STACK_VAR(_engine_instance,"_engine_instance");
	HX_STACK_LINE(91)
	::luxe::PhysicsEngine _physics_engine = _engine_instance;		HX_STACK_VAR(_physics_engine,"_physics_engine");
	HX_STACK_LINE(94)
	_physics_engine->init();
	HX_STACK_LINE(97)
	this->engines->push(_physics_engine);
	HX_STACK_LINE(100)
	return _engine_instance;
}


HX_DEFINE_DYNAMIC_FUNC2(Physics_obj,add_engine,return )

Void Physics_obj::update( ){
{
		HX_STACK_FRAME("luxe.Physics","update",0x8de504a8,"luxe.Physics.update","luxe/Physics.hx",106,0xe794c970)
		HX_STACK_THIS(this)
		HX_STACK_LINE(106)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(106)
		Array< ::Dynamic > _g1 = this->engines;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(106)
		while((true)){
			HX_STACK_LINE(106)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(106)
				break;
			}
			HX_STACK_LINE(106)
			::luxe::PhysicsEngine engine = _g1->__get(_g).StaticCast< ::luxe::PhysicsEngine >();		HX_STACK_VAR(engine,"engine");
			HX_STACK_LINE(106)
			++(_g);
			HX_STACK_LINE(107)
			engine->update();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Physics_obj,update,(void))

Void Physics_obj::process( ){
{
		HX_STACK_FRAME("luxe.Physics","process",0xedf9eef0,"luxe.Physics.process","luxe/Physics.hx",112,0xe794c970)
		HX_STACK_THIS(this)
		HX_STACK_LINE(112)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(112)
		Array< ::Dynamic > _g1 = this->engines;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(112)
		while((true)){
			HX_STACK_LINE(112)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(112)
				break;
			}
			HX_STACK_LINE(112)
			::luxe::PhysicsEngine engine = _g1->__get(_g).StaticCast< ::luxe::PhysicsEngine >();		HX_STACK_VAR(engine,"engine");
			HX_STACK_LINE(112)
			++(_g);
			HX_STACK_LINE(113)
			engine->process();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Physics_obj,process,(void))

Void Physics_obj::render( ){
{
		HX_STACK_FRAME("luxe.Physics","render",0x0c08e9f5,"luxe.Physics.render","luxe/Physics.hx",118,0xe794c970)
		HX_STACK_THIS(this)
		HX_STACK_LINE(118)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(118)
		Array< ::Dynamic > _g1 = this->engines;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(118)
		while((true)){
			HX_STACK_LINE(118)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(118)
				break;
			}
			HX_STACK_LINE(118)
			::luxe::PhysicsEngine engine = _g1->__get(_g).StaticCast< ::luxe::PhysicsEngine >();		HX_STACK_VAR(engine,"engine");
			HX_STACK_LINE(118)
			++(_g);
			HX_STACK_LINE(119)
			engine->render();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Physics_obj,render,(void))

Void Physics_obj::destroy( ){
{
		HX_STACK_FRAME("luxe.Physics","destroy",0x2135797b,"luxe.Physics.destroy","luxe/Physics.hx",123,0xe794c970)
		HX_STACK_THIS(this)
		HX_STACK_LINE(125)
		if (((this->timer != null()))){
			HX_STACK_LINE(126)
			this->timer->stop();
		}
		HX_STACK_LINE(129)
		this->timer = null();
		HX_STACK_LINE(131)
		{
			HX_STACK_LINE(131)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(131)
			Array< ::Dynamic > _g1 = this->engines;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(131)
			while((true)){
				HX_STACK_LINE(131)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(131)
					break;
				}
				HX_STACK_LINE(131)
				::luxe::PhysicsEngine engine = _g1->__get(_g).StaticCast< ::luxe::PhysicsEngine >();		HX_STACK_VAR(engine,"engine");
				HX_STACK_LINE(131)
				++(_g);
				HX_STACK_LINE(132)
				engine->destroy();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Physics_obj,destroy,(void))

Float Physics_obj::set_step_rate( Float _rate){
	HX_STACK_FRAME("luxe.Physics","set_step_rate",0x5fde6d17,"luxe.Physics.set_step_rate","luxe/Physics.hx",138,0xe794c970)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_rate,"_rate")
	HX_STACK_LINE(141)
	this->step_rate = _rate;
	HX_STACK_LINE(142)
	this->step_delta = this->step_rate;
	HX_STACK_LINE(145)
	this->reset();
	HX_STACK_LINE(147)
	return this->step_rate;
}


HX_DEFINE_DYNAMIC_FUNC1(Physics_obj,set_step_rate,return )

::String Physics_obj::tag_physics;


Physics_obj::Physics_obj()
{
}

void Physics_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Physics);
	HX_MARK_MEMBER_NAME(core,"core");
	HX_MARK_MEMBER_NAME(engines,"engines");
	HX_MARK_MEMBER_NAME(step_rate,"step_rate");
	HX_MARK_MEMBER_NAME(step_delta,"step_delta");
	HX_MARK_MEMBER_NAME(timer,"timer");
	HX_MARK_END_CLASS();
}

void Physics_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(core,"core");
	HX_VISIT_MEMBER_NAME(engines,"engines");
	HX_VISIT_MEMBER_NAME(step_rate,"step_rate");
	HX_VISIT_MEMBER_NAME(step_delta,"step_delta");
	HX_VISIT_MEMBER_NAME(timer,"timer");
}

Dynamic Physics_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"core") ) { return core; }
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"timer") ) { return timer; }
		if (HX_FIELD_EQ(inName,"reset") ) { return reset_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"render") ) { return render_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"engines") ) { return engines; }
		if (HX_FIELD_EQ(inName,"process") ) { return process_dyn(); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"step_rate") ) { return step_rate; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"step_delta") ) { return step_delta; }
		if (HX_FIELD_EQ(inName,"add_engine") ) { return add_engine_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"tag_physics") ) { return tag_physics; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"fixed_update") ) { return fixed_update_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"set_step_rate") ) { return set_step_rate_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Physics_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"core") ) { core=inValue.Cast< ::luxe::Core >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"timer") ) { timer=inValue.Cast< ::snow::utils::Timer >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"engines") ) { engines=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"step_rate") ) { if (inCallProp) return set_step_rate(inValue);step_rate=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"step_delta") ) { step_delta=inValue.Cast< Float >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"tag_physics") ) { tag_physics=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Physics_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("core"));
	outFields->push(HX_CSTRING("engines"));
	outFields->push(HX_CSTRING("step_rate"));
	outFields->push(HX_CSTRING("step_delta"));
	outFields->push(HX_CSTRING("timer"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("tag_physics"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::luxe::Core*/ ,(int)offsetof(Physics_obj,core),HX_CSTRING("core")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Physics_obj,engines),HX_CSTRING("engines")},
	{hx::fsFloat,(int)offsetof(Physics_obj,step_rate),HX_CSTRING("step_rate")},
	{hx::fsFloat,(int)offsetof(Physics_obj,step_delta),HX_CSTRING("step_delta")},
	{hx::fsObject /*::snow::utils::Timer*/ ,(int)offsetof(Physics_obj,timer),HX_CSTRING("timer")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("core"),
	HX_CSTRING("engines"),
	HX_CSTRING("step_rate"),
	HX_CSTRING("step_delta"),
	HX_CSTRING("timer"),
	HX_CSTRING("init"),
	HX_CSTRING("reset"),
	HX_CSTRING("fixed_update"),
	HX_CSTRING("add_engine"),
	HX_CSTRING("update"),
	HX_CSTRING("process"),
	HX_CSTRING("render"),
	HX_CSTRING("destroy"),
	HX_CSTRING("set_step_rate"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Physics_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Physics_obj::tag_physics,"tag_physics");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Physics_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Physics_obj::tag_physics,"tag_physics");
};

#endif

Class Physics_obj::__mClass;

void Physics_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("luxe.Physics"), hx::TCanCast< Physics_obj> ,sStaticFields,sMemberFields,
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

void Physics_obj::__boot()
{
	tag_physics= HX_CSTRING("physics");
}

} // end namespace luxe
