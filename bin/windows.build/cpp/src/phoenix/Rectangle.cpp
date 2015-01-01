#include <hxcpp.h>

#ifndef INCLUDED_phoenix_Rectangle
#include <phoenix/Rectangle.h>
#endif
#ifndef INCLUDED_phoenix_Vector
#include <phoenix/Vector.h>
#endif
namespace phoenix{

Void Rectangle_obj::__construct(Dynamic __o__x,Dynamic __o__y,Dynamic __o__w,Dynamic __o__h)
{
HX_STACK_FRAME("phoenix.Rectangle","new",0x7f8dbf62,"phoenix.Rectangle.new","phoenix/Rectangle.hx",4,0x42e13fcf)
HX_STACK_THIS(this)
HX_STACK_ARG(__o__x,"_x")
HX_STACK_ARG(__o__y,"_y")
HX_STACK_ARG(__o__w,"_w")
HX_STACK_ARG(__o__h,"_h")
Dynamic _x = __o__x.Default(0);
Dynamic _y = __o__y.Default(0);
Dynamic _w = __o__w.Default(0);
Dynamic _h = __o__h.Default(0);
{
	HX_STACK_LINE(11)
	this->ignore_listeners = false;
	HX_STACK_LINE(9)
	this->h = (int)0;
	HX_STACK_LINE(8)
	this->w = (int)0;
	HX_STACK_LINE(7)
	this->y = (int)0;
	HX_STACK_LINE(6)
	this->x = (int)0;
	HX_STACK_LINE(20)
	this->set_x(_x);
	HX_STACK_LINE(21)
	this->set_y(_y);
	HX_STACK_LINE(22)
	this->set_w(_w);
	HX_STACK_LINE(23)
	this->set_h(_h);
}
;
	return null();
}

//Rectangle_obj::~Rectangle_obj() { }

Dynamic Rectangle_obj::__CreateEmpty() { return  new Rectangle_obj; }
hx::ObjectPtr< Rectangle_obj > Rectangle_obj::__new(Dynamic __o__x,Dynamic __o__y,Dynamic __o__w,Dynamic __o__h)
{  hx::ObjectPtr< Rectangle_obj > result = new Rectangle_obj();
	result->__construct(__o__x,__o__y,__o__w,__o__h);
	return result;}

Dynamic Rectangle_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Rectangle_obj > result = new Rectangle_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return result;}

::String Rectangle_obj::toString( ){
	HX_STACK_FRAME("phoenix.Rectangle","toString",0x02893a6a,"phoenix.Rectangle.toString","phoenix/Rectangle.hx",29,0x42e13fcf)
	HX_STACK_THIS(this)
	HX_STACK_LINE(29)
	return ((((((((HX_CSTRING("{ x:") + this->x) + HX_CSTRING(", y:")) + this->y) + HX_CSTRING(", w:")) + this->w) + HX_CSTRING(", h:")) + this->h) + HX_CSTRING(" }"));
}


HX_DEFINE_DYNAMIC_FUNC0(Rectangle_obj,toString,return )

bool Rectangle_obj::point_inside( ::phoenix::Vector _p){
	HX_STACK_FRAME("phoenix.Rectangle","point_inside",0x75cee809,"phoenix.Rectangle.point_inside","phoenix/Rectangle.hx",40,0x42e13fcf)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_p,"_p")
	HX_STACK_LINE(42)
	if (((_p->x < this->x))){
		HX_STACK_LINE(42)
		return false;
	}
	HX_STACK_LINE(43)
	if (((_p->y < this->y))){
		HX_STACK_LINE(43)
		return false;
	}
	HX_STACK_LINE(44)
	if (((_p->x > (this->x + this->w)))){
		HX_STACK_LINE(44)
		return false;
	}
	HX_STACK_LINE(45)
	if (((_p->y > (this->y + this->h)))){
		HX_STACK_LINE(45)
		return false;
	}
	HX_STACK_LINE(47)
	return true;
}


HX_DEFINE_DYNAMIC_FUNC1(Rectangle_obj,point_inside,return )

bool Rectangle_obj::overlaps( ::phoenix::Rectangle _other){
	HX_STACK_FRAME("phoenix.Rectangle","overlaps",0x0f453cca,"phoenix.Rectangle.overlaps","phoenix/Rectangle.hx",51,0x42e13fcf)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_other,"_other")
	HX_STACK_LINE(53)
	if (((_other == null()))){
		HX_STACK_LINE(54)
		return false;
	}
	HX_STACK_LINE(58)
	if (((bool((bool((bool((this->x < (_other->x + _other->w))) && bool((this->y < (_other->y + _other->h))))) && bool(((this->x + this->w) > _other->x)))) && bool(((this->y + this->h) > _other->y))))){
		HX_STACK_LINE(63)
		return true;
	}
	HX_STACK_LINE(66)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(Rectangle_obj,overlaps,return )

::phoenix::Rectangle Rectangle_obj::clone( ){
	HX_STACK_FRAME("phoenix.Rectangle","clone",0x7d3846df,"phoenix.Rectangle.clone","phoenix/Rectangle.hx",71,0x42e13fcf)
	HX_STACK_THIS(this)
	HX_STACK_LINE(71)
	return ::phoenix::Rectangle_obj::__new(this->x,this->y,this->w,this->h);
}


HX_DEFINE_DYNAMIC_FUNC0(Rectangle_obj,clone,return )

bool Rectangle_obj::equal( ::phoenix::Rectangle _other){
	HX_STACK_FRAME("phoenix.Rectangle","equal",0xa7580336,"phoenix.Rectangle.equal","phoenix/Rectangle.hx",76,0x42e13fcf)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_other,"_other")
	HX_STACK_LINE(78)
	if (((_other == null()))){
		HX_STACK_LINE(79)
		return false;
	}
	HX_STACK_LINE(82)
	return (bool((bool((bool((this->x == _other->x)) && bool((this->y == _other->y)))) && bool((this->w == _other->w)))) && bool((this->h == _other->h)));
}


HX_DEFINE_DYNAMIC_FUNC1(Rectangle_obj,equal,return )

Void Rectangle_obj::copy_from( ::phoenix::Rectangle _rect){
{
		HX_STACK_FRAME("phoenix.Rectangle","copy_from",0xf6a391f6,"phoenix.Rectangle.copy_from","phoenix/Rectangle.hx",86,0x42e13fcf)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_rect,"_rect")
		HX_STACK_LINE(88)
		this->set_x(_rect->x);
		HX_STACK_LINE(89)
		this->set_y(_rect->y);
		HX_STACK_LINE(90)
		this->set_w(_rect->w);
		HX_STACK_LINE(91)
		this->set_h(_rect->h);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Rectangle_obj,copy_from,(void))

::phoenix::Rectangle Rectangle_obj::set( Dynamic _x,Dynamic _y,Dynamic _w,Dynamic _h){
	HX_STACK_FRAME("phoenix.Rectangle","set",0x7f918aa4,"phoenix.Rectangle.set","phoenix/Rectangle.hx",95,0x42e13fcf)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_x,"_x")
	HX_STACK_ARG(_y,"_y")
	HX_STACK_ARG(_w,"_w")
	HX_STACK_ARG(_h,"_h")
	HX_STACK_LINE(97)
	Float _setx = this->x;		HX_STACK_VAR(_setx,"_setx");
	HX_STACK_LINE(98)
	Float _sety = this->y;		HX_STACK_VAR(_sety,"_sety");
	HX_STACK_LINE(99)
	Float _setw = this->w;		HX_STACK_VAR(_setw,"_setw");
	HX_STACK_LINE(100)
	Float _seth = this->h;		HX_STACK_VAR(_seth,"_seth");
	HX_STACK_LINE(103)
	if (((_x != null()))){
		HX_STACK_LINE(103)
		_setx = _x;
	}
	HX_STACK_LINE(104)
	if (((_y != null()))){
		HX_STACK_LINE(104)
		_sety = _y;
	}
	HX_STACK_LINE(105)
	if (((_w != null()))){
		HX_STACK_LINE(105)
		_setw = _w;
	}
	HX_STACK_LINE(106)
	if (((_h != null()))){
		HX_STACK_LINE(106)
		_seth = _h;
	}
	HX_STACK_LINE(108)
	this->set_x(_setx);
	HX_STACK_LINE(109)
	this->set_y(_sety);
	HX_STACK_LINE(110)
	this->set_w(_setw);
	HX_STACK_LINE(111)
	this->set_h(_seth);
	HX_STACK_LINE(113)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC4(Rectangle_obj,set,return )

Float Rectangle_obj::set_x( Float _x){
	HX_STACK_FRAME("phoenix.Rectangle","set_x",0xaf04cedd,"phoenix.Rectangle.set_x","phoenix/Rectangle.hx",117,0x42e13fcf)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_x,"_x")
	HX_STACK_LINE(119)
	this->x = _x;
	HX_STACK_LINE(121)
	if (((bool((this->listen_x_dyn() != null())) && bool(!(this->ignore_listeners))))){
		HX_STACK_LINE(122)
		this->listen_x(_x);
	}
	HX_STACK_LINE(125)
	return this->x;
}


HX_DEFINE_DYNAMIC_FUNC1(Rectangle_obj,set_x,return )

Float Rectangle_obj::set_y( Float _y){
	HX_STACK_FRAME("phoenix.Rectangle","set_y",0xaf04cede,"phoenix.Rectangle.set_y","phoenix/Rectangle.hx",129,0x42e13fcf)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_y,"_y")
	HX_STACK_LINE(131)
	this->y = _y;
	HX_STACK_LINE(133)
	if (((bool((this->listen_y_dyn() != null())) && bool(!(this->ignore_listeners))))){
		HX_STACK_LINE(134)
		this->listen_y(_y);
	}
	HX_STACK_LINE(137)
	return this->y;
}


HX_DEFINE_DYNAMIC_FUNC1(Rectangle_obj,set_y,return )

Float Rectangle_obj::set_w( Float _w){
	HX_STACK_FRAME("phoenix.Rectangle","set_w",0xaf04cedc,"phoenix.Rectangle.set_w","phoenix/Rectangle.hx",141,0x42e13fcf)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_w,"_w")
	HX_STACK_LINE(143)
	this->w = _w;
	HX_STACK_LINE(145)
	if (((bool((this->listen_w_dyn() != null())) && bool(!(this->ignore_listeners))))){
		HX_STACK_LINE(146)
		this->listen_w(_w);
	}
	HX_STACK_LINE(149)
	return this->w;
}


HX_DEFINE_DYNAMIC_FUNC1(Rectangle_obj,set_w,return )

Float Rectangle_obj::set_h( Float _h){
	HX_STACK_FRAME("phoenix.Rectangle","set_h",0xaf04cecd,"phoenix.Rectangle.set_h","phoenix/Rectangle.hx",153,0x42e13fcf)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_h,"_h")
	HX_STACK_LINE(155)
	this->h = _h;
	HX_STACK_LINE(157)
	if (((bool((this->listen_h_dyn() != null())) && bool(!(this->ignore_listeners))))){
		HX_STACK_LINE(158)
		this->listen_h(_h);
	}
	HX_STACK_LINE(161)
	return this->h;
}


HX_DEFINE_DYNAMIC_FUNC1(Rectangle_obj,set_h,return )

Void Rectangle_obj::listen( ::phoenix::Rectangle _r,Dynamic listener){
{
		HX_STACK_FRAME("phoenix.Rectangle","listen",0xf5b1a685,"phoenix.Rectangle.listen","phoenix/Rectangle.hx",33,0x42e13fcf)
		HX_STACK_ARG(_r,"_r")
		HX_STACK_ARG(listener,"listener")
		HX_STACK_LINE(34)
		_r->listen_x = listener;
		HX_STACK_LINE(35)
		_r->listen_y = listener;
		HX_STACK_LINE(36)
		_r->listen_w = listener;
		HX_STACK_LINE(37)
		_r->listen_h = listener;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Rectangle_obj,listen,(void))


Rectangle_obj::Rectangle_obj()
{
}

void Rectangle_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Rectangle);
	HX_MARK_MEMBER_NAME(x,"x");
	HX_MARK_MEMBER_NAME(y,"y");
	HX_MARK_MEMBER_NAME(w,"w");
	HX_MARK_MEMBER_NAME(h,"h");
	HX_MARK_MEMBER_NAME(ignore_listeners,"ignore_listeners");
	HX_MARK_MEMBER_NAME(listen_x,"listen_x");
	HX_MARK_MEMBER_NAME(listen_y,"listen_y");
	HX_MARK_MEMBER_NAME(listen_w,"listen_w");
	HX_MARK_MEMBER_NAME(listen_h,"listen_h");
	HX_MARK_END_CLASS();
}

void Rectangle_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(x,"x");
	HX_VISIT_MEMBER_NAME(y,"y");
	HX_VISIT_MEMBER_NAME(w,"w");
	HX_VISIT_MEMBER_NAME(h,"h");
	HX_VISIT_MEMBER_NAME(ignore_listeners,"ignore_listeners");
	HX_VISIT_MEMBER_NAME(listen_x,"listen_x");
	HX_VISIT_MEMBER_NAME(listen_y,"listen_y");
	HX_VISIT_MEMBER_NAME(listen_w,"listen_w");
	HX_VISIT_MEMBER_NAME(listen_h,"listen_h");
}

Dynamic Rectangle_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return x; }
		if (HX_FIELD_EQ(inName,"y") ) { return y; }
		if (HX_FIELD_EQ(inName,"w") ) { return w; }
		if (HX_FIELD_EQ(inName,"h") ) { return h; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"set") ) { return set_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		if (HX_FIELD_EQ(inName,"equal") ) { return equal_dyn(); }
		if (HX_FIELD_EQ(inName,"set_x") ) { return set_x_dyn(); }
		if (HX_FIELD_EQ(inName,"set_y") ) { return set_y_dyn(); }
		if (HX_FIELD_EQ(inName,"set_w") ) { return set_w_dyn(); }
		if (HX_FIELD_EQ(inName,"set_h") ) { return set_h_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"listen") ) { return listen_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"listen_x") ) { return listen_x; }
		if (HX_FIELD_EQ(inName,"listen_y") ) { return listen_y; }
		if (HX_FIELD_EQ(inName,"listen_w") ) { return listen_w; }
		if (HX_FIELD_EQ(inName,"listen_h") ) { return listen_h; }
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		if (HX_FIELD_EQ(inName,"overlaps") ) { return overlaps_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"copy_from") ) { return copy_from_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"point_inside") ) { return point_inside_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"ignore_listeners") ) { return ignore_listeners; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Rectangle_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { if (inCallProp) return set_x(inValue);x=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { if (inCallProp) return set_y(inValue);y=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"w") ) { if (inCallProp) return set_w(inValue);w=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"h") ) { if (inCallProp) return set_h(inValue);h=inValue.Cast< Float >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"listen_x") ) { listen_x=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"listen_y") ) { listen_y=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"listen_w") ) { listen_w=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"listen_h") ) { listen_h=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"ignore_listeners") ) { ignore_listeners=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Rectangle_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("x"));
	outFields->push(HX_CSTRING("y"));
	outFields->push(HX_CSTRING("w"));
	outFields->push(HX_CSTRING("h"));
	outFields->push(HX_CSTRING("ignore_listeners"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("listen"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(Rectangle_obj,x),HX_CSTRING("x")},
	{hx::fsFloat,(int)offsetof(Rectangle_obj,y),HX_CSTRING("y")},
	{hx::fsFloat,(int)offsetof(Rectangle_obj,w),HX_CSTRING("w")},
	{hx::fsFloat,(int)offsetof(Rectangle_obj,h),HX_CSTRING("h")},
	{hx::fsBool,(int)offsetof(Rectangle_obj,ignore_listeners),HX_CSTRING("ignore_listeners")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Rectangle_obj,listen_x),HX_CSTRING("listen_x")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Rectangle_obj,listen_y),HX_CSTRING("listen_y")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Rectangle_obj,listen_w),HX_CSTRING("listen_w")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Rectangle_obj,listen_h),HX_CSTRING("listen_h")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("x"),
	HX_CSTRING("y"),
	HX_CSTRING("w"),
	HX_CSTRING("h"),
	HX_CSTRING("ignore_listeners"),
	HX_CSTRING("listen_x"),
	HX_CSTRING("listen_y"),
	HX_CSTRING("listen_w"),
	HX_CSTRING("listen_h"),
	HX_CSTRING("toString"),
	HX_CSTRING("point_inside"),
	HX_CSTRING("overlaps"),
	HX_CSTRING("clone"),
	HX_CSTRING("equal"),
	HX_CSTRING("copy_from"),
	HX_CSTRING("set"),
	HX_CSTRING("set_x"),
	HX_CSTRING("set_y"),
	HX_CSTRING("set_w"),
	HX_CSTRING("set_h"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Rectangle_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Rectangle_obj::__mClass,"__mClass");
};

#endif

Class Rectangle_obj::__mClass;

void Rectangle_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("phoenix.Rectangle"), hx::TCanCast< Rectangle_obj> ,sStaticFields,sMemberFields,
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

void Rectangle_obj::__boot()
{
}

} // end namespace phoenix
