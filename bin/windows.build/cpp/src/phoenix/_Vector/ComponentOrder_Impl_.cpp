#include <hxcpp.h>

#ifndef INCLUDED_phoenix__Vector_ComponentOrder_Impl_
#include <phoenix/_Vector/ComponentOrder_Impl_.h>
#endif
namespace phoenix{
namespace _Vector{

Void ComponentOrder_Impl__obj::__construct()
{
	return null();
}

//ComponentOrder_Impl__obj::~ComponentOrder_Impl__obj() { }

Dynamic ComponentOrder_Impl__obj::__CreateEmpty() { return  new ComponentOrder_Impl__obj; }
hx::ObjectPtr< ComponentOrder_Impl__obj > ComponentOrder_Impl__obj::__new()
{  hx::ObjectPtr< ComponentOrder_Impl__obj > result = new ComponentOrder_Impl__obj();
	result->__construct();
	return result;}

Dynamic ComponentOrder_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ComponentOrder_Impl__obj > result = new ComponentOrder_Impl__obj();
	result->__construct();
	return result;}

int ComponentOrder_Impl__obj::XYZ;

int ComponentOrder_Impl__obj::YXZ;

int ComponentOrder_Impl__obj::ZXY;

int ComponentOrder_Impl__obj::ZYX;

int ComponentOrder_Impl__obj::YZX;

int ComponentOrder_Impl__obj::XZY;


ComponentOrder_Impl__obj::ComponentOrder_Impl__obj()
{
}

Dynamic ComponentOrder_Impl__obj::__Field(const ::String &inName,bool inCallProp)
{
	return super::__Field(inName,inCallProp);
}

Dynamic ComponentOrder_Impl__obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void ComponentOrder_Impl__obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("XYZ"),
	HX_CSTRING("YXZ"),
	HX_CSTRING("ZXY"),
	HX_CSTRING("ZYX"),
	HX_CSTRING("YZX"),
	HX_CSTRING("XZY"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ComponentOrder_Impl__obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ComponentOrder_Impl__obj::XYZ,"XYZ");
	HX_MARK_MEMBER_NAME(ComponentOrder_Impl__obj::YXZ,"YXZ");
	HX_MARK_MEMBER_NAME(ComponentOrder_Impl__obj::ZXY,"ZXY");
	HX_MARK_MEMBER_NAME(ComponentOrder_Impl__obj::ZYX,"ZYX");
	HX_MARK_MEMBER_NAME(ComponentOrder_Impl__obj::YZX,"YZX");
	HX_MARK_MEMBER_NAME(ComponentOrder_Impl__obj::XZY,"XZY");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ComponentOrder_Impl__obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ComponentOrder_Impl__obj::XYZ,"XYZ");
	HX_VISIT_MEMBER_NAME(ComponentOrder_Impl__obj::YXZ,"YXZ");
	HX_VISIT_MEMBER_NAME(ComponentOrder_Impl__obj::ZXY,"ZXY");
	HX_VISIT_MEMBER_NAME(ComponentOrder_Impl__obj::ZYX,"ZYX");
	HX_VISIT_MEMBER_NAME(ComponentOrder_Impl__obj::YZX,"YZX");
	HX_VISIT_MEMBER_NAME(ComponentOrder_Impl__obj::XZY,"XZY");
};

#endif

Class ComponentOrder_Impl__obj::__mClass;

void ComponentOrder_Impl__obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("phoenix._Vector.ComponentOrder_Impl_"), hx::TCanCast< ComponentOrder_Impl__obj> ,sStaticFields,sMemberFields,
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

void ComponentOrder_Impl__obj::__boot()
{
	XYZ= (int)0;
	YXZ= (int)1;
	ZXY= (int)2;
	ZYX= (int)3;
	YZX= (int)4;
	XZY= (int)5;
}

} // end namespace phoenix
} // end namespace _Vector
