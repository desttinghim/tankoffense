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
#ifndef INCLUDED_snow_utils_AbstractClass
#include <snow/utils/AbstractClass.h>
#endif
namespace snow{
namespace audio{

Void AudioSystemBinding_obj::__construct()
{
	return null();
}

//AudioSystemBinding_obj::~AudioSystemBinding_obj() { }

Dynamic AudioSystemBinding_obj::__CreateEmpty() { return  new AudioSystemBinding_obj; }
hx::ObjectPtr< AudioSystemBinding_obj > AudioSystemBinding_obj::__new()
{  hx::ObjectPtr< AudioSystemBinding_obj > result = new AudioSystemBinding_obj();
	result->__construct();
	return result;}

Dynamic AudioSystemBinding_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< AudioSystemBinding_obj > result = new AudioSystemBinding_obj();
	result->__construct();
	return result;}

hx::Object *AudioSystemBinding_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::snow::utils::AbstractClass_obj)) return operator ::snow::utils::AbstractClass_obj *();
	return super::__ToInterface(inType);
}

Void AudioSystemBinding_obj::init( ){
{
		HX_STACK_FRAME("snow.audio.AudioSystemBinding","init",0x2f8e4bfb,"snow.audio.AudioSystemBinding.init","snow/utils/AbstractClass.hx",140,0x08288ed2)
		HX_STACK_THIS(this)
		HX_STACK_LINE(140)
		HX_STACK_DO_THROW(HX_CSTRING("abstract method, must override"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(AudioSystemBinding_obj,init,(void))

Void AudioSystemBinding_obj::process( ){
{
		HX_STACK_FRAME("snow.audio.AudioSystemBinding","process",0xdc16b664,"snow.audio.AudioSystemBinding.process","snow/utils/AbstractClass.hx",140,0x08288ed2)
		HX_STACK_THIS(this)
		HX_STACK_LINE(140)
		HX_STACK_DO_THROW(HX_CSTRING("abstract method, must override"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(AudioSystemBinding_obj,process,(void))

Void AudioSystemBinding_obj::destroy( ){
{
		HX_STACK_FRAME("snow.audio.AudioSystemBinding","destroy",0x0f5240ef,"snow.audio.AudioSystemBinding.destroy","snow/utils/AbstractClass.hx",140,0x08288ed2)
		HX_STACK_THIS(this)
		HX_STACK_LINE(140)
		HX_STACK_DO_THROW(HX_CSTRING("abstract method, must override"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(AudioSystemBinding_obj,destroy,(void))

Void AudioSystemBinding_obj::suspend( ){
{
		HX_STACK_FRAME("snow.audio.AudioSystemBinding","suspend",0xe21b4371,"snow.audio.AudioSystemBinding.suspend","snow/utils/AbstractClass.hx",140,0x08288ed2)
		HX_STACK_THIS(this)
		HX_STACK_LINE(140)
		HX_STACK_DO_THROW(HX_CSTRING("abstract method, must override"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(AudioSystemBinding_obj,suspend,(void))

Void AudioSystemBinding_obj::resume( ){
{
		HX_STACK_FRAME("snow.audio.AudioSystemBinding","resume",0x59edcb58,"snow.audio.AudioSystemBinding.resume","snow/utils/AbstractClass.hx",140,0x08288ed2)
		HX_STACK_THIS(this)
		HX_STACK_LINE(140)
		HX_STACK_DO_THROW(HX_CSTRING("abstract method, must override"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(AudioSystemBinding_obj,resume,(void))


AudioSystemBinding_obj::AudioSystemBinding_obj()
{
}

void AudioSystemBinding_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(AudioSystemBinding);
	HX_MARK_MEMBER_NAME(manager,"manager");
	HX_MARK_MEMBER_NAME(lib,"lib");
	HX_MARK_END_CLASS();
}

void AudioSystemBinding_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(manager,"manager");
	HX_VISIT_MEMBER_NAME(lib,"lib");
}

Dynamic AudioSystemBinding_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"lib") ) { return lib; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"resume") ) { return resume_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"manager") ) { return manager; }
		if (HX_FIELD_EQ(inName,"process") ) { return process_dyn(); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"suspend") ) { return suspend_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic AudioSystemBinding_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"lib") ) { lib=inValue.Cast< ::snow::Snow >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"manager") ) { manager=inValue.Cast< ::snow::audio::Audio >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void AudioSystemBinding_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("manager"));
	outFields->push(HX_CSTRING("lib"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::snow::audio::Audio*/ ,(int)offsetof(AudioSystemBinding_obj,manager),HX_CSTRING("manager")},
	{hx::fsObject /*::snow::Snow*/ ,(int)offsetof(AudioSystemBinding_obj,lib),HX_CSTRING("lib")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("manager"),
	HX_CSTRING("lib"),
	HX_CSTRING("init"),
	HX_CSTRING("process"),
	HX_CSTRING("destroy"),
	HX_CSTRING("suspend"),
	HX_CSTRING("resume"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AudioSystemBinding_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AudioSystemBinding_obj::__mClass,"__mClass");
};

#endif

Class AudioSystemBinding_obj::__mClass;

void AudioSystemBinding_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("snow.audio.AudioSystemBinding"), hx::TCanCast< AudioSystemBinding_obj> ,sStaticFields,sMemberFields,
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

void AudioSystemBinding_obj::__boot()
{
}

} // end namespace snow
} // end namespace audio
