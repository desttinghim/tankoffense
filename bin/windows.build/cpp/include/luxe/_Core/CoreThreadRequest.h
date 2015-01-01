#ifndef INCLUDED_luxe__Core_CoreThreadRequest
#define INCLUDED_luxe__Core_CoreThreadRequest

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(luxe,_Core,CoreThreadRequest)
namespace luxe{
namespace _Core{


class CoreThreadRequest_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef CoreThreadRequest_obj OBJ_;

	public:
		CoreThreadRequest_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_CSTRING("luxe._Core.CoreThreadRequest"); }
		::String __ToString() const { return HX_CSTRING("CoreThreadRequest.") + tag; }

		static ::luxe::_Core::CoreThreadRequest load_shader;
		static inline ::luxe::_Core::CoreThreadRequest load_shader_dyn() { return load_shader; }
		static ::luxe::_Core::CoreThreadRequest load_texture;
		static inline ::luxe::_Core::CoreThreadRequest load_texture_dyn() { return load_texture; }
};

} // end namespace luxe
} // end namespace _Core

#endif /* INCLUDED_luxe__Core_CoreThreadRequest */ 
