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
#ifndef INCLUDED_luxe_NineSlice
#include <luxe/NineSlice.h>
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
#ifndef INCLUDED_phoenix_geometry_QuadPackGeometry
#include <phoenix/geometry/QuadPackGeometry.h>
#endif
namespace luxe{

Void NineSlice_obj::__construct(Dynamic _options)
{
HX_STACK_FRAME("luxe.NineSlice","new",0xa11773da,"luxe.NineSlice.new","luxe/NineSlice.hx",27,0xccc9c257)
HX_STACK_THIS(this)
HX_STACK_ARG(_options,"_options")
{
	HX_STACK_LINE(44)
	this->added = false;
	HX_STACK_LINE(42)
	this->midheight = 0.0;
	HX_STACK_LINE(41)
	this->midwidth = 0.0;
	HX_STACK_LINE(39)
	this->is_set = false;
	HX_STACK_LINE(38)
	this->source_h = 0.0;
	HX_STACK_LINE(37)
	this->source_w = 0.0;
	HX_STACK_LINE(36)
	this->source_y = 0.0;
	HX_STACK_LINE(35)
	this->source_x = 0.0;
	HX_STACK_LINE(34)
	this->height = 0.0;
	HX_STACK_LINE(33)
	this->bottom = (int)32;
	HX_STACK_LINE(32)
	this->width = 0.0;
	HX_STACK_LINE(31)
	this->right = (int)32;
	HX_STACK_LINE(30)
	this->left = (int)32;
	HX_STACK_LINE(29)
	this->top = (int)32;
	HX_STACK_LINE(54)
	Dynamic _g = Dynamic( Array_obj<Dynamic>::__new() );		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(54)
	this->slices = _g;
	HX_STACK_LINE(58)
	if (((_options == null()))){
		struct _Function_2_1{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/NineSlice.hx",59,0xccc9c257)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("no_geometry") , true,false);
					__result->Add(HX_CSTRING("no_scene") , true,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(59)
		_options = _Function_2_1::Block();
	}
	else{
		HX_STACK_LINE(64)
		_options->__FieldRef(HX_CSTRING("no_geometry")) = true;
		HX_STACK_LINE(65)
		_options->__FieldRef(HX_CSTRING("no_scene")) = true;
	}
	HX_STACK_LINE(68)
	this->nineslice_options = _options;
	HX_STACK_LINE(70)
	if (((_options->__Field(HX_CSTRING("batcher"),true) != null()))){
		HX_STACK_LINE(71)
		this->_batcher = _options->__Field(HX_CSTRING("batcher"),true);
	}
	else{
		HX_STACK_LINE(73)
		this->_batcher = ::Luxe_obj::renderer->batcher;
	}
	HX_STACK_LINE(77)
	super::__construct(_options);
	HX_STACK_LINE(80)
	if (((_options->__Field(HX_CSTRING("top"),true) != null()))){
		HX_STACK_LINE(80)
		this->top = _options->__Field(HX_CSTRING("top"),true);
	}
	HX_STACK_LINE(81)
	if (((_options->__Field(HX_CSTRING("left"),true) != null()))){
		HX_STACK_LINE(81)
		this->left = _options->__Field(HX_CSTRING("left"),true);
	}
	HX_STACK_LINE(82)
	if (((_options->__Field(HX_CSTRING("right"),true) != null()))){
		HX_STACK_LINE(82)
		this->right = _options->__Field(HX_CSTRING("right"),true);
	}
	HX_STACK_LINE(83)
	if (((_options->__Field(HX_CSTRING("bottom"),true) != null()))){
		HX_STACK_LINE(83)
		this->bottom = _options->__Field(HX_CSTRING("bottom"),true);
	}
	HX_STACK_LINE(85)
	if (((_options->__Field(HX_CSTRING("source_x"),true) != null()))){
		HX_STACK_LINE(85)
		this->source_x = _options->__Field(HX_CSTRING("source_x"),true);
	}
	HX_STACK_LINE(86)
	if (((_options->__Field(HX_CSTRING("source_y"),true) != null()))){
		HX_STACK_LINE(86)
		this->source_y = _options->__Field(HX_CSTRING("source_y"),true);
	}
	HX_STACK_LINE(87)
	if (((_options->__Field(HX_CSTRING("source_w"),true) != null()))){
		HX_STACK_LINE(88)
		this->source_w = _options->__Field(HX_CSTRING("source_w"),true);
	}
	else{
		HX_STACK_LINE(90)
		this->source_w = this->texture->width;
	}
	HX_STACK_LINE(93)
	if (((_options->__Field(HX_CSTRING("source_h"),true) != null()))){
		HX_STACK_LINE(94)
		this->source_h = _options->__Field(HX_CSTRING("source_h"),true);
	}
	else{
		HX_STACK_LINE(96)
		this->source_h = this->texture->height;
	}
	HX_STACK_LINE(99)
	this->set_geometry(null());
}
;
	return null();
}

//NineSlice_obj::~NineSlice_obj() { }

Dynamic NineSlice_obj::__CreateEmpty() { return  new NineSlice_obj; }
hx::ObjectPtr< NineSlice_obj > NineSlice_obj::__new(Dynamic _options)
{  hx::ObjectPtr< NineSlice_obj > result = new NineSlice_obj();
	result->__construct(_options);
	return result;}

Dynamic NineSlice_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< NineSlice_obj > result = new NineSlice_obj();
	result->__construct(inArgs[0]);
	return result;}

Void NineSlice_obj::lock( ){
{
		HX_STACK_FRAME("luxe.NineSlice","lock",0x52230331,"luxe.NineSlice.lock","luxe/NineSlice.hx",104,0xccc9c257)
		HX_STACK_THIS(this)
		HX_STACK_LINE(104)
		if (((bool(this->is_set) && bool((this->_geometry != null()))))){
			HX_STACK_LINE(105)
			this->_geometry->set_locked(true);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(NineSlice_obj,lock,(void))

Void NineSlice_obj::dirty( ){
{
		HX_STACK_FRAME("luxe.NineSlice","dirty",0xed5f460c,"luxe.NineSlice.dirty","luxe/NineSlice.hx",110,0xccc9c257)
		HX_STACK_THIS(this)
		HX_STACK_LINE(110)
		if (((bool(this->is_set) && bool((this->_geometry != null()))))){
			HX_STACK_LINE(111)
			this->_geometry->set_dirty(true);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(NineSlice_obj,dirty,(void))

Void NineSlice_obj::update_size( Float _width,Float _height){
{
		HX_STACK_FRAME("luxe.NineSlice","update_size",0x2a7a6371,"luxe.NineSlice.update_size","luxe/NineSlice.hx",115,0xccc9c257)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_width,"_width")
		HX_STACK_ARG(_height,"_height")
		HX_STACK_LINE(117)
		this->width = _width;
		HX_STACK_LINE(118)
		this->height = _height;
		HX_STACK_LINE(120)
		Float _g = ::Math_obj::abs(((this->width - this->left) - this->right));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(120)
		this->midwidth = _g;
		HX_STACK_LINE(121)
		Float _g1 = ::Math_obj::abs(((this->height - this->top) - this->bottom));		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(121)
		this->midheight = _g1;
		HX_STACK_LINE(124)
		this->slices->__GetItem((int)0)->__FieldRef(HX_CSTRING("source_width")) = this->left;
		HX_STACK_LINE(125)
		this->slices->__GetItem((int)0)->__FieldRef(HX_CSTRING("source_height")) = this->top;
		HX_STACK_LINE(126)
		this->slices->__GetItem((int)0)->__FieldRef(HX_CSTRING("source_x")) = this->source_x;
		HX_STACK_LINE(127)
		this->slices->__GetItem((int)0)->__FieldRef(HX_CSTRING("source_y")) = this->source_y;
		HX_STACK_LINE(128)
		{
			HX_STACK_LINE(128)
			::phoenix::Vector _this = this->slices->__GetItem((int)0)->__Field(HX_CSTRING("pos"),true);		HX_STACK_VAR(_this,"_this");
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
		this->slices->__GetItem((int)0)->__FieldRef(HX_CSTRING("width")) = this->left;
		HX_STACK_LINE(130)
		this->slices->__GetItem((int)0)->__FieldRef(HX_CSTRING("height")) = this->top;
		HX_STACK_LINE(133)
		this->slices->__GetItem((int)1)->__FieldRef(HX_CSTRING("source_width")) = ((this->source_w - this->left) - this->right);
		HX_STACK_LINE(134)
		this->slices->__GetItem((int)1)->__FieldRef(HX_CSTRING("source_height")) = this->top;
		HX_STACK_LINE(135)
		this->slices->__GetItem((int)1)->__FieldRef(HX_CSTRING("source_x")) = (this->source_x + this->left);
		HX_STACK_LINE(136)
		this->slices->__GetItem((int)1)->__FieldRef(HX_CSTRING("source_y")) = this->source_y;
		HX_STACK_LINE(137)
		{
			HX_STACK_LINE(137)
			::phoenix::Vector _this = this->slices->__GetItem((int)1)->__Field(HX_CSTRING("pos"),true);		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(137)
			Float _x = this->left;		HX_STACK_VAR(_x,"_x");
			HX_STACK_LINE(137)
			bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
			HX_STACK_LINE(137)
			_this->ignore_listeners = true;
			HX_STACK_LINE(137)
			{
				HX_STACK_LINE(137)
				_this->x = _x;
				HX_STACK_LINE(137)
				if ((_this->_construct)){
					HX_STACK_LINE(137)
					_this->x;
				}
				else{
					HX_STACK_LINE(137)
					if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
						HX_STACK_LINE(137)
						_this->listen_x(_x);
					}
					HX_STACK_LINE(137)
					_this->x;
				}
			}
			HX_STACK_LINE(137)
			{
				HX_STACK_LINE(137)
				_this->y = (int)0;
				HX_STACK_LINE(137)
				if ((_this->_construct)){
					HX_STACK_LINE(137)
					_this->y;
				}
				else{
					HX_STACK_LINE(137)
					if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
						HX_STACK_LINE(137)
						_this->listen_y((int)0);
					}
					HX_STACK_LINE(137)
					_this->y;
				}
			}
			HX_STACK_LINE(137)
			_this->ignore_listeners = prev;
			HX_STACK_LINE(137)
			if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
				HX_STACK_LINE(137)
				_this->listen_x(_this->x);
			}
			HX_STACK_LINE(137)
			if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
				HX_STACK_LINE(137)
				_this->listen_y(_this->y);
			}
			HX_STACK_LINE(137)
			_this;
		}
		HX_STACK_LINE(138)
		this->slices->__GetItem((int)1)->__FieldRef(HX_CSTRING("width")) = ((this->width - this->left) - this->right);
		HX_STACK_LINE(139)
		this->slices->__GetItem((int)1)->__FieldRef(HX_CSTRING("height")) = this->top;
		HX_STACK_LINE(142)
		this->slices->__GetItem((int)2)->__FieldRef(HX_CSTRING("source_width")) = this->right;
		HX_STACK_LINE(143)
		this->slices->__GetItem((int)2)->__FieldRef(HX_CSTRING("source_height")) = this->top;
		HX_STACK_LINE(144)
		this->slices->__GetItem((int)2)->__FieldRef(HX_CSTRING("source_x")) = (this->source_x + ((this->source_w - this->right)));
		HX_STACK_LINE(145)
		this->slices->__GetItem((int)2)->__FieldRef(HX_CSTRING("source_y")) = this->source_y;
		HX_STACK_LINE(146)
		{
			HX_STACK_LINE(146)
			::phoenix::Vector _this = this->slices->__GetItem((int)2)->__Field(HX_CSTRING("pos"),true);		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(146)
			Float _x = (this->left + this->midwidth);		HX_STACK_VAR(_x,"_x");
			HX_STACK_LINE(146)
			bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
			HX_STACK_LINE(146)
			_this->ignore_listeners = true;
			HX_STACK_LINE(146)
			{
				HX_STACK_LINE(146)
				_this->x = _x;
				HX_STACK_LINE(146)
				if ((_this->_construct)){
					HX_STACK_LINE(146)
					_this->x;
				}
				else{
					HX_STACK_LINE(146)
					if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
						HX_STACK_LINE(146)
						_this->listen_x(_x);
					}
					HX_STACK_LINE(146)
					_this->x;
				}
			}
			HX_STACK_LINE(146)
			{
				HX_STACK_LINE(146)
				_this->y = (int)0;
				HX_STACK_LINE(146)
				if ((_this->_construct)){
					HX_STACK_LINE(146)
					_this->y;
				}
				else{
					HX_STACK_LINE(146)
					if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
						HX_STACK_LINE(146)
						_this->listen_y((int)0);
					}
					HX_STACK_LINE(146)
					_this->y;
				}
			}
			HX_STACK_LINE(146)
			_this->ignore_listeners = prev;
			HX_STACK_LINE(146)
			if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
				HX_STACK_LINE(146)
				_this->listen_x(_this->x);
			}
			HX_STACK_LINE(146)
			if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
				HX_STACK_LINE(146)
				_this->listen_y(_this->y);
			}
			HX_STACK_LINE(146)
			_this;
		}
		HX_STACK_LINE(147)
		this->slices->__GetItem((int)2)->__FieldRef(HX_CSTRING("width")) = this->right;
		HX_STACK_LINE(148)
		this->slices->__GetItem((int)2)->__FieldRef(HX_CSTRING("height")) = this->top;
		HX_STACK_LINE(152)
		this->slices->__GetItem((int)3)->__FieldRef(HX_CSTRING("source_width")) = this->left;
		HX_STACK_LINE(153)
		this->slices->__GetItem((int)3)->__FieldRef(HX_CSTRING("source_height")) = ((this->source_h - this->top) - this->bottom);
		HX_STACK_LINE(154)
		this->slices->__GetItem((int)3)->__FieldRef(HX_CSTRING("source_x")) = this->source_x;
		HX_STACK_LINE(155)
		this->slices->__GetItem((int)3)->__FieldRef(HX_CSTRING("source_y")) = (this->source_y + this->top);
		HX_STACK_LINE(156)
		{
			HX_STACK_LINE(156)
			::phoenix::Vector _this = this->slices->__GetItem((int)3)->__Field(HX_CSTRING("pos"),true);		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(156)
			Float _y = this->top;		HX_STACK_VAR(_y,"_y");
			HX_STACK_LINE(156)
			bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
			HX_STACK_LINE(156)
			_this->ignore_listeners = true;
			HX_STACK_LINE(156)
			{
				HX_STACK_LINE(156)
				_this->x = (int)0;
				HX_STACK_LINE(156)
				if ((_this->_construct)){
					HX_STACK_LINE(156)
					_this->x;
				}
				else{
					HX_STACK_LINE(156)
					if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
						HX_STACK_LINE(156)
						_this->listen_x((int)0);
					}
					HX_STACK_LINE(156)
					_this->x;
				}
			}
			HX_STACK_LINE(156)
			{
				HX_STACK_LINE(156)
				_this->y = _y;
				HX_STACK_LINE(156)
				if ((_this->_construct)){
					HX_STACK_LINE(156)
					_this->y;
				}
				else{
					HX_STACK_LINE(156)
					if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
						HX_STACK_LINE(156)
						_this->listen_y(_y);
					}
					HX_STACK_LINE(156)
					_this->y;
				}
			}
			HX_STACK_LINE(156)
			_this->ignore_listeners = prev;
			HX_STACK_LINE(156)
			if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
				HX_STACK_LINE(156)
				_this->listen_x(_this->x);
			}
			HX_STACK_LINE(156)
			if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
				HX_STACK_LINE(156)
				_this->listen_y(_this->y);
			}
			HX_STACK_LINE(156)
			_this;
		}
		HX_STACK_LINE(157)
		this->slices->__GetItem((int)3)->__FieldRef(HX_CSTRING("width")) = this->left;
		HX_STACK_LINE(158)
		this->slices->__GetItem((int)3)->__FieldRef(HX_CSTRING("height")) = ((this->height - this->top) - this->bottom);
		HX_STACK_LINE(161)
		this->slices->__GetItem((int)4)->__FieldRef(HX_CSTRING("source_width")) = ((this->source_w - this->left) - this->right);
		HX_STACK_LINE(162)
		this->slices->__GetItem((int)4)->__FieldRef(HX_CSTRING("source_height")) = ((this->source_h - this->top) - this->bottom);
		HX_STACK_LINE(163)
		this->slices->__GetItem((int)4)->__FieldRef(HX_CSTRING("source_x")) = (this->source_x + this->left);
		HX_STACK_LINE(164)
		this->slices->__GetItem((int)4)->__FieldRef(HX_CSTRING("source_y")) = (this->source_y + this->top);
		HX_STACK_LINE(165)
		{
			HX_STACK_LINE(165)
			::phoenix::Vector _this = this->slices->__GetItem((int)4)->__Field(HX_CSTRING("pos"),true);		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(165)
			Float _x = this->left;		HX_STACK_VAR(_x,"_x");
			HX_STACK_LINE(165)
			Float _y = this->top;		HX_STACK_VAR(_y,"_y");
			HX_STACK_LINE(165)
			bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
			HX_STACK_LINE(165)
			_this->ignore_listeners = true;
			HX_STACK_LINE(165)
			{
				HX_STACK_LINE(165)
				_this->x = _x;
				HX_STACK_LINE(165)
				if ((_this->_construct)){
					HX_STACK_LINE(165)
					_this->x;
				}
				else{
					HX_STACK_LINE(165)
					if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
						HX_STACK_LINE(165)
						_this->listen_x(_x);
					}
					HX_STACK_LINE(165)
					_this->x;
				}
			}
			HX_STACK_LINE(165)
			{
				HX_STACK_LINE(165)
				_this->y = _y;
				HX_STACK_LINE(165)
				if ((_this->_construct)){
					HX_STACK_LINE(165)
					_this->y;
				}
				else{
					HX_STACK_LINE(165)
					if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
						HX_STACK_LINE(165)
						_this->listen_y(_y);
					}
					HX_STACK_LINE(165)
					_this->y;
				}
			}
			HX_STACK_LINE(165)
			_this->ignore_listeners = prev;
			HX_STACK_LINE(165)
			if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
				HX_STACK_LINE(165)
				_this->listen_x(_this->x);
			}
			HX_STACK_LINE(165)
			if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
				HX_STACK_LINE(165)
				_this->listen_y(_this->y);
			}
			HX_STACK_LINE(165)
			_this;
		}
		HX_STACK_LINE(166)
		this->slices->__GetItem((int)4)->__FieldRef(HX_CSTRING("width")) = ((this->width - this->left) - this->right);
		HX_STACK_LINE(167)
		this->slices->__GetItem((int)4)->__FieldRef(HX_CSTRING("height")) = ((this->height - this->top) - this->bottom);
		HX_STACK_LINE(170)
		this->slices->__GetItem((int)5)->__FieldRef(HX_CSTRING("source_width")) = this->right;
		HX_STACK_LINE(171)
		this->slices->__GetItem((int)5)->__FieldRef(HX_CSTRING("source_height")) = ((this->source_h - this->top) - this->bottom);
		HX_STACK_LINE(172)
		this->slices->__GetItem((int)5)->__FieldRef(HX_CSTRING("source_x")) = (this->source_x + ((this->source_w - this->right)));
		HX_STACK_LINE(173)
		this->slices->__GetItem((int)5)->__FieldRef(HX_CSTRING("source_y")) = (this->source_y + this->top);
		HX_STACK_LINE(174)
		{
			HX_STACK_LINE(174)
			::phoenix::Vector _this = this->slices->__GetItem((int)5)->__Field(HX_CSTRING("pos"),true);		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(174)
			Float _x = (this->left + this->midwidth);		HX_STACK_VAR(_x,"_x");
			HX_STACK_LINE(174)
			Float _y = this->top;		HX_STACK_VAR(_y,"_y");
			HX_STACK_LINE(174)
			bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
			HX_STACK_LINE(174)
			_this->ignore_listeners = true;
			HX_STACK_LINE(174)
			{
				HX_STACK_LINE(174)
				_this->x = _x;
				HX_STACK_LINE(174)
				if ((_this->_construct)){
					HX_STACK_LINE(174)
					_this->x;
				}
				else{
					HX_STACK_LINE(174)
					if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
						HX_STACK_LINE(174)
						_this->listen_x(_x);
					}
					HX_STACK_LINE(174)
					_this->x;
				}
			}
			HX_STACK_LINE(174)
			{
				HX_STACK_LINE(174)
				_this->y = _y;
				HX_STACK_LINE(174)
				if ((_this->_construct)){
					HX_STACK_LINE(174)
					_this->y;
				}
				else{
					HX_STACK_LINE(174)
					if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
						HX_STACK_LINE(174)
						_this->listen_y(_y);
					}
					HX_STACK_LINE(174)
					_this->y;
				}
			}
			HX_STACK_LINE(174)
			_this->ignore_listeners = prev;
			HX_STACK_LINE(174)
			if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
				HX_STACK_LINE(174)
				_this->listen_x(_this->x);
			}
			HX_STACK_LINE(174)
			if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
				HX_STACK_LINE(174)
				_this->listen_y(_this->y);
			}
			HX_STACK_LINE(174)
			_this;
		}
		HX_STACK_LINE(175)
		this->slices->__GetItem((int)5)->__FieldRef(HX_CSTRING("width")) = this->right;
		HX_STACK_LINE(176)
		this->slices->__GetItem((int)5)->__FieldRef(HX_CSTRING("height")) = ((this->height - this->top) - this->bottom);
		HX_STACK_LINE(180)
		this->slices->__GetItem((int)6)->__FieldRef(HX_CSTRING("source_width")) = this->left;
		HX_STACK_LINE(181)
		this->slices->__GetItem((int)6)->__FieldRef(HX_CSTRING("source_height")) = this->bottom;
		HX_STACK_LINE(182)
		this->slices->__GetItem((int)6)->__FieldRef(HX_CSTRING("source_x")) = this->source_x;
		HX_STACK_LINE(183)
		this->slices->__GetItem((int)6)->__FieldRef(HX_CSTRING("source_y")) = (this->source_y + ((this->source_h - this->bottom)));
		HX_STACK_LINE(184)
		{
			HX_STACK_LINE(184)
			::phoenix::Vector _this = this->slices->__GetItem((int)6)->__Field(HX_CSTRING("pos"),true);		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(184)
			Float _y = (this->top + this->midheight);		HX_STACK_VAR(_y,"_y");
			HX_STACK_LINE(184)
			bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
			HX_STACK_LINE(184)
			_this->ignore_listeners = true;
			HX_STACK_LINE(184)
			{
				HX_STACK_LINE(184)
				_this->x = (int)0;
				HX_STACK_LINE(184)
				if ((_this->_construct)){
					HX_STACK_LINE(184)
					_this->x;
				}
				else{
					HX_STACK_LINE(184)
					if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
						HX_STACK_LINE(184)
						_this->listen_x((int)0);
					}
					HX_STACK_LINE(184)
					_this->x;
				}
			}
			HX_STACK_LINE(184)
			{
				HX_STACK_LINE(184)
				_this->y = _y;
				HX_STACK_LINE(184)
				if ((_this->_construct)){
					HX_STACK_LINE(184)
					_this->y;
				}
				else{
					HX_STACK_LINE(184)
					if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
						HX_STACK_LINE(184)
						_this->listen_y(_y);
					}
					HX_STACK_LINE(184)
					_this->y;
				}
			}
			HX_STACK_LINE(184)
			_this->ignore_listeners = prev;
			HX_STACK_LINE(184)
			if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
				HX_STACK_LINE(184)
				_this->listen_x(_this->x);
			}
			HX_STACK_LINE(184)
			if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
				HX_STACK_LINE(184)
				_this->listen_y(_this->y);
			}
			HX_STACK_LINE(184)
			_this;
		}
		HX_STACK_LINE(185)
		this->slices->__GetItem((int)6)->__FieldRef(HX_CSTRING("width")) = this->left;
		HX_STACK_LINE(186)
		this->slices->__GetItem((int)6)->__FieldRef(HX_CSTRING("height")) = this->bottom;
		HX_STACK_LINE(189)
		this->slices->__GetItem((int)7)->__FieldRef(HX_CSTRING("source_width")) = ((this->source_w - this->left) - this->right);
		HX_STACK_LINE(190)
		this->slices->__GetItem((int)7)->__FieldRef(HX_CSTRING("source_height")) = this->bottom;
		HX_STACK_LINE(191)
		this->slices->__GetItem((int)7)->__FieldRef(HX_CSTRING("source_x")) = (this->source_x + this->left);
		HX_STACK_LINE(192)
		this->slices->__GetItem((int)7)->__FieldRef(HX_CSTRING("source_y")) = (this->source_y + ((this->source_h - this->bottom)));
		HX_STACK_LINE(193)
		{
			HX_STACK_LINE(193)
			::phoenix::Vector _this = this->slices->__GetItem((int)7)->__Field(HX_CSTRING("pos"),true);		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(193)
			Float _x = this->left;		HX_STACK_VAR(_x,"_x");
			HX_STACK_LINE(193)
			Float _y = (this->top + this->midheight);		HX_STACK_VAR(_y,"_y");
			HX_STACK_LINE(193)
			bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
			HX_STACK_LINE(193)
			_this->ignore_listeners = true;
			HX_STACK_LINE(193)
			{
				HX_STACK_LINE(193)
				_this->x = _x;
				HX_STACK_LINE(193)
				if ((_this->_construct)){
					HX_STACK_LINE(193)
					_this->x;
				}
				else{
					HX_STACK_LINE(193)
					if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
						HX_STACK_LINE(193)
						_this->listen_x(_x);
					}
					HX_STACK_LINE(193)
					_this->x;
				}
			}
			HX_STACK_LINE(193)
			{
				HX_STACK_LINE(193)
				_this->y = _y;
				HX_STACK_LINE(193)
				if ((_this->_construct)){
					HX_STACK_LINE(193)
					_this->y;
				}
				else{
					HX_STACK_LINE(193)
					if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
						HX_STACK_LINE(193)
						_this->listen_y(_y);
					}
					HX_STACK_LINE(193)
					_this->y;
				}
			}
			HX_STACK_LINE(193)
			_this->ignore_listeners = prev;
			HX_STACK_LINE(193)
			if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
				HX_STACK_LINE(193)
				_this->listen_x(_this->x);
			}
			HX_STACK_LINE(193)
			if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
				HX_STACK_LINE(193)
				_this->listen_y(_this->y);
			}
			HX_STACK_LINE(193)
			_this;
		}
		HX_STACK_LINE(194)
		this->slices->__GetItem((int)7)->__FieldRef(HX_CSTRING("width")) = ((this->width - this->left) - this->right);
		HX_STACK_LINE(195)
		this->slices->__GetItem((int)7)->__FieldRef(HX_CSTRING("height")) = this->bottom;
		HX_STACK_LINE(198)
		this->slices->__GetItem((int)8)->__FieldRef(HX_CSTRING("source_width")) = this->right;
		HX_STACK_LINE(199)
		this->slices->__GetItem((int)8)->__FieldRef(HX_CSTRING("source_height")) = this->bottom;
		HX_STACK_LINE(200)
		this->slices->__GetItem((int)8)->__FieldRef(HX_CSTRING("source_x")) = (this->source_x + ((this->source_w - this->right)));
		HX_STACK_LINE(201)
		this->slices->__GetItem((int)8)->__FieldRef(HX_CSTRING("source_y")) = (this->source_y + ((this->source_h - this->bottom)));
		HX_STACK_LINE(202)
		{
			HX_STACK_LINE(202)
			::phoenix::Vector _this = this->slices->__GetItem((int)8)->__Field(HX_CSTRING("pos"),true);		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(202)
			Float _x = (this->left + this->midwidth);		HX_STACK_VAR(_x,"_x");
			HX_STACK_LINE(202)
			Float _y = (this->top + this->midheight);		HX_STACK_VAR(_y,"_y");
			HX_STACK_LINE(202)
			bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
			HX_STACK_LINE(202)
			_this->ignore_listeners = true;
			HX_STACK_LINE(202)
			{
				HX_STACK_LINE(202)
				_this->x = _x;
				HX_STACK_LINE(202)
				if ((_this->_construct)){
					HX_STACK_LINE(202)
					_this->x;
				}
				else{
					HX_STACK_LINE(202)
					if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
						HX_STACK_LINE(202)
						_this->listen_x(_x);
					}
					HX_STACK_LINE(202)
					_this->x;
				}
			}
			HX_STACK_LINE(202)
			{
				HX_STACK_LINE(202)
				_this->y = _y;
				HX_STACK_LINE(202)
				if ((_this->_construct)){
					HX_STACK_LINE(202)
					_this->y;
				}
				else{
					HX_STACK_LINE(202)
					if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
						HX_STACK_LINE(202)
						_this->listen_y(_y);
					}
					HX_STACK_LINE(202)
					_this->y;
				}
			}
			HX_STACK_LINE(202)
			_this->ignore_listeners = prev;
			HX_STACK_LINE(202)
			if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
				HX_STACK_LINE(202)
				_this->listen_x(_this->x);
			}
			HX_STACK_LINE(202)
			if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
				HX_STACK_LINE(202)
				_this->listen_y(_this->y);
			}
			HX_STACK_LINE(202)
			_this;
		}
		HX_STACK_LINE(203)
		this->slices->__GetItem((int)8)->__FieldRef(HX_CSTRING("width")) = this->right;
		HX_STACK_LINE(204)
		this->slices->__GetItem((int)8)->__FieldRef(HX_CSTRING("height")) = this->bottom;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(NineSlice_obj,update_size,(void))

Void NineSlice_obj::set( Float _width,Float _height){
{
		HX_STACK_FRAME("luxe.NineSlice","set",0xa11b3f1c,"luxe.NineSlice.set","luxe/NineSlice.hx",208,0xccc9c257)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_width,"_width")
		HX_STACK_ARG(_height,"_height")
		HX_STACK_LINE(210)
		if ((this->added)){
			HX_STACK_LINE(211)
			this->_geometry->drop(null());
			HX_STACK_LINE(212)
			this->added = false;
		}
		HX_STACK_LINE(216)
		this->slices->__Field(HX_CSTRING("splice"),true)((int)0,this->slices->__Field(HX_CSTRING("length"),true));
		HX_STACK_LINE(217)
		this->width = _width;
		HX_STACK_LINE(218)
		this->height = _height;
		HX_STACK_LINE(220)
		Float _g = ::Math_obj::abs(((this->width - this->left) - this->right));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(220)
		this->midwidth = _g;
		HX_STACK_LINE(221)
		Float _g1 = ::Math_obj::abs(((this->height - this->top) - this->bottom));		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(221)
		this->midheight = _g1;
		HX_STACK_LINE(228)
		::phoenix::Vector _g2 = ::phoenix::Vector_obj::__new((int)0,(int)0,null(),null());		HX_STACK_VAR(_g2,"_g2");
		struct _Function_1_1{
			inline static Dynamic Block( hx::ObjectPtr< ::luxe::NineSlice_obj > __this,::phoenix::Vector &_g2){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/NineSlice.hx",223,0xccc9c257)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("source_width") , __this->left,false);
					__result->Add(HX_CSTRING("source_height") , __this->top,false);
					__result->Add(HX_CSTRING("source_x") , __this->source_x,false);
					__result->Add(HX_CSTRING("source_y") , __this->source_y,false);
					__result->Add(HX_CSTRING("pos") , _g2,false);
					__result->Add(HX_CSTRING("width") , __this->left,false);
					__result->Add(HX_CSTRING("height") , __this->top,false);
					__result->Add(HX_CSTRING("geometry_id") , (int)0,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(223)
		Dynamic _g3 = _Function_1_1::Block(this,_g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(223)
		this->slices->__Field(HX_CSTRING("push"),true)(_g3);
		HX_STACK_LINE(239)
		::phoenix::Vector _g4 = ::phoenix::Vector_obj::__new(this->left,(int)0,null(),null());		HX_STACK_VAR(_g4,"_g4");
		struct _Function_1_2{
			inline static Dynamic Block( hx::ObjectPtr< ::luxe::NineSlice_obj > __this,::phoenix::Vector &_g4){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/NineSlice.hx",234,0xccc9c257)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("source_width") , ((__this->source_w - __this->left) - __this->right),false);
					__result->Add(HX_CSTRING("source_height") , __this->top,false);
					__result->Add(HX_CSTRING("source_x") , (__this->source_x + __this->left),false);
					__result->Add(HX_CSTRING("source_y") , __this->source_y,false);
					__result->Add(HX_CSTRING("pos") , _g4,false);
					__result->Add(HX_CSTRING("width") , ((__this->width - __this->left) - __this->right),false);
					__result->Add(HX_CSTRING("height") , __this->top,false);
					__result->Add(HX_CSTRING("geometry_id") , (int)0,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(234)
		Dynamic _g5 = _Function_1_2::Block(this,_g4);		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(234)
		this->slices->__Field(HX_CSTRING("push"),true)(_g5);
		HX_STACK_LINE(250)
		::phoenix::Vector _g6 = ::phoenix::Vector_obj::__new((this->left + this->midwidth),(int)0,null(),null());		HX_STACK_VAR(_g6,"_g6");
		struct _Function_1_3{
			inline static Dynamic Block( hx::ObjectPtr< ::luxe::NineSlice_obj > __this,::phoenix::Vector &_g6){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/NineSlice.hx",245,0xccc9c257)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("source_width") , __this->right,false);
					__result->Add(HX_CSTRING("source_height") , __this->top,false);
					__result->Add(HX_CSTRING("source_x") , (__this->source_x + ((__this->source_w - __this->right))),false);
					__result->Add(HX_CSTRING("source_y") , __this->source_y,false);
					__result->Add(HX_CSTRING("pos") , _g6,false);
					__result->Add(HX_CSTRING("width") , __this->right,false);
					__result->Add(HX_CSTRING("height") , __this->top,false);
					__result->Add(HX_CSTRING("geometry_id") , (int)0,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(245)
		Dynamic _g7 = _Function_1_3::Block(this,_g6);		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(245)
		this->slices->__Field(HX_CSTRING("push"),true)(_g7);
		HX_STACK_LINE(263)
		::phoenix::Vector _g8 = ::phoenix::Vector_obj::__new((int)0,this->top,null(),null());		HX_STACK_VAR(_g8,"_g8");
		struct _Function_1_4{
			inline static Dynamic Block( hx::ObjectPtr< ::luxe::NineSlice_obj > __this,::phoenix::Vector &_g8){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/NineSlice.hx",258,0xccc9c257)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("source_width") , __this->left,false);
					__result->Add(HX_CSTRING("source_height") , ((__this->source_h - __this->top) - __this->bottom),false);
					__result->Add(HX_CSTRING("source_x") , __this->source_x,false);
					__result->Add(HX_CSTRING("source_y") , (__this->source_y + __this->top),false);
					__result->Add(HX_CSTRING("pos") , _g8,false);
					__result->Add(HX_CSTRING("width") , __this->left,false);
					__result->Add(HX_CSTRING("height") , ((__this->height - __this->top) - __this->bottom),false);
					__result->Add(HX_CSTRING("geometry_id") , (int)0,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(258)
		Dynamic _g9 = _Function_1_4::Block(this,_g8);		HX_STACK_VAR(_g9,"_g9");
		HX_STACK_LINE(258)
		this->slices->__Field(HX_CSTRING("push"),true)(_g9);
		HX_STACK_LINE(274)
		::phoenix::Vector _g10 = ::phoenix::Vector_obj::__new(this->left,this->top,null(),null());		HX_STACK_VAR(_g10,"_g10");
		struct _Function_1_5{
			inline static Dynamic Block( hx::ObjectPtr< ::luxe::NineSlice_obj > __this,::phoenix::Vector &_g10){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/NineSlice.hx",269,0xccc9c257)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("source_width") , ((__this->source_w - __this->left) - __this->right),false);
					__result->Add(HX_CSTRING("source_height") , ((__this->source_h - __this->top) - __this->bottom),false);
					__result->Add(HX_CSTRING("source_x") , (__this->source_x + __this->left),false);
					__result->Add(HX_CSTRING("source_y") , (__this->source_y + __this->top),false);
					__result->Add(HX_CSTRING("pos") , _g10,false);
					__result->Add(HX_CSTRING("width") , ((__this->width - __this->left) - __this->right),false);
					__result->Add(HX_CSTRING("height") , ((__this->height - __this->top) - __this->bottom),false);
					__result->Add(HX_CSTRING("geometry_id") , (int)0,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(269)
		Dynamic _g11 = _Function_1_5::Block(this,_g10);		HX_STACK_VAR(_g11,"_g11");
		HX_STACK_LINE(269)
		this->slices->__Field(HX_CSTRING("push"),true)(_g11);
		HX_STACK_LINE(285)
		::phoenix::Vector _g12 = ::phoenix::Vector_obj::__new((this->left + this->midwidth),this->top,null(),null());		HX_STACK_VAR(_g12,"_g12");
		struct _Function_1_6{
			inline static Dynamic Block( hx::ObjectPtr< ::luxe::NineSlice_obj > __this,::phoenix::Vector &_g12){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/NineSlice.hx",280,0xccc9c257)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("source_width") , __this->right,false);
					__result->Add(HX_CSTRING("source_height") , ((__this->source_h - __this->top) - __this->bottom),false);
					__result->Add(HX_CSTRING("source_x") , (__this->source_x + ((__this->source_w - __this->right))),false);
					__result->Add(HX_CSTRING("source_y") , (__this->source_y + __this->top),false);
					__result->Add(HX_CSTRING("pos") , _g12,false);
					__result->Add(HX_CSTRING("width") , __this->right,false);
					__result->Add(HX_CSTRING("height") , ((__this->height - __this->top) - __this->bottom),false);
					__result->Add(HX_CSTRING("geometry_id") , (int)0,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(280)
		Dynamic _g13 = _Function_1_6::Block(this,_g12);		HX_STACK_VAR(_g13,"_g13");
		HX_STACK_LINE(280)
		this->slices->__Field(HX_CSTRING("push"),true)(_g13);
		HX_STACK_LINE(298)
		::phoenix::Vector _g14 = ::phoenix::Vector_obj::__new((int)0,(this->top + this->midheight),null(),null());		HX_STACK_VAR(_g14,"_g14");
		struct _Function_1_7{
			inline static Dynamic Block( hx::ObjectPtr< ::luxe::NineSlice_obj > __this,::phoenix::Vector &_g14){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/NineSlice.hx",293,0xccc9c257)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("source_width") , __this->left,false);
					__result->Add(HX_CSTRING("source_height") , __this->bottom,false);
					__result->Add(HX_CSTRING("source_x") , __this->source_x,false);
					__result->Add(HX_CSTRING("source_y") , (__this->source_y + ((__this->source_h - __this->bottom))),false);
					__result->Add(HX_CSTRING("pos") , _g14,false);
					__result->Add(HX_CSTRING("width") , __this->left,false);
					__result->Add(HX_CSTRING("height") , __this->bottom,false);
					__result->Add(HX_CSTRING("geometry_id") , (int)0,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(293)
		Dynamic _g15 = _Function_1_7::Block(this,_g14);		HX_STACK_VAR(_g15,"_g15");
		HX_STACK_LINE(293)
		this->slices->__Field(HX_CSTRING("push"),true)(_g15);
		HX_STACK_LINE(309)
		::phoenix::Vector _g16 = ::phoenix::Vector_obj::__new(this->left,(this->top + this->midheight),null(),null());		HX_STACK_VAR(_g16,"_g16");
		struct _Function_1_8{
			inline static Dynamic Block( hx::ObjectPtr< ::luxe::NineSlice_obj > __this,::phoenix::Vector &_g16){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/NineSlice.hx",304,0xccc9c257)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("source_width") , ((__this->source_w - __this->left) - __this->right),false);
					__result->Add(HX_CSTRING("source_height") , __this->bottom,false);
					__result->Add(HX_CSTRING("source_x") , (__this->source_x + __this->left),false);
					__result->Add(HX_CSTRING("source_y") , (__this->source_y + ((__this->source_h - __this->bottom))),false);
					__result->Add(HX_CSTRING("pos") , _g16,false);
					__result->Add(HX_CSTRING("width") , ((__this->width - __this->left) - __this->right),false);
					__result->Add(HX_CSTRING("height") , __this->bottom,false);
					__result->Add(HX_CSTRING("geometry_id") , (int)0,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(304)
		Dynamic _g17 = _Function_1_8::Block(this,_g16);		HX_STACK_VAR(_g17,"_g17");
		HX_STACK_LINE(304)
		this->slices->__Field(HX_CSTRING("push"),true)(_g17);
		HX_STACK_LINE(320)
		::phoenix::Vector _g18 = ::phoenix::Vector_obj::__new((this->left + this->midwidth),(this->top + this->midheight),null(),null());		HX_STACK_VAR(_g18,"_g18");
		struct _Function_1_9{
			inline static Dynamic Block( hx::ObjectPtr< ::luxe::NineSlice_obj > __this,::phoenix::Vector &_g18){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/NineSlice.hx",315,0xccc9c257)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("source_width") , __this->right,false);
					__result->Add(HX_CSTRING("source_height") , __this->bottom,false);
					__result->Add(HX_CSTRING("source_x") , (__this->source_x + ((__this->source_w - __this->right))),false);
					__result->Add(HX_CSTRING("source_y") , (__this->source_y + ((__this->source_h - __this->bottom))),false);
					__result->Add(HX_CSTRING("pos") , _g18,false);
					__result->Add(HX_CSTRING("width") , __this->right,false);
					__result->Add(HX_CSTRING("height") , __this->bottom,false);
					__result->Add(HX_CSTRING("geometry_id") , (int)0,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(315)
		Dynamic _g19 = _Function_1_9::Block(this,_g18);		HX_STACK_VAR(_g19,"_g19");
		HX_STACK_LINE(315)
		this->slices->__Field(HX_CSTRING("push"),true)(_g19);
		HX_STACK_LINE(326)
		this->is_set = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(NineSlice_obj,set,(void))

::phoenix::Vector NineSlice_obj::set_size( ::phoenix::Vector _v){
	HX_STACK_FRAME("luxe.NineSlice","set_size",0x2a233804,"luxe.NineSlice.set_size","luxe/NineSlice.hx",330,0xccc9c257)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_v,"_v")
	HX_STACK_LINE(332)
	if ((!(this->is_set))){
		HX_STACK_LINE(332)
		return _v;
	}
	HX_STACK_LINE(334)
	this->update_size(_v->x,_v->y);
	HX_STACK_LINE(336)
	{
		HX_STACK_LINE(336)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(336)
		Dynamic _g1 = this->slices;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(336)
		while((true)){
			HX_STACK_LINE(336)
			if ((!(((_g < _g1->__Field(HX_CSTRING("length"),true)))))){
				HX_STACK_LINE(336)
				break;
			}
			HX_STACK_LINE(336)
			Dynamic slice = _g1->__GetItem(_g);		HX_STACK_VAR(slice,"slice");
			HX_STACK_LINE(336)
			++(_g);
			HX_STACK_LINE(337)
			if (((this->_geometry != null()))){
				HX_STACK_LINE(338)
				::phoenix::Rectangle _g2 = ::phoenix::Rectangle_obj::__new(slice->__Field(HX_CSTRING("pos"),true)->__Field(HX_CSTRING("x"),true),slice->__Field(HX_CSTRING("pos"),true)->__Field(HX_CSTRING("y"),true),slice->__Field(HX_CSTRING("width"),true),slice->__Field(HX_CSTRING("height"),true));		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(338)
				this->_geometry->quad_resize(slice->__Field(HX_CSTRING("geometry_id"),true),_g2);
			}
		}
	}
	HX_STACK_LINE(342)
	return _v;
}


::phoenix::Vector NineSlice_obj::set_pos( ::phoenix::Vector _v){
	HX_STACK_FRAME("luxe.NineSlice","set_pos",0x677f9fb1,"luxe.NineSlice.set_pos","luxe/NineSlice.hx",346,0xccc9c257)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_v,"_v")
	HX_STACK_LINE(348)
	this->super::set_pos(_v);
	HX_STACK_LINE(350)
	::phoenix::Vector _pv = ::phoenix::Vector_obj::__new(_v->x,_v->y,_v->z,_v->w);		HX_STACK_VAR(_pv,"_pv");
	HX_STACK_LINE(352)
	if ((this->is_set)){
		HX_STACK_LINE(353)
		::phoenix::Spatial _this = this->_geometry->transform->local;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(353)
		_this->pos = _pv;
		HX_STACK_LINE(353)
		if (((_pv != null()))){
			HX_STACK_LINE(353)
			::phoenix::Vector_obj::Listen(_this->pos,_this->_pos_change_dyn());
			HX_STACK_LINE(353)
			if (((bool((_this->pos_changed != null())) && bool(!(_this->ignore_listeners))))){
				HX_STACK_LINE(353)
				_this->pos_changed(_this->pos);
			}
		}
		HX_STACK_LINE(353)
		_this->pos;
	}
	HX_STACK_LINE(356)
	return this->super::set_pos(_pv);
}


Void NineSlice_obj::ondestroy( ){
{
		HX_STACK_FRAME("luxe.NineSlice","ondestroy",0x3fba38b5,"luxe.NineSlice.ondestroy","luxe/NineSlice.hx",362,0xccc9c257)
		HX_STACK_THIS(this)
		HX_STACK_LINE(362)
		if ((this->is_set)){
			HX_STACK_LINE(363)
			this->_geometry->drop(null());
		}
	}
return null();
}


bool NineSlice_obj::set_visible( bool _v){
	HX_STACK_FRAME("luxe.NineSlice","set_visible",0x0c368d0f,"luxe.NineSlice.set_visible","luxe/NineSlice.hx",368,0xccc9c257)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_v,"_v")
	HX_STACK_LINE(370)
	this->super::set_visible(_v);
	HX_STACK_LINE(372)
	if ((this->is_set)){
		HX_STACK_LINE(373)
		this->_geometry->set_visible(_v);
	}
	HX_STACK_LINE(376)
	return this->visible = _v;
}


Float NineSlice_obj::set_depth( Float _d){
	HX_STACK_FRAME("luxe.NineSlice","set_depth",0x0efeb460,"luxe.NineSlice.set_depth","luxe/NineSlice.hx",380,0xccc9c257)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_d,"_d")
	HX_STACK_LINE(382)
	this->super::set_depth(_d);
	HX_STACK_LINE(384)
	if ((this->is_set)){
		HX_STACK_LINE(385)
		this->_geometry->set_depth(_d);
	}
	HX_STACK_LINE(388)
	return this->depth = _d;
}


::phoenix::Rectangle NineSlice_obj::set_clip_rect( ::phoenix::Rectangle val){
	HX_STACK_FRAME("luxe.NineSlice","set_clip_rect",0xead87e10,"luxe.NineSlice.set_clip_rect","luxe/NineSlice.hx",393,0xccc9c257)
	HX_STACK_THIS(this)
	HX_STACK_ARG(val,"val")
	HX_STACK_LINE(395)
	if ((this->is_set)){
		HX_STACK_LINE(396)
		this->_geometry->set_clip_rect(val);
	}
	HX_STACK_LINE(399)
	return this->clip_rect = val;
}


::phoenix::Color NineSlice_obj::set_color( ::phoenix::Color _color){
	HX_STACK_FRAME("luxe.NineSlice","set_color",0x823134c0,"luxe.NineSlice.set_color","luxe/NineSlice.hx",404,0xccc9c257)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_color,"_color")
	HX_STACK_LINE(406)
	if ((this->is_set)){
		HX_STACK_LINE(407)
		this->_geometry->set_color(_color);
	}
	HX_STACK_LINE(410)
	return this->color = _color;
}


Void NineSlice_obj::_create( ::phoenix::Vector _pos,Float _w,Float _h,Dynamic __o__reset){
Dynamic _reset = __o__reset.Default(false);
	HX_STACK_FRAME("luxe.NineSlice","_create",0x383a6115,"luxe.NineSlice._create","luxe/NineSlice.hx",414,0xccc9c257)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_pos,"_pos")
	HX_STACK_ARG(_w,"_w")
	HX_STACK_ARG(_h,"_h")
	HX_STACK_ARG(_reset,"_reset")
{
		HX_STACK_LINE(416)
		if (((bool(!(this->is_set)) || bool(_reset)))){
			HX_STACK_LINE(417)
			this->set(_w,_h);
		}
		HX_STACK_LINE(420)
		::phoenix::Color _color = ::phoenix::Color_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(_color,"_color");
		struct _Function_1_1{
			inline static Dynamic Block( hx::ObjectPtr< ::luxe::NineSlice_obj > __this,::phoenix::Color &_color){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/NineSlice.hx",422,0xccc9c257)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("texture") , __this->texture,false);
					__result->Add(HX_CSTRING("color") , _color,false);
					__result->Add(HX_CSTRING("depth") , __this->nineslice_options->__Field(HX_CSTRING("depth"),true),false);
					__result->Add(HX_CSTRING("group") , __this->nineslice_options->__Field(HX_CSTRING("group"),true),false);
					__result->Add(HX_CSTRING("visible") , __this->nineslice_options->__Field(HX_CSTRING("visible"),true),false);
					__result->Add(HX_CSTRING("batcher") , __this->_batcher,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(422)
		::phoenix::geometry::QuadPackGeometry _g = ::phoenix::geometry::QuadPackGeometry_obj::__new(_Function_1_1::Block(this,_color));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(422)
		this->_geometry = _g;
		HX_STACK_LINE(431)
		{
			HX_STACK_LINE(431)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(431)
			Dynamic _g11 = this->slices;		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(431)
			while((true)){
				HX_STACK_LINE(431)
				if ((!(((_g1 < _g11->__Field(HX_CSTRING("length"),true)))))){
					HX_STACK_LINE(431)
					break;
				}
				HX_STACK_LINE(431)
				Dynamic slice = _g11->__GetItem(_g1);		HX_STACK_VAR(slice,"slice");
				HX_STACK_LINE(431)
				++(_g1);
				HX_STACK_LINE(439)
				::phoenix::Rectangle _g12 = ::phoenix::Rectangle_obj::__new(slice->__Field(HX_CSTRING("source_x"),true),slice->__Field(HX_CSTRING("source_y"),true),slice->__Field(HX_CSTRING("source_width"),true),slice->__Field(HX_CSTRING("source_height"),true));		HX_STACK_VAR(_g12,"_g12");
				struct _Function_3_1{
					inline static Dynamic Block( hx::ObjectPtr< ::luxe::NineSlice_obj > __this,::phoenix::Rectangle &_g12,Dynamic &slice){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/NineSlice.hx",433,0xccc9c257)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_CSTRING("x") , slice->__Field(HX_CSTRING("pos"),true)->__Field(HX_CSTRING("x"),true),false);
							__result->Add(HX_CSTRING("y") , slice->__Field(HX_CSTRING("pos"),true)->__Field(HX_CSTRING("y"),true),false);
							__result->Add(HX_CSTRING("w") , slice->__Field(HX_CSTRING("width"),true),false);
							__result->Add(HX_CSTRING("h") , slice->__Field(HX_CSTRING("height"),true),false);
							__result->Add(HX_CSTRING("color") , __this->nineslice_options->__Field(HX_CSTRING("color"),true),false);
							__result->Add(HX_CSTRING("uv") , _g12,false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(433)
				Dynamic _g2 = _Function_3_1::Block(this,_g12,slice);		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(433)
				int _g3 = this->_geometry->quad_add(_g2);		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(433)
				slice->__FieldRef(HX_CSTRING("geometry_id")) = _g3;
			}
		}
		HX_STACK_LINE(446)
		{
			HX_STACK_LINE(446)
			::phoenix::Spatial _this = this->_geometry->transform->local;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(446)
			_this->pos = _pos;
			HX_STACK_LINE(446)
			if (((_pos != null()))){
				HX_STACK_LINE(446)
				::phoenix::Vector_obj::Listen(_this->pos,_this->_pos_change_dyn());
				HX_STACK_LINE(446)
				if (((bool((_this->pos_changed != null())) && bool(!(_this->ignore_listeners))))){
					HX_STACK_LINE(446)
					_this->pos_changed(_this->pos);
				}
			}
			HX_STACK_LINE(446)
			_this->pos;
		}
		HX_STACK_LINE(447)
		this->_geometry->id = (HX_CSTRING("NineSlice") + this->_geometry->id);
		HX_STACK_LINE(449)
		this->added = true;
		HX_STACK_LINE(450)
		this->is_set = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(NineSlice_obj,_create,(void))

Void NineSlice_obj::create( ::phoenix::Vector _pos,Float _w,Float _h,Dynamic __o__reset){
Dynamic _reset = __o__reset.Default(false);
	HX_STACK_FRAME("luxe.NineSlice","create",0x8597abc2,"luxe.NineSlice.create","luxe/NineSlice.hx",454,0xccc9c257)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_pos,"_pos")
	HX_STACK_ARG(_w,"_w")
	HX_STACK_ARG(_h,"_h")
	HX_STACK_ARG(_reset,"_reset")
{
		HX_STACK_LINE(454)
		Array< ::Dynamic > _reset1 = Array_obj< ::Dynamic >::__new().Add(_reset);		HX_STACK_VAR(_reset1,"_reset1");
		HX_STACK_LINE(454)
		Array< Float > _h1 = Array_obj< Float >::__new().Add(_h);		HX_STACK_VAR(_h1,"_h1");
		HX_STACK_LINE(454)
		Array< Float > _w1 = Array_obj< Float >::__new().Add(_w);		HX_STACK_VAR(_w1,"_w1");
		HX_STACK_LINE(454)
		Array< ::Dynamic > _pos1 = Array_obj< ::Dynamic >::__new().Add(_pos);		HX_STACK_VAR(_pos1,"_pos1");
		HX_STACK_LINE(454)
		Array< ::Dynamic > _g = Array_obj< ::Dynamic >::__new().Add(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(456)
		if ((!(this->texture->loaded))){

			HX_BEGIN_LOCAL_FUNC_S5(hx::LocalFunc,_Function_2_1,Array< ::Dynamic >,_pos1,Array< ::Dynamic >,_g,Array< ::Dynamic >,_reset1,Array< Float >,_h1,Array< Float >,_w1)
			Void run(::phoenix::Texture texture){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","luxe/NineSlice.hx",458,0xccc9c257)
				HX_STACK_ARG(texture,"texture")
				{
					HX_STACK_LINE(458)
					_g->__get((int)0).StaticCast< ::luxe::NineSlice >()->_create(_pos1->__get((int)0).StaticCast< ::phoenix::Vector >(),_w1->__get((int)0),_h1->__get((int)0),_reset1->__get((int)0));
				}
				return null();
			}
			HX_END_LOCAL_FUNC1((void))

			HX_STACK_LINE(457)
			this->texture->set_onload( Dynamic(new _Function_2_1(_pos1,_g,_reset1,_h1,_w1)));
		}
		else{
			HX_STACK_LINE(461)
			this->_create(_pos1->__get((int)0).StaticCast< ::phoenix::Vector >(),_w1->__get((int)0),_h1->__get((int)0),_reset1->__get((int)0));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(NineSlice_obj,create,(void))

Void NineSlice_obj::init( ){
{
		HX_STACK_FRAME("luxe.NineSlice","init",0x5026a256,"luxe.NineSlice.init","luxe/macros/EntityRules.hx",35,0xed942299)
		HX_STACK_THIS(this)
	}
return null();
}



NineSlice_obj::NineSlice_obj()
{
}

void NineSlice_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(NineSlice);
	HX_MARK_MEMBER_NAME(top,"top");
	HX_MARK_MEMBER_NAME(left,"left");
	HX_MARK_MEMBER_NAME(right,"right");
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(bottom,"bottom");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(source_x,"source_x");
	HX_MARK_MEMBER_NAME(source_y,"source_y");
	HX_MARK_MEMBER_NAME(source_w,"source_w");
	HX_MARK_MEMBER_NAME(source_h,"source_h");
	HX_MARK_MEMBER_NAME(is_set,"is_set");
	HX_MARK_MEMBER_NAME(midwidth,"midwidth");
	HX_MARK_MEMBER_NAME(midheight,"midheight");
	HX_MARK_MEMBER_NAME(slices,"slices");
	HX_MARK_MEMBER_NAME(added,"added");
	HX_MARK_MEMBER_NAME(nineslice_options,"nineslice_options");
	HX_MARK_MEMBER_NAME(_geometry,"_geometry");
	HX_MARK_MEMBER_NAME(_batcher,"_batcher");
	::luxe::Sprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void NineSlice_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(top,"top");
	HX_VISIT_MEMBER_NAME(left,"left");
	HX_VISIT_MEMBER_NAME(right,"right");
	HX_VISIT_MEMBER_NAME(width,"width");
	HX_VISIT_MEMBER_NAME(bottom,"bottom");
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(source_x,"source_x");
	HX_VISIT_MEMBER_NAME(source_y,"source_y");
	HX_VISIT_MEMBER_NAME(source_w,"source_w");
	HX_VISIT_MEMBER_NAME(source_h,"source_h");
	HX_VISIT_MEMBER_NAME(is_set,"is_set");
	HX_VISIT_MEMBER_NAME(midwidth,"midwidth");
	HX_VISIT_MEMBER_NAME(midheight,"midheight");
	HX_VISIT_MEMBER_NAME(slices,"slices");
	HX_VISIT_MEMBER_NAME(added,"added");
	HX_VISIT_MEMBER_NAME(nineslice_options,"nineslice_options");
	HX_VISIT_MEMBER_NAME(_geometry,"_geometry");
	HX_VISIT_MEMBER_NAME(_batcher,"_batcher");
	::luxe::Sprite_obj::__Visit(HX_VISIT_ARG);
}

Dynamic NineSlice_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"top") ) { return top; }
		if (HX_FIELD_EQ(inName,"set") ) { return set_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"left") ) { return left; }
		if (HX_FIELD_EQ(inName,"lock") ) { return lock_dyn(); }
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"right") ) { return right; }
		if (HX_FIELD_EQ(inName,"width") ) { return width; }
		if (HX_FIELD_EQ(inName,"added") ) { return added; }
		if (HX_FIELD_EQ(inName,"dirty") ) { return dirty_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"bottom") ) { return bottom; }
		if (HX_FIELD_EQ(inName,"height") ) { return height; }
		if (HX_FIELD_EQ(inName,"is_set") ) { return is_set; }
		if (HX_FIELD_EQ(inName,"slices") ) { return slices; }
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"set_pos") ) { return set_pos_dyn(); }
		if (HX_FIELD_EQ(inName,"_create") ) { return _create_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"source_x") ) { return source_x; }
		if (HX_FIELD_EQ(inName,"source_y") ) { return source_y; }
		if (HX_FIELD_EQ(inName,"source_w") ) { return source_w; }
		if (HX_FIELD_EQ(inName,"source_h") ) { return source_h; }
		if (HX_FIELD_EQ(inName,"midwidth") ) { return midwidth; }
		if (HX_FIELD_EQ(inName,"_batcher") ) { return _batcher; }
		if (HX_FIELD_EQ(inName,"set_size") ) { return set_size_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"midheight") ) { return midheight; }
		if (HX_FIELD_EQ(inName,"_geometry") ) { return _geometry; }
		if (HX_FIELD_EQ(inName,"ondestroy") ) { return ondestroy_dyn(); }
		if (HX_FIELD_EQ(inName,"set_depth") ) { return set_depth_dyn(); }
		if (HX_FIELD_EQ(inName,"set_color") ) { return set_color_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"update_size") ) { return update_size_dyn(); }
		if (HX_FIELD_EQ(inName,"set_visible") ) { return set_visible_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"set_clip_rect") ) { return set_clip_rect_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"nineslice_options") ) { return nineslice_options; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic NineSlice_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"top") ) { top=inValue.Cast< Float >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"left") ) { left=inValue.Cast< Float >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"right") ) { right=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"added") ) { added=inValue.Cast< bool >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"bottom") ) { bottom=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"is_set") ) { is_set=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"slices") ) { slices=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"source_x") ) { source_x=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"source_y") ) { source_y=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"source_w") ) { source_w=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"source_h") ) { source_h=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"midwidth") ) { midwidth=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_batcher") ) { _batcher=inValue.Cast< ::phoenix::Batcher >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"midheight") ) { midheight=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_geometry") ) { _geometry=inValue.Cast< ::phoenix::geometry::QuadPackGeometry >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"nineslice_options") ) { nineslice_options=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void NineSlice_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("top"));
	outFields->push(HX_CSTRING("left"));
	outFields->push(HX_CSTRING("right"));
	outFields->push(HX_CSTRING("width"));
	outFields->push(HX_CSTRING("bottom"));
	outFields->push(HX_CSTRING("height"));
	outFields->push(HX_CSTRING("source_x"));
	outFields->push(HX_CSTRING("source_y"));
	outFields->push(HX_CSTRING("source_w"));
	outFields->push(HX_CSTRING("source_h"));
	outFields->push(HX_CSTRING("is_set"));
	outFields->push(HX_CSTRING("midwidth"));
	outFields->push(HX_CSTRING("midheight"));
	outFields->push(HX_CSTRING("slices"));
	outFields->push(HX_CSTRING("added"));
	outFields->push(HX_CSTRING("nineslice_options"));
	outFields->push(HX_CSTRING("_geometry"));
	outFields->push(HX_CSTRING("_batcher"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(NineSlice_obj,top),HX_CSTRING("top")},
	{hx::fsFloat,(int)offsetof(NineSlice_obj,left),HX_CSTRING("left")},
	{hx::fsFloat,(int)offsetof(NineSlice_obj,right),HX_CSTRING("right")},
	{hx::fsFloat,(int)offsetof(NineSlice_obj,width),HX_CSTRING("width")},
	{hx::fsFloat,(int)offsetof(NineSlice_obj,bottom),HX_CSTRING("bottom")},
	{hx::fsFloat,(int)offsetof(NineSlice_obj,height),HX_CSTRING("height")},
	{hx::fsFloat,(int)offsetof(NineSlice_obj,source_x),HX_CSTRING("source_x")},
	{hx::fsFloat,(int)offsetof(NineSlice_obj,source_y),HX_CSTRING("source_y")},
	{hx::fsFloat,(int)offsetof(NineSlice_obj,source_w),HX_CSTRING("source_w")},
	{hx::fsFloat,(int)offsetof(NineSlice_obj,source_h),HX_CSTRING("source_h")},
	{hx::fsBool,(int)offsetof(NineSlice_obj,is_set),HX_CSTRING("is_set")},
	{hx::fsFloat,(int)offsetof(NineSlice_obj,midwidth),HX_CSTRING("midwidth")},
	{hx::fsFloat,(int)offsetof(NineSlice_obj,midheight),HX_CSTRING("midheight")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(NineSlice_obj,slices),HX_CSTRING("slices")},
	{hx::fsBool,(int)offsetof(NineSlice_obj,added),HX_CSTRING("added")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(NineSlice_obj,nineslice_options),HX_CSTRING("nineslice_options")},
	{hx::fsObject /*::phoenix::geometry::QuadPackGeometry*/ ,(int)offsetof(NineSlice_obj,_geometry),HX_CSTRING("_geometry")},
	{hx::fsObject /*::phoenix::Batcher*/ ,(int)offsetof(NineSlice_obj,_batcher),HX_CSTRING("_batcher")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("top"),
	HX_CSTRING("left"),
	HX_CSTRING("right"),
	HX_CSTRING("width"),
	HX_CSTRING("bottom"),
	HX_CSTRING("height"),
	HX_CSTRING("source_x"),
	HX_CSTRING("source_y"),
	HX_CSTRING("source_w"),
	HX_CSTRING("source_h"),
	HX_CSTRING("is_set"),
	HX_CSTRING("midwidth"),
	HX_CSTRING("midheight"),
	HX_CSTRING("slices"),
	HX_CSTRING("added"),
	HX_CSTRING("nineslice_options"),
	HX_CSTRING("_geometry"),
	HX_CSTRING("_batcher"),
	HX_CSTRING("lock"),
	HX_CSTRING("dirty"),
	HX_CSTRING("update_size"),
	HX_CSTRING("set"),
	HX_CSTRING("set_size"),
	HX_CSTRING("set_pos"),
	HX_CSTRING("ondestroy"),
	HX_CSTRING("set_visible"),
	HX_CSTRING("set_depth"),
	HX_CSTRING("set_clip_rect"),
	HX_CSTRING("set_color"),
	HX_CSTRING("_create"),
	HX_CSTRING("create"),
	HX_CSTRING("init"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(NineSlice_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(NineSlice_obj::__mClass,"__mClass");
};

#endif

Class NineSlice_obj::__mClass;

void NineSlice_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("luxe.NineSlice"), hx::TCanCast< NineSlice_obj> ,sStaticFields,sMemberFields,
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

void NineSlice_obj::__boot()
{
}

} // end namespace luxe
