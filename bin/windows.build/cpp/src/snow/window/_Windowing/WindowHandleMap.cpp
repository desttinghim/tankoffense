#include <hxcpp.h>

#ifndef INCLUDED_haxe_ds_BalancedTree
#include <haxe/ds/BalancedTree.h>
#endif
#ifndef INCLUDED_snow_window__Windowing_WindowHandleMap
#include <snow/window/_Windowing/WindowHandleMap.h>
#endif
namespace snow{
namespace window{
namespace _Windowing{

Void WindowHandleMap_obj::__construct()
{
HX_STACK_FRAME("snow.window._Windowing.WindowHandleMap","new",0x4a5d89ce,"snow.window._Windowing.WindowHandleMap.new","snow/window/Windowing.hx",219,0xc4a0331f)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(219)
	super::__construct();
}
;
	return null();
}

//WindowHandleMap_obj::~WindowHandleMap_obj() { }

Dynamic WindowHandleMap_obj::__CreateEmpty() { return  new WindowHandleMap_obj; }
hx::ObjectPtr< WindowHandleMap_obj > WindowHandleMap_obj::__new()
{  hx::ObjectPtr< WindowHandleMap_obj > result = new WindowHandleMap_obj();
	result->__construct();
	return result;}

Dynamic WindowHandleMap_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< WindowHandleMap_obj > result = new WindowHandleMap_obj();
	result->__construct();
	return result;}

int WindowHandleMap_obj::compare( Dynamic _tmp_k1,Dynamic _tmp_k2){
	HX_STACK_FRAME("snow.window._Windowing.WindowHandleMap","compare",0x7d572113,"snow.window._Windowing.WindowHandleMap.compare","snow/window/Windowing.hx",221,0xc4a0331f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_tmp_k1,"_tmp_k1")
	HX_STACK_ARG(_tmp_k2,"_tmp_k2")
	HX_STACK_LINE(222)
	Dynamic k1 = _tmp_k1;		HX_STACK_VAR(k1,"k1");
	HX_STACK_LINE(222)
	Dynamic k2 = _tmp_k2;		HX_STACK_VAR(k2,"k2");
	HX_STACK_LINE(222)
	if (((k1 == null()))){
		HX_STACK_LINE(222)
		return (int)1;
	}
	HX_STACK_LINE(223)
	if (((k2 == null()))){
		HX_STACK_LINE(223)
		return (int)1;
	}
	HX_STACK_LINE(224)
	if (((k1 == k2))){
		HX_STACK_LINE(224)
		return (int)0;
	}
	HX_STACK_LINE(225)
	if (((k1 < k2))){
		HX_STACK_LINE(225)
		return (int)-1;
	}
	HX_STACK_LINE(226)
	return (int)1;
}



WindowHandleMap_obj::WindowHandleMap_obj()
{
}

Dynamic WindowHandleMap_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"compare") ) { return compare_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic WindowHandleMap_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void WindowHandleMap_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("compare"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(WindowHandleMap_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(WindowHandleMap_obj::__mClass,"__mClass");
};

#endif

Class WindowHandleMap_obj::__mClass;

void WindowHandleMap_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("snow.window._Windowing.WindowHandleMap"), hx::TCanCast< WindowHandleMap_obj> ,sStaticFields,sMemberFields,
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

void WindowHandleMap_obj::__boot()
{
}

} // end namespace snow
} // end namespace window
} // end namespace _Windowing
