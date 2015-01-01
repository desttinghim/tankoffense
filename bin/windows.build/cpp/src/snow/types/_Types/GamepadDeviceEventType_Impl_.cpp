#include <hxcpp.h>

#ifndef INCLUDED_snow_types__Types_GamepadDeviceEventType_Impl_
#include <snow/types/_Types/GamepadDeviceEventType_Impl_.h>
#endif
namespace snow{
namespace types{
namespace _Types{

Void GamepadDeviceEventType_Impl__obj::__construct()
{
	return null();
}

//GamepadDeviceEventType_Impl__obj::~GamepadDeviceEventType_Impl__obj() { }

Dynamic GamepadDeviceEventType_Impl__obj::__CreateEmpty() { return  new GamepadDeviceEventType_Impl__obj; }
hx::ObjectPtr< GamepadDeviceEventType_Impl__obj > GamepadDeviceEventType_Impl__obj::__new()
{  hx::ObjectPtr< GamepadDeviceEventType_Impl__obj > result = new GamepadDeviceEventType_Impl__obj();
	result->__construct();
	return result;}

Dynamic GamepadDeviceEventType_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< GamepadDeviceEventType_Impl__obj > result = new GamepadDeviceEventType_Impl__obj();
	result->__construct();
	return result;}

int GamepadDeviceEventType_Impl__obj::unknown;

int GamepadDeviceEventType_Impl__obj::device_added;

int GamepadDeviceEventType_Impl__obj::device_removed;

int GamepadDeviceEventType_Impl__obj::device_remapped;


GamepadDeviceEventType_Impl__obj::GamepadDeviceEventType_Impl__obj()
{
}

Dynamic GamepadDeviceEventType_Impl__obj::__Field(const ::String &inName,bool inCallProp)
{
	return super::__Field(inName,inCallProp);
}

Dynamic GamepadDeviceEventType_Impl__obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void GamepadDeviceEventType_Impl__obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("unknown"),
	HX_CSTRING("device_added"),
	HX_CSTRING("device_removed"),
	HX_CSTRING("device_remapped"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GamepadDeviceEventType_Impl__obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(GamepadDeviceEventType_Impl__obj::unknown,"unknown");
	HX_MARK_MEMBER_NAME(GamepadDeviceEventType_Impl__obj::device_added,"device_added");
	HX_MARK_MEMBER_NAME(GamepadDeviceEventType_Impl__obj::device_removed,"device_removed");
	HX_MARK_MEMBER_NAME(GamepadDeviceEventType_Impl__obj::device_remapped,"device_remapped");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GamepadDeviceEventType_Impl__obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(GamepadDeviceEventType_Impl__obj::unknown,"unknown");
	HX_VISIT_MEMBER_NAME(GamepadDeviceEventType_Impl__obj::device_added,"device_added");
	HX_VISIT_MEMBER_NAME(GamepadDeviceEventType_Impl__obj::device_removed,"device_removed");
	HX_VISIT_MEMBER_NAME(GamepadDeviceEventType_Impl__obj::device_remapped,"device_remapped");
};

#endif

Class GamepadDeviceEventType_Impl__obj::__mClass;

void GamepadDeviceEventType_Impl__obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("snow.types._Types.GamepadDeviceEventType_Impl_"), hx::TCanCast< GamepadDeviceEventType_Impl__obj> ,sStaticFields,sMemberFields,
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

void GamepadDeviceEventType_Impl__obj::__boot()
{
	unknown= (int)0;
	device_added= (int)1;
	device_removed= (int)2;
	device_remapped= (int)3;
}

} // end namespace snow
} // end namespace types
} // end namespace _Types
