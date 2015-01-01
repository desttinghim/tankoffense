#ifndef INCLUDED_phoenix_RenderState
#define INCLUDED_phoenix_RenderState

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(phoenix,Rectangle)
HX_DECLARE_CLASS1(phoenix,RenderState)
HX_DECLARE_CLASS1(phoenix,Renderer)
HX_DECLARE_CLASS5(snow,platform,native,render,opengl,GLFBO)
HX_DECLARE_CLASS5(snow,platform,native,render,opengl,GLObject)
HX_DECLARE_CLASS5(snow,platform,native,render,opengl,GLProgram)
HX_DECLARE_CLASS5(snow,platform,native,render,opengl,GLRBO)
HX_DECLARE_CLASS5(snow,platform,native,render,opengl,GLTexture)
namespace phoenix{


class HXCPP_CLASS_ATTRIBUTES  RenderState_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef RenderState_obj OBJ_;
		RenderState_obj();
		Void __construct(::phoenix::Renderer _renderer);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< RenderState_obj > __new(::phoenix::Renderer _renderer);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~RenderState_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("RenderState"); }

		bool cull_face;
		bool depth_test;
		bool depth_mask;
		::phoenix::Renderer renderer;
		::phoenix::Rectangle _viewport;
		virtual Void enable( int what);
		Dynamic enable_dyn();

		virtual Void disable( int what);
		Dynamic disable_dyn();

		int depth_func;
		virtual Void depth_function( int what);
		Dynamic depth_function_dyn();

		virtual Void viewport( Float x,Float y,Float w,Float h);
		Dynamic viewport_dyn();

		::snow::platform::native::render::opengl::GLFBO _current_fbo;
		virtual Void bindFramebuffer( ::snow::platform::native::render::opengl::GLFBO buffer);
		Dynamic bindFramebuffer_dyn();

		::snow::platform::native::render::opengl::GLRBO _current_rbo;
		virtual Void bindRenderbuffer( ::snow::platform::native::render::opengl::GLRBO buffer);
		Dynamic bindRenderbuffer_dyn();

		::snow::platform::native::render::opengl::GLProgram _used_program;
		virtual Void useProgram( ::snow::platform::native::render::opengl::GLProgram program);
		Dynamic useProgram_dyn();

		int _active_texture;
		virtual Void activeTexture( int val);
		Dynamic activeTexture_dyn();

		::snow::platform::native::render::opengl::GLTexture _bound_texture_2D;
		virtual Void bindTexture2D( ::snow::platform::native::render::opengl::GLTexture tex);
		Dynamic bindTexture2D_dyn();

		Float _last_line_width;
		virtual Void lineWidth( Float _width);
		Dynamic lineWidth_dyn();

		bool _last_depth_mask;
		virtual Void depthMask( bool _enable);
		Dynamic depthMask_dyn();

};

} // end namespace phoenix

#endif /* INCLUDED_phoenix_RenderState */ 
