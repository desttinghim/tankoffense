#include <hxcpp.h>

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
#ifndef INCLUDED_snow_platform_native_audio_SoundStream
#include <snow/platform/native/audio/SoundStream.h>
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
#ifndef INCLUDED_snow_platform_native_audio_openal_SoundStream
#include <snow/platform/native/audio/openal/SoundStream.h>
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

Void SoundStream_obj::__construct(::snow::audio::Audio _manager,::String _name)
{
HX_STACK_FRAME("snow.platform.native.audio.openal.SoundStream","new",0x78451527,"snow.platform.native.audio.openal.SoundStream.new","snow/platform/native/audio/openal/SoundStream.hx",18,0x9a7881c8)
HX_STACK_THIS(this)
HX_STACK_ARG(_manager,"_manager")
HX_STACK_ARG(_name,"_name")
{
	HX_STACK_LINE(340)
	this->current_time = (int)0;
	HX_STACK_LINE(24)
	this->buffers_left = (int)0;
	HX_STACK_LINE(29)
	super::__construct(_manager,_name);
	HX_STACK_LINE(31)
	this->is_stream = true;
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

Dynamic SoundStream_obj::set_info( Dynamic _info){
	HX_STACK_FRAME("snow.platform.native.audio.openal.SoundStream","set_info",0x67d05744,"snow.platform.native.audio.openal.SoundStream.set_info","snow/platform/native/audio/openal/SoundStream.hx",37,0x9a7881c8)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_info,"_info")
	HX_STACK_LINE(41)
	Dynamic _g = this->get_info();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(41)
	if (((_g != null()))){
		HX_STACK_LINE(42)
		this->destroy();
	}
	HX_STACK_LINE(46)
	this->info = null();
	HX_STACK_LINE(49)
	if (((_info == null()))){
		HX_STACK_LINE(51)
		::haxe::Log_obj::trace(HX_CSTRING("i / audio / not creating sound, info was null"),hx::SourceInfo(HX_CSTRING("SoundStream.hx"),51,HX_CSTRING("snow.platform.native.audio.openal.SoundStream"),HX_CSTRING("set_info")));
		HX_STACK_LINE(53)
		return this->get_info();
	}
	HX_STACK_LINE(58)
	this->info = _info;
	HX_STACK_LINE(59)
	this->loaded = true;
	HX_STACK_LINE(73)
	int _g1 = ::snow::platform::native::audio::openal::AL_obj::genSource();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(73)
	this->source = _g1;
	HX_STACK_LINE(76)
	::snow::platform::native::audio::openal::OpenALHelper_obj::default_source_setup(this->source);
	HX_STACK_LINE(81)
	Array< int > _g2 = ::snow::platform::native::audio::openal::AL_obj::genBuffers(this->buffer_count);		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(81)
	this->buffers = _g2;
	HX_STACK_LINE(85)
	{
		HX_STACK_LINE(85)
		int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(85)
		Array< int > _g11 = this->buffers;		HX_STACK_VAR(_g11,"_g11");
		HX_STACK_LINE(85)
		while((true)){
			HX_STACK_LINE(85)
			if ((!(((_g3 < _g11->length))))){
				HX_STACK_LINE(85)
				break;
			}
			HX_STACK_LINE(85)
			int b = _g11->__get(_g3);		HX_STACK_VAR(b,"b");
			HX_STACK_LINE(85)
			++(_g3);
			HX_STACK_LINE(136)
			Dynamic();
		}
	}
	HX_STACK_LINE(89)
	Dynamic _g3 = this->get_info();		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(89)
	int _g4 = ::snow::platform::native::audio::openal::OpenALHelper_obj::determine_format(_g3);		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(89)
	this->format = _g4;
	HX_STACK_LINE(92)
	this->init_queue(null());
	HX_STACK_LINE(97)
	this->emit(HX_CSTRING("load"));
	HX_STACK_LINE(99)
	return this->get_info();
}


Dynamic SoundStream_obj::fill_buffer( int _buffer){
	HX_STACK_FRAME("snow.platform.native.audio.openal.SoundStream","fill_buffer",0xffd40a43,"snow.platform.native.audio.openal.SoundStream.fill_buffer","snow/platform/native/audio/openal/SoundStream.hx",105,0x9a7881c8)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_buffer,"_buffer")
	HX_STACK_LINE(108)
	Dynamic _blob = this->data_get((int)-1,this->buffer_length);		HX_STACK_VAR(_blob,"_blob");
	HX_STACK_LINE(110)
	if (((bool((bool((_blob != null())) && bool((_blob->__Field(HX_CSTRING("bytes"),true) != null())))) && bool((_blob->__Field(HX_CSTRING("bytes"),true)->__Field(HX_CSTRING("length"),true) != (int)0))))){
		HX_STACK_LINE(111)
		::snow::platform::native::utils::Float32Array _g = ::snow::platform::native::utils::Float32Array_obj::__new(_blob->__Field(HX_CSTRING("bytes"),true),null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(111)
		::snow::platform::native::audio::openal::AL_obj::bufferData(_buffer,this->format,_g,_blob->__Field(HX_CSTRING("bytes"),true)->__Field(HX_CSTRING("length"),true),this->get_info()->__Field(HX_CSTRING("data"),true)->__Field(HX_CSTRING("rate"),true));
		HX_STACK_LINE(111)
		::snow::platform::native::audio::openal::AL_obj::getError();
	}
	HX_STACK_LINE(114)
	return _blob;
}


HX_DEFINE_DYNAMIC_FUNC1(SoundStream_obj,fill_buffer,return )

Void SoundStream_obj::init_queue( Dynamic __o__buffer_start){
Dynamic _buffer_start = __o__buffer_start.Default(-1);
	HX_STACK_FRAME("snow.platform.native.audio.openal.SoundStream","init_queue",0xde38adfb,"snow.platform.native.audio.openal.SoundStream.init_queue","snow/platform/native/audio/openal/SoundStream.hx",121,0x9a7881c8)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_buffer_start,"_buffer_start")
{
		HX_STACK_LINE(123)
		if (((_buffer_start != (int)-1))){
			HX_STACK_LINE(124)
			this->data_seek(_buffer_start);
		}
		HX_STACK_LINE(127)
		{
			HX_STACK_LINE(127)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(127)
			int _g = this->buffer_count;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(127)
			while((true)){
				HX_STACK_LINE(127)
				if ((!(((_g1 < _g))))){
					HX_STACK_LINE(127)
					break;
				}
				HX_STACK_LINE(127)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(128)
				this->fill_buffer(this->buffers->__get(i));
				HX_STACK_LINE(129)
				::snow::platform::native::audio::openal::AL_obj::sourceQueueBuffer(this->source,this->buffers->__get(i));
			}
		}
		HX_STACK_LINE(132)
		this->buffers_left = this->buffer_count;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(SoundStream_obj,init_queue,(void))

Void SoundStream_obj::flush_queue( ){
{
		HX_STACK_FRAME("snow.platform.native.audio.openal.SoundStream","flush_queue",0x3b0f865d,"snow.platform.native.audio.openal.SoundStream.flush_queue","snow/platform/native/audio/openal/SoundStream.hx",140,0x9a7881c8)
		HX_STACK_THIS(this)
		HX_STACK_LINE(142)
		int queued = ::snow::platform::native::audio::openal::AL_obj::getSourcei(this->source,::snow::platform::native::audio::openal::AL_obj::BUFFERS_QUEUED);		HX_STACK_VAR(queued,"queued");
		HX_STACK_LINE(146)
		{
			HX_STACK_LINE(146)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(146)
			while((true)){
				HX_STACK_LINE(146)
				if ((!(((_g < queued))))){
					HX_STACK_LINE(146)
					break;
				}
				HX_STACK_LINE(146)
				int i = (_g)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(147)
				::snow::platform::native::audio::openal::AL_obj::sourceUnqueueBuffer(this->source);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(SoundStream_obj,flush_queue,(void))

bool SoundStream_obj::update_stream( ){
	HX_STACK_FRAME("snow.platform.native.audio.openal.SoundStream","update_stream",0xee5506bd,"snow.platform.native.audio.openal.SoundStream.update_stream","snow/platform/native/audio/openal/SoundStream.hx",153,0x9a7881c8)
	HX_STACK_THIS(this)
	HX_STACK_LINE(155)
	bool still_busy = true;		HX_STACK_VAR(still_busy,"still_busy");
	HX_STACK_LINE(159)
	int processed_buffers = ::snow::platform::native::audio::openal::AL_obj::getSourcei(this->source,::snow::platform::native::audio::openal::AL_obj::BUFFERS_PROCESSED);		HX_STACK_VAR(processed_buffers,"processed_buffers");
	HX_STACK_LINE(162)
	if (((processed_buffers > this->buffer_count))){
		HX_STACK_LINE(163)
		processed_buffers = this->buffer_count;
	}
	HX_STACK_LINE(168)
	while((true)){
		HX_STACK_LINE(168)
		if ((!(((processed_buffers > (int)0))))){
			HX_STACK_LINE(168)
			break;
		}
		HX_STACK_LINE(170)
		int _buffer = ::snow::platform::native::audio::openal::AL_obj::sourceUnqueueBuffer(this->source);		HX_STACK_VAR(_buffer,"_buffer");
		HX_STACK_LINE(171)
		int _buffer_size = ::snow::platform::native::audio::openal::AL_obj::getBufferi(_buffer,::snow::platform::native::audio::openal::AL_obj::SIZE);		HX_STACK_VAR(_buffer_size,"_buffer_size");
		HX_STACK_LINE(173)
		Float _g = this->bytes_to_seconds(_buffer_size);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(173)
		hx::AddEq(this->current_time,_g);
		HX_STACK_LINE(180)
		Dynamic blob = this->fill_buffer(_buffer);		HX_STACK_VAR(blob,"blob");
		HX_STACK_LINE(182)
		bool skip_queue;		HX_STACK_VAR(skip_queue,"skip_queue");
		HX_STACK_LINE(182)
		if ((!(this->get_looping()))){
			HX_STACK_LINE(182)
			skip_queue = blob->__Field(HX_CSTRING("complete"),true);
		}
		else{
			HX_STACK_LINE(182)
			skip_queue = false;
		}
		HX_STACK_LINE(185)
		Float _g1 = this->get_position();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(185)
		Float _g2 = this->get_duration();		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(185)
		if (((  (((_g1 >= _g2))) ? bool(this->get_looping()) : bool(false) ))){
			HX_STACK_LINE(186)
			this->current_time = (int)0;
			HX_STACK_LINE(187)
			this->emit(HX_CSTRING("end"));
		}
		HX_STACK_LINE(190)
		if ((blob->__Field(HX_CSTRING("complete"),true))){
			HX_STACK_LINE(192)
			if ((this->get_looping())){
				HX_STACK_LINE(194)
				this->data_seek((int)0);
			}
			else{
				HX_STACK_LINE(197)
				(this->buffers_left)--;
				HX_STACK_LINE(199)
				if (((this->buffers_left < (int)0))){
					HX_STACK_LINE(200)
					still_busy = false;
				}
				else{
					HX_STACK_LINE(202)
					skip_queue = false;
				}
			}
		}
		HX_STACK_LINE(208)
		if (((bool(!(skip_queue)) && bool((blob->__Field(HX_CSTRING("bytes"),true)->__Field(HX_CSTRING("length"),true) != (int)0))))){
			HX_STACK_LINE(209)
			::snow::platform::native::audio::openal::AL_obj::sourceQueueBuffer(this->source,_buffer);
			HX_STACK_LINE(169)
			Dynamic();
		}
		HX_STACK_LINE(213)
		(processed_buffers)--;
	}
	HX_STACK_LINE(217)
	int _al_play_state = ::snow::platform::native::audio::openal::AL_obj::getSourcei(this->source,::snow::platform::native::audio::openal::AL_obj::SOURCE_STATE);		HX_STACK_VAR(_al_play_state,"_al_play_state");
	HX_STACK_LINE(218)
	if (((_al_play_state != ::snow::platform::native::audio::openal::AL_obj::PLAYING))){
		HX_STACK_LINE(220)
		still_busy = false;
	}
	HX_STACK_LINE(223)
	return still_busy;
}


HX_DEFINE_DYNAMIC_FUNC0(SoundStream_obj,update_stream,return )

Void SoundStream_obj::internal_update( ){
{
		HX_STACK_FRAME("snow.platform.native.audio.openal.SoundStream","internal_update",0xcc1f1552,"snow.platform.native.audio.openal.SoundStream.internal_update","snow/platform/native/audio/openal/SoundStream.hx",227,0x9a7881c8)
		HX_STACK_THIS(this)
		HX_STACK_LINE(229)
		if ((!(this->playing))){
			HX_STACK_LINE(230)
			return null();
		}
		HX_STACK_LINE(233)
		if ((!(this->update_stream()))){
			HX_STACK_LINE(235)
			this->emit(HX_CSTRING("end"));
			HX_STACK_LINE(236)
			this->stop();
		}
	}
return null();
}


Void SoundStream_obj::internal_pause( ){
{
		HX_STACK_FRAME("snow.platform.native.audio.openal.SoundStream","internal_pause",0xba3583cd,"snow.platform.native.audio.openal.SoundStream.internal_pause","snow/platform/native/audio/openal/SoundStream.hx",241,0x9a7881c8)
		HX_STACK_THIS(this)
		HX_STACK_LINE(243)
		::snow::platform::native::audio::openal::AL_obj::sourcePause(this->source);
		HX_STACK_LINE(245)
		this->flush_queue();
	}
return null();
}


Void SoundStream_obj::internal_play( ){
{
		HX_STACK_FRAME("snow.platform.native.audio.openal.SoundStream","internal_play",0xffb828fd,"snow.platform.native.audio.openal.SoundStream.internal_play","snow/platform/native/audio/openal/SoundStream.hx",251,0x9a7881c8)
		HX_STACK_THIS(this)
		HX_STACK_LINE(251)
		if ((this->playing)){
			HX_STACK_LINE(253)
			this->flush_queue();
			HX_STACK_LINE(254)
			this->init_queue(null());
			HX_STACK_LINE(255)
			::snow::platform::native::audio::openal::AL_obj::sourcePlay(this->source);
		}
	}
return null();
}


Void SoundStream_obj::play( ){
{
		HX_STACK_FRAME("snow.platform.native.audio.openal.SoundStream","play",0xc585174d,"snow.platform.native.audio.openal.SoundStream.play","snow/platform/native/audio/openal/SoundStream.hx",262,0x9a7881c8)
		HX_STACK_THIS(this)
		HX_STACK_LINE(264)
		this->playing = true;
		HX_STACK_LINE(265)
		this->paused = false;
		HX_STACK_LINE(268)
		if ((this->get_looping())){
			HX_STACK_LINE(269)
			this->set_looping(false);
		}
		HX_STACK_LINE(272)
		::snow::platform::native::audio::openal::AL_obj::sourcePlay(this->source);
		HX_STACK_LINE(136)
		Dynamic();
	}
return null();
}


Void SoundStream_obj::loop( ){
{
		HX_STACK_FRAME("snow.platform.native.audio.openal.SoundStream","loop",0xc2e28fbd,"snow.platform.native.audio.openal.SoundStream.loop","snow/platform/native/audio/openal/SoundStream.hx",278,0x9a7881c8)
		HX_STACK_THIS(this)
		HX_STACK_LINE(280)
		this->playing = true;
		HX_STACK_LINE(281)
		this->paused = false;
		HX_STACK_LINE(283)
		if ((!(this->get_looping()))){
			HX_STACK_LINE(284)
			this->set_looping(true);
		}
		HX_STACK_LINE(287)
		::snow::platform::native::audio::openal::AL_obj::sourcePlay(this->source);
		HX_STACK_LINE(136)
		Dynamic();
	}
return null();
}


Void SoundStream_obj::pause( ){
{
		HX_STACK_FRAME("snow.platform.native.audio.openal.SoundStream","pause",0x07b91b7d,"snow.platform.native.audio.openal.SoundStream.pause","snow/platform/native/audio/openal/SoundStream.hx",293,0x9a7881c8)
		HX_STACK_THIS(this)
		HX_STACK_LINE(295)
		this->playing = false;
		HX_STACK_LINE(296)
		this->paused = true;
		HX_STACK_LINE(298)
		::snow::platform::native::audio::openal::AL_obj::sourcePause(this->source);
		HX_STACK_LINE(302)
		this->flush_queue();
	}
return null();
}


Void SoundStream_obj::stop( ){
{
		HX_STACK_FRAME("snow.platform.native.audio.openal.SoundStream","stop",0xc786d95b,"snow.platform.native.audio.openal.SoundStream.stop","snow/platform/native/audio/openal/SoundStream.hx",306,0x9a7881c8)
		HX_STACK_THIS(this)
		HX_STACK_LINE(308)
		this->playing = false;
		HX_STACK_LINE(310)
		::snow::platform::native::audio::openal::AL_obj::sourceStop(this->source);
		HX_STACK_LINE(312)
		this->flush_queue();
		HX_STACK_LINE(313)
		this->set_position((int)0);
		HX_STACK_LINE(136)
		Dynamic();
	}
return null();
}


Void SoundStream_obj::destroy( ){
{
		HX_STACK_FRAME("snow.platform.native.audio.openal.SoundStream","destroy",0xbd26e141,"snow.platform.native.audio.openal.SoundStream.destroy","snow/platform/native/audio/openal/SoundStream.hx",319,0x9a7881c8)
		HX_STACK_THIS(this)
		HX_STACK_LINE(322)
		this->stop();
		HX_STACK_LINE(324)
		::snow::platform::native::audio::openal::AL_obj::deleteSource(this->source);
		HX_STACK_LINE(328)
		::snow::platform::native::audio::openal::AL_obj::deleteBuffers(this->buffers);
		HX_STACK_LINE(332)
		this->manager->kill(hx::ObjectPtr<OBJ_>(this));
	}
return null();
}


int SoundStream_obj::get_position_bytes( ){
	HX_STACK_FRAME("snow.platform.native.audio.openal.SoundStream","get_position_bytes",0x360268f7,"snow.platform.native.audio.openal.SoundStream.get_position_bytes","snow/platform/native/audio/openal/SoundStream.hx",342,0x9a7881c8)
	HX_STACK_THIS(this)
	HX_STACK_LINE(344)
	Float _g = this->get_position();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(344)
	return this->seconds_to_bytes(_g);
}


Float SoundStream_obj::get_position( ){
	HX_STACK_FRAME("snow.platform.native.audio.openal.SoundStream","get_position",0x43bdbf0b,"snow.platform.native.audio.openal.SoundStream.get_position","snow/platform/native/audio/openal/SoundStream.hx",348,0x9a7881c8)
	HX_STACK_THIS(this)
	HX_STACK_LINE(351)
	Float _pos_sec = ::snow::platform::native::audio::openal::AL_obj::getSourcef(this->source,::snow::platform::native::audio::openal::AL_obj::SEC_OFFSET);		HX_STACK_VAR(_pos_sec,"_pos_sec");
	HX_STACK_LINE(353)
	return (this->current_time + _pos_sec);
}


Float SoundStream_obj::set_pan( Float _pan){
	HX_STACK_FRAME("snow.platform.native.audio.openal.SoundStream","set_pan",0xb26c5f47,"snow.platform.native.audio.openal.SoundStream.set_pan","snow/platform/native/audio/openal/SoundStream.hx",357,0x9a7881c8)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_pan,"_pan")
	HX_STACK_LINE(359)
	Float _g = ::Math_obj::cos((((_pan - (int)1)) * ::snow::platform::native::audio::openal::SoundStream_obj::half_pi));		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(359)
	Float _g1 = ::Math_obj::sin((((_pan + (int)1)) * ::snow::platform::native::audio::openal::SoundStream_obj::half_pi));		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(359)
	::snow::platform::native::audio::openal::AL_obj::source3f(this->source,::snow::platform::native::audio::openal::AL_obj::POSITION,_g,(int)0,_g1);
	HX_STACK_LINE(361)
	return this->pan = _pan;
}


Float SoundStream_obj::set_pitch( Float _pitch){
	HX_STACK_FRAME("snow.platform.native.audio.openal.SoundStream","set_pitch",0x7306982a,"snow.platform.native.audio.openal.SoundStream.set_pitch","snow/platform/native/audio/openal/SoundStream.hx",365,0x9a7881c8)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_pitch,"_pitch")
	HX_STACK_LINE(367)
	::snow::platform::native::audio::openal::AL_obj::sourcef(this->source,::snow::platform::native::audio::openal::AL_obj::PITCH,_pitch);
	HX_STACK_LINE(369)
	return this->pitch = _pitch;
}


Float SoundStream_obj::set_volume( Float _volume){
	HX_STACK_FRAME("snow.platform.native.audio.openal.SoundStream","set_volume",0x080e2a30,"snow.platform.native.audio.openal.SoundStream.set_volume","snow/platform/native/audio/openal/SoundStream.hx",373,0x9a7881c8)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_volume,"_volume")
	HX_STACK_LINE(375)
	::snow::platform::native::audio::openal::AL_obj::sourcef(this->source,::snow::platform::native::audio::openal::AL_obj::GAIN,_volume);
	HX_STACK_LINE(377)
	return this->volume = _volume;
}


int SoundStream_obj::set_position_bytes( int _position_bytes){
	HX_STACK_FRAME("snow.platform.native.audio.openal.SoundStream","set_position_bytes",0x12b19b6b,"snow.platform.native.audio.openal.SoundStream.set_position_bytes","snow/platform/native/audio/openal/SoundStream.hx",381,0x9a7881c8)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_position_bytes,"_position_bytes")
	HX_STACK_LINE(383)
	Float _g = this->bytes_to_seconds(_position_bytes);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(383)
	this->set_position(_g);
	HX_STACK_LINE(385)
	return this->position_bytes = _position_bytes;
}


bool SoundStream_obj::set_looping( bool _looping){
	HX_STACK_FRAME("snow.platform.native.audio.openal.SoundStream","set_looping",0x1b62c7e8,"snow.platform.native.audio.openal.SoundStream.set_looping","snow/platform/native/audio/openal/SoundStream.hx",391,0x9a7881c8)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_looping,"_looping")
	HX_STACK_LINE(391)
	return this->looping = _looping;
}


Float SoundStream_obj::set_position( Float _position){
	HX_STACK_FRAME("snow.platform.native.audio.openal.SoundStream","set_position",0x58b6e27f,"snow.platform.native.audio.openal.SoundStream.set_position","snow/platform/native/audio/openal/SoundStream.hx",395,0x9a7881c8)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_position,"_position")
	HX_STACK_LINE(398)
	::snow::platform::native::audio::openal::AL_obj::sourceStop(this->source);
	HX_STACK_LINE(400)
	this->flush_queue();
	HX_STACK_LINE(403)
	if (((_position < (int)0))){
		HX_STACK_LINE(403)
		_position = (int)0;
	}
	HX_STACK_LINE(404)
	Float _g = this->get_duration();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(404)
	if (((_position > _g))){
		HX_STACK_LINE(404)
		Float _g1 = this->get_duration();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(404)
		_position = _g1;
	}
	HX_STACK_LINE(406)
	this->current_time = _position;
	HX_STACK_LINE(409)
	int _g2 = this->seconds_to_bytes(_position);		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(409)
	this->init_queue(_g2);
	HX_STACK_LINE(412)
	if ((this->playing)){
		HX_STACK_LINE(413)
		::snow::platform::native::audio::openal::AL_obj::sourcePlay(this->source);
	}
	HX_STACK_LINE(416)
	return this->position = _position;
}


Float SoundStream_obj::half_pi;


SoundStream_obj::SoundStream_obj()
{
}

void SoundStream_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SoundStream);
	HX_MARK_MEMBER_NAME(buffers,"buffers");
	HX_MARK_MEMBER_NAME(buffers_left,"buffers_left");
	HX_MARK_MEMBER_NAME(current_time,"current_time");
	::snow::platform::native::audio::SoundStream_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void SoundStream_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(buffers,"buffers");
	HX_VISIT_MEMBER_NAME(buffers_left,"buffers_left");
	HX_VISIT_MEMBER_NAME(current_time,"current_time");
	::snow::platform::native::audio::SoundStream_obj::__Visit(HX_VISIT_ARG);
}

Dynamic SoundStream_obj::__Field(const ::String &inName,bool inCallProp)
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
	case 7:
		if (HX_FIELD_EQ(inName,"half_pi") ) { return half_pi; }
		if (HX_FIELD_EQ(inName,"buffers") ) { return buffers; }
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
		if (HX_FIELD_EQ(inName,"init_queue") ) { return init_queue_dyn(); }
		if (HX_FIELD_EQ(inName,"set_volume") ) { return set_volume_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"fill_buffer") ) { return fill_buffer_dyn(); }
		if (HX_FIELD_EQ(inName,"flush_queue") ) { return flush_queue_dyn(); }
		if (HX_FIELD_EQ(inName,"set_looping") ) { return set_looping_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"buffers_left") ) { return buffers_left; }
		if (HX_FIELD_EQ(inName,"current_time") ) { return current_time; }
		if (HX_FIELD_EQ(inName,"get_position") ) { return get_position_dyn(); }
		if (HX_FIELD_EQ(inName,"set_position") ) { return set_position_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"update_stream") ) { return update_stream_dyn(); }
		if (HX_FIELD_EQ(inName,"internal_play") ) { return internal_play_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"internal_pause") ) { return internal_pause_dyn(); }
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

Dynamic SoundStream_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"half_pi") ) { half_pi=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"buffers") ) { buffers=inValue.Cast< Array< int > >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"buffers_left") ) { buffers_left=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"current_time") ) { current_time=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void SoundStream_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("buffers"));
	outFields->push(HX_CSTRING("buffers_left"));
	outFields->push(HX_CSTRING("current_time"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("half_pi"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Array< int >*/ ,(int)offsetof(SoundStream_obj,buffers),HX_CSTRING("buffers")},
	{hx::fsInt,(int)offsetof(SoundStream_obj,buffers_left),HX_CSTRING("buffers_left")},
	{hx::fsFloat,(int)offsetof(SoundStream_obj,current_time),HX_CSTRING("current_time")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("buffers"),
	HX_CSTRING("buffers_left"),
	HX_CSTRING("set_info"),
	HX_CSTRING("fill_buffer"),
	HX_CSTRING("init_queue"),
	HX_CSTRING("flush_queue"),
	HX_CSTRING("update_stream"),
	HX_CSTRING("internal_update"),
	HX_CSTRING("internal_pause"),
	HX_CSTRING("internal_play"),
	HX_CSTRING("play"),
	HX_CSTRING("loop"),
	HX_CSTRING("pause"),
	HX_CSTRING("stop"),
	HX_CSTRING("destroy"),
	HX_CSTRING("current_time"),
	HX_CSTRING("get_position_bytes"),
	HX_CSTRING("get_position"),
	HX_CSTRING("set_pan"),
	HX_CSTRING("set_pitch"),
	HX_CSTRING("set_volume"),
	HX_CSTRING("set_position_bytes"),
	HX_CSTRING("set_looping"),
	HX_CSTRING("set_position"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SoundStream_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(SoundStream_obj::half_pi,"half_pi");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SoundStream_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(SoundStream_obj::half_pi,"half_pi");
};

#endif

Class SoundStream_obj::__mClass;

void SoundStream_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("snow.platform.native.audio.openal.SoundStream"), hx::TCanCast< SoundStream_obj> ,sStaticFields,sMemberFields,
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
	half_pi= 1.5707;
}

} // end namespace snow
} // end namespace platform
} // end namespace native
} // end namespace audio
} // end namespace openal
