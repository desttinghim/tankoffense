#ifndef INCLUDED_luxe_tween_easing_QuadEaseInOut
#define INCLUDED_luxe_tween_easing_QuadEaseInOut

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <luxe/tween/easing/IEasing.h>
HX_DECLARE_CLASS3(luxe,tween,easing,IEasing)
HX_DECLARE_CLASS3(luxe,tween,easing,QuadEaseInOut)
namespace luxe{
namespace tween{
namespace easing{


class HXCPP_CLASS_ATTRIBUTES  QuadEaseInOut_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef QuadEaseInOut_obj OBJ_;
		QuadEaseInOut_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< QuadEaseInOut_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~QuadEaseInOut_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		inline operator ::luxe::tween::easing::IEasing_obj *()
			{ return new ::luxe::tween::easing::IEasing_delegate_< QuadEaseInOut_obj >(this); }
		hx::Object *__ToInterface(const hx::type_info &inType);
		::String __ToString() const { return HX_CSTRING("QuadEaseInOut"); }

		virtual Float calculate( Float k);
		Dynamic calculate_dyn();

		virtual Float ease( Float t,Float b,Float c,Float d);
		Dynamic ease_dyn();

};

} // end namespace luxe
} // end namespace tween
} // end namespace easing

#endif /* INCLUDED_luxe_tween_easing_QuadEaseInOut */ 
