#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_Lambda
#include <Lambda.h>
#endif
#ifndef INCLUDED_Luxe
#include <Luxe.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_luxe_resource_Resource
#include <luxe/resource/Resource.h>
#endif
#ifndef INCLUDED_luxe_structural_BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry
#include <luxe/structural/BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry.h>
#endif
#ifndef INCLUDED_luxe_utils_Utils
#include <luxe/utils/Utils.h>
#endif
#ifndef INCLUDED_phoenix_BatchGroup
#include <phoenix/BatchGroup.h>
#endif
#ifndef INCLUDED_phoenix_BatchState
#include <phoenix/BatchState.h>
#endif
#ifndef INCLUDED_phoenix_Batcher
#include <phoenix/Batcher.h>
#endif
#ifndef INCLUDED_phoenix_Camera
#include <phoenix/Camera.h>
#endif
#ifndef INCLUDED_phoenix_Rectangle
#include <phoenix/Rectangle.h>
#endif
#ifndef INCLUDED_phoenix_RenderState
#include <phoenix/RenderState.h>
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
#ifndef INCLUDED_phoenix_geometry_Geometry
#include <phoenix/geometry/Geometry.h>
#endif
#ifndef INCLUDED_phoenix_geometry_GeometryKey
#include <phoenix/geometry/GeometryKey.h>
#endif
#ifndef INCLUDED_phoenix_geometry_GeometryState
#include <phoenix/geometry/GeometryState.h>
#endif
#ifndef INCLUDED_phoenix_geometry_Vertex
#include <phoenix/geometry/Vertex.h>
#endif
#ifndef INCLUDED_phoenix_utils_Rendering
#include <phoenix/utils/Rendering.h>
#endif
#ifndef INCLUDED_snow_platform_native_render_opengl_GL
#include <snow/platform/native/render/opengl/GL.h>
#endif
#ifndef INCLUDED_snow_platform_native_render_opengl_GLBuffer
#include <snow/platform/native/render/opengl/GLBuffer.h>
#endif
#ifndef INCLUDED_snow_platform_native_render_opengl_GLObject
#include <snow/platform/native/render/opengl/GLObject.h>
#endif
#ifndef INCLUDED_snow_platform_native_render_opengl_GLProgram
#include <snow/platform/native/render/opengl/GLProgram.h>
#endif
#ifndef INCLUDED_snow_platform_native_render_opengl_GLTexture
#include <snow/platform/native/render/opengl/GLTexture.h>
#endif
#ifndef INCLUDED_snow_platform_native_utils_ArrayBufferView
#include <snow/platform/native/utils/ArrayBufferView.h>
#endif
#ifndef INCLUDED_snow_platform_native_utils_ByteArray
#include <snow/platform/native/utils/ByteArray.h>
#endif
#ifndef INCLUDED_snow_platform_native_utils_Float32Array
#include <snow/platform/native/utils/Float32Array.h>
#endif
#ifndef INCLUDED_snow_utils_IDataInput
#include <snow/utils/IDataInput.h>
#endif
#ifndef INCLUDED_snow_utils_IMemoryRange
#include <snow/utils/IMemoryRange.h>
#endif
namespace phoenix{

Void Batcher_obj::__construct(::phoenix::Renderer _r,::String __o__name)
{
HX_STACK_FRAME("phoenix.Batcher","new",0x3e82c79a,"phoenix.Batcher.new","phoenix/Batcher.hx",64,0xa9541457)
HX_STACK_THIS(this)
HX_STACK_ARG(_r,"_r")
HX_STACK_ARG(__o__name,"_name")
::String _name = __o__name.Default(HX_CSTRING(""));
{
	HX_STACK_LINE(141)
	this->sequence = (int)-1;
	HX_STACK_LINE(136)
	this->name = HX_CSTRING("");
	HX_STACK_LINE(135)
	this->log = false;
	HX_STACK_LINE(133)
	this->visible_count = (int)0;
	HX_STACK_LINE(132)
	this->static_batched_count = (int)0;
	HX_STACK_LINE(131)
	this->dynamic_batched_count = (int)0;
	HX_STACK_LINE(130)
	this->draw_calls = (int)0;
	HX_STACK_LINE(115)
	this->color_attribute = (int)2;
	HX_STACK_LINE(114)
	this->tcoord_attribute = (int)1;
	HX_STACK_LINE(113)
	this->vert_attribute = (int)0;
	HX_STACK_LINE(103)
	this->vert_count = (int)0;
	HX_STACK_LINE(102)
	this->max_floats = (int)0;
	HX_STACK_LINE(101)
	this->max_verts = (int)0;
	HX_STACK_LINE(100)
	this->buffer_index = (int)0;
	HX_STACK_LINE(97)
	this->buffer_count = (int)6;
	HX_STACK_LINE(94)
	this->static_normal_floats = (int)0;
	HX_STACK_LINE(93)
	this->static_color_floats = (int)0;
	HX_STACK_LINE(92)
	this->static_tcoord_floats = (int)0;
	HX_STACK_LINE(91)
	this->static_vert_floats = (int)0;
	HX_STACK_LINE(88)
	this->normal_floats = (int)0;
	HX_STACK_LINE(87)
	this->color_floats = (int)0;
	HX_STACK_LINE(86)
	this->tcoord_floats = (int)0;
	HX_STACK_LINE(85)
	this->vert_floats = (int)0;
	HX_STACK_LINE(72)
	this->tree_changed = false;
	HX_STACK_LINE(68)
	this->enabled = true;
	HX_STACK_LINE(67)
	this->layer = (int)0;
	HX_STACK_LINE(145)
	::String _g = ::Luxe_obj::utils->uniqueid(null());		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(145)
	this->id = _g;
	HX_STACK_LINE(146)
	this->renderer = _r;
	HX_STACK_LINE(147)
	int _g1 = ++(::phoenix::Batcher_obj::_sequence_key);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(147)
	this->sequence = _g1;
	HX_STACK_LINE(149)
	::luxe::structural::BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry _g2 = ::luxe::structural::BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj::__new(this->geometry_compare_dyn());		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(149)
	this->geometry = _g2;
	HX_STACK_LINE(150)
	::haxe::ds::IntMap _g3 = ::haxe::ds::IntMap_obj::__new();		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(150)
	this->groups = _g3;
	HX_STACK_LINE(152)
	Float _g4 = ::Math_obj::pow((int)2,(int)16);		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(152)
	int _g5 = ::Std_obj::_int(_g4);		HX_STACK_VAR(_g5,"_g5");
	HX_STACK_LINE(152)
	this->max_verts = _g5;
	HX_STACK_LINE(153)
	this->max_floats = (int(this->max_verts) << int((int)2));
	HX_STACK_LINE(156)
	::snow::platform::native::utils::Float32Array _g6 = ::snow::platform::native::utils::Float32Array_obj::__new(this->max_floats,null(),null());		HX_STACK_VAR(_g6,"_g6");
	HX_STACK_LINE(156)
	this->vertlist = _g6;
	HX_STACK_LINE(157)
	::snow::platform::native::utils::Float32Array _g7 = ::snow::platform::native::utils::Float32Array_obj::__new(this->max_floats,null(),null());		HX_STACK_VAR(_g7,"_g7");
	HX_STACK_LINE(157)
	this->tcoordlist = _g7;
	HX_STACK_LINE(158)
	::snow::platform::native::utils::Float32Array _g8 = ::snow::platform::native::utils::Float32Array_obj::__new(this->max_floats,null(),null());		HX_STACK_VAR(_g8,"_g8");
	HX_STACK_LINE(158)
	this->colorlist = _g8;
	HX_STACK_LINE(161)
	::snow::platform::native::utils::Float32Array _g9 = ::snow::platform::native::utils::Float32Array_obj::__new(this->max_floats,null(),null());		HX_STACK_VAR(_g9,"_g9");
	HX_STACK_LINE(161)
	this->static_vertlist = _g9;
	HX_STACK_LINE(162)
	::snow::platform::native::utils::Float32Array _g10 = ::snow::platform::native::utils::Float32Array_obj::__new(this->max_floats,null(),null());		HX_STACK_VAR(_g10,"_g10");
	HX_STACK_LINE(162)
	this->static_tcoordlist = _g10;
	HX_STACK_LINE(163)
	::snow::platform::native::utils::Float32Array _g11 = ::snow::platform::native::utils::Float32Array_obj::__new(this->max_floats,null(),null());		HX_STACK_VAR(_g11,"_g11");
	HX_STACK_LINE(163)
	this->static_colorlist = _g11;
	HX_STACK_LINE(167)
	this->view = this->renderer->camera;
	HX_STACK_LINE(170)
	this->vertexBuffers = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(171)
	this->tcoordBuffers = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(172)
	this->vcolorBuffers = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(175)
	{
		HX_STACK_LINE(175)
		int _g12 = (int)0;		HX_STACK_VAR(_g12,"_g12");
		HX_STACK_LINE(175)
		int _g13 = this->buffer_count;		HX_STACK_VAR(_g13,"_g13");
		HX_STACK_LINE(175)
		while((true)){
			HX_STACK_LINE(175)
			if ((!(((_g12 < _g13))))){
				HX_STACK_LINE(175)
				break;
			}
			HX_STACK_LINE(175)
			int i = (_g12)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(177)
			::snow::platform::native::render::opengl::GLBuffer _vb = ::snow::platform::native::render::opengl::GL_obj::createBuffer();		HX_STACK_VAR(_vb,"_vb");
			HX_STACK_LINE(178)
			::snow::platform::native::render::opengl::GLBuffer _tb = ::snow::platform::native::render::opengl::GL_obj::createBuffer();		HX_STACK_VAR(_tb,"_tb");
			HX_STACK_LINE(179)
			::snow::platform::native::render::opengl::GLBuffer _cb = ::snow::platform::native::render::opengl::GL_obj::createBuffer();		HX_STACK_VAR(_cb,"_cb");
			HX_STACK_LINE(180)
			::snow::platform::native::render::opengl::GLBuffer _nb = ::snow::platform::native::render::opengl::GL_obj::createBuffer();		HX_STACK_VAR(_nb,"_nb");
			HX_STACK_LINE(183)
			::snow::platform::native::render::opengl::GL_obj::bindBuffer((int)34962,_vb);
			HX_STACK_LINE(184)
			::snow::platform::native::render::opengl::GL_obj::bufferData((int)34962,this->vertlist,(int)35044);
			HX_STACK_LINE(186)
			::snow::platform::native::render::opengl::GL_obj::bindBuffer((int)34962,_tb);
			HX_STACK_LINE(187)
			::snow::platform::native::render::opengl::GL_obj::bufferData((int)34962,this->tcoordlist,(int)35044);
			HX_STACK_LINE(189)
			::snow::platform::native::render::opengl::GL_obj::bindBuffer((int)34962,_cb);
			HX_STACK_LINE(190)
			::snow::platform::native::render::opengl::GL_obj::bufferData((int)34962,this->colorlist,(int)35044);
			HX_STACK_LINE(195)
			this->vertexBuffers->push(_vb);
			HX_STACK_LINE(196)
			this->tcoordBuffers->push(_tb);
			HX_STACK_LINE(197)
			this->vcolorBuffers->push(_cb);
		}
	}
	HX_STACK_LINE(203)
	::snow::platform::native::render::opengl::GL_obj::enableVertexAttribArray(this->vert_attribute);
	HX_STACK_LINE(204)
	::snow::platform::native::render::opengl::GL_obj::enableVertexAttribArray(this->tcoord_attribute);
	HX_STACK_LINE(205)
	::snow::platform::native::render::opengl::GL_obj::enableVertexAttribArray(this->color_attribute);
	HX_STACK_LINE(209)
	if (((_name.length == (int)0))){
		HX_STACK_LINE(210)
		::String _g12 = ::Luxe_obj::utils->uniqueid(null());		HX_STACK_VAR(_g12,"_g12");
		HX_STACK_LINE(210)
		this->name = _g12;
	}
	else{
		HX_STACK_LINE(212)
		this->name = _name;
	}
}
;
	return null();
}

//Batcher_obj::~Batcher_obj() { }

Dynamic Batcher_obj::__CreateEmpty() { return  new Batcher_obj; }
hx::ObjectPtr< Batcher_obj > Batcher_obj::__new(::phoenix::Renderer _r,::String __o__name)
{  hx::ObjectPtr< Batcher_obj > result = new Batcher_obj();
	result->__construct(_r,__o__name);
	return result;}

Dynamic Batcher_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Batcher_obj > result = new Batcher_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

int Batcher_obj::set_layer( int _layer){
	HX_STACK_FRAME("phoenix.Batcher","set_layer",0x4cd9e8ee,"phoenix.Batcher.set_layer","phoenix/Batcher.hx",217,0xa9541457)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_layer,"_layer")
	HX_STACK_LINE(220)
	this->layer = _layer;
	HX_STACK_LINE(222)
	this->renderer->batchers->sort(this->renderer->sort_batchers_dyn());
	HX_STACK_LINE(225)
	return this->layer;
}


HX_DEFINE_DYNAMIC_FUNC1(Batcher_obj,set_layer,return )

::String Batcher_obj::toString( ){
	HX_STACK_FRAME("phoenix.Batcher","toString",0x2a536732,"phoenix.Batcher.toString","phoenix/Batcher.hx",230,0xa9541457)
	HX_STACK_THIS(this)
	HX_STACK_LINE(230)
	return ((HX_CSTRING("Batcher(") + this->name) + HX_CSTRING(")"));
}


HX_DEFINE_DYNAMIC_FUNC0(Batcher_obj,toString,return )

int Batcher_obj::compare( ::phoenix::Batcher other){
	HX_STACK_FRAME("phoenix.Batcher","compare",0xcf1d34df,"phoenix.Batcher.compare","phoenix/Batcher.hx",234,0xa9541457)
	HX_STACK_THIS(this)
	HX_STACK_ARG(other,"other")
	HX_STACK_LINE(236)
	if (((this->layer == other->layer))){
		HX_STACK_LINE(236)
		return (int)0;
	}
	HX_STACK_LINE(237)
	if (((this->layer < other->layer))){
		HX_STACK_LINE(237)
		return (int)-1;
	}
	HX_STACK_LINE(239)
	return (int)1;
}


HX_DEFINE_DYNAMIC_FUNC1(Batcher_obj,compare,return )

Void Batcher_obj::add_group( int _group,Dynamic _pre_render,Dynamic _post_render){
{
		HX_STACK_FRAME("phoenix.Batcher","add_group",0xcf8ada1b,"phoenix.Batcher.add_group","phoenix/Batcher.hx",243,0xa9541457)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_group,"_group")
		HX_STACK_ARG(_pre_render,"_pre_render")
		HX_STACK_ARG(_post_render,"_post_render")
		HX_STACK_LINE(245)
		if ((!(this->groups->exists(_group)))){
			HX_STACK_LINE(246)
			Array< ::Dynamic > value = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(246)
			this->groups->set(_group,value);
		}
		HX_STACK_LINE(249)
		::phoenix::BatchGroup _g = ::phoenix::BatchGroup_obj::__new(_pre_render,_post_render);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(249)
		this->groups->get(_group)->__Field(HX_CSTRING("push"),true)(_g);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Batcher_obj,add_group,(void))

::String Batcher_obj::compare_rule_to_string( int r){
	HX_STACK_FRAME("phoenix.Batcher","compare_rule_to_string",0xb26938b2,"phoenix.Batcher.compare_rule_to_string","phoenix/Batcher.hx",253,0xa9541457)
	HX_STACK_THIS(this)
	HX_STACK_ARG(r,"r")
	HX_STACK_LINE(254)
	switch( (int)(r)){
		case (int)0: {
			HX_STACK_LINE(256)
			return HX_CSTRING("same");
		}
		;break;
		case (int)1: {
			HX_STACK_LINE(259)
			return HX_CSTRING("depth <");
		}
		;break;
		case (int)2: {
			HX_STACK_LINE(262)
			return HX_CSTRING("depth >");
		}
		;break;
		case (int)3: {
			HX_STACK_LINE(266)
			return HX_CSTRING("shader <");
		}
		;break;
		case (int)4: {
			HX_STACK_LINE(269)
			return HX_CSTRING("shader >");
		}
		;break;
		case (int)5: {
			HX_STACK_LINE(272)
			return HX_CSTRING("shader s._ >");
		}
		;break;
		case (int)6: {
			HX_STACK_LINE(275)
			return HX_CSTRING("shader _.s <");
		}
		;break;
		case (int)7: {
			HX_STACK_LINE(279)
			return HX_CSTRING("texture <");
		}
		;break;
		case (int)8: {
			HX_STACK_LINE(282)
			return HX_CSTRING("texture >");
		}
		;break;
		case (int)9: {
			HX_STACK_LINE(285)
			return HX_CSTRING("texture t._ >");
		}
		;break;
		case (int)10: {
			HX_STACK_LINE(288)
			return HX_CSTRING("texture _.t <");
		}
		;break;
		case (int)11: {
			HX_STACK_LINE(292)
			return HX_CSTRING("primitive <");
		}
		;break;
		case (int)12: {
			HX_STACK_LINE(295)
			return HX_CSTRING("primitive >");
		}
		;break;
		case (int)13: {
			HX_STACK_LINE(298)
			return HX_CSTRING("unclipped");
		}
		;break;
		case (int)14: {
			HX_STACK_LINE(301)
			return HX_CSTRING("clipped");
		}
		;break;
		case (int)15: {
			HX_STACK_LINE(304)
			return HX_CSTRING("timestamp <");
		}
		;break;
		case (int)16: {
			HX_STACK_LINE(307)
			return HX_CSTRING("timestamp >");
		}
		;break;
		case (int)17: {
			HX_STACK_LINE(310)
			return HX_CSTRING("timestamp ==");
		}
		;break;
		case (int)18: {
			HX_STACK_LINE(313)
			return HX_CSTRING("sequence <");
		}
		;break;
		case (int)19: {
			HX_STACK_LINE(316)
			return HX_CSTRING("sequence >");
		}
		;break;
		case (int)20: {
			HX_STACK_LINE(319)
			return HX_CSTRING("fallback");
		}
		;break;
	}
	HX_STACK_LINE(323)
	return HX_CSTRING("unknown");
}


HX_DEFINE_DYNAMIC_FUNC1(Batcher_obj,compare_rule_to_string,return )

int Batcher_obj::compare_rule( ::phoenix::geometry::GeometryKey a,::phoenix::geometry::GeometryKey b){
	HX_STACK_FRAME("phoenix.Batcher","compare_rule",0xfee0579c,"phoenix.Batcher.compare_rule","phoenix/Batcher.hx",327,0xa9541457)
	HX_STACK_THIS(this)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(329)
	if (((a->uuid == b->uuid))){
		HX_STACK_LINE(330)
		return (int)0;
	}
	HX_STACK_LINE(333)
	if (((a->depth < b->depth))){
		HX_STACK_LINE(334)
		return (int)1;
	}
	HX_STACK_LINE(335)
	if (((a->depth > b->depth))){
		HX_STACK_LINE(336)
		return (int)2;
	}
	HX_STACK_LINE(341)
	if (((bool((a->shader != null())) && bool((b->shader != null()))))){
		HX_STACK_LINE(344)
		if (((a->shader->id < b->shader->id))){
			HX_STACK_LINE(345)
			return (int)3;
		}
		HX_STACK_LINE(346)
		if (((a->shader->id > b->shader->id))){
			HX_STACK_LINE(347)
			return (int)4;
		}
	}
	else{
		HX_STACK_LINE(350)
		if (((bool((a->shader != null())) && bool((b->shader == null()))))){
			HX_STACK_LINE(351)
			return (int)5;
		}
		else{
			HX_STACK_LINE(353)
			if (((bool((a->shader == null())) && bool((b->shader != null()))))){
				HX_STACK_LINE(354)
				return (int)6;
			}
		}
	}
	HX_STACK_LINE(358)
	if (((bool((a->texture != null())) && bool((b->texture != null()))))){
		HX_STACK_LINE(361)
		if (((a->texture->id < b->texture->id))){
			HX_STACK_LINE(362)
			return (int)7;
		}
		HX_STACK_LINE(363)
		if (((a->texture->id > b->texture->id))){
			HX_STACK_LINE(364)
			return (int)8;
		}
	}
	else{
		HX_STACK_LINE(367)
		if (((bool((a->texture != null())) && bool((b->texture == null()))))){
			HX_STACK_LINE(368)
			return (int)9;
		}
		else{
			HX_STACK_LINE(370)
			if (((bool((a->texture == null())) && bool((b->texture != null()))))){
				HX_STACK_LINE(371)
				return (int)10;
			}
		}
	}
	HX_STACK_LINE(377)
	int a_primitive_index = a->primitive_type;		HX_STACK_VAR(a_primitive_index,"a_primitive_index");
	HX_STACK_LINE(378)
	int b_primitive_index = b->primitive_type;		HX_STACK_VAR(b_primitive_index,"b_primitive_index");
	HX_STACK_LINE(380)
	if (((a_primitive_index < b_primitive_index))){
		HX_STACK_LINE(381)
		return (int)11;
	}
	HX_STACK_LINE(382)
	if (((a_primitive_index > b_primitive_index))){
		HX_STACK_LINE(383)
		return (int)12;
	}
	HX_STACK_LINE(386)
	if (((a->clip != b->clip))){
		HX_STACK_LINE(388)
		if (((bool((a->clip == false)) && bool((b->clip == true))))){
			HX_STACK_LINE(389)
			return (int)13;
		}
		else{
			HX_STACK_LINE(392)
			if (((bool((a->clip == true)) && bool((b->clip == false))))){
				HX_STACK_LINE(393)
				return (int)14;
			}
		}
	}
	HX_STACK_LINE(401)
	if (((a->timestamp < b->timestamp))){
		HX_STACK_LINE(402)
		return (int)15;
	}
	HX_STACK_LINE(403)
	if (((a->timestamp > b->timestamp))){
		HX_STACK_LINE(404)
		return (int)16;
	}
	HX_STACK_LINE(405)
	if (((a->timestamp == b->timestamp))){
		HX_STACK_LINE(406)
		return (int)17;
	}
	HX_STACK_LINE(408)
	if (((a->sequence < b->sequence))){
		HX_STACK_LINE(409)
		return (int)18;
	}
	HX_STACK_LINE(410)
	if (((a->sequence > b->sequence))){
		HX_STACK_LINE(411)
		return (int)19;
	}
	HX_STACK_LINE(414)
	return (int)20;
}


HX_DEFINE_DYNAMIC_FUNC2(Batcher_obj,compare_rule,return )

int Batcher_obj::geometry_compare( ::phoenix::geometry::GeometryKey a,::phoenix::geometry::GeometryKey b){
	HX_STACK_FRAME("phoenix.Batcher","geometry_compare",0xc33f035e,"phoenix.Batcher.geometry_compare","phoenix/Batcher.hx",417,0xa9541457)
	HX_STACK_THIS(this)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(429)
	if (((a->uuid == b->uuid))){
		HX_STACK_LINE(430)
		return (int)0;
	}
	HX_STACK_LINE(433)
	if (((a->depth < b->depth))){
		HX_STACK_LINE(434)
		return (int)-1;
	}
	HX_STACK_LINE(435)
	if (((a->depth > b->depth))){
		HX_STACK_LINE(436)
		return (int)1;
	}
	HX_STACK_LINE(440)
	if (((bool((a->shader != null())) && bool((b->shader != null()))))){
		HX_STACK_LINE(443)
		if (((a->shader->id < b->shader->id))){
			HX_STACK_LINE(444)
			return (int)-1;
		}
		HX_STACK_LINE(445)
		if (((a->shader->id > b->shader->id))){
			HX_STACK_LINE(446)
			return (int)1;
		}
	}
	else{
		HX_STACK_LINE(449)
		if (((bool((a->shader != null())) && bool((b->shader == null()))))){
			HX_STACK_LINE(450)
			return (int)1;
		}
		else{
			HX_STACK_LINE(452)
			if (((bool((a->shader == null())) && bool((b->shader != null()))))){
				HX_STACK_LINE(453)
				return (int)-1;
			}
		}
	}
	HX_STACK_LINE(457)
	if (((bool((a->texture != null())) && bool((b->texture != null()))))){
		HX_STACK_LINE(460)
		if (((a->texture->id < b->texture->id))){
			HX_STACK_LINE(461)
			return (int)-1;
		}
		HX_STACK_LINE(462)
		if (((a->texture->id > b->texture->id))){
			HX_STACK_LINE(463)
			return (int)1;
		}
	}
	else{
		HX_STACK_LINE(466)
		if (((bool((a->texture != null())) && bool((b->texture == null()))))){
			HX_STACK_LINE(467)
			return (int)1;
		}
		else{
			HX_STACK_LINE(469)
			if (((bool((a->texture == null())) && bool((b->texture != null()))))){
				HX_STACK_LINE(470)
				return (int)-1;
			}
		}
	}
	HX_STACK_LINE(475)
	int a_primitive_index = a->primitive_type;		HX_STACK_VAR(a_primitive_index,"a_primitive_index");
	HX_STACK_LINE(476)
	int b_primitive_index = b->primitive_type;		HX_STACK_VAR(b_primitive_index,"b_primitive_index");
	HX_STACK_LINE(478)
	if (((a_primitive_index < b_primitive_index))){
		HX_STACK_LINE(479)
		return (int)-1;
	}
	HX_STACK_LINE(480)
	if (((a_primitive_index > b_primitive_index))){
		HX_STACK_LINE(481)
		return (int)1;
	}
	HX_STACK_LINE(484)
	if (((a->clip != b->clip))){
		HX_STACK_LINE(486)
		if (((bool((a->clip == false)) && bool((b->clip == true))))){
			HX_STACK_LINE(487)
			return (int)1;
		}
		else{
			HX_STACK_LINE(490)
			if (((bool((a->clip == true)) && bool((b->clip == false))))){
				HX_STACK_LINE(491)
				return (int)-1;
			}
		}
	}
	HX_STACK_LINE(499)
	if (((a->timestamp < b->timestamp))){
		HX_STACK_LINE(500)
		return (int)-1;
	}
	HX_STACK_LINE(501)
	if (((a->timestamp >= b->timestamp))){
		HX_STACK_LINE(502)
		return (int)1;
	}
	HX_STACK_LINE(503)
	if (((a->sequence < b->sequence))){
		HX_STACK_LINE(504)
		return (int)-1;
	}
	HX_STACK_LINE(505)
	if (((a->sequence > b->sequence))){
		HX_STACK_LINE(506)
		return (int)1;
	}
	HX_STACK_LINE(509)
	return (int)1;
}


HX_DEFINE_DYNAMIC_FUNC2(Batcher_obj,geometry_compare,return )

Void Batcher_obj::list_geometry( ){
{
		HX_STACK_FRAME("phoenix.Batcher","list_geometry",0x542e65ad,"phoenix.Batcher.list_geometry","phoenix/Batcher.hx",514,0xa9541457)
		HX_STACK_THIS(this)
		HX_STACK_LINE(514)
		for(::cpp::FastIterator_obj< ::phoenix::geometry::Geometry > *__it = ::cpp::CreateFastIterator< ::phoenix::geometry::Geometry >(this->geometry->iterator());  __it->hasNext(); ){
			::phoenix::geometry::Geometry geom = __it->next();
			Dynamic();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Batcher_obj,list_geometry,(void))

Void Batcher_obj::add( ::phoenix::geometry::Geometry _geom,hx::Null< bool >  __o__force_add){
bool _force_add = __o__force_add.Default(false);
	HX_STACK_FRAME("phoenix.Batcher","add",0x3e78e95b,"phoenix.Batcher.add","phoenix/Batcher.hx",520,0xa9541457)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_geom,"_geom")
	HX_STACK_ARG(_force_add,"_force_add")
{
		HX_STACK_LINE(526)
		::phoenix::geometry::Geometry _g = this->geometry->find(_geom->key);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(526)
		if (((  ((!(((_g == null()))))) ? bool(_force_add) : bool(true) ))){
			HX_STACK_LINE(529)
			if ((!(::Lambda_obj::has(_geom->batchers,hx::ObjectPtr<OBJ_>(this))))){
				HX_STACK_LINE(530)
				_geom->batchers->push(hx::ObjectPtr<OBJ_>(this));
			}
			HX_STACK_LINE(534)
			this->geometry->insert(_geom->key,_geom);
			HX_STACK_LINE(537)
			_geom->added = true;
			HX_STACK_LINE(540)
			this->tree_changed = true;
		}
		else{
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Batcher_obj,add,(void))

Void Batcher_obj::empty( hx::Null< bool >  __o__drop){
bool _drop = __o__drop.Default(true);
	HX_STACK_FRAME("phoenix.Batcher","empty",0xd120f447,"phoenix.Batcher.empty","phoenix/Batcher.hx",554,0xa9541457)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_drop,"_drop")
{
		HX_STACK_LINE(554)
		if ((_drop)){
			HX_STACK_LINE(555)
			for(::cpp::FastIterator_obj< ::phoenix::geometry::Geometry > *__it = ::cpp::CreateFastIterator< ::phoenix::geometry::Geometry >(this->geometry->iterator());  __it->hasNext(); ){
				::phoenix::geometry::Geometry geom = __it->next();
				{
					HX_STACK_LINE(556)
					geom->drop(true);
					HX_STACK_LINE(557)
					geom = null();
				}
;
			}
		}
		else{
			HX_STACK_LINE(560)
			for(::cpp::FastIterator_obj< ::phoenix::geometry::Geometry > *__it = ::cpp::CreateFastIterator< ::phoenix::geometry::Geometry >(this->geometry->iterator());  __it->hasNext(); ){
				::phoenix::geometry::Geometry geom = __it->next();
				this->geometry->remove(geom->key);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Batcher_obj,empty,(void))

Void Batcher_obj::remove( ::phoenix::geometry::Geometry _geom,Dynamic __o__remove_batcher_from_geometry){
Dynamic _remove_batcher_from_geometry = __o__remove_batcher_from_geometry.Default(true);
	HX_STACK_FRAME("phoenix.Batcher","remove",0xc124654a,"phoenix.Batcher.remove","phoenix/Batcher.hx",567,0xa9541457)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_geom,"_geom")
	HX_STACK_ARG(_remove_batcher_from_geometry,"_remove_batcher_from_geometry")
{
		HX_STACK_LINE(569)
		if ((_remove_batcher_from_geometry)){
			HX_STACK_LINE(570)
			_geom->batchers->remove(hx::ObjectPtr<OBJ_>(this));
			HX_STACK_LINE(571)
			if (((_geom->batchers->length == (int)0))){
				HX_STACK_LINE(572)
				_geom->added = false;
			}
		}
		HX_STACK_LINE(576)
		int countbefore = this->geometry->size();		HX_STACK_VAR(countbefore,"countbefore");
		HX_STACK_LINE(578)
		this->geometry->remove(_geom->key);
		HX_STACK_LINE(580)
		int countafter = this->geometry->size();		HX_STACK_VAR(countafter,"countafter");
		HX_STACK_LINE(582)
		if (((countbefore == countafter))){
		}
		HX_STACK_LINE(587)
		this->tree_changed = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Batcher_obj,remove,(void))

Void Batcher_obj::shader_activate( ::phoenix::Shader _shader){
{
		HX_STACK_FRAME("phoenix.Batcher","shader_activate",0x1836ad87,"phoenix.Batcher.shader_activate","phoenix/Batcher.hx",591,0xa9541457)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_shader,"_shader")
		HX_STACK_LINE(594)
		_shader->activate();
		HX_STACK_LINE(597)
		this->projectionmatrix_attribute = _shader->projectionmatrix_attribute;
		HX_STACK_LINE(598)
		this->modelviewmatrix_attribute = _shader->modelviewmatrix_attribute;
		HX_STACK_LINE(601)
		this->tex0_attribute = _shader->tex0_attribute;
		HX_STACK_LINE(602)
		this->tex1_attribute = _shader->tex1_attribute;
		HX_STACK_LINE(603)
		this->tex2_attribute = _shader->tex2_attribute;
		HX_STACK_LINE(604)
		this->tex3_attribute = _shader->tex3_attribute;
		HX_STACK_LINE(605)
		this->tex4_attribute = _shader->tex4_attribute;
		HX_STACK_LINE(606)
		this->tex5_attribute = _shader->tex5_attribute;
		HX_STACK_LINE(607)
		this->tex6_attribute = _shader->tex6_attribute;
		HX_STACK_LINE(608)
		this->tex7_attribute = _shader->tex7_attribute;
		HX_STACK_LINE(611)
		_shader->apply_uniforms();
		HX_STACK_LINE(614)
		::Luxe_obj::renderer->state->activeTexture((int)33984);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Batcher_obj,shader_activate,(void))

Void Batcher_obj::batch( hx::Null< bool >  __o_persist_immediate){
bool persist_immediate = __o_persist_immediate.Default(false);
	HX_STACK_FRAME("phoenix.Batcher","batch",0x0f01a174,"phoenix.Batcher.batch","phoenix/Batcher.hx",622,0xa9541457)
	HX_STACK_THIS(this)
	HX_STACK_ARG(persist_immediate,"persist_immediate")
{
		HX_STACK_LINE(625)
		this->dynamic_batched_count = (int)0;
		HX_STACK_LINE(626)
		this->static_batched_count = (int)0;
		HX_STACK_LINE(627)
		this->visible_count = (int)0;
		HX_STACK_LINE(629)
		this->vert_floats = (int)0;
		HX_STACK_LINE(630)
		this->tcoord_floats = (int)0;
		HX_STACK_LINE(631)
		this->color_floats = (int)0;
		HX_STACK_LINE(632)
		this->normal_floats = (int)0;
		HX_STACK_LINE(635)
		::phoenix::BatchState _g = ::phoenix::BatchState_obj::__new(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(635)
		this->state = _g;
		HX_STACK_LINE(637)
		::phoenix::geometry::Geometry geom = null();		HX_STACK_VAR(geom,"geom");
		HX_STACK_LINE(640)
		for(::cpp::FastIterator_obj< ::phoenix::geometry::Geometry > *__it = ::cpp::CreateFastIterator< ::phoenix::geometry::Geometry >(this->geometry->iterator());  __it->hasNext(); ){
			::phoenix::geometry::Geometry _geom = __it->next();
			{
				HX_STACK_LINE(643)
				geom = _geom;
				HX_STACK_LINE(646)
				if (((bool((geom != null())) && bool(!(geom->dropped))))){
					HX_STACK_LINE(649)
					if ((this->state->update(geom))){
						HX_STACK_LINE(653)
						if (((this->vert_floats > (int)0))){
							HX_STACK_LINE(654)
							this->submit_current_vertex_list(this->state->last_geom_state->primitive_type);
						}
					}
					HX_STACK_LINE(660)
					{
						HX_STACK_LINE(660)
						::phoenix::BatchState _this = this->state;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(660)
						if ((_this->geom_state->dirty)){
							HX_STACK_LINE(660)
							if (((_this->geom_state->texture != null()))){
								HX_STACK_LINE(660)
								if (((_this->last_texture_id == null()))){
								}
								HX_STACK_LINE(660)
								if (((_this->last_texture_id != _this->geom_state->texture->id))){
									HX_STACK_LINE(660)
									_this->last_texture_id = _this->geom_state->texture->id;
									HX_STACK_LINE(660)
									if ((_this->geom_state->texture->loaded)){
										HX_STACK_LINE(660)
										_this->geom_state->texture->bind();
										HX_STACK_LINE(660)
										_this->geom_state->texture->activate(this->tex0_attribute);
									}
								}
							}
							else{
								HX_STACK_LINE(660)
								::Luxe_obj::renderer->state->bindTexture2D(null());
								HX_STACK_LINE(660)
								_this->last_texture_id = null();
							}
							HX_STACK_LINE(660)
							if (((_this->geom_state->shader != null()))){
								HX_STACK_LINE(660)
								if (((_this->last_shader_id != _this->geom_state->shader->program))){
									HX_STACK_LINE(660)
									this->shader_activate(_this->geom_state->shader);
									HX_STACK_LINE(660)
									_this->last_shader_id = _this->geom_state->shader->program;
								}
							}
							else{
								HX_STACK_LINE(660)
								if (((_this->geom_state->texture != null()))){
									HX_STACK_LINE(660)
									this->shader_activate(this->renderer->shaders->__Field(HX_CSTRING("textured"),true)->__Field(HX_CSTRING("shader"),true));
									HX_STACK_LINE(660)
									_this->last_shader_id = this->renderer->shaders->__Field(HX_CSTRING("textured"),true)->__Field(HX_CSTRING("shader"),true)->__Field(HX_CSTRING("program"),true);
								}
								else{
									HX_STACK_LINE(660)
									this->shader_activate(this->renderer->shaders->__Field(HX_CSTRING("plain"),true)->__Field(HX_CSTRING("shader"),true));
									HX_STACK_LINE(660)
									_this->last_shader_id = this->renderer->shaders->__Field(HX_CSTRING("plain"),true)->__Field(HX_CSTRING("shader"),true)->__Field(HX_CSTRING("program"),true);
								}
							}
							HX_STACK_LINE(660)
							if (((_this->geom_state->group != _this->last_group))){
								HX_STACK_LINE(660)
								Array< ::Dynamic > previous = this->groups->get(_this->last_group);		HX_STACK_VAR(previous,"previous");
								HX_STACK_LINE(660)
								if (((previous != null()))){
									HX_STACK_LINE(660)
									int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
									HX_STACK_LINE(660)
									while((true)){
										HX_STACK_LINE(660)
										if ((!(((_g1 < previous->length))))){
											HX_STACK_LINE(660)
											break;
										}
										HX_STACK_LINE(660)
										::phoenix::BatchGroup _batch_group = previous->__get(_g1).StaticCast< ::phoenix::BatchGroup >();		HX_STACK_VAR(_batch_group,"_batch_group");
										HX_STACK_LINE(660)
										++(_g1);
										HX_STACK_LINE(660)
										if (((_batch_group->post_render != null()))){
											HX_STACK_LINE(660)
											_batch_group->post_render(hx::ObjectPtr<OBJ_>(this));
										}
									}
								}
								HX_STACK_LINE(660)
								Array< ::Dynamic > current = this->groups->get(_this->geom_state->group);		HX_STACK_VAR(current,"current");
								HX_STACK_LINE(660)
								if (((current != null()))){
									HX_STACK_LINE(660)
									int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
									HX_STACK_LINE(660)
									while((true)){
										HX_STACK_LINE(660)
										if ((!(((_g1 < current->length))))){
											HX_STACK_LINE(660)
											break;
										}
										HX_STACK_LINE(660)
										::phoenix::BatchGroup _batch_group = current->__get(_g1).StaticCast< ::phoenix::BatchGroup >();		HX_STACK_VAR(_batch_group,"_batch_group");
										HX_STACK_LINE(660)
										++(_g1);
										HX_STACK_LINE(660)
										if (((_batch_group->pre_render != null()))){
											HX_STACK_LINE(660)
											_batch_group->pre_render(hx::ObjectPtr<OBJ_>(this));
										}
									}
								}
								HX_STACK_LINE(660)
								_this->last_group = _this->geom_state->group;
							}
						}
						HX_STACK_LINE(660)
						if ((_this->geom_state->clip)){
							HX_STACK_LINE(660)
							if ((!(_this->is_clipping))){
								HX_STACK_LINE(660)
								::snow::platform::native::render::opengl::GL_obj::enable((int)3089);
								HX_STACK_LINE(660)
								_this->is_clipping = true;
							}
							HX_STACK_LINE(660)
							if (((_this->clip_rect != null()))){
								HX_STACK_LINE(660)
								if ((!(_this->clip_rect->equal(_this->last_clip_rect)))){
									HX_STACK_LINE(660)
									Float _y = (this->view->get_viewport()->h - ((_this->clip_rect->y + _this->clip_rect->h)));		HX_STACK_VAR(_y,"_y");
									HX_STACK_LINE(660)
									int _g1 = ::Std_obj::_int(_this->clip_rect->x);		HX_STACK_VAR(_g1,"_g1");
									HX_STACK_LINE(660)
									int _g2 = ::Std_obj::_int(_y);		HX_STACK_VAR(_g2,"_g2");
									HX_STACK_LINE(660)
									int _g3 = ::Std_obj::_int(_this->clip_rect->w);		HX_STACK_VAR(_g3,"_g3");
									HX_STACK_LINE(660)
									int _g4 = ::Std_obj::_int(_this->clip_rect->h);		HX_STACK_VAR(_g4,"_g4");
									HX_STACK_LINE(660)
									::snow::platform::native::render::opengl::GL_obj::scissor(_g1,_g2,_g3,_g4);
								}
							}
						}
						else{
							HX_STACK_LINE(660)
							if ((_this->is_clipping)){
								HX_STACK_LINE(660)
								::snow::platform::native::render::opengl::GL_obj::disable((int)3089);
								HX_STACK_LINE(660)
								_this->is_clipping = false;
							}
						}
						HX_STACK_LINE(660)
						_this->geom_state->clean();
					}
					HX_STACK_LINE(662)
					if ((geom->visible)){
						HX_STACK_LINE(664)
						(this->visible_count)++;
						HX_STACK_LINE(667)
						if ((geom->get_locked())){
							HX_STACK_LINE(668)
							this->submit_static_geometry(geom);
							HX_STACK_LINE(669)
							hx::AddEq(this->vert_count,geom->vertices->length);
						}
						else{
							HX_STACK_LINE(673)
							int _g5 = geom->get_primitive_type();		HX_STACK_VAR(_g5,"_g5");
							struct _Function_5_1{
								inline static bool Block( ::phoenix::geometry::Geometry &geom){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Batcher.hx",674,0xa9541457)
									{
										HX_STACK_LINE(674)
										int _g6 = geom->get_primitive_type();		HX_STACK_VAR(_g6,"_g6");
										HX_STACK_LINE(674)
										return (_g6 == (int)2);
									}
									return null();
								}
							};
							struct _Function_5_2{
								inline static bool Block( ::phoenix::geometry::Geometry &geom){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Batcher.hx",675,0xa9541457)
									{
										HX_STACK_LINE(675)
										int _g7 = geom->get_primitive_type();		HX_STACK_VAR(_g7,"_g7");
										HX_STACK_LINE(675)
										return (_g7 == (int)5);
									}
									return null();
								}
							};
							struct _Function_5_3{
								inline static bool Block( ::phoenix::geometry::Geometry &geom){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Batcher.hx",676,0xa9541457)
									{
										HX_STACK_LINE(676)
										int _g8 = geom->get_primitive_type();		HX_STACK_VAR(_g8,"_g8");
										HX_STACK_LINE(676)
										return (_g8 == (int)6);
									}
									return null();
								}
							};
							HX_STACK_LINE(673)
							if (((  ((!(((  ((!(((  ((!(((_g5 == (int)3))))) ? bool(_Function_5_1::Block(geom)) : bool(true) ))))) ? bool(_Function_5_2::Block(geom)) : bool(true) ))))) ? bool(_Function_5_3::Block(geom)) : bool(true) ))){
								HX_STACK_LINE(680)
								this->geometry_batch(geom);
								HX_STACK_LINE(682)
								int _g9 = geom->get_primitive_type();		HX_STACK_VAR(_g9,"_g9");
								HX_STACK_LINE(682)
								this->submit_current_vertex_list(_g9);
								HX_STACK_LINE(684)
								hx::AddEq(this->vert_count,geom->vertices->length);
							}
							else{
								HX_STACK_LINE(691)
								this->geometry_batch(geom);
								HX_STACK_LINE(694)
								(this->dynamic_batched_count)++;
								HX_STACK_LINE(695)
								hx::AddEq(this->vert_count,geom->vertices->length);
							}
						}
						HX_STACK_LINE(702)
						if (((bool(!(persist_immediate)) && bool(geom->immediate)))){
							HX_STACK_LINE(703)
							geom->drop(null());
						}
					}
				}
				else{
				}
			}
;
		}
		HX_STACK_LINE(716)
		if (((bool((this->vert_floats > (int)0)) && bool((geom != null()))))){
			HX_STACK_LINE(719)
			this->state->update(geom);
			HX_STACK_LINE(721)
			{
				HX_STACK_LINE(721)
				::phoenix::BatchState _this = this->state;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(721)
				if ((_this->geom_state->dirty)){
					HX_STACK_LINE(721)
					if (((_this->geom_state->texture != null()))){
						HX_STACK_LINE(721)
						if (((_this->last_texture_id == null()))){
						}
						HX_STACK_LINE(721)
						if (((_this->last_texture_id != _this->geom_state->texture->id))){
							HX_STACK_LINE(721)
							_this->last_texture_id = _this->geom_state->texture->id;
							HX_STACK_LINE(721)
							if ((_this->geom_state->texture->loaded)){
								HX_STACK_LINE(721)
								_this->geom_state->texture->bind();
								HX_STACK_LINE(721)
								_this->geom_state->texture->activate(this->tex0_attribute);
							}
						}
					}
					else{
						HX_STACK_LINE(721)
						::Luxe_obj::renderer->state->bindTexture2D(null());
						HX_STACK_LINE(721)
						_this->last_texture_id = null();
					}
					HX_STACK_LINE(721)
					if (((_this->geom_state->shader != null()))){
						HX_STACK_LINE(721)
						if (((_this->last_shader_id != _this->geom_state->shader->program))){
							HX_STACK_LINE(721)
							this->shader_activate(_this->geom_state->shader);
							HX_STACK_LINE(721)
							_this->last_shader_id = _this->geom_state->shader->program;
						}
					}
					else{
						HX_STACK_LINE(721)
						if (((_this->geom_state->texture != null()))){
							HX_STACK_LINE(721)
							this->shader_activate(this->renderer->shaders->__Field(HX_CSTRING("textured"),true)->__Field(HX_CSTRING("shader"),true));
							HX_STACK_LINE(721)
							_this->last_shader_id = this->renderer->shaders->__Field(HX_CSTRING("textured"),true)->__Field(HX_CSTRING("shader"),true)->__Field(HX_CSTRING("program"),true);
						}
						else{
							HX_STACK_LINE(721)
							this->shader_activate(this->renderer->shaders->__Field(HX_CSTRING("plain"),true)->__Field(HX_CSTRING("shader"),true));
							HX_STACK_LINE(721)
							_this->last_shader_id = this->renderer->shaders->__Field(HX_CSTRING("plain"),true)->__Field(HX_CSTRING("shader"),true)->__Field(HX_CSTRING("program"),true);
						}
					}
					HX_STACK_LINE(721)
					if (((_this->geom_state->group != _this->last_group))){
						HX_STACK_LINE(721)
						Array< ::Dynamic > previous = this->groups->get(_this->last_group);		HX_STACK_VAR(previous,"previous");
						HX_STACK_LINE(721)
						if (((previous != null()))){
							HX_STACK_LINE(721)
							int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
							HX_STACK_LINE(721)
							while((true)){
								HX_STACK_LINE(721)
								if ((!(((_g1 < previous->length))))){
									HX_STACK_LINE(721)
									break;
								}
								HX_STACK_LINE(721)
								::phoenix::BatchGroup _batch_group = previous->__get(_g1).StaticCast< ::phoenix::BatchGroup >();		HX_STACK_VAR(_batch_group,"_batch_group");
								HX_STACK_LINE(721)
								++(_g1);
								HX_STACK_LINE(721)
								if (((_batch_group->post_render != null()))){
									HX_STACK_LINE(721)
									_batch_group->post_render(hx::ObjectPtr<OBJ_>(this));
								}
							}
						}
						HX_STACK_LINE(721)
						Array< ::Dynamic > current = this->groups->get(_this->geom_state->group);		HX_STACK_VAR(current,"current");
						HX_STACK_LINE(721)
						if (((current != null()))){
							HX_STACK_LINE(721)
							int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
							HX_STACK_LINE(721)
							while((true)){
								HX_STACK_LINE(721)
								if ((!(((_g1 < current->length))))){
									HX_STACK_LINE(721)
									break;
								}
								HX_STACK_LINE(721)
								::phoenix::BatchGroup _batch_group = current->__get(_g1).StaticCast< ::phoenix::BatchGroup >();		HX_STACK_VAR(_batch_group,"_batch_group");
								HX_STACK_LINE(721)
								++(_g1);
								HX_STACK_LINE(721)
								if (((_batch_group->pre_render != null()))){
									HX_STACK_LINE(721)
									_batch_group->pre_render(hx::ObjectPtr<OBJ_>(this));
								}
							}
						}
						HX_STACK_LINE(721)
						_this->last_group = _this->geom_state->group;
					}
				}
				HX_STACK_LINE(721)
				if ((_this->geom_state->clip)){
					HX_STACK_LINE(721)
					if ((!(_this->is_clipping))){
						HX_STACK_LINE(721)
						::snow::platform::native::render::opengl::GL_obj::enable((int)3089);
						HX_STACK_LINE(721)
						_this->is_clipping = true;
					}
					HX_STACK_LINE(721)
					if (((_this->clip_rect != null()))){
						HX_STACK_LINE(721)
						if ((!(_this->clip_rect->equal(_this->last_clip_rect)))){
							HX_STACK_LINE(721)
							Float _y = (this->view->get_viewport()->h - ((_this->clip_rect->y + _this->clip_rect->h)));		HX_STACK_VAR(_y,"_y");
							HX_STACK_LINE(721)
							int _g10 = ::Std_obj::_int(_this->clip_rect->x);		HX_STACK_VAR(_g10,"_g10");
							HX_STACK_LINE(721)
							int _g11 = ::Std_obj::_int(_y);		HX_STACK_VAR(_g11,"_g11");
							HX_STACK_LINE(721)
							int _g12 = ::Std_obj::_int(_this->clip_rect->w);		HX_STACK_VAR(_g12,"_g12");
							HX_STACK_LINE(721)
							int _g13 = ::Std_obj::_int(_this->clip_rect->h);		HX_STACK_VAR(_g13,"_g13");
							HX_STACK_LINE(721)
							::snow::platform::native::render::opengl::GL_obj::scissor(_g10,_g11,_g12,_g13);
						}
					}
				}
				else{
					HX_STACK_LINE(721)
					if ((_this->is_clipping)){
						HX_STACK_LINE(721)
						::snow::platform::native::render::opengl::GL_obj::disable((int)3089);
						HX_STACK_LINE(721)
						_this->is_clipping = false;
					}
				}
				HX_STACK_LINE(721)
				_this->geom_state->clean();
			}
			HX_STACK_LINE(723)
			this->submit_current_vertex_list(this->state->last_geom_state->primitive_type);
		}
		HX_STACK_LINE(728)
		this->state->deactivate(hx::ObjectPtr<OBJ_>(this));
		HX_STACK_LINE(730)
		this->state = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Batcher_obj,batch,(void))

Void Batcher_obj::draw( Dynamic __o_persist_immediate){
Dynamic persist_immediate = __o_persist_immediate.Default(false);
	HX_STACK_FRAME("phoenix.Batcher","draw",0x6d59878a,"phoenix.Batcher.draw","phoenix/Batcher.hx",734,0xa9541457)
	HX_STACK_THIS(this)
	HX_STACK_ARG(persist_immediate,"persist_immediate")
{
		HX_STACK_LINE(737)
		this->draw_calls = (int)0;
		HX_STACK_LINE(738)
		this->vert_count = (int)0;
		HX_STACK_LINE(741)
		this->view->process();
		HX_STACK_LINE(746)
		this->renderer->state->viewport(this->view->get_viewport()->x,this->view->get_viewport()->y,this->view->get_viewport()->w,this->view->get_viewport()->h);
		HX_STACK_LINE(749)
		this->batch(persist_immediate);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Batcher_obj,draw,(void))

Void Batcher_obj::submit_static_geometry( ::phoenix::geometry::Geometry geom){
{
		HX_STACK_FRAME("phoenix.Batcher","submit_static_geometry",0x9aab1742,"phoenix.Batcher.submit_static_geometry","phoenix/Batcher.hx",753,0xa9541457)
		HX_STACK_THIS(this)
		HX_STACK_ARG(geom,"geom")
		HX_STACK_LINE(756)
		if (((geom->vertices->length == (int)0))){
			HX_STACK_LINE(757)
			return null();
		}
		HX_STACK_LINE(761)
		this->static_vert_floats = (int)0;
		HX_STACK_LINE(761)
		this->static_tcoord_floats = (int)0;
		HX_STACK_LINE(761)
		this->static_color_floats = (int)0;
		HX_STACK_LINE(764)
		if (((  ((!((!(geom->submitted))))) ? bool(geom->get_dirty()) : bool(true) ))){
			HX_STACK_LINE(767)
			this->geometry_batch_static(geom);
		}
		else{
			HX_STACK_LINE(771)
			this->static_vert_floats = (geom->vertices->length * (int)4);
			HX_STACK_LINE(772)
			this->static_tcoord_floats = (geom->vertices->length * (int)4);
			HX_STACK_LINE(773)
			this->static_color_floats = (geom->vertices->length * (int)4);
		}
		HX_STACK_LINE(779)
		if (((geom->static_vertex_buffer == null()))){
			HX_STACK_LINE(780)
			::snow::platform::native::render::opengl::GLBuffer _g = ::snow::platform::native::render::opengl::GL_obj::createBuffer();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(780)
			geom->static_vertex_buffer = _g;
			HX_STACK_LINE(781)
			::snow::platform::native::render::opengl::GLBuffer _g1 = ::snow::platform::native::render::opengl::GL_obj::createBuffer();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(781)
			geom->static_tcoord_buffer = _g1;
			HX_STACK_LINE(782)
			::snow::platform::native::render::opengl::GLBuffer _g2 = ::snow::platform::native::render::opengl::GL_obj::createBuffer();		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(782)
			geom->static_vcolor_buffer = _g2;
		}
		HX_STACK_LINE(787)
		this->_enable_attributes();
		HX_STACK_LINE(790)
		::snow::platform::native::render::opengl::GL_obj::bindBuffer((int)34962,geom->static_vertex_buffer);
		HX_STACK_LINE(791)
		::snow::platform::native::render::opengl::GL_obj::vertexAttribPointer(this->vert_attribute,(int)4,(int)5126,false,(int)0,(int)0);
		HX_STACK_LINE(793)
		if (((  ((!((!(geom->submitted))))) ? bool(geom->get_dirty()) : bool(true) ))){
			HX_STACK_LINE(794)
			::snow::platform::native::render::opengl::GL_obj::bufferData((int)34962,this->static_vertlist,(int)35044);
		}
		HX_STACK_LINE(798)
		::snow::platform::native::render::opengl::GL_obj::bindBuffer((int)34962,geom->static_tcoord_buffer);
		HX_STACK_LINE(799)
		::snow::platform::native::render::opengl::GL_obj::vertexAttribPointer(this->tcoord_attribute,(int)4,(int)5126,false,(int)0,(int)0);
		HX_STACK_LINE(801)
		if (((  ((!((!(geom->submitted))))) ? bool(geom->get_dirty()) : bool(true) ))){
			HX_STACK_LINE(802)
			::snow::platform::native::render::opengl::GL_obj::bufferData((int)34962,this->static_tcoordlist,(int)35044);
		}
		HX_STACK_LINE(806)
		::snow::platform::native::render::opengl::GL_obj::bindBuffer((int)34962,geom->static_vcolor_buffer);
		HX_STACK_LINE(807)
		::snow::platform::native::render::opengl::GL_obj::vertexAttribPointer(this->color_attribute,(int)4,(int)5126,false,(int)0,(int)0);
		HX_STACK_LINE(809)
		if (((  ((!((!(geom->submitted))))) ? bool(geom->get_dirty()) : bool(true) ))){
			HX_STACK_LINE(810)
			::snow::platform::native::render::opengl::GL_obj::bufferData((int)34962,this->static_colorlist,(int)35044);
		}
		HX_STACK_LINE(823)
		int _g3 = geom->get_primitive_type();		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(824)
		int _g4 = geom->get_primitive_type();		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(824)
		int _g5 = ::phoenix::utils::Rendering_obj::get_elements_for_type(_g4,this->static_vert_floats);		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(822)
		::snow::platform::native::render::opengl::GL_obj::drawArrays(_g3,(int)0,_g5);
		HX_STACK_LINE(828)
		this->_disable_attributes();
		HX_STACK_LINE(830)
		(this->draw_calls)++;
		HX_STACK_LINE(831)
		(this->static_batched_count)++;
		HX_STACK_LINE(834)
		this->static_vert_floats = (int)0;
		HX_STACK_LINE(835)
		this->static_tcoord_floats = (int)0;
		HX_STACK_LINE(836)
		this->static_color_floats = (int)0;
		HX_STACK_LINE(840)
		geom->set_dirty(false);
		HX_STACK_LINE(841)
		geom->submitted = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Batcher_obj,submit_static_geometry,(void))

Void Batcher_obj::submit_current_vertex_list( int type){
{
		HX_STACK_FRAME("phoenix.Batcher","submit_current_vertex_list",0x67dd8932,"phoenix.Batcher.submit_current_vertex_list","phoenix/Batcher.hx",846,0xa9541457)
		HX_STACK_THIS(this)
		HX_STACK_ARG(type,"type")
		HX_STACK_LINE(848)
		if (((this->vert_floats == (int)0))){
			HX_STACK_LINE(850)
			return null();
		}
		HX_STACK_LINE(853)
		if (((this->vert_floats > this->max_floats))){
			HX_STACK_LINE(854)
			HX_STACK_DO_THROW(HX_CSTRING("uh oh, somehow too many floats are being submitted (max:$max_floats, attempt:$vert_floats)."));
		}
		HX_STACK_LINE(858)
		this->_enable_attributes();
		HX_STACK_LINE(860)
		::snow::platform::native::render::opengl::GL_obj::bindBuffer((int)34962,this->vertexBuffers->__get(this->buffer_index).StaticCast< ::snow::platform::native::render::opengl::GLBuffer >());
		HX_STACK_LINE(861)
		::snow::platform::native::render::opengl::GL_obj::vertexAttribPointer((int)0,(int)4,(int)5126,false,(int)0,(int)0);
		HX_STACK_LINE(862)
		::snow::platform::native::utils::Float32Array _g = ::snow::platform::native::utils::Float32Array_obj::__new(this->vertlist->buffer,(int)0,this->vert_floats);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(862)
		::snow::platform::native::render::opengl::GL_obj::bufferSubData((int)34962,(int)0,_g);
		HX_STACK_LINE(864)
		::snow::platform::native::render::opengl::GL_obj::bindBuffer((int)34962,this->tcoordBuffers->__get(this->buffer_index).StaticCast< ::snow::platform::native::render::opengl::GLBuffer >());
		HX_STACK_LINE(865)
		::snow::platform::native::render::opengl::GL_obj::vertexAttribPointer((int)1,(int)4,(int)5126,false,(int)0,(int)0);
		HX_STACK_LINE(866)
		::snow::platform::native::utils::Float32Array _g1 = ::snow::platform::native::utils::Float32Array_obj::__new(this->tcoordlist->buffer,(int)0,this->tcoord_floats);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(866)
		::snow::platform::native::render::opengl::GL_obj::bufferSubData((int)34962,(int)0,_g1);
		HX_STACK_LINE(868)
		::snow::platform::native::render::opengl::GL_obj::bindBuffer((int)34962,this->vcolorBuffers->__get(this->buffer_index).StaticCast< ::snow::platform::native::render::opengl::GLBuffer >());
		HX_STACK_LINE(869)
		::snow::platform::native::render::opengl::GL_obj::vertexAttribPointer((int)2,(int)4,(int)5126,false,(int)0,(int)0);
		HX_STACK_LINE(870)
		::snow::platform::native::utils::Float32Array _g2 = ::snow::platform::native::utils::Float32Array_obj::__new(this->colorlist->buffer,(int)0,this->color_floats);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(870)
		::snow::platform::native::render::opengl::GL_obj::bufferSubData((int)34962,(int)0,_g2);
		HX_STACK_LINE(879)
		int _g3 = ::phoenix::utils::Rendering_obj::get_elements_for_type(type,this->vert_floats);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(877)
		::snow::platform::native::render::opengl::GL_obj::drawArrays(type,(int)0,_g3);
		HX_STACK_LINE(883)
		this->_disable_attributes();
		HX_STACK_LINE(886)
		(this->buffer_index)++;
		HX_STACK_LINE(887)
		if (((this->buffer_index >= this->buffer_count))){
			HX_STACK_LINE(888)
			this->buffer_index = (int)0;
		}
		HX_STACK_LINE(892)
		this->vert_floats = (int)0;
		HX_STACK_LINE(892)
		this->tcoord_floats = (int)0;
		HX_STACK_LINE(892)
		this->color_floats = (int)0;
		HX_STACK_LINE(892)
		this->normal_floats = (int)0;
		HX_STACK_LINE(894)
		(this->draw_calls)++;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Batcher_obj,submit_current_vertex_list,(void))

Void Batcher_obj::geometry_batch( ::phoenix::geometry::Geometry geom){
{
		HX_STACK_FRAME("phoenix.Batcher","geometry_batch",0x429a8233,"phoenix.Batcher.geometry_batch","phoenix/Batcher.hx",900,0xa9541457)
		HX_STACK_THIS(this)
		HX_STACK_ARG(geom,"geom")
		HX_STACK_LINE(903)
		Float _count_after = (geom->vertices->length + (Float(this->vert_floats) / Float((int)4)));		HX_STACK_VAR(_count_after,"_count_after");
		HX_STACK_LINE(906)
		if (((_count_after > this->max_verts))){
			HX_STACK_LINE(907)
			int _g = geom->get_primitive_type();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(907)
			this->submit_current_vertex_list(_g);
		}
		HX_STACK_LINE(910)
		geom->batch(this->vert_floats,this->tcoord_floats,this->color_floats,this->normal_floats,this->vertlist,this->tcoordlist,this->colorlist,this->normallist);
		HX_STACK_LINE(915)
		hx::AddEq(this->vert_floats,(geom->vertices->length * (int)4));
		HX_STACK_LINE(916)
		hx::AddEq(this->tcoord_floats,(geom->vertices->length * (int)4));
		HX_STACK_LINE(917)
		hx::AddEq(this->color_floats,(geom->vertices->length * (int)4));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Batcher_obj,geometry_batch,(void))

Void Batcher_obj::geometry_batch_static( ::phoenix::geometry::Geometry geom){
{
		HX_STACK_FRAME("phoenix.Batcher","geometry_batch_static",0x1c19687a,"phoenix.Batcher.geometry_batch_static","phoenix/Batcher.hx",922,0xa9541457)
		HX_STACK_THIS(this)
		HX_STACK_ARG(geom,"geom")
		HX_STACK_LINE(924)
		geom->batch(this->static_vert_floats,this->static_tcoord_floats,this->static_color_floats,this->static_normal_floats,this->static_vertlist,this->static_tcoordlist,this->static_colorlist,this->static_normallist);
		HX_STACK_LINE(929)
		hx::AddEq(this->static_vert_floats,(geom->vertices->length * (int)4));
		HX_STACK_LINE(930)
		hx::AddEq(this->static_tcoord_floats,(geom->vertices->length * (int)4));
		HX_STACK_LINE(931)
		hx::AddEq(this->static_color_floats,(geom->vertices->length * (int)4));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Batcher_obj,geometry_batch_static,(void))

Void Batcher_obj::_enable_attributes( ){
{
		HX_STACK_FRAME("phoenix.Batcher","_enable_attributes",0x53897f1a,"phoenix.Batcher._enable_attributes","phoenix/Batcher.hx",938,0xa9541457)
		HX_STACK_THIS(this)
		HX_STACK_LINE(941)
		::snow::platform::native::render::opengl::GL_obj::uniformMatrix4fv(this->projectionmatrix_attribute,false,this->view->projection_float32array);
		HX_STACK_LINE(942)
		::snow::platform::native::render::opengl::GL_obj::uniformMatrix4fv(this->modelviewmatrix_attribute,false,this->view->view_inverse_float32array);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Batcher_obj,_enable_attributes,(void))

Void Batcher_obj::_disable_attributes( ){
{
		HX_STACK_FRAME("phoenix.Batcher","_disable_attributes",0xe5fa1467,"phoenix.Batcher._disable_attributes","phoenix/Batcher.hx",946,0xa9541457)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Batcher_obj,_disable_attributes,(void))

int Batcher_obj::_sequence_key;


Batcher_obj::Batcher_obj()
{
}

void Batcher_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Batcher);
	HX_MARK_MEMBER_NAME(id,"id");
	HX_MARK_MEMBER_NAME(layer,"layer");
	HX_MARK_MEMBER_NAME(enabled,"enabled");
	HX_MARK_MEMBER_NAME(geometry,"geometry");
	HX_MARK_MEMBER_NAME(groups,"groups");
	HX_MARK_MEMBER_NAME(tree_changed,"tree_changed");
	HX_MARK_MEMBER_NAME(vertlist,"vertlist");
	HX_MARK_MEMBER_NAME(tcoordlist,"tcoordlist");
	HX_MARK_MEMBER_NAME(colorlist,"colorlist");
	HX_MARK_MEMBER_NAME(normallist,"normallist");
	HX_MARK_MEMBER_NAME(static_vertlist,"static_vertlist");
	HX_MARK_MEMBER_NAME(static_tcoordlist,"static_tcoordlist");
	HX_MARK_MEMBER_NAME(static_colorlist,"static_colorlist");
	HX_MARK_MEMBER_NAME(static_normallist,"static_normallist");
	HX_MARK_MEMBER_NAME(vert_floats,"vert_floats");
	HX_MARK_MEMBER_NAME(tcoord_floats,"tcoord_floats");
	HX_MARK_MEMBER_NAME(color_floats,"color_floats");
	HX_MARK_MEMBER_NAME(normal_floats,"normal_floats");
	HX_MARK_MEMBER_NAME(static_vert_floats,"static_vert_floats");
	HX_MARK_MEMBER_NAME(static_tcoord_floats,"static_tcoord_floats");
	HX_MARK_MEMBER_NAME(static_color_floats,"static_color_floats");
	HX_MARK_MEMBER_NAME(static_normal_floats,"static_normal_floats");
	HX_MARK_MEMBER_NAME(buffer_count,"buffer_count");
	HX_MARK_MEMBER_NAME(buffer_index,"buffer_index");
	HX_MARK_MEMBER_NAME(max_verts,"max_verts");
	HX_MARK_MEMBER_NAME(max_floats,"max_floats");
	HX_MARK_MEMBER_NAME(vert_count,"vert_count");
	HX_MARK_MEMBER_NAME(vertexBuffers,"vertexBuffers");
	HX_MARK_MEMBER_NAME(tcoordBuffers,"tcoordBuffers");
	HX_MARK_MEMBER_NAME(vcolorBuffers,"vcolorBuffers");
	HX_MARK_MEMBER_NAME(projectionmatrix_attribute,"projectionmatrix_attribute");
	HX_MARK_MEMBER_NAME(modelviewmatrix_attribute,"modelviewmatrix_attribute");
	HX_MARK_MEMBER_NAME(vert_attribute,"vert_attribute");
	HX_MARK_MEMBER_NAME(tcoord_attribute,"tcoord_attribute");
	HX_MARK_MEMBER_NAME(color_attribute,"color_attribute");
	HX_MARK_MEMBER_NAME(tex0_attribute,"tex0_attribute");
	HX_MARK_MEMBER_NAME(tex1_attribute,"tex1_attribute");
	HX_MARK_MEMBER_NAME(tex2_attribute,"tex2_attribute");
	HX_MARK_MEMBER_NAME(tex3_attribute,"tex3_attribute");
	HX_MARK_MEMBER_NAME(tex4_attribute,"tex4_attribute");
	HX_MARK_MEMBER_NAME(tex5_attribute,"tex5_attribute");
	HX_MARK_MEMBER_NAME(tex6_attribute,"tex6_attribute");
	HX_MARK_MEMBER_NAME(tex7_attribute,"tex7_attribute");
	HX_MARK_MEMBER_NAME(renderer,"renderer");
	HX_MARK_MEMBER_NAME(view,"view");
	HX_MARK_MEMBER_NAME(draw_calls,"draw_calls");
	HX_MARK_MEMBER_NAME(dynamic_batched_count,"dynamic_batched_count");
	HX_MARK_MEMBER_NAME(static_batched_count,"static_batched_count");
	HX_MARK_MEMBER_NAME(visible_count,"visible_count");
	HX_MARK_MEMBER_NAME(log,"log");
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(sequence,"sequence");
	HX_MARK_MEMBER_NAME(state,"state");
	HX_MARK_END_CLASS();
}

void Batcher_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(id,"id");
	HX_VISIT_MEMBER_NAME(layer,"layer");
	HX_VISIT_MEMBER_NAME(enabled,"enabled");
	HX_VISIT_MEMBER_NAME(geometry,"geometry");
	HX_VISIT_MEMBER_NAME(groups,"groups");
	HX_VISIT_MEMBER_NAME(tree_changed,"tree_changed");
	HX_VISIT_MEMBER_NAME(vertlist,"vertlist");
	HX_VISIT_MEMBER_NAME(tcoordlist,"tcoordlist");
	HX_VISIT_MEMBER_NAME(colorlist,"colorlist");
	HX_VISIT_MEMBER_NAME(normallist,"normallist");
	HX_VISIT_MEMBER_NAME(static_vertlist,"static_vertlist");
	HX_VISIT_MEMBER_NAME(static_tcoordlist,"static_tcoordlist");
	HX_VISIT_MEMBER_NAME(static_colorlist,"static_colorlist");
	HX_VISIT_MEMBER_NAME(static_normallist,"static_normallist");
	HX_VISIT_MEMBER_NAME(vert_floats,"vert_floats");
	HX_VISIT_MEMBER_NAME(tcoord_floats,"tcoord_floats");
	HX_VISIT_MEMBER_NAME(color_floats,"color_floats");
	HX_VISIT_MEMBER_NAME(normal_floats,"normal_floats");
	HX_VISIT_MEMBER_NAME(static_vert_floats,"static_vert_floats");
	HX_VISIT_MEMBER_NAME(static_tcoord_floats,"static_tcoord_floats");
	HX_VISIT_MEMBER_NAME(static_color_floats,"static_color_floats");
	HX_VISIT_MEMBER_NAME(static_normal_floats,"static_normal_floats");
	HX_VISIT_MEMBER_NAME(buffer_count,"buffer_count");
	HX_VISIT_MEMBER_NAME(buffer_index,"buffer_index");
	HX_VISIT_MEMBER_NAME(max_verts,"max_verts");
	HX_VISIT_MEMBER_NAME(max_floats,"max_floats");
	HX_VISIT_MEMBER_NAME(vert_count,"vert_count");
	HX_VISIT_MEMBER_NAME(vertexBuffers,"vertexBuffers");
	HX_VISIT_MEMBER_NAME(tcoordBuffers,"tcoordBuffers");
	HX_VISIT_MEMBER_NAME(vcolorBuffers,"vcolorBuffers");
	HX_VISIT_MEMBER_NAME(projectionmatrix_attribute,"projectionmatrix_attribute");
	HX_VISIT_MEMBER_NAME(modelviewmatrix_attribute,"modelviewmatrix_attribute");
	HX_VISIT_MEMBER_NAME(vert_attribute,"vert_attribute");
	HX_VISIT_MEMBER_NAME(tcoord_attribute,"tcoord_attribute");
	HX_VISIT_MEMBER_NAME(color_attribute,"color_attribute");
	HX_VISIT_MEMBER_NAME(tex0_attribute,"tex0_attribute");
	HX_VISIT_MEMBER_NAME(tex1_attribute,"tex1_attribute");
	HX_VISIT_MEMBER_NAME(tex2_attribute,"tex2_attribute");
	HX_VISIT_MEMBER_NAME(tex3_attribute,"tex3_attribute");
	HX_VISIT_MEMBER_NAME(tex4_attribute,"tex4_attribute");
	HX_VISIT_MEMBER_NAME(tex5_attribute,"tex5_attribute");
	HX_VISIT_MEMBER_NAME(tex6_attribute,"tex6_attribute");
	HX_VISIT_MEMBER_NAME(tex7_attribute,"tex7_attribute");
	HX_VISIT_MEMBER_NAME(renderer,"renderer");
	HX_VISIT_MEMBER_NAME(view,"view");
	HX_VISIT_MEMBER_NAME(draw_calls,"draw_calls");
	HX_VISIT_MEMBER_NAME(dynamic_batched_count,"dynamic_batched_count");
	HX_VISIT_MEMBER_NAME(static_batched_count,"static_batched_count");
	HX_VISIT_MEMBER_NAME(visible_count,"visible_count");
	HX_VISIT_MEMBER_NAME(log,"log");
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(sequence,"sequence");
	HX_VISIT_MEMBER_NAME(state,"state");
}

Dynamic Batcher_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return id; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"log") ) { return log; }
		if (HX_FIELD_EQ(inName,"add") ) { return add_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"view") ) { return view; }
		if (HX_FIELD_EQ(inName,"name") ) { return name; }
		if (HX_FIELD_EQ(inName,"draw") ) { return draw_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"layer") ) { return layer; }
		if (HX_FIELD_EQ(inName,"empty") ) { return empty_dyn(); }
		if (HX_FIELD_EQ(inName,"state") ) { return state; }
		if (HX_FIELD_EQ(inName,"batch") ) { return batch_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"groups") ) { return groups; }
		if (HX_FIELD_EQ(inName,"remove") ) { return remove_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"enabled") ) { return enabled; }
		if (HX_FIELD_EQ(inName,"compare") ) { return compare_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"geometry") ) { return geometry; }
		if (HX_FIELD_EQ(inName,"vertlist") ) { return vertlist; }
		if (HX_FIELD_EQ(inName,"renderer") ) { return renderer; }
		if (HX_FIELD_EQ(inName,"sequence") ) { return sequence; }
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"colorlist") ) { return colorlist; }
		if (HX_FIELD_EQ(inName,"max_verts") ) { return max_verts; }
		if (HX_FIELD_EQ(inName,"set_layer") ) { return set_layer_dyn(); }
		if (HX_FIELD_EQ(inName,"add_group") ) { return add_group_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"tcoordlist") ) { return tcoordlist; }
		if (HX_FIELD_EQ(inName,"normallist") ) { return normallist; }
		if (HX_FIELD_EQ(inName,"max_floats") ) { return max_floats; }
		if (HX_FIELD_EQ(inName,"vert_count") ) { return vert_count; }
		if (HX_FIELD_EQ(inName,"draw_calls") ) { return draw_calls; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"vert_floats") ) { return vert_floats; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"tree_changed") ) { return tree_changed; }
		if (HX_FIELD_EQ(inName,"color_floats") ) { return color_floats; }
		if (HX_FIELD_EQ(inName,"buffer_count") ) { return buffer_count; }
		if (HX_FIELD_EQ(inName,"buffer_index") ) { return buffer_index; }
		if (HX_FIELD_EQ(inName,"compare_rule") ) { return compare_rule_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_sequence_key") ) { return _sequence_key; }
		if (HX_FIELD_EQ(inName,"tcoord_floats") ) { return tcoord_floats; }
		if (HX_FIELD_EQ(inName,"normal_floats") ) { return normal_floats; }
		if (HX_FIELD_EQ(inName,"vertexBuffers") ) { return vertexBuffers; }
		if (HX_FIELD_EQ(inName,"tcoordBuffers") ) { return tcoordBuffers; }
		if (HX_FIELD_EQ(inName,"vcolorBuffers") ) { return vcolorBuffers; }
		if (HX_FIELD_EQ(inName,"visible_count") ) { return visible_count; }
		if (HX_FIELD_EQ(inName,"list_geometry") ) { return list_geometry_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"vert_attribute") ) { return vert_attribute; }
		if (HX_FIELD_EQ(inName,"tex0_attribute") ) { return tex0_attribute; }
		if (HX_FIELD_EQ(inName,"tex1_attribute") ) { return tex1_attribute; }
		if (HX_FIELD_EQ(inName,"tex2_attribute") ) { return tex2_attribute; }
		if (HX_FIELD_EQ(inName,"tex3_attribute") ) { return tex3_attribute; }
		if (HX_FIELD_EQ(inName,"tex4_attribute") ) { return tex4_attribute; }
		if (HX_FIELD_EQ(inName,"tex5_attribute") ) { return tex5_attribute; }
		if (HX_FIELD_EQ(inName,"tex6_attribute") ) { return tex6_attribute; }
		if (HX_FIELD_EQ(inName,"tex7_attribute") ) { return tex7_attribute; }
		if (HX_FIELD_EQ(inName,"geometry_batch") ) { return geometry_batch_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"static_vertlist") ) { return static_vertlist; }
		if (HX_FIELD_EQ(inName,"color_attribute") ) { return color_attribute; }
		if (HX_FIELD_EQ(inName,"shader_activate") ) { return shader_activate_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"static_colorlist") ) { return static_colorlist; }
		if (HX_FIELD_EQ(inName,"tcoord_attribute") ) { return tcoord_attribute; }
		if (HX_FIELD_EQ(inName,"geometry_compare") ) { return geometry_compare_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"static_tcoordlist") ) { return static_tcoordlist; }
		if (HX_FIELD_EQ(inName,"static_normallist") ) { return static_normallist; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"static_vert_floats") ) { return static_vert_floats; }
		if (HX_FIELD_EQ(inName,"_enable_attributes") ) { return _enable_attributes_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"static_color_floats") ) { return static_color_floats; }
		if (HX_FIELD_EQ(inName,"_disable_attributes") ) { return _disable_attributes_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"static_tcoord_floats") ) { return static_tcoord_floats; }
		if (HX_FIELD_EQ(inName,"static_normal_floats") ) { return static_normal_floats; }
		if (HX_FIELD_EQ(inName,"static_batched_count") ) { return static_batched_count; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"dynamic_batched_count") ) { return dynamic_batched_count; }
		if (HX_FIELD_EQ(inName,"geometry_batch_static") ) { return geometry_batch_static_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"compare_rule_to_string") ) { return compare_rule_to_string_dyn(); }
		if (HX_FIELD_EQ(inName,"submit_static_geometry") ) { return submit_static_geometry_dyn(); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"modelviewmatrix_attribute") ) { return modelviewmatrix_attribute; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"projectionmatrix_attribute") ) { return projectionmatrix_attribute; }
		if (HX_FIELD_EQ(inName,"submit_current_vertex_list") ) { return submit_current_vertex_list_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Batcher_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< ::String >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"log") ) { log=inValue.Cast< bool >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"view") ) { view=inValue.Cast< ::phoenix::Camera >(); return inValue; }
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"layer") ) { if (inCallProp) return set_layer(inValue);layer=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"state") ) { state=inValue.Cast< ::phoenix::BatchState >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"groups") ) { groups=inValue.Cast< ::haxe::ds::IntMap >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"enabled") ) { enabled=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"geometry") ) { geometry=inValue.Cast< ::luxe::structural::BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry >(); return inValue; }
		if (HX_FIELD_EQ(inName,"vertlist") ) { vertlist=inValue.Cast< ::snow::platform::native::utils::Float32Array >(); return inValue; }
		if (HX_FIELD_EQ(inName,"renderer") ) { renderer=inValue.Cast< ::phoenix::Renderer >(); return inValue; }
		if (HX_FIELD_EQ(inName,"sequence") ) { sequence=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"colorlist") ) { colorlist=inValue.Cast< ::snow::platform::native::utils::Float32Array >(); return inValue; }
		if (HX_FIELD_EQ(inName,"max_verts") ) { max_verts=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"tcoordlist") ) { tcoordlist=inValue.Cast< ::snow::platform::native::utils::Float32Array >(); return inValue; }
		if (HX_FIELD_EQ(inName,"normallist") ) { normallist=inValue.Cast< ::snow::platform::native::utils::Float32Array >(); return inValue; }
		if (HX_FIELD_EQ(inName,"max_floats") ) { max_floats=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"vert_count") ) { vert_count=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"draw_calls") ) { draw_calls=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"vert_floats") ) { vert_floats=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"tree_changed") ) { tree_changed=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"color_floats") ) { color_floats=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"buffer_count") ) { buffer_count=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"buffer_index") ) { buffer_index=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_sequence_key") ) { _sequence_key=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"tcoord_floats") ) { tcoord_floats=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"normal_floats") ) { normal_floats=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"vertexBuffers") ) { vertexBuffers=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"tcoordBuffers") ) { tcoordBuffers=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"vcolorBuffers") ) { vcolorBuffers=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"visible_count") ) { visible_count=inValue.Cast< int >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"vert_attribute") ) { vert_attribute=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"tex0_attribute") ) { tex0_attribute=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"tex1_attribute") ) { tex1_attribute=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"tex2_attribute") ) { tex2_attribute=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"tex3_attribute") ) { tex3_attribute=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"tex4_attribute") ) { tex4_attribute=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"tex5_attribute") ) { tex5_attribute=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"tex6_attribute") ) { tex6_attribute=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"tex7_attribute") ) { tex7_attribute=inValue.Cast< int >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"static_vertlist") ) { static_vertlist=inValue.Cast< ::snow::platform::native::utils::Float32Array >(); return inValue; }
		if (HX_FIELD_EQ(inName,"color_attribute") ) { color_attribute=inValue.Cast< int >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"static_colorlist") ) { static_colorlist=inValue.Cast< ::snow::platform::native::utils::Float32Array >(); return inValue; }
		if (HX_FIELD_EQ(inName,"tcoord_attribute") ) { tcoord_attribute=inValue.Cast< int >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"static_tcoordlist") ) { static_tcoordlist=inValue.Cast< ::snow::platform::native::utils::Float32Array >(); return inValue; }
		if (HX_FIELD_EQ(inName,"static_normallist") ) { static_normallist=inValue.Cast< ::snow::platform::native::utils::Float32Array >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"static_vert_floats") ) { static_vert_floats=inValue.Cast< int >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"static_color_floats") ) { static_color_floats=inValue.Cast< int >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"static_tcoord_floats") ) { static_tcoord_floats=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"static_normal_floats") ) { static_normal_floats=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"static_batched_count") ) { static_batched_count=inValue.Cast< int >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"dynamic_batched_count") ) { dynamic_batched_count=inValue.Cast< int >(); return inValue; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"modelviewmatrix_attribute") ) { modelviewmatrix_attribute=inValue.Cast< int >(); return inValue; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"projectionmatrix_attribute") ) { projectionmatrix_attribute=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Batcher_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("id"));
	outFields->push(HX_CSTRING("layer"));
	outFields->push(HX_CSTRING("enabled"));
	outFields->push(HX_CSTRING("geometry"));
	outFields->push(HX_CSTRING("groups"));
	outFields->push(HX_CSTRING("tree_changed"));
	outFields->push(HX_CSTRING("vertlist"));
	outFields->push(HX_CSTRING("tcoordlist"));
	outFields->push(HX_CSTRING("colorlist"));
	outFields->push(HX_CSTRING("normallist"));
	outFields->push(HX_CSTRING("static_vertlist"));
	outFields->push(HX_CSTRING("static_tcoordlist"));
	outFields->push(HX_CSTRING("static_colorlist"));
	outFields->push(HX_CSTRING("static_normallist"));
	outFields->push(HX_CSTRING("vert_floats"));
	outFields->push(HX_CSTRING("tcoord_floats"));
	outFields->push(HX_CSTRING("color_floats"));
	outFields->push(HX_CSTRING("normal_floats"));
	outFields->push(HX_CSTRING("static_vert_floats"));
	outFields->push(HX_CSTRING("static_tcoord_floats"));
	outFields->push(HX_CSTRING("static_color_floats"));
	outFields->push(HX_CSTRING("static_normal_floats"));
	outFields->push(HX_CSTRING("buffer_count"));
	outFields->push(HX_CSTRING("buffer_index"));
	outFields->push(HX_CSTRING("max_verts"));
	outFields->push(HX_CSTRING("max_floats"));
	outFields->push(HX_CSTRING("vert_count"));
	outFields->push(HX_CSTRING("vertexBuffers"));
	outFields->push(HX_CSTRING("tcoordBuffers"));
	outFields->push(HX_CSTRING("vcolorBuffers"));
	outFields->push(HX_CSTRING("projectionmatrix_attribute"));
	outFields->push(HX_CSTRING("modelviewmatrix_attribute"));
	outFields->push(HX_CSTRING("vert_attribute"));
	outFields->push(HX_CSTRING("tcoord_attribute"));
	outFields->push(HX_CSTRING("color_attribute"));
	outFields->push(HX_CSTRING("tex0_attribute"));
	outFields->push(HX_CSTRING("tex1_attribute"));
	outFields->push(HX_CSTRING("tex2_attribute"));
	outFields->push(HX_CSTRING("tex3_attribute"));
	outFields->push(HX_CSTRING("tex4_attribute"));
	outFields->push(HX_CSTRING("tex5_attribute"));
	outFields->push(HX_CSTRING("tex6_attribute"));
	outFields->push(HX_CSTRING("tex7_attribute"));
	outFields->push(HX_CSTRING("renderer"));
	outFields->push(HX_CSTRING("view"));
	outFields->push(HX_CSTRING("draw_calls"));
	outFields->push(HX_CSTRING("dynamic_batched_count"));
	outFields->push(HX_CSTRING("static_batched_count"));
	outFields->push(HX_CSTRING("visible_count"));
	outFields->push(HX_CSTRING("log"));
	outFields->push(HX_CSTRING("name"));
	outFields->push(HX_CSTRING("sequence"));
	outFields->push(HX_CSTRING("state"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("_sequence_key"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(Batcher_obj,id),HX_CSTRING("id")},
	{hx::fsInt,(int)offsetof(Batcher_obj,layer),HX_CSTRING("layer")},
	{hx::fsBool,(int)offsetof(Batcher_obj,enabled),HX_CSTRING("enabled")},
	{hx::fsObject /*::luxe::structural::BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry*/ ,(int)offsetof(Batcher_obj,geometry),HX_CSTRING("geometry")},
	{hx::fsObject /*::haxe::ds::IntMap*/ ,(int)offsetof(Batcher_obj,groups),HX_CSTRING("groups")},
	{hx::fsBool,(int)offsetof(Batcher_obj,tree_changed),HX_CSTRING("tree_changed")},
	{hx::fsObject /*::snow::platform::native::utils::Float32Array*/ ,(int)offsetof(Batcher_obj,vertlist),HX_CSTRING("vertlist")},
	{hx::fsObject /*::snow::platform::native::utils::Float32Array*/ ,(int)offsetof(Batcher_obj,tcoordlist),HX_CSTRING("tcoordlist")},
	{hx::fsObject /*::snow::platform::native::utils::Float32Array*/ ,(int)offsetof(Batcher_obj,colorlist),HX_CSTRING("colorlist")},
	{hx::fsObject /*::snow::platform::native::utils::Float32Array*/ ,(int)offsetof(Batcher_obj,normallist),HX_CSTRING("normallist")},
	{hx::fsObject /*::snow::platform::native::utils::Float32Array*/ ,(int)offsetof(Batcher_obj,static_vertlist),HX_CSTRING("static_vertlist")},
	{hx::fsObject /*::snow::platform::native::utils::Float32Array*/ ,(int)offsetof(Batcher_obj,static_tcoordlist),HX_CSTRING("static_tcoordlist")},
	{hx::fsObject /*::snow::platform::native::utils::Float32Array*/ ,(int)offsetof(Batcher_obj,static_colorlist),HX_CSTRING("static_colorlist")},
	{hx::fsObject /*::snow::platform::native::utils::Float32Array*/ ,(int)offsetof(Batcher_obj,static_normallist),HX_CSTRING("static_normallist")},
	{hx::fsInt,(int)offsetof(Batcher_obj,vert_floats),HX_CSTRING("vert_floats")},
	{hx::fsInt,(int)offsetof(Batcher_obj,tcoord_floats),HX_CSTRING("tcoord_floats")},
	{hx::fsInt,(int)offsetof(Batcher_obj,color_floats),HX_CSTRING("color_floats")},
	{hx::fsInt,(int)offsetof(Batcher_obj,normal_floats),HX_CSTRING("normal_floats")},
	{hx::fsInt,(int)offsetof(Batcher_obj,static_vert_floats),HX_CSTRING("static_vert_floats")},
	{hx::fsInt,(int)offsetof(Batcher_obj,static_tcoord_floats),HX_CSTRING("static_tcoord_floats")},
	{hx::fsInt,(int)offsetof(Batcher_obj,static_color_floats),HX_CSTRING("static_color_floats")},
	{hx::fsInt,(int)offsetof(Batcher_obj,static_normal_floats),HX_CSTRING("static_normal_floats")},
	{hx::fsInt,(int)offsetof(Batcher_obj,buffer_count),HX_CSTRING("buffer_count")},
	{hx::fsInt,(int)offsetof(Batcher_obj,buffer_index),HX_CSTRING("buffer_index")},
	{hx::fsInt,(int)offsetof(Batcher_obj,max_verts),HX_CSTRING("max_verts")},
	{hx::fsInt,(int)offsetof(Batcher_obj,max_floats),HX_CSTRING("max_floats")},
	{hx::fsInt,(int)offsetof(Batcher_obj,vert_count),HX_CSTRING("vert_count")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Batcher_obj,vertexBuffers),HX_CSTRING("vertexBuffers")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Batcher_obj,tcoordBuffers),HX_CSTRING("tcoordBuffers")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Batcher_obj,vcolorBuffers),HX_CSTRING("vcolorBuffers")},
	{hx::fsInt,(int)offsetof(Batcher_obj,projectionmatrix_attribute),HX_CSTRING("projectionmatrix_attribute")},
	{hx::fsInt,(int)offsetof(Batcher_obj,modelviewmatrix_attribute),HX_CSTRING("modelviewmatrix_attribute")},
	{hx::fsInt,(int)offsetof(Batcher_obj,vert_attribute),HX_CSTRING("vert_attribute")},
	{hx::fsInt,(int)offsetof(Batcher_obj,tcoord_attribute),HX_CSTRING("tcoord_attribute")},
	{hx::fsInt,(int)offsetof(Batcher_obj,color_attribute),HX_CSTRING("color_attribute")},
	{hx::fsInt,(int)offsetof(Batcher_obj,tex0_attribute),HX_CSTRING("tex0_attribute")},
	{hx::fsInt,(int)offsetof(Batcher_obj,tex1_attribute),HX_CSTRING("tex1_attribute")},
	{hx::fsInt,(int)offsetof(Batcher_obj,tex2_attribute),HX_CSTRING("tex2_attribute")},
	{hx::fsInt,(int)offsetof(Batcher_obj,tex3_attribute),HX_CSTRING("tex3_attribute")},
	{hx::fsInt,(int)offsetof(Batcher_obj,tex4_attribute),HX_CSTRING("tex4_attribute")},
	{hx::fsInt,(int)offsetof(Batcher_obj,tex5_attribute),HX_CSTRING("tex5_attribute")},
	{hx::fsInt,(int)offsetof(Batcher_obj,tex6_attribute),HX_CSTRING("tex6_attribute")},
	{hx::fsInt,(int)offsetof(Batcher_obj,tex7_attribute),HX_CSTRING("tex7_attribute")},
	{hx::fsObject /*::phoenix::Renderer*/ ,(int)offsetof(Batcher_obj,renderer),HX_CSTRING("renderer")},
	{hx::fsObject /*::phoenix::Camera*/ ,(int)offsetof(Batcher_obj,view),HX_CSTRING("view")},
	{hx::fsInt,(int)offsetof(Batcher_obj,draw_calls),HX_CSTRING("draw_calls")},
	{hx::fsInt,(int)offsetof(Batcher_obj,dynamic_batched_count),HX_CSTRING("dynamic_batched_count")},
	{hx::fsInt,(int)offsetof(Batcher_obj,static_batched_count),HX_CSTRING("static_batched_count")},
	{hx::fsInt,(int)offsetof(Batcher_obj,visible_count),HX_CSTRING("visible_count")},
	{hx::fsBool,(int)offsetof(Batcher_obj,log),HX_CSTRING("log")},
	{hx::fsString,(int)offsetof(Batcher_obj,name),HX_CSTRING("name")},
	{hx::fsInt,(int)offsetof(Batcher_obj,sequence),HX_CSTRING("sequence")},
	{hx::fsObject /*::phoenix::BatchState*/ ,(int)offsetof(Batcher_obj,state),HX_CSTRING("state")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("id"),
	HX_CSTRING("layer"),
	HX_CSTRING("enabled"),
	HX_CSTRING("geometry"),
	HX_CSTRING("groups"),
	HX_CSTRING("tree_changed"),
	HX_CSTRING("vertlist"),
	HX_CSTRING("tcoordlist"),
	HX_CSTRING("colorlist"),
	HX_CSTRING("normallist"),
	HX_CSTRING("static_vertlist"),
	HX_CSTRING("static_tcoordlist"),
	HX_CSTRING("static_colorlist"),
	HX_CSTRING("static_normallist"),
	HX_CSTRING("vert_floats"),
	HX_CSTRING("tcoord_floats"),
	HX_CSTRING("color_floats"),
	HX_CSTRING("normal_floats"),
	HX_CSTRING("static_vert_floats"),
	HX_CSTRING("static_tcoord_floats"),
	HX_CSTRING("static_color_floats"),
	HX_CSTRING("static_normal_floats"),
	HX_CSTRING("buffer_count"),
	HX_CSTRING("buffer_index"),
	HX_CSTRING("max_verts"),
	HX_CSTRING("max_floats"),
	HX_CSTRING("vert_count"),
	HX_CSTRING("vertexBuffers"),
	HX_CSTRING("tcoordBuffers"),
	HX_CSTRING("vcolorBuffers"),
	HX_CSTRING("projectionmatrix_attribute"),
	HX_CSTRING("modelviewmatrix_attribute"),
	HX_CSTRING("vert_attribute"),
	HX_CSTRING("tcoord_attribute"),
	HX_CSTRING("color_attribute"),
	HX_CSTRING("tex0_attribute"),
	HX_CSTRING("tex1_attribute"),
	HX_CSTRING("tex2_attribute"),
	HX_CSTRING("tex3_attribute"),
	HX_CSTRING("tex4_attribute"),
	HX_CSTRING("tex5_attribute"),
	HX_CSTRING("tex6_attribute"),
	HX_CSTRING("tex7_attribute"),
	HX_CSTRING("renderer"),
	HX_CSTRING("view"),
	HX_CSTRING("draw_calls"),
	HX_CSTRING("dynamic_batched_count"),
	HX_CSTRING("static_batched_count"),
	HX_CSTRING("visible_count"),
	HX_CSTRING("log"),
	HX_CSTRING("name"),
	HX_CSTRING("sequence"),
	HX_CSTRING("set_layer"),
	HX_CSTRING("toString"),
	HX_CSTRING("compare"),
	HX_CSTRING("add_group"),
	HX_CSTRING("compare_rule_to_string"),
	HX_CSTRING("compare_rule"),
	HX_CSTRING("geometry_compare"),
	HX_CSTRING("list_geometry"),
	HX_CSTRING("add"),
	HX_CSTRING("empty"),
	HX_CSTRING("remove"),
	HX_CSTRING("shader_activate"),
	HX_CSTRING("state"),
	HX_CSTRING("batch"),
	HX_CSTRING("draw"),
	HX_CSTRING("submit_static_geometry"),
	HX_CSTRING("submit_current_vertex_list"),
	HX_CSTRING("geometry_batch"),
	HX_CSTRING("geometry_batch_static"),
	HX_CSTRING("_enable_attributes"),
	HX_CSTRING("_disable_attributes"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Batcher_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Batcher_obj::_sequence_key,"_sequence_key");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Batcher_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Batcher_obj::_sequence_key,"_sequence_key");
};

#endif

Class Batcher_obj::__mClass;

void Batcher_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("phoenix.Batcher"), hx::TCanCast< Batcher_obj> ,sStaticFields,sMemberFields,
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

void Batcher_obj::__boot()
{
	_sequence_key= (int)-1;
}

} // end namespace phoenix
