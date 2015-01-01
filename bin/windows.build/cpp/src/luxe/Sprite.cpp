#include <hxcpp.h>

#ifndef INCLUDED_Luxe
#include <Luxe.h>
#endif
#ifndef INCLUDED_luxe_Emitter
#include <luxe/Emitter.h>
#endif
#ifndef INCLUDED_luxe_Entity
#include <luxe/Entity.h>
#endif
#ifndef INCLUDED_luxe_Objects
#include <luxe/Objects.h>
#endif
#ifndef INCLUDED_luxe_Sprite
#include <luxe/Sprite.h>
#endif
#ifndef INCLUDED_luxe_Visual
#include <luxe/Visual.h>
#endif
#ifndef INCLUDED_luxe_resource_Resource
#include <luxe/resource/Resource.h>
#endif
#ifndef INCLUDED_luxe_resource_ResourceType
#include <luxe/resource/ResourceType.h>
#endif
#ifndef INCLUDED_luxe_utils_GeometryUtils
#include <luxe/utils/GeometryUtils.h>
#endif
#ifndef INCLUDED_luxe_utils_Utils
#include <luxe/utils/Utils.h>
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
#ifndef INCLUDED_phoenix_geometry_QuadGeometry
#include <phoenix/geometry/QuadGeometry.h>
#endif
namespace luxe{

Void Sprite_obj::__construct(Dynamic options)
{
HX_STACK_FRAME("luxe.Sprite","new",0x6e38414f,"luxe.Sprite.new","luxe/Sprite.hx",13,0xf10014e0)
HX_STACK_THIS(this)
HX_STACK_ARG(options,"options")
{
	HX_STACK_LINE(18)
	this->flipy = false;
	HX_STACK_LINE(17)
	this->flipx = false;
	HX_STACK_LINE(16)
	this->centered = true;
	HX_STACK_LINE(26)
	::phoenix::Rectangle _g = ::phoenix::Rectangle_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(26)
	this->set_uv(_g);
	HX_STACK_LINE(28)
	if (((options == null()))){
		HX_STACK_LINE(29)
		HX_STACK_DO_THROW(HX_CSTRING("Sprite needs not-null options at the moment"));
	}
	HX_STACK_LINE(33)
	if (((options->__Field(HX_CSTRING("centered"),true) != null()))){
		HX_STACK_LINE(34)
		this->set_centered(options->__Field(HX_CSTRING("centered"),true));
	}
	HX_STACK_LINE(38)
	if (((options->__Field(HX_CSTRING("flipx"),true) != null()))){
		HX_STACK_LINE(39)
		this->set_flipx(options->__Field(HX_CSTRING("flipx"),true));
	}
	HX_STACK_LINE(43)
	if (((options->__Field(HX_CSTRING("flipy"),true) != null()))){
		HX_STACK_LINE(44)
		this->set_flipy(options->__Field(HX_CSTRING("flipy"),true));
	}
	HX_STACK_LINE(48)
	super::__construct(options);
}
;
	return null();
}

//Sprite_obj::~Sprite_obj() { }

Dynamic Sprite_obj::__CreateEmpty() { return  new Sprite_obj; }
hx::ObjectPtr< Sprite_obj > Sprite_obj::__new(Dynamic options)
{  hx::ObjectPtr< Sprite_obj > result = new Sprite_obj();
	result->__construct(options);
	return result;}

Dynamic Sprite_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Sprite_obj > result = new Sprite_obj();
	result->__construct(inArgs[0]);
	return result;}

Void Sprite_obj::on_geometry_created( ){
{
		HX_STACK_FRAME("luxe.Sprite","on_geometry_created",0x10f5ed6a,"luxe.Sprite.on_geometry_created","luxe/Sprite.hx",52,0xf10014e0)
		HX_STACK_THIS(this)
		HX_STACK_LINE(52)
		Array< ::Dynamic > _g = Array_obj< ::Dynamic >::__new().Add(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(54)
		this->super::on_geometry_created();
		HX_STACK_LINE(56)
		if (((this->texture != null()))){

			HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_1,Array< ::Dynamic >,_g)
			Void run(::phoenix::Texture t){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","luxe/Sprite.hx",58,0xf10014e0)
				HX_STACK_ARG(t,"t")
				{
					HX_STACK_LINE(62)
					if (((_g->__get((int)0).StaticCast< ::luxe::Sprite >()->options->__Field(HX_CSTRING("uv"),true) == null()))){
						HX_STACK_LINE(65)
						_g->__get((int)0).StaticCast< ::luxe::Sprite >()->set_uv(::phoenix::Rectangle_obj::__new((int)0,(int)0,_g->__get((int)0).StaticCast< ::luxe::Sprite >()->texture->width,_g->__get((int)0).StaticCast< ::luxe::Sprite >()->texture->height));
					}
					else{
						HX_STACK_LINE(70)
						_g->__get((int)0).StaticCast< ::luxe::Sprite >()->set_uv(_g->__get((int)0).StaticCast< ::luxe::Sprite >()->options->__Field(HX_CSTRING("uv"),true));
					}
					HX_STACK_LINE(75)
					if (((_g->__get((int)0).StaticCast< ::luxe::Sprite >()->texture->type == ::luxe::resource::ResourceType_obj::render_texture))){
						HX_STACK_LINE(76)
						_g->__get((int)0).StaticCast< ::luxe::Sprite >()->set_flipy(true);
					}
				}
				return null();
			}
			HX_END_LOCAL_FUNC1((void))

			HX_STACK_LINE(58)
			this->texture->set_onload( Dynamic(new _Function_2_1(_g)));
		}
		HX_STACK_LINE(84)
		this->set_centered(!((!(this->centered))));
		HX_STACK_LINE(86)
		this->set_flipx(!((!(this->flipx))));
		HX_STACK_LINE(87)
		this->set_flipy(!((!(this->flipy))));
	}
return null();
}


::phoenix::geometry::Geometry Sprite_obj::set_geometry( ::phoenix::geometry::Geometry _g){
	HX_STACK_FRAME("luxe.Sprite","set_geometry",0x6c4f5360,"luxe.Sprite.set_geometry","luxe/Sprite.hx",91,0xf10014e0)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_g,"_g")
	HX_STACK_LINE(93)
	this->geometry_quad = _g;
	HX_STACK_LINE(94)
	return this->super::set_geometry(_g);
}


bool Sprite_obj::point_inside( ::phoenix::Vector _p){
	HX_STACK_FRAME("luxe.Sprite","point_inside",0xed3d407c,"luxe.Sprite.point_inside","luxe/Sprite.hx",101,0xf10014e0)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_p,"_p")
	HX_STACK_LINE(103)
	if (((this->geometry == null()))){
		HX_STACK_LINE(104)
		return false;
	}
	HX_STACK_LINE(107)
	return ::Luxe_obj::utils->geometry->point_in_geometry(_p,this->geometry);
}


HX_DEFINE_DYNAMIC_FUNC1(Sprite_obj,point_inside,return )

bool Sprite_obj::point_inside_AABB( ::phoenix::Vector _p){
	HX_STACK_FRAME("luxe.Sprite","point_inside_AABB",0x3f350483,"luxe.Sprite.point_inside_AABB","luxe/Sprite.hx",112,0xf10014e0)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_p,"_p")
	HX_STACK_LINE(114)
	::phoenix::Vector _g = this->get_pos();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(114)
	if (((_g == null()))){
		HX_STACK_LINE(114)
		return false;
	}
	HX_STACK_LINE(115)
	if (((this->size == null()))){
		HX_STACK_LINE(115)
		return false;
	}
	HX_STACK_LINE(118)
	Float _s_x = (this->size->x * this->get_scale()->x);		HX_STACK_VAR(_s_x,"_s_x");
	HX_STACK_LINE(119)
	Float _s_y = (this->size->y * this->get_scale()->y);		HX_STACK_VAR(_s_y,"_s_y");
	HX_STACK_LINE(121)
	if ((this->centered)){
		HX_STACK_LINE(122)
		Float _hx = (Float(_s_x) / Float((int)2));		HX_STACK_VAR(_hx,"_hx");
		HX_STACK_LINE(123)
		Float _hy = (Float(_s_y) / Float((int)2));		HX_STACK_VAR(_hy,"_hy");
		HX_STACK_LINE(124)
		if (((_p->x < (this->get_pos()->x - _hx)))){
			HX_STACK_LINE(124)
			return false;
		}
		HX_STACK_LINE(125)
		if (((_p->y < (this->get_pos()->y - _hy)))){
			HX_STACK_LINE(125)
			return false;
		}
		HX_STACK_LINE(126)
		if (((_p->x > ((this->get_pos()->x + _s_x) - _hx)))){
			HX_STACK_LINE(126)
			return false;
		}
		HX_STACK_LINE(127)
		if (((_p->y > ((this->get_pos()->y + _s_y) - _hy)))){
			HX_STACK_LINE(127)
			return false;
		}
	}
	else{
		HX_STACK_LINE(129)
		if (((_p->x < this->get_pos()->x))){
			HX_STACK_LINE(129)
			return false;
		}
		HX_STACK_LINE(130)
		if (((_p->y < this->get_pos()->y))){
			HX_STACK_LINE(130)
			return false;
		}
		HX_STACK_LINE(131)
		if (((_p->x > (this->get_pos()->x + _s_x)))){
			HX_STACK_LINE(131)
			return false;
		}
		HX_STACK_LINE(132)
		if (((_p->y > (this->get_pos()->y + _s_y)))){
			HX_STACK_LINE(132)
			return false;
		}
	}
	HX_STACK_LINE(135)
	return true;
}


HX_DEFINE_DYNAMIC_FUNC1(Sprite_obj,point_inside_AABB,return )

::phoenix::Rectangle Sprite_obj::set_uv( ::phoenix::Rectangle _uv){
	HX_STACK_FRAME("luxe.Sprite","set_uv",0x6df3e08f,"luxe.Sprite.set_uv","luxe/Sprite.hx",144,0xf10014e0)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_uv,"_uv")
	HX_STACK_LINE(146)
	if (((this->geometry_quad != null()))){
		HX_STACK_LINE(147)
		this->geometry_quad->uv(_uv);
	}
	HX_STACK_LINE(150)
	this->uv = _uv;
	HX_STACK_LINE(152)
	::phoenix::Rectangle_obj::listen(this->uv,this->_uv_change_dyn());
	HX_STACK_LINE(154)
	return this->uv;
}


HX_DEFINE_DYNAMIC_FUNC1(Sprite_obj,set_uv,return )

bool Sprite_obj::set_flipy( bool _v){
	HX_STACK_FRAME("luxe.Sprite","set_flipy",0x50eedbbe,"luxe.Sprite.set_flipy","luxe/Sprite.hx",159,0xf10014e0)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_v,"_v")
	HX_STACK_LINE(161)
	if (((_v == this->flipy))){
		HX_STACK_LINE(162)
		return this->flipy;
	}
	HX_STACK_LINE(165)
	if (((this->geometry_quad != null()))){
		HX_STACK_LINE(166)
		this->geometry_quad->set_flipy(_v);
	}
	HX_STACK_LINE(169)
	return this->flipy = _v;
}


HX_DEFINE_DYNAMIC_FUNC1(Sprite_obj,set_flipy,return )

bool Sprite_obj::set_flipx( bool _v){
	HX_STACK_FRAME("luxe.Sprite","set_flipx",0x50eedbbd,"luxe.Sprite.set_flipx","luxe/Sprite.hx",173,0xf10014e0)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_v,"_v")
	HX_STACK_LINE(175)
	if (((_v == this->flipx))){
		HX_STACK_LINE(176)
		return this->flipx;
	}
	HX_STACK_LINE(179)
	if (((this->geometry_quad != null()))){
		HX_STACK_LINE(180)
		this->geometry_quad->set_flipx(_v);
	}
	HX_STACK_LINE(183)
	return this->flipx = _v;
}


HX_DEFINE_DYNAMIC_FUNC1(Sprite_obj,set_flipx,return )

::phoenix::Vector Sprite_obj::set_size( ::phoenix::Vector _v){
	HX_STACK_FRAME("luxe.Sprite","set_size",0xb9bc826f,"luxe.Sprite.set_size","luxe/Sprite.hx",189,0xf10014e0)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_v,"_v")
	HX_STACK_LINE(193)
	if (((this->geometry_quad != null()))){
		HX_STACK_LINE(195)
		::phoenix::Vector _g = ::phoenix::Vector_obj::__new(_v->x,_v->y,null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(195)
		this->geometry_quad->resize(_g);
		HX_STACK_LINE(198)
		if ((!(this->_has_custom_origin))){
			HX_STACK_LINE(199)
			if ((this->centered)){
				HX_STACK_LINE(201)
				::phoenix::Vector _g1;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(201)
				{
					HX_STACK_LINE(201)
					::phoenix::Vector _this = ::phoenix::Vector_obj::__new(_v->x,_v->y,_v->z,_v->w);		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(201)
					{
						HX_STACK_LINE(201)
						Float _x = (Float(_this->x) / Float((int)2));		HX_STACK_VAR(_x,"_x");
						HX_STACK_LINE(201)
						Float _y = (Float(_this->y) / Float((int)2));		HX_STACK_VAR(_y,"_y");
						HX_STACK_LINE(201)
						Float _z = (Float(_this->z) / Float((int)2));		HX_STACK_VAR(_z,"_z");
						HX_STACK_LINE(201)
						bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
						HX_STACK_LINE(201)
						_this->ignore_listeners = true;
						HX_STACK_LINE(201)
						{
							HX_STACK_LINE(201)
							_this->x = _x;
							HX_STACK_LINE(201)
							if ((_this->_construct)){
								HX_STACK_LINE(201)
								_this->x;
							}
							else{
								HX_STACK_LINE(201)
								if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
									HX_STACK_LINE(201)
									_this->listen_x(_x);
								}
								HX_STACK_LINE(201)
								_this->x;
							}
						}
						HX_STACK_LINE(201)
						{
							HX_STACK_LINE(201)
							_this->y = _y;
							HX_STACK_LINE(201)
							if ((_this->_construct)){
								HX_STACK_LINE(201)
								_this->y;
							}
							else{
								HX_STACK_LINE(201)
								if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
									HX_STACK_LINE(201)
									_this->listen_y(_y);
								}
								HX_STACK_LINE(201)
								_this->y;
							}
						}
						HX_STACK_LINE(201)
						{
							HX_STACK_LINE(201)
							_this->z = _z;
							HX_STACK_LINE(201)
							if ((_this->_construct)){
								HX_STACK_LINE(201)
								_this->z;
							}
							else{
								HX_STACK_LINE(201)
								if (((bool((_this->listen_z != null())) && bool(!(_this->ignore_listeners))))){
									HX_STACK_LINE(201)
									_this->listen_z(_z);
								}
								HX_STACK_LINE(201)
								_this->z;
							}
						}
						HX_STACK_LINE(201)
						_this->ignore_listeners = prev;
						HX_STACK_LINE(201)
						if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
							HX_STACK_LINE(201)
							_this->listen_x(_this->x);
						}
						HX_STACK_LINE(201)
						if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
							HX_STACK_LINE(201)
							_this->listen_y(_this->y);
						}
						HX_STACK_LINE(201)
						if (((bool((_this->listen_z != null())) && bool(!(_this->ignore_listeners))))){
							HX_STACK_LINE(201)
							_this->listen_z(_this->z);
						}
						HX_STACK_LINE(201)
						_this;
					}
					HX_STACK_LINE(201)
					_g1 = _this;
				}
				HX_STACK_LINE(201)
				this->set_origin(_g1);
			}
		}
	}
	HX_STACK_LINE(208)
	return this->super::set_size(_v);
}


bool Sprite_obj::set_centered( bool _c){
	HX_STACK_FRAME("luxe.Sprite","set_centered",0x28f6ae22,"luxe.Sprite.set_centered","luxe/Sprite.hx",214,0xf10014e0)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_c,"_c")
	HX_STACK_LINE(217)
	if (((this->size != null()))){
		HX_STACK_LINE(218)
		if ((_c)){
			HX_STACK_LINE(219)
			::phoenix::Vector _g = ::phoenix::Vector_obj::__new((Float(this->size->x) / Float((int)2)),(Float(this->size->y) / Float((int)2)),null(),null());		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(219)
			this->set_origin(_g);
		}
		else{
			HX_STACK_LINE(221)
			::phoenix::Vector _g1 = ::phoenix::Vector_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(221)
			this->set_origin(_g1);
		}
	}
	HX_STACK_LINE(225)
	return this->centered = _c;
}


HX_DEFINE_DYNAMIC_FUNC1(Sprite_obj,set_centered,return )

Void Sprite_obj::_uv_change( Float _v){
{
		HX_STACK_FRAME("luxe.Sprite","_uv_change",0x95c3d180,"luxe.Sprite._uv_change","luxe/Sprite.hx",231,0xf10014e0)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_v,"_v")
		HX_STACK_LINE(231)
		this->set_uv(this->uv);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Sprite_obj,_uv_change,(void))

Void Sprite_obj::init( ){
{
		HX_STACK_FRAME("luxe.Sprite","init",0xffb99b41,"luxe.Sprite.init","luxe/macros/EntityRules.hx",35,0xed942299)
		HX_STACK_THIS(this)
	}
return null();
}


Void Sprite_obj::ondestroy( ){
{
		HX_STACK_FRAME("luxe.Sprite","ondestroy",0x56420bea,"luxe.Sprite.ondestroy","luxe/macros/EntityRules.hx",47,0xed942299)
		HX_STACK_THIS(this)
		HX_STACK_LINE(47)
		this->super::ondestroy();
	}
return null();
}



Sprite_obj::Sprite_obj()
{
}

void Sprite_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Sprite);
	HX_MARK_MEMBER_NAME(centered,"centered");
	HX_MARK_MEMBER_NAME(flipx,"flipx");
	HX_MARK_MEMBER_NAME(flipy,"flipy");
	HX_MARK_MEMBER_NAME(uv,"uv");
	HX_MARK_MEMBER_NAME(geometry_quad,"geometry_quad");
	::luxe::Visual_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Sprite_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(centered,"centered");
	HX_VISIT_MEMBER_NAME(flipx,"flipx");
	HX_VISIT_MEMBER_NAME(flipy,"flipy");
	HX_VISIT_MEMBER_NAME(uv,"uv");
	HX_VISIT_MEMBER_NAME(geometry_quad,"geometry_quad");
	::luxe::Visual_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Sprite_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"uv") ) { return uv; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"flipx") ) { return flipx; }
		if (HX_FIELD_EQ(inName,"flipy") ) { return flipy; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"set_uv") ) { return set_uv_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"centered") ) { return centered; }
		if (HX_FIELD_EQ(inName,"set_size") ) { return set_size_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"set_flipy") ) { return set_flipy_dyn(); }
		if (HX_FIELD_EQ(inName,"set_flipx") ) { return set_flipx_dyn(); }
		if (HX_FIELD_EQ(inName,"ondestroy") ) { return ondestroy_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_uv_change") ) { return _uv_change_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"set_geometry") ) { return set_geometry_dyn(); }
		if (HX_FIELD_EQ(inName,"point_inside") ) { return point_inside_dyn(); }
		if (HX_FIELD_EQ(inName,"set_centered") ) { return set_centered_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"geometry_quad") ) { return geometry_quad; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"point_inside_AABB") ) { return point_inside_AABB_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"on_geometry_created") ) { return on_geometry_created_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Sprite_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"uv") ) { if (inCallProp) return set_uv(inValue);uv=inValue.Cast< ::phoenix::Rectangle >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"flipx") ) { if (inCallProp) return set_flipx(inValue);flipx=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"flipy") ) { if (inCallProp) return set_flipy(inValue);flipy=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"centered") ) { if (inCallProp) return set_centered(inValue);centered=inValue.Cast< bool >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"geometry_quad") ) { geometry_quad=inValue.Cast< ::phoenix::geometry::QuadGeometry >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Sprite_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("centered"));
	outFields->push(HX_CSTRING("flipx"));
	outFields->push(HX_CSTRING("flipy"));
	outFields->push(HX_CSTRING("uv"));
	outFields->push(HX_CSTRING("geometry_quad"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(Sprite_obj,centered),HX_CSTRING("centered")},
	{hx::fsBool,(int)offsetof(Sprite_obj,flipx),HX_CSTRING("flipx")},
	{hx::fsBool,(int)offsetof(Sprite_obj,flipy),HX_CSTRING("flipy")},
	{hx::fsObject /*::phoenix::Rectangle*/ ,(int)offsetof(Sprite_obj,uv),HX_CSTRING("uv")},
	{hx::fsObject /*::phoenix::geometry::QuadGeometry*/ ,(int)offsetof(Sprite_obj,geometry_quad),HX_CSTRING("geometry_quad")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("centered"),
	HX_CSTRING("flipx"),
	HX_CSTRING("flipy"),
	HX_CSTRING("uv"),
	HX_CSTRING("geometry_quad"),
	HX_CSTRING("on_geometry_created"),
	HX_CSTRING("set_geometry"),
	HX_CSTRING("point_inside"),
	HX_CSTRING("point_inside_AABB"),
	HX_CSTRING("set_uv"),
	HX_CSTRING("set_flipy"),
	HX_CSTRING("set_flipx"),
	HX_CSTRING("set_size"),
	HX_CSTRING("set_centered"),
	HX_CSTRING("_uv_change"),
	HX_CSTRING("init"),
	HX_CSTRING("ondestroy"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Sprite_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Sprite_obj::__mClass,"__mClass");
};

#endif

Class Sprite_obj::__mClass;

void Sprite_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("luxe.Sprite"), hx::TCanCast< Sprite_obj> ,sStaticFields,sMemberFields,
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

void Sprite_obj::__boot()
{
}

} // end namespace luxe
