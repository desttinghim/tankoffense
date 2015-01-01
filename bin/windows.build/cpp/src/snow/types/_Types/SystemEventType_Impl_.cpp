#include <hxcpp.h>

#ifndef INCLUDED_snow_types__Types_SystemEventType_Impl_
#include <snow/types/_Types/SystemEventType_Impl_.h>
#endif
namespace snow{
namespace types{
namespace _Types{

Void SystemEventType_Impl__obj::__construct()
{
	return null();
}

//SystemEventType_Impl__obj::~SystemEventType_Impl__obj() { }

Dynamic SystemEventType_Impl__obj::__CreateEmpty() { return  new SystemEventType_Impl__obj; }
hx::ObjectPtr< SystemEventType_Impl__obj > SystemEventType_Impl__obj::__new()
{  hx::ObjectPtr< SystemEventType_Impl__obj > result = new SystemEventType_Impl__obj();
	result->__construct();
	return result;}

Dynamic SystemEventType_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< SystemEventType_Impl__obj > result = new SystemEventType_Impl__obj();
	result->__construct();
	return result;}

int SystemEventType_Impl__obj::unknown;

int SystemEventType_Impl__obj::init;

int SystemEventType_Impl__obj::ready;

int SystemEventType_Impl__obj::update;

int SystemEventType_Impl__obj::shutdown;

int SystemEventType_Impl__obj::window;

int SystemEventType_Impl__obj::input;

int SystemEventType_Impl__obj::quit;

int SystemEventType_Impl__obj::app_terminating;

int SystemEventType_Impl__obj::app_lowmemory;

int SystemEventType_Impl__obj::app_willenterbackground;

int SystemEventType_Impl__obj::app_didenterbackground;

int SystemEventType_Impl__obj::app_willenterforeground;

int SystemEventType_Impl__obj::app_didenterforeground;

int SystemEventType_Impl__obj::file;


SystemEventType_Impl__obj::SystemEventType_Impl__obj()
{
}

Dynamic SystemEventType_Impl__obj::__Field(const ::String &inName,bool inCallProp)
{
	return super::__Field(inName,inCallProp);
}

Dynamic SystemEventType_Impl__obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void SystemEventType_Impl__obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("unknown"),
	HX_CSTRING("init"),
	HX_CSTRING("ready"),
	HX_CSTRING("update"),
	HX_CSTRING("shutdown"),
	HX_CSTRING("window"),
	HX_CSTRING("input"),
	HX_CSTRING("quit"),
	HX_CSTRING("app_terminating"),
	HX_CSTRING("app_lowmemory"),
	HX_CSTRING("app_willenterbackground"),
	HX_CSTRING("app_didenterbackground"),
	HX_CSTRING("app_willenterforeground"),
	HX_CSTRING("app_didenterforeground"),
	HX_CSTRING("file"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SystemEventType_Impl__obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(SystemEventType_Impl__obj::unknown,"unknown");
	HX_MARK_MEMBER_NAME(SystemEventType_Impl__obj::init,"init");
	HX_MARK_MEMBER_NAME(SystemEventType_Impl__obj::ready,"ready");
	HX_MARK_MEMBER_NAME(SystemEventType_Impl__obj::update,"update");
	HX_MARK_MEMBER_NAME(SystemEventType_Impl__obj::shutdown,"shutdown");
	HX_MARK_MEMBER_NAME(SystemEventType_Impl__obj::window,"window");
	HX_MARK_MEMBER_NAME(SystemEventType_Impl__obj::input,"input");
	HX_MARK_MEMBER_NAME(SystemEventType_Impl__obj::quit,"quit");
	HX_MARK_MEMBER_NAME(SystemEventType_Impl__obj::app_terminating,"app_terminating");
	HX_MARK_MEMBER_NAME(SystemEventType_Impl__obj::app_lowmemory,"app_lowmemory");
	HX_MARK_MEMBER_NAME(SystemEventType_Impl__obj::app_willenterbackground,"app_willenterbackground");
	HX_MARK_MEMBER_NAME(SystemEventType_Impl__obj::app_didenterbackground,"app_didenterbackground");
	HX_MARK_MEMBER_NAME(SystemEventType_Impl__obj::app_willenterforeground,"app_willenterforeground");
	HX_MARK_MEMBER_NAME(SystemEventType_Impl__obj::app_didenterforeground,"app_didenterforeground");
	HX_MARK_MEMBER_NAME(SystemEventType_Impl__obj::file,"file");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SystemEventType_Impl__obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(SystemEventType_Impl__obj::unknown,"unknown");
	HX_VISIT_MEMBER_NAME(SystemEventType_Impl__obj::init,"init");
	HX_VISIT_MEMBER_NAME(SystemEventType_Impl__obj::ready,"ready");
	HX_VISIT_MEMBER_NAME(SystemEventType_Impl__obj::update,"update");
	HX_VISIT_MEMBER_NAME(SystemEventType_Impl__obj::shutdown,"shutdown");
	HX_VISIT_MEMBER_NAME(SystemEventType_Impl__obj::window,"window");
	HX_VISIT_MEMBER_NAME(SystemEventType_Impl__obj::input,"input");
	HX_VISIT_MEMBER_NAME(SystemEventType_Impl__obj::quit,"quit");
	HX_VISIT_MEMBER_NAME(SystemEventType_Impl__obj::app_terminating,"app_terminating");
	HX_VISIT_MEMBER_NAME(SystemEventType_Impl__obj::app_lowmemory,"app_lowmemory");
	HX_VISIT_MEMBER_NAME(SystemEventType_Impl__obj::app_willenterbackground,"app_willenterbackground");
	HX_VISIT_MEMBER_NAME(SystemEventType_Impl__obj::app_didenterbackground,"app_didenterbackground");
	HX_VISIT_MEMBER_NAME(SystemEventType_Impl__obj::app_willenterforeground,"app_willenterforeground");
	HX_VISIT_MEMBER_NAME(SystemEventType_Impl__obj::app_didenterforeground,"app_didenterforeground");
	HX_VISIT_MEMBER_NAME(SystemEventType_Impl__obj::file,"file");
};

#endif

Class SystemEventType_Impl__obj::__mClass;

void SystemEventType_Impl__obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("snow.types._Types.SystemEventType_Impl_"), hx::TCanCast< SystemEventType_Impl__obj> ,sStaticFields,sMemberFields,
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

void SystemEventType_Impl__obj::__boot()
{
	unknown= (int)0;
	init= (int)1;
	ready= (int)2;
	update= (int)3;
	shutdown= (int)4;
	window= (int)5;
	input= (int)6;
	quit= (int)7;
	app_terminating= (int)8;
	app_lowmemory= (int)9;
	app_willenterbackground= (int)10;
	app_didenterbackground= (int)11;
	app_willenterforeground= (int)12;
	app_didenterforeground= (int)13;
	file= (int)14;
}

} // end namespace snow
} // end namespace types
} // end namespace _Types
