#include <hxcpp.h>

#ifndef INCLUDED_luxe_Core
#include <luxe/Core.h>
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

Void Timer_obj::__construct(::luxe::Core _core)
{
HX_STACK_FRAME("luxe.Timer","new",0xbef5cc5f,"luxe.Timer.new","luxe/Timer.hx",14,0x545f8cf2)
HX_STACK_THIS(this)
HX_STACK_ARG(_core,"_core")
{
	HX_STACK_LINE(15)
	this->core = _core;
	HX_STACK_LINE(16)
	this->timers = Array_obj< ::Dynamic >::__new();
}
;
	return null();
}

//Timer_obj::~Timer_obj() { }

Dynamic Timer_obj::__CreateEmpty() { return  new Timer_obj; }
hx::ObjectPtr< Timer_obj > Timer_obj::__new(::luxe::Core _core)
{  hx::ObjectPtr< Timer_obj > result = new Timer_obj();
	result->__construct(_core);
	return result;}

Dynamic Timer_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Timer_obj > result = new Timer_obj();
	result->__construct(inArgs[0]);
	return result;}

Void Timer_obj::init( ){
{
		HX_STACK_FRAME("luxe.Timer","init",0x54d5be31,"luxe.Timer.init","luxe/Log.hx",138,0xe5312153)
		HX_STACK_THIS(this)
		HX_STACK_LINE(138)
		Dynamic();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Timer_obj,init,(void))

Void Timer_obj::destroy( ){
{
		HX_STACK_FRAME("luxe.Timer","destroy",0xae6f9479,"luxe.Timer.destroy","luxe/Log.hx",138,0xe5312153)
		HX_STACK_THIS(this)
		HX_STACK_LINE(138)
		Dynamic();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Timer_obj,destroy,(void))

Void Timer_obj::process( ){
{
		HX_STACK_FRAME("luxe.Timer","process",0x7b3409ee,"luxe.Timer.process","luxe/Timer.hx",31,0x545f8cf2)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Timer_obj,process,(void))

Void Timer_obj::reset( ){
{
		HX_STACK_FRAME("luxe.Timer","reset",0x0ee0838e,"luxe.Timer.reset","luxe/Timer.hx",36,0x545f8cf2)
		HX_STACK_THIS(this)
		HX_STACK_LINE(38)
		{
			HX_STACK_LINE(38)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(38)
			Array< ::Dynamic > _g1 = this->timers;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(38)
			while((true)){
				HX_STACK_LINE(38)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(38)
					break;
				}
				HX_STACK_LINE(38)
				::snow::utils::Timer t = _g1->__get(_g).StaticCast< ::snow::utils::Timer >();		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(38)
				++(_g);
				HX_STACK_LINE(39)
				t->stop();
				HX_STACK_LINE(40)
				t = null();
			}
		}
		HX_STACK_LINE(43)
		this->timers = null();
		HX_STACK_LINE(44)
		this->timers = Array_obj< ::Dynamic >::__new();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Timer_obj,reset,(void))

::snow::utils::Timer Timer_obj::schedule( Float _time_in_seconds,Dynamic _on_time,Dynamic __o_repeat){
Dynamic repeat = __o_repeat.Default(false);
	HX_STACK_FRAME("luxe.Timer","schedule",0xe7cff1f8,"luxe.Timer.schedule","luxe/Timer.hx",48,0x545f8cf2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_time_in_seconds,"_time_in_seconds")
	HX_STACK_ARG(_on_time,"_on_time")
	HX_STACK_ARG(repeat,"repeat")
{
		HX_STACK_LINE(48)
		Array< ::Dynamic > repeat1 = Array_obj< ::Dynamic >::__new().Add(repeat);		HX_STACK_VAR(repeat1,"repeat1");
		HX_STACK_LINE(48)
		Dynamic _on_time1 = Dynamic( Array_obj<Dynamic>::__new().Add(_on_time));		HX_STACK_VAR(_on_time1,"_on_time1");
		HX_STACK_LINE(48)
		Array< ::Dynamic > _g = Array_obj< ::Dynamic >::__new().Add(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(50)
		Array< ::Dynamic > t = Array_obj< ::Dynamic >::__new().Add(::snow::utils::Timer_obj::__new(_time_in_seconds));		HX_STACK_VAR(t,"t");

		HX_BEGIN_LOCAL_FUNC_S4(hx::LocalFunc,_Function_1_1,Dynamic,_on_time1,Array< ::Dynamic >,_g,Array< ::Dynamic >,repeat1,Array< ::Dynamic >,t)
		Void run(){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","luxe/Timer.hx",52,0x545f8cf2)
			{
				HX_STACK_LINE(53)
				if ((!(repeat1->__get((int)0)))){
					HX_STACK_LINE(54)
					t->__get((int)0).StaticCast< ::snow::utils::Timer >()->stop();
					HX_STACK_LINE(55)
					_g->__get((int)0).StaticCast< ::luxe::Timer >()->timers->remove(t->__get((int)0).StaticCast< ::snow::utils::Timer >());
				}
				HX_STACK_LINE(57)
				_on_time1->__GetItem((int)0)().Cast< Void >();
			}
			return null();
		}
		HX_END_LOCAL_FUNC0((void))

		HX_STACK_LINE(52)
		t->__get((int)0).StaticCast< ::snow::utils::Timer >()->run =  Dynamic(new _Function_1_1(_on_time1,_g,repeat1,t));
		HX_STACK_LINE(60)
		this->timers->push(t->__get((int)0).StaticCast< ::snow::utils::Timer >());
		HX_STACK_LINE(62)
		return t->__get((int)0).StaticCast< ::snow::utils::Timer >();
	}
}


HX_DEFINE_DYNAMIC_FUNC3(Timer_obj,schedule,return )


Timer_obj::Timer_obj()
{
}

void Timer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Timer);
	HX_MARK_MEMBER_NAME(core,"core");
	HX_MARK_MEMBER_NAME(timers,"timers");
	HX_MARK_END_CLASS();
}

void Timer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(core,"core");
	HX_VISIT_MEMBER_NAME(timers,"timers");
}

Dynamic Timer_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"core") ) { return core; }
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"reset") ) { return reset_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"timers") ) { return timers; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"process") ) { return process_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"schedule") ) { return schedule_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Timer_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"core") ) { core=inValue.Cast< ::luxe::Core >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"timers") ) { timers=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Timer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("core"));
	outFields->push(HX_CSTRING("timers"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::luxe::Core*/ ,(int)offsetof(Timer_obj,core),HX_CSTRING("core")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Timer_obj,timers),HX_CSTRING("timers")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("core"),
	HX_CSTRING("timers"),
	HX_CSTRING("init"),
	HX_CSTRING("destroy"),
	HX_CSTRING("process"),
	HX_CSTRING("reset"),
	HX_CSTRING("schedule"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Timer_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Timer_obj::__mClass,"__mClass");
};

#endif

Class Timer_obj::__mClass;

void Timer_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("luxe.Timer"), hx::TCanCast< Timer_obj> ,sStaticFields,sMemberFields,
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

void Timer_obj::__boot()
{
}

} // end namespace luxe
