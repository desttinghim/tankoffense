#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif

Void Type_obj::__construct()
{
	return null();
}

//Type_obj::~Type_obj() { }

Dynamic Type_obj::__CreateEmpty() { return  new Type_obj; }
hx::ObjectPtr< Type_obj > Type_obj::__new()
{  hx::ObjectPtr< Type_obj > result = new Type_obj();
	result->__construct();
	return result;}

Dynamic Type_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Type_obj > result = new Type_obj();
	result->__construct();
	return result;}

::Class Type_obj::getClass( Dynamic o){
	HX_STACK_FRAME("Type","getClass",0xc4e49bd6,"Type.getClass","C:\\HaxeToolkit\\haxe\\std/cpp/_std/Type.hx",35,0x00143afe)
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(36)
	if (((  ((!(((o == null()))))) ? bool(!(::Reflect_obj::isObject(o))) : bool(true) ))){
		HX_STACK_LINE(36)
		return null();
	}
	HX_STACK_LINE(37)
	Dynamic c = o->__GetClass();		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(38)
	{
		HX_STACK_LINE(38)
		::String _g = c->toString();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(38)
		::String _switch_1 = (_g);
		if (  ( _switch_1==HX_CSTRING("__Anon"))){
			HX_STACK_LINE(40)
			return null();
		}
		else if (  ( _switch_1==HX_CSTRING("Class"))){
			HX_STACK_LINE(41)
			return null();
		}
	}
	HX_STACK_LINE(43)
	return c;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Type_obj,getClass,return )

Dynamic Type_obj::createInstance( ::Class cl,Dynamic args){
	HX_STACK_FRAME("Type","createInstance",0xab84f9c5,"Type.createInstance","C:\\HaxeToolkit\\haxe\\std/cpp/_std/Type.hx",80,0x00143afe)
	HX_STACK_ARG(cl,"cl")
	HX_STACK_ARG(args,"args")
	HX_STACK_LINE(81)
	if (((cl != null()))){
		HX_STACK_LINE(82)
		return cl->ConstructArgs(args);
	}
	HX_STACK_LINE(83)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Type_obj,createInstance,return )


Type_obj::Type_obj()
{
}

Dynamic Type_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"getClass") ) { return getClass_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"createInstance") ) { return createInstance_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Type_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void Type_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("getClass"),
	HX_CSTRING("createInstance"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Type_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Type_obj::__mClass,"__mClass");
};

#endif

Class Type_obj::__mClass;

void Type_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("Type"), hx::TCanCast< Type_obj> ,sStaticFields,sMemberFields,
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

void Type_obj::__boot()
{
}

