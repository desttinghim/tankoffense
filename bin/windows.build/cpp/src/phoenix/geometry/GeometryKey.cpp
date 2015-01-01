#include <hxcpp.h>

#ifndef INCLUDED_luxe_resource_Resource
#include <luxe/resource/Resource.h>
#endif
#ifndef INCLUDED_phoenix_Shader
#include <phoenix/Shader.h>
#endif
#ifndef INCLUDED_phoenix_Texture
#include <phoenix/Texture.h>
#endif
#ifndef INCLUDED_phoenix_geometry_GeometryKey
#include <phoenix/geometry/GeometryKey.h>
#endif
namespace phoenix{
namespace geometry{

Void GeometryKey_obj::__construct()
{
HX_STACK_FRAME("phoenix.geometry.GeometryKey","new",0xbf3d7a62,"phoenix.geometry.GeometryKey.new","phoenix/geometry/Geometry.hx",21,0xdab136cf)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(33)
	this->clip = false;
	HX_STACK_LINE(32)
	this->depth = (int)0;
	HX_STACK_LINE(31)
	this->group = (int)0;
	HX_STACK_LINE(27)
	this->uuid = HX_CSTRING("");
	HX_STACK_LINE(26)
	this->sequence = (int)0;
	HX_STACK_LINE(25)
	this->timestamp = (int)0;
}
;
	return null();
}

//GeometryKey_obj::~GeometryKey_obj() { }

Dynamic GeometryKey_obj::__CreateEmpty() { return  new GeometryKey_obj; }
hx::ObjectPtr< GeometryKey_obj > GeometryKey_obj::__new()
{  hx::ObjectPtr< GeometryKey_obj > result = new GeometryKey_obj();
	result->__construct();
	return result;}

Dynamic GeometryKey_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< GeometryKey_obj > result = new GeometryKey_obj();
	result->__construct();
	return result;}


GeometryKey_obj::GeometryKey_obj()
{
}

void GeometryKey_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(GeometryKey);
	HX_MARK_MEMBER_NAME(timestamp,"timestamp");
	HX_MARK_MEMBER_NAME(sequence,"sequence");
	HX_MARK_MEMBER_NAME(uuid,"uuid");
	HX_MARK_MEMBER_NAME(primitive_type,"primitive_type");
	HX_MARK_MEMBER_NAME(texture,"texture");
	HX_MARK_MEMBER_NAME(shader,"shader");
	HX_MARK_MEMBER_NAME(group,"group");
	HX_MARK_MEMBER_NAME(depth,"depth");
	HX_MARK_MEMBER_NAME(clip,"clip");
	HX_MARK_END_CLASS();
}

void GeometryKey_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(timestamp,"timestamp");
	HX_VISIT_MEMBER_NAME(sequence,"sequence");
	HX_VISIT_MEMBER_NAME(uuid,"uuid");
	HX_VISIT_MEMBER_NAME(primitive_type,"primitive_type");
	HX_VISIT_MEMBER_NAME(texture,"texture");
	HX_VISIT_MEMBER_NAME(shader,"shader");
	HX_VISIT_MEMBER_NAME(group,"group");
	HX_VISIT_MEMBER_NAME(depth,"depth");
	HX_VISIT_MEMBER_NAME(clip,"clip");
}

Dynamic GeometryKey_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"uuid") ) { return uuid; }
		if (HX_FIELD_EQ(inName,"clip") ) { return clip; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"group") ) { return group; }
		if (HX_FIELD_EQ(inName,"depth") ) { return depth; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"shader") ) { return shader; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"texture") ) { return texture; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"sequence") ) { return sequence; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"timestamp") ) { return timestamp; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"primitive_type") ) { return primitive_type; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic GeometryKey_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"uuid") ) { uuid=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"clip") ) { clip=inValue.Cast< bool >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"group") ) { group=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"depth") ) { depth=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"shader") ) { shader=inValue.Cast< ::phoenix::Shader >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"texture") ) { texture=inValue.Cast< ::phoenix::Texture >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"sequence") ) { sequence=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"timestamp") ) { timestamp=inValue.Cast< Float >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"primitive_type") ) { primitive_type=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void GeometryKey_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("timestamp"));
	outFields->push(HX_CSTRING("sequence"));
	outFields->push(HX_CSTRING("uuid"));
	outFields->push(HX_CSTRING("primitive_type"));
	outFields->push(HX_CSTRING("texture"));
	outFields->push(HX_CSTRING("shader"));
	outFields->push(HX_CSTRING("group"));
	outFields->push(HX_CSTRING("depth"));
	outFields->push(HX_CSTRING("clip"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(GeometryKey_obj,timestamp),HX_CSTRING("timestamp")},
	{hx::fsInt,(int)offsetof(GeometryKey_obj,sequence),HX_CSTRING("sequence")},
	{hx::fsString,(int)offsetof(GeometryKey_obj,uuid),HX_CSTRING("uuid")},
	{hx::fsInt,(int)offsetof(GeometryKey_obj,primitive_type),HX_CSTRING("primitive_type")},
	{hx::fsObject /*::phoenix::Texture*/ ,(int)offsetof(GeometryKey_obj,texture),HX_CSTRING("texture")},
	{hx::fsObject /*::phoenix::Shader*/ ,(int)offsetof(GeometryKey_obj,shader),HX_CSTRING("shader")},
	{hx::fsInt,(int)offsetof(GeometryKey_obj,group),HX_CSTRING("group")},
	{hx::fsFloat,(int)offsetof(GeometryKey_obj,depth),HX_CSTRING("depth")},
	{hx::fsBool,(int)offsetof(GeometryKey_obj,clip),HX_CSTRING("clip")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("timestamp"),
	HX_CSTRING("sequence"),
	HX_CSTRING("uuid"),
	HX_CSTRING("primitive_type"),
	HX_CSTRING("texture"),
	HX_CSTRING("shader"),
	HX_CSTRING("group"),
	HX_CSTRING("depth"),
	HX_CSTRING("clip"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GeometryKey_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GeometryKey_obj::__mClass,"__mClass");
};

#endif

Class GeometryKey_obj::__mClass;

void GeometryKey_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("phoenix.geometry.GeometryKey"), hx::TCanCast< GeometryKey_obj> ,sStaticFields,sMemberFields,
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

void GeometryKey_obj::__boot()
{
}

} // end namespace phoenix
} // end namespace geometry
