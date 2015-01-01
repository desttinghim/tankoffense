#include <hxcpp.h>

#ifndef INCLUDED_snow_Snow
#include <snow/Snow.h>
#endif
#ifndef INCLUDED_snow_platform_native_window_WindowSystem
#include <snow/platform/native/window/WindowSystem.h>
#endif
#ifndef INCLUDED_snow_platform_native_window_sdl_WindowSystem
#include <snow/platform/native/window/sdl/WindowSystem.h>
#endif
#ifndef INCLUDED_snow_utils_AbstractClass
#include <snow/utils/AbstractClass.h>
#endif
#ifndef INCLUDED_snow_window_WindowSystemBinding
#include <snow/window/WindowSystemBinding.h>
#endif
#ifndef INCLUDED_snow_window_Windowing
#include <snow/window/Windowing.h>
#endif
namespace snow{
namespace platform{
namespace native{
namespace window{
namespace sdl{

Void WindowSystem_obj::__construct(::snow::window::Windowing _manager,::snow::Snow _lib)
{
HX_STACK_FRAME("snow.platform.native.window.sdl.WindowSystem","new",0x525304fb,"snow.platform.native.window.sdl.WindowSystem.new","snow/platform/native/window/sdl/WindowSystem.hx",11,0x918a69f4)
HX_STACK_THIS(this)
HX_STACK_ARG(_manager,"_manager")
HX_STACK_ARG(_lib,"_lib")
{
	HX_STACK_LINE(11)
	super::__construct(_manager,_lib);
}
;
	return null();
}

//WindowSystem_obj::~WindowSystem_obj() { }

Dynamic WindowSystem_obj::__CreateEmpty() { return  new WindowSystem_obj; }
hx::ObjectPtr< WindowSystem_obj > WindowSystem_obj::__new(::snow::window::Windowing _manager,::snow::Snow _lib)
{  hx::ObjectPtr< WindowSystem_obj > result = new WindowSystem_obj();
	result->__construct(_manager,_lib);
	return result;}

Dynamic WindowSystem_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< WindowSystem_obj > result = new WindowSystem_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}


WindowSystem_obj::WindowSystem_obj()
{
}

Dynamic WindowSystem_obj::__Field(const ::String &inName,bool inCallProp)
{
	return super::__Field(inName,inCallProp);
}

Dynamic WindowSystem_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void WindowSystem_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(WindowSystem_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(WindowSystem_obj::__mClass,"__mClass");
};

#endif

Class WindowSystem_obj::__mClass;

void WindowSystem_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("snow.platform.native.window.sdl.WindowSystem"), hx::TCanCast< WindowSystem_obj> ,sStaticFields,sMemberFields,
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

void WindowSystem_obj::__boot()
{
}

} // end namespace snow
} // end namespace platform
} // end namespace native
} // end namespace window
} // end namespace sdl
