#ifndef INCLUDED_phoenix_Vector
#define INCLUDED_phoenix_Vector

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(phoenix,Matrix)
HX_DECLARE_CLASS1(phoenix,Quaternion)
HX_DECLARE_CLASS1(phoenix,Vector)
namespace phoenix{


class HXCPP_CLASS_ATTRIBUTES  Vector_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Vector_obj OBJ_;
		Vector_obj();
		Void __construct(hx::Null< Float >  __o__x,hx::Null< Float >  __o__y,hx::Null< Float >  __o__z,hx::Null< Float >  __o__w);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Vector_obj > __new(hx::Null< Float >  __o__x,hx::Null< Float >  __o__y,hx::Null< Float >  __o__z,hx::Null< Float >  __o__w);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Vector_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Vector"); }

		Float x;
		Float y;
		Float z;
		Float w;
		Float length;
		Float lengthsq;
		Float angle2D;
		::phoenix::Vector normalized;
		::phoenix::Vector inverted;
		bool ignore_listeners;
		Dynamic listen_x;
		Dynamic &listen_x_dyn() { return listen_x;}
		Dynamic listen_y;
		Dynamic &listen_y_dyn() { return listen_y;}
		Dynamic listen_z;
		Dynamic &listen_z_dyn() { return listen_z;}
		bool _construct;
		virtual ::phoenix::Vector copy_from( ::phoenix::Vector _other);
		Dynamic copy_from_dyn();

		virtual ::phoenix::Vector set( Float _x,Float _y,Float _z,Float _w);
		Dynamic set_dyn();

		virtual ::phoenix::Vector set_xy( Float _x,Float _y);
		Dynamic set_xy_dyn();

		virtual ::phoenix::Vector set_xyz( Float _x,Float _y,Float _z);
		Dynamic set_xyz_dyn();

		virtual ::phoenix::Vector lerp_xy( Float _dest_x,Float _dest_y,Float _t);
		Dynamic lerp_xy_dyn();

		virtual ::phoenix::Vector lerp_xyz( Float _dest_x,Float _dest_y,Float _dest_z,Float _t);
		Dynamic lerp_xyz_dyn();

		virtual ::phoenix::Vector weighted_average_xy( Float _dest_x,Float _dest_y,Float _slowness);
		Dynamic weighted_average_xy_dyn();

		virtual ::phoenix::Vector weighted_average_xyz( Float _dest_x,Float _dest_y,Float _dest_z,Float _slowness);
		Dynamic weighted_average_xyz_dyn();

		virtual ::phoenix::Vector _int( );
		Dynamic _int_dyn();

		virtual ::phoenix::Vector int_x( );
		Dynamic int_x_dyn();

		virtual ::phoenix::Vector int_y( );
		Dynamic int_y_dyn();

		virtual ::phoenix::Vector int_z( );
		Dynamic int_z_dyn();

		virtual ::String toString( );
		Dynamic toString_dyn();

		virtual bool equals( ::phoenix::Vector other);
		Dynamic equals_dyn();

		virtual ::phoenix::Vector clone( );
		Dynamic clone_dyn();

		virtual ::phoenix::Vector normalize( );
		Dynamic normalize_dyn();

		virtual Float dot( ::phoenix::Vector other);
		Dynamic dot_dyn();

		virtual ::phoenix::Vector cross( ::phoenix::Vector a,::phoenix::Vector b);
		Dynamic cross_dyn();

		virtual ::phoenix::Vector invert( );
		Dynamic invert_dyn();

		virtual ::phoenix::Vector add( ::phoenix::Vector other);
		Dynamic add_dyn();

		virtual ::phoenix::Vector add_xyz( hx::Null< Float >  _x,hx::Null< Float >  _y,hx::Null< Float >  _z);
		Dynamic add_xyz_dyn();

		virtual ::phoenix::Vector subtract( ::phoenix::Vector other);
		Dynamic subtract_dyn();

		virtual ::phoenix::Vector subtract_xyz( hx::Null< Float >  _x,hx::Null< Float >  _y,hx::Null< Float >  _z);
		Dynamic subtract_xyz_dyn();

		virtual ::phoenix::Vector multiply( ::phoenix::Vector other);
		Dynamic multiply_dyn();

		virtual ::phoenix::Vector multiply_xyz( hx::Null< Float >  _x,hx::Null< Float >  _y,hx::Null< Float >  _z);
		Dynamic multiply_xyz_dyn();

		virtual ::phoenix::Vector divide( ::phoenix::Vector other);
		Dynamic divide_dyn();

		virtual ::phoenix::Vector divide_xyz( hx::Null< Float >  _x,hx::Null< Float >  _y,hx::Null< Float >  _z);
		Dynamic divide_xyz_dyn();

		virtual ::phoenix::Vector addScalar( Float v);
		Dynamic addScalar_dyn();

		virtual ::phoenix::Vector subtractScalar( Float v);
		Dynamic subtractScalar_dyn();

		virtual ::phoenix::Vector multiplyScalar( Float v);
		Dynamic multiplyScalar_dyn();

		virtual ::phoenix::Vector divideScalar( Float v);
		Dynamic divideScalar_dyn();

		virtual Float set_length( Float value);
		Dynamic set_length_dyn();

		virtual Float get_length( );
		Dynamic get_length_dyn();

		virtual Float get_lengthsq( );
		Dynamic get_lengthsq_dyn();

		virtual ::phoenix::Vector get_normalized( );
		Dynamic get_normalized_dyn();

		virtual Float set_x( Float _x);
		Dynamic set_x_dyn();

		virtual Float set_y( Float _y);
		Dynamic set_y_dyn();

		virtual Float set_z( Float _z);
		Dynamic set_z_dyn();

		virtual ::phoenix::Vector get_inverted( );
		Dynamic get_inverted_dyn();

		virtual Float set_angle2D( Float value);
		Dynamic set_angle2D_dyn();

		virtual Float get_angle2D( );
		Dynamic get_angle2D_dyn();

		virtual ::phoenix::Vector truncate( Float max);
		Dynamic truncate_dyn();

		virtual Float rotationTo( ::phoenix::Vector other);
		Dynamic rotationTo_dyn();

		virtual ::phoenix::Vector applyQuaternion( ::phoenix::Quaternion q);
		Dynamic applyQuaternion_dyn();

		virtual ::phoenix::Vector applyProjection( ::phoenix::Matrix m);
		Dynamic applyProjection_dyn();

		virtual ::phoenix::Vector transform( ::phoenix::Matrix _m);
		Dynamic transform_dyn();

		virtual ::phoenix::Vector transformDirection( ::phoenix::Matrix m);
		Dynamic transformDirection_dyn();

		virtual ::phoenix::Vector setEulerFromRotationMatrix( ::phoenix::Matrix m,hx::Null< int >  order);
		Dynamic setEulerFromRotationMatrix_dyn();

		virtual ::phoenix::Vector setEulerFromQuaternion( ::phoenix::Quaternion q,hx::Null< int >  order);
		Dynamic setEulerFromQuaternion_dyn();

		virtual ::phoenix::Vector degrees( );
		Dynamic degrees_dyn();

		virtual ::phoenix::Vector radians( );
		Dynamic radians_dyn();

		static ::phoenix::Vector Add( ::phoenix::Vector a,::phoenix::Vector b);
		static Dynamic Add_dyn();

		static ::phoenix::Vector Subtract( ::phoenix::Vector a,::phoenix::Vector b);
		static Dynamic Subtract_dyn();

		static ::phoenix::Vector MultiplyVector( ::phoenix::Vector a,::phoenix::Vector b);
		static Dynamic MultiplyVector_dyn();

		static ::phoenix::Vector DivideVector( ::phoenix::Vector a,::phoenix::Vector b);
		static Dynamic DivideVector_dyn();

		static ::phoenix::Vector Multiply( ::phoenix::Vector a,Float b);
		static Dynamic Multiply_dyn();

		static ::phoenix::Vector Divide( ::phoenix::Vector a,Float b);
		static Dynamic Divide_dyn();

		static ::phoenix::Vector AddScalar( ::phoenix::Vector a,Float b);
		static Dynamic AddScalar_dyn();

		static ::phoenix::Vector SubtractScalar( ::phoenix::Vector a,Float b);
		static Dynamic SubtractScalar_dyn();

		static ::phoenix::Vector Cross( ::phoenix::Vector a,::phoenix::Vector b);
		static Dynamic Cross_dyn();

		static Float RotationTo( ::phoenix::Vector a,::phoenix::Vector b);
		static Dynamic RotationTo_dyn();

		static Void Listen( ::phoenix::Vector _v,Dynamic listener);
		static Dynamic Listen_dyn();

		static ::phoenix::Vector Degrees( ::phoenix::Vector _radian_vector);
		static Dynamic Degrees_dyn();

		static ::phoenix::Vector Radians( ::phoenix::Vector _degree_vector);
		static Dynamic Radians_dyn();

};

} // end namespace phoenix

#endif /* INCLUDED_phoenix_Vector */ 
