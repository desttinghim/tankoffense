#include <hxcpp.h>

#ifndef INCLUDED_phoenix__Shader_UniformType_Impl_
#include <phoenix/_Shader/UniformType_Impl_.h>
#endif
namespace phoenix{
namespace _Shader{

Void UniformType_Impl__obj::__construct()
{
	return null();
}

//UniformType_Impl__obj::~UniformType_Impl__obj() { }

Dynamic UniformType_Impl__obj::__CreateEmpty() { return  new UniformType_Impl__obj; }
hx::ObjectPtr< UniformType_Impl__obj > UniformType_Impl__obj::__new()
{  hx::ObjectPtr< UniformType_Impl__obj > result = new UniformType_Impl__obj();
	result->__construct();
	return result;}

Dynamic UniformType_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< UniformType_Impl__obj > result = new UniformType_Impl__obj();
	result->__construct();
	return result;}

int UniformType_Impl__obj::unknown;

int UniformType_Impl__obj::_int;

int UniformType_Impl__obj::_float;

int UniformType_Impl__obj::vector2;

int UniformType_Impl__obj::vector3;

int UniformType_Impl__obj::vector4;

int UniformType_Impl__obj::color;

int UniformType_Impl__obj::texture;


UniformType_Impl__obj::UniformType_Impl__obj()
{
}

Dynamic UniformType_Impl__obj::__Field(const ::String &inName,bool inCallProp)
{
	return super::__Field(inName,inCallProp);
}

Dynamic UniformType_Impl__obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void UniformType_Impl__obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("unknown"),
	HX_CSTRING("int"),
	HX_CSTRING("float"),
	HX_CSTRING("vector2"),
	HX_CSTRING("vector3"),
	HX_CSTRING("vector4"),
	HX_CSTRING("color"),
	HX_CSTRING("texture"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(UniformType_Impl__obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(UniformType_Impl__obj::unknown,"unknown");
	HX_MARK_MEMBER_NAME(UniformType_Impl__obj::_int,"int");
	HX_MARK_MEMBER_NAME(UniformType_Impl__obj::_float,"float");
	HX_MARK_MEMBER_NAME(UniformType_Impl__obj::vector2,"vector2");
	HX_MARK_MEMBER_NAME(UniformType_Impl__obj::vector3,"vector3");
	HX_MARK_MEMBER_NAME(UniformType_Impl__obj::vector4,"vector4");
	HX_MARK_MEMBER_NAME(UniformType_Impl__obj::color,"color");
	HX_MARK_MEMBER_NAME(UniformType_Impl__obj::texture,"texture");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(UniformType_Impl__obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(UniformType_Impl__obj::unknown,"unknown");
	HX_VISIT_MEMBER_NAME(UniformType_Impl__obj::_int,"int");
	HX_VISIT_MEMBER_NAME(UniformType_Impl__obj::_float,"float");
	HX_VISIT_MEMBER_NAME(UniformType_Impl__obj::vector2,"vector2");
	HX_VISIT_MEMBER_NAME(UniformType_Impl__obj::vector3,"vector3");
	HX_VISIT_MEMBER_NAME(UniformType_Impl__obj::vector4,"vector4");
	HX_VISIT_MEMBER_NAME(UniformType_Impl__obj::color,"color");
	HX_VISIT_MEMBER_NAME(UniformType_Impl__obj::texture,"texture");
};

#endif

Class UniformType_Impl__obj::__mClass;

void UniformType_Impl__obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("phoenix._Shader.UniformType_Impl_"), hx::TCanCast< UniformType_Impl__obj> ,sStaticFields,sMemberFields,
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

void UniformType_Impl__obj::__boot()
{
	unknown= (int)0;
	_int= (int)1;
	_float= (int)2;
	vector2= (int)3;
	vector3= (int)4;
	vector4= (int)5;
	color= (int)6;
	texture= (int)7;
}

} // end namespace phoenix
} // end namespace _Shader
