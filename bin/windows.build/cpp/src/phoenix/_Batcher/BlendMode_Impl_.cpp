#include <hxcpp.h>

#ifndef INCLUDED_phoenix__Batcher_BlendMode_Impl_
#include <phoenix/_Batcher/BlendMode_Impl_.h>
#endif
namespace phoenix{
namespace _Batcher{

Void BlendMode_Impl__obj::__construct()
{
	return null();
}

//BlendMode_Impl__obj::~BlendMode_Impl__obj() { }

Dynamic BlendMode_Impl__obj::__CreateEmpty() { return  new BlendMode_Impl__obj; }
hx::ObjectPtr< BlendMode_Impl__obj > BlendMode_Impl__obj::__new()
{  hx::ObjectPtr< BlendMode_Impl__obj > result = new BlendMode_Impl__obj();
	result->__construct();
	return result;}

Dynamic BlendMode_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< BlendMode_Impl__obj > result = new BlendMode_Impl__obj();
	result->__construct();
	return result;}

int BlendMode_Impl__obj::zero;

int BlendMode_Impl__obj::one;

int BlendMode_Impl__obj::src_color;

int BlendMode_Impl__obj::one_minus_src_color;

int BlendMode_Impl__obj::src_alpha;

int BlendMode_Impl__obj::one_minus_src_alpha;

int BlendMode_Impl__obj::dst_alpha;

int BlendMode_Impl__obj::one_minus_dst_alpha;

int BlendMode_Impl__obj::dst_color;

int BlendMode_Impl__obj::one_minus_dst_color;

int BlendMode_Impl__obj::src_alpha_saturate;


BlendMode_Impl__obj::BlendMode_Impl__obj()
{
}

Dynamic BlendMode_Impl__obj::__Field(const ::String &inName,bool inCallProp)
{
	return super::__Field(inName,inCallProp);
}

Dynamic BlendMode_Impl__obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void BlendMode_Impl__obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("zero"),
	HX_CSTRING("one"),
	HX_CSTRING("src_color"),
	HX_CSTRING("one_minus_src_color"),
	HX_CSTRING("src_alpha"),
	HX_CSTRING("one_minus_src_alpha"),
	HX_CSTRING("dst_alpha"),
	HX_CSTRING("one_minus_dst_alpha"),
	HX_CSTRING("dst_color"),
	HX_CSTRING("one_minus_dst_color"),
	HX_CSTRING("src_alpha_saturate"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BlendMode_Impl__obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(BlendMode_Impl__obj::zero,"zero");
	HX_MARK_MEMBER_NAME(BlendMode_Impl__obj::one,"one");
	HX_MARK_MEMBER_NAME(BlendMode_Impl__obj::src_color,"src_color");
	HX_MARK_MEMBER_NAME(BlendMode_Impl__obj::one_minus_src_color,"one_minus_src_color");
	HX_MARK_MEMBER_NAME(BlendMode_Impl__obj::src_alpha,"src_alpha");
	HX_MARK_MEMBER_NAME(BlendMode_Impl__obj::one_minus_src_alpha,"one_minus_src_alpha");
	HX_MARK_MEMBER_NAME(BlendMode_Impl__obj::dst_alpha,"dst_alpha");
	HX_MARK_MEMBER_NAME(BlendMode_Impl__obj::one_minus_dst_alpha,"one_minus_dst_alpha");
	HX_MARK_MEMBER_NAME(BlendMode_Impl__obj::dst_color,"dst_color");
	HX_MARK_MEMBER_NAME(BlendMode_Impl__obj::one_minus_dst_color,"one_minus_dst_color");
	HX_MARK_MEMBER_NAME(BlendMode_Impl__obj::src_alpha_saturate,"src_alpha_saturate");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BlendMode_Impl__obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(BlendMode_Impl__obj::zero,"zero");
	HX_VISIT_MEMBER_NAME(BlendMode_Impl__obj::one,"one");
	HX_VISIT_MEMBER_NAME(BlendMode_Impl__obj::src_color,"src_color");
	HX_VISIT_MEMBER_NAME(BlendMode_Impl__obj::one_minus_src_color,"one_minus_src_color");
	HX_VISIT_MEMBER_NAME(BlendMode_Impl__obj::src_alpha,"src_alpha");
	HX_VISIT_MEMBER_NAME(BlendMode_Impl__obj::one_minus_src_alpha,"one_minus_src_alpha");
	HX_VISIT_MEMBER_NAME(BlendMode_Impl__obj::dst_alpha,"dst_alpha");
	HX_VISIT_MEMBER_NAME(BlendMode_Impl__obj::one_minus_dst_alpha,"one_minus_dst_alpha");
	HX_VISIT_MEMBER_NAME(BlendMode_Impl__obj::dst_color,"dst_color");
	HX_VISIT_MEMBER_NAME(BlendMode_Impl__obj::one_minus_dst_color,"one_minus_dst_color");
	HX_VISIT_MEMBER_NAME(BlendMode_Impl__obj::src_alpha_saturate,"src_alpha_saturate");
};

#endif

Class BlendMode_Impl__obj::__mClass;

void BlendMode_Impl__obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("phoenix._Batcher.BlendMode_Impl_"), hx::TCanCast< BlendMode_Impl__obj> ,sStaticFields,sMemberFields,
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

void BlendMode_Impl__obj::__boot()
{
	zero= (int)0;
	one= (int)1;
	src_color= (int)768;
	one_minus_src_color= (int)769;
	src_alpha= (int)770;
	one_minus_src_alpha= (int)771;
	dst_alpha= (int)772;
	one_minus_dst_alpha= (int)773;
	dst_color= (int)774;
	one_minus_dst_color= (int)775;
	src_alpha_saturate= (int)776;
}

} // end namespace phoenix
} // end namespace _Batcher
