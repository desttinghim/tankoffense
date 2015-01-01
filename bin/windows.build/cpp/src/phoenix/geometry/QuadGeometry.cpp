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
#ifndef INCLUDED_phoenix_geometry_QuadGeometry
#include <phoenix/geometry/QuadGeometry.h>
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

Void QuadGeometry_obj::__construct(Dynamic options)
{
HX_STACK_FRAME("phoenix.geometry.QuadGeometry","new",0xa66b69c8,"phoenix.geometry.QuadGeometry.new","phoenix/geometry/QuadGeometry.hx",11,0x485a4ac8)
HX_STACK_THIS(this)
HX_STACK_ARG(options,"options")
{
	HX_STACK_LINE(18)
	this->is_set = false;
	HX_STACK_LINE(14)
	this->flipy = false;
	HX_STACK_LINE(13)
	this->flipx = false;
	HX_STACK_LINE(22)
	super::__construct(options);
	HX_STACK_LINE(24)
	if (((options == null()))){
		HX_STACK_LINE(24)
		return null();
	}
	HX_STACK_LINE(27)
	if (((options->__Field(HX_CSTRING("flipx"),true) != null()))){
		HX_STACK_LINE(27)
		this->set_flipx(options->__Field(HX_CSTRING("flipx"),true));
	}
	HX_STACK_LINE(28)
	if (((options->__Field(HX_CSTRING("flipy"),true) != null()))){
		HX_STACK_LINE(28)
		this->set_flipy(options->__Field(HX_CSTRING("flipy"),true));
	}
	HX_STACK_LINE(31)
	::phoenix::Rectangle _g = ::phoenix::Rectangle_obj::__new((int)0,(int)0,(int)1,(int)1);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(31)
	this->_uv_cache = _g;
	HX_STACK_LINE(34)
	::phoenix::Rectangle _g1 = ::phoenix::Rectangle_obj::__new(options->__Field(HX_CSTRING("x"),true),options->__Field(HX_CSTRING("y"),true),options->__Field(HX_CSTRING("w"),true),options->__Field(HX_CSTRING("h"),true));		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(34)
	this->set(_g1);
	HX_STACK_LINE(36)
	if (((options->__Field(HX_CSTRING("visible"),true) != null()))){
		HX_STACK_LINE(36)
		this->set_visible(options->__Field(HX_CSTRING("visible"),true));
	}
	HX_STACK_LINE(37)
	if (((options->__Field(HX_CSTRING("immediate"),true) != null()))){
		HX_STACK_LINE(37)
		this->immediate = options->__Field(HX_CSTRING("immediate"),true);
	}
}
;
	return null();
}

//QuadGeometry_obj::~QuadGeometry_obj() { }

Dynamic QuadGeometry_obj::__CreateEmpty() { return  new QuadGeometry_obj; }
hx::ObjectPtr< QuadGeometry_obj > QuadGeometry_obj::__new(Dynamic options)
{  hx::ObjectPtr< QuadGeometry_obj > result = new QuadGeometry_obj();
	result->__construct(options);
	return result;}

Dynamic QuadGeometry_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< QuadGeometry_obj > result = new QuadGeometry_obj();
	result->__construct(inArgs[0]);
	return result;}

Void QuadGeometry_obj::uv( ::phoenix::Rectangle _rect){
{
		HX_STACK_FRAME("phoenix.geometry.QuadGeometry","uv",0x7822f1f9,"phoenix.geometry.QuadGeometry.uv","phoenix/geometry/QuadGeometry.hx",41,0x485a4ac8)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_rect,"_rect")
		HX_STACK_LINE(43)
		::phoenix::Texture _g = this->get_texture();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(43)
		if (((_g == null()))){
			HX_STACK_LINE(44)
			::haxe::Log_obj::trace(HX_CSTRING("Warning : calling UV on a geometry with null texture."),hx::SourceInfo(HX_CSTRING("QuadGeometry.hx"),44,HX_CSTRING("phoenix.geometry.QuadGeometry"),HX_CSTRING("uv")));
			HX_STACK_LINE(45)
			return null();
		}
		HX_STACK_LINE(48)
		Float tlx = (Float(_rect->x) / Float(this->get_texture()->width_actual));		HX_STACK_VAR(tlx,"tlx");
		HX_STACK_LINE(49)
		Float tly = (Float(_rect->y) / Float(this->get_texture()->height_actual));		HX_STACK_VAR(tly,"tly");
		HX_STACK_LINE(50)
		Float szx = (Float(_rect->w) / Float(this->get_texture()->width_actual));		HX_STACK_VAR(szx,"szx");
		HX_STACK_LINE(51)
		Float szy = (Float(_rect->h) / Float(this->get_texture()->height_actual));		HX_STACK_VAR(szy,"szy");
		HX_STACK_LINE(53)
		::phoenix::Rectangle _g1 = ::phoenix::Rectangle_obj::__new(tlx,tly,szx,szy);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(53)
		this->uv_space(_g1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(QuadGeometry_obj,uv,(void))

Void QuadGeometry_obj::uv_space( ::phoenix::Rectangle _rect){
{
		HX_STACK_FRAME("phoenix.geometry.QuadGeometry","uv_space",0xe21c06c0,"phoenix.geometry.QuadGeometry.uv_space","phoenix/geometry/QuadGeometry.hx",57,0x485a4ac8)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_rect,"_rect")
		HX_STACK_LINE(60)
		Float sz_x = _rect->w;		HX_STACK_VAR(sz_x,"sz_x");
		HX_STACK_LINE(61)
		Float sz_y = _rect->h;		HX_STACK_VAR(sz_y,"sz_y");
		HX_STACK_LINE(64)
		Float tl_x = _rect->x;		HX_STACK_VAR(tl_x,"tl_x");
		HX_STACK_LINE(65)
		Float tl_y = _rect->y;		HX_STACK_VAR(tl_y,"tl_y");
		HX_STACK_LINE(68)
		this->_uv_cache->set(tl_x,tl_y,sz_x,sz_y);
		HX_STACK_LINE(71)
		Float tr_x = (tl_x + sz_x);		HX_STACK_VAR(tr_x,"tr_x");
		HX_STACK_LINE(72)
		Float tr_y = tl_y;		HX_STACK_VAR(tr_y,"tr_y");
		HX_STACK_LINE(74)
		Float br_x = (tl_x + sz_x);		HX_STACK_VAR(br_x,"br_x");
		HX_STACK_LINE(75)
		Float br_y = (tl_y + sz_y);		HX_STACK_VAR(br_y,"br_y");
		HX_STACK_LINE(77)
		Float bl_x = tl_x;		HX_STACK_VAR(bl_x,"bl_x");
		HX_STACK_LINE(78)
		Float bl_y = (tl_y + sz_y);		HX_STACK_VAR(bl_y,"bl_y");
		HX_STACK_LINE(80)
		Float tmp_x = 0.0;		HX_STACK_VAR(tmp_x,"tmp_x");
		HX_STACK_LINE(81)
		Float tmp_y = 0.0;		HX_STACK_VAR(tmp_y,"tmp_y");
		HX_STACK_LINE(84)
		if ((this->flipy)){
			HX_STACK_LINE(87)
			tmp_y = bl_y;
			HX_STACK_LINE(88)
			bl_y = tl_y;
			HX_STACK_LINE(89)
			tl_y = tmp_y;
			HX_STACK_LINE(92)
			tmp_y = br_y;
			HX_STACK_LINE(93)
			br_y = tr_y;
			HX_STACK_LINE(94)
			tr_y = tmp_y;
		}
		HX_STACK_LINE(99)
		if ((this->flipx)){
			HX_STACK_LINE(102)
			tmp_x = tr_x;
			HX_STACK_LINE(103)
			tr_x = tl_x;
			HX_STACK_LINE(104)
			tl_x = tmp_x;
			HX_STACK_LINE(107)
			tmp_x = br_x;
			HX_STACK_LINE(108)
			br_x = bl_x;
			HX_STACK_LINE(109)
			bl_x = tmp_x;
		}
		HX_STACK_LINE(113)
		{
			HX_STACK_LINE(113)
			::phoenix::geometry::TextureCoord _this = this->vertices->__get((int)0).StaticCast< ::phoenix::geometry::Vertex >()->uv->uv0;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(113)
			_this->u = tl_x;
			HX_STACK_LINE(113)
			_this->v = tl_y;
			HX_STACK_LINE(113)
			_this;
		}
		HX_STACK_LINE(114)
		{
			HX_STACK_LINE(114)
			::phoenix::geometry::TextureCoord _this = this->vertices->__get((int)1).StaticCast< ::phoenix::geometry::Vertex >()->uv->uv0;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(114)
			_this->u = tr_x;
			HX_STACK_LINE(114)
			_this->v = tr_y;
			HX_STACK_LINE(114)
			_this;
		}
		HX_STACK_LINE(115)
		{
			HX_STACK_LINE(115)
			::phoenix::geometry::TextureCoord _this = this->vertices->__get((int)2).StaticCast< ::phoenix::geometry::Vertex >()->uv->uv0;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(115)
			_this->u = br_x;
			HX_STACK_LINE(115)
			_this->v = br_y;
			HX_STACK_LINE(115)
			_this;
		}
		HX_STACK_LINE(117)
		{
			HX_STACK_LINE(117)
			::phoenix::geometry::TextureCoord _this = this->vertices->__get((int)3).StaticCast< ::phoenix::geometry::Vertex >()->uv->uv0;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(117)
			_this->u = bl_x;
			HX_STACK_LINE(117)
			_this->v = bl_y;
			HX_STACK_LINE(117)
			_this;
		}
		HX_STACK_LINE(118)
		{
			HX_STACK_LINE(118)
			::phoenix::geometry::TextureCoord _this = this->vertices->__get((int)4).StaticCast< ::phoenix::geometry::Vertex >()->uv->uv0;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(118)
			_this->u = tl_x;
			HX_STACK_LINE(118)
			_this->v = tl_y;
			HX_STACK_LINE(118)
			_this;
		}
		HX_STACK_LINE(119)
		{
			HX_STACK_LINE(119)
			::phoenix::geometry::TextureCoord _this = this->vertices->__get((int)5).StaticCast< ::phoenix::geometry::Vertex >()->uv->uv0;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(119)
			_this->u = br_x;
			HX_STACK_LINE(119)
			_this->v = br_y;
			HX_STACK_LINE(119)
			_this;
		}
		HX_STACK_LINE(122)
		this->set_dirty(true);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(QuadGeometry_obj,uv_space,(void))

Void QuadGeometry_obj::resize( ::phoenix::Vector quad){
{
		HX_STACK_FRAME("phoenix.geometry.QuadGeometry","resize",0x7127918c,"phoenix.geometry.QuadGeometry.resize","phoenix/geometry/QuadGeometry.hx",126,0x485a4ac8)
		HX_STACK_THIS(this)
		HX_STACK_ARG(quad,"quad")
		HX_STACK_LINE(128)
		{
			HX_STACK_LINE(128)
			::phoenix::Vector _this = this->vertices->__get((int)0).StaticCast< ::phoenix::geometry::Vertex >()->pos;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(128)
			bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
			HX_STACK_LINE(128)
			_this->ignore_listeners = true;
			HX_STACK_LINE(128)
			{
				HX_STACK_LINE(128)
				_this->x = (int)0;
				HX_STACK_LINE(128)
				if ((_this->_construct)){
					HX_STACK_LINE(128)
					_this->x;
				}
				else{
					HX_STACK_LINE(128)
					if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
						HX_STACK_LINE(128)
						_this->listen_x((int)0);
					}
					HX_STACK_LINE(128)
					_this->x;
				}
			}
			HX_STACK_LINE(128)
			{
				HX_STACK_LINE(128)
				_this->y = (int)0;
				HX_STACK_LINE(128)
				if ((_this->_construct)){
					HX_STACK_LINE(128)
					_this->y;
				}
				else{
					HX_STACK_LINE(128)
					if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
						HX_STACK_LINE(128)
						_this->listen_y((int)0);
					}
					HX_STACK_LINE(128)
					_this->y;
				}
			}
			HX_STACK_LINE(128)
			_this->ignore_listeners = prev;
			HX_STACK_LINE(128)
			if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
				HX_STACK_LINE(128)
				_this->listen_x(_this->x);
			}
			HX_STACK_LINE(128)
			if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
				HX_STACK_LINE(128)
				_this->listen_y(_this->y);
			}
			HX_STACK_LINE(128)
			_this;
		}
		HX_STACK_LINE(129)
		{
			HX_STACK_LINE(129)
			::phoenix::Vector _this = this->vertices->__get((int)1).StaticCast< ::phoenix::geometry::Vertex >()->pos;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(129)
			Float _x = quad->x;		HX_STACK_VAR(_x,"_x");
			HX_STACK_LINE(129)
			bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
			HX_STACK_LINE(129)
			_this->ignore_listeners = true;
			HX_STACK_LINE(129)
			{
				HX_STACK_LINE(129)
				_this->x = _x;
				HX_STACK_LINE(129)
				if ((_this->_construct)){
					HX_STACK_LINE(129)
					_this->x;
				}
				else{
					HX_STACK_LINE(129)
					if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
						HX_STACK_LINE(129)
						_this->listen_x(_x);
					}
					HX_STACK_LINE(129)
					_this->x;
				}
			}
			HX_STACK_LINE(129)
			{
				HX_STACK_LINE(129)
				_this->y = (int)0;
				HX_STACK_LINE(129)
				if ((_this->_construct)){
					HX_STACK_LINE(129)
					_this->y;
				}
				else{
					HX_STACK_LINE(129)
					if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
						HX_STACK_LINE(129)
						_this->listen_y((int)0);
					}
					HX_STACK_LINE(129)
					_this->y;
				}
			}
			HX_STACK_LINE(129)
			_this->ignore_listeners = prev;
			HX_STACK_LINE(129)
			if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
				HX_STACK_LINE(129)
				_this->listen_x(_this->x);
			}
			HX_STACK_LINE(129)
			if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
				HX_STACK_LINE(129)
				_this->listen_y(_this->y);
			}
			HX_STACK_LINE(129)
			_this;
		}
		HX_STACK_LINE(130)
		{
			HX_STACK_LINE(130)
			::phoenix::Vector _this = this->vertices->__get((int)2).StaticCast< ::phoenix::geometry::Vertex >()->pos;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(130)
			Float _x = quad->x;		HX_STACK_VAR(_x,"_x");
			HX_STACK_LINE(130)
			Float _y = quad->y;		HX_STACK_VAR(_y,"_y");
			HX_STACK_LINE(130)
			bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
			HX_STACK_LINE(130)
			_this->ignore_listeners = true;
			HX_STACK_LINE(130)
			{
				HX_STACK_LINE(130)
				_this->x = _x;
				HX_STACK_LINE(130)
				if ((_this->_construct)){
					HX_STACK_LINE(130)
					_this->x;
				}
				else{
					HX_STACK_LINE(130)
					if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
						HX_STACK_LINE(130)
						_this->listen_x(_x);
					}
					HX_STACK_LINE(130)
					_this->x;
				}
			}
			HX_STACK_LINE(130)
			{
				HX_STACK_LINE(130)
				_this->y = _y;
				HX_STACK_LINE(130)
				if ((_this->_construct)){
					HX_STACK_LINE(130)
					_this->y;
				}
				else{
					HX_STACK_LINE(130)
					if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
						HX_STACK_LINE(130)
						_this->listen_y(_y);
					}
					HX_STACK_LINE(130)
					_this->y;
				}
			}
			HX_STACK_LINE(130)
			_this->ignore_listeners = prev;
			HX_STACK_LINE(130)
			if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
				HX_STACK_LINE(130)
				_this->listen_x(_this->x);
			}
			HX_STACK_LINE(130)
			if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
				HX_STACK_LINE(130)
				_this->listen_y(_this->y);
			}
			HX_STACK_LINE(130)
			_this;
		}
		HX_STACK_LINE(132)
		{
			HX_STACK_LINE(132)
			::phoenix::Vector _this = this->vertices->__get((int)3).StaticCast< ::phoenix::geometry::Vertex >()->pos;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(132)
			Float _y = quad->y;		HX_STACK_VAR(_y,"_y");
			HX_STACK_LINE(132)
			bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
			HX_STACK_LINE(132)
			_this->ignore_listeners = true;
			HX_STACK_LINE(132)
			{
				HX_STACK_LINE(132)
				_this->x = (int)0;
				HX_STACK_LINE(132)
				if ((_this->_construct)){
					HX_STACK_LINE(132)
					_this->x;
				}
				else{
					HX_STACK_LINE(132)
					if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
						HX_STACK_LINE(132)
						_this->listen_x((int)0);
					}
					HX_STACK_LINE(132)
					_this->x;
				}
			}
			HX_STACK_LINE(132)
			{
				HX_STACK_LINE(132)
				_this->y = _y;
				HX_STACK_LINE(132)
				if ((_this->_construct)){
					HX_STACK_LINE(132)
					_this->y;
				}
				else{
					HX_STACK_LINE(132)
					if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
						HX_STACK_LINE(132)
						_this->listen_y(_y);
					}
					HX_STACK_LINE(132)
					_this->y;
				}
			}
			HX_STACK_LINE(132)
			_this->ignore_listeners = prev;
			HX_STACK_LINE(132)
			if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
				HX_STACK_LINE(132)
				_this->listen_x(_this->x);
			}
			HX_STACK_LINE(132)
			if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
				HX_STACK_LINE(132)
				_this->listen_y(_this->y);
			}
			HX_STACK_LINE(132)
			_this;
		}
		HX_STACK_LINE(133)
		{
			HX_STACK_LINE(133)
			::phoenix::Vector _this = this->vertices->__get((int)4).StaticCast< ::phoenix::geometry::Vertex >()->pos;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(133)
			bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
			HX_STACK_LINE(133)
			_this->ignore_listeners = true;
			HX_STACK_LINE(133)
			{
				HX_STACK_LINE(133)
				_this->x = (int)0;
				HX_STACK_LINE(133)
				if ((_this->_construct)){
					HX_STACK_LINE(133)
					_this->x;
				}
				else{
					HX_STACK_LINE(133)
					if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
						HX_STACK_LINE(133)
						_this->listen_x((int)0);
					}
					HX_STACK_LINE(133)
					_this->x;
				}
			}
			HX_STACK_LINE(133)
			{
				HX_STACK_LINE(133)
				_this->y = (int)0;
				HX_STACK_LINE(133)
				if ((_this->_construct)){
					HX_STACK_LINE(133)
					_this->y;
				}
				else{
					HX_STACK_LINE(133)
					if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
						HX_STACK_LINE(133)
						_this->listen_y((int)0);
					}
					HX_STACK_LINE(133)
					_this->y;
				}
			}
			HX_STACK_LINE(133)
			_this->ignore_listeners = prev;
			HX_STACK_LINE(133)
			if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
				HX_STACK_LINE(133)
				_this->listen_x(_this->x);
			}
			HX_STACK_LINE(133)
			if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
				HX_STACK_LINE(133)
				_this->listen_y(_this->y);
			}
			HX_STACK_LINE(133)
			_this;
		}
		HX_STACK_LINE(134)
		{
			HX_STACK_LINE(134)
			::phoenix::Vector _this = this->vertices->__get((int)5).StaticCast< ::phoenix::geometry::Vertex >()->pos;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(134)
			Float _x = quad->x;		HX_STACK_VAR(_x,"_x");
			HX_STACK_LINE(134)
			Float _y = quad->y;		HX_STACK_VAR(_y,"_y");
			HX_STACK_LINE(134)
			bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
			HX_STACK_LINE(134)
			_this->ignore_listeners = true;
			HX_STACK_LINE(134)
			{
				HX_STACK_LINE(134)
				_this->x = _x;
				HX_STACK_LINE(134)
				if ((_this->_construct)){
					HX_STACK_LINE(134)
					_this->x;
				}
				else{
					HX_STACK_LINE(134)
					if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
						HX_STACK_LINE(134)
						_this->listen_x(_x);
					}
					HX_STACK_LINE(134)
					_this->x;
				}
			}
			HX_STACK_LINE(134)
			{
				HX_STACK_LINE(134)
				_this->y = _y;
				HX_STACK_LINE(134)
				if ((_this->_construct)){
					HX_STACK_LINE(134)
					_this->y;
				}
				else{
					HX_STACK_LINE(134)
					if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
						HX_STACK_LINE(134)
						_this->listen_y(_y);
					}
					HX_STACK_LINE(134)
					_this->y;
				}
			}
			HX_STACK_LINE(134)
			_this->ignore_listeners = prev;
			HX_STACK_LINE(134)
			if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
				HX_STACK_LINE(134)
				_this->listen_x(_this->x);
			}
			HX_STACK_LINE(134)
			if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
				HX_STACK_LINE(134)
				_this->listen_y(_this->y);
			}
			HX_STACK_LINE(134)
			_this;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(QuadGeometry_obj,resize,(void))

Void QuadGeometry_obj::set( ::phoenix::Rectangle quad){
{
		HX_STACK_FRAME("phoenix.geometry.QuadGeometry","set",0xa66f350a,"phoenix.geometry.QuadGeometry.set","phoenix/geometry/QuadGeometry.hx",138,0x485a4ac8)
		HX_STACK_THIS(this)
		HX_STACK_ARG(quad,"quad")
		HX_STACK_LINE(140)
		this->vertices->splice((int)0,this->vertices->length);
		HX_STACK_LINE(143)
		::phoenix::Vector _g = ::phoenix::Vector_obj::__new((int)0,(int)0,null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(143)
		::phoenix::geometry::Vertex vert0 = ::phoenix::geometry::Vertex_obj::__new(_g,this->color,null());		HX_STACK_VAR(vert0,"vert0");
		HX_STACK_LINE(144)
		::phoenix::Vector _g1 = ::phoenix::Vector_obj::__new(quad->w,(int)0,null(),null());		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(144)
		::phoenix::geometry::Vertex vert1 = ::phoenix::geometry::Vertex_obj::__new(_g1,this->color,null());		HX_STACK_VAR(vert1,"vert1");
		HX_STACK_LINE(145)
		::phoenix::Vector _g2 = ::phoenix::Vector_obj::__new(quad->w,quad->h,null(),null());		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(145)
		::phoenix::geometry::Vertex vert2 = ::phoenix::geometry::Vertex_obj::__new(_g2,this->color,null());		HX_STACK_VAR(vert2,"vert2");
		HX_STACK_LINE(148)
		::phoenix::Vector _g3 = ::phoenix::Vector_obj::__new((int)0,quad->h,null(),null());		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(148)
		::phoenix::geometry::Vertex vert3 = ::phoenix::geometry::Vertex_obj::__new(_g3,this->color,null());		HX_STACK_VAR(vert3,"vert3");
		HX_STACK_LINE(149)
		::phoenix::Vector _g4 = ::phoenix::Vector_obj::__new((int)0,(int)0,null(),null());		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(149)
		::phoenix::geometry::Vertex vert4 = ::phoenix::geometry::Vertex_obj::__new(_g4,this->color,null());		HX_STACK_VAR(vert4,"vert4");
		HX_STACK_LINE(150)
		::phoenix::Vector _g5 = ::phoenix::Vector_obj::__new(quad->w,quad->h,null(),null());		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(150)
		::phoenix::geometry::Vertex vert5 = ::phoenix::geometry::Vertex_obj::__new(_g5,this->color,null());		HX_STACK_VAR(vert5,"vert5");
		HX_STACK_LINE(155)
		this->add(vert0);
		HX_STACK_LINE(157)
		this->add(vert1);
		HX_STACK_LINE(159)
		this->add(vert2);
		HX_STACK_LINE(161)
		this->add(vert3);
		HX_STACK_LINE(163)
		this->add(vert4);
		HX_STACK_LINE(165)
		this->add(vert5);
		HX_STACK_LINE(168)
		this->set_primitive_type((int)4);
		HX_STACK_LINE(169)
		this->immediate = false;
		HX_STACK_LINE(172)
		{
			HX_STACK_LINE(172)
			::phoenix::Vector value = ::phoenix::Vector_obj::__new(quad->x,quad->y,null(),null());		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(172)
			{
				HX_STACK_LINE(172)
				::phoenix::Spatial _this = this->transform->local;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(172)
				_this->pos = value;
				HX_STACK_LINE(172)
				if (((value != null()))){
					HX_STACK_LINE(172)
					::phoenix::Vector_obj::Listen(_this->pos,_this->_pos_change_dyn());
					HX_STACK_LINE(172)
					if (((bool((_this->pos_changed != null())) && bool(!(_this->ignore_listeners))))){
						HX_STACK_LINE(172)
						_this->pos_changed(_this->pos);
					}
				}
				HX_STACK_LINE(172)
				_this->pos;
			}
		}
		HX_STACK_LINE(175)
		this->is_set = true;
		HX_STACK_LINE(178)
		::phoenix::Rectangle _g6 = ::phoenix::Rectangle_obj::__new((int)0,(int)0,(int)1,(int)1);		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(178)
		this->uv_space(_g6);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(QuadGeometry_obj,set,(void))

bool QuadGeometry_obj::set_flipx( bool _val){
	HX_STACK_FRAME("phoenix.geometry.QuadGeometry","set_flipx",0x339524f6,"phoenix.geometry.QuadGeometry.set_flipx","phoenix/geometry/QuadGeometry.hx",182,0x485a4ac8)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_val,"_val")
	HX_STACK_LINE(185)
	this->flipx = _val;
	HX_STACK_LINE(187)
	if ((this->is_set)){
		HX_STACK_LINE(188)
		this->uv_space(this->_uv_cache);
	}
	HX_STACK_LINE(191)
	return this->flipx;
}


HX_DEFINE_DYNAMIC_FUNC1(QuadGeometry_obj,set_flipx,return )

bool QuadGeometry_obj::set_flipy( bool _val){
	HX_STACK_FRAME("phoenix.geometry.QuadGeometry","set_flipy",0x339524f7,"phoenix.geometry.QuadGeometry.set_flipy","phoenix/geometry/QuadGeometry.hx",194,0x485a4ac8)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_val,"_val")
	HX_STACK_LINE(197)
	this->flipy = _val;
	HX_STACK_LINE(199)
	if ((this->is_set)){
		HX_STACK_LINE(200)
		this->uv_space(this->_uv_cache);
	}
	HX_STACK_LINE(203)
	return this->flipy;
}


HX_DEFINE_DYNAMIC_FUNC1(QuadGeometry_obj,set_flipy,return )


QuadGeometry_obj::QuadGeometry_obj()
{
}

void QuadGeometry_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(QuadGeometry);
	HX_MARK_MEMBER_NAME(flipx,"flipx");
	HX_MARK_MEMBER_NAME(flipy,"flipy");
	HX_MARK_MEMBER_NAME(_uv_cache,"_uv_cache");
	HX_MARK_MEMBER_NAME(is_set,"is_set");
	::phoenix::geometry::Geometry_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void QuadGeometry_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(flipx,"flipx");
	HX_VISIT_MEMBER_NAME(flipy,"flipy");
	HX_VISIT_MEMBER_NAME(_uv_cache,"_uv_cache");
	HX_VISIT_MEMBER_NAME(is_set,"is_set");
	::phoenix::geometry::Geometry_obj::__Visit(HX_VISIT_ARG);
}

Dynamic QuadGeometry_obj::__Field(const ::String &inName,bool inCallProp)
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
		if (HX_FIELD_EQ(inName,"resize") ) { return resize_dyn(); }
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

Dynamic QuadGeometry_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
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

void QuadGeometry_obj::__GetFields(Array< ::String> &outFields)
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
	{hx::fsBool,(int)offsetof(QuadGeometry_obj,flipx),HX_CSTRING("flipx")},
	{hx::fsBool,(int)offsetof(QuadGeometry_obj,flipy),HX_CSTRING("flipy")},
	{hx::fsObject /*::phoenix::Rectangle*/ ,(int)offsetof(QuadGeometry_obj,_uv_cache),HX_CSTRING("_uv_cache")},
	{hx::fsBool,(int)offsetof(QuadGeometry_obj,is_set),HX_CSTRING("is_set")},
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
	HX_CSTRING("resize"),
	HX_CSTRING("set"),
	HX_CSTRING("set_flipx"),
	HX_CSTRING("set_flipy"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(QuadGeometry_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(QuadGeometry_obj::__mClass,"__mClass");
};

#endif

Class QuadGeometry_obj::__mClass;

void QuadGeometry_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("phoenix.geometry.QuadGeometry"), hx::TCanCast< QuadGeometry_obj> ,sStaticFields,sMemberFields,
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

void QuadGeometry_obj::__boot()
{
}

} // end namespace phoenix
} // end namespace geometry
