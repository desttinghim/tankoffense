#include <hxcpp.h>

#ifndef INCLUDED_snow_Snow
#include <snow/Snow.h>
#endif
#ifndef INCLUDED_snow_input_Input
#include <snow/input/Input.h>
#endif
#ifndef INCLUDED_snow_input_InputSystemBinding
#include <snow/input/InputSystemBinding.h>
#endif
#ifndef INCLUDED_snow_platform_native_input_InputSystem
#include <snow/platform/native/input/InputSystem.h>
#endif
#ifndef INCLUDED_snow_platform_native_input_sdl_InputSystem
#include <snow/platform/native/input/sdl/InputSystem.h>
#endif
#ifndef INCLUDED_snow_utils_AbstractClass
#include <snow/utils/AbstractClass.h>
#endif
namespace snow{
namespace platform{
namespace native{
namespace input{
namespace sdl{

Void InputSystem_obj::__construct(::snow::input::Input _manager,::snow::Snow _lib)
{
HX_STACK_FRAME("snow.platform.native.input.sdl.InputSystem","new",0x915f4aad,"snow.platform.native.input.sdl.InputSystem.new","snow/platform/native/input/sdl/InputSystem.hx",8,0x01aafc86)
HX_STACK_THIS(this)
HX_STACK_ARG(_manager,"_manager")
HX_STACK_ARG(_lib,"_lib")
{
	HX_STACK_LINE(8)
	super::__construct(_manager,_lib);
}
;
	return null();
}

//InputSystem_obj::~InputSystem_obj() { }

Dynamic InputSystem_obj::__CreateEmpty() { return  new InputSystem_obj; }
hx::ObjectPtr< InputSystem_obj > InputSystem_obj::__new(::snow::input::Input _manager,::snow::Snow _lib)
{  hx::ObjectPtr< InputSystem_obj > result = new InputSystem_obj();
	result->__construct(_manager,_lib);
	return result;}

Dynamic InputSystem_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< InputSystem_obj > result = new InputSystem_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

Void InputSystem_obj::init( ){
{
		HX_STACK_FRAME("snow.platform.native.input.sdl.InputSystem","init",0x9ebac423,"snow.platform.native.input.sdl.InputSystem.init","snow/platform/native/input/sdl/InputSystem.hx",11,0x01aafc86)
		HX_STACK_THIS(this)
	}
return null();
}


Void InputSystem_obj::process( ){
{
		HX_STACK_FRAME("snow.platform.native.input.sdl.InputSystem","process",0x9c75c73c,"snow.platform.native.input.sdl.InputSystem.process","snow/platform/native/input/sdl/InputSystem.hx",14,0x01aafc86)
		HX_STACK_THIS(this)
	}
return null();
}


Void InputSystem_obj::destroy( ){
{
		HX_STACK_FRAME("snow.platform.native.input.sdl.InputSystem","destroy",0xcfb151c7,"snow.platform.native.input.sdl.InputSystem.destroy","snow/platform/native/input/sdl/InputSystem.hx",17,0x01aafc86)
		HX_STACK_THIS(this)
	}
return null();
}


Dynamic InputSystem_obj::mod_state_from_event( Dynamic event){
	HX_STACK_FRAME("snow.platform.native.input.sdl.InputSystem","mod_state_from_event",0xea7c3b63,"snow.platform.native.input.sdl.InputSystem.mod_state_from_event","snow/platform/native/input/sdl/InputSystem.hx",25,0x01aafc86)
	HX_STACK_THIS(this)
	HX_STACK_ARG(event,"event")
	HX_STACK_LINE(25)
	if (((bool((event->__Field(HX_CSTRING("event"),true)->__Field(HX_CSTRING("type"),true) == (int)769)) || bool((event->__Field(HX_CSTRING("event"),true)->__Field(HX_CSTRING("type"),true) == (int)768))))){
		HX_STACK_LINE(27)
		int mod_value = event->__Field(HX_CSTRING("event"),true)->__Field(HX_CSTRING("keysym"),true)->__Field(HX_CSTRING("mod"),true);		HX_STACK_VAR(mod_value,"mod_value");
		struct _Function_2_1{
			inline static Dynamic Block( int &mod_value){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","snow/platform/native/input/sdl/InputSystem.hx",29,0x01aafc86)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("none") , (mod_value == (int)0),false);
					__result->Add(HX_CSTRING("lshift") , (mod_value == (int)1),false);
					__result->Add(HX_CSTRING("rshift") , (mod_value == (int)2),false);
					__result->Add(HX_CSTRING("lctrl") , (mod_value == (int)64),false);
					__result->Add(HX_CSTRING("rctrl") , (mod_value == (int)128),false);
					__result->Add(HX_CSTRING("lalt") , (mod_value == (int)256),false);
					__result->Add(HX_CSTRING("ralt") , (mod_value == (int)512),false);
					__result->Add(HX_CSTRING("lmeta") , (mod_value == (int)1024),false);
					__result->Add(HX_CSTRING("rmeta") , (mod_value == (int)2048),false);
					__result->Add(HX_CSTRING("num") , (mod_value == (int)4096),false);
					__result->Add(HX_CSTRING("caps") , (mod_value == (int)8192),false);
					__result->Add(HX_CSTRING("mode") , (mod_value == (int)16384),false);
					__result->Add(HX_CSTRING("ctrl") , (bool((mod_value == (int)64)) || bool((mod_value == (int)128))),false);
					__result->Add(HX_CSTRING("shift") , (bool((mod_value == (int)1)) || bool((mod_value == (int)2))),false);
					__result->Add(HX_CSTRING("alt") , (bool((mod_value == (int)256)) || bool((mod_value == (int)512))),false);
					__result->Add(HX_CSTRING("meta") , (bool((mod_value == (int)1024)) || bool((mod_value == (int)2048))),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(29)
		return _Function_2_1::Block(mod_value);
	}
	else{
		struct _Function_2_1{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","snow/platform/native/input/sdl/InputSystem.hx",56,0x01aafc86)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("none") , true,false);
					__result->Add(HX_CSTRING("lshift") , false,false);
					__result->Add(HX_CSTRING("rshift") , false,false);
					__result->Add(HX_CSTRING("lctrl") , false,false);
					__result->Add(HX_CSTRING("rctrl") , false,false);
					__result->Add(HX_CSTRING("lalt") , false,false);
					__result->Add(HX_CSTRING("ralt") , false,false);
					__result->Add(HX_CSTRING("lmeta") , false,false);
					__result->Add(HX_CSTRING("rmeta") , false,false);
					__result->Add(HX_CSTRING("num") , false,false);
					__result->Add(HX_CSTRING("caps") , false,false);
					__result->Add(HX_CSTRING("mode") , false,false);
					__result->Add(HX_CSTRING("ctrl") , false,false);
					__result->Add(HX_CSTRING("shift") , false,false);
					__result->Add(HX_CSTRING("alt") , false,false);
					__result->Add(HX_CSTRING("meta") , false,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(56)
		return _Function_2_1::Block();
	}
	HX_STACK_LINE(25)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(InputSystem_obj,mod_state_from_event,return )

Void InputSystem_obj::on_event( Dynamic _event){
{
		HX_STACK_FRAME("snow.platform.native.input.sdl.InputSystem","on_event",0x3759a04d,"snow.platform.native.input.sdl.InputSystem.on_event","snow/platform/native/input/sdl/InputSystem.hx",70,0x01aafc86)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_event,"_event")
		HX_STACK_LINE(72)
		this->super::on_event(_event);
		HX_STACK_LINE(76)
		if (((_event->__Field(HX_CSTRING("type"),true) == (int)1))){
			HX_STACK_LINE(78)
			Dynamic _key_event = _event->__Field(HX_CSTRING("event"),true);		HX_STACK_VAR(_key_event,"_key_event");
			HX_STACK_LINE(80)
			if (((_event->__Field(HX_CSTRING("event"),true)->__Field(HX_CSTRING("type"),true) == (int)768))){
				HX_STACK_LINE(86)
				Dynamic _g = this->mod_state_from_event(_event);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(82)
				this->manager->dispatch_key_down_event(_key_event->__Field(HX_CSTRING("keysym"),true)->__Field(HX_CSTRING("sym"),true),_key_event->__Field(HX_CSTRING("keysym"),true)->__Field(HX_CSTRING("scancode"),true),_key_event->__Field(HX_CSTRING("repeat"),true),_g,_event->__Field(HX_CSTRING("timestamp"),true),_event->__Field(HX_CSTRING("window_id"),true));
			}
			else{
				HX_STACK_LINE(91)
				if (((_event->__Field(HX_CSTRING("event"),true)->__Field(HX_CSTRING("type"),true) == (int)769))){
					HX_STACK_LINE(97)
					Dynamic _g1 = this->mod_state_from_event(_event);		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(93)
					this->manager->dispatch_key_up_event(_key_event->__Field(HX_CSTRING("keysym"),true)->__Field(HX_CSTRING("sym"),true),_key_event->__Field(HX_CSTRING("keysym"),true)->__Field(HX_CSTRING("scancode"),true),_key_event->__Field(HX_CSTRING("repeat"),true),_g1,_event->__Field(HX_CSTRING("timestamp"),true),_event->__Field(HX_CSTRING("window_id"),true));
				}
				else{
					HX_STACK_LINE(102)
					if (((bool((_event->__Field(HX_CSTRING("event"),true)->__Field(HX_CSTRING("type"),true) == (int)770)) || bool((_event->__Field(HX_CSTRING("event"),true)->__Field(HX_CSTRING("type"),true) == (int)771))))){
						HX_STACK_LINE(104)
						this->manager->dispatch_text_event(_event->__Field(HX_CSTRING("event"),true)->__Field(HX_CSTRING("text"),true),(  (((_event->__Field(HX_CSTRING("event"),true)->__Field(HX_CSTRING("start"),true) == null()))) ? int((int)0) : int(_event->__Field(HX_CSTRING("event"),true)->__Field(HX_CSTRING("start"),true)) ),(  (((_event->__Field(HX_CSTRING("event"),true)->__Field(HX_CSTRING("length"),true) == null()))) ? int((int)0) : int(_event->__Field(HX_CSTRING("event"),true)->__Field(HX_CSTRING("length"),true)) ),(  (((_event->__Field(HX_CSTRING("event"),true)->__Field(HX_CSTRING("type"),true) == (int)770))) ? int((int)1) : int((int)2) ),_event->__Field(HX_CSTRING("timestamp"),true),_event->__Field(HX_CSTRING("window_id"),true));
					}
				}
			}
		}
		else{
			HX_STACK_LINE(117)
			if (((_event->__Field(HX_CSTRING("type"),true) == (int)3))){
				HX_STACK_LINE(119)
				int _state = _event->__Field(HX_CSTRING("event"),true)->__Field(HX_CSTRING("type"),true);		HX_STACK_VAR(_state,"_state");
				HX_STACK_LINE(125)
				if (((_state == (int)1792))){
					HX_STACK_LINE(127)
					this->manager->dispatch_touch_down_event(_event->__Field(HX_CSTRING("event"),true)->__Field(HX_CSTRING("x"),true),_event->__Field(HX_CSTRING("event"),true)->__Field(HX_CSTRING("y"),true),_event->__Field(HX_CSTRING("event"),true)->__Field(HX_CSTRING("finger_id"),true),_event->__Field(HX_CSTRING("timestamp"),true));
				}
				else{
					HX_STACK_LINE(134)
					if (((_state == (int)1793))){
						HX_STACK_LINE(136)
						this->manager->dispatch_touch_up_event(_event->__Field(HX_CSTRING("event"),true)->__Field(HX_CSTRING("x"),true),_event->__Field(HX_CSTRING("event"),true)->__Field(HX_CSTRING("y"),true),_event->__Field(HX_CSTRING("event"),true)->__Field(HX_CSTRING("finger_id"),true),_event->__Field(HX_CSTRING("timestamp"),true));
					}
					else{
						HX_STACK_LINE(143)
						if (((_state == (int)1794))){
							HX_STACK_LINE(145)
							this->manager->dispatch_touch_move_event(_event->__Field(HX_CSTRING("event"),true)->__Field(HX_CSTRING("x"),true),_event->__Field(HX_CSTRING("event"),true)->__Field(HX_CSTRING("y"),true),_event->__Field(HX_CSTRING("event"),true)->__Field(HX_CSTRING("dx"),true),_event->__Field(HX_CSTRING("event"),true)->__Field(HX_CSTRING("dy"),true),_event->__Field(HX_CSTRING("event"),true)->__Field(HX_CSTRING("finger_id"),true),_event->__Field(HX_CSTRING("timestamp"),true));
						}
					}
				}
			}
			else{
				HX_STACK_LINE(158)
				if (((_event->__Field(HX_CSTRING("type"),true) == (int)5))){
					HX_STACK_LINE(160)
					Dynamic _gamepad_event = _event->__Field(HX_CSTRING("event"),true);		HX_STACK_VAR(_gamepad_event,"_gamepad_event");
					HX_STACK_LINE(164)
					if (((_gamepad_event->__Field(HX_CSTRING("type"),true) == (int)1618))){
						HX_STACK_LINE(167)
						this->manager->dispatch_gamepad_button_up_event(_gamepad_event->__Field(HX_CSTRING("which"),true),_gamepad_event->__Field(HX_CSTRING("button"),true),(int)0,_event->__Field(HX_CSTRING("timestamp"),true));
					}
					else{
						HX_STACK_LINE(174)
						if (((_gamepad_event->__Field(HX_CSTRING("type"),true) == (int)1617))){
							HX_STACK_LINE(177)
							this->manager->dispatch_gamepad_button_down_event(_gamepad_event->__Field(HX_CSTRING("which"),true),_gamepad_event->__Field(HX_CSTRING("button"),true),(int)1,_event->__Field(HX_CSTRING("timestamp"),true));
						}
						else{
							HX_STACK_LINE(186)
							if (((_gamepad_event->__Field(HX_CSTRING("type"),true) == (int)1616))){
								HX_STACK_LINE(188)
								this->manager->dispatch_gamepad_axis_event(_gamepad_event->__Field(HX_CSTRING("which"),true),_gamepad_event->__Field(HX_CSTRING("axis"),true),_gamepad_event->__Field(HX_CSTRING("value"),true),_event->__Field(HX_CSTRING("timestamp"),true));
							}
							else{
								HX_STACK_LINE(199)
								int _type = (int)0;		HX_STACK_VAR(_type,"_type");
								HX_STACK_LINE(201)
								if (((_gamepad_event->__Field(HX_CSTRING("type"),true) == (int)1619))){
									HX_STACK_LINE(203)
									this->manager->on_gamepad_added(_gamepad_event);
									HX_STACK_LINE(204)
									_type = (int)1;
								}
								else{
									HX_STACK_LINE(206)
									if (((_gamepad_event->__Field(HX_CSTRING("type"),true) == (int)1620))){
										HX_STACK_LINE(208)
										this->manager->on_gamepad_removed(_gamepad_event);
										HX_STACK_LINE(209)
										_type = (int)2;
									}
									else{
										HX_STACK_LINE(211)
										if (((_gamepad_event->__Field(HX_CSTRING("type"),true) == (int)1621))){
											HX_STACK_LINE(212)
											_type = (int)3;
										}
									}
								}
								HX_STACK_LINE(215)
								this->manager->dispatch_gamepad_device_event(_gamepad_event->__Field(HX_CSTRING("which"),true),_type,_event->__Field(HX_CSTRING("timestamp"),true));
							}
						}
					}
				}
				else{
					HX_STACK_LINE(225)
					if (((_event->__Field(HX_CSTRING("type"),true) == (int)2))){
						HX_STACK_LINE(227)
						if (((_event->__Field(HX_CSTRING("event"),true)->__Field(HX_CSTRING("type"),true) == (int)1024))){
							HX_STACK_LINE(229)
							this->manager->dispatch_mouse_move_event(_event->__Field(HX_CSTRING("event"),true)->__Field(HX_CSTRING("x"),true),_event->__Field(HX_CSTRING("event"),true)->__Field(HX_CSTRING("y"),true),_event->__Field(HX_CSTRING("event"),true)->__Field(HX_CSTRING("xrel"),true),_event->__Field(HX_CSTRING("event"),true)->__Field(HX_CSTRING("yrel"),true),_event->__Field(HX_CSTRING("timestamp"),true),_event->__Field(HX_CSTRING("window_id"),true));
						}
						HX_STACK_LINE(238)
						if (((_event->__Field(HX_CSTRING("event"),true)->__Field(HX_CSTRING("type"),true) == (int)1025))){
							HX_STACK_LINE(240)
							this->manager->dispatch_mouse_down_event(_event->__Field(HX_CSTRING("event"),true)->__Field(HX_CSTRING("x"),true),_event->__Field(HX_CSTRING("event"),true)->__Field(HX_CSTRING("y"),true),_event->__Field(HX_CSTRING("event"),true)->__Field(HX_CSTRING("button"),true),_event->__Field(HX_CSTRING("timestamp"),true),_event->__Field(HX_CSTRING("window_id"),true));
						}
						else{
							HX_STACK_LINE(248)
							if (((_event->__Field(HX_CSTRING("event"),true)->__Field(HX_CSTRING("type"),true) == (int)1026))){
								HX_STACK_LINE(250)
								this->manager->dispatch_mouse_up_event(_event->__Field(HX_CSTRING("event"),true)->__Field(HX_CSTRING("x"),true),_event->__Field(HX_CSTRING("event"),true)->__Field(HX_CSTRING("y"),true),_event->__Field(HX_CSTRING("event"),true)->__Field(HX_CSTRING("button"),true),_event->__Field(HX_CSTRING("timestamp"),true),_event->__Field(HX_CSTRING("window_id"),true));
							}
							else{
								HX_STACK_LINE(258)
								if (((_event->__Field(HX_CSTRING("event"),true)->__Field(HX_CSTRING("type"),true) == (int)1027))){
									HX_STACK_LINE(260)
									this->manager->dispatch_mouse_wheel_event(_event->__Field(HX_CSTRING("event"),true)->__Field(HX_CSTRING("x"),true),_event->__Field(HX_CSTRING("event"),true)->__Field(HX_CSTRING("y"),true),_event->__Field(HX_CSTRING("timestamp"),true),_event->__Field(HX_CSTRING("window_id"),true));
								}
							}
						}
					}
				}
			}
		}
	}
return null();
}



InputSystem_obj::InputSystem_obj()
{
}

Dynamic InputSystem_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"process") ) { return process_dyn(); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"on_event") ) { return on_event_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"mod_state_from_event") ) { return mod_state_from_event_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic InputSystem_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void InputSystem_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("init"),
	HX_CSTRING("process"),
	HX_CSTRING("destroy"),
	HX_CSTRING("mod_state_from_event"),
	HX_CSTRING("on_event"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(InputSystem_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(InputSystem_obj::__mClass,"__mClass");
};

#endif

Class InputSystem_obj::__mClass;

void InputSystem_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("snow.platform.native.input.sdl.InputSystem"), hx::TCanCast< InputSystem_obj> ,sStaticFields,sMemberFields,
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

void InputSystem_obj::__boot()
{
}

} // end namespace snow
} // end namespace platform
} // end namespace native
} // end namespace input
} // end namespace sdl
