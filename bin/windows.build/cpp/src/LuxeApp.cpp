#include <hxcpp.h>

#ifndef INCLUDED_LuxeApp
#include <LuxeApp.h>
#endif
#ifndef INCLUDED_Main
#include <Main.h>
#endif
#ifndef INCLUDED_luxe_Core
#include <luxe/Core.h>
#endif
#ifndef INCLUDED_luxe_Emitter
#include <luxe/Emitter.h>
#endif
#ifndef INCLUDED_luxe_Game
#include <luxe/Game.h>
#endif
#ifndef INCLUDED_snow_App
#include <snow/App.h>
#endif
#ifndef INCLUDED_snow_Snow
#include <snow/Snow.h>
#endif

Void LuxeApp_obj::__construct()
{
	return null();
}

//LuxeApp_obj::~LuxeApp_obj() { }

Dynamic LuxeApp_obj::__CreateEmpty() { return  new LuxeApp_obj; }
hx::ObjectPtr< LuxeApp_obj > LuxeApp_obj::__new()
{  hx::ObjectPtr< LuxeApp_obj > result = new LuxeApp_obj();
	result->__construct();
	return result;}

Dynamic LuxeApp_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< LuxeApp_obj > result = new LuxeApp_obj();
	result->__construct();
	return result;}

::Main LuxeApp_obj::_game;

::luxe::Core LuxeApp_obj::_core;

::snow::Snow LuxeApp_obj::_snow;

Void LuxeApp_obj::main( ){
{
		HX_STACK_FRAME("LuxeApp","main",0x0a926d1c,"LuxeApp.main","LuxeApp.hx",13,0x7a4c8133)
		HX_STACK_LINE(16)
		::snow::Snow _g = ::snow::Snow_obj::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(16)
		::LuxeApp_obj::_snow = _g;
		HX_STACK_LINE(18)
		::Main _g1 = ::Main_obj::__new();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(18)
		::LuxeApp_obj::_game = _g1;
		HX_STACK_LINE(20)
		::luxe::Core _g2 = ::luxe::Core_obj::__new(::LuxeApp_obj::_game);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(20)
		::LuxeApp_obj::_core = _g2;
		struct _Function_1_1{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","LuxeApp.hx",22,0x7a4c8133)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("has_loop") , true,false);
					__result->Add(HX_CSTRING("config_custom_assets") , false,false);
					__result->Add(HX_CSTRING("config_custom_runtime") , false,false);
					__result->Add(HX_CSTRING("config_runtime_path") , HX_CSTRING("config.json"),false);
					__result->Add(HX_CSTRING("config_assets_path") , HX_CSTRING("manifest"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(22)
		Dynamic _snow_config = _Function_1_1::Block();		HX_STACK_VAR(_snow_config,"_snow_config");
		HX_STACK_LINE(31)
		::LuxeApp_obj::_snow->init(_snow_config,::LuxeApp_obj::_core);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(LuxeApp_obj,main,(void))


LuxeApp_obj::LuxeApp_obj()
{
}

Dynamic LuxeApp_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"main") ) { return main_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_game") ) { return _game; }
		if (HX_FIELD_EQ(inName,"_core") ) { return _core; }
		if (HX_FIELD_EQ(inName,"_snow") ) { return _snow; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic LuxeApp_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_game") ) { _game=inValue.Cast< ::Main >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_core") ) { _core=inValue.Cast< ::luxe::Core >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_snow") ) { _snow=inValue.Cast< ::snow::Snow >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void LuxeApp_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("_game"),
	HX_CSTRING("_core"),
	HX_CSTRING("_snow"),
	HX_CSTRING("main"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(LuxeApp_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(LuxeApp_obj::_game,"_game");
	HX_MARK_MEMBER_NAME(LuxeApp_obj::_core,"_core");
	HX_MARK_MEMBER_NAME(LuxeApp_obj::_snow,"_snow");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(LuxeApp_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(LuxeApp_obj::_game,"_game");
	HX_VISIT_MEMBER_NAME(LuxeApp_obj::_core,"_core");
	HX_VISIT_MEMBER_NAME(LuxeApp_obj::_snow,"_snow");
};

#endif

Class LuxeApp_obj::__mClass;

void LuxeApp_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("LuxeApp"), hx::TCanCast< LuxeApp_obj> ,sStaticFields,sMemberFields,
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

void LuxeApp_obj::__boot()
{
}

