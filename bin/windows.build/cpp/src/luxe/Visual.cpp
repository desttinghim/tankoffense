#include <hxcpp.h>

#ifndef INCLUDED_Luxe
#include <Luxe.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_luxe_Emitter
#include <luxe/Emitter.h>
#endif
#ifndef INCLUDED_luxe_Entity
#include <luxe/Entity.h>
#endif
#ifndef INCLUDED_luxe_ID
#include <luxe/ID.h>
#endif
#ifndef INCLUDED_luxe_Objects
#include <luxe/Objects.h>
#endif
#ifndef INCLUDED_luxe_Visual
#include <luxe/Visual.h>
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
#ifndef INCLUDED_phoenix_Quaternion
#include <phoenix/Quaternion.h>
#endif
#ifndef INCLUDED_phoenix_Rectangle
#include <phoenix/Rectangle.h>
#endif
#ifndef INCLUDED_phoenix_Renderer
#include <phoenix/Renderer.h>
#endif
#ifndef INCLUDED_phoenix_Shader
#include <phoenix/Shader.h>
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
namespace luxe{

Void Visual_obj::__construct(Dynamic _options)
{
HX_STACK_FRAME("luxe.Visual","new",0x85b8018a,"luxe.Visual.new","luxe/Visual.hx",24,0xe3547505)
HX_STACK_THIS(this)
HX_STACK_ARG(_options,"_options")
{
	HX_STACK_LINE(293)
	this->ignore_texture_on_geometry_change = false;
	HX_STACK_LINE(140)
	this->_creating_geometry = false;
	HX_STACK_LINE(55)
	this->_has_custom_origin = false;
	HX_STACK_LINE(48)
	this->radians = 0.0;
	HX_STACK_LINE(44)
	this->group = (int)0;
	HX_STACK_LINE(42)
	this->depth = 0.0;
	HX_STACK_LINE(40)
	this->visible = true;
	HX_STACK_LINE(32)
	this->locked = false;
	HX_STACK_LINE(58)
	Array< ::Dynamic > _g = Array_obj< ::Dynamic >::__new().Add(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(61)
	if (((_options == null()))){
		HX_STACK_LINE(62)
		HX_STACK_DO_THROW(HX_CSTRING("Visual needs not-null options at the moment"));
	}
	HX_STACK_LINE(67)
	::phoenix::Vector _g1 = ::phoenix::Vector_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(67)
	this->_rotation_euler = _g1;
	HX_STACK_LINE(68)
	::phoenix::Quaternion _g11 = ::phoenix::Quaternion_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(_g11,"_g11");
	HX_STACK_LINE(68)
	this->_rotation_quat = _g11;
	HX_STACK_LINE(71)
	super::__construct(_options);
	HX_STACK_LINE(74)
	::phoenix::Color _g2 = ::phoenix::Color_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(74)
	this->set_color(_g2);
	HX_STACK_LINE(75)
	::phoenix::Vector _g3 = ::phoenix::Vector_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(75)
	this->set_size(_g3);
	HX_STACK_LINE(78)
	if (((this->options->__Field(HX_CSTRING("texture"),true) != null()))){
		HX_STACK_LINE(79)
		this->set_texture(this->options->__Field(HX_CSTRING("texture"),true));
	}
	HX_STACK_LINE(82)
	if (((this->options->__Field(HX_CSTRING("shader"),true) != null()))){
		HX_STACK_LINE(83)
		this->set_shader(this->options->__Field(HX_CSTRING("shader"),true));
	}
	HX_STACK_LINE(86)
	if (((this->options->__Field(HX_CSTRING("color"),true) != null()))){
		HX_STACK_LINE(87)
		this->set_color(this->options->__Field(HX_CSTRING("color"),true));
	}
	HX_STACK_LINE(90)
	if (((this->options->__Field(HX_CSTRING("depth"),true) != null()))){
		HX_STACK_LINE(91)
		this->set_depth(this->options->__Field(HX_CSTRING("depth"),true));
	}
	HX_STACK_LINE(94)
	if (((this->options->__Field(HX_CSTRING("group"),true) != null()))){
		HX_STACK_LINE(95)
		this->set_group(this->options->__Field(HX_CSTRING("group"),true));
	}
	HX_STACK_LINE(98)
	if (((this->options->__Field(HX_CSTRING("visible"),true) != null()))){
		HX_STACK_LINE(99)
		this->set_visible(this->options->__Field(HX_CSTRING("visible"),true));
	}
	HX_STACK_LINE(105)
	if (((this->options->__Field(HX_CSTRING("size"),true) != null()))){
		HX_STACK_LINE(107)
		this->set_size(this->options->__Field(HX_CSTRING("size"),true));
		HX_STACK_LINE(109)
		this->_create_geometry();
	}
	else{
		HX_STACK_LINE(114)
		if (((this->texture != null()))){
			HX_STACK_LINE(115)
			if ((this->texture->loaded)){
				HX_STACK_LINE(117)
				::phoenix::Vector _g4 = ::phoenix::Vector_obj::__new(this->texture->width,this->texture->height,null(),null());		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(117)
				this->set_size(_g4);
				HX_STACK_LINE(118)
				this->_create_geometry();
			}
			else{

				HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_4_1,Array< ::Dynamic >,_g)
				Void run(::phoenix::Texture _texture){
					HX_STACK_FRAME("*","_Function_4_1",0x520333fa,"*._Function_4_1","luxe/Visual.hx",122,0xe3547505)
					HX_STACK_ARG(_texture,"_texture")
					{
						HX_STACK_LINE(123)
						_g->__get((int)0).StaticCast< ::luxe::Visual >()->set_size(::phoenix::Vector_obj::__new(_texture->width,_texture->height,null(),null()));
						HX_STACK_LINE(124)
						_g->__get((int)0).StaticCast< ::luxe::Visual >()->_create_geometry();
					}
					return null();
				}
				HX_END_LOCAL_FUNC1((void))

				HX_STACK_LINE(122)
				this->texture->set_onload( Dynamic(new _Function_4_1(_g)));
			}
		}
		else{
			HX_STACK_LINE(130)
			::phoenix::Vector _g5 = ::phoenix::Vector_obj::__new((int)64,(int)64,null(),null());		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(130)
			this->set_size(_g5);
			HX_STACK_LINE(132)
			this->_create_geometry();
		}
	}
}
;
	return null();
}

//Visual_obj::~Visual_obj() { }

Dynamic Visual_obj::__CreateEmpty() { return  new Visual_obj; }
hx::ObjectPtr< Visual_obj > Visual_obj::__new(Dynamic _options)
{  hx::ObjectPtr< Visual_obj > result = new Visual_obj();
	result->__construct(_options);
	return result;}

Dynamic Visual_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Visual_obj > result = new Visual_obj();
	result->__construct(inArgs[0]);
	return result;}

Void Visual_obj::_create_geometry( ){
{
		HX_STACK_FRAME("luxe.Visual","_create_geometry",0x0dc0f2ac,"luxe.Visual._create_geometry","luxe/Visual.hx",141,0xe3547505)
		HX_STACK_THIS(this)
		HX_STACK_LINE(144)
		if (((this->options->__Field(HX_CSTRING("geometry"),true) == null()))){
			HX_STACK_LINE(146)
			if (((bool((this->options->__Field(HX_CSTRING("no_geometry"),true) == null())) || bool((this->options->__Field(HX_CSTRING("no_geometry"),true) == false))))){
				HX_STACK_LINE(148)
				this->_creating_geometry = true;
				HX_STACK_LINE(150)
				::phoenix::Batcher _batcher = null();		HX_STACK_VAR(_batcher,"_batcher");
				HX_STACK_LINE(151)
				if (((bool((this->options->__Field(HX_CSTRING("no_batcher_add"),true) == null())) || bool((this->options->__Field(HX_CSTRING("no_batcher_add"),true) == false))))){
					HX_STACK_LINE(152)
					if (((this->options->__Field(HX_CSTRING("batcher"),true) != null()))){
						HX_STACK_LINE(153)
						_batcher = this->options->__Field(HX_CSTRING("batcher"),true);
					}
					else{
						HX_STACK_LINE(155)
						_batcher = ::Luxe_obj::renderer->batcher;
					}
				}
				HX_STACK_LINE(165)
				::phoenix::Vector _g = ::phoenix::Vector_obj::__new((int)1,(int)1,(int)1,null());		HX_STACK_VAR(_g,"_g");
				struct _Function_3_1{
					inline static Dynamic Block( hx::ObjectPtr< ::luxe::Visual_obj > __this,::phoenix::Vector &_g,::phoenix::Batcher &_batcher){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/Visual.hx",159,0xe3547505)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_CSTRING("id") , (__this->name + HX_CSTRING(".visual")),false);
							__result->Add(HX_CSTRING("x") , (int)0,false);
							__result->Add(HX_CSTRING("y") , (int)0,false);
							__result->Add(HX_CSTRING("w") , __this->size->x,false);
							__result->Add(HX_CSTRING("h") , __this->size->y,false);
							__result->Add(HX_CSTRING("scale") , _g,false);
							__result->Add(HX_CSTRING("texture") , __this->texture,false);
							__result->Add(HX_CSTRING("color") , __this->color,false);
							__result->Add(HX_CSTRING("shader") , __this->shader,false);
							__result->Add(HX_CSTRING("batcher") , _batcher,false);
							__result->Add(HX_CSTRING("depth") , (  (((__this->options->__Field(HX_CSTRING("depth"),true) == null()))) ? Dynamic((int)0) : Dynamic(__this->options->__Field(HX_CSTRING("depth"),true)) ),false);
							__result->Add(HX_CSTRING("group") , (  (((__this->options->__Field(HX_CSTRING("group"),true) == null()))) ? Dynamic((int)0) : Dynamic(__this->options->__Field(HX_CSTRING("group"),true)) ),false);
							__result->Add(HX_CSTRING("visible") , (  (((__this->options->__Field(HX_CSTRING("visible"),true) == null()))) ? Dynamic(__this->visible) : Dynamic(__this->options->__Field(HX_CSTRING("visible"),true)) ),false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(159)
				Dynamic _g1 = _Function_3_1::Block(this,_g,_batcher);		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(159)
				::phoenix::geometry::QuadGeometry _g2 = ::phoenix::geometry::QuadGeometry_obj::__new(_g1);		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(159)
				this->set_geometry(_g2);
				HX_STACK_LINE(175)
				this->_creating_geometry = false;
				HX_STACK_LINE(178)
				this->on_geometry_created();
			}
		}
		else{
			HX_STACK_LINE(184)
			this->set_geometry(this->options->__Field(HX_CSTRING("geometry"),true));
		}
		HX_STACK_LINE(189)
		if (((this->geometry != null()))){
			HX_STACK_LINE(190)
			this->geometry->id = (this->name + HX_CSTRING(".visual"));
			HX_STACK_LINE(191)
			this->geometry->transform->id = (this->name + HX_CSTRING(".visual.transform"));
		}
		HX_STACK_LINE(195)
		if (((this->options->__Field(HX_CSTRING("origin"),true) != null()))){
			HX_STACK_LINE(196)
			this->_has_custom_origin = true;
			HX_STACK_LINE(197)
			this->set_origin(this->options->__Field(HX_CSTRING("origin"),true));
		}
		HX_STACK_LINE(201)
		if (((this->options->__Field(HX_CSTRING("rotation_z"),true) != null()))){
			HX_STACK_LINE(202)
			this->set_rotation_z(this->options->__Field(HX_CSTRING("rotation_z"),true));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Visual_obj,_create_geometry,(void))

Void Visual_obj::ondestroy( ){
{
		HX_STACK_FRAME("luxe.Visual","ondestroy",0x45842a65,"luxe.Visual.ondestroy","luxe/Visual.hx",207,0xe3547505)
		HX_STACK_THIS(this)
		HX_STACK_LINE(210)
		if (((bool((this->geometry != null())) && bool(this->geometry->added)))){
			HX_STACK_LINE(211)
			this->geometry->drop(true);
		}
		HX_STACK_LINE(215)
		this->set_geometry(null());
		HX_STACK_LINE(216)
		this->set_texture(null());
	}
return null();
}


Void Visual_obj::on_geometry_created( ){
{
		HX_STACK_FRAME("luxe.Visual","on_geometry_created",0x622713a5,"luxe.Visual.on_geometry_created","luxe/Visual.hx",220,0xe3547505)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Visual_obj,on_geometry_created,(void))

bool Visual_obj::set_visible( bool _v){
	HX_STACK_FRAME("luxe.Visual","set_visible",0x8da44abf,"luxe.Visual.set_visible","luxe/Visual.hx",228,0xe3547505)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_v,"_v")
	HX_STACK_LINE(230)
	this->visible = _v;
	HX_STACK_LINE(233)
	if (((this->geometry != null()))){
		HX_STACK_LINE(234)
		this->geometry->set_visible(this->visible);
	}
	HX_STACK_LINE(237)
	return this->visible;
}


HX_DEFINE_DYNAMIC_FUNC1(Visual_obj,set_visible,return )

Float Visual_obj::set_depth( Float _v){
	HX_STACK_FRAME("luxe.Visual","set_depth",0x14c8a610,"luxe.Visual.set_depth","luxe/Visual.hx",241,0xe3547505)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_v,"_v")
	HX_STACK_LINE(243)
	if (((this->geometry != null()))){
		HX_STACK_LINE(244)
		this->geometry->set_depth(_v);
	}
	HX_STACK_LINE(247)
	return this->depth = _v;
}


HX_DEFINE_DYNAMIC_FUNC1(Visual_obj,set_depth,return )

int Visual_obj::set_group( int _v){
	HX_STACK_FRAME("luxe.Visual","set_group",0xd793684c,"luxe.Visual.set_group","luxe/Visual.hx",251,0xe3547505)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_v,"_v")
	HX_STACK_LINE(253)
	if (((this->geometry != null()))){
		HX_STACK_LINE(254)
		this->geometry->set_group(_v);
	}
	HX_STACK_LINE(257)
	return this->group = _v;
}


HX_DEFINE_DYNAMIC_FUNC1(Visual_obj,set_group,return )

::phoenix::Color Visual_obj::set_color( ::phoenix::Color _c){
	HX_STACK_FRAME("luxe.Visual","set_color",0x87fb2670,"luxe.Visual.set_color","luxe/Visual.hx",263,0xe3547505)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_c,"_c")
	HX_STACK_LINE(265)
	if (((bool((this->color != null())) && bool((this->geometry != null()))))){
		HX_STACK_LINE(266)
		this->geometry->set_color(_c);
	}
	HX_STACK_LINE(269)
	return this->color = _c;
}


HX_DEFINE_DYNAMIC_FUNC1(Visual_obj,set_color,return )

::phoenix::Texture Visual_obj::set_texture( ::phoenix::Texture _t){
	HX_STACK_FRAME("luxe.Visual","set_texture",0x89609b28,"luxe.Visual.set_texture","luxe/Visual.hx",273,0xe3547505)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_t,"_t")
	struct _Function_1_1{
		inline static bool Block( hx::ObjectPtr< ::luxe::Visual_obj > __this,::phoenix::Texture &_t){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/Visual.hx",275,0xe3547505)
			{
				HX_STACK_LINE(275)
				::phoenix::Texture _g = __this->geometry->get_texture();		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(275)
				return (_g != _t);
			}
			return null();
		}
	};
	HX_STACK_LINE(275)
	if (((  (((this->geometry != null()))) ? bool(_Function_1_1::Block(this,_t)) : bool(false) ))){
		HX_STACK_LINE(276)
		this->geometry->set_texture(_t);
	}
	HX_STACK_LINE(279)
	return this->texture = _t;
}


HX_DEFINE_DYNAMIC_FUNC1(Visual_obj,set_texture,return )

::phoenix::Shader Visual_obj::set_shader( ::phoenix::Shader _s){
	HX_STACK_FRAME("luxe.Visual","set_shader",0xca607578,"luxe.Visual.set_shader","luxe/Visual.hx",282,0xe3547505)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_s,"_s")
	struct _Function_1_1{
		inline static bool Block( hx::ObjectPtr< ::luxe::Visual_obj > __this,::phoenix::Shader &_s){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/Visual.hx",284,0xe3547505)
			{
				HX_STACK_LINE(284)
				::phoenix::Shader _g = __this->geometry->get_shader();		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(284)
				return (_g != _s);
			}
			return null();
		}
	};
	HX_STACK_LINE(284)
	if (((  (((this->geometry != null()))) ? bool(_Function_1_1::Block(this,_s)) : bool(false) ))){
		HX_STACK_LINE(285)
		this->geometry->set_shader(_s);
	}
	HX_STACK_LINE(288)
	return this->shader = _s;
}


HX_DEFINE_DYNAMIC_FUNC1(Visual_obj,set_shader,return )

::phoenix::geometry::Geometry Visual_obj::set_geometry( ::phoenix::geometry::Geometry _g){
	HX_STACK_FRAME("luxe.Visual","set_geometry",0x180133c5,"luxe.Visual.set_geometry","luxe/Visual.hx",295,0xe3547505)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_g,"_g")
	HX_STACK_LINE(298)
	if (((this->geometry == _g))){
		HX_STACK_LINE(299)
		return this->geometry;
	}
	HX_STACK_LINE(303)
	if (((this->geometry != null()))){
		HX_STACK_LINE(304)
		this->geometry->drop(null());
	}
	HX_STACK_LINE(308)
	this->geometry = _g;
	HX_STACK_LINE(311)
	if (((this->geometry != null()))){
		HX_STACK_LINE(314)
		{
			HX_STACK_LINE(314)
			::phoenix::Transform _this = this->geometry->transform;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(314)
			{
				HX_STACK_LINE(314)
				_this->dirty = true;
				HX_STACK_LINE(314)
				if (((bool((bool((bool(_this->dirty) && bool(!(_this->_setup)))) && bool((_this->_dirty_handlers != null())))) && bool((_this->_dirty_handlers->__Field(HX_CSTRING("length"),true) > (int)0))))){
					HX_STACK_LINE(314)
					int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(314)
					Dynamic _g11 = _this->_dirty_handlers;		HX_STACK_VAR(_g11,"_g11");
					HX_STACK_LINE(314)
					while((true)){
						HX_STACK_LINE(314)
						if ((!(((_g1 < _g11->__Field(HX_CSTRING("length"),true)))))){
							HX_STACK_LINE(314)
							break;
						}
						HX_STACK_LINE(314)
						Dynamic _handler = _g11->__GetItem(_g1);		HX_STACK_VAR(_handler,"_handler");
						HX_STACK_LINE(314)
						++(_g1);
						HX_STACK_LINE(314)
						if (((_handler != null()))){
							HX_STACK_LINE(314)
							_handler(_this).Cast< Void >();
						}
					}
				}
				HX_STACK_LINE(314)
				_this->dirty;
			}
			HX_STACK_LINE(314)
			if (((_this->parent != null()))){
				HX_STACK_LINE(314)
				::phoenix::Transform _this1 = _this->parent;		HX_STACK_VAR(_this1,"_this1");
				HX_STACK_LINE(314)
				if (((_this1->_clean_handlers == null()))){
					HX_STACK_LINE(314)
					false;
				}
				else{
					HX_STACK_LINE(314)
					_this1->_clean_handlers->__Field(HX_CSTRING("remove"),true)(_this->on_parent_cleaned_dyn());
				}
			}
			HX_STACK_LINE(314)
			_this->parent = this->transform;
			HX_STACK_LINE(314)
			if (((bool((_this->_parent_handlers != null())) && bool((_this->_parent_handlers->__Field(HX_CSTRING("length"),true) > (int)0))))){
				HX_STACK_LINE(314)
				::phoenix::Transform _parent = _this->parent;		HX_STACK_VAR(_parent,"_parent");
				HX_STACK_LINE(314)
				{
					HX_STACK_LINE(314)
					int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(314)
					Dynamic _g11 = _this->_parent_handlers;		HX_STACK_VAR(_g11,"_g11");
					HX_STACK_LINE(314)
					while((true)){
						HX_STACK_LINE(314)
						if ((!(((_g1 < _g11->__Field(HX_CSTRING("length"),true)))))){
							HX_STACK_LINE(314)
							break;
						}
						HX_STACK_LINE(314)
						Dynamic _handler = _g11->__GetItem(_g1);		HX_STACK_VAR(_handler,"_handler");
						HX_STACK_LINE(314)
						++(_g1);
						HX_STACK_LINE(314)
						if (((_handler != null()))){
							HX_STACK_LINE(314)
							_handler(_parent).Cast< Void >();
						}
					}
				}
			}
			HX_STACK_LINE(314)
			if (((_this->parent != null()))){
				HX_STACK_LINE(314)
				::phoenix::Transform _this1 = _this->parent;		HX_STACK_VAR(_this1,"_this1");
				HX_STACK_LINE(314)
				if (((_this1->_clean_handlers == null()))){
					HX_STACK_LINE(314)
					_this1->_clean_handlers = Dynamic( Array_obj<Dynamic>::__new());
				}
				HX_STACK_LINE(314)
				_this1->_clean_handlers->__Field(HX_CSTRING("push"),true)(_this->on_parent_cleaned_dyn());
			}
			HX_STACK_LINE(314)
			_this->parent;
		}
		HX_STACK_LINE(323)
		if (((this->_creating_geometry == false))){
			HX_STACK_LINE(325)
			this->geometry->set_color(this->color);
			HX_STACK_LINE(326)
			this->geometry->set_group(this->group);
			HX_STACK_LINE(327)
			this->geometry->set_depth(this->depth);
			HX_STACK_LINE(328)
			this->geometry->set_visible(this->visible);
			HX_STACK_LINE(331)
			if ((!(this->ignore_texture_on_geometry_change))){
			}
		}
	}
	HX_STACK_LINE(340)
	return this->geometry;
}


HX_DEFINE_DYNAMIC_FUNC1(Visual_obj,set_geometry,return )

Void Visual_obj::set_parent_from_transform( ::phoenix::Transform _parent){
{
		HX_STACK_FRAME("luxe.Visual","set_parent_from_transform",0x5e81f8d9,"luxe.Visual.set_parent_from_transform","luxe/Visual.hx",347,0xe3547505)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_parent,"_parent")
		HX_STACK_LINE(349)
		this->super::set_parent_from_transform(_parent);
		HX_STACK_LINE(351)
		if (((this->geometry != null()))){
			HX_STACK_LINE(353)
			::phoenix::Transform _this = this->geometry->transform;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(353)
			{
				HX_STACK_LINE(353)
				_this->dirty = true;
				HX_STACK_LINE(353)
				if (((bool((bool((bool(_this->dirty) && bool(!(_this->_setup)))) && bool((_this->_dirty_handlers != null())))) && bool((_this->_dirty_handlers->__Field(HX_CSTRING("length"),true) > (int)0))))){
					HX_STACK_LINE(353)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(353)
					Dynamic _g1 = _this->_dirty_handlers;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(353)
					while((true)){
						HX_STACK_LINE(353)
						if ((!(((_g < _g1->__Field(HX_CSTRING("length"),true)))))){
							HX_STACK_LINE(353)
							break;
						}
						HX_STACK_LINE(353)
						Dynamic _handler = _g1->__GetItem(_g);		HX_STACK_VAR(_handler,"_handler");
						HX_STACK_LINE(353)
						++(_g);
						HX_STACK_LINE(353)
						if (((_handler != null()))){
							HX_STACK_LINE(353)
							_handler(_this).Cast< Void >();
						}
					}
				}
				HX_STACK_LINE(353)
				_this->dirty;
			}
			HX_STACK_LINE(353)
			if (((_this->parent != null()))){
				HX_STACK_LINE(353)
				::phoenix::Transform _this1 = _this->parent;		HX_STACK_VAR(_this1,"_this1");
				HX_STACK_LINE(353)
				if (((_this1->_clean_handlers == null()))){
					HX_STACK_LINE(353)
					false;
				}
				else{
					HX_STACK_LINE(353)
					_this1->_clean_handlers->__Field(HX_CSTRING("remove"),true)(_this->on_parent_cleaned_dyn());
				}
			}
			HX_STACK_LINE(353)
			_this->parent = this->transform;
			HX_STACK_LINE(353)
			if (((bool((_this->_parent_handlers != null())) && bool((_this->_parent_handlers->__Field(HX_CSTRING("length"),true) > (int)0))))){
				HX_STACK_LINE(353)
				::phoenix::Transform _parent1 = _this->parent;		HX_STACK_VAR(_parent1,"_parent1");
				HX_STACK_LINE(353)
				{
					HX_STACK_LINE(353)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(353)
					Dynamic _g1 = _this->_parent_handlers;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(353)
					while((true)){
						HX_STACK_LINE(353)
						if ((!(((_g < _g1->__Field(HX_CSTRING("length"),true)))))){
							HX_STACK_LINE(353)
							break;
						}
						HX_STACK_LINE(353)
						Dynamic _handler = _g1->__GetItem(_g);		HX_STACK_VAR(_handler,"_handler");
						HX_STACK_LINE(353)
						++(_g);
						HX_STACK_LINE(353)
						if (((_handler != null()))){
							HX_STACK_LINE(353)
							_handler(_parent1).Cast< Void >();
						}
					}
				}
			}
			HX_STACK_LINE(353)
			if (((_this->parent != null()))){
				HX_STACK_LINE(353)
				::phoenix::Transform _this1 = _this->parent;		HX_STACK_VAR(_this1,"_this1");
				HX_STACK_LINE(353)
				if (((_this1->_clean_handlers == null()))){
					HX_STACK_LINE(353)
					_this1->_clean_handlers = Dynamic( Array_obj<Dynamic>::__new());
				}
				HX_STACK_LINE(353)
				_this1->_clean_handlers->__Field(HX_CSTRING("push"),true)(_this->on_parent_cleaned_dyn());
			}
			HX_STACK_LINE(353)
			_this->parent;
		}
	}
return null();
}


Void Visual_obj::set_rotation_from_transform( ::phoenix::Quaternion _rotation){
{
		HX_STACK_FRAME("luxe.Visual","set_rotation_from_transform",0x9fdb9485,"luxe.Visual.set_rotation_from_transform","luxe/Visual.hx",358,0xe3547505)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_rotation,"_rotation")
		HX_STACK_LINE(360)
		this->super::set_rotation_from_transform(_rotation);
		HX_STACK_LINE(363)
		{
			HX_STACK_LINE(363)
			::phoenix::Vector _this = this->_rotation_euler;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(363)
			int order = (int)0;		HX_STACK_VAR(order,"order");
			HX_STACK_LINE(363)
			Float sqx = (_rotation->x * _rotation->x);		HX_STACK_VAR(sqx,"sqx");
			HX_STACK_LINE(363)
			Float sqy = (_rotation->y * _rotation->y);		HX_STACK_VAR(sqy,"sqy");
			HX_STACK_LINE(363)
			Float sqz = (_rotation->z * _rotation->z);		HX_STACK_VAR(sqz,"sqz");
			HX_STACK_LINE(363)
			Float sqw = (_rotation->w * _rotation->w);		HX_STACK_VAR(sqw,"sqw");
			HX_STACK_LINE(363)
			Float _x = _this->x;		HX_STACK_VAR(_x,"_x");
			HX_STACK_LINE(363)
			Float _y = _this->y;		HX_STACK_VAR(_y,"_y");
			HX_STACK_LINE(363)
			Float _z = _this->z;		HX_STACK_VAR(_z,"_z");
			HX_STACK_LINE(363)
			if (((order == (int)0))){
				HX_STACK_LINE(363)
				Float _g = ::Math_obj::atan2(((int)2 * (((_rotation->x * _rotation->w) - (_rotation->y * _rotation->z)))),(((sqw - sqx) - sqy) + sqz));		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(363)
				_x = _g;
				struct _Function_3_1{
					inline static Float Block( ::phoenix::Quaternion &_rotation){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/Visual.hx",363,0xe3547505)
						{
							HX_STACK_LINE(363)
							Float value = ((int)2 * (((_rotation->x * _rotation->z) + (_rotation->y * _rotation->w))));		HX_STACK_VAR(value,"value");
							HX_STACK_LINE(363)
							return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
						}
						return null();
					}
				};
				HX_STACK_LINE(363)
				Float _g1 = ::Math_obj::asin(_Function_3_1::Block(_rotation));		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(363)
				_y = _g1;
				HX_STACK_LINE(363)
				Float _g2 = ::Math_obj::atan2(((int)2 * (((_rotation->z * _rotation->w) - (_rotation->x * _rotation->y)))),(((sqw + sqx) - sqy) - sqz));		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(363)
				_z = _g2;
			}
			else{
				HX_STACK_LINE(363)
				if (((order == (int)1))){
					struct _Function_4_1{
						inline static Float Block( ::phoenix::Quaternion &_rotation){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/Visual.hx",363,0xe3547505)
							{
								HX_STACK_LINE(363)
								Float value = ((int)2 * (((_rotation->x * _rotation->w) - (_rotation->y * _rotation->z))));		HX_STACK_VAR(value,"value");
								HX_STACK_LINE(363)
								return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
							}
							return null();
						}
					};
					HX_STACK_LINE(363)
					Float _g3 = ::Math_obj::asin(_Function_4_1::Block(_rotation));		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(363)
					_x = _g3;
					HX_STACK_LINE(363)
					Float _g4 = ::Math_obj::atan2(((int)2 * (((_rotation->x * _rotation->z) + (_rotation->y * _rotation->w)))),(((sqw - sqx) - sqy) + sqz));		HX_STACK_VAR(_g4,"_g4");
					HX_STACK_LINE(363)
					_y = _g4;
					HX_STACK_LINE(363)
					Float _g5 = ::Math_obj::atan2(((int)2 * (((_rotation->x * _rotation->y) + (_rotation->z * _rotation->w)))),(((sqw - sqx) + sqy) - sqz));		HX_STACK_VAR(_g5,"_g5");
					HX_STACK_LINE(363)
					_z = _g5;
				}
				else{
					HX_STACK_LINE(363)
					if (((order == (int)2))){
						struct _Function_5_1{
							inline static Float Block( ::phoenix::Quaternion &_rotation){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/Visual.hx",363,0xe3547505)
								{
									HX_STACK_LINE(363)
									Float value = ((int)2 * (((_rotation->x * _rotation->w) + (_rotation->y * _rotation->z))));		HX_STACK_VAR(value,"value");
									HX_STACK_LINE(363)
									return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
								}
								return null();
							}
						};
						HX_STACK_LINE(363)
						Float _g6 = ::Math_obj::asin(_Function_5_1::Block(_rotation));		HX_STACK_VAR(_g6,"_g6");
						HX_STACK_LINE(363)
						_x = _g6;
						HX_STACK_LINE(363)
						Float _g7 = ::Math_obj::atan2(((int)2 * (((_rotation->y * _rotation->w) - (_rotation->z * _rotation->x)))),(((sqw - sqx) - sqy) + sqz));		HX_STACK_VAR(_g7,"_g7");
						HX_STACK_LINE(363)
						_y = _g7;
						HX_STACK_LINE(363)
						Float _g8 = ::Math_obj::atan2(((int)2 * (((_rotation->z * _rotation->w) - (_rotation->x * _rotation->y)))),(((sqw - sqx) + sqy) - sqz));		HX_STACK_VAR(_g8,"_g8");
						HX_STACK_LINE(363)
						_z = _g8;
					}
					else{
						HX_STACK_LINE(363)
						if (((order == (int)3))){
							HX_STACK_LINE(363)
							Float _g9 = ::Math_obj::atan2(((int)2 * (((_rotation->x * _rotation->w) + (_rotation->z * _rotation->y)))),(((sqw - sqx) - sqy) + sqz));		HX_STACK_VAR(_g9,"_g9");
							HX_STACK_LINE(363)
							_x = _g9;
							struct _Function_6_1{
								inline static Float Block( ::phoenix::Quaternion &_rotation){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/Visual.hx",363,0xe3547505)
									{
										HX_STACK_LINE(363)
										Float value = ((int)2 * (((_rotation->y * _rotation->w) - (_rotation->x * _rotation->z))));		HX_STACK_VAR(value,"value");
										HX_STACK_LINE(363)
										return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
									}
									return null();
								}
							};
							HX_STACK_LINE(363)
							Float _g10 = ::Math_obj::asin(_Function_6_1::Block(_rotation));		HX_STACK_VAR(_g10,"_g10");
							HX_STACK_LINE(363)
							_y = _g10;
							HX_STACK_LINE(363)
							Float _g11 = ::Math_obj::atan2(((int)2 * (((_rotation->x * _rotation->y) + (_rotation->z * _rotation->w)))),(((sqw + sqx) - sqy) - sqz));		HX_STACK_VAR(_g11,"_g11");
							HX_STACK_LINE(363)
							_z = _g11;
						}
						else{
							HX_STACK_LINE(363)
							if (((order == (int)4))){
								HX_STACK_LINE(363)
								Float _g12 = ::Math_obj::atan2(((int)2 * (((_rotation->x * _rotation->w) - (_rotation->z * _rotation->y)))),(((sqw - sqx) + sqy) - sqz));		HX_STACK_VAR(_g12,"_g12");
								HX_STACK_LINE(363)
								_x = _g12;
								HX_STACK_LINE(363)
								Float _g13 = ::Math_obj::atan2(((int)2 * (((_rotation->y * _rotation->w) - (_rotation->x * _rotation->z)))),(((sqw + sqx) - sqy) - sqz));		HX_STACK_VAR(_g13,"_g13");
								HX_STACK_LINE(363)
								_y = _g13;
								struct _Function_7_1{
									inline static Float Block( ::phoenix::Quaternion &_rotation){
										HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/Visual.hx",363,0xe3547505)
										{
											HX_STACK_LINE(363)
											Float value = ((int)2 * (((_rotation->x * _rotation->y) + (_rotation->z * _rotation->w))));		HX_STACK_VAR(value,"value");
											HX_STACK_LINE(363)
											return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
										}
										return null();
									}
								};
								HX_STACK_LINE(363)
								Float _g14 = ::Math_obj::asin(_Function_7_1::Block(_rotation));		HX_STACK_VAR(_g14,"_g14");
								HX_STACK_LINE(363)
								_z = _g14;
							}
							else{
								HX_STACK_LINE(363)
								if (((order == (int)5))){
									HX_STACK_LINE(363)
									Float _g15 = ::Math_obj::atan2(((int)2 * (((_rotation->x * _rotation->w) + (_rotation->y * _rotation->z)))),(((sqw - sqx) + sqy) - sqz));		HX_STACK_VAR(_g15,"_g15");
									HX_STACK_LINE(363)
									_x = _g15;
									HX_STACK_LINE(363)
									Float _g16 = ::Math_obj::atan2(((int)2 * (((_rotation->x * _rotation->z) + (_rotation->y * _rotation->w)))),(((sqw + sqx) - sqy) - sqz));		HX_STACK_VAR(_g16,"_g16");
									HX_STACK_LINE(363)
									_y = _g16;
									struct _Function_8_1{
										inline static Float Block( ::phoenix::Quaternion &_rotation){
											HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/Visual.hx",363,0xe3547505)
											{
												HX_STACK_LINE(363)
												Float value = ((int)2 * (((_rotation->z * _rotation->w) - (_rotation->x * _rotation->y))));		HX_STACK_VAR(value,"value");
												HX_STACK_LINE(363)
												return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
											}
											return null();
										}
									};
									HX_STACK_LINE(363)
									Float _g17 = ::Math_obj::asin(_Function_8_1::Block(_rotation));		HX_STACK_VAR(_g17,"_g17");
									HX_STACK_LINE(363)
									_z = _g17;
								}
							}
						}
					}
				}
			}
			HX_STACK_LINE(363)
			{
				HX_STACK_LINE(363)
				Float _x1 = _this->x;		HX_STACK_VAR(_x1,"_x1");
				HX_STACK_LINE(363)
				Float _y1 = _this->y;		HX_STACK_VAR(_y1,"_y1");
				HX_STACK_LINE(363)
				Float _z1 = _this->z;		HX_STACK_VAR(_z1,"_z1");
				HX_STACK_LINE(363)
				bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
				HX_STACK_LINE(363)
				_this->ignore_listeners = true;
				HX_STACK_LINE(363)
				{
					HX_STACK_LINE(363)
					_this->x = _x1;
					HX_STACK_LINE(363)
					if ((_this->_construct)){
						HX_STACK_LINE(363)
						_this->x;
					}
					else{
						HX_STACK_LINE(363)
						if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
							HX_STACK_LINE(363)
							_this->listen_x(_x1);
						}
						HX_STACK_LINE(363)
						_this->x;
					}
				}
				HX_STACK_LINE(363)
				{
					HX_STACK_LINE(363)
					_this->y = _y1;
					HX_STACK_LINE(363)
					if ((_this->_construct)){
						HX_STACK_LINE(363)
						_this->y;
					}
					else{
						HX_STACK_LINE(363)
						if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
							HX_STACK_LINE(363)
							_this->listen_y(_y1);
						}
						HX_STACK_LINE(363)
						_this->y;
					}
				}
				HX_STACK_LINE(363)
				{
					HX_STACK_LINE(363)
					_this->z = _z1;
					HX_STACK_LINE(363)
					if ((_this->_construct)){
						HX_STACK_LINE(363)
						_this->z;
					}
					else{
						HX_STACK_LINE(363)
						if (((bool((_this->listen_z != null())) && bool(!(_this->ignore_listeners))))){
							HX_STACK_LINE(363)
							_this->listen_z(_z1);
						}
						HX_STACK_LINE(363)
						_this->z;
					}
				}
				HX_STACK_LINE(363)
				_this->ignore_listeners = prev;
				HX_STACK_LINE(363)
				if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
					HX_STACK_LINE(363)
					_this->listen_x(_this->x);
				}
				HX_STACK_LINE(363)
				if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
					HX_STACK_LINE(363)
					_this->listen_y(_this->y);
				}
				HX_STACK_LINE(363)
				if (((bool((_this->listen_z != null())) && bool(!(_this->ignore_listeners))))){
					HX_STACK_LINE(363)
					_this->listen_z(_this->z);
				}
				HX_STACK_LINE(363)
				_this;
			}
			HX_STACK_LINE(363)
			_this;
		}
		HX_STACK_LINE(364)
		this->_rotation_quat->copy(_rotation);
	}
return null();
}


::phoenix::Vector Visual_obj::set_size( ::phoenix::Vector _v){
	HX_STACK_FRAME("luxe.Visual","set_size",0x32330c54,"luxe.Visual.set_size","luxe/Visual.hx",370,0xe3547505)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_v,"_v")
	HX_STACK_LINE(372)
	this->size = _v;
	HX_STACK_LINE(374)
	if (((this->size != null()))){
		HX_STACK_LINE(375)
		::phoenix::Vector_obj::Listen(this->size,this->_size_change_dyn());
	}
	HX_STACK_LINE(377)
	return this->size;
}


HX_DEFINE_DYNAMIC_FUNC1(Visual_obj,set_size,return )

Float Visual_obj::get_rotation_z( ){
	HX_STACK_FRAME("luxe.Visual","get_rotation_z",0x34f3cf58,"luxe.Visual.get_rotation_z","luxe/Visual.hx",385,0xe3547505)
	HX_STACK_THIS(this)
	HX_STACK_LINE(385)
	Float radians = this->get_radians();		HX_STACK_VAR(radians,"radians");
	HX_STACK_LINE(385)
	return (radians * 57.29577951308238);
}


HX_DEFINE_DYNAMIC_FUNC0(Visual_obj,get_rotation_z,return )

Float Visual_obj::set_rotation_z( Float _degrees){
	HX_STACK_FRAME("luxe.Visual","set_rotation_z",0x5513b7cc,"luxe.Visual.set_rotation_z","luxe/Visual.hx",389,0xe3547505)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_degrees,"_degrees")
	HX_STACK_LINE(391)
	this->set_radians((_degrees * 0.017453292519943278));
	HX_STACK_LINE(393)
	return _degrees;
}


HX_DEFINE_DYNAMIC_FUNC1(Visual_obj,set_rotation_z,return )

Float Visual_obj::set_radians( Float _r){
	HX_STACK_FRAME("luxe.Visual","set_radians",0x117018bf,"luxe.Visual.set_radians","luxe/Visual.hx",397,0xe3547505)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_r,"_r")
	HX_STACK_LINE(399)
	{
		HX_STACK_LINE(399)
		::phoenix::Vector _this = this->_rotation_euler;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(399)
		_this->z = _r;
		HX_STACK_LINE(399)
		if ((_this->_construct)){
			HX_STACK_LINE(399)
			_this->z;
		}
		else{
			HX_STACK_LINE(399)
			if (((bool((_this->listen_z != null())) && bool(!(_this->ignore_listeners))))){
				HX_STACK_LINE(399)
				_this->listen_z(_r);
			}
			HX_STACK_LINE(399)
			_this->z;
		}
	}
	HX_STACK_LINE(400)
	this->_rotation_quat->setFromEuler(this->_rotation_euler,null());
	HX_STACK_LINE(402)
	::phoenix::Quaternion _g = this->_rotation_quat->clone();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(402)
	this->set_rotation(_g);
	HX_STACK_LINE(404)
	return this->radians = _r;
}


HX_DEFINE_DYNAMIC_FUNC1(Visual_obj,set_radians,return )

Float Visual_obj::get_radians( ){
	HX_STACK_FRAME("luxe.Visual","get_radians",0x070311b3,"luxe.Visual.get_radians","luxe/Visual.hx",409,0xe3547505)
	HX_STACK_THIS(this)
	HX_STACK_LINE(409)
	return this->radians;
}


HX_DEFINE_DYNAMIC_FUNC0(Visual_obj,get_radians,return )

bool Visual_obj::set_locked( bool _l){
	HX_STACK_FRAME("luxe.Visual","set_locked",0x0706bb5d,"luxe.Visual.set_locked","luxe/Visual.hx",414,0xe3547505)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_l,"_l")
	HX_STACK_LINE(416)
	if (((this->geometry != null()))){
		HX_STACK_LINE(417)
		this->geometry->set_locked(_l);
	}
	HX_STACK_LINE(420)
	return this->locked = _l;
}


HX_DEFINE_DYNAMIC_FUNC1(Visual_obj,set_locked,return )

::phoenix::Rectangle Visual_obj::set_clip_rect( ::phoenix::Rectangle _val){
	HX_STACK_FRAME("luxe.Visual","set_clip_rect",0xf17507c0,"luxe.Visual.set_clip_rect","luxe/Visual.hx",427,0xe3547505)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_val,"_val")
	HX_STACK_LINE(429)
	if (((this->geometry != null()))){
		HX_STACK_LINE(430)
		this->geometry->set_clip_rect(_val);
	}
	HX_STACK_LINE(433)
	return this->clip_rect = _val;
}


HX_DEFINE_DYNAMIC_FUNC1(Visual_obj,set_clip_rect,return )

Void Visual_obj::_size_change( Float _v){
{
		HX_STACK_FRAME("luxe.Visual","_size_change",0xe1a11405,"luxe.Visual._size_change","luxe/Visual.hx",439,0xe3547505)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_v,"_v")
		HX_STACK_LINE(439)
		this->set_size(this->size);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Visual_obj,_size_change,(void))

Void Visual_obj::init( ){
{
		HX_STACK_FRAME("luxe.Visual","init",0x78020ea6,"luxe.Visual.init","luxe/macros/EntityRules.hx",35,0xed942299)
		HX_STACK_THIS(this)
	}
return null();
}



Visual_obj::Visual_obj()
{
}

void Visual_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Visual);
	HX_MARK_MEMBER_NAME(size,"size");
	HX_MARK_MEMBER_NAME(geometry,"geometry");
	HX_MARK_MEMBER_NAME(locked,"locked");
	HX_MARK_MEMBER_NAME(texture,"texture");
	HX_MARK_MEMBER_NAME(shader,"shader");
	HX_MARK_MEMBER_NAME(color,"color");
	HX_MARK_MEMBER_NAME(visible,"visible");
	HX_MARK_MEMBER_NAME(depth,"depth");
	HX_MARK_MEMBER_NAME(group,"group");
	HX_MARK_MEMBER_NAME(clip_rect,"clip_rect");
	HX_MARK_MEMBER_NAME(radians,"radians");
	HX_MARK_MEMBER_NAME(_rotation_euler,"_rotation_euler");
	HX_MARK_MEMBER_NAME(_rotation_quat,"_rotation_quat");
	HX_MARK_MEMBER_NAME(_has_custom_origin,"_has_custom_origin");
	HX_MARK_MEMBER_NAME(_creating_geometry,"_creating_geometry");
	HX_MARK_MEMBER_NAME(ignore_texture_on_geometry_change,"ignore_texture_on_geometry_change");
	::luxe::Entity_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Visual_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(size,"size");
	HX_VISIT_MEMBER_NAME(geometry,"geometry");
	HX_VISIT_MEMBER_NAME(locked,"locked");
	HX_VISIT_MEMBER_NAME(texture,"texture");
	HX_VISIT_MEMBER_NAME(shader,"shader");
	HX_VISIT_MEMBER_NAME(color,"color");
	HX_VISIT_MEMBER_NAME(visible,"visible");
	HX_VISIT_MEMBER_NAME(depth,"depth");
	HX_VISIT_MEMBER_NAME(group,"group");
	HX_VISIT_MEMBER_NAME(clip_rect,"clip_rect");
	HX_VISIT_MEMBER_NAME(radians,"radians");
	HX_VISIT_MEMBER_NAME(_rotation_euler,"_rotation_euler");
	HX_VISIT_MEMBER_NAME(_rotation_quat,"_rotation_quat");
	HX_VISIT_MEMBER_NAME(_has_custom_origin,"_has_custom_origin");
	HX_VISIT_MEMBER_NAME(_creating_geometry,"_creating_geometry");
	HX_VISIT_MEMBER_NAME(ignore_texture_on_geometry_change,"ignore_texture_on_geometry_change");
	::luxe::Entity_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Visual_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"size") ) { return size; }
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"color") ) { return color; }
		if (HX_FIELD_EQ(inName,"depth") ) { return depth; }
		if (HX_FIELD_EQ(inName,"group") ) { return group; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"locked") ) { return locked; }
		if (HX_FIELD_EQ(inName,"shader") ) { return shader; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"texture") ) { return texture; }
		if (HX_FIELD_EQ(inName,"visible") ) { return visible; }
		if (HX_FIELD_EQ(inName,"radians") ) { return inCallProp ? get_radians() : radians; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"geometry") ) { return geometry; }
		if (HX_FIELD_EQ(inName,"set_size") ) { return set_size_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"clip_rect") ) { return clip_rect; }
		if (HX_FIELD_EQ(inName,"ondestroy") ) { return ondestroy_dyn(); }
		if (HX_FIELD_EQ(inName,"set_depth") ) { return set_depth_dyn(); }
		if (HX_FIELD_EQ(inName,"set_group") ) { return set_group_dyn(); }
		if (HX_FIELD_EQ(inName,"set_color") ) { return set_color_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"rotation_z") ) { return get_rotation_z(); }
		if (HX_FIELD_EQ(inName,"set_shader") ) { return set_shader_dyn(); }
		if (HX_FIELD_EQ(inName,"set_locked") ) { return set_locked_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"set_visible") ) { return set_visible_dyn(); }
		if (HX_FIELD_EQ(inName,"set_texture") ) { return set_texture_dyn(); }
		if (HX_FIELD_EQ(inName,"set_radians") ) { return set_radians_dyn(); }
		if (HX_FIELD_EQ(inName,"get_radians") ) { return get_radians_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"set_geometry") ) { return set_geometry_dyn(); }
		if (HX_FIELD_EQ(inName,"_size_change") ) { return _size_change_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"set_clip_rect") ) { return set_clip_rect_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_rotation_quat") ) { return _rotation_quat; }
		if (HX_FIELD_EQ(inName,"get_rotation_z") ) { return get_rotation_z_dyn(); }
		if (HX_FIELD_EQ(inName,"set_rotation_z") ) { return set_rotation_z_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_rotation_euler") ) { return _rotation_euler; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_create_geometry") ) { return _create_geometry_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_has_custom_origin") ) { return _has_custom_origin; }
		if (HX_FIELD_EQ(inName,"_creating_geometry") ) { return _creating_geometry; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"on_geometry_created") ) { return on_geometry_created_dyn(); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"set_parent_from_transform") ) { return set_parent_from_transform_dyn(); }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"set_rotation_from_transform") ) { return set_rotation_from_transform_dyn(); }
		break;
	case 33:
		if (HX_FIELD_EQ(inName,"ignore_texture_on_geometry_change") ) { return ignore_texture_on_geometry_change; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Visual_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"size") ) { if (inCallProp) return set_size(inValue);size=inValue.Cast< ::phoenix::Vector >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"color") ) { if (inCallProp) return set_color(inValue);color=inValue.Cast< ::phoenix::Color >(); return inValue; }
		if (HX_FIELD_EQ(inName,"depth") ) { if (inCallProp) return set_depth(inValue);depth=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"group") ) { if (inCallProp) return set_group(inValue);group=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"locked") ) { if (inCallProp) return set_locked(inValue);locked=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"shader") ) { if (inCallProp) return set_shader(inValue);shader=inValue.Cast< ::phoenix::Shader >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"texture") ) { if (inCallProp) return set_texture(inValue);texture=inValue.Cast< ::phoenix::Texture >(); return inValue; }
		if (HX_FIELD_EQ(inName,"visible") ) { if (inCallProp) return set_visible(inValue);visible=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"radians") ) { if (inCallProp) return set_radians(inValue);radians=inValue.Cast< Float >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"geometry") ) { if (inCallProp) return set_geometry(inValue);geometry=inValue.Cast< ::phoenix::geometry::Geometry >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"clip_rect") ) { if (inCallProp) return set_clip_rect(inValue);clip_rect=inValue.Cast< ::phoenix::Rectangle >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"rotation_z") ) { return set_rotation_z(inValue); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_rotation_quat") ) { _rotation_quat=inValue.Cast< ::phoenix::Quaternion >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_rotation_euler") ) { _rotation_euler=inValue.Cast< ::phoenix::Vector >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_has_custom_origin") ) { _has_custom_origin=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_creating_geometry") ) { _creating_geometry=inValue.Cast< bool >(); return inValue; }
		break;
	case 33:
		if (HX_FIELD_EQ(inName,"ignore_texture_on_geometry_change") ) { ignore_texture_on_geometry_change=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Visual_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("size"));
	outFields->push(HX_CSTRING("geometry"));
	outFields->push(HX_CSTRING("locked"));
	outFields->push(HX_CSTRING("texture"));
	outFields->push(HX_CSTRING("shader"));
	outFields->push(HX_CSTRING("color"));
	outFields->push(HX_CSTRING("visible"));
	outFields->push(HX_CSTRING("depth"));
	outFields->push(HX_CSTRING("group"));
	outFields->push(HX_CSTRING("clip_rect"));
	outFields->push(HX_CSTRING("radians"));
	outFields->push(HX_CSTRING("rotation_z"));
	outFields->push(HX_CSTRING("_rotation_euler"));
	outFields->push(HX_CSTRING("_rotation_quat"));
	outFields->push(HX_CSTRING("_has_custom_origin"));
	outFields->push(HX_CSTRING("_creating_geometry"));
	outFields->push(HX_CSTRING("ignore_texture_on_geometry_change"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::phoenix::Vector*/ ,(int)offsetof(Visual_obj,size),HX_CSTRING("size")},
	{hx::fsObject /*::phoenix::geometry::Geometry*/ ,(int)offsetof(Visual_obj,geometry),HX_CSTRING("geometry")},
	{hx::fsBool,(int)offsetof(Visual_obj,locked),HX_CSTRING("locked")},
	{hx::fsObject /*::phoenix::Texture*/ ,(int)offsetof(Visual_obj,texture),HX_CSTRING("texture")},
	{hx::fsObject /*::phoenix::Shader*/ ,(int)offsetof(Visual_obj,shader),HX_CSTRING("shader")},
	{hx::fsObject /*::phoenix::Color*/ ,(int)offsetof(Visual_obj,color),HX_CSTRING("color")},
	{hx::fsBool,(int)offsetof(Visual_obj,visible),HX_CSTRING("visible")},
	{hx::fsFloat,(int)offsetof(Visual_obj,depth),HX_CSTRING("depth")},
	{hx::fsInt,(int)offsetof(Visual_obj,group),HX_CSTRING("group")},
	{hx::fsObject /*::phoenix::Rectangle*/ ,(int)offsetof(Visual_obj,clip_rect),HX_CSTRING("clip_rect")},
	{hx::fsFloat,(int)offsetof(Visual_obj,radians),HX_CSTRING("radians")},
	{hx::fsObject /*::phoenix::Vector*/ ,(int)offsetof(Visual_obj,_rotation_euler),HX_CSTRING("_rotation_euler")},
	{hx::fsObject /*::phoenix::Quaternion*/ ,(int)offsetof(Visual_obj,_rotation_quat),HX_CSTRING("_rotation_quat")},
	{hx::fsBool,(int)offsetof(Visual_obj,_has_custom_origin),HX_CSTRING("_has_custom_origin")},
	{hx::fsBool,(int)offsetof(Visual_obj,_creating_geometry),HX_CSTRING("_creating_geometry")},
	{hx::fsBool,(int)offsetof(Visual_obj,ignore_texture_on_geometry_change),HX_CSTRING("ignore_texture_on_geometry_change")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("size"),
	HX_CSTRING("geometry"),
	HX_CSTRING("locked"),
	HX_CSTRING("texture"),
	HX_CSTRING("shader"),
	HX_CSTRING("color"),
	HX_CSTRING("visible"),
	HX_CSTRING("depth"),
	HX_CSTRING("group"),
	HX_CSTRING("clip_rect"),
	HX_CSTRING("radians"),
	HX_CSTRING("_rotation_euler"),
	HX_CSTRING("_rotation_quat"),
	HX_CSTRING("_has_custom_origin"),
	HX_CSTRING("_creating_geometry"),
	HX_CSTRING("_create_geometry"),
	HX_CSTRING("ondestroy"),
	HX_CSTRING("on_geometry_created"),
	HX_CSTRING("set_visible"),
	HX_CSTRING("set_depth"),
	HX_CSTRING("set_group"),
	HX_CSTRING("set_color"),
	HX_CSTRING("set_texture"),
	HX_CSTRING("set_shader"),
	HX_CSTRING("ignore_texture_on_geometry_change"),
	HX_CSTRING("set_geometry"),
	HX_CSTRING("set_parent_from_transform"),
	HX_CSTRING("set_rotation_from_transform"),
	HX_CSTRING("set_size"),
	HX_CSTRING("get_rotation_z"),
	HX_CSTRING("set_rotation_z"),
	HX_CSTRING("set_radians"),
	HX_CSTRING("get_radians"),
	HX_CSTRING("set_locked"),
	HX_CSTRING("set_clip_rect"),
	HX_CSTRING("_size_change"),
	HX_CSTRING("init"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Visual_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Visual_obj::__mClass,"__mClass");
};

#endif

Class Visual_obj::__mClass;

void Visual_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("luxe.Visual"), hx::TCanCast< Visual_obj> ,sStaticFields,sMemberFields,
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

void Visual_obj::__boot()
{
}

} // end namespace luxe
