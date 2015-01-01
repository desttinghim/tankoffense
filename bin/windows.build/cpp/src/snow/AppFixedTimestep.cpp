#include <hxcpp.h>

#ifndef INCLUDED_snow_App
#include <snow/App.h>
#endif
#ifndef INCLUDED_snow_AppFixedTimestep
#include <snow/AppFixedTimestep.h>
#endif
#ifndef INCLUDED_snow_CoreBinding
#include <snow/CoreBinding.h>
#endif
#ifndef INCLUDED_snow_Snow
#include <snow/Snow.h>
#endif
#ifndef INCLUDED_snow_platform_native_Core
#include <snow/platform/native/Core.h>
#endif
#ifndef INCLUDED_snow_utils_AbstractClass
#include <snow/utils/AbstractClass.h>
#endif
namespace snow{

Void AppFixedTimestep_obj::__construct()
{
HX_STACK_FRAME("snow.AppFixedTimestep","new",0x0797a4e9,"snow.AppFixedTimestep.new","snow/App.hx",166,0xf7b8a629)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(171)
	this->overflow = 0.0;
	HX_STACK_LINE(169)
	this->frame_time = 0.0167;
	HX_STACK_LINE(166)
	super::__construct();
}
;
	return null();
}

//AppFixedTimestep_obj::~AppFixedTimestep_obj() { }

Dynamic AppFixedTimestep_obj::__CreateEmpty() { return  new AppFixedTimestep_obj; }
hx::ObjectPtr< AppFixedTimestep_obj > AppFixedTimestep_obj::__new()
{  hx::ObjectPtr< AppFixedTimestep_obj > result = new AppFixedTimestep_obj();
	result->__construct();
	return result;}

Dynamic AppFixedTimestep_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< AppFixedTimestep_obj > result = new AppFixedTimestep_obj();
	result->__construct();
	return result;}

Void AppFixedTimestep_obj::on_internal_init( ){
{
		HX_STACK_FRAME("snow.AppFixedTimestep","on_internal_init",0x4d814609,"snow.AppFixedTimestep.on_internal_init","snow/App.hx",174,0xf7b8a629)
		HX_STACK_THIS(this)
		HX_STACK_LINE(176)
		this->super::on_internal_init();
		HX_STACK_LINE(178)
		this->frame_time = 0.016666666666666666;
		HX_STACK_LINE(179)
		Float _g = ::snow::Snow_obj::core->timestamp();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(179)
		this->last_frame_start = _g;
	}
return null();
}


Void AppFixedTimestep_obj::on_internal_update( ){
{
		HX_STACK_FRAME("snow.AppFixedTimestep","on_internal_update",0x949f0142,"snow.AppFixedTimestep.on_internal_update","snow/App.hx",186,0xf7b8a629)
		HX_STACK_THIS(this)
		HX_STACK_LINE(188)
		Float _g = ::snow::Snow_obj::core->timestamp();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(188)
		this->cur_frame_start = _g;
		HX_STACK_LINE(189)
		this->delta_time = (this->cur_frame_start - this->last_frame_start);
		HX_STACK_LINE(190)
		this->delta_sim = (this->delta_time * this->timescale);
		HX_STACK_LINE(192)
		if (((this->delta_sim > this->max_frame_time))){
			HX_STACK_LINE(193)
			this->delta_sim = this->max_frame_time;
		}
		HX_STACK_LINE(196)
		this->last_frame_start = this->cur_frame_start;
		HX_STACK_LINE(198)
		hx::AddEq(this->overflow,this->delta_sim);
		HX_STACK_LINE(200)
		while((true)){
			HX_STACK_LINE(200)
			if ((!(((this->overflow >= this->frame_time))))){
				HX_STACK_LINE(200)
				break;
			}
			HX_STACK_LINE(202)
			this->app->do_internal_update((this->frame_time * this->timescale));
			HX_STACK_LINE(204)
			hx::AddEq(this->current_time,(this->frame_time * this->timescale));
			HX_STACK_LINE(206)
			hx::SubEq(this->overflow,(this->frame_time * this->timescale));
		}
		HX_STACK_LINE(211)
		this->alpha = (Float(this->overflow) / Float(this->frame_time));
		HX_STACK_LINE(214)
		if (((this->render_rate != (int)0))){
			HX_STACK_LINE(215)
			Float _g1 = ::snow::Snow_obj::core->timestamp();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(215)
			if (((this->next_render < _g1))){
				HX_STACK_LINE(216)
				this->app->render();
				HX_STACK_LINE(217)
				hx::AddEq(this->next_render,this->render_rate);
			}
		}
	}
return null();
}



AppFixedTimestep_obj::AppFixedTimestep_obj()
{
}

Dynamic AppFixedTimestep_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"overflow") ) { return overflow; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"frame_time") ) { return frame_time; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"on_internal_init") ) { return on_internal_init_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"on_internal_update") ) { return on_internal_update_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic AppFixedTimestep_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"overflow") ) { overflow=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"frame_time") ) { frame_time=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void AppFixedTimestep_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("frame_time"));
	outFields->push(HX_CSTRING("overflow"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(AppFixedTimestep_obj,frame_time),HX_CSTRING("frame_time")},
	{hx::fsFloat,(int)offsetof(AppFixedTimestep_obj,overflow),HX_CSTRING("overflow")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("frame_time"),
	HX_CSTRING("overflow"),
	HX_CSTRING("on_internal_init"),
	HX_CSTRING("on_internal_update"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AppFixedTimestep_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AppFixedTimestep_obj::__mClass,"__mClass");
};

#endif

Class AppFixedTimestep_obj::__mClass;

void AppFixedTimestep_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("snow.AppFixedTimestep"), hx::TCanCast< AppFixedTimestep_obj> ,sStaticFields,sMemberFields,
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

void AppFixedTimestep_obj::__boot()
{
}

} // end namespace snow
