#ifndef INCLUDED_luxe_Physics
#define INCLUDED_luxe_Physics

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(luxe,Core)
HX_DECLARE_CLASS1(luxe,Physics)
HX_DECLARE_CLASS1(luxe,PhysicsEngine)
HX_DECLARE_CLASS1(snow,App)
HX_DECLARE_CLASS2(snow,utils,Timer)
namespace luxe{


class HXCPP_CLASS_ATTRIBUTES  Physics_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Physics_obj OBJ_;
		Physics_obj();
		Void __construct(::luxe::Core _core);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Physics_obj > __new(::luxe::Core _core);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Physics_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Physics"); }

		::luxe::Core core;
		Array< ::Dynamic > engines;
		Float step_rate;
		Float step_delta;
		::snow::utils::Timer timer;
		virtual Void init( );
		Dynamic init_dyn();

		virtual Void reset( );
		Dynamic reset_dyn();

		virtual Void fixed_update( );
		Dynamic fixed_update_dyn();

		virtual Dynamic add_engine( ::Class type,Dynamic _data);
		Dynamic add_engine_dyn();

		virtual Void update( );
		Dynamic update_dyn();

		virtual Void process( );
		Dynamic process_dyn();

		virtual Void render( );
		Dynamic render_dyn();

		virtual Void destroy( );
		Dynamic destroy_dyn();

		virtual Float set_step_rate( Float _rate);
		Dynamic set_step_rate_dyn();

		static ::String tag_physics;
};

} // end namespace luxe

#endif /* INCLUDED_luxe_Physics */ 
