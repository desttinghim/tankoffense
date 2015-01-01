#ifndef INCLUDED_snow_audio__Audio_AudioHandleMap
#define INCLUDED_snow_audio__Audio_AudioHandleMap

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <haxe/ds/BalancedTree.h>
HX_DECLARE_CLASS2(haxe,ds,BalancedTree)
HX_DECLARE_CLASS3(snow,audio,_Audio,AudioHandleMap)
namespace snow{
namespace audio{
namespace _Audio{


class HXCPP_CLASS_ATTRIBUTES  AudioHandleMap_obj : public ::haxe::ds::BalancedTree_obj{
	public:
		typedef ::haxe::ds::BalancedTree_obj super;
		typedef AudioHandleMap_obj OBJ_;
		AudioHandleMap_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< AudioHandleMap_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~AudioHandleMap_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("AudioHandleMap"); }

		virtual int compare( Dynamic _tmp_k1,Dynamic _tmp_k2);

};

} // end namespace snow
} // end namespace audio
} // end namespace _Audio

#endif /* INCLUDED_snow_audio__Audio_AudioHandleMap */ 
