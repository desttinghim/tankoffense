#include <hxcpp.h>

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
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_luxe_resource_Resource
#include <luxe/resource/Resource.h>
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
#ifndef INCLUDED_phoenix_geometry_GeometryState
#include <phoenix/geometry/GeometryState.h>
#endif
#ifndef INCLUDED_snow_platform_native_render_opengl_GL
#include <snow/platform/native/render/opengl/GL.h>
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
namespace phoenix{

Void BatchState_obj::__construct(::phoenix::Batcher _r)
{
HX_STACK_FRAME("phoenix.BatchState","new",0x4a680688,"phoenix.BatchState.new","phoenix/BatchState.hx",11,0xe3277547)
HX_STACK_THIS(this)
HX_STACK_ARG(_r,"_r")
{
	HX_STACK_LINE(24)
	this->log = false;
	HX_STACK_LINE(19)
	this->last_group = (int)-1;
	HX_STACK_LINE(27)
	this->batcher = _r;
	HX_STACK_LINE(28)
	::phoenix::geometry::GeometryState _g = ::phoenix::geometry::GeometryState_obj::__new();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(28)
	this->geom_state = _g;
	HX_STACK_LINE(29)
	::phoenix::geometry::GeometryState _g1 = ::phoenix::geometry::GeometryState_obj::__new();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(29)
	this->last_geom_state = _g1;
}
;
	return null();
}

//BatchState_obj::~BatchState_obj() { }

Dynamic BatchState_obj::__CreateEmpty() { return  new BatchState_obj; }
hx::ObjectPtr< BatchState_obj > BatchState_obj::__new(::phoenix::Batcher _r)
{  hx::ObjectPtr< BatchState_obj > result = new BatchState_obj();
	result->__construct(_r);
	return result;}

Dynamic BatchState_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< BatchState_obj > result = new BatchState_obj();
	result->__construct(inArgs[0]);
	return result;}

::phoenix::Shader BatchState_obj::active_shader( ){
	HX_STACK_FRAME("phoenix.BatchState","active_shader",0xae846be6,"phoenix.BatchState.active_shader","phoenix/BatchState.hx",33,0xe3277547)
	HX_STACK_THIS(this)
	HX_STACK_LINE(33)
	if (((this->geom_state->shader != null()))){
		HX_STACK_LINE(34)
		return this->geom_state->shader;
	}
	else{
		HX_STACK_LINE(36)
		if (((this->geom_state->texture != null()))){
			HX_STACK_LINE(37)
			return this->batcher->renderer->shaders->__Field(HX_CSTRING("textured"),true)->__Field(HX_CSTRING("shader"),true);
		}
		else{
			HX_STACK_LINE(39)
			return this->batcher->renderer->shaders->__Field(HX_CSTRING("plain"),true)->__Field(HX_CSTRING("shader"),true);
		}
	}
	HX_STACK_LINE(33)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(BatchState_obj,active_shader,return )

Void BatchState_obj::activate( ::phoenix::Batcher batcher){
{
		HX_STACK_FRAME("phoenix.BatchState","activate",0xd6da948b,"phoenix.BatchState.activate","phoenix/BatchState.hx",44,0xe3277547)
		HX_STACK_THIS(this)
		HX_STACK_ARG(batcher,"batcher")
		HX_STACK_LINE(47)
		if ((this->geom_state->dirty)){
			HX_STACK_LINE(49)
			if (((this->geom_state->texture != null()))){
				HX_STACK_LINE(51)
				if (((this->last_texture_id == null()))){
				}
				HX_STACK_LINE(55)
				if (((this->last_texture_id != this->geom_state->texture->id))){
					HX_STACK_LINE(57)
					this->last_texture_id = this->geom_state->texture->id;
					HX_STACK_LINE(58)
					if ((this->geom_state->texture->loaded)){
						HX_STACK_LINE(59)
						this->geom_state->texture->bind();
						HX_STACK_LINE(60)
						this->geom_state->texture->activate(batcher->tex0_attribute);
					}
				}
			}
			else{
				HX_STACK_LINE(66)
				::Luxe_obj::renderer->state->bindTexture2D(null());
				HX_STACK_LINE(67)
				this->last_texture_id = null();
			}
			HX_STACK_LINE(71)
			if (((this->geom_state->shader != null()))){
				HX_STACK_LINE(73)
				if (((this->last_shader_id != this->geom_state->shader->program))){
					HX_STACK_LINE(75)
					batcher->shader_activate(this->geom_state->shader);
					HX_STACK_LINE(76)
					this->last_shader_id = this->geom_state->shader->program;
				}
			}
			else{
				HX_STACK_LINE(82)
				if (((this->geom_state->texture != null()))){
					HX_STACK_LINE(84)
					batcher->shader_activate(batcher->renderer->shaders->__Field(HX_CSTRING("textured"),true)->__Field(HX_CSTRING("shader"),true));
					HX_STACK_LINE(85)
					this->last_shader_id = batcher->renderer->shaders->__Field(HX_CSTRING("textured"),true)->__Field(HX_CSTRING("shader"),true)->__Field(HX_CSTRING("program"),true);
				}
				else{
					HX_STACK_LINE(87)
					batcher->shader_activate(batcher->renderer->shaders->__Field(HX_CSTRING("plain"),true)->__Field(HX_CSTRING("shader"),true));
					HX_STACK_LINE(88)
					this->last_shader_id = batcher->renderer->shaders->__Field(HX_CSTRING("plain"),true)->__Field(HX_CSTRING("shader"),true)->__Field(HX_CSTRING("program"),true);
				}
			}
			HX_STACK_LINE(95)
			if (((this->geom_state->group != this->last_group))){
				HX_STACK_LINE(99)
				Array< ::Dynamic > previous = batcher->groups->get(this->last_group);		HX_STACK_VAR(previous,"previous");
				HX_STACK_LINE(100)
				if (((previous != null()))){
					HX_STACK_LINE(102)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(102)
					while((true)){
						HX_STACK_LINE(102)
						if ((!(((_g < previous->length))))){
							HX_STACK_LINE(102)
							break;
						}
						HX_STACK_LINE(102)
						::phoenix::BatchGroup _batch_group = previous->__get(_g).StaticCast< ::phoenix::BatchGroup >();		HX_STACK_VAR(_batch_group,"_batch_group");
						HX_STACK_LINE(102)
						++(_g);
						HX_STACK_LINE(103)
						if (((_batch_group->post_render != null()))){
							HX_STACK_LINE(103)
							_batch_group->post_render(batcher);
						}
					}
				}
				HX_STACK_LINE(109)
				Array< ::Dynamic > current = batcher->groups->get(this->geom_state->group);		HX_STACK_VAR(current,"current");
				HX_STACK_LINE(110)
				if (((current != null()))){
					HX_STACK_LINE(112)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(112)
					while((true)){
						HX_STACK_LINE(112)
						if ((!(((_g < current->length))))){
							HX_STACK_LINE(112)
							break;
						}
						HX_STACK_LINE(112)
						::phoenix::BatchGroup _batch_group = current->__get(_g).StaticCast< ::phoenix::BatchGroup >();		HX_STACK_VAR(_batch_group,"_batch_group");
						HX_STACK_LINE(112)
						++(_g);
						HX_STACK_LINE(113)
						if (((_batch_group->pre_render != null()))){
							HX_STACK_LINE(113)
							_batch_group->pre_render(batcher);
						}
					}
				}
				HX_STACK_LINE(117)
				this->last_group = this->geom_state->group;
			}
		}
		HX_STACK_LINE(125)
		if ((this->geom_state->clip)){
			HX_STACK_LINE(127)
			if ((!(this->is_clipping))){
				HX_STACK_LINE(128)
				::snow::platform::native::render::opengl::GL_obj::enable((int)3089);
				HX_STACK_LINE(129)
				this->is_clipping = true;
			}
			HX_STACK_LINE(133)
			if (((this->clip_rect != null()))){
				HX_STACK_LINE(135)
				if ((!(this->clip_rect->equal(this->last_clip_rect)))){
					HX_STACK_LINE(138)
					Float _y = (batcher->view->get_viewport()->h - ((this->clip_rect->y + this->clip_rect->h)));		HX_STACK_VAR(_y,"_y");
					HX_STACK_LINE(140)
					int _g = ::Std_obj::_int(this->clip_rect->x);		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(140)
					int _g1 = ::Std_obj::_int(_y);		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(140)
					int _g2 = ::Std_obj::_int(this->clip_rect->w);		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(140)
					int _g3 = ::Std_obj::_int(this->clip_rect->h);		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(140)
					::snow::platform::native::render::opengl::GL_obj::scissor(_g,_g1,_g2,_g3);
				}
			}
		}
		else{
			HX_STACK_LINE(148)
			if ((this->is_clipping)){
				HX_STACK_LINE(149)
				::snow::platform::native::render::opengl::GL_obj::disable((int)3089);
				HX_STACK_LINE(150)
				this->is_clipping = false;
			}
		}
		HX_STACK_LINE(156)
		this->geom_state->clean();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BatchState_obj,activate,(void))

Void BatchState_obj::deactivate( ::phoenix::Batcher batcher){
{
		HX_STACK_FRAME("phoenix.BatchState","deactivate",0xb061bb0c,"phoenix.BatchState.deactivate","phoenix/BatchState.hx",159,0xe3277547)
		HX_STACK_THIS(this)
		HX_STACK_ARG(batcher,"batcher")
		HX_STACK_LINE(161)
		if (((this->last_texture_id != null()))){
			HX_STACK_LINE(163)
			::Luxe_obj::renderer->state->bindTexture2D(null());
		}
		HX_STACK_LINE(168)
		::Luxe_obj::renderer->state->useProgram(null());
		HX_STACK_LINE(170)
		Array< ::Dynamic > previous = batcher->groups->get(this->last_group);		HX_STACK_VAR(previous,"previous");
		HX_STACK_LINE(171)
		if (((previous != null()))){
			HX_STACK_LINE(173)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(173)
			while((true)){
				HX_STACK_LINE(173)
				if ((!(((_g < previous->length))))){
					HX_STACK_LINE(173)
					break;
				}
				HX_STACK_LINE(173)
				::phoenix::BatchGroup _batch_group = previous->__get(_g).StaticCast< ::phoenix::BatchGroup >();		HX_STACK_VAR(_batch_group,"_batch_group");
				HX_STACK_LINE(173)
				++(_g);
				HX_STACK_LINE(174)
				if (((_batch_group->post_render != null()))){
					HX_STACK_LINE(174)
					_batch_group->post_render(batcher);
				}
			}
		}
		HX_STACK_LINE(178)
		if ((this->is_clipping)){
			HX_STACK_LINE(178)
			::snow::platform::native::render::opengl::GL_obj::disable((int)3089);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BatchState_obj,deactivate,(void))

bool BatchState_obj::update( ::phoenix::geometry::Geometry geom){
	HX_STACK_FRAME("phoenix.BatchState","update",0x8d6798e1,"phoenix.BatchState.update","phoenix/BatchState.hx",181,0xe3277547)
	HX_STACK_THIS(this)
	HX_STACK_ARG(geom,"geom")
	HX_STACK_LINE(183)
	this->geom_state->clone_onto(this->last_geom_state);
	HX_STACK_LINE(184)
	this->geom_state->update(geom->state);
	HX_STACK_LINE(186)
	if ((this->geom_state->clip)){
		HX_STACK_LINE(187)
		this->last_clip_rect = this->clip_rect;
		HX_STACK_LINE(188)
		::phoenix::Rectangle _g = geom->get_clip_rect();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(188)
		this->clip_rect = _g;
	}
	HX_STACK_LINE(191)
	return (bool(this->geom_state->dirty) || bool((this->last_clip_rect != this->clip_rect)));
}


HX_DEFINE_DYNAMIC_FUNC1(BatchState_obj,update,return )

Void BatchState_obj::str( ){
{
		HX_STACK_FRAME("phoenix.BatchState","str",0x4a6bded9,"phoenix.BatchState.str","phoenix/BatchState.hx",196,0xe3277547)
		HX_STACK_THIS(this)
		HX_STACK_LINE(198)
		if ((!(this->log))){
			HX_STACK_LINE(198)
			return null();
		}
		HX_STACK_LINE(200)
		::haxe::Log_obj::trace(HX_CSTRING("\t+ BATCHSTATE LAST "),hx::SourceInfo(HX_CSTRING("BatchState.hx"),200,HX_CSTRING("phoenix.BatchState"),HX_CSTRING("str")));
		HX_STACK_LINE(201)
		::haxe::Log_obj::trace((HX_CSTRING("\t\tdepth - ") + this->last_geom_state->depth),hx::SourceInfo(HX_CSTRING("BatchState.hx"),201,HX_CSTRING("phoenix.BatchState"),HX_CSTRING("str")));
		HX_STACK_LINE(202)
		::haxe::Log_obj::trace((HX_CSTRING("\t\tgroup - ") + this->last_geom_state->group),hx::SourceInfo(HX_CSTRING("BatchState.hx"),202,HX_CSTRING("phoenix.BatchState"),HX_CSTRING("str")));
		HX_STACK_LINE(203)
		::haxe::Log_obj::trace((HX_CSTRING("\t\ttexture - ") + ((  (((this->last_geom_state->texture == null()))) ? ::String(HX_CSTRING("null")) : ::String(this->last_geom_state->texture->id) ))),hx::SourceInfo(HX_CSTRING("BatchState.hx"),203,HX_CSTRING("phoenix.BatchState"),HX_CSTRING("str")));
		HX_STACK_LINE(204)
		if (((this->last_geom_state->texture != null()))){
			HX_STACK_LINE(205)
			::String _g = ::Std_obj::string(this->last_geom_state->texture->texture);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(205)
			::String _g1 = (HX_CSTRING("\t\t\t ") + _g);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(205)
			::haxe::Log_obj::trace(_g1,hx::SourceInfo(HX_CSTRING("BatchState.hx"),205,HX_CSTRING("phoenix.BatchState"),HX_CSTRING("str")));
		}
		HX_STACK_LINE(207)
		::haxe::Log_obj::trace((HX_CSTRING("\t\tshader - ") + ((  (((this->last_geom_state->shader == null()))) ? ::String(HX_CSTRING("null")) : ::String(this->last_geom_state->shader->id) ))),hx::SourceInfo(HX_CSTRING("BatchState.hx"),207,HX_CSTRING("phoenix.BatchState"),HX_CSTRING("str")));
		HX_STACK_LINE(208)
		::String _g2 = ::Std_obj::string(this->last_geom_state->primitive_type);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(208)
		::String _g3 = (HX_CSTRING("\t\tprimitive_type - ") + _g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(208)
		::haxe::Log_obj::trace(_g3,hx::SourceInfo(HX_CSTRING("BatchState.hx"),208,HX_CSTRING("phoenix.BatchState"),HX_CSTRING("str")));
		HX_STACK_LINE(209)
		::String _g4 = ::Std_obj::string(this->last_geom_state->clip);		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(209)
		::String _g5 = (HX_CSTRING("\t\tclip - ") + _g4);		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(209)
		::haxe::Log_obj::trace(_g5,hx::SourceInfo(HX_CSTRING("BatchState.hx"),209,HX_CSTRING("phoenix.BatchState"),HX_CSTRING("str")));
		HX_STACK_LINE(210)
		::haxe::Log_obj::trace(HX_CSTRING("\t- BATCHSTATE LAST"),hx::SourceInfo(HX_CSTRING("BatchState.hx"),210,HX_CSTRING("phoenix.BatchState"),HX_CSTRING("str")));
		HX_STACK_LINE(212)
		::haxe::Log_obj::trace(HX_CSTRING("\t+ BATCHSTATE STATE"),hx::SourceInfo(HX_CSTRING("BatchState.hx"),212,HX_CSTRING("phoenix.BatchState"),HX_CSTRING("str")));
		HX_STACK_LINE(213)
		::haxe::Log_obj::trace((HX_CSTRING("\t\tdepth - ") + this->geom_state->depth),hx::SourceInfo(HX_CSTRING("BatchState.hx"),213,HX_CSTRING("phoenix.BatchState"),HX_CSTRING("str")));
		HX_STACK_LINE(214)
		::haxe::Log_obj::trace((HX_CSTRING("\t\tgroup - ") + this->geom_state->group),hx::SourceInfo(HX_CSTRING("BatchState.hx"),214,HX_CSTRING("phoenix.BatchState"),HX_CSTRING("str")));
		HX_STACK_LINE(215)
		::haxe::Log_obj::trace((HX_CSTRING("\t\ttexture - ") + ((  (((this->geom_state->texture == null()))) ? ::String(HX_CSTRING("null")) : ::String(this->geom_state->texture->id) ))),hx::SourceInfo(HX_CSTRING("BatchState.hx"),215,HX_CSTRING("phoenix.BatchState"),HX_CSTRING("str")));
		HX_STACK_LINE(216)
		if (((this->geom_state->texture != null()))){
			HX_STACK_LINE(217)
			::String _g6 = ::Std_obj::string(this->geom_state->texture->texture);		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(217)
			::String _g7 = (HX_CSTRING("\t\t\t ") + _g6);		HX_STACK_VAR(_g7,"_g7");
			HX_STACK_LINE(217)
			::haxe::Log_obj::trace(_g7,hx::SourceInfo(HX_CSTRING("BatchState.hx"),217,HX_CSTRING("phoenix.BatchState"),HX_CSTRING("str")));
		}
		HX_STACK_LINE(219)
		::haxe::Log_obj::trace((HX_CSTRING("\t\tshader - ") + ((  (((this->geom_state->shader == null()))) ? ::String(HX_CSTRING("null")) : ::String(this->geom_state->shader->id) ))),hx::SourceInfo(HX_CSTRING("BatchState.hx"),219,HX_CSTRING("phoenix.BatchState"),HX_CSTRING("str")));
		HX_STACK_LINE(220)
		::String _g8 = ::Std_obj::string(this->geom_state->primitive_type);		HX_STACK_VAR(_g8,"_g8");
		HX_STACK_LINE(220)
		::String _g9 = (HX_CSTRING("\t\tprimitive_type - ") + _g8);		HX_STACK_VAR(_g9,"_g9");
		HX_STACK_LINE(220)
		::haxe::Log_obj::trace(_g9,hx::SourceInfo(HX_CSTRING("BatchState.hx"),220,HX_CSTRING("phoenix.BatchState"),HX_CSTRING("str")));
		HX_STACK_LINE(221)
		::String _g10 = ::Std_obj::string(this->geom_state->clip);		HX_STACK_VAR(_g10,"_g10");
		HX_STACK_LINE(221)
		::String _g11 = (HX_CSTRING("\t\tclip - ") + _g10);		HX_STACK_VAR(_g11,"_g11");
		HX_STACK_LINE(221)
		::haxe::Log_obj::trace(_g11,hx::SourceInfo(HX_CSTRING("BatchState.hx"),221,HX_CSTRING("phoenix.BatchState"),HX_CSTRING("str")));
		HX_STACK_LINE(222)
		::haxe::Log_obj::trace(HX_CSTRING("\t- BATCHSTATE STATE"),hx::SourceInfo(HX_CSTRING("BatchState.hx"),222,HX_CSTRING("phoenix.BatchState"),HX_CSTRING("str")));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(BatchState_obj,str,(void))


BatchState_obj::BatchState_obj()
{
}

void BatchState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BatchState);
	HX_MARK_MEMBER_NAME(batcher,"batcher");
	HX_MARK_MEMBER_NAME(geom_state,"geom_state");
	HX_MARK_MEMBER_NAME(last_geom_state,"last_geom_state");
	HX_MARK_MEMBER_NAME(last_texture_id,"last_texture_id");
	HX_MARK_MEMBER_NAME(last_shader_id,"last_shader_id");
	HX_MARK_MEMBER_NAME(last_group,"last_group");
	HX_MARK_MEMBER_NAME(is_clipping,"is_clipping");
	HX_MARK_MEMBER_NAME(clip_rect,"clip_rect");
	HX_MARK_MEMBER_NAME(last_clip_rect,"last_clip_rect");
	HX_MARK_MEMBER_NAME(log,"log");
	HX_MARK_END_CLASS();
}

void BatchState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(batcher,"batcher");
	HX_VISIT_MEMBER_NAME(geom_state,"geom_state");
	HX_VISIT_MEMBER_NAME(last_geom_state,"last_geom_state");
	HX_VISIT_MEMBER_NAME(last_texture_id,"last_texture_id");
	HX_VISIT_MEMBER_NAME(last_shader_id,"last_shader_id");
	HX_VISIT_MEMBER_NAME(last_group,"last_group");
	HX_VISIT_MEMBER_NAME(is_clipping,"is_clipping");
	HX_VISIT_MEMBER_NAME(clip_rect,"clip_rect");
	HX_VISIT_MEMBER_NAME(last_clip_rect,"last_clip_rect");
	HX_VISIT_MEMBER_NAME(log,"log");
}

Dynamic BatchState_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"log") ) { return log; }
		if (HX_FIELD_EQ(inName,"str") ) { return str_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"batcher") ) { return batcher; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"activate") ) { return activate_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"clip_rect") ) { return clip_rect; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"geom_state") ) { return geom_state; }
		if (HX_FIELD_EQ(inName,"last_group") ) { return last_group; }
		if (HX_FIELD_EQ(inName,"deactivate") ) { return deactivate_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"is_clipping") ) { return is_clipping; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"active_shader") ) { return active_shader_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"last_shader_id") ) { return last_shader_id; }
		if (HX_FIELD_EQ(inName,"last_clip_rect") ) { return last_clip_rect; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"last_geom_state") ) { return last_geom_state; }
		if (HX_FIELD_EQ(inName,"last_texture_id") ) { return last_texture_id; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic BatchState_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"log") ) { log=inValue.Cast< bool >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"batcher") ) { batcher=inValue.Cast< ::phoenix::Batcher >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"clip_rect") ) { clip_rect=inValue.Cast< ::phoenix::Rectangle >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"geom_state") ) { geom_state=inValue.Cast< ::phoenix::geometry::GeometryState >(); return inValue; }
		if (HX_FIELD_EQ(inName,"last_group") ) { last_group=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"is_clipping") ) { is_clipping=inValue.Cast< bool >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"last_shader_id") ) { last_shader_id=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"last_clip_rect") ) { last_clip_rect=inValue.Cast< ::phoenix::Rectangle >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"last_geom_state") ) { last_geom_state=inValue.Cast< ::phoenix::geometry::GeometryState >(); return inValue; }
		if (HX_FIELD_EQ(inName,"last_texture_id") ) { last_texture_id=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void BatchState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("batcher"));
	outFields->push(HX_CSTRING("geom_state"));
	outFields->push(HX_CSTRING("last_geom_state"));
	outFields->push(HX_CSTRING("last_texture_id"));
	outFields->push(HX_CSTRING("last_shader_id"));
	outFields->push(HX_CSTRING("last_group"));
	outFields->push(HX_CSTRING("is_clipping"));
	outFields->push(HX_CSTRING("clip_rect"));
	outFields->push(HX_CSTRING("last_clip_rect"));
	outFields->push(HX_CSTRING("log"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::phoenix::Batcher*/ ,(int)offsetof(BatchState_obj,batcher),HX_CSTRING("batcher")},
	{hx::fsObject /*::phoenix::geometry::GeometryState*/ ,(int)offsetof(BatchState_obj,geom_state),HX_CSTRING("geom_state")},
	{hx::fsObject /*::phoenix::geometry::GeometryState*/ ,(int)offsetof(BatchState_obj,last_geom_state),HX_CSTRING("last_geom_state")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(BatchState_obj,last_texture_id),HX_CSTRING("last_texture_id")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(BatchState_obj,last_shader_id),HX_CSTRING("last_shader_id")},
	{hx::fsInt,(int)offsetof(BatchState_obj,last_group),HX_CSTRING("last_group")},
	{hx::fsBool,(int)offsetof(BatchState_obj,is_clipping),HX_CSTRING("is_clipping")},
	{hx::fsObject /*::phoenix::Rectangle*/ ,(int)offsetof(BatchState_obj,clip_rect),HX_CSTRING("clip_rect")},
	{hx::fsObject /*::phoenix::Rectangle*/ ,(int)offsetof(BatchState_obj,last_clip_rect),HX_CSTRING("last_clip_rect")},
	{hx::fsBool,(int)offsetof(BatchState_obj,log),HX_CSTRING("log")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("batcher"),
	HX_CSTRING("geom_state"),
	HX_CSTRING("last_geom_state"),
	HX_CSTRING("last_texture_id"),
	HX_CSTRING("last_shader_id"),
	HX_CSTRING("last_group"),
	HX_CSTRING("is_clipping"),
	HX_CSTRING("clip_rect"),
	HX_CSTRING("last_clip_rect"),
	HX_CSTRING("log"),
	HX_CSTRING("active_shader"),
	HX_CSTRING("activate"),
	HX_CSTRING("deactivate"),
	HX_CSTRING("update"),
	HX_CSTRING("str"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BatchState_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BatchState_obj::__mClass,"__mClass");
};

#endif

Class BatchState_obj::__mClass;

void BatchState_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("phoenix.BatchState"), hx::TCanCast< BatchState_obj> ,sStaticFields,sMemberFields,
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

void BatchState_obj::__boot()
{
}

} // end namespace phoenix
