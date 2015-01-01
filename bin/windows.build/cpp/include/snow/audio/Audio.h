#ifndef INCLUDED_snow_audio_Audio
#define INCLUDED_snow_audio_Audio

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(IMap)
HX_DECLARE_CLASS2(haxe,ds,BalancedTree)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS1(snow,Snow)
HX_DECLARE_CLASS2(snow,audio,Audio)
HX_DECLARE_CLASS2(snow,audio,AudioSystemBinding)
HX_DECLARE_CLASS2(snow,audio,SoundBinding)
HX_DECLARE_CLASS3(snow,audio,_Audio,AudioHandleMap)
HX_DECLARE_CLASS4(snow,platform,native,audio,AudioSystem)
HX_DECLARE_CLASS4(snow,platform,native,audio,Sound)
HX_DECLARE_CLASS5(snow,platform,native,audio,openal,AudioSystem)
HX_DECLARE_CLASS5(snow,platform,native,audio,openal,Sound)
HX_DECLARE_CLASS2(snow,utils,AbstractClass)
namespace snow{
namespace audio{


class HXCPP_CLASS_ATTRIBUTES  Audio_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Audio_obj OBJ_;
		Audio_obj();
		Void __construct(::snow::Snow _lib);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Audio_obj > __new(::snow::Snow _lib);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Audio_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Audio"); }

		::snow::platform::native::audio::openal::AudioSystem platform;
		bool active;
		::snow::Snow lib;
		::snow::audio::_Audio::AudioHandleMap handles;
		::haxe::ds::StringMap sound_list;
		::haxe::ds::StringMap stream_list;
		virtual ::snow::platform::native::audio::openal::Sound create( ::String _id,::String _name,Dynamic streaming);
		Dynamic create_dyn();

		virtual Void uncreate( ::String _name);
		Dynamic uncreate_dyn();

		virtual Void on( ::String _name,::String _event,Dynamic _handler);
		Dynamic on_dyn();

		virtual Void off( ::String _name,::String _event,Dynamic _handler);
		Dynamic off_dyn();

		virtual ::snow::platform::native::audio::openal::Sound get( ::String _name);
		Dynamic get_dyn();

		virtual Float volume( ::String _name,Dynamic _volume);
		Dynamic volume_dyn();

		virtual Float pan( ::String _name,Dynamic _pan);
		Dynamic pan_dyn();

		virtual Float pitch( ::String _name,Dynamic _pitch);
		Dynamic pitch_dyn();

		virtual Float position( ::String _name,Dynamic _position);
		Dynamic position_dyn();

		virtual Float duration( ::String _name);
		Dynamic duration_dyn();

		virtual Void play( ::String _name);
		Dynamic play_dyn();

		virtual Void loop( ::String _name);
		Dynamic loop_dyn();

		virtual Void pause( ::String _name);
		Dynamic pause_dyn();

		virtual Void stop( ::String _name);
		Dynamic stop_dyn();

		virtual Void toggle( ::String _name);
		Dynamic toggle_dyn();

		virtual Void kill( ::snow::platform::native::audio::openal::Sound _sound);
		Dynamic kill_dyn();

		virtual Void suspend( );
		Dynamic suspend_dyn();

		virtual Void resume( );
		Dynamic resume_dyn();

		virtual Void on_event( Dynamic _event);
		Dynamic on_event_dyn();

		virtual Void destroy( );
		Dynamic destroy_dyn();

		virtual Void update( );
		Dynamic update_dyn();

};

} // end namespace snow
} // end namespace audio

#endif /* INCLUDED_snow_audio_Audio */ 
