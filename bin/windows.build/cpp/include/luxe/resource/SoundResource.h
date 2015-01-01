#ifndef INCLUDED_luxe_resource_SoundResource
#define INCLUDED_luxe_resource_SoundResource

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <luxe/resource/Resource.h>
HX_DECLARE_CLASS2(luxe,resource,Resource)
HX_DECLARE_CLASS2(luxe,resource,ResourceManager)
HX_DECLARE_CLASS2(luxe,resource,SoundResource)
namespace luxe{
namespace resource{


class HXCPP_CLASS_ATTRIBUTES  SoundResource_obj : public ::luxe::resource::Resource_obj{
	public:
		typedef ::luxe::resource::Resource_obj super;
		typedef SoundResource_obj OBJ_;
		SoundResource_obj();
		Void __construct(::String _id,::String _name,::luxe::resource::ResourceManager _manager);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< SoundResource_obj > __new(::String _id,::String _name,::luxe::resource::ResourceManager _manager);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~SoundResource_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("SoundResource"); }

		::String name;
};

} // end namespace luxe
} // end namespace resource

#endif /* INCLUDED_luxe_resource_SoundResource */ 
