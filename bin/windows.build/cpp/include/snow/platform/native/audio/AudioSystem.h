#ifndef INCLUDED_snow_platform_native_audio_AudioSystem
#define INCLUDED_snow_platform_native_audio_AudioSystem

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <snow/audio/AudioSystemBinding.h>
HX_DECLARE_CLASS1(snow,Snow)
HX_DECLARE_CLASS2(snow,audio,Audio)
HX_DECLARE_CLASS2(snow,audio,AudioSystemBinding)
HX_DECLARE_CLASS4(snow,platform,native,audio,AudioSystem)
HX_DECLARE_CLASS2(snow,utils,AbstractClass)
namespace snow{
namespace platform{
namespace native{
namespace audio{


class HXCPP_CLASS_ATTRIBUTES  AudioSystem_obj : public ::snow::audio::AudioSystemBinding_obj{
	public:
		typedef ::snow::audio::AudioSystemBinding_obj super;
		typedef AudioSystem_obj OBJ_;
		AudioSystem_obj();
		Void __construct(::snow::audio::Audio _manager,::snow::Snow _lib);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< AudioSystem_obj > __new(::snow::audio::Audio _manager,::snow::Snow _lib);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~AudioSystem_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("AudioSystem"); }

		virtual Void init( );

		virtual Void process( );

		virtual Void destroy( );

		virtual Void suspend( );

		virtual Void resume( );

};

} // end namespace snow
} // end namespace platform
} // end namespace native
} // end namespace audio

#endif /* INCLUDED_snow_platform_native_audio_AudioSystem */ 
