#include <hxcpp.h>

#ifndef INCLUDED_luxe_resource_ResourceStats
#include <luxe/resource/ResourceStats.h>
#endif
namespace luxe{
namespace resource{

Void ResourceStats_obj::__construct()
{
HX_STACK_FRAME("luxe.resource.ResourceStats","new",0x4499a9db,"luxe.resource.ResourceStats.new","luxe/resource/ResourceManager.hx",12,0x658bebc7)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(24)
	this->unknown = (int)0;
	HX_STACK_LINE(23)
	this->sounds = (int)0;
	HX_STACK_LINE(22)
	this->datas = (int)0;
	HX_STACK_LINE(21)
	this->jsons = (int)0;
	HX_STACK_LINE(20)
	this->texts = (int)0;
	HX_STACK_LINE(19)
	this->shaders = (int)0;
	HX_STACK_LINE(18)
	this->render_textures = (int)0;
	HX_STACK_LINE(17)
	this->textures = (int)0;
	HX_STACK_LINE(16)
	this->fonts = (int)0;
	HX_STACK_LINE(15)
	this->resources = (int)0;
}
;
	return null();
}

//ResourceStats_obj::~ResourceStats_obj() { }

Dynamic ResourceStats_obj::__CreateEmpty() { return  new ResourceStats_obj; }
hx::ObjectPtr< ResourceStats_obj > ResourceStats_obj::__new()
{  hx::ObjectPtr< ResourceStats_obj > result = new ResourceStats_obj();
	result->__construct();
	return result;}

Dynamic ResourceStats_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ResourceStats_obj > result = new ResourceStats_obj();
	result->__construct();
	return result;}

::String ResourceStats_obj::toString( ){
	HX_STACK_FRAME("luxe.resource.ResourceStats","toString",0xf93bb951,"luxe.resource.ResourceStats.toString","luxe/resource/ResourceManager.hx",33,0x658bebc7)
	HX_STACK_THIS(this)
	HX_STACK_LINE(34)
	return (((((((((((((((((((((((((((((HX_CSTRING("Resource Statistics\n\ttotal resources : ") + this->resources) + HX_CSTRING("\n")) + HX_CSTRING("\ttextures : ")) + this->textures) + HX_CSTRING(" \n")) + HX_CSTRING("")) + HX_CSTRING("\trender textures : ")) + this->render_textures) + HX_CSTRING(" \n")) + HX_CSTRING("\tfonts : ")) + this->fonts) + HX_CSTRING("\n")) + HX_CSTRING("\tshaders : ")) + this->shaders) + HX_CSTRING("\n")) + HX_CSTRING("\tsounds : ")) + this->sounds) + HX_CSTRING("\n")) + HX_CSTRING("\ttext : ")) + this->texts) + HX_CSTRING("\n")) + HX_CSTRING("\tjson : ")) + this->jsons) + HX_CSTRING("\n")) + HX_CSTRING("\tdata : ")) + this->datas) + HX_CSTRING("\n")) + HX_CSTRING("\tunknown : ")) + this->unknown);
}


HX_DEFINE_DYNAMIC_FUNC0(ResourceStats_obj,toString,return )

Void ResourceStats_obj::reset( ){
{
		HX_STACK_FRAME("luxe.resource.ResourceStats","reset",0x2b53b80a,"luxe.resource.ResourceStats.reset","luxe/resource/ResourceManager.hx",48,0x658bebc7)
		HX_STACK_THIS(this)
		HX_STACK_LINE(50)
		this->resources = (int)0;
		HX_STACK_LINE(51)
		this->fonts = (int)0;
		HX_STACK_LINE(52)
		this->textures = (int)0;
		HX_STACK_LINE(53)
		this->render_textures = (int)0;
		HX_STACK_LINE(54)
		this->shaders = (int)0;
		HX_STACK_LINE(55)
		this->texts = (int)0;
		HX_STACK_LINE(56)
		this->jsons = (int)0;
		HX_STACK_LINE(57)
		this->datas = (int)0;
		HX_STACK_LINE(58)
		this->sounds = (int)0;
		HX_STACK_LINE(59)
		this->unknown = (int)0;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ResourceStats_obj,reset,(void))


ResourceStats_obj::ResourceStats_obj()
{
}

Dynamic ResourceStats_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"fonts") ) { return fonts; }
		if (HX_FIELD_EQ(inName,"texts") ) { return texts; }
		if (HX_FIELD_EQ(inName,"jsons") ) { return jsons; }
		if (HX_FIELD_EQ(inName,"datas") ) { return datas; }
		if (HX_FIELD_EQ(inName,"reset") ) { return reset_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"sounds") ) { return sounds; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"shaders") ) { return shaders; }
		if (HX_FIELD_EQ(inName,"unknown") ) { return unknown; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"textures") ) { return textures; }
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"resources") ) { return resources; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"render_textures") ) { return render_textures; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ResourceStats_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"fonts") ) { fonts=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"texts") ) { texts=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"jsons") ) { jsons=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"datas") ) { datas=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"sounds") ) { sounds=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"shaders") ) { shaders=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"unknown") ) { unknown=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"textures") ) { textures=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"resources") ) { resources=inValue.Cast< int >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"render_textures") ) { render_textures=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ResourceStats_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("resources"));
	outFields->push(HX_CSTRING("fonts"));
	outFields->push(HX_CSTRING("textures"));
	outFields->push(HX_CSTRING("render_textures"));
	outFields->push(HX_CSTRING("shaders"));
	outFields->push(HX_CSTRING("texts"));
	outFields->push(HX_CSTRING("jsons"));
	outFields->push(HX_CSTRING("datas"));
	outFields->push(HX_CSTRING("sounds"));
	outFields->push(HX_CSTRING("unknown"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(ResourceStats_obj,resources),HX_CSTRING("resources")},
	{hx::fsInt,(int)offsetof(ResourceStats_obj,fonts),HX_CSTRING("fonts")},
	{hx::fsInt,(int)offsetof(ResourceStats_obj,textures),HX_CSTRING("textures")},
	{hx::fsInt,(int)offsetof(ResourceStats_obj,render_textures),HX_CSTRING("render_textures")},
	{hx::fsInt,(int)offsetof(ResourceStats_obj,shaders),HX_CSTRING("shaders")},
	{hx::fsInt,(int)offsetof(ResourceStats_obj,texts),HX_CSTRING("texts")},
	{hx::fsInt,(int)offsetof(ResourceStats_obj,jsons),HX_CSTRING("jsons")},
	{hx::fsInt,(int)offsetof(ResourceStats_obj,datas),HX_CSTRING("datas")},
	{hx::fsInt,(int)offsetof(ResourceStats_obj,sounds),HX_CSTRING("sounds")},
	{hx::fsInt,(int)offsetof(ResourceStats_obj,unknown),HX_CSTRING("unknown")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("resources"),
	HX_CSTRING("fonts"),
	HX_CSTRING("textures"),
	HX_CSTRING("render_textures"),
	HX_CSTRING("shaders"),
	HX_CSTRING("texts"),
	HX_CSTRING("jsons"),
	HX_CSTRING("datas"),
	HX_CSTRING("sounds"),
	HX_CSTRING("unknown"),
	HX_CSTRING("toString"),
	HX_CSTRING("reset"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ResourceStats_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ResourceStats_obj::__mClass,"__mClass");
};

#endif

Class ResourceStats_obj::__mClass;

void ResourceStats_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("luxe.resource.ResourceStats"), hx::TCanCast< ResourceStats_obj> ,sStaticFields,sMemberFields,
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

void ResourceStats_obj::__boot()
{
}

} // end namespace luxe
} // end namespace resource
