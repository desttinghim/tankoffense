#include <hxcpp.h>

#ifndef INCLUDED_snow_types__Types_WindowEventType_Impl_
#include <snow/types/_Types/WindowEventType_Impl_.h>
#endif
namespace snow{
namespace types{
namespace _Types{

Void WindowEventType_Impl__obj::__construct()
{
	return null();
}

//WindowEventType_Impl__obj::~WindowEventType_Impl__obj() { }

Dynamic WindowEventType_Impl__obj::__CreateEmpty() { return  new WindowEventType_Impl__obj; }
hx::ObjectPtr< WindowEventType_Impl__obj > WindowEventType_Impl__obj::__new()
{  hx::ObjectPtr< WindowEventType_Impl__obj > result = new WindowEventType_Impl__obj();
	result->__construct();
	return result;}

Dynamic WindowEventType_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< WindowEventType_Impl__obj > result = new WindowEventType_Impl__obj();
	result->__construct();
	return result;}

int WindowEventType_Impl__obj::unknown;

int WindowEventType_Impl__obj::created;

int WindowEventType_Impl__obj::shown;

int WindowEventType_Impl__obj::hidden;

int WindowEventType_Impl__obj::exposed;

int WindowEventType_Impl__obj::moved;

int WindowEventType_Impl__obj::resized;

int WindowEventType_Impl__obj::size_changed;

int WindowEventType_Impl__obj::minimized;

int WindowEventType_Impl__obj::maximized;

int WindowEventType_Impl__obj::restored;

int WindowEventType_Impl__obj::enter;

int WindowEventType_Impl__obj::leave;

int WindowEventType_Impl__obj::focus_gained;

int WindowEventType_Impl__obj::focus_lost;

int WindowEventType_Impl__obj::close;

int WindowEventType_Impl__obj::destroy;


WindowEventType_Impl__obj::WindowEventType_Impl__obj()
{
}

Dynamic WindowEventType_Impl__obj::__Field(const ::String &inName,bool inCallProp)
{
	return super::__Field(inName,inCallProp);
}

Dynamic WindowEventType_Impl__obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void WindowEventType_Impl__obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("unknown"),
	HX_CSTRING("created"),
	HX_CSTRING("shown"),
	HX_CSTRING("hidden"),
	HX_CSTRING("exposed"),
	HX_CSTRING("moved"),
	HX_CSTRING("resized"),
	HX_CSTRING("size_changed"),
	HX_CSTRING("minimized"),
	HX_CSTRING("maximized"),
	HX_CSTRING("restored"),
	HX_CSTRING("enter"),
	HX_CSTRING("leave"),
	HX_CSTRING("focus_gained"),
	HX_CSTRING("focus_lost"),
	HX_CSTRING("close"),
	HX_CSTRING("destroy"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(WindowEventType_Impl__obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(WindowEventType_Impl__obj::unknown,"unknown");
	HX_MARK_MEMBER_NAME(WindowEventType_Impl__obj::created,"created");
	HX_MARK_MEMBER_NAME(WindowEventType_Impl__obj::shown,"shown");
	HX_MARK_MEMBER_NAME(WindowEventType_Impl__obj::hidden,"hidden");
	HX_MARK_MEMBER_NAME(WindowEventType_Impl__obj::exposed,"exposed");
	HX_MARK_MEMBER_NAME(WindowEventType_Impl__obj::moved,"moved");
	HX_MARK_MEMBER_NAME(WindowEventType_Impl__obj::resized,"resized");
	HX_MARK_MEMBER_NAME(WindowEventType_Impl__obj::size_changed,"size_changed");
	HX_MARK_MEMBER_NAME(WindowEventType_Impl__obj::minimized,"minimized");
	HX_MARK_MEMBER_NAME(WindowEventType_Impl__obj::maximized,"maximized");
	HX_MARK_MEMBER_NAME(WindowEventType_Impl__obj::restored,"restored");
	HX_MARK_MEMBER_NAME(WindowEventType_Impl__obj::enter,"enter");
	HX_MARK_MEMBER_NAME(WindowEventType_Impl__obj::leave,"leave");
	HX_MARK_MEMBER_NAME(WindowEventType_Impl__obj::focus_gained,"focus_gained");
	HX_MARK_MEMBER_NAME(WindowEventType_Impl__obj::focus_lost,"focus_lost");
	HX_MARK_MEMBER_NAME(WindowEventType_Impl__obj::close,"close");
	HX_MARK_MEMBER_NAME(WindowEventType_Impl__obj::destroy,"destroy");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(WindowEventType_Impl__obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(WindowEventType_Impl__obj::unknown,"unknown");
	HX_VISIT_MEMBER_NAME(WindowEventType_Impl__obj::created,"created");
	HX_VISIT_MEMBER_NAME(WindowEventType_Impl__obj::shown,"shown");
	HX_VISIT_MEMBER_NAME(WindowEventType_Impl__obj::hidden,"hidden");
	HX_VISIT_MEMBER_NAME(WindowEventType_Impl__obj::exposed,"exposed");
	HX_VISIT_MEMBER_NAME(WindowEventType_Impl__obj::moved,"moved");
	HX_VISIT_MEMBER_NAME(WindowEventType_Impl__obj::resized,"resized");
	HX_VISIT_MEMBER_NAME(WindowEventType_Impl__obj::size_changed,"size_changed");
	HX_VISIT_MEMBER_NAME(WindowEventType_Impl__obj::minimized,"minimized");
	HX_VISIT_MEMBER_NAME(WindowEventType_Impl__obj::maximized,"maximized");
	HX_VISIT_MEMBER_NAME(WindowEventType_Impl__obj::restored,"restored");
	HX_VISIT_MEMBER_NAME(WindowEventType_Impl__obj::enter,"enter");
	HX_VISIT_MEMBER_NAME(WindowEventType_Impl__obj::leave,"leave");
	HX_VISIT_MEMBER_NAME(WindowEventType_Impl__obj::focus_gained,"focus_gained");
	HX_VISIT_MEMBER_NAME(WindowEventType_Impl__obj::focus_lost,"focus_lost");
	HX_VISIT_MEMBER_NAME(WindowEventType_Impl__obj::close,"close");
	HX_VISIT_MEMBER_NAME(WindowEventType_Impl__obj::destroy,"destroy");
};

#endif

Class WindowEventType_Impl__obj::__mClass;

void WindowEventType_Impl__obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("snow.types._Types.WindowEventType_Impl_"), hx::TCanCast< WindowEventType_Impl__obj> ,sStaticFields,sMemberFields,
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

void WindowEventType_Impl__obj::__boot()
{
	unknown= (int)0;
	created= (int)1;
	shown= (int)2;
	hidden= (int)3;
	exposed= (int)4;
	moved= (int)5;
	resized= (int)6;
	size_changed= (int)7;
	minimized= (int)8;
	maximized= (int)9;
	restored= (int)10;
	enter= (int)11;
	leave= (int)12;
	focus_gained= (int)13;
	focus_lost= (int)14;
	close= (int)15;
	destroy= (int)16;
}

} // end namespace snow
} // end namespace types
} // end namespace _Types
