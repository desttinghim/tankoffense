#include <hxcpp.h>

#ifndef INCLUDED_haxe_ds_BalancedTree
#include <haxe/ds/BalancedTree.h>
#endif
#ifndef INCLUDED_snow_audio__Audio_AudioHandleMap
#include <snow/audio/_Audio/AudioHandleMap.h>
#endif
namespace snow{
namespace audio{
namespace _Audio{

Void AudioHandleMap_obj::__construct()
{
HX_STACK_FRAME("snow.audio._Audio.AudioHandleMap","new",0x706cdac4,"snow.audio._Audio.AudioHandleMap.new","snow/audio/Audio.hx",399,0x6fc470ad)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(399)
	super::__construct();
}
;
	return null();
}

//AudioHandleMap_obj::~AudioHandleMap_obj() { }

Dynamic AudioHandleMap_obj::__CreateEmpty() { return  new AudioHandleMap_obj; }
hx::ObjectPtr< AudioHandleMap_obj > AudioHandleMap_obj::__new()
{  hx::ObjectPtr< AudioHandleMap_obj > result = new AudioHandleMap_obj();
	result->__construct();
	return result;}

Dynamic AudioHandleMap_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< AudioHandleMap_obj > result = new AudioHandleMap_obj();
	result->__construct();
	return result;}

int AudioHandleMap_obj::compare( Dynamic _tmp_k1,Dynamic _tmp_k2){
	HX_STACK_FRAME("snow.audio._Audio.AudioHandleMap","compare",0x09e12509,"snow.audio._Audio.AudioHandleMap.compare","snow/audio/Audio.hx",401,0x6fc470ad)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_tmp_k1,"_tmp_k1")
	HX_STACK_ARG(_tmp_k2,"_tmp_k2")
	HX_STACK_LINE(402)
	Dynamic k1 = _tmp_k1;		HX_STACK_VAR(k1,"k1");
	HX_STACK_LINE(402)
	Dynamic k2 = _tmp_k2;		HX_STACK_VAR(k2,"k2");
	HX_STACK_LINE(402)
	if (((k1 == null()))){
		HX_STACK_LINE(402)
		return (int)1;
	}
	HX_STACK_LINE(403)
	if (((k2 == null()))){
		HX_STACK_LINE(403)
		return (int)1;
	}
	HX_STACK_LINE(404)
	if (((k1 == k2))){
		HX_STACK_LINE(404)
		return (int)0;
	}
	HX_STACK_LINE(405)
	if (((k1 < k2))){
		HX_STACK_LINE(405)
		return (int)-1;
	}
	HX_STACK_LINE(406)
	return (int)1;
}



AudioHandleMap_obj::AudioHandleMap_obj()
{
}

Dynamic AudioHandleMap_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"compare") ) { return compare_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic AudioHandleMap_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void AudioHandleMap_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("compare"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AudioHandleMap_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AudioHandleMap_obj::__mClass,"__mClass");
};

#endif

Class AudioHandleMap_obj::__mClass;

void AudioHandleMap_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("snow.audio._Audio.AudioHandleMap"), hx::TCanCast< AudioHandleMap_obj> ,sStaticFields,sMemberFields,
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

void AudioHandleMap_obj::__boot()
{
}

} // end namespace snow
} // end namespace audio
} // end namespace _Audio
