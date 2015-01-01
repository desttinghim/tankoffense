#include <hxcpp.h>

#ifndef INCLUDED_phoenix_RendererStats
#include <phoenix/RendererStats.h>
#endif
namespace phoenix{

Void RendererStats_obj::__construct()
{
HX_STACK_FRAME("phoenix.RendererStats","new",0x1cd0e80f,"phoenix.RendererStats.new","phoenix/Renderer.hx",385,0x3d4c7b7b)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(395)
	this->vert_count = (int)0;
	HX_STACK_LINE(394)
	this->group_count = (int)0;
	HX_STACK_LINE(393)
	this->draw_calls = (int)0;
	HX_STACK_LINE(392)
	this->visible_count = (int)0;
	HX_STACK_LINE(391)
	this->static_batched_count = (int)0;
	HX_STACK_LINE(390)
	this->dynamic_batched_count = (int)0;
	HX_STACK_LINE(389)
	this->geometry_count = (int)0;
	HX_STACK_LINE(388)
	this->batchers = (int)0;
}
;
	return null();
}

//RendererStats_obj::~RendererStats_obj() { }

Dynamic RendererStats_obj::__CreateEmpty() { return  new RendererStats_obj; }
hx::ObjectPtr< RendererStats_obj > RendererStats_obj::__new()
{  hx::ObjectPtr< RendererStats_obj > result = new RendererStats_obj();
	result->__construct();
	return result;}

Dynamic RendererStats_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< RendererStats_obj > result = new RendererStats_obj();
	result->__construct();
	return result;}

Void RendererStats_obj::reset( ){
{
		HX_STACK_FRAME("phoenix.RendererStats","reset",0xee7deb3e,"phoenix.RendererStats.reset","phoenix/Renderer.hx",397,0x3d4c7b7b)
		HX_STACK_THIS(this)
		HX_STACK_LINE(398)
		this->geometry_count = (int)0;
		HX_STACK_LINE(399)
		this->dynamic_batched_count = (int)0;
		HX_STACK_LINE(400)
		this->static_batched_count = (int)0;
		HX_STACK_LINE(401)
		this->visible_count = (int)0;
		HX_STACK_LINE(402)
		this->group_count = (int)0;
		HX_STACK_LINE(403)
		this->draw_calls = (int)0;
		HX_STACK_LINE(404)
		this->vert_count = (int)0;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(RendererStats_obj,reset,(void))

::String RendererStats_obj::toString( ){
	HX_STACK_FRAME("phoenix.RendererStats","toString",0xe4927e9d,"phoenix.RendererStats.toString","phoenix/Renderer.hx",408,0x3d4c7b7b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(409)
	return (((((((((((((((((((HX_CSTRING("Renderer Statistics\n\tbatcher count : ") + this->batchers) + HX_CSTRING("\n")) + HX_CSTRING("\ttotal geometry : ")) + this->geometry_count) + HX_CSTRING("\n")) + HX_CSTRING("\tvisible geometry : ")) + this->visible_count) + HX_CSTRING("\n")) + HX_CSTRING("\tdynamic batched geometry : ")) + this->dynamic_batched_count) + HX_CSTRING("\n")) + HX_CSTRING("\tstatic batched geometry : ")) + this->static_batched_count) + HX_CSTRING("\n")) + HX_CSTRING("\ttotal draw calls : ")) + this->draw_calls) + HX_CSTRING("\n")) + HX_CSTRING("\ttotal vertices : ")) + this->vert_count);
}


HX_DEFINE_DYNAMIC_FUNC0(RendererStats_obj,toString,return )


RendererStats_obj::RendererStats_obj()
{
}

Dynamic RendererStats_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"reset") ) { return reset_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"batchers") ) { return batchers; }
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"draw_calls") ) { return draw_calls; }
		if (HX_FIELD_EQ(inName,"vert_count") ) { return vert_count; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"group_count") ) { return group_count; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"visible_count") ) { return visible_count; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"geometry_count") ) { return geometry_count; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"static_batched_count") ) { return static_batched_count; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"dynamic_batched_count") ) { return dynamic_batched_count; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic RendererStats_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"batchers") ) { batchers=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"draw_calls") ) { draw_calls=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"vert_count") ) { vert_count=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"group_count") ) { group_count=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"visible_count") ) { visible_count=inValue.Cast< int >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"geometry_count") ) { geometry_count=inValue.Cast< int >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"static_batched_count") ) { static_batched_count=inValue.Cast< int >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"dynamic_batched_count") ) { dynamic_batched_count=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void RendererStats_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("batchers"));
	outFields->push(HX_CSTRING("geometry_count"));
	outFields->push(HX_CSTRING("dynamic_batched_count"));
	outFields->push(HX_CSTRING("static_batched_count"));
	outFields->push(HX_CSTRING("visible_count"));
	outFields->push(HX_CSTRING("draw_calls"));
	outFields->push(HX_CSTRING("group_count"));
	outFields->push(HX_CSTRING("vert_count"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(RendererStats_obj,batchers),HX_CSTRING("batchers")},
	{hx::fsInt,(int)offsetof(RendererStats_obj,geometry_count),HX_CSTRING("geometry_count")},
	{hx::fsInt,(int)offsetof(RendererStats_obj,dynamic_batched_count),HX_CSTRING("dynamic_batched_count")},
	{hx::fsInt,(int)offsetof(RendererStats_obj,static_batched_count),HX_CSTRING("static_batched_count")},
	{hx::fsInt,(int)offsetof(RendererStats_obj,visible_count),HX_CSTRING("visible_count")},
	{hx::fsInt,(int)offsetof(RendererStats_obj,draw_calls),HX_CSTRING("draw_calls")},
	{hx::fsInt,(int)offsetof(RendererStats_obj,group_count),HX_CSTRING("group_count")},
	{hx::fsInt,(int)offsetof(RendererStats_obj,vert_count),HX_CSTRING("vert_count")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("batchers"),
	HX_CSTRING("geometry_count"),
	HX_CSTRING("dynamic_batched_count"),
	HX_CSTRING("static_batched_count"),
	HX_CSTRING("visible_count"),
	HX_CSTRING("draw_calls"),
	HX_CSTRING("group_count"),
	HX_CSTRING("vert_count"),
	HX_CSTRING("reset"),
	HX_CSTRING("toString"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(RendererStats_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(RendererStats_obj::__mClass,"__mClass");
};

#endif

Class RendererStats_obj::__mClass;

void RendererStats_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("phoenix.RendererStats"), hx::TCanCast< RendererStats_obj> ,sStaticFields,sMemberFields,
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

void RendererStats_obj::__boot()
{
}

} // end namespace phoenix
