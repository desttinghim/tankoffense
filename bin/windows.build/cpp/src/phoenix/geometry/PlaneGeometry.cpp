#include <hxcpp.h>

#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_luxe_ID
#include <luxe/ID.h>
#endif
#ifndef INCLUDED_luxe_resource_Resource
#include <luxe/resource/Resource.h>
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
#ifndef INCLUDED_phoenix_Texture
#include <phoenix/Texture.h>
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
#ifndef INCLUDED_phoenix_geometry_PlaneGeometry
#include <phoenix/geometry/PlaneGeometry.h>
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

Void PlaneGeometry_obj::__construct(Dynamic options)
{
HX_STACK_FRAME("phoenix.geometry.PlaneGeometry","new",0xc7be5cc3,"phoenix.geometry.PlaneGeometry.new","phoenix/geometry/PlaneGeometry.hx",12,0xc99ce3ed)
HX_STACK_THIS(this)
HX_STACK_ARG(options,"options")
{
	HX_STACK_LINE(19)
	this->is_set = false;
	HX_STACK_LINE(15)
	this->flipy = false;
	HX_STACK_LINE(14)
	this->flipx = false;
	HX_STACK_LINE(23)
	super::__construct(options);
	HX_STACK_LINE(25)
	if (((options == null()))){
		HX_STACK_LINE(25)
		return null();
	}
	HX_STACK_LINE(28)
	if (((options->__Field(HX_CSTRING("flipx"),true) != null()))){
		HX_STACK_LINE(28)
		this->set_flipx(options->__Field(HX_CSTRING("flipx"),true));
	}
	HX_STACK_LINE(29)
	if (((options->__Field(HX_CSTRING("flipy"),true) != null()))){
		HX_STACK_LINE(29)
		this->set_flipy(options->__Field(HX_CSTRING("flipy"),true));
	}
	HX_STACK_LINE(32)
	::phoenix::Rectangle _g = ::phoenix::Rectangle_obj::__new((int)0,(int)0,(int)1,(int)1);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(32)
	this->_uv_cache = _g;
	HX_STACK_LINE(35)
	::phoenix::Rectangle _g1 = ::phoenix::Rectangle_obj::__new(options->__Field(HX_CSTRING("x"),true),options->__Field(HX_CSTRING("z"),true),options->__Field(HX_CSTRING("w"),true),options->__Field(HX_CSTRING("h"),true));		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(35)
	this->set(_g1,options->__Field(HX_CSTRING("y"),true));
	HX_STACK_LINE(37)
	if (((options->__Field(HX_CSTRING("visible"),true) != null()))){
		HX_STACK_LINE(37)
		this->set_visible(options->__Field(HX_CSTRING("visible"),true));
	}
	HX_STACK_LINE(38)
	if (((options->__Field(HX_CSTRING("immediate"),true) != null()))){
		HX_STACK_LINE(38)
		this->immediate = options->__Field(HX_CSTRING("immediate"),true);
	}
}
;
	return null();
}

//PlaneGeometry_obj::~PlaneGeometry_obj() { }

Dynamic PlaneGeometry_obj::__CreateEmpty() { return  new PlaneGeometry_obj; }
hx::ObjectPtr< PlaneGeometry_obj > PlaneGeometry_obj::__new(Dynamic options)
{  hx::ObjectPtr< PlaneGeometry_obj > result = new PlaneGeometry_obj();
	result->__construct(options);
	return result;}

Dynamic PlaneGeometry_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< PlaneGeometry_obj > result = new PlaneGeometry_obj();
	result->__construct(inArgs[0]);
	return result;}

Void PlaneGeometry_obj::uv( ::phoenix::Rectangle _rect){
{
		HX_STACK_FRAME("phoenix.geometry.PlaneGeometry","uv",0x695cb75e,"phoenix.geometry.PlaneGeometry.uv","phoenix/geometry/PlaneGeometry.hx",42,0xc99ce3ed)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_rect,"_rect")
		HX_STACK_LINE(44)
		::phoenix::Texture _g = this->get_texture();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(44)
		if (((_g == null()))){
			HX_STACK_LINE(45)
			::haxe::Log_obj::trace(HX_CSTRING("Warning : calling UV on a geometry with null texture."),hx::SourceInfo(HX_CSTRING("PlaneGeometry.hx"),45,HX_CSTRING("phoenix.geometry.PlaneGeometry"),HX_CSTRING("uv")));
			HX_STACK_LINE(46)
			return null();
		}
		HX_STACK_LINE(49)
		Float tlx = (Float(_rect->x) / Float(this->get_texture()->width_actual));		HX_STACK_VAR(tlx,"tlx");
		HX_STACK_LINE(50)
		Float tly = (Float(_rect->y) / Float(this->get_texture()->height_actual));		HX_STACK_VAR(tly,"tly");
		HX_STACK_LINE(51)
		Float szx = (Float(_rect->w) / Float(this->get_texture()->width_actual));		HX_STACK_VAR(szx,"szx");
		HX_STACK_LINE(52)
		Float szy = (Float(_rect->h) / Float(this->get_texture()->height_actual));		HX_STACK_VAR(szy,"szy");
		HX_STACK_LINE(54)
		::phoenix::Rectangle _g1 = ::phoenix::Rectangle_obj::__new(tlx,tly,szx,szy);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(54)
		this->uv_space(_g1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(PlaneGeometry_obj,uv,(void))

Void PlaneGeometry_obj::uv_space( ::phoenix::Rectangle _rect){
{
		HX_STACK_FRAME("phoenix.geometry.PlaneGeometry","uv_space",0x706f65e5,"phoenix.geometry.PlaneGeometry.uv_space","phoenix/geometry/PlaneGeometry.hx",58,0xc99ce3ed)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_rect,"_rect")
		HX_STACK_LINE(61)
		Float sz_x = _rect->w;		HX_STACK_VAR(sz_x,"sz_x");
		HX_STACK_LINE(62)
		Float sz_y = _rect->h;		HX_STACK_VAR(sz_y,"sz_y");
		HX_STACK_LINE(65)
		Float tl_x = _rect->x;		HX_STACK_VAR(tl_x,"tl_x");
		HX_STACK_LINE(66)
		Float tl_y = _rect->y;		HX_STACK_VAR(tl_y,"tl_y");
		HX_STACK_LINE(69)
		this->_uv_cache->set(tl_x,tl_y,sz_x,sz_y);
		HX_STACK_LINE(72)
		Float tr_x = (tl_x + sz_x);		HX_STACK_VAR(tr_x,"tr_x");
		HX_STACK_LINE(73)
		Float tr_y = tl_y;		HX_STACK_VAR(tr_y,"tr_y");
		HX_STACK_LINE(75)
		Float br_x = (tl_x + sz_x);		HX_STACK_VAR(br_x,"br_x");
		HX_STACK_LINE(76)
		Float br_y = (tl_y + sz_y);		HX_STACK_VAR(br_y,"br_y");
		HX_STACK_LINE(78)
		Float bl_x = tl_x;		HX_STACK_VAR(bl_x,"bl_x");
		HX_STACK_LINE(79)
		Float bl_y = (tl_y + sz_y);		HX_STACK_VAR(bl_y,"bl_y");
		HX_STACK_LINE(81)
		Float tmp_x = 0.0;		HX_STACK_VAR(tmp_x,"tmp_x");
		HX_STACK_LINE(82)
		Float tmp_y = 0.0;		HX_STACK_VAR(tmp_y,"tmp_y");
		HX_STACK_LINE(85)
		if ((this->flipy)){
			HX_STACK_LINE(88)
			tmp_y = bl_y;
			HX_STACK_LINE(89)
			bl_y = tl_y;
			HX_STACK_LINE(90)
			tl_y = tmp_y;
			HX_STACK_LINE(93)
			tmp_y = br_y;
			HX_STACK_LINE(94)
			br_y = tr_y;
			HX_STACK_LINE(95)
			tr_y = tmp_y;
		}
		HX_STACK_LINE(100)
		if ((this->flipx)){
			HX_STACK_LINE(103)
			tmp_x = tr_x;
			HX_STACK_LINE(104)
			tr_x = tl_x;
			HX_STACK_LINE(105)
			tl_x = tmp_x;
			HX_STACK_LINE(108)
			tmp_x = br_x;
			HX_STACK_LINE(109)
			br_x = bl_x;
			HX_STACK_LINE(110)
			bl_x = tmp_x;
		}
		HX_STACK_LINE(114)
		{
			HX_STACK_LINE(114)
			::phoenix::geometry::TextureCoord _this = this->vertices->__get((int)0).StaticCast< ::phoenix::geometry::Vertex >()->uv->uv0;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(114)
			_this->u = tl_x;
			HX_STACK_LINE(114)
			_this->v = tl_y;
			HX_STACK_LINE(114)
			_this;
		}
		HX_STACK_LINE(115)
		{
			HX_STACK_LINE(115)
			::phoenix::geometry::TextureCoord _this = this->vertices->__get((int)1).StaticCast< ::phoenix::geometry::Vertex >()->uv->uv0;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(115)
			_this->u = tr_x;
			HX_STACK_LINE(115)
			_this->v = tr_y;
			HX_STACK_LINE(115)
			_this;
		}
		HX_STACK_LINE(116)
		{
			HX_STACK_LINE(116)
			::phoenix::geometry::TextureCoord _this = this->vertices->__get((int)2).StaticCast< ::phoenix::geometry::Vertex >()->uv->uv0;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(116)
			_this->u = br_x;
			HX_STACK_LINE(116)
			_this->v = br_y;
			HX_STACK_LINE(116)
			_this;
		}
		HX_STACK_LINE(118)
		{
			HX_STACK_LINE(118)
			::phoenix::geometry::TextureCoord _this = this->vertices->__get((int)3).StaticCast< ::phoenix::geometry::Vertex >()->uv->uv0;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(118)
			_this->u = bl_x;
			HX_STACK_LINE(118)
			_this->v = bl_y;
			HX_STACK_LINE(118)
			_this;
		}
		HX_STACK_LINE(119)
		{
			HX_STACK_LINE(119)
			::phoenix::geometry::TextureCoord _this = this->vertices->__get((int)4).StaticCast< ::phoenix::geometry::Vertex >()->uv->uv0;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(119)
			_this->u = tl_x;
			HX_STACK_LINE(119)
			_this->v = tl_y;
			HX_STACK_LINE(119)
			_this;
		}
		HX_STACK_LINE(120)
		{
			HX_STACK_LINE(120)
			::phoenix::geometry::TextureCoord _this = this->vertices->__get((int)5).StaticCast< ::phoenix::geometry::Vertex >()->uv->uv0;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(120)
			_this->u = br_x;
			HX_STACK_LINE(120)
			_this->v = br_y;
			HX_STACK_LINE(120)
			_this;
		}
		HX_STACK_LINE(123)
		this->set_dirty(true);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(PlaneGeometry_obj,uv_space,(void))

Void PlaneGeometry_obj::set( ::phoenix::Rectangle quad,Float y){
{
		HX_STACK_FRAME("phoenix.geometry.PlaneGeometry","set",0xc7c22805,"phoenix.geometry.PlaneGeometry.set","phoenix/geometry/PlaneGeometry.hx",127,0xc99ce3ed)
		HX_STACK_THIS(this)
		HX_STACK_ARG(quad,"quad")
		HX_STACK_ARG(y,"y")
		HX_STACK_LINE(129)
		this->vertices->splice((int)0,this->vertices->length);
		HX_STACK_LINE(135)
		::phoenix::Vector _g = ::phoenix::Vector_obj::__new((int)0,(int)0,(int)0,null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(135)
		::phoenix::geometry::Vertex vert0 = ::phoenix::geometry::Vertex_obj::__new(_g,this->color,null());		HX_STACK_VAR(vert0,"vert0");
		HX_STACK_LINE(136)
		::phoenix::Vector _g1 = ::phoenix::Vector_obj::__new(quad->w,(int)0,(int)0,null());		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(136)
		::phoenix::geometry::Vertex vert1 = ::phoenix::geometry::Vertex_obj::__new(_g1,this->color,null());		HX_STACK_VAR(vert1,"vert1");
		HX_STACK_LINE(137)
		::phoenix::Vector _g2 = ::phoenix::Vector_obj::__new(quad->w,(int)0,quad->h,null());		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(137)
		::phoenix::geometry::Vertex vert2 = ::phoenix::geometry::Vertex_obj::__new(_g2,this->color,null());		HX_STACK_VAR(vert2,"vert2");
		HX_STACK_LINE(140)
		::phoenix::Vector _g3 = ::phoenix::Vector_obj::__new((int)0,(int)0,quad->h,null());		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(140)
		::phoenix::geometry::Vertex vert3 = ::phoenix::geometry::Vertex_obj::__new(_g3,this->color,null());		HX_STACK_VAR(vert3,"vert3");
		HX_STACK_LINE(141)
		::phoenix::Vector _g4 = ::phoenix::Vector_obj::__new((int)0,(int)0,(int)0,null());		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(141)
		::phoenix::geometry::Vertex vert4 = ::phoenix::geometry::Vertex_obj::__new(_g4,this->color,null());		HX_STACK_VAR(vert4,"vert4");
		HX_STACK_LINE(142)
		::phoenix::Vector _g5 = ::phoenix::Vector_obj::__new(quad->w,(int)0,quad->h,null());		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(142)
		::phoenix::geometry::Vertex vert5 = ::phoenix::geometry::Vertex_obj::__new(_g5,this->color,null());		HX_STACK_VAR(vert5,"vert5");
		HX_STACK_LINE(147)
		this->add(vert5);
		HX_STACK_LINE(149)
		this->add(vert4);
		HX_STACK_LINE(151)
		this->add(vert3);
		HX_STACK_LINE(153)
		this->add(vert2);
		HX_STACK_LINE(155)
		this->add(vert1);
		HX_STACK_LINE(157)
		this->add(vert0);
		HX_STACK_LINE(160)
		this->set_primitive_type((int)4);
		HX_STACK_LINE(161)
		this->immediate = false;
		HX_STACK_LINE(164)
		{
			HX_STACK_LINE(164)
			::phoenix::Vector value = ::phoenix::Vector_obj::__new(quad->x,y,quad->y,null());		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(164)
			{
				HX_STACK_LINE(164)
				::phoenix::Spatial _this = this->transform->local;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(164)
				_this->pos = value;
				HX_STACK_LINE(164)
				if (((value != null()))){
					HX_STACK_LINE(164)
					::phoenix::Vector_obj::Listen(_this->pos,_this->_pos_change_dyn());
					HX_STACK_LINE(164)
					if (((bool((_this->pos_changed != null())) && bool(!(_this->ignore_listeners))))){
						HX_STACK_LINE(164)
						_this->pos_changed(_this->pos);
					}
				}
				HX_STACK_LINE(164)
				_this->pos;
			}
		}
		HX_STACK_LINE(167)
		this->is_set = true;
		HX_STACK_LINE(170)
		::phoenix::Rectangle _g6 = ::phoenix::Rectangle_obj::__new((int)0,(int)0,(int)1,(int)1);		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(170)
		this->uv_space(_g6);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(PlaneGeometry_obj,set,(void))

bool PlaneGeometry_obj::set_flipx( bool _val){
	HX_STACK_FRAME("phoenix.geometry.PlaneGeometry","set_flipx",0x2e350631,"phoenix.geometry.PlaneGeometry.set_flipx","phoenix/geometry/PlaneGeometry.hx",174,0xc99ce3ed)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_val,"_val")
	HX_STACK_LINE(176)
	this->flipx = _val;
	HX_STACK_LINE(178)
	if ((this->is_set)){
		HX_STACK_LINE(179)
		this->uv_space(this->_uv_cache);
	}
	HX_STACK_LINE(182)
	return this->flipx;
}


HX_DEFINE_DYNAMIC_FUNC1(PlaneGeometry_obj,set_flipx,return )

bool PlaneGeometry_obj::set_flipy( bool _val){
	HX_STACK_FRAME("phoenix.geometry.PlaneGeometry","set_flipy",0x2e350632,"phoenix.geometry.PlaneGeometry.set_flipy","phoenix/geometry/PlaneGeometry.hx",185,0xc99ce3ed)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_val,"_val")
	HX_STACK_LINE(188)
	this->flipy = _val;
	HX_STACK_LINE(190)
	if ((this->is_set)){
		HX_STACK_LINE(191)
		this->uv_space(this->_uv_cache);
	}
	HX_STACK_LINE(194)
	return this->flipy;
}


HX_DEFINE_DYNAMIC_FUNC1(PlaneGeometry_obj,set_flipy,return )


PlaneGeometry_obj::PlaneGeometry_obj()
{
}

void PlaneGeometry_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(PlaneGeometry);
	HX_MARK_MEMBER_NAME(flipx,"flipx");
	HX_MARK_MEMBER_NAME(flipy,"flipy");
	HX_MARK_MEMBER_NAME(_uv_cache,"_uv_cache");
	HX_MARK_MEMBER_NAME(is_set,"is_set");
	::phoenix::geometry::Geometry_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void PlaneGeometry_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(flipx,"flipx");
	HX_VISIT_MEMBER_NAME(flipy,"flipy");
	HX_VISIT_MEMBER_NAME(_uv_cache,"_uv_cache");
	HX_VISIT_MEMBER_NAME(is_set,"is_set");
	::phoenix::geometry::Geometry_obj::__Visit(HX_VISIT_ARG);
}

Dynamic PlaneGeometry_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"uv") ) { return uv_dyn(); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"set") ) { return set_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"flipx") ) { return flipx; }
		if (HX_FIELD_EQ(inName,"flipy") ) { return flipy; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"is_set") ) { return is_set; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"uv_space") ) { return uv_space_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_uv_cache") ) { return _uv_cache; }
		if (HX_FIELD_EQ(inName,"set_flipx") ) { return set_flipx_dyn(); }
		if (HX_FIELD_EQ(inName,"set_flipy") ) { return set_flipy_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic PlaneGeometry_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"flipx") ) { if (inCallProp) return set_flipx(inValue);flipx=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"flipy") ) { if (inCallProp) return set_flipy(inValue);flipy=inValue.Cast< bool >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"is_set") ) { is_set=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_uv_cache") ) { _uv_cache=inValue.Cast< ::phoenix::Rectangle >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void PlaneGeometry_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("flipx"));
	outFields->push(HX_CSTRING("flipy"));
	outFields->push(HX_CSTRING("_uv_cache"));
	outFields->push(HX_CSTRING("is_set"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(PlaneGeometry_obj,flipx),HX_CSTRING("flipx")},
	{hx::fsBool,(int)offsetof(PlaneGeometry_obj,flipy),HX_CSTRING("flipy")},
	{hx::fsObject /*::phoenix::Rectangle*/ ,(int)offsetof(PlaneGeometry_obj,_uv_cache),HX_CSTRING("_uv_cache")},
	{hx::fsBool,(int)offsetof(PlaneGeometry_obj,is_set),HX_CSTRING("is_set")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("flipx"),
	HX_CSTRING("flipy"),
	HX_CSTRING("_uv_cache"),
	HX_CSTRING("is_set"),
	HX_CSTRING("uv"),
	HX_CSTRING("uv_space"),
	HX_CSTRING("set"),
	HX_CSTRING("set_flipx"),
	HX_CSTRING("set_flipy"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PlaneGeometry_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PlaneGeometry_obj::__mClass,"__mClass");
};

#endif

Class PlaneGeometry_obj::__mClass;

void PlaneGeometry_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("phoenix.geometry.PlaneGeometry"), hx::TCanCast< PlaneGeometry_obj> ,sStaticFields,sMemberFields,
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

void PlaneGeometry_obj::__boot()
{
}

} // end namespace phoenix
} // end namespace geometry
