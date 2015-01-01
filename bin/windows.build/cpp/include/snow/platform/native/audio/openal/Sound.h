#ifndef INCLUDED_snow_platform_native_audio_openal_Sound
#define INCLUDED_snow_platform_native_audio_openal_Sound

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <snow/platform/native/audio/Sound.h>
HX_DECLARE_CLASS2(snow,audio,Audio)
HX_DECLARE_CLASS2(snow,audio,SoundBinding)
HX_DECLARE_CLASS4(snow,platform,native,audio,Sound)
HX_DECLARE_CLASS5(snow,platform,native,audio,openal,Sound)
namespace snow{
namespace platform{
namespace native{
namespace audio{
namespace openal{


class HXCPP_CLASS_ATTRIBUTES  Sound_obj : public ::snow::platform::native::audio::Sound_obj{
	public:
		typedef ::snow::platform::native::audio::Sound_obj super;
		typedef Sound_obj OBJ_;
		Sound_obj();
		Void __construct(::snow::audio::Audio _manager,::String _name);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Sound_obj > __new(::snow::audio::Audio _manager,::String _name);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Sound_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("Sound"); }

		int source;
		int buffer;
		int format;
		virtual Void play( );

		virtual Void loop( );

		virtual Void pause( );

		virtual Void stop( );

		virtual Void destroy( );

		virtual Void internal_update( );

		virtual Dynamic set_info( Dynamic _info);

		virtual int get_position_bytes( );

		virtual Float get_position( );

		virtual Float set_pan( Float _pan);

		virtual Float set_pitch( Float _pitch);

		virtual Float set_volume( Float _volume);

		virtual bool set_looping( bool _looping);

		virtual int set_position_bytes( int _position_bytes);

		virtual Float set_position( Float _position);

		static Float half_pi;
};

} // end namespace snow
} // end namespace platform
} // end namespace native
} // end namespace audio
} // end namespace openal

#endif /* INCLUDED_snow_platform_native_audio_openal_Sound */ 
