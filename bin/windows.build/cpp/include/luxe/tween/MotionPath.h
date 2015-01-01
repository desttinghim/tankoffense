#ifndef INCLUDED_luxe_tween_MotionPath
#define INCLUDED_luxe_tween_MotionPath

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(luxe,tween,ComponentPath)
HX_DECLARE_CLASS2(luxe,tween,IComponentPath)
HX_DECLARE_CLASS2(luxe,tween,MotionPath)
HX_DECLARE_CLASS2(luxe,tween,RotationPath)
namespace luxe{
namespace tween{


class HXCPP_CLASS_ATTRIBUTES  MotionPath_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef MotionPath_obj OBJ_;
		MotionPath_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< MotionPath_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~MotionPath_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("MotionPath"); }

		::luxe::tween::RotationPath rotation;
		::luxe::tween::IComponentPath x;
		::luxe::tween::IComponentPath y;
		::luxe::tween::RotationPath _rotation;
		::luxe::tween::ComponentPath _x;
		::luxe::tween::ComponentPath _y;
		virtual ::luxe::tween::MotionPath bezier( Float x,Float y,Float controlX,Float controlY,hx::Null< Float >  strength);
		Dynamic bezier_dyn();

		virtual ::luxe::tween::MotionPath line( Float x,Float y,hx::Null< Float >  strength);
		Dynamic line_dyn();

		virtual ::luxe::tween::RotationPath get_rotation( );
		Dynamic get_rotation_dyn();

		virtual ::luxe::tween::IComponentPath get_x( );
		Dynamic get_x_dyn();

		virtual ::luxe::tween::IComponentPath get_y( );
		Dynamic get_y_dyn();

};

} // end namespace luxe
} // end namespace tween

#endif /* INCLUDED_luxe_tween_MotionPath */ 
