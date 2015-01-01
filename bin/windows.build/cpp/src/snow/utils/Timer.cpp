#include <hxcpp.h>

#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_snow_CoreBinding
#include <snow/CoreBinding.h>
#endif
#ifndef INCLUDED_snow_Snow
#include <snow/Snow.h>
#endif
#ifndef INCLUDED_snow_platform_native_Core
#include <snow/platform/native/Core.h>
#endif
#ifndef INCLUDED_snow_utils_AbstractClass
#include <snow/utils/AbstractClass.h>
#endif
#ifndef INCLUDED_snow_utils_Timer
#include <snow/utils/Timer.h>
#endif
namespace snow{
namespace utils{

Void Timer_obj::__construct(Float _time)
{
HX_STACK_FRAME("snow.utils.Timer","new",0x6bb27eaf,"snow.utils.Timer.new","snow/utils/Timer.hx",14,0xc5653463)
HX_STACK_THIS(this)
HX_STACK_ARG(_time,"_time")
{
	HX_STACK_LINE(16)
	this->time = _time;
	HX_STACK_LINE(17)
	::snow::utils::Timer_obj::running_timers->push(hx::ObjectPtr<OBJ_>(this));
	HX_STACK_LINE(18)
	Float _g = ::snow::utils::Timer_obj::stamp();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(18)
	Float _g1 = (_g + this->time);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(18)
	this->fire_at = _g1;
	HX_STACK_LINE(19)
	this->running = true;
}
;
	return null();
}

//Timer_obj::~Timer_obj() { }

Dynamic Timer_obj::__CreateEmpty() { return  new Timer_obj; }
hx::ObjectPtr< Timer_obj > Timer_obj::__new(Float _time)
{  hx::ObjectPtr< Timer_obj > result = new Timer_obj();
	result->__construct(_time);
	return result;}

Dynamic Timer_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Timer_obj > result = new Timer_obj();
	result->__construct(inArgs[0]);
	return result;}

HX_BEGIN_DEFAULT_FUNC(__default_run,Timer_obj)
Void run(){
{
		HX_STACK_FRAME("snow.utils.Timer","run",0x6bb5959a,"snow.utils.Timer.run","snow/utils/Timer.hx",31,0xc5653463)
		HX_STACK_THIS(this)
	}
return null();
}
HX_END_LOCAL_FUNC0((void))
HX_END_DEFAULT_FUNC

Void Timer_obj::stop( ){
{
		HX_STACK_FRAME("snow.utils.Timer","stop",0xd3d5c6d3,"snow.utils.Timer.stop","snow/utils/Timer.hx",35,0xc5653463)
		HX_STACK_THIS(this)
		HX_STACK_LINE(35)
		if ((this->running)){
			HX_STACK_LINE(36)
			this->running = false;
			HX_STACK_LINE(37)
			::snow::utils::Timer_obj::running_timers->remove(hx::ObjectPtr<OBJ_>(this));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Timer_obj,stop,(void))

Array< ::Dynamic > Timer_obj::running_timers;

Dynamic Timer_obj::measure( Dynamic f,Dynamic pos){
	HX_STACK_FRAME("snow.utils.Timer","measure",0xe4df7d2d,"snow.utils.Timer.measure","snow/utils/Timer.hx",23,0xc5653463)
	HX_STACK_ARG(f,"f")
	HX_STACK_ARG(pos,"pos")
	HX_STACK_LINE(24)
	Float t0 = ::snow::utils::Timer_obj::stamp();		HX_STACK_VAR(t0,"t0");
	HX_STACK_LINE(25)
	Dynamic r = f();		HX_STACK_VAR(r,"r");
	HX_STACK_LINE(26)
	Float _g = ::snow::utils::Timer_obj::stamp();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(26)
	Float _g1 = (_g - t0);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(26)
	::String _g2 = (_g1 + HX_CSTRING("s"));		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(26)
	::haxe::Log_obj::trace(_g2,pos);
	HX_STACK_LINE(27)
	return r;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Timer_obj,measure,return )

Void Timer_obj::update( ){
{
		HX_STACK_FRAME("snow.utils.Timer","update",0x41bf731a,"snow.utils.Timer.update","snow/utils/Timer.hx",46,0xc5653463)
		HX_STACK_LINE(48)
		Float now = ::snow::utils::Timer_obj::stamp();		HX_STACK_VAR(now,"now");
		HX_STACK_LINE(50)
		{
			HX_STACK_LINE(50)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(50)
			Array< ::Dynamic > _g1 = ::snow::utils::Timer_obj::running_timers;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(50)
			while((true)){
				HX_STACK_LINE(50)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(50)
					break;
				}
				HX_STACK_LINE(50)
				::snow::utils::Timer timer = _g1->__get(_g).StaticCast< ::snow::utils::Timer >();		HX_STACK_VAR(timer,"timer");
				HX_STACK_LINE(50)
				++(_g);
				HX_STACK_LINE(51)
				if ((timer->running)){
					HX_STACK_LINE(52)
					if (((timer->fire_at < now))){
						HX_STACK_LINE(53)
						hx::AddEq(timer->fire_at,timer->time);
						HX_STACK_LINE(54)
						timer->run();
					}
				}
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Timer_obj,update,(void))

::snow::utils::Timer Timer_obj::delay( Float _time,Dynamic _f){
	HX_STACK_FRAME("snow.utils.Timer","delay",0xda48f792,"snow.utils.Timer.delay","snow/utils/Timer.hx",62,0xc5653463)
	HX_STACK_ARG(_time,"_time")
	HX_STACK_ARG(_f,"_f")
	HX_STACK_LINE(62)
	Dynamic _f1 = Dynamic( Array_obj<Dynamic>::__new().Add(_f));		HX_STACK_VAR(_f1,"_f1");
	HX_STACK_LINE(64)
	Array< ::Dynamic > t = Array_obj< ::Dynamic >::__new().Add(::snow::utils::Timer_obj::__new(_time));		HX_STACK_VAR(t,"t");

	HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_1_1,Array< ::Dynamic >,t,Dynamic,_f1)
	Void run(){
		HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","snow/utils/Timer.hx",65,0xc5653463)
		{
			HX_STACK_LINE(66)
			t->__get((int)0).StaticCast< ::snow::utils::Timer >()->stop();
			HX_STACK_LINE(67)
			_f1->__GetItem((int)0)().Cast< Void >();
		}
		return null();
	}
	HX_END_LOCAL_FUNC0((void))

	HX_STACK_LINE(65)
	t->__get((int)0).StaticCast< ::snow::utils::Timer >()->run =  Dynamic(new _Function_1_1(t,_f1));
	HX_STACK_LINE(70)
	return t->__get((int)0).StaticCast< ::snow::utils::Timer >();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Timer_obj,delay,return )

Float Timer_obj::stamp( ){
	HX_STACK_FRAME("snow.utils.Timer","stamp",0x872d9012,"snow.utils.Timer.stamp","snow/utils/Timer.hx",76,0xc5653463)
	HX_STACK_LINE(76)
	return ::snow::Snow_obj::core->timestamp();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Timer_obj,stamp,return )


Timer_obj::Timer_obj()
{
	run = new __default_run(this);
}

void Timer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Timer);
	HX_MARK_MEMBER_NAME(time,"time");
	HX_MARK_MEMBER_NAME(fire_at,"fire_at");
	HX_MARK_MEMBER_NAME(running,"running");
	HX_MARK_MEMBER_NAME(run,"run");
	HX_MARK_END_CLASS();
}

void Timer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(time,"time");
	HX_VISIT_MEMBER_NAME(fire_at,"fire_at");
	HX_VISIT_MEMBER_NAME(running,"running");
	HX_VISIT_MEMBER_NAME(run,"run");
}

Dynamic Timer_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"run") ) { return run; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"time") ) { return time; }
		if (HX_FIELD_EQ(inName,"stop") ) { return stop_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"delay") ) { return delay_dyn(); }
		if (HX_FIELD_EQ(inName,"stamp") ) { return stamp_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"measure") ) { return measure_dyn(); }
		if (HX_FIELD_EQ(inName,"fire_at") ) { return fire_at; }
		if (HX_FIELD_EQ(inName,"running") ) { return running; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"running_timers") ) { return running_timers; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Timer_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"run") ) { run=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"time") ) { time=inValue.Cast< Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"fire_at") ) { fire_at=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"running") ) { running=inValue.Cast< bool >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"running_timers") ) { running_timers=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Timer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("time"));
	outFields->push(HX_CSTRING("fire_at"));
	outFields->push(HX_CSTRING("running"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("running_timers"),
	HX_CSTRING("measure"),
	HX_CSTRING("update"),
	HX_CSTRING("delay"),
	HX_CSTRING("stamp"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(Timer_obj,time),HX_CSTRING("time")},
	{hx::fsFloat,(int)offsetof(Timer_obj,fire_at),HX_CSTRING("fire_at")},
	{hx::fsBool,(int)offsetof(Timer_obj,running),HX_CSTRING("running")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Timer_obj,run),HX_CSTRING("run")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("time"),
	HX_CSTRING("fire_at"),
	HX_CSTRING("running"),
	HX_CSTRING("run"),
	HX_CSTRING("stop"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Timer_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Timer_obj::running_timers,"running_timers");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Timer_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Timer_obj::running_timers,"running_timers");
};

#endif

Class Timer_obj::__mClass;

void Timer_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("snow.utils.Timer"), hx::TCanCast< Timer_obj> ,sStaticFields,sMemberFields,
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
	running_timers= Array_obj< ::Dynamic >::__new();
}

} // end namespace snow
} // end namespace utils
