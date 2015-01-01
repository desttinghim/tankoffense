#ifndef INCLUDED_snow_types__Types_AudioFormatType_Impl_
#define INCLUDED_snow_types__Types_AudioFormatType_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(snow,types,_Types,AudioFormatType_Impl_)
namespace snow{
namespace types{
namespace _Types{


class HXCPP_CLASS_ATTRIBUTES  AudioFormatType_Impl__obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef AudioFormatType_Impl__obj OBJ_;
		AudioFormatType_Impl__obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< AudioFormatType_Impl__obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~AudioFormatType_Impl__obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("AudioFormatType_Impl_"); }

		static int unknown;
		static int ogg;
		static int wav;
		static int pcm;
};

} // end namespace snow
} // end namespace types
} // end namespace _Types

#endif /* INCLUDED_snow_types__Types_AudioFormatType_Impl_ */ 
