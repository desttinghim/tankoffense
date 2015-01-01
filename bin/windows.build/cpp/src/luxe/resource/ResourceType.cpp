#include <hxcpp.h>

#ifndef INCLUDED_luxe_resource_ResourceType
#include <luxe/resource/ResourceType.h>
#endif
namespace luxe{
namespace resource{

::luxe::resource::ResourceType ResourceType_obj::data;

::luxe::resource::ResourceType ResourceType_obj::font;

::luxe::resource::ResourceType ResourceType_obj::json;

::luxe::resource::ResourceType ResourceType_obj::render_texture;

::luxe::resource::ResourceType ResourceType_obj::shader;

::luxe::resource::ResourceType ResourceType_obj::sound;

::luxe::resource::ResourceType ResourceType_obj::text;

::luxe::resource::ResourceType ResourceType_obj::texture;

::luxe::resource::ResourceType ResourceType_obj::unknown;

HX_DEFINE_CREATE_ENUM(ResourceType_obj)

int ResourceType_obj::__FindIndex(::String inName)
{
	if (inName==HX_CSTRING("data")) return 3;
	if (inName==HX_CSTRING("font")) return 7;
	if (inName==HX_CSTRING("json")) return 2;
	if (inName==HX_CSTRING("render_texture")) return 6;
	if (inName==HX_CSTRING("shader")) return 8;
	if (inName==HX_CSTRING("sound")) return 5;
	if (inName==HX_CSTRING("text")) return 1;
	if (inName==HX_CSTRING("texture")) return 4;
	if (inName==HX_CSTRING("unknown")) return 0;
	return super::__FindIndex(inName);
}

int ResourceType_obj::__FindArgCount(::String inName)
{
	if (inName==HX_CSTRING("data")) return 0;
	if (inName==HX_CSTRING("font")) return 0;
	if (inName==HX_CSTRING("json")) return 0;
	if (inName==HX_CSTRING("render_texture")) return 0;
	if (inName==HX_CSTRING("shader")) return 0;
	if (inName==HX_CSTRING("sound")) return 0;
	if (inName==HX_CSTRING("text")) return 0;
	if (inName==HX_CSTRING("texture")) return 0;
	if (inName==HX_CSTRING("unknown")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic ResourceType_obj::__Field(const ::String &inName,bool inCallProp)
{
	if (inName==HX_CSTRING("data")) return data;
	if (inName==HX_CSTRING("font")) return font;
	if (inName==HX_CSTRING("json")) return json;
	if (inName==HX_CSTRING("render_texture")) return render_texture;
	if (inName==HX_CSTRING("shader")) return shader;
	if (inName==HX_CSTRING("sound")) return sound;
	if (inName==HX_CSTRING("text")) return text;
	if (inName==HX_CSTRING("texture")) return texture;
	if (inName==HX_CSTRING("unknown")) return unknown;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_CSTRING("unknown"),
	HX_CSTRING("text"),
	HX_CSTRING("json"),
	HX_CSTRING("data"),
	HX_CSTRING("texture"),
	HX_CSTRING("sound"),
	HX_CSTRING("render_texture"),
	HX_CSTRING("font"),
	HX_CSTRING("shader"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ResourceType_obj::data,"data");
	HX_MARK_MEMBER_NAME(ResourceType_obj::font,"font");
	HX_MARK_MEMBER_NAME(ResourceType_obj::json,"json");
	HX_MARK_MEMBER_NAME(ResourceType_obj::render_texture,"render_texture");
	HX_MARK_MEMBER_NAME(ResourceType_obj::shader,"shader");
	HX_MARK_MEMBER_NAME(ResourceType_obj::sound,"sound");
	HX_MARK_MEMBER_NAME(ResourceType_obj::text,"text");
	HX_MARK_MEMBER_NAME(ResourceType_obj::texture,"texture");
	HX_MARK_MEMBER_NAME(ResourceType_obj::unknown,"unknown");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ResourceType_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ResourceType_obj::data,"data");
	HX_VISIT_MEMBER_NAME(ResourceType_obj::font,"font");
	HX_VISIT_MEMBER_NAME(ResourceType_obj::json,"json");
	HX_VISIT_MEMBER_NAME(ResourceType_obj::render_texture,"render_texture");
	HX_VISIT_MEMBER_NAME(ResourceType_obj::shader,"shader");
	HX_VISIT_MEMBER_NAME(ResourceType_obj::sound,"sound");
	HX_VISIT_MEMBER_NAME(ResourceType_obj::text,"text");
	HX_VISIT_MEMBER_NAME(ResourceType_obj::texture,"texture");
	HX_VISIT_MEMBER_NAME(ResourceType_obj::unknown,"unknown");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
Class ResourceType_obj::__mClass;

Dynamic __Create_ResourceType_obj() { return new ResourceType_obj; }

void ResourceType_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("luxe.resource.ResourceType"), hx::TCanCast< ResourceType_obj >,sStaticFields,sMemberFields,
	&__Create_ResourceType_obj, &__Create,
	&super::__SGetClass(), &CreateResourceType_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void ResourceType_obj::__boot()
{
hx::Static(data) = hx::CreateEnum< ResourceType_obj >(HX_CSTRING("data"),3);
hx::Static(font) = hx::CreateEnum< ResourceType_obj >(HX_CSTRING("font"),7);
hx::Static(json) = hx::CreateEnum< ResourceType_obj >(HX_CSTRING("json"),2);
hx::Static(render_texture) = hx::CreateEnum< ResourceType_obj >(HX_CSTRING("render_texture"),6);
hx::Static(shader) = hx::CreateEnum< ResourceType_obj >(HX_CSTRING("shader"),8);
hx::Static(sound) = hx::CreateEnum< ResourceType_obj >(HX_CSTRING("sound"),5);
hx::Static(text) = hx::CreateEnum< ResourceType_obj >(HX_CSTRING("text"),1);
hx::Static(texture) = hx::CreateEnum< ResourceType_obj >(HX_CSTRING("texture"),4);
hx::Static(unknown) = hx::CreateEnum< ResourceType_obj >(HX_CSTRING("unknown"),0);
}


} // end namespace luxe
} // end namespace resource
