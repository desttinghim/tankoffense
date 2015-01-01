#ifndef INCLUDED_snow_input_InputSystemBinding
#define INCLUDED_snow_input_InputSystemBinding

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <snow/utils/AbstractClass.h>
HX_DECLARE_CLASS1(snow,Snow)
HX_DECLARE_CLASS2(snow,input,Input)
HX_DECLARE_CLASS2(snow,input,InputSystemBinding)
HX_DECLARE_CLASS2(snow,utils,AbstractClass)
HX_DECLARE_CLASS2(snow,window,Window)
namespace snow{
namespace input{


class HXCPP_CLASS_ATTRIBUTES  InputSystemBinding_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef InputSystemBinding_obj OBJ_;
		InputSystemBinding_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< InputSystemBinding_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~InputSystemBinding_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		inline operator ::snow::utils::AbstractClass_obj *()
			{ return new ::snow::utils::AbstractClass_delegate_< InputSystemBinding_obj >(this); }
		hx::Object *__ToInterface(const hx::type_info &inType);
		::String __ToString() const { return HX_CSTRING("InputSystemBinding"); }

		::snow::input::Input manager;
		::snow::Snow lib;
		virtual Void init( );
		Dynamic init_dyn();

		virtual Void process( );
		Dynamic process_dyn();

		virtual Void destroy( );
		Dynamic destroy_dyn();

		virtual Void on_event( Dynamic _event);
		Dynamic on_event_dyn();

		virtual Void text_input_start( );
		Dynamic text_input_start_dyn();

		virtual Void text_input_stop( );
		Dynamic text_input_stop_dyn();

		virtual Void text_input_rect( int x,int y,int w,int h);
		Dynamic text_input_rect_dyn();

		virtual Void gamepad_add( int id);
		Dynamic gamepad_add_dyn();

		virtual Void gamepad_remove( int id);
		Dynamic gamepad_remove_dyn();

		virtual Void listen( ::snow::window::Window window);
		Dynamic listen_dyn();

		virtual Void unlisten( ::snow::window::Window window);
		Dynamic unlisten_dyn();

};

} // end namespace snow
} // end namespace input

#endif /* INCLUDED_snow_input_InputSystemBinding */ 
