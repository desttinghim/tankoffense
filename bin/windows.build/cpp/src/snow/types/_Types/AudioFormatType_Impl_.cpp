#include <hxcpp.h>

#ifndef INCLUDED_snow_types__Types_AudioFormatType_Impl_
#include <snow/types/_Types/AudioFormatType_Impl_.h>
#endif
namespace snow{
namespace types{
namespace _Types{

Void AudioFormatType_Impl__obj::__construct()
{
	return null();
}

//AudioFormatType_Impl__obj::~AudioFormatType_Impl__obj() { }

Dynamic AudioFormatType_Impl__obj::__CreateEmpty() { return  new AudioFormatType_Impl__obj; }
hx::ObjectPtr< AudioFormatType_Impl__obj > AudioFormatType_Impl__obj::__new()
{  hx::ObjectPtr< AudioFormatType_Impl__obj > result = new AudioFormatType_Impl__obj();
	result->__construct();
	return result;}

Dynamic AudioFormatType_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< AudioFormatType_Impl__obj > result = new AudioFormatType_Impl__obj();
	result->__construct();
	return result;}

int AudioFormatType_Impl__obj::unknown;

int AudioFormatType_Impl__obj::ogg;

int AudioFormatType_Impl__obj::wav;

int AudioFormatType_Impl__obj::pcm;


AudioFormatType_Impl__obj::AudioFormatType_Impl__obj()
{
}

Dynamic AudioFormatType_Impl__obj::__Field(const ::String &inName,bool inCallProp)
{
	return super::__Field(inName,inCallProp);
}

Dynamic AudioFormatType_Impl__obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void AudioFormatType_Impl__obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("unknown"),
	HX_CSTRING("ogg"),
	HX_CSTRING("wav"),
	HX_CSTRING("pcm"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AudioFormatType_Impl__obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(AudioFormatType_Impl__obj::unknown,"unknown");
	HX_MARK_MEMBER_NAME(AudioFormatType_Impl__obj::ogg,"ogg");
	HX_MARK_MEMBER_NAME(AudioFormatType_Impl__obj::wav,"wav");
	HX_MARK_MEMBER_NAME(AudioFormatType_Impl__obj::pcm,"pcm");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AudioFormatType_Impl__obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(AudioFormatType_Impl__obj::unknown,"unknown");
	HX_VISIT_MEMBER_NAME(AudioFormatType_Impl__obj::ogg,"ogg");
	HX_VISIT_MEMBER_NAME(AudioFormatType_Impl__obj::wav,"wav");
	HX_VISIT_MEMBER_NAME(AudioFormatType_Impl__obj::pcm,"pcm");
};

#endif

Class AudioFormatType_Impl__obj::__mClass;

void AudioFormatType_Impl__obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("snow.types._Types.AudioFormatType_Impl_"), hx::TCanCast< AudioFormatType_Impl__obj> ,sStaticFields,sMemberFields,
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

void AudioFormatType_Impl__obj::__boot()
{
	unknown= (int)0;
	ogg= (int)1;
	wav= (int)2;
	pcm= (int)3;
}

} // end namespace snow
} // end namespace types
} // end namespace _Types
