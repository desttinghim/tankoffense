#include <hxcpp.h>

#ifndef INCLUDED_Luxe
#include <Luxe.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_luxe_Core
#include <luxe/Core.h>
#endif
#ifndef INCLUDED_luxe_Cursor
#include <luxe/Cursor.h>
#endif
#ifndef INCLUDED_luxe_Screen
#include <luxe/Screen.h>
#endif
#ifndef INCLUDED_phoenix_Vector
#include <phoenix/Vector.h>
#endif
#ifndef INCLUDED_snow_App
#include <snow/App.h>
#endif
#ifndef INCLUDED_snow_Snow
#include <snow/Snow.h>
#endif
#ifndef INCLUDED_snow_window_Window
#include <snow/window/Window.h>
#endif
#ifndef INCLUDED_snow_window_Windowing
#include <snow/window/Windowing.h>
#endif
namespace luxe{

Void Cursor_obj::__construct(::luxe::Screen _screen)
{
HX_STACK_FRAME("luxe.Cursor","new",0xa48b30a0,"luxe.Cursor.new","luxe/Screen.hx",76,0xd2f30fd9)
HX_STACK_THIS(this)
HX_STACK_ARG(_screen,"_screen")
{
	HX_STACK_LINE(83)
	this->lock = false;
	HX_STACK_LINE(82)
	this->grab = false;
	HX_STACK_LINE(81)
	this->visible = true;
	HX_STACK_LINE(89)
	this->screen = _screen;
	HX_STACK_LINE(90)
	::phoenix::Vector _g = ::phoenix::Vector_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(90)
	this->set_pos(_g);
}
;
	return null();
}

//Cursor_obj::~Cursor_obj() { }

Dynamic Cursor_obj::__CreateEmpty() { return  new Cursor_obj; }
hx::ObjectPtr< Cursor_obj > Cursor_obj::__new(::luxe::Screen _screen)
{  hx::ObjectPtr< Cursor_obj > result = new Cursor_obj();
	result->__construct(_screen);
	return result;}

Dynamic Cursor_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Cursor_obj > result = new Cursor_obj();
	result->__construct(inArgs[0]);
	return result;}

bool Cursor_obj::get_visible( ){
	HX_STACK_FRAME("luxe.Cursor","get_visible",0xa01078c9,"luxe.Cursor.get_visible","luxe/Screen.hx",97,0xd2f30fd9)
	HX_STACK_THIS(this)
	HX_STACK_LINE(97)
	return this->visible;
}


HX_DEFINE_DYNAMIC_FUNC0(Cursor_obj,get_visible,return )

bool Cursor_obj::set_visible( bool _visible){
	HX_STACK_FRAME("luxe.Cursor","set_visible",0xaa7d7fd5,"luxe.Cursor.set_visible","luxe/Screen.hx",101,0xd2f30fd9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_visible,"_visible")
	HX_STACK_LINE(103)
	this->screen->core->app->windowing->enable_cursor(_visible);
	HX_STACK_LINE(105)
	return this->visible = _visible;
}


HX_DEFINE_DYNAMIC_FUNC1(Cursor_obj,set_visible,return )

bool Cursor_obj::get_grab( ){
	HX_STACK_FRAME("luxe.Cursor","get_grab",0x520a4315,"luxe.Cursor.get_grab","luxe/Screen.hx",111,0xd2f30fd9)
	HX_STACK_THIS(this)
	HX_STACK_LINE(111)
	return this->grab;
}


HX_DEFINE_DYNAMIC_FUNC0(Cursor_obj,get_grab,return )

bool Cursor_obj::get_lock( ){
	HX_STACK_FRAME("luxe.Cursor","get_lock",0x55560f34,"luxe.Cursor.get_lock","luxe/Screen.hx",117,0xd2f30fd9)
	HX_STACK_THIS(this)
	HX_STACK_LINE(117)
	return this->lock;
}


HX_DEFINE_DYNAMIC_FUNC0(Cursor_obj,get_lock,return )

bool Cursor_obj::set_grab( bool _grab){
	HX_STACK_FRAME("luxe.Cursor","set_grab",0x00679c89,"luxe.Cursor.set_grab","luxe/Screen.hx",121,0xd2f30fd9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_grab,"_grab")
	HX_STACK_LINE(123)
	this->screen->core->app->window->set_grab(_grab);
	HX_STACK_LINE(125)
	return this->grab = _grab;
}


HX_DEFINE_DYNAMIC_FUNC1(Cursor_obj,set_grab,return )

bool Cursor_obj::set_lock( bool _lock){
	HX_STACK_FRAME("luxe.Cursor","set_lock",0x03b368a8,"luxe.Cursor.set_lock","luxe/Screen.hx",129,0xd2f30fd9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_lock,"_lock")
	HX_STACK_LINE(131)
	this->screen->core->app->windowing->enable_cursor_lock(_lock);
	HX_STACK_LINE(133)
	return this->lock = _lock;
}


HX_DEFINE_DYNAMIC_FUNC1(Cursor_obj,set_lock,return )

::phoenix::Vector Cursor_obj::get_pos( ){
	HX_STACK_FRAME("luxe.Cursor","get_pos",0x03d6a66b,"luxe.Cursor.get_pos","luxe/Screen.hx",137,0xd2f30fd9)
	HX_STACK_THIS(this)
	HX_STACK_LINE(139)
	if (((this->pos != null()))){
		HX_STACK_LINE(140)
		::phoenix::Vector _this = this->pos;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(140)
		Float _x = ::Luxe_obj::mouse->x;		HX_STACK_VAR(_x,"_x");
		HX_STACK_LINE(140)
		Float _y = ::Luxe_obj::mouse->y;		HX_STACK_VAR(_y,"_y");
		HX_STACK_LINE(140)
		bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
		HX_STACK_LINE(140)
		_this->ignore_listeners = true;
		HX_STACK_LINE(140)
		{
			HX_STACK_LINE(140)
			_this->x = _x;
			HX_STACK_LINE(140)
			if ((_this->_construct)){
				HX_STACK_LINE(140)
				_this->x;
			}
			else{
				HX_STACK_LINE(140)
				if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
					HX_STACK_LINE(140)
					_this->listen_x(_x);
				}
				HX_STACK_LINE(140)
				_this->x;
			}
		}
		HX_STACK_LINE(140)
		{
			HX_STACK_LINE(140)
			_this->y = _y;
			HX_STACK_LINE(140)
			if ((_this->_construct)){
				HX_STACK_LINE(140)
				_this->y;
			}
			else{
				HX_STACK_LINE(140)
				if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
					HX_STACK_LINE(140)
					_this->listen_y(_y);
				}
				HX_STACK_LINE(140)
				_this->y;
			}
		}
		HX_STACK_LINE(140)
		_this->ignore_listeners = prev;
		HX_STACK_LINE(140)
		if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
			HX_STACK_LINE(140)
			_this->listen_x(_this->x);
		}
		HX_STACK_LINE(140)
		if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
			HX_STACK_LINE(140)
			_this->listen_y(_this->y);
		}
		HX_STACK_LINE(140)
		_this;
	}
	HX_STACK_LINE(143)
	return this->pos;
}


HX_DEFINE_DYNAMIC_FUNC0(Cursor_obj,get_pos,return )

::phoenix::Vector Cursor_obj::set_pos( ::phoenix::Vector _p){
	HX_STACK_FRAME("luxe.Cursor","set_pos",0xf6d83777,"luxe.Cursor.set_pos","luxe/Screen.hx",147,0xd2f30fd9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_p,"_p")
	HX_STACK_LINE(149)
	::phoenix::Vector _g = this->get_pos();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(149)
	if (((_g != null()))){
		HX_STACK_LINE(151)
		int _g1 = ::Std_obj::_int(_p->x);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(151)
		int _g2 = ::Std_obj::_int(_p->y);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(151)
		this->screen->core->app->window->set_cursor_position(_g1,_g2);
	}
	HX_STACK_LINE(155)
	return this->pos = _p;
}


HX_DEFINE_DYNAMIC_FUNC1(Cursor_obj,set_pos,return )


Cursor_obj::Cursor_obj()
{
}

void Cursor_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Cursor);
	HX_MARK_MEMBER_NAME(screen,"screen");
	HX_MARK_MEMBER_NAME(visible,"visible");
	HX_MARK_MEMBER_NAME(grab,"grab");
	HX_MARK_MEMBER_NAME(lock,"lock");
	HX_MARK_MEMBER_NAME(pos,"pos");
	HX_MARK_END_CLASS();
}

void Cursor_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(screen,"screen");
	HX_VISIT_MEMBER_NAME(visible,"visible");
	HX_VISIT_MEMBER_NAME(grab,"grab");
	HX_VISIT_MEMBER_NAME(lock,"lock");
	HX_VISIT_MEMBER_NAME(pos,"pos");
}

Dynamic Cursor_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"pos") ) { return inCallProp ? get_pos() : pos; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"grab") ) { return inCallProp ? get_grab() : grab; }
		if (HX_FIELD_EQ(inName,"lock") ) { return inCallProp ? get_lock() : lock; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"screen") ) { return screen; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"visible") ) { return inCallProp ? get_visible() : visible; }
		if (HX_FIELD_EQ(inName,"get_pos") ) { return get_pos_dyn(); }
		if (HX_FIELD_EQ(inName,"set_pos") ) { return set_pos_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_grab") ) { return get_grab_dyn(); }
		if (HX_FIELD_EQ(inName,"get_lock") ) { return get_lock_dyn(); }
		if (HX_FIELD_EQ(inName,"set_grab") ) { return set_grab_dyn(); }
		if (HX_FIELD_EQ(inName,"set_lock") ) { return set_lock_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"get_visible") ) { return get_visible_dyn(); }
		if (HX_FIELD_EQ(inName,"set_visible") ) { return set_visible_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Cursor_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"pos") ) { if (inCallProp) return set_pos(inValue);pos=inValue.Cast< ::phoenix::Vector >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"grab") ) { if (inCallProp) return set_grab(inValue);grab=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lock") ) { if (inCallProp) return set_lock(inValue);lock=inValue.Cast< bool >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"screen") ) { screen=inValue.Cast< ::luxe::Screen >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"visible") ) { if (inCallProp) return set_visible(inValue);visible=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Cursor_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("screen"));
	outFields->push(HX_CSTRING("visible"));
	outFields->push(HX_CSTRING("grab"));
	outFields->push(HX_CSTRING("lock"));
	outFields->push(HX_CSTRING("pos"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::luxe::Screen*/ ,(int)offsetof(Cursor_obj,screen),HX_CSTRING("screen")},
	{hx::fsBool,(int)offsetof(Cursor_obj,visible),HX_CSTRING("visible")},
	{hx::fsBool,(int)offsetof(Cursor_obj,grab),HX_CSTRING("grab")},
	{hx::fsBool,(int)offsetof(Cursor_obj,lock),HX_CSTRING("lock")},
	{hx::fsObject /*::phoenix::Vector*/ ,(int)offsetof(Cursor_obj,pos),HX_CSTRING("pos")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("screen"),
	HX_CSTRING("visible"),
	HX_CSTRING("grab"),
	HX_CSTRING("lock"),
	HX_CSTRING("pos"),
	HX_CSTRING("get_visible"),
	HX_CSTRING("set_visible"),
	HX_CSTRING("get_grab"),
	HX_CSTRING("get_lock"),
	HX_CSTRING("set_grab"),
	HX_CSTRING("set_lock"),
	HX_CSTRING("get_pos"),
	HX_CSTRING("set_pos"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Cursor_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Cursor_obj::__mClass,"__mClass");
};

#endif

Class Cursor_obj::__mClass;

void Cursor_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("luxe.Cursor"), hx::TCanCast< Cursor_obj> ,sStaticFields,sMemberFields,
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

void Cursor_obj::__boot()
{
}

} // end namespace luxe
