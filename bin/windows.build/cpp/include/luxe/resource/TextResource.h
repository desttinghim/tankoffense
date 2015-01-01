#ifndef INCLUDED_luxe_resource_TextResource
#define INCLUDED_luxe_resource_TextResource

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <luxe/resource/Resource.h>
HX_DECLARE_CLASS2(luxe,resource,Resource)
HX_DECLARE_CLASS2(luxe,resource,ResourceManager)
HX_DECLARE_CLASS2(luxe,resource,TextResource)
namespace luxe{
namespace resource{


class HXCPP_CLASS_ATTRIBUTES  TextResource_obj : public ::luxe::resource::Resource_obj{
	public:
		typedef ::luxe::resource::Resource_obj super;
		typedef TextResource_obj OBJ_;
		TextResource_obj();
		Void __construct(::String _id,::String _text,::luxe::resource::ResourceManager _manager);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< TextResource_obj > __new(::String _id,::String _text,::luxe::resource::ResourceManager _manager);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~TextResource_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("TextResource"); }

		::String text;
};

} // end namespace luxe
} // end namespace resource

#endif /* INCLUDED_luxe_resource_TextResource */ 
