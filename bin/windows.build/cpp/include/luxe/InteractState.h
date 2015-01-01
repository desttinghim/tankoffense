#ifndef INCLUDED_luxe_InteractState
#define INCLUDED_luxe_InteractState

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(luxe,InteractState)
namespace luxe{


class InteractState_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef InteractState_obj OBJ_;

	public:
		InteractState_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_CSTRING("luxe.InteractState"); }
		::String __ToString() const { return HX_CSTRING("InteractState.") + tag; }

		static ::luxe::InteractState axis;
		static inline ::luxe::InteractState axis_dyn() { return axis; }
		static ::luxe::InteractState down;
		static inline ::luxe::InteractState down_dyn() { return down; }
		static ::luxe::InteractState move;
		static inline ::luxe::InteractState move_dyn() { return move; }
		static ::luxe::InteractState none;
		static inline ::luxe::InteractState none_dyn() { return none; }
		static ::luxe::InteractState unknown;
		static inline ::luxe::InteractState unknown_dyn() { return unknown; }
		static ::luxe::InteractState up;
		static inline ::luxe::InteractState up_dyn() { return up; }
		static ::luxe::InteractState wheel;
		static inline ::luxe::InteractState wheel_dyn() { return wheel; }
};

} // end namespace luxe

#endif /* INCLUDED_luxe_InteractState */ 
