#include <hxcpp.h>

#ifndef INCLUDED_luxe__Core_CoreThreadRequest
#include <luxe/_Core/CoreThreadRequest.h>
#endif
namespace luxe{
namespace _Core{

::luxe::_Core::CoreThreadRequest CoreThreadRequest_obj::load_shader;

::luxe::_Core::CoreThreadRequest CoreThreadRequest_obj::load_texture;

HX_DEFINE_CREATE_ENUM(CoreThreadRequest_obj)

int CoreThreadRequest_obj::__FindIndex(::String inName)
{
	if (inName==HX_CSTRING("load_shader")) return 1;
	if (inName==HX_CSTRING("load_texture")) return 0;
	return super::__FindIndex(inName);
}

int CoreThreadRequest_obj::__FindArgCount(::String inName)
{
	if (inName==HX_CSTRING("load_shader")) return 0;
	if (inName==HX_CSTRING("load_texture")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic CoreThreadRequest_obj::__Field(const ::String &inName,bool inCallProp)
{
	if (inName==HX_CSTRING("load_shader")) return load_shader;
	if (inName==HX_CSTRING("load_texture")) return load_texture;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_CSTRING("load_texture"),
	HX_CSTRING("load_shader"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CoreThreadRequest_obj::load_shader,"load_shader");
	HX_MARK_MEMBER_NAME(CoreThreadRequest_obj::load_texture,"load_texture");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CoreThreadRequest_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(CoreThreadRequest_obj::load_shader,"load_shader");
	HX_VISIT_MEMBER_NAME(CoreThreadRequest_obj::load_texture,"load_texture");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
Class CoreThreadRequest_obj::__mClass;

Dynamic __Create_CoreThreadRequest_obj() { return new CoreThreadRequest_obj; }

void CoreThreadRequest_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("luxe._Core.CoreThreadRequest"), hx::TCanCast< CoreThreadRequest_obj >,sStaticFields,sMemberFields,
	&__Create_CoreThreadRequest_obj, &__Create,
	&super::__SGetClass(), &CreateCoreThreadRequest_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void CoreThreadRequest_obj::__boot()
{
hx::Static(load_shader) = hx::CreateEnum< CoreThreadRequest_obj >(HX_CSTRING("load_shader"),1);
hx::Static(load_texture) = hx::CreateEnum< CoreThreadRequest_obj >(HX_CSTRING("load_texture"),0);
}


} // end namespace luxe
} // end namespace _Core
