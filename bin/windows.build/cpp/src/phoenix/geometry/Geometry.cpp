#include <hxcpp.h>

#ifndef INCLUDED_Luxe
#include <Luxe.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_luxe_ID
#include <luxe/ID.h>
#endif
#ifndef INCLUDED_luxe_resource_Resource
#include <luxe/resource/Resource.h>
#endif
#ifndef INCLUDED_luxe_utils_Utils
#include <luxe/utils/Utils.h>
#endif
#ifndef INCLUDED_phoenix_Batcher
#include <phoenix/Batcher.h>
#endif
#ifndef INCLUDED_phoenix_Color
#include <phoenix/Color.h>
#endif
#ifndef INCLUDED_phoenix_Matrix
#include <phoenix/Matrix.h>
#endif
#ifndef INCLUDED_phoenix_MatrixTransform
#include <phoenix/MatrixTransform.h>
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
#ifndef INCLUDED_phoenix_geometry_GeometryKey
#include <phoenix/geometry/GeometryKey.h>
#endif
#ifndef INCLUDED_phoenix_geometry_GeometryState
#include <phoenix/geometry/GeometryState.h>
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
#ifndef INCLUDED_snow_platform_native_render_opengl_GLBuffer
#include <snow/platform/native/render/opengl/GLBuffer.h>
#endif
#ifndef INCLUDED_snow_platform_native_render_opengl_GLObject
#include <snow/platform/native/render/opengl/GLObject.h>
#endif
#ifndef INCLUDED_snow_platform_native_utils_ArrayBufferView
#include <snow/platform/native/utils/ArrayBufferView.h>
#endif
#ifndef INCLUDED_snow_platform_native_utils_Float32Array
#include <snow/platform/native/utils/Float32Array.h>
#endif
#ifndef INCLUDED_snow_utils_IMemoryRange
#include <snow/utils/IMemoryRange.h>
#endif
namespace phoenix{
namespace geometry{

Void Geometry_obj::__construct(Dynamic options)
{
HX_STACK_FRAME("phoenix.geometry.Geometry","new",0xf65473e1,"phoenix.geometry.Geometry.new","phoenix/geometry/Geometry.hx",37,0xdab136cf)
HX_STACK_THIS(this)
HX_STACK_ARG(options,"options")
{
	HX_STACK_LINE(88)
	this->dirty = false;
	HX_STACK_LINE(87)
	this->locked = false;
	HX_STACK_LINE(86)
	this->immediate = false;
	HX_STACK_LINE(85)
	this->visible = true;
	HX_STACK_LINE(82)
	this->dirty_clip = false;
	HX_STACK_LINE(81)
	this->dirty_depth = false;
	HX_STACK_LINE(80)
	this->dirty_group = false;
	HX_STACK_LINE(79)
	this->dirty_shader = false;
	HX_STACK_LINE(78)
	this->dirty_texture = false;
	HX_STACK_LINE(77)
	this->dirty_primitive_type = false;
	HX_STACK_LINE(75)
	this->shadow_clip = false;
	HX_STACK_LINE(74)
	this->shadow_depth = 0.0;
	HX_STACK_LINE(73)
	this->shadow_group = (int)0;
	HX_STACK_LINE(60)
	this->id = HX_CSTRING("");
	HX_STACK_LINE(59)
	this->uuid = HX_CSTRING("");
	HX_STACK_LINE(58)
	this->dropped = false;
	HX_STACK_LINE(53)
	this->added = false;
	HX_STACK_LINE(46)
	this->submitted = false;
	HX_STACK_LINE(105)
	::String _g = ::Luxe_obj::utils->uniqueid(null());		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(105)
	this->uuid = _g;
	HX_STACK_LINE(106)
	this->id = this->uuid;
	HX_STACK_LINE(108)
	Array< ::Dynamic > _g1 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(108)
	this->vertices = _g1;
	HX_STACK_LINE(109)
	::phoenix::geometry::GeometryState _g2 = ::phoenix::geometry::GeometryState_obj::__new();		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(109)
	this->state = _g2;
	HX_STACK_LINE(110)
	Array< ::Dynamic > _g3 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(110)
	this->batchers = _g3;
	HX_STACK_LINE(113)
	::phoenix::Transform _g4 = ::phoenix::Transform_obj::__new();		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(113)
	this->transform = _g4;
	HX_STACK_LINE(116)
	::phoenix::Vector _g5 = ::phoenix::Vector_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(_g5,"_g5");
	HX_STACK_LINE(116)
	this->_final_vert_position = _g5;
	HX_STACK_LINE(119)
	this->set_clip_rect(null());
	HX_STACK_LINE(120)
	this->set_clip(false);
	HX_STACK_LINE(123)
	bool _do_add = true;		HX_STACK_VAR(_do_add,"_do_add");
	HX_STACK_LINE(125)
	if (((options != null()))){
		HX_STACK_LINE(127)
		this->state->set_depth((  (((options->__Field(HX_CSTRING("depth"),true) == null()))) ? Float(this->state->depth) : Float(options->__Field(HX_CSTRING("depth"),true)) ));
		HX_STACK_LINE(128)
		this->state->set_group((  (((options->__Field(HX_CSTRING("group"),true) == null()))) ? int(this->state->group) : int(options->__Field(HX_CSTRING("group"),true)) ));
		HX_STACK_LINE(129)
		this->state->set_texture((  (((options->__Field(HX_CSTRING("texture"),true) == null()))) ? ::phoenix::Texture(this->state->texture) : ::phoenix::Texture(options->__Field(HX_CSTRING("texture"),true)) ));
		HX_STACK_LINE(130)
		this->state->set_clip_rect((  (((options->__Field(HX_CSTRING("clip_rect"),true) == null()))) ? ::phoenix::Rectangle(this->state->clip_rect) : ::phoenix::Rectangle(options->__Field(HX_CSTRING("clip_rect"),true)) ));
		HX_STACK_LINE(131)
		this->state->set_primitive_type((  (((options->__Field(HX_CSTRING("primitive_type"),true) == null()))) ? int(this->state->primitive_type) : int(options->__Field(HX_CSTRING("primitive_type"),true)) ));
		HX_STACK_LINE(132)
		this->state->set_shader((  (((options->__Field(HX_CSTRING("shader"),true) == null()))) ? ::phoenix::Shader(this->state->shader) : ::phoenix::Shader(options->__Field(HX_CSTRING("shader"),true)) ));
		HX_STACK_LINE(134)
		if (((options->__Field(HX_CSTRING("id"),true) == null()))){
			HX_STACK_LINE(134)
			this->id = this->uuid;
		}
		else{
			HX_STACK_LINE(134)
			this->id = options->__Field(HX_CSTRING("id"),true);
		}
		HX_STACK_LINE(136)
		{
			HX_STACK_LINE(136)
			::phoenix::Vector value;		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(136)
			if (((options->__Field(HX_CSTRING("pos"),true) == null()))){
				HX_STACK_LINE(136)
				value = this->transform->local->pos;
			}
			else{
				HX_STACK_LINE(136)
				value = options->__Field(HX_CSTRING("pos"),true);
			}
			HX_STACK_LINE(136)
			{
				HX_STACK_LINE(136)
				::phoenix::Spatial _this = this->transform->local;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(136)
				_this->pos = value;
				HX_STACK_LINE(136)
				if (((value != null()))){
					HX_STACK_LINE(136)
					::phoenix::Vector_obj::Listen(_this->pos,_this->_pos_change_dyn());
					HX_STACK_LINE(136)
					if (((bool((_this->pos_changed != null())) && bool(!(_this->ignore_listeners))))){
						HX_STACK_LINE(136)
						_this->pos_changed(_this->pos);
					}
				}
				HX_STACK_LINE(136)
				_this->pos;
			}
		}
		HX_STACK_LINE(137)
		{
			HX_STACK_LINE(137)
			::phoenix::Quaternion value;		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(137)
			if (((options->__Field(HX_CSTRING("rotation"),true) == null()))){
				HX_STACK_LINE(137)
				value = this->transform->local->rotation;
			}
			else{
				HX_STACK_LINE(137)
				value = options->__Field(HX_CSTRING("rotation"),true);
			}
			HX_STACK_LINE(137)
			{
				HX_STACK_LINE(137)
				::phoenix::Spatial _this = this->transform->local;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(137)
				_this->rotation = value;
				HX_STACK_LINE(137)
				if (((value != null()))){
					HX_STACK_LINE(137)
					{
						HX_STACK_LINE(137)
						::phoenix::Quaternion _q = _this->rotation;		HX_STACK_VAR(_q,"_q");
						HX_STACK_LINE(137)
						Dynamic listener = _this->_rotation_change_dyn();		HX_STACK_VAR(listener,"listener");
						HX_STACK_LINE(137)
						_q->listen_x = listener;
						HX_STACK_LINE(137)
						_q->listen_y = listener;
						HX_STACK_LINE(137)
						_q->listen_z = listener;
						HX_STACK_LINE(137)
						_q->listen_w = listener;
					}
					HX_STACK_LINE(137)
					if (((bool((_this->rotation_changed != null())) && bool(!(_this->ignore_listeners))))){
						HX_STACK_LINE(137)
						_this->rotation_changed(_this->rotation);
					}
				}
				HX_STACK_LINE(137)
				_this->rotation;
			}
		}
		HX_STACK_LINE(138)
		{
			HX_STACK_LINE(138)
			::phoenix::Vector value;		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(138)
			if (((options->__Field(HX_CSTRING("scale"),true) == null()))){
				HX_STACK_LINE(138)
				value = this->transform->local->scale;
			}
			else{
				HX_STACK_LINE(138)
				value = options->__Field(HX_CSTRING("scale"),true);
			}
			HX_STACK_LINE(138)
			{
				HX_STACK_LINE(138)
				::phoenix::Spatial _this = this->transform->local;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(138)
				_this->scale = value;
				HX_STACK_LINE(138)
				if (((value != null()))){
					HX_STACK_LINE(138)
					::phoenix::Vector_obj::Listen(_this->scale,_this->_scale_change_dyn());
					HX_STACK_LINE(138)
					if (((bool((_this->scale_changed != null())) && bool(!(_this->ignore_listeners))))){
						HX_STACK_LINE(138)
						_this->scale_changed(_this->scale);
					}
				}
				HX_STACK_LINE(138)
				_this->scale;
			}
		}
		HX_STACK_LINE(139)
		{
			HX_STACK_LINE(139)
			::phoenix::Transform _this = this->transform;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(139)
			{
				HX_STACK_LINE(139)
				_this->dirty = true;
				HX_STACK_LINE(139)
				if (((bool((bool((bool(_this->dirty) && bool(!(_this->_setup)))) && bool((_this->_dirty_handlers != null())))) && bool((_this->_dirty_handlers->__Field(HX_CSTRING("length"),true) > (int)0))))){
					HX_STACK_LINE(139)
					int _g6 = (int)0;		HX_STACK_VAR(_g6,"_g6");
					HX_STACK_LINE(139)
					Dynamic _g11 = _this->_dirty_handlers;		HX_STACK_VAR(_g11,"_g11");
					HX_STACK_LINE(139)
					while((true)){
						HX_STACK_LINE(139)
						if ((!(((_g6 < _g11->__Field(HX_CSTRING("length"),true)))))){
							HX_STACK_LINE(139)
							break;
						}
						HX_STACK_LINE(139)
						Dynamic _handler = _g11->__GetItem(_g6);		HX_STACK_VAR(_handler,"_handler");
						HX_STACK_LINE(139)
						++(_g6);
						HX_STACK_LINE(139)
						if (((_handler != null()))){
							HX_STACK_LINE(139)
							_handler(_this).Cast< Void >();
						}
					}
				}
				HX_STACK_LINE(139)
				_this->dirty;
			}
			HX_STACK_LINE(139)
			if (((options->__Field(HX_CSTRING("origin"),true) == null()))){
				HX_STACK_LINE(139)
				_this->origin = this->transform->origin;
			}
			else{
				HX_STACK_LINE(139)
				_this->origin = options->__Field(HX_CSTRING("origin"),true);
			}
			HX_STACK_LINE(139)
			if (((bool((_this->_origin_handlers != null())) && bool((_this->_origin_handlers->__Field(HX_CSTRING("length"),true) > (int)0))))){
				HX_STACK_LINE(139)
				::phoenix::Vector _origin = _this->origin;		HX_STACK_VAR(_origin,"_origin");
				HX_STACK_LINE(139)
				{
					HX_STACK_LINE(139)
					int _g6 = (int)0;		HX_STACK_VAR(_g6,"_g6");
					HX_STACK_LINE(139)
					Dynamic _g11 = _this->_origin_handlers;		HX_STACK_VAR(_g11,"_g11");
					HX_STACK_LINE(139)
					while((true)){
						HX_STACK_LINE(139)
						if ((!(((_g6 < _g11->__Field(HX_CSTRING("length"),true)))))){
							HX_STACK_LINE(139)
							break;
						}
						HX_STACK_LINE(139)
						Dynamic _handler = _g11->__GetItem(_g6);		HX_STACK_VAR(_handler,"_handler");
						HX_STACK_LINE(139)
						++(_g6);
						HX_STACK_LINE(139)
						if (((_handler != null()))){
							HX_STACK_LINE(139)
							_handler(_origin).Cast< Void >();
						}
					}
				}
			}
			HX_STACK_LINE(139)
			_this->origin;
		}
		HX_STACK_LINE(141)
		if (((options->__Field(HX_CSTRING("immediate"),true) == null()))){
			HX_STACK_LINE(141)
			this->immediate = false;
		}
		else{
			HX_STACK_LINE(141)
			this->immediate = options->__Field(HX_CSTRING("immediate"),true);
		}
		HX_STACK_LINE(142)
		this->set_visible((  (((options->__Field(HX_CSTRING("visible"),true) == null()))) ? bool(true) : bool(options->__Field(HX_CSTRING("visible"),true)) ));
		HX_STACK_LINE(144)
		::phoenix::Color _g6;		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(144)
		if (((options->__Field(HX_CSTRING("color"),true) == null()))){
			HX_STACK_LINE(144)
			_g6 = ::phoenix::Color_obj::__new(null(),null(),null(),null());
		}
		else{
			HX_STACK_LINE(144)
			_g6 = options->__Field(HX_CSTRING("color"),true);
		}
		HX_STACK_LINE(144)
		this->set_color(_g6);
		HX_STACK_LINE(145)
		if (((options->__Field(HX_CSTRING("no_batcher_add"),true) == null()))){
			HX_STACK_LINE(145)
			_do_add = true;
		}
		else{
			HX_STACK_LINE(145)
			_do_add = options->__Field(HX_CSTRING("no_batcher_add"),true);
		}
	}
	else{
		HX_STACK_LINE(150)
		::phoenix::Color _g7 = ::phoenix::Color_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(150)
		this->set_color(_g7);
	}
	HX_STACK_LINE(154)
	(::phoenix::geometry::Geometry_obj::_sequence_key)++;
	HX_STACK_LINE(156)
	::phoenix::geometry::GeometryKey _g8 = ::phoenix::geometry::GeometryKey_obj::__new();		HX_STACK_VAR(_g8,"_g8");
	HX_STACK_LINE(156)
	this->key = _g8;
	HX_STACK_LINE(158)
	this->key->uuid = this->uuid;
	HX_STACK_LINE(159)
	Float _g9 = ::Luxe_obj::get_time();		HX_STACK_VAR(_g9,"_g9");
	HX_STACK_LINE(159)
	this->key->timestamp = _g9;
	HX_STACK_LINE(160)
	this->key->sequence = ::phoenix::geometry::Geometry_obj::_sequence_key;
	HX_STACK_LINE(161)
	this->key->primitive_type = this->state->primitive_type;
	HX_STACK_LINE(162)
	this->key->texture = this->state->texture;
	HX_STACK_LINE(163)
	this->key->shader = this->state->shader;
	HX_STACK_LINE(164)
	this->key->group = this->state->group;
	HX_STACK_LINE(165)
	this->key->depth = this->state->depth;
	HX_STACK_LINE(166)
	this->key->clip = this->state->clip;
	HX_STACK_LINE(168)
	this->transform->id = this->uuid;
	HX_STACK_LINE(169)
	this->transform->name = this->id;
	HX_STACK_LINE(173)
	if (((bool((bool((options != null())) && bool((options->__Field(HX_CSTRING("batcher"),true) != null())))) && bool(_do_add)))){
		HX_STACK_LINE(174)
		options->__Field(HX_CSTRING("batcher"),true)->__Field(HX_CSTRING("add"),true)(hx::ObjectPtr<OBJ_>(this),null());
	}
}
;
	return null();
}

//Geometry_obj::~Geometry_obj() { }

Dynamic Geometry_obj::__CreateEmpty() { return  new Geometry_obj; }
hx::ObjectPtr< Geometry_obj > Geometry_obj::__new(Dynamic options)
{  hx::ObjectPtr< Geometry_obj > result = new Geometry_obj();
	result->__construct(options);
	return result;}

Dynamic Geometry_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Geometry_obj > result = new Geometry_obj();
	result->__construct(inArgs[0]);
	return result;}

::String Geometry_obj::key_string( ){
	HX_STACK_FRAME("phoenix.geometry.Geometry","key_string",0xdbf2f150,"phoenix.geometry.Geometry.key_string","phoenix/geometry/Geometry.hx",179,0xdab136cf)
	HX_STACK_THIS(this)
	HX_STACK_LINE(184)
	::String _g = ::Std_obj::string(this->key->primitive_type);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(182)
	::String _g1 = (((((((HX_CSTRING("ts: ") + this->key->timestamp) + HX_CSTRING("\n")) + HX_CSTRING("sequence: ")) + this->key->sequence) + HX_CSTRING("\n")) + HX_CSTRING("primitive_type: ")) + _g);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(182)
	::String _g2 = (_g1 + HX_CSTRING("\n"));		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(182)
	::String _g3 = (_g2 + HX_CSTRING("texture: "));		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(182)
	::String _g4;		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(182)
	_g4 = (_g3 + ((  (((this->key->texture == null()))) ? ::String(HX_CSTRING("null")) : ::String(this->key->texture->id) )));
	HX_STACK_LINE(182)
	::String _g5 = (_g4 + HX_CSTRING("\n"));		HX_STACK_VAR(_g5,"_g5");
	HX_STACK_LINE(182)
	::String _g6 = (_g5 + HX_CSTRING("shader: "));		HX_STACK_VAR(_g6,"_g6");
	HX_STACK_LINE(182)
	::String _g7;		HX_STACK_VAR(_g7,"_g7");
	HX_STACK_LINE(182)
	_g7 = (_g6 + ((  (((this->key->shader == null()))) ? ::String(HX_CSTRING("null")) : ::String(this->key->shader->id) )));
	HX_STACK_LINE(182)
	::String _g8 = (_g7 + HX_CSTRING("\n"));		HX_STACK_VAR(_g8,"_g8");
	HX_STACK_LINE(182)
	::String _g9 = (_g8 + HX_CSTRING("group: "));		HX_STACK_VAR(_g9,"_g9");
	HX_STACK_LINE(182)
	::String _g10 = (_g9 + this->key->group);		HX_STACK_VAR(_g10,"_g10");
	HX_STACK_LINE(182)
	::String _g11 = (_g10 + HX_CSTRING("\n"));		HX_STACK_VAR(_g11,"_g11");
	HX_STACK_LINE(182)
	::String _g12 = (_g11 + HX_CSTRING("depth: "));		HX_STACK_VAR(_g12,"_g12");
	HX_STACK_LINE(182)
	::String _g13 = (_g12 + this->key->depth);		HX_STACK_VAR(_g13,"_g13");
	HX_STACK_LINE(182)
	::String _g14 = (_g13 + HX_CSTRING("\n"));		HX_STACK_VAR(_g14,"_g14");
	HX_STACK_LINE(182)
	::String _g15 = (_g14 + HX_CSTRING("clip: "));		HX_STACK_VAR(_g15,"_g15");
	HX_STACK_LINE(189)
	::String _g16 = ::Std_obj::string(this->key->clip);		HX_STACK_VAR(_g16,"_g16");
	HX_STACK_LINE(182)
	return (_g15 + _g16);
}


HX_DEFINE_DYNAMIC_FUNC0(Geometry_obj,key_string,return )

Void Geometry_obj::refresh_key( ){
{
		HX_STACK_FRAME("phoenix.geometry.Geometry","refresh_key",0x4060be7c,"phoenix.geometry.Geometry.refresh_key","phoenix/geometry/Geometry.hx",193,0xdab136cf)
		HX_STACK_THIS(this)
		HX_STACK_LINE(197)
		this->key->uuid = this->uuid;
		HX_STACK_LINE(198)
		Float _g = ::Luxe_obj::get_time();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(198)
		this->key->timestamp = _g;
		HX_STACK_LINE(199)
		this->key->sequence = ::phoenix::geometry::Geometry_obj::_sequence_key;
		HX_STACK_LINE(200)
		this->key->primitive_type = this->state->primitive_type;
		HX_STACK_LINE(201)
		this->key->texture = this->state->texture;
		HX_STACK_LINE(202)
		this->key->shader = this->state->shader;
		HX_STACK_LINE(203)
		this->key->group = this->state->group;
		HX_STACK_LINE(204)
		this->key->depth = this->state->depth;
		HX_STACK_LINE(205)
		this->key->clip = this->state->clip;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Geometry_obj,refresh_key,(void))

Void Geometry_obj::str( ){
{
		HX_STACK_FRAME("phoenix.geometry.Geometry","str",0xf6584c32,"phoenix.geometry.Geometry.str","phoenix/geometry/Geometry.hx",209,0xdab136cf)
		HX_STACK_THIS(this)
		HX_STACK_LINE(210)
		if ((!(this->state->log))){
			HX_STACK_LINE(210)
			return null();
		}
		HX_STACK_LINE(211)
		::haxe::Log_obj::trace((HX_CSTRING("\t\tgeometry ; ") + this->id),hx::SourceInfo(HX_CSTRING("Geometry.hx"),211,HX_CSTRING("phoenix.geometry.Geometry"),HX_CSTRING("str")));
		HX_STACK_LINE(212)
		this->state->log = true;
		HX_STACK_LINE(213)
		this->state->str();
		HX_STACK_LINE(214)
		this->state->log = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Geometry_obj,str,(void))

Void Geometry_obj::drop( Dynamic __o_remove){
Dynamic remove = __o_remove.Default(true);
	HX_STACK_FRAME("phoenix.geometry.Geometry","drop",0x8cfea58e,"phoenix.geometry.Geometry.drop","phoenix/geometry/Geometry.hx",217,0xdab136cf)
	HX_STACK_THIS(this)
	HX_STACK_ARG(remove,"remove")
{
		HX_STACK_LINE(219)
		if (((bool(remove) && bool(this->added)))){
			HX_STACK_LINE(221)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(221)
			Array< ::Dynamic > _g1 = this->batchers;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(221)
			while((true)){
				HX_STACK_LINE(221)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(221)
					break;
				}
				HX_STACK_LINE(221)
				::phoenix::Batcher b = _g1->__get(_g).StaticCast< ::phoenix::Batcher >();		HX_STACK_VAR(b,"b");
				HX_STACK_LINE(221)
				++(_g);
				HX_STACK_LINE(222)
				b->remove(hx::ObjectPtr<OBJ_>(this),true);
			}
		}
		HX_STACK_LINE(227)
		if (((this->transform != null()))){
			HX_STACK_LINE(228)
			this->transform->destroy();
			HX_STACK_LINE(229)
			this->transform = null();
		}
		HX_STACK_LINE(232)
		this->dropped = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Geometry_obj,drop,(void))

Void Geometry_obj::add( ::phoenix::geometry::Vertex v){
{
		HX_STACK_FRAME("phoenix.geometry.Geometry","add",0xf64a95a2,"phoenix.geometry.Geometry.add","phoenix/geometry/Geometry.hx",236,0xdab136cf)
		HX_STACK_THIS(this)
		HX_STACK_ARG(v,"v")
		HX_STACK_LINE(238)
		this->vertices->push(v);
		HX_STACK_LINE(240)
		if (((this->vertices->length > ::Luxe_obj::renderer->batcher->max_verts))){
			HX_STACK_LINE(241)
			HX_STACK_DO_THROW((HX_CSTRING("$id / Currently a single geometry cannot exceed the maximum vert count of ") + ::Luxe_obj::renderer->batcher->max_verts));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Geometry_obj,add,(void))

Void Geometry_obj::remove( ::phoenix::geometry::Vertex v){
{
		HX_STACK_FRAME("phoenix.geometry.Geometry","remove",0xe1945f63,"phoenix.geometry.Geometry.remove","phoenix/geometry/Geometry.hx",248,0xdab136cf)
		HX_STACK_THIS(this)
		HX_STACK_ARG(v,"v")
		HX_STACK_LINE(248)
		this->vertices->remove(v);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Geometry_obj,remove,(void))

Void Geometry_obj::batch( int vert_index,int tcoord_index,int color_index,int normal_index,::snow::platform::native::utils::Float32Array vertlist,::snow::platform::native::utils::Float32Array tcoordlist,::snow::platform::native::utils::Float32Array colorlist,::snow::platform::native::utils::Float32Array normallist){
{
		HX_STACK_FRAME("phoenix.geometry.Geometry","batch",0x9fcc2d7b,"phoenix.geometry.Geometry.batch","phoenix/geometry/Geometry.hx",256,0xdab136cf)
		HX_STACK_THIS(this)
		HX_STACK_ARG(vert_index,"vert_index")
		HX_STACK_ARG(tcoord_index,"tcoord_index")
		HX_STACK_ARG(color_index,"color_index")
		HX_STACK_ARG(normal_index,"normal_index")
		HX_STACK_ARG(vertlist,"vertlist")
		HX_STACK_ARG(tcoordlist,"tcoordlist")
		HX_STACK_ARG(colorlist,"colorlist")
		HX_STACK_ARG(normallist,"normallist")
		HX_STACK_LINE(256)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(256)
		Array< ::Dynamic > _g1 = this->vertices;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(256)
		while((true)){
			HX_STACK_LINE(256)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(256)
				break;
			}
			HX_STACK_LINE(256)
			::phoenix::geometry::Vertex v = _g1->__get(_g).StaticCast< ::phoenix::geometry::Vertex >();		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(256)
			++(_g);
			HX_STACK_LINE(259)
			{
				HX_STACK_LINE(259)
				::phoenix::Vector _this = this->_final_vert_position;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(259)
				Float _x = v->pos->x;		HX_STACK_VAR(_x,"_x");
				HX_STACK_LINE(259)
				Float _y = v->pos->y;		HX_STACK_VAR(_y,"_y");
				HX_STACK_LINE(259)
				Float _z = v->pos->z;		HX_STACK_VAR(_z,"_z");
				HX_STACK_LINE(259)
				bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
				HX_STACK_LINE(259)
				_this->ignore_listeners = true;
				HX_STACK_LINE(259)
				{
					HX_STACK_LINE(259)
					_this->x = _x;
					HX_STACK_LINE(259)
					if ((_this->_construct)){
						HX_STACK_LINE(259)
						_this->x;
					}
					else{
						HX_STACK_LINE(259)
						if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
							HX_STACK_LINE(259)
							_this->listen_x(_x);
						}
						HX_STACK_LINE(259)
						_this->x;
					}
				}
				HX_STACK_LINE(259)
				{
					HX_STACK_LINE(259)
					_this->y = _y;
					HX_STACK_LINE(259)
					if ((_this->_construct)){
						HX_STACK_LINE(259)
						_this->y;
					}
					else{
						HX_STACK_LINE(259)
						if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
							HX_STACK_LINE(259)
							_this->listen_y(_y);
						}
						HX_STACK_LINE(259)
						_this->y;
					}
				}
				HX_STACK_LINE(259)
				{
					HX_STACK_LINE(259)
					_this->z = _z;
					HX_STACK_LINE(259)
					if ((_this->_construct)){
						HX_STACK_LINE(259)
						_this->z;
					}
					else{
						HX_STACK_LINE(259)
						if (((bool((_this->listen_z != null())) && bool(!(_this->ignore_listeners))))){
							HX_STACK_LINE(259)
							_this->listen_z(_z);
						}
						HX_STACK_LINE(259)
						_this->z;
					}
				}
				HX_STACK_LINE(259)
				_this->w = v->pos->w;
				HX_STACK_LINE(259)
				_this->ignore_listeners = prev;
				HX_STACK_LINE(259)
				if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
					HX_STACK_LINE(259)
					_this->listen_x(_this->x);
				}
				HX_STACK_LINE(259)
				if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
					HX_STACK_LINE(259)
					_this->listen_y(_this->y);
				}
				HX_STACK_LINE(259)
				if (((bool((_this->listen_z != null())) && bool(!(_this->ignore_listeners))))){
					HX_STACK_LINE(259)
					_this->listen_z(_this->z);
				}
				HX_STACK_LINE(259)
				_this;
			}
			HX_STACK_LINE(261)
			{
				HX_STACK_LINE(261)
				::phoenix::Vector _this = this->_final_vert_position;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(261)
				::phoenix::Matrix _m;		HX_STACK_VAR(_m,"_m");
				HX_STACK_LINE(261)
				{
					HX_STACK_LINE(261)
					::phoenix::Spatial _this1;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(261)
					{
						HX_STACK_LINE(261)
						::phoenix::Transform _this2 = this->transform;		HX_STACK_VAR(_this2,"_this2");
						HX_STACK_LINE(261)
						if ((!(_this2->_destroying))){
							HX_STACK_LINE(261)
							if (((_this2->parent != null()))){
								HX_STACK_LINE(261)
								if ((_this2->parent->dirty)){
									HX_STACK_LINE(261)
									::phoenix::Transform _this3 = _this2->parent;		HX_STACK_VAR(_this3,"_this3");
									HX_STACK_LINE(261)
									if ((!(_this3->dirty))){
										HX_STACK_LINE(261)
										Dynamic();
									}
									else{
										HX_STACK_LINE(261)
										_this3->_cleaning = true;
										HX_STACK_LINE(261)
										{
											HX_STACK_LINE(261)
											::phoenix::Matrix _this4 = _this3->_pos_matrix;		HX_STACK_VAR(_this4,"_this4");
											HX_STACK_LINE(261)
											{
												HX_STACK_LINE(261)
												Array< Float > e = _this4->elements;		HX_STACK_VAR(e,"e");
												HX_STACK_LINE(261)
												e[(int)0] = (int)1;
												HX_STACK_LINE(261)
												e[(int)4] = (int)0;
												HX_STACK_LINE(261)
												e[(int)8] = (int)0;
												HX_STACK_LINE(261)
												e[(int)12] = _this3->local->pos->x;
												HX_STACK_LINE(261)
												e[(int)1] = (int)0;
												HX_STACK_LINE(261)
												e[(int)5] = (int)1;
												HX_STACK_LINE(261)
												e[(int)9] = (int)0;
												HX_STACK_LINE(261)
												e[(int)13] = _this3->local->pos->y;
												HX_STACK_LINE(261)
												e[(int)2] = (int)0;
												HX_STACK_LINE(261)
												e[(int)6] = (int)0;
												HX_STACK_LINE(261)
												e[(int)10] = (int)1;
												HX_STACK_LINE(261)
												e[(int)14] = _this3->local->pos->z;
												HX_STACK_LINE(261)
												e[(int)3] = (int)0;
												HX_STACK_LINE(261)
												e[(int)7] = (int)0;
												HX_STACK_LINE(261)
												e[(int)11] = (int)0;
												HX_STACK_LINE(261)
												e[(int)15] = (int)1;
												HX_STACK_LINE(261)
												_this4;
											}
											HX_STACK_LINE(261)
											_this4;
										}
										HX_STACK_LINE(261)
										{
											HX_STACK_LINE(261)
											::phoenix::Matrix _this4 = _this3->_rotation_matrix;		HX_STACK_VAR(_this4,"_this4");
											HX_STACK_LINE(261)
											::phoenix::Quaternion q = _this3->local->rotation;		HX_STACK_VAR(q,"q");
											HX_STACK_LINE(261)
											Array< Float > te = _this4->elements;		HX_STACK_VAR(te,"te");
											HX_STACK_LINE(261)
											Float x2 = (q->x + q->x);		HX_STACK_VAR(x2,"x2");
											HX_STACK_LINE(261)
											Float y2 = (q->y + q->y);		HX_STACK_VAR(y2,"y2");
											HX_STACK_LINE(261)
											Float z2 = (q->z + q->z);		HX_STACK_VAR(z2,"z2");
											HX_STACK_LINE(261)
											Float xx = (q->x * x2);		HX_STACK_VAR(xx,"xx");
											HX_STACK_LINE(261)
											Float xy = (q->x * y2);		HX_STACK_VAR(xy,"xy");
											HX_STACK_LINE(261)
											Float xz = (q->x * z2);		HX_STACK_VAR(xz,"xz");
											HX_STACK_LINE(261)
											Float yy = (q->y * y2);		HX_STACK_VAR(yy,"yy");
											HX_STACK_LINE(261)
											Float yz = (q->y * z2);		HX_STACK_VAR(yz,"yz");
											HX_STACK_LINE(261)
											Float zz = (q->z * z2);		HX_STACK_VAR(zz,"zz");
											HX_STACK_LINE(261)
											Float wx = (q->w * x2);		HX_STACK_VAR(wx,"wx");
											HX_STACK_LINE(261)
											Float wy = (q->w * y2);		HX_STACK_VAR(wy,"wy");
											HX_STACK_LINE(261)
											Float wz = (q->w * z2);		HX_STACK_VAR(wz,"wz");
											HX_STACK_LINE(261)
											te[(int)0] = ((int)1 - ((yy + zz)));
											HX_STACK_LINE(261)
											te[(int)4] = (xy - wz);
											HX_STACK_LINE(261)
											te[(int)8] = (xz + wy);
											HX_STACK_LINE(261)
											te[(int)1] = (xy + wz);
											HX_STACK_LINE(261)
											te[(int)5] = ((int)1 - ((xx + zz)));
											HX_STACK_LINE(261)
											te[(int)9] = (yz - wx);
											HX_STACK_LINE(261)
											te[(int)2] = (xz - wy);
											HX_STACK_LINE(261)
											te[(int)6] = (yz + wx);
											HX_STACK_LINE(261)
											te[(int)10] = ((int)1 - ((xx + yy)));
											HX_STACK_LINE(261)
											te[(int)3] = (int)0;
											HX_STACK_LINE(261)
											te[(int)7] = (int)0;
											HX_STACK_LINE(261)
											te[(int)11] = (int)0;
											HX_STACK_LINE(261)
											te[(int)12] = (int)0;
											HX_STACK_LINE(261)
											te[(int)13] = (int)0;
											HX_STACK_LINE(261)
											te[(int)14] = (int)0;
											HX_STACK_LINE(261)
											te[(int)15] = (int)1;
											HX_STACK_LINE(261)
											_this4;
										}
										HX_STACK_LINE(261)
										{
											HX_STACK_LINE(261)
											::phoenix::Matrix _this4 = _this3->_origin_undo_matrix;		HX_STACK_VAR(_this4,"_this4");
											HX_STACK_LINE(261)
											{
												HX_STACK_LINE(261)
												Array< Float > e = _this4->elements;		HX_STACK_VAR(e,"e");
												HX_STACK_LINE(261)
												e[(int)0] = (int)1;
												HX_STACK_LINE(261)
												e[(int)4] = (int)0;
												HX_STACK_LINE(261)
												e[(int)8] = (int)0;
												HX_STACK_LINE(261)
												e[(int)12] = -(_this3->origin->x);
												HX_STACK_LINE(261)
												e[(int)1] = (int)0;
												HX_STACK_LINE(261)
												e[(int)5] = (int)1;
												HX_STACK_LINE(261)
												e[(int)9] = (int)0;
												HX_STACK_LINE(261)
												e[(int)13] = -(_this3->origin->y);
												HX_STACK_LINE(261)
												e[(int)2] = (int)0;
												HX_STACK_LINE(261)
												e[(int)6] = (int)0;
												HX_STACK_LINE(261)
												e[(int)10] = (int)1;
												HX_STACK_LINE(261)
												e[(int)14] = -(_this3->origin->z);
												HX_STACK_LINE(261)
												e[(int)3] = (int)0;
												HX_STACK_LINE(261)
												e[(int)7] = (int)0;
												HX_STACK_LINE(261)
												e[(int)11] = (int)0;
												HX_STACK_LINE(261)
												e[(int)15] = (int)1;
												HX_STACK_LINE(261)
												_this4;
											}
											HX_STACK_LINE(261)
											_this4;
										}
										HX_STACK_LINE(261)
										{
											HX_STACK_LINE(261)
											::phoenix::Matrix _this4 = _this3->local->matrix;		HX_STACK_VAR(_this4,"_this4");
											HX_STACK_LINE(261)
											{
												HX_STACK_LINE(261)
												Array< Float > e = _this4->elements;		HX_STACK_VAR(e,"e");
												HX_STACK_LINE(261)
												e[(int)0] = (int)1;
												HX_STACK_LINE(261)
												e[(int)4] = (int)0;
												HX_STACK_LINE(261)
												e[(int)8] = (int)0;
												HX_STACK_LINE(261)
												e[(int)12] = _this3->origin->x;
												HX_STACK_LINE(261)
												e[(int)1] = (int)0;
												HX_STACK_LINE(261)
												e[(int)5] = (int)1;
												HX_STACK_LINE(261)
												e[(int)9] = (int)0;
												HX_STACK_LINE(261)
												e[(int)13] = _this3->origin->y;
												HX_STACK_LINE(261)
												e[(int)2] = (int)0;
												HX_STACK_LINE(261)
												e[(int)6] = (int)0;
												HX_STACK_LINE(261)
												e[(int)10] = (int)1;
												HX_STACK_LINE(261)
												e[(int)14] = _this3->origin->z;
												HX_STACK_LINE(261)
												e[(int)3] = (int)0;
												HX_STACK_LINE(261)
												e[(int)7] = (int)0;
												HX_STACK_LINE(261)
												e[(int)11] = (int)0;
												HX_STACK_LINE(261)
												e[(int)15] = (int)1;
												HX_STACK_LINE(261)
												_this4;
											}
											HX_STACK_LINE(261)
											_this4;
										}
										HX_STACK_LINE(261)
										{
											HX_STACK_LINE(261)
											::phoenix::Matrix _this4 = _this3->local->matrix;		HX_STACK_VAR(_this4,"_this4");
											HX_STACK_LINE(261)
											::phoenix::Vector _v = _this3->local->scale;		HX_STACK_VAR(_v,"_v");
											HX_STACK_LINE(261)
											Array< Float > te = _this4->elements;		HX_STACK_VAR(te,"te");
											HX_STACK_LINE(261)
											Float _x = _v->x;		HX_STACK_VAR(_x,"_x");
											HX_STACK_LINE(261)
											Float _y = _v->y;		HX_STACK_VAR(_y,"_y");
											HX_STACK_LINE(261)
											Float _z = _v->z;		HX_STACK_VAR(_z,"_z");
											HX_STACK_LINE(261)
											hx::MultEq(te[(int)0],_x);
											HX_STACK_LINE(261)
											hx::MultEq(te[(int)4],_y);
											HX_STACK_LINE(261)
											hx::MultEq(te[(int)8],_z);
											HX_STACK_LINE(261)
											hx::MultEq(te[(int)1],_x);
											HX_STACK_LINE(261)
											hx::MultEq(te[(int)5],_y);
											HX_STACK_LINE(261)
											hx::MultEq(te[(int)9],_z);
											HX_STACK_LINE(261)
											hx::MultEq(te[(int)2],_x);
											HX_STACK_LINE(261)
											hx::MultEq(te[(int)6],_y);
											HX_STACK_LINE(261)
											hx::MultEq(te[(int)10],_z);
											HX_STACK_LINE(261)
											hx::MultEq(te[(int)3],_x);
											HX_STACK_LINE(261)
											hx::MultEq(te[(int)7],_y);
											HX_STACK_LINE(261)
											hx::MultEq(te[(int)11],_z);
											HX_STACK_LINE(261)
											_this4;
										}
										HX_STACK_LINE(261)
										{
											HX_STACK_LINE(261)
											::phoenix::Matrix _this4 = _this3->local->matrix;		HX_STACK_VAR(_this4,"_this4");
											HX_STACK_LINE(261)
											{
												HX_STACK_LINE(261)
												Array< Float > ae = _this4->elements;		HX_STACK_VAR(ae,"ae");
												HX_STACK_LINE(261)
												Array< Float > be = _this3->_rotation_matrix->elements;		HX_STACK_VAR(be,"be");
												HX_STACK_LINE(261)
												Array< Float > te = _this4->elements;		HX_STACK_VAR(te,"te");
												HX_STACK_LINE(261)
												Float a11 = ae->__get((int)0);		HX_STACK_VAR(a11,"a11");
												HX_STACK_LINE(261)
												Float a12 = ae->__get((int)4);		HX_STACK_VAR(a12,"a12");
												HX_STACK_LINE(261)
												Float a13 = ae->__get((int)8);		HX_STACK_VAR(a13,"a13");
												HX_STACK_LINE(261)
												Float a14 = ae->__get((int)12);		HX_STACK_VAR(a14,"a14");
												HX_STACK_LINE(261)
												Float a21 = ae->__get((int)1);		HX_STACK_VAR(a21,"a21");
												HX_STACK_LINE(261)
												Float a22 = ae->__get((int)5);		HX_STACK_VAR(a22,"a22");
												HX_STACK_LINE(261)
												Float a23 = ae->__get((int)9);		HX_STACK_VAR(a23,"a23");
												HX_STACK_LINE(261)
												Float a24 = ae->__get((int)13);		HX_STACK_VAR(a24,"a24");
												HX_STACK_LINE(261)
												Float a31 = ae->__get((int)2);		HX_STACK_VAR(a31,"a31");
												HX_STACK_LINE(261)
												Float a32 = ae->__get((int)6);		HX_STACK_VAR(a32,"a32");
												HX_STACK_LINE(261)
												Float a33 = ae->__get((int)10);		HX_STACK_VAR(a33,"a33");
												HX_STACK_LINE(261)
												Float a34 = ae->__get((int)14);		HX_STACK_VAR(a34,"a34");
												HX_STACK_LINE(261)
												Float a41 = ae->__get((int)3);		HX_STACK_VAR(a41,"a41");
												HX_STACK_LINE(261)
												Float a42 = ae->__get((int)7);		HX_STACK_VAR(a42,"a42");
												HX_STACK_LINE(261)
												Float a43 = ae->__get((int)11);		HX_STACK_VAR(a43,"a43");
												HX_STACK_LINE(261)
												Float a44 = ae->__get((int)15);		HX_STACK_VAR(a44,"a44");
												HX_STACK_LINE(261)
												Float b11 = be->__get((int)0);		HX_STACK_VAR(b11,"b11");
												HX_STACK_LINE(261)
												Float b12 = be->__get((int)4);		HX_STACK_VAR(b12,"b12");
												HX_STACK_LINE(261)
												Float b13 = be->__get((int)8);		HX_STACK_VAR(b13,"b13");
												HX_STACK_LINE(261)
												Float b14 = be->__get((int)12);		HX_STACK_VAR(b14,"b14");
												HX_STACK_LINE(261)
												Float b21 = be->__get((int)1);		HX_STACK_VAR(b21,"b21");
												HX_STACK_LINE(261)
												Float b22 = be->__get((int)5);		HX_STACK_VAR(b22,"b22");
												HX_STACK_LINE(261)
												Float b23 = be->__get((int)9);		HX_STACK_VAR(b23,"b23");
												HX_STACK_LINE(261)
												Float b24 = be->__get((int)13);		HX_STACK_VAR(b24,"b24");
												HX_STACK_LINE(261)
												Float b31 = be->__get((int)2);		HX_STACK_VAR(b31,"b31");
												HX_STACK_LINE(261)
												Float b32 = be->__get((int)6);		HX_STACK_VAR(b32,"b32");
												HX_STACK_LINE(261)
												Float b33 = be->__get((int)10);		HX_STACK_VAR(b33,"b33");
												HX_STACK_LINE(261)
												Float b34 = be->__get((int)14);		HX_STACK_VAR(b34,"b34");
												HX_STACK_LINE(261)
												Float b41 = be->__get((int)3);		HX_STACK_VAR(b41,"b41");
												HX_STACK_LINE(261)
												Float b42 = be->__get((int)7);		HX_STACK_VAR(b42,"b42");
												HX_STACK_LINE(261)
												Float b43 = be->__get((int)11);		HX_STACK_VAR(b43,"b43");
												HX_STACK_LINE(261)
												Float b44 = be->__get((int)15);		HX_STACK_VAR(b44,"b44");
												HX_STACK_LINE(261)
												te[(int)0] = ((((a11 * b11) + (a12 * b21)) + (a13 * b31)) + (a14 * b41));
												HX_STACK_LINE(261)
												te[(int)4] = ((((a11 * b12) + (a12 * b22)) + (a13 * b32)) + (a14 * b42));
												HX_STACK_LINE(261)
												te[(int)8] = ((((a11 * b13) + (a12 * b23)) + (a13 * b33)) + (a14 * b43));
												HX_STACK_LINE(261)
												te[(int)12] = ((((a11 * b14) + (a12 * b24)) + (a13 * b34)) + (a14 * b44));
												HX_STACK_LINE(261)
												te[(int)1] = ((((a21 * b11) + (a22 * b21)) + (a23 * b31)) + (a24 * b41));
												HX_STACK_LINE(261)
												te[(int)5] = ((((a21 * b12) + (a22 * b22)) + (a23 * b32)) + (a24 * b42));
												HX_STACK_LINE(261)
												te[(int)9] = ((((a21 * b13) + (a22 * b23)) + (a23 * b33)) + (a24 * b43));
												HX_STACK_LINE(261)
												te[(int)13] = ((((a21 * b14) + (a22 * b24)) + (a23 * b34)) + (a24 * b44));
												HX_STACK_LINE(261)
												te[(int)2] = ((((a31 * b11) + (a32 * b21)) + (a33 * b31)) + (a34 * b41));
												HX_STACK_LINE(261)
												te[(int)6] = ((((a31 * b12) + (a32 * b22)) + (a33 * b32)) + (a34 * b42));
												HX_STACK_LINE(261)
												te[(int)10] = ((((a31 * b13) + (a32 * b23)) + (a33 * b33)) + (a34 * b43));
												HX_STACK_LINE(261)
												te[(int)14] = ((((a31 * b14) + (a32 * b24)) + (a33 * b34)) + (a34 * b44));
												HX_STACK_LINE(261)
												te[(int)3] = ((((a41 * b11) + (a42 * b21)) + (a43 * b31)) + (a44 * b41));
												HX_STACK_LINE(261)
												te[(int)7] = ((((a41 * b12) + (a42 * b22)) + (a43 * b32)) + (a44 * b42));
												HX_STACK_LINE(261)
												te[(int)11] = ((((a41 * b13) + (a42 * b23)) + (a43 * b33)) + (a44 * b43));
												HX_STACK_LINE(261)
												te[(int)15] = ((((a41 * b14) + (a42 * b24)) + (a43 * b34)) + (a44 * b44));
												HX_STACK_LINE(261)
												_this4;
											}
										}
										HX_STACK_LINE(261)
										{
											HX_STACK_LINE(261)
											::phoenix::Matrix _this4 = _this3->local->matrix;		HX_STACK_VAR(_this4,"_this4");
											HX_STACK_LINE(261)
											::phoenix::Vector _v = _this3->local->pos;		HX_STACK_VAR(_v,"_v");
											HX_STACK_LINE(261)
											Array< Float > te = _this4->elements;		HX_STACK_VAR(te,"te");
											HX_STACK_LINE(261)
											te[(int)12] = _v->x;
											HX_STACK_LINE(261)
											te[(int)13] = _v->y;
											HX_STACK_LINE(261)
											te[(int)14] = _v->z;
											HX_STACK_LINE(261)
											_this4;
										}
										HX_STACK_LINE(261)
										{
											HX_STACK_LINE(261)
											::phoenix::Matrix _this4 = _this3->local->matrix;		HX_STACK_VAR(_this4,"_this4");
											HX_STACK_LINE(261)
											{
												HX_STACK_LINE(261)
												Array< Float > ae = _this4->elements;		HX_STACK_VAR(ae,"ae");
												HX_STACK_LINE(261)
												Array< Float > be = _this3->_origin_undo_matrix->elements;		HX_STACK_VAR(be,"be");
												HX_STACK_LINE(261)
												Array< Float > te = _this4->elements;		HX_STACK_VAR(te,"te");
												HX_STACK_LINE(261)
												Float a11 = ae->__get((int)0);		HX_STACK_VAR(a11,"a11");
												HX_STACK_LINE(261)
												Float a12 = ae->__get((int)4);		HX_STACK_VAR(a12,"a12");
												HX_STACK_LINE(261)
												Float a13 = ae->__get((int)8);		HX_STACK_VAR(a13,"a13");
												HX_STACK_LINE(261)
												Float a14 = ae->__get((int)12);		HX_STACK_VAR(a14,"a14");
												HX_STACK_LINE(261)
												Float a21 = ae->__get((int)1);		HX_STACK_VAR(a21,"a21");
												HX_STACK_LINE(261)
												Float a22 = ae->__get((int)5);		HX_STACK_VAR(a22,"a22");
												HX_STACK_LINE(261)
												Float a23 = ae->__get((int)9);		HX_STACK_VAR(a23,"a23");
												HX_STACK_LINE(261)
												Float a24 = ae->__get((int)13);		HX_STACK_VAR(a24,"a24");
												HX_STACK_LINE(261)
												Float a31 = ae->__get((int)2);		HX_STACK_VAR(a31,"a31");
												HX_STACK_LINE(261)
												Float a32 = ae->__get((int)6);		HX_STACK_VAR(a32,"a32");
												HX_STACK_LINE(261)
												Float a33 = ae->__get((int)10);		HX_STACK_VAR(a33,"a33");
												HX_STACK_LINE(261)
												Float a34 = ae->__get((int)14);		HX_STACK_VAR(a34,"a34");
												HX_STACK_LINE(261)
												Float a41 = ae->__get((int)3);		HX_STACK_VAR(a41,"a41");
												HX_STACK_LINE(261)
												Float a42 = ae->__get((int)7);		HX_STACK_VAR(a42,"a42");
												HX_STACK_LINE(261)
												Float a43 = ae->__get((int)11);		HX_STACK_VAR(a43,"a43");
												HX_STACK_LINE(261)
												Float a44 = ae->__get((int)15);		HX_STACK_VAR(a44,"a44");
												HX_STACK_LINE(261)
												Float b11 = be->__get((int)0);		HX_STACK_VAR(b11,"b11");
												HX_STACK_LINE(261)
												Float b12 = be->__get((int)4);		HX_STACK_VAR(b12,"b12");
												HX_STACK_LINE(261)
												Float b13 = be->__get((int)8);		HX_STACK_VAR(b13,"b13");
												HX_STACK_LINE(261)
												Float b14 = be->__get((int)12);		HX_STACK_VAR(b14,"b14");
												HX_STACK_LINE(261)
												Float b21 = be->__get((int)1);		HX_STACK_VAR(b21,"b21");
												HX_STACK_LINE(261)
												Float b22 = be->__get((int)5);		HX_STACK_VAR(b22,"b22");
												HX_STACK_LINE(261)
												Float b23 = be->__get((int)9);		HX_STACK_VAR(b23,"b23");
												HX_STACK_LINE(261)
												Float b24 = be->__get((int)13);		HX_STACK_VAR(b24,"b24");
												HX_STACK_LINE(261)
												Float b31 = be->__get((int)2);		HX_STACK_VAR(b31,"b31");
												HX_STACK_LINE(261)
												Float b32 = be->__get((int)6);		HX_STACK_VAR(b32,"b32");
												HX_STACK_LINE(261)
												Float b33 = be->__get((int)10);		HX_STACK_VAR(b33,"b33");
												HX_STACK_LINE(261)
												Float b34 = be->__get((int)14);		HX_STACK_VAR(b34,"b34");
												HX_STACK_LINE(261)
												Float b41 = be->__get((int)3);		HX_STACK_VAR(b41,"b41");
												HX_STACK_LINE(261)
												Float b42 = be->__get((int)7);		HX_STACK_VAR(b42,"b42");
												HX_STACK_LINE(261)
												Float b43 = be->__get((int)11);		HX_STACK_VAR(b43,"b43");
												HX_STACK_LINE(261)
												Float b44 = be->__get((int)15);		HX_STACK_VAR(b44,"b44");
												HX_STACK_LINE(261)
												te[(int)0] = ((((a11 * b11) + (a12 * b21)) + (a13 * b31)) + (a14 * b41));
												HX_STACK_LINE(261)
												te[(int)4] = ((((a11 * b12) + (a12 * b22)) + (a13 * b32)) + (a14 * b42));
												HX_STACK_LINE(261)
												te[(int)8] = ((((a11 * b13) + (a12 * b23)) + (a13 * b33)) + (a14 * b43));
												HX_STACK_LINE(261)
												te[(int)12] = ((((a11 * b14) + (a12 * b24)) + (a13 * b34)) + (a14 * b44));
												HX_STACK_LINE(261)
												te[(int)1] = ((((a21 * b11) + (a22 * b21)) + (a23 * b31)) + (a24 * b41));
												HX_STACK_LINE(261)
												te[(int)5] = ((((a21 * b12) + (a22 * b22)) + (a23 * b32)) + (a24 * b42));
												HX_STACK_LINE(261)
												te[(int)9] = ((((a21 * b13) + (a22 * b23)) + (a23 * b33)) + (a24 * b43));
												HX_STACK_LINE(261)
												te[(int)13] = ((((a21 * b14) + (a22 * b24)) + (a23 * b34)) + (a24 * b44));
												HX_STACK_LINE(261)
												te[(int)2] = ((((a31 * b11) + (a32 * b21)) + (a33 * b31)) + (a34 * b41));
												HX_STACK_LINE(261)
												te[(int)6] = ((((a31 * b12) + (a32 * b22)) + (a33 * b32)) + (a34 * b42));
												HX_STACK_LINE(261)
												te[(int)10] = ((((a31 * b13) + (a32 * b23)) + (a33 * b33)) + (a34 * b43));
												HX_STACK_LINE(261)
												te[(int)14] = ((((a31 * b14) + (a32 * b24)) + (a33 * b34)) + (a34 * b44));
												HX_STACK_LINE(261)
												te[(int)3] = ((((a41 * b11) + (a42 * b21)) + (a43 * b31)) + (a44 * b41));
												HX_STACK_LINE(261)
												te[(int)7] = ((((a41 * b12) + (a42 * b22)) + (a43 * b32)) + (a44 * b42));
												HX_STACK_LINE(261)
												te[(int)11] = ((((a41 * b13) + (a42 * b23)) + (a43 * b33)) + (a44 * b43));
												HX_STACK_LINE(261)
												te[(int)15] = ((((a41 * b14) + (a42 * b24)) + (a43 * b34)) + (a44 * b44));
												HX_STACK_LINE(261)
												_this4;
											}
										}
										HX_STACK_LINE(261)
										if (((_this3->parent != null()))){
											HX_STACK_LINE(261)
											::phoenix::Spatial _this4 = _this3->get_world();		HX_STACK_VAR(_this4,"_this4");
											HX_STACK_LINE(261)
											::phoenix::Matrix _m1;		HX_STACK_VAR(_m1,"_m1");
											HX_STACK_LINE(261)
											{
												HX_STACK_LINE(261)
												::phoenix::Matrix _this5;		HX_STACK_VAR(_this5,"_this5");
												HX_STACK_LINE(261)
												{
													HX_STACK_LINE(261)
													::phoenix::Spatial _this6 = _this3->get_world();		HX_STACK_VAR(_this6,"_this6");
													HX_STACK_LINE(261)
													_this5 = _this6->matrix;
												}
												HX_STACK_LINE(261)
												::phoenix::Matrix _a;		HX_STACK_VAR(_a,"_a");
												HX_STACK_LINE(261)
												{
													HX_STACK_LINE(261)
													::phoenix::Spatial _this6 = _this3->parent->get_world();		HX_STACK_VAR(_this6,"_this6");
													HX_STACK_LINE(261)
													_a = _this6->matrix;
												}
												HX_STACK_LINE(261)
												Array< Float > ae = _a->elements;		HX_STACK_VAR(ae,"ae");
												HX_STACK_LINE(261)
												Array< Float > be = _this3->local->matrix->elements;		HX_STACK_VAR(be,"be");
												HX_STACK_LINE(261)
												Array< Float > te = _this5->elements;		HX_STACK_VAR(te,"te");
												HX_STACK_LINE(261)
												Float a11 = ae->__get((int)0);		HX_STACK_VAR(a11,"a11");
												HX_STACK_LINE(261)
												Float a12 = ae->__get((int)4);		HX_STACK_VAR(a12,"a12");
												HX_STACK_LINE(261)
												Float a13 = ae->__get((int)8);		HX_STACK_VAR(a13,"a13");
												HX_STACK_LINE(261)
												Float a14 = ae->__get((int)12);		HX_STACK_VAR(a14,"a14");
												HX_STACK_LINE(261)
												Float a21 = ae->__get((int)1);		HX_STACK_VAR(a21,"a21");
												HX_STACK_LINE(261)
												Float a22 = ae->__get((int)5);		HX_STACK_VAR(a22,"a22");
												HX_STACK_LINE(261)
												Float a23 = ae->__get((int)9);		HX_STACK_VAR(a23,"a23");
												HX_STACK_LINE(261)
												Float a24 = ae->__get((int)13);		HX_STACK_VAR(a24,"a24");
												HX_STACK_LINE(261)
												Float a31 = ae->__get((int)2);		HX_STACK_VAR(a31,"a31");
												HX_STACK_LINE(261)
												Float a32 = ae->__get((int)6);		HX_STACK_VAR(a32,"a32");
												HX_STACK_LINE(261)
												Float a33 = ae->__get((int)10);		HX_STACK_VAR(a33,"a33");
												HX_STACK_LINE(261)
												Float a34 = ae->__get((int)14);		HX_STACK_VAR(a34,"a34");
												HX_STACK_LINE(261)
												Float a41 = ae->__get((int)3);		HX_STACK_VAR(a41,"a41");
												HX_STACK_LINE(261)
												Float a42 = ae->__get((int)7);		HX_STACK_VAR(a42,"a42");
												HX_STACK_LINE(261)
												Float a43 = ae->__get((int)11);		HX_STACK_VAR(a43,"a43");
												HX_STACK_LINE(261)
												Float a44 = ae->__get((int)15);		HX_STACK_VAR(a44,"a44");
												HX_STACK_LINE(261)
												Float b11 = be->__get((int)0);		HX_STACK_VAR(b11,"b11");
												HX_STACK_LINE(261)
												Float b12 = be->__get((int)4);		HX_STACK_VAR(b12,"b12");
												HX_STACK_LINE(261)
												Float b13 = be->__get((int)8);		HX_STACK_VAR(b13,"b13");
												HX_STACK_LINE(261)
												Float b14 = be->__get((int)12);		HX_STACK_VAR(b14,"b14");
												HX_STACK_LINE(261)
												Float b21 = be->__get((int)1);		HX_STACK_VAR(b21,"b21");
												HX_STACK_LINE(261)
												Float b22 = be->__get((int)5);		HX_STACK_VAR(b22,"b22");
												HX_STACK_LINE(261)
												Float b23 = be->__get((int)9);		HX_STACK_VAR(b23,"b23");
												HX_STACK_LINE(261)
												Float b24 = be->__get((int)13);		HX_STACK_VAR(b24,"b24");
												HX_STACK_LINE(261)
												Float b31 = be->__get((int)2);		HX_STACK_VAR(b31,"b31");
												HX_STACK_LINE(261)
												Float b32 = be->__get((int)6);		HX_STACK_VAR(b32,"b32");
												HX_STACK_LINE(261)
												Float b33 = be->__get((int)10);		HX_STACK_VAR(b33,"b33");
												HX_STACK_LINE(261)
												Float b34 = be->__get((int)14);		HX_STACK_VAR(b34,"b34");
												HX_STACK_LINE(261)
												Float b41 = be->__get((int)3);		HX_STACK_VAR(b41,"b41");
												HX_STACK_LINE(261)
												Float b42 = be->__get((int)7);		HX_STACK_VAR(b42,"b42");
												HX_STACK_LINE(261)
												Float b43 = be->__get((int)11);		HX_STACK_VAR(b43,"b43");
												HX_STACK_LINE(261)
												Float b44 = be->__get((int)15);		HX_STACK_VAR(b44,"b44");
												HX_STACK_LINE(261)
												te[(int)0] = ((((a11 * b11) + (a12 * b21)) + (a13 * b31)) + (a14 * b41));
												HX_STACK_LINE(261)
												te[(int)4] = ((((a11 * b12) + (a12 * b22)) + (a13 * b32)) + (a14 * b42));
												HX_STACK_LINE(261)
												te[(int)8] = ((((a11 * b13) + (a12 * b23)) + (a13 * b33)) + (a14 * b43));
												HX_STACK_LINE(261)
												te[(int)12] = ((((a11 * b14) + (a12 * b24)) + (a13 * b34)) + (a14 * b44));
												HX_STACK_LINE(261)
												te[(int)1] = ((((a21 * b11) + (a22 * b21)) + (a23 * b31)) + (a24 * b41));
												HX_STACK_LINE(261)
												te[(int)5] = ((((a21 * b12) + (a22 * b22)) + (a23 * b32)) + (a24 * b42));
												HX_STACK_LINE(261)
												te[(int)9] = ((((a21 * b13) + (a22 * b23)) + (a23 * b33)) + (a24 * b43));
												HX_STACK_LINE(261)
												te[(int)13] = ((((a21 * b14) + (a22 * b24)) + (a23 * b34)) + (a24 * b44));
												HX_STACK_LINE(261)
												te[(int)2] = ((((a31 * b11) + (a32 * b21)) + (a33 * b31)) + (a34 * b41));
												HX_STACK_LINE(261)
												te[(int)6] = ((((a31 * b12) + (a32 * b22)) + (a33 * b32)) + (a34 * b42));
												HX_STACK_LINE(261)
												te[(int)10] = ((((a31 * b13) + (a32 * b23)) + (a33 * b33)) + (a34 * b43));
												HX_STACK_LINE(261)
												te[(int)14] = ((((a31 * b14) + (a32 * b24)) + (a33 * b34)) + (a34 * b44));
												HX_STACK_LINE(261)
												te[(int)3] = ((((a41 * b11) + (a42 * b21)) + (a43 * b31)) + (a44 * b41));
												HX_STACK_LINE(261)
												te[(int)7] = ((((a41 * b12) + (a42 * b22)) + (a43 * b32)) + (a44 * b42));
												HX_STACK_LINE(261)
												te[(int)11] = ((((a41 * b13) + (a42 * b23)) + (a43 * b33)) + (a44 * b43));
												HX_STACK_LINE(261)
												te[(int)15] = ((((a41 * b14) + (a42 * b24)) + (a43 * b34)) + (a44 * b44));
												HX_STACK_LINE(261)
												_m1 = _this5;
											}
											HX_STACK_LINE(261)
											_this4->matrix = _m1;
											HX_STACK_LINE(261)
											if (((_m1 != null()))){
												HX_STACK_LINE(261)
												::snow::platform::native::utils::Float32Array _g2;		HX_STACK_VAR(_g2,"_g2");
												HX_STACK_LINE(261)
												{
													HX_STACK_LINE(261)
													::phoenix::Matrix _this5 = _this4->matrix;		HX_STACK_VAR(_this5,"_this5");
													HX_STACK_LINE(261)
													{
														HX_STACK_LINE(261)
														::snow::platform::native::utils::Float32Array _this6 = _this5->_float32array;		HX_STACK_VAR(_this6,"_this6");
														HX_STACK_LINE(261)
														Dynamic bufferOrArray = _this5->elements;		HX_STACK_VAR(bufferOrArray,"bufferOrArray");
														HX_STACK_LINE(261)
														int offset = (int)0;		HX_STACK_VAR(offset,"offset");
														HX_STACK_LINE(261)
														if ((::Std_obj::is(bufferOrArray,hx::ClassOf< Array<int> >()))){
															HX_STACK_LINE(261)
															Array< Float > floats = bufferOrArray;		HX_STACK_VAR(floats,"floats");
															HX_STACK_LINE(261)
															{
																HX_STACK_LINE(261)
																int _g11 = (int)0;		HX_STACK_VAR(_g11,"_g11");
																HX_STACK_LINE(261)
																int _g3 = floats->length;		HX_STACK_VAR(_g3,"_g3");
																HX_STACK_LINE(261)
																while((true)){
																	HX_STACK_LINE(261)
																	if ((!(((_g11 < _g3))))){
																		HX_STACK_LINE(261)
																		break;
																	}
																	HX_STACK_LINE(261)
																	int i = (_g11)++;		HX_STACK_VAR(i,"i");
																	HX_STACK_LINE(261)
																	::__hxcpp_memory_set_float(_this6->bytes,(((int((i + offset)) << int((int)2))) + _this6->byteOffset),floats->__get(i));
																}
															}
														}
														else{
															HX_STACK_LINE(261)
															if ((::Std_obj::is(bufferOrArray,hx::ClassOf< ::snow::platform::native::utils::Float32Array >()))){
																HX_STACK_LINE(261)
																::snow::platform::native::utils::Float32Array floats = bufferOrArray;		HX_STACK_VAR(floats,"floats");
																HX_STACK_LINE(261)
																{
																	HX_STACK_LINE(261)
																	int _g11 = (int)0;		HX_STACK_VAR(_g11,"_g11");
																	HX_STACK_LINE(261)
																	int _g3 = floats->length;		HX_STACK_VAR(_g3,"_g3");
																	HX_STACK_LINE(261)
																	while((true)){
																		HX_STACK_LINE(261)
																		if ((!(((_g11 < _g3))))){
																			HX_STACK_LINE(261)
																			break;
																		}
																		HX_STACK_LINE(261)
																		int i = (_g11)++;		HX_STACK_VAR(i,"i");
																		HX_STACK_LINE(261)
																		::__hxcpp_memory_set_float(_this6->bytes,(((int((i + offset)) << int((int)2))) + _this6->byteOffset),floats->__get(i));
																	}
																}
															}
															else{
																HX_STACK_LINE(261)
																HX_STACK_DO_THROW(HX_CSTRING("Invalid input buffer"));
															}
														}
													}
													HX_STACK_LINE(261)
													_g2 = ::snow::platform::native::utils::Float32Array_obj::__new(_this5->_float32array,null(),null());
												}
												HX_STACK_LINE(261)
												_this4->floats = _g2;
											}
											HX_STACK_LINE(261)
											_this4->matrix;
										}
										else{
											HX_STACK_LINE(261)
											::phoenix::Spatial _this4 = _this3->get_world();		HX_STACK_VAR(_this4,"_this4");
											HX_STACK_LINE(261)
											::phoenix::Matrix _m1;		HX_STACK_VAR(_m1,"_m1");
											HX_STACK_LINE(261)
											{
												HX_STACK_LINE(261)
												Array< Float > te = _this3->local->matrix->elements;		HX_STACK_VAR(te,"te");
												HX_STACK_LINE(261)
												_m1 = ::phoenix::Matrix_obj::__new(te->__get((int)0),te->__get((int)4),te->__get((int)8),te->__get((int)12),te->__get((int)1),te->__get((int)5),te->__get((int)9),te->__get((int)13),te->__get((int)2),te->__get((int)6),te->__get((int)10),te->__get((int)14),te->__get((int)3),te->__get((int)7),te->__get((int)11),te->__get((int)15));
											}
											HX_STACK_LINE(261)
											_this4->matrix = _m1;
											HX_STACK_LINE(261)
											if (((_m1 != null()))){
												HX_STACK_LINE(261)
												::snow::platform::native::utils::Float32Array _g11;		HX_STACK_VAR(_g11,"_g11");
												HX_STACK_LINE(261)
												{
													HX_STACK_LINE(261)
													::phoenix::Matrix _this5 = _this4->matrix;		HX_STACK_VAR(_this5,"_this5");
													HX_STACK_LINE(261)
													{
														HX_STACK_LINE(261)
														::snow::platform::native::utils::Float32Array _this6 = _this5->_float32array;		HX_STACK_VAR(_this6,"_this6");
														HX_STACK_LINE(261)
														Dynamic bufferOrArray = _this5->elements;		HX_STACK_VAR(bufferOrArray,"bufferOrArray");
														HX_STACK_LINE(261)
														int offset = (int)0;		HX_STACK_VAR(offset,"offset");
														HX_STACK_LINE(261)
														if ((::Std_obj::is(bufferOrArray,hx::ClassOf< Array<int> >()))){
															HX_STACK_LINE(261)
															Array< Float > floats = bufferOrArray;		HX_STACK_VAR(floats,"floats");
															HX_STACK_LINE(261)
															{
																HX_STACK_LINE(261)
																int _g12 = (int)0;		HX_STACK_VAR(_g12,"_g12");
																HX_STACK_LINE(261)
																int _g2 = floats->length;		HX_STACK_VAR(_g2,"_g2");
																HX_STACK_LINE(261)
																while((true)){
																	HX_STACK_LINE(261)
																	if ((!(((_g12 < _g2))))){
																		HX_STACK_LINE(261)
																		break;
																	}
																	HX_STACK_LINE(261)
																	int i = (_g12)++;		HX_STACK_VAR(i,"i");
																	HX_STACK_LINE(261)
																	::__hxcpp_memory_set_float(_this6->bytes,(((int((i + offset)) << int((int)2))) + _this6->byteOffset),floats->__get(i));
																}
															}
														}
														else{
															HX_STACK_LINE(261)
															if ((::Std_obj::is(bufferOrArray,hx::ClassOf< ::snow::platform::native::utils::Float32Array >()))){
																HX_STACK_LINE(261)
																::snow::platform::native::utils::Float32Array floats = bufferOrArray;		HX_STACK_VAR(floats,"floats");
																HX_STACK_LINE(261)
																{
																	HX_STACK_LINE(261)
																	int _g12 = (int)0;		HX_STACK_VAR(_g12,"_g12");
																	HX_STACK_LINE(261)
																	int _g2 = floats->length;		HX_STACK_VAR(_g2,"_g2");
																	HX_STACK_LINE(261)
																	while((true)){
																		HX_STACK_LINE(261)
																		if ((!(((_g12 < _g2))))){
																			HX_STACK_LINE(261)
																			break;
																		}
																		HX_STACK_LINE(261)
																		int i = (_g12)++;		HX_STACK_VAR(i,"i");
																		HX_STACK_LINE(261)
																		::__hxcpp_memory_set_float(_this6->bytes,(((int((i + offset)) << int((int)2))) + _this6->byteOffset),floats->__get(i));
																	}
																}
															}
															else{
																HX_STACK_LINE(261)
																HX_STACK_DO_THROW(HX_CSTRING("Invalid input buffer"));
															}
														}
													}
													HX_STACK_LINE(261)
													_g11 = ::snow::platform::native::utils::Float32Array_obj::__new(_this5->_float32array,null(),null());
												}
												HX_STACK_LINE(261)
												_this4->floats = _g11;
											}
											HX_STACK_LINE(261)
											_this4->matrix;
										}
										HX_STACK_LINE(261)
										{
											HX_STACK_LINE(261)
											::phoenix::Spatial _this4 = _this3->get_world();		HX_STACK_VAR(_this4,"_this4");
											HX_STACK_LINE(261)
											if ((_this4->auto_decompose)){
												HX_STACK_LINE(261)
												::phoenix::MatrixTransform _transform;		HX_STACK_VAR(_transform,"_transform");
												HX_STACK_LINE(261)
												{
													HX_STACK_LINE(261)
													::phoenix::Matrix _this5 = _this4->matrix;		HX_STACK_VAR(_this5,"_this5");
													HX_STACK_LINE(261)
													::phoenix::Vector _position = null();		HX_STACK_VAR(_position,"_position");
													HX_STACK_LINE(261)
													::phoenix::Quaternion _quaternion = null();		HX_STACK_VAR(_quaternion,"_quaternion");
													HX_STACK_LINE(261)
													::phoenix::Vector _scale = null();		HX_STACK_VAR(_scale,"_scale");
													HX_STACK_LINE(261)
													Array< Float > te = _this5->elements;		HX_STACK_VAR(te,"te");
													HX_STACK_LINE(261)
													::phoenix::Matrix matrix = ::phoenix::Matrix_obj::__new(null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(matrix,"matrix");
													HX_STACK_LINE(261)
													Float _ax_x = te->__get((int)0);		HX_STACK_VAR(_ax_x,"_ax_x");
													HX_STACK_LINE(261)
													Float _ax_y = te->__get((int)1);		HX_STACK_VAR(_ax_y,"_ax_y");
													HX_STACK_LINE(261)
													Float _ax_z = te->__get((int)2);		HX_STACK_VAR(_ax_z,"_ax_z");
													HX_STACK_LINE(261)
													Float _ay_x = te->__get((int)4);		HX_STACK_VAR(_ay_x,"_ay_x");
													HX_STACK_LINE(261)
													Float _ay_y = te->__get((int)5);		HX_STACK_VAR(_ay_y,"_ay_y");
													HX_STACK_LINE(261)
													Float _ay_z = te->__get((int)6);		HX_STACK_VAR(_ay_z,"_ay_z");
													HX_STACK_LINE(261)
													Float _az_x = te->__get((int)8);		HX_STACK_VAR(_az_x,"_az_x");
													HX_STACK_LINE(261)
													Float _az_y = te->__get((int)9);		HX_STACK_VAR(_az_y,"_az_y");
													HX_STACK_LINE(261)
													Float _az_z = te->__get((int)10);		HX_STACK_VAR(_az_z,"_az_z");
													HX_STACK_LINE(261)
													Float _ax_length = ::Math_obj::sqrt((((_ax_x * _ax_x) + (_ax_y * _ax_y)) + (_ax_z * _ax_z)));		HX_STACK_VAR(_ax_length,"_ax_length");
													HX_STACK_LINE(261)
													Float _ay_length = ::Math_obj::sqrt((((_ay_x * _ay_x) + (_ay_y * _ay_y)) + (_ay_z * _ay_z)));		HX_STACK_VAR(_ay_length,"_ay_length");
													HX_STACK_LINE(261)
													Float _az_length = ::Math_obj::sqrt((((_az_x * _az_x) + (_az_y * _az_y)) + (_az_z * _az_z)));		HX_STACK_VAR(_az_length,"_az_length");
													HX_STACK_LINE(261)
													if (((_quaternion == null()))){
														HX_STACK_LINE(261)
														::phoenix::Quaternion _g2 = ::phoenix::Quaternion_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(_g2,"_g2");
														HX_STACK_LINE(261)
														_quaternion = _g2;
													}
													HX_STACK_LINE(261)
													if (((_position == null()))){
														HX_STACK_LINE(261)
														::phoenix::Vector _g3 = ::phoenix::Vector_obj::__new(te->__get((int)12),te->__get((int)13),te->__get((int)14),null());		HX_STACK_VAR(_g3,"_g3");
														HX_STACK_LINE(261)
														_position = _g3;
													}
													else{
														HX_STACK_LINE(261)
														{
															HX_STACK_LINE(261)
															Float _x = te->__get((int)12);		HX_STACK_VAR(_x,"_x");
															HX_STACK_LINE(261)
															_position->x = _x;
															HX_STACK_LINE(261)
															if ((_position->_construct)){
																HX_STACK_LINE(261)
																_position->x;
															}
															else{
																HX_STACK_LINE(261)
																if (((bool((_position->listen_x != null())) && bool(!(_position->ignore_listeners))))){
																	HX_STACK_LINE(261)
																	_position->listen_x(_x);
																}
																HX_STACK_LINE(261)
																_position->x;
															}
														}
														HX_STACK_LINE(261)
														{
															HX_STACK_LINE(261)
															Float _y = te->__get((int)13);		HX_STACK_VAR(_y,"_y");
															HX_STACK_LINE(261)
															_position->y = _y;
															HX_STACK_LINE(261)
															if ((_position->_construct)){
																HX_STACK_LINE(261)
																_position->y;
															}
															else{
																HX_STACK_LINE(261)
																if (((bool((_position->listen_y != null())) && bool(!(_position->ignore_listeners))))){
																	HX_STACK_LINE(261)
																	_position->listen_y(_y);
																}
																HX_STACK_LINE(261)
																_position->y;
															}
														}
														HX_STACK_LINE(261)
														{
															HX_STACK_LINE(261)
															Float _z = te->__get((int)14);		HX_STACK_VAR(_z,"_z");
															HX_STACK_LINE(261)
															_position->z = _z;
															HX_STACK_LINE(261)
															if ((_position->_construct)){
																HX_STACK_LINE(261)
																_position->z;
															}
															else{
																HX_STACK_LINE(261)
																if (((bool((_position->listen_z != null())) && bool(!(_position->ignore_listeners))))){
																	HX_STACK_LINE(261)
																	_position->listen_z(_z);
																}
																HX_STACK_LINE(261)
																_position->z;
															}
														}
													}
													HX_STACK_LINE(261)
													if (((_scale == null()))){
														HX_STACK_LINE(261)
														::phoenix::Vector _g4 = ::phoenix::Vector_obj::__new(_ax_length,_ay_length,_az_length,null());		HX_STACK_VAR(_g4,"_g4");
														HX_STACK_LINE(261)
														_scale = _g4;
													}
													else{
														HX_STACK_LINE(261)
														{
															HX_STACK_LINE(261)
															_scale->x = _ax_length;
															HX_STACK_LINE(261)
															if ((_scale->_construct)){
																HX_STACK_LINE(261)
																_scale->x;
															}
															else{
																HX_STACK_LINE(261)
																if (((bool((_scale->listen_x != null())) && bool(!(_scale->ignore_listeners))))){
																	HX_STACK_LINE(261)
																	_scale->listen_x(_ax_length);
																}
																HX_STACK_LINE(261)
																_scale->x;
															}
														}
														HX_STACK_LINE(261)
														{
															HX_STACK_LINE(261)
															_scale->y = _ay_length;
															HX_STACK_LINE(261)
															if ((_scale->_construct)){
																HX_STACK_LINE(261)
																_scale->y;
															}
															else{
																HX_STACK_LINE(261)
																if (((bool((_scale->listen_y != null())) && bool(!(_scale->ignore_listeners))))){
																	HX_STACK_LINE(261)
																	_scale->listen_y(_ay_length);
																}
																HX_STACK_LINE(261)
																_scale->y;
															}
														}
														HX_STACK_LINE(261)
														{
															HX_STACK_LINE(261)
															_scale->z = _az_length;
															HX_STACK_LINE(261)
															if ((_scale->_construct)){
																HX_STACK_LINE(261)
																_scale->z;
															}
															else{
																HX_STACK_LINE(261)
																if (((bool((_scale->listen_z != null())) && bool(!(_scale->ignore_listeners))))){
																	HX_STACK_LINE(261)
																	_scale->listen_z(_az_length);
																}
																HX_STACK_LINE(261)
																_scale->z;
															}
														}
													}
													HX_STACK_LINE(261)
													Array< Float > _g5 = _this5->elements->concat(Array_obj< Float >::__new());		HX_STACK_VAR(_g5,"_g5");
													HX_STACK_LINE(261)
													matrix->elements = _g5;
													HX_STACK_LINE(261)
													Array< Float > me = matrix->elements;		HX_STACK_VAR(me,"me");
													HX_STACK_LINE(261)
													hx::DivEq(me[(int)0],_ax_length);
													HX_STACK_LINE(261)
													hx::DivEq(me[(int)1],_ax_length);
													HX_STACK_LINE(261)
													hx::DivEq(me[(int)2],_ax_length);
													HX_STACK_LINE(261)
													hx::DivEq(me[(int)4],_ay_length);
													HX_STACK_LINE(261)
													hx::DivEq(me[(int)5],_ay_length);
													HX_STACK_LINE(261)
													hx::DivEq(me[(int)6],_ay_length);
													HX_STACK_LINE(261)
													hx::DivEq(me[(int)8],_az_length);
													HX_STACK_LINE(261)
													hx::DivEq(me[(int)9],_az_length);
													HX_STACK_LINE(261)
													hx::DivEq(me[(int)10],_az_length);
													HX_STACK_LINE(261)
													_quaternion->setFromRotationMatrix(matrix);
													HX_STACK_LINE(261)
													if (((_this5->_transform == null()))){
														HX_STACK_LINE(261)
														::phoenix::MatrixTransform _g6 = ::phoenix::MatrixTransform_obj::__new(_position,_quaternion,_scale);		HX_STACK_VAR(_g6,"_g6");
														HX_STACK_LINE(261)
														_this5->_transform = _g6;
													}
													else{
														HX_STACK_LINE(261)
														_this5->_transform->pos = _position;
														HX_STACK_LINE(261)
														_this5->_transform->rotation = _quaternion;
														HX_STACK_LINE(261)
														_this5->_transform->scale = _scale;
													}
													HX_STACK_LINE(261)
													_transform = _this5->_transform;
												}
												HX_STACK_LINE(261)
												{
													HX_STACK_LINE(261)
													::phoenix::Vector _p = _transform->pos;		HX_STACK_VAR(_p,"_p");
													HX_STACK_LINE(261)
													_this4->pos = _p;
													HX_STACK_LINE(261)
													if (((_p != null()))){
														HX_STACK_LINE(261)
														::phoenix::Vector_obj::Listen(_this4->pos,_this4->_pos_change_dyn());
														HX_STACK_LINE(261)
														if (((bool((_this4->pos_changed != null())) && bool(!(_this4->ignore_listeners))))){
															HX_STACK_LINE(261)
															_this4->pos_changed(_this4->pos);
														}
													}
													HX_STACK_LINE(261)
													_this4->pos;
												}
												HX_STACK_LINE(261)
												{
													HX_STACK_LINE(261)
													::phoenix::Quaternion _r = _transform->rotation;		HX_STACK_VAR(_r,"_r");
													HX_STACK_LINE(261)
													_this4->rotation = _r;
													HX_STACK_LINE(261)
													if (((_r != null()))){
														HX_STACK_LINE(261)
														{
															HX_STACK_LINE(261)
															::phoenix::Quaternion _q = _this4->rotation;		HX_STACK_VAR(_q,"_q");
															HX_STACK_LINE(261)
															Dynamic listener = _this4->_rotation_change_dyn();		HX_STACK_VAR(listener,"listener");
															HX_STACK_LINE(261)
															_q->listen_x = listener;
															HX_STACK_LINE(261)
															_q->listen_y = listener;
															HX_STACK_LINE(261)
															_q->listen_z = listener;
															HX_STACK_LINE(261)
															_q->listen_w = listener;
														}
														HX_STACK_LINE(261)
														if (((bool((_this4->rotation_changed != null())) && bool(!(_this4->ignore_listeners))))){
															HX_STACK_LINE(261)
															_this4->rotation_changed(_this4->rotation);
														}
													}
													HX_STACK_LINE(261)
													_this4->rotation;
												}
												HX_STACK_LINE(261)
												{
													HX_STACK_LINE(261)
													::phoenix::Vector _s = _transform->scale;		HX_STACK_VAR(_s,"_s");
													HX_STACK_LINE(261)
													_this4->scale = _s;
													HX_STACK_LINE(261)
													if (((_s != null()))){
														HX_STACK_LINE(261)
														::phoenix::Vector_obj::Listen(_this4->scale,_this4->_scale_change_dyn());
														HX_STACK_LINE(261)
														if (((bool((_this4->scale_changed != null())) && bool(!(_this4->ignore_listeners))))){
															HX_STACK_LINE(261)
															_this4->scale_changed(_this4->scale);
														}
													}
													HX_STACK_LINE(261)
													_this4->scale;
												}
											}
											HX_STACK_LINE(261)
											_this4;
										}
										HX_STACK_LINE(261)
										{
											HX_STACK_LINE(261)
											_this3->dirty = false;
											HX_STACK_LINE(261)
											if (((bool((bool((bool(_this3->dirty) && bool(!(_this3->_setup)))) && bool((_this3->_dirty_handlers != null())))) && bool((_this3->_dirty_handlers->__Field(HX_CSTRING("length"),true) > (int)0))))){
												HX_STACK_LINE(261)
												int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
												HX_STACK_LINE(261)
												Dynamic _g11 = _this3->_dirty_handlers;		HX_STACK_VAR(_g11,"_g11");
												HX_STACK_LINE(261)
												while((true)){
													HX_STACK_LINE(261)
													if ((!(((_g2 < _g11->__Field(HX_CSTRING("length"),true)))))){
														HX_STACK_LINE(261)
														break;
													}
													HX_STACK_LINE(261)
													Dynamic _handler = _g11->__GetItem(_g2);		HX_STACK_VAR(_handler,"_handler");
													HX_STACK_LINE(261)
													++(_g2);
													HX_STACK_LINE(261)
													if (((_handler != null()))){
														HX_STACK_LINE(261)
														_handler(_this3).Cast< Void >();
													}
												}
											}
											HX_STACK_LINE(261)
											_this3->dirty;
										}
										HX_STACK_LINE(261)
										_this3->_cleaning = false;
										HX_STACK_LINE(261)
										if (((bool((_this3->_clean_handlers != null())) && bool((_this3->_clean_handlers->__Field(HX_CSTRING("length"),true) > (int)0))))){
											HX_STACK_LINE(261)
											int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
											HX_STACK_LINE(261)
											Dynamic _g11 = _this3->_clean_handlers;		HX_STACK_VAR(_g11,"_g11");
											HX_STACK_LINE(261)
											while((true)){
												HX_STACK_LINE(261)
												if ((!(((_g2 < _g11->__Field(HX_CSTRING("length"),true)))))){
													HX_STACK_LINE(261)
													break;
												}
												HX_STACK_LINE(261)
												Dynamic _handler = _g11->__GetItem(_g2);		HX_STACK_VAR(_handler,"_handler");
												HX_STACK_LINE(261)
												++(_g2);
												HX_STACK_LINE(261)
												if (((_handler != null()))){
													HX_STACK_LINE(261)
													_handler(_this3).Cast< Void >();
												}
											}
										}
									}
								}
							}
							HX_STACK_LINE(261)
							if (((bool(_this2->dirty) && bool(!(_this2->_cleaning))))){
								HX_STACK_LINE(261)
								if ((!(_this2->dirty))){
									HX_STACK_LINE(261)
									Dynamic();
								}
								else{
									HX_STACK_LINE(261)
									_this2->_cleaning = true;
									HX_STACK_LINE(261)
									{
										HX_STACK_LINE(261)
										::phoenix::Matrix _this3 = _this2->_pos_matrix;		HX_STACK_VAR(_this3,"_this3");
										HX_STACK_LINE(261)
										{
											HX_STACK_LINE(261)
											Array< Float > e = _this3->elements;		HX_STACK_VAR(e,"e");
											HX_STACK_LINE(261)
											e[(int)0] = (int)1;
											HX_STACK_LINE(261)
											e[(int)4] = (int)0;
											HX_STACK_LINE(261)
											e[(int)8] = (int)0;
											HX_STACK_LINE(261)
											e[(int)12] = _this2->local->pos->x;
											HX_STACK_LINE(261)
											e[(int)1] = (int)0;
											HX_STACK_LINE(261)
											e[(int)5] = (int)1;
											HX_STACK_LINE(261)
											e[(int)9] = (int)0;
											HX_STACK_LINE(261)
											e[(int)13] = _this2->local->pos->y;
											HX_STACK_LINE(261)
											e[(int)2] = (int)0;
											HX_STACK_LINE(261)
											e[(int)6] = (int)0;
											HX_STACK_LINE(261)
											e[(int)10] = (int)1;
											HX_STACK_LINE(261)
											e[(int)14] = _this2->local->pos->z;
											HX_STACK_LINE(261)
											e[(int)3] = (int)0;
											HX_STACK_LINE(261)
											e[(int)7] = (int)0;
											HX_STACK_LINE(261)
											e[(int)11] = (int)0;
											HX_STACK_LINE(261)
											e[(int)15] = (int)1;
											HX_STACK_LINE(261)
											_this3;
										}
										HX_STACK_LINE(261)
										_this3;
									}
									HX_STACK_LINE(261)
									{
										HX_STACK_LINE(261)
										::phoenix::Matrix _this3 = _this2->_rotation_matrix;		HX_STACK_VAR(_this3,"_this3");
										HX_STACK_LINE(261)
										::phoenix::Quaternion q = _this2->local->rotation;		HX_STACK_VAR(q,"q");
										HX_STACK_LINE(261)
										Array< Float > te = _this3->elements;		HX_STACK_VAR(te,"te");
										HX_STACK_LINE(261)
										Float x2 = (q->x + q->x);		HX_STACK_VAR(x2,"x2");
										HX_STACK_LINE(261)
										Float y2 = (q->y + q->y);		HX_STACK_VAR(y2,"y2");
										HX_STACK_LINE(261)
										Float z2 = (q->z + q->z);		HX_STACK_VAR(z2,"z2");
										HX_STACK_LINE(261)
										Float xx = (q->x * x2);		HX_STACK_VAR(xx,"xx");
										HX_STACK_LINE(261)
										Float xy = (q->x * y2);		HX_STACK_VAR(xy,"xy");
										HX_STACK_LINE(261)
										Float xz = (q->x * z2);		HX_STACK_VAR(xz,"xz");
										HX_STACK_LINE(261)
										Float yy = (q->y * y2);		HX_STACK_VAR(yy,"yy");
										HX_STACK_LINE(261)
										Float yz = (q->y * z2);		HX_STACK_VAR(yz,"yz");
										HX_STACK_LINE(261)
										Float zz = (q->z * z2);		HX_STACK_VAR(zz,"zz");
										HX_STACK_LINE(261)
										Float wx = (q->w * x2);		HX_STACK_VAR(wx,"wx");
										HX_STACK_LINE(261)
										Float wy = (q->w * y2);		HX_STACK_VAR(wy,"wy");
										HX_STACK_LINE(261)
										Float wz = (q->w * z2);		HX_STACK_VAR(wz,"wz");
										HX_STACK_LINE(261)
										te[(int)0] = ((int)1 - ((yy + zz)));
										HX_STACK_LINE(261)
										te[(int)4] = (xy - wz);
										HX_STACK_LINE(261)
										te[(int)8] = (xz + wy);
										HX_STACK_LINE(261)
										te[(int)1] = (xy + wz);
										HX_STACK_LINE(261)
										te[(int)5] = ((int)1 - ((xx + zz)));
										HX_STACK_LINE(261)
										te[(int)9] = (yz - wx);
										HX_STACK_LINE(261)
										te[(int)2] = (xz - wy);
										HX_STACK_LINE(261)
										te[(int)6] = (yz + wx);
										HX_STACK_LINE(261)
										te[(int)10] = ((int)1 - ((xx + yy)));
										HX_STACK_LINE(261)
										te[(int)3] = (int)0;
										HX_STACK_LINE(261)
										te[(int)7] = (int)0;
										HX_STACK_LINE(261)
										te[(int)11] = (int)0;
										HX_STACK_LINE(261)
										te[(int)12] = (int)0;
										HX_STACK_LINE(261)
										te[(int)13] = (int)0;
										HX_STACK_LINE(261)
										te[(int)14] = (int)0;
										HX_STACK_LINE(261)
										te[(int)15] = (int)1;
										HX_STACK_LINE(261)
										_this3;
									}
									HX_STACK_LINE(261)
									{
										HX_STACK_LINE(261)
										::phoenix::Matrix _this3 = _this2->_origin_undo_matrix;		HX_STACK_VAR(_this3,"_this3");
										HX_STACK_LINE(261)
										{
											HX_STACK_LINE(261)
											Array< Float > e = _this3->elements;		HX_STACK_VAR(e,"e");
											HX_STACK_LINE(261)
											e[(int)0] = (int)1;
											HX_STACK_LINE(261)
											e[(int)4] = (int)0;
											HX_STACK_LINE(261)
											e[(int)8] = (int)0;
											HX_STACK_LINE(261)
											e[(int)12] = -(_this2->origin->x);
											HX_STACK_LINE(261)
											e[(int)1] = (int)0;
											HX_STACK_LINE(261)
											e[(int)5] = (int)1;
											HX_STACK_LINE(261)
											e[(int)9] = (int)0;
											HX_STACK_LINE(261)
											e[(int)13] = -(_this2->origin->y);
											HX_STACK_LINE(261)
											e[(int)2] = (int)0;
											HX_STACK_LINE(261)
											e[(int)6] = (int)0;
											HX_STACK_LINE(261)
											e[(int)10] = (int)1;
											HX_STACK_LINE(261)
											e[(int)14] = -(_this2->origin->z);
											HX_STACK_LINE(261)
											e[(int)3] = (int)0;
											HX_STACK_LINE(261)
											e[(int)7] = (int)0;
											HX_STACK_LINE(261)
											e[(int)11] = (int)0;
											HX_STACK_LINE(261)
											e[(int)15] = (int)1;
											HX_STACK_LINE(261)
											_this3;
										}
										HX_STACK_LINE(261)
										_this3;
									}
									HX_STACK_LINE(261)
									{
										HX_STACK_LINE(261)
										::phoenix::Matrix _this3 = _this2->local->matrix;		HX_STACK_VAR(_this3,"_this3");
										HX_STACK_LINE(261)
										{
											HX_STACK_LINE(261)
											Array< Float > e = _this3->elements;		HX_STACK_VAR(e,"e");
											HX_STACK_LINE(261)
											e[(int)0] = (int)1;
											HX_STACK_LINE(261)
											e[(int)4] = (int)0;
											HX_STACK_LINE(261)
											e[(int)8] = (int)0;
											HX_STACK_LINE(261)
											e[(int)12] = _this2->origin->x;
											HX_STACK_LINE(261)
											e[(int)1] = (int)0;
											HX_STACK_LINE(261)
											e[(int)5] = (int)1;
											HX_STACK_LINE(261)
											e[(int)9] = (int)0;
											HX_STACK_LINE(261)
											e[(int)13] = _this2->origin->y;
											HX_STACK_LINE(261)
											e[(int)2] = (int)0;
											HX_STACK_LINE(261)
											e[(int)6] = (int)0;
											HX_STACK_LINE(261)
											e[(int)10] = (int)1;
											HX_STACK_LINE(261)
											e[(int)14] = _this2->origin->z;
											HX_STACK_LINE(261)
											e[(int)3] = (int)0;
											HX_STACK_LINE(261)
											e[(int)7] = (int)0;
											HX_STACK_LINE(261)
											e[(int)11] = (int)0;
											HX_STACK_LINE(261)
											e[(int)15] = (int)1;
											HX_STACK_LINE(261)
											_this3;
										}
										HX_STACK_LINE(261)
										_this3;
									}
									HX_STACK_LINE(261)
									{
										HX_STACK_LINE(261)
										::phoenix::Matrix _this3 = _this2->local->matrix;		HX_STACK_VAR(_this3,"_this3");
										HX_STACK_LINE(261)
										::phoenix::Vector _v = _this2->local->scale;		HX_STACK_VAR(_v,"_v");
										HX_STACK_LINE(261)
										Array< Float > te = _this3->elements;		HX_STACK_VAR(te,"te");
										HX_STACK_LINE(261)
										Float _x = _v->x;		HX_STACK_VAR(_x,"_x");
										HX_STACK_LINE(261)
										Float _y = _v->y;		HX_STACK_VAR(_y,"_y");
										HX_STACK_LINE(261)
										Float _z = _v->z;		HX_STACK_VAR(_z,"_z");
										HX_STACK_LINE(261)
										hx::MultEq(te[(int)0],_x);
										HX_STACK_LINE(261)
										hx::MultEq(te[(int)4],_y);
										HX_STACK_LINE(261)
										hx::MultEq(te[(int)8],_z);
										HX_STACK_LINE(261)
										hx::MultEq(te[(int)1],_x);
										HX_STACK_LINE(261)
										hx::MultEq(te[(int)5],_y);
										HX_STACK_LINE(261)
										hx::MultEq(te[(int)9],_z);
										HX_STACK_LINE(261)
										hx::MultEq(te[(int)2],_x);
										HX_STACK_LINE(261)
										hx::MultEq(te[(int)6],_y);
										HX_STACK_LINE(261)
										hx::MultEq(te[(int)10],_z);
										HX_STACK_LINE(261)
										hx::MultEq(te[(int)3],_x);
										HX_STACK_LINE(261)
										hx::MultEq(te[(int)7],_y);
										HX_STACK_LINE(261)
										hx::MultEq(te[(int)11],_z);
										HX_STACK_LINE(261)
										_this3;
									}
									HX_STACK_LINE(261)
									{
										HX_STACK_LINE(261)
										::phoenix::Matrix _this3 = _this2->local->matrix;		HX_STACK_VAR(_this3,"_this3");
										HX_STACK_LINE(261)
										{
											HX_STACK_LINE(261)
											Array< Float > ae = _this3->elements;		HX_STACK_VAR(ae,"ae");
											HX_STACK_LINE(261)
											Array< Float > be = _this2->_rotation_matrix->elements;		HX_STACK_VAR(be,"be");
											HX_STACK_LINE(261)
											Array< Float > te = _this3->elements;		HX_STACK_VAR(te,"te");
											HX_STACK_LINE(261)
											Float a11 = ae->__get((int)0);		HX_STACK_VAR(a11,"a11");
											HX_STACK_LINE(261)
											Float a12 = ae->__get((int)4);		HX_STACK_VAR(a12,"a12");
											HX_STACK_LINE(261)
											Float a13 = ae->__get((int)8);		HX_STACK_VAR(a13,"a13");
											HX_STACK_LINE(261)
											Float a14 = ae->__get((int)12);		HX_STACK_VAR(a14,"a14");
											HX_STACK_LINE(261)
											Float a21 = ae->__get((int)1);		HX_STACK_VAR(a21,"a21");
											HX_STACK_LINE(261)
											Float a22 = ae->__get((int)5);		HX_STACK_VAR(a22,"a22");
											HX_STACK_LINE(261)
											Float a23 = ae->__get((int)9);		HX_STACK_VAR(a23,"a23");
											HX_STACK_LINE(261)
											Float a24 = ae->__get((int)13);		HX_STACK_VAR(a24,"a24");
											HX_STACK_LINE(261)
											Float a31 = ae->__get((int)2);		HX_STACK_VAR(a31,"a31");
											HX_STACK_LINE(261)
											Float a32 = ae->__get((int)6);		HX_STACK_VAR(a32,"a32");
											HX_STACK_LINE(261)
											Float a33 = ae->__get((int)10);		HX_STACK_VAR(a33,"a33");
											HX_STACK_LINE(261)
											Float a34 = ae->__get((int)14);		HX_STACK_VAR(a34,"a34");
											HX_STACK_LINE(261)
											Float a41 = ae->__get((int)3);		HX_STACK_VAR(a41,"a41");
											HX_STACK_LINE(261)
											Float a42 = ae->__get((int)7);		HX_STACK_VAR(a42,"a42");
											HX_STACK_LINE(261)
											Float a43 = ae->__get((int)11);		HX_STACK_VAR(a43,"a43");
											HX_STACK_LINE(261)
											Float a44 = ae->__get((int)15);		HX_STACK_VAR(a44,"a44");
											HX_STACK_LINE(261)
											Float b11 = be->__get((int)0);		HX_STACK_VAR(b11,"b11");
											HX_STACK_LINE(261)
											Float b12 = be->__get((int)4);		HX_STACK_VAR(b12,"b12");
											HX_STACK_LINE(261)
											Float b13 = be->__get((int)8);		HX_STACK_VAR(b13,"b13");
											HX_STACK_LINE(261)
											Float b14 = be->__get((int)12);		HX_STACK_VAR(b14,"b14");
											HX_STACK_LINE(261)
											Float b21 = be->__get((int)1);		HX_STACK_VAR(b21,"b21");
											HX_STACK_LINE(261)
											Float b22 = be->__get((int)5);		HX_STACK_VAR(b22,"b22");
											HX_STACK_LINE(261)
											Float b23 = be->__get((int)9);		HX_STACK_VAR(b23,"b23");
											HX_STACK_LINE(261)
											Float b24 = be->__get((int)13);		HX_STACK_VAR(b24,"b24");
											HX_STACK_LINE(261)
											Float b31 = be->__get((int)2);		HX_STACK_VAR(b31,"b31");
											HX_STACK_LINE(261)
											Float b32 = be->__get((int)6);		HX_STACK_VAR(b32,"b32");
											HX_STACK_LINE(261)
											Float b33 = be->__get((int)10);		HX_STACK_VAR(b33,"b33");
											HX_STACK_LINE(261)
											Float b34 = be->__get((int)14);		HX_STACK_VAR(b34,"b34");
											HX_STACK_LINE(261)
											Float b41 = be->__get((int)3);		HX_STACK_VAR(b41,"b41");
											HX_STACK_LINE(261)
											Float b42 = be->__get((int)7);		HX_STACK_VAR(b42,"b42");
											HX_STACK_LINE(261)
											Float b43 = be->__get((int)11);		HX_STACK_VAR(b43,"b43");
											HX_STACK_LINE(261)
											Float b44 = be->__get((int)15);		HX_STACK_VAR(b44,"b44");
											HX_STACK_LINE(261)
											te[(int)0] = ((((a11 * b11) + (a12 * b21)) + (a13 * b31)) + (a14 * b41));
											HX_STACK_LINE(261)
											te[(int)4] = ((((a11 * b12) + (a12 * b22)) + (a13 * b32)) + (a14 * b42));
											HX_STACK_LINE(261)
											te[(int)8] = ((((a11 * b13) + (a12 * b23)) + (a13 * b33)) + (a14 * b43));
											HX_STACK_LINE(261)
											te[(int)12] = ((((a11 * b14) + (a12 * b24)) + (a13 * b34)) + (a14 * b44));
											HX_STACK_LINE(261)
											te[(int)1] = ((((a21 * b11) + (a22 * b21)) + (a23 * b31)) + (a24 * b41));
											HX_STACK_LINE(261)
											te[(int)5] = ((((a21 * b12) + (a22 * b22)) + (a23 * b32)) + (a24 * b42));
											HX_STACK_LINE(261)
											te[(int)9] = ((((a21 * b13) + (a22 * b23)) + (a23 * b33)) + (a24 * b43));
											HX_STACK_LINE(261)
											te[(int)13] = ((((a21 * b14) + (a22 * b24)) + (a23 * b34)) + (a24 * b44));
											HX_STACK_LINE(261)
											te[(int)2] = ((((a31 * b11) + (a32 * b21)) + (a33 * b31)) + (a34 * b41));
											HX_STACK_LINE(261)
											te[(int)6] = ((((a31 * b12) + (a32 * b22)) + (a33 * b32)) + (a34 * b42));
											HX_STACK_LINE(261)
											te[(int)10] = ((((a31 * b13) + (a32 * b23)) + (a33 * b33)) + (a34 * b43));
											HX_STACK_LINE(261)
											te[(int)14] = ((((a31 * b14) + (a32 * b24)) + (a33 * b34)) + (a34 * b44));
											HX_STACK_LINE(261)
											te[(int)3] = ((((a41 * b11) + (a42 * b21)) + (a43 * b31)) + (a44 * b41));
											HX_STACK_LINE(261)
											te[(int)7] = ((((a41 * b12) + (a42 * b22)) + (a43 * b32)) + (a44 * b42));
											HX_STACK_LINE(261)
											te[(int)11] = ((((a41 * b13) + (a42 * b23)) + (a43 * b33)) + (a44 * b43));
											HX_STACK_LINE(261)
											te[(int)15] = ((((a41 * b14) + (a42 * b24)) + (a43 * b34)) + (a44 * b44));
											HX_STACK_LINE(261)
											_this3;
										}
									}
									HX_STACK_LINE(261)
									{
										HX_STACK_LINE(261)
										::phoenix::Matrix _this3 = _this2->local->matrix;		HX_STACK_VAR(_this3,"_this3");
										HX_STACK_LINE(261)
										::phoenix::Vector _v = _this2->local->pos;		HX_STACK_VAR(_v,"_v");
										HX_STACK_LINE(261)
										Array< Float > te = _this3->elements;		HX_STACK_VAR(te,"te");
										HX_STACK_LINE(261)
										te[(int)12] = _v->x;
										HX_STACK_LINE(261)
										te[(int)13] = _v->y;
										HX_STACK_LINE(261)
										te[(int)14] = _v->z;
										HX_STACK_LINE(261)
										_this3;
									}
									HX_STACK_LINE(261)
									{
										HX_STACK_LINE(261)
										::phoenix::Matrix _this3 = _this2->local->matrix;		HX_STACK_VAR(_this3,"_this3");
										HX_STACK_LINE(261)
										{
											HX_STACK_LINE(261)
											Array< Float > ae = _this3->elements;		HX_STACK_VAR(ae,"ae");
											HX_STACK_LINE(261)
											Array< Float > be = _this2->_origin_undo_matrix->elements;		HX_STACK_VAR(be,"be");
											HX_STACK_LINE(261)
											Array< Float > te = _this3->elements;		HX_STACK_VAR(te,"te");
											HX_STACK_LINE(261)
											Float a11 = ae->__get((int)0);		HX_STACK_VAR(a11,"a11");
											HX_STACK_LINE(261)
											Float a12 = ae->__get((int)4);		HX_STACK_VAR(a12,"a12");
											HX_STACK_LINE(261)
											Float a13 = ae->__get((int)8);		HX_STACK_VAR(a13,"a13");
											HX_STACK_LINE(261)
											Float a14 = ae->__get((int)12);		HX_STACK_VAR(a14,"a14");
											HX_STACK_LINE(261)
											Float a21 = ae->__get((int)1);		HX_STACK_VAR(a21,"a21");
											HX_STACK_LINE(261)
											Float a22 = ae->__get((int)5);		HX_STACK_VAR(a22,"a22");
											HX_STACK_LINE(261)
											Float a23 = ae->__get((int)9);		HX_STACK_VAR(a23,"a23");
											HX_STACK_LINE(261)
											Float a24 = ae->__get((int)13);		HX_STACK_VAR(a24,"a24");
											HX_STACK_LINE(261)
											Float a31 = ae->__get((int)2);		HX_STACK_VAR(a31,"a31");
											HX_STACK_LINE(261)
											Float a32 = ae->__get((int)6);		HX_STACK_VAR(a32,"a32");
											HX_STACK_LINE(261)
											Float a33 = ae->__get((int)10);		HX_STACK_VAR(a33,"a33");
											HX_STACK_LINE(261)
											Float a34 = ae->__get((int)14);		HX_STACK_VAR(a34,"a34");
											HX_STACK_LINE(261)
											Float a41 = ae->__get((int)3);		HX_STACK_VAR(a41,"a41");
											HX_STACK_LINE(261)
											Float a42 = ae->__get((int)7);		HX_STACK_VAR(a42,"a42");
											HX_STACK_LINE(261)
											Float a43 = ae->__get((int)11);		HX_STACK_VAR(a43,"a43");
											HX_STACK_LINE(261)
											Float a44 = ae->__get((int)15);		HX_STACK_VAR(a44,"a44");
											HX_STACK_LINE(261)
											Float b11 = be->__get((int)0);		HX_STACK_VAR(b11,"b11");
											HX_STACK_LINE(261)
											Float b12 = be->__get((int)4);		HX_STACK_VAR(b12,"b12");
											HX_STACK_LINE(261)
											Float b13 = be->__get((int)8);		HX_STACK_VAR(b13,"b13");
											HX_STACK_LINE(261)
											Float b14 = be->__get((int)12);		HX_STACK_VAR(b14,"b14");
											HX_STACK_LINE(261)
											Float b21 = be->__get((int)1);		HX_STACK_VAR(b21,"b21");
											HX_STACK_LINE(261)
											Float b22 = be->__get((int)5);		HX_STACK_VAR(b22,"b22");
											HX_STACK_LINE(261)
											Float b23 = be->__get((int)9);		HX_STACK_VAR(b23,"b23");
											HX_STACK_LINE(261)
											Float b24 = be->__get((int)13);		HX_STACK_VAR(b24,"b24");
											HX_STACK_LINE(261)
											Float b31 = be->__get((int)2);		HX_STACK_VAR(b31,"b31");
											HX_STACK_LINE(261)
											Float b32 = be->__get((int)6);		HX_STACK_VAR(b32,"b32");
											HX_STACK_LINE(261)
											Float b33 = be->__get((int)10);		HX_STACK_VAR(b33,"b33");
											HX_STACK_LINE(261)
											Float b34 = be->__get((int)14);		HX_STACK_VAR(b34,"b34");
											HX_STACK_LINE(261)
											Float b41 = be->__get((int)3);		HX_STACK_VAR(b41,"b41");
											HX_STACK_LINE(261)
											Float b42 = be->__get((int)7);		HX_STACK_VAR(b42,"b42");
											HX_STACK_LINE(261)
											Float b43 = be->__get((int)11);		HX_STACK_VAR(b43,"b43");
											HX_STACK_LINE(261)
											Float b44 = be->__get((int)15);		HX_STACK_VAR(b44,"b44");
											HX_STACK_LINE(261)
											te[(int)0] = ((((a11 * b11) + (a12 * b21)) + (a13 * b31)) + (a14 * b41));
											HX_STACK_LINE(261)
											te[(int)4] = ((((a11 * b12) + (a12 * b22)) + (a13 * b32)) + (a14 * b42));
											HX_STACK_LINE(261)
											te[(int)8] = ((((a11 * b13) + (a12 * b23)) + (a13 * b33)) + (a14 * b43));
											HX_STACK_LINE(261)
											te[(int)12] = ((((a11 * b14) + (a12 * b24)) + (a13 * b34)) + (a14 * b44));
											HX_STACK_LINE(261)
											te[(int)1] = ((((a21 * b11) + (a22 * b21)) + (a23 * b31)) + (a24 * b41));
											HX_STACK_LINE(261)
											te[(int)5] = ((((a21 * b12) + (a22 * b22)) + (a23 * b32)) + (a24 * b42));
											HX_STACK_LINE(261)
											te[(int)9] = ((((a21 * b13) + (a22 * b23)) + (a23 * b33)) + (a24 * b43));
											HX_STACK_LINE(261)
											te[(int)13] = ((((a21 * b14) + (a22 * b24)) + (a23 * b34)) + (a24 * b44));
											HX_STACK_LINE(261)
											te[(int)2] = ((((a31 * b11) + (a32 * b21)) + (a33 * b31)) + (a34 * b41));
											HX_STACK_LINE(261)
											te[(int)6] = ((((a31 * b12) + (a32 * b22)) + (a33 * b32)) + (a34 * b42));
											HX_STACK_LINE(261)
											te[(int)10] = ((((a31 * b13) + (a32 * b23)) + (a33 * b33)) + (a34 * b43));
											HX_STACK_LINE(261)
											te[(int)14] = ((((a31 * b14) + (a32 * b24)) + (a33 * b34)) + (a34 * b44));
											HX_STACK_LINE(261)
											te[(int)3] = ((((a41 * b11) + (a42 * b21)) + (a43 * b31)) + (a44 * b41));
											HX_STACK_LINE(261)
											te[(int)7] = ((((a41 * b12) + (a42 * b22)) + (a43 * b32)) + (a44 * b42));
											HX_STACK_LINE(261)
											te[(int)11] = ((((a41 * b13) + (a42 * b23)) + (a43 * b33)) + (a44 * b43));
											HX_STACK_LINE(261)
											te[(int)15] = ((((a41 * b14) + (a42 * b24)) + (a43 * b34)) + (a44 * b44));
											HX_STACK_LINE(261)
											_this3;
										}
									}
									HX_STACK_LINE(261)
									if (((_this2->parent != null()))){
										HX_STACK_LINE(261)
										::phoenix::Spatial _this3 = _this2->get_world();		HX_STACK_VAR(_this3,"_this3");
										HX_STACK_LINE(261)
										::phoenix::Matrix _m1;		HX_STACK_VAR(_m1,"_m1");
										HX_STACK_LINE(261)
										{
											HX_STACK_LINE(261)
											::phoenix::Matrix _this4;		HX_STACK_VAR(_this4,"_this4");
											HX_STACK_LINE(261)
											{
												HX_STACK_LINE(261)
												::phoenix::Spatial _this5 = _this2->get_world();		HX_STACK_VAR(_this5,"_this5");
												HX_STACK_LINE(261)
												_this4 = _this5->matrix;
											}
											HX_STACK_LINE(261)
											::phoenix::Matrix _a;		HX_STACK_VAR(_a,"_a");
											HX_STACK_LINE(261)
											{
												HX_STACK_LINE(261)
												::phoenix::Spatial _this5 = _this2->parent->get_world();		HX_STACK_VAR(_this5,"_this5");
												HX_STACK_LINE(261)
												_a = _this5->matrix;
											}
											HX_STACK_LINE(261)
											Array< Float > ae = _a->elements;		HX_STACK_VAR(ae,"ae");
											HX_STACK_LINE(261)
											Array< Float > be = _this2->local->matrix->elements;		HX_STACK_VAR(be,"be");
											HX_STACK_LINE(261)
											Array< Float > te = _this4->elements;		HX_STACK_VAR(te,"te");
											HX_STACK_LINE(261)
											Float a11 = ae->__get((int)0);		HX_STACK_VAR(a11,"a11");
											HX_STACK_LINE(261)
											Float a12 = ae->__get((int)4);		HX_STACK_VAR(a12,"a12");
											HX_STACK_LINE(261)
											Float a13 = ae->__get((int)8);		HX_STACK_VAR(a13,"a13");
											HX_STACK_LINE(261)
											Float a14 = ae->__get((int)12);		HX_STACK_VAR(a14,"a14");
											HX_STACK_LINE(261)
											Float a21 = ae->__get((int)1);		HX_STACK_VAR(a21,"a21");
											HX_STACK_LINE(261)
											Float a22 = ae->__get((int)5);		HX_STACK_VAR(a22,"a22");
											HX_STACK_LINE(261)
											Float a23 = ae->__get((int)9);		HX_STACK_VAR(a23,"a23");
											HX_STACK_LINE(261)
											Float a24 = ae->__get((int)13);		HX_STACK_VAR(a24,"a24");
											HX_STACK_LINE(261)
											Float a31 = ae->__get((int)2);		HX_STACK_VAR(a31,"a31");
											HX_STACK_LINE(261)
											Float a32 = ae->__get((int)6);		HX_STACK_VAR(a32,"a32");
											HX_STACK_LINE(261)
											Float a33 = ae->__get((int)10);		HX_STACK_VAR(a33,"a33");
											HX_STACK_LINE(261)
											Float a34 = ae->__get((int)14);		HX_STACK_VAR(a34,"a34");
											HX_STACK_LINE(261)
											Float a41 = ae->__get((int)3);		HX_STACK_VAR(a41,"a41");
											HX_STACK_LINE(261)
											Float a42 = ae->__get((int)7);		HX_STACK_VAR(a42,"a42");
											HX_STACK_LINE(261)
											Float a43 = ae->__get((int)11);		HX_STACK_VAR(a43,"a43");
											HX_STACK_LINE(261)
											Float a44 = ae->__get((int)15);		HX_STACK_VAR(a44,"a44");
											HX_STACK_LINE(261)
											Float b11 = be->__get((int)0);		HX_STACK_VAR(b11,"b11");
											HX_STACK_LINE(261)
											Float b12 = be->__get((int)4);		HX_STACK_VAR(b12,"b12");
											HX_STACK_LINE(261)
											Float b13 = be->__get((int)8);		HX_STACK_VAR(b13,"b13");
											HX_STACK_LINE(261)
											Float b14 = be->__get((int)12);		HX_STACK_VAR(b14,"b14");
											HX_STACK_LINE(261)
											Float b21 = be->__get((int)1);		HX_STACK_VAR(b21,"b21");
											HX_STACK_LINE(261)
											Float b22 = be->__get((int)5);		HX_STACK_VAR(b22,"b22");
											HX_STACK_LINE(261)
											Float b23 = be->__get((int)9);		HX_STACK_VAR(b23,"b23");
											HX_STACK_LINE(261)
											Float b24 = be->__get((int)13);		HX_STACK_VAR(b24,"b24");
											HX_STACK_LINE(261)
											Float b31 = be->__get((int)2);		HX_STACK_VAR(b31,"b31");
											HX_STACK_LINE(261)
											Float b32 = be->__get((int)6);		HX_STACK_VAR(b32,"b32");
											HX_STACK_LINE(261)
											Float b33 = be->__get((int)10);		HX_STACK_VAR(b33,"b33");
											HX_STACK_LINE(261)
											Float b34 = be->__get((int)14);		HX_STACK_VAR(b34,"b34");
											HX_STACK_LINE(261)
											Float b41 = be->__get((int)3);		HX_STACK_VAR(b41,"b41");
											HX_STACK_LINE(261)
											Float b42 = be->__get((int)7);		HX_STACK_VAR(b42,"b42");
											HX_STACK_LINE(261)
											Float b43 = be->__get((int)11);		HX_STACK_VAR(b43,"b43");
											HX_STACK_LINE(261)
											Float b44 = be->__get((int)15);		HX_STACK_VAR(b44,"b44");
											HX_STACK_LINE(261)
											te[(int)0] = ((((a11 * b11) + (a12 * b21)) + (a13 * b31)) + (a14 * b41));
											HX_STACK_LINE(261)
											te[(int)4] = ((((a11 * b12) + (a12 * b22)) + (a13 * b32)) + (a14 * b42));
											HX_STACK_LINE(261)
											te[(int)8] = ((((a11 * b13) + (a12 * b23)) + (a13 * b33)) + (a14 * b43));
											HX_STACK_LINE(261)
											te[(int)12] = ((((a11 * b14) + (a12 * b24)) + (a13 * b34)) + (a14 * b44));
											HX_STACK_LINE(261)
											te[(int)1] = ((((a21 * b11) + (a22 * b21)) + (a23 * b31)) + (a24 * b41));
											HX_STACK_LINE(261)
											te[(int)5] = ((((a21 * b12) + (a22 * b22)) + (a23 * b32)) + (a24 * b42));
											HX_STACK_LINE(261)
											te[(int)9] = ((((a21 * b13) + (a22 * b23)) + (a23 * b33)) + (a24 * b43));
											HX_STACK_LINE(261)
											te[(int)13] = ((((a21 * b14) + (a22 * b24)) + (a23 * b34)) + (a24 * b44));
											HX_STACK_LINE(261)
											te[(int)2] = ((((a31 * b11) + (a32 * b21)) + (a33 * b31)) + (a34 * b41));
											HX_STACK_LINE(261)
											te[(int)6] = ((((a31 * b12) + (a32 * b22)) + (a33 * b32)) + (a34 * b42));
											HX_STACK_LINE(261)
											te[(int)10] = ((((a31 * b13) + (a32 * b23)) + (a33 * b33)) + (a34 * b43));
											HX_STACK_LINE(261)
											te[(int)14] = ((((a31 * b14) + (a32 * b24)) + (a33 * b34)) + (a34 * b44));
											HX_STACK_LINE(261)
											te[(int)3] = ((((a41 * b11) + (a42 * b21)) + (a43 * b31)) + (a44 * b41));
											HX_STACK_LINE(261)
											te[(int)7] = ((((a41 * b12) + (a42 * b22)) + (a43 * b32)) + (a44 * b42));
											HX_STACK_LINE(261)
											te[(int)11] = ((((a41 * b13) + (a42 * b23)) + (a43 * b33)) + (a44 * b43));
											HX_STACK_LINE(261)
											te[(int)15] = ((((a41 * b14) + (a42 * b24)) + (a43 * b34)) + (a44 * b44));
											HX_STACK_LINE(261)
											_m1 = _this4;
										}
										HX_STACK_LINE(261)
										_this3->matrix = _m1;
										HX_STACK_LINE(261)
										if (((_m1 != null()))){
											HX_STACK_LINE(261)
											::snow::platform::native::utils::Float32Array _g7;		HX_STACK_VAR(_g7,"_g7");
											HX_STACK_LINE(261)
											{
												HX_STACK_LINE(261)
												::phoenix::Matrix _this4 = _this3->matrix;		HX_STACK_VAR(_this4,"_this4");
												HX_STACK_LINE(261)
												{
													HX_STACK_LINE(261)
													::snow::platform::native::utils::Float32Array _this5 = _this4->_float32array;		HX_STACK_VAR(_this5,"_this5");
													HX_STACK_LINE(261)
													Dynamic bufferOrArray = _this4->elements;		HX_STACK_VAR(bufferOrArray,"bufferOrArray");
													HX_STACK_LINE(261)
													int offset = (int)0;		HX_STACK_VAR(offset,"offset");
													HX_STACK_LINE(261)
													if ((::Std_obj::is(bufferOrArray,hx::ClassOf< Array<int> >()))){
														HX_STACK_LINE(261)
														Array< Float > floats = bufferOrArray;		HX_STACK_VAR(floats,"floats");
														HX_STACK_LINE(261)
														{
															HX_STACK_LINE(261)
															int _g11 = (int)0;		HX_STACK_VAR(_g11,"_g11");
															HX_STACK_LINE(261)
															int _g2 = floats->length;		HX_STACK_VAR(_g2,"_g2");
															HX_STACK_LINE(261)
															while((true)){
																HX_STACK_LINE(261)
																if ((!(((_g11 < _g2))))){
																	HX_STACK_LINE(261)
																	break;
																}
																HX_STACK_LINE(261)
																int i = (_g11)++;		HX_STACK_VAR(i,"i");
																HX_STACK_LINE(261)
																::__hxcpp_memory_set_float(_this5->bytes,(((int((i + offset)) << int((int)2))) + _this5->byteOffset),floats->__get(i));
															}
														}
													}
													else{
														HX_STACK_LINE(261)
														if ((::Std_obj::is(bufferOrArray,hx::ClassOf< ::snow::platform::native::utils::Float32Array >()))){
															HX_STACK_LINE(261)
															::snow::platform::native::utils::Float32Array floats = bufferOrArray;		HX_STACK_VAR(floats,"floats");
															HX_STACK_LINE(261)
															{
																HX_STACK_LINE(261)
																int _g11 = (int)0;		HX_STACK_VAR(_g11,"_g11");
																HX_STACK_LINE(261)
																int _g2 = floats->length;		HX_STACK_VAR(_g2,"_g2");
																HX_STACK_LINE(261)
																while((true)){
																	HX_STACK_LINE(261)
																	if ((!(((_g11 < _g2))))){
																		HX_STACK_LINE(261)
																		break;
																	}
																	HX_STACK_LINE(261)
																	int i = (_g11)++;		HX_STACK_VAR(i,"i");
																	HX_STACK_LINE(261)
																	::__hxcpp_memory_set_float(_this5->bytes,(((int((i + offset)) << int((int)2))) + _this5->byteOffset),floats->__get(i));
																}
															}
														}
														else{
															HX_STACK_LINE(261)
															HX_STACK_DO_THROW(HX_CSTRING("Invalid input buffer"));
														}
													}
												}
												HX_STACK_LINE(261)
												_g7 = ::snow::platform::native::utils::Float32Array_obj::__new(_this4->_float32array,null(),null());
											}
											HX_STACK_LINE(261)
											_this3->floats = _g7;
										}
										HX_STACK_LINE(261)
										_this3->matrix;
									}
									else{
										HX_STACK_LINE(261)
										::phoenix::Spatial _this3 = _this2->get_world();		HX_STACK_VAR(_this3,"_this3");
										HX_STACK_LINE(261)
										::phoenix::Matrix _m1;		HX_STACK_VAR(_m1,"_m1");
										HX_STACK_LINE(261)
										{
											HX_STACK_LINE(261)
											Array< Float > te = _this2->local->matrix->elements;		HX_STACK_VAR(te,"te");
											HX_STACK_LINE(261)
											_m1 = ::phoenix::Matrix_obj::__new(te->__get((int)0),te->__get((int)4),te->__get((int)8),te->__get((int)12),te->__get((int)1),te->__get((int)5),te->__get((int)9),te->__get((int)13),te->__get((int)2),te->__get((int)6),te->__get((int)10),te->__get((int)14),te->__get((int)3),te->__get((int)7),te->__get((int)11),te->__get((int)15));
										}
										HX_STACK_LINE(261)
										_this3->matrix = _m1;
										HX_STACK_LINE(261)
										if (((_m1 != null()))){
											HX_STACK_LINE(261)
											::snow::platform::native::utils::Float32Array _g8;		HX_STACK_VAR(_g8,"_g8");
											HX_STACK_LINE(261)
											{
												HX_STACK_LINE(261)
												::phoenix::Matrix _this4 = _this3->matrix;		HX_STACK_VAR(_this4,"_this4");
												HX_STACK_LINE(261)
												{
													HX_STACK_LINE(261)
													::snow::platform::native::utils::Float32Array _this5 = _this4->_float32array;		HX_STACK_VAR(_this5,"_this5");
													HX_STACK_LINE(261)
													Dynamic bufferOrArray = _this4->elements;		HX_STACK_VAR(bufferOrArray,"bufferOrArray");
													HX_STACK_LINE(261)
													int offset = (int)0;		HX_STACK_VAR(offset,"offset");
													HX_STACK_LINE(261)
													if ((::Std_obj::is(bufferOrArray,hx::ClassOf< Array<int> >()))){
														HX_STACK_LINE(261)
														Array< Float > floats = bufferOrArray;		HX_STACK_VAR(floats,"floats");
														HX_STACK_LINE(261)
														{
															HX_STACK_LINE(261)
															int _g11 = (int)0;		HX_STACK_VAR(_g11,"_g11");
															HX_STACK_LINE(261)
															int _g2 = floats->length;		HX_STACK_VAR(_g2,"_g2");
															HX_STACK_LINE(261)
															while((true)){
																HX_STACK_LINE(261)
																if ((!(((_g11 < _g2))))){
																	HX_STACK_LINE(261)
																	break;
																}
																HX_STACK_LINE(261)
																int i = (_g11)++;		HX_STACK_VAR(i,"i");
																HX_STACK_LINE(261)
																::__hxcpp_memory_set_float(_this5->bytes,(((int((i + offset)) << int((int)2))) + _this5->byteOffset),floats->__get(i));
															}
														}
													}
													else{
														HX_STACK_LINE(261)
														if ((::Std_obj::is(bufferOrArray,hx::ClassOf< ::snow::platform::native::utils::Float32Array >()))){
															HX_STACK_LINE(261)
															::snow::platform::native::utils::Float32Array floats = bufferOrArray;		HX_STACK_VAR(floats,"floats");
															HX_STACK_LINE(261)
															{
																HX_STACK_LINE(261)
																int _g11 = (int)0;		HX_STACK_VAR(_g11,"_g11");
																HX_STACK_LINE(261)
																int _g2 = floats->length;		HX_STACK_VAR(_g2,"_g2");
																HX_STACK_LINE(261)
																while((true)){
																	HX_STACK_LINE(261)
																	if ((!(((_g11 < _g2))))){
																		HX_STACK_LINE(261)
																		break;
																	}
																	HX_STACK_LINE(261)
																	int i = (_g11)++;		HX_STACK_VAR(i,"i");
																	HX_STACK_LINE(261)
																	::__hxcpp_memory_set_float(_this5->bytes,(((int((i + offset)) << int((int)2))) + _this5->byteOffset),floats->__get(i));
																}
															}
														}
														else{
															HX_STACK_LINE(261)
															HX_STACK_DO_THROW(HX_CSTRING("Invalid input buffer"));
														}
													}
												}
												HX_STACK_LINE(261)
												_g8 = ::snow::platform::native::utils::Float32Array_obj::__new(_this4->_float32array,null(),null());
											}
											HX_STACK_LINE(261)
											_this3->floats = _g8;
										}
										HX_STACK_LINE(261)
										_this3->matrix;
									}
									HX_STACK_LINE(261)
									{
										HX_STACK_LINE(261)
										::phoenix::Spatial _this3 = _this2->get_world();		HX_STACK_VAR(_this3,"_this3");
										HX_STACK_LINE(261)
										if ((_this3->auto_decompose)){
											HX_STACK_LINE(261)
											::phoenix::MatrixTransform _transform;		HX_STACK_VAR(_transform,"_transform");
											HX_STACK_LINE(261)
											{
												HX_STACK_LINE(261)
												::phoenix::Matrix _this4 = _this3->matrix;		HX_STACK_VAR(_this4,"_this4");
												HX_STACK_LINE(261)
												::phoenix::Vector _position = null();		HX_STACK_VAR(_position,"_position");
												HX_STACK_LINE(261)
												::phoenix::Quaternion _quaternion = null();		HX_STACK_VAR(_quaternion,"_quaternion");
												HX_STACK_LINE(261)
												::phoenix::Vector _scale = null();		HX_STACK_VAR(_scale,"_scale");
												HX_STACK_LINE(261)
												Array< Float > te = _this4->elements;		HX_STACK_VAR(te,"te");
												HX_STACK_LINE(261)
												::phoenix::Matrix matrix = ::phoenix::Matrix_obj::__new(null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(matrix,"matrix");
												HX_STACK_LINE(261)
												Float _ax_x = te->__get((int)0);		HX_STACK_VAR(_ax_x,"_ax_x");
												HX_STACK_LINE(261)
												Float _ax_y = te->__get((int)1);		HX_STACK_VAR(_ax_y,"_ax_y");
												HX_STACK_LINE(261)
												Float _ax_z = te->__get((int)2);		HX_STACK_VAR(_ax_z,"_ax_z");
												HX_STACK_LINE(261)
												Float _ay_x = te->__get((int)4);		HX_STACK_VAR(_ay_x,"_ay_x");
												HX_STACK_LINE(261)
												Float _ay_y = te->__get((int)5);		HX_STACK_VAR(_ay_y,"_ay_y");
												HX_STACK_LINE(261)
												Float _ay_z = te->__get((int)6);		HX_STACK_VAR(_ay_z,"_ay_z");
												HX_STACK_LINE(261)
												Float _az_x = te->__get((int)8);		HX_STACK_VAR(_az_x,"_az_x");
												HX_STACK_LINE(261)
												Float _az_y = te->__get((int)9);		HX_STACK_VAR(_az_y,"_az_y");
												HX_STACK_LINE(261)
												Float _az_z = te->__get((int)10);		HX_STACK_VAR(_az_z,"_az_z");
												HX_STACK_LINE(261)
												Float _ax_length = ::Math_obj::sqrt((((_ax_x * _ax_x) + (_ax_y * _ax_y)) + (_ax_z * _ax_z)));		HX_STACK_VAR(_ax_length,"_ax_length");
												HX_STACK_LINE(261)
												Float _ay_length = ::Math_obj::sqrt((((_ay_x * _ay_x) + (_ay_y * _ay_y)) + (_ay_z * _ay_z)));		HX_STACK_VAR(_ay_length,"_ay_length");
												HX_STACK_LINE(261)
												Float _az_length = ::Math_obj::sqrt((((_az_x * _az_x) + (_az_y * _az_y)) + (_az_z * _az_z)));		HX_STACK_VAR(_az_length,"_az_length");
												HX_STACK_LINE(261)
												if (((_quaternion == null()))){
													HX_STACK_LINE(261)
													::phoenix::Quaternion _g9 = ::phoenix::Quaternion_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(_g9,"_g9");
													HX_STACK_LINE(261)
													_quaternion = _g9;
												}
												HX_STACK_LINE(261)
												if (((_position == null()))){
													HX_STACK_LINE(261)
													::phoenix::Vector _g10 = ::phoenix::Vector_obj::__new(te->__get((int)12),te->__get((int)13),te->__get((int)14),null());		HX_STACK_VAR(_g10,"_g10");
													HX_STACK_LINE(261)
													_position = _g10;
												}
												else{
													HX_STACK_LINE(261)
													{
														HX_STACK_LINE(261)
														Float _x = te->__get((int)12);		HX_STACK_VAR(_x,"_x");
														HX_STACK_LINE(261)
														_position->x = _x;
														HX_STACK_LINE(261)
														if ((_position->_construct)){
															HX_STACK_LINE(261)
															_position->x;
														}
														else{
															HX_STACK_LINE(261)
															if (((bool((_position->listen_x != null())) && bool(!(_position->ignore_listeners))))){
																HX_STACK_LINE(261)
																_position->listen_x(_x);
															}
															HX_STACK_LINE(261)
															_position->x;
														}
													}
													HX_STACK_LINE(261)
													{
														HX_STACK_LINE(261)
														Float _y = te->__get((int)13);		HX_STACK_VAR(_y,"_y");
														HX_STACK_LINE(261)
														_position->y = _y;
														HX_STACK_LINE(261)
														if ((_position->_construct)){
															HX_STACK_LINE(261)
															_position->y;
														}
														else{
															HX_STACK_LINE(261)
															if (((bool((_position->listen_y != null())) && bool(!(_position->ignore_listeners))))){
																HX_STACK_LINE(261)
																_position->listen_y(_y);
															}
															HX_STACK_LINE(261)
															_position->y;
														}
													}
													HX_STACK_LINE(261)
													{
														HX_STACK_LINE(261)
														Float _z = te->__get((int)14);		HX_STACK_VAR(_z,"_z");
														HX_STACK_LINE(261)
														_position->z = _z;
														HX_STACK_LINE(261)
														if ((_position->_construct)){
															HX_STACK_LINE(261)
															_position->z;
														}
														else{
															HX_STACK_LINE(261)
															if (((bool((_position->listen_z != null())) && bool(!(_position->ignore_listeners))))){
																HX_STACK_LINE(261)
																_position->listen_z(_z);
															}
															HX_STACK_LINE(261)
															_position->z;
														}
													}
												}
												HX_STACK_LINE(261)
												if (((_scale == null()))){
													HX_STACK_LINE(261)
													::phoenix::Vector _g11 = ::phoenix::Vector_obj::__new(_ax_length,_ay_length,_az_length,null());		HX_STACK_VAR(_g11,"_g11");
													HX_STACK_LINE(261)
													_scale = _g11;
												}
												else{
													HX_STACK_LINE(261)
													{
														HX_STACK_LINE(261)
														_scale->x = _ax_length;
														HX_STACK_LINE(261)
														if ((_scale->_construct)){
															HX_STACK_LINE(261)
															_scale->x;
														}
														else{
															HX_STACK_LINE(261)
															if (((bool((_scale->listen_x != null())) && bool(!(_scale->ignore_listeners))))){
																HX_STACK_LINE(261)
																_scale->listen_x(_ax_length);
															}
															HX_STACK_LINE(261)
															_scale->x;
														}
													}
													HX_STACK_LINE(261)
													{
														HX_STACK_LINE(261)
														_scale->y = _ay_length;
														HX_STACK_LINE(261)
														if ((_scale->_construct)){
															HX_STACK_LINE(261)
															_scale->y;
														}
														else{
															HX_STACK_LINE(261)
															if (((bool((_scale->listen_y != null())) && bool(!(_scale->ignore_listeners))))){
																HX_STACK_LINE(261)
																_scale->listen_y(_ay_length);
															}
															HX_STACK_LINE(261)
															_scale->y;
														}
													}
													HX_STACK_LINE(261)
													{
														HX_STACK_LINE(261)
														_scale->z = _az_length;
														HX_STACK_LINE(261)
														if ((_scale->_construct)){
															HX_STACK_LINE(261)
															_scale->z;
														}
														else{
															HX_STACK_LINE(261)
															if (((bool((_scale->listen_z != null())) && bool(!(_scale->ignore_listeners))))){
																HX_STACK_LINE(261)
																_scale->listen_z(_az_length);
															}
															HX_STACK_LINE(261)
															_scale->z;
														}
													}
												}
												HX_STACK_LINE(261)
												Array< Float > _g12 = _this4->elements->concat(Array_obj< Float >::__new());		HX_STACK_VAR(_g12,"_g12");
												HX_STACK_LINE(261)
												matrix->elements = _g12;
												HX_STACK_LINE(261)
												Array< Float > me = matrix->elements;		HX_STACK_VAR(me,"me");
												HX_STACK_LINE(261)
												hx::DivEq(me[(int)0],_ax_length);
												HX_STACK_LINE(261)
												hx::DivEq(me[(int)1],_ax_length);
												HX_STACK_LINE(261)
												hx::DivEq(me[(int)2],_ax_length);
												HX_STACK_LINE(261)
												hx::DivEq(me[(int)4],_ay_length);
												HX_STACK_LINE(261)
												hx::DivEq(me[(int)5],_ay_length);
												HX_STACK_LINE(261)
												hx::DivEq(me[(int)6],_ay_length);
												HX_STACK_LINE(261)
												hx::DivEq(me[(int)8],_az_length);
												HX_STACK_LINE(261)
												hx::DivEq(me[(int)9],_az_length);
												HX_STACK_LINE(261)
												hx::DivEq(me[(int)10],_az_length);
												HX_STACK_LINE(261)
												_quaternion->setFromRotationMatrix(matrix);
												HX_STACK_LINE(261)
												if (((_this4->_transform == null()))){
													HX_STACK_LINE(261)
													::phoenix::MatrixTransform _g13 = ::phoenix::MatrixTransform_obj::__new(_position,_quaternion,_scale);		HX_STACK_VAR(_g13,"_g13");
													HX_STACK_LINE(261)
													_this4->_transform = _g13;
												}
												else{
													HX_STACK_LINE(261)
													_this4->_transform->pos = _position;
													HX_STACK_LINE(261)
													_this4->_transform->rotation = _quaternion;
													HX_STACK_LINE(261)
													_this4->_transform->scale = _scale;
												}
												HX_STACK_LINE(261)
												_transform = _this4->_transform;
											}
											HX_STACK_LINE(261)
											{
												HX_STACK_LINE(261)
												::phoenix::Vector _p = _transform->pos;		HX_STACK_VAR(_p,"_p");
												HX_STACK_LINE(261)
												_this3->pos = _p;
												HX_STACK_LINE(261)
												if (((_p != null()))){
													HX_STACK_LINE(261)
													::phoenix::Vector_obj::Listen(_this3->pos,_this3->_pos_change_dyn());
													HX_STACK_LINE(261)
													if (((bool((_this3->pos_changed != null())) && bool(!(_this3->ignore_listeners))))){
														HX_STACK_LINE(261)
														_this3->pos_changed(_this3->pos);
													}
												}
												HX_STACK_LINE(261)
												_this3->pos;
											}
											HX_STACK_LINE(261)
											{
												HX_STACK_LINE(261)
												::phoenix::Quaternion _r = _transform->rotation;		HX_STACK_VAR(_r,"_r");
												HX_STACK_LINE(261)
												_this3->rotation = _r;
												HX_STACK_LINE(261)
												if (((_r != null()))){
													HX_STACK_LINE(261)
													{
														HX_STACK_LINE(261)
														::phoenix::Quaternion _q = _this3->rotation;		HX_STACK_VAR(_q,"_q");
														HX_STACK_LINE(261)
														Dynamic listener = _this3->_rotation_change_dyn();		HX_STACK_VAR(listener,"listener");
														HX_STACK_LINE(261)
														_q->listen_x = listener;
														HX_STACK_LINE(261)
														_q->listen_y = listener;
														HX_STACK_LINE(261)
														_q->listen_z = listener;
														HX_STACK_LINE(261)
														_q->listen_w = listener;
													}
													HX_STACK_LINE(261)
													if (((bool((_this3->rotation_changed != null())) && bool(!(_this3->ignore_listeners))))){
														HX_STACK_LINE(261)
														_this3->rotation_changed(_this3->rotation);
													}
												}
												HX_STACK_LINE(261)
												_this3->rotation;
											}
											HX_STACK_LINE(261)
											{
												HX_STACK_LINE(261)
												::phoenix::Vector _s = _transform->scale;		HX_STACK_VAR(_s,"_s");
												HX_STACK_LINE(261)
												_this3->scale = _s;
												HX_STACK_LINE(261)
												if (((_s != null()))){
													HX_STACK_LINE(261)
													::phoenix::Vector_obj::Listen(_this3->scale,_this3->_scale_change_dyn());
													HX_STACK_LINE(261)
													if (((bool((_this3->scale_changed != null())) && bool(!(_this3->ignore_listeners))))){
														HX_STACK_LINE(261)
														_this3->scale_changed(_this3->scale);
													}
												}
												HX_STACK_LINE(261)
												_this3->scale;
											}
										}
										HX_STACK_LINE(261)
										_this3;
									}
									HX_STACK_LINE(261)
									{
										HX_STACK_LINE(261)
										_this2->dirty = false;
										HX_STACK_LINE(261)
										if (((bool((bool((bool(_this2->dirty) && bool(!(_this2->_setup)))) && bool((_this2->_dirty_handlers != null())))) && bool((_this2->_dirty_handlers->__Field(HX_CSTRING("length"),true) > (int)0))))){
											HX_STACK_LINE(261)
											int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
											HX_STACK_LINE(261)
											Dynamic _g11 = _this2->_dirty_handlers;		HX_STACK_VAR(_g11,"_g11");
											HX_STACK_LINE(261)
											while((true)){
												HX_STACK_LINE(261)
												if ((!(((_g2 < _g11->__Field(HX_CSTRING("length"),true)))))){
													HX_STACK_LINE(261)
													break;
												}
												HX_STACK_LINE(261)
												Dynamic _handler = _g11->__GetItem(_g2);		HX_STACK_VAR(_handler,"_handler");
												HX_STACK_LINE(261)
												++(_g2);
												HX_STACK_LINE(261)
												if (((_handler != null()))){
													HX_STACK_LINE(261)
													_handler(_this2).Cast< Void >();
												}
											}
										}
										HX_STACK_LINE(261)
										_this2->dirty;
									}
									HX_STACK_LINE(261)
									_this2->_cleaning = false;
									HX_STACK_LINE(261)
									if (((bool((_this2->_clean_handlers != null())) && bool((_this2->_clean_handlers->__Field(HX_CSTRING("length"),true) > (int)0))))){
										HX_STACK_LINE(261)
										int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
										HX_STACK_LINE(261)
										Dynamic _g11 = _this2->_clean_handlers;		HX_STACK_VAR(_g11,"_g11");
										HX_STACK_LINE(261)
										while((true)){
											HX_STACK_LINE(261)
											if ((!(((_g2 < _g11->__Field(HX_CSTRING("length"),true)))))){
												HX_STACK_LINE(261)
												break;
											}
											HX_STACK_LINE(261)
											Dynamic _handler = _g11->__GetItem(_g2);		HX_STACK_VAR(_handler,"_handler");
											HX_STACK_LINE(261)
											++(_g2);
											HX_STACK_LINE(261)
											if (((_handler != null()))){
												HX_STACK_LINE(261)
												_handler(_this2).Cast< Void >();
											}
										}
									}
								}
							}
						}
						HX_STACK_LINE(261)
						_this1 = _this2->world;
					}
					HX_STACK_LINE(261)
					_m = _this1->matrix;
				}
				HX_STACK_LINE(261)
				Float _x = _this->x;		HX_STACK_VAR(_x,"_x");
				HX_STACK_LINE(261)
				Float _y = _this->y;		HX_STACK_VAR(_y,"_y");
				HX_STACK_LINE(261)
				Float _z = _this->z;		HX_STACK_VAR(_z,"_z");
				HX_STACK_LINE(261)
				Array< Float > e = _m->elements;		HX_STACK_VAR(e,"e");
				HX_STACK_LINE(261)
				{
					HX_STACK_LINE(261)
					Float _x1 = ((((e->__get((int)0) * _x) + (e->__get((int)4) * _y)) + (e->__get((int)8) * _z)) + e->__get((int)12));		HX_STACK_VAR(_x1,"_x1");
					HX_STACK_LINE(261)
					Float _y1 = ((((e->__get((int)1) * _x) + (e->__get((int)5) * _y)) + (e->__get((int)9) * _z)) + e->__get((int)13));		HX_STACK_VAR(_y1,"_y1");
					HX_STACK_LINE(261)
					Float _z1 = ((((e->__get((int)2) * _x) + (e->__get((int)6) * _y)) + (e->__get((int)10) * _z)) + e->__get((int)14));		HX_STACK_VAR(_z1,"_z1");
					HX_STACK_LINE(261)
					bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
					HX_STACK_LINE(261)
					_this->ignore_listeners = true;
					HX_STACK_LINE(261)
					{
						HX_STACK_LINE(261)
						_this->x = _x1;
						HX_STACK_LINE(261)
						if ((_this->_construct)){
							HX_STACK_LINE(261)
							_this->x;
						}
						else{
							HX_STACK_LINE(261)
							if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
								HX_STACK_LINE(261)
								_this->listen_x(_x1);
							}
							HX_STACK_LINE(261)
							_this->x;
						}
					}
					HX_STACK_LINE(261)
					{
						HX_STACK_LINE(261)
						_this->y = _y1;
						HX_STACK_LINE(261)
						if ((_this->_construct)){
							HX_STACK_LINE(261)
							_this->y;
						}
						else{
							HX_STACK_LINE(261)
							if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
								HX_STACK_LINE(261)
								_this->listen_y(_y1);
							}
							HX_STACK_LINE(261)
							_this->y;
						}
					}
					HX_STACK_LINE(261)
					{
						HX_STACK_LINE(261)
						_this->z = _z1;
						HX_STACK_LINE(261)
						if ((_this->_construct)){
							HX_STACK_LINE(261)
							_this->z;
						}
						else{
							HX_STACK_LINE(261)
							if (((bool((_this->listen_z != null())) && bool(!(_this->ignore_listeners))))){
								HX_STACK_LINE(261)
								_this->listen_z(_z1);
							}
							HX_STACK_LINE(261)
							_this->z;
						}
					}
					HX_STACK_LINE(261)
					_this->ignore_listeners = prev;
					HX_STACK_LINE(261)
					if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
						HX_STACK_LINE(261)
						_this->listen_x(_this->x);
					}
					HX_STACK_LINE(261)
					if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
						HX_STACK_LINE(261)
						_this->listen_y(_this->y);
					}
					HX_STACK_LINE(261)
					if (((bool((_this->listen_z != null())) && bool(!(_this->ignore_listeners))))){
						HX_STACK_LINE(261)
						_this->listen_z(_this->z);
					}
					HX_STACK_LINE(261)
					_this;
				}
				HX_STACK_LINE(261)
				_this;
			}
			HX_STACK_LINE(266)
			::__hxcpp_memory_set_float(vertlist->bytes,(((int(vert_index) << int((int)2))) + vertlist->byteOffset),this->_final_vert_position->x);
			HX_STACK_LINE(267)
			::__hxcpp_memory_set_float(vertlist->bytes,(((int((vert_index + (int)1)) << int((int)2))) + vertlist->byteOffset),this->_final_vert_position->y);
			HX_STACK_LINE(268)
			::__hxcpp_memory_set_float(vertlist->bytes,(((int((vert_index + (int)2)) << int((int)2))) + vertlist->byteOffset),this->_final_vert_position->z);
			HX_STACK_LINE(269)
			::__hxcpp_memory_set_float(vertlist->bytes,(((int((vert_index + (int)3)) << int((int)2))) + vertlist->byteOffset),this->_final_vert_position->w);
			HX_STACK_LINE(277)
			hx::AddEq(vert_index,(int)4);
			HX_STACK_LINE(281)
			::__hxcpp_memory_set_float(tcoordlist->bytes,(((int(tcoord_index) << int((int)2))) + tcoordlist->byteOffset),v->uv->uv0->u);
			HX_STACK_LINE(282)
			::__hxcpp_memory_set_float(tcoordlist->bytes,(((int((tcoord_index + (int)1)) << int((int)2))) + tcoordlist->byteOffset),v->uv->uv0->v);
			HX_STACK_LINE(283)
			::__hxcpp_memory_set_float(tcoordlist->bytes,(((int((tcoord_index + (int)2)) << int((int)2))) + tcoordlist->byteOffset),v->uv->uv0->w);
			HX_STACK_LINE(284)
			::__hxcpp_memory_set_float(tcoordlist->bytes,(((int((tcoord_index + (int)3)) << int((int)2))) + tcoordlist->byteOffset),v->uv->uv0->t);
			HX_STACK_LINE(292)
			hx::AddEq(tcoord_index,(int)4);
			HX_STACK_LINE(297)
			::__hxcpp_memory_set_float(colorlist->bytes,(((int(color_index) << int((int)2))) + colorlist->byteOffset),v->color->r);
			HX_STACK_LINE(298)
			::__hxcpp_memory_set_float(colorlist->bytes,(((int((color_index + (int)1)) << int((int)2))) + colorlist->byteOffset),v->color->g);
			HX_STACK_LINE(299)
			::__hxcpp_memory_set_float(colorlist->bytes,(((int((color_index + (int)2)) << int((int)2))) + colorlist->byteOffset),v->color->b);
			HX_STACK_LINE(300)
			::__hxcpp_memory_set_float(colorlist->bytes,(((int((color_index + (int)3)) << int((int)2))) + colorlist->byteOffset),v->color->a);
			HX_STACK_LINE(309)
			hx::AddEq(color_index,(int)4);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC8(Geometry_obj,batch,(void))

Void Geometry_obj::batch_into_arrays( Array< Float > vertlist,Array< Float > tcoordlist,Array< Float > colorlist,Array< Float > normallist){
{
		HX_STACK_FRAME("phoenix.geometry.Geometry","batch_into_arrays",0xe545c1b5,"phoenix.geometry.Geometry.batch_into_arrays","phoenix/geometry/Geometry.hx",326,0xdab136cf)
		HX_STACK_THIS(this)
		HX_STACK_ARG(vertlist,"vertlist")
		HX_STACK_ARG(tcoordlist,"tcoordlist")
		HX_STACK_ARG(colorlist,"colorlist")
		HX_STACK_ARG(normallist,"normallist")
		HX_STACK_LINE(326)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(326)
		Array< ::Dynamic > _g1 = this->vertices;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(326)
		while((true)){
			HX_STACK_LINE(326)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(326)
				break;
			}
			HX_STACK_LINE(326)
			::phoenix::geometry::Vertex v = _g1->__get(_g).StaticCast< ::phoenix::geometry::Vertex >();		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(326)
			++(_g);
			HX_STACK_LINE(329)
			{
				HX_STACK_LINE(329)
				::phoenix::Vector _this = this->_final_vert_position;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(329)
				Float _x = v->pos->x;		HX_STACK_VAR(_x,"_x");
				HX_STACK_LINE(329)
				Float _y = v->pos->y;		HX_STACK_VAR(_y,"_y");
				HX_STACK_LINE(329)
				Float _z = v->pos->z;		HX_STACK_VAR(_z,"_z");
				HX_STACK_LINE(329)
				bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
				HX_STACK_LINE(329)
				_this->ignore_listeners = true;
				HX_STACK_LINE(329)
				{
					HX_STACK_LINE(329)
					_this->x = _x;
					HX_STACK_LINE(329)
					if ((_this->_construct)){
						HX_STACK_LINE(329)
						_this->x;
					}
					else{
						HX_STACK_LINE(329)
						if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
							HX_STACK_LINE(329)
							_this->listen_x(_x);
						}
						HX_STACK_LINE(329)
						_this->x;
					}
				}
				HX_STACK_LINE(329)
				{
					HX_STACK_LINE(329)
					_this->y = _y;
					HX_STACK_LINE(329)
					if ((_this->_construct)){
						HX_STACK_LINE(329)
						_this->y;
					}
					else{
						HX_STACK_LINE(329)
						if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
							HX_STACK_LINE(329)
							_this->listen_y(_y);
						}
						HX_STACK_LINE(329)
						_this->y;
					}
				}
				HX_STACK_LINE(329)
				{
					HX_STACK_LINE(329)
					_this->z = _z;
					HX_STACK_LINE(329)
					if ((_this->_construct)){
						HX_STACK_LINE(329)
						_this->z;
					}
					else{
						HX_STACK_LINE(329)
						if (((bool((_this->listen_z != null())) && bool(!(_this->ignore_listeners))))){
							HX_STACK_LINE(329)
							_this->listen_z(_z);
						}
						HX_STACK_LINE(329)
						_this->z;
					}
				}
				HX_STACK_LINE(329)
				_this->w = v->pos->w;
				HX_STACK_LINE(329)
				_this->ignore_listeners = prev;
				HX_STACK_LINE(329)
				if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
					HX_STACK_LINE(329)
					_this->listen_x(_this->x);
				}
				HX_STACK_LINE(329)
				if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
					HX_STACK_LINE(329)
					_this->listen_y(_this->y);
				}
				HX_STACK_LINE(329)
				if (((bool((_this->listen_z != null())) && bool(!(_this->ignore_listeners))))){
					HX_STACK_LINE(329)
					_this->listen_z(_this->z);
				}
				HX_STACK_LINE(329)
				_this;
			}
			HX_STACK_LINE(331)
			{
				HX_STACK_LINE(331)
				::phoenix::Vector _this = this->_final_vert_position;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(331)
				::phoenix::Matrix _m;		HX_STACK_VAR(_m,"_m");
				HX_STACK_LINE(331)
				{
					HX_STACK_LINE(331)
					::phoenix::Spatial _this1;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(331)
					{
						HX_STACK_LINE(331)
						::phoenix::Transform _this2 = this->transform;		HX_STACK_VAR(_this2,"_this2");
						HX_STACK_LINE(331)
						if ((!(_this2->_destroying))){
							HX_STACK_LINE(331)
							if (((_this2->parent != null()))){
								HX_STACK_LINE(331)
								if ((_this2->parent->dirty)){
									HX_STACK_LINE(331)
									::phoenix::Transform _this3 = _this2->parent;		HX_STACK_VAR(_this3,"_this3");
									HX_STACK_LINE(331)
									if ((!(_this3->dirty))){
										HX_STACK_LINE(331)
										Dynamic();
									}
									else{
										HX_STACK_LINE(331)
										_this3->_cleaning = true;
										HX_STACK_LINE(331)
										{
											HX_STACK_LINE(331)
											::phoenix::Matrix _this4 = _this3->_pos_matrix;		HX_STACK_VAR(_this4,"_this4");
											HX_STACK_LINE(331)
											{
												HX_STACK_LINE(331)
												Array< Float > e = _this4->elements;		HX_STACK_VAR(e,"e");
												HX_STACK_LINE(331)
												e[(int)0] = (int)1;
												HX_STACK_LINE(331)
												e[(int)4] = (int)0;
												HX_STACK_LINE(331)
												e[(int)8] = (int)0;
												HX_STACK_LINE(331)
												e[(int)12] = _this3->local->pos->x;
												HX_STACK_LINE(331)
												e[(int)1] = (int)0;
												HX_STACK_LINE(331)
												e[(int)5] = (int)1;
												HX_STACK_LINE(331)
												e[(int)9] = (int)0;
												HX_STACK_LINE(331)
												e[(int)13] = _this3->local->pos->y;
												HX_STACK_LINE(331)
												e[(int)2] = (int)0;
												HX_STACK_LINE(331)
												e[(int)6] = (int)0;
												HX_STACK_LINE(331)
												e[(int)10] = (int)1;
												HX_STACK_LINE(331)
												e[(int)14] = _this3->local->pos->z;
												HX_STACK_LINE(331)
												e[(int)3] = (int)0;
												HX_STACK_LINE(331)
												e[(int)7] = (int)0;
												HX_STACK_LINE(331)
												e[(int)11] = (int)0;
												HX_STACK_LINE(331)
												e[(int)15] = (int)1;
												HX_STACK_LINE(331)
												_this4;
											}
											HX_STACK_LINE(331)
											_this4;
										}
										HX_STACK_LINE(331)
										{
											HX_STACK_LINE(331)
											::phoenix::Matrix _this4 = _this3->_rotation_matrix;		HX_STACK_VAR(_this4,"_this4");
											HX_STACK_LINE(331)
											::phoenix::Quaternion q = _this3->local->rotation;		HX_STACK_VAR(q,"q");
											HX_STACK_LINE(331)
											Array< Float > te = _this4->elements;		HX_STACK_VAR(te,"te");
											HX_STACK_LINE(331)
											Float x2 = (q->x + q->x);		HX_STACK_VAR(x2,"x2");
											HX_STACK_LINE(331)
											Float y2 = (q->y + q->y);		HX_STACK_VAR(y2,"y2");
											HX_STACK_LINE(331)
											Float z2 = (q->z + q->z);		HX_STACK_VAR(z2,"z2");
											HX_STACK_LINE(331)
											Float xx = (q->x * x2);		HX_STACK_VAR(xx,"xx");
											HX_STACK_LINE(331)
											Float xy = (q->x * y2);		HX_STACK_VAR(xy,"xy");
											HX_STACK_LINE(331)
											Float xz = (q->x * z2);		HX_STACK_VAR(xz,"xz");
											HX_STACK_LINE(331)
											Float yy = (q->y * y2);		HX_STACK_VAR(yy,"yy");
											HX_STACK_LINE(331)
											Float yz = (q->y * z2);		HX_STACK_VAR(yz,"yz");
											HX_STACK_LINE(331)
											Float zz = (q->z * z2);		HX_STACK_VAR(zz,"zz");
											HX_STACK_LINE(331)
											Float wx = (q->w * x2);		HX_STACK_VAR(wx,"wx");
											HX_STACK_LINE(331)
											Float wy = (q->w * y2);		HX_STACK_VAR(wy,"wy");
											HX_STACK_LINE(331)
											Float wz = (q->w * z2);		HX_STACK_VAR(wz,"wz");
											HX_STACK_LINE(331)
											te[(int)0] = ((int)1 - ((yy + zz)));
											HX_STACK_LINE(331)
											te[(int)4] = (xy - wz);
											HX_STACK_LINE(331)
											te[(int)8] = (xz + wy);
											HX_STACK_LINE(331)
											te[(int)1] = (xy + wz);
											HX_STACK_LINE(331)
											te[(int)5] = ((int)1 - ((xx + zz)));
											HX_STACK_LINE(331)
											te[(int)9] = (yz - wx);
											HX_STACK_LINE(331)
											te[(int)2] = (xz - wy);
											HX_STACK_LINE(331)
											te[(int)6] = (yz + wx);
											HX_STACK_LINE(331)
											te[(int)10] = ((int)1 - ((xx + yy)));
											HX_STACK_LINE(331)
											te[(int)3] = (int)0;
											HX_STACK_LINE(331)
											te[(int)7] = (int)0;
											HX_STACK_LINE(331)
											te[(int)11] = (int)0;
											HX_STACK_LINE(331)
											te[(int)12] = (int)0;
											HX_STACK_LINE(331)
											te[(int)13] = (int)0;
											HX_STACK_LINE(331)
											te[(int)14] = (int)0;
											HX_STACK_LINE(331)
											te[(int)15] = (int)1;
											HX_STACK_LINE(331)
											_this4;
										}
										HX_STACK_LINE(331)
										{
											HX_STACK_LINE(331)
											::phoenix::Matrix _this4 = _this3->_origin_undo_matrix;		HX_STACK_VAR(_this4,"_this4");
											HX_STACK_LINE(331)
											{
												HX_STACK_LINE(331)
												Array< Float > e = _this4->elements;		HX_STACK_VAR(e,"e");
												HX_STACK_LINE(331)
												e[(int)0] = (int)1;
												HX_STACK_LINE(331)
												e[(int)4] = (int)0;
												HX_STACK_LINE(331)
												e[(int)8] = (int)0;
												HX_STACK_LINE(331)
												e[(int)12] = -(_this3->origin->x);
												HX_STACK_LINE(331)
												e[(int)1] = (int)0;
												HX_STACK_LINE(331)
												e[(int)5] = (int)1;
												HX_STACK_LINE(331)
												e[(int)9] = (int)0;
												HX_STACK_LINE(331)
												e[(int)13] = -(_this3->origin->y);
												HX_STACK_LINE(331)
												e[(int)2] = (int)0;
												HX_STACK_LINE(331)
												e[(int)6] = (int)0;
												HX_STACK_LINE(331)
												e[(int)10] = (int)1;
												HX_STACK_LINE(331)
												e[(int)14] = -(_this3->origin->z);
												HX_STACK_LINE(331)
												e[(int)3] = (int)0;
												HX_STACK_LINE(331)
												e[(int)7] = (int)0;
												HX_STACK_LINE(331)
												e[(int)11] = (int)0;
												HX_STACK_LINE(331)
												e[(int)15] = (int)1;
												HX_STACK_LINE(331)
												_this4;
											}
											HX_STACK_LINE(331)
											_this4;
										}
										HX_STACK_LINE(331)
										{
											HX_STACK_LINE(331)
											::phoenix::Matrix _this4 = _this3->local->matrix;		HX_STACK_VAR(_this4,"_this4");
											HX_STACK_LINE(331)
											{
												HX_STACK_LINE(331)
												Array< Float > e = _this4->elements;		HX_STACK_VAR(e,"e");
												HX_STACK_LINE(331)
												e[(int)0] = (int)1;
												HX_STACK_LINE(331)
												e[(int)4] = (int)0;
												HX_STACK_LINE(331)
												e[(int)8] = (int)0;
												HX_STACK_LINE(331)
												e[(int)12] = _this3->origin->x;
												HX_STACK_LINE(331)
												e[(int)1] = (int)0;
												HX_STACK_LINE(331)
												e[(int)5] = (int)1;
												HX_STACK_LINE(331)
												e[(int)9] = (int)0;
												HX_STACK_LINE(331)
												e[(int)13] = _this3->origin->y;
												HX_STACK_LINE(331)
												e[(int)2] = (int)0;
												HX_STACK_LINE(331)
												e[(int)6] = (int)0;
												HX_STACK_LINE(331)
												e[(int)10] = (int)1;
												HX_STACK_LINE(331)
												e[(int)14] = _this3->origin->z;
												HX_STACK_LINE(331)
												e[(int)3] = (int)0;
												HX_STACK_LINE(331)
												e[(int)7] = (int)0;
												HX_STACK_LINE(331)
												e[(int)11] = (int)0;
												HX_STACK_LINE(331)
												e[(int)15] = (int)1;
												HX_STACK_LINE(331)
												_this4;
											}
											HX_STACK_LINE(331)
											_this4;
										}
										HX_STACK_LINE(331)
										{
											HX_STACK_LINE(331)
											::phoenix::Matrix _this4 = _this3->local->matrix;		HX_STACK_VAR(_this4,"_this4");
											HX_STACK_LINE(331)
											::phoenix::Vector _v = _this3->local->scale;		HX_STACK_VAR(_v,"_v");
											HX_STACK_LINE(331)
											Array< Float > te = _this4->elements;		HX_STACK_VAR(te,"te");
											HX_STACK_LINE(331)
											Float _x = _v->x;		HX_STACK_VAR(_x,"_x");
											HX_STACK_LINE(331)
											Float _y = _v->y;		HX_STACK_VAR(_y,"_y");
											HX_STACK_LINE(331)
											Float _z = _v->z;		HX_STACK_VAR(_z,"_z");
											HX_STACK_LINE(331)
											hx::MultEq(te[(int)0],_x);
											HX_STACK_LINE(331)
											hx::MultEq(te[(int)4],_y);
											HX_STACK_LINE(331)
											hx::MultEq(te[(int)8],_z);
											HX_STACK_LINE(331)
											hx::MultEq(te[(int)1],_x);
											HX_STACK_LINE(331)
											hx::MultEq(te[(int)5],_y);
											HX_STACK_LINE(331)
											hx::MultEq(te[(int)9],_z);
											HX_STACK_LINE(331)
											hx::MultEq(te[(int)2],_x);
											HX_STACK_LINE(331)
											hx::MultEq(te[(int)6],_y);
											HX_STACK_LINE(331)
											hx::MultEq(te[(int)10],_z);
											HX_STACK_LINE(331)
											hx::MultEq(te[(int)3],_x);
											HX_STACK_LINE(331)
											hx::MultEq(te[(int)7],_y);
											HX_STACK_LINE(331)
											hx::MultEq(te[(int)11],_z);
											HX_STACK_LINE(331)
											_this4;
										}
										HX_STACK_LINE(331)
										{
											HX_STACK_LINE(331)
											::phoenix::Matrix _this4 = _this3->local->matrix;		HX_STACK_VAR(_this4,"_this4");
											HX_STACK_LINE(331)
											{
												HX_STACK_LINE(331)
												Array< Float > ae = _this4->elements;		HX_STACK_VAR(ae,"ae");
												HX_STACK_LINE(331)
												Array< Float > be = _this3->_rotation_matrix->elements;		HX_STACK_VAR(be,"be");
												HX_STACK_LINE(331)
												Array< Float > te = _this4->elements;		HX_STACK_VAR(te,"te");
												HX_STACK_LINE(331)
												Float a11 = ae->__get((int)0);		HX_STACK_VAR(a11,"a11");
												HX_STACK_LINE(331)
												Float a12 = ae->__get((int)4);		HX_STACK_VAR(a12,"a12");
												HX_STACK_LINE(331)
												Float a13 = ae->__get((int)8);		HX_STACK_VAR(a13,"a13");
												HX_STACK_LINE(331)
												Float a14 = ae->__get((int)12);		HX_STACK_VAR(a14,"a14");
												HX_STACK_LINE(331)
												Float a21 = ae->__get((int)1);		HX_STACK_VAR(a21,"a21");
												HX_STACK_LINE(331)
												Float a22 = ae->__get((int)5);		HX_STACK_VAR(a22,"a22");
												HX_STACK_LINE(331)
												Float a23 = ae->__get((int)9);		HX_STACK_VAR(a23,"a23");
												HX_STACK_LINE(331)
												Float a24 = ae->__get((int)13);		HX_STACK_VAR(a24,"a24");
												HX_STACK_LINE(331)
												Float a31 = ae->__get((int)2);		HX_STACK_VAR(a31,"a31");
												HX_STACK_LINE(331)
												Float a32 = ae->__get((int)6);		HX_STACK_VAR(a32,"a32");
												HX_STACK_LINE(331)
												Float a33 = ae->__get((int)10);		HX_STACK_VAR(a33,"a33");
												HX_STACK_LINE(331)
												Float a34 = ae->__get((int)14);		HX_STACK_VAR(a34,"a34");
												HX_STACK_LINE(331)
												Float a41 = ae->__get((int)3);		HX_STACK_VAR(a41,"a41");
												HX_STACK_LINE(331)
												Float a42 = ae->__get((int)7);		HX_STACK_VAR(a42,"a42");
												HX_STACK_LINE(331)
												Float a43 = ae->__get((int)11);		HX_STACK_VAR(a43,"a43");
												HX_STACK_LINE(331)
												Float a44 = ae->__get((int)15);		HX_STACK_VAR(a44,"a44");
												HX_STACK_LINE(331)
												Float b11 = be->__get((int)0);		HX_STACK_VAR(b11,"b11");
												HX_STACK_LINE(331)
												Float b12 = be->__get((int)4);		HX_STACK_VAR(b12,"b12");
												HX_STACK_LINE(331)
												Float b13 = be->__get((int)8);		HX_STACK_VAR(b13,"b13");
												HX_STACK_LINE(331)
												Float b14 = be->__get((int)12);		HX_STACK_VAR(b14,"b14");
												HX_STACK_LINE(331)
												Float b21 = be->__get((int)1);		HX_STACK_VAR(b21,"b21");
												HX_STACK_LINE(331)
												Float b22 = be->__get((int)5);		HX_STACK_VAR(b22,"b22");
												HX_STACK_LINE(331)
												Float b23 = be->__get((int)9);		HX_STACK_VAR(b23,"b23");
												HX_STACK_LINE(331)
												Float b24 = be->__get((int)13);		HX_STACK_VAR(b24,"b24");
												HX_STACK_LINE(331)
												Float b31 = be->__get((int)2);		HX_STACK_VAR(b31,"b31");
												HX_STACK_LINE(331)
												Float b32 = be->__get((int)6);		HX_STACK_VAR(b32,"b32");
												HX_STACK_LINE(331)
												Float b33 = be->__get((int)10);		HX_STACK_VAR(b33,"b33");
												HX_STACK_LINE(331)
												Float b34 = be->__get((int)14);		HX_STACK_VAR(b34,"b34");
												HX_STACK_LINE(331)
												Float b41 = be->__get((int)3);		HX_STACK_VAR(b41,"b41");
												HX_STACK_LINE(331)
												Float b42 = be->__get((int)7);		HX_STACK_VAR(b42,"b42");
												HX_STACK_LINE(331)
												Float b43 = be->__get((int)11);		HX_STACK_VAR(b43,"b43");
												HX_STACK_LINE(331)
												Float b44 = be->__get((int)15);		HX_STACK_VAR(b44,"b44");
												HX_STACK_LINE(331)
												te[(int)0] = ((((a11 * b11) + (a12 * b21)) + (a13 * b31)) + (a14 * b41));
												HX_STACK_LINE(331)
												te[(int)4] = ((((a11 * b12) + (a12 * b22)) + (a13 * b32)) + (a14 * b42));
												HX_STACK_LINE(331)
												te[(int)8] = ((((a11 * b13) + (a12 * b23)) + (a13 * b33)) + (a14 * b43));
												HX_STACK_LINE(331)
												te[(int)12] = ((((a11 * b14) + (a12 * b24)) + (a13 * b34)) + (a14 * b44));
												HX_STACK_LINE(331)
												te[(int)1] = ((((a21 * b11) + (a22 * b21)) + (a23 * b31)) + (a24 * b41));
												HX_STACK_LINE(331)
												te[(int)5] = ((((a21 * b12) + (a22 * b22)) + (a23 * b32)) + (a24 * b42));
												HX_STACK_LINE(331)
												te[(int)9] = ((((a21 * b13) + (a22 * b23)) + (a23 * b33)) + (a24 * b43));
												HX_STACK_LINE(331)
												te[(int)13] = ((((a21 * b14) + (a22 * b24)) + (a23 * b34)) + (a24 * b44));
												HX_STACK_LINE(331)
												te[(int)2] = ((((a31 * b11) + (a32 * b21)) + (a33 * b31)) + (a34 * b41));
												HX_STACK_LINE(331)
												te[(int)6] = ((((a31 * b12) + (a32 * b22)) + (a33 * b32)) + (a34 * b42));
												HX_STACK_LINE(331)
												te[(int)10] = ((((a31 * b13) + (a32 * b23)) + (a33 * b33)) + (a34 * b43));
												HX_STACK_LINE(331)
												te[(int)14] = ((((a31 * b14) + (a32 * b24)) + (a33 * b34)) + (a34 * b44));
												HX_STACK_LINE(331)
												te[(int)3] = ((((a41 * b11) + (a42 * b21)) + (a43 * b31)) + (a44 * b41));
												HX_STACK_LINE(331)
												te[(int)7] = ((((a41 * b12) + (a42 * b22)) + (a43 * b32)) + (a44 * b42));
												HX_STACK_LINE(331)
												te[(int)11] = ((((a41 * b13) + (a42 * b23)) + (a43 * b33)) + (a44 * b43));
												HX_STACK_LINE(331)
												te[(int)15] = ((((a41 * b14) + (a42 * b24)) + (a43 * b34)) + (a44 * b44));
												HX_STACK_LINE(331)
												_this4;
											}
										}
										HX_STACK_LINE(331)
										{
											HX_STACK_LINE(331)
											::phoenix::Matrix _this4 = _this3->local->matrix;		HX_STACK_VAR(_this4,"_this4");
											HX_STACK_LINE(331)
											::phoenix::Vector _v = _this3->local->pos;		HX_STACK_VAR(_v,"_v");
											HX_STACK_LINE(331)
											Array< Float > te = _this4->elements;		HX_STACK_VAR(te,"te");
											HX_STACK_LINE(331)
											te[(int)12] = _v->x;
											HX_STACK_LINE(331)
											te[(int)13] = _v->y;
											HX_STACK_LINE(331)
											te[(int)14] = _v->z;
											HX_STACK_LINE(331)
											_this4;
										}
										HX_STACK_LINE(331)
										{
											HX_STACK_LINE(331)
											::phoenix::Matrix _this4 = _this3->local->matrix;		HX_STACK_VAR(_this4,"_this4");
											HX_STACK_LINE(331)
											{
												HX_STACK_LINE(331)
												Array< Float > ae = _this4->elements;		HX_STACK_VAR(ae,"ae");
												HX_STACK_LINE(331)
												Array< Float > be = _this3->_origin_undo_matrix->elements;		HX_STACK_VAR(be,"be");
												HX_STACK_LINE(331)
												Array< Float > te = _this4->elements;		HX_STACK_VAR(te,"te");
												HX_STACK_LINE(331)
												Float a11 = ae->__get((int)0);		HX_STACK_VAR(a11,"a11");
												HX_STACK_LINE(331)
												Float a12 = ae->__get((int)4);		HX_STACK_VAR(a12,"a12");
												HX_STACK_LINE(331)
												Float a13 = ae->__get((int)8);		HX_STACK_VAR(a13,"a13");
												HX_STACK_LINE(331)
												Float a14 = ae->__get((int)12);		HX_STACK_VAR(a14,"a14");
												HX_STACK_LINE(331)
												Float a21 = ae->__get((int)1);		HX_STACK_VAR(a21,"a21");
												HX_STACK_LINE(331)
												Float a22 = ae->__get((int)5);		HX_STACK_VAR(a22,"a22");
												HX_STACK_LINE(331)
												Float a23 = ae->__get((int)9);		HX_STACK_VAR(a23,"a23");
												HX_STACK_LINE(331)
												Float a24 = ae->__get((int)13);		HX_STACK_VAR(a24,"a24");
												HX_STACK_LINE(331)
												Float a31 = ae->__get((int)2);		HX_STACK_VAR(a31,"a31");
												HX_STACK_LINE(331)
												Float a32 = ae->__get((int)6);		HX_STACK_VAR(a32,"a32");
												HX_STACK_LINE(331)
												Float a33 = ae->__get((int)10);		HX_STACK_VAR(a33,"a33");
												HX_STACK_LINE(331)
												Float a34 = ae->__get((int)14);		HX_STACK_VAR(a34,"a34");
												HX_STACK_LINE(331)
												Float a41 = ae->__get((int)3);		HX_STACK_VAR(a41,"a41");
												HX_STACK_LINE(331)
												Float a42 = ae->__get((int)7);		HX_STACK_VAR(a42,"a42");
												HX_STACK_LINE(331)
												Float a43 = ae->__get((int)11);		HX_STACK_VAR(a43,"a43");
												HX_STACK_LINE(331)
												Float a44 = ae->__get((int)15);		HX_STACK_VAR(a44,"a44");
												HX_STACK_LINE(331)
												Float b11 = be->__get((int)0);		HX_STACK_VAR(b11,"b11");
												HX_STACK_LINE(331)
												Float b12 = be->__get((int)4);		HX_STACK_VAR(b12,"b12");
												HX_STACK_LINE(331)
												Float b13 = be->__get((int)8);		HX_STACK_VAR(b13,"b13");
												HX_STACK_LINE(331)
												Float b14 = be->__get((int)12);		HX_STACK_VAR(b14,"b14");
												HX_STACK_LINE(331)
												Float b21 = be->__get((int)1);		HX_STACK_VAR(b21,"b21");
												HX_STACK_LINE(331)
												Float b22 = be->__get((int)5);		HX_STACK_VAR(b22,"b22");
												HX_STACK_LINE(331)
												Float b23 = be->__get((int)9);		HX_STACK_VAR(b23,"b23");
												HX_STACK_LINE(331)
												Float b24 = be->__get((int)13);		HX_STACK_VAR(b24,"b24");
												HX_STACK_LINE(331)
												Float b31 = be->__get((int)2);		HX_STACK_VAR(b31,"b31");
												HX_STACK_LINE(331)
												Float b32 = be->__get((int)6);		HX_STACK_VAR(b32,"b32");
												HX_STACK_LINE(331)
												Float b33 = be->__get((int)10);		HX_STACK_VAR(b33,"b33");
												HX_STACK_LINE(331)
												Float b34 = be->__get((int)14);		HX_STACK_VAR(b34,"b34");
												HX_STACK_LINE(331)
												Float b41 = be->__get((int)3);		HX_STACK_VAR(b41,"b41");
												HX_STACK_LINE(331)
												Float b42 = be->__get((int)7);		HX_STACK_VAR(b42,"b42");
												HX_STACK_LINE(331)
												Float b43 = be->__get((int)11);		HX_STACK_VAR(b43,"b43");
												HX_STACK_LINE(331)
												Float b44 = be->__get((int)15);		HX_STACK_VAR(b44,"b44");
												HX_STACK_LINE(331)
												te[(int)0] = ((((a11 * b11) + (a12 * b21)) + (a13 * b31)) + (a14 * b41));
												HX_STACK_LINE(331)
												te[(int)4] = ((((a11 * b12) + (a12 * b22)) + (a13 * b32)) + (a14 * b42));
												HX_STACK_LINE(331)
												te[(int)8] = ((((a11 * b13) + (a12 * b23)) + (a13 * b33)) + (a14 * b43));
												HX_STACK_LINE(331)
												te[(int)12] = ((((a11 * b14) + (a12 * b24)) + (a13 * b34)) + (a14 * b44));
												HX_STACK_LINE(331)
												te[(int)1] = ((((a21 * b11) + (a22 * b21)) + (a23 * b31)) + (a24 * b41));
												HX_STACK_LINE(331)
												te[(int)5] = ((((a21 * b12) + (a22 * b22)) + (a23 * b32)) + (a24 * b42));
												HX_STACK_LINE(331)
												te[(int)9] = ((((a21 * b13) + (a22 * b23)) + (a23 * b33)) + (a24 * b43));
												HX_STACK_LINE(331)
												te[(int)13] = ((((a21 * b14) + (a22 * b24)) + (a23 * b34)) + (a24 * b44));
												HX_STACK_LINE(331)
												te[(int)2] = ((((a31 * b11) + (a32 * b21)) + (a33 * b31)) + (a34 * b41));
												HX_STACK_LINE(331)
												te[(int)6] = ((((a31 * b12) + (a32 * b22)) + (a33 * b32)) + (a34 * b42));
												HX_STACK_LINE(331)
												te[(int)10] = ((((a31 * b13) + (a32 * b23)) + (a33 * b33)) + (a34 * b43));
												HX_STACK_LINE(331)
												te[(int)14] = ((((a31 * b14) + (a32 * b24)) + (a33 * b34)) + (a34 * b44));
												HX_STACK_LINE(331)
												te[(int)3] = ((((a41 * b11) + (a42 * b21)) + (a43 * b31)) + (a44 * b41));
												HX_STACK_LINE(331)
												te[(int)7] = ((((a41 * b12) + (a42 * b22)) + (a43 * b32)) + (a44 * b42));
												HX_STACK_LINE(331)
												te[(int)11] = ((((a41 * b13) + (a42 * b23)) + (a43 * b33)) + (a44 * b43));
												HX_STACK_LINE(331)
												te[(int)15] = ((((a41 * b14) + (a42 * b24)) + (a43 * b34)) + (a44 * b44));
												HX_STACK_LINE(331)
												_this4;
											}
										}
										HX_STACK_LINE(331)
										if (((_this3->parent != null()))){
											HX_STACK_LINE(331)
											::phoenix::Spatial _this4 = _this3->get_world();		HX_STACK_VAR(_this4,"_this4");
											HX_STACK_LINE(331)
											::phoenix::Matrix _m1;		HX_STACK_VAR(_m1,"_m1");
											HX_STACK_LINE(331)
											{
												HX_STACK_LINE(331)
												::phoenix::Matrix _this5;		HX_STACK_VAR(_this5,"_this5");
												HX_STACK_LINE(331)
												{
													HX_STACK_LINE(331)
													::phoenix::Spatial _this6 = _this3->get_world();		HX_STACK_VAR(_this6,"_this6");
													HX_STACK_LINE(331)
													_this5 = _this6->matrix;
												}
												HX_STACK_LINE(331)
												::phoenix::Matrix _a;		HX_STACK_VAR(_a,"_a");
												HX_STACK_LINE(331)
												{
													HX_STACK_LINE(331)
													::phoenix::Spatial _this6 = _this3->parent->get_world();		HX_STACK_VAR(_this6,"_this6");
													HX_STACK_LINE(331)
													_a = _this6->matrix;
												}
												HX_STACK_LINE(331)
												Array< Float > ae = _a->elements;		HX_STACK_VAR(ae,"ae");
												HX_STACK_LINE(331)
												Array< Float > be = _this3->local->matrix->elements;		HX_STACK_VAR(be,"be");
												HX_STACK_LINE(331)
												Array< Float > te = _this5->elements;		HX_STACK_VAR(te,"te");
												HX_STACK_LINE(331)
												Float a11 = ae->__get((int)0);		HX_STACK_VAR(a11,"a11");
												HX_STACK_LINE(331)
												Float a12 = ae->__get((int)4);		HX_STACK_VAR(a12,"a12");
												HX_STACK_LINE(331)
												Float a13 = ae->__get((int)8);		HX_STACK_VAR(a13,"a13");
												HX_STACK_LINE(331)
												Float a14 = ae->__get((int)12);		HX_STACK_VAR(a14,"a14");
												HX_STACK_LINE(331)
												Float a21 = ae->__get((int)1);		HX_STACK_VAR(a21,"a21");
												HX_STACK_LINE(331)
												Float a22 = ae->__get((int)5);		HX_STACK_VAR(a22,"a22");
												HX_STACK_LINE(331)
												Float a23 = ae->__get((int)9);		HX_STACK_VAR(a23,"a23");
												HX_STACK_LINE(331)
												Float a24 = ae->__get((int)13);		HX_STACK_VAR(a24,"a24");
												HX_STACK_LINE(331)
												Float a31 = ae->__get((int)2);		HX_STACK_VAR(a31,"a31");
												HX_STACK_LINE(331)
												Float a32 = ae->__get((int)6);		HX_STACK_VAR(a32,"a32");
												HX_STACK_LINE(331)
												Float a33 = ae->__get((int)10);		HX_STACK_VAR(a33,"a33");
												HX_STACK_LINE(331)
												Float a34 = ae->__get((int)14);		HX_STACK_VAR(a34,"a34");
												HX_STACK_LINE(331)
												Float a41 = ae->__get((int)3);		HX_STACK_VAR(a41,"a41");
												HX_STACK_LINE(331)
												Float a42 = ae->__get((int)7);		HX_STACK_VAR(a42,"a42");
												HX_STACK_LINE(331)
												Float a43 = ae->__get((int)11);		HX_STACK_VAR(a43,"a43");
												HX_STACK_LINE(331)
												Float a44 = ae->__get((int)15);		HX_STACK_VAR(a44,"a44");
												HX_STACK_LINE(331)
												Float b11 = be->__get((int)0);		HX_STACK_VAR(b11,"b11");
												HX_STACK_LINE(331)
												Float b12 = be->__get((int)4);		HX_STACK_VAR(b12,"b12");
												HX_STACK_LINE(331)
												Float b13 = be->__get((int)8);		HX_STACK_VAR(b13,"b13");
												HX_STACK_LINE(331)
												Float b14 = be->__get((int)12);		HX_STACK_VAR(b14,"b14");
												HX_STACK_LINE(331)
												Float b21 = be->__get((int)1);		HX_STACK_VAR(b21,"b21");
												HX_STACK_LINE(331)
												Float b22 = be->__get((int)5);		HX_STACK_VAR(b22,"b22");
												HX_STACK_LINE(331)
												Float b23 = be->__get((int)9);		HX_STACK_VAR(b23,"b23");
												HX_STACK_LINE(331)
												Float b24 = be->__get((int)13);		HX_STACK_VAR(b24,"b24");
												HX_STACK_LINE(331)
												Float b31 = be->__get((int)2);		HX_STACK_VAR(b31,"b31");
												HX_STACK_LINE(331)
												Float b32 = be->__get((int)6);		HX_STACK_VAR(b32,"b32");
												HX_STACK_LINE(331)
												Float b33 = be->__get((int)10);		HX_STACK_VAR(b33,"b33");
												HX_STACK_LINE(331)
												Float b34 = be->__get((int)14);		HX_STACK_VAR(b34,"b34");
												HX_STACK_LINE(331)
												Float b41 = be->__get((int)3);		HX_STACK_VAR(b41,"b41");
												HX_STACK_LINE(331)
												Float b42 = be->__get((int)7);		HX_STACK_VAR(b42,"b42");
												HX_STACK_LINE(331)
												Float b43 = be->__get((int)11);		HX_STACK_VAR(b43,"b43");
												HX_STACK_LINE(331)
												Float b44 = be->__get((int)15);		HX_STACK_VAR(b44,"b44");
												HX_STACK_LINE(331)
												te[(int)0] = ((((a11 * b11) + (a12 * b21)) + (a13 * b31)) + (a14 * b41));
												HX_STACK_LINE(331)
												te[(int)4] = ((((a11 * b12) + (a12 * b22)) + (a13 * b32)) + (a14 * b42));
												HX_STACK_LINE(331)
												te[(int)8] = ((((a11 * b13) + (a12 * b23)) + (a13 * b33)) + (a14 * b43));
												HX_STACK_LINE(331)
												te[(int)12] = ((((a11 * b14) + (a12 * b24)) + (a13 * b34)) + (a14 * b44));
												HX_STACK_LINE(331)
												te[(int)1] = ((((a21 * b11) + (a22 * b21)) + (a23 * b31)) + (a24 * b41));
												HX_STACK_LINE(331)
												te[(int)5] = ((((a21 * b12) + (a22 * b22)) + (a23 * b32)) + (a24 * b42));
												HX_STACK_LINE(331)
												te[(int)9] = ((((a21 * b13) + (a22 * b23)) + (a23 * b33)) + (a24 * b43));
												HX_STACK_LINE(331)
												te[(int)13] = ((((a21 * b14) + (a22 * b24)) + (a23 * b34)) + (a24 * b44));
												HX_STACK_LINE(331)
												te[(int)2] = ((((a31 * b11) + (a32 * b21)) + (a33 * b31)) + (a34 * b41));
												HX_STACK_LINE(331)
												te[(int)6] = ((((a31 * b12) + (a32 * b22)) + (a33 * b32)) + (a34 * b42));
												HX_STACK_LINE(331)
												te[(int)10] = ((((a31 * b13) + (a32 * b23)) + (a33 * b33)) + (a34 * b43));
												HX_STACK_LINE(331)
												te[(int)14] = ((((a31 * b14) + (a32 * b24)) + (a33 * b34)) + (a34 * b44));
												HX_STACK_LINE(331)
												te[(int)3] = ((((a41 * b11) + (a42 * b21)) + (a43 * b31)) + (a44 * b41));
												HX_STACK_LINE(331)
												te[(int)7] = ((((a41 * b12) + (a42 * b22)) + (a43 * b32)) + (a44 * b42));
												HX_STACK_LINE(331)
												te[(int)11] = ((((a41 * b13) + (a42 * b23)) + (a43 * b33)) + (a44 * b43));
												HX_STACK_LINE(331)
												te[(int)15] = ((((a41 * b14) + (a42 * b24)) + (a43 * b34)) + (a44 * b44));
												HX_STACK_LINE(331)
												_m1 = _this5;
											}
											HX_STACK_LINE(331)
											_this4->matrix = _m1;
											HX_STACK_LINE(331)
											if (((_m1 != null()))){
												HX_STACK_LINE(331)
												::snow::platform::native::utils::Float32Array _g2;		HX_STACK_VAR(_g2,"_g2");
												HX_STACK_LINE(331)
												{
													HX_STACK_LINE(331)
													::phoenix::Matrix _this5 = _this4->matrix;		HX_STACK_VAR(_this5,"_this5");
													HX_STACK_LINE(331)
													{
														HX_STACK_LINE(331)
														::snow::platform::native::utils::Float32Array _this6 = _this5->_float32array;		HX_STACK_VAR(_this6,"_this6");
														HX_STACK_LINE(331)
														Dynamic bufferOrArray = _this5->elements;		HX_STACK_VAR(bufferOrArray,"bufferOrArray");
														HX_STACK_LINE(331)
														int offset = (int)0;		HX_STACK_VAR(offset,"offset");
														HX_STACK_LINE(331)
														if ((::Std_obj::is(bufferOrArray,hx::ClassOf< Array<int> >()))){
															HX_STACK_LINE(331)
															Array< Float > floats = bufferOrArray;		HX_STACK_VAR(floats,"floats");
															HX_STACK_LINE(331)
															{
																HX_STACK_LINE(331)
																int _g11 = (int)0;		HX_STACK_VAR(_g11,"_g11");
																HX_STACK_LINE(331)
																int _g3 = floats->length;		HX_STACK_VAR(_g3,"_g3");
																HX_STACK_LINE(331)
																while((true)){
																	HX_STACK_LINE(331)
																	if ((!(((_g11 < _g3))))){
																		HX_STACK_LINE(331)
																		break;
																	}
																	HX_STACK_LINE(331)
																	int i = (_g11)++;		HX_STACK_VAR(i,"i");
																	HX_STACK_LINE(331)
																	::__hxcpp_memory_set_float(_this6->bytes,(((int((i + offset)) << int((int)2))) + _this6->byteOffset),floats->__get(i));
																}
															}
														}
														else{
															HX_STACK_LINE(331)
															if ((::Std_obj::is(bufferOrArray,hx::ClassOf< ::snow::platform::native::utils::Float32Array >()))){
																HX_STACK_LINE(331)
																::snow::platform::native::utils::Float32Array floats = bufferOrArray;		HX_STACK_VAR(floats,"floats");
																HX_STACK_LINE(331)
																{
																	HX_STACK_LINE(331)
																	int _g11 = (int)0;		HX_STACK_VAR(_g11,"_g11");
																	HX_STACK_LINE(331)
																	int _g3 = floats->length;		HX_STACK_VAR(_g3,"_g3");
																	HX_STACK_LINE(331)
																	while((true)){
																		HX_STACK_LINE(331)
																		if ((!(((_g11 < _g3))))){
																			HX_STACK_LINE(331)
																			break;
																		}
																		HX_STACK_LINE(331)
																		int i = (_g11)++;		HX_STACK_VAR(i,"i");
																		HX_STACK_LINE(331)
																		::__hxcpp_memory_set_float(_this6->bytes,(((int((i + offset)) << int((int)2))) + _this6->byteOffset),floats->__get(i));
																	}
																}
															}
															else{
																HX_STACK_LINE(331)
																HX_STACK_DO_THROW(HX_CSTRING("Invalid input buffer"));
															}
														}
													}
													HX_STACK_LINE(331)
													_g2 = ::snow::platform::native::utils::Float32Array_obj::__new(_this5->_float32array,null(),null());
												}
												HX_STACK_LINE(331)
												_this4->floats = _g2;
											}
											HX_STACK_LINE(331)
											_this4->matrix;
										}
										else{
											HX_STACK_LINE(331)
											::phoenix::Spatial _this4 = _this3->get_world();		HX_STACK_VAR(_this4,"_this4");
											HX_STACK_LINE(331)
											::phoenix::Matrix _m1;		HX_STACK_VAR(_m1,"_m1");
											HX_STACK_LINE(331)
											{
												HX_STACK_LINE(331)
												Array< Float > te = _this3->local->matrix->elements;		HX_STACK_VAR(te,"te");
												HX_STACK_LINE(331)
												_m1 = ::phoenix::Matrix_obj::__new(te->__get((int)0),te->__get((int)4),te->__get((int)8),te->__get((int)12),te->__get((int)1),te->__get((int)5),te->__get((int)9),te->__get((int)13),te->__get((int)2),te->__get((int)6),te->__get((int)10),te->__get((int)14),te->__get((int)3),te->__get((int)7),te->__get((int)11),te->__get((int)15));
											}
											HX_STACK_LINE(331)
											_this4->matrix = _m1;
											HX_STACK_LINE(331)
											if (((_m1 != null()))){
												HX_STACK_LINE(331)
												::snow::platform::native::utils::Float32Array _g11;		HX_STACK_VAR(_g11,"_g11");
												HX_STACK_LINE(331)
												{
													HX_STACK_LINE(331)
													::phoenix::Matrix _this5 = _this4->matrix;		HX_STACK_VAR(_this5,"_this5");
													HX_STACK_LINE(331)
													{
														HX_STACK_LINE(331)
														::snow::platform::native::utils::Float32Array _this6 = _this5->_float32array;		HX_STACK_VAR(_this6,"_this6");
														HX_STACK_LINE(331)
														Dynamic bufferOrArray = _this5->elements;		HX_STACK_VAR(bufferOrArray,"bufferOrArray");
														HX_STACK_LINE(331)
														int offset = (int)0;		HX_STACK_VAR(offset,"offset");
														HX_STACK_LINE(331)
														if ((::Std_obj::is(bufferOrArray,hx::ClassOf< Array<int> >()))){
															HX_STACK_LINE(331)
															Array< Float > floats = bufferOrArray;		HX_STACK_VAR(floats,"floats");
															HX_STACK_LINE(331)
															{
																HX_STACK_LINE(331)
																int _g12 = (int)0;		HX_STACK_VAR(_g12,"_g12");
																HX_STACK_LINE(331)
																int _g2 = floats->length;		HX_STACK_VAR(_g2,"_g2");
																HX_STACK_LINE(331)
																while((true)){
																	HX_STACK_LINE(331)
																	if ((!(((_g12 < _g2))))){
																		HX_STACK_LINE(331)
																		break;
																	}
																	HX_STACK_LINE(331)
																	int i = (_g12)++;		HX_STACK_VAR(i,"i");
																	HX_STACK_LINE(331)
																	::__hxcpp_memory_set_float(_this6->bytes,(((int((i + offset)) << int((int)2))) + _this6->byteOffset),floats->__get(i));
																}
															}
														}
														else{
															HX_STACK_LINE(331)
															if ((::Std_obj::is(bufferOrArray,hx::ClassOf< ::snow::platform::native::utils::Float32Array >()))){
																HX_STACK_LINE(331)
																::snow::platform::native::utils::Float32Array floats = bufferOrArray;		HX_STACK_VAR(floats,"floats");
																HX_STACK_LINE(331)
																{
																	HX_STACK_LINE(331)
																	int _g12 = (int)0;		HX_STACK_VAR(_g12,"_g12");
																	HX_STACK_LINE(331)
																	int _g2 = floats->length;		HX_STACK_VAR(_g2,"_g2");
																	HX_STACK_LINE(331)
																	while((true)){
																		HX_STACK_LINE(331)
																		if ((!(((_g12 < _g2))))){
																			HX_STACK_LINE(331)
																			break;
																		}
																		HX_STACK_LINE(331)
																		int i = (_g12)++;		HX_STACK_VAR(i,"i");
																		HX_STACK_LINE(331)
																		::__hxcpp_memory_set_float(_this6->bytes,(((int((i + offset)) << int((int)2))) + _this6->byteOffset),floats->__get(i));
																	}
																}
															}
															else{
																HX_STACK_LINE(331)
																HX_STACK_DO_THROW(HX_CSTRING("Invalid input buffer"));
															}
														}
													}
													HX_STACK_LINE(331)
													_g11 = ::snow::platform::native::utils::Float32Array_obj::__new(_this5->_float32array,null(),null());
												}
												HX_STACK_LINE(331)
												_this4->floats = _g11;
											}
											HX_STACK_LINE(331)
											_this4->matrix;
										}
										HX_STACK_LINE(331)
										{
											HX_STACK_LINE(331)
											::phoenix::Spatial _this4 = _this3->get_world();		HX_STACK_VAR(_this4,"_this4");
											HX_STACK_LINE(331)
											if ((_this4->auto_decompose)){
												HX_STACK_LINE(331)
												::phoenix::MatrixTransform _transform;		HX_STACK_VAR(_transform,"_transform");
												HX_STACK_LINE(331)
												{
													HX_STACK_LINE(331)
													::phoenix::Matrix _this5 = _this4->matrix;		HX_STACK_VAR(_this5,"_this5");
													HX_STACK_LINE(331)
													::phoenix::Vector _position = null();		HX_STACK_VAR(_position,"_position");
													HX_STACK_LINE(331)
													::phoenix::Quaternion _quaternion = null();		HX_STACK_VAR(_quaternion,"_quaternion");
													HX_STACK_LINE(331)
													::phoenix::Vector _scale = null();		HX_STACK_VAR(_scale,"_scale");
													HX_STACK_LINE(331)
													Array< Float > te = _this5->elements;		HX_STACK_VAR(te,"te");
													HX_STACK_LINE(331)
													::phoenix::Matrix matrix = ::phoenix::Matrix_obj::__new(null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(matrix,"matrix");
													HX_STACK_LINE(331)
													Float _ax_x = te->__get((int)0);		HX_STACK_VAR(_ax_x,"_ax_x");
													HX_STACK_LINE(331)
													Float _ax_y = te->__get((int)1);		HX_STACK_VAR(_ax_y,"_ax_y");
													HX_STACK_LINE(331)
													Float _ax_z = te->__get((int)2);		HX_STACK_VAR(_ax_z,"_ax_z");
													HX_STACK_LINE(331)
													Float _ay_x = te->__get((int)4);		HX_STACK_VAR(_ay_x,"_ay_x");
													HX_STACK_LINE(331)
													Float _ay_y = te->__get((int)5);		HX_STACK_VAR(_ay_y,"_ay_y");
													HX_STACK_LINE(331)
													Float _ay_z = te->__get((int)6);		HX_STACK_VAR(_ay_z,"_ay_z");
													HX_STACK_LINE(331)
													Float _az_x = te->__get((int)8);		HX_STACK_VAR(_az_x,"_az_x");
													HX_STACK_LINE(331)
													Float _az_y = te->__get((int)9);		HX_STACK_VAR(_az_y,"_az_y");
													HX_STACK_LINE(331)
													Float _az_z = te->__get((int)10);		HX_STACK_VAR(_az_z,"_az_z");
													HX_STACK_LINE(331)
													Float _ax_length = ::Math_obj::sqrt((((_ax_x * _ax_x) + (_ax_y * _ax_y)) + (_ax_z * _ax_z)));		HX_STACK_VAR(_ax_length,"_ax_length");
													HX_STACK_LINE(331)
													Float _ay_length = ::Math_obj::sqrt((((_ay_x * _ay_x) + (_ay_y * _ay_y)) + (_ay_z * _ay_z)));		HX_STACK_VAR(_ay_length,"_ay_length");
													HX_STACK_LINE(331)
													Float _az_length = ::Math_obj::sqrt((((_az_x * _az_x) + (_az_y * _az_y)) + (_az_z * _az_z)));		HX_STACK_VAR(_az_length,"_az_length");
													HX_STACK_LINE(331)
													if (((_quaternion == null()))){
														HX_STACK_LINE(331)
														::phoenix::Quaternion _g2 = ::phoenix::Quaternion_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(_g2,"_g2");
														HX_STACK_LINE(331)
														_quaternion = _g2;
													}
													HX_STACK_LINE(331)
													if (((_position == null()))){
														HX_STACK_LINE(331)
														::phoenix::Vector _g3 = ::phoenix::Vector_obj::__new(te->__get((int)12),te->__get((int)13),te->__get((int)14),null());		HX_STACK_VAR(_g3,"_g3");
														HX_STACK_LINE(331)
														_position = _g3;
													}
													else{
														HX_STACK_LINE(331)
														{
															HX_STACK_LINE(331)
															Float _x = te->__get((int)12);		HX_STACK_VAR(_x,"_x");
															HX_STACK_LINE(331)
															_position->x = _x;
															HX_STACK_LINE(331)
															if ((_position->_construct)){
																HX_STACK_LINE(331)
																_position->x;
															}
															else{
																HX_STACK_LINE(331)
																if (((bool((_position->listen_x != null())) && bool(!(_position->ignore_listeners))))){
																	HX_STACK_LINE(331)
																	_position->listen_x(_x);
																}
																HX_STACK_LINE(331)
																_position->x;
															}
														}
														HX_STACK_LINE(331)
														{
															HX_STACK_LINE(331)
															Float _y = te->__get((int)13);		HX_STACK_VAR(_y,"_y");
															HX_STACK_LINE(331)
															_position->y = _y;
															HX_STACK_LINE(331)
															if ((_position->_construct)){
																HX_STACK_LINE(331)
																_position->y;
															}
															else{
																HX_STACK_LINE(331)
																if (((bool((_position->listen_y != null())) && bool(!(_position->ignore_listeners))))){
																	HX_STACK_LINE(331)
																	_position->listen_y(_y);
																}
																HX_STACK_LINE(331)
																_position->y;
															}
														}
														HX_STACK_LINE(331)
														{
															HX_STACK_LINE(331)
															Float _z = te->__get((int)14);		HX_STACK_VAR(_z,"_z");
															HX_STACK_LINE(331)
															_position->z = _z;
															HX_STACK_LINE(331)
															if ((_position->_construct)){
																HX_STACK_LINE(331)
																_position->z;
															}
															else{
																HX_STACK_LINE(331)
																if (((bool((_position->listen_z != null())) && bool(!(_position->ignore_listeners))))){
																	HX_STACK_LINE(331)
																	_position->listen_z(_z);
																}
																HX_STACK_LINE(331)
																_position->z;
															}
														}
													}
													HX_STACK_LINE(331)
													if (((_scale == null()))){
														HX_STACK_LINE(331)
														::phoenix::Vector _g4 = ::phoenix::Vector_obj::__new(_ax_length,_ay_length,_az_length,null());		HX_STACK_VAR(_g4,"_g4");
														HX_STACK_LINE(331)
														_scale = _g4;
													}
													else{
														HX_STACK_LINE(331)
														{
															HX_STACK_LINE(331)
															_scale->x = _ax_length;
															HX_STACK_LINE(331)
															if ((_scale->_construct)){
																HX_STACK_LINE(331)
																_scale->x;
															}
															else{
																HX_STACK_LINE(331)
																if (((bool((_scale->listen_x != null())) && bool(!(_scale->ignore_listeners))))){
																	HX_STACK_LINE(331)
																	_scale->listen_x(_ax_length);
																}
																HX_STACK_LINE(331)
																_scale->x;
															}
														}
														HX_STACK_LINE(331)
														{
															HX_STACK_LINE(331)
															_scale->y = _ay_length;
															HX_STACK_LINE(331)
															if ((_scale->_construct)){
																HX_STACK_LINE(331)
																_scale->y;
															}
															else{
																HX_STACK_LINE(331)
																if (((bool((_scale->listen_y != null())) && bool(!(_scale->ignore_listeners))))){
																	HX_STACK_LINE(331)
																	_scale->listen_y(_ay_length);
																}
																HX_STACK_LINE(331)
																_scale->y;
															}
														}
														HX_STACK_LINE(331)
														{
															HX_STACK_LINE(331)
															_scale->z = _az_length;
															HX_STACK_LINE(331)
															if ((_scale->_construct)){
																HX_STACK_LINE(331)
																_scale->z;
															}
															else{
																HX_STACK_LINE(331)
																if (((bool((_scale->listen_z != null())) && bool(!(_scale->ignore_listeners))))){
																	HX_STACK_LINE(331)
																	_scale->listen_z(_az_length);
																}
																HX_STACK_LINE(331)
																_scale->z;
															}
														}
													}
													HX_STACK_LINE(331)
													Array< Float > _g5 = _this5->elements->concat(Array_obj< Float >::__new());		HX_STACK_VAR(_g5,"_g5");
													HX_STACK_LINE(331)
													matrix->elements = _g5;
													HX_STACK_LINE(331)
													Array< Float > me = matrix->elements;		HX_STACK_VAR(me,"me");
													HX_STACK_LINE(331)
													hx::DivEq(me[(int)0],_ax_length);
													HX_STACK_LINE(331)
													hx::DivEq(me[(int)1],_ax_length);
													HX_STACK_LINE(331)
													hx::DivEq(me[(int)2],_ax_length);
													HX_STACK_LINE(331)
													hx::DivEq(me[(int)4],_ay_length);
													HX_STACK_LINE(331)
													hx::DivEq(me[(int)5],_ay_length);
													HX_STACK_LINE(331)
													hx::DivEq(me[(int)6],_ay_length);
													HX_STACK_LINE(331)
													hx::DivEq(me[(int)8],_az_length);
													HX_STACK_LINE(331)
													hx::DivEq(me[(int)9],_az_length);
													HX_STACK_LINE(331)
													hx::DivEq(me[(int)10],_az_length);
													HX_STACK_LINE(331)
													_quaternion->setFromRotationMatrix(matrix);
													HX_STACK_LINE(331)
													if (((_this5->_transform == null()))){
														HX_STACK_LINE(331)
														::phoenix::MatrixTransform _g6 = ::phoenix::MatrixTransform_obj::__new(_position,_quaternion,_scale);		HX_STACK_VAR(_g6,"_g6");
														HX_STACK_LINE(331)
														_this5->_transform = _g6;
													}
													else{
														HX_STACK_LINE(331)
														_this5->_transform->pos = _position;
														HX_STACK_LINE(331)
														_this5->_transform->rotation = _quaternion;
														HX_STACK_LINE(331)
														_this5->_transform->scale = _scale;
													}
													HX_STACK_LINE(331)
													_transform = _this5->_transform;
												}
												HX_STACK_LINE(331)
												{
													HX_STACK_LINE(331)
													::phoenix::Vector _p = _transform->pos;		HX_STACK_VAR(_p,"_p");
													HX_STACK_LINE(331)
													_this4->pos = _p;
													HX_STACK_LINE(331)
													if (((_p != null()))){
														HX_STACK_LINE(331)
														::phoenix::Vector_obj::Listen(_this4->pos,_this4->_pos_change_dyn());
														HX_STACK_LINE(331)
														if (((bool((_this4->pos_changed != null())) && bool(!(_this4->ignore_listeners))))){
															HX_STACK_LINE(331)
															_this4->pos_changed(_this4->pos);
														}
													}
													HX_STACK_LINE(331)
													_this4->pos;
												}
												HX_STACK_LINE(331)
												{
													HX_STACK_LINE(331)
													::phoenix::Quaternion _r = _transform->rotation;		HX_STACK_VAR(_r,"_r");
													HX_STACK_LINE(331)
													_this4->rotation = _r;
													HX_STACK_LINE(331)
													if (((_r != null()))){
														HX_STACK_LINE(331)
														{
															HX_STACK_LINE(331)
															::phoenix::Quaternion _q = _this4->rotation;		HX_STACK_VAR(_q,"_q");
															HX_STACK_LINE(331)
															Dynamic listener = _this4->_rotation_change_dyn();		HX_STACK_VAR(listener,"listener");
															HX_STACK_LINE(331)
															_q->listen_x = listener;
															HX_STACK_LINE(331)
															_q->listen_y = listener;
															HX_STACK_LINE(331)
															_q->listen_z = listener;
															HX_STACK_LINE(331)
															_q->listen_w = listener;
														}
														HX_STACK_LINE(331)
														if (((bool((_this4->rotation_changed != null())) && bool(!(_this4->ignore_listeners))))){
															HX_STACK_LINE(331)
															_this4->rotation_changed(_this4->rotation);
														}
													}
													HX_STACK_LINE(331)
													_this4->rotation;
												}
												HX_STACK_LINE(331)
												{
													HX_STACK_LINE(331)
													::phoenix::Vector _s = _transform->scale;		HX_STACK_VAR(_s,"_s");
													HX_STACK_LINE(331)
													_this4->scale = _s;
													HX_STACK_LINE(331)
													if (((_s != null()))){
														HX_STACK_LINE(331)
														::phoenix::Vector_obj::Listen(_this4->scale,_this4->_scale_change_dyn());
														HX_STACK_LINE(331)
														if (((bool((_this4->scale_changed != null())) && bool(!(_this4->ignore_listeners))))){
															HX_STACK_LINE(331)
															_this4->scale_changed(_this4->scale);
														}
													}
													HX_STACK_LINE(331)
													_this4->scale;
												}
											}
											HX_STACK_LINE(331)
											_this4;
										}
										HX_STACK_LINE(331)
										{
											HX_STACK_LINE(331)
											_this3->dirty = false;
											HX_STACK_LINE(331)
											if (((bool((bool((bool(_this3->dirty) && bool(!(_this3->_setup)))) && bool((_this3->_dirty_handlers != null())))) && bool((_this3->_dirty_handlers->__Field(HX_CSTRING("length"),true) > (int)0))))){
												HX_STACK_LINE(331)
												int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
												HX_STACK_LINE(331)
												Dynamic _g11 = _this3->_dirty_handlers;		HX_STACK_VAR(_g11,"_g11");
												HX_STACK_LINE(331)
												while((true)){
													HX_STACK_LINE(331)
													if ((!(((_g2 < _g11->__Field(HX_CSTRING("length"),true)))))){
														HX_STACK_LINE(331)
														break;
													}
													HX_STACK_LINE(331)
													Dynamic _handler = _g11->__GetItem(_g2);		HX_STACK_VAR(_handler,"_handler");
													HX_STACK_LINE(331)
													++(_g2);
													HX_STACK_LINE(331)
													if (((_handler != null()))){
														HX_STACK_LINE(331)
														_handler(_this3).Cast< Void >();
													}
												}
											}
											HX_STACK_LINE(331)
											_this3->dirty;
										}
										HX_STACK_LINE(331)
										_this3->_cleaning = false;
										HX_STACK_LINE(331)
										if (((bool((_this3->_clean_handlers != null())) && bool((_this3->_clean_handlers->__Field(HX_CSTRING("length"),true) > (int)0))))){
											HX_STACK_LINE(331)
											int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
											HX_STACK_LINE(331)
											Dynamic _g11 = _this3->_clean_handlers;		HX_STACK_VAR(_g11,"_g11");
											HX_STACK_LINE(331)
											while((true)){
												HX_STACK_LINE(331)
												if ((!(((_g2 < _g11->__Field(HX_CSTRING("length"),true)))))){
													HX_STACK_LINE(331)
													break;
												}
												HX_STACK_LINE(331)
												Dynamic _handler = _g11->__GetItem(_g2);		HX_STACK_VAR(_handler,"_handler");
												HX_STACK_LINE(331)
												++(_g2);
												HX_STACK_LINE(331)
												if (((_handler != null()))){
													HX_STACK_LINE(331)
													_handler(_this3).Cast< Void >();
												}
											}
										}
									}
								}
							}
							HX_STACK_LINE(331)
							if (((bool(_this2->dirty) && bool(!(_this2->_cleaning))))){
								HX_STACK_LINE(331)
								if ((!(_this2->dirty))){
									HX_STACK_LINE(331)
									Dynamic();
								}
								else{
									HX_STACK_LINE(331)
									_this2->_cleaning = true;
									HX_STACK_LINE(331)
									{
										HX_STACK_LINE(331)
										::phoenix::Matrix _this3 = _this2->_pos_matrix;		HX_STACK_VAR(_this3,"_this3");
										HX_STACK_LINE(331)
										{
											HX_STACK_LINE(331)
											Array< Float > e = _this3->elements;		HX_STACK_VAR(e,"e");
											HX_STACK_LINE(331)
											e[(int)0] = (int)1;
											HX_STACK_LINE(331)
											e[(int)4] = (int)0;
											HX_STACK_LINE(331)
											e[(int)8] = (int)0;
											HX_STACK_LINE(331)
											e[(int)12] = _this2->local->pos->x;
											HX_STACK_LINE(331)
											e[(int)1] = (int)0;
											HX_STACK_LINE(331)
											e[(int)5] = (int)1;
											HX_STACK_LINE(331)
											e[(int)9] = (int)0;
											HX_STACK_LINE(331)
											e[(int)13] = _this2->local->pos->y;
											HX_STACK_LINE(331)
											e[(int)2] = (int)0;
											HX_STACK_LINE(331)
											e[(int)6] = (int)0;
											HX_STACK_LINE(331)
											e[(int)10] = (int)1;
											HX_STACK_LINE(331)
											e[(int)14] = _this2->local->pos->z;
											HX_STACK_LINE(331)
											e[(int)3] = (int)0;
											HX_STACK_LINE(331)
											e[(int)7] = (int)0;
											HX_STACK_LINE(331)
											e[(int)11] = (int)0;
											HX_STACK_LINE(331)
											e[(int)15] = (int)1;
											HX_STACK_LINE(331)
											_this3;
										}
										HX_STACK_LINE(331)
										_this3;
									}
									HX_STACK_LINE(331)
									{
										HX_STACK_LINE(331)
										::phoenix::Matrix _this3 = _this2->_rotation_matrix;		HX_STACK_VAR(_this3,"_this3");
										HX_STACK_LINE(331)
										::phoenix::Quaternion q = _this2->local->rotation;		HX_STACK_VAR(q,"q");
										HX_STACK_LINE(331)
										Array< Float > te = _this3->elements;		HX_STACK_VAR(te,"te");
										HX_STACK_LINE(331)
										Float x2 = (q->x + q->x);		HX_STACK_VAR(x2,"x2");
										HX_STACK_LINE(331)
										Float y2 = (q->y + q->y);		HX_STACK_VAR(y2,"y2");
										HX_STACK_LINE(331)
										Float z2 = (q->z + q->z);		HX_STACK_VAR(z2,"z2");
										HX_STACK_LINE(331)
										Float xx = (q->x * x2);		HX_STACK_VAR(xx,"xx");
										HX_STACK_LINE(331)
										Float xy = (q->x * y2);		HX_STACK_VAR(xy,"xy");
										HX_STACK_LINE(331)
										Float xz = (q->x * z2);		HX_STACK_VAR(xz,"xz");
										HX_STACK_LINE(331)
										Float yy = (q->y * y2);		HX_STACK_VAR(yy,"yy");
										HX_STACK_LINE(331)
										Float yz = (q->y * z2);		HX_STACK_VAR(yz,"yz");
										HX_STACK_LINE(331)
										Float zz = (q->z * z2);		HX_STACK_VAR(zz,"zz");
										HX_STACK_LINE(331)
										Float wx = (q->w * x2);		HX_STACK_VAR(wx,"wx");
										HX_STACK_LINE(331)
										Float wy = (q->w * y2);		HX_STACK_VAR(wy,"wy");
										HX_STACK_LINE(331)
										Float wz = (q->w * z2);		HX_STACK_VAR(wz,"wz");
										HX_STACK_LINE(331)
										te[(int)0] = ((int)1 - ((yy + zz)));
										HX_STACK_LINE(331)
										te[(int)4] = (xy - wz);
										HX_STACK_LINE(331)
										te[(int)8] = (xz + wy);
										HX_STACK_LINE(331)
										te[(int)1] = (xy + wz);
										HX_STACK_LINE(331)
										te[(int)5] = ((int)1 - ((xx + zz)));
										HX_STACK_LINE(331)
										te[(int)9] = (yz - wx);
										HX_STACK_LINE(331)
										te[(int)2] = (xz - wy);
										HX_STACK_LINE(331)
										te[(int)6] = (yz + wx);
										HX_STACK_LINE(331)
										te[(int)10] = ((int)1 - ((xx + yy)));
										HX_STACK_LINE(331)
										te[(int)3] = (int)0;
										HX_STACK_LINE(331)
										te[(int)7] = (int)0;
										HX_STACK_LINE(331)
										te[(int)11] = (int)0;
										HX_STACK_LINE(331)
										te[(int)12] = (int)0;
										HX_STACK_LINE(331)
										te[(int)13] = (int)0;
										HX_STACK_LINE(331)
										te[(int)14] = (int)0;
										HX_STACK_LINE(331)
										te[(int)15] = (int)1;
										HX_STACK_LINE(331)
										_this3;
									}
									HX_STACK_LINE(331)
									{
										HX_STACK_LINE(331)
										::phoenix::Matrix _this3 = _this2->_origin_undo_matrix;		HX_STACK_VAR(_this3,"_this3");
										HX_STACK_LINE(331)
										{
											HX_STACK_LINE(331)
											Array< Float > e = _this3->elements;		HX_STACK_VAR(e,"e");
											HX_STACK_LINE(331)
											e[(int)0] = (int)1;
											HX_STACK_LINE(331)
											e[(int)4] = (int)0;
											HX_STACK_LINE(331)
											e[(int)8] = (int)0;
											HX_STACK_LINE(331)
											e[(int)12] = -(_this2->origin->x);
											HX_STACK_LINE(331)
											e[(int)1] = (int)0;
											HX_STACK_LINE(331)
											e[(int)5] = (int)1;
											HX_STACK_LINE(331)
											e[(int)9] = (int)0;
											HX_STACK_LINE(331)
											e[(int)13] = -(_this2->origin->y);
											HX_STACK_LINE(331)
											e[(int)2] = (int)0;
											HX_STACK_LINE(331)
											e[(int)6] = (int)0;
											HX_STACK_LINE(331)
											e[(int)10] = (int)1;
											HX_STACK_LINE(331)
											e[(int)14] = -(_this2->origin->z);
											HX_STACK_LINE(331)
											e[(int)3] = (int)0;
											HX_STACK_LINE(331)
											e[(int)7] = (int)0;
											HX_STACK_LINE(331)
											e[(int)11] = (int)0;
											HX_STACK_LINE(331)
											e[(int)15] = (int)1;
											HX_STACK_LINE(331)
											_this3;
										}
										HX_STACK_LINE(331)
										_this3;
									}
									HX_STACK_LINE(331)
									{
										HX_STACK_LINE(331)
										::phoenix::Matrix _this3 = _this2->local->matrix;		HX_STACK_VAR(_this3,"_this3");
										HX_STACK_LINE(331)
										{
											HX_STACK_LINE(331)
											Array< Float > e = _this3->elements;		HX_STACK_VAR(e,"e");
											HX_STACK_LINE(331)
											e[(int)0] = (int)1;
											HX_STACK_LINE(331)
											e[(int)4] = (int)0;
											HX_STACK_LINE(331)
											e[(int)8] = (int)0;
											HX_STACK_LINE(331)
											e[(int)12] = _this2->origin->x;
											HX_STACK_LINE(331)
											e[(int)1] = (int)0;
											HX_STACK_LINE(331)
											e[(int)5] = (int)1;
											HX_STACK_LINE(331)
											e[(int)9] = (int)0;
											HX_STACK_LINE(331)
											e[(int)13] = _this2->origin->y;
											HX_STACK_LINE(331)
											e[(int)2] = (int)0;
											HX_STACK_LINE(331)
											e[(int)6] = (int)0;
											HX_STACK_LINE(331)
											e[(int)10] = (int)1;
											HX_STACK_LINE(331)
											e[(int)14] = _this2->origin->z;
											HX_STACK_LINE(331)
											e[(int)3] = (int)0;
											HX_STACK_LINE(331)
											e[(int)7] = (int)0;
											HX_STACK_LINE(331)
											e[(int)11] = (int)0;
											HX_STACK_LINE(331)
											e[(int)15] = (int)1;
											HX_STACK_LINE(331)
											_this3;
										}
										HX_STACK_LINE(331)
										_this3;
									}
									HX_STACK_LINE(331)
									{
										HX_STACK_LINE(331)
										::phoenix::Matrix _this3 = _this2->local->matrix;		HX_STACK_VAR(_this3,"_this3");
										HX_STACK_LINE(331)
										::phoenix::Vector _v = _this2->local->scale;		HX_STACK_VAR(_v,"_v");
										HX_STACK_LINE(331)
										Array< Float > te = _this3->elements;		HX_STACK_VAR(te,"te");
										HX_STACK_LINE(331)
										Float _x = _v->x;		HX_STACK_VAR(_x,"_x");
										HX_STACK_LINE(331)
										Float _y = _v->y;		HX_STACK_VAR(_y,"_y");
										HX_STACK_LINE(331)
										Float _z = _v->z;		HX_STACK_VAR(_z,"_z");
										HX_STACK_LINE(331)
										hx::MultEq(te[(int)0],_x);
										HX_STACK_LINE(331)
										hx::MultEq(te[(int)4],_y);
										HX_STACK_LINE(331)
										hx::MultEq(te[(int)8],_z);
										HX_STACK_LINE(331)
										hx::MultEq(te[(int)1],_x);
										HX_STACK_LINE(331)
										hx::MultEq(te[(int)5],_y);
										HX_STACK_LINE(331)
										hx::MultEq(te[(int)9],_z);
										HX_STACK_LINE(331)
										hx::MultEq(te[(int)2],_x);
										HX_STACK_LINE(331)
										hx::MultEq(te[(int)6],_y);
										HX_STACK_LINE(331)
										hx::MultEq(te[(int)10],_z);
										HX_STACK_LINE(331)
										hx::MultEq(te[(int)3],_x);
										HX_STACK_LINE(331)
										hx::MultEq(te[(int)7],_y);
										HX_STACK_LINE(331)
										hx::MultEq(te[(int)11],_z);
										HX_STACK_LINE(331)
										_this3;
									}
									HX_STACK_LINE(331)
									{
										HX_STACK_LINE(331)
										::phoenix::Matrix _this3 = _this2->local->matrix;		HX_STACK_VAR(_this3,"_this3");
										HX_STACK_LINE(331)
										{
											HX_STACK_LINE(331)
											Array< Float > ae = _this3->elements;		HX_STACK_VAR(ae,"ae");
											HX_STACK_LINE(331)
											Array< Float > be = _this2->_rotation_matrix->elements;		HX_STACK_VAR(be,"be");
											HX_STACK_LINE(331)
											Array< Float > te = _this3->elements;		HX_STACK_VAR(te,"te");
											HX_STACK_LINE(331)
											Float a11 = ae->__get((int)0);		HX_STACK_VAR(a11,"a11");
											HX_STACK_LINE(331)
											Float a12 = ae->__get((int)4);		HX_STACK_VAR(a12,"a12");
											HX_STACK_LINE(331)
											Float a13 = ae->__get((int)8);		HX_STACK_VAR(a13,"a13");
											HX_STACK_LINE(331)
											Float a14 = ae->__get((int)12);		HX_STACK_VAR(a14,"a14");
											HX_STACK_LINE(331)
											Float a21 = ae->__get((int)1);		HX_STACK_VAR(a21,"a21");
											HX_STACK_LINE(331)
											Float a22 = ae->__get((int)5);		HX_STACK_VAR(a22,"a22");
											HX_STACK_LINE(331)
											Float a23 = ae->__get((int)9);		HX_STACK_VAR(a23,"a23");
											HX_STACK_LINE(331)
											Float a24 = ae->__get((int)13);		HX_STACK_VAR(a24,"a24");
											HX_STACK_LINE(331)
											Float a31 = ae->__get((int)2);		HX_STACK_VAR(a31,"a31");
											HX_STACK_LINE(331)
											Float a32 = ae->__get((int)6);		HX_STACK_VAR(a32,"a32");
											HX_STACK_LINE(331)
											Float a33 = ae->__get((int)10);		HX_STACK_VAR(a33,"a33");
											HX_STACK_LINE(331)
											Float a34 = ae->__get((int)14);		HX_STACK_VAR(a34,"a34");
											HX_STACK_LINE(331)
											Float a41 = ae->__get((int)3);		HX_STACK_VAR(a41,"a41");
											HX_STACK_LINE(331)
											Float a42 = ae->__get((int)7);		HX_STACK_VAR(a42,"a42");
											HX_STACK_LINE(331)
											Float a43 = ae->__get((int)11);		HX_STACK_VAR(a43,"a43");
											HX_STACK_LINE(331)
											Float a44 = ae->__get((int)15);		HX_STACK_VAR(a44,"a44");
											HX_STACK_LINE(331)
											Float b11 = be->__get((int)0);		HX_STACK_VAR(b11,"b11");
											HX_STACK_LINE(331)
											Float b12 = be->__get((int)4);		HX_STACK_VAR(b12,"b12");
											HX_STACK_LINE(331)
											Float b13 = be->__get((int)8);		HX_STACK_VAR(b13,"b13");
											HX_STACK_LINE(331)
											Float b14 = be->__get((int)12);		HX_STACK_VAR(b14,"b14");
											HX_STACK_LINE(331)
											Float b21 = be->__get((int)1);		HX_STACK_VAR(b21,"b21");
											HX_STACK_LINE(331)
											Float b22 = be->__get((int)5);		HX_STACK_VAR(b22,"b22");
											HX_STACK_LINE(331)
											Float b23 = be->__get((int)9);		HX_STACK_VAR(b23,"b23");
											HX_STACK_LINE(331)
											Float b24 = be->__get((int)13);		HX_STACK_VAR(b24,"b24");
											HX_STACK_LINE(331)
											Float b31 = be->__get((int)2);		HX_STACK_VAR(b31,"b31");
											HX_STACK_LINE(331)
											Float b32 = be->__get((int)6);		HX_STACK_VAR(b32,"b32");
											HX_STACK_LINE(331)
											Float b33 = be->__get((int)10);		HX_STACK_VAR(b33,"b33");
											HX_STACK_LINE(331)
											Float b34 = be->__get((int)14);		HX_STACK_VAR(b34,"b34");
											HX_STACK_LINE(331)
											Float b41 = be->__get((int)3);		HX_STACK_VAR(b41,"b41");
											HX_STACK_LINE(331)
											Float b42 = be->__get((int)7);		HX_STACK_VAR(b42,"b42");
											HX_STACK_LINE(331)
											Float b43 = be->__get((int)11);		HX_STACK_VAR(b43,"b43");
											HX_STACK_LINE(331)
											Float b44 = be->__get((int)15);		HX_STACK_VAR(b44,"b44");
											HX_STACK_LINE(331)
											te[(int)0] = ((((a11 * b11) + (a12 * b21)) + (a13 * b31)) + (a14 * b41));
											HX_STACK_LINE(331)
											te[(int)4] = ((((a11 * b12) + (a12 * b22)) + (a13 * b32)) + (a14 * b42));
											HX_STACK_LINE(331)
											te[(int)8] = ((((a11 * b13) + (a12 * b23)) + (a13 * b33)) + (a14 * b43));
											HX_STACK_LINE(331)
											te[(int)12] = ((((a11 * b14) + (a12 * b24)) + (a13 * b34)) + (a14 * b44));
											HX_STACK_LINE(331)
											te[(int)1] = ((((a21 * b11) + (a22 * b21)) + (a23 * b31)) + (a24 * b41));
											HX_STACK_LINE(331)
											te[(int)5] = ((((a21 * b12) + (a22 * b22)) + (a23 * b32)) + (a24 * b42));
											HX_STACK_LINE(331)
											te[(int)9] = ((((a21 * b13) + (a22 * b23)) + (a23 * b33)) + (a24 * b43));
											HX_STACK_LINE(331)
											te[(int)13] = ((((a21 * b14) + (a22 * b24)) + (a23 * b34)) + (a24 * b44));
											HX_STACK_LINE(331)
											te[(int)2] = ((((a31 * b11) + (a32 * b21)) + (a33 * b31)) + (a34 * b41));
											HX_STACK_LINE(331)
											te[(int)6] = ((((a31 * b12) + (a32 * b22)) + (a33 * b32)) + (a34 * b42));
											HX_STACK_LINE(331)
											te[(int)10] = ((((a31 * b13) + (a32 * b23)) + (a33 * b33)) + (a34 * b43));
											HX_STACK_LINE(331)
											te[(int)14] = ((((a31 * b14) + (a32 * b24)) + (a33 * b34)) + (a34 * b44));
											HX_STACK_LINE(331)
											te[(int)3] = ((((a41 * b11) + (a42 * b21)) + (a43 * b31)) + (a44 * b41));
											HX_STACK_LINE(331)
											te[(int)7] = ((((a41 * b12) + (a42 * b22)) + (a43 * b32)) + (a44 * b42));
											HX_STACK_LINE(331)
											te[(int)11] = ((((a41 * b13) + (a42 * b23)) + (a43 * b33)) + (a44 * b43));
											HX_STACK_LINE(331)
											te[(int)15] = ((((a41 * b14) + (a42 * b24)) + (a43 * b34)) + (a44 * b44));
											HX_STACK_LINE(331)
											_this3;
										}
									}
									HX_STACK_LINE(331)
									{
										HX_STACK_LINE(331)
										::phoenix::Matrix _this3 = _this2->local->matrix;		HX_STACK_VAR(_this3,"_this3");
										HX_STACK_LINE(331)
										::phoenix::Vector _v = _this2->local->pos;		HX_STACK_VAR(_v,"_v");
										HX_STACK_LINE(331)
										Array< Float > te = _this3->elements;		HX_STACK_VAR(te,"te");
										HX_STACK_LINE(331)
										te[(int)12] = _v->x;
										HX_STACK_LINE(331)
										te[(int)13] = _v->y;
										HX_STACK_LINE(331)
										te[(int)14] = _v->z;
										HX_STACK_LINE(331)
										_this3;
									}
									HX_STACK_LINE(331)
									{
										HX_STACK_LINE(331)
										::phoenix::Matrix _this3 = _this2->local->matrix;		HX_STACK_VAR(_this3,"_this3");
										HX_STACK_LINE(331)
										{
											HX_STACK_LINE(331)
											Array< Float > ae = _this3->elements;		HX_STACK_VAR(ae,"ae");
											HX_STACK_LINE(331)
											Array< Float > be = _this2->_origin_undo_matrix->elements;		HX_STACK_VAR(be,"be");
											HX_STACK_LINE(331)
											Array< Float > te = _this3->elements;		HX_STACK_VAR(te,"te");
											HX_STACK_LINE(331)
											Float a11 = ae->__get((int)0);		HX_STACK_VAR(a11,"a11");
											HX_STACK_LINE(331)
											Float a12 = ae->__get((int)4);		HX_STACK_VAR(a12,"a12");
											HX_STACK_LINE(331)
											Float a13 = ae->__get((int)8);		HX_STACK_VAR(a13,"a13");
											HX_STACK_LINE(331)
											Float a14 = ae->__get((int)12);		HX_STACK_VAR(a14,"a14");
											HX_STACK_LINE(331)
											Float a21 = ae->__get((int)1);		HX_STACK_VAR(a21,"a21");
											HX_STACK_LINE(331)
											Float a22 = ae->__get((int)5);		HX_STACK_VAR(a22,"a22");
											HX_STACK_LINE(331)
											Float a23 = ae->__get((int)9);		HX_STACK_VAR(a23,"a23");
											HX_STACK_LINE(331)
											Float a24 = ae->__get((int)13);		HX_STACK_VAR(a24,"a24");
											HX_STACK_LINE(331)
											Float a31 = ae->__get((int)2);		HX_STACK_VAR(a31,"a31");
											HX_STACK_LINE(331)
											Float a32 = ae->__get((int)6);		HX_STACK_VAR(a32,"a32");
											HX_STACK_LINE(331)
											Float a33 = ae->__get((int)10);		HX_STACK_VAR(a33,"a33");
											HX_STACK_LINE(331)
											Float a34 = ae->__get((int)14);		HX_STACK_VAR(a34,"a34");
											HX_STACK_LINE(331)
											Float a41 = ae->__get((int)3);		HX_STACK_VAR(a41,"a41");
											HX_STACK_LINE(331)
											Float a42 = ae->__get((int)7);		HX_STACK_VAR(a42,"a42");
											HX_STACK_LINE(331)
											Float a43 = ae->__get((int)11);		HX_STACK_VAR(a43,"a43");
											HX_STACK_LINE(331)
											Float a44 = ae->__get((int)15);		HX_STACK_VAR(a44,"a44");
											HX_STACK_LINE(331)
											Float b11 = be->__get((int)0);		HX_STACK_VAR(b11,"b11");
											HX_STACK_LINE(331)
											Float b12 = be->__get((int)4);		HX_STACK_VAR(b12,"b12");
											HX_STACK_LINE(331)
											Float b13 = be->__get((int)8);		HX_STACK_VAR(b13,"b13");
											HX_STACK_LINE(331)
											Float b14 = be->__get((int)12);		HX_STACK_VAR(b14,"b14");
											HX_STACK_LINE(331)
											Float b21 = be->__get((int)1);		HX_STACK_VAR(b21,"b21");
											HX_STACK_LINE(331)
											Float b22 = be->__get((int)5);		HX_STACK_VAR(b22,"b22");
											HX_STACK_LINE(331)
											Float b23 = be->__get((int)9);		HX_STACK_VAR(b23,"b23");
											HX_STACK_LINE(331)
											Float b24 = be->__get((int)13);		HX_STACK_VAR(b24,"b24");
											HX_STACK_LINE(331)
											Float b31 = be->__get((int)2);		HX_STACK_VAR(b31,"b31");
											HX_STACK_LINE(331)
											Float b32 = be->__get((int)6);		HX_STACK_VAR(b32,"b32");
											HX_STACK_LINE(331)
											Float b33 = be->__get((int)10);		HX_STACK_VAR(b33,"b33");
											HX_STACK_LINE(331)
											Float b34 = be->__get((int)14);		HX_STACK_VAR(b34,"b34");
											HX_STACK_LINE(331)
											Float b41 = be->__get((int)3);		HX_STACK_VAR(b41,"b41");
											HX_STACK_LINE(331)
											Float b42 = be->__get((int)7);		HX_STACK_VAR(b42,"b42");
											HX_STACK_LINE(331)
											Float b43 = be->__get((int)11);		HX_STACK_VAR(b43,"b43");
											HX_STACK_LINE(331)
											Float b44 = be->__get((int)15);		HX_STACK_VAR(b44,"b44");
											HX_STACK_LINE(331)
											te[(int)0] = ((((a11 * b11) + (a12 * b21)) + (a13 * b31)) + (a14 * b41));
											HX_STACK_LINE(331)
											te[(int)4] = ((((a11 * b12) + (a12 * b22)) + (a13 * b32)) + (a14 * b42));
											HX_STACK_LINE(331)
											te[(int)8] = ((((a11 * b13) + (a12 * b23)) + (a13 * b33)) + (a14 * b43));
											HX_STACK_LINE(331)
											te[(int)12] = ((((a11 * b14) + (a12 * b24)) + (a13 * b34)) + (a14 * b44));
											HX_STACK_LINE(331)
											te[(int)1] = ((((a21 * b11) + (a22 * b21)) + (a23 * b31)) + (a24 * b41));
											HX_STACK_LINE(331)
											te[(int)5] = ((((a21 * b12) + (a22 * b22)) + (a23 * b32)) + (a24 * b42));
											HX_STACK_LINE(331)
											te[(int)9] = ((((a21 * b13) + (a22 * b23)) + (a23 * b33)) + (a24 * b43));
											HX_STACK_LINE(331)
											te[(int)13] = ((((a21 * b14) + (a22 * b24)) + (a23 * b34)) + (a24 * b44));
											HX_STACK_LINE(331)
											te[(int)2] = ((((a31 * b11) + (a32 * b21)) + (a33 * b31)) + (a34 * b41));
											HX_STACK_LINE(331)
											te[(int)6] = ((((a31 * b12) + (a32 * b22)) + (a33 * b32)) + (a34 * b42));
											HX_STACK_LINE(331)
											te[(int)10] = ((((a31 * b13) + (a32 * b23)) + (a33 * b33)) + (a34 * b43));
											HX_STACK_LINE(331)
											te[(int)14] = ((((a31 * b14) + (a32 * b24)) + (a33 * b34)) + (a34 * b44));
											HX_STACK_LINE(331)
											te[(int)3] = ((((a41 * b11) + (a42 * b21)) + (a43 * b31)) + (a44 * b41));
											HX_STACK_LINE(331)
											te[(int)7] = ((((a41 * b12) + (a42 * b22)) + (a43 * b32)) + (a44 * b42));
											HX_STACK_LINE(331)
											te[(int)11] = ((((a41 * b13) + (a42 * b23)) + (a43 * b33)) + (a44 * b43));
											HX_STACK_LINE(331)
											te[(int)15] = ((((a41 * b14) + (a42 * b24)) + (a43 * b34)) + (a44 * b44));
											HX_STACK_LINE(331)
											_this3;
										}
									}
									HX_STACK_LINE(331)
									if (((_this2->parent != null()))){
										HX_STACK_LINE(331)
										::phoenix::Spatial _this3 = _this2->get_world();		HX_STACK_VAR(_this3,"_this3");
										HX_STACK_LINE(331)
										::phoenix::Matrix _m1;		HX_STACK_VAR(_m1,"_m1");
										HX_STACK_LINE(331)
										{
											HX_STACK_LINE(331)
											::phoenix::Matrix _this4;		HX_STACK_VAR(_this4,"_this4");
											HX_STACK_LINE(331)
											{
												HX_STACK_LINE(331)
												::phoenix::Spatial _this5 = _this2->get_world();		HX_STACK_VAR(_this5,"_this5");
												HX_STACK_LINE(331)
												_this4 = _this5->matrix;
											}
											HX_STACK_LINE(331)
											::phoenix::Matrix _a;		HX_STACK_VAR(_a,"_a");
											HX_STACK_LINE(331)
											{
												HX_STACK_LINE(331)
												::phoenix::Spatial _this5 = _this2->parent->get_world();		HX_STACK_VAR(_this5,"_this5");
												HX_STACK_LINE(331)
												_a = _this5->matrix;
											}
											HX_STACK_LINE(331)
											Array< Float > ae = _a->elements;		HX_STACK_VAR(ae,"ae");
											HX_STACK_LINE(331)
											Array< Float > be = _this2->local->matrix->elements;		HX_STACK_VAR(be,"be");
											HX_STACK_LINE(331)
											Array< Float > te = _this4->elements;		HX_STACK_VAR(te,"te");
											HX_STACK_LINE(331)
											Float a11 = ae->__get((int)0);		HX_STACK_VAR(a11,"a11");
											HX_STACK_LINE(331)
											Float a12 = ae->__get((int)4);		HX_STACK_VAR(a12,"a12");
											HX_STACK_LINE(331)
											Float a13 = ae->__get((int)8);		HX_STACK_VAR(a13,"a13");
											HX_STACK_LINE(331)
											Float a14 = ae->__get((int)12);		HX_STACK_VAR(a14,"a14");
											HX_STACK_LINE(331)
											Float a21 = ae->__get((int)1);		HX_STACK_VAR(a21,"a21");
											HX_STACK_LINE(331)
											Float a22 = ae->__get((int)5);		HX_STACK_VAR(a22,"a22");
											HX_STACK_LINE(331)
											Float a23 = ae->__get((int)9);		HX_STACK_VAR(a23,"a23");
											HX_STACK_LINE(331)
											Float a24 = ae->__get((int)13);		HX_STACK_VAR(a24,"a24");
											HX_STACK_LINE(331)
											Float a31 = ae->__get((int)2);		HX_STACK_VAR(a31,"a31");
											HX_STACK_LINE(331)
											Float a32 = ae->__get((int)6);		HX_STACK_VAR(a32,"a32");
											HX_STACK_LINE(331)
											Float a33 = ae->__get((int)10);		HX_STACK_VAR(a33,"a33");
											HX_STACK_LINE(331)
											Float a34 = ae->__get((int)14);		HX_STACK_VAR(a34,"a34");
											HX_STACK_LINE(331)
											Float a41 = ae->__get((int)3);		HX_STACK_VAR(a41,"a41");
											HX_STACK_LINE(331)
											Float a42 = ae->__get((int)7);		HX_STACK_VAR(a42,"a42");
											HX_STACK_LINE(331)
											Float a43 = ae->__get((int)11);		HX_STACK_VAR(a43,"a43");
											HX_STACK_LINE(331)
											Float a44 = ae->__get((int)15);		HX_STACK_VAR(a44,"a44");
											HX_STACK_LINE(331)
											Float b11 = be->__get((int)0);		HX_STACK_VAR(b11,"b11");
											HX_STACK_LINE(331)
											Float b12 = be->__get((int)4);		HX_STACK_VAR(b12,"b12");
											HX_STACK_LINE(331)
											Float b13 = be->__get((int)8);		HX_STACK_VAR(b13,"b13");
											HX_STACK_LINE(331)
											Float b14 = be->__get((int)12);		HX_STACK_VAR(b14,"b14");
											HX_STACK_LINE(331)
											Float b21 = be->__get((int)1);		HX_STACK_VAR(b21,"b21");
											HX_STACK_LINE(331)
											Float b22 = be->__get((int)5);		HX_STACK_VAR(b22,"b22");
											HX_STACK_LINE(331)
											Float b23 = be->__get((int)9);		HX_STACK_VAR(b23,"b23");
											HX_STACK_LINE(331)
											Float b24 = be->__get((int)13);		HX_STACK_VAR(b24,"b24");
											HX_STACK_LINE(331)
											Float b31 = be->__get((int)2);		HX_STACK_VAR(b31,"b31");
											HX_STACK_LINE(331)
											Float b32 = be->__get((int)6);		HX_STACK_VAR(b32,"b32");
											HX_STACK_LINE(331)
											Float b33 = be->__get((int)10);		HX_STACK_VAR(b33,"b33");
											HX_STACK_LINE(331)
											Float b34 = be->__get((int)14);		HX_STACK_VAR(b34,"b34");
											HX_STACK_LINE(331)
											Float b41 = be->__get((int)3);		HX_STACK_VAR(b41,"b41");
											HX_STACK_LINE(331)
											Float b42 = be->__get((int)7);		HX_STACK_VAR(b42,"b42");
											HX_STACK_LINE(331)
											Float b43 = be->__get((int)11);		HX_STACK_VAR(b43,"b43");
											HX_STACK_LINE(331)
											Float b44 = be->__get((int)15);		HX_STACK_VAR(b44,"b44");
											HX_STACK_LINE(331)
											te[(int)0] = ((((a11 * b11) + (a12 * b21)) + (a13 * b31)) + (a14 * b41));
											HX_STACK_LINE(331)
											te[(int)4] = ((((a11 * b12) + (a12 * b22)) + (a13 * b32)) + (a14 * b42));
											HX_STACK_LINE(331)
											te[(int)8] = ((((a11 * b13) + (a12 * b23)) + (a13 * b33)) + (a14 * b43));
											HX_STACK_LINE(331)
											te[(int)12] = ((((a11 * b14) + (a12 * b24)) + (a13 * b34)) + (a14 * b44));
											HX_STACK_LINE(331)
											te[(int)1] = ((((a21 * b11) + (a22 * b21)) + (a23 * b31)) + (a24 * b41));
											HX_STACK_LINE(331)
											te[(int)5] = ((((a21 * b12) + (a22 * b22)) + (a23 * b32)) + (a24 * b42));
											HX_STACK_LINE(331)
											te[(int)9] = ((((a21 * b13) + (a22 * b23)) + (a23 * b33)) + (a24 * b43));
											HX_STACK_LINE(331)
											te[(int)13] = ((((a21 * b14) + (a22 * b24)) + (a23 * b34)) + (a24 * b44));
											HX_STACK_LINE(331)
											te[(int)2] = ((((a31 * b11) + (a32 * b21)) + (a33 * b31)) + (a34 * b41));
											HX_STACK_LINE(331)
											te[(int)6] = ((((a31 * b12) + (a32 * b22)) + (a33 * b32)) + (a34 * b42));
											HX_STACK_LINE(331)
											te[(int)10] = ((((a31 * b13) + (a32 * b23)) + (a33 * b33)) + (a34 * b43));
											HX_STACK_LINE(331)
											te[(int)14] = ((((a31 * b14) + (a32 * b24)) + (a33 * b34)) + (a34 * b44));
											HX_STACK_LINE(331)
											te[(int)3] = ((((a41 * b11) + (a42 * b21)) + (a43 * b31)) + (a44 * b41));
											HX_STACK_LINE(331)
											te[(int)7] = ((((a41 * b12) + (a42 * b22)) + (a43 * b32)) + (a44 * b42));
											HX_STACK_LINE(331)
											te[(int)11] = ((((a41 * b13) + (a42 * b23)) + (a43 * b33)) + (a44 * b43));
											HX_STACK_LINE(331)
											te[(int)15] = ((((a41 * b14) + (a42 * b24)) + (a43 * b34)) + (a44 * b44));
											HX_STACK_LINE(331)
											_m1 = _this4;
										}
										HX_STACK_LINE(331)
										_this3->matrix = _m1;
										HX_STACK_LINE(331)
										if (((_m1 != null()))){
											HX_STACK_LINE(331)
											::snow::platform::native::utils::Float32Array _g7;		HX_STACK_VAR(_g7,"_g7");
											HX_STACK_LINE(331)
											{
												HX_STACK_LINE(331)
												::phoenix::Matrix _this4 = _this3->matrix;		HX_STACK_VAR(_this4,"_this4");
												HX_STACK_LINE(331)
												{
													HX_STACK_LINE(331)
													::snow::platform::native::utils::Float32Array _this5 = _this4->_float32array;		HX_STACK_VAR(_this5,"_this5");
													HX_STACK_LINE(331)
													Dynamic bufferOrArray = _this4->elements;		HX_STACK_VAR(bufferOrArray,"bufferOrArray");
													HX_STACK_LINE(331)
													int offset = (int)0;		HX_STACK_VAR(offset,"offset");
													HX_STACK_LINE(331)
													if ((::Std_obj::is(bufferOrArray,hx::ClassOf< Array<int> >()))){
														HX_STACK_LINE(331)
														Array< Float > floats = bufferOrArray;		HX_STACK_VAR(floats,"floats");
														HX_STACK_LINE(331)
														{
															HX_STACK_LINE(331)
															int _g11 = (int)0;		HX_STACK_VAR(_g11,"_g11");
															HX_STACK_LINE(331)
															int _g2 = floats->length;		HX_STACK_VAR(_g2,"_g2");
															HX_STACK_LINE(331)
															while((true)){
																HX_STACK_LINE(331)
																if ((!(((_g11 < _g2))))){
																	HX_STACK_LINE(331)
																	break;
																}
																HX_STACK_LINE(331)
																int i = (_g11)++;		HX_STACK_VAR(i,"i");
																HX_STACK_LINE(331)
																::__hxcpp_memory_set_float(_this5->bytes,(((int((i + offset)) << int((int)2))) + _this5->byteOffset),floats->__get(i));
															}
														}
													}
													else{
														HX_STACK_LINE(331)
														if ((::Std_obj::is(bufferOrArray,hx::ClassOf< ::snow::platform::native::utils::Float32Array >()))){
															HX_STACK_LINE(331)
															::snow::platform::native::utils::Float32Array floats = bufferOrArray;		HX_STACK_VAR(floats,"floats");
															HX_STACK_LINE(331)
															{
																HX_STACK_LINE(331)
																int _g11 = (int)0;		HX_STACK_VAR(_g11,"_g11");
																HX_STACK_LINE(331)
																int _g2 = floats->length;		HX_STACK_VAR(_g2,"_g2");
																HX_STACK_LINE(331)
																while((true)){
																	HX_STACK_LINE(331)
																	if ((!(((_g11 < _g2))))){
																		HX_STACK_LINE(331)
																		break;
																	}
																	HX_STACK_LINE(331)
																	int i = (_g11)++;		HX_STACK_VAR(i,"i");
																	HX_STACK_LINE(331)
																	::__hxcpp_memory_set_float(_this5->bytes,(((int((i + offset)) << int((int)2))) + _this5->byteOffset),floats->__get(i));
																}
															}
														}
														else{
															HX_STACK_LINE(331)
															HX_STACK_DO_THROW(HX_CSTRING("Invalid input buffer"));
														}
													}
												}
												HX_STACK_LINE(331)
												_g7 = ::snow::platform::native::utils::Float32Array_obj::__new(_this4->_float32array,null(),null());
											}
											HX_STACK_LINE(331)
											_this3->floats = _g7;
										}
										HX_STACK_LINE(331)
										_this3->matrix;
									}
									else{
										HX_STACK_LINE(331)
										::phoenix::Spatial _this3 = _this2->get_world();		HX_STACK_VAR(_this3,"_this3");
										HX_STACK_LINE(331)
										::phoenix::Matrix _m1;		HX_STACK_VAR(_m1,"_m1");
										HX_STACK_LINE(331)
										{
											HX_STACK_LINE(331)
											Array< Float > te = _this2->local->matrix->elements;		HX_STACK_VAR(te,"te");
											HX_STACK_LINE(331)
											_m1 = ::phoenix::Matrix_obj::__new(te->__get((int)0),te->__get((int)4),te->__get((int)8),te->__get((int)12),te->__get((int)1),te->__get((int)5),te->__get((int)9),te->__get((int)13),te->__get((int)2),te->__get((int)6),te->__get((int)10),te->__get((int)14),te->__get((int)3),te->__get((int)7),te->__get((int)11),te->__get((int)15));
										}
										HX_STACK_LINE(331)
										_this3->matrix = _m1;
										HX_STACK_LINE(331)
										if (((_m1 != null()))){
											HX_STACK_LINE(331)
											::snow::platform::native::utils::Float32Array _g8;		HX_STACK_VAR(_g8,"_g8");
											HX_STACK_LINE(331)
											{
												HX_STACK_LINE(331)
												::phoenix::Matrix _this4 = _this3->matrix;		HX_STACK_VAR(_this4,"_this4");
												HX_STACK_LINE(331)
												{
													HX_STACK_LINE(331)
													::snow::platform::native::utils::Float32Array _this5 = _this4->_float32array;		HX_STACK_VAR(_this5,"_this5");
													HX_STACK_LINE(331)
													Dynamic bufferOrArray = _this4->elements;		HX_STACK_VAR(bufferOrArray,"bufferOrArray");
													HX_STACK_LINE(331)
													int offset = (int)0;		HX_STACK_VAR(offset,"offset");
													HX_STACK_LINE(331)
													if ((::Std_obj::is(bufferOrArray,hx::ClassOf< Array<int> >()))){
														HX_STACK_LINE(331)
														Array< Float > floats = bufferOrArray;		HX_STACK_VAR(floats,"floats");
														HX_STACK_LINE(331)
														{
															HX_STACK_LINE(331)
															int _g11 = (int)0;		HX_STACK_VAR(_g11,"_g11");
															HX_STACK_LINE(331)
															int _g2 = floats->length;		HX_STACK_VAR(_g2,"_g2");
															HX_STACK_LINE(331)
															while((true)){
																HX_STACK_LINE(331)
																if ((!(((_g11 < _g2))))){
																	HX_STACK_LINE(331)
																	break;
																}
																HX_STACK_LINE(331)
																int i = (_g11)++;		HX_STACK_VAR(i,"i");
																HX_STACK_LINE(331)
																::__hxcpp_memory_set_float(_this5->bytes,(((int((i + offset)) << int((int)2))) + _this5->byteOffset),floats->__get(i));
															}
														}
													}
													else{
														HX_STACK_LINE(331)
														if ((::Std_obj::is(bufferOrArray,hx::ClassOf< ::snow::platform::native::utils::Float32Array >()))){
															HX_STACK_LINE(331)
															::snow::platform::native::utils::Float32Array floats = bufferOrArray;		HX_STACK_VAR(floats,"floats");
															HX_STACK_LINE(331)
															{
																HX_STACK_LINE(331)
																int _g11 = (int)0;		HX_STACK_VAR(_g11,"_g11");
																HX_STACK_LINE(331)
																int _g2 = floats->length;		HX_STACK_VAR(_g2,"_g2");
																HX_STACK_LINE(331)
																while((true)){
																	HX_STACK_LINE(331)
																	if ((!(((_g11 < _g2))))){
																		HX_STACK_LINE(331)
																		break;
																	}
																	HX_STACK_LINE(331)
																	int i = (_g11)++;		HX_STACK_VAR(i,"i");
																	HX_STACK_LINE(331)
																	::__hxcpp_memory_set_float(_this5->bytes,(((int((i + offset)) << int((int)2))) + _this5->byteOffset),floats->__get(i));
																}
															}
														}
														else{
															HX_STACK_LINE(331)
															HX_STACK_DO_THROW(HX_CSTRING("Invalid input buffer"));
														}
													}
												}
												HX_STACK_LINE(331)
												_g8 = ::snow::platform::native::utils::Float32Array_obj::__new(_this4->_float32array,null(),null());
											}
											HX_STACK_LINE(331)
											_this3->floats = _g8;
										}
										HX_STACK_LINE(331)
										_this3->matrix;
									}
									HX_STACK_LINE(331)
									{
										HX_STACK_LINE(331)
										::phoenix::Spatial _this3 = _this2->get_world();		HX_STACK_VAR(_this3,"_this3");
										HX_STACK_LINE(331)
										if ((_this3->auto_decompose)){
											HX_STACK_LINE(331)
											::phoenix::MatrixTransform _transform;		HX_STACK_VAR(_transform,"_transform");
											HX_STACK_LINE(331)
											{
												HX_STACK_LINE(331)
												::phoenix::Matrix _this4 = _this3->matrix;		HX_STACK_VAR(_this4,"_this4");
												HX_STACK_LINE(331)
												::phoenix::Vector _position = null();		HX_STACK_VAR(_position,"_position");
												HX_STACK_LINE(331)
												::phoenix::Quaternion _quaternion = null();		HX_STACK_VAR(_quaternion,"_quaternion");
												HX_STACK_LINE(331)
												::phoenix::Vector _scale = null();		HX_STACK_VAR(_scale,"_scale");
												HX_STACK_LINE(331)
												Array< Float > te = _this4->elements;		HX_STACK_VAR(te,"te");
												HX_STACK_LINE(331)
												::phoenix::Matrix matrix = ::phoenix::Matrix_obj::__new(null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(matrix,"matrix");
												HX_STACK_LINE(331)
												Float _ax_x = te->__get((int)0);		HX_STACK_VAR(_ax_x,"_ax_x");
												HX_STACK_LINE(331)
												Float _ax_y = te->__get((int)1);		HX_STACK_VAR(_ax_y,"_ax_y");
												HX_STACK_LINE(331)
												Float _ax_z = te->__get((int)2);		HX_STACK_VAR(_ax_z,"_ax_z");
												HX_STACK_LINE(331)
												Float _ay_x = te->__get((int)4);		HX_STACK_VAR(_ay_x,"_ay_x");
												HX_STACK_LINE(331)
												Float _ay_y = te->__get((int)5);		HX_STACK_VAR(_ay_y,"_ay_y");
												HX_STACK_LINE(331)
												Float _ay_z = te->__get((int)6);		HX_STACK_VAR(_ay_z,"_ay_z");
												HX_STACK_LINE(331)
												Float _az_x = te->__get((int)8);		HX_STACK_VAR(_az_x,"_az_x");
												HX_STACK_LINE(331)
												Float _az_y = te->__get((int)9);		HX_STACK_VAR(_az_y,"_az_y");
												HX_STACK_LINE(331)
												Float _az_z = te->__get((int)10);		HX_STACK_VAR(_az_z,"_az_z");
												HX_STACK_LINE(331)
												Float _ax_length = ::Math_obj::sqrt((((_ax_x * _ax_x) + (_ax_y * _ax_y)) + (_ax_z * _ax_z)));		HX_STACK_VAR(_ax_length,"_ax_length");
												HX_STACK_LINE(331)
												Float _ay_length = ::Math_obj::sqrt((((_ay_x * _ay_x) + (_ay_y * _ay_y)) + (_ay_z * _ay_z)));		HX_STACK_VAR(_ay_length,"_ay_length");
												HX_STACK_LINE(331)
												Float _az_length = ::Math_obj::sqrt((((_az_x * _az_x) + (_az_y * _az_y)) + (_az_z * _az_z)));		HX_STACK_VAR(_az_length,"_az_length");
												HX_STACK_LINE(331)
												if (((_quaternion == null()))){
													HX_STACK_LINE(331)
													::phoenix::Quaternion _g9 = ::phoenix::Quaternion_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(_g9,"_g9");
													HX_STACK_LINE(331)
													_quaternion = _g9;
												}
												HX_STACK_LINE(331)
												if (((_position == null()))){
													HX_STACK_LINE(331)
													::phoenix::Vector _g10 = ::phoenix::Vector_obj::__new(te->__get((int)12),te->__get((int)13),te->__get((int)14),null());		HX_STACK_VAR(_g10,"_g10");
													HX_STACK_LINE(331)
													_position = _g10;
												}
												else{
													HX_STACK_LINE(331)
													{
														HX_STACK_LINE(331)
														Float _x = te->__get((int)12);		HX_STACK_VAR(_x,"_x");
														HX_STACK_LINE(331)
														_position->x = _x;
														HX_STACK_LINE(331)
														if ((_position->_construct)){
															HX_STACK_LINE(331)
															_position->x;
														}
														else{
															HX_STACK_LINE(331)
															if (((bool((_position->listen_x != null())) && bool(!(_position->ignore_listeners))))){
																HX_STACK_LINE(331)
																_position->listen_x(_x);
															}
															HX_STACK_LINE(331)
															_position->x;
														}
													}
													HX_STACK_LINE(331)
													{
														HX_STACK_LINE(331)
														Float _y = te->__get((int)13);		HX_STACK_VAR(_y,"_y");
														HX_STACK_LINE(331)
														_position->y = _y;
														HX_STACK_LINE(331)
														if ((_position->_construct)){
															HX_STACK_LINE(331)
															_position->y;
														}
														else{
															HX_STACK_LINE(331)
															if (((bool((_position->listen_y != null())) && bool(!(_position->ignore_listeners))))){
																HX_STACK_LINE(331)
																_position->listen_y(_y);
															}
															HX_STACK_LINE(331)
															_position->y;
														}
													}
													HX_STACK_LINE(331)
													{
														HX_STACK_LINE(331)
														Float _z = te->__get((int)14);		HX_STACK_VAR(_z,"_z");
														HX_STACK_LINE(331)
														_position->z = _z;
														HX_STACK_LINE(331)
														if ((_position->_construct)){
															HX_STACK_LINE(331)
															_position->z;
														}
														else{
															HX_STACK_LINE(331)
															if (((bool((_position->listen_z != null())) && bool(!(_position->ignore_listeners))))){
																HX_STACK_LINE(331)
																_position->listen_z(_z);
															}
															HX_STACK_LINE(331)
															_position->z;
														}
													}
												}
												HX_STACK_LINE(331)
												if (((_scale == null()))){
													HX_STACK_LINE(331)
													::phoenix::Vector _g11 = ::phoenix::Vector_obj::__new(_ax_length,_ay_length,_az_length,null());		HX_STACK_VAR(_g11,"_g11");
													HX_STACK_LINE(331)
													_scale = _g11;
												}
												else{
													HX_STACK_LINE(331)
													{
														HX_STACK_LINE(331)
														_scale->x = _ax_length;
														HX_STACK_LINE(331)
														if ((_scale->_construct)){
															HX_STACK_LINE(331)
															_scale->x;
														}
														else{
															HX_STACK_LINE(331)
															if (((bool((_scale->listen_x != null())) && bool(!(_scale->ignore_listeners))))){
																HX_STACK_LINE(331)
																_scale->listen_x(_ax_length);
															}
															HX_STACK_LINE(331)
															_scale->x;
														}
													}
													HX_STACK_LINE(331)
													{
														HX_STACK_LINE(331)
														_scale->y = _ay_length;
														HX_STACK_LINE(331)
														if ((_scale->_construct)){
															HX_STACK_LINE(331)
															_scale->y;
														}
														else{
															HX_STACK_LINE(331)
															if (((bool((_scale->listen_y != null())) && bool(!(_scale->ignore_listeners))))){
																HX_STACK_LINE(331)
																_scale->listen_y(_ay_length);
															}
															HX_STACK_LINE(331)
															_scale->y;
														}
													}
													HX_STACK_LINE(331)
													{
														HX_STACK_LINE(331)
														_scale->z = _az_length;
														HX_STACK_LINE(331)
														if ((_scale->_construct)){
															HX_STACK_LINE(331)
															_scale->z;
														}
														else{
															HX_STACK_LINE(331)
															if (((bool((_scale->listen_z != null())) && bool(!(_scale->ignore_listeners))))){
																HX_STACK_LINE(331)
																_scale->listen_z(_az_length);
															}
															HX_STACK_LINE(331)
															_scale->z;
														}
													}
												}
												HX_STACK_LINE(331)
												Array< Float > _g12 = _this4->elements->concat(Array_obj< Float >::__new());		HX_STACK_VAR(_g12,"_g12");
												HX_STACK_LINE(331)
												matrix->elements = _g12;
												HX_STACK_LINE(331)
												Array< Float > me = matrix->elements;		HX_STACK_VAR(me,"me");
												HX_STACK_LINE(331)
												hx::DivEq(me[(int)0],_ax_length);
												HX_STACK_LINE(331)
												hx::DivEq(me[(int)1],_ax_length);
												HX_STACK_LINE(331)
												hx::DivEq(me[(int)2],_ax_length);
												HX_STACK_LINE(331)
												hx::DivEq(me[(int)4],_ay_length);
												HX_STACK_LINE(331)
												hx::DivEq(me[(int)5],_ay_length);
												HX_STACK_LINE(331)
												hx::DivEq(me[(int)6],_ay_length);
												HX_STACK_LINE(331)
												hx::DivEq(me[(int)8],_az_length);
												HX_STACK_LINE(331)
												hx::DivEq(me[(int)9],_az_length);
												HX_STACK_LINE(331)
												hx::DivEq(me[(int)10],_az_length);
												HX_STACK_LINE(331)
												_quaternion->setFromRotationMatrix(matrix);
												HX_STACK_LINE(331)
												if (((_this4->_transform == null()))){
													HX_STACK_LINE(331)
													::phoenix::MatrixTransform _g13 = ::phoenix::MatrixTransform_obj::__new(_position,_quaternion,_scale);		HX_STACK_VAR(_g13,"_g13");
													HX_STACK_LINE(331)
													_this4->_transform = _g13;
												}
												else{
													HX_STACK_LINE(331)
													_this4->_transform->pos = _position;
													HX_STACK_LINE(331)
													_this4->_transform->rotation = _quaternion;
													HX_STACK_LINE(331)
													_this4->_transform->scale = _scale;
												}
												HX_STACK_LINE(331)
												_transform = _this4->_transform;
											}
											HX_STACK_LINE(331)
											{
												HX_STACK_LINE(331)
												::phoenix::Vector _p = _transform->pos;		HX_STACK_VAR(_p,"_p");
												HX_STACK_LINE(331)
												_this3->pos = _p;
												HX_STACK_LINE(331)
												if (((_p != null()))){
													HX_STACK_LINE(331)
													::phoenix::Vector_obj::Listen(_this3->pos,_this3->_pos_change_dyn());
													HX_STACK_LINE(331)
													if (((bool((_this3->pos_changed != null())) && bool(!(_this3->ignore_listeners))))){
														HX_STACK_LINE(331)
														_this3->pos_changed(_this3->pos);
													}
												}
												HX_STACK_LINE(331)
												_this3->pos;
											}
											HX_STACK_LINE(331)
											{
												HX_STACK_LINE(331)
												::phoenix::Quaternion _r = _transform->rotation;		HX_STACK_VAR(_r,"_r");
												HX_STACK_LINE(331)
												_this3->rotation = _r;
												HX_STACK_LINE(331)
												if (((_r != null()))){
													HX_STACK_LINE(331)
													{
														HX_STACK_LINE(331)
														::phoenix::Quaternion _q = _this3->rotation;		HX_STACK_VAR(_q,"_q");
														HX_STACK_LINE(331)
														Dynamic listener = _this3->_rotation_change_dyn();		HX_STACK_VAR(listener,"listener");
														HX_STACK_LINE(331)
														_q->listen_x = listener;
														HX_STACK_LINE(331)
														_q->listen_y = listener;
														HX_STACK_LINE(331)
														_q->listen_z = listener;
														HX_STACK_LINE(331)
														_q->listen_w = listener;
													}
													HX_STACK_LINE(331)
													if (((bool((_this3->rotation_changed != null())) && bool(!(_this3->ignore_listeners))))){
														HX_STACK_LINE(331)
														_this3->rotation_changed(_this3->rotation);
													}
												}
												HX_STACK_LINE(331)
												_this3->rotation;
											}
											HX_STACK_LINE(331)
											{
												HX_STACK_LINE(331)
												::phoenix::Vector _s = _transform->scale;		HX_STACK_VAR(_s,"_s");
												HX_STACK_LINE(331)
												_this3->scale = _s;
												HX_STACK_LINE(331)
												if (((_s != null()))){
													HX_STACK_LINE(331)
													::phoenix::Vector_obj::Listen(_this3->scale,_this3->_scale_change_dyn());
													HX_STACK_LINE(331)
													if (((bool((_this3->scale_changed != null())) && bool(!(_this3->ignore_listeners))))){
														HX_STACK_LINE(331)
														_this3->scale_changed(_this3->scale);
													}
												}
												HX_STACK_LINE(331)
												_this3->scale;
											}
										}
										HX_STACK_LINE(331)
										_this3;
									}
									HX_STACK_LINE(331)
									{
										HX_STACK_LINE(331)
										_this2->dirty = false;
										HX_STACK_LINE(331)
										if (((bool((bool((bool(_this2->dirty) && bool(!(_this2->_setup)))) && bool((_this2->_dirty_handlers != null())))) && bool((_this2->_dirty_handlers->__Field(HX_CSTRING("length"),true) > (int)0))))){
											HX_STACK_LINE(331)
											int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
											HX_STACK_LINE(331)
											Dynamic _g11 = _this2->_dirty_handlers;		HX_STACK_VAR(_g11,"_g11");
											HX_STACK_LINE(331)
											while((true)){
												HX_STACK_LINE(331)
												if ((!(((_g2 < _g11->__Field(HX_CSTRING("length"),true)))))){
													HX_STACK_LINE(331)
													break;
												}
												HX_STACK_LINE(331)
												Dynamic _handler = _g11->__GetItem(_g2);		HX_STACK_VAR(_handler,"_handler");
												HX_STACK_LINE(331)
												++(_g2);
												HX_STACK_LINE(331)
												if (((_handler != null()))){
													HX_STACK_LINE(331)
													_handler(_this2).Cast< Void >();
												}
											}
										}
										HX_STACK_LINE(331)
										_this2->dirty;
									}
									HX_STACK_LINE(331)
									_this2->_cleaning = false;
									HX_STACK_LINE(331)
									if (((bool((_this2->_clean_handlers != null())) && bool((_this2->_clean_handlers->__Field(HX_CSTRING("length"),true) > (int)0))))){
										HX_STACK_LINE(331)
										int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
										HX_STACK_LINE(331)
										Dynamic _g11 = _this2->_clean_handlers;		HX_STACK_VAR(_g11,"_g11");
										HX_STACK_LINE(331)
										while((true)){
											HX_STACK_LINE(331)
											if ((!(((_g2 < _g11->__Field(HX_CSTRING("length"),true)))))){
												HX_STACK_LINE(331)
												break;
											}
											HX_STACK_LINE(331)
											Dynamic _handler = _g11->__GetItem(_g2);		HX_STACK_VAR(_handler,"_handler");
											HX_STACK_LINE(331)
											++(_g2);
											HX_STACK_LINE(331)
											if (((_handler != null()))){
												HX_STACK_LINE(331)
												_handler(_this2).Cast< Void >();
											}
										}
									}
								}
							}
						}
						HX_STACK_LINE(331)
						_this1 = _this2->world;
					}
					HX_STACK_LINE(331)
					_m = _this1->matrix;
				}
				HX_STACK_LINE(331)
				Float _x = _this->x;		HX_STACK_VAR(_x,"_x");
				HX_STACK_LINE(331)
				Float _y = _this->y;		HX_STACK_VAR(_y,"_y");
				HX_STACK_LINE(331)
				Float _z = _this->z;		HX_STACK_VAR(_z,"_z");
				HX_STACK_LINE(331)
				Array< Float > e = _m->elements;		HX_STACK_VAR(e,"e");
				HX_STACK_LINE(331)
				{
					HX_STACK_LINE(331)
					Float _x1 = ((((e->__get((int)0) * _x) + (e->__get((int)4) * _y)) + (e->__get((int)8) * _z)) + e->__get((int)12));		HX_STACK_VAR(_x1,"_x1");
					HX_STACK_LINE(331)
					Float _y1 = ((((e->__get((int)1) * _x) + (e->__get((int)5) * _y)) + (e->__get((int)9) * _z)) + e->__get((int)13));		HX_STACK_VAR(_y1,"_y1");
					HX_STACK_LINE(331)
					Float _z1 = ((((e->__get((int)2) * _x) + (e->__get((int)6) * _y)) + (e->__get((int)10) * _z)) + e->__get((int)14));		HX_STACK_VAR(_z1,"_z1");
					HX_STACK_LINE(331)
					bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
					HX_STACK_LINE(331)
					_this->ignore_listeners = true;
					HX_STACK_LINE(331)
					{
						HX_STACK_LINE(331)
						_this->x = _x1;
						HX_STACK_LINE(331)
						if ((_this->_construct)){
							HX_STACK_LINE(331)
							_this->x;
						}
						else{
							HX_STACK_LINE(331)
							if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
								HX_STACK_LINE(331)
								_this->listen_x(_x1);
							}
							HX_STACK_LINE(331)
							_this->x;
						}
					}
					HX_STACK_LINE(331)
					{
						HX_STACK_LINE(331)
						_this->y = _y1;
						HX_STACK_LINE(331)
						if ((_this->_construct)){
							HX_STACK_LINE(331)
							_this->y;
						}
						else{
							HX_STACK_LINE(331)
							if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
								HX_STACK_LINE(331)
								_this->listen_y(_y1);
							}
							HX_STACK_LINE(331)
							_this->y;
						}
					}
					HX_STACK_LINE(331)
					{
						HX_STACK_LINE(331)
						_this->z = _z1;
						HX_STACK_LINE(331)
						if ((_this->_construct)){
							HX_STACK_LINE(331)
							_this->z;
						}
						else{
							HX_STACK_LINE(331)
							if (((bool((_this->listen_z != null())) && bool(!(_this->ignore_listeners))))){
								HX_STACK_LINE(331)
								_this->listen_z(_z1);
							}
							HX_STACK_LINE(331)
							_this->z;
						}
					}
					HX_STACK_LINE(331)
					_this->ignore_listeners = prev;
					HX_STACK_LINE(331)
					if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
						HX_STACK_LINE(331)
						_this->listen_x(_this->x);
					}
					HX_STACK_LINE(331)
					if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
						HX_STACK_LINE(331)
						_this->listen_y(_this->y);
					}
					HX_STACK_LINE(331)
					if (((bool((_this->listen_z != null())) && bool(!(_this->ignore_listeners))))){
						HX_STACK_LINE(331)
						_this->listen_z(_this->z);
					}
					HX_STACK_LINE(331)
					_this;
				}
				HX_STACK_LINE(331)
				_this;
			}
			HX_STACK_LINE(334)
			vertlist->push(this->_final_vert_position->x);
			HX_STACK_LINE(335)
			vertlist->push(this->_final_vert_position->y);
			HX_STACK_LINE(336)
			vertlist->push(this->_final_vert_position->z);
			HX_STACK_LINE(337)
			vertlist->push(this->_final_vert_position->w);
			HX_STACK_LINE(340)
			tcoordlist->push(v->uv->uv0->u);
			HX_STACK_LINE(341)
			tcoordlist->push(v->uv->uv0->v);
			HX_STACK_LINE(342)
			tcoordlist->push(v->uv->uv0->w);
			HX_STACK_LINE(343)
			tcoordlist->push(v->uv->uv0->t);
			HX_STACK_LINE(346)
			colorlist->push(v->color->r);
			HX_STACK_LINE(347)
			colorlist->push(v->color->g);
			HX_STACK_LINE(348)
			colorlist->push(v->color->b);
			HX_STACK_LINE(349)
			colorlist->push(v->color->a);
			HX_STACK_LINE(352)
			normallist->push(v->normal->x);
			HX_STACK_LINE(353)
			normallist->push(v->normal->y);
			HX_STACK_LINE(354)
			normallist->push(v->normal->z);
			HX_STACK_LINE(355)
			normallist->push(v->normal->w);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Geometry_obj,batch_into_arrays,(void))

Void Geometry_obj::translate( ::phoenix::Vector _offset){
{
		HX_STACK_FRAME("phoenix.geometry.Geometry","translate",0xde6d918f,"phoenix.geometry.Geometry.translate","phoenix/geometry/Geometry.hx",365,0xdab136cf)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_offset,"_offset")
		HX_STACK_LINE(365)
		::phoenix::Vector _this = this->transform->local->pos;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(365)
		Float _x = (this->transform->local->pos->x + _offset->x);		HX_STACK_VAR(_x,"_x");
		HX_STACK_LINE(365)
		Float _y = (this->transform->local->pos->y + _offset->y);		HX_STACK_VAR(_y,"_y");
		HX_STACK_LINE(365)
		Float _z = (this->transform->local->pos->x + _offset->z);		HX_STACK_VAR(_z,"_z");
		HX_STACK_LINE(365)
		bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
		HX_STACK_LINE(365)
		_this->ignore_listeners = true;
		HX_STACK_LINE(365)
		{
			HX_STACK_LINE(365)
			_this->x = _x;
			HX_STACK_LINE(365)
			if ((_this->_construct)){
				HX_STACK_LINE(365)
				_this->x;
			}
			else{
				HX_STACK_LINE(365)
				if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
					HX_STACK_LINE(365)
					_this->listen_x(_x);
				}
				HX_STACK_LINE(365)
				_this->x;
			}
		}
		HX_STACK_LINE(365)
		{
			HX_STACK_LINE(365)
			_this->y = _y;
			HX_STACK_LINE(365)
			if ((_this->_construct)){
				HX_STACK_LINE(365)
				_this->y;
			}
			else{
				HX_STACK_LINE(365)
				if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
					HX_STACK_LINE(365)
					_this->listen_y(_y);
				}
				HX_STACK_LINE(365)
				_this->y;
			}
		}
		HX_STACK_LINE(365)
		{
			HX_STACK_LINE(365)
			_this->z = _z;
			HX_STACK_LINE(365)
			if ((_this->_construct)){
				HX_STACK_LINE(365)
				_this->z;
			}
			else{
				HX_STACK_LINE(365)
				if (((bool((_this->listen_z != null())) && bool(!(_this->ignore_listeners))))){
					HX_STACK_LINE(365)
					_this->listen_z(_z);
				}
				HX_STACK_LINE(365)
				_this->z;
			}
		}
		HX_STACK_LINE(365)
		_this->ignore_listeners = prev;
		HX_STACK_LINE(365)
		if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
			HX_STACK_LINE(365)
			_this->listen_x(_this->x);
		}
		HX_STACK_LINE(365)
		if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
			HX_STACK_LINE(365)
			_this->listen_y(_this->y);
		}
		HX_STACK_LINE(365)
		if (((bool((_this->listen_z != null())) && bool(!(_this->ignore_listeners))))){
			HX_STACK_LINE(365)
			_this->listen_z(_this->z);
		}
		HX_STACK_LINE(365)
		_this;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Geometry_obj,translate,(void))

bool Geometry_obj::set_locked( bool _locked){
	HX_STACK_FRAME("phoenix.geometry.Geometry","set_locked",0x08e151e6,"phoenix.geometry.Geometry.set_locked","phoenix/geometry/Geometry.hx",371,0xdab136cf)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_locked,"_locked")
	HX_STACK_LINE(371)
	return this->locked = _locked;
}


HX_DEFINE_DYNAMIC_FUNC1(Geometry_obj,set_locked,return )

bool Geometry_obj::get_locked( ){
	HX_STACK_FRAME("phoenix.geometry.Geometry","get_locked",0x0563b372,"phoenix.geometry.Geometry.get_locked","phoenix/geometry/Geometry.hx",377,0xdab136cf)
	HX_STACK_THIS(this)
	HX_STACK_LINE(377)
	return this->locked;
}


HX_DEFINE_DYNAMIC_FUNC0(Geometry_obj,get_locked,return )

bool Geometry_obj::set_dirty( bool _dirty){
	HX_STACK_FRAME("phoenix.geometry.Geometry","set_dirty",0x95b852b6,"phoenix.geometry.Geometry.set_dirty","phoenix/geometry/Geometry.hx",383,0xdab136cf)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_dirty,"_dirty")
	HX_STACK_LINE(383)
	return this->dirty = _dirty;
}


HX_DEFINE_DYNAMIC_FUNC1(Geometry_obj,set_dirty,return )

bool Geometry_obj::get_dirty( ){
	HX_STACK_FRAME("phoenix.geometry.Geometry","get_dirty",0xb26766aa,"phoenix.geometry.Geometry.get_dirty","phoenix/geometry/Geometry.hx",389,0xdab136cf)
	HX_STACK_THIS(this)
	HX_STACK_LINE(389)
	return this->dirty;
}


HX_DEFINE_DYNAMIC_FUNC0(Geometry_obj,get_dirty,return )

Void Geometry_obj::refresh( ){
{
		HX_STACK_FRAME("phoenix.geometry.Geometry","refresh",0x7a5fd1dc,"phoenix.geometry.Geometry.refresh","phoenix/geometry/Geometry.hx",395,0xdab136cf)
		HX_STACK_THIS(this)
		HX_STACK_LINE(398)
		{
			HX_STACK_LINE(398)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(398)
			Array< ::Dynamic > _g1 = this->batchers;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(398)
			while((true)){
				HX_STACK_LINE(398)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(398)
					break;
				}
				HX_STACK_LINE(398)
				::phoenix::Batcher b = _g1->__get(_g).StaticCast< ::phoenix::Batcher >();		HX_STACK_VAR(b,"b");
				HX_STACK_LINE(398)
				++(_g);
				HX_STACK_LINE(399)
				b->remove(hx::ObjectPtr<OBJ_>(this),false);
			}
		}
		HX_STACK_LINE(403)
		if ((this->dirty_primitive_type)){
			HX_STACK_LINE(404)
			this->dirty_primitive_type = false;
			HX_STACK_LINE(405)
			this->state->set_primitive_type(this->shadow_primitive_type);
		}
		HX_STACK_LINE(408)
		if ((this->dirty_texture)){
			HX_STACK_LINE(409)
			this->dirty_texture = false;
			HX_STACK_LINE(410)
			this->state->set_texture(this->shadow_texture);
		}
		HX_STACK_LINE(413)
		if ((this->dirty_shader)){
			HX_STACK_LINE(414)
			this->dirty_shader = false;
			HX_STACK_LINE(415)
			this->state->set_shader(this->shadow_shader);
		}
		HX_STACK_LINE(418)
		if ((this->dirty_group)){
			HX_STACK_LINE(419)
			this->dirty_group = false;
			HX_STACK_LINE(420)
			this->state->set_group(this->shadow_group);
		}
		HX_STACK_LINE(423)
		if ((this->dirty_depth)){
			HX_STACK_LINE(424)
			this->dirty_depth = false;
			HX_STACK_LINE(425)
			this->state->set_depth(this->shadow_depth);
		}
		HX_STACK_LINE(428)
		if ((this->dirty_clip)){
			HX_STACK_LINE(429)
			this->dirty_clip = false;
			HX_STACK_LINE(430)
			this->state->set_clip(this->shadow_clip);
		}
		HX_STACK_LINE(434)
		this->refresh_key();
		HX_STACK_LINE(436)
		{
			HX_STACK_LINE(436)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(436)
			Array< ::Dynamic > _g1 = this->batchers;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(436)
			while((true)){
				HX_STACK_LINE(436)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(436)
					break;
				}
				HX_STACK_LINE(436)
				::phoenix::Batcher b = _g1->__get(_g).StaticCast< ::phoenix::Batcher >();		HX_STACK_VAR(b,"b");
				HX_STACK_LINE(436)
				++(_g);
				HX_STACK_LINE(437)
				b->add(hx::ObjectPtr<OBJ_>(this),false);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Geometry_obj,refresh,(void))

int Geometry_obj::get_primitive_type( ){
	HX_STACK_FRAME("phoenix.geometry.Geometry","get_primitive_type",0xf77b1efa,"phoenix.geometry.Geometry.get_primitive_type","phoenix/geometry/Geometry.hx",446,0xdab136cf)
	HX_STACK_THIS(this)
	HX_STACK_LINE(446)
	return this->state->primitive_type;
}


HX_DEFINE_DYNAMIC_FUNC0(Geometry_obj,get_primitive_type,return )

int Geometry_obj::set_primitive_type( int val){
	HX_STACK_FRAME("phoenix.geometry.Geometry","set_primitive_type",0xd42a516e,"phoenix.geometry.Geometry.set_primitive_type","phoenix/geometry/Geometry.hx",450,0xdab136cf)
	HX_STACK_THIS(this)
	HX_STACK_ARG(val,"val")
	HX_STACK_LINE(452)
	if (((this->state->primitive_type != val))){
		HX_STACK_LINE(453)
		this->shadow_primitive_type = val;
		HX_STACK_LINE(454)
		this->dirty_primitive_type = true;
		HX_STACK_LINE(455)
		this->refresh();
	}
	HX_STACK_LINE(458)
	return this->primitive_type = val;
}


HX_DEFINE_DYNAMIC_FUNC1(Geometry_obj,set_primitive_type,return )

::phoenix::Texture Geometry_obj::get_texture( ){
	HX_STACK_FRAME("phoenix.geometry.Geometry","get_texture",0x1c5cb573,"phoenix.geometry.Geometry.get_texture","phoenix/geometry/Geometry.hx",466,0xdab136cf)
	HX_STACK_THIS(this)
	HX_STACK_LINE(466)
	return this->state->texture;
}


HX_DEFINE_DYNAMIC_FUNC0(Geometry_obj,get_texture,return )

::phoenix::Texture Geometry_obj::set_texture( ::phoenix::Texture val){
	HX_STACK_FRAME("phoenix.geometry.Geometry","set_texture",0x26c9bc7f,"phoenix.geometry.Geometry.set_texture","phoenix/geometry/Geometry.hx",470,0xdab136cf)
	HX_STACK_THIS(this)
	HX_STACK_ARG(val,"val")
	HX_STACK_LINE(472)
	if (((this->state->texture != val))){
		HX_STACK_LINE(473)
		this->shadow_texture = val;
		HX_STACK_LINE(474)
		this->dirty_texture = true;
		HX_STACK_LINE(475)
		this->refresh();
	}
	HX_STACK_LINE(478)
	return this->texture = val;
}


HX_DEFINE_DYNAMIC_FUNC1(Geometry_obj,set_texture,return )

bool Geometry_obj::set_visible( bool val){
	HX_STACK_FRAME("phoenix.geometry.Geometry","set_visible",0x2b0d6c16,"phoenix.geometry.Geometry.set_visible","phoenix/geometry/Geometry.hx",486,0xdab136cf)
	HX_STACK_THIS(this)
	HX_STACK_ARG(val,"val")
	HX_STACK_LINE(486)
	return this->visible = val;
}


HX_DEFINE_DYNAMIC_FUNC1(Geometry_obj,set_visible,return )

::phoenix::Color Geometry_obj::set_color( ::phoenix::Color val){
	HX_STACK_FRAME("phoenix.geometry.Geometry","set_color",0x06447407,"phoenix.geometry.Geometry.set_color","phoenix/geometry/Geometry.hx",492,0xdab136cf)
	HX_STACK_THIS(this)
	HX_STACK_ARG(val,"val")
	HX_STACK_LINE(494)
	{
		HX_STACK_LINE(494)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(494)
		Array< ::Dynamic > _g1 = this->vertices;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(494)
		while((true)){
			HX_STACK_LINE(494)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(494)
				break;
			}
			HX_STACK_LINE(494)
			::phoenix::geometry::Vertex v = _g1->__get(_g).StaticCast< ::phoenix::geometry::Vertex >();		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(494)
			++(_g);
			HX_STACK_LINE(495)
			v->color = val;
		}
	}
	HX_STACK_LINE(498)
	return this->color = val;
}


HX_DEFINE_DYNAMIC_FUNC1(Geometry_obj,set_color,return )

::phoenix::Shader Geometry_obj::get_shader( ){
	HX_STACK_FRAME("phoenix.geometry.Geometry","get_shader",0xc8bd6d8d,"phoenix.geometry.Geometry.get_shader","phoenix/geometry/Geometry.hx",506,0xdab136cf)
	HX_STACK_THIS(this)
	HX_STACK_LINE(506)
	return this->state->shader;
}


HX_DEFINE_DYNAMIC_FUNC0(Geometry_obj,get_shader,return )

::phoenix::Shader Geometry_obj::set_shader( ::phoenix::Shader val){
	HX_STACK_FRAME("phoenix.geometry.Geometry","set_shader",0xcc3b0c01,"phoenix.geometry.Geometry.set_shader","phoenix/geometry/Geometry.hx",510,0xdab136cf)
	HX_STACK_THIS(this)
	HX_STACK_ARG(val,"val")
	HX_STACK_LINE(512)
	if (((this->state->shader != val))){
		HX_STACK_LINE(513)
		this->shadow_shader = val;
		HX_STACK_LINE(514)
		this->dirty_shader = true;
		HX_STACK_LINE(515)
		this->refresh();
	}
	HX_STACK_LINE(518)
	return this->shader = val;
}


HX_DEFINE_DYNAMIC_FUNC1(Geometry_obj,set_shader,return )

Float Geometry_obj::get_depth( ){
	HX_STACK_FRAME("phoenix.geometry.Geometry","get_depth",0xafc1079b,"phoenix.geometry.Geometry.get_depth","phoenix/geometry/Geometry.hx",526,0xdab136cf)
	HX_STACK_THIS(this)
	HX_STACK_LINE(526)
	return this->state->depth;
}


HX_DEFINE_DYNAMIC_FUNC0(Geometry_obj,get_depth,return )

Float Geometry_obj::set_depth( Float val){
	HX_STACK_FRAME("phoenix.geometry.Geometry","set_depth",0x9311f3a7,"phoenix.geometry.Geometry.set_depth","phoenix/geometry/Geometry.hx",531,0xdab136cf)
	HX_STACK_THIS(this)
	HX_STACK_ARG(val,"val")
	HX_STACK_LINE(533)
	if (((this->state->depth != val))){
		HX_STACK_LINE(534)
		this->shadow_depth = val;
		HX_STACK_LINE(535)
		this->dirty_depth = true;
		HX_STACK_LINE(536)
		this->refresh();
	}
	HX_STACK_LINE(539)
	return this->depth = val;
}


HX_DEFINE_DYNAMIC_FUNC1(Geometry_obj,set_depth,return )

int Geometry_obj::get_group( ){
	HX_STACK_FRAME("phoenix.geometry.Geometry","get_group",0x728bc9d7,"phoenix.geometry.Geometry.get_group","phoenix/geometry/Geometry.hx",547,0xdab136cf)
	HX_STACK_THIS(this)
	HX_STACK_LINE(547)
	return this->state->group;
}


HX_DEFINE_DYNAMIC_FUNC0(Geometry_obj,get_group,return )

int Geometry_obj::set_group( int val){
	HX_STACK_FRAME("phoenix.geometry.Geometry","set_group",0x55dcb5e3,"phoenix.geometry.Geometry.set_group","phoenix/geometry/Geometry.hx",551,0xdab136cf)
	HX_STACK_THIS(this)
	HX_STACK_ARG(val,"val")
	HX_STACK_LINE(553)
	if (((this->state->group != val))){
		HX_STACK_LINE(554)
		this->shadow_group = val;
		HX_STACK_LINE(555)
		this->dirty_group = true;
		HX_STACK_LINE(556)
		this->refresh();
	}
	HX_STACK_LINE(559)
	return this->group = val;
}


HX_DEFINE_DYNAMIC_FUNC1(Geometry_obj,set_group,return )

bool Geometry_obj::get_clip( ){
	HX_STACK_FRAME("phoenix.geometry.Geometry","get_clip",0xcb573338,"phoenix.geometry.Geometry.get_clip","phoenix/geometry/Geometry.hx",567,0xdab136cf)
	HX_STACK_THIS(this)
	HX_STACK_LINE(567)
	return this->state->clip;
}


HX_DEFINE_DYNAMIC_FUNC0(Geometry_obj,get_clip,return )

bool Geometry_obj::set_clip( bool val){
	HX_STACK_FRAME("phoenix.geometry.Geometry","set_clip",0x79b48cac,"phoenix.geometry.Geometry.set_clip","phoenix/geometry/Geometry.hx",571,0xdab136cf)
	HX_STACK_THIS(this)
	HX_STACK_ARG(val,"val")
	HX_STACK_LINE(573)
	if (((this->state->clip != val))){
		HX_STACK_LINE(574)
		this->shadow_clip = val;
		HX_STACK_LINE(575)
		this->dirty_clip = true;
		HX_STACK_LINE(576)
		this->refresh();
	}
	HX_STACK_LINE(579)
	return this->clip = val;
}


HX_DEFINE_DYNAMIC_FUNC1(Geometry_obj,set_clip,return )

::phoenix::Rectangle Geometry_obj::get_clip_rect( ){
	HX_STACK_FRAME("phoenix.geometry.Geometry","get_clip_rect",0x4f648acb,"phoenix.geometry.Geometry.get_clip_rect","phoenix/geometry/Geometry.hx",587,0xdab136cf)
	HX_STACK_THIS(this)
	HX_STACK_LINE(587)
	return this->state->clip_rect;
}


HX_DEFINE_DYNAMIC_FUNC0(Geometry_obj,get_clip_rect,return )

::phoenix::Rectangle Geometry_obj::set_clip_rect( ::phoenix::Rectangle val){
	HX_STACK_FRAME("phoenix.geometry.Geometry","set_clip_rect",0x946a6cd7,"phoenix.geometry.Geometry.set_clip_rect","phoenix/geometry/Geometry.hx",591,0xdab136cf)
	HX_STACK_THIS(this)
	HX_STACK_ARG(val,"val")
	HX_STACK_LINE(593)
	if (((val == null()))){
		HX_STACK_LINE(594)
		this->set_clip(false);
	}
	else{
		HX_STACK_LINE(596)
		this->set_clip(true);
	}
	HX_STACK_LINE(599)
	return this->state->set_clip_rect(val);
}


HX_DEFINE_DYNAMIC_FUNC1(Geometry_obj,set_clip_rect,return )

int Geometry_obj::_sequence_key;


Geometry_obj::Geometry_obj()
{
}

void Geometry_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Geometry);
	HX_MARK_MEMBER_NAME(transform,"transform");
	HX_MARK_MEMBER_NAME(vertices,"vertices");
	HX_MARK_MEMBER_NAME(submitted,"submitted");
	HX_MARK_MEMBER_NAME(static_vertex_buffer,"static_vertex_buffer");
	HX_MARK_MEMBER_NAME(static_tcoord_buffer,"static_tcoord_buffer");
	HX_MARK_MEMBER_NAME(static_vcolor_buffer,"static_vcolor_buffer");
	HX_MARK_MEMBER_NAME(static_normal_buffer,"static_normal_buffer");
	HX_MARK_MEMBER_NAME(added,"added");
	HX_MARK_MEMBER_NAME(batchers,"batchers");
	HX_MARK_MEMBER_NAME(state,"state");
	HX_MARK_MEMBER_NAME(dropped,"dropped");
	HX_MARK_MEMBER_NAME(uuid,"uuid");
	HX_MARK_MEMBER_NAME(id,"id");
	HX_MARK_MEMBER_NAME(primitive_type,"primitive_type");
	HX_MARK_MEMBER_NAME(texture,"texture");
	HX_MARK_MEMBER_NAME(shader,"shader");
	HX_MARK_MEMBER_NAME(depth,"depth");
	HX_MARK_MEMBER_NAME(group,"group");
	HX_MARK_MEMBER_NAME(clip_rect,"clip_rect");
	HX_MARK_MEMBER_NAME(shadow_primitive_type,"shadow_primitive_type");
	HX_MARK_MEMBER_NAME(shadow_texture,"shadow_texture");
	HX_MARK_MEMBER_NAME(shadow_shader,"shadow_shader");
	HX_MARK_MEMBER_NAME(shadow_group,"shadow_group");
	HX_MARK_MEMBER_NAME(shadow_depth,"shadow_depth");
	HX_MARK_MEMBER_NAME(shadow_clip,"shadow_clip");
	HX_MARK_MEMBER_NAME(dirty_primitive_type,"dirty_primitive_type");
	HX_MARK_MEMBER_NAME(dirty_texture,"dirty_texture");
	HX_MARK_MEMBER_NAME(dirty_shader,"dirty_shader");
	HX_MARK_MEMBER_NAME(dirty_group,"dirty_group");
	HX_MARK_MEMBER_NAME(dirty_depth,"dirty_depth");
	HX_MARK_MEMBER_NAME(dirty_clip,"dirty_clip");
	HX_MARK_MEMBER_NAME(visible,"visible");
	HX_MARK_MEMBER_NAME(immediate,"immediate");
	HX_MARK_MEMBER_NAME(locked,"locked");
	HX_MARK_MEMBER_NAME(dirty,"dirty");
	HX_MARK_MEMBER_NAME(color,"color");
	HX_MARK_MEMBER_NAME(clip,"clip");
	HX_MARK_MEMBER_NAME(_final_vert_position,"_final_vert_position");
	HX_MARK_MEMBER_NAME(key,"key");
	HX_MARK_END_CLASS();
}

void Geometry_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(transform,"transform");
	HX_VISIT_MEMBER_NAME(vertices,"vertices");
	HX_VISIT_MEMBER_NAME(submitted,"submitted");
	HX_VISIT_MEMBER_NAME(static_vertex_buffer,"static_vertex_buffer");
	HX_VISIT_MEMBER_NAME(static_tcoord_buffer,"static_tcoord_buffer");
	HX_VISIT_MEMBER_NAME(static_vcolor_buffer,"static_vcolor_buffer");
	HX_VISIT_MEMBER_NAME(static_normal_buffer,"static_normal_buffer");
	HX_VISIT_MEMBER_NAME(added,"added");
	HX_VISIT_MEMBER_NAME(batchers,"batchers");
	HX_VISIT_MEMBER_NAME(state,"state");
	HX_VISIT_MEMBER_NAME(dropped,"dropped");
	HX_VISIT_MEMBER_NAME(uuid,"uuid");
	HX_VISIT_MEMBER_NAME(id,"id");
	HX_VISIT_MEMBER_NAME(primitive_type,"primitive_type");
	HX_VISIT_MEMBER_NAME(texture,"texture");
	HX_VISIT_MEMBER_NAME(shader,"shader");
	HX_VISIT_MEMBER_NAME(depth,"depth");
	HX_VISIT_MEMBER_NAME(group,"group");
	HX_VISIT_MEMBER_NAME(clip_rect,"clip_rect");
	HX_VISIT_MEMBER_NAME(shadow_primitive_type,"shadow_primitive_type");
	HX_VISIT_MEMBER_NAME(shadow_texture,"shadow_texture");
	HX_VISIT_MEMBER_NAME(shadow_shader,"shadow_shader");
	HX_VISIT_MEMBER_NAME(shadow_group,"shadow_group");
	HX_VISIT_MEMBER_NAME(shadow_depth,"shadow_depth");
	HX_VISIT_MEMBER_NAME(shadow_clip,"shadow_clip");
	HX_VISIT_MEMBER_NAME(dirty_primitive_type,"dirty_primitive_type");
	HX_VISIT_MEMBER_NAME(dirty_texture,"dirty_texture");
	HX_VISIT_MEMBER_NAME(dirty_shader,"dirty_shader");
	HX_VISIT_MEMBER_NAME(dirty_group,"dirty_group");
	HX_VISIT_MEMBER_NAME(dirty_depth,"dirty_depth");
	HX_VISIT_MEMBER_NAME(dirty_clip,"dirty_clip");
	HX_VISIT_MEMBER_NAME(visible,"visible");
	HX_VISIT_MEMBER_NAME(immediate,"immediate");
	HX_VISIT_MEMBER_NAME(locked,"locked");
	HX_VISIT_MEMBER_NAME(dirty,"dirty");
	HX_VISIT_MEMBER_NAME(color,"color");
	HX_VISIT_MEMBER_NAME(clip,"clip");
	HX_VISIT_MEMBER_NAME(_final_vert_position,"_final_vert_position");
	HX_VISIT_MEMBER_NAME(key,"key");
}

Dynamic Geometry_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return id; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"key") ) { return key; }
		if (HX_FIELD_EQ(inName,"str") ) { return str_dyn(); }
		if (HX_FIELD_EQ(inName,"add") ) { return add_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"uuid") ) { return uuid; }
		if (HX_FIELD_EQ(inName,"clip") ) { return inCallProp ? get_clip() : clip; }
		if (HX_FIELD_EQ(inName,"drop") ) { return drop_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"added") ) { return added; }
		if (HX_FIELD_EQ(inName,"state") ) { return state; }
		if (HX_FIELD_EQ(inName,"depth") ) { return inCallProp ? get_depth() : depth; }
		if (HX_FIELD_EQ(inName,"group") ) { return inCallProp ? get_group() : group; }
		if (HX_FIELD_EQ(inName,"dirty") ) { return inCallProp ? get_dirty() : dirty; }
		if (HX_FIELD_EQ(inName,"color") ) { return color; }
		if (HX_FIELD_EQ(inName,"batch") ) { return batch_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"shader") ) { return inCallProp ? get_shader() : shader; }
		if (HX_FIELD_EQ(inName,"locked") ) { return inCallProp ? get_locked() : locked; }
		if (HX_FIELD_EQ(inName,"remove") ) { return remove_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"dropped") ) { return dropped; }
		if (HX_FIELD_EQ(inName,"texture") ) { return inCallProp ? get_texture() : texture; }
		if (HX_FIELD_EQ(inName,"visible") ) { return visible; }
		if (HX_FIELD_EQ(inName,"refresh") ) { return refresh_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"vertices") ) { return vertices; }
		if (HX_FIELD_EQ(inName,"batchers") ) { return batchers; }
		if (HX_FIELD_EQ(inName,"get_clip") ) { return get_clip_dyn(); }
		if (HX_FIELD_EQ(inName,"set_clip") ) { return set_clip_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"transform") ) { return transform; }
		if (HX_FIELD_EQ(inName,"submitted") ) { return submitted; }
		if (HX_FIELD_EQ(inName,"clip_rect") ) { return inCallProp ? get_clip_rect() : clip_rect; }
		if (HX_FIELD_EQ(inName,"immediate") ) { return immediate; }
		if (HX_FIELD_EQ(inName,"translate") ) { return translate_dyn(); }
		if (HX_FIELD_EQ(inName,"set_dirty") ) { return set_dirty_dyn(); }
		if (HX_FIELD_EQ(inName,"get_dirty") ) { return get_dirty_dyn(); }
		if (HX_FIELD_EQ(inName,"set_color") ) { return set_color_dyn(); }
		if (HX_FIELD_EQ(inName,"get_depth") ) { return get_depth_dyn(); }
		if (HX_FIELD_EQ(inName,"set_depth") ) { return set_depth_dyn(); }
		if (HX_FIELD_EQ(inName,"get_group") ) { return get_group_dyn(); }
		if (HX_FIELD_EQ(inName,"set_group") ) { return set_group_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"dirty_clip") ) { return dirty_clip; }
		if (HX_FIELD_EQ(inName,"key_string") ) { return key_string_dyn(); }
		if (HX_FIELD_EQ(inName,"set_locked") ) { return set_locked_dyn(); }
		if (HX_FIELD_EQ(inName,"get_locked") ) { return get_locked_dyn(); }
		if (HX_FIELD_EQ(inName,"get_shader") ) { return get_shader_dyn(); }
		if (HX_FIELD_EQ(inName,"set_shader") ) { return set_shader_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"shadow_clip") ) { return shadow_clip; }
		if (HX_FIELD_EQ(inName,"dirty_group") ) { return dirty_group; }
		if (HX_FIELD_EQ(inName,"dirty_depth") ) { return dirty_depth; }
		if (HX_FIELD_EQ(inName,"refresh_key") ) { return refresh_key_dyn(); }
		if (HX_FIELD_EQ(inName,"get_texture") ) { return get_texture_dyn(); }
		if (HX_FIELD_EQ(inName,"set_texture") ) { return set_texture_dyn(); }
		if (HX_FIELD_EQ(inName,"set_visible") ) { return set_visible_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"shadow_group") ) { return shadow_group; }
		if (HX_FIELD_EQ(inName,"shadow_depth") ) { return shadow_depth; }
		if (HX_FIELD_EQ(inName,"dirty_shader") ) { return dirty_shader; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_sequence_key") ) { return _sequence_key; }
		if (HX_FIELD_EQ(inName,"shadow_shader") ) { return shadow_shader; }
		if (HX_FIELD_EQ(inName,"dirty_texture") ) { return dirty_texture; }
		if (HX_FIELD_EQ(inName,"get_clip_rect") ) { return get_clip_rect_dyn(); }
		if (HX_FIELD_EQ(inName,"set_clip_rect") ) { return set_clip_rect_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"primitive_type") ) { return inCallProp ? get_primitive_type() : primitive_type; }
		if (HX_FIELD_EQ(inName,"shadow_texture") ) { return shadow_texture; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"batch_into_arrays") ) { return batch_into_arrays_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"get_primitive_type") ) { return get_primitive_type_dyn(); }
		if (HX_FIELD_EQ(inName,"set_primitive_type") ) { return set_primitive_type_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"static_vertex_buffer") ) { return static_vertex_buffer; }
		if (HX_FIELD_EQ(inName,"static_tcoord_buffer") ) { return static_tcoord_buffer; }
		if (HX_FIELD_EQ(inName,"static_vcolor_buffer") ) { return static_vcolor_buffer; }
		if (HX_FIELD_EQ(inName,"static_normal_buffer") ) { return static_normal_buffer; }
		if (HX_FIELD_EQ(inName,"dirty_primitive_type") ) { return dirty_primitive_type; }
		if (HX_FIELD_EQ(inName,"_final_vert_position") ) { return _final_vert_position; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"shadow_primitive_type") ) { return shadow_primitive_type; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Geometry_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< ::String >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"key") ) { key=inValue.Cast< ::phoenix::geometry::GeometryKey >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"uuid") ) { uuid=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"clip") ) { if (inCallProp) return set_clip(inValue);clip=inValue.Cast< bool >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"added") ) { added=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"state") ) { state=inValue.Cast< ::phoenix::geometry::GeometryState >(); return inValue; }
		if (HX_FIELD_EQ(inName,"depth") ) { if (inCallProp) return set_depth(inValue);depth=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"group") ) { if (inCallProp) return set_group(inValue);group=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"dirty") ) { if (inCallProp) return set_dirty(inValue);dirty=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"color") ) { if (inCallProp) return set_color(inValue);color=inValue.Cast< ::phoenix::Color >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"shader") ) { if (inCallProp) return set_shader(inValue);shader=inValue.Cast< ::phoenix::Shader >(); return inValue; }
		if (HX_FIELD_EQ(inName,"locked") ) { if (inCallProp) return set_locked(inValue);locked=inValue.Cast< bool >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"dropped") ) { dropped=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"texture") ) { if (inCallProp) return set_texture(inValue);texture=inValue.Cast< ::phoenix::Texture >(); return inValue; }
		if (HX_FIELD_EQ(inName,"visible") ) { if (inCallProp) return set_visible(inValue);visible=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"vertices") ) { vertices=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"batchers") ) { batchers=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"transform") ) { transform=inValue.Cast< ::phoenix::Transform >(); return inValue; }
		if (HX_FIELD_EQ(inName,"submitted") ) { submitted=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"clip_rect") ) { if (inCallProp) return set_clip_rect(inValue);clip_rect=inValue.Cast< ::phoenix::Rectangle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"immediate") ) { immediate=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"dirty_clip") ) { dirty_clip=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"shadow_clip") ) { shadow_clip=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"dirty_group") ) { dirty_group=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"dirty_depth") ) { dirty_depth=inValue.Cast< bool >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"shadow_group") ) { shadow_group=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"shadow_depth") ) { shadow_depth=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"dirty_shader") ) { dirty_shader=inValue.Cast< bool >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_sequence_key") ) { _sequence_key=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"shadow_shader") ) { shadow_shader=inValue.Cast< ::phoenix::Shader >(); return inValue; }
		if (HX_FIELD_EQ(inName,"dirty_texture") ) { dirty_texture=inValue.Cast< bool >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"primitive_type") ) { if (inCallProp) return set_primitive_type(inValue);primitive_type=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"shadow_texture") ) { shadow_texture=inValue.Cast< ::phoenix::Texture >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"static_vertex_buffer") ) { static_vertex_buffer=inValue.Cast< ::snow::platform::native::render::opengl::GLBuffer >(); return inValue; }
		if (HX_FIELD_EQ(inName,"static_tcoord_buffer") ) { static_tcoord_buffer=inValue.Cast< ::snow::platform::native::render::opengl::GLBuffer >(); return inValue; }
		if (HX_FIELD_EQ(inName,"static_vcolor_buffer") ) { static_vcolor_buffer=inValue.Cast< ::snow::platform::native::render::opengl::GLBuffer >(); return inValue; }
		if (HX_FIELD_EQ(inName,"static_normal_buffer") ) { static_normal_buffer=inValue.Cast< ::snow::platform::native::render::opengl::GLBuffer >(); return inValue; }
		if (HX_FIELD_EQ(inName,"dirty_primitive_type") ) { dirty_primitive_type=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_final_vert_position") ) { _final_vert_position=inValue.Cast< ::phoenix::Vector >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"shadow_primitive_type") ) { shadow_primitive_type=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Geometry_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("transform"));
	outFields->push(HX_CSTRING("vertices"));
	outFields->push(HX_CSTRING("submitted"));
	outFields->push(HX_CSTRING("static_vertex_buffer"));
	outFields->push(HX_CSTRING("static_tcoord_buffer"));
	outFields->push(HX_CSTRING("static_vcolor_buffer"));
	outFields->push(HX_CSTRING("static_normal_buffer"));
	outFields->push(HX_CSTRING("added"));
	outFields->push(HX_CSTRING("batchers"));
	outFields->push(HX_CSTRING("state"));
	outFields->push(HX_CSTRING("dropped"));
	outFields->push(HX_CSTRING("uuid"));
	outFields->push(HX_CSTRING("id"));
	outFields->push(HX_CSTRING("primitive_type"));
	outFields->push(HX_CSTRING("texture"));
	outFields->push(HX_CSTRING("shader"));
	outFields->push(HX_CSTRING("depth"));
	outFields->push(HX_CSTRING("group"));
	outFields->push(HX_CSTRING("clip_rect"));
	outFields->push(HX_CSTRING("shadow_primitive_type"));
	outFields->push(HX_CSTRING("shadow_texture"));
	outFields->push(HX_CSTRING("shadow_shader"));
	outFields->push(HX_CSTRING("shadow_group"));
	outFields->push(HX_CSTRING("shadow_depth"));
	outFields->push(HX_CSTRING("shadow_clip"));
	outFields->push(HX_CSTRING("dirty_primitive_type"));
	outFields->push(HX_CSTRING("dirty_texture"));
	outFields->push(HX_CSTRING("dirty_shader"));
	outFields->push(HX_CSTRING("dirty_group"));
	outFields->push(HX_CSTRING("dirty_depth"));
	outFields->push(HX_CSTRING("dirty_clip"));
	outFields->push(HX_CSTRING("visible"));
	outFields->push(HX_CSTRING("immediate"));
	outFields->push(HX_CSTRING("locked"));
	outFields->push(HX_CSTRING("dirty"));
	outFields->push(HX_CSTRING("color"));
	outFields->push(HX_CSTRING("clip"));
	outFields->push(HX_CSTRING("_final_vert_position"));
	outFields->push(HX_CSTRING("key"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("_sequence_key"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::phoenix::Transform*/ ,(int)offsetof(Geometry_obj,transform),HX_CSTRING("transform")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Geometry_obj,vertices),HX_CSTRING("vertices")},
	{hx::fsBool,(int)offsetof(Geometry_obj,submitted),HX_CSTRING("submitted")},
	{hx::fsObject /*::snow::platform::native::render::opengl::GLBuffer*/ ,(int)offsetof(Geometry_obj,static_vertex_buffer),HX_CSTRING("static_vertex_buffer")},
	{hx::fsObject /*::snow::platform::native::render::opengl::GLBuffer*/ ,(int)offsetof(Geometry_obj,static_tcoord_buffer),HX_CSTRING("static_tcoord_buffer")},
	{hx::fsObject /*::snow::platform::native::render::opengl::GLBuffer*/ ,(int)offsetof(Geometry_obj,static_vcolor_buffer),HX_CSTRING("static_vcolor_buffer")},
	{hx::fsObject /*::snow::platform::native::render::opengl::GLBuffer*/ ,(int)offsetof(Geometry_obj,static_normal_buffer),HX_CSTRING("static_normal_buffer")},
	{hx::fsBool,(int)offsetof(Geometry_obj,added),HX_CSTRING("added")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Geometry_obj,batchers),HX_CSTRING("batchers")},
	{hx::fsObject /*::phoenix::geometry::GeometryState*/ ,(int)offsetof(Geometry_obj,state),HX_CSTRING("state")},
	{hx::fsBool,(int)offsetof(Geometry_obj,dropped),HX_CSTRING("dropped")},
	{hx::fsString,(int)offsetof(Geometry_obj,uuid),HX_CSTRING("uuid")},
	{hx::fsString,(int)offsetof(Geometry_obj,id),HX_CSTRING("id")},
	{hx::fsInt,(int)offsetof(Geometry_obj,primitive_type),HX_CSTRING("primitive_type")},
	{hx::fsObject /*::phoenix::Texture*/ ,(int)offsetof(Geometry_obj,texture),HX_CSTRING("texture")},
	{hx::fsObject /*::phoenix::Shader*/ ,(int)offsetof(Geometry_obj,shader),HX_CSTRING("shader")},
	{hx::fsFloat,(int)offsetof(Geometry_obj,depth),HX_CSTRING("depth")},
	{hx::fsInt,(int)offsetof(Geometry_obj,group),HX_CSTRING("group")},
	{hx::fsObject /*::phoenix::Rectangle*/ ,(int)offsetof(Geometry_obj,clip_rect),HX_CSTRING("clip_rect")},
	{hx::fsInt,(int)offsetof(Geometry_obj,shadow_primitive_type),HX_CSTRING("shadow_primitive_type")},
	{hx::fsObject /*::phoenix::Texture*/ ,(int)offsetof(Geometry_obj,shadow_texture),HX_CSTRING("shadow_texture")},
	{hx::fsObject /*::phoenix::Shader*/ ,(int)offsetof(Geometry_obj,shadow_shader),HX_CSTRING("shadow_shader")},
	{hx::fsInt,(int)offsetof(Geometry_obj,shadow_group),HX_CSTRING("shadow_group")},
	{hx::fsFloat,(int)offsetof(Geometry_obj,shadow_depth),HX_CSTRING("shadow_depth")},
	{hx::fsBool,(int)offsetof(Geometry_obj,shadow_clip),HX_CSTRING("shadow_clip")},
	{hx::fsBool,(int)offsetof(Geometry_obj,dirty_primitive_type),HX_CSTRING("dirty_primitive_type")},
	{hx::fsBool,(int)offsetof(Geometry_obj,dirty_texture),HX_CSTRING("dirty_texture")},
	{hx::fsBool,(int)offsetof(Geometry_obj,dirty_shader),HX_CSTRING("dirty_shader")},
	{hx::fsBool,(int)offsetof(Geometry_obj,dirty_group),HX_CSTRING("dirty_group")},
	{hx::fsBool,(int)offsetof(Geometry_obj,dirty_depth),HX_CSTRING("dirty_depth")},
	{hx::fsBool,(int)offsetof(Geometry_obj,dirty_clip),HX_CSTRING("dirty_clip")},
	{hx::fsBool,(int)offsetof(Geometry_obj,visible),HX_CSTRING("visible")},
	{hx::fsBool,(int)offsetof(Geometry_obj,immediate),HX_CSTRING("immediate")},
	{hx::fsBool,(int)offsetof(Geometry_obj,locked),HX_CSTRING("locked")},
	{hx::fsBool,(int)offsetof(Geometry_obj,dirty),HX_CSTRING("dirty")},
	{hx::fsObject /*::phoenix::Color*/ ,(int)offsetof(Geometry_obj,color),HX_CSTRING("color")},
	{hx::fsBool,(int)offsetof(Geometry_obj,clip),HX_CSTRING("clip")},
	{hx::fsObject /*::phoenix::Vector*/ ,(int)offsetof(Geometry_obj,_final_vert_position),HX_CSTRING("_final_vert_position")},
	{hx::fsObject /*::phoenix::geometry::GeometryKey*/ ,(int)offsetof(Geometry_obj,key),HX_CSTRING("key")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("transform"),
	HX_CSTRING("vertices"),
	HX_CSTRING("submitted"),
	HX_CSTRING("static_vertex_buffer"),
	HX_CSTRING("static_tcoord_buffer"),
	HX_CSTRING("static_vcolor_buffer"),
	HX_CSTRING("static_normal_buffer"),
	HX_CSTRING("added"),
	HX_CSTRING("batchers"),
	HX_CSTRING("state"),
	HX_CSTRING("dropped"),
	HX_CSTRING("uuid"),
	HX_CSTRING("id"),
	HX_CSTRING("primitive_type"),
	HX_CSTRING("texture"),
	HX_CSTRING("shader"),
	HX_CSTRING("depth"),
	HX_CSTRING("group"),
	HX_CSTRING("clip_rect"),
	HX_CSTRING("shadow_primitive_type"),
	HX_CSTRING("shadow_texture"),
	HX_CSTRING("shadow_shader"),
	HX_CSTRING("shadow_group"),
	HX_CSTRING("shadow_depth"),
	HX_CSTRING("shadow_clip"),
	HX_CSTRING("dirty_primitive_type"),
	HX_CSTRING("dirty_texture"),
	HX_CSTRING("dirty_shader"),
	HX_CSTRING("dirty_group"),
	HX_CSTRING("dirty_depth"),
	HX_CSTRING("dirty_clip"),
	HX_CSTRING("visible"),
	HX_CSTRING("immediate"),
	HX_CSTRING("locked"),
	HX_CSTRING("dirty"),
	HX_CSTRING("color"),
	HX_CSTRING("clip"),
	HX_CSTRING("_final_vert_position"),
	HX_CSTRING("key"),
	HX_CSTRING("key_string"),
	HX_CSTRING("refresh_key"),
	HX_CSTRING("str"),
	HX_CSTRING("drop"),
	HX_CSTRING("add"),
	HX_CSTRING("remove"),
	HX_CSTRING("batch"),
	HX_CSTRING("batch_into_arrays"),
	HX_CSTRING("translate"),
	HX_CSTRING("set_locked"),
	HX_CSTRING("get_locked"),
	HX_CSTRING("set_dirty"),
	HX_CSTRING("get_dirty"),
	HX_CSTRING("refresh"),
	HX_CSTRING("get_primitive_type"),
	HX_CSTRING("set_primitive_type"),
	HX_CSTRING("get_texture"),
	HX_CSTRING("set_texture"),
	HX_CSTRING("set_visible"),
	HX_CSTRING("set_color"),
	HX_CSTRING("get_shader"),
	HX_CSTRING("set_shader"),
	HX_CSTRING("get_depth"),
	HX_CSTRING("set_depth"),
	HX_CSTRING("get_group"),
	HX_CSTRING("set_group"),
	HX_CSTRING("get_clip"),
	HX_CSTRING("set_clip"),
	HX_CSTRING("get_clip_rect"),
	HX_CSTRING("set_clip_rect"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Geometry_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Geometry_obj::_sequence_key,"_sequence_key");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Geometry_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Geometry_obj::_sequence_key,"_sequence_key");
};

#endif

Class Geometry_obj::__mClass;

void Geometry_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("phoenix.geometry.Geometry"), hx::TCanCast< Geometry_obj> ,sStaticFields,sMemberFields,
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

void Geometry_obj::__boot()
{
	_sequence_key= (int)-1;
}

} // end namespace phoenix
} // end namespace geometry
