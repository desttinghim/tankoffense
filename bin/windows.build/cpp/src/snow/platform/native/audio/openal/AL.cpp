#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_snow_platform_native_audio_openal_AL
#include <snow/platform/native/audio/openal/AL.h>
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
#ifndef INCLUDED_snow_utils_Libs
#include <snow/utils/Libs.h>
#endif
namespace snow{
namespace platform{
namespace native{
namespace audio{
namespace openal{

Void AL_obj::__construct()
{
	return null();
}

//AL_obj::~AL_obj() { }

Dynamic AL_obj::__CreateEmpty() { return  new AL_obj; }
hx::ObjectPtr< AL_obj > AL_obj::__new()
{  hx::ObjectPtr< AL_obj > result = new AL_obj();
	result->__construct();
	return result;}

Dynamic AL_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< AL_obj > result = new AL_obj();
	result->__construct();
	return result;}

int AL_obj::NONE;

int AL_obj::FALSE;

int AL_obj::TRUE;

int AL_obj::SOURCE_RELATIVE;

int AL_obj::CONE_INNER_ANGLE;

int AL_obj::CONE_OUTER_ANGLE;

int AL_obj::PITCH;

int AL_obj::POSITION;

int AL_obj::DIRECTION;

int AL_obj::VELOCITY;

int AL_obj::LOOPING;

int AL_obj::BUFFER;

int AL_obj::GAIN;

int AL_obj::MIN_GAIN;

int AL_obj::MAX_GAIN;

int AL_obj::ORIENTATION;

int AL_obj::SOURCE_STATE;

int AL_obj::INITIAL;

int AL_obj::PLAYING;

int AL_obj::PAUSED;

int AL_obj::STOPPED;

int AL_obj::BUFFERS_QUEUED;

int AL_obj::BUFFERS_PROCESSED;

int AL_obj::REFERENCE_DISTANCE;

int AL_obj::ROLLOFF_FACTOR;

int AL_obj::CONE_OUTER_GAIN;

int AL_obj::MAX_DISTANCE;

int AL_obj::SEC_OFFSET;

int AL_obj::SAMPLE_OFFSET;

int AL_obj::BYTE_OFFSET;

int AL_obj::SOURCE_TYPE;

int AL_obj::STATIC;

int AL_obj::STREAMING;

int AL_obj::UNDETERMINED;

int AL_obj::FORMAT_MONO8;

int AL_obj::FORMAT_MONO16;

int AL_obj::FORMAT_STEREO8;

int AL_obj::FORMAT_STEREO16;

int AL_obj::FREQUENCY;

int AL_obj::BITS;

int AL_obj::CHANNELS;

int AL_obj::SIZE;

int AL_obj::NO_ERROR;

int AL_obj::INVALID_NAME;

int AL_obj::INVALID_ENUM;

int AL_obj::INVALID_VALUE;

int AL_obj::INVALID_OPERATION;

int AL_obj::OUT_OF_MEMORY;

int AL_obj::VENDOR;

int AL_obj::VERSION;

int AL_obj::RENDERER;

int AL_obj::EXTENSIONS;

int AL_obj::DOPPLER_FACTOR;

int AL_obj::SPEED_OF_SOUND;

int AL_obj::DOPPLER_VELOCITY;

int AL_obj::DISTANCE_MODEL;

int AL_obj::INVERSE_DISTANCE;

int AL_obj::INVERSE_DISTANCE_CLAMPED;

int AL_obj::LINEAR_DISTANCE;

int AL_obj::LINEAR_DISTANCE_CLAMPED;

int AL_obj::EXPONENT_DISTANCE;

int AL_obj::EXPONENT_DISTANCE_CLAMPED;

Void AL_obj::dopplerFactor( Float value){
{
		HX_STACK_FRAME("snow.platform.native.audio.openal.AL","dopplerFactor",0xa79d9a34,"snow.platform.native.audio.openal.AL.dopplerFactor","snow/platform/native/audio/openal/AL.hx",85,0x47acab9a)
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(85)
		::snow::platform::native::audio::openal::AL_obj::alhx_DopplerFactor(value);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AL_obj,dopplerFactor,(void))

Void AL_obj::dopplerVelocity( Float value){
{
		HX_STACK_FRAME("snow.platform.native.audio.openal.AL","dopplerVelocity",0xe79ce6c2,"snow.platform.native.audio.openal.AL.dopplerVelocity","snow/platform/native/audio/openal/AL.hx",89,0x47acab9a)
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(89)
		::snow::platform::native::audio::openal::AL_obj::alhx_DopplerVelocity(value);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AL_obj,dopplerVelocity,(void))

Void AL_obj::speedOfSound( Float value){
{
		HX_STACK_FRAME("snow.platform.native.audio.openal.AL","speedOfSound",0x037f92fa,"snow.platform.native.audio.openal.AL.speedOfSound","snow/platform/native/audio/openal/AL.hx",93,0x47acab9a)
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(93)
		::snow::platform::native::audio::openal::AL_obj::alhx_SpeedOfSound(value);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AL_obj,speedOfSound,(void))

Void AL_obj::distanceModel( int distanceModel){
{
		HX_STACK_FRAME("snow.platform.native.audio.openal.AL","distanceModel",0x0c79ac8b,"snow.platform.native.audio.openal.AL.distanceModel","snow/platform/native/audio/openal/AL.hx",97,0x47acab9a)
		HX_STACK_ARG(distanceModel,"distanceModel")
		HX_STACK_LINE(97)
		::snow::platform::native::audio::openal::AL_obj::alhx_DistanceModel(distanceModel);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AL_obj,distanceModel,(void))

Void AL_obj::enable( int capability){
{
		HX_STACK_FRAME("snow.platform.native.audio.openal.AL","enable",0x3a249d4c,"snow.platform.native.audio.openal.AL.enable","snow/platform/native/audio/openal/AL.hx",103,0x47acab9a)
		HX_STACK_ARG(capability,"capability")
		HX_STACK_LINE(103)
		::snow::platform::native::audio::openal::AL_obj::alhx_Enable(capability);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AL_obj,enable,(void))

Void AL_obj::disable( int capability){
{
		HX_STACK_FRAME("snow.platform.native.audio.openal.AL","disable",0xd90c6aff,"snow.platform.native.audio.openal.AL.disable","snow/platform/native/audio/openal/AL.hx",107,0x47acab9a)
		HX_STACK_ARG(capability,"capability")
		HX_STACK_LINE(107)
		::snow::platform::native::audio::openal::AL_obj::alhx_Disable(capability);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AL_obj,disable,(void))

bool AL_obj::isEnabled( int capability){
	HX_STACK_FRAME("snow.platform.native.audio.openal.AL","isEnabled",0xffb7368e,"snow.platform.native.audio.openal.AL.isEnabled","snow/platform/native/audio/openal/AL.hx",111,0x47acab9a)
	HX_STACK_ARG(capability,"capability")
	HX_STACK_LINE(111)
	return ::snow::platform::native::audio::openal::AL_obj::alhx_IsEnabled(capability);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AL_obj,isEnabled,return )

::String AL_obj::getString( int param){
	HX_STACK_FRAME("snow.platform.native.audio.openal.AL","getString",0x0b0e66de,"snow.platform.native.audio.openal.AL.getString","snow/platform/native/audio/openal/AL.hx",117,0x47acab9a)
	HX_STACK_ARG(param,"param")
	HX_STACK_LINE(117)
	return ::snow::platform::native::audio::openal::AL_obj::alhx_GetString(param);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AL_obj,getString,return )

Array< bool > AL_obj::getBooleanv( int param,Dynamic __o_count){
Dynamic count = __o_count.Default(1);
	HX_STACK_FRAME("snow.platform.native.audio.openal.AL","getBooleanv",0x9d82041b,"snow.platform.native.audio.openal.AL.getBooleanv","snow/platform/native/audio/openal/AL.hx",121,0x47acab9a)
	HX_STACK_ARG(param,"param")
	HX_STACK_ARG(count,"count")
{
		HX_STACK_LINE(121)
		return ::snow::platform::native::audio::openal::AL_obj::alhx_GetBooleanv(param,count);
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(AL_obj,getBooleanv,return )

Array< int > AL_obj::getIntegerv( int param,Dynamic __o_count){
Dynamic count = __o_count.Default(1);
	HX_STACK_FRAME("snow.platform.native.audio.openal.AL","getIntegerv",0xfd9de445,"snow.platform.native.audio.openal.AL.getIntegerv","snow/platform/native/audio/openal/AL.hx",125,0x47acab9a)
	HX_STACK_ARG(param,"param")
	HX_STACK_ARG(count,"count")
{
		HX_STACK_LINE(125)
		return ::snow::platform::native::audio::openal::AL_obj::alhx_GetIntegerv(param,count);
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(AL_obj,getIntegerv,return )

Array< Float > AL_obj::getFloatv( int param,Dynamic __o_count){
Dynamic count = __o_count.Default(1);
	HX_STACK_FRAME("snow.platform.native.audio.openal.AL","getFloatv",0x3b346167,"snow.platform.native.audio.openal.AL.getFloatv","snow/platform/native/audio/openal/AL.hx",129,0x47acab9a)
	HX_STACK_ARG(param,"param")
	HX_STACK_ARG(count,"count")
{
		HX_STACK_LINE(129)
		return ::snow::platform::native::audio::openal::AL_obj::alhx_GetFloatv(param,count);
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(AL_obj,getFloatv,return )

Array< Float > AL_obj::getDoublev( int param,Dynamic __o_count){
Dynamic count = __o_count.Default(1);
	HX_STACK_FRAME("snow.platform.native.audio.openal.AL","getDoublev",0xe7929198,"snow.platform.native.audio.openal.AL.getDoublev","snow/platform/native/audio/openal/AL.hx",133,0x47acab9a)
	HX_STACK_ARG(param,"param")
	HX_STACK_ARG(count,"count")
{
		HX_STACK_LINE(133)
		return ::snow::platform::native::audio::openal::AL_obj::alhx_GetDoublev(param,count);
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(AL_obj,getDoublev,return )

bool AL_obj::getBoolean( int param){
	HX_STACK_FRAME("snow.platform.native.audio.openal.AL","getBoolean",0x2696f7fb,"snow.platform.native.audio.openal.AL.getBoolean","snow/platform/native/audio/openal/AL.hx",137,0x47acab9a)
	HX_STACK_ARG(param,"param")
	HX_STACK_LINE(137)
	return ::snow::platform::native::audio::openal::AL_obj::alhx_GetBoolean(param);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AL_obj,getBoolean,return )

int AL_obj::getInteger( int param){
	HX_STACK_FRAME("snow.platform.native.audio.openal.AL","getInteger",0xbfb3cb11,"snow.platform.native.audio.openal.AL.getInteger","snow/platform/native/audio/openal/AL.hx",141,0x47acab9a)
	HX_STACK_ARG(param,"param")
	HX_STACK_LINE(141)
	return ::snow::platform::native::audio::openal::AL_obj::alhx_GetInteger(param);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AL_obj,getInteger,return )

Float AL_obj::getFloat( int param){
	HX_STACK_FRAME("snow.platform.native.audio.openal.AL","getFloat",0xf83ac82f,"snow.platform.native.audio.openal.AL.getFloat","snow/platform/native/audio/openal/AL.hx",145,0x47acab9a)
	HX_STACK_ARG(param,"param")
	HX_STACK_LINE(145)
	return ::snow::platform::native::audio::openal::AL_obj::alhx_GetFloat(param);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AL_obj,getFloat,return )

Float AL_obj::getDouble( int param){
	HX_STACK_FRAME("snow.platform.native.audio.openal.AL","getDouble",0x2ca9691e,"snow.platform.native.audio.openal.AL.getDouble","snow/platform/native/audio/openal/AL.hx",149,0x47acab9a)
	HX_STACK_ARG(param,"param")
	HX_STACK_LINE(149)
	return ::snow::platform::native::audio::openal::AL_obj::alhx_GetDouble(param);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AL_obj,getDouble,return )

int AL_obj::getError( ){
	HX_STACK_FRAME("snow.platform.native.audio.openal.AL","getError",0x68cdce5b,"snow.platform.native.audio.openal.AL.getError","snow/platform/native/audio/openal/AL.hx",153,0x47acab9a)
	HX_STACK_LINE(153)
	return ::snow::platform::native::audio::openal::AL_obj::alhx_GetError();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(AL_obj,getError,return )

bool AL_obj::isExtensionPresent( ::String extname){
	HX_STACK_FRAME("snow.platform.native.audio.openal.AL","isExtensionPresent",0xa897718f,"snow.platform.native.audio.openal.AL.isExtensionPresent","snow/platform/native/audio/openal/AL.hx",159,0x47acab9a)
	HX_STACK_ARG(extname,"extname")
	HX_STACK_LINE(159)
	return ::snow::platform::native::audio::openal::AL_obj::alhx_IsExtensionPresent(extname);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AL_obj,isExtensionPresent,return )

Dynamic AL_obj::getProcAddress( ::String fname){
	HX_STACK_FRAME("snow.platform.native.audio.openal.AL","getProcAddress",0xd6684391,"snow.platform.native.audio.openal.AL.getProcAddress","snow/platform/native/audio/openal/AL.hx",164,0x47acab9a)
	HX_STACK_ARG(fname,"fname")
	HX_STACK_LINE(164)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AL_obj,getProcAddress,return )

int AL_obj::getEnumValue( ::String ename){
	HX_STACK_FRAME("snow.platform.native.audio.openal.AL","getEnumValue",0x30bb48c3,"snow.platform.native.audio.openal.AL.getEnumValue","snow/platform/native/audio/openal/AL.hx",168,0x47acab9a)
	HX_STACK_ARG(ename,"ename")
	HX_STACK_LINE(168)
	return ::snow::platform::native::audio::openal::AL_obj::alhx_GetEnumValue(ename);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AL_obj,getEnumValue,return )

Void AL_obj::listenerf( int param,Float value){
{
		HX_STACK_FRAME("snow.platform.native.audio.openal.AL","listenerf",0x71161a49,"snow.platform.native.audio.openal.AL.listenerf","snow/platform/native/audio/openal/AL.hx",174,0x47acab9a)
		HX_STACK_ARG(param,"param")
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(174)
		::snow::platform::native::audio::openal::AL_obj::alhx_Listenerf(param,value);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(AL_obj,listenerf,(void))

Void AL_obj::listener3f( int param,Float value1,Float value2,Float value3){
{
		HX_STACK_FRAME("snow.platform.native.audio.openal.AL","listener3f",0x8240b990,"snow.platform.native.audio.openal.AL.listener3f","snow/platform/native/audio/openal/AL.hx",178,0x47acab9a)
		HX_STACK_ARG(param,"param")
		HX_STACK_ARG(value1,"value1")
		HX_STACK_ARG(value2,"value2")
		HX_STACK_ARG(value3,"value3")
		HX_STACK_LINE(178)
		::snow::platform::native::audio::openal::AL_obj::alhx_Listener3f(param,value1,value2,value3);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(AL_obj,listener3f,(void))

Void AL_obj::listenerfv( int param,Array< Float > values){
{
		HX_STACK_FRAME("snow.platform.native.audio.openal.AL","listenerfv",0x8240e60d,"snow.platform.native.audio.openal.AL.listenerfv","snow/platform/native/audio/openal/AL.hx",182,0x47acab9a)
		HX_STACK_ARG(param,"param")
		HX_STACK_ARG(values,"values")
		HX_STACK_LINE(182)
		::snow::platform::native::audio::openal::AL_obj::alhx_Listenerfv(param,values);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(AL_obj,listenerfv,(void))

Void AL_obj::listeneri( int param,int value){
{
		HX_STACK_FRAME("snow.platform.native.audio.openal.AL","listeneri",0x71161a4c,"snow.platform.native.audio.openal.AL.listeneri","snow/platform/native/audio/openal/AL.hx",186,0x47acab9a)
		HX_STACK_ARG(param,"param")
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(186)
		::snow::platform::native::audio::openal::AL_obj::alhx_Listeneri(param,value);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(AL_obj,listeneri,(void))

Void AL_obj::listener3i( int param,int value1,int value2,int value3){
{
		HX_STACK_FRAME("snow.platform.native.audio.openal.AL","listener3i",0x8240b993,"snow.platform.native.audio.openal.AL.listener3i","snow/platform/native/audio/openal/AL.hx",190,0x47acab9a)
		HX_STACK_ARG(param,"param")
		HX_STACK_ARG(value1,"value1")
		HX_STACK_ARG(value2,"value2")
		HX_STACK_ARG(value3,"value3")
		HX_STACK_LINE(190)
		::snow::platform::native::audio::openal::AL_obj::alhx_Listener3i(param,value1,value2,value3);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(AL_obj,listener3i,(void))

Void AL_obj::listeneriv( int param,Array< int > values){
{
		HX_STACK_FRAME("snow.platform.native.audio.openal.AL","listeneriv",0x8240e8aa,"snow.platform.native.audio.openal.AL.listeneriv","snow/platform/native/audio/openal/AL.hx",194,0x47acab9a)
		HX_STACK_ARG(param,"param")
		HX_STACK_ARG(values,"values")
		HX_STACK_LINE(194)
		::snow::platform::native::audio::openal::AL_obj::alhx_Listeneriv(param,values);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(AL_obj,listeneriv,(void))

Float AL_obj::getListenerf( int param){
	HX_STACK_FRAME("snow.platform.native.audio.openal.AL","getListenerf",0xfc42ad85,"snow.platform.native.audio.openal.AL.getListenerf","snow/platform/native/audio/openal/AL.hx",198,0x47acab9a)
	HX_STACK_ARG(param,"param")
	HX_STACK_LINE(198)
	return ::snow::platform::native::audio::openal::AL_obj::alhx_GetListenerf(param);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AL_obj,getListenerf,return )

Array< Float > AL_obj::getListener3f( int param){
	HX_STACK_FRAME("snow.platform.native.audio.openal.AL","getListener3f",0xbe14fad4,"snow.platform.native.audio.openal.AL.getListener3f","snow/platform/native/audio/openal/AL.hx",202,0x47acab9a)
	HX_STACK_ARG(param,"param")
	HX_STACK_LINE(202)
	return ::snow::platform::native::audio::openal::AL_obj::alhx_GetListener3f(param);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AL_obj,getListener3f,return )

Array< Float > AL_obj::getListenerfv( int param,Dynamic __o_count){
Dynamic count = __o_count.Default(1);
	HX_STACK_FRAME("snow.platform.native.audio.openal.AL","getListenerfv",0xbe152751,"snow.platform.native.audio.openal.AL.getListenerfv","snow/platform/native/audio/openal/AL.hx",206,0x47acab9a)
	HX_STACK_ARG(param,"param")
	HX_STACK_ARG(count,"count")
{
		HX_STACK_LINE(206)
		return ::snow::platform::native::audio::openal::AL_obj::alhx_GetListenerfv(param,count);
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(AL_obj,getListenerfv,return )

int AL_obj::getListeneri( int param){
	HX_STACK_FRAME("snow.platform.native.audio.openal.AL","getListeneri",0xfc42ad88,"snow.platform.native.audio.openal.AL.getListeneri","snow/platform/native/audio/openal/AL.hx",210,0x47acab9a)
	HX_STACK_ARG(param,"param")
	HX_STACK_LINE(210)
	return ::snow::platform::native::audio::openal::AL_obj::alhx_GetListeneri(param);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AL_obj,getListeneri,return )

Array< int > AL_obj::getListener3i( int param){
	HX_STACK_FRAME("snow.platform.native.audio.openal.AL","getListener3i",0xbe14fad7,"snow.platform.native.audio.openal.AL.getListener3i","snow/platform/native/audio/openal/AL.hx",214,0x47acab9a)
	HX_STACK_ARG(param,"param")
	HX_STACK_LINE(214)
	return ::snow::platform::native::audio::openal::AL_obj::alhx_GetListener3i(param);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AL_obj,getListener3i,return )

Array< int > AL_obj::getListeneriv( int param,Dynamic __o_count){
Dynamic count = __o_count.Default(1);
	HX_STACK_FRAME("snow.platform.native.audio.openal.AL","getListeneriv",0xbe1529ee,"snow.platform.native.audio.openal.AL.getListeneriv","snow/platform/native/audio/openal/AL.hx",218,0x47acab9a)
	HX_STACK_ARG(param,"param")
	HX_STACK_ARG(count,"count")
{
		HX_STACK_LINE(218)
		return ::snow::platform::native::audio::openal::AL_obj::alhx_GetListeneriv(param,count);
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(AL_obj,getListeneriv,return )

Array< int > AL_obj::genSources( int n){
	HX_STACK_FRAME("snow.platform.native.audio.openal.AL","genSources",0x0ab26fd1,"snow.platform.native.audio.openal.AL.genSources","snow/platform/native/audio/openal/AL.hx",224,0x47acab9a)
	HX_STACK_ARG(n,"n")
	HX_STACK_LINE(224)
	return ::snow::platform::native::audio::openal::AL_obj::alhx_GenSources(n);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AL_obj,genSources,return )

Void AL_obj::deleteSources( Array< int > sources){
{
		HX_STACK_FRAME("snow.platform.native.audio.openal.AL","deleteSources",0x506b0ea4,"snow.platform.native.audio.openal.AL.deleteSources","snow/platform/native/audio/openal/AL.hx",228,0x47acab9a)
		HX_STACK_ARG(sources,"sources")
		HX_STACK_LINE(228)
		::snow::platform::native::audio::openal::AL_obj::alhx_DeleteSources(sources->length,sources);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AL_obj,deleteSources,(void))

bool AL_obj::isSource( int source){
	HX_STACK_FRAME("snow.platform.native.audio.openal.AL","isSource",0x20683f6e,"snow.platform.native.audio.openal.AL.isSource","snow/platform/native/audio/openal/AL.hx",232,0x47acab9a)
	HX_STACK_ARG(source,"source")
	HX_STACK_LINE(232)
	return ::snow::platform::native::audio::openal::AL_obj::alhx_IsSource(source);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AL_obj,isSource,return )

Void AL_obj::sourcef( int source,int param,Float value){
{
		HX_STACK_FRAME("snow.platform.native.audio.openal.AL","sourcef",0xe0fd1042,"snow.platform.native.audio.openal.AL.sourcef","snow/platform/native/audio/openal/AL.hx",238,0x47acab9a)
		HX_STACK_ARG(source,"source")
		HX_STACK_ARG(param,"param")
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(238)
		::snow::platform::native::audio::openal::AL_obj::alhx_Sourcef(source,param,value);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(AL_obj,sourcef,(void))

Void AL_obj::source3f( int source,int param,Float value1,Float value2,Float value3){
{
		HX_STACK_FRAME("snow.platform.native.audio.openal.AL","source3f",0xfc70fd77,"snow.platform.native.audio.openal.AL.source3f","snow/platform/native/audio/openal/AL.hx",242,0x47acab9a)
		HX_STACK_ARG(source,"source")
		HX_STACK_ARG(param,"param")
		HX_STACK_ARG(value1,"value1")
		HX_STACK_ARG(value2,"value2")
		HX_STACK_ARG(value3,"value3")
		HX_STACK_LINE(242)
		::snow::platform::native::audio::openal::AL_obj::alhx_Source3f(source,param,value1,value2,value3);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(AL_obj,source3f,(void))

Void AL_obj::sourcefv( int source,int param,Array< Float > values){
{
		HX_STACK_FRAME("snow.platform.native.audio.openal.AL","sourcefv",0xfc7129f4,"snow.platform.native.audio.openal.AL.sourcefv","snow/platform/native/audio/openal/AL.hx",246,0x47acab9a)
		HX_STACK_ARG(source,"source")
		HX_STACK_ARG(param,"param")
		HX_STACK_ARG(values,"values")
		HX_STACK_LINE(246)
		::snow::platform::native::audio::openal::AL_obj::alhx_Sourcefv(source,param,values);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(AL_obj,sourcefv,(void))

Void AL_obj::sourcei( int source,int param,int value){
{
		HX_STACK_FRAME("snow.platform.native.audio.openal.AL","sourcei",0xe0fd1045,"snow.platform.native.audio.openal.AL.sourcei","snow/platform/native/audio/openal/AL.hx",250,0x47acab9a)
		HX_STACK_ARG(source,"source")
		HX_STACK_ARG(param,"param")
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(250)
		::snow::platform::native::audio::openal::AL_obj::alhx_Sourcei(source,param,value);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(AL_obj,sourcei,(void))

Void AL_obj::source3i( int source,int param,int value1,int value2,int value3){
{
		HX_STACK_FRAME("snow.platform.native.audio.openal.AL","source3i",0xfc70fd7a,"snow.platform.native.audio.openal.AL.source3i","snow/platform/native/audio/openal/AL.hx",254,0x47acab9a)
		HX_STACK_ARG(source,"source")
		HX_STACK_ARG(param,"param")
		HX_STACK_ARG(value1,"value1")
		HX_STACK_ARG(value2,"value2")
		HX_STACK_ARG(value3,"value3")
		HX_STACK_LINE(254)
		::snow::platform::native::audio::openal::AL_obj::alhx_Source3i(source,param,value1,value2,value3);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(AL_obj,source3i,(void))

Void AL_obj::sourceiv( int source,int param,Array< int > values){
{
		HX_STACK_FRAME("snow.platform.native.audio.openal.AL","sourceiv",0xfc712c91,"snow.platform.native.audio.openal.AL.sourceiv","snow/platform/native/audio/openal/AL.hx",258,0x47acab9a)
		HX_STACK_ARG(source,"source")
		HX_STACK_ARG(param,"param")
		HX_STACK_ARG(values,"values")
		HX_STACK_LINE(258)
		::snow::platform::native::audio::openal::AL_obj::alhx_Sourceiv(source,param,values);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(AL_obj,sourceiv,(void))

Float AL_obj::getSourcef( int source,int param){
	HX_STACK_FRAME("snow.platform.native.audio.openal.AL","getSourcef",0x61e11c7e,"snow.platform.native.audio.openal.AL.getSourcef","snow/platform/native/audio/openal/AL.hx",262,0x47acab9a)
	HX_STACK_ARG(source,"source")
	HX_STACK_ARG(param,"param")
	HX_STACK_LINE(262)
	return ::snow::platform::native::audio::openal::AL_obj::alhx_GetSourcef(source,param);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(AL_obj,getSourcef,return )

Array< Float > AL_obj::getSource3f( int source,int param){
	HX_STACK_FRAME("snow.platform.native.audio.openal.AL","getSource3f",0x4317a5bb,"snow.platform.native.audio.openal.AL.getSource3f","snow/platform/native/audio/openal/AL.hx",266,0x47acab9a)
	HX_STACK_ARG(source,"source")
	HX_STACK_ARG(param,"param")
	HX_STACK_LINE(266)
	return ::snow::platform::native::audio::openal::AL_obj::alhx_GetSource3f(source,param);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(AL_obj,getSource3f,return )

Array< Float > AL_obj::getSourcefv( int source,int param){
	HX_STACK_FRAME("snow.platform.native.audio.openal.AL","getSourcefv",0x4317d238,"snow.platform.native.audio.openal.AL.getSourcefv","snow/platform/native/audio/openal/AL.hx",270,0x47acab9a)
	HX_STACK_ARG(source,"source")
	HX_STACK_ARG(param,"param")
	HX_STACK_LINE(270)
	return ::snow::platform::native::audio::openal::AL_obj::alhx_GetSourcefv(source,param);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(AL_obj,getSourcefv,return )

int AL_obj::getSourcei( int source,int param){
	HX_STACK_FRAME("snow.platform.native.audio.openal.AL","getSourcei",0x61e11c81,"snow.platform.native.audio.openal.AL.getSourcei","snow/platform/native/audio/openal/AL.hx",274,0x47acab9a)
	HX_STACK_ARG(source,"source")
	HX_STACK_ARG(param,"param")
	HX_STACK_LINE(274)
	return ::snow::platform::native::audio::openal::AL_obj::alhx_GetSourcei(source,param);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(AL_obj,getSourcei,return )

Array< int > AL_obj::getSource3i( int source,int param){
	HX_STACK_FRAME("snow.platform.native.audio.openal.AL","getSource3i",0x4317a5be,"snow.platform.native.audio.openal.AL.getSource3i","snow/platform/native/audio/openal/AL.hx",278,0x47acab9a)
	HX_STACK_ARG(source,"source")
	HX_STACK_ARG(param,"param")
	HX_STACK_LINE(278)
	return ::snow::platform::native::audio::openal::AL_obj::alhx_GetSource3i(source,param);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(AL_obj,getSource3i,return )

Array< int > AL_obj::getSourceiv( int source,int param,Dynamic __o_count){
Dynamic count = __o_count.Default(1);
	HX_STACK_FRAME("snow.platform.native.audio.openal.AL","getSourceiv",0x4317d4d5,"snow.platform.native.audio.openal.AL.getSourceiv","snow/platform/native/audio/openal/AL.hx",282,0x47acab9a)
	HX_STACK_ARG(source,"source")
	HX_STACK_ARG(param,"param")
	HX_STACK_ARG(count,"count")
{
		HX_STACK_LINE(282)
		return ::snow::platform::native::audio::openal::AL_obj::alhx_GetSourceiv(source,param,count);
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(AL_obj,getSourceiv,return )

Void AL_obj::sourcePlayv( Array< int > sources){
{
		HX_STACK_FRAME("snow.platform.native.audio.openal.AL","sourcePlayv",0xaa13a5be,"snow.platform.native.audio.openal.AL.sourcePlayv","snow/platform/native/audio/openal/AL.hx",288,0x47acab9a)
		HX_STACK_ARG(sources,"sources")
		HX_STACK_LINE(288)
		::snow::platform::native::audio::openal::AL_obj::alhx_SourcePlayv(sources->length,sources);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AL_obj,sourcePlayv,(void))

Void AL_obj::sourceStopv( Array< int > sources){
{
		HX_STACK_FRAME("snow.platform.native.audio.openal.AL","sourceStopv",0x699baff0,"snow.platform.native.audio.openal.AL.sourceStopv","snow/platform/native/audio/openal/AL.hx",292,0x47acab9a)
		HX_STACK_ARG(sources,"sources")
		HX_STACK_LINE(292)
		::snow::platform::native::audio::openal::AL_obj::alhx_SourceStopv(sources->length,sources);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AL_obj,sourceStopv,(void))

Void AL_obj::sourceRewindv( Array< int > sources){
{
		HX_STACK_FRAME("snow.platform.native.audio.openal.AL","sourceRewindv",0x397a16d7,"snow.platform.native.audio.openal.AL.sourceRewindv","snow/platform/native/audio/openal/AL.hx",296,0x47acab9a)
		HX_STACK_ARG(sources,"sources")
		HX_STACK_LINE(296)
		::snow::platform::native::audio::openal::AL_obj::alhx_SourceRewindv(sources->length,sources);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AL_obj,sourceRewindv,(void))

Void AL_obj::sourcePausev( Array< int > sources){
{
		HX_STACK_FRAME("snow.platform.native.audio.openal.AL","sourcePausev",0xdee8a784,"snow.platform.native.audio.openal.AL.sourcePausev","snow/platform/native/audio/openal/AL.hx",300,0x47acab9a)
		HX_STACK_ARG(sources,"sources")
		HX_STACK_LINE(300)
		::snow::platform::native::audio::openal::AL_obj::alhx_SourcePausev(sources->length,sources);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AL_obj,sourcePausev,(void))

Void AL_obj::sourcePlay( int source){
{
		HX_STACK_FRAME("snow.platform.native.audio.openal.AL","sourcePlay",0xcbf49bb8,"snow.platform.native.audio.openal.AL.sourcePlay","snow/platform/native/audio/openal/AL.hx",304,0x47acab9a)
		HX_STACK_ARG(source,"source")
		HX_STACK_LINE(304)
		::snow::platform::native::audio::openal::AL_obj::alhx_SourcePlay(source);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AL_obj,sourcePlay,(void))

Void AL_obj::sourceStop( int source){
{
		HX_STACK_FRAME("snow.platform.native.audio.openal.AL","sourceStop",0xcdf65dc6,"snow.platform.native.audio.openal.AL.sourceStop","snow/platform/native/audio/openal/AL.hx",308,0x47acab9a)
		HX_STACK_ARG(source,"source")
		HX_STACK_LINE(308)
		::snow::platform::native::audio::openal::AL_obj::alhx_SourceStop(source);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AL_obj,sourceStop,(void))

Void AL_obj::sourceRewind( int source){
{
		HX_STACK_FRAME("snow.platform.native.audio.openal.AL","sourceRewind",0xfa8490bf,"snow.platform.native.audio.openal.AL.sourceRewind","snow/platform/native/audio/openal/AL.hx",312,0x47acab9a)
		HX_STACK_ARG(source,"source")
		HX_STACK_LINE(312)
		::snow::platform::native::audio::openal::AL_obj::alhx_SourceRewind(source);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AL_obj,sourceRewind,(void))

Void AL_obj::sourcePause( int source){
{
		HX_STACK_FRAME("snow.platform.native.audio.openal.AL","sourcePause",0xa2dd74b2,"snow.platform.native.audio.openal.AL.sourcePause","snow/platform/native/audio/openal/AL.hx",316,0x47acab9a)
		HX_STACK_ARG(source,"source")
		HX_STACK_LINE(316)
		::snow::platform::native::audio::openal::AL_obj::alhx_SourcePause(source);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AL_obj,sourcePause,(void))

Void AL_obj::sourceQueueBuffers( int source,int nb,Array< int > buffers){
{
		HX_STACK_FRAME("snow.platform.native.audio.openal.AL","sourceQueueBuffers",0x36c953a6,"snow.platform.native.audio.openal.AL.sourceQueueBuffers","snow/platform/native/audio/openal/AL.hx",320,0x47acab9a)
		HX_STACK_ARG(source,"source")
		HX_STACK_ARG(nb,"nb")
		HX_STACK_ARG(buffers,"buffers")
		HX_STACK_LINE(320)
		::snow::platform::native::audio::openal::AL_obj::alhx_SourceQueueBuffers(source,nb,buffers);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(AL_obj,sourceQueueBuffers,(void))

Array< int > AL_obj::sourceUnqueueBuffers( int source,int nb){
	HX_STACK_FRAME("snow.platform.native.audio.openal.AL","sourceUnqueueBuffers",0xd6a1547f,"snow.platform.native.audio.openal.AL.sourceUnqueueBuffers","snow/platform/native/audio/openal/AL.hx",324,0x47acab9a)
	HX_STACK_ARG(source,"source")
	HX_STACK_ARG(nb,"nb")
	HX_STACK_LINE(324)
	return ::snow::platform::native::audio::openal::AL_obj::alhx_SourceUnqueueBuffers(source,nb);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(AL_obj,sourceUnqueueBuffers,return )

Array< int > AL_obj::genBuffers( int n){
	HX_STACK_FRAME("snow.platform.native.audio.openal.AL","genBuffers",0x02fa040c,"snow.platform.native.audio.openal.AL.genBuffers","snow/platform/native/audio/openal/AL.hx",330,0x47acab9a)
	HX_STACK_ARG(n,"n")
	HX_STACK_LINE(330)
	return ::snow::platform::native::audio::openal::AL_obj::alhx_GenBuffers(n);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AL_obj,genBuffers,return )

Void AL_obj::deleteBuffers( Array< int > buffers){
{
		HX_STACK_FRAME("snow.platform.native.audio.openal.AL","deleteBuffers",0x48b2a2df,"snow.platform.native.audio.openal.AL.deleteBuffers","snow/platform/native/audio/openal/AL.hx",334,0x47acab9a)
		HX_STACK_ARG(buffers,"buffers")
		HX_STACK_LINE(334)
		::snow::platform::native::audio::openal::AL_obj::alhx_DeleteBuffers(buffers->length,buffers);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AL_obj,deleteBuffers,(void))

bool AL_obj::isBuffer( int buffer){
	HX_STACK_FRAME("snow.platform.native.audio.openal.AL","isBuffer",0xbecb4b93,"snow.platform.native.audio.openal.AL.isBuffer","snow/platform/native/audio/openal/AL.hx",338,0x47acab9a)
	HX_STACK_ARG(buffer,"buffer")
	HX_STACK_LINE(338)
	return ::snow::platform::native::audio::openal::AL_obj::alhx_IsBuffer(buffer);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AL_obj,isBuffer,return )

Void AL_obj::bufferData( int buffer,int format,::snow::platform::native::utils::Float32Array data,int size,int freq){
{
		HX_STACK_FRAME("snow.platform.native.audio.openal.AL","bufferData",0xecaa4693,"snow.platform.native.audio.openal.AL.bufferData","snow/platform/native/audio/openal/AL.hx",344,0x47acab9a)
		HX_STACK_ARG(buffer,"buffer")
		HX_STACK_ARG(format,"format")
		HX_STACK_ARG(data,"data")
		HX_STACK_ARG(size,"size")
		HX_STACK_ARG(freq,"freq")
		HX_STACK_LINE(344)
		::snow::platform::native::audio::openal::AL_obj::alhx_BufferData(buffer,format,data->buffer,size,freq);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(AL_obj,bufferData,(void))

Void AL_obj::bufferf( int buffer,int param,Float value){
{
		HX_STACK_FRAME("snow.platform.native.audio.openal.AL","bufferf",0xd944a47d,"snow.platform.native.audio.openal.AL.bufferf","snow/platform/native/audio/openal/AL.hx",348,0x47acab9a)
		HX_STACK_ARG(buffer,"buffer")
		HX_STACK_ARG(param,"param")
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(348)
		::snow::platform::native::audio::openal::AL_obj::alhx_Bufferf(buffer,param,value);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(AL_obj,bufferf,(void))

Void AL_obj::buffer3f( int buffer,int param,Float value1,Float value2,Float value3){
{
		HX_STACK_FRAME("snow.platform.native.audio.openal.AL","buffer3f",0x42cb1cdc,"snow.platform.native.audio.openal.AL.buffer3f","snow/platform/native/audio/openal/AL.hx",352,0x47acab9a)
		HX_STACK_ARG(buffer,"buffer")
		HX_STACK_ARG(param,"param")
		HX_STACK_ARG(value1,"value1")
		HX_STACK_ARG(value2,"value2")
		HX_STACK_ARG(value3,"value3")
		HX_STACK_LINE(352)
		::snow::platform::native::audio::openal::AL_obj::alhx_Buffer3f(buffer,param,value1,value2,value3);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(AL_obj,buffer3f,(void))

Void AL_obj::bufferfv( int buffer,int param,Array< Float > values){
{
		HX_STACK_FRAME("snow.platform.native.audio.openal.AL","bufferfv",0x42cb4959,"snow.platform.native.audio.openal.AL.bufferfv","snow/platform/native/audio/openal/AL.hx",356,0x47acab9a)
		HX_STACK_ARG(buffer,"buffer")
		HX_STACK_ARG(param,"param")
		HX_STACK_ARG(values,"values")
		HX_STACK_LINE(356)
		::snow::platform::native::audio::openal::AL_obj::alhx_Bufferfv(buffer,param,values);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(AL_obj,bufferfv,(void))

Void AL_obj::bufferi( int buffer,int param,int value){
{
		HX_STACK_FRAME("snow.platform.native.audio.openal.AL","bufferi",0xd944a480,"snow.platform.native.audio.openal.AL.bufferi","snow/platform/native/audio/openal/AL.hx",360,0x47acab9a)
		HX_STACK_ARG(buffer,"buffer")
		HX_STACK_ARG(param,"param")
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(360)
		::snow::platform::native::audio::openal::AL_obj::alhx_Bufferi(buffer,param,value);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(AL_obj,bufferi,(void))

Void AL_obj::buffer3i( int buffer,int param,int value1,int value2,int value3){
{
		HX_STACK_FRAME("snow.platform.native.audio.openal.AL","buffer3i",0x42cb1cdf,"snow.platform.native.audio.openal.AL.buffer3i","snow/platform/native/audio/openal/AL.hx",364,0x47acab9a)
		HX_STACK_ARG(buffer,"buffer")
		HX_STACK_ARG(param,"param")
		HX_STACK_ARG(value1,"value1")
		HX_STACK_ARG(value2,"value2")
		HX_STACK_ARG(value3,"value3")
		HX_STACK_LINE(364)
		::snow::platform::native::audio::openal::AL_obj::alhx_Buffer3i(buffer,param,value1,value2,value3);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(AL_obj,buffer3i,(void))

Void AL_obj::bufferiv( int buffer,int param,Array< int > values){
{
		HX_STACK_FRAME("snow.platform.native.audio.openal.AL","bufferiv",0x42cb4bf6,"snow.platform.native.audio.openal.AL.bufferiv","snow/platform/native/audio/openal/AL.hx",368,0x47acab9a)
		HX_STACK_ARG(buffer,"buffer")
		HX_STACK_ARG(param,"param")
		HX_STACK_ARG(values,"values")
		HX_STACK_LINE(368)
		::snow::platform::native::audio::openal::AL_obj::alhx_Bufferiv(buffer,param,values);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(AL_obj,bufferiv,(void))

Float AL_obj::getBufferf( int buffer,int param){
	HX_STACK_FRAME("snow.platform.native.audio.openal.AL","getBufferf",0x5a28b0b9,"snow.platform.native.audio.openal.AL.getBufferf","snow/platform/native/audio/openal/AL.hx",372,0x47acab9a)
	HX_STACK_ARG(buffer,"buffer")
	HX_STACK_ARG(param,"param")
	HX_STACK_LINE(372)
	return ::snow::platform::native::audio::openal::AL_obj::alhx_GetBufferf(buffer,param);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(AL_obj,getBufferf,return )

Array< Float > AL_obj::getBuffer3f( int buffer,int param){
	HX_STACK_FRAME("snow.platform.native.audio.openal.AL","getBuffer3f",0x8971c520,"snow.platform.native.audio.openal.AL.getBuffer3f","snow/platform/native/audio/openal/AL.hx",376,0x47acab9a)
	HX_STACK_ARG(buffer,"buffer")
	HX_STACK_ARG(param,"param")
	HX_STACK_LINE(376)
	return ::snow::platform::native::audio::openal::AL_obj::alhx_GetBuffer3f(buffer,param);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(AL_obj,getBuffer3f,return )

Array< Float > AL_obj::getBufferfv( int buffer,int param,Dynamic __o_count){
Dynamic count = __o_count.Default(1);
	HX_STACK_FRAME("snow.platform.native.audio.openal.AL","getBufferfv",0x8971f19d,"snow.platform.native.audio.openal.AL.getBufferfv","snow/platform/native/audio/openal/AL.hx",380,0x47acab9a)
	HX_STACK_ARG(buffer,"buffer")
	HX_STACK_ARG(param,"param")
	HX_STACK_ARG(count,"count")
{
		HX_STACK_LINE(380)
		return ::snow::platform::native::audio::openal::AL_obj::alhx_GetBufferfv(buffer,param,count);
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(AL_obj,getBufferfv,return )

int AL_obj::getBufferi( int buffer,int param){
	HX_STACK_FRAME("snow.platform.native.audio.openal.AL","getBufferi",0x5a28b0bc,"snow.platform.native.audio.openal.AL.getBufferi","snow/platform/native/audio/openal/AL.hx",384,0x47acab9a)
	HX_STACK_ARG(buffer,"buffer")
	HX_STACK_ARG(param,"param")
	HX_STACK_LINE(384)
	return ::snow::platform::native::audio::openal::AL_obj::alhx_GetBufferi(buffer,param);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(AL_obj,getBufferi,return )

Array< int > AL_obj::getBuffer3i( int buffer,int param){
	HX_STACK_FRAME("snow.platform.native.audio.openal.AL","getBuffer3i",0x8971c523,"snow.platform.native.audio.openal.AL.getBuffer3i","snow/platform/native/audio/openal/AL.hx",388,0x47acab9a)
	HX_STACK_ARG(buffer,"buffer")
	HX_STACK_ARG(param,"param")
	HX_STACK_LINE(388)
	return ::snow::platform::native::audio::openal::AL_obj::alhx_GetBuffer3i(buffer,param);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(AL_obj,getBuffer3i,return )

Array< int > AL_obj::getBufferiv( int buffer,int param,Dynamic __o_count){
Dynamic count = __o_count.Default(1);
	HX_STACK_FRAME("snow.platform.native.audio.openal.AL","getBufferiv",0x8971f43a,"snow.platform.native.audio.openal.AL.getBufferiv","snow/platform/native/audio/openal/AL.hx",392,0x47acab9a)
	HX_STACK_ARG(buffer,"buffer")
	HX_STACK_ARG(param,"param")
	HX_STACK_ARG(count,"count")
{
		HX_STACK_LINE(392)
		return ::snow::platform::native::audio::openal::AL_obj::alhx_GetBufferiv(buffer,param,count);
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(AL_obj,getBufferiv,return )

int AL_obj::genSource( ){
	HX_STACK_FRAME("snow.platform.native.audio.openal.AL","genSource",0x328f2662,"snow.platform.native.audio.openal.AL.genSource","snow/platform/native/audio/openal/AL.hx",399,0x47acab9a)
	HX_STACK_LINE(399)
	return ::snow::platform::native::audio::openal::AL_obj::alhx_GenSource();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(AL_obj,genSource,return )

Void AL_obj::deleteSource( int source){
{
		HX_STACK_FRAME("snow.platform.native.audio.openal.AL","deleteSource",0x922782ef,"snow.platform.native.audio.openal.AL.deleteSource","snow/platform/native/audio/openal/AL.hx",403,0x47acab9a)
		HX_STACK_ARG(source,"source")
		HX_STACK_LINE(403)
		::snow::platform::native::audio::openal::AL_obj::alhx_DeleteSource(source);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AL_obj,deleteSource,(void))

int AL_obj::genBuffer( ){
	HX_STACK_FRAME("snow.platform.native.audio.openal.AL","genBuffer",0xd0f23287,"snow.platform.native.audio.openal.AL.genBuffer","snow/platform/native/audio/openal/AL.hx",407,0x47acab9a)
	HX_STACK_LINE(407)
	return ::snow::platform::native::audio::openal::AL_obj::alhx_GenBuffer();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(AL_obj,genBuffer,return )

Void AL_obj::deleteBuffer( int buffer){
{
		HX_STACK_FRAME("snow.platform.native.audio.openal.AL","deleteBuffer",0x308a8f14,"snow.platform.native.audio.openal.AL.deleteBuffer","snow/platform/native/audio/openal/AL.hx",411,0x47acab9a)
		HX_STACK_ARG(buffer,"buffer")
		HX_STACK_LINE(411)
		::snow::platform::native::audio::openal::AL_obj::alhx_DeleteBuffer(buffer);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AL_obj,deleteBuffer,(void))

Void AL_obj::sourceQueueBuffer( int source,int buffer){
{
		HX_STACK_FRAME("snow.platform.native.audio.openal.AL","sourceQueueBuffer",0x1980542d,"snow.platform.native.audio.openal.AL.sourceQueueBuffer","snow/platform/native/audio/openal/AL.hx",415,0x47acab9a)
		HX_STACK_ARG(source,"source")
		HX_STACK_ARG(buffer,"buffer")
		HX_STACK_LINE(415)
		::snow::platform::native::audio::openal::AL_obj::alhx_SourceQueueBuffers(source,(int)1,Array_obj< int >::__new().Add(buffer));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(AL_obj,sourceQueueBuffer,(void))

int AL_obj::sourceUnqueueBuffer( int source){
	HX_STACK_FRAME("snow.platform.native.audio.openal.AL","sourceUnqueueBuffer",0x1911f174,"snow.platform.native.audio.openal.AL.sourceUnqueueBuffer","snow/platform/native/audio/openal/AL.hx",418,0x47acab9a)
	HX_STACK_ARG(source,"source")
	HX_STACK_LINE(419)
	Array< int > res = ::snow::platform::native::audio::openal::AL_obj::alhx_SourceUnqueueBuffers(source,(int)1);		HX_STACK_VAR(res,"res");
	HX_STACK_LINE(420)
	return res->__get((int)0);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AL_obj,sourceUnqueueBuffer,return )

::String AL_obj::INVALID_NAME_MEANING;

::String AL_obj::INVALID_ENUM_MEANING;

::String AL_obj::INVALID_VALUE_MEANING;

::String AL_obj::INVALID_OPERATION_MEANING;

::String AL_obj::OUT_OF_MEMORY_MEANING;

::String AL_obj::getErrorMeaning( int error){
	HX_STACK_FRAME("snow.platform.native.audio.openal.AL","getErrorMeaning",0xee7a76a2,"snow.platform.native.audio.openal.AL.getErrorMeaning","snow/platform/native/audio/openal/AL.hx",429,0x47acab9a)
	HX_STACK_ARG(error,"error")
	HX_STACK_LINE(431)
	if (((error == ::snow::platform::native::audio::openal::AL_obj::INVALID_NAME))){
		HX_STACK_LINE(431)
		return ::snow::platform::native::audio::openal::AL_obj::INVALID_NAME_MEANING;
	}
	HX_STACK_LINE(432)
	if (((error == ::snow::platform::native::audio::openal::AL_obj::INVALID_ENUM))){
		HX_STACK_LINE(432)
		return ::snow::platform::native::audio::openal::AL_obj::INVALID_ENUM_MEANING;
	}
	HX_STACK_LINE(433)
	if (((error == ::snow::platform::native::audio::openal::AL_obj::INVALID_VALUE))){
		HX_STACK_LINE(433)
		return ::snow::platform::native::audio::openal::AL_obj::INVALID_VALUE_MEANING;
	}
	HX_STACK_LINE(434)
	if (((error == ::snow::platform::native::audio::openal::AL_obj::INVALID_OPERATION))){
		HX_STACK_LINE(434)
		return ::snow::platform::native::audio::openal::AL_obj::INVALID_OPERATION_MEANING;
	}
	HX_STACK_LINE(435)
	if (((error == ::snow::platform::native::audio::openal::AL_obj::OUT_OF_MEMORY))){
		HX_STACK_LINE(435)
		return ::snow::platform::native::audio::openal::AL_obj::OUT_OF_MEMORY_MEANING;
	}
	HX_STACK_LINE(437)
	return HX_CSTRING("AL.NO_ERROR: No Error");
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AL_obj,getErrorMeaning,return )

Dynamic AL_obj::alhx_DopplerFactor;

Dynamic AL_obj::alhx_DopplerVelocity;

Dynamic AL_obj::alhx_SpeedOfSound;

Dynamic AL_obj::alhx_DistanceModel;

Dynamic AL_obj::alhx_Enable;

Dynamic AL_obj::alhx_Disable;

Dynamic AL_obj::alhx_IsEnabled;

Dynamic AL_obj::alhx_GetString;

Dynamic AL_obj::alhx_GetBooleanv;

Dynamic AL_obj::alhx_GetIntegerv;

Dynamic AL_obj::alhx_GetFloatv;

Dynamic AL_obj::alhx_GetDoublev;

Dynamic AL_obj::alhx_GetBoolean;

Dynamic AL_obj::alhx_GetInteger;

Dynamic AL_obj::alhx_GetFloat;

Dynamic AL_obj::alhx_GetDouble;

Dynamic AL_obj::alhx_GetError;

Dynamic AL_obj::alhx_IsExtensionPresent;

Dynamic AL_obj::alhx_GetProcAddress;

Dynamic AL_obj::alhx_GetEnumValue;

Dynamic AL_obj::alhx_Listenerf;

Dynamic AL_obj::alhx_Listener3f;

Dynamic AL_obj::alhx_Listenerfv;

Dynamic AL_obj::alhx_Listeneri;

Dynamic AL_obj::alhx_Listener3i;

Dynamic AL_obj::alhx_Listeneriv;

Dynamic AL_obj::alhx_GetListenerf;

Dynamic AL_obj::alhx_GetListener3f;

Dynamic AL_obj::alhx_GetListenerfv;

Dynamic AL_obj::alhx_GetListeneri;

Dynamic AL_obj::alhx_GetListener3i;

Dynamic AL_obj::alhx_GetListeneriv;

Dynamic AL_obj::alhx_GenSources;

Dynamic AL_obj::alhx_DeleteSources;

Dynamic AL_obj::alhx_IsSource;

Dynamic AL_obj::alhx_Sourcef;

Dynamic AL_obj::alhx_Source3f;

Dynamic AL_obj::alhx_Sourcefv;

Dynamic AL_obj::alhx_Sourcei;

Dynamic AL_obj::alhx_Source3i;

Dynamic AL_obj::alhx_Sourceiv;

Dynamic AL_obj::alhx_GetSourcef;

Dynamic AL_obj::alhx_GetSource3f;

Dynamic AL_obj::alhx_GetSourcefv;

Dynamic AL_obj::alhx_GetSourcei;

Dynamic AL_obj::alhx_GetSource3i;

Dynamic AL_obj::alhx_GetSourceiv;

Dynamic AL_obj::alhx_SourcePlayv;

Dynamic AL_obj::alhx_SourceStopv;

Dynamic AL_obj::alhx_SourceRewindv;

Dynamic AL_obj::alhx_SourcePausev;

Dynamic AL_obj::alhx_SourceQueueBuffers;

Dynamic AL_obj::alhx_SourceUnqueueBuffers;

Dynamic AL_obj::alhx_SourcePlay;

Dynamic AL_obj::alhx_SourceStop;

Dynamic AL_obj::alhx_SourceRewind;

Dynamic AL_obj::alhx_SourcePause;

Dynamic AL_obj::alhx_GenBuffers;

Dynamic AL_obj::alhx_DeleteBuffers;

Dynamic AL_obj::alhx_IsBuffer;

Dynamic AL_obj::alhx_BufferData;

Dynamic AL_obj::alhx_Bufferf;

Dynamic AL_obj::alhx_Buffer3f;

Dynamic AL_obj::alhx_Bufferfv;

Dynamic AL_obj::alhx_Bufferi;

Dynamic AL_obj::alhx_Buffer3i;

Dynamic AL_obj::alhx_Bufferiv;

Dynamic AL_obj::alhx_GetBufferf;

Dynamic AL_obj::alhx_GetBuffer3f;

Dynamic AL_obj::alhx_GetBufferfv;

Dynamic AL_obj::alhx_GetBufferi;

Dynamic AL_obj::alhx_GetBuffer3i;

Dynamic AL_obj::alhx_GetBufferiv;

Dynamic AL_obj::alhx_GenSource;

Dynamic AL_obj::alhx_DeleteSource;

Dynamic AL_obj::alhx_GenBuffer;

Dynamic AL_obj::alhx_DeleteBuffer;


AL_obj::AL_obj()
{
}

Dynamic AL_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"NONE") ) { return NONE; }
		if (HX_FIELD_EQ(inName,"TRUE") ) { return TRUE; }
		if (HX_FIELD_EQ(inName,"GAIN") ) { return GAIN; }
		if (HX_FIELD_EQ(inName,"BITS") ) { return BITS; }
		if (HX_FIELD_EQ(inName,"SIZE") ) { return SIZE; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"FALSE") ) { return FALSE; }
		if (HX_FIELD_EQ(inName,"PITCH") ) { return PITCH; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"BUFFER") ) { return BUFFER; }
		if (HX_FIELD_EQ(inName,"PAUSED") ) { return PAUSED; }
		if (HX_FIELD_EQ(inName,"STATIC") ) { return STATIC; }
		if (HX_FIELD_EQ(inName,"VENDOR") ) { return VENDOR; }
		if (HX_FIELD_EQ(inName,"enable") ) { return enable_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"LOOPING") ) { return LOOPING; }
		if (HX_FIELD_EQ(inName,"INITIAL") ) { return INITIAL; }
		if (HX_FIELD_EQ(inName,"PLAYING") ) { return PLAYING; }
		if (HX_FIELD_EQ(inName,"STOPPED") ) { return STOPPED; }
		if (HX_FIELD_EQ(inName,"VERSION") ) { return VERSION; }
		if (HX_FIELD_EQ(inName,"disable") ) { return disable_dyn(); }
		if (HX_FIELD_EQ(inName,"sourcef") ) { return sourcef_dyn(); }
		if (HX_FIELD_EQ(inName,"sourcei") ) { return sourcei_dyn(); }
		if (HX_FIELD_EQ(inName,"bufferf") ) { return bufferf_dyn(); }
		if (HX_FIELD_EQ(inName,"bufferi") ) { return bufferi_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"POSITION") ) { return POSITION; }
		if (HX_FIELD_EQ(inName,"VELOCITY") ) { return VELOCITY; }
		if (HX_FIELD_EQ(inName,"MIN_GAIN") ) { return MIN_GAIN; }
		if (HX_FIELD_EQ(inName,"MAX_GAIN") ) { return MAX_GAIN; }
		if (HX_FIELD_EQ(inName,"CHANNELS") ) { return CHANNELS; }
		if (HX_FIELD_EQ(inName,"NO_ERROR") ) { return NO_ERROR; }
		if (HX_FIELD_EQ(inName,"RENDERER") ) { return RENDERER; }
		if (HX_FIELD_EQ(inName,"getFloat") ) { return getFloat_dyn(); }
		if (HX_FIELD_EQ(inName,"getError") ) { return getError_dyn(); }
		if (HX_FIELD_EQ(inName,"isSource") ) { return isSource_dyn(); }
		if (HX_FIELD_EQ(inName,"source3f") ) { return source3f_dyn(); }
		if (HX_FIELD_EQ(inName,"sourcefv") ) { return sourcefv_dyn(); }
		if (HX_FIELD_EQ(inName,"source3i") ) { return source3i_dyn(); }
		if (HX_FIELD_EQ(inName,"sourceiv") ) { return sourceiv_dyn(); }
		if (HX_FIELD_EQ(inName,"isBuffer") ) { return isBuffer_dyn(); }
		if (HX_FIELD_EQ(inName,"buffer3f") ) { return buffer3f_dyn(); }
		if (HX_FIELD_EQ(inName,"bufferfv") ) { return bufferfv_dyn(); }
		if (HX_FIELD_EQ(inName,"buffer3i") ) { return buffer3i_dyn(); }
		if (HX_FIELD_EQ(inName,"bufferiv") ) { return bufferiv_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"DIRECTION") ) { return DIRECTION; }
		if (HX_FIELD_EQ(inName,"STREAMING") ) { return STREAMING; }
		if (HX_FIELD_EQ(inName,"FREQUENCY") ) { return FREQUENCY; }
		if (HX_FIELD_EQ(inName,"isEnabled") ) { return isEnabled_dyn(); }
		if (HX_FIELD_EQ(inName,"getString") ) { return getString_dyn(); }
		if (HX_FIELD_EQ(inName,"getFloatv") ) { return getFloatv_dyn(); }
		if (HX_FIELD_EQ(inName,"getDouble") ) { return getDouble_dyn(); }
		if (HX_FIELD_EQ(inName,"listenerf") ) { return listenerf_dyn(); }
		if (HX_FIELD_EQ(inName,"listeneri") ) { return listeneri_dyn(); }
		if (HX_FIELD_EQ(inName,"genSource") ) { return genSource_dyn(); }
		if (HX_FIELD_EQ(inName,"genBuffer") ) { return genBuffer_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"SEC_OFFSET") ) { return SEC_OFFSET; }
		if (HX_FIELD_EQ(inName,"EXTENSIONS") ) { return EXTENSIONS; }
		if (HX_FIELD_EQ(inName,"getDoublev") ) { return getDoublev_dyn(); }
		if (HX_FIELD_EQ(inName,"getBoolean") ) { return getBoolean_dyn(); }
		if (HX_FIELD_EQ(inName,"getInteger") ) { return getInteger_dyn(); }
		if (HX_FIELD_EQ(inName,"listener3f") ) { return listener3f_dyn(); }
		if (HX_FIELD_EQ(inName,"listenerfv") ) { return listenerfv_dyn(); }
		if (HX_FIELD_EQ(inName,"listener3i") ) { return listener3i_dyn(); }
		if (HX_FIELD_EQ(inName,"listeneriv") ) { return listeneriv_dyn(); }
		if (HX_FIELD_EQ(inName,"genSources") ) { return genSources_dyn(); }
		if (HX_FIELD_EQ(inName,"getSourcef") ) { return getSourcef_dyn(); }
		if (HX_FIELD_EQ(inName,"getSourcei") ) { return getSourcei_dyn(); }
		if (HX_FIELD_EQ(inName,"sourcePlay") ) { return sourcePlay_dyn(); }
		if (HX_FIELD_EQ(inName,"sourceStop") ) { return sourceStop_dyn(); }
		if (HX_FIELD_EQ(inName,"genBuffers") ) { return genBuffers_dyn(); }
		if (HX_FIELD_EQ(inName,"bufferData") ) { return bufferData_dyn(); }
		if (HX_FIELD_EQ(inName,"getBufferf") ) { return getBufferf_dyn(); }
		if (HX_FIELD_EQ(inName,"getBufferi") ) { return getBufferi_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"ORIENTATION") ) { return ORIENTATION; }
		if (HX_FIELD_EQ(inName,"BYTE_OFFSET") ) { return BYTE_OFFSET; }
		if (HX_FIELD_EQ(inName,"SOURCE_TYPE") ) { return SOURCE_TYPE; }
		if (HX_FIELD_EQ(inName,"getBooleanv") ) { return getBooleanv_dyn(); }
		if (HX_FIELD_EQ(inName,"getIntegerv") ) { return getIntegerv_dyn(); }
		if (HX_FIELD_EQ(inName,"getSource3f") ) { return getSource3f_dyn(); }
		if (HX_FIELD_EQ(inName,"getSourcefv") ) { return getSourcefv_dyn(); }
		if (HX_FIELD_EQ(inName,"getSource3i") ) { return getSource3i_dyn(); }
		if (HX_FIELD_EQ(inName,"getSourceiv") ) { return getSourceiv_dyn(); }
		if (HX_FIELD_EQ(inName,"sourcePlayv") ) { return sourcePlayv_dyn(); }
		if (HX_FIELD_EQ(inName,"sourceStopv") ) { return sourceStopv_dyn(); }
		if (HX_FIELD_EQ(inName,"sourcePause") ) { return sourcePause_dyn(); }
		if (HX_FIELD_EQ(inName,"getBuffer3f") ) { return getBuffer3f_dyn(); }
		if (HX_FIELD_EQ(inName,"getBufferfv") ) { return getBufferfv_dyn(); }
		if (HX_FIELD_EQ(inName,"getBuffer3i") ) { return getBuffer3i_dyn(); }
		if (HX_FIELD_EQ(inName,"getBufferiv") ) { return getBufferiv_dyn(); }
		if (HX_FIELD_EQ(inName,"alhx_Enable") ) { return alhx_Enable; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"SOURCE_STATE") ) { return SOURCE_STATE; }
		if (HX_FIELD_EQ(inName,"MAX_DISTANCE") ) { return MAX_DISTANCE; }
		if (HX_FIELD_EQ(inName,"UNDETERMINED") ) { return UNDETERMINED; }
		if (HX_FIELD_EQ(inName,"FORMAT_MONO8") ) { return FORMAT_MONO8; }
		if (HX_FIELD_EQ(inName,"INVALID_NAME") ) { return INVALID_NAME; }
		if (HX_FIELD_EQ(inName,"INVALID_ENUM") ) { return INVALID_ENUM; }
		if (HX_FIELD_EQ(inName,"speedOfSound") ) { return speedOfSound_dyn(); }
		if (HX_FIELD_EQ(inName,"getEnumValue") ) { return getEnumValue_dyn(); }
		if (HX_FIELD_EQ(inName,"getListenerf") ) { return getListenerf_dyn(); }
		if (HX_FIELD_EQ(inName,"getListeneri") ) { return getListeneri_dyn(); }
		if (HX_FIELD_EQ(inName,"sourcePausev") ) { return sourcePausev_dyn(); }
		if (HX_FIELD_EQ(inName,"sourceRewind") ) { return sourceRewind_dyn(); }
		if (HX_FIELD_EQ(inName,"deleteSource") ) { return deleteSource_dyn(); }
		if (HX_FIELD_EQ(inName,"deleteBuffer") ) { return deleteBuffer_dyn(); }
		if (HX_FIELD_EQ(inName,"alhx_Disable") ) { return alhx_Disable; }
		if (HX_FIELD_EQ(inName,"alhx_Sourcef") ) { return alhx_Sourcef; }
		if (HX_FIELD_EQ(inName,"alhx_Sourcei") ) { return alhx_Sourcei; }
		if (HX_FIELD_EQ(inName,"alhx_Bufferf") ) { return alhx_Bufferf; }
		if (HX_FIELD_EQ(inName,"alhx_Bufferi") ) { return alhx_Bufferi; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"SAMPLE_OFFSET") ) { return SAMPLE_OFFSET; }
		if (HX_FIELD_EQ(inName,"FORMAT_MONO16") ) { return FORMAT_MONO16; }
		if (HX_FIELD_EQ(inName,"INVALID_VALUE") ) { return INVALID_VALUE; }
		if (HX_FIELD_EQ(inName,"OUT_OF_MEMORY") ) { return OUT_OF_MEMORY; }
		if (HX_FIELD_EQ(inName,"dopplerFactor") ) { return dopplerFactor_dyn(); }
		if (HX_FIELD_EQ(inName,"distanceModel") ) { return distanceModel_dyn(); }
		if (HX_FIELD_EQ(inName,"getListener3f") ) { return getListener3f_dyn(); }
		if (HX_FIELD_EQ(inName,"getListenerfv") ) { return getListenerfv_dyn(); }
		if (HX_FIELD_EQ(inName,"getListener3i") ) { return getListener3i_dyn(); }
		if (HX_FIELD_EQ(inName,"getListeneriv") ) { return getListeneriv_dyn(); }
		if (HX_FIELD_EQ(inName,"deleteSources") ) { return deleteSources_dyn(); }
		if (HX_FIELD_EQ(inName,"sourceRewindv") ) { return sourceRewindv_dyn(); }
		if (HX_FIELD_EQ(inName,"deleteBuffers") ) { return deleteBuffers_dyn(); }
		if (HX_FIELD_EQ(inName,"alhx_GetFloat") ) { return alhx_GetFloat; }
		if (HX_FIELD_EQ(inName,"alhx_GetError") ) { return alhx_GetError; }
		if (HX_FIELD_EQ(inName,"alhx_IsSource") ) { return alhx_IsSource; }
		if (HX_FIELD_EQ(inName,"alhx_Source3f") ) { return alhx_Source3f; }
		if (HX_FIELD_EQ(inName,"alhx_Sourcefv") ) { return alhx_Sourcefv; }
		if (HX_FIELD_EQ(inName,"alhx_Source3i") ) { return alhx_Source3i; }
		if (HX_FIELD_EQ(inName,"alhx_Sourceiv") ) { return alhx_Sourceiv; }
		if (HX_FIELD_EQ(inName,"alhx_IsBuffer") ) { return alhx_IsBuffer; }
		if (HX_FIELD_EQ(inName,"alhx_Buffer3f") ) { return alhx_Buffer3f; }
		if (HX_FIELD_EQ(inName,"alhx_Bufferfv") ) { return alhx_Bufferfv; }
		if (HX_FIELD_EQ(inName,"alhx_Buffer3i") ) { return alhx_Buffer3i; }
		if (HX_FIELD_EQ(inName,"alhx_Bufferiv") ) { return alhx_Bufferiv; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"BUFFERS_QUEUED") ) { return BUFFERS_QUEUED; }
		if (HX_FIELD_EQ(inName,"ROLLOFF_FACTOR") ) { return ROLLOFF_FACTOR; }
		if (HX_FIELD_EQ(inName,"FORMAT_STEREO8") ) { return FORMAT_STEREO8; }
		if (HX_FIELD_EQ(inName,"DOPPLER_FACTOR") ) { return DOPPLER_FACTOR; }
		if (HX_FIELD_EQ(inName,"SPEED_OF_SOUND") ) { return SPEED_OF_SOUND; }
		if (HX_FIELD_EQ(inName,"DISTANCE_MODEL") ) { return DISTANCE_MODEL; }
		if (HX_FIELD_EQ(inName,"getProcAddress") ) { return getProcAddress_dyn(); }
		if (HX_FIELD_EQ(inName,"alhx_IsEnabled") ) { return alhx_IsEnabled; }
		if (HX_FIELD_EQ(inName,"alhx_GetString") ) { return alhx_GetString; }
		if (HX_FIELD_EQ(inName,"alhx_GetFloatv") ) { return alhx_GetFloatv; }
		if (HX_FIELD_EQ(inName,"alhx_GetDouble") ) { return alhx_GetDouble; }
		if (HX_FIELD_EQ(inName,"alhx_Listenerf") ) { return alhx_Listenerf; }
		if (HX_FIELD_EQ(inName,"alhx_Listeneri") ) { return alhx_Listeneri; }
		if (HX_FIELD_EQ(inName,"alhx_GenSource") ) { return alhx_GenSource; }
		if (HX_FIELD_EQ(inName,"alhx_GenBuffer") ) { return alhx_GenBuffer; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"SOURCE_RELATIVE") ) { return SOURCE_RELATIVE; }
		if (HX_FIELD_EQ(inName,"CONE_OUTER_GAIN") ) { return CONE_OUTER_GAIN; }
		if (HX_FIELD_EQ(inName,"FORMAT_STEREO16") ) { return FORMAT_STEREO16; }
		if (HX_FIELD_EQ(inName,"LINEAR_DISTANCE") ) { return LINEAR_DISTANCE; }
		if (HX_FIELD_EQ(inName,"dopplerVelocity") ) { return dopplerVelocity_dyn(); }
		if (HX_FIELD_EQ(inName,"getErrorMeaning") ) { return getErrorMeaning_dyn(); }
		if (HX_FIELD_EQ(inName,"alhx_GetDoublev") ) { return alhx_GetDoublev; }
		if (HX_FIELD_EQ(inName,"alhx_GetBoolean") ) { return alhx_GetBoolean; }
		if (HX_FIELD_EQ(inName,"alhx_GetInteger") ) { return alhx_GetInteger; }
		if (HX_FIELD_EQ(inName,"alhx_Listener3f") ) { return alhx_Listener3f; }
		if (HX_FIELD_EQ(inName,"alhx_Listenerfv") ) { return alhx_Listenerfv; }
		if (HX_FIELD_EQ(inName,"alhx_Listener3i") ) { return alhx_Listener3i; }
		if (HX_FIELD_EQ(inName,"alhx_Listeneriv") ) { return alhx_Listeneriv; }
		if (HX_FIELD_EQ(inName,"alhx_GenSources") ) { return alhx_GenSources; }
		if (HX_FIELD_EQ(inName,"alhx_GetSourcef") ) { return alhx_GetSourcef; }
		if (HX_FIELD_EQ(inName,"alhx_GetSourcei") ) { return alhx_GetSourcei; }
		if (HX_FIELD_EQ(inName,"alhx_SourcePlay") ) { return alhx_SourcePlay; }
		if (HX_FIELD_EQ(inName,"alhx_SourceStop") ) { return alhx_SourceStop; }
		if (HX_FIELD_EQ(inName,"alhx_GenBuffers") ) { return alhx_GenBuffers; }
		if (HX_FIELD_EQ(inName,"alhx_BufferData") ) { return alhx_BufferData; }
		if (HX_FIELD_EQ(inName,"alhx_GetBufferf") ) { return alhx_GetBufferf; }
		if (HX_FIELD_EQ(inName,"alhx_GetBufferi") ) { return alhx_GetBufferi; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"CONE_INNER_ANGLE") ) { return CONE_INNER_ANGLE; }
		if (HX_FIELD_EQ(inName,"CONE_OUTER_ANGLE") ) { return CONE_OUTER_ANGLE; }
		if (HX_FIELD_EQ(inName,"DOPPLER_VELOCITY") ) { return DOPPLER_VELOCITY; }
		if (HX_FIELD_EQ(inName,"INVERSE_DISTANCE") ) { return INVERSE_DISTANCE; }
		if (HX_FIELD_EQ(inName,"alhx_GetBooleanv") ) { return alhx_GetBooleanv; }
		if (HX_FIELD_EQ(inName,"alhx_GetIntegerv") ) { return alhx_GetIntegerv; }
		if (HX_FIELD_EQ(inName,"alhx_GetSource3f") ) { return alhx_GetSource3f; }
		if (HX_FIELD_EQ(inName,"alhx_GetSourcefv") ) { return alhx_GetSourcefv; }
		if (HX_FIELD_EQ(inName,"alhx_GetSource3i") ) { return alhx_GetSource3i; }
		if (HX_FIELD_EQ(inName,"alhx_GetSourceiv") ) { return alhx_GetSourceiv; }
		if (HX_FIELD_EQ(inName,"alhx_SourcePlayv") ) { return alhx_SourcePlayv; }
		if (HX_FIELD_EQ(inName,"alhx_SourceStopv") ) { return alhx_SourceStopv; }
		if (HX_FIELD_EQ(inName,"alhx_SourcePause") ) { return alhx_SourcePause; }
		if (HX_FIELD_EQ(inName,"alhx_GetBuffer3f") ) { return alhx_GetBuffer3f; }
		if (HX_FIELD_EQ(inName,"alhx_GetBufferfv") ) { return alhx_GetBufferfv; }
		if (HX_FIELD_EQ(inName,"alhx_GetBuffer3i") ) { return alhx_GetBuffer3i; }
		if (HX_FIELD_EQ(inName,"alhx_GetBufferiv") ) { return alhx_GetBufferiv; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"BUFFERS_PROCESSED") ) { return BUFFERS_PROCESSED; }
		if (HX_FIELD_EQ(inName,"INVALID_OPERATION") ) { return INVALID_OPERATION; }
		if (HX_FIELD_EQ(inName,"EXPONENT_DISTANCE") ) { return EXPONENT_DISTANCE; }
		if (HX_FIELD_EQ(inName,"sourceQueueBuffer") ) { return sourceQueueBuffer_dyn(); }
		if (HX_FIELD_EQ(inName,"alhx_SpeedOfSound") ) { return alhx_SpeedOfSound; }
		if (HX_FIELD_EQ(inName,"alhx_GetEnumValue") ) { return alhx_GetEnumValue; }
		if (HX_FIELD_EQ(inName,"alhx_GetListenerf") ) { return alhx_GetListenerf; }
		if (HX_FIELD_EQ(inName,"alhx_GetListeneri") ) { return alhx_GetListeneri; }
		if (HX_FIELD_EQ(inName,"alhx_SourcePausev") ) { return alhx_SourcePausev; }
		if (HX_FIELD_EQ(inName,"alhx_SourceRewind") ) { return alhx_SourceRewind; }
		if (HX_FIELD_EQ(inName,"alhx_DeleteSource") ) { return alhx_DeleteSource; }
		if (HX_FIELD_EQ(inName,"alhx_DeleteBuffer") ) { return alhx_DeleteBuffer; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"REFERENCE_DISTANCE") ) { return REFERENCE_DISTANCE; }
		if (HX_FIELD_EQ(inName,"isExtensionPresent") ) { return isExtensionPresent_dyn(); }
		if (HX_FIELD_EQ(inName,"sourceQueueBuffers") ) { return sourceQueueBuffers_dyn(); }
		if (HX_FIELD_EQ(inName,"alhx_DopplerFactor") ) { return alhx_DopplerFactor; }
		if (HX_FIELD_EQ(inName,"alhx_DistanceModel") ) { return alhx_DistanceModel; }
		if (HX_FIELD_EQ(inName,"alhx_GetListener3f") ) { return alhx_GetListener3f; }
		if (HX_FIELD_EQ(inName,"alhx_GetListenerfv") ) { return alhx_GetListenerfv; }
		if (HX_FIELD_EQ(inName,"alhx_GetListener3i") ) { return alhx_GetListener3i; }
		if (HX_FIELD_EQ(inName,"alhx_GetListeneriv") ) { return alhx_GetListeneriv; }
		if (HX_FIELD_EQ(inName,"alhx_DeleteSources") ) { return alhx_DeleteSources; }
		if (HX_FIELD_EQ(inName,"alhx_SourceRewindv") ) { return alhx_SourceRewindv; }
		if (HX_FIELD_EQ(inName,"alhx_DeleteBuffers") ) { return alhx_DeleteBuffers; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"sourceUnqueueBuffer") ) { return sourceUnqueueBuffer_dyn(); }
		if (HX_FIELD_EQ(inName,"alhx_GetProcAddress") ) { return alhx_GetProcAddress; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"sourceUnqueueBuffers") ) { return sourceUnqueueBuffers_dyn(); }
		if (HX_FIELD_EQ(inName,"INVALID_NAME_MEANING") ) { return INVALID_NAME_MEANING; }
		if (HX_FIELD_EQ(inName,"INVALID_ENUM_MEANING") ) { return INVALID_ENUM_MEANING; }
		if (HX_FIELD_EQ(inName,"alhx_DopplerVelocity") ) { return alhx_DopplerVelocity; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"INVALID_VALUE_MEANING") ) { return INVALID_VALUE_MEANING; }
		if (HX_FIELD_EQ(inName,"OUT_OF_MEMORY_MEANING") ) { return OUT_OF_MEMORY_MEANING; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"LINEAR_DISTANCE_CLAMPED") ) { return LINEAR_DISTANCE_CLAMPED; }
		if (HX_FIELD_EQ(inName,"alhx_IsExtensionPresent") ) { return alhx_IsExtensionPresent; }
		if (HX_FIELD_EQ(inName,"alhx_SourceQueueBuffers") ) { return alhx_SourceQueueBuffers; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"INVERSE_DISTANCE_CLAMPED") ) { return INVERSE_DISTANCE_CLAMPED; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"EXPONENT_DISTANCE_CLAMPED") ) { return EXPONENT_DISTANCE_CLAMPED; }
		if (HX_FIELD_EQ(inName,"INVALID_OPERATION_MEANING") ) { return INVALID_OPERATION_MEANING; }
		if (HX_FIELD_EQ(inName,"alhx_SourceUnqueueBuffers") ) { return alhx_SourceUnqueueBuffers; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic AL_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"NONE") ) { NONE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TRUE") ) { TRUE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"GAIN") ) { GAIN=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"BITS") ) { BITS=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"SIZE") ) { SIZE=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"FALSE") ) { FALSE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"PITCH") ) { PITCH=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"BUFFER") ) { BUFFER=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"PAUSED") ) { PAUSED=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"STATIC") ) { STATIC=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"VENDOR") ) { VENDOR=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"LOOPING") ) { LOOPING=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"INITIAL") ) { INITIAL=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"PLAYING") ) { PLAYING=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"STOPPED") ) { STOPPED=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"VERSION") ) { VERSION=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"POSITION") ) { POSITION=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"VELOCITY") ) { VELOCITY=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"MIN_GAIN") ) { MIN_GAIN=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"MAX_GAIN") ) { MAX_GAIN=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"CHANNELS") ) { CHANNELS=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"NO_ERROR") ) { NO_ERROR=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"RENDERER") ) { RENDERER=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"DIRECTION") ) { DIRECTION=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"STREAMING") ) { STREAMING=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"FREQUENCY") ) { FREQUENCY=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"SEC_OFFSET") ) { SEC_OFFSET=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"EXTENSIONS") ) { EXTENSIONS=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"ORIENTATION") ) { ORIENTATION=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"BYTE_OFFSET") ) { BYTE_OFFSET=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"SOURCE_TYPE") ) { SOURCE_TYPE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"alhx_Enable") ) { alhx_Enable=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"SOURCE_STATE") ) { SOURCE_STATE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"MAX_DISTANCE") ) { MAX_DISTANCE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"UNDETERMINED") ) { UNDETERMINED=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"FORMAT_MONO8") ) { FORMAT_MONO8=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"INVALID_NAME") ) { INVALID_NAME=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"INVALID_ENUM") ) { INVALID_ENUM=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"alhx_Disable") ) { alhx_Disable=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"alhx_Sourcef") ) { alhx_Sourcef=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"alhx_Sourcei") ) { alhx_Sourcei=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"alhx_Bufferf") ) { alhx_Bufferf=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"alhx_Bufferi") ) { alhx_Bufferi=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"SAMPLE_OFFSET") ) { SAMPLE_OFFSET=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"FORMAT_MONO16") ) { FORMAT_MONO16=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"INVALID_VALUE") ) { INVALID_VALUE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"OUT_OF_MEMORY") ) { OUT_OF_MEMORY=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"alhx_GetFloat") ) { alhx_GetFloat=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"alhx_GetError") ) { alhx_GetError=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"alhx_IsSource") ) { alhx_IsSource=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"alhx_Source3f") ) { alhx_Source3f=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"alhx_Sourcefv") ) { alhx_Sourcefv=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"alhx_Source3i") ) { alhx_Source3i=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"alhx_Sourceiv") ) { alhx_Sourceiv=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"alhx_IsBuffer") ) { alhx_IsBuffer=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"alhx_Buffer3f") ) { alhx_Buffer3f=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"alhx_Bufferfv") ) { alhx_Bufferfv=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"alhx_Buffer3i") ) { alhx_Buffer3i=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"alhx_Bufferiv") ) { alhx_Bufferiv=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"BUFFERS_QUEUED") ) { BUFFERS_QUEUED=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ROLLOFF_FACTOR") ) { ROLLOFF_FACTOR=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"FORMAT_STEREO8") ) { FORMAT_STEREO8=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"DOPPLER_FACTOR") ) { DOPPLER_FACTOR=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"SPEED_OF_SOUND") ) { SPEED_OF_SOUND=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"DISTANCE_MODEL") ) { DISTANCE_MODEL=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"alhx_IsEnabled") ) { alhx_IsEnabled=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"alhx_GetString") ) { alhx_GetString=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"alhx_GetFloatv") ) { alhx_GetFloatv=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"alhx_GetDouble") ) { alhx_GetDouble=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"alhx_Listenerf") ) { alhx_Listenerf=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"alhx_Listeneri") ) { alhx_Listeneri=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"alhx_GenSource") ) { alhx_GenSource=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"alhx_GenBuffer") ) { alhx_GenBuffer=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"SOURCE_RELATIVE") ) { SOURCE_RELATIVE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"CONE_OUTER_GAIN") ) { CONE_OUTER_GAIN=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"FORMAT_STEREO16") ) { FORMAT_STEREO16=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"LINEAR_DISTANCE") ) { LINEAR_DISTANCE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"alhx_GetDoublev") ) { alhx_GetDoublev=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"alhx_GetBoolean") ) { alhx_GetBoolean=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"alhx_GetInteger") ) { alhx_GetInteger=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"alhx_Listener3f") ) { alhx_Listener3f=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"alhx_Listenerfv") ) { alhx_Listenerfv=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"alhx_Listener3i") ) { alhx_Listener3i=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"alhx_Listeneriv") ) { alhx_Listeneriv=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"alhx_GenSources") ) { alhx_GenSources=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"alhx_GetSourcef") ) { alhx_GetSourcef=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"alhx_GetSourcei") ) { alhx_GetSourcei=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"alhx_SourcePlay") ) { alhx_SourcePlay=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"alhx_SourceStop") ) { alhx_SourceStop=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"alhx_GenBuffers") ) { alhx_GenBuffers=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"alhx_BufferData") ) { alhx_BufferData=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"alhx_GetBufferf") ) { alhx_GetBufferf=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"alhx_GetBufferi") ) { alhx_GetBufferi=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"CONE_INNER_ANGLE") ) { CONE_INNER_ANGLE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"CONE_OUTER_ANGLE") ) { CONE_OUTER_ANGLE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"DOPPLER_VELOCITY") ) { DOPPLER_VELOCITY=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"INVERSE_DISTANCE") ) { INVERSE_DISTANCE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"alhx_GetBooleanv") ) { alhx_GetBooleanv=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"alhx_GetIntegerv") ) { alhx_GetIntegerv=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"alhx_GetSource3f") ) { alhx_GetSource3f=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"alhx_GetSourcefv") ) { alhx_GetSourcefv=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"alhx_GetSource3i") ) { alhx_GetSource3i=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"alhx_GetSourceiv") ) { alhx_GetSourceiv=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"alhx_SourcePlayv") ) { alhx_SourcePlayv=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"alhx_SourceStopv") ) { alhx_SourceStopv=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"alhx_SourcePause") ) { alhx_SourcePause=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"alhx_GetBuffer3f") ) { alhx_GetBuffer3f=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"alhx_GetBufferfv") ) { alhx_GetBufferfv=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"alhx_GetBuffer3i") ) { alhx_GetBuffer3i=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"alhx_GetBufferiv") ) { alhx_GetBufferiv=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"BUFFERS_PROCESSED") ) { BUFFERS_PROCESSED=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"INVALID_OPERATION") ) { INVALID_OPERATION=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"EXPONENT_DISTANCE") ) { EXPONENT_DISTANCE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"alhx_SpeedOfSound") ) { alhx_SpeedOfSound=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"alhx_GetEnumValue") ) { alhx_GetEnumValue=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"alhx_GetListenerf") ) { alhx_GetListenerf=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"alhx_GetListeneri") ) { alhx_GetListeneri=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"alhx_SourcePausev") ) { alhx_SourcePausev=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"alhx_SourceRewind") ) { alhx_SourceRewind=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"alhx_DeleteSource") ) { alhx_DeleteSource=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"alhx_DeleteBuffer") ) { alhx_DeleteBuffer=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"REFERENCE_DISTANCE") ) { REFERENCE_DISTANCE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"alhx_DopplerFactor") ) { alhx_DopplerFactor=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"alhx_DistanceModel") ) { alhx_DistanceModel=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"alhx_GetListener3f") ) { alhx_GetListener3f=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"alhx_GetListenerfv") ) { alhx_GetListenerfv=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"alhx_GetListener3i") ) { alhx_GetListener3i=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"alhx_GetListeneriv") ) { alhx_GetListeneriv=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"alhx_DeleteSources") ) { alhx_DeleteSources=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"alhx_SourceRewindv") ) { alhx_SourceRewindv=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"alhx_DeleteBuffers") ) { alhx_DeleteBuffers=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"alhx_GetProcAddress") ) { alhx_GetProcAddress=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"INVALID_NAME_MEANING") ) { INVALID_NAME_MEANING=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"INVALID_ENUM_MEANING") ) { INVALID_ENUM_MEANING=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"alhx_DopplerVelocity") ) { alhx_DopplerVelocity=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"INVALID_VALUE_MEANING") ) { INVALID_VALUE_MEANING=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"OUT_OF_MEMORY_MEANING") ) { OUT_OF_MEMORY_MEANING=inValue.Cast< ::String >(); return inValue; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"LINEAR_DISTANCE_CLAMPED") ) { LINEAR_DISTANCE_CLAMPED=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"alhx_IsExtensionPresent") ) { alhx_IsExtensionPresent=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"alhx_SourceQueueBuffers") ) { alhx_SourceQueueBuffers=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"INVERSE_DISTANCE_CLAMPED") ) { INVERSE_DISTANCE_CLAMPED=inValue.Cast< int >(); return inValue; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"EXPONENT_DISTANCE_CLAMPED") ) { EXPONENT_DISTANCE_CLAMPED=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"INVALID_OPERATION_MEANING") ) { INVALID_OPERATION_MEANING=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"alhx_SourceUnqueueBuffers") ) { alhx_SourceUnqueueBuffers=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void AL_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("NONE"),
	HX_CSTRING("FALSE"),
	HX_CSTRING("TRUE"),
	HX_CSTRING("SOURCE_RELATIVE"),
	HX_CSTRING("CONE_INNER_ANGLE"),
	HX_CSTRING("CONE_OUTER_ANGLE"),
	HX_CSTRING("PITCH"),
	HX_CSTRING("POSITION"),
	HX_CSTRING("DIRECTION"),
	HX_CSTRING("VELOCITY"),
	HX_CSTRING("LOOPING"),
	HX_CSTRING("BUFFER"),
	HX_CSTRING("GAIN"),
	HX_CSTRING("MIN_GAIN"),
	HX_CSTRING("MAX_GAIN"),
	HX_CSTRING("ORIENTATION"),
	HX_CSTRING("SOURCE_STATE"),
	HX_CSTRING("INITIAL"),
	HX_CSTRING("PLAYING"),
	HX_CSTRING("PAUSED"),
	HX_CSTRING("STOPPED"),
	HX_CSTRING("BUFFERS_QUEUED"),
	HX_CSTRING("BUFFERS_PROCESSED"),
	HX_CSTRING("REFERENCE_DISTANCE"),
	HX_CSTRING("ROLLOFF_FACTOR"),
	HX_CSTRING("CONE_OUTER_GAIN"),
	HX_CSTRING("MAX_DISTANCE"),
	HX_CSTRING("SEC_OFFSET"),
	HX_CSTRING("SAMPLE_OFFSET"),
	HX_CSTRING("BYTE_OFFSET"),
	HX_CSTRING("SOURCE_TYPE"),
	HX_CSTRING("STATIC"),
	HX_CSTRING("STREAMING"),
	HX_CSTRING("UNDETERMINED"),
	HX_CSTRING("FORMAT_MONO8"),
	HX_CSTRING("FORMAT_MONO16"),
	HX_CSTRING("FORMAT_STEREO8"),
	HX_CSTRING("FORMAT_STEREO16"),
	HX_CSTRING("FREQUENCY"),
	HX_CSTRING("BITS"),
	HX_CSTRING("CHANNELS"),
	HX_CSTRING("SIZE"),
	HX_CSTRING("NO_ERROR"),
	HX_CSTRING("INVALID_NAME"),
	HX_CSTRING("INVALID_ENUM"),
	HX_CSTRING("INVALID_VALUE"),
	HX_CSTRING("INVALID_OPERATION"),
	HX_CSTRING("OUT_OF_MEMORY"),
	HX_CSTRING("VENDOR"),
	HX_CSTRING("VERSION"),
	HX_CSTRING("RENDERER"),
	HX_CSTRING("EXTENSIONS"),
	HX_CSTRING("DOPPLER_FACTOR"),
	HX_CSTRING("SPEED_OF_SOUND"),
	HX_CSTRING("DOPPLER_VELOCITY"),
	HX_CSTRING("DISTANCE_MODEL"),
	HX_CSTRING("INVERSE_DISTANCE"),
	HX_CSTRING("INVERSE_DISTANCE_CLAMPED"),
	HX_CSTRING("LINEAR_DISTANCE"),
	HX_CSTRING("LINEAR_DISTANCE_CLAMPED"),
	HX_CSTRING("EXPONENT_DISTANCE"),
	HX_CSTRING("EXPONENT_DISTANCE_CLAMPED"),
	HX_CSTRING("dopplerFactor"),
	HX_CSTRING("dopplerVelocity"),
	HX_CSTRING("speedOfSound"),
	HX_CSTRING("distanceModel"),
	HX_CSTRING("enable"),
	HX_CSTRING("disable"),
	HX_CSTRING("isEnabled"),
	HX_CSTRING("getString"),
	HX_CSTRING("getBooleanv"),
	HX_CSTRING("getIntegerv"),
	HX_CSTRING("getFloatv"),
	HX_CSTRING("getDoublev"),
	HX_CSTRING("getBoolean"),
	HX_CSTRING("getInteger"),
	HX_CSTRING("getFloat"),
	HX_CSTRING("getDouble"),
	HX_CSTRING("getError"),
	HX_CSTRING("isExtensionPresent"),
	HX_CSTRING("getProcAddress"),
	HX_CSTRING("getEnumValue"),
	HX_CSTRING("listenerf"),
	HX_CSTRING("listener3f"),
	HX_CSTRING("listenerfv"),
	HX_CSTRING("listeneri"),
	HX_CSTRING("listener3i"),
	HX_CSTRING("listeneriv"),
	HX_CSTRING("getListenerf"),
	HX_CSTRING("getListener3f"),
	HX_CSTRING("getListenerfv"),
	HX_CSTRING("getListeneri"),
	HX_CSTRING("getListener3i"),
	HX_CSTRING("getListeneriv"),
	HX_CSTRING("genSources"),
	HX_CSTRING("deleteSources"),
	HX_CSTRING("isSource"),
	HX_CSTRING("sourcef"),
	HX_CSTRING("source3f"),
	HX_CSTRING("sourcefv"),
	HX_CSTRING("sourcei"),
	HX_CSTRING("source3i"),
	HX_CSTRING("sourceiv"),
	HX_CSTRING("getSourcef"),
	HX_CSTRING("getSource3f"),
	HX_CSTRING("getSourcefv"),
	HX_CSTRING("getSourcei"),
	HX_CSTRING("getSource3i"),
	HX_CSTRING("getSourceiv"),
	HX_CSTRING("sourcePlayv"),
	HX_CSTRING("sourceStopv"),
	HX_CSTRING("sourceRewindv"),
	HX_CSTRING("sourcePausev"),
	HX_CSTRING("sourcePlay"),
	HX_CSTRING("sourceStop"),
	HX_CSTRING("sourceRewind"),
	HX_CSTRING("sourcePause"),
	HX_CSTRING("sourceQueueBuffers"),
	HX_CSTRING("sourceUnqueueBuffers"),
	HX_CSTRING("genBuffers"),
	HX_CSTRING("deleteBuffers"),
	HX_CSTRING("isBuffer"),
	HX_CSTRING("bufferData"),
	HX_CSTRING("bufferf"),
	HX_CSTRING("buffer3f"),
	HX_CSTRING("bufferfv"),
	HX_CSTRING("bufferi"),
	HX_CSTRING("buffer3i"),
	HX_CSTRING("bufferiv"),
	HX_CSTRING("getBufferf"),
	HX_CSTRING("getBuffer3f"),
	HX_CSTRING("getBufferfv"),
	HX_CSTRING("getBufferi"),
	HX_CSTRING("getBuffer3i"),
	HX_CSTRING("getBufferiv"),
	HX_CSTRING("genSource"),
	HX_CSTRING("deleteSource"),
	HX_CSTRING("genBuffer"),
	HX_CSTRING("deleteBuffer"),
	HX_CSTRING("sourceQueueBuffer"),
	HX_CSTRING("sourceUnqueueBuffer"),
	HX_CSTRING("INVALID_NAME_MEANING"),
	HX_CSTRING("INVALID_ENUM_MEANING"),
	HX_CSTRING("INVALID_VALUE_MEANING"),
	HX_CSTRING("INVALID_OPERATION_MEANING"),
	HX_CSTRING("OUT_OF_MEMORY_MEANING"),
	HX_CSTRING("getErrorMeaning"),
	HX_CSTRING("alhx_DopplerFactor"),
	HX_CSTRING("alhx_DopplerVelocity"),
	HX_CSTRING("alhx_SpeedOfSound"),
	HX_CSTRING("alhx_DistanceModel"),
	HX_CSTRING("alhx_Enable"),
	HX_CSTRING("alhx_Disable"),
	HX_CSTRING("alhx_IsEnabled"),
	HX_CSTRING("alhx_GetString"),
	HX_CSTRING("alhx_GetBooleanv"),
	HX_CSTRING("alhx_GetIntegerv"),
	HX_CSTRING("alhx_GetFloatv"),
	HX_CSTRING("alhx_GetDoublev"),
	HX_CSTRING("alhx_GetBoolean"),
	HX_CSTRING("alhx_GetInteger"),
	HX_CSTRING("alhx_GetFloat"),
	HX_CSTRING("alhx_GetDouble"),
	HX_CSTRING("alhx_GetError"),
	HX_CSTRING("alhx_IsExtensionPresent"),
	HX_CSTRING("alhx_GetProcAddress"),
	HX_CSTRING("alhx_GetEnumValue"),
	HX_CSTRING("alhx_Listenerf"),
	HX_CSTRING("alhx_Listener3f"),
	HX_CSTRING("alhx_Listenerfv"),
	HX_CSTRING("alhx_Listeneri"),
	HX_CSTRING("alhx_Listener3i"),
	HX_CSTRING("alhx_Listeneriv"),
	HX_CSTRING("alhx_GetListenerf"),
	HX_CSTRING("alhx_GetListener3f"),
	HX_CSTRING("alhx_GetListenerfv"),
	HX_CSTRING("alhx_GetListeneri"),
	HX_CSTRING("alhx_GetListener3i"),
	HX_CSTRING("alhx_GetListeneriv"),
	HX_CSTRING("alhx_GenSources"),
	HX_CSTRING("alhx_DeleteSources"),
	HX_CSTRING("alhx_IsSource"),
	HX_CSTRING("alhx_Sourcef"),
	HX_CSTRING("alhx_Source3f"),
	HX_CSTRING("alhx_Sourcefv"),
	HX_CSTRING("alhx_Sourcei"),
	HX_CSTRING("alhx_Source3i"),
	HX_CSTRING("alhx_Sourceiv"),
	HX_CSTRING("alhx_GetSourcef"),
	HX_CSTRING("alhx_GetSource3f"),
	HX_CSTRING("alhx_GetSourcefv"),
	HX_CSTRING("alhx_GetSourcei"),
	HX_CSTRING("alhx_GetSource3i"),
	HX_CSTRING("alhx_GetSourceiv"),
	HX_CSTRING("alhx_SourcePlayv"),
	HX_CSTRING("alhx_SourceStopv"),
	HX_CSTRING("alhx_SourceRewindv"),
	HX_CSTRING("alhx_SourcePausev"),
	HX_CSTRING("alhx_SourceQueueBuffers"),
	HX_CSTRING("alhx_SourceUnqueueBuffers"),
	HX_CSTRING("alhx_SourcePlay"),
	HX_CSTRING("alhx_SourceStop"),
	HX_CSTRING("alhx_SourceRewind"),
	HX_CSTRING("alhx_SourcePause"),
	HX_CSTRING("alhx_GenBuffers"),
	HX_CSTRING("alhx_DeleteBuffers"),
	HX_CSTRING("alhx_IsBuffer"),
	HX_CSTRING("alhx_BufferData"),
	HX_CSTRING("alhx_Bufferf"),
	HX_CSTRING("alhx_Buffer3f"),
	HX_CSTRING("alhx_Bufferfv"),
	HX_CSTRING("alhx_Bufferi"),
	HX_CSTRING("alhx_Buffer3i"),
	HX_CSTRING("alhx_Bufferiv"),
	HX_CSTRING("alhx_GetBufferf"),
	HX_CSTRING("alhx_GetBuffer3f"),
	HX_CSTRING("alhx_GetBufferfv"),
	HX_CSTRING("alhx_GetBufferi"),
	HX_CSTRING("alhx_GetBuffer3i"),
	HX_CSTRING("alhx_GetBufferiv"),
	HX_CSTRING("alhx_GenSource"),
	HX_CSTRING("alhx_DeleteSource"),
	HX_CSTRING("alhx_GenBuffer"),
	HX_CSTRING("alhx_DeleteBuffer"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AL_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(AL_obj::NONE,"NONE");
	HX_MARK_MEMBER_NAME(AL_obj::FALSE,"FALSE");
	HX_MARK_MEMBER_NAME(AL_obj::TRUE,"TRUE");
	HX_MARK_MEMBER_NAME(AL_obj::SOURCE_RELATIVE,"SOURCE_RELATIVE");
	HX_MARK_MEMBER_NAME(AL_obj::CONE_INNER_ANGLE,"CONE_INNER_ANGLE");
	HX_MARK_MEMBER_NAME(AL_obj::CONE_OUTER_ANGLE,"CONE_OUTER_ANGLE");
	HX_MARK_MEMBER_NAME(AL_obj::PITCH,"PITCH");
	HX_MARK_MEMBER_NAME(AL_obj::POSITION,"POSITION");
	HX_MARK_MEMBER_NAME(AL_obj::DIRECTION,"DIRECTION");
	HX_MARK_MEMBER_NAME(AL_obj::VELOCITY,"VELOCITY");
	HX_MARK_MEMBER_NAME(AL_obj::LOOPING,"LOOPING");
	HX_MARK_MEMBER_NAME(AL_obj::BUFFER,"BUFFER");
	HX_MARK_MEMBER_NAME(AL_obj::GAIN,"GAIN");
	HX_MARK_MEMBER_NAME(AL_obj::MIN_GAIN,"MIN_GAIN");
	HX_MARK_MEMBER_NAME(AL_obj::MAX_GAIN,"MAX_GAIN");
	HX_MARK_MEMBER_NAME(AL_obj::ORIENTATION,"ORIENTATION");
	HX_MARK_MEMBER_NAME(AL_obj::SOURCE_STATE,"SOURCE_STATE");
	HX_MARK_MEMBER_NAME(AL_obj::INITIAL,"INITIAL");
	HX_MARK_MEMBER_NAME(AL_obj::PLAYING,"PLAYING");
	HX_MARK_MEMBER_NAME(AL_obj::PAUSED,"PAUSED");
	HX_MARK_MEMBER_NAME(AL_obj::STOPPED,"STOPPED");
	HX_MARK_MEMBER_NAME(AL_obj::BUFFERS_QUEUED,"BUFFERS_QUEUED");
	HX_MARK_MEMBER_NAME(AL_obj::BUFFERS_PROCESSED,"BUFFERS_PROCESSED");
	HX_MARK_MEMBER_NAME(AL_obj::REFERENCE_DISTANCE,"REFERENCE_DISTANCE");
	HX_MARK_MEMBER_NAME(AL_obj::ROLLOFF_FACTOR,"ROLLOFF_FACTOR");
	HX_MARK_MEMBER_NAME(AL_obj::CONE_OUTER_GAIN,"CONE_OUTER_GAIN");
	HX_MARK_MEMBER_NAME(AL_obj::MAX_DISTANCE,"MAX_DISTANCE");
	HX_MARK_MEMBER_NAME(AL_obj::SEC_OFFSET,"SEC_OFFSET");
	HX_MARK_MEMBER_NAME(AL_obj::SAMPLE_OFFSET,"SAMPLE_OFFSET");
	HX_MARK_MEMBER_NAME(AL_obj::BYTE_OFFSET,"BYTE_OFFSET");
	HX_MARK_MEMBER_NAME(AL_obj::SOURCE_TYPE,"SOURCE_TYPE");
	HX_MARK_MEMBER_NAME(AL_obj::STATIC,"STATIC");
	HX_MARK_MEMBER_NAME(AL_obj::STREAMING,"STREAMING");
	HX_MARK_MEMBER_NAME(AL_obj::UNDETERMINED,"UNDETERMINED");
	HX_MARK_MEMBER_NAME(AL_obj::FORMAT_MONO8,"FORMAT_MONO8");
	HX_MARK_MEMBER_NAME(AL_obj::FORMAT_MONO16,"FORMAT_MONO16");
	HX_MARK_MEMBER_NAME(AL_obj::FORMAT_STEREO8,"FORMAT_STEREO8");
	HX_MARK_MEMBER_NAME(AL_obj::FORMAT_STEREO16,"FORMAT_STEREO16");
	HX_MARK_MEMBER_NAME(AL_obj::FREQUENCY,"FREQUENCY");
	HX_MARK_MEMBER_NAME(AL_obj::BITS,"BITS");
	HX_MARK_MEMBER_NAME(AL_obj::CHANNELS,"CHANNELS");
	HX_MARK_MEMBER_NAME(AL_obj::SIZE,"SIZE");
	HX_MARK_MEMBER_NAME(AL_obj::NO_ERROR,"NO_ERROR");
	HX_MARK_MEMBER_NAME(AL_obj::INVALID_NAME,"INVALID_NAME");
	HX_MARK_MEMBER_NAME(AL_obj::INVALID_ENUM,"INVALID_ENUM");
	HX_MARK_MEMBER_NAME(AL_obj::INVALID_VALUE,"INVALID_VALUE");
	HX_MARK_MEMBER_NAME(AL_obj::INVALID_OPERATION,"INVALID_OPERATION");
	HX_MARK_MEMBER_NAME(AL_obj::OUT_OF_MEMORY,"OUT_OF_MEMORY");
	HX_MARK_MEMBER_NAME(AL_obj::VENDOR,"VENDOR");
	HX_MARK_MEMBER_NAME(AL_obj::VERSION,"VERSION");
	HX_MARK_MEMBER_NAME(AL_obj::RENDERER,"RENDERER");
	HX_MARK_MEMBER_NAME(AL_obj::EXTENSIONS,"EXTENSIONS");
	HX_MARK_MEMBER_NAME(AL_obj::DOPPLER_FACTOR,"DOPPLER_FACTOR");
	HX_MARK_MEMBER_NAME(AL_obj::SPEED_OF_SOUND,"SPEED_OF_SOUND");
	HX_MARK_MEMBER_NAME(AL_obj::DOPPLER_VELOCITY,"DOPPLER_VELOCITY");
	HX_MARK_MEMBER_NAME(AL_obj::DISTANCE_MODEL,"DISTANCE_MODEL");
	HX_MARK_MEMBER_NAME(AL_obj::INVERSE_DISTANCE,"INVERSE_DISTANCE");
	HX_MARK_MEMBER_NAME(AL_obj::INVERSE_DISTANCE_CLAMPED,"INVERSE_DISTANCE_CLAMPED");
	HX_MARK_MEMBER_NAME(AL_obj::LINEAR_DISTANCE,"LINEAR_DISTANCE");
	HX_MARK_MEMBER_NAME(AL_obj::LINEAR_DISTANCE_CLAMPED,"LINEAR_DISTANCE_CLAMPED");
	HX_MARK_MEMBER_NAME(AL_obj::EXPONENT_DISTANCE,"EXPONENT_DISTANCE");
	HX_MARK_MEMBER_NAME(AL_obj::EXPONENT_DISTANCE_CLAMPED,"EXPONENT_DISTANCE_CLAMPED");
	HX_MARK_MEMBER_NAME(AL_obj::INVALID_NAME_MEANING,"INVALID_NAME_MEANING");
	HX_MARK_MEMBER_NAME(AL_obj::INVALID_ENUM_MEANING,"INVALID_ENUM_MEANING");
	HX_MARK_MEMBER_NAME(AL_obj::INVALID_VALUE_MEANING,"INVALID_VALUE_MEANING");
	HX_MARK_MEMBER_NAME(AL_obj::INVALID_OPERATION_MEANING,"INVALID_OPERATION_MEANING");
	HX_MARK_MEMBER_NAME(AL_obj::OUT_OF_MEMORY_MEANING,"OUT_OF_MEMORY_MEANING");
	HX_MARK_MEMBER_NAME(AL_obj::alhx_DopplerFactor,"alhx_DopplerFactor");
	HX_MARK_MEMBER_NAME(AL_obj::alhx_DopplerVelocity,"alhx_DopplerVelocity");
	HX_MARK_MEMBER_NAME(AL_obj::alhx_SpeedOfSound,"alhx_SpeedOfSound");
	HX_MARK_MEMBER_NAME(AL_obj::alhx_DistanceModel,"alhx_DistanceModel");
	HX_MARK_MEMBER_NAME(AL_obj::alhx_Enable,"alhx_Enable");
	HX_MARK_MEMBER_NAME(AL_obj::alhx_Disable,"alhx_Disable");
	HX_MARK_MEMBER_NAME(AL_obj::alhx_IsEnabled,"alhx_IsEnabled");
	HX_MARK_MEMBER_NAME(AL_obj::alhx_GetString,"alhx_GetString");
	HX_MARK_MEMBER_NAME(AL_obj::alhx_GetBooleanv,"alhx_GetBooleanv");
	HX_MARK_MEMBER_NAME(AL_obj::alhx_GetIntegerv,"alhx_GetIntegerv");
	HX_MARK_MEMBER_NAME(AL_obj::alhx_GetFloatv,"alhx_GetFloatv");
	HX_MARK_MEMBER_NAME(AL_obj::alhx_GetDoublev,"alhx_GetDoublev");
	HX_MARK_MEMBER_NAME(AL_obj::alhx_GetBoolean,"alhx_GetBoolean");
	HX_MARK_MEMBER_NAME(AL_obj::alhx_GetInteger,"alhx_GetInteger");
	HX_MARK_MEMBER_NAME(AL_obj::alhx_GetFloat,"alhx_GetFloat");
	HX_MARK_MEMBER_NAME(AL_obj::alhx_GetDouble,"alhx_GetDouble");
	HX_MARK_MEMBER_NAME(AL_obj::alhx_GetError,"alhx_GetError");
	HX_MARK_MEMBER_NAME(AL_obj::alhx_IsExtensionPresent,"alhx_IsExtensionPresent");
	HX_MARK_MEMBER_NAME(AL_obj::alhx_GetProcAddress,"alhx_GetProcAddress");
	HX_MARK_MEMBER_NAME(AL_obj::alhx_GetEnumValue,"alhx_GetEnumValue");
	HX_MARK_MEMBER_NAME(AL_obj::alhx_Listenerf,"alhx_Listenerf");
	HX_MARK_MEMBER_NAME(AL_obj::alhx_Listener3f,"alhx_Listener3f");
	HX_MARK_MEMBER_NAME(AL_obj::alhx_Listenerfv,"alhx_Listenerfv");
	HX_MARK_MEMBER_NAME(AL_obj::alhx_Listeneri,"alhx_Listeneri");
	HX_MARK_MEMBER_NAME(AL_obj::alhx_Listener3i,"alhx_Listener3i");
	HX_MARK_MEMBER_NAME(AL_obj::alhx_Listeneriv,"alhx_Listeneriv");
	HX_MARK_MEMBER_NAME(AL_obj::alhx_GetListenerf,"alhx_GetListenerf");
	HX_MARK_MEMBER_NAME(AL_obj::alhx_GetListener3f,"alhx_GetListener3f");
	HX_MARK_MEMBER_NAME(AL_obj::alhx_GetListenerfv,"alhx_GetListenerfv");
	HX_MARK_MEMBER_NAME(AL_obj::alhx_GetListeneri,"alhx_GetListeneri");
	HX_MARK_MEMBER_NAME(AL_obj::alhx_GetListener3i,"alhx_GetListener3i");
	HX_MARK_MEMBER_NAME(AL_obj::alhx_GetListeneriv,"alhx_GetListeneriv");
	HX_MARK_MEMBER_NAME(AL_obj::alhx_GenSources,"alhx_GenSources");
	HX_MARK_MEMBER_NAME(AL_obj::alhx_DeleteSources,"alhx_DeleteSources");
	HX_MARK_MEMBER_NAME(AL_obj::alhx_IsSource,"alhx_IsSource");
	HX_MARK_MEMBER_NAME(AL_obj::alhx_Sourcef,"alhx_Sourcef");
	HX_MARK_MEMBER_NAME(AL_obj::alhx_Source3f,"alhx_Source3f");
	HX_MARK_MEMBER_NAME(AL_obj::alhx_Sourcefv,"alhx_Sourcefv");
	HX_MARK_MEMBER_NAME(AL_obj::alhx_Sourcei,"alhx_Sourcei");
	HX_MARK_MEMBER_NAME(AL_obj::alhx_Source3i,"alhx_Source3i");
	HX_MARK_MEMBER_NAME(AL_obj::alhx_Sourceiv,"alhx_Sourceiv");
	HX_MARK_MEMBER_NAME(AL_obj::alhx_GetSourcef,"alhx_GetSourcef");
	HX_MARK_MEMBER_NAME(AL_obj::alhx_GetSource3f,"alhx_GetSource3f");
	HX_MARK_MEMBER_NAME(AL_obj::alhx_GetSourcefv,"alhx_GetSourcefv");
	HX_MARK_MEMBER_NAME(AL_obj::alhx_GetSourcei,"alhx_GetSourcei");
	HX_MARK_MEMBER_NAME(AL_obj::alhx_GetSource3i,"alhx_GetSource3i");
	HX_MARK_MEMBER_NAME(AL_obj::alhx_GetSourceiv,"alhx_GetSourceiv");
	HX_MARK_MEMBER_NAME(AL_obj::alhx_SourcePlayv,"alhx_SourcePlayv");
	HX_MARK_MEMBER_NAME(AL_obj::alhx_SourceStopv,"alhx_SourceStopv");
	HX_MARK_MEMBER_NAME(AL_obj::alhx_SourceRewindv,"alhx_SourceRewindv");
	HX_MARK_MEMBER_NAME(AL_obj::alhx_SourcePausev,"alhx_SourcePausev");
	HX_MARK_MEMBER_NAME(AL_obj::alhx_SourceQueueBuffers,"alhx_SourceQueueBuffers");
	HX_MARK_MEMBER_NAME(AL_obj::alhx_SourceUnqueueBuffers,"alhx_SourceUnqueueBuffers");
	HX_MARK_MEMBER_NAME(AL_obj::alhx_SourcePlay,"alhx_SourcePlay");
	HX_MARK_MEMBER_NAME(AL_obj::alhx_SourceStop,"alhx_SourceStop");
	HX_MARK_MEMBER_NAME(AL_obj::alhx_SourceRewind,"alhx_SourceRewind");
	HX_MARK_MEMBER_NAME(AL_obj::alhx_SourcePause,"alhx_SourcePause");
	HX_MARK_MEMBER_NAME(AL_obj::alhx_GenBuffers,"alhx_GenBuffers");
	HX_MARK_MEMBER_NAME(AL_obj::alhx_DeleteBuffers,"alhx_DeleteBuffers");
	HX_MARK_MEMBER_NAME(AL_obj::alhx_IsBuffer,"alhx_IsBuffer");
	HX_MARK_MEMBER_NAME(AL_obj::alhx_BufferData,"alhx_BufferData");
	HX_MARK_MEMBER_NAME(AL_obj::alhx_Bufferf,"alhx_Bufferf");
	HX_MARK_MEMBER_NAME(AL_obj::alhx_Buffer3f,"alhx_Buffer3f");
	HX_MARK_MEMBER_NAME(AL_obj::alhx_Bufferfv,"alhx_Bufferfv");
	HX_MARK_MEMBER_NAME(AL_obj::alhx_Bufferi,"alhx_Bufferi");
	HX_MARK_MEMBER_NAME(AL_obj::alhx_Buffer3i,"alhx_Buffer3i");
	HX_MARK_MEMBER_NAME(AL_obj::alhx_Bufferiv,"alhx_Bufferiv");
	HX_MARK_MEMBER_NAME(AL_obj::alhx_GetBufferf,"alhx_GetBufferf");
	HX_MARK_MEMBER_NAME(AL_obj::alhx_GetBuffer3f,"alhx_GetBuffer3f");
	HX_MARK_MEMBER_NAME(AL_obj::alhx_GetBufferfv,"alhx_GetBufferfv");
	HX_MARK_MEMBER_NAME(AL_obj::alhx_GetBufferi,"alhx_GetBufferi");
	HX_MARK_MEMBER_NAME(AL_obj::alhx_GetBuffer3i,"alhx_GetBuffer3i");
	HX_MARK_MEMBER_NAME(AL_obj::alhx_GetBufferiv,"alhx_GetBufferiv");
	HX_MARK_MEMBER_NAME(AL_obj::alhx_GenSource,"alhx_GenSource");
	HX_MARK_MEMBER_NAME(AL_obj::alhx_DeleteSource,"alhx_DeleteSource");
	HX_MARK_MEMBER_NAME(AL_obj::alhx_GenBuffer,"alhx_GenBuffer");
	HX_MARK_MEMBER_NAME(AL_obj::alhx_DeleteBuffer,"alhx_DeleteBuffer");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AL_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(AL_obj::NONE,"NONE");
	HX_VISIT_MEMBER_NAME(AL_obj::FALSE,"FALSE");
	HX_VISIT_MEMBER_NAME(AL_obj::TRUE,"TRUE");
	HX_VISIT_MEMBER_NAME(AL_obj::SOURCE_RELATIVE,"SOURCE_RELATIVE");
	HX_VISIT_MEMBER_NAME(AL_obj::CONE_INNER_ANGLE,"CONE_INNER_ANGLE");
	HX_VISIT_MEMBER_NAME(AL_obj::CONE_OUTER_ANGLE,"CONE_OUTER_ANGLE");
	HX_VISIT_MEMBER_NAME(AL_obj::PITCH,"PITCH");
	HX_VISIT_MEMBER_NAME(AL_obj::POSITION,"POSITION");
	HX_VISIT_MEMBER_NAME(AL_obj::DIRECTION,"DIRECTION");
	HX_VISIT_MEMBER_NAME(AL_obj::VELOCITY,"VELOCITY");
	HX_VISIT_MEMBER_NAME(AL_obj::LOOPING,"LOOPING");
	HX_VISIT_MEMBER_NAME(AL_obj::BUFFER,"BUFFER");
	HX_VISIT_MEMBER_NAME(AL_obj::GAIN,"GAIN");
	HX_VISIT_MEMBER_NAME(AL_obj::MIN_GAIN,"MIN_GAIN");
	HX_VISIT_MEMBER_NAME(AL_obj::MAX_GAIN,"MAX_GAIN");
	HX_VISIT_MEMBER_NAME(AL_obj::ORIENTATION,"ORIENTATION");
	HX_VISIT_MEMBER_NAME(AL_obj::SOURCE_STATE,"SOURCE_STATE");
	HX_VISIT_MEMBER_NAME(AL_obj::INITIAL,"INITIAL");
	HX_VISIT_MEMBER_NAME(AL_obj::PLAYING,"PLAYING");
	HX_VISIT_MEMBER_NAME(AL_obj::PAUSED,"PAUSED");
	HX_VISIT_MEMBER_NAME(AL_obj::STOPPED,"STOPPED");
	HX_VISIT_MEMBER_NAME(AL_obj::BUFFERS_QUEUED,"BUFFERS_QUEUED");
	HX_VISIT_MEMBER_NAME(AL_obj::BUFFERS_PROCESSED,"BUFFERS_PROCESSED");
	HX_VISIT_MEMBER_NAME(AL_obj::REFERENCE_DISTANCE,"REFERENCE_DISTANCE");
	HX_VISIT_MEMBER_NAME(AL_obj::ROLLOFF_FACTOR,"ROLLOFF_FACTOR");
	HX_VISIT_MEMBER_NAME(AL_obj::CONE_OUTER_GAIN,"CONE_OUTER_GAIN");
	HX_VISIT_MEMBER_NAME(AL_obj::MAX_DISTANCE,"MAX_DISTANCE");
	HX_VISIT_MEMBER_NAME(AL_obj::SEC_OFFSET,"SEC_OFFSET");
	HX_VISIT_MEMBER_NAME(AL_obj::SAMPLE_OFFSET,"SAMPLE_OFFSET");
	HX_VISIT_MEMBER_NAME(AL_obj::BYTE_OFFSET,"BYTE_OFFSET");
	HX_VISIT_MEMBER_NAME(AL_obj::SOURCE_TYPE,"SOURCE_TYPE");
	HX_VISIT_MEMBER_NAME(AL_obj::STATIC,"STATIC");
	HX_VISIT_MEMBER_NAME(AL_obj::STREAMING,"STREAMING");
	HX_VISIT_MEMBER_NAME(AL_obj::UNDETERMINED,"UNDETERMINED");
	HX_VISIT_MEMBER_NAME(AL_obj::FORMAT_MONO8,"FORMAT_MONO8");
	HX_VISIT_MEMBER_NAME(AL_obj::FORMAT_MONO16,"FORMAT_MONO16");
	HX_VISIT_MEMBER_NAME(AL_obj::FORMAT_STEREO8,"FORMAT_STEREO8");
	HX_VISIT_MEMBER_NAME(AL_obj::FORMAT_STEREO16,"FORMAT_STEREO16");
	HX_VISIT_MEMBER_NAME(AL_obj::FREQUENCY,"FREQUENCY");
	HX_VISIT_MEMBER_NAME(AL_obj::BITS,"BITS");
	HX_VISIT_MEMBER_NAME(AL_obj::CHANNELS,"CHANNELS");
	HX_VISIT_MEMBER_NAME(AL_obj::SIZE,"SIZE");
	HX_VISIT_MEMBER_NAME(AL_obj::NO_ERROR,"NO_ERROR");
	HX_VISIT_MEMBER_NAME(AL_obj::INVALID_NAME,"INVALID_NAME");
	HX_VISIT_MEMBER_NAME(AL_obj::INVALID_ENUM,"INVALID_ENUM");
	HX_VISIT_MEMBER_NAME(AL_obj::INVALID_VALUE,"INVALID_VALUE");
	HX_VISIT_MEMBER_NAME(AL_obj::INVALID_OPERATION,"INVALID_OPERATION");
	HX_VISIT_MEMBER_NAME(AL_obj::OUT_OF_MEMORY,"OUT_OF_MEMORY");
	HX_VISIT_MEMBER_NAME(AL_obj::VENDOR,"VENDOR");
	HX_VISIT_MEMBER_NAME(AL_obj::VERSION,"VERSION");
	HX_VISIT_MEMBER_NAME(AL_obj::RENDERER,"RENDERER");
	HX_VISIT_MEMBER_NAME(AL_obj::EXTENSIONS,"EXTENSIONS");
	HX_VISIT_MEMBER_NAME(AL_obj::DOPPLER_FACTOR,"DOPPLER_FACTOR");
	HX_VISIT_MEMBER_NAME(AL_obj::SPEED_OF_SOUND,"SPEED_OF_SOUND");
	HX_VISIT_MEMBER_NAME(AL_obj::DOPPLER_VELOCITY,"DOPPLER_VELOCITY");
	HX_VISIT_MEMBER_NAME(AL_obj::DISTANCE_MODEL,"DISTANCE_MODEL");
	HX_VISIT_MEMBER_NAME(AL_obj::INVERSE_DISTANCE,"INVERSE_DISTANCE");
	HX_VISIT_MEMBER_NAME(AL_obj::INVERSE_DISTANCE_CLAMPED,"INVERSE_DISTANCE_CLAMPED");
	HX_VISIT_MEMBER_NAME(AL_obj::LINEAR_DISTANCE,"LINEAR_DISTANCE");
	HX_VISIT_MEMBER_NAME(AL_obj::LINEAR_DISTANCE_CLAMPED,"LINEAR_DISTANCE_CLAMPED");
	HX_VISIT_MEMBER_NAME(AL_obj::EXPONENT_DISTANCE,"EXPONENT_DISTANCE");
	HX_VISIT_MEMBER_NAME(AL_obj::EXPONENT_DISTANCE_CLAMPED,"EXPONENT_DISTANCE_CLAMPED");
	HX_VISIT_MEMBER_NAME(AL_obj::INVALID_NAME_MEANING,"INVALID_NAME_MEANING");
	HX_VISIT_MEMBER_NAME(AL_obj::INVALID_ENUM_MEANING,"INVALID_ENUM_MEANING");
	HX_VISIT_MEMBER_NAME(AL_obj::INVALID_VALUE_MEANING,"INVALID_VALUE_MEANING");
	HX_VISIT_MEMBER_NAME(AL_obj::INVALID_OPERATION_MEANING,"INVALID_OPERATION_MEANING");
	HX_VISIT_MEMBER_NAME(AL_obj::OUT_OF_MEMORY_MEANING,"OUT_OF_MEMORY_MEANING");
	HX_VISIT_MEMBER_NAME(AL_obj::alhx_DopplerFactor,"alhx_DopplerFactor");
	HX_VISIT_MEMBER_NAME(AL_obj::alhx_DopplerVelocity,"alhx_DopplerVelocity");
	HX_VISIT_MEMBER_NAME(AL_obj::alhx_SpeedOfSound,"alhx_SpeedOfSound");
	HX_VISIT_MEMBER_NAME(AL_obj::alhx_DistanceModel,"alhx_DistanceModel");
	HX_VISIT_MEMBER_NAME(AL_obj::alhx_Enable,"alhx_Enable");
	HX_VISIT_MEMBER_NAME(AL_obj::alhx_Disable,"alhx_Disable");
	HX_VISIT_MEMBER_NAME(AL_obj::alhx_IsEnabled,"alhx_IsEnabled");
	HX_VISIT_MEMBER_NAME(AL_obj::alhx_GetString,"alhx_GetString");
	HX_VISIT_MEMBER_NAME(AL_obj::alhx_GetBooleanv,"alhx_GetBooleanv");
	HX_VISIT_MEMBER_NAME(AL_obj::alhx_GetIntegerv,"alhx_GetIntegerv");
	HX_VISIT_MEMBER_NAME(AL_obj::alhx_GetFloatv,"alhx_GetFloatv");
	HX_VISIT_MEMBER_NAME(AL_obj::alhx_GetDoublev,"alhx_GetDoublev");
	HX_VISIT_MEMBER_NAME(AL_obj::alhx_GetBoolean,"alhx_GetBoolean");
	HX_VISIT_MEMBER_NAME(AL_obj::alhx_GetInteger,"alhx_GetInteger");
	HX_VISIT_MEMBER_NAME(AL_obj::alhx_GetFloat,"alhx_GetFloat");
	HX_VISIT_MEMBER_NAME(AL_obj::alhx_GetDouble,"alhx_GetDouble");
	HX_VISIT_MEMBER_NAME(AL_obj::alhx_GetError,"alhx_GetError");
	HX_VISIT_MEMBER_NAME(AL_obj::alhx_IsExtensionPresent,"alhx_IsExtensionPresent");
	HX_VISIT_MEMBER_NAME(AL_obj::alhx_GetProcAddress,"alhx_GetProcAddress");
	HX_VISIT_MEMBER_NAME(AL_obj::alhx_GetEnumValue,"alhx_GetEnumValue");
	HX_VISIT_MEMBER_NAME(AL_obj::alhx_Listenerf,"alhx_Listenerf");
	HX_VISIT_MEMBER_NAME(AL_obj::alhx_Listener3f,"alhx_Listener3f");
	HX_VISIT_MEMBER_NAME(AL_obj::alhx_Listenerfv,"alhx_Listenerfv");
	HX_VISIT_MEMBER_NAME(AL_obj::alhx_Listeneri,"alhx_Listeneri");
	HX_VISIT_MEMBER_NAME(AL_obj::alhx_Listener3i,"alhx_Listener3i");
	HX_VISIT_MEMBER_NAME(AL_obj::alhx_Listeneriv,"alhx_Listeneriv");
	HX_VISIT_MEMBER_NAME(AL_obj::alhx_GetListenerf,"alhx_GetListenerf");
	HX_VISIT_MEMBER_NAME(AL_obj::alhx_GetListener3f,"alhx_GetListener3f");
	HX_VISIT_MEMBER_NAME(AL_obj::alhx_GetListenerfv,"alhx_GetListenerfv");
	HX_VISIT_MEMBER_NAME(AL_obj::alhx_GetListeneri,"alhx_GetListeneri");
	HX_VISIT_MEMBER_NAME(AL_obj::alhx_GetListener3i,"alhx_GetListener3i");
	HX_VISIT_MEMBER_NAME(AL_obj::alhx_GetListeneriv,"alhx_GetListeneriv");
	HX_VISIT_MEMBER_NAME(AL_obj::alhx_GenSources,"alhx_GenSources");
	HX_VISIT_MEMBER_NAME(AL_obj::alhx_DeleteSources,"alhx_DeleteSources");
	HX_VISIT_MEMBER_NAME(AL_obj::alhx_IsSource,"alhx_IsSource");
	HX_VISIT_MEMBER_NAME(AL_obj::alhx_Sourcef,"alhx_Sourcef");
	HX_VISIT_MEMBER_NAME(AL_obj::alhx_Source3f,"alhx_Source3f");
	HX_VISIT_MEMBER_NAME(AL_obj::alhx_Sourcefv,"alhx_Sourcefv");
	HX_VISIT_MEMBER_NAME(AL_obj::alhx_Sourcei,"alhx_Sourcei");
	HX_VISIT_MEMBER_NAME(AL_obj::alhx_Source3i,"alhx_Source3i");
	HX_VISIT_MEMBER_NAME(AL_obj::alhx_Sourceiv,"alhx_Sourceiv");
	HX_VISIT_MEMBER_NAME(AL_obj::alhx_GetSourcef,"alhx_GetSourcef");
	HX_VISIT_MEMBER_NAME(AL_obj::alhx_GetSource3f,"alhx_GetSource3f");
	HX_VISIT_MEMBER_NAME(AL_obj::alhx_GetSourcefv,"alhx_GetSourcefv");
	HX_VISIT_MEMBER_NAME(AL_obj::alhx_GetSourcei,"alhx_GetSourcei");
	HX_VISIT_MEMBER_NAME(AL_obj::alhx_GetSource3i,"alhx_GetSource3i");
	HX_VISIT_MEMBER_NAME(AL_obj::alhx_GetSourceiv,"alhx_GetSourceiv");
	HX_VISIT_MEMBER_NAME(AL_obj::alhx_SourcePlayv,"alhx_SourcePlayv");
	HX_VISIT_MEMBER_NAME(AL_obj::alhx_SourceStopv,"alhx_SourceStopv");
	HX_VISIT_MEMBER_NAME(AL_obj::alhx_SourceRewindv,"alhx_SourceRewindv");
	HX_VISIT_MEMBER_NAME(AL_obj::alhx_SourcePausev,"alhx_SourcePausev");
	HX_VISIT_MEMBER_NAME(AL_obj::alhx_SourceQueueBuffers,"alhx_SourceQueueBuffers");
	HX_VISIT_MEMBER_NAME(AL_obj::alhx_SourceUnqueueBuffers,"alhx_SourceUnqueueBuffers");
	HX_VISIT_MEMBER_NAME(AL_obj::alhx_SourcePlay,"alhx_SourcePlay");
	HX_VISIT_MEMBER_NAME(AL_obj::alhx_SourceStop,"alhx_SourceStop");
	HX_VISIT_MEMBER_NAME(AL_obj::alhx_SourceRewind,"alhx_SourceRewind");
	HX_VISIT_MEMBER_NAME(AL_obj::alhx_SourcePause,"alhx_SourcePause");
	HX_VISIT_MEMBER_NAME(AL_obj::alhx_GenBuffers,"alhx_GenBuffers");
	HX_VISIT_MEMBER_NAME(AL_obj::alhx_DeleteBuffers,"alhx_DeleteBuffers");
	HX_VISIT_MEMBER_NAME(AL_obj::alhx_IsBuffer,"alhx_IsBuffer");
	HX_VISIT_MEMBER_NAME(AL_obj::alhx_BufferData,"alhx_BufferData");
	HX_VISIT_MEMBER_NAME(AL_obj::alhx_Bufferf,"alhx_Bufferf");
	HX_VISIT_MEMBER_NAME(AL_obj::alhx_Buffer3f,"alhx_Buffer3f");
	HX_VISIT_MEMBER_NAME(AL_obj::alhx_Bufferfv,"alhx_Bufferfv");
	HX_VISIT_MEMBER_NAME(AL_obj::alhx_Bufferi,"alhx_Bufferi");
	HX_VISIT_MEMBER_NAME(AL_obj::alhx_Buffer3i,"alhx_Buffer3i");
	HX_VISIT_MEMBER_NAME(AL_obj::alhx_Bufferiv,"alhx_Bufferiv");
	HX_VISIT_MEMBER_NAME(AL_obj::alhx_GetBufferf,"alhx_GetBufferf");
	HX_VISIT_MEMBER_NAME(AL_obj::alhx_GetBuffer3f,"alhx_GetBuffer3f");
	HX_VISIT_MEMBER_NAME(AL_obj::alhx_GetBufferfv,"alhx_GetBufferfv");
	HX_VISIT_MEMBER_NAME(AL_obj::alhx_GetBufferi,"alhx_GetBufferi");
	HX_VISIT_MEMBER_NAME(AL_obj::alhx_GetBuffer3i,"alhx_GetBuffer3i");
	HX_VISIT_MEMBER_NAME(AL_obj::alhx_GetBufferiv,"alhx_GetBufferiv");
	HX_VISIT_MEMBER_NAME(AL_obj::alhx_GenSource,"alhx_GenSource");
	HX_VISIT_MEMBER_NAME(AL_obj::alhx_DeleteSource,"alhx_DeleteSource");
	HX_VISIT_MEMBER_NAME(AL_obj::alhx_GenBuffer,"alhx_GenBuffer");
	HX_VISIT_MEMBER_NAME(AL_obj::alhx_DeleteBuffer,"alhx_DeleteBuffer");
};

#endif

Class AL_obj::__mClass;

void AL_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("snow.platform.native.audio.openal.AL"), hx::TCanCast< AL_obj> ,sStaticFields,sMemberFields,
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

void AL_obj::__boot()
{
	NONE= (int)0;
	FALSE= (int)0;
	TRUE= (int)1;
	SOURCE_RELATIVE= (int)514;
	CONE_INNER_ANGLE= (int)4097;
	CONE_OUTER_ANGLE= (int)4098;
	PITCH= (int)4099;
	POSITION= (int)4100;
	DIRECTION= (int)4101;
	VELOCITY= (int)4102;
	LOOPING= (int)4103;
	BUFFER= (int)4105;
	GAIN= (int)4106;
	MIN_GAIN= (int)4109;
	MAX_GAIN= (int)4110;
	ORIENTATION= (int)4111;
	SOURCE_STATE= (int)4112;
	INITIAL= (int)4113;
	PLAYING= (int)4114;
	PAUSED= (int)4115;
	STOPPED= (int)4116;
	BUFFERS_QUEUED= (int)4117;
	BUFFERS_PROCESSED= (int)4118;
	REFERENCE_DISTANCE= (int)4128;
	ROLLOFF_FACTOR= (int)4129;
	CONE_OUTER_GAIN= (int)4130;
	MAX_DISTANCE= (int)4131;
	SEC_OFFSET= (int)4132;
	SAMPLE_OFFSET= (int)4133;
	BYTE_OFFSET= (int)4134;
	SOURCE_TYPE= (int)4135;
	STATIC= (int)4136;
	STREAMING= (int)4137;
	UNDETERMINED= (int)4144;
	FORMAT_MONO8= (int)4352;
	FORMAT_MONO16= (int)4353;
	FORMAT_STEREO8= (int)4354;
	FORMAT_STEREO16= (int)4355;
	FREQUENCY= (int)8193;
	BITS= (int)8194;
	CHANNELS= (int)8195;
	SIZE= (int)8196;
	NO_ERROR= (int)0;
	INVALID_NAME= (int)40961;
	INVALID_ENUM= (int)40962;
	INVALID_VALUE= (int)40963;
	INVALID_OPERATION= (int)40964;
	OUT_OF_MEMORY= (int)40965;
	VENDOR= (int)45057;
	VERSION= (int)45058;
	RENDERER= (int)45059;
	EXTENSIONS= (int)45060;
	DOPPLER_FACTOR= (int)49152;
	SPEED_OF_SOUND= (int)49155;
	DOPPLER_VELOCITY= (int)49153;
	DISTANCE_MODEL= (int)53248;
	INVERSE_DISTANCE= (int)53249;
	INVERSE_DISTANCE_CLAMPED= (int)53250;
	LINEAR_DISTANCE= (int)53251;
	LINEAR_DISTANCE_CLAMPED= (int)53252;
	EXPONENT_DISTANCE= (int)53253;
	EXPONENT_DISTANCE_CLAMPED= (int)53254;
	INVALID_NAME_MEANING= HX_CSTRING("AL.INVALID_NAME: Invalid parameter name");
	INVALID_ENUM_MEANING= HX_CSTRING("AL.INVALID_ENUM: Invalid enum value");
	INVALID_VALUE_MEANING= HX_CSTRING("AL.INVALID_VALUE: Invalid parameter value");
	INVALID_OPERATION_MEANING= HX_CSTRING("AL.INVALID_OPERATION: Illegal operation or call");
	OUT_OF_MEMORY_MEANING= HX_CSTRING("AL.OUT_OF_MEMORY: OpenAL has run out of memory");
	alhx_DopplerFactor= ::snow::utils::Libs_obj::load(HX_CSTRING("snow"),HX_CSTRING("alhx_DopplerFactor"),(int)1);
	alhx_DopplerVelocity= ::snow::utils::Libs_obj::load(HX_CSTRING("snow"),HX_CSTRING("alhx_DopplerVelocity"),(int)1);
	alhx_SpeedOfSound= ::snow::utils::Libs_obj::load(HX_CSTRING("snow"),HX_CSTRING("alhx_SpeedOfSound"),(int)1);
	alhx_DistanceModel= ::snow::utils::Libs_obj::load(HX_CSTRING("snow"),HX_CSTRING("alhx_DistanceModel"),(int)1);
	alhx_Enable= ::snow::utils::Libs_obj::load(HX_CSTRING("snow"),HX_CSTRING("alhx_Enable"),(int)1);
	alhx_Disable= ::snow::utils::Libs_obj::load(HX_CSTRING("snow"),HX_CSTRING("alhx_Disable"),(int)1);
	alhx_IsEnabled= ::snow::utils::Libs_obj::load(HX_CSTRING("snow"),HX_CSTRING("alhx_IsEnabled"),(int)1);
	alhx_GetString= ::snow::utils::Libs_obj::load(HX_CSTRING("snow"),HX_CSTRING("alhx_GetString"),(int)1);
	alhx_GetBooleanv= ::snow::utils::Libs_obj::load(HX_CSTRING("snow"),HX_CSTRING("alhx_GetBooleanv"),(int)2);
	alhx_GetIntegerv= ::snow::utils::Libs_obj::load(HX_CSTRING("snow"),HX_CSTRING("alhx_GetIntegerv"),(int)2);
	alhx_GetFloatv= ::snow::utils::Libs_obj::load(HX_CSTRING("snow"),HX_CSTRING("alhx_GetFloatv"),(int)2);
	alhx_GetDoublev= ::snow::utils::Libs_obj::load(HX_CSTRING("snow"),HX_CSTRING("alhx_GetDoublev"),(int)2);
	alhx_GetBoolean= ::snow::utils::Libs_obj::load(HX_CSTRING("snow"),HX_CSTRING("alhx_GetBoolean"),(int)1);
	alhx_GetInteger= ::snow::utils::Libs_obj::load(HX_CSTRING("snow"),HX_CSTRING("alhx_GetInteger"),(int)1);
	alhx_GetFloat= ::snow::utils::Libs_obj::load(HX_CSTRING("snow"),HX_CSTRING("alhx_GetFloat"),(int)1);
	alhx_GetDouble= ::snow::utils::Libs_obj::load(HX_CSTRING("snow"),HX_CSTRING("alhx_GetDouble"),(int)1);
	alhx_GetError= ::snow::utils::Libs_obj::load(HX_CSTRING("snow"),HX_CSTRING("alhx_GetError"),(int)0);
	alhx_IsExtensionPresent= ::snow::utils::Libs_obj::load(HX_CSTRING("snow"),HX_CSTRING("alhx_IsExtensionPresent"),(int)1);
	alhx_GetProcAddress= ::snow::utils::Libs_obj::load(HX_CSTRING("snow"),HX_CSTRING("alhx_GetProcAddress"),(int)1);
	alhx_GetEnumValue= ::snow::utils::Libs_obj::load(HX_CSTRING("snow"),HX_CSTRING("alhx_GetEnumValue"),(int)1);
	alhx_Listenerf= ::snow::utils::Libs_obj::load(HX_CSTRING("snow"),HX_CSTRING("alhx_Listenerf"),(int)2);
	alhx_Listener3f= ::snow::utils::Libs_obj::load(HX_CSTRING("snow"),HX_CSTRING("alhx_Listener3f"),(int)4);
	alhx_Listenerfv= ::snow::utils::Libs_obj::load(HX_CSTRING("snow"),HX_CSTRING("alhx_Listenerfv"),(int)2);
	alhx_Listeneri= ::snow::utils::Libs_obj::load(HX_CSTRING("snow"),HX_CSTRING("alhx_Listeneri"),(int)2);
	alhx_Listener3i= ::snow::utils::Libs_obj::load(HX_CSTRING("snow"),HX_CSTRING("alhx_Listener3i"),(int)4);
	alhx_Listeneriv= ::snow::utils::Libs_obj::load(HX_CSTRING("snow"),HX_CSTRING("alhx_Listeneriv"),(int)2);
	alhx_GetListenerf= ::snow::utils::Libs_obj::load(HX_CSTRING("snow"),HX_CSTRING("alhx_GetListenerf"),(int)1);
	alhx_GetListener3f= ::snow::utils::Libs_obj::load(HX_CSTRING("snow"),HX_CSTRING("alhx_GetListener3f"),(int)1);
	alhx_GetListenerfv= ::snow::utils::Libs_obj::load(HX_CSTRING("snow"),HX_CSTRING("alhx_GetListenerfv"),(int)2);
	alhx_GetListeneri= ::snow::utils::Libs_obj::load(HX_CSTRING("snow"),HX_CSTRING("alhx_GetListeneri"),(int)1);
	alhx_GetListener3i= ::snow::utils::Libs_obj::load(HX_CSTRING("snow"),HX_CSTRING("alhx_GetListener3i"),(int)1);
	alhx_GetListeneriv= ::snow::utils::Libs_obj::load(HX_CSTRING("snow"),HX_CSTRING("alhx_GetListeneriv"),(int)2);
	alhx_GenSources= ::snow::utils::Libs_obj::load(HX_CSTRING("snow"),HX_CSTRING("alhx_GenSources"),(int)1);
	alhx_DeleteSources= ::snow::utils::Libs_obj::load(HX_CSTRING("snow"),HX_CSTRING("alhx_DeleteSources"),(int)2);
	alhx_IsSource= ::snow::utils::Libs_obj::load(HX_CSTRING("snow"),HX_CSTRING("alhx_IsSource"),(int)1);
	alhx_Sourcef= ::snow::utils::Libs_obj::load(HX_CSTRING("snow"),HX_CSTRING("alhx_Sourcef"),(int)3);
	alhx_Source3f= ::snow::utils::Libs_obj::load(HX_CSTRING("snow"),HX_CSTRING("alhx_Source3f"),(int)5);
	alhx_Sourcefv= ::snow::utils::Libs_obj::load(HX_CSTRING("snow"),HX_CSTRING("alhx_Sourcefv"),(int)3);
	alhx_Sourcei= ::snow::utils::Libs_obj::load(HX_CSTRING("snow"),HX_CSTRING("alhx_Sourcei"),(int)3);
	alhx_Source3i= ::snow::utils::Libs_obj::load(HX_CSTRING("snow"),HX_CSTRING("alhx_Source3i"),(int)5);
	alhx_Sourceiv= ::snow::utils::Libs_obj::load(HX_CSTRING("snow"),HX_CSTRING("alhx_Sourceiv"),(int)3);
	alhx_GetSourcef= ::snow::utils::Libs_obj::load(HX_CSTRING("snow"),HX_CSTRING("alhx_GetSourcef"),(int)2);
	alhx_GetSource3f= ::snow::utils::Libs_obj::load(HX_CSTRING("snow"),HX_CSTRING("alhx_GetSource3f"),(int)2);
	alhx_GetSourcefv= ::snow::utils::Libs_obj::load(HX_CSTRING("snow"),HX_CSTRING("alhx_GetSourcefv"),(int)2);
	alhx_GetSourcei= ::snow::utils::Libs_obj::load(HX_CSTRING("snow"),HX_CSTRING("alhx_GetSourcei"),(int)2);
	alhx_GetSource3i= ::snow::utils::Libs_obj::load(HX_CSTRING("snow"),HX_CSTRING("alhx_GetSource3i"),(int)2);
	alhx_GetSourceiv= ::snow::utils::Libs_obj::load(HX_CSTRING("snow"),HX_CSTRING("alhx_GetSourceiv"),(int)3);
	alhx_SourcePlayv= ::snow::utils::Libs_obj::load(HX_CSTRING("snow"),HX_CSTRING("alhx_SourcePlayv"),(int)2);
	alhx_SourceStopv= ::snow::utils::Libs_obj::load(HX_CSTRING("snow"),HX_CSTRING("alhx_SourceStopv"),(int)2);
	alhx_SourceRewindv= ::snow::utils::Libs_obj::load(HX_CSTRING("snow"),HX_CSTRING("alhx_SourceRewindv"),(int)2);
	alhx_SourcePausev= ::snow::utils::Libs_obj::load(HX_CSTRING("snow"),HX_CSTRING("alhx_SourcePausev"),(int)2);
	alhx_SourceQueueBuffers= ::snow::utils::Libs_obj::load(HX_CSTRING("snow"),HX_CSTRING("alhx_SourceQueueBuffers"),(int)3);
	alhx_SourceUnqueueBuffers= ::snow::utils::Libs_obj::load(HX_CSTRING("snow"),HX_CSTRING("alhx_SourceUnqueueBuffers"),(int)2);
	alhx_SourcePlay= ::snow::utils::Libs_obj::load(HX_CSTRING("snow"),HX_CSTRING("alhx_SourcePlay"),(int)1);
	alhx_SourceStop= ::snow::utils::Libs_obj::load(HX_CSTRING("snow"),HX_CSTRING("alhx_SourceStop"),(int)1);
	alhx_SourceRewind= ::snow::utils::Libs_obj::load(HX_CSTRING("snow"),HX_CSTRING("alhx_SourceRewind"),(int)1);
	alhx_SourcePause= ::snow::utils::Libs_obj::load(HX_CSTRING("snow"),HX_CSTRING("alhx_SourcePause"),(int)1);
	alhx_GenBuffers= ::snow::utils::Libs_obj::load(HX_CSTRING("snow"),HX_CSTRING("alhx_GenBuffers"),(int)1);
	alhx_DeleteBuffers= ::snow::utils::Libs_obj::load(HX_CSTRING("snow"),HX_CSTRING("alhx_DeleteBuffers"),(int)2);
	alhx_IsBuffer= ::snow::utils::Libs_obj::load(HX_CSTRING("snow"),HX_CSTRING("alhx_IsBuffer"),(int)1);
	alhx_BufferData= ::snow::utils::Libs_obj::load(HX_CSTRING("snow"),HX_CSTRING("alhx_BufferData"),(int)5);
	alhx_Bufferf= ::snow::utils::Libs_obj::load(HX_CSTRING("snow"),HX_CSTRING("alhx_Bufferf"),(int)3);
	alhx_Buffer3f= ::snow::utils::Libs_obj::load(HX_CSTRING("snow"),HX_CSTRING("alhx_Buffer3f"),(int)5);
	alhx_Bufferfv= ::snow::utils::Libs_obj::load(HX_CSTRING("snow"),HX_CSTRING("alhx_Bufferfv"),(int)3);
	alhx_Bufferi= ::snow::utils::Libs_obj::load(HX_CSTRING("snow"),HX_CSTRING("alhx_Bufferi"),(int)3);
	alhx_Buffer3i= ::snow::utils::Libs_obj::load(HX_CSTRING("snow"),HX_CSTRING("alhx_Buffer3i"),(int)5);
	alhx_Bufferiv= ::snow::utils::Libs_obj::load(HX_CSTRING("snow"),HX_CSTRING("alhx_Bufferiv"),(int)3);
	alhx_GetBufferf= ::snow::utils::Libs_obj::load(HX_CSTRING("snow"),HX_CSTRING("alhx_GetBufferf"),(int)2);
	alhx_GetBuffer3f= ::snow::utils::Libs_obj::load(HX_CSTRING("snow"),HX_CSTRING("alhx_GetBuffer3f"),(int)2);
	alhx_GetBufferfv= ::snow::utils::Libs_obj::load(HX_CSTRING("snow"),HX_CSTRING("alhx_GetBufferfv"),(int)3);
	alhx_GetBufferi= ::snow::utils::Libs_obj::load(HX_CSTRING("snow"),HX_CSTRING("alhx_GetBufferi"),(int)2);
	alhx_GetBuffer3i= ::snow::utils::Libs_obj::load(HX_CSTRING("snow"),HX_CSTRING("alhx_GetBuffer3i"),(int)2);
	alhx_GetBufferiv= ::snow::utils::Libs_obj::load(HX_CSTRING("snow"),HX_CSTRING("alhx_GetBufferiv"),(int)3);
	alhx_GenSource= ::snow::utils::Libs_obj::load(HX_CSTRING("snow"),HX_CSTRING("alhx_GenSource"),(int)0);
	alhx_DeleteSource= ::snow::utils::Libs_obj::load(HX_CSTRING("snow"),HX_CSTRING("alhx_DeleteSource"),(int)1);
	alhx_GenBuffer= ::snow::utils::Libs_obj::load(HX_CSTRING("snow"),HX_CSTRING("alhx_GenBuffer"),(int)0);
	alhx_DeleteBuffer= ::snow::utils::Libs_obj::load(HX_CSTRING("snow"),HX_CSTRING("alhx_DeleteBuffer"),(int)1);
}

} // end namespace snow
} // end namespace platform
} // end namespace native
} // end namespace audio
} // end namespace openal
