#include <hxcpp.h>

#ifndef INCLUDED_snow_types__Types_FileEventType_Impl_
#include <snow/types/_Types/FileEventType_Impl_.h>
#endif
namespace snow{
namespace types{
namespace _Types{

Void FileEventType_Impl__obj::__construct()
{
	return null();
}

//FileEventType_Impl__obj::~FileEventType_Impl__obj() { }

Dynamic FileEventType_Impl__obj::__CreateEmpty() { return  new FileEventType_Impl__obj; }
hx::ObjectPtr< FileEventType_Impl__obj > FileEventType_Impl__obj::__new()
{  hx::ObjectPtr< FileEventType_Impl__obj > result = new FileEventType_Impl__obj();
	result->__construct();
	return result;}

Dynamic FileEventType_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FileEventType_Impl__obj > result = new FileEventType_Impl__obj();
	result->__construct();
	return result;}

int FileEventType_Impl__obj::unknown;

int FileEventType_Impl__obj::modify;

int FileEventType_Impl__obj::remove;

int FileEventType_Impl__obj::create;

int FileEventType_Impl__obj::drop;


FileEventType_Impl__obj::FileEventType_Impl__obj()
{
}

Dynamic FileEventType_Impl__obj::__Field(const ::String &inName,bool inCallProp)
{
	return super::__Field(inName,inCallProp);
}

Dynamic FileEventType_Impl__obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void FileEventType_Impl__obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("unknown"),
	HX_CSTRING("modify"),
	HX_CSTRING("remove"),
	HX_CSTRING("create"),
	HX_CSTRING("drop"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FileEventType_Impl__obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FileEventType_Impl__obj::unknown,"unknown");
	HX_MARK_MEMBER_NAME(FileEventType_Impl__obj::modify,"modify");
	HX_MARK_MEMBER_NAME(FileEventType_Impl__obj::remove,"remove");
	HX_MARK_MEMBER_NAME(FileEventType_Impl__obj::create,"create");
	HX_MARK_MEMBER_NAME(FileEventType_Impl__obj::drop,"drop");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FileEventType_Impl__obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FileEventType_Impl__obj::unknown,"unknown");
	HX_VISIT_MEMBER_NAME(FileEventType_Impl__obj::modify,"modify");
	HX_VISIT_MEMBER_NAME(FileEventType_Impl__obj::remove,"remove");
	HX_VISIT_MEMBER_NAME(FileEventType_Impl__obj::create,"create");
	HX_VISIT_MEMBER_NAME(FileEventType_Impl__obj::drop,"drop");
};

#endif

Class FileEventType_Impl__obj::__mClass;

void FileEventType_Impl__obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("snow.types._Types.FileEventType_Impl_"), hx::TCanCast< FileEventType_Impl__obj> ,sStaticFields,sMemberFields,
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

void FileEventType_Impl__obj::__boot()
{
	unknown= (int)0;
	modify= (int)1;
	remove= (int)2;
	create= (int)3;
	drop= (int)4;
}

} // end namespace snow
} // end namespace types
} // end namespace _Types
