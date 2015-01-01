#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_Luxe
#include <Luxe.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
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
#ifndef INCLUDED_luxe_Events
#include <luxe/Events.h>
#endif
#ifndef INCLUDED_luxe_ID
#include <luxe/ID.h>
#endif
#ifndef INCLUDED_luxe_Objects
#include <luxe/Objects.h>
#endif
#ifndef INCLUDED_luxe_Scene
#include <luxe/Scene.h>
#endif
#ifndef INCLUDED_luxe_components_Components
#include <luxe/components/Components.h>
#endif
#ifndef INCLUDED_phoenix_Matrix
#include <phoenix/Matrix.h>
#endif
#ifndef INCLUDED_phoenix_MatrixTransform
#include <phoenix/MatrixTransform.h>
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
#ifndef INCLUDED_snow_platform_native_utils_ArrayBufferView
#include <snow/platform/native/utils/ArrayBufferView.h>
#endif
#ifndef INCLUDED_snow_platform_native_utils_Float32Array
#include <snow/platform/native/utils/Float32Array.h>
#endif
#ifndef INCLUDED_snow_utils_IMemoryRange
#include <snow/utils/IMemoryRange.h>
#endif
#ifndef INCLUDED_snow_utils_Timer
#include <snow/utils/Timer.h>
#endif
namespace luxe{

Void Entity_obj::__construct(Dynamic _options)
{
HX_STACK_FRAME("luxe.Entity","new",0x3aab5f6d,"luxe.Entity.new","luxe/Entity.hx",22,0x55caa482)
HX_STACK_THIS(this)
HX_STACK_ARG(_options,"_options")
{
	HX_STACK_LINE(45)
	this->active = true;
	HX_STACK_LINE(39)
	this->fixed_rate = (int)0;
	HX_STACK_LINE(36)
	this->started = false;
	HX_STACK_LINE(34)
	this->inited = false;
	HX_STACK_LINE(32)
	this->destroyed = false;
	HX_STACK_LINE(119)
	super::__construct(HX_CSTRING("entity"),null());
	HX_STACK_LINE(122)
	hx::AddEq(this->name,(HX_CSTRING(".") + this->id));
	HX_STACK_LINE(126)
	this->options = _options;
	HX_STACK_LINE(128)
	::luxe::components::Components _g = ::luxe::components::Components_obj::__new(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(128)
	this->_components = _g;
	HX_STACK_LINE(129)
	Array< ::Dynamic > _g1 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(129)
	this->children = _g1;
	HX_STACK_LINE(130)
	::luxe::Events _g2 = ::luxe::Events_obj::__new();		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(130)
	this->events = _g2;
	HX_STACK_LINE(131)
	::phoenix::Transform _g3 = ::phoenix::Transform_obj::__new();		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(131)
	this->transform = _g3;
	HX_STACK_LINE(134)
	{
		HX_STACK_LINE(134)
		::phoenix::Transform _this = this->transform;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(134)
		if (((_this->_pos_handlers == null()))){
			HX_STACK_LINE(134)
			_this->_pos_handlers = Dynamic( Array_obj<Dynamic>::__new());
		}
		HX_STACK_LINE(134)
		_this->_pos_handlers->__Field(HX_CSTRING("push"),true)(this->set_pos_from_transform_dyn());
	}
	HX_STACK_LINE(135)
	{
		HX_STACK_LINE(135)
		::phoenix::Transform _this = this->transform;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(135)
		if (((_this->_scale_handlers == null()))){
			HX_STACK_LINE(135)
			_this->_scale_handlers = Dynamic( Array_obj<Dynamic>::__new());
		}
		HX_STACK_LINE(135)
		_this->_scale_handlers->__Field(HX_CSTRING("push"),true)(this->set_scale_from_transform_dyn());
	}
	HX_STACK_LINE(136)
	{
		HX_STACK_LINE(136)
		::phoenix::Transform _this = this->transform;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(136)
		if (((_this->_origin_handlers == null()))){
			HX_STACK_LINE(136)
			_this->_origin_handlers = Dynamic( Array_obj<Dynamic>::__new());
		}
		HX_STACK_LINE(136)
		_this->_origin_handlers->__Field(HX_CSTRING("push"),true)(this->set_origin_from_transform_dyn());
	}
	HX_STACK_LINE(137)
	{
		HX_STACK_LINE(137)
		::phoenix::Transform _this = this->transform;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(137)
		if (((_this->_parent_handlers == null()))){
			HX_STACK_LINE(137)
			_this->_parent_handlers = Dynamic( Array_obj<Dynamic>::__new());
		}
		HX_STACK_LINE(137)
		_this->_parent_handlers->__Field(HX_CSTRING("push"),true)(this->set_parent_from_transform_dyn());
	}
	HX_STACK_LINE(138)
	{
		HX_STACK_LINE(138)
		::phoenix::Transform _this = this->transform;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(138)
		if (((_this->_rotation_handlers == null()))){
			HX_STACK_LINE(138)
			_this->_rotation_handlers = Dynamic( Array_obj<Dynamic>::__new());
		}
		HX_STACK_LINE(138)
		_this->_rotation_handlers->__Field(HX_CSTRING("push"),true)(this->set_rotation_from_transform_dyn());
	}
	HX_STACK_LINE(140)
	if (((this->options != null()))){
		HX_STACK_LINE(144)
		if (((this->options->__Field(HX_CSTRING("name_unique"),true) == null()))){
			HX_STACK_LINE(145)
			this->options->__FieldRef(HX_CSTRING("name_unique")) = false;
		}
		HX_STACK_LINE(148)
		if (((this->options->__Field(HX_CSTRING("name"),true) != null()))){
			HX_STACK_LINE(149)
			this->name = this->options->__Field(HX_CSTRING("name"),true);
			HX_STACK_LINE(150)
			if ((this->options->__Field(HX_CSTRING("name_unique"),true))){
				HX_STACK_LINE(151)
				hx::AddEq(this->name,(HX_CSTRING(".") + this->id));
			}
		}
		HX_STACK_LINE(156)
		if (((this->options->__Field(HX_CSTRING("pos"),true) != null()))){
			HX_STACK_LINE(157)
			::phoenix::Vector _op = this->options->__Field(HX_CSTRING("pos"),true);		HX_STACK_VAR(_op,"_op");
			HX_STACK_LINE(158)
			::phoenix::Vector _g4 = ::phoenix::Vector_obj::__new(_op->x,_op->y,_op->z,_op->w);		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(158)
			this->set_pos(_g4);
		}
		HX_STACK_LINE(161)
		if (((this->options->__Field(HX_CSTRING("scale"),true) != null()))){
			HX_STACK_LINE(162)
			::phoenix::Vector _os = this->options->__Field(HX_CSTRING("scale"),true);		HX_STACK_VAR(_os,"_os");
			HX_STACK_LINE(163)
			::phoenix::Vector _g5 = ::phoenix::Vector_obj::__new(_os->x,_os->y,_os->z,_os->w);		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(163)
			this->set_scale(_g5);
		}
		HX_STACK_LINE(170)
		bool _should_add = true;		HX_STACK_VAR(_should_add,"_should_add");
		HX_STACK_LINE(172)
		if (((this->options->__Field(HX_CSTRING("no_scene"),true) != null()))){
			HX_STACK_LINE(173)
			if (((this->options->__Field(HX_CSTRING("no_scene"),true) == true))){
				HX_STACK_LINE(174)
				_should_add = false;
				HX_STACK_LINE(171)
				Dynamic();
			}
		}
		HX_STACK_LINE(179)
		if (((this->options->__Field(HX_CSTRING("parent"),true) != null()))){
			HX_STACK_LINE(181)
			_should_add = false;
			HX_STACK_LINE(182)
			this->set_parent(this->options->__Field(HX_CSTRING("parent"),true));
			HX_STACK_LINE(171)
			Dynamic();
		}
		HX_STACK_LINE(187)
		if ((_should_add)){
			HX_STACK_LINE(189)
			if (((this->options->__Field(HX_CSTRING("scene"),true) != null()))){
				HX_STACK_LINE(190)
				this->set_scene(this->options->__Field(HX_CSTRING("scene"),true));
				HX_STACK_LINE(171)
				Dynamic();
			}
			else{
				HX_STACK_LINE(193)
				this->set_scene(::Luxe_obj::scene);
				HX_STACK_LINE(171)
				Dynamic();
			}
		}
	}
	else{
		HX_STACK_LINE(201)
		this->set_scene(::Luxe_obj::scene);
		HX_STACK_LINE(171)
		Dynamic();
	}
	HX_STACK_LINE(209)
	::luxe::Scene _g6 = this->get_scene();		HX_STACK_VAR(_g6,"_g6");
	HX_STACK_LINE(209)
	if (((_g6 != null()))){
		HX_STACK_LINE(213)
		this->get_scene()->add(hx::ObjectPtr<OBJ_>(this));
	}
	else{
		HX_STACK_LINE(171)
		Dynamic();
	}
	HX_STACK_LINE(171)
	Dynamic();
}
;
	return null();
}

//Entity_obj::~Entity_obj() { }

Dynamic Entity_obj::__CreateEmpty() { return  new Entity_obj; }
hx::ObjectPtr< Entity_obj > Entity_obj::__new(Dynamic _options)
{  hx::ObjectPtr< Entity_obj > result = new Entity_obj();
	result->__construct(_options);
	return result;}

Dynamic Entity_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Entity_obj > result = new Entity_obj();
	result->__construct(inArgs[0]);
	return result;}

Void Entity_obj::init( ){
{
		HX_STACK_FRAME("luxe.Entity","init",0x1800d763,"luxe.Entity.init","luxe/Entity.hx",67,0x55caa482)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Entity_obj,init,(void))

Void Entity_obj::update( Float dt){
{
		HX_STACK_FRAME("luxe.Entity","update",0xab291d1c,"luxe.Entity.update","luxe/Entity.hx",69,0x55caa482)
		HX_STACK_THIS(this)
		HX_STACK_ARG(dt,"dt")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,update,(void))

Void Entity_obj::onfixedupdate( Float rate){
{
		HX_STACK_FRAME("luxe.Entity","onfixedupdate",0xe3a5550b,"luxe.Entity.onfixedupdate","luxe/Entity.hx",71,0x55caa482)
		HX_STACK_THIS(this)
		HX_STACK_ARG(rate,"rate")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,onfixedupdate,(void))

Void Entity_obj::onreset( ){
{
		HX_STACK_FRAME("luxe.Entity","onreset",0x64d911dd,"luxe.Entity.onreset","luxe/Entity.hx",74,0x55caa482)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Entity_obj,onreset,(void))

Void Entity_obj::ondestroy( ){
{
		HX_STACK_FRAME("luxe.Entity","ondestroy",0xde639488,"luxe.Entity.ondestroy","luxe/Entity.hx",76,0x55caa482)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Entity_obj,ondestroy,(void))

Void Entity_obj::onkeyup( Dynamic event){
{
		HX_STACK_FRAME("luxe.Entity","onkeyup",0x5d0f9dc8,"luxe.Entity.onkeyup","luxe/Entity.hx",79,0x55caa482)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,onkeyup,(void))

Void Entity_obj::onkeydown( Dynamic event){
{
		HX_STACK_FRAME("luxe.Entity","onkeydown",0x6b4ba50f,"luxe.Entity.onkeydown","luxe/Entity.hx",81,0x55caa482)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,onkeydown,(void))

Void Entity_obj::ontextinput( Dynamic event){
{
		HX_STACK_FRAME("luxe.Entity","ontextinput",0xbd8ecb4b,"luxe.Entity.ontextinput","luxe/Entity.hx",83,0x55caa482)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,ontextinput,(void))

Void Entity_obj::oninputdown( ::String name,Dynamic event){
{
		HX_STACK_FRAME("luxe.Entity","oninputdown",0x1870707a,"luxe.Entity.oninputdown","luxe/Entity.hx",86,0x55caa482)
		HX_STACK_THIS(this)
		HX_STACK_ARG(name,"name")
		HX_STACK_ARG(event,"event")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Entity_obj,oninputdown,(void))

Void Entity_obj::oninputup( ::String name,Dynamic event){
{
		HX_STACK_FRAME("luxe.Entity","oninputup",0x8dfc2873,"luxe.Entity.oninputup","luxe/Entity.hx",88,0x55caa482)
		HX_STACK_THIS(this)
		HX_STACK_ARG(name,"name")
		HX_STACK_ARG(event,"event")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Entity_obj,oninputup,(void))

Void Entity_obj::onmousedown( Dynamic event){
{
		HX_STACK_FRAME("luxe.Entity","onmousedown",0xfd9a6c15,"luxe.Entity.onmousedown","luxe/Entity.hx",91,0x55caa482)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,onmousedown,(void))

Void Entity_obj::onmouseup( Dynamic event){
{
		HX_STACK_FRAME("luxe.Entity","onmouseup",0x7a50774e,"luxe.Entity.onmouseup","luxe/Entity.hx",93,0x55caa482)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,onmouseup,(void))

Void Entity_obj::onmousemove( Dynamic event){
{
		HX_STACK_FRAME("luxe.Entity","onmousemove",0x038d56c4,"luxe.Entity.onmousemove","luxe/Entity.hx",95,0x55caa482)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,onmousemove,(void))

Void Entity_obj::onmousewheel( Dynamic event){
{
		HX_STACK_FRAME("luxe.Entity","onmousewheel",0xd572fd88,"luxe.Entity.onmousewheel","luxe/Entity.hx",97,0x55caa482)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,onmousewheel,(void))

Void Entity_obj::ontouchdown( Dynamic event){
{
		HX_STACK_FRAME("luxe.Entity","ontouchdown",0x16b242af,"luxe.Entity.ontouchdown","luxe/Entity.hx",100,0x55caa482)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,ontouchdown,(void))

Void Entity_obj::ontouchup( Dynamic event){
{
		HX_STACK_FRAME("luxe.Entity","ontouchup",0x92d59368,"luxe.Entity.ontouchup","luxe/Entity.hx",102,0x55caa482)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,ontouchup,(void))

Void Entity_obj::ontouchmove( Dynamic event){
{
		HX_STACK_FRAME("luxe.Entity","ontouchmove",0x1ca52d5e,"luxe.Entity.ontouchmove","luxe/Entity.hx",104,0x55caa482)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,ontouchmove,(void))

Void Entity_obj::ongamepadup( Dynamic event){
{
		HX_STACK_FRAME("luxe.Entity","ongamepadup",0x58e9584a,"luxe.Entity.ongamepadup","luxe/Entity.hx",107,0x55caa482)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,ongamepadup,(void))

Void Entity_obj::ongamepaddown( Dynamic event){
{
		HX_STACK_FRAME("luxe.Entity","ongamepaddown",0x5cea8411,"luxe.Entity.ongamepaddown","luxe/Entity.hx",109,0x55caa482)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,ongamepaddown,(void))

Void Entity_obj::ongamepadaxis( Dynamic event){
{
		HX_STACK_FRAME("luxe.Entity","ongamepadaxis",0x5af5a850,"luxe.Entity.ongamepadaxis","luxe/Entity.hx",111,0x55caa482)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,ongamepadaxis,(void))

Void Entity_obj::ongamepaddevice( Dynamic event){
{
		HX_STACK_FRAME("luxe.Entity","ongamepaddevice",0x8cf1f205,"luxe.Entity.ongamepaddevice","luxe/Entity.hx",113,0x55caa482)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,ongamepaddevice,(void))

Dynamic Entity_obj::add( Dynamic _component){
	HX_STACK_FRAME("luxe.Entity","add",0x3aa1812e,"luxe.Entity.add","luxe/Entity.hx",231,0x55caa482)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_component,"_component")
	HX_STACK_LINE(231)
	return this->_components->add(_component);
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,add,return )

bool Entity_obj::remove( ::String _name){
	HX_STACK_FRAME("luxe.Entity","remove",0x28ac3357,"luxe.Entity.remove","luxe/Entity.hx",236,0x55caa482)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_name,"_name")
	HX_STACK_LINE(236)
	return this->_components->remove(_name);
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,remove,return )

Dynamic Entity_obj::get( ::String _name,Dynamic __o__in_children){
Dynamic _in_children = __o__in_children.Default(false);
	HX_STACK_FRAME("luxe.Entity","get",0x3aa60fa3,"luxe.Entity.get","luxe/Entity.hx",241,0x55caa482)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_name,"_name")
	HX_STACK_ARG(_in_children,"_in_children")
{
		HX_STACK_LINE(241)
		return this->_components->get(_name,_in_children);
	}
}


HX_DEFINE_DYNAMIC_FUNC2(Entity_obj,get,return )

Dynamic Entity_obj::get_any( ::String _name,Dynamic __o__in_children,Dynamic __o__first_only){
Dynamic _in_children = __o__in_children.Default(false);
Dynamic _first_only = __o__first_only.Default(true);
	HX_STACK_FRAME("luxe.Entity","get_any",0xa1bf5d10,"luxe.Entity.get_any","luxe/Entity.hx",246,0x55caa482)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_name,"_name")
	HX_STACK_ARG(_in_children,"_in_children")
	HX_STACK_ARG(_first_only,"_first_only")
{
		HX_STACK_LINE(246)
		return this->_components->get_any(_name,_in_children,_first_only);
	}
}


HX_DEFINE_DYNAMIC_FUNC3(Entity_obj,get_any,return )

bool Entity_obj::has( ::String _name){
	HX_STACK_FRAME("luxe.Entity","has",0x3aa6ce67,"luxe.Entity.has","luxe/Entity.hx",251,0x55caa482)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_name,"_name")
	HX_STACK_LINE(251)
	return this->_components->has(_name);
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,has,return )

Void Entity_obj::_init( ){
{
		HX_STACK_FRAME("luxe.Entity","_init",0x236f833c,"luxe.Entity._init","luxe/Entity.hx",259,0x55caa482)
		HX_STACK_THIS(this)
		HX_STACK_LINE(265)
		this->init();
		HX_STACK_LINE(268)
		this->emit(HX_CSTRING("init"),null(),hx::SourceInfo(HX_CSTRING("Entity.hx"),268,HX_CSTRING("luxe.Entity"),HX_CSTRING("_init")));
		struct _Function_1_1{
			inline static Dynamic Block( hx::ObjectPtr< ::luxe::Entity_obj > __this){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/Entity.hx",271,0x55caa482)
				{
					HX_STACK_LINE(271)
					::IMap this1 = __this->get_components();		HX_STACK_VAR(this1,"this1");
					HX_STACK_LINE(271)
					return this1->iterator();
				}
				return null();
			}
		};
		HX_STACK_LINE(271)
		for(::cpp::FastIterator_obj< ::luxe::Component > *__it = ::cpp::CreateFastIterator< ::luxe::Component >(_Function_1_1::Block(this));  __it->hasNext(); ){
			::luxe::Component _component = __it->next();
			_component->init();
		}
		HX_STACK_LINE(277)
		{
			HX_STACK_LINE(277)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(277)
			Array< ::Dynamic > _g1 = this->children;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(277)
			while((true)){
				HX_STACK_LINE(277)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(277)
					break;
				}
				HX_STACK_LINE(277)
				::luxe::Entity _child = _g1->__get(_g).StaticCast< ::luxe::Entity >();		HX_STACK_VAR(_child,"_child");
				HX_STACK_LINE(277)
				++(_g);
				HX_STACK_LINE(279)
				_child->_init();
			}
		}
		HX_STACK_LINE(283)
		this->inited = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Entity_obj,_init,(void))

Void Entity_obj::_reset( Dynamic _){
{
		HX_STACK_FRAME("luxe.Entity","_reset",0x06d32823,"luxe.Entity._reset","luxe/Entity.hx",287,0x55caa482)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_,"_")
		HX_STACK_LINE(292)
		this->onreset();
		HX_STACK_LINE(294)
		this->emit(HX_CSTRING("reset"),null(),hx::SourceInfo(HX_CSTRING("Entity.hx"),294,HX_CSTRING("luxe.Entity"),HX_CSTRING("_reset")));
		struct _Function_1_1{
			inline static Dynamic Block( hx::ObjectPtr< ::luxe::Entity_obj > __this){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/Entity.hx",296,0x55caa482)
				{
					HX_STACK_LINE(296)
					::IMap this1 = __this->get_components();		HX_STACK_VAR(this1,"this1");
					HX_STACK_LINE(296)
					return this1->iterator();
				}
				return null();
			}
		};
		HX_STACK_LINE(296)
		for(::cpp::FastIterator_obj< ::luxe::Component > *__it = ::cpp::CreateFastIterator< ::luxe::Component >(_Function_1_1::Block(this));  __it->hasNext(); ){
			::luxe::Component _component = __it->next();
			_component->onreset();
		}
		HX_STACK_LINE(302)
		{
			HX_STACK_LINE(302)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(302)
			Array< ::Dynamic > _g1 = this->children;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(302)
			while((true)){
				HX_STACK_LINE(302)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(302)
					break;
				}
				HX_STACK_LINE(302)
				::luxe::Entity _child = _g1->__get(_g).StaticCast< ::luxe::Entity >();		HX_STACK_VAR(_child,"_child");
				HX_STACK_LINE(302)
				++(_g);
				HX_STACK_LINE(303)
				_child->_reset(_);
				HX_STACK_LINE(138)
				Dynamic();
			}
		}
		HX_STACK_LINE(308)
		Float _g = this->get_fixed_rate();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(308)
		this->_set_fixed_rate_timer(_g,hx::SourceInfo(HX_CSTRING("Entity.hx"),308,HX_CSTRING("luxe.Entity"),HX_CSTRING("_reset")));
		HX_STACK_LINE(311)
		this->started = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,_reset,(void))

Void Entity_obj::destroy( Dynamic __o__from_parent){
Dynamic _from_parent = __o__from_parent.Default(false);
	HX_STACK_FRAME("luxe.Entity","destroy",0x9f86c687,"luxe.Entity.destroy","luxe/Entity.hx",316,0x55caa482)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_from_parent,"_from_parent")
{
		HX_STACK_LINE(321)
		{
			HX_STACK_LINE(321)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(321)
			Array< ::Dynamic > _g1 = this->children;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(321)
			while((true)){
				HX_STACK_LINE(321)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(321)
					break;
				}
				HX_STACK_LINE(321)
				::luxe::Entity _child = _g1->__get(_g).StaticCast< ::luxe::Entity >();		HX_STACK_VAR(_child,"_child");
				HX_STACK_LINE(321)
				++(_g);
				HX_STACK_LINE(323)
				_child->destroy(true);
			}
		}
		HX_STACK_LINE(327)
		this->children = null();
		HX_STACK_LINE(328)
		this->children = Array_obj< ::Dynamic >::__new();
		struct _Function_1_1{
			inline static Dynamic Block( hx::ObjectPtr< ::luxe::Entity_obj > __this){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/Entity.hx",330,0x55caa482)
				{
					HX_STACK_LINE(330)
					::IMap this1 = __this->get_components();		HX_STACK_VAR(this1,"this1");
					HX_STACK_LINE(330)
					return this1->iterator();
				}
				return null();
			}
		};
		HX_STACK_LINE(330)
		for(::cpp::FastIterator_obj< ::luxe::Component > *__it = ::cpp::CreateFastIterator< ::luxe::Component >(_Function_1_1::Block(this));  __it->hasNext(); ){
			::luxe::Component _component = __it->next();
			{
				HX_STACK_LINE(332)
				_component->onremoved();
				HX_STACK_LINE(333)
				_component->ondestroy();
			}
;
		}
		HX_STACK_LINE(337)
		this->emit(HX_CSTRING("destroy"),null(),hx::SourceInfo(HX_CSTRING("Entity.hx"),337,HX_CSTRING("luxe.Entity"),HX_CSTRING("destroy")));
		HX_STACK_LINE(339)
		this->ondestroy();
		HX_STACK_LINE(342)
		::luxe::Entity _g = this->get_parent();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(342)
		if (((  (((_g != null()))) ? bool(!(_from_parent)) : bool(false) ))){
			HX_STACK_LINE(344)
			this->get_parent()->_remove_child(hx::ObjectPtr<OBJ_>(this));
		}
		HX_STACK_LINE(348)
		this->_stop_fixed_rate_timer();
		HX_STACK_LINE(351)
		this->destroyed = true;
		HX_STACK_LINE(352)
		this->inited = false;
		HX_STACK_LINE(353)
		this->started = false;
		HX_STACK_LINE(358)
		::luxe::Scene _g1 = this->get_scene();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(358)
		if (((_g1 != null()))){
			HX_STACK_LINE(359)
			this->get_scene()->remove(hx::ObjectPtr<OBJ_>(this));
		}
		HX_STACK_LINE(363)
		if (((this->events != null()))){
			HX_STACK_LINE(364)
			this->events->destroy();
			HX_STACK_LINE(365)
			this->events = null();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,destroy,(void))

Void Entity_obj::_update( Float dt){
{
		HX_STACK_FRAME("luxe.Entity","_update",0x707d3135,"luxe.Entity._update","luxe/Entity.hx",371,0x55caa482)
		HX_STACK_THIS(this)
		HX_STACK_ARG(dt,"dt")
		HX_STACK_LINE(373)
		if ((this->destroyed)){
			HX_STACK_LINE(375)
			return null();
		}
		HX_STACK_LINE(378)
		if (((  ((!(((  ((!((!(this->get_active()))))) ? bool(!(this->inited)) : bool(true) ))))) ? bool(!(this->started)) : bool(true) ))){
			HX_STACK_LINE(379)
			return null();
		}
		HX_STACK_LINE(385)
		{
			HX_STACK_LINE(385)
			::phoenix::Transform _this = this->transform;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(385)
			if (((_this->parent != null()))){
				HX_STACK_LINE(385)
				if ((_this->parent->dirty)){
					HX_STACK_LINE(385)
					::phoenix::Transform _this1 = _this->parent;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(385)
					if ((!(_this1->dirty))){
						HX_STACK_LINE(385)
						Dynamic();
					}
					else{
						HX_STACK_LINE(385)
						_this1->_cleaning = true;
						HX_STACK_LINE(385)
						{
							HX_STACK_LINE(385)
							::phoenix::Matrix _this2 = _this1->_pos_matrix;		HX_STACK_VAR(_this2,"_this2");
							HX_STACK_LINE(385)
							{
								HX_STACK_LINE(385)
								Array< Float > e = _this2->elements;		HX_STACK_VAR(e,"e");
								HX_STACK_LINE(385)
								e[(int)0] = (int)1;
								HX_STACK_LINE(385)
								e[(int)4] = (int)0;
								HX_STACK_LINE(385)
								e[(int)8] = (int)0;
								HX_STACK_LINE(385)
								e[(int)12] = _this1->local->pos->x;
								HX_STACK_LINE(385)
								e[(int)1] = (int)0;
								HX_STACK_LINE(385)
								e[(int)5] = (int)1;
								HX_STACK_LINE(385)
								e[(int)9] = (int)0;
								HX_STACK_LINE(385)
								e[(int)13] = _this1->local->pos->y;
								HX_STACK_LINE(385)
								e[(int)2] = (int)0;
								HX_STACK_LINE(385)
								e[(int)6] = (int)0;
								HX_STACK_LINE(385)
								e[(int)10] = (int)1;
								HX_STACK_LINE(385)
								e[(int)14] = _this1->local->pos->z;
								HX_STACK_LINE(385)
								e[(int)3] = (int)0;
								HX_STACK_LINE(385)
								e[(int)7] = (int)0;
								HX_STACK_LINE(385)
								e[(int)11] = (int)0;
								HX_STACK_LINE(385)
								e[(int)15] = (int)1;
								HX_STACK_LINE(385)
								_this2;
							}
							HX_STACK_LINE(385)
							_this2;
						}
						HX_STACK_LINE(385)
						{
							HX_STACK_LINE(385)
							::phoenix::Matrix _this2 = _this1->_rotation_matrix;		HX_STACK_VAR(_this2,"_this2");
							HX_STACK_LINE(385)
							::phoenix::Quaternion q = _this1->local->rotation;		HX_STACK_VAR(q,"q");
							HX_STACK_LINE(385)
							Array< Float > te = _this2->elements;		HX_STACK_VAR(te,"te");
							HX_STACK_LINE(385)
							Float x2 = (q->x + q->x);		HX_STACK_VAR(x2,"x2");
							HX_STACK_LINE(385)
							Float y2 = (q->y + q->y);		HX_STACK_VAR(y2,"y2");
							HX_STACK_LINE(385)
							Float z2 = (q->z + q->z);		HX_STACK_VAR(z2,"z2");
							HX_STACK_LINE(385)
							Float xx = (q->x * x2);		HX_STACK_VAR(xx,"xx");
							HX_STACK_LINE(385)
							Float xy = (q->x * y2);		HX_STACK_VAR(xy,"xy");
							HX_STACK_LINE(385)
							Float xz = (q->x * z2);		HX_STACK_VAR(xz,"xz");
							HX_STACK_LINE(385)
							Float yy = (q->y * y2);		HX_STACK_VAR(yy,"yy");
							HX_STACK_LINE(385)
							Float yz = (q->y * z2);		HX_STACK_VAR(yz,"yz");
							HX_STACK_LINE(385)
							Float zz = (q->z * z2);		HX_STACK_VAR(zz,"zz");
							HX_STACK_LINE(385)
							Float wx = (q->w * x2);		HX_STACK_VAR(wx,"wx");
							HX_STACK_LINE(385)
							Float wy = (q->w * y2);		HX_STACK_VAR(wy,"wy");
							HX_STACK_LINE(385)
							Float wz = (q->w * z2);		HX_STACK_VAR(wz,"wz");
							HX_STACK_LINE(385)
							te[(int)0] = ((int)1 - ((yy + zz)));
							HX_STACK_LINE(385)
							te[(int)4] = (xy - wz);
							HX_STACK_LINE(385)
							te[(int)8] = (xz + wy);
							HX_STACK_LINE(385)
							te[(int)1] = (xy + wz);
							HX_STACK_LINE(385)
							te[(int)5] = ((int)1 - ((xx + zz)));
							HX_STACK_LINE(385)
							te[(int)9] = (yz - wx);
							HX_STACK_LINE(385)
							te[(int)2] = (xz - wy);
							HX_STACK_LINE(385)
							te[(int)6] = (yz + wx);
							HX_STACK_LINE(385)
							te[(int)10] = ((int)1 - ((xx + yy)));
							HX_STACK_LINE(385)
							te[(int)3] = (int)0;
							HX_STACK_LINE(385)
							te[(int)7] = (int)0;
							HX_STACK_LINE(385)
							te[(int)11] = (int)0;
							HX_STACK_LINE(385)
							te[(int)12] = (int)0;
							HX_STACK_LINE(385)
							te[(int)13] = (int)0;
							HX_STACK_LINE(385)
							te[(int)14] = (int)0;
							HX_STACK_LINE(385)
							te[(int)15] = (int)1;
							HX_STACK_LINE(385)
							_this2;
						}
						HX_STACK_LINE(385)
						{
							HX_STACK_LINE(385)
							::phoenix::Matrix _this2 = _this1->_origin_undo_matrix;		HX_STACK_VAR(_this2,"_this2");
							HX_STACK_LINE(385)
							{
								HX_STACK_LINE(385)
								Array< Float > e = _this2->elements;		HX_STACK_VAR(e,"e");
								HX_STACK_LINE(385)
								e[(int)0] = (int)1;
								HX_STACK_LINE(385)
								e[(int)4] = (int)0;
								HX_STACK_LINE(385)
								e[(int)8] = (int)0;
								HX_STACK_LINE(385)
								e[(int)12] = -(_this1->origin->x);
								HX_STACK_LINE(385)
								e[(int)1] = (int)0;
								HX_STACK_LINE(385)
								e[(int)5] = (int)1;
								HX_STACK_LINE(385)
								e[(int)9] = (int)0;
								HX_STACK_LINE(385)
								e[(int)13] = -(_this1->origin->y);
								HX_STACK_LINE(385)
								e[(int)2] = (int)0;
								HX_STACK_LINE(385)
								e[(int)6] = (int)0;
								HX_STACK_LINE(385)
								e[(int)10] = (int)1;
								HX_STACK_LINE(385)
								e[(int)14] = -(_this1->origin->z);
								HX_STACK_LINE(385)
								e[(int)3] = (int)0;
								HX_STACK_LINE(385)
								e[(int)7] = (int)0;
								HX_STACK_LINE(385)
								e[(int)11] = (int)0;
								HX_STACK_LINE(385)
								e[(int)15] = (int)1;
								HX_STACK_LINE(385)
								_this2;
							}
							HX_STACK_LINE(385)
							_this2;
						}
						HX_STACK_LINE(385)
						{
							HX_STACK_LINE(385)
							::phoenix::Matrix _this2 = _this1->local->matrix;		HX_STACK_VAR(_this2,"_this2");
							HX_STACK_LINE(385)
							{
								HX_STACK_LINE(385)
								Array< Float > e = _this2->elements;		HX_STACK_VAR(e,"e");
								HX_STACK_LINE(385)
								e[(int)0] = (int)1;
								HX_STACK_LINE(385)
								e[(int)4] = (int)0;
								HX_STACK_LINE(385)
								e[(int)8] = (int)0;
								HX_STACK_LINE(385)
								e[(int)12] = _this1->origin->x;
								HX_STACK_LINE(385)
								e[(int)1] = (int)0;
								HX_STACK_LINE(385)
								e[(int)5] = (int)1;
								HX_STACK_LINE(385)
								e[(int)9] = (int)0;
								HX_STACK_LINE(385)
								e[(int)13] = _this1->origin->y;
								HX_STACK_LINE(385)
								e[(int)2] = (int)0;
								HX_STACK_LINE(385)
								e[(int)6] = (int)0;
								HX_STACK_LINE(385)
								e[(int)10] = (int)1;
								HX_STACK_LINE(385)
								e[(int)14] = _this1->origin->z;
								HX_STACK_LINE(385)
								e[(int)3] = (int)0;
								HX_STACK_LINE(385)
								e[(int)7] = (int)0;
								HX_STACK_LINE(385)
								e[(int)11] = (int)0;
								HX_STACK_LINE(385)
								e[(int)15] = (int)1;
								HX_STACK_LINE(385)
								_this2;
							}
							HX_STACK_LINE(385)
							_this2;
						}
						HX_STACK_LINE(385)
						{
							HX_STACK_LINE(385)
							::phoenix::Matrix _this2 = _this1->local->matrix;		HX_STACK_VAR(_this2,"_this2");
							HX_STACK_LINE(385)
							::phoenix::Vector _v = _this1->local->scale;		HX_STACK_VAR(_v,"_v");
							HX_STACK_LINE(385)
							Array< Float > te = _this2->elements;		HX_STACK_VAR(te,"te");
							HX_STACK_LINE(385)
							Float _x = _v->x;		HX_STACK_VAR(_x,"_x");
							HX_STACK_LINE(385)
							Float _y = _v->y;		HX_STACK_VAR(_y,"_y");
							HX_STACK_LINE(385)
							Float _z = _v->z;		HX_STACK_VAR(_z,"_z");
							HX_STACK_LINE(385)
							hx::MultEq(te[(int)0],_x);
							HX_STACK_LINE(385)
							hx::MultEq(te[(int)4],_y);
							HX_STACK_LINE(385)
							hx::MultEq(te[(int)8],_z);
							HX_STACK_LINE(385)
							hx::MultEq(te[(int)1],_x);
							HX_STACK_LINE(385)
							hx::MultEq(te[(int)5],_y);
							HX_STACK_LINE(385)
							hx::MultEq(te[(int)9],_z);
							HX_STACK_LINE(385)
							hx::MultEq(te[(int)2],_x);
							HX_STACK_LINE(385)
							hx::MultEq(te[(int)6],_y);
							HX_STACK_LINE(385)
							hx::MultEq(te[(int)10],_z);
							HX_STACK_LINE(385)
							hx::MultEq(te[(int)3],_x);
							HX_STACK_LINE(385)
							hx::MultEq(te[(int)7],_y);
							HX_STACK_LINE(385)
							hx::MultEq(te[(int)11],_z);
							HX_STACK_LINE(385)
							_this2;
						}
						HX_STACK_LINE(385)
						{
							HX_STACK_LINE(385)
							::phoenix::Matrix _this2 = _this1->local->matrix;		HX_STACK_VAR(_this2,"_this2");
							HX_STACK_LINE(385)
							{
								HX_STACK_LINE(385)
								Array< Float > ae = _this2->elements;		HX_STACK_VAR(ae,"ae");
								HX_STACK_LINE(385)
								Array< Float > be = _this1->_rotation_matrix->elements;		HX_STACK_VAR(be,"be");
								HX_STACK_LINE(385)
								Array< Float > te = _this2->elements;		HX_STACK_VAR(te,"te");
								HX_STACK_LINE(385)
								Float a11 = ae->__get((int)0);		HX_STACK_VAR(a11,"a11");
								HX_STACK_LINE(385)
								Float a12 = ae->__get((int)4);		HX_STACK_VAR(a12,"a12");
								HX_STACK_LINE(385)
								Float a13 = ae->__get((int)8);		HX_STACK_VAR(a13,"a13");
								HX_STACK_LINE(385)
								Float a14 = ae->__get((int)12);		HX_STACK_VAR(a14,"a14");
								HX_STACK_LINE(385)
								Float a21 = ae->__get((int)1);		HX_STACK_VAR(a21,"a21");
								HX_STACK_LINE(385)
								Float a22 = ae->__get((int)5);		HX_STACK_VAR(a22,"a22");
								HX_STACK_LINE(385)
								Float a23 = ae->__get((int)9);		HX_STACK_VAR(a23,"a23");
								HX_STACK_LINE(385)
								Float a24 = ae->__get((int)13);		HX_STACK_VAR(a24,"a24");
								HX_STACK_LINE(385)
								Float a31 = ae->__get((int)2);		HX_STACK_VAR(a31,"a31");
								HX_STACK_LINE(385)
								Float a32 = ae->__get((int)6);		HX_STACK_VAR(a32,"a32");
								HX_STACK_LINE(385)
								Float a33 = ae->__get((int)10);		HX_STACK_VAR(a33,"a33");
								HX_STACK_LINE(385)
								Float a34 = ae->__get((int)14);		HX_STACK_VAR(a34,"a34");
								HX_STACK_LINE(385)
								Float a41 = ae->__get((int)3);		HX_STACK_VAR(a41,"a41");
								HX_STACK_LINE(385)
								Float a42 = ae->__get((int)7);		HX_STACK_VAR(a42,"a42");
								HX_STACK_LINE(385)
								Float a43 = ae->__get((int)11);		HX_STACK_VAR(a43,"a43");
								HX_STACK_LINE(385)
								Float a44 = ae->__get((int)15);		HX_STACK_VAR(a44,"a44");
								HX_STACK_LINE(385)
								Float b11 = be->__get((int)0);		HX_STACK_VAR(b11,"b11");
								HX_STACK_LINE(385)
								Float b12 = be->__get((int)4);		HX_STACK_VAR(b12,"b12");
								HX_STACK_LINE(385)
								Float b13 = be->__get((int)8);		HX_STACK_VAR(b13,"b13");
								HX_STACK_LINE(385)
								Float b14 = be->__get((int)12);		HX_STACK_VAR(b14,"b14");
								HX_STACK_LINE(385)
								Float b21 = be->__get((int)1);		HX_STACK_VAR(b21,"b21");
								HX_STACK_LINE(385)
								Float b22 = be->__get((int)5);		HX_STACK_VAR(b22,"b22");
								HX_STACK_LINE(385)
								Float b23 = be->__get((int)9);		HX_STACK_VAR(b23,"b23");
								HX_STACK_LINE(385)
								Float b24 = be->__get((int)13);		HX_STACK_VAR(b24,"b24");
								HX_STACK_LINE(385)
								Float b31 = be->__get((int)2);		HX_STACK_VAR(b31,"b31");
								HX_STACK_LINE(385)
								Float b32 = be->__get((int)6);		HX_STACK_VAR(b32,"b32");
								HX_STACK_LINE(385)
								Float b33 = be->__get((int)10);		HX_STACK_VAR(b33,"b33");
								HX_STACK_LINE(385)
								Float b34 = be->__get((int)14);		HX_STACK_VAR(b34,"b34");
								HX_STACK_LINE(385)
								Float b41 = be->__get((int)3);		HX_STACK_VAR(b41,"b41");
								HX_STACK_LINE(385)
								Float b42 = be->__get((int)7);		HX_STACK_VAR(b42,"b42");
								HX_STACK_LINE(385)
								Float b43 = be->__get((int)11);		HX_STACK_VAR(b43,"b43");
								HX_STACK_LINE(385)
								Float b44 = be->__get((int)15);		HX_STACK_VAR(b44,"b44");
								HX_STACK_LINE(385)
								te[(int)0] = ((((a11 * b11) + (a12 * b21)) + (a13 * b31)) + (a14 * b41));
								HX_STACK_LINE(385)
								te[(int)4] = ((((a11 * b12) + (a12 * b22)) + (a13 * b32)) + (a14 * b42));
								HX_STACK_LINE(385)
								te[(int)8] = ((((a11 * b13) + (a12 * b23)) + (a13 * b33)) + (a14 * b43));
								HX_STACK_LINE(385)
								te[(int)12] = ((((a11 * b14) + (a12 * b24)) + (a13 * b34)) + (a14 * b44));
								HX_STACK_LINE(385)
								te[(int)1] = ((((a21 * b11) + (a22 * b21)) + (a23 * b31)) + (a24 * b41));
								HX_STACK_LINE(385)
								te[(int)5] = ((((a21 * b12) + (a22 * b22)) + (a23 * b32)) + (a24 * b42));
								HX_STACK_LINE(385)
								te[(int)9] = ((((a21 * b13) + (a22 * b23)) + (a23 * b33)) + (a24 * b43));
								HX_STACK_LINE(385)
								te[(int)13] = ((((a21 * b14) + (a22 * b24)) + (a23 * b34)) + (a24 * b44));
								HX_STACK_LINE(385)
								te[(int)2] = ((((a31 * b11) + (a32 * b21)) + (a33 * b31)) + (a34 * b41));
								HX_STACK_LINE(385)
								te[(int)6] = ((((a31 * b12) + (a32 * b22)) + (a33 * b32)) + (a34 * b42));
								HX_STACK_LINE(385)
								te[(int)10] = ((((a31 * b13) + (a32 * b23)) + (a33 * b33)) + (a34 * b43));
								HX_STACK_LINE(385)
								te[(int)14] = ((((a31 * b14) + (a32 * b24)) + (a33 * b34)) + (a34 * b44));
								HX_STACK_LINE(385)
								te[(int)3] = ((((a41 * b11) + (a42 * b21)) + (a43 * b31)) + (a44 * b41));
								HX_STACK_LINE(385)
								te[(int)7] = ((((a41 * b12) + (a42 * b22)) + (a43 * b32)) + (a44 * b42));
								HX_STACK_LINE(385)
								te[(int)11] = ((((a41 * b13) + (a42 * b23)) + (a43 * b33)) + (a44 * b43));
								HX_STACK_LINE(385)
								te[(int)15] = ((((a41 * b14) + (a42 * b24)) + (a43 * b34)) + (a44 * b44));
								HX_STACK_LINE(385)
								_this2;
							}
						}
						HX_STACK_LINE(385)
						{
							HX_STACK_LINE(385)
							::phoenix::Matrix _this2 = _this1->local->matrix;		HX_STACK_VAR(_this2,"_this2");
							HX_STACK_LINE(385)
							::phoenix::Vector _v = _this1->local->pos;		HX_STACK_VAR(_v,"_v");
							HX_STACK_LINE(385)
							Array< Float > te = _this2->elements;		HX_STACK_VAR(te,"te");
							HX_STACK_LINE(385)
							te[(int)12] = _v->x;
							HX_STACK_LINE(385)
							te[(int)13] = _v->y;
							HX_STACK_LINE(385)
							te[(int)14] = _v->z;
							HX_STACK_LINE(385)
							_this2;
						}
						HX_STACK_LINE(385)
						{
							HX_STACK_LINE(385)
							::phoenix::Matrix _this2 = _this1->local->matrix;		HX_STACK_VAR(_this2,"_this2");
							HX_STACK_LINE(385)
							{
								HX_STACK_LINE(385)
								Array< Float > ae = _this2->elements;		HX_STACK_VAR(ae,"ae");
								HX_STACK_LINE(385)
								Array< Float > be = _this1->_origin_undo_matrix->elements;		HX_STACK_VAR(be,"be");
								HX_STACK_LINE(385)
								Array< Float > te = _this2->elements;		HX_STACK_VAR(te,"te");
								HX_STACK_LINE(385)
								Float a11 = ae->__get((int)0);		HX_STACK_VAR(a11,"a11");
								HX_STACK_LINE(385)
								Float a12 = ae->__get((int)4);		HX_STACK_VAR(a12,"a12");
								HX_STACK_LINE(385)
								Float a13 = ae->__get((int)8);		HX_STACK_VAR(a13,"a13");
								HX_STACK_LINE(385)
								Float a14 = ae->__get((int)12);		HX_STACK_VAR(a14,"a14");
								HX_STACK_LINE(385)
								Float a21 = ae->__get((int)1);		HX_STACK_VAR(a21,"a21");
								HX_STACK_LINE(385)
								Float a22 = ae->__get((int)5);		HX_STACK_VAR(a22,"a22");
								HX_STACK_LINE(385)
								Float a23 = ae->__get((int)9);		HX_STACK_VAR(a23,"a23");
								HX_STACK_LINE(385)
								Float a24 = ae->__get((int)13);		HX_STACK_VAR(a24,"a24");
								HX_STACK_LINE(385)
								Float a31 = ae->__get((int)2);		HX_STACK_VAR(a31,"a31");
								HX_STACK_LINE(385)
								Float a32 = ae->__get((int)6);		HX_STACK_VAR(a32,"a32");
								HX_STACK_LINE(385)
								Float a33 = ae->__get((int)10);		HX_STACK_VAR(a33,"a33");
								HX_STACK_LINE(385)
								Float a34 = ae->__get((int)14);		HX_STACK_VAR(a34,"a34");
								HX_STACK_LINE(385)
								Float a41 = ae->__get((int)3);		HX_STACK_VAR(a41,"a41");
								HX_STACK_LINE(385)
								Float a42 = ae->__get((int)7);		HX_STACK_VAR(a42,"a42");
								HX_STACK_LINE(385)
								Float a43 = ae->__get((int)11);		HX_STACK_VAR(a43,"a43");
								HX_STACK_LINE(385)
								Float a44 = ae->__get((int)15);		HX_STACK_VAR(a44,"a44");
								HX_STACK_LINE(385)
								Float b11 = be->__get((int)0);		HX_STACK_VAR(b11,"b11");
								HX_STACK_LINE(385)
								Float b12 = be->__get((int)4);		HX_STACK_VAR(b12,"b12");
								HX_STACK_LINE(385)
								Float b13 = be->__get((int)8);		HX_STACK_VAR(b13,"b13");
								HX_STACK_LINE(385)
								Float b14 = be->__get((int)12);		HX_STACK_VAR(b14,"b14");
								HX_STACK_LINE(385)
								Float b21 = be->__get((int)1);		HX_STACK_VAR(b21,"b21");
								HX_STACK_LINE(385)
								Float b22 = be->__get((int)5);		HX_STACK_VAR(b22,"b22");
								HX_STACK_LINE(385)
								Float b23 = be->__get((int)9);		HX_STACK_VAR(b23,"b23");
								HX_STACK_LINE(385)
								Float b24 = be->__get((int)13);		HX_STACK_VAR(b24,"b24");
								HX_STACK_LINE(385)
								Float b31 = be->__get((int)2);		HX_STACK_VAR(b31,"b31");
								HX_STACK_LINE(385)
								Float b32 = be->__get((int)6);		HX_STACK_VAR(b32,"b32");
								HX_STACK_LINE(385)
								Float b33 = be->__get((int)10);		HX_STACK_VAR(b33,"b33");
								HX_STACK_LINE(385)
								Float b34 = be->__get((int)14);		HX_STACK_VAR(b34,"b34");
								HX_STACK_LINE(385)
								Float b41 = be->__get((int)3);		HX_STACK_VAR(b41,"b41");
								HX_STACK_LINE(385)
								Float b42 = be->__get((int)7);		HX_STACK_VAR(b42,"b42");
								HX_STACK_LINE(385)
								Float b43 = be->__get((int)11);		HX_STACK_VAR(b43,"b43");
								HX_STACK_LINE(385)
								Float b44 = be->__get((int)15);		HX_STACK_VAR(b44,"b44");
								HX_STACK_LINE(385)
								te[(int)0] = ((((a11 * b11) + (a12 * b21)) + (a13 * b31)) + (a14 * b41));
								HX_STACK_LINE(385)
								te[(int)4] = ((((a11 * b12) + (a12 * b22)) + (a13 * b32)) + (a14 * b42));
								HX_STACK_LINE(385)
								te[(int)8] = ((((a11 * b13) + (a12 * b23)) + (a13 * b33)) + (a14 * b43));
								HX_STACK_LINE(385)
								te[(int)12] = ((((a11 * b14) + (a12 * b24)) + (a13 * b34)) + (a14 * b44));
								HX_STACK_LINE(385)
								te[(int)1] = ((((a21 * b11) + (a22 * b21)) + (a23 * b31)) + (a24 * b41));
								HX_STACK_LINE(385)
								te[(int)5] = ((((a21 * b12) + (a22 * b22)) + (a23 * b32)) + (a24 * b42));
								HX_STACK_LINE(385)
								te[(int)9] = ((((a21 * b13) + (a22 * b23)) + (a23 * b33)) + (a24 * b43));
								HX_STACK_LINE(385)
								te[(int)13] = ((((a21 * b14) + (a22 * b24)) + (a23 * b34)) + (a24 * b44));
								HX_STACK_LINE(385)
								te[(int)2] = ((((a31 * b11) + (a32 * b21)) + (a33 * b31)) + (a34 * b41));
								HX_STACK_LINE(385)
								te[(int)6] = ((((a31 * b12) + (a32 * b22)) + (a33 * b32)) + (a34 * b42));
								HX_STACK_LINE(385)
								te[(int)10] = ((((a31 * b13) + (a32 * b23)) + (a33 * b33)) + (a34 * b43));
								HX_STACK_LINE(385)
								te[(int)14] = ((((a31 * b14) + (a32 * b24)) + (a33 * b34)) + (a34 * b44));
								HX_STACK_LINE(385)
								te[(int)3] = ((((a41 * b11) + (a42 * b21)) + (a43 * b31)) + (a44 * b41));
								HX_STACK_LINE(385)
								te[(int)7] = ((((a41 * b12) + (a42 * b22)) + (a43 * b32)) + (a44 * b42));
								HX_STACK_LINE(385)
								te[(int)11] = ((((a41 * b13) + (a42 * b23)) + (a43 * b33)) + (a44 * b43));
								HX_STACK_LINE(385)
								te[(int)15] = ((((a41 * b14) + (a42 * b24)) + (a43 * b34)) + (a44 * b44));
								HX_STACK_LINE(385)
								_this2;
							}
						}
						HX_STACK_LINE(385)
						if (((_this1->parent != null()))){
							HX_STACK_LINE(385)
							::phoenix::Spatial _this2 = _this1->get_world();		HX_STACK_VAR(_this2,"_this2");
							HX_STACK_LINE(385)
							::phoenix::Matrix _m;		HX_STACK_VAR(_m,"_m");
							HX_STACK_LINE(385)
							{
								HX_STACK_LINE(385)
								::phoenix::Matrix _this3;		HX_STACK_VAR(_this3,"_this3");
								HX_STACK_LINE(385)
								{
									HX_STACK_LINE(385)
									::phoenix::Spatial _this4 = _this1->get_world();		HX_STACK_VAR(_this4,"_this4");
									HX_STACK_LINE(385)
									_this3 = _this4->matrix;
								}
								HX_STACK_LINE(385)
								::phoenix::Matrix _a;		HX_STACK_VAR(_a,"_a");
								HX_STACK_LINE(385)
								{
									HX_STACK_LINE(385)
									::phoenix::Spatial _this4 = _this1->parent->get_world();		HX_STACK_VAR(_this4,"_this4");
									HX_STACK_LINE(385)
									_a = _this4->matrix;
								}
								HX_STACK_LINE(385)
								Array< Float > ae = _a->elements;		HX_STACK_VAR(ae,"ae");
								HX_STACK_LINE(385)
								Array< Float > be = _this1->local->matrix->elements;		HX_STACK_VAR(be,"be");
								HX_STACK_LINE(385)
								Array< Float > te = _this3->elements;		HX_STACK_VAR(te,"te");
								HX_STACK_LINE(385)
								Float a11 = ae->__get((int)0);		HX_STACK_VAR(a11,"a11");
								HX_STACK_LINE(385)
								Float a12 = ae->__get((int)4);		HX_STACK_VAR(a12,"a12");
								HX_STACK_LINE(385)
								Float a13 = ae->__get((int)8);		HX_STACK_VAR(a13,"a13");
								HX_STACK_LINE(385)
								Float a14 = ae->__get((int)12);		HX_STACK_VAR(a14,"a14");
								HX_STACK_LINE(385)
								Float a21 = ae->__get((int)1);		HX_STACK_VAR(a21,"a21");
								HX_STACK_LINE(385)
								Float a22 = ae->__get((int)5);		HX_STACK_VAR(a22,"a22");
								HX_STACK_LINE(385)
								Float a23 = ae->__get((int)9);		HX_STACK_VAR(a23,"a23");
								HX_STACK_LINE(385)
								Float a24 = ae->__get((int)13);		HX_STACK_VAR(a24,"a24");
								HX_STACK_LINE(385)
								Float a31 = ae->__get((int)2);		HX_STACK_VAR(a31,"a31");
								HX_STACK_LINE(385)
								Float a32 = ae->__get((int)6);		HX_STACK_VAR(a32,"a32");
								HX_STACK_LINE(385)
								Float a33 = ae->__get((int)10);		HX_STACK_VAR(a33,"a33");
								HX_STACK_LINE(385)
								Float a34 = ae->__get((int)14);		HX_STACK_VAR(a34,"a34");
								HX_STACK_LINE(385)
								Float a41 = ae->__get((int)3);		HX_STACK_VAR(a41,"a41");
								HX_STACK_LINE(385)
								Float a42 = ae->__get((int)7);		HX_STACK_VAR(a42,"a42");
								HX_STACK_LINE(385)
								Float a43 = ae->__get((int)11);		HX_STACK_VAR(a43,"a43");
								HX_STACK_LINE(385)
								Float a44 = ae->__get((int)15);		HX_STACK_VAR(a44,"a44");
								HX_STACK_LINE(385)
								Float b11 = be->__get((int)0);		HX_STACK_VAR(b11,"b11");
								HX_STACK_LINE(385)
								Float b12 = be->__get((int)4);		HX_STACK_VAR(b12,"b12");
								HX_STACK_LINE(385)
								Float b13 = be->__get((int)8);		HX_STACK_VAR(b13,"b13");
								HX_STACK_LINE(385)
								Float b14 = be->__get((int)12);		HX_STACK_VAR(b14,"b14");
								HX_STACK_LINE(385)
								Float b21 = be->__get((int)1);		HX_STACK_VAR(b21,"b21");
								HX_STACK_LINE(385)
								Float b22 = be->__get((int)5);		HX_STACK_VAR(b22,"b22");
								HX_STACK_LINE(385)
								Float b23 = be->__get((int)9);		HX_STACK_VAR(b23,"b23");
								HX_STACK_LINE(385)
								Float b24 = be->__get((int)13);		HX_STACK_VAR(b24,"b24");
								HX_STACK_LINE(385)
								Float b31 = be->__get((int)2);		HX_STACK_VAR(b31,"b31");
								HX_STACK_LINE(385)
								Float b32 = be->__get((int)6);		HX_STACK_VAR(b32,"b32");
								HX_STACK_LINE(385)
								Float b33 = be->__get((int)10);		HX_STACK_VAR(b33,"b33");
								HX_STACK_LINE(385)
								Float b34 = be->__get((int)14);		HX_STACK_VAR(b34,"b34");
								HX_STACK_LINE(385)
								Float b41 = be->__get((int)3);		HX_STACK_VAR(b41,"b41");
								HX_STACK_LINE(385)
								Float b42 = be->__get((int)7);		HX_STACK_VAR(b42,"b42");
								HX_STACK_LINE(385)
								Float b43 = be->__get((int)11);		HX_STACK_VAR(b43,"b43");
								HX_STACK_LINE(385)
								Float b44 = be->__get((int)15);		HX_STACK_VAR(b44,"b44");
								HX_STACK_LINE(385)
								te[(int)0] = ((((a11 * b11) + (a12 * b21)) + (a13 * b31)) + (a14 * b41));
								HX_STACK_LINE(385)
								te[(int)4] = ((((a11 * b12) + (a12 * b22)) + (a13 * b32)) + (a14 * b42));
								HX_STACK_LINE(385)
								te[(int)8] = ((((a11 * b13) + (a12 * b23)) + (a13 * b33)) + (a14 * b43));
								HX_STACK_LINE(385)
								te[(int)12] = ((((a11 * b14) + (a12 * b24)) + (a13 * b34)) + (a14 * b44));
								HX_STACK_LINE(385)
								te[(int)1] = ((((a21 * b11) + (a22 * b21)) + (a23 * b31)) + (a24 * b41));
								HX_STACK_LINE(385)
								te[(int)5] = ((((a21 * b12) + (a22 * b22)) + (a23 * b32)) + (a24 * b42));
								HX_STACK_LINE(385)
								te[(int)9] = ((((a21 * b13) + (a22 * b23)) + (a23 * b33)) + (a24 * b43));
								HX_STACK_LINE(385)
								te[(int)13] = ((((a21 * b14) + (a22 * b24)) + (a23 * b34)) + (a24 * b44));
								HX_STACK_LINE(385)
								te[(int)2] = ((((a31 * b11) + (a32 * b21)) + (a33 * b31)) + (a34 * b41));
								HX_STACK_LINE(385)
								te[(int)6] = ((((a31 * b12) + (a32 * b22)) + (a33 * b32)) + (a34 * b42));
								HX_STACK_LINE(385)
								te[(int)10] = ((((a31 * b13) + (a32 * b23)) + (a33 * b33)) + (a34 * b43));
								HX_STACK_LINE(385)
								te[(int)14] = ((((a31 * b14) + (a32 * b24)) + (a33 * b34)) + (a34 * b44));
								HX_STACK_LINE(385)
								te[(int)3] = ((((a41 * b11) + (a42 * b21)) + (a43 * b31)) + (a44 * b41));
								HX_STACK_LINE(385)
								te[(int)7] = ((((a41 * b12) + (a42 * b22)) + (a43 * b32)) + (a44 * b42));
								HX_STACK_LINE(385)
								te[(int)11] = ((((a41 * b13) + (a42 * b23)) + (a43 * b33)) + (a44 * b43));
								HX_STACK_LINE(385)
								te[(int)15] = ((((a41 * b14) + (a42 * b24)) + (a43 * b34)) + (a44 * b44));
								HX_STACK_LINE(385)
								_m = _this3;
							}
							HX_STACK_LINE(385)
							_this2->matrix = _m;
							HX_STACK_LINE(385)
							if (((_m != null()))){
								HX_STACK_LINE(385)
								::snow::platform::native::utils::Float32Array _g;		HX_STACK_VAR(_g,"_g");
								HX_STACK_LINE(385)
								{
									HX_STACK_LINE(385)
									::phoenix::Matrix _this3 = _this2->matrix;		HX_STACK_VAR(_this3,"_this3");
									HX_STACK_LINE(385)
									{
										HX_STACK_LINE(385)
										::snow::platform::native::utils::Float32Array _this4 = _this3->_float32array;		HX_STACK_VAR(_this4,"_this4");
										HX_STACK_LINE(385)
										Dynamic bufferOrArray = _this3->elements;		HX_STACK_VAR(bufferOrArray,"bufferOrArray");
										HX_STACK_LINE(385)
										int offset = (int)0;		HX_STACK_VAR(offset,"offset");
										HX_STACK_LINE(385)
										if ((::Std_obj::is(bufferOrArray,hx::ClassOf< Array<int> >()))){
											HX_STACK_LINE(385)
											Array< Float > floats = bufferOrArray;		HX_STACK_VAR(floats,"floats");
											HX_STACK_LINE(385)
											{
												HX_STACK_LINE(385)
												int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
												HX_STACK_LINE(385)
												int _g2 = floats->length;		HX_STACK_VAR(_g2,"_g2");
												HX_STACK_LINE(385)
												while((true)){
													HX_STACK_LINE(385)
													if ((!(((_g1 < _g2))))){
														HX_STACK_LINE(385)
														break;
													}
													HX_STACK_LINE(385)
													int i = (_g1)++;		HX_STACK_VAR(i,"i");
													HX_STACK_LINE(385)
													::__hxcpp_memory_set_float(_this4->bytes,(((int((i + offset)) << int((int)2))) + _this4->byteOffset),floats->__get(i));
												}
											}
										}
										else{
											HX_STACK_LINE(385)
											if ((::Std_obj::is(bufferOrArray,hx::ClassOf< ::snow::platform::native::utils::Float32Array >()))){
												HX_STACK_LINE(385)
												::snow::platform::native::utils::Float32Array floats = bufferOrArray;		HX_STACK_VAR(floats,"floats");
												HX_STACK_LINE(385)
												{
													HX_STACK_LINE(385)
													int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
													HX_STACK_LINE(385)
													int _g2 = floats->length;		HX_STACK_VAR(_g2,"_g2");
													HX_STACK_LINE(385)
													while((true)){
														HX_STACK_LINE(385)
														if ((!(((_g1 < _g2))))){
															HX_STACK_LINE(385)
															break;
														}
														HX_STACK_LINE(385)
														int i = (_g1)++;		HX_STACK_VAR(i,"i");
														HX_STACK_LINE(385)
														::__hxcpp_memory_set_float(_this4->bytes,(((int((i + offset)) << int((int)2))) + _this4->byteOffset),floats->__get(i));
													}
												}
											}
											else{
												HX_STACK_LINE(385)
												HX_STACK_DO_THROW(HX_CSTRING("Invalid input buffer"));
											}
										}
									}
									HX_STACK_LINE(385)
									_g = ::snow::platform::native::utils::Float32Array_obj::__new(_this3->_float32array,null(),null());
								}
								HX_STACK_LINE(385)
								_this2->floats = _g;
							}
							HX_STACK_LINE(385)
							_this2->matrix;
						}
						else{
							HX_STACK_LINE(385)
							::phoenix::Spatial _this2 = _this1->get_world();		HX_STACK_VAR(_this2,"_this2");
							HX_STACK_LINE(385)
							::phoenix::Matrix _m;		HX_STACK_VAR(_m,"_m");
							HX_STACK_LINE(385)
							{
								HX_STACK_LINE(385)
								Array< Float > te = _this1->local->matrix->elements;		HX_STACK_VAR(te,"te");
								HX_STACK_LINE(385)
								_m = ::phoenix::Matrix_obj::__new(te->__get((int)0),te->__get((int)4),te->__get((int)8),te->__get((int)12),te->__get((int)1),te->__get((int)5),te->__get((int)9),te->__get((int)13),te->__get((int)2),te->__get((int)6),te->__get((int)10),te->__get((int)14),te->__get((int)3),te->__get((int)7),te->__get((int)11),te->__get((int)15));
							}
							HX_STACK_LINE(385)
							_this2->matrix = _m;
							HX_STACK_LINE(385)
							if (((_m != null()))){
								HX_STACK_LINE(385)
								::snow::platform::native::utils::Float32Array _g1;		HX_STACK_VAR(_g1,"_g1");
								HX_STACK_LINE(385)
								{
									HX_STACK_LINE(385)
									::phoenix::Matrix _this3 = _this2->matrix;		HX_STACK_VAR(_this3,"_this3");
									HX_STACK_LINE(385)
									{
										HX_STACK_LINE(385)
										::snow::platform::native::utils::Float32Array _this4 = _this3->_float32array;		HX_STACK_VAR(_this4,"_this4");
										HX_STACK_LINE(385)
										Dynamic bufferOrArray = _this3->elements;		HX_STACK_VAR(bufferOrArray,"bufferOrArray");
										HX_STACK_LINE(385)
										int offset = (int)0;		HX_STACK_VAR(offset,"offset");
										HX_STACK_LINE(385)
										if ((::Std_obj::is(bufferOrArray,hx::ClassOf< Array<int> >()))){
											HX_STACK_LINE(385)
											Array< Float > floats = bufferOrArray;		HX_STACK_VAR(floats,"floats");
											HX_STACK_LINE(385)
											{
												HX_STACK_LINE(385)
												int _g11 = (int)0;		HX_STACK_VAR(_g11,"_g11");
												HX_STACK_LINE(385)
												int _g = floats->length;		HX_STACK_VAR(_g,"_g");
												HX_STACK_LINE(385)
												while((true)){
													HX_STACK_LINE(385)
													if ((!(((_g11 < _g))))){
														HX_STACK_LINE(385)
														break;
													}
													HX_STACK_LINE(385)
													int i = (_g11)++;		HX_STACK_VAR(i,"i");
													HX_STACK_LINE(385)
													::__hxcpp_memory_set_float(_this4->bytes,(((int((i + offset)) << int((int)2))) + _this4->byteOffset),floats->__get(i));
												}
											}
										}
										else{
											HX_STACK_LINE(385)
											if ((::Std_obj::is(bufferOrArray,hx::ClassOf< ::snow::platform::native::utils::Float32Array >()))){
												HX_STACK_LINE(385)
												::snow::platform::native::utils::Float32Array floats = bufferOrArray;		HX_STACK_VAR(floats,"floats");
												HX_STACK_LINE(385)
												{
													HX_STACK_LINE(385)
													int _g11 = (int)0;		HX_STACK_VAR(_g11,"_g11");
													HX_STACK_LINE(385)
													int _g = floats->length;		HX_STACK_VAR(_g,"_g");
													HX_STACK_LINE(385)
													while((true)){
														HX_STACK_LINE(385)
														if ((!(((_g11 < _g))))){
															HX_STACK_LINE(385)
															break;
														}
														HX_STACK_LINE(385)
														int i = (_g11)++;		HX_STACK_VAR(i,"i");
														HX_STACK_LINE(385)
														::__hxcpp_memory_set_float(_this4->bytes,(((int((i + offset)) << int((int)2))) + _this4->byteOffset),floats->__get(i));
													}
												}
											}
											else{
												HX_STACK_LINE(385)
												HX_STACK_DO_THROW(HX_CSTRING("Invalid input buffer"));
											}
										}
									}
									HX_STACK_LINE(385)
									_g1 = ::snow::platform::native::utils::Float32Array_obj::__new(_this3->_float32array,null(),null());
								}
								HX_STACK_LINE(385)
								_this2->floats = _g1;
							}
							HX_STACK_LINE(385)
							_this2->matrix;
						}
						HX_STACK_LINE(385)
						{
							HX_STACK_LINE(385)
							::phoenix::Spatial _this2 = _this1->get_world();		HX_STACK_VAR(_this2,"_this2");
							HX_STACK_LINE(385)
							if ((_this2->auto_decompose)){
								HX_STACK_LINE(385)
								::phoenix::MatrixTransform _transform;		HX_STACK_VAR(_transform,"_transform");
								HX_STACK_LINE(385)
								{
									HX_STACK_LINE(385)
									::phoenix::Matrix _this3 = _this2->matrix;		HX_STACK_VAR(_this3,"_this3");
									HX_STACK_LINE(385)
									::phoenix::Vector _position = null();		HX_STACK_VAR(_position,"_position");
									HX_STACK_LINE(385)
									::phoenix::Quaternion _quaternion = null();		HX_STACK_VAR(_quaternion,"_quaternion");
									HX_STACK_LINE(385)
									::phoenix::Vector _scale = null();		HX_STACK_VAR(_scale,"_scale");
									HX_STACK_LINE(385)
									Array< Float > te = _this3->elements;		HX_STACK_VAR(te,"te");
									HX_STACK_LINE(385)
									::phoenix::Matrix matrix = ::phoenix::Matrix_obj::__new(null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(matrix,"matrix");
									HX_STACK_LINE(385)
									Float _ax_x = te->__get((int)0);		HX_STACK_VAR(_ax_x,"_ax_x");
									HX_STACK_LINE(385)
									Float _ax_y = te->__get((int)1);		HX_STACK_VAR(_ax_y,"_ax_y");
									HX_STACK_LINE(385)
									Float _ax_z = te->__get((int)2);		HX_STACK_VAR(_ax_z,"_ax_z");
									HX_STACK_LINE(385)
									Float _ay_x = te->__get((int)4);		HX_STACK_VAR(_ay_x,"_ay_x");
									HX_STACK_LINE(385)
									Float _ay_y = te->__get((int)5);		HX_STACK_VAR(_ay_y,"_ay_y");
									HX_STACK_LINE(385)
									Float _ay_z = te->__get((int)6);		HX_STACK_VAR(_ay_z,"_ay_z");
									HX_STACK_LINE(385)
									Float _az_x = te->__get((int)8);		HX_STACK_VAR(_az_x,"_az_x");
									HX_STACK_LINE(385)
									Float _az_y = te->__get((int)9);		HX_STACK_VAR(_az_y,"_az_y");
									HX_STACK_LINE(385)
									Float _az_z = te->__get((int)10);		HX_STACK_VAR(_az_z,"_az_z");
									HX_STACK_LINE(385)
									Float _ax_length = ::Math_obj::sqrt((((_ax_x * _ax_x) + (_ax_y * _ax_y)) + (_ax_z * _ax_z)));		HX_STACK_VAR(_ax_length,"_ax_length");
									HX_STACK_LINE(385)
									Float _ay_length = ::Math_obj::sqrt((((_ay_x * _ay_x) + (_ay_y * _ay_y)) + (_ay_z * _ay_z)));		HX_STACK_VAR(_ay_length,"_ay_length");
									HX_STACK_LINE(385)
									Float _az_length = ::Math_obj::sqrt((((_az_x * _az_x) + (_az_y * _az_y)) + (_az_z * _az_z)));		HX_STACK_VAR(_az_length,"_az_length");
									HX_STACK_LINE(385)
									if (((_quaternion == null()))){
										HX_STACK_LINE(385)
										::phoenix::Quaternion _g2 = ::phoenix::Quaternion_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(_g2,"_g2");
										HX_STACK_LINE(385)
										_quaternion = _g2;
									}
									HX_STACK_LINE(385)
									if (((_position == null()))){
										HX_STACK_LINE(385)
										::phoenix::Vector _g3 = ::phoenix::Vector_obj::__new(te->__get((int)12),te->__get((int)13),te->__get((int)14),null());		HX_STACK_VAR(_g3,"_g3");
										HX_STACK_LINE(385)
										_position = _g3;
									}
									else{
										HX_STACK_LINE(385)
										{
											HX_STACK_LINE(385)
											Float _x = te->__get((int)12);		HX_STACK_VAR(_x,"_x");
											HX_STACK_LINE(385)
											_position->x = _x;
											HX_STACK_LINE(385)
											if ((_position->_construct)){
												HX_STACK_LINE(385)
												_position->x;
											}
											else{
												HX_STACK_LINE(385)
												if (((bool((_position->listen_x != null())) && bool(!(_position->ignore_listeners))))){
													HX_STACK_LINE(385)
													_position->listen_x(_x);
												}
												HX_STACK_LINE(385)
												_position->x;
											}
										}
										HX_STACK_LINE(385)
										{
											HX_STACK_LINE(385)
											Float _y = te->__get((int)13);		HX_STACK_VAR(_y,"_y");
											HX_STACK_LINE(385)
											_position->y = _y;
											HX_STACK_LINE(385)
											if ((_position->_construct)){
												HX_STACK_LINE(385)
												_position->y;
											}
											else{
												HX_STACK_LINE(385)
												if (((bool((_position->listen_y != null())) && bool(!(_position->ignore_listeners))))){
													HX_STACK_LINE(385)
													_position->listen_y(_y);
												}
												HX_STACK_LINE(385)
												_position->y;
											}
										}
										HX_STACK_LINE(385)
										{
											HX_STACK_LINE(385)
											Float _z = te->__get((int)14);		HX_STACK_VAR(_z,"_z");
											HX_STACK_LINE(385)
											_position->z = _z;
											HX_STACK_LINE(385)
											if ((_position->_construct)){
												HX_STACK_LINE(385)
												_position->z;
											}
											else{
												HX_STACK_LINE(385)
												if (((bool((_position->listen_z != null())) && bool(!(_position->ignore_listeners))))){
													HX_STACK_LINE(385)
													_position->listen_z(_z);
												}
												HX_STACK_LINE(385)
												_position->z;
											}
										}
									}
									HX_STACK_LINE(385)
									if (((_scale == null()))){
										HX_STACK_LINE(385)
										::phoenix::Vector _g4 = ::phoenix::Vector_obj::__new(_ax_length,_ay_length,_az_length,null());		HX_STACK_VAR(_g4,"_g4");
										HX_STACK_LINE(385)
										_scale = _g4;
									}
									else{
										HX_STACK_LINE(385)
										{
											HX_STACK_LINE(385)
											_scale->x = _ax_length;
											HX_STACK_LINE(385)
											if ((_scale->_construct)){
												HX_STACK_LINE(385)
												_scale->x;
											}
											else{
												HX_STACK_LINE(385)
												if (((bool((_scale->listen_x != null())) && bool(!(_scale->ignore_listeners))))){
													HX_STACK_LINE(385)
													_scale->listen_x(_ax_length);
												}
												HX_STACK_LINE(385)
												_scale->x;
											}
										}
										HX_STACK_LINE(385)
										{
											HX_STACK_LINE(385)
											_scale->y = _ay_length;
											HX_STACK_LINE(385)
											if ((_scale->_construct)){
												HX_STACK_LINE(385)
												_scale->y;
											}
											else{
												HX_STACK_LINE(385)
												if (((bool((_scale->listen_y != null())) && bool(!(_scale->ignore_listeners))))){
													HX_STACK_LINE(385)
													_scale->listen_y(_ay_length);
												}
												HX_STACK_LINE(385)
												_scale->y;
											}
										}
										HX_STACK_LINE(385)
										{
											HX_STACK_LINE(385)
											_scale->z = _az_length;
											HX_STACK_LINE(385)
											if ((_scale->_construct)){
												HX_STACK_LINE(385)
												_scale->z;
											}
											else{
												HX_STACK_LINE(385)
												if (((bool((_scale->listen_z != null())) && bool(!(_scale->ignore_listeners))))){
													HX_STACK_LINE(385)
													_scale->listen_z(_az_length);
												}
												HX_STACK_LINE(385)
												_scale->z;
											}
										}
									}
									HX_STACK_LINE(385)
									Array< Float > _g5 = _this3->elements->concat(Array_obj< Float >::__new());		HX_STACK_VAR(_g5,"_g5");
									HX_STACK_LINE(385)
									matrix->elements = _g5;
									HX_STACK_LINE(385)
									Array< Float > me = matrix->elements;		HX_STACK_VAR(me,"me");
									HX_STACK_LINE(385)
									hx::DivEq(me[(int)0],_ax_length);
									HX_STACK_LINE(385)
									hx::DivEq(me[(int)1],_ax_length);
									HX_STACK_LINE(385)
									hx::DivEq(me[(int)2],_ax_length);
									HX_STACK_LINE(385)
									hx::DivEq(me[(int)4],_ay_length);
									HX_STACK_LINE(385)
									hx::DivEq(me[(int)5],_ay_length);
									HX_STACK_LINE(385)
									hx::DivEq(me[(int)6],_ay_length);
									HX_STACK_LINE(385)
									hx::DivEq(me[(int)8],_az_length);
									HX_STACK_LINE(385)
									hx::DivEq(me[(int)9],_az_length);
									HX_STACK_LINE(385)
									hx::DivEq(me[(int)10],_az_length);
									HX_STACK_LINE(385)
									_quaternion->setFromRotationMatrix(matrix);
									HX_STACK_LINE(385)
									if (((_this3->_transform == null()))){
										HX_STACK_LINE(385)
										::phoenix::MatrixTransform _g6 = ::phoenix::MatrixTransform_obj::__new(_position,_quaternion,_scale);		HX_STACK_VAR(_g6,"_g6");
										HX_STACK_LINE(385)
										_this3->_transform = _g6;
									}
									else{
										HX_STACK_LINE(385)
										_this3->_transform->pos = _position;
										HX_STACK_LINE(385)
										_this3->_transform->rotation = _quaternion;
										HX_STACK_LINE(385)
										_this3->_transform->scale = _scale;
									}
									HX_STACK_LINE(385)
									_transform = _this3->_transform;
								}
								HX_STACK_LINE(385)
								{
									HX_STACK_LINE(385)
									::phoenix::Vector _p = _transform->pos;		HX_STACK_VAR(_p,"_p");
									HX_STACK_LINE(385)
									_this2->pos = _p;
									HX_STACK_LINE(385)
									if (((_p != null()))){
										HX_STACK_LINE(385)
										::phoenix::Vector_obj::Listen(_this2->pos,_this2->_pos_change_dyn());
										HX_STACK_LINE(385)
										if (((bool((_this2->pos_changed != null())) && bool(!(_this2->ignore_listeners))))){
											HX_STACK_LINE(385)
											_this2->pos_changed(_this2->pos);
										}
									}
									HX_STACK_LINE(385)
									_this2->pos;
								}
								HX_STACK_LINE(385)
								{
									HX_STACK_LINE(385)
									::phoenix::Quaternion _r = _transform->rotation;		HX_STACK_VAR(_r,"_r");
									HX_STACK_LINE(385)
									_this2->rotation = _r;
									HX_STACK_LINE(385)
									if (((_r != null()))){
										HX_STACK_LINE(385)
										{
											HX_STACK_LINE(385)
											::phoenix::Quaternion _q = _this2->rotation;		HX_STACK_VAR(_q,"_q");
											HX_STACK_LINE(385)
											Dynamic listener = _this2->_rotation_change_dyn();		HX_STACK_VAR(listener,"listener");
											HX_STACK_LINE(385)
											_q->listen_x = listener;
											HX_STACK_LINE(385)
											_q->listen_y = listener;
											HX_STACK_LINE(385)
											_q->listen_z = listener;
											HX_STACK_LINE(385)
											_q->listen_w = listener;
										}
										HX_STACK_LINE(385)
										if (((bool((_this2->rotation_changed != null())) && bool(!(_this2->ignore_listeners))))){
											HX_STACK_LINE(385)
											_this2->rotation_changed(_this2->rotation);
										}
									}
									HX_STACK_LINE(385)
									_this2->rotation;
								}
								HX_STACK_LINE(385)
								{
									HX_STACK_LINE(385)
									::phoenix::Vector _s = _transform->scale;		HX_STACK_VAR(_s,"_s");
									HX_STACK_LINE(385)
									_this2->scale = _s;
									HX_STACK_LINE(385)
									if (((_s != null()))){
										HX_STACK_LINE(385)
										::phoenix::Vector_obj::Listen(_this2->scale,_this2->_scale_change_dyn());
										HX_STACK_LINE(385)
										if (((bool((_this2->scale_changed != null())) && bool(!(_this2->ignore_listeners))))){
											HX_STACK_LINE(385)
											_this2->scale_changed(_this2->scale);
										}
									}
									HX_STACK_LINE(385)
									_this2->scale;
								}
							}
							HX_STACK_LINE(385)
							_this2;
						}
						HX_STACK_LINE(385)
						{
							HX_STACK_LINE(385)
							_this1->dirty = false;
							HX_STACK_LINE(385)
							if (((bool((bool((bool(_this1->dirty) && bool(!(_this1->_setup)))) && bool((_this1->_dirty_handlers != null())))) && bool((_this1->_dirty_handlers->__Field(HX_CSTRING("length"),true) > (int)0))))){
								HX_STACK_LINE(385)
								int _g = (int)0;		HX_STACK_VAR(_g,"_g");
								HX_STACK_LINE(385)
								Dynamic _g1 = _this1->_dirty_handlers;		HX_STACK_VAR(_g1,"_g1");
								HX_STACK_LINE(385)
								while((true)){
									HX_STACK_LINE(385)
									if ((!(((_g < _g1->__Field(HX_CSTRING("length"),true)))))){
										HX_STACK_LINE(385)
										break;
									}
									HX_STACK_LINE(385)
									Dynamic _handler = _g1->__GetItem(_g);		HX_STACK_VAR(_handler,"_handler");
									HX_STACK_LINE(385)
									++(_g);
									HX_STACK_LINE(385)
									if (((_handler != null()))){
										HX_STACK_LINE(385)
										_handler(_this1).Cast< Void >();
									}
								}
							}
							HX_STACK_LINE(385)
							_this1->dirty;
						}
						HX_STACK_LINE(385)
						_this1->_cleaning = false;
						HX_STACK_LINE(385)
						if (((bool((_this1->_clean_handlers != null())) && bool((_this1->_clean_handlers->__Field(HX_CSTRING("length"),true) > (int)0))))){
							HX_STACK_LINE(385)
							int _g = (int)0;		HX_STACK_VAR(_g,"_g");
							HX_STACK_LINE(385)
							Dynamic _g1 = _this1->_clean_handlers;		HX_STACK_VAR(_g1,"_g1");
							HX_STACK_LINE(385)
							while((true)){
								HX_STACK_LINE(385)
								if ((!(((_g < _g1->__Field(HX_CSTRING("length"),true)))))){
									HX_STACK_LINE(385)
									break;
								}
								HX_STACK_LINE(385)
								Dynamic _handler = _g1->__GetItem(_g);		HX_STACK_VAR(_handler,"_handler");
								HX_STACK_LINE(385)
								++(_g);
								HX_STACK_LINE(385)
								if (((_handler != null()))){
									HX_STACK_LINE(385)
									_handler(_this1).Cast< Void >();
								}
							}
						}
					}
				}
			}
			HX_STACK_LINE(385)
			if (((bool(_this->dirty) && bool(!(_this->_cleaning))))){
				HX_STACK_LINE(385)
				if ((!(_this->dirty))){
					HX_STACK_LINE(385)
					Dynamic();
				}
				else{
					HX_STACK_LINE(385)
					_this->_cleaning = true;
					HX_STACK_LINE(385)
					{
						HX_STACK_LINE(385)
						::phoenix::Matrix _this1 = _this->_pos_matrix;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(385)
						{
							HX_STACK_LINE(385)
							Array< Float > e = _this1->elements;		HX_STACK_VAR(e,"e");
							HX_STACK_LINE(385)
							e[(int)0] = (int)1;
							HX_STACK_LINE(385)
							e[(int)4] = (int)0;
							HX_STACK_LINE(385)
							e[(int)8] = (int)0;
							HX_STACK_LINE(385)
							e[(int)12] = _this->local->pos->x;
							HX_STACK_LINE(385)
							e[(int)1] = (int)0;
							HX_STACK_LINE(385)
							e[(int)5] = (int)1;
							HX_STACK_LINE(385)
							e[(int)9] = (int)0;
							HX_STACK_LINE(385)
							e[(int)13] = _this->local->pos->y;
							HX_STACK_LINE(385)
							e[(int)2] = (int)0;
							HX_STACK_LINE(385)
							e[(int)6] = (int)0;
							HX_STACK_LINE(385)
							e[(int)10] = (int)1;
							HX_STACK_LINE(385)
							e[(int)14] = _this->local->pos->z;
							HX_STACK_LINE(385)
							e[(int)3] = (int)0;
							HX_STACK_LINE(385)
							e[(int)7] = (int)0;
							HX_STACK_LINE(385)
							e[(int)11] = (int)0;
							HX_STACK_LINE(385)
							e[(int)15] = (int)1;
							HX_STACK_LINE(385)
							_this1;
						}
						HX_STACK_LINE(385)
						_this1;
					}
					HX_STACK_LINE(385)
					{
						HX_STACK_LINE(385)
						::phoenix::Matrix _this1 = _this->_rotation_matrix;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(385)
						::phoenix::Quaternion q = _this->local->rotation;		HX_STACK_VAR(q,"q");
						HX_STACK_LINE(385)
						Array< Float > te = _this1->elements;		HX_STACK_VAR(te,"te");
						HX_STACK_LINE(385)
						Float x2 = (q->x + q->x);		HX_STACK_VAR(x2,"x2");
						HX_STACK_LINE(385)
						Float y2 = (q->y + q->y);		HX_STACK_VAR(y2,"y2");
						HX_STACK_LINE(385)
						Float z2 = (q->z + q->z);		HX_STACK_VAR(z2,"z2");
						HX_STACK_LINE(385)
						Float xx = (q->x * x2);		HX_STACK_VAR(xx,"xx");
						HX_STACK_LINE(385)
						Float xy = (q->x * y2);		HX_STACK_VAR(xy,"xy");
						HX_STACK_LINE(385)
						Float xz = (q->x * z2);		HX_STACK_VAR(xz,"xz");
						HX_STACK_LINE(385)
						Float yy = (q->y * y2);		HX_STACK_VAR(yy,"yy");
						HX_STACK_LINE(385)
						Float yz = (q->y * z2);		HX_STACK_VAR(yz,"yz");
						HX_STACK_LINE(385)
						Float zz = (q->z * z2);		HX_STACK_VAR(zz,"zz");
						HX_STACK_LINE(385)
						Float wx = (q->w * x2);		HX_STACK_VAR(wx,"wx");
						HX_STACK_LINE(385)
						Float wy = (q->w * y2);		HX_STACK_VAR(wy,"wy");
						HX_STACK_LINE(385)
						Float wz = (q->w * z2);		HX_STACK_VAR(wz,"wz");
						HX_STACK_LINE(385)
						te[(int)0] = ((int)1 - ((yy + zz)));
						HX_STACK_LINE(385)
						te[(int)4] = (xy - wz);
						HX_STACK_LINE(385)
						te[(int)8] = (xz + wy);
						HX_STACK_LINE(385)
						te[(int)1] = (xy + wz);
						HX_STACK_LINE(385)
						te[(int)5] = ((int)1 - ((xx + zz)));
						HX_STACK_LINE(385)
						te[(int)9] = (yz - wx);
						HX_STACK_LINE(385)
						te[(int)2] = (xz - wy);
						HX_STACK_LINE(385)
						te[(int)6] = (yz + wx);
						HX_STACK_LINE(385)
						te[(int)10] = ((int)1 - ((xx + yy)));
						HX_STACK_LINE(385)
						te[(int)3] = (int)0;
						HX_STACK_LINE(385)
						te[(int)7] = (int)0;
						HX_STACK_LINE(385)
						te[(int)11] = (int)0;
						HX_STACK_LINE(385)
						te[(int)12] = (int)0;
						HX_STACK_LINE(385)
						te[(int)13] = (int)0;
						HX_STACK_LINE(385)
						te[(int)14] = (int)0;
						HX_STACK_LINE(385)
						te[(int)15] = (int)1;
						HX_STACK_LINE(385)
						_this1;
					}
					HX_STACK_LINE(385)
					{
						HX_STACK_LINE(385)
						::phoenix::Matrix _this1 = _this->_origin_undo_matrix;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(385)
						{
							HX_STACK_LINE(385)
							Array< Float > e = _this1->elements;		HX_STACK_VAR(e,"e");
							HX_STACK_LINE(385)
							e[(int)0] = (int)1;
							HX_STACK_LINE(385)
							e[(int)4] = (int)0;
							HX_STACK_LINE(385)
							e[(int)8] = (int)0;
							HX_STACK_LINE(385)
							e[(int)12] = -(_this->origin->x);
							HX_STACK_LINE(385)
							e[(int)1] = (int)0;
							HX_STACK_LINE(385)
							e[(int)5] = (int)1;
							HX_STACK_LINE(385)
							e[(int)9] = (int)0;
							HX_STACK_LINE(385)
							e[(int)13] = -(_this->origin->y);
							HX_STACK_LINE(385)
							e[(int)2] = (int)0;
							HX_STACK_LINE(385)
							e[(int)6] = (int)0;
							HX_STACK_LINE(385)
							e[(int)10] = (int)1;
							HX_STACK_LINE(385)
							e[(int)14] = -(_this->origin->z);
							HX_STACK_LINE(385)
							e[(int)3] = (int)0;
							HX_STACK_LINE(385)
							e[(int)7] = (int)0;
							HX_STACK_LINE(385)
							e[(int)11] = (int)0;
							HX_STACK_LINE(385)
							e[(int)15] = (int)1;
							HX_STACK_LINE(385)
							_this1;
						}
						HX_STACK_LINE(385)
						_this1;
					}
					HX_STACK_LINE(385)
					{
						HX_STACK_LINE(385)
						::phoenix::Matrix _this1 = _this->local->matrix;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(385)
						{
							HX_STACK_LINE(385)
							Array< Float > e = _this1->elements;		HX_STACK_VAR(e,"e");
							HX_STACK_LINE(385)
							e[(int)0] = (int)1;
							HX_STACK_LINE(385)
							e[(int)4] = (int)0;
							HX_STACK_LINE(385)
							e[(int)8] = (int)0;
							HX_STACK_LINE(385)
							e[(int)12] = _this->origin->x;
							HX_STACK_LINE(385)
							e[(int)1] = (int)0;
							HX_STACK_LINE(385)
							e[(int)5] = (int)1;
							HX_STACK_LINE(385)
							e[(int)9] = (int)0;
							HX_STACK_LINE(385)
							e[(int)13] = _this->origin->y;
							HX_STACK_LINE(385)
							e[(int)2] = (int)0;
							HX_STACK_LINE(385)
							e[(int)6] = (int)0;
							HX_STACK_LINE(385)
							e[(int)10] = (int)1;
							HX_STACK_LINE(385)
							e[(int)14] = _this->origin->z;
							HX_STACK_LINE(385)
							e[(int)3] = (int)0;
							HX_STACK_LINE(385)
							e[(int)7] = (int)0;
							HX_STACK_LINE(385)
							e[(int)11] = (int)0;
							HX_STACK_LINE(385)
							e[(int)15] = (int)1;
							HX_STACK_LINE(385)
							_this1;
						}
						HX_STACK_LINE(385)
						_this1;
					}
					HX_STACK_LINE(385)
					{
						HX_STACK_LINE(385)
						::phoenix::Matrix _this1 = _this->local->matrix;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(385)
						::phoenix::Vector _v = _this->local->scale;		HX_STACK_VAR(_v,"_v");
						HX_STACK_LINE(385)
						Array< Float > te = _this1->elements;		HX_STACK_VAR(te,"te");
						HX_STACK_LINE(385)
						Float _x = _v->x;		HX_STACK_VAR(_x,"_x");
						HX_STACK_LINE(385)
						Float _y = _v->y;		HX_STACK_VAR(_y,"_y");
						HX_STACK_LINE(385)
						Float _z = _v->z;		HX_STACK_VAR(_z,"_z");
						HX_STACK_LINE(385)
						hx::MultEq(te[(int)0],_x);
						HX_STACK_LINE(385)
						hx::MultEq(te[(int)4],_y);
						HX_STACK_LINE(385)
						hx::MultEq(te[(int)8],_z);
						HX_STACK_LINE(385)
						hx::MultEq(te[(int)1],_x);
						HX_STACK_LINE(385)
						hx::MultEq(te[(int)5],_y);
						HX_STACK_LINE(385)
						hx::MultEq(te[(int)9],_z);
						HX_STACK_LINE(385)
						hx::MultEq(te[(int)2],_x);
						HX_STACK_LINE(385)
						hx::MultEq(te[(int)6],_y);
						HX_STACK_LINE(385)
						hx::MultEq(te[(int)10],_z);
						HX_STACK_LINE(385)
						hx::MultEq(te[(int)3],_x);
						HX_STACK_LINE(385)
						hx::MultEq(te[(int)7],_y);
						HX_STACK_LINE(385)
						hx::MultEq(te[(int)11],_z);
						HX_STACK_LINE(385)
						_this1;
					}
					HX_STACK_LINE(385)
					{
						HX_STACK_LINE(385)
						::phoenix::Matrix _this1 = _this->local->matrix;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(385)
						{
							HX_STACK_LINE(385)
							Array< Float > ae = _this1->elements;		HX_STACK_VAR(ae,"ae");
							HX_STACK_LINE(385)
							Array< Float > be = _this->_rotation_matrix->elements;		HX_STACK_VAR(be,"be");
							HX_STACK_LINE(385)
							Array< Float > te = _this1->elements;		HX_STACK_VAR(te,"te");
							HX_STACK_LINE(385)
							Float a11 = ae->__get((int)0);		HX_STACK_VAR(a11,"a11");
							HX_STACK_LINE(385)
							Float a12 = ae->__get((int)4);		HX_STACK_VAR(a12,"a12");
							HX_STACK_LINE(385)
							Float a13 = ae->__get((int)8);		HX_STACK_VAR(a13,"a13");
							HX_STACK_LINE(385)
							Float a14 = ae->__get((int)12);		HX_STACK_VAR(a14,"a14");
							HX_STACK_LINE(385)
							Float a21 = ae->__get((int)1);		HX_STACK_VAR(a21,"a21");
							HX_STACK_LINE(385)
							Float a22 = ae->__get((int)5);		HX_STACK_VAR(a22,"a22");
							HX_STACK_LINE(385)
							Float a23 = ae->__get((int)9);		HX_STACK_VAR(a23,"a23");
							HX_STACK_LINE(385)
							Float a24 = ae->__get((int)13);		HX_STACK_VAR(a24,"a24");
							HX_STACK_LINE(385)
							Float a31 = ae->__get((int)2);		HX_STACK_VAR(a31,"a31");
							HX_STACK_LINE(385)
							Float a32 = ae->__get((int)6);		HX_STACK_VAR(a32,"a32");
							HX_STACK_LINE(385)
							Float a33 = ae->__get((int)10);		HX_STACK_VAR(a33,"a33");
							HX_STACK_LINE(385)
							Float a34 = ae->__get((int)14);		HX_STACK_VAR(a34,"a34");
							HX_STACK_LINE(385)
							Float a41 = ae->__get((int)3);		HX_STACK_VAR(a41,"a41");
							HX_STACK_LINE(385)
							Float a42 = ae->__get((int)7);		HX_STACK_VAR(a42,"a42");
							HX_STACK_LINE(385)
							Float a43 = ae->__get((int)11);		HX_STACK_VAR(a43,"a43");
							HX_STACK_LINE(385)
							Float a44 = ae->__get((int)15);		HX_STACK_VAR(a44,"a44");
							HX_STACK_LINE(385)
							Float b11 = be->__get((int)0);		HX_STACK_VAR(b11,"b11");
							HX_STACK_LINE(385)
							Float b12 = be->__get((int)4);		HX_STACK_VAR(b12,"b12");
							HX_STACK_LINE(385)
							Float b13 = be->__get((int)8);		HX_STACK_VAR(b13,"b13");
							HX_STACK_LINE(385)
							Float b14 = be->__get((int)12);		HX_STACK_VAR(b14,"b14");
							HX_STACK_LINE(385)
							Float b21 = be->__get((int)1);		HX_STACK_VAR(b21,"b21");
							HX_STACK_LINE(385)
							Float b22 = be->__get((int)5);		HX_STACK_VAR(b22,"b22");
							HX_STACK_LINE(385)
							Float b23 = be->__get((int)9);		HX_STACK_VAR(b23,"b23");
							HX_STACK_LINE(385)
							Float b24 = be->__get((int)13);		HX_STACK_VAR(b24,"b24");
							HX_STACK_LINE(385)
							Float b31 = be->__get((int)2);		HX_STACK_VAR(b31,"b31");
							HX_STACK_LINE(385)
							Float b32 = be->__get((int)6);		HX_STACK_VAR(b32,"b32");
							HX_STACK_LINE(385)
							Float b33 = be->__get((int)10);		HX_STACK_VAR(b33,"b33");
							HX_STACK_LINE(385)
							Float b34 = be->__get((int)14);		HX_STACK_VAR(b34,"b34");
							HX_STACK_LINE(385)
							Float b41 = be->__get((int)3);		HX_STACK_VAR(b41,"b41");
							HX_STACK_LINE(385)
							Float b42 = be->__get((int)7);		HX_STACK_VAR(b42,"b42");
							HX_STACK_LINE(385)
							Float b43 = be->__get((int)11);		HX_STACK_VAR(b43,"b43");
							HX_STACK_LINE(385)
							Float b44 = be->__get((int)15);		HX_STACK_VAR(b44,"b44");
							HX_STACK_LINE(385)
							te[(int)0] = ((((a11 * b11) + (a12 * b21)) + (a13 * b31)) + (a14 * b41));
							HX_STACK_LINE(385)
							te[(int)4] = ((((a11 * b12) + (a12 * b22)) + (a13 * b32)) + (a14 * b42));
							HX_STACK_LINE(385)
							te[(int)8] = ((((a11 * b13) + (a12 * b23)) + (a13 * b33)) + (a14 * b43));
							HX_STACK_LINE(385)
							te[(int)12] = ((((a11 * b14) + (a12 * b24)) + (a13 * b34)) + (a14 * b44));
							HX_STACK_LINE(385)
							te[(int)1] = ((((a21 * b11) + (a22 * b21)) + (a23 * b31)) + (a24 * b41));
							HX_STACK_LINE(385)
							te[(int)5] = ((((a21 * b12) + (a22 * b22)) + (a23 * b32)) + (a24 * b42));
							HX_STACK_LINE(385)
							te[(int)9] = ((((a21 * b13) + (a22 * b23)) + (a23 * b33)) + (a24 * b43));
							HX_STACK_LINE(385)
							te[(int)13] = ((((a21 * b14) + (a22 * b24)) + (a23 * b34)) + (a24 * b44));
							HX_STACK_LINE(385)
							te[(int)2] = ((((a31 * b11) + (a32 * b21)) + (a33 * b31)) + (a34 * b41));
							HX_STACK_LINE(385)
							te[(int)6] = ((((a31 * b12) + (a32 * b22)) + (a33 * b32)) + (a34 * b42));
							HX_STACK_LINE(385)
							te[(int)10] = ((((a31 * b13) + (a32 * b23)) + (a33 * b33)) + (a34 * b43));
							HX_STACK_LINE(385)
							te[(int)14] = ((((a31 * b14) + (a32 * b24)) + (a33 * b34)) + (a34 * b44));
							HX_STACK_LINE(385)
							te[(int)3] = ((((a41 * b11) + (a42 * b21)) + (a43 * b31)) + (a44 * b41));
							HX_STACK_LINE(385)
							te[(int)7] = ((((a41 * b12) + (a42 * b22)) + (a43 * b32)) + (a44 * b42));
							HX_STACK_LINE(385)
							te[(int)11] = ((((a41 * b13) + (a42 * b23)) + (a43 * b33)) + (a44 * b43));
							HX_STACK_LINE(385)
							te[(int)15] = ((((a41 * b14) + (a42 * b24)) + (a43 * b34)) + (a44 * b44));
							HX_STACK_LINE(385)
							_this1;
						}
					}
					HX_STACK_LINE(385)
					{
						HX_STACK_LINE(385)
						::phoenix::Matrix _this1 = _this->local->matrix;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(385)
						::phoenix::Vector _v = _this->local->pos;		HX_STACK_VAR(_v,"_v");
						HX_STACK_LINE(385)
						Array< Float > te = _this1->elements;		HX_STACK_VAR(te,"te");
						HX_STACK_LINE(385)
						te[(int)12] = _v->x;
						HX_STACK_LINE(385)
						te[(int)13] = _v->y;
						HX_STACK_LINE(385)
						te[(int)14] = _v->z;
						HX_STACK_LINE(385)
						_this1;
					}
					HX_STACK_LINE(385)
					{
						HX_STACK_LINE(385)
						::phoenix::Matrix _this1 = _this->local->matrix;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(385)
						{
							HX_STACK_LINE(385)
							Array< Float > ae = _this1->elements;		HX_STACK_VAR(ae,"ae");
							HX_STACK_LINE(385)
							Array< Float > be = _this->_origin_undo_matrix->elements;		HX_STACK_VAR(be,"be");
							HX_STACK_LINE(385)
							Array< Float > te = _this1->elements;		HX_STACK_VAR(te,"te");
							HX_STACK_LINE(385)
							Float a11 = ae->__get((int)0);		HX_STACK_VAR(a11,"a11");
							HX_STACK_LINE(385)
							Float a12 = ae->__get((int)4);		HX_STACK_VAR(a12,"a12");
							HX_STACK_LINE(385)
							Float a13 = ae->__get((int)8);		HX_STACK_VAR(a13,"a13");
							HX_STACK_LINE(385)
							Float a14 = ae->__get((int)12);		HX_STACK_VAR(a14,"a14");
							HX_STACK_LINE(385)
							Float a21 = ae->__get((int)1);		HX_STACK_VAR(a21,"a21");
							HX_STACK_LINE(385)
							Float a22 = ae->__get((int)5);		HX_STACK_VAR(a22,"a22");
							HX_STACK_LINE(385)
							Float a23 = ae->__get((int)9);		HX_STACK_VAR(a23,"a23");
							HX_STACK_LINE(385)
							Float a24 = ae->__get((int)13);		HX_STACK_VAR(a24,"a24");
							HX_STACK_LINE(385)
							Float a31 = ae->__get((int)2);		HX_STACK_VAR(a31,"a31");
							HX_STACK_LINE(385)
							Float a32 = ae->__get((int)6);		HX_STACK_VAR(a32,"a32");
							HX_STACK_LINE(385)
							Float a33 = ae->__get((int)10);		HX_STACK_VAR(a33,"a33");
							HX_STACK_LINE(385)
							Float a34 = ae->__get((int)14);		HX_STACK_VAR(a34,"a34");
							HX_STACK_LINE(385)
							Float a41 = ae->__get((int)3);		HX_STACK_VAR(a41,"a41");
							HX_STACK_LINE(385)
							Float a42 = ae->__get((int)7);		HX_STACK_VAR(a42,"a42");
							HX_STACK_LINE(385)
							Float a43 = ae->__get((int)11);		HX_STACK_VAR(a43,"a43");
							HX_STACK_LINE(385)
							Float a44 = ae->__get((int)15);		HX_STACK_VAR(a44,"a44");
							HX_STACK_LINE(385)
							Float b11 = be->__get((int)0);		HX_STACK_VAR(b11,"b11");
							HX_STACK_LINE(385)
							Float b12 = be->__get((int)4);		HX_STACK_VAR(b12,"b12");
							HX_STACK_LINE(385)
							Float b13 = be->__get((int)8);		HX_STACK_VAR(b13,"b13");
							HX_STACK_LINE(385)
							Float b14 = be->__get((int)12);		HX_STACK_VAR(b14,"b14");
							HX_STACK_LINE(385)
							Float b21 = be->__get((int)1);		HX_STACK_VAR(b21,"b21");
							HX_STACK_LINE(385)
							Float b22 = be->__get((int)5);		HX_STACK_VAR(b22,"b22");
							HX_STACK_LINE(385)
							Float b23 = be->__get((int)9);		HX_STACK_VAR(b23,"b23");
							HX_STACK_LINE(385)
							Float b24 = be->__get((int)13);		HX_STACK_VAR(b24,"b24");
							HX_STACK_LINE(385)
							Float b31 = be->__get((int)2);		HX_STACK_VAR(b31,"b31");
							HX_STACK_LINE(385)
							Float b32 = be->__get((int)6);		HX_STACK_VAR(b32,"b32");
							HX_STACK_LINE(385)
							Float b33 = be->__get((int)10);		HX_STACK_VAR(b33,"b33");
							HX_STACK_LINE(385)
							Float b34 = be->__get((int)14);		HX_STACK_VAR(b34,"b34");
							HX_STACK_LINE(385)
							Float b41 = be->__get((int)3);		HX_STACK_VAR(b41,"b41");
							HX_STACK_LINE(385)
							Float b42 = be->__get((int)7);		HX_STACK_VAR(b42,"b42");
							HX_STACK_LINE(385)
							Float b43 = be->__get((int)11);		HX_STACK_VAR(b43,"b43");
							HX_STACK_LINE(385)
							Float b44 = be->__get((int)15);		HX_STACK_VAR(b44,"b44");
							HX_STACK_LINE(385)
							te[(int)0] = ((((a11 * b11) + (a12 * b21)) + (a13 * b31)) + (a14 * b41));
							HX_STACK_LINE(385)
							te[(int)4] = ((((a11 * b12) + (a12 * b22)) + (a13 * b32)) + (a14 * b42));
							HX_STACK_LINE(385)
							te[(int)8] = ((((a11 * b13) + (a12 * b23)) + (a13 * b33)) + (a14 * b43));
							HX_STACK_LINE(385)
							te[(int)12] = ((((a11 * b14) + (a12 * b24)) + (a13 * b34)) + (a14 * b44));
							HX_STACK_LINE(385)
							te[(int)1] = ((((a21 * b11) + (a22 * b21)) + (a23 * b31)) + (a24 * b41));
							HX_STACK_LINE(385)
							te[(int)5] = ((((a21 * b12) + (a22 * b22)) + (a23 * b32)) + (a24 * b42));
							HX_STACK_LINE(385)
							te[(int)9] = ((((a21 * b13) + (a22 * b23)) + (a23 * b33)) + (a24 * b43));
							HX_STACK_LINE(385)
							te[(int)13] = ((((a21 * b14) + (a22 * b24)) + (a23 * b34)) + (a24 * b44));
							HX_STACK_LINE(385)
							te[(int)2] = ((((a31 * b11) + (a32 * b21)) + (a33 * b31)) + (a34 * b41));
							HX_STACK_LINE(385)
							te[(int)6] = ((((a31 * b12) + (a32 * b22)) + (a33 * b32)) + (a34 * b42));
							HX_STACK_LINE(385)
							te[(int)10] = ((((a31 * b13) + (a32 * b23)) + (a33 * b33)) + (a34 * b43));
							HX_STACK_LINE(385)
							te[(int)14] = ((((a31 * b14) + (a32 * b24)) + (a33 * b34)) + (a34 * b44));
							HX_STACK_LINE(385)
							te[(int)3] = ((((a41 * b11) + (a42 * b21)) + (a43 * b31)) + (a44 * b41));
							HX_STACK_LINE(385)
							te[(int)7] = ((((a41 * b12) + (a42 * b22)) + (a43 * b32)) + (a44 * b42));
							HX_STACK_LINE(385)
							te[(int)11] = ((((a41 * b13) + (a42 * b23)) + (a43 * b33)) + (a44 * b43));
							HX_STACK_LINE(385)
							te[(int)15] = ((((a41 * b14) + (a42 * b24)) + (a43 * b34)) + (a44 * b44));
							HX_STACK_LINE(385)
							_this1;
						}
					}
					HX_STACK_LINE(385)
					if (((_this->parent != null()))){
						HX_STACK_LINE(385)
						::phoenix::Spatial _this1 = _this->get_world();		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(385)
						::phoenix::Matrix _m;		HX_STACK_VAR(_m,"_m");
						HX_STACK_LINE(385)
						{
							HX_STACK_LINE(385)
							::phoenix::Matrix _this2;		HX_STACK_VAR(_this2,"_this2");
							HX_STACK_LINE(385)
							{
								HX_STACK_LINE(385)
								::phoenix::Spatial _this3 = _this->get_world();		HX_STACK_VAR(_this3,"_this3");
								HX_STACK_LINE(385)
								_this2 = _this3->matrix;
							}
							HX_STACK_LINE(385)
							::phoenix::Matrix _a;		HX_STACK_VAR(_a,"_a");
							HX_STACK_LINE(385)
							{
								HX_STACK_LINE(385)
								::phoenix::Spatial _this3 = _this->parent->get_world();		HX_STACK_VAR(_this3,"_this3");
								HX_STACK_LINE(385)
								_a = _this3->matrix;
							}
							HX_STACK_LINE(385)
							Array< Float > ae = _a->elements;		HX_STACK_VAR(ae,"ae");
							HX_STACK_LINE(385)
							Array< Float > be = _this->local->matrix->elements;		HX_STACK_VAR(be,"be");
							HX_STACK_LINE(385)
							Array< Float > te = _this2->elements;		HX_STACK_VAR(te,"te");
							HX_STACK_LINE(385)
							Float a11 = ae->__get((int)0);		HX_STACK_VAR(a11,"a11");
							HX_STACK_LINE(385)
							Float a12 = ae->__get((int)4);		HX_STACK_VAR(a12,"a12");
							HX_STACK_LINE(385)
							Float a13 = ae->__get((int)8);		HX_STACK_VAR(a13,"a13");
							HX_STACK_LINE(385)
							Float a14 = ae->__get((int)12);		HX_STACK_VAR(a14,"a14");
							HX_STACK_LINE(385)
							Float a21 = ae->__get((int)1);		HX_STACK_VAR(a21,"a21");
							HX_STACK_LINE(385)
							Float a22 = ae->__get((int)5);		HX_STACK_VAR(a22,"a22");
							HX_STACK_LINE(385)
							Float a23 = ae->__get((int)9);		HX_STACK_VAR(a23,"a23");
							HX_STACK_LINE(385)
							Float a24 = ae->__get((int)13);		HX_STACK_VAR(a24,"a24");
							HX_STACK_LINE(385)
							Float a31 = ae->__get((int)2);		HX_STACK_VAR(a31,"a31");
							HX_STACK_LINE(385)
							Float a32 = ae->__get((int)6);		HX_STACK_VAR(a32,"a32");
							HX_STACK_LINE(385)
							Float a33 = ae->__get((int)10);		HX_STACK_VAR(a33,"a33");
							HX_STACK_LINE(385)
							Float a34 = ae->__get((int)14);		HX_STACK_VAR(a34,"a34");
							HX_STACK_LINE(385)
							Float a41 = ae->__get((int)3);		HX_STACK_VAR(a41,"a41");
							HX_STACK_LINE(385)
							Float a42 = ae->__get((int)7);		HX_STACK_VAR(a42,"a42");
							HX_STACK_LINE(385)
							Float a43 = ae->__get((int)11);		HX_STACK_VAR(a43,"a43");
							HX_STACK_LINE(385)
							Float a44 = ae->__get((int)15);		HX_STACK_VAR(a44,"a44");
							HX_STACK_LINE(385)
							Float b11 = be->__get((int)0);		HX_STACK_VAR(b11,"b11");
							HX_STACK_LINE(385)
							Float b12 = be->__get((int)4);		HX_STACK_VAR(b12,"b12");
							HX_STACK_LINE(385)
							Float b13 = be->__get((int)8);		HX_STACK_VAR(b13,"b13");
							HX_STACK_LINE(385)
							Float b14 = be->__get((int)12);		HX_STACK_VAR(b14,"b14");
							HX_STACK_LINE(385)
							Float b21 = be->__get((int)1);		HX_STACK_VAR(b21,"b21");
							HX_STACK_LINE(385)
							Float b22 = be->__get((int)5);		HX_STACK_VAR(b22,"b22");
							HX_STACK_LINE(385)
							Float b23 = be->__get((int)9);		HX_STACK_VAR(b23,"b23");
							HX_STACK_LINE(385)
							Float b24 = be->__get((int)13);		HX_STACK_VAR(b24,"b24");
							HX_STACK_LINE(385)
							Float b31 = be->__get((int)2);		HX_STACK_VAR(b31,"b31");
							HX_STACK_LINE(385)
							Float b32 = be->__get((int)6);		HX_STACK_VAR(b32,"b32");
							HX_STACK_LINE(385)
							Float b33 = be->__get((int)10);		HX_STACK_VAR(b33,"b33");
							HX_STACK_LINE(385)
							Float b34 = be->__get((int)14);		HX_STACK_VAR(b34,"b34");
							HX_STACK_LINE(385)
							Float b41 = be->__get((int)3);		HX_STACK_VAR(b41,"b41");
							HX_STACK_LINE(385)
							Float b42 = be->__get((int)7);		HX_STACK_VAR(b42,"b42");
							HX_STACK_LINE(385)
							Float b43 = be->__get((int)11);		HX_STACK_VAR(b43,"b43");
							HX_STACK_LINE(385)
							Float b44 = be->__get((int)15);		HX_STACK_VAR(b44,"b44");
							HX_STACK_LINE(385)
							te[(int)0] = ((((a11 * b11) + (a12 * b21)) + (a13 * b31)) + (a14 * b41));
							HX_STACK_LINE(385)
							te[(int)4] = ((((a11 * b12) + (a12 * b22)) + (a13 * b32)) + (a14 * b42));
							HX_STACK_LINE(385)
							te[(int)8] = ((((a11 * b13) + (a12 * b23)) + (a13 * b33)) + (a14 * b43));
							HX_STACK_LINE(385)
							te[(int)12] = ((((a11 * b14) + (a12 * b24)) + (a13 * b34)) + (a14 * b44));
							HX_STACK_LINE(385)
							te[(int)1] = ((((a21 * b11) + (a22 * b21)) + (a23 * b31)) + (a24 * b41));
							HX_STACK_LINE(385)
							te[(int)5] = ((((a21 * b12) + (a22 * b22)) + (a23 * b32)) + (a24 * b42));
							HX_STACK_LINE(385)
							te[(int)9] = ((((a21 * b13) + (a22 * b23)) + (a23 * b33)) + (a24 * b43));
							HX_STACK_LINE(385)
							te[(int)13] = ((((a21 * b14) + (a22 * b24)) + (a23 * b34)) + (a24 * b44));
							HX_STACK_LINE(385)
							te[(int)2] = ((((a31 * b11) + (a32 * b21)) + (a33 * b31)) + (a34 * b41));
							HX_STACK_LINE(385)
							te[(int)6] = ((((a31 * b12) + (a32 * b22)) + (a33 * b32)) + (a34 * b42));
							HX_STACK_LINE(385)
							te[(int)10] = ((((a31 * b13) + (a32 * b23)) + (a33 * b33)) + (a34 * b43));
							HX_STACK_LINE(385)
							te[(int)14] = ((((a31 * b14) + (a32 * b24)) + (a33 * b34)) + (a34 * b44));
							HX_STACK_LINE(385)
							te[(int)3] = ((((a41 * b11) + (a42 * b21)) + (a43 * b31)) + (a44 * b41));
							HX_STACK_LINE(385)
							te[(int)7] = ((((a41 * b12) + (a42 * b22)) + (a43 * b32)) + (a44 * b42));
							HX_STACK_LINE(385)
							te[(int)11] = ((((a41 * b13) + (a42 * b23)) + (a43 * b33)) + (a44 * b43));
							HX_STACK_LINE(385)
							te[(int)15] = ((((a41 * b14) + (a42 * b24)) + (a43 * b34)) + (a44 * b44));
							HX_STACK_LINE(385)
							_m = _this2;
						}
						HX_STACK_LINE(385)
						_this1->matrix = _m;
						HX_STACK_LINE(385)
						if (((_m != null()))){
							HX_STACK_LINE(385)
							::snow::platform::native::utils::Float32Array _g7;		HX_STACK_VAR(_g7,"_g7");
							HX_STACK_LINE(385)
							{
								HX_STACK_LINE(385)
								::phoenix::Matrix _this2 = _this1->matrix;		HX_STACK_VAR(_this2,"_this2");
								HX_STACK_LINE(385)
								{
									HX_STACK_LINE(385)
									::snow::platform::native::utils::Float32Array _this3 = _this2->_float32array;		HX_STACK_VAR(_this3,"_this3");
									HX_STACK_LINE(385)
									Dynamic bufferOrArray = _this2->elements;		HX_STACK_VAR(bufferOrArray,"bufferOrArray");
									HX_STACK_LINE(385)
									int offset = (int)0;		HX_STACK_VAR(offset,"offset");
									HX_STACK_LINE(385)
									if ((::Std_obj::is(bufferOrArray,hx::ClassOf< Array<int> >()))){
										HX_STACK_LINE(385)
										Array< Float > floats = bufferOrArray;		HX_STACK_VAR(floats,"floats");
										HX_STACK_LINE(385)
										{
											HX_STACK_LINE(385)
											int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
											HX_STACK_LINE(385)
											int _g = floats->length;		HX_STACK_VAR(_g,"_g");
											HX_STACK_LINE(385)
											while((true)){
												HX_STACK_LINE(385)
												if ((!(((_g1 < _g))))){
													HX_STACK_LINE(385)
													break;
												}
												HX_STACK_LINE(385)
												int i = (_g1)++;		HX_STACK_VAR(i,"i");
												HX_STACK_LINE(385)
												::__hxcpp_memory_set_float(_this3->bytes,(((int((i + offset)) << int((int)2))) + _this3->byteOffset),floats->__get(i));
											}
										}
									}
									else{
										HX_STACK_LINE(385)
										if ((::Std_obj::is(bufferOrArray,hx::ClassOf< ::snow::platform::native::utils::Float32Array >()))){
											HX_STACK_LINE(385)
											::snow::platform::native::utils::Float32Array floats = bufferOrArray;		HX_STACK_VAR(floats,"floats");
											HX_STACK_LINE(385)
											{
												HX_STACK_LINE(385)
												int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
												HX_STACK_LINE(385)
												int _g = floats->length;		HX_STACK_VAR(_g,"_g");
												HX_STACK_LINE(385)
												while((true)){
													HX_STACK_LINE(385)
													if ((!(((_g1 < _g))))){
														HX_STACK_LINE(385)
														break;
													}
													HX_STACK_LINE(385)
													int i = (_g1)++;		HX_STACK_VAR(i,"i");
													HX_STACK_LINE(385)
													::__hxcpp_memory_set_float(_this3->bytes,(((int((i + offset)) << int((int)2))) + _this3->byteOffset),floats->__get(i));
												}
											}
										}
										else{
											HX_STACK_LINE(385)
											HX_STACK_DO_THROW(HX_CSTRING("Invalid input buffer"));
										}
									}
								}
								HX_STACK_LINE(385)
								_g7 = ::snow::platform::native::utils::Float32Array_obj::__new(_this2->_float32array,null(),null());
							}
							HX_STACK_LINE(385)
							_this1->floats = _g7;
						}
						HX_STACK_LINE(385)
						_this1->matrix;
					}
					else{
						HX_STACK_LINE(385)
						::phoenix::Spatial _this1 = _this->get_world();		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(385)
						::phoenix::Matrix _m;		HX_STACK_VAR(_m,"_m");
						HX_STACK_LINE(385)
						{
							HX_STACK_LINE(385)
							Array< Float > te = _this->local->matrix->elements;		HX_STACK_VAR(te,"te");
							HX_STACK_LINE(385)
							_m = ::phoenix::Matrix_obj::__new(te->__get((int)0),te->__get((int)4),te->__get((int)8),te->__get((int)12),te->__get((int)1),te->__get((int)5),te->__get((int)9),te->__get((int)13),te->__get((int)2),te->__get((int)6),te->__get((int)10),te->__get((int)14),te->__get((int)3),te->__get((int)7),te->__get((int)11),te->__get((int)15));
						}
						HX_STACK_LINE(385)
						_this1->matrix = _m;
						HX_STACK_LINE(385)
						if (((_m != null()))){
							HX_STACK_LINE(385)
							::snow::platform::native::utils::Float32Array _g8;		HX_STACK_VAR(_g8,"_g8");
							HX_STACK_LINE(385)
							{
								HX_STACK_LINE(385)
								::phoenix::Matrix _this2 = _this1->matrix;		HX_STACK_VAR(_this2,"_this2");
								HX_STACK_LINE(385)
								{
									HX_STACK_LINE(385)
									::snow::platform::native::utils::Float32Array _this3 = _this2->_float32array;		HX_STACK_VAR(_this3,"_this3");
									HX_STACK_LINE(385)
									Dynamic bufferOrArray = _this2->elements;		HX_STACK_VAR(bufferOrArray,"bufferOrArray");
									HX_STACK_LINE(385)
									int offset = (int)0;		HX_STACK_VAR(offset,"offset");
									HX_STACK_LINE(385)
									if ((::Std_obj::is(bufferOrArray,hx::ClassOf< Array<int> >()))){
										HX_STACK_LINE(385)
										Array< Float > floats = bufferOrArray;		HX_STACK_VAR(floats,"floats");
										HX_STACK_LINE(385)
										{
											HX_STACK_LINE(385)
											int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
											HX_STACK_LINE(385)
											int _g = floats->length;		HX_STACK_VAR(_g,"_g");
											HX_STACK_LINE(385)
											while((true)){
												HX_STACK_LINE(385)
												if ((!(((_g1 < _g))))){
													HX_STACK_LINE(385)
													break;
												}
												HX_STACK_LINE(385)
												int i = (_g1)++;		HX_STACK_VAR(i,"i");
												HX_STACK_LINE(385)
												::__hxcpp_memory_set_float(_this3->bytes,(((int((i + offset)) << int((int)2))) + _this3->byteOffset),floats->__get(i));
											}
										}
									}
									else{
										HX_STACK_LINE(385)
										if ((::Std_obj::is(bufferOrArray,hx::ClassOf< ::snow::platform::native::utils::Float32Array >()))){
											HX_STACK_LINE(385)
											::snow::platform::native::utils::Float32Array floats = bufferOrArray;		HX_STACK_VAR(floats,"floats");
											HX_STACK_LINE(385)
											{
												HX_STACK_LINE(385)
												int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
												HX_STACK_LINE(385)
												int _g = floats->length;		HX_STACK_VAR(_g,"_g");
												HX_STACK_LINE(385)
												while((true)){
													HX_STACK_LINE(385)
													if ((!(((_g1 < _g))))){
														HX_STACK_LINE(385)
														break;
													}
													HX_STACK_LINE(385)
													int i = (_g1)++;		HX_STACK_VAR(i,"i");
													HX_STACK_LINE(385)
													::__hxcpp_memory_set_float(_this3->bytes,(((int((i + offset)) << int((int)2))) + _this3->byteOffset),floats->__get(i));
												}
											}
										}
										else{
											HX_STACK_LINE(385)
											HX_STACK_DO_THROW(HX_CSTRING("Invalid input buffer"));
										}
									}
								}
								HX_STACK_LINE(385)
								_g8 = ::snow::platform::native::utils::Float32Array_obj::__new(_this2->_float32array,null(),null());
							}
							HX_STACK_LINE(385)
							_this1->floats = _g8;
						}
						HX_STACK_LINE(385)
						_this1->matrix;
					}
					HX_STACK_LINE(385)
					{
						HX_STACK_LINE(385)
						::phoenix::Spatial _this1 = _this->get_world();		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(385)
						if ((_this1->auto_decompose)){
							HX_STACK_LINE(385)
							::phoenix::MatrixTransform _transform;		HX_STACK_VAR(_transform,"_transform");
							HX_STACK_LINE(385)
							{
								HX_STACK_LINE(385)
								::phoenix::Matrix _this2 = _this1->matrix;		HX_STACK_VAR(_this2,"_this2");
								HX_STACK_LINE(385)
								::phoenix::Vector _position = null();		HX_STACK_VAR(_position,"_position");
								HX_STACK_LINE(385)
								::phoenix::Quaternion _quaternion = null();		HX_STACK_VAR(_quaternion,"_quaternion");
								HX_STACK_LINE(385)
								::phoenix::Vector _scale = null();		HX_STACK_VAR(_scale,"_scale");
								HX_STACK_LINE(385)
								Array< Float > te = _this2->elements;		HX_STACK_VAR(te,"te");
								HX_STACK_LINE(385)
								::phoenix::Matrix matrix = ::phoenix::Matrix_obj::__new(null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(matrix,"matrix");
								HX_STACK_LINE(385)
								Float _ax_x = te->__get((int)0);		HX_STACK_VAR(_ax_x,"_ax_x");
								HX_STACK_LINE(385)
								Float _ax_y = te->__get((int)1);		HX_STACK_VAR(_ax_y,"_ax_y");
								HX_STACK_LINE(385)
								Float _ax_z = te->__get((int)2);		HX_STACK_VAR(_ax_z,"_ax_z");
								HX_STACK_LINE(385)
								Float _ay_x = te->__get((int)4);		HX_STACK_VAR(_ay_x,"_ay_x");
								HX_STACK_LINE(385)
								Float _ay_y = te->__get((int)5);		HX_STACK_VAR(_ay_y,"_ay_y");
								HX_STACK_LINE(385)
								Float _ay_z = te->__get((int)6);		HX_STACK_VAR(_ay_z,"_ay_z");
								HX_STACK_LINE(385)
								Float _az_x = te->__get((int)8);		HX_STACK_VAR(_az_x,"_az_x");
								HX_STACK_LINE(385)
								Float _az_y = te->__get((int)9);		HX_STACK_VAR(_az_y,"_az_y");
								HX_STACK_LINE(385)
								Float _az_z = te->__get((int)10);		HX_STACK_VAR(_az_z,"_az_z");
								HX_STACK_LINE(385)
								Float _ax_length = ::Math_obj::sqrt((((_ax_x * _ax_x) + (_ax_y * _ax_y)) + (_ax_z * _ax_z)));		HX_STACK_VAR(_ax_length,"_ax_length");
								HX_STACK_LINE(385)
								Float _ay_length = ::Math_obj::sqrt((((_ay_x * _ay_x) + (_ay_y * _ay_y)) + (_ay_z * _ay_z)));		HX_STACK_VAR(_ay_length,"_ay_length");
								HX_STACK_LINE(385)
								Float _az_length = ::Math_obj::sqrt((((_az_x * _az_x) + (_az_y * _az_y)) + (_az_z * _az_z)));		HX_STACK_VAR(_az_length,"_az_length");
								HX_STACK_LINE(385)
								if (((_quaternion == null()))){
									HX_STACK_LINE(385)
									::phoenix::Quaternion _g9 = ::phoenix::Quaternion_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(_g9,"_g9");
									HX_STACK_LINE(385)
									_quaternion = _g9;
								}
								HX_STACK_LINE(385)
								if (((_position == null()))){
									HX_STACK_LINE(385)
									::phoenix::Vector _g10 = ::phoenix::Vector_obj::__new(te->__get((int)12),te->__get((int)13),te->__get((int)14),null());		HX_STACK_VAR(_g10,"_g10");
									HX_STACK_LINE(385)
									_position = _g10;
								}
								else{
									HX_STACK_LINE(385)
									{
										HX_STACK_LINE(385)
										Float _x = te->__get((int)12);		HX_STACK_VAR(_x,"_x");
										HX_STACK_LINE(385)
										_position->x = _x;
										HX_STACK_LINE(385)
										if ((_position->_construct)){
											HX_STACK_LINE(385)
											_position->x;
										}
										else{
											HX_STACK_LINE(385)
											if (((bool((_position->listen_x != null())) && bool(!(_position->ignore_listeners))))){
												HX_STACK_LINE(385)
												_position->listen_x(_x);
											}
											HX_STACK_LINE(385)
											_position->x;
										}
									}
									HX_STACK_LINE(385)
									{
										HX_STACK_LINE(385)
										Float _y = te->__get((int)13);		HX_STACK_VAR(_y,"_y");
										HX_STACK_LINE(385)
										_position->y = _y;
										HX_STACK_LINE(385)
										if ((_position->_construct)){
											HX_STACK_LINE(385)
											_position->y;
										}
										else{
											HX_STACK_LINE(385)
											if (((bool((_position->listen_y != null())) && bool(!(_position->ignore_listeners))))){
												HX_STACK_LINE(385)
												_position->listen_y(_y);
											}
											HX_STACK_LINE(385)
											_position->y;
										}
									}
									HX_STACK_LINE(385)
									{
										HX_STACK_LINE(385)
										Float _z = te->__get((int)14);		HX_STACK_VAR(_z,"_z");
										HX_STACK_LINE(385)
										_position->z = _z;
										HX_STACK_LINE(385)
										if ((_position->_construct)){
											HX_STACK_LINE(385)
											_position->z;
										}
										else{
											HX_STACK_LINE(385)
											if (((bool((_position->listen_z != null())) && bool(!(_position->ignore_listeners))))){
												HX_STACK_LINE(385)
												_position->listen_z(_z);
											}
											HX_STACK_LINE(385)
											_position->z;
										}
									}
								}
								HX_STACK_LINE(385)
								if (((_scale == null()))){
									HX_STACK_LINE(385)
									::phoenix::Vector _g11 = ::phoenix::Vector_obj::__new(_ax_length,_ay_length,_az_length,null());		HX_STACK_VAR(_g11,"_g11");
									HX_STACK_LINE(385)
									_scale = _g11;
								}
								else{
									HX_STACK_LINE(385)
									{
										HX_STACK_LINE(385)
										_scale->x = _ax_length;
										HX_STACK_LINE(385)
										if ((_scale->_construct)){
											HX_STACK_LINE(385)
											_scale->x;
										}
										else{
											HX_STACK_LINE(385)
											if (((bool((_scale->listen_x != null())) && bool(!(_scale->ignore_listeners))))){
												HX_STACK_LINE(385)
												_scale->listen_x(_ax_length);
											}
											HX_STACK_LINE(385)
											_scale->x;
										}
									}
									HX_STACK_LINE(385)
									{
										HX_STACK_LINE(385)
										_scale->y = _ay_length;
										HX_STACK_LINE(385)
										if ((_scale->_construct)){
											HX_STACK_LINE(385)
											_scale->y;
										}
										else{
											HX_STACK_LINE(385)
											if (((bool((_scale->listen_y != null())) && bool(!(_scale->ignore_listeners))))){
												HX_STACK_LINE(385)
												_scale->listen_y(_ay_length);
											}
											HX_STACK_LINE(385)
											_scale->y;
										}
									}
									HX_STACK_LINE(385)
									{
										HX_STACK_LINE(385)
										_scale->z = _az_length;
										HX_STACK_LINE(385)
										if ((_scale->_construct)){
											HX_STACK_LINE(385)
											_scale->z;
										}
										else{
											HX_STACK_LINE(385)
											if (((bool((_scale->listen_z != null())) && bool(!(_scale->ignore_listeners))))){
												HX_STACK_LINE(385)
												_scale->listen_z(_az_length);
											}
											HX_STACK_LINE(385)
											_scale->z;
										}
									}
								}
								HX_STACK_LINE(385)
								Array< Float > _g12 = _this2->elements->concat(Array_obj< Float >::__new());		HX_STACK_VAR(_g12,"_g12");
								HX_STACK_LINE(385)
								matrix->elements = _g12;
								HX_STACK_LINE(385)
								Array< Float > me = matrix->elements;		HX_STACK_VAR(me,"me");
								HX_STACK_LINE(385)
								hx::DivEq(me[(int)0],_ax_length);
								HX_STACK_LINE(385)
								hx::DivEq(me[(int)1],_ax_length);
								HX_STACK_LINE(385)
								hx::DivEq(me[(int)2],_ax_length);
								HX_STACK_LINE(385)
								hx::DivEq(me[(int)4],_ay_length);
								HX_STACK_LINE(385)
								hx::DivEq(me[(int)5],_ay_length);
								HX_STACK_LINE(385)
								hx::DivEq(me[(int)6],_ay_length);
								HX_STACK_LINE(385)
								hx::DivEq(me[(int)8],_az_length);
								HX_STACK_LINE(385)
								hx::DivEq(me[(int)9],_az_length);
								HX_STACK_LINE(385)
								hx::DivEq(me[(int)10],_az_length);
								HX_STACK_LINE(385)
								_quaternion->setFromRotationMatrix(matrix);
								HX_STACK_LINE(385)
								if (((_this2->_transform == null()))){
									HX_STACK_LINE(385)
									::phoenix::MatrixTransform _g13 = ::phoenix::MatrixTransform_obj::__new(_position,_quaternion,_scale);		HX_STACK_VAR(_g13,"_g13");
									HX_STACK_LINE(385)
									_this2->_transform = _g13;
								}
								else{
									HX_STACK_LINE(385)
									_this2->_transform->pos = _position;
									HX_STACK_LINE(385)
									_this2->_transform->rotation = _quaternion;
									HX_STACK_LINE(385)
									_this2->_transform->scale = _scale;
								}
								HX_STACK_LINE(385)
								_transform = _this2->_transform;
							}
							HX_STACK_LINE(385)
							{
								HX_STACK_LINE(385)
								::phoenix::Vector _p = _transform->pos;		HX_STACK_VAR(_p,"_p");
								HX_STACK_LINE(385)
								_this1->pos = _p;
								HX_STACK_LINE(385)
								if (((_p != null()))){
									HX_STACK_LINE(385)
									::phoenix::Vector_obj::Listen(_this1->pos,_this1->_pos_change_dyn());
									HX_STACK_LINE(385)
									if (((bool((_this1->pos_changed != null())) && bool(!(_this1->ignore_listeners))))){
										HX_STACK_LINE(385)
										_this1->pos_changed(_this1->pos);
									}
								}
								HX_STACK_LINE(385)
								_this1->pos;
							}
							HX_STACK_LINE(385)
							{
								HX_STACK_LINE(385)
								::phoenix::Quaternion _r = _transform->rotation;		HX_STACK_VAR(_r,"_r");
								HX_STACK_LINE(385)
								_this1->rotation = _r;
								HX_STACK_LINE(385)
								if (((_r != null()))){
									HX_STACK_LINE(385)
									{
										HX_STACK_LINE(385)
										::phoenix::Quaternion _q = _this1->rotation;		HX_STACK_VAR(_q,"_q");
										HX_STACK_LINE(385)
										Dynamic listener = _this1->_rotation_change_dyn();		HX_STACK_VAR(listener,"listener");
										HX_STACK_LINE(385)
										_q->listen_x = listener;
										HX_STACK_LINE(385)
										_q->listen_y = listener;
										HX_STACK_LINE(385)
										_q->listen_z = listener;
										HX_STACK_LINE(385)
										_q->listen_w = listener;
									}
									HX_STACK_LINE(385)
									if (((bool((_this1->rotation_changed != null())) && bool(!(_this1->ignore_listeners))))){
										HX_STACK_LINE(385)
										_this1->rotation_changed(_this1->rotation);
									}
								}
								HX_STACK_LINE(385)
								_this1->rotation;
							}
							HX_STACK_LINE(385)
							{
								HX_STACK_LINE(385)
								::phoenix::Vector _s = _transform->scale;		HX_STACK_VAR(_s,"_s");
								HX_STACK_LINE(385)
								_this1->scale = _s;
								HX_STACK_LINE(385)
								if (((_s != null()))){
									HX_STACK_LINE(385)
									::phoenix::Vector_obj::Listen(_this1->scale,_this1->_scale_change_dyn());
									HX_STACK_LINE(385)
									if (((bool((_this1->scale_changed != null())) && bool(!(_this1->ignore_listeners))))){
										HX_STACK_LINE(385)
										_this1->scale_changed(_this1->scale);
									}
								}
								HX_STACK_LINE(385)
								_this1->scale;
							}
						}
						HX_STACK_LINE(385)
						_this1;
					}
					HX_STACK_LINE(385)
					{
						HX_STACK_LINE(385)
						_this->dirty = false;
						HX_STACK_LINE(385)
						if (((bool((bool((bool(_this->dirty) && bool(!(_this->_setup)))) && bool((_this->_dirty_handlers != null())))) && bool((_this->_dirty_handlers->__Field(HX_CSTRING("length"),true) > (int)0))))){
							HX_STACK_LINE(385)
							int _g = (int)0;		HX_STACK_VAR(_g,"_g");
							HX_STACK_LINE(385)
							Dynamic _g1 = _this->_dirty_handlers;		HX_STACK_VAR(_g1,"_g1");
							HX_STACK_LINE(385)
							while((true)){
								HX_STACK_LINE(385)
								if ((!(((_g < _g1->__Field(HX_CSTRING("length"),true)))))){
									HX_STACK_LINE(385)
									break;
								}
								HX_STACK_LINE(385)
								Dynamic _handler = _g1->__GetItem(_g);		HX_STACK_VAR(_handler,"_handler");
								HX_STACK_LINE(385)
								++(_g);
								HX_STACK_LINE(385)
								if (((_handler != null()))){
									HX_STACK_LINE(385)
									_handler(_this).Cast< Void >();
								}
							}
						}
						HX_STACK_LINE(385)
						_this->dirty;
					}
					HX_STACK_LINE(385)
					_this->_cleaning = false;
					HX_STACK_LINE(385)
					if (((bool((_this->_clean_handlers != null())) && bool((_this->_clean_handlers->__Field(HX_CSTRING("length"),true) > (int)0))))){
						HX_STACK_LINE(385)
						int _g = (int)0;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(385)
						Dynamic _g1 = _this->_clean_handlers;		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(385)
						while((true)){
							HX_STACK_LINE(385)
							if ((!(((_g < _g1->__Field(HX_CSTRING("length"),true)))))){
								HX_STACK_LINE(385)
								break;
							}
							HX_STACK_LINE(385)
							Dynamic _handler = _g1->__GetItem(_g);		HX_STACK_VAR(_handler,"_handler");
							HX_STACK_LINE(385)
							++(_g);
							HX_STACK_LINE(385)
							if (((_handler != null()))){
								HX_STACK_LINE(385)
								_handler(_this).Cast< Void >();
							}
						}
					}
				}
			}
		}
		HX_STACK_LINE(388)
		this->update(dt);
		HX_STACK_LINE(390)
		if (((this->events != null()))){
			HX_STACK_LINE(392)
			this->events->process();
		}
		struct _Function_1_1{
			inline static Dynamic Block( hx::ObjectPtr< ::luxe::Entity_obj > __this){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/Entity.hx",396,0x55caa482)
				{
					HX_STACK_LINE(396)
					::IMap this1 = __this->get_components();		HX_STACK_VAR(this1,"this1");
					HX_STACK_LINE(396)
					return this1->iterator();
				}
				return null();
			}
		};
		HX_STACK_LINE(396)
		for(::cpp::FastIterator_obj< ::luxe::Component > *__it = ::cpp::CreateFastIterator< ::luxe::Component >(_Function_1_1::Block(this));  __it->hasNext(); ){
			::luxe::Component _component = __it->next();
			_component->update(dt);
		}
		HX_STACK_LINE(401)
		if (((this->children->length > (int)0))){
			HX_STACK_LINE(402)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(402)
			Array< ::Dynamic > _g1 = this->children;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(402)
			while((true)){
				HX_STACK_LINE(402)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(402)
					break;
				}
				HX_STACK_LINE(402)
				::luxe::Entity _child = _g1->__get(_g).StaticCast< ::luxe::Entity >();		HX_STACK_VAR(_child,"_child");
				HX_STACK_LINE(402)
				++(_g);
				HX_STACK_LINE(403)
				_child->_update(dt);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,_update,(void))

Void Entity_obj::_fixed_update( ){
{
		HX_STACK_FRAME("luxe.Entity","_fixed_update",0x8f91c8e0,"luxe.Entity._fixed_update","luxe/Entity.hx",411,0x55caa482)
		HX_STACK_THIS(this)
		HX_STACK_LINE(413)
		if ((this->destroyed)){
			HX_STACK_LINE(414)
			return null();
		}
		HX_STACK_LINE(417)
		if (((  ((!(((  ((!((!(this->get_active()))))) ? bool(!(this->inited)) : bool(true) ))))) ? bool(!(this->started)) : bool(true) ))){
			HX_STACK_LINE(418)
			return null();
		}
		HX_STACK_LINE(423)
		this->emit(HX_CSTRING("fixedupdate"),null(),hx::SourceInfo(HX_CSTRING("Entity.hx"),423,HX_CSTRING("luxe.Entity"),HX_CSTRING("_fixed_update")));
		HX_STACK_LINE(425)
		Float _g = this->get_fixed_rate();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(425)
		this->onfixedupdate(_g);
		struct _Function_1_1{
			inline static Dynamic Block( hx::ObjectPtr< ::luxe::Entity_obj > __this){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/Entity.hx",427,0x55caa482)
				{
					HX_STACK_LINE(427)
					::IMap this1 = __this->get_components();		HX_STACK_VAR(this1,"this1");
					HX_STACK_LINE(427)
					return this1->iterator();
				}
				return null();
			}
		};
		HX_STACK_LINE(427)
		for(::cpp::FastIterator_obj< ::luxe::Component > *__it = ::cpp::CreateFastIterator< ::luxe::Component >(_Function_1_1::Block(this));  __it->hasNext(); ){
			::luxe::Component _component = __it->next();
			{
				HX_STACK_LINE(428)
				Float _g1 = this->get_fixed_rate();		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(428)
				_component->onfixedupdate(_g1);
			}
;
		}
		HX_STACK_LINE(431)
		{
			HX_STACK_LINE(431)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(431)
			Array< ::Dynamic > _g11 = this->children;		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(431)
			while((true)){
				HX_STACK_LINE(431)
				if ((!(((_g1 < _g11->length))))){
					HX_STACK_LINE(431)
					break;
				}
				HX_STACK_LINE(431)
				::luxe::Entity _child = _g11->__get(_g1).StaticCast< ::luxe::Entity >();		HX_STACK_VAR(_child,"_child");
				HX_STACK_LINE(431)
				++(_g1);
				HX_STACK_LINE(432)
				_child->_fixed_update();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Entity_obj,_fixed_update,(void))

Void Entity_obj::_listen( ::String _event,Dynamic _handler,Dynamic __o__self){
Dynamic _self = __o__self.Default(false);
	HX_STACK_FRAME("luxe.Entity","_listen",0xd9717373,"luxe.Entity._listen","luxe/Entity.hx",439,0x55caa482)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_event,"_event")
	HX_STACK_ARG(_handler,"_handler")
	HX_STACK_ARG(_self,"_self")
{
		HX_STACK_LINE(448)
		if ((!(_self))){
			HX_STACK_LINE(449)
			this->on(_event,_handler,hx::SourceInfo(HX_CSTRING("Entity.hx"),449,HX_CSTRING("luxe.Entity"),HX_CSTRING("_listen")));
		}
		HX_STACK_LINE(452)
		::luxe::Scene _g = this->get_scene();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(452)
		if (((_g != null()))){
			HX_STACK_LINE(453)
			::String _switch_1 = (_event);
			if (  ( _switch_1==HX_CSTRING("keyup"))){
				HX_STACK_LINE(455)
				this->get_scene()->on(_event,this->_keyup_dyn(),hx::SourceInfo(HX_CSTRING("Entity.hx"),455,HX_CSTRING("luxe.Entity"),HX_CSTRING("_listen")));
			}
			else if (  ( _switch_1==HX_CSTRING("keydown"))){
				HX_STACK_LINE(456)
				this->get_scene()->on(_event,this->_keydown_dyn(),hx::SourceInfo(HX_CSTRING("Entity.hx"),456,HX_CSTRING("luxe.Entity"),HX_CSTRING("_listen")));
			}
			else if (  ( _switch_1==HX_CSTRING("textinput"))){
				HX_STACK_LINE(457)
				this->get_scene()->on(_event,this->_textinput_dyn(),hx::SourceInfo(HX_CSTRING("Entity.hx"),457,HX_CSTRING("luxe.Entity"),HX_CSTRING("_listen")));
			}
			else if (  ( _switch_1==HX_CSTRING("mousedown"))){
				HX_STACK_LINE(459)
				this->get_scene()->on(_event,this->_mousedown_dyn(),hx::SourceInfo(HX_CSTRING("Entity.hx"),459,HX_CSTRING("luxe.Entity"),HX_CSTRING("_listen")));
			}
			else if (  ( _switch_1==HX_CSTRING("mouseup"))){
				HX_STACK_LINE(460)
				this->get_scene()->on(_event,this->_mouseup_dyn(),hx::SourceInfo(HX_CSTRING("Entity.hx"),460,HX_CSTRING("luxe.Entity"),HX_CSTRING("_listen")));
			}
			else if (  ( _switch_1==HX_CSTRING("mousemove"))){
				HX_STACK_LINE(461)
				this->get_scene()->on(_event,this->_mousemove_dyn(),hx::SourceInfo(HX_CSTRING("Entity.hx"),461,HX_CSTRING("luxe.Entity"),HX_CSTRING("_listen")));
			}
			else if (  ( _switch_1==HX_CSTRING("mousewheel"))){
				HX_STACK_LINE(462)
				this->get_scene()->on(_event,this->_mousewheel_dyn(),hx::SourceInfo(HX_CSTRING("Entity.hx"),462,HX_CSTRING("luxe.Entity"),HX_CSTRING("_listen")));
			}
			else if (  ( _switch_1==HX_CSTRING("touchdown"))){
				HX_STACK_LINE(464)
				this->get_scene()->on(_event,this->_touchdown_dyn(),hx::SourceInfo(HX_CSTRING("Entity.hx"),464,HX_CSTRING("luxe.Entity"),HX_CSTRING("_listen")));
			}
			else if (  ( _switch_1==HX_CSTRING("touchup"))){
				HX_STACK_LINE(465)
				this->get_scene()->on(_event,this->_touchup_dyn(),hx::SourceInfo(HX_CSTRING("Entity.hx"),465,HX_CSTRING("luxe.Entity"),HX_CSTRING("_listen")));
			}
			else if (  ( _switch_1==HX_CSTRING("touchmove"))){
				HX_STACK_LINE(466)
				this->get_scene()->on(_event,this->_touchmove_dyn(),hx::SourceInfo(HX_CSTRING("Entity.hx"),466,HX_CSTRING("luxe.Entity"),HX_CSTRING("_listen")));
			}
			else if (  ( _switch_1==HX_CSTRING("inputup"))){
				HX_STACK_LINE(468)
				this->get_scene()->on(_event,this->_inputup_dyn(),hx::SourceInfo(HX_CSTRING("Entity.hx"),468,HX_CSTRING("luxe.Entity"),HX_CSTRING("_listen")));
			}
			else if (  ( _switch_1==HX_CSTRING("inputdown"))){
				HX_STACK_LINE(469)
				this->get_scene()->on(_event,this->_inputdown_dyn(),hx::SourceInfo(HX_CSTRING("Entity.hx"),469,HX_CSTRING("luxe.Entity"),HX_CSTRING("_listen")));
			}
			else if (  ( _switch_1==HX_CSTRING("gamepaddown"))){
				HX_STACK_LINE(471)
				this->get_scene()->on(_event,this->_gamepaddown_dyn(),hx::SourceInfo(HX_CSTRING("Entity.hx"),471,HX_CSTRING("luxe.Entity"),HX_CSTRING("_listen")));
			}
			else if (  ( _switch_1==HX_CSTRING("gamepadup"))){
				HX_STACK_LINE(472)
				this->get_scene()->on(_event,this->_gamepadup_dyn(),hx::SourceInfo(HX_CSTRING("Entity.hx"),472,HX_CSTRING("luxe.Entity"),HX_CSTRING("_listen")));
			}
			else if (  ( _switch_1==HX_CSTRING("gamepadaxis"))){
				HX_STACK_LINE(473)
				this->get_scene()->on(_event,this->_gamepadaxis_dyn(),hx::SourceInfo(HX_CSTRING("Entity.hx"),473,HX_CSTRING("luxe.Entity"),HX_CSTRING("_listen")));
			}
			else if (  ( _switch_1==HX_CSTRING("gamepaddevice"))){
				HX_STACK_LINE(474)
				this->get_scene()->on(_event,this->_gamepaddevice_dyn(),hx::SourceInfo(HX_CSTRING("Entity.hx"),474,HX_CSTRING("luxe.Entity"),HX_CSTRING("_listen")));
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Entity_obj,_listen,(void))

Void Entity_obj::_unlisten( ::String _event,Dynamic _handler,Dynamic __o__self){
Dynamic _self = __o__self.Default(false);
	HX_STACK_FRAME("luxe.Entity","_unlisten",0xe95ac58c,"luxe.Entity._unlisten","luxe/Entity.hx",483,0x55caa482)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_event,"_event")
	HX_STACK_ARG(_handler,"_handler")
	HX_STACK_ARG(_self,"_self")
{
		HX_STACK_LINE(483)
		if ((!(_self))){
			HX_STACK_LINE(484)
			this->off(_event,_handler,hx::SourceInfo(HX_CSTRING("Entity.hx"),484,HX_CSTRING("luxe.Entity"),HX_CSTRING("_unlisten")));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Entity_obj,_unlisten,(void))

Void Entity_obj::_detach_scene( ){
{
		HX_STACK_FRAME("luxe.Entity","_detach_scene",0xe66c124c,"luxe.Entity._detach_scene","luxe/Entity.hx",492,0x55caa482)
		HX_STACK_THIS(this)
		HX_STACK_LINE(494)
		::luxe::Scene _g = this->get_scene();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(494)
		if (((_g != null()))){
			HX_STACK_LINE(496)
			this->get_scene()->off(HX_CSTRING("reset"),this->_reset_dyn(),hx::SourceInfo(HX_CSTRING("Entity.hx"),496,HX_CSTRING("luxe.Entity"),HX_CSTRING("_detach_scene")));
			HX_STACK_LINE(497)
			this->get_scene()->off(HX_CSTRING("destroy"),this->destroy_dyn(),hx::SourceInfo(HX_CSTRING("Entity.hx"),497,HX_CSTRING("luxe.Entity"),HX_CSTRING("_detach_scene")));
			HX_STACK_LINE(500)
			this->get_scene()->off(HX_CSTRING("keyup"),this->_keyup_dyn(),hx::SourceInfo(HX_CSTRING("Entity.hx"),500,HX_CSTRING("luxe.Entity"),HX_CSTRING("_detach_scene")));
			HX_STACK_LINE(501)
			this->get_scene()->off(HX_CSTRING("keydown"),this->_keydown_dyn(),hx::SourceInfo(HX_CSTRING("Entity.hx"),501,HX_CSTRING("luxe.Entity"),HX_CSTRING("_detach_scene")));
			HX_STACK_LINE(502)
			this->get_scene()->off(HX_CSTRING("textinput"),this->_textinput_dyn(),hx::SourceInfo(HX_CSTRING("Entity.hx"),502,HX_CSTRING("luxe.Entity"),HX_CSTRING("_detach_scene")));
			HX_STACK_LINE(503)
			this->get_scene()->off(HX_CSTRING("mousedown"),this->_mousedown_dyn(),hx::SourceInfo(HX_CSTRING("Entity.hx"),503,HX_CSTRING("luxe.Entity"),HX_CSTRING("_detach_scene")));
			HX_STACK_LINE(504)
			this->get_scene()->off(HX_CSTRING("mouseup"),this->_mouseup_dyn(),hx::SourceInfo(HX_CSTRING("Entity.hx"),504,HX_CSTRING("luxe.Entity"),HX_CSTRING("_detach_scene")));
			HX_STACK_LINE(505)
			this->get_scene()->off(HX_CSTRING("mousemove"),this->_mousemove_dyn(),hx::SourceInfo(HX_CSTRING("Entity.hx"),505,HX_CSTRING("luxe.Entity"),HX_CSTRING("_detach_scene")));
			HX_STACK_LINE(506)
			this->get_scene()->off(HX_CSTRING("mousewheel"),this->_mousewheel_dyn(),hx::SourceInfo(HX_CSTRING("Entity.hx"),506,HX_CSTRING("luxe.Entity"),HX_CSTRING("_detach_scene")));
			HX_STACK_LINE(507)
			this->get_scene()->off(HX_CSTRING("touchdown"),this->_touchdown_dyn(),hx::SourceInfo(HX_CSTRING("Entity.hx"),507,HX_CSTRING("luxe.Entity"),HX_CSTRING("_detach_scene")));
			HX_STACK_LINE(508)
			this->get_scene()->off(HX_CSTRING("touchup"),this->_touchup_dyn(),hx::SourceInfo(HX_CSTRING("Entity.hx"),508,HX_CSTRING("luxe.Entity"),HX_CSTRING("_detach_scene")));
			HX_STACK_LINE(509)
			this->get_scene()->off(HX_CSTRING("touchmove"),this->_touchmove_dyn(),hx::SourceInfo(HX_CSTRING("Entity.hx"),509,HX_CSTRING("luxe.Entity"),HX_CSTRING("_detach_scene")));
			HX_STACK_LINE(510)
			this->get_scene()->off(HX_CSTRING("inputup"),this->_inputup_dyn(),hx::SourceInfo(HX_CSTRING("Entity.hx"),510,HX_CSTRING("luxe.Entity"),HX_CSTRING("_detach_scene")));
			HX_STACK_LINE(511)
			this->get_scene()->off(HX_CSTRING("inputdown"),this->_inputdown_dyn(),hx::SourceInfo(HX_CSTRING("Entity.hx"),511,HX_CSTRING("luxe.Entity"),HX_CSTRING("_detach_scene")));
			HX_STACK_LINE(512)
			this->get_scene()->off(HX_CSTRING("gamepaddown"),this->_gamepaddown_dyn(),hx::SourceInfo(HX_CSTRING("Entity.hx"),512,HX_CSTRING("luxe.Entity"),HX_CSTRING("_detach_scene")));
			HX_STACK_LINE(513)
			this->get_scene()->off(HX_CSTRING("gamepadup"),this->_gamepadup_dyn(),hx::SourceInfo(HX_CSTRING("Entity.hx"),513,HX_CSTRING("luxe.Entity"),HX_CSTRING("_detach_scene")));
			HX_STACK_LINE(514)
			this->get_scene()->off(HX_CSTRING("gamepadaxis"),this->_gamepadaxis_dyn(),hx::SourceInfo(HX_CSTRING("Entity.hx"),514,HX_CSTRING("luxe.Entity"),HX_CSTRING("_detach_scene")));
			HX_STACK_LINE(515)
			this->get_scene()->off(HX_CSTRING("gamepaddevice"),this->_gamepaddevice_dyn(),hx::SourceInfo(HX_CSTRING("Entity.hx"),515,HX_CSTRING("luxe.Entity"),HX_CSTRING("_detach_scene")));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Entity_obj,_detach_scene,(void))

Void Entity_obj::_attach_scene( ){
{
		HX_STACK_FRAME("luxe.Entity","_attach_scene",0xae36123e,"luxe.Entity._attach_scene","luxe/Entity.hx",521,0x55caa482)
		HX_STACK_THIS(this)
		HX_STACK_LINE(523)
		::luxe::Scene _g = this->get_scene();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(523)
		if (((_g != null()))){
			HX_STACK_LINE(524)
			this->get_scene()->on(HX_CSTRING("reset"),this->_reset_dyn(),hx::SourceInfo(HX_CSTRING("Entity.hx"),524,HX_CSTRING("luxe.Entity"),HX_CSTRING("_attach_scene")));
			HX_STACK_LINE(525)
			this->get_scene()->on(HX_CSTRING("destroy"),this->destroy_dyn(),hx::SourceInfo(HX_CSTRING("Entity.hx"),525,HX_CSTRING("luxe.Entity"),HX_CSTRING("_attach_scene")));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Entity_obj,_attach_scene,(void))

Void Entity_obj::_keyup( Dynamic _event){
{
		HX_STACK_FRAME("luxe.Entity","_keyup",0xff09b40e,"luxe.Entity._keyup","luxe/Entity.hx",532,0x55caa482)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_event,"_event")
		HX_STACK_LINE(534)
		if (((  ((!(((  ((!((!(this->get_active()))))) ? bool(!(this->inited)) : bool(true) ))))) ? bool(!(this->started)) : bool(true) ))){
			HX_STACK_LINE(535)
			return null();
		}
		HX_STACK_LINE(540)
		this->onkeyup(_event);
		HX_STACK_LINE(541)
		this->emit(HX_CSTRING("keyup"),_event,hx::SourceInfo(HX_CSTRING("Entity.hx"),541,HX_CSTRING("luxe.Entity"),HX_CSTRING("_keyup")));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,_keyup,(void))

Void Entity_obj::_keydown( Dynamic _event){
{
		HX_STACK_FRAME("luxe.Entity","_keydown",0x10ac58d5,"luxe.Entity._keydown","luxe/Entity.hx",545,0x55caa482)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_event,"_event")
		HX_STACK_LINE(547)
		if (((  ((!(((  ((!((!(this->get_active()))))) ? bool(!(this->inited)) : bool(true) ))))) ? bool(!(this->started)) : bool(true) ))){
			HX_STACK_LINE(548)
			return null();
		}
		HX_STACK_LINE(553)
		this->onkeydown(_event);
		HX_STACK_LINE(554)
		this->emit(HX_CSTRING("keydown"),_event,hx::SourceInfo(HX_CSTRING("Entity.hx"),554,HX_CSTRING("luxe.Entity"),HX_CSTRING("_keydown")));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,_keydown,(void))

Void Entity_obj::_textinput( Dynamic _event){
{
		HX_STACK_FRAME("luxe.Entity","_textinput",0x03587c91,"luxe.Entity._textinput","luxe/Entity.hx",558,0x55caa482)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_event,"_event")
		HX_STACK_LINE(560)
		if (((  ((!(((  ((!((!(this->get_active()))))) ? bool(!(this->inited)) : bool(true) ))))) ? bool(!(this->started)) : bool(true) ))){
			HX_STACK_LINE(561)
			return null();
		}
		HX_STACK_LINE(566)
		this->ontextinput(_event);
		HX_STACK_LINE(567)
		this->emit(HX_CSTRING("textinput"),_event,hx::SourceInfo(HX_CSTRING("Entity.hx"),567,HX_CSTRING("luxe.Entity"),HX_CSTRING("_textinput")));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,_textinput,(void))

Void Entity_obj::_mousedown( Dynamic _event){
{
		HX_STACK_FRAME("luxe.Entity","_mousedown",0x43641d5b,"luxe.Entity._mousedown","luxe/Entity.hx",574,0x55caa482)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_event,"_event")
		HX_STACK_LINE(576)
		if (((  ((!(((  ((!((!(this->get_active()))))) ? bool(!(this->inited)) : bool(true) ))))) ? bool(!(this->started)) : bool(true) ))){
			HX_STACK_LINE(577)
			return null();
		}
		HX_STACK_LINE(582)
		this->onmousedown(_event);
		HX_STACK_LINE(583)
		this->emit(HX_CSTRING("mousedown"),_event,hx::SourceInfo(HX_CSTRING("Entity.hx"),583,HX_CSTRING("luxe.Entity"),HX_CSTRING("_mousedown")));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,_mousedown,(void))

Void Entity_obj::_mouseup( Dynamic _event){
{
		HX_STACK_FRAME("luxe.Entity","_mouseup",0x1fb12b14,"luxe.Entity._mouseup","luxe/Entity.hx",588,0x55caa482)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_event,"_event")
		HX_STACK_LINE(590)
		if (((  ((!(((  ((!((!(this->get_active()))))) ? bool(!(this->inited)) : bool(true) ))))) ? bool(!(this->started)) : bool(true) ))){
			HX_STACK_LINE(591)
			return null();
		}
		HX_STACK_LINE(596)
		this->onmouseup(_event);
		HX_STACK_LINE(597)
		this->emit(HX_CSTRING("mouseup"),_event,hx::SourceInfo(HX_CSTRING("Entity.hx"),597,HX_CSTRING("luxe.Entity"),HX_CSTRING("_mouseup")));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,_mouseup,(void))

Void Entity_obj::_mousewheel( Dynamic _event){
{
		HX_STACK_FRAME("luxe.Entity","_mousewheel",0xa0246982,"luxe.Entity._mousewheel","luxe/Entity.hx",601,0x55caa482)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_event,"_event")
		HX_STACK_LINE(603)
		if (((  ((!(((  ((!((!(this->get_active()))))) ? bool(!(this->inited)) : bool(true) ))))) ? bool(!(this->started)) : bool(true) ))){
			HX_STACK_LINE(604)
			return null();
		}
		HX_STACK_LINE(609)
		this->onmousewheel(_event);
		HX_STACK_LINE(610)
		this->emit(HX_CSTRING("mousewheel"),_event,hx::SourceInfo(HX_CSTRING("Entity.hx"),610,HX_CSTRING("luxe.Entity"),HX_CSTRING("_mousewheel")));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,_mousewheel,(void))

Void Entity_obj::_mousemove( Dynamic _event){
{
		HX_STACK_FRAME("luxe.Entity","_mousemove",0x4957080a,"luxe.Entity._mousemove","luxe/Entity.hx",614,0x55caa482)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_event,"_event")
		HX_STACK_LINE(616)
		if (((  ((!(((  ((!((!(this->get_active()))))) ? bool(!(this->inited)) : bool(true) ))))) ? bool(!(this->started)) : bool(true) ))){
			HX_STACK_LINE(617)
			return null();
		}
		HX_STACK_LINE(622)
		this->onmousemove(_event);
		HX_STACK_LINE(623)
		this->emit(HX_CSTRING("mousemove"),_event,hx::SourceInfo(HX_CSTRING("Entity.hx"),623,HX_CSTRING("luxe.Entity"),HX_CSTRING("_mousemove")));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,_mousemove,(void))

Void Entity_obj::_touchdown( Dynamic _event){
{
		HX_STACK_FRAME("luxe.Entity","_touchdown",0x5c7bf3f5,"luxe.Entity._touchdown","luxe/Entity.hx",628,0x55caa482)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_event,"_event")
		HX_STACK_LINE(630)
		if (((  ((!(((  ((!((!(this->get_active()))))) ? bool(!(this->inited)) : bool(true) ))))) ? bool(!(this->started)) : bool(true) ))){
			HX_STACK_LINE(631)
			return null();
		}
		HX_STACK_LINE(636)
		this->ontouchdown(_event);
		HX_STACK_LINE(637)
		this->emit(HX_CSTRING("touchdown"),_event,hx::SourceInfo(HX_CSTRING("Entity.hx"),637,HX_CSTRING("luxe.Entity"),HX_CSTRING("_touchdown")));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,_touchdown,(void))

Void Entity_obj::_touchup( Dynamic _event){
{
		HX_STACK_FRAME("luxe.Entity","_touchup",0x3836472e,"luxe.Entity._touchup","luxe/Entity.hx",641,0x55caa482)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_event,"_event")
		HX_STACK_LINE(643)
		if (((  ((!(((  ((!((!(this->get_active()))))) ? bool(!(this->inited)) : bool(true) ))))) ? bool(!(this->started)) : bool(true) ))){
			HX_STACK_LINE(644)
			return null();
		}
		HX_STACK_LINE(649)
		this->ontouchup(_event);
		HX_STACK_LINE(650)
		this->emit(HX_CSTRING("touchup"),_event,hx::SourceInfo(HX_CSTRING("Entity.hx"),650,HX_CSTRING("luxe.Entity"),HX_CSTRING("_touchup")));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,_touchup,(void))

Void Entity_obj::_touchmove( Dynamic _event){
{
		HX_STACK_FRAME("luxe.Entity","_touchmove",0x626edea4,"luxe.Entity._touchmove","luxe/Entity.hx",654,0x55caa482)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_event,"_event")
		HX_STACK_LINE(656)
		if (((  ((!(((  ((!((!(this->get_active()))))) ? bool(!(this->inited)) : bool(true) ))))) ? bool(!(this->started)) : bool(true) ))){
			HX_STACK_LINE(657)
			return null();
		}
		HX_STACK_LINE(662)
		this->ontouchmove(_event);
		HX_STACK_LINE(663)
		this->emit(HX_CSTRING("touchmove"),_event,hx::SourceInfo(HX_CSTRING("Entity.hx"),663,HX_CSTRING("luxe.Entity"),HX_CSTRING("_touchmove")));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,_touchmove,(void))

Void Entity_obj::_gamepadaxis( Dynamic _event){
{
		HX_STACK_FRAME("luxe.Entity","_gamepadaxis",0xeb82b716,"luxe.Entity._gamepadaxis","luxe/Entity.hx",668,0x55caa482)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_event,"_event")
		HX_STACK_LINE(670)
		if (((  ((!(((  ((!((!(this->get_active()))))) ? bool(!(this->inited)) : bool(true) ))))) ? bool(!(this->started)) : bool(true) ))){
			HX_STACK_LINE(671)
			return null();
		}
		HX_STACK_LINE(676)
		this->ongamepadaxis(_event);
		HX_STACK_LINE(677)
		this->emit(HX_CSTRING("gamepadaxis"),_event,hx::SourceInfo(HX_CSTRING("Entity.hx"),677,HX_CSTRING("luxe.Entity"),HX_CSTRING("_gamepadaxis")));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,_gamepadaxis,(void))

Void Entity_obj::_gamepaddown( Dynamic _event){
{
		HX_STACK_FRAME("luxe.Entity","_gamepaddown",0xed7792d7,"luxe.Entity._gamepaddown","luxe/Entity.hx",681,0x55caa482)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_event,"_event")
		HX_STACK_LINE(683)
		if (((  ((!(((  ((!((!(this->get_active()))))) ? bool(!(this->inited)) : bool(true) ))))) ? bool(!(this->started)) : bool(true) ))){
			HX_STACK_LINE(684)
			return null();
		}
		HX_STACK_LINE(689)
		this->ongamepaddown(_event);
		HX_STACK_LINE(690)
		this->emit(HX_CSTRING("gamepaddown"),_event,hx::SourceInfo(HX_CSTRING("Entity.hx"),690,HX_CSTRING("luxe.Entity"),HX_CSTRING("_gamepaddown")));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,_gamepaddown,(void))

Void Entity_obj::_gamepadup( Dynamic _event){
{
		HX_STACK_FRAME("luxe.Entity","_gamepadup",0x9eb30990,"luxe.Entity._gamepadup","luxe/Entity.hx",694,0x55caa482)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_event,"_event")
		HX_STACK_LINE(696)
		if (((  ((!(((  ((!((!(this->get_active()))))) ? bool(!(this->inited)) : bool(true) ))))) ? bool(!(this->started)) : bool(true) ))){
			HX_STACK_LINE(697)
			return null();
		}
		HX_STACK_LINE(702)
		this->ongamepadup(_event);
		HX_STACK_LINE(703)
		this->emit(HX_CSTRING("gamepadup"),_event,hx::SourceInfo(HX_CSTRING("Entity.hx"),703,HX_CSTRING("luxe.Entity"),HX_CSTRING("_gamepadup")));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,_gamepadup,(void))

Void Entity_obj::_gamepaddevice( Dynamic _event){
{
		HX_STACK_FRAME("luxe.Entity","_gamepaddevice",0x25f4be4b,"luxe.Entity._gamepaddevice","luxe/Entity.hx",707,0x55caa482)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_event,"_event")
		HX_STACK_LINE(709)
		if (((  ((!(((  ((!((!(this->get_active()))))) ? bool(!(this->inited)) : bool(true) ))))) ? bool(!(this->started)) : bool(true) ))){
			HX_STACK_LINE(710)
			return null();
		}
		HX_STACK_LINE(715)
		this->ongamepaddevice(_event);
		HX_STACK_LINE(716)
		this->emit(HX_CSTRING("gamepaddevice"),_event,hx::SourceInfo(HX_CSTRING("Entity.hx"),716,HX_CSTRING("luxe.Entity"),HX_CSTRING("_gamepaddevice")));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,_gamepaddevice,(void))

Void Entity_obj::_inputdown( Dynamic _event){
{
		HX_STACK_FRAME("luxe.Entity","_inputdown",0x5e3a21c0,"luxe.Entity._inputdown","luxe/Entity.hx",722,0x55caa482)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_event,"_event")
		HX_STACK_LINE(724)
		if (((  ((!(((  ((!((!(this->get_active()))))) ? bool(!(this->inited)) : bool(true) ))))) ? bool(!(this->started)) : bool(true) ))){
			HX_STACK_LINE(725)
			return null();
		}
		HX_STACK_LINE(730)
		this->oninputdown(_event->__Field(HX_CSTRING("name"),true),_event->__Field(HX_CSTRING("event"),true));
		HX_STACK_LINE(731)
		this->emit(HX_CSTRING("inputdown"),_event,hx::SourceInfo(HX_CSTRING("Entity.hx"),731,HX_CSTRING("luxe.Entity"),HX_CSTRING("_inputdown")));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,_inputdown,(void))

Void Entity_obj::_inputup( Dynamic _event){
{
		HX_STACK_FRAME("luxe.Entity","_inputup",0x335cdc39,"luxe.Entity._inputup","luxe/Entity.hx",735,0x55caa482)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_event,"_event")
		HX_STACK_LINE(737)
		if (((  ((!(((  ((!((!(this->get_active()))))) ? bool(!(this->inited)) : bool(true) ))))) ? bool(!(this->started)) : bool(true) ))){
			HX_STACK_LINE(738)
			return null();
		}
		HX_STACK_LINE(743)
		this->oninputup(_event->__Field(HX_CSTRING("name"),true),_event->__Field(HX_CSTRING("event"),true));
		HX_STACK_LINE(744)
		this->emit(HX_CSTRING("inputup"),_event,hx::SourceInfo(HX_CSTRING("Entity.hx"),744,HX_CSTRING("luxe.Entity"),HX_CSTRING("_inputup")));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,_inputup,(void))

Float Entity_obj::get_fixed_rate( ){
	HX_STACK_FRAME("luxe.Entity","get_fixed_rate",0x56a59b27,"luxe.Entity.get_fixed_rate","luxe/Entity.hx",753,0x55caa482)
	HX_STACK_THIS(this)
	HX_STACK_LINE(753)
	return this->fixed_rate;
}


HX_DEFINE_DYNAMIC_FUNC0(Entity_obj,get_fixed_rate,return )

Float Entity_obj::set_fixed_rate( Float _rate){
	HX_STACK_FRAME("luxe.Entity","set_fixed_rate",0x76c5839b,"luxe.Entity.set_fixed_rate","luxe/Entity.hx",757,0x55caa482)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_rate,"_rate")
	HX_STACK_LINE(759)
	this->fixed_rate = _rate;
	HX_STACK_LINE(761)
	if ((this->started)){
		HX_STACK_LINE(762)
		this->_set_fixed_rate_timer(_rate,hx::SourceInfo(HX_CSTRING("Entity.hx"),762,HX_CSTRING("luxe.Entity"),HX_CSTRING("set_fixed_rate")));
	}
	HX_STACK_LINE(765)
	return this->get_fixed_rate();
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,set_fixed_rate,return )

Void Entity_obj::_stop_fixed_rate_timer( ){
{
		HX_STACK_FRAME("luxe.Entity","_stop_fixed_rate_timer",0xf4198482,"luxe.Entity._stop_fixed_rate_timer","luxe/Entity.hx",771,0x55caa482)
		HX_STACK_THIS(this)
		HX_STACK_LINE(771)
		if (((this->fixed_rate_timer != null()))){
			HX_STACK_LINE(772)
			this->fixed_rate_timer->stop();
			HX_STACK_LINE(773)
			this->fixed_rate_timer = null();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Entity_obj,_stop_fixed_rate_timer,(void))

Void Entity_obj::_set_fixed_rate_timer( Float _rate,Dynamic _pos){
{
		HX_STACK_FRAME("luxe.Entity","_set_fixed_rate_timer",0x33475eba,"luxe.Entity._set_fixed_rate_timer","luxe/Entity.hx",778,0x55caa482)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_rate,"_rate")
		HX_STACK_ARG(_pos,"_pos")
		HX_STACK_LINE(780)
		this->_stop_fixed_rate_timer();
		struct _Function_1_1{
			inline static bool Block( hx::ObjectPtr< ::luxe::Entity_obj > __this){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/Entity.hx",785,0x55caa482)
				{
					HX_STACK_LINE(785)
					::luxe::Entity _g = __this->get_parent();		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(785)
					return (_g == null());
				}
				return null();
			}
		};
		HX_STACK_LINE(785)
		if (((  (((  (((_rate != (int)0))) ? bool(_Function_1_1::Block(this)) : bool(false) ))) ? bool(!(this->destroyed)) : bool(false) ))){
			HX_STACK_LINE(786)
			::snow::utils::Timer _g1 = ::snow::utils::Timer_obj::__new(_rate);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(786)
			this->fixed_rate_timer = _g1;
			HX_STACK_LINE(787)
			this->fixed_rate_timer->run = this->_fixed_update_dyn();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Entity_obj,_set_fixed_rate_timer,(void))

::haxe::ds::StringMap Entity_obj::get_components( ){
	HX_STACK_FRAME("luxe.Entity","get_components",0x5c119f72,"luxe.Entity.get_components","luxe/Entity.hx",795,0x55caa482)
	HX_STACK_THIS(this)
	HX_STACK_LINE(795)
	return this->_components->components;
}


HX_DEFINE_DYNAMIC_FUNC0(Entity_obj,get_components,return )

Void Entity_obj::_add_child( ::luxe::Entity child){
{
		HX_STACK_FRAME("luxe.Entity","_add_child",0x04ab4a12,"luxe.Entity._add_child","luxe/Entity.hx",800,0x55caa482)
		HX_STACK_THIS(this)
		HX_STACK_ARG(child,"child")
		HX_STACK_LINE(802)
		this->children->push(child);
		HX_STACK_LINE(807)
		::luxe::Scene _g = child->get_scene();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(807)
		if (((_g != null()))){
			HX_STACK_LINE(809)
			bool removed = child->get_scene()->remove(child);		HX_STACK_VAR(removed,"removed");
		}
		else{
			HX_STACK_LINE(138)
			Dynamic();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,_add_child,(void))

Void Entity_obj::_remove_child( ::luxe::Entity child){
{
		HX_STACK_FRAME("luxe.Entity","_remove_child",0x54f46c4d,"luxe.Entity._remove_child","luxe/Entity.hx",819,0x55caa482)
		HX_STACK_THIS(this)
		HX_STACK_ARG(child,"child")
		HX_STACK_LINE(819)
		this->children->remove(child);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,_remove_child,(void))

Void Entity_obj::set_pos_from_transform( ::phoenix::Vector _pos){
{
		HX_STACK_FRAME("luxe.Entity","set_pos_from_transform",0x2a7e6b72,"luxe.Entity.set_pos_from_transform","luxe/Entity.hx",828,0x55caa482)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_pos,"_pos")
		struct _Function_1_1{
			inline static Dynamic Block( hx::ObjectPtr< ::luxe::Entity_obj > __this){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/Entity.hx",828,0x55caa482)
				{
					HX_STACK_LINE(828)
					::IMap this1 = __this->get_components();		HX_STACK_VAR(this1,"this1");
					HX_STACK_LINE(828)
					return this1->iterator();
				}
				return null();
			}
		};
		HX_STACK_LINE(828)
		for(::cpp::FastIterator_obj< ::luxe::Component > *__it = ::cpp::CreateFastIterator< ::luxe::Component >(_Function_1_1::Block(this));  __it->hasNext(); ){
			::luxe::Component _component = __it->next();
			_component->entity_pos_change(_pos);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,set_pos_from_transform,(void))

Void Entity_obj::set_rotation_from_transform( ::phoenix::Quaternion _rotation){
{
		HX_STACK_FRAME("luxe.Entity","set_rotation_from_transform",0xf7a74368,"luxe.Entity.set_rotation_from_transform","luxe/Entity.hx",837,0x55caa482)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_rotation,"_rotation")
		struct _Function_1_1{
			inline static Dynamic Block( hx::ObjectPtr< ::luxe::Entity_obj > __this){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/Entity.hx",837,0x55caa482)
				{
					HX_STACK_LINE(837)
					::IMap this1 = __this->get_components();		HX_STACK_VAR(this1,"this1");
					HX_STACK_LINE(837)
					return this1->iterator();
				}
				return null();
			}
		};
		HX_STACK_LINE(837)
		for(::cpp::FastIterator_obj< ::luxe::Component > *__it = ::cpp::CreateFastIterator< ::luxe::Component >(_Function_1_1::Block(this));  __it->hasNext(); ){
			::luxe::Component _component = __it->next();
			_component->entity_rotation_change(_rotation);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,set_rotation_from_transform,(void))

Void Entity_obj::set_scale_from_transform( ::phoenix::Vector _scale){
{
		HX_STACK_FRAME("luxe.Entity","set_scale_from_transform",0x0154d33c,"luxe.Entity.set_scale_from_transform","luxe/Entity.hx",846,0x55caa482)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_scale,"_scale")
		struct _Function_1_1{
			inline static Dynamic Block( hx::ObjectPtr< ::luxe::Entity_obj > __this){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/Entity.hx",846,0x55caa482)
				{
					HX_STACK_LINE(846)
					::IMap this1 = __this->get_components();		HX_STACK_VAR(this1,"this1");
					HX_STACK_LINE(846)
					return this1->iterator();
				}
				return null();
			}
		};
		HX_STACK_LINE(846)
		for(::cpp::FastIterator_obj< ::luxe::Component > *__it = ::cpp::CreateFastIterator< ::luxe::Component >(_Function_1_1::Block(this));  __it->hasNext(); ){
			::luxe::Component _component = __it->next();
			_component->entity_scale_change(_scale);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,set_scale_from_transform,(void))

Void Entity_obj::set_origin_from_transform( ::phoenix::Vector _origin){
{
		HX_STACK_FRAME("luxe.Entity","set_origin_from_transform",0x1a1cb7c0,"luxe.Entity.set_origin_from_transform","luxe/Entity.hx",855,0x55caa482)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_origin,"_origin")
		struct _Function_1_1{
			inline static Dynamic Block( hx::ObjectPtr< ::luxe::Entity_obj > __this){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/Entity.hx",855,0x55caa482)
				{
					HX_STACK_LINE(855)
					::IMap this1 = __this->get_components();		HX_STACK_VAR(this1,"this1");
					HX_STACK_LINE(855)
					return this1->iterator();
				}
				return null();
			}
		};
		HX_STACK_LINE(855)
		for(::cpp::FastIterator_obj< ::luxe::Component > *__it = ::cpp::CreateFastIterator< ::luxe::Component >(_Function_1_1::Block(this));  __it->hasNext(); ){
			::luxe::Component _component = __it->next();
			_component->entity_origin_change(_origin);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,set_origin_from_transform,(void))

Void Entity_obj::set_parent_from_transform( ::phoenix::Transform _parent){
{
		HX_STACK_FRAME("luxe.Entity","set_parent_from_transform",0xc1ab18fc,"luxe.Entity.set_parent_from_transform","luxe/Entity.hx",864,0x55caa482)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_parent,"_parent")
		struct _Function_1_1{
			inline static Dynamic Block( hx::ObjectPtr< ::luxe::Entity_obj > __this){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/Entity.hx",864,0x55caa482)
				{
					HX_STACK_LINE(864)
					::IMap this1 = __this->get_components();		HX_STACK_VAR(this1,"this1");
					HX_STACK_LINE(864)
					return this1->iterator();
				}
				return null();
			}
		};
		HX_STACK_LINE(864)
		for(::cpp::FastIterator_obj< ::luxe::Component > *__it = ::cpp::CreateFastIterator< ::luxe::Component >(_Function_1_1::Block(this));  __it->hasNext(); ){
			::luxe::Component _component = __it->next();
			_component->entity_parent_change(_parent);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,set_parent_from_transform,(void))

::phoenix::Vector Entity_obj::set_pos( ::phoenix::Vector _p){
	HX_STACK_FRAME("luxe.Entity","set_pos",0x94cc50c4,"luxe.Entity.set_pos","luxe/Entity.hx",874,0x55caa482)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_p,"_p")
	HX_STACK_LINE(874)
	::phoenix::Spatial _this = this->transform->local;		HX_STACK_VAR(_this,"_this");
	HX_STACK_LINE(874)
	_this->pos = _p;
	HX_STACK_LINE(874)
	if (((_p != null()))){
		HX_STACK_LINE(874)
		::phoenix::Vector_obj::Listen(_this->pos,_this->_pos_change_dyn());
		HX_STACK_LINE(874)
		if (((bool((_this->pos_changed != null())) && bool(!(_this->ignore_listeners))))){
			HX_STACK_LINE(874)
			_this->pos_changed(_this->pos);
		}
	}
	HX_STACK_LINE(874)
	return _this->pos;
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,set_pos,return )

::phoenix::Vector Entity_obj::get_pos( ){
	HX_STACK_FRAME("luxe.Entity","get_pos",0xa1cabfb8,"luxe.Entity.get_pos","luxe/Entity.hx",880,0x55caa482)
	HX_STACK_THIS(this)
	HX_STACK_LINE(880)
	return this->transform->local->pos;
}


HX_DEFINE_DYNAMIC_FUNC0(Entity_obj,get_pos,return )

::phoenix::Quaternion Entity_obj::set_rotation( ::phoenix::Quaternion _r){
	HX_STACK_FRAME("luxe.Entity","set_rotation",0x721fbc0e,"luxe.Entity.set_rotation","luxe/Entity.hx",888,0x55caa482)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_r,"_r")
	HX_STACK_LINE(888)
	::phoenix::Spatial _this = this->transform->local;		HX_STACK_VAR(_this,"_this");
	HX_STACK_LINE(888)
	_this->rotation = _r;
	HX_STACK_LINE(888)
	if (((_r != null()))){
		HX_STACK_LINE(888)
		{
			HX_STACK_LINE(888)
			::phoenix::Quaternion _q = _this->rotation;		HX_STACK_VAR(_q,"_q");
			HX_STACK_LINE(888)
			Dynamic listener = _this->_rotation_change_dyn();		HX_STACK_VAR(listener,"listener");
			HX_STACK_LINE(888)
			_q->listen_x = listener;
			HX_STACK_LINE(888)
			_q->listen_y = listener;
			HX_STACK_LINE(888)
			_q->listen_z = listener;
			HX_STACK_LINE(888)
			_q->listen_w = listener;
		}
		HX_STACK_LINE(888)
		if (((bool((_this->rotation_changed != null())) && bool(!(_this->ignore_listeners))))){
			HX_STACK_LINE(888)
			_this->rotation_changed(_this->rotation);
		}
	}
	HX_STACK_LINE(888)
	return _this->rotation;
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,set_rotation,return )

::phoenix::Quaternion Entity_obj::get_rotation( ){
	HX_STACK_FRAME("luxe.Entity","get_rotation",0x5d26989a,"luxe.Entity.get_rotation","luxe/Entity.hx",894,0x55caa482)
	HX_STACK_THIS(this)
	HX_STACK_LINE(894)
	return this->transform->local->rotation;
}


HX_DEFINE_DYNAMIC_FUNC0(Entity_obj,get_rotation,return )

::phoenix::Vector Entity_obj::set_scale( ::phoenix::Vector _s){
	HX_STACK_FRAME("luxe.Entity","set_scale",0x4f4cedba,"luxe.Entity.set_scale","luxe/Entity.hx",902,0x55caa482)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_s,"_s")
	HX_STACK_LINE(902)
	::phoenix::Spatial _this = this->transform->local;		HX_STACK_VAR(_this,"_this");
	HX_STACK_LINE(902)
	_this->scale = _s;
	HX_STACK_LINE(902)
	if (((_s != null()))){
		HX_STACK_LINE(902)
		::phoenix::Vector_obj::Listen(_this->scale,_this->_scale_change_dyn());
		HX_STACK_LINE(902)
		if (((bool((_this->scale_changed != null())) && bool(!(_this->ignore_listeners))))){
			HX_STACK_LINE(902)
			_this->scale_changed(_this->scale);
		}
	}
	HX_STACK_LINE(902)
	return _this->scale;
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,set_scale,return )

::phoenix::Vector Entity_obj::get_scale( ){
	HX_STACK_FRAME("luxe.Entity","get_scale",0x6bfc01ae,"luxe.Entity.get_scale","luxe/Entity.hx",908,0x55caa482)
	HX_STACK_THIS(this)
	HX_STACK_LINE(908)
	return this->transform->local->scale;
}


HX_DEFINE_DYNAMIC_FUNC0(Entity_obj,get_scale,return )

::phoenix::Vector Entity_obj::set_origin( ::phoenix::Vector _origin){
	HX_STACK_FRAME("luxe.Entity","set_origin",0x22de44b6,"luxe.Entity.set_origin","luxe/Entity.hx",916,0x55caa482)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_origin,"_origin")
	HX_STACK_LINE(916)
	::phoenix::Transform _this = this->transform;		HX_STACK_VAR(_this,"_this");
	HX_STACK_LINE(916)
	{
		HX_STACK_LINE(916)
		_this->dirty = true;
		HX_STACK_LINE(916)
		if (((bool((bool((bool(_this->dirty) && bool(!(_this->_setup)))) && bool((_this->_dirty_handlers != null())))) && bool((_this->_dirty_handlers->__Field(HX_CSTRING("length"),true) > (int)0))))){
			HX_STACK_LINE(916)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(916)
			Dynamic _g1 = _this->_dirty_handlers;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(916)
			while((true)){
				HX_STACK_LINE(916)
				if ((!(((_g < _g1->__Field(HX_CSTRING("length"),true)))))){
					HX_STACK_LINE(916)
					break;
				}
				HX_STACK_LINE(916)
				Dynamic _handler = _g1->__GetItem(_g);		HX_STACK_VAR(_handler,"_handler");
				HX_STACK_LINE(916)
				++(_g);
				HX_STACK_LINE(916)
				if (((_handler != null()))){
					HX_STACK_LINE(916)
					_handler(_this).Cast< Void >();
				}
			}
		}
		HX_STACK_LINE(916)
		_this->dirty;
	}
	HX_STACK_LINE(916)
	_this->origin = _origin;
	HX_STACK_LINE(916)
	if (((bool((_this->_origin_handlers != null())) && bool((_this->_origin_handlers->__Field(HX_CSTRING("length"),true) > (int)0))))){
		HX_STACK_LINE(916)
		::phoenix::Vector _origin1 = _this->origin;		HX_STACK_VAR(_origin1,"_origin1");
		HX_STACK_LINE(916)
		{
			HX_STACK_LINE(916)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(916)
			Dynamic _g1 = _this->_origin_handlers;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(916)
			while((true)){
				HX_STACK_LINE(916)
				if ((!(((_g < _g1->__Field(HX_CSTRING("length"),true)))))){
					HX_STACK_LINE(916)
					break;
				}
				HX_STACK_LINE(916)
				Dynamic _handler = _g1->__GetItem(_g);		HX_STACK_VAR(_handler,"_handler");
				HX_STACK_LINE(916)
				++(_g);
				HX_STACK_LINE(916)
				if (((_handler != null()))){
					HX_STACK_LINE(916)
					_handler(_origin1).Cast< Void >();
				}
			}
		}
	}
	HX_STACK_LINE(916)
	return _this->origin;
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,set_origin,return )

::phoenix::Vector Entity_obj::get_origin( ){
	HX_STACK_FRAME("luxe.Entity","get_origin",0x1f60a642,"luxe.Entity.get_origin","luxe/Entity.hx",923,0x55caa482)
	HX_STACK_THIS(this)
	HX_STACK_LINE(923)
	return this->transform->origin;
}


HX_DEFINE_DYNAMIC_FUNC0(Entity_obj,get_origin,return )

::luxe::Entity Entity_obj::set_parent( ::luxe::Entity other){
	HX_STACK_FRAME("luxe.Entity","set_parent",0xc55b2ffa,"luxe.Entity.set_parent","luxe/Entity.hx",929,0x55caa482)
	HX_STACK_THIS(this)
	HX_STACK_ARG(other,"other")
	HX_STACK_LINE(935)
	::luxe::Entity _g = this->get_parent();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(935)
	if (((_g != null()))){
		HX_STACK_LINE(936)
		this->get_parent()->_remove_child(hx::ObjectPtr<OBJ_>(this));
	}
	HX_STACK_LINE(940)
	this->parent = other;
	HX_STACK_LINE(944)
	::luxe::Entity _g1 = this->get_parent();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(944)
	if (((_g1 != null()))){
		HX_STACK_LINE(945)
		this->get_parent()->_add_child(hx::ObjectPtr<OBJ_>(this));
		HX_STACK_LINE(946)
		{
			HX_STACK_LINE(946)
			::phoenix::Transform _this = this->transform;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(946)
			{
				HX_STACK_LINE(946)
				_this->dirty = true;
				HX_STACK_LINE(946)
				if (((bool((bool((bool(_this->dirty) && bool(!(_this->_setup)))) && bool((_this->_dirty_handlers != null())))) && bool((_this->_dirty_handlers->__Field(HX_CSTRING("length"),true) > (int)0))))){
					HX_STACK_LINE(946)
					int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(946)
					Dynamic _g11 = _this->_dirty_handlers;		HX_STACK_VAR(_g11,"_g11");
					HX_STACK_LINE(946)
					while((true)){
						HX_STACK_LINE(946)
						if ((!(((_g2 < _g11->__Field(HX_CSTRING("length"),true)))))){
							HX_STACK_LINE(946)
							break;
						}
						HX_STACK_LINE(946)
						Dynamic _handler = _g11->__GetItem(_g2);		HX_STACK_VAR(_handler,"_handler");
						HX_STACK_LINE(946)
						++(_g2);
						HX_STACK_LINE(946)
						if (((_handler != null()))){
							HX_STACK_LINE(946)
							_handler(_this).Cast< Void >();
						}
					}
				}
				HX_STACK_LINE(946)
				_this->dirty;
			}
			HX_STACK_LINE(946)
			if (((_this->parent != null()))){
				HX_STACK_LINE(946)
				::phoenix::Transform _this1 = _this->parent;		HX_STACK_VAR(_this1,"_this1");
				HX_STACK_LINE(946)
				if (((_this1->_clean_handlers == null()))){
					HX_STACK_LINE(946)
					false;
				}
				else{
					HX_STACK_LINE(946)
					_this1->_clean_handlers->__Field(HX_CSTRING("remove"),true)(_this->on_parent_cleaned_dyn());
				}
			}
			HX_STACK_LINE(946)
			_this->parent = this->get_parent()->transform;
			HX_STACK_LINE(946)
			if (((bool((_this->_parent_handlers != null())) && bool((_this->_parent_handlers->__Field(HX_CSTRING("length"),true) > (int)0))))){
				HX_STACK_LINE(946)
				::phoenix::Transform _parent = _this->parent;		HX_STACK_VAR(_parent,"_parent");
				HX_STACK_LINE(946)
				{
					HX_STACK_LINE(946)
					int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(946)
					Dynamic _g11 = _this->_parent_handlers;		HX_STACK_VAR(_g11,"_g11");
					HX_STACK_LINE(946)
					while((true)){
						HX_STACK_LINE(946)
						if ((!(((_g2 < _g11->__Field(HX_CSTRING("length"),true)))))){
							HX_STACK_LINE(946)
							break;
						}
						HX_STACK_LINE(946)
						Dynamic _handler = _g11->__GetItem(_g2);		HX_STACK_VAR(_handler,"_handler");
						HX_STACK_LINE(946)
						++(_g2);
						HX_STACK_LINE(946)
						if (((_handler != null()))){
							HX_STACK_LINE(946)
							_handler(_parent).Cast< Void >();
						}
					}
				}
			}
			HX_STACK_LINE(946)
			if (((_this->parent != null()))){
				HX_STACK_LINE(946)
				::phoenix::Transform _this1 = _this->parent;		HX_STACK_VAR(_this1,"_this1");
				HX_STACK_LINE(946)
				if (((_this1->_clean_handlers == null()))){
					HX_STACK_LINE(946)
					_this1->_clean_handlers = Dynamic( Array_obj<Dynamic>::__new());
				}
				HX_STACK_LINE(946)
				_this1->_clean_handlers->__Field(HX_CSTRING("push"),true)(_this->on_parent_cleaned_dyn());
			}
			HX_STACK_LINE(946)
			_this->parent;
		}
	}
	else{
		HX_STACK_LINE(948)
		::phoenix::Transform _this = this->transform;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(948)
		{
			HX_STACK_LINE(948)
			_this->dirty = true;
			HX_STACK_LINE(948)
			if (((bool((bool((bool(_this->dirty) && bool(!(_this->_setup)))) && bool((_this->_dirty_handlers != null())))) && bool((_this->_dirty_handlers->__Field(HX_CSTRING("length"),true) > (int)0))))){
				HX_STACK_LINE(948)
				int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(948)
				Dynamic _g11 = _this->_dirty_handlers;		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(948)
				while((true)){
					HX_STACK_LINE(948)
					if ((!(((_g2 < _g11->__Field(HX_CSTRING("length"),true)))))){
						HX_STACK_LINE(948)
						break;
					}
					HX_STACK_LINE(948)
					Dynamic _handler = _g11->__GetItem(_g2);		HX_STACK_VAR(_handler,"_handler");
					HX_STACK_LINE(948)
					++(_g2);
					HX_STACK_LINE(948)
					if (((_handler != null()))){
						HX_STACK_LINE(948)
						_handler(_this).Cast< Void >();
					}
				}
			}
			HX_STACK_LINE(948)
			_this->dirty;
		}
		HX_STACK_LINE(948)
		if (((_this->parent != null()))){
			HX_STACK_LINE(948)
			::phoenix::Transform _this1 = _this->parent;		HX_STACK_VAR(_this1,"_this1");
			HX_STACK_LINE(948)
			if (((_this1->_clean_handlers == null()))){
				HX_STACK_LINE(948)
				false;
			}
			else{
				HX_STACK_LINE(948)
				_this1->_clean_handlers->__Field(HX_CSTRING("remove"),true)(_this->on_parent_cleaned_dyn());
			}
		}
		HX_STACK_LINE(948)
		_this->parent = null();
		HX_STACK_LINE(948)
		if (((bool((_this->_parent_handlers != null())) && bool((_this->_parent_handlers->__Field(HX_CSTRING("length"),true) > (int)0))))){
			HX_STACK_LINE(948)
			::phoenix::Transform _parent = _this->parent;		HX_STACK_VAR(_parent,"_parent");
			HX_STACK_LINE(948)
			{
				HX_STACK_LINE(948)
				int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(948)
				Dynamic _g11 = _this->_parent_handlers;		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(948)
				while((true)){
					HX_STACK_LINE(948)
					if ((!(((_g2 < _g11->__Field(HX_CSTRING("length"),true)))))){
						HX_STACK_LINE(948)
						break;
					}
					HX_STACK_LINE(948)
					Dynamic _handler = _g11->__GetItem(_g2);		HX_STACK_VAR(_handler,"_handler");
					HX_STACK_LINE(948)
					++(_g2);
					HX_STACK_LINE(948)
					if (((_handler != null()))){
						HX_STACK_LINE(948)
						_handler(_parent).Cast< Void >();
					}
				}
			}
		}
		HX_STACK_LINE(948)
		if (((_this->parent != null()))){
			HX_STACK_LINE(948)
			::phoenix::Transform _this1 = _this->parent;		HX_STACK_VAR(_this1,"_this1");
			HX_STACK_LINE(948)
			if (((_this1->_clean_handlers == null()))){
				HX_STACK_LINE(948)
				_this1->_clean_handlers = Dynamic( Array_obj<Dynamic>::__new());
			}
			HX_STACK_LINE(948)
			_this1->_clean_handlers->__Field(HX_CSTRING("push"),true)(_this->on_parent_cleaned_dyn());
		}
		HX_STACK_LINE(948)
		_this->parent;
	}
	HX_STACK_LINE(951)
	return this->get_parent();
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,set_parent,return )

::luxe::Entity Entity_obj::get_parent( ){
	HX_STACK_FRAME("luxe.Entity","get_parent",0xc1dd9186,"luxe.Entity.get_parent","luxe/Entity.hx",957,0x55caa482)
	HX_STACK_THIS(this)
	HX_STACK_LINE(957)
	return this->parent;
}


HX_DEFINE_DYNAMIC_FUNC0(Entity_obj,get_parent,return )

::luxe::Scene Entity_obj::set_scene( ::luxe::Scene _scene){
	HX_STACK_FRAME("luxe.Entity","set_scene",0x4f4ff87c,"luxe.Entity.set_scene","luxe/Entity.hx",963,0x55caa482)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_scene,"_scene")
	HX_STACK_LINE(965)
	this->_detach_scene();
	HX_STACK_LINE(967)
	this->scene = _scene;
	HX_STACK_LINE(969)
	this->_attach_scene();
	HX_STACK_LINE(971)
	return this->get_scene();
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,set_scene,return )

::luxe::Scene Entity_obj::get_scene( ){
	HX_STACK_FRAME("luxe.Entity","get_scene",0x6bff0c70,"luxe.Entity.get_scene","luxe/Entity.hx",977,0x55caa482)
	HX_STACK_THIS(this)
	HX_STACK_LINE(977)
	return this->scene;
}


HX_DEFINE_DYNAMIC_FUNC0(Entity_obj,get_scene,return )

bool Entity_obj::set_active( bool _active){
	HX_STACK_FRAME("luxe.Entity","set_active",0xee236c96,"luxe.Entity.set_active","luxe/Entity.hx",985,0x55caa482)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_active,"_active")
	HX_STACK_LINE(985)
	return this->active = _active;
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,set_active,return )

bool Entity_obj::get_active( ){
	HX_STACK_FRAME("luxe.Entity","get_active",0xeaa5ce22,"luxe.Entity.get_active","luxe/Entity.hx",991,0x55caa482)
	HX_STACK_THIS(this)
	HX_STACK_LINE(991)
	return this->active;
}


HX_DEFINE_DYNAMIC_FUNC0(Entity_obj,get_active,return )


Entity_obj::Entity_obj()
{
}

void Entity_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Entity);
	HX_MARK_MEMBER_NAME(events,"events");
	HX_MARK_MEMBER_NAME(children,"children");
	HX_MARK_MEMBER_NAME(destroyed,"destroyed");
	HX_MARK_MEMBER_NAME(inited,"inited");
	HX_MARK_MEMBER_NAME(started,"started");
	HX_MARK_MEMBER_NAME(fixed_rate,"fixed_rate");
	HX_MARK_MEMBER_NAME(parent,"parent");
	HX_MARK_MEMBER_NAME(scene,"scene");
	HX_MARK_MEMBER_NAME(active,"active");
	HX_MARK_MEMBER_NAME(transform,"transform");
	HX_MARK_MEMBER_NAME(_components,"_components");
	HX_MARK_MEMBER_NAME(fixed_rate_timer,"fixed_rate_timer");
	HX_MARK_MEMBER_NAME(options,"options");
	::luxe::Objects_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Entity_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(events,"events");
	HX_VISIT_MEMBER_NAME(children,"children");
	HX_VISIT_MEMBER_NAME(destroyed,"destroyed");
	HX_VISIT_MEMBER_NAME(inited,"inited");
	HX_VISIT_MEMBER_NAME(started,"started");
	HX_VISIT_MEMBER_NAME(fixed_rate,"fixed_rate");
	HX_VISIT_MEMBER_NAME(parent,"parent");
	HX_VISIT_MEMBER_NAME(scene,"scene");
	HX_VISIT_MEMBER_NAME(active,"active");
	HX_VISIT_MEMBER_NAME(transform,"transform");
	HX_VISIT_MEMBER_NAME(_components,"_components");
	HX_VISIT_MEMBER_NAME(fixed_rate_timer,"fixed_rate_timer");
	HX_VISIT_MEMBER_NAME(options,"options");
	::luxe::Objects_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Entity_obj::__Field(const ::String &inName,bool inCallProp)
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
		if (HX_FIELD_EQ(inName,"scene") ) { return inCallProp ? get_scene() : scene; }
		if (HX_FIELD_EQ(inName,"scale") ) { return get_scale(); }
		if (HX_FIELD_EQ(inName,"_init") ) { return _init_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"events") ) { return events; }
		if (HX_FIELD_EQ(inName,"inited") ) { return inited; }
		if (HX_FIELD_EQ(inName,"parent") ) { return inCallProp ? get_parent() : parent; }
		if (HX_FIELD_EQ(inName,"active") ) { return inCallProp ? get_active() : active; }
		if (HX_FIELD_EQ(inName,"origin") ) { return get_origin(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"remove") ) { return remove_dyn(); }
		if (HX_FIELD_EQ(inName,"_reset") ) { return _reset_dyn(); }
		if (HX_FIELD_EQ(inName,"_keyup") ) { return _keyup_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"started") ) { return started; }
		if (HX_FIELD_EQ(inName,"options") ) { return options; }
		if (HX_FIELD_EQ(inName,"onreset") ) { return onreset_dyn(); }
		if (HX_FIELD_EQ(inName,"onkeyup") ) { return onkeyup_dyn(); }
		if (HX_FIELD_EQ(inName,"get_any") ) { return get_any_dyn(); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"_update") ) { return _update_dyn(); }
		if (HX_FIELD_EQ(inName,"_listen") ) { return _listen_dyn(); }
		if (HX_FIELD_EQ(inName,"set_pos") ) { return set_pos_dyn(); }
		if (HX_FIELD_EQ(inName,"get_pos") ) { return get_pos_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"children") ) { return children; }
		if (HX_FIELD_EQ(inName,"rotation") ) { return get_rotation(); }
		if (HX_FIELD_EQ(inName,"_keydown") ) { return _keydown_dyn(); }
		if (HX_FIELD_EQ(inName,"_mouseup") ) { return _mouseup_dyn(); }
		if (HX_FIELD_EQ(inName,"_touchup") ) { return _touchup_dyn(); }
		if (HX_FIELD_EQ(inName,"_inputup") ) { return _inputup_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"destroyed") ) { return destroyed; }
		if (HX_FIELD_EQ(inName,"transform") ) { return transform; }
		if (HX_FIELD_EQ(inName,"ondestroy") ) { return ondestroy_dyn(); }
		if (HX_FIELD_EQ(inName,"onkeydown") ) { return onkeydown_dyn(); }
		if (HX_FIELD_EQ(inName,"oninputup") ) { return oninputup_dyn(); }
		if (HX_FIELD_EQ(inName,"onmouseup") ) { return onmouseup_dyn(); }
		if (HX_FIELD_EQ(inName,"ontouchup") ) { return ontouchup_dyn(); }
		if (HX_FIELD_EQ(inName,"_unlisten") ) { return _unlisten_dyn(); }
		if (HX_FIELD_EQ(inName,"set_scale") ) { return set_scale_dyn(); }
		if (HX_FIELD_EQ(inName,"get_scale") ) { return get_scale_dyn(); }
		if (HX_FIELD_EQ(inName,"set_scene") ) { return set_scene_dyn(); }
		if (HX_FIELD_EQ(inName,"get_scene") ) { return get_scene_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"components") ) { return get_components(); }
		if (HX_FIELD_EQ(inName,"fixed_rate") ) { return inCallProp ? get_fixed_rate() : fixed_rate; }
		if (HX_FIELD_EQ(inName,"_textinput") ) { return _textinput_dyn(); }
		if (HX_FIELD_EQ(inName,"_mousedown") ) { return _mousedown_dyn(); }
		if (HX_FIELD_EQ(inName,"_mousemove") ) { return _mousemove_dyn(); }
		if (HX_FIELD_EQ(inName,"_touchdown") ) { return _touchdown_dyn(); }
		if (HX_FIELD_EQ(inName,"_touchmove") ) { return _touchmove_dyn(); }
		if (HX_FIELD_EQ(inName,"_gamepadup") ) { return _gamepadup_dyn(); }
		if (HX_FIELD_EQ(inName,"_inputdown") ) { return _inputdown_dyn(); }
		if (HX_FIELD_EQ(inName,"_add_child") ) { return _add_child_dyn(); }
		if (HX_FIELD_EQ(inName,"set_origin") ) { return set_origin_dyn(); }
		if (HX_FIELD_EQ(inName,"get_origin") ) { return get_origin_dyn(); }
		if (HX_FIELD_EQ(inName,"set_parent") ) { return set_parent_dyn(); }
		if (HX_FIELD_EQ(inName,"get_parent") ) { return get_parent_dyn(); }
		if (HX_FIELD_EQ(inName,"set_active") ) { return set_active_dyn(); }
		if (HX_FIELD_EQ(inName,"get_active") ) { return get_active_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_components") ) { return _components; }
		if (HX_FIELD_EQ(inName,"ontextinput") ) { return ontextinput_dyn(); }
		if (HX_FIELD_EQ(inName,"oninputdown") ) { return oninputdown_dyn(); }
		if (HX_FIELD_EQ(inName,"onmousedown") ) { return onmousedown_dyn(); }
		if (HX_FIELD_EQ(inName,"onmousemove") ) { return onmousemove_dyn(); }
		if (HX_FIELD_EQ(inName,"ontouchdown") ) { return ontouchdown_dyn(); }
		if (HX_FIELD_EQ(inName,"ontouchmove") ) { return ontouchmove_dyn(); }
		if (HX_FIELD_EQ(inName,"ongamepadup") ) { return ongamepadup_dyn(); }
		if (HX_FIELD_EQ(inName,"_mousewheel") ) { return _mousewheel_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"onmousewheel") ) { return onmousewheel_dyn(); }
		if (HX_FIELD_EQ(inName,"_gamepadaxis") ) { return _gamepadaxis_dyn(); }
		if (HX_FIELD_EQ(inName,"_gamepaddown") ) { return _gamepaddown_dyn(); }
		if (HX_FIELD_EQ(inName,"set_rotation") ) { return set_rotation_dyn(); }
		if (HX_FIELD_EQ(inName,"get_rotation") ) { return get_rotation_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"onfixedupdate") ) { return onfixedupdate_dyn(); }
		if (HX_FIELD_EQ(inName,"ongamepaddown") ) { return ongamepaddown_dyn(); }
		if (HX_FIELD_EQ(inName,"ongamepadaxis") ) { return ongamepadaxis_dyn(); }
		if (HX_FIELD_EQ(inName,"_fixed_update") ) { return _fixed_update_dyn(); }
		if (HX_FIELD_EQ(inName,"_detach_scene") ) { return _detach_scene_dyn(); }
		if (HX_FIELD_EQ(inName,"_attach_scene") ) { return _attach_scene_dyn(); }
		if (HX_FIELD_EQ(inName,"_remove_child") ) { return _remove_child_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_gamepaddevice") ) { return _gamepaddevice_dyn(); }
		if (HX_FIELD_EQ(inName,"get_fixed_rate") ) { return get_fixed_rate_dyn(); }
		if (HX_FIELD_EQ(inName,"set_fixed_rate") ) { return set_fixed_rate_dyn(); }
		if (HX_FIELD_EQ(inName,"get_components") ) { return get_components_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"ongamepaddevice") ) { return ongamepaddevice_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"fixed_rate_timer") ) { return fixed_rate_timer; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_set_fixed_rate_timer") ) { return _set_fixed_rate_timer_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"_stop_fixed_rate_timer") ) { return _stop_fixed_rate_timer_dyn(); }
		if (HX_FIELD_EQ(inName,"set_pos_from_transform") ) { return set_pos_from_transform_dyn(); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"set_scale_from_transform") ) { return set_scale_from_transform_dyn(); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"set_origin_from_transform") ) { return set_origin_from_transform_dyn(); }
		if (HX_FIELD_EQ(inName,"set_parent_from_transform") ) { return set_parent_from_transform_dyn(); }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"set_rotation_from_transform") ) { return set_rotation_from_transform_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Entity_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"pos") ) { return set_pos(inValue); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"scene") ) { if (inCallProp) return set_scene(inValue);scene=inValue.Cast< ::luxe::Scene >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scale") ) { return set_scale(inValue); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"events") ) { events=inValue.Cast< ::luxe::Events >(); return inValue; }
		if (HX_FIELD_EQ(inName,"inited") ) { inited=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"parent") ) { if (inCallProp) return set_parent(inValue);parent=inValue.Cast< ::luxe::Entity >(); return inValue; }
		if (HX_FIELD_EQ(inName,"active") ) { if (inCallProp) return set_active(inValue);active=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"origin") ) { return set_origin(inValue); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"started") ) { started=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"options") ) { options=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"children") ) { children=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"rotation") ) { return set_rotation(inValue); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"destroyed") ) { destroyed=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"transform") ) { transform=inValue.Cast< ::phoenix::Transform >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"fixed_rate") ) { if (inCallProp) return set_fixed_rate(inValue);fixed_rate=inValue.Cast< Float >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_components") ) { _components=inValue.Cast< ::luxe::components::Components >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"fixed_rate_timer") ) { fixed_rate_timer=inValue.Cast< ::snow::utils::Timer >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Entity_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("components"));
	outFields->push(HX_CSTRING("events"));
	outFields->push(HX_CSTRING("children"));
	outFields->push(HX_CSTRING("destroyed"));
	outFields->push(HX_CSTRING("inited"));
	outFields->push(HX_CSTRING("started"));
	outFields->push(HX_CSTRING("fixed_rate"));
	outFields->push(HX_CSTRING("parent"));
	outFields->push(HX_CSTRING("scene"));
	outFields->push(HX_CSTRING("active"));
	outFields->push(HX_CSTRING("transform"));
	outFields->push(HX_CSTRING("pos"));
	outFields->push(HX_CSTRING("rotation"));
	outFields->push(HX_CSTRING("scale"));
	outFields->push(HX_CSTRING("origin"));
	outFields->push(HX_CSTRING("_components"));
	outFields->push(HX_CSTRING("fixed_rate_timer"));
	outFields->push(HX_CSTRING("options"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::luxe::Events*/ ,(int)offsetof(Entity_obj,events),HX_CSTRING("events")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Entity_obj,children),HX_CSTRING("children")},
	{hx::fsBool,(int)offsetof(Entity_obj,destroyed),HX_CSTRING("destroyed")},
	{hx::fsBool,(int)offsetof(Entity_obj,inited),HX_CSTRING("inited")},
	{hx::fsBool,(int)offsetof(Entity_obj,started),HX_CSTRING("started")},
	{hx::fsFloat,(int)offsetof(Entity_obj,fixed_rate),HX_CSTRING("fixed_rate")},
	{hx::fsObject /*::luxe::Entity*/ ,(int)offsetof(Entity_obj,parent),HX_CSTRING("parent")},
	{hx::fsObject /*::luxe::Scene*/ ,(int)offsetof(Entity_obj,scene),HX_CSTRING("scene")},
	{hx::fsBool,(int)offsetof(Entity_obj,active),HX_CSTRING("active")},
	{hx::fsObject /*::phoenix::Transform*/ ,(int)offsetof(Entity_obj,transform),HX_CSTRING("transform")},
	{hx::fsObject /*::luxe::components::Components*/ ,(int)offsetof(Entity_obj,_components),HX_CSTRING("_components")},
	{hx::fsObject /*::snow::utils::Timer*/ ,(int)offsetof(Entity_obj,fixed_rate_timer),HX_CSTRING("fixed_rate_timer")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Entity_obj,options),HX_CSTRING("options")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("events"),
	HX_CSTRING("children"),
	HX_CSTRING("destroyed"),
	HX_CSTRING("inited"),
	HX_CSTRING("started"),
	HX_CSTRING("fixed_rate"),
	HX_CSTRING("parent"),
	HX_CSTRING("scene"),
	HX_CSTRING("active"),
	HX_CSTRING("transform"),
	HX_CSTRING("_components"),
	HX_CSTRING("fixed_rate_timer"),
	HX_CSTRING("options"),
	HX_CSTRING("init"),
	HX_CSTRING("update"),
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
	HX_CSTRING("_init"),
	HX_CSTRING("_reset"),
	HX_CSTRING("destroy"),
	HX_CSTRING("_update"),
	HX_CSTRING("_fixed_update"),
	HX_CSTRING("_listen"),
	HX_CSTRING("_unlisten"),
	HX_CSTRING("_detach_scene"),
	HX_CSTRING("_attach_scene"),
	HX_CSTRING("_keyup"),
	HX_CSTRING("_keydown"),
	HX_CSTRING("_textinput"),
	HX_CSTRING("_mousedown"),
	HX_CSTRING("_mouseup"),
	HX_CSTRING("_mousewheel"),
	HX_CSTRING("_mousemove"),
	HX_CSTRING("_touchdown"),
	HX_CSTRING("_touchup"),
	HX_CSTRING("_touchmove"),
	HX_CSTRING("_gamepadaxis"),
	HX_CSTRING("_gamepaddown"),
	HX_CSTRING("_gamepadup"),
	HX_CSTRING("_gamepaddevice"),
	HX_CSTRING("_inputdown"),
	HX_CSTRING("_inputup"),
	HX_CSTRING("get_fixed_rate"),
	HX_CSTRING("set_fixed_rate"),
	HX_CSTRING("_stop_fixed_rate_timer"),
	HX_CSTRING("_set_fixed_rate_timer"),
	HX_CSTRING("get_components"),
	HX_CSTRING("_add_child"),
	HX_CSTRING("_remove_child"),
	HX_CSTRING("set_pos_from_transform"),
	HX_CSTRING("set_rotation_from_transform"),
	HX_CSTRING("set_scale_from_transform"),
	HX_CSTRING("set_origin_from_transform"),
	HX_CSTRING("set_parent_from_transform"),
	HX_CSTRING("set_pos"),
	HX_CSTRING("get_pos"),
	HX_CSTRING("set_rotation"),
	HX_CSTRING("get_rotation"),
	HX_CSTRING("set_scale"),
	HX_CSTRING("get_scale"),
	HX_CSTRING("set_origin"),
	HX_CSTRING("get_origin"),
	HX_CSTRING("set_parent"),
	HX_CSTRING("get_parent"),
	HX_CSTRING("set_scene"),
	HX_CSTRING("get_scene"),
	HX_CSTRING("set_active"),
	HX_CSTRING("get_active"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Entity_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Entity_obj::__mClass,"__mClass");
};

#endif

Class Entity_obj::__mClass;

void Entity_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("luxe.Entity"), hx::TCanCast< Entity_obj> ,sStaticFields,sMemberFields,
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

void Entity_obj::__boot()
{
}

} // end namespace luxe
