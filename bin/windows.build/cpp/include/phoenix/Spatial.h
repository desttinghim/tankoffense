#ifndef INCLUDED_phoenix_Spatial
#define INCLUDED_phoenix_Spatial

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(phoenix,Matrix)
HX_DECLARE_CLASS1(phoenix,Quaternion)
HX_DECLARE_CLASS1(phoenix,Spatial)
HX_DECLARE_CLASS1(phoenix,Vector)
HX_DECLARE_CLASS4(snow,platform,native,utils,ArrayBufferView)
HX_DECLARE_CLASS4(snow,platform,native,utils,Float32Array)
HX_DECLARE_CLASS2(snow,utils,IMemoryRange)
namespace phoenix{


class HXCPP_CLASS_ATTRIBUTES  Spatial_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Spatial_obj OBJ_;
		Spatial_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Spatial_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Spatial_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Spatial"); }

		::phoenix::Vector pos;
		::phoenix::Quaternion rotation;
		::phoenix::Vector scale;
		::phoenix::Matrix matrix;
		::snow::platform::native::utils::Float32Array floats;
		bool ignore_listeners;
		bool auto_decompose;
		Dynamic pos_changed;
		Dynamic &pos_changed_dyn() { return pos_changed;}
		Dynamic rotation_changed;
		Dynamic &rotation_changed_dyn() { return rotation_changed;}
		Dynamic scale_changed;
		Dynamic &scale_changed_dyn() { return scale_changed;}
		bool _setup;
		virtual Void destroy( );
		Dynamic destroy_dyn();

		virtual ::phoenix::Spatial decompose( hx::Null< bool >  _force);
		Dynamic decompose_dyn();

		virtual ::phoenix::Matrix get_matrix( );
		Dynamic get_matrix_dyn();

		virtual ::phoenix::Matrix set_matrix( ::phoenix::Matrix _m);
		Dynamic set_matrix_dyn();

		virtual Void propagate_pos( ::phoenix::Vector _p);
		Dynamic propagate_pos_dyn();

		virtual Void propagate_rotation( ::phoenix::Quaternion _r);
		Dynamic propagate_rotation_dyn();

		virtual Void propagate_scale( ::phoenix::Vector _s);
		Dynamic propagate_scale_dyn();

		virtual ::phoenix::Vector set_pos( ::phoenix::Vector _p);
		Dynamic set_pos_dyn();

		virtual ::phoenix::Quaternion set_rotation( ::phoenix::Quaternion _r);
		Dynamic set_rotation_dyn();

		virtual ::phoenix::Vector set_scale( ::phoenix::Vector _s);
		Dynamic set_scale_dyn();

		virtual Void _pos_change( Float _v);
		Dynamic _pos_change_dyn();

		virtual Void _scale_change( Float _v);
		Dynamic _scale_change_dyn();

		virtual Void _rotation_change( Float _v);
		Dynamic _rotation_change_dyn();

};

} // end namespace phoenix

#endif /* INCLUDED_phoenix_Spatial */ 
