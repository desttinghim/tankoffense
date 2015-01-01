#include <hxcpp.h>

#ifndef INCLUDED_snow_platform_native_audio_openal_AL
#include <snow/platform/native/audio/openal/AL.h>
#endif
#ifndef INCLUDED_snow_platform_native_audio_openal_OpenALHelper
#include <snow/platform/native/audio/openal/OpenALHelper.h>
#endif
namespace snow{
namespace platform{
namespace native{
namespace audio{
namespace openal{

Void OpenALHelper_obj::__construct()
{
	return null();
}

//OpenALHelper_obj::~OpenALHelper_obj() { }

Dynamic OpenALHelper_obj::__CreateEmpty() { return  new OpenALHelper_obj; }
hx::ObjectPtr< OpenALHelper_obj > OpenALHelper_obj::__new()
{  hx::ObjectPtr< OpenALHelper_obj > result = new OpenALHelper_obj();
	result->__construct();
	return result;}

Dynamic OpenALHelper_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< OpenALHelper_obj > result = new OpenALHelper_obj();
	result->__construct();
	return result;}

Void OpenALHelper_obj::default_source_setup( int source){
{
		HX_STACK_FRAME("snow.platform.native.audio.openal.OpenALHelper","default_source_setup",0x4e36d1a8,"snow.platform.native.audio.openal.OpenALHelper.default_source_setup","snow/platform/native/audio/openal/OpenALHelper.hx",17,0x4c32b7a2)
		HX_STACK_ARG(source,"source")
		HX_STACK_LINE(20)
		::snow::platform::native::audio::openal::AL_obj::sourcef(source,::snow::platform::native::audio::openal::AL_obj::PITCH,1.0);
		HX_STACK_LINE(22)
		::snow::platform::native::audio::openal::AL_obj::sourcef(source,::snow::platform::native::audio::openal::AL_obj::GAIN,1.0);
		HX_STACK_LINE(24)
		::snow::platform::native::audio::openal::AL_obj::source3f(source,::snow::platform::native::audio::openal::AL_obj::POSITION,0.0,0.0,0.0);
		HX_STACK_LINE(25)
		::snow::platform::native::audio::openal::AL_obj::source3f(source,::snow::platform::native::audio::openal::AL_obj::VELOCITY,0.0,0.0,0.0);
		HX_STACK_LINE(27)
		::snow::platform::native::audio::openal::AL_obj::sourcei(source,::snow::platform::native::audio::openal::AL_obj::LOOPING,::snow::platform::native::audio::openal::AL_obj::FALSE);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(OpenALHelper_obj,default_source_setup,(void))

int OpenALHelper_obj::determine_format( Dynamic _info){
	HX_STACK_FRAME("snow.platform.native.audio.openal.OpenALHelper","determine_format",0x5fcc9074,"snow.platform.native.audio.openal.OpenALHelper.determine_format","snow/platform/native/audio/openal/OpenALHelper.hx",32,0x4c32b7a2)
	HX_STACK_ARG(_info,"_info")
	HX_STACK_LINE(35)
	int format = ::snow::platform::native::audio::openal::AL_obj::FORMAT_MONO16;		HX_STACK_VAR(format,"format");
	HX_STACK_LINE(38)
	if (((_info->__Field(HX_CSTRING("data"),true)->__Field(HX_CSTRING("channels"),true) > (int)1))){
		HX_STACK_LINE(39)
		if (((_info->__Field(HX_CSTRING("data"),true)->__Field(HX_CSTRING("bits_per_sample"),true) == (int)8))){
			HX_STACK_LINE(40)
			format = ::snow::platform::native::audio::openal::AL_obj::FORMAT_STEREO8;
			HX_STACK_LINE(136)
			Dynamic();
		}
		else{
			HX_STACK_LINE(43)
			format = ::snow::platform::native::audio::openal::AL_obj::FORMAT_STEREO16;
			HX_STACK_LINE(136)
			Dynamic();
		}
	}
	else{
		HX_STACK_LINE(47)
		if (((_info->__Field(HX_CSTRING("data"),true)->__Field(HX_CSTRING("bits_per_sample"),true) == (int)8))){
			HX_STACK_LINE(48)
			format = ::snow::platform::native::audio::openal::AL_obj::FORMAT_MONO8;
			HX_STACK_LINE(136)
			Dynamic();
		}
		else{
			HX_STACK_LINE(51)
			format = ::snow::platform::native::audio::openal::AL_obj::FORMAT_MONO16;
			HX_STACK_LINE(136)
			Dynamic();
		}
	}
	HX_STACK_LINE(56)
	return format;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(OpenALHelper_obj,determine_format,return )


OpenALHelper_obj::OpenALHelper_obj()
{
}

Dynamic OpenALHelper_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 16:
		if (HX_FIELD_EQ(inName,"determine_format") ) { return determine_format_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"default_source_setup") ) { return default_source_setup_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic OpenALHelper_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void OpenALHelper_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("default_source_setup"),
	HX_CSTRING("determine_format"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(OpenALHelper_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(OpenALHelper_obj::__mClass,"__mClass");
};

#endif

Class OpenALHelper_obj::__mClass;

void OpenALHelper_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("snow.platform.native.audio.openal.OpenALHelper"), hx::TCanCast< OpenALHelper_obj> ,sStaticFields,sMemberFields,
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

void OpenALHelper_obj::__boot()
{
}

} // end namespace snow
} // end namespace platform
} // end namespace native
} // end namespace audio
} // end namespace openal
