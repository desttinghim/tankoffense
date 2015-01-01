#include <hxcpp.h>

#ifndef INCLUDED_luxe_structural_BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry
#include <luxe/structural/BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry.h>
#endif
#ifndef INCLUDED_phoenix_geometry_Geometry
#include <phoenix/geometry/Geometry.h>
#endif
#ifndef INCLUDED_phoenix_geometry_GeometryKey
#include <phoenix/geometry/GeometryKey.h>
#endif
namespace luxe{
namespace structural{

Void BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj::__construct(::phoenix::geometry::GeometryKey _key,::phoenix::geometry::Geometry _value,int _node_count,bool _color)
{
HX_STACK_FRAME("luxe.structural.BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry","new",0x77b31a6d,"luxe.structural.BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry.new","luxe/structural/BalancedBST.hx",716,0xa0b365fc)
HX_STACK_THIS(this)
HX_STACK_ARG(_key,"_key")
HX_STACK_ARG(_value,"_value")
HX_STACK_ARG(_node_count,"_node_count")
HX_STACK_ARG(_color,"_color")
{
	HX_STACK_LINE(718)
	this->left = null();
	HX_STACK_LINE(719)
	this->right = null();
	HX_STACK_LINE(721)
	this->key = _key;
	HX_STACK_LINE(722)
	this->value = _value;
	HX_STACK_LINE(724)
	this->nodecount = _node_count;
	HX_STACK_LINE(725)
	this->color = _color;
}
;
	return null();
}

//BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj::~BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj() { }

Dynamic BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj::__CreateEmpty() { return  new BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj; }
hx::ObjectPtr< BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj > BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj::__new(::phoenix::geometry::GeometryKey _key,::phoenix::geometry::Geometry _value,int _node_count,bool _color)
{  hx::ObjectPtr< BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj > result = new BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj();
	result->__construct(_key,_value,_node_count,_color);
	return result;}

Dynamic BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj > result = new BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return result;}


BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj()
{
}

void BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry);
	HX_MARK_MEMBER_NAME(left,"left");
	HX_MARK_MEMBER_NAME(right,"right");
	HX_MARK_MEMBER_NAME(nodecount,"nodecount");
	HX_MARK_MEMBER_NAME(color,"color");
	HX_MARK_MEMBER_NAME(key,"key");
	HX_MARK_MEMBER_NAME(value,"value");
	HX_MARK_END_CLASS();
}

void BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(left,"left");
	HX_VISIT_MEMBER_NAME(right,"right");
	HX_VISIT_MEMBER_NAME(nodecount,"nodecount");
	HX_VISIT_MEMBER_NAME(color,"color");
	HX_VISIT_MEMBER_NAME(key,"key");
	HX_VISIT_MEMBER_NAME(value,"value");
}

Dynamic BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"key") ) { return key; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"left") ) { return left; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"right") ) { return right; }
		if (HX_FIELD_EQ(inName,"color") ) { return color; }
		if (HX_FIELD_EQ(inName,"value") ) { return value; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"nodecount") ) { return nodecount; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"key") ) { key=inValue.Cast< ::phoenix::geometry::GeometryKey >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"left") ) { left=inValue.Cast< ::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"right") ) { right=inValue.Cast< ::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry >(); return inValue; }
		if (HX_FIELD_EQ(inName,"color") ) { color=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"value") ) { value=inValue.Cast< ::phoenix::geometry::Geometry >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"nodecount") ) { nodecount=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("left"));
	outFields->push(HX_CSTRING("right"));
	outFields->push(HX_CSTRING("nodecount"));
	outFields->push(HX_CSTRING("color"));
	outFields->push(HX_CSTRING("key"));
	outFields->push(HX_CSTRING("value"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry*/ ,(int)offsetof(BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj,left),HX_CSTRING("left")},
	{hx::fsObject /*::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry*/ ,(int)offsetof(BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj,right),HX_CSTRING("right")},
	{hx::fsInt,(int)offsetof(BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj,nodecount),HX_CSTRING("nodecount")},
	{hx::fsBool,(int)offsetof(BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj,color),HX_CSTRING("color")},
	{hx::fsObject /*::phoenix::geometry::GeometryKey*/ ,(int)offsetof(BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj,key),HX_CSTRING("key")},
	{hx::fsObject /*::phoenix::geometry::Geometry*/ ,(int)offsetof(BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj,value),HX_CSTRING("value")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("left"),
	HX_CSTRING("right"),
	HX_CSTRING("nodecount"),
	HX_CSTRING("color"),
	HX_CSTRING("key"),
	HX_CSTRING("value"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj::__mClass,"__mClass");
};

#endif

Class BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj::__mClass;

void BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("luxe.structural.BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry"), hx::TCanCast< BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj> ,sStaticFields,sMemberFields,
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

void BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj::__boot()
{
}

} // end namespace luxe
} // end namespace structural
