#ifndef INCLUDED_luxe_utils_unifill_Exception
#define INCLUDED_luxe_utils_unifill_Exception

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(luxe,utils,unifill,Exception)
namespace luxe{
namespace utils{
namespace unifill{


class Exception_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef Exception_obj OBJ_;

	public:
		Exception_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_CSTRING("luxe.utils.unifill.Exception"); }
		::String __ToString() const { return HX_CSTRING("Exception.") + tag; }

		static ::luxe::utils::unifill::Exception InvalidCodePoint(int code);
		static Dynamic InvalidCodePoint_dyn();
		static ::luxe::utils::unifill::Exception InvalidCodeUnitSequence(int index);
		static Dynamic InvalidCodeUnitSequence_dyn();
};

} // end namespace luxe
} // end namespace utils
} // end namespace unifill

#endif /* INCLUDED_luxe_utils_unifill_Exception */ 
