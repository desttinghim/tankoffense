#ifndef INCLUDED_snow_platform_native_audio_openal_AL
#define INCLUDED_snow_platform_native_audio_openal_AL

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS5(snow,platform,native,audio,openal,AL)
HX_DECLARE_CLASS4(snow,platform,native,utils,ArrayBufferView)
HX_DECLARE_CLASS4(snow,platform,native,utils,ByteArray)
HX_DECLARE_CLASS4(snow,platform,native,utils,Float32Array)
HX_DECLARE_CLASS2(snow,utils,IDataInput)
HX_DECLARE_CLASS2(snow,utils,IMemoryRange)
namespace snow{
namespace platform{
namespace native{
namespace audio{
namespace openal{


class HXCPP_CLASS_ATTRIBUTES  AL_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef AL_obj OBJ_;
		AL_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< AL_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~AL_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("AL"); }

		static int NONE;
		static int FALSE;
		static int TRUE;
		static int SOURCE_RELATIVE;
		static int CONE_INNER_ANGLE;
		static int CONE_OUTER_ANGLE;
		static int PITCH;
		static int POSITION;
		static int DIRECTION;
		static int VELOCITY;
		static int LOOPING;
		static int BUFFER;
		static int GAIN;
		static int MIN_GAIN;
		static int MAX_GAIN;
		static int ORIENTATION;
		static int SOURCE_STATE;
		static int INITIAL;
		static int PLAYING;
		static int PAUSED;
		static int STOPPED;
		static int BUFFERS_QUEUED;
		static int BUFFERS_PROCESSED;
		static int REFERENCE_DISTANCE;
		static int ROLLOFF_FACTOR;
		static int CONE_OUTER_GAIN;
		static int MAX_DISTANCE;
		static int SEC_OFFSET;
		static int SAMPLE_OFFSET;
		static int BYTE_OFFSET;
		static int SOURCE_TYPE;
		static int STATIC;
		static int STREAMING;
		static int UNDETERMINED;
		static int FORMAT_MONO8;
		static int FORMAT_MONO16;
		static int FORMAT_STEREO8;
		static int FORMAT_STEREO16;
		static int FREQUENCY;
		static int BITS;
		static int CHANNELS;
		static int SIZE;
		static int NO_ERROR;
		static int INVALID_NAME;
		static int INVALID_ENUM;
		static int INVALID_VALUE;
		static int INVALID_OPERATION;
		static int OUT_OF_MEMORY;
		static int VENDOR;
		static int VERSION;
		static int RENDERER;
		static int EXTENSIONS;
		static int DOPPLER_FACTOR;
		static int SPEED_OF_SOUND;
		static int DOPPLER_VELOCITY;
		static int DISTANCE_MODEL;
		static int INVERSE_DISTANCE;
		static int INVERSE_DISTANCE_CLAMPED;
		static int LINEAR_DISTANCE;
		static int LINEAR_DISTANCE_CLAMPED;
		static int EXPONENT_DISTANCE;
		static int EXPONENT_DISTANCE_CLAMPED;
		static Void dopplerFactor( Float value);
		static Dynamic dopplerFactor_dyn();

		static Void dopplerVelocity( Float value);
		static Dynamic dopplerVelocity_dyn();

		static Void speedOfSound( Float value);
		static Dynamic speedOfSound_dyn();

		static Void distanceModel( int distanceModel);
		static Dynamic distanceModel_dyn();

		static Void enable( int capability);
		static Dynamic enable_dyn();

		static Void disable( int capability);
		static Dynamic disable_dyn();

		static bool isEnabled( int capability);
		static Dynamic isEnabled_dyn();

		static ::String getString( int param);
		static Dynamic getString_dyn();

		static Array< bool > getBooleanv( int param,Dynamic count);
		static Dynamic getBooleanv_dyn();

		static Array< int > getIntegerv( int param,Dynamic count);
		static Dynamic getIntegerv_dyn();

		static Array< Float > getFloatv( int param,Dynamic count);
		static Dynamic getFloatv_dyn();

		static Array< Float > getDoublev( int param,Dynamic count);
		static Dynamic getDoublev_dyn();

		static bool getBoolean( int param);
		static Dynamic getBoolean_dyn();

		static int getInteger( int param);
		static Dynamic getInteger_dyn();

		static Float getFloat( int param);
		static Dynamic getFloat_dyn();

		static Float getDouble( int param);
		static Dynamic getDouble_dyn();

		static int getError( );
		static Dynamic getError_dyn();

		static bool isExtensionPresent( ::String extname);
		static Dynamic isExtensionPresent_dyn();

		static Dynamic getProcAddress( ::String fname);
		static Dynamic getProcAddress_dyn();

		static int getEnumValue( ::String ename);
		static Dynamic getEnumValue_dyn();

		static Void listenerf( int param,Float value);
		static Dynamic listenerf_dyn();

		static Void listener3f( int param,Float value1,Float value2,Float value3);
		static Dynamic listener3f_dyn();

		static Void listenerfv( int param,Array< Float > values);
		static Dynamic listenerfv_dyn();

		static Void listeneri( int param,int value);
		static Dynamic listeneri_dyn();

		static Void listener3i( int param,int value1,int value2,int value3);
		static Dynamic listener3i_dyn();

		static Void listeneriv( int param,Array< int > values);
		static Dynamic listeneriv_dyn();

		static Float getListenerf( int param);
		static Dynamic getListenerf_dyn();

		static Array< Float > getListener3f( int param);
		static Dynamic getListener3f_dyn();

		static Array< Float > getListenerfv( int param,Dynamic count);
		static Dynamic getListenerfv_dyn();

		static int getListeneri( int param);
		static Dynamic getListeneri_dyn();

		static Array< int > getListener3i( int param);
		static Dynamic getListener3i_dyn();

		static Array< int > getListeneriv( int param,Dynamic count);
		static Dynamic getListeneriv_dyn();

		static Array< int > genSources( int n);
		static Dynamic genSources_dyn();

		static Void deleteSources( Array< int > sources);
		static Dynamic deleteSources_dyn();

		static bool isSource( int source);
		static Dynamic isSource_dyn();

		static Void sourcef( int source,int param,Float value);
		static Dynamic sourcef_dyn();

		static Void source3f( int source,int param,Float value1,Float value2,Float value3);
		static Dynamic source3f_dyn();

		static Void sourcefv( int source,int param,Array< Float > values);
		static Dynamic sourcefv_dyn();

		static Void sourcei( int source,int param,int value);
		static Dynamic sourcei_dyn();

		static Void source3i( int source,int param,int value1,int value2,int value3);
		static Dynamic source3i_dyn();

		static Void sourceiv( int source,int param,Array< int > values);
		static Dynamic sourceiv_dyn();

		static Float getSourcef( int source,int param);
		static Dynamic getSourcef_dyn();

		static Array< Float > getSource3f( int source,int param);
		static Dynamic getSource3f_dyn();

		static Array< Float > getSourcefv( int source,int param);
		static Dynamic getSourcefv_dyn();

		static int getSourcei( int source,int param);
		static Dynamic getSourcei_dyn();

		static Array< int > getSource3i( int source,int param);
		static Dynamic getSource3i_dyn();

		static Array< int > getSourceiv( int source,int param,Dynamic count);
		static Dynamic getSourceiv_dyn();

		static Void sourcePlayv( Array< int > sources);
		static Dynamic sourcePlayv_dyn();

		static Void sourceStopv( Array< int > sources);
		static Dynamic sourceStopv_dyn();

		static Void sourceRewindv( Array< int > sources);
		static Dynamic sourceRewindv_dyn();

		static Void sourcePausev( Array< int > sources);
		static Dynamic sourcePausev_dyn();

		static Void sourcePlay( int source);
		static Dynamic sourcePlay_dyn();

		static Void sourceStop( int source);
		static Dynamic sourceStop_dyn();

		static Void sourceRewind( int source);
		static Dynamic sourceRewind_dyn();

		static Void sourcePause( int source);
		static Dynamic sourcePause_dyn();

		static Void sourceQueueBuffers( int source,int nb,Array< int > buffers);
		static Dynamic sourceQueueBuffers_dyn();

		static Array< int > sourceUnqueueBuffers( int source,int nb);
		static Dynamic sourceUnqueueBuffers_dyn();

		static Array< int > genBuffers( int n);
		static Dynamic genBuffers_dyn();

		static Void deleteBuffers( Array< int > buffers);
		static Dynamic deleteBuffers_dyn();

		static bool isBuffer( int buffer);
		static Dynamic isBuffer_dyn();

		static Void bufferData( int buffer,int format,::snow::platform::native::utils::Float32Array data,int size,int freq);
		static Dynamic bufferData_dyn();

		static Void bufferf( int buffer,int param,Float value);
		static Dynamic bufferf_dyn();

		static Void buffer3f( int buffer,int param,Float value1,Float value2,Float value3);
		static Dynamic buffer3f_dyn();

		static Void bufferfv( int buffer,int param,Array< Float > values);
		static Dynamic bufferfv_dyn();

		static Void bufferi( int buffer,int param,int value);
		static Dynamic bufferi_dyn();

		static Void buffer3i( int buffer,int param,int value1,int value2,int value3);
		static Dynamic buffer3i_dyn();

		static Void bufferiv( int buffer,int param,Array< int > values);
		static Dynamic bufferiv_dyn();

		static Float getBufferf( int buffer,int param);
		static Dynamic getBufferf_dyn();

		static Array< Float > getBuffer3f( int buffer,int param);
		static Dynamic getBuffer3f_dyn();

		static Array< Float > getBufferfv( int buffer,int param,Dynamic count);
		static Dynamic getBufferfv_dyn();

		static int getBufferi( int buffer,int param);
		static Dynamic getBufferi_dyn();

		static Array< int > getBuffer3i( int buffer,int param);
		static Dynamic getBuffer3i_dyn();

		static Array< int > getBufferiv( int buffer,int param,Dynamic count);
		static Dynamic getBufferiv_dyn();

		static int genSource( );
		static Dynamic genSource_dyn();

		static Void deleteSource( int source);
		static Dynamic deleteSource_dyn();

		static int genBuffer( );
		static Dynamic genBuffer_dyn();

		static Void deleteBuffer( int buffer);
		static Dynamic deleteBuffer_dyn();

		static Void sourceQueueBuffer( int source,int buffer);
		static Dynamic sourceQueueBuffer_dyn();

		static int sourceUnqueueBuffer( int source);
		static Dynamic sourceUnqueueBuffer_dyn();

		static ::String INVALID_NAME_MEANING;
		static ::String INVALID_ENUM_MEANING;
		static ::String INVALID_VALUE_MEANING;
		static ::String INVALID_OPERATION_MEANING;
		static ::String OUT_OF_MEMORY_MEANING;
		static ::String getErrorMeaning( int error);
		static Dynamic getErrorMeaning_dyn();

		static Dynamic alhx_DopplerFactor;
		static Dynamic &alhx_DopplerFactor_dyn() { return alhx_DopplerFactor;}
		static Dynamic alhx_DopplerVelocity;
		static Dynamic &alhx_DopplerVelocity_dyn() { return alhx_DopplerVelocity;}
		static Dynamic alhx_SpeedOfSound;
		static Dynamic &alhx_SpeedOfSound_dyn() { return alhx_SpeedOfSound;}
		static Dynamic alhx_DistanceModel;
		static Dynamic &alhx_DistanceModel_dyn() { return alhx_DistanceModel;}
		static Dynamic alhx_Enable;
		static Dynamic &alhx_Enable_dyn() { return alhx_Enable;}
		static Dynamic alhx_Disable;
		static Dynamic &alhx_Disable_dyn() { return alhx_Disable;}
		static Dynamic alhx_IsEnabled;
		static Dynamic &alhx_IsEnabled_dyn() { return alhx_IsEnabled;}
		static Dynamic alhx_GetString;
		static Dynamic &alhx_GetString_dyn() { return alhx_GetString;}
		static Dynamic alhx_GetBooleanv;
		static Dynamic &alhx_GetBooleanv_dyn() { return alhx_GetBooleanv;}
		static Dynamic alhx_GetIntegerv;
		static Dynamic &alhx_GetIntegerv_dyn() { return alhx_GetIntegerv;}
		static Dynamic alhx_GetFloatv;
		static Dynamic &alhx_GetFloatv_dyn() { return alhx_GetFloatv;}
		static Dynamic alhx_GetDoublev;
		static Dynamic &alhx_GetDoublev_dyn() { return alhx_GetDoublev;}
		static Dynamic alhx_GetBoolean;
		static Dynamic &alhx_GetBoolean_dyn() { return alhx_GetBoolean;}
		static Dynamic alhx_GetInteger;
		static Dynamic &alhx_GetInteger_dyn() { return alhx_GetInteger;}
		static Dynamic alhx_GetFloat;
		static Dynamic &alhx_GetFloat_dyn() { return alhx_GetFloat;}
		static Dynamic alhx_GetDouble;
		static Dynamic &alhx_GetDouble_dyn() { return alhx_GetDouble;}
		static Dynamic alhx_GetError;
		static Dynamic &alhx_GetError_dyn() { return alhx_GetError;}
		static Dynamic alhx_IsExtensionPresent;
		static Dynamic &alhx_IsExtensionPresent_dyn() { return alhx_IsExtensionPresent;}
		static Dynamic alhx_GetProcAddress;
		static Dynamic alhx_GetEnumValue;
		static Dynamic &alhx_GetEnumValue_dyn() { return alhx_GetEnumValue;}
		static Dynamic alhx_Listenerf;
		static Dynamic &alhx_Listenerf_dyn() { return alhx_Listenerf;}
		static Dynamic alhx_Listener3f;
		static Dynamic &alhx_Listener3f_dyn() { return alhx_Listener3f;}
		static Dynamic alhx_Listenerfv;
		static Dynamic &alhx_Listenerfv_dyn() { return alhx_Listenerfv;}
		static Dynamic alhx_Listeneri;
		static Dynamic &alhx_Listeneri_dyn() { return alhx_Listeneri;}
		static Dynamic alhx_Listener3i;
		static Dynamic &alhx_Listener3i_dyn() { return alhx_Listener3i;}
		static Dynamic alhx_Listeneriv;
		static Dynamic &alhx_Listeneriv_dyn() { return alhx_Listeneriv;}
		static Dynamic alhx_GetListenerf;
		static Dynamic &alhx_GetListenerf_dyn() { return alhx_GetListenerf;}
		static Dynamic alhx_GetListener3f;
		static Dynamic &alhx_GetListener3f_dyn() { return alhx_GetListener3f;}
		static Dynamic alhx_GetListenerfv;
		static Dynamic &alhx_GetListenerfv_dyn() { return alhx_GetListenerfv;}
		static Dynamic alhx_GetListeneri;
		static Dynamic &alhx_GetListeneri_dyn() { return alhx_GetListeneri;}
		static Dynamic alhx_GetListener3i;
		static Dynamic &alhx_GetListener3i_dyn() { return alhx_GetListener3i;}
		static Dynamic alhx_GetListeneriv;
		static Dynamic &alhx_GetListeneriv_dyn() { return alhx_GetListeneriv;}
		static Dynamic alhx_GenSources;
		static Dynamic &alhx_GenSources_dyn() { return alhx_GenSources;}
		static Dynamic alhx_DeleteSources;
		static Dynamic &alhx_DeleteSources_dyn() { return alhx_DeleteSources;}
		static Dynamic alhx_IsSource;
		static Dynamic &alhx_IsSource_dyn() { return alhx_IsSource;}
		static Dynamic alhx_Sourcef;
		static Dynamic &alhx_Sourcef_dyn() { return alhx_Sourcef;}
		static Dynamic alhx_Source3f;
		static Dynamic &alhx_Source3f_dyn() { return alhx_Source3f;}
		static Dynamic alhx_Sourcefv;
		static Dynamic &alhx_Sourcefv_dyn() { return alhx_Sourcefv;}
		static Dynamic alhx_Sourcei;
		static Dynamic &alhx_Sourcei_dyn() { return alhx_Sourcei;}
		static Dynamic alhx_Source3i;
		static Dynamic &alhx_Source3i_dyn() { return alhx_Source3i;}
		static Dynamic alhx_Sourceiv;
		static Dynamic &alhx_Sourceiv_dyn() { return alhx_Sourceiv;}
		static Dynamic alhx_GetSourcef;
		static Dynamic &alhx_GetSourcef_dyn() { return alhx_GetSourcef;}
		static Dynamic alhx_GetSource3f;
		static Dynamic &alhx_GetSource3f_dyn() { return alhx_GetSource3f;}
		static Dynamic alhx_GetSourcefv;
		static Dynamic &alhx_GetSourcefv_dyn() { return alhx_GetSourcefv;}
		static Dynamic alhx_GetSourcei;
		static Dynamic &alhx_GetSourcei_dyn() { return alhx_GetSourcei;}
		static Dynamic alhx_GetSource3i;
		static Dynamic &alhx_GetSource3i_dyn() { return alhx_GetSource3i;}
		static Dynamic alhx_GetSourceiv;
		static Dynamic &alhx_GetSourceiv_dyn() { return alhx_GetSourceiv;}
		static Dynamic alhx_SourcePlayv;
		static Dynamic &alhx_SourcePlayv_dyn() { return alhx_SourcePlayv;}
		static Dynamic alhx_SourceStopv;
		static Dynamic &alhx_SourceStopv_dyn() { return alhx_SourceStopv;}
		static Dynamic alhx_SourceRewindv;
		static Dynamic &alhx_SourceRewindv_dyn() { return alhx_SourceRewindv;}
		static Dynamic alhx_SourcePausev;
		static Dynamic &alhx_SourcePausev_dyn() { return alhx_SourcePausev;}
		static Dynamic alhx_SourceQueueBuffers;
		static Dynamic &alhx_SourceQueueBuffers_dyn() { return alhx_SourceQueueBuffers;}
		static Dynamic alhx_SourceUnqueueBuffers;
		static Dynamic &alhx_SourceUnqueueBuffers_dyn() { return alhx_SourceUnqueueBuffers;}
		static Dynamic alhx_SourcePlay;
		static Dynamic &alhx_SourcePlay_dyn() { return alhx_SourcePlay;}
		static Dynamic alhx_SourceStop;
		static Dynamic &alhx_SourceStop_dyn() { return alhx_SourceStop;}
		static Dynamic alhx_SourceRewind;
		static Dynamic &alhx_SourceRewind_dyn() { return alhx_SourceRewind;}
		static Dynamic alhx_SourcePause;
		static Dynamic &alhx_SourcePause_dyn() { return alhx_SourcePause;}
		static Dynamic alhx_GenBuffers;
		static Dynamic &alhx_GenBuffers_dyn() { return alhx_GenBuffers;}
		static Dynamic alhx_DeleteBuffers;
		static Dynamic &alhx_DeleteBuffers_dyn() { return alhx_DeleteBuffers;}
		static Dynamic alhx_IsBuffer;
		static Dynamic &alhx_IsBuffer_dyn() { return alhx_IsBuffer;}
		static Dynamic alhx_BufferData;
		static Dynamic &alhx_BufferData_dyn() { return alhx_BufferData;}
		static Dynamic alhx_Bufferf;
		static Dynamic &alhx_Bufferf_dyn() { return alhx_Bufferf;}
		static Dynamic alhx_Buffer3f;
		static Dynamic &alhx_Buffer3f_dyn() { return alhx_Buffer3f;}
		static Dynamic alhx_Bufferfv;
		static Dynamic &alhx_Bufferfv_dyn() { return alhx_Bufferfv;}
		static Dynamic alhx_Bufferi;
		static Dynamic &alhx_Bufferi_dyn() { return alhx_Bufferi;}
		static Dynamic alhx_Buffer3i;
		static Dynamic &alhx_Buffer3i_dyn() { return alhx_Buffer3i;}
		static Dynamic alhx_Bufferiv;
		static Dynamic &alhx_Bufferiv_dyn() { return alhx_Bufferiv;}
		static Dynamic alhx_GetBufferf;
		static Dynamic &alhx_GetBufferf_dyn() { return alhx_GetBufferf;}
		static Dynamic alhx_GetBuffer3f;
		static Dynamic &alhx_GetBuffer3f_dyn() { return alhx_GetBuffer3f;}
		static Dynamic alhx_GetBufferfv;
		static Dynamic &alhx_GetBufferfv_dyn() { return alhx_GetBufferfv;}
		static Dynamic alhx_GetBufferi;
		static Dynamic &alhx_GetBufferi_dyn() { return alhx_GetBufferi;}
		static Dynamic alhx_GetBuffer3i;
		static Dynamic &alhx_GetBuffer3i_dyn() { return alhx_GetBuffer3i;}
		static Dynamic alhx_GetBufferiv;
		static Dynamic &alhx_GetBufferiv_dyn() { return alhx_GetBufferiv;}
		static Dynamic alhx_GenSource;
		static Dynamic &alhx_GenSource_dyn() { return alhx_GenSource;}
		static Dynamic alhx_DeleteSource;
		static Dynamic &alhx_DeleteSource_dyn() { return alhx_DeleteSource;}
		static Dynamic alhx_GenBuffer;
		static Dynamic &alhx_GenBuffer_dyn() { return alhx_GenBuffer;}
		static Dynamic alhx_DeleteBuffer;
		static Dynamic &alhx_DeleteBuffer_dyn() { return alhx_DeleteBuffer;}
};

} // end namespace snow
} // end namespace platform
} // end namespace native
} // end namespace audio
} // end namespace openal

#endif /* INCLUDED_snow_platform_native_audio_openal_AL */ 
