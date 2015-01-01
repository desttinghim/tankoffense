#ifndef INCLUDED_phoenix_BatchState
#define INCLUDED_phoenix_BatchState

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(luxe,resource,Resource)
HX_DECLARE_CLASS1(phoenix,BatchState)
HX_DECLARE_CLASS1(phoenix,Batcher)
HX_DECLARE_CLASS1(phoenix,Rectangle)
HX_DECLARE_CLASS1(phoenix,Shader)
HX_DECLARE_CLASS2(phoenix,geometry,Geometry)
HX_DECLARE_CLASS2(phoenix,geometry,GeometryState)
namespace phoenix{


class HXCPP_CLASS_ATTRIBUTES  BatchState_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef BatchState_obj OBJ_;
		BatchState_obj();
		Void __construct(::phoenix::Batcher _r);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< BatchState_obj > __new(::phoenix::Batcher _r);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~BatchState_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("BatchState"); }

		::phoenix::Batcher batcher;
		::phoenix::geometry::GeometryState geom_state;
		::phoenix::geometry::GeometryState last_geom_state;
		Dynamic last_texture_id;
		Dynamic last_shader_id;
		int last_group;
		bool is_clipping;
		::phoenix::Rectangle clip_rect;
		::phoenix::Rectangle last_clip_rect;
		bool log;
		virtual ::phoenix::Shader active_shader( );
		Dynamic active_shader_dyn();

		virtual Void activate( ::phoenix::Batcher batcher);
		Dynamic activate_dyn();

		virtual Void deactivate( ::phoenix::Batcher batcher);
		Dynamic deactivate_dyn();

		virtual bool update( ::phoenix::geometry::Geometry geom);
		Dynamic update_dyn();

		virtual Void str( );
		Dynamic str_dyn();

};

} // end namespace phoenix

#endif /* INCLUDED_phoenix_BatchState */ 
