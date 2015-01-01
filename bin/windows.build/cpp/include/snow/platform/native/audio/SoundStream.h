#ifndef INCLUDED_snow_platform_native_audio_SoundStream
#define INCLUDED_snow_platform_native_audio_SoundStream

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <snow/platform/native/audio/openal/Sound.h>
HX_DECLARE_CLASS2(snow,audio,Audio)
HX_DECLARE_CLASS2(snow,audio,SoundBinding)
HX_DECLARE_CLASS4(snow,platform,native,audio,Sound)
HX_DECLARE_CLASS4(snow,platform,native,audio,SoundStream)
HX_DECLARE_CLASS5(snow,platform,native,audio,openal,Sound)
namespace snow{
namespace platform{
namespace native{
namespace audio{


class HXCPP_CLASS_ATTRIBUTES  SoundStream_obj : public ::snow::platform::native::audio::openal::Sound_obj{
	public:
		typedef ::snow::platform::native::audio::openal::Sound_obj super;
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

		int buffer_length;
		int buffer_count;
		Dynamic data_get;
		Dynamic &data_get_dyn() { return data_get;}
		Dynamic data_seek;
		Dynamic &data_seek_dyn() { return data_seek;}
		virtual bool default_data_seek( int _to);
		Dynamic default_data_seek_dyn();

		virtual Dynamic default_data_get( int _start,int _length);
		Dynamic default_data_get_dyn();

};

} // end namespace snow
} // end namespace platform
} // end namespace native
} // end namespace audio

#endif /* INCLUDED_snow_platform_native_audio_SoundStream */ 
