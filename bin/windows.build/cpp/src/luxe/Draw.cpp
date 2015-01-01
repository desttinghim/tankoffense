#include <hxcpp.h>

#ifndef INCLUDED_Luxe
#include <Luxe.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_luxe_Core
#include <luxe/Core.h>
#endif
#ifndef INCLUDED_luxe_Draw
#include <luxe/Draw.h>
#endif
#ifndef INCLUDED_luxe_resource_Resource
#include <luxe/resource/Resource.h>
#endif
#ifndef INCLUDED_phoenix_Batcher
#include <phoenix/Batcher.h>
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
#ifndef INCLUDED_phoenix_Texture
#include <phoenix/Texture.h>
#endif
#ifndef INCLUDED_phoenix_Vector
#include <phoenix/Vector.h>
#endif
#ifndef INCLUDED_phoenix_geometry_ArcGeometry
#include <phoenix/geometry/ArcGeometry.h>
#endif
#ifndef INCLUDED_phoenix_geometry_CircleGeometry
#include <phoenix/geometry/CircleGeometry.h>
#endif
#ifndef INCLUDED_phoenix_geometry_Geometry
#include <phoenix/geometry/Geometry.h>
#endif
#ifndef INCLUDED_phoenix_geometry_LineGeometry
#include <phoenix/geometry/LineGeometry.h>
#endif
#ifndef INCLUDED_phoenix_geometry_PlaneGeometry
#include <phoenix/geometry/PlaneGeometry.h>
#endif
#ifndef INCLUDED_phoenix_geometry_QuadGeometry
#include <phoenix/geometry/QuadGeometry.h>
#endif
#ifndef INCLUDED_phoenix_geometry_RectangleGeometry
#include <phoenix/geometry/RectangleGeometry.h>
#endif
#ifndef INCLUDED_phoenix_geometry_RingGeometry
#include <phoenix/geometry/RingGeometry.h>
#endif
#ifndef INCLUDED_phoenix_geometry_TextGeometry
#include <phoenix/geometry/TextGeometry.h>
#endif
#ifndef INCLUDED_phoenix_geometry_Vertex
#include <phoenix/geometry/Vertex.h>
#endif
#ifndef INCLUDED_snow_App
#include <snow/App.h>
#endif
namespace luxe{

Void Draw_obj::__construct(::luxe::Core _core)
{
HX_STACK_FRAME("luxe.Draw","new",0xc8b456ce,"luxe.Draw.new","luxe/Draw.hx",258,0x47df6e81)
HX_STACK_THIS(this)
HX_STACK_ARG(_core,"_core")
{
	HX_STACK_LINE(258)
	this->core = _core;
}
;
	return null();
}

//Draw_obj::~Draw_obj() { }

Dynamic Draw_obj::__CreateEmpty() { return  new Draw_obj; }
hx::ObjectPtr< Draw_obj > Draw_obj::__new(::luxe::Core _core)
{  hx::ObjectPtr< Draw_obj > result = new Draw_obj();
	result->__construct(_core);
	return result;}

Dynamic Draw_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Draw_obj > result = new Draw_obj();
	result->__construct(inArgs[0]);
	return result;}

::phoenix::geometry::LineGeometry Draw_obj::line( Dynamic options){
	HX_STACK_FRAME("luxe.Draw","line",0xd3c831c6,"luxe.Draw.line","luxe/Draw.hx",30,0x47df6e81)
	HX_STACK_THIS(this)
	HX_STACK_ARG(options,"options")
	HX_STACK_LINE(32)
	if (((options->__Field(HX_CSTRING("p0"),true) == null()))){
		HX_STACK_LINE(32)
		HX_STACK_DO_THROW(HX_CSTRING("draw.line requires p0:Vector, and p1:Vector"));
	}
	HX_STACK_LINE(33)
	if (((options->__Field(HX_CSTRING("p1"),true) == null()))){
		HX_STACK_LINE(33)
		HX_STACK_DO_THROW(HX_CSTRING("draw.line requires p0:Vector, and p1:Vector"));
	}
	HX_STACK_LINE(34)
	if (((options->__Field(HX_CSTRING("id"),true) == null()))){
		HX_STACK_LINE(34)
		options->__FieldRef(HX_CSTRING("id")) = HX_CSTRING("line.geometry");
	}
	HX_STACK_LINE(35)
	if (((options->__Field(HX_CSTRING("batcher"),true) == null()))){
		HX_STACK_LINE(35)
		options->__FieldRef(HX_CSTRING("batcher")) = ::Luxe_obj::renderer->batcher;
	}
	HX_STACK_LINE(37)
	return ::phoenix::geometry::LineGeometry_obj::__new(options);
}


HX_DEFINE_DYNAMIC_FUNC1(Draw_obj,line,return )

::phoenix::geometry::RectangleGeometry Draw_obj::rectangle( Dynamic options){
	HX_STACK_FRAME("luxe.Draw","rectangle",0x843ee11d,"luxe.Draw.rectangle","luxe/Draw.hx",42,0x47df6e81)
	HX_STACK_THIS(this)
	HX_STACK_ARG(options,"options")
	HX_STACK_LINE(44)
	if (((options->__Field(HX_CSTRING("id"),true) == null()))){
		HX_STACK_LINE(44)
		options->__FieldRef(HX_CSTRING("id")) = HX_CSTRING("rectangle.geometry");
	}
	HX_STACK_LINE(45)
	if (((options->__Field(HX_CSTRING("batcher"),true) == null()))){
		HX_STACK_LINE(45)
		options->__FieldRef(HX_CSTRING("batcher")) = ::Luxe_obj::renderer->batcher;
	}
	HX_STACK_LINE(47)
	return ::phoenix::geometry::RectangleGeometry_obj::__new(options);
}


HX_DEFINE_DYNAMIC_FUNC1(Draw_obj,rectangle,return )

::phoenix::geometry::QuadGeometry Draw_obj::box( Dynamic options){
	HX_STACK_FRAME("luxe.Draw","box",0xc8ab4479,"luxe.Draw.box","luxe/Draw.hx",52,0x47df6e81)
	HX_STACK_THIS(this)
	HX_STACK_ARG(options,"options")
	HX_STACK_LINE(54)
	if (((options->__Field(HX_CSTRING("id"),true) == null()))){
		HX_STACK_LINE(54)
		options->__FieldRef(HX_CSTRING("id")) = HX_CSTRING("quad.geometry");
	}
	HX_STACK_LINE(55)
	if (((options->__Field(HX_CSTRING("batcher"),true) == null()))){
		HX_STACK_LINE(55)
		options->__FieldRef(HX_CSTRING("batcher")) = ::Luxe_obj::renderer->batcher;
	}
	HX_STACK_LINE(57)
	return ::phoenix::geometry::QuadGeometry_obj::__new(options);
}


HX_DEFINE_DYNAMIC_FUNC1(Draw_obj,box,return )

::phoenix::geometry::RingGeometry Draw_obj::ring( Dynamic options){
	HX_STACK_FRAME("luxe.Draw","ring",0xd7bf7982,"luxe.Draw.ring","luxe/Draw.hx",62,0x47df6e81)
	HX_STACK_THIS(this)
	HX_STACK_ARG(options,"options")
	HX_STACK_LINE(64)
	if (((options->__Field(HX_CSTRING("id"),true) == null()))){
		HX_STACK_LINE(64)
		options->__FieldRef(HX_CSTRING("id")) = HX_CSTRING("ring.geometry");
	}
	HX_STACK_LINE(65)
	if (((options->__Field(HX_CSTRING("batcher"),true) == null()))){
		HX_STACK_LINE(65)
		options->__FieldRef(HX_CSTRING("batcher")) = ::Luxe_obj::renderer->batcher;
	}
	HX_STACK_LINE(67)
	return ::phoenix::geometry::RingGeometry_obj::__new(options);
}


HX_DEFINE_DYNAMIC_FUNC1(Draw_obj,ring,return )

::phoenix::geometry::CircleGeometry Draw_obj::circle( Dynamic options){
	HX_STACK_FRAME("luxe.Draw","circle",0xe4fa2462,"luxe.Draw.circle","luxe/Draw.hx",72,0x47df6e81)
	HX_STACK_THIS(this)
	HX_STACK_ARG(options,"options")
	HX_STACK_LINE(74)
	if (((options->__Field(HX_CSTRING("id"),true) == null()))){
		HX_STACK_LINE(74)
		options->__FieldRef(HX_CSTRING("id")) = HX_CSTRING("circle.geometry");
	}
	HX_STACK_LINE(75)
	if (((options->__Field(HX_CSTRING("batcher"),true) == null()))){
		HX_STACK_LINE(75)
		options->__FieldRef(HX_CSTRING("batcher")) = ::Luxe_obj::renderer->batcher;
	}
	HX_STACK_LINE(77)
	return ::phoenix::geometry::CircleGeometry_obj::__new(options);
}


HX_DEFINE_DYNAMIC_FUNC1(Draw_obj,circle,return )

::phoenix::geometry::ArcGeometry Draw_obj::arc( Dynamic options){
	HX_STACK_FRAME("luxe.Draw","arc",0xc8aa84c0,"luxe.Draw.arc","luxe/Draw.hx",82,0x47df6e81)
	HX_STACK_THIS(this)
	HX_STACK_ARG(options,"options")
	HX_STACK_LINE(84)
	if (((options->__Field(HX_CSTRING("id"),true) == null()))){
		HX_STACK_LINE(84)
		options->__FieldRef(HX_CSTRING("id")) = HX_CSTRING("arc.geometry");
	}
	HX_STACK_LINE(85)
	if (((options->__Field(HX_CSTRING("batcher"),true) == null()))){
		HX_STACK_LINE(85)
		options->__FieldRef(HX_CSTRING("batcher")) = ::Luxe_obj::renderer->batcher;
	}
	HX_STACK_LINE(87)
	return ::phoenix::geometry::ArcGeometry_obj::__new(options);
}


HX_DEFINE_DYNAMIC_FUNC1(Draw_obj,arc,return )

::phoenix::geometry::Geometry Draw_obj::ngon( Dynamic options){
	HX_STACK_FRAME("luxe.Draw","ngon",0xd5191b6a,"luxe.Draw.ngon","luxe/Draw.hx",92,0x47df6e81)
	HX_STACK_THIS(this)
	HX_STACK_ARG(options,"options")
	HX_STACK_LINE(94)
	if (((options->__Field(HX_CSTRING("id"),true) == null()))){
		HX_STACK_LINE(94)
		options->__FieldRef(HX_CSTRING("id")) = HX_CSTRING("ngon.geometry");
	}
	HX_STACK_LINE(95)
	if (((options->__Field(HX_CSTRING("batcher"),true) == null()))){
		HX_STACK_LINE(95)
		options->__FieldRef(HX_CSTRING("batcher")) = ::Luxe_obj::renderer->batcher;
	}
	HX_STACK_LINE(97)
	int _sides = (int)3;		HX_STACK_VAR(_sides,"_sides");
	HX_STACK_LINE(98)
	Float _radius = (int)64;		HX_STACK_VAR(_radius,"_radius");
	HX_STACK_LINE(99)
	bool _solid = false;		HX_STACK_VAR(_solid,"_solid");
	HX_STACK_LINE(100)
	Float _x = (int)0;		HX_STACK_VAR(_x,"_x");
	HX_STACK_LINE(101)
	Float _y = (int)0;		HX_STACK_VAR(_y,"_y");
	HX_STACK_LINE(102)
	Float _angle = (int)0;		HX_STACK_VAR(_angle,"_angle");
	HX_STACK_LINE(104)
	if (((options->__Field(HX_CSTRING("sides"),true) != null()))){
		HX_STACK_LINE(105)
		_sides = options->__Field(HX_CSTRING("sides"),true);
	}
	HX_STACK_LINE(108)
	if (((options->__Field(HX_CSTRING("r"),true) != null()))){
		HX_STACK_LINE(108)
		_radius = options->__Field(HX_CSTRING("r"),true);
	}
	HX_STACK_LINE(109)
	if (((options->__Field(HX_CSTRING("x"),true) != null()))){
		HX_STACK_LINE(109)
		_x = options->__Field(HX_CSTRING("x"),true);
	}
	HX_STACK_LINE(110)
	if (((options->__Field(HX_CSTRING("y"),true) != null()))){
		HX_STACK_LINE(110)
		_y = options->__Field(HX_CSTRING("y"),true);
	}
	HX_STACK_LINE(111)
	if (((options->__Field(HX_CSTRING("angle"),true) != null()))){
		HX_STACK_LINE(111)
		_angle = options->__Field(HX_CSTRING("angle"),true);
	}
	HX_STACK_LINE(112)
	if (((options->__Field(HX_CSTRING("solid"),true) != null()))){
		HX_STACK_LINE(112)
		_solid = options->__Field(HX_CSTRING("solid"),true);
	}
	HX_STACK_LINE(114)
	::phoenix::geometry::Geometry _geometry = ::phoenix::geometry::Geometry_obj::__new(options);		HX_STACK_VAR(_geometry,"_geometry");
	HX_STACK_LINE(116)
	if ((!(_solid))){
		HX_STACK_LINE(117)
		_geometry->set_primitive_type((int)1);
	}
	else{
		HX_STACK_LINE(119)
		_geometry->set_primitive_type((int)6);
	}
	HX_STACK_LINE(122)
	Float _two_pi = ((int)2 * ::Math_obj::PI);		HX_STACK_VAR(_two_pi,"_two_pi");
	HX_STACK_LINE(123)
	Float _sides_over_pi = (Float(::Math_obj::PI) / Float(_sides));		HX_STACK_VAR(_sides_over_pi,"_sides_over_pi");
	HX_STACK_LINE(124)
	Float _sides_over_twopi = (Float(_two_pi) / Float(_sides));		HX_STACK_VAR(_sides_over_twopi,"_sides_over_twopi");
	HX_STACK_LINE(125)
	Float _angle_rad = (_angle * 0.017453292519943278);		HX_STACK_VAR(_angle_rad,"_angle_rad");
	HX_STACK_LINE(127)
	if ((_solid)){
		HX_STACK_LINE(129)
		::phoenix::Vector _g = ::phoenix::Vector_obj::__new(_x,_y,null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(129)
		::phoenix::geometry::Vertex _g1 = ::phoenix::geometry::Vertex_obj::__new(_g,options->__Field(HX_CSTRING("color"),true),null());		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(129)
		_geometry->add(_g1);
	}
	HX_STACK_LINE(132)
	int _count;		HX_STACK_VAR(_count,"_count");
	HX_STACK_LINE(132)
	if (((_solid == false))){
		HX_STACK_LINE(132)
		_count = _sides;
	}
	else{
		HX_STACK_LINE(132)
		_count = (_sides + (int)1);
	}
	HX_STACK_LINE(133)
	Array< ::Dynamic > _points = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_points,"_points");
	HX_STACK_LINE(135)
	{
		HX_STACK_LINE(135)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(135)
		while((true)){
			HX_STACK_LINE(135)
			if ((!(((_g < _count))))){
				HX_STACK_LINE(135)
				break;
			}
			HX_STACK_LINE(135)
			int i = (_g)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(137)
			Float _g2 = ::Math_obj::sin(((_angle_rad + _sides_over_pi) + (i * _sides_over_twopi)));		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(137)
			Float __x = (_radius * _g2);		HX_STACK_VAR(__x,"__x");
			HX_STACK_LINE(138)
			Float _g3 = ::Math_obj::cos(((_angle_rad + _sides_over_pi) + (i * _sides_over_twopi)));		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(138)
			Float __y = (_radius * _g3);		HX_STACK_VAR(__y,"__y");
			HX_STACK_LINE(139)
			::phoenix::Vector __pos = ::phoenix::Vector_obj::__new((_x + __x),(_y + __y),(int)0,null());		HX_STACK_VAR(__pos,"__pos");
			HX_STACK_LINE(141)
			::phoenix::geometry::Vertex _g4 = ::phoenix::geometry::Vertex_obj::__new(__pos,options->__Field(HX_CSTRING("color"),true),null());		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(141)
			_geometry->add(_g4);
			HX_STACK_LINE(143)
			if ((!(_solid))){
				HX_STACK_LINE(144)
				if (((i > (int)0))){
					HX_STACK_LINE(145)
					::phoenix::Vector _last = _points->__get((i - (int)1)).StaticCast< ::phoenix::Vector >();		HX_STACK_VAR(_last,"_last");
					HX_STACK_LINE(146)
					::phoenix::geometry::Vertex _g5 = ::phoenix::geometry::Vertex_obj::__new(__pos,options->__Field(HX_CSTRING("color"),true),null());		HX_STACK_VAR(_g5,"_g5");
					HX_STACK_LINE(146)
					_geometry->add(_g5);
				}
			}
			HX_STACK_LINE(150)
			_points->push(__pos);
		}
	}
	HX_STACK_LINE(154)
	if ((!(_solid))){
		HX_STACK_LINE(155)
		::phoenix::geometry::Vertex _g6 = ::phoenix::geometry::Vertex_obj::__new(_points->__get((int)0).StaticCast< ::phoenix::Vector >(),options->__Field(HX_CSTRING("color"),true),null());		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(155)
		_geometry->add(_g6);
	}
	HX_STACK_LINE(158)
	return _geometry;
}


HX_DEFINE_DYNAMIC_FUNC1(Draw_obj,ngon,return )

::phoenix::geometry::QuadGeometry Draw_obj::texture( Dynamic options){
	HX_STACK_FRAME("luxe.Draw","texture",0x1f101e49,"luxe.Draw.texture","luxe/Draw.hx",163,0x47df6e81)
	HX_STACK_THIS(this)
	HX_STACK_ARG(options,"options")
	HX_STACK_LINE(165)
	if (((options->__Field(HX_CSTRING("id"),true) == null()))){
		HX_STACK_LINE(165)
		options->__FieldRef(HX_CSTRING("id")) = HX_CSTRING("texture.geometry");
	}
	HX_STACK_LINE(166)
	if (((options->__Field(HX_CSTRING("batcher"),true) == null()))){
		HX_STACK_LINE(166)
		options->__FieldRef(HX_CSTRING("batcher")) = ::Luxe_obj::renderer->batcher;
	}
	HX_STACK_LINE(168)
	Float _x = (int)0;		HX_STACK_VAR(_x,"_x");
	HX_STACK_LINE(169)
	Float _y = (int)0;		HX_STACK_VAR(_y,"_y");
	HX_STACK_LINE(170)
	Float _w = (int)0;		HX_STACK_VAR(_w,"_w");
	HX_STACK_LINE(171)
	Float _h = (int)0;		HX_STACK_VAR(_h,"_h");
	HX_STACK_LINE(174)
	int _tw = (int)64;		HX_STACK_VAR(_tw,"_tw");
	HX_STACK_LINE(175)
	int _th = (int)64;		HX_STACK_VAR(_th,"_th");
	HX_STACK_LINE(177)
	if (((options->__Field(HX_CSTRING("texture"),true) != null()))){
		HX_STACK_LINE(178)
		_tw = options->__Field(HX_CSTRING("texture"),true)->__Field(HX_CSTRING("width"),true);
		HX_STACK_LINE(179)
		_th = options->__Field(HX_CSTRING("texture"),true)->__Field(HX_CSTRING("height"),true);
		HX_STACK_LINE(181)
		if (((options->__Field(HX_CSTRING("size"),true) == null()))){
			HX_STACK_LINE(182)
			_w = _tw;
			HX_STACK_LINE(183)
			_h = _th;
		}
	}
	HX_STACK_LINE(187)
	if (((options->__Field(HX_CSTRING("pos"),true) != null()))){
		HX_STACK_LINE(188)
		_x = options->__Field(HX_CSTRING("pos"),true)->__Field(HX_CSTRING("x"),true);
		HX_STACK_LINE(189)
		_y = options->__Field(HX_CSTRING("pos"),true)->__Field(HX_CSTRING("y"),true);
	}
	HX_STACK_LINE(191)
	if (((options->__Field(HX_CSTRING("size"),true) != null()))){
		HX_STACK_LINE(192)
		_w = options->__Field(HX_CSTRING("size"),true)->__Field(HX_CSTRING("x"),true);
		HX_STACK_LINE(193)
		_h = options->__Field(HX_CSTRING("size"),true)->__Field(HX_CSTRING("y"),true);
	}
	HX_STACK_LINE(196)
	if (((options->__Field(HX_CSTRING("x"),true) == null()))){
		HX_STACK_LINE(197)
		options->__FieldRef(HX_CSTRING("x")) = _x;
	}
	HX_STACK_LINE(200)
	if (((options->__Field(HX_CSTRING("y"),true) == null()))){
		HX_STACK_LINE(201)
		options->__FieldRef(HX_CSTRING("y")) = _y;
	}
	HX_STACK_LINE(204)
	if (((options->__Field(HX_CSTRING("w"),true) == null()))){
		HX_STACK_LINE(205)
		options->__FieldRef(HX_CSTRING("w")) = _w;
	}
	HX_STACK_LINE(208)
	if (((options->__Field(HX_CSTRING("h"),true) == null()))){
		HX_STACK_LINE(209)
		options->__FieldRef(HX_CSTRING("h")) = _h;
	}
	HX_STACK_LINE(212)
	::phoenix::geometry::QuadGeometry _quad = ::phoenix::geometry::QuadGeometry_obj::__new(options);		HX_STACK_VAR(_quad,"_quad");
	HX_STACK_LINE(214)
	Float _ux = (int)0;		HX_STACK_VAR(_ux,"_ux");
	HX_STACK_LINE(215)
	Float _uy = (int)0;		HX_STACK_VAR(_uy,"_uy");
	HX_STACK_LINE(216)
	Float _uw = _tw;		HX_STACK_VAR(_uw,"_uw");
	HX_STACK_LINE(217)
	Float _uh = _th;		HX_STACK_VAR(_uh,"_uh");
	HX_STACK_LINE(219)
	if (((options->__Field(HX_CSTRING("uv"),true) != null()))){
		HX_STACK_LINE(220)
		_ux = options->__Field(HX_CSTRING("uv"),true)->__Field(HX_CSTRING("x"),true);
		HX_STACK_LINE(221)
		_uy = options->__Field(HX_CSTRING("uv"),true)->__Field(HX_CSTRING("y"),true);
		HX_STACK_LINE(222)
		_uw = options->__Field(HX_CSTRING("uv"),true)->__Field(HX_CSTRING("w"),true);
		HX_STACK_LINE(223)
		_uh = options->__Field(HX_CSTRING("uv"),true)->__Field(HX_CSTRING("h"),true);
	}
	HX_STACK_LINE(226)
	::phoenix::Rectangle _g = ::phoenix::Rectangle_obj::__new(_ux,_uy,_uw,_uh);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(226)
	_quad->uv(_g);
	HX_STACK_LINE(228)
	return _quad;
}


HX_DEFINE_DYNAMIC_FUNC1(Draw_obj,texture,return )

::phoenix::geometry::TextGeometry Draw_obj::text( Dynamic options){
	HX_STACK_FRAME("luxe.Draw","text",0xd90ee67f,"luxe.Draw.text","luxe/Draw.hx",233,0x47df6e81)
	HX_STACK_THIS(this)
	HX_STACK_ARG(options,"options")
	HX_STACK_LINE(235)
	if (((options->__Field(HX_CSTRING("batcher"),true) == null()))){
		HX_STACK_LINE(235)
		options->__FieldRef(HX_CSTRING("batcher")) = ::Luxe_obj::renderer->batcher;
	}
	HX_STACK_LINE(237)
	return ::phoenix::geometry::TextGeometry_obj::__new(options);
}


HX_DEFINE_DYNAMIC_FUNC1(Draw_obj,text,return )

::phoenix::geometry::PlaneGeometry Draw_obj::plane( Dynamic options){
	HX_STACK_FRAME("luxe.Draw","plane",0xcaef7c4a,"luxe.Draw.plane","luxe/Draw.hx",243,0x47df6e81)
	HX_STACK_THIS(this)
	HX_STACK_ARG(options,"options")
	HX_STACK_LINE(245)
	if (((options->__Field(HX_CSTRING("id"),true) == null()))){
		HX_STACK_LINE(245)
		options->__FieldRef(HX_CSTRING("id")) = HX_CSTRING("plane.geometry");
	}
	HX_STACK_LINE(246)
	if (((options->__Field(HX_CSTRING("batcher"),true) == null()))){
		HX_STACK_LINE(246)
		options->__FieldRef(HX_CSTRING("batcher")) = ::Luxe_obj::renderer->batcher;
	}
	HX_STACK_LINE(248)
	return ::phoenix::geometry::PlaneGeometry_obj::__new(options);
}


HX_DEFINE_DYNAMIC_FUNC1(Draw_obj,plane,return )


Draw_obj::Draw_obj()
{
}

void Draw_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Draw);
	HX_MARK_MEMBER_NAME(core,"core");
	HX_MARK_END_CLASS();
}

void Draw_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(core,"core");
}

Dynamic Draw_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"box") ) { return box_dyn(); }
		if (HX_FIELD_EQ(inName,"arc") ) { return arc_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"line") ) { return line_dyn(); }
		if (HX_FIELD_EQ(inName,"ring") ) { return ring_dyn(); }
		if (HX_FIELD_EQ(inName,"ngon") ) { return ngon_dyn(); }
		if (HX_FIELD_EQ(inName,"text") ) { return text_dyn(); }
		if (HX_FIELD_EQ(inName,"core") ) { return core; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"plane") ) { return plane_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"circle") ) { return circle_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"texture") ) { return texture_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"rectangle") ) { return rectangle_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Draw_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"core") ) { core=inValue.Cast< ::luxe::Core >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Draw_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("core"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::luxe::Core*/ ,(int)offsetof(Draw_obj,core),HX_CSTRING("core")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("line"),
	HX_CSTRING("rectangle"),
	HX_CSTRING("box"),
	HX_CSTRING("ring"),
	HX_CSTRING("circle"),
	HX_CSTRING("arc"),
	HX_CSTRING("ngon"),
	HX_CSTRING("texture"),
	HX_CSTRING("text"),
	HX_CSTRING("plane"),
	HX_CSTRING("core"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Draw_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Draw_obj::__mClass,"__mClass");
};

#endif

Class Draw_obj::__mClass;

void Draw_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("luxe.Draw"), hx::TCanCast< Draw_obj> ,sStaticFields,sMemberFields,
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

void Draw_obj::__boot()
{
}

} // end namespace luxe
