#include <hxcpp.h>

#ifndef INCLUDED_luxe_ID
#include <luxe/ID.h>
#endif
#ifndef INCLUDED_phoenix_Color
#include <phoenix/Color.h>
#endif
#ifndef INCLUDED_phoenix_Rectangle
#include <phoenix/Rectangle.h>
#endif
#ifndef INCLUDED_phoenix_Spatial
#include <phoenix/Spatial.h>
#endif
#ifndef INCLUDED_phoenix_Transform
#include <phoenix/Transform.h>
#endif
#ifndef INCLUDED_phoenix_Vector
#include <phoenix/Vector.h>
#endif
#ifndef INCLUDED_phoenix_geometry_Geometry
#include <phoenix/geometry/Geometry.h>
#endif
#ifndef INCLUDED_phoenix_geometry_RectangleGeometry
#include <phoenix/geometry/RectangleGeometry.h>
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

Void RectangleGeometry_obj::__construct(Dynamic options)
{
HX_STACK_FRAME("phoenix.geometry.RectangleGeometry","new",0x08963096,"phoenix.geometry.RectangleGeometry.new","phoenix/geometry/RectangleGeometry.hx",13,0x605d1b7a)
HX_STACK_THIS(this)
HX_STACK_ARG(options,"options")
{
	HX_STACK_LINE(15)
	super::__construct(options);
	HX_STACK_LINE(17)
	if (((options == null()))){
		HX_STACK_LINE(18)
		return null();
	}
	HX_STACK_LINE(21)
	this->set(options);
}
;
	return null();
}

//RectangleGeometry_obj::~RectangleGeometry_obj() { }

Dynamic RectangleGeometry_obj::__CreateEmpty() { return  new RectangleGeometry_obj; }
hx::ObjectPtr< RectangleGeometry_obj > RectangleGeometry_obj::__new(Dynamic options)
{  hx::ObjectPtr< RectangleGeometry_obj > result = new RectangleGeometry_obj();
	result->__construct(options);
	return result;}

Dynamic RectangleGeometry_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< RectangleGeometry_obj > result = new RectangleGeometry_obj();
	result->__construct(inArgs[0]);
	return result;}

Void RectangleGeometry_obj::set( Dynamic options){
{
		HX_STACK_FRAME("phoenix.geometry.RectangleGeometry","set",0x0899fbd8,"phoenix.geometry.RectangleGeometry.set","phoenix/geometry/RectangleGeometry.hx",25,0x605d1b7a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(options,"options")
		HX_STACK_LINE(27)
		this->vertices->splice((int)0,this->vertices->length);
		HX_STACK_LINE(29)
		Float _x = options->__Field(HX_CSTRING("x"),true);		HX_STACK_VAR(_x,"_x");
		HX_STACK_LINE(30)
		Float _y = options->__Field(HX_CSTRING("y"),true);		HX_STACK_VAR(_y,"_y");
		HX_STACK_LINE(31)
		Float _w = options->__Field(HX_CSTRING("w"),true);		HX_STACK_VAR(_w,"_w");
		HX_STACK_LINE(32)
		Float _h = options->__Field(HX_CSTRING("h"),true);		HX_STACK_VAR(_h,"_h");
		HX_STACK_LINE(34)
		if (((options->__Field(HX_CSTRING("rect"),true) != null()))){
			HX_STACK_LINE(35)
			_x = options->__Field(HX_CSTRING("rect"),true)->__Field(HX_CSTRING("x"),true);
			HX_STACK_LINE(36)
			_y = options->__Field(HX_CSTRING("rect"),true)->__Field(HX_CSTRING("y"),true);
			HX_STACK_LINE(37)
			_w = options->__Field(HX_CSTRING("rect"),true)->__Field(HX_CSTRING("w"),true);
			HX_STACK_LINE(38)
			_h = options->__Field(HX_CSTRING("rect"),true)->__Field(HX_CSTRING("h"),true);
		}
		HX_STACK_LINE(42)
		::phoenix::Vector _g = ::phoenix::Vector_obj::__new((int)0,(int)0,null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(42)
		::phoenix::geometry::Vertex vert0 = ::phoenix::geometry::Vertex_obj::__new(_g,null(),null());		HX_STACK_VAR(vert0,"vert0");
		HX_STACK_LINE(43)
		{
			HX_STACK_LINE(43)
			::phoenix::geometry::TextureCoord _this = vert0->uv->uv0;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(43)
			_this->u = (int)0;
			HX_STACK_LINE(43)
			_this->v = (int)0;
			HX_STACK_LINE(43)
			_this;
		}
		HX_STACK_LINE(45)
		::phoenix::Vector _g1 = ::phoenix::Vector_obj::__new(_w,(int)0,null(),null());		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(45)
		::phoenix::geometry::Vertex vert1 = ::phoenix::geometry::Vertex_obj::__new(_g1,null(),null());		HX_STACK_VAR(vert1,"vert1");
		HX_STACK_LINE(46)
		{
			HX_STACK_LINE(46)
			::phoenix::geometry::TextureCoord _this = vert1->uv->uv0;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(46)
			_this->u = (int)1;
			HX_STACK_LINE(46)
			_this->v = (int)0;
			HX_STACK_LINE(46)
			_this;
		}
		HX_STACK_LINE(49)
		::phoenix::Vector _g2 = ::phoenix::Vector_obj::__new(_w,(int)0,null(),null());		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(49)
		::phoenix::geometry::Vertex vert2 = ::phoenix::geometry::Vertex_obj::__new(_g2,null(),null());		HX_STACK_VAR(vert2,"vert2");
		HX_STACK_LINE(50)
		{
			HX_STACK_LINE(50)
			::phoenix::geometry::TextureCoord _this = vert2->uv->uv0;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(50)
			_this->u = (int)1;
			HX_STACK_LINE(50)
			_this->v = (int)0;
			HX_STACK_LINE(50)
			_this;
		}
		HX_STACK_LINE(52)
		::phoenix::Vector _g3 = ::phoenix::Vector_obj::__new(_w,_h,null(),null());		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(52)
		::phoenix::geometry::Vertex vert3 = ::phoenix::geometry::Vertex_obj::__new(_g3,null(),null());		HX_STACK_VAR(vert3,"vert3");
		HX_STACK_LINE(53)
		{
			HX_STACK_LINE(53)
			::phoenix::geometry::TextureCoord _this = vert3->uv->uv0;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(53)
			_this->u = (int)1;
			HX_STACK_LINE(53)
			_this->v = (int)1;
			HX_STACK_LINE(53)
			_this;
		}
		HX_STACK_LINE(56)
		::phoenix::Vector _g4 = ::phoenix::Vector_obj::__new(_w,_h,null(),null());		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(56)
		::phoenix::geometry::Vertex vert4 = ::phoenix::geometry::Vertex_obj::__new(_g4,null(),null());		HX_STACK_VAR(vert4,"vert4");
		HX_STACK_LINE(57)
		{
			HX_STACK_LINE(57)
			::phoenix::geometry::TextureCoord _this = vert4->uv->uv0;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(57)
			_this->u = (int)1;
			HX_STACK_LINE(57)
			_this->v = (int)1;
			HX_STACK_LINE(57)
			_this;
		}
		HX_STACK_LINE(59)
		::phoenix::Vector _g5 = ::phoenix::Vector_obj::__new((int)0,_h,null(),null());		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(59)
		::phoenix::geometry::Vertex vert5 = ::phoenix::geometry::Vertex_obj::__new(_g5,null(),null());		HX_STACK_VAR(vert5,"vert5");
		HX_STACK_LINE(60)
		{
			HX_STACK_LINE(60)
			::phoenix::geometry::TextureCoord _this = vert5->uv->uv0;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(60)
			_this->u = (int)0;
			HX_STACK_LINE(60)
			_this->v = (int)1;
			HX_STACK_LINE(60)
			_this;
		}
		HX_STACK_LINE(63)
		::phoenix::Vector _g6 = ::phoenix::Vector_obj::__new((int)0,_h,null(),null());		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(63)
		::phoenix::geometry::Vertex vert6 = ::phoenix::geometry::Vertex_obj::__new(_g6,null(),null());		HX_STACK_VAR(vert6,"vert6");
		HX_STACK_LINE(64)
		{
			HX_STACK_LINE(64)
			::phoenix::geometry::TextureCoord _this = vert6->uv->uv0;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(64)
			_this->u = (int)0;
			HX_STACK_LINE(64)
			_this->v = (int)1;
			HX_STACK_LINE(64)
			_this;
		}
		HX_STACK_LINE(66)
		::phoenix::Vector _g7 = ::phoenix::Vector_obj::__new((int)0,(int)0,null(),null());		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(66)
		::phoenix::geometry::Vertex vert7 = ::phoenix::geometry::Vertex_obj::__new(_g7,null(),null());		HX_STACK_VAR(vert7,"vert7");
		HX_STACK_LINE(67)
		{
			HX_STACK_LINE(67)
			::phoenix::geometry::TextureCoord _this = vert7->uv->uv0;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(67)
			_this->u = (int)0;
			HX_STACK_LINE(67)
			_this->v = (int)0;
			HX_STACK_LINE(67)
			_this;
		}
		HX_STACK_LINE(69)
		this->add(vert0);
		HX_STACK_LINE(69)
		this->add(vert1);
		HX_STACK_LINE(69)
		this->add(vert2);
		HX_STACK_LINE(69)
		this->add(vert3);
		HX_STACK_LINE(70)
		this->add(vert4);
		HX_STACK_LINE(70)
		this->add(vert5);
		HX_STACK_LINE(70)
		this->add(vert6);
		HX_STACK_LINE(70)
		this->add(vert7);
		HX_STACK_LINE(72)
		this->set_primitive_type((int)1);
		HX_STACK_LINE(73)
		if (((options->__Field(HX_CSTRING("immediate"),true) == null()))){
			HX_STACK_LINE(73)
			this->immediate = false;
		}
		else{
			HX_STACK_LINE(73)
			this->immediate = options->__Field(HX_CSTRING("immediate"),true);
		}
		HX_STACK_LINE(74)
		this->set_visible((  (((options->__Field(HX_CSTRING("visible"),true) == null()))) ? bool(true) : bool(options->__Field(HX_CSTRING("visible"),true)) ));
		HX_STACK_LINE(75)
		::phoenix::Color _g8;		HX_STACK_VAR(_g8,"_g8");
		HX_STACK_LINE(75)
		if (((options->__Field(HX_CSTRING("color"),true) == null()))){
			HX_STACK_LINE(75)
			_g8 = ::phoenix::Color_obj::__new(null(),null(),null(),null());
		}
		else{
			HX_STACK_LINE(75)
			_g8 = options->__Field(HX_CSTRING("color"),true);
		}
		HX_STACK_LINE(75)
		this->set_color(_g8);
		HX_STACK_LINE(77)
		{
			HX_STACK_LINE(77)
			::phoenix::Vector value = ::phoenix::Vector_obj::__new(_x,_y,null(),null());		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(77)
			{
				HX_STACK_LINE(77)
				::phoenix::Spatial _this = this->transform->local;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(77)
				_this->pos = value;
				HX_STACK_LINE(77)
				if (((value != null()))){
					HX_STACK_LINE(77)
					::phoenix::Vector_obj::Listen(_this->pos,_this->_pos_change_dyn());
					HX_STACK_LINE(77)
					if (((bool((_this->pos_changed != null())) && bool(!(_this->ignore_listeners))))){
						HX_STACK_LINE(77)
						_this->pos_changed(_this->pos);
					}
				}
				HX_STACK_LINE(77)
				_this->pos;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(RectangleGeometry_obj,set,(void))


RectangleGeometry_obj::RectangleGeometry_obj()
{
}

Dynamic RectangleGeometry_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"set") ) { return set_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic RectangleGeometry_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void RectangleGeometry_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("set"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(RectangleGeometry_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(RectangleGeometry_obj::__mClass,"__mClass");
};

#endif

Class RectangleGeometry_obj::__mClass;

void RectangleGeometry_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("phoenix.geometry.RectangleGeometry"), hx::TCanCast< RectangleGeometry_obj> ,sStaticFields,sMemberFields,
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

void RectangleGeometry_obj::__boot()
{
}

} // end namespace phoenix
} // end namespace geometry
