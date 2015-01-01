#include <hxcpp.h>

#ifndef INCLUDED_snow_CoreBinding
#include <snow/CoreBinding.h>
#endif
#ifndef INCLUDED_snow_Snow
#include <snow/Snow.h>
#endif
#ifndef INCLUDED_snow_utils_AbstractClass
#include <snow/utils/AbstractClass.h>
#endif
namespace snow{

Void CoreBinding_obj::__construct()
{
	return null();
}

//CoreBinding_obj::~CoreBinding_obj() { }

Dynamic CoreBinding_obj::__CreateEmpty() { return  new CoreBinding_obj; }
hx::ObjectPtr< CoreBinding_obj > CoreBinding_obj::__new()
{  hx::ObjectPtr< CoreBinding_obj > result = new CoreBinding_obj();
	result->__construct();
	return result;}

Dynamic CoreBinding_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< CoreBinding_obj > result = new CoreBinding_obj();
	result->__construct();
	return result;}

hx::Object *CoreBinding_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::snow::utils::AbstractClass_obj)) return operator ::snow::utils::AbstractClass_obj *();
	return super::__ToInterface(inType);
}

Void CoreBinding_obj::init( Dynamic _event_handler){
{
		HX_STACK_FRAME("snow.CoreBinding","init",0x9eb9b343,"snow.CoreBinding.init","snow/utils/AbstractClass.hx",140,0x08288ed2)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_event_handler,"_event_handler")
		HX_STACK_LINE(140)
		HX_STACK_DO_THROW(HX_CSTRING("abstract method, must override"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(CoreBinding_obj,init,(void))

Void CoreBinding_obj::shutdown( ){
{
		HX_STACK_FRAME("snow.CoreBinding","shutdown",0x8e160a49,"snow.CoreBinding.shutdown","snow/utils/AbstractClass.hx",140,0x08288ed2)
		HX_STACK_THIS(this)
		HX_STACK_LINE(140)
		HX_STACK_DO_THROW(HX_CSTRING("abstract method, must override"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(CoreBinding_obj,shutdown,(void))

Float CoreBinding_obj::timestamp( ){
	HX_STACK_FRAME("snow.CoreBinding","timestamp",0x2b90c3c3,"snow.CoreBinding.timestamp","snow/utils/AbstractClass.hx",142,0x08288ed2)
	HX_STACK_THIS(this)
	HX_STACK_LINE(142)
	HX_STACK_DO_THROW(HX_CSTRING("abstract method, must override"));
	HX_STACK_LINE(142)
	return 0.;
}


HX_DEFINE_DYNAMIC_FUNC0(CoreBinding_obj,timestamp,return )

::String CoreBinding_obj::app_path( ){
	HX_STACK_FRAME("snow.CoreBinding","app_path",0xc5e6aaf6,"snow.CoreBinding.app_path","snow/utils/AbstractClass.hx",142,0x08288ed2)
	HX_STACK_THIS(this)
	HX_STACK_LINE(142)
	HX_STACK_DO_THROW(HX_CSTRING("abstract method, must override"));
	HX_STACK_LINE(142)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(CoreBinding_obj,app_path,return )

::String CoreBinding_obj::pref_path( ::String _package,::String _appname){
	HX_STACK_FRAME("snow.CoreBinding","pref_path",0x75985aae,"snow.CoreBinding.pref_path","snow/utils/AbstractClass.hx",142,0x08288ed2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_package,"_package")
	HX_STACK_ARG(_appname,"_appname")
	HX_STACK_LINE(142)
	HX_STACK_DO_THROW(HX_CSTRING("abstract method, must override"));
	HX_STACK_LINE(142)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC2(CoreBinding_obj,pref_path,return )


CoreBinding_obj::CoreBinding_obj()
{
}

void CoreBinding_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(CoreBinding);
	HX_MARK_MEMBER_NAME(app,"app");
	HX_MARK_END_CLASS();
}

void CoreBinding_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(app,"app");
}

Dynamic CoreBinding_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"app") ) { return app; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"shutdown") ) { return shutdown_dyn(); }
		if (HX_FIELD_EQ(inName,"app_path") ) { return app_path_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"timestamp") ) { return timestamp_dyn(); }
		if (HX_FIELD_EQ(inName,"pref_path") ) { return pref_path_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic CoreBinding_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"app") ) { app=inValue.Cast< ::snow::Snow >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void CoreBinding_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("app"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::snow::Snow*/ ,(int)offsetof(CoreBinding_obj,app),HX_CSTRING("app")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("app"),
	HX_CSTRING("init"),
	HX_CSTRING("shutdown"),
	HX_CSTRING("timestamp"),
	HX_CSTRING("app_path"),
	HX_CSTRING("pref_path"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CoreBinding_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CoreBinding_obj::__mClass,"__mClass");
};

#endif

Class CoreBinding_obj::__mClass;

void CoreBinding_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("snow.CoreBinding"), hx::TCanCast< CoreBinding_obj> ,sStaticFields,sMemberFields,
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

void CoreBinding_obj::__boot()
{
}

} // end namespace snow
