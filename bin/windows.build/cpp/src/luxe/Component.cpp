#include <hxcpp.h>

#ifndef INCLUDED_Luxe
#include <Luxe.h>
#endif
#ifndef INCLUDED_luxe_Component
#include <luxe/Component.h>
#endif
#ifndef INCLUDED_luxe_Emitter
#include <luxe/Emitter.h>
#endif
#ifndef INCLUDED_luxe_Entity
#include <luxe/Entity.h>
#endif
#ifndef INCLUDED_luxe_ID
#include <luxe/ID.h>
#endif
#ifndef INCLUDED_luxe_Objects
#include <luxe/Objects.h>
#endif
#ifndef INCLUDED_luxe_utils_Utils
#include <luxe/utils/Utils.h>
#endif
#ifndef INCLUDED_phoenix_Quaternion
#include <phoenix/Quaternion.h>
#endif
#ifndef INCLUDED_phoenix_Spatial
#include <phoenix/Spatial.h>
#endif
#ifndef INCLUDED_phoenix_Transform
#include <phoenix/Transform.h>
#endif
#ifndef INCLUDED_phoenix_Vector
#include <phoenix/Vector.h>
#endif
namespace luxe{

Void Component_obj::__construct(Dynamic _options)
{
HX_STACK_FRAME("luxe.Component","new",0xd6098d57,"luxe.Component.new","luxe/Component.hx",86,0xa970277a)
HX_STACK_THIS(this)
HX_STACK_ARG(_options,"_options")
{
	HX_STACK_LINE(88)
	::String _name = HX_CSTRING("");		HX_STACK_VAR(_name,"_name");
	HX_STACK_LINE(90)
	if (((_options != null()))){
		HX_STACK_LINE(91)
		if (((_options->__Field(HX_CSTRING("name"),true) != null()))){
			HX_STACK_LINE(92)
			_name = _options->__Field(HX_CSTRING("name"),true);
		}
	}
	HX_STACK_LINE(96)
	::String _g;		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(96)
	if (((_name == HX_CSTRING("")))){
		HX_STACK_LINE(96)
		_g = ::Luxe_obj::utils->uniqueid(null());
	}
	else{
		HX_STACK_LINE(96)
		_g = _name;
	}
	HX_STACK_LINE(96)
	super::__construct(_g,null());
}
;
	return null();
}

//Component_obj::~Component_obj() { }

Dynamic Component_obj::__CreateEmpty() { return  new Component_obj; }
hx::ObjectPtr< Component_obj > Component_obj::__new(Dynamic _options)
{  hx::ObjectPtr< Component_obj > result = new Component_obj();
	result->__construct(_options);
	return result;}

Dynamic Component_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Component_obj > result = new Component_obj();
	result->__construct(inArgs[0]);
	return result;}

Void Component_obj::init( ){
{
		HX_STACK_FRAME("luxe.Component","init",0x6f0ad639,"luxe.Component.init","luxe/Component.hx",32,0xa970277a)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Component_obj,init,(void))

Void Component_obj::update( Float dt){
{
		HX_STACK_FRAME("luxe.Component","update",0x57d0fd72,"luxe.Component.update","luxe/Component.hx",34,0xa970277a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(dt,"dt")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,update,(void))

Void Component_obj::onadded( ){
{
		HX_STACK_FRAME("luxe.Component","onadded",0x009107b8,"luxe.Component.onadded","luxe/Component.hx",37,0xa970277a)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Component_obj,onadded,(void))

Void Component_obj::onremoved( ){
{
		HX_STACK_FRAME("luxe.Component","onremoved",0x6b3a0098,"luxe.Component.onremoved","luxe/Component.hx",39,0xa970277a)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Component_obj,onremoved,(void))

Void Component_obj::onfixedupdate( Float rate){
{
		HX_STACK_FRAME("luxe.Component","onfixedupdate",0x84abcb75,"luxe.Component.onfixedupdate","luxe/Component.hx",42,0xa970277a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(rate,"rate")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,onfixedupdate,(void))

Void Component_obj::onreset( ){
{
		HX_STACK_FRAME("luxe.Component","onreset",0xcb157cc7,"luxe.Component.onreset","luxe/Component.hx",44,0xa970277a)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Component_obj,onreset,(void))

Void Component_obj::ondestroy( ){
{
		HX_STACK_FRAME("luxe.Component","ondestroy",0x9cc00df2,"luxe.Component.ondestroy","luxe/Component.hx",46,0xa970277a)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Component_obj,ondestroy,(void))

Void Component_obj::onkeyup( Dynamic event){
{
		HX_STACK_FRAME("luxe.Component","onkeyup",0xc34c08b2,"luxe.Component.onkeyup","luxe/Component.hx",49,0xa970277a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,onkeyup,(void))

Void Component_obj::onkeydown( Dynamic event){
{
		HX_STACK_FRAME("luxe.Component","onkeydown",0x29a81e79,"luxe.Component.onkeydown","luxe/Component.hx",51,0xa970277a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,onkeydown,(void))

Void Component_obj::ontextinput( Dynamic event){
{
		HX_STACK_FRAME("luxe.Component","ontextinput",0x270bf335,"luxe.Component.ontextinput","luxe/Component.hx",53,0xa970277a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,ontextinput,(void))

Void Component_obj::oninputdown( Dynamic event){
{
		HX_STACK_FRAME("luxe.Component","oninputdown",0x81ed9864,"luxe.Component.oninputdown","luxe/Component.hx",56,0xa970277a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,oninputdown,(void))

Void Component_obj::oninputup( Dynamic event){
{
		HX_STACK_FRAME("luxe.Component","oninputup",0x4c58a1dd,"luxe.Component.oninputup","luxe/Component.hx",58,0xa970277a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,oninputup,(void))

Void Component_obj::onmousedown( Dynamic event){
{
		HX_STACK_FRAME("luxe.Component","onmousedown",0x671793ff,"luxe.Component.onmousedown","luxe/Component.hx",61,0xa970277a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,onmousedown,(void))

Void Component_obj::onmouseup( Dynamic event){
{
		HX_STACK_FRAME("luxe.Component","onmouseup",0x38acf0b8,"luxe.Component.onmouseup","luxe/Component.hx",63,0xa970277a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,onmouseup,(void))

Void Component_obj::onmousemove( Dynamic event){
{
		HX_STACK_FRAME("luxe.Component","onmousemove",0x6d0a7eae,"luxe.Component.onmousemove","luxe/Component.hx",65,0xa970277a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,onmousemove,(void))

Void Component_obj::onmousewheel( Dynamic event){
{
		HX_STACK_FRAME("luxe.Component","onmousewheel",0xb978c25e,"luxe.Component.onmousewheel","luxe/Component.hx",67,0xa970277a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,onmousewheel,(void))

Void Component_obj::ontouchdown( Dynamic event){
{
		HX_STACK_FRAME("luxe.Component","ontouchdown",0x802f6a99,"luxe.Component.ontouchdown","luxe/Component.hx",70,0xa970277a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,ontouchdown,(void))

Void Component_obj::ontouchup( Dynamic event){
{
		HX_STACK_FRAME("luxe.Component","ontouchup",0x51320cd2,"luxe.Component.ontouchup","luxe/Component.hx",72,0xa970277a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,ontouchup,(void))

Void Component_obj::ontouchmove( Dynamic event){
{
		HX_STACK_FRAME("luxe.Component","ontouchmove",0x86225548,"luxe.Component.ontouchmove","luxe/Component.hx",74,0xa970277a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,ontouchmove,(void))

Void Component_obj::ongamepadup( Dynamic event){
{
		HX_STACK_FRAME("luxe.Component","ongamepadup",0xc2668034,"luxe.Component.ongamepadup","luxe/Component.hx",77,0xa970277a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,ongamepadup,(void))

Void Component_obj::ongamepaddown( Dynamic event){
{
		HX_STACK_FRAME("luxe.Component","ongamepaddown",0xfdf0fa7b,"luxe.Component.ongamepaddown","luxe/Component.hx",79,0xa970277a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,ongamepaddown,(void))

Void Component_obj::ongamepadaxis( Dynamic event){
{
		HX_STACK_FRAME("luxe.Component","ongamepadaxis",0xfbfc1eba,"luxe.Component.ongamepadaxis","luxe/Component.hx",81,0xa970277a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,ongamepadaxis,(void))

Void Component_obj::ongamepaddevice( Dynamic event){
{
		HX_STACK_FRAME("luxe.Component","ongamepaddevice",0x555256ef,"luxe.Component.ongamepaddevice","luxe/Component.hx",83,0xa970277a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,ongamepaddevice,(void))

Dynamic Component_obj::add( Dynamic component){
	HX_STACK_FRAME("luxe.Component","add",0xd5ffaf18,"luxe.Component.add","luxe/Component.hx",104,0xa970277a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(component,"component")
	HX_STACK_LINE(104)
	return this->get_entity()->add(component);
}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,add,return )

bool Component_obj::remove( ::String _name){
	HX_STACK_FRAME("luxe.Component","remove",0xd55413ad,"luxe.Component.remove","luxe/Component.hx",109,0xa970277a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_name,"_name")
	HX_STACK_LINE(109)
	return this->get_entity()->remove(_name);
}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,remove,return )

Dynamic Component_obj::get( ::String _name,Dynamic __o_in_children){
Dynamic in_children = __o_in_children.Default(false);
	HX_STACK_FRAME("luxe.Component","get",0xd6043d8d,"luxe.Component.get","luxe/Component.hx",114,0xa970277a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_name,"_name")
	HX_STACK_ARG(in_children,"in_children")
{
		HX_STACK_LINE(114)
		return this->get_entity()->get(_name,in_children);
	}
}


HX_DEFINE_DYNAMIC_FUNC2(Component_obj,get,return )

Dynamic Component_obj::get_any( ::String _name,Dynamic __o_in_children,Dynamic __o_first_only){
Dynamic in_children = __o_in_children.Default(false);
Dynamic first_only = __o_first_only.Default(true);
	HX_STACK_FRAME("luxe.Component","get_any",0x07fbc7fa,"luxe.Component.get_any","luxe/Component.hx",119,0xa970277a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_name,"_name")
	HX_STACK_ARG(in_children,"in_children")
	HX_STACK_ARG(first_only,"first_only")
{
		HX_STACK_LINE(119)
		return this->get_entity()->get_any(_name,in_children,first_only);
	}
}


HX_DEFINE_DYNAMIC_FUNC3(Component_obj,get_any,return )

bool Component_obj::has( ::String _name){
	HX_STACK_FRAME("luxe.Component","has",0xd604fc51,"luxe.Component.has","luxe/Component.hx",124,0xa970277a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_name,"_name")
	HX_STACK_LINE(124)
	return this->get_entity()->has(_name);
}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,has,return )

Void Component_obj::_detach_entity( ){
{
		HX_STACK_FRAME("luxe.Component","_detach_entity",0xc314e079,"luxe.Component._detach_entity","luxe/Component.hx",131,0xa970277a)
		HX_STACK_THIS(this)
		HX_STACK_LINE(133)
		::luxe::Entity _g = this->get_entity();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(133)
		if (((_g != null()))){
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Component_obj,_detach_entity,(void))

Void Component_obj::_attach_entity( ){
{
		HX_STACK_FRAME("luxe.Component","_attach_entity",0xcc0ad447,"luxe.Component._attach_entity","luxe/Component.hx",139,0xa970277a)
		HX_STACK_THIS(this)
		HX_STACK_LINE(141)
		::luxe::Entity _g = this->get_entity();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(141)
		if (((_g != null()))){
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Component_obj,_attach_entity,(void))

::luxe::Entity Component_obj::set_entity( ::luxe::Entity _entity){
	HX_STACK_FRAME("luxe.Component","set_entity",0xaf870149,"luxe.Component.set_entity","luxe/Component.hx",147,0xa970277a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_entity,"_entity")
	HX_STACK_LINE(149)
	this->_detach_entity();
	HX_STACK_LINE(151)
	this->entity = _entity;
	HX_STACK_LINE(153)
	this->_attach_entity();
	HX_STACK_LINE(155)
	return this->get_entity();
}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,set_entity,return )

::luxe::Entity Component_obj::get_entity( ){
	HX_STACK_FRAME("luxe.Component","get_entity",0xac0962d5,"luxe.Component.get_entity","luxe/Component.hx",161,0xa970277a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(161)
	return this->entity;
}


HX_DEFINE_DYNAMIC_FUNC0(Component_obj,get_entity,return )

::phoenix::Vector Component_obj::set_pos( ::phoenix::Vector _p){
	HX_STACK_FRAME("luxe.Component","set_pos",0xfb08bbae,"luxe.Component.set_pos","luxe/Component.hx",168,0xa970277a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_p,"_p")
	HX_STACK_LINE(168)
	::phoenix::Spatial _this = this->get_entity()->transform->local;		HX_STACK_VAR(_this,"_this");
	HX_STACK_LINE(168)
	_this->pos = _p;
	HX_STACK_LINE(168)
	if (((_p != null()))){
		HX_STACK_LINE(168)
		::phoenix::Vector_obj::Listen(_this->pos,_this->_pos_change_dyn());
		HX_STACK_LINE(168)
		if (((bool((_this->pos_changed != null())) && bool(!(_this->ignore_listeners))))){
			HX_STACK_LINE(168)
			_this->pos_changed(_this->pos);
		}
	}
	HX_STACK_LINE(168)
	return _this->pos;
}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,set_pos,return )

::phoenix::Vector Component_obj::get_pos( ){
	HX_STACK_FRAME("luxe.Component","get_pos",0x08072aa2,"luxe.Component.get_pos","luxe/Component.hx",172,0xa970277a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(172)
	return this->get_entity()->transform->local->pos;
}


HX_DEFINE_DYNAMIC_FUNC0(Component_obj,get_pos,return )

::phoenix::Quaternion Component_obj::set_rotation( ::phoenix::Quaternion _r){
	HX_STACK_FRAME("luxe.Component","set_rotation",0x562580e4,"luxe.Component.set_rotation","luxe/Component.hx",176,0xa970277a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_r,"_r")
	HX_STACK_LINE(176)
	::phoenix::Spatial _this = this->get_entity()->transform->local;		HX_STACK_VAR(_this,"_this");
	HX_STACK_LINE(176)
	_this->rotation = _r;
	HX_STACK_LINE(176)
	if (((_r != null()))){
		HX_STACK_LINE(176)
		{
			HX_STACK_LINE(176)
			::phoenix::Quaternion _q = _this->rotation;		HX_STACK_VAR(_q,"_q");
			HX_STACK_LINE(176)
			Dynamic listener = _this->_rotation_change_dyn();		HX_STACK_VAR(listener,"listener");
			HX_STACK_LINE(176)
			_q->listen_x = listener;
			HX_STACK_LINE(176)
			_q->listen_y = listener;
			HX_STACK_LINE(176)
			_q->listen_z = listener;
			HX_STACK_LINE(176)
			_q->listen_w = listener;
		}
		HX_STACK_LINE(176)
		if (((bool((_this->rotation_changed != null())) && bool(!(_this->ignore_listeners))))){
			HX_STACK_LINE(176)
			_this->rotation_changed(_this->rotation);
		}
	}
	HX_STACK_LINE(176)
	return _this->rotation;
}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,set_rotation,return )

::phoenix::Quaternion Component_obj::get_rotation( ){
	HX_STACK_FRAME("luxe.Component","get_rotation",0x412c5d70,"luxe.Component.get_rotation","luxe/Component.hx",180,0xa970277a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(180)
	return this->get_entity()->transform->local->rotation;
}


HX_DEFINE_DYNAMIC_FUNC0(Component_obj,get_rotation,return )

::phoenix::Vector Component_obj::set_scale( ::phoenix::Vector _s){
	HX_STACK_FRAME("luxe.Component","set_scale",0x0da96724,"luxe.Component.set_scale","luxe/Component.hx",184,0xa970277a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_s,"_s")
	HX_STACK_LINE(184)
	::phoenix::Spatial _this = this->get_entity()->transform->local;		HX_STACK_VAR(_this,"_this");
	HX_STACK_LINE(184)
	_this->scale = _s;
	HX_STACK_LINE(184)
	if (((_s != null()))){
		HX_STACK_LINE(184)
		::phoenix::Vector_obj::Listen(_this->scale,_this->_scale_change_dyn());
		HX_STACK_LINE(184)
		if (((bool((_this->scale_changed != null())) && bool(!(_this->ignore_listeners))))){
			HX_STACK_LINE(184)
			_this->scale_changed(_this->scale);
		}
	}
	HX_STACK_LINE(184)
	return _this->scale;
}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,set_scale,return )

::phoenix::Vector Component_obj::get_scale( ){
	HX_STACK_FRAME("luxe.Component","get_scale",0x2a587b18,"luxe.Component.get_scale","luxe/Component.hx",188,0xa970277a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(188)
	return this->get_entity()->transform->local->scale;
}


HX_DEFINE_DYNAMIC_FUNC0(Component_obj,get_scale,return )

::phoenix::Vector Component_obj::set_origin( ::phoenix::Vector _o){
	HX_STACK_FRAME("luxe.Component","set_origin",0xf56c080c,"luxe.Component.set_origin","luxe/Component.hx",192,0xa970277a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_o,"_o")
	HX_STACK_LINE(192)
	::phoenix::Transform _this = this->get_entity()->transform;		HX_STACK_VAR(_this,"_this");
	HX_STACK_LINE(192)
	{
		HX_STACK_LINE(192)
		_this->dirty = true;
		HX_STACK_LINE(192)
		if (((bool((bool((bool(_this->dirty) && bool(!(_this->_setup)))) && bool((_this->_dirty_handlers != null())))) && bool((_this->_dirty_handlers->__Field(HX_CSTRING("length"),true) > (int)0))))){
			HX_STACK_LINE(192)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(192)
			Dynamic _g1 = _this->_dirty_handlers;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(192)
			while((true)){
				HX_STACK_LINE(192)
				if ((!(((_g < _g1->__Field(HX_CSTRING("length"),true)))))){
					HX_STACK_LINE(192)
					break;
				}
				HX_STACK_LINE(192)
				Dynamic _handler = _g1->__GetItem(_g);		HX_STACK_VAR(_handler,"_handler");
				HX_STACK_LINE(192)
				++(_g);
				HX_STACK_LINE(192)
				if (((_handler != null()))){
					HX_STACK_LINE(192)
					_handler(_this).Cast< Void >();
				}
			}
		}
		HX_STACK_LINE(192)
		_this->dirty;
	}
	HX_STACK_LINE(192)
	_this->origin = _o;
	HX_STACK_LINE(192)
	if (((bool((_this->_origin_handlers != null())) && bool((_this->_origin_handlers->__Field(HX_CSTRING("length"),true) > (int)0))))){
		HX_STACK_LINE(192)
		::phoenix::Vector _origin = _this->origin;		HX_STACK_VAR(_origin,"_origin");
		HX_STACK_LINE(192)
		{
			HX_STACK_LINE(192)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(192)
			Dynamic _g1 = _this->_origin_handlers;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(192)
			while((true)){
				HX_STACK_LINE(192)
				if ((!(((_g < _g1->__Field(HX_CSTRING("length"),true)))))){
					HX_STACK_LINE(192)
					break;
				}
				HX_STACK_LINE(192)
				Dynamic _handler = _g1->__GetItem(_g);		HX_STACK_VAR(_handler,"_handler");
				HX_STACK_LINE(192)
				++(_g);
				HX_STACK_LINE(192)
				if (((_handler != null()))){
					HX_STACK_LINE(192)
					_handler(_origin).Cast< Void >();
				}
			}
		}
	}
	HX_STACK_LINE(192)
	return _this->origin;
}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,set_origin,return )

::phoenix::Vector Component_obj::get_origin( ){
	HX_STACK_FRAME("luxe.Component","get_origin",0xf1ee6998,"luxe.Component.get_origin","luxe/Component.hx",196,0xa970277a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(196)
	return this->get_entity()->transform->origin;
}


HX_DEFINE_DYNAMIC_FUNC0(Component_obj,get_origin,return )

::phoenix::Transform Component_obj::set_transform( ::phoenix::Transform _o){
	HX_STACK_FRAME("luxe.Component","set_transform",0xe34f1b06,"luxe.Component.set_transform","luxe/Component.hx",200,0xa970277a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_o,"_o")
	HX_STACK_LINE(200)
	return this->get_entity()->transform = _o;
}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,set_transform,return )

::phoenix::Transform Component_obj::get_transform( ){
	HX_STACK_FRAME("luxe.Component","get_transform",0x9e4938fa,"luxe.Component.get_transform","luxe/Component.hx",204,0xa970277a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(204)
	return this->get_entity()->transform;
}


HX_DEFINE_DYNAMIC_FUNC0(Component_obj,get_transform,return )

Void Component_obj::entity_pos_change( ::phoenix::Vector _pos){
{
		HX_STACK_FRAME("luxe.Component","entity_pos_change",0x9c9e560e,"luxe.Component.entity_pos_change","luxe/Component.hx",207,0xa970277a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_pos,"_pos")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,entity_pos_change,(void))

Void Component_obj::entity_scale_change( ::phoenix::Vector _scale){
{
		HX_STACK_FRAME("luxe.Component","entity_scale_change",0xfdc47a98,"luxe.Component.entity_scale_change","luxe/Component.hx",208,0xa970277a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_scale,"_scale")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,entity_scale_change,(void))

Void Component_obj::entity_rotation_change( ::phoenix::Quaternion _rotation){
{
		HX_STACK_FRAME("luxe.Component","entity_rotation_change",0x04de4e9e,"luxe.Component.entity_rotation_change","luxe/Component.hx",209,0xa970277a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_rotation,"_rotation")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,entity_rotation_change,(void))

Void Component_obj::entity_origin_change( ::phoenix::Vector _origin){
{
		HX_STACK_FRAME("luxe.Component","entity_origin_change",0x15b289b6,"luxe.Component.entity_origin_change","luxe/Component.hx",210,0xa970277a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_origin,"_origin")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,entity_origin_change,(void))

Void Component_obj::entity_parent_change( ::phoenix::Transform _parent){
{
		HX_STACK_FRAME("luxe.Component","entity_parent_change",0x7adf4ef2,"luxe.Component.entity_parent_change","luxe/Component.hx",211,0xa970277a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_parent,"_parent")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,entity_parent_change,(void))


Component_obj::Component_obj()
{
}

void Component_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Component);
	HX_MARK_MEMBER_NAME(entity,"entity");
	HX_MARK_MEMBER_NAME(transform,"transform");
	::luxe::ID_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Component_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(entity,"entity");
	HX_VISIT_MEMBER_NAME(transform,"transform");
	::luxe::ID_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Component_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"pos") ) { return get_pos(); }
		if (HX_FIELD_EQ(inName,"add") ) { return add_dyn(); }
		if (HX_FIELD_EQ(inName,"get") ) { return get_dyn(); }
		if (HX_FIELD_EQ(inName,"has") ) { return has_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"scale") ) { return get_scale(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"entity") ) { return inCallProp ? get_entity() : entity; }
		if (HX_FIELD_EQ(inName,"origin") ) { return get_origin(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"remove") ) { return remove_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"onadded") ) { return onadded_dyn(); }
		if (HX_FIELD_EQ(inName,"onreset") ) { return onreset_dyn(); }
		if (HX_FIELD_EQ(inName,"onkeyup") ) { return onkeyup_dyn(); }
		if (HX_FIELD_EQ(inName,"get_any") ) { return get_any_dyn(); }
		if (HX_FIELD_EQ(inName,"set_pos") ) { return set_pos_dyn(); }
		if (HX_FIELD_EQ(inName,"get_pos") ) { return get_pos_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"rotation") ) { return get_rotation(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"transform") ) { return transform; }
		if (HX_FIELD_EQ(inName,"onremoved") ) { return onremoved_dyn(); }
		if (HX_FIELD_EQ(inName,"ondestroy") ) { return ondestroy_dyn(); }
		if (HX_FIELD_EQ(inName,"onkeydown") ) { return onkeydown_dyn(); }
		if (HX_FIELD_EQ(inName,"oninputup") ) { return oninputup_dyn(); }
		if (HX_FIELD_EQ(inName,"onmouseup") ) { return onmouseup_dyn(); }
		if (HX_FIELD_EQ(inName,"ontouchup") ) { return ontouchup_dyn(); }
		if (HX_FIELD_EQ(inName,"set_scale") ) { return set_scale_dyn(); }
		if (HX_FIELD_EQ(inName,"get_scale") ) { return get_scale_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"set_entity") ) { return set_entity_dyn(); }
		if (HX_FIELD_EQ(inName,"get_entity") ) { return get_entity_dyn(); }
		if (HX_FIELD_EQ(inName,"set_origin") ) { return set_origin_dyn(); }
		if (HX_FIELD_EQ(inName,"get_origin") ) { return get_origin_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"ontextinput") ) { return ontextinput_dyn(); }
		if (HX_FIELD_EQ(inName,"oninputdown") ) { return oninputdown_dyn(); }
		if (HX_FIELD_EQ(inName,"onmousedown") ) { return onmousedown_dyn(); }
		if (HX_FIELD_EQ(inName,"onmousemove") ) { return onmousemove_dyn(); }
		if (HX_FIELD_EQ(inName,"ontouchdown") ) { return ontouchdown_dyn(); }
		if (HX_FIELD_EQ(inName,"ontouchmove") ) { return ontouchmove_dyn(); }
		if (HX_FIELD_EQ(inName,"ongamepadup") ) { return ongamepadup_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"onmousewheel") ) { return onmousewheel_dyn(); }
		if (HX_FIELD_EQ(inName,"set_rotation") ) { return set_rotation_dyn(); }
		if (HX_FIELD_EQ(inName,"get_rotation") ) { return get_rotation_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"onfixedupdate") ) { return onfixedupdate_dyn(); }
		if (HX_FIELD_EQ(inName,"ongamepaddown") ) { return ongamepaddown_dyn(); }
		if (HX_FIELD_EQ(inName,"ongamepadaxis") ) { return ongamepadaxis_dyn(); }
		if (HX_FIELD_EQ(inName,"set_transform") ) { return set_transform_dyn(); }
		if (HX_FIELD_EQ(inName,"get_transform") ) { return get_transform_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_detach_entity") ) { return _detach_entity_dyn(); }
		if (HX_FIELD_EQ(inName,"_attach_entity") ) { return _attach_entity_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"ongamepaddevice") ) { return ongamepaddevice_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"entity_pos_change") ) { return entity_pos_change_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"entity_scale_change") ) { return entity_scale_change_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"entity_origin_change") ) { return entity_origin_change_dyn(); }
		if (HX_FIELD_EQ(inName,"entity_parent_change") ) { return entity_parent_change_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"entity_rotation_change") ) { return entity_rotation_change_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Component_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"pos") ) { return set_pos(inValue); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"scale") ) { return set_scale(inValue); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"entity") ) { if (inCallProp) return set_entity(inValue);entity=inValue.Cast< ::luxe::Entity >(); return inValue; }
		if (HX_FIELD_EQ(inName,"origin") ) { return set_origin(inValue); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"rotation") ) { return set_rotation(inValue); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"transform") ) { transform=inValue.Cast< ::phoenix::Transform >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Component_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("entity"));
	outFields->push(HX_CSTRING("transform"));
	outFields->push(HX_CSTRING("pos"));
	outFields->push(HX_CSTRING("rotation"));
	outFields->push(HX_CSTRING("scale"));
	outFields->push(HX_CSTRING("origin"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::luxe::Entity*/ ,(int)offsetof(Component_obj,entity),HX_CSTRING("entity")},
	{hx::fsObject /*::phoenix::Transform*/ ,(int)offsetof(Component_obj,transform),HX_CSTRING("transform")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("entity"),
	HX_CSTRING("transform"),
	HX_CSTRING("init"),
	HX_CSTRING("update"),
	HX_CSTRING("onadded"),
	HX_CSTRING("onremoved"),
	HX_CSTRING("onfixedupdate"),
	HX_CSTRING("onreset"),
	HX_CSTRING("ondestroy"),
	HX_CSTRING("onkeyup"),
	HX_CSTRING("onkeydown"),
	HX_CSTRING("ontextinput"),
	HX_CSTRING("oninputdown"),
	HX_CSTRING("oninputup"),
	HX_CSTRING("onmousedown"),
	HX_CSTRING("onmouseup"),
	HX_CSTRING("onmousemove"),
	HX_CSTRING("onmousewheel"),
	HX_CSTRING("ontouchdown"),
	HX_CSTRING("ontouchup"),
	HX_CSTRING("ontouchmove"),
	HX_CSTRING("ongamepadup"),
	HX_CSTRING("ongamepaddown"),
	HX_CSTRING("ongamepadaxis"),
	HX_CSTRING("ongamepaddevice"),
	HX_CSTRING("add"),
	HX_CSTRING("remove"),
	HX_CSTRING("get"),
	HX_CSTRING("get_any"),
	HX_CSTRING("has"),
	HX_CSTRING("_detach_entity"),
	HX_CSTRING("_attach_entity"),
	HX_CSTRING("set_entity"),
	HX_CSTRING("get_entity"),
	HX_CSTRING("set_pos"),
	HX_CSTRING("get_pos"),
	HX_CSTRING("set_rotation"),
	HX_CSTRING("get_rotation"),
	HX_CSTRING("set_scale"),
	HX_CSTRING("get_scale"),
	HX_CSTRING("set_origin"),
	HX_CSTRING("get_origin"),
	HX_CSTRING("set_transform"),
	HX_CSTRING("get_transform"),
	HX_CSTRING("entity_pos_change"),
	HX_CSTRING("entity_scale_change"),
	HX_CSTRING("entity_rotation_change"),
	HX_CSTRING("entity_origin_change"),
	HX_CSTRING("entity_parent_change"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Component_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Component_obj::__mClass,"__mClass");
};

#endif

Class Component_obj::__mClass;

void Component_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("luxe.Component"), hx::TCanCast< Component_obj> ,sStaticFields,sMemberFields,
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

void Component_obj::__boot()
{
}

} // end namespace luxe
