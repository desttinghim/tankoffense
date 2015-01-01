#ifndef INCLUDED_snow_platform_native_input_InputSystem
#define INCLUDED_snow_platform_native_input_InputSystem

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <snow/input/InputSystemBinding.h>
HX_DECLARE_CLASS1(snow,Snow)
HX_DECLARE_CLASS2(snow,input,Input)
HX_DECLARE_CLASS2(snow,input,InputSystemBinding)
HX_DECLARE_CLASS4(snow,platform,native,input,InputSystem)
HX_DECLARE_CLASS2(snow,utils,AbstractClass)
HX_DECLARE_CLASS2(snow,window,Window)
namespace snow{
namespace platform{
namespace native{
namespace input{


class HXCPP_CLASS_ATTRIBUTES  InputSystem_obj : public ::snow::input::InputSystemBinding_obj{
	public:
		typedef ::snow::input::InputSystemBinding_obj super;
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

		virtual Void listen( ::snow::window::Window window);

		virtual Void unlisten( ::snow::window::Window window);

		virtual Void on_event( Dynamic _event);

		virtual Void text_input_start( );

		virtual Void text_input_stop( );

		virtual Void text_input_rect( int x,int y,int w,int h);

		virtual Void gamepad_add( int id);

		virtual Void gamepad_remove( int id);

		static Dynamic snow_input_text_start;
		static Dynamic &snow_input_text_start_dyn() { return snow_input_text_start;}
		static Dynamic snow_input_text_stop;
		static Dynamic &snow_input_text_stop_dyn() { return snow_input_text_stop;}
		static Dynamic snow_input_text_rect;
		static Dynamic &snow_input_text_rect_dyn() { return snow_input_text_rect;}
		static Dynamic snow_gamepad_open;
		static Dynamic &snow_gamepad_open_dyn() { return snow_gamepad_open;}
		static Dynamic snow_gamepad_close;
		static Dynamic &snow_gamepad_close_dyn() { return snow_gamepad_close;}
};

} // end namespace snow
} // end namespace platform
} // end namespace native
} // end namespace input

#endif /* INCLUDED_snow_platform_native_input_InputSystem */ 
