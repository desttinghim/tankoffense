#include <hxcpp.h>

#ifndef INCLUDED_Luxe
#include <Luxe.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_luxe_Debug
#include <luxe/Debug.h>
#endif
#ifndef INCLUDED_luxe_Emitter
#include <luxe/Emitter.h>
#endif
#ifndef INCLUDED_luxe_Entity
#include <luxe/Entity.h>
#endif
#ifndef INCLUDED_luxe_Objects
#include <luxe/Objects.h>
#endif
#ifndef INCLUDED_luxe_Screen
#include <luxe/Screen.h>
#endif
#ifndef INCLUDED_luxe_Text
#include <luxe/Text.h>
#endif
#ifndef INCLUDED_luxe_Visual
#include <luxe/Visual.h>
#endif
#ifndef INCLUDED_luxe_debug_DebugView
#include <luxe/debug/DebugView.h>
#endif
#ifndef INCLUDED_luxe_debug_TraceDebugView
#include <luxe/debug/TraceDebugView.h>
#endif
#ifndef INCLUDED_luxe_resource_Resource
#include <luxe/resource/Resource.h>
#endif
#ifndef INCLUDED_phoenix_Batcher
#include <phoenix/Batcher.h>
#endif
#ifndef INCLUDED_phoenix_BitmapFont
#include <phoenix/BitmapFont.h>
#endif
#ifndef INCLUDED_phoenix_Color
#include <phoenix/Color.h>
#endif
#ifndef INCLUDED_phoenix_Rectangle
#include <phoenix/Rectangle.h>
#endif
#ifndef INCLUDED_phoenix_Renderer
#include <phoenix/Renderer.h>
#endif
#ifndef INCLUDED_phoenix_Vector
#include <phoenix/Vector.h>
#endif
#ifndef INCLUDED_phoenix_geometry_Geometry
#include <phoenix/geometry/Geometry.h>
#endif
namespace luxe{
namespace debug{

Void TraceDebugView_obj::__construct()
{
HX_STACK_FRAME("luxe.debug.TraceDebugView","new",0x1ecd5698,"luxe.debug.TraceDebugView.new","luxe/debug/TraceDebugView.hx",3,0x3d0b52d6)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(70)
	this->_last_logged_length = (int)0;
	HX_STACK_LINE(8)
	this->max_lines = (int)35;
	HX_STACK_LINE(12)
	super::__construct();
	HX_STACK_LINE(14)
	this->name = HX_CSTRING("Log");
	HX_STACK_LINE(16)
	::Luxe_obj::debug->add_trace_listener(HX_CSTRING("TraceDebugView"),this->on_trace_dyn());
	HX_STACK_LINE(18)
	Array< ::String > _g = Array_obj< ::String >::__new();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(18)
	this->logged = _g;
	HX_STACK_LINE(20)
	this->add_line(((HX_CSTRING("luxe version ") + ::Luxe_obj::build) + HX_CSTRING(" Debug Log")));
}
;
	return null();
}

//TraceDebugView_obj::~TraceDebugView_obj() { }

Dynamic TraceDebugView_obj::__CreateEmpty() { return  new TraceDebugView_obj; }
hx::ObjectPtr< TraceDebugView_obj > TraceDebugView_obj::__new()
{  hx::ObjectPtr< TraceDebugView_obj > result = new TraceDebugView_obj();
	result->__construct();
	return result;}

Dynamic TraceDebugView_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TraceDebugView_obj > result = new TraceDebugView_obj();
	result->__construct();
	return result;}

Void TraceDebugView_obj::on_trace( Dynamic v,Dynamic inf){
{
		HX_STACK_FRAME("luxe.debug.TraceDebugView","on_trace",0xbe5c46ed,"luxe.debug.TraceDebugView.on_trace","luxe/debug/TraceDebugView.hx",24,0x3d0b52d6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(v,"v")
		HX_STACK_ARG(inf,"inf")
		HX_STACK_LINE(25)
		::String _g = ::Std_obj::string(v);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(25)
		::String _g1 = ((((inf->__Field(HX_CSTRING("fileName"),true) + HX_CSTRING(":")) + inf->__Field(HX_CSTRING("lineNumber"),true)) + HX_CSTRING(" ")) + _g);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(25)
		this->add_line(_g1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(TraceDebugView_obj,on_trace,(void))

Void TraceDebugView_obj::create( ){
{
		HX_STACK_FRAME("luxe.debug.TraceDebugView","create",0xa6d193c4,"luxe.debug.TraceDebugView.create","luxe/debug/TraceDebugView.hx",28,0x3d0b52d6)
		HX_STACK_THIS(this)
		HX_STACK_LINE(30)
		::luxe::Debug debug = ::Luxe_obj::debug;		HX_STACK_VAR(debug,"debug");
		HX_STACK_LINE(36)
		::phoenix::Color _g = ::phoenix::Color_obj::__new(null(),null(),null(),null())->rgb((int)8947848);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(37)
		::phoenix::Rectangle _g1 = ::phoenix::Rectangle_obj::__new((debug->padding->x + (int)20),(debug->padding->y + (int)40),((::Luxe_obj::get_screen()->w - (debug->padding->x * (int)2)) - (int)20),((::Luxe_obj::get_screen()->h - (debug->padding->y * (int)2)) - (int)40));		HX_STACK_VAR(_g1,"_g1");
		struct _Function_1_1{
			inline static Dynamic Block( ::phoenix::Rectangle &_g1,::luxe::Debug &debug,::phoenix::Color &_g){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/debug/TraceDebugView.hx",32,0x3d0b52d6)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("name") , HX_CSTRING("debug.log.text"),false);
					__result->Add(HX_CSTRING("no_scene") , true,false);
					__result->Add(HX_CSTRING("depth") , 999.3,false);
					__result->Add(HX_CSTRING("color") , _g,false);
					__result->Add(HX_CSTRING("bounds") , _g1,false);
					__result->Add(HX_CSTRING("bounds_wrap") , true,false);
					__result->Add(HX_CSTRING("font") , ::Luxe_obj::renderer->font,false);
					__result->Add(HX_CSTRING("text") , HX_CSTRING(""),false);
					__result->Add(HX_CSTRING("align_vertical") , (int)4,false);
					__result->Add(HX_CSTRING("point_size") , (int)12,false);
					__result->Add(HX_CSTRING("batcher") , debug->batcher,false);
					__result->Add(HX_CSTRING("visible") , false,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(32)
		Dynamic _g2 = _Function_1_1::Block(_g1,debug,_g);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(32)
		::luxe::Text _g3 = ::luxe::Text_obj::__new(_g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(32)
		this->lines = _g3;
		HX_STACK_LINE(47)
		if (((this->lines->geometry != null()))){
			HX_STACK_LINE(48)
			this->lines->geometry->set_locked(true);
		}
	}
return null();
}


Void TraceDebugView_obj::add_line( ::String _t){
{
		HX_STACK_FRAME("luxe.debug.TraceDebugView","add_line",0xe230d8da,"luxe.debug.TraceDebugView.add_line","luxe/debug/TraceDebugView.hx",52,0x3d0b52d6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_t,"_t")
		HX_STACK_LINE(54)
		if (((this->logged == null()))){
			HX_STACK_LINE(55)
			return null();
		}
		HX_STACK_LINE(59)
		this->logged->push(_t);
		HX_STACK_LINE(62)
		if ((!(this->visible))){
			HX_STACK_LINE(63)
			return null();
		}
		HX_STACK_LINE(66)
		this->refresh_lines();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TraceDebugView_obj,add_line,(void))

Void TraceDebugView_obj::refresh_lines( ){
{
		HX_STACK_FRAME("luxe.debug.TraceDebugView","refresh_lines",0x2713d193,"luxe.debug.TraceDebugView.refresh_lines","luxe/debug/TraceDebugView.hx",71,0x3d0b52d6)
		HX_STACK_THIS(this)
		HX_STACK_LINE(73)
		if (((this->_last_logged_length == this->logged->length))){
			HX_STACK_LINE(74)
			return null();
		}
		HX_STACK_LINE(80)
		::String _final = HX_CSTRING("");		HX_STACK_VAR(_final,"_final");
		HX_STACK_LINE(82)
		if (((this->logged->length <= this->max_lines))){
			HX_STACK_LINE(83)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(83)
			Array< ::String > _g1 = this->logged;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(83)
			while((true)){
				HX_STACK_LINE(83)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(83)
					break;
				}
				HX_STACK_LINE(83)
				::String _line = _g1->__get(_g);		HX_STACK_VAR(_line,"_line");
				HX_STACK_LINE(83)
				++(_g);
				HX_STACK_LINE(84)
				hx::AddEq(_final,(_line + HX_CSTRING("\n")));
			}
		}
		else{
			HX_STACK_LINE(87)
			int _start = (this->logged->length - this->max_lines);		HX_STACK_VAR(_start,"_start");
			HX_STACK_LINE(88)
			int _total = this->logged->length;		HX_STACK_VAR(_total,"_total");
			HX_STACK_LINE(89)
			{
				HX_STACK_LINE(89)
				int _g1 = _start;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(89)
				int _g = this->logged->length;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(89)
				while((true)){
					HX_STACK_LINE(89)
					if ((!(((_g1 < _g))))){
						HX_STACK_LINE(89)
						break;
					}
					HX_STACK_LINE(89)
					int i = (_g1)++;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(90)
					::String _line = this->logged->__get(i);		HX_STACK_VAR(_line,"_line");
					HX_STACK_LINE(91)
					hx::AddEq(_final,(_line + HX_CSTRING("\n")));
				}
			}
		}
		HX_STACK_LINE(95)
		this->lines->set_text(_final);
		HX_STACK_LINE(97)
		if (((this->lines->geometry != null()))){
			HX_STACK_LINE(98)
			this->lines->geometry->set_locked(true);
			HX_STACK_LINE(99)
			this->lines->geometry->set_dirty(true);
		}
		HX_STACK_LINE(102)
		this->_last_logged_length = this->logged->length;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(TraceDebugView_obj,refresh_lines,(void))

Void TraceDebugView_obj::refresh( ){
{
		HX_STACK_FRAME("luxe.debug.TraceDebugView","refresh",0x2c45dc13,"luxe.debug.TraceDebugView.refresh","luxe/debug/TraceDebugView.hx",107,0x3d0b52d6)
		HX_STACK_THIS(this)
	}
return null();
}


Void TraceDebugView_obj::process( ){
{
		HX_STACK_FRAME("luxe.debug.TraceDebugView","process",0x306fa4a7,"luxe.debug.TraceDebugView.process","luxe/debug/TraceDebugView.hx",111,0x3d0b52d6)
		HX_STACK_THIS(this)
	}
return null();
}


Void TraceDebugView_obj::show( ){
{
		HX_STACK_FRAME("luxe.debug.TraceDebugView","show",0xd82ebfc5,"luxe.debug.TraceDebugView.show","luxe/debug/TraceDebugView.hx",115,0x3d0b52d6)
		HX_STACK_THIS(this)
		HX_STACK_LINE(116)
		this->super::show();
		HX_STACK_LINE(117)
		this->refresh_lines();
		HX_STACK_LINE(118)
		this->lines->set_visible(true);
	}
return null();
}


Void TraceDebugView_obj::hide( ){
{
		HX_STACK_FRAME("luxe.debug.TraceDebugView","hide",0xd0ea1f8a,"luxe.debug.TraceDebugView.hide","luxe/debug/TraceDebugView.hx",121,0x3d0b52d6)
		HX_STACK_THIS(this)
		HX_STACK_LINE(122)
		this->super::hide();
		HX_STACK_LINE(123)
		this->lines->set_visible(false);
	}
return null();
}



TraceDebugView_obj::TraceDebugView_obj()
{
}

void TraceDebugView_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TraceDebugView);
	HX_MARK_MEMBER_NAME(logged,"logged");
	HX_MARK_MEMBER_NAME(lines,"lines");
	HX_MARK_MEMBER_NAME(max_lines,"max_lines");
	HX_MARK_MEMBER_NAME(_last_logged_length,"_last_logged_length");
	::luxe::Objects_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void TraceDebugView_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(logged,"logged");
	HX_VISIT_MEMBER_NAME(lines,"lines");
	HX_VISIT_MEMBER_NAME(max_lines,"max_lines");
	HX_VISIT_MEMBER_NAME(_last_logged_length,"_last_logged_length");
	::luxe::Objects_obj::__Visit(HX_VISIT_ARG);
}

Dynamic TraceDebugView_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"show") ) { return show_dyn(); }
		if (HX_FIELD_EQ(inName,"hide") ) { return hide_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"lines") ) { return lines; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"logged") ) { return logged; }
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"refresh") ) { return refresh_dyn(); }
		if (HX_FIELD_EQ(inName,"process") ) { return process_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"on_trace") ) { return on_trace_dyn(); }
		if (HX_FIELD_EQ(inName,"add_line") ) { return add_line_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"max_lines") ) { return max_lines; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"refresh_lines") ) { return refresh_lines_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_last_logged_length") ) { return _last_logged_length; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic TraceDebugView_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"lines") ) { lines=inValue.Cast< ::luxe::Text >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"logged") ) { logged=inValue.Cast< Array< ::String > >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"max_lines") ) { max_lines=inValue.Cast< int >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_last_logged_length") ) { _last_logged_length=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TraceDebugView_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("logged"));
	outFields->push(HX_CSTRING("lines"));
	outFields->push(HX_CSTRING("max_lines"));
	outFields->push(HX_CSTRING("_last_logged_length"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Array< ::String >*/ ,(int)offsetof(TraceDebugView_obj,logged),HX_CSTRING("logged")},
	{hx::fsObject /*::luxe::Text*/ ,(int)offsetof(TraceDebugView_obj,lines),HX_CSTRING("lines")},
	{hx::fsInt,(int)offsetof(TraceDebugView_obj,max_lines),HX_CSTRING("max_lines")},
	{hx::fsInt,(int)offsetof(TraceDebugView_obj,_last_logged_length),HX_CSTRING("_last_logged_length")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("logged"),
	HX_CSTRING("lines"),
	HX_CSTRING("max_lines"),
	HX_CSTRING("on_trace"),
	HX_CSTRING("create"),
	HX_CSTRING("add_line"),
	HX_CSTRING("_last_logged_length"),
	HX_CSTRING("refresh_lines"),
	HX_CSTRING("refresh"),
	HX_CSTRING("process"),
	HX_CSTRING("show"),
	HX_CSTRING("hide"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TraceDebugView_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TraceDebugView_obj::__mClass,"__mClass");
};

#endif

Class TraceDebugView_obj::__mClass;

void TraceDebugView_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("luxe.debug.TraceDebugView"), hx::TCanCast< TraceDebugView_obj> ,sStaticFields,sMemberFields,
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

void TraceDebugView_obj::__boot()
{
}

} // end namespace luxe
} // end namespace debug
