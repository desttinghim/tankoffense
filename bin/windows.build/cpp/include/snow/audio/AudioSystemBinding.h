#ifndef INCLUDED_snow_audio_AudioSystemBinding
#define INCLUDED_snow_audio_AudioSystemBinding

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <snow/utils/AbstractClass.h>
HX_DECLARE_CLASS1(snow,Snow)
HX_DECLARE_CLASS2(snow,audio,Audio)
HX_DECLARE_CLASS2(snow,audio,AudioSystemBinding)
HX_DECLARE_CLASS2(snow,utils,AbstractClass)
namespace snow{
namespace audio{


class HXCPP_CLASS_ATTRIBUTES  AudioSystemBinding_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef AudioSystemBinding_obj OBJ_;
		AudioSystemBinding_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< AudioSystemBinding_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~AudioSystemBinding_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		inline operator ::snow::utils::AbstractClass_obj *()
			{ return new ::snow::utils::AbstractClass_delegate_< AudioSystemBinding_obj >(this); }
		hx::Object *__ToInterface(const hx::type_info &inType);
		::String __ToString() const { return HX_CSTRING("AudioSystemBinding"); }

		::snow::audio::Audio manager;
		::snow::Snow lib;
		virtual Void init( );
		Dynamic init_dyn();

		virtual Void process( );
		Dynamic process_dyn();

		virtual Void destroy( );
		Dynamic destroy_dyn();

		virtual Void suspend( );
		Dynamic suspend_dyn();

		virtual Void resume( );
		Dynamic resume_dyn();

};

} // end namespace snow
} // end namespace audio

#endif /* INCLUDED_snow_audio_AudioSystemBinding */ 
