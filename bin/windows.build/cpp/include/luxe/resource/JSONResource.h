#ifndef INCLUDED_luxe_resource_JSONResource
#define INCLUDED_luxe_resource_JSONResource

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <luxe/resource/Resource.h>
HX_DECLARE_CLASS2(luxe,resource,JSONResource)
HX_DECLARE_CLASS2(luxe,resource,Resource)
HX_DECLARE_CLASS2(luxe,resource,ResourceManager)
namespace luxe{
namespace resource{


class HXCPP_CLASS_ATTRIBUTES  JSONResource_obj : public ::luxe::resource::Resource_obj{
	public:
		typedef ::luxe::resource::Resource_obj super;
		typedef JSONResource_obj OBJ_;
		JSONResource_obj();
		Void __construct(::String _id,Dynamic _json,::luxe::resource::ResourceManager _manager);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< JSONResource_obj > __new(::String _id,Dynamic _json,::luxe::resource::ResourceManager _manager);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~JSONResource_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("JSONResource"); }

		Dynamic json;
};

} // end namespace luxe
} // end namespace resource

#endif /* INCLUDED_luxe_resource_JSONResource */ 
