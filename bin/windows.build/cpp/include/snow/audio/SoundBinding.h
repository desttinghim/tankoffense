#ifndef INCLUDED_snow_audio_SoundBinding
#define INCLUDED_snow_audio_SoundBinding

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(snow,audio,Audio)
HX_DECLARE_CLASS2(snow,audio,SoundBinding)
HX_DECLARE_CLASS4(snow,platform,native,audio,Sound)
HX_DECLARE_CLASS5(snow,platform,native,audio,openal,Sound)
namespace snow{
namespace audio{


class HXCPP_CLASS_ATTRIBUTES  SoundBinding_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef SoundBinding_obj OBJ_;
		SoundBinding_obj();
		Void __construct(::snow::audio::Audio _manager,::String _name);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< SoundBinding_obj > __new(::snow::audio::Audio _manager,::String _name);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~SoundBinding_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("SoundBinding"); }

		::snow::audio::Audio manager;
		::String name;
		bool playing;
		bool paused;
		bool loaded;
		bool is_stream;
		Dynamic info;
		Float pitch;
		Float volume;
		Float pan;
		bool looping;
		Float position;
		Float duration;
		virtual Void emit( ::String _event);
		Dynamic emit_dyn();

		virtual Void on( ::String _event,Dynamic _handler);
		Dynamic on_dyn();

		virtual Void off( ::String _event,Dynamic _handler);
		Dynamic off_dyn();

		Dynamic onload_list;
		Dynamic onend_list;
		virtual Void play( );
		Dynamic play_dyn();

		virtual Void loop( );
		Dynamic loop_dyn();

		virtual Void stop( );
		Dynamic stop_dyn();

		virtual Void pause( );
		Dynamic pause_dyn();

		virtual Void destroy( );
		Dynamic destroy_dyn();

		virtual Void internal_update( );
		Dynamic internal_update_dyn();

		virtual Void internal_play( );
		Dynamic internal_play_dyn();

		virtual Void internal_loop( );
		Dynamic internal_loop_dyn();

		virtual Void internal_stop( );
		Dynamic internal_stop_dyn();

		virtual Void internal_pause( );
		Dynamic internal_pause_dyn();

		virtual Void toggle( );
		Dynamic toggle_dyn();

		virtual Dynamic get_info( );
		Dynamic get_info_dyn();

		virtual Dynamic set_info( Dynamic _info);
		Dynamic set_info_dyn();

		virtual Float get_pan( );
		Dynamic get_pan_dyn();

		virtual Float get_pitch( );
		Dynamic get_pitch_dyn();

		virtual Float get_volume( );
		Dynamic get_volume_dyn();

		virtual bool get_looping( );
		Dynamic get_looping_dyn();

		virtual Float get_position( );
		Dynamic get_position_dyn();

		virtual Float get_duration( );
		Dynamic get_duration_dyn();

		virtual Float set_pan( Float _pan);
		Dynamic set_pan_dyn();

		virtual Float set_pitch( Float _pitch);
		Dynamic set_pitch_dyn();

		virtual Float set_volume( Float _volume);
		Dynamic set_volume_dyn();

		virtual Float set_position( Float _position);
		Dynamic set_position_dyn();

		virtual bool set_looping( bool _looping);
		Dynamic set_looping_dyn();

		virtual Void do_onload( );
		Dynamic do_onload_dyn();

		virtual Void do_onend( );
		Dynamic do_onend_dyn();

		virtual Dynamic add_onload( Dynamic _onload);
		Dynamic add_onload_dyn();

};

} // end namespace snow
} // end namespace audio

#endif /* INCLUDED_snow_audio_SoundBinding */ 
