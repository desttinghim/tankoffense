#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_haxe_ds_ObjectMap
#include <haxe/ds/ObjectMap.h>
#endif
#ifndef INCLUDED_luxe_tween_Actuate
#include <luxe/tween/Actuate.h>
#endif
#ifndef INCLUDED_luxe_tween__Actuate_TweenTimer
#include <luxe/tween/_Actuate/TweenTimer.h>
#endif
#ifndef INCLUDED_luxe_tween_actuators_GenericActuator
#include <luxe/tween/actuators/GenericActuator.h>
#endif
#ifndef INCLUDED_luxe_tween_actuators_IGenericActuator
#include <luxe/tween/actuators/IGenericActuator.h>
#endif
#ifndef INCLUDED_luxe_tween_actuators_MethodActuator
#include <luxe/tween/actuators/MethodActuator.h>
#endif
#ifndef INCLUDED_luxe_tween_actuators_MotionPathActuator
#include <luxe/tween/actuators/MotionPathActuator.h>
#endif
#ifndef INCLUDED_luxe_tween_actuators_SimpleActuator
#include <luxe/tween/actuators/SimpleActuator.h>
#endif
#ifndef INCLUDED_luxe_tween_easing_IEasing
#include <luxe/tween/easing/IEasing.h>
#endif
#ifndef INCLUDED_luxe_tween_easing_Quad
#include <luxe/tween/easing/Quad.h>
#endif
namespace luxe{
namespace tween{

Void Actuate_obj::__construct()
{
	return null();
}

//Actuate_obj::~Actuate_obj() { }

Dynamic Actuate_obj::__CreateEmpty() { return  new Actuate_obj; }
hx::ObjectPtr< Actuate_obj > Actuate_obj::__new()
{  hx::ObjectPtr< Actuate_obj > result = new Actuate_obj();
	result->__construct();
	return result;}

Dynamic Actuate_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Actuate_obj > result = new Actuate_obj();
	result->__construct();
	return result;}

::Class Actuate_obj::defaultActuator;

::luxe::tween::easing::IEasing Actuate_obj::defaultEase;

::haxe::ds::ObjectMap Actuate_obj::targetLibraries;

::luxe::tween::actuators::IGenericActuator Actuate_obj::apply( Dynamic target,Dynamic properties,::Class customActuator){
	HX_STACK_FRAME("luxe.tween.Actuate","apply",0x8cce36b4,"luxe.tween.Actuate.apply","luxe/tween/Actuate.hx",30,0x5242ff4c)
	HX_STACK_ARG(target,"target")
	HX_STACK_ARG(properties,"properties")
	HX_STACK_ARG(customActuator,"customActuator")
	HX_STACK_LINE(32)
	::luxe::tween::Actuate_obj::stop(target,properties,null(),null());
	HX_STACK_LINE(34)
	if (((customActuator == null()))){
		HX_STACK_LINE(36)
		customActuator = ::luxe::tween::Actuate_obj::defaultActuator;
	}
	HX_STACK_LINE(40)
	::luxe::tween::actuators::GenericActuator actuator = ::Type_obj::createInstance(customActuator,Dynamic( Array_obj<Dynamic>::__new().Add(target).Add((int)0).Add(properties)));		HX_STACK_VAR(actuator,"actuator");
	HX_STACK_LINE(41)
	actuator->apply();
	HX_STACK_LINE(43)
	return actuator;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Actuate_obj,apply,return )

Array< ::Dynamic > Actuate_obj::getLibrary( Dynamic target,hx::Null< bool >  __o_allowCreation){
bool allowCreation = __o_allowCreation.Default(true);
	HX_STACK_FRAME("luxe.tween.Actuate","getLibrary",0xfcd89dff,"luxe.tween.Actuate.getLibrary","luxe/tween/Actuate.hx",48,0x5242ff4c)
	HX_STACK_ARG(target,"target")
	HX_STACK_ARG(allowCreation,"allowCreation")
{
		struct _Function_1_1{
			inline static bool Block( Dynamic &target){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/tween/Actuate.hx",50,0x5242ff4c)
				{
					HX_STACK_LINE(50)
					Dynamic key = target;		HX_STACK_VAR(key,"key");
					HX_STACK_LINE(50)
					int _g = ::__hxcpp_obj_id(key);		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(50)
					return ::luxe::tween::Actuate_obj::targetLibraries->__Internal->exists(_g);
				}
				return null();
			}
		};
		HX_STACK_LINE(50)
		if (((  ((!(_Function_1_1::Block(target)))) ? bool(allowCreation) : bool(false) ))){
			HX_STACK_LINE(52)
			Array< ::Dynamic > _g1 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(52)
			::luxe::tween::Actuate_obj::targetLibraries->set(target,_g1);
		}
		HX_STACK_LINE(56)
		return ::luxe::tween::Actuate_obj::targetLibraries->get(target);
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Actuate_obj,getLibrary,return )

::luxe::tween::actuators::IGenericActuator Actuate_obj::motionPath( Dynamic target,Float duration,Dynamic properties,hx::Null< bool >  __o_overwrite){
bool overwrite = __o_overwrite.Default(true);
	HX_STACK_FRAME("luxe.tween.Actuate","motionPath",0xaa6ddbf5,"luxe.tween.Actuate.motionPath","luxe/tween/Actuate.hx",71,0x5242ff4c)
	HX_STACK_ARG(target,"target")
	HX_STACK_ARG(duration,"duration")
	HX_STACK_ARG(properties,"properties")
	HX_STACK_ARG(overwrite,"overwrite")
{
		HX_STACK_LINE(71)
		return ::luxe::tween::Actuate_obj::tween(target,duration,properties,overwrite,hx::ClassOf< ::luxe::tween::actuators::MotionPathActuator >());
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Actuate_obj,motionPath,return )

Void Actuate_obj::pause( Dynamic target){
{
		HX_STACK_FRAME("luxe.tween.Actuate","pause",0x25ea883c,"luxe.tween.Actuate.pause","luxe/tween/Actuate.hx",83,0x5242ff4c)
		HX_STACK_ARG(target,"target")
		HX_STACK_LINE(83)
		if ((::Std_obj::is(target,hx::ClassOf< ::luxe::tween::actuators::GenericActuator >()))){
			HX_STACK_LINE(85)
			(hx::TCast< luxe::tween::actuators::GenericActuator >::cast(target))->pause();
		}
		else{
			HX_STACK_LINE(89)
			Array< ::Dynamic > library = ::luxe::tween::Actuate_obj::getLibrary(target,false);		HX_STACK_VAR(library,"library");
			HX_STACK_LINE(91)
			if (((library != null()))){
				HX_STACK_LINE(93)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(93)
				while((true)){
					HX_STACK_LINE(93)
					if ((!(((_g < library->length))))){
						HX_STACK_LINE(93)
						break;
					}
					HX_STACK_LINE(93)
					::luxe::tween::actuators::GenericActuator actuator = library->__get(_g).StaticCast< ::luxe::tween::actuators::GenericActuator >();		HX_STACK_VAR(actuator,"actuator");
					HX_STACK_LINE(93)
					++(_g);
					HX_STACK_LINE(95)
					actuator->pause();
				}
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Actuate_obj,pause,(void))

Void Actuate_obj::pauseAll( ){
{
		HX_STACK_FRAME("luxe.tween.Actuate","pauseAll",0xf534f645,"luxe.tween.Actuate.pauseAll","luxe/tween/Actuate.hx",108,0x5242ff4c)
		HX_STACK_LINE(108)
		for(::cpp::FastIterator_obj< Array< ::Dynamic > > *__it = ::cpp::CreateFastIterator< Array< ::Dynamic > >(::luxe::tween::Actuate_obj::targetLibraries->iterator());  __it->hasNext(); ){
			Array< ::Dynamic > library = __it->next();
			{
				HX_STACK_LINE(110)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(110)
				while((true)){
					HX_STACK_LINE(110)
					if ((!(((_g < library->length))))){
						HX_STACK_LINE(110)
						break;
					}
					HX_STACK_LINE(110)
					::luxe::tween::actuators::GenericActuator actuator = library->__get(_g).StaticCast< ::luxe::tween::actuators::GenericActuator >();		HX_STACK_VAR(actuator,"actuator");
					HX_STACK_LINE(110)
					++(_g);
					HX_STACK_LINE(112)
					actuator->pause();
				}
			}
;
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Actuate_obj,pauseAll,(void))

Void Actuate_obj::reset( ){
{
		HX_STACK_FRAME("luxe.tween.Actuate","reset",0x4f5afb15,"luxe.tween.Actuate.reset","luxe/tween/Actuate.hx",124,0x5242ff4c)
		HX_STACK_LINE(126)
		for(::cpp::FastIterator_obj< Array< ::Dynamic > > *__it = ::cpp::CreateFastIterator< Array< ::Dynamic > >(::luxe::tween::Actuate_obj::targetLibraries->iterator());  __it->hasNext(); ){
			Array< ::Dynamic > library = __it->next();
			{
				HX_STACK_LINE(128)
				int i = (library->length - (int)1);		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(129)
				while((true)){
					HX_STACK_LINE(129)
					if ((!(((i >= (int)0))))){
						HX_STACK_LINE(129)
						break;
					}
					HX_STACK_LINE(130)
					library->__get(i).StaticCast< ::luxe::tween::actuators::GenericActuator >()->stop(null(),false,false);
					HX_STACK_LINE(131)
					(i)--;
				}
			}
;
		}
		HX_STACK_LINE(136)
		::haxe::ds::ObjectMap _g = ::haxe::ds::ObjectMap_obj::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(136)
		::luxe::tween::Actuate_obj::targetLibraries = _g;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Actuate_obj,reset,(void))

Void Actuate_obj::resume( Dynamic target){
{
		HX_STACK_FRAME("luxe.tween.Actuate","resume",0x204cd5a7,"luxe.tween.Actuate.resume","luxe/tween/Actuate.hx",147,0x5242ff4c)
		HX_STACK_ARG(target,"target")
		HX_STACK_LINE(147)
		if ((::Std_obj::is(target,hx::ClassOf< ::luxe::tween::actuators::GenericActuator >()))){
			HX_STACK_LINE(149)
			(hx::TCast< luxe::tween::actuators::GenericActuator >::cast(target))->resume();
		}
		else{
			HX_STACK_LINE(153)
			Array< ::Dynamic > library = ::luxe::tween::Actuate_obj::getLibrary(target,false);		HX_STACK_VAR(library,"library");
			HX_STACK_LINE(155)
			if (((library != null()))){
				HX_STACK_LINE(157)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(157)
				while((true)){
					HX_STACK_LINE(157)
					if ((!(((_g < library->length))))){
						HX_STACK_LINE(157)
						break;
					}
					HX_STACK_LINE(157)
					::luxe::tween::actuators::GenericActuator actuator = library->__get(_g).StaticCast< ::luxe::tween::actuators::GenericActuator >();		HX_STACK_VAR(actuator,"actuator");
					HX_STACK_LINE(157)
					++(_g);
					HX_STACK_LINE(159)
					actuator->resume();
				}
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Actuate_obj,resume,(void))

Void Actuate_obj::resumeAll( ){
{
		HX_STACK_FRAME("luxe.tween.Actuate","resumeAll",0x503a9dba,"luxe.tween.Actuate.resumeAll","luxe/tween/Actuate.hx",172,0x5242ff4c)
		HX_STACK_LINE(172)
		for(::cpp::FastIterator_obj< Array< ::Dynamic > > *__it = ::cpp::CreateFastIterator< Array< ::Dynamic > >(::luxe::tween::Actuate_obj::targetLibraries->iterator());  __it->hasNext(); ){
			Array< ::Dynamic > library = __it->next();
			{
				HX_STACK_LINE(174)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(174)
				while((true)){
					HX_STACK_LINE(174)
					if ((!(((_g < library->length))))){
						HX_STACK_LINE(174)
						break;
					}
					HX_STACK_LINE(174)
					::luxe::tween::actuators::GenericActuator actuator = library->__get(_g).StaticCast< ::luxe::tween::actuators::GenericActuator >();		HX_STACK_VAR(actuator,"actuator");
					HX_STACK_LINE(174)
					++(_g);
					HX_STACK_LINE(176)
					actuator->resume();
				}
			}
;
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Actuate_obj,resumeAll,(void))

Void Actuate_obj::stop( Dynamic target,Dynamic properties,hx::Null< bool >  __o_complete,hx::Null< bool >  __o_sendEvent){
bool complete = __o_complete.Default(false);
bool sendEvent = __o_sendEvent.Default(true);
	HX_STACK_FRAME("luxe.tween.Actuate","stop",0x64ef897c,"luxe.tween.Actuate.stop","luxe/tween/Actuate.hx",194,0x5242ff4c)
	HX_STACK_ARG(target,"target")
	HX_STACK_ARG(properties,"properties")
	HX_STACK_ARG(complete,"complete")
	HX_STACK_ARG(sendEvent,"sendEvent")
{
		HX_STACK_LINE(194)
		if (((target != null()))){
			HX_STACK_LINE(196)
			if ((::Std_obj::is(target,hx::ClassOf< ::luxe::tween::actuators::GenericActuator >()))){
				HX_STACK_LINE(198)
				(hx::TCast< luxe::tween::actuators::GenericActuator >::cast(target))->stop(null(),complete,sendEvent);
			}
			else{
				HX_STACK_LINE(202)
				Array< ::Dynamic > library = ::luxe::tween::Actuate_obj::getLibrary(target,false);		HX_STACK_VAR(library,"library");
				HX_STACK_LINE(204)
				if (((library != null()))){
					HX_STACK_LINE(206)
					if ((::Std_obj::is(properties,hx::ClassOf< ::String >()))){
						struct _Function_5_1{
							inline static Dynamic Block( ){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/tween/Actuate.hx",208,0x5242ff4c)
								{
									hx::Anon __result = hx::Anon_obj::Create();
									return __result;
								}
								return null();
							}
						};
						HX_STACK_LINE(208)
						Dynamic temp = _Function_5_1::Block();		HX_STACK_VAR(temp,"temp");
						HX_STACK_LINE(209)
						{
							HX_STACK_LINE(209)
							::String field = properties;		HX_STACK_VAR(field,"field");
							HX_STACK_LINE(209)
							if (((temp != null()))){
								HX_STACK_LINE(209)
								temp->__SetField(field,null(),false);
							}
						}
						HX_STACK_LINE(210)
						properties = temp;
					}
					else{
						HX_STACK_LINE(212)
						if ((::Std_obj::is(properties,hx::ClassOf< Array<int> >()))){
							struct _Function_6_1{
								inline static Dynamic Block( ){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/tween/Actuate.hx",214,0x5242ff4c)
									{
										hx::Anon __result = hx::Anon_obj::Create();
										return __result;
									}
									return null();
								}
							};
							HX_STACK_LINE(214)
							Dynamic temp = _Function_6_1::Block();		HX_STACK_VAR(temp,"temp");
							HX_STACK_LINE(216)
							{
								HX_STACK_LINE(216)
								int _g = (int)0;		HX_STACK_VAR(_g,"_g");
								HX_STACK_LINE(216)
								Dynamic _g1;		HX_STACK_VAR(_g1,"_g1");
								HX_STACK_LINE(216)
								_g1 = hx::TCastToArray(properties);
								HX_STACK_LINE(216)
								while((true)){
									HX_STACK_LINE(216)
									if ((!(((_g < _g1->__Field(HX_CSTRING("length"),true)))))){
										HX_STACK_LINE(216)
										break;
									}
									HX_STACK_LINE(216)
									Dynamic property = _g1->__GetItem(_g);		HX_STACK_VAR(property,"property");
									HX_STACK_LINE(216)
									++(_g);
									HX_STACK_LINE(218)
									{
										HX_STACK_LINE(218)
										::String field = property;		HX_STACK_VAR(field,"field");
										HX_STACK_LINE(218)
										if (((temp != null()))){
											HX_STACK_LINE(218)
											temp->__SetField(field,null(),false);
										}
									}
								}
							}
							HX_STACK_LINE(222)
							properties = temp;
						}
					}
					HX_STACK_LINE(226)
					int i = (library->length - (int)1);		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(227)
					while((true)){
						HX_STACK_LINE(227)
						if ((!(((i >= (int)0))))){
							HX_STACK_LINE(227)
							break;
						}
						HX_STACK_LINE(228)
						library->__get(i).StaticCast< ::luxe::tween::actuators::GenericActuator >()->stop(properties,complete,sendEvent);
						HX_STACK_LINE(229)
						(i)--;
					}
				}
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Actuate_obj,stop,(void))

::luxe::tween::actuators::IGenericActuator Actuate_obj::timer( Float duration,::Class customActuator){
	HX_STACK_FRAME("luxe.tween.Actuate","timer",0x78c8710b,"luxe.tween.Actuate.timer","luxe/tween/Actuate.hx",248,0x5242ff4c)
	HX_STACK_ARG(duration,"duration")
	HX_STACK_ARG(customActuator,"customActuator")
	HX_STACK_LINE(250)
	::luxe::tween::_Actuate::TweenTimer _g = ::luxe::tween::_Actuate::TweenTimer_obj::__new((int)0);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(250)
	::luxe::tween::_Actuate::TweenTimer _g1 = ::luxe::tween::_Actuate::TweenTimer_obj::__new((int)1);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(250)
	return ::luxe::tween::Actuate_obj::tween(_g,duration,_g1,false,customActuator);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Actuate_obj,timer,return )

::luxe::tween::actuators::IGenericActuator Actuate_obj::tween( Dynamic target,Float duration,Dynamic properties,hx::Null< bool >  __o_overwrite,::Class customActuator){
bool overwrite = __o_overwrite.Default(true);
	HX_STACK_FRAME("luxe.tween.Actuate","tween",0x82035bb1,"luxe.tween.Actuate.tween","luxe/tween/Actuate.hx",266,0x5242ff4c)
	HX_STACK_ARG(target,"target")
	HX_STACK_ARG(duration,"duration")
	HX_STACK_ARG(properties,"properties")
	HX_STACK_ARG(overwrite,"overwrite")
	HX_STACK_ARG(customActuator,"customActuator")
{
		HX_STACK_LINE(268)
		if (((target != null()))){
			HX_STACK_LINE(270)
			if (((duration > (int)0))){
				HX_STACK_LINE(272)
				if (((customActuator == null()))){
					HX_STACK_LINE(274)
					customActuator = ::luxe::tween::Actuate_obj::defaultActuator;
				}
				HX_STACK_LINE(278)
				::luxe::tween::actuators::GenericActuator actuator = ::Type_obj::createInstance(customActuator,Dynamic( Array_obj<Dynamic>::__new().Add(target).Add(duration).Add(properties)));		HX_STACK_VAR(actuator,"actuator");
				HX_STACK_LINE(279)
				Array< ::Dynamic > library = ::luxe::tween::Actuate_obj::getLibrary(actuator->target,null());		HX_STACK_VAR(library,"library");
				HX_STACK_LINE(281)
				if ((overwrite)){
					HX_STACK_LINE(283)
					int i = (library->length - (int)1);		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(285)
					while((true)){
						HX_STACK_LINE(285)
						if ((!(((i >= (int)0))))){
							HX_STACK_LINE(285)
							break;
						}
						HX_STACK_LINE(286)
						library->__get(i).StaticCast< ::luxe::tween::actuators::GenericActuator >()->stop(actuator->properties,false,false);
						HX_STACK_LINE(287)
						(i)--;
					}
					HX_STACK_LINE(290)
					Array< ::Dynamic > _g = ::luxe::tween::Actuate_obj::getLibrary(actuator->target,null());		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(290)
					library = _g;
				}
				HX_STACK_LINE(294)
				library->push(actuator);
				HX_STACK_LINE(295)
				actuator->move();
				HX_STACK_LINE(310)
				return actuator;
			}
			else{
				HX_STACK_LINE(314)
				return ::luxe::tween::Actuate_obj::apply(target,properties,customActuator);
			}
		}
		HX_STACK_LINE(320)
		return null();
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(Actuate_obj,tween,return )

Void Actuate_obj::unload( ::luxe::tween::actuators::GenericActuator actuator){
{
		HX_STACK_FRAME("luxe.tween.Actuate","unload",0x7d550cf9,"luxe.tween.Actuate.unload","luxe/tween/Actuate.hx",325,0x5242ff4c)
		HX_STACK_ARG(actuator,"actuator")
		HX_STACK_LINE(327)
		Dynamic target = actuator->target;		HX_STACK_VAR(target,"target");
		HX_STACK_LINE(329)
		int _g = ::__hxcpp_obj_id(target);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(329)
		if ((::luxe::tween::Actuate_obj::targetLibraries->__Internal->exists(_g))){
			HX_STACK_LINE(331)
			::luxe::tween::Actuate_obj::targetLibraries->get(target)->__Field(HX_CSTRING("remove"),true)(actuator);
			HX_STACK_LINE(333)
			if (((::luxe::tween::Actuate_obj::targetLibraries->get(target)->__Field(HX_CSTRING("length"),true) == (int)0))){
				HX_STACK_LINE(335)
				::luxe::tween::Actuate_obj::targetLibraries->remove(target);
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Actuate_obj,unload,(void))

::luxe::tween::actuators::IGenericActuator Actuate_obj::update( Dynamic target,Float duration,Dynamic start,Dynamic end,hx::Null< bool >  __o_overwrite){
bool overwrite = __o_overwrite.Default(true);
	HX_STACK_FRAME("luxe.tween.Actuate","update",0x9ecdf203,"luxe.tween.Actuate.update","luxe/tween/Actuate.hx",354,0x5242ff4c)
	HX_STACK_ARG(target,"target")
	HX_STACK_ARG(duration,"duration")
	HX_STACK_ARG(start,"start")
	HX_STACK_ARG(end,"end")
	HX_STACK_ARG(overwrite,"overwrite")
{
		struct _Function_1_1{
			inline static Dynamic Block( Dynamic &end,Dynamic &start){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/tween/Actuate.hx",356,0x5242ff4c)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("start") , start,false);
					__result->Add(HX_CSTRING("end") , end,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(356)
		Dynamic properties = _Function_1_1::Block(end,start);		HX_STACK_VAR(properties,"properties");
		HX_STACK_LINE(358)
		return ::luxe::tween::Actuate_obj::tween(target,duration,properties,overwrite,hx::ClassOf< ::luxe::tween::actuators::MethodActuator >());
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(Actuate_obj,update,return )


Actuate_obj::Actuate_obj()
{
}

Dynamic Actuate_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"stop") ) { return stop_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"apply") ) { return apply_dyn(); }
		if (HX_FIELD_EQ(inName,"pause") ) { return pause_dyn(); }
		if (HX_FIELD_EQ(inName,"reset") ) { return reset_dyn(); }
		if (HX_FIELD_EQ(inName,"timer") ) { return timer_dyn(); }
		if (HX_FIELD_EQ(inName,"tween") ) { return tween_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"resume") ) { return resume_dyn(); }
		if (HX_FIELD_EQ(inName,"unload") ) { return unload_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"pauseAll") ) { return pauseAll_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"resumeAll") ) { return resumeAll_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"getLibrary") ) { return getLibrary_dyn(); }
		if (HX_FIELD_EQ(inName,"motionPath") ) { return motionPath_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"defaultEase") ) { return defaultEase; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"defaultActuator") ) { return defaultActuator; }
		if (HX_FIELD_EQ(inName,"targetLibraries") ) { return targetLibraries; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Actuate_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"defaultEase") ) { defaultEase=inValue.Cast< ::luxe::tween::easing::IEasing >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"defaultActuator") ) { defaultActuator=inValue.Cast< ::Class >(); return inValue; }
		if (HX_FIELD_EQ(inName,"targetLibraries") ) { targetLibraries=inValue.Cast< ::haxe::ds::ObjectMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Actuate_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("defaultActuator"),
	HX_CSTRING("defaultEase"),
	HX_CSTRING("targetLibraries"),
	HX_CSTRING("apply"),
	HX_CSTRING("getLibrary"),
	HX_CSTRING("motionPath"),
	HX_CSTRING("pause"),
	HX_CSTRING("pauseAll"),
	HX_CSTRING("reset"),
	HX_CSTRING("resume"),
	HX_CSTRING("resumeAll"),
	HX_CSTRING("stop"),
	HX_CSTRING("timer"),
	HX_CSTRING("tween"),
	HX_CSTRING("unload"),
	HX_CSTRING("update"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Actuate_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Actuate_obj::defaultActuator,"defaultActuator");
	HX_MARK_MEMBER_NAME(Actuate_obj::defaultEase,"defaultEase");
	HX_MARK_MEMBER_NAME(Actuate_obj::targetLibraries,"targetLibraries");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Actuate_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Actuate_obj::defaultActuator,"defaultActuator");
	HX_VISIT_MEMBER_NAME(Actuate_obj::defaultEase,"defaultEase");
	HX_VISIT_MEMBER_NAME(Actuate_obj::targetLibraries,"targetLibraries");
};

#endif

Class Actuate_obj::__mClass;

void Actuate_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("luxe.tween.Actuate"), hx::TCanCast< Actuate_obj> ,sStaticFields,sMemberFields,
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

void Actuate_obj::__boot()
{
	defaultActuator= hx::ClassOf< ::luxe::tween::actuators::SimpleActuator >();
	defaultEase= ::luxe::tween::easing::Quad_obj::get_easeOut();
	targetLibraries= ::haxe::ds::ObjectMap_obj::__new();
}

} // end namespace luxe
} // end namespace tween
