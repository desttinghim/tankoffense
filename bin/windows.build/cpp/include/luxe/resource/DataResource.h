#ifndef INCLUDED_luxe_resource_DataResource
#define INCLUDED_luxe_resource_DataResource

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <luxe/resource/Resource.h>
HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS2(luxe,resource,DataResource)
HX_DECLARE_CLASS2(luxe,resource,Resource)
HX_DECLARE_CLASS2(luxe,resource,ResourceManager)
HX_DECLARE_CLASS4(snow,platform,native,utils,ByteArray)
HX_DECLARE_CLASS2(snow,utils,IDataInput)
HX_DECLARE_CLASS2(snow,utils,IMemoryRange)
namespace luxe{
namespace resource{


class HXCPP_CLASS_ATTRIBUTES  DataResource_obj : public ::luxe::resource::Resource_obj{
	public:
		typedef ::luxe::resource::Resource_obj super;
		typedef DataResource_obj OBJ_;
		DataResource_obj();
		Void __construct(::String _id,::snow::platform::native::utils::ByteArray _data,::luxe::resource::ResourceManager _manager);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< DataResource_obj > __new(::String _id,::snow::platform::native::utils::ByteArray _data,::luxe::resource::ResourceManager _manager);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~DataResource_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("DataResource"); }

		::snow::platform::native::utils::ByteArray data;
};

} // end namespace luxe
} // end namespace resource

#endif /* INCLUDED_luxe_resource_DataResource */ 
