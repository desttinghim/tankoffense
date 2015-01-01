#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_Luxe
#include <Luxe.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_luxe_resource_Resource
#include <luxe/resource/Resource.h>
#endif
#ifndef INCLUDED_luxe_utils_Utils
#include <luxe/utils/Utils.h>
#endif
#ifndef INCLUDED_phoenix_Color
#include <phoenix/Color.h>
#endif
#ifndef INCLUDED_phoenix_Rectangle
#include <phoenix/Rectangle.h>
#endif
#ifndef INCLUDED_phoenix_Texture
#include <phoenix/Texture.h>
#endif
#ifndef INCLUDED_phoenix_Vector
#include <phoenix/Vector.h>
#endif
#ifndef INCLUDED_phoenix_geometry_Geometry
#include <phoenix/geometry/Geometry.h>
#endif
#ifndef INCLUDED_phoenix_geometry_QuadPackGeometry
#include <phoenix/geometry/QuadPackGeometry.h>
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

Void QuadPackGeometry_obj::__construct(Dynamic _options)
{
HX_STACK_FRAME("phoenix.geometry.QuadPackGeometry","new",0x49f65041,"phoenix.geometry.QuadPackGeometry.new","phoenix/geometry/QuadPackGeometry.hx",46,0xc786266f)
HX_STACK_THIS(this)
HX_STACK_ARG(_options,"_options")
{
	HX_STACK_LINE(48)
	super::__construct(_options);
	HX_STACK_LINE(49)
	this->set_primitive_type((int)4);
	HX_STACK_LINE(51)
	::haxe::ds::IntMap _g = ::haxe::ds::IntMap_obj::__new();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(51)
	this->quads = _g;
}
;
	return null();
}

//QuadPackGeometry_obj::~QuadPackGeometry_obj() { }

Dynamic QuadPackGeometry_obj::__CreateEmpty() { return  new QuadPackGeometry_obj; }
hx::ObjectPtr< QuadPackGeometry_obj > QuadPackGeometry_obj::__new(Dynamic _options)
{  hx::ObjectPtr< QuadPackGeometry_obj > result = new QuadPackGeometry_obj();
	result->__construct(_options);
	return result;}

Dynamic QuadPackGeometry_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< QuadPackGeometry_obj > result = new QuadPackGeometry_obj();
	result->__construct(inArgs[0]);
	return result;}

Void QuadPackGeometry_obj::clear( ){
{
		HX_STACK_FRAME("phoenix.geometry.QuadPackGeometry","clear",0x1f866bae,"phoenix.geometry.QuadPackGeometry.clear","phoenix/geometry/QuadPackGeometry.hx",57,0xc786266f)
		HX_STACK_THIS(this)
		HX_STACK_LINE(57)
		for(::cpp::FastIterator_obj< int > *__it = ::cpp::CreateFastIterator< int >(this->quads->keys());  __it->hasNext(); ){
			int q = __it->next();
			this->quad_remove(q);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(QuadPackGeometry_obj,clear,(void))

int QuadPackGeometry_obj::quad_add( Dynamic _options){
	HX_STACK_FRAME("phoenix.geometry.QuadPackGeometry","quad_add",0xb0962fe8,"phoenix.geometry.QuadPackGeometry.quad_add","phoenix/geometry/QuadPackGeometry.hx",63,0xc786266f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_options,"_options")
	HX_STACK_LINE(65)
	if (((_options->__Field(HX_CSTRING("visible"),true) == null()))){
		HX_STACK_LINE(65)
		_options->__FieldRef(HX_CSTRING("visible")) = true;
	}
	HX_STACK_LINE(66)
	if (((_options->__Field(HX_CSTRING("flipx"),true) == null()))){
		HX_STACK_LINE(66)
		_options->__FieldRef(HX_CSTRING("flipx")) = false;
	}
	HX_STACK_LINE(67)
	if (((_options->__Field(HX_CSTRING("flipy"),true) == null()))){
		HX_STACK_LINE(67)
		_options->__FieldRef(HX_CSTRING("flipy")) = false;
	}
	HX_STACK_LINE(69)
	int _uid = ::Luxe_obj::utils->uniquehash();		HX_STACK_VAR(_uid,"_uid");
	HX_STACK_LINE(72)
	::phoenix::Vector _g = ::phoenix::Vector_obj::__new(_options->__Field(HX_CSTRING("x"),true),_options->__Field(HX_CSTRING("y"),true),null(),null());		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(72)
	::phoenix::geometry::Vertex vert0 = ::phoenix::geometry::Vertex_obj::__new(_g,_options->__Field(HX_CSTRING("color"),true),null());		HX_STACK_VAR(vert0,"vert0");
	HX_STACK_LINE(73)
	::phoenix::Vector _g1 = ::phoenix::Vector_obj::__new((_options->__Field(HX_CSTRING("x"),true) + _options->__Field(HX_CSTRING("w"),true)),_options->__Field(HX_CSTRING("y"),true),null(),null());		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(73)
	::phoenix::geometry::Vertex vert1 = ::phoenix::geometry::Vertex_obj::__new(_g1,_options->__Field(HX_CSTRING("color"),true),null());		HX_STACK_VAR(vert1,"vert1");
	HX_STACK_LINE(74)
	::phoenix::Vector _g2 = ::phoenix::Vector_obj::__new((_options->__Field(HX_CSTRING("x"),true) + _options->__Field(HX_CSTRING("w"),true)),(_options->__Field(HX_CSTRING("y"),true) + _options->__Field(HX_CSTRING("h"),true)),null(),null());		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(74)
	::phoenix::geometry::Vertex vert2 = ::phoenix::geometry::Vertex_obj::__new(_g2,_options->__Field(HX_CSTRING("color"),true),null());		HX_STACK_VAR(vert2,"vert2");
	HX_STACK_LINE(77)
	::phoenix::Vector _g3 = ::phoenix::Vector_obj::__new(_options->__Field(HX_CSTRING("x"),true),(_options->__Field(HX_CSTRING("y"),true) + _options->__Field(HX_CSTRING("h"),true)),null(),null());		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(77)
	::phoenix::geometry::Vertex vert3 = ::phoenix::geometry::Vertex_obj::__new(_g3,_options->__Field(HX_CSTRING("color"),true),null());		HX_STACK_VAR(vert3,"vert3");
	HX_STACK_LINE(78)
	::phoenix::Vector _g4 = ::phoenix::Vector_obj::__new(_options->__Field(HX_CSTRING("x"),true),_options->__Field(HX_CSTRING("y"),true),null(),null());		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(78)
	::phoenix::geometry::Vertex vert4 = ::phoenix::geometry::Vertex_obj::__new(_g4,_options->__Field(HX_CSTRING("color"),true),null());		HX_STACK_VAR(vert4,"vert4");
	HX_STACK_LINE(79)
	::phoenix::Vector _g5 = ::phoenix::Vector_obj::__new((_options->__Field(HX_CSTRING("x"),true) + _options->__Field(HX_CSTRING("w"),true)),(_options->__Field(HX_CSTRING("y"),true) + _options->__Field(HX_CSTRING("h"),true)),null(),null());		HX_STACK_VAR(_g5,"_g5");
	HX_STACK_LINE(79)
	::phoenix::geometry::Vertex vert5 = ::phoenix::geometry::Vertex_obj::__new(_g5,_options->__Field(HX_CSTRING("color"),true),null());		HX_STACK_VAR(vert5,"vert5");
	HX_STACK_LINE(82)
	this->add(vert0);
	HX_STACK_LINE(84)
	this->add(vert1);
	HX_STACK_LINE(86)
	this->add(vert2);
	HX_STACK_LINE(88)
	this->add(vert3);
	HX_STACK_LINE(90)
	this->add(vert4);
	HX_STACK_LINE(92)
	this->add(vert5);
	HX_STACK_LINE(97)
	Array< ::Dynamic > _g6 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g6,"_g6");
	HX_STACK_LINE(101)
	::phoenix::Rectangle _g7 = ::phoenix::Rectangle_obj::__new((int)0,(int)0,(int)1,(int)1);		HX_STACK_VAR(_g7,"_g7");
	struct _Function_1_1{
		inline static Dynamic Block( ::phoenix::Rectangle &_g7,Dynamic &_options,Array< ::Dynamic > &_g6,int &_uid){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/geometry/QuadPackGeometry.hx",95,0xc786266f)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("uid") , _uid,false);
				__result->Add(HX_CSTRING("verts") , _g6,false);
				__result->Add(HX_CSTRING("flipx") , _options->__Field(HX_CSTRING("flipx"),true),false);
				__result->Add(HX_CSTRING("flipy") , _options->__Field(HX_CSTRING("flipx"),true),false);
				__result->Add(HX_CSTRING("visible") , _options->__Field(HX_CSTRING("visible"),true),false);
				__result->Add(HX_CSTRING("_uv_cache") , _g7,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(95)
	Dynamic _quad = _Function_1_1::Block(_g7,_options,_g6,_uid);		HX_STACK_VAR(_quad,"_quad");
	HX_STACK_LINE(104)
	_quad->__Field(HX_CSTRING("verts"),true)->__Field(HX_CSTRING("push"),true)(vert0);
	HX_STACK_LINE(105)
	_quad->__Field(HX_CSTRING("verts"),true)->__Field(HX_CSTRING("push"),true)(vert1);
	HX_STACK_LINE(106)
	_quad->__Field(HX_CSTRING("verts"),true)->__Field(HX_CSTRING("push"),true)(vert2);
	HX_STACK_LINE(107)
	_quad->__Field(HX_CSTRING("verts"),true)->__Field(HX_CSTRING("push"),true)(vert3);
	HX_STACK_LINE(108)
	_quad->__Field(HX_CSTRING("verts"),true)->__Field(HX_CSTRING("push"),true)(vert4);
	HX_STACK_LINE(109)
	_quad->__Field(HX_CSTRING("verts"),true)->__Field(HX_CSTRING("push"),true)(vert5);
	HX_STACK_LINE(111)
	this->quads->set(_uid,_quad);
	HX_STACK_LINE(113)
	if (((_options->__Field(HX_CSTRING("uv"),true) != null()))){
		HX_STACK_LINE(114)
		this->quad_uv(_uid,_options->__Field(HX_CSTRING("uv"),true));
	}
	HX_STACK_LINE(118)
	this->set_dirty(true);
	HX_STACK_LINE(120)
	return _uid;
}


HX_DEFINE_DYNAMIC_FUNC1(QuadPackGeometry_obj,quad_add,return )

Void QuadPackGeometry_obj::quad_remove( int _quad_id){
{
		HX_STACK_FRAME("phoenix.geometry.QuadPackGeometry","quad_remove",0x6149f4dd,"phoenix.geometry.QuadPackGeometry.quad_remove","phoenix/geometry/QuadPackGeometry.hx",124,0xc786266f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_quad_id,"_quad_id")
		HX_STACK_LINE(126)
		Dynamic _quad = this->quads->get(_quad_id);		HX_STACK_VAR(_quad,"_quad");
		HX_STACK_LINE(128)
		if (((_quad != null()))){
			HX_STACK_LINE(130)
			this->remove(_quad->__Field(HX_CSTRING("verts"),true)->__GetItem((int)0));
			HX_STACK_LINE(131)
			this->remove(_quad->__Field(HX_CSTRING("verts"),true)->__GetItem((int)1));
			HX_STACK_LINE(132)
			this->remove(_quad->__Field(HX_CSTRING("verts"),true)->__GetItem((int)2));
			HX_STACK_LINE(133)
			this->remove(_quad->__Field(HX_CSTRING("verts"),true)->__GetItem((int)3));
			HX_STACK_LINE(134)
			this->remove(_quad->__Field(HX_CSTRING("verts"),true)->__GetItem((int)4));
			HX_STACK_LINE(135)
			this->remove(_quad->__Field(HX_CSTRING("verts"),true)->__GetItem((int)5));
			HX_STACK_LINE(137)
			this->quads->remove(_quad_id);
			HX_STACK_LINE(140)
			this->set_dirty(true);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(QuadPackGeometry_obj,quad_remove,(void))

Void QuadPackGeometry_obj::quad_visible( int _quad_id,bool visible){
{
		HX_STACK_FRAME("phoenix.geometry.QuadPackGeometry","quad_visible",0x6f90a5b9,"phoenix.geometry.QuadPackGeometry.quad_visible","phoenix/geometry/QuadPackGeometry.hx",146,0xc786266f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_quad_id,"_quad_id")
		HX_STACK_ARG(visible,"visible")
		HX_STACK_LINE(148)
		Dynamic _quad = this->quads->get(_quad_id);		HX_STACK_VAR(_quad,"_quad");
		HX_STACK_LINE(150)
		if (((_quad != null()))){
			HX_STACK_LINE(153)
			if (((bool(visible) && bool(!(_quad->__Field(HX_CSTRING("visible"),true)))))){
				HX_STACK_LINE(155)
				_quad->__FieldRef(HX_CSTRING("visible")) = false;
				HX_STACK_LINE(157)
				this->add(_quad->__Field(HX_CSTRING("verts"),true)->__GetItem((int)0));
				HX_STACK_LINE(158)
				this->add(_quad->__Field(HX_CSTRING("verts"),true)->__GetItem((int)1));
				HX_STACK_LINE(159)
				this->add(_quad->__Field(HX_CSTRING("verts"),true)->__GetItem((int)2));
				HX_STACK_LINE(160)
				this->add(_quad->__Field(HX_CSTRING("verts"),true)->__GetItem((int)3));
				HX_STACK_LINE(161)
				this->add(_quad->__Field(HX_CSTRING("verts"),true)->__GetItem((int)4));
				HX_STACK_LINE(162)
				this->add(_quad->__Field(HX_CSTRING("verts"),true)->__GetItem((int)5));
			}
			else{
				HX_STACK_LINE(164)
				if (((bool(!(visible)) && bool(_quad->__Field(HX_CSTRING("visible"),true))))){
					HX_STACK_LINE(166)
					_quad->__FieldRef(HX_CSTRING("visible")) = false;
					HX_STACK_LINE(168)
					this->remove(_quad->__Field(HX_CSTRING("verts"),true)->__GetItem((int)0));
					HX_STACK_LINE(169)
					this->remove(_quad->__Field(HX_CSTRING("verts"),true)->__GetItem((int)1));
					HX_STACK_LINE(170)
					this->remove(_quad->__Field(HX_CSTRING("verts"),true)->__GetItem((int)2));
					HX_STACK_LINE(171)
					this->remove(_quad->__Field(HX_CSTRING("verts"),true)->__GetItem((int)3));
					HX_STACK_LINE(172)
					this->remove(_quad->__Field(HX_CSTRING("verts"),true)->__GetItem((int)4));
					HX_STACK_LINE(173)
					this->remove(_quad->__Field(HX_CSTRING("verts"),true)->__GetItem((int)5));
				}
			}
			HX_STACK_LINE(178)
			this->set_dirty(true);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(QuadPackGeometry_obj,quad_visible,(void))

Void QuadPackGeometry_obj::quad_resize( int _quad_id,::phoenix::Rectangle _size){
{
		HX_STACK_FRAME("phoenix.geometry.QuadPackGeometry","quad_resize",0x653cb28d,"phoenix.geometry.QuadPackGeometry.quad_resize","phoenix/geometry/QuadPackGeometry.hx",184,0xc786266f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_quad_id,"_quad_id")
		HX_STACK_ARG(_size,"_size")
		HX_STACK_LINE(186)
		Dynamic _quad = this->quads->get(_quad_id);		HX_STACK_VAR(_quad,"_quad");
		HX_STACK_LINE(188)
		if (((_quad != null()))){
			HX_STACK_LINE(190)
			::phoenix::Vector _g = ::phoenix::Vector_obj::__new(_size->x,_size->y,null(),null());		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(190)
			_quad->__Field(HX_CSTRING("verts"),true)->__GetItem((int)0)->__FieldRef(HX_CSTRING("pos")) = _g;
			HX_STACK_LINE(191)
			::phoenix::Vector _g1 = ::phoenix::Vector_obj::__new((_size->x + _size->w),_size->y,null(),null());		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(191)
			_quad->__Field(HX_CSTRING("verts"),true)->__GetItem((int)1)->__FieldRef(HX_CSTRING("pos")) = _g1;
			HX_STACK_LINE(192)
			::phoenix::Vector _g2 = ::phoenix::Vector_obj::__new((_size->x + _size->w),(_size->y + _size->h),null(),null());		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(192)
			_quad->__Field(HX_CSTRING("verts"),true)->__GetItem((int)2)->__FieldRef(HX_CSTRING("pos")) = _g2;
			HX_STACK_LINE(194)
			::phoenix::Vector _g3 = ::phoenix::Vector_obj::__new(_size->x,(_size->y + _size->h),null(),null());		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(194)
			_quad->__Field(HX_CSTRING("verts"),true)->__GetItem((int)3)->__FieldRef(HX_CSTRING("pos")) = _g3;
			HX_STACK_LINE(195)
			::phoenix::Vector _g4 = ::phoenix::Vector_obj::__new(_size->x,_size->y,null(),null());		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(195)
			_quad->__Field(HX_CSTRING("verts"),true)->__GetItem((int)4)->__FieldRef(HX_CSTRING("pos")) = _g4;
			HX_STACK_LINE(196)
			::phoenix::Vector _g5 = ::phoenix::Vector_obj::__new((_size->x + _size->w),(_size->y + _size->h),null(),null());		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(196)
			_quad->__Field(HX_CSTRING("verts"),true)->__GetItem((int)5)->__FieldRef(HX_CSTRING("pos")) = _g5;
			HX_STACK_LINE(199)
			this->set_dirty(true);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(QuadPackGeometry_obj,quad_resize,(void))

Void QuadPackGeometry_obj::quad_pos( int _quad_id,::phoenix::Vector _p){
{
		HX_STACK_FRAME("phoenix.geometry.QuadPackGeometry","quad_pos",0xb0a19b5b,"phoenix.geometry.QuadPackGeometry.quad_pos","phoenix/geometry/QuadPackGeometry.hx",205,0xc786266f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_quad_id,"_quad_id")
		HX_STACK_ARG(_p,"_p")
		HX_STACK_LINE(207)
		Dynamic _quad = this->quads->get(_quad_id);		HX_STACK_VAR(_quad,"_quad");
		HX_STACK_LINE(209)
		if (((_quad != null()))){
			HX_STACK_LINE(211)
			Float _diffx = (_p->x - _quad->__Field(HX_CSTRING("verts"),true)->__GetItem((int)0)->__Field(HX_CSTRING("pos"),true)->__Field(HX_CSTRING("x"),true));		HX_STACK_VAR(_diffx,"_diffx");
			HX_STACK_LINE(212)
			Float _diffy = (_p->y - _quad->__Field(HX_CSTRING("verts"),true)->__GetItem((int)0)->__Field(HX_CSTRING("pos"),true)->__Field(HX_CSTRING("y"),true));		HX_STACK_VAR(_diffy,"_diffy");
			HX_STACK_LINE(214)
			{
				HX_STACK_LINE(214)
				::phoenix::Vector _g = _quad->__Field(HX_CSTRING("verts"),true)->__GetItem((int)0)->__Field(HX_CSTRING("pos"),true);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(214)
				{
					HX_STACK_LINE(214)
					Float _x = (_g->x + _diffx);		HX_STACK_VAR(_x,"_x");
					HX_STACK_LINE(214)
					_g->x = _x;
					HX_STACK_LINE(214)
					if ((_g->_construct)){
						HX_STACK_LINE(214)
						_g->x;
					}
					else{
						HX_STACK_LINE(214)
						if (((bool((_g->listen_x != null())) && bool(!(_g->ignore_listeners))))){
							HX_STACK_LINE(214)
							_g->listen_x(_x);
						}
						HX_STACK_LINE(214)
						_g->x;
					}
				}
			}
			HX_STACK_LINE(215)
			{
				HX_STACK_LINE(215)
				::phoenix::Vector _g = _quad->__Field(HX_CSTRING("verts"),true)->__GetItem((int)0)->__Field(HX_CSTRING("pos"),true);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(215)
				{
					HX_STACK_LINE(215)
					Float _y = (_g->y + _diffy);		HX_STACK_VAR(_y,"_y");
					HX_STACK_LINE(215)
					_g->y = _y;
					HX_STACK_LINE(215)
					if ((_g->_construct)){
						HX_STACK_LINE(215)
						_g->y;
					}
					else{
						HX_STACK_LINE(215)
						if (((bool((_g->listen_y != null())) && bool(!(_g->ignore_listeners))))){
							HX_STACK_LINE(215)
							_g->listen_y(_y);
						}
						HX_STACK_LINE(215)
						_g->y;
					}
				}
			}
			HX_STACK_LINE(217)
			{
				HX_STACK_LINE(217)
				::phoenix::Vector _g = _quad->__Field(HX_CSTRING("verts"),true)->__GetItem((int)1)->__Field(HX_CSTRING("pos"),true);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(217)
				{
					HX_STACK_LINE(217)
					Float _x = (_g->x + _diffx);		HX_STACK_VAR(_x,"_x");
					HX_STACK_LINE(217)
					_g->x = _x;
					HX_STACK_LINE(217)
					if ((_g->_construct)){
						HX_STACK_LINE(217)
						_g->x;
					}
					else{
						HX_STACK_LINE(217)
						if (((bool((_g->listen_x != null())) && bool(!(_g->ignore_listeners))))){
							HX_STACK_LINE(217)
							_g->listen_x(_x);
						}
						HX_STACK_LINE(217)
						_g->x;
					}
				}
			}
			HX_STACK_LINE(218)
			{
				HX_STACK_LINE(218)
				::phoenix::Vector _g = _quad->__Field(HX_CSTRING("verts"),true)->__GetItem((int)1)->__Field(HX_CSTRING("pos"),true);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(218)
				{
					HX_STACK_LINE(218)
					Float _y = (_g->y + _diffy);		HX_STACK_VAR(_y,"_y");
					HX_STACK_LINE(218)
					_g->y = _y;
					HX_STACK_LINE(218)
					if ((_g->_construct)){
						HX_STACK_LINE(218)
						_g->y;
					}
					else{
						HX_STACK_LINE(218)
						if (((bool((_g->listen_y != null())) && bool(!(_g->ignore_listeners))))){
							HX_STACK_LINE(218)
							_g->listen_y(_y);
						}
						HX_STACK_LINE(218)
						_g->y;
					}
				}
			}
			HX_STACK_LINE(220)
			{
				HX_STACK_LINE(220)
				::phoenix::Vector _g = _quad->__Field(HX_CSTRING("verts"),true)->__GetItem((int)2)->__Field(HX_CSTRING("pos"),true);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(220)
				{
					HX_STACK_LINE(220)
					Float _x = (_g->x + _diffx);		HX_STACK_VAR(_x,"_x");
					HX_STACK_LINE(220)
					_g->x = _x;
					HX_STACK_LINE(220)
					if ((_g->_construct)){
						HX_STACK_LINE(220)
						_g->x;
					}
					else{
						HX_STACK_LINE(220)
						if (((bool((_g->listen_x != null())) && bool(!(_g->ignore_listeners))))){
							HX_STACK_LINE(220)
							_g->listen_x(_x);
						}
						HX_STACK_LINE(220)
						_g->x;
					}
				}
			}
			HX_STACK_LINE(221)
			{
				HX_STACK_LINE(221)
				::phoenix::Vector _g = _quad->__Field(HX_CSTRING("verts"),true)->__GetItem((int)2)->__Field(HX_CSTRING("pos"),true);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(221)
				{
					HX_STACK_LINE(221)
					Float _y = (_g->y + _diffy);		HX_STACK_VAR(_y,"_y");
					HX_STACK_LINE(221)
					_g->y = _y;
					HX_STACK_LINE(221)
					if ((_g->_construct)){
						HX_STACK_LINE(221)
						_g->y;
					}
					else{
						HX_STACK_LINE(221)
						if (((bool((_g->listen_y != null())) && bool(!(_g->ignore_listeners))))){
							HX_STACK_LINE(221)
							_g->listen_y(_y);
						}
						HX_STACK_LINE(221)
						_g->y;
					}
				}
			}
			HX_STACK_LINE(223)
			{
				HX_STACK_LINE(223)
				::phoenix::Vector _g = _quad->__Field(HX_CSTRING("verts"),true)->__GetItem((int)3)->__Field(HX_CSTRING("pos"),true);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(223)
				{
					HX_STACK_LINE(223)
					Float _x = (_g->x + _diffx);		HX_STACK_VAR(_x,"_x");
					HX_STACK_LINE(223)
					_g->x = _x;
					HX_STACK_LINE(223)
					if ((_g->_construct)){
						HX_STACK_LINE(223)
						_g->x;
					}
					else{
						HX_STACK_LINE(223)
						if (((bool((_g->listen_x != null())) && bool(!(_g->ignore_listeners))))){
							HX_STACK_LINE(223)
							_g->listen_x(_x);
						}
						HX_STACK_LINE(223)
						_g->x;
					}
				}
			}
			HX_STACK_LINE(224)
			{
				HX_STACK_LINE(224)
				::phoenix::Vector _g = _quad->__Field(HX_CSTRING("verts"),true)->__GetItem((int)3)->__Field(HX_CSTRING("pos"),true);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(224)
				{
					HX_STACK_LINE(224)
					Float _y = (_g->y + _diffy);		HX_STACK_VAR(_y,"_y");
					HX_STACK_LINE(224)
					_g->y = _y;
					HX_STACK_LINE(224)
					if ((_g->_construct)){
						HX_STACK_LINE(224)
						_g->y;
					}
					else{
						HX_STACK_LINE(224)
						if (((bool((_g->listen_y != null())) && bool(!(_g->ignore_listeners))))){
							HX_STACK_LINE(224)
							_g->listen_y(_y);
						}
						HX_STACK_LINE(224)
						_g->y;
					}
				}
			}
			HX_STACK_LINE(226)
			{
				HX_STACK_LINE(226)
				::phoenix::Vector _g = _quad->__Field(HX_CSTRING("verts"),true)->__GetItem((int)4)->__Field(HX_CSTRING("pos"),true);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(226)
				{
					HX_STACK_LINE(226)
					Float _x = (_g->x + _diffx);		HX_STACK_VAR(_x,"_x");
					HX_STACK_LINE(226)
					_g->x = _x;
					HX_STACK_LINE(226)
					if ((_g->_construct)){
						HX_STACK_LINE(226)
						_g->x;
					}
					else{
						HX_STACK_LINE(226)
						if (((bool((_g->listen_x != null())) && bool(!(_g->ignore_listeners))))){
							HX_STACK_LINE(226)
							_g->listen_x(_x);
						}
						HX_STACK_LINE(226)
						_g->x;
					}
				}
			}
			HX_STACK_LINE(227)
			{
				HX_STACK_LINE(227)
				::phoenix::Vector _g = _quad->__Field(HX_CSTRING("verts"),true)->__GetItem((int)4)->__Field(HX_CSTRING("pos"),true);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(227)
				{
					HX_STACK_LINE(227)
					Float _y = (_g->y + _diffy);		HX_STACK_VAR(_y,"_y");
					HX_STACK_LINE(227)
					_g->y = _y;
					HX_STACK_LINE(227)
					if ((_g->_construct)){
						HX_STACK_LINE(227)
						_g->y;
					}
					else{
						HX_STACK_LINE(227)
						if (((bool((_g->listen_y != null())) && bool(!(_g->ignore_listeners))))){
							HX_STACK_LINE(227)
							_g->listen_y(_y);
						}
						HX_STACK_LINE(227)
						_g->y;
					}
				}
			}
			HX_STACK_LINE(229)
			{
				HX_STACK_LINE(229)
				::phoenix::Vector _g = _quad->__Field(HX_CSTRING("verts"),true)->__GetItem((int)5)->__Field(HX_CSTRING("pos"),true);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(229)
				{
					HX_STACK_LINE(229)
					Float _x = (_g->x + _diffx);		HX_STACK_VAR(_x,"_x");
					HX_STACK_LINE(229)
					_g->x = _x;
					HX_STACK_LINE(229)
					if ((_g->_construct)){
						HX_STACK_LINE(229)
						_g->x;
					}
					else{
						HX_STACK_LINE(229)
						if (((bool((_g->listen_x != null())) && bool(!(_g->ignore_listeners))))){
							HX_STACK_LINE(229)
							_g->listen_x(_x);
						}
						HX_STACK_LINE(229)
						_g->x;
					}
				}
			}
			HX_STACK_LINE(230)
			{
				HX_STACK_LINE(230)
				::phoenix::Vector _g = _quad->__Field(HX_CSTRING("verts"),true)->__GetItem((int)5)->__Field(HX_CSTRING("pos"),true);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(230)
				{
					HX_STACK_LINE(230)
					Float _y = (_g->y + _diffy);		HX_STACK_VAR(_y,"_y");
					HX_STACK_LINE(230)
					_g->y = _y;
					HX_STACK_LINE(230)
					if ((_g->_construct)){
						HX_STACK_LINE(230)
						_g->y;
					}
					else{
						HX_STACK_LINE(230)
						if (((bool((_g->listen_y != null())) && bool(!(_g->ignore_listeners))))){
							HX_STACK_LINE(230)
							_g->listen_y(_y);
						}
						HX_STACK_LINE(230)
						_g->y;
					}
				}
			}
			HX_STACK_LINE(233)
			this->set_dirty(true);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(QuadPackGeometry_obj,quad_pos,(void))

Void QuadPackGeometry_obj::quad_color( int _quad_id,::phoenix::Color _c){
{
		HX_STACK_FRAME("phoenix.geometry.QuadPackGeometry","quad_color",0xd488eeea,"phoenix.geometry.QuadPackGeometry.quad_color","phoenix/geometry/QuadPackGeometry.hx",239,0xc786266f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_quad_id,"_quad_id")
		HX_STACK_ARG(_c,"_c")
		HX_STACK_LINE(241)
		Dynamic _quad = this->quads->get(_quad_id);		HX_STACK_VAR(_quad,"_quad");
		HX_STACK_LINE(243)
		if (((_quad != null()))){
			HX_STACK_LINE(244)
			_quad->__Field(HX_CSTRING("verts"),true)->__GetItem((int)0)->__FieldRef(HX_CSTRING("color")) = _c;
			HX_STACK_LINE(245)
			_quad->__Field(HX_CSTRING("verts"),true)->__GetItem((int)1)->__FieldRef(HX_CSTRING("color")) = _c;
			HX_STACK_LINE(246)
			_quad->__Field(HX_CSTRING("verts"),true)->__GetItem((int)2)->__FieldRef(HX_CSTRING("color")) = _c;
			HX_STACK_LINE(247)
			_quad->__Field(HX_CSTRING("verts"),true)->__GetItem((int)3)->__FieldRef(HX_CSTRING("color")) = _c;
			HX_STACK_LINE(248)
			_quad->__Field(HX_CSTRING("verts"),true)->__GetItem((int)4)->__FieldRef(HX_CSTRING("color")) = _c;
			HX_STACK_LINE(249)
			_quad->__Field(HX_CSTRING("verts"),true)->__GetItem((int)5)->__FieldRef(HX_CSTRING("color")) = _c;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(QuadPackGeometry_obj,quad_color,(void))

Void QuadPackGeometry_obj::quad_alpha( int _quad_id,Float _a){
{
		HX_STACK_FRAME("phoenix.geometry.QuadPackGeometry","quad_alpha",0xabc324e5,"phoenix.geometry.QuadPackGeometry.quad_alpha","phoenix/geometry/QuadPackGeometry.hx",254,0xc786266f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_quad_id,"_quad_id")
		HX_STACK_ARG(_a,"_a")
		HX_STACK_LINE(256)
		Dynamic _quad = this->quads->get(_quad_id);		HX_STACK_VAR(_quad,"_quad");
		HX_STACK_LINE(258)
		if (((_quad != null()))){
			HX_STACK_LINE(259)
			_quad->__Field(HX_CSTRING("verts"),true)->__GetItem((int)0)->__Field(HX_CSTRING("color"),true)->__FieldRef(HX_CSTRING("a")) = _a;
			HX_STACK_LINE(260)
			_quad->__Field(HX_CSTRING("verts"),true)->__GetItem((int)1)->__Field(HX_CSTRING("color"),true)->__FieldRef(HX_CSTRING("a")) = _a;
			HX_STACK_LINE(261)
			_quad->__Field(HX_CSTRING("verts"),true)->__GetItem((int)2)->__Field(HX_CSTRING("color"),true)->__FieldRef(HX_CSTRING("a")) = _a;
			HX_STACK_LINE(262)
			_quad->__Field(HX_CSTRING("verts"),true)->__GetItem((int)3)->__Field(HX_CSTRING("color"),true)->__FieldRef(HX_CSTRING("a")) = _a;
			HX_STACK_LINE(263)
			_quad->__Field(HX_CSTRING("verts"),true)->__GetItem((int)4)->__Field(HX_CSTRING("color"),true)->__FieldRef(HX_CSTRING("a")) = _a;
			HX_STACK_LINE(264)
			_quad->__Field(HX_CSTRING("verts"),true)->__GetItem((int)5)->__Field(HX_CSTRING("color"),true)->__FieldRef(HX_CSTRING("a")) = _a;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(QuadPackGeometry_obj,quad_alpha,(void))

Void QuadPackGeometry_obj::quad_uv_space( int _quad_id,::phoenix::Rectangle _uv){
{
		HX_STACK_FRAME("phoenix.geometry.QuadPackGeometry","quad_uv_space",0xde7c2a01,"phoenix.geometry.QuadPackGeometry.quad_uv_space","phoenix/geometry/QuadPackGeometry.hx",269,0xc786266f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_quad_id,"_quad_id")
		HX_STACK_ARG(_uv,"_uv")
		HX_STACK_LINE(271)
		Dynamic _quad = this->quads->get(_quad_id);		HX_STACK_VAR(_quad,"_quad");
		HX_STACK_LINE(273)
		if (((_quad != null()))){
			HX_STACK_LINE(275)
			bool flipx = _quad->__Field(HX_CSTRING("flipx"),true);		HX_STACK_VAR(flipx,"flipx");
			HX_STACK_LINE(276)
			bool flipy = _quad->__Field(HX_CSTRING("flipy"),true);		HX_STACK_VAR(flipy,"flipy");
			HX_STACK_LINE(279)
			Float sz_x = _uv->w;		HX_STACK_VAR(sz_x,"sz_x");
			HX_STACK_LINE(280)
			Float sz_y = _uv->h;		HX_STACK_VAR(sz_y,"sz_y");
			HX_STACK_LINE(283)
			Float tl_x = _uv->x;		HX_STACK_VAR(tl_x,"tl_x");
			HX_STACK_LINE(284)
			Float tl_y = _uv->y;		HX_STACK_VAR(tl_y,"tl_y");
			HX_STACK_LINE(287)
			_quad->__Field(HX_CSTRING("_uv_cache"),true)->__Field(HX_CSTRING("set"),true)(tl_x,tl_y,sz_x,sz_y);
			HX_STACK_LINE(290)
			Float tr_x = (tl_x + sz_x);		HX_STACK_VAR(tr_x,"tr_x");
			HX_STACK_LINE(291)
			Float tr_y = tl_y;		HX_STACK_VAR(tr_y,"tr_y");
			HX_STACK_LINE(293)
			Float br_x = (tl_x + sz_x);		HX_STACK_VAR(br_x,"br_x");
			HX_STACK_LINE(294)
			Float br_y = (tl_y + sz_y);		HX_STACK_VAR(br_y,"br_y");
			HX_STACK_LINE(296)
			Float bl_x = tl_x;		HX_STACK_VAR(bl_x,"bl_x");
			HX_STACK_LINE(297)
			Float bl_y = (tl_y + sz_y);		HX_STACK_VAR(bl_y,"bl_y");
			HX_STACK_LINE(299)
			Float tmp_x = 0.0;		HX_STACK_VAR(tmp_x,"tmp_x");
			HX_STACK_LINE(300)
			Float tmp_y = 0.0;		HX_STACK_VAR(tmp_y,"tmp_y");
			HX_STACK_LINE(303)
			if ((flipy)){
				HX_STACK_LINE(306)
				tmp_y = bl_y;
				HX_STACK_LINE(307)
				bl_y = tl_y;
				HX_STACK_LINE(308)
				tl_y = tmp_y;
				HX_STACK_LINE(311)
				tmp_y = br_y;
				HX_STACK_LINE(312)
				br_y = tr_y;
				HX_STACK_LINE(313)
				tr_y = tmp_y;
			}
			HX_STACK_LINE(318)
			if ((flipx)){
				HX_STACK_LINE(321)
				tmp_x = tr_x;
				HX_STACK_LINE(322)
				tr_x = tl_x;
				HX_STACK_LINE(323)
				tl_x = tmp_x;
				HX_STACK_LINE(326)
				tmp_x = br_x;
				HX_STACK_LINE(327)
				br_x = bl_x;
				HX_STACK_LINE(328)
				bl_x = tmp_x;
			}
			HX_STACK_LINE(332)
			{
				HX_STACK_LINE(332)
				::phoenix::geometry::TextureCoord _this = _quad->__Field(HX_CSTRING("verts"),true)->__GetItem((int)0)->__Field(HX_CSTRING("uv"),true)->__Field(HX_CSTRING("uv0"),true);		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(332)
				_this->u = tl_x;
				HX_STACK_LINE(332)
				_this->v = tl_y;
				HX_STACK_LINE(332)
				_this;
			}
			HX_STACK_LINE(333)
			{
				HX_STACK_LINE(333)
				::phoenix::geometry::TextureCoord _this = _quad->__Field(HX_CSTRING("verts"),true)->__GetItem((int)1)->__Field(HX_CSTRING("uv"),true)->__Field(HX_CSTRING("uv0"),true);		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(333)
				_this->u = tr_x;
				HX_STACK_LINE(333)
				_this->v = tr_y;
				HX_STACK_LINE(333)
				_this;
			}
			HX_STACK_LINE(334)
			{
				HX_STACK_LINE(334)
				::phoenix::geometry::TextureCoord _this = _quad->__Field(HX_CSTRING("verts"),true)->__GetItem((int)2)->__Field(HX_CSTRING("uv"),true)->__Field(HX_CSTRING("uv0"),true);		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(334)
				_this->u = br_x;
				HX_STACK_LINE(334)
				_this->v = br_y;
				HX_STACK_LINE(334)
				_this;
			}
			HX_STACK_LINE(336)
			{
				HX_STACK_LINE(336)
				::phoenix::geometry::TextureCoord _this = _quad->__Field(HX_CSTRING("verts"),true)->__GetItem((int)3)->__Field(HX_CSTRING("uv"),true)->__Field(HX_CSTRING("uv0"),true);		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(336)
				_this->u = bl_x;
				HX_STACK_LINE(336)
				_this->v = bl_y;
				HX_STACK_LINE(336)
				_this;
			}
			HX_STACK_LINE(337)
			{
				HX_STACK_LINE(337)
				::phoenix::geometry::TextureCoord _this = _quad->__Field(HX_CSTRING("verts"),true)->__GetItem((int)4)->__Field(HX_CSTRING("uv"),true)->__Field(HX_CSTRING("uv0"),true);		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(337)
				_this->u = tl_x;
				HX_STACK_LINE(337)
				_this->v = tl_y;
				HX_STACK_LINE(337)
				_this;
			}
			HX_STACK_LINE(338)
			{
				HX_STACK_LINE(338)
				::phoenix::geometry::TextureCoord _this = _quad->__Field(HX_CSTRING("verts"),true)->__GetItem((int)5)->__Field(HX_CSTRING("uv"),true)->__Field(HX_CSTRING("uv0"),true);		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(338)
				_this->u = br_x;
				HX_STACK_LINE(338)
				_this->v = br_y;
				HX_STACK_LINE(338)
				_this;
			}
			HX_STACK_LINE(341)
			this->set_dirty(true);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(QuadPackGeometry_obj,quad_uv_space,(void))

Void QuadPackGeometry_obj::quad_uv( int _quad_id,::phoenix::Rectangle _uv){
{
		HX_STACK_FRAME("phoenix.geometry.QuadPackGeometry","quad_uv",0x72713e7a,"phoenix.geometry.QuadPackGeometry.quad_uv","phoenix/geometry/QuadPackGeometry.hx",347,0xc786266f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_quad_id,"_quad_id")
		HX_STACK_ARG(_uv,"_uv")
		HX_STACK_LINE(349)
		::phoenix::Texture _g = this->get_texture();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(349)
		if (((_g == null()))){
			HX_STACK_LINE(350)
			::haxe::Log_obj::trace(HX_CSTRING("Warning : calling UV on a PackedQuad Geometry with null texture."),hx::SourceInfo(HX_CSTRING("QuadPackGeometry.hx"),350,HX_CSTRING("phoenix.geometry.QuadPackGeometry"),HX_CSTRING("quad_uv")));
			HX_STACK_LINE(351)
			return null();
		}
		HX_STACK_LINE(354)
		Float tlx = (Float(_uv->x) / Float(this->get_texture()->width_actual));		HX_STACK_VAR(tlx,"tlx");
		HX_STACK_LINE(355)
		Float tly = (Float(_uv->y) / Float(this->get_texture()->height_actual));		HX_STACK_VAR(tly,"tly");
		HX_STACK_LINE(356)
		Float szx = (Float(_uv->w) / Float(this->get_texture()->width_actual));		HX_STACK_VAR(szx,"szx");
		HX_STACK_LINE(357)
		Float szy = (Float(_uv->h) / Float(this->get_texture()->height_actual));		HX_STACK_VAR(szy,"szy");
		HX_STACK_LINE(359)
		::phoenix::Rectangle _g1 = ::phoenix::Rectangle_obj::__new(tlx,tly,szx,szy);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(359)
		this->quad_uv_space(_quad_id,_g1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(QuadPackGeometry_obj,quad_uv,(void))

Void QuadPackGeometry_obj::quad_flipx( int _quad_id,bool _flip){
{
		HX_STACK_FRAME("phoenix.geometry.QuadPackGeometry","quad_flipx",0x8cbec2b2,"phoenix.geometry.QuadPackGeometry.quad_flipx","phoenix/geometry/QuadPackGeometry.hx",363,0xc786266f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_quad_id,"_quad_id")
		HX_STACK_ARG(_flip,"_flip")
		HX_STACK_LINE(365)
		Dynamic _quad = this->quads->get(_quad_id);		HX_STACK_VAR(_quad,"_quad");
		HX_STACK_LINE(367)
		if (((_quad != null()))){
			HX_STACK_LINE(368)
			_quad->__FieldRef(HX_CSTRING("flipx")) = _flip;
			HX_STACK_LINE(369)
			this->quad_uv_space(_quad_id,_quad->__Field(HX_CSTRING("_uv_cache"),true));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(QuadPackGeometry_obj,quad_flipx,(void))

Void QuadPackGeometry_obj::quad_flipy( int _quad_id,bool _flip){
{
		HX_STACK_FRAME("phoenix.geometry.QuadPackGeometry","quad_flipy",0x8cbec2b3,"phoenix.geometry.QuadPackGeometry.quad_flipy","phoenix/geometry/QuadPackGeometry.hx",374,0xc786266f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_quad_id,"_quad_id")
		HX_STACK_ARG(_flip,"_flip")
		HX_STACK_LINE(376)
		Dynamic _quad = this->quads->get(_quad_id);		HX_STACK_VAR(_quad,"_quad");
		HX_STACK_LINE(378)
		if (((_quad != null()))){
			HX_STACK_LINE(379)
			_quad->__FieldRef(HX_CSTRING("flipy")) = _flip;
			HX_STACK_LINE(380)
			this->quad_uv_space(_quad_id,_quad->__Field(HX_CSTRING("_uv_cache"),true));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(QuadPackGeometry_obj,quad_flipy,(void))


QuadPackGeometry_obj::QuadPackGeometry_obj()
{
}

void QuadPackGeometry_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(QuadPackGeometry);
	HX_MARK_MEMBER_NAME(quads,"quads");
	::phoenix::geometry::Geometry_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void QuadPackGeometry_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(quads,"quads");
	::phoenix::geometry::Geometry_obj::__Visit(HX_VISIT_ARG);
}

Dynamic QuadPackGeometry_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"quads") ) { return quads; }
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"quad_uv") ) { return quad_uv_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"quad_add") ) { return quad_add_dyn(); }
		if (HX_FIELD_EQ(inName,"quad_pos") ) { return quad_pos_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"quad_color") ) { return quad_color_dyn(); }
		if (HX_FIELD_EQ(inName,"quad_alpha") ) { return quad_alpha_dyn(); }
		if (HX_FIELD_EQ(inName,"quad_flipx") ) { return quad_flipx_dyn(); }
		if (HX_FIELD_EQ(inName,"quad_flipy") ) { return quad_flipy_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"quad_remove") ) { return quad_remove_dyn(); }
		if (HX_FIELD_EQ(inName,"quad_resize") ) { return quad_resize_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"quad_visible") ) { return quad_visible_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"quad_uv_space") ) { return quad_uv_space_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic QuadPackGeometry_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"quads") ) { quads=inValue.Cast< ::haxe::ds::IntMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void QuadPackGeometry_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("quads"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ds::IntMap*/ ,(int)offsetof(QuadPackGeometry_obj,quads),HX_CSTRING("quads")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("quads"),
	HX_CSTRING("clear"),
	HX_CSTRING("quad_add"),
	HX_CSTRING("quad_remove"),
	HX_CSTRING("quad_visible"),
	HX_CSTRING("quad_resize"),
	HX_CSTRING("quad_pos"),
	HX_CSTRING("quad_color"),
	HX_CSTRING("quad_alpha"),
	HX_CSTRING("quad_uv_space"),
	HX_CSTRING("quad_uv"),
	HX_CSTRING("quad_flipx"),
	HX_CSTRING("quad_flipy"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(QuadPackGeometry_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(QuadPackGeometry_obj::__mClass,"__mClass");
};

#endif

Class QuadPackGeometry_obj::__mClass;

void QuadPackGeometry_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("phoenix.geometry.QuadPackGeometry"), hx::TCanCast< QuadPackGeometry_obj> ,sStaticFields,sMemberFields,
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

void QuadPackGeometry_obj::__boot()
{
}

} // end namespace phoenix
} // end namespace geometry
