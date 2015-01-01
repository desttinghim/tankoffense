#ifndef INCLUDED_snow_types__Types_AssetType_Impl_
#define INCLUDED_snow_types__Types_AssetType_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(snow,types,_Types,AssetType_Impl_)
namespace snow{
namespace types{
namespace _Types{


class HXCPP_CLASS_ATTRIBUTES  AssetType_Impl__obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef AssetType_Impl__obj OBJ_;
		AssetType_Impl__obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< AssetType_Impl__obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~AssetType_Impl__obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("AssetType_Impl_"); }

		static int bytes;
		static int text;
		static int image;
		static int audio;
};

} // end namespace snow
} // end namespace types
} // end namespace _Types

#endif /* INCLUDED_snow_types__Types_AssetType_Impl_ */ 
