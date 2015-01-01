#ifndef INCLUDED_phoenix_Renderer
#define INCLUDED_phoenix_Renderer

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(luxe,Core)
HX_DECLARE_CLASS2(luxe,resource,Resource)
HX_DECLARE_CLASS1(phoenix,Batcher)
HX_DECLARE_CLASS1(phoenix,BitmapFont)
HX_DECLARE_CLASS1(phoenix,Camera)
HX_DECLARE_CLASS1(phoenix,Color)
HX_DECLARE_CLASS1(phoenix,RenderPath)
HX_DECLARE_CLASS1(phoenix,RenderState)
HX_DECLARE_CLASS1(phoenix,RenderTexture)
HX_DECLARE_CLASS1(phoenix,Renderer)
HX_DECLARE_CLASS1(phoenix,RendererStats)
HX_DECLARE_CLASS1(phoenix,Texture)
HX_DECLARE_CLASS1(phoenix,Vector)
HX_DECLARE_CLASS1(snow,App)
HX_DECLARE_CLASS5(snow,platform,native,render,opengl,GLFBO)
HX_DECLARE_CLASS5(snow,platform,native,render,opengl,GLObject)
HX_DECLARE_CLASS5(snow,platform,native,render,opengl,GLRBO)
namespace phoenix{


class HXCPP_CLASS_ATTRIBUTES  Renderer_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Renderer_obj OBJ_;
		Renderer_obj();
		Void __construct(::luxe::Core _core);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Renderer_obj > __new(::luxe::Core _core);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Renderer_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Renderer"); }

		Array< ::Dynamic > batchers;
		::luxe::Core core;
		::phoenix::RenderState state;
		::snow::platform::native::render::opengl::GLFBO default_fbo;
		::snow::platform::native::render::opengl::GLRBO default_rbo;
		Dynamic shaders;
		::phoenix::Batcher batcher;
		::phoenix::Camera camera;
		::phoenix::BitmapFont font;
		::phoenix::RenderPath render_path;
		::phoenix::RenderPath default_render_path;
		bool vsync;
		::phoenix::RenderTexture target;
		::phoenix::Vector target_size;
		bool should_clear;
		bool stop;
		int stop_count;
		::phoenix::Color clear_color;
		::phoenix::RendererStats stats;
		virtual Void init( );
		Dynamic init_dyn();

		virtual Void destroy( );
		Dynamic destroy_dyn();

		virtual int sort_batchers( ::phoenix::Batcher a,::phoenix::Batcher b);
		Dynamic sort_batchers_dyn();

		virtual Void add_batch( ::phoenix::Batcher batch);
		Dynamic add_batch_dyn();

		virtual Void remove_batch( ::phoenix::Batcher batch);
		Dynamic remove_batch_dyn();

		virtual ::phoenix::Batcher create_batcher( Dynamic options);
		Dynamic create_batcher_dyn();

		virtual Void clear( ::phoenix::Color _color);
		Dynamic clear_dyn();

		virtual Void blend_mode( Dynamic _src_mode,hx::Null< int >  _dst_mode);
		Dynamic blend_mode_dyn();

		virtual Void blend_equation( Dynamic _equation);
		Dynamic blend_equation_dyn();

		virtual Void internal_resized( int _w,int _h);
		Dynamic internal_resized_dyn();

		virtual Void process( );
		Dynamic process_dyn();

		virtual Void onresize( Dynamic e);
		Dynamic onresize_dyn();

		virtual bool set_vsync( bool _vsync);
		Dynamic set_vsync_dyn();

		virtual bool get_vsync( );
		Dynamic get_vsync_dyn();

		virtual ::phoenix::RenderTexture get_target( );
		Dynamic get_target_dyn();

		virtual ::phoenix::RenderTexture set_target( ::phoenix::RenderTexture _target);
		Dynamic set_target_dyn();

		virtual Void create_default_shaders( );
		Dynamic create_default_shaders_dyn();

		virtual Void create_default_font( );
		Dynamic create_default_font_dyn();

};

} // end namespace phoenix

#endif /* INCLUDED_phoenix_Renderer */ 
