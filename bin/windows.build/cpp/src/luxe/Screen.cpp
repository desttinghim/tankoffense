#include <hxcpp.h>

#ifndef INCLUDED_hxMath
#include <hxMath.h>
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
namespace luxe{

Void Screen_obj::__construct(::luxe::Core _core,int _x,int _y,int _w,int _h)
{
HX_STACK_FRAME("luxe.Screen","new",0x40e0e036,"luxe.Screen.new","luxe/Screen.hx",19,0xd2f30fd9)
HX_STACK_THIS(this)
HX_STACK_ARG(_core,"_core")
HX_STACK_ARG(_x,"_x")
HX_STACK_ARG(_y,"_y")
HX_STACK_ARG(_w,"_w")
HX_STACK_ARG(_h,"_h")
{
	HX_STACK_LINE(21)
	this->core = _core;
	HX_STACK_LINE(22)
	::luxe::Cursor _g = ::luxe::Cursor_obj::__new(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(22)
	this->cursor = _g;
	HX_STACK_LINE(24)
	this->x = _x;
	HX_STACK_LINE(25)
	this->y = _y;
	HX_STACK_LINE(26)
	this->w = _w;
	HX_STACK_LINE(27)
	this->h = _h;
	HX_STACK_LINE(29)
	int _g1 = ::Math_obj::round((Float(this->w) / Float((int)2)));		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(29)
	int _g2 = ::Math_obj::round((Float(this->h) / Float((int)2)));		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(29)
	::phoenix::Vector _g3 = ::phoenix::Vector_obj::__new(_g1,_g2,null(),null());		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(29)
	this->mid = _g3;
	HX_STACK_LINE(30)
	::phoenix::Vector _g4 = ::phoenix::Vector_obj::__new(this->w,this->h,null(),null());		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(30)
	this->size = _g4;
}
;
	return null();
}

//Screen_obj::~Screen_obj() { }

Dynamic Screen_obj::__CreateEmpty() { return  new Screen_obj; }
hx::ObjectPtr< Screen_obj > Screen_obj::__new(::luxe::Core _core,int _x,int _y,int _w,int _h)
{  hx::ObjectPtr< Screen_obj > result = new Screen_obj();
	result->__construct(_core,_x,_y,_w,_h);
	return result;}

Dynamic Screen_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Screen_obj > result = new Screen_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return result;}

::String Screen_obj::toString( ){
	HX_STACK_FRAME("luxe.Screen","toString",0xc38a9916,"luxe.Screen.toString","luxe/Screen.hx",35,0xd2f30fd9)
	HX_STACK_THIS(this)
	HX_STACK_LINE(35)
	return ((((((((HX_CSTRING("luxe.Screen({ x:") + this->x) + HX_CSTRING(", y:")) + this->y) + HX_CSTRING(", w:")) + this->w) + HX_CSTRING(", h:")) + this->h) + HX_CSTRING(" })"));
}


HX_DEFINE_DYNAMIC_FUNC0(Screen_obj,toString,return )

::phoenix::Vector Screen_obj::get_mid( ){
	HX_STACK_FRAME("luxe.Screen","get_mid",0x6c488cf5,"luxe.Screen.get_mid","luxe/Screen.hx",41,0xd2f30fd9)
	HX_STACK_THIS(this)
	HX_STACK_LINE(41)
	::phoenix::Vector _this = this->mid;		HX_STACK_VAR(_this,"_this");
	HX_STACK_LINE(41)
	return ::phoenix::Vector_obj::__new(_this->x,_this->y,_this->z,_this->w);
}


HX_DEFINE_DYNAMIC_FUNC0(Screen_obj,get_mid,return )

Void Screen_obj::internal_resized( Float _w,Float _h){
{
		HX_STACK_FRAME("luxe.Screen","internal_resized",0x20806418,"luxe.Screen.internal_resized","luxe/Screen.hx",45,0xd2f30fd9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_w,"_w")
		HX_STACK_ARG(_h,"_h")
		HX_STACK_LINE(47)
		this->w = _w;
		HX_STACK_LINE(48)
		this->h = _h;
		HX_STACK_LINE(49)
		{
			HX_STACK_LINE(49)
			::phoenix::Vector _this = this->get_size();		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(49)
			Float _x = this->w;		HX_STACK_VAR(_x,"_x");
			HX_STACK_LINE(49)
			Float _y = this->h;		HX_STACK_VAR(_y,"_y");
			HX_STACK_LINE(49)
			bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
			HX_STACK_LINE(49)
			_this->ignore_listeners = true;
			HX_STACK_LINE(49)
			{
				HX_STACK_LINE(49)
				_this->x = _x;
				HX_STACK_LINE(49)
				if ((_this->_construct)){
					HX_STACK_LINE(49)
					_this->x;
				}
				else{
					HX_STACK_LINE(49)
					if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
						HX_STACK_LINE(49)
						_this->listen_x(_x);
					}
					HX_STACK_LINE(49)
					_this->x;
				}
			}
			HX_STACK_LINE(49)
			{
				HX_STACK_LINE(49)
				_this->y = _y;
				HX_STACK_LINE(49)
				if ((_this->_construct)){
					HX_STACK_LINE(49)
					_this->y;
				}
				else{
					HX_STACK_LINE(49)
					if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
						HX_STACK_LINE(49)
						_this->listen_y(_y);
					}
					HX_STACK_LINE(49)
					_this->y;
				}
			}
			HX_STACK_LINE(49)
			_this->ignore_listeners = prev;
			HX_STACK_LINE(49)
			if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
				HX_STACK_LINE(49)
				_this->listen_x(_this->x);
			}
			HX_STACK_LINE(49)
			if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
				HX_STACK_LINE(49)
				_this->listen_y(_this->y);
			}
			HX_STACK_LINE(49)
			_this;
		}
		HX_STACK_LINE(50)
		{
			HX_STACK_LINE(50)
			::phoenix::Vector _this = this->get_mid();		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(50)
			Float _x = (Float(this->w) / Float((int)2));		HX_STACK_VAR(_x,"_x");
			HX_STACK_LINE(50)
			Float _y = (Float(this->h) / Float((int)2));		HX_STACK_VAR(_y,"_y");
			HX_STACK_LINE(50)
			bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
			HX_STACK_LINE(50)
			_this->ignore_listeners = true;
			HX_STACK_LINE(50)
			{
				HX_STACK_LINE(50)
				_this->x = _x;
				HX_STACK_LINE(50)
				if ((_this->_construct)){
					HX_STACK_LINE(50)
					_this->x;
				}
				else{
					HX_STACK_LINE(50)
					if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
						HX_STACK_LINE(50)
						_this->listen_x(_x);
					}
					HX_STACK_LINE(50)
					_this->x;
				}
			}
			HX_STACK_LINE(50)
			{
				HX_STACK_LINE(50)
				_this->y = _y;
				HX_STACK_LINE(50)
				if ((_this->_construct)){
					HX_STACK_LINE(50)
					_this->y;
				}
				else{
					HX_STACK_LINE(50)
					if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
						HX_STACK_LINE(50)
						_this->listen_y(_y);
					}
					HX_STACK_LINE(50)
					_this->y;
				}
			}
			HX_STACK_LINE(50)
			_this->ignore_listeners = prev;
			HX_STACK_LINE(50)
			if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
				HX_STACK_LINE(50)
				_this->listen_x(_this->x);
			}
			HX_STACK_LINE(50)
			if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
				HX_STACK_LINE(50)
				_this->listen_y(_this->y);
			}
			HX_STACK_LINE(50)
			_this;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Screen_obj,internal_resized,(void))

::phoenix::Vector Screen_obj::get_size( ){
	HX_STACK_FRAME("luxe.Screen","get_size",0x572a24b4,"luxe.Screen.get_size","luxe/Screen.hx",56,0xd2f30fd9)
	HX_STACK_THIS(this)
	HX_STACK_LINE(56)
	::phoenix::Vector _this = this->size;		HX_STACK_VAR(_this,"_this");
	HX_STACK_LINE(56)
	return ::phoenix::Vector_obj::__new(_this->x,_this->y,_this->z,_this->w);
}


HX_DEFINE_DYNAMIC_FUNC0(Screen_obj,get_size,return )

bool Screen_obj::point_inside( ::phoenix::Vector _p){
	HX_STACK_FRAME("luxe.Screen","point_inside",0xfec30cb5,"luxe.Screen.point_inside","luxe/Screen.hx",60,0xd2f30fd9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_p,"_p")
	HX_STACK_LINE(62)
	if (((_p->x < this->x))){
		HX_STACK_LINE(62)
		return false;
	}
	HX_STACK_LINE(63)
	if (((_p->y < this->y))){
		HX_STACK_LINE(63)
		return false;
	}
	HX_STACK_LINE(64)
	if (((_p->x > (this->x + this->w)))){
		HX_STACK_LINE(64)
		return false;
	}
	HX_STACK_LINE(65)
	if (((_p->y > (this->y + this->h)))){
		HX_STACK_LINE(65)
		return false;
	}
	HX_STACK_LINE(67)
	return true;
}


HX_DEFINE_DYNAMIC_FUNC1(Screen_obj,point_inside,return )


Screen_obj::Screen_obj()
{
}

void Screen_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Screen);
	HX_MARK_MEMBER_NAME(x,"x");
	HX_MARK_MEMBER_NAME(y,"y");
	HX_MARK_MEMBER_NAME(w,"w");
	HX_MARK_MEMBER_NAME(h,"h");
	HX_MARK_MEMBER_NAME(cursor,"cursor");
	HX_MARK_MEMBER_NAME(core,"core");
	HX_MARK_MEMBER_NAME(mid,"mid");
	HX_MARK_MEMBER_NAME(size,"size");
	HX_MARK_END_CLASS();
}

void Screen_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(x,"x");
	HX_VISIT_MEMBER_NAME(y,"y");
	HX_VISIT_MEMBER_NAME(w,"w");
	HX_VISIT_MEMBER_NAME(h,"h");
	HX_VISIT_MEMBER_NAME(cursor,"cursor");
	HX_VISIT_MEMBER_NAME(core,"core");
	HX_VISIT_MEMBER_NAME(mid,"mid");
	HX_VISIT_MEMBER_NAME(size,"size");
}

Dynamic Screen_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return x; }
		if (HX_FIELD_EQ(inName,"y") ) { return y; }
		if (HX_FIELD_EQ(inName,"w") ) { return w; }
		if (HX_FIELD_EQ(inName,"h") ) { return h; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"mid") ) { return inCallProp ? get_mid() : mid; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"core") ) { return core; }
		if (HX_FIELD_EQ(inName,"size") ) { return inCallProp ? get_size() : size; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"cursor") ) { return cursor; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"get_mid") ) { return get_mid_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		if (HX_FIELD_EQ(inName,"get_size") ) { return get_size_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"point_inside") ) { return point_inside_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"internal_resized") ) { return internal_resized_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Screen_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"w") ) { w=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"h") ) { h=inValue.Cast< Float >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"mid") ) { mid=inValue.Cast< ::phoenix::Vector >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"core") ) { core=inValue.Cast< ::luxe::Core >(); return inValue; }
		if (HX_FIELD_EQ(inName,"size") ) { size=inValue.Cast< ::phoenix::Vector >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"cursor") ) { cursor=inValue.Cast< ::luxe::Cursor >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Screen_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("x"));
	outFields->push(HX_CSTRING("y"));
	outFields->push(HX_CSTRING("w"));
	outFields->push(HX_CSTRING("h"));
	outFields->push(HX_CSTRING("cursor"));
	outFields->push(HX_CSTRING("core"));
	outFields->push(HX_CSTRING("mid"));
	outFields->push(HX_CSTRING("size"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(Screen_obj,x),HX_CSTRING("x")},
	{hx::fsFloat,(int)offsetof(Screen_obj,y),HX_CSTRING("y")},
	{hx::fsFloat,(int)offsetof(Screen_obj,w),HX_CSTRING("w")},
	{hx::fsFloat,(int)offsetof(Screen_obj,h),HX_CSTRING("h")},
	{hx::fsObject /*::luxe::Cursor*/ ,(int)offsetof(Screen_obj,cursor),HX_CSTRING("cursor")},
	{hx::fsObject /*::luxe::Core*/ ,(int)offsetof(Screen_obj,core),HX_CSTRING("core")},
	{hx::fsObject /*::phoenix::Vector*/ ,(int)offsetof(Screen_obj,mid),HX_CSTRING("mid")},
	{hx::fsObject /*::phoenix::Vector*/ ,(int)offsetof(Screen_obj,size),HX_CSTRING("size")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("x"),
	HX_CSTRING("y"),
	HX_CSTRING("w"),
	HX_CSTRING("h"),
	HX_CSTRING("cursor"),
	HX_CSTRING("core"),
	HX_CSTRING("mid"),
	HX_CSTRING("size"),
	HX_CSTRING("toString"),
	HX_CSTRING("get_mid"),
	HX_CSTRING("internal_resized"),
	HX_CSTRING("get_size"),
	HX_CSTRING("point_inside"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Screen_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Screen_obj::__mClass,"__mClass");
};

#endif

Class Screen_obj::__mClass;

void Screen_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("luxe.Screen"), hx::TCanCast< Screen_obj> ,sStaticFields,sMemberFields,
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

void Screen_obj::__boot()
{
}

} // end namespace luxe
