#include <hxcpp.h>

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
#ifndef INCLUDED_snow_utils_Libs
#include <snow/utils/Libs.h>
#endif
namespace snow{
namespace platform{
namespace native{

Void Core_obj::__construct(::snow::Snow _app)
{
HX_STACK_FRAME("snow.platform.native.Core","new",0xdd036538,"snow.platform.native.Core.new","snow/platform/native/Core.hx",21,0x31f01b37)
HX_STACK_THIS(this)
HX_STACK_ARG(_app,"_app")
{
	HX_STACK_LINE(23)
	this->start_timestamp = 0.0;
	HX_STACK_LINE(26)
	this->app = _app;
}
;
	return null();
}

//Core_obj::~Core_obj() { }

Dynamic Core_obj::__CreateEmpty() { return  new Core_obj; }
hx::ObjectPtr< Core_obj > Core_obj::__new(::snow::Snow _app)
{  hx::ObjectPtr< Core_obj > result = new Core_obj();
	result->__construct(_app);
	return result;}

Dynamic Core_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Core_obj > result = new Core_obj();
	result->__construct(inArgs[0]);
	return result;}

Void Core_obj::init( Dynamic _event_handler){
{
		HX_STACK_FRAME("snow.platform.native.Core","init",0x82ade338,"snow.platform.native.Core.init","snow/platform/native/Core.hx",30,0x31f01b37)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_event_handler,"_event_handler")
		HX_STACK_LINE(32)
		Float _g = this->timestamp();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(32)
		this->start_timestamp = _g;
		struct _Function_1_1{
			inline static Dynamic Block( hx::ObjectPtr< ::snow::platform::native::Core_obj > __this){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","snow/platform/native/Core.hx",34,0x31f01b37)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("has_loop") , __this->app->snow_config->__Field(HX_CSTRING("has_loop"),true),false);
					__result->Add(HX_CSTRING("log_level") , (int)1,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(34)
		::snow::platform::native::Core_obj::snow_init(_event_handler,_Function_1_1::Block(this));
	}
return null();
}


Void Core_obj::shutdown( ){
{
		HX_STACK_FRAME("snow.platform.native.Core","shutdown",0x6279d8be,"snow.platform.native.Core.shutdown","snow/platform/native/Core.hx",43,0x31f01b37)
		HX_STACK_THIS(this)
		HX_STACK_LINE(43)
		::snow::platform::native::Core_obj::snow_shutdown();
	}
return null();
}


Float Core_obj::timestamp( ){
	HX_STACK_FRAME("snow.platform.native.Core","timestamp",0x2e819bae,"snow.platform.native.Core.timestamp","snow/platform/native/Core.hx",47,0x31f01b37)
	HX_STACK_THIS(this)
	HX_STACK_LINE(48)
	Float now = ::snow::platform::native::Core_obj::snow_timestamp();		HX_STACK_VAR(now,"now");
	HX_STACK_LINE(49)
	return (now - this->start_timestamp);
}


::String Core_obj::app_path( ){
	HX_STACK_FRAME("snow.platform.native.Core","app_path",0x9a4a796b,"snow.platform.native.Core.app_path","snow/platform/native/Core.hx",54,0x31f01b37)
	HX_STACK_THIS(this)
	HX_STACK_LINE(54)
	return ::snow::platform::native::Core_obj::snow_app_path();
}


::String Core_obj::pref_path( ::String _package,::String _appname){
	HX_STACK_FRAME("snow.platform.native.Core","pref_path",0x78893299,"snow.platform.native.Core.pref_path","snow/platform/native/Core.hx",59,0x31f01b37)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_package,"_package")
	HX_STACK_ARG(_appname,"_appname")
	HX_STACK_LINE(59)
	return ::snow::platform::native::Core_obj::snow_pref_path(_package,_appname);
}


Dynamic Core_obj::snow_init;

Dynamic Core_obj::snow_shutdown;

Dynamic Core_obj::snow_timestamp;

Dynamic Core_obj::snow_app_path;

Dynamic Core_obj::snow_pref_path;


Core_obj::Core_obj()
{
}

Dynamic Core_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"shutdown") ) { return shutdown_dyn(); }
		if (HX_FIELD_EQ(inName,"app_path") ) { return app_path_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"snow_init") ) { return snow_init; }
		if (HX_FIELD_EQ(inName,"timestamp") ) { return timestamp_dyn(); }
		if (HX_FIELD_EQ(inName,"pref_path") ) { return pref_path_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"snow_shutdown") ) { return snow_shutdown; }
		if (HX_FIELD_EQ(inName,"snow_app_path") ) { return snow_app_path; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"snow_timestamp") ) { return snow_timestamp; }
		if (HX_FIELD_EQ(inName,"snow_pref_path") ) { return snow_pref_path; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"start_timestamp") ) { return start_timestamp; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Core_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"snow_init") ) { snow_init=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"snow_shutdown") ) { snow_shutdown=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"snow_app_path") ) { snow_app_path=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"snow_timestamp") ) { snow_timestamp=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"snow_pref_path") ) { snow_pref_path=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"start_timestamp") ) { start_timestamp=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Core_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("start_timestamp"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("snow_init"),
	HX_CSTRING("snow_shutdown"),
	HX_CSTRING("snow_timestamp"),
	HX_CSTRING("snow_app_path"),
	HX_CSTRING("snow_pref_path"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(Core_obj,start_timestamp),HX_CSTRING("start_timestamp")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("start_timestamp"),
	HX_CSTRING("init"),
	HX_CSTRING("shutdown"),
	HX_CSTRING("timestamp"),
	HX_CSTRING("app_path"),
	HX_CSTRING("pref_path"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Core_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Core_obj::snow_init,"snow_init");
	HX_MARK_MEMBER_NAME(Core_obj::snow_shutdown,"snow_shutdown");
	HX_MARK_MEMBER_NAME(Core_obj::snow_timestamp,"snow_timestamp");
	HX_MARK_MEMBER_NAME(Core_obj::snow_app_path,"snow_app_path");
	HX_MARK_MEMBER_NAME(Core_obj::snow_pref_path,"snow_pref_path");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Core_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Core_obj::snow_init,"snow_init");
	HX_VISIT_MEMBER_NAME(Core_obj::snow_shutdown,"snow_shutdown");
	HX_VISIT_MEMBER_NAME(Core_obj::snow_timestamp,"snow_timestamp");
	HX_VISIT_MEMBER_NAME(Core_obj::snow_app_path,"snow_app_path");
	HX_VISIT_MEMBER_NAME(Core_obj::snow_pref_path,"snow_pref_path");
};

#endif

Class Core_obj::__mClass;

void Core_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("snow.platform.native.Core"), hx::TCanCast< Core_obj> ,sStaticFields,sMemberFields,
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

void Core_obj::__boot()
{
	snow_init= ::snow::utils::Libs_obj::load(HX_CSTRING("snow"),HX_CSTRING("snow_init"),(int)2);
	snow_shutdown= ::snow::utils::Libs_obj::load(HX_CSTRING("snow"),HX_CSTRING("snow_shutdown"),(int)0);
	snow_timestamp= ::snow::utils::Libs_obj::load(HX_CSTRING("snow"),HX_CSTRING("snow_timestamp"),(int)0);
	snow_app_path= ::snow::utils::Libs_obj::load(HX_CSTRING("snow"),HX_CSTRING("snow_app_path"),(int)0);
	snow_pref_path= ::snow::utils::Libs_obj::load(HX_CSTRING("snow"),HX_CSTRING("snow_pref_path"),(int)2);
}

} // end namespace snow
} // end namespace platform
} // end namespace native
