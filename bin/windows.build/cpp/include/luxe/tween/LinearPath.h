#ifndef INCLUDED_luxe_tween_LinearPath
#define INCLUDED_luxe_tween_LinearPath

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <luxe/tween/BezierPath.h>
HX_DECLARE_CLASS2(luxe,tween,BezierPath)
HX_DECLARE_CLASS2(luxe,tween,LinearPath)
namespace luxe{
namespace tween{


class HXCPP_CLASS_ATTRIBUTES  LinearPath_obj : public ::luxe::tween::BezierPath_obj{
	public:
		typedef ::luxe::tween::BezierPath_obj super;
		typedef LinearPath_obj OBJ_;
		LinearPath_obj();
		Void __construct(Float end,Float strength);

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< LinearPath_obj > __new(Float end,Float strength);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~LinearPath_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("LinearPath"); }

		virtual Float calculate( Float start,Float k);

};

} // end namespace luxe
} // end namespace tween

#endif /* INCLUDED_luxe_tween_LinearPath */ 
