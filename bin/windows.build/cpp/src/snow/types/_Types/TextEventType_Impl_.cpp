#include <hxcpp.h>

#ifndef INCLUDED_snow_types__Types_TextEventType_Impl_
#include <snow/types/_Types/TextEventType_Impl_.h>
#endif
namespace snow{
namespace types{
namespace _Types{

Void TextEventType_Impl__obj::__construct()
{
	return null();
}

//TextEventType_Impl__obj::~TextEventType_Impl__obj() { }

Dynamic TextEventType_Impl__obj::__CreateEmpty() { return  new TextEventType_Impl__obj; }
hx::ObjectPtr< TextEventType_Impl__obj > TextEventType_Impl__obj::__new()
{  hx::ObjectPtr< TextEventType_Impl__obj > result = new TextEventType_Impl__obj();
	result->__construct();
	return result;}

Dynamic TextEventType_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TextEventType_Impl__obj > result = new TextEventType_Impl__obj();
	result->__construct();
	return result;}

int TextEventType_Impl__obj::unknown;

int TextEventType_Impl__obj::edit;

int TextEventType_Impl__obj::input;


TextEventType_Impl__obj::TextEventType_Impl__obj()
{
}

Dynamic TextEventType_Impl__obj::__Field(const ::String &inName,bool inCallProp)
{
	return super::__Field(inName,inCallProp);
}

Dynamic TextEventType_Impl__obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void TextEventType_Impl__obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("unknown"),
	HX_CSTRING("edit"),
	HX_CSTRING("input"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TextEventType_Impl__obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(TextEventType_Impl__obj::unknown,"unknown");
	HX_MARK_MEMBER_NAME(TextEventType_Impl__obj::edit,"edit");
	HX_MARK_MEMBER_NAME(TextEventType_Impl__obj::input,"input");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TextEventType_Impl__obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(TextEventType_Impl__obj::unknown,"unknown");
	HX_VISIT_MEMBER_NAME(TextEventType_Impl__obj::edit,"edit");
	HX_VISIT_MEMBER_NAME(TextEventType_Impl__obj::input,"input");
};

#endif

Class TextEventType_Impl__obj::__mClass;

void TextEventType_Impl__obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("snow.types._Types.TextEventType_Impl_"), hx::TCanCast< TextEventType_Impl__obj> ,sStaticFields,sMemberFields,
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

void TextEventType_Impl__obj::__boot()
{
	unknown= (int)0;
	edit= (int)1;
	input= (int)2;
}

} // end namespace snow
} // end namespace types
} // end namespace _Types
