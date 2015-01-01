#include <hxcpp.h>

#ifndef INCLUDED_Luxe
#include <Luxe.h>
#endif
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_Timer
#include <haxe/Timer.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_luxe_tween_actuators_GenericActuator
#include <luxe/tween/actuators/GenericActuator.h>
#endif
#ifndef INCLUDED_luxe_tween_actuators_IGenericActuator
#include <luxe/tween/actuators/IGenericActuator.h>
#endif
#ifndef INCLUDED_luxe_tween_actuators_PropertyDetails
#include <luxe/tween/actuators/PropertyDetails.h>
#endif
#ifndef INCLUDED_luxe_tween_actuators_SimpleActuator
#include <luxe/tween/actuators/SimpleActuator.h>
#endif
#ifndef INCLUDED_luxe_tween_easing_IEasing
#include <luxe/tween/easing/IEasing.h>
#endif
namespace luxe{
namespace tween{
namespace actuators{

Void SimpleActuator_obj::__construct(Dynamic target,Float duration,Dynamic properties)
{
HX_STACK_FRAME("luxe.tween.actuators.SimpleActuator","new",0x5028008c,"luxe.tween.actuators.SimpleActuator.new","luxe/tween/actuators/SimpleActuator.hx",18,0x1966fbc1)
HX_STACK_THIS(this)
HX_STACK_ARG(target,"target")
HX_STACK_ARG(duration,"duration")
HX_STACK_ARG(properties,"properties")
{
	HX_STACK_LINE(41)
	this->has_timescaled_starttime = false;
	HX_STACK_LINE(45)
	this->active = true;
	HX_STACK_LINE(46)
	Array< ::Dynamic > _g = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(46)
	this->propertyDetails = _g;
	HX_STACK_LINE(47)
	this->sendChange = false;
	HX_STACK_LINE(48)
	this->paused = false;
	HX_STACK_LINE(49)
	this->cacheVisible = false;
	HX_STACK_LINE(50)
	this->initialized = false;
	HX_STACK_LINE(51)
	this->setVisible = false;
	HX_STACK_LINE(52)
	this->toggleVisible = false;
	HX_STACK_LINE(54)
	Float _g1 = ::Luxe_obj::get_time();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(54)
	this->startTime = _g1;
	HX_STACK_LINE(56)
	super::__construct(target,duration,properties);
	HX_STACK_LINE(58)
	if ((!(::luxe::tween::actuators::SimpleActuator_obj::addedEvent))){
		HX_STACK_LINE(60)
		::luxe::tween::actuators::SimpleActuator_obj::addedEvent = true;
		HX_STACK_LINE(61)
		::Luxe_obj::on(HX_CSTRING("update"),::luxe::tween::actuators::SimpleActuator_obj::on_internal_update_dyn());
	}
}
;
	return null();
}

//SimpleActuator_obj::~SimpleActuator_obj() { }

Dynamic SimpleActuator_obj::__CreateEmpty() { return  new SimpleActuator_obj; }
hx::ObjectPtr< SimpleActuator_obj > SimpleActuator_obj::__new(Dynamic target,Float duration,Dynamic properties)
{  hx::ObjectPtr< SimpleActuator_obj > result = new SimpleActuator_obj();
	result->__construct(target,duration,properties);
	return result;}

Dynamic SimpleActuator_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< SimpleActuator_obj > result = new SimpleActuator_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

::luxe::tween::actuators::IGenericActuator SimpleActuator_obj::autoVisible( Dynamic value){
	HX_STACK_FRAME("luxe.tween.actuators.SimpleActuator","autoVisible",0x520a58ef,"luxe.tween.actuators.SimpleActuator.autoVisible","luxe/tween/actuators/SimpleActuator.hx",71,0x1966fbc1)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(73)
	if (((value == null()))){
		HX_STACK_LINE(75)
		value = true;
	}
	HX_STACK_LINE(79)
	this->_autoVisible = value;
	HX_STACK_LINE(81)
	if ((!(value))){
		HX_STACK_LINE(83)
		this->toggleVisible = false;
		HX_STACK_LINE(85)
		if ((this->setVisible)){
			HX_STACK_LINE(87)
			Dynamic target = this->target;		HX_STACK_VAR(target,"target");
			HX_STACK_LINE(87)
			Dynamic value1 = this->cacheVisible;		HX_STACK_VAR(value1,"value1");
			HX_STACK_LINE(87)
			if ((::Reflect_obj::hasField(target,HX_CSTRING("visible")))){
				HX_STACK_LINE(87)
				if (((target != null()))){
					HX_STACK_LINE(87)
					target->__SetField(HX_CSTRING("visible"),value1,false);
				}
			}
			else{
				HX_STACK_LINE(87)
				if (((target != null()))){
					HX_STACK_LINE(87)
					target->__SetField(HX_CSTRING("visible"),value1,true);
				}
			}
		}
	}
	HX_STACK_LINE(93)
	return hx::ObjectPtr<OBJ_>(this);
}


::luxe::tween::actuators::IGenericActuator SimpleActuator_obj::delay( Float duration){
	HX_STACK_FRAME("luxe.tween.actuators.SimpleActuator","delay",0xe8886aaf,"luxe.tween.actuators.SimpleActuator.delay","luxe/tween/actuators/SimpleActuator.hx",101,0x1966fbc1)
	HX_STACK_THIS(this)
	HX_STACK_ARG(duration,"duration")
	HX_STACK_LINE(103)
	this->_delay = duration;
	HX_STACK_LINE(104)
	this->timeOffset = (this->startTime + duration);
	HX_STACK_LINE(106)
	return hx::ObjectPtr<OBJ_>(this);
}


Dynamic SimpleActuator_obj::getField( Dynamic target,::String propertyName){
	HX_STACK_FRAME("luxe.tween.actuators.SimpleActuator","getField",0xe91c5498,"luxe.tween.actuators.SimpleActuator.getField","luxe/tween/actuators/SimpleActuator.hx",111,0x1966fbc1)
	HX_STACK_THIS(this)
	HX_STACK_ARG(target,"target")
	HX_STACK_ARG(propertyName,"propertyName")
	HX_STACK_LINE(114)
	Dynamic value = null();		HX_STACK_VAR(value,"value");
	HX_STACK_LINE(116)
	if ((::Reflect_obj::hasField(target,propertyName))){
		HX_STACK_LINE(118)
		Dynamic _g = ::Reflect_obj::field(target,propertyName);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(118)
		value = _g;
	}
	else{
		HX_STACK_LINE(122)
		Dynamic _g1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(122)
		_g1 = (  (((target == null()))) ? Dynamic(null()) : Dynamic(target->__Field(propertyName,true)) );
		HX_STACK_LINE(122)
		value = _g1;
	}
	HX_STACK_LINE(126)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC2(SimpleActuator_obj,getField,return )

Void SimpleActuator_obj::initialize( ){
{
		HX_STACK_FRAME("luxe.tween.actuators.SimpleActuator","initialize",0x49789ea4,"luxe.tween.actuators.SimpleActuator.initialize","luxe/tween/actuators/SimpleActuator.hx",131,0x1966fbc1)
		HX_STACK_THIS(this)
		HX_STACK_LINE(133)
		::luxe::tween::actuators::PropertyDetails details;		HX_STACK_VAR(details,"details");
		HX_STACK_LINE(134)
		Float start;		HX_STACK_VAR(start,"start");
		HX_STACK_LINE(136)
		{
			HX_STACK_LINE(136)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(136)
			Array< ::String > _g1 = ::Reflect_obj::fields(this->properties);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(136)
			while((true)){
				HX_STACK_LINE(136)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(136)
					break;
				}
				HX_STACK_LINE(136)
				::String i = _g1->__get(_g);		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(136)
				++(_g);
				HX_STACK_LINE(138)
				bool isField = true;		HX_STACK_VAR(isField,"isField");
				HX_STACK_LINE(140)
				if ((::Reflect_obj::hasField(this->target,i))){
					HX_STACK_LINE(144)
					Dynamic _g2 = ::Reflect_obj::field(this->target,i);		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(144)
					start = _g2;
				}
				else{
					HX_STACK_LINE(148)
					isField = false;
					HX_STACK_LINE(149)
					Dynamic _g11;		HX_STACK_VAR(_g11,"_g11");
					HX_STACK_LINE(149)
					{
						HX_STACK_LINE(149)
						Dynamic o = this->target;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(149)
						if (((o == null()))){
							HX_STACK_LINE(149)
							_g11 = null();
						}
						else{
							HX_STACK_LINE(149)
							_g11 = o->__Field(i,true);
						}
					}
					HX_STACK_LINE(149)
					start = _g11;
				}
				HX_STACK_LINE(154)
				if ((::Std_obj::is(start,hx::ClassOf< ::Float >()))){
					HX_STACK_LINE(156)
					Dynamic _g4;		HX_STACK_VAR(_g4,"_g4");
					HX_STACK_LINE(156)
					{
						HX_STACK_LINE(156)
						Dynamic target = this->properties;		HX_STACK_VAR(target,"target");
						HX_STACK_LINE(156)
						Dynamic value = null();		HX_STACK_VAR(value,"value");
						HX_STACK_LINE(156)
						if ((::Reflect_obj::hasField(target,i))){
							HX_STACK_LINE(156)
							Dynamic _g2 = ::Reflect_obj::field(target,i);		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(156)
							value = _g2;
						}
						else{
							HX_STACK_LINE(156)
							Dynamic _g3;		HX_STACK_VAR(_g3,"_g3");
							HX_STACK_LINE(156)
							_g3 = (  (((target == null()))) ? Dynamic(null()) : Dynamic(target->__Field(i,true)) );
							HX_STACK_LINE(156)
							value = _g3;
						}
						HX_STACK_LINE(156)
						_g4 = value;
					}
					HX_STACK_LINE(156)
					Float _g5 = (_g4 - start);		HX_STACK_VAR(_g5,"_g5");
					HX_STACK_LINE(156)
					::luxe::tween::actuators::PropertyDetails _g6 = ::luxe::tween::actuators::PropertyDetails_obj::__new(this->target,i,start,_g5,isField);		HX_STACK_VAR(_g6,"_g6");
					HX_STACK_LINE(156)
					details = _g6;
					HX_STACK_LINE(157)
					this->propertyDetails->push(details);
				}
			}
		}
		HX_STACK_LINE(163)
		this->detailsLength = this->propertyDetails->length;
		HX_STACK_LINE(164)
		this->initialized = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(SimpleActuator_obj,initialize,(void))

Void SimpleActuator_obj::move( ){
{
		HX_STACK_FRAME("luxe.tween.actuators.SimpleActuator","move",0xd236d965,"luxe.tween.actuators.SimpleActuator.move","luxe/tween/actuators/SimpleActuator.hx",169,0x1966fbc1)
		HX_STACK_THIS(this)
		HX_STACK_LINE(171)
		bool _g;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(171)
		if ((::Reflect_obj::hasField(this->properties,HX_CSTRING("alpha")))){
			HX_STACK_LINE(171)
			_g = ::Reflect_obj::hasField(this->properties,HX_CSTRING("visible"));
		}
		else{
			HX_STACK_LINE(171)
			_g = false;
		}
		HX_STACK_LINE(171)
		this->toggleVisible = _g;
		struct _Function_1_1{
			inline static Dynamic Block( hx::ObjectPtr< ::luxe::tween::actuators::SimpleActuator_obj > __this){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/tween/actuators/SimpleActuator.hx",173,0x1966fbc1)
				{
					HX_STACK_LINE(173)
					Dynamic target = __this->target;		HX_STACK_VAR(target,"target");
					HX_STACK_LINE(173)
					Dynamic value = null();		HX_STACK_VAR(value,"value");
					HX_STACK_LINE(173)
					if ((::Reflect_obj::hasField(target,HX_CSTRING("visible")))){
						HX_STACK_LINE(173)
						Dynamic _g1 = ::Reflect_obj::field(target,HX_CSTRING("visible"));		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(173)
						value = _g1;
					}
					else{
						HX_STACK_LINE(173)
						Dynamic _g2;		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(173)
						_g2 = (  (((target == null()))) ? Dynamic(null()) : Dynamic(target->__Field(HX_CSTRING("visible"),true)) );
						HX_STACK_LINE(173)
						value = _g2;
					}
					HX_STACK_LINE(173)
					return value;
				}
				return null();
			}
		};
		HX_STACK_LINE(173)
		if (((  (((bool(this->toggleVisible) && bool((this->properties->__Field(HX_CSTRING("alpha"),true) != (int)0))))) ? bool(!(_Function_1_1::Block(this))) : bool(false) ))){
			HX_STACK_LINE(175)
			this->setVisible = true;
			HX_STACK_LINE(176)
			Dynamic _g5;		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(176)
			{
				HX_STACK_LINE(176)
				Dynamic target = this->target;		HX_STACK_VAR(target,"target");
				HX_STACK_LINE(176)
				Dynamic value = null();		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(176)
				if ((::Reflect_obj::hasField(target,HX_CSTRING("visible")))){
					HX_STACK_LINE(176)
					Dynamic _g3 = ::Reflect_obj::field(target,HX_CSTRING("visible"));		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(176)
					value = _g3;
				}
				else{
					HX_STACK_LINE(176)
					Dynamic _g4;		HX_STACK_VAR(_g4,"_g4");
					HX_STACK_LINE(176)
					_g4 = (  (((target == null()))) ? Dynamic(null()) : Dynamic(target->__Field(HX_CSTRING("visible"),true)) );
					HX_STACK_LINE(176)
					value = _g4;
				}
				HX_STACK_LINE(176)
				_g5 = value;
			}
			HX_STACK_LINE(176)
			this->cacheVisible = _g5;
			HX_STACK_LINE(177)
			{
				HX_STACK_LINE(177)
				Dynamic target = this->target;		HX_STACK_VAR(target,"target");
				HX_STACK_LINE(177)
				if ((::Reflect_obj::hasField(target,HX_CSTRING("visible")))){
					HX_STACK_LINE(177)
					if (((target != null()))){
						HX_STACK_LINE(177)
						target->__SetField(HX_CSTRING("visible"),true,false);
					}
				}
				else{
					HX_STACK_LINE(177)
					if (((target != null()))){
						HX_STACK_LINE(177)
						target->__SetField(HX_CSTRING("visible"),true,true);
					}
				}
			}
		}
		HX_STACK_LINE(181)
		this->timeOffset = this->startTime;
		HX_STACK_LINE(182)
		::luxe::tween::actuators::SimpleActuator_obj::actuators->push(hx::ObjectPtr<OBJ_>(this));
		HX_STACK_LINE(183)
		++(::luxe::tween::actuators::SimpleActuator_obj::actuatorsLength);
	}
return null();
}


::luxe::tween::actuators::IGenericActuator SimpleActuator_obj::onUpdate( Dynamic handler,Dynamic parameters){
	HX_STACK_FRAME("luxe.tween.actuators.SimpleActuator","onUpdate",0xef642cdc,"luxe.tween.actuators.SimpleActuator.onUpdate","luxe/tween/actuators/SimpleActuator.hx",191,0x1966fbc1)
	HX_STACK_THIS(this)
	HX_STACK_ARG(handler,"handler")
	HX_STACK_ARG(parameters,"parameters")
	HX_STACK_LINE(193)
	this->_onUpdate = handler;
	HX_STACK_LINE(195)
	if (((parameters == null()))){
		HX_STACK_LINE(197)
		this->_onUpdateParams = Dynamic( Array_obj<Dynamic>::__new());
	}
	else{
		HX_STACK_LINE(201)
		this->_onUpdateParams = parameters;
	}
	HX_STACK_LINE(205)
	this->sendChange = true;
	HX_STACK_LINE(207)
	return hx::ObjectPtr<OBJ_>(this);
}


Void SimpleActuator_obj::pause( ){
{
		HX_STACK_FRAME("luxe.tween.actuators.SimpleActuator","pause",0xceb96a22,"luxe.tween.actuators.SimpleActuator.pause","luxe/tween/actuators/SimpleActuator.hx",212,0x1966fbc1)
		HX_STACK_THIS(this)
		HX_STACK_LINE(214)
		this->paused = true;
		HX_STACK_LINE(216)
		if ((this->timescaled)){
			HX_STACK_LINE(216)
			this->pauseTime = ::luxe::tween::actuators::SimpleActuator_obj::update_timer;
		}
		else{
			HX_STACK_LINE(216)
			this->pauseTime = ::luxe::tween::actuators::SimpleActuator_obj::current_time;
		}
	}
return null();
}


Void SimpleActuator_obj::resume( ){
{
		HX_STACK_FRAME("luxe.tween.actuators.SimpleActuator","resume",0x2c839d01,"luxe.tween.actuators.SimpleActuator.resume","luxe/tween/actuators/SimpleActuator.hx",223,0x1966fbc1)
		HX_STACK_THIS(this)
		HX_STACK_LINE(223)
		if ((this->paused)){
			HX_STACK_LINE(225)
			this->paused = false;
			HX_STACK_LINE(227)
			hx::AddEq(this->timeOffset,(Float(((((  ((this->timescaled)) ? Float(::luxe::tween::actuators::SimpleActuator_obj::update_timer) : Float(::luxe::tween::actuators::SimpleActuator_obj::current_time) )) - this->pauseTime))) / Float((int)1000)));
		}
	}
return null();
}


Void SimpleActuator_obj::setField( Dynamic target,::String propertyName,Dynamic value){
{
		HX_STACK_FRAME("luxe.tween.actuators.SimpleActuator","setField",0x9779ae0c,"luxe.tween.actuators.SimpleActuator.setField","luxe/tween/actuators/SimpleActuator.hx",237,0x1966fbc1)
		HX_STACK_THIS(this)
		HX_STACK_ARG(target,"target")
		HX_STACK_ARG(propertyName,"propertyName")
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(237)
		if ((::Reflect_obj::hasField(target,propertyName))){
			HX_STACK_LINE(239)
			if (((target != null()))){
				HX_STACK_LINE(239)
				target->__SetField(propertyName,value,false);
			}
		}
		else{
			HX_STACK_LINE(243)
			if (((target != null()))){
				HX_STACK_LINE(243)
				target->__SetField(propertyName,value,true);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(SimpleActuator_obj,setField,(void))

Void SimpleActuator_obj::setProperty( ::luxe::tween::actuators::PropertyDetails details,Dynamic value){
{
		HX_STACK_FRAME("luxe.tween.actuators.SimpleActuator","setProperty",0xa59b4e43,"luxe.tween.actuators.SimpleActuator.setProperty","luxe/tween/actuators/SimpleActuator.hx",252,0x1966fbc1)
		HX_STACK_THIS(this)
		HX_STACK_ARG(details,"details")
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(252)
		if ((details->isField)){
			HX_STACK_LINE(254)
			Dynamic o = details->target;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(254)
			if (((o != null()))){
				HX_STACK_LINE(254)
				o->__SetField(details->propertyName,value,true);
			}
		}
		else{
			HX_STACK_LINE(258)
			Dynamic o = details->target;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(258)
			if (((o != null()))){
				HX_STACK_LINE(258)
				o->__SetField(details->propertyName,value,true);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(SimpleActuator_obj,setProperty,(void))

Void SimpleActuator_obj::stop( Dynamic properties,bool complete,bool sendEvent){
{
		HX_STACK_FRAME("luxe.tween.actuators.SimpleActuator","stop",0xd631e656,"luxe.tween.actuators.SimpleActuator.stop","luxe/tween/actuators/SimpleActuator.hx",267,0x1966fbc1)
		HX_STACK_THIS(this)
		HX_STACK_ARG(properties,"properties")
		HX_STACK_ARG(complete,"complete")
		HX_STACK_ARG(sendEvent,"sendEvent")
		HX_STACK_LINE(267)
		if ((this->active)){
			HX_STACK_LINE(269)
			if (((properties == null()))){
				HX_STACK_LINE(271)
				this->active = false;
				HX_STACK_LINE(273)
				if ((complete)){
					HX_STACK_LINE(275)
					this->apply();
				}
				HX_STACK_LINE(279)
				this->complete(sendEvent);
				HX_STACK_LINE(280)
				return null();
			}
			HX_STACK_LINE(284)
			{
				HX_STACK_LINE(284)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(284)
				Array< ::String > _g1 = ::Reflect_obj::fields(properties);		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(284)
				while((true)){
					HX_STACK_LINE(284)
					if ((!(((_g < _g1->length))))){
						HX_STACK_LINE(284)
						break;
					}
					HX_STACK_LINE(284)
					::String i = _g1->__get(_g);		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(284)
					++(_g);
					HX_STACK_LINE(286)
					if ((::Reflect_obj::hasField(this->properties,i))){
						HX_STACK_LINE(288)
						this->active = false;
						HX_STACK_LINE(290)
						if ((complete)){
							HX_STACK_LINE(292)
							this->apply();
						}
						HX_STACK_LINE(296)
						this->complete(sendEvent);
						HX_STACK_LINE(297)
						return null();
					}
				}
			}
		}
	}
return null();
}


Void SimpleActuator_obj::update( Float currentTime){
{
		HX_STACK_FRAME("luxe.tween.actuators.SimpleActuator","update",0xab04b95d,"luxe.tween.actuators.SimpleActuator.update","luxe/tween/actuators/SimpleActuator.hx",310,0x1966fbc1)
		HX_STACK_THIS(this)
		HX_STACK_ARG(currentTime,"currentTime")
		HX_STACK_LINE(310)
		if ((!(this->paused))){
			HX_STACK_LINE(312)
			::luxe::tween::actuators::PropertyDetails details;		HX_STACK_VAR(details,"details");
			HX_STACK_LINE(313)
			Float easing;		HX_STACK_VAR(easing,"easing");
			HX_STACK_LINE(314)
			int i;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(316)
			Float tweenPosition = (Float(((currentTime - this->timeOffset))) / Float(this->duration));		HX_STACK_VAR(tweenPosition,"tweenPosition");
			HX_STACK_LINE(318)
			if (((tweenPosition > (int)1))){
				HX_STACK_LINE(320)
				tweenPosition = (int)1;
			}
			HX_STACK_LINE(324)
			if ((!(this->initialized))){
				HX_STACK_LINE(326)
				this->initialize();
			}
			HX_STACK_LINE(330)
			if ((!(this->special))){
				HX_STACK_LINE(332)
				Float _g = this->_ease->calculate(tweenPosition);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(332)
				easing = _g;
				HX_STACK_LINE(334)
				{
					HX_STACK_LINE(334)
					int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(334)
					int _g2 = this->detailsLength;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(334)
					while((true)){
						HX_STACK_LINE(334)
						if ((!(((_g1 < _g2))))){
							HX_STACK_LINE(334)
							break;
						}
						HX_STACK_LINE(334)
						int i1 = (_g1)++;		HX_STACK_VAR(i1,"i1");
						HX_STACK_LINE(336)
						details = this->propertyDetails->__get(i1).StaticCast< ::luxe::tween::actuators::PropertyDetails >();
						HX_STACK_LINE(337)
						{
							HX_STACK_LINE(337)
							Dynamic value = (details->start + (details->change * easing));		HX_STACK_VAR(value,"value");
							HX_STACK_LINE(337)
							if ((details->isField)){
								HX_STACK_LINE(337)
								Dynamic o = details->target;		HX_STACK_VAR(o,"o");
								HX_STACK_LINE(337)
								if (((o != null()))){
									HX_STACK_LINE(337)
									o->__SetField(details->propertyName,value,true);
								}
							}
							else{
								HX_STACK_LINE(337)
								Dynamic o = details->target;		HX_STACK_VAR(o,"o");
								HX_STACK_LINE(337)
								if (((o != null()))){
									HX_STACK_LINE(337)
									o->__SetField(details->propertyName,value,true);
								}
							}
						}
					}
				}
			}
			else{
				HX_STACK_LINE(343)
				if ((!(this->_reverse))){
					HX_STACK_LINE(345)
					Float _g1 = this->_ease->calculate(tweenPosition);		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(345)
					easing = _g1;
				}
				else{
					HX_STACK_LINE(349)
					Float _g2 = this->_ease->calculate(((int)1 - tweenPosition));		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(349)
					easing = _g2;
				}
				HX_STACK_LINE(353)
				Float endValue;		HX_STACK_VAR(endValue,"endValue");
				HX_STACK_LINE(355)
				{
					HX_STACK_LINE(355)
					int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(355)
					int _g = this->detailsLength;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(355)
					while((true)){
						HX_STACK_LINE(355)
						if ((!(((_g1 < _g))))){
							HX_STACK_LINE(355)
							break;
						}
						HX_STACK_LINE(355)
						int i1 = (_g1)++;		HX_STACK_VAR(i1,"i1");
						HX_STACK_LINE(357)
						details = this->propertyDetails->__get(i1).StaticCast< ::luxe::tween::actuators::PropertyDetails >();
						HX_STACK_LINE(359)
						if (((bool(this->_smartRotation) && bool(((bool((bool((bool((details->propertyName == HX_CSTRING("rotation"))) || bool((details->propertyName == HX_CSTRING("rotationX"))))) || bool((details->propertyName == HX_CSTRING("rotationY"))))) || bool((details->propertyName == HX_CSTRING("rotationZ"))))))))){
							HX_STACK_LINE(361)
							Float rotation = hx::Mod(details->change,(int)360);		HX_STACK_VAR(rotation,"rotation");
							HX_STACK_LINE(363)
							if (((rotation > (int)180))){
								HX_STACK_LINE(365)
								hx::SubEq(rotation,(int)360);
							}
							else{
								HX_STACK_LINE(367)
								if (((rotation < (int)-180))){
									HX_STACK_LINE(369)
									hx::AddEq(rotation,(int)360);
								}
							}
							HX_STACK_LINE(373)
							endValue = (details->start + (rotation * easing));
						}
						else{
							HX_STACK_LINE(377)
							endValue = (details->start + (details->change * easing));
						}
						HX_STACK_LINE(381)
						if ((!(this->_snapping))){
							HX_STACK_LINE(383)
							if ((details->isField)){
								HX_STACK_LINE(383)
								Dynamic o = details->target;		HX_STACK_VAR(o,"o");
								HX_STACK_LINE(383)
								if (((o != null()))){
									HX_STACK_LINE(383)
									o->__SetField(details->propertyName,endValue,true);
								}
							}
							else{
								HX_STACK_LINE(383)
								Dynamic o = details->target;		HX_STACK_VAR(o,"o");
								HX_STACK_LINE(383)
								if (((o != null()))){
									HX_STACK_LINE(383)
									o->__SetField(details->propertyName,endValue,true);
								}
							}
						}
						else{
							HX_STACK_LINE(387)
							Dynamic value = ::Math_obj::round(endValue);		HX_STACK_VAR(value,"value");
							HX_STACK_LINE(387)
							if ((details->isField)){
								HX_STACK_LINE(387)
								Dynamic o = details->target;		HX_STACK_VAR(o,"o");
								HX_STACK_LINE(387)
								if (((o != null()))){
									HX_STACK_LINE(387)
									o->__SetField(details->propertyName,value,true);
								}
							}
							else{
								HX_STACK_LINE(387)
								Dynamic o = details->target;		HX_STACK_VAR(o,"o");
								HX_STACK_LINE(387)
								if (((o != null()))){
									HX_STACK_LINE(387)
									o->__SetField(details->propertyName,value,true);
								}
							}
						}
					}
				}
			}
			HX_STACK_LINE(395)
			if (((tweenPosition == (int)1))){
				HX_STACK_LINE(397)
				if (((this->_repeat == (int)0))){
					HX_STACK_LINE(399)
					this->active = false;
					struct _Function_4_1{
						inline static bool Block( hx::ObjectPtr< ::luxe::tween::actuators::SimpleActuator_obj > __this){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/tween/actuators/SimpleActuator.hx",401,0x1966fbc1)
							{
								HX_STACK_LINE(401)
								Dynamic _g5;		HX_STACK_VAR(_g5,"_g5");
								HX_STACK_LINE(401)
								{
									HX_STACK_LINE(401)
									Dynamic target = __this->target;		HX_STACK_VAR(target,"target");
									HX_STACK_LINE(401)
									Dynamic value = null();		HX_STACK_VAR(value,"value");
									HX_STACK_LINE(401)
									if ((::Reflect_obj::hasField(target,HX_CSTRING("alpha")))){
										HX_STACK_LINE(401)
										Dynamic _g3 = ::Reflect_obj::field(target,HX_CSTRING("alpha"));		HX_STACK_VAR(_g3,"_g3");
										HX_STACK_LINE(401)
										value = _g3;
									}
									else{
										HX_STACK_LINE(401)
										Dynamic _g4;		HX_STACK_VAR(_g4,"_g4");
										HX_STACK_LINE(401)
										_g4 = (  (((target == null()))) ? Dynamic(null()) : Dynamic(target->__Field(HX_CSTRING("alpha"),true)) );
										HX_STACK_LINE(401)
										value = _g4;
									}
									HX_STACK_LINE(401)
									_g5 = value;
								}
								HX_STACK_LINE(401)
								return (_g5 == (int)0);
							}
							return null();
						}
					};
					HX_STACK_LINE(401)
					if (((  ((this->toggleVisible)) ? bool(_Function_4_1::Block(this)) : bool(false) ))){
						HX_STACK_LINE(403)
						Dynamic target = this->target;		HX_STACK_VAR(target,"target");
						HX_STACK_LINE(403)
						if ((::Reflect_obj::hasField(target,HX_CSTRING("visible")))){
							HX_STACK_LINE(403)
							if (((target != null()))){
								HX_STACK_LINE(403)
								target->__SetField(HX_CSTRING("visible"),false,false);
							}
						}
						else{
							HX_STACK_LINE(403)
							if (((target != null()))){
								HX_STACK_LINE(403)
								target->__SetField(HX_CSTRING("visible"),false,true);
							}
						}
					}
					HX_STACK_LINE(407)
					this->complete(true);
					HX_STACK_LINE(408)
					return null();
				}
				else{
					HX_STACK_LINE(412)
					if (((this->_onRepeat != null()))){
						HX_STACK_LINE(414)
						Dynamic method = this->_onRepeat;		HX_STACK_VAR(method,"method");
						HX_STACK_LINE(414)
						Dynamic params = this->_onRepeatParams;		HX_STACK_VAR(params,"params");
						HX_STACK_LINE(414)
						if (((params == null()))){
							HX_STACK_LINE(414)
							params = Dynamic( Array_obj<Dynamic>::__new());
						}
						HX_STACK_LINE(414)
						::Reflect_obj::callMethod(method,method,params);
					}
					HX_STACK_LINE(418)
					if ((this->_reflect)){
						HX_STACK_LINE(420)
						this->_reverse = !(this->_reverse);
					}
					HX_STACK_LINE(424)
					this->startTime = currentTime;
					HX_STACK_LINE(425)
					this->timeOffset = (this->startTime + this->_delay);
					HX_STACK_LINE(427)
					if (((this->_repeat > (int)0))){
						HX_STACK_LINE(429)
						(this->_repeat)--;
					}
				}
			}
			HX_STACK_LINE(437)
			if ((this->sendChange)){
				HX_STACK_LINE(439)
				this->change();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(SimpleActuator_obj,update,(void))

Array< ::Dynamic > SimpleActuator_obj::actuators;

int SimpleActuator_obj::actuatorsLength;

bool SimpleActuator_obj::addedEvent;

::haxe::Timer SimpleActuator_obj::timer;

Float SimpleActuator_obj::update_timer;

Float SimpleActuator_obj::current_time;

Void SimpleActuator_obj::on_internal_update( Float dt){
{
		HX_STACK_FRAME("luxe.tween.actuators.SimpleActuator","on_internal_update",0x605734ff,"luxe.tween.actuators.SimpleActuator.on_internal_update","luxe/tween/actuators/SimpleActuator.hx",454,0x1966fbc1)
		HX_STACK_ARG(dt,"dt")
		HX_STACK_LINE(456)
		hx::AddEq(::luxe::tween::actuators::SimpleActuator_obj::update_timer,dt);
		HX_STACK_LINE(457)
		Float _g = ::Luxe_obj::get_time();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(457)
		::luxe::tween::actuators::SimpleActuator_obj::current_time = _g;
		HX_STACK_LINE(459)
		Float currentTime = ::luxe::tween::actuators::SimpleActuator_obj::current_time;		HX_STACK_VAR(currentTime,"currentTime");
		HX_STACK_LINE(461)
		::luxe::tween::actuators::SimpleActuator actuator;		HX_STACK_VAR(actuator,"actuator");
		HX_STACK_LINE(463)
		int j = (int)0;		HX_STACK_VAR(j,"j");
		HX_STACK_LINE(464)
		bool cleanup = false;		HX_STACK_VAR(cleanup,"cleanup");
		HX_STACK_LINE(466)
		{
			HX_STACK_LINE(466)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(466)
			int _g2 = ::luxe::tween::actuators::SimpleActuator_obj::actuatorsLength;		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(466)
			while((true)){
				HX_STACK_LINE(466)
				if ((!(((_g1 < _g2))))){
					HX_STACK_LINE(466)
					break;
				}
				HX_STACK_LINE(466)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(468)
				actuator = ::luxe::tween::actuators::SimpleActuator_obj::actuators->__get(j).StaticCast< ::luxe::tween::actuators::SimpleActuator >();
				HX_STACK_LINE(470)
				if (((bool((actuator != null())) && bool(actuator->active)))){
					HX_STACK_LINE(472)
					if ((actuator->timescaled)){
						HX_STACK_LINE(472)
						currentTime = ::luxe::tween::actuators::SimpleActuator_obj::update_timer;
					}
					else{
						HX_STACK_LINE(472)
						currentTime = ::luxe::tween::actuators::SimpleActuator_obj::current_time;
					}
					HX_STACK_LINE(474)
					if (((bool(actuator->timescaled) && bool(!(actuator->has_timescaled_starttime))))){
						HX_STACK_LINE(475)
						actuator->has_timescaled_starttime = true;
						HX_STACK_LINE(476)
						actuator->startTime = ::luxe::tween::actuators::SimpleActuator_obj::update_timer;
						HX_STACK_LINE(477)
						actuator->timeOffset = actuator->startTime;
					}
					HX_STACK_LINE(480)
					if (((currentTime > actuator->timeOffset))){
						HX_STACK_LINE(481)
						actuator->update(currentTime);
					}
					HX_STACK_LINE(484)
					(j)++;
				}
				else{
					HX_STACK_LINE(488)
					::luxe::tween::actuators::SimpleActuator_obj::actuators->splice(j,(int)1);
					HX_STACK_LINE(489)
					--(::luxe::tween::actuators::SimpleActuator_obj::actuatorsLength);
				}
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(SimpleActuator_obj,on_internal_update,(void))


SimpleActuator_obj::SimpleActuator_obj()
{
}

void SimpleActuator_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SimpleActuator);
	HX_MARK_MEMBER_NAME(timeOffset,"timeOffset");
	HX_MARK_MEMBER_NAME(active,"active");
	HX_MARK_MEMBER_NAME(cacheVisible,"cacheVisible");
	HX_MARK_MEMBER_NAME(detailsLength,"detailsLength");
	HX_MARK_MEMBER_NAME(initialized,"initialized");
	HX_MARK_MEMBER_NAME(paused,"paused");
	HX_MARK_MEMBER_NAME(pauseTime,"pauseTime");
	HX_MARK_MEMBER_NAME(propertyDetails,"propertyDetails");
	HX_MARK_MEMBER_NAME(sendChange,"sendChange");
	HX_MARK_MEMBER_NAME(setVisible,"setVisible");
	HX_MARK_MEMBER_NAME(startTime,"startTime");
	HX_MARK_MEMBER_NAME(toggleVisible,"toggleVisible");
	HX_MARK_MEMBER_NAME(has_timescaled_starttime,"has_timescaled_starttime");
	::luxe::tween::actuators::GenericActuator_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void SimpleActuator_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(timeOffset,"timeOffset");
	HX_VISIT_MEMBER_NAME(active,"active");
	HX_VISIT_MEMBER_NAME(cacheVisible,"cacheVisible");
	HX_VISIT_MEMBER_NAME(detailsLength,"detailsLength");
	HX_VISIT_MEMBER_NAME(initialized,"initialized");
	HX_VISIT_MEMBER_NAME(paused,"paused");
	HX_VISIT_MEMBER_NAME(pauseTime,"pauseTime");
	HX_VISIT_MEMBER_NAME(propertyDetails,"propertyDetails");
	HX_VISIT_MEMBER_NAME(sendChange,"sendChange");
	HX_VISIT_MEMBER_NAME(setVisible,"setVisible");
	HX_VISIT_MEMBER_NAME(startTime,"startTime");
	HX_VISIT_MEMBER_NAME(toggleVisible,"toggleVisible");
	HX_VISIT_MEMBER_NAME(has_timescaled_starttime,"has_timescaled_starttime");
	::luxe::tween::actuators::GenericActuator_obj::__Visit(HX_VISIT_ARG);
}

Dynamic SimpleActuator_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"move") ) { return move_dyn(); }
		if (HX_FIELD_EQ(inName,"stop") ) { return stop_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"timer") ) { return timer; }
		if (HX_FIELD_EQ(inName,"delay") ) { return delay_dyn(); }
		if (HX_FIELD_EQ(inName,"pause") ) { return pause_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"active") ) { return active; }
		if (HX_FIELD_EQ(inName,"paused") ) { return paused; }
		if (HX_FIELD_EQ(inName,"resume") ) { return resume_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getField") ) { return getField_dyn(); }
		if (HX_FIELD_EQ(inName,"onUpdate") ) { return onUpdate_dyn(); }
		if (HX_FIELD_EQ(inName,"setField") ) { return setField_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"actuators") ) { return actuators; }
		if (HX_FIELD_EQ(inName,"pauseTime") ) { return pauseTime; }
		if (HX_FIELD_EQ(inName,"startTime") ) { return startTime; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"addedEvent") ) { return addedEvent; }
		if (HX_FIELD_EQ(inName,"timeOffset") ) { return timeOffset; }
		if (HX_FIELD_EQ(inName,"sendChange") ) { return sendChange; }
		if (HX_FIELD_EQ(inName,"setVisible") ) { return setVisible; }
		if (HX_FIELD_EQ(inName,"initialize") ) { return initialize_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"initialized") ) { return initialized; }
		if (HX_FIELD_EQ(inName,"autoVisible") ) { return autoVisible_dyn(); }
		if (HX_FIELD_EQ(inName,"setProperty") ) { return setProperty_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"update_timer") ) { return update_timer; }
		if (HX_FIELD_EQ(inName,"current_time") ) { return current_time; }
		if (HX_FIELD_EQ(inName,"cacheVisible") ) { return cacheVisible; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"detailsLength") ) { return detailsLength; }
		if (HX_FIELD_EQ(inName,"toggleVisible") ) { return toggleVisible; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"actuatorsLength") ) { return actuatorsLength; }
		if (HX_FIELD_EQ(inName,"propertyDetails") ) { return propertyDetails; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"on_internal_update") ) { return on_internal_update_dyn(); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"has_timescaled_starttime") ) { return has_timescaled_starttime; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic SimpleActuator_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"timer") ) { timer=inValue.Cast< ::haxe::Timer >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"active") ) { active=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"paused") ) { paused=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"actuators") ) { actuators=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"pauseTime") ) { pauseTime=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"startTime") ) { startTime=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"addedEvent") ) { addedEvent=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"timeOffset") ) { timeOffset=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"sendChange") ) { sendChange=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"setVisible") ) { setVisible=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"initialized") ) { initialized=inValue.Cast< bool >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"update_timer") ) { update_timer=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"current_time") ) { current_time=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"cacheVisible") ) { cacheVisible=inValue.Cast< bool >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"detailsLength") ) { detailsLength=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"toggleVisible") ) { toggleVisible=inValue.Cast< bool >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"actuatorsLength") ) { actuatorsLength=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"propertyDetails") ) { propertyDetails=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"has_timescaled_starttime") ) { has_timescaled_starttime=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void SimpleActuator_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("timeOffset"));
	outFields->push(HX_CSTRING("active"));
	outFields->push(HX_CSTRING("cacheVisible"));
	outFields->push(HX_CSTRING("detailsLength"));
	outFields->push(HX_CSTRING("initialized"));
	outFields->push(HX_CSTRING("paused"));
	outFields->push(HX_CSTRING("pauseTime"));
	outFields->push(HX_CSTRING("propertyDetails"));
	outFields->push(HX_CSTRING("sendChange"));
	outFields->push(HX_CSTRING("setVisible"));
	outFields->push(HX_CSTRING("startTime"));
	outFields->push(HX_CSTRING("toggleVisible"));
	outFields->push(HX_CSTRING("has_timescaled_starttime"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("actuators"),
	HX_CSTRING("actuatorsLength"),
	HX_CSTRING("addedEvent"),
	HX_CSTRING("timer"),
	HX_CSTRING("update_timer"),
	HX_CSTRING("current_time"),
	HX_CSTRING("on_internal_update"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(SimpleActuator_obj,timeOffset),HX_CSTRING("timeOffset")},
	{hx::fsBool,(int)offsetof(SimpleActuator_obj,active),HX_CSTRING("active")},
	{hx::fsBool,(int)offsetof(SimpleActuator_obj,cacheVisible),HX_CSTRING("cacheVisible")},
	{hx::fsInt,(int)offsetof(SimpleActuator_obj,detailsLength),HX_CSTRING("detailsLength")},
	{hx::fsBool,(int)offsetof(SimpleActuator_obj,initialized),HX_CSTRING("initialized")},
	{hx::fsBool,(int)offsetof(SimpleActuator_obj,paused),HX_CSTRING("paused")},
	{hx::fsFloat,(int)offsetof(SimpleActuator_obj,pauseTime),HX_CSTRING("pauseTime")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(SimpleActuator_obj,propertyDetails),HX_CSTRING("propertyDetails")},
	{hx::fsBool,(int)offsetof(SimpleActuator_obj,sendChange),HX_CSTRING("sendChange")},
	{hx::fsBool,(int)offsetof(SimpleActuator_obj,setVisible),HX_CSTRING("setVisible")},
	{hx::fsFloat,(int)offsetof(SimpleActuator_obj,startTime),HX_CSTRING("startTime")},
	{hx::fsBool,(int)offsetof(SimpleActuator_obj,toggleVisible),HX_CSTRING("toggleVisible")},
	{hx::fsBool,(int)offsetof(SimpleActuator_obj,has_timescaled_starttime),HX_CSTRING("has_timescaled_starttime")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("timeOffset"),
	HX_CSTRING("active"),
	HX_CSTRING("cacheVisible"),
	HX_CSTRING("detailsLength"),
	HX_CSTRING("initialized"),
	HX_CSTRING("paused"),
	HX_CSTRING("pauseTime"),
	HX_CSTRING("propertyDetails"),
	HX_CSTRING("sendChange"),
	HX_CSTRING("setVisible"),
	HX_CSTRING("startTime"),
	HX_CSTRING("toggleVisible"),
	HX_CSTRING("has_timescaled_starttime"),
	HX_CSTRING("autoVisible"),
	HX_CSTRING("delay"),
	HX_CSTRING("getField"),
	HX_CSTRING("initialize"),
	HX_CSTRING("move"),
	HX_CSTRING("onUpdate"),
	HX_CSTRING("pause"),
	HX_CSTRING("resume"),
	HX_CSTRING("setField"),
	HX_CSTRING("setProperty"),
	HX_CSTRING("stop"),
	HX_CSTRING("update"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SimpleActuator_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(SimpleActuator_obj::actuators,"actuators");
	HX_MARK_MEMBER_NAME(SimpleActuator_obj::actuatorsLength,"actuatorsLength");
	HX_MARK_MEMBER_NAME(SimpleActuator_obj::addedEvent,"addedEvent");
	HX_MARK_MEMBER_NAME(SimpleActuator_obj::timer,"timer");
	HX_MARK_MEMBER_NAME(SimpleActuator_obj::update_timer,"update_timer");
	HX_MARK_MEMBER_NAME(SimpleActuator_obj::current_time,"current_time");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SimpleActuator_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(SimpleActuator_obj::actuators,"actuators");
	HX_VISIT_MEMBER_NAME(SimpleActuator_obj::actuatorsLength,"actuatorsLength");
	HX_VISIT_MEMBER_NAME(SimpleActuator_obj::addedEvent,"addedEvent");
	HX_VISIT_MEMBER_NAME(SimpleActuator_obj::timer,"timer");
	HX_VISIT_MEMBER_NAME(SimpleActuator_obj::update_timer,"update_timer");
	HX_VISIT_MEMBER_NAME(SimpleActuator_obj::current_time,"current_time");
};

#endif

Class SimpleActuator_obj::__mClass;

void SimpleActuator_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("luxe.tween.actuators.SimpleActuator"), hx::TCanCast< SimpleActuator_obj> ,sStaticFields,sMemberFields,
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

void SimpleActuator_obj::__boot()
{
	actuators= Array_obj< ::Dynamic >::__new();
	actuatorsLength= (int)0;
	addedEvent= false;
	update_timer= (int)0;
	current_time= (int)0;
}

} // end namespace luxe
} // end namespace tween
} // end namespace actuators
