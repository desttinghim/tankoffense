#include <hxcpp.h>

#ifndef INCLUDED_phoenix__BitmapFont_TextAlign_Impl_
#include <phoenix/_BitmapFont/TextAlign_Impl_.h>
#endif
namespace phoenix{
namespace _BitmapFont{

Void TextAlign_Impl__obj::__construct()
{
	return null();
}

//TextAlign_Impl__obj::~TextAlign_Impl__obj() { }

Dynamic TextAlign_Impl__obj::__CreateEmpty() { return  new TextAlign_Impl__obj; }
hx::ObjectPtr< TextAlign_Impl__obj > TextAlign_Impl__obj::__new()
{  hx::ObjectPtr< TextAlign_Impl__obj > result = new TextAlign_Impl__obj();
	result->__construct();
	return result;}

Dynamic TextAlign_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TextAlign_Impl__obj > result = new TextAlign_Impl__obj();
	result->__construct();
	return result;}

int TextAlign_Impl__obj::left;

int TextAlign_Impl__obj::right;

int TextAlign_Impl__obj::center;

int TextAlign_Impl__obj::top;

int TextAlign_Impl__obj::bottom;


TextAlign_Impl__obj::TextAlign_Impl__obj()
{
}

Dynamic TextAlign_Impl__obj::__Field(const ::String &inName,bool inCallProp)
{
	return super::__Field(inName,inCallProp);
}

Dynamic TextAlign_Impl__obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void TextAlign_Impl__obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("left"),
	HX_CSTRING("right"),
	HX_CSTRING("center"),
	HX_CSTRING("top"),
	HX_CSTRING("bottom"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TextAlign_Impl__obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(TextAlign_Impl__obj::left,"left");
	HX_MARK_MEMBER_NAME(TextAlign_Impl__obj::right,"right");
	HX_MARK_MEMBER_NAME(TextAlign_Impl__obj::center,"center");
	HX_MARK_MEMBER_NAME(TextAlign_Impl__obj::top,"top");
	HX_MARK_MEMBER_NAME(TextAlign_Impl__obj::bottom,"bottom");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TextAlign_Impl__obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(TextAlign_Impl__obj::left,"left");
	HX_VISIT_MEMBER_NAME(TextAlign_Impl__obj::right,"right");
	HX_VISIT_MEMBER_NAME(TextAlign_Impl__obj::center,"center");
	HX_VISIT_MEMBER_NAME(TextAlign_Impl__obj::top,"top");
	HX_VISIT_MEMBER_NAME(TextAlign_Impl__obj::bottom,"bottom");
};

#endif

Class TextAlign_Impl__obj::__mClass;

void TextAlign_Impl__obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("phoenix._BitmapFont.TextAlign_Impl_"), hx::TCanCast< TextAlign_Impl__obj> ,sStaticFields,sMemberFields,
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

void TextAlign_Impl__obj::__boot()
{
	left= (int)0;
	right= (int)1;
	center= (int)2;
	top= (int)3;
	bottom= (int)4;
}

} // end namespace phoenix
} // end namespace _BitmapFont
