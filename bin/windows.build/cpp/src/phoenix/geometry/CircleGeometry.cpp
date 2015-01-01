#include <hxcpp.h>

#ifndef INCLUDED_Luxe
#include <Luxe.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_luxe_ID
#include <luxe/ID.h>
#endif
#ifndef INCLUDED_luxe_utils_GeometryUtils
#include <luxe/utils/GeometryUtils.h>
#endif
#ifndef INCLUDED_luxe_utils_Utils
#include <luxe/utils/Utils.h>
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
#ifndef INCLUDED_phoenix_geometry_Vertex
#include <phoenix/geometry/Vertex.h>
#endif
namespace phoenix{
namespace geometry{

Void CircleGeometry_obj::__construct(Dynamic options)
{
HX_STACK_FRAME("phoenix.geometry.CircleGeometry","new",0x661195d1,"phoenix.geometry.CircleGeometry.new","phoenix/geometry/CircleGeometry.hx",16,0x20b87adf)
HX_STACK_THIS(this)
HX_STACK_ARG(options,"options")
{
	HX_STACK_LINE(18)
	super::__construct(options);
	HX_STACK_LINE(20)
	if (((options == null()))){
		HX_STACK_LINE(21)
		return null();
	}
	HX_STACK_LINE(25)
	Float _radius_x = (int)32;		HX_STACK_VAR(_radius_x,"_radius_x");
	HX_STACK_LINE(26)
	Float _radius_y = (int)32;		HX_STACK_VAR(_radius_y,"_radius_y");
	HX_STACK_LINE(28)
	if (((options->__Field(HX_CSTRING("end_angle"),true) == null()))){
		HX_STACK_LINE(29)
		options->__FieldRef(HX_CSTRING("end_angle")) = (int)360;
	}
	HX_STACK_LINE(32)
	if (((options->__Field(HX_CSTRING("start_angle"),true) == null()))){
		HX_STACK_LINE(33)
		options->__FieldRef(HX_CSTRING("start_angle")) = (int)0;
	}
	HX_STACK_LINE(36)
	if (((options->__Field(HX_CSTRING("r"),true) != null()))){
		HX_STACK_LINE(37)
		_radius_x = options->__Field(HX_CSTRING("r"),true);
		HX_STACK_LINE(38)
		_radius_y = options->__Field(HX_CSTRING("r"),true);
	}
	HX_STACK_LINE(41)
	if (((options->__Field(HX_CSTRING("rx"),true) != null()))){
		HX_STACK_LINE(42)
		_radius_x = options->__Field(HX_CSTRING("rx"),true);
	}
	HX_STACK_LINE(45)
	if (((options->__Field(HX_CSTRING("ry"),true) != null()))){
		HX_STACK_LINE(46)
		_radius_y = options->__Field(HX_CSTRING("ry"),true);
	}
	HX_STACK_LINE(49)
	if (((options->__Field(HX_CSTRING("steps"),true) == null()))){
		HX_STACK_LINE(50)
		if (((options->__Field(HX_CSTRING("smooth"),true) == null()))){
			HX_STACK_LINE(51)
			Float _max = ::Math_obj::max(_radius_x,_radius_y);		HX_STACK_VAR(_max,"_max");
			HX_STACK_LINE(52)
			int _g = ::Luxe_obj::utils->geometry->segments_for_smooth_circle(_max,null());		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(52)
			options->__FieldRef(HX_CSTRING("steps")) = _g;
		}
		else{
			HX_STACK_LINE(54)
			Float _smooth = options->__Field(HX_CSTRING("smooth"),true);		HX_STACK_VAR(_smooth,"_smooth");
			HX_STACK_LINE(55)
			Float _max = ::Math_obj::max(_radius_x,_radius_y);		HX_STACK_VAR(_max,"_max");
			HX_STACK_LINE(56)
			int _g1 = ::Luxe_obj::utils->geometry->segments_for_smooth_circle(_max,_smooth);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(56)
			options->__FieldRef(HX_CSTRING("steps")) = _g1;
		}
	}
	HX_STACK_LINE(61)
	this->set(options->__Field(HX_CSTRING("x"),true),options->__Field(HX_CSTRING("y"),true),_radius_x,_radius_y,options->__Field(HX_CSTRING("steps"),true),options->__Field(HX_CSTRING("start_angle"),true),options->__Field(HX_CSTRING("end_angle"),true));
	HX_STACK_LINE(63)
	if (((options->__Field(HX_CSTRING("visible"),true) != null()))){
		HX_STACK_LINE(63)
		this->set_visible(options->__Field(HX_CSTRING("visible"),true));
	}
}
;
	return null();
}

//CircleGeometry_obj::~CircleGeometry_obj() { }

Dynamic CircleGeometry_obj::__CreateEmpty() { return  new CircleGeometry_obj; }
hx::ObjectPtr< CircleGeometry_obj > CircleGeometry_obj::__new(Dynamic options)
{  hx::ObjectPtr< CircleGeometry_obj > result = new CircleGeometry_obj();
	result->__construct(options);
	return result;}

Dynamic CircleGeometry_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< CircleGeometry_obj > result = new CircleGeometry_obj();
	result->__construct(inArgs[0]);
	return result;}

Void CircleGeometry_obj::set( Float _x,Float _y,Float _rx,Float _ry,int _steps,hx::Null< Float >  __o__start_angle,hx::Null< Float >  __o__end_angle){
Float _start_angle = __o__start_angle.Default(0);
Float _end_angle = __o__end_angle.Default(360);
	HX_STACK_FRAME("phoenix.geometry.CircleGeometry","set",0x66156113,"phoenix.geometry.CircleGeometry.set","phoenix/geometry/CircleGeometry.hx",67,0x20b87adf)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_x,"_x")
	HX_STACK_ARG(_y,"_y")
	HX_STACK_ARG(_rx,"_rx")
	HX_STACK_ARG(_ry,"_ry")
	HX_STACK_ARG(_steps,"_steps")
	HX_STACK_ARG(_start_angle,"_start_angle")
	HX_STACK_ARG(_end_angle,"_end_angle")
{
		HX_STACK_LINE(72)
		this->set_primitive_type((int)4);
		HX_STACK_LINE(74)
		Float half_pi = (Float(::Math_obj::PI) / Float((int)2));		HX_STACK_VAR(half_pi,"half_pi");
		HX_STACK_LINE(75)
		Float _start_angle_rad = ((_start_angle * 0.017453292519943278) - half_pi);		HX_STACK_VAR(_start_angle_rad,"_start_angle_rad");
		HX_STACK_LINE(76)
		Float _end_angle_rad = ((_end_angle * 0.017453292519943278) - half_pi);		HX_STACK_VAR(_end_angle_rad,"_end_angle_rad");
		HX_STACK_LINE(78)
		Float _range = (_end_angle_rad - _start_angle_rad);		HX_STACK_VAR(_range,"_range");
		HX_STACK_LINE(81)
		Float _g = ::Math_obj::abs(_range);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(81)
		Float _g1 = (Float(_g) / Float(((::Math_obj::PI * (int)2))));		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(81)
		Float _g2 = (_g1 * _steps);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(81)
		int _g3 = ::Math_obj::ceil(_g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(81)
		_steps = _g3;
		HX_STACK_LINE(84)
		Float theta = (Float(_range) / Float(_steps));		HX_STACK_VAR(theta,"theta");
		HX_STACK_LINE(86)
		Float tangential_factor = ::Math_obj::tan(theta);		HX_STACK_VAR(tangential_factor,"tangential_factor");
		HX_STACK_LINE(87)
		Float radial_factor = ::Math_obj::cos(theta);		HX_STACK_VAR(radial_factor,"radial_factor");
		HX_STACK_LINE(89)
		Float _g4 = ::Math_obj::cos(_start_angle_rad);		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(89)
		Float x = (_rx * _g4);		HX_STACK_VAR(x,"x");
		HX_STACK_LINE(90)
		Float _g5 = ::Math_obj::sin(_start_angle_rad);		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(90)
		Float y = (_rx * _g5);		HX_STACK_VAR(y,"y");
		HX_STACK_LINE(93)
		Float radial_ratio = (Float(_rx) / Float(_ry));		HX_STACK_VAR(radial_ratio,"radial_ratio");
		HX_STACK_LINE(94)
		if (((radial_ratio == (int)0))){
			HX_STACK_LINE(95)
			radial_ratio = 0.000000001;
		}
		HX_STACK_LINE(98)
		int _index = (int)0;		HX_STACK_VAR(_index,"_index");
		HX_STACK_LINE(99)
		Array< ::Dynamic > _segment_pos = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_segment_pos,"_segment_pos");
		HX_STACK_LINE(100)
		{
			HX_STACK_LINE(100)
			int _g11 = (int)0;		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(100)
			int _g6 = (_steps + (int)1);		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(100)
			while((true)){
				HX_STACK_LINE(100)
				if ((!(((_g11 < _g6))))){
					HX_STACK_LINE(100)
					break;
				}
				HX_STACK_LINE(100)
				int i = (_g11)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(102)
				Float __x = x;		HX_STACK_VAR(__x,"__x");
				HX_STACK_LINE(103)
				Float __y = (Float(y) / Float(radial_ratio));		HX_STACK_VAR(__y,"__y");
				HX_STACK_LINE(106)
				::phoenix::Vector _seg = ::phoenix::Vector_obj::__new(__x,__y,null(),null());		HX_STACK_VAR(_seg,"_seg");
				HX_STACK_LINE(108)
				_segment_pos->push(_seg);
				HX_STACK_LINE(111)
				if (((_index > (int)0))){
					HX_STACK_LINE(112)
					::phoenix::geometry::Vertex _g61 = ::phoenix::geometry::Vertex_obj::__new(_seg,this->color,null());		HX_STACK_VAR(_g61,"_g61");
					HX_STACK_LINE(112)
					this->add(_g61);
				}
				HX_STACK_LINE(116)
				::phoenix::Vector _g7 = ::phoenix::Vector_obj::__new((int)0,(int)0,null(),null());		HX_STACK_VAR(_g7,"_g7");
				HX_STACK_LINE(116)
				::phoenix::geometry::Vertex _g8 = ::phoenix::geometry::Vertex_obj::__new(_g7,this->color,null());		HX_STACK_VAR(_g8,"_g8");
				HX_STACK_LINE(116)
				this->add(_g8);
				HX_STACK_LINE(119)
				::phoenix::geometry::Vertex _g9 = ::phoenix::geometry::Vertex_obj::__new(_seg,this->color,null());		HX_STACK_VAR(_g9,"_g9");
				HX_STACK_LINE(119)
				this->add(_g9);
				HX_STACK_LINE(121)
				Float tx = -(y);		HX_STACK_VAR(tx,"tx");
				HX_STACK_LINE(122)
				Float ty = x;		HX_STACK_VAR(ty,"ty");
				HX_STACK_LINE(124)
				hx::AddEq(x,(tx * tangential_factor));
				HX_STACK_LINE(125)
				hx::AddEq(y,(ty * tangential_factor));
				HX_STACK_LINE(127)
				hx::MultEq(x,radial_factor);
				HX_STACK_LINE(128)
				hx::MultEq(y,radial_factor);
				HX_STACK_LINE(130)
				(_index)++;
			}
		}
		HX_STACK_LINE(134)
		::phoenix::geometry::Vertex _g10 = ::phoenix::geometry::Vertex_obj::__new(_segment_pos->__get(_steps).StaticCast< ::phoenix::Vector >(),this->color,null());		HX_STACK_VAR(_g10,"_g10");
		HX_STACK_LINE(134)
		this->add(_g10);
		HX_STACK_LINE(137)
		{
			HX_STACK_LINE(137)
			::phoenix::Vector value = ::phoenix::Vector_obj::__new(_x,_y,null(),null());		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(137)
			{
				HX_STACK_LINE(137)
				::phoenix::Spatial _this = this->transform->local;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(137)
				_this->pos = value;
				HX_STACK_LINE(137)
				if (((value != null()))){
					HX_STACK_LINE(137)
					::phoenix::Vector_obj::Listen(_this->pos,_this->_pos_change_dyn());
					HX_STACK_LINE(137)
					if (((bool((_this->pos_changed != null())) && bool(!(_this->ignore_listeners))))){
						HX_STACK_LINE(137)
						_this->pos_changed(_this->pos);
					}
				}
				HX_STACK_LINE(137)
				_this->pos;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC7(CircleGeometry_obj,set,(void))


CircleGeometry_obj::CircleGeometry_obj()
{
}

Dynamic CircleGeometry_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"set") ) { return set_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic CircleGeometry_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void CircleGeometry_obj::__GetFields(Array< ::String> &outFields)
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
	HX_MARK_MEMBER_NAME(CircleGeometry_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CircleGeometry_obj::__mClass,"__mClass");
};

#endif

Class CircleGeometry_obj::__mClass;

void CircleGeometry_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("phoenix.geometry.CircleGeometry"), hx::TCanCast< CircleGeometry_obj> ,sStaticFields,sMemberFields,
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

void CircleGeometry_obj::__boot()
{
}

} // end namespace phoenix
} // end namespace geometry
