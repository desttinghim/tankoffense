#ifndef INCLUDED_luxe_tween__Actuate_TweenTimer
#define INCLUDED_luxe_tween__Actuate_TweenTimer

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(luxe,tween,_Actuate,TweenTimer)
namespace luxe{
namespace tween{
namespace _Actuate{


class HXCPP_CLASS_ATTRIBUTES  TweenTimer_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef TweenTimer_obj OBJ_;
		TweenTimer_obj();
		Void __construct(Float progress);

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< TweenTimer_obj > __new(Float progress);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~TweenTimer_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("TweenTimer"); }

		Float progress;
};

} // end namespace luxe
} // end namespace tween
} // end namespace _Actuate

#endif /* INCLUDED_luxe_tween__Actuate_TweenTimer */ 
