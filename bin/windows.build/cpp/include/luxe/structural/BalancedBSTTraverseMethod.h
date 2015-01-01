#ifndef INCLUDED_luxe_structural_BalancedBSTTraverseMethod
#define INCLUDED_luxe_structural_BalancedBSTTraverseMethod

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(luxe,structural,BalancedBSTTraverseMethod)
namespace luxe{
namespace structural{


class BalancedBSTTraverseMethod_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef BalancedBSTTraverseMethod_obj OBJ_;

	public:
		BalancedBSTTraverseMethod_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_CSTRING("luxe.structural.BalancedBSTTraverseMethod"); }
		::String __ToString() const { return HX_CSTRING("BalancedBSTTraverseMethod.") + tag; }

		static ::luxe::structural::BalancedBSTTraverseMethod order_post;
		static inline ::luxe::structural::BalancedBSTTraverseMethod order_post_dyn() { return order_post; }
		static ::luxe::structural::BalancedBSTTraverseMethod order_pre;
		static inline ::luxe::structural::BalancedBSTTraverseMethod order_pre_dyn() { return order_pre; }
		static ::luxe::structural::BalancedBSTTraverseMethod order_retain;
		static inline ::luxe::structural::BalancedBSTTraverseMethod order_retain_dyn() { return order_retain; }
};

} // end namespace luxe
} // end namespace structural

#endif /* INCLUDED_luxe_structural_BalancedBSTTraverseMethod */ 
