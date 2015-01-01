#include <hxcpp.h>

#ifndef INCLUDED_Luxe
#include <Luxe.h>
#endif
#ifndef INCLUDED_luxe_Emitter
#include <luxe/Emitter.h>
#endif
#ifndef INCLUDED_luxe_Objects
#include <luxe/Objects.h>
#endif
#ifndef INCLUDED_luxe_utils_Utils
#include <luxe/utils/Utils.h>
#endif
namespace luxe{

Void Objects_obj::__construct(::String __o__name,::String __o__id)
{
HX_STACK_FRAME("luxe.Objects","new",0xcbec42ee,"luxe.Objects.new","luxe/Objects.hx",21,0xf92c5f83)
HX_STACK_THIS(this)
HX_STACK_ARG(__o__name,"_name")
HX_STACK_ARG(__o__id,"_id")
::String _name = __o__name.Default(HX_CSTRING(""));
::String _id = __o__id.Default(HX_CSTRING(""));
{
	HX_STACK_LINE(26)
	this->name = HX_CSTRING("");
	HX_STACK_LINE(24)
	this->id = HX_CSTRING("");
	HX_STACK_LINE(30)
	super::__construct();
	HX_STACK_LINE(31)
	this->name = _name;
	HX_STACK_LINE(32)
	::String _g;		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(32)
	if (((_id == HX_CSTRING("")))){
		HX_STACK_LINE(32)
		_g = ::Luxe_obj::utils->uniqueid(null());
	}
	else{
		HX_STACK_LINE(32)
		_g = _id;
	}
	HX_STACK_LINE(32)
	this->id = _g;
}
;
	return null();
}

//Objects_obj::~Objects_obj() { }

Dynamic Objects_obj::__CreateEmpty() { return  new Objects_obj; }
hx::ObjectPtr< Objects_obj > Objects_obj::__new(::String __o__name,::String __o__id)
{  hx::ObjectPtr< Objects_obj > result = new Objects_obj();
	result->__construct(__o__name,__o__id);
	return result;}

Dynamic Objects_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Objects_obj > result = new Objects_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}


Objects_obj::Objects_obj()
{
}

void Objects_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Objects);
	HX_MARK_MEMBER_NAME(id,"id");
	HX_MARK_MEMBER_NAME(name,"name");
	::luxe::Emitter_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Objects_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(id,"id");
	HX_VISIT_MEMBER_NAME(name,"name");
	::luxe::Emitter_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Objects_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return id; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return name; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Objects_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< ::String >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Objects_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("id"));
	outFields->push(HX_CSTRING("name"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(Objects_obj,id),HX_CSTRING("id")},
	{hx::fsString,(int)offsetof(Objects_obj,name),HX_CSTRING("name")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("id"),
	HX_CSTRING("name"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Objects_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Objects_obj::__mClass,"__mClass");
};

#endif

Class Objects_obj::__mClass;

void Objects_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("luxe.Objects"), hx::TCanCast< Objects_obj> ,sStaticFields,sMemberFields,
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

void Objects_obj::__boot()
{
}

} // end namespace luxe
