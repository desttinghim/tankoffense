#ifndef INCLUDED_snow_types__Types_FileEventType_Impl_
#define INCLUDED_snow_types__Types_FileEventType_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(snow,types,_Types,FileEventType_Impl_)
namespace snow{
namespace types{
namespace _Types{


class HXCPP_CLASS_ATTRIBUTES  FileEventType_Impl__obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef FileEventType_Impl__obj OBJ_;
		FileEventType_Impl__obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< FileEventType_Impl__obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FileEventType_Impl__obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("FileEventType_Impl_"); }

		static int unknown;
		static int modify;
		static int remove;
		static int create;
		static int drop;
};

} // end namespace snow
} // end namespace types
} // end namespace _Types

#endif /* INCLUDED_snow_types__Types_FileEventType_Impl_ */ 
