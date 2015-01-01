#include <hxcpp.h>

#ifndef INCLUDED_snow_platform_native_audio_openal_ALC
#include <snow/platform/native/audio/openal/ALC.h>
#endif
#ifndef INCLUDED_snow_utils_Libs
#include <snow/utils/Libs.h>
#endif
namespace snow{
namespace platform{
namespace native{
namespace audio{
namespace openal{

Void ALC_obj::__construct()
{
	return null();
}

//ALC_obj::~ALC_obj() { }

Dynamic ALC_obj::__CreateEmpty() { return  new ALC_obj; }
hx::ObjectPtr< ALC_obj > ALC_obj::__new()
{  hx::ObjectPtr< ALC_obj > result = new ALC_obj();
	result->__construct();
	return result;}

Dynamic ALC_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ALC_obj > result = new ALC_obj();
	result->__construct();
	return result;}

int ALC_obj::FALSE;

int ALC_obj::TRUE;

int ALC_obj::FREQUENCY;

int ALC_obj::REFRESH;

int ALC_obj::SYNC;

int ALC_obj::MONO_SOURCES;

int ALC_obj::STEREO_SOURCES;

int ALC_obj::NO_ERROR;

int ALC_obj::INVALID_DEVICE;

int ALC_obj::INVALID_CONTEXT;

int ALC_obj::INVALID_ENUM;

int ALC_obj::INVALID_VALUE;

int ALC_obj::OUT_OF_MEMORY;

int ALC_obj::ATTRIBUTES_SIZE;

int ALC_obj::ALL_ATTRIBUTES;

int ALC_obj::DEFAULT_DEVICE_SPECIFIER;

int ALC_obj::DEVICE_SPECIFIER;

int ALC_obj::EXTENSIONS;

int ALC_obj::ENUMERATE_ALL_EXT;

int ALC_obj::DEFAULT_ALL_DEVICES_SPECIFIER;

int ALC_obj::ALL_DEVICES_SPECIFIER;

Dynamic ALC_obj::createContext( Dynamic device,Array< int > attrlist){
	HX_STACK_FRAME("snow.platform.native.audio.openal.ALC","createContext",0x8249e403,"snow.platform.native.audio.openal.ALC.createContext","snow/platform/native/audio/openal/AL.hx",572,0x47acab9a)
	HX_STACK_ARG(device,"device")
	HX_STACK_ARG(attrlist,"attrlist")
	HX_STACK_LINE(572)
	return ::snow::platform::native::audio::openal::ALC_obj::alhx_alcCreateContext(device,attrlist);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ALC_obj,createContext,return )

bool ALC_obj::makeContextCurrent( Dynamic context){
	HX_STACK_FRAME("snow.platform.native.audio.openal.ALC","makeContextCurrent",0xcde658e8,"snow.platform.native.audio.openal.ALC.makeContextCurrent","snow/platform/native/audio/openal/AL.hx",576,0x47acab9a)
	HX_STACK_ARG(context,"context")
	HX_STACK_LINE(576)
	return ::snow::platform::native::audio::openal::ALC_obj::alhx_alcMakeContextCurrent(context);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ALC_obj,makeContextCurrent,return )

Void ALC_obj::processContext( Dynamic context){
{
		HX_STACK_FRAME("snow.platform.native.audio.openal.ALC","processContext",0xc8cd5b90,"snow.platform.native.audio.openal.ALC.processContext","snow/platform/native/audio/openal/AL.hx",580,0x47acab9a)
		HX_STACK_ARG(context,"context")
		HX_STACK_LINE(580)
		::snow::platform::native::audio::openal::ALC_obj::alhx_alcProcessContext(context);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ALC_obj,processContext,(void))

Void ALC_obj::suspendContext( Dynamic context){
{
		HX_STACK_FRAME("snow.platform.native.audio.openal.ALC","suspendContext",0xfbb43a23,"snow.platform.native.audio.openal.ALC.suspendContext","snow/platform/native/audio/openal/AL.hx",584,0x47acab9a)
		HX_STACK_ARG(context,"context")
		HX_STACK_LINE(584)
		::snow::platform::native::audio::openal::ALC_obj::alhx_alcSuspendContext(context);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ALC_obj,suspendContext,(void))

Void ALC_obj::destroyContext( Dynamic context){
{
		HX_STACK_FRAME("snow.platform.native.audio.openal.ALC","destroyContext",0x82db0865,"snow.platform.native.audio.openal.ALC.destroyContext","snow/platform/native/audio/openal/AL.hx",588,0x47acab9a)
		HX_STACK_ARG(context,"context")
		HX_STACK_LINE(588)
		::snow::platform::native::audio::openal::ALC_obj::alhx_alcDestroyContext(context);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ALC_obj,destroyContext,(void))

Dynamic ALC_obj::getCurrentContext( ){
	HX_STACK_FRAME("snow.platform.native.audio.openal.ALC","getCurrentContext",0x45f3c79c,"snow.platform.native.audio.openal.ALC.getCurrentContext","snow/platform/native/audio/openal/AL.hx",592,0x47acab9a)
	HX_STACK_LINE(592)
	return ::snow::platform::native::audio::openal::ALC_obj::alhx_alcGetCurrentContext();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(ALC_obj,getCurrentContext,return )

Dynamic ALC_obj::getContextsDevice( Dynamic context){
	HX_STACK_FRAME("snow.platform.native.audio.openal.ALC","getContextsDevice",0x4905fc40,"snow.platform.native.audio.openal.ALC.getContextsDevice","snow/platform/native/audio/openal/AL.hx",596,0x47acab9a)
	HX_STACK_ARG(context,"context")
	HX_STACK_LINE(596)
	return ::snow::platform::native::audio::openal::ALC_obj::alhx_alcGetContextsDevice(context);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ALC_obj,getContextsDevice,return )

Dynamic ALC_obj::openDevice( ::String devicename){
	HX_STACK_FRAME("snow.platform.native.audio.openal.ALC","openDevice",0x023f6450,"snow.platform.native.audio.openal.ALC.openDevice","snow/platform/native/audio/openal/AL.hx",603,0x47acab9a)
	HX_STACK_ARG(devicename,"devicename")
	HX_STACK_LINE(603)
	return ::snow::platform::native::audio::openal::ALC_obj::alhx_alcOpenDevice(devicename);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ALC_obj,openDevice,return )

bool ALC_obj::closeDevice( Dynamic device){
	HX_STACK_FRAME("snow.platform.native.audio.openal.ALC","closeDevice",0xae55ac1e,"snow.platform.native.audio.openal.ALC.closeDevice","snow/platform/native/audio/openal/AL.hx",607,0x47acab9a)
	HX_STACK_ARG(device,"device")
	HX_STACK_LINE(607)
	return ::snow::platform::native::audio::openal::ALC_obj::alhx_alcCloseDevice(device);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ALC_obj,closeDevice,return )

int ALC_obj::getError( Dynamic device){
	HX_STACK_FRAME("snow.platform.native.audio.openal.ALC","getError",0xfe0543a2,"snow.platform.native.audio.openal.ALC.getError","snow/platform/native/audio/openal/AL.hx",611,0x47acab9a)
	HX_STACK_ARG(device,"device")
	HX_STACK_LINE(611)
	return ::snow::platform::native::audio::openal::ALC_obj::alhx_alcGetError(device);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ALC_obj,getError,return )

::String ALC_obj::getString( Dynamic device,int param){
	HX_STACK_FRAME("snow.platform.native.audio.openal.ALC","getString",0x065d8fb7,"snow.platform.native.audio.openal.ALC.getString","snow/platform/native/audio/openal/AL.hx",615,0x47acab9a)
	HX_STACK_ARG(device,"device")
	HX_STACK_ARG(param,"param")
	HX_STACK_LINE(615)
	return ::snow::platform::native::audio::openal::ALC_obj::alhx_alcGetString(device,param);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ALC_obj,getString,return )

Array< int > ALC_obj::getIntegerv( Dynamic device,int param,int size){
	HX_STACK_FRAME("snow.platform.native.audio.openal.ALC","getIntegerv",0xc9abb55e,"snow.platform.native.audio.openal.ALC.getIntegerv","snow/platform/native/audio/openal/AL.hx",619,0x47acab9a)
	HX_STACK_ARG(device,"device")
	HX_STACK_ARG(param,"param")
	HX_STACK_ARG(size,"size")
	HX_STACK_LINE(619)
	return ::snow::platform::native::audio::openal::ALC_obj::alhx_alcGetIntegerv(device,param,size);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(ALC_obj,getIntegerv,return )

::String ALC_obj::INVALID_DEVICE_MEANING;

::String ALC_obj::INVALID_CONTEXT_MEANING;

::String ALC_obj::INVALID_ENUM_MEANING;

::String ALC_obj::INVALID_VALUE_MEANING;

::String ALC_obj::OUT_OF_MEMORY_MEANING;

::String ALC_obj::getErrorMeaning( int error){
	HX_STACK_FRAME("snow.platform.native.audio.openal.ALC","getErrorMeaning",0x6949483b,"snow.platform.native.audio.openal.ALC.getErrorMeaning","snow/platform/native/audio/openal/AL.hx",630,0x47acab9a)
	HX_STACK_ARG(error,"error")
	HX_STACK_LINE(632)
	if (((error == ::snow::platform::native::audio::openal::ALC_obj::INVALID_DEVICE))){
		HX_STACK_LINE(632)
		return ::snow::platform::native::audio::openal::ALC_obj::INVALID_DEVICE_MEANING;
	}
	HX_STACK_LINE(633)
	if (((error == ::snow::platform::native::audio::openal::ALC_obj::INVALID_CONTEXT))){
		HX_STACK_LINE(633)
		return ::snow::platform::native::audio::openal::ALC_obj::INVALID_CONTEXT_MEANING;
	}
	HX_STACK_LINE(634)
	if (((error == ::snow::platform::native::audio::openal::ALC_obj::INVALID_ENUM))){
		HX_STACK_LINE(634)
		return ::snow::platform::native::audio::openal::ALC_obj::INVALID_ENUM_MEANING;
	}
	HX_STACK_LINE(635)
	if (((error == ::snow::platform::native::audio::openal::ALC_obj::INVALID_VALUE))){
		HX_STACK_LINE(635)
		return ::snow::platform::native::audio::openal::ALC_obj::INVALID_VALUE_MEANING;
	}
	HX_STACK_LINE(636)
	if (((error == ::snow::platform::native::audio::openal::ALC_obj::OUT_OF_MEMORY))){
		HX_STACK_LINE(636)
		return ::snow::platform::native::audio::openal::ALC_obj::OUT_OF_MEMORY_MEANING;
	}
	HX_STACK_LINE(638)
	return HX_CSTRING("ALC.NO_ERROR: No Error");
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ALC_obj,getErrorMeaning,return )

Dynamic ALC_obj::alhx_alcCreateContext;

Dynamic ALC_obj::alhx_alcMakeContextCurrent;

Dynamic ALC_obj::alhx_alcProcessContext;

Dynamic ALC_obj::alhx_alcSuspendContext;

Dynamic ALC_obj::alhx_alcDestroyContext;

Dynamic ALC_obj::alhx_alcGetCurrentContext;

Dynamic ALC_obj::alhx_alcGetContextsDevice;

Dynamic ALC_obj::alhx_alcOpenDevice;

Dynamic ALC_obj::alhx_alcCloseDevice;

Dynamic ALC_obj::alhx_alcGetError;

Dynamic ALC_obj::alhx_alcGetString;

Dynamic ALC_obj::alhx_alcGetIntegerv;


ALC_obj::ALC_obj()
{
}

Dynamic ALC_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"TRUE") ) { return TRUE; }
		if (HX_FIELD_EQ(inName,"SYNC") ) { return SYNC; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"FALSE") ) { return FALSE; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"REFRESH") ) { return REFRESH; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"NO_ERROR") ) { return NO_ERROR; }
		if (HX_FIELD_EQ(inName,"getError") ) { return getError_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"FREQUENCY") ) { return FREQUENCY; }
		if (HX_FIELD_EQ(inName,"getString") ) { return getString_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"EXTENSIONS") ) { return EXTENSIONS; }
		if (HX_FIELD_EQ(inName,"openDevice") ) { return openDevice_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"closeDevice") ) { return closeDevice_dyn(); }
		if (HX_FIELD_EQ(inName,"getIntegerv") ) { return getIntegerv_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"MONO_SOURCES") ) { return MONO_SOURCES; }
		if (HX_FIELD_EQ(inName,"INVALID_ENUM") ) { return INVALID_ENUM; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"INVALID_VALUE") ) { return INVALID_VALUE; }
		if (HX_FIELD_EQ(inName,"OUT_OF_MEMORY") ) { return OUT_OF_MEMORY; }
		if (HX_FIELD_EQ(inName,"createContext") ) { return createContext_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"STEREO_SOURCES") ) { return STEREO_SOURCES; }
		if (HX_FIELD_EQ(inName,"INVALID_DEVICE") ) { return INVALID_DEVICE; }
		if (HX_FIELD_EQ(inName,"ALL_ATTRIBUTES") ) { return ALL_ATTRIBUTES; }
		if (HX_FIELD_EQ(inName,"processContext") ) { return processContext_dyn(); }
		if (HX_FIELD_EQ(inName,"suspendContext") ) { return suspendContext_dyn(); }
		if (HX_FIELD_EQ(inName,"destroyContext") ) { return destroyContext_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"INVALID_CONTEXT") ) { return INVALID_CONTEXT; }
		if (HX_FIELD_EQ(inName,"ATTRIBUTES_SIZE") ) { return ATTRIBUTES_SIZE; }
		if (HX_FIELD_EQ(inName,"getErrorMeaning") ) { return getErrorMeaning_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"DEVICE_SPECIFIER") ) { return DEVICE_SPECIFIER; }
		if (HX_FIELD_EQ(inName,"alhx_alcGetError") ) { return alhx_alcGetError; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"ENUMERATE_ALL_EXT") ) { return ENUMERATE_ALL_EXT; }
		if (HX_FIELD_EQ(inName,"getCurrentContext") ) { return getCurrentContext_dyn(); }
		if (HX_FIELD_EQ(inName,"getContextsDevice") ) { return getContextsDevice_dyn(); }
		if (HX_FIELD_EQ(inName,"alhx_alcGetString") ) { return alhx_alcGetString; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"makeContextCurrent") ) { return makeContextCurrent_dyn(); }
		if (HX_FIELD_EQ(inName,"alhx_alcOpenDevice") ) { return alhx_alcOpenDevice; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"alhx_alcCloseDevice") ) { return alhx_alcCloseDevice; }
		if (HX_FIELD_EQ(inName,"alhx_alcGetIntegerv") ) { return alhx_alcGetIntegerv; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"INVALID_ENUM_MEANING") ) { return INVALID_ENUM_MEANING; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"ALL_DEVICES_SPECIFIER") ) { return ALL_DEVICES_SPECIFIER; }
		if (HX_FIELD_EQ(inName,"INVALID_VALUE_MEANING") ) { return INVALID_VALUE_MEANING; }
		if (HX_FIELD_EQ(inName,"OUT_OF_MEMORY_MEANING") ) { return OUT_OF_MEMORY_MEANING; }
		if (HX_FIELD_EQ(inName,"alhx_alcCreateContext") ) { return alhx_alcCreateContext; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"INVALID_DEVICE_MEANING") ) { return INVALID_DEVICE_MEANING; }
		if (HX_FIELD_EQ(inName,"alhx_alcProcessContext") ) { return alhx_alcProcessContext; }
		if (HX_FIELD_EQ(inName,"alhx_alcSuspendContext") ) { return alhx_alcSuspendContext; }
		if (HX_FIELD_EQ(inName,"alhx_alcDestroyContext") ) { return alhx_alcDestroyContext; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"INVALID_CONTEXT_MEANING") ) { return INVALID_CONTEXT_MEANING; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"DEFAULT_DEVICE_SPECIFIER") ) { return DEFAULT_DEVICE_SPECIFIER; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"alhx_alcGetCurrentContext") ) { return alhx_alcGetCurrentContext; }
		if (HX_FIELD_EQ(inName,"alhx_alcGetContextsDevice") ) { return alhx_alcGetContextsDevice; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"alhx_alcMakeContextCurrent") ) { return alhx_alcMakeContextCurrent; }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"DEFAULT_ALL_DEVICES_SPECIFIER") ) { return DEFAULT_ALL_DEVICES_SPECIFIER; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ALC_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"TRUE") ) { TRUE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"SYNC") ) { SYNC=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"FALSE") ) { FALSE=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"REFRESH") ) { REFRESH=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"NO_ERROR") ) { NO_ERROR=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"FREQUENCY") ) { FREQUENCY=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"EXTENSIONS") ) { EXTENSIONS=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"MONO_SOURCES") ) { MONO_SOURCES=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"INVALID_ENUM") ) { INVALID_ENUM=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"INVALID_VALUE") ) { INVALID_VALUE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"OUT_OF_MEMORY") ) { OUT_OF_MEMORY=inValue.Cast< int >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"STEREO_SOURCES") ) { STEREO_SOURCES=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"INVALID_DEVICE") ) { INVALID_DEVICE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ALL_ATTRIBUTES") ) { ALL_ATTRIBUTES=inValue.Cast< int >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"INVALID_CONTEXT") ) { INVALID_CONTEXT=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ATTRIBUTES_SIZE") ) { ATTRIBUTES_SIZE=inValue.Cast< int >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"DEVICE_SPECIFIER") ) { DEVICE_SPECIFIER=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"alhx_alcGetError") ) { alhx_alcGetError=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"ENUMERATE_ALL_EXT") ) { ENUMERATE_ALL_EXT=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"alhx_alcGetString") ) { alhx_alcGetString=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"alhx_alcOpenDevice") ) { alhx_alcOpenDevice=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"alhx_alcCloseDevice") ) { alhx_alcCloseDevice=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"alhx_alcGetIntegerv") ) { alhx_alcGetIntegerv=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"INVALID_ENUM_MEANING") ) { INVALID_ENUM_MEANING=inValue.Cast< ::String >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"ALL_DEVICES_SPECIFIER") ) { ALL_DEVICES_SPECIFIER=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"INVALID_VALUE_MEANING") ) { INVALID_VALUE_MEANING=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"OUT_OF_MEMORY_MEANING") ) { OUT_OF_MEMORY_MEANING=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"alhx_alcCreateContext") ) { alhx_alcCreateContext=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"INVALID_DEVICE_MEANING") ) { INVALID_DEVICE_MEANING=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"alhx_alcProcessContext") ) { alhx_alcProcessContext=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"alhx_alcSuspendContext") ) { alhx_alcSuspendContext=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"alhx_alcDestroyContext") ) { alhx_alcDestroyContext=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"INVALID_CONTEXT_MEANING") ) { INVALID_CONTEXT_MEANING=inValue.Cast< ::String >(); return inValue; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"DEFAULT_DEVICE_SPECIFIER") ) { DEFAULT_DEVICE_SPECIFIER=inValue.Cast< int >(); return inValue; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"alhx_alcGetCurrentContext") ) { alhx_alcGetCurrentContext=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"alhx_alcGetContextsDevice") ) { alhx_alcGetContextsDevice=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"alhx_alcMakeContextCurrent") ) { alhx_alcMakeContextCurrent=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"DEFAULT_ALL_DEVICES_SPECIFIER") ) { DEFAULT_ALL_DEVICES_SPECIFIER=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ALC_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("FALSE"),
	HX_CSTRING("TRUE"),
	HX_CSTRING("FREQUENCY"),
	HX_CSTRING("REFRESH"),
	HX_CSTRING("SYNC"),
	HX_CSTRING("MONO_SOURCES"),
	HX_CSTRING("STEREO_SOURCES"),
	HX_CSTRING("NO_ERROR"),
	HX_CSTRING("INVALID_DEVICE"),
	HX_CSTRING("INVALID_CONTEXT"),
	HX_CSTRING("INVALID_ENUM"),
	HX_CSTRING("INVALID_VALUE"),
	HX_CSTRING("OUT_OF_MEMORY"),
	HX_CSTRING("ATTRIBUTES_SIZE"),
	HX_CSTRING("ALL_ATTRIBUTES"),
	HX_CSTRING("DEFAULT_DEVICE_SPECIFIER"),
	HX_CSTRING("DEVICE_SPECIFIER"),
	HX_CSTRING("EXTENSIONS"),
	HX_CSTRING("ENUMERATE_ALL_EXT"),
	HX_CSTRING("DEFAULT_ALL_DEVICES_SPECIFIER"),
	HX_CSTRING("ALL_DEVICES_SPECIFIER"),
	HX_CSTRING("createContext"),
	HX_CSTRING("makeContextCurrent"),
	HX_CSTRING("processContext"),
	HX_CSTRING("suspendContext"),
	HX_CSTRING("destroyContext"),
	HX_CSTRING("getCurrentContext"),
	HX_CSTRING("getContextsDevice"),
	HX_CSTRING("openDevice"),
	HX_CSTRING("closeDevice"),
	HX_CSTRING("getError"),
	HX_CSTRING("getString"),
	HX_CSTRING("getIntegerv"),
	HX_CSTRING("INVALID_DEVICE_MEANING"),
	HX_CSTRING("INVALID_CONTEXT_MEANING"),
	HX_CSTRING("INVALID_ENUM_MEANING"),
	HX_CSTRING("INVALID_VALUE_MEANING"),
	HX_CSTRING("OUT_OF_MEMORY_MEANING"),
	HX_CSTRING("getErrorMeaning"),
	HX_CSTRING("alhx_alcCreateContext"),
	HX_CSTRING("alhx_alcMakeContextCurrent"),
	HX_CSTRING("alhx_alcProcessContext"),
	HX_CSTRING("alhx_alcSuspendContext"),
	HX_CSTRING("alhx_alcDestroyContext"),
	HX_CSTRING("alhx_alcGetCurrentContext"),
	HX_CSTRING("alhx_alcGetContextsDevice"),
	HX_CSTRING("alhx_alcOpenDevice"),
	HX_CSTRING("alhx_alcCloseDevice"),
	HX_CSTRING("alhx_alcGetError"),
	HX_CSTRING("alhx_alcGetString"),
	HX_CSTRING("alhx_alcGetIntegerv"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ALC_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ALC_obj::FALSE,"FALSE");
	HX_MARK_MEMBER_NAME(ALC_obj::TRUE,"TRUE");
	HX_MARK_MEMBER_NAME(ALC_obj::FREQUENCY,"FREQUENCY");
	HX_MARK_MEMBER_NAME(ALC_obj::REFRESH,"REFRESH");
	HX_MARK_MEMBER_NAME(ALC_obj::SYNC,"SYNC");
	HX_MARK_MEMBER_NAME(ALC_obj::MONO_SOURCES,"MONO_SOURCES");
	HX_MARK_MEMBER_NAME(ALC_obj::STEREO_SOURCES,"STEREO_SOURCES");
	HX_MARK_MEMBER_NAME(ALC_obj::NO_ERROR,"NO_ERROR");
	HX_MARK_MEMBER_NAME(ALC_obj::INVALID_DEVICE,"INVALID_DEVICE");
	HX_MARK_MEMBER_NAME(ALC_obj::INVALID_CONTEXT,"INVALID_CONTEXT");
	HX_MARK_MEMBER_NAME(ALC_obj::INVALID_ENUM,"INVALID_ENUM");
	HX_MARK_MEMBER_NAME(ALC_obj::INVALID_VALUE,"INVALID_VALUE");
	HX_MARK_MEMBER_NAME(ALC_obj::OUT_OF_MEMORY,"OUT_OF_MEMORY");
	HX_MARK_MEMBER_NAME(ALC_obj::ATTRIBUTES_SIZE,"ATTRIBUTES_SIZE");
	HX_MARK_MEMBER_NAME(ALC_obj::ALL_ATTRIBUTES,"ALL_ATTRIBUTES");
	HX_MARK_MEMBER_NAME(ALC_obj::DEFAULT_DEVICE_SPECIFIER,"DEFAULT_DEVICE_SPECIFIER");
	HX_MARK_MEMBER_NAME(ALC_obj::DEVICE_SPECIFIER,"DEVICE_SPECIFIER");
	HX_MARK_MEMBER_NAME(ALC_obj::EXTENSIONS,"EXTENSIONS");
	HX_MARK_MEMBER_NAME(ALC_obj::ENUMERATE_ALL_EXT,"ENUMERATE_ALL_EXT");
	HX_MARK_MEMBER_NAME(ALC_obj::DEFAULT_ALL_DEVICES_SPECIFIER,"DEFAULT_ALL_DEVICES_SPECIFIER");
	HX_MARK_MEMBER_NAME(ALC_obj::ALL_DEVICES_SPECIFIER,"ALL_DEVICES_SPECIFIER");
	HX_MARK_MEMBER_NAME(ALC_obj::INVALID_DEVICE_MEANING,"INVALID_DEVICE_MEANING");
	HX_MARK_MEMBER_NAME(ALC_obj::INVALID_CONTEXT_MEANING,"INVALID_CONTEXT_MEANING");
	HX_MARK_MEMBER_NAME(ALC_obj::INVALID_ENUM_MEANING,"INVALID_ENUM_MEANING");
	HX_MARK_MEMBER_NAME(ALC_obj::INVALID_VALUE_MEANING,"INVALID_VALUE_MEANING");
	HX_MARK_MEMBER_NAME(ALC_obj::OUT_OF_MEMORY_MEANING,"OUT_OF_MEMORY_MEANING");
	HX_MARK_MEMBER_NAME(ALC_obj::alhx_alcCreateContext,"alhx_alcCreateContext");
	HX_MARK_MEMBER_NAME(ALC_obj::alhx_alcMakeContextCurrent,"alhx_alcMakeContextCurrent");
	HX_MARK_MEMBER_NAME(ALC_obj::alhx_alcProcessContext,"alhx_alcProcessContext");
	HX_MARK_MEMBER_NAME(ALC_obj::alhx_alcSuspendContext,"alhx_alcSuspendContext");
	HX_MARK_MEMBER_NAME(ALC_obj::alhx_alcDestroyContext,"alhx_alcDestroyContext");
	HX_MARK_MEMBER_NAME(ALC_obj::alhx_alcGetCurrentContext,"alhx_alcGetCurrentContext");
	HX_MARK_MEMBER_NAME(ALC_obj::alhx_alcGetContextsDevice,"alhx_alcGetContextsDevice");
	HX_MARK_MEMBER_NAME(ALC_obj::alhx_alcOpenDevice,"alhx_alcOpenDevice");
	HX_MARK_MEMBER_NAME(ALC_obj::alhx_alcCloseDevice,"alhx_alcCloseDevice");
	HX_MARK_MEMBER_NAME(ALC_obj::alhx_alcGetError,"alhx_alcGetError");
	HX_MARK_MEMBER_NAME(ALC_obj::alhx_alcGetString,"alhx_alcGetString");
	HX_MARK_MEMBER_NAME(ALC_obj::alhx_alcGetIntegerv,"alhx_alcGetIntegerv");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ALC_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ALC_obj::FALSE,"FALSE");
	HX_VISIT_MEMBER_NAME(ALC_obj::TRUE,"TRUE");
	HX_VISIT_MEMBER_NAME(ALC_obj::FREQUENCY,"FREQUENCY");
	HX_VISIT_MEMBER_NAME(ALC_obj::REFRESH,"REFRESH");
	HX_VISIT_MEMBER_NAME(ALC_obj::SYNC,"SYNC");
	HX_VISIT_MEMBER_NAME(ALC_obj::MONO_SOURCES,"MONO_SOURCES");
	HX_VISIT_MEMBER_NAME(ALC_obj::STEREO_SOURCES,"STEREO_SOURCES");
	HX_VISIT_MEMBER_NAME(ALC_obj::NO_ERROR,"NO_ERROR");
	HX_VISIT_MEMBER_NAME(ALC_obj::INVALID_DEVICE,"INVALID_DEVICE");
	HX_VISIT_MEMBER_NAME(ALC_obj::INVALID_CONTEXT,"INVALID_CONTEXT");
	HX_VISIT_MEMBER_NAME(ALC_obj::INVALID_ENUM,"INVALID_ENUM");
	HX_VISIT_MEMBER_NAME(ALC_obj::INVALID_VALUE,"INVALID_VALUE");
	HX_VISIT_MEMBER_NAME(ALC_obj::OUT_OF_MEMORY,"OUT_OF_MEMORY");
	HX_VISIT_MEMBER_NAME(ALC_obj::ATTRIBUTES_SIZE,"ATTRIBUTES_SIZE");
	HX_VISIT_MEMBER_NAME(ALC_obj::ALL_ATTRIBUTES,"ALL_ATTRIBUTES");
	HX_VISIT_MEMBER_NAME(ALC_obj::DEFAULT_DEVICE_SPECIFIER,"DEFAULT_DEVICE_SPECIFIER");
	HX_VISIT_MEMBER_NAME(ALC_obj::DEVICE_SPECIFIER,"DEVICE_SPECIFIER");
	HX_VISIT_MEMBER_NAME(ALC_obj::EXTENSIONS,"EXTENSIONS");
	HX_VISIT_MEMBER_NAME(ALC_obj::ENUMERATE_ALL_EXT,"ENUMERATE_ALL_EXT");
	HX_VISIT_MEMBER_NAME(ALC_obj::DEFAULT_ALL_DEVICES_SPECIFIER,"DEFAULT_ALL_DEVICES_SPECIFIER");
	HX_VISIT_MEMBER_NAME(ALC_obj::ALL_DEVICES_SPECIFIER,"ALL_DEVICES_SPECIFIER");
	HX_VISIT_MEMBER_NAME(ALC_obj::INVALID_DEVICE_MEANING,"INVALID_DEVICE_MEANING");
	HX_VISIT_MEMBER_NAME(ALC_obj::INVALID_CONTEXT_MEANING,"INVALID_CONTEXT_MEANING");
	HX_VISIT_MEMBER_NAME(ALC_obj::INVALID_ENUM_MEANING,"INVALID_ENUM_MEANING");
	HX_VISIT_MEMBER_NAME(ALC_obj::INVALID_VALUE_MEANING,"INVALID_VALUE_MEANING");
	HX_VISIT_MEMBER_NAME(ALC_obj::OUT_OF_MEMORY_MEANING,"OUT_OF_MEMORY_MEANING");
	HX_VISIT_MEMBER_NAME(ALC_obj::alhx_alcCreateContext,"alhx_alcCreateContext");
	HX_VISIT_MEMBER_NAME(ALC_obj::alhx_alcMakeContextCurrent,"alhx_alcMakeContextCurrent");
	HX_VISIT_MEMBER_NAME(ALC_obj::alhx_alcProcessContext,"alhx_alcProcessContext");
	HX_VISIT_MEMBER_NAME(ALC_obj::alhx_alcSuspendContext,"alhx_alcSuspendContext");
	HX_VISIT_MEMBER_NAME(ALC_obj::alhx_alcDestroyContext,"alhx_alcDestroyContext");
	HX_VISIT_MEMBER_NAME(ALC_obj::alhx_alcGetCurrentContext,"alhx_alcGetCurrentContext");
	HX_VISIT_MEMBER_NAME(ALC_obj::alhx_alcGetContextsDevice,"alhx_alcGetContextsDevice");
	HX_VISIT_MEMBER_NAME(ALC_obj::alhx_alcOpenDevice,"alhx_alcOpenDevice");
	HX_VISIT_MEMBER_NAME(ALC_obj::alhx_alcCloseDevice,"alhx_alcCloseDevice");
	HX_VISIT_MEMBER_NAME(ALC_obj::alhx_alcGetError,"alhx_alcGetError");
	HX_VISIT_MEMBER_NAME(ALC_obj::alhx_alcGetString,"alhx_alcGetString");
	HX_VISIT_MEMBER_NAME(ALC_obj::alhx_alcGetIntegerv,"alhx_alcGetIntegerv");
};

#endif

Class ALC_obj::__mClass;

void ALC_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("snow.platform.native.audio.openal.ALC"), hx::TCanCast< ALC_obj> ,sStaticFields,sMemberFields,
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

void ALC_obj::__boot()
{
	FALSE= (int)0;
	TRUE= (int)1;
	FREQUENCY= (int)4103;
	REFRESH= (int)4104;
	SYNC= (int)4105;
	MONO_SOURCES= (int)4112;
	STEREO_SOURCES= (int)4113;
	NO_ERROR= (int)0;
	INVALID_DEVICE= (int)40961;
	INVALID_CONTEXT= (int)40962;
	INVALID_ENUM= (int)40963;
	INVALID_VALUE= (int)40964;
	OUT_OF_MEMORY= (int)40965;
	ATTRIBUTES_SIZE= (int)4098;
	ALL_ATTRIBUTES= (int)4099;
	DEFAULT_DEVICE_SPECIFIER= (int)4100;
	DEVICE_SPECIFIER= (int)4101;
	EXTENSIONS= (int)4102;
	ENUMERATE_ALL_EXT= (int)1;
	DEFAULT_ALL_DEVICES_SPECIFIER= (int)4114;
	ALL_DEVICES_SPECIFIER= (int)4115;
	INVALID_DEVICE_MEANING= HX_CSTRING("ALC.INVALID_DEVICE: Invalid device (or no device?)");
	INVALID_CONTEXT_MEANING= HX_CSTRING("ALC.INVALID_CONTEXT: Invalid context (or no context?)");
	INVALID_ENUM_MEANING= HX_CSTRING("ALC.INVALID_ENUM: Invalid enum value");
	INVALID_VALUE_MEANING= HX_CSTRING("ALC.INVALID_VALUE: Invalid param value");
	OUT_OF_MEMORY_MEANING= HX_CSTRING("ALC.OUT_OF_MEMORY: OpenAL has run out of memory");
	alhx_alcCreateContext= ::snow::utils::Libs_obj::load(HX_CSTRING("snow"),HX_CSTRING("alhx_alcCreateContext"),(int)2);
	alhx_alcMakeContextCurrent= ::snow::utils::Libs_obj::load(HX_CSTRING("snow"),HX_CSTRING("alhx_alcMakeContextCurrent"),(int)1);
	alhx_alcProcessContext= ::snow::utils::Libs_obj::load(HX_CSTRING("snow"),HX_CSTRING("alhx_alcProcessContext"),(int)1);
	alhx_alcSuspendContext= ::snow::utils::Libs_obj::load(HX_CSTRING("snow"),HX_CSTRING("alhx_alcSuspendContext"),(int)1);
	alhx_alcDestroyContext= ::snow::utils::Libs_obj::load(HX_CSTRING("snow"),HX_CSTRING("alhx_alcDestroyContext"),(int)1);
	alhx_alcGetCurrentContext= ::snow::utils::Libs_obj::load(HX_CSTRING("snow"),HX_CSTRING("alhx_alcGetCurrentContext"),(int)0);
	alhx_alcGetContextsDevice= ::snow::utils::Libs_obj::load(HX_CSTRING("snow"),HX_CSTRING("alhx_alcGetContextsDevice"),(int)1);
	alhx_alcOpenDevice= ::snow::utils::Libs_obj::load(HX_CSTRING("snow"),HX_CSTRING("alhx_alcOpenDevice"),(int)1);
	alhx_alcCloseDevice= ::snow::utils::Libs_obj::load(HX_CSTRING("snow"),HX_CSTRING("alhx_alcCloseDevice"),(int)1);
	alhx_alcGetError= ::snow::utils::Libs_obj::load(HX_CSTRING("snow"),HX_CSTRING("alhx_alcGetError"),(int)1);
	alhx_alcGetString= ::snow::utils::Libs_obj::load(HX_CSTRING("snow"),HX_CSTRING("alhx_alcGetString"),(int)2);
	alhx_alcGetIntegerv= ::snow::utils::Libs_obj::load(HX_CSTRING("snow"),HX_CSTRING("alhx_alcGetIntegerv"),(int)3);
}

} // end namespace snow
} // end namespace platform
} // end namespace native
} // end namespace audio
} // end namespace openal
