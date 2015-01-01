#include <hxcpp.h>

#ifndef INCLUDED_phoenix_Color
#include <phoenix/Color.h>
#endif
#ifndef INCLUDED_phoenix_Vector
#include <phoenix/Vector.h>
#endif
#ifndef INCLUDED_phoenix_geometry_Geometry
#include <phoenix/geometry/Geometry.h>
#endif
#ifndef INCLUDED_phoenix_geometry_LineGeometry
#include <phoenix/geometry/LineGeometry.h>
#endif
#ifndef INCLUDED_phoenix_geometry_TextureCoord
#include <phoenix/geometry/TextureCoord.h>
#endif
#ifndef INCLUDED_phoenix_geometry_TextureCoordSet
#include <phoenix/geometry/TextureCoordSet.h>
#endif
#ifndef INCLUDED_phoenix_geometry_Vertex
#include <phoenix/geometry/Vertex.h>
#endif
namespace phoenix{
namespace geometry{

Void LineGeometry_obj::__construct(Dynamic options)
{
HX_STACK_FRAME("phoenix.geometry.LineGeometry","new",0xef3cd875,"phoenix.geometry.LineGeometry.new","phoenix/geometry/LineGeometry.hx",14,0x0bd610bb)
HX_STACK_THIS(this)
HX_STACK_ARG(options,"options")
{
	HX_STACK_LINE(16)
	super::__construct(options);
	HX_STACK_LINE(18)
	if (((options == null()))){
		HX_STACK_LINE(19)
		return null();
	}
	HX_STACK_LINE(22)
	if (((options->__Field(HX_CSTRING("color"),true) == null()))){
		HX_STACK_LINE(22)
		::phoenix::Color _g = ::phoenix::Color_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(22)
		options->__FieldRef(HX_CSTRING("color")) = _g;
	}
	HX_STACK_LINE(23)
	if (((options->__Field(HX_CSTRING("color0"),true) == null()))){
		HX_STACK_LINE(23)
		options->__FieldRef(HX_CSTRING("color0")) = options->__Field(HX_CSTRING("color"),true);
	}
	HX_STACK_LINE(24)
	if (((options->__Field(HX_CSTRING("color1"),true) == null()))){
		HX_STACK_LINE(24)
		options->__FieldRef(HX_CSTRING("color1")) = options->__Field(HX_CSTRING("color"),true);
	}
	HX_STACK_LINE(26)
	if (((options->__Field(HX_CSTRING("p0"),true) != null()))){
		HX_STACK_LINE(27)
		this->set_p0(options->__Field(HX_CSTRING("p0"),true));
	}
	else{
		HX_STACK_LINE(29)
		::phoenix::Vector _g1 = ::phoenix::Vector_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(29)
		this->set_p0(_g1);
	}
	HX_STACK_LINE(32)
	if (((options->__Field(HX_CSTRING("p1"),true) != null()))){
		HX_STACK_LINE(33)
		this->set_p1(options->__Field(HX_CSTRING("p1"),true));
	}
	else{
		HX_STACK_LINE(35)
		::phoenix::Vector _g2 = ::phoenix::Vector_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(35)
		this->set_p1(_g2);
	}
	HX_STACK_LINE(38)
	this->set(options);
}
;
	return null();
}

//LineGeometry_obj::~LineGeometry_obj() { }

Dynamic LineGeometry_obj::__CreateEmpty() { return  new LineGeometry_obj; }
hx::ObjectPtr< LineGeometry_obj > LineGeometry_obj::__new(Dynamic options)
{  hx::ObjectPtr< LineGeometry_obj > result = new LineGeometry_obj();
	result->__construct(options);
	return result;}

Dynamic LineGeometry_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< LineGeometry_obj > result = new LineGeometry_obj();
	result->__construct(inArgs[0]);
	return result;}

::phoenix::Vector LineGeometry_obj::set_p0( ::phoenix::Vector _p){
	HX_STACK_FRAME("phoenix.geometry.LineGeometry","set_p0",0x4fc5c088,"phoenix.geometry.LineGeometry.set_p0","phoenix/geometry/LineGeometry.hx",42,0x0bd610bb)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_p,"_p")
	HX_STACK_LINE(44)
	if (((this->vertices->length == (int)0))){
		HX_STACK_LINE(44)
		return this->p0 = _p;
	}
	HX_STACK_LINE(46)
	{
		HX_STACK_LINE(46)
		::phoenix::Vector _this = this->vertices->__get((int)0).StaticCast< ::phoenix::geometry::Vertex >()->pos;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(46)
		Float _x = _p->x;		HX_STACK_VAR(_x,"_x");
		HX_STACK_LINE(46)
		_this->x = _x;
		HX_STACK_LINE(46)
		if ((_this->_construct)){
			HX_STACK_LINE(46)
			_this->x;
		}
		else{
			HX_STACK_LINE(46)
			if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
				HX_STACK_LINE(46)
				_this->listen_x(_x);
			}
			HX_STACK_LINE(46)
			_this->x;
		}
	}
	HX_STACK_LINE(47)
	{
		HX_STACK_LINE(47)
		::phoenix::Vector _this = this->vertices->__get((int)0).StaticCast< ::phoenix::geometry::Vertex >()->pos;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(47)
		Float _y = _p->y;		HX_STACK_VAR(_y,"_y");
		HX_STACK_LINE(47)
		_this->y = _y;
		HX_STACK_LINE(47)
		if ((_this->_construct)){
			HX_STACK_LINE(47)
			_this->y;
		}
		else{
			HX_STACK_LINE(47)
			if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
				HX_STACK_LINE(47)
				_this->listen_y(_y);
			}
			HX_STACK_LINE(47)
			_this->y;
		}
	}
	HX_STACK_LINE(48)
	{
		HX_STACK_LINE(48)
		::phoenix::Vector _this = this->vertices->__get((int)0).StaticCast< ::phoenix::geometry::Vertex >()->pos;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(48)
		Float _z = _p->z;		HX_STACK_VAR(_z,"_z");
		HX_STACK_LINE(48)
		_this->z = _z;
		HX_STACK_LINE(48)
		if ((_this->_construct)){
			HX_STACK_LINE(48)
			_this->z;
		}
		else{
			HX_STACK_LINE(48)
			if (((bool((_this->listen_z != null())) && bool(!(_this->ignore_listeners))))){
				HX_STACK_LINE(48)
				_this->listen_z(_z);
			}
			HX_STACK_LINE(48)
			_this->z;
		}
	}
	HX_STACK_LINE(50)
	return this->p0 = _p;
}


HX_DEFINE_DYNAMIC_FUNC1(LineGeometry_obj,set_p0,return )

::phoenix::Vector LineGeometry_obj::set_p1( ::phoenix::Vector _p){
	HX_STACK_FRAME("phoenix.geometry.LineGeometry","set_p1",0x4fc5c089,"phoenix.geometry.LineGeometry.set_p1","phoenix/geometry/LineGeometry.hx",54,0x0bd610bb)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_p,"_p")
	HX_STACK_LINE(56)
	if (((this->vertices->length == (int)0))){
		HX_STACK_LINE(56)
		return this->p1 = _p;
	}
	HX_STACK_LINE(58)
	{
		HX_STACK_LINE(58)
		::phoenix::Vector _this = this->vertices->__get((int)1).StaticCast< ::phoenix::geometry::Vertex >()->pos;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(58)
		Float _x = _p->x;		HX_STACK_VAR(_x,"_x");
		HX_STACK_LINE(58)
		_this->x = _x;
		HX_STACK_LINE(58)
		if ((_this->_construct)){
			HX_STACK_LINE(58)
			_this->x;
		}
		else{
			HX_STACK_LINE(58)
			if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
				HX_STACK_LINE(58)
				_this->listen_x(_x);
			}
			HX_STACK_LINE(58)
			_this->x;
		}
	}
	HX_STACK_LINE(59)
	{
		HX_STACK_LINE(59)
		::phoenix::Vector _this = this->vertices->__get((int)1).StaticCast< ::phoenix::geometry::Vertex >()->pos;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(59)
		Float _y = _p->y;		HX_STACK_VAR(_y,"_y");
		HX_STACK_LINE(59)
		_this->y = _y;
		HX_STACK_LINE(59)
		if ((_this->_construct)){
			HX_STACK_LINE(59)
			_this->y;
		}
		else{
			HX_STACK_LINE(59)
			if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
				HX_STACK_LINE(59)
				_this->listen_y(_y);
			}
			HX_STACK_LINE(59)
			_this->y;
		}
	}
	HX_STACK_LINE(60)
	{
		HX_STACK_LINE(60)
		::phoenix::Vector _this = this->vertices->__get((int)1).StaticCast< ::phoenix::geometry::Vertex >()->pos;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(60)
		Float _z = _p->z;		HX_STACK_VAR(_z,"_z");
		HX_STACK_LINE(60)
		_this->z = _z;
		HX_STACK_LINE(60)
		if ((_this->_construct)){
			HX_STACK_LINE(60)
			_this->z;
		}
		else{
			HX_STACK_LINE(60)
			if (((bool((_this->listen_z != null())) && bool(!(_this->ignore_listeners))))){
				HX_STACK_LINE(60)
				_this->listen_z(_z);
			}
			HX_STACK_LINE(60)
			_this->z;
		}
	}
	HX_STACK_LINE(62)
	return this->p1 = _p;
}


HX_DEFINE_DYNAMIC_FUNC1(LineGeometry_obj,set_p1,return )

Void LineGeometry_obj::set( Dynamic options){
{
		HX_STACK_FRAME("phoenix.geometry.LineGeometry","set",0xef40a3b7,"phoenix.geometry.LineGeometry.set","phoenix/geometry/LineGeometry.hx",66,0x0bd610bb)
		HX_STACK_THIS(this)
		HX_STACK_ARG(options,"options")
		HX_STACK_LINE(68)
		this->vertices->splice((int)0,this->vertices->length);
		HX_STACK_LINE(71)
		::phoenix::Vector _g = ::phoenix::Vector_obj::__new(options->__Field(HX_CSTRING("p0"),true)->__Field(HX_CSTRING("x"),true),options->__Field(HX_CSTRING("p0"),true)->__Field(HX_CSTRING("y"),true),options->__Field(HX_CSTRING("p0"),true)->__Field(HX_CSTRING("z"),true),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(71)
		::phoenix::geometry::Vertex vert0 = ::phoenix::geometry::Vertex_obj::__new(_g,options->__Field(HX_CSTRING("color0"),true),null());		HX_STACK_VAR(vert0,"vert0");
		HX_STACK_LINE(72)
		{
			HX_STACK_LINE(72)
			::phoenix::geometry::TextureCoord _this = vert0->uv->uv0;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(72)
			_this->u = (int)0;
			HX_STACK_LINE(72)
			_this->v = (int)0;
			HX_STACK_LINE(72)
			_this;
		}
		HX_STACK_LINE(74)
		::phoenix::Vector _g1 = ::phoenix::Vector_obj::__new(options->__Field(HX_CSTRING("p1"),true)->__Field(HX_CSTRING("x"),true),options->__Field(HX_CSTRING("p1"),true)->__Field(HX_CSTRING("y"),true),options->__Field(HX_CSTRING("p1"),true)->__Field(HX_CSTRING("z"),true),null());		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(74)
		::phoenix::geometry::Vertex vert1 = ::phoenix::geometry::Vertex_obj::__new(_g1,options->__Field(HX_CSTRING("color1"),true),null());		HX_STACK_VAR(vert1,"vert1");
		HX_STACK_LINE(75)
		{
			HX_STACK_LINE(75)
			::phoenix::geometry::TextureCoord _this = vert1->uv->uv0;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(75)
			_this->u = (int)1;
			HX_STACK_LINE(75)
			_this->v = (int)0;
			HX_STACK_LINE(75)
			_this;
		}
		HX_STACK_LINE(77)
		this->add(vert0);
		HX_STACK_LINE(78)
		this->add(vert1);
		HX_STACK_LINE(80)
		this->set_primitive_type((int)1);
		HX_STACK_LINE(81)
		this->immediate = options->__Field(HX_CSTRING("immediate"),true);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(LineGeometry_obj,set,(void))


LineGeometry_obj::LineGeometry_obj()
{
}

void LineGeometry_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(LineGeometry);
	HX_MARK_MEMBER_NAME(p0,"p0");
	HX_MARK_MEMBER_NAME(p1,"p1");
	::phoenix::geometry::Geometry_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void LineGeometry_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(p0,"p0");
	HX_VISIT_MEMBER_NAME(p1,"p1");
	::phoenix::geometry::Geometry_obj::__Visit(HX_VISIT_ARG);
}

Dynamic LineGeometry_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"p0") ) { return p0; }
		if (HX_FIELD_EQ(inName,"p1") ) { return p1; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"set") ) { return set_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"set_p0") ) { return set_p0_dyn(); }
		if (HX_FIELD_EQ(inName,"set_p1") ) { return set_p1_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic LineGeometry_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"p0") ) { if (inCallProp) return set_p0(inValue);p0=inValue.Cast< ::phoenix::Vector >(); return inValue; }
		if (HX_FIELD_EQ(inName,"p1") ) { if (inCallProp) return set_p1(inValue);p1=inValue.Cast< ::phoenix::Vector >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void LineGeometry_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("p0"));
	outFields->push(HX_CSTRING("p1"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::phoenix::Vector*/ ,(int)offsetof(LineGeometry_obj,p0),HX_CSTRING("p0")},
	{hx::fsObject /*::phoenix::Vector*/ ,(int)offsetof(LineGeometry_obj,p1),HX_CSTRING("p1")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("p0"),
	HX_CSTRING("p1"),
	HX_CSTRING("set_p0"),
	HX_CSTRING("set_p1"),
	HX_CSTRING("set"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(LineGeometry_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(LineGeometry_obj::__mClass,"__mClass");
};

#endif

Class LineGeometry_obj::__mClass;

void LineGeometry_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("phoenix.geometry.LineGeometry"), hx::TCanCast< LineGeometry_obj> ,sStaticFields,sMemberFields,
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

void LineGeometry_obj::__boot()
{
}

} // end namespace phoenix
} // end namespace geometry
