#include <hxcpp.h>

#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_luxe_ID
#include <luxe/ID.h>
#endif
#ifndef INCLUDED_phoenix_Color
#include <phoenix/Color.h>
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
#ifndef INCLUDED_phoenix_geometry_CircleGeometry
#include <phoenix/geometry/CircleGeometry.h>
#endif
#ifndef INCLUDED_phoenix_geometry_Geometry
#include <phoenix/geometry/Geometry.h>
#endif
#ifndef INCLUDED_phoenix_geometry_RingGeometry
#include <phoenix/geometry/RingGeometry.h>
#endif
#ifndef INCLUDED_phoenix_geometry_Vertex
#include <phoenix/geometry/Vertex.h>
#endif
namespace phoenix{
namespace geometry{

Void RingGeometry_obj::__construct(Dynamic options)
{
HX_STACK_FRAME("phoenix.geometry.RingGeometry","new",0x25deca31,"phoenix.geometry.RingGeometry.new","phoenix/geometry/RingGeometry.hx",14,0x0d3aaa7f)
HX_STACK_THIS(this)
HX_STACK_ARG(options,"options")
{
	HX_STACK_LINE(16)
	super::__construct(options);
	HX_STACK_LINE(19)
	this->set_primitive_type((int)1);
}
;
	return null();
}

//RingGeometry_obj::~RingGeometry_obj() { }

Dynamic RingGeometry_obj::__CreateEmpty() { return  new RingGeometry_obj; }
hx::ObjectPtr< RingGeometry_obj > RingGeometry_obj::__new(Dynamic options)
{  hx::ObjectPtr< RingGeometry_obj > result = new RingGeometry_obj();
	result->__construct(options);
	return result;}

Dynamic RingGeometry_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< RingGeometry_obj > result = new RingGeometry_obj();
	result->__construct(inArgs[0]);
	return result;}

Void RingGeometry_obj::set( Float _x,Float _y,Float _rx,Float _ry,int _steps,hx::Null< Float >  __o__start_angle_degrees,hx::Null< Float >  __o__end_angle_degrees){
Float _start_angle_degrees = __o__start_angle_degrees.Default(0);
Float _end_angle_degrees = __o__end_angle_degrees.Default(360);
	HX_STACK_FRAME("phoenix.geometry.RingGeometry","set",0x25e29573,"phoenix.geometry.RingGeometry.set","phoenix/geometry/RingGeometry.hx",23,0x0d3aaa7f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_x,"_x")
	HX_STACK_ARG(_y,"_y")
	HX_STACK_ARG(_rx,"_rx")
	HX_STACK_ARG(_ry,"_ry")
	HX_STACK_ARG(_steps,"_steps")
	HX_STACK_ARG(_start_angle_degrees,"_start_angle_degrees")
	HX_STACK_ARG(_end_angle_degrees,"_end_angle_degrees")
{
		HX_STACK_LINE(28)
		this->set_primitive_type((int)4);
		HX_STACK_LINE(30)
		Float _start_angle_rad = (_start_angle_degrees * 0.017453292519943278);		HX_STACK_VAR(_start_angle_rad,"_start_angle_rad");
		HX_STACK_LINE(31)
		Float _end_angle_rad = (_end_angle_degrees * 0.017453292519943278);		HX_STACK_VAR(_end_angle_rad,"_end_angle_rad");
		HX_STACK_LINE(33)
		Float _range = (_end_angle_rad - _start_angle_rad);		HX_STACK_VAR(_range,"_range");
		HX_STACK_LINE(36)
		Float theta = (Float(_range) / Float(_steps));		HX_STACK_VAR(theta,"theta");
		HX_STACK_LINE(38)
		Float tangential_factor = ::Math_obj::tan(theta);		HX_STACK_VAR(tangential_factor,"tangential_factor");
		HX_STACK_LINE(39)
		Float radial_factor = ::Math_obj::cos(theta);		HX_STACK_VAR(radial_factor,"radial_factor");
		HX_STACK_LINE(41)
		Float _g = ::Math_obj::cos(_start_angle_rad);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(41)
		Float x = (_rx * _g);		HX_STACK_VAR(x,"x");
		HX_STACK_LINE(42)
		Float _g1 = ::Math_obj::sin(_start_angle_rad);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(42)
		Float y = (_rx * _g1);		HX_STACK_VAR(y,"y");
		HX_STACK_LINE(45)
		Float radial_ratio = (Float(_rx) / Float(_ry));		HX_STACK_VAR(radial_ratio,"radial_ratio");
		HX_STACK_LINE(46)
		if (((radial_ratio == (int)0))){
			HX_STACK_LINE(46)
			radial_ratio = 0.000000001;
		}
		HX_STACK_LINE(48)
		int _index = (int)0;		HX_STACK_VAR(_index,"_index");
		HX_STACK_LINE(49)
		Array< ::Dynamic > _segment_pos = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_segment_pos,"_segment_pos");
		HX_STACK_LINE(50)
		{
			HX_STACK_LINE(50)
			int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(50)
			while((true)){
				HX_STACK_LINE(50)
				if ((!(((_g2 < _steps))))){
					HX_STACK_LINE(50)
					break;
				}
				HX_STACK_LINE(50)
				int i = (_g2)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(52)
				Float __x = x;		HX_STACK_VAR(__x,"__x");
				HX_STACK_LINE(53)
				Float __y = (Float(y) / Float(radial_ratio));		HX_STACK_VAR(__y,"__y");
				HX_STACK_LINE(56)
				::phoenix::Vector _seg = ::phoenix::Vector_obj::__new(__x,__y,null(),null());		HX_STACK_VAR(_seg,"_seg");
				HX_STACK_LINE(58)
				_segment_pos->push(_seg);
				HX_STACK_LINE(61)
				::phoenix::geometry::Vertex _g21 = ::phoenix::geometry::Vertex_obj::__new(_seg,this->color,null());		HX_STACK_VAR(_g21,"_g21");
				HX_STACK_LINE(61)
				this->add(_g21);
				HX_STACK_LINE(64)
				if (((_index > (int)0))){
					HX_STACK_LINE(65)
					::phoenix::Vector prevvert = _segment_pos->__get(_index).StaticCast< ::phoenix::Vector >();		HX_STACK_VAR(prevvert,"prevvert");
					HX_STACK_LINE(66)
					::phoenix::Vector _g3 = ::phoenix::Vector_obj::__new(prevvert->x,prevvert->y,prevvert->z,prevvert->w);		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(66)
					::phoenix::geometry::Vertex _g4 = ::phoenix::geometry::Vertex_obj::__new(_g3,this->color,null());		HX_STACK_VAR(_g4,"_g4");
					HX_STACK_LINE(66)
					this->add(_g4);
				}
				HX_STACK_LINE(69)
				Float tx = -(y);		HX_STACK_VAR(tx,"tx");
				HX_STACK_LINE(70)
				Float ty = x;		HX_STACK_VAR(ty,"ty");
				HX_STACK_LINE(72)
				hx::AddEq(x,(tx * tangential_factor));
				HX_STACK_LINE(73)
				hx::AddEq(y,(ty * tangential_factor));
				HX_STACK_LINE(75)
				hx::MultEq(x,radial_factor);
				HX_STACK_LINE(76)
				hx::MultEq(y,radial_factor);
				HX_STACK_LINE(78)
				(_index)++;
			}
		}
		HX_STACK_LINE(83)
		::phoenix::geometry::Vertex _g5 = ::phoenix::geometry::Vertex_obj::__new(_segment_pos->__get((int)0).StaticCast< ::phoenix::Vector >(),this->color,null());		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(83)
		this->add(_g5);
		HX_STACK_LINE(86)
		{
			HX_STACK_LINE(86)
			::phoenix::Vector value = ::phoenix::Vector_obj::__new(_x,_y,null(),null());		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(86)
			{
				HX_STACK_LINE(86)
				::phoenix::Spatial _this = this->transform->local;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(86)
				_this->pos = value;
				HX_STACK_LINE(86)
				if (((value != null()))){
					HX_STACK_LINE(86)
					::phoenix::Vector_obj::Listen(_this->pos,_this->_pos_change_dyn());
					HX_STACK_LINE(86)
					if (((bool((_this->pos_changed != null())) && bool(!(_this->ignore_listeners))))){
						HX_STACK_LINE(86)
						_this->pos_changed(_this->pos);
					}
				}
				HX_STACK_LINE(86)
				_this->pos;
			}
		}
	}
return null();
}



RingGeometry_obj::RingGeometry_obj()
{
}

Dynamic RingGeometry_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"set") ) { return set_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic RingGeometry_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void RingGeometry_obj::__GetFields(Array< ::String> &outFields)
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
	HX_MARK_MEMBER_NAME(RingGeometry_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(RingGeometry_obj::__mClass,"__mClass");
};

#endif

Class RingGeometry_obj::__mClass;

void RingGeometry_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("phoenix.geometry.RingGeometry"), hx::TCanCast< RingGeometry_obj> ,sStaticFields,sMemberFields,
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

void RingGeometry_obj::__boot()
{
}

} // end namespace phoenix
} // end namespace geometry
