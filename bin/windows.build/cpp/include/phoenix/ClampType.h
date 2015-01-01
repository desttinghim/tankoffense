#ifndef INCLUDED_phoenix_ClampType
#define INCLUDED_phoenix_ClampType

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(phoenix,ClampType)
namespace phoenix{


class ClampType_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef ClampType_obj OBJ_;

	public:
		ClampType_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_CSTRING("phoenix.ClampType"); }
		::String __ToString() const { return HX_CSTRING("ClampType.") + tag; }

		static ::phoenix::ClampType edge;
		static inline ::phoenix::ClampType edge_dyn() { return edge; }
		static ::phoenix::ClampType mirror;
		static inline ::phoenix::ClampType mirror_dyn() { return mirror; }
		static ::phoenix::ClampType repeat;
		static inline ::phoenix::ClampType repeat_dyn() { return repeat; }
};

} // end namespace phoenix

#endif /* INCLUDED_phoenix_ClampType */ 
