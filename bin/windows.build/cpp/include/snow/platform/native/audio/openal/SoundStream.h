#ifndef INCLUDED_snow_platform_native_audio_openal_SoundStream
#define INCLUDED_snow_platform_native_audio_openal_SoundStream

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <snow/platform/native/audio/SoundStream.h>
HX_DECLARE_CLASS2(snow,audio,Audio)
HX_DECLARE_CLASS2(snow,audio,SoundBinding)
HX_DECLARE_CLASS4(snow,platform,native,audio,Sound)
HX_DECLARE_CLASS4(snow,platform,native,audio,SoundStream)
HX_DECLARE_CLASS5(snow,platform,native,audio,openal,Sound)
HX_DECLARE_CLASS5(snow,platform,native,audio,openal,SoundStream)
namespace snow{
namespace platform{
namespace native{
namespace audio{
namespace openal{


class HXCPP_CLASS_ATTRIBUTES  SoundStream_obj : public ::snow::platform::native::audio::SoundStream_obj{
	public:
		typedef ::snow::platform::native::audio::SoundStream_obj super;
		typedef SoundStream_obj OBJ_;
		SoundStream_obj();
		Void __construct(::snow::audio::Audio _manager,::String _name);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< SoundStream_obj > __new(::snow::audio::Audio _manager,::String _name);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~SoundStream_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("SoundStream"); }

		Array< int > buffers;
		int buffers_left;
		virtual Dynamic set_info( Dynamic _info);

		virtual Dynamic fill_buffer( int _buffer);
		Dynamic fill_buffer_dyn();

		virtual Void init_queue( Dynamic _buffer_start);
		Dynamic init_queue_dyn();

		virtual Void flush_queue( );
		Dynamic flush_queue_dyn();

		virtual bool update_stream( );
		Dynamic update_stream_dyn();

		virtual Void internal_update( );

		virtual Void internal_pause( );

		virtual Void internal_play( );

		virtual Void play( );

		virtual Void loop( );

		virtual Void pause( );

		virtual Void stop( );

		virtual Void destroy( );

		Float current_time;
		virtual int get_position_bytes( );

		virtual Float get_position( );

		virtual Float set_pan( Float _pan);

		virtual Float set_pitch( Float _pitch);

		virtual Float set_volume( Float _volume);

		virtual int set_position_bytes( int _position_bytes);

		virtual bool set_looping( bool _looping);

		virtual Float set_position( Float _position);

		static Float half_pi;
};

} // end namespace snow
} // end namespace platform
} // end namespace native
} // end namespace audio
} // end namespace openal

#endif /* INCLUDED_snow_platform_native_audio_openal_SoundStream */ 
