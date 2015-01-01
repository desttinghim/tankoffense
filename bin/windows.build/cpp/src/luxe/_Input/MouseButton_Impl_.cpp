#include <hxcpp.h>

#ifndef INCLUDED_luxe__Input_MouseButton_Impl_
#include <luxe/_Input/MouseButton_Impl_.h>
#endif
namespace luxe{
namespace _Input{

Void MouseButton_Impl__obj::__construct()
{
	return null();
}

//MouseButton_Impl__obj::~MouseButton_Impl__obj() { }

Dynamic MouseButton_Impl__obj::__CreateEmpty() { return  new MouseButton_Impl__obj; }
hx::ObjectPtr< MouseButton_Impl__obj > MouseButton_Impl__obj::__new()
{  hx::ObjectPtr< MouseButton_Impl__obj > result = new MouseButton_Impl__obj();
	result->__construct();
	return result;}

Dynamic MouseButton_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< MouseButton_Impl__obj > result = new MouseButton_Impl__obj();
	result->__construct();
	return result;}

int MouseButton_Impl__obj::none;

int MouseButton_Impl__obj::left;

int MouseButton_Impl__obj::middle;

int MouseButton_Impl__obj::right;

int MouseButton_Impl__obj::extra1;

int MouseButton_Impl__obj::extra2;


MouseButton_Impl__obj::MouseButton_Impl__obj()
{
}

Dynamic MouseButton_Impl__obj::__Field(const ::String &inName,bool inCallProp)
{
	return super::__Field(inName,inCallProp);
}

Dynamic MouseButton_Impl__obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void MouseButton_Impl__obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("none"),
	HX_CSTRING("left"),
	HX_CSTRING("middle"),
	HX_CSTRING("right"),
	HX_CSTRING("extra1"),
	HX_CSTRING("extra2"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MouseButton_Impl__obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(MouseButton_Impl__obj::none,"none");
	HX_MARK_MEMBER_NAME(MouseButton_Impl__obj::left,"left");
	HX_MARK_MEMBER_NAME(MouseButton_Impl__obj::middle,"middle");
	HX_MARK_MEMBER_NAME(MouseButton_Impl__obj::right,"right");
	HX_MARK_MEMBER_NAME(MouseButton_Impl__obj::extra1,"extra1");
	HX_MARK_MEMBER_NAME(MouseButton_Impl__obj::extra2,"extra2");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MouseButton_Impl__obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(MouseButton_Impl__obj::none,"none");
	HX_VISIT_MEMBER_NAME(MouseButton_Impl__obj::left,"left");
	HX_VISIT_MEMBER_NAME(MouseButton_Impl__obj::middle,"middle");
	HX_VISIT_MEMBER_NAME(MouseButton_Impl__obj::right,"right");
	HX_VISIT_MEMBER_NAME(MouseButton_Impl__obj::extra1,"extra1");
	HX_VISIT_MEMBER_NAME(MouseButton_Impl__obj::extra2,"extra2");
};

#endif

Class MouseButton_Impl__obj::__mClass;

void MouseButton_Impl__obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("luxe._Input.MouseButton_Impl_"), hx::TCanCast< MouseButton_Impl__obj> ,sStaticFields,sMemberFields,
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

void MouseButton_Impl__obj::__boot()
{
	none= (int)0;
	left= (int)1;
	middle= (int)2;
	right= (int)3;
	extra1= (int)4;
	extra2= (int)5;
}

} // end namespace luxe
} // end namespace _Input
