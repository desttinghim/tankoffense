#include <hxcpp.h>

#ifndef INCLUDED_Side
#include <Side.h>
#endif
#ifndef INCLUDED_luxe_Component
#include <luxe/Component.h>
#endif
#ifndef INCLUDED_luxe_ID
#include <luxe/ID.h>
#endif

Void Side_obj::__construct(int whichSide)
{
HX_STACK_FRAME("Side","new",0xdb8d0229,"Side.new","Side.hx",8,0x4de63567)
HX_STACK_THIS(this)
HX_STACK_ARG(whichSide,"whichSide")
{
	HX_STACK_LINE(9)
	this->side = whichSide;
	struct _Function_1_1{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Side.hx",10,0x4de63567)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("name") , HX_CSTRING("side"),false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(10)
	super::__construct(_Function_1_1::Block());
}
;
	return null();
}

//Side_obj::~Side_obj() { }

Dynamic Side_obj::__CreateEmpty() { return  new Side_obj; }
hx::ObjectPtr< Side_obj > Side_obj::__new(int whichSide)
{  hx::ObjectPtr< Side_obj > result = new Side_obj();
	result->__construct(whichSide);
	return result;}

Dynamic Side_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Side_obj > result = new Side_obj();
	result->__construct(inArgs[0]);
	return result;}

Void Side_obj::init( ){
{
		HX_STACK_FRAME("Side","init",0x3c8d9927,"Side.init","luxe/macros/ComponentRules.hx",38,0x7da94735)
		HX_STACK_THIS(this)
	}
return null();
}


Void Side_obj::ondestroy( ){
{
		HX_STACK_FRAME("Side","ondestroy",0xfcedec44,"Side.ondestroy","luxe/macros/ComponentRules.hx",50,0x7da94735)
		HX_STACK_THIS(this)
		HX_STACK_LINE(50)
		this->super::ondestroy();
	}
return null();
}


Void Side_obj::onremoved( ){
{
		HX_STACK_FRAME("Side","onremoved",0xcb67deea,"Side.onremoved","luxe/macros/ComponentRules.hx",62,0x7da94735)
		HX_STACK_THIS(this)
		HX_STACK_LINE(62)
		this->super::onremoved();
	}
return null();
}



Side_obj::Side_obj()
{
}

Dynamic Side_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"side") ) { return side; }
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"ondestroy") ) { return ondestroy_dyn(); }
		if (HX_FIELD_EQ(inName,"onremoved") ) { return onremoved_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Side_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"side") ) { side=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Side_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("side"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(Side_obj,side),HX_CSTRING("side")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("side"),
	HX_CSTRING("init"),
	HX_CSTRING("ondestroy"),
	HX_CSTRING("onremoved"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Side_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Side_obj::__mClass,"__mClass");
};

#endif

Class Side_obj::__mClass;

void Side_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("Side"), hx::TCanCast< Side_obj> ,sStaticFields,sMemberFields,
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

void Side_obj::__boot()
{
}

