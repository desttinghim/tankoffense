#ifndef INCLUDED_luxe_tween_Actuate
#define INCLUDED_luxe_tween_Actuate

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(IMap)
HX_DECLARE_CLASS2(haxe,ds,ObjectMap)
HX_DECLARE_CLASS2(luxe,tween,Actuate)
HX_DECLARE_CLASS3(luxe,tween,actuators,GenericActuator)
HX_DECLARE_CLASS3(luxe,tween,actuators,IGenericActuator)
HX_DECLARE_CLASS3(luxe,tween,easing,IEasing)
namespace luxe{
namespace tween{


class HXCPP_CLASS_ATTRIBUTES  Actuate_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Actuate_obj OBJ_;
		Actuate_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Actuate_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Actuate_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("Actuate"); }

		static ::Class defaultActuator;
		static ::luxe::tween::easing::IEasing defaultEase;
		static ::haxe::ds::ObjectMap targetLibraries;
		static ::luxe::tween::actuators::IGenericActuator apply( Dynamic target,Dynamic properties,::Class customActuator);
		static Dynamic apply_dyn();

		static Array< ::Dynamic > getLibrary( Dynamic target,hx::Null< bool >  allowCreation);
		static Dynamic getLibrary_dyn();

		static ::luxe::tween::actuators::IGenericActuator motionPath( Dynamic target,Float duration,Dynamic properties,hx::Null< bool >  overwrite);
		static Dynamic motionPath_dyn();

		static Void pause( Dynamic target);
		static Dynamic pause_dyn();

		static Void pauseAll( );
		static Dynamic pauseAll_dyn();

		static Void reset( );
		static Dynamic reset_dyn();

		static Void resume( Dynamic target);
		static Dynamic resume_dyn();

		static Void resumeAll( );
		static Dynamic resumeAll_dyn();

		static Void stop( Dynamic target,Dynamic properties,hx::Null< bool >  complete,hx::Null< bool >  sendEvent);
		static Dynamic stop_dyn();

		static ::luxe::tween::actuators::IGenericActuator timer( Float duration,::Class customActuator);
		static Dynamic timer_dyn();

		static ::luxe::tween::actuators::IGenericActuator tween( Dynamic target,Float duration,Dynamic properties,hx::Null< bool >  overwrite,::Class customActuator);
		static Dynamic tween_dyn();

		static Void unload( ::luxe::tween::actuators::GenericActuator actuator);
		static Dynamic unload_dyn();

		static ::luxe::tween::actuators::IGenericActuator update( Dynamic target,Float duration,Dynamic start,Dynamic end,hx::Null< bool >  overwrite);
		static Dynamic update_dyn();

};

} // end namespace luxe
} // end namespace tween

#endif /* INCLUDED_luxe_tween_Actuate */ 
