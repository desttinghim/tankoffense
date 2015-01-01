#include <hxcpp.h>

#ifndef INCLUDED_phoenix__Batcher_PrimitiveType_Impl_
#include <phoenix/_Batcher/PrimitiveType_Impl_.h>
#endif
namespace phoenix{
namespace _Batcher{

Void PrimitiveType_Impl__obj::__construct()
{
	return null();
}

//PrimitiveType_Impl__obj::~PrimitiveType_Impl__obj() { }

Dynamic PrimitiveType_Impl__obj::__CreateEmpty() { return  new PrimitiveType_Impl__obj; }
hx::ObjectPtr< PrimitiveType_Impl__obj > PrimitiveType_Impl__obj::__new()
{  hx::ObjectPtr< PrimitiveType_Impl__obj > result = new PrimitiveType_Impl__obj();
	result->__construct();
	return result;}

Dynamic PrimitiveType_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< PrimitiveType_Impl__obj > result = new PrimitiveType_Impl__obj();
	result->__construct();
	return result;}

int PrimitiveType_Impl__obj::none;

int PrimitiveType_Impl__obj::line_strip;

int PrimitiveType_Impl__obj::line_loop;

int PrimitiveType_Impl__obj::lines;

int PrimitiveType_Impl__obj::triangle_strip;

int PrimitiveType_Impl__obj::triangles;

int PrimitiveType_Impl__obj::triangle_fan;

int PrimitiveType_Impl__obj::points;


PrimitiveType_Impl__obj::PrimitiveType_Impl__obj()
{
}

Dynamic PrimitiveType_Impl__obj::__Field(const ::String &inName,bool inCallProp)
{
	return super::__Field(inName,inCallProp);
}

Dynamic PrimitiveType_Impl__obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void PrimitiveType_Impl__obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("none"),
	HX_CSTRING("line_strip"),
	HX_CSTRING("line_loop"),
	HX_CSTRING("lines"),
	HX_CSTRING("triangle_strip"),
	HX_CSTRING("triangles"),
	HX_CSTRING("triangle_fan"),
	HX_CSTRING("points"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PrimitiveType_Impl__obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(PrimitiveType_Impl__obj::none,"none");
	HX_MARK_MEMBER_NAME(PrimitiveType_Impl__obj::line_strip,"line_strip");
	HX_MARK_MEMBER_NAME(PrimitiveType_Impl__obj::line_loop,"line_loop");
	HX_MARK_MEMBER_NAME(PrimitiveType_Impl__obj::lines,"lines");
	HX_MARK_MEMBER_NAME(PrimitiveType_Impl__obj::triangle_strip,"triangle_strip");
	HX_MARK_MEMBER_NAME(PrimitiveType_Impl__obj::triangles,"triangles");
	HX_MARK_MEMBER_NAME(PrimitiveType_Impl__obj::triangle_fan,"triangle_fan");
	HX_MARK_MEMBER_NAME(PrimitiveType_Impl__obj::points,"points");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PrimitiveType_Impl__obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(PrimitiveType_Impl__obj::none,"none");
	HX_VISIT_MEMBER_NAME(PrimitiveType_Impl__obj::line_strip,"line_strip");
	HX_VISIT_MEMBER_NAME(PrimitiveType_Impl__obj::line_loop,"line_loop");
	HX_VISIT_MEMBER_NAME(PrimitiveType_Impl__obj::lines,"lines");
	HX_VISIT_MEMBER_NAME(PrimitiveType_Impl__obj::triangle_strip,"triangle_strip");
	HX_VISIT_MEMBER_NAME(PrimitiveType_Impl__obj::triangles,"triangles");
	HX_VISIT_MEMBER_NAME(PrimitiveType_Impl__obj::triangle_fan,"triangle_fan");
	HX_VISIT_MEMBER_NAME(PrimitiveType_Impl__obj::points,"points");
};

#endif

Class PrimitiveType_Impl__obj::__mClass;

void PrimitiveType_Impl__obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("phoenix._Batcher.PrimitiveType_Impl_"), hx::TCanCast< PrimitiveType_Impl__obj> ,sStaticFields,sMemberFields,
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

void PrimitiveType_Impl__obj::__boot()
{
	none= (int)0;
	line_strip= (int)3;
	line_loop= (int)2;
	lines= (int)1;
	triangle_strip= (int)5;
	triangles= (int)4;
	triangle_fan= (int)6;
	points= (int)0;
}

} // end namespace phoenix
} // end namespace _Batcher
