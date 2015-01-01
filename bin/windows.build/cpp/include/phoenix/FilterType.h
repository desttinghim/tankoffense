#ifndef INCLUDED_phoenix_FilterType
#define INCLUDED_phoenix_FilterType

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(phoenix,FilterType)
namespace phoenix{


class FilterType_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef FilterType_obj OBJ_;

	public:
		FilterType_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_CSTRING("phoenix.FilterType"); }
		::String __ToString() const { return HX_CSTRING("FilterType.") + tag; }

		static ::phoenix::FilterType linear;
		static inline ::phoenix::FilterType linear_dyn() { return linear; }
		static ::phoenix::FilterType mip_linear_linear;
		static inline ::phoenix::FilterType mip_linear_linear_dyn() { return mip_linear_linear; }
		static ::phoenix::FilterType mip_linear_nearest;
		static inline ::phoenix::FilterType mip_linear_nearest_dyn() { return mip_linear_nearest; }
		static ::phoenix::FilterType mip_nearest_linear;
		static inline ::phoenix::FilterType mip_nearest_linear_dyn() { return mip_nearest_linear; }
		static ::phoenix::FilterType mip_nearest_nearest;
		static inline ::phoenix::FilterType mip_nearest_nearest_dyn() { return mip_nearest_nearest; }
		static ::phoenix::FilterType nearest;
		static inline ::phoenix::FilterType nearest_dyn() { return nearest; }
};

} // end namespace phoenix

#endif /* INCLUDED_phoenix_FilterType */ 
