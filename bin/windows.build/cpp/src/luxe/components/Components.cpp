#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
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
#ifndef INCLUDED_luxe_components_Components
#include <luxe/components/Components.h>
#endif
namespace luxe{
namespace components{

Void Components_obj::__construct(::luxe::Entity _entity)
{
HX_STACK_FRAME("luxe.components.Components","new",0x0c312ac8,"luxe.components.Components.new","luxe/components/Components.hx",16,0x8dc4d408)
HX_STACK_THIS(this)
HX_STACK_ARG(_entity,"_entity")
{
	HX_STACK_LINE(18)
	::haxe::ds::StringMap _g = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(18)
	this->components = _g;
	HX_STACK_LINE(19)
	this->entity = _entity;
}
;
	return null();
}

//Components_obj::~Components_obj() { }

Dynamic Components_obj::__CreateEmpty() { return  new Components_obj; }
hx::ObjectPtr< Components_obj > Components_obj::__new(::luxe::Entity _entity)
{  hx::ObjectPtr< Components_obj > result = new Components_obj();
	result->__construct(_entity);
	return result;}

Dynamic Components_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Components_obj > result = new Components_obj();
	result->__construct(inArgs[0]);
	return result;}

Dynamic Components_obj::add( Dynamic _component){
	HX_STACK_FRAME("luxe.components.Components","add",0x0c274c89,"luxe.components.Components.add","luxe/components/Components.hx",23,0x8dc4d408)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_component,"_component")
	HX_STACK_LINE(25)
	if (((_component == null()))){
		HX_STACK_LINE(26)
		::haxe::Log_obj::trace((HX_CSTRING("attempt to add null component to ") + this->entity->name),hx::SourceInfo(HX_CSTRING("Components.hx"),26,HX_CSTRING("luxe.components.Components"),HX_CSTRING("add")));
		HX_STACK_LINE(27)
		return _component;
	}
	HX_STACK_LINE(30)
	_component->__Field(HX_CSTRING("set_entity"),true)(this->entity);
	HX_STACK_LINE(32)
	this->components->set(_component->__Field(HX_CSTRING("name"),true),_component);
	HX_STACK_LINE(37)
	_component->__Field(HX_CSTRING("onadded"),true)();
	HX_STACK_LINE(41)
	if ((this->entity->inited)){
		HX_STACK_LINE(43)
		_component->__Field(HX_CSTRING("init"),true)();
	}
	HX_STACK_LINE(46)
	if ((this->entity->started)){
		HX_STACK_LINE(48)
		_component->__Field(HX_CSTRING("onreset"),true)();
	}
	HX_STACK_LINE(51)
	return _component;
}


HX_DEFINE_DYNAMIC_FUNC1(Components_obj,add,return )

bool Components_obj::remove( ::String _name){
	HX_STACK_FRAME("luxe.components.Components","remove",0xc2bdb2dc,"luxe.components.Components.remove","luxe/components/Components.hx",55,0x8dc4d408)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_name,"_name")
	HX_STACK_LINE(58)
	if ((!(this->components->exists(_name)))){
		HX_STACK_LINE(59)
		::haxe::Log_obj::trace(((((HX_CSTRING("attempt to remove ") + _name) + HX_CSTRING(" from ")) + this->entity->name) + HX_CSTRING(" failed because that component was not attached to this entity")),hx::SourceInfo(HX_CSTRING("Components.hx"),59,HX_CSTRING("luxe.components.Components"),HX_CSTRING("remove")));
		HX_STACK_LINE(60)
		return false;
	}
	HX_STACK_LINE(65)
	::luxe::Component _component = this->components->get(_name);		HX_STACK_VAR(_component,"_component");
	HX_STACK_LINE(66)
	_component->onremoved();
	HX_STACK_LINE(69)
	_component->set_entity(null());
	HX_STACK_LINE(71)
	return this->components->remove(_name);
}


HX_DEFINE_DYNAMIC_FUNC1(Components_obj,remove,return )

Dynamic Components_obj::get( ::String _name,Dynamic __o_in_children){
Dynamic in_children = __o_in_children.Default(false);
	HX_STACK_FRAME("luxe.components.Components","get",0x0c2bdafe,"luxe.components.Components.get","luxe/components/Components.hx",75,0x8dc4d408)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_name,"_name")
	HX_STACK_ARG(in_children,"in_children")
{
		HX_STACK_LINE(79)
		if ((!(in_children))){
			HX_STACK_LINE(81)
			return this->components->get(_name);
		}
		else{
			HX_STACK_LINE(86)
			::luxe::Component in_this_entity = this->components->get(_name);		HX_STACK_VAR(in_this_entity,"in_this_entity");
			HX_STACK_LINE(87)
			if (((in_this_entity != null()))){
				HX_STACK_LINE(88)
				return in_this_entity;
			}
			HX_STACK_LINE(94)
			{
				HX_STACK_LINE(94)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(94)
				Array< ::Dynamic > _g1 = this->entity->children;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(94)
				while((true)){
					HX_STACK_LINE(94)
					if ((!(((_g < _g1->length))))){
						HX_STACK_LINE(94)
						break;
					}
					HX_STACK_LINE(94)
					::luxe::Entity _child = _g1->__get(_g).StaticCast< ::luxe::Entity >();		HX_STACK_VAR(_child,"_child");
					HX_STACK_LINE(94)
					++(_g);
					HX_STACK_LINE(98)
					Dynamic found = _child->get(_name,true);		HX_STACK_VAR(found,"found");
					HX_STACK_LINE(100)
					if (((found != null()))){
						HX_STACK_LINE(101)
						return found;
					}
				}
			}
			HX_STACK_LINE(106)
			return null();
		}
		HX_STACK_LINE(110)
		return null();
	}
}


HX_DEFINE_DYNAMIC_FUNC2(Components_obj,get,return )

Dynamic Components_obj::get_any( ::String _name,Dynamic __o_in_children,Dynamic __o_first_only){
Dynamic in_children = __o_in_children.Default(false);
Dynamic first_only = __o_first_only.Default(true);
	HX_STACK_FRAME("luxe.components.Components","get_any",0xd6fd71eb,"luxe.components.Components.get_any","luxe/components/Components.hx",114,0x8dc4d408)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_name,"_name")
	HX_STACK_ARG(in_children,"in_children")
	HX_STACK_ARG(first_only,"first_only")
{
		HX_STACK_LINE(118)
		Dynamic results = Dynamic( Array_obj<Dynamic>::__new());		HX_STACK_VAR(results,"results");
		HX_STACK_LINE(120)
		if ((!(in_children))){
			HX_STACK_LINE(122)
			Dynamic _g = this->components->get(_name);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(122)
			return Dynamic( Array_obj<Dynamic>::__new().Add(_g));
		}
		else{
			HX_STACK_LINE(126)
			::luxe::Component in_this_entity = this->components->get(_name);		HX_STACK_VAR(in_this_entity,"in_this_entity");
			HX_STACK_LINE(127)
			if (((in_this_entity != null()))){
				HX_STACK_LINE(128)
				if ((first_only)){
					HX_STACK_LINE(129)
					return Dynamic( Array_obj<Dynamic>::__new().Add(in_this_entity));
				}
				else{
					HX_STACK_LINE(131)
					results->__Field(HX_CSTRING("push"),true)(in_this_entity);
				}
			}
			HX_STACK_LINE(138)
			{
				HX_STACK_LINE(138)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(138)
				Array< ::Dynamic > _g1 = this->entity->children;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(138)
				while((true)){
					HX_STACK_LINE(138)
					if ((!(((_g < _g1->length))))){
						HX_STACK_LINE(138)
						break;
					}
					HX_STACK_LINE(138)
					::luxe::Entity _child = _g1->__get(_g).StaticCast< ::luxe::Entity >();		HX_STACK_VAR(_child,"_child");
					HX_STACK_LINE(138)
					++(_g);
					HX_STACK_LINE(142)
					Dynamic found = _child->get_any(_name,true,first_only);		HX_STACK_VAR(found,"found");
					HX_STACK_LINE(144)
					if (((found != null()))){
						HX_STACK_LINE(147)
						if (((bool(first_only) && bool((found->__Field(HX_CSTRING("length"),true) > (int)0))))){
							HX_STACK_LINE(148)
							return Dynamic( Array_obj<Dynamic>::__new().Add(found->__GetItem((int)0)));
						}
						else{
							HX_STACK_LINE(150)
							results->__Field(HX_CSTRING("concat"),true)(found);
						}
					}
				}
			}
		}
		HX_STACK_LINE(159)
		return results;
	}
}


HX_DEFINE_DYNAMIC_FUNC3(Components_obj,get_any,return )

bool Components_obj::has( ::String _name){
	HX_STACK_FRAME("luxe.components.Components","has",0x0c2c99c2,"luxe.components.Components.has","luxe/components/Components.hx",164,0x8dc4d408)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_name,"_name")
	HX_STACK_LINE(164)
	return this->components->exists(_name);
}


HX_DEFINE_DYNAMIC_FUNC1(Components_obj,has,return )


Components_obj::Components_obj()
{
}

void Components_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Components);
	HX_MARK_MEMBER_NAME(components,"components");
	HX_MARK_MEMBER_NAME(entity,"entity");
	HX_MARK_END_CLASS();
}

void Components_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(components,"components");
	HX_VISIT_MEMBER_NAME(entity,"entity");
}

Dynamic Components_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return add_dyn(); }
		if (HX_FIELD_EQ(inName,"get") ) { return get_dyn(); }
		if (HX_FIELD_EQ(inName,"has") ) { return has_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"entity") ) { return entity; }
		if (HX_FIELD_EQ(inName,"remove") ) { return remove_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"get_any") ) { return get_any_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"components") ) { return components; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Components_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"entity") ) { entity=inValue.Cast< ::luxe::Entity >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"components") ) { components=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Components_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("components"));
	outFields->push(HX_CSTRING("entity"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(Components_obj,components),HX_CSTRING("components")},
	{hx::fsObject /*::luxe::Entity*/ ,(int)offsetof(Components_obj,entity),HX_CSTRING("entity")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("components"),
	HX_CSTRING("entity"),
	HX_CSTRING("add"),
	HX_CSTRING("remove"),
	HX_CSTRING("get"),
	HX_CSTRING("get_any"),
	HX_CSTRING("has"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Components_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Components_obj::__mClass,"__mClass");
};

#endif

Class Components_obj::__mClass;

void Components_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("luxe.components.Components"), hx::TCanCast< Components_obj> ,sStaticFields,sMemberFields,
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

void Components_obj::__boot()
{
}

} // end namespace luxe
} // end namespace components
