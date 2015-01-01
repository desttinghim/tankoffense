#ifndef INCLUDED_luxe_tween_actuators_IGenericActuator
#define INCLUDED_luxe_tween_actuators_IGenericActuator

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(luxe,tween,actuators,IGenericActuator)
HX_DECLARE_CLASS3(luxe,tween,easing,IEasing)
namespace luxe{
namespace tween{
namespace actuators{


class HXCPP_CLASS_ATTRIBUTES  IGenericActuator_obj : public hx::Interface{
	public:
		typedef hx::Interface super;
		typedef IGenericActuator_obj OBJ_;
		HX_DO_INTERFACE_RTTI;
		static void __boot();
virtual ::luxe::tween::actuators::IGenericActuator autoVisible( Dynamic value)=0;
		Dynamic autoVisible_dyn();
virtual ::luxe::tween::actuators::IGenericActuator delay( Float duration)=0;
		Dynamic delay_dyn();
virtual ::luxe::tween::actuators::IGenericActuator ease( ::luxe::tween::easing::IEasing easing)=0;
		Dynamic ease_dyn();
virtual ::luxe::tween::actuators::IGenericActuator onComplete( Dynamic handler,Dynamic parameters)=0;
		Dynamic onComplete_dyn();
virtual ::luxe::tween::actuators::IGenericActuator onRepeat( Dynamic handler,Dynamic parameters)=0;
		Dynamic onRepeat_dyn();
virtual ::luxe::tween::actuators::IGenericActuator onUpdate( Dynamic handler,Dynamic parameters)=0;
		Dynamic onUpdate_dyn();
virtual ::luxe::tween::actuators::IGenericActuator reflect( Dynamic value)=0;
		Dynamic reflect_dyn();
virtual ::luxe::tween::actuators::IGenericActuator repeat( Dynamic times)=0;
		Dynamic repeat_dyn();
virtual ::luxe::tween::actuators::IGenericActuator reverse( Dynamic value)=0;
		Dynamic reverse_dyn();
virtual ::luxe::tween::actuators::IGenericActuator timescale( hx::Null< bool >  _value)=0;
		Dynamic timescale_dyn();
virtual ::luxe::tween::actuators::IGenericActuator smartRotation( Dynamic value)=0;
		Dynamic smartRotation_dyn();
virtual ::luxe::tween::actuators::IGenericActuator snapping( Dynamic value)=0;
		Dynamic snapping_dyn();
};

#define DELEGATE_luxe_tween_actuators_IGenericActuator \
virtual ::luxe::tween::actuators::IGenericActuator autoVisible( Dynamic value) { return mDelegate->autoVisible(value);}  \
virtual Dynamic autoVisible_dyn() { return mDelegate->autoVisible_dyn();}  \
virtual ::luxe::tween::actuators::IGenericActuator delay( Float duration) { return mDelegate->delay(duration);}  \
virtual Dynamic delay_dyn() { return mDelegate->delay_dyn();}  \
virtual ::luxe::tween::actuators::IGenericActuator ease( ::luxe::tween::easing::IEasing easing) { return mDelegate->ease(easing);}  \
virtual Dynamic ease_dyn() { return mDelegate->ease_dyn();}  \
virtual ::luxe::tween::actuators::IGenericActuator onComplete( Dynamic handler,Dynamic parameters) { return mDelegate->onComplete(handler,parameters);}  \
virtual Dynamic onComplete_dyn() { return mDelegate->onComplete_dyn();}  \
virtual ::luxe::tween::actuators::IGenericActuator onRepeat( Dynamic handler,Dynamic parameters) { return mDelegate->onRepeat(handler,parameters);}  \
virtual Dynamic onRepeat_dyn() { return mDelegate->onRepeat_dyn();}  \
virtual ::luxe::tween::actuators::IGenericActuator onUpdate( Dynamic handler,Dynamic parameters) { return mDelegate->onUpdate(handler,parameters);}  \
virtual Dynamic onUpdate_dyn() { return mDelegate->onUpdate_dyn();}  \
virtual ::luxe::tween::actuators::IGenericActuator reflect( Dynamic value) { return mDelegate->reflect(value);}  \
virtual Dynamic reflect_dyn() { return mDelegate->reflect_dyn();}  \
virtual ::luxe::tween::actuators::IGenericActuator repeat( Dynamic times) { return mDelegate->repeat(times);}  \
virtual Dynamic repeat_dyn() { return mDelegate->repeat_dyn();}  \
virtual ::luxe::tween::actuators::IGenericActuator reverse( Dynamic value) { return mDelegate->reverse(value);}  \
virtual Dynamic reverse_dyn() { return mDelegate->reverse_dyn();}  \
virtual ::luxe::tween::actuators::IGenericActuator timescale( hx::Null< bool >  _value) { return mDelegate->timescale(_value);}  \
virtual Dynamic timescale_dyn() { return mDelegate->timescale_dyn();}  \
virtual ::luxe::tween::actuators::IGenericActuator smartRotation( Dynamic value) { return mDelegate->smartRotation(value);}  \
virtual Dynamic smartRotation_dyn() { return mDelegate->smartRotation_dyn();}  \
virtual ::luxe::tween::actuators::IGenericActuator snapping( Dynamic value) { return mDelegate->snapping(value);}  \
virtual Dynamic snapping_dyn() { return mDelegate->snapping_dyn();}  \


template<typename IMPL>
class IGenericActuator_delegate_ : public IGenericActuator_obj
{
	protected:
		IMPL *mDelegate;
	public:
		IGenericActuator_delegate_(IMPL *inDelegate) : mDelegate(inDelegate) {}
		hx::Object *__GetRealObject() { return mDelegate; }
		void __Visit(HX_VISIT_PARAMS) { HX_VISIT_OBJECT(mDelegate); }
		DELEGATE_luxe_tween_actuators_IGenericActuator
};

} // end namespace luxe
} // end namespace tween
} // end namespace actuators

#endif /* INCLUDED_luxe_tween_actuators_IGenericActuator */ 
