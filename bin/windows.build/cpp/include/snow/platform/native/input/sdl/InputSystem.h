#ifndef INCLUDED_snow_platform_native_input_sdl_InputSystem
#define INCLUDED_snow_platform_native_input_sdl_InputSystem

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <snow/platform/native/input/InputSystem.h>
HX_DECLARE_CLASS1(snow,Snow)
HX_DECLARE_CLASS2(snow,input,Input)
HX_DECLARE_CLASS2(snow,input,InputSystemBinding)
HX_DECLARE_CLASS4(snow,platform,native,input,InputSystem)
HX_DECLARE_CLASS5(snow,platform,native,input,sdl,InputSystem)
HX_DECLARE_CLASS2(snow,utils,AbstractClass)
namespace snow{
namespace platform{
namespace native{
namespace input{
namespace sdl{


class HXCPP_CLASS_ATTRIBUTES  InputSystem_obj : public ::snow::platform::native::input::InputSystem_obj{
	public:
		typedef ::snow::platform::native::input::InputSystem_obj super;
		typedef InputSystem_obj OBJ_;
		InputSystem_obj();
		Void __construct(::snow::input::Input _manager,::snow::Snow _lib);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< InputSystem_obj > __new(::snow::input::Input _manager,::snow::Snow _lib);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~InputSystem_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("InputSystem"); }

		virtual Void init( );

		virtual Void process( );

		virtual Void destroy( );

		virtual Dynamic mod_state_from_event( Dynamic event);
		Dynamic mod_state_from_event_dyn();

		virtual Void on_event( Dynamic _event);

};

} // end namespace snow
} // end namespace platform
} // end namespace native
} // end namespace input
} // end namespace sdl

#endif /* INCLUDED_snow_platform_native_input_sdl_InputSystem */ 
