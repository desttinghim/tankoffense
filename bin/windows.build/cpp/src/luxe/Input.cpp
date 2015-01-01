#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_Lambda
#include <Lambda.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_luxe_Core
#include <luxe/Core.h>
#endif
#ifndef INCLUDED_luxe_Input
#include <luxe/Input.h>
#endif
#ifndef INCLUDED_luxe_InputType
#include <luxe/InputType.h>
#endif
#ifndef INCLUDED_luxe_InteractState
#include <luxe/InteractState.h>
#endif
#ifndef INCLUDED_snow_App
#include <snow/App.h>
#endif
#ifndef INCLUDED_snow_Snow
#include <snow/Snow.h>
#endif
#ifndef INCLUDED_snow_input_Input
#include <snow/input/Input.h>
#endif
namespace luxe{

Void Input_obj::__construct(::luxe::Core _core)
{
HX_STACK_FRAME("luxe.Input","new",0xd5d5d724,"luxe.Input.new","luxe/Input.hx",223,0x19edc1cd)
HX_STACK_THIS(this)
HX_STACK_ARG(_core,"_core")
{
	HX_STACK_LINE(223)
	this->core = _core;
}
;
	return null();
}

//Input_obj::~Input_obj() { }

Dynamic Input_obj::__CreateEmpty() { return  new Input_obj; }
hx::ObjectPtr< Input_obj > Input_obj::__new(::luxe::Core _core)
{  hx::ObjectPtr< Input_obj > result = new Input_obj();
	result->__construct(_core);
	return result;}

Dynamic Input_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Input_obj > result = new Input_obj();
	result->__construct(inArgs[0]);
	return result;}

Void Input_obj::init( ){
{
		HX_STACK_FRAME("luxe.Input","init",0x41ff1fcc,"luxe.Input.init","luxe/Input.hx",237,0x19edc1cd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(239)
		::haxe::ds::StringMap _g = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(239)
		this->key_bindings = _g;
		HX_STACK_LINE(240)
		::haxe::ds::StringMap _g1 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(240)
		this->mouse_bindings = _g1;
		HX_STACK_LINE(242)
		::haxe::ds::StringMap _g2 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(242)
		this->_named_input_down = _g2;
		HX_STACK_LINE(243)
		::haxe::ds::StringMap _g3 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(243)
		this->_named_input_pressed = _g3;
		HX_STACK_LINE(244)
		::haxe::ds::StringMap _g4 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(244)
		this->_named_input_released = _g4;
		HX_STACK_LINE(138)
		Dynamic();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Input_obj,init,(void))

Void Input_obj::destroy( ){
{
		HX_STACK_FRAME("luxe.Input","destroy",0x250ce5be,"luxe.Input.destroy","luxe/Log.hx",138,0xe5312153)
		HX_STACK_THIS(this)
		HX_STACK_LINE(138)
		Dynamic();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Input_obj,destroy,(void))

Void Input_obj::process( ){
{
		HX_STACK_FRAME("luxe.Input","process",0xf1d15b33,"luxe.Input.process","luxe/Input.hx",254,0x19edc1cd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(259)
		for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(this->_named_input_pressed->keys());  __it->hasNext(); ){
			::String _event = __it->next();
			if ((this->_named_input_pressed->get(_event))){
				HX_STACK_LINE(262)
				this->_named_input_pressed->remove(_event);
			}
			else{
				HX_STACK_LINE(264)
				this->_named_input_pressed->set(_event,true);
			}
;
		}
		HX_STACK_LINE(272)
		for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(this->_named_input_released->keys());  __it->hasNext(); ){
			::String _event = __it->next();
			if ((this->_named_input_released->get(_event))){
				HX_STACK_LINE(275)
				this->_named_input_released->remove(_event);
			}
			else{
				HX_STACK_LINE(277)
				this->_named_input_released->set(_event,true);
			}
;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Input_obj,process,(void))

bool Input_obj::inputpressed( ::String _event){
	HX_STACK_FRAME("luxe.Input","inputpressed",0x66d30494,"luxe.Input.inputpressed","luxe/Input.hx",288,0x19edc1cd)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_event,"_event")
	HX_STACK_LINE(288)
	return this->_named_input_pressed->exists(_event);
}


HX_DEFINE_DYNAMIC_FUNC1(Input_obj,inputpressed,return )

bool Input_obj::inputreleased( ::String _event){
	HX_STACK_FRAME("luxe.Input","inputreleased",0x98a70a8b,"luxe.Input.inputreleased","luxe/Input.hx",293,0x19edc1cd)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_event,"_event")
	HX_STACK_LINE(293)
	return this->_named_input_released->exists(_event);
}


HX_DEFINE_DYNAMIC_FUNC1(Input_obj,inputreleased,return )

bool Input_obj::inputdown( ::String _event){
	HX_STACK_FRAME("luxe.Input","inputdown",0x58f8fb30,"luxe.Input.inputdown","luxe/Input.hx",298,0x19edc1cd)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_event,"_event")
	HX_STACK_LINE(298)
	return this->_named_input_down->exists(_event);
}


HX_DEFINE_DYNAMIC_FUNC1(Input_obj,inputdown,return )

bool Input_obj::keypressed( int _code){
	HX_STACK_FRAME("luxe.Input","keypressed",0x9327649f,"luxe.Input.keypressed","luxe/Input.hx",305,0x19edc1cd)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_code,"_code")
	HX_STACK_LINE(305)
	return this->core->app->input->keypressed(_code);
}


HX_DEFINE_DYNAMIC_FUNC1(Input_obj,keypressed,return )

bool Input_obj::keyreleased( int _code){
	HX_STACK_FRAME("luxe.Input","keyreleased",0x3626b420,"luxe.Input.keyreleased","luxe/Input.hx",310,0x19edc1cd)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_code,"_code")
	HX_STACK_LINE(310)
	return this->core->app->input->keyreleased(_code);
}


HX_DEFINE_DYNAMIC_FUNC1(Input_obj,keyreleased,return )

bool Input_obj::keydown( int _code){
	HX_STACK_FRAME("luxe.Input","keydown",0xb1f4f645,"luxe.Input.keydown","luxe/Input.hx",315,0x19edc1cd)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_code,"_code")
	HX_STACK_LINE(315)
	return this->core->app->input->keydown(_code);
}


HX_DEFINE_DYNAMIC_FUNC1(Input_obj,keydown,return )

bool Input_obj::scanpressed( int _code){
	HX_STACK_FRAME("luxe.Input","scanpressed",0x4c8f9989,"luxe.Input.scanpressed","luxe/Input.hx",321,0x19edc1cd)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_code,"_code")
	HX_STACK_LINE(321)
	return this->core->app->input->scanpressed(_code);
}


HX_DEFINE_DYNAMIC_FUNC1(Input_obj,scanpressed,return )

bool Input_obj::scanreleased( int _code){
	HX_STACK_FRAME("luxe.Input","scanreleased",0xb7eccbf6,"luxe.Input.scanreleased","luxe/Input.hx",326,0x19edc1cd)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_code,"_code")
	HX_STACK_LINE(326)
	return this->core->app->input->scanreleased(_code);
}


HX_DEFINE_DYNAMIC_FUNC1(Input_obj,scanreleased,return )

bool Input_obj::scandown( int _code){
	HX_STACK_FRAME("luxe.Input","scandown",0x9cf0eb1b,"luxe.Input.scandown","luxe/Input.hx",331,0x19edc1cd)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_code,"_code")
	HX_STACK_LINE(331)
	return this->core->app->input->scandown(_code);
}


HX_DEFINE_DYNAMIC_FUNC1(Input_obj,scandown,return )

bool Input_obj::mousepressed( int _button){
	HX_STACK_FRAME("luxe.Input","mousepressed",0xb04bfbd9,"luxe.Input.mousepressed","luxe/Input.hx",338,0x19edc1cd)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_button,"_button")
	HX_STACK_LINE(338)
	return this->core->app->input->mousepressed(_button);
}


HX_DEFINE_DYNAMIC_FUNC1(Input_obj,mousepressed,return )

bool Input_obj::mousereleased( int _button){
	HX_STACK_FRAME("luxe.Input","mousereleased",0x99066fa6,"luxe.Input.mousereleased","luxe/Input.hx",343,0x19edc1cd)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_button,"_button")
	HX_STACK_LINE(343)
	return this->core->app->input->mousereleased(_button);
}


HX_DEFINE_DYNAMIC_FUNC1(Input_obj,mousereleased,return )

bool Input_obj::mousedown( int _button){
	HX_STACK_FRAME("luxe.Input","mousedown",0x3e22f6cb,"luxe.Input.mousedown","luxe/Input.hx",348,0x19edc1cd)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_button,"_button")
	HX_STACK_LINE(348)
	return this->core->app->input->mousedown(_button);
}


HX_DEFINE_DYNAMIC_FUNC1(Input_obj,mousedown,return )

bool Input_obj::gamepadpressed( int _gamepad,int _button){
	HX_STACK_FRAME("luxe.Input","gamepadpressed",0x00765fdd,"luxe.Input.gamepadpressed","luxe/Input.hx",355,0x19edc1cd)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_gamepad,"_gamepad")
	HX_STACK_ARG(_button,"_button")
	HX_STACK_LINE(355)
	return this->core->app->input->gamepadpressed(_gamepad,_button);
}


HX_DEFINE_DYNAMIC_FUNC2(Input_obj,gamepadpressed,return )

bool Input_obj::gamepadreleased( int _gamepad,int _button){
	HX_STACK_FRAME("luxe.Input","gamepadreleased",0x6df38f22,"luxe.Input.gamepadreleased","luxe/Input.hx",360,0x19edc1cd)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_gamepad,"_gamepad")
	HX_STACK_ARG(_button,"_button")
	HX_STACK_LINE(360)
	return this->core->app->input->gamepadreleased(_gamepad,_button);
}


HX_DEFINE_DYNAMIC_FUNC2(Input_obj,gamepadreleased,return )

bool Input_obj::gamepaddown( int _gamepad,int _button){
	HX_STACK_FRAME("luxe.Input","gamepaddown",0x38b3a847,"luxe.Input.gamepaddown","luxe/Input.hx",365,0x19edc1cd)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_gamepad,"_gamepad")
	HX_STACK_ARG(_button,"_button")
	HX_STACK_LINE(365)
	return this->core->app->input->gamepaddown(_gamepad,_button);
}


HX_DEFINE_DYNAMIC_FUNC2(Input_obj,gamepaddown,return )

Float Input_obj::gamepadaxis( int _gamepad,int _axis){
	HX_STACK_FRAME("luxe.Input","gamepadaxis",0x36becc86,"luxe.Input.gamepadaxis","luxe/Input.hx",370,0x19edc1cd)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_gamepad,"_gamepad")
	HX_STACK_ARG(_axis,"_axis")
	HX_STACK_LINE(370)
	return this->core->app->input->gamepadaxis(_gamepad,_axis);
}


HX_DEFINE_DYNAMIC_FUNC2(Input_obj,gamepadaxis,return )

Void Input_obj::bind_key( ::String _name,int _key){
{
		HX_STACK_FRAME("luxe.Input","bind_key",0x3768d999,"luxe.Input.bind_key","luxe/Input.hx",377,0x19edc1cd)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_name,"_name")
		HX_STACK_ARG(_key,"_key")
		HX_STACK_LINE(379)
		if ((!(this->key_bindings->exists(_name)))){
			HX_STACK_LINE(380)
			::haxe::ds::IntMap value = ::haxe::ds::IntMap_obj::__new();		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(380)
			this->key_bindings->set(_name,value);
		}
		HX_STACK_LINE(383)
		::haxe::ds::IntMap kb = this->key_bindings->get(_name);		HX_STACK_VAR(kb,"kb");
		HX_STACK_LINE(384)
		kb->set(_key,true);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Input_obj,bind_key,(void))

Void Input_obj::bind_mouse( ::String _name,int _button){
{
		HX_STACK_FRAME("luxe.Input","bind_mouse",0xb3ebd89f,"luxe.Input.bind_mouse","luxe/Input.hx",389,0x19edc1cd)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_name,"_name")
		HX_STACK_ARG(_button,"_button")
		HX_STACK_LINE(391)
		if ((!(this->mouse_bindings->exists(_name)))){
			HX_STACK_LINE(392)
			::haxe::ds::IntMap value = ::haxe::ds::IntMap_obj::__new();		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(392)
			this->mouse_bindings->set(_name,value);
		}
		HX_STACK_LINE(395)
		::haxe::ds::IntMap mb = this->mouse_bindings->get(_name);		HX_STACK_VAR(mb,"mb");
		HX_STACK_LINE(396)
		mb->set(_button,true);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Input_obj,bind_mouse,(void))

Void Input_obj::check_named_keys( Dynamic e,hx::Null< bool >  __o__down){
bool _down = __o__down.Default(false);
	HX_STACK_FRAME("luxe.Input","check_named_keys",0x66d0b78d,"luxe.Input.check_named_keys","luxe/Input.hx",400,0x19edc1cd)
	HX_STACK_THIS(this)
	HX_STACK_ARG(e,"e")
	HX_STACK_ARG(_down,"_down")
{
		HX_STACK_LINE(402)
		Array< ::String > _fired = Array_obj< ::String >::__new();		HX_STACK_VAR(_fired,"_fired");
		HX_STACK_LINE(403)
		for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(this->key_bindings->keys());  __it->hasNext(); ){
			::String _name = __it->next();
			{
				HX_STACK_LINE(405)
				::haxe::ds::IntMap _b = this->key_bindings->get(_name);		HX_STACK_VAR(_b,"_b");
				HX_STACK_LINE(406)
				bool _is_down_repeat = (bool(_down) && bool(e->__Field(HX_CSTRING("repeat"),true)));		HX_STACK_VAR(_is_down_repeat,"_is_down_repeat");
				HX_STACK_LINE(407)
				if (((  ((_b->exists(e->__Field(HX_CSTRING("keycode"),true)))) ? bool(!(_is_down_repeat)) : bool(false) ))){
					HX_STACK_LINE(408)
					if ((!(::Lambda_obj::has(_fired,_name)))){
						HX_STACK_LINE(409)
						_fired->push(_name);
					}
				}
			}
;
		}
		HX_STACK_LINE(415)
		{
			HX_STACK_LINE(415)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(415)
			while((true)){
				HX_STACK_LINE(415)
				if ((!(((_g < _fired->length))))){
					HX_STACK_LINE(415)
					break;
				}
				HX_STACK_LINE(415)
				::String _f = _fired->__get(_g);		HX_STACK_VAR(_f,"_f");
				HX_STACK_LINE(415)
				++(_g);
				HX_STACK_LINE(416)
				if ((_down)){
					HX_STACK_LINE(419)
					this->_named_input_pressed->set(_f,false);
					HX_STACK_LINE(421)
					this->_named_input_down->set(_f,true);
					struct _Function_4_1{
						inline static Dynamic Block( ::String &_f,Dynamic &e){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/Input.hx",423,0x19edc1cd)
							{
								hx::Anon __result = hx::Anon_obj::Create();
								__result->Add(HX_CSTRING("name") , _f,false);
								__result->Add(HX_CSTRING("type") , ::luxe::InputType_obj::keys,false);
								__result->Add(HX_CSTRING("state") , ::luxe::InteractState_obj::down,false);
								__result->Add(HX_CSTRING("key_event") , e,false);
								return __result;
							}
							return null();
						}
					};
					HX_STACK_LINE(423)
					this->core->oninputdown(_f,_Function_4_1::Block(_f,e));
				}
				else{
					HX_STACK_LINE(433)
					this->_named_input_released->set(_f,false);
					HX_STACK_LINE(435)
					this->_named_input_down->remove(_f);
					struct _Function_4_1{
						inline static Dynamic Block( ::String &_f,Dynamic &e){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/Input.hx",437,0x19edc1cd)
							{
								hx::Anon __result = hx::Anon_obj::Create();
								__result->Add(HX_CSTRING("name") , _f,false);
								__result->Add(HX_CSTRING("type") , ::luxe::InputType_obj::keys,false);
								__result->Add(HX_CSTRING("state") , ::luxe::InteractState_obj::up,false);
								__result->Add(HX_CSTRING("key_event") , e,false);
								return __result;
							}
							return null();
						}
					};
					HX_STACK_LINE(437)
					this->core->oninputup(_f,_Function_4_1::Block(_f,e));
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Input_obj,check_named_keys,(void))

Void Input_obj::check_named_mouse( Dynamic e,hx::Null< bool >  __o__down){
bool _down = __o__down.Default(false);
	HX_STACK_FRAME("luxe.Input","check_named_mouse",0xbd36266c,"luxe.Input.check_named_mouse","luxe/Input.hx",449,0x19edc1cd)
	HX_STACK_THIS(this)
	HX_STACK_ARG(e,"e")
	HX_STACK_ARG(_down,"_down")
{
		HX_STACK_LINE(451)
		Array< ::String > _fired = Array_obj< ::String >::__new();		HX_STACK_VAR(_fired,"_fired");
		HX_STACK_LINE(452)
		for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(this->mouse_bindings->keys());  __it->hasNext(); ){
			::String _name = __it->next();
			{
				HX_STACK_LINE(454)
				::haxe::ds::IntMap _b = this->mouse_bindings->get(_name);		HX_STACK_VAR(_b,"_b");
				HX_STACK_LINE(455)
				if ((_b->exists(e->__Field(HX_CSTRING("button"),true)))){
					HX_STACK_LINE(456)
					if ((!(::Lambda_obj::has(_fired,_name)))){
						HX_STACK_LINE(457)
						_fired->push(_name);
					}
				}
			}
;
		}
		HX_STACK_LINE(463)
		{
			HX_STACK_LINE(463)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(463)
			while((true)){
				HX_STACK_LINE(463)
				if ((!(((_g < _fired->length))))){
					HX_STACK_LINE(463)
					break;
				}
				HX_STACK_LINE(463)
				::String _f = _fired->__get(_g);		HX_STACK_VAR(_f,"_f");
				HX_STACK_LINE(463)
				++(_g);
				HX_STACK_LINE(464)
				if ((_down)){
					HX_STACK_LINE(467)
					this->_named_input_pressed->set(_f,false);
					HX_STACK_LINE(469)
					this->_named_input_down->set(_f,true);
					struct _Function_4_1{
						inline static Dynamic Block( ::String &_f,Dynamic &e){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/Input.hx",471,0x19edc1cd)
							{
								hx::Anon __result = hx::Anon_obj::Create();
								__result->Add(HX_CSTRING("name") , _f,false);
								__result->Add(HX_CSTRING("type") , ::luxe::InputType_obj::mouse,false);
								__result->Add(HX_CSTRING("state") , ::luxe::InteractState_obj::down,false);
								__result->Add(HX_CSTRING("mouse_event") , e,false);
								return __result;
							}
							return null();
						}
					};
					HX_STACK_LINE(471)
					this->core->oninputdown(_f,_Function_4_1::Block(_f,e));
				}
				else{
					HX_STACK_LINE(481)
					this->_named_input_released->set(_f,false);
					HX_STACK_LINE(483)
					this->_named_input_down->remove(_f);
					struct _Function_4_1{
						inline static Dynamic Block( ::String &_f,Dynamic &e){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/Input.hx",485,0x19edc1cd)
							{
								hx::Anon __result = hx::Anon_obj::Create();
								__result->Add(HX_CSTRING("name") , _f,false);
								__result->Add(HX_CSTRING("type") , ::luxe::InputType_obj::mouse,false);
								__result->Add(HX_CSTRING("state") , ::luxe::InteractState_obj::up,false);
								__result->Add(HX_CSTRING("mouse_event") , e,false);
								return __result;
							}
							return null();
						}
					};
					HX_STACK_LINE(485)
					this->core->oninputup(_f,_Function_4_1::Block(_f,e));
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Input_obj,check_named_mouse,(void))


Input_obj::Input_obj()
{
}

void Input_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Input);
	HX_MARK_MEMBER_NAME(core,"core");
	HX_MARK_MEMBER_NAME(key_bindings,"key_bindings");
	HX_MARK_MEMBER_NAME(mouse_bindings,"mouse_bindings");
	HX_MARK_MEMBER_NAME(_named_input_released,"_named_input_released");
	HX_MARK_MEMBER_NAME(_named_input_pressed,"_named_input_pressed");
	HX_MARK_MEMBER_NAME(_named_input_down,"_named_input_down");
	HX_MARK_END_CLASS();
}

void Input_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(core,"core");
	HX_VISIT_MEMBER_NAME(key_bindings,"key_bindings");
	HX_VISIT_MEMBER_NAME(mouse_bindings,"mouse_bindings");
	HX_VISIT_MEMBER_NAME(_named_input_released,"_named_input_released");
	HX_VISIT_MEMBER_NAME(_named_input_pressed,"_named_input_pressed");
	HX_VISIT_MEMBER_NAME(_named_input_down,"_named_input_down");
}

Dynamic Input_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"core") ) { return core; }
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"process") ) { return process_dyn(); }
		if (HX_FIELD_EQ(inName,"keydown") ) { return keydown_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"scandown") ) { return scandown_dyn(); }
		if (HX_FIELD_EQ(inName,"bind_key") ) { return bind_key_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"inputdown") ) { return inputdown_dyn(); }
		if (HX_FIELD_EQ(inName,"mousedown") ) { return mousedown_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"keypressed") ) { return keypressed_dyn(); }
		if (HX_FIELD_EQ(inName,"bind_mouse") ) { return bind_mouse_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"keyreleased") ) { return keyreleased_dyn(); }
		if (HX_FIELD_EQ(inName,"scanpressed") ) { return scanpressed_dyn(); }
		if (HX_FIELD_EQ(inName,"gamepaddown") ) { return gamepaddown_dyn(); }
		if (HX_FIELD_EQ(inName,"gamepadaxis") ) { return gamepadaxis_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"key_bindings") ) { return key_bindings; }
		if (HX_FIELD_EQ(inName,"inputpressed") ) { return inputpressed_dyn(); }
		if (HX_FIELD_EQ(inName,"scanreleased") ) { return scanreleased_dyn(); }
		if (HX_FIELD_EQ(inName,"mousepressed") ) { return mousepressed_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"inputreleased") ) { return inputreleased_dyn(); }
		if (HX_FIELD_EQ(inName,"mousereleased") ) { return mousereleased_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"mouse_bindings") ) { return mouse_bindings; }
		if (HX_FIELD_EQ(inName,"gamepadpressed") ) { return gamepadpressed_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"gamepadreleased") ) { return gamepadreleased_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"check_named_keys") ) { return check_named_keys_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_named_input_down") ) { return _named_input_down; }
		if (HX_FIELD_EQ(inName,"check_named_mouse") ) { return check_named_mouse_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"_named_input_pressed") ) { return _named_input_pressed; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_named_input_released") ) { return _named_input_released; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Input_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"core") ) { core=inValue.Cast< ::luxe::Core >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"key_bindings") ) { key_bindings=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"mouse_bindings") ) { mouse_bindings=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_named_input_down") ) { _named_input_down=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"_named_input_pressed") ) { _named_input_pressed=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_named_input_released") ) { _named_input_released=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Input_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("core"));
	outFields->push(HX_CSTRING("key_bindings"));
	outFields->push(HX_CSTRING("mouse_bindings"));
	outFields->push(HX_CSTRING("_named_input_released"));
	outFields->push(HX_CSTRING("_named_input_pressed"));
	outFields->push(HX_CSTRING("_named_input_down"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::luxe::Core*/ ,(int)offsetof(Input_obj,core),HX_CSTRING("core")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(Input_obj,key_bindings),HX_CSTRING("key_bindings")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(Input_obj,mouse_bindings),HX_CSTRING("mouse_bindings")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(Input_obj,_named_input_released),HX_CSTRING("_named_input_released")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(Input_obj,_named_input_pressed),HX_CSTRING("_named_input_pressed")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(Input_obj,_named_input_down),HX_CSTRING("_named_input_down")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("core"),
	HX_CSTRING("key_bindings"),
	HX_CSTRING("mouse_bindings"),
	HX_CSTRING("_named_input_released"),
	HX_CSTRING("_named_input_pressed"),
	HX_CSTRING("_named_input_down"),
	HX_CSTRING("init"),
	HX_CSTRING("destroy"),
	HX_CSTRING("process"),
	HX_CSTRING("inputpressed"),
	HX_CSTRING("inputreleased"),
	HX_CSTRING("inputdown"),
	HX_CSTRING("keypressed"),
	HX_CSTRING("keyreleased"),
	HX_CSTRING("keydown"),
	HX_CSTRING("scanpressed"),
	HX_CSTRING("scanreleased"),
	HX_CSTRING("scandown"),
	HX_CSTRING("mousepressed"),
	HX_CSTRING("mousereleased"),
	HX_CSTRING("mousedown"),
	HX_CSTRING("gamepadpressed"),
	HX_CSTRING("gamepadreleased"),
	HX_CSTRING("gamepaddown"),
	HX_CSTRING("gamepadaxis"),
	HX_CSTRING("bind_key"),
	HX_CSTRING("bind_mouse"),
	HX_CSTRING("check_named_keys"),
	HX_CSTRING("check_named_mouse"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Input_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Input_obj::__mClass,"__mClass");
};

#endif

Class Input_obj::__mClass;

void Input_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("luxe.Input"), hx::TCanCast< Input_obj> ,sStaticFields,sMemberFields,
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

void Input_obj::__boot()
{
}

} // end namespace luxe
