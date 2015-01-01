#ifndef INCLUDED_luxe_Input
#define INCLUDED_luxe_Input

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS1(luxe,Core)
HX_DECLARE_CLASS1(luxe,Input)
HX_DECLARE_CLASS1(snow,App)
namespace luxe{


class HXCPP_CLASS_ATTRIBUTES  Input_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Input_obj OBJ_;
		Input_obj();
		Void __construct(::luxe::Core _core);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Input_obj > __new(::luxe::Core _core);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Input_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Input"); }

		::luxe::Core core;
		::haxe::ds::StringMap key_bindings;
		::haxe::ds::StringMap mouse_bindings;
		::haxe::ds::StringMap _named_input_released;
		::haxe::ds::StringMap _named_input_pressed;
		::haxe::ds::StringMap _named_input_down;
		virtual Void init( );
		Dynamic init_dyn();

		virtual Void destroy( );
		Dynamic destroy_dyn();

		virtual Void process( );
		Dynamic process_dyn();

		virtual bool inputpressed( ::String _event);
		Dynamic inputpressed_dyn();

		virtual bool inputreleased( ::String _event);
		Dynamic inputreleased_dyn();

		virtual bool inputdown( ::String _event);
		Dynamic inputdown_dyn();

		virtual bool keypressed( int _code);
		Dynamic keypressed_dyn();

		virtual bool keyreleased( int _code);
		Dynamic keyreleased_dyn();

		virtual bool keydown( int _code);
		Dynamic keydown_dyn();

		virtual bool scanpressed( int _code);
		Dynamic scanpressed_dyn();

		virtual bool scanreleased( int _code);
		Dynamic scanreleased_dyn();

		virtual bool scandown( int _code);
		Dynamic scandown_dyn();

		virtual bool mousepressed( int _button);
		Dynamic mousepressed_dyn();

		virtual bool mousereleased( int _button);
		Dynamic mousereleased_dyn();

		virtual bool mousedown( int _button);
		Dynamic mousedown_dyn();

		virtual bool gamepadpressed( int _gamepad,int _button);
		Dynamic gamepadpressed_dyn();

		virtual bool gamepadreleased( int _gamepad,int _button);
		Dynamic gamepadreleased_dyn();

		virtual bool gamepaddown( int _gamepad,int _button);
		Dynamic gamepaddown_dyn();

		virtual Float gamepadaxis( int _gamepad,int _axis);
		Dynamic gamepadaxis_dyn();

		virtual Void bind_key( ::String _name,int _key);
		Dynamic bind_key_dyn();

		virtual Void bind_mouse( ::String _name,int _button);
		Dynamic bind_mouse_dyn();

		virtual Void check_named_keys( Dynamic e,hx::Null< bool >  _down);
		Dynamic check_named_keys_dyn();

		virtual Void check_named_mouse( Dynamic e,hx::Null< bool >  _down);
		Dynamic check_named_mouse_dyn();

};

} // end namespace luxe

#endif /* INCLUDED_luxe_Input */ 
