#ifndef INCLUDED_phoenix_Shader
#define INCLUDED_phoenix_Shader

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <luxe/resource/Resource.h>
HX_DECLARE_CLASS0(IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS2(luxe,resource,Resource)
HX_DECLARE_CLASS2(luxe,resource,ResourceManager)
HX_DECLARE_CLASS1(phoenix,Color)
HX_DECLARE_CLASS1(phoenix,Shader)
HX_DECLARE_CLASS1(phoenix,Texture)
HX_DECLARE_CLASS1(phoenix,Vector)
HX_DECLARE_CLASS5(snow,platform,native,render,opengl,GLObject)
HX_DECLARE_CLASS5(snow,platform,native,render,opengl,GLProgram)
HX_DECLARE_CLASS5(snow,platform,native,render,opengl,GLShader)
namespace phoenix{


class HXCPP_CLASS_ATTRIBUTES  Shader_obj : public ::luxe::resource::Resource_obj{
	public:
		typedef ::luxe::resource::Resource_obj super;
		typedef Shader_obj OBJ_;
		Shader_obj();
		Void __construct(::luxe::resource::ResourceManager _manager);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Shader_obj > __new(::luxe::resource::ResourceManager _manager);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Shader_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Shader"); }

		::String errors;
		::String log;
		::String vertex_source;
		::String frag_source;
		::String vertex_source_name;
		::String frag_source_name;
		::snow::platform::native::render::opengl::GLShader vert_shader;
		::snow::platform::native::render::opengl::GLShader frag_shader;
		::snow::platform::native::render::opengl::GLProgram program;
		::snow::platform::native::render::opengl::GLShader shader;
		int vert_attribute;
		int tcoord_attribute;
		int color_attribute;
		int normal_attribute;
		int projectionmatrix_attribute;
		int modelviewmatrix_attribute;
		int tex0_attribute;
		int tex1_attribute;
		int tex2_attribute;
		int tex3_attribute;
		int tex4_attribute;
		int tex5_attribute;
		int tex6_attribute;
		int tex7_attribute;
		::haxe::ds::StringMap uniforms;
		::haxe::ds::StringMap uniform_textures;
		virtual Void activate( );
		Dynamic activate_dyn();

		virtual Void deactivate( );
		Dynamic deactivate_dyn();

		virtual ::phoenix::Shader clone( );
		Dynamic clone_dyn();

		virtual Void set_int( ::String _name,int _value);
		Dynamic set_int_dyn();

		virtual Void set_float( ::String _name,Float _value);
		Dynamic set_float_dyn();

		virtual Void set_vector2( ::String _name,::phoenix::Vector _value);
		Dynamic set_vector2_dyn();

		virtual Void set_vector3( ::String _name,::phoenix::Vector _value);
		Dynamic set_vector3_dyn();

		virtual Void set_vector4( ::String _name,::phoenix::Vector _value);
		Dynamic set_vector4_dyn();

		virtual Void set_color( ::String _name,::phoenix::Color _value);
		Dynamic set_color_dyn();

		virtual Void set_texture( ::String _name,::phoenix::Texture _value);
		Dynamic set_texture_dyn();

		virtual ::snow::platform::native::render::opengl::GLShader compile( int _type,::String _source,hx::Null< bool >  _verbose);
		Dynamic compile_dyn();

		virtual Void link( );
		Dynamic link_dyn();

		virtual Void drop( );

		virtual Void destroy( );
		Dynamic destroy_dyn();

		virtual bool from_string( ::String _vertex_source,::String _fragment_source,::String _vertex_name,::String _frag_name,hx::Null< bool >  _verbose);
		Dynamic from_string_dyn();

		virtual ::String toString( );
		Dynamic toString_dyn();

		virtual Void apply_uniforms( );
		Dynamic apply_uniforms_dyn();

		virtual int location( ::String _name);
		Dynamic location_dyn();

		virtual Void apply_int( int _location,int _int);
		Dynamic apply_int_dyn();

		virtual Void apply_float( int _location,Float _float);
		Dynamic apply_float_dyn();

		virtual Void apply_vec2( int _location,::phoenix::Vector _vec);
		Dynamic apply_vec2_dyn();

		virtual Void apply_vec3( int _location,::phoenix::Vector _vec);
		Dynamic apply_vec3_dyn();

		virtual Void apply_vec4( int _location,::phoenix::Vector _vec);
		Dynamic apply_vec4_dyn();

		virtual Void apply_color( int _location,::phoenix::Color _color);
		Dynamic apply_color_dyn();

		virtual Void apply_texture( int _location,::phoenix::Texture _tex);
		Dynamic apply_texture_dyn();

		virtual Void add_log( ::String _log);
		Dynamic add_log_dyn();

		virtual Void add_error( ::String _error);
		Dynamic add_error_dyn();

		static ::phoenix::Shader load( ::String _psid,::String _vsid,Dynamic _onloaded,Dynamic _silent);
		static Dynamic load_dyn();

};

} // end namespace phoenix

#endif /* INCLUDED_phoenix_Shader */ 
