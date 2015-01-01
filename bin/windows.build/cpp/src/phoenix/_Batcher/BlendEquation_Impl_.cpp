#include <hxcpp.h>

#ifndef INCLUDED_phoenix__Batcher_BlendEquation_Impl_
#include <phoenix/_Batcher/BlendEquation_Impl_.h>
#endif
namespace phoenix{
namespace _Batcher{

Void BlendEquation_Impl__obj::__construct()
{
	return null();
}

//BlendEquation_Impl__obj::~BlendEquation_Impl__obj() { }

Dynamic BlendEquation_Impl__obj::__CreateEmpty() { return  new BlendEquation_Impl__obj; }
hx::ObjectPtr< BlendEquation_Impl__obj > BlendEquation_Impl__obj::__new()
{  hx::ObjectPtr< BlendEquation_Impl__obj > result = new BlendEquation_Impl__obj();
	result->__construct();
	return result;}

Dynamic BlendEquation_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< BlendEquation_Impl__obj > result = new BlendEquation_Impl__obj();
	result->__construct();
	return result;}

int BlendEquation_Impl__obj::add;

int BlendEquation_Impl__obj::subtract;

int BlendEquation_Impl__obj::reverse_subtract;


BlendEquation_Impl__obj::BlendEquation_Impl__obj()
{
}

Dynamic BlendEquation_Impl__obj::__Field(const ::String &inName,bool inCallProp)
{
	return super::__Field(inName,inCallProp);
}

Dynamic BlendEquation_Impl__obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void BlendEquation_Impl__obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("add"),
	HX_CSTRING("subtract"),
	HX_CSTRING("reverse_subtract"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BlendEquation_Impl__obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(BlendEquation_Impl__obj::add,"add");
	HX_MARK_MEMBER_NAME(BlendEquation_Impl__obj::subtract,"subtract");
	HX_MARK_MEMBER_NAME(BlendEquation_Impl__obj::reverse_subtract,"reverse_subtract");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BlendEquation_Impl__obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(BlendEquation_Impl__obj::add,"add");
	HX_VISIT_MEMBER_NAME(BlendEquation_Impl__obj::subtract,"subtract");
	HX_VISIT_MEMBER_NAME(BlendEquation_Impl__obj::reverse_subtract,"reverse_subtract");
};

#endif

Class BlendEquation_Impl__obj::__mClass;

void BlendEquation_Impl__obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("phoenix._Batcher.BlendEquation_Impl_"), hx::TCanCast< BlendEquation_Impl__obj> ,sStaticFields,sMemberFields,
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

void BlendEquation_Impl__obj::__boot()
{
	add= (int)32774;
	subtract= (int)32778;
	reverse_subtract= (int)32779;
}

} // end namespace phoenix
} // end namespace _Batcher
