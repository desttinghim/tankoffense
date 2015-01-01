#ifndef INCLUDED_luxe_SizeMode
#define INCLUDED_luxe_SizeMode

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(luxe,SizeMode)
namespace luxe{


class SizeMode_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef SizeMode_obj OBJ_;

	public:
		SizeMode_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_CSTRING("luxe.SizeMode"); }
		::String __ToString() const { return HX_CSTRING("SizeMode.") + tag; }

		static ::luxe::SizeMode contain;
		static inline ::luxe::SizeMode contain_dyn() { return contain; }
		static ::luxe::SizeMode cover;
		static inline ::luxe::SizeMode cover_dyn() { return cover; }
		static ::luxe::SizeMode fit;
		static inline ::luxe::SizeMode fit_dyn() { return fit; }
};

} // end namespace luxe

#endif /* INCLUDED_luxe_SizeMode */ 
