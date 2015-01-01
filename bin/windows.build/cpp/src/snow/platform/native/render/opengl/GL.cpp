#include <hxcpp.h>

#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_snow_platform_native_render_opengl_GL
#include <snow/platform/native/render/opengl/GL.h>
#endif
#ifndef INCLUDED_snow_platform_native_render_opengl_GLBuffer
#include <snow/platform/native/render/opengl/GLBuffer.h>
#endif
#ifndef INCLUDED_snow_platform_native_render_opengl_GLFBO
#include <snow/platform/native/render/opengl/GLFBO.h>
#endif
#ifndef INCLUDED_snow_platform_native_render_opengl_GLObject
#include <snow/platform/native/render/opengl/GLObject.h>
#endif
#ifndef INCLUDED_snow_platform_native_render_opengl_GLProgram
#include <snow/platform/native/render/opengl/GLProgram.h>
#endif
#ifndef INCLUDED_snow_platform_native_render_opengl_GLRBO
#include <snow/platform/native/render/opengl/GLRBO.h>
#endif
#ifndef INCLUDED_snow_platform_native_render_opengl_GLShader
#include <snow/platform/native/render/opengl/GLShader.h>
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
#ifndef INCLUDED_snow_platform_native_utils_Int32Array
#include <snow/platform/native/utils/Int32Array.h>
#endif
#ifndef INCLUDED_snow_utils_IDataInput
#include <snow/utils/IDataInput.h>
#endif
#ifndef INCLUDED_snow_utils_IMemoryRange
#include <snow/utils/IMemoryRange.h>
#endif
#ifndef INCLUDED_snow_utils_Libs
#include <snow/utils/Libs.h>
#endif
namespace snow{
namespace platform{
namespace native{
namespace render{
namespace opengl{

Void GL_obj::__construct()
{
	return null();
}

//GL_obj::~GL_obj() { }

Dynamic GL_obj::__CreateEmpty() { return  new GL_obj; }
hx::ObjectPtr< GL_obj > GL_obj::__new()
{  hx::ObjectPtr< GL_obj > result = new GL_obj();
	result->__construct();
	return result;}

Dynamic GL_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< GL_obj > result = new GL_obj();
	result->__construct();
	return result;}

int GL_obj::DEPTH_BUFFER_BIT;

int GL_obj::STENCIL_BUFFER_BIT;

int GL_obj::COLOR_BUFFER_BIT;

int GL_obj::POINTS;

int GL_obj::LINES;

int GL_obj::LINE_LOOP;

int GL_obj::LINE_STRIP;

int GL_obj::TRIANGLES;

int GL_obj::TRIANGLE_STRIP;

int GL_obj::TRIANGLE_FAN;

int GL_obj::ZERO;

int GL_obj::ONE;

int GL_obj::SRC_COLOR;

int GL_obj::ONE_MINUS_SRC_COLOR;

int GL_obj::SRC_ALPHA;

int GL_obj::ONE_MINUS_SRC_ALPHA;

int GL_obj::DST_ALPHA;

int GL_obj::ONE_MINUS_DST_ALPHA;

int GL_obj::DST_COLOR;

int GL_obj::ONE_MINUS_DST_COLOR;

int GL_obj::SRC_ALPHA_SATURATE;

int GL_obj::FUNC_ADD;

int GL_obj::BLEND_EQUATION;

int GL_obj::BLEND_EQUATION_RGB;

int GL_obj::BLEND_EQUATION_ALPHA;

int GL_obj::FUNC_SUBTRACT;

int GL_obj::FUNC_REVERSE_SUBTRACT;

int GL_obj::BLEND_DST_RGB;

int GL_obj::BLEND_SRC_RGB;

int GL_obj::BLEND_DST_ALPHA;

int GL_obj::BLEND_SRC_ALPHA;

int GL_obj::CONSTANT_COLOR;

int GL_obj::ONE_MINUS_CONSTANT_COLOR;

int GL_obj::CONSTANT_ALPHA;

int GL_obj::ONE_MINUS_CONSTANT_ALPHA;

int GL_obj::BLEND_COLOR;

int GL_obj::ARRAY_BUFFER;

int GL_obj::ELEMENT_ARRAY_BUFFER;

int GL_obj::ARRAY_BUFFER_BINDING;

int GL_obj::ELEMENT_ARRAY_BUFFER_BINDING;

int GL_obj::STREAM_DRAW;

int GL_obj::STATIC_DRAW;

int GL_obj::DYNAMIC_DRAW;

int GL_obj::BUFFER_SIZE;

int GL_obj::BUFFER_USAGE;

int GL_obj::CURRENT_VERTEX_ATTRIB;

int GL_obj::FRONT;

int GL_obj::BACK;

int GL_obj::FRONT_AND_BACK;

int GL_obj::CULL_FACE;

int GL_obj::BLEND;

int GL_obj::DITHER;

int GL_obj::STENCIL_TEST;

int GL_obj::DEPTH_TEST;

int GL_obj::SCISSOR_TEST;

int GL_obj::POLYGON_OFFSET_FILL;

int GL_obj::SAMPLE_ALPHA_TO_COVERAGE;

int GL_obj::SAMPLE_COVERAGE;

int GL_obj::NO_ERROR;

int GL_obj::INVALID_ENUM;

int GL_obj::INVALID_VALUE;

int GL_obj::INVALID_OPERATION;

int GL_obj::OUT_OF_MEMORY;

int GL_obj::CW;

int GL_obj::CCW;

int GL_obj::LINE_WIDTH;

int GL_obj::ALIASED_POINT_SIZE_RANGE;

int GL_obj::ALIASED_LINE_WIDTH_RANGE;

int GL_obj::CULL_FACE_MODE;

int GL_obj::FRONT_FACE;

int GL_obj::DEPTH_RANGE;

int GL_obj::DEPTH_WRITEMASK;

int GL_obj::DEPTH_CLEAR_VALUE;

int GL_obj::DEPTH_FUNC;

int GL_obj::STENCIL_CLEAR_VALUE;

int GL_obj::STENCIL_FUNC;

int GL_obj::STENCIL_FAIL;

int GL_obj::STENCIL_PASS_DEPTH_FAIL;

int GL_obj::STENCIL_PASS_DEPTH_PASS;

int GL_obj::STENCIL_REF;

int GL_obj::STENCIL_VALUE_MASK;

int GL_obj::STENCIL_WRITEMASK;

int GL_obj::STENCIL_BACK_FUNC;

int GL_obj::STENCIL_BACK_FAIL;

int GL_obj::STENCIL_BACK_PASS_DEPTH_FAIL;

int GL_obj::STENCIL_BACK_PASS_DEPTH_PASS;

int GL_obj::STENCIL_BACK_REF;

int GL_obj::STENCIL_BACK_VALUE_MASK;

int GL_obj::STENCIL_BACK_WRITEMASK;

int GL_obj::VIEWPORT;

int GL_obj::SCISSOR_BOX;

int GL_obj::COLOR_CLEAR_VALUE;

int GL_obj::COLOR_WRITEMASK;

int GL_obj::UNPACK_ALIGNMENT;

int GL_obj::PACK_ALIGNMENT;

int GL_obj::MAX_TEXTURE_SIZE;

int GL_obj::MAX_VIEWPORT_DIMS;

int GL_obj::SUBPIXEL_BITS;

int GL_obj::RED_BITS;

int GL_obj::GREEN_BITS;

int GL_obj::BLUE_BITS;

int GL_obj::ALPHA_BITS;

int GL_obj::DEPTH_BITS;

int GL_obj::STENCIL_BITS;

int GL_obj::POLYGON_OFFSET_UNITS;

int GL_obj::POLYGON_OFFSET_FACTOR;

int GL_obj::TEXTURE_BINDING_2D;

int GL_obj::SAMPLE_BUFFERS;

int GL_obj::SAMPLES;

int GL_obj::SAMPLE_COVERAGE_VALUE;

int GL_obj::SAMPLE_COVERAGE_INVERT;

int GL_obj::COMPRESSED_TEXTURE_FORMATS;

int GL_obj::DONT_CARE;

int GL_obj::FASTEST;

int GL_obj::NICEST;

int GL_obj::GENERATE_MIPMAP_HINT;

int GL_obj::BYTE;

int GL_obj::UNSIGNED_BYTE;

int GL_obj::SHORT;

int GL_obj::UNSIGNED_SHORT;

int GL_obj::INT;

int GL_obj::UNSIGNED_INT;

int GL_obj::FLOAT;

int GL_obj::DEPTH_COMPONENT;

int GL_obj::ALPHA;

int GL_obj::RGB;

int GL_obj::RGBA;

int GL_obj::LUMINANCE;

int GL_obj::LUMINANCE_ALPHA;

int GL_obj::UNSIGNED_SHORT_4_4_4_4;

int GL_obj::UNSIGNED_SHORT_5_5_5_1;

int GL_obj::UNSIGNED_SHORT_5_6_5;

int GL_obj::FRAGMENT_SHADER;

int GL_obj::VERTEX_SHADER;

int GL_obj::MAX_VERTEX_ATTRIBS;

int GL_obj::MAX_VERTEX_UNIFORM_VECTORS;

int GL_obj::MAX_VARYING_VECTORS;

int GL_obj::MAX_COMBINED_TEXTURE_IMAGE_UNITS;

int GL_obj::MAX_VERTEX_TEXTURE_IMAGE_UNITS;

int GL_obj::MAX_TEXTURE_IMAGE_UNITS;

int GL_obj::MAX_FRAGMENT_UNIFORM_VECTORS;

int GL_obj::SHADER_TYPE;

int GL_obj::DELETE_STATUS;

int GL_obj::LINK_STATUS;

int GL_obj::VALIDATE_STATUS;

int GL_obj::ATTACHED_SHADERS;

int GL_obj::ACTIVE_UNIFORMS;

int GL_obj::ACTIVE_ATTRIBUTES;

int GL_obj::SHADING_LANGUAGE_VERSION;

int GL_obj::CURRENT_PROGRAM;

int GL_obj::NEVER;

int GL_obj::LESS;

int GL_obj::EQUAL;

int GL_obj::LEQUAL;

int GL_obj::GREATER;

int GL_obj::NOTEQUAL;

int GL_obj::GEQUAL;

int GL_obj::ALWAYS;

int GL_obj::KEEP;

int GL_obj::REPLACE;

int GL_obj::INCR;

int GL_obj::DECR;

int GL_obj::INVERT;

int GL_obj::INCR_WRAP;

int GL_obj::DECR_WRAP;

int GL_obj::VENDOR;

int GL_obj::RENDERER;

int GL_obj::VERSION;

int GL_obj::NEAREST;

int GL_obj::LINEAR;

int GL_obj::NEAREST_MIPMAP_NEAREST;

int GL_obj::LINEAR_MIPMAP_NEAREST;

int GL_obj::NEAREST_MIPMAP_LINEAR;

int GL_obj::LINEAR_MIPMAP_LINEAR;

int GL_obj::TEXTURE_MAG_FILTER;

int GL_obj::TEXTURE_MIN_FILTER;

int GL_obj::TEXTURE_WRAP_S;

int GL_obj::TEXTURE_WRAP_T;

int GL_obj::TEXTURE_2D;

int GL_obj::TEXTURE;

int GL_obj::TEXTURE_CUBE_MAP;

int GL_obj::TEXTURE_BINDING_CUBE_MAP;

int GL_obj::TEXTURE_CUBE_MAP_POSITIVE_X;

int GL_obj::TEXTURE_CUBE_MAP_NEGATIVE_X;

int GL_obj::TEXTURE_CUBE_MAP_POSITIVE_Y;

int GL_obj::TEXTURE_CUBE_MAP_NEGATIVE_Y;

int GL_obj::TEXTURE_CUBE_MAP_POSITIVE_Z;

int GL_obj::TEXTURE_CUBE_MAP_NEGATIVE_Z;

int GL_obj::MAX_CUBE_MAP_TEXTURE_SIZE;

int GL_obj::TEXTURE0;

int GL_obj::TEXTURE1;

int GL_obj::TEXTURE2;

int GL_obj::TEXTURE3;

int GL_obj::TEXTURE4;

int GL_obj::TEXTURE5;

int GL_obj::TEXTURE6;

int GL_obj::TEXTURE7;

int GL_obj::TEXTURE8;

int GL_obj::TEXTURE9;

int GL_obj::TEXTURE10;

int GL_obj::TEXTURE11;

int GL_obj::TEXTURE12;

int GL_obj::TEXTURE13;

int GL_obj::TEXTURE14;

int GL_obj::TEXTURE15;

int GL_obj::TEXTURE16;

int GL_obj::TEXTURE17;

int GL_obj::TEXTURE18;

int GL_obj::TEXTURE19;

int GL_obj::TEXTURE20;

int GL_obj::TEXTURE21;

int GL_obj::TEXTURE22;

int GL_obj::TEXTURE23;

int GL_obj::TEXTURE24;

int GL_obj::TEXTURE25;

int GL_obj::TEXTURE26;

int GL_obj::TEXTURE27;

int GL_obj::TEXTURE28;

int GL_obj::TEXTURE29;

int GL_obj::TEXTURE30;

int GL_obj::TEXTURE31;

int GL_obj::ACTIVE_TEXTURE;

int GL_obj::REPEAT;

int GL_obj::CLAMP_TO_EDGE;

int GL_obj::MIRRORED_REPEAT;

int GL_obj::FLOAT_VEC2;

int GL_obj::FLOAT_VEC3;

int GL_obj::FLOAT_VEC4;

int GL_obj::INT_VEC2;

int GL_obj::INT_VEC3;

int GL_obj::INT_VEC4;

int GL_obj::BOOL;

int GL_obj::BOOL_VEC2;

int GL_obj::BOOL_VEC3;

int GL_obj::BOOL_VEC4;

int GL_obj::FLOAT_MAT2;

int GL_obj::FLOAT_MAT3;

int GL_obj::FLOAT_MAT4;

int GL_obj::SAMPLER_2D;

int GL_obj::SAMPLER_CUBE;

int GL_obj::VERTEX_ATTRIB_ARRAY_ENABLED;

int GL_obj::VERTEX_ATTRIB_ARRAY_SIZE;

int GL_obj::VERTEX_ATTRIB_ARRAY_STRIDE;

int GL_obj::VERTEX_ATTRIB_ARRAY_TYPE;

int GL_obj::VERTEX_ATTRIB_ARRAY_NORMALIZED;

int GL_obj::VERTEX_ATTRIB_ARRAY_POINTER;

int GL_obj::VERTEX_ATTRIB_ARRAY_BUFFER_BINDING;

int GL_obj::VERTEX_PROGRAM_POINT_SIZE;

int GL_obj::POINT_SPRITE;

int GL_obj::COMPILE_STATUS;

int GL_obj::LOW_FLOAT;

int GL_obj::MEDIUM_FLOAT;

int GL_obj::HIGH_FLOAT;

int GL_obj::LOW_INT;

int GL_obj::MEDIUM_INT;

int GL_obj::HIGH_INT;

int GL_obj::FRAMEBUFFER;

int GL_obj::RENDERBUFFER;

int GL_obj::RGBA4;

int GL_obj::RGB5_A1;

int GL_obj::RGB565;

int GL_obj::DEPTH_COMPONENT16;

int GL_obj::STENCIL_INDEX;

int GL_obj::STENCIL_INDEX8;

int GL_obj::DEPTH_STENCIL;

int GL_obj::RENDERBUFFER_WIDTH;

int GL_obj::RENDERBUFFER_HEIGHT;

int GL_obj::RENDERBUFFER_INTERNAL_FORMAT;

int GL_obj::RENDERBUFFER_RED_SIZE;

int GL_obj::RENDERBUFFER_GREEN_SIZE;

int GL_obj::RENDERBUFFER_BLUE_SIZE;

int GL_obj::RENDERBUFFER_ALPHA_SIZE;

int GL_obj::RENDERBUFFER_DEPTH_SIZE;

int GL_obj::RENDERBUFFER_STENCIL_SIZE;

int GL_obj::FRAMEBUFFER_ATTACHMENT_OBJECT_TYPE;

int GL_obj::FRAMEBUFFER_ATTACHMENT_OBJECT_NAME;

int GL_obj::FRAMEBUFFER_ATTACHMENT_TEXTURE_LEVEL;

int GL_obj::FRAMEBUFFER_ATTACHMENT_TEXTURE_CUBE_MAP_FACE;

int GL_obj::COLOR_ATTACHMENT0;

int GL_obj::DEPTH_ATTACHMENT;

int GL_obj::STENCIL_ATTACHMENT;

int GL_obj::DEPTH_STENCIL_ATTACHMENT;

int GL_obj::NONE;

int GL_obj::FRAMEBUFFER_COMPLETE;

int GL_obj::FRAMEBUFFER_INCOMPLETE_ATTACHMENT;

int GL_obj::FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT;

int GL_obj::FRAMEBUFFER_INCOMPLETE_DIMENSIONS;

int GL_obj::FRAMEBUFFER_UNSUPPORTED;

int GL_obj::FRAMEBUFFER_BINDING;

int GL_obj::RENDERBUFFER_BINDING;

int GL_obj::MAX_RENDERBUFFER_SIZE;

int GL_obj::INVALID_FRAMEBUFFER_OPERATION;

int GL_obj::UNPACK_FLIP_Y_WEBGL;

int GL_obj::UNPACK_PREMULTIPLY_ALPHA_WEBGL;

int GL_obj::CONTEXT_LOST_WEBGL;

int GL_obj::UNPACK_COLORSPACE_CONVERSION_WEBGL;

int GL_obj::BROWSER_DEFAULT_WEBGL;

::String GL_obj::versionString( ){
	HX_STACK_FRAME("snow.platform.native.render.opengl.GL","versionString",0x2693404e,"snow.platform.native.render.opengl.GL.versionString","snow/platform/native/render/opengl/GL.hx",622,0x9056cf0a)
	HX_STACK_LINE(622)
	return ::snow::platform::native::render::opengl::GL_obj::snow_gl_version();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(GL_obj,versionString,return )

Void GL_obj::activeTexture( int texture){
{
		HX_STACK_FRAME("snow.platform.native.render.opengl.GL","activeTexture",0x2b9c6dfa,"snow.platform.native.render.opengl.GL.activeTexture","snow/platform/native/render/opengl/GL.hx",627,0x9056cf0a)
		HX_STACK_ARG(texture,"texture")
		HX_STACK_LINE(627)
		::snow::platform::native::render::opengl::GL_obj::snow_gl_active_texture(texture);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,activeTexture,(void))

Void GL_obj::attachShader( ::snow::platform::native::render::opengl::GLProgram program,::snow::platform::native::render::opengl::GLShader shader){
{
		HX_STACK_FRAME("snow.platform.native.render.opengl.GL","attachShader",0x2ad02625,"snow.platform.native.render.opengl.GL.attachShader","snow/platform/native/render/opengl/GL.hx",631,0x9056cf0a)
		HX_STACK_ARG(program,"program")
		HX_STACK_ARG(shader,"shader")
		HX_STACK_LINE(632)
		program->shaders->push(shader);
		HX_STACK_LINE(633)
		::snow::platform::native::render::opengl::GL_obj::snow_gl_attach_shader(program->id,shader->id);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,attachShader,(void))

Void GL_obj::bindAttribLocation( ::snow::platform::native::render::opengl::GLProgram program,int index,::String name){
{
		HX_STACK_FRAME("snow.platform.native.render.opengl.GL","bindAttribLocation",0xd117f1d7,"snow.platform.native.render.opengl.GL.bindAttribLocation","snow/platform/native/render/opengl/GL.hx",638,0x9056cf0a)
		HX_STACK_ARG(program,"program")
		HX_STACK_ARG(index,"index")
		HX_STACK_ARG(name,"name")
		HX_STACK_LINE(638)
		::snow::platform::native::render::opengl::GL_obj::snow_gl_bind_attrib_location(program->id,index,name);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GL_obj,bindAttribLocation,(void))

Void GL_obj::bindBuffer( int target,::snow::platform::native::render::opengl::GLBuffer buffer){
{
		HX_STACK_FRAME("snow.platform.native.render.opengl.GL","bindBuffer",0x8c034b38,"snow.platform.native.render.opengl.GL.bindBuffer","snow/platform/native/render/opengl/GL.hx",643,0x9056cf0a)
		HX_STACK_ARG(target,"target")
		HX_STACK_ARG(buffer,"buffer")
		HX_STACK_LINE(643)
		::snow::platform::native::render::opengl::GL_obj::snow_gl_bind_buffer(target,(  (((buffer == null()))) ? int((int)0) : int(buffer->id) ));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,bindBuffer,(void))

Void GL_obj::bindFramebuffer( int target,::snow::platform::native::render::opengl::GLFBO framebuffer){
{
		HX_STACK_FRAME("snow.platform.native.render.opengl.GL","bindFramebuffer",0xa152fbb5,"snow.platform.native.render.opengl.GL.bindFramebuffer","snow/platform/native/render/opengl/GL.hx",648,0x9056cf0a)
		HX_STACK_ARG(target,"target")
		HX_STACK_ARG(framebuffer,"framebuffer")
		HX_STACK_LINE(648)
		::snow::platform::native::render::opengl::GL_obj::snow_gl_bind_framebuffer(target,(  (((framebuffer == null()))) ? int((int)0) : int(framebuffer->id) ));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,bindFramebuffer,(void))

Void GL_obj::bindRenderbuffer( int target,::snow::platform::native::render::opengl::GLRBO renderbuffer){
{
		HX_STACK_FRAME("snow.platform.native.render.opengl.GL","bindRenderbuffer",0x0dd5550e,"snow.platform.native.render.opengl.GL.bindRenderbuffer","snow/platform/native/render/opengl/GL.hx",653,0x9056cf0a)
		HX_STACK_ARG(target,"target")
		HX_STACK_ARG(renderbuffer,"renderbuffer")
		HX_STACK_LINE(653)
		::snow::platform::native::render::opengl::GL_obj::snow_gl_bind_renderbuffer(target,(  (((renderbuffer == null()))) ? int((int)0) : int(renderbuffer->id) ));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,bindRenderbuffer,(void))

Void GL_obj::bindTexture( int target,::snow::platform::native::render::opengl::GLTexture texture){
{
		HX_STACK_FRAME("snow.platform.native.render.opengl.GL","bindTexture",0xe42eaba3,"snow.platform.native.render.opengl.GL.bindTexture","snow/platform/native/render/opengl/GL.hx",658,0x9056cf0a)
		HX_STACK_ARG(target,"target")
		HX_STACK_ARG(texture,"texture")
		HX_STACK_LINE(658)
		::snow::platform::native::render::opengl::GL_obj::snow_gl_bind_texture(target,(  (((texture == null()))) ? int((int)0) : int(texture->id) ));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,bindTexture,(void))

Void GL_obj::blendColor( Float red,Float green,Float blue,Float alpha){
{
		HX_STACK_FRAME("snow.platform.native.render.opengl.GL","blendColor",0x75f8ebed,"snow.platform.native.render.opengl.GL.blendColor","snow/platform/native/render/opengl/GL.hx",663,0x9056cf0a)
		HX_STACK_ARG(red,"red")
		HX_STACK_ARG(green,"green")
		HX_STACK_ARG(blue,"blue")
		HX_STACK_ARG(alpha,"alpha")
		HX_STACK_LINE(663)
		::snow::platform::native::render::opengl::GL_obj::snow_gl_blend_color(red,green,blue,alpha);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(GL_obj,blendColor,(void))

Void GL_obj::blendEquation( int mode){
{
		HX_STACK_FRAME("snow.platform.native.render.opengl.GL","blendEquation",0xd79ff342,"snow.platform.native.render.opengl.GL.blendEquation","snow/platform/native/render/opengl/GL.hx",668,0x9056cf0a)
		HX_STACK_ARG(mode,"mode")
		HX_STACK_LINE(668)
		::snow::platform::native::render::opengl::GL_obj::snow_gl_blend_equation(mode);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,blendEquation,(void))

Void GL_obj::blendEquationSeparate( int modeRGB,int modeAlpha){
{
		HX_STACK_FRAME("snow.platform.native.render.opengl.GL","blendEquationSeparate",0x7855e0c5,"snow.platform.native.render.opengl.GL.blendEquationSeparate","snow/platform/native/render/opengl/GL.hx",673,0x9056cf0a)
		HX_STACK_ARG(modeRGB,"modeRGB")
		HX_STACK_ARG(modeAlpha,"modeAlpha")
		HX_STACK_LINE(673)
		::snow::platform::native::render::opengl::GL_obj::snow_gl_blend_equation_separate(modeRGB,modeAlpha);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,blendEquationSeparate,(void))

Void GL_obj::blendFunc( int sfactor,int dfactor){
{
		HX_STACK_FRAME("snow.platform.native.render.opengl.GL","blendFunc",0xf9588ffa,"snow.platform.native.render.opengl.GL.blendFunc","snow/platform/native/render/opengl/GL.hx",678,0x9056cf0a)
		HX_STACK_ARG(sfactor,"sfactor")
		HX_STACK_ARG(dfactor,"dfactor")
		HX_STACK_LINE(678)
		::snow::platform::native::render::opengl::GL_obj::snow_gl_blend_func(sfactor,dfactor);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,blendFunc,(void))

Void GL_obj::blendFuncSeparate( int srcRGB,int dstRGB,int srcAlpha,int dstAlpha){
{
		HX_STACK_FRAME("snow.platform.native.render.opengl.GL","blendFuncSeparate",0xcb8df57d,"snow.platform.native.render.opengl.GL.blendFuncSeparate","snow/platform/native/render/opengl/GL.hx",683,0x9056cf0a)
		HX_STACK_ARG(srcRGB,"srcRGB")
		HX_STACK_ARG(dstRGB,"dstRGB")
		HX_STACK_ARG(srcAlpha,"srcAlpha")
		HX_STACK_ARG(dstAlpha,"dstAlpha")
		HX_STACK_LINE(683)
		::snow::platform::native::render::opengl::GL_obj::snow_gl_blend_func_separate(srcRGB,dstRGB,srcAlpha,dstAlpha);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(GL_obj,blendFuncSeparate,(void))

Void GL_obj::bufferData( int target,::snow::utils::IMemoryRange data,int usage){
{
		HX_STACK_FRAME("snow.platform.native.render.opengl.GL","bufferData",0x26b877e5,"snow.platform.native.render.opengl.GL.bufferData","snow/platform/native/render/opengl/GL.hx",687,0x9056cf0a)
		HX_STACK_ARG(target,"target")
		HX_STACK_ARG(data,"data")
		HX_STACK_ARG(usage,"usage")
		HX_STACK_LINE(688)
		::snow::platform::native::utils::ByteArray _g = data->getByteBuffer();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(688)
		int _g1 = data->getStart();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(688)
		int _g2 = data->getLength();		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(688)
		::snow::platform::native::render::opengl::GL_obj::snow_gl_buffer_data(target,_g,_g1,_g2,usage);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GL_obj,bufferData,(void))

Void GL_obj::bufferSubData( int target,int offset,::snow::utils::IMemoryRange data){
{
		HX_STACK_FRAME("snow.platform.native.render.opengl.GL","bufferSubData",0x1ad750ef,"snow.platform.native.render.opengl.GL.bufferSubData","snow/platform/native/render/opengl/GL.hx",692,0x9056cf0a)
		HX_STACK_ARG(target,"target")
		HX_STACK_ARG(offset,"offset")
		HX_STACK_ARG(data,"data")
		HX_STACK_LINE(693)
		::snow::platform::native::utils::ByteArray _g = data->getByteBuffer();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(693)
		int _g1 = data->getStart();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(693)
		int _g2 = data->getLength();		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(693)
		::snow::platform::native::render::opengl::GL_obj::snow_gl_buffer_sub_data(target,offset,_g,_g1,_g2);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GL_obj,bufferSubData,(void))

int GL_obj::checkFramebufferStatus( int target){
	HX_STACK_FRAME("snow.platform.native.render.opengl.GL","checkFramebufferStatus",0x0979db32,"snow.platform.native.render.opengl.GL.checkFramebufferStatus","snow/platform/native/render/opengl/GL.hx",698,0x9056cf0a)
	HX_STACK_ARG(target,"target")
	HX_STACK_LINE(698)
	return ::snow::platform::native::render::opengl::GL_obj::snow_gl_check_framebuffer_status(target);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,checkFramebufferStatus,return )

Void GL_obj::clear( int mask){
{
		HX_STACK_FRAME("snow.platform.native.render.opengl.GL","clear",0x93e77ed2,"snow.platform.native.render.opengl.GL.clear","snow/platform/native/render/opengl/GL.hx",703,0x9056cf0a)
		HX_STACK_ARG(mask,"mask")
		HX_STACK_LINE(703)
		::snow::platform::native::render::opengl::GL_obj::snow_gl_clear(mask);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,clear,(void))

Void GL_obj::clearColor( Float red,Float green,Float blue,Float alpha){
{
		HX_STACK_FRAME("snow.platform.native.render.opengl.GL","clearColor",0xb2ab6931,"snow.platform.native.render.opengl.GL.clearColor","snow/platform/native/render/opengl/GL.hx",708,0x9056cf0a)
		HX_STACK_ARG(red,"red")
		HX_STACK_ARG(green,"green")
		HX_STACK_ARG(blue,"blue")
		HX_STACK_ARG(alpha,"alpha")
		HX_STACK_LINE(708)
		::snow::platform::native::render::opengl::GL_obj::snow_gl_clear_color(red,green,blue,alpha);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(GL_obj,clearColor,(void))

Void GL_obj::clearDepth( Float depth){
{
		HX_STACK_FRAME("snow.platform.native.render.opengl.GL","clearDepth",0x3f78e8d1,"snow.platform.native.render.opengl.GL.clearDepth","snow/platform/native/render/opengl/GL.hx",713,0x9056cf0a)
		HX_STACK_ARG(depth,"depth")
		HX_STACK_LINE(713)
		::snow::platform::native::render::opengl::GL_obj::snow_gl_clear_depth(depth);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,clearDepth,(void))

Void GL_obj::clearStencil( int s){
{
		HX_STACK_FRAME("snow.platform.native.render.opengl.GL","clearStencil",0xd3dac54a,"snow.platform.native.render.opengl.GL.clearStencil","snow/platform/native/render/opengl/GL.hx",718,0x9056cf0a)
		HX_STACK_ARG(s,"s")
		HX_STACK_LINE(718)
		::snow::platform::native::render::opengl::GL_obj::snow_gl_clear_stencil(s);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,clearStencil,(void))

Void GL_obj::colorMask( bool red,bool green,bool blue,bool alpha){
{
		HX_STACK_FRAME("snow.platform.native.render.opengl.GL","colorMask",0x15805fb4,"snow.platform.native.render.opengl.GL.colorMask","snow/platform/native/render/opengl/GL.hx",723,0x9056cf0a)
		HX_STACK_ARG(red,"red")
		HX_STACK_ARG(green,"green")
		HX_STACK_ARG(blue,"blue")
		HX_STACK_ARG(alpha,"alpha")
		HX_STACK_LINE(723)
		::snow::platform::native::render::opengl::GL_obj::snow_gl_color_mask(red,green,blue,alpha);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(GL_obj,colorMask,(void))

Void GL_obj::compileShader( ::snow::platform::native::render::opengl::GLShader shader){
{
		HX_STACK_FRAME("snow.platform.native.render.opengl.GL","compileShader",0xafa4cb3d,"snow.platform.native.render.opengl.GL.compileShader","snow/platform/native/render/opengl/GL.hx",728,0x9056cf0a)
		HX_STACK_ARG(shader,"shader")
		HX_STACK_LINE(728)
		::snow::platform::native::render::opengl::GL_obj::snow_gl_compile_shader(shader->id);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,compileShader,(void))

Void GL_obj::compressedTexImage2D( int target,int level,int internalformat,int width,int height,int border,::snow::utils::IMemoryRange data){
{
		HX_STACK_FRAME("snow.platform.native.render.opengl.GL","compressedTexImage2D",0xd8638102,"snow.platform.native.render.opengl.GL.compressedTexImage2D","snow/platform/native/render/opengl/GL.hx",732,0x9056cf0a)
		HX_STACK_ARG(target,"target")
		HX_STACK_ARG(level,"level")
		HX_STACK_ARG(internalformat,"internalformat")
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
		HX_STACK_ARG(border,"border")
		HX_STACK_ARG(data,"data")
		HX_STACK_LINE(733)
		::snow::platform::native::utils::ByteArray _g;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(733)
		if (((data == null()))){
			HX_STACK_LINE(733)
			_g = null();
		}
		else{
			HX_STACK_LINE(733)
			_g = data->getByteBuffer();
		}
		HX_STACK_LINE(733)
		Dynamic _g1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(733)
		if (((data == null()))){
			HX_STACK_LINE(733)
			_g1 = null();
		}
		else{
			HX_STACK_LINE(733)
			_g1 = data->getStart();
		}
		HX_STACK_LINE(733)
		::snow::platform::native::render::opengl::GL_obj::snow_gl_compressed_tex_image_2d(target,level,internalformat,width,height,border,_g,_g1);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC7(GL_obj,compressedTexImage2D,(void))

Void GL_obj::compressedTexSubImage2D( int target,int level,int xoffset,int yoffset,int width,int height,int format,::snow::utils::IMemoryRange data){
{
		HX_STACK_FRAME("snow.platform.native.render.opengl.GL","compressedTexSubImage2D",0x5b977858,"snow.platform.native.render.opengl.GL.compressedTexSubImage2D","snow/platform/native/render/opengl/GL.hx",737,0x9056cf0a)
		HX_STACK_ARG(target,"target")
		HX_STACK_ARG(level,"level")
		HX_STACK_ARG(xoffset,"xoffset")
		HX_STACK_ARG(yoffset,"yoffset")
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
		HX_STACK_ARG(format,"format")
		HX_STACK_ARG(data,"data")
		HX_STACK_LINE(738)
		::snow::platform::native::utils::ByteArray _g;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(738)
		if (((data == null()))){
			HX_STACK_LINE(738)
			_g = null();
		}
		else{
			HX_STACK_LINE(738)
			_g = data->getByteBuffer();
		}
		HX_STACK_LINE(738)
		Dynamic _g1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(738)
		if (((data == null()))){
			HX_STACK_LINE(738)
			_g1 = null();
		}
		else{
			HX_STACK_LINE(738)
			_g1 = data->getStart();
		}
		HX_STACK_LINE(738)
		::snow::platform::native::render::opengl::GL_obj::snow_gl_compressed_tex_sub_image_2d(target,level,xoffset,yoffset,width,height,format,_g,_g1);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC8(GL_obj,compressedTexSubImage2D,(void))

Void GL_obj::copyTexImage2D( int target,int level,int internalformat,int x,int y,int width,int height,int border){
{
		HX_STACK_FRAME("snow.platform.native.render.opengl.GL","copyTexImage2D",0x639372f6,"snow.platform.native.render.opengl.GL.copyTexImage2D","snow/platform/native/render/opengl/GL.hx",743,0x9056cf0a)
		HX_STACK_ARG(target,"target")
		HX_STACK_ARG(level,"level")
		HX_STACK_ARG(internalformat,"internalformat")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
		HX_STACK_ARG(border,"border")
		HX_STACK_LINE(743)
		::snow::platform::native::render::opengl::GL_obj::snow_gl_copy_tex_image_2d(target,level,internalformat,x,y,width,height,border);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC8(GL_obj,copyTexImage2D,(void))

Void GL_obj::copyTexSubImage2D( int target,int level,int xoffset,int yoffset,int x,int y,int width,int height){
{
		HX_STACK_FRAME("snow.platform.native.render.opengl.GL","copyTexSubImage2D",0xa57c36e4,"snow.platform.native.render.opengl.GL.copyTexSubImage2D","snow/platform/native/render/opengl/GL.hx",748,0x9056cf0a)
		HX_STACK_ARG(target,"target")
		HX_STACK_ARG(level,"level")
		HX_STACK_ARG(xoffset,"xoffset")
		HX_STACK_ARG(yoffset,"yoffset")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
		HX_STACK_LINE(748)
		::snow::platform::native::render::opengl::GL_obj::snow_gl_copy_tex_sub_image_2d(target,level,xoffset,yoffset,x,y,width,height);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC8(GL_obj,copyTexSubImage2D,(void))

::snow::platform::native::render::opengl::GLBuffer GL_obj::createBuffer( ){
	HX_STACK_FRAME("snow.platform.native.render.opengl.GL","createBuffer",0x6b425277,"snow.platform.native.render.opengl.GL.createBuffer","snow/platform/native/render/opengl/GL.hx",752,0x9056cf0a)
	HX_STACK_LINE(753)
	int _g = ::snow::platform::native::render::opengl::GL_obj::snow_gl_create_buffer();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(753)
	return ::snow::platform::native::render::opengl::GLBuffer_obj::__new(_g);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(GL_obj,createBuffer,return )

::snow::platform::native::render::opengl::GLFBO GL_obj::createFramebuffer( ){
	HX_STACK_FRAME("snow.platform.native.render.opengl.GL","createFramebuffer",0xcdb65016,"snow.platform.native.render.opengl.GL.createFramebuffer","snow/platform/native/render/opengl/GL.hx",758,0x9056cf0a)
	HX_STACK_LINE(758)
	int _id = ::snow::platform::native::render::opengl::GL_obj::snow_gl_create_framebuffer();		HX_STACK_VAR(_id,"_id");
	HX_STACK_LINE(758)
	return ::snow::platform::native::render::opengl::GLFBO_obj::__new(_id);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(GL_obj,createFramebuffer,return )

::snow::platform::native::render::opengl::GLProgram GL_obj::createProgram( ){
	HX_STACK_FRAME("snow.platform.native.render.opengl.GL","createProgram",0xb12e7d2d,"snow.platform.native.render.opengl.GL.createProgram","snow/platform/native/render/opengl/GL.hx",762,0x9056cf0a)
	HX_STACK_LINE(763)
	int _g = ::snow::platform::native::render::opengl::GL_obj::snow_gl_create_program();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(763)
	return ::snow::platform::native::render::opengl::GLProgram_obj::__new(_g);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(GL_obj,createProgram,return )

::snow::platform::native::render::opengl::GLRBO GL_obj::createRenderbuffer( ){
	HX_STACK_FRAME("snow.platform.native.render.opengl.GL","createRenderbuffer",0xb85bd58d,"snow.platform.native.render.opengl.GL.createRenderbuffer","snow/platform/native/render/opengl/GL.hx",768,0x9056cf0a)
	HX_STACK_LINE(768)
	int _id = ::snow::platform::native::render::opengl::GL_obj::snow_gl_create_render_buffer();		HX_STACK_VAR(_id,"_id");
	HX_STACK_LINE(768)
	return ::snow::platform::native::render::opengl::GLRBO_obj::__new(_id);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(GL_obj,createRenderbuffer,return )

::snow::platform::native::render::opengl::GLShader GL_obj::createShader( int type){
	HX_STACK_FRAME("snow.platform.native.render.opengl.GL","createShader",0xb7ce549c,"snow.platform.native.render.opengl.GL.createShader","snow/platform/native/render/opengl/GL.hx",772,0x9056cf0a)
	HX_STACK_ARG(type,"type")
	HX_STACK_LINE(773)
	int _g = ::snow::platform::native::render::opengl::GL_obj::snow_gl_create_shader(type);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(773)
	return ::snow::platform::native::render::opengl::GLShader_obj::__new(_g);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,createShader,return )

::snow::platform::native::render::opengl::GLTexture GL_obj::createTexture( ){
	HX_STACK_FRAME("snow.platform.native.render.opengl.GL","createTexture",0x5c15fb84,"snow.platform.native.render.opengl.GL.createTexture","snow/platform/native/render/opengl/GL.hx",777,0x9056cf0a)
	HX_STACK_LINE(778)
	int _g = ::snow::platform::native::render::opengl::GL_obj::snow_gl_create_texture();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(778)
	return ::snow::platform::native::render::opengl::GLTexture_obj::__new(_g);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(GL_obj,createTexture,return )

Void GL_obj::cullFace( int mode){
{
		HX_STACK_FRAME("snow.platform.native.render.opengl.GL","cullFace",0xe587b34a,"snow.platform.native.render.opengl.GL.cullFace","snow/platform/native/render/opengl/GL.hx",783,0x9056cf0a)
		HX_STACK_ARG(mode,"mode")
		HX_STACK_LINE(783)
		::snow::platform::native::render::opengl::GL_obj::snow_gl_cull_face(mode);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,cullFace,(void))

Void GL_obj::deleteBuffer( ::snow::platform::native::render::opengl::GLBuffer buffer){
{
		HX_STACK_FRAME("snow.platform.native.render.opengl.GL","deleteBuffer",0xaf8538e6,"snow.platform.native.render.opengl.GL.deleteBuffer","snow/platform/native/render/opengl/GL.hx",787,0x9056cf0a)
		HX_STACK_ARG(buffer,"buffer")
		HX_STACK_LINE(788)
		::snow::platform::native::render::opengl::GL_obj::snow_gl_delete_buffer(buffer->id);
		HX_STACK_LINE(789)
		buffer->set_invalidated(true);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,deleteBuffer,(void))

Void GL_obj::deleteFramebuffer( ::snow::platform::native::render::opengl::GLFBO framebuffer){
{
		HX_STACK_FRAME("snow.platform.native.render.opengl.GL","deleteFramebuffer",0x50ceb747,"snow.platform.native.render.opengl.GL.deleteFramebuffer","snow/platform/native/render/opengl/GL.hx",793,0x9056cf0a)
		HX_STACK_ARG(framebuffer,"framebuffer")
		HX_STACK_LINE(794)
		::snow::platform::native::render::opengl::GL_obj::snow_gl_delete_framebuffer(framebuffer->id);
		HX_STACK_LINE(795)
		framebuffer->set_invalidated(true);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,deleteFramebuffer,(void))

Void GL_obj::deleteProgram( ::snow::platform::native::render::opengl::GLProgram program){
{
		HX_STACK_FRAME("snow.platform.native.render.opengl.GL","deleteProgram",0x277537de,"snow.platform.native.render.opengl.GL.deleteProgram","snow/platform/native/render/opengl/GL.hx",799,0x9056cf0a)
		HX_STACK_ARG(program,"program")
		HX_STACK_LINE(800)
		::snow::platform::native::render::opengl::GL_obj::snow_gl_delete_program(program->id);
		HX_STACK_LINE(801)
		program->set_invalidated(true);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,deleteProgram,(void))

Void GL_obj::deleteRenderbuffer( ::snow::platform::native::render::opengl::GLRBO renderbuffer){
{
		HX_STACK_FRAME("snow.platform.native.render.opengl.GL","deleteRenderbuffer",0xea9db93c,"snow.platform.native.render.opengl.GL.deleteRenderbuffer","snow/platform/native/render/opengl/GL.hx",805,0x9056cf0a)
		HX_STACK_ARG(renderbuffer,"renderbuffer")
		HX_STACK_LINE(806)
		::snow::platform::native::render::opengl::GL_obj::snow_gl_delete_render_buffer(renderbuffer->id);
		HX_STACK_LINE(807)
		renderbuffer->set_invalidated(true);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,deleteRenderbuffer,(void))

Void GL_obj::deleteShader( ::snow::platform::native::render::opengl::GLShader shader){
{
		HX_STACK_FRAME("snow.platform.native.render.opengl.GL","deleteShader",0xfc113b0b,"snow.platform.native.render.opengl.GL.deleteShader","snow/platform/native/render/opengl/GL.hx",811,0x9056cf0a)
		HX_STACK_ARG(shader,"shader")
		HX_STACK_LINE(812)
		::snow::platform::native::render::opengl::GL_obj::snow_gl_delete_shader(shader->id);
		HX_STACK_LINE(813)
		shader->set_invalidated(true);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,deleteShader,(void))

Void GL_obj::deleteTexture( ::snow::platform::native::render::opengl::GLTexture texture){
{
		HX_STACK_FRAME("snow.platform.native.render.opengl.GL","deleteTexture",0xd25cb635,"snow.platform.native.render.opengl.GL.deleteTexture","snow/platform/native/render/opengl/GL.hx",817,0x9056cf0a)
		HX_STACK_ARG(texture,"texture")
		HX_STACK_LINE(818)
		::snow::platform::native::render::opengl::GL_obj::snow_gl_delete_texture(texture->id);
		HX_STACK_LINE(819)
		texture->set_invalidated(true);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,deleteTexture,(void))

Void GL_obj::depthFunc( int func){
{
		HX_STACK_FRAME("snow.platform.native.render.opengl.GL","depthFunc",0x8c04d9ac,"snow.platform.native.render.opengl.GL.depthFunc","snow/platform/native/render/opengl/GL.hx",824,0x9056cf0a)
		HX_STACK_ARG(func,"func")
		HX_STACK_LINE(824)
		::snow::platform::native::render::opengl::GL_obj::snow_gl_depth_func(func);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,depthFunc,(void))

Void GL_obj::depthMask( bool flag){
{
		HX_STACK_FRAME("snow.platform.native.render.opengl.GL","depthMask",0x90962f54,"snow.platform.native.render.opengl.GL.depthMask","snow/platform/native/render/opengl/GL.hx",829,0x9056cf0a)
		HX_STACK_ARG(flag,"flag")
		HX_STACK_LINE(829)
		::snow::platform::native::render::opengl::GL_obj::snow_gl_depth_mask(flag);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,depthMask,(void))

Void GL_obj::depthRange( Float zNear,Float zFar){
{
		HX_STACK_FRAME("snow.platform.native.render.opengl.GL","depthRange",0xd3d05255,"snow.platform.native.render.opengl.GL.depthRange","snow/platform/native/render/opengl/GL.hx",834,0x9056cf0a)
		HX_STACK_ARG(zNear,"zNear")
		HX_STACK_ARG(zFar,"zFar")
		HX_STACK_LINE(834)
		::snow::platform::native::render::opengl::GL_obj::snow_gl_depth_range(zNear,zFar);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,depthRange,(void))

Void GL_obj::detachShader( ::snow::platform::native::render::opengl::GLProgram program,::snow::platform::native::render::opengl::GLShader shader){
{
		HX_STACK_FRAME("snow.platform.native.render.opengl.GL","detachShader",0x63062633,"snow.platform.native.render.opengl.GL.detachShader","snow/platform/native/render/opengl/GL.hx",839,0x9056cf0a)
		HX_STACK_ARG(program,"program")
		HX_STACK_ARG(shader,"shader")
		HX_STACK_LINE(839)
		::snow::platform::native::render::opengl::GL_obj::snow_gl_detach_shader(program->id,shader->id);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,detachShader,(void))

Void GL_obj::disable( int cap){
{
		HX_STACK_FRAME("snow.platform.native.render.opengl.GL","disable",0x01f6126d,"snow.platform.native.render.opengl.GL.disable","snow/platform/native/render/opengl/GL.hx",844,0x9056cf0a)
		HX_STACK_ARG(cap,"cap")
		HX_STACK_LINE(844)
		::snow::platform::native::render::opengl::GL_obj::snow_gl_disable(cap);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,disable,(void))

Void GL_obj::disableVertexAttribArray( int index){
{
		HX_STACK_FRAME("snow.platform.native.render.opengl.GL","disableVertexAttribArray",0x9be4dbbe,"snow.platform.native.render.opengl.GL.disableVertexAttribArray","snow/platform/native/render/opengl/GL.hx",849,0x9056cf0a)
		HX_STACK_ARG(index,"index")
		HX_STACK_LINE(849)
		::snow::platform::native::render::opengl::GL_obj::snow_gl_disable_vertex_attrib_array(index);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,disableVertexAttribArray,(void))

Void GL_obj::drawArrays( int mode,int first,int count){
{
		HX_STACK_FRAME("snow.platform.native.render.opengl.GL","drawArrays",0x8cf8ac79,"snow.platform.native.render.opengl.GL.drawArrays","snow/platform/native/render/opengl/GL.hx",854,0x9056cf0a)
		HX_STACK_ARG(mode,"mode")
		HX_STACK_ARG(first,"first")
		HX_STACK_ARG(count,"count")
		HX_STACK_LINE(854)
		::snow::platform::native::render::opengl::GL_obj::snow_gl_draw_arrays(mode,first,count);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GL_obj,drawArrays,(void))

Void GL_obj::drawElements( int mode,int count,int type,int offset){
{
		HX_STACK_FRAME("snow.platform.native.render.opengl.GL","drawElements",0xd21017b6,"snow.platform.native.render.opengl.GL.drawElements","snow/platform/native/render/opengl/GL.hx",859,0x9056cf0a)
		HX_STACK_ARG(mode,"mode")
		HX_STACK_ARG(count,"count")
		HX_STACK_ARG(type,"type")
		HX_STACK_ARG(offset,"offset")
		HX_STACK_LINE(859)
		::snow::platform::native::render::opengl::GL_obj::snow_gl_draw_elements(mode,count,type,offset);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(GL_obj,drawElements,(void))

Void GL_obj::enable( int cap){
{
		HX_STACK_FRAME("snow.platform.native.render.opengl.GL","enable",0xc7873d9e,"snow.platform.native.render.opengl.GL.enable","snow/platform/native/render/opengl/GL.hx",864,0x9056cf0a)
		HX_STACK_ARG(cap,"cap")
		HX_STACK_LINE(864)
		::snow::platform::native::render::opengl::GL_obj::snow_gl_enable(cap);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,enable,(void))

Void GL_obj::enableVertexAttribArray( int index){
{
		HX_STACK_FRAME("snow.platform.native.render.opengl.GL","enableVertexAttribArray",0xd174096d,"snow.platform.native.render.opengl.GL.enableVertexAttribArray","snow/platform/native/render/opengl/GL.hx",869,0x9056cf0a)
		HX_STACK_ARG(index,"index")
		HX_STACK_LINE(869)
		::snow::platform::native::render::opengl::GL_obj::snow_gl_enable_vertex_attrib_array(index);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,enableVertexAttribArray,(void))

Void GL_obj::finish( ){
{
		HX_STACK_FRAME("snow.platform.native.render.opengl.GL","finish",0x557ecf6e,"snow.platform.native.render.opengl.GL.finish","snow/platform/native/render/opengl/GL.hx",874,0x9056cf0a)
		HX_STACK_LINE(874)
		::snow::platform::native::render::opengl::GL_obj::snow_gl_finish();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(GL_obj,finish,(void))

Void GL_obj::flush( ){
{
		HX_STACK_FRAME("snow.platform.native.render.opengl.GL","flush",0x4e277009,"snow.platform.native.render.opengl.GL.flush","snow/platform/native/render/opengl/GL.hx",879,0x9056cf0a)
		HX_STACK_LINE(879)
		::snow::platform::native::render::opengl::GL_obj::snow_gl_flush();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(GL_obj,flush,(void))

Void GL_obj::framebufferRenderbuffer( int target,int attachment,int renderbuffertarget,::snow::platform::native::render::opengl::GLRBO renderbuffer){
{
		HX_STACK_FRAME("snow.platform.native.render.opengl.GL","framebufferRenderbuffer",0x5bcc9fe8,"snow.platform.native.render.opengl.GL.framebufferRenderbuffer","snow/platform/native/render/opengl/GL.hx",884,0x9056cf0a)
		HX_STACK_ARG(target,"target")
		HX_STACK_ARG(attachment,"attachment")
		HX_STACK_ARG(renderbuffertarget,"renderbuffertarget")
		HX_STACK_ARG(renderbuffer,"renderbuffer")
		HX_STACK_LINE(884)
		::snow::platform::native::render::opengl::GL_obj::snow_gl_framebuffer_renderbuffer(target,attachment,renderbuffertarget,renderbuffer->id);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(GL_obj,framebufferRenderbuffer,(void))

Void GL_obj::framebufferTexture2D( int target,int attachment,int textarget,::snow::platform::native::render::opengl::GLTexture texture,int level){
{
		HX_STACK_FRAME("snow.platform.native.render.opengl.GL","framebufferTexture2D",0xd8280f1b,"snow.platform.native.render.opengl.GL.framebufferTexture2D","snow/platform/native/render/opengl/GL.hx",889,0x9056cf0a)
		HX_STACK_ARG(target,"target")
		HX_STACK_ARG(attachment,"attachment")
		HX_STACK_ARG(textarget,"textarget")
		HX_STACK_ARG(texture,"texture")
		HX_STACK_ARG(level,"level")
		HX_STACK_LINE(889)
		::snow::platform::native::render::opengl::GL_obj::snow_gl_framebuffer_texture2D(target,attachment,textarget,texture->id,level);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(GL_obj,framebufferTexture2D,(void))

Void GL_obj::frontFace( int mode){
{
		HX_STACK_FRAME("snow.platform.native.render.opengl.GL","frontFace",0x727d95ab,"snow.platform.native.render.opengl.GL.frontFace","snow/platform/native/render/opengl/GL.hx",894,0x9056cf0a)
		HX_STACK_ARG(mode,"mode")
		HX_STACK_LINE(894)
		::snow::platform::native::render::opengl::GL_obj::snow_gl_front_face(mode);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,frontFace,(void))

Void GL_obj::generateMipmap( int target){
{
		HX_STACK_FRAME("snow.platform.native.render.opengl.GL","generateMipmap",0xda2a78b8,"snow.platform.native.render.opengl.GL.generateMipmap","snow/platform/native/render/opengl/GL.hx",899,0x9056cf0a)
		HX_STACK_ARG(target,"target")
		HX_STACK_LINE(899)
		::snow::platform::native::render::opengl::GL_obj::snow_gl_generate_mipmap(target);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,generateMipmap,(void))

Dynamic GL_obj::getActiveAttrib( ::snow::platform::native::render::opengl::GLProgram program,int index){
	HX_STACK_FRAME("snow.platform.native.render.opengl.GL","getActiveAttrib",0x1d13c0eb,"snow.platform.native.render.opengl.GL.getActiveAttrib","snow/platform/native/render/opengl/GL.hx",904,0x9056cf0a)
	HX_STACK_ARG(program,"program")
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(904)
	return ::snow::platform::native::render::opengl::GL_obj::snow_gl_get_active_attrib(program->id,index);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,getActiveAttrib,return )

Dynamic GL_obj::getActiveUniform( ::snow::platform::native::render::opengl::GLProgram program,int index){
	HX_STACK_FRAME("snow.platform.native.render.opengl.GL","getActiveUniform",0xd06bd473,"snow.platform.native.render.opengl.GL.getActiveUniform","snow/platform/native/render/opengl/GL.hx",909,0x9056cf0a)
	HX_STACK_ARG(program,"program")
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(909)
	return ::snow::platform::native::render::opengl::GL_obj::snow_gl_get_active_uniform(program->id,index);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,getActiveUniform,return )

Array< ::Dynamic > GL_obj::getAttachedShaders( ::snow::platform::native::render::opengl::GLProgram program){
	HX_STACK_FRAME("snow.platform.native.render.opengl.GL","getAttachedShaders",0x465e7a4f,"snow.platform.native.render.opengl.GL.getAttachedShaders","snow/platform/native/render/opengl/GL.hx",914,0x9056cf0a)
	HX_STACK_ARG(program,"program")
	HX_STACK_LINE(914)
	return program->shaders;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,getAttachedShaders,return )

int GL_obj::getAttribLocation( ::snow::platform::native::render::opengl::GLProgram program,::String name){
	HX_STACK_FRAME("snow.platform.native.render.opengl.GL","getAttribLocation",0x5ddd7b9a,"snow.platform.native.render.opengl.GL.getAttribLocation","snow/platform/native/render/opengl/GL.hx",919,0x9056cf0a)
	HX_STACK_ARG(program,"program")
	HX_STACK_ARG(name,"name")
	HX_STACK_LINE(919)
	return ::snow::platform::native::render::opengl::GL_obj::snow_gl_get_attrib_location(program->id,name);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,getAttribLocation,return )

Dynamic GL_obj::getBufferParameter( int target,int pname){
	HX_STACK_FRAME("snow.platform.native.render.opengl.GL","getBufferParameter",0xc79ba42e,"snow.platform.native.render.opengl.GL.getBufferParameter","snow/platform/native/render/opengl/GL.hx",924,0x9056cf0a)
	HX_STACK_ARG(target,"target")
	HX_STACK_ARG(pname,"pname")
	HX_STACK_LINE(924)
	return ::snow::platform::native::render::opengl::GL_obj::snow_gl_get_buffer_paramerter(target,pname);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,getBufferParameter,return )

Dynamic GL_obj::getContextAttributes( ){
	HX_STACK_FRAME("snow.platform.native.render.opengl.GL","getContextAttributes",0x61e7828b,"snow.platform.native.render.opengl.GL.getContextAttributes","snow/platform/native/render/opengl/GL.hx",931,0x9056cf0a)
	HX_STACK_LINE(931)
	return ::snow::platform::native::render::opengl::GL_obj::snow_gl_get_context_attributes();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(GL_obj,getContextAttributes,return )

int GL_obj::getError( ){
	HX_STACK_FRAME("snow.platform.native.render.opengl.GL","getError",0x0c56a72d,"snow.platform.native.render.opengl.GL.getError","snow/platform/native/render/opengl/GL.hx",936,0x9056cf0a)
	HX_STACK_LINE(936)
	return ::snow::platform::native::render::opengl::GL_obj::snow_gl_get_error();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(GL_obj,getError,return )

Dynamic GL_obj::getExtension( ::String name){
	HX_STACK_FRAME("snow.platform.native.render.opengl.GL","getExtension",0x6cbf8564,"snow.platform.native.render.opengl.GL.getExtension","snow/platform/native/render/opengl/GL.hx",942,0x9056cf0a)
	HX_STACK_ARG(name,"name")
	HX_STACK_LINE(942)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,getExtension,return )

Dynamic GL_obj::getFramebufferAttachmentParameter( int target,int attachment,int pname){
	HX_STACK_FRAME("snow.platform.native.render.opengl.GL","getFramebufferAttachmentParameter",0x5ebbba54,"snow.platform.native.render.opengl.GL.getFramebufferAttachmentParameter","snow/platform/native/render/opengl/GL.hx",948,0x9056cf0a)
	HX_STACK_ARG(target,"target")
	HX_STACK_ARG(attachment,"attachment")
	HX_STACK_ARG(pname,"pname")
	HX_STACK_LINE(948)
	return ::snow::platform::native::render::opengl::GL_obj::snow_gl_get_framebuffer_attachment_parameter(target,attachment,pname);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GL_obj,getFramebufferAttachmentParameter,return )

Dynamic GL_obj::getParameter( int pname){
	HX_STACK_FRAME("snow.platform.native.render.opengl.GL","getParameter",0xd05f278e,"snow.platform.native.render.opengl.GL.getParameter","snow/platform/native/render/opengl/GL.hx",953,0x9056cf0a)
	HX_STACK_ARG(pname,"pname")
	HX_STACK_LINE(953)
	return ::snow::platform::native::render::opengl::GL_obj::snow_gl_get_parameter(pname);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,getParameter,return )

::String GL_obj::getProgramInfoLog( ::snow::platform::native::render::opengl::GLProgram program){
	HX_STACK_FRAME("snow.platform.native.render.opengl.GL","getProgramInfoLog",0xcec0528d,"snow.platform.native.render.opengl.GL.getProgramInfoLog","snow/platform/native/render/opengl/GL.hx",958,0x9056cf0a)
	HX_STACK_ARG(program,"program")
	HX_STACK_LINE(958)
	return ::snow::platform::native::render::opengl::GL_obj::snow_gl_get_program_info_log(program->id);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,getProgramInfoLog,return )

int GL_obj::getProgramParameter( ::snow::platform::native::render::opengl::GLProgram program,int pname){
	HX_STACK_FRAME("snow.platform.native.render.opengl.GL","getProgramParameter",0x6e179f40,"snow.platform.native.render.opengl.GL.getProgramParameter","snow/platform/native/render/opengl/GL.hx",963,0x9056cf0a)
	HX_STACK_ARG(program,"program")
	HX_STACK_ARG(pname,"pname")
	HX_STACK_LINE(963)
	return ::snow::platform::native::render::opengl::GL_obj::snow_gl_get_program_parameter(program->id,pname);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,getProgramParameter,return )

Dynamic GL_obj::getRenderbufferParameter( int target,int pname){
	HX_STACK_FRAME("snow.platform.native.render.opengl.GL","getRenderbufferParameter",0x8e483358,"snow.platform.native.render.opengl.GL.getRenderbufferParameter","snow/platform/native/render/opengl/GL.hx",968,0x9056cf0a)
	HX_STACK_ARG(target,"target")
	HX_STACK_ARG(pname,"pname")
	HX_STACK_LINE(968)
	return ::snow::platform::native::render::opengl::GL_obj::snow_gl_get_render_buffer_parameter(target,pname);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,getRenderbufferParameter,return )

::String GL_obj::getShaderInfoLog( ::snow::platform::native::render::opengl::GLShader shader){
	HX_STACK_FRAME("snow.platform.native.render.opengl.GL","getShaderInfoLog",0xece65c76,"snow.platform.native.render.opengl.GL.getShaderInfoLog","snow/platform/native/render/opengl/GL.hx",973,0x9056cf0a)
	HX_STACK_ARG(shader,"shader")
	HX_STACK_LINE(973)
	return ::snow::platform::native::render::opengl::GL_obj::snow_gl_get_shader_info_log(shader->id);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,getShaderInfoLog,return )

int GL_obj::getShaderParameter( ::snow::platform::native::render::opengl::GLShader shader,int pname){
	HX_STACK_FRAME("snow.platform.native.render.opengl.GL","getShaderParameter",0xe942b569,"snow.platform.native.render.opengl.GL.getShaderParameter","snow/platform/native/render/opengl/GL.hx",978,0x9056cf0a)
	HX_STACK_ARG(shader,"shader")
	HX_STACK_ARG(pname,"pname")
	HX_STACK_LINE(978)
	return ::snow::platform::native::render::opengl::GL_obj::snow_gl_get_shader_parameter(shader->id,pname);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,getShaderParameter,return )

Dynamic GL_obj::getShaderPrecisionFormat( int shadertype,int precisiontype){
	HX_STACK_FRAME("snow.platform.native.render.opengl.GL","getShaderPrecisionFormat",0x20402ad5,"snow.platform.native.render.opengl.GL.getShaderPrecisionFormat","snow/platform/native/render/opengl/GL.hx",983,0x9056cf0a)
	HX_STACK_ARG(shadertype,"shadertype")
	HX_STACK_ARG(precisiontype,"precisiontype")
	HX_STACK_LINE(983)
	return ::snow::platform::native::render::opengl::GL_obj::snow_gl_get_shader_precision_format(shadertype,precisiontype);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,getShaderPrecisionFormat,return )

::String GL_obj::getShaderSource( ::snow::platform::native::render::opengl::GLShader shader){
	HX_STACK_FRAME("snow.platform.native.render.opengl.GL","getShaderSource",0x7ef5d91b,"snow.platform.native.render.opengl.GL.getShaderSource","snow/platform/native/render/opengl/GL.hx",988,0x9056cf0a)
	HX_STACK_ARG(shader,"shader")
	HX_STACK_LINE(988)
	return ::snow::platform::native::render::opengl::GL_obj::snow_gl_get_shader_source(shader->id);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,getShaderSource,return )

Array< ::String > GL_obj::getSupportedExtensions( ){
	HX_STACK_FRAME("snow.platform.native.render.opengl.GL","getSupportedExtensions",0xa0722e07,"snow.platform.native.render.opengl.GL.getSupportedExtensions","snow/platform/native/render/opengl/GL.hx",992,0x9056cf0a)
	HX_STACK_LINE(993)
	Array< ::String > result = Array_obj< ::String >::__new();		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(994)
	::snow::platform::native::render::opengl::GL_obj::snow_gl_get_supported_extensions(result);
	HX_STACK_LINE(995)
	return result;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(GL_obj,getSupportedExtensions,return )

Dynamic GL_obj::getTexParameter( int target,int pname){
	HX_STACK_FRAME("snow.platform.native.render.opengl.GL","getTexParameter",0x8cc4cdfd,"snow.platform.native.render.opengl.GL.getTexParameter","snow/platform/native/render/opengl/GL.hx",1000,0x9056cf0a)
	HX_STACK_ARG(target,"target")
	HX_STACK_ARG(pname,"pname")
	HX_STACK_LINE(1000)
	return ::snow::platform::native::render::opengl::GL_obj::snow_gl_get_tex_parameter(target,pname);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,getTexParameter,return )

Dynamic GL_obj::getUniform( ::snow::platform::native::render::opengl::GLProgram program,int location){
	HX_STACK_FRAME("snow.platform.native.render.opengl.GL","getUniform",0x980a7fd9,"snow.platform.native.render.opengl.GL.getUniform","snow/platform/native/render/opengl/GL.hx",1005,0x9056cf0a)
	HX_STACK_ARG(program,"program")
	HX_STACK_ARG(location,"location")
	HX_STACK_LINE(1005)
	return ::snow::platform::native::render::opengl::GL_obj::snow_gl_get_uniform(program->id,location);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,getUniform,return )

Dynamic GL_obj::getUniformLocation( ::snow::platform::native::render::opengl::GLProgram program,::String name){
	HX_STACK_FRAME("snow.platform.native.render.opengl.GL","getUniformLocation",0x02bbab2e,"snow.platform.native.render.opengl.GL.getUniformLocation","snow/platform/native/render/opengl/GL.hx",1010,0x9056cf0a)
	HX_STACK_ARG(program,"program")
	HX_STACK_ARG(name,"name")
	HX_STACK_LINE(1010)
	return ::snow::platform::native::render::opengl::GL_obj::snow_gl_get_uniform_location(program->id,name);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,getUniformLocation,return )

Dynamic GL_obj::getVertexAttrib( int index,int pname){
	HX_STACK_FRAME("snow.platform.native.render.opengl.GL","getVertexAttrib",0x5d0d6509,"snow.platform.native.render.opengl.GL.getVertexAttrib","snow/platform/native/render/opengl/GL.hx",1015,0x9056cf0a)
	HX_STACK_ARG(index,"index")
	HX_STACK_ARG(pname,"pname")
	HX_STACK_LINE(1015)
	return ::snow::platform::native::render::opengl::GL_obj::snow_gl_get_vertex_attrib(index,pname);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,getVertexAttrib,return )

int GL_obj::getVertexAttribOffset( int index,int pname){
	HX_STACK_FRAME("snow.platform.native.render.opengl.GL","getVertexAttribOffset",0x27bc5d7c,"snow.platform.native.render.opengl.GL.getVertexAttribOffset","snow/platform/native/render/opengl/GL.hx",1020,0x9056cf0a)
	HX_STACK_ARG(index,"index")
	HX_STACK_ARG(pname,"pname")
	HX_STACK_LINE(1020)
	return ::snow::platform::native::render::opengl::GL_obj::snow_gl_get_vertex_attrib_offset(index,pname);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,getVertexAttribOffset,return )

Void GL_obj::hint( int target,int mode){
{
		HX_STACK_FRAME("snow.platform.native.render.opengl.GL","hint",0x38c43fe2,"snow.platform.native.render.opengl.GL.hint","snow/platform/native/render/opengl/GL.hx",1025,0x9056cf0a)
		HX_STACK_ARG(target,"target")
		HX_STACK_ARG(mode,"mode")
		HX_STACK_LINE(1025)
		::snow::platform::native::render::opengl::GL_obj::snow_gl_hint(target,mode);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,hint,(void))

bool GL_obj::isBuffer( ::snow::platform::native::render::opengl::GLBuffer buffer){
	HX_STACK_FRAME("snow.platform.native.render.opengl.GL","isBuffer",0x62542465,"snow.platform.native.render.opengl.GL.isBuffer","snow/platform/native/render/opengl/GL.hx",1030,0x9056cf0a)
	HX_STACK_ARG(buffer,"buffer")
	HX_STACK_LINE(1030)
	if (((bool((buffer != null())) && bool((buffer->id > (int)0))))){
		HX_STACK_LINE(1030)
		return ::snow::platform::native::render::opengl::GL_obj::snow_gl_is_buffer(buffer->id);
	}
	else{
		HX_STACK_LINE(1030)
		return false;
	}
	HX_STACK_LINE(1030)
	return false;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,isBuffer,return )

bool GL_obj::isEnabled( int cap){
	HX_STACK_FRAME("snow.platform.native.render.opengl.GL","isEnabled",0x73ec157c,"snow.platform.native.render.opengl.GL.isEnabled","snow/platform/native/render/opengl/GL.hx",1037,0x9056cf0a)
	HX_STACK_ARG(cap,"cap")
	HX_STACK_LINE(1037)
	return ::snow::platform::native::render::opengl::GL_obj::snow_gl_is_enabled(cap);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,isEnabled,return )

bool GL_obj::isFramebuffer( ::snow::platform::native::render::opengl::GLFBO framebuffer){
	HX_STACK_FRAME("snow.platform.native.render.opengl.GL","isFramebuffer",0x585ebf68,"snow.platform.native.render.opengl.GL.isFramebuffer","snow/platform/native/render/opengl/GL.hx",1042,0x9056cf0a)
	HX_STACK_ARG(framebuffer,"framebuffer")
	HX_STACK_LINE(1042)
	if (((bool((framebuffer != null())) && bool((framebuffer->id > (int)0))))){
		HX_STACK_LINE(1042)
		return ::snow::platform::native::render::opengl::GL_obj::snow_gl_is_framebuffer(framebuffer->id);
	}
	else{
		HX_STACK_LINE(1042)
		return false;
	}
	HX_STACK_LINE(1042)
	return false;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,isFramebuffer,return )

bool GL_obj::isProgram( ::snow::platform::native::render::opengl::GLProgram program){
	HX_STACK_FRAME("snow.platform.native.render.opengl.GL","isProgram",0xe9b45b7f,"snow.platform.native.render.opengl.GL.isProgram","snow/platform/native/render/opengl/GL.hx",1047,0x9056cf0a)
	HX_STACK_ARG(program,"program")
	HX_STACK_LINE(1047)
	if (((bool((program != null())) && bool((program->id > (int)0))))){
		HX_STACK_LINE(1047)
		return ::snow::platform::native::render::opengl::GL_obj::snow_gl_is_program(program->id);
	}
	else{
		HX_STACK_LINE(1047)
		return false;
	}
	HX_STACK_LINE(1047)
	return false;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,isProgram,return )

bool GL_obj::isRenderbuffer( ::snow::platform::native::render::opengl::GLRBO renderbuffer){
	HX_STACK_FRAME("snow.platform.native.render.opengl.GL","isRenderbuffer",0x8114cdfb,"snow.platform.native.render.opengl.GL.isRenderbuffer","snow/platform/native/render/opengl/GL.hx",1052,0x9056cf0a)
	HX_STACK_ARG(renderbuffer,"renderbuffer")
	HX_STACK_LINE(1052)
	if (((bool((renderbuffer != null())) && bool((renderbuffer->id > (int)0))))){
		HX_STACK_LINE(1052)
		return ::snow::platform::native::render::opengl::GL_obj::snow_gl_is_renderbuffer(renderbuffer->id);
	}
	else{
		HX_STACK_LINE(1052)
		return false;
	}
	HX_STACK_LINE(1052)
	return false;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,isRenderbuffer,return )

bool GL_obj::isShader( ::snow::platform::native::render::opengl::GLShader shader){
	HX_STACK_FRAME("snow.platform.native.render.opengl.GL","isShader",0xaee0268a,"snow.platform.native.render.opengl.GL.isShader","snow/platform/native/render/opengl/GL.hx",1057,0x9056cf0a)
	HX_STACK_ARG(shader,"shader")
	HX_STACK_LINE(1057)
	if (((bool((shader != null())) && bool((shader->id > (int)0))))){
		HX_STACK_LINE(1057)
		return ::snow::platform::native::render::opengl::GL_obj::snow_gl_is_shader(shader->id);
	}
	else{
		HX_STACK_LINE(1057)
		return false;
	}
	HX_STACK_LINE(1057)
	return false;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,isShader,return )

bool GL_obj::isTexture( ::snow::platform::native::render::opengl::GLTexture texture){
	HX_STACK_FRAME("snow.platform.native.render.opengl.GL","isTexture",0x949bd9d6,"snow.platform.native.render.opengl.GL.isTexture","snow/platform/native/render/opengl/GL.hx",1062,0x9056cf0a)
	HX_STACK_ARG(texture,"texture")
	HX_STACK_LINE(1062)
	if (((bool((texture != null())) && bool((texture->id > (int)0))))){
		HX_STACK_LINE(1062)
		return ::snow::platform::native::render::opengl::GL_obj::snow_gl_is_texture(texture->id);
	}
	else{
		HX_STACK_LINE(1062)
		return false;
	}
	HX_STACK_LINE(1062)
	return false;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,isTexture,return )

Void GL_obj::lineWidth( Float width){
{
		HX_STACK_FRAME("snow.platform.native.render.opengl.GL","lineWidth",0x031a4d37,"snow.platform.native.render.opengl.GL.lineWidth","snow/platform/native/render/opengl/GL.hx",1067,0x9056cf0a)
		HX_STACK_ARG(width,"width")
		HX_STACK_LINE(1067)
		::snow::platform::native::render::opengl::GL_obj::snow_gl_line_width(width);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,lineWidth,(void))

Void GL_obj::linkProgram( ::snow::platform::native::render::opengl::GLProgram program){
{
		HX_STACK_FRAME("snow.platform.native.render.opengl.GL","linkProgram",0xd2587caf,"snow.platform.native.render.opengl.GL.linkProgram","snow/platform/native/render/opengl/GL.hx",1072,0x9056cf0a)
		HX_STACK_ARG(program,"program")
		HX_STACK_LINE(1072)
		::snow::platform::native::render::opengl::GL_obj::snow_gl_link_program(program->id);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,linkProgram,(void))

Dynamic GL_obj::load( ::String inName,int inArgCount){
	HX_STACK_FRAME("snow.platform.native.render.opengl.GL","load",0x3b6d9c81,"snow.platform.native.render.opengl.GL.load","snow/platform/native/render/opengl/GL.hx",1077,0x9056cf0a)
	HX_STACK_ARG(inName,"inName")
	HX_STACK_ARG(inArgCount,"inArgCount")
	HX_STACK_LINE(1077)
	try
	{
	HX_STACK_CATCHABLE(Dynamic, 0);
	{
		HX_STACK_LINE(1078)
		return ::snow::utils::Libs_obj::load(HX_CSTRING("snow"),inName,inArgCount);
	}
	}
	catch(Dynamic __e){
		{
			HX_STACK_BEGIN_CATCH
			Dynamic e = __e;{
				HX_STACK_LINE(1080)
				::haxe::Log_obj::trace(e,hx::SourceInfo(HX_CSTRING("GL.hx"),1080,HX_CSTRING("snow.platform.native.render.opengl.GL"),HX_CSTRING("load")));
				HX_STACK_LINE(1081)
				return null();
			}
		}
	}
	HX_STACK_LINE(1077)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,load,return )

Void GL_obj::pixelStorei( int pname,int param){
{
		HX_STACK_FRAME("snow.platform.native.render.opengl.GL","pixelStorei",0xc9a50393,"snow.platform.native.render.opengl.GL.pixelStorei","snow/platform/native/render/opengl/GL.hx",1087,0x9056cf0a)
		HX_STACK_ARG(pname,"pname")
		HX_STACK_ARG(param,"param")
		HX_STACK_LINE(1087)
		::snow::platform::native::render::opengl::GL_obj::snow_gl_pixel_storei(pname,param);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,pixelStorei,(void))

Void GL_obj::polygonOffset( Float factor,Float units){
{
		HX_STACK_FRAME("snow.platform.native.render.opengl.GL","polygonOffset",0x3b3f7ff2,"snow.platform.native.render.opengl.GL.polygonOffset","snow/platform/native/render/opengl/GL.hx",1092,0x9056cf0a)
		HX_STACK_ARG(factor,"factor")
		HX_STACK_ARG(units,"units")
		HX_STACK_LINE(1092)
		::snow::platform::native::render::opengl::GL_obj::snow_gl_polygon_offset(factor,units);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,polygonOffset,(void))

Void GL_obj::readPixels( int x,int y,int width,int height,int format,int type,::snow::platform::native::utils::ArrayBufferView pixels){
{
		HX_STACK_FRAME("snow.platform.native.render.opengl.GL","readPixels",0x196a8bbe,"snow.platform.native.render.opengl.GL.readPixels","snow/platform/native/render/opengl/GL.hx",1097,0x9056cf0a)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
		HX_STACK_ARG(format,"format")
		HX_STACK_ARG(type,"type")
		HX_STACK_ARG(pixels,"pixels")
		HX_STACK_LINE(1097)
		::snow::platform::native::render::opengl::GL_obj::snow_gl_read_pixels(x,y,width,height,format,type,(  (((pixels == null()))) ? ::snow::platform::native::utils::ByteArray(null()) : ::snow::platform::native::utils::ByteArray(pixels->buffer) ),(  (((pixels == null()))) ? Dynamic(null()) : Dynamic(pixels->byteOffset) ));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC7(GL_obj,readPixels,(void))

Void GL_obj::renderbufferStorage( int target,int internalformat,int width,int height){
{
		HX_STACK_FRAME("snow.platform.native.render.opengl.GL","renderbufferStorage",0x5eeb7d0a,"snow.platform.native.render.opengl.GL.renderbufferStorage","snow/platform/native/render/opengl/GL.hx",1102,0x9056cf0a)
		HX_STACK_ARG(target,"target")
		HX_STACK_ARG(internalformat,"internalformat")
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
		HX_STACK_LINE(1102)
		::snow::platform::native::render::opengl::GL_obj::snow_gl_renderbuffer_storage(target,internalformat,width,height);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(GL_obj,renderbufferStorage,(void))

Void GL_obj::sampleCoverage( Float value,bool invert){
{
		HX_STACK_FRAME("snow.platform.native.render.opengl.GL","sampleCoverage",0xba9e0a4d,"snow.platform.native.render.opengl.GL.sampleCoverage","snow/platform/native/render/opengl/GL.hx",1107,0x9056cf0a)
		HX_STACK_ARG(value,"value")
		HX_STACK_ARG(invert,"invert")
		HX_STACK_LINE(1107)
		::snow::platform::native::render::opengl::GL_obj::snow_gl_sample_coverage(value,invert);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,sampleCoverage,(void))

Void GL_obj::scissor( int x,int y,int width,int height){
{
		HX_STACK_FRAME("snow.platform.native.render.opengl.GL","scissor",0x5584d0a1,"snow.platform.native.render.opengl.GL.scissor","snow/platform/native/render/opengl/GL.hx",1112,0x9056cf0a)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
		HX_STACK_LINE(1112)
		::snow::platform::native::render::opengl::GL_obj::snow_gl_scissor(x,y,width,height);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(GL_obj,scissor,(void))

Void GL_obj::shaderSource( ::snow::platform::native::render::opengl::GLShader shader,::String source){
{
		HX_STACK_FRAME("snow.platform.native.render.opengl.GL","shaderSource",0x1a72a33b,"snow.platform.native.render.opengl.GL.shaderSource","snow/platform/native/render/opengl/GL.hx",1117,0x9056cf0a)
		HX_STACK_ARG(shader,"shader")
		HX_STACK_ARG(source,"source")
		HX_STACK_LINE(1117)
		::snow::platform::native::render::opengl::GL_obj::snow_gl_shader_source(shader->id,source);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,shaderSource,(void))

Void GL_obj::stencilFunc( int func,int ref,int mask){
{
		HX_STACK_FRAME("snow.platform.native.render.opengl.GL","stencilFunc",0x899b5265,"snow.platform.native.render.opengl.GL.stencilFunc","snow/platform/native/render/opengl/GL.hx",1122,0x9056cf0a)
		HX_STACK_ARG(func,"func")
		HX_STACK_ARG(ref,"ref")
		HX_STACK_ARG(mask,"mask")
		HX_STACK_LINE(1122)
		::snow::platform::native::render::opengl::GL_obj::snow_gl_stencil_func(func,ref,mask);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GL_obj,stencilFunc,(void))

Void GL_obj::stencilFuncSeparate( int face,int func,int ref,int mask){
{
		HX_STACK_FRAME("snow.platform.native.render.opengl.GL","stencilFuncSeparate",0x8a499ae8,"snow.platform.native.render.opengl.GL.stencilFuncSeparate","snow/platform/native/render/opengl/GL.hx",1127,0x9056cf0a)
		HX_STACK_ARG(face,"face")
		HX_STACK_ARG(func,"func")
		HX_STACK_ARG(ref,"ref")
		HX_STACK_ARG(mask,"mask")
		HX_STACK_LINE(1127)
		::snow::platform::native::render::opengl::GL_obj::snow_gl_stencil_func_separate(face,func,ref,mask);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(GL_obj,stencilFuncSeparate,(void))

Void GL_obj::stencilMask( int mask){
{
		HX_STACK_FRAME("snow.platform.native.render.opengl.GL","stencilMask",0x8e2ca80d,"snow.platform.native.render.opengl.GL.stencilMask","snow/platform/native/render/opengl/GL.hx",1132,0x9056cf0a)
		HX_STACK_ARG(mask,"mask")
		HX_STACK_LINE(1132)
		::snow::platform::native::render::opengl::GL_obj::snow_gl_stencil_mask(mask);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,stencilMask,(void))

Void GL_obj::stencilMaskSeparate( int face,int mask){
{
		HX_STACK_FRAME("snow.platform.native.render.opengl.GL","stencilMaskSeparate",0x9e24d890,"snow.platform.native.render.opengl.GL.stencilMaskSeparate","snow/platform/native/render/opengl/GL.hx",1137,0x9056cf0a)
		HX_STACK_ARG(face,"face")
		HX_STACK_ARG(mask,"mask")
		HX_STACK_LINE(1137)
		::snow::platform::native::render::opengl::GL_obj::snow_gl_stencil_mask_separate(face,mask);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,stencilMaskSeparate,(void))

Void GL_obj::stencilOp( int fail,int zfail,int zpass){
{
		HX_STACK_FRAME("snow.platform.native.render.opengl.GL","stencilOp",0x48a90e02,"snow.platform.native.render.opengl.GL.stencilOp","snow/platform/native/render/opengl/GL.hx",1142,0x9056cf0a)
		HX_STACK_ARG(fail,"fail")
		HX_STACK_ARG(zfail,"zfail")
		HX_STACK_ARG(zpass,"zpass")
		HX_STACK_LINE(1142)
		::snow::platform::native::render::opengl::GL_obj::snow_gl_stencil_op(fail,zfail,zpass);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GL_obj,stencilOp,(void))

Void GL_obj::stencilOpSeparate( int face,int fail,int zfail,int zpass){
{
		HX_STACK_FRAME("snow.platform.native.render.opengl.GL","stencilOpSeparate",0x5417bb85,"snow.platform.native.render.opengl.GL.stencilOpSeparate","snow/platform/native/render/opengl/GL.hx",1147,0x9056cf0a)
		HX_STACK_ARG(face,"face")
		HX_STACK_ARG(fail,"fail")
		HX_STACK_ARG(zfail,"zfail")
		HX_STACK_ARG(zpass,"zpass")
		HX_STACK_LINE(1147)
		::snow::platform::native::render::opengl::GL_obj::snow_gl_stencil_op_separate(face,fail,zfail,zpass);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(GL_obj,stencilOpSeparate,(void))

Void GL_obj::texImage2D( int target,int level,int internalformat,int width,int height,int border,int format,int type,::snow::platform::native::utils::ArrayBufferView pixels){
{
		HX_STACK_FRAME("snow.platform.native.render.opengl.GL","texImage2D",0x4cac3561,"snow.platform.native.render.opengl.GL.texImage2D","snow/platform/native/render/opengl/GL.hx",1152,0x9056cf0a)
		HX_STACK_ARG(target,"target")
		HX_STACK_ARG(level,"level")
		HX_STACK_ARG(internalformat,"internalformat")
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
		HX_STACK_ARG(border,"border")
		HX_STACK_ARG(format,"format")
		HX_STACK_ARG(type,"type")
		HX_STACK_ARG(pixels,"pixels")
		HX_STACK_LINE(1152)
		::snow::platform::native::render::opengl::GL_obj::snow_gl_tex_image_2d(target,level,internalformat,width,height,border,format,type,(  (((pixels == null()))) ? ::snow::platform::native::utils::ByteArray(null()) : ::snow::platform::native::utils::ByteArray(pixels->buffer) ),(  (((pixels == null()))) ? Dynamic(null()) : Dynamic(pixels->byteOffset) ));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC9(GL_obj,texImage2D,(void))

Void GL_obj::texParameterf( int target,int pname,Float param){
{
		HX_STACK_FRAME("snow.platform.native.render.opengl.GL","texParameterf",0x112381a9,"snow.platform.native.render.opengl.GL.texParameterf","snow/platform/native/render/opengl/GL.hx",1157,0x9056cf0a)
		HX_STACK_ARG(target,"target")
		HX_STACK_ARG(pname,"pname")
		HX_STACK_ARG(param,"param")
		HX_STACK_LINE(1157)
		::snow::platform::native::render::opengl::GL_obj::snow_gl_tex_parameterf(target,pname,param);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GL_obj,texParameterf,(void))

Void GL_obj::texParameteri( int target,int pname,int param){
{
		HX_STACK_FRAME("snow.platform.native.render.opengl.GL","texParameteri",0x112381ac,"snow.platform.native.render.opengl.GL.texParameteri","snow/platform/native/render/opengl/GL.hx",1162,0x9056cf0a)
		HX_STACK_ARG(target,"target")
		HX_STACK_ARG(pname,"pname")
		HX_STACK_ARG(param,"param")
		HX_STACK_LINE(1162)
		::snow::platform::native::render::opengl::GL_obj::snow_gl_tex_parameteri(target,pname,param);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GL_obj,texParameteri,(void))

Void GL_obj::texSubImage2D( int target,int level,int xoffset,int yoffset,int width,int height,int format,int type,::snow::platform::native::utils::ArrayBufferView pixels){
{
		HX_STACK_FRAME("snow.platform.native.render.opengl.GL","texSubImage2D",0xfd828959,"snow.platform.native.render.opengl.GL.texSubImage2D","snow/platform/native/render/opengl/GL.hx",1167,0x9056cf0a)
		HX_STACK_ARG(target,"target")
		HX_STACK_ARG(level,"level")
		HX_STACK_ARG(xoffset,"xoffset")
		HX_STACK_ARG(yoffset,"yoffset")
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
		HX_STACK_ARG(format,"format")
		HX_STACK_ARG(type,"type")
		HX_STACK_ARG(pixels,"pixels")
		HX_STACK_LINE(1167)
		::snow::platform::native::render::opengl::GL_obj::snow_gl_tex_sub_image_2d(target,level,xoffset,yoffset,width,height,format,type,(  (((pixels == null()))) ? ::snow::platform::native::utils::ByteArray(null()) : ::snow::platform::native::utils::ByteArray(pixels->buffer) ),(  (((pixels == null()))) ? Dynamic(null()) : Dynamic(pixels->byteOffset) ));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC9(GL_obj,texSubImage2D,(void))

Void GL_obj::uniform1f( int location,Float x){
{
		HX_STACK_FRAME("snow.platform.native.render.opengl.GL","uniform1f",0xf99ab50e,"snow.platform.native.render.opengl.GL.uniform1f","snow/platform/native/render/opengl/GL.hx",1172,0x9056cf0a)
		HX_STACK_ARG(location,"location")
		HX_STACK_ARG(x,"x")
		HX_STACK_LINE(1172)
		::snow::platform::native::render::opengl::GL_obj::snow_gl_uniform1f(location,x);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,uniform1f,(void))

Void GL_obj::uniform1fv( int location,::snow::platform::native::utils::Float32Array x){
{
		HX_STACK_FRAME("snow.platform.native.render.opengl.GL","uniform1fv",0x6dc3b7a8,"snow.platform.native.render.opengl.GL.uniform1fv","snow/platform/native/render/opengl/GL.hx",1177,0x9056cf0a)
		HX_STACK_ARG(location,"location")
		HX_STACK_ARG(x,"x")
		HX_STACK_LINE(1177)
		::snow::platform::native::render::opengl::GL_obj::snow_gl_uniform1fv(location,x->buffer);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,uniform1fv,(void))

Void GL_obj::uniform1i( int location,int x){
{
		HX_STACK_FRAME("snow.platform.native.render.opengl.GL","uniform1i",0xf99ab511,"snow.platform.native.render.opengl.GL.uniform1i","snow/platform/native/render/opengl/GL.hx",1182,0x9056cf0a)
		HX_STACK_ARG(location,"location")
		HX_STACK_ARG(x,"x")
		HX_STACK_LINE(1182)
		::snow::platform::native::render::opengl::GL_obj::snow_gl_uniform1i(location,x);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,uniform1i,(void))

Void GL_obj::uniform1iv( int location,::snow::platform::native::utils::Int32Array v){
{
		HX_STACK_FRAME("snow.platform.native.render.opengl.GL","uniform1iv",0x6dc3ba45,"snow.platform.native.render.opengl.GL.uniform1iv","snow/platform/native/render/opengl/GL.hx",1187,0x9056cf0a)
		HX_STACK_ARG(location,"location")
		HX_STACK_ARG(v,"v")
		HX_STACK_LINE(1187)
		::snow::platform::native::render::opengl::GL_obj::snow_gl_uniform1iv(location,v->buffer);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,uniform1iv,(void))

Void GL_obj::uniform2f( int location,Float x,Float y){
{
		HX_STACK_FRAME("snow.platform.native.render.opengl.GL","uniform2f",0xf99ab5ed,"snow.platform.native.render.opengl.GL.uniform2f","snow/platform/native/render/opengl/GL.hx",1192,0x9056cf0a)
		HX_STACK_ARG(location,"location")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_LINE(1192)
		::snow::platform::native::render::opengl::GL_obj::snow_gl_uniform2f(location,x,y);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GL_obj,uniform2f,(void))

Void GL_obj::uniform2fv( int location,::snow::platform::native::utils::Float32Array v){
{
		HX_STACK_FRAME("snow.platform.native.render.opengl.GL","uniform2fv",0x6dc479e9,"snow.platform.native.render.opengl.GL.uniform2fv","snow/platform/native/render/opengl/GL.hx",1197,0x9056cf0a)
		HX_STACK_ARG(location,"location")
		HX_STACK_ARG(v,"v")
		HX_STACK_LINE(1197)
		::snow::platform::native::render::opengl::GL_obj::snow_gl_uniform2fv(location,v->buffer);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,uniform2fv,(void))

Void GL_obj::uniform2i( int location,int x,int y){
{
		HX_STACK_FRAME("snow.platform.native.render.opengl.GL","uniform2i",0xf99ab5f0,"snow.platform.native.render.opengl.GL.uniform2i","snow/platform/native/render/opengl/GL.hx",1202,0x9056cf0a)
		HX_STACK_ARG(location,"location")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_LINE(1202)
		::snow::platform::native::render::opengl::GL_obj::snow_gl_uniform2i(location,x,y);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GL_obj,uniform2i,(void))

Void GL_obj::uniform2iv( int location,::snow::platform::native::utils::Int32Array v){
{
		HX_STACK_FRAME("snow.platform.native.render.opengl.GL","uniform2iv",0x6dc47c86,"snow.platform.native.render.opengl.GL.uniform2iv","snow/platform/native/render/opengl/GL.hx",1207,0x9056cf0a)
		HX_STACK_ARG(location,"location")
		HX_STACK_ARG(v,"v")
		HX_STACK_LINE(1207)
		::snow::platform::native::render::opengl::GL_obj::snow_gl_uniform2iv(location,v->buffer);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,uniform2iv,(void))

Void GL_obj::uniform3f( int location,Float x,Float y,Float z){
{
		HX_STACK_FRAME("snow.platform.native.render.opengl.GL","uniform3f",0xf99ab6cc,"snow.platform.native.render.opengl.GL.uniform3f","snow/platform/native/render/opengl/GL.hx",1212,0x9056cf0a)
		HX_STACK_ARG(location,"location")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(z,"z")
		HX_STACK_LINE(1212)
		::snow::platform::native::render::opengl::GL_obj::snow_gl_uniform3f(location,x,y,z);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(GL_obj,uniform3f,(void))

Void GL_obj::uniform3fv( int location,::snow::platform::native::utils::Float32Array v){
{
		HX_STACK_FRAME("snow.platform.native.render.opengl.GL","uniform3fv",0x6dc53c2a,"snow.platform.native.render.opengl.GL.uniform3fv","snow/platform/native/render/opengl/GL.hx",1217,0x9056cf0a)
		HX_STACK_ARG(location,"location")
		HX_STACK_ARG(v,"v")
		HX_STACK_LINE(1217)
		::snow::platform::native::render::opengl::GL_obj::snow_gl_uniform3fv(location,v->buffer);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,uniform3fv,(void))

Void GL_obj::uniform3i( int location,int x,int y,int z){
{
		HX_STACK_FRAME("snow.platform.native.render.opengl.GL","uniform3i",0xf99ab6cf,"snow.platform.native.render.opengl.GL.uniform3i","snow/platform/native/render/opengl/GL.hx",1222,0x9056cf0a)
		HX_STACK_ARG(location,"location")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(z,"z")
		HX_STACK_LINE(1222)
		::snow::platform::native::render::opengl::GL_obj::snow_gl_uniform3i(location,x,y,z);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(GL_obj,uniform3i,(void))

Void GL_obj::uniform3iv( int location,::snow::platform::native::utils::Int32Array v){
{
		HX_STACK_FRAME("snow.platform.native.render.opengl.GL","uniform3iv",0x6dc53ec7,"snow.platform.native.render.opengl.GL.uniform3iv","snow/platform/native/render/opengl/GL.hx",1227,0x9056cf0a)
		HX_STACK_ARG(location,"location")
		HX_STACK_ARG(v,"v")
		HX_STACK_LINE(1227)
		::snow::platform::native::render::opengl::GL_obj::snow_gl_uniform3iv(location,v->buffer);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,uniform3iv,(void))

Void GL_obj::uniform4f( int location,Float x,Float y,Float z,Float w){
{
		HX_STACK_FRAME("snow.platform.native.render.opengl.GL","uniform4f",0xf99ab7ab,"snow.platform.native.render.opengl.GL.uniform4f","snow/platform/native/render/opengl/GL.hx",1232,0x9056cf0a)
		HX_STACK_ARG(location,"location")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(z,"z")
		HX_STACK_ARG(w,"w")
		HX_STACK_LINE(1232)
		::snow::platform::native::render::opengl::GL_obj::snow_gl_uniform4f(location,x,y,z,w);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(GL_obj,uniform4f,(void))

Void GL_obj::uniform4fv( int location,::snow::platform::native::utils::Float32Array v){
{
		HX_STACK_FRAME("snow.platform.native.render.opengl.GL","uniform4fv",0x6dc5fe6b,"snow.platform.native.render.opengl.GL.uniform4fv","snow/platform/native/render/opengl/GL.hx",1237,0x9056cf0a)
		HX_STACK_ARG(location,"location")
		HX_STACK_ARG(v,"v")
		HX_STACK_LINE(1237)
		::snow::platform::native::render::opengl::GL_obj::snow_gl_uniform4fv(location,v->buffer);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,uniform4fv,(void))

Void GL_obj::uniform4i( int location,int x,int y,int z,int w){
{
		HX_STACK_FRAME("snow.platform.native.render.opengl.GL","uniform4i",0xf99ab7ae,"snow.platform.native.render.opengl.GL.uniform4i","snow/platform/native/render/opengl/GL.hx",1242,0x9056cf0a)
		HX_STACK_ARG(location,"location")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(z,"z")
		HX_STACK_ARG(w,"w")
		HX_STACK_LINE(1242)
		::snow::platform::native::render::opengl::GL_obj::snow_gl_uniform4i(location,x,y,z,w);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(GL_obj,uniform4i,(void))

Void GL_obj::uniform4iv( int location,::snow::platform::native::utils::Int32Array v){
{
		HX_STACK_FRAME("snow.platform.native.render.opengl.GL","uniform4iv",0x6dc60108,"snow.platform.native.render.opengl.GL.uniform4iv","snow/platform/native/render/opengl/GL.hx",1247,0x9056cf0a)
		HX_STACK_ARG(location,"location")
		HX_STACK_ARG(v,"v")
		HX_STACK_LINE(1247)
		::snow::platform::native::render::opengl::GL_obj::snow_gl_uniform4iv(location,v->buffer);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,uniform4iv,(void))

Void GL_obj::uniformMatrix2fv( int location,bool transpose,::snow::platform::native::utils::Float32Array v){
{
		HX_STACK_FRAME("snow.platform.native.render.opengl.GL","uniformMatrix2fv",0xbe772968,"snow.platform.native.render.opengl.GL.uniformMatrix2fv","snow/platform/native/render/opengl/GL.hx",1252,0x9056cf0a)
		HX_STACK_ARG(location,"location")
		HX_STACK_ARG(transpose,"transpose")
		HX_STACK_ARG(v,"v")
		HX_STACK_LINE(1252)
		::snow::platform::native::render::opengl::GL_obj::snow_gl_uniform_matrix(location,transpose,v->buffer,(int)2);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GL_obj,uniformMatrix2fv,(void))

Void GL_obj::uniformMatrix3fv( int location,bool transpose,::snow::platform::native::utils::Float32Array v){
{
		HX_STACK_FRAME("snow.platform.native.render.opengl.GL","uniformMatrix3fv",0xbe77eba9,"snow.platform.native.render.opengl.GL.uniformMatrix3fv","snow/platform/native/render/opengl/GL.hx",1257,0x9056cf0a)
		HX_STACK_ARG(location,"location")
		HX_STACK_ARG(transpose,"transpose")
		HX_STACK_ARG(v,"v")
		HX_STACK_LINE(1257)
		::snow::platform::native::render::opengl::GL_obj::snow_gl_uniform_matrix(location,transpose,v->buffer,(int)3);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GL_obj,uniformMatrix3fv,(void))

Void GL_obj::uniformMatrix4fv( int location,bool transpose,::snow::platform::native::utils::Float32Array v){
{
		HX_STACK_FRAME("snow.platform.native.render.opengl.GL","uniformMatrix4fv",0xbe78adea,"snow.platform.native.render.opengl.GL.uniformMatrix4fv","snow/platform/native/render/opengl/GL.hx",1262,0x9056cf0a)
		HX_STACK_ARG(location,"location")
		HX_STACK_ARG(transpose,"transpose")
		HX_STACK_ARG(v,"v")
		HX_STACK_LINE(1262)
		::snow::platform::native::render::opengl::GL_obj::snow_gl_uniform_matrix(location,transpose,v->buffer,(int)4);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GL_obj,uniformMatrix4fv,(void))

Void GL_obj::useProgram( ::snow::platform::native::render::opengl::GLProgram program){
{
		HX_STACK_FRAME("snow.platform.native.render.opengl.GL","useProgram",0x89f12598,"snow.platform.native.render.opengl.GL.useProgram","snow/platform/native/render/opengl/GL.hx",1267,0x9056cf0a)
		HX_STACK_ARG(program,"program")
		HX_STACK_LINE(1267)
		::snow::platform::native::render::opengl::GL_obj::snow_gl_use_program((  (((program == null()))) ? int((int)0) : int(program->id) ));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,useProgram,(void))

Void GL_obj::validateProgram( ::snow::platform::native::render::opengl::GLProgram program){
{
		HX_STACK_FRAME("snow.platform.native.render.opengl.GL","validateProgram",0xa900b613,"snow.platform.native.render.opengl.GL.validateProgram","snow/platform/native/render/opengl/GL.hx",1272,0x9056cf0a)
		HX_STACK_ARG(program,"program")
		HX_STACK_LINE(1272)
		::snow::platform::native::render::opengl::GL_obj::snow_gl_validate_program(program->id);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,validateProgram,(void))

Void GL_obj::vertexAttrib1f( int indx,Float x){
{
		HX_STACK_FRAME("snow.platform.native.render.opengl.GL","vertexAttrib1f",0xd2d3367e,"snow.platform.native.render.opengl.GL.vertexAttrib1f","snow/platform/native/render/opengl/GL.hx",1277,0x9056cf0a)
		HX_STACK_ARG(indx,"indx")
		HX_STACK_ARG(x,"x")
		HX_STACK_LINE(1277)
		::snow::platform::native::render::opengl::GL_obj::snow_gl_vertex_attrib1f(indx,x);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,vertexAttrib1f,(void))

Void GL_obj::vertexAttrib1fv( int indx,::snow::platform::native::utils::Float32Array values){
{
		HX_STACK_FRAME("snow.platform.native.render.opengl.GL","vertexAttrib1fv",0xa5fc7838,"snow.platform.native.render.opengl.GL.vertexAttrib1fv","snow/platform/native/render/opengl/GL.hx",1282,0x9056cf0a)
		HX_STACK_ARG(indx,"indx")
		HX_STACK_ARG(values,"values")
		HX_STACK_LINE(1282)
		::snow::platform::native::render::opengl::GL_obj::snow_gl_vertex_attrib1fv(indx,values->buffer);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,vertexAttrib1fv,(void))

Void GL_obj::vertexAttrib2f( int indx,Float x,Float y){
{
		HX_STACK_FRAME("snow.platform.native.render.opengl.GL","vertexAttrib2f",0xd2d3375d,"snow.platform.native.render.opengl.GL.vertexAttrib2f","snow/platform/native/render/opengl/GL.hx",1287,0x9056cf0a)
		HX_STACK_ARG(indx,"indx")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_LINE(1287)
		::snow::platform::native::render::opengl::GL_obj::snow_gl_vertex_attrib2f(indx,x,y);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GL_obj,vertexAttrib2f,(void))

Void GL_obj::vertexAttrib2fv( int indx,::snow::platform::native::utils::Float32Array values){
{
		HX_STACK_FRAME("snow.platform.native.render.opengl.GL","vertexAttrib2fv",0xa5fd3a79,"snow.platform.native.render.opengl.GL.vertexAttrib2fv","snow/platform/native/render/opengl/GL.hx",1292,0x9056cf0a)
		HX_STACK_ARG(indx,"indx")
		HX_STACK_ARG(values,"values")
		HX_STACK_LINE(1292)
		::snow::platform::native::render::opengl::GL_obj::snow_gl_vertex_attrib2fv(indx,values->buffer);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,vertexAttrib2fv,(void))

Void GL_obj::vertexAttrib3f( int indx,Float x,Float y,Float z){
{
		HX_STACK_FRAME("snow.platform.native.render.opengl.GL","vertexAttrib3f",0xd2d3383c,"snow.platform.native.render.opengl.GL.vertexAttrib3f","snow/platform/native/render/opengl/GL.hx",1297,0x9056cf0a)
		HX_STACK_ARG(indx,"indx")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(z,"z")
		HX_STACK_LINE(1297)
		::snow::platform::native::render::opengl::GL_obj::snow_gl_vertex_attrib3f(indx,x,y,z);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(GL_obj,vertexAttrib3f,(void))

Void GL_obj::vertexAttrib3fv( int indx,::snow::platform::native::utils::Float32Array values){
{
		HX_STACK_FRAME("snow.platform.native.render.opengl.GL","vertexAttrib3fv",0xa5fdfcba,"snow.platform.native.render.opengl.GL.vertexAttrib3fv","snow/platform/native/render/opengl/GL.hx",1302,0x9056cf0a)
		HX_STACK_ARG(indx,"indx")
		HX_STACK_ARG(values,"values")
		HX_STACK_LINE(1302)
		::snow::platform::native::render::opengl::GL_obj::snow_gl_vertex_attrib3fv(indx,values->buffer);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,vertexAttrib3fv,(void))

Void GL_obj::vertexAttrib4f( int indx,Float x,Float y,Float z,Float w){
{
		HX_STACK_FRAME("snow.platform.native.render.opengl.GL","vertexAttrib4f",0xd2d3391b,"snow.platform.native.render.opengl.GL.vertexAttrib4f","snow/platform/native/render/opengl/GL.hx",1307,0x9056cf0a)
		HX_STACK_ARG(indx,"indx")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(z,"z")
		HX_STACK_ARG(w,"w")
		HX_STACK_LINE(1307)
		::snow::platform::native::render::opengl::GL_obj::snow_gl_vertex_attrib4f(indx,x,y,z,w);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(GL_obj,vertexAttrib4f,(void))

Void GL_obj::vertexAttrib4fv( int indx,::snow::platform::native::utils::Float32Array values){
{
		HX_STACK_FRAME("snow.platform.native.render.opengl.GL","vertexAttrib4fv",0xa5febefb,"snow.platform.native.render.opengl.GL.vertexAttrib4fv","snow/platform/native/render/opengl/GL.hx",1312,0x9056cf0a)
		HX_STACK_ARG(indx,"indx")
		HX_STACK_ARG(values,"values")
		HX_STACK_LINE(1312)
		::snow::platform::native::render::opengl::GL_obj::snow_gl_vertex_attrib4fv(indx,values->buffer);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,vertexAttrib4fv,(void))

Void GL_obj::vertexAttribPointer( int indx,int size,int type,bool normalized,int stride,int offset){
{
		HX_STACK_FRAME("snow.platform.native.render.opengl.GL","vertexAttribPointer",0x1730e094,"snow.platform.native.render.opengl.GL.vertexAttribPointer","snow/platform/native/render/opengl/GL.hx",1317,0x9056cf0a)
		HX_STACK_ARG(indx,"indx")
		HX_STACK_ARG(size,"size")
		HX_STACK_ARG(type,"type")
		HX_STACK_ARG(normalized,"normalized")
		HX_STACK_ARG(stride,"stride")
		HX_STACK_ARG(offset,"offset")
		HX_STACK_LINE(1317)
		::snow::platform::native::render::opengl::GL_obj::snow_gl_vertex_attrib_pointer(indx,size,type,normalized,stride,offset);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(GL_obj,vertexAttribPointer,(void))

Void GL_obj::viewport( int x,int y,int width,int height){
{
		HX_STACK_FRAME("snow.platform.native.render.opengl.GL","viewport",0xd5fb1841,"snow.platform.native.render.opengl.GL.viewport","snow/platform/native/render/opengl/GL.hx",1322,0x9056cf0a)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
		HX_STACK_LINE(1322)
		::snow::platform::native::render::opengl::GL_obj::snow_gl_viewport(x,y,width,height);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(GL_obj,viewport,(void))

int GL_obj::get_version( ){
	HX_STACK_FRAME("snow.platform.native.render.opengl.GL","get_version",0x4bc91634,"snow.platform.native.render.opengl.GL.get_version","snow/platform/native/render/opengl/GL.hx",1333,0x9056cf0a)
	HX_STACK_LINE(1333)
	return (int)2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(GL_obj,get_version,return )

Dynamic GL_obj::snow_gl_active_texture;

Dynamic GL_obj::snow_gl_attach_shader;

Dynamic GL_obj::snow_gl_bind_attrib_location;

Dynamic GL_obj::snow_gl_bind_buffer;

Dynamic GL_obj::snow_gl_bind_framebuffer;

Dynamic GL_obj::snow_gl_bind_renderbuffer;

Dynamic GL_obj::snow_gl_bind_texture;

Dynamic GL_obj::snow_gl_blend_color;

Dynamic GL_obj::snow_gl_blend_equation;

Dynamic GL_obj::snow_gl_blend_equation_separate;

Dynamic GL_obj::snow_gl_blend_func;

Dynamic GL_obj::snow_gl_blend_func_separate;

Dynamic GL_obj::snow_gl_buffer_data;

Dynamic GL_obj::snow_gl_buffer_sub_data;

Dynamic GL_obj::snow_gl_check_framebuffer_status;

Dynamic GL_obj::snow_gl_clear;

Dynamic GL_obj::snow_gl_clear_color;

Dynamic GL_obj::snow_gl_clear_depth;

Dynamic GL_obj::snow_gl_clear_stencil;

Dynamic GL_obj::snow_gl_color_mask;

Dynamic GL_obj::snow_gl_compile_shader;

Dynamic GL_obj::snow_gl_compressed_tex_image_2d;

Dynamic GL_obj::snow_gl_compressed_tex_sub_image_2d;

Dynamic GL_obj::snow_gl_copy_tex_image_2d;

Dynamic GL_obj::snow_gl_copy_tex_sub_image_2d;

Dynamic GL_obj::snow_gl_create_buffer;

Dynamic GL_obj::snow_gl_create_framebuffer;

Dynamic GL_obj::snow_gl_create_program;

Dynamic GL_obj::snow_gl_create_render_buffer;

Dynamic GL_obj::snow_gl_create_shader;

Dynamic GL_obj::snow_gl_create_texture;

Dynamic GL_obj::snow_gl_cull_face;

Dynamic GL_obj::snow_gl_delete_buffer;

Dynamic GL_obj::snow_gl_delete_framebuffer;

Dynamic GL_obj::snow_gl_delete_program;

Dynamic GL_obj::snow_gl_delete_render_buffer;

Dynamic GL_obj::snow_gl_delete_shader;

Dynamic GL_obj::snow_gl_delete_texture;

Dynamic GL_obj::snow_gl_depth_func;

Dynamic GL_obj::snow_gl_depth_mask;

Dynamic GL_obj::snow_gl_depth_range;

Dynamic GL_obj::snow_gl_detach_shader;

Dynamic GL_obj::snow_gl_disable;

Dynamic GL_obj::snow_gl_disable_vertex_attrib_array;

Dynamic GL_obj::snow_gl_draw_arrays;

Dynamic GL_obj::snow_gl_draw_elements;

Dynamic GL_obj::snow_gl_enable;

Dynamic GL_obj::snow_gl_enable_vertex_attrib_array;

Dynamic GL_obj::snow_gl_finish;

Dynamic GL_obj::snow_gl_flush;

Dynamic GL_obj::snow_gl_framebuffer_renderbuffer;

Dynamic GL_obj::snow_gl_framebuffer_texture2D;

Dynamic GL_obj::snow_gl_front_face;

Dynamic GL_obj::snow_gl_generate_mipmap;

Dynamic GL_obj::snow_gl_get_active_attrib;

Dynamic GL_obj::snow_gl_get_active_uniform;

Dynamic GL_obj::snow_gl_get_attrib_location;

Dynamic GL_obj::snow_gl_get_buffer_paramerter;

Dynamic GL_obj::snow_gl_get_context_attributes;

Dynamic GL_obj::snow_gl_get_error;

Dynamic GL_obj::snow_gl_get_framebuffer_attachment_parameter;

Dynamic GL_obj::snow_gl_get_parameter;

Dynamic GL_obj::snow_gl_get_program_info_log;

Dynamic GL_obj::snow_gl_get_program_parameter;

Dynamic GL_obj::snow_gl_get_render_buffer_parameter;

Dynamic GL_obj::snow_gl_get_shader_info_log;

Dynamic GL_obj::snow_gl_get_shader_parameter;

Dynamic GL_obj::snow_gl_get_shader_precision_format;

Dynamic GL_obj::snow_gl_get_shader_source;

Dynamic GL_obj::snow_gl_get_supported_extensions;

Dynamic GL_obj::snow_gl_get_tex_parameter;

Dynamic GL_obj::snow_gl_get_uniform;

Dynamic GL_obj::snow_gl_get_uniform_location;

Dynamic GL_obj::snow_gl_get_vertex_attrib;

Dynamic GL_obj::snow_gl_get_vertex_attrib_offset;

Dynamic GL_obj::snow_gl_hint;

Dynamic GL_obj::snow_gl_is_buffer;

Dynamic GL_obj::snow_gl_is_enabled;

Dynamic GL_obj::snow_gl_is_framebuffer;

Dynamic GL_obj::snow_gl_is_program;

Dynamic GL_obj::snow_gl_is_renderbuffer;

Dynamic GL_obj::snow_gl_is_shader;

Dynamic GL_obj::snow_gl_is_texture;

Dynamic GL_obj::snow_gl_line_width;

Dynamic GL_obj::snow_gl_link_program;

Dynamic GL_obj::snow_gl_pixel_storei;

Dynamic GL_obj::snow_gl_polygon_offset;

Dynamic GL_obj::snow_gl_read_pixels;

Dynamic GL_obj::snow_gl_renderbuffer_storage;

Dynamic GL_obj::snow_gl_sample_coverage;

Dynamic GL_obj::snow_gl_scissor;

Dynamic GL_obj::snow_gl_shader_source;

Dynamic GL_obj::snow_gl_stencil_func;

Dynamic GL_obj::snow_gl_stencil_func_separate;

Dynamic GL_obj::snow_gl_stencil_mask;

Dynamic GL_obj::snow_gl_stencil_mask_separate;

Dynamic GL_obj::snow_gl_stencil_op;

Dynamic GL_obj::snow_gl_stencil_op_separate;

Dynamic GL_obj::snow_gl_tex_image_2d;

Dynamic GL_obj::snow_gl_tex_parameterf;

Dynamic GL_obj::snow_gl_tex_parameteri;

Dynamic GL_obj::snow_gl_tex_sub_image_2d;

Dynamic GL_obj::snow_gl_uniform1f;

Dynamic GL_obj::snow_gl_uniform1fv;

Dynamic GL_obj::snow_gl_uniform1i;

Dynamic GL_obj::snow_gl_uniform1iv;

Dynamic GL_obj::snow_gl_uniform2f;

Dynamic GL_obj::snow_gl_uniform2fv;

Dynamic GL_obj::snow_gl_uniform2i;

Dynamic GL_obj::snow_gl_uniform2iv;

Dynamic GL_obj::snow_gl_uniform3f;

Dynamic GL_obj::snow_gl_uniform3fv;

Dynamic GL_obj::snow_gl_uniform3i;

Dynamic GL_obj::snow_gl_uniform3iv;

Dynamic GL_obj::snow_gl_uniform4f;

Dynamic GL_obj::snow_gl_uniform4fv;

Dynamic GL_obj::snow_gl_uniform4i;

Dynamic GL_obj::snow_gl_uniform4iv;

Dynamic GL_obj::snow_gl_uniform_matrix;

Dynamic GL_obj::snow_gl_use_program;

Dynamic GL_obj::snow_gl_validate_program;

Dynamic GL_obj::snow_gl_version;

Dynamic GL_obj::snow_gl_vertex_attrib1f;

Dynamic GL_obj::snow_gl_vertex_attrib1fv;

Dynamic GL_obj::snow_gl_vertex_attrib2f;

Dynamic GL_obj::snow_gl_vertex_attrib2fv;

Dynamic GL_obj::snow_gl_vertex_attrib3f;

Dynamic GL_obj::snow_gl_vertex_attrib3fv;

Dynamic GL_obj::snow_gl_vertex_attrib4f;

Dynamic GL_obj::snow_gl_vertex_attrib4fv;

Dynamic GL_obj::snow_gl_vertex_attrib_pointer;

Dynamic GL_obj::snow_gl_viewport;


GL_obj::GL_obj()
{
}

Dynamic GL_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"hint") ) { return hint_dyn(); }
		if (HX_FIELD_EQ(inName,"load") ) { return load_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		if (HX_FIELD_EQ(inName,"flush") ) { return flush_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"enable") ) { return enable_dyn(); }
		if (HX_FIELD_EQ(inName,"finish") ) { return finish_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"disable") ) { return disable_dyn(); }
		if (HX_FIELD_EQ(inName,"scissor") ) { return scissor_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"cullFace") ) { return cullFace_dyn(); }
		if (HX_FIELD_EQ(inName,"getError") ) { return getError_dyn(); }
		if (HX_FIELD_EQ(inName,"isBuffer") ) { return isBuffer_dyn(); }
		if (HX_FIELD_EQ(inName,"isShader") ) { return isShader_dyn(); }
		if (HX_FIELD_EQ(inName,"viewport") ) { return viewport_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"blendFunc") ) { return blendFunc_dyn(); }
		if (HX_FIELD_EQ(inName,"colorMask") ) { return colorMask_dyn(); }
		if (HX_FIELD_EQ(inName,"depthFunc") ) { return depthFunc_dyn(); }
		if (HX_FIELD_EQ(inName,"depthMask") ) { return depthMask_dyn(); }
		if (HX_FIELD_EQ(inName,"frontFace") ) { return frontFace_dyn(); }
		if (HX_FIELD_EQ(inName,"isEnabled") ) { return isEnabled_dyn(); }
		if (HX_FIELD_EQ(inName,"isProgram") ) { return isProgram_dyn(); }
		if (HX_FIELD_EQ(inName,"isTexture") ) { return isTexture_dyn(); }
		if (HX_FIELD_EQ(inName,"lineWidth") ) { return lineWidth_dyn(); }
		if (HX_FIELD_EQ(inName,"stencilOp") ) { return stencilOp_dyn(); }
		if (HX_FIELD_EQ(inName,"uniform1f") ) { return uniform1f_dyn(); }
		if (HX_FIELD_EQ(inName,"uniform1i") ) { return uniform1i_dyn(); }
		if (HX_FIELD_EQ(inName,"uniform2f") ) { return uniform2f_dyn(); }
		if (HX_FIELD_EQ(inName,"uniform2i") ) { return uniform2i_dyn(); }
		if (HX_FIELD_EQ(inName,"uniform3f") ) { return uniform3f_dyn(); }
		if (HX_FIELD_EQ(inName,"uniform3i") ) { return uniform3i_dyn(); }
		if (HX_FIELD_EQ(inName,"uniform4f") ) { return uniform4f_dyn(); }
		if (HX_FIELD_EQ(inName,"uniform4i") ) { return uniform4i_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"bindBuffer") ) { return bindBuffer_dyn(); }
		if (HX_FIELD_EQ(inName,"blendColor") ) { return blendColor_dyn(); }
		if (HX_FIELD_EQ(inName,"bufferData") ) { return bufferData_dyn(); }
		if (HX_FIELD_EQ(inName,"clearColor") ) { return clearColor_dyn(); }
		if (HX_FIELD_EQ(inName,"clearDepth") ) { return clearDepth_dyn(); }
		if (HX_FIELD_EQ(inName,"depthRange") ) { return depthRange_dyn(); }
		if (HX_FIELD_EQ(inName,"drawArrays") ) { return drawArrays_dyn(); }
		if (HX_FIELD_EQ(inName,"getUniform") ) { return getUniform_dyn(); }
		if (HX_FIELD_EQ(inName,"readPixels") ) { return readPixels_dyn(); }
		if (HX_FIELD_EQ(inName,"texImage2D") ) { return texImage2D_dyn(); }
		if (HX_FIELD_EQ(inName,"uniform1fv") ) { return uniform1fv_dyn(); }
		if (HX_FIELD_EQ(inName,"uniform1iv") ) { return uniform1iv_dyn(); }
		if (HX_FIELD_EQ(inName,"uniform2fv") ) { return uniform2fv_dyn(); }
		if (HX_FIELD_EQ(inName,"uniform2iv") ) { return uniform2iv_dyn(); }
		if (HX_FIELD_EQ(inName,"uniform3fv") ) { return uniform3fv_dyn(); }
		if (HX_FIELD_EQ(inName,"uniform3iv") ) { return uniform3iv_dyn(); }
		if (HX_FIELD_EQ(inName,"uniform4fv") ) { return uniform4fv_dyn(); }
		if (HX_FIELD_EQ(inName,"uniform4iv") ) { return uniform4iv_dyn(); }
		if (HX_FIELD_EQ(inName,"useProgram") ) { return useProgram_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"bindTexture") ) { return bindTexture_dyn(); }
		if (HX_FIELD_EQ(inName,"linkProgram") ) { return linkProgram_dyn(); }
		if (HX_FIELD_EQ(inName,"pixelStorei") ) { return pixelStorei_dyn(); }
		if (HX_FIELD_EQ(inName,"stencilFunc") ) { return stencilFunc_dyn(); }
		if (HX_FIELD_EQ(inName,"stencilMask") ) { return stencilMask_dyn(); }
		if (HX_FIELD_EQ(inName,"get_version") ) { return get_version_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"attachShader") ) { return attachShader_dyn(); }
		if (HX_FIELD_EQ(inName,"clearStencil") ) { return clearStencil_dyn(); }
		if (HX_FIELD_EQ(inName,"createBuffer") ) { return createBuffer_dyn(); }
		if (HX_FIELD_EQ(inName,"createShader") ) { return createShader_dyn(); }
		if (HX_FIELD_EQ(inName,"deleteBuffer") ) { return deleteBuffer_dyn(); }
		if (HX_FIELD_EQ(inName,"deleteShader") ) { return deleteShader_dyn(); }
		if (HX_FIELD_EQ(inName,"detachShader") ) { return detachShader_dyn(); }
		if (HX_FIELD_EQ(inName,"drawElements") ) { return drawElements_dyn(); }
		if (HX_FIELD_EQ(inName,"getExtension") ) { return getExtension_dyn(); }
		if (HX_FIELD_EQ(inName,"getParameter") ) { return getParameter_dyn(); }
		if (HX_FIELD_EQ(inName,"shaderSource") ) { return shaderSource_dyn(); }
		if (HX_FIELD_EQ(inName,"snow_gl_hint") ) { return snow_gl_hint; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"versionString") ) { return versionString_dyn(); }
		if (HX_FIELD_EQ(inName,"activeTexture") ) { return activeTexture_dyn(); }
		if (HX_FIELD_EQ(inName,"blendEquation") ) { return blendEquation_dyn(); }
		if (HX_FIELD_EQ(inName,"bufferSubData") ) { return bufferSubData_dyn(); }
		if (HX_FIELD_EQ(inName,"compileShader") ) { return compileShader_dyn(); }
		if (HX_FIELD_EQ(inName,"createProgram") ) { return createProgram_dyn(); }
		if (HX_FIELD_EQ(inName,"createTexture") ) { return createTexture_dyn(); }
		if (HX_FIELD_EQ(inName,"deleteProgram") ) { return deleteProgram_dyn(); }
		if (HX_FIELD_EQ(inName,"deleteTexture") ) { return deleteTexture_dyn(); }
		if (HX_FIELD_EQ(inName,"isFramebuffer") ) { return isFramebuffer_dyn(); }
		if (HX_FIELD_EQ(inName,"polygonOffset") ) { return polygonOffset_dyn(); }
		if (HX_FIELD_EQ(inName,"texParameterf") ) { return texParameterf_dyn(); }
		if (HX_FIELD_EQ(inName,"texParameteri") ) { return texParameteri_dyn(); }
		if (HX_FIELD_EQ(inName,"texSubImage2D") ) { return texSubImage2D_dyn(); }
		if (HX_FIELD_EQ(inName,"snow_gl_clear") ) { return snow_gl_clear; }
		if (HX_FIELD_EQ(inName,"snow_gl_flush") ) { return snow_gl_flush; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"copyTexImage2D") ) { return copyTexImage2D_dyn(); }
		if (HX_FIELD_EQ(inName,"generateMipmap") ) { return generateMipmap_dyn(); }
		if (HX_FIELD_EQ(inName,"isRenderbuffer") ) { return isRenderbuffer_dyn(); }
		if (HX_FIELD_EQ(inName,"sampleCoverage") ) { return sampleCoverage_dyn(); }
		if (HX_FIELD_EQ(inName,"vertexAttrib1f") ) { return vertexAttrib1f_dyn(); }
		if (HX_FIELD_EQ(inName,"vertexAttrib2f") ) { return vertexAttrib2f_dyn(); }
		if (HX_FIELD_EQ(inName,"vertexAttrib3f") ) { return vertexAttrib3f_dyn(); }
		if (HX_FIELD_EQ(inName,"vertexAttrib4f") ) { return vertexAttrib4f_dyn(); }
		if (HX_FIELD_EQ(inName,"snow_gl_enable") ) { return snow_gl_enable; }
		if (HX_FIELD_EQ(inName,"snow_gl_finish") ) { return snow_gl_finish; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"bindFramebuffer") ) { return bindFramebuffer_dyn(); }
		if (HX_FIELD_EQ(inName,"getActiveAttrib") ) { return getActiveAttrib_dyn(); }
		if (HX_FIELD_EQ(inName,"getShaderSource") ) { return getShaderSource_dyn(); }
		if (HX_FIELD_EQ(inName,"getTexParameter") ) { return getTexParameter_dyn(); }
		if (HX_FIELD_EQ(inName,"getVertexAttrib") ) { return getVertexAttrib_dyn(); }
		if (HX_FIELD_EQ(inName,"validateProgram") ) { return validateProgram_dyn(); }
		if (HX_FIELD_EQ(inName,"vertexAttrib1fv") ) { return vertexAttrib1fv_dyn(); }
		if (HX_FIELD_EQ(inName,"vertexAttrib2fv") ) { return vertexAttrib2fv_dyn(); }
		if (HX_FIELD_EQ(inName,"vertexAttrib3fv") ) { return vertexAttrib3fv_dyn(); }
		if (HX_FIELD_EQ(inName,"vertexAttrib4fv") ) { return vertexAttrib4fv_dyn(); }
		if (HX_FIELD_EQ(inName,"snow_gl_disable") ) { return snow_gl_disable; }
		if (HX_FIELD_EQ(inName,"snow_gl_scissor") ) { return snow_gl_scissor; }
		if (HX_FIELD_EQ(inName,"snow_gl_version") ) { return snow_gl_version; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"bindRenderbuffer") ) { return bindRenderbuffer_dyn(); }
		if (HX_FIELD_EQ(inName,"getActiveUniform") ) { return getActiveUniform_dyn(); }
		if (HX_FIELD_EQ(inName,"getShaderInfoLog") ) { return getShaderInfoLog_dyn(); }
		if (HX_FIELD_EQ(inName,"uniformMatrix2fv") ) { return uniformMatrix2fv_dyn(); }
		if (HX_FIELD_EQ(inName,"uniformMatrix3fv") ) { return uniformMatrix3fv_dyn(); }
		if (HX_FIELD_EQ(inName,"uniformMatrix4fv") ) { return uniformMatrix4fv_dyn(); }
		if (HX_FIELD_EQ(inName,"snow_gl_viewport") ) { return snow_gl_viewport; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"blendFuncSeparate") ) { return blendFuncSeparate_dyn(); }
		if (HX_FIELD_EQ(inName,"copyTexSubImage2D") ) { return copyTexSubImage2D_dyn(); }
		if (HX_FIELD_EQ(inName,"createFramebuffer") ) { return createFramebuffer_dyn(); }
		if (HX_FIELD_EQ(inName,"deleteFramebuffer") ) { return deleteFramebuffer_dyn(); }
		if (HX_FIELD_EQ(inName,"getAttribLocation") ) { return getAttribLocation_dyn(); }
		if (HX_FIELD_EQ(inName,"getProgramInfoLog") ) { return getProgramInfoLog_dyn(); }
		if (HX_FIELD_EQ(inName,"stencilOpSeparate") ) { return stencilOpSeparate_dyn(); }
		if (HX_FIELD_EQ(inName,"snow_gl_cull_face") ) { return snow_gl_cull_face; }
		if (HX_FIELD_EQ(inName,"snow_gl_get_error") ) { return snow_gl_get_error; }
		if (HX_FIELD_EQ(inName,"snow_gl_is_buffer") ) { return snow_gl_is_buffer; }
		if (HX_FIELD_EQ(inName,"snow_gl_is_shader") ) { return snow_gl_is_shader; }
		if (HX_FIELD_EQ(inName,"snow_gl_uniform1f") ) { return snow_gl_uniform1f; }
		if (HX_FIELD_EQ(inName,"snow_gl_uniform1i") ) { return snow_gl_uniform1i; }
		if (HX_FIELD_EQ(inName,"snow_gl_uniform2f") ) { return snow_gl_uniform2f; }
		if (HX_FIELD_EQ(inName,"snow_gl_uniform2i") ) { return snow_gl_uniform2i; }
		if (HX_FIELD_EQ(inName,"snow_gl_uniform3f") ) { return snow_gl_uniform3f; }
		if (HX_FIELD_EQ(inName,"snow_gl_uniform3i") ) { return snow_gl_uniform3i; }
		if (HX_FIELD_EQ(inName,"snow_gl_uniform4f") ) { return snow_gl_uniform4f; }
		if (HX_FIELD_EQ(inName,"snow_gl_uniform4i") ) { return snow_gl_uniform4i; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"bindAttribLocation") ) { return bindAttribLocation_dyn(); }
		if (HX_FIELD_EQ(inName,"createRenderbuffer") ) { return createRenderbuffer_dyn(); }
		if (HX_FIELD_EQ(inName,"deleteRenderbuffer") ) { return deleteRenderbuffer_dyn(); }
		if (HX_FIELD_EQ(inName,"getAttachedShaders") ) { return getAttachedShaders_dyn(); }
		if (HX_FIELD_EQ(inName,"getBufferParameter") ) { return getBufferParameter_dyn(); }
		if (HX_FIELD_EQ(inName,"getShaderParameter") ) { return getShaderParameter_dyn(); }
		if (HX_FIELD_EQ(inName,"getUniformLocation") ) { return getUniformLocation_dyn(); }
		if (HX_FIELD_EQ(inName,"snow_gl_blend_func") ) { return snow_gl_blend_func; }
		if (HX_FIELD_EQ(inName,"snow_gl_color_mask") ) { return snow_gl_color_mask; }
		if (HX_FIELD_EQ(inName,"snow_gl_depth_func") ) { return snow_gl_depth_func; }
		if (HX_FIELD_EQ(inName,"snow_gl_depth_mask") ) { return snow_gl_depth_mask; }
		if (HX_FIELD_EQ(inName,"snow_gl_front_face") ) { return snow_gl_front_face; }
		if (HX_FIELD_EQ(inName,"snow_gl_is_enabled") ) { return snow_gl_is_enabled; }
		if (HX_FIELD_EQ(inName,"snow_gl_is_program") ) { return snow_gl_is_program; }
		if (HX_FIELD_EQ(inName,"snow_gl_is_texture") ) { return snow_gl_is_texture; }
		if (HX_FIELD_EQ(inName,"snow_gl_line_width") ) { return snow_gl_line_width; }
		if (HX_FIELD_EQ(inName,"snow_gl_stencil_op") ) { return snow_gl_stencil_op; }
		if (HX_FIELD_EQ(inName,"snow_gl_uniform1fv") ) { return snow_gl_uniform1fv; }
		if (HX_FIELD_EQ(inName,"snow_gl_uniform1iv") ) { return snow_gl_uniform1iv; }
		if (HX_FIELD_EQ(inName,"snow_gl_uniform2fv") ) { return snow_gl_uniform2fv; }
		if (HX_FIELD_EQ(inName,"snow_gl_uniform2iv") ) { return snow_gl_uniform2iv; }
		if (HX_FIELD_EQ(inName,"snow_gl_uniform3fv") ) { return snow_gl_uniform3fv; }
		if (HX_FIELD_EQ(inName,"snow_gl_uniform3iv") ) { return snow_gl_uniform3iv; }
		if (HX_FIELD_EQ(inName,"snow_gl_uniform4fv") ) { return snow_gl_uniform4fv; }
		if (HX_FIELD_EQ(inName,"snow_gl_uniform4iv") ) { return snow_gl_uniform4iv; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"getProgramParameter") ) { return getProgramParameter_dyn(); }
		if (HX_FIELD_EQ(inName,"renderbufferStorage") ) { return renderbufferStorage_dyn(); }
		if (HX_FIELD_EQ(inName,"stencilFuncSeparate") ) { return stencilFuncSeparate_dyn(); }
		if (HX_FIELD_EQ(inName,"stencilMaskSeparate") ) { return stencilMaskSeparate_dyn(); }
		if (HX_FIELD_EQ(inName,"vertexAttribPointer") ) { return vertexAttribPointer_dyn(); }
		if (HX_FIELD_EQ(inName,"snow_gl_bind_buffer") ) { return snow_gl_bind_buffer; }
		if (HX_FIELD_EQ(inName,"snow_gl_blend_color") ) { return snow_gl_blend_color; }
		if (HX_FIELD_EQ(inName,"snow_gl_buffer_data") ) { return snow_gl_buffer_data; }
		if (HX_FIELD_EQ(inName,"snow_gl_clear_color") ) { return snow_gl_clear_color; }
		if (HX_FIELD_EQ(inName,"snow_gl_clear_depth") ) { return snow_gl_clear_depth; }
		if (HX_FIELD_EQ(inName,"snow_gl_depth_range") ) { return snow_gl_depth_range; }
		if (HX_FIELD_EQ(inName,"snow_gl_draw_arrays") ) { return snow_gl_draw_arrays; }
		if (HX_FIELD_EQ(inName,"snow_gl_get_uniform") ) { return snow_gl_get_uniform; }
		if (HX_FIELD_EQ(inName,"snow_gl_read_pixels") ) { return snow_gl_read_pixels; }
		if (HX_FIELD_EQ(inName,"snow_gl_use_program") ) { return snow_gl_use_program; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"compressedTexImage2D") ) { return compressedTexImage2D_dyn(); }
		if (HX_FIELD_EQ(inName,"framebufferTexture2D") ) { return framebufferTexture2D_dyn(); }
		if (HX_FIELD_EQ(inName,"getContextAttributes") ) { return getContextAttributes_dyn(); }
		if (HX_FIELD_EQ(inName,"snow_gl_bind_texture") ) { return snow_gl_bind_texture; }
		if (HX_FIELD_EQ(inName,"snow_gl_link_program") ) { return snow_gl_link_program; }
		if (HX_FIELD_EQ(inName,"snow_gl_pixel_storei") ) { return snow_gl_pixel_storei; }
		if (HX_FIELD_EQ(inName,"snow_gl_stencil_func") ) { return snow_gl_stencil_func; }
		if (HX_FIELD_EQ(inName,"snow_gl_stencil_mask") ) { return snow_gl_stencil_mask; }
		if (HX_FIELD_EQ(inName,"snow_gl_tex_image_2d") ) { return snow_gl_tex_image_2d; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"blendEquationSeparate") ) { return blendEquationSeparate_dyn(); }
		if (HX_FIELD_EQ(inName,"getVertexAttribOffset") ) { return getVertexAttribOffset_dyn(); }
		if (HX_FIELD_EQ(inName,"snow_gl_attach_shader") ) { return snow_gl_attach_shader; }
		if (HX_FIELD_EQ(inName,"snow_gl_clear_stencil") ) { return snow_gl_clear_stencil; }
		if (HX_FIELD_EQ(inName,"snow_gl_create_buffer") ) { return snow_gl_create_buffer; }
		if (HX_FIELD_EQ(inName,"snow_gl_create_shader") ) { return snow_gl_create_shader; }
		if (HX_FIELD_EQ(inName,"snow_gl_delete_buffer") ) { return snow_gl_delete_buffer; }
		if (HX_FIELD_EQ(inName,"snow_gl_delete_shader") ) { return snow_gl_delete_shader; }
		if (HX_FIELD_EQ(inName,"snow_gl_detach_shader") ) { return snow_gl_detach_shader; }
		if (HX_FIELD_EQ(inName,"snow_gl_draw_elements") ) { return snow_gl_draw_elements; }
		if (HX_FIELD_EQ(inName,"snow_gl_get_parameter") ) { return snow_gl_get_parameter; }
		if (HX_FIELD_EQ(inName,"snow_gl_shader_source") ) { return snow_gl_shader_source; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"checkFramebufferStatus") ) { return checkFramebufferStatus_dyn(); }
		if (HX_FIELD_EQ(inName,"getSupportedExtensions") ) { return getSupportedExtensions_dyn(); }
		if (HX_FIELD_EQ(inName,"snow_gl_active_texture") ) { return snow_gl_active_texture; }
		if (HX_FIELD_EQ(inName,"snow_gl_blend_equation") ) { return snow_gl_blend_equation; }
		if (HX_FIELD_EQ(inName,"snow_gl_compile_shader") ) { return snow_gl_compile_shader; }
		if (HX_FIELD_EQ(inName,"snow_gl_create_program") ) { return snow_gl_create_program; }
		if (HX_FIELD_EQ(inName,"snow_gl_create_texture") ) { return snow_gl_create_texture; }
		if (HX_FIELD_EQ(inName,"snow_gl_delete_program") ) { return snow_gl_delete_program; }
		if (HX_FIELD_EQ(inName,"snow_gl_delete_texture") ) { return snow_gl_delete_texture; }
		if (HX_FIELD_EQ(inName,"snow_gl_is_framebuffer") ) { return snow_gl_is_framebuffer; }
		if (HX_FIELD_EQ(inName,"snow_gl_polygon_offset") ) { return snow_gl_polygon_offset; }
		if (HX_FIELD_EQ(inName,"snow_gl_tex_parameterf") ) { return snow_gl_tex_parameterf; }
		if (HX_FIELD_EQ(inName,"snow_gl_tex_parameteri") ) { return snow_gl_tex_parameteri; }
		if (HX_FIELD_EQ(inName,"snow_gl_uniform_matrix") ) { return snow_gl_uniform_matrix; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"compressedTexSubImage2D") ) { return compressedTexSubImage2D_dyn(); }
		if (HX_FIELD_EQ(inName,"enableVertexAttribArray") ) { return enableVertexAttribArray_dyn(); }
		if (HX_FIELD_EQ(inName,"framebufferRenderbuffer") ) { return framebufferRenderbuffer_dyn(); }
		if (HX_FIELD_EQ(inName,"snow_gl_buffer_sub_data") ) { return snow_gl_buffer_sub_data; }
		if (HX_FIELD_EQ(inName,"snow_gl_generate_mipmap") ) { return snow_gl_generate_mipmap; }
		if (HX_FIELD_EQ(inName,"snow_gl_is_renderbuffer") ) { return snow_gl_is_renderbuffer; }
		if (HX_FIELD_EQ(inName,"snow_gl_sample_coverage") ) { return snow_gl_sample_coverage; }
		if (HX_FIELD_EQ(inName,"snow_gl_vertex_attrib1f") ) { return snow_gl_vertex_attrib1f; }
		if (HX_FIELD_EQ(inName,"snow_gl_vertex_attrib2f") ) { return snow_gl_vertex_attrib2f; }
		if (HX_FIELD_EQ(inName,"snow_gl_vertex_attrib3f") ) { return snow_gl_vertex_attrib3f; }
		if (HX_FIELD_EQ(inName,"snow_gl_vertex_attrib4f") ) { return snow_gl_vertex_attrib4f; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"disableVertexAttribArray") ) { return disableVertexAttribArray_dyn(); }
		if (HX_FIELD_EQ(inName,"getRenderbufferParameter") ) { return getRenderbufferParameter_dyn(); }
		if (HX_FIELD_EQ(inName,"getShaderPrecisionFormat") ) { return getShaderPrecisionFormat_dyn(); }
		if (HX_FIELD_EQ(inName,"snow_gl_bind_framebuffer") ) { return snow_gl_bind_framebuffer; }
		if (HX_FIELD_EQ(inName,"snow_gl_tex_sub_image_2d") ) { return snow_gl_tex_sub_image_2d; }
		if (HX_FIELD_EQ(inName,"snow_gl_validate_program") ) { return snow_gl_validate_program; }
		if (HX_FIELD_EQ(inName,"snow_gl_vertex_attrib1fv") ) { return snow_gl_vertex_attrib1fv; }
		if (HX_FIELD_EQ(inName,"snow_gl_vertex_attrib2fv") ) { return snow_gl_vertex_attrib2fv; }
		if (HX_FIELD_EQ(inName,"snow_gl_vertex_attrib3fv") ) { return snow_gl_vertex_attrib3fv; }
		if (HX_FIELD_EQ(inName,"snow_gl_vertex_attrib4fv") ) { return snow_gl_vertex_attrib4fv; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"snow_gl_bind_renderbuffer") ) { return snow_gl_bind_renderbuffer; }
		if (HX_FIELD_EQ(inName,"snow_gl_copy_tex_image_2d") ) { return snow_gl_copy_tex_image_2d; }
		if (HX_FIELD_EQ(inName,"snow_gl_get_active_attrib") ) { return snow_gl_get_active_attrib; }
		if (HX_FIELD_EQ(inName,"snow_gl_get_shader_source") ) { return snow_gl_get_shader_source; }
		if (HX_FIELD_EQ(inName,"snow_gl_get_tex_parameter") ) { return snow_gl_get_tex_parameter; }
		if (HX_FIELD_EQ(inName,"snow_gl_get_vertex_attrib") ) { return snow_gl_get_vertex_attrib; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"snow_gl_create_framebuffer") ) { return snow_gl_create_framebuffer; }
		if (HX_FIELD_EQ(inName,"snow_gl_delete_framebuffer") ) { return snow_gl_delete_framebuffer; }
		if (HX_FIELD_EQ(inName,"snow_gl_get_active_uniform") ) { return snow_gl_get_active_uniform; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"snow_gl_blend_func_separate") ) { return snow_gl_blend_func_separate; }
		if (HX_FIELD_EQ(inName,"snow_gl_get_attrib_location") ) { return snow_gl_get_attrib_location; }
		if (HX_FIELD_EQ(inName,"snow_gl_get_shader_info_log") ) { return snow_gl_get_shader_info_log; }
		if (HX_FIELD_EQ(inName,"snow_gl_stencil_op_separate") ) { return snow_gl_stencil_op_separate; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"snow_gl_bind_attrib_location") ) { return snow_gl_bind_attrib_location; }
		if (HX_FIELD_EQ(inName,"snow_gl_create_render_buffer") ) { return snow_gl_create_render_buffer; }
		if (HX_FIELD_EQ(inName,"snow_gl_delete_render_buffer") ) { return snow_gl_delete_render_buffer; }
		if (HX_FIELD_EQ(inName,"snow_gl_get_program_info_log") ) { return snow_gl_get_program_info_log; }
		if (HX_FIELD_EQ(inName,"snow_gl_get_shader_parameter") ) { return snow_gl_get_shader_parameter; }
		if (HX_FIELD_EQ(inName,"snow_gl_get_uniform_location") ) { return snow_gl_get_uniform_location; }
		if (HX_FIELD_EQ(inName,"snow_gl_renderbuffer_storage") ) { return snow_gl_renderbuffer_storage; }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"snow_gl_copy_tex_sub_image_2d") ) { return snow_gl_copy_tex_sub_image_2d; }
		if (HX_FIELD_EQ(inName,"snow_gl_framebuffer_texture2D") ) { return snow_gl_framebuffer_texture2D; }
		if (HX_FIELD_EQ(inName,"snow_gl_get_buffer_paramerter") ) { return snow_gl_get_buffer_paramerter; }
		if (HX_FIELD_EQ(inName,"snow_gl_get_program_parameter") ) { return snow_gl_get_program_parameter; }
		if (HX_FIELD_EQ(inName,"snow_gl_stencil_func_separate") ) { return snow_gl_stencil_func_separate; }
		if (HX_FIELD_EQ(inName,"snow_gl_stencil_mask_separate") ) { return snow_gl_stencil_mask_separate; }
		if (HX_FIELD_EQ(inName,"snow_gl_vertex_attrib_pointer") ) { return snow_gl_vertex_attrib_pointer; }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"snow_gl_get_context_attributes") ) { return snow_gl_get_context_attributes; }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"snow_gl_blend_equation_separate") ) { return snow_gl_blend_equation_separate; }
		if (HX_FIELD_EQ(inName,"snow_gl_compressed_tex_image_2d") ) { return snow_gl_compressed_tex_image_2d; }
		break;
	case 32:
		if (HX_FIELD_EQ(inName,"snow_gl_check_framebuffer_status") ) { return snow_gl_check_framebuffer_status; }
		if (HX_FIELD_EQ(inName,"snow_gl_framebuffer_renderbuffer") ) { return snow_gl_framebuffer_renderbuffer; }
		if (HX_FIELD_EQ(inName,"snow_gl_get_supported_extensions") ) { return snow_gl_get_supported_extensions; }
		if (HX_FIELD_EQ(inName,"snow_gl_get_vertex_attrib_offset") ) { return snow_gl_get_vertex_attrib_offset; }
		break;
	case 33:
		if (HX_FIELD_EQ(inName,"getFramebufferAttachmentParameter") ) { return getFramebufferAttachmentParameter_dyn(); }
		break;
	case 34:
		if (HX_FIELD_EQ(inName,"snow_gl_enable_vertex_attrib_array") ) { return snow_gl_enable_vertex_attrib_array; }
		break;
	case 35:
		if (HX_FIELD_EQ(inName,"snow_gl_compressed_tex_sub_image_2d") ) { return snow_gl_compressed_tex_sub_image_2d; }
		if (HX_FIELD_EQ(inName,"snow_gl_disable_vertex_attrib_array") ) { return snow_gl_disable_vertex_attrib_array; }
		if (HX_FIELD_EQ(inName,"snow_gl_get_render_buffer_parameter") ) { return snow_gl_get_render_buffer_parameter; }
		if (HX_FIELD_EQ(inName,"snow_gl_get_shader_precision_format") ) { return snow_gl_get_shader_precision_format; }
		break;
	case 44:
		if (HX_FIELD_EQ(inName,"snow_gl_get_framebuffer_attachment_parameter") ) { return snow_gl_get_framebuffer_attachment_parameter; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic GL_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"snow_gl_hint") ) { snow_gl_hint=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"snow_gl_clear") ) { snow_gl_clear=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"snow_gl_flush") ) { snow_gl_flush=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"snow_gl_enable") ) { snow_gl_enable=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"snow_gl_finish") ) { snow_gl_finish=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"snow_gl_disable") ) { snow_gl_disable=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"snow_gl_scissor") ) { snow_gl_scissor=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"snow_gl_version") ) { snow_gl_version=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"snow_gl_viewport") ) { snow_gl_viewport=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"snow_gl_cull_face") ) { snow_gl_cull_face=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"snow_gl_get_error") ) { snow_gl_get_error=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"snow_gl_is_buffer") ) { snow_gl_is_buffer=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"snow_gl_is_shader") ) { snow_gl_is_shader=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"snow_gl_uniform1f") ) { snow_gl_uniform1f=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"snow_gl_uniform1i") ) { snow_gl_uniform1i=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"snow_gl_uniform2f") ) { snow_gl_uniform2f=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"snow_gl_uniform2i") ) { snow_gl_uniform2i=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"snow_gl_uniform3f") ) { snow_gl_uniform3f=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"snow_gl_uniform3i") ) { snow_gl_uniform3i=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"snow_gl_uniform4f") ) { snow_gl_uniform4f=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"snow_gl_uniform4i") ) { snow_gl_uniform4i=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"snow_gl_blend_func") ) { snow_gl_blend_func=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"snow_gl_color_mask") ) { snow_gl_color_mask=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"snow_gl_depth_func") ) { snow_gl_depth_func=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"snow_gl_depth_mask") ) { snow_gl_depth_mask=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"snow_gl_front_face") ) { snow_gl_front_face=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"snow_gl_is_enabled") ) { snow_gl_is_enabled=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"snow_gl_is_program") ) { snow_gl_is_program=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"snow_gl_is_texture") ) { snow_gl_is_texture=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"snow_gl_line_width") ) { snow_gl_line_width=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"snow_gl_stencil_op") ) { snow_gl_stencil_op=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"snow_gl_uniform1fv") ) { snow_gl_uniform1fv=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"snow_gl_uniform1iv") ) { snow_gl_uniform1iv=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"snow_gl_uniform2fv") ) { snow_gl_uniform2fv=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"snow_gl_uniform2iv") ) { snow_gl_uniform2iv=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"snow_gl_uniform3fv") ) { snow_gl_uniform3fv=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"snow_gl_uniform3iv") ) { snow_gl_uniform3iv=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"snow_gl_uniform4fv") ) { snow_gl_uniform4fv=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"snow_gl_uniform4iv") ) { snow_gl_uniform4iv=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"snow_gl_bind_buffer") ) { snow_gl_bind_buffer=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"snow_gl_blend_color") ) { snow_gl_blend_color=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"snow_gl_buffer_data") ) { snow_gl_buffer_data=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"snow_gl_clear_color") ) { snow_gl_clear_color=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"snow_gl_clear_depth") ) { snow_gl_clear_depth=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"snow_gl_depth_range") ) { snow_gl_depth_range=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"snow_gl_draw_arrays") ) { snow_gl_draw_arrays=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"snow_gl_get_uniform") ) { snow_gl_get_uniform=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"snow_gl_read_pixels") ) { snow_gl_read_pixels=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"snow_gl_use_program") ) { snow_gl_use_program=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"snow_gl_bind_texture") ) { snow_gl_bind_texture=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"snow_gl_link_program") ) { snow_gl_link_program=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"snow_gl_pixel_storei") ) { snow_gl_pixel_storei=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"snow_gl_stencil_func") ) { snow_gl_stencil_func=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"snow_gl_stencil_mask") ) { snow_gl_stencil_mask=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"snow_gl_tex_image_2d") ) { snow_gl_tex_image_2d=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"snow_gl_attach_shader") ) { snow_gl_attach_shader=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"snow_gl_clear_stencil") ) { snow_gl_clear_stencil=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"snow_gl_create_buffer") ) { snow_gl_create_buffer=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"snow_gl_create_shader") ) { snow_gl_create_shader=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"snow_gl_delete_buffer") ) { snow_gl_delete_buffer=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"snow_gl_delete_shader") ) { snow_gl_delete_shader=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"snow_gl_detach_shader") ) { snow_gl_detach_shader=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"snow_gl_draw_elements") ) { snow_gl_draw_elements=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"snow_gl_get_parameter") ) { snow_gl_get_parameter=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"snow_gl_shader_source") ) { snow_gl_shader_source=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"snow_gl_active_texture") ) { snow_gl_active_texture=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"snow_gl_blend_equation") ) { snow_gl_blend_equation=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"snow_gl_compile_shader") ) { snow_gl_compile_shader=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"snow_gl_create_program") ) { snow_gl_create_program=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"snow_gl_create_texture") ) { snow_gl_create_texture=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"snow_gl_delete_program") ) { snow_gl_delete_program=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"snow_gl_delete_texture") ) { snow_gl_delete_texture=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"snow_gl_is_framebuffer") ) { snow_gl_is_framebuffer=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"snow_gl_polygon_offset") ) { snow_gl_polygon_offset=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"snow_gl_tex_parameterf") ) { snow_gl_tex_parameterf=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"snow_gl_tex_parameteri") ) { snow_gl_tex_parameteri=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"snow_gl_uniform_matrix") ) { snow_gl_uniform_matrix=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"snow_gl_buffer_sub_data") ) { snow_gl_buffer_sub_data=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"snow_gl_generate_mipmap") ) { snow_gl_generate_mipmap=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"snow_gl_is_renderbuffer") ) { snow_gl_is_renderbuffer=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"snow_gl_sample_coverage") ) { snow_gl_sample_coverage=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"snow_gl_vertex_attrib1f") ) { snow_gl_vertex_attrib1f=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"snow_gl_vertex_attrib2f") ) { snow_gl_vertex_attrib2f=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"snow_gl_vertex_attrib3f") ) { snow_gl_vertex_attrib3f=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"snow_gl_vertex_attrib4f") ) { snow_gl_vertex_attrib4f=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"snow_gl_bind_framebuffer") ) { snow_gl_bind_framebuffer=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"snow_gl_tex_sub_image_2d") ) { snow_gl_tex_sub_image_2d=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"snow_gl_validate_program") ) { snow_gl_validate_program=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"snow_gl_vertex_attrib1fv") ) { snow_gl_vertex_attrib1fv=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"snow_gl_vertex_attrib2fv") ) { snow_gl_vertex_attrib2fv=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"snow_gl_vertex_attrib3fv") ) { snow_gl_vertex_attrib3fv=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"snow_gl_vertex_attrib4fv") ) { snow_gl_vertex_attrib4fv=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"snow_gl_bind_renderbuffer") ) { snow_gl_bind_renderbuffer=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"snow_gl_copy_tex_image_2d") ) { snow_gl_copy_tex_image_2d=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"snow_gl_get_active_attrib") ) { snow_gl_get_active_attrib=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"snow_gl_get_shader_source") ) { snow_gl_get_shader_source=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"snow_gl_get_tex_parameter") ) { snow_gl_get_tex_parameter=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"snow_gl_get_vertex_attrib") ) { snow_gl_get_vertex_attrib=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"snow_gl_create_framebuffer") ) { snow_gl_create_framebuffer=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"snow_gl_delete_framebuffer") ) { snow_gl_delete_framebuffer=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"snow_gl_get_active_uniform") ) { snow_gl_get_active_uniform=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"snow_gl_blend_func_separate") ) { snow_gl_blend_func_separate=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"snow_gl_get_attrib_location") ) { snow_gl_get_attrib_location=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"snow_gl_get_shader_info_log") ) { snow_gl_get_shader_info_log=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"snow_gl_stencil_op_separate") ) { snow_gl_stencil_op_separate=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"snow_gl_bind_attrib_location") ) { snow_gl_bind_attrib_location=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"snow_gl_create_render_buffer") ) { snow_gl_create_render_buffer=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"snow_gl_delete_render_buffer") ) { snow_gl_delete_render_buffer=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"snow_gl_get_program_info_log") ) { snow_gl_get_program_info_log=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"snow_gl_get_shader_parameter") ) { snow_gl_get_shader_parameter=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"snow_gl_get_uniform_location") ) { snow_gl_get_uniform_location=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"snow_gl_renderbuffer_storage") ) { snow_gl_renderbuffer_storage=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"snow_gl_copy_tex_sub_image_2d") ) { snow_gl_copy_tex_sub_image_2d=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"snow_gl_framebuffer_texture2D") ) { snow_gl_framebuffer_texture2D=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"snow_gl_get_buffer_paramerter") ) { snow_gl_get_buffer_paramerter=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"snow_gl_get_program_parameter") ) { snow_gl_get_program_parameter=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"snow_gl_stencil_func_separate") ) { snow_gl_stencil_func_separate=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"snow_gl_stencil_mask_separate") ) { snow_gl_stencil_mask_separate=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"snow_gl_vertex_attrib_pointer") ) { snow_gl_vertex_attrib_pointer=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"snow_gl_get_context_attributes") ) { snow_gl_get_context_attributes=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"snow_gl_blend_equation_separate") ) { snow_gl_blend_equation_separate=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"snow_gl_compressed_tex_image_2d") ) { snow_gl_compressed_tex_image_2d=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 32:
		if (HX_FIELD_EQ(inName,"snow_gl_check_framebuffer_status") ) { snow_gl_check_framebuffer_status=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"snow_gl_framebuffer_renderbuffer") ) { snow_gl_framebuffer_renderbuffer=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"snow_gl_get_supported_extensions") ) { snow_gl_get_supported_extensions=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"snow_gl_get_vertex_attrib_offset") ) { snow_gl_get_vertex_attrib_offset=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 34:
		if (HX_FIELD_EQ(inName,"snow_gl_enable_vertex_attrib_array") ) { snow_gl_enable_vertex_attrib_array=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 35:
		if (HX_FIELD_EQ(inName,"snow_gl_compressed_tex_sub_image_2d") ) { snow_gl_compressed_tex_sub_image_2d=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"snow_gl_disable_vertex_attrib_array") ) { snow_gl_disable_vertex_attrib_array=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"snow_gl_get_render_buffer_parameter") ) { snow_gl_get_render_buffer_parameter=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"snow_gl_get_shader_precision_format") ) { snow_gl_get_shader_precision_format=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 44:
		if (HX_FIELD_EQ(inName,"snow_gl_get_framebuffer_attachment_parameter") ) { snow_gl_get_framebuffer_attachment_parameter=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void GL_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("DEPTH_BUFFER_BIT"),
	HX_CSTRING("STENCIL_BUFFER_BIT"),
	HX_CSTRING("COLOR_BUFFER_BIT"),
	HX_CSTRING("POINTS"),
	HX_CSTRING("LINES"),
	HX_CSTRING("LINE_LOOP"),
	HX_CSTRING("LINE_STRIP"),
	HX_CSTRING("TRIANGLES"),
	HX_CSTRING("TRIANGLE_STRIP"),
	HX_CSTRING("TRIANGLE_FAN"),
	HX_CSTRING("ZERO"),
	HX_CSTRING("ONE"),
	HX_CSTRING("SRC_COLOR"),
	HX_CSTRING("ONE_MINUS_SRC_COLOR"),
	HX_CSTRING("SRC_ALPHA"),
	HX_CSTRING("ONE_MINUS_SRC_ALPHA"),
	HX_CSTRING("DST_ALPHA"),
	HX_CSTRING("ONE_MINUS_DST_ALPHA"),
	HX_CSTRING("DST_COLOR"),
	HX_CSTRING("ONE_MINUS_DST_COLOR"),
	HX_CSTRING("SRC_ALPHA_SATURATE"),
	HX_CSTRING("FUNC_ADD"),
	HX_CSTRING("BLEND_EQUATION"),
	HX_CSTRING("BLEND_EQUATION_RGB"),
	HX_CSTRING("BLEND_EQUATION_ALPHA"),
	HX_CSTRING("FUNC_SUBTRACT"),
	HX_CSTRING("FUNC_REVERSE_SUBTRACT"),
	HX_CSTRING("BLEND_DST_RGB"),
	HX_CSTRING("BLEND_SRC_RGB"),
	HX_CSTRING("BLEND_DST_ALPHA"),
	HX_CSTRING("BLEND_SRC_ALPHA"),
	HX_CSTRING("CONSTANT_COLOR"),
	HX_CSTRING("ONE_MINUS_CONSTANT_COLOR"),
	HX_CSTRING("CONSTANT_ALPHA"),
	HX_CSTRING("ONE_MINUS_CONSTANT_ALPHA"),
	HX_CSTRING("BLEND_COLOR"),
	HX_CSTRING("ARRAY_BUFFER"),
	HX_CSTRING("ELEMENT_ARRAY_BUFFER"),
	HX_CSTRING("ARRAY_BUFFER_BINDING"),
	HX_CSTRING("ELEMENT_ARRAY_BUFFER_BINDING"),
	HX_CSTRING("STREAM_DRAW"),
	HX_CSTRING("STATIC_DRAW"),
	HX_CSTRING("DYNAMIC_DRAW"),
	HX_CSTRING("BUFFER_SIZE"),
	HX_CSTRING("BUFFER_USAGE"),
	HX_CSTRING("CURRENT_VERTEX_ATTRIB"),
	HX_CSTRING("FRONT"),
	HX_CSTRING("BACK"),
	HX_CSTRING("FRONT_AND_BACK"),
	HX_CSTRING("CULL_FACE"),
	HX_CSTRING("BLEND"),
	HX_CSTRING("DITHER"),
	HX_CSTRING("STENCIL_TEST"),
	HX_CSTRING("DEPTH_TEST"),
	HX_CSTRING("SCISSOR_TEST"),
	HX_CSTRING("POLYGON_OFFSET_FILL"),
	HX_CSTRING("SAMPLE_ALPHA_TO_COVERAGE"),
	HX_CSTRING("SAMPLE_COVERAGE"),
	HX_CSTRING("NO_ERROR"),
	HX_CSTRING("INVALID_ENUM"),
	HX_CSTRING("INVALID_VALUE"),
	HX_CSTRING("INVALID_OPERATION"),
	HX_CSTRING("OUT_OF_MEMORY"),
	HX_CSTRING("CW"),
	HX_CSTRING("CCW"),
	HX_CSTRING("LINE_WIDTH"),
	HX_CSTRING("ALIASED_POINT_SIZE_RANGE"),
	HX_CSTRING("ALIASED_LINE_WIDTH_RANGE"),
	HX_CSTRING("CULL_FACE_MODE"),
	HX_CSTRING("FRONT_FACE"),
	HX_CSTRING("DEPTH_RANGE"),
	HX_CSTRING("DEPTH_WRITEMASK"),
	HX_CSTRING("DEPTH_CLEAR_VALUE"),
	HX_CSTRING("DEPTH_FUNC"),
	HX_CSTRING("STENCIL_CLEAR_VALUE"),
	HX_CSTRING("STENCIL_FUNC"),
	HX_CSTRING("STENCIL_FAIL"),
	HX_CSTRING("STENCIL_PASS_DEPTH_FAIL"),
	HX_CSTRING("STENCIL_PASS_DEPTH_PASS"),
	HX_CSTRING("STENCIL_REF"),
	HX_CSTRING("STENCIL_VALUE_MASK"),
	HX_CSTRING("STENCIL_WRITEMASK"),
	HX_CSTRING("STENCIL_BACK_FUNC"),
	HX_CSTRING("STENCIL_BACK_FAIL"),
	HX_CSTRING("STENCIL_BACK_PASS_DEPTH_FAIL"),
	HX_CSTRING("STENCIL_BACK_PASS_DEPTH_PASS"),
	HX_CSTRING("STENCIL_BACK_REF"),
	HX_CSTRING("STENCIL_BACK_VALUE_MASK"),
	HX_CSTRING("STENCIL_BACK_WRITEMASK"),
	HX_CSTRING("VIEWPORT"),
	HX_CSTRING("SCISSOR_BOX"),
	HX_CSTRING("COLOR_CLEAR_VALUE"),
	HX_CSTRING("COLOR_WRITEMASK"),
	HX_CSTRING("UNPACK_ALIGNMENT"),
	HX_CSTRING("PACK_ALIGNMENT"),
	HX_CSTRING("MAX_TEXTURE_SIZE"),
	HX_CSTRING("MAX_VIEWPORT_DIMS"),
	HX_CSTRING("SUBPIXEL_BITS"),
	HX_CSTRING("RED_BITS"),
	HX_CSTRING("GREEN_BITS"),
	HX_CSTRING("BLUE_BITS"),
	HX_CSTRING("ALPHA_BITS"),
	HX_CSTRING("DEPTH_BITS"),
	HX_CSTRING("STENCIL_BITS"),
	HX_CSTRING("POLYGON_OFFSET_UNITS"),
	HX_CSTRING("POLYGON_OFFSET_FACTOR"),
	HX_CSTRING("TEXTURE_BINDING_2D"),
	HX_CSTRING("SAMPLE_BUFFERS"),
	HX_CSTRING("SAMPLES"),
	HX_CSTRING("SAMPLE_COVERAGE_VALUE"),
	HX_CSTRING("SAMPLE_COVERAGE_INVERT"),
	HX_CSTRING("COMPRESSED_TEXTURE_FORMATS"),
	HX_CSTRING("DONT_CARE"),
	HX_CSTRING("FASTEST"),
	HX_CSTRING("NICEST"),
	HX_CSTRING("GENERATE_MIPMAP_HINT"),
	HX_CSTRING("BYTE"),
	HX_CSTRING("UNSIGNED_BYTE"),
	HX_CSTRING("SHORT"),
	HX_CSTRING("UNSIGNED_SHORT"),
	HX_CSTRING("INT"),
	HX_CSTRING("UNSIGNED_INT"),
	HX_CSTRING("FLOAT"),
	HX_CSTRING("DEPTH_COMPONENT"),
	HX_CSTRING("ALPHA"),
	HX_CSTRING("RGB"),
	HX_CSTRING("RGBA"),
	HX_CSTRING("LUMINANCE"),
	HX_CSTRING("LUMINANCE_ALPHA"),
	HX_CSTRING("UNSIGNED_SHORT_4_4_4_4"),
	HX_CSTRING("UNSIGNED_SHORT_5_5_5_1"),
	HX_CSTRING("UNSIGNED_SHORT_5_6_5"),
	HX_CSTRING("FRAGMENT_SHADER"),
	HX_CSTRING("VERTEX_SHADER"),
	HX_CSTRING("MAX_VERTEX_ATTRIBS"),
	HX_CSTRING("MAX_VERTEX_UNIFORM_VECTORS"),
	HX_CSTRING("MAX_VARYING_VECTORS"),
	HX_CSTRING("MAX_COMBINED_TEXTURE_IMAGE_UNITS"),
	HX_CSTRING("MAX_VERTEX_TEXTURE_IMAGE_UNITS"),
	HX_CSTRING("MAX_TEXTURE_IMAGE_UNITS"),
	HX_CSTRING("MAX_FRAGMENT_UNIFORM_VECTORS"),
	HX_CSTRING("SHADER_TYPE"),
	HX_CSTRING("DELETE_STATUS"),
	HX_CSTRING("LINK_STATUS"),
	HX_CSTRING("VALIDATE_STATUS"),
	HX_CSTRING("ATTACHED_SHADERS"),
	HX_CSTRING("ACTIVE_UNIFORMS"),
	HX_CSTRING("ACTIVE_ATTRIBUTES"),
	HX_CSTRING("SHADING_LANGUAGE_VERSION"),
	HX_CSTRING("CURRENT_PROGRAM"),
	HX_CSTRING("NEVER"),
	HX_CSTRING("LESS"),
	HX_CSTRING("EQUAL"),
	HX_CSTRING("LEQUAL"),
	HX_CSTRING("GREATER"),
	HX_CSTRING("NOTEQUAL"),
	HX_CSTRING("GEQUAL"),
	HX_CSTRING("ALWAYS"),
	HX_CSTRING("KEEP"),
	HX_CSTRING("REPLACE"),
	HX_CSTRING("INCR"),
	HX_CSTRING("DECR"),
	HX_CSTRING("INVERT"),
	HX_CSTRING("INCR_WRAP"),
	HX_CSTRING("DECR_WRAP"),
	HX_CSTRING("VENDOR"),
	HX_CSTRING("RENDERER"),
	HX_CSTRING("VERSION"),
	HX_CSTRING("NEAREST"),
	HX_CSTRING("LINEAR"),
	HX_CSTRING("NEAREST_MIPMAP_NEAREST"),
	HX_CSTRING("LINEAR_MIPMAP_NEAREST"),
	HX_CSTRING("NEAREST_MIPMAP_LINEAR"),
	HX_CSTRING("LINEAR_MIPMAP_LINEAR"),
	HX_CSTRING("TEXTURE_MAG_FILTER"),
	HX_CSTRING("TEXTURE_MIN_FILTER"),
	HX_CSTRING("TEXTURE_WRAP_S"),
	HX_CSTRING("TEXTURE_WRAP_T"),
	HX_CSTRING("TEXTURE_2D"),
	HX_CSTRING("TEXTURE"),
	HX_CSTRING("TEXTURE_CUBE_MAP"),
	HX_CSTRING("TEXTURE_BINDING_CUBE_MAP"),
	HX_CSTRING("TEXTURE_CUBE_MAP_POSITIVE_X"),
	HX_CSTRING("TEXTURE_CUBE_MAP_NEGATIVE_X"),
	HX_CSTRING("TEXTURE_CUBE_MAP_POSITIVE_Y"),
	HX_CSTRING("TEXTURE_CUBE_MAP_NEGATIVE_Y"),
	HX_CSTRING("TEXTURE_CUBE_MAP_POSITIVE_Z"),
	HX_CSTRING("TEXTURE_CUBE_MAP_NEGATIVE_Z"),
	HX_CSTRING("MAX_CUBE_MAP_TEXTURE_SIZE"),
	HX_CSTRING("TEXTURE0"),
	HX_CSTRING("TEXTURE1"),
	HX_CSTRING("TEXTURE2"),
	HX_CSTRING("TEXTURE3"),
	HX_CSTRING("TEXTURE4"),
	HX_CSTRING("TEXTURE5"),
	HX_CSTRING("TEXTURE6"),
	HX_CSTRING("TEXTURE7"),
	HX_CSTRING("TEXTURE8"),
	HX_CSTRING("TEXTURE9"),
	HX_CSTRING("TEXTURE10"),
	HX_CSTRING("TEXTURE11"),
	HX_CSTRING("TEXTURE12"),
	HX_CSTRING("TEXTURE13"),
	HX_CSTRING("TEXTURE14"),
	HX_CSTRING("TEXTURE15"),
	HX_CSTRING("TEXTURE16"),
	HX_CSTRING("TEXTURE17"),
	HX_CSTRING("TEXTURE18"),
	HX_CSTRING("TEXTURE19"),
	HX_CSTRING("TEXTURE20"),
	HX_CSTRING("TEXTURE21"),
	HX_CSTRING("TEXTURE22"),
	HX_CSTRING("TEXTURE23"),
	HX_CSTRING("TEXTURE24"),
	HX_CSTRING("TEXTURE25"),
	HX_CSTRING("TEXTURE26"),
	HX_CSTRING("TEXTURE27"),
	HX_CSTRING("TEXTURE28"),
	HX_CSTRING("TEXTURE29"),
	HX_CSTRING("TEXTURE30"),
	HX_CSTRING("TEXTURE31"),
	HX_CSTRING("ACTIVE_TEXTURE"),
	HX_CSTRING("REPEAT"),
	HX_CSTRING("CLAMP_TO_EDGE"),
	HX_CSTRING("MIRRORED_REPEAT"),
	HX_CSTRING("FLOAT_VEC2"),
	HX_CSTRING("FLOAT_VEC3"),
	HX_CSTRING("FLOAT_VEC4"),
	HX_CSTRING("INT_VEC2"),
	HX_CSTRING("INT_VEC3"),
	HX_CSTRING("INT_VEC4"),
	HX_CSTRING("BOOL"),
	HX_CSTRING("BOOL_VEC2"),
	HX_CSTRING("BOOL_VEC3"),
	HX_CSTRING("BOOL_VEC4"),
	HX_CSTRING("FLOAT_MAT2"),
	HX_CSTRING("FLOAT_MAT3"),
	HX_CSTRING("FLOAT_MAT4"),
	HX_CSTRING("SAMPLER_2D"),
	HX_CSTRING("SAMPLER_CUBE"),
	HX_CSTRING("VERTEX_ATTRIB_ARRAY_ENABLED"),
	HX_CSTRING("VERTEX_ATTRIB_ARRAY_SIZE"),
	HX_CSTRING("VERTEX_ATTRIB_ARRAY_STRIDE"),
	HX_CSTRING("VERTEX_ATTRIB_ARRAY_TYPE"),
	HX_CSTRING("VERTEX_ATTRIB_ARRAY_NORMALIZED"),
	HX_CSTRING("VERTEX_ATTRIB_ARRAY_POINTER"),
	HX_CSTRING("VERTEX_ATTRIB_ARRAY_BUFFER_BINDING"),
	HX_CSTRING("VERTEX_PROGRAM_POINT_SIZE"),
	HX_CSTRING("POINT_SPRITE"),
	HX_CSTRING("COMPILE_STATUS"),
	HX_CSTRING("LOW_FLOAT"),
	HX_CSTRING("MEDIUM_FLOAT"),
	HX_CSTRING("HIGH_FLOAT"),
	HX_CSTRING("LOW_INT"),
	HX_CSTRING("MEDIUM_INT"),
	HX_CSTRING("HIGH_INT"),
	HX_CSTRING("FRAMEBUFFER"),
	HX_CSTRING("RENDERBUFFER"),
	HX_CSTRING("RGBA4"),
	HX_CSTRING("RGB5_A1"),
	HX_CSTRING("RGB565"),
	HX_CSTRING("DEPTH_COMPONENT16"),
	HX_CSTRING("STENCIL_INDEX"),
	HX_CSTRING("STENCIL_INDEX8"),
	HX_CSTRING("DEPTH_STENCIL"),
	HX_CSTRING("RENDERBUFFER_WIDTH"),
	HX_CSTRING("RENDERBUFFER_HEIGHT"),
	HX_CSTRING("RENDERBUFFER_INTERNAL_FORMAT"),
	HX_CSTRING("RENDERBUFFER_RED_SIZE"),
	HX_CSTRING("RENDERBUFFER_GREEN_SIZE"),
	HX_CSTRING("RENDERBUFFER_BLUE_SIZE"),
	HX_CSTRING("RENDERBUFFER_ALPHA_SIZE"),
	HX_CSTRING("RENDERBUFFER_DEPTH_SIZE"),
	HX_CSTRING("RENDERBUFFER_STENCIL_SIZE"),
	HX_CSTRING("FRAMEBUFFER_ATTACHMENT_OBJECT_TYPE"),
	HX_CSTRING("FRAMEBUFFER_ATTACHMENT_OBJECT_NAME"),
	HX_CSTRING("FRAMEBUFFER_ATTACHMENT_TEXTURE_LEVEL"),
	HX_CSTRING("FRAMEBUFFER_ATTACHMENT_TEXTURE_CUBE_MAP_FACE"),
	HX_CSTRING("COLOR_ATTACHMENT0"),
	HX_CSTRING("DEPTH_ATTACHMENT"),
	HX_CSTRING("STENCIL_ATTACHMENT"),
	HX_CSTRING("DEPTH_STENCIL_ATTACHMENT"),
	HX_CSTRING("NONE"),
	HX_CSTRING("FRAMEBUFFER_COMPLETE"),
	HX_CSTRING("FRAMEBUFFER_INCOMPLETE_ATTACHMENT"),
	HX_CSTRING("FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT"),
	HX_CSTRING("FRAMEBUFFER_INCOMPLETE_DIMENSIONS"),
	HX_CSTRING("FRAMEBUFFER_UNSUPPORTED"),
	HX_CSTRING("FRAMEBUFFER_BINDING"),
	HX_CSTRING("RENDERBUFFER_BINDING"),
	HX_CSTRING("MAX_RENDERBUFFER_SIZE"),
	HX_CSTRING("INVALID_FRAMEBUFFER_OPERATION"),
	HX_CSTRING("UNPACK_FLIP_Y_WEBGL"),
	HX_CSTRING("UNPACK_PREMULTIPLY_ALPHA_WEBGL"),
	HX_CSTRING("CONTEXT_LOST_WEBGL"),
	HX_CSTRING("UNPACK_COLORSPACE_CONVERSION_WEBGL"),
	HX_CSTRING("BROWSER_DEFAULT_WEBGL"),
	HX_CSTRING("versionString"),
	HX_CSTRING("activeTexture"),
	HX_CSTRING("attachShader"),
	HX_CSTRING("bindAttribLocation"),
	HX_CSTRING("bindBuffer"),
	HX_CSTRING("bindFramebuffer"),
	HX_CSTRING("bindRenderbuffer"),
	HX_CSTRING("bindTexture"),
	HX_CSTRING("blendColor"),
	HX_CSTRING("blendEquation"),
	HX_CSTRING("blendEquationSeparate"),
	HX_CSTRING("blendFunc"),
	HX_CSTRING("blendFuncSeparate"),
	HX_CSTRING("bufferData"),
	HX_CSTRING("bufferSubData"),
	HX_CSTRING("checkFramebufferStatus"),
	HX_CSTRING("clear"),
	HX_CSTRING("clearColor"),
	HX_CSTRING("clearDepth"),
	HX_CSTRING("clearStencil"),
	HX_CSTRING("colorMask"),
	HX_CSTRING("compileShader"),
	HX_CSTRING("compressedTexImage2D"),
	HX_CSTRING("compressedTexSubImage2D"),
	HX_CSTRING("copyTexImage2D"),
	HX_CSTRING("copyTexSubImage2D"),
	HX_CSTRING("createBuffer"),
	HX_CSTRING("createFramebuffer"),
	HX_CSTRING("createProgram"),
	HX_CSTRING("createRenderbuffer"),
	HX_CSTRING("createShader"),
	HX_CSTRING("createTexture"),
	HX_CSTRING("cullFace"),
	HX_CSTRING("deleteBuffer"),
	HX_CSTRING("deleteFramebuffer"),
	HX_CSTRING("deleteProgram"),
	HX_CSTRING("deleteRenderbuffer"),
	HX_CSTRING("deleteShader"),
	HX_CSTRING("deleteTexture"),
	HX_CSTRING("depthFunc"),
	HX_CSTRING("depthMask"),
	HX_CSTRING("depthRange"),
	HX_CSTRING("detachShader"),
	HX_CSTRING("disable"),
	HX_CSTRING("disableVertexAttribArray"),
	HX_CSTRING("drawArrays"),
	HX_CSTRING("drawElements"),
	HX_CSTRING("enable"),
	HX_CSTRING("enableVertexAttribArray"),
	HX_CSTRING("finish"),
	HX_CSTRING("flush"),
	HX_CSTRING("framebufferRenderbuffer"),
	HX_CSTRING("framebufferTexture2D"),
	HX_CSTRING("frontFace"),
	HX_CSTRING("generateMipmap"),
	HX_CSTRING("getActiveAttrib"),
	HX_CSTRING("getActiveUniform"),
	HX_CSTRING("getAttachedShaders"),
	HX_CSTRING("getAttribLocation"),
	HX_CSTRING("getBufferParameter"),
	HX_CSTRING("getContextAttributes"),
	HX_CSTRING("getError"),
	HX_CSTRING("getExtension"),
	HX_CSTRING("getFramebufferAttachmentParameter"),
	HX_CSTRING("getParameter"),
	HX_CSTRING("getProgramInfoLog"),
	HX_CSTRING("getProgramParameter"),
	HX_CSTRING("getRenderbufferParameter"),
	HX_CSTRING("getShaderInfoLog"),
	HX_CSTRING("getShaderParameter"),
	HX_CSTRING("getShaderPrecisionFormat"),
	HX_CSTRING("getShaderSource"),
	HX_CSTRING("getSupportedExtensions"),
	HX_CSTRING("getTexParameter"),
	HX_CSTRING("getUniform"),
	HX_CSTRING("getUniformLocation"),
	HX_CSTRING("getVertexAttrib"),
	HX_CSTRING("getVertexAttribOffset"),
	HX_CSTRING("hint"),
	HX_CSTRING("isBuffer"),
	HX_CSTRING("isEnabled"),
	HX_CSTRING("isFramebuffer"),
	HX_CSTRING("isProgram"),
	HX_CSTRING("isRenderbuffer"),
	HX_CSTRING("isShader"),
	HX_CSTRING("isTexture"),
	HX_CSTRING("lineWidth"),
	HX_CSTRING("linkProgram"),
	HX_CSTRING("load"),
	HX_CSTRING("pixelStorei"),
	HX_CSTRING("polygonOffset"),
	HX_CSTRING("readPixels"),
	HX_CSTRING("renderbufferStorage"),
	HX_CSTRING("sampleCoverage"),
	HX_CSTRING("scissor"),
	HX_CSTRING("shaderSource"),
	HX_CSTRING("stencilFunc"),
	HX_CSTRING("stencilFuncSeparate"),
	HX_CSTRING("stencilMask"),
	HX_CSTRING("stencilMaskSeparate"),
	HX_CSTRING("stencilOp"),
	HX_CSTRING("stencilOpSeparate"),
	HX_CSTRING("texImage2D"),
	HX_CSTRING("texParameterf"),
	HX_CSTRING("texParameteri"),
	HX_CSTRING("texSubImage2D"),
	HX_CSTRING("uniform1f"),
	HX_CSTRING("uniform1fv"),
	HX_CSTRING("uniform1i"),
	HX_CSTRING("uniform1iv"),
	HX_CSTRING("uniform2f"),
	HX_CSTRING("uniform2fv"),
	HX_CSTRING("uniform2i"),
	HX_CSTRING("uniform2iv"),
	HX_CSTRING("uniform3f"),
	HX_CSTRING("uniform3fv"),
	HX_CSTRING("uniform3i"),
	HX_CSTRING("uniform3iv"),
	HX_CSTRING("uniform4f"),
	HX_CSTRING("uniform4fv"),
	HX_CSTRING("uniform4i"),
	HX_CSTRING("uniform4iv"),
	HX_CSTRING("uniformMatrix2fv"),
	HX_CSTRING("uniformMatrix3fv"),
	HX_CSTRING("uniformMatrix4fv"),
	HX_CSTRING("useProgram"),
	HX_CSTRING("validateProgram"),
	HX_CSTRING("vertexAttrib1f"),
	HX_CSTRING("vertexAttrib1fv"),
	HX_CSTRING("vertexAttrib2f"),
	HX_CSTRING("vertexAttrib2fv"),
	HX_CSTRING("vertexAttrib3f"),
	HX_CSTRING("vertexAttrib3fv"),
	HX_CSTRING("vertexAttrib4f"),
	HX_CSTRING("vertexAttrib4fv"),
	HX_CSTRING("vertexAttribPointer"),
	HX_CSTRING("viewport"),
	HX_CSTRING("get_version"),
	HX_CSTRING("snow_gl_active_texture"),
	HX_CSTRING("snow_gl_attach_shader"),
	HX_CSTRING("snow_gl_bind_attrib_location"),
	HX_CSTRING("snow_gl_bind_buffer"),
	HX_CSTRING("snow_gl_bind_framebuffer"),
	HX_CSTRING("snow_gl_bind_renderbuffer"),
	HX_CSTRING("snow_gl_bind_texture"),
	HX_CSTRING("snow_gl_blend_color"),
	HX_CSTRING("snow_gl_blend_equation"),
	HX_CSTRING("snow_gl_blend_equation_separate"),
	HX_CSTRING("snow_gl_blend_func"),
	HX_CSTRING("snow_gl_blend_func_separate"),
	HX_CSTRING("snow_gl_buffer_data"),
	HX_CSTRING("snow_gl_buffer_sub_data"),
	HX_CSTRING("snow_gl_check_framebuffer_status"),
	HX_CSTRING("snow_gl_clear"),
	HX_CSTRING("snow_gl_clear_color"),
	HX_CSTRING("snow_gl_clear_depth"),
	HX_CSTRING("snow_gl_clear_stencil"),
	HX_CSTRING("snow_gl_color_mask"),
	HX_CSTRING("snow_gl_compile_shader"),
	HX_CSTRING("snow_gl_compressed_tex_image_2d"),
	HX_CSTRING("snow_gl_compressed_tex_sub_image_2d"),
	HX_CSTRING("snow_gl_copy_tex_image_2d"),
	HX_CSTRING("snow_gl_copy_tex_sub_image_2d"),
	HX_CSTRING("snow_gl_create_buffer"),
	HX_CSTRING("snow_gl_create_framebuffer"),
	HX_CSTRING("snow_gl_create_program"),
	HX_CSTRING("snow_gl_create_render_buffer"),
	HX_CSTRING("snow_gl_create_shader"),
	HX_CSTRING("snow_gl_create_texture"),
	HX_CSTRING("snow_gl_cull_face"),
	HX_CSTRING("snow_gl_delete_buffer"),
	HX_CSTRING("snow_gl_delete_framebuffer"),
	HX_CSTRING("snow_gl_delete_program"),
	HX_CSTRING("snow_gl_delete_render_buffer"),
	HX_CSTRING("snow_gl_delete_shader"),
	HX_CSTRING("snow_gl_delete_texture"),
	HX_CSTRING("snow_gl_depth_func"),
	HX_CSTRING("snow_gl_depth_mask"),
	HX_CSTRING("snow_gl_depth_range"),
	HX_CSTRING("snow_gl_detach_shader"),
	HX_CSTRING("snow_gl_disable"),
	HX_CSTRING("snow_gl_disable_vertex_attrib_array"),
	HX_CSTRING("snow_gl_draw_arrays"),
	HX_CSTRING("snow_gl_draw_elements"),
	HX_CSTRING("snow_gl_enable"),
	HX_CSTRING("snow_gl_enable_vertex_attrib_array"),
	HX_CSTRING("snow_gl_finish"),
	HX_CSTRING("snow_gl_flush"),
	HX_CSTRING("snow_gl_framebuffer_renderbuffer"),
	HX_CSTRING("snow_gl_framebuffer_texture2D"),
	HX_CSTRING("snow_gl_front_face"),
	HX_CSTRING("snow_gl_generate_mipmap"),
	HX_CSTRING("snow_gl_get_active_attrib"),
	HX_CSTRING("snow_gl_get_active_uniform"),
	HX_CSTRING("snow_gl_get_attrib_location"),
	HX_CSTRING("snow_gl_get_buffer_paramerter"),
	HX_CSTRING("snow_gl_get_context_attributes"),
	HX_CSTRING("snow_gl_get_error"),
	HX_CSTRING("snow_gl_get_framebuffer_attachment_parameter"),
	HX_CSTRING("snow_gl_get_parameter"),
	HX_CSTRING("snow_gl_get_program_info_log"),
	HX_CSTRING("snow_gl_get_program_parameter"),
	HX_CSTRING("snow_gl_get_render_buffer_parameter"),
	HX_CSTRING("snow_gl_get_shader_info_log"),
	HX_CSTRING("snow_gl_get_shader_parameter"),
	HX_CSTRING("snow_gl_get_shader_precision_format"),
	HX_CSTRING("snow_gl_get_shader_source"),
	HX_CSTRING("snow_gl_get_supported_extensions"),
	HX_CSTRING("snow_gl_get_tex_parameter"),
	HX_CSTRING("snow_gl_get_uniform"),
	HX_CSTRING("snow_gl_get_uniform_location"),
	HX_CSTRING("snow_gl_get_vertex_attrib"),
	HX_CSTRING("snow_gl_get_vertex_attrib_offset"),
	HX_CSTRING("snow_gl_hint"),
	HX_CSTRING("snow_gl_is_buffer"),
	HX_CSTRING("snow_gl_is_enabled"),
	HX_CSTRING("snow_gl_is_framebuffer"),
	HX_CSTRING("snow_gl_is_program"),
	HX_CSTRING("snow_gl_is_renderbuffer"),
	HX_CSTRING("snow_gl_is_shader"),
	HX_CSTRING("snow_gl_is_texture"),
	HX_CSTRING("snow_gl_line_width"),
	HX_CSTRING("snow_gl_link_program"),
	HX_CSTRING("snow_gl_pixel_storei"),
	HX_CSTRING("snow_gl_polygon_offset"),
	HX_CSTRING("snow_gl_read_pixels"),
	HX_CSTRING("snow_gl_renderbuffer_storage"),
	HX_CSTRING("snow_gl_sample_coverage"),
	HX_CSTRING("snow_gl_scissor"),
	HX_CSTRING("snow_gl_shader_source"),
	HX_CSTRING("snow_gl_stencil_func"),
	HX_CSTRING("snow_gl_stencil_func_separate"),
	HX_CSTRING("snow_gl_stencil_mask"),
	HX_CSTRING("snow_gl_stencil_mask_separate"),
	HX_CSTRING("snow_gl_stencil_op"),
	HX_CSTRING("snow_gl_stencil_op_separate"),
	HX_CSTRING("snow_gl_tex_image_2d"),
	HX_CSTRING("snow_gl_tex_parameterf"),
	HX_CSTRING("snow_gl_tex_parameteri"),
	HX_CSTRING("snow_gl_tex_sub_image_2d"),
	HX_CSTRING("snow_gl_uniform1f"),
	HX_CSTRING("snow_gl_uniform1fv"),
	HX_CSTRING("snow_gl_uniform1i"),
	HX_CSTRING("snow_gl_uniform1iv"),
	HX_CSTRING("snow_gl_uniform2f"),
	HX_CSTRING("snow_gl_uniform2fv"),
	HX_CSTRING("snow_gl_uniform2i"),
	HX_CSTRING("snow_gl_uniform2iv"),
	HX_CSTRING("snow_gl_uniform3f"),
	HX_CSTRING("snow_gl_uniform3fv"),
	HX_CSTRING("snow_gl_uniform3i"),
	HX_CSTRING("snow_gl_uniform3iv"),
	HX_CSTRING("snow_gl_uniform4f"),
	HX_CSTRING("snow_gl_uniform4fv"),
	HX_CSTRING("snow_gl_uniform4i"),
	HX_CSTRING("snow_gl_uniform4iv"),
	HX_CSTRING("snow_gl_uniform_matrix"),
	HX_CSTRING("snow_gl_use_program"),
	HX_CSTRING("snow_gl_validate_program"),
	HX_CSTRING("snow_gl_version"),
	HX_CSTRING("snow_gl_vertex_attrib1f"),
	HX_CSTRING("snow_gl_vertex_attrib1fv"),
	HX_CSTRING("snow_gl_vertex_attrib2f"),
	HX_CSTRING("snow_gl_vertex_attrib2fv"),
	HX_CSTRING("snow_gl_vertex_attrib3f"),
	HX_CSTRING("snow_gl_vertex_attrib3fv"),
	HX_CSTRING("snow_gl_vertex_attrib4f"),
	HX_CSTRING("snow_gl_vertex_attrib4fv"),
	HX_CSTRING("snow_gl_vertex_attrib_pointer"),
	HX_CSTRING("snow_gl_viewport"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GL_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(GL_obj::DEPTH_BUFFER_BIT,"DEPTH_BUFFER_BIT");
	HX_MARK_MEMBER_NAME(GL_obj::STENCIL_BUFFER_BIT,"STENCIL_BUFFER_BIT");
	HX_MARK_MEMBER_NAME(GL_obj::COLOR_BUFFER_BIT,"COLOR_BUFFER_BIT");
	HX_MARK_MEMBER_NAME(GL_obj::POINTS,"POINTS");
	HX_MARK_MEMBER_NAME(GL_obj::LINES,"LINES");
	HX_MARK_MEMBER_NAME(GL_obj::LINE_LOOP,"LINE_LOOP");
	HX_MARK_MEMBER_NAME(GL_obj::LINE_STRIP,"LINE_STRIP");
	HX_MARK_MEMBER_NAME(GL_obj::TRIANGLES,"TRIANGLES");
	HX_MARK_MEMBER_NAME(GL_obj::TRIANGLE_STRIP,"TRIANGLE_STRIP");
	HX_MARK_MEMBER_NAME(GL_obj::TRIANGLE_FAN,"TRIANGLE_FAN");
	HX_MARK_MEMBER_NAME(GL_obj::ZERO,"ZERO");
	HX_MARK_MEMBER_NAME(GL_obj::ONE,"ONE");
	HX_MARK_MEMBER_NAME(GL_obj::SRC_COLOR,"SRC_COLOR");
	HX_MARK_MEMBER_NAME(GL_obj::ONE_MINUS_SRC_COLOR,"ONE_MINUS_SRC_COLOR");
	HX_MARK_MEMBER_NAME(GL_obj::SRC_ALPHA,"SRC_ALPHA");
	HX_MARK_MEMBER_NAME(GL_obj::ONE_MINUS_SRC_ALPHA,"ONE_MINUS_SRC_ALPHA");
	HX_MARK_MEMBER_NAME(GL_obj::DST_ALPHA,"DST_ALPHA");
	HX_MARK_MEMBER_NAME(GL_obj::ONE_MINUS_DST_ALPHA,"ONE_MINUS_DST_ALPHA");
	HX_MARK_MEMBER_NAME(GL_obj::DST_COLOR,"DST_COLOR");
	HX_MARK_MEMBER_NAME(GL_obj::ONE_MINUS_DST_COLOR,"ONE_MINUS_DST_COLOR");
	HX_MARK_MEMBER_NAME(GL_obj::SRC_ALPHA_SATURATE,"SRC_ALPHA_SATURATE");
	HX_MARK_MEMBER_NAME(GL_obj::FUNC_ADD,"FUNC_ADD");
	HX_MARK_MEMBER_NAME(GL_obj::BLEND_EQUATION,"BLEND_EQUATION");
	HX_MARK_MEMBER_NAME(GL_obj::BLEND_EQUATION_RGB,"BLEND_EQUATION_RGB");
	HX_MARK_MEMBER_NAME(GL_obj::BLEND_EQUATION_ALPHA,"BLEND_EQUATION_ALPHA");
	HX_MARK_MEMBER_NAME(GL_obj::FUNC_SUBTRACT,"FUNC_SUBTRACT");
	HX_MARK_MEMBER_NAME(GL_obj::FUNC_REVERSE_SUBTRACT,"FUNC_REVERSE_SUBTRACT");
	HX_MARK_MEMBER_NAME(GL_obj::BLEND_DST_RGB,"BLEND_DST_RGB");
	HX_MARK_MEMBER_NAME(GL_obj::BLEND_SRC_RGB,"BLEND_SRC_RGB");
	HX_MARK_MEMBER_NAME(GL_obj::BLEND_DST_ALPHA,"BLEND_DST_ALPHA");
	HX_MARK_MEMBER_NAME(GL_obj::BLEND_SRC_ALPHA,"BLEND_SRC_ALPHA");
	HX_MARK_MEMBER_NAME(GL_obj::CONSTANT_COLOR,"CONSTANT_COLOR");
	HX_MARK_MEMBER_NAME(GL_obj::ONE_MINUS_CONSTANT_COLOR,"ONE_MINUS_CONSTANT_COLOR");
	HX_MARK_MEMBER_NAME(GL_obj::CONSTANT_ALPHA,"CONSTANT_ALPHA");
	HX_MARK_MEMBER_NAME(GL_obj::ONE_MINUS_CONSTANT_ALPHA,"ONE_MINUS_CONSTANT_ALPHA");
	HX_MARK_MEMBER_NAME(GL_obj::BLEND_COLOR,"BLEND_COLOR");
	HX_MARK_MEMBER_NAME(GL_obj::ARRAY_BUFFER,"ARRAY_BUFFER");
	HX_MARK_MEMBER_NAME(GL_obj::ELEMENT_ARRAY_BUFFER,"ELEMENT_ARRAY_BUFFER");
	HX_MARK_MEMBER_NAME(GL_obj::ARRAY_BUFFER_BINDING,"ARRAY_BUFFER_BINDING");
	HX_MARK_MEMBER_NAME(GL_obj::ELEMENT_ARRAY_BUFFER_BINDING,"ELEMENT_ARRAY_BUFFER_BINDING");
	HX_MARK_MEMBER_NAME(GL_obj::STREAM_DRAW,"STREAM_DRAW");
	HX_MARK_MEMBER_NAME(GL_obj::STATIC_DRAW,"STATIC_DRAW");
	HX_MARK_MEMBER_NAME(GL_obj::DYNAMIC_DRAW,"DYNAMIC_DRAW");
	HX_MARK_MEMBER_NAME(GL_obj::BUFFER_SIZE,"BUFFER_SIZE");
	HX_MARK_MEMBER_NAME(GL_obj::BUFFER_USAGE,"BUFFER_USAGE");
	HX_MARK_MEMBER_NAME(GL_obj::CURRENT_VERTEX_ATTRIB,"CURRENT_VERTEX_ATTRIB");
	HX_MARK_MEMBER_NAME(GL_obj::FRONT,"FRONT");
	HX_MARK_MEMBER_NAME(GL_obj::BACK,"BACK");
	HX_MARK_MEMBER_NAME(GL_obj::FRONT_AND_BACK,"FRONT_AND_BACK");
	HX_MARK_MEMBER_NAME(GL_obj::CULL_FACE,"CULL_FACE");
	HX_MARK_MEMBER_NAME(GL_obj::BLEND,"BLEND");
	HX_MARK_MEMBER_NAME(GL_obj::DITHER,"DITHER");
	HX_MARK_MEMBER_NAME(GL_obj::STENCIL_TEST,"STENCIL_TEST");
	HX_MARK_MEMBER_NAME(GL_obj::DEPTH_TEST,"DEPTH_TEST");
	HX_MARK_MEMBER_NAME(GL_obj::SCISSOR_TEST,"SCISSOR_TEST");
	HX_MARK_MEMBER_NAME(GL_obj::POLYGON_OFFSET_FILL,"POLYGON_OFFSET_FILL");
	HX_MARK_MEMBER_NAME(GL_obj::SAMPLE_ALPHA_TO_COVERAGE,"SAMPLE_ALPHA_TO_COVERAGE");
	HX_MARK_MEMBER_NAME(GL_obj::SAMPLE_COVERAGE,"SAMPLE_COVERAGE");
	HX_MARK_MEMBER_NAME(GL_obj::NO_ERROR,"NO_ERROR");
	HX_MARK_MEMBER_NAME(GL_obj::INVALID_ENUM,"INVALID_ENUM");
	HX_MARK_MEMBER_NAME(GL_obj::INVALID_VALUE,"INVALID_VALUE");
	HX_MARK_MEMBER_NAME(GL_obj::INVALID_OPERATION,"INVALID_OPERATION");
	HX_MARK_MEMBER_NAME(GL_obj::OUT_OF_MEMORY,"OUT_OF_MEMORY");
	HX_MARK_MEMBER_NAME(GL_obj::CW,"CW");
	HX_MARK_MEMBER_NAME(GL_obj::CCW,"CCW");
	HX_MARK_MEMBER_NAME(GL_obj::LINE_WIDTH,"LINE_WIDTH");
	HX_MARK_MEMBER_NAME(GL_obj::ALIASED_POINT_SIZE_RANGE,"ALIASED_POINT_SIZE_RANGE");
	HX_MARK_MEMBER_NAME(GL_obj::ALIASED_LINE_WIDTH_RANGE,"ALIASED_LINE_WIDTH_RANGE");
	HX_MARK_MEMBER_NAME(GL_obj::CULL_FACE_MODE,"CULL_FACE_MODE");
	HX_MARK_MEMBER_NAME(GL_obj::FRONT_FACE,"FRONT_FACE");
	HX_MARK_MEMBER_NAME(GL_obj::DEPTH_RANGE,"DEPTH_RANGE");
	HX_MARK_MEMBER_NAME(GL_obj::DEPTH_WRITEMASK,"DEPTH_WRITEMASK");
	HX_MARK_MEMBER_NAME(GL_obj::DEPTH_CLEAR_VALUE,"DEPTH_CLEAR_VALUE");
	HX_MARK_MEMBER_NAME(GL_obj::DEPTH_FUNC,"DEPTH_FUNC");
	HX_MARK_MEMBER_NAME(GL_obj::STENCIL_CLEAR_VALUE,"STENCIL_CLEAR_VALUE");
	HX_MARK_MEMBER_NAME(GL_obj::STENCIL_FUNC,"STENCIL_FUNC");
	HX_MARK_MEMBER_NAME(GL_obj::STENCIL_FAIL,"STENCIL_FAIL");
	HX_MARK_MEMBER_NAME(GL_obj::STENCIL_PASS_DEPTH_FAIL,"STENCIL_PASS_DEPTH_FAIL");
	HX_MARK_MEMBER_NAME(GL_obj::STENCIL_PASS_DEPTH_PASS,"STENCIL_PASS_DEPTH_PASS");
	HX_MARK_MEMBER_NAME(GL_obj::STENCIL_REF,"STENCIL_REF");
	HX_MARK_MEMBER_NAME(GL_obj::STENCIL_VALUE_MASK,"STENCIL_VALUE_MASK");
	HX_MARK_MEMBER_NAME(GL_obj::STENCIL_WRITEMASK,"STENCIL_WRITEMASK");
	HX_MARK_MEMBER_NAME(GL_obj::STENCIL_BACK_FUNC,"STENCIL_BACK_FUNC");
	HX_MARK_MEMBER_NAME(GL_obj::STENCIL_BACK_FAIL,"STENCIL_BACK_FAIL");
	HX_MARK_MEMBER_NAME(GL_obj::STENCIL_BACK_PASS_DEPTH_FAIL,"STENCIL_BACK_PASS_DEPTH_FAIL");
	HX_MARK_MEMBER_NAME(GL_obj::STENCIL_BACK_PASS_DEPTH_PASS,"STENCIL_BACK_PASS_DEPTH_PASS");
	HX_MARK_MEMBER_NAME(GL_obj::STENCIL_BACK_REF,"STENCIL_BACK_REF");
	HX_MARK_MEMBER_NAME(GL_obj::STENCIL_BACK_VALUE_MASK,"STENCIL_BACK_VALUE_MASK");
	HX_MARK_MEMBER_NAME(GL_obj::STENCIL_BACK_WRITEMASK,"STENCIL_BACK_WRITEMASK");
	HX_MARK_MEMBER_NAME(GL_obj::VIEWPORT,"VIEWPORT");
	HX_MARK_MEMBER_NAME(GL_obj::SCISSOR_BOX,"SCISSOR_BOX");
	HX_MARK_MEMBER_NAME(GL_obj::COLOR_CLEAR_VALUE,"COLOR_CLEAR_VALUE");
	HX_MARK_MEMBER_NAME(GL_obj::COLOR_WRITEMASK,"COLOR_WRITEMASK");
	HX_MARK_MEMBER_NAME(GL_obj::UNPACK_ALIGNMENT,"UNPACK_ALIGNMENT");
	HX_MARK_MEMBER_NAME(GL_obj::PACK_ALIGNMENT,"PACK_ALIGNMENT");
	HX_MARK_MEMBER_NAME(GL_obj::MAX_TEXTURE_SIZE,"MAX_TEXTURE_SIZE");
	HX_MARK_MEMBER_NAME(GL_obj::MAX_VIEWPORT_DIMS,"MAX_VIEWPORT_DIMS");
	HX_MARK_MEMBER_NAME(GL_obj::SUBPIXEL_BITS,"SUBPIXEL_BITS");
	HX_MARK_MEMBER_NAME(GL_obj::RED_BITS,"RED_BITS");
	HX_MARK_MEMBER_NAME(GL_obj::GREEN_BITS,"GREEN_BITS");
	HX_MARK_MEMBER_NAME(GL_obj::BLUE_BITS,"BLUE_BITS");
	HX_MARK_MEMBER_NAME(GL_obj::ALPHA_BITS,"ALPHA_BITS");
	HX_MARK_MEMBER_NAME(GL_obj::DEPTH_BITS,"DEPTH_BITS");
	HX_MARK_MEMBER_NAME(GL_obj::STENCIL_BITS,"STENCIL_BITS");
	HX_MARK_MEMBER_NAME(GL_obj::POLYGON_OFFSET_UNITS,"POLYGON_OFFSET_UNITS");
	HX_MARK_MEMBER_NAME(GL_obj::POLYGON_OFFSET_FACTOR,"POLYGON_OFFSET_FACTOR");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE_BINDING_2D,"TEXTURE_BINDING_2D");
	HX_MARK_MEMBER_NAME(GL_obj::SAMPLE_BUFFERS,"SAMPLE_BUFFERS");
	HX_MARK_MEMBER_NAME(GL_obj::SAMPLES,"SAMPLES");
	HX_MARK_MEMBER_NAME(GL_obj::SAMPLE_COVERAGE_VALUE,"SAMPLE_COVERAGE_VALUE");
	HX_MARK_MEMBER_NAME(GL_obj::SAMPLE_COVERAGE_INVERT,"SAMPLE_COVERAGE_INVERT");
	HX_MARK_MEMBER_NAME(GL_obj::COMPRESSED_TEXTURE_FORMATS,"COMPRESSED_TEXTURE_FORMATS");
	HX_MARK_MEMBER_NAME(GL_obj::DONT_CARE,"DONT_CARE");
	HX_MARK_MEMBER_NAME(GL_obj::FASTEST,"FASTEST");
	HX_MARK_MEMBER_NAME(GL_obj::NICEST,"NICEST");
	HX_MARK_MEMBER_NAME(GL_obj::GENERATE_MIPMAP_HINT,"GENERATE_MIPMAP_HINT");
	HX_MARK_MEMBER_NAME(GL_obj::BYTE,"BYTE");
	HX_MARK_MEMBER_NAME(GL_obj::UNSIGNED_BYTE,"UNSIGNED_BYTE");
	HX_MARK_MEMBER_NAME(GL_obj::SHORT,"SHORT");
	HX_MARK_MEMBER_NAME(GL_obj::UNSIGNED_SHORT,"UNSIGNED_SHORT");
	HX_MARK_MEMBER_NAME(GL_obj::INT,"INT");
	HX_MARK_MEMBER_NAME(GL_obj::UNSIGNED_INT,"UNSIGNED_INT");
	HX_MARK_MEMBER_NAME(GL_obj::FLOAT,"FLOAT");
	HX_MARK_MEMBER_NAME(GL_obj::DEPTH_COMPONENT,"DEPTH_COMPONENT");
	HX_MARK_MEMBER_NAME(GL_obj::ALPHA,"ALPHA");
	HX_MARK_MEMBER_NAME(GL_obj::RGB,"RGB");
	HX_MARK_MEMBER_NAME(GL_obj::RGBA,"RGBA");
	HX_MARK_MEMBER_NAME(GL_obj::LUMINANCE,"LUMINANCE");
	HX_MARK_MEMBER_NAME(GL_obj::LUMINANCE_ALPHA,"LUMINANCE_ALPHA");
	HX_MARK_MEMBER_NAME(GL_obj::UNSIGNED_SHORT_4_4_4_4,"UNSIGNED_SHORT_4_4_4_4");
	HX_MARK_MEMBER_NAME(GL_obj::UNSIGNED_SHORT_5_5_5_1,"UNSIGNED_SHORT_5_5_5_1");
	HX_MARK_MEMBER_NAME(GL_obj::UNSIGNED_SHORT_5_6_5,"UNSIGNED_SHORT_5_6_5");
	HX_MARK_MEMBER_NAME(GL_obj::FRAGMENT_SHADER,"FRAGMENT_SHADER");
	HX_MARK_MEMBER_NAME(GL_obj::VERTEX_SHADER,"VERTEX_SHADER");
	HX_MARK_MEMBER_NAME(GL_obj::MAX_VERTEX_ATTRIBS,"MAX_VERTEX_ATTRIBS");
	HX_MARK_MEMBER_NAME(GL_obj::MAX_VERTEX_UNIFORM_VECTORS,"MAX_VERTEX_UNIFORM_VECTORS");
	HX_MARK_MEMBER_NAME(GL_obj::MAX_VARYING_VECTORS,"MAX_VARYING_VECTORS");
	HX_MARK_MEMBER_NAME(GL_obj::MAX_COMBINED_TEXTURE_IMAGE_UNITS,"MAX_COMBINED_TEXTURE_IMAGE_UNITS");
	HX_MARK_MEMBER_NAME(GL_obj::MAX_VERTEX_TEXTURE_IMAGE_UNITS,"MAX_VERTEX_TEXTURE_IMAGE_UNITS");
	HX_MARK_MEMBER_NAME(GL_obj::MAX_TEXTURE_IMAGE_UNITS,"MAX_TEXTURE_IMAGE_UNITS");
	HX_MARK_MEMBER_NAME(GL_obj::MAX_FRAGMENT_UNIFORM_VECTORS,"MAX_FRAGMENT_UNIFORM_VECTORS");
	HX_MARK_MEMBER_NAME(GL_obj::SHADER_TYPE,"SHADER_TYPE");
	HX_MARK_MEMBER_NAME(GL_obj::DELETE_STATUS,"DELETE_STATUS");
	HX_MARK_MEMBER_NAME(GL_obj::LINK_STATUS,"LINK_STATUS");
	HX_MARK_MEMBER_NAME(GL_obj::VALIDATE_STATUS,"VALIDATE_STATUS");
	HX_MARK_MEMBER_NAME(GL_obj::ATTACHED_SHADERS,"ATTACHED_SHADERS");
	HX_MARK_MEMBER_NAME(GL_obj::ACTIVE_UNIFORMS,"ACTIVE_UNIFORMS");
	HX_MARK_MEMBER_NAME(GL_obj::ACTIVE_ATTRIBUTES,"ACTIVE_ATTRIBUTES");
	HX_MARK_MEMBER_NAME(GL_obj::SHADING_LANGUAGE_VERSION,"SHADING_LANGUAGE_VERSION");
	HX_MARK_MEMBER_NAME(GL_obj::CURRENT_PROGRAM,"CURRENT_PROGRAM");
	HX_MARK_MEMBER_NAME(GL_obj::NEVER,"NEVER");
	HX_MARK_MEMBER_NAME(GL_obj::LESS,"LESS");
	HX_MARK_MEMBER_NAME(GL_obj::EQUAL,"EQUAL");
	HX_MARK_MEMBER_NAME(GL_obj::LEQUAL,"LEQUAL");
	HX_MARK_MEMBER_NAME(GL_obj::GREATER,"GREATER");
	HX_MARK_MEMBER_NAME(GL_obj::NOTEQUAL,"NOTEQUAL");
	HX_MARK_MEMBER_NAME(GL_obj::GEQUAL,"GEQUAL");
	HX_MARK_MEMBER_NAME(GL_obj::ALWAYS,"ALWAYS");
	HX_MARK_MEMBER_NAME(GL_obj::KEEP,"KEEP");
	HX_MARK_MEMBER_NAME(GL_obj::REPLACE,"REPLACE");
	HX_MARK_MEMBER_NAME(GL_obj::INCR,"INCR");
	HX_MARK_MEMBER_NAME(GL_obj::DECR,"DECR");
	HX_MARK_MEMBER_NAME(GL_obj::INVERT,"INVERT");
	HX_MARK_MEMBER_NAME(GL_obj::INCR_WRAP,"INCR_WRAP");
	HX_MARK_MEMBER_NAME(GL_obj::DECR_WRAP,"DECR_WRAP");
	HX_MARK_MEMBER_NAME(GL_obj::VENDOR,"VENDOR");
	HX_MARK_MEMBER_NAME(GL_obj::RENDERER,"RENDERER");
	HX_MARK_MEMBER_NAME(GL_obj::VERSION,"VERSION");
	HX_MARK_MEMBER_NAME(GL_obj::NEAREST,"NEAREST");
	HX_MARK_MEMBER_NAME(GL_obj::LINEAR,"LINEAR");
	HX_MARK_MEMBER_NAME(GL_obj::NEAREST_MIPMAP_NEAREST,"NEAREST_MIPMAP_NEAREST");
	HX_MARK_MEMBER_NAME(GL_obj::LINEAR_MIPMAP_NEAREST,"LINEAR_MIPMAP_NEAREST");
	HX_MARK_MEMBER_NAME(GL_obj::NEAREST_MIPMAP_LINEAR,"NEAREST_MIPMAP_LINEAR");
	HX_MARK_MEMBER_NAME(GL_obj::LINEAR_MIPMAP_LINEAR,"LINEAR_MIPMAP_LINEAR");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE_MAG_FILTER,"TEXTURE_MAG_FILTER");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE_MIN_FILTER,"TEXTURE_MIN_FILTER");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE_WRAP_S,"TEXTURE_WRAP_S");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE_WRAP_T,"TEXTURE_WRAP_T");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE_2D,"TEXTURE_2D");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE,"TEXTURE");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE_CUBE_MAP,"TEXTURE_CUBE_MAP");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE_BINDING_CUBE_MAP,"TEXTURE_BINDING_CUBE_MAP");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE_CUBE_MAP_POSITIVE_X,"TEXTURE_CUBE_MAP_POSITIVE_X");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE_CUBE_MAP_NEGATIVE_X,"TEXTURE_CUBE_MAP_NEGATIVE_X");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE_CUBE_MAP_POSITIVE_Y,"TEXTURE_CUBE_MAP_POSITIVE_Y");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE_CUBE_MAP_NEGATIVE_Y,"TEXTURE_CUBE_MAP_NEGATIVE_Y");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE_CUBE_MAP_POSITIVE_Z,"TEXTURE_CUBE_MAP_POSITIVE_Z");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE_CUBE_MAP_NEGATIVE_Z,"TEXTURE_CUBE_MAP_NEGATIVE_Z");
	HX_MARK_MEMBER_NAME(GL_obj::MAX_CUBE_MAP_TEXTURE_SIZE,"MAX_CUBE_MAP_TEXTURE_SIZE");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE0,"TEXTURE0");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE1,"TEXTURE1");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE2,"TEXTURE2");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE3,"TEXTURE3");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE4,"TEXTURE4");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE5,"TEXTURE5");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE6,"TEXTURE6");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE7,"TEXTURE7");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE8,"TEXTURE8");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE9,"TEXTURE9");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE10,"TEXTURE10");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE11,"TEXTURE11");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE12,"TEXTURE12");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE13,"TEXTURE13");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE14,"TEXTURE14");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE15,"TEXTURE15");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE16,"TEXTURE16");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE17,"TEXTURE17");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE18,"TEXTURE18");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE19,"TEXTURE19");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE20,"TEXTURE20");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE21,"TEXTURE21");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE22,"TEXTURE22");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE23,"TEXTURE23");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE24,"TEXTURE24");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE25,"TEXTURE25");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE26,"TEXTURE26");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE27,"TEXTURE27");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE28,"TEXTURE28");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE29,"TEXTURE29");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE30,"TEXTURE30");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE31,"TEXTURE31");
	HX_MARK_MEMBER_NAME(GL_obj::ACTIVE_TEXTURE,"ACTIVE_TEXTURE");
	HX_MARK_MEMBER_NAME(GL_obj::REPEAT,"REPEAT");
	HX_MARK_MEMBER_NAME(GL_obj::CLAMP_TO_EDGE,"CLAMP_TO_EDGE");
	HX_MARK_MEMBER_NAME(GL_obj::MIRRORED_REPEAT,"MIRRORED_REPEAT");
	HX_MARK_MEMBER_NAME(GL_obj::FLOAT_VEC2,"FLOAT_VEC2");
	HX_MARK_MEMBER_NAME(GL_obj::FLOAT_VEC3,"FLOAT_VEC3");
	HX_MARK_MEMBER_NAME(GL_obj::FLOAT_VEC4,"FLOAT_VEC4");
	HX_MARK_MEMBER_NAME(GL_obj::INT_VEC2,"INT_VEC2");
	HX_MARK_MEMBER_NAME(GL_obj::INT_VEC3,"INT_VEC3");
	HX_MARK_MEMBER_NAME(GL_obj::INT_VEC4,"INT_VEC4");
	HX_MARK_MEMBER_NAME(GL_obj::BOOL,"BOOL");
	HX_MARK_MEMBER_NAME(GL_obj::BOOL_VEC2,"BOOL_VEC2");
	HX_MARK_MEMBER_NAME(GL_obj::BOOL_VEC3,"BOOL_VEC3");
	HX_MARK_MEMBER_NAME(GL_obj::BOOL_VEC4,"BOOL_VEC4");
	HX_MARK_MEMBER_NAME(GL_obj::FLOAT_MAT2,"FLOAT_MAT2");
	HX_MARK_MEMBER_NAME(GL_obj::FLOAT_MAT3,"FLOAT_MAT3");
	HX_MARK_MEMBER_NAME(GL_obj::FLOAT_MAT4,"FLOAT_MAT4");
	HX_MARK_MEMBER_NAME(GL_obj::SAMPLER_2D,"SAMPLER_2D");
	HX_MARK_MEMBER_NAME(GL_obj::SAMPLER_CUBE,"SAMPLER_CUBE");
	HX_MARK_MEMBER_NAME(GL_obj::VERTEX_ATTRIB_ARRAY_ENABLED,"VERTEX_ATTRIB_ARRAY_ENABLED");
	HX_MARK_MEMBER_NAME(GL_obj::VERTEX_ATTRIB_ARRAY_SIZE,"VERTEX_ATTRIB_ARRAY_SIZE");
	HX_MARK_MEMBER_NAME(GL_obj::VERTEX_ATTRIB_ARRAY_STRIDE,"VERTEX_ATTRIB_ARRAY_STRIDE");
	HX_MARK_MEMBER_NAME(GL_obj::VERTEX_ATTRIB_ARRAY_TYPE,"VERTEX_ATTRIB_ARRAY_TYPE");
	HX_MARK_MEMBER_NAME(GL_obj::VERTEX_ATTRIB_ARRAY_NORMALIZED,"VERTEX_ATTRIB_ARRAY_NORMALIZED");
	HX_MARK_MEMBER_NAME(GL_obj::VERTEX_ATTRIB_ARRAY_POINTER,"VERTEX_ATTRIB_ARRAY_POINTER");
	HX_MARK_MEMBER_NAME(GL_obj::VERTEX_ATTRIB_ARRAY_BUFFER_BINDING,"VERTEX_ATTRIB_ARRAY_BUFFER_BINDING");
	HX_MARK_MEMBER_NAME(GL_obj::VERTEX_PROGRAM_POINT_SIZE,"VERTEX_PROGRAM_POINT_SIZE");
	HX_MARK_MEMBER_NAME(GL_obj::POINT_SPRITE,"POINT_SPRITE");
	HX_MARK_MEMBER_NAME(GL_obj::COMPILE_STATUS,"COMPILE_STATUS");
	HX_MARK_MEMBER_NAME(GL_obj::LOW_FLOAT,"LOW_FLOAT");
	HX_MARK_MEMBER_NAME(GL_obj::MEDIUM_FLOAT,"MEDIUM_FLOAT");
	HX_MARK_MEMBER_NAME(GL_obj::HIGH_FLOAT,"HIGH_FLOAT");
	HX_MARK_MEMBER_NAME(GL_obj::LOW_INT,"LOW_INT");
	HX_MARK_MEMBER_NAME(GL_obj::MEDIUM_INT,"MEDIUM_INT");
	HX_MARK_MEMBER_NAME(GL_obj::HIGH_INT,"HIGH_INT");
	HX_MARK_MEMBER_NAME(GL_obj::FRAMEBUFFER,"FRAMEBUFFER");
	HX_MARK_MEMBER_NAME(GL_obj::RENDERBUFFER,"RENDERBUFFER");
	HX_MARK_MEMBER_NAME(GL_obj::RGBA4,"RGBA4");
	HX_MARK_MEMBER_NAME(GL_obj::RGB5_A1,"RGB5_A1");
	HX_MARK_MEMBER_NAME(GL_obj::RGB565,"RGB565");
	HX_MARK_MEMBER_NAME(GL_obj::DEPTH_COMPONENT16,"DEPTH_COMPONENT16");
	HX_MARK_MEMBER_NAME(GL_obj::STENCIL_INDEX,"STENCIL_INDEX");
	HX_MARK_MEMBER_NAME(GL_obj::STENCIL_INDEX8,"STENCIL_INDEX8");
	HX_MARK_MEMBER_NAME(GL_obj::DEPTH_STENCIL,"DEPTH_STENCIL");
	HX_MARK_MEMBER_NAME(GL_obj::RENDERBUFFER_WIDTH,"RENDERBUFFER_WIDTH");
	HX_MARK_MEMBER_NAME(GL_obj::RENDERBUFFER_HEIGHT,"RENDERBUFFER_HEIGHT");
	HX_MARK_MEMBER_NAME(GL_obj::RENDERBUFFER_INTERNAL_FORMAT,"RENDERBUFFER_INTERNAL_FORMAT");
	HX_MARK_MEMBER_NAME(GL_obj::RENDERBUFFER_RED_SIZE,"RENDERBUFFER_RED_SIZE");
	HX_MARK_MEMBER_NAME(GL_obj::RENDERBUFFER_GREEN_SIZE,"RENDERBUFFER_GREEN_SIZE");
	HX_MARK_MEMBER_NAME(GL_obj::RENDERBUFFER_BLUE_SIZE,"RENDERBUFFER_BLUE_SIZE");
	HX_MARK_MEMBER_NAME(GL_obj::RENDERBUFFER_ALPHA_SIZE,"RENDERBUFFER_ALPHA_SIZE");
	HX_MARK_MEMBER_NAME(GL_obj::RENDERBUFFER_DEPTH_SIZE,"RENDERBUFFER_DEPTH_SIZE");
	HX_MARK_MEMBER_NAME(GL_obj::RENDERBUFFER_STENCIL_SIZE,"RENDERBUFFER_STENCIL_SIZE");
	HX_MARK_MEMBER_NAME(GL_obj::FRAMEBUFFER_ATTACHMENT_OBJECT_TYPE,"FRAMEBUFFER_ATTACHMENT_OBJECT_TYPE");
	HX_MARK_MEMBER_NAME(GL_obj::FRAMEBUFFER_ATTACHMENT_OBJECT_NAME,"FRAMEBUFFER_ATTACHMENT_OBJECT_NAME");
	HX_MARK_MEMBER_NAME(GL_obj::FRAMEBUFFER_ATTACHMENT_TEXTURE_LEVEL,"FRAMEBUFFER_ATTACHMENT_TEXTURE_LEVEL");
	HX_MARK_MEMBER_NAME(GL_obj::FRAMEBUFFER_ATTACHMENT_TEXTURE_CUBE_MAP_FACE,"FRAMEBUFFER_ATTACHMENT_TEXTURE_CUBE_MAP_FACE");
	HX_MARK_MEMBER_NAME(GL_obj::COLOR_ATTACHMENT0,"COLOR_ATTACHMENT0");
	HX_MARK_MEMBER_NAME(GL_obj::DEPTH_ATTACHMENT,"DEPTH_ATTACHMENT");
	HX_MARK_MEMBER_NAME(GL_obj::STENCIL_ATTACHMENT,"STENCIL_ATTACHMENT");
	HX_MARK_MEMBER_NAME(GL_obj::DEPTH_STENCIL_ATTACHMENT,"DEPTH_STENCIL_ATTACHMENT");
	HX_MARK_MEMBER_NAME(GL_obj::NONE,"NONE");
	HX_MARK_MEMBER_NAME(GL_obj::FRAMEBUFFER_COMPLETE,"FRAMEBUFFER_COMPLETE");
	HX_MARK_MEMBER_NAME(GL_obj::FRAMEBUFFER_INCOMPLETE_ATTACHMENT,"FRAMEBUFFER_INCOMPLETE_ATTACHMENT");
	HX_MARK_MEMBER_NAME(GL_obj::FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT,"FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT");
	HX_MARK_MEMBER_NAME(GL_obj::FRAMEBUFFER_INCOMPLETE_DIMENSIONS,"FRAMEBUFFER_INCOMPLETE_DIMENSIONS");
	HX_MARK_MEMBER_NAME(GL_obj::FRAMEBUFFER_UNSUPPORTED,"FRAMEBUFFER_UNSUPPORTED");
	HX_MARK_MEMBER_NAME(GL_obj::FRAMEBUFFER_BINDING,"FRAMEBUFFER_BINDING");
	HX_MARK_MEMBER_NAME(GL_obj::RENDERBUFFER_BINDING,"RENDERBUFFER_BINDING");
	HX_MARK_MEMBER_NAME(GL_obj::MAX_RENDERBUFFER_SIZE,"MAX_RENDERBUFFER_SIZE");
	HX_MARK_MEMBER_NAME(GL_obj::INVALID_FRAMEBUFFER_OPERATION,"INVALID_FRAMEBUFFER_OPERATION");
	HX_MARK_MEMBER_NAME(GL_obj::UNPACK_FLIP_Y_WEBGL,"UNPACK_FLIP_Y_WEBGL");
	HX_MARK_MEMBER_NAME(GL_obj::UNPACK_PREMULTIPLY_ALPHA_WEBGL,"UNPACK_PREMULTIPLY_ALPHA_WEBGL");
	HX_MARK_MEMBER_NAME(GL_obj::CONTEXT_LOST_WEBGL,"CONTEXT_LOST_WEBGL");
	HX_MARK_MEMBER_NAME(GL_obj::UNPACK_COLORSPACE_CONVERSION_WEBGL,"UNPACK_COLORSPACE_CONVERSION_WEBGL");
	HX_MARK_MEMBER_NAME(GL_obj::BROWSER_DEFAULT_WEBGL,"BROWSER_DEFAULT_WEBGL");
	HX_MARK_MEMBER_NAME(GL_obj::snow_gl_active_texture,"snow_gl_active_texture");
	HX_MARK_MEMBER_NAME(GL_obj::snow_gl_attach_shader,"snow_gl_attach_shader");
	HX_MARK_MEMBER_NAME(GL_obj::snow_gl_bind_attrib_location,"snow_gl_bind_attrib_location");
	HX_MARK_MEMBER_NAME(GL_obj::snow_gl_bind_buffer,"snow_gl_bind_buffer");
	HX_MARK_MEMBER_NAME(GL_obj::snow_gl_bind_framebuffer,"snow_gl_bind_framebuffer");
	HX_MARK_MEMBER_NAME(GL_obj::snow_gl_bind_renderbuffer,"snow_gl_bind_renderbuffer");
	HX_MARK_MEMBER_NAME(GL_obj::snow_gl_bind_texture,"snow_gl_bind_texture");
	HX_MARK_MEMBER_NAME(GL_obj::snow_gl_blend_color,"snow_gl_blend_color");
	HX_MARK_MEMBER_NAME(GL_obj::snow_gl_blend_equation,"snow_gl_blend_equation");
	HX_MARK_MEMBER_NAME(GL_obj::snow_gl_blend_equation_separate,"snow_gl_blend_equation_separate");
	HX_MARK_MEMBER_NAME(GL_obj::snow_gl_blend_func,"snow_gl_blend_func");
	HX_MARK_MEMBER_NAME(GL_obj::snow_gl_blend_func_separate,"snow_gl_blend_func_separate");
	HX_MARK_MEMBER_NAME(GL_obj::snow_gl_buffer_data,"snow_gl_buffer_data");
	HX_MARK_MEMBER_NAME(GL_obj::snow_gl_buffer_sub_data,"snow_gl_buffer_sub_data");
	HX_MARK_MEMBER_NAME(GL_obj::snow_gl_check_framebuffer_status,"snow_gl_check_framebuffer_status");
	HX_MARK_MEMBER_NAME(GL_obj::snow_gl_clear,"snow_gl_clear");
	HX_MARK_MEMBER_NAME(GL_obj::snow_gl_clear_color,"snow_gl_clear_color");
	HX_MARK_MEMBER_NAME(GL_obj::snow_gl_clear_depth,"snow_gl_clear_depth");
	HX_MARK_MEMBER_NAME(GL_obj::snow_gl_clear_stencil,"snow_gl_clear_stencil");
	HX_MARK_MEMBER_NAME(GL_obj::snow_gl_color_mask,"snow_gl_color_mask");
	HX_MARK_MEMBER_NAME(GL_obj::snow_gl_compile_shader,"snow_gl_compile_shader");
	HX_MARK_MEMBER_NAME(GL_obj::snow_gl_compressed_tex_image_2d,"snow_gl_compressed_tex_image_2d");
	HX_MARK_MEMBER_NAME(GL_obj::snow_gl_compressed_tex_sub_image_2d,"snow_gl_compressed_tex_sub_image_2d");
	HX_MARK_MEMBER_NAME(GL_obj::snow_gl_copy_tex_image_2d,"snow_gl_copy_tex_image_2d");
	HX_MARK_MEMBER_NAME(GL_obj::snow_gl_copy_tex_sub_image_2d,"snow_gl_copy_tex_sub_image_2d");
	HX_MARK_MEMBER_NAME(GL_obj::snow_gl_create_buffer,"snow_gl_create_buffer");
	HX_MARK_MEMBER_NAME(GL_obj::snow_gl_create_framebuffer,"snow_gl_create_framebuffer");
	HX_MARK_MEMBER_NAME(GL_obj::snow_gl_create_program,"snow_gl_create_program");
	HX_MARK_MEMBER_NAME(GL_obj::snow_gl_create_render_buffer,"snow_gl_create_render_buffer");
	HX_MARK_MEMBER_NAME(GL_obj::snow_gl_create_shader,"snow_gl_create_shader");
	HX_MARK_MEMBER_NAME(GL_obj::snow_gl_create_texture,"snow_gl_create_texture");
	HX_MARK_MEMBER_NAME(GL_obj::snow_gl_cull_face,"snow_gl_cull_face");
	HX_MARK_MEMBER_NAME(GL_obj::snow_gl_delete_buffer,"snow_gl_delete_buffer");
	HX_MARK_MEMBER_NAME(GL_obj::snow_gl_delete_framebuffer,"snow_gl_delete_framebuffer");
	HX_MARK_MEMBER_NAME(GL_obj::snow_gl_delete_program,"snow_gl_delete_program");
	HX_MARK_MEMBER_NAME(GL_obj::snow_gl_delete_render_buffer,"snow_gl_delete_render_buffer");
	HX_MARK_MEMBER_NAME(GL_obj::snow_gl_delete_shader,"snow_gl_delete_shader");
	HX_MARK_MEMBER_NAME(GL_obj::snow_gl_delete_texture,"snow_gl_delete_texture");
	HX_MARK_MEMBER_NAME(GL_obj::snow_gl_depth_func,"snow_gl_depth_func");
	HX_MARK_MEMBER_NAME(GL_obj::snow_gl_depth_mask,"snow_gl_depth_mask");
	HX_MARK_MEMBER_NAME(GL_obj::snow_gl_depth_range,"snow_gl_depth_range");
	HX_MARK_MEMBER_NAME(GL_obj::snow_gl_detach_shader,"snow_gl_detach_shader");
	HX_MARK_MEMBER_NAME(GL_obj::snow_gl_disable,"snow_gl_disable");
	HX_MARK_MEMBER_NAME(GL_obj::snow_gl_disable_vertex_attrib_array,"snow_gl_disable_vertex_attrib_array");
	HX_MARK_MEMBER_NAME(GL_obj::snow_gl_draw_arrays,"snow_gl_draw_arrays");
	HX_MARK_MEMBER_NAME(GL_obj::snow_gl_draw_elements,"snow_gl_draw_elements");
	HX_MARK_MEMBER_NAME(GL_obj::snow_gl_enable,"snow_gl_enable");
	HX_MARK_MEMBER_NAME(GL_obj::snow_gl_enable_vertex_attrib_array,"snow_gl_enable_vertex_attrib_array");
	HX_MARK_MEMBER_NAME(GL_obj::snow_gl_finish,"snow_gl_finish");
	HX_MARK_MEMBER_NAME(GL_obj::snow_gl_flush,"snow_gl_flush");
	HX_MARK_MEMBER_NAME(GL_obj::snow_gl_framebuffer_renderbuffer,"snow_gl_framebuffer_renderbuffer");
	HX_MARK_MEMBER_NAME(GL_obj::snow_gl_framebuffer_texture2D,"snow_gl_framebuffer_texture2D");
	HX_MARK_MEMBER_NAME(GL_obj::snow_gl_front_face,"snow_gl_front_face");
	HX_MARK_MEMBER_NAME(GL_obj::snow_gl_generate_mipmap,"snow_gl_generate_mipmap");
	HX_MARK_MEMBER_NAME(GL_obj::snow_gl_get_active_attrib,"snow_gl_get_active_attrib");
	HX_MARK_MEMBER_NAME(GL_obj::snow_gl_get_active_uniform,"snow_gl_get_active_uniform");
	HX_MARK_MEMBER_NAME(GL_obj::snow_gl_get_attrib_location,"snow_gl_get_attrib_location");
	HX_MARK_MEMBER_NAME(GL_obj::snow_gl_get_buffer_paramerter,"snow_gl_get_buffer_paramerter");
	HX_MARK_MEMBER_NAME(GL_obj::snow_gl_get_context_attributes,"snow_gl_get_context_attributes");
	HX_MARK_MEMBER_NAME(GL_obj::snow_gl_get_error,"snow_gl_get_error");
	HX_MARK_MEMBER_NAME(GL_obj::snow_gl_get_framebuffer_attachment_parameter,"snow_gl_get_framebuffer_attachment_parameter");
	HX_MARK_MEMBER_NAME(GL_obj::snow_gl_get_parameter,"snow_gl_get_parameter");
	HX_MARK_MEMBER_NAME(GL_obj::snow_gl_get_program_info_log,"snow_gl_get_program_info_log");
	HX_MARK_MEMBER_NAME(GL_obj::snow_gl_get_program_parameter,"snow_gl_get_program_parameter");
	HX_MARK_MEMBER_NAME(GL_obj::snow_gl_get_render_buffer_parameter,"snow_gl_get_render_buffer_parameter");
	HX_MARK_MEMBER_NAME(GL_obj::snow_gl_get_shader_info_log,"snow_gl_get_shader_info_log");
	HX_MARK_MEMBER_NAME(GL_obj::snow_gl_get_shader_parameter,"snow_gl_get_shader_parameter");
	HX_MARK_MEMBER_NAME(GL_obj::snow_gl_get_shader_precision_format,"snow_gl_get_shader_precision_format");
	HX_MARK_MEMBER_NAME(GL_obj::snow_gl_get_shader_source,"snow_gl_get_shader_source");
	HX_MARK_MEMBER_NAME(GL_obj::snow_gl_get_supported_extensions,"snow_gl_get_supported_extensions");
	HX_MARK_MEMBER_NAME(GL_obj::snow_gl_get_tex_parameter,"snow_gl_get_tex_parameter");
	HX_MARK_MEMBER_NAME(GL_obj::snow_gl_get_uniform,"snow_gl_get_uniform");
	HX_MARK_MEMBER_NAME(GL_obj::snow_gl_get_uniform_location,"snow_gl_get_uniform_location");
	HX_MARK_MEMBER_NAME(GL_obj::snow_gl_get_vertex_attrib,"snow_gl_get_vertex_attrib");
	HX_MARK_MEMBER_NAME(GL_obj::snow_gl_get_vertex_attrib_offset,"snow_gl_get_vertex_attrib_offset");
	HX_MARK_MEMBER_NAME(GL_obj::snow_gl_hint,"snow_gl_hint");
	HX_MARK_MEMBER_NAME(GL_obj::snow_gl_is_buffer,"snow_gl_is_buffer");
	HX_MARK_MEMBER_NAME(GL_obj::snow_gl_is_enabled,"snow_gl_is_enabled");
	HX_MARK_MEMBER_NAME(GL_obj::snow_gl_is_framebuffer,"snow_gl_is_framebuffer");
	HX_MARK_MEMBER_NAME(GL_obj::snow_gl_is_program,"snow_gl_is_program");
	HX_MARK_MEMBER_NAME(GL_obj::snow_gl_is_renderbuffer,"snow_gl_is_renderbuffer");
	HX_MARK_MEMBER_NAME(GL_obj::snow_gl_is_shader,"snow_gl_is_shader");
	HX_MARK_MEMBER_NAME(GL_obj::snow_gl_is_texture,"snow_gl_is_texture");
	HX_MARK_MEMBER_NAME(GL_obj::snow_gl_line_width,"snow_gl_line_width");
	HX_MARK_MEMBER_NAME(GL_obj::snow_gl_link_program,"snow_gl_link_program");
	HX_MARK_MEMBER_NAME(GL_obj::snow_gl_pixel_storei,"snow_gl_pixel_storei");
	HX_MARK_MEMBER_NAME(GL_obj::snow_gl_polygon_offset,"snow_gl_polygon_offset");
	HX_MARK_MEMBER_NAME(GL_obj::snow_gl_read_pixels,"snow_gl_read_pixels");
	HX_MARK_MEMBER_NAME(GL_obj::snow_gl_renderbuffer_storage,"snow_gl_renderbuffer_storage");
	HX_MARK_MEMBER_NAME(GL_obj::snow_gl_sample_coverage,"snow_gl_sample_coverage");
	HX_MARK_MEMBER_NAME(GL_obj::snow_gl_scissor,"snow_gl_scissor");
	HX_MARK_MEMBER_NAME(GL_obj::snow_gl_shader_source,"snow_gl_shader_source");
	HX_MARK_MEMBER_NAME(GL_obj::snow_gl_stencil_func,"snow_gl_stencil_func");
	HX_MARK_MEMBER_NAME(GL_obj::snow_gl_stencil_func_separate,"snow_gl_stencil_func_separate");
	HX_MARK_MEMBER_NAME(GL_obj::snow_gl_stencil_mask,"snow_gl_stencil_mask");
	HX_MARK_MEMBER_NAME(GL_obj::snow_gl_stencil_mask_separate,"snow_gl_stencil_mask_separate");
	HX_MARK_MEMBER_NAME(GL_obj::snow_gl_stencil_op,"snow_gl_stencil_op");
	HX_MARK_MEMBER_NAME(GL_obj::snow_gl_stencil_op_separate,"snow_gl_stencil_op_separate");
	HX_MARK_MEMBER_NAME(GL_obj::snow_gl_tex_image_2d,"snow_gl_tex_image_2d");
	HX_MARK_MEMBER_NAME(GL_obj::snow_gl_tex_parameterf,"snow_gl_tex_parameterf");
	HX_MARK_MEMBER_NAME(GL_obj::snow_gl_tex_parameteri,"snow_gl_tex_parameteri");
	HX_MARK_MEMBER_NAME(GL_obj::snow_gl_tex_sub_image_2d,"snow_gl_tex_sub_image_2d");
	HX_MARK_MEMBER_NAME(GL_obj::snow_gl_uniform1f,"snow_gl_uniform1f");
	HX_MARK_MEMBER_NAME(GL_obj::snow_gl_uniform1fv,"snow_gl_uniform1fv");
	HX_MARK_MEMBER_NAME(GL_obj::snow_gl_uniform1i,"snow_gl_uniform1i");
	HX_MARK_MEMBER_NAME(GL_obj::snow_gl_uniform1iv,"snow_gl_uniform1iv");
	HX_MARK_MEMBER_NAME(GL_obj::snow_gl_uniform2f,"snow_gl_uniform2f");
	HX_MARK_MEMBER_NAME(GL_obj::snow_gl_uniform2fv,"snow_gl_uniform2fv");
	HX_MARK_MEMBER_NAME(GL_obj::snow_gl_uniform2i,"snow_gl_uniform2i");
	HX_MARK_MEMBER_NAME(GL_obj::snow_gl_uniform2iv,"snow_gl_uniform2iv");
	HX_MARK_MEMBER_NAME(GL_obj::snow_gl_uniform3f,"snow_gl_uniform3f");
	HX_MARK_MEMBER_NAME(GL_obj::snow_gl_uniform3fv,"snow_gl_uniform3fv");
	HX_MARK_MEMBER_NAME(GL_obj::snow_gl_uniform3i,"snow_gl_uniform3i");
	HX_MARK_MEMBER_NAME(GL_obj::snow_gl_uniform3iv,"snow_gl_uniform3iv");
	HX_MARK_MEMBER_NAME(GL_obj::snow_gl_uniform4f,"snow_gl_uniform4f");
	HX_MARK_MEMBER_NAME(GL_obj::snow_gl_uniform4fv,"snow_gl_uniform4fv");
	HX_MARK_MEMBER_NAME(GL_obj::snow_gl_uniform4i,"snow_gl_uniform4i");
	HX_MARK_MEMBER_NAME(GL_obj::snow_gl_uniform4iv,"snow_gl_uniform4iv");
	HX_MARK_MEMBER_NAME(GL_obj::snow_gl_uniform_matrix,"snow_gl_uniform_matrix");
	HX_MARK_MEMBER_NAME(GL_obj::snow_gl_use_program,"snow_gl_use_program");
	HX_MARK_MEMBER_NAME(GL_obj::snow_gl_validate_program,"snow_gl_validate_program");
	HX_MARK_MEMBER_NAME(GL_obj::snow_gl_version,"snow_gl_version");
	HX_MARK_MEMBER_NAME(GL_obj::snow_gl_vertex_attrib1f,"snow_gl_vertex_attrib1f");
	HX_MARK_MEMBER_NAME(GL_obj::snow_gl_vertex_attrib1fv,"snow_gl_vertex_attrib1fv");
	HX_MARK_MEMBER_NAME(GL_obj::snow_gl_vertex_attrib2f,"snow_gl_vertex_attrib2f");
	HX_MARK_MEMBER_NAME(GL_obj::snow_gl_vertex_attrib2fv,"snow_gl_vertex_attrib2fv");
	HX_MARK_MEMBER_NAME(GL_obj::snow_gl_vertex_attrib3f,"snow_gl_vertex_attrib3f");
	HX_MARK_MEMBER_NAME(GL_obj::snow_gl_vertex_attrib3fv,"snow_gl_vertex_attrib3fv");
	HX_MARK_MEMBER_NAME(GL_obj::snow_gl_vertex_attrib4f,"snow_gl_vertex_attrib4f");
	HX_MARK_MEMBER_NAME(GL_obj::snow_gl_vertex_attrib4fv,"snow_gl_vertex_attrib4fv");
	HX_MARK_MEMBER_NAME(GL_obj::snow_gl_vertex_attrib_pointer,"snow_gl_vertex_attrib_pointer");
	HX_MARK_MEMBER_NAME(GL_obj::snow_gl_viewport,"snow_gl_viewport");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GL_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(GL_obj::DEPTH_BUFFER_BIT,"DEPTH_BUFFER_BIT");
	HX_VISIT_MEMBER_NAME(GL_obj::STENCIL_BUFFER_BIT,"STENCIL_BUFFER_BIT");
	HX_VISIT_MEMBER_NAME(GL_obj::COLOR_BUFFER_BIT,"COLOR_BUFFER_BIT");
	HX_VISIT_MEMBER_NAME(GL_obj::POINTS,"POINTS");
	HX_VISIT_MEMBER_NAME(GL_obj::LINES,"LINES");
	HX_VISIT_MEMBER_NAME(GL_obj::LINE_LOOP,"LINE_LOOP");
	HX_VISIT_MEMBER_NAME(GL_obj::LINE_STRIP,"LINE_STRIP");
	HX_VISIT_MEMBER_NAME(GL_obj::TRIANGLES,"TRIANGLES");
	HX_VISIT_MEMBER_NAME(GL_obj::TRIANGLE_STRIP,"TRIANGLE_STRIP");
	HX_VISIT_MEMBER_NAME(GL_obj::TRIANGLE_FAN,"TRIANGLE_FAN");
	HX_VISIT_MEMBER_NAME(GL_obj::ZERO,"ZERO");
	HX_VISIT_MEMBER_NAME(GL_obj::ONE,"ONE");
	HX_VISIT_MEMBER_NAME(GL_obj::SRC_COLOR,"SRC_COLOR");
	HX_VISIT_MEMBER_NAME(GL_obj::ONE_MINUS_SRC_COLOR,"ONE_MINUS_SRC_COLOR");
	HX_VISIT_MEMBER_NAME(GL_obj::SRC_ALPHA,"SRC_ALPHA");
	HX_VISIT_MEMBER_NAME(GL_obj::ONE_MINUS_SRC_ALPHA,"ONE_MINUS_SRC_ALPHA");
	HX_VISIT_MEMBER_NAME(GL_obj::DST_ALPHA,"DST_ALPHA");
	HX_VISIT_MEMBER_NAME(GL_obj::ONE_MINUS_DST_ALPHA,"ONE_MINUS_DST_ALPHA");
	HX_VISIT_MEMBER_NAME(GL_obj::DST_COLOR,"DST_COLOR");
	HX_VISIT_MEMBER_NAME(GL_obj::ONE_MINUS_DST_COLOR,"ONE_MINUS_DST_COLOR");
	HX_VISIT_MEMBER_NAME(GL_obj::SRC_ALPHA_SATURATE,"SRC_ALPHA_SATURATE");
	HX_VISIT_MEMBER_NAME(GL_obj::FUNC_ADD,"FUNC_ADD");
	HX_VISIT_MEMBER_NAME(GL_obj::BLEND_EQUATION,"BLEND_EQUATION");
	HX_VISIT_MEMBER_NAME(GL_obj::BLEND_EQUATION_RGB,"BLEND_EQUATION_RGB");
	HX_VISIT_MEMBER_NAME(GL_obj::BLEND_EQUATION_ALPHA,"BLEND_EQUATION_ALPHA");
	HX_VISIT_MEMBER_NAME(GL_obj::FUNC_SUBTRACT,"FUNC_SUBTRACT");
	HX_VISIT_MEMBER_NAME(GL_obj::FUNC_REVERSE_SUBTRACT,"FUNC_REVERSE_SUBTRACT");
	HX_VISIT_MEMBER_NAME(GL_obj::BLEND_DST_RGB,"BLEND_DST_RGB");
	HX_VISIT_MEMBER_NAME(GL_obj::BLEND_SRC_RGB,"BLEND_SRC_RGB");
	HX_VISIT_MEMBER_NAME(GL_obj::BLEND_DST_ALPHA,"BLEND_DST_ALPHA");
	HX_VISIT_MEMBER_NAME(GL_obj::BLEND_SRC_ALPHA,"BLEND_SRC_ALPHA");
	HX_VISIT_MEMBER_NAME(GL_obj::CONSTANT_COLOR,"CONSTANT_COLOR");
	HX_VISIT_MEMBER_NAME(GL_obj::ONE_MINUS_CONSTANT_COLOR,"ONE_MINUS_CONSTANT_COLOR");
	HX_VISIT_MEMBER_NAME(GL_obj::CONSTANT_ALPHA,"CONSTANT_ALPHA");
	HX_VISIT_MEMBER_NAME(GL_obj::ONE_MINUS_CONSTANT_ALPHA,"ONE_MINUS_CONSTANT_ALPHA");
	HX_VISIT_MEMBER_NAME(GL_obj::BLEND_COLOR,"BLEND_COLOR");
	HX_VISIT_MEMBER_NAME(GL_obj::ARRAY_BUFFER,"ARRAY_BUFFER");
	HX_VISIT_MEMBER_NAME(GL_obj::ELEMENT_ARRAY_BUFFER,"ELEMENT_ARRAY_BUFFER");
	HX_VISIT_MEMBER_NAME(GL_obj::ARRAY_BUFFER_BINDING,"ARRAY_BUFFER_BINDING");
	HX_VISIT_MEMBER_NAME(GL_obj::ELEMENT_ARRAY_BUFFER_BINDING,"ELEMENT_ARRAY_BUFFER_BINDING");
	HX_VISIT_MEMBER_NAME(GL_obj::STREAM_DRAW,"STREAM_DRAW");
	HX_VISIT_MEMBER_NAME(GL_obj::STATIC_DRAW,"STATIC_DRAW");
	HX_VISIT_MEMBER_NAME(GL_obj::DYNAMIC_DRAW,"DYNAMIC_DRAW");
	HX_VISIT_MEMBER_NAME(GL_obj::BUFFER_SIZE,"BUFFER_SIZE");
	HX_VISIT_MEMBER_NAME(GL_obj::BUFFER_USAGE,"BUFFER_USAGE");
	HX_VISIT_MEMBER_NAME(GL_obj::CURRENT_VERTEX_ATTRIB,"CURRENT_VERTEX_ATTRIB");
	HX_VISIT_MEMBER_NAME(GL_obj::FRONT,"FRONT");
	HX_VISIT_MEMBER_NAME(GL_obj::BACK,"BACK");
	HX_VISIT_MEMBER_NAME(GL_obj::FRONT_AND_BACK,"FRONT_AND_BACK");
	HX_VISIT_MEMBER_NAME(GL_obj::CULL_FACE,"CULL_FACE");
	HX_VISIT_MEMBER_NAME(GL_obj::BLEND,"BLEND");
	HX_VISIT_MEMBER_NAME(GL_obj::DITHER,"DITHER");
	HX_VISIT_MEMBER_NAME(GL_obj::STENCIL_TEST,"STENCIL_TEST");
	HX_VISIT_MEMBER_NAME(GL_obj::DEPTH_TEST,"DEPTH_TEST");
	HX_VISIT_MEMBER_NAME(GL_obj::SCISSOR_TEST,"SCISSOR_TEST");
	HX_VISIT_MEMBER_NAME(GL_obj::POLYGON_OFFSET_FILL,"POLYGON_OFFSET_FILL");
	HX_VISIT_MEMBER_NAME(GL_obj::SAMPLE_ALPHA_TO_COVERAGE,"SAMPLE_ALPHA_TO_COVERAGE");
	HX_VISIT_MEMBER_NAME(GL_obj::SAMPLE_COVERAGE,"SAMPLE_COVERAGE");
	HX_VISIT_MEMBER_NAME(GL_obj::NO_ERROR,"NO_ERROR");
	HX_VISIT_MEMBER_NAME(GL_obj::INVALID_ENUM,"INVALID_ENUM");
	HX_VISIT_MEMBER_NAME(GL_obj::INVALID_VALUE,"INVALID_VALUE");
	HX_VISIT_MEMBER_NAME(GL_obj::INVALID_OPERATION,"INVALID_OPERATION");
	HX_VISIT_MEMBER_NAME(GL_obj::OUT_OF_MEMORY,"OUT_OF_MEMORY");
	HX_VISIT_MEMBER_NAME(GL_obj::CW,"CW");
	HX_VISIT_MEMBER_NAME(GL_obj::CCW,"CCW");
	HX_VISIT_MEMBER_NAME(GL_obj::LINE_WIDTH,"LINE_WIDTH");
	HX_VISIT_MEMBER_NAME(GL_obj::ALIASED_POINT_SIZE_RANGE,"ALIASED_POINT_SIZE_RANGE");
	HX_VISIT_MEMBER_NAME(GL_obj::ALIASED_LINE_WIDTH_RANGE,"ALIASED_LINE_WIDTH_RANGE");
	HX_VISIT_MEMBER_NAME(GL_obj::CULL_FACE_MODE,"CULL_FACE_MODE");
	HX_VISIT_MEMBER_NAME(GL_obj::FRONT_FACE,"FRONT_FACE");
	HX_VISIT_MEMBER_NAME(GL_obj::DEPTH_RANGE,"DEPTH_RANGE");
	HX_VISIT_MEMBER_NAME(GL_obj::DEPTH_WRITEMASK,"DEPTH_WRITEMASK");
	HX_VISIT_MEMBER_NAME(GL_obj::DEPTH_CLEAR_VALUE,"DEPTH_CLEAR_VALUE");
	HX_VISIT_MEMBER_NAME(GL_obj::DEPTH_FUNC,"DEPTH_FUNC");
	HX_VISIT_MEMBER_NAME(GL_obj::STENCIL_CLEAR_VALUE,"STENCIL_CLEAR_VALUE");
	HX_VISIT_MEMBER_NAME(GL_obj::STENCIL_FUNC,"STENCIL_FUNC");
	HX_VISIT_MEMBER_NAME(GL_obj::STENCIL_FAIL,"STENCIL_FAIL");
	HX_VISIT_MEMBER_NAME(GL_obj::STENCIL_PASS_DEPTH_FAIL,"STENCIL_PASS_DEPTH_FAIL");
	HX_VISIT_MEMBER_NAME(GL_obj::STENCIL_PASS_DEPTH_PASS,"STENCIL_PASS_DEPTH_PASS");
	HX_VISIT_MEMBER_NAME(GL_obj::STENCIL_REF,"STENCIL_REF");
	HX_VISIT_MEMBER_NAME(GL_obj::STENCIL_VALUE_MASK,"STENCIL_VALUE_MASK");
	HX_VISIT_MEMBER_NAME(GL_obj::STENCIL_WRITEMASK,"STENCIL_WRITEMASK");
	HX_VISIT_MEMBER_NAME(GL_obj::STENCIL_BACK_FUNC,"STENCIL_BACK_FUNC");
	HX_VISIT_MEMBER_NAME(GL_obj::STENCIL_BACK_FAIL,"STENCIL_BACK_FAIL");
	HX_VISIT_MEMBER_NAME(GL_obj::STENCIL_BACK_PASS_DEPTH_FAIL,"STENCIL_BACK_PASS_DEPTH_FAIL");
	HX_VISIT_MEMBER_NAME(GL_obj::STENCIL_BACK_PASS_DEPTH_PASS,"STENCIL_BACK_PASS_DEPTH_PASS");
	HX_VISIT_MEMBER_NAME(GL_obj::STENCIL_BACK_REF,"STENCIL_BACK_REF");
	HX_VISIT_MEMBER_NAME(GL_obj::STENCIL_BACK_VALUE_MASK,"STENCIL_BACK_VALUE_MASK");
	HX_VISIT_MEMBER_NAME(GL_obj::STENCIL_BACK_WRITEMASK,"STENCIL_BACK_WRITEMASK");
	HX_VISIT_MEMBER_NAME(GL_obj::VIEWPORT,"VIEWPORT");
	HX_VISIT_MEMBER_NAME(GL_obj::SCISSOR_BOX,"SCISSOR_BOX");
	HX_VISIT_MEMBER_NAME(GL_obj::COLOR_CLEAR_VALUE,"COLOR_CLEAR_VALUE");
	HX_VISIT_MEMBER_NAME(GL_obj::COLOR_WRITEMASK,"COLOR_WRITEMASK");
	HX_VISIT_MEMBER_NAME(GL_obj::UNPACK_ALIGNMENT,"UNPACK_ALIGNMENT");
	HX_VISIT_MEMBER_NAME(GL_obj::PACK_ALIGNMENT,"PACK_ALIGNMENT");
	HX_VISIT_MEMBER_NAME(GL_obj::MAX_TEXTURE_SIZE,"MAX_TEXTURE_SIZE");
	HX_VISIT_MEMBER_NAME(GL_obj::MAX_VIEWPORT_DIMS,"MAX_VIEWPORT_DIMS");
	HX_VISIT_MEMBER_NAME(GL_obj::SUBPIXEL_BITS,"SUBPIXEL_BITS");
	HX_VISIT_MEMBER_NAME(GL_obj::RED_BITS,"RED_BITS");
	HX_VISIT_MEMBER_NAME(GL_obj::GREEN_BITS,"GREEN_BITS");
	HX_VISIT_MEMBER_NAME(GL_obj::BLUE_BITS,"BLUE_BITS");
	HX_VISIT_MEMBER_NAME(GL_obj::ALPHA_BITS,"ALPHA_BITS");
	HX_VISIT_MEMBER_NAME(GL_obj::DEPTH_BITS,"DEPTH_BITS");
	HX_VISIT_MEMBER_NAME(GL_obj::STENCIL_BITS,"STENCIL_BITS");
	HX_VISIT_MEMBER_NAME(GL_obj::POLYGON_OFFSET_UNITS,"POLYGON_OFFSET_UNITS");
	HX_VISIT_MEMBER_NAME(GL_obj::POLYGON_OFFSET_FACTOR,"POLYGON_OFFSET_FACTOR");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE_BINDING_2D,"TEXTURE_BINDING_2D");
	HX_VISIT_MEMBER_NAME(GL_obj::SAMPLE_BUFFERS,"SAMPLE_BUFFERS");
	HX_VISIT_MEMBER_NAME(GL_obj::SAMPLES,"SAMPLES");
	HX_VISIT_MEMBER_NAME(GL_obj::SAMPLE_COVERAGE_VALUE,"SAMPLE_COVERAGE_VALUE");
	HX_VISIT_MEMBER_NAME(GL_obj::SAMPLE_COVERAGE_INVERT,"SAMPLE_COVERAGE_INVERT");
	HX_VISIT_MEMBER_NAME(GL_obj::COMPRESSED_TEXTURE_FORMATS,"COMPRESSED_TEXTURE_FORMATS");
	HX_VISIT_MEMBER_NAME(GL_obj::DONT_CARE,"DONT_CARE");
	HX_VISIT_MEMBER_NAME(GL_obj::FASTEST,"FASTEST");
	HX_VISIT_MEMBER_NAME(GL_obj::NICEST,"NICEST");
	HX_VISIT_MEMBER_NAME(GL_obj::GENERATE_MIPMAP_HINT,"GENERATE_MIPMAP_HINT");
	HX_VISIT_MEMBER_NAME(GL_obj::BYTE,"BYTE");
	HX_VISIT_MEMBER_NAME(GL_obj::UNSIGNED_BYTE,"UNSIGNED_BYTE");
	HX_VISIT_MEMBER_NAME(GL_obj::SHORT,"SHORT");
	HX_VISIT_MEMBER_NAME(GL_obj::UNSIGNED_SHORT,"UNSIGNED_SHORT");
	HX_VISIT_MEMBER_NAME(GL_obj::INT,"INT");
	HX_VISIT_MEMBER_NAME(GL_obj::UNSIGNED_INT,"UNSIGNED_INT");
	HX_VISIT_MEMBER_NAME(GL_obj::FLOAT,"FLOAT");
	HX_VISIT_MEMBER_NAME(GL_obj::DEPTH_COMPONENT,"DEPTH_COMPONENT");
	HX_VISIT_MEMBER_NAME(GL_obj::ALPHA,"ALPHA");
	HX_VISIT_MEMBER_NAME(GL_obj::RGB,"RGB");
	HX_VISIT_MEMBER_NAME(GL_obj::RGBA,"RGBA");
	HX_VISIT_MEMBER_NAME(GL_obj::LUMINANCE,"LUMINANCE");
	HX_VISIT_MEMBER_NAME(GL_obj::LUMINANCE_ALPHA,"LUMINANCE_ALPHA");
	HX_VISIT_MEMBER_NAME(GL_obj::UNSIGNED_SHORT_4_4_4_4,"UNSIGNED_SHORT_4_4_4_4");
	HX_VISIT_MEMBER_NAME(GL_obj::UNSIGNED_SHORT_5_5_5_1,"UNSIGNED_SHORT_5_5_5_1");
	HX_VISIT_MEMBER_NAME(GL_obj::UNSIGNED_SHORT_5_6_5,"UNSIGNED_SHORT_5_6_5");
	HX_VISIT_MEMBER_NAME(GL_obj::FRAGMENT_SHADER,"FRAGMENT_SHADER");
	HX_VISIT_MEMBER_NAME(GL_obj::VERTEX_SHADER,"VERTEX_SHADER");
	HX_VISIT_MEMBER_NAME(GL_obj::MAX_VERTEX_ATTRIBS,"MAX_VERTEX_ATTRIBS");
	HX_VISIT_MEMBER_NAME(GL_obj::MAX_VERTEX_UNIFORM_VECTORS,"MAX_VERTEX_UNIFORM_VECTORS");
	HX_VISIT_MEMBER_NAME(GL_obj::MAX_VARYING_VECTORS,"MAX_VARYING_VECTORS");
	HX_VISIT_MEMBER_NAME(GL_obj::MAX_COMBINED_TEXTURE_IMAGE_UNITS,"MAX_COMBINED_TEXTURE_IMAGE_UNITS");
	HX_VISIT_MEMBER_NAME(GL_obj::MAX_VERTEX_TEXTURE_IMAGE_UNITS,"MAX_VERTEX_TEXTURE_IMAGE_UNITS");
	HX_VISIT_MEMBER_NAME(GL_obj::MAX_TEXTURE_IMAGE_UNITS,"MAX_TEXTURE_IMAGE_UNITS");
	HX_VISIT_MEMBER_NAME(GL_obj::MAX_FRAGMENT_UNIFORM_VECTORS,"MAX_FRAGMENT_UNIFORM_VECTORS");
	HX_VISIT_MEMBER_NAME(GL_obj::SHADER_TYPE,"SHADER_TYPE");
	HX_VISIT_MEMBER_NAME(GL_obj::DELETE_STATUS,"DELETE_STATUS");
	HX_VISIT_MEMBER_NAME(GL_obj::LINK_STATUS,"LINK_STATUS");
	HX_VISIT_MEMBER_NAME(GL_obj::VALIDATE_STATUS,"VALIDATE_STATUS");
	HX_VISIT_MEMBER_NAME(GL_obj::ATTACHED_SHADERS,"ATTACHED_SHADERS");
	HX_VISIT_MEMBER_NAME(GL_obj::ACTIVE_UNIFORMS,"ACTIVE_UNIFORMS");
	HX_VISIT_MEMBER_NAME(GL_obj::ACTIVE_ATTRIBUTES,"ACTIVE_ATTRIBUTES");
	HX_VISIT_MEMBER_NAME(GL_obj::SHADING_LANGUAGE_VERSION,"SHADING_LANGUAGE_VERSION");
	HX_VISIT_MEMBER_NAME(GL_obj::CURRENT_PROGRAM,"CURRENT_PROGRAM");
	HX_VISIT_MEMBER_NAME(GL_obj::NEVER,"NEVER");
	HX_VISIT_MEMBER_NAME(GL_obj::LESS,"LESS");
	HX_VISIT_MEMBER_NAME(GL_obj::EQUAL,"EQUAL");
	HX_VISIT_MEMBER_NAME(GL_obj::LEQUAL,"LEQUAL");
	HX_VISIT_MEMBER_NAME(GL_obj::GREATER,"GREATER");
	HX_VISIT_MEMBER_NAME(GL_obj::NOTEQUAL,"NOTEQUAL");
	HX_VISIT_MEMBER_NAME(GL_obj::GEQUAL,"GEQUAL");
	HX_VISIT_MEMBER_NAME(GL_obj::ALWAYS,"ALWAYS");
	HX_VISIT_MEMBER_NAME(GL_obj::KEEP,"KEEP");
	HX_VISIT_MEMBER_NAME(GL_obj::REPLACE,"REPLACE");
	HX_VISIT_MEMBER_NAME(GL_obj::INCR,"INCR");
	HX_VISIT_MEMBER_NAME(GL_obj::DECR,"DECR");
	HX_VISIT_MEMBER_NAME(GL_obj::INVERT,"INVERT");
	HX_VISIT_MEMBER_NAME(GL_obj::INCR_WRAP,"INCR_WRAP");
	HX_VISIT_MEMBER_NAME(GL_obj::DECR_WRAP,"DECR_WRAP");
	HX_VISIT_MEMBER_NAME(GL_obj::VENDOR,"VENDOR");
	HX_VISIT_MEMBER_NAME(GL_obj::RENDERER,"RENDERER");
	HX_VISIT_MEMBER_NAME(GL_obj::VERSION,"VERSION");
	HX_VISIT_MEMBER_NAME(GL_obj::NEAREST,"NEAREST");
	HX_VISIT_MEMBER_NAME(GL_obj::LINEAR,"LINEAR");
	HX_VISIT_MEMBER_NAME(GL_obj::NEAREST_MIPMAP_NEAREST,"NEAREST_MIPMAP_NEAREST");
	HX_VISIT_MEMBER_NAME(GL_obj::LINEAR_MIPMAP_NEAREST,"LINEAR_MIPMAP_NEAREST");
	HX_VISIT_MEMBER_NAME(GL_obj::NEAREST_MIPMAP_LINEAR,"NEAREST_MIPMAP_LINEAR");
	HX_VISIT_MEMBER_NAME(GL_obj::LINEAR_MIPMAP_LINEAR,"LINEAR_MIPMAP_LINEAR");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE_MAG_FILTER,"TEXTURE_MAG_FILTER");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE_MIN_FILTER,"TEXTURE_MIN_FILTER");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE_WRAP_S,"TEXTURE_WRAP_S");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE_WRAP_T,"TEXTURE_WRAP_T");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE_2D,"TEXTURE_2D");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE,"TEXTURE");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE_CUBE_MAP,"TEXTURE_CUBE_MAP");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE_BINDING_CUBE_MAP,"TEXTURE_BINDING_CUBE_MAP");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE_CUBE_MAP_POSITIVE_X,"TEXTURE_CUBE_MAP_POSITIVE_X");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE_CUBE_MAP_NEGATIVE_X,"TEXTURE_CUBE_MAP_NEGATIVE_X");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE_CUBE_MAP_POSITIVE_Y,"TEXTURE_CUBE_MAP_POSITIVE_Y");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE_CUBE_MAP_NEGATIVE_Y,"TEXTURE_CUBE_MAP_NEGATIVE_Y");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE_CUBE_MAP_POSITIVE_Z,"TEXTURE_CUBE_MAP_POSITIVE_Z");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE_CUBE_MAP_NEGATIVE_Z,"TEXTURE_CUBE_MAP_NEGATIVE_Z");
	HX_VISIT_MEMBER_NAME(GL_obj::MAX_CUBE_MAP_TEXTURE_SIZE,"MAX_CUBE_MAP_TEXTURE_SIZE");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE0,"TEXTURE0");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE1,"TEXTURE1");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE2,"TEXTURE2");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE3,"TEXTURE3");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE4,"TEXTURE4");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE5,"TEXTURE5");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE6,"TEXTURE6");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE7,"TEXTURE7");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE8,"TEXTURE8");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE9,"TEXTURE9");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE10,"TEXTURE10");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE11,"TEXTURE11");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE12,"TEXTURE12");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE13,"TEXTURE13");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE14,"TEXTURE14");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE15,"TEXTURE15");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE16,"TEXTURE16");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE17,"TEXTURE17");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE18,"TEXTURE18");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE19,"TEXTURE19");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE20,"TEXTURE20");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE21,"TEXTURE21");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE22,"TEXTURE22");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE23,"TEXTURE23");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE24,"TEXTURE24");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE25,"TEXTURE25");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE26,"TEXTURE26");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE27,"TEXTURE27");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE28,"TEXTURE28");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE29,"TEXTURE29");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE30,"TEXTURE30");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE31,"TEXTURE31");
	HX_VISIT_MEMBER_NAME(GL_obj::ACTIVE_TEXTURE,"ACTIVE_TEXTURE");
	HX_VISIT_MEMBER_NAME(GL_obj::REPEAT,"REPEAT");
	HX_VISIT_MEMBER_NAME(GL_obj::CLAMP_TO_EDGE,"CLAMP_TO_EDGE");
	HX_VISIT_MEMBER_NAME(GL_obj::MIRRORED_REPEAT,"MIRRORED_REPEAT");
	HX_VISIT_MEMBER_NAME(GL_obj::FLOAT_VEC2,"FLOAT_VEC2");
	HX_VISIT_MEMBER_NAME(GL_obj::FLOAT_VEC3,"FLOAT_VEC3");
	HX_VISIT_MEMBER_NAME(GL_obj::FLOAT_VEC4,"FLOAT_VEC4");
	HX_VISIT_MEMBER_NAME(GL_obj::INT_VEC2,"INT_VEC2");
	HX_VISIT_MEMBER_NAME(GL_obj::INT_VEC3,"INT_VEC3");
	HX_VISIT_MEMBER_NAME(GL_obj::INT_VEC4,"INT_VEC4");
	HX_VISIT_MEMBER_NAME(GL_obj::BOOL,"BOOL");
	HX_VISIT_MEMBER_NAME(GL_obj::BOOL_VEC2,"BOOL_VEC2");
	HX_VISIT_MEMBER_NAME(GL_obj::BOOL_VEC3,"BOOL_VEC3");
	HX_VISIT_MEMBER_NAME(GL_obj::BOOL_VEC4,"BOOL_VEC4");
	HX_VISIT_MEMBER_NAME(GL_obj::FLOAT_MAT2,"FLOAT_MAT2");
	HX_VISIT_MEMBER_NAME(GL_obj::FLOAT_MAT3,"FLOAT_MAT3");
	HX_VISIT_MEMBER_NAME(GL_obj::FLOAT_MAT4,"FLOAT_MAT4");
	HX_VISIT_MEMBER_NAME(GL_obj::SAMPLER_2D,"SAMPLER_2D");
	HX_VISIT_MEMBER_NAME(GL_obj::SAMPLER_CUBE,"SAMPLER_CUBE");
	HX_VISIT_MEMBER_NAME(GL_obj::VERTEX_ATTRIB_ARRAY_ENABLED,"VERTEX_ATTRIB_ARRAY_ENABLED");
	HX_VISIT_MEMBER_NAME(GL_obj::VERTEX_ATTRIB_ARRAY_SIZE,"VERTEX_ATTRIB_ARRAY_SIZE");
	HX_VISIT_MEMBER_NAME(GL_obj::VERTEX_ATTRIB_ARRAY_STRIDE,"VERTEX_ATTRIB_ARRAY_STRIDE");
	HX_VISIT_MEMBER_NAME(GL_obj::VERTEX_ATTRIB_ARRAY_TYPE,"VERTEX_ATTRIB_ARRAY_TYPE");
	HX_VISIT_MEMBER_NAME(GL_obj::VERTEX_ATTRIB_ARRAY_NORMALIZED,"VERTEX_ATTRIB_ARRAY_NORMALIZED");
	HX_VISIT_MEMBER_NAME(GL_obj::VERTEX_ATTRIB_ARRAY_POINTER,"VERTEX_ATTRIB_ARRAY_POINTER");
	HX_VISIT_MEMBER_NAME(GL_obj::VERTEX_ATTRIB_ARRAY_BUFFER_BINDING,"VERTEX_ATTRIB_ARRAY_BUFFER_BINDING");
	HX_VISIT_MEMBER_NAME(GL_obj::VERTEX_PROGRAM_POINT_SIZE,"VERTEX_PROGRAM_POINT_SIZE");
	HX_VISIT_MEMBER_NAME(GL_obj::POINT_SPRITE,"POINT_SPRITE");
	HX_VISIT_MEMBER_NAME(GL_obj::COMPILE_STATUS,"COMPILE_STATUS");
	HX_VISIT_MEMBER_NAME(GL_obj::LOW_FLOAT,"LOW_FLOAT");
	HX_VISIT_MEMBER_NAME(GL_obj::MEDIUM_FLOAT,"MEDIUM_FLOAT");
	HX_VISIT_MEMBER_NAME(GL_obj::HIGH_FLOAT,"HIGH_FLOAT");
	HX_VISIT_MEMBER_NAME(GL_obj::LOW_INT,"LOW_INT");
	HX_VISIT_MEMBER_NAME(GL_obj::MEDIUM_INT,"MEDIUM_INT");
	HX_VISIT_MEMBER_NAME(GL_obj::HIGH_INT,"HIGH_INT");
	HX_VISIT_MEMBER_NAME(GL_obj::FRAMEBUFFER,"FRAMEBUFFER");
	HX_VISIT_MEMBER_NAME(GL_obj::RENDERBUFFER,"RENDERBUFFER");
	HX_VISIT_MEMBER_NAME(GL_obj::RGBA4,"RGBA4");
	HX_VISIT_MEMBER_NAME(GL_obj::RGB5_A1,"RGB5_A1");
	HX_VISIT_MEMBER_NAME(GL_obj::RGB565,"RGB565");
	HX_VISIT_MEMBER_NAME(GL_obj::DEPTH_COMPONENT16,"DEPTH_COMPONENT16");
	HX_VISIT_MEMBER_NAME(GL_obj::STENCIL_INDEX,"STENCIL_INDEX");
	HX_VISIT_MEMBER_NAME(GL_obj::STENCIL_INDEX8,"STENCIL_INDEX8");
	HX_VISIT_MEMBER_NAME(GL_obj::DEPTH_STENCIL,"DEPTH_STENCIL");
	HX_VISIT_MEMBER_NAME(GL_obj::RENDERBUFFER_WIDTH,"RENDERBUFFER_WIDTH");
	HX_VISIT_MEMBER_NAME(GL_obj::RENDERBUFFER_HEIGHT,"RENDERBUFFER_HEIGHT");
	HX_VISIT_MEMBER_NAME(GL_obj::RENDERBUFFER_INTERNAL_FORMAT,"RENDERBUFFER_INTERNAL_FORMAT");
	HX_VISIT_MEMBER_NAME(GL_obj::RENDERBUFFER_RED_SIZE,"RENDERBUFFER_RED_SIZE");
	HX_VISIT_MEMBER_NAME(GL_obj::RENDERBUFFER_GREEN_SIZE,"RENDERBUFFER_GREEN_SIZE");
	HX_VISIT_MEMBER_NAME(GL_obj::RENDERBUFFER_BLUE_SIZE,"RENDERBUFFER_BLUE_SIZE");
	HX_VISIT_MEMBER_NAME(GL_obj::RENDERBUFFER_ALPHA_SIZE,"RENDERBUFFER_ALPHA_SIZE");
	HX_VISIT_MEMBER_NAME(GL_obj::RENDERBUFFER_DEPTH_SIZE,"RENDERBUFFER_DEPTH_SIZE");
	HX_VISIT_MEMBER_NAME(GL_obj::RENDERBUFFER_STENCIL_SIZE,"RENDERBUFFER_STENCIL_SIZE");
	HX_VISIT_MEMBER_NAME(GL_obj::FRAMEBUFFER_ATTACHMENT_OBJECT_TYPE,"FRAMEBUFFER_ATTACHMENT_OBJECT_TYPE");
	HX_VISIT_MEMBER_NAME(GL_obj::FRAMEBUFFER_ATTACHMENT_OBJECT_NAME,"FRAMEBUFFER_ATTACHMENT_OBJECT_NAME");
	HX_VISIT_MEMBER_NAME(GL_obj::FRAMEBUFFER_ATTACHMENT_TEXTURE_LEVEL,"FRAMEBUFFER_ATTACHMENT_TEXTURE_LEVEL");
	HX_VISIT_MEMBER_NAME(GL_obj::FRAMEBUFFER_ATTACHMENT_TEXTURE_CUBE_MAP_FACE,"FRAMEBUFFER_ATTACHMENT_TEXTURE_CUBE_MAP_FACE");
	HX_VISIT_MEMBER_NAME(GL_obj::COLOR_ATTACHMENT0,"COLOR_ATTACHMENT0");
	HX_VISIT_MEMBER_NAME(GL_obj::DEPTH_ATTACHMENT,"DEPTH_ATTACHMENT");
	HX_VISIT_MEMBER_NAME(GL_obj::STENCIL_ATTACHMENT,"STENCIL_ATTACHMENT");
	HX_VISIT_MEMBER_NAME(GL_obj::DEPTH_STENCIL_ATTACHMENT,"DEPTH_STENCIL_ATTACHMENT");
	HX_VISIT_MEMBER_NAME(GL_obj::NONE,"NONE");
	HX_VISIT_MEMBER_NAME(GL_obj::FRAMEBUFFER_COMPLETE,"FRAMEBUFFER_COMPLETE");
	HX_VISIT_MEMBER_NAME(GL_obj::FRAMEBUFFER_INCOMPLETE_ATTACHMENT,"FRAMEBUFFER_INCOMPLETE_ATTACHMENT");
	HX_VISIT_MEMBER_NAME(GL_obj::FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT,"FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT");
	HX_VISIT_MEMBER_NAME(GL_obj::FRAMEBUFFER_INCOMPLETE_DIMENSIONS,"FRAMEBUFFER_INCOMPLETE_DIMENSIONS");
	HX_VISIT_MEMBER_NAME(GL_obj::FRAMEBUFFER_UNSUPPORTED,"FRAMEBUFFER_UNSUPPORTED");
	HX_VISIT_MEMBER_NAME(GL_obj::FRAMEBUFFER_BINDING,"FRAMEBUFFER_BINDING");
	HX_VISIT_MEMBER_NAME(GL_obj::RENDERBUFFER_BINDING,"RENDERBUFFER_BINDING");
	HX_VISIT_MEMBER_NAME(GL_obj::MAX_RENDERBUFFER_SIZE,"MAX_RENDERBUFFER_SIZE");
	HX_VISIT_MEMBER_NAME(GL_obj::INVALID_FRAMEBUFFER_OPERATION,"INVALID_FRAMEBUFFER_OPERATION");
	HX_VISIT_MEMBER_NAME(GL_obj::UNPACK_FLIP_Y_WEBGL,"UNPACK_FLIP_Y_WEBGL");
	HX_VISIT_MEMBER_NAME(GL_obj::UNPACK_PREMULTIPLY_ALPHA_WEBGL,"UNPACK_PREMULTIPLY_ALPHA_WEBGL");
	HX_VISIT_MEMBER_NAME(GL_obj::CONTEXT_LOST_WEBGL,"CONTEXT_LOST_WEBGL");
	HX_VISIT_MEMBER_NAME(GL_obj::UNPACK_COLORSPACE_CONVERSION_WEBGL,"UNPACK_COLORSPACE_CONVERSION_WEBGL");
	HX_VISIT_MEMBER_NAME(GL_obj::BROWSER_DEFAULT_WEBGL,"BROWSER_DEFAULT_WEBGL");
	HX_VISIT_MEMBER_NAME(GL_obj::snow_gl_active_texture,"snow_gl_active_texture");
	HX_VISIT_MEMBER_NAME(GL_obj::snow_gl_attach_shader,"snow_gl_attach_shader");
	HX_VISIT_MEMBER_NAME(GL_obj::snow_gl_bind_attrib_location,"snow_gl_bind_attrib_location");
	HX_VISIT_MEMBER_NAME(GL_obj::snow_gl_bind_buffer,"snow_gl_bind_buffer");
	HX_VISIT_MEMBER_NAME(GL_obj::snow_gl_bind_framebuffer,"snow_gl_bind_framebuffer");
	HX_VISIT_MEMBER_NAME(GL_obj::snow_gl_bind_renderbuffer,"snow_gl_bind_renderbuffer");
	HX_VISIT_MEMBER_NAME(GL_obj::snow_gl_bind_texture,"snow_gl_bind_texture");
	HX_VISIT_MEMBER_NAME(GL_obj::snow_gl_blend_color,"snow_gl_blend_color");
	HX_VISIT_MEMBER_NAME(GL_obj::snow_gl_blend_equation,"snow_gl_blend_equation");
	HX_VISIT_MEMBER_NAME(GL_obj::snow_gl_blend_equation_separate,"snow_gl_blend_equation_separate");
	HX_VISIT_MEMBER_NAME(GL_obj::snow_gl_blend_func,"snow_gl_blend_func");
	HX_VISIT_MEMBER_NAME(GL_obj::snow_gl_blend_func_separate,"snow_gl_blend_func_separate");
	HX_VISIT_MEMBER_NAME(GL_obj::snow_gl_buffer_data,"snow_gl_buffer_data");
	HX_VISIT_MEMBER_NAME(GL_obj::snow_gl_buffer_sub_data,"snow_gl_buffer_sub_data");
	HX_VISIT_MEMBER_NAME(GL_obj::snow_gl_check_framebuffer_status,"snow_gl_check_framebuffer_status");
	HX_VISIT_MEMBER_NAME(GL_obj::snow_gl_clear,"snow_gl_clear");
	HX_VISIT_MEMBER_NAME(GL_obj::snow_gl_clear_color,"snow_gl_clear_color");
	HX_VISIT_MEMBER_NAME(GL_obj::snow_gl_clear_depth,"snow_gl_clear_depth");
	HX_VISIT_MEMBER_NAME(GL_obj::snow_gl_clear_stencil,"snow_gl_clear_stencil");
	HX_VISIT_MEMBER_NAME(GL_obj::snow_gl_color_mask,"snow_gl_color_mask");
	HX_VISIT_MEMBER_NAME(GL_obj::snow_gl_compile_shader,"snow_gl_compile_shader");
	HX_VISIT_MEMBER_NAME(GL_obj::snow_gl_compressed_tex_image_2d,"snow_gl_compressed_tex_image_2d");
	HX_VISIT_MEMBER_NAME(GL_obj::snow_gl_compressed_tex_sub_image_2d,"snow_gl_compressed_tex_sub_image_2d");
	HX_VISIT_MEMBER_NAME(GL_obj::snow_gl_copy_tex_image_2d,"snow_gl_copy_tex_image_2d");
	HX_VISIT_MEMBER_NAME(GL_obj::snow_gl_copy_tex_sub_image_2d,"snow_gl_copy_tex_sub_image_2d");
	HX_VISIT_MEMBER_NAME(GL_obj::snow_gl_create_buffer,"snow_gl_create_buffer");
	HX_VISIT_MEMBER_NAME(GL_obj::snow_gl_create_framebuffer,"snow_gl_create_framebuffer");
	HX_VISIT_MEMBER_NAME(GL_obj::snow_gl_create_program,"snow_gl_create_program");
	HX_VISIT_MEMBER_NAME(GL_obj::snow_gl_create_render_buffer,"snow_gl_create_render_buffer");
	HX_VISIT_MEMBER_NAME(GL_obj::snow_gl_create_shader,"snow_gl_create_shader");
	HX_VISIT_MEMBER_NAME(GL_obj::snow_gl_create_texture,"snow_gl_create_texture");
	HX_VISIT_MEMBER_NAME(GL_obj::snow_gl_cull_face,"snow_gl_cull_face");
	HX_VISIT_MEMBER_NAME(GL_obj::snow_gl_delete_buffer,"snow_gl_delete_buffer");
	HX_VISIT_MEMBER_NAME(GL_obj::snow_gl_delete_framebuffer,"snow_gl_delete_framebuffer");
	HX_VISIT_MEMBER_NAME(GL_obj::snow_gl_delete_program,"snow_gl_delete_program");
	HX_VISIT_MEMBER_NAME(GL_obj::snow_gl_delete_render_buffer,"snow_gl_delete_render_buffer");
	HX_VISIT_MEMBER_NAME(GL_obj::snow_gl_delete_shader,"snow_gl_delete_shader");
	HX_VISIT_MEMBER_NAME(GL_obj::snow_gl_delete_texture,"snow_gl_delete_texture");
	HX_VISIT_MEMBER_NAME(GL_obj::snow_gl_depth_func,"snow_gl_depth_func");
	HX_VISIT_MEMBER_NAME(GL_obj::snow_gl_depth_mask,"snow_gl_depth_mask");
	HX_VISIT_MEMBER_NAME(GL_obj::snow_gl_depth_range,"snow_gl_depth_range");
	HX_VISIT_MEMBER_NAME(GL_obj::snow_gl_detach_shader,"snow_gl_detach_shader");
	HX_VISIT_MEMBER_NAME(GL_obj::snow_gl_disable,"snow_gl_disable");
	HX_VISIT_MEMBER_NAME(GL_obj::snow_gl_disable_vertex_attrib_array,"snow_gl_disable_vertex_attrib_array");
	HX_VISIT_MEMBER_NAME(GL_obj::snow_gl_draw_arrays,"snow_gl_draw_arrays");
	HX_VISIT_MEMBER_NAME(GL_obj::snow_gl_draw_elements,"snow_gl_draw_elements");
	HX_VISIT_MEMBER_NAME(GL_obj::snow_gl_enable,"snow_gl_enable");
	HX_VISIT_MEMBER_NAME(GL_obj::snow_gl_enable_vertex_attrib_array,"snow_gl_enable_vertex_attrib_array");
	HX_VISIT_MEMBER_NAME(GL_obj::snow_gl_finish,"snow_gl_finish");
	HX_VISIT_MEMBER_NAME(GL_obj::snow_gl_flush,"snow_gl_flush");
	HX_VISIT_MEMBER_NAME(GL_obj::snow_gl_framebuffer_renderbuffer,"snow_gl_framebuffer_renderbuffer");
	HX_VISIT_MEMBER_NAME(GL_obj::snow_gl_framebuffer_texture2D,"snow_gl_framebuffer_texture2D");
	HX_VISIT_MEMBER_NAME(GL_obj::snow_gl_front_face,"snow_gl_front_face");
	HX_VISIT_MEMBER_NAME(GL_obj::snow_gl_generate_mipmap,"snow_gl_generate_mipmap");
	HX_VISIT_MEMBER_NAME(GL_obj::snow_gl_get_active_attrib,"snow_gl_get_active_attrib");
	HX_VISIT_MEMBER_NAME(GL_obj::snow_gl_get_active_uniform,"snow_gl_get_active_uniform");
	HX_VISIT_MEMBER_NAME(GL_obj::snow_gl_get_attrib_location,"snow_gl_get_attrib_location");
	HX_VISIT_MEMBER_NAME(GL_obj::snow_gl_get_buffer_paramerter,"snow_gl_get_buffer_paramerter");
	HX_VISIT_MEMBER_NAME(GL_obj::snow_gl_get_context_attributes,"snow_gl_get_context_attributes");
	HX_VISIT_MEMBER_NAME(GL_obj::snow_gl_get_error,"snow_gl_get_error");
	HX_VISIT_MEMBER_NAME(GL_obj::snow_gl_get_framebuffer_attachment_parameter,"snow_gl_get_framebuffer_attachment_parameter");
	HX_VISIT_MEMBER_NAME(GL_obj::snow_gl_get_parameter,"snow_gl_get_parameter");
	HX_VISIT_MEMBER_NAME(GL_obj::snow_gl_get_program_info_log,"snow_gl_get_program_info_log");
	HX_VISIT_MEMBER_NAME(GL_obj::snow_gl_get_program_parameter,"snow_gl_get_program_parameter");
	HX_VISIT_MEMBER_NAME(GL_obj::snow_gl_get_render_buffer_parameter,"snow_gl_get_render_buffer_parameter");
	HX_VISIT_MEMBER_NAME(GL_obj::snow_gl_get_shader_info_log,"snow_gl_get_shader_info_log");
	HX_VISIT_MEMBER_NAME(GL_obj::snow_gl_get_shader_parameter,"snow_gl_get_shader_parameter");
	HX_VISIT_MEMBER_NAME(GL_obj::snow_gl_get_shader_precision_format,"snow_gl_get_shader_precision_format");
	HX_VISIT_MEMBER_NAME(GL_obj::snow_gl_get_shader_source,"snow_gl_get_shader_source");
	HX_VISIT_MEMBER_NAME(GL_obj::snow_gl_get_supported_extensions,"snow_gl_get_supported_extensions");
	HX_VISIT_MEMBER_NAME(GL_obj::snow_gl_get_tex_parameter,"snow_gl_get_tex_parameter");
	HX_VISIT_MEMBER_NAME(GL_obj::snow_gl_get_uniform,"snow_gl_get_uniform");
	HX_VISIT_MEMBER_NAME(GL_obj::snow_gl_get_uniform_location,"snow_gl_get_uniform_location");
	HX_VISIT_MEMBER_NAME(GL_obj::snow_gl_get_vertex_attrib,"snow_gl_get_vertex_attrib");
	HX_VISIT_MEMBER_NAME(GL_obj::snow_gl_get_vertex_attrib_offset,"snow_gl_get_vertex_attrib_offset");
	HX_VISIT_MEMBER_NAME(GL_obj::snow_gl_hint,"snow_gl_hint");
	HX_VISIT_MEMBER_NAME(GL_obj::snow_gl_is_buffer,"snow_gl_is_buffer");
	HX_VISIT_MEMBER_NAME(GL_obj::snow_gl_is_enabled,"snow_gl_is_enabled");
	HX_VISIT_MEMBER_NAME(GL_obj::snow_gl_is_framebuffer,"snow_gl_is_framebuffer");
	HX_VISIT_MEMBER_NAME(GL_obj::snow_gl_is_program,"snow_gl_is_program");
	HX_VISIT_MEMBER_NAME(GL_obj::snow_gl_is_renderbuffer,"snow_gl_is_renderbuffer");
	HX_VISIT_MEMBER_NAME(GL_obj::snow_gl_is_shader,"snow_gl_is_shader");
	HX_VISIT_MEMBER_NAME(GL_obj::snow_gl_is_texture,"snow_gl_is_texture");
	HX_VISIT_MEMBER_NAME(GL_obj::snow_gl_line_width,"snow_gl_line_width");
	HX_VISIT_MEMBER_NAME(GL_obj::snow_gl_link_program,"snow_gl_link_program");
	HX_VISIT_MEMBER_NAME(GL_obj::snow_gl_pixel_storei,"snow_gl_pixel_storei");
	HX_VISIT_MEMBER_NAME(GL_obj::snow_gl_polygon_offset,"snow_gl_polygon_offset");
	HX_VISIT_MEMBER_NAME(GL_obj::snow_gl_read_pixels,"snow_gl_read_pixels");
	HX_VISIT_MEMBER_NAME(GL_obj::snow_gl_renderbuffer_storage,"snow_gl_renderbuffer_storage");
	HX_VISIT_MEMBER_NAME(GL_obj::snow_gl_sample_coverage,"snow_gl_sample_coverage");
	HX_VISIT_MEMBER_NAME(GL_obj::snow_gl_scissor,"snow_gl_scissor");
	HX_VISIT_MEMBER_NAME(GL_obj::snow_gl_shader_source,"snow_gl_shader_source");
	HX_VISIT_MEMBER_NAME(GL_obj::snow_gl_stencil_func,"snow_gl_stencil_func");
	HX_VISIT_MEMBER_NAME(GL_obj::snow_gl_stencil_func_separate,"snow_gl_stencil_func_separate");
	HX_VISIT_MEMBER_NAME(GL_obj::snow_gl_stencil_mask,"snow_gl_stencil_mask");
	HX_VISIT_MEMBER_NAME(GL_obj::snow_gl_stencil_mask_separate,"snow_gl_stencil_mask_separate");
	HX_VISIT_MEMBER_NAME(GL_obj::snow_gl_stencil_op,"snow_gl_stencil_op");
	HX_VISIT_MEMBER_NAME(GL_obj::snow_gl_stencil_op_separate,"snow_gl_stencil_op_separate");
	HX_VISIT_MEMBER_NAME(GL_obj::snow_gl_tex_image_2d,"snow_gl_tex_image_2d");
	HX_VISIT_MEMBER_NAME(GL_obj::snow_gl_tex_parameterf,"snow_gl_tex_parameterf");
	HX_VISIT_MEMBER_NAME(GL_obj::snow_gl_tex_parameteri,"snow_gl_tex_parameteri");
	HX_VISIT_MEMBER_NAME(GL_obj::snow_gl_tex_sub_image_2d,"snow_gl_tex_sub_image_2d");
	HX_VISIT_MEMBER_NAME(GL_obj::snow_gl_uniform1f,"snow_gl_uniform1f");
	HX_VISIT_MEMBER_NAME(GL_obj::snow_gl_uniform1fv,"snow_gl_uniform1fv");
	HX_VISIT_MEMBER_NAME(GL_obj::snow_gl_uniform1i,"snow_gl_uniform1i");
	HX_VISIT_MEMBER_NAME(GL_obj::snow_gl_uniform1iv,"snow_gl_uniform1iv");
	HX_VISIT_MEMBER_NAME(GL_obj::snow_gl_uniform2f,"snow_gl_uniform2f");
	HX_VISIT_MEMBER_NAME(GL_obj::snow_gl_uniform2fv,"snow_gl_uniform2fv");
	HX_VISIT_MEMBER_NAME(GL_obj::snow_gl_uniform2i,"snow_gl_uniform2i");
	HX_VISIT_MEMBER_NAME(GL_obj::snow_gl_uniform2iv,"snow_gl_uniform2iv");
	HX_VISIT_MEMBER_NAME(GL_obj::snow_gl_uniform3f,"snow_gl_uniform3f");
	HX_VISIT_MEMBER_NAME(GL_obj::snow_gl_uniform3fv,"snow_gl_uniform3fv");
	HX_VISIT_MEMBER_NAME(GL_obj::snow_gl_uniform3i,"snow_gl_uniform3i");
	HX_VISIT_MEMBER_NAME(GL_obj::snow_gl_uniform3iv,"snow_gl_uniform3iv");
	HX_VISIT_MEMBER_NAME(GL_obj::snow_gl_uniform4f,"snow_gl_uniform4f");
	HX_VISIT_MEMBER_NAME(GL_obj::snow_gl_uniform4fv,"snow_gl_uniform4fv");
	HX_VISIT_MEMBER_NAME(GL_obj::snow_gl_uniform4i,"snow_gl_uniform4i");
	HX_VISIT_MEMBER_NAME(GL_obj::snow_gl_uniform4iv,"snow_gl_uniform4iv");
	HX_VISIT_MEMBER_NAME(GL_obj::snow_gl_uniform_matrix,"snow_gl_uniform_matrix");
	HX_VISIT_MEMBER_NAME(GL_obj::snow_gl_use_program,"snow_gl_use_program");
	HX_VISIT_MEMBER_NAME(GL_obj::snow_gl_validate_program,"snow_gl_validate_program");
	HX_VISIT_MEMBER_NAME(GL_obj::snow_gl_version,"snow_gl_version");
	HX_VISIT_MEMBER_NAME(GL_obj::snow_gl_vertex_attrib1f,"snow_gl_vertex_attrib1f");
	HX_VISIT_MEMBER_NAME(GL_obj::snow_gl_vertex_attrib1fv,"snow_gl_vertex_attrib1fv");
	HX_VISIT_MEMBER_NAME(GL_obj::snow_gl_vertex_attrib2f,"snow_gl_vertex_attrib2f");
	HX_VISIT_MEMBER_NAME(GL_obj::snow_gl_vertex_attrib2fv,"snow_gl_vertex_attrib2fv");
	HX_VISIT_MEMBER_NAME(GL_obj::snow_gl_vertex_attrib3f,"snow_gl_vertex_attrib3f");
	HX_VISIT_MEMBER_NAME(GL_obj::snow_gl_vertex_attrib3fv,"snow_gl_vertex_attrib3fv");
	HX_VISIT_MEMBER_NAME(GL_obj::snow_gl_vertex_attrib4f,"snow_gl_vertex_attrib4f");
	HX_VISIT_MEMBER_NAME(GL_obj::snow_gl_vertex_attrib4fv,"snow_gl_vertex_attrib4fv");
	HX_VISIT_MEMBER_NAME(GL_obj::snow_gl_vertex_attrib_pointer,"snow_gl_vertex_attrib_pointer");
	HX_VISIT_MEMBER_NAME(GL_obj::snow_gl_viewport,"snow_gl_viewport");
};

#endif

Class GL_obj::__mClass;

void GL_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("snow.platform.native.render.opengl.GL"), hx::TCanCast< GL_obj> ,sStaticFields,sMemberFields,
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

void GL_obj::__boot()
{
	DEPTH_BUFFER_BIT= (int)256;
	STENCIL_BUFFER_BIT= (int)1024;
	COLOR_BUFFER_BIT= (int)16384;
	POINTS= (int)0;
	LINES= (int)1;
	LINE_LOOP= (int)2;
	LINE_STRIP= (int)3;
	TRIANGLES= (int)4;
	TRIANGLE_STRIP= (int)5;
	TRIANGLE_FAN= (int)6;
	ZERO= (int)0;
	ONE= (int)1;
	SRC_COLOR= (int)768;
	ONE_MINUS_SRC_COLOR= (int)769;
	SRC_ALPHA= (int)770;
	ONE_MINUS_SRC_ALPHA= (int)771;
	DST_ALPHA= (int)772;
	ONE_MINUS_DST_ALPHA= (int)773;
	DST_COLOR= (int)774;
	ONE_MINUS_DST_COLOR= (int)775;
	SRC_ALPHA_SATURATE= (int)776;
	FUNC_ADD= (int)32774;
	BLEND_EQUATION= (int)32777;
	BLEND_EQUATION_RGB= (int)32777;
	BLEND_EQUATION_ALPHA= (int)34877;
	FUNC_SUBTRACT= (int)32778;
	FUNC_REVERSE_SUBTRACT= (int)32779;
	BLEND_DST_RGB= (int)32968;
	BLEND_SRC_RGB= (int)32969;
	BLEND_DST_ALPHA= (int)32970;
	BLEND_SRC_ALPHA= (int)32971;
	CONSTANT_COLOR= (int)32769;
	ONE_MINUS_CONSTANT_COLOR= (int)32770;
	CONSTANT_ALPHA= (int)32771;
	ONE_MINUS_CONSTANT_ALPHA= (int)32772;
	BLEND_COLOR= (int)32773;
	ARRAY_BUFFER= (int)34962;
	ELEMENT_ARRAY_BUFFER= (int)34963;
	ARRAY_BUFFER_BINDING= (int)34964;
	ELEMENT_ARRAY_BUFFER_BINDING= (int)34965;
	STREAM_DRAW= (int)35040;
	STATIC_DRAW= (int)35044;
	DYNAMIC_DRAW= (int)35048;
	BUFFER_SIZE= (int)34660;
	BUFFER_USAGE= (int)34661;
	CURRENT_VERTEX_ATTRIB= (int)34342;
	FRONT= (int)1028;
	BACK= (int)1029;
	FRONT_AND_BACK= (int)1032;
	CULL_FACE= (int)2884;
	BLEND= (int)3042;
	DITHER= (int)3024;
	STENCIL_TEST= (int)2960;
	DEPTH_TEST= (int)2929;
	SCISSOR_TEST= (int)3089;
	POLYGON_OFFSET_FILL= (int)32823;
	SAMPLE_ALPHA_TO_COVERAGE= (int)32926;
	SAMPLE_COVERAGE= (int)32928;
	NO_ERROR= (int)0;
	INVALID_ENUM= (int)1280;
	INVALID_VALUE= (int)1281;
	INVALID_OPERATION= (int)1282;
	OUT_OF_MEMORY= (int)1285;
	CW= (int)2304;
	CCW= (int)2305;
	LINE_WIDTH= (int)2849;
	ALIASED_POINT_SIZE_RANGE= (int)33901;
	ALIASED_LINE_WIDTH_RANGE= (int)33902;
	CULL_FACE_MODE= (int)2885;
	FRONT_FACE= (int)2886;
	DEPTH_RANGE= (int)2928;
	DEPTH_WRITEMASK= (int)2930;
	DEPTH_CLEAR_VALUE= (int)2931;
	DEPTH_FUNC= (int)2932;
	STENCIL_CLEAR_VALUE= (int)2961;
	STENCIL_FUNC= (int)2962;
	STENCIL_FAIL= (int)2964;
	STENCIL_PASS_DEPTH_FAIL= (int)2965;
	STENCIL_PASS_DEPTH_PASS= (int)2966;
	STENCIL_REF= (int)2967;
	STENCIL_VALUE_MASK= (int)2963;
	STENCIL_WRITEMASK= (int)2968;
	STENCIL_BACK_FUNC= (int)34816;
	STENCIL_BACK_FAIL= (int)34817;
	STENCIL_BACK_PASS_DEPTH_FAIL= (int)34818;
	STENCIL_BACK_PASS_DEPTH_PASS= (int)34819;
	STENCIL_BACK_REF= (int)36003;
	STENCIL_BACK_VALUE_MASK= (int)36004;
	STENCIL_BACK_WRITEMASK= (int)36005;
	VIEWPORT= (int)2978;
	SCISSOR_BOX= (int)3088;
	COLOR_CLEAR_VALUE= (int)3106;
	COLOR_WRITEMASK= (int)3107;
	UNPACK_ALIGNMENT= (int)3317;
	PACK_ALIGNMENT= (int)3333;
	MAX_TEXTURE_SIZE= (int)3379;
	MAX_VIEWPORT_DIMS= (int)3386;
	SUBPIXEL_BITS= (int)3408;
	RED_BITS= (int)3410;
	GREEN_BITS= (int)3411;
	BLUE_BITS= (int)3412;
	ALPHA_BITS= (int)3413;
	DEPTH_BITS= (int)3414;
	STENCIL_BITS= (int)3415;
	POLYGON_OFFSET_UNITS= (int)10752;
	POLYGON_OFFSET_FACTOR= (int)32824;
	TEXTURE_BINDING_2D= (int)32873;
	SAMPLE_BUFFERS= (int)32936;
	SAMPLES= (int)32937;
	SAMPLE_COVERAGE_VALUE= (int)32938;
	SAMPLE_COVERAGE_INVERT= (int)32939;
	COMPRESSED_TEXTURE_FORMATS= (int)34467;
	DONT_CARE= (int)4352;
	FASTEST= (int)4353;
	NICEST= (int)4354;
	GENERATE_MIPMAP_HINT= (int)33170;
	BYTE= (int)5120;
	UNSIGNED_BYTE= (int)5121;
	SHORT= (int)5122;
	UNSIGNED_SHORT= (int)5123;
	INT= (int)5124;
	UNSIGNED_INT= (int)5125;
	FLOAT= (int)5126;
	DEPTH_COMPONENT= (int)6402;
	ALPHA= (int)6406;
	RGB= (int)6407;
	RGBA= (int)6408;
	LUMINANCE= (int)6409;
	LUMINANCE_ALPHA= (int)6410;
	UNSIGNED_SHORT_4_4_4_4= (int)32819;
	UNSIGNED_SHORT_5_5_5_1= (int)32820;
	UNSIGNED_SHORT_5_6_5= (int)33635;
	FRAGMENT_SHADER= (int)35632;
	VERTEX_SHADER= (int)35633;
	MAX_VERTEX_ATTRIBS= (int)34921;
	MAX_VERTEX_UNIFORM_VECTORS= (int)36347;
	MAX_VARYING_VECTORS= (int)36348;
	MAX_COMBINED_TEXTURE_IMAGE_UNITS= (int)35661;
	MAX_VERTEX_TEXTURE_IMAGE_UNITS= (int)35660;
	MAX_TEXTURE_IMAGE_UNITS= (int)34930;
	MAX_FRAGMENT_UNIFORM_VECTORS= (int)36349;
	SHADER_TYPE= (int)35663;
	DELETE_STATUS= (int)35712;
	LINK_STATUS= (int)35714;
	VALIDATE_STATUS= (int)35715;
	ATTACHED_SHADERS= (int)35717;
	ACTIVE_UNIFORMS= (int)35718;
	ACTIVE_ATTRIBUTES= (int)35721;
	SHADING_LANGUAGE_VERSION= (int)35724;
	CURRENT_PROGRAM= (int)35725;
	NEVER= (int)512;
	LESS= (int)513;
	EQUAL= (int)514;
	LEQUAL= (int)515;
	GREATER= (int)516;
	NOTEQUAL= (int)517;
	GEQUAL= (int)518;
	ALWAYS= (int)519;
	KEEP= (int)7680;
	REPLACE= (int)7681;
	INCR= (int)7682;
	DECR= (int)7683;
	INVERT= (int)5386;
	INCR_WRAP= (int)34055;
	DECR_WRAP= (int)34056;
	VENDOR= (int)7936;
	RENDERER= (int)7937;
	VERSION= (int)7938;
	NEAREST= (int)9728;
	LINEAR= (int)9729;
	NEAREST_MIPMAP_NEAREST= (int)9984;
	LINEAR_MIPMAP_NEAREST= (int)9985;
	NEAREST_MIPMAP_LINEAR= (int)9986;
	LINEAR_MIPMAP_LINEAR= (int)9987;
	TEXTURE_MAG_FILTER= (int)10240;
	TEXTURE_MIN_FILTER= (int)10241;
	TEXTURE_WRAP_S= (int)10242;
	TEXTURE_WRAP_T= (int)10243;
	TEXTURE_2D= (int)3553;
	TEXTURE= (int)5890;
	TEXTURE_CUBE_MAP= (int)34067;
	TEXTURE_BINDING_CUBE_MAP= (int)34068;
	TEXTURE_CUBE_MAP_POSITIVE_X= (int)34069;
	TEXTURE_CUBE_MAP_NEGATIVE_X= (int)34070;
	TEXTURE_CUBE_MAP_POSITIVE_Y= (int)34071;
	TEXTURE_CUBE_MAP_NEGATIVE_Y= (int)34072;
	TEXTURE_CUBE_MAP_POSITIVE_Z= (int)34073;
	TEXTURE_CUBE_MAP_NEGATIVE_Z= (int)34074;
	MAX_CUBE_MAP_TEXTURE_SIZE= (int)34076;
	TEXTURE0= (int)33984;
	TEXTURE1= (int)33985;
	TEXTURE2= (int)33986;
	TEXTURE3= (int)33987;
	TEXTURE4= (int)33988;
	TEXTURE5= (int)33989;
	TEXTURE6= (int)33990;
	TEXTURE7= (int)33991;
	TEXTURE8= (int)33992;
	TEXTURE9= (int)33993;
	TEXTURE10= (int)33994;
	TEXTURE11= (int)33995;
	TEXTURE12= (int)33996;
	TEXTURE13= (int)33997;
	TEXTURE14= (int)33998;
	TEXTURE15= (int)33999;
	TEXTURE16= (int)34000;
	TEXTURE17= (int)34001;
	TEXTURE18= (int)34002;
	TEXTURE19= (int)34003;
	TEXTURE20= (int)34004;
	TEXTURE21= (int)34005;
	TEXTURE22= (int)34006;
	TEXTURE23= (int)34007;
	TEXTURE24= (int)34008;
	TEXTURE25= (int)34009;
	TEXTURE26= (int)34010;
	TEXTURE27= (int)34011;
	TEXTURE28= (int)34012;
	TEXTURE29= (int)34013;
	TEXTURE30= (int)34014;
	TEXTURE31= (int)34015;
	ACTIVE_TEXTURE= (int)34016;
	REPEAT= (int)10497;
	CLAMP_TO_EDGE= (int)33071;
	MIRRORED_REPEAT= (int)33648;
	FLOAT_VEC2= (int)35664;
	FLOAT_VEC3= (int)35665;
	FLOAT_VEC4= (int)35666;
	INT_VEC2= (int)35667;
	INT_VEC3= (int)35668;
	INT_VEC4= (int)35669;
	BOOL= (int)35670;
	BOOL_VEC2= (int)35671;
	BOOL_VEC3= (int)35672;
	BOOL_VEC4= (int)35673;
	FLOAT_MAT2= (int)35674;
	FLOAT_MAT3= (int)35675;
	FLOAT_MAT4= (int)35676;
	SAMPLER_2D= (int)35678;
	SAMPLER_CUBE= (int)35680;
	VERTEX_ATTRIB_ARRAY_ENABLED= (int)34338;
	VERTEX_ATTRIB_ARRAY_SIZE= (int)34339;
	VERTEX_ATTRIB_ARRAY_STRIDE= (int)34340;
	VERTEX_ATTRIB_ARRAY_TYPE= (int)34341;
	VERTEX_ATTRIB_ARRAY_NORMALIZED= (int)34922;
	VERTEX_ATTRIB_ARRAY_POINTER= (int)34373;
	VERTEX_ATTRIB_ARRAY_BUFFER_BINDING= (int)34975;
	VERTEX_PROGRAM_POINT_SIZE= (int)34370;
	POINT_SPRITE= (int)34913;
	COMPILE_STATUS= (int)35713;
	LOW_FLOAT= (int)36336;
	MEDIUM_FLOAT= (int)36337;
	HIGH_FLOAT= (int)36338;
	LOW_INT= (int)36339;
	MEDIUM_INT= (int)36340;
	HIGH_INT= (int)36341;
	FRAMEBUFFER= (int)36160;
	RENDERBUFFER= (int)36161;
	RGBA4= (int)32854;
	RGB5_A1= (int)32855;
	RGB565= (int)36194;
	DEPTH_COMPONENT16= (int)33189;
	STENCIL_INDEX= (int)6401;
	STENCIL_INDEX8= (int)36168;
	DEPTH_STENCIL= (int)34041;
	RENDERBUFFER_WIDTH= (int)36162;
	RENDERBUFFER_HEIGHT= (int)36163;
	RENDERBUFFER_INTERNAL_FORMAT= (int)36164;
	RENDERBUFFER_RED_SIZE= (int)36176;
	RENDERBUFFER_GREEN_SIZE= (int)36177;
	RENDERBUFFER_BLUE_SIZE= (int)36178;
	RENDERBUFFER_ALPHA_SIZE= (int)36179;
	RENDERBUFFER_DEPTH_SIZE= (int)36180;
	RENDERBUFFER_STENCIL_SIZE= (int)36181;
	FRAMEBUFFER_ATTACHMENT_OBJECT_TYPE= (int)36048;
	FRAMEBUFFER_ATTACHMENT_OBJECT_NAME= (int)36049;
	FRAMEBUFFER_ATTACHMENT_TEXTURE_LEVEL= (int)36050;
	FRAMEBUFFER_ATTACHMENT_TEXTURE_CUBE_MAP_FACE= (int)36051;
	COLOR_ATTACHMENT0= (int)36064;
	DEPTH_ATTACHMENT= (int)36096;
	STENCIL_ATTACHMENT= (int)36128;
	DEPTH_STENCIL_ATTACHMENT= (int)33306;
	NONE= (int)0;
	FRAMEBUFFER_COMPLETE= (int)36053;
	FRAMEBUFFER_INCOMPLETE_ATTACHMENT= (int)36054;
	FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT= (int)36055;
	FRAMEBUFFER_INCOMPLETE_DIMENSIONS= (int)36057;
	FRAMEBUFFER_UNSUPPORTED= (int)36061;
	FRAMEBUFFER_BINDING= (int)36006;
	RENDERBUFFER_BINDING= (int)36007;
	MAX_RENDERBUFFER_SIZE= (int)34024;
	INVALID_FRAMEBUFFER_OPERATION= (int)1286;
	UNPACK_FLIP_Y_WEBGL= (int)37440;
	UNPACK_PREMULTIPLY_ALPHA_WEBGL= (int)37441;
	CONTEXT_LOST_WEBGL= (int)37442;
	UNPACK_COLORSPACE_CONVERSION_WEBGL= (int)37443;
	BROWSER_DEFAULT_WEBGL= (int)37444;
	snow_gl_active_texture= ::snow::platform::native::render::opengl::GL_obj::load(HX_CSTRING("snow_gl_active_texture"),(int)1);
	snow_gl_attach_shader= ::snow::platform::native::render::opengl::GL_obj::load(HX_CSTRING("snow_gl_attach_shader"),(int)2);
	snow_gl_bind_attrib_location= ::snow::platform::native::render::opengl::GL_obj::load(HX_CSTRING("snow_gl_bind_attrib_location"),(int)3);
	snow_gl_bind_buffer= ::snow::platform::native::render::opengl::GL_obj::load(HX_CSTRING("snow_gl_bind_buffer"),(int)2);
	snow_gl_bind_framebuffer= ::snow::platform::native::render::opengl::GL_obj::load(HX_CSTRING("snow_gl_bind_framebuffer"),(int)2);
	snow_gl_bind_renderbuffer= ::snow::platform::native::render::opengl::GL_obj::load(HX_CSTRING("snow_gl_bind_renderbuffer"),(int)2);
	snow_gl_bind_texture= ::snow::platform::native::render::opengl::GL_obj::load(HX_CSTRING("snow_gl_bind_texture"),(int)2);
	snow_gl_blend_color= ::snow::platform::native::render::opengl::GL_obj::load(HX_CSTRING("snow_gl_blend_color"),(int)4);
	snow_gl_blend_equation= ::snow::platform::native::render::opengl::GL_obj::load(HX_CSTRING("snow_gl_blend_equation"),(int)1);
	snow_gl_blend_equation_separate= ::snow::platform::native::render::opengl::GL_obj::load(HX_CSTRING("snow_gl_blend_equation_separate"),(int)2);
	snow_gl_blend_func= ::snow::platform::native::render::opengl::GL_obj::load(HX_CSTRING("snow_gl_blend_func"),(int)2);
	snow_gl_blend_func_separate= ::snow::platform::native::render::opengl::GL_obj::load(HX_CSTRING("snow_gl_blend_func_separate"),(int)4);
	snow_gl_buffer_data= ::snow::platform::native::render::opengl::GL_obj::load(HX_CSTRING("snow_gl_buffer_data"),(int)5);
	snow_gl_buffer_sub_data= ::snow::platform::native::render::opengl::GL_obj::load(HX_CSTRING("snow_gl_buffer_sub_data"),(int)5);
	snow_gl_check_framebuffer_status= ::snow::platform::native::render::opengl::GL_obj::load(HX_CSTRING("snow_gl_check_framebuffer_status"),(int)1);
	snow_gl_clear= ::snow::platform::native::render::opengl::GL_obj::load(HX_CSTRING("snow_gl_clear"),(int)1);
	snow_gl_clear_color= ::snow::platform::native::render::opengl::GL_obj::load(HX_CSTRING("snow_gl_clear_color"),(int)4);
	snow_gl_clear_depth= ::snow::platform::native::render::opengl::GL_obj::load(HX_CSTRING("snow_gl_clear_depth"),(int)1);
	snow_gl_clear_stencil= ::snow::platform::native::render::opengl::GL_obj::load(HX_CSTRING("snow_gl_clear_stencil"),(int)1);
	snow_gl_color_mask= ::snow::platform::native::render::opengl::GL_obj::load(HX_CSTRING("snow_gl_color_mask"),(int)4);
	snow_gl_compile_shader= ::snow::platform::native::render::opengl::GL_obj::load(HX_CSTRING("snow_gl_compile_shader"),(int)1);
	snow_gl_compressed_tex_image_2d= ::snow::platform::native::render::opengl::GL_obj::load(HX_CSTRING("snow_gl_compressed_tex_image_2d"),(int)-1);
	snow_gl_compressed_tex_sub_image_2d= ::snow::platform::native::render::opengl::GL_obj::load(HX_CSTRING("snow_gl_compressed_tex_sub_image_2d"),(int)-1);
	snow_gl_copy_tex_image_2d= ::snow::platform::native::render::opengl::GL_obj::load(HX_CSTRING("snow_gl_copy_tex_image_2d"),(int)-1);
	snow_gl_copy_tex_sub_image_2d= ::snow::platform::native::render::opengl::GL_obj::load(HX_CSTRING("snow_gl_copy_tex_sub_image_2d"),(int)-1);
	snow_gl_create_buffer= ::snow::platform::native::render::opengl::GL_obj::load(HX_CSTRING("snow_gl_create_buffer"),(int)0);
	snow_gl_create_framebuffer= ::snow::platform::native::render::opengl::GL_obj::load(HX_CSTRING("snow_gl_create_framebuffer"),(int)0);
	snow_gl_create_program= ::snow::platform::native::render::opengl::GL_obj::load(HX_CSTRING("snow_gl_create_program"),(int)0);
	snow_gl_create_render_buffer= ::snow::platform::native::render::opengl::GL_obj::load(HX_CSTRING("snow_gl_create_render_buffer"),(int)0);
	snow_gl_create_shader= ::snow::platform::native::render::opengl::GL_obj::load(HX_CSTRING("snow_gl_create_shader"),(int)1);
	snow_gl_create_texture= ::snow::platform::native::render::opengl::GL_obj::load(HX_CSTRING("snow_gl_create_texture"),(int)0);
	snow_gl_cull_face= ::snow::platform::native::render::opengl::GL_obj::load(HX_CSTRING("snow_gl_cull_face"),(int)1);
	snow_gl_delete_buffer= ::snow::platform::native::render::opengl::GL_obj::load(HX_CSTRING("snow_gl_delete_buffer"),(int)1);
	snow_gl_delete_framebuffer= ::snow::platform::native::render::opengl::GL_obj::load(HX_CSTRING("snow_gl_delete_framebuffer"),(int)1);
	snow_gl_delete_program= ::snow::platform::native::render::opengl::GL_obj::load(HX_CSTRING("snow_gl_delete_program"),(int)1);
	snow_gl_delete_render_buffer= ::snow::platform::native::render::opengl::GL_obj::load(HX_CSTRING("snow_gl_delete_render_buffer"),(int)1);
	snow_gl_delete_shader= ::snow::platform::native::render::opengl::GL_obj::load(HX_CSTRING("snow_gl_delete_shader"),(int)1);
	snow_gl_delete_texture= ::snow::platform::native::render::opengl::GL_obj::load(HX_CSTRING("snow_gl_delete_texture"),(int)1);
	snow_gl_depth_func= ::snow::platform::native::render::opengl::GL_obj::load(HX_CSTRING("snow_gl_depth_func"),(int)1);
	snow_gl_depth_mask= ::snow::platform::native::render::opengl::GL_obj::load(HX_CSTRING("snow_gl_depth_mask"),(int)1);
	snow_gl_depth_range= ::snow::platform::native::render::opengl::GL_obj::load(HX_CSTRING("snow_gl_depth_range"),(int)2);
	snow_gl_detach_shader= ::snow::platform::native::render::opengl::GL_obj::load(HX_CSTRING("snow_gl_detach_shader"),(int)2);
	snow_gl_disable= ::snow::platform::native::render::opengl::GL_obj::load(HX_CSTRING("snow_gl_disable"),(int)1);
	snow_gl_disable_vertex_attrib_array= ::snow::platform::native::render::opengl::GL_obj::load(HX_CSTRING("snow_gl_disable_vertex_attrib_array"),(int)1);
	snow_gl_draw_arrays= ::snow::platform::native::render::opengl::GL_obj::load(HX_CSTRING("snow_gl_draw_arrays"),(int)3);
	snow_gl_draw_elements= ::snow::platform::native::render::opengl::GL_obj::load(HX_CSTRING("snow_gl_draw_elements"),(int)4);
	snow_gl_enable= ::snow::platform::native::render::opengl::GL_obj::load(HX_CSTRING("snow_gl_enable"),(int)1);
	snow_gl_enable_vertex_attrib_array= ::snow::platform::native::render::opengl::GL_obj::load(HX_CSTRING("snow_gl_enable_vertex_attrib_array"),(int)1);
	snow_gl_finish= ::snow::platform::native::render::opengl::GL_obj::load(HX_CSTRING("snow_gl_finish"),(int)0);
	snow_gl_flush= ::snow::platform::native::render::opengl::GL_obj::load(HX_CSTRING("snow_gl_flush"),(int)0);
	snow_gl_framebuffer_renderbuffer= ::snow::platform::native::render::opengl::GL_obj::load(HX_CSTRING("snow_gl_framebuffer_renderbuffer"),(int)4);
	snow_gl_framebuffer_texture2D= ::snow::platform::native::render::opengl::GL_obj::load(HX_CSTRING("snow_gl_framebuffer_texture2D"),(int)5);
	snow_gl_front_face= ::snow::platform::native::render::opengl::GL_obj::load(HX_CSTRING("snow_gl_front_face"),(int)1);
	snow_gl_generate_mipmap= ::snow::platform::native::render::opengl::GL_obj::load(HX_CSTRING("snow_gl_generate_mipmap"),(int)1);
	snow_gl_get_active_attrib= ::snow::platform::native::render::opengl::GL_obj::load(HX_CSTRING("snow_gl_get_active_attrib"),(int)2);
	snow_gl_get_active_uniform= ::snow::platform::native::render::opengl::GL_obj::load(HX_CSTRING("snow_gl_get_active_uniform"),(int)2);
	snow_gl_get_attrib_location= ::snow::platform::native::render::opengl::GL_obj::load(HX_CSTRING("snow_gl_get_attrib_location"),(int)2);
	snow_gl_get_buffer_paramerter= ::snow::platform::native::render::opengl::GL_obj::load(HX_CSTRING("snow_gl_get_buffer_paramerter"),(int)2);
	snow_gl_get_context_attributes= ::snow::platform::native::render::opengl::GL_obj::load(HX_CSTRING("snow_gl_get_context_attributes"),(int)0);
	snow_gl_get_error= ::snow::platform::native::render::opengl::GL_obj::load(HX_CSTRING("snow_gl_get_error"),(int)0);
	snow_gl_get_framebuffer_attachment_parameter= ::snow::platform::native::render::opengl::GL_obj::load(HX_CSTRING("snow_gl_get_framebuffer_attachment_parameter"),(int)3);
	snow_gl_get_parameter= ::snow::platform::native::render::opengl::GL_obj::load(HX_CSTRING("snow_gl_get_parameter"),(int)1);
	snow_gl_get_program_info_log= ::snow::platform::native::render::opengl::GL_obj::load(HX_CSTRING("snow_gl_get_program_info_log"),(int)1);
	snow_gl_get_program_parameter= ::snow::platform::native::render::opengl::GL_obj::load(HX_CSTRING("snow_gl_get_program_parameter"),(int)2);
	snow_gl_get_render_buffer_parameter= ::snow::platform::native::render::opengl::GL_obj::load(HX_CSTRING("snow_gl_get_render_buffer_parameter"),(int)2);
	snow_gl_get_shader_info_log= ::snow::platform::native::render::opengl::GL_obj::load(HX_CSTRING("snow_gl_get_shader_info_log"),(int)1);
	snow_gl_get_shader_parameter= ::snow::platform::native::render::opengl::GL_obj::load(HX_CSTRING("snow_gl_get_shader_parameter"),(int)2);
	snow_gl_get_shader_precision_format= ::snow::platform::native::render::opengl::GL_obj::load(HX_CSTRING("snow_gl_get_shader_precision_format"),(int)2);
	snow_gl_get_shader_source= ::snow::platform::native::render::opengl::GL_obj::load(HX_CSTRING("snow_gl_get_shader_source"),(int)1);
	snow_gl_get_supported_extensions= ::snow::platform::native::render::opengl::GL_obj::load(HX_CSTRING("snow_gl_get_supported_extensions"),(int)1);
	snow_gl_get_tex_parameter= ::snow::platform::native::render::opengl::GL_obj::load(HX_CSTRING("snow_gl_get_tex_parameter"),(int)2);
	snow_gl_get_uniform= ::snow::platform::native::render::opengl::GL_obj::load(HX_CSTRING("snow_gl_get_uniform"),(int)2);
	snow_gl_get_uniform_location= ::snow::platform::native::render::opengl::GL_obj::load(HX_CSTRING("snow_gl_get_uniform_location"),(int)2);
	snow_gl_get_vertex_attrib= ::snow::platform::native::render::opengl::GL_obj::load(HX_CSTRING("snow_gl_get_vertex_attrib"),(int)2);
	snow_gl_get_vertex_attrib_offset= ::snow::platform::native::render::opengl::GL_obj::load(HX_CSTRING("snow_gl_get_vertex_attrib_offset"),(int)2);
	snow_gl_hint= ::snow::platform::native::render::opengl::GL_obj::load(HX_CSTRING("snow_gl_hint"),(int)2);
	snow_gl_is_buffer= ::snow::platform::native::render::opengl::GL_obj::load(HX_CSTRING("snow_gl_is_buffer"),(int)1);
	snow_gl_is_enabled= ::snow::platform::native::render::opengl::GL_obj::load(HX_CSTRING("snow_gl_is_enabled"),(int)1);
	snow_gl_is_framebuffer= ::snow::platform::native::render::opengl::GL_obj::load(HX_CSTRING("snow_gl_is_framebuffer"),(int)1);
	snow_gl_is_program= ::snow::platform::native::render::opengl::GL_obj::load(HX_CSTRING("snow_gl_is_program"),(int)1);
	snow_gl_is_renderbuffer= ::snow::platform::native::render::opengl::GL_obj::load(HX_CSTRING("snow_gl_is_renderbuffer"),(int)1);
	snow_gl_is_shader= ::snow::platform::native::render::opengl::GL_obj::load(HX_CSTRING("snow_gl_is_shader"),(int)1);
	snow_gl_is_texture= ::snow::platform::native::render::opengl::GL_obj::load(HX_CSTRING("snow_gl_is_texture"),(int)1);
	snow_gl_line_width= ::snow::platform::native::render::opengl::GL_obj::load(HX_CSTRING("snow_gl_line_width"),(int)1);
	snow_gl_link_program= ::snow::platform::native::render::opengl::GL_obj::load(HX_CSTRING("snow_gl_link_program"),(int)1);
	snow_gl_pixel_storei= ::snow::platform::native::render::opengl::GL_obj::load(HX_CSTRING("snow_gl_pixel_storei"),(int)2);
	snow_gl_polygon_offset= ::snow::platform::native::render::opengl::GL_obj::load(HX_CSTRING("snow_gl_polygon_offset"),(int)2);
	snow_gl_read_pixels= ::snow::platform::native::render::opengl::GL_obj::load(HX_CSTRING("snow_gl_read_pixels"),(int)-1);
	snow_gl_renderbuffer_storage= ::snow::platform::native::render::opengl::GL_obj::load(HX_CSTRING("snow_gl_renderbuffer_storage"),(int)4);
	snow_gl_sample_coverage= ::snow::platform::native::render::opengl::GL_obj::load(HX_CSTRING("snow_gl_sample_coverage"),(int)2);
	snow_gl_scissor= ::snow::platform::native::render::opengl::GL_obj::load(HX_CSTRING("snow_gl_scissor"),(int)4);
	snow_gl_shader_source= ::snow::platform::native::render::opengl::GL_obj::load(HX_CSTRING("snow_gl_shader_source"),(int)2);
	snow_gl_stencil_func= ::snow::platform::native::render::opengl::GL_obj::load(HX_CSTRING("snow_gl_stencil_func"),(int)3);
	snow_gl_stencil_func_separate= ::snow::platform::native::render::opengl::GL_obj::load(HX_CSTRING("snow_gl_stencil_func_separate"),(int)4);
	snow_gl_stencil_mask= ::snow::platform::native::render::opengl::GL_obj::load(HX_CSTRING("snow_gl_stencil_mask"),(int)1);
	snow_gl_stencil_mask_separate= ::snow::platform::native::render::opengl::GL_obj::load(HX_CSTRING("snow_gl_stencil_mask_separate"),(int)2);
	snow_gl_stencil_op= ::snow::platform::native::render::opengl::GL_obj::load(HX_CSTRING("snow_gl_stencil_op"),(int)3);
	snow_gl_stencil_op_separate= ::snow::platform::native::render::opengl::GL_obj::load(HX_CSTRING("snow_gl_stencil_op_separate"),(int)4);
	snow_gl_tex_image_2d= ::snow::platform::native::render::opengl::GL_obj::load(HX_CSTRING("snow_gl_tex_image_2d"),(int)-1);
	snow_gl_tex_parameterf= ::snow::platform::native::render::opengl::GL_obj::load(HX_CSTRING("snow_gl_tex_parameterf"),(int)3);
	snow_gl_tex_parameteri= ::snow::platform::native::render::opengl::GL_obj::load(HX_CSTRING("snow_gl_tex_parameteri"),(int)3);
	snow_gl_tex_sub_image_2d= ::snow::platform::native::render::opengl::GL_obj::load(HX_CSTRING("snow_gl_tex_sub_image_2d"),(int)-1);
	snow_gl_uniform1f= ::snow::platform::native::render::opengl::GL_obj::load(HX_CSTRING("snow_gl_uniform1f"),(int)2);
	snow_gl_uniform1fv= ::snow::platform::native::render::opengl::GL_obj::load(HX_CSTRING("snow_gl_uniform1fv"),(int)2);
	snow_gl_uniform1i= ::snow::platform::native::render::opengl::GL_obj::load(HX_CSTRING("snow_gl_uniform1i"),(int)2);
	snow_gl_uniform1iv= ::snow::platform::native::render::opengl::GL_obj::load(HX_CSTRING("snow_gl_uniform1iv"),(int)2);
	snow_gl_uniform2f= ::snow::platform::native::render::opengl::GL_obj::load(HX_CSTRING("snow_gl_uniform2f"),(int)3);
	snow_gl_uniform2fv= ::snow::platform::native::render::opengl::GL_obj::load(HX_CSTRING("snow_gl_uniform2fv"),(int)2);
	snow_gl_uniform2i= ::snow::platform::native::render::opengl::GL_obj::load(HX_CSTRING("snow_gl_uniform2i"),(int)3);
	snow_gl_uniform2iv= ::snow::platform::native::render::opengl::GL_obj::load(HX_CSTRING("snow_gl_uniform2iv"),(int)2);
	snow_gl_uniform3f= ::snow::platform::native::render::opengl::GL_obj::load(HX_CSTRING("snow_gl_uniform3f"),(int)4);
	snow_gl_uniform3fv= ::snow::platform::native::render::opengl::GL_obj::load(HX_CSTRING("snow_gl_uniform3fv"),(int)2);
	snow_gl_uniform3i= ::snow::platform::native::render::opengl::GL_obj::load(HX_CSTRING("snow_gl_uniform3i"),(int)4);
	snow_gl_uniform3iv= ::snow::platform::native::render::opengl::GL_obj::load(HX_CSTRING("snow_gl_uniform3iv"),(int)2);
	snow_gl_uniform4f= ::snow::platform::native::render::opengl::GL_obj::load(HX_CSTRING("snow_gl_uniform4f"),(int)5);
	snow_gl_uniform4fv= ::snow::platform::native::render::opengl::GL_obj::load(HX_CSTRING("snow_gl_uniform4fv"),(int)2);
	snow_gl_uniform4i= ::snow::platform::native::render::opengl::GL_obj::load(HX_CSTRING("snow_gl_uniform4i"),(int)5);
	snow_gl_uniform4iv= ::snow::platform::native::render::opengl::GL_obj::load(HX_CSTRING("snow_gl_uniform4iv"),(int)2);
	snow_gl_uniform_matrix= ::snow::platform::native::render::opengl::GL_obj::load(HX_CSTRING("snow_gl_uniform_matrix"),(int)4);
	snow_gl_use_program= ::snow::platform::native::render::opengl::GL_obj::load(HX_CSTRING("snow_gl_use_program"),(int)1);
	snow_gl_validate_program= ::snow::platform::native::render::opengl::GL_obj::load(HX_CSTRING("snow_gl_validate_program"),(int)1);
	snow_gl_version= ::snow::platform::native::render::opengl::GL_obj::load(HX_CSTRING("snow_gl_version"),(int)0);
	snow_gl_vertex_attrib1f= ::snow::platform::native::render::opengl::GL_obj::load(HX_CSTRING("snow_gl_vertex_attrib1f"),(int)2);
	snow_gl_vertex_attrib1fv= ::snow::platform::native::render::opengl::GL_obj::load(HX_CSTRING("snow_gl_vertex_attrib1fv"),(int)2);
	snow_gl_vertex_attrib2f= ::snow::platform::native::render::opengl::GL_obj::load(HX_CSTRING("snow_gl_vertex_attrib2f"),(int)3);
	snow_gl_vertex_attrib2fv= ::snow::platform::native::render::opengl::GL_obj::load(HX_CSTRING("snow_gl_vertex_attrib2fv"),(int)2);
	snow_gl_vertex_attrib3f= ::snow::platform::native::render::opengl::GL_obj::load(HX_CSTRING("snow_gl_vertex_attrib3f"),(int)4);
	snow_gl_vertex_attrib3fv= ::snow::platform::native::render::opengl::GL_obj::load(HX_CSTRING("snow_gl_vertex_attrib3fv"),(int)2);
	snow_gl_vertex_attrib4f= ::snow::platform::native::render::opengl::GL_obj::load(HX_CSTRING("snow_gl_vertex_attrib4f"),(int)5);
	snow_gl_vertex_attrib4fv= ::snow::platform::native::render::opengl::GL_obj::load(HX_CSTRING("snow_gl_vertex_attrib4fv"),(int)2);
	snow_gl_vertex_attrib_pointer= ::snow::platform::native::render::opengl::GL_obj::load(HX_CSTRING("snow_gl_vertex_attrib_pointer"),(int)-1);
	snow_gl_viewport= ::snow::platform::native::render::opengl::GL_obj::load(HX_CSTRING("snow_gl_viewport"),(int)4);
}

} // end namespace snow
} // end namespace platform
} // end namespace native
} // end namespace render
} // end namespace opengl
