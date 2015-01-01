#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_luxe_tween_Actuate
#include <luxe/tween/Actuate.h>
#endif
#ifndef INCLUDED_luxe_tween_actuators_GenericActuator
#include <luxe/tween/actuators/GenericActuator.h>
#endif
#ifndef INCLUDED_luxe_tween_actuators_IGenericActuator
#include <luxe/tween/actuators/IGenericActuator.h>
#endif
#ifndef INCLUDED_luxe_tween_easing_IEasing
#include <luxe/tween/easing/IEasing.h>
#endif
namespace luxe{
namespace tween{
namespace actuators{

Void GenericActuator_obj::__construct(Dynamic target,Float duration,Dynamic properties)
{
HX_STACK_FRAME("luxe.tween.actuators.GenericActuator","new",0xd82cf1f3,"luxe.tween.actuators.GenericActuator.new","luxe/tween/actuators/GenericActuator.hx",15,0x19dc96e0)
HX_STACK_THIS(this)
HX_STACK_ARG(target,"target")
HX_STACK_ARG(duration,"duration")
HX_STACK_ARG(properties,"properties")
{
	HX_STACK_LINE(201)
	this->timescaled = false;
	HX_STACK_LINE(42)
	this->_autoVisible = true;
	HX_STACK_LINE(43)
	this->_delay = (int)0;
	HX_STACK_LINE(44)
	this->_reflect = false;
	HX_STACK_LINE(45)
	this->_repeat = (int)0;
	HX_STACK_LINE(46)
	this->_reverse = false;
	HX_STACK_LINE(47)
	this->_smartRotation = false;
	HX_STACK_LINE(48)
	this->_snapping = false;
	HX_STACK_LINE(49)
	this->special = false;
	HX_STACK_LINE(51)
	this->target = target;
	HX_STACK_LINE(52)
	this->properties = properties;
	HX_STACK_LINE(53)
	this->duration = duration;
	HX_STACK_LINE(55)
	this->_ease = ::luxe::tween::Actuate_obj::defaultEase;
}
;
	return null();
}

//GenericActuator_obj::~GenericActuator_obj() { }

Dynamic GenericActuator_obj::__CreateEmpty() { return  new GenericActuator_obj; }
hx::ObjectPtr< GenericActuator_obj > GenericActuator_obj::__new(Dynamic target,Float duration,Dynamic properties)
{  hx::ObjectPtr< GenericActuator_obj > result = new GenericActuator_obj();
	result->__construct(target,duration,properties);
	return result;}

Dynamic GenericActuator_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< GenericActuator_obj > result = new GenericActuator_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

hx::Object *GenericActuator_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::luxe::tween::actuators::IGenericActuator_obj)) return operator ::luxe::tween::actuators::IGenericActuator_obj *();
	return super::__ToInterface(inType);
}

Void GenericActuator_obj::apply( ){
{
		HX_STACK_FRAME("luxe.tween.actuators.GenericActuator","apply",0x7dce71c1,"luxe.tween.actuators.GenericActuator.apply","luxe/tween/actuators/GenericActuator.hx",62,0x19dc96e0)
		HX_STACK_THIS(this)
		HX_STACK_LINE(62)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(62)
		Array< ::String > _g1 = ::Reflect_obj::fields(this->properties);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(62)
		while((true)){
			HX_STACK_LINE(62)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(62)
				break;
			}
			HX_STACK_LINE(62)
			::String i = _g1->__get(_g);		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(62)
			++(_g);
			HX_STACK_LINE(64)
			if ((::Reflect_obj::hasField(this->target,i))){
				HX_STACK_LINE(66)
				Dynamic o = this->target;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(66)
				Dynamic value = ::Reflect_obj::field(this->properties,i);		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(66)
				if (((o != null()))){
					HX_STACK_LINE(66)
					o->__SetField(i,value,false);
				}
			}
			else{
				HX_STACK_LINE(70)
				Dynamic o = this->target;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(70)
				Dynamic value = ::Reflect_obj::field(this->properties,i);		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(70)
				if (((o != null()))){
					HX_STACK_LINE(70)
					o->__SetField(i,value,true);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(GenericActuator_obj,apply,(void))

::luxe::tween::actuators::IGenericActuator GenericActuator_obj::autoVisible( Dynamic value){
	HX_STACK_FRAME("luxe.tween.actuators.GenericActuator","autoVisible",0xa1098956,"luxe.tween.actuators.GenericActuator.autoVisible","luxe/tween/actuators/GenericActuator.hx",84,0x19dc96e0)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(86)
	if (((value == null()))){
		HX_STACK_LINE(88)
		value = true;
	}
	HX_STACK_LINE(92)
	this->_autoVisible = value;
	HX_STACK_LINE(94)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(GenericActuator_obj,autoVisible,return )

Dynamic GenericActuator_obj::callMethod( Dynamic method,Dynamic params){
	HX_STACK_FRAME("luxe.tween.actuators.GenericActuator","callMethod",0x527f54ec,"luxe.tween.actuators.GenericActuator.callMethod","luxe/tween/actuators/GenericActuator.hx",99,0x19dc96e0)
	HX_STACK_THIS(this)
	HX_STACK_ARG(method,"method")
	HX_STACK_ARG(params,"params")
	HX_STACK_LINE(101)
	if (((params == null()))){
		HX_STACK_LINE(103)
		params = Dynamic( Array_obj<Dynamic>::__new());
	}
	HX_STACK_LINE(125)
	return ::Reflect_obj::callMethod(method,method,params);
}


HX_DEFINE_DYNAMIC_FUNC2(GenericActuator_obj,callMethod,return )

Void GenericActuator_obj::change( ){
{
		HX_STACK_FRAME("luxe.tween.actuators.GenericActuator","change",0xbe6e6dbd,"luxe.tween.actuators.GenericActuator.change","luxe/tween/actuators/GenericActuator.hx",132,0x19dc96e0)
		HX_STACK_THIS(this)
		HX_STACK_LINE(132)
		if (((this->_onUpdate != null()))){
			HX_STACK_LINE(134)
			Dynamic method = this->_onUpdate;		HX_STACK_VAR(method,"method");
			HX_STACK_LINE(134)
			Dynamic params = this->_onUpdateParams;		HX_STACK_VAR(params,"params");
			HX_STACK_LINE(134)
			if (((params == null()))){
				HX_STACK_LINE(134)
				params = Dynamic( Array_obj<Dynamic>::__new());
			}
			HX_STACK_LINE(134)
			::Reflect_obj::callMethod(method,method,params);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(GenericActuator_obj,change,(void))

Void GenericActuator_obj::complete( hx::Null< bool >  __o_sendEvent){
bool sendEvent = __o_sendEvent.Default(true);
	HX_STACK_FRAME("luxe.tween.actuators.GenericActuator","complete",0x22ad4a46,"luxe.tween.actuators.GenericActuator.complete","luxe/tween/actuators/GenericActuator.hx",141,0x19dc96e0)
	HX_STACK_THIS(this)
	HX_STACK_ARG(sendEvent,"sendEvent")
{
		HX_STACK_LINE(143)
		if ((sendEvent)){
			HX_STACK_LINE(145)
			this->change();
			HX_STACK_LINE(147)
			if (((this->_onComplete != null()))){
				HX_STACK_LINE(149)
				Dynamic method = this->_onComplete;		HX_STACK_VAR(method,"method");
				HX_STACK_LINE(149)
				Dynamic params = this->_onCompleteParams;		HX_STACK_VAR(params,"params");
				HX_STACK_LINE(149)
				if (((params == null()))){
					HX_STACK_LINE(149)
					params = Dynamic( Array_obj<Dynamic>::__new());
				}
				HX_STACK_LINE(149)
				::Reflect_obj::callMethod(method,method,params);
			}
		}
		HX_STACK_LINE(155)
		::luxe::tween::Actuate_obj::unload(hx::ObjectPtr<OBJ_>(this));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(GenericActuator_obj,complete,(void))

::luxe::tween::actuators::IGenericActuator GenericActuator_obj::delay( Float duration){
	HX_STACK_FRAME("luxe.tween.actuators.GenericActuator","delay",0x30b9c3d6,"luxe.tween.actuators.GenericActuator.delay","luxe/tween/actuators/GenericActuator.hx",165,0x19dc96e0)
	HX_STACK_THIS(this)
	HX_STACK_ARG(duration,"duration")
	HX_STACK_LINE(167)
	this->_delay = duration;
	HX_STACK_LINE(169)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(GenericActuator_obj,delay,return )

::luxe::tween::actuators::IGenericActuator GenericActuator_obj::ease( ::luxe::tween::easing::IEasing easing){
	HX_STACK_FRAME("luxe.tween.actuators.GenericActuator","ease",0x4930cafb,"luxe.tween.actuators.GenericActuator.ease","luxe/tween/actuators/GenericActuator.hx",179,0x19dc96e0)
	HX_STACK_THIS(this)
	HX_STACK_ARG(easing,"easing")
	HX_STACK_LINE(181)
	this->_ease = easing;
	HX_STACK_LINE(183)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(GenericActuator_obj,ease,return )

Void GenericActuator_obj::move( ){
{
		HX_STACK_FRAME("luxe.tween.actuators.GenericActuator","move",0x4e85221e,"luxe.tween.actuators.GenericActuator.move","luxe/tween/actuators/GenericActuator.hx",188,0x19dc96e0)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(GenericActuator_obj,move,(void))

::luxe::tween::actuators::IGenericActuator GenericActuator_obj::timescale( hx::Null< bool >  __o__value){
bool _value = __o__value.Default(true);
	HX_STACK_FRAME("luxe.tween.actuators.GenericActuator","timescale",0x804d4530,"luxe.tween.actuators.GenericActuator.timescale","luxe/tween/actuators/GenericActuator.hx",202,0x19dc96e0)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_value,"_value")
{
		HX_STACK_LINE(203)
		this->timescaled = _value;
		HX_STACK_LINE(204)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC1(GenericActuator_obj,timescale,return )

::luxe::tween::actuators::IGenericActuator GenericActuator_obj::onComplete( Dynamic handler,Dynamic parameters){
	HX_STACK_FRAME("luxe.tween.actuators.GenericActuator","onComplete",0x7b735bc5,"luxe.tween.actuators.GenericActuator.onComplete","luxe/tween/actuators/GenericActuator.hx",213,0x19dc96e0)
	HX_STACK_THIS(this)
	HX_STACK_ARG(handler,"handler")
	HX_STACK_ARG(parameters,"parameters")
	HX_STACK_LINE(215)
	this->_onComplete = handler;
	HX_STACK_LINE(217)
	if (((parameters == null()))){
		HX_STACK_LINE(219)
		this->_onCompleteParams = Dynamic( Array_obj<Dynamic>::__new());
	}
	else{
		HX_STACK_LINE(223)
		this->_onCompleteParams = parameters;
	}
	HX_STACK_LINE(227)
	if (((this->duration == (int)0))){
		HX_STACK_LINE(229)
		this->complete(null());
	}
	HX_STACK_LINE(233)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC2(GenericActuator_obj,onComplete,return )

::luxe::tween::actuators::IGenericActuator GenericActuator_obj::onRepeat( Dynamic handler,Dynamic parameters){
	HX_STACK_FRAME("luxe.tween.actuators.GenericActuator","onRepeat",0x890ed767,"luxe.tween.actuators.GenericActuator.onRepeat","luxe/tween/actuators/GenericActuator.hx",244,0x19dc96e0)
	HX_STACK_THIS(this)
	HX_STACK_ARG(handler,"handler")
	HX_STACK_ARG(parameters,"parameters")
	HX_STACK_LINE(246)
	this->_onRepeat = handler;
	HX_STACK_LINE(248)
	if (((parameters == null()))){
		HX_STACK_LINE(250)
		this->_onRepeatParams = Dynamic( Array_obj<Dynamic>::__new());
	}
	else{
		HX_STACK_LINE(254)
		this->_onRepeatParams = parameters;
	}
	HX_STACK_LINE(258)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC2(GenericActuator_obj,onRepeat,return )

::luxe::tween::actuators::IGenericActuator GenericActuator_obj::onUpdate( Dynamic handler,Dynamic parameters){
	HX_STACK_FRAME("luxe.tween.actuators.GenericActuator","onUpdate",0x0997c615,"luxe.tween.actuators.GenericActuator.onUpdate","luxe/tween/actuators/GenericActuator.hx",269,0x19dc96e0)
	HX_STACK_THIS(this)
	HX_STACK_ARG(handler,"handler")
	HX_STACK_ARG(parameters,"parameters")
	HX_STACK_LINE(271)
	this->_onUpdate = handler;
	HX_STACK_LINE(273)
	if (((parameters == null()))){
		HX_STACK_LINE(275)
		this->_onUpdateParams = Dynamic( Array_obj<Dynamic>::__new());
	}
	else{
		HX_STACK_LINE(279)
		this->_onUpdateParams = parameters;
	}
	HX_STACK_LINE(283)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC2(GenericActuator_obj,onUpdate,return )

Void GenericActuator_obj::pause( ){
{
		HX_STACK_FRAME("luxe.tween.actuators.GenericActuator","pause",0x16eac349,"luxe.tween.actuators.GenericActuator.pause","luxe/tween/actuators/GenericActuator.hx",288,0x19dc96e0)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(GenericActuator_obj,pause,(void))

::luxe::tween::actuators::IGenericActuator GenericActuator_obj::reflect( Dynamic value){
	HX_STACK_FRAME("luxe.tween.actuators.GenericActuator","reflect",0xfe8e6b50,"luxe.tween.actuators.GenericActuator.reflect","luxe/tween/actuators/GenericActuator.hx",300,0x19dc96e0)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(302)
	if (((value == null()))){
		HX_STACK_LINE(304)
		value = true;
	}
	HX_STACK_LINE(308)
	this->_reflect = value;
	HX_STACK_LINE(309)
	this->special = true;
	HX_STACK_LINE(311)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(GenericActuator_obj,reflect,return )

::luxe::tween::actuators::IGenericActuator GenericActuator_obj::repeat( Dynamic times){
	HX_STACK_FRAME("luxe.tween.actuators.GenericActuator","repeat",0x0d7873a8,"luxe.tween.actuators.GenericActuator.repeat","luxe/tween/actuators/GenericActuator.hx",321,0x19dc96e0)
	HX_STACK_THIS(this)
	HX_STACK_ARG(times,"times")
	HX_STACK_LINE(323)
	if (((times == null()))){
		HX_STACK_LINE(325)
		times = (int)-1;
	}
	HX_STACK_LINE(329)
	this->_repeat = times;
	HX_STACK_LINE(331)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(GenericActuator_obj,repeat,return )

Void GenericActuator_obj::resume( ){
{
		HX_STACK_FRAME("luxe.tween.actuators.GenericActuator","resume",0x0f8045fa,"luxe.tween.actuators.GenericActuator.resume","luxe/tween/actuators/GenericActuator.hx",336,0x19dc96e0)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(GenericActuator_obj,resume,(void))

::luxe::tween::actuators::IGenericActuator GenericActuator_obj::reverse( Dynamic value){
	HX_STACK_FRAME("luxe.tween.actuators.GenericActuator","reverse",0x30612035,"luxe.tween.actuators.GenericActuator.reverse","luxe/tween/actuators/GenericActuator.hx",348,0x19dc96e0)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(350)
	if (((value == null()))){
		HX_STACK_LINE(352)
		value = true;
	}
	HX_STACK_LINE(356)
	this->_reverse = value;
	HX_STACK_LINE(357)
	this->special = true;
	HX_STACK_LINE(359)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(GenericActuator_obj,reverse,return )

::luxe::tween::actuators::IGenericActuator GenericActuator_obj::smartRotation( Dynamic value){
	HX_STACK_FRAME("luxe.tween.actuators.GenericActuator","smartRotation",0x6da997ba,"luxe.tween.actuators.GenericActuator.smartRotation","luxe/tween/actuators/GenericActuator.hx",369,0x19dc96e0)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(371)
	if (((value == null()))){
		HX_STACK_LINE(373)
		value = true;
	}
	HX_STACK_LINE(377)
	this->_smartRotation = value;
	HX_STACK_LINE(378)
	this->special = true;
	HX_STACK_LINE(380)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(GenericActuator_obj,smartRotation,return )

::luxe::tween::actuators::IGenericActuator GenericActuator_obj::snapping( Dynamic value){
	HX_STACK_FRAME("luxe.tween.actuators.GenericActuator","snapping",0xc29e7f49,"luxe.tween.actuators.GenericActuator.snapping","luxe/tween/actuators/GenericActuator.hx",390,0x19dc96e0)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(392)
	if (((value == null()))){
		HX_STACK_LINE(394)
		value = true;
	}
	HX_STACK_LINE(398)
	this->_snapping = value;
	HX_STACK_LINE(399)
	this->special = true;
	HX_STACK_LINE(401)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(GenericActuator_obj,snapping,return )

Void GenericActuator_obj::stop( Dynamic properties,bool complete,bool sendEvent){
{
		HX_STACK_FRAME("luxe.tween.actuators.GenericActuator","stop",0x52802f0f,"luxe.tween.actuators.GenericActuator.stop","luxe/tween/actuators/GenericActuator.hx",406,0x19dc96e0)
		HX_STACK_THIS(this)
		HX_STACK_ARG(properties,"properties")
		HX_STACK_ARG(complete,"complete")
		HX_STACK_ARG(sendEvent,"sendEvent")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(GenericActuator_obj,stop,(void))


GenericActuator_obj::GenericActuator_obj()
{
}

void GenericActuator_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(GenericActuator);
	HX_MARK_MEMBER_NAME(duration,"duration");
	HX_MARK_MEMBER_NAME(id,"id");
	HX_MARK_MEMBER_NAME(properties,"properties");
	HX_MARK_MEMBER_NAME(target,"target");
	HX_MARK_MEMBER_NAME(_autoVisible,"_autoVisible");
	HX_MARK_MEMBER_NAME(_delay,"_delay");
	HX_MARK_MEMBER_NAME(_ease,"_ease");
	HX_MARK_MEMBER_NAME(_onComplete,"_onComplete");
	HX_MARK_MEMBER_NAME(_onCompleteParams,"_onCompleteParams");
	HX_MARK_MEMBER_NAME(_onRepeat,"_onRepeat");
	HX_MARK_MEMBER_NAME(_onRepeatParams,"_onRepeatParams");
	HX_MARK_MEMBER_NAME(_onUpdate,"_onUpdate");
	HX_MARK_MEMBER_NAME(_onUpdateParams,"_onUpdateParams");
	HX_MARK_MEMBER_NAME(_reflect,"_reflect");
	HX_MARK_MEMBER_NAME(_repeat,"_repeat");
	HX_MARK_MEMBER_NAME(_reverse,"_reverse");
	HX_MARK_MEMBER_NAME(_smartRotation,"_smartRotation");
	HX_MARK_MEMBER_NAME(_snapping,"_snapping");
	HX_MARK_MEMBER_NAME(special,"special");
	HX_MARK_MEMBER_NAME(timescaled,"timescaled");
	HX_MARK_END_CLASS();
}

void GenericActuator_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(duration,"duration");
	HX_VISIT_MEMBER_NAME(id,"id");
	HX_VISIT_MEMBER_NAME(properties,"properties");
	HX_VISIT_MEMBER_NAME(target,"target");
	HX_VISIT_MEMBER_NAME(_autoVisible,"_autoVisible");
	HX_VISIT_MEMBER_NAME(_delay,"_delay");
	HX_VISIT_MEMBER_NAME(_ease,"_ease");
	HX_VISIT_MEMBER_NAME(_onComplete,"_onComplete");
	HX_VISIT_MEMBER_NAME(_onCompleteParams,"_onCompleteParams");
	HX_VISIT_MEMBER_NAME(_onRepeat,"_onRepeat");
	HX_VISIT_MEMBER_NAME(_onRepeatParams,"_onRepeatParams");
	HX_VISIT_MEMBER_NAME(_onUpdate,"_onUpdate");
	HX_VISIT_MEMBER_NAME(_onUpdateParams,"_onUpdateParams");
	HX_VISIT_MEMBER_NAME(_reflect,"_reflect");
	HX_VISIT_MEMBER_NAME(_repeat,"_repeat");
	HX_VISIT_MEMBER_NAME(_reverse,"_reverse");
	HX_VISIT_MEMBER_NAME(_smartRotation,"_smartRotation");
	HX_VISIT_MEMBER_NAME(_snapping,"_snapping");
	HX_VISIT_MEMBER_NAME(special,"special");
	HX_VISIT_MEMBER_NAME(timescaled,"timescaled");
}

Dynamic GenericActuator_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return id; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"ease") ) { return ease_dyn(); }
		if (HX_FIELD_EQ(inName,"move") ) { return move_dyn(); }
		if (HX_FIELD_EQ(inName,"stop") ) { return stop_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_ease") ) { return _ease; }
		if (HX_FIELD_EQ(inName,"apply") ) { return apply_dyn(); }
		if (HX_FIELD_EQ(inName,"delay") ) { return delay_dyn(); }
		if (HX_FIELD_EQ(inName,"pause") ) { return pause_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"target") ) { return target; }
		if (HX_FIELD_EQ(inName,"_delay") ) { return _delay; }
		if (HX_FIELD_EQ(inName,"change") ) { return change_dyn(); }
		if (HX_FIELD_EQ(inName,"repeat") ) { return repeat_dyn(); }
		if (HX_FIELD_EQ(inName,"resume") ) { return resume_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_repeat") ) { return _repeat; }
		if (HX_FIELD_EQ(inName,"special") ) { return special; }
		if (HX_FIELD_EQ(inName,"reflect") ) { return reflect_dyn(); }
		if (HX_FIELD_EQ(inName,"reverse") ) { return reverse_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"duration") ) { return duration; }
		if (HX_FIELD_EQ(inName,"_reflect") ) { return _reflect; }
		if (HX_FIELD_EQ(inName,"_reverse") ) { return _reverse; }
		if (HX_FIELD_EQ(inName,"complete") ) { return complete_dyn(); }
		if (HX_FIELD_EQ(inName,"onRepeat") ) { return onRepeat_dyn(); }
		if (HX_FIELD_EQ(inName,"onUpdate") ) { return onUpdate_dyn(); }
		if (HX_FIELD_EQ(inName,"snapping") ) { return snapping_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_onRepeat") ) { return _onRepeat; }
		if (HX_FIELD_EQ(inName,"_onUpdate") ) { return _onUpdate; }
		if (HX_FIELD_EQ(inName,"_snapping") ) { return _snapping; }
		if (HX_FIELD_EQ(inName,"timescale") ) { return timescale_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"properties") ) { return properties; }
		if (HX_FIELD_EQ(inName,"callMethod") ) { return callMethod_dyn(); }
		if (HX_FIELD_EQ(inName,"timescaled") ) { return timescaled; }
		if (HX_FIELD_EQ(inName,"onComplete") ) { return onComplete_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_onComplete") ) { return _onComplete; }
		if (HX_FIELD_EQ(inName,"autoVisible") ) { return autoVisible_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_autoVisible") ) { return _autoVisible; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"smartRotation") ) { return smartRotation_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_smartRotation") ) { return _smartRotation; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_onRepeatParams") ) { return _onRepeatParams; }
		if (HX_FIELD_EQ(inName,"_onUpdateParams") ) { return _onUpdateParams; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_onCompleteParams") ) { return _onCompleteParams; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic GenericActuator_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< ::String >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_ease") ) { _ease=inValue.Cast< ::luxe::tween::easing::IEasing >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"target") ) { target=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_delay") ) { _delay=inValue.Cast< Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_repeat") ) { _repeat=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"special") ) { special=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"duration") ) { duration=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_reflect") ) { _reflect=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_reverse") ) { _reverse=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_onRepeat") ) { _onRepeat=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_onUpdate") ) { _onUpdate=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_snapping") ) { _snapping=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"properties") ) { properties=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"timescaled") ) { timescaled=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_onComplete") ) { _onComplete=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_autoVisible") ) { _autoVisible=inValue.Cast< bool >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_smartRotation") ) { _smartRotation=inValue.Cast< bool >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_onRepeatParams") ) { _onRepeatParams=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_onUpdateParams") ) { _onUpdateParams=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_onCompleteParams") ) { _onCompleteParams=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void GenericActuator_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("duration"));
	outFields->push(HX_CSTRING("id"));
	outFields->push(HX_CSTRING("properties"));
	outFields->push(HX_CSTRING("target"));
	outFields->push(HX_CSTRING("_autoVisible"));
	outFields->push(HX_CSTRING("_delay"));
	outFields->push(HX_CSTRING("_ease"));
	outFields->push(HX_CSTRING("_onComplete"));
	outFields->push(HX_CSTRING("_onCompleteParams"));
	outFields->push(HX_CSTRING("_onRepeat"));
	outFields->push(HX_CSTRING("_onRepeatParams"));
	outFields->push(HX_CSTRING("_onUpdate"));
	outFields->push(HX_CSTRING("_onUpdateParams"));
	outFields->push(HX_CSTRING("_reflect"));
	outFields->push(HX_CSTRING("_repeat"));
	outFields->push(HX_CSTRING("_reverse"));
	outFields->push(HX_CSTRING("_smartRotation"));
	outFields->push(HX_CSTRING("_snapping"));
	outFields->push(HX_CSTRING("special"));
	outFields->push(HX_CSTRING("timescaled"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(GenericActuator_obj,duration),HX_CSTRING("duration")},
	{hx::fsString,(int)offsetof(GenericActuator_obj,id),HX_CSTRING("id")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(GenericActuator_obj,properties),HX_CSTRING("properties")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(GenericActuator_obj,target),HX_CSTRING("target")},
	{hx::fsBool,(int)offsetof(GenericActuator_obj,_autoVisible),HX_CSTRING("_autoVisible")},
	{hx::fsFloat,(int)offsetof(GenericActuator_obj,_delay),HX_CSTRING("_delay")},
	{hx::fsObject /*::luxe::tween::easing::IEasing*/ ,(int)offsetof(GenericActuator_obj,_ease),HX_CSTRING("_ease")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(GenericActuator_obj,_onComplete),HX_CSTRING("_onComplete")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(GenericActuator_obj,_onCompleteParams),HX_CSTRING("_onCompleteParams")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(GenericActuator_obj,_onRepeat),HX_CSTRING("_onRepeat")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(GenericActuator_obj,_onRepeatParams),HX_CSTRING("_onRepeatParams")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(GenericActuator_obj,_onUpdate),HX_CSTRING("_onUpdate")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(GenericActuator_obj,_onUpdateParams),HX_CSTRING("_onUpdateParams")},
	{hx::fsBool,(int)offsetof(GenericActuator_obj,_reflect),HX_CSTRING("_reflect")},
	{hx::fsInt,(int)offsetof(GenericActuator_obj,_repeat),HX_CSTRING("_repeat")},
	{hx::fsBool,(int)offsetof(GenericActuator_obj,_reverse),HX_CSTRING("_reverse")},
	{hx::fsBool,(int)offsetof(GenericActuator_obj,_smartRotation),HX_CSTRING("_smartRotation")},
	{hx::fsBool,(int)offsetof(GenericActuator_obj,_snapping),HX_CSTRING("_snapping")},
	{hx::fsBool,(int)offsetof(GenericActuator_obj,special),HX_CSTRING("special")},
	{hx::fsBool,(int)offsetof(GenericActuator_obj,timescaled),HX_CSTRING("timescaled")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("duration"),
	HX_CSTRING("id"),
	HX_CSTRING("properties"),
	HX_CSTRING("target"),
	HX_CSTRING("_autoVisible"),
	HX_CSTRING("_delay"),
	HX_CSTRING("_ease"),
	HX_CSTRING("_onComplete"),
	HX_CSTRING("_onCompleteParams"),
	HX_CSTRING("_onRepeat"),
	HX_CSTRING("_onRepeatParams"),
	HX_CSTRING("_onUpdate"),
	HX_CSTRING("_onUpdateParams"),
	HX_CSTRING("_reflect"),
	HX_CSTRING("_repeat"),
	HX_CSTRING("_reverse"),
	HX_CSTRING("_smartRotation"),
	HX_CSTRING("_snapping"),
	HX_CSTRING("special"),
	HX_CSTRING("apply"),
	HX_CSTRING("autoVisible"),
	HX_CSTRING("callMethod"),
	HX_CSTRING("change"),
	HX_CSTRING("complete"),
	HX_CSTRING("delay"),
	HX_CSTRING("ease"),
	HX_CSTRING("move"),
	HX_CSTRING("timescaled"),
	HX_CSTRING("timescale"),
	HX_CSTRING("onComplete"),
	HX_CSTRING("onRepeat"),
	HX_CSTRING("onUpdate"),
	HX_CSTRING("pause"),
	HX_CSTRING("reflect"),
	HX_CSTRING("repeat"),
	HX_CSTRING("resume"),
	HX_CSTRING("reverse"),
	HX_CSTRING("smartRotation"),
	HX_CSTRING("snapping"),
	HX_CSTRING("stop"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GenericActuator_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GenericActuator_obj::__mClass,"__mClass");
};

#endif

Class GenericActuator_obj::__mClass;

void GenericActuator_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("luxe.tween.actuators.GenericActuator"), hx::TCanCast< GenericActuator_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatics
#endif
#ifdef HXCPP_SCRIPTABLE
    , sMemberStorageInfo
#endif
);
}

void GenericActuator_obj::__boot()
{
}

} // end namespace luxe
} // end namespace tween
} // end namespace actuators
