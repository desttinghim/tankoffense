#include <hxcpp.h>

#ifndef INCLUDED_luxe_tween_IComponentPath
#include <luxe/tween/IComponentPath.h>
#endif
#ifndef INCLUDED_luxe_tween_actuators_PropertyDetails
#include <luxe/tween/actuators/PropertyDetails.h>
#endif
#ifndef INCLUDED_luxe_tween_actuators_PropertyPathDetails
#include <luxe/tween/actuators/PropertyPathDetails.h>
#endif
namespace luxe{
namespace tween{
namespace actuators{

Void PropertyPathDetails_obj::__construct(Dynamic target,::String propertyName,::luxe::tween::IComponentPath path,hx::Null< bool >  __o_isField)
{
HX_STACK_FRAME("luxe.tween.actuators.PropertyPathDetails","new",0x45a6c34b,"luxe.tween.actuators.PropertyPathDetails.new","luxe/tween/actuators/MotionPathActuator.hx",224,0xdb065698)
HX_STACK_THIS(this)
HX_STACK_ARG(target,"target")
HX_STACK_ARG(propertyName,"propertyName")
HX_STACK_ARG(path,"path")
HX_STACK_ARG(__o_isField,"isField")
bool isField = __o_isField.Default(true);
{
	HX_STACK_LINE(226)
	super::__construct(target,propertyName,(int)0,(int)0,isField);
	HX_STACK_LINE(228)
	this->path = path;
}
;
	return null();
}

//PropertyPathDetails_obj::~PropertyPathDetails_obj() { }

Dynamic PropertyPathDetails_obj::__CreateEmpty() { return  new PropertyPathDetails_obj; }
hx::ObjectPtr< PropertyPathDetails_obj > PropertyPathDetails_obj::__new(Dynamic target,::String propertyName,::luxe::tween::IComponentPath path,hx::Null< bool >  __o_isField)
{  hx::ObjectPtr< PropertyPathDetails_obj > result = new PropertyPathDetails_obj();
	result->__construct(target,propertyName,path,__o_isField);
	return result;}

Dynamic PropertyPathDetails_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< PropertyPathDetails_obj > result = new PropertyPathDetails_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return result;}


PropertyPathDetails_obj::PropertyPathDetails_obj()
{
}

void PropertyPathDetails_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(PropertyPathDetails);
	HX_MARK_MEMBER_NAME(path,"path");
	::luxe::tween::actuators::PropertyDetails_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void PropertyPathDetails_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(path,"path");
	::luxe::tween::actuators::PropertyDetails_obj::__Visit(HX_VISIT_ARG);
}

Dynamic PropertyPathDetails_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"path") ) { return path; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic PropertyPathDetails_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"path") ) { path=inValue.Cast< ::luxe::tween::IComponentPath >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void PropertyPathDetails_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("path"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::luxe::tween::IComponentPath*/ ,(int)offsetof(PropertyPathDetails_obj,path),HX_CSTRING("path")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("path"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PropertyPathDetails_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PropertyPathDetails_obj::__mClass,"__mClass");
};

#endif

Class PropertyPathDetails_obj::__mClass;

void PropertyPathDetails_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("luxe.tween.actuators.PropertyPathDetails"), hx::TCanCast< PropertyPathDetails_obj> ,sStaticFields,sMemberFields,
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

void PropertyPathDetails_obj::__boot()
{
}

} // end namespace luxe
} // end namespace tween
} // end namespace actuators
