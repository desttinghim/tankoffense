#include <hxcpp.h>

#ifndef INCLUDED_Luxe
#include <Luxe.h>
#endif
#ifndef INCLUDED_luxe_Debug
#include <luxe/Debug.h>
#endif
#ifndef INCLUDED_luxe_structural_BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry
#include <luxe/structural/BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry.h>
#endif
#ifndef INCLUDED_phoenix_Batcher
#include <phoenix/Batcher.h>
#endif
#ifndef INCLUDED_phoenix_RenderPath
#include <phoenix/RenderPath.h>
#endif
#ifndef INCLUDED_phoenix_Renderer
#include <phoenix/Renderer.h>
#endif
#ifndef INCLUDED_phoenix_RendererStats
#include <phoenix/RendererStats.h>
#endif
namespace phoenix{

Void RenderPath_obj::__construct(::phoenix::Renderer _renderer)
{
HX_STACK_FRAME("phoenix.RenderPath","new",0x7c190cac,"phoenix.RenderPath.new","phoenix/RenderPath.hx",13,0x9e7f7fa3)
HX_STACK_THIS(this)
HX_STACK_ARG(_renderer,"_renderer")
{
	HX_STACK_LINE(13)
	this->renderer = _renderer;
}
;
	return null();
}

//RenderPath_obj::~RenderPath_obj() { }

Dynamic RenderPath_obj::__CreateEmpty() { return  new RenderPath_obj; }
hx::ObjectPtr< RenderPath_obj > RenderPath_obj::__new(::phoenix::Renderer _renderer)
{  hx::ObjectPtr< RenderPath_obj > result = new RenderPath_obj();
	result->__construct(_renderer);
	return result;}

Dynamic RenderPath_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< RenderPath_obj > result = new RenderPath_obj();
	result->__construct(inArgs[0]);
	return result;}

Void RenderPath_obj::render( Array< ::Dynamic > _batchers,::phoenix::RendererStats _stats){
{
		HX_STACK_FRAME("phoenix.RenderPath","render",0x4d8de68a,"phoenix.RenderPath.render","phoenix/RenderPath.hx",18,0x9e7f7fa3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_batchers,"_batchers")
		HX_STACK_ARG(_stats,"_stats")
		HX_STACK_LINE(18)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(18)
		while((true)){
			HX_STACK_LINE(18)
			if ((!(((_g < _batchers->length))))){
				HX_STACK_LINE(18)
				break;
			}
			HX_STACK_LINE(18)
			::phoenix::Batcher batch = _batchers->__get(_g).StaticCast< ::phoenix::Batcher >();		HX_STACK_VAR(batch,"batch");
			HX_STACK_LINE(18)
			++(_g);
			HX_STACK_LINE(19)
			if ((batch->enabled)){
				HX_STACK_LINE(22)
				::Luxe_obj::debug->start((HX_CSTRING("batch.") + batch->name),null());
				HX_STACK_LINE(25)
				batch->draw(null());
				HX_STACK_LINE(28)
				int _g1 = batch->geometry->size();		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(28)
				hx::AddEq(_stats->geometry_count,_g1);
				HX_STACK_LINE(29)
				hx::AddEq(_stats->dynamic_batched_count,batch->dynamic_batched_count);
				HX_STACK_LINE(30)
				hx::AddEq(_stats->static_batched_count,batch->static_batched_count);
				HX_STACK_LINE(31)
				hx::AddEq(_stats->visible_count,batch->visible_count);
				HX_STACK_LINE(32)
				hx::AddEq(_stats->draw_calls,batch->draw_calls);
				HX_STACK_LINE(33)
				hx::AddEq(_stats->vert_count,batch->vert_count);
				HX_STACK_LINE(37)
				::Luxe_obj::debug->end((HX_CSTRING("batch.") + batch->name));
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(RenderPath_obj,render,(void))


RenderPath_obj::RenderPath_obj()
{
}

void RenderPath_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(RenderPath);
	HX_MARK_MEMBER_NAME(renderer,"renderer");
	HX_MARK_END_CLASS();
}

void RenderPath_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(renderer,"renderer");
}

Dynamic RenderPath_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"render") ) { return render_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"renderer") ) { return renderer; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic RenderPath_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"renderer") ) { renderer=inValue.Cast< ::phoenix::Renderer >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void RenderPath_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("renderer"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::phoenix::Renderer*/ ,(int)offsetof(RenderPath_obj,renderer),HX_CSTRING("renderer")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("renderer"),
	HX_CSTRING("render"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(RenderPath_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(RenderPath_obj::__mClass,"__mClass");
};

#endif

Class RenderPath_obj::__mClass;

void RenderPath_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("phoenix.RenderPath"), hx::TCanCast< RenderPath_obj> ,sStaticFields,sMemberFields,
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

void RenderPath_obj::__boot()
{
}

} // end namespace phoenix
