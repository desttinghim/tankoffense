#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_snow_audio_Audio
#include <snow/audio/Audio.h>
#endif
#ifndef INCLUDED_snow_audio_SoundBinding
#include <snow/audio/SoundBinding.h>
#endif
#ifndef INCLUDED_snow_platform_native_audio_Sound
#include <snow/platform/native/audio/Sound.h>
#endif
namespace snow{
namespace platform{
namespace native{
namespace audio{

Void Sound_obj::__construct(::snow::audio::Audio _manager,::String _name)
{
HX_STACK_FRAME("snow.platform.native.audio.Sound","new",0x761ca322,"snow.platform.native.audio.Sound.new","snow/platform/native/audio/Sound.hx",8,0x6481db70)
HX_STACK_THIS(this)
HX_STACK_ARG(_manager,"_manager")
HX_STACK_ARG(_name,"_name")
{
	HX_STACK_LINE(14)
	this->position_bytes = (int)0;
	HX_STACK_LINE(12)
	this->length_bytes = (int)0;
	HX_STACK_LINE(8)
	super::__construct(_manager,_name);
}
;
	return null();
}

//Sound_obj::~Sound_obj() { }

Dynamic Sound_obj::__CreateEmpty() { return  new Sound_obj; }
hx::ObjectPtr< Sound_obj > Sound_obj::__new(::snow::audio::Audio _manager,::String _name)
{  hx::ObjectPtr< Sound_obj > result = new Sound_obj();
	result->__construct(_manager,_name);
	return result;}

Dynamic Sound_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Sound_obj > result = new Sound_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

Float Sound_obj::bytes_to_seconds( int _bytes){
	HX_STACK_FRAME("snow.platform.native.audio.Sound","bytes_to_seconds",0x32079b0d,"snow.platform.native.audio.Sound.bytes_to_seconds","snow/platform/native/audio/Sound.hx",18,0x6481db70)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_bytes,"_bytes")
	HX_STACK_LINE(20)
	int word;		HX_STACK_VAR(word,"word");
	HX_STACK_LINE(20)
	if (((this->get_info()->__Field(HX_CSTRING("data"),true)->__Field(HX_CSTRING("bits_per_sample"),true) == (int)16))){
		HX_STACK_LINE(20)
		word = (int)2;
	}
	else{
		HX_STACK_LINE(20)
		word = (int)1;
	}
	HX_STACK_LINE(21)
	int sample_frames = ((this->get_info()->__Field(HX_CSTRING("data"),true)->__Field(HX_CSTRING("rate"),true) * this->get_info()->__Field(HX_CSTRING("data"),true)->__Field(HX_CSTRING("channels"),true)) * word);		HX_STACK_VAR(sample_frames,"sample_frames");
	HX_STACK_LINE(23)
	return (Float(_bytes) / Float(sample_frames));
}


HX_DEFINE_DYNAMIC_FUNC1(Sound_obj,bytes_to_seconds,return )

int Sound_obj::seconds_to_bytes( Float _seconds){
	HX_STACK_FRAME("snow.platform.native.audio.Sound","seconds_to_bytes",0xf8b19865,"snow.platform.native.audio.Sound.seconds_to_bytes","snow/platform/native/audio/Sound.hx",28,0x6481db70)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_seconds,"_seconds")
	HX_STACK_LINE(30)
	int word;		HX_STACK_VAR(word,"word");
	HX_STACK_LINE(30)
	if (((this->get_info()->__Field(HX_CSTRING("data"),true)->__Field(HX_CSTRING("bits_per_sample"),true) == (int)16))){
		HX_STACK_LINE(30)
		word = (int)2;
	}
	else{
		HX_STACK_LINE(30)
		word = (int)1;
	}
	HX_STACK_LINE(31)
	int sample_frames = ((this->get_info()->__Field(HX_CSTRING("data"),true)->__Field(HX_CSTRING("rate"),true) * this->get_info()->__Field(HX_CSTRING("data"),true)->__Field(HX_CSTRING("channels"),true)) * word);		HX_STACK_VAR(sample_frames,"sample_frames");
	HX_STACK_LINE(33)
	return ::Std_obj::_int((_seconds * sample_frames));
}


HX_DEFINE_DYNAMIC_FUNC1(Sound_obj,seconds_to_bytes,return )

int Sound_obj::get_position_bytes( ){
	HX_STACK_FRAME("snow.platform.native.audio.Sound","get_position_bytes",0x34e9cd5c,"snow.platform.native.audio.Sound.get_position_bytes","snow/platform/native/audio/Sound.hx",38,0x6481db70)
	HX_STACK_THIS(this)
	HX_STACK_LINE(38)
	return this->position_bytes;
}


HX_DEFINE_DYNAMIC_FUNC0(Sound_obj,get_position_bytes,return )

int Sound_obj::set_position_bytes( int _position_bytes){
	HX_STACK_FRAME("snow.platform.native.audio.Sound","set_position_bytes",0x1198ffd0,"snow.platform.native.audio.Sound.set_position_bytes","snow/platform/native/audio/Sound.hx",42,0x6481db70)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_position_bytes,"_position_bytes")
	HX_STACK_LINE(42)
	return this->position_bytes = _position_bytes;
}


HX_DEFINE_DYNAMIC_FUNC1(Sound_obj,set_position_bytes,return )

int Sound_obj::get_length_bytes( ){
	HX_STACK_FRAME("snow.platform.native.audio.Sound","get_length_bytes",0xe44a9d99,"snow.platform.native.audio.Sound.get_length_bytes","snow/platform/native/audio/Sound.hx",46,0x6481db70)
	HX_STACK_THIS(this)
	HX_STACK_LINE(46)
	return this->get_info()->__Field(HX_CSTRING("data"),true)->__Field(HX_CSTRING("length_pcm"),true);
}


HX_DEFINE_DYNAMIC_FUNC0(Sound_obj,get_length_bytes,return )

Float Sound_obj::get_duration( ){
	HX_STACK_FRAME("snow.platform.native.audio.Sound","get_duration",0x29a3885b,"snow.platform.native.audio.Sound.get_duration","snow/platform/native/audio/Sound.hx",49,0x6481db70)
	HX_STACK_THIS(this)
	HX_STACK_LINE(50)
	int _g = this->get_length_bytes();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(50)
	return this->bytes_to_seconds(_g);
}



Sound_obj::Sound_obj()
{
}

Dynamic Sound_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"length_bytes") ) { return inCallProp ? get_length_bytes() : length_bytes; }
		if (HX_FIELD_EQ(inName,"get_duration") ) { return get_duration_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"position_bytes") ) { return inCallProp ? get_position_bytes() : position_bytes; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"bytes_to_seconds") ) { return bytes_to_seconds_dyn(); }
		if (HX_FIELD_EQ(inName,"seconds_to_bytes") ) { return seconds_to_bytes_dyn(); }
		if (HX_FIELD_EQ(inName,"get_length_bytes") ) { return get_length_bytes_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"get_position_bytes") ) { return get_position_bytes_dyn(); }
		if (HX_FIELD_EQ(inName,"set_position_bytes") ) { return set_position_bytes_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Sound_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"length_bytes") ) { length_bytes=inValue.Cast< int >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"position_bytes") ) { if (inCallProp) return set_position_bytes(inValue);position_bytes=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Sound_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("length_bytes"));
	outFields->push(HX_CSTRING("position_bytes"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(Sound_obj,length_bytes),HX_CSTRING("length_bytes")},
	{hx::fsInt,(int)offsetof(Sound_obj,position_bytes),HX_CSTRING("position_bytes")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("length_bytes"),
	HX_CSTRING("position_bytes"),
	HX_CSTRING("bytes_to_seconds"),
	HX_CSTRING("seconds_to_bytes"),
	HX_CSTRING("get_position_bytes"),
	HX_CSTRING("set_position_bytes"),
	HX_CSTRING("get_length_bytes"),
	HX_CSTRING("get_duration"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Sound_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Sound_obj::__mClass,"__mClass");
};

#endif

Class Sound_obj::__mClass;

void Sound_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("snow.platform.native.audio.Sound"), hx::TCanCast< Sound_obj> ,sStaticFields,sMemberFields,
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

void Sound_obj::__boot()
{
}

} // end namespace snow
} // end namespace platform
} // end namespace native
} // end namespace audio
