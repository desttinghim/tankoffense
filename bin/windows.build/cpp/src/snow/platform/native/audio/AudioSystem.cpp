#include <hxcpp.h>

#ifndef INCLUDED_snow_Snow
#include <snow/Snow.h>
#endif
#ifndef INCLUDED_snow_audio_Audio
#include <snow/audio/Audio.h>
#endif
#ifndef INCLUDED_snow_audio_AudioSystemBinding
#include <snow/audio/AudioSystemBinding.h>
#endif
#ifndef INCLUDED_snow_platform_native_audio_AudioSystem
#include <snow/platform/native/audio/AudioSystem.h>
#endif
#ifndef INCLUDED_snow_utils_AbstractClass
#include <snow/utils/AbstractClass.h>
#endif
namespace snow{
namespace platform{
namespace native{
namespace audio{

Void AudioSystem_obj::__construct(::snow::audio::Audio _manager,::snow::Snow _lib)
{
HX_STACK_FRAME("snow.platform.native.audio.AudioSystem","new",0x1b938078,"snow.platform.native.audio.AudioSystem.new","snow/platform/native/audio/AudioSystem.hx",11,0xe714505a)
HX_STACK_THIS(this)
HX_STACK_ARG(_manager,"_manager")
HX_STACK_ARG(_lib,"_lib")
{
	HX_STACK_LINE(13)
	this->manager = _manager;
	HX_STACK_LINE(14)
	this->lib = _lib;
}
;
	return null();
}

//AudioSystem_obj::~AudioSystem_obj() { }

Dynamic AudioSystem_obj::__CreateEmpty() { return  new AudioSystem_obj; }
hx::ObjectPtr< AudioSystem_obj > AudioSystem_obj::__new(::snow::audio::Audio _manager,::snow::Snow _lib)
{  hx::ObjectPtr< AudioSystem_obj > result = new AudioSystem_obj();
	result->__construct(_manager,_lib);
	return result;}

Dynamic AudioSystem_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< AudioSystem_obj > result = new AudioSystem_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

Void AudioSystem_obj::init( ){
{
		HX_STACK_FRAME("snow.platform.native.audio.AudioSystem","init",0x02359ff8,"snow.platform.native.audio.AudioSystem.init","snow/platform/native/audio/AudioSystem.hx",18,0xe714505a)
		HX_STACK_THIS(this)
	}
return null();
}


Void AudioSystem_obj::process( ){
{
		HX_STACK_FRAME("snow.platform.native.audio.AudioSystem","process",0x6fc03e87,"snow.platform.native.audio.AudioSystem.process","snow/platform/native/audio/AudioSystem.hx",19,0xe714505a)
		HX_STACK_THIS(this)
	}
return null();
}


Void AudioSystem_obj::destroy( ){
{
		HX_STACK_FRAME("snow.platform.native.audio.AudioSystem","destroy",0xa2fbc912,"snow.platform.native.audio.AudioSystem.destroy","snow/platform/native/audio/AudioSystem.hx",20,0xe714505a)
		HX_STACK_THIS(this)
	}
return null();
}


Void AudioSystem_obj::suspend( ){
{
		HX_STACK_FRAME("snow.platform.native.audio.AudioSystem","suspend",0x75c4cb94,"snow.platform.native.audio.AudioSystem.suspend","snow/platform/native/audio/AudioSystem.hx",21,0xe714505a)
		HX_STACK_THIS(this)
	}
return null();
}


Void AudioSystem_obj::resume( ){
{
		HX_STACK_FRAME("snow.platform.native.audio.AudioSystem","resume",0xa40fd895,"snow.platform.native.audio.AudioSystem.resume","snow/platform/native/audio/AudioSystem.hx",22,0xe714505a)
		HX_STACK_THIS(this)
	}
return null();
}



AudioSystem_obj::AudioSystem_obj()
{
}

Dynamic AudioSystem_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"resume") ) { return resume_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"process") ) { return process_dyn(); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"suspend") ) { return suspend_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic AudioSystem_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void AudioSystem_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("init"),
	HX_CSTRING("process"),
	HX_CSTRING("destroy"),
	HX_CSTRING("suspend"),
	HX_CSTRING("resume"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AudioSystem_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AudioSystem_obj::__mClass,"__mClass");
};

#endif

Class AudioSystem_obj::__mClass;

void AudioSystem_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("snow.platform.native.audio.AudioSystem"), hx::TCanCast< AudioSystem_obj> ,sStaticFields,sMemberFields,
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

void AudioSystem_obj::__boot()
{
}

} // end namespace snow
} // end namespace platform
} // end namespace native
} // end namespace audio
