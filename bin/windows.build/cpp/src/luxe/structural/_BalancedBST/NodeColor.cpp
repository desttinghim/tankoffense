#include <hxcpp.h>

#ifndef INCLUDED_luxe_structural__BalancedBST_NodeColor
#include <luxe/structural/_BalancedBST/NodeColor.h>
#endif
namespace luxe{
namespace structural{
namespace _BalancedBST{

Void NodeColor_obj::__construct()
{
	return null();
}

//NodeColor_obj::~NodeColor_obj() { }

Dynamic NodeColor_obj::__CreateEmpty() { return  new NodeColor_obj; }
hx::ObjectPtr< NodeColor_obj > NodeColor_obj::__new()
{  hx::ObjectPtr< NodeColor_obj > result = new NodeColor_obj();
	result->__construct();
	return result;}

Dynamic NodeColor_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< NodeColor_obj > result = new NodeColor_obj();
	result->__construct();
	return result;}

bool NodeColor_obj::red;

bool NodeColor_obj::black;


NodeColor_obj::NodeColor_obj()
{
}

Dynamic NodeColor_obj::__Field(const ::String &inName,bool inCallProp)
{
	return super::__Field(inName,inCallProp);
}

Dynamic NodeColor_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void NodeColor_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("red"),
	HX_CSTRING("black"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(NodeColor_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(NodeColor_obj::red,"red");
	HX_MARK_MEMBER_NAME(NodeColor_obj::black,"black");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(NodeColor_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(NodeColor_obj::red,"red");
	HX_VISIT_MEMBER_NAME(NodeColor_obj::black,"black");
};

#endif

Class NodeColor_obj::__mClass;

void NodeColor_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("luxe.structural._BalancedBST.NodeColor"), hx::TCanCast< NodeColor_obj> ,sStaticFields,sMemberFields,
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

void NodeColor_obj::__boot()
{
	red= true;
	black= false;
}

} // end namespace luxe
} // end namespace structural
} // end namespace _BalancedBST
