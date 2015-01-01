#include <hxcpp.h>

#ifndef INCLUDED_EReg
#include <EReg.h>
#endif
#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_Lambda
#include <Lambda.h>
#endif
#ifndef INCLUDED_Luxe
#include <Luxe.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_luxe_Core
#include <luxe/Core.h>
#endif
#ifndef INCLUDED_luxe_Debug
#include <luxe/Debug.h>
#endif
#ifndef INCLUDED_luxe_Emitter
#include <luxe/Emitter.h>
#endif
#ifndef INCLUDED_luxe_Entity
#include <luxe/Entity.h>
#endif
#ifndef INCLUDED_luxe_Objects
#include <luxe/Objects.h>
#endif
#ifndef INCLUDED_luxe_Scene
#include <luxe/Scene.h>
#endif
#ifndef INCLUDED_snow_App
#include <snow/App.h>
#endif
namespace luxe{

Void Scene_obj::__construct(::String __o__name)
{
HX_STACK_FRAME("luxe.Scene","new",0x652ab566,"luxe.Scene.new","luxe/Scene.hx",11,0x14d4e1cb)
HX_STACK_THIS(this)
HX_STACK_ARG(__o__name,"_name")
::String _name = __o__name.Default(HX_CSTRING("untitled scene"));
{
	HX_STACK_LINE(20)
	this->length = (int)0;
	HX_STACK_LINE(15)
	this->started = false;
	HX_STACK_LINE(14)
	this->inited = false;
	HX_STACK_LINE(24)
	super::__construct(_name,null());
	HX_STACK_LINE(27)
	::haxe::ds::StringMap _g = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(27)
	this->entities = _g;
	HX_STACK_LINE(29)
	this->_delayed_init_entities = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(30)
	this->_delayed_reset_entities = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(32)
	::Luxe_obj::core->on(HX_CSTRING("init"),this->init_dyn());
	HX_STACK_LINE(33)
	::Luxe_obj::core->on(HX_CSTRING("destroy"),this->_destroy_dyn());
	HX_STACK_LINE(34)
	::Luxe_obj::core->on(HX_CSTRING("update"),this->update_dyn());
	HX_STACK_LINE(36)
	::Luxe_obj::core->on(HX_CSTRING("prerender"),this->prerender_dyn());
	HX_STACK_LINE(37)
	::Luxe_obj::core->on(HX_CSTRING("postrender"),this->postrender_dyn());
	HX_STACK_LINE(38)
	::Luxe_obj::core->on(HX_CSTRING("render"),this->render_dyn());
	HX_STACK_LINE(40)
	::Luxe_obj::core->on(HX_CSTRING("keydown"),this->keydown_dyn());
	HX_STACK_LINE(41)
	::Luxe_obj::core->on(HX_CSTRING("keyup"),this->keyup_dyn());
	HX_STACK_LINE(42)
	::Luxe_obj::core->on(HX_CSTRING("textinput"),this->textinput_dyn());
	HX_STACK_LINE(44)
	::Luxe_obj::core->on(HX_CSTRING("inputup"),this->inputup_dyn());
	HX_STACK_LINE(45)
	::Luxe_obj::core->on(HX_CSTRING("inputdown"),this->inputdown_dyn());
	HX_STACK_LINE(47)
	::Luxe_obj::core->on(HX_CSTRING("mouseup"),this->mouseup_dyn());
	HX_STACK_LINE(48)
	::Luxe_obj::core->on(HX_CSTRING("mousedown"),this->mousedown_dyn());
	HX_STACK_LINE(49)
	::Luxe_obj::core->on(HX_CSTRING("mousemove"),this->mousemove_dyn());
	HX_STACK_LINE(50)
	::Luxe_obj::core->on(HX_CSTRING("mousewheel"),this->mousewheel_dyn());
	HX_STACK_LINE(52)
	::Luxe_obj::core->on(HX_CSTRING("touchup"),this->touchup_dyn());
	HX_STACK_LINE(53)
	::Luxe_obj::core->on(HX_CSTRING("touchdown"),this->touchdown_dyn());
	HX_STACK_LINE(54)
	::Luxe_obj::core->on(HX_CSTRING("touchmove"),this->touchmove_dyn());
	HX_STACK_LINE(56)
	::Luxe_obj::core->on(HX_CSTRING("gamepadup"),this->gamepadup_dyn());
	HX_STACK_LINE(57)
	::Luxe_obj::core->on(HX_CSTRING("gamepaddown"),this->gamepaddown_dyn());
	HX_STACK_LINE(58)
	::Luxe_obj::core->on(HX_CSTRING("gamepadaxis"),this->gamepadaxis_dyn());
	HX_STACK_LINE(59)
	::Luxe_obj::core->on(HX_CSTRING("gamepaddevice"),this->gamepaddevice_dyn());
	HX_STACK_LINE(62)
	if ((::Luxe_obj::core->has_inited)){
		HX_STACK_LINE(63)
		this->init(null());
	}
}
;
	return null();
}

//Scene_obj::~Scene_obj() { }

Dynamic Scene_obj::__CreateEmpty() { return  new Scene_obj; }
hx::ObjectPtr< Scene_obj > Scene_obj::__new(::String __o__name)
{  hx::ObjectPtr< Scene_obj > result = new Scene_obj();
	result->__construct(__o__name);
	return result;}

Dynamic Scene_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Scene_obj > result = new Scene_obj();
	result->__construct(inArgs[0]);
	return result;}

Void Scene_obj::add( ::luxe::Entity entity){
{
		HX_STACK_FRAME("luxe.Scene","add",0x6520d727,"luxe.Scene.add","luxe/Scene.hx",69,0x14d4e1cb)
		HX_STACK_THIS(this)
		HX_STACK_ARG(entity,"entity")
		HX_STACK_LINE(71)
		if (((entity == null()))){
			HX_STACK_LINE(72)
			HX_STACK_DO_THROW(HX_CSTRING("can't put entity in a scene if the entity is null."));
		}
		HX_STACK_LINE(77)
		if ((this->entities->exists(entity->name))){
			HX_STACK_LINE(78)
			::haxe::Log_obj::trace((HX_CSTRING("    i / scene / ") + (((((HX_CSTRING("") + this->name) + HX_CSTRING(" / adding a second entity named ")) + entity->name) + HX_CSTRING("!\r\n                This will replace the existing one, possibly leaving the previous one in limbo.\r\n                Use EntityOptions name_unique flag to automatically handle this for similar named entities.")))),hx::SourceInfo(HX_CSTRING("Scene.hx"),78,HX_CSTRING("luxe.Scene"),HX_CSTRING("add")));
		}
		HX_STACK_LINE(83)
		entity->set_scene(hx::ObjectPtr<OBJ_>(this));
		HX_STACK_LINE(84)
		this->entities->set(entity->name,entity);
		HX_STACK_LINE(87)
		if ((this->inited)){
			HX_STACK_LINE(89)
			this->_delayed_init_entities->push(entity);
		}
		HX_STACK_LINE(92)
		if ((this->started)){
			HX_STACK_LINE(94)
			this->_delayed_reset_entities->push(entity);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,add,(void))

bool Scene_obj::remove( ::luxe::Entity entity){
	HX_STACK_FRAME("luxe.Scene","remove",0x2b461efe,"luxe.Scene.remove","luxe/Scene.hx",100,0x14d4e1cb)
	HX_STACK_THIS(this)
	HX_STACK_ARG(entity,"entity")
	HX_STACK_LINE(102)
	if (((entity == null()))){
		HX_STACK_LINE(103)
		HX_STACK_DO_THROW(HX_CSTRING("can't remove entity from a scene if the entity is null."));
	}
	HX_STACK_LINE(106)
	::luxe::Scene _g = entity->get_scene();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(106)
	if (((_g == hx::ObjectPtr<OBJ_>(this)))){
		HX_STACK_LINE(108)
		entity->set_scene(null());
		HX_STACK_LINE(109)
		return this->entities->remove(entity->name);
	}
	else{
		HX_STACK_LINE(113)
		::haxe::Log_obj::trace(HX_CSTRING("    i / scene / can't remove the entity from this scene, it is not mine (entity.scene != this)"),hx::SourceInfo(HX_CSTRING("Scene.hx"),113,HX_CSTRING("luxe.Scene"),HX_CSTRING("remove")));
		HX_STACK_LINE(114)
		return false;
	}
	HX_STACK_LINE(118)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,remove,return )

Void Scene_obj::empty( ){
{
		HX_STACK_FRAME("luxe.Scene","empty",0xe3f8ed13,"luxe.Scene.empty","luxe/Scene.hx",125,0x14d4e1cb)
		HX_STACK_THIS(this)
		HX_STACK_LINE(125)
		for(::cpp::FastIterator_obj< ::luxe::Entity > *__it = ::cpp::CreateFastIterator< ::luxe::Entity >(this->entities->iterator());  __it->hasNext(); ){
			::luxe::Entity entity = __it->next();
			if (((entity != null()))){
				HX_STACK_LINE(128)
				this->remove(entity);
				HX_STACK_LINE(129)
				entity->destroy(null());
				HX_STACK_LINE(130)
				entity = null();
			}
;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Scene_obj,empty,(void))

Array< ::Dynamic > Scene_obj::get_named_like( ::String _name,Array< ::Dynamic > into){
	HX_STACK_FRAME("luxe.Scene","get_named_like",0x42ca57e0,"luxe.Scene.get_named_like","luxe/Scene.hx",147,0x14d4e1cb)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_name,"_name")
	HX_STACK_ARG(into,"into")
	HX_STACK_LINE(149)
	::EReg _filter = ::EReg_obj::__new(((HX_CSTRING("^((?:") + _name) + HX_CSTRING(")[.]{1})")),HX_CSTRING("g"));		HX_STACK_VAR(_filter,"_filter");
	HX_STACK_LINE(150)
	for(::cpp::FastIterator_obj< ::luxe::Entity > *__it = ::cpp::CreateFastIterator< ::luxe::Entity >(this->entities->iterator());  __it->hasNext(); ){
		::luxe::Entity _entity = __it->next();
		if ((_filter->match(_entity->name))){
			HX_STACK_LINE(152)
			into->push(_entity);
		}
;
	}
	HX_STACK_LINE(156)
	return into;
}


HX_DEFINE_DYNAMIC_FUNC2(Scene_obj,get_named_like,return )

Void Scene_obj::render( Dynamic _){
{
		HX_STACK_FRAME("luxe.Scene","render",0x2be6ee10,"luxe.Scene.render","luxe/Scene.hx",164,0x14d4e1cb)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_,"_")
		HX_STACK_LINE(164)
		this->emit(HX_CSTRING("render"),null(),hx::SourceInfo(HX_CSTRING("Scene.hx"),164,HX_CSTRING("luxe.Scene"),HX_CSTRING("render")));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,render,(void))

Void Scene_obj::prerender( Dynamic _){
{
		HX_STACK_FRAME("luxe.Scene","prerender",0x8547753f,"luxe.Scene.prerender","luxe/Scene.hx",170,0x14d4e1cb)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_,"_")
		HX_STACK_LINE(170)
		this->emit(HX_CSTRING("prerender"),null(),hx::SourceInfo(HX_CSTRING("Scene.hx"),170,HX_CSTRING("luxe.Scene"),HX_CSTRING("prerender")));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,prerender,(void))

Void Scene_obj::postrender( Dynamic _){
{
		HX_STACK_FRAME("luxe.Scene","postrender",0x1efbdf70,"luxe.Scene.postrender","luxe/Scene.hx",176,0x14d4e1cb)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_,"_")
		HX_STACK_LINE(176)
		this->emit(HX_CSTRING("postrender"),null(),hx::SourceInfo(HX_CSTRING("Scene.hx"),176,HX_CSTRING("luxe.Scene"),HX_CSTRING("postrender")));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,postrender,(void))

Void Scene_obj::keydown( Dynamic e){
{
		HX_STACK_FRAME("luxe.Scene","keydown",0x70831d87,"luxe.Scene.keydown","luxe/Scene.hx",186,0x14d4e1cb)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(186)
		this->emit(HX_CSTRING("keydown"),e,hx::SourceInfo(HX_CSTRING("Scene.hx"),186,HX_CSTRING("luxe.Scene"),HX_CSTRING("keydown")));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,keydown,(void))

Void Scene_obj::keyup( Dynamic e){
{
		HX_STACK_FRAME("luxe.Scene","keyup",0x531d8840,"luxe.Scene.keyup","luxe/Scene.hx",194,0x14d4e1cb)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(194)
		this->emit(HX_CSTRING("keyup"),e,hx::SourceInfo(HX_CSTRING("Scene.hx"),194,HX_CSTRING("luxe.Scene"),HX_CSTRING("keyup")));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,keyup,(void))

Void Scene_obj::textinput( Dynamic e){
{
		HX_STACK_FRAME("luxe.Scene","textinput",0x19ef51c3,"luxe.Scene.textinput","luxe/Scene.hx",202,0x14d4e1cb)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(202)
		this->emit(HX_CSTRING("textinput"),e,hx::SourceInfo(HX_CSTRING("Scene.hx"),202,HX_CSTRING("luxe.Scene"),HX_CSTRING("textinput")));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,textinput,(void))

Void Scene_obj::mousedown( Dynamic e){
{
		HX_STACK_FRAME("luxe.Scene","mousedown",0x59faf28d,"luxe.Scene.mousedown","luxe/Scene.hx",212,0x14d4e1cb)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(212)
		this->emit(HX_CSTRING("mousedown"),e,hx::SourceInfo(HX_CSTRING("Scene.hx"),212,HX_CSTRING("luxe.Scene"),HX_CSTRING("mousedown")));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,mousedown,(void))

Void Scene_obj::mousewheel( Dynamic e){
{
		HX_STACK_FRAME("luxe.Scene","mousewheel",0x4d882010,"luxe.Scene.mousewheel","luxe/Scene.hx",220,0x14d4e1cb)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(220)
		this->emit(HX_CSTRING("mousewheel"),e,hx::SourceInfo(HX_CSTRING("Scene.hx"),220,HX_CSTRING("luxe.Scene"),HX_CSTRING("mousewheel")));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,mousewheel,(void))

Void Scene_obj::mouseup( Dynamic e){
{
		HX_STACK_FRAME("luxe.Scene","mouseup",0x7f87efc6,"luxe.Scene.mouseup","luxe/Scene.hx",228,0x14d4e1cb)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(228)
		this->emit(HX_CSTRING("mouseup"),e,hx::SourceInfo(HX_CSTRING("Scene.hx"),228,HX_CSTRING("luxe.Scene"),HX_CSTRING("mouseup")));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,mouseup,(void))

Void Scene_obj::mousemove( Dynamic e){
{
		HX_STACK_FRAME("luxe.Scene","mousemove",0x5feddd3c,"luxe.Scene.mousemove","luxe/Scene.hx",236,0x14d4e1cb)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(236)
		this->emit(HX_CSTRING("mousemove"),e,hx::SourceInfo(HX_CSTRING("Scene.hx"),236,HX_CSTRING("luxe.Scene"),HX_CSTRING("mousemove")));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,mousemove,(void))

Void Scene_obj::touchdown( Dynamic event){
{
		HX_STACK_FRAME("luxe.Scene","touchdown",0x7312c927,"luxe.Scene.touchdown","luxe/Scene.hx",244,0x14d4e1cb)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(244)
		this->emit(HX_CSTRING("touchdown"),event,hx::SourceInfo(HX_CSTRING("Scene.hx"),244,HX_CSTRING("luxe.Scene"),HX_CSTRING("touchdown")));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,touchdown,(void))

Void Scene_obj::touchup( Dynamic event){
{
		HX_STACK_FRAME("luxe.Scene","touchup",0x980d0be0,"luxe.Scene.touchup","luxe/Scene.hx",250,0x14d4e1cb)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(250)
		this->emit(HX_CSTRING("touchup"),event,hx::SourceInfo(HX_CSTRING("Scene.hx"),250,HX_CSTRING("luxe.Scene"),HX_CSTRING("touchup")));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,touchup,(void))

Void Scene_obj::touchmove( Dynamic event){
{
		HX_STACK_FRAME("luxe.Scene","touchmove",0x7905b3d6,"luxe.Scene.touchmove","luxe/Scene.hx",256,0x14d4e1cb)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(256)
		this->emit(HX_CSTRING("touchmove"),event,hx::SourceInfo(HX_CSTRING("Scene.hx"),256,HX_CSTRING("luxe.Scene"),HX_CSTRING("touchmove")));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,touchmove,(void))

Void Scene_obj::gamepadaxis( Dynamic event){
{
		HX_STACK_FRAME("luxe.Scene","gamepadaxis",0xf55ebcc8,"luxe.Scene.gamepadaxis","luxe/Scene.hx",264,0x14d4e1cb)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(264)
		this->emit(HX_CSTRING("gamepadaxis"),event,hx::SourceInfo(HX_CSTRING("Scene.hx"),264,HX_CSTRING("luxe.Scene"),HX_CSTRING("gamepadaxis")));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,gamepadaxis,(void))

Void Scene_obj::gamepadup( Dynamic event){
{
		HX_STACK_FRAME("luxe.Scene","gamepadup",0xb549dec2,"luxe.Scene.gamepadup","luxe/Scene.hx",270,0x14d4e1cb)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(270)
		this->emit(HX_CSTRING("gamepadup"),event,hx::SourceInfo(HX_CSTRING("Scene.hx"),270,HX_CSTRING("luxe.Scene"),HX_CSTRING("gamepadup")));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,gamepadup,(void))

Void Scene_obj::gamepaddown( Dynamic event){
{
		HX_STACK_FRAME("luxe.Scene","gamepaddown",0xf7539889,"luxe.Scene.gamepaddown","luxe/Scene.hx",276,0x14d4e1cb)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(276)
		this->emit(HX_CSTRING("gamepaddown"),event,hx::SourceInfo(HX_CSTRING("Scene.hx"),276,HX_CSTRING("luxe.Scene"),HX_CSTRING("gamepaddown")));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,gamepaddown,(void))

Void Scene_obj::gamepaddevice( Dynamic event){
{
		HX_STACK_FRAME("luxe.Scene","gamepaddevice",0x6323147d,"luxe.Scene.gamepaddevice","luxe/Scene.hx",282,0x14d4e1cb)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(282)
		this->emit(HX_CSTRING("gamepaddevice"),event,hx::SourceInfo(HX_CSTRING("Scene.hx"),282,HX_CSTRING("luxe.Scene"),HX_CSTRING("gamepaddevice")));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,gamepaddevice,(void))

Void Scene_obj::inputdown( Dynamic event){
{
		HX_STACK_FRAME("luxe.Scene","inputdown",0x74d0f6f2,"luxe.Scene.inputdown","luxe/Scene.hx",290,0x14d4e1cb)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(290)
		this->emit(HX_CSTRING("inputdown"),event,hx::SourceInfo(HX_CSTRING("Scene.hx"),290,HX_CSTRING("luxe.Scene"),HX_CSTRING("inputdown")));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,inputdown,(void))

Void Scene_obj::inputup( Dynamic event){
{
		HX_STACK_FRAME("luxe.Scene","inputup",0x9333a0eb,"luxe.Scene.inputup","luxe/Scene.hx",296,0x14d4e1cb)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(296)
		this->emit(HX_CSTRING("inputup"),event,hx::SourceInfo(HX_CSTRING("Scene.hx"),296,HX_CSTRING("luxe.Scene"),HX_CSTRING("inputup")));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,inputup,(void))

Void Scene_obj::_destroy( Dynamic _){
{
		HX_STACK_FRAME("luxe.Scene","_destroy",0xd16dabb5,"luxe.Scene._destroy","luxe/Scene.hx",304,0x14d4e1cb)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_,"_")
		HX_STACK_LINE(304)
		this->destroy();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,_destroy,(void))

Void Scene_obj::destroy( ){
{
		HX_STACK_FRAME("luxe.Scene","destroy",0xe39b0d00,"luxe.Scene.destroy","luxe/Scene.hx",308,0x14d4e1cb)
		HX_STACK_THIS(this)
		HX_STACK_LINE(310)
		::Luxe_obj::core->off(HX_CSTRING("init"),this->init_dyn());
		HX_STACK_LINE(311)
		::Luxe_obj::core->off(HX_CSTRING("destroy"),this->_destroy_dyn());
		HX_STACK_LINE(312)
		::Luxe_obj::core->off(HX_CSTRING("update"),this->update_dyn());
		HX_STACK_LINE(314)
		::Luxe_obj::core->off(HX_CSTRING("prerender"),this->prerender_dyn());
		HX_STACK_LINE(315)
		::Luxe_obj::core->off(HX_CSTRING("postrender"),this->postrender_dyn());
		HX_STACK_LINE(316)
		::Luxe_obj::core->off(HX_CSTRING("render"),this->render_dyn());
		HX_STACK_LINE(318)
		::Luxe_obj::core->off(HX_CSTRING("keydown"),this->keydown_dyn());
		HX_STACK_LINE(319)
		::Luxe_obj::core->off(HX_CSTRING("keyup"),this->keyup_dyn());
		HX_STACK_LINE(320)
		::Luxe_obj::core->off(HX_CSTRING("textinput"),this->textinput_dyn());
		HX_STACK_LINE(322)
		::Luxe_obj::core->off(HX_CSTRING("inputup"),this->inputup_dyn());
		HX_STACK_LINE(323)
		::Luxe_obj::core->off(HX_CSTRING("inputdown"),this->inputdown_dyn());
		HX_STACK_LINE(325)
		::Luxe_obj::core->off(HX_CSTRING("mouseup"),this->mouseup_dyn());
		HX_STACK_LINE(326)
		::Luxe_obj::core->off(HX_CSTRING("mousedown"),this->mousedown_dyn());
		HX_STACK_LINE(327)
		::Luxe_obj::core->off(HX_CSTRING("mousemove"),this->mousemove_dyn());
		HX_STACK_LINE(328)
		::Luxe_obj::core->off(HX_CSTRING("mousewheel"),this->mousewheel_dyn());
		HX_STACK_LINE(330)
		::Luxe_obj::core->off(HX_CSTRING("touchup"),this->touchup_dyn());
		HX_STACK_LINE(331)
		::Luxe_obj::core->off(HX_CSTRING("touchdown"),this->touchdown_dyn());
		HX_STACK_LINE(332)
		::Luxe_obj::core->off(HX_CSTRING("touchmove"),this->touchmove_dyn());
		HX_STACK_LINE(334)
		::Luxe_obj::core->off(HX_CSTRING("gamepadup"),this->gamepadup_dyn());
		HX_STACK_LINE(335)
		::Luxe_obj::core->off(HX_CSTRING("gamepaddown"),this->gamepaddown_dyn());
		HX_STACK_LINE(336)
		::Luxe_obj::core->off(HX_CSTRING("gamepadaxis"),this->gamepadaxis_dyn());
		HX_STACK_LINE(337)
		::Luxe_obj::core->off(HX_CSTRING("gamepaddevice"),this->gamepaddevice_dyn());
		HX_STACK_LINE(339)
		this->emit(HX_CSTRING("destroy"),null(),hx::SourceInfo(HX_CSTRING("Scene.hx"),339,HX_CSTRING("luxe.Scene"),HX_CSTRING("destroy")));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Scene_obj,destroy,(void))

bool Scene_obj::_do_init( ){
	HX_STACK_FRAME("luxe.Scene","_do_init",0x45b3463f,"luxe.Scene._do_init","luxe/Scene.hx",343,0x14d4e1cb)
	HX_STACK_THIS(this)
	HX_STACK_LINE(345)
	int _before_count = this->get_length();		HX_STACK_VAR(_before_count,"_before_count");
	HX_STACK_LINE(347)
	for(::cpp::FastIterator_obj< ::luxe::Entity > *__it = ::cpp::CreateFastIterator< ::luxe::Entity >(this->entities->iterator());  __it->hasNext(); ){
		::luxe::Entity entity = __it->next();
		if (((entity != null()))){
			HX_STACK_LINE(349)
			if ((!(entity->inited))){
				HX_STACK_LINE(351)
				entity->_init();
			}
		}
;
	}
	HX_STACK_LINE(356)
	int _after_count = this->get_length();		HX_STACK_VAR(_after_count,"_after_count");
	HX_STACK_LINE(358)
	return (_before_count != _after_count);
}


HX_DEFINE_DYNAMIC_FUNC0(Scene_obj,_do_init,return )

Void Scene_obj::init( Dynamic _){
{
		HX_STACK_FRAME("luxe.Scene","init",0x1cecbb4a,"luxe.Scene.init","luxe/Scene.hx",364,0x14d4e1cb)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_,"_")
		HX_STACK_LINE(366)
		bool keep_going = true;		HX_STACK_VAR(keep_going,"keep_going");
		HX_STACK_LINE(367)
		while((true)){
			HX_STACK_LINE(367)
			if ((!(keep_going))){
				HX_STACK_LINE(367)
				break;
			}
			HX_STACK_LINE(368)
			bool _g = this->_do_init();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(368)
			keep_going = _g;
		}
		HX_STACK_LINE(371)
		this->inited = true;
		HX_STACK_LINE(373)
		this->emit(HX_CSTRING("init"),null(),hx::SourceInfo(HX_CSTRING("Scene.hx"),373,HX_CSTRING("luxe.Scene"),HX_CSTRING("init")));
		HX_STACK_LINE(375)
		this->reset();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,init,(void))

Void Scene_obj::reset( ){
{
		HX_STACK_FRAME("luxe.Scene","reset",0x5ae6fc55,"luxe.Scene.reset","luxe/Scene.hx",380,0x14d4e1cb)
		HX_STACK_THIS(this)
		HX_STACK_LINE(382)
		this->started = false;
		HX_STACK_LINE(384)
		this->emit(HX_CSTRING("reset"),null(),hx::SourceInfo(HX_CSTRING("Scene.hx"),384,HX_CSTRING("luxe.Scene"),HX_CSTRING("reset")));
		HX_STACK_LINE(386)
		this->started = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Scene_obj,reset,(void))

Void Scene_obj::update( Float dt){
{
		HX_STACK_FRAME("luxe.Scene","update",0xadc308c3,"luxe.Scene.update","luxe/Scene.hx",390,0x14d4e1cb)
		HX_STACK_THIS(this)
		HX_STACK_ARG(dt,"dt")
		HX_STACK_LINE(392)
		::Luxe_obj::core->debug->start((HX_CSTRING("scene.") + this->name),null());
		HX_STACK_LINE(395)
		this->handle_delayed_additions();
		HX_STACK_LINE(397)
		this->emit(HX_CSTRING("update"),dt,hx::SourceInfo(HX_CSTRING("Scene.hx"),397,HX_CSTRING("luxe.Scene"),HX_CSTRING("update")));
		HX_STACK_LINE(400)
		for(::cpp::FastIterator_obj< ::luxe::Entity > *__it = ::cpp::CreateFastIterator< ::luxe::Entity >(this->entities->iterator());  __it->hasNext(); ){
			::luxe::Entity entity = __it->next();
			if (((entity != null()))){
				HX_STACK_LINE(402)
				entity->_update(dt);
			}
;
		}
		HX_STACK_LINE(406)
		::Luxe_obj::core->debug->end((HX_CSTRING("scene.") + this->name));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,update,(void))

Void Scene_obj::handle_delayed_additions( ){
{
		HX_STACK_FRAME("luxe.Scene","handle_delayed_additions",0xbf640c7d,"luxe.Scene.handle_delayed_additions","luxe/Scene.hx",410,0x14d4e1cb)
		HX_STACK_THIS(this)
		HX_STACK_LINE(412)
		if (((bool((this->_delayed_init_entities->length != (int)0)) || bool((this->_delayed_reset_entities->length != (int)0))))){
			HX_STACK_LINE(138)
			Dynamic();
		}
		HX_STACK_LINE(416)
		if (((this->_delayed_init_entities->length > (int)0))){
			HX_STACK_LINE(417)
			{
				HX_STACK_LINE(417)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(417)
				Array< ::Dynamic > _g1 = this->_delayed_init_entities;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(417)
				while((true)){
					HX_STACK_LINE(417)
					if ((!(((_g < _g1->length))))){
						HX_STACK_LINE(417)
						break;
					}
					HX_STACK_LINE(417)
					::luxe::Entity entity = _g1->__get(_g).StaticCast< ::luxe::Entity >();		HX_STACK_VAR(entity,"entity");
					HX_STACK_LINE(417)
					++(_g);
					HX_STACK_LINE(419)
					entity->_init();
				}
			}
			HX_STACK_LINE(421)
			this->_delayed_init_entities->splice((int)0,this->_delayed_init_entities->length);
		}
		HX_STACK_LINE(424)
		if (((this->_delayed_reset_entities->length > (int)0))){
			HX_STACK_LINE(425)
			{
				HX_STACK_LINE(425)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(425)
				Array< ::Dynamic > _g1 = this->_delayed_reset_entities;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(425)
				while((true)){
					HX_STACK_LINE(425)
					if ((!(((_g < _g1->length))))){
						HX_STACK_LINE(425)
						break;
					}
					HX_STACK_LINE(425)
					::luxe::Entity entity = _g1->__get(_g).StaticCast< ::luxe::Entity >();		HX_STACK_VAR(entity,"entity");
					HX_STACK_LINE(425)
					++(_g);
					HX_STACK_LINE(427)
					entity->_reset(null());
				}
			}
			HX_STACK_LINE(429)
			this->_delayed_reset_entities->splice((int)0,this->_delayed_reset_entities->length);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Scene_obj,handle_delayed_additions,(void))

int Scene_obj::get_length( ){
	HX_STACK_FRAME("luxe.Scene","get_length",0x88bd6c69,"luxe.Scene.get_length","luxe/Scene.hx",436,0x14d4e1cb)
	HX_STACK_THIS(this)
	HX_STACK_LINE(436)
	return ::Lambda_obj::count(this->entities,null());
}


HX_DEFINE_DYNAMIC_FUNC0(Scene_obj,get_length,return )

::String Scene_obj::toString( ){
	HX_STACK_FRAME("luxe.Scene","toString",0xab9df5e6,"luxe.Scene.toString","luxe/Scene.hx",440,0x14d4e1cb)
	HX_STACK_THIS(this)
	HX_STACK_LINE(442)
	int _g = this->get_length();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(442)
	::String _g1 = (((HX_CSTRING("luxe Scene: ") + this->name) + HX_CSTRING(" / ")) + _g);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(442)
	::String _g2 = (_g1 + HX_CSTRING(" entities / id: "));		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(442)
	return (_g2 + this->id);
}


HX_DEFINE_DYNAMIC_FUNC0(Scene_obj,toString,return )


Scene_obj::Scene_obj()
{
}

void Scene_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Scene);
	HX_MARK_MEMBER_NAME(entities,"entities");
	HX_MARK_MEMBER_NAME(inited,"inited");
	HX_MARK_MEMBER_NAME(started,"started");
	HX_MARK_MEMBER_NAME(_delayed_init_entities,"_delayed_init_entities");
	HX_MARK_MEMBER_NAME(_delayed_reset_entities,"_delayed_reset_entities");
	HX_MARK_MEMBER_NAME(length,"length");
	::luxe::Objects_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Scene_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(entities,"entities");
	HX_VISIT_MEMBER_NAME(inited,"inited");
	HX_VISIT_MEMBER_NAME(started,"started");
	HX_VISIT_MEMBER_NAME(_delayed_init_entities,"_delayed_init_entities");
	HX_VISIT_MEMBER_NAME(_delayed_reset_entities,"_delayed_reset_entities");
	HX_VISIT_MEMBER_NAME(length,"length");
	::luxe::Objects_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Scene_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return add_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"empty") ) { return empty_dyn(); }
		if (HX_FIELD_EQ(inName,"keyup") ) { return keyup_dyn(); }
		if (HX_FIELD_EQ(inName,"reset") ) { return reset_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"inited") ) { return inited; }
		if (HX_FIELD_EQ(inName,"length") ) { return inCallProp ? get_length() : length; }
		if (HX_FIELD_EQ(inName,"remove") ) { return remove_dyn(); }
		if (HX_FIELD_EQ(inName,"render") ) { return render_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"started") ) { return started; }
		if (HX_FIELD_EQ(inName,"keydown") ) { return keydown_dyn(); }
		if (HX_FIELD_EQ(inName,"mouseup") ) { return mouseup_dyn(); }
		if (HX_FIELD_EQ(inName,"touchup") ) { return touchup_dyn(); }
		if (HX_FIELD_EQ(inName,"inputup") ) { return inputup_dyn(); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"entities") ) { return entities; }
		if (HX_FIELD_EQ(inName,"_destroy") ) { return _destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"_do_init") ) { return _do_init_dyn(); }
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"prerender") ) { return prerender_dyn(); }
		if (HX_FIELD_EQ(inName,"textinput") ) { return textinput_dyn(); }
		if (HX_FIELD_EQ(inName,"mousedown") ) { return mousedown_dyn(); }
		if (HX_FIELD_EQ(inName,"mousemove") ) { return mousemove_dyn(); }
		if (HX_FIELD_EQ(inName,"touchdown") ) { return touchdown_dyn(); }
		if (HX_FIELD_EQ(inName,"touchmove") ) { return touchmove_dyn(); }
		if (HX_FIELD_EQ(inName,"gamepadup") ) { return gamepadup_dyn(); }
		if (HX_FIELD_EQ(inName,"inputdown") ) { return inputdown_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"postrender") ) { return postrender_dyn(); }
		if (HX_FIELD_EQ(inName,"mousewheel") ) { return mousewheel_dyn(); }
		if (HX_FIELD_EQ(inName,"get_length") ) { return get_length_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"gamepadaxis") ) { return gamepadaxis_dyn(); }
		if (HX_FIELD_EQ(inName,"gamepaddown") ) { return gamepaddown_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"gamepaddevice") ) { return gamepaddevice_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"get_named_like") ) { return get_named_like_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"_delayed_init_entities") ) { return _delayed_init_entities; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"_delayed_reset_entities") ) { return _delayed_reset_entities; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"handle_delayed_additions") ) { return handle_delayed_additions_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Scene_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"inited") ) { inited=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"length") ) { length=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"started") ) { started=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"entities") ) { entities=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"_delayed_init_entities") ) { _delayed_init_entities=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"_delayed_reset_entities") ) { _delayed_reset_entities=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Scene_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("entities"));
	outFields->push(HX_CSTRING("inited"));
	outFields->push(HX_CSTRING("started"));
	outFields->push(HX_CSTRING("_delayed_init_entities"));
	outFields->push(HX_CSTRING("_delayed_reset_entities"));
	outFields->push(HX_CSTRING("length"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(Scene_obj,entities),HX_CSTRING("entities")},
	{hx::fsBool,(int)offsetof(Scene_obj,inited),HX_CSTRING("inited")},
	{hx::fsBool,(int)offsetof(Scene_obj,started),HX_CSTRING("started")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Scene_obj,_delayed_init_entities),HX_CSTRING("_delayed_init_entities")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Scene_obj,_delayed_reset_entities),HX_CSTRING("_delayed_reset_entities")},
	{hx::fsInt,(int)offsetof(Scene_obj,length),HX_CSTRING("length")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("entities"),
	HX_CSTRING("inited"),
	HX_CSTRING("started"),
	HX_CSTRING("_delayed_init_entities"),
	HX_CSTRING("_delayed_reset_entities"),
	HX_CSTRING("length"),
	HX_CSTRING("add"),
	HX_CSTRING("remove"),
	HX_CSTRING("empty"),
	HX_CSTRING("get_named_like"),
	HX_CSTRING("render"),
	HX_CSTRING("prerender"),
	HX_CSTRING("postrender"),
	HX_CSTRING("keydown"),
	HX_CSTRING("keyup"),
	HX_CSTRING("textinput"),
	HX_CSTRING("mousedown"),
	HX_CSTRING("mousewheel"),
	HX_CSTRING("mouseup"),
	HX_CSTRING("mousemove"),
	HX_CSTRING("touchdown"),
	HX_CSTRING("touchup"),
	HX_CSTRING("touchmove"),
	HX_CSTRING("gamepadaxis"),
	HX_CSTRING("gamepadup"),
	HX_CSTRING("gamepaddown"),
	HX_CSTRING("gamepaddevice"),
	HX_CSTRING("inputdown"),
	HX_CSTRING("inputup"),
	HX_CSTRING("_destroy"),
	HX_CSTRING("destroy"),
	HX_CSTRING("_do_init"),
	HX_CSTRING("init"),
	HX_CSTRING("reset"),
	HX_CSTRING("update"),
	HX_CSTRING("handle_delayed_additions"),
	HX_CSTRING("get_length"),
	HX_CSTRING("toString"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Scene_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Scene_obj::__mClass,"__mClass");
};

#endif

Class Scene_obj::__mClass;

void Scene_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("luxe.Scene"), hx::TCanCast< Scene_obj> ,sStaticFields,sMemberFields,
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

void Scene_obj::__boot()
{
}

} // end namespace luxe
