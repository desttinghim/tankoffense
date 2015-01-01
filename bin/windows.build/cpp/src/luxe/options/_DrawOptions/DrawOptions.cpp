#include <hxcpp.h>

#ifndef INCLUDED_luxe_options__DrawOptions_DrawOptions
#include <luxe/options/_DrawOptions/DrawOptions.h>
#endif
namespace luxe{
namespace options{
namespace _DrawOptions{

Void DrawOptions_obj::__construct()
{
	return null();
}

//DrawOptions_obj::~DrawOptions_obj() { }

Dynamic DrawOptions_obj::__CreateEmpty() { return  new DrawOptions_obj; }
hx::ObjectPtr< DrawOptions_obj > DrawOptions_obj::__new()
{  hx::ObjectPtr< DrawOptions_obj > result = new DrawOptions_obj();
	result->__construct();
	return result;}

Dynamic DrawOptions_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< DrawOptions_obj > result = new DrawOptions_obj();
	result->__construct();
	return result;}


DrawOptions_obj::DrawOptions_obj()
{
}

Dynamic DrawOptions_obj::__Field(const ::String &inName,bool inCallProp)
{
	return super::__Field(inName,inCallProp);
}

Dynamic DrawOptions_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void DrawOptions_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DrawOptions_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DrawOptions_obj::__mClass,"__mClass");
};

#endif

Class DrawOptions_obj::__mClass;

void DrawOptions_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("luxe.options._DrawOptions.DrawOptions"), hx::TCanCast< DrawOptions_obj> ,sStaticFields,sMemberFields,
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

void DrawOptions_obj::__boot()
{
}

} // end namespace luxe
} // end namespace options
} // end namespace _DrawOptions
