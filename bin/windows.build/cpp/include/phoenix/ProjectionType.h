#ifndef INCLUDED_phoenix_ProjectionType
#define INCLUDED_phoenix_ProjectionType

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(phoenix,ProjectionType)
namespace phoenix{


class ProjectionType_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef ProjectionType_obj OBJ_;

	public:
		ProjectionType_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_CSTRING("phoenix.ProjectionType"); }
		::String __ToString() const { return HX_CSTRING("ProjectionType.") + tag; }

		static ::phoenix::ProjectionType custom;
		static inline ::phoenix::ProjectionType custom_dyn() { return custom; }
		static ::phoenix::ProjectionType ortho;
		static inline ::phoenix::ProjectionType ortho_dyn() { return ortho; }
		static ::phoenix::ProjectionType perspective;
		static inline ::phoenix::ProjectionType perspective_dyn() { return perspective; }
};

} // end namespace phoenix

#endif /* INCLUDED_phoenix_ProjectionType */ 
