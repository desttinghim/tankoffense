#ifndef INCLUDED_luxe_TextEventType
#define INCLUDED_luxe_TextEventType

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(luxe,TextEventType)
namespace luxe{


class TextEventType_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef TextEventType_obj OBJ_;

	public:
		TextEventType_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_CSTRING("luxe.TextEventType"); }
		::String __ToString() const { return HX_CSTRING("TextEventType.") + tag; }

		static ::luxe::TextEventType edit;
		static inline ::luxe::TextEventType edit_dyn() { return edit; }
		static ::luxe::TextEventType input;
		static inline ::luxe::TextEventType input_dyn() { return input; }
		static ::luxe::TextEventType unknown;
		static inline ::luxe::TextEventType unknown_dyn() { return unknown; }
};

} // end namespace luxe

#endif /* INCLUDED_luxe_TextEventType */ 
