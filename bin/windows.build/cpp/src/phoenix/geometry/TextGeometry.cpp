#include <hxcpp.h>

#ifndef INCLUDED_EReg
#include <EReg.h>
#endif
#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_Luxe
#include <Luxe.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_Utf8
#include <haxe/Utf8.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
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
#ifndef INCLUDED_luxe_utils_unifill_CodePointIter
#include <luxe/utils/unifill/CodePointIter.h>
#endif
#ifndef INCLUDED_luxe_utils_unifill_Utf
#include <luxe/utils/unifill/Utf.h>
#endif
#ifndef INCLUDED_luxe_utils_unifill_Utf8
#include <luxe/utils/unifill/Utf8.h>
#endif
#ifndef INCLUDED_phoenix_BitmapFont
#include <phoenix/BitmapFont.h>
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
#ifndef INCLUDED_phoenix_geometry_TextGeometry
#include <phoenix/geometry/TextGeometry.h>
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

Void TextGeometry_obj::__construct(Dynamic _options)
{
HX_STACK_FRAME("phoenix.geometry.TextGeometry","new",0x85dc3eae,"phoenix.geometry.TextGeometry.new","phoenix/geometry/TextGeometry.hx",46,0x3cba14a2)
HX_STACK_THIS(this)
HX_STACK_ARG(_options,"_options")
{
	HX_STACK_LINE(95)
	this->dirty_align = true;
	HX_STACK_LINE(94)
	this->dirty_sizing = true;
	HX_STACK_LINE(92)
	this->point_ratio = (int)1;
	HX_STACK_LINE(91)
	this->text_h_h = (int)0;
	HX_STACK_LINE(90)
	this->text_h_w = (int)0;
	HX_STACK_LINE(81)
	this->text_height = (int)0;
	HX_STACK_LINE(80)
	this->text_width = (int)0;
	HX_STACK_LINE(74)
	this->glow_amount = (int)0;
	HX_STACK_LINE(73)
	this->glow_threshold = (int)0;
	HX_STACK_LINE(70)
	this->outline = (int)0;
	HX_STACK_LINE(68)
	this->thickness = 0.5;
	HX_STACK_LINE(67)
	this->smoothness = 0.75;
	HX_STACK_LINE(65)
	this->unique = false;
	HX_STACK_LINE(64)
	this->sdf = false;
	HX_STACK_LINE(57)
	this->bounds_wrap = false;
	HX_STACK_LINE(54)
	this->letter_spacing = 0.0;
	HX_STACK_LINE(53)
	this->line_spacing = 0.0;
	HX_STACK_LINE(52)
	this->point_size = 32.0;
	HX_STACK_LINE(50)
	this->text = HX_CSTRING("");
	HX_STACK_LINE(103)
	this->options = _options;
	HX_STACK_LINE(105)
	if (((this->options == null()))){
		HX_STACK_LINE(105)
		HX_STACK_DO_THROW(HX_CSTRING("TextGeometry: requires non-null options at the moment"));
	}
	HX_STACK_LINE(110)
	if (((this->options->__Field(HX_CSTRING("sdf"),true) != null()))){
		HX_STACK_LINE(110)
		this->sdf = this->options->__Field(HX_CSTRING("sdf"),true);
	}
	HX_STACK_LINE(112)
	if (((this->options->__Field(HX_CSTRING("font"),true) == null()))){
		HX_STACK_LINE(112)
		this->font = ::Luxe_obj::renderer->font;
	}
	else{
		HX_STACK_LINE(112)
		this->font = this->options->__Field(HX_CSTRING("font"),true);
	}
	HX_STACK_LINE(114)
	if (((this->font == ::Luxe_obj::renderer->font))){
		HX_STACK_LINE(114)
		this->sdf = true;
	}
	HX_STACK_LINE(120)
	if (((this->options->__Field(HX_CSTRING("shader"),true) == null()))){
		HX_STACK_LINE(121)
		if ((this->sdf)){
			HX_STACK_LINE(122)
			this->options->__FieldRef(HX_CSTRING("shader")) = ::Luxe_obj::renderer->shaders->__Field(HX_CSTRING("bitmapfont"),true)->__Field(HX_CSTRING("shader"),true);
		}
		else{
			HX_STACK_LINE(124)
			this->options->__FieldRef(HX_CSTRING("shader")) = ::Luxe_obj::renderer->shaders->__Field(HX_CSTRING("textured"),true)->__Field(HX_CSTRING("shader"),true);
		}
	}
	else{
		HX_STACK_LINE(128)
		if (((this->options->__Field(HX_CSTRING("shader"),true) != ::Luxe_obj::renderer->shaders->__Field(HX_CSTRING("bitmapfont"),true)->__Field(HX_CSTRING("shader"),true)))){
			HX_STACK_LINE(129)
			this->unique = true;
		}
	}
	HX_STACK_LINE(133)
	super::__construct(this->options);
	HX_STACK_LINE(134)
	this->set_primitive_type((int)4);
	HX_STACK_LINE(138)
	this->cache = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(139)
	this->line_widths = Array_obj< Float >::__new();
	HX_STACK_LINE(140)
	this->line_offsets = Array_obj< ::Dynamic >::__new().Add(Array_obj< Float >::__new()).Add(Array_obj< Float >::__new());
	HX_STACK_LINE(141)
	this->lines = Array_obj< ::String >::__new();
	HX_STACK_LINE(142)
	::phoenix::Color _g = ::phoenix::Color_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(142)
	this->set_outline_color(_g);
	HX_STACK_LINE(143)
	::phoenix::Color _g1 = ::phoenix::Color_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(143)
	this->set_glow_color(_g1);
	HX_STACK_LINE(145)
	this->default_options();
}
;
	return null();
}

//TextGeometry_obj::~TextGeometry_obj() { }

Dynamic TextGeometry_obj::__CreateEmpty() { return  new TextGeometry_obj; }
hx::ObjectPtr< TextGeometry_obj > TextGeometry_obj::__new(Dynamic _options)
{  hx::ObjectPtr< TextGeometry_obj > result = new TextGeometry_obj();
	result->__construct(_options);
	return result;}

Dynamic TextGeometry_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TextGeometry_obj > result = new TextGeometry_obj();
	result->__construct(inArgs[0]);
	return result;}

Void TextGeometry_obj::tidy( ){
{
		HX_STACK_FRAME("phoenix.geometry.TextGeometry","tidy",0x9ed4da3c,"phoenix.geometry.TextGeometry.tidy","phoenix/geometry/TextGeometry.hx",153,0x3cba14a2)
		HX_STACK_THIS(this)
		HX_STACK_LINE(155)
		int _vertidx = ::Math_obj::floor((Float(this->vertices->length) / Float((int)6)));		HX_STACK_VAR(_vertidx,"_vertidx");
		HX_STACK_LINE(156)
		int _diff = (this->cache->length - _vertidx);		HX_STACK_VAR(_diff,"_diff");
		HX_STACK_LINE(158)
		if (((_diff > (int)0))){
			HX_STACK_LINE(162)
			Array< ::Dynamic > extra = this->cache->splice(_vertidx,_diff);		HX_STACK_VAR(extra,"extra");
			HX_STACK_LINE(163)
			int c = extra->length;		HX_STACK_VAR(c,"c");
			HX_STACK_LINE(164)
			while((true)){
				HX_STACK_LINE(164)
				if ((!(((c > (int)0))))){
					HX_STACK_LINE(164)
					break;
				}
				HX_STACK_LINE(165)
				(c)--;
				HX_STACK_LINE(166)
				Array< ::Dynamic > vert = extra->pop().StaticCast< Array< ::Dynamic > >();		HX_STACK_VAR(vert,"vert");
				HX_STACK_LINE(167)
				vert = null();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(TextGeometry_obj,tidy,(void))

Void TextGeometry_obj::default_options( ){
{
		HX_STACK_FRAME("phoenix.geometry.TextGeometry","default_options",0x112e39ee,"phoenix.geometry.TextGeometry.default_options","phoenix/geometry/TextGeometry.hx",178,0x3cba14a2)
		HX_STACK_THIS(this)
		HX_STACK_LINE(187)
		::phoenix::Texture _g = this->font->pages->get((int)0);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(187)
		this->set_texture(_g);
		HX_STACK_LINE(191)
		if (((this->options->__Field(HX_CSTRING("letter_spacing"),true) != null()))){
			HX_STACK_LINE(191)
			this->set_letter_spacing(this->options->__Field(HX_CSTRING("letter_spacing"),true));
		}
		HX_STACK_LINE(192)
		if (((this->options->__Field(HX_CSTRING("line_spacing"),true) != null()))){
			HX_STACK_LINE(192)
			this->set_line_spacing(this->options->__Field(HX_CSTRING("line_spacing"),true));
		}
		HX_STACK_LINE(193)
		if (((this->options->__Field(HX_CSTRING("point_size"),true) != null()))){
			HX_STACK_LINE(193)
			this->set_point_size(this->options->__Field(HX_CSTRING("point_size"),true));
		}
		HX_STACK_LINE(195)
		if (((this->options->__Field(HX_CSTRING("bounds"),true) != null()))){
			HX_STACK_LINE(195)
			this->set_bounds(this->options->__Field(HX_CSTRING("bounds"),true));
		}
		HX_STACK_LINE(196)
		if (((this->options->__Field(HX_CSTRING("bounds_wrap"),true) != null()))){
			HX_STACK_LINE(196)
			this->set_bounds_wrap(this->options->__Field(HX_CSTRING("bounds_wrap"),true));
		}
		HX_STACK_LINE(198)
		if (((this->options->__Field(HX_CSTRING("align"),true) == null()))){
			HX_STACK_LINE(198)
			this->options->__FieldRef(HX_CSTRING("align")) = (int)0;
		}
		HX_STACK_LINE(199)
		if (((this->options->__Field(HX_CSTRING("align_vertical"),true) == null()))){
			HX_STACK_LINE(199)
			this->options->__FieldRef(HX_CSTRING("align_vertical")) = (int)0;
		}
		HX_STACK_LINE(201)
		this->set_align(this->options->__Field(HX_CSTRING("align"),true));
		HX_STACK_LINE(202)
		this->set_align_vertical(this->options->__Field(HX_CSTRING("align_vertical"),true));
		HX_STACK_LINE(207)
		if (((this->options->__Field(HX_CSTRING("thickness"),true) != null()))){
			HX_STACK_LINE(207)
			this->set_thickness(this->options->__Field(HX_CSTRING("thickness"),true));
		}
		HX_STACK_LINE(208)
		if (((this->options->__Field(HX_CSTRING("smoothness"),true) != null()))){
			HX_STACK_LINE(208)
			this->set_smoothness(this->options->__Field(HX_CSTRING("smoothness"),true));
		}
		HX_STACK_LINE(210)
		if (((this->options->__Field(HX_CSTRING("outline"),true) != null()))){
			HX_STACK_LINE(210)
			this->set_outline(this->options->__Field(HX_CSTRING("outline"),true));
		}
		HX_STACK_LINE(211)
		if (((this->options->__Field(HX_CSTRING("outline_color"),true) != null()))){
			HX_STACK_LINE(211)
			this->set_outline_color(this->options->__Field(HX_CSTRING("outline_color"),true));
		}
		HX_STACK_LINE(213)
		if (((this->options->__Field(HX_CSTRING("glow_threshold"),true) != null()))){
			HX_STACK_LINE(213)
			this->set_glow_threshold(this->options->__Field(HX_CSTRING("glow_threshold"),true));
		}
		HX_STACK_LINE(214)
		if (((this->options->__Field(HX_CSTRING("glow_amount"),true) != null()))){
			HX_STACK_LINE(214)
			this->set_glow_amount(this->options->__Field(HX_CSTRING("glow_amount"),true));
		}
		HX_STACK_LINE(215)
		if (((this->options->__Field(HX_CSTRING("glow_color"),true) != null()))){
			HX_STACK_LINE(215)
			this->set_glow_color(this->options->__Field(HX_CSTRING("glow_color"),true));
		}
		HX_STACK_LINE(217)
		if ((this->sdf)){
			HX_STACK_LINE(217)
			this->flush_uniforms();
		}
		HX_STACK_LINE(220)
		if (((this->options->__Field(HX_CSTRING("text"),true) != null()))){
			HX_STACK_LINE(220)
			this->set_text(this->options->__Field(HX_CSTRING("text"),true));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(TextGeometry_obj,default_options,(void))

::String TextGeometry_obj::set_text( ::String _text){
	HX_STACK_FRAME("phoenix.geometry.TextGeometry","set_text",0x5a10d89c,"phoenix.geometry.TextGeometry.set_text","phoenix/geometry/TextGeometry.hx",225,0x3cba14a2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_text,"_text")
	HX_STACK_LINE(227)
	if (((_text == null()))){
		HX_STACK_LINE(228)
		::haxe::Log_obj::trace(HX_CSTRING("i / textgeometry / null text passed into TextGeometry!"),hx::SourceInfo(HX_CSTRING("TextGeometry.hx"),228,HX_CSTRING("phoenix.geometry.TextGeometry"),HX_CSTRING("set_text")));
		HX_STACK_LINE(229)
		_text = HX_CSTRING("");
	}
	HX_STACK_LINE(233)
	if (((this->text != _text))){
		HX_STACK_LINE(236)
		this->text = _text;
		HX_STACK_LINE(238)
		if (((this->text != HX_CSTRING("")))){
			HX_STACK_LINE(240)
			this->set_dirty_sizing(true);
			HX_STACK_LINE(241)
			this->update_text();
		}
		else{
			HX_STACK_LINE(244)
			this->vertices->splice((int)0,this->vertices->length);
		}
	}
	HX_STACK_LINE(249)
	return this->text;
}


HX_DEFINE_DYNAMIC_FUNC1(TextGeometry_obj,set_text,return )

::String TextGeometry_obj::stats( ){
	HX_STACK_FRAME("phoenix.geometry.TextGeometry","stats",0xcf4693ed,"phoenix.geometry.TextGeometry.stats","phoenix/geometry/TextGeometry.hx",255,0x3cba14a2)
	HX_STACK_THIS(this)
	HX_STACK_LINE(255)
	return (((HX_CSTRING("letters:") + (Float(this->vertices->length) / Float((int)6))) + HX_CSTRING(" / cache:")) + this->cache->length);
}


HX_DEFINE_DYNAMIC_FUNC0(TextGeometry_obj,stats,return )

bool TextGeometry_obj::update_sizes( ){
	HX_STACK_FRAME("phoenix.geometry.TextGeometry","update_sizes",0x6399da8e,"phoenix.geometry.TextGeometry.update_sizes","phoenix/geometry/TextGeometry.hx",259,0x3cba14a2)
	HX_STACK_THIS(this)
	HX_STACK_LINE(261)
	if ((!(this->dirty_sizing))){
		HX_STACK_LINE(261)
		return false;
	}
	HX_STACK_LINE(264)
	::String drawn_text = ::phoenix::geometry::TextGeometry_obj::tab_regex->replace(this->text,HX_CSTRING("    "));		HX_STACK_VAR(drawn_text,"drawn_text");
	HX_STACK_LINE(265)
	if (((bool(this->bounds_wrap) && bool((this->bounds != null()))))){
		HX_STACK_LINE(266)
		::String _g = this->font->wrap_string_to_bounds(drawn_text,this->bounds,this->point_size,this->letter_spacing);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(266)
		drawn_text = _g;
	}
	HX_STACK_LINE(269)
	this->lines->splice((int)0,this->lines->length);
	HX_STACK_LINE(270)
	Array< ::String > _g1 = drawn_text.split(HX_CSTRING("\n"));		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(270)
	this->lines = _g1;
	HX_STACK_LINE(272)
	this->line_widths->splice((int)0,this->line_widths->length);
	HX_STACK_LINE(274)
	Float _g4;		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(274)
	{
		HX_STACK_LINE(274)
		::phoenix::BitmapFont _this = this->font;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(274)
		Float _letter_spc = this->letter_spacing;		HX_STACK_VAR(_letter_spc,"_letter_spc");
		HX_STACK_LINE(274)
		Array< Float > _line_widths = this->line_widths;		HX_STACK_VAR(_line_widths,"_line_widths");
		HX_STACK_LINE(274)
		Float _cur_x = 0.0;		HX_STACK_VAR(_cur_x,"_cur_x");
		HX_STACK_LINE(274)
		Float _max_w = 0.0;		HX_STACK_VAR(_max_w,"_max_w");
		HX_STACK_LINE(274)
		Float _ratio = (Float(this->point_size) / Float(_this->info->__Field(HX_CSTRING("point_size"),true)));		HX_STACK_VAR(_ratio,"_ratio");
		HX_STACK_LINE(274)
		bool _push_widths = (_line_widths != null());		HX_STACK_VAR(_push_widths,"_push_widths");
		HX_STACK_LINE(274)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(274)
		int _len;		HX_STACK_VAR(_len,"_len");
		HX_STACK_LINE(274)
		{
			HX_STACK_LINE(274)
			::luxe::utils::unifill::Utf8 u = ::luxe::utils::unifill::Utf8_obj::__new(drawn_text);		HX_STACK_VAR(u,"u");
			HX_STACK_LINE(274)
			_len = u->codePointCount((int)0,drawn_text.length);
		}
		HX_STACK_LINE(274)
		for(::cpp::FastIterator_obj< int > *__it = ::cpp::CreateFastIterator< int >(::luxe::utils::unifill::CodePointIter_obj::__new(drawn_text));  __it->hasNext(); ){
			int _uglyph = __it->next();
			{
				HX_STACK_LINE(274)
				int _index = _uglyph;		HX_STACK_VAR(_index,"_index");
				HX_STACK_LINE(274)
				if (((_index == (int)10))){
					HX_STACK_LINE(274)
					Float _g2 = ::Math_obj::max(_max_w,_cur_x);		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(274)
					_max_w = _g2;
					HX_STACK_LINE(274)
					if ((_push_widths)){
						HX_STACK_LINE(274)
						_line_widths->push(_cur_x);
					}
					HX_STACK_LINE(274)
					_cur_x = (int)0;
				}
				else{
					HX_STACK_LINE(274)
					Dynamic _char = _this->info->__Field(HX_CSTRING("chars"),true)->__Field(HX_CSTRING("get"),true)(_index);		HX_STACK_VAR(_char,"_char");
					HX_STACK_LINE(274)
					if (((_char == null()))){
						HX_STACK_LINE(274)
						_char = _this->space_char;
					}
					HX_STACK_LINE(274)
					Float _spacing = _char->__Field(HX_CSTRING("xadvance"),true);		HX_STACK_VAR(_spacing,"_spacing");
					HX_STACK_LINE(274)
					if (((i < (_len - (int)1)))){
						HX_STACK_LINE(274)
						int _next_index = ::haxe::Utf8_obj::charCodeAt(drawn_text,(i + (int)1));		HX_STACK_VAR(_next_index,"_next_index");
						HX_STACK_LINE(274)
						Dynamic _g3;		HX_STACK_VAR(_g3,"_g3");
						HX_STACK_LINE(274)
						{
							HX_STACK_LINE(274)
							::haxe::ds::IntMap _map = _this->info->__Field(HX_CSTRING("kernings"),true)->__Field(HX_CSTRING("get"),true)(_index);		HX_STACK_VAR(_map,"_map");
							HX_STACK_LINE(274)
							if (((  (((_map != null()))) ? bool(_map->exists(_next_index)) : bool(false) ))){
								HX_STACK_LINE(274)
								_g3 = _map->get(_next_index);
							}
							else{
								HX_STACK_LINE(274)
								_g3 = (int)0;
							}
						}
						HX_STACK_LINE(274)
						hx::AddEq(_spacing,_g3);
						HX_STACK_LINE(274)
						if (((_next_index >= (int)32))){
							HX_STACK_LINE(274)
							hx::AddEq(_spacing,_letter_spc);
						}
					}
					HX_STACK_LINE(274)
					hx::AddEq(_cur_x,(_spacing * _ratio));
				}
				HX_STACK_LINE(274)
				++(i);
			}
;
		}
		HX_STACK_LINE(274)
		if ((_push_widths)){
			HX_STACK_LINE(274)
			_line_widths->push(_cur_x);
		}
		HX_STACK_LINE(274)
		_g4 = ::Math_obj::max(_max_w,_cur_x);
	}
	HX_STACK_LINE(274)
	this->text_width = _g4;
	HX_STACK_LINE(275)
	{
		HX_STACK_LINE(275)
		::phoenix::BitmapFont _this = this->font;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(275)
		Float _ratio = (Float(this->point_size) / Float(_this->info->__Field(HX_CSTRING("point_size"),true)));		HX_STACK_VAR(_ratio,"_ratio");
		HX_STACK_LINE(275)
		this->text_height = (this->lines->length * ((((_this->info->__Field(HX_CSTRING("line_height"),true) + this->line_spacing)) * _ratio)));
	}
	HX_STACK_LINE(276)
	this->text_h_w = (Float(this->text_width) / Float((int)2));
	HX_STACK_LINE(277)
	this->text_h_h = (Float(this->text_height) / Float((int)2));
	HX_STACK_LINE(278)
	this->point_ratio = (Float(this->point_size) / Float(this->font->info->__Field(HX_CSTRING("point_size"),true)));
	HX_STACK_LINE(280)
	this->set_dirty_sizing(false);
	HX_STACK_LINE(282)
	return true;
}


HX_DEFINE_DYNAMIC_FUNC0(TextGeometry_obj,update_sizes,return )

Void TextGeometry_obj::update_text( ){
{
		HX_STACK_FRAME("phoenix.geometry.TextGeometry","update_text",0xa0aa4e31,"phoenix.geometry.TextGeometry.update_text","phoenix/geometry/TextGeometry.hx",288,0x3cba14a2)
		HX_STACK_THIS(this)
		HX_STACK_LINE(288)
		::phoenix::geometry::TextGeometry _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(290)
		Float _pos_x = 0.0;		HX_STACK_VAR(_pos_x,"_pos_x");
		HX_STACK_LINE(291)
		Float _pos_y = 0.0;		HX_STACK_VAR(_pos_y,"_pos_y");
		HX_STACK_LINE(292)
		bool _bounds_based = (this->bounds != null());		HX_STACK_VAR(_bounds_based,"_bounds_based");
		HX_STACK_LINE(294)
		if ((_bounds_based)){
			HX_STACK_LINE(295)
			{
				HX_STACK_LINE(295)
				::phoenix::Vector _this = this->transform->local->pos;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(295)
				Float _x = _pos_x = this->bounds->x;		HX_STACK_VAR(_x,"_x");
				HX_STACK_LINE(295)
				_this->x = _x;
				HX_STACK_LINE(295)
				if ((_this->_construct)){
					HX_STACK_LINE(295)
					_this->x;
				}
				else{
					HX_STACK_LINE(295)
					if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
						HX_STACK_LINE(295)
						_this->listen_x(_x);
					}
					HX_STACK_LINE(295)
					_this->x;
				}
			}
			HX_STACK_LINE(296)
			{
				HX_STACK_LINE(296)
				::phoenix::Vector _this = this->transform->local->pos;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(296)
				Float _y = _pos_y = this->bounds->y;		HX_STACK_VAR(_y,"_y");
				HX_STACK_LINE(296)
				_this->y = _y;
				HX_STACK_LINE(296)
				if ((_this->_construct)){
					HX_STACK_LINE(296)
					_this->y;
				}
				else{
					HX_STACK_LINE(296)
					if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
						HX_STACK_LINE(296)
						_this->listen_y(_y);
					}
					HX_STACK_LINE(296)
					_this->y;
				}
			}
		}
		HX_STACK_LINE(299)
		Float _cur_x = 0.0;		HX_STACK_VAR(_cur_x,"_cur_x");
		HX_STACK_LINE(300)
		Float _cur_y = 0.0;		HX_STACK_VAR(_cur_y,"_cur_y");
		HX_STACK_LINE(301)
		int _line_idx = (int)0;		HX_STACK_VAR(_line_idx,"_line_idx");
		HX_STACK_LINE(302)
		int _total_idx = (int)0;		HX_STACK_VAR(_total_idx,"_total_idx");
		HX_STACK_LINE(303)
		bool _is_char = true;		HX_STACK_VAR(_is_char,"_is_char");
		HX_STACK_LINE(304)
		bool _was_dirty = this->update_sizes();		HX_STACK_VAR(_was_dirty,"_was_dirty");
		HX_STACK_LINE(311)
		{
			HX_STACK_LINE(311)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(311)
			Array< ::String > _g11 = this->lines;		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(311)
			while((true)){
				HX_STACK_LINE(311)
				if ((!(((_g1 < _g11->length))))){
					HX_STACK_LINE(311)
					break;
				}
				HX_STACK_LINE(311)
				::String _line = _g11->__get(_g1);		HX_STACK_VAR(_line,"_line");
				HX_STACK_LINE(311)
				++(_g1);
				HX_STACK_LINE(315)
				Float _line_x_offset = 0.0;		HX_STACK_VAR(_line_x_offset,"_line_x_offset");
				HX_STACK_LINE(316)
				Float _line_y_offset = 0.0;		HX_STACK_VAR(_line_y_offset,"_line_y_offset");
				HX_STACK_LINE(318)
				if ((this->dirty_align)){
					HX_STACK_LINE(320)
					if ((!(_bounds_based))){
						HX_STACK_LINE(322)
						{
							HX_STACK_LINE(322)
							int _g2 = this->align;		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(322)
							switch( (int)(_g2)){
								case (int)2: {
									HX_STACK_LINE(322)
									_line_x_offset = -(((Float(this->line_widths->__get(_line_idx)) / Float(2.0))));
								}
								;break;
								case (int)1: {
									HX_STACK_LINE(322)
									_line_x_offset = -(this->line_widths->__get(_line_idx));
								}
								;break;
								default: {
									HX_STACK_LINE(322)
									_line_x_offset = 0.0;
								}
							}
						}
						HX_STACK_LINE(328)
						{
							HX_STACK_LINE(328)
							int _g2 = this->align_vertical;		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(328)
							switch( (int)(_g2)){
								case (int)2: {
									HX_STACK_LINE(328)
									_line_y_offset = -(this->text_h_h);
								}
								;break;
								case (int)4: {
									HX_STACK_LINE(328)
									_line_y_offset = -(this->text_height);
								}
								;break;
								default: {
									HX_STACK_LINE(328)
									_line_y_offset = 0.0;
								}
							}
						}
					}
					else{
						HX_STACK_LINE(336)
						{
							HX_STACK_LINE(336)
							int _g2 = this->align;		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(336)
							switch( (int)(_g2)){
								case (int)2: {
									HX_STACK_LINE(336)
									_line_x_offset = (-(((Float(this->line_widths->__get(_line_idx)) / Float(2.0)))) + (Float(this->bounds->w) / Float((int)2)));
								}
								;break;
								case (int)1: {
									HX_STACK_LINE(336)
									_line_x_offset = (-(this->line_widths->__get(_line_idx)) + this->bounds->w);
								}
								;break;
								default: {
									HX_STACK_LINE(336)
									_line_x_offset = 0.0;
								}
							}
						}
						HX_STACK_LINE(342)
						{
							HX_STACK_LINE(342)
							int _g2 = this->align_vertical;		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(342)
							switch( (int)(_g2)){
								case (int)2: {
									HX_STACK_LINE(342)
									_line_y_offset = ((Float(this->bounds->h) / Float((int)2)) - this->text_h_h);
								}
								;break;
								case (int)4: {
									HX_STACK_LINE(342)
									_line_y_offset = (this->bounds->h - this->text_height);
								}
								;break;
								default: {
									HX_STACK_LINE(342)
									_line_y_offset = 0.0;
								}
							}
						}
					}
					HX_STACK_LINE(351)
					this->line_offsets->__get((int)0).StaticCast< Array< Float > >()[_line_idx] = _line_x_offset;
					HX_STACK_LINE(352)
					this->line_offsets->__get((int)1).StaticCast< Array< Float > >()[_line_idx] = _line_y_offset;
				}
				else{
					HX_STACK_LINE(356)
					_line_x_offset = this->line_offsets->__get((int)0).StaticCast< Array< Float > >()->__get(_line_idx);
					HX_STACK_LINE(357)
					_line_y_offset = this->line_offsets->__get((int)1).StaticCast< Array< Float > >()->__get(_line_idx);
				}
				HX_STACK_LINE(361)
				if (((_line_idx != (int)0))){
					HX_STACK_LINE(362)
					hx::AddEq(_cur_y,(((_g->font->info->__Field(HX_CSTRING("line_height"),true) + _g->line_spacing)) * _g->point_ratio));
					HX_STACK_LINE(362)
					_cur_x = (int)0;
				}
				HX_STACK_LINE(367)
				int _idx = (int)0;		HX_STACK_VAR(_idx,"_idx");
				HX_STACK_LINE(368)
				for(::cpp::FastIterator_obj< int > *__it = ::cpp::CreateFastIterator< int >(::luxe::utils::unifill::CodePointIter_obj::__new(_line));  __it->hasNext(); ){
					int _uglyph = __it->next();
					{
						HX_STACK_LINE(370)
						int _index = _uglyph;		HX_STACK_VAR(_index,"_index");
						HX_STACK_LINE(371)
						Dynamic _char = this->font->info->__Field(HX_CSTRING("chars"),true)->__Field(HX_CSTRING("get"),true)(_index);		HX_STACK_VAR(_char,"_char");
						HX_STACK_LINE(372)
						_is_char = (bool((_char != null())) && bool((_index > (int)32)));
						HX_STACK_LINE(376)
						if ((!(_is_char))){
							HX_STACK_LINE(377)
							_char = this->font->space_char;
						}
						HX_STACK_LINE(380)
						if ((_is_char)){
							HX_STACK_LINE(383)
							Float _quad_x = ((_line_x_offset + _cur_x) + (_char->__Field(HX_CSTRING("xoffset"),true) * this->point_ratio));		HX_STACK_VAR(_quad_x,"_quad_x");
							HX_STACK_LINE(384)
							Float _quad_y = ((_line_y_offset + _cur_y) + (_char->__Field(HX_CSTRING("yoffset"),true) * this->point_ratio));		HX_STACK_VAR(_quad_y,"_quad_y");
							HX_STACK_LINE(386)
							::phoenix::Texture _page = this->font->pages->get(_char->__Field(HX_CSTRING("page"),true));		HX_STACK_VAR(_page,"_page");
							HX_STACK_LINE(388)
							Float _u1 = (Float(_char->__Field(HX_CSTRING("x"),true)) / Float(_page->width_actual));		HX_STACK_VAR(_u1,"_u1");
							HX_STACK_LINE(389)
							Float _v1 = (Float(_char->__Field(HX_CSTRING("y"),true)) / Float(_page->height_actual));		HX_STACK_VAR(_v1,"_v1");
							HX_STACK_LINE(390)
							Float _u2 = (Float(((_char->__Field(HX_CSTRING("x"),true) + _char->__Field(HX_CSTRING("width"),true)))) / Float(_page->width_actual));		HX_STACK_VAR(_u2,"_u2");
							HX_STACK_LINE(391)
							Float _v2 = (Float(((_char->__Field(HX_CSTRING("y"),true) + _char->__Field(HX_CSTRING("height"),true)))) / Float(_page->height_actual));		HX_STACK_VAR(_v2,"_v2");
							HX_STACK_LINE(393)
							this->update_char(_total_idx,_quad_x,_quad_y,(_char->__Field(HX_CSTRING("width"),true) * this->point_ratio),(_char->__Field(HX_CSTRING("height"),true) * this->point_ratio),_u1,_v1,_u2,_v2,this->color);
							HX_STACK_LINE(399)
							(_total_idx)++;
						}
						HX_STACK_LINE(405)
						Float _x_inc = _char->__Field(HX_CSTRING("xadvance"),true);		HX_STACK_VAR(_x_inc,"_x_inc");
						HX_STACK_LINE(408)
						if (((_idx < (_line.length - (int)1)))){
							HX_STACK_LINE(409)
							Dynamic _g2;		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(409)
							{
								HX_STACK_LINE(409)
								int _second = ::haxe::Utf8_obj::charCodeAt(_line,(_idx + (int)1));		HX_STACK_VAR(_second,"_second");
								HX_STACK_LINE(409)
								::haxe::ds::IntMap _map = this->font->info->__Field(HX_CSTRING("kernings"),true)->__Field(HX_CSTRING("get"),true)(_index);		HX_STACK_VAR(_map,"_map");
								HX_STACK_LINE(409)
								if (((  (((_map != null()))) ? bool(_map->exists(_second)) : bool(false) ))){
									HX_STACK_LINE(409)
									_g2 = _map->get(_second);
								}
								else{
									HX_STACK_LINE(409)
									_g2 = (int)0;
								}
							}
							HX_STACK_LINE(409)
							hx::AddEq(_x_inc,_g2);
							HX_STACK_LINE(410)
							if (((_index >= (int)32))){
								HX_STACK_LINE(411)
								hx::AddEq(_x_inc,this->letter_spacing);
							}
						}
						HX_STACK_LINE(416)
						hx::AddEq(_cur_x,(_x_inc * this->point_ratio));
						HX_STACK_LINE(419)
						(_idx)++;
					}
;
				}
				HX_STACK_LINE(424)
				(_line_idx)++;
			}
		}
		HX_STACK_LINE(431)
		int _vertidx = ::Std_obj::_int((Float(this->vertices->length) / Float((int)6)));		HX_STACK_VAR(_vertidx,"_vertidx");
		HX_STACK_LINE(432)
		int _diff = (_vertidx - _total_idx);		HX_STACK_VAR(_diff,"_diff");
		HX_STACK_LINE(434)
		if (((_diff > (int)0))){
			HX_STACK_LINE(435)
			this->vertices->splice((_total_idx * (int)6),(_diff * (int)6));
		}
		HX_STACK_LINE(439)
		this->dirty_align = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(TextGeometry_obj,update_text,(void))

Void TextGeometry_obj::update_char( int _letteridx,Float _x,Float _y,Float _w,Float _h,Float _u,Float _v,Float _u2,Float _v2,::phoenix::Color _color){
{
		HX_STACK_FRAME("phoenix.geometry.TextGeometry","update_char",0x956fe05a,"phoenix.geometry.TextGeometry.update_char","phoenix/geometry/TextGeometry.hx",444,0x3cba14a2)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_letteridx,"_letteridx")
		HX_STACK_ARG(_x,"_x")
		HX_STACK_ARG(_y,"_y")
		HX_STACK_ARG(_w,"_w")
		HX_STACK_ARG(_h,"_h")
		HX_STACK_ARG(_u,"_u")
		HX_STACK_ARG(_v,"_v")
		HX_STACK_ARG(_u2,"_u2")
		HX_STACK_ARG(_v2,"_v2")
		HX_STACK_ARG(_color,"_color")
		HX_STACK_LINE(446)
		::phoenix::geometry::Vertex vert0;		HX_STACK_VAR(vert0,"vert0");
		HX_STACK_LINE(446)
		::phoenix::geometry::Vertex vert1;		HX_STACK_VAR(vert1,"vert1");
		HX_STACK_LINE(446)
		::phoenix::geometry::Vertex vert2;		HX_STACK_VAR(vert2,"vert2");
		HX_STACK_LINE(447)
		::phoenix::geometry::Vertex vert3;		HX_STACK_VAR(vert3,"vert3");
		HX_STACK_LINE(447)
		::phoenix::geometry::Vertex vert4;		HX_STACK_VAR(vert4,"vert4");
		HX_STACK_LINE(447)
		::phoenix::geometry::Vertex vert5;		HX_STACK_VAR(vert5,"vert5");
		HX_STACK_LINE(449)
		Array< ::Dynamic > quad = this->cache->__get(_letteridx).StaticCast< Array< ::Dynamic > >();		HX_STACK_VAR(quad,"quad");
		HX_STACK_LINE(452)
		if (((quad == null()))){
			HX_STACK_LINE(456)
			::phoenix::Vector _g = ::phoenix::Vector_obj::__new(_x,_y,null(),null());		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(456)
			::phoenix::geometry::Vertex _g1 = ::phoenix::geometry::Vertex_obj::__new(_g,_color,null());		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(456)
			vert0 = _g1;
			HX_STACK_LINE(457)
			::phoenix::Vector _g2 = ::phoenix::Vector_obj::__new((_x + _w),_y,null(),null());		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(457)
			::phoenix::geometry::Vertex _g3 = ::phoenix::geometry::Vertex_obj::__new(_g2,_color,null());		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(457)
			vert1 = _g3;
			HX_STACK_LINE(458)
			::phoenix::Vector _g4 = ::phoenix::Vector_obj::__new((_x + _w),(_y + _h),null(),null());		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(458)
			::phoenix::geometry::Vertex _g5 = ::phoenix::geometry::Vertex_obj::__new(_g4,_color,null());		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(458)
			vert2 = _g5;
			HX_STACK_LINE(460)
			::phoenix::Vector _g6 = ::phoenix::Vector_obj::__new(_x,(_y + _h),null(),null());		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(460)
			::phoenix::geometry::Vertex _g7 = ::phoenix::geometry::Vertex_obj::__new(_g6,_color,null());		HX_STACK_VAR(_g7,"_g7");
			HX_STACK_LINE(460)
			vert3 = _g7;
			HX_STACK_LINE(461)
			::phoenix::Vector _g8 = ::phoenix::Vector_obj::__new(_x,_y,null(),null());		HX_STACK_VAR(_g8,"_g8");
			HX_STACK_LINE(461)
			::phoenix::geometry::Vertex _g9 = ::phoenix::geometry::Vertex_obj::__new(_g8,_color,null());		HX_STACK_VAR(_g9,"_g9");
			HX_STACK_LINE(461)
			vert4 = _g9;
			HX_STACK_LINE(462)
			::phoenix::Vector _g10 = ::phoenix::Vector_obj::__new((_x + _w),(_y + _h),null(),null());		HX_STACK_VAR(_g10,"_g10");
			HX_STACK_LINE(462)
			::phoenix::geometry::Vertex _g11 = ::phoenix::geometry::Vertex_obj::__new(_g10,_color,null());		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(462)
			vert5 = _g11;
			HX_STACK_LINE(464)
			quad = Array_obj< ::Dynamic >::__new().Add(vert0).Add(vert1).Add(vert2).Add(vert3).Add(vert4).Add(vert5);
			HX_STACK_LINE(465)
			this->cache[_letteridx] = quad;
		}
		else{
			HX_STACK_LINE(472)
			vert0 = quad->__get((int)0).StaticCast< ::phoenix::geometry::Vertex >();
			HX_STACK_LINE(472)
			vert1 = quad->__get((int)1).StaticCast< ::phoenix::geometry::Vertex >();
			HX_STACK_LINE(472)
			vert2 = quad->__get((int)2).StaticCast< ::phoenix::geometry::Vertex >();
			HX_STACK_LINE(473)
			vert3 = quad->__get((int)3).StaticCast< ::phoenix::geometry::Vertex >();
			HX_STACK_LINE(473)
			vert4 = quad->__get((int)4).StaticCast< ::phoenix::geometry::Vertex >();
			HX_STACK_LINE(473)
			vert5 = quad->__get((int)5).StaticCast< ::phoenix::geometry::Vertex >();
			HX_STACK_LINE(476)
			{
				HX_STACK_LINE(476)
				::phoenix::Vector _this = vert0->pos;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(476)
				bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
				HX_STACK_LINE(476)
				_this->ignore_listeners = true;
				HX_STACK_LINE(476)
				{
					HX_STACK_LINE(476)
					_this->x = _x;
					HX_STACK_LINE(476)
					if ((_this->_construct)){
						HX_STACK_LINE(476)
						_this->x;
					}
					else{
						HX_STACK_LINE(476)
						if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
							HX_STACK_LINE(476)
							_this->listen_x(_x);
						}
						HX_STACK_LINE(476)
						_this->x;
					}
				}
				HX_STACK_LINE(476)
				{
					HX_STACK_LINE(476)
					_this->y = _y;
					HX_STACK_LINE(476)
					if ((_this->_construct)){
						HX_STACK_LINE(476)
						_this->y;
					}
					else{
						HX_STACK_LINE(476)
						if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
							HX_STACK_LINE(476)
							_this->listen_y(_y);
						}
						HX_STACK_LINE(476)
						_this->y;
					}
				}
				HX_STACK_LINE(476)
				_this->ignore_listeners = prev;
				HX_STACK_LINE(476)
				if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
					HX_STACK_LINE(476)
					_this->listen_x(_this->x);
				}
				HX_STACK_LINE(476)
				if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
					HX_STACK_LINE(476)
					_this->listen_y(_this->y);
				}
				HX_STACK_LINE(476)
				_this;
			}
			HX_STACK_LINE(477)
			{
				HX_STACK_LINE(477)
				::phoenix::Vector _this = vert1->pos;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(477)
				Float _x1 = (_x + _w);		HX_STACK_VAR(_x1,"_x1");
				HX_STACK_LINE(477)
				bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
				HX_STACK_LINE(477)
				_this->ignore_listeners = true;
				HX_STACK_LINE(477)
				{
					HX_STACK_LINE(477)
					_this->x = _x1;
					HX_STACK_LINE(477)
					if ((_this->_construct)){
						HX_STACK_LINE(477)
						_this->x;
					}
					else{
						HX_STACK_LINE(477)
						if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
							HX_STACK_LINE(477)
							_this->listen_x(_x1);
						}
						HX_STACK_LINE(477)
						_this->x;
					}
				}
				HX_STACK_LINE(477)
				{
					HX_STACK_LINE(477)
					_this->y = _y;
					HX_STACK_LINE(477)
					if ((_this->_construct)){
						HX_STACK_LINE(477)
						_this->y;
					}
					else{
						HX_STACK_LINE(477)
						if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
							HX_STACK_LINE(477)
							_this->listen_y(_y);
						}
						HX_STACK_LINE(477)
						_this->y;
					}
				}
				HX_STACK_LINE(477)
				_this->ignore_listeners = prev;
				HX_STACK_LINE(477)
				if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
					HX_STACK_LINE(477)
					_this->listen_x(_this->x);
				}
				HX_STACK_LINE(477)
				if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
					HX_STACK_LINE(477)
					_this->listen_y(_this->y);
				}
				HX_STACK_LINE(477)
				_this;
			}
			HX_STACK_LINE(478)
			{
				HX_STACK_LINE(478)
				::phoenix::Vector _this = vert2->pos;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(478)
				Float _x1 = (_x + _w);		HX_STACK_VAR(_x1,"_x1");
				HX_STACK_LINE(478)
				Float _y1 = (_y + _h);		HX_STACK_VAR(_y1,"_y1");
				HX_STACK_LINE(478)
				bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
				HX_STACK_LINE(478)
				_this->ignore_listeners = true;
				HX_STACK_LINE(478)
				{
					HX_STACK_LINE(478)
					_this->x = _x1;
					HX_STACK_LINE(478)
					if ((_this->_construct)){
						HX_STACK_LINE(478)
						_this->x;
					}
					else{
						HX_STACK_LINE(478)
						if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
							HX_STACK_LINE(478)
							_this->listen_x(_x1);
						}
						HX_STACK_LINE(478)
						_this->x;
					}
				}
				HX_STACK_LINE(478)
				{
					HX_STACK_LINE(478)
					_this->y = _y1;
					HX_STACK_LINE(478)
					if ((_this->_construct)){
						HX_STACK_LINE(478)
						_this->y;
					}
					else{
						HX_STACK_LINE(478)
						if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
							HX_STACK_LINE(478)
							_this->listen_y(_y1);
						}
						HX_STACK_LINE(478)
						_this->y;
					}
				}
				HX_STACK_LINE(478)
				_this->ignore_listeners = prev;
				HX_STACK_LINE(478)
				if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
					HX_STACK_LINE(478)
					_this->listen_x(_this->x);
				}
				HX_STACK_LINE(478)
				if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
					HX_STACK_LINE(478)
					_this->listen_y(_this->y);
				}
				HX_STACK_LINE(478)
				_this;
			}
			HX_STACK_LINE(479)
			{
				HX_STACK_LINE(479)
				::phoenix::Vector _this = vert3->pos;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(479)
				Float _y1 = (_y + _h);		HX_STACK_VAR(_y1,"_y1");
				HX_STACK_LINE(479)
				bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
				HX_STACK_LINE(479)
				_this->ignore_listeners = true;
				HX_STACK_LINE(479)
				{
					HX_STACK_LINE(479)
					_this->x = _x;
					HX_STACK_LINE(479)
					if ((_this->_construct)){
						HX_STACK_LINE(479)
						_this->x;
					}
					else{
						HX_STACK_LINE(479)
						if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
							HX_STACK_LINE(479)
							_this->listen_x(_x);
						}
						HX_STACK_LINE(479)
						_this->x;
					}
				}
				HX_STACK_LINE(479)
				{
					HX_STACK_LINE(479)
					_this->y = _y1;
					HX_STACK_LINE(479)
					if ((_this->_construct)){
						HX_STACK_LINE(479)
						_this->y;
					}
					else{
						HX_STACK_LINE(479)
						if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
							HX_STACK_LINE(479)
							_this->listen_y(_y1);
						}
						HX_STACK_LINE(479)
						_this->y;
					}
				}
				HX_STACK_LINE(479)
				_this->ignore_listeners = prev;
				HX_STACK_LINE(479)
				if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
					HX_STACK_LINE(479)
					_this->listen_x(_this->x);
				}
				HX_STACK_LINE(479)
				if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
					HX_STACK_LINE(479)
					_this->listen_y(_this->y);
				}
				HX_STACK_LINE(479)
				_this;
			}
			HX_STACK_LINE(480)
			{
				HX_STACK_LINE(480)
				::phoenix::Vector _this = vert4->pos;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(480)
				bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
				HX_STACK_LINE(480)
				_this->ignore_listeners = true;
				HX_STACK_LINE(480)
				{
					HX_STACK_LINE(480)
					_this->x = _x;
					HX_STACK_LINE(480)
					if ((_this->_construct)){
						HX_STACK_LINE(480)
						_this->x;
					}
					else{
						HX_STACK_LINE(480)
						if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
							HX_STACK_LINE(480)
							_this->listen_x(_x);
						}
						HX_STACK_LINE(480)
						_this->x;
					}
				}
				HX_STACK_LINE(480)
				{
					HX_STACK_LINE(480)
					_this->y = _y;
					HX_STACK_LINE(480)
					if ((_this->_construct)){
						HX_STACK_LINE(480)
						_this->y;
					}
					else{
						HX_STACK_LINE(480)
						if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
							HX_STACK_LINE(480)
							_this->listen_y(_y);
						}
						HX_STACK_LINE(480)
						_this->y;
					}
				}
				HX_STACK_LINE(480)
				_this->ignore_listeners = prev;
				HX_STACK_LINE(480)
				if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
					HX_STACK_LINE(480)
					_this->listen_x(_this->x);
				}
				HX_STACK_LINE(480)
				if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
					HX_STACK_LINE(480)
					_this->listen_y(_this->y);
				}
				HX_STACK_LINE(480)
				_this;
			}
			HX_STACK_LINE(481)
			{
				HX_STACK_LINE(481)
				::phoenix::Vector _this = vert5->pos;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(481)
				Float _x1 = (_x + _w);		HX_STACK_VAR(_x1,"_x1");
				HX_STACK_LINE(481)
				Float _y1 = (_y + _h);		HX_STACK_VAR(_y1,"_y1");
				HX_STACK_LINE(481)
				bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
				HX_STACK_LINE(481)
				_this->ignore_listeners = true;
				HX_STACK_LINE(481)
				{
					HX_STACK_LINE(481)
					_this->x = _x1;
					HX_STACK_LINE(481)
					if ((_this->_construct)){
						HX_STACK_LINE(481)
						_this->x;
					}
					else{
						HX_STACK_LINE(481)
						if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
							HX_STACK_LINE(481)
							_this->listen_x(_x1);
						}
						HX_STACK_LINE(481)
						_this->x;
					}
				}
				HX_STACK_LINE(481)
				{
					HX_STACK_LINE(481)
					_this->y = _y1;
					HX_STACK_LINE(481)
					if ((_this->_construct)){
						HX_STACK_LINE(481)
						_this->y;
					}
					else{
						HX_STACK_LINE(481)
						if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
							HX_STACK_LINE(481)
							_this->listen_y(_y1);
						}
						HX_STACK_LINE(481)
						_this->y;
					}
				}
				HX_STACK_LINE(481)
				_this->ignore_listeners = prev;
				HX_STACK_LINE(481)
				if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
					HX_STACK_LINE(481)
					_this->listen_x(_this->x);
				}
				HX_STACK_LINE(481)
				if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
					HX_STACK_LINE(481)
					_this->listen_y(_this->y);
				}
				HX_STACK_LINE(481)
				_this;
			}
		}
		HX_STACK_LINE(485)
		{
			HX_STACK_LINE(485)
			::phoenix::geometry::TextureCoord _this = vert0->uv->uv0;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(485)
			_this->u = _u;
			HX_STACK_LINE(485)
			_this->v = _v;
			HX_STACK_LINE(485)
			_this;
		}
		HX_STACK_LINE(486)
		{
			HX_STACK_LINE(486)
			::phoenix::geometry::TextureCoord _this = vert1->uv->uv0;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(486)
			_this->u = _u2;
			HX_STACK_LINE(486)
			_this->v = _v;
			HX_STACK_LINE(486)
			_this;
		}
		HX_STACK_LINE(487)
		{
			HX_STACK_LINE(487)
			::phoenix::geometry::TextureCoord _this = vert2->uv->uv0;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(487)
			_this->u = _u2;
			HX_STACK_LINE(487)
			_this->v = _v2;
			HX_STACK_LINE(487)
			_this;
		}
		HX_STACK_LINE(488)
		{
			HX_STACK_LINE(488)
			::phoenix::geometry::TextureCoord _this = vert3->uv->uv0;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(488)
			_this->u = _u;
			HX_STACK_LINE(488)
			_this->v = _v2;
			HX_STACK_LINE(488)
			_this;
		}
		HX_STACK_LINE(489)
		{
			HX_STACK_LINE(489)
			::phoenix::geometry::TextureCoord _this = vert4->uv->uv0;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(489)
			_this->u = _u;
			HX_STACK_LINE(489)
			_this->v = _v;
			HX_STACK_LINE(489)
			_this;
		}
		HX_STACK_LINE(490)
		{
			HX_STACK_LINE(490)
			::phoenix::geometry::TextureCoord _this = vert5->uv->uv0;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(490)
			_this->u = _u2;
			HX_STACK_LINE(490)
			_this->v = _v2;
			HX_STACK_LINE(490)
			_this;
		}
		HX_STACK_LINE(495)
		int _vertidx = ::Math_obj::floor((Float(this->vertices->length) / Float((int)6)));		HX_STACK_VAR(_vertidx,"_vertidx");
		HX_STACK_LINE(497)
		if (((_vertidx <= _letteridx))){
			HX_STACK_LINE(498)
			this->add(vert0);
			HX_STACK_LINE(498)
			this->add(vert1);
			HX_STACK_LINE(498)
			this->add(vert2);
			HX_STACK_LINE(499)
			this->add(vert3);
			HX_STACK_LINE(499)
			this->add(vert4);
			HX_STACK_LINE(499)
			this->add(vert5);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC10(TextGeometry_obj,update_char,(void))

bool TextGeometry_obj::set_dirty_sizing( bool _b){
	HX_STACK_FRAME("phoenix.geometry.TextGeometry","set_dirty_sizing",0xc3e956fa,"phoenix.geometry.TextGeometry.set_dirty_sizing","phoenix/geometry/TextGeometry.hx",507,0x3cba14a2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_b,"_b")
	HX_STACK_LINE(509)
	this->dirty_align = true;
	HX_STACK_LINE(511)
	return this->dirty_sizing = _b;
}


HX_DEFINE_DYNAMIC_FUNC1(TextGeometry_obj,set_dirty_sizing,return )

::phoenix::Rectangle TextGeometry_obj::set_bounds( ::phoenix::Rectangle _bounds){
	HX_STACK_FRAME("phoenix.geometry.TextGeometry","set_bounds",0x3002ac24,"phoenix.geometry.TextGeometry.set_bounds","phoenix/geometry/TextGeometry.hx",516,0x3cba14a2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_bounds,"_bounds")
	HX_STACK_LINE(518)
	this->bounds = _bounds;
	HX_STACK_LINE(520)
	this->set_dirty_sizing(true);
	HX_STACK_LINE(521)
	this->update_text();
	HX_STACK_LINE(523)
	return this->bounds;
}


HX_DEFINE_DYNAMIC_FUNC1(TextGeometry_obj,set_bounds,return )

bool TextGeometry_obj::set_bounds_wrap( bool _wrap){
	HX_STACK_FRAME("phoenix.geometry.TextGeometry","set_bounds_wrap",0x51b72705,"phoenix.geometry.TextGeometry.set_bounds_wrap","phoenix/geometry/TextGeometry.hx",528,0x3cba14a2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_wrap,"_wrap")
	HX_STACK_LINE(530)
	this->bounds_wrap = _wrap;
	HX_STACK_LINE(532)
	this->set_dirty_sizing(true);
	HX_STACK_LINE(533)
	this->update_text();
	HX_STACK_LINE(535)
	return this->bounds_wrap;
}


HX_DEFINE_DYNAMIC_FUNC1(TextGeometry_obj,set_bounds_wrap,return )

Float TextGeometry_obj::set_line_spacing( Float _line_spacing){
	HX_STACK_FRAME("phoenix.geometry.TextGeometry","set_line_spacing",0x07a8cbe7,"phoenix.geometry.TextGeometry.set_line_spacing","phoenix/geometry/TextGeometry.hx",540,0x3cba14a2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_line_spacing,"_line_spacing")
	HX_STACK_LINE(542)
	this->line_spacing = _line_spacing;
	HX_STACK_LINE(544)
	this->set_dirty_sizing(true);
	HX_STACK_LINE(545)
	this->update_text();
	HX_STACK_LINE(547)
	return this->line_spacing;
}


HX_DEFINE_DYNAMIC_FUNC1(TextGeometry_obj,set_line_spacing,return )

Float TextGeometry_obj::set_letter_spacing( Float _letter_spacing){
	HX_STACK_FRAME("phoenix.geometry.TextGeometry","set_letter_spacing",0x3c057c99,"phoenix.geometry.TextGeometry.set_letter_spacing","phoenix/geometry/TextGeometry.hx",552,0x3cba14a2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_letter_spacing,"_letter_spacing")
	HX_STACK_LINE(554)
	this->letter_spacing = _letter_spacing;
	HX_STACK_LINE(556)
	this->set_dirty_sizing(true);
	HX_STACK_LINE(557)
	this->update_text();
	HX_STACK_LINE(559)
	return this->letter_spacing;
}


HX_DEFINE_DYNAMIC_FUNC1(TextGeometry_obj,set_letter_spacing,return )

int TextGeometry_obj::set_align( int _align){
	HX_STACK_FRAME("phoenix.geometry.TextGeometry","set_align",0x88a4bbf6,"phoenix.geometry.TextGeometry.set_align","phoenix/geometry/TextGeometry.hx",564,0x3cba14a2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_align,"_align")
	HX_STACK_LINE(566)
	this->align = _align;
	HX_STACK_LINE(568)
	this->dirty_align = true;
	HX_STACK_LINE(569)
	this->update_text();
	HX_STACK_LINE(571)
	return this->align;
}


HX_DEFINE_DYNAMIC_FUNC1(TextGeometry_obj,set_align,return )

int TextGeometry_obj::set_align_vertical( int _align_vertical){
	HX_STACK_FRAME("phoenix.geometry.TextGeometry","set_align_vertical",0x21a6c91f,"phoenix.geometry.TextGeometry.set_align_vertical","phoenix/geometry/TextGeometry.hx",576,0x3cba14a2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_align_vertical,"_align_vertical")
	HX_STACK_LINE(578)
	this->align_vertical = _align_vertical;
	HX_STACK_LINE(580)
	this->dirty_align = true;
	HX_STACK_LINE(581)
	this->update_text();
	HX_STACK_LINE(583)
	return this->align_vertical;
}


HX_DEFINE_DYNAMIC_FUNC1(TextGeometry_obj,set_align_vertical,return )

Float TextGeometry_obj::set_point_size( Float s){
	HX_STACK_FRAME("phoenix.geometry.TextGeometry","set_point_size",0x02f08f7f,"phoenix.geometry.TextGeometry.set_point_size","phoenix/geometry/TextGeometry.hx",588,0x3cba14a2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(s,"s")
	HX_STACK_LINE(590)
	if (((s < (int)0))){
		HX_STACK_LINE(590)
		s = (int)0;
	}
	HX_STACK_LINE(591)
	this->point_size = s;
	HX_STACK_LINE(593)
	this->set_dirty_sizing(true);
	HX_STACK_LINE(594)
	this->update_text();
	HX_STACK_LINE(596)
	return this->point_size;
}


HX_DEFINE_DYNAMIC_FUNC1(TextGeometry_obj,set_point_size,return )

Float TextGeometry_obj::set_smoothness( Float s){
	HX_STACK_FRAME("phoenix.geometry.TextGeometry","set_smoothness",0x49fb60f4,"phoenix.geometry.TextGeometry.set_smoothness","phoenix/geometry/TextGeometry.hx",605,0x3cba14a2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(s,"s")
	HX_STACK_LINE(607)
	if (((s < (int)0))){
		HX_STACK_LINE(607)
		s = (int)0;
	}
	HX_STACK_LINE(609)
	::phoenix::Shader _g = this->get_shader();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(609)
	if (((  (((  (((_g != null()))) ? bool(this->sdf) : bool(false) ))) ? bool(this->unique) : bool(false) ))){
		HX_STACK_LINE(610)
		this->get_shader()->set_float(HX_CSTRING("smoothness"),s);
	}
	HX_STACK_LINE(613)
	return this->smoothness = s;
}


HX_DEFINE_DYNAMIC_FUNC1(TextGeometry_obj,set_smoothness,return )

Float TextGeometry_obj::set_thickness( Float s){
	HX_STACK_FRAME("phoenix.geometry.TextGeometry","set_thickness",0xf6334325,"phoenix.geometry.TextGeometry.set_thickness","phoenix/geometry/TextGeometry.hx",618,0x3cba14a2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(s,"s")
	HX_STACK_LINE(620)
	if (((s < (int)0))){
		HX_STACK_LINE(620)
		s = (int)0;
	}
	HX_STACK_LINE(622)
	::phoenix::Shader _g = this->get_shader();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(622)
	if (((  (((  (((_g != null()))) ? bool(this->sdf) : bool(false) ))) ? bool(this->unique) : bool(false) ))){
		HX_STACK_LINE(623)
		this->get_shader()->set_float(HX_CSTRING("thickness"),s);
	}
	HX_STACK_LINE(626)
	return this->thickness = s;
}


HX_DEFINE_DYNAMIC_FUNC1(TextGeometry_obj,set_thickness,return )

Float TextGeometry_obj::set_outline( Float s){
	HX_STACK_FRAME("phoenix.geometry.TextGeometry","set_outline",0xc059eaf3,"phoenix.geometry.TextGeometry.set_outline","phoenix/geometry/TextGeometry.hx",631,0x3cba14a2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(s,"s")
	HX_STACK_LINE(633)
	if (((s < 0.0))){
		HX_STACK_LINE(633)
		s = 0.0;
	}
	else{
		HX_STACK_LINE(633)
		if (((s > 1.0))){
			HX_STACK_LINE(633)
			s = 1.0;
		}
		else{
			HX_STACK_LINE(633)
			s = s;
		}
	}
	HX_STACK_LINE(635)
	::phoenix::Shader _g = this->get_shader();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(635)
	if (((  (((  (((_g != null()))) ? bool(this->sdf) : bool(false) ))) ? bool(this->unique) : bool(false) ))){
		HX_STACK_LINE(636)
		this->get_shader()->set_float(HX_CSTRING("outline"),s);
	}
	HX_STACK_LINE(639)
	return this->outline = s;
}


HX_DEFINE_DYNAMIC_FUNC1(TextGeometry_obj,set_outline,return )

Float TextGeometry_obj::set_glow_threshold( Float s){
	HX_STACK_FRAME("phoenix.geometry.TextGeometry","set_glow_threshold",0x88b50ce8,"phoenix.geometry.TextGeometry.set_glow_threshold","phoenix/geometry/TextGeometry.hx",644,0x3cba14a2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(s,"s")
	HX_STACK_LINE(646)
	if (((s < (int)0))){
		HX_STACK_LINE(646)
		s = (int)0;
	}
	HX_STACK_LINE(648)
	::phoenix::Shader _g = this->get_shader();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(648)
	if (((  (((  (((_g != null()))) ? bool(this->sdf) : bool(false) ))) ? bool(this->unique) : bool(false) ))){
		HX_STACK_LINE(649)
		this->get_shader()->set_float(HX_CSTRING("glow_threshold"),s);
	}
	HX_STACK_LINE(652)
	return this->glow_threshold = s;
}


HX_DEFINE_DYNAMIC_FUNC1(TextGeometry_obj,set_glow_threshold,return )

Float TextGeometry_obj::set_glow_amount( Float s){
	HX_STACK_FRAME("phoenix.geometry.TextGeometry","set_glow_amount",0xae4a507b,"phoenix.geometry.TextGeometry.set_glow_amount","phoenix/geometry/TextGeometry.hx",657,0x3cba14a2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(s,"s")
	HX_STACK_LINE(659)
	if (((s < (int)0))){
		HX_STACK_LINE(659)
		s = (int)0;
	}
	HX_STACK_LINE(661)
	::phoenix::Shader _g = this->get_shader();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(661)
	if (((  (((  (((_g != null()))) ? bool(this->sdf) : bool(false) ))) ? bool(this->unique) : bool(false) ))){
		HX_STACK_LINE(662)
		this->get_shader()->set_float(HX_CSTRING("glow_amount"),s);
	}
	HX_STACK_LINE(665)
	return this->glow_amount = s;
}


HX_DEFINE_DYNAMIC_FUNC1(TextGeometry_obj,set_glow_amount,return )

::phoenix::Color TextGeometry_obj::set_outline_color( ::phoenix::Color c){
	HX_STACK_FRAME("phoenix.geometry.TextGeometry","set_outline_color",0x66c8dbd7,"phoenix.geometry.TextGeometry.set_outline_color","phoenix/geometry/TextGeometry.hx",670,0x3cba14a2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(c,"c")
	HX_STACK_LINE(672)
	::phoenix::Shader _g = this->get_shader();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(672)
	if (((  (((  (((_g != null()))) ? bool(this->sdf) : bool(false) ))) ? bool(this->unique) : bool(false) ))){
		HX_STACK_LINE(673)
		this->get_shader()->set_color(HX_CSTRING("outline_color"),c);
	}
	HX_STACK_LINE(676)
	return this->outline_color = c;
}


HX_DEFINE_DYNAMIC_FUNC1(TextGeometry_obj,set_outline_color,return )

::phoenix::Color TextGeometry_obj::set_glow_color( ::phoenix::Color c){
	HX_STACK_FRAME("phoenix.geometry.TextGeometry","set_glow_color",0x7a671820,"phoenix.geometry.TextGeometry.set_glow_color","phoenix/geometry/TextGeometry.hx",681,0x3cba14a2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(c,"c")
	HX_STACK_LINE(683)
	::phoenix::Shader _g = this->get_shader();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(683)
	if (((  (((  (((_g != null()))) ? bool(this->sdf) : bool(false) ))) ? bool(this->unique) : bool(false) ))){
		HX_STACK_LINE(684)
		this->get_shader()->set_color(HX_CSTRING("glow_color"),c);
	}
	HX_STACK_LINE(687)
	return this->glow_color = c;
}


HX_DEFINE_DYNAMIC_FUNC1(TextGeometry_obj,set_glow_color,return )

Void TextGeometry_obj::flush_uniforms( ){
{
		HX_STACK_FRAME("phoenix.geometry.TextGeometry","flush_uniforms",0x77bca14c,"phoenix.geometry.TextGeometry.flush_uniforms","phoenix/geometry/TextGeometry.hx",695,0x3cba14a2)
		HX_STACK_THIS(this)
		HX_STACK_LINE(696)
		::phoenix::Shader _g = this->get_shader();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(696)
		if (((  (((_g != null()))) ? bool(this->sdf) : bool(false) ))){
			HX_STACK_LINE(697)
			this->get_shader()->set_float(HX_CSTRING("smoothness"),this->smoothness);
			HX_STACK_LINE(698)
			this->get_shader()->set_float(HX_CSTRING("thickness"),this->thickness);
			HX_STACK_LINE(699)
			this->get_shader()->set_float(HX_CSTRING("outline"),this->outline);
			HX_STACK_LINE(700)
			this->get_shader()->set_float(HX_CSTRING("glow_threshold"),this->glow_threshold);
			HX_STACK_LINE(701)
			this->get_shader()->set_float(HX_CSTRING("glow_amount"),this->glow_amount);
			HX_STACK_LINE(702)
			this->get_shader()->set_color(HX_CSTRING("outline_color"),this->outline_color);
			HX_STACK_LINE(703)
			this->get_shader()->set_color(HX_CSTRING("glow_color"),this->glow_color);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(TextGeometry_obj,flush_uniforms,(void))

::EReg TextGeometry_obj::tab_regex;


TextGeometry_obj::TextGeometry_obj()
{
}

void TextGeometry_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TextGeometry);
	HX_MARK_MEMBER_NAME(text,"text");
	HX_MARK_MEMBER_NAME(font,"font");
	HX_MARK_MEMBER_NAME(point_size,"point_size");
	HX_MARK_MEMBER_NAME(line_spacing,"line_spacing");
	HX_MARK_MEMBER_NAME(letter_spacing,"letter_spacing");
	HX_MARK_MEMBER_NAME(bounds,"bounds");
	HX_MARK_MEMBER_NAME(bounds_wrap,"bounds_wrap");
	HX_MARK_MEMBER_NAME(align,"align");
	HX_MARK_MEMBER_NAME(align_vertical,"align_vertical");
	HX_MARK_MEMBER_NAME(sdf,"sdf");
	HX_MARK_MEMBER_NAME(unique,"unique");
	HX_MARK_MEMBER_NAME(smoothness,"smoothness");
	HX_MARK_MEMBER_NAME(thickness,"thickness");
	HX_MARK_MEMBER_NAME(outline,"outline");
	HX_MARK_MEMBER_NAME(outline_color,"outline_color");
	HX_MARK_MEMBER_NAME(glow_threshold,"glow_threshold");
	HX_MARK_MEMBER_NAME(glow_amount,"glow_amount");
	HX_MARK_MEMBER_NAME(glow_color,"glow_color");
	HX_MARK_MEMBER_NAME(line_widths,"line_widths");
	HX_MARK_MEMBER_NAME(text_width,"text_width");
	HX_MARK_MEMBER_NAME(text_height,"text_height");
	HX_MARK_MEMBER_NAME(line_offsets,"line_offsets");
	HX_MARK_MEMBER_NAME(lines,"lines");
	HX_MARK_MEMBER_NAME(cache,"cache");
	HX_MARK_MEMBER_NAME(options,"options");
	HX_MARK_MEMBER_NAME(text_h_w,"text_h_w");
	HX_MARK_MEMBER_NAME(text_h_h,"text_h_h");
	HX_MARK_MEMBER_NAME(point_ratio,"point_ratio");
	HX_MARK_MEMBER_NAME(dirty_sizing,"dirty_sizing");
	HX_MARK_MEMBER_NAME(dirty_align,"dirty_align");
	::phoenix::geometry::Geometry_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void TextGeometry_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(text,"text");
	HX_VISIT_MEMBER_NAME(font,"font");
	HX_VISIT_MEMBER_NAME(point_size,"point_size");
	HX_VISIT_MEMBER_NAME(line_spacing,"line_spacing");
	HX_VISIT_MEMBER_NAME(letter_spacing,"letter_spacing");
	HX_VISIT_MEMBER_NAME(bounds,"bounds");
	HX_VISIT_MEMBER_NAME(bounds_wrap,"bounds_wrap");
	HX_VISIT_MEMBER_NAME(align,"align");
	HX_VISIT_MEMBER_NAME(align_vertical,"align_vertical");
	HX_VISIT_MEMBER_NAME(sdf,"sdf");
	HX_VISIT_MEMBER_NAME(unique,"unique");
	HX_VISIT_MEMBER_NAME(smoothness,"smoothness");
	HX_VISIT_MEMBER_NAME(thickness,"thickness");
	HX_VISIT_MEMBER_NAME(outline,"outline");
	HX_VISIT_MEMBER_NAME(outline_color,"outline_color");
	HX_VISIT_MEMBER_NAME(glow_threshold,"glow_threshold");
	HX_VISIT_MEMBER_NAME(glow_amount,"glow_amount");
	HX_VISIT_MEMBER_NAME(glow_color,"glow_color");
	HX_VISIT_MEMBER_NAME(line_widths,"line_widths");
	HX_VISIT_MEMBER_NAME(text_width,"text_width");
	HX_VISIT_MEMBER_NAME(text_height,"text_height");
	HX_VISIT_MEMBER_NAME(line_offsets,"line_offsets");
	HX_VISIT_MEMBER_NAME(lines,"lines");
	HX_VISIT_MEMBER_NAME(cache,"cache");
	HX_VISIT_MEMBER_NAME(options,"options");
	HX_VISIT_MEMBER_NAME(text_h_w,"text_h_w");
	HX_VISIT_MEMBER_NAME(text_h_h,"text_h_h");
	HX_VISIT_MEMBER_NAME(point_ratio,"point_ratio");
	HX_VISIT_MEMBER_NAME(dirty_sizing,"dirty_sizing");
	HX_VISIT_MEMBER_NAME(dirty_align,"dirty_align");
	::phoenix::geometry::Geometry_obj::__Visit(HX_VISIT_ARG);
}

Dynamic TextGeometry_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"sdf") ) { return sdf; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"text") ) { return text; }
		if (HX_FIELD_EQ(inName,"font") ) { return font; }
		if (HX_FIELD_EQ(inName,"tidy") ) { return tidy_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"align") ) { return align; }
		if (HX_FIELD_EQ(inName,"lines") ) { return lines; }
		if (HX_FIELD_EQ(inName,"cache") ) { return cache; }
		if (HX_FIELD_EQ(inName,"stats") ) { return stats_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"bounds") ) { return bounds; }
		if (HX_FIELD_EQ(inName,"unique") ) { return unique; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"outline") ) { return outline; }
		if (HX_FIELD_EQ(inName,"options") ) { return options; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"text_h_w") ) { return text_h_w; }
		if (HX_FIELD_EQ(inName,"text_h_h") ) { return text_h_h; }
		if (HX_FIELD_EQ(inName,"set_text") ) { return set_text_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"tab_regex") ) { return tab_regex; }
		if (HX_FIELD_EQ(inName,"thickness") ) { return thickness; }
		if (HX_FIELD_EQ(inName,"set_align") ) { return set_align_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"point_size") ) { return point_size; }
		if (HX_FIELD_EQ(inName,"smoothness") ) { return smoothness; }
		if (HX_FIELD_EQ(inName,"glow_color") ) { return glow_color; }
		if (HX_FIELD_EQ(inName,"text_width") ) { return text_width; }
		if (HX_FIELD_EQ(inName,"set_bounds") ) { return set_bounds_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"bounds_wrap") ) { return bounds_wrap; }
		if (HX_FIELD_EQ(inName,"glow_amount") ) { return glow_amount; }
		if (HX_FIELD_EQ(inName,"line_widths") ) { return line_widths; }
		if (HX_FIELD_EQ(inName,"text_height") ) { return text_height; }
		if (HX_FIELD_EQ(inName,"point_ratio") ) { return point_ratio; }
		if (HX_FIELD_EQ(inName,"dirty_align") ) { return dirty_align; }
		if (HX_FIELD_EQ(inName,"update_text") ) { return update_text_dyn(); }
		if (HX_FIELD_EQ(inName,"update_char") ) { return update_char_dyn(); }
		if (HX_FIELD_EQ(inName,"set_outline") ) { return set_outline_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"line_spacing") ) { return line_spacing; }
		if (HX_FIELD_EQ(inName,"line_offsets") ) { return line_offsets; }
		if (HX_FIELD_EQ(inName,"dirty_sizing") ) { return dirty_sizing; }
		if (HX_FIELD_EQ(inName,"update_sizes") ) { return update_sizes_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"outline_color") ) { return outline_color; }
		if (HX_FIELD_EQ(inName,"set_thickness") ) { return set_thickness_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"letter_spacing") ) { return letter_spacing; }
		if (HX_FIELD_EQ(inName,"align_vertical") ) { return align_vertical; }
		if (HX_FIELD_EQ(inName,"glow_threshold") ) { return glow_threshold; }
		if (HX_FIELD_EQ(inName,"set_point_size") ) { return set_point_size_dyn(); }
		if (HX_FIELD_EQ(inName,"set_smoothness") ) { return set_smoothness_dyn(); }
		if (HX_FIELD_EQ(inName,"set_glow_color") ) { return set_glow_color_dyn(); }
		if (HX_FIELD_EQ(inName,"flush_uniforms") ) { return flush_uniforms_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"default_options") ) { return default_options_dyn(); }
		if (HX_FIELD_EQ(inName,"set_bounds_wrap") ) { return set_bounds_wrap_dyn(); }
		if (HX_FIELD_EQ(inName,"set_glow_amount") ) { return set_glow_amount_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"set_dirty_sizing") ) { return set_dirty_sizing_dyn(); }
		if (HX_FIELD_EQ(inName,"set_line_spacing") ) { return set_line_spacing_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"set_outline_color") ) { return set_outline_color_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"set_letter_spacing") ) { return set_letter_spacing_dyn(); }
		if (HX_FIELD_EQ(inName,"set_align_vertical") ) { return set_align_vertical_dyn(); }
		if (HX_FIELD_EQ(inName,"set_glow_threshold") ) { return set_glow_threshold_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic TextGeometry_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"sdf") ) { sdf=inValue.Cast< bool >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"text") ) { if (inCallProp) return set_text(inValue);text=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"font") ) { font=inValue.Cast< ::phoenix::BitmapFont >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"align") ) { if (inCallProp) return set_align(inValue);align=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lines") ) { lines=inValue.Cast< Array< ::String > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"cache") ) { cache=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"bounds") ) { if (inCallProp) return set_bounds(inValue);bounds=inValue.Cast< ::phoenix::Rectangle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"unique") ) { unique=inValue.Cast< bool >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"outline") ) { if (inCallProp) return set_outline(inValue);outline=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"options") ) { options=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"text_h_w") ) { text_h_w=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"text_h_h") ) { text_h_h=inValue.Cast< Float >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"tab_regex") ) { tab_regex=inValue.Cast< ::EReg >(); return inValue; }
		if (HX_FIELD_EQ(inName,"thickness") ) { if (inCallProp) return set_thickness(inValue);thickness=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"point_size") ) { if (inCallProp) return set_point_size(inValue);point_size=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"smoothness") ) { if (inCallProp) return set_smoothness(inValue);smoothness=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"glow_color") ) { if (inCallProp) return set_glow_color(inValue);glow_color=inValue.Cast< ::phoenix::Color >(); return inValue; }
		if (HX_FIELD_EQ(inName,"text_width") ) { text_width=inValue.Cast< Float >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"bounds_wrap") ) { if (inCallProp) return set_bounds_wrap(inValue);bounds_wrap=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"glow_amount") ) { if (inCallProp) return set_glow_amount(inValue);glow_amount=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"line_widths") ) { line_widths=inValue.Cast< Array< Float > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"text_height") ) { text_height=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"point_ratio") ) { point_ratio=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"dirty_align") ) { dirty_align=inValue.Cast< bool >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"line_spacing") ) { if (inCallProp) return set_line_spacing(inValue);line_spacing=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"line_offsets") ) { line_offsets=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"dirty_sizing") ) { if (inCallProp) return set_dirty_sizing(inValue);dirty_sizing=inValue.Cast< bool >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"outline_color") ) { if (inCallProp) return set_outline_color(inValue);outline_color=inValue.Cast< ::phoenix::Color >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"letter_spacing") ) { if (inCallProp) return set_letter_spacing(inValue);letter_spacing=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"align_vertical") ) { if (inCallProp) return set_align_vertical(inValue);align_vertical=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"glow_threshold") ) { if (inCallProp) return set_glow_threshold(inValue);glow_threshold=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TextGeometry_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("text"));
	outFields->push(HX_CSTRING("font"));
	outFields->push(HX_CSTRING("point_size"));
	outFields->push(HX_CSTRING("line_spacing"));
	outFields->push(HX_CSTRING("letter_spacing"));
	outFields->push(HX_CSTRING("bounds"));
	outFields->push(HX_CSTRING("bounds_wrap"));
	outFields->push(HX_CSTRING("align"));
	outFields->push(HX_CSTRING("align_vertical"));
	outFields->push(HX_CSTRING("sdf"));
	outFields->push(HX_CSTRING("unique"));
	outFields->push(HX_CSTRING("smoothness"));
	outFields->push(HX_CSTRING("thickness"));
	outFields->push(HX_CSTRING("outline"));
	outFields->push(HX_CSTRING("outline_color"));
	outFields->push(HX_CSTRING("glow_threshold"));
	outFields->push(HX_CSTRING("glow_amount"));
	outFields->push(HX_CSTRING("glow_color"));
	outFields->push(HX_CSTRING("line_widths"));
	outFields->push(HX_CSTRING("text_width"));
	outFields->push(HX_CSTRING("text_height"));
	outFields->push(HX_CSTRING("line_offsets"));
	outFields->push(HX_CSTRING("lines"));
	outFields->push(HX_CSTRING("cache"));
	outFields->push(HX_CSTRING("options"));
	outFields->push(HX_CSTRING("text_h_w"));
	outFields->push(HX_CSTRING("text_h_h"));
	outFields->push(HX_CSTRING("point_ratio"));
	outFields->push(HX_CSTRING("dirty_sizing"));
	outFields->push(HX_CSTRING("dirty_align"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("tab_regex"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(TextGeometry_obj,text),HX_CSTRING("text")},
	{hx::fsObject /*::phoenix::BitmapFont*/ ,(int)offsetof(TextGeometry_obj,font),HX_CSTRING("font")},
	{hx::fsFloat,(int)offsetof(TextGeometry_obj,point_size),HX_CSTRING("point_size")},
	{hx::fsFloat,(int)offsetof(TextGeometry_obj,line_spacing),HX_CSTRING("line_spacing")},
	{hx::fsFloat,(int)offsetof(TextGeometry_obj,letter_spacing),HX_CSTRING("letter_spacing")},
	{hx::fsObject /*::phoenix::Rectangle*/ ,(int)offsetof(TextGeometry_obj,bounds),HX_CSTRING("bounds")},
	{hx::fsBool,(int)offsetof(TextGeometry_obj,bounds_wrap),HX_CSTRING("bounds_wrap")},
	{hx::fsInt,(int)offsetof(TextGeometry_obj,align),HX_CSTRING("align")},
	{hx::fsInt,(int)offsetof(TextGeometry_obj,align_vertical),HX_CSTRING("align_vertical")},
	{hx::fsBool,(int)offsetof(TextGeometry_obj,sdf),HX_CSTRING("sdf")},
	{hx::fsBool,(int)offsetof(TextGeometry_obj,unique),HX_CSTRING("unique")},
	{hx::fsFloat,(int)offsetof(TextGeometry_obj,smoothness),HX_CSTRING("smoothness")},
	{hx::fsFloat,(int)offsetof(TextGeometry_obj,thickness),HX_CSTRING("thickness")},
	{hx::fsFloat,(int)offsetof(TextGeometry_obj,outline),HX_CSTRING("outline")},
	{hx::fsObject /*::phoenix::Color*/ ,(int)offsetof(TextGeometry_obj,outline_color),HX_CSTRING("outline_color")},
	{hx::fsFloat,(int)offsetof(TextGeometry_obj,glow_threshold),HX_CSTRING("glow_threshold")},
	{hx::fsFloat,(int)offsetof(TextGeometry_obj,glow_amount),HX_CSTRING("glow_amount")},
	{hx::fsObject /*::phoenix::Color*/ ,(int)offsetof(TextGeometry_obj,glow_color),HX_CSTRING("glow_color")},
	{hx::fsObject /*Array< Float >*/ ,(int)offsetof(TextGeometry_obj,line_widths),HX_CSTRING("line_widths")},
	{hx::fsFloat,(int)offsetof(TextGeometry_obj,text_width),HX_CSTRING("text_width")},
	{hx::fsFloat,(int)offsetof(TextGeometry_obj,text_height),HX_CSTRING("text_height")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(TextGeometry_obj,line_offsets),HX_CSTRING("line_offsets")},
	{hx::fsObject /*Array< ::String >*/ ,(int)offsetof(TextGeometry_obj,lines),HX_CSTRING("lines")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(TextGeometry_obj,cache),HX_CSTRING("cache")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(TextGeometry_obj,options),HX_CSTRING("options")},
	{hx::fsFloat,(int)offsetof(TextGeometry_obj,text_h_w),HX_CSTRING("text_h_w")},
	{hx::fsFloat,(int)offsetof(TextGeometry_obj,text_h_h),HX_CSTRING("text_h_h")},
	{hx::fsFloat,(int)offsetof(TextGeometry_obj,point_ratio),HX_CSTRING("point_ratio")},
	{hx::fsBool,(int)offsetof(TextGeometry_obj,dirty_sizing),HX_CSTRING("dirty_sizing")},
	{hx::fsBool,(int)offsetof(TextGeometry_obj,dirty_align),HX_CSTRING("dirty_align")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("text"),
	HX_CSTRING("font"),
	HX_CSTRING("point_size"),
	HX_CSTRING("line_spacing"),
	HX_CSTRING("letter_spacing"),
	HX_CSTRING("bounds"),
	HX_CSTRING("bounds_wrap"),
	HX_CSTRING("align"),
	HX_CSTRING("align_vertical"),
	HX_CSTRING("sdf"),
	HX_CSTRING("unique"),
	HX_CSTRING("smoothness"),
	HX_CSTRING("thickness"),
	HX_CSTRING("outline"),
	HX_CSTRING("outline_color"),
	HX_CSTRING("glow_threshold"),
	HX_CSTRING("glow_amount"),
	HX_CSTRING("glow_color"),
	HX_CSTRING("line_widths"),
	HX_CSTRING("text_width"),
	HX_CSTRING("text_height"),
	HX_CSTRING("line_offsets"),
	HX_CSTRING("lines"),
	HX_CSTRING("cache"),
	HX_CSTRING("options"),
	HX_CSTRING("text_h_w"),
	HX_CSTRING("text_h_h"),
	HX_CSTRING("point_ratio"),
	HX_CSTRING("dirty_sizing"),
	HX_CSTRING("dirty_align"),
	HX_CSTRING("tidy"),
	HX_CSTRING("default_options"),
	HX_CSTRING("set_text"),
	HX_CSTRING("stats"),
	HX_CSTRING("update_sizes"),
	HX_CSTRING("update_text"),
	HX_CSTRING("update_char"),
	HX_CSTRING("set_dirty_sizing"),
	HX_CSTRING("set_bounds"),
	HX_CSTRING("set_bounds_wrap"),
	HX_CSTRING("set_line_spacing"),
	HX_CSTRING("set_letter_spacing"),
	HX_CSTRING("set_align"),
	HX_CSTRING("set_align_vertical"),
	HX_CSTRING("set_point_size"),
	HX_CSTRING("set_smoothness"),
	HX_CSTRING("set_thickness"),
	HX_CSTRING("set_outline"),
	HX_CSTRING("set_glow_threshold"),
	HX_CSTRING("set_glow_amount"),
	HX_CSTRING("set_outline_color"),
	HX_CSTRING("set_glow_color"),
	HX_CSTRING("flush_uniforms"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TextGeometry_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(TextGeometry_obj::tab_regex,"tab_regex");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TextGeometry_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(TextGeometry_obj::tab_regex,"tab_regex");
};

#endif

Class TextGeometry_obj::__mClass;

void TextGeometry_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("phoenix.geometry.TextGeometry"), hx::TCanCast< TextGeometry_obj> ,sStaticFields,sMemberFields,
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

void TextGeometry_obj::__boot()
{
	tab_regex= ::EReg_obj::__new(HX_CSTRING("\t"),HX_CSTRING("gim"));
}

} // end namespace phoenix
} // end namespace geometry
