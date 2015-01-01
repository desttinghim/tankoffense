#ifndef INCLUDED_phoenix_FOVType
#define INCLUDED_phoenix_FOVType

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(phoenix,FOVType)
namespace phoenix{


class FOVType_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef FOVType_obj OBJ_;

	public:
		FOVType_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_CSTRING("phoenix.FOVType"); }
		::String __ToString() const { return HX_CSTRING("FOVType.") + tag; }

		static ::phoenix::FOVType horizontal;
		static inline ::phoenix::FOVType horizontal_dyn() { return horizontal; }
		static ::phoenix::FOVType vertical;
		static inline ::phoenix::FOVType vertical_dyn() { return vertical; }
};

} // end namespace phoenix

#endif /* INCLUDED_phoenix_FOVType */ 
