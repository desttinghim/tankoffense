#include <hxcpp.h>

#ifndef INCLUDED_snow_types__Types_OpenGLProfile_Impl_
#include <snow/types/_Types/OpenGLProfile_Impl_.h>
#endif
namespace snow{
namespace types{
namespace _Types{

Void OpenGLProfile_Impl__obj::__construct()
{
	return null();
}

//OpenGLProfile_Impl__obj::~OpenGLProfile_Impl__obj() { }

Dynamic OpenGLProfile_Impl__obj::__CreateEmpty() { return  new OpenGLProfile_Impl__obj; }
hx::ObjectPtr< OpenGLProfile_Impl__obj > OpenGLProfile_Impl__obj::__new()
{  hx::ObjectPtr< OpenGLProfile_Impl__obj > result = new OpenGLProfile_Impl__obj();
	result->__construct();
	return result;}

Dynamic OpenGLProfile_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< OpenGLProfile_Impl__obj > result = new OpenGLProfile_Impl__obj();
	result->__construct();
	return result;}

int OpenGLProfile_Impl__obj::compatibility;

int OpenGLProfile_Impl__obj::core;


OpenGLProfile_Impl__obj::OpenGLProfile_Impl__obj()
{
}

Dynamic OpenGLProfile_Impl__obj::__Field(const ::String &inName,bool inCallProp)
{
	return super::__Field(inName,inCallProp);
}

Dynamic OpenGLProfile_Impl__obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void OpenGLProfile_Impl__obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("compatibility"),
	HX_CSTRING("core"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(OpenGLProfile_Impl__obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(OpenGLProfile_Impl__obj::compatibility,"compatibility");
	HX_MARK_MEMBER_NAME(OpenGLProfile_Impl__obj::core,"core");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(OpenGLProfile_Impl__obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(OpenGLProfile_Impl__obj::compatibility,"compatibility");
	HX_VISIT_MEMBER_NAME(OpenGLProfile_Impl__obj::core,"core");
};

#endif

Class OpenGLProfile_Impl__obj::__mClass;

void OpenGLProfile_Impl__obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("snow.types._Types.OpenGLProfile_Impl_"), hx::TCanCast< OpenGLProfile_Impl__obj> ,sStaticFields,sMemberFields,
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

void OpenGLProfile_Impl__obj::__boot()
{
	compatibility= (int)0;
	core= (int)1;
}

} // end namespace snow
} // end namespace types
} // end namespace _Types
