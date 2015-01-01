#ifndef INCLUDED_luxe_resource_ResourceType
#define INCLUDED_luxe_resource_ResourceType

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(luxe,resource,ResourceType)
namespace luxe{
namespace resource{


class ResourceType_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef ResourceType_obj OBJ_;

	public:
		ResourceType_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_CSTRING("luxe.resource.ResourceType"); }
		::String __ToString() const { return HX_CSTRING("ResourceType.") + tag; }

		static ::luxe::resource::ResourceType data;
		static inline ::luxe::resource::ResourceType data_dyn() { return data; }
		static ::luxe::resource::ResourceType font;
		static inline ::luxe::resource::ResourceType font_dyn() { return font; }
		static ::luxe::resource::ResourceType json;
		static inline ::luxe::resource::ResourceType json_dyn() { return json; }
		static ::luxe::resource::ResourceType render_texture;
		static inline ::luxe::resource::ResourceType render_texture_dyn() { return render_texture; }
		static ::luxe::resource::ResourceType shader;
		static inline ::luxe::resource::ResourceType shader_dyn() { return shader; }
		static ::luxe::resource::ResourceType sound;
		static inline ::luxe::resource::ResourceType sound_dyn() { return sound; }
		static ::luxe::resource::ResourceType text;
		static inline ::luxe::resource::ResourceType text_dyn() { return text; }
		static ::luxe::resource::ResourceType texture;
		static inline ::luxe::resource::ResourceType texture_dyn() { return texture; }
		static ::luxe::resource::ResourceType unknown;
		static inline ::luxe::resource::ResourceType unknown_dyn() { return unknown; }
};

} // end namespace luxe
} // end namespace resource

#endif /* INCLUDED_luxe_resource_ResourceType */ 
