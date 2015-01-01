#include <hxcpp.h>

#ifndef INCLUDED_snow_Snow
#include <snow/Snow.h>
#endif
#ifndef INCLUDED_snow_assets_AssetSystemBinding
#include <snow/assets/AssetSystemBinding.h>
#endif
#ifndef INCLUDED_snow_assets_Assets
#include <snow/assets/Assets.h>
#endif
#ifndef INCLUDED_snow_audio_Audio
#include <snow/audio/Audio.h>
#endif
#ifndef INCLUDED_snow_audio_SoundBinding
#include <snow/audio/SoundBinding.h>
#endif
#ifndef INCLUDED_snow_platform_native_assets_AssetSystem
#include <snow/platform/native/assets/AssetSystem.h>
#endif
#ifndef INCLUDED_snow_platform_native_audio_Sound
#include <snow/platform/native/audio/Sound.h>
#endif
#ifndef INCLUDED_snow_platform_native_audio_SoundStream
#include <snow/platform/native/audio/SoundStream.h>
#endif
#ifndef INCLUDED_snow_platform_native_audio_openal_Sound
#include <snow/platform/native/audio/openal/Sound.h>
#endif
#ifndef INCLUDED_snow_utils_AbstractClass
#include <snow/utils/AbstractClass.h>
#endif
namespace snow{
namespace platform{
namespace native{
namespace audio{

Void SoundStream_obj::__construct(::snow::audio::Audio _manager,::String _name)
{
HX_STACK_FRAME("snow.platform.native.audio.SoundStream","new",0x0512bfc2,"snow.platform.native.audio.SoundStream.new","snow/platform/native/audio/SoundStream.hx",20,0xff160850)
HX_STACK_THIS(this)
HX_STACK_ARG(_manager,"_manager")
HX_STACK_ARG(_name,"_name")
{
	HX_STACK_LINE(22)
	super::__construct(_manager,_name);
	HX_STACK_LINE(24)
	this->buffer_length = _manager->lib->config->__Field(HX_CSTRING("native"),true)->__Field(HX_CSTRING("audio_buffer_length"),true);
	HX_STACK_LINE(25)
	this->buffer_count = _manager->lib->config->__Field(HX_CSTRING("native"),true)->__Field(HX_CSTRING("audio_buffer_count"),true);
	HX_STACK_LINE(27)
	this->data_get = this->default_data_get_dyn();
	HX_STACK_LINE(28)
	this->data_seek = this->default_data_seek_dyn();
}
;
	return null();
}

//SoundStream_obj::~SoundStream_obj() { }

Dynamic SoundStream_obj::__CreateEmpty() { return  new SoundStream_obj; }
hx::ObjectPtr< SoundStream_obj > SoundStream_obj::__new(::snow::audio::Audio _manager,::String _name)
{  hx::ObjectPtr< SoundStream_obj > result = new SoundStream_obj();
	result->__construct(_manager,_name);
	return result;}

Dynamic SoundStream_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< SoundStream_obj > result = new SoundStream_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

bool SoundStream_obj::default_data_seek( int _to){
	HX_STACK_FRAME("snow.platform.native.audio.SoundStream","default_data_seek",0x752d3991,"snow.platform.native.audio.SoundStream.default_data_seek","snow/platform/native/audio/SoundStream.hx",33,0xff160850)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_to,"_to")
	HX_STACK_LINE(35)
	Dynamic _g = this->get_info();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(35)
	return this->manager->lib->assets->platform->audio_seek_source(_g,_to);
}


HX_DEFINE_DYNAMIC_FUNC1(SoundStream_obj,default_data_seek,return )

Dynamic SoundStream_obj::default_data_get( int _start,int _length){
	HX_STACK_FRAME("snow.platform.native.audio.SoundStream","default_data_get",0xb021929d,"snow.platform.native.audio.SoundStream.default_data_get","snow/platform/native/audio/SoundStream.hx",40,0xff160850)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_start,"_start")
	HX_STACK_ARG(_length,"_length")
	HX_STACK_LINE(42)
	Dynamic _g = this->get_info();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(42)
	return this->manager->lib->assets->platform->audio_load_portion(_g,_start,_length);
}


HX_DEFINE_DYNAMIC_FUNC2(SoundStream_obj,default_data_get,return )


SoundStream_obj::SoundStream_obj()
{
}

void SoundStream_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SoundStream);
	HX_MARK_MEMBER_NAME(buffer_length,"buffer_length");
	HX_MARK_MEMBER_NAME(buffer_count,"buffer_count");
	HX_MARK_MEMBER_NAME(data_get,"data_get");
	HX_MARK_MEMBER_NAME(data_seek,"data_seek");
	::snow::audio::SoundBinding_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void SoundStream_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(buffer_length,"buffer_length");
	HX_VISIT_MEMBER_NAME(buffer_count,"buffer_count");
	HX_VISIT_MEMBER_NAME(data_get,"data_get");
	HX_VISIT_MEMBER_NAME(data_seek,"data_seek");
	::snow::audio::SoundBinding_obj::__Visit(HX_VISIT_ARG);
}

Dynamic SoundStream_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"data_get") ) { return data_get; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"data_seek") ) { return data_seek; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"buffer_count") ) { return buffer_count; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"buffer_length") ) { return buffer_length; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"default_data_get") ) { return default_data_get_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"default_data_seek") ) { return default_data_seek_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic SoundStream_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"data_get") ) { data_get=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"data_seek") ) { data_seek=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"buffer_count") ) { buffer_count=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"buffer_length") ) { buffer_length=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void SoundStream_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("buffer_length"));
	outFields->push(HX_CSTRING("buffer_count"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(SoundStream_obj,buffer_length),HX_CSTRING("buffer_length")},
	{hx::fsInt,(int)offsetof(SoundStream_obj,buffer_count),HX_CSTRING("buffer_count")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(SoundStream_obj,data_get),HX_CSTRING("data_get")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(SoundStream_obj,data_seek),HX_CSTRING("data_seek")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("buffer_length"),
	HX_CSTRING("buffer_count"),
	HX_CSTRING("data_get"),
	HX_CSTRING("data_seek"),
	HX_CSTRING("default_data_seek"),
	HX_CSTRING("default_data_get"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SoundStream_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SoundStream_obj::__mClass,"__mClass");
};

#endif

Class SoundStream_obj::__mClass;

void SoundStream_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("snow.platform.native.audio.SoundStream"), hx::TCanCast< SoundStream_obj> ,sStaticFields,sMemberFields,
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

void SoundStream_obj::__boot()
{
}

} // end namespace snow
} // end namespace platform
} // end namespace native
} // end namespace audio
