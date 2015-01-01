#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_luxe_tween_IComponentPath
#include <luxe/tween/IComponentPath.h>
#endif
#ifndef INCLUDED_luxe_tween_actuators_GenericActuator
#include <luxe/tween/actuators/GenericActuator.h>
#endif
#ifndef INCLUDED_luxe_tween_actuators_IGenericActuator
#include <luxe/tween/actuators/IGenericActuator.h>
#endif
#ifndef INCLUDED_luxe_tween_actuators_MotionPathActuator
#include <luxe/tween/actuators/MotionPathActuator.h>
#endif
#ifndef INCLUDED_luxe_tween_actuators_PropertyDetails
#include <luxe/tween/actuators/PropertyDetails.h>
#endif
#ifndef INCLUDED_luxe_tween_actuators_PropertyPathDetails
#include <luxe/tween/actuators/PropertyPathDetails.h>
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

Void MotionPathActuator_obj::__construct(Dynamic target,Float duration,Dynamic properties)
{
HX_STACK_FRAME("luxe.tween.actuators.MotionPathActuator","new",0x32176455,"luxe.tween.actuators.MotionPathActuator.new","luxe/tween/actuators/MotionPathActuator.hx",15,0xdb065698)
HX_STACK_THIS(this)
HX_STACK_ARG(target,"target")
HX_STACK_ARG(duration,"duration")
HX_STACK_ARG(properties,"properties")
{
	HX_STACK_LINE(15)
	super::__construct(target,duration,properties);
}
;
	return null();
}

//MotionPathActuator_obj::~MotionPathActuator_obj() { }

Dynamic MotionPathActuator_obj::__CreateEmpty() { return  new MotionPathActuator_obj; }
hx::ObjectPtr< MotionPathActuator_obj > MotionPathActuator_obj::__new(Dynamic target,Float duration,Dynamic properties)
{  hx::ObjectPtr< MotionPathActuator_obj > result = new MotionPathActuator_obj();
	result->__construct(target,duration,properties);
	return result;}

Dynamic MotionPathActuator_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< MotionPathActuator_obj > result = new MotionPathActuator_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

Void MotionPathActuator_obj::apply( ){
{
		HX_STACK_FRAME("luxe.tween.actuators.MotionPathActuator","apply",0xfd03c0a3,"luxe.tween.actuators.MotionPathActuator.apply","luxe/tween/actuators/MotionPathActuator.hx",22,0xdb065698)
		HX_STACK_THIS(this)
		HX_STACK_LINE(22)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(22)
		Array< ::String > _g1 = ::Reflect_obj::fields(this->properties);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(22)
		while((true)){
			HX_STACK_LINE(22)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(22)
				break;
			}
			HX_STACK_LINE(22)
			::String propertyName = _g1->__get(_g);		HX_STACK_VAR(propertyName,"propertyName");
			HX_STACK_LINE(22)
			++(_g);
			HX_STACK_LINE(24)
			if ((::Reflect_obj::hasField(this->target,propertyName))){
				HX_STACK_LINE(26)
				Dynamic o = this->target;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(26)
				Dynamic value = (hx::TCast< luxe::tween::IComponentPath >::cast(::Reflect_obj::field(this->properties,propertyName)))->__Field(HX_CSTRING("get_end"),true)();		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(26)
				if (((o != null()))){
					HX_STACK_LINE(26)
					o->__SetField(propertyName,value,false);
				}
			}
			else{
				HX_STACK_LINE(30)
				Dynamic o = this->target;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(30)
				Dynamic value = (hx::TCast< luxe::tween::IComponentPath >::cast(::Reflect_obj::field(this->properties,propertyName)))->__Field(HX_CSTRING("get_end"),true)();		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(30)
				if (((o != null()))){
					HX_STACK_LINE(30)
					o->__SetField(propertyName,value,true);
				}
			}
		}
	}
return null();
}


Void MotionPathActuator_obj::initialize( ){
{
		HX_STACK_FRAME("luxe.tween.actuators.MotionPathActuator","initialize",0x7e2735fb,"luxe.tween.actuators.MotionPathActuator.initialize","luxe/tween/actuators/MotionPathActuator.hx",39,0xdb065698)
		HX_STACK_THIS(this)
		HX_STACK_LINE(41)
		::luxe::tween::actuators::PropertyPathDetails details;		HX_STACK_VAR(details,"details");
		HX_STACK_LINE(42)
		::luxe::tween::IComponentPath path;		HX_STACK_VAR(path,"path");
		HX_STACK_LINE(44)
		{
			HX_STACK_LINE(44)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(44)
			Array< ::String > _g1 = ::Reflect_obj::fields(this->properties);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(44)
			while((true)){
				HX_STACK_LINE(44)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(44)
					break;
				}
				HX_STACK_LINE(44)
				::String propertyName = _g1->__get(_g);		HX_STACK_VAR(propertyName,"propertyName");
				HX_STACK_LINE(44)
				++(_g);
				HX_STACK_LINE(46)
				::luxe::tween::IComponentPath _g2;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(46)
				_g2 = hx::TCast< luxe::tween::IComponentPath >::cast(::Reflect_obj::field(this->properties,propertyName));
				HX_STACK_LINE(46)
				path = _g2;
				HX_STACK_LINE(48)
				if (((path != null()))){
					HX_STACK_LINE(50)
					bool isField = true;		HX_STACK_VAR(isField,"isField");
					HX_STACK_LINE(52)
					if ((::Reflect_obj::hasField(this->target,propertyName))){
						HX_STACK_LINE(54)
						Dynamic _g11 = ::Reflect_obj::field(this->target,propertyName);		HX_STACK_VAR(_g11,"_g11");
						HX_STACK_LINE(54)
						path->__FieldRef(HX_CSTRING("start")) = _g11;
					}
					else{
						HX_STACK_LINE(58)
						isField = false;
						HX_STACK_LINE(59)
						Dynamic _g21;		HX_STACK_VAR(_g21,"_g21");
						HX_STACK_LINE(59)
						{
							HX_STACK_LINE(59)
							Dynamic o = this->target;		HX_STACK_VAR(o,"o");
							HX_STACK_LINE(59)
							if (((o == null()))){
								HX_STACK_LINE(59)
								_g21 = null();
							}
							else{
								HX_STACK_LINE(59)
								_g21 = o->__Field(propertyName,true);
							}
						}
						HX_STACK_LINE(59)
						path->__FieldRef(HX_CSTRING("start")) = _g21;
					}
					HX_STACK_LINE(64)
					::luxe::tween::actuators::PropertyPathDetails _g3 = ::luxe::tween::actuators::PropertyPathDetails_obj::__new(this->target,propertyName,path,isField);		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(64)
					details = _g3;
					HX_STACK_LINE(65)
					this->propertyDetails->push(details);
				}
			}
		}
		HX_STACK_LINE(71)
		this->detailsLength = this->propertyDetails->length;
		HX_STACK_LINE(72)
		this->initialized = true;
	}
return null();
}


Void MotionPathActuator_obj::update( Float currentTime){
{
		HX_STACK_FRAME("luxe.tween.actuators.MotionPathActuator","update",0x5d711934,"luxe.tween.actuators.MotionPathActuator.update","luxe/tween/actuators/MotionPathActuator.hx",79,0xdb065698)
		HX_STACK_THIS(this)
		HX_STACK_ARG(currentTime,"currentTime")
		HX_STACK_LINE(79)
		if ((!(this->paused))){
			HX_STACK_LINE(81)
			::luxe::tween::actuators::PropertyPathDetails details;		HX_STACK_VAR(details,"details");
			HX_STACK_LINE(82)
			Float easing;		HX_STACK_VAR(easing,"easing");
			HX_STACK_LINE(84)
			Float tweenPosition = (Float(((currentTime - this->timeOffset))) / Float(this->duration));		HX_STACK_VAR(tweenPosition,"tweenPosition");
			HX_STACK_LINE(86)
			if (((tweenPosition > (int)1))){
				HX_STACK_LINE(88)
				tweenPosition = (int)1;
			}
			HX_STACK_LINE(92)
			if ((!(this->initialized))){
				HX_STACK_LINE(94)
				this->initialize();
			}
			HX_STACK_LINE(98)
			if ((!(this->special))){
				HX_STACK_LINE(100)
				Float _g = this->_ease->calculate(tweenPosition);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(100)
				easing = _g;
				HX_STACK_LINE(102)
				{
					HX_STACK_LINE(102)
					int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(102)
					Array< ::Dynamic > _g11 = this->propertyDetails;		HX_STACK_VAR(_g11,"_g11");
					HX_STACK_LINE(102)
					while((true)){
						HX_STACK_LINE(102)
						if ((!(((_g1 < _g11->length))))){
							HX_STACK_LINE(102)
							break;
						}
						HX_STACK_LINE(102)
						::luxe::tween::actuators::PropertyDetails details1 = _g11->__get(_g1).StaticCast< ::luxe::tween::actuators::PropertyDetails >();		HX_STACK_VAR(details1,"details1");
						HX_STACK_LINE(102)
						++(_g1);
						HX_STACK_LINE(104)
						if ((details1->isField)){
							HX_STACK_LINE(106)
							Dynamic o = details1->target;		HX_STACK_VAR(o,"o");
							HX_STACK_LINE(106)
							Dynamic value = (hx::TCast< luxe::tween::actuators::PropertyPathDetails >::cast(details1))->path->calculate(easing);		HX_STACK_VAR(value,"value");
							HX_STACK_LINE(106)
							if (((o != null()))){
								HX_STACK_LINE(106)
								o->__SetField(details1->propertyName,value,false);
							}
						}
						else{
							HX_STACK_LINE(110)
							Dynamic o = details1->target;		HX_STACK_VAR(o,"o");
							HX_STACK_LINE(110)
							Dynamic value = (hx::TCast< luxe::tween::actuators::PropertyPathDetails >::cast(details1))->path->calculate(easing);		HX_STACK_VAR(value,"value");
							HX_STACK_LINE(110)
							if (((o != null()))){
								HX_STACK_LINE(110)
								o->__SetField(details1->propertyName,value,true);
							}
						}
					}
				}
			}
			else{
				HX_STACK_LINE(118)
				if ((!(this->_reverse))){
					HX_STACK_LINE(120)
					Float _g1 = this->_ease->calculate(tweenPosition);		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(120)
					easing = _g1;
				}
				else{
					HX_STACK_LINE(124)
					Float _g2 = this->_ease->calculate(((int)1 - tweenPosition));		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(124)
					easing = _g2;
				}
				HX_STACK_LINE(128)
				Float endValue;		HX_STACK_VAR(endValue,"endValue");
				HX_STACK_LINE(130)
				{
					HX_STACK_LINE(130)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(130)
					Array< ::Dynamic > _g1 = this->propertyDetails;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(130)
					while((true)){
						HX_STACK_LINE(130)
						if ((!(((_g < _g1->length))))){
							HX_STACK_LINE(130)
							break;
						}
						HX_STACK_LINE(130)
						::luxe::tween::actuators::PropertyDetails details1 = _g1->__get(_g).StaticCast< ::luxe::tween::actuators::PropertyDetails >();		HX_STACK_VAR(details1,"details1");
						HX_STACK_LINE(130)
						++(_g);
						HX_STACK_LINE(132)
						if ((!(this->_snapping))){
							HX_STACK_LINE(134)
							if ((details1->isField)){
								HX_STACK_LINE(136)
								Dynamic o = details1->target;		HX_STACK_VAR(o,"o");
								HX_STACK_LINE(136)
								Dynamic value = (hx::TCast< luxe::tween::actuators::PropertyPathDetails >::cast(details1))->path->calculate(easing);		HX_STACK_VAR(value,"value");
								HX_STACK_LINE(136)
								if (((o != null()))){
									HX_STACK_LINE(136)
									o->__SetField(details1->propertyName,value,false);
								}
							}
							else{
								HX_STACK_LINE(140)
								Dynamic o = details1->target;		HX_STACK_VAR(o,"o");
								HX_STACK_LINE(140)
								Dynamic value = (hx::TCast< luxe::tween::actuators::PropertyPathDetails >::cast(details1))->path->calculate(easing);		HX_STACK_VAR(value,"value");
								HX_STACK_LINE(140)
								if (((o != null()))){
									HX_STACK_LINE(140)
									o->__SetField(details1->propertyName,value,true);
								}
							}
						}
						else{
							HX_STACK_LINE(146)
							if ((details1->isField)){
								HX_STACK_LINE(148)
								Dynamic o = details1->target;		HX_STACK_VAR(o,"o");
								HX_STACK_LINE(148)
								Float _g3 = (hx::TCast< luxe::tween::actuators::PropertyPathDetails >::cast(details1))->path->calculate(easing);		HX_STACK_VAR(_g3,"_g3");
								HX_STACK_LINE(148)
								Dynamic value = ::Math_obj::round(_g3);		HX_STACK_VAR(value,"value");
								HX_STACK_LINE(148)
								if (((o != null()))){
									HX_STACK_LINE(148)
									o->__SetField(details1->propertyName,value,false);
								}
							}
							else{
								HX_STACK_LINE(152)
								Dynamic o = details1->target;		HX_STACK_VAR(o,"o");
								HX_STACK_LINE(152)
								Float _g4 = (hx::TCast< luxe::tween::actuators::PropertyPathDetails >::cast(details1))->path->calculate(easing);		HX_STACK_VAR(_g4,"_g4");
								HX_STACK_LINE(152)
								Dynamic value = ::Math_obj::round(_g4);		HX_STACK_VAR(value,"value");
								HX_STACK_LINE(152)
								if (((o != null()))){
									HX_STACK_LINE(152)
									o->__SetField(details1->propertyName,value,true);
								}
							}
						}
					}
				}
			}
			HX_STACK_LINE(163)
			if (((tweenPosition == (int)1))){
				HX_STACK_LINE(165)
				if (((this->_repeat == (int)0))){
					HX_STACK_LINE(167)
					this->active = false;
					struct _Function_4_1{
						inline static bool Block( hx::ObjectPtr< ::luxe::tween::actuators::MotionPathActuator_obj > __this){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/tween/actuators/MotionPathActuator.hx",169,0xdb065698)
							{
								HX_STACK_LINE(169)
								Dynamic _g7;		HX_STACK_VAR(_g7,"_g7");
								HX_STACK_LINE(169)
								{
									HX_STACK_LINE(169)
									Dynamic target = __this->target;		HX_STACK_VAR(target,"target");
									HX_STACK_LINE(169)
									Dynamic value = null();		HX_STACK_VAR(value,"value");
									HX_STACK_LINE(169)
									if ((::Reflect_obj::hasField(target,HX_CSTRING("alpha")))){
										HX_STACK_LINE(169)
										Dynamic _g5 = ::Reflect_obj::field(target,HX_CSTRING("alpha"));		HX_STACK_VAR(_g5,"_g5");
										HX_STACK_LINE(169)
										value = _g5;
									}
									else{
										HX_STACK_LINE(169)
										Dynamic _g6;		HX_STACK_VAR(_g6,"_g6");
										HX_STACK_LINE(169)
										_g6 = (  (((target == null()))) ? Dynamic(null()) : Dynamic(target->__Field(HX_CSTRING("alpha"),true)) );
										HX_STACK_LINE(169)
										value = _g6;
									}
									HX_STACK_LINE(169)
									_g7 = value;
								}
								HX_STACK_LINE(169)
								return (_g7 == (int)0);
							}
							return null();
						}
					};
					HX_STACK_LINE(169)
					if (((  ((this->toggleVisible)) ? bool(_Function_4_1::Block(this)) : bool(false) ))){
						HX_STACK_LINE(171)
						Dynamic target = this->target;		HX_STACK_VAR(target,"target");
						HX_STACK_LINE(171)
						if ((::Reflect_obj::hasField(target,HX_CSTRING("visible")))){
							HX_STACK_LINE(171)
							if (((target != null()))){
								HX_STACK_LINE(171)
								target->__SetField(HX_CSTRING("visible"),false,false);
							}
						}
						else{
							HX_STACK_LINE(171)
							if (((target != null()))){
								HX_STACK_LINE(171)
								target->__SetField(HX_CSTRING("visible"),false,true);
							}
						}
					}
					HX_STACK_LINE(175)
					this->complete(true);
					HX_STACK_LINE(176)
					return null();
				}
				else{
					HX_STACK_LINE(180)
					if ((this->_reflect)){
						HX_STACK_LINE(182)
						this->_reverse = !(this->_reverse);
					}
					HX_STACK_LINE(186)
					this->startTime = currentTime;
					HX_STACK_LINE(187)
					this->timeOffset = (this->startTime + this->_delay);
					HX_STACK_LINE(189)
					if (((this->_repeat > (int)0))){
						HX_STACK_LINE(191)
						(this->_repeat)--;
					}
				}
			}
			HX_STACK_LINE(199)
			if ((this->sendChange)){
				HX_STACK_LINE(201)
				this->change();
			}
		}
	}
return null();
}



MotionPathActuator_obj::MotionPathActuator_obj()
{
}

Dynamic MotionPathActuator_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"apply") ) { return apply_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"initialize") ) { return initialize_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic MotionPathActuator_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void MotionPathActuator_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("apply"),
	HX_CSTRING("initialize"),
	HX_CSTRING("update"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MotionPathActuator_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MotionPathActuator_obj::__mClass,"__mClass");
};

#endif

Class MotionPathActuator_obj::__mClass;

void MotionPathActuator_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("luxe.tween.actuators.MotionPathActuator"), hx::TCanCast< MotionPathActuator_obj> ,sStaticFields,sMemberFields,
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

void MotionPathActuator_obj::__boot()
{
}

} // end namespace luxe
} // end namespace tween
} // end namespace actuators
