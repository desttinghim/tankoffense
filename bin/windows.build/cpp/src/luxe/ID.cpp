#include <hxcpp.h>

#ifndef INCLUDED_Luxe
#include <Luxe.h>
#endif
#ifndef INCLUDED_luxe_ID
#include <luxe/ID.h>
#endif
#ifndef INCLUDED_luxe_utils_Utils
#include <luxe/utils/Utils.h>
#endif
namespace luxe{

Void ID_obj::__construct(::String __o__name,::String __o__id)
{
HX_STACK_FRAME("luxe.ID","new",0xa0d20805,"luxe.ID.new","luxe/Objects.hx",3,0xf92c5f83)
HX_STACK_THIS(this)
HX_STACK_ARG(__o__name,"_name")
HX_STACK_ARG(__o__id,"_id")
::String _name = __o__name.Default(HX_CSTRING(""));
::String _id = __o__id.Default(HX_CSTRING(""));
{
	HX_STACK_LINE(8)
	this->name = HX_CSTRING("");
	HX_STACK_LINE(12)
	this->name = _name;
	HX_STACK_LINE(13)
	::String _g;		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(13)
	if (((_id == HX_CSTRING("")))){
		HX_STACK_LINE(13)
		_g = ::Luxe_obj::utils->uniqueid(null());
	}
	else{
		HX_STACK_LINE(13)
		_g = _id;
	}
	HX_STACK_LINE(13)
	this->id = _g;
}
;
	return null();
}

//ID_obj::~ID_obj() { }

Dynamic ID_obj::__CreateEmpty() { return  new ID_obj; }
hx::ObjectPtr< ID_obj > ID_obj::__new(::String __o__name,::String __o__id)
{  hx::ObjectPtr< ID_obj > result = new ID_obj();
	result->__construct(__o__name,__o__id);
	return result;}

Dynamic ID_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ID_obj > result = new ID_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}


ID_obj::ID_obj()
{
}

void ID_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ID);
	HX_MARK_MEMBER_NAME(id,"id");
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_END_CLASS();
}

void ID_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(id,"id");
	HX_VISIT_MEMBER_NAME(name,"name");
}

Dynamic ID_obj::__Field(const ::String &inName,bool inCallProp)
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

Dynamic ID_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
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

void ID_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("id"));
	outFields->push(HX_CSTRING("name"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(ID_obj,id),HX_CSTRING("id")},
	{hx::fsString,(int)offsetof(ID_obj,name),HX_CSTRING("name")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("id"),
	HX_CSTRING("name"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ID_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ID_obj::__mClass,"__mClass");
};

#endif

Class ID_obj::__mClass;

void ID_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("luxe.ID"), hx::TCanCast< ID_obj> ,sStaticFields,sMemberFields,
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

void ID_obj::__boot()
{
}

} // end namespace luxe
