#ifndef INCLUDED_luxe_tween_actuators_GenericActuator
#define INCLUDED_luxe_tween_actuators_GenericActuator

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <luxe/tween/actuators/IGenericActuator.h>
HX_DECLARE_CLASS3(luxe,tween,actuators,GenericActuator)
HX_DECLARE_CLASS3(luxe,tween,actuators,IGenericActuator)
HX_DECLARE_CLASS3(luxe,tween,easing,IEasing)
namespace luxe{
namespace tween{
namespace actuators{


class HXCPP_CLASS_ATTRIBUTES  GenericActuator_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef GenericActuator_obj OBJ_;
		GenericActuator_obj();
		Void __construct(Dynamic target,Float duration,Dynamic properties);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< GenericActuator_obj > __new(Dynamic target,Float duration,Dynamic properties);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~GenericActuator_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		inline operator ::luxe::tween::actuators::IGenericActuator_obj *()
			{ return new ::luxe::tween::actuators::IGenericActuator_delegate_< GenericActuator_obj >(this); }
		hx::Object *__ToInterface(const hx::type_info &inType);
		::String __ToString() const { return HX_CSTRING("GenericActuator"); }

		Float duration;
		::String id;
		Dynamic properties;
		Dynamic target;
		bool _autoVisible;
		Float _delay;
		::luxe::tween::easing::IEasing _ease;
		Dynamic _onComplete;
		Dynamic _onCompleteParams;
		Dynamic _onRepeat;
		Dynamic _onRepeatParams;
		Dynamic _onUpdate;
		Dynamic _onUpdateParams;
		bool _reflect;
		int _repeat;
		bool _reverse;
		bool _smartRotation;
		bool _snapping;
		bool special;
		virtual Void apply( );
		Dynamic apply_dyn();

		virtual ::luxe::tween::actuators::IGenericActuator autoVisible( Dynamic value);
		Dynamic autoVisible_dyn();

		virtual Dynamic callMethod( Dynamic method,Dynamic params);
		Dynamic callMethod_dyn();

		virtual Void change( );
		Dynamic change_dyn();

		virtual Void complete( hx::Null< bool >  sendEvent);
		Dynamic complete_dyn();

		virtual ::luxe::tween::actuators::IGenericActuator delay( Float duration);
		Dynamic delay_dyn();

		virtual ::luxe::tween::actuators::IGenericActuator ease( ::luxe::tween::easing::IEasing easing);
		Dynamic ease_dyn();

		virtual Void move( );
		Dynamic move_dyn();

		bool timescaled;
		virtual ::luxe::tween::actuators::IGenericActuator timescale( hx::Null< bool >  _value);
		Dynamic timescale_dyn();

		virtual ::luxe::tween::actuators::IGenericActuator onComplete( Dynamic handler,Dynamic parameters);
		Dynamic onComplete_dyn();

		virtual ::luxe::tween::actuators::IGenericActuator onRepeat( Dynamic handler,Dynamic parameters);
		Dynamic onRepeat_dyn();

		virtual ::luxe::tween::actuators::IGenericActuator onUpdate( Dynamic handler,Dynamic parameters);
		Dynamic onUpdate_dyn();

		virtual Void pause( );
		Dynamic pause_dyn();

		virtual ::luxe::tween::actuators::IGenericActuator reflect( Dynamic value);
		Dynamic reflect_dyn();

		virtual ::luxe::tween::actuators::IGenericActuator repeat( Dynamic times);
		Dynamic repeat_dyn();

		virtual Void resume( );
		Dynamic resume_dyn();

		virtual ::luxe::tween::actuators::IGenericActuator reverse( Dynamic value);
		Dynamic reverse_dyn();

		virtual ::luxe::tween::actuators::IGenericActuator smartRotation( Dynamic value);
		Dynamic smartRotation_dyn();

		virtual ::luxe::tween::actuators::IGenericActuator snapping( Dynamic value);
		Dynamic snapping_dyn();

		virtual Void stop( Dynamic properties,bool complete,bool sendEvent);
		Dynamic stop_dyn();

};

} // end namespace luxe
} // end namespace tween
} // end namespace actuators

#endif /* INCLUDED_luxe_tween_actuators_GenericActuator */ 
