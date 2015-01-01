#ifndef INCLUDED_luxe_resource_Resource
#define INCLUDED_luxe_resource_Resource

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(luxe,resource,Resource)
HX_DECLARE_CLASS2(luxe,resource,ResourceManager)
HX_DECLARE_CLASS2(luxe,resource,ResourceType)
namespace luxe{
namespace resource{


class HXCPP_CLASS_ATTRIBUTES  Resource_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Resource_obj OBJ_;
		Resource_obj();
		Void __construct(::luxe::resource::ResourceManager _manager,::luxe::resource::ResourceType _type,Dynamic _load_time);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Resource_obj > __new(::luxe::resource::ResourceManager _manager,::luxe::resource::ResourceType _type,Dynamic _load_time);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Resource_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Resource"); }

		::luxe::resource::ResourceManager manager;
		::luxe::resource::ResourceType type;
		::String id;
		bool persistent;
		Float time_to_load;
		Float time_created;
		bool dropped;
		virtual Void drop( );
		Dynamic drop_dyn();

};

} // end namespace luxe
} // end namespace resource

#endif /* INCLUDED_luxe_resource_Resource */ 
