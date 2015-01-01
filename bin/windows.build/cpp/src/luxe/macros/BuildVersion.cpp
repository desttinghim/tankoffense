#include <hxcpp.h>

#ifndef INCLUDED_luxe_macros_BuildVersion
#include <luxe/macros/BuildVersion.h>
#endif
namespace luxe{
namespace macros{

Void BuildVersion_obj::__construct()
{
	return null();
}

//BuildVersion_obj::~BuildVersion_obj() { }

Dynamic BuildVersion_obj::__CreateEmpty() { return  new BuildVersion_obj; }
hx::ObjectPtr< BuildVersion_obj > BuildVersion_obj::__new()
{  hx::ObjectPtr< BuildVersion_obj > result = new BuildVersion_obj();
	result->__construct();
	return result;}

Dynamic BuildVersion_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< BuildVersion_obj > result = new BuildVersion_obj();
	result->__construct();
	return result;}

bool BuildVersion_obj::_save;

::String BuildVersion_obj::try_git( ::String root){
	HX_STACK_FRAME("luxe.macros.BuildVersion","try_git",0xaec0ed39,"luxe.macros.BuildVersion.try_git","luxe/macros/BuildVersion.hx",70,0x8b16c365)
	HX_STACK_ARG(root,"root")
	HX_STACK_LINE(70)
	return HX_CSTRING("");
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(BuildVersion_obj,try_git,return )


BuildVersion_obj::BuildVersion_obj()
{
}

Dynamic BuildVersion_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_save") ) { return _save; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"try_git") ) { return try_git_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic BuildVersion_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_save") ) { _save=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void BuildVersion_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("_save"),
	HX_CSTRING("try_git"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BuildVersion_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(BuildVersion_obj::_save,"_save");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BuildVersion_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(BuildVersion_obj::_save,"_save");
};

#endif

Class BuildVersion_obj::__mClass;

void BuildVersion_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("luxe.macros.BuildVersion"), hx::TCanCast< BuildVersion_obj> ,sStaticFields,sMemberFields,
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

void BuildVersion_obj::__boot()
{
	_save= false;
}

} // end namespace luxe
} // end namespace macros
