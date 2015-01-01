#ifndef INCLUDED_phoenix_RenderTexture
#define INCLUDED_phoenix_RenderTexture

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <phoenix/Texture.h>
HX_DECLARE_CLASS2(luxe,resource,Resource)
HX_DECLARE_CLASS2(luxe,resource,ResourceManager)
HX_DECLARE_CLASS1(phoenix,RenderTexture)
HX_DECLARE_CLASS1(phoenix,Texture)
HX_DECLARE_CLASS1(phoenix,Vector)
HX_DECLARE_CLASS5(snow,platform,native,render,opengl,GLFBO)
HX_DECLARE_CLASS5(snow,platform,native,render,opengl,GLObject)
HX_DECLARE_CLASS5(snow,platform,native,render,opengl,GLRBO)
namespace phoenix{


class HXCPP_CLASS_ATTRIBUTES  RenderTexture_obj : public ::phoenix::Texture_obj{
	public:
		typedef ::phoenix::Texture_obj super;
		typedef RenderTexture_obj OBJ_;
		RenderTexture_obj();
		Void __construct(::luxe::resource::ResourceManager _manager,::phoenix::Vector _size);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< RenderTexture_obj > __new(::luxe::resource::ResourceManager _manager,::phoenix::Vector _size);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~RenderTexture_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("RenderTexture"); }

		::snow::platform::native::render::opengl::GLFBO fbo;
		::snow::platform::native::render::opengl::GLRBO renderbuffer;
		virtual Void destroy( );

		virtual Void bindBuffer( );
		Dynamic bindBuffer_dyn();

		virtual Void unbindBuffer( ::snow::platform::native::render::opengl::GLFBO _other);
		Dynamic unbindBuffer_dyn();

		virtual Void bindRenderBuffer( );
		Dynamic bindRenderBuffer_dyn();

		virtual Void unbindRenderBuffer( ::snow::platform::native::render::opengl::GLRBO _other);
		Dynamic unbindRenderBuffer_dyn();

};

} // end namespace phoenix

#endif /* INCLUDED_phoenix_RenderTexture */ 
