#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
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
#ifndef INCLUDED_snow_platform_native_audio_openal_AL
#include <snow/platform/native/audio/openal/AL.h>
#endif
#ifndef INCLUDED_snow_platform_native_audio_openal_OpenALHelper
#include <snow/platform/native/audio/openal/OpenALHelper.h>
#endif
#ifndef INCLUDED_snow_platform_native_audio_openal_Sound
#include <snow/platform/native/audio/openal/Sound.h>
#endif
#ifndef INCLUDED_snow_platform_native_utils_ArrayBufferView
#include <snow/platform/native/utils/ArrayBufferView.h>
#endif
#ifndef INCLUDED_snow_platform_native_utils_ByteArray
#include <snow/platform/native/utils/ByteArray.h>
#endif
#ifndef INCLUDED_snow_platform_native_utils_Float32Array
#include <snow/platform/native/utils/Float32Array.h>
#endif
#ifndef INCLUDED_snow_utils_IDataInput
#include <snow/utils/IDataInput.h>
#endif
#ifndef INCLUDED_snow_utils_IMemoryRange
#include <snow/utils/IMemoryRange.h>
#endif
namespace snow{
namespace platform{
namespace native{
namespace audio{
namespace openal{

Void Sound_obj::__construct(::snow::audio::Audio _manager,::String _name)
{
HX_STACK_FRAME("snow.platform.native.audio.openal.Sound","new",0x1eff2ec7,"snow.platform.native.audio.openal.Sound.new","snow/platform/native/audio/openal/Sound.hx",30,0xb8bf6ae8)
HX_STACK_THIS(this)
HX_STACK_ARG(_manager,"_manager")
HX_STACK_ARG(_name,"_name")
{
	HX_STACK_LINE(30)
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

Void Sound_obj::play( ){
{
		HX_STACK_FRAME("snow.platform.native.audio.openal.Sound","play",0x01a169ad,"snow.platform.native.audio.openal.Sound.play","snow/platform/native/audio/openal/Sound.hx",36,0xb8bf6ae8)
		HX_STACK_THIS(this)
		HX_STACK_LINE(38)
		this->playing = true;
		HX_STACK_LINE(41)
		if ((this->get_looping())){
			HX_STACK_LINE(42)
			this->set_looping(false);
		}
		HX_STACK_LINE(45)
		::snow::platform::native::audio::openal::AL_obj::sourcePlay(this->source);
		HX_STACK_LINE(136)
		Dynamic();
	}
return null();
}


Void Sound_obj::loop( ){
{
		HX_STACK_FRAME("snow.platform.native.audio.openal.Sound","loop",0xfefee21d,"snow.platform.native.audio.openal.Sound.loop","snow/platform/native/audio/openal/Sound.hx",51,0xb8bf6ae8)
		HX_STACK_THIS(this)
		HX_STACK_LINE(53)
		this->playing = true;
		HX_STACK_LINE(55)
		if ((!(this->get_looping()))){
			HX_STACK_LINE(56)
			this->set_looping(true);
		}
		HX_STACK_LINE(59)
		::snow::platform::native::audio::openal::AL_obj::sourcePlay(this->source);
		HX_STACK_LINE(136)
		Dynamic();
	}
return null();
}


Void Sound_obj::pause( ){
{
		HX_STACK_FRAME("snow.platform.native.audio.openal.Sound","pause",0x6464dd1d,"snow.platform.native.audio.openal.Sound.pause","snow/platform/native/audio/openal/Sound.hx",65,0xb8bf6ae8)
		HX_STACK_THIS(this)
		HX_STACK_LINE(67)
		this->playing = false;
		HX_STACK_LINE(69)
		::snow::platform::native::audio::openal::AL_obj::sourcePause(this->source);
		HX_STACK_LINE(136)
		Dynamic();
	}
return null();
}


Void Sound_obj::stop( ){
{
		HX_STACK_FRAME("snow.platform.native.audio.openal.Sound","stop",0x03a32bbb,"snow.platform.native.audio.openal.Sound.stop","snow/platform/native/audio/openal/Sound.hx",75,0xb8bf6ae8)
		HX_STACK_THIS(this)
		HX_STACK_LINE(77)
		this->playing = false;
		HX_STACK_LINE(79)
		::snow::platform::native::audio::openal::AL_obj::sourceStop(this->source);
		HX_STACK_LINE(82)
		this->emit(HX_CSTRING("end"));
		HX_STACK_LINE(136)
		Dynamic();
	}
return null();
}


Void Sound_obj::destroy( ){
{
		HX_STACK_FRAME("snow.platform.native.audio.openal.Sound","destroy",0x6d7e4ae1,"snow.platform.native.audio.openal.Sound.destroy","snow/platform/native/audio/openal/Sound.hx",88,0xb8bf6ae8)
		HX_STACK_THIS(this)
		HX_STACK_LINE(90)
		this->stop();
		HX_STACK_LINE(92)
		::snow::platform::native::audio::openal::AL_obj::deleteSource(this->source);
		HX_STACK_LINE(93)
		::snow::platform::native::audio::openal::AL_obj::deleteBuffer(this->buffer);
		HX_STACK_LINE(95)
		this->manager->kill(hx::ObjectPtr<OBJ_>(this));
	}
return null();
}


Void Sound_obj::internal_update( ){
{
		HX_STACK_FRAME("snow.platform.native.audio.openal.Sound","internal_update",0x06691ef2,"snow.platform.native.audio.openal.Sound.internal_update","snow/platform/native/audio/openal/Sound.hx",101,0xb8bf6ae8)
		HX_STACK_THIS(this)
		HX_STACK_LINE(103)
		if ((!(this->playing))){
			HX_STACK_LINE(104)
			return null();
		}
		HX_STACK_LINE(107)
		int _al_play_state = ::snow::platform::native::audio::openal::AL_obj::getSourcei(this->source,::snow::platform::native::audio::openal::AL_obj::SOURCE_STATE);		HX_STACK_VAR(_al_play_state,"_al_play_state");
		HX_STACK_LINE(108)
		if (((_al_play_state == ::snow::platform::native::audio::openal::AL_obj::STOPPED))){
			HX_STACK_LINE(109)
			this->playing = false;
			HX_STACK_LINE(110)
			this->emit(HX_CSTRING("end"));
		}
	}
return null();
}


Dynamic Sound_obj::set_info( Dynamic _info){
	HX_STACK_FRAME("snow.platform.native.audio.openal.Sound","set_info",0x03f559a4,"snow.platform.native.audio.openal.Sound.set_info","snow/platform/native/audio/openal/Sound.hx",117,0xb8bf6ae8)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_info,"_info")
	HX_STACK_LINE(120)
	Dynamic _g = this->get_info();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(120)
	if (((_g != null()))){
		HX_STACK_LINE(121)
		this->destroy();
	}
	HX_STACK_LINE(125)
	this->info = null();
	HX_STACK_LINE(128)
	if (((_info == null()))){
		HX_STACK_LINE(130)
		::haxe::Log_obj::trace(HX_CSTRING("    i / audio / not creating sound, info was null!"),hx::SourceInfo(HX_CSTRING("Sound.hx"),130,HX_CSTRING("snow.platform.native.audio.openal.Sound"),HX_CSTRING("set_info")));
		HX_STACK_LINE(132)
		return this->get_info();
	}
	HX_STACK_LINE(137)
	this->info = _info;
	HX_STACK_LINE(138)
	this->loaded = true;
	HX_STACK_LINE(150)
	int _g1 = ::snow::platform::native::audio::openal::AL_obj::genSource();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(150)
	this->source = _g1;
	HX_STACK_LINE(155)
	::snow::platform::native::audio::openal::OpenALHelper_obj::default_source_setup(this->source);
	HX_STACK_LINE(158)
	int _g2 = ::snow::platform::native::audio::openal::AL_obj::genBuffer();		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(158)
	this->buffer = _g2;
	HX_STACK_LINE(163)
	Dynamic _g3 = this->get_info();		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(163)
	int _g4 = ::snow::platform::native::audio::openal::OpenALHelper_obj::determine_format(_g3);		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(163)
	this->format = _g4;
	HX_STACK_LINE(166)
	if (((bool((this->get_info()->__Field(HX_CSTRING("data"),true)->__Field(HX_CSTRING("bytes"),true) == null())) || bool((this->get_info()->__Field(HX_CSTRING("data"),true)->__Field(HX_CSTRING("bytes"),true)->__Field(HX_CSTRING("length"),true) == (int)0))))){
		HX_STACK_LINE(168)
		return this->get_info();
	}
	HX_STACK_LINE(172)
	::snow::platform::native::utils::Float32Array _g5 = ::snow::platform::native::utils::Float32Array_obj::__new(this->get_info()->__Field(HX_CSTRING("data"),true)->__Field(HX_CSTRING("bytes"),true),null(),null());		HX_STACK_VAR(_g5,"_g5");
	HX_STACK_LINE(172)
	::snow::platform::native::audio::openal::AL_obj::bufferData(this->buffer,this->format,_g5,this->get_info()->__Field(HX_CSTRING("data"),true)->__Field(HX_CSTRING("bytes"),true)->__Field(HX_CSTRING("length"),true),this->get_info()->__Field(HX_CSTRING("data"),true)->__Field(HX_CSTRING("rate"),true));
	HX_STACK_LINE(177)
	::snow::platform::native::audio::openal::AL_obj::sourcei(this->source,::snow::platform::native::audio::openal::AL_obj::BUFFER,this->buffer);
	HX_STACK_LINE(182)
	this->emit(HX_CSTRING("load"));
	HX_STACK_LINE(184)
	return this->get_info();
}


int Sound_obj::get_position_bytes( ){
	HX_STACK_FRAME("snow.platform.native.audio.openal.Sound","get_position_bytes",0x62a62357,"snow.platform.native.audio.openal.Sound.get_position_bytes","snow/platform/native/audio/openal/Sound.hx",190,0xb8bf6ae8)
	HX_STACK_THIS(this)
	HX_STACK_LINE(192)
	Float _g = ::snow::platform::native::audio::openal::AL_obj::getSourcef(this->source,::snow::platform::native::audio::openal::AL_obj::SAMPLE_OFFSET);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(192)
	return ::Std_obj::_int(_g);
}


Float Sound_obj::get_position( ){
	HX_STACK_FRAME("snow.platform.native.audio.openal.Sound","get_position",0x6a03716b,"snow.platform.native.audio.openal.Sound.get_position","snow/platform/native/audio/openal/Sound.hx",198,0xb8bf6ae8)
	HX_STACK_THIS(this)
	HX_STACK_LINE(198)
	return ::snow::platform::native::audio::openal::AL_obj::getSourcef(this->source,::snow::platform::native::audio::openal::AL_obj::SEC_OFFSET);
}


Float Sound_obj::set_pan( Float _pan){
	HX_STACK_FRAME("snow.platform.native.audio.openal.Sound","set_pan",0x62c3c8e7,"snow.platform.native.audio.openal.Sound.set_pan","snow/platform/native/audio/openal/Sound.hx",202,0xb8bf6ae8)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_pan,"_pan")
	HX_STACK_LINE(204)
	Float _g = ::Math_obj::cos((((_pan - (int)1)) * ::snow::platform::native::audio::openal::Sound_obj::half_pi));		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(204)
	Float _g1 = ::Math_obj::sin((((_pan + (int)1)) * ::snow::platform::native::audio::openal::Sound_obj::half_pi));		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(204)
	::snow::platform::native::audio::openal::AL_obj::source3f(this->source,::snow::platform::native::audio::openal::AL_obj::POSITION,_g,(int)0,_g1);
	HX_STACK_LINE(206)
	return this->pan = _pan;
}


Float Sound_obj::set_pitch( Float _pitch){
	HX_STACK_FRAME("snow.platform.native.audio.openal.Sound","set_pitch",0x7743a9ca,"snow.platform.native.audio.openal.Sound.set_pitch","snow/platform/native/audio/openal/Sound.hx",210,0xb8bf6ae8)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_pitch,"_pitch")
	HX_STACK_LINE(212)
	::snow::platform::native::audio::openal::AL_obj::sourcef(this->source,::snow::platform::native::audio::openal::AL_obj::PITCH,_pitch);
	HX_STACK_LINE(214)
	return this->pitch = _pitch;
}


Float Sound_obj::set_volume( Float _volume){
	HX_STACK_FRAME("snow.platform.native.audio.openal.Sound","set_volume",0xb9408490,"snow.platform.native.audio.openal.Sound.set_volume","snow/platform/native/audio/openal/Sound.hx",218,0xb8bf6ae8)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_volume,"_volume")
	HX_STACK_LINE(220)
	::snow::platform::native::audio::openal::AL_obj::sourcef(this->source,::snow::platform::native::audio::openal::AL_obj::GAIN,_volume);
	HX_STACK_LINE(222)
	return this->volume = _volume;
}


bool Sound_obj::set_looping( bool _looping){
	HX_STACK_FRAME("snow.platform.native.audio.openal.Sound","set_looping",0x763f8188,"snow.platform.native.audio.openal.Sound.set_looping","snow/platform/native/audio/openal/Sound.hx",226,0xb8bf6ae8)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_looping,"_looping")
	HX_STACK_LINE(228)
	int _g = ::snow::platform::native::audio::openal::AL_obj::getError();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(228)
	::String _g1 = ::snow::platform::native::audio::openal::AL_obj::getErrorMeaning(_g);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(228)
	::String _g2 = (((HX_CSTRING("") + this->name) + HX_CSTRING(" pre looping / ")) + _g1);		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(228)
	::String _g3 = (_g2 + HX_CSTRING(" "));		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(228)
	::String _g4 = (HX_CSTRING("    i / audio / ") + _g3);		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(228)
	::haxe::Log_obj::trace(_g4,hx::SourceInfo(HX_CSTRING("Sound.hx"),228,HX_CSTRING("snow.platform.native.audio.openal.Sound"),HX_CSTRING("set_looping")));
	HX_STACK_LINE(230)
	::snow::platform::native::audio::openal::AL_obj::sourcei(this->source,::snow::platform::native::audio::openal::AL_obj::LOOPING,(  ((_looping)) ? int(::snow::platform::native::audio::openal::AL_obj::TRUE) : int(::snow::platform::native::audio::openal::AL_obj::FALSE) ));
	HX_STACK_LINE(232)
	int _g5 = ::snow::platform::native::audio::openal::AL_obj::getError();		HX_STACK_VAR(_g5,"_g5");
	HX_STACK_LINE(232)
	::String _g6 = ::snow::platform::native::audio::openal::AL_obj::getErrorMeaning(_g5);		HX_STACK_VAR(_g6,"_g6");
	HX_STACK_LINE(232)
	::String _g7 = (((HX_CSTRING("") + this->name) + HX_CSTRING(" set looping on sound source / ")) + _g6);		HX_STACK_VAR(_g7,"_g7");
	HX_STACK_LINE(232)
	::String _g8 = (_g7 + HX_CSTRING(" "));		HX_STACK_VAR(_g8,"_g8");
	HX_STACK_LINE(232)
	::String _g9 = (HX_CSTRING("    i / audio / ") + _g8);		HX_STACK_VAR(_g9,"_g9");
	HX_STACK_LINE(232)
	::haxe::Log_obj::trace(_g9,hx::SourceInfo(HX_CSTRING("Sound.hx"),232,HX_CSTRING("snow.platform.native.audio.openal.Sound"),HX_CSTRING("set_looping")));
	HX_STACK_LINE(234)
	return this->looping = _looping;
}


int Sound_obj::set_position_bytes( int _position_bytes){
	HX_STACK_FRAME("snow.platform.native.audio.openal.Sound","set_position_bytes",0x3f5555cb,"snow.platform.native.audio.openal.Sound.set_position_bytes","snow/platform/native/audio/openal/Sound.hx",238,0xb8bf6ae8)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_position_bytes,"_position_bytes")
	HX_STACK_LINE(240)
	::snow::platform::native::audio::openal::AL_obj::sourcef(this->source,::snow::platform::native::audio::openal::AL_obj::SAMPLE_OFFSET,_position_bytes);
	HX_STACK_LINE(242)
	return this->position_bytes = _position_bytes;
}


Float Sound_obj::set_position( Float _position){
	HX_STACK_FRAME("snow.platform.native.audio.openal.Sound","set_position",0x7efc94df,"snow.platform.native.audio.openal.Sound.set_position","snow/platform/native/audio/openal/Sound.hx",246,0xb8bf6ae8)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_position,"_position")
	HX_STACK_LINE(248)
	::snow::platform::native::audio::openal::AL_obj::sourcef(this->source,::snow::platform::native::audio::openal::AL_obj::SEC_OFFSET,_position);
	HX_STACK_LINE(250)
	return this->position = _position;
}


Float Sound_obj::half_pi;


Sound_obj::Sound_obj()
{
}

Dynamic Sound_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"play") ) { return play_dyn(); }
		if (HX_FIELD_EQ(inName,"loop") ) { return loop_dyn(); }
		if (HX_FIELD_EQ(inName,"stop") ) { return stop_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"pause") ) { return pause_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"source") ) { return source; }
		if (HX_FIELD_EQ(inName,"buffer") ) { return buffer; }
		if (HX_FIELD_EQ(inName,"format") ) { return format; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"half_pi") ) { return half_pi; }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"set_pan") ) { return set_pan_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"set_info") ) { return set_info_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"set_pitch") ) { return set_pitch_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"set_volume") ) { return set_volume_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"set_looping") ) { return set_looping_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_position") ) { return get_position_dyn(); }
		if (HX_FIELD_EQ(inName,"set_position") ) { return set_position_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"internal_update") ) { return internal_update_dyn(); }
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
	case 6:
		if (HX_FIELD_EQ(inName,"source") ) { source=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"buffer") ) { buffer=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"format") ) { format=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"half_pi") ) { half_pi=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Sound_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("source"));
	outFields->push(HX_CSTRING("buffer"));
	outFields->push(HX_CSTRING("format"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("half_pi"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(Sound_obj,source),HX_CSTRING("source")},
	{hx::fsInt,(int)offsetof(Sound_obj,buffer),HX_CSTRING("buffer")},
	{hx::fsInt,(int)offsetof(Sound_obj,format),HX_CSTRING("format")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("source"),
	HX_CSTRING("buffer"),
	HX_CSTRING("format"),
	HX_CSTRING("play"),
	HX_CSTRING("loop"),
	HX_CSTRING("pause"),
	HX_CSTRING("stop"),
	HX_CSTRING("destroy"),
	HX_CSTRING("internal_update"),
	HX_CSTRING("set_info"),
	HX_CSTRING("get_position_bytes"),
	HX_CSTRING("get_position"),
	HX_CSTRING("set_pan"),
	HX_CSTRING("set_pitch"),
	HX_CSTRING("set_volume"),
	HX_CSTRING("set_looping"),
	HX_CSTRING("set_position_bytes"),
	HX_CSTRING("set_position"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Sound_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Sound_obj::half_pi,"half_pi");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Sound_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Sound_obj::half_pi,"half_pi");
};

#endif

Class Sound_obj::__mClass;

void Sound_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("snow.platform.native.audio.openal.Sound"), hx::TCanCast< Sound_obj> ,sStaticFields,sMemberFields,
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
	half_pi= 1.5707;
}

} // end namespace snow
} // end namespace platform
} // end namespace native
} // end namespace audio
} // end namespace openal
