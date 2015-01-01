#include <hxcpp.h>

#ifndef INCLUDED_luxe_TextEventType
#include <luxe/TextEventType.h>
#endif
namespace luxe{

::luxe::TextEventType TextEventType_obj::edit;

::luxe::TextEventType TextEventType_obj::input;

::luxe::TextEventType TextEventType_obj::unknown;

HX_DEFINE_CREATE_ENUM(TextEventType_obj)

int TextEventType_obj::__FindIndex(::String inName)
{
	if (inName==HX_CSTRING("edit")) return 1;
	if (inName==HX_CSTRING("input")) return 2;
	if (inName==HX_CSTRING("unknown")) return 0;
	return super::__FindIndex(inName);
}

int TextEventType_obj::__FindArgCount(::String inName)
{
	if (inName==HX_CSTRING("edit")) return 0;
	if (inName==HX_CSTRING("input")) return 0;
	if (inName==HX_CSTRING("unknown")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic TextEventType_obj::__Field(const ::String &inName,bool inCallProp)
{
	if (inName==HX_CSTRING("edit")) return edit;
	if (inName==HX_CSTRING("input")) return input;
	if (inName==HX_CSTRING("unknown")) return unknown;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_CSTRING("unknown"),
	HX_CSTRING("edit"),
	HX_CSTRING("input"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TextEventType_obj::edit,"edit");
	HX_MARK_MEMBER_NAME(TextEventType_obj::input,"input");
	HX_MARK_MEMBER_NAME(TextEventType_obj::unknown,"unknown");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TextEventType_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(TextEventType_obj::edit,"edit");
	HX_VISIT_MEMBER_NAME(TextEventType_obj::input,"input");
	HX_VISIT_MEMBER_NAME(TextEventType_obj::unknown,"unknown");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
Class TextEventType_obj::__mClass;

Dynamic __Create_TextEventType_obj() { return new TextEventType_obj; }

void TextEventType_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("luxe.TextEventType"), hx::TCanCast< TextEventType_obj >,sStaticFields,sMemberFields,
	&__Create_TextEventType_obj, &__Create,
	&super::__SGetClass(), &CreateTextEventType_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void TextEventType_obj::__boot()
{
hx::Static(edit) = hx::CreateEnum< TextEventType_obj >(HX_CSTRING("edit"),1);
hx::Static(input) = hx::CreateEnum< TextEventType_obj >(HX_CSTRING("input"),2);
hx::Static(unknown) = hx::CreateEnum< TextEventType_obj >(HX_CSTRING("unknown"),0);
}


} // end namespace luxe
