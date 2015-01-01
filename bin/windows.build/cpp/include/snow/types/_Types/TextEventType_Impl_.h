#ifndef INCLUDED_snow_types__Types_TextEventType_Impl_
#define INCLUDED_snow_types__Types_TextEventType_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(snow,types,_Types,TextEventType_Impl_)
namespace snow{
namespace types{
namespace _Types{


class HXCPP_CLASS_ATTRIBUTES  TextEventType_Impl__obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef TextEventType_Impl__obj OBJ_;
		TextEventType_Impl__obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< TextEventType_Impl__obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~TextEventType_Impl__obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("TextEventType_Impl_"); }

		static int unknown;
		static int edit;
		static int input;
};

} // end namespace snow
} // end namespace types
} // end namespace _Types

#endif /* INCLUDED_snow_types__Types_TextEventType_Impl_ */ 
