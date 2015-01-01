#include <hxcpp.h>

#ifndef INCLUDED_Luxe
#include <Luxe.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_luxe_debug__ProfilerDebugView_ProfilerBar
#include <luxe/debug/_ProfilerDebugView/ProfilerBar.h>
#endif
#ifndef INCLUDED_luxe_debug__ProfilerDebugView_ProfilerValue
#include <luxe/debug/_ProfilerDebugView/ProfilerValue.h>
#endif
namespace luxe{
namespace debug{
namespace _ProfilerDebugView{

Void ProfilerValue_obj::__construct(::String _name,::luxe::debug::_ProfilerDebugView::ProfilerBar _bar)
{
HX_STACK_FRAME("luxe.debug._ProfilerDebugView.ProfilerValue","new",0xd1df7caf,"luxe.debug._ProfilerDebugView.ProfilerValue.new","luxe/debug/ProfilerDebugView.hx",96,0xef83e3c4)
HX_STACK_THIS(this)
HX_STACK_ARG(_name,"_name")
HX_STACK_ARG(_bar,"_bar")
{
	HX_STACK_LINE(106)
	this->accum = (int)0;
	HX_STACK_LINE(105)
	this->count = (int)0;
	HX_STACK_LINE(104)
	this->hidden = false;
	HX_STACK_LINE(103)
	this->avg = (int)10;
	HX_STACK_LINE(101)
	this->start = 0.0;
	HX_STACK_LINE(109)
	this->name = _name;
	HX_STACK_LINE(109)
	this->bar = _bar;
	HX_STACK_LINE(110)
	this->history = Array_obj< Float >::__new();
	HX_STACK_LINE(111)
	this->offsets = Array_obj< ::Dynamic >::__new();
}
;
	return null();
}

//ProfilerValue_obj::~ProfilerValue_obj() { }

Dynamic ProfilerValue_obj::__CreateEmpty() { return  new ProfilerValue_obj; }
hx::ObjectPtr< ProfilerValue_obj > ProfilerValue_obj::__new(::String _name,::luxe::debug::_ProfilerDebugView::ProfilerBar _bar)
{  hx::ObjectPtr< ProfilerValue_obj > result = new ProfilerValue_obj();
	result->__construct(_name,_bar);
	return result;}

Dynamic ProfilerValue_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ProfilerValue_obj > result = new ProfilerValue_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

Void ProfilerValue_obj::set( ){
{
		HX_STACK_FRAME("luxe.debug._ProfilerDebugView.ProfilerValue","set",0xd1e347f1,"luxe.debug._ProfilerDebugView.ProfilerValue.set","luxe/debug/ProfilerDebugView.hx",114,0xef83e3c4)
		HX_STACK_THIS(this)
		HX_STACK_LINE(116)
		Float _g = ::Luxe_obj::get_time();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(116)
		Float _t = (_g - this->start);		HX_STACK_VAR(_t,"_t");
		HX_STACK_LINE(119)
		{
			HX_STACK_LINE(119)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(119)
			Array< ::Dynamic > _g11 = this->offsets;		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(119)
			while((true)){
				HX_STACK_LINE(119)
				if ((!(((_g1 < _g11->length))))){
					HX_STACK_LINE(119)
					break;
				}
				HX_STACK_LINE(119)
				::luxe::debug::_ProfilerDebugView::ProfilerValue _offset = _g11->__get(_g1).StaticCast< ::luxe::debug::_ProfilerDebugView::ProfilerValue >();		HX_STACK_VAR(_offset,"_offset");
				HX_STACK_LINE(119)
				++(_g1);
				HX_STACK_LINE(120)
				hx::SubEq(_t,_offset->history->__get((_offset->history->length - (int)1)));
			}
		}
		HX_STACK_LINE(124)
		this->history->push(_t);
		HX_STACK_LINE(126)
		if (((this->history->length > this->avg))){
			HX_STACK_LINE(127)
			this->history->shift();
		}
		HX_STACK_LINE(130)
		(this->count)++;
		HX_STACK_LINE(132)
		if (((this->count == this->avg))){
			HX_STACK_LINE(133)
			Float __t = (Float(this->accum) / Float(this->avg));		HX_STACK_VAR(__t,"__t");
			HX_STACK_LINE(134)
			this->bar->set_value(__t);
			HX_STACK_LINE(135)
			this->bar->set_ping(__t);
			HX_STACK_LINE(136)
			this->accum = (int)0;
			HX_STACK_LINE(137)
			this->count = (int)0;
		}
		HX_STACK_LINE(140)
		hx::AddEq(this->accum,_t);
		HX_STACK_LINE(142)
		if ((this->bar->visible)){
			HX_STACK_LINE(143)
			Float _g2;		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(143)
			{
				HX_STACK_LINE(143)
				Float n = ::Math_obj::pow((int)10,(int)4);		HX_STACK_VAR(n,"n");
				HX_STACK_LINE(143)
				int _g1 = ::Std_obj::_int(((_t * (int)1000) * n));		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(143)
				_g2 = (Float(_g1) / Float(n));
			}
			HX_STACK_LINE(143)
			::String _g3 = ::Std_obj::string(_g2);		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(143)
			this->bar->set_text(_g3);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ProfilerValue_obj,set,(void))


ProfilerValue_obj::ProfilerValue_obj()
{
}

void ProfilerValue_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ProfilerValue);
	HX_MARK_MEMBER_NAME(offsets,"offsets");
	HX_MARK_MEMBER_NAME(bar,"bar");
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(start,"start");
	HX_MARK_MEMBER_NAME(history,"history");
	HX_MARK_MEMBER_NAME(avg,"avg");
	HX_MARK_MEMBER_NAME(hidden,"hidden");
	HX_MARK_MEMBER_NAME(count,"count");
	HX_MARK_MEMBER_NAME(accum,"accum");
	HX_MARK_END_CLASS();
}

void ProfilerValue_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(offsets,"offsets");
	HX_VISIT_MEMBER_NAME(bar,"bar");
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(start,"start");
	HX_VISIT_MEMBER_NAME(history,"history");
	HX_VISIT_MEMBER_NAME(avg,"avg");
	HX_VISIT_MEMBER_NAME(hidden,"hidden");
	HX_VISIT_MEMBER_NAME(count,"count");
	HX_VISIT_MEMBER_NAME(accum,"accum");
}

Dynamic ProfilerValue_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"bar") ) { return bar; }
		if (HX_FIELD_EQ(inName,"avg") ) { return avg; }
		if (HX_FIELD_EQ(inName,"set") ) { return set_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return name; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"start") ) { return start; }
		if (HX_FIELD_EQ(inName,"count") ) { return count; }
		if (HX_FIELD_EQ(inName,"accum") ) { return accum; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"hidden") ) { return hidden; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"offsets") ) { return offsets; }
		if (HX_FIELD_EQ(inName,"history") ) { return history; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ProfilerValue_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"bar") ) { bar=inValue.Cast< ::luxe::debug::_ProfilerDebugView::ProfilerBar >(); return inValue; }
		if (HX_FIELD_EQ(inName,"avg") ) { avg=inValue.Cast< int >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"start") ) { start=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"count") ) { count=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"accum") ) { accum=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"hidden") ) { hidden=inValue.Cast< bool >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"offsets") ) { offsets=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"history") ) { history=inValue.Cast< Array< Float > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ProfilerValue_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("offsets"));
	outFields->push(HX_CSTRING("bar"));
	outFields->push(HX_CSTRING("name"));
	outFields->push(HX_CSTRING("start"));
	outFields->push(HX_CSTRING("history"));
	outFields->push(HX_CSTRING("avg"));
	outFields->push(HX_CSTRING("hidden"));
	outFields->push(HX_CSTRING("count"));
	outFields->push(HX_CSTRING("accum"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(ProfilerValue_obj,offsets),HX_CSTRING("offsets")},
	{hx::fsObject /*::luxe::debug::_ProfilerDebugView::ProfilerBar*/ ,(int)offsetof(ProfilerValue_obj,bar),HX_CSTRING("bar")},
	{hx::fsString,(int)offsetof(ProfilerValue_obj,name),HX_CSTRING("name")},
	{hx::fsFloat,(int)offsetof(ProfilerValue_obj,start),HX_CSTRING("start")},
	{hx::fsObject /*Array< Float >*/ ,(int)offsetof(ProfilerValue_obj,history),HX_CSTRING("history")},
	{hx::fsInt,(int)offsetof(ProfilerValue_obj,avg),HX_CSTRING("avg")},
	{hx::fsBool,(int)offsetof(ProfilerValue_obj,hidden),HX_CSTRING("hidden")},
	{hx::fsInt,(int)offsetof(ProfilerValue_obj,count),HX_CSTRING("count")},
	{hx::fsFloat,(int)offsetof(ProfilerValue_obj,accum),HX_CSTRING("accum")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("offsets"),
	HX_CSTRING("bar"),
	HX_CSTRING("name"),
	HX_CSTRING("start"),
	HX_CSTRING("history"),
	HX_CSTRING("avg"),
	HX_CSTRING("hidden"),
	HX_CSTRING("count"),
	HX_CSTRING("accum"),
	HX_CSTRING("set"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ProfilerValue_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ProfilerValue_obj::__mClass,"__mClass");
};

#endif

Class ProfilerValue_obj::__mClass;

void ProfilerValue_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("luxe.debug._ProfilerDebugView.ProfilerValue"), hx::TCanCast< ProfilerValue_obj> ,sStaticFields,sMemberFields,
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

void ProfilerValue_obj::__boot()
{
}

} // end namespace luxe
} // end namespace debug
} // end namespace _ProfilerDebugView
