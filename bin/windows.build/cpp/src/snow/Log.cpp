#include <hxcpp.h>

#ifndef INCLUDED_snow_Log
#include <snow/Log.h>
#endif
namespace snow{

Void Log_obj::__construct()
{
	return null();
}

//Log_obj::~Log_obj() { }

Dynamic Log_obj::__CreateEmpty() { return  new Log_obj; }
hx::ObjectPtr< Log_obj > Log_obj::__new()
{  hx::ObjectPtr< Log_obj > result = new Log_obj();
	result->__construct();
	return result;}

Dynamic Log_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Log_obj > result = new Log_obj();
	result->__construct();
	return result;}

int Log_obj::_level;

Array< ::String > Log_obj::_filter;

Array< ::String > Log_obj::_exclude;

int Log_obj::_log_width;

::String Log_obj::_get_spacing( ::String _file){
	HX_STACK_FRAME("snow.Log","_get_spacing",0xa9a62a30,"snow.Log._get_spacing","snow/Log.hx",210,0xc44c1e26)
	HX_STACK_ARG(_file,"_file")
	HX_STACK_LINE(212)
	::String _spaces = HX_CSTRING("");		HX_STACK_VAR(_spaces,"_spaces");
	HX_STACK_LINE(215)
	int _trace_length = (_file.length + (int)4);		HX_STACK_VAR(_trace_length,"_trace_length");
	HX_STACK_LINE(216)
	int _diff = (::snow::Log_obj::_log_width - _trace_length);		HX_STACK_VAR(_diff,"_diff");
	HX_STACK_LINE(217)
	if (((_diff > (int)0))){
		HX_STACK_LINE(218)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(218)
		while((true)){
			HX_STACK_LINE(218)
			if ((!(((_g < _diff))))){
				HX_STACK_LINE(218)
				break;
			}
			HX_STACK_LINE(218)
			int i = (_g)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(219)
			hx::AddEq(_spaces,HX_CSTRING(" "));
		}
	}
	HX_STACK_LINE(223)
	return _spaces;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Log_obj,_get_spacing,return )


Log_obj::Log_obj()
{
}

Dynamic Log_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"_level") ) { return _level; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_filter") ) { return _filter; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_exclude") ) { return _exclude; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_log_width") ) { return _log_width; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_get_spacing") ) { return _get_spacing_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Log_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"_level") ) { _level=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_filter") ) { _filter=inValue.Cast< Array< ::String > >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_exclude") ) { _exclude=inValue.Cast< Array< ::String > >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_log_width") ) { _log_width=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Log_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("_level"),
	HX_CSTRING("_filter"),
	HX_CSTRING("_exclude"),
	HX_CSTRING("_log_width"),
	HX_CSTRING("_get_spacing"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Log_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Log_obj::_level,"_level");
	HX_MARK_MEMBER_NAME(Log_obj::_filter,"_filter");
	HX_MARK_MEMBER_NAME(Log_obj::_exclude,"_exclude");
	HX_MARK_MEMBER_NAME(Log_obj::_log_width,"_log_width");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Log_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Log_obj::_level,"_level");
	HX_VISIT_MEMBER_NAME(Log_obj::_filter,"_filter");
	HX_VISIT_MEMBER_NAME(Log_obj::_exclude,"_exclude");
	HX_VISIT_MEMBER_NAME(Log_obj::_log_width,"_log_width");
};

#endif

Class Log_obj::__mClass;

void Log_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("snow.Log"), hx::TCanCast< Log_obj> ,sStaticFields,sMemberFields,
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

void Log_obj::__boot()
{
	_level= (int)1;
	_log_width= (int)16;
}

} // end namespace snow
