#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_Lambda
#include <Lambda.h>
#endif
#ifndef INCLUDED_Luxe
#include <Luxe.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_luxe_Debug
#include <luxe/Debug.h>
#endif
#ifndef INCLUDED_luxe_Emitter
#include <luxe/Emitter.h>
#endif
#ifndef INCLUDED_luxe_Objects
#include <luxe/Objects.h>
#endif
#ifndef INCLUDED_luxe_debug_DebugView
#include <luxe/debug/DebugView.h>
#endif
#ifndef INCLUDED_luxe_debug_ProfilerDebugView
#include <luxe/debug/ProfilerDebugView.h>
#endif
#ifndef INCLUDED_luxe_debug__ProfilerDebugView_ProfilerBar
#include <luxe/debug/_ProfilerDebugView/ProfilerBar.h>
#endif
#ifndef INCLUDED_luxe_debug__ProfilerDebugView_ProfilerValue
#include <luxe/debug/_ProfilerDebugView/ProfilerValue.h>
#endif
#ifndef INCLUDED_phoenix_Color
#include <phoenix/Color.h>
#endif
#ifndef INCLUDED_phoenix_Vector
#include <phoenix/Vector.h>
#endif
namespace luxe{
namespace debug{

Void ProfilerDebugView_obj::__construct()
{
HX_STACK_FRAME("luxe.debug.ProfilerDebugView","new",0x4a00bf2e,"luxe.debug.ProfilerDebugView.new","luxe/debug/ProfilerDebugView.hx",12,0xef83e3c4)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(24)
	this->_setup = false;
	HX_STACK_LINE(18)
	super::__construct();
	HX_STACK_LINE(20)
	this->name = HX_CSTRING("Profiler");
	HX_STACK_LINE(21)
	::haxe::ds::StringMap _g = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(21)
	::luxe::debug::ProfilerDebugView_obj::lists = _g;
}
;
	return null();
}

//ProfilerDebugView_obj::~ProfilerDebugView_obj() { }

Dynamic ProfilerDebugView_obj::__CreateEmpty() { return  new ProfilerDebugView_obj; }
hx::ObjectPtr< ProfilerDebugView_obj > ProfilerDebugView_obj::__new()
{  hx::ObjectPtr< ProfilerDebugView_obj > result = new ProfilerDebugView_obj();
	result->__construct();
	return result;}

Dynamic ProfilerDebugView_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ProfilerDebugView_obj > result = new ProfilerDebugView_obj();
	result->__construct();
	return result;}

Void ProfilerDebugView_obj::show( ){
{
		HX_STACK_FRAME("luxe.debug.ProfilerDebugView","show",0x79f6da6f,"luxe.debug.ProfilerDebugView.show","luxe/debug/ProfilerDebugView.hx",73,0xef83e3c4)
		HX_STACK_THIS(this)
		HX_STACK_LINE(74)
		for(::cpp::FastIterator_obj< ::luxe::debug::_ProfilerDebugView::ProfilerValue > *__it = ::cpp::CreateFastIterator< ::luxe::debug::_ProfilerDebugView::ProfilerValue >(::luxe::debug::ProfilerDebugView_obj::lists->iterator());  __it->hasNext(); ){
			::luxe::debug::_ProfilerDebugView::ProfilerValue _item = __it->next();
			if ((!(_item->hidden))){
				HX_STACK_LINE(76)
				_item->bar->show();
			}
;
		}
		HX_STACK_LINE(80)
		if ((!(this->_setup))){
			HX_STACK_LINE(81)
			::luxe::debug::ProfilerDebugView_obj::add_offset(HX_CSTRING("core.render"),HX_CSTRING("batch.debug_batcher"));
			HX_STACK_LINE(85)
			this->_setup = true;
		}
	}
return null();
}


Void ProfilerDebugView_obj::hide( ){
{
		HX_STACK_FRAME("luxe.debug.ProfilerDebugView","hide",0x72b23a34,"luxe.debug.ProfilerDebugView.hide","luxe/debug/ProfilerDebugView.hx",89,0xef83e3c4)
		HX_STACK_THIS(this)
		HX_STACK_LINE(89)
		for(::cpp::FastIterator_obj< ::luxe::debug::_ProfilerDebugView::ProfilerValue > *__it = ::cpp::CreateFastIterator< ::luxe::debug::_ProfilerDebugView::ProfilerValue >(::luxe::debug::ProfilerDebugView_obj::lists->iterator());  __it->hasNext(); ){
			::luxe::debug::_ProfilerDebugView::ProfilerValue _item = __it->next();
			_item->bar->hide();
		}
	}
return null();
}


::haxe::ds::StringMap ProfilerDebugView_obj::lists;

Void ProfilerDebugView_obj::add_offset( ::String _id,::String _offset){
{
		HX_STACK_FRAME("luxe.debug.ProfilerDebugView","add_offset",0xd9745423,"luxe.debug.ProfilerDebugView.add_offset","luxe/debug/ProfilerDebugView.hx",26,0xef83e3c4)
		HX_STACK_ARG(_id,"_id")
		HX_STACK_ARG(_offset,"_offset")
		HX_STACK_LINE(27)
		::luxe::debug::_ProfilerDebugView::ProfilerValue _item = ::luxe::debug::ProfilerDebugView_obj::lists->get(_id);		HX_STACK_VAR(_item,"_item");
		HX_STACK_LINE(28)
		::luxe::debug::_ProfilerDebugView::ProfilerValue _offsetitem = ::luxe::debug::ProfilerDebugView_obj::lists->get(_offset);		HX_STACK_VAR(_offsetitem,"_offsetitem");
		HX_STACK_LINE(29)
		if (((bool((_item != null())) && bool((_offsetitem != null()))))){
			HX_STACK_LINE(30)
			_item->offsets->push(_offsetitem);
		}
		else{
			HX_STACK_LINE(32)
			::haxe::Log_obj::trace((((HX_CSTRING("not found for ") + _id) + HX_CSTRING(" or ")) + _offset),hx::SourceInfo(HX_CSTRING("ProfilerDebugView.hx"),32,HX_CSTRING("luxe.debug.ProfilerDebugView"),HX_CSTRING("add_offset")));
			HX_STACK_LINE(33)
			::String _g = ::Std_obj::string(_item);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(33)
			::String _g1 = (_g + HX_CSTRING(" / "));		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(33)
			::String _g2 = ::Std_obj::string(_offsetitem);		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(33)
			::String _g3 = (_g1 + _g2);		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(33)
			::haxe::Log_obj::trace(_g3,hx::SourceInfo(HX_CSTRING("ProfilerDebugView.hx"),33,HX_CSTRING("luxe.debug.ProfilerDebugView"),HX_CSTRING("add_offset")));
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ProfilerDebugView_obj,add_offset,(void))

Void ProfilerDebugView_obj::hide_item( ::String _id){
{
		HX_STACK_FRAME("luxe.debug.ProfilerDebugView","hide_item",0xfe5b2a3e,"luxe.debug.ProfilerDebugView.hide_item","luxe/debug/ProfilerDebugView.hx",37,0xef83e3c4)
		HX_STACK_ARG(_id,"_id")
		HX_STACK_LINE(38)
		::luxe::debug::_ProfilerDebugView::ProfilerValue _item = ::luxe::debug::ProfilerDebugView_obj::lists->get(_id);		HX_STACK_VAR(_item,"_item");
		HX_STACK_LINE(39)
		if (((_item != null()))){
			HX_STACK_LINE(40)
			_item->hidden = true;
			HX_STACK_LINE(41)
			_item->bar->hide();
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ProfilerDebugView_obj,hide_item,(void))

Void ProfilerDebugView_obj::show_item( ::String _id){
{
		HX_STACK_FRAME("luxe.debug.ProfilerDebugView","show_item",0xd160d423,"luxe.debug.ProfilerDebugView.show_item","luxe/debug/ProfilerDebugView.hx",44,0xef83e3c4)
		HX_STACK_ARG(_id,"_id")
		HX_STACK_LINE(45)
		::luxe::debug::_ProfilerDebugView::ProfilerValue _item = ::luxe::debug::ProfilerDebugView_obj::lists->get(_id);		HX_STACK_VAR(_item,"_item");
		HX_STACK_LINE(46)
		if (((_item != null()))){
			HX_STACK_LINE(47)
			_item->hidden = false;
			HX_STACK_LINE(48)
			_item->bar->show();
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ProfilerDebugView_obj,show_item,(void))

Void ProfilerDebugView_obj::start( ::String _id,Dynamic __o__max){
Dynamic _max = __o__max.Default(0.0);
	HX_STACK_FRAME("luxe.debug.ProfilerDebugView","start",0x45ec32b0,"luxe.debug.ProfilerDebugView.start","luxe/debug/ProfilerDebugView.hx",52,0xef83e3c4)
	HX_STACK_ARG(_id,"_id")
	HX_STACK_ARG(_max,"_max")
{
		HX_STACK_LINE(53)
		::luxe::debug::_ProfilerDebugView::ProfilerValue _item = ::luxe::debug::ProfilerDebugView_obj::lists->get(_id);		HX_STACK_VAR(_item,"_item");
		HX_STACK_LINE(54)
		if (((_item == null()))){
			HX_STACK_LINE(56)
			::phoenix::Color _g = ::phoenix::Color_obj::__new(null(),null(),null(),null())->rgb((int)16121979);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(56)
			::luxe::debug::_ProfilerDebugView::ProfilerBar _g1 = ::luxe::debug::_ProfilerDebugView::ProfilerBar_obj::__new(_id,_max,_g);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(56)
			::luxe::debug::_ProfilerDebugView::ProfilerValue _g2 = ::luxe::debug::_ProfilerDebugView::ProfilerValue_obj::__new(_id,_g1);		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(56)
			_item = _g2;
			HX_STACK_LINE(57)
			int _g3 = ::Lambda_obj::count(::luxe::debug::ProfilerDebugView_obj::lists,null());		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(57)
			int _g4 = (_g3 * (int)20);		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(57)
			Float _g5 = ((::Luxe_obj::debug->padding->y * (int)3) + _g4);		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(57)
			::phoenix::Vector _g6 = ::phoenix::Vector_obj::__new((::Luxe_obj::debug->padding->x * (int)2),_g5,null(),null());		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(57)
			_item->bar->set_pos(_g6);
			HX_STACK_LINE(58)
			::luxe::debug::ProfilerDebugView_obj::lists->set(_id,_item);
		}
		HX_STACK_LINE(61)
		Float _g7 = ::Luxe_obj::get_time();		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(61)
		_item->start = _g7;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ProfilerDebugView_obj,start,(void))

Void ProfilerDebugView_obj::end( ::String _id){
{
		HX_STACK_FRAME("luxe.debug.ProfilerDebugView","end",0x49f9f2a9,"luxe.debug.ProfilerDebugView.end","luxe/debug/ProfilerDebugView.hx",64,0xef83e3c4)
		HX_STACK_ARG(_id,"_id")
		HX_STACK_LINE(65)
		::luxe::debug::_ProfilerDebugView::ProfilerValue _item = ::luxe::debug::ProfilerDebugView_obj::lists->get(_id);		HX_STACK_VAR(_item,"_item");
		HX_STACK_LINE(66)
		if (((_item != null()))){
			HX_STACK_LINE(67)
			_item->set();
		}
		else{
			HX_STACK_LINE(69)
			HX_STACK_DO_THROW(((HX_CSTRING("Profile end called for ") + _id) + HX_CSTRING(" but no start called")));
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ProfilerDebugView_obj,end,(void))


ProfilerDebugView_obj::ProfilerDebugView_obj()
{
}

Dynamic ProfilerDebugView_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"end") ) { return end_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"show") ) { return show_dyn(); }
		if (HX_FIELD_EQ(inName,"hide") ) { return hide_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"lists") ) { return lists; }
		if (HX_FIELD_EQ(inName,"start") ) { return start_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_setup") ) { return _setup; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"hide_item") ) { return hide_item_dyn(); }
		if (HX_FIELD_EQ(inName,"show_item") ) { return show_item_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"add_offset") ) { return add_offset_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ProfilerDebugView_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"lists") ) { lists=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_setup") ) { _setup=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ProfilerDebugView_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_setup"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("lists"),
	HX_CSTRING("add_offset"),
	HX_CSTRING("hide_item"),
	HX_CSTRING("show_item"),
	HX_CSTRING("start"),
	HX_CSTRING("end"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(ProfilerDebugView_obj,_setup),HX_CSTRING("_setup")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("_setup"),
	HX_CSTRING("show"),
	HX_CSTRING("hide"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ProfilerDebugView_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ProfilerDebugView_obj::lists,"lists");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ProfilerDebugView_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ProfilerDebugView_obj::lists,"lists");
};

#endif

Class ProfilerDebugView_obj::__mClass;

void ProfilerDebugView_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("luxe.debug.ProfilerDebugView"), hx::TCanCast< ProfilerDebugView_obj> ,sStaticFields,sMemberFields,
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

void ProfilerDebugView_obj::__boot()
{
}

} // end namespace luxe
} // end namespace debug
