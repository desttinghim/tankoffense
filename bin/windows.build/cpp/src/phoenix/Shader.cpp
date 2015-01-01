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
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_luxe_resource_Resource
#include <luxe/resource/Resource.h>
#endif
#ifndef INCLUDED_luxe_resource_ResourceManager
#include <luxe/resource/ResourceManager.h>
#endif
#ifndef INCLUDED_luxe_resource_ResourceType
#include <luxe/resource/ResourceType.h>
#endif
#ifndef INCLUDED_luxe_resource_TextResource
#include <luxe/resource/TextResource.h>
#endif
#ifndef INCLUDED_luxe_utils_Utils
#include <luxe/utils/Utils.h>
#endif
#ifndef INCLUDED_phoenix_Color
#include <phoenix/Color.h>
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
#ifndef INCLUDED_phoenix_Vector
#include <phoenix/Vector.h>
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
#ifndef INCLUDED_snow_platform_native_render_opengl_GLShader
#include <snow/platform/native/render/opengl/GLShader.h>
#endif
namespace phoenix{

Void Shader_obj::__construct(::luxe::resource::ResourceManager _manager)
{
HX_STACK_FRAME("phoenix.Shader","new",0xb939fd36,"phoenix.Shader.new","phoenix/Shader.hx",18,0x14ec92d9)
HX_STACK_THIS(this)
HX_STACK_ARG(_manager,"_manager")
{
	HX_STACK_LINE(36)
	this->normal_attribute = (int)3;
	HX_STACK_LINE(35)
	this->color_attribute = (int)2;
	HX_STACK_LINE(34)
	this->tcoord_attribute = (int)1;
	HX_STACK_LINE(33)
	this->vert_attribute = (int)0;
	HX_STACK_LINE(26)
	this->frag_source_name = HX_CSTRING("");
	HX_STACK_LINE(25)
	this->vertex_source_name = HX_CSTRING("");
	HX_STACK_LINE(24)
	this->frag_source = HX_CSTRING("");
	HX_STACK_LINE(23)
	this->vertex_source = HX_CSTRING("");
	HX_STACK_LINE(21)
	this->log = HX_CSTRING("");
	HX_STACK_LINE(20)
	this->errors = HX_CSTRING("");
	HX_STACK_LINE(55)
	super::__construct(_manager,::luxe::resource::ResourceType_obj::shader,null());
	HX_STACK_LINE(56)
	::haxe::ds::StringMap _g = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(56)
	this->uniforms = _g;
	HX_STACK_LINE(57)
	::haxe::ds::StringMap _g1 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(57)
	this->uniform_textures = _g1;
}
;
	return null();
}

//Shader_obj::~Shader_obj() { }

Dynamic Shader_obj::__CreateEmpty() { return  new Shader_obj; }
hx::ObjectPtr< Shader_obj > Shader_obj::__new(::luxe::resource::ResourceManager _manager)
{  hx::ObjectPtr< Shader_obj > result = new Shader_obj();
	result->__construct(_manager);
	return result;}

Dynamic Shader_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Shader_obj > result = new Shader_obj();
	result->__construct(inArgs[0]);
	return result;}

Void Shader_obj::activate( ){
{
		HX_STACK_FRAME("phoenix.Shader","activate",0x6f45a71d,"phoenix.Shader.activate","phoenix/Shader.hx",62,0x14ec92d9)
		HX_STACK_THIS(this)
		HX_STACK_LINE(62)
		if (((this->program != null()))){
			HX_STACK_LINE(63)
			::Luxe_obj::renderer->state->useProgram(this->program);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Shader_obj,activate,(void))

Void Shader_obj::deactivate( ){
{
		HX_STACK_FRAME("phoenix.Shader","deactivate",0x87a4161e,"phoenix.Shader.deactivate","phoenix/Shader.hx",68,0x14ec92d9)
		HX_STACK_THIS(this)
		HX_STACK_LINE(68)
		::Luxe_obj::renderer->state->useProgram(null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Shader_obj,deactivate,(void))

::phoenix::Shader Shader_obj::clone( ){
	HX_STACK_FRAME("phoenix.Shader","clone",0xa8cea1b3,"phoenix.Shader.clone","phoenix/Shader.hx",72,0x14ec92d9)
	HX_STACK_THIS(this)
	HX_STACK_LINE(74)
	::phoenix::Shader _clone = ::phoenix::Shader_obj::__new(this->manager);		HX_STACK_VAR(_clone,"_clone");
	HX_STACK_LINE(76)
	::String _g = ::Luxe_obj::utils->uniqueid(null());		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(76)
	::String _g1 = ((this->id + HX_CSTRING(".clone.")) + _g);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(76)
	_clone->id = _g1;
	HX_STACK_LINE(77)
	_clone->from_string(this->vertex_source,this->frag_source,this->vertex_source_name,this->frag_source_name,false);
	HX_STACK_LINE(79)
	return _clone;
}


HX_DEFINE_DYNAMIC_FUNC0(Shader_obj,clone,return )

Void Shader_obj::set_int( ::String _name,int _value){
{
		HX_STACK_FRAME("phoenix.Shader","set_int",0x16f2b668,"phoenix.Shader.set_int","phoenix/Shader.hx",84,0x14ec92d9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_name,"_name")
		HX_STACK_ARG(_value,"_value")
		HX_STACK_LINE(84)
		if ((this->uniforms->exists(_name))){
			HX_STACK_LINE(85)
			Dynamic _uniform = this->uniforms->get(_name);		HX_STACK_VAR(_uniform,"_uniform");
			HX_STACK_LINE(86)
			_uniform->__FieldRef(HX_CSTRING("value")) = _value;
		}
		else{
			HX_STACK_LINE(93)
			int _g = ::snow::platform::native::render::opengl::GL_obj::getUniformLocation(this->program,_name);		HX_STACK_VAR(_g,"_g");
			struct _Function_2_1{
				inline static Dynamic Block( ::String &_name,int &_value,int &_g){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Shader.hx",89,0x14ec92d9)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_CSTRING("name") , _name,false);
						__result->Add(HX_CSTRING("value") , _value,false);
						__result->Add(HX_CSTRING("type") , (int)1,false);
						__result->Add(HX_CSTRING("location") , _g,false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(89)
			Dynamic _uniform = _Function_2_1::Block(_name,_value,_g);		HX_STACK_VAR(_uniform,"_uniform");
			HX_STACK_LINE(96)
			this->uniforms->set(_name,_uniform);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Shader_obj,set_int,(void))

Void Shader_obj::set_float( ::String _name,Float _value){
{
		HX_STACK_FRAME("phoenix.Shader","set_float",0x06517f55,"phoenix.Shader.set_float","phoenix/Shader.hx",100,0x14ec92d9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_name,"_name")
		HX_STACK_ARG(_value,"_value")
		HX_STACK_LINE(100)
		if ((this->uniforms->exists(_name))){
			HX_STACK_LINE(101)
			Dynamic _uniform = this->uniforms->get(_name);		HX_STACK_VAR(_uniform,"_uniform");
			HX_STACK_LINE(102)
			_uniform->__FieldRef(HX_CSTRING("value")) = _value;
		}
		else{
			HX_STACK_LINE(109)
			int _g = ::snow::platform::native::render::opengl::GL_obj::getUniformLocation(this->program,_name);		HX_STACK_VAR(_g,"_g");
			struct _Function_2_1{
				inline static Dynamic Block( ::String &_name,Float &_value,int &_g){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Shader.hx",105,0x14ec92d9)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_CSTRING("name") , _name,false);
						__result->Add(HX_CSTRING("value") , _value,false);
						__result->Add(HX_CSTRING("type") , (int)2,false);
						__result->Add(HX_CSTRING("location") , _g,false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(105)
			Dynamic _uniform = _Function_2_1::Block(_name,_value,_g);		HX_STACK_VAR(_uniform,"_uniform");
			HX_STACK_LINE(112)
			this->uniforms->set(_name,_uniform);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Shader_obj,set_float,(void))

Void Shader_obj::set_vector2( ::String _name,::phoenix::Vector _value){
{
		HX_STACK_FRAME("phoenix.Shader","set_vector2",0x4dc45408,"phoenix.Shader.set_vector2","phoenix/Shader.hx",118,0x14ec92d9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_name,"_name")
		HX_STACK_ARG(_value,"_value")
		HX_STACK_LINE(118)
		if ((this->uniforms->exists(_name))){
			HX_STACK_LINE(120)
			Dynamic _uniform = this->uniforms->get(_name);		HX_STACK_VAR(_uniform,"_uniform");
			HX_STACK_LINE(121)
			_uniform->__FieldRef(HX_CSTRING("value")) = _value;
		}
		else{
			HX_STACK_LINE(129)
			int _g = ::snow::platform::native::render::opengl::GL_obj::getUniformLocation(this->program,_name);		HX_STACK_VAR(_g,"_g");
			struct _Function_2_1{
				inline static Dynamic Block( ::String &_name,::phoenix::Vector &_value,int &_g){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Shader.hx",125,0x14ec92d9)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_CSTRING("name") , _name,false);
						__result->Add(HX_CSTRING("value") , _value,false);
						__result->Add(HX_CSTRING("type") , (int)3,false);
						__result->Add(HX_CSTRING("location") , _g,false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(125)
			Dynamic _uniform = _Function_2_1::Block(_name,_value,_g);		HX_STACK_VAR(_uniform,"_uniform");
			HX_STACK_LINE(132)
			this->uniforms->set(_name,_uniform);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Shader_obj,set_vector2,(void))

Void Shader_obj::set_vector3( ::String _name,::phoenix::Vector _value){
{
		HX_STACK_FRAME("phoenix.Shader","set_vector3",0x4dc45409,"phoenix.Shader.set_vector3","phoenix/Shader.hx",138,0x14ec92d9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_name,"_name")
		HX_STACK_ARG(_value,"_value")
		HX_STACK_LINE(138)
		if ((this->uniforms->exists(_name))){
			HX_STACK_LINE(140)
			Dynamic _uniform = this->uniforms->get(_name);		HX_STACK_VAR(_uniform,"_uniform");
			HX_STACK_LINE(141)
			_uniform->__FieldRef(HX_CSTRING("value")) = _value;
		}
		else{
			HX_STACK_LINE(149)
			int _g = ::snow::platform::native::render::opengl::GL_obj::getUniformLocation(this->program,_name);		HX_STACK_VAR(_g,"_g");
			struct _Function_2_1{
				inline static Dynamic Block( ::String &_name,::phoenix::Vector &_value,int &_g){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Shader.hx",145,0x14ec92d9)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_CSTRING("name") , _name,false);
						__result->Add(HX_CSTRING("value") , _value,false);
						__result->Add(HX_CSTRING("type") , (int)4,false);
						__result->Add(HX_CSTRING("location") , _g,false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(145)
			Dynamic _uniform = _Function_2_1::Block(_name,_value,_g);		HX_STACK_VAR(_uniform,"_uniform");
			HX_STACK_LINE(152)
			this->uniforms->set(_name,_uniform);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Shader_obj,set_vector3,(void))

Void Shader_obj::set_vector4( ::String _name,::phoenix::Vector _value){
{
		HX_STACK_FRAME("phoenix.Shader","set_vector4",0x4dc4540a,"phoenix.Shader.set_vector4","phoenix/Shader.hx",160,0x14ec92d9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_name,"_name")
		HX_STACK_ARG(_value,"_value")
		HX_STACK_LINE(160)
		if ((this->uniforms->exists(_name))){
			HX_STACK_LINE(162)
			Dynamic _uniform = this->uniforms->get(_name);		HX_STACK_VAR(_uniform,"_uniform");
			HX_STACK_LINE(163)
			_uniform->__FieldRef(HX_CSTRING("value")) = _value;
		}
		else{
			HX_STACK_LINE(171)
			int _g = ::snow::platform::native::render::opengl::GL_obj::getUniformLocation(this->program,_name);		HX_STACK_VAR(_g,"_g");
			struct _Function_2_1{
				inline static Dynamic Block( ::String &_name,::phoenix::Vector &_value,int &_g){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Shader.hx",167,0x14ec92d9)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_CSTRING("name") , _name,false);
						__result->Add(HX_CSTRING("value") , _value,false);
						__result->Add(HX_CSTRING("type") , (int)5,false);
						__result->Add(HX_CSTRING("location") , _g,false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(167)
			Dynamic _uniform = _Function_2_1::Block(_name,_value,_g);		HX_STACK_VAR(_uniform,"_uniform");
			HX_STACK_LINE(174)
			this->uniforms->set(_name,_uniform);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Shader_obj,set_vector4,(void))

Void Shader_obj::set_color( ::String _name,::phoenix::Color _value){
{
		HX_STACK_FRAME("phoenix.Shader","set_color",0x4e172b1c,"phoenix.Shader.set_color","phoenix/Shader.hx",182,0x14ec92d9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_name,"_name")
		HX_STACK_ARG(_value,"_value")
		HX_STACK_LINE(182)
		if ((this->uniforms->exists(_name))){
			HX_STACK_LINE(184)
			Dynamic _uniform = this->uniforms->get(_name);		HX_STACK_VAR(_uniform,"_uniform");
			HX_STACK_LINE(185)
			_uniform->__FieldRef(HX_CSTRING("value")) = _value;
		}
		else{
			HX_STACK_LINE(193)
			int _g = ::snow::platform::native::render::opengl::GL_obj::getUniformLocation(this->program,_name);		HX_STACK_VAR(_g,"_g");
			struct _Function_2_1{
				inline static Dynamic Block( ::String &_name,::phoenix::Color &_value,int &_g){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Shader.hx",189,0x14ec92d9)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_CSTRING("name") , _name,false);
						__result->Add(HX_CSTRING("value") , _value,false);
						__result->Add(HX_CSTRING("type") , (int)6,false);
						__result->Add(HX_CSTRING("location") , _g,false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(189)
			Dynamic _uniform = _Function_2_1::Block(_name,_value,_g);		HX_STACK_VAR(_uniform,"_uniform");
			HX_STACK_LINE(196)
			this->uniforms->set(_name,_uniform);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Shader_obj,set_color,(void))

Void Shader_obj::set_texture( ::String _name,::phoenix::Texture _value){
{
		HX_STACK_FRAME("phoenix.Shader","set_texture",0x120822d4,"phoenix.Shader.set_texture","phoenix/Shader.hx",203,0x14ec92d9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_name,"_name")
		HX_STACK_ARG(_value,"_value")
		HX_STACK_LINE(203)
		if ((this->uniforms->exists(_name))){
			HX_STACK_LINE(205)
			Dynamic _uniform = this->uniforms->get(_name);		HX_STACK_VAR(_uniform,"_uniform");
			HX_STACK_LINE(206)
			_uniform->__FieldRef(HX_CSTRING("value")) = _value;
			HX_STACK_LINE(207)
			this->uniform_textures->set(_name,_value);
		}
		else{
			HX_STACK_LINE(214)
			int _g = ::snow::platform::native::render::opengl::GL_obj::getUniformLocation(this->program,_name);		HX_STACK_VAR(_g,"_g");
			struct _Function_2_1{
				inline static Dynamic Block( ::String &_name,::phoenix::Texture &_value,int &_g){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Shader.hx",211,0x14ec92d9)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_CSTRING("name") , _name,false);
						__result->Add(HX_CSTRING("value") , _value,false);
						__result->Add(HX_CSTRING("type") , (int)7,false);
						__result->Add(HX_CSTRING("location") , _g,false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(211)
			Dynamic _uniform = _Function_2_1::Block(_name,_value,_g);		HX_STACK_VAR(_uniform,"_uniform");
			HX_STACK_LINE(217)
			this->uniforms->set(_name,_uniform);
			HX_STACK_LINE(218)
			this->uniform_textures->set(_name,_value);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Shader_obj,set_texture,(void))

::snow::platform::native::render::opengl::GLShader Shader_obj::compile( int _type,::String _source,hx::Null< bool >  __o__verbose){
bool _verbose = __o__verbose.Default(false);
	HX_STACK_FRAME("phoenix.Shader","compile",0x809b7549,"phoenix.Shader.compile","phoenix/Shader.hx",223,0x14ec92d9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_type,"_type")
	HX_STACK_ARG(_source,"_source")
	HX_STACK_ARG(_verbose,"_verbose")
{
		HX_STACK_LINE(225)
		::snow::platform::native::render::opengl::GLShader _shader = ::snow::platform::native::render::opengl::GL_obj::createShader(_type);		HX_STACK_VAR(_shader,"_shader");
		HX_STACK_LINE(227)
		::snow::platform::native::render::opengl::GL_obj::shaderSource(_shader,_source);
		HX_STACK_LINE(228)
		::snow::platform::native::render::opengl::GL_obj::compileShader(_shader);
		HX_STACK_LINE(230)
		::String shader_log = HX_CSTRING("");		HX_STACK_VAR(shader_log,"shader_log");
		HX_STACK_LINE(232)
		if ((_verbose)){
			HX_STACK_LINE(233)
			::String _g = ::snow::platform::native::render::opengl::GL_obj::getShaderInfoLog(_shader);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(233)
			shader_log = _g;
			HX_STACK_LINE(235)
			if (((shader_log.length > (int)0))){
				HX_STACK_LINE(237)
				hx::AddEq(this->log,((((HX_CSTRING("\n\t :: start -- (") + ((  (((_type == (int)35632))) ? ::String(HX_CSTRING("fragment")) : ::String(HX_CSTRING("vertex")) ))) + HX_CSTRING(") Shader compile log -- ")) + this->id) + HX_CSTRING("\n")));
				HX_STACK_LINE(239)
				hx::AddEq(this->log,((HX_CSTRING("\t\t") + shader_log) + HX_CSTRING("\n")));
				HX_STACK_LINE(241)
				hx::AddEq(this->log,(((HX_CSTRING("\t :: end -- (") + ((  (((_type == (int)35632))) ? ::String(HX_CSTRING("fragment")) : ::String(HX_CSTRING("vertex")) ))) + HX_CSTRING(") Shader compile log -- ")) + this->id));
			}
		}
		HX_STACK_LINE(247)
		int _g1 = ::snow::platform::native::render::opengl::GL_obj::getShaderParameter(_shader,(int)35713);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(247)
		if (((_g1 == (int)0))){
			HX_STACK_LINE(249)
			::String _info;		HX_STACK_VAR(_info,"_info");
			HX_STACK_LINE(249)
			if (((_type == (int)35632))){
				HX_STACK_LINE(249)
				_info = HX_CSTRING("fragment");
			}
			else{
				HX_STACK_LINE(249)
				_info = HX_CSTRING("vertex");
			}
			HX_STACK_LINE(250)
			if (((_type == (int)35632))){
				HX_STACK_LINE(250)
				hx::AddEq(_info,((HX_CSTRING("(") + this->frag_source_name) + HX_CSTRING(")")));
			}
			else{
				HX_STACK_LINE(250)
				hx::AddEq(_info,((HX_CSTRING("(") + this->vertex_source_name) + HX_CSTRING(")")));
			}
			HX_STACK_LINE(252)
			hx::AddEq(this->errors,((HX_CSTRING("\tFailed to compile shader (") + _info) + HX_CSTRING(") : \n")));
			HX_STACK_LINE(255)
			if ((!(_verbose))){
				HX_STACK_LINE(256)
				::String _g2 = ::snow::platform::native::render::opengl::GL_obj::getShaderInfoLog(_shader);		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(256)
				shader_log = _g2;
			}
			HX_STACK_LINE(259)
			hx::AddEq(this->errors,(HX_CSTRING("\t\t") + shader_log));
			HX_STACK_LINE(261)
			::snow::platform::native::render::opengl::GL_obj::deleteShader(_shader);
			HX_STACK_LINE(262)
			_shader = null();
			HX_STACK_LINE(264)
			return null();
		}
		HX_STACK_LINE(268)
		return _shader;
	}
}


HX_DEFINE_DYNAMIC_FUNC3(Shader_obj,compile,return )

Void Shader_obj::link( ){
{
		HX_STACK_FRAME("phoenix.Shader","link",0x58342664,"phoenix.Shader.link","phoenix/Shader.hx",271,0x14ec92d9)
		HX_STACK_THIS(this)
		HX_STACK_LINE(273)
		::snow::platform::native::render::opengl::GLProgram _g = ::snow::platform::native::render::opengl::GL_obj::createProgram();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(273)
		this->program = _g;
		HX_STACK_LINE(275)
		::snow::platform::native::render::opengl::GL_obj::attachShader(this->program,this->vert_shader);
		HX_STACK_LINE(276)
		::snow::platform::native::render::opengl::GL_obj::attachShader(this->program,this->frag_shader);
		HX_STACK_LINE(279)
		::snow::platform::native::render::opengl::GL_obj::bindAttribLocation(this->program,this->vert_attribute,HX_CSTRING("vertexPosition"));
		HX_STACK_LINE(280)
		::snow::platform::native::render::opengl::GL_obj::bindAttribLocation(this->program,this->tcoord_attribute,HX_CSTRING("vertexTCoord"));
		HX_STACK_LINE(281)
		::snow::platform::native::render::opengl::GL_obj::bindAttribLocation(this->program,this->color_attribute,HX_CSTRING("vertexColor"));
		HX_STACK_LINE(282)
		::snow::platform::native::render::opengl::GL_obj::bindAttribLocation(this->program,this->normal_attribute,HX_CSTRING("vertexNormal"));
		HX_STACK_LINE(284)
		::snow::platform::native::render::opengl::GL_obj::linkProgram(this->program);
		HX_STACK_LINE(286)
		int _g1 = ::snow::platform::native::render::opengl::GL_obj::getProgramParameter(this->program,(int)35714);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(286)
		if (((_g1 == (int)0))){
			HX_STACK_LINE(287)
			hx::AddEq(this->errors,HX_CSTRING("\tFailed to link shader program:"));
			HX_STACK_LINE(288)
			{
				HX_STACK_LINE(288)
				::String _g2 = ::snow::platform::native::render::opengl::GL_obj::getProgramInfoLog(this->program);		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(288)
				::String _error = (HX_CSTRING("\t\t") + _g2);		HX_STACK_VAR(_error,"_error");
				HX_STACK_LINE(288)
				hx::AddEq(this->errors,_error);
			}
			HX_STACK_LINE(289)
			::snow::platform::native::render::opengl::GL_obj::deleteProgram(this->program);
			HX_STACK_LINE(290)
			this->program = null();
			HX_STACK_LINE(291)
			return null();
		}
		HX_STACK_LINE(295)
		this->activate();
		HX_STACK_LINE(301)
		int _g3 = ::snow::platform::native::render::opengl::GL_obj::getUniformLocation(this->program,HX_CSTRING("projectionMatrix"));		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(301)
		this->projectionmatrix_attribute = _g3;
		HX_STACK_LINE(302)
		int _g4 = ::snow::platform::native::render::opengl::GL_obj::getUniformLocation(this->program,HX_CSTRING("modelViewMatrix"));		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(302)
		this->modelviewmatrix_attribute = _g4;
		HX_STACK_LINE(305)
		int _g5 = ::snow::platform::native::render::opengl::GL_obj::getUniformLocation(this->program,HX_CSTRING("tex0"));		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(305)
		this->tex0_attribute = _g5;
		HX_STACK_LINE(306)
		int _g6 = ::snow::platform::native::render::opengl::GL_obj::getUniformLocation(this->program,HX_CSTRING("tex1"));		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(306)
		this->tex1_attribute = _g6;
		HX_STACK_LINE(307)
		int _g7 = ::snow::platform::native::render::opengl::GL_obj::getUniformLocation(this->program,HX_CSTRING("tex2"));		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(307)
		this->tex2_attribute = _g7;
		HX_STACK_LINE(308)
		int _g8 = ::snow::platform::native::render::opengl::GL_obj::getUniformLocation(this->program,HX_CSTRING("tex3"));		HX_STACK_VAR(_g8,"_g8");
		HX_STACK_LINE(308)
		this->tex3_attribute = _g8;
		HX_STACK_LINE(309)
		int _g9 = ::snow::platform::native::render::opengl::GL_obj::getUniformLocation(this->program,HX_CSTRING("tex4"));		HX_STACK_VAR(_g9,"_g9");
		HX_STACK_LINE(309)
		this->tex4_attribute = _g9;
		HX_STACK_LINE(310)
		int _g10 = ::snow::platform::native::render::opengl::GL_obj::getUniformLocation(this->program,HX_CSTRING("tex5"));		HX_STACK_VAR(_g10,"_g10");
		HX_STACK_LINE(310)
		this->tex5_attribute = _g10;
		HX_STACK_LINE(311)
		int _g11 = ::snow::platform::native::render::opengl::GL_obj::getUniformLocation(this->program,HX_CSTRING("tex6"));		HX_STACK_VAR(_g11,"_g11");
		HX_STACK_LINE(311)
		this->tex6_attribute = _g11;
		HX_STACK_LINE(312)
		int _g12 = ::snow::platform::native::render::opengl::GL_obj::getUniformLocation(this->program,HX_CSTRING("tex7"));		HX_STACK_VAR(_g12,"_g12");
		HX_STACK_LINE(312)
		this->tex7_attribute = _g12;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Shader_obj,link,(void))

Void Shader_obj::drop( ){
{
		HX_STACK_FRAME("phoenix.Shader","drop",0x52f14699,"phoenix.Shader.drop","phoenix/Shader.hx",316,0x14ec92d9)
		HX_STACK_THIS(this)
		HX_STACK_LINE(317)
		this->super::drop();
		HX_STACK_LINE(318)
		this->destroy();
	}
return null();
}


Void Shader_obj::destroy( ){
{
		HX_STACK_FRAME("phoenix.Shader","destroy",0x21b27cd0,"phoenix.Shader.destroy","phoenix/Shader.hx",321,0x14ec92d9)
		HX_STACK_THIS(this)
		HX_STACK_LINE(322)
		if (((this->vert_shader != null()))){
			HX_STACK_LINE(322)
			::snow::platform::native::render::opengl::GL_obj::deleteShader(this->vert_shader);
		}
		HX_STACK_LINE(323)
		if (((this->frag_shader != null()))){
			HX_STACK_LINE(323)
			::snow::platform::native::render::opengl::GL_obj::deleteShader(this->frag_shader);
		}
		HX_STACK_LINE(324)
		if (((this->program != null()))){
			HX_STACK_LINE(324)
			::snow::platform::native::render::opengl::GL_obj::deleteProgram(this->program);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Shader_obj,destroy,(void))

bool Shader_obj::from_string( ::String _vertex_source,::String _fragment_source,::String __o__vertex_name,::String __o__frag_name,hx::Null< bool >  __o__verbose){
::String _vertex_name = __o__vertex_name.Default(HX_CSTRING(""));
::String _frag_name = __o__frag_name.Default(HX_CSTRING(""));
bool _verbose = __o__verbose.Default(false);
	HX_STACK_FRAME("phoenix.Shader","from_string",0x2d56691c,"phoenix.Shader.from_string","phoenix/Shader.hx",384,0x14ec92d9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_vertex_source,"_vertex_source")
	HX_STACK_ARG(_fragment_source,"_fragment_source")
	HX_STACK_ARG(_vertex_name,"_vertex_name")
	HX_STACK_ARG(_frag_name,"_frag_name")
	HX_STACK_ARG(_verbose,"_verbose")
{
		HX_STACK_LINE(387)
		this->destroy();
		HX_STACK_LINE(390)
		this->frag_source = _fragment_source;
		HX_STACK_LINE(391)
		this->vertex_source = _vertex_source;
		HX_STACK_LINE(392)
		this->frag_source_name = _frag_name;
		HX_STACK_LINE(393)
		this->vertex_source_name = _vertex_name;
		HX_STACK_LINE(396)
		::snow::platform::native::render::opengl::GLShader _g = this->compile((int)35633,this->vertex_source,_verbose);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(396)
		this->vert_shader = _g;
		HX_STACK_LINE(397)
		::snow::platform::native::render::opengl::GLShader _g1 = this->compile((int)35632,this->frag_source,_verbose);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(397)
		this->frag_shader = _g1;
		HX_STACK_LINE(400)
		if (((bool((this->vert_shader == null())) || bool((this->frag_shader == null()))))){
			HX_STACK_LINE(401)
			if ((_verbose)){
				HX_STACK_LINE(402)
				HX_STACK_DO_THROW((((((HX_CSTRING("SHADER : ") + this->id) + HX_CSTRING(" \n\n ")) + this->log) + HX_CSTRING("\n")) + this->errors));
			}
			else{
				HX_STACK_LINE(404)
				HX_STACK_DO_THROW(this->errors);
			}
			HX_STACK_LINE(406)
			return false;
		}
		HX_STACK_LINE(410)
		this->link();
		HX_STACK_LINE(413)
		if (((this->program == null()))){
			HX_STACK_LINE(414)
			if ((_verbose)){
				HX_STACK_LINE(415)
				HX_STACK_DO_THROW(((this->log + HX_CSTRING("\n")) + this->errors));
			}
			else{
				HX_STACK_LINE(417)
				HX_STACK_DO_THROW(this->errors);
			}
		}
		else{
			HX_STACK_LINE(420)
			if (((bool(_verbose) && bool((this->log.length > (int)0))))){
				HX_STACK_LINE(421)
				::haxe::Log_obj::trace(this->log,hx::SourceInfo(HX_CSTRING("Shader.hx"),421,HX_CSTRING("phoenix.Shader"),HX_CSTRING("from_string")));
			}
		}
		HX_STACK_LINE(426)
		if (((this->program == null()))){
			HX_STACK_LINE(426)
			return false;
		}
		HX_STACK_LINE(430)
		return true;
	}
}


HX_DEFINE_DYNAMIC_FUNC5(Shader_obj,from_string,return )

::String Shader_obj::toString( ){
	HX_STACK_FRAME("phoenix.Shader","toString",0xc2085c16,"phoenix.Shader.toString","phoenix/Shader.hx",434,0x14ec92d9)
	HX_STACK_THIS(this)
	HX_STACK_LINE(434)
	return (((((HX_CSTRING("Shader(") + this->id) + HX_CSTRING(") vert:")) + this->vertex_source_name) + HX_CSTRING(" / frag: ")) + this->frag_source_name);
}


HX_DEFINE_DYNAMIC_FUNC0(Shader_obj,toString,return )

Void Shader_obj::apply_uniforms( ){
{
		HX_STACK_FRAME("phoenix.Shader","apply_uniforms",0x384d17da,"phoenix.Shader.apply_uniforms","phoenix/Shader.hx",437,0x14ec92d9)
		HX_STACK_THIS(this)
		HX_STACK_LINE(439)
		::snow::platform::native::render::opengl::GL_obj::uniform1i(this->tex0_attribute,(int)0);
		HX_STACK_LINE(440)
		::snow::platform::native::render::opengl::GL_obj::uniform1i(this->tex1_attribute,(int)1);
		HX_STACK_LINE(441)
		::snow::platform::native::render::opengl::GL_obj::uniform1i(this->tex2_attribute,(int)2);
		HX_STACK_LINE(442)
		::snow::platform::native::render::opengl::GL_obj::uniform1i(this->tex3_attribute,(int)3);
		HX_STACK_LINE(443)
		::snow::platform::native::render::opengl::GL_obj::uniform1i(this->tex4_attribute,(int)4);
		HX_STACK_LINE(444)
		::snow::platform::native::render::opengl::GL_obj::uniform1i(this->tex5_attribute,(int)5);
		HX_STACK_LINE(445)
		::snow::platform::native::render::opengl::GL_obj::uniform1i(this->tex6_attribute,(int)6);
		HX_STACK_LINE(446)
		::snow::platform::native::render::opengl::GL_obj::uniform1i(this->tex7_attribute,(int)7);
		HX_STACK_LINE(448)
		for(::cpp::FastIterator_obj< Dynamic > *__it = ::cpp::CreateFastIterator< Dynamic >(this->uniforms->iterator());  __it->hasNext(); ){
			Dynamic uniform = __it->next();
			{
				HX_STACK_LINE(450)
				int _g = uniform->__Field(HX_CSTRING("type"),true);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(450)
				switch( (int)(_g)){
					case (int)1: {
						HX_STACK_LINE(451)
						int _int = uniform->__Field(HX_CSTRING("value"),true);		HX_STACK_VAR(_int,"_int");
						HX_STACK_LINE(451)
						::snow::platform::native::render::opengl::GL_obj::uniform1i(uniform->__Field(HX_CSTRING("location"),true),_int);
					}
					;break;
					case (int)2: {
						HX_STACK_LINE(452)
						Float _float = uniform->__Field(HX_CSTRING("value"),true);		HX_STACK_VAR(_float,"_float");
						HX_STACK_LINE(452)
						::snow::platform::native::render::opengl::GL_obj::uniform1f(uniform->__Field(HX_CSTRING("location"),true),_float);
					}
					;break;
					case (int)3: {
						HX_STACK_LINE(453)
						::phoenix::Vector _vec = uniform->__Field(HX_CSTRING("value"),true);		HX_STACK_VAR(_vec,"_vec");
						HX_STACK_LINE(453)
						::snow::platform::native::render::opengl::GL_obj::uniform2f(uniform->__Field(HX_CSTRING("location"),true),_vec->x,_vec->y);
					}
					;break;
					case (int)4: {
						HX_STACK_LINE(454)
						::phoenix::Vector _vec = uniform->__Field(HX_CSTRING("value"),true);		HX_STACK_VAR(_vec,"_vec");
						HX_STACK_LINE(454)
						::snow::platform::native::render::opengl::GL_obj::uniform3f(uniform->__Field(HX_CSTRING("location"),true),_vec->x,_vec->y,_vec->z);
					}
					;break;
					case (int)5: {
						HX_STACK_LINE(455)
						::phoenix::Vector _vec = uniform->__Field(HX_CSTRING("value"),true);		HX_STACK_VAR(_vec,"_vec");
						HX_STACK_LINE(455)
						::snow::platform::native::render::opengl::GL_obj::uniform4f(uniform->__Field(HX_CSTRING("location"),true),_vec->x,_vec->y,_vec->z,_vec->w);
					}
					;break;
					case (int)6: {
						HX_STACK_LINE(456)
						::phoenix::Color _color = uniform->__Field(HX_CSTRING("value"),true);		HX_STACK_VAR(_color,"_color");
						HX_STACK_LINE(456)
						::snow::platform::native::render::opengl::GL_obj::uniform4f(uniform->__Field(HX_CSTRING("location"),true),_color->r,_color->g,_color->b,_color->a);
					}
					;break;
					case (int)7: {
						HX_STACK_LINE(457)
						::phoenix::Texture _tex = uniform->__Field(HX_CSTRING("value"),true);		HX_STACK_VAR(_tex,"_tex");
						HX_STACK_LINE(457)
						::snow::platform::native::render::opengl::GL_obj::uniform1i(uniform->__Field(HX_CSTRING("location"),true),_tex->slot);
						HX_STACK_LINE(457)
						_tex->bind();
					}
					;break;
					case (int)0: {
					}
					;break;
				}
			}
;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Shader_obj,apply_uniforms,(void))

int Shader_obj::location( ::String _name){
	HX_STACK_FRAME("phoenix.Shader","location",0x6edff99f,"phoenix.Shader.location","phoenix/Shader.hx",465,0x14ec92d9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_name,"_name")
	HX_STACK_LINE(465)
	return ::snow::platform::native::render::opengl::GL_obj::getUniformLocation(this->program,_name);
}


HX_DEFINE_DYNAMIC_FUNC1(Shader_obj,location,return )

Void Shader_obj::apply_int( int _location,int _int){
{
		HX_STACK_FRAME("phoenix.Shader","apply_int",0x1ad197b4,"phoenix.Shader.apply_int","phoenix/Shader.hx",469,0x14ec92d9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_location,"_location")
		HX_STACK_ARG(_int,"_int")
		HX_STACK_LINE(469)
		::snow::platform::native::render::opengl::GL_obj::uniform1i(_location,_int);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Shader_obj,apply_int,(void))

Void Shader_obj::apply_float( int _location,Float _float){
{
		HX_STACK_FRAME("phoenix.Shader","apply_float",0xe8a44ba1,"phoenix.Shader.apply_float","phoenix/Shader.hx",473,0x14ec92d9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_location,"_location")
		HX_STACK_ARG(_float,"_float")
		HX_STACK_LINE(473)
		::snow::platform::native::render::opengl::GL_obj::uniform1f(_location,_float);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Shader_obj,apply_float,(void))

Void Shader_obj::apply_vec2( int _location,::phoenix::Vector _vec){
{
		HX_STACK_FRAME("phoenix.Shader","apply_vec2",0x652408f9,"phoenix.Shader.apply_vec2","phoenix/Shader.hx",477,0x14ec92d9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_location,"_location")
		HX_STACK_ARG(_vec,"_vec")
		HX_STACK_LINE(477)
		::snow::platform::native::render::opengl::GL_obj::uniform2f(_location,_vec->x,_vec->y);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Shader_obj,apply_vec2,(void))

Void Shader_obj::apply_vec3( int _location,::phoenix::Vector _vec){
{
		HX_STACK_FRAME("phoenix.Shader","apply_vec3",0x652408fa,"phoenix.Shader.apply_vec3","phoenix/Shader.hx",481,0x14ec92d9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_location,"_location")
		HX_STACK_ARG(_vec,"_vec")
		HX_STACK_LINE(481)
		::snow::platform::native::render::opengl::GL_obj::uniform3f(_location,_vec->x,_vec->y,_vec->z);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Shader_obj,apply_vec3,(void))

Void Shader_obj::apply_vec4( int _location,::phoenix::Vector _vec){
{
		HX_STACK_FRAME("phoenix.Shader","apply_vec4",0x652408fb,"phoenix.Shader.apply_vec4","phoenix/Shader.hx",485,0x14ec92d9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_location,"_location")
		HX_STACK_ARG(_vec,"_vec")
		HX_STACK_LINE(485)
		::snow::platform::native::render::opengl::GL_obj::uniform4f(_location,_vec->x,_vec->y,_vec->z,_vec->w);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Shader_obj,apply_vec4,(void))

Void Shader_obj::apply_color( int _location,::phoenix::Color _color){
{
		HX_STACK_FRAME("phoenix.Shader","apply_color",0x3069f768,"phoenix.Shader.apply_color","phoenix/Shader.hx",489,0x14ec92d9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_location,"_location")
		HX_STACK_ARG(_color,"_color")
		HX_STACK_LINE(489)
		::snow::platform::native::render::opengl::GL_obj::uniform4f(_location,_color->r,_color->g,_color->b,_color->a);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Shader_obj,apply_color,(void))

Void Shader_obj::apply_texture( int _location,::phoenix::Texture _tex){
{
		HX_STACK_FRAME("phoenix.Shader","apply_texture",0x47df9a20,"phoenix.Shader.apply_texture","phoenix/Shader.hx",492,0x14ec92d9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_location,"_location")
		HX_STACK_ARG(_tex,"_tex")
		HX_STACK_LINE(493)
		::snow::platform::native::render::opengl::GL_obj::uniform1i(_location,_tex->slot);
		HX_STACK_LINE(494)
		_tex->bind();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Shader_obj,apply_texture,(void))

Void Shader_obj::add_log( ::String _log){
{
		HX_STACK_FRAME("phoenix.Shader","add_log",0x8dadfffc,"phoenix.Shader.add_log","phoenix/Shader.hx",498,0x14ec92d9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_log,"_log")
		HX_STACK_LINE(498)
		hx::AddEq(this->log,_log);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Shader_obj,add_log,(void))

Void Shader_obj::add_error( ::String _error){
{
		HX_STACK_FRAME("phoenix.Shader","add_error",0xcf614540,"phoenix.Shader.add_error","phoenix/Shader.hx",502,0x14ec92d9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_error,"_error")
		HX_STACK_LINE(502)
		hx::AddEq(this->errors,_error);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Shader_obj,add_error,(void))

::phoenix::Shader Shader_obj::load( ::String _psid,::String _vsid,Dynamic _onloaded,Dynamic __o__silent){
Dynamic _silent = __o__silent.Default(false);
	HX_STACK_FRAME("phoenix.Shader","load",0x5838a890,"phoenix.Shader.load","phoenix/Shader.hx",327,0x14ec92d9)
	HX_STACK_ARG(_psid,"_psid")
	HX_STACK_ARG(_vsid,"_vsid")
	HX_STACK_ARG(_onloaded,"_onloaded")
	HX_STACK_ARG(_silent,"_silent")
{
		HX_STACK_LINE(329)
		::String _frag_shader = HX_CSTRING("");		HX_STACK_VAR(_frag_shader,"_frag_shader");
		HX_STACK_LINE(330)
		::String _vert_shader = HX_CSTRING("");		HX_STACK_VAR(_vert_shader,"_vert_shader");
		HX_STACK_LINE(332)
		if (((bool((_vsid == HX_CSTRING("default"))) || bool((_vsid == HX_CSTRING("")))))){
			HX_STACK_LINE(333)
			_vsid = HX_CSTRING("default vert");
			HX_STACK_LINE(334)
			_vert_shader = ::Luxe_obj::renderer->shaders->__Field(HX_CSTRING("plain"),true)->__Field(HX_CSTRING("source"),true)->__Field(HX_CSTRING("vert"),true);
		}
		else{
			HX_STACK_LINE(336)
			_vert_shader = ::Luxe_obj::loadText(_vsid,null(),null())->text;
		}
		HX_STACK_LINE(339)
		if (((bool((_psid == HX_CSTRING("default"))) || bool((_psid == HX_CSTRING("")))))){
			HX_STACK_LINE(340)
			_psid = HX_CSTRING("default frag");
			HX_STACK_LINE(341)
			_frag_shader = ::Luxe_obj::renderer->shaders->__Field(HX_CSTRING("plain"),true)->__Field(HX_CSTRING("source"),true)->__Field(HX_CSTRING("frag"),true);
		}
		else{
			HX_STACK_LINE(342)
			if (((_psid == HX_CSTRING("textured")))){
				HX_STACK_LINE(343)
				_psid = HX_CSTRING("default textured");
				HX_STACK_LINE(344)
				_frag_shader = ::Luxe_obj::renderer->shaders->__Field(HX_CSTRING("textured"),true)->__Field(HX_CSTRING("source"),true)->__Field(HX_CSTRING("frag"),true);
			}
			else{
				HX_STACK_LINE(346)
				_frag_shader = ::Luxe_obj::loadText(_psid,null(),null())->text;
			}
		}
		HX_STACK_LINE(349)
		::phoenix::Shader _shader = null();		HX_STACK_VAR(_shader,"_shader");
		HX_STACK_LINE(351)
		if (((bool((bool((bool((_frag_shader != null())) && bool((_frag_shader.length > (int)0)))) && bool((_vert_shader != null())))) && bool((_vert_shader.length > (int)0))))){
			HX_STACK_LINE(354)
			::String prefixes = HX_CSTRING("");		HX_STACK_VAR(prefixes,"prefixes");
			HX_STACK_LINE(360)
			::phoenix::Shader _g = ::phoenix::Shader_obj::__new(::Luxe_obj::resources);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(360)
			_shader = _g;
			HX_STACK_LINE(361)
			_shader->from_string(_vert_shader,(prefixes + _frag_shader),_vsid,_psid,false);
		}
		HX_STACK_LINE(365)
		if (((_shader != null()))){
			HX_STACK_LINE(367)
			_shader->id = ((_psid + HX_CSTRING("|")) + _vsid);
			HX_STACK_LINE(369)
			if (((_onloaded != null()))){
				HX_STACK_LINE(370)
				_onloaded(_shader).Cast< Void >();
			}
			HX_STACK_LINE(373)
			if ((!(_silent))){
				HX_STACK_LINE(373)
				::haxe::Log_obj::trace((HX_CSTRING("   i / shader / ") + ((HX_CSTRING("shader loaded ") + _shader->id))),hx::SourceInfo(HX_CSTRING("Shader.hx"),373,HX_CSTRING("phoenix.Shader"),HX_CSTRING("load")));
			}
			HX_STACK_LINE(375)
			return _shader;
		}
		else{
			HX_STACK_LINE(378)
			return null();
		}
		HX_STACK_LINE(365)
		return null();
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Shader_obj,load,return )


Shader_obj::Shader_obj()
{
}

void Shader_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Shader);
	HX_MARK_MEMBER_NAME(errors,"errors");
	HX_MARK_MEMBER_NAME(log,"log");
	HX_MARK_MEMBER_NAME(vertex_source,"vertex_source");
	HX_MARK_MEMBER_NAME(frag_source,"frag_source");
	HX_MARK_MEMBER_NAME(vertex_source_name,"vertex_source_name");
	HX_MARK_MEMBER_NAME(frag_source_name,"frag_source_name");
	HX_MARK_MEMBER_NAME(vert_shader,"vert_shader");
	HX_MARK_MEMBER_NAME(frag_shader,"frag_shader");
	HX_MARK_MEMBER_NAME(program,"program");
	HX_MARK_MEMBER_NAME(shader,"shader");
	HX_MARK_MEMBER_NAME(vert_attribute,"vert_attribute");
	HX_MARK_MEMBER_NAME(tcoord_attribute,"tcoord_attribute");
	HX_MARK_MEMBER_NAME(color_attribute,"color_attribute");
	HX_MARK_MEMBER_NAME(normal_attribute,"normal_attribute");
	HX_MARK_MEMBER_NAME(projectionmatrix_attribute,"projectionmatrix_attribute");
	HX_MARK_MEMBER_NAME(modelviewmatrix_attribute,"modelviewmatrix_attribute");
	HX_MARK_MEMBER_NAME(tex0_attribute,"tex0_attribute");
	HX_MARK_MEMBER_NAME(tex1_attribute,"tex1_attribute");
	HX_MARK_MEMBER_NAME(tex2_attribute,"tex2_attribute");
	HX_MARK_MEMBER_NAME(tex3_attribute,"tex3_attribute");
	HX_MARK_MEMBER_NAME(tex4_attribute,"tex4_attribute");
	HX_MARK_MEMBER_NAME(tex5_attribute,"tex5_attribute");
	HX_MARK_MEMBER_NAME(tex6_attribute,"tex6_attribute");
	HX_MARK_MEMBER_NAME(tex7_attribute,"tex7_attribute");
	HX_MARK_MEMBER_NAME(uniforms,"uniforms");
	HX_MARK_MEMBER_NAME(uniform_textures,"uniform_textures");
	::luxe::resource::Resource_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Shader_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(errors,"errors");
	HX_VISIT_MEMBER_NAME(log,"log");
	HX_VISIT_MEMBER_NAME(vertex_source,"vertex_source");
	HX_VISIT_MEMBER_NAME(frag_source,"frag_source");
	HX_VISIT_MEMBER_NAME(vertex_source_name,"vertex_source_name");
	HX_VISIT_MEMBER_NAME(frag_source_name,"frag_source_name");
	HX_VISIT_MEMBER_NAME(vert_shader,"vert_shader");
	HX_VISIT_MEMBER_NAME(frag_shader,"frag_shader");
	HX_VISIT_MEMBER_NAME(program,"program");
	HX_VISIT_MEMBER_NAME(shader,"shader");
	HX_VISIT_MEMBER_NAME(vert_attribute,"vert_attribute");
	HX_VISIT_MEMBER_NAME(tcoord_attribute,"tcoord_attribute");
	HX_VISIT_MEMBER_NAME(color_attribute,"color_attribute");
	HX_VISIT_MEMBER_NAME(normal_attribute,"normal_attribute");
	HX_VISIT_MEMBER_NAME(projectionmatrix_attribute,"projectionmatrix_attribute");
	HX_VISIT_MEMBER_NAME(modelviewmatrix_attribute,"modelviewmatrix_attribute");
	HX_VISIT_MEMBER_NAME(tex0_attribute,"tex0_attribute");
	HX_VISIT_MEMBER_NAME(tex1_attribute,"tex1_attribute");
	HX_VISIT_MEMBER_NAME(tex2_attribute,"tex2_attribute");
	HX_VISIT_MEMBER_NAME(tex3_attribute,"tex3_attribute");
	HX_VISIT_MEMBER_NAME(tex4_attribute,"tex4_attribute");
	HX_VISIT_MEMBER_NAME(tex5_attribute,"tex5_attribute");
	HX_VISIT_MEMBER_NAME(tex6_attribute,"tex6_attribute");
	HX_VISIT_MEMBER_NAME(tex7_attribute,"tex7_attribute");
	HX_VISIT_MEMBER_NAME(uniforms,"uniforms");
	HX_VISIT_MEMBER_NAME(uniform_textures,"uniform_textures");
	::luxe::resource::Resource_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Shader_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"log") ) { return log; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"load") ) { return load_dyn(); }
		if (HX_FIELD_EQ(inName,"link") ) { return link_dyn(); }
		if (HX_FIELD_EQ(inName,"drop") ) { return drop_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"errors") ) { return errors; }
		if (HX_FIELD_EQ(inName,"shader") ) { return shader; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"program") ) { return program; }
		if (HX_FIELD_EQ(inName,"set_int") ) { return set_int_dyn(); }
		if (HX_FIELD_EQ(inName,"compile") ) { return compile_dyn(); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"add_log") ) { return add_log_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"uniforms") ) { return uniforms; }
		if (HX_FIELD_EQ(inName,"activate") ) { return activate_dyn(); }
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		if (HX_FIELD_EQ(inName,"location") ) { return location_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"set_float") ) { return set_float_dyn(); }
		if (HX_FIELD_EQ(inName,"set_color") ) { return set_color_dyn(); }
		if (HX_FIELD_EQ(inName,"apply_int") ) { return apply_int_dyn(); }
		if (HX_FIELD_EQ(inName,"add_error") ) { return add_error_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"deactivate") ) { return deactivate_dyn(); }
		if (HX_FIELD_EQ(inName,"apply_vec2") ) { return apply_vec2_dyn(); }
		if (HX_FIELD_EQ(inName,"apply_vec3") ) { return apply_vec3_dyn(); }
		if (HX_FIELD_EQ(inName,"apply_vec4") ) { return apply_vec4_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"frag_source") ) { return frag_source; }
		if (HX_FIELD_EQ(inName,"vert_shader") ) { return vert_shader; }
		if (HX_FIELD_EQ(inName,"frag_shader") ) { return frag_shader; }
		if (HX_FIELD_EQ(inName,"set_vector2") ) { return set_vector2_dyn(); }
		if (HX_FIELD_EQ(inName,"set_vector3") ) { return set_vector3_dyn(); }
		if (HX_FIELD_EQ(inName,"set_vector4") ) { return set_vector4_dyn(); }
		if (HX_FIELD_EQ(inName,"set_texture") ) { return set_texture_dyn(); }
		if (HX_FIELD_EQ(inName,"from_string") ) { return from_string_dyn(); }
		if (HX_FIELD_EQ(inName,"apply_float") ) { return apply_float_dyn(); }
		if (HX_FIELD_EQ(inName,"apply_color") ) { return apply_color_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"vertex_source") ) { return vertex_source; }
		if (HX_FIELD_EQ(inName,"apply_texture") ) { return apply_texture_dyn(); }
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
		if (HX_FIELD_EQ(inName,"apply_uniforms") ) { return apply_uniforms_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"color_attribute") ) { return color_attribute; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"frag_source_name") ) { return frag_source_name; }
		if (HX_FIELD_EQ(inName,"tcoord_attribute") ) { return tcoord_attribute; }
		if (HX_FIELD_EQ(inName,"normal_attribute") ) { return normal_attribute; }
		if (HX_FIELD_EQ(inName,"uniform_textures") ) { return uniform_textures; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"vertex_source_name") ) { return vertex_source_name; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"modelviewmatrix_attribute") ) { return modelviewmatrix_attribute; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"projectionmatrix_attribute") ) { return projectionmatrix_attribute; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Shader_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"log") ) { log=inValue.Cast< ::String >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"errors") ) { errors=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"shader") ) { shader=inValue.Cast< ::snow::platform::native::render::opengl::GLShader >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"program") ) { program=inValue.Cast< ::snow::platform::native::render::opengl::GLProgram >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"uniforms") ) { uniforms=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"frag_source") ) { frag_source=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"vert_shader") ) { vert_shader=inValue.Cast< ::snow::platform::native::render::opengl::GLShader >(); return inValue; }
		if (HX_FIELD_EQ(inName,"frag_shader") ) { frag_shader=inValue.Cast< ::snow::platform::native::render::opengl::GLShader >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"vertex_source") ) { vertex_source=inValue.Cast< ::String >(); return inValue; }
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
		if (HX_FIELD_EQ(inName,"color_attribute") ) { color_attribute=inValue.Cast< int >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"frag_source_name") ) { frag_source_name=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"tcoord_attribute") ) { tcoord_attribute=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"normal_attribute") ) { normal_attribute=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"uniform_textures") ) { uniform_textures=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"vertex_source_name") ) { vertex_source_name=inValue.Cast< ::String >(); return inValue; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"modelviewmatrix_attribute") ) { modelviewmatrix_attribute=inValue.Cast< int >(); return inValue; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"projectionmatrix_attribute") ) { projectionmatrix_attribute=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Shader_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("errors"));
	outFields->push(HX_CSTRING("log"));
	outFields->push(HX_CSTRING("vertex_source"));
	outFields->push(HX_CSTRING("frag_source"));
	outFields->push(HX_CSTRING("vertex_source_name"));
	outFields->push(HX_CSTRING("frag_source_name"));
	outFields->push(HX_CSTRING("vert_shader"));
	outFields->push(HX_CSTRING("frag_shader"));
	outFields->push(HX_CSTRING("program"));
	outFields->push(HX_CSTRING("shader"));
	outFields->push(HX_CSTRING("vert_attribute"));
	outFields->push(HX_CSTRING("tcoord_attribute"));
	outFields->push(HX_CSTRING("color_attribute"));
	outFields->push(HX_CSTRING("normal_attribute"));
	outFields->push(HX_CSTRING("projectionmatrix_attribute"));
	outFields->push(HX_CSTRING("modelviewmatrix_attribute"));
	outFields->push(HX_CSTRING("tex0_attribute"));
	outFields->push(HX_CSTRING("tex1_attribute"));
	outFields->push(HX_CSTRING("tex2_attribute"));
	outFields->push(HX_CSTRING("tex3_attribute"));
	outFields->push(HX_CSTRING("tex4_attribute"));
	outFields->push(HX_CSTRING("tex5_attribute"));
	outFields->push(HX_CSTRING("tex6_attribute"));
	outFields->push(HX_CSTRING("tex7_attribute"));
	outFields->push(HX_CSTRING("uniforms"));
	outFields->push(HX_CSTRING("uniform_textures"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("load"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(Shader_obj,errors),HX_CSTRING("errors")},
	{hx::fsString,(int)offsetof(Shader_obj,log),HX_CSTRING("log")},
	{hx::fsString,(int)offsetof(Shader_obj,vertex_source),HX_CSTRING("vertex_source")},
	{hx::fsString,(int)offsetof(Shader_obj,frag_source),HX_CSTRING("frag_source")},
	{hx::fsString,(int)offsetof(Shader_obj,vertex_source_name),HX_CSTRING("vertex_source_name")},
	{hx::fsString,(int)offsetof(Shader_obj,frag_source_name),HX_CSTRING("frag_source_name")},
	{hx::fsObject /*::snow::platform::native::render::opengl::GLShader*/ ,(int)offsetof(Shader_obj,vert_shader),HX_CSTRING("vert_shader")},
	{hx::fsObject /*::snow::platform::native::render::opengl::GLShader*/ ,(int)offsetof(Shader_obj,frag_shader),HX_CSTRING("frag_shader")},
	{hx::fsObject /*::snow::platform::native::render::opengl::GLProgram*/ ,(int)offsetof(Shader_obj,program),HX_CSTRING("program")},
	{hx::fsObject /*::snow::platform::native::render::opengl::GLShader*/ ,(int)offsetof(Shader_obj,shader),HX_CSTRING("shader")},
	{hx::fsInt,(int)offsetof(Shader_obj,vert_attribute),HX_CSTRING("vert_attribute")},
	{hx::fsInt,(int)offsetof(Shader_obj,tcoord_attribute),HX_CSTRING("tcoord_attribute")},
	{hx::fsInt,(int)offsetof(Shader_obj,color_attribute),HX_CSTRING("color_attribute")},
	{hx::fsInt,(int)offsetof(Shader_obj,normal_attribute),HX_CSTRING("normal_attribute")},
	{hx::fsInt,(int)offsetof(Shader_obj,projectionmatrix_attribute),HX_CSTRING("projectionmatrix_attribute")},
	{hx::fsInt,(int)offsetof(Shader_obj,modelviewmatrix_attribute),HX_CSTRING("modelviewmatrix_attribute")},
	{hx::fsInt,(int)offsetof(Shader_obj,tex0_attribute),HX_CSTRING("tex0_attribute")},
	{hx::fsInt,(int)offsetof(Shader_obj,tex1_attribute),HX_CSTRING("tex1_attribute")},
	{hx::fsInt,(int)offsetof(Shader_obj,tex2_attribute),HX_CSTRING("tex2_attribute")},
	{hx::fsInt,(int)offsetof(Shader_obj,tex3_attribute),HX_CSTRING("tex3_attribute")},
	{hx::fsInt,(int)offsetof(Shader_obj,tex4_attribute),HX_CSTRING("tex4_attribute")},
	{hx::fsInt,(int)offsetof(Shader_obj,tex5_attribute),HX_CSTRING("tex5_attribute")},
	{hx::fsInt,(int)offsetof(Shader_obj,tex6_attribute),HX_CSTRING("tex6_attribute")},
	{hx::fsInt,(int)offsetof(Shader_obj,tex7_attribute),HX_CSTRING("tex7_attribute")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(Shader_obj,uniforms),HX_CSTRING("uniforms")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(Shader_obj,uniform_textures),HX_CSTRING("uniform_textures")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("errors"),
	HX_CSTRING("log"),
	HX_CSTRING("vertex_source"),
	HX_CSTRING("frag_source"),
	HX_CSTRING("vertex_source_name"),
	HX_CSTRING("frag_source_name"),
	HX_CSTRING("vert_shader"),
	HX_CSTRING("frag_shader"),
	HX_CSTRING("program"),
	HX_CSTRING("shader"),
	HX_CSTRING("vert_attribute"),
	HX_CSTRING("tcoord_attribute"),
	HX_CSTRING("color_attribute"),
	HX_CSTRING("normal_attribute"),
	HX_CSTRING("projectionmatrix_attribute"),
	HX_CSTRING("modelviewmatrix_attribute"),
	HX_CSTRING("tex0_attribute"),
	HX_CSTRING("tex1_attribute"),
	HX_CSTRING("tex2_attribute"),
	HX_CSTRING("tex3_attribute"),
	HX_CSTRING("tex4_attribute"),
	HX_CSTRING("tex5_attribute"),
	HX_CSTRING("tex6_attribute"),
	HX_CSTRING("tex7_attribute"),
	HX_CSTRING("uniforms"),
	HX_CSTRING("uniform_textures"),
	HX_CSTRING("activate"),
	HX_CSTRING("deactivate"),
	HX_CSTRING("clone"),
	HX_CSTRING("set_int"),
	HX_CSTRING("set_float"),
	HX_CSTRING("set_vector2"),
	HX_CSTRING("set_vector3"),
	HX_CSTRING("set_vector4"),
	HX_CSTRING("set_color"),
	HX_CSTRING("set_texture"),
	HX_CSTRING("compile"),
	HX_CSTRING("link"),
	HX_CSTRING("drop"),
	HX_CSTRING("destroy"),
	HX_CSTRING("from_string"),
	HX_CSTRING("toString"),
	HX_CSTRING("apply_uniforms"),
	HX_CSTRING("location"),
	HX_CSTRING("apply_int"),
	HX_CSTRING("apply_float"),
	HX_CSTRING("apply_vec2"),
	HX_CSTRING("apply_vec3"),
	HX_CSTRING("apply_vec4"),
	HX_CSTRING("apply_color"),
	HX_CSTRING("apply_texture"),
	HX_CSTRING("add_log"),
	HX_CSTRING("add_error"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Shader_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Shader_obj::__mClass,"__mClass");
};

#endif

Class Shader_obj::__mClass;

void Shader_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("phoenix.Shader"), hx::TCanCast< Shader_obj> ,sStaticFields,sMemberFields,
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

void Shader_obj::__boot()
{
}

} // end namespace phoenix
