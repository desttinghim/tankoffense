#ifndef INCLUDED_luxe_GamepadEventType
#define INCLUDED_luxe_GamepadEventType

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(luxe,GamepadEventType)
namespace luxe{


class GamepadEventType_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef GamepadEventType_obj OBJ_;

	public:
		GamepadEventType_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_CSTRING("luxe.GamepadEventType"); }
		::String __ToString() const { return HX_CSTRING("GamepadEventType.") + tag; }

		static ::luxe::GamepadEventType axis;
		static inline ::luxe::GamepadEventType axis_dyn() { return axis; }
		static ::luxe::GamepadEventType button;
		static inline ::luxe::GamepadEventType button_dyn() { return button; }
		static ::luxe::GamepadEventType device_added;
		static inline ::luxe::GamepadEventType device_added_dyn() { return device_added; }
		static ::luxe::GamepadEventType device_remapped;
		static inline ::luxe::GamepadEventType device_remapped_dyn() { return device_remapped; }
		static ::luxe::GamepadEventType device_removed;
		static inline ::luxe::GamepadEventType device_removed_dyn() { return device_removed; }
		static ::luxe::GamepadEventType unknown;
		static inline ::luxe::GamepadEventType unknown_dyn() { return unknown; }
};

} // end namespace luxe

#endif /* INCLUDED_luxe_GamepadEventType */ 
