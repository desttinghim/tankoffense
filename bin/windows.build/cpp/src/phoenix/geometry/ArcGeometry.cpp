#include <hxcpp.h>

#ifndef INCLUDED_phoenix_geometry_ArcGeometry
#include <phoenix/geometry/ArcGeometry.h>
#endif
#ifndef INCLUDED_phoenix_geometry_CircleGeometry
#include <phoenix/geometry/CircleGeometry.h>
#endif
#ifndef INCLUDED_phoenix_geometry_Geometry
#include <phoenix/geometry/Geometry.h>
#endif
#ifndef INCLUDED_phoenix_geometry_RingGeometry
#include <phoenix/geometry/RingGeometry.h>
#endif
#ifndef INCLUDED_phoenix_geometry_Vertex
#include <phoenix/geometry/Vertex.h>
#endif
namespace phoenix{
namespace geometry{

Void ArcGeometry_obj::__construct(Dynamic options)
{
HX_STACK_FRAME("phoenix.geometry.ArcGeometry","new",0xa02c36f9,"phoenix.geometry.ArcGeometry.new","phoenix/geometry/ArcGeometry.hx",15,0x6c6a0a77)
HX_STACK_THIS(this)
HX_STACK_ARG(options,"options")
{
	HX_STACK_LINE(17)
	super::__construct(options);
	HX_STACK_LINE(21)
	this->vertices->pop().StaticCast< ::phoenix::geometry::Vertex >();
	HX_STACK_LINE(22)
	this->vertices->pop().StaticCast< ::phoenix::geometry::Vertex >();
	HX_STACK_LINE(25)
	this->set_primitive_type((int)1);
}
;
	return null();
}

//ArcGeometry_obj::~ArcGeometry_obj() { }

Dynamic ArcGeometry_obj::__CreateEmpty() { return  new ArcGeometry_obj; }
hx::ObjectPtr< ArcGeometry_obj > ArcGeometry_obj::__new(Dynamic options)
{  hx::ObjectPtr< ArcGeometry_obj > result = new ArcGeometry_obj();
	result->__construct(options);
	return result;}

Dynamic ArcGeometry_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ArcGeometry_obj > result = new ArcGeometry_obj();
	result->__construct(inArgs[0]);
	return result;}


ArcGeometry_obj::ArcGeometry_obj()
{
}

Dynamic ArcGeometry_obj::__Field(const ::String &inName,bool inCallProp)
{
	return super::__Field(inName,inCallProp);
}

Dynamic ArcGeometry_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void ArcGeometry_obj::__GetFields(Array< ::String> &outFields)
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
	HX_MARK_MEMBER_NAME(ArcGeometry_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ArcGeometry_obj::__mClass,"__mClass");
};

#endif

Class ArcGeometry_obj::__mClass;

void ArcGeometry_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("phoenix.geometry.ArcGeometry"), hx::TCanCast< ArcGeometry_obj> ,sStaticFields,sMemberFields,
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

void ArcGeometry_obj::__boot()
{
}

} // end namespace phoenix
} // end namespace geometry
