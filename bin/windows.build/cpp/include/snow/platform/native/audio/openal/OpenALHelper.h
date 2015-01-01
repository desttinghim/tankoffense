#ifndef INCLUDED_snow_platform_native_audio_openal_OpenALHelper
#define INCLUDED_snow_platform_native_audio_openal_OpenALHelper

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS5(snow,platform,native,audio,openal,OpenALHelper)
namespace snow{
namespace platform{
namespace native{
namespace audio{
namespace openal{


class HXCPP_CLASS_ATTRIBUTES  OpenALHelper_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef OpenALHelper_obj OBJ_;
		OpenALHelper_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< OpenALHelper_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~OpenALHelper_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("OpenALHelper"); }

		static Void default_source_setup( int source);
		static Dynamic default_source_setup_dyn();

		static int determine_format( Dynamic _info);
		static Dynamic determine_format_dyn();

};

} // end namespace snow
} // end namespace platform
} // end namespace native
} // end namespace audio
} // end namespace openal

#endif /* INCLUDED_snow_platform_native_audio_openal_OpenALHelper */ 
