#ifndef INCLUDED_snow_platform_native_window_sdl_WindowSystem
#define INCLUDED_snow_platform_native_window_sdl_WindowSystem

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <snow/platform/native/window/WindowSystem.h>
HX_DECLARE_CLASS1(snow,Snow)
HX_DECLARE_CLASS4(snow,platform,native,window,WindowSystem)
HX_DECLARE_CLASS5(snow,platform,native,window,sdl,WindowSystem)
HX_DECLARE_CLASS2(snow,utils,AbstractClass)
HX_DECLARE_CLASS2(snow,window,WindowSystemBinding)
HX_DECLARE_CLASS2(snow,window,Windowing)
namespace snow{
namespace platform{
namespace native{
namespace window{
namespace sdl{


class HXCPP_CLASS_ATTRIBUTES  WindowSystem_obj : public ::snow::platform::native::window::WindowSystem_obj{
	public:
		typedef ::snow::platform::native::window::WindowSystem_obj super;
		typedef WindowSystem_obj OBJ_;
		WindowSystem_obj();
		Void __construct(::snow::window::Windowing _manager,::snow::Snow _lib);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< WindowSystem_obj > __new(::snow::window::Windowing _manager,::snow::Snow _lib);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~WindowSystem_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("WindowSystem"); }

};

} // end namespace snow
} // end namespace platform
} // end namespace native
} // end namespace window
} // end namespace sdl

#endif /* INCLUDED_snow_platform_native_window_sdl_WindowSystem */ 
