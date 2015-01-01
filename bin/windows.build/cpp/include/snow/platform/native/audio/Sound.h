#ifndef INCLUDED_snow_platform_native_audio_Sound
#define INCLUDED_snow_platform_native_audio_Sound

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <snow/audio/SoundBinding.h>
HX_DECLARE_CLASS2(snow,audio,Audio)
HX_DECLARE_CLASS2(snow,audio,SoundBinding)
HX_DECLARE_CLASS4(snow,platform,native,audio,Sound)
namespace snow{
namespace platform{
namespace native{
namespace audio{


class HXCPP_CLASS_ATTRIBUTES  Sound_obj : public ::snow::audio::SoundBinding_obj{
	public:
		typedef ::snow::audio::SoundBinding_obj super;
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

		int length_bytes;
		int position_bytes;
		virtual Float bytes_to_seconds( int _bytes);
		Dynamic bytes_to_seconds_dyn();

		virtual int seconds_to_bytes( Float _seconds);
		Dynamic seconds_to_bytes_dyn();

		virtual int get_position_bytes( );
		Dynamic get_position_bytes_dyn();

		virtual int set_position_bytes( int _position_bytes);
		Dynamic set_position_bytes_dyn();

		virtual int get_length_bytes( );
		Dynamic get_length_bytes_dyn();

		virtual Float get_duration( );

};

} // end namespace snow
} // end namespace platform
} // end namespace native
} // end namespace audio

#endif /* INCLUDED_snow_platform_native_audio_Sound */ 
