#ifndef INCLUDED_phoenix_Quaternion
#define INCLUDED_phoenix_Quaternion

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(phoenix,Matrix)
HX_DECLARE_CLASS1(phoenix,Quaternion)
HX_DECLARE_CLASS1(phoenix,Vector)
namespace phoenix{


class HXCPP_CLASS_ATTRIBUTES  Quaternion_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Quaternion_obj OBJ_;
		Quaternion_obj();
		Void __construct(hx::Null< Float >  __o__x,hx::Null< Float >  __o__y,hx::Null< Float >  __o__z,hx::Null< Float >  __o__w);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Quaternion_obj > __new(hx::Null< Float >  __o__x,hx::Null< Float >  __o__y,hx::Null< Float >  __o__z,hx::Null< Float >  __o__w);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Quaternion_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Quaternion"); }

		Float x;
		Float y;
		Float z;
		Float w;
		::phoenix::Vector euler;
		bool ignore_listeners;
		Dynamic listen_x;
		Dynamic &listen_x_dyn() { return listen_x;}
		Dynamic listen_y;
		Dynamic &listen_y_dyn() { return listen_y;}
		Dynamic listen_z;
		Dynamic &listen_z_dyn() { return listen_z;}
		Dynamic listen_w;
		Dynamic &listen_w_dyn() { return listen_w;}
		bool _construct;
		virtual ::String toString( );
		Dynamic toString_dyn();

		virtual ::phoenix::Quaternion set( Float _x,Float _y,Float _z,Float _w);
		Dynamic set_dyn();

		virtual ::phoenix::Quaternion copy( ::phoenix::Quaternion _quaternion);
		Dynamic copy_dyn();

		virtual Float dot( ::phoenix::Quaternion _other);
		Dynamic dot_dyn();

		virtual ::phoenix::Quaternion setFromEuler( ::phoenix::Vector _euler,hx::Null< int >  _order);
		Dynamic setFromEuler_dyn();

		virtual ::phoenix::Quaternion setFromAxisAngle( ::phoenix::Vector _axis,Float _angle);
		Dynamic setFromAxisAngle_dyn();

		virtual ::phoenix::Quaternion setFromRotationMatrix( ::phoenix::Matrix _m);
		Dynamic setFromRotationMatrix_dyn();

		virtual ::phoenix::Quaternion inverse( );
		Dynamic inverse_dyn();

		virtual ::phoenix::Quaternion conjugate( );
		Dynamic conjugate_dyn();

		virtual Float lengthSq( );
		Dynamic lengthSq_dyn();

		virtual Float length( );
		Dynamic length_dyn();

		virtual ::phoenix::Quaternion normalize( );
		Dynamic normalize_dyn();

		virtual ::phoenix::Quaternion multiply( ::phoenix::Quaternion _quaternion);
		Dynamic multiply_dyn();

		virtual ::phoenix::Quaternion add( ::phoenix::Quaternion _quaternion);
		Dynamic add_dyn();

		virtual ::phoenix::Quaternion addQuaternions( ::phoenix::Quaternion _a,::phoenix::Quaternion _b);
		Dynamic addQuaternions_dyn();

		virtual ::phoenix::Quaternion multiplyScalar( Float _scalar);
		Dynamic multiplyScalar_dyn();

		virtual ::phoenix::Quaternion multiplyQuaternions( ::phoenix::Quaternion _a,::phoenix::Quaternion _b);
		Dynamic multiplyQuaternions_dyn();

		virtual ::phoenix::Quaternion slerp( ::phoenix::Quaternion _qb,Float _t);
		Dynamic slerp_dyn();

		virtual bool equals( ::phoenix::Quaternion _q);
		Dynamic equals_dyn();

		virtual ::phoenix::Quaternion fromArray( Array< Float > _a);
		Dynamic fromArray_dyn();

		virtual Array< Float > toArray( );
		Dynamic toArray_dyn();

		virtual ::phoenix::Quaternion clone( );
		Dynamic clone_dyn();

		virtual ::phoenix::Vector toeuler( );
		Dynamic toeuler_dyn();

		virtual Void update_euler( );
		Dynamic update_euler_dyn();

		bool ignore_euler;
		virtual Void set_xyzw( Float _x,Float _y,Float _z,Float _w);
		Dynamic set_xyzw_dyn();

		virtual Void set_xyz( Float _x,Float _y,Float _z);
		Dynamic set_xyz_dyn();

		virtual Float set_x( Float _v);
		Dynamic set_x_dyn();

		virtual Float set_y( Float _v);
		Dynamic set_y_dyn();

		virtual Float set_z( Float _v);
		Dynamic set_z_dyn();

		virtual Float set_w( Float _v);
		Dynamic set_w_dyn();

		static ::phoenix::Quaternion Add( ::phoenix::Quaternion _a,::phoenix::Quaternion _b);
		static Dynamic Add_dyn();

		static ::phoenix::Quaternion Multiply( ::phoenix::Quaternion _a,::phoenix::Quaternion _b);
		static Dynamic Multiply_dyn();

		static ::phoenix::Quaternion MultiplyScalar( ::phoenix::Quaternion _quaternion,Float _scalar);
		static Dynamic MultiplyScalar_dyn();

		static ::phoenix::Quaternion Slerp( ::phoenix::Quaternion _qa,::phoenix::Quaternion _qb,::phoenix::Quaternion _qm,Float _t);
		static Dynamic Slerp_dyn();

		static Float Dot( ::phoenix::Quaternion _a,::phoenix::Quaternion _b);
		static Dynamic Dot_dyn();

		static Void Listen( ::phoenix::Quaternion _q,Dynamic listener);
		static Dynamic Listen_dyn();

};

} // end namespace phoenix

#endif /* INCLUDED_phoenix_Quaternion */ 
