#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_ds_BalancedTree
#include <haxe/ds/BalancedTree.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_snow_Snow
#include <snow/Snow.h>
#endif
#ifndef INCLUDED_snow_assets_Asset
#include <snow/assets/Asset.h>
#endif
#ifndef INCLUDED_snow_assets_AssetAudio
#include <snow/assets/AssetAudio.h>
#endif
#ifndef INCLUDED_snow_assets_Assets
#include <snow/assets/Assets.h>
#endif
#ifndef INCLUDED_snow_audio_Audio
#include <snow/audio/Audio.h>
#endif
#ifndef INCLUDED_snow_audio_AudioSystemBinding
#include <snow/audio/AudioSystemBinding.h>
#endif
#ifndef INCLUDED_snow_audio_SoundBinding
#include <snow/audio/SoundBinding.h>
#endif
#ifndef INCLUDED_snow_audio__Audio_AudioHandleMap
#include <snow/audio/_Audio/AudioHandleMap.h>
#endif
#ifndef INCLUDED_snow_platform_native_audio_AudioSystem
#include <snow/platform/native/audio/AudioSystem.h>
#endif
#ifndef INCLUDED_snow_platform_native_audio_Sound
#include <snow/platform/native/audio/Sound.h>
#endif
#ifndef INCLUDED_snow_platform_native_audio_SoundStream
#include <snow/platform/native/audio/SoundStream.h>
#endif
#ifndef INCLUDED_snow_platform_native_audio_openal_AudioSystem
#include <snow/platform/native/audio/openal/AudioSystem.h>
#endif
#ifndef INCLUDED_snow_platform_native_audio_openal_Sound
#include <snow/platform/native/audio/openal/Sound.h>
#endif
#ifndef INCLUDED_snow_platform_native_audio_openal_SoundStream
#include <snow/platform/native/audio/openal/SoundStream.h>
#endif
#ifndef INCLUDED_snow_utils_AbstractClass
#include <snow/utils/AbstractClass.h>
#endif
namespace snow{
namespace audio{

Void Audio_obj::__construct(::snow::Snow _lib)
{
HX_STACK_FRAME("snow.audio.Audio","new",0xd4a80325,"snow.audio.Audio.new","snow/audio/Audio.hx",19,0x6fc470ad)
HX_STACK_THIS(this)
HX_STACK_ARG(_lib,"_lib")
{
	HX_STACK_LINE(24)
	this->active = false;
	HX_STACK_LINE(39)
	this->lib = _lib;
	HX_STACK_LINE(41)
	::snow::platform::native::audio::openal::AudioSystem _g = ::snow::platform::native::audio::openal::AudioSystem_obj::__new(hx::ObjectPtr<OBJ_>(this),this->lib);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(41)
	this->platform = _g;
	HX_STACK_LINE(43)
	this->platform->init();
	HX_STACK_LINE(45)
	::haxe::ds::StringMap _g1 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(45)
	this->sound_list = _g1;
	HX_STACK_LINE(46)
	::haxe::ds::StringMap _g2 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(46)
	this->stream_list = _g2;
	HX_STACK_LINE(47)
	::snow::audio::_Audio::AudioHandleMap _g3 = ::snow::audio::_Audio::AudioHandleMap_obj::__new();		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(47)
	this->handles = _g3;
	HX_STACK_LINE(49)
	this->active = true;
}
;
	return null();
}

//Audio_obj::~Audio_obj() { }

Dynamic Audio_obj::__CreateEmpty() { return  new Audio_obj; }
hx::ObjectPtr< Audio_obj > Audio_obj::__new(::snow::Snow _lib)
{  hx::ObjectPtr< Audio_obj > result = new Audio_obj();
	result->__construct(_lib);
	return result;}

Dynamic Audio_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Audio_obj > result = new Audio_obj();
	result->__construct(inArgs[0]);
	return result;}

::snow::platform::native::audio::openal::Sound Audio_obj::create( ::String _id,::String __o__name,Dynamic __o_streaming){
::String _name = __o__name.Default(HX_CSTRING(""));
Dynamic streaming = __o_streaming.Default(false);
	HX_STACK_FRAME("snow.audio.Audio","create",0xa31d7d57,"snow.audio.Audio.create","snow/audio/Audio.hx",58,0x6fc470ad)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_id,"_id")
	HX_STACK_ARG(_name,"_name")
	HX_STACK_ARG(streaming,"streaming")
{
		HX_STACK_LINE(58)
		Array< ::Dynamic > _g = Array_obj< ::Dynamic >::__new().Add(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(60)
		if (((_name == HX_CSTRING("")))){
			HX_STACK_LINE(61)
			::String _g1 = this->lib->get_uniqueid();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(61)
			_name = _g1;
		}
		HX_STACK_LINE(67)
		Array< ::Dynamic > sound = Array_obj< ::Dynamic >::__new().Add(null());		HX_STACK_VAR(sound,"sound");
		struct _Function_1_1{
			inline static Dynamic Block( Array< ::Dynamic > &_g,Dynamic &streaming,Array< ::Dynamic > &sound){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","snow/audio/Audio.hx",72,0x6fc470ad)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("load") , !(streaming),false);

					HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,Array< ::Dynamic >,_g,Array< ::Dynamic >,sound)
					Void run(::snow::assets::AssetAudio asset){
						HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","snow/audio/Audio.hx",74,0x6fc470ad)
						HX_STACK_ARG(asset,"asset")
						{
							HX_STACK_LINE(74)
							if (((bool((asset != null())) && bool((sound->__get((int)0).StaticCast< ::snow::platform::native::audio::openal::Sound >() != null()))))){
								HX_STACK_LINE(75)
								_g->__get((int)0).StaticCast< ::snow::audio::Audio >()->handles->set(asset->audio->__Field(HX_CSTRING("handle"),true),sound->__get((int)0).StaticCast< ::snow::platform::native::audio::openal::Sound >());
								HX_STACK_LINE(76)
								sound->__get((int)0).StaticCast< ::snow::platform::native::audio::openal::Sound >()->set_info(asset->audio);
							}
						}
						return null();
					}
					HX_END_LOCAL_FUNC1((void))

					__result->Add(HX_CSTRING("onload") ,  Dynamic(new _Function_2_1(_g,sound)),true);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(72)
		::snow::assets::AssetAudio _asset = this->lib->assets->audio(_id,_Function_1_1::Block(_g,streaming,sound));		HX_STACK_VAR(_asset,"_asset");
		HX_STACK_LINE(84)
		if ((!(streaming))){
			HX_STACK_LINE(86)
			::snow::platform::native::audio::openal::Sound _g1 = ::snow::platform::native::audio::openal::Sound_obj::__new(hx::ObjectPtr<OBJ_>(this),_name);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(86)
			sound[(int)0] = _g1;
		}
		else{
			HX_STACK_LINE(90)
			::snow::platform::native::audio::openal::SoundStream sound_stream = ::snow::platform::native::audio::openal::SoundStream_obj::__new(hx::ObjectPtr<OBJ_>(this),_name);		HX_STACK_VAR(sound_stream,"sound_stream");
			HX_STACK_LINE(95)
			this->stream_list->set(_name,sound_stream);
			HX_STACK_LINE(97)
			sound[(int)0] = sound_stream;
		}
		HX_STACK_LINE(102)
		this->sound_list->set(_name,sound->__get((int)0).StaticCast< ::snow::platform::native::audio::openal::Sound >());
		HX_STACK_LINE(104)
		return sound->__get((int)0).StaticCast< ::snow::platform::native::audio::openal::Sound >();
	}
}


HX_DEFINE_DYNAMIC_FUNC3(Audio_obj,create,return )

Void Audio_obj::uncreate( ::String _name){
{
		HX_STACK_FRAME("snow.audio.Audio","uncreate",0x15db3930,"snow.audio.Audio.uncreate","snow/audio/Audio.hx",109,0x6fc470ad)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_name,"_name")
		HX_STACK_LINE(111)
		::snow::platform::native::audio::openal::Sound _sound = this->sound_list->get(_name);		HX_STACK_VAR(_sound,"_sound");
		HX_STACK_LINE(113)
		if (((_sound == null()))){
			HX_STACK_LINE(114)
			::haxe::Log_obj::trace((HX_CSTRING("    i / audio / ") + ((HX_CSTRING("can't find sound, unable to uncreate, use create first: ") + _name))),hx::SourceInfo(HX_CSTRING("Audio.hx"),114,HX_CSTRING("snow.audio.Audio"),HX_CSTRING("uncreate")));
		}
		HX_STACK_LINE(118)
		_sound->destroy();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Audio_obj,uncreate,(void))

Void Audio_obj::on( ::String _name,::String _event,Dynamic _handler){
{
		HX_STACK_FRAME("snow.audio.Audio","on",0x07d76dfa,"snow.audio.Audio.on","snow/audio/Audio.hx",123,0x6fc470ad)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_name,"_name")
		HX_STACK_ARG(_event,"_event")
		HX_STACK_ARG(_handler,"_handler")
		HX_STACK_LINE(124)
		::snow::platform::native::audio::openal::Sound sound = this->get(_name);		HX_STACK_VAR(sound,"sound");
		HX_STACK_LINE(125)
		if (((sound != null()))){
			HX_STACK_LINE(126)
			sound->on(_event,_handler);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Audio_obj,on,(void))

Void Audio_obj::off( ::String _name,::String _event,Dynamic _handler){
{
		HX_STACK_FRAME("snow.audio.Audio","off",0xd4a8c634,"snow.audio.Audio.off","snow/audio/Audio.hx",131,0x6fc470ad)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_name,"_name")
		HX_STACK_ARG(_event,"_event")
		HX_STACK_ARG(_handler,"_handler")
		HX_STACK_LINE(132)
		::snow::platform::native::audio::openal::Sound sound = this->get(_name);		HX_STACK_VAR(sound,"sound");
		HX_STACK_LINE(133)
		if (((sound != null()))){
			HX_STACK_LINE(134)
			sound->off(_event,_handler);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Audio_obj,off,(void))

::snow::platform::native::audio::openal::Sound Audio_obj::get( ::String _name){
	HX_STACK_FRAME("snow.audio.Audio","get",0xd4a2b35b,"snow.audio.Audio.get","snow/audio/Audio.hx",139,0x6fc470ad)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_name,"_name")
	HX_STACK_LINE(141)
	::snow::platform::native::audio::openal::Sound _sound = this->sound_list->get(_name);		HX_STACK_VAR(_sound,"_sound");
	HX_STACK_LINE(143)
	if (((_sound == null()))){
		HX_STACK_LINE(144)
		::haxe::Log_obj::trace((HX_CSTRING("    i / audio / ") + ((HX_CSTRING("sound not found, use create first: ") + _name))),hx::SourceInfo(HX_CSTRING("Audio.hx"),144,HX_CSTRING("snow.audio.Audio"),HX_CSTRING("get")));
	}
	HX_STACK_LINE(147)
	return _sound;
}


HX_DEFINE_DYNAMIC_FUNC1(Audio_obj,get,return )

Float Audio_obj::volume( ::String _name,Dynamic _volume){
	HX_STACK_FRAME("snow.audio.Audio","volume",0x86614035,"snow.audio.Audio.volume","snow/audio/Audio.hx",153,0x6fc470ad)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_name,"_name")
	HX_STACK_ARG(_volume,"_volume")
	HX_STACK_LINE(154)
	::snow::platform::native::audio::openal::Sound sound = this->get(_name);		HX_STACK_VAR(sound,"sound");
	HX_STACK_LINE(155)
	if (((sound != null()))){
		HX_STACK_LINE(156)
		if (((_volume != null()))){
			HX_STACK_LINE(157)
			return sound->set_volume(_volume);
		}
		else{
			HX_STACK_LINE(159)
			return sound->get_volume();
		}
	}
	HX_STACK_LINE(162)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC2(Audio_obj,volume,return )

Float Audio_obj::pan( ::String _name,Dynamic _pan){
	HX_STACK_FRAME("snow.audio.Audio","pan",0xd4a98422,"snow.audio.Audio.pan","snow/audio/Audio.hx",167,0x6fc470ad)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_name,"_name")
	HX_STACK_ARG(_pan,"_pan")
	HX_STACK_LINE(168)
	::snow::platform::native::audio::openal::Sound sound = this->get(_name);		HX_STACK_VAR(sound,"sound");
	HX_STACK_LINE(169)
	if (((sound != null()))){
		HX_STACK_LINE(170)
		if (((_pan != null()))){
			HX_STACK_LINE(171)
			return sound->set_pan(_pan);
		}
		else{
			HX_STACK_LINE(173)
			return sound->get_pan();
		}
	}
	HX_STACK_LINE(176)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC2(Audio_obj,pan,return )

Float Audio_obj::pitch( ::String _name,Dynamic _pitch){
	HX_STACK_FRAME("snow.audio.Audio","pitch",0x7a7ae9c5,"snow.audio.Audio.pitch","snow/audio/Audio.hx",181,0x6fc470ad)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_name,"_name")
	HX_STACK_ARG(_pitch,"_pitch")
	HX_STACK_LINE(182)
	::snow::platform::native::audio::openal::Sound sound = this->get(_name);		HX_STACK_VAR(sound,"sound");
	HX_STACK_LINE(183)
	if (((sound != null()))){
		HX_STACK_LINE(184)
		if (((_pitch != null()))){
			HX_STACK_LINE(185)
			return sound->set_pitch(_pitch);
		}
		else{
			HX_STACK_LINE(187)
			return sound->get_pitch();
		}
	}
	HX_STACK_LINE(190)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC2(Audio_obj,pitch,return )

Float Audio_obj::position( ::String _name,Dynamic _position){
	HX_STACK_FRAME("snow.audio.Audio","position",0x627f43c4,"snow.audio.Audio.position","snow/audio/Audio.hx",195,0x6fc470ad)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_name,"_name")
	HX_STACK_ARG(_position,"_position")
	HX_STACK_LINE(196)
	::snow::platform::native::audio::openal::Sound sound = this->get(_name);		HX_STACK_VAR(sound,"sound");
	HX_STACK_LINE(197)
	if (((sound != null()))){
		HX_STACK_LINE(198)
		if (((_position != null()))){
			HX_STACK_LINE(199)
			return sound->set_position(_position);
		}
		else{
			HX_STACK_LINE(201)
			return sound->get_position();
		}
	}
	HX_STACK_LINE(204)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC2(Audio_obj,position,return )

Float Audio_obj::duration( ::String _name){
	HX_STACK_FRAME("snow.audio.Audio","duration",0xac12b26f,"snow.audio.Audio.duration","snow/audio/Audio.hx",209,0x6fc470ad)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_name,"_name")
	HX_STACK_LINE(210)
	::snow::platform::native::audio::openal::Sound sound = this->get(_name);		HX_STACK_VAR(sound,"sound");
	HX_STACK_LINE(211)
	if (((sound != null()))){
		HX_STACK_LINE(212)
		return sound->get_duration();
	}
	HX_STACK_LINE(214)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC1(Audio_obj,duration,return )

Void Audio_obj::play( ::String _name){
{
		HX_STACK_FRAME("snow.audio.Audio","play",0x3fb2678f,"snow.audio.Audio.play","snow/audio/Audio.hx",218,0x6fc470ad)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_name,"_name")
		HX_STACK_LINE(220)
		if ((!(this->active))){
			HX_STACK_LINE(221)
			return null();
		}
		HX_STACK_LINE(224)
		::snow::platform::native::audio::openal::Sound sound = this->get(_name);		HX_STACK_VAR(sound,"sound");
		HX_STACK_LINE(225)
		if (((sound != null()))){
			HX_STACK_LINE(226)
			sound->play();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Audio_obj,play,(void))

Void Audio_obj::loop( ::String _name){
{
		HX_STACK_FRAME("snow.audio.Audio","loop",0x3d0fdfff,"snow.audio.Audio.loop","snow/audio/Audio.hx",231,0x6fc470ad)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_name,"_name")
		HX_STACK_LINE(233)
		if ((!(this->active))){
			HX_STACK_LINE(234)
			return null();
		}
		HX_STACK_LINE(237)
		::snow::platform::native::audio::openal::Sound sound = this->get(_name);		HX_STACK_VAR(sound,"sound");
		HX_STACK_LINE(238)
		if (((sound != null()))){
			HX_STACK_LINE(239)
			sound->loop();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Audio_obj,loop,(void))

Void Audio_obj::pause( ::String _name){
{
		HX_STACK_FRAME("snow.audio.Audio","pause",0x753204fb,"snow.audio.Audio.pause","snow/audio/Audio.hx",244,0x6fc470ad)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_name,"_name")
		HX_STACK_LINE(246)
		if ((!(this->active))){
			HX_STACK_LINE(247)
			return null();
		}
		HX_STACK_LINE(250)
		::snow::platform::native::audio::openal::Sound sound = this->get(_name);		HX_STACK_VAR(sound,"sound");
		HX_STACK_LINE(251)
		if (((sound != null()))){
			HX_STACK_LINE(252)
			sound->pause();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Audio_obj,pause,(void))

Void Audio_obj::stop( ::String _name){
{
		HX_STACK_FRAME("snow.audio.Audio","stop",0x41b4299d,"snow.audio.Audio.stop","snow/audio/Audio.hx",257,0x6fc470ad)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_name,"_name")
		HX_STACK_LINE(259)
		if ((!(this->active))){
			HX_STACK_LINE(260)
			return null();
		}
		HX_STACK_LINE(263)
		::snow::platform::native::audio::openal::Sound sound = this->get(_name);		HX_STACK_VAR(sound,"sound");
		HX_STACK_LINE(264)
		if (((sound != null()))){
			HX_STACK_LINE(265)
			sound->stop();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Audio_obj,stop,(void))

Void Audio_obj::toggle( ::String _name){
{
		HX_STACK_FRAME("snow.audio.Audio","toggle",0xb651d5ef,"snow.audio.Audio.toggle","snow/audio/Audio.hx",270,0x6fc470ad)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_name,"_name")
		HX_STACK_LINE(272)
		if ((!(this->active))){
			HX_STACK_LINE(273)
			return null();
		}
		HX_STACK_LINE(276)
		::snow::platform::native::audio::openal::Sound sound = this->get(_name);		HX_STACK_VAR(sound,"sound");
		HX_STACK_LINE(277)
		if (((sound != null()))){
			HX_STACK_LINE(278)
			sound->toggle();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Audio_obj,toggle,(void))

Void Audio_obj::kill( ::snow::platform::native::audio::openal::Sound _sound){
{
		HX_STACK_FRAME("snow.audio.Audio","kill",0x3c621939,"snow.audio.Audio.kill","snow/audio/Audio.hx",286,0x6fc470ad)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_sound,"_sound")
		HX_STACK_LINE(288)
		this->handles->remove(_sound->get_info()->__Field(HX_CSTRING("handle"),true));
		HX_STACK_LINE(289)
		this->sound_list->remove(_sound->name);
		HX_STACK_LINE(290)
		this->stream_list->remove(_sound->name);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Audio_obj,kill,(void))

Void Audio_obj::suspend( ){
{
		HX_STACK_FRAME("snow.audio.Audio","suspend",0xfc94a8c1,"snow.audio.Audio.suspend","snow/audio/Audio.hx",294,0x6fc470ad)
		HX_STACK_THIS(this)
		HX_STACK_LINE(296)
		if ((!(this->active))){
			HX_STACK_LINE(297)
			return null();
		}
		HX_STACK_LINE(300)
		::haxe::Log_obj::trace(HX_CSTRING("    i / audio / suspending sound context"),hx::SourceInfo(HX_CSTRING("Audio.hx"),300,HX_CSTRING("snow.audio.Audio"),HX_CSTRING("suspend")));
		HX_STACK_LINE(302)
		this->active = false;
		HX_STACK_LINE(304)
		for(::cpp::FastIterator_obj< ::snow::platform::native::audio::openal::SoundStream > *__it = ::cpp::CreateFastIterator< ::snow::platform::native::audio::openal::SoundStream >(this->stream_list->iterator());  __it->hasNext(); ){
			::snow::platform::native::audio::openal::SoundStream sound = __it->next();
			sound->internal_pause();
		}
		HX_STACK_LINE(308)
		this->platform->suspend();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Audio_obj,suspend,(void))

Void Audio_obj::resume( ){
{
		HX_STACK_FRAME("snow.audio.Audio","resume",0x2f928008,"snow.audio.Audio.resume","snow/audio/Audio.hx",312,0x6fc470ad)
		HX_STACK_THIS(this)
		HX_STACK_LINE(314)
		if ((this->active)){
			HX_STACK_LINE(315)
			return null();
		}
		HX_STACK_LINE(318)
		::haxe::Log_obj::trace(HX_CSTRING("    i / audio / resuming sound context"),hx::SourceInfo(HX_CSTRING("Audio.hx"),318,HX_CSTRING("snow.audio.Audio"),HX_CSTRING("resume")));
		HX_STACK_LINE(320)
		this->active = true;
		HX_STACK_LINE(322)
		this->platform->resume();
		HX_STACK_LINE(324)
		for(::cpp::FastIterator_obj< ::snow::platform::native::audio::openal::SoundStream > *__it = ::cpp::CreateFastIterator< ::snow::platform::native::audio::openal::SoundStream >(this->stream_list->iterator());  __it->hasNext(); ){
			::snow::platform::native::audio::openal::SoundStream sound = __it->next();
			sound->internal_play();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Audio_obj,resume,(void))

Void Audio_obj::on_event( Dynamic _event){
{
		HX_STACK_FRAME("snow.audio.Audio","on_event",0xb44934d5,"snow.audio.Audio.on_event","snow/audio/Audio.hx",335,0x6fc470ad)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_event,"_event")
		HX_STACK_LINE(335)
		if (((_event->__Field(HX_CSTRING("type"),true) == (int)10))){
			HX_STACK_LINE(336)
			this->suspend();
		}
		else{
			HX_STACK_LINE(337)
			if (((_event->__Field(HX_CSTRING("type"),true) == (int)12))){
				HX_STACK_LINE(338)
				this->resume();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Audio_obj,on_event,(void))

Void Audio_obj::destroy( ){
{
		HX_STACK_FRAME("snow.audio.Audio","destroy",0x29cba63f,"snow.audio.Audio.destroy","snow/audio/Audio.hx",359,0x6fc470ad)
		HX_STACK_THIS(this)
		HX_STACK_LINE(361)
		this->active = false;
		HX_STACK_LINE(363)
		for(::cpp::FastIterator_obj< ::snow::platform::native::audio::openal::Sound > *__it = ::cpp::CreateFastIterator< ::snow::platform::native::audio::openal::Sound >(this->sound_list->iterator());  __it->hasNext(); ){
			::snow::platform::native::audio::openal::Sound sound = __it->next();
			sound->destroy();
		}
		HX_STACK_LINE(367)
		this->platform->destroy();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Audio_obj,destroy,(void))

Void Audio_obj::update( ){
{
		HX_STACK_FRAME("snow.audio.Audio","update",0xae139c64,"snow.audio.Audio.update","snow/audio/Audio.hx",373,0x6fc470ad)
		HX_STACK_THIS(this)
		HX_STACK_LINE(375)
		if ((!(this->active))){
			HX_STACK_LINE(376)
			return null();
		}
		HX_STACK_LINE(379)
		for(::cpp::FastIterator_obj< ::snow::platform::native::audio::openal::Sound > *__it = ::cpp::CreateFastIterator< ::snow::platform::native::audio::openal::Sound >(this->sound_list->iterator());  __it->hasNext(); ){
			::snow::platform::native::audio::openal::Sound _sound = __it->next();
			if ((_sound->playing)){
				HX_STACK_LINE(381)
				_sound->internal_update();
			}
;
		}
		HX_STACK_LINE(385)
		this->platform->process();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Audio_obj,update,(void))


Audio_obj::Audio_obj()
{
}

void Audio_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Audio);
	HX_MARK_MEMBER_NAME(platform,"platform");
	HX_MARK_MEMBER_NAME(active,"active");
	HX_MARK_MEMBER_NAME(lib,"lib");
	HX_MARK_MEMBER_NAME(handles,"handles");
	HX_MARK_MEMBER_NAME(sound_list,"sound_list");
	HX_MARK_MEMBER_NAME(stream_list,"stream_list");
	HX_MARK_END_CLASS();
}

void Audio_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(platform,"platform");
	HX_VISIT_MEMBER_NAME(active,"active");
	HX_VISIT_MEMBER_NAME(lib,"lib");
	HX_VISIT_MEMBER_NAME(handles,"handles");
	HX_VISIT_MEMBER_NAME(sound_list,"sound_list");
	HX_VISIT_MEMBER_NAME(stream_list,"stream_list");
}

Dynamic Audio_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"on") ) { return on_dyn(); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"lib") ) { return lib; }
		if (HX_FIELD_EQ(inName,"off") ) { return off_dyn(); }
		if (HX_FIELD_EQ(inName,"get") ) { return get_dyn(); }
		if (HX_FIELD_EQ(inName,"pan") ) { return pan_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"play") ) { return play_dyn(); }
		if (HX_FIELD_EQ(inName,"loop") ) { return loop_dyn(); }
		if (HX_FIELD_EQ(inName,"stop") ) { return stop_dyn(); }
		if (HX_FIELD_EQ(inName,"kill") ) { return kill_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"pitch") ) { return pitch_dyn(); }
		if (HX_FIELD_EQ(inName,"pause") ) { return pause_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"active") ) { return active; }
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		if (HX_FIELD_EQ(inName,"volume") ) { return volume_dyn(); }
		if (HX_FIELD_EQ(inName,"toggle") ) { return toggle_dyn(); }
		if (HX_FIELD_EQ(inName,"resume") ) { return resume_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"handles") ) { return handles; }
		if (HX_FIELD_EQ(inName,"suspend") ) { return suspend_dyn(); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"platform") ) { return platform; }
		if (HX_FIELD_EQ(inName,"uncreate") ) { return uncreate_dyn(); }
		if (HX_FIELD_EQ(inName,"position") ) { return position_dyn(); }
		if (HX_FIELD_EQ(inName,"duration") ) { return duration_dyn(); }
		if (HX_FIELD_EQ(inName,"on_event") ) { return on_event_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"sound_list") ) { return sound_list; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"stream_list") ) { return stream_list; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Audio_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"lib") ) { lib=inValue.Cast< ::snow::Snow >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"active") ) { active=inValue.Cast< bool >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"handles") ) { handles=inValue.Cast< ::snow::audio::_Audio::AudioHandleMap >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"platform") ) { platform=inValue.Cast< ::snow::platform::native::audio::openal::AudioSystem >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"sound_list") ) { sound_list=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"stream_list") ) { stream_list=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Audio_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("platform"));
	outFields->push(HX_CSTRING("active"));
	outFields->push(HX_CSTRING("lib"));
	outFields->push(HX_CSTRING("handles"));
	outFields->push(HX_CSTRING("sound_list"));
	outFields->push(HX_CSTRING("stream_list"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::snow::platform::native::audio::openal::AudioSystem*/ ,(int)offsetof(Audio_obj,platform),HX_CSTRING("platform")},
	{hx::fsBool,(int)offsetof(Audio_obj,active),HX_CSTRING("active")},
	{hx::fsObject /*::snow::Snow*/ ,(int)offsetof(Audio_obj,lib),HX_CSTRING("lib")},
	{hx::fsObject /*::snow::audio::_Audio::AudioHandleMap*/ ,(int)offsetof(Audio_obj,handles),HX_CSTRING("handles")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(Audio_obj,sound_list),HX_CSTRING("sound_list")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(Audio_obj,stream_list),HX_CSTRING("stream_list")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("platform"),
	HX_CSTRING("active"),
	HX_CSTRING("lib"),
	HX_CSTRING("handles"),
	HX_CSTRING("sound_list"),
	HX_CSTRING("stream_list"),
	HX_CSTRING("create"),
	HX_CSTRING("uncreate"),
	HX_CSTRING("on"),
	HX_CSTRING("off"),
	HX_CSTRING("get"),
	HX_CSTRING("volume"),
	HX_CSTRING("pan"),
	HX_CSTRING("pitch"),
	HX_CSTRING("position"),
	HX_CSTRING("duration"),
	HX_CSTRING("play"),
	HX_CSTRING("loop"),
	HX_CSTRING("pause"),
	HX_CSTRING("stop"),
	HX_CSTRING("toggle"),
	HX_CSTRING("kill"),
	HX_CSTRING("suspend"),
	HX_CSTRING("resume"),
	HX_CSTRING("on_event"),
	HX_CSTRING("destroy"),
	HX_CSTRING("update"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Audio_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Audio_obj::__mClass,"__mClass");
};

#endif

Class Audio_obj::__mClass;

void Audio_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("snow.audio.Audio"), hx::TCanCast< Audio_obj> ,sStaticFields,sMemberFields,
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

void Audio_obj::__boot()
{
}

} // end namespace snow
} // end namespace audio
