#ifndef INCLUDED_phoenix__Shader_UniformType_Impl_
#define INCLUDED_phoenix__Shader_UniformType_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(phoenix,_Shader,UniformType_Impl_)
namespace phoenix{
namespace _Shader{


class HXCPP_CLASS_ATTRIBUTES  UniformType_Impl__obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef UniformType_Impl__obj OBJ_;
		UniformType_Impl__obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< UniformType_Impl__obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~UniformType_Impl__obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("UniformType_Impl_"); }

		static int unknown;
		static int _int;
		static int _float;
		static int vector2;
		static int vector3;
		static int vector4;
		static int color;
		static int texture;
};

} // end namespace phoenix
} // end namespace _Shader

#endif /* INCLUDED_phoenix__Shader_UniformType_Impl_ */ 
