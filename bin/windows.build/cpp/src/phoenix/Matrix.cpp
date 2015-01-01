#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_phoenix_Matrix
#include <phoenix/Matrix.h>
#endif
#ifndef INCLUDED_phoenix_MatrixTransform
#include <phoenix/MatrixTransform.h>
#endif
#ifndef INCLUDED_phoenix_Quaternion
#include <phoenix/Quaternion.h>
#endif
#ifndef INCLUDED_phoenix_Vector
#include <phoenix/Vector.h>
#endif
#ifndef INCLUDED_snow_platform_native_utils_ArrayBufferView
#include <snow/platform/native/utils/ArrayBufferView.h>
#endif
#ifndef INCLUDED_snow_platform_native_utils_Float32Array
#include <snow/platform/native/utils/Float32Array.h>
#endif
#ifndef INCLUDED_snow_utils_IMemoryRange
#include <snow/utils/IMemoryRange.h>
#endif
namespace phoenix{

Void Matrix_obj::__construct(hx::Null< Float >  __o_n11,hx::Null< Float >  __o_n12,hx::Null< Float >  __o_n13,hx::Null< Float >  __o_n14,hx::Null< Float >  __o_n21,hx::Null< Float >  __o_n22,hx::Null< Float >  __o_n23,hx::Null< Float >  __o_n24,hx::Null< Float >  __o_n31,hx::Null< Float >  __o_n32,hx::Null< Float >  __o_n33,hx::Null< Float >  __o_n34,hx::Null< Float >  __o_n41,hx::Null< Float >  __o_n42,hx::Null< Float >  __o_n43,hx::Null< Float >  __o_n44)
{
HX_STACK_FRAME("phoenix.Matrix","new",0x05a13252,"phoenix.Matrix.new","phoenix/Matrix.hx",27,0x938b753d)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_n11,"n11")
HX_STACK_ARG(__o_n12,"n12")
HX_STACK_ARG(__o_n13,"n13")
HX_STACK_ARG(__o_n14,"n14")
HX_STACK_ARG(__o_n21,"n21")
HX_STACK_ARG(__o_n22,"n22")
HX_STACK_ARG(__o_n23,"n23")
HX_STACK_ARG(__o_n24,"n24")
HX_STACK_ARG(__o_n31,"n31")
HX_STACK_ARG(__o_n32,"n32")
HX_STACK_ARG(__o_n33,"n33")
HX_STACK_ARG(__o_n34,"n34")
HX_STACK_ARG(__o_n41,"n41")
HX_STACK_ARG(__o_n42,"n42")
HX_STACK_ARG(__o_n43,"n43")
HX_STACK_ARG(__o_n44,"n44")
Float n11 = __o_n11.Default(1);
Float n12 = __o_n12.Default(0);
Float n13 = __o_n13.Default(0);
Float n14 = __o_n14.Default(0);
Float n21 = __o_n21.Default(0);
Float n22 = __o_n22.Default(1);
Float n23 = __o_n23.Default(0);
Float n24 = __o_n24.Default(0);
Float n31 = __o_n31.Default(0);
Float n32 = __o_n32.Default(0);
Float n33 = __o_n33.Default(1);
Float n34 = __o_n34.Default(0);
Float n41 = __o_n41.Default(0);
Float n42 = __o_n42.Default(0);
Float n43 = __o_n43.Default(0);
Float n44 = __o_n44.Default(1);
{
	HX_STACK_LINE(50)
	this->M44 = (int)1;
	HX_STACK_LINE(49)
	this->M34 = (int)0;
	HX_STACK_LINE(48)
	this->M24 = (int)0;
	HX_STACK_LINE(47)
	this->M14 = (int)0;
	HX_STACK_LINE(45)
	this->M43 = (int)0;
	HX_STACK_LINE(44)
	this->M33 = (int)1;
	HX_STACK_LINE(43)
	this->M23 = (int)0;
	HX_STACK_LINE(42)
	this->M13 = (int)0;
	HX_STACK_LINE(40)
	this->M42 = (int)0;
	HX_STACK_LINE(39)
	this->M32 = (int)0;
	HX_STACK_LINE(38)
	this->M22 = (int)1;
	HX_STACK_LINE(37)
	this->M12 = (int)0;
	HX_STACK_LINE(35)
	this->M41 = (int)0;
	HX_STACK_LINE(34)
	this->M31 = (int)0;
	HX_STACK_LINE(33)
	this->M21 = (int)0;
	HX_STACK_LINE(32)
	this->M11 = (int)1;
	HX_STACK_LINE(58)
	Array< Float > _g = Array_obj< Float >::__new();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(58)
	this->elements = _g;
	HX_STACK_LINE(60)
	int i = (int)0;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(61)
	while((true)){
		HX_STACK_LINE(61)
		int _g1 = (i)++;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(61)
		if ((!(((_g1 < (int)16))))){
			HX_STACK_LINE(61)
			break;
		}
		HX_STACK_LINE(62)
		this->elements->push(0.0);
	}
	HX_STACK_LINE(65)
	{
		HX_STACK_LINE(65)
		Array< Float > e = this->elements;		HX_STACK_VAR(e,"e");
		HX_STACK_LINE(65)
		e[(int)0] = n11;
		HX_STACK_LINE(65)
		e[(int)4] = n12;
		HX_STACK_LINE(65)
		e[(int)8] = n13;
		HX_STACK_LINE(65)
		e[(int)12] = n14;
		HX_STACK_LINE(65)
		e[(int)1] = n21;
		HX_STACK_LINE(65)
		e[(int)5] = n22;
		HX_STACK_LINE(65)
		e[(int)9] = n23;
		HX_STACK_LINE(65)
		e[(int)13] = n24;
		HX_STACK_LINE(65)
		e[(int)2] = n31;
		HX_STACK_LINE(65)
		e[(int)6] = n32;
		HX_STACK_LINE(65)
		e[(int)10] = n33;
		HX_STACK_LINE(65)
		e[(int)14] = n34;
		HX_STACK_LINE(65)
		e[(int)3] = n41;
		HX_STACK_LINE(65)
		e[(int)7] = n42;
		HX_STACK_LINE(65)
		e[(int)11] = n43;
		HX_STACK_LINE(65)
		e[(int)15] = n44;
		HX_STACK_LINE(65)
		hx::ObjectPtr<OBJ_>(this);
	}
	HX_STACK_LINE(72)
	::snow::platform::native::utils::Float32Array _g2 = ::snow::platform::native::utils::Float32Array_obj::__new(this->elements,null(),null());		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(72)
	this->_float32array = _g2;
}
;
	return null();
}

//Matrix_obj::~Matrix_obj() { }

Dynamic Matrix_obj::__CreateEmpty() { return  new Matrix_obj; }
hx::ObjectPtr< Matrix_obj > Matrix_obj::__new(hx::Null< Float >  __o_n11,hx::Null< Float >  __o_n12,hx::Null< Float >  __o_n13,hx::Null< Float >  __o_n14,hx::Null< Float >  __o_n21,hx::Null< Float >  __o_n22,hx::Null< Float >  __o_n23,hx::Null< Float >  __o_n24,hx::Null< Float >  __o_n31,hx::Null< Float >  __o_n32,hx::Null< Float >  __o_n33,hx::Null< Float >  __o_n34,hx::Null< Float >  __o_n41,hx::Null< Float >  __o_n42,hx::Null< Float >  __o_n43,hx::Null< Float >  __o_n44)
{  hx::ObjectPtr< Matrix_obj > result = new Matrix_obj();
	result->__construct(__o_n11,__o_n12,__o_n13,__o_n14,__o_n21,__o_n22,__o_n23,__o_n24,__o_n31,__o_n32,__o_n33,__o_n34,__o_n41,__o_n42,__o_n43,__o_n44);
	return result;}

Dynamic Matrix_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Matrix_obj > result = new Matrix_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6],inArgs[7],inArgs[8],inArgs[9],inArgs[10],inArgs[11],inArgs[12],inArgs[13],inArgs[14],inArgs[15]);
	return result;}

::phoenix::Matrix Matrix_obj::set( Float n11,Float n12,Float n13,Float n14,Float n21,Float n22,Float n23,Float n24,Float n31,Float n32,Float n33,Float n34,Float n41,Float n42,Float n43,Float n44){
	HX_STACK_FRAME("phoenix.Matrix","set",0x05a4fd94,"phoenix.Matrix.set","phoenix/Matrix.hx",82,0x938b753d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(n11,"n11")
	HX_STACK_ARG(n12,"n12")
	HX_STACK_ARG(n13,"n13")
	HX_STACK_ARG(n14,"n14")
	HX_STACK_ARG(n21,"n21")
	HX_STACK_ARG(n22,"n22")
	HX_STACK_ARG(n23,"n23")
	HX_STACK_ARG(n24,"n24")
	HX_STACK_ARG(n31,"n31")
	HX_STACK_ARG(n32,"n32")
	HX_STACK_ARG(n33,"n33")
	HX_STACK_ARG(n34,"n34")
	HX_STACK_ARG(n41,"n41")
	HX_STACK_ARG(n42,"n42")
	HX_STACK_ARG(n43,"n43")
	HX_STACK_ARG(n44,"n44")
	HX_STACK_LINE(84)
	Array< Float > e = this->elements;		HX_STACK_VAR(e,"e");
	HX_STACK_LINE(86)
	e[(int)0] = n11;
	HX_STACK_LINE(86)
	e[(int)4] = n12;
	HX_STACK_LINE(86)
	e[(int)8] = n13;
	HX_STACK_LINE(86)
	e[(int)12] = n14;
	HX_STACK_LINE(87)
	e[(int)1] = n21;
	HX_STACK_LINE(87)
	e[(int)5] = n22;
	HX_STACK_LINE(87)
	e[(int)9] = n23;
	HX_STACK_LINE(87)
	e[(int)13] = n24;
	HX_STACK_LINE(88)
	e[(int)2] = n31;
	HX_STACK_LINE(88)
	e[(int)6] = n32;
	HX_STACK_LINE(88)
	e[(int)10] = n33;
	HX_STACK_LINE(88)
	e[(int)14] = n34;
	HX_STACK_LINE(89)
	e[(int)3] = n41;
	HX_STACK_LINE(89)
	e[(int)7] = n42;
	HX_STACK_LINE(89)
	e[(int)11] = n43;
	HX_STACK_LINE(89)
	e[(int)15] = n44;
	HX_STACK_LINE(91)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC16(Matrix_obj,set,return )

::String Matrix_obj::toString( ){
	HX_STACK_FRAME("phoenix.Matrix","toString",0x3c5f217a,"phoenix.Matrix.toString","phoenix/Matrix.hx",94,0x938b753d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(95)
	Array< Float > e = this->elements;		HX_STACK_VAR(e,"e");
	HX_STACK_LINE(96)
	Float _g1;		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(96)
	{
		HX_STACK_LINE(96)
		Float n = ::Math_obj::pow((int)10,(int)3);		HX_STACK_VAR(n,"n");
		HX_STACK_LINE(96)
		int _g = ::Std_obj::_int((e->__get((int)0) * n));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(96)
		_g1 = (Float(_g) / Float(n));
	}
	HX_STACK_LINE(96)
	::String _g2 = (HX_CSTRING("{ 11:") + _g1);		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(96)
	::String _g3 = (_g2 + HX_CSTRING(", 12:"));		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(96)
	Float _g5;		HX_STACK_VAR(_g5,"_g5");
	HX_STACK_LINE(96)
	{
		HX_STACK_LINE(96)
		Float n = ::Math_obj::pow((int)10,(int)3);		HX_STACK_VAR(n,"n");
		HX_STACK_LINE(96)
		int _g4 = ::Std_obj::_int((e->__get((int)4) * n));		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(96)
		_g5 = (Float(_g4) / Float(n));
	}
	HX_STACK_LINE(96)
	::String _g6 = (_g3 + _g5);		HX_STACK_VAR(_g6,"_g6");
	HX_STACK_LINE(96)
	::String _g7 = (_g6 + HX_CSTRING(", 13:"));		HX_STACK_VAR(_g7,"_g7");
	HX_STACK_LINE(96)
	Float _g9;		HX_STACK_VAR(_g9,"_g9");
	HX_STACK_LINE(96)
	{
		HX_STACK_LINE(96)
		Float n = ::Math_obj::pow((int)10,(int)3);		HX_STACK_VAR(n,"n");
		HX_STACK_LINE(96)
		int _g8 = ::Std_obj::_int((e->__get((int)8) * n));		HX_STACK_VAR(_g8,"_g8");
		HX_STACK_LINE(96)
		_g9 = (Float(_g8) / Float(n));
	}
	HX_STACK_LINE(96)
	::String _g10 = (_g7 + _g9);		HX_STACK_VAR(_g10,"_g10");
	HX_STACK_LINE(96)
	::String _g11 = (_g10 + HX_CSTRING(", 14:"));		HX_STACK_VAR(_g11,"_g11");
	HX_STACK_LINE(96)
	Float _g13;		HX_STACK_VAR(_g13,"_g13");
	HX_STACK_LINE(96)
	{
		HX_STACK_LINE(96)
		Float n = ::Math_obj::pow((int)10,(int)3);		HX_STACK_VAR(n,"n");
		HX_STACK_LINE(96)
		int _g12 = ::Std_obj::_int((e->__get((int)12) * n));		HX_STACK_VAR(_g12,"_g12");
		HX_STACK_LINE(96)
		_g13 = (Float(_g12) / Float(n));
	}
	HX_STACK_LINE(96)
	::String _g14 = (_g11 + _g13);		HX_STACK_VAR(_g14,"_g14");
	HX_STACK_LINE(96)
	::String _g15 = (_g14 + HX_CSTRING(" }, "));		HX_STACK_VAR(_g15,"_g15");
	HX_STACK_LINE(96)
	::String _g16 = (_g15 + HX_CSTRING("{ 21:"));		HX_STACK_VAR(_g16,"_g16");
	HX_STACK_LINE(97)
	Float _g18;		HX_STACK_VAR(_g18,"_g18");
	HX_STACK_LINE(97)
	{
		HX_STACK_LINE(97)
		Float n = ::Math_obj::pow((int)10,(int)3);		HX_STACK_VAR(n,"n");
		HX_STACK_LINE(97)
		int _g17 = ::Std_obj::_int((e->__get((int)1) * n));		HX_STACK_VAR(_g17,"_g17");
		HX_STACK_LINE(97)
		_g18 = (Float(_g17) / Float(n));
	}
	HX_STACK_LINE(96)
	::String _g19 = (_g16 + _g18);		HX_STACK_VAR(_g19,"_g19");
	HX_STACK_LINE(96)
	::String _g20 = (_g19 + HX_CSTRING(", 22:"));		HX_STACK_VAR(_g20,"_g20");
	HX_STACK_LINE(97)
	Float _g22;		HX_STACK_VAR(_g22,"_g22");
	HX_STACK_LINE(97)
	{
		HX_STACK_LINE(97)
		Float n = ::Math_obj::pow((int)10,(int)3);		HX_STACK_VAR(n,"n");
		HX_STACK_LINE(97)
		int _g21 = ::Std_obj::_int((e->__get((int)5) * n));		HX_STACK_VAR(_g21,"_g21");
		HX_STACK_LINE(97)
		_g22 = (Float(_g21) / Float(n));
	}
	HX_STACK_LINE(96)
	::String _g23 = (_g20 + _g22);		HX_STACK_VAR(_g23,"_g23");
	HX_STACK_LINE(96)
	::String _g24 = (_g23 + HX_CSTRING(", 23:"));		HX_STACK_VAR(_g24,"_g24");
	HX_STACK_LINE(97)
	Float _g26;		HX_STACK_VAR(_g26,"_g26");
	HX_STACK_LINE(97)
	{
		HX_STACK_LINE(97)
		Float n = ::Math_obj::pow((int)10,(int)3);		HX_STACK_VAR(n,"n");
		HX_STACK_LINE(97)
		int _g25 = ::Std_obj::_int((e->__get((int)9) * n));		HX_STACK_VAR(_g25,"_g25");
		HX_STACK_LINE(97)
		_g26 = (Float(_g25) / Float(n));
	}
	HX_STACK_LINE(96)
	::String _g27 = (_g24 + _g26);		HX_STACK_VAR(_g27,"_g27");
	HX_STACK_LINE(96)
	::String _g28 = (_g27 + HX_CSTRING(", 24:"));		HX_STACK_VAR(_g28,"_g28");
	HX_STACK_LINE(97)
	Float _g30;		HX_STACK_VAR(_g30,"_g30");
	HX_STACK_LINE(97)
	{
		HX_STACK_LINE(97)
		Float n = ::Math_obj::pow((int)10,(int)3);		HX_STACK_VAR(n,"n");
		HX_STACK_LINE(97)
		int _g29 = ::Std_obj::_int((e->__get((int)13) * n));		HX_STACK_VAR(_g29,"_g29");
		HX_STACK_LINE(97)
		_g30 = (Float(_g29) / Float(n));
	}
	HX_STACK_LINE(96)
	::String _g31 = (_g28 + _g30);		HX_STACK_VAR(_g31,"_g31");
	HX_STACK_LINE(96)
	::String _g32 = (_g31 + HX_CSTRING(" }, "));		HX_STACK_VAR(_g32,"_g32");
	HX_STACK_LINE(96)
	::String _g33 = (_g32 + HX_CSTRING("{ 31:"));		HX_STACK_VAR(_g33,"_g33");
	HX_STACK_LINE(98)
	Float _g35;		HX_STACK_VAR(_g35,"_g35");
	HX_STACK_LINE(98)
	{
		HX_STACK_LINE(98)
		Float n = ::Math_obj::pow((int)10,(int)3);		HX_STACK_VAR(n,"n");
		HX_STACK_LINE(98)
		int _g34 = ::Std_obj::_int((e->__get((int)2) * n));		HX_STACK_VAR(_g34,"_g34");
		HX_STACK_LINE(98)
		_g35 = (Float(_g34) / Float(n));
	}
	HX_STACK_LINE(96)
	::String _g36 = (_g33 + _g35);		HX_STACK_VAR(_g36,"_g36");
	HX_STACK_LINE(96)
	::String _g37 = (_g36 + HX_CSTRING(", 32:"));		HX_STACK_VAR(_g37,"_g37");
	HX_STACK_LINE(98)
	Float _g39;		HX_STACK_VAR(_g39,"_g39");
	HX_STACK_LINE(98)
	{
		HX_STACK_LINE(98)
		Float n = ::Math_obj::pow((int)10,(int)3);		HX_STACK_VAR(n,"n");
		HX_STACK_LINE(98)
		int _g38 = ::Std_obj::_int((e->__get((int)6) * n));		HX_STACK_VAR(_g38,"_g38");
		HX_STACK_LINE(98)
		_g39 = (Float(_g38) / Float(n));
	}
	HX_STACK_LINE(96)
	::String _g40 = (_g37 + _g39);		HX_STACK_VAR(_g40,"_g40");
	HX_STACK_LINE(96)
	::String _g41 = (_g40 + HX_CSTRING(", 33:"));		HX_STACK_VAR(_g41,"_g41");
	HX_STACK_LINE(98)
	Float _g43;		HX_STACK_VAR(_g43,"_g43");
	HX_STACK_LINE(98)
	{
		HX_STACK_LINE(98)
		Float n = ::Math_obj::pow((int)10,(int)3);		HX_STACK_VAR(n,"n");
		HX_STACK_LINE(98)
		int _g42 = ::Std_obj::_int((e->__get((int)10) * n));		HX_STACK_VAR(_g42,"_g42");
		HX_STACK_LINE(98)
		_g43 = (Float(_g42) / Float(n));
	}
	HX_STACK_LINE(96)
	::String _g44 = (_g41 + _g43);		HX_STACK_VAR(_g44,"_g44");
	HX_STACK_LINE(96)
	::String _g45 = (_g44 + HX_CSTRING(", 34:"));		HX_STACK_VAR(_g45,"_g45");
	HX_STACK_LINE(98)
	Float _g47;		HX_STACK_VAR(_g47,"_g47");
	HX_STACK_LINE(98)
	{
		HX_STACK_LINE(98)
		Float n = ::Math_obj::pow((int)10,(int)3);		HX_STACK_VAR(n,"n");
		HX_STACK_LINE(98)
		int _g46 = ::Std_obj::_int((e->__get((int)14) * n));		HX_STACK_VAR(_g46,"_g46");
		HX_STACK_LINE(98)
		_g47 = (Float(_g46) / Float(n));
	}
	HX_STACK_LINE(96)
	::String _g48 = (_g45 + _g47);		HX_STACK_VAR(_g48,"_g48");
	HX_STACK_LINE(96)
	::String _g49 = (_g48 + HX_CSTRING(" }, "));		HX_STACK_VAR(_g49,"_g49");
	HX_STACK_LINE(96)
	::String _g50 = (_g49 + HX_CSTRING("{ 41:"));		HX_STACK_VAR(_g50,"_g50");
	HX_STACK_LINE(99)
	Float _g52;		HX_STACK_VAR(_g52,"_g52");
	HX_STACK_LINE(99)
	{
		HX_STACK_LINE(99)
		Float n = ::Math_obj::pow((int)10,(int)3);		HX_STACK_VAR(n,"n");
		HX_STACK_LINE(99)
		int _g51 = ::Std_obj::_int((e->__get((int)3) * n));		HX_STACK_VAR(_g51,"_g51");
		HX_STACK_LINE(99)
		_g52 = (Float(_g51) / Float(n));
	}
	HX_STACK_LINE(96)
	::String _g53 = (_g50 + _g52);		HX_STACK_VAR(_g53,"_g53");
	HX_STACK_LINE(96)
	::String _g54 = (_g53 + HX_CSTRING(", 42:"));		HX_STACK_VAR(_g54,"_g54");
	HX_STACK_LINE(99)
	Float _g56;		HX_STACK_VAR(_g56,"_g56");
	HX_STACK_LINE(99)
	{
		HX_STACK_LINE(99)
		Float n = ::Math_obj::pow((int)10,(int)3);		HX_STACK_VAR(n,"n");
		HX_STACK_LINE(99)
		int _g55 = ::Std_obj::_int((e->__get((int)7) * n));		HX_STACK_VAR(_g55,"_g55");
		HX_STACK_LINE(99)
		_g56 = (Float(_g55) / Float(n));
	}
	HX_STACK_LINE(96)
	::String _g57 = (_g54 + _g56);		HX_STACK_VAR(_g57,"_g57");
	HX_STACK_LINE(96)
	::String _g58 = (_g57 + HX_CSTRING(", 43:"));		HX_STACK_VAR(_g58,"_g58");
	HX_STACK_LINE(99)
	Float _g60;		HX_STACK_VAR(_g60,"_g60");
	HX_STACK_LINE(99)
	{
		HX_STACK_LINE(99)
		Float n = ::Math_obj::pow((int)10,(int)3);		HX_STACK_VAR(n,"n");
		HX_STACK_LINE(99)
		int _g59 = ::Std_obj::_int((e->__get((int)11) * n));		HX_STACK_VAR(_g59,"_g59");
		HX_STACK_LINE(99)
		_g60 = (Float(_g59) / Float(n));
	}
	HX_STACK_LINE(96)
	::String _g61 = (_g58 + _g60);		HX_STACK_VAR(_g61,"_g61");
	HX_STACK_LINE(96)
	::String _g62 = (_g61 + HX_CSTRING(", 44:"));		HX_STACK_VAR(_g62,"_g62");
	HX_STACK_LINE(99)
	Float _g64;		HX_STACK_VAR(_g64,"_g64");
	HX_STACK_LINE(99)
	{
		HX_STACK_LINE(99)
		Float n = ::Math_obj::pow((int)10,(int)3);		HX_STACK_VAR(n,"n");
		HX_STACK_LINE(99)
		int _g63 = ::Std_obj::_int((e->__get((int)15) * n));		HX_STACK_VAR(_g63,"_g63");
		HX_STACK_LINE(99)
		_g64 = (Float(_g63) / Float(n));
	}
	HX_STACK_LINE(96)
	::String _g65 = (_g62 + _g64);		HX_STACK_VAR(_g65,"_g65");
	HX_STACK_LINE(96)
	::String str = (_g65 + HX_CSTRING(" }"));		HX_STACK_VAR(str,"str");
	HX_STACK_LINE(100)
	return str;
}


HX_DEFINE_DYNAMIC_FUNC0(Matrix_obj,toString,return )

Float Matrix_obj::get_M11( ){
	HX_STACK_FRAME("phoenix.Matrix","get_M11",0x8bb9a3f6,"phoenix.Matrix.get_M11","phoenix/Matrix.hx",103,0x938b753d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(103)
	return this->elements->__get((int)0);
}


HX_DEFINE_DYNAMIC_FUNC0(Matrix_obj,get_M11,return )

Float Matrix_obj::get_M12( ){
	HX_STACK_FRAME("phoenix.Matrix","get_M12",0x8bb9a3f7,"phoenix.Matrix.get_M12","phoenix/Matrix.hx",104,0x938b753d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(104)
	return this->elements->__get((int)1);
}


HX_DEFINE_DYNAMIC_FUNC0(Matrix_obj,get_M12,return )

Float Matrix_obj::get_M13( ){
	HX_STACK_FRAME("phoenix.Matrix","get_M13",0x8bb9a3f8,"phoenix.Matrix.get_M13","phoenix/Matrix.hx",105,0x938b753d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(105)
	return this->elements->__get((int)2);
}


HX_DEFINE_DYNAMIC_FUNC0(Matrix_obj,get_M13,return )

Float Matrix_obj::get_M14( ){
	HX_STACK_FRAME("phoenix.Matrix","get_M14",0x8bb9a3f9,"phoenix.Matrix.get_M14","phoenix/Matrix.hx",106,0x938b753d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(106)
	return this->elements->__get((int)3);
}


HX_DEFINE_DYNAMIC_FUNC0(Matrix_obj,get_M14,return )

Float Matrix_obj::get_M21( ){
	HX_STACK_FRAME("phoenix.Matrix","get_M21",0x8bb9a4d5,"phoenix.Matrix.get_M21","phoenix/Matrix.hx",108,0x938b753d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(108)
	return this->elements->__get((int)4);
}


HX_DEFINE_DYNAMIC_FUNC0(Matrix_obj,get_M21,return )

Float Matrix_obj::get_M22( ){
	HX_STACK_FRAME("phoenix.Matrix","get_M22",0x8bb9a4d6,"phoenix.Matrix.get_M22","phoenix/Matrix.hx",109,0x938b753d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(109)
	return this->elements->__get((int)5);
}


HX_DEFINE_DYNAMIC_FUNC0(Matrix_obj,get_M22,return )

Float Matrix_obj::get_M23( ){
	HX_STACK_FRAME("phoenix.Matrix","get_M23",0x8bb9a4d7,"phoenix.Matrix.get_M23","phoenix/Matrix.hx",110,0x938b753d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(110)
	return this->elements->__get((int)6);
}


HX_DEFINE_DYNAMIC_FUNC0(Matrix_obj,get_M23,return )

Float Matrix_obj::get_M24( ){
	HX_STACK_FRAME("phoenix.Matrix","get_M24",0x8bb9a4d8,"phoenix.Matrix.get_M24","phoenix/Matrix.hx",111,0x938b753d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(111)
	return this->elements->__get((int)7);
}


HX_DEFINE_DYNAMIC_FUNC0(Matrix_obj,get_M24,return )

Float Matrix_obj::get_M31( ){
	HX_STACK_FRAME("phoenix.Matrix","get_M31",0x8bb9a5b4,"phoenix.Matrix.get_M31","phoenix/Matrix.hx",113,0x938b753d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(113)
	return this->elements->__get((int)8);
}


HX_DEFINE_DYNAMIC_FUNC0(Matrix_obj,get_M31,return )

Float Matrix_obj::get_M32( ){
	HX_STACK_FRAME("phoenix.Matrix","get_M32",0x8bb9a5b5,"phoenix.Matrix.get_M32","phoenix/Matrix.hx",114,0x938b753d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(114)
	return this->elements->__get((int)9);
}


HX_DEFINE_DYNAMIC_FUNC0(Matrix_obj,get_M32,return )

Float Matrix_obj::get_M33( ){
	HX_STACK_FRAME("phoenix.Matrix","get_M33",0x8bb9a5b6,"phoenix.Matrix.get_M33","phoenix/Matrix.hx",115,0x938b753d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(115)
	return this->elements->__get((int)10);
}


HX_DEFINE_DYNAMIC_FUNC0(Matrix_obj,get_M33,return )

Float Matrix_obj::get_M34( ){
	HX_STACK_FRAME("phoenix.Matrix","get_M34",0x8bb9a5b7,"phoenix.Matrix.get_M34","phoenix/Matrix.hx",116,0x938b753d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(116)
	return this->elements->__get((int)11);
}


HX_DEFINE_DYNAMIC_FUNC0(Matrix_obj,get_M34,return )

Float Matrix_obj::get_M41( ){
	HX_STACK_FRAME("phoenix.Matrix","get_M41",0x8bb9a693,"phoenix.Matrix.get_M41","phoenix/Matrix.hx",118,0x938b753d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(118)
	return this->elements->__get((int)12);
}


HX_DEFINE_DYNAMIC_FUNC0(Matrix_obj,get_M41,return )

Float Matrix_obj::get_M42( ){
	HX_STACK_FRAME("phoenix.Matrix","get_M42",0x8bb9a694,"phoenix.Matrix.get_M42","phoenix/Matrix.hx",119,0x938b753d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(119)
	return this->elements->__get((int)13);
}


HX_DEFINE_DYNAMIC_FUNC0(Matrix_obj,get_M42,return )

Float Matrix_obj::get_M43( ){
	HX_STACK_FRAME("phoenix.Matrix","get_M43",0x8bb9a695,"phoenix.Matrix.get_M43","phoenix/Matrix.hx",120,0x938b753d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(120)
	return this->elements->__get((int)14);
}


HX_DEFINE_DYNAMIC_FUNC0(Matrix_obj,get_M43,return )

Float Matrix_obj::get_M44( ){
	HX_STACK_FRAME("phoenix.Matrix","get_M44",0x8bb9a696,"phoenix.Matrix.get_M44","phoenix/Matrix.hx",121,0x938b753d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(121)
	return this->elements->__get((int)15);
}


HX_DEFINE_DYNAMIC_FUNC0(Matrix_obj,get_M44,return )

Float Matrix_obj::set_M11( Float _value){
	HX_STACK_FRAME("phoenix.Matrix","set_M11",0x7ebb3502,"phoenix.Matrix.set_M11","phoenix/Matrix.hx",123,0x938b753d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_value,"_value")
	HX_STACK_LINE(123)
	this->elements[(int)0] = _value;
	HX_STACK_LINE(123)
	return _value;
}


HX_DEFINE_DYNAMIC_FUNC1(Matrix_obj,set_M11,return )

Float Matrix_obj::set_M12( Float _value){
	HX_STACK_FRAME("phoenix.Matrix","set_M12",0x7ebb3503,"phoenix.Matrix.set_M12","phoenix/Matrix.hx",124,0x938b753d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_value,"_value")
	HX_STACK_LINE(124)
	this->elements[(int)1] = _value;
	HX_STACK_LINE(124)
	return _value;
}


HX_DEFINE_DYNAMIC_FUNC1(Matrix_obj,set_M12,return )

Float Matrix_obj::set_M13( Float _value){
	HX_STACK_FRAME("phoenix.Matrix","set_M13",0x7ebb3504,"phoenix.Matrix.set_M13","phoenix/Matrix.hx",125,0x938b753d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_value,"_value")
	HX_STACK_LINE(125)
	this->elements[(int)2] = _value;
	HX_STACK_LINE(125)
	return _value;
}


HX_DEFINE_DYNAMIC_FUNC1(Matrix_obj,set_M13,return )

Float Matrix_obj::set_M14( Float _value){
	HX_STACK_FRAME("phoenix.Matrix","set_M14",0x7ebb3505,"phoenix.Matrix.set_M14","phoenix/Matrix.hx",126,0x938b753d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_value,"_value")
	HX_STACK_LINE(126)
	this->elements[(int)3] = _value;
	HX_STACK_LINE(126)
	return _value;
}


HX_DEFINE_DYNAMIC_FUNC1(Matrix_obj,set_M14,return )

Float Matrix_obj::set_M21( Float _value){
	HX_STACK_FRAME("phoenix.Matrix","set_M21",0x7ebb35e1,"phoenix.Matrix.set_M21","phoenix/Matrix.hx",128,0x938b753d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_value,"_value")
	HX_STACK_LINE(128)
	this->elements[(int)4] = _value;
	HX_STACK_LINE(128)
	return _value;
}


HX_DEFINE_DYNAMIC_FUNC1(Matrix_obj,set_M21,return )

Float Matrix_obj::set_M22( Float _value){
	HX_STACK_FRAME("phoenix.Matrix","set_M22",0x7ebb35e2,"phoenix.Matrix.set_M22","phoenix/Matrix.hx",129,0x938b753d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_value,"_value")
	HX_STACK_LINE(129)
	this->elements[(int)5] = _value;
	HX_STACK_LINE(129)
	return _value;
}


HX_DEFINE_DYNAMIC_FUNC1(Matrix_obj,set_M22,return )

Float Matrix_obj::set_M23( Float _value){
	HX_STACK_FRAME("phoenix.Matrix","set_M23",0x7ebb35e3,"phoenix.Matrix.set_M23","phoenix/Matrix.hx",130,0x938b753d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_value,"_value")
	HX_STACK_LINE(130)
	this->elements[(int)6] = _value;
	HX_STACK_LINE(130)
	return _value;
}


HX_DEFINE_DYNAMIC_FUNC1(Matrix_obj,set_M23,return )

Float Matrix_obj::set_M24( Float _value){
	HX_STACK_FRAME("phoenix.Matrix","set_M24",0x7ebb35e4,"phoenix.Matrix.set_M24","phoenix/Matrix.hx",131,0x938b753d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_value,"_value")
	HX_STACK_LINE(131)
	this->elements[(int)7] = _value;
	HX_STACK_LINE(131)
	return _value;
}


HX_DEFINE_DYNAMIC_FUNC1(Matrix_obj,set_M24,return )

Float Matrix_obj::set_M31( Float _value){
	HX_STACK_FRAME("phoenix.Matrix","set_M31",0x7ebb36c0,"phoenix.Matrix.set_M31","phoenix/Matrix.hx",133,0x938b753d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_value,"_value")
	HX_STACK_LINE(133)
	this->elements[(int)8] = _value;
	HX_STACK_LINE(133)
	return _value;
}


HX_DEFINE_DYNAMIC_FUNC1(Matrix_obj,set_M31,return )

Float Matrix_obj::set_M32( Float _value){
	HX_STACK_FRAME("phoenix.Matrix","set_M32",0x7ebb36c1,"phoenix.Matrix.set_M32","phoenix/Matrix.hx",134,0x938b753d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_value,"_value")
	HX_STACK_LINE(134)
	this->elements[(int)9] = _value;
	HX_STACK_LINE(134)
	return _value;
}


HX_DEFINE_DYNAMIC_FUNC1(Matrix_obj,set_M32,return )

Float Matrix_obj::set_M33( Float _value){
	HX_STACK_FRAME("phoenix.Matrix","set_M33",0x7ebb36c2,"phoenix.Matrix.set_M33","phoenix/Matrix.hx",135,0x938b753d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_value,"_value")
	HX_STACK_LINE(135)
	this->elements[(int)10] = _value;
	HX_STACK_LINE(135)
	return _value;
}


HX_DEFINE_DYNAMIC_FUNC1(Matrix_obj,set_M33,return )

Float Matrix_obj::set_M34( Float _value){
	HX_STACK_FRAME("phoenix.Matrix","set_M34",0x7ebb36c3,"phoenix.Matrix.set_M34","phoenix/Matrix.hx",136,0x938b753d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_value,"_value")
	HX_STACK_LINE(136)
	this->elements[(int)11] = _value;
	HX_STACK_LINE(136)
	return _value;
}


HX_DEFINE_DYNAMIC_FUNC1(Matrix_obj,set_M34,return )

Float Matrix_obj::set_M41( Float _value){
	HX_STACK_FRAME("phoenix.Matrix","set_M41",0x7ebb379f,"phoenix.Matrix.set_M41","phoenix/Matrix.hx",138,0x938b753d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_value,"_value")
	HX_STACK_LINE(138)
	this->elements[(int)12] = _value;
	HX_STACK_LINE(138)
	return _value;
}


HX_DEFINE_DYNAMIC_FUNC1(Matrix_obj,set_M41,return )

Float Matrix_obj::set_M42( Float _value){
	HX_STACK_FRAME("phoenix.Matrix","set_M42",0x7ebb37a0,"phoenix.Matrix.set_M42","phoenix/Matrix.hx",139,0x938b753d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_value,"_value")
	HX_STACK_LINE(139)
	this->elements[(int)13] = _value;
	HX_STACK_LINE(139)
	return _value;
}


HX_DEFINE_DYNAMIC_FUNC1(Matrix_obj,set_M42,return )

Float Matrix_obj::set_M43( Float _value){
	HX_STACK_FRAME("phoenix.Matrix","set_M43",0x7ebb37a1,"phoenix.Matrix.set_M43","phoenix/Matrix.hx",140,0x938b753d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_value,"_value")
	HX_STACK_LINE(140)
	this->elements[(int)14] = _value;
	HX_STACK_LINE(140)
	return _value;
}


HX_DEFINE_DYNAMIC_FUNC1(Matrix_obj,set_M43,return )

Float Matrix_obj::set_M44( Float _value){
	HX_STACK_FRAME("phoenix.Matrix","set_M44",0x7ebb37a2,"phoenix.Matrix.set_M44","phoenix/Matrix.hx",141,0x938b753d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_value,"_value")
	HX_STACK_LINE(141)
	this->elements[(int)15] = _value;
	HX_STACK_LINE(141)
	return _value;
}


HX_DEFINE_DYNAMIC_FUNC1(Matrix_obj,set_M44,return )

::snow::platform::native::utils::Float32Array Matrix_obj::float32array( ){
	HX_STACK_FRAME("phoenix.Matrix","float32array",0x9bcb564c,"phoenix.Matrix.float32array","phoenix/Matrix.hx",143,0x938b753d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(148)
	{
		HX_STACK_LINE(148)
		::snow::platform::native::utils::Float32Array _this = this->_float32array;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(148)
		Dynamic bufferOrArray = this->elements;		HX_STACK_VAR(bufferOrArray,"bufferOrArray");
		HX_STACK_LINE(148)
		int offset = (int)0;		HX_STACK_VAR(offset,"offset");
		HX_STACK_LINE(148)
		if ((::Std_obj::is(bufferOrArray,hx::ClassOf< Array<int> >()))){
			HX_STACK_LINE(148)
			Array< Float > floats = bufferOrArray;		HX_STACK_VAR(floats,"floats");
			HX_STACK_LINE(148)
			{
				HX_STACK_LINE(148)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(148)
				int _g = floats->length;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(148)
				while((true)){
					HX_STACK_LINE(148)
					if ((!(((_g1 < _g))))){
						HX_STACK_LINE(148)
						break;
					}
					HX_STACK_LINE(148)
					int i = (_g1)++;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(148)
					::__hxcpp_memory_set_float(_this->bytes,(((int((i + offset)) << int((int)2))) + _this->byteOffset),floats->__get(i));
				}
			}
		}
		else{
			HX_STACK_LINE(148)
			if ((::Std_obj::is(bufferOrArray,hx::ClassOf< ::snow::platform::native::utils::Float32Array >()))){
				HX_STACK_LINE(148)
				::snow::platform::native::utils::Float32Array floats = bufferOrArray;		HX_STACK_VAR(floats,"floats");
				HX_STACK_LINE(148)
				{
					HX_STACK_LINE(148)
					int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(148)
					int _g = floats->length;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(148)
					while((true)){
						HX_STACK_LINE(148)
						if ((!(((_g1 < _g))))){
							HX_STACK_LINE(148)
							break;
						}
						HX_STACK_LINE(148)
						int i = (_g1)++;		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(148)
						::__hxcpp_memory_set_float(_this->bytes,(((int((i + offset)) << int((int)2))) + _this->byteOffset),floats->__get(i));
					}
				}
			}
			else{
				HX_STACK_LINE(148)
				HX_STACK_DO_THROW(HX_CSTRING("Invalid input buffer"));
			}
		}
	}
	HX_STACK_LINE(149)
	return ::snow::platform::native::utils::Float32Array_obj::__new(this->_float32array,null(),null());
}


HX_DEFINE_DYNAMIC_FUNC0(Matrix_obj,float32array,return )

::phoenix::Matrix Matrix_obj::identity( ){
	HX_STACK_FRAME("phoenix.Matrix","identity",0xbd1f960c,"phoenix.Matrix.identity","phoenix/Matrix.hx",159,0x938b753d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(161)
	{
		HX_STACK_LINE(161)
		Array< Float > e = this->elements;		HX_STACK_VAR(e,"e");
		HX_STACK_LINE(161)
		e[(int)0] = (int)1;
		HX_STACK_LINE(161)
		e[(int)4] = (int)0;
		HX_STACK_LINE(161)
		e[(int)8] = (int)0;
		HX_STACK_LINE(161)
		e[(int)12] = (int)0;
		HX_STACK_LINE(161)
		e[(int)1] = (int)0;
		HX_STACK_LINE(161)
		e[(int)5] = (int)1;
		HX_STACK_LINE(161)
		e[(int)9] = (int)0;
		HX_STACK_LINE(161)
		e[(int)13] = (int)0;
		HX_STACK_LINE(161)
		e[(int)2] = (int)0;
		HX_STACK_LINE(161)
		e[(int)6] = (int)0;
		HX_STACK_LINE(161)
		e[(int)10] = (int)1;
		HX_STACK_LINE(161)
		e[(int)14] = (int)0;
		HX_STACK_LINE(161)
		e[(int)3] = (int)0;
		HX_STACK_LINE(161)
		e[(int)7] = (int)0;
		HX_STACK_LINE(161)
		e[(int)11] = (int)0;
		HX_STACK_LINE(161)
		e[(int)15] = (int)1;
		HX_STACK_LINE(161)
		hx::ObjectPtr<OBJ_>(this);
	}
	HX_STACK_LINE(168)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC0(Matrix_obj,identity,return )

::phoenix::Matrix Matrix_obj::copy( ::phoenix::Matrix m){
	HX_STACK_FRAME("phoenix.Matrix","copy",0xe02d0d83,"phoenix.Matrix.copy","phoenix/Matrix.hx",173,0x938b753d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(m,"m")
	HX_STACK_LINE(175)
	Array< Float > me = m->elements;		HX_STACK_VAR(me,"me");
	HX_STACK_LINE(177)
	{
		HX_STACK_LINE(177)
		Array< Float > e = this->elements;		HX_STACK_VAR(e,"e");
		HX_STACK_LINE(177)
		e[(int)0] = me->__get((int)0);
		HX_STACK_LINE(177)
		e[(int)4] = me->__get((int)4);
		HX_STACK_LINE(177)
		e[(int)8] = me->__get((int)8);
		HX_STACK_LINE(177)
		e[(int)12] = me->__get((int)12);
		HX_STACK_LINE(177)
		e[(int)1] = me->__get((int)1);
		HX_STACK_LINE(177)
		e[(int)5] = me->__get((int)5);
		HX_STACK_LINE(177)
		e[(int)9] = me->__get((int)9);
		HX_STACK_LINE(177)
		e[(int)13] = me->__get((int)13);
		HX_STACK_LINE(177)
		e[(int)2] = me->__get((int)2);
		HX_STACK_LINE(177)
		e[(int)6] = me->__get((int)6);
		HX_STACK_LINE(177)
		e[(int)10] = me->__get((int)10);
		HX_STACK_LINE(177)
		e[(int)14] = me->__get((int)14);
		HX_STACK_LINE(177)
		e[(int)3] = me->__get((int)3);
		HX_STACK_LINE(177)
		e[(int)7] = me->__get((int)7);
		HX_STACK_LINE(177)
		e[(int)11] = me->__get((int)11);
		HX_STACK_LINE(177)
		e[(int)15] = me->__get((int)15);
		HX_STACK_LINE(177)
		hx::ObjectPtr<OBJ_>(this);
	}
	HX_STACK_LINE(184)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(Matrix_obj,copy,return )

::phoenix::Matrix Matrix_obj::make2D( Float _x,Float _y,hx::Null< Float >  __o__scale,hx::Null< Float >  __o__rotation){
Float _scale = __o__scale.Default(1);
Float _rotation = __o__rotation.Default(0);
	HX_STACK_FRAME("phoenix.Matrix","make2D",0xfc461e8e,"phoenix.Matrix.make2D","phoenix/Matrix.hx",187,0x938b753d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_x,"_x")
	HX_STACK_ARG(_y,"_y")
	HX_STACK_ARG(_scale,"_scale")
	HX_STACK_ARG(_rotation,"_rotation")
{
		HX_STACK_LINE(189)
		Float theta = (_rotation * 0.017453292519943278);		HX_STACK_VAR(theta,"theta");
		HX_STACK_LINE(190)
		Float c = ::Math_obj::cos(theta);		HX_STACK_VAR(c,"c");
		HX_STACK_LINE(191)
		Float s = ::Math_obj::sin(theta);		HX_STACK_VAR(s,"s");
		HX_STACK_LINE(193)
		{
			HX_STACK_LINE(193)
			Array< Float > e = this->elements;		HX_STACK_VAR(e,"e");
			HX_STACK_LINE(193)
			e[(int)0] = (c * _scale);
			HX_STACK_LINE(193)
			e[(int)4] = (s * _scale);
			HX_STACK_LINE(193)
			e[(int)8] = (int)0;
			HX_STACK_LINE(193)
			e[(int)12] = _x;
			HX_STACK_LINE(193)
			e[(int)1] = (-(s) * _scale);
			HX_STACK_LINE(193)
			e[(int)5] = (c * _scale);
			HX_STACK_LINE(193)
			e[(int)9] = (int)0;
			HX_STACK_LINE(193)
			e[(int)13] = _y;
			HX_STACK_LINE(193)
			e[(int)2] = (int)0;
			HX_STACK_LINE(193)
			e[(int)6] = (int)0;
			HX_STACK_LINE(193)
			e[(int)10] = (int)1;
			HX_STACK_LINE(193)
			e[(int)14] = (int)0;
			HX_STACK_LINE(193)
			e[(int)3] = (int)0;
			HX_STACK_LINE(193)
			e[(int)7] = (int)0;
			HX_STACK_LINE(193)
			e[(int)11] = (int)0;
			HX_STACK_LINE(193)
			e[(int)15] = (int)1;
			HX_STACK_LINE(193)
			hx::ObjectPtr<OBJ_>(this);
		}
		HX_STACK_LINE(200)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC4(Matrix_obj,make2D,return )

::phoenix::Matrix Matrix_obj::copyPosition( ::phoenix::Matrix m){
	HX_STACK_FRAME("phoenix.Matrix","copyPosition",0x2db7254c,"phoenix.Matrix.copyPosition","phoenix/Matrix.hx",204,0x938b753d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(m,"m")
	HX_STACK_LINE(206)
	this->elements[(int)12] = m->elements->__get((int)12);
	HX_STACK_LINE(207)
	this->elements[(int)13] = m->elements->__get((int)13);
	HX_STACK_LINE(208)
	this->elements[(int)14] = m->elements->__get((int)14);
	HX_STACK_LINE(210)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(Matrix_obj,copyPosition,return )

::phoenix::Vector Matrix_obj::getPosition( ){
	HX_STACK_FRAME("phoenix.Matrix","getPosition",0x6c3a0751,"phoenix.Matrix.getPosition","phoenix/Matrix.hx",215,0x938b753d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(215)
	return ::phoenix::Vector_obj::__new(this->elements->__get((int)12),this->elements->__get((int)13),this->elements->__get((int)14),(int)1);
}


HX_DEFINE_DYNAMIC_FUNC0(Matrix_obj,getPosition,return )

::phoenix::Matrix Matrix_obj::extractRotation( ::phoenix::Matrix m){
	HX_STACK_FRAME("phoenix.Matrix","extractRotation",0xb7fcdc91,"phoenix.Matrix.extractRotation","phoenix/Matrix.hx",218,0x938b753d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(m,"m")
	HX_STACK_LINE(220)
	::phoenix::Vector _temp = ::phoenix::Vector_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(_temp,"_temp");
	HX_STACK_LINE(221)
	Array< Float > me = m->elements;		HX_STACK_VAR(me,"me");
	HX_STACK_LINE(223)
	Float _g;		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(223)
	{
		HX_STACK_LINE(223)
		::phoenix::Vector _this;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(223)
		{
			HX_STACK_LINE(223)
			Float _x = me->__get((int)0);		HX_STACK_VAR(_x,"_x");
			HX_STACK_LINE(223)
			Float _y = me->__get((int)1);		HX_STACK_VAR(_y,"_y");
			HX_STACK_LINE(223)
			Float _z = me->__get((int)2);		HX_STACK_VAR(_z,"_z");
			HX_STACK_LINE(223)
			bool prev = _temp->ignore_listeners;		HX_STACK_VAR(prev,"prev");
			HX_STACK_LINE(223)
			_temp->ignore_listeners = true;
			HX_STACK_LINE(223)
			{
				HX_STACK_LINE(223)
				_temp->x = _x;
				HX_STACK_LINE(223)
				if ((_temp->_construct)){
					HX_STACK_LINE(223)
					_temp->x;
				}
				else{
					HX_STACK_LINE(223)
					if (((bool((_temp->listen_x != null())) && bool(!(_temp->ignore_listeners))))){
						HX_STACK_LINE(223)
						_temp->listen_x(_x);
					}
					HX_STACK_LINE(223)
					_temp->x;
				}
			}
			HX_STACK_LINE(223)
			{
				HX_STACK_LINE(223)
				_temp->y = _y;
				HX_STACK_LINE(223)
				if ((_temp->_construct)){
					HX_STACK_LINE(223)
					_temp->y;
				}
				else{
					HX_STACK_LINE(223)
					if (((bool((_temp->listen_y != null())) && bool(!(_temp->ignore_listeners))))){
						HX_STACK_LINE(223)
						_temp->listen_y(_y);
					}
					HX_STACK_LINE(223)
					_temp->y;
				}
			}
			HX_STACK_LINE(223)
			{
				HX_STACK_LINE(223)
				_temp->z = _z;
				HX_STACK_LINE(223)
				if ((_temp->_construct)){
					HX_STACK_LINE(223)
					_temp->z;
				}
				else{
					HX_STACK_LINE(223)
					if (((bool((_temp->listen_z != null())) && bool(!(_temp->ignore_listeners))))){
						HX_STACK_LINE(223)
						_temp->listen_z(_z);
					}
					HX_STACK_LINE(223)
					_temp->z;
				}
			}
			HX_STACK_LINE(223)
			_temp->ignore_listeners = prev;
			HX_STACK_LINE(223)
			if (((bool((_temp->listen_x != null())) && bool(!(_temp->ignore_listeners))))){
				HX_STACK_LINE(223)
				_temp->listen_x(_temp->x);
			}
			HX_STACK_LINE(223)
			if (((bool((_temp->listen_y != null())) && bool(!(_temp->ignore_listeners))))){
				HX_STACK_LINE(223)
				_temp->listen_y(_temp->y);
			}
			HX_STACK_LINE(223)
			if (((bool((_temp->listen_z != null())) && bool(!(_temp->ignore_listeners))))){
				HX_STACK_LINE(223)
				_temp->listen_z(_temp->z);
			}
			HX_STACK_LINE(223)
			_this = _temp;
		}
		HX_STACK_LINE(223)
		_g = ::Math_obj::sqrt((((_this->x * _this->x) + (_this->y * _this->y)) + (_this->z * _this->z)));
	}
	HX_STACK_LINE(223)
	Float _scale_x = (Float((int)1) / Float(_g));		HX_STACK_VAR(_scale_x,"_scale_x");
	HX_STACK_LINE(224)
	Float _g1;		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(224)
	{
		HX_STACK_LINE(224)
		::phoenix::Vector _this;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(224)
		{
			HX_STACK_LINE(224)
			Float _x = me->__get((int)4);		HX_STACK_VAR(_x,"_x");
			HX_STACK_LINE(224)
			Float _y = me->__get((int)5);		HX_STACK_VAR(_y,"_y");
			HX_STACK_LINE(224)
			Float _z = me->__get((int)6);		HX_STACK_VAR(_z,"_z");
			HX_STACK_LINE(224)
			bool prev = _temp->ignore_listeners;		HX_STACK_VAR(prev,"prev");
			HX_STACK_LINE(224)
			_temp->ignore_listeners = true;
			HX_STACK_LINE(224)
			{
				HX_STACK_LINE(224)
				_temp->x = _x;
				HX_STACK_LINE(224)
				if ((_temp->_construct)){
					HX_STACK_LINE(224)
					_temp->x;
				}
				else{
					HX_STACK_LINE(224)
					if (((bool((_temp->listen_x != null())) && bool(!(_temp->ignore_listeners))))){
						HX_STACK_LINE(224)
						_temp->listen_x(_x);
					}
					HX_STACK_LINE(224)
					_temp->x;
				}
			}
			HX_STACK_LINE(224)
			{
				HX_STACK_LINE(224)
				_temp->y = _y;
				HX_STACK_LINE(224)
				if ((_temp->_construct)){
					HX_STACK_LINE(224)
					_temp->y;
				}
				else{
					HX_STACK_LINE(224)
					if (((bool((_temp->listen_y != null())) && bool(!(_temp->ignore_listeners))))){
						HX_STACK_LINE(224)
						_temp->listen_y(_y);
					}
					HX_STACK_LINE(224)
					_temp->y;
				}
			}
			HX_STACK_LINE(224)
			{
				HX_STACK_LINE(224)
				_temp->z = _z;
				HX_STACK_LINE(224)
				if ((_temp->_construct)){
					HX_STACK_LINE(224)
					_temp->z;
				}
				else{
					HX_STACK_LINE(224)
					if (((bool((_temp->listen_z != null())) && bool(!(_temp->ignore_listeners))))){
						HX_STACK_LINE(224)
						_temp->listen_z(_z);
					}
					HX_STACK_LINE(224)
					_temp->z;
				}
			}
			HX_STACK_LINE(224)
			_temp->ignore_listeners = prev;
			HX_STACK_LINE(224)
			if (((bool((_temp->listen_x != null())) && bool(!(_temp->ignore_listeners))))){
				HX_STACK_LINE(224)
				_temp->listen_x(_temp->x);
			}
			HX_STACK_LINE(224)
			if (((bool((_temp->listen_y != null())) && bool(!(_temp->ignore_listeners))))){
				HX_STACK_LINE(224)
				_temp->listen_y(_temp->y);
			}
			HX_STACK_LINE(224)
			if (((bool((_temp->listen_z != null())) && bool(!(_temp->ignore_listeners))))){
				HX_STACK_LINE(224)
				_temp->listen_z(_temp->z);
			}
			HX_STACK_LINE(224)
			_this = _temp;
		}
		HX_STACK_LINE(224)
		_g1 = ::Math_obj::sqrt((((_this->x * _this->x) + (_this->y * _this->y)) + (_this->z * _this->z)));
	}
	HX_STACK_LINE(224)
	Float _scale_y = (Float((int)1) / Float(_g1));		HX_STACK_VAR(_scale_y,"_scale_y");
	HX_STACK_LINE(225)
	Float _g2;		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(225)
	{
		HX_STACK_LINE(225)
		::phoenix::Vector _this;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(225)
		{
			HX_STACK_LINE(225)
			Float _x = me->__get((int)8);		HX_STACK_VAR(_x,"_x");
			HX_STACK_LINE(225)
			Float _y = me->__get((int)9);		HX_STACK_VAR(_y,"_y");
			HX_STACK_LINE(225)
			Float _z = me->__get((int)10);		HX_STACK_VAR(_z,"_z");
			HX_STACK_LINE(225)
			bool prev = _temp->ignore_listeners;		HX_STACK_VAR(prev,"prev");
			HX_STACK_LINE(225)
			_temp->ignore_listeners = true;
			HX_STACK_LINE(225)
			{
				HX_STACK_LINE(225)
				_temp->x = _x;
				HX_STACK_LINE(225)
				if ((_temp->_construct)){
					HX_STACK_LINE(225)
					_temp->x;
				}
				else{
					HX_STACK_LINE(225)
					if (((bool((_temp->listen_x != null())) && bool(!(_temp->ignore_listeners))))){
						HX_STACK_LINE(225)
						_temp->listen_x(_x);
					}
					HX_STACK_LINE(225)
					_temp->x;
				}
			}
			HX_STACK_LINE(225)
			{
				HX_STACK_LINE(225)
				_temp->y = _y;
				HX_STACK_LINE(225)
				if ((_temp->_construct)){
					HX_STACK_LINE(225)
					_temp->y;
				}
				else{
					HX_STACK_LINE(225)
					if (((bool((_temp->listen_y != null())) && bool(!(_temp->ignore_listeners))))){
						HX_STACK_LINE(225)
						_temp->listen_y(_y);
					}
					HX_STACK_LINE(225)
					_temp->y;
				}
			}
			HX_STACK_LINE(225)
			{
				HX_STACK_LINE(225)
				_temp->z = _z;
				HX_STACK_LINE(225)
				if ((_temp->_construct)){
					HX_STACK_LINE(225)
					_temp->z;
				}
				else{
					HX_STACK_LINE(225)
					if (((bool((_temp->listen_z != null())) && bool(!(_temp->ignore_listeners))))){
						HX_STACK_LINE(225)
						_temp->listen_z(_z);
					}
					HX_STACK_LINE(225)
					_temp->z;
				}
			}
			HX_STACK_LINE(225)
			_temp->ignore_listeners = prev;
			HX_STACK_LINE(225)
			if (((bool((_temp->listen_x != null())) && bool(!(_temp->ignore_listeners))))){
				HX_STACK_LINE(225)
				_temp->listen_x(_temp->x);
			}
			HX_STACK_LINE(225)
			if (((bool((_temp->listen_y != null())) && bool(!(_temp->ignore_listeners))))){
				HX_STACK_LINE(225)
				_temp->listen_y(_temp->y);
			}
			HX_STACK_LINE(225)
			if (((bool((_temp->listen_z != null())) && bool(!(_temp->ignore_listeners))))){
				HX_STACK_LINE(225)
				_temp->listen_z(_temp->z);
			}
			HX_STACK_LINE(225)
			_this = _temp;
		}
		HX_STACK_LINE(225)
		_g2 = ::Math_obj::sqrt((((_this->x * _this->x) + (_this->y * _this->y)) + (_this->z * _this->z)));
	}
	HX_STACK_LINE(225)
	Float _scale_z = (Float((int)1) / Float(_g2));		HX_STACK_VAR(_scale_z,"_scale_z");
	HX_STACK_LINE(227)
	this->elements[(int)0] = (me->__get((int)0) * _scale_x);
	HX_STACK_LINE(228)
	this->elements[(int)1] = (me->__get((int)1) * _scale_x);
	HX_STACK_LINE(229)
	this->elements[(int)2] = (me->__get((int)2) * _scale_x);
	HX_STACK_LINE(231)
	this->elements[(int)4] = (me->__get((int)4) * _scale_y);
	HX_STACK_LINE(232)
	this->elements[(int)5] = (me->__get((int)5) * _scale_y);
	HX_STACK_LINE(233)
	this->elements[(int)6] = (me->__get((int)6) * _scale_y);
	HX_STACK_LINE(235)
	this->elements[(int)8] = (me->__get((int)8) * _scale_z);
	HX_STACK_LINE(236)
	this->elements[(int)9] = (me->__get((int)9) * _scale_z);
	HX_STACK_LINE(237)
	this->elements[(int)10] = (me->__get((int)10) * _scale_z);
	HX_STACK_LINE(239)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(Matrix_obj,extractRotation,return )

::phoenix::Matrix Matrix_obj::makeRotationFromEuler( ::phoenix::Vector _v,hx::Null< int >  __o__order){
int _order = __o__order.Default(0);
	HX_STACK_FRAME("phoenix.Matrix","makeRotationFromEuler",0xdbee0f25,"phoenix.Matrix.makeRotationFromEuler","phoenix/Matrix.hx",242,0x938b753d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_v,"_v")
	HX_STACK_ARG(_order,"_order")
{
		HX_STACK_LINE(244)
		Array< Float > te = this->elements;		HX_STACK_VAR(te,"te");
		HX_STACK_LINE(246)
		Float x = _v->x;		HX_STACK_VAR(x,"x");
		HX_STACK_LINE(247)
		Float y = _v->y;		HX_STACK_VAR(y,"y");
		HX_STACK_LINE(248)
		Float z = _v->z;		HX_STACK_VAR(z,"z");
		HX_STACK_LINE(250)
		Float a = ::Math_obj::cos(x);		HX_STACK_VAR(a,"a");
		HX_STACK_LINE(250)
		Float b = ::Math_obj::sin(x);		HX_STACK_VAR(b,"b");
		HX_STACK_LINE(251)
		Float c = ::Math_obj::cos(y);		HX_STACK_VAR(c,"c");
		HX_STACK_LINE(251)
		Float d = ::Math_obj::sin(y);		HX_STACK_VAR(d,"d");
		HX_STACK_LINE(252)
		Float e = ::Math_obj::cos(z);		HX_STACK_VAR(e,"e");
		HX_STACK_LINE(252)
		Float f = ::Math_obj::sin(z);		HX_STACK_VAR(f,"f");
		HX_STACK_LINE(254)
		if (((_order == (int)0))){
			HX_STACK_LINE(256)
			Float ae = (a * e);		HX_STACK_VAR(ae,"ae");
			HX_STACK_LINE(256)
			Float af = (a * f);		HX_STACK_VAR(af,"af");
			HX_STACK_LINE(256)
			Float be = (b * e);		HX_STACK_VAR(be,"be");
			HX_STACK_LINE(256)
			Float bf = (b * f);		HX_STACK_VAR(bf,"bf");
			HX_STACK_LINE(258)
			te[(int)0] = (c * e);
			HX_STACK_LINE(259)
			te[(int)4] = (-(c) * f);
			HX_STACK_LINE(260)
			te[(int)8] = d;
			HX_STACK_LINE(262)
			te[(int)1] = (af + (be * d));
			HX_STACK_LINE(263)
			te[(int)5] = (ae - (bf * d));
			HX_STACK_LINE(264)
			te[(int)9] = (-(b) * c);
			HX_STACK_LINE(266)
			te[(int)2] = (bf - (ae * d));
			HX_STACK_LINE(267)
			te[(int)6] = (be + (af * d));
			HX_STACK_LINE(268)
			te[(int)10] = (a * c);
		}
		else{
			HX_STACK_LINE(270)
			if (((_order == (int)1))){
				HX_STACK_LINE(272)
				Float ce = (c * e);		HX_STACK_VAR(ce,"ce");
				HX_STACK_LINE(272)
				Float cf = (c * f);		HX_STACK_VAR(cf,"cf");
				HX_STACK_LINE(272)
				Float de = (d * e);		HX_STACK_VAR(de,"de");
				HX_STACK_LINE(272)
				Float df = (d * f);		HX_STACK_VAR(df,"df");
				HX_STACK_LINE(274)
				te[(int)0] = (ce + (df * b));
				HX_STACK_LINE(275)
				te[(int)4] = ((de * b) - cf);
				HX_STACK_LINE(276)
				te[(int)8] = (a * d);
				HX_STACK_LINE(278)
				te[(int)1] = (a * f);
				HX_STACK_LINE(279)
				te[(int)5] = (a * e);
				HX_STACK_LINE(280)
				te[(int)9] = -(b);
				HX_STACK_LINE(282)
				te[(int)2] = ((cf * b) - de);
				HX_STACK_LINE(283)
				te[(int)6] = (df + (ce * b));
				HX_STACK_LINE(284)
				te[(int)10] = (a * c);
			}
			else{
				HX_STACK_LINE(286)
				if (((_order == (int)2))){
					HX_STACK_LINE(288)
					Float ce = (c * e);		HX_STACK_VAR(ce,"ce");
					HX_STACK_LINE(288)
					Float cf = (c * f);		HX_STACK_VAR(cf,"cf");
					HX_STACK_LINE(288)
					Float de = (d * e);		HX_STACK_VAR(de,"de");
					HX_STACK_LINE(288)
					Float df = (d * f);		HX_STACK_VAR(df,"df");
					HX_STACK_LINE(290)
					te[(int)0] = (ce - (df * b));
					HX_STACK_LINE(291)
					te[(int)4] = (-(a) * f);
					HX_STACK_LINE(292)
					te[(int)8] = (de + (cf * b));
					HX_STACK_LINE(294)
					te[(int)1] = (cf + (de * b));
					HX_STACK_LINE(295)
					te[(int)5] = (a * e);
					HX_STACK_LINE(296)
					te[(int)9] = (df - (ce * b));
					HX_STACK_LINE(298)
					te[(int)2] = (-(a) * d);
					HX_STACK_LINE(299)
					te[(int)6] = b;
					HX_STACK_LINE(300)
					te[(int)10] = (a * c);
				}
				else{
					HX_STACK_LINE(302)
					if (((_order == (int)3))){
						HX_STACK_LINE(304)
						Float ae = (a * e);		HX_STACK_VAR(ae,"ae");
						HX_STACK_LINE(304)
						Float af = (a * f);		HX_STACK_VAR(af,"af");
						HX_STACK_LINE(304)
						Float be = (b * e);		HX_STACK_VAR(be,"be");
						HX_STACK_LINE(304)
						Float bf = (b * f);		HX_STACK_VAR(bf,"bf");
						HX_STACK_LINE(306)
						te[(int)0] = (c * e);
						HX_STACK_LINE(307)
						te[(int)4] = ((be * d) - af);
						HX_STACK_LINE(308)
						te[(int)8] = ((ae * d) + bf);
						HX_STACK_LINE(310)
						te[(int)1] = (c * f);
						HX_STACK_LINE(311)
						te[(int)5] = ((bf * d) + ae);
						HX_STACK_LINE(312)
						te[(int)9] = ((af * d) - be);
						HX_STACK_LINE(314)
						te[(int)2] = -(d);
						HX_STACK_LINE(315)
						te[(int)6] = (b * c);
						HX_STACK_LINE(316)
						te[(int)10] = (a * c);
					}
					else{
						HX_STACK_LINE(318)
						if (((_order == (int)4))){
							HX_STACK_LINE(320)
							Float ac = (a * c);		HX_STACK_VAR(ac,"ac");
							HX_STACK_LINE(320)
							Float ad = (a * d);		HX_STACK_VAR(ad,"ad");
							HX_STACK_LINE(320)
							Float bc = (b * c);		HX_STACK_VAR(bc,"bc");
							HX_STACK_LINE(320)
							Float bd = (b * d);		HX_STACK_VAR(bd,"bd");
							HX_STACK_LINE(322)
							te[(int)0] = (c * e);
							HX_STACK_LINE(323)
							te[(int)4] = (bd - (ac * f));
							HX_STACK_LINE(324)
							te[(int)8] = ((bc * f) + ad);
							HX_STACK_LINE(326)
							te[(int)1] = f;
							HX_STACK_LINE(327)
							te[(int)5] = (a * e);
							HX_STACK_LINE(328)
							te[(int)9] = (-(b) * e);
							HX_STACK_LINE(330)
							te[(int)2] = (-(d) * e);
							HX_STACK_LINE(331)
							te[(int)6] = ((ad * f) + bc);
							HX_STACK_LINE(332)
							te[(int)10] = (ac - (bd * f));
						}
						else{
							HX_STACK_LINE(334)
							if (((_order == (int)5))){
								HX_STACK_LINE(336)
								Float ac = (a * c);		HX_STACK_VAR(ac,"ac");
								HX_STACK_LINE(336)
								Float ad = (a * d);		HX_STACK_VAR(ad,"ad");
								HX_STACK_LINE(336)
								Float bc = (b * c);		HX_STACK_VAR(bc,"bc");
								HX_STACK_LINE(336)
								Float bd = (b * d);		HX_STACK_VAR(bd,"bd");
								HX_STACK_LINE(338)
								te[(int)0] = (c * e);
								HX_STACK_LINE(339)
								te[(int)4] = -(f);
								HX_STACK_LINE(340)
								te[(int)8] = (d * e);
								HX_STACK_LINE(342)
								te[(int)1] = ((ac * f) + bd);
								HX_STACK_LINE(343)
								te[(int)5] = (a * e);
								HX_STACK_LINE(344)
								te[(int)9] = ((ad * f) - bc);
								HX_STACK_LINE(346)
								te[(int)2] = ((bc * f) - ad);
								HX_STACK_LINE(347)
								te[(int)6] = (b * e);
								HX_STACK_LINE(348)
								te[(int)10] = ((bd * f) + ac);
							}
						}
					}
				}
			}
		}
		HX_STACK_LINE(353)
		te[(int)3] = (int)0;
		HX_STACK_LINE(354)
		te[(int)7] = (int)0;
		HX_STACK_LINE(355)
		te[(int)11] = (int)0;
		HX_STACK_LINE(358)
		te[(int)12] = (int)0;
		HX_STACK_LINE(359)
		te[(int)13] = (int)0;
		HX_STACK_LINE(360)
		te[(int)14] = (int)0;
		HX_STACK_LINE(361)
		te[(int)15] = (int)1;
		HX_STACK_LINE(363)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC2(Matrix_obj,makeRotationFromEuler,return )

::phoenix::Matrix Matrix_obj::makeRotationFromQuaternion( ::phoenix::Quaternion q){
	HX_STACK_FRAME("phoenix.Matrix","makeRotationFromQuaternion",0x03148de2,"phoenix.Matrix.makeRotationFromQuaternion","phoenix/Matrix.hx",367,0x938b753d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(q,"q")
	HX_STACK_LINE(369)
	Array< Float > te = this->elements;		HX_STACK_VAR(te,"te");
	HX_STACK_LINE(371)
	Float x2 = (q->x + q->x);		HX_STACK_VAR(x2,"x2");
	HX_STACK_LINE(371)
	Float y2 = (q->y + q->y);		HX_STACK_VAR(y2,"y2");
	HX_STACK_LINE(371)
	Float z2 = (q->z + q->z);		HX_STACK_VAR(z2,"z2");
	HX_STACK_LINE(372)
	Float xx = (q->x * x2);		HX_STACK_VAR(xx,"xx");
	HX_STACK_LINE(372)
	Float xy = (q->x * y2);		HX_STACK_VAR(xy,"xy");
	HX_STACK_LINE(372)
	Float xz = (q->x * z2);		HX_STACK_VAR(xz,"xz");
	HX_STACK_LINE(373)
	Float yy = (q->y * y2);		HX_STACK_VAR(yy,"yy");
	HX_STACK_LINE(373)
	Float yz = (q->y * z2);		HX_STACK_VAR(yz,"yz");
	HX_STACK_LINE(373)
	Float zz = (q->z * z2);		HX_STACK_VAR(zz,"zz");
	HX_STACK_LINE(374)
	Float wx = (q->w * x2);		HX_STACK_VAR(wx,"wx");
	HX_STACK_LINE(374)
	Float wy = (q->w * y2);		HX_STACK_VAR(wy,"wy");
	HX_STACK_LINE(374)
	Float wz = (q->w * z2);		HX_STACK_VAR(wz,"wz");
	HX_STACK_LINE(376)
	te[(int)0] = ((int)1 - ((yy + zz)));
	HX_STACK_LINE(377)
	te[(int)4] = (xy - wz);
	HX_STACK_LINE(378)
	te[(int)8] = (xz + wy);
	HX_STACK_LINE(380)
	te[(int)1] = (xy + wz);
	HX_STACK_LINE(381)
	te[(int)5] = ((int)1 - ((xx + zz)));
	HX_STACK_LINE(382)
	te[(int)9] = (yz - wx);
	HX_STACK_LINE(384)
	te[(int)2] = (xz - wy);
	HX_STACK_LINE(385)
	te[(int)6] = (yz + wx);
	HX_STACK_LINE(386)
	te[(int)10] = ((int)1 - ((xx + yy)));
	HX_STACK_LINE(389)
	te[(int)3] = (int)0;
	HX_STACK_LINE(390)
	te[(int)7] = (int)0;
	HX_STACK_LINE(391)
	te[(int)11] = (int)0;
	HX_STACK_LINE(394)
	te[(int)12] = (int)0;
	HX_STACK_LINE(395)
	te[(int)13] = (int)0;
	HX_STACK_LINE(396)
	te[(int)14] = (int)0;
	HX_STACK_LINE(397)
	te[(int)15] = (int)1;
	HX_STACK_LINE(399)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(Matrix_obj,makeRotationFromQuaternion,return )

::phoenix::Matrix Matrix_obj::lookAt( ::phoenix::Vector _eye,::phoenix::Vector _target,::phoenix::Vector _up){
	HX_STACK_FRAME("phoenix.Matrix","lookAt",0xa8305680,"phoenix.Matrix.lookAt","phoenix/Matrix.hx",404,0x938b753d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_eye,"_eye")
	HX_STACK_ARG(_target,"_target")
	HX_STACK_ARG(_up,"_up")
	HX_STACK_LINE(406)
	::phoenix::Vector _x = ::phoenix::Vector_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(_x,"_x");
	HX_STACK_LINE(407)
	::phoenix::Vector _y = ::phoenix::Vector_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(_y,"_y");
	HX_STACK_LINE(408)
	::phoenix::Vector _z = ::phoenix::Vector_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(_z,"_z");
	HX_STACK_LINE(410)
	Array< Float > te = this->elements;		HX_STACK_VAR(te,"te");
	HX_STACK_LINE(412)
	::phoenix::Vector _g;		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(412)
	{
		HX_STACK_LINE(412)
		::phoenix::Vector _this = ::phoenix::Vector_obj::__new((_target->x - _eye->x),(_target->y - _eye->y),(_target->z - _eye->z),null());		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(412)
		{
			HX_STACK_LINE(412)
			Float b = ::Math_obj::sqrt((((_this->x * _this->x) + (_this->y * _this->y)) + (_this->z * _this->z)));		HX_STACK_VAR(b,"b");
			HX_STACK_LINE(412)
			_g = ::phoenix::Vector_obj::__new((Float(_this->x) / Float(b)),(Float(_this->y) / Float(b)),(Float(_this->z) / Float(b)),null());
		}
	}
	HX_STACK_LINE(412)
	_z = _g;
	HX_STACK_LINE(414)
	Float _g1 = ::Math_obj::sqrt((((_z->x * _z->x) + (_z->y * _z->y)) + (_z->z * _z->z)));		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(414)
	if (((_g1 == (int)0))){
		HX_STACK_LINE(415)
		_z->z = (int)1;
		HX_STACK_LINE(415)
		if ((_z->_construct)){
			HX_STACK_LINE(415)
			_z->z;
		}
		else{
			HX_STACK_LINE(415)
			if (((bool((_z->listen_z != null())) && bool(!(_z->ignore_listeners))))){
				HX_STACK_LINE(415)
				_z->listen_z((int)1);
			}
			HX_STACK_LINE(415)
			_z->z;
		}
	}
	HX_STACK_LINE(418)
	::phoenix::Vector _g2;		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(418)
	{
		HX_STACK_LINE(418)
		::phoenix::Vector _this = ::phoenix::Vector_obj::__new(((_up->y * _z->z) - (_up->z * _z->y)),((_up->z * _z->x) - (_up->x * _z->z)),((_up->x * _z->y) - (_up->y * _z->x)),null());		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(418)
		{
			HX_STACK_LINE(418)
			Float b = ::Math_obj::sqrt((((_this->x * _this->x) + (_this->y * _this->y)) + (_this->z * _this->z)));		HX_STACK_VAR(b,"b");
			HX_STACK_LINE(418)
			_g2 = ::phoenix::Vector_obj::__new((Float(_this->x) / Float(b)),(Float(_this->y) / Float(b)),(Float(_this->z) / Float(b)),null());
		}
	}
	HX_STACK_LINE(418)
	_x = _g2;
	HX_STACK_LINE(420)
	Float _g3 = ::Math_obj::sqrt((((_x->x * _x->x) + (_x->y * _x->y)) + (_x->z * _x->z)));		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(420)
	if (((_g3 == (int)0))){
		HX_STACK_LINE(421)
		{
			HX_STACK_LINE(421)
			::phoenix::Vector _g4 = _z;		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(421)
			{
				HX_STACK_LINE(421)
				Float _x1 = (_g4->x + 0.0001);		HX_STACK_VAR(_x1,"_x1");
				HX_STACK_LINE(421)
				_g4->x = _x1;
				HX_STACK_LINE(421)
				if ((_g4->_construct)){
					HX_STACK_LINE(421)
					_g4->x;
				}
				else{
					HX_STACK_LINE(421)
					if (((bool((_g4->listen_x != null())) && bool(!(_g4->ignore_listeners))))){
						HX_STACK_LINE(421)
						_g4->listen_x(_x1);
					}
					HX_STACK_LINE(421)
					_g4->x;
				}
			}
		}
		HX_STACK_LINE(422)
		::phoenix::Vector _g4;		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(422)
		{
			HX_STACK_LINE(422)
			::phoenix::Vector _this = ::phoenix::Vector_obj::__new(((_up->y * _z->z) - (_up->z * _z->y)),((_up->z * _z->x) - (_up->x * _z->z)),((_up->x * _z->y) - (_up->y * _z->x)),null());		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(422)
			{
				HX_STACK_LINE(422)
				Float b = ::Math_obj::sqrt((((_this->x * _this->x) + (_this->y * _this->y)) + (_this->z * _this->z)));		HX_STACK_VAR(b,"b");
				HX_STACK_LINE(422)
				_g4 = ::phoenix::Vector_obj::__new((Float(_this->x) / Float(b)),(Float(_this->y) / Float(b)),(Float(_this->z) / Float(b)),null());
			}
		}
		HX_STACK_LINE(422)
		_x = _g4;
	}
	HX_STACK_LINE(425)
	::phoenix::Vector _g5 = ::phoenix::Vector_obj::__new(((_z->y * _x->z) - (_z->z * _x->y)),((_z->z * _x->x) - (_z->x * _x->z)),((_z->x * _x->y) - (_z->y * _x->x)),null());		HX_STACK_VAR(_g5,"_g5");
	HX_STACK_LINE(425)
	_y = _g5;
	HX_STACK_LINE(427)
	te[(int)0] = _x->x;
	HX_STACK_LINE(427)
	te[(int)4] = _y->x;
	HX_STACK_LINE(427)
	te[(int)8] = _z->x;
	HX_STACK_LINE(428)
	te[(int)1] = _x->y;
	HX_STACK_LINE(428)
	te[(int)5] = _y->y;
	HX_STACK_LINE(428)
	te[(int)9] = _z->y;
	HX_STACK_LINE(429)
	te[(int)2] = _x->z;
	HX_STACK_LINE(429)
	te[(int)6] = _y->z;
	HX_STACK_LINE(429)
	te[(int)10] = _z->z;
	HX_STACK_LINE(431)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC3(Matrix_obj,lookAt,return )

::phoenix::Matrix Matrix_obj::multiply( ::phoenix::Matrix _m){
	HX_STACK_FRAME("phoenix.Matrix","multiply",0x9e7d32f2,"phoenix.Matrix.multiply","phoenix/Matrix.hx",438,0x938b753d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_m,"_m")
	HX_STACK_LINE(438)
	Array< Float > ae = this->elements;		HX_STACK_VAR(ae,"ae");
	HX_STACK_LINE(438)
	Array< Float > be = _m->elements;		HX_STACK_VAR(be,"be");
	HX_STACK_LINE(438)
	Array< Float > te = this->elements;		HX_STACK_VAR(te,"te");
	HX_STACK_LINE(438)
	Float a11 = ae->__get((int)0);		HX_STACK_VAR(a11,"a11");
	HX_STACK_LINE(438)
	Float a12 = ae->__get((int)4);		HX_STACK_VAR(a12,"a12");
	HX_STACK_LINE(438)
	Float a13 = ae->__get((int)8);		HX_STACK_VAR(a13,"a13");
	HX_STACK_LINE(438)
	Float a14 = ae->__get((int)12);		HX_STACK_VAR(a14,"a14");
	HX_STACK_LINE(438)
	Float a21 = ae->__get((int)1);		HX_STACK_VAR(a21,"a21");
	HX_STACK_LINE(438)
	Float a22 = ae->__get((int)5);		HX_STACK_VAR(a22,"a22");
	HX_STACK_LINE(438)
	Float a23 = ae->__get((int)9);		HX_STACK_VAR(a23,"a23");
	HX_STACK_LINE(438)
	Float a24 = ae->__get((int)13);		HX_STACK_VAR(a24,"a24");
	HX_STACK_LINE(438)
	Float a31 = ae->__get((int)2);		HX_STACK_VAR(a31,"a31");
	HX_STACK_LINE(438)
	Float a32 = ae->__get((int)6);		HX_STACK_VAR(a32,"a32");
	HX_STACK_LINE(438)
	Float a33 = ae->__get((int)10);		HX_STACK_VAR(a33,"a33");
	HX_STACK_LINE(438)
	Float a34 = ae->__get((int)14);		HX_STACK_VAR(a34,"a34");
	HX_STACK_LINE(438)
	Float a41 = ae->__get((int)3);		HX_STACK_VAR(a41,"a41");
	HX_STACK_LINE(438)
	Float a42 = ae->__get((int)7);		HX_STACK_VAR(a42,"a42");
	HX_STACK_LINE(438)
	Float a43 = ae->__get((int)11);		HX_STACK_VAR(a43,"a43");
	HX_STACK_LINE(438)
	Float a44 = ae->__get((int)15);		HX_STACK_VAR(a44,"a44");
	HX_STACK_LINE(438)
	Float b11 = be->__get((int)0);		HX_STACK_VAR(b11,"b11");
	HX_STACK_LINE(438)
	Float b12 = be->__get((int)4);		HX_STACK_VAR(b12,"b12");
	HX_STACK_LINE(438)
	Float b13 = be->__get((int)8);		HX_STACK_VAR(b13,"b13");
	HX_STACK_LINE(438)
	Float b14 = be->__get((int)12);		HX_STACK_VAR(b14,"b14");
	HX_STACK_LINE(438)
	Float b21 = be->__get((int)1);		HX_STACK_VAR(b21,"b21");
	HX_STACK_LINE(438)
	Float b22 = be->__get((int)5);		HX_STACK_VAR(b22,"b22");
	HX_STACK_LINE(438)
	Float b23 = be->__get((int)9);		HX_STACK_VAR(b23,"b23");
	HX_STACK_LINE(438)
	Float b24 = be->__get((int)13);		HX_STACK_VAR(b24,"b24");
	HX_STACK_LINE(438)
	Float b31 = be->__get((int)2);		HX_STACK_VAR(b31,"b31");
	HX_STACK_LINE(438)
	Float b32 = be->__get((int)6);		HX_STACK_VAR(b32,"b32");
	HX_STACK_LINE(438)
	Float b33 = be->__get((int)10);		HX_STACK_VAR(b33,"b33");
	HX_STACK_LINE(438)
	Float b34 = be->__get((int)14);		HX_STACK_VAR(b34,"b34");
	HX_STACK_LINE(438)
	Float b41 = be->__get((int)3);		HX_STACK_VAR(b41,"b41");
	HX_STACK_LINE(438)
	Float b42 = be->__get((int)7);		HX_STACK_VAR(b42,"b42");
	HX_STACK_LINE(438)
	Float b43 = be->__get((int)11);		HX_STACK_VAR(b43,"b43");
	HX_STACK_LINE(438)
	Float b44 = be->__get((int)15);		HX_STACK_VAR(b44,"b44");
	HX_STACK_LINE(438)
	te[(int)0] = ((((a11 * b11) + (a12 * b21)) + (a13 * b31)) + (a14 * b41));
	HX_STACK_LINE(438)
	te[(int)4] = ((((a11 * b12) + (a12 * b22)) + (a13 * b32)) + (a14 * b42));
	HX_STACK_LINE(438)
	te[(int)8] = ((((a11 * b13) + (a12 * b23)) + (a13 * b33)) + (a14 * b43));
	HX_STACK_LINE(438)
	te[(int)12] = ((((a11 * b14) + (a12 * b24)) + (a13 * b34)) + (a14 * b44));
	HX_STACK_LINE(438)
	te[(int)1] = ((((a21 * b11) + (a22 * b21)) + (a23 * b31)) + (a24 * b41));
	HX_STACK_LINE(438)
	te[(int)5] = ((((a21 * b12) + (a22 * b22)) + (a23 * b32)) + (a24 * b42));
	HX_STACK_LINE(438)
	te[(int)9] = ((((a21 * b13) + (a22 * b23)) + (a23 * b33)) + (a24 * b43));
	HX_STACK_LINE(438)
	te[(int)13] = ((((a21 * b14) + (a22 * b24)) + (a23 * b34)) + (a24 * b44));
	HX_STACK_LINE(438)
	te[(int)2] = ((((a31 * b11) + (a32 * b21)) + (a33 * b31)) + (a34 * b41));
	HX_STACK_LINE(438)
	te[(int)6] = ((((a31 * b12) + (a32 * b22)) + (a33 * b32)) + (a34 * b42));
	HX_STACK_LINE(438)
	te[(int)10] = ((((a31 * b13) + (a32 * b23)) + (a33 * b33)) + (a34 * b43));
	HX_STACK_LINE(438)
	te[(int)14] = ((((a31 * b14) + (a32 * b24)) + (a33 * b34)) + (a34 * b44));
	HX_STACK_LINE(438)
	te[(int)3] = ((((a41 * b11) + (a42 * b21)) + (a43 * b31)) + (a44 * b41));
	HX_STACK_LINE(438)
	te[(int)7] = ((((a41 * b12) + (a42 * b22)) + (a43 * b32)) + (a44 * b42));
	HX_STACK_LINE(438)
	te[(int)11] = ((((a41 * b13) + (a42 * b23)) + (a43 * b33)) + (a44 * b43));
	HX_STACK_LINE(438)
	te[(int)15] = ((((a41 * b14) + (a42 * b24)) + (a43 * b34)) + (a44 * b44));
	HX_STACK_LINE(438)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(Matrix_obj,multiply,return )

::phoenix::Matrix Matrix_obj::multiplyMatrices( ::phoenix::Matrix _a,::phoenix::Matrix _b){
	HX_STACK_FRAME("phoenix.Matrix","multiplyMatrices",0xb2c9a2ac,"phoenix.Matrix.multiplyMatrices","phoenix/Matrix.hx",443,0x938b753d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_a,"_a")
	HX_STACK_ARG(_b,"_b")
	HX_STACK_LINE(445)
	Array< Float > ae = _a->elements;		HX_STACK_VAR(ae,"ae");
	HX_STACK_LINE(446)
	Array< Float > be = _b->elements;		HX_STACK_VAR(be,"be");
	HX_STACK_LINE(447)
	Array< Float > te = this->elements;		HX_STACK_VAR(te,"te");
	HX_STACK_LINE(449)
	Float a11 = ae->__get((int)0);		HX_STACK_VAR(a11,"a11");
	HX_STACK_LINE(449)
	Float a12 = ae->__get((int)4);		HX_STACK_VAR(a12,"a12");
	HX_STACK_LINE(449)
	Float a13 = ae->__get((int)8);		HX_STACK_VAR(a13,"a13");
	HX_STACK_LINE(449)
	Float a14 = ae->__get((int)12);		HX_STACK_VAR(a14,"a14");
	HX_STACK_LINE(450)
	Float a21 = ae->__get((int)1);		HX_STACK_VAR(a21,"a21");
	HX_STACK_LINE(450)
	Float a22 = ae->__get((int)5);		HX_STACK_VAR(a22,"a22");
	HX_STACK_LINE(450)
	Float a23 = ae->__get((int)9);		HX_STACK_VAR(a23,"a23");
	HX_STACK_LINE(450)
	Float a24 = ae->__get((int)13);		HX_STACK_VAR(a24,"a24");
	HX_STACK_LINE(451)
	Float a31 = ae->__get((int)2);		HX_STACK_VAR(a31,"a31");
	HX_STACK_LINE(451)
	Float a32 = ae->__get((int)6);		HX_STACK_VAR(a32,"a32");
	HX_STACK_LINE(451)
	Float a33 = ae->__get((int)10);		HX_STACK_VAR(a33,"a33");
	HX_STACK_LINE(451)
	Float a34 = ae->__get((int)14);		HX_STACK_VAR(a34,"a34");
	HX_STACK_LINE(452)
	Float a41 = ae->__get((int)3);		HX_STACK_VAR(a41,"a41");
	HX_STACK_LINE(452)
	Float a42 = ae->__get((int)7);		HX_STACK_VAR(a42,"a42");
	HX_STACK_LINE(452)
	Float a43 = ae->__get((int)11);		HX_STACK_VAR(a43,"a43");
	HX_STACK_LINE(452)
	Float a44 = ae->__get((int)15);		HX_STACK_VAR(a44,"a44");
	HX_STACK_LINE(454)
	Float b11 = be->__get((int)0);		HX_STACK_VAR(b11,"b11");
	HX_STACK_LINE(454)
	Float b12 = be->__get((int)4);		HX_STACK_VAR(b12,"b12");
	HX_STACK_LINE(454)
	Float b13 = be->__get((int)8);		HX_STACK_VAR(b13,"b13");
	HX_STACK_LINE(454)
	Float b14 = be->__get((int)12);		HX_STACK_VAR(b14,"b14");
	HX_STACK_LINE(455)
	Float b21 = be->__get((int)1);		HX_STACK_VAR(b21,"b21");
	HX_STACK_LINE(455)
	Float b22 = be->__get((int)5);		HX_STACK_VAR(b22,"b22");
	HX_STACK_LINE(455)
	Float b23 = be->__get((int)9);		HX_STACK_VAR(b23,"b23");
	HX_STACK_LINE(455)
	Float b24 = be->__get((int)13);		HX_STACK_VAR(b24,"b24");
	HX_STACK_LINE(456)
	Float b31 = be->__get((int)2);		HX_STACK_VAR(b31,"b31");
	HX_STACK_LINE(456)
	Float b32 = be->__get((int)6);		HX_STACK_VAR(b32,"b32");
	HX_STACK_LINE(456)
	Float b33 = be->__get((int)10);		HX_STACK_VAR(b33,"b33");
	HX_STACK_LINE(456)
	Float b34 = be->__get((int)14);		HX_STACK_VAR(b34,"b34");
	HX_STACK_LINE(457)
	Float b41 = be->__get((int)3);		HX_STACK_VAR(b41,"b41");
	HX_STACK_LINE(457)
	Float b42 = be->__get((int)7);		HX_STACK_VAR(b42,"b42");
	HX_STACK_LINE(457)
	Float b43 = be->__get((int)11);		HX_STACK_VAR(b43,"b43");
	HX_STACK_LINE(457)
	Float b44 = be->__get((int)15);		HX_STACK_VAR(b44,"b44");
	HX_STACK_LINE(459)
	te[(int)0] = ((((a11 * b11) + (a12 * b21)) + (a13 * b31)) + (a14 * b41));
	HX_STACK_LINE(460)
	te[(int)4] = ((((a11 * b12) + (a12 * b22)) + (a13 * b32)) + (a14 * b42));
	HX_STACK_LINE(461)
	te[(int)8] = ((((a11 * b13) + (a12 * b23)) + (a13 * b33)) + (a14 * b43));
	HX_STACK_LINE(462)
	te[(int)12] = ((((a11 * b14) + (a12 * b24)) + (a13 * b34)) + (a14 * b44));
	HX_STACK_LINE(464)
	te[(int)1] = ((((a21 * b11) + (a22 * b21)) + (a23 * b31)) + (a24 * b41));
	HX_STACK_LINE(465)
	te[(int)5] = ((((a21 * b12) + (a22 * b22)) + (a23 * b32)) + (a24 * b42));
	HX_STACK_LINE(466)
	te[(int)9] = ((((a21 * b13) + (a22 * b23)) + (a23 * b33)) + (a24 * b43));
	HX_STACK_LINE(467)
	te[(int)13] = ((((a21 * b14) + (a22 * b24)) + (a23 * b34)) + (a24 * b44));
	HX_STACK_LINE(469)
	te[(int)2] = ((((a31 * b11) + (a32 * b21)) + (a33 * b31)) + (a34 * b41));
	HX_STACK_LINE(470)
	te[(int)6] = ((((a31 * b12) + (a32 * b22)) + (a33 * b32)) + (a34 * b42));
	HX_STACK_LINE(471)
	te[(int)10] = ((((a31 * b13) + (a32 * b23)) + (a33 * b33)) + (a34 * b43));
	HX_STACK_LINE(472)
	te[(int)14] = ((((a31 * b14) + (a32 * b24)) + (a33 * b34)) + (a34 * b44));
	HX_STACK_LINE(474)
	te[(int)3] = ((((a41 * b11) + (a42 * b21)) + (a43 * b31)) + (a44 * b41));
	HX_STACK_LINE(475)
	te[(int)7] = ((((a41 * b12) + (a42 * b22)) + (a43 * b32)) + (a44 * b42));
	HX_STACK_LINE(476)
	te[(int)11] = ((((a41 * b13) + (a42 * b23)) + (a43 * b33)) + (a44 * b43));
	HX_STACK_LINE(477)
	te[(int)15] = ((((a41 * b14) + (a42 * b24)) + (a43 * b34)) + (a44 * b44));
	HX_STACK_LINE(479)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC2(Matrix_obj,multiplyMatrices,return )

::phoenix::Matrix Matrix_obj::multiplyToArray( ::phoenix::Matrix _a,::phoenix::Matrix _b,Array< Float > _r){
	HX_STACK_FRAME("phoenix.Matrix","multiplyToArray",0x8681d14c,"phoenix.Matrix.multiplyToArray","phoenix/Matrix.hx",484,0x938b753d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_a,"_a")
	HX_STACK_ARG(_b,"_b")
	HX_STACK_ARG(_r,"_r")
	HX_STACK_LINE(486)
	Array< Float > te = this->elements;		HX_STACK_VAR(te,"te");
	HX_STACK_LINE(488)
	{
		HX_STACK_LINE(488)
		Array< Float > ae = _a->elements;		HX_STACK_VAR(ae,"ae");
		HX_STACK_LINE(488)
		Array< Float > be = _b->elements;		HX_STACK_VAR(be,"be");
		HX_STACK_LINE(488)
		Array< Float > te1 = this->elements;		HX_STACK_VAR(te1,"te1");
		HX_STACK_LINE(488)
		Float a11 = ae->__get((int)0);		HX_STACK_VAR(a11,"a11");
		HX_STACK_LINE(488)
		Float a12 = ae->__get((int)4);		HX_STACK_VAR(a12,"a12");
		HX_STACK_LINE(488)
		Float a13 = ae->__get((int)8);		HX_STACK_VAR(a13,"a13");
		HX_STACK_LINE(488)
		Float a14 = ae->__get((int)12);		HX_STACK_VAR(a14,"a14");
		HX_STACK_LINE(488)
		Float a21 = ae->__get((int)1);		HX_STACK_VAR(a21,"a21");
		HX_STACK_LINE(488)
		Float a22 = ae->__get((int)5);		HX_STACK_VAR(a22,"a22");
		HX_STACK_LINE(488)
		Float a23 = ae->__get((int)9);		HX_STACK_VAR(a23,"a23");
		HX_STACK_LINE(488)
		Float a24 = ae->__get((int)13);		HX_STACK_VAR(a24,"a24");
		HX_STACK_LINE(488)
		Float a31 = ae->__get((int)2);		HX_STACK_VAR(a31,"a31");
		HX_STACK_LINE(488)
		Float a32 = ae->__get((int)6);		HX_STACK_VAR(a32,"a32");
		HX_STACK_LINE(488)
		Float a33 = ae->__get((int)10);		HX_STACK_VAR(a33,"a33");
		HX_STACK_LINE(488)
		Float a34 = ae->__get((int)14);		HX_STACK_VAR(a34,"a34");
		HX_STACK_LINE(488)
		Float a41 = ae->__get((int)3);		HX_STACK_VAR(a41,"a41");
		HX_STACK_LINE(488)
		Float a42 = ae->__get((int)7);		HX_STACK_VAR(a42,"a42");
		HX_STACK_LINE(488)
		Float a43 = ae->__get((int)11);		HX_STACK_VAR(a43,"a43");
		HX_STACK_LINE(488)
		Float a44 = ae->__get((int)15);		HX_STACK_VAR(a44,"a44");
		HX_STACK_LINE(488)
		Float b11 = be->__get((int)0);		HX_STACK_VAR(b11,"b11");
		HX_STACK_LINE(488)
		Float b12 = be->__get((int)4);		HX_STACK_VAR(b12,"b12");
		HX_STACK_LINE(488)
		Float b13 = be->__get((int)8);		HX_STACK_VAR(b13,"b13");
		HX_STACK_LINE(488)
		Float b14 = be->__get((int)12);		HX_STACK_VAR(b14,"b14");
		HX_STACK_LINE(488)
		Float b21 = be->__get((int)1);		HX_STACK_VAR(b21,"b21");
		HX_STACK_LINE(488)
		Float b22 = be->__get((int)5);		HX_STACK_VAR(b22,"b22");
		HX_STACK_LINE(488)
		Float b23 = be->__get((int)9);		HX_STACK_VAR(b23,"b23");
		HX_STACK_LINE(488)
		Float b24 = be->__get((int)13);		HX_STACK_VAR(b24,"b24");
		HX_STACK_LINE(488)
		Float b31 = be->__get((int)2);		HX_STACK_VAR(b31,"b31");
		HX_STACK_LINE(488)
		Float b32 = be->__get((int)6);		HX_STACK_VAR(b32,"b32");
		HX_STACK_LINE(488)
		Float b33 = be->__get((int)10);		HX_STACK_VAR(b33,"b33");
		HX_STACK_LINE(488)
		Float b34 = be->__get((int)14);		HX_STACK_VAR(b34,"b34");
		HX_STACK_LINE(488)
		Float b41 = be->__get((int)3);		HX_STACK_VAR(b41,"b41");
		HX_STACK_LINE(488)
		Float b42 = be->__get((int)7);		HX_STACK_VAR(b42,"b42");
		HX_STACK_LINE(488)
		Float b43 = be->__get((int)11);		HX_STACK_VAR(b43,"b43");
		HX_STACK_LINE(488)
		Float b44 = be->__get((int)15);		HX_STACK_VAR(b44,"b44");
		HX_STACK_LINE(488)
		te1[(int)0] = ((((a11 * b11) + (a12 * b21)) + (a13 * b31)) + (a14 * b41));
		HX_STACK_LINE(488)
		te1[(int)4] = ((((a11 * b12) + (a12 * b22)) + (a13 * b32)) + (a14 * b42));
		HX_STACK_LINE(488)
		te1[(int)8] = ((((a11 * b13) + (a12 * b23)) + (a13 * b33)) + (a14 * b43));
		HX_STACK_LINE(488)
		te1[(int)12] = ((((a11 * b14) + (a12 * b24)) + (a13 * b34)) + (a14 * b44));
		HX_STACK_LINE(488)
		te1[(int)1] = ((((a21 * b11) + (a22 * b21)) + (a23 * b31)) + (a24 * b41));
		HX_STACK_LINE(488)
		te1[(int)5] = ((((a21 * b12) + (a22 * b22)) + (a23 * b32)) + (a24 * b42));
		HX_STACK_LINE(488)
		te1[(int)9] = ((((a21 * b13) + (a22 * b23)) + (a23 * b33)) + (a24 * b43));
		HX_STACK_LINE(488)
		te1[(int)13] = ((((a21 * b14) + (a22 * b24)) + (a23 * b34)) + (a24 * b44));
		HX_STACK_LINE(488)
		te1[(int)2] = ((((a31 * b11) + (a32 * b21)) + (a33 * b31)) + (a34 * b41));
		HX_STACK_LINE(488)
		te1[(int)6] = ((((a31 * b12) + (a32 * b22)) + (a33 * b32)) + (a34 * b42));
		HX_STACK_LINE(488)
		te1[(int)10] = ((((a31 * b13) + (a32 * b23)) + (a33 * b33)) + (a34 * b43));
		HX_STACK_LINE(488)
		te1[(int)14] = ((((a31 * b14) + (a32 * b24)) + (a33 * b34)) + (a34 * b44));
		HX_STACK_LINE(488)
		te1[(int)3] = ((((a41 * b11) + (a42 * b21)) + (a43 * b31)) + (a44 * b41));
		HX_STACK_LINE(488)
		te1[(int)7] = ((((a41 * b12) + (a42 * b22)) + (a43 * b32)) + (a44 * b42));
		HX_STACK_LINE(488)
		te1[(int)11] = ((((a41 * b13) + (a42 * b23)) + (a43 * b33)) + (a44 * b43));
		HX_STACK_LINE(488)
		te1[(int)15] = ((((a41 * b14) + (a42 * b24)) + (a43 * b34)) + (a44 * b44));
		HX_STACK_LINE(488)
		hx::ObjectPtr<OBJ_>(this);
	}
	HX_STACK_LINE(490)
	_r[(int)0] = te->__get((int)0);
	HX_STACK_LINE(490)
	_r[(int)1] = te->__get((int)1);
	HX_STACK_LINE(490)
	_r[(int)2] = te->__get((int)2);
	HX_STACK_LINE(490)
	_r[(int)3] = te->__get((int)3);
	HX_STACK_LINE(491)
	_r[(int)4] = te->__get((int)4);
	HX_STACK_LINE(491)
	_r[(int)5] = te->__get((int)5);
	HX_STACK_LINE(491)
	_r[(int)6] = te->__get((int)6);
	HX_STACK_LINE(491)
	_r[(int)7] = te->__get((int)7);
	HX_STACK_LINE(492)
	_r[(int)8] = te->__get((int)8);
	HX_STACK_LINE(492)
	_r[(int)9] = te->__get((int)9);
	HX_STACK_LINE(492)
	_r[(int)10] = te->__get((int)10);
	HX_STACK_LINE(492)
	_r[(int)11] = te->__get((int)11);
	HX_STACK_LINE(493)
	_r[(int)12] = te->__get((int)12);
	HX_STACK_LINE(493)
	_r[(int)13] = te->__get((int)13);
	HX_STACK_LINE(493)
	_r[(int)14] = te->__get((int)14);
	HX_STACK_LINE(493)
	_r[(int)15] = te->__get((int)15);
	HX_STACK_LINE(495)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC3(Matrix_obj,multiplyToArray,return )

::phoenix::Matrix Matrix_obj::multiplyScalar( Float _s){
	HX_STACK_FRAME("phoenix.Matrix","multiplyScalar",0x0b734fbe,"phoenix.Matrix.multiplyScalar","phoenix/Matrix.hx",500,0x938b753d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_s,"_s")
	HX_STACK_LINE(502)
	Array< Float > te = this->elements;		HX_STACK_VAR(te,"te");
	HX_STACK_LINE(504)
	hx::MultEq(te[(int)0],_s);
	HX_STACK_LINE(504)
	hx::MultEq(te[(int)4],_s);
	HX_STACK_LINE(504)
	hx::MultEq(te[(int)8],_s);
	HX_STACK_LINE(504)
	hx::MultEq(te[(int)12],_s);
	HX_STACK_LINE(505)
	hx::MultEq(te[(int)1],_s);
	HX_STACK_LINE(505)
	hx::MultEq(te[(int)5],_s);
	HX_STACK_LINE(505)
	hx::MultEq(te[(int)9],_s);
	HX_STACK_LINE(505)
	hx::MultEq(te[(int)13],_s);
	HX_STACK_LINE(506)
	hx::MultEq(te[(int)2],_s);
	HX_STACK_LINE(506)
	hx::MultEq(te[(int)6],_s);
	HX_STACK_LINE(506)
	hx::MultEq(te[(int)10],_s);
	HX_STACK_LINE(506)
	hx::MultEq(te[(int)14],_s);
	HX_STACK_LINE(507)
	hx::MultEq(te[(int)3],_s);
	HX_STACK_LINE(507)
	hx::MultEq(te[(int)7],_s);
	HX_STACK_LINE(507)
	hx::MultEq(te[(int)11],_s);
	HX_STACK_LINE(507)
	hx::MultEq(te[(int)15],_s);
	HX_STACK_LINE(509)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(Matrix_obj,multiplyScalar,return )

Array< Float > Matrix_obj::multiplyVector3Array( Array< Float > _a){
	HX_STACK_FRAME("phoenix.Matrix","multiplyVector3Array",0xbd148b7b,"phoenix.Matrix.multiplyVector3Array","phoenix/Matrix.hx",514,0x938b753d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_a,"_a")
	HX_STACK_LINE(516)
	::phoenix::Vector v1 = ::phoenix::Vector_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(v1,"v1");
	HX_STACK_LINE(517)
	int i = (int)0;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(518)
	int il = _a->length;		HX_STACK_VAR(il,"il");
	HX_STACK_LINE(520)
	while((true)){
		HX_STACK_LINE(520)
		if ((!(((i < il))))){
			HX_STACK_LINE(520)
			break;
		}
		HX_STACK_LINE(522)
		{
			HX_STACK_LINE(522)
			Float _x = _a->__get(i);		HX_STACK_VAR(_x,"_x");
			HX_STACK_LINE(522)
			v1->x = _x;
			HX_STACK_LINE(522)
			if ((v1->_construct)){
				HX_STACK_LINE(522)
				v1->x;
			}
			else{
				HX_STACK_LINE(522)
				if (((bool((v1->listen_x != null())) && bool(!(v1->ignore_listeners))))){
					HX_STACK_LINE(522)
					v1->listen_x(_x);
				}
				HX_STACK_LINE(522)
				v1->x;
			}
		}
		HX_STACK_LINE(523)
		{
			HX_STACK_LINE(523)
			Float _y = _a->__get((i + (int)1));		HX_STACK_VAR(_y,"_y");
			HX_STACK_LINE(523)
			v1->y = _y;
			HX_STACK_LINE(523)
			if ((v1->_construct)){
				HX_STACK_LINE(523)
				v1->y;
			}
			else{
				HX_STACK_LINE(523)
				if (((bool((v1->listen_y != null())) && bool(!(v1->ignore_listeners))))){
					HX_STACK_LINE(523)
					v1->listen_y(_y);
				}
				HX_STACK_LINE(523)
				v1->y;
			}
		}
		HX_STACK_LINE(524)
		{
			HX_STACK_LINE(524)
			Float _z = _a->__get((i + (int)2));		HX_STACK_VAR(_z,"_z");
			HX_STACK_LINE(524)
			v1->z = _z;
			HX_STACK_LINE(524)
			if ((v1->_construct)){
				HX_STACK_LINE(524)
				v1->z;
			}
			else{
				HX_STACK_LINE(524)
				if (((bool((v1->listen_z != null())) && bool(!(v1->ignore_listeners))))){
					HX_STACK_LINE(524)
					v1->listen_z(_z);
				}
				HX_STACK_LINE(524)
				v1->z;
			}
		}
		HX_STACK_LINE(526)
		{
			HX_STACK_LINE(526)
			Array< Float > e = this->elements;		HX_STACK_VAR(e,"e");
			HX_STACK_LINE(526)
			Float x = v1->x;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(526)
			Float y = v1->y;		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(526)
			Float z = v1->z;		HX_STACK_VAR(z,"z");
			HX_STACK_LINE(526)
			Float d = (Float((int)1) / Float((((((e->__get((int)3) * x) + (e->__get((int)7) * y)) + (e->__get((int)11) * z)) + e->__get((int)15)))));		HX_STACK_VAR(d,"d");
			HX_STACK_LINE(526)
			{
				HX_STACK_LINE(526)
				Float _x = ((((((e->__get((int)0) * x) + (e->__get((int)4) * y)) + (e->__get((int)8) * z)) + e->__get((int)12))) * d);		HX_STACK_VAR(_x,"_x");
				HX_STACK_LINE(526)
				Float _y = ((((((e->__get((int)1) * x) + (e->__get((int)5) * y)) + (e->__get((int)9) * z)) + e->__get((int)13))) * d);		HX_STACK_VAR(_y,"_y");
				HX_STACK_LINE(526)
				Float _z = ((((((e->__get((int)2) * x) + (e->__get((int)6) * y)) + (e->__get((int)10) * z)) + e->__get((int)14))) * d);		HX_STACK_VAR(_z,"_z");
				HX_STACK_LINE(526)
				bool prev = v1->ignore_listeners;		HX_STACK_VAR(prev,"prev");
				HX_STACK_LINE(526)
				v1->ignore_listeners = true;
				HX_STACK_LINE(526)
				{
					HX_STACK_LINE(526)
					v1->x = _x;
					HX_STACK_LINE(526)
					if ((v1->_construct)){
						HX_STACK_LINE(526)
						v1->x;
					}
					else{
						HX_STACK_LINE(526)
						if (((bool((v1->listen_x != null())) && bool(!(v1->ignore_listeners))))){
							HX_STACK_LINE(526)
							v1->listen_x(_x);
						}
						HX_STACK_LINE(526)
						v1->x;
					}
				}
				HX_STACK_LINE(526)
				{
					HX_STACK_LINE(526)
					v1->y = _y;
					HX_STACK_LINE(526)
					if ((v1->_construct)){
						HX_STACK_LINE(526)
						v1->y;
					}
					else{
						HX_STACK_LINE(526)
						if (((bool((v1->listen_y != null())) && bool(!(v1->ignore_listeners))))){
							HX_STACK_LINE(526)
							v1->listen_y(_y);
						}
						HX_STACK_LINE(526)
						v1->y;
					}
				}
				HX_STACK_LINE(526)
				{
					HX_STACK_LINE(526)
					v1->z = _z;
					HX_STACK_LINE(526)
					if ((v1->_construct)){
						HX_STACK_LINE(526)
						v1->z;
					}
					else{
						HX_STACK_LINE(526)
						if (((bool((v1->listen_z != null())) && bool(!(v1->ignore_listeners))))){
							HX_STACK_LINE(526)
							v1->listen_z(_z);
						}
						HX_STACK_LINE(526)
						v1->z;
					}
				}
				HX_STACK_LINE(526)
				v1->ignore_listeners = prev;
				HX_STACK_LINE(526)
				if (((bool((v1->listen_x != null())) && bool(!(v1->ignore_listeners))))){
					HX_STACK_LINE(526)
					v1->listen_x(v1->x);
				}
				HX_STACK_LINE(526)
				if (((bool((v1->listen_y != null())) && bool(!(v1->ignore_listeners))))){
					HX_STACK_LINE(526)
					v1->listen_y(v1->y);
				}
				HX_STACK_LINE(526)
				if (((bool((v1->listen_z != null())) && bool(!(v1->ignore_listeners))))){
					HX_STACK_LINE(526)
					v1->listen_z(v1->z);
				}
				HX_STACK_LINE(526)
				v1;
			}
			HX_STACK_LINE(526)
			v1;
		}
		HX_STACK_LINE(528)
		_a[i] = v1->x;
		HX_STACK_LINE(529)
		_a[(i + (int)1)] = v1->y;
		HX_STACK_LINE(530)
		_a[(i + (int)2)] = v1->z;
		HX_STACK_LINE(532)
		hx::AddEq(i,(int)3);
	}
	HX_STACK_LINE(536)
	return _a;
}


HX_DEFINE_DYNAMIC_FUNC1(Matrix_obj,multiplyVector3Array,return )

Float Matrix_obj::determinant( ){
	HX_STACK_FRAME("phoenix.Matrix","determinant",0xad610187,"phoenix.Matrix.determinant","phoenix/Matrix.hx",540,0x938b753d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(542)
	Array< Float > te = this->elements;		HX_STACK_VAR(te,"te");
	HX_STACK_LINE(544)
	Float n11 = te->__get((int)0);		HX_STACK_VAR(n11,"n11");
	HX_STACK_LINE(544)
	Float n12 = te->__get((int)4);		HX_STACK_VAR(n12,"n12");
	HX_STACK_LINE(544)
	Float n13 = te->__get((int)8);		HX_STACK_VAR(n13,"n13");
	HX_STACK_LINE(544)
	Float n14 = te->__get((int)12);		HX_STACK_VAR(n14,"n14");
	HX_STACK_LINE(545)
	Float n21 = te->__get((int)1);		HX_STACK_VAR(n21,"n21");
	HX_STACK_LINE(545)
	Float n22 = te->__get((int)5);		HX_STACK_VAR(n22,"n22");
	HX_STACK_LINE(545)
	Float n23 = te->__get((int)9);		HX_STACK_VAR(n23,"n23");
	HX_STACK_LINE(545)
	Float n24 = te->__get((int)13);		HX_STACK_VAR(n24,"n24");
	HX_STACK_LINE(546)
	Float n31 = te->__get((int)2);		HX_STACK_VAR(n31,"n31");
	HX_STACK_LINE(546)
	Float n32 = te->__get((int)6);		HX_STACK_VAR(n32,"n32");
	HX_STACK_LINE(546)
	Float n33 = te->__get((int)10);		HX_STACK_VAR(n33,"n33");
	HX_STACK_LINE(546)
	Float n34 = te->__get((int)14);		HX_STACK_VAR(n34,"n34");
	HX_STACK_LINE(547)
	Float n41 = te->__get((int)3);		HX_STACK_VAR(n41,"n41");
	HX_STACK_LINE(547)
	Float n42 = te->__get((int)7);		HX_STACK_VAR(n42,"n42");
	HX_STACK_LINE(547)
	Float n43 = te->__get((int)11);		HX_STACK_VAR(n43,"n43");
	HX_STACK_LINE(547)
	Float n44 = te->__get((int)15);		HX_STACK_VAR(n44,"n44");
	HX_STACK_LINE(549)
	return ((((n41 * ((((((((n14 * n23) * n32) - ((n13 * n24) * n32)) - ((n14 * n22) * n33)) + ((n12 * n24) * n33)) + ((n13 * n22) * n34)) - ((n12 * n23) * n34)))) + (n42 * ((((((((n11 * n23) * n34) - ((n11 * n24) * n33)) + ((n14 * n21) * n33)) - ((n13 * n21) * n34)) + ((n13 * n24) * n31)) - ((n14 * n23) * n31))))) + (n43 * ((((((((n11 * n24) * n32) - ((n11 * n22) * n34)) - ((n14 * n21) * n32)) + ((n12 * n21) * n34)) + ((n14 * n22) * n31)) - ((n12 * n24) * n31))))) + (n44 * ((((((((-(n13) * n22) * n31) - ((n11 * n23) * n32)) + ((n11 * n22) * n33)) + ((n13 * n21) * n32)) - ((n12 * n21) * n33)) + ((n12 * n23) * n31)))));
}


HX_DEFINE_DYNAMIC_FUNC0(Matrix_obj,determinant,return )

::phoenix::Matrix Matrix_obj::transpose( ){
	HX_STACK_FRAME("phoenix.Matrix","transpose",0xba85b3eb,"phoenix.Matrix.transpose","phoenix/Matrix.hx",585,0x938b753d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(587)
	Array< Float > te = this->elements;		HX_STACK_VAR(te,"te");
	HX_STACK_LINE(588)
	Float tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(590)
	tmp = te->__get((int)1);
	HX_STACK_LINE(590)
	te[(int)1] = te->__get((int)4);
	HX_STACK_LINE(590)
	te[(int)4] = tmp;
	HX_STACK_LINE(591)
	tmp = te->__get((int)2);
	HX_STACK_LINE(591)
	te[(int)2] = te->__get((int)8);
	HX_STACK_LINE(591)
	te[(int)8] = tmp;
	HX_STACK_LINE(592)
	tmp = te->__get((int)6);
	HX_STACK_LINE(592)
	te[(int)6] = te->__get((int)9);
	HX_STACK_LINE(592)
	te[(int)9] = tmp;
	HX_STACK_LINE(594)
	tmp = te->__get((int)3);
	HX_STACK_LINE(594)
	te[(int)3] = te->__get((int)12);
	HX_STACK_LINE(594)
	te[(int)12] = tmp;
	HX_STACK_LINE(595)
	tmp = te->__get((int)7);
	HX_STACK_LINE(595)
	te[(int)7] = te->__get((int)13);
	HX_STACK_LINE(595)
	te[(int)13] = tmp;
	HX_STACK_LINE(596)
	tmp = te->__get((int)11);
	HX_STACK_LINE(596)
	te[(int)11] = te->__get((int)14);
	HX_STACK_LINE(596)
	te[(int)14] = tmp;
	HX_STACK_LINE(598)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC0(Matrix_obj,transpose,return )

Array< Float > Matrix_obj::flattenToArray( Array< Float > _flat){
	HX_STACK_FRAME("phoenix.Matrix","flattenToArray",0xbdf5d608,"phoenix.Matrix.flattenToArray","phoenix/Matrix.hx",602,0x938b753d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_flat,"_flat")
	HX_STACK_LINE(604)
	if (((_flat == null()))){
		HX_STACK_LINE(605)
		Array< Float > _g = Array_obj< Float >::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(605)
		_flat = _g;
		HX_STACK_LINE(606)
		{
			HX_STACK_LINE(606)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(606)
			while((true)){
				HX_STACK_LINE(606)
				if ((!(((_g1 < (int)16))))){
					HX_STACK_LINE(606)
					break;
				}
				HX_STACK_LINE(606)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(606)
				_flat->push(0.0);
			}
		}
	}
	HX_STACK_LINE(609)
	Array< Float > te = this->elements;		HX_STACK_VAR(te,"te");
	HX_STACK_LINE(611)
	_flat[(int)0] = te->__get((int)0);
	HX_STACK_LINE(611)
	_flat[(int)1] = te->__get((int)1);
	HX_STACK_LINE(611)
	_flat[(int)2] = te->__get((int)2);
	HX_STACK_LINE(611)
	_flat[(int)3] = te->__get((int)3);
	HX_STACK_LINE(612)
	_flat[(int)4] = te->__get((int)4);
	HX_STACK_LINE(612)
	_flat[(int)5] = te->__get((int)5);
	HX_STACK_LINE(612)
	_flat[(int)6] = te->__get((int)6);
	HX_STACK_LINE(612)
	_flat[(int)7] = te->__get((int)7);
	HX_STACK_LINE(613)
	_flat[(int)8] = te->__get((int)8);
	HX_STACK_LINE(613)
	_flat[(int)9] = te->__get((int)9);
	HX_STACK_LINE(613)
	_flat[(int)10] = te->__get((int)10);
	HX_STACK_LINE(613)
	_flat[(int)11] = te->__get((int)11);
	HX_STACK_LINE(614)
	_flat[(int)12] = te->__get((int)12);
	HX_STACK_LINE(614)
	_flat[(int)13] = te->__get((int)13);
	HX_STACK_LINE(614)
	_flat[(int)14] = te->__get((int)14);
	HX_STACK_LINE(614)
	_flat[(int)15] = te->__get((int)15);
	HX_STACK_LINE(616)
	return _flat;
}


HX_DEFINE_DYNAMIC_FUNC1(Matrix_obj,flattenToArray,return )

Array< Float > Matrix_obj::flattenToArrayOffset( Array< Float > _flat,int _offset){
	HX_STACK_FRAME("phoenix.Matrix","flattenToArrayOffset",0xf67a17bb,"phoenix.Matrix.flattenToArrayOffset","phoenix/Matrix.hx",621,0x938b753d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_flat,"_flat")
	HX_STACK_ARG(_offset,"_offset")
	HX_STACK_LINE(623)
	Array< Float > te = this->elements;		HX_STACK_VAR(te,"te");
	HX_STACK_LINE(625)
	_flat[_offset] = te->__get((int)0);
	HX_STACK_LINE(626)
	_flat[(_offset + (int)1)] = te->__get((int)1);
	HX_STACK_LINE(627)
	_flat[(_offset + (int)2)] = te->__get((int)2);
	HX_STACK_LINE(628)
	_flat[(_offset + (int)3)] = te->__get((int)3);
	HX_STACK_LINE(630)
	_flat[(_offset + (int)4)] = te->__get((int)4);
	HX_STACK_LINE(631)
	_flat[(_offset + (int)5)] = te->__get((int)5);
	HX_STACK_LINE(632)
	_flat[(_offset + (int)6)] = te->__get((int)6);
	HX_STACK_LINE(633)
	_flat[(_offset + (int)7)] = te->__get((int)7);
	HX_STACK_LINE(635)
	_flat[(_offset + (int)8)] = te->__get((int)8);
	HX_STACK_LINE(636)
	_flat[(_offset + (int)9)] = te->__get((int)9);
	HX_STACK_LINE(637)
	_flat[(_offset + (int)10)] = te->__get((int)10);
	HX_STACK_LINE(638)
	_flat[(_offset + (int)11)] = te->__get((int)11);
	HX_STACK_LINE(640)
	_flat[(_offset + (int)12)] = te->__get((int)12);
	HX_STACK_LINE(641)
	_flat[(_offset + (int)13)] = te->__get((int)13);
	HX_STACK_LINE(642)
	_flat[(_offset + (int)14)] = te->__get((int)14);
	HX_STACK_LINE(643)
	_flat[(_offset + (int)15)] = te->__get((int)15);
	HX_STACK_LINE(645)
	return _flat;
}


HX_DEFINE_DYNAMIC_FUNC2(Matrix_obj,flattenToArrayOffset,return )

::phoenix::Matrix Matrix_obj::setPosition( ::phoenix::Vector _v){
	HX_STACK_FRAME("phoenix.Matrix","setPosition",0x76a70e5d,"phoenix.Matrix.setPosition","phoenix/Matrix.hx",650,0x938b753d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_v,"_v")
	HX_STACK_LINE(652)
	Array< Float > te = this->elements;		HX_STACK_VAR(te,"te");
	HX_STACK_LINE(654)
	te[(int)12] = _v->x;
	HX_STACK_LINE(655)
	te[(int)13] = _v->y;
	HX_STACK_LINE(656)
	te[(int)14] = _v->z;
	HX_STACK_LINE(658)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(Matrix_obj,setPosition,return )

::phoenix::Matrix Matrix_obj::inverse( ){
	HX_STACK_FRAME("phoenix.Matrix","inverse",0xa2fb8ea2,"phoenix.Matrix.inverse","phoenix/Matrix.hx",663,0x938b753d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(663)
	::phoenix::Matrix _this;		HX_STACK_VAR(_this,"_this");
	HX_STACK_LINE(663)
	{
		HX_STACK_LINE(663)
		Array< Float > te = this->elements;		HX_STACK_VAR(te,"te");
		HX_STACK_LINE(663)
		_this = ::phoenix::Matrix_obj::__new(te->__get((int)0),te->__get((int)4),te->__get((int)8),te->__get((int)12),te->__get((int)1),te->__get((int)5),te->__get((int)9),te->__get((int)13),te->__get((int)2),te->__get((int)6),te->__get((int)10),te->__get((int)14),te->__get((int)3),te->__get((int)7),te->__get((int)11),te->__get((int)15));
	}
	HX_STACK_LINE(663)
	Array< Float > te = _this->elements;		HX_STACK_VAR(te,"te");
	HX_STACK_LINE(663)
	Array< Float > me = this->elements;		HX_STACK_VAR(me,"me");
	HX_STACK_LINE(663)
	Float n11 = me->__get((int)0);		HX_STACK_VAR(n11,"n11");
	HX_STACK_LINE(663)
	Float n12 = me->__get((int)4);		HX_STACK_VAR(n12,"n12");
	HX_STACK_LINE(663)
	Float n13 = me->__get((int)8);		HX_STACK_VAR(n13,"n13");
	HX_STACK_LINE(663)
	Float n14 = me->__get((int)12);		HX_STACK_VAR(n14,"n14");
	HX_STACK_LINE(663)
	Float n21 = me->__get((int)1);		HX_STACK_VAR(n21,"n21");
	HX_STACK_LINE(663)
	Float n22 = me->__get((int)5);		HX_STACK_VAR(n22,"n22");
	HX_STACK_LINE(663)
	Float n23 = me->__get((int)9);		HX_STACK_VAR(n23,"n23");
	HX_STACK_LINE(663)
	Float n24 = me->__get((int)13);		HX_STACK_VAR(n24,"n24");
	HX_STACK_LINE(663)
	Float n31 = me->__get((int)2);		HX_STACK_VAR(n31,"n31");
	HX_STACK_LINE(663)
	Float n32 = me->__get((int)6);		HX_STACK_VAR(n32,"n32");
	HX_STACK_LINE(663)
	Float n33 = me->__get((int)10);		HX_STACK_VAR(n33,"n33");
	HX_STACK_LINE(663)
	Float n34 = me->__get((int)14);		HX_STACK_VAR(n34,"n34");
	HX_STACK_LINE(663)
	Float n41 = me->__get((int)3);		HX_STACK_VAR(n41,"n41");
	HX_STACK_LINE(663)
	Float n42 = me->__get((int)7);		HX_STACK_VAR(n42,"n42");
	HX_STACK_LINE(663)
	Float n43 = me->__get((int)11);		HX_STACK_VAR(n43,"n43");
	HX_STACK_LINE(663)
	Float n44 = me->__get((int)15);		HX_STACK_VAR(n44,"n44");
	HX_STACK_LINE(663)
	te[(int)0] = (((((((n23 * n34) * n42) - ((n24 * n33) * n42)) + ((n24 * n32) * n43)) - ((n22 * n34) * n43)) - ((n23 * n32) * n44)) + ((n22 * n33) * n44));
	HX_STACK_LINE(663)
	te[(int)4] = (((((((n14 * n33) * n42) - ((n13 * n34) * n42)) - ((n14 * n32) * n43)) + ((n12 * n34) * n43)) + ((n13 * n32) * n44)) - ((n12 * n33) * n44));
	HX_STACK_LINE(663)
	te[(int)8] = (((((((n13 * n24) * n42) - ((n14 * n23) * n42)) + ((n14 * n22) * n43)) - ((n12 * n24) * n43)) - ((n13 * n22) * n44)) + ((n12 * n23) * n44));
	HX_STACK_LINE(663)
	te[(int)12] = (((((((n14 * n23) * n32) - ((n13 * n24) * n32)) - ((n14 * n22) * n33)) + ((n12 * n24) * n33)) + ((n13 * n22) * n34)) - ((n12 * n23) * n34));
	HX_STACK_LINE(663)
	te[(int)1] = (((((((n24 * n33) * n41) - ((n23 * n34) * n41)) - ((n24 * n31) * n43)) + ((n21 * n34) * n43)) + ((n23 * n31) * n44)) - ((n21 * n33) * n44));
	HX_STACK_LINE(663)
	te[(int)5] = (((((((n13 * n34) * n41) - ((n14 * n33) * n41)) + ((n14 * n31) * n43)) - ((n11 * n34) * n43)) - ((n13 * n31) * n44)) + ((n11 * n33) * n44));
	HX_STACK_LINE(663)
	te[(int)9] = (((((((n14 * n23) * n41) - ((n13 * n24) * n41)) - ((n14 * n21) * n43)) + ((n11 * n24) * n43)) + ((n13 * n21) * n44)) - ((n11 * n23) * n44));
	HX_STACK_LINE(663)
	te[(int)13] = (((((((n13 * n24) * n31) - ((n14 * n23) * n31)) + ((n14 * n21) * n33)) - ((n11 * n24) * n33)) - ((n13 * n21) * n34)) + ((n11 * n23) * n34));
	HX_STACK_LINE(663)
	te[(int)2] = (((((((n22 * n34) * n41) - ((n24 * n32) * n41)) + ((n24 * n31) * n42)) - ((n21 * n34) * n42)) - ((n22 * n31) * n44)) + ((n21 * n32) * n44));
	HX_STACK_LINE(663)
	te[(int)6] = (((((((n14 * n32) * n41) - ((n12 * n34) * n41)) - ((n14 * n31) * n42)) + ((n11 * n34) * n42)) + ((n12 * n31) * n44)) - ((n11 * n32) * n44));
	HX_STACK_LINE(663)
	te[(int)10] = (((((((n12 * n24) * n41) - ((n14 * n22) * n41)) + ((n14 * n21) * n42)) - ((n11 * n24) * n42)) - ((n12 * n21) * n44)) + ((n11 * n22) * n44));
	HX_STACK_LINE(663)
	te[(int)14] = (((((((n14 * n22) * n31) - ((n12 * n24) * n31)) - ((n14 * n21) * n32)) + ((n11 * n24) * n32)) + ((n12 * n21) * n34)) - ((n11 * n22) * n34));
	HX_STACK_LINE(663)
	te[(int)3] = (((((((n23 * n32) * n41) - ((n22 * n33) * n41)) - ((n23 * n31) * n42)) + ((n21 * n33) * n42)) + ((n22 * n31) * n43)) - ((n21 * n32) * n43));
	HX_STACK_LINE(663)
	te[(int)7] = (((((((n12 * n33) * n41) - ((n13 * n32) * n41)) + ((n13 * n31) * n42)) - ((n11 * n33) * n42)) - ((n12 * n31) * n43)) + ((n11 * n32) * n43));
	HX_STACK_LINE(663)
	te[(int)11] = (((((((n13 * n22) * n41) - ((n12 * n23) * n41)) - ((n13 * n21) * n42)) + ((n11 * n23) * n42)) + ((n12 * n21) * n43)) - ((n11 * n22) * n43));
	HX_STACK_LINE(663)
	te[(int)15] = (((((((n12 * n23) * n31) - ((n13 * n22) * n31)) + ((n13 * n21) * n32)) - ((n11 * n23) * n32)) - ((n12 * n21) * n33)) + ((n11 * n22) * n33));
	HX_STACK_LINE(663)
	Float det = ((((me->__get((int)0) * te->__get((int)0)) + (me->__get((int)1) * te->__get((int)4))) + (me->__get((int)2) * te->__get((int)8))) + (me->__get((int)3) * te->__get((int)12)));		HX_STACK_VAR(det,"det");
	HX_STACK_LINE(663)
	if (((det == (int)0))){
		HX_STACK_LINE(663)
		::haxe::Log_obj::trace(HX_CSTRING("Matrix.getInverse: cant invert matrix, determinant is 0"),hx::SourceInfo(HX_CSTRING("Matrix.hx"),699,HX_CSTRING("phoenix.Matrix"),HX_CSTRING("getInverse")));
		HX_STACK_LINE(663)
		{
			HX_STACK_LINE(663)
			{
				HX_STACK_LINE(663)
				Array< Float > e = _this->elements;		HX_STACK_VAR(e,"e");
				HX_STACK_LINE(663)
				e[(int)0] = (int)1;
				HX_STACK_LINE(663)
				e[(int)4] = (int)0;
				HX_STACK_LINE(663)
				e[(int)8] = (int)0;
				HX_STACK_LINE(663)
				e[(int)12] = (int)0;
				HX_STACK_LINE(663)
				e[(int)1] = (int)0;
				HX_STACK_LINE(663)
				e[(int)5] = (int)1;
				HX_STACK_LINE(663)
				e[(int)9] = (int)0;
				HX_STACK_LINE(663)
				e[(int)13] = (int)0;
				HX_STACK_LINE(663)
				e[(int)2] = (int)0;
				HX_STACK_LINE(663)
				e[(int)6] = (int)0;
				HX_STACK_LINE(663)
				e[(int)10] = (int)1;
				HX_STACK_LINE(663)
				e[(int)14] = (int)0;
				HX_STACK_LINE(663)
				e[(int)3] = (int)0;
				HX_STACK_LINE(663)
				e[(int)7] = (int)0;
				HX_STACK_LINE(663)
				e[(int)11] = (int)0;
				HX_STACK_LINE(663)
				e[(int)15] = (int)1;
				HX_STACK_LINE(663)
				_this;
			}
			HX_STACK_LINE(663)
			_this;
		}
		HX_STACK_LINE(663)
		return _this;
	}
	else{
		HX_STACK_LINE(663)
		{
			HX_STACK_LINE(663)
			Float _s = (Float((int)1) / Float(det));		HX_STACK_VAR(_s,"_s");
			HX_STACK_LINE(663)
			Array< Float > te1 = _this->elements;		HX_STACK_VAR(te1,"te1");
			HX_STACK_LINE(663)
			hx::MultEq(te1[(int)0],_s);
			HX_STACK_LINE(663)
			hx::MultEq(te1[(int)4],_s);
			HX_STACK_LINE(663)
			hx::MultEq(te1[(int)8],_s);
			HX_STACK_LINE(663)
			hx::MultEq(te1[(int)12],_s);
			HX_STACK_LINE(663)
			hx::MultEq(te1[(int)1],_s);
			HX_STACK_LINE(663)
			hx::MultEq(te1[(int)5],_s);
			HX_STACK_LINE(663)
			hx::MultEq(te1[(int)9],_s);
			HX_STACK_LINE(663)
			hx::MultEq(te1[(int)13],_s);
			HX_STACK_LINE(663)
			hx::MultEq(te1[(int)2],_s);
			HX_STACK_LINE(663)
			hx::MultEq(te1[(int)6],_s);
			HX_STACK_LINE(663)
			hx::MultEq(te1[(int)10],_s);
			HX_STACK_LINE(663)
			hx::MultEq(te1[(int)14],_s);
			HX_STACK_LINE(663)
			hx::MultEq(te1[(int)3],_s);
			HX_STACK_LINE(663)
			hx::MultEq(te1[(int)7],_s);
			HX_STACK_LINE(663)
			hx::MultEq(te1[(int)11],_s);
			HX_STACK_LINE(663)
			hx::MultEq(te1[(int)15],_s);
			HX_STACK_LINE(663)
			_this;
		}
		HX_STACK_LINE(663)
		return _this;
	}
	HX_STACK_LINE(663)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Matrix_obj,inverse,return )

::phoenix::Matrix Matrix_obj::getInverse( ::phoenix::Matrix _m){
	HX_STACK_FRAME("phoenix.Matrix","getInverse",0xaa937208,"phoenix.Matrix.getInverse","phoenix/Matrix.hx",666,0x938b753d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_m,"_m")
	HX_STACK_LINE(670)
	Array< Float > te = this->elements;		HX_STACK_VAR(te,"te");
	HX_STACK_LINE(671)
	Array< Float > me = _m->elements;		HX_STACK_VAR(me,"me");
	HX_STACK_LINE(673)
	Float n11 = me->__get((int)0);		HX_STACK_VAR(n11,"n11");
	HX_STACK_LINE(673)
	Float n12 = me->__get((int)4);		HX_STACK_VAR(n12,"n12");
	HX_STACK_LINE(673)
	Float n13 = me->__get((int)8);		HX_STACK_VAR(n13,"n13");
	HX_STACK_LINE(673)
	Float n14 = me->__get((int)12);		HX_STACK_VAR(n14,"n14");
	HX_STACK_LINE(674)
	Float n21 = me->__get((int)1);		HX_STACK_VAR(n21,"n21");
	HX_STACK_LINE(674)
	Float n22 = me->__get((int)5);		HX_STACK_VAR(n22,"n22");
	HX_STACK_LINE(674)
	Float n23 = me->__get((int)9);		HX_STACK_VAR(n23,"n23");
	HX_STACK_LINE(674)
	Float n24 = me->__get((int)13);		HX_STACK_VAR(n24,"n24");
	HX_STACK_LINE(675)
	Float n31 = me->__get((int)2);		HX_STACK_VAR(n31,"n31");
	HX_STACK_LINE(675)
	Float n32 = me->__get((int)6);		HX_STACK_VAR(n32,"n32");
	HX_STACK_LINE(675)
	Float n33 = me->__get((int)10);		HX_STACK_VAR(n33,"n33");
	HX_STACK_LINE(675)
	Float n34 = me->__get((int)14);		HX_STACK_VAR(n34,"n34");
	HX_STACK_LINE(676)
	Float n41 = me->__get((int)3);		HX_STACK_VAR(n41,"n41");
	HX_STACK_LINE(676)
	Float n42 = me->__get((int)7);		HX_STACK_VAR(n42,"n42");
	HX_STACK_LINE(676)
	Float n43 = me->__get((int)11);		HX_STACK_VAR(n43,"n43");
	HX_STACK_LINE(676)
	Float n44 = me->__get((int)15);		HX_STACK_VAR(n44,"n44");
	HX_STACK_LINE(678)
	te[(int)0] = (((((((n23 * n34) * n42) - ((n24 * n33) * n42)) + ((n24 * n32) * n43)) - ((n22 * n34) * n43)) - ((n23 * n32) * n44)) + ((n22 * n33) * n44));
	HX_STACK_LINE(679)
	te[(int)4] = (((((((n14 * n33) * n42) - ((n13 * n34) * n42)) - ((n14 * n32) * n43)) + ((n12 * n34) * n43)) + ((n13 * n32) * n44)) - ((n12 * n33) * n44));
	HX_STACK_LINE(680)
	te[(int)8] = (((((((n13 * n24) * n42) - ((n14 * n23) * n42)) + ((n14 * n22) * n43)) - ((n12 * n24) * n43)) - ((n13 * n22) * n44)) + ((n12 * n23) * n44));
	HX_STACK_LINE(681)
	te[(int)12] = (((((((n14 * n23) * n32) - ((n13 * n24) * n32)) - ((n14 * n22) * n33)) + ((n12 * n24) * n33)) + ((n13 * n22) * n34)) - ((n12 * n23) * n34));
	HX_STACK_LINE(682)
	te[(int)1] = (((((((n24 * n33) * n41) - ((n23 * n34) * n41)) - ((n24 * n31) * n43)) + ((n21 * n34) * n43)) + ((n23 * n31) * n44)) - ((n21 * n33) * n44));
	HX_STACK_LINE(683)
	te[(int)5] = (((((((n13 * n34) * n41) - ((n14 * n33) * n41)) + ((n14 * n31) * n43)) - ((n11 * n34) * n43)) - ((n13 * n31) * n44)) + ((n11 * n33) * n44));
	HX_STACK_LINE(684)
	te[(int)9] = (((((((n14 * n23) * n41) - ((n13 * n24) * n41)) - ((n14 * n21) * n43)) + ((n11 * n24) * n43)) + ((n13 * n21) * n44)) - ((n11 * n23) * n44));
	HX_STACK_LINE(685)
	te[(int)13] = (((((((n13 * n24) * n31) - ((n14 * n23) * n31)) + ((n14 * n21) * n33)) - ((n11 * n24) * n33)) - ((n13 * n21) * n34)) + ((n11 * n23) * n34));
	HX_STACK_LINE(686)
	te[(int)2] = (((((((n22 * n34) * n41) - ((n24 * n32) * n41)) + ((n24 * n31) * n42)) - ((n21 * n34) * n42)) - ((n22 * n31) * n44)) + ((n21 * n32) * n44));
	HX_STACK_LINE(687)
	te[(int)6] = (((((((n14 * n32) * n41) - ((n12 * n34) * n41)) - ((n14 * n31) * n42)) + ((n11 * n34) * n42)) + ((n12 * n31) * n44)) - ((n11 * n32) * n44));
	HX_STACK_LINE(688)
	te[(int)10] = (((((((n12 * n24) * n41) - ((n14 * n22) * n41)) + ((n14 * n21) * n42)) - ((n11 * n24) * n42)) - ((n12 * n21) * n44)) + ((n11 * n22) * n44));
	HX_STACK_LINE(689)
	te[(int)14] = (((((((n14 * n22) * n31) - ((n12 * n24) * n31)) - ((n14 * n21) * n32)) + ((n11 * n24) * n32)) + ((n12 * n21) * n34)) - ((n11 * n22) * n34));
	HX_STACK_LINE(690)
	te[(int)3] = (((((((n23 * n32) * n41) - ((n22 * n33) * n41)) - ((n23 * n31) * n42)) + ((n21 * n33) * n42)) + ((n22 * n31) * n43)) - ((n21 * n32) * n43));
	HX_STACK_LINE(691)
	te[(int)7] = (((((((n12 * n33) * n41) - ((n13 * n32) * n41)) + ((n13 * n31) * n42)) - ((n11 * n33) * n42)) - ((n12 * n31) * n43)) + ((n11 * n32) * n43));
	HX_STACK_LINE(692)
	te[(int)11] = (((((((n13 * n22) * n41) - ((n12 * n23) * n41)) - ((n13 * n21) * n42)) + ((n11 * n23) * n42)) + ((n12 * n21) * n43)) - ((n11 * n22) * n43));
	HX_STACK_LINE(693)
	te[(int)15] = (((((((n12 * n23) * n31) - ((n13 * n22) * n31)) + ((n13 * n21) * n32)) - ((n11 * n23) * n32)) - ((n12 * n21) * n33)) + ((n11 * n22) * n33));
	HX_STACK_LINE(695)
	Float det = ((((me->__get((int)0) * te->__get((int)0)) + (me->__get((int)1) * te->__get((int)4))) + (me->__get((int)2) * te->__get((int)8))) + (me->__get((int)3) * te->__get((int)12)));		HX_STACK_VAR(det,"det");
	HX_STACK_LINE(697)
	if (((det == (int)0))){
		HX_STACK_LINE(699)
		::haxe::Log_obj::trace(HX_CSTRING("Matrix.getInverse: cant invert matrix, determinant is 0"),hx::SourceInfo(HX_CSTRING("Matrix.hx"),699,HX_CSTRING("phoenix.Matrix"),HX_CSTRING("getInverse")));
		HX_STACK_LINE(701)
		{
			HX_STACK_LINE(701)
			{
				HX_STACK_LINE(701)
				Array< Float > e = this->elements;		HX_STACK_VAR(e,"e");
				HX_STACK_LINE(701)
				e[(int)0] = (int)1;
				HX_STACK_LINE(701)
				e[(int)4] = (int)0;
				HX_STACK_LINE(701)
				e[(int)8] = (int)0;
				HX_STACK_LINE(701)
				e[(int)12] = (int)0;
				HX_STACK_LINE(701)
				e[(int)1] = (int)0;
				HX_STACK_LINE(701)
				e[(int)5] = (int)1;
				HX_STACK_LINE(701)
				e[(int)9] = (int)0;
				HX_STACK_LINE(701)
				e[(int)13] = (int)0;
				HX_STACK_LINE(701)
				e[(int)2] = (int)0;
				HX_STACK_LINE(701)
				e[(int)6] = (int)0;
				HX_STACK_LINE(701)
				e[(int)10] = (int)1;
				HX_STACK_LINE(701)
				e[(int)14] = (int)0;
				HX_STACK_LINE(701)
				e[(int)3] = (int)0;
				HX_STACK_LINE(701)
				e[(int)7] = (int)0;
				HX_STACK_LINE(701)
				e[(int)11] = (int)0;
				HX_STACK_LINE(701)
				e[(int)15] = (int)1;
				HX_STACK_LINE(701)
				hx::ObjectPtr<OBJ_>(this);
			}
			HX_STACK_LINE(701)
			hx::ObjectPtr<OBJ_>(this);
		}
		HX_STACK_LINE(703)
		return hx::ObjectPtr<OBJ_>(this);
	}
	HX_STACK_LINE(707)
	{
		HX_STACK_LINE(707)
		Float _s = (Float((int)1) / Float(det));		HX_STACK_VAR(_s,"_s");
		HX_STACK_LINE(707)
		Array< Float > te1 = this->elements;		HX_STACK_VAR(te1,"te1");
		HX_STACK_LINE(707)
		hx::MultEq(te1[(int)0],_s);
		HX_STACK_LINE(707)
		hx::MultEq(te1[(int)4],_s);
		HX_STACK_LINE(707)
		hx::MultEq(te1[(int)8],_s);
		HX_STACK_LINE(707)
		hx::MultEq(te1[(int)12],_s);
		HX_STACK_LINE(707)
		hx::MultEq(te1[(int)1],_s);
		HX_STACK_LINE(707)
		hx::MultEq(te1[(int)5],_s);
		HX_STACK_LINE(707)
		hx::MultEq(te1[(int)9],_s);
		HX_STACK_LINE(707)
		hx::MultEq(te1[(int)13],_s);
		HX_STACK_LINE(707)
		hx::MultEq(te1[(int)2],_s);
		HX_STACK_LINE(707)
		hx::MultEq(te1[(int)6],_s);
		HX_STACK_LINE(707)
		hx::MultEq(te1[(int)10],_s);
		HX_STACK_LINE(707)
		hx::MultEq(te1[(int)14],_s);
		HX_STACK_LINE(707)
		hx::MultEq(te1[(int)3],_s);
		HX_STACK_LINE(707)
		hx::MultEq(te1[(int)7],_s);
		HX_STACK_LINE(707)
		hx::MultEq(te1[(int)11],_s);
		HX_STACK_LINE(707)
		hx::MultEq(te1[(int)15],_s);
		HX_STACK_LINE(707)
		hx::ObjectPtr<OBJ_>(this);
	}
	HX_STACK_LINE(709)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(Matrix_obj,getInverse,return )

::phoenix::Matrix Matrix_obj::scale( ::phoenix::Vector _v){
	HX_STACK_FRAME("phoenix.Matrix","scale",0x75ae10fc,"phoenix.Matrix.scale","phoenix/Matrix.hx",714,0x938b753d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_v,"_v")
	HX_STACK_LINE(716)
	Array< Float > te = this->elements;		HX_STACK_VAR(te,"te");
	HX_STACK_LINE(718)
	Float _x = _v->x;		HX_STACK_VAR(_x,"_x");
	HX_STACK_LINE(719)
	Float _y = _v->y;		HX_STACK_VAR(_y,"_y");
	HX_STACK_LINE(720)
	Float _z = _v->z;		HX_STACK_VAR(_z,"_z");
	HX_STACK_LINE(722)
	hx::MultEq(te[(int)0],_x);
	HX_STACK_LINE(722)
	hx::MultEq(te[(int)4],_y);
	HX_STACK_LINE(722)
	hx::MultEq(te[(int)8],_z);
	HX_STACK_LINE(723)
	hx::MultEq(te[(int)1],_x);
	HX_STACK_LINE(723)
	hx::MultEq(te[(int)5],_y);
	HX_STACK_LINE(723)
	hx::MultEq(te[(int)9],_z);
	HX_STACK_LINE(724)
	hx::MultEq(te[(int)2],_x);
	HX_STACK_LINE(724)
	hx::MultEq(te[(int)6],_y);
	HX_STACK_LINE(724)
	hx::MultEq(te[(int)10],_z);
	HX_STACK_LINE(725)
	hx::MultEq(te[(int)3],_x);
	HX_STACK_LINE(725)
	hx::MultEq(te[(int)7],_y);
	HX_STACK_LINE(725)
	hx::MultEq(te[(int)11],_z);
	HX_STACK_LINE(727)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(Matrix_obj,scale,return )

Float Matrix_obj::getMaxScaleOnAxis( ){
	HX_STACK_FRAME("phoenix.Matrix","getMaxScaleOnAxis",0x4896c7ee,"phoenix.Matrix.getMaxScaleOnAxis","phoenix/Matrix.hx",732,0x938b753d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(734)
	Array< Float > te = this->elements;		HX_STACK_VAR(te,"te");
	HX_STACK_LINE(736)
	Float _scaleXSq = (((te->__get((int)0) * te->__get((int)0)) + (te->__get((int)1) * te->__get((int)1))) + (te->__get((int)2) * te->__get((int)2)));		HX_STACK_VAR(_scaleXSq,"_scaleXSq");
	HX_STACK_LINE(737)
	Float _scaleYSq = (((te->__get((int)4) * te->__get((int)4)) + (te->__get((int)5) * te->__get((int)5))) + (te->__get((int)6) * te->__get((int)6)));		HX_STACK_VAR(_scaleYSq,"_scaleYSq");
	HX_STACK_LINE(738)
	Float _scaleZSq = (((te->__get((int)8) * te->__get((int)8)) + (te->__get((int)9) * te->__get((int)9))) + (te->__get((int)10) * te->__get((int)10)));		HX_STACK_VAR(_scaleZSq,"_scaleZSq");
	HX_STACK_LINE(740)
	Float _g = ::Math_obj::max(_scaleYSq,_scaleZSq);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(740)
	Float _g1 = ::Math_obj::max(_scaleXSq,_g);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(740)
	return ::Math_obj::sqrt(_g1);
}


HX_DEFINE_DYNAMIC_FUNC0(Matrix_obj,getMaxScaleOnAxis,return )

::phoenix::Matrix Matrix_obj::makeTranslation( Float _x,Float _y,Float _z){
	HX_STACK_FRAME("phoenix.Matrix","makeTranslation",0xddf09e95,"phoenix.Matrix.makeTranslation","phoenix/Matrix.hx",745,0x938b753d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_x,"_x")
	HX_STACK_ARG(_y,"_y")
	HX_STACK_ARG(_z,"_z")
	HX_STACK_LINE(747)
	{
		HX_STACK_LINE(747)
		Array< Float > e = this->elements;		HX_STACK_VAR(e,"e");
		HX_STACK_LINE(747)
		e[(int)0] = (int)1;
		HX_STACK_LINE(747)
		e[(int)4] = (int)0;
		HX_STACK_LINE(747)
		e[(int)8] = (int)0;
		HX_STACK_LINE(747)
		e[(int)12] = _x;
		HX_STACK_LINE(747)
		e[(int)1] = (int)0;
		HX_STACK_LINE(747)
		e[(int)5] = (int)1;
		HX_STACK_LINE(747)
		e[(int)9] = (int)0;
		HX_STACK_LINE(747)
		e[(int)13] = _y;
		HX_STACK_LINE(747)
		e[(int)2] = (int)0;
		HX_STACK_LINE(747)
		e[(int)6] = (int)0;
		HX_STACK_LINE(747)
		e[(int)10] = (int)1;
		HX_STACK_LINE(747)
		e[(int)14] = _z;
		HX_STACK_LINE(747)
		e[(int)3] = (int)0;
		HX_STACK_LINE(747)
		e[(int)7] = (int)0;
		HX_STACK_LINE(747)
		e[(int)11] = (int)0;
		HX_STACK_LINE(747)
		e[(int)15] = (int)1;
		HX_STACK_LINE(747)
		hx::ObjectPtr<OBJ_>(this);
	}
	HX_STACK_LINE(754)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC3(Matrix_obj,makeTranslation,return )

::phoenix::Matrix Matrix_obj::makeRotationX( Float _theta){
	HX_STACK_FRAME("phoenix.Matrix","makeRotationX",0x060a55fe,"phoenix.Matrix.makeRotationX","phoenix/Matrix.hx",759,0x938b753d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_theta,"_theta")
	HX_STACK_LINE(761)
	Float _c = ::Math_obj::cos(_theta);		HX_STACK_VAR(_c,"_c");
	HX_STACK_LINE(762)
	Float _s = ::Math_obj::sin(_theta);		HX_STACK_VAR(_s,"_s");
	HX_STACK_LINE(764)
	{
		HX_STACK_LINE(764)
		Array< Float > e = this->elements;		HX_STACK_VAR(e,"e");
		HX_STACK_LINE(764)
		e[(int)0] = (int)1;
		HX_STACK_LINE(764)
		e[(int)4] = (int)0;
		HX_STACK_LINE(764)
		e[(int)8] = (int)0;
		HX_STACK_LINE(764)
		e[(int)12] = (int)0;
		HX_STACK_LINE(764)
		e[(int)1] = (int)0;
		HX_STACK_LINE(764)
		e[(int)5] = _c;
		HX_STACK_LINE(764)
		e[(int)9] = -(_s);
		HX_STACK_LINE(764)
		e[(int)13] = (int)0;
		HX_STACK_LINE(764)
		e[(int)2] = (int)0;
		HX_STACK_LINE(764)
		e[(int)6] = _s;
		HX_STACK_LINE(764)
		e[(int)10] = _c;
		HX_STACK_LINE(764)
		e[(int)14] = (int)0;
		HX_STACK_LINE(764)
		e[(int)3] = (int)0;
		HX_STACK_LINE(764)
		e[(int)7] = (int)0;
		HX_STACK_LINE(764)
		e[(int)11] = (int)0;
		HX_STACK_LINE(764)
		e[(int)15] = (int)1;
		HX_STACK_LINE(764)
		hx::ObjectPtr<OBJ_>(this);
	}
	HX_STACK_LINE(771)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(Matrix_obj,makeRotationX,return )

::phoenix::Matrix Matrix_obj::makeRotationY( Float _theta){
	HX_STACK_FRAME("phoenix.Matrix","makeRotationY",0x060a55ff,"phoenix.Matrix.makeRotationY","phoenix/Matrix.hx",776,0x938b753d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_theta,"_theta")
	HX_STACK_LINE(778)
	Float _c = ::Math_obj::cos(_theta);		HX_STACK_VAR(_c,"_c");
	HX_STACK_LINE(779)
	Float _s = ::Math_obj::sin(_theta);		HX_STACK_VAR(_s,"_s");
	HX_STACK_LINE(781)
	{
		HX_STACK_LINE(781)
		Array< Float > e = this->elements;		HX_STACK_VAR(e,"e");
		HX_STACK_LINE(781)
		e[(int)0] = _c;
		HX_STACK_LINE(781)
		e[(int)4] = (int)0;
		HX_STACK_LINE(781)
		e[(int)8] = _s;
		HX_STACK_LINE(781)
		e[(int)12] = (int)0;
		HX_STACK_LINE(781)
		e[(int)1] = (int)0;
		HX_STACK_LINE(781)
		e[(int)5] = (int)1;
		HX_STACK_LINE(781)
		e[(int)9] = (int)0;
		HX_STACK_LINE(781)
		e[(int)13] = (int)0;
		HX_STACK_LINE(781)
		e[(int)2] = -(_s);
		HX_STACK_LINE(781)
		e[(int)6] = (int)0;
		HX_STACK_LINE(781)
		e[(int)10] = _c;
		HX_STACK_LINE(781)
		e[(int)14] = (int)0;
		HX_STACK_LINE(781)
		e[(int)3] = (int)0;
		HX_STACK_LINE(781)
		e[(int)7] = (int)0;
		HX_STACK_LINE(781)
		e[(int)11] = (int)0;
		HX_STACK_LINE(781)
		e[(int)15] = (int)1;
		HX_STACK_LINE(781)
		hx::ObjectPtr<OBJ_>(this);
	}
	HX_STACK_LINE(788)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(Matrix_obj,makeRotationY,return )

::phoenix::Matrix Matrix_obj::makeRotationZ( Float _theta){
	HX_STACK_FRAME("phoenix.Matrix","makeRotationZ",0x060a5600,"phoenix.Matrix.makeRotationZ","phoenix/Matrix.hx",793,0x938b753d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_theta,"_theta")
	HX_STACK_LINE(795)
	Float _c = ::Math_obj::cos(_theta);		HX_STACK_VAR(_c,"_c");
	HX_STACK_LINE(796)
	Float _s = ::Math_obj::sin(_theta);		HX_STACK_VAR(_s,"_s");
	HX_STACK_LINE(798)
	{
		HX_STACK_LINE(798)
		Array< Float > e = this->elements;		HX_STACK_VAR(e,"e");
		HX_STACK_LINE(798)
		e[(int)0] = _c;
		HX_STACK_LINE(798)
		e[(int)4] = -(_s);
		HX_STACK_LINE(798)
		e[(int)8] = (int)0;
		HX_STACK_LINE(798)
		e[(int)12] = (int)0;
		HX_STACK_LINE(798)
		e[(int)1] = _s;
		HX_STACK_LINE(798)
		e[(int)5] = _c;
		HX_STACK_LINE(798)
		e[(int)9] = (int)0;
		HX_STACK_LINE(798)
		e[(int)13] = (int)0;
		HX_STACK_LINE(798)
		e[(int)2] = (int)0;
		HX_STACK_LINE(798)
		e[(int)6] = (int)0;
		HX_STACK_LINE(798)
		e[(int)10] = (int)1;
		HX_STACK_LINE(798)
		e[(int)14] = (int)0;
		HX_STACK_LINE(798)
		e[(int)3] = (int)0;
		HX_STACK_LINE(798)
		e[(int)7] = (int)0;
		HX_STACK_LINE(798)
		e[(int)11] = (int)0;
		HX_STACK_LINE(798)
		e[(int)15] = (int)1;
		HX_STACK_LINE(798)
		hx::ObjectPtr<OBJ_>(this);
	}
	HX_STACK_LINE(805)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(Matrix_obj,makeRotationZ,return )

::phoenix::Matrix Matrix_obj::makeRotationAxis( ::phoenix::Vector _axis,Float _angle){
	HX_STACK_FRAME("phoenix.Matrix","makeRotationAxis",0xa4647edb,"phoenix.Matrix.makeRotationAxis","phoenix/Matrix.hx",810,0x938b753d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_axis,"_axis")
	HX_STACK_ARG(_angle,"_angle")
	HX_STACK_LINE(812)
	Float _c = ::Math_obj::cos(_angle);		HX_STACK_VAR(_c,"_c");
	HX_STACK_LINE(813)
	Float _s = ::Math_obj::sin(_angle);		HX_STACK_VAR(_s,"_s");
	HX_STACK_LINE(814)
	Float _t = ((int)1 - _c);		HX_STACK_VAR(_t,"_t");
	HX_STACK_LINE(816)
	Float _ax = _axis->x;		HX_STACK_VAR(_ax,"_ax");
	HX_STACK_LINE(817)
	Float _ay = _axis->y;		HX_STACK_VAR(_ay,"_ay");
	HX_STACK_LINE(818)
	Float _az = _axis->z;		HX_STACK_VAR(_az,"_az");
	HX_STACK_LINE(820)
	Float _tx = (_t * _ax);		HX_STACK_VAR(_tx,"_tx");
	HX_STACK_LINE(821)
	Float _ty = (_t * _ay);		HX_STACK_VAR(_ty,"_ty");
	HX_STACK_LINE(823)
	{
		HX_STACK_LINE(823)
		Array< Float > e = this->elements;		HX_STACK_VAR(e,"e");
		HX_STACK_LINE(823)
		e[(int)0] = ((_tx * _ax) + _c);
		HX_STACK_LINE(823)
		e[(int)4] = ((_tx * _ay) - (_s * _az));
		HX_STACK_LINE(823)
		e[(int)8] = ((_tx * _az) + (_s * _ay));
		HX_STACK_LINE(823)
		e[(int)12] = (int)0;
		HX_STACK_LINE(823)
		e[(int)1] = ((_tx * _ay) + (_s * _az));
		HX_STACK_LINE(823)
		e[(int)5] = ((_ty * _ay) + _c);
		HX_STACK_LINE(823)
		e[(int)9] = ((_ty * _az) - (_s * _ax));
		HX_STACK_LINE(823)
		e[(int)13] = (int)0;
		HX_STACK_LINE(823)
		e[(int)2] = ((_tx * _az) - (_s * _ay));
		HX_STACK_LINE(823)
		e[(int)6] = ((_ty * _az) + (_s * _ax));
		HX_STACK_LINE(823)
		e[(int)10] = (((_t * _az) * _az) + _c);
		HX_STACK_LINE(823)
		e[(int)14] = (int)0;
		HX_STACK_LINE(823)
		e[(int)3] = (int)0;
		HX_STACK_LINE(823)
		e[(int)7] = (int)0;
		HX_STACK_LINE(823)
		e[(int)11] = (int)0;
		HX_STACK_LINE(823)
		e[(int)15] = (int)1;
		HX_STACK_LINE(823)
		hx::ObjectPtr<OBJ_>(this);
	}
	HX_STACK_LINE(830)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC2(Matrix_obj,makeRotationAxis,return )

::phoenix::Matrix Matrix_obj::makeScale( Float _x,Float _y,Float _z){
	HX_STACK_FRAME("phoenix.Matrix","makeScale",0xbabda92e,"phoenix.Matrix.makeScale","phoenix/Matrix.hx",835,0x938b753d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_x,"_x")
	HX_STACK_ARG(_y,"_y")
	HX_STACK_ARG(_z,"_z")
	HX_STACK_LINE(837)
	{
		HX_STACK_LINE(837)
		Array< Float > e = this->elements;		HX_STACK_VAR(e,"e");
		HX_STACK_LINE(837)
		e[(int)0] = _x;
		HX_STACK_LINE(837)
		e[(int)4] = (int)0;
		HX_STACK_LINE(837)
		e[(int)8] = (int)0;
		HX_STACK_LINE(837)
		e[(int)12] = (int)0;
		HX_STACK_LINE(837)
		e[(int)1] = (int)0;
		HX_STACK_LINE(837)
		e[(int)5] = _y;
		HX_STACK_LINE(837)
		e[(int)9] = (int)0;
		HX_STACK_LINE(837)
		e[(int)13] = (int)0;
		HX_STACK_LINE(837)
		e[(int)2] = (int)0;
		HX_STACK_LINE(837)
		e[(int)6] = (int)0;
		HX_STACK_LINE(837)
		e[(int)10] = _z;
		HX_STACK_LINE(837)
		e[(int)14] = (int)0;
		HX_STACK_LINE(837)
		e[(int)3] = (int)0;
		HX_STACK_LINE(837)
		e[(int)7] = (int)0;
		HX_STACK_LINE(837)
		e[(int)11] = (int)0;
		HX_STACK_LINE(837)
		e[(int)15] = (int)1;
		HX_STACK_LINE(837)
		hx::ObjectPtr<OBJ_>(this);
	}
	HX_STACK_LINE(844)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC3(Matrix_obj,makeScale,return )

::phoenix::Matrix Matrix_obj::compose_with_origin( ::phoenix::Vector _position,::phoenix::Vector _origin,::phoenix::Quaternion _quaternion,::phoenix::Vector _scale){
	HX_STACK_FRAME("phoenix.Matrix","compose_with_origin",0x79dcc244,"phoenix.Matrix.compose_with_origin","phoenix/Matrix.hx",849,0x938b753d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_position,"_position")
	HX_STACK_ARG(_origin,"_origin")
	HX_STACK_ARG(_quaternion,"_quaternion")
	HX_STACK_ARG(_scale,"_scale")
	HX_STACK_LINE(855)
	{
		HX_STACK_LINE(855)
		{
			HX_STACK_LINE(855)
			Array< Float > e = this->elements;		HX_STACK_VAR(e,"e");
			HX_STACK_LINE(855)
			e[(int)0] = (int)1;
			HX_STACK_LINE(855)
			e[(int)4] = (int)0;
			HX_STACK_LINE(855)
			e[(int)8] = (int)0;
			HX_STACK_LINE(855)
			e[(int)12] = _origin->x;
			HX_STACK_LINE(855)
			e[(int)1] = (int)0;
			HX_STACK_LINE(855)
			e[(int)5] = (int)1;
			HX_STACK_LINE(855)
			e[(int)9] = (int)0;
			HX_STACK_LINE(855)
			e[(int)13] = _origin->y;
			HX_STACK_LINE(855)
			e[(int)2] = (int)0;
			HX_STACK_LINE(855)
			e[(int)6] = (int)0;
			HX_STACK_LINE(855)
			e[(int)10] = (int)1;
			HX_STACK_LINE(855)
			e[(int)14] = _origin->z;
			HX_STACK_LINE(855)
			e[(int)3] = (int)0;
			HX_STACK_LINE(855)
			e[(int)7] = (int)0;
			HX_STACK_LINE(855)
			e[(int)11] = (int)0;
			HX_STACK_LINE(855)
			e[(int)15] = (int)1;
			HX_STACK_LINE(855)
			hx::ObjectPtr<OBJ_>(this);
		}
		HX_STACK_LINE(855)
		hx::ObjectPtr<OBJ_>(this);
	}
	HX_STACK_LINE(857)
	{
		HX_STACK_LINE(857)
		Array< Float > te = this->elements;		HX_STACK_VAR(te,"te");
		HX_STACK_LINE(857)
		Float _x = _scale->x;		HX_STACK_VAR(_x,"_x");
		HX_STACK_LINE(857)
		Float _y = _scale->y;		HX_STACK_VAR(_y,"_y");
		HX_STACK_LINE(857)
		Float _z = _scale->z;		HX_STACK_VAR(_z,"_z");
		HX_STACK_LINE(857)
		hx::MultEq(te[(int)0],_x);
		HX_STACK_LINE(857)
		hx::MultEq(te[(int)4],_y);
		HX_STACK_LINE(857)
		hx::MultEq(te[(int)8],_z);
		HX_STACK_LINE(857)
		hx::MultEq(te[(int)1],_x);
		HX_STACK_LINE(857)
		hx::MultEq(te[(int)5],_y);
		HX_STACK_LINE(857)
		hx::MultEq(te[(int)9],_z);
		HX_STACK_LINE(857)
		hx::MultEq(te[(int)2],_x);
		HX_STACK_LINE(857)
		hx::MultEq(te[(int)6],_y);
		HX_STACK_LINE(857)
		hx::MultEq(te[(int)10],_z);
		HX_STACK_LINE(857)
		hx::MultEq(te[(int)3],_x);
		HX_STACK_LINE(857)
		hx::MultEq(te[(int)7],_y);
		HX_STACK_LINE(857)
		hx::MultEq(te[(int)11],_z);
		HX_STACK_LINE(857)
		hx::ObjectPtr<OBJ_>(this);
	}
	HX_STACK_LINE(859)
	{
		HX_STACK_LINE(859)
		::phoenix::Matrix _m;		HX_STACK_VAR(_m,"_m");
		HX_STACK_LINE(859)
		{
			HX_STACK_LINE(859)
			::phoenix::Matrix _this = ::phoenix::Matrix_obj::__new(null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(859)
			Array< Float > te = _this->elements;		HX_STACK_VAR(te,"te");
			HX_STACK_LINE(859)
			Float x2 = (_quaternion->x + _quaternion->x);		HX_STACK_VAR(x2,"x2");
			HX_STACK_LINE(859)
			Float y2 = (_quaternion->y + _quaternion->y);		HX_STACK_VAR(y2,"y2");
			HX_STACK_LINE(859)
			Float z2 = (_quaternion->z + _quaternion->z);		HX_STACK_VAR(z2,"z2");
			HX_STACK_LINE(859)
			Float xx = (_quaternion->x * x2);		HX_STACK_VAR(xx,"xx");
			HX_STACK_LINE(859)
			Float xy = (_quaternion->x * y2);		HX_STACK_VAR(xy,"xy");
			HX_STACK_LINE(859)
			Float xz = (_quaternion->x * z2);		HX_STACK_VAR(xz,"xz");
			HX_STACK_LINE(859)
			Float yy = (_quaternion->y * y2);		HX_STACK_VAR(yy,"yy");
			HX_STACK_LINE(859)
			Float yz = (_quaternion->y * z2);		HX_STACK_VAR(yz,"yz");
			HX_STACK_LINE(859)
			Float zz = (_quaternion->z * z2);		HX_STACK_VAR(zz,"zz");
			HX_STACK_LINE(859)
			Float wx = (_quaternion->w * x2);		HX_STACK_VAR(wx,"wx");
			HX_STACK_LINE(859)
			Float wy = (_quaternion->w * y2);		HX_STACK_VAR(wy,"wy");
			HX_STACK_LINE(859)
			Float wz = (_quaternion->w * z2);		HX_STACK_VAR(wz,"wz");
			HX_STACK_LINE(859)
			te[(int)0] = ((int)1 - ((yy + zz)));
			HX_STACK_LINE(859)
			te[(int)4] = (xy - wz);
			HX_STACK_LINE(859)
			te[(int)8] = (xz + wy);
			HX_STACK_LINE(859)
			te[(int)1] = (xy + wz);
			HX_STACK_LINE(859)
			te[(int)5] = ((int)1 - ((xx + zz)));
			HX_STACK_LINE(859)
			te[(int)9] = (yz - wx);
			HX_STACK_LINE(859)
			te[(int)2] = (xz - wy);
			HX_STACK_LINE(859)
			te[(int)6] = (yz + wx);
			HX_STACK_LINE(859)
			te[(int)10] = ((int)1 - ((xx + yy)));
			HX_STACK_LINE(859)
			te[(int)3] = (int)0;
			HX_STACK_LINE(859)
			te[(int)7] = (int)0;
			HX_STACK_LINE(859)
			te[(int)11] = (int)0;
			HX_STACK_LINE(859)
			te[(int)12] = (int)0;
			HX_STACK_LINE(859)
			te[(int)13] = (int)0;
			HX_STACK_LINE(859)
			te[(int)14] = (int)0;
			HX_STACK_LINE(859)
			te[(int)15] = (int)1;
			HX_STACK_LINE(859)
			_m = _this;
		}
		HX_STACK_LINE(859)
		{
			HX_STACK_LINE(859)
			Array< Float > ae = this->elements;		HX_STACK_VAR(ae,"ae");
			HX_STACK_LINE(859)
			Array< Float > be = _m->elements;		HX_STACK_VAR(be,"be");
			HX_STACK_LINE(859)
			Array< Float > te = this->elements;		HX_STACK_VAR(te,"te");
			HX_STACK_LINE(859)
			Float a11 = ae->__get((int)0);		HX_STACK_VAR(a11,"a11");
			HX_STACK_LINE(859)
			Float a12 = ae->__get((int)4);		HX_STACK_VAR(a12,"a12");
			HX_STACK_LINE(859)
			Float a13 = ae->__get((int)8);		HX_STACK_VAR(a13,"a13");
			HX_STACK_LINE(859)
			Float a14 = ae->__get((int)12);		HX_STACK_VAR(a14,"a14");
			HX_STACK_LINE(859)
			Float a21 = ae->__get((int)1);		HX_STACK_VAR(a21,"a21");
			HX_STACK_LINE(859)
			Float a22 = ae->__get((int)5);		HX_STACK_VAR(a22,"a22");
			HX_STACK_LINE(859)
			Float a23 = ae->__get((int)9);		HX_STACK_VAR(a23,"a23");
			HX_STACK_LINE(859)
			Float a24 = ae->__get((int)13);		HX_STACK_VAR(a24,"a24");
			HX_STACK_LINE(859)
			Float a31 = ae->__get((int)2);		HX_STACK_VAR(a31,"a31");
			HX_STACK_LINE(859)
			Float a32 = ae->__get((int)6);		HX_STACK_VAR(a32,"a32");
			HX_STACK_LINE(859)
			Float a33 = ae->__get((int)10);		HX_STACK_VAR(a33,"a33");
			HX_STACK_LINE(859)
			Float a34 = ae->__get((int)14);		HX_STACK_VAR(a34,"a34");
			HX_STACK_LINE(859)
			Float a41 = ae->__get((int)3);		HX_STACK_VAR(a41,"a41");
			HX_STACK_LINE(859)
			Float a42 = ae->__get((int)7);		HX_STACK_VAR(a42,"a42");
			HX_STACK_LINE(859)
			Float a43 = ae->__get((int)11);		HX_STACK_VAR(a43,"a43");
			HX_STACK_LINE(859)
			Float a44 = ae->__get((int)15);		HX_STACK_VAR(a44,"a44");
			HX_STACK_LINE(859)
			Float b11 = be->__get((int)0);		HX_STACK_VAR(b11,"b11");
			HX_STACK_LINE(859)
			Float b12 = be->__get((int)4);		HX_STACK_VAR(b12,"b12");
			HX_STACK_LINE(859)
			Float b13 = be->__get((int)8);		HX_STACK_VAR(b13,"b13");
			HX_STACK_LINE(859)
			Float b14 = be->__get((int)12);		HX_STACK_VAR(b14,"b14");
			HX_STACK_LINE(859)
			Float b21 = be->__get((int)1);		HX_STACK_VAR(b21,"b21");
			HX_STACK_LINE(859)
			Float b22 = be->__get((int)5);		HX_STACK_VAR(b22,"b22");
			HX_STACK_LINE(859)
			Float b23 = be->__get((int)9);		HX_STACK_VAR(b23,"b23");
			HX_STACK_LINE(859)
			Float b24 = be->__get((int)13);		HX_STACK_VAR(b24,"b24");
			HX_STACK_LINE(859)
			Float b31 = be->__get((int)2);		HX_STACK_VAR(b31,"b31");
			HX_STACK_LINE(859)
			Float b32 = be->__get((int)6);		HX_STACK_VAR(b32,"b32");
			HX_STACK_LINE(859)
			Float b33 = be->__get((int)10);		HX_STACK_VAR(b33,"b33");
			HX_STACK_LINE(859)
			Float b34 = be->__get((int)14);		HX_STACK_VAR(b34,"b34");
			HX_STACK_LINE(859)
			Float b41 = be->__get((int)3);		HX_STACK_VAR(b41,"b41");
			HX_STACK_LINE(859)
			Float b42 = be->__get((int)7);		HX_STACK_VAR(b42,"b42");
			HX_STACK_LINE(859)
			Float b43 = be->__get((int)11);		HX_STACK_VAR(b43,"b43");
			HX_STACK_LINE(859)
			Float b44 = be->__get((int)15);		HX_STACK_VAR(b44,"b44");
			HX_STACK_LINE(859)
			te[(int)0] = ((((a11 * b11) + (a12 * b21)) + (a13 * b31)) + (a14 * b41));
			HX_STACK_LINE(859)
			te[(int)4] = ((((a11 * b12) + (a12 * b22)) + (a13 * b32)) + (a14 * b42));
			HX_STACK_LINE(859)
			te[(int)8] = ((((a11 * b13) + (a12 * b23)) + (a13 * b33)) + (a14 * b43));
			HX_STACK_LINE(859)
			te[(int)12] = ((((a11 * b14) + (a12 * b24)) + (a13 * b34)) + (a14 * b44));
			HX_STACK_LINE(859)
			te[(int)1] = ((((a21 * b11) + (a22 * b21)) + (a23 * b31)) + (a24 * b41));
			HX_STACK_LINE(859)
			te[(int)5] = ((((a21 * b12) + (a22 * b22)) + (a23 * b32)) + (a24 * b42));
			HX_STACK_LINE(859)
			te[(int)9] = ((((a21 * b13) + (a22 * b23)) + (a23 * b33)) + (a24 * b43));
			HX_STACK_LINE(859)
			te[(int)13] = ((((a21 * b14) + (a22 * b24)) + (a23 * b34)) + (a24 * b44));
			HX_STACK_LINE(859)
			te[(int)2] = ((((a31 * b11) + (a32 * b21)) + (a33 * b31)) + (a34 * b41));
			HX_STACK_LINE(859)
			te[(int)6] = ((((a31 * b12) + (a32 * b22)) + (a33 * b32)) + (a34 * b42));
			HX_STACK_LINE(859)
			te[(int)10] = ((((a31 * b13) + (a32 * b23)) + (a33 * b33)) + (a34 * b43));
			HX_STACK_LINE(859)
			te[(int)14] = ((((a31 * b14) + (a32 * b24)) + (a33 * b34)) + (a34 * b44));
			HX_STACK_LINE(859)
			te[(int)3] = ((((a41 * b11) + (a42 * b21)) + (a43 * b31)) + (a44 * b41));
			HX_STACK_LINE(859)
			te[(int)7] = ((((a41 * b12) + (a42 * b22)) + (a43 * b32)) + (a44 * b42));
			HX_STACK_LINE(859)
			te[(int)11] = ((((a41 * b13) + (a42 * b23)) + (a43 * b33)) + (a44 * b43));
			HX_STACK_LINE(859)
			te[(int)15] = ((((a41 * b14) + (a42 * b24)) + (a43 * b34)) + (a44 * b44));
			HX_STACK_LINE(859)
			hx::ObjectPtr<OBJ_>(this);
		}
	}
	HX_STACK_LINE(861)
	{
		HX_STACK_LINE(861)
		::phoenix::Matrix _m;		HX_STACK_VAR(_m,"_m");
		HX_STACK_LINE(861)
		{
			HX_STACK_LINE(861)
			::phoenix::Matrix _this = ::phoenix::Matrix_obj::__new(null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(861)
			{
				HX_STACK_LINE(861)
				Array< Float > e = _this->elements;		HX_STACK_VAR(e,"e");
				HX_STACK_LINE(861)
				e[(int)0] = (int)1;
				HX_STACK_LINE(861)
				e[(int)4] = (int)0;
				HX_STACK_LINE(861)
				e[(int)8] = (int)0;
				HX_STACK_LINE(861)
				e[(int)12] = -(_origin->x);
				HX_STACK_LINE(861)
				e[(int)1] = (int)0;
				HX_STACK_LINE(861)
				e[(int)5] = (int)1;
				HX_STACK_LINE(861)
				e[(int)9] = (int)0;
				HX_STACK_LINE(861)
				e[(int)13] = -(_origin->y);
				HX_STACK_LINE(861)
				e[(int)2] = (int)0;
				HX_STACK_LINE(861)
				e[(int)6] = (int)0;
				HX_STACK_LINE(861)
				e[(int)10] = (int)1;
				HX_STACK_LINE(861)
				e[(int)14] = -(_origin->z);
				HX_STACK_LINE(861)
				e[(int)3] = (int)0;
				HX_STACK_LINE(861)
				e[(int)7] = (int)0;
				HX_STACK_LINE(861)
				e[(int)11] = (int)0;
				HX_STACK_LINE(861)
				e[(int)15] = (int)1;
				HX_STACK_LINE(861)
				_this;
			}
			HX_STACK_LINE(861)
			_m = _this;
		}
		HX_STACK_LINE(861)
		{
			HX_STACK_LINE(861)
			Array< Float > ae = this->elements;		HX_STACK_VAR(ae,"ae");
			HX_STACK_LINE(861)
			Array< Float > be = _m->elements;		HX_STACK_VAR(be,"be");
			HX_STACK_LINE(861)
			Array< Float > te = this->elements;		HX_STACK_VAR(te,"te");
			HX_STACK_LINE(861)
			Float a11 = ae->__get((int)0);		HX_STACK_VAR(a11,"a11");
			HX_STACK_LINE(861)
			Float a12 = ae->__get((int)4);		HX_STACK_VAR(a12,"a12");
			HX_STACK_LINE(861)
			Float a13 = ae->__get((int)8);		HX_STACK_VAR(a13,"a13");
			HX_STACK_LINE(861)
			Float a14 = ae->__get((int)12);		HX_STACK_VAR(a14,"a14");
			HX_STACK_LINE(861)
			Float a21 = ae->__get((int)1);		HX_STACK_VAR(a21,"a21");
			HX_STACK_LINE(861)
			Float a22 = ae->__get((int)5);		HX_STACK_VAR(a22,"a22");
			HX_STACK_LINE(861)
			Float a23 = ae->__get((int)9);		HX_STACK_VAR(a23,"a23");
			HX_STACK_LINE(861)
			Float a24 = ae->__get((int)13);		HX_STACK_VAR(a24,"a24");
			HX_STACK_LINE(861)
			Float a31 = ae->__get((int)2);		HX_STACK_VAR(a31,"a31");
			HX_STACK_LINE(861)
			Float a32 = ae->__get((int)6);		HX_STACK_VAR(a32,"a32");
			HX_STACK_LINE(861)
			Float a33 = ae->__get((int)10);		HX_STACK_VAR(a33,"a33");
			HX_STACK_LINE(861)
			Float a34 = ae->__get((int)14);		HX_STACK_VAR(a34,"a34");
			HX_STACK_LINE(861)
			Float a41 = ae->__get((int)3);		HX_STACK_VAR(a41,"a41");
			HX_STACK_LINE(861)
			Float a42 = ae->__get((int)7);		HX_STACK_VAR(a42,"a42");
			HX_STACK_LINE(861)
			Float a43 = ae->__get((int)11);		HX_STACK_VAR(a43,"a43");
			HX_STACK_LINE(861)
			Float a44 = ae->__get((int)15);		HX_STACK_VAR(a44,"a44");
			HX_STACK_LINE(861)
			Float b11 = be->__get((int)0);		HX_STACK_VAR(b11,"b11");
			HX_STACK_LINE(861)
			Float b12 = be->__get((int)4);		HX_STACK_VAR(b12,"b12");
			HX_STACK_LINE(861)
			Float b13 = be->__get((int)8);		HX_STACK_VAR(b13,"b13");
			HX_STACK_LINE(861)
			Float b14 = be->__get((int)12);		HX_STACK_VAR(b14,"b14");
			HX_STACK_LINE(861)
			Float b21 = be->__get((int)1);		HX_STACK_VAR(b21,"b21");
			HX_STACK_LINE(861)
			Float b22 = be->__get((int)5);		HX_STACK_VAR(b22,"b22");
			HX_STACK_LINE(861)
			Float b23 = be->__get((int)9);		HX_STACK_VAR(b23,"b23");
			HX_STACK_LINE(861)
			Float b24 = be->__get((int)13);		HX_STACK_VAR(b24,"b24");
			HX_STACK_LINE(861)
			Float b31 = be->__get((int)2);		HX_STACK_VAR(b31,"b31");
			HX_STACK_LINE(861)
			Float b32 = be->__get((int)6);		HX_STACK_VAR(b32,"b32");
			HX_STACK_LINE(861)
			Float b33 = be->__get((int)10);		HX_STACK_VAR(b33,"b33");
			HX_STACK_LINE(861)
			Float b34 = be->__get((int)14);		HX_STACK_VAR(b34,"b34");
			HX_STACK_LINE(861)
			Float b41 = be->__get((int)3);		HX_STACK_VAR(b41,"b41");
			HX_STACK_LINE(861)
			Float b42 = be->__get((int)7);		HX_STACK_VAR(b42,"b42");
			HX_STACK_LINE(861)
			Float b43 = be->__get((int)11);		HX_STACK_VAR(b43,"b43");
			HX_STACK_LINE(861)
			Float b44 = be->__get((int)15);		HX_STACK_VAR(b44,"b44");
			HX_STACK_LINE(861)
			te[(int)0] = ((((a11 * b11) + (a12 * b21)) + (a13 * b31)) + (a14 * b41));
			HX_STACK_LINE(861)
			te[(int)4] = ((((a11 * b12) + (a12 * b22)) + (a13 * b32)) + (a14 * b42));
			HX_STACK_LINE(861)
			te[(int)8] = ((((a11 * b13) + (a12 * b23)) + (a13 * b33)) + (a14 * b43));
			HX_STACK_LINE(861)
			te[(int)12] = ((((a11 * b14) + (a12 * b24)) + (a13 * b34)) + (a14 * b44));
			HX_STACK_LINE(861)
			te[(int)1] = ((((a21 * b11) + (a22 * b21)) + (a23 * b31)) + (a24 * b41));
			HX_STACK_LINE(861)
			te[(int)5] = ((((a21 * b12) + (a22 * b22)) + (a23 * b32)) + (a24 * b42));
			HX_STACK_LINE(861)
			te[(int)9] = ((((a21 * b13) + (a22 * b23)) + (a23 * b33)) + (a24 * b43));
			HX_STACK_LINE(861)
			te[(int)13] = ((((a21 * b14) + (a22 * b24)) + (a23 * b34)) + (a24 * b44));
			HX_STACK_LINE(861)
			te[(int)2] = ((((a31 * b11) + (a32 * b21)) + (a33 * b31)) + (a34 * b41));
			HX_STACK_LINE(861)
			te[(int)6] = ((((a31 * b12) + (a32 * b22)) + (a33 * b32)) + (a34 * b42));
			HX_STACK_LINE(861)
			te[(int)10] = ((((a31 * b13) + (a32 * b23)) + (a33 * b33)) + (a34 * b43));
			HX_STACK_LINE(861)
			te[(int)14] = ((((a31 * b14) + (a32 * b24)) + (a33 * b34)) + (a34 * b44));
			HX_STACK_LINE(861)
			te[(int)3] = ((((a41 * b11) + (a42 * b21)) + (a43 * b31)) + (a44 * b41));
			HX_STACK_LINE(861)
			te[(int)7] = ((((a41 * b12) + (a42 * b22)) + (a43 * b32)) + (a44 * b42));
			HX_STACK_LINE(861)
			te[(int)11] = ((((a41 * b13) + (a42 * b23)) + (a43 * b33)) + (a44 * b43));
			HX_STACK_LINE(861)
			te[(int)15] = ((((a41 * b14) + (a42 * b24)) + (a43 * b34)) + (a44 * b44));
			HX_STACK_LINE(861)
			hx::ObjectPtr<OBJ_>(this);
		}
	}
	HX_STACK_LINE(863)
	{
		HX_STACK_LINE(863)
		::phoenix::Matrix _m;		HX_STACK_VAR(_m,"_m");
		HX_STACK_LINE(863)
		{
			HX_STACK_LINE(863)
			::phoenix::Matrix _this = ::phoenix::Matrix_obj::__new(null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(863)
			{
				HX_STACK_LINE(863)
				Array< Float > e = _this->elements;		HX_STACK_VAR(e,"e");
				HX_STACK_LINE(863)
				e[(int)0] = (int)1;
				HX_STACK_LINE(863)
				e[(int)4] = (int)0;
				HX_STACK_LINE(863)
				e[(int)8] = (int)0;
				HX_STACK_LINE(863)
				e[(int)12] = _position->x;
				HX_STACK_LINE(863)
				e[(int)1] = (int)0;
				HX_STACK_LINE(863)
				e[(int)5] = (int)1;
				HX_STACK_LINE(863)
				e[(int)9] = (int)0;
				HX_STACK_LINE(863)
				e[(int)13] = _position->y;
				HX_STACK_LINE(863)
				e[(int)2] = (int)0;
				HX_STACK_LINE(863)
				e[(int)6] = (int)0;
				HX_STACK_LINE(863)
				e[(int)10] = (int)1;
				HX_STACK_LINE(863)
				e[(int)14] = _position->z;
				HX_STACK_LINE(863)
				e[(int)3] = (int)0;
				HX_STACK_LINE(863)
				e[(int)7] = (int)0;
				HX_STACK_LINE(863)
				e[(int)11] = (int)0;
				HX_STACK_LINE(863)
				e[(int)15] = (int)1;
				HX_STACK_LINE(863)
				_this;
			}
			HX_STACK_LINE(863)
			_m = _this;
		}
		HX_STACK_LINE(863)
		{
			HX_STACK_LINE(863)
			Array< Float > ae = this->elements;		HX_STACK_VAR(ae,"ae");
			HX_STACK_LINE(863)
			Array< Float > be = _m->elements;		HX_STACK_VAR(be,"be");
			HX_STACK_LINE(863)
			Array< Float > te = this->elements;		HX_STACK_VAR(te,"te");
			HX_STACK_LINE(863)
			Float a11 = ae->__get((int)0);		HX_STACK_VAR(a11,"a11");
			HX_STACK_LINE(863)
			Float a12 = ae->__get((int)4);		HX_STACK_VAR(a12,"a12");
			HX_STACK_LINE(863)
			Float a13 = ae->__get((int)8);		HX_STACK_VAR(a13,"a13");
			HX_STACK_LINE(863)
			Float a14 = ae->__get((int)12);		HX_STACK_VAR(a14,"a14");
			HX_STACK_LINE(863)
			Float a21 = ae->__get((int)1);		HX_STACK_VAR(a21,"a21");
			HX_STACK_LINE(863)
			Float a22 = ae->__get((int)5);		HX_STACK_VAR(a22,"a22");
			HX_STACK_LINE(863)
			Float a23 = ae->__get((int)9);		HX_STACK_VAR(a23,"a23");
			HX_STACK_LINE(863)
			Float a24 = ae->__get((int)13);		HX_STACK_VAR(a24,"a24");
			HX_STACK_LINE(863)
			Float a31 = ae->__get((int)2);		HX_STACK_VAR(a31,"a31");
			HX_STACK_LINE(863)
			Float a32 = ae->__get((int)6);		HX_STACK_VAR(a32,"a32");
			HX_STACK_LINE(863)
			Float a33 = ae->__get((int)10);		HX_STACK_VAR(a33,"a33");
			HX_STACK_LINE(863)
			Float a34 = ae->__get((int)14);		HX_STACK_VAR(a34,"a34");
			HX_STACK_LINE(863)
			Float a41 = ae->__get((int)3);		HX_STACK_VAR(a41,"a41");
			HX_STACK_LINE(863)
			Float a42 = ae->__get((int)7);		HX_STACK_VAR(a42,"a42");
			HX_STACK_LINE(863)
			Float a43 = ae->__get((int)11);		HX_STACK_VAR(a43,"a43");
			HX_STACK_LINE(863)
			Float a44 = ae->__get((int)15);		HX_STACK_VAR(a44,"a44");
			HX_STACK_LINE(863)
			Float b11 = be->__get((int)0);		HX_STACK_VAR(b11,"b11");
			HX_STACK_LINE(863)
			Float b12 = be->__get((int)4);		HX_STACK_VAR(b12,"b12");
			HX_STACK_LINE(863)
			Float b13 = be->__get((int)8);		HX_STACK_VAR(b13,"b13");
			HX_STACK_LINE(863)
			Float b14 = be->__get((int)12);		HX_STACK_VAR(b14,"b14");
			HX_STACK_LINE(863)
			Float b21 = be->__get((int)1);		HX_STACK_VAR(b21,"b21");
			HX_STACK_LINE(863)
			Float b22 = be->__get((int)5);		HX_STACK_VAR(b22,"b22");
			HX_STACK_LINE(863)
			Float b23 = be->__get((int)9);		HX_STACK_VAR(b23,"b23");
			HX_STACK_LINE(863)
			Float b24 = be->__get((int)13);		HX_STACK_VAR(b24,"b24");
			HX_STACK_LINE(863)
			Float b31 = be->__get((int)2);		HX_STACK_VAR(b31,"b31");
			HX_STACK_LINE(863)
			Float b32 = be->__get((int)6);		HX_STACK_VAR(b32,"b32");
			HX_STACK_LINE(863)
			Float b33 = be->__get((int)10);		HX_STACK_VAR(b33,"b33");
			HX_STACK_LINE(863)
			Float b34 = be->__get((int)14);		HX_STACK_VAR(b34,"b34");
			HX_STACK_LINE(863)
			Float b41 = be->__get((int)3);		HX_STACK_VAR(b41,"b41");
			HX_STACK_LINE(863)
			Float b42 = be->__get((int)7);		HX_STACK_VAR(b42,"b42");
			HX_STACK_LINE(863)
			Float b43 = be->__get((int)11);		HX_STACK_VAR(b43,"b43");
			HX_STACK_LINE(863)
			Float b44 = be->__get((int)15);		HX_STACK_VAR(b44,"b44");
			HX_STACK_LINE(863)
			te[(int)0] = ((((a11 * b11) + (a12 * b21)) + (a13 * b31)) + (a14 * b41));
			HX_STACK_LINE(863)
			te[(int)4] = ((((a11 * b12) + (a12 * b22)) + (a13 * b32)) + (a14 * b42));
			HX_STACK_LINE(863)
			te[(int)8] = ((((a11 * b13) + (a12 * b23)) + (a13 * b33)) + (a14 * b43));
			HX_STACK_LINE(863)
			te[(int)12] = ((((a11 * b14) + (a12 * b24)) + (a13 * b34)) + (a14 * b44));
			HX_STACK_LINE(863)
			te[(int)1] = ((((a21 * b11) + (a22 * b21)) + (a23 * b31)) + (a24 * b41));
			HX_STACK_LINE(863)
			te[(int)5] = ((((a21 * b12) + (a22 * b22)) + (a23 * b32)) + (a24 * b42));
			HX_STACK_LINE(863)
			te[(int)9] = ((((a21 * b13) + (a22 * b23)) + (a23 * b33)) + (a24 * b43));
			HX_STACK_LINE(863)
			te[(int)13] = ((((a21 * b14) + (a22 * b24)) + (a23 * b34)) + (a24 * b44));
			HX_STACK_LINE(863)
			te[(int)2] = ((((a31 * b11) + (a32 * b21)) + (a33 * b31)) + (a34 * b41));
			HX_STACK_LINE(863)
			te[(int)6] = ((((a31 * b12) + (a32 * b22)) + (a33 * b32)) + (a34 * b42));
			HX_STACK_LINE(863)
			te[(int)10] = ((((a31 * b13) + (a32 * b23)) + (a33 * b33)) + (a34 * b43));
			HX_STACK_LINE(863)
			te[(int)14] = ((((a31 * b14) + (a32 * b24)) + (a33 * b34)) + (a34 * b44));
			HX_STACK_LINE(863)
			te[(int)3] = ((((a41 * b11) + (a42 * b21)) + (a43 * b31)) + (a44 * b41));
			HX_STACK_LINE(863)
			te[(int)7] = ((((a41 * b12) + (a42 * b22)) + (a43 * b32)) + (a44 * b42));
			HX_STACK_LINE(863)
			te[(int)11] = ((((a41 * b13) + (a42 * b23)) + (a43 * b33)) + (a44 * b43));
			HX_STACK_LINE(863)
			te[(int)15] = ((((a41 * b14) + (a42 * b24)) + (a43 * b34)) + (a44 * b44));
			HX_STACK_LINE(863)
			hx::ObjectPtr<OBJ_>(this);
		}
	}
	HX_STACK_LINE(865)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC4(Matrix_obj,compose_with_origin,return )

::phoenix::Matrix Matrix_obj::compose( ::phoenix::Vector _position,::phoenix::Quaternion _quaternion,::phoenix::Vector _scale){
	HX_STACK_FRAME("phoenix.Matrix","compose",0xe87dfc04,"phoenix.Matrix.compose","phoenix/Matrix.hx",869,0x938b753d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_position,"_position")
	HX_STACK_ARG(_quaternion,"_quaternion")
	HX_STACK_ARG(_scale,"_scale")
	HX_STACK_LINE(871)
	{
		HX_STACK_LINE(871)
		Array< Float > te = this->elements;		HX_STACK_VAR(te,"te");
		HX_STACK_LINE(871)
		Float x2 = (_quaternion->x + _quaternion->x);		HX_STACK_VAR(x2,"x2");
		HX_STACK_LINE(871)
		Float y2 = (_quaternion->y + _quaternion->y);		HX_STACK_VAR(y2,"y2");
		HX_STACK_LINE(871)
		Float z2 = (_quaternion->z + _quaternion->z);		HX_STACK_VAR(z2,"z2");
		HX_STACK_LINE(871)
		Float xx = (_quaternion->x * x2);		HX_STACK_VAR(xx,"xx");
		HX_STACK_LINE(871)
		Float xy = (_quaternion->x * y2);		HX_STACK_VAR(xy,"xy");
		HX_STACK_LINE(871)
		Float xz = (_quaternion->x * z2);		HX_STACK_VAR(xz,"xz");
		HX_STACK_LINE(871)
		Float yy = (_quaternion->y * y2);		HX_STACK_VAR(yy,"yy");
		HX_STACK_LINE(871)
		Float yz = (_quaternion->y * z2);		HX_STACK_VAR(yz,"yz");
		HX_STACK_LINE(871)
		Float zz = (_quaternion->z * z2);		HX_STACK_VAR(zz,"zz");
		HX_STACK_LINE(871)
		Float wx = (_quaternion->w * x2);		HX_STACK_VAR(wx,"wx");
		HX_STACK_LINE(871)
		Float wy = (_quaternion->w * y2);		HX_STACK_VAR(wy,"wy");
		HX_STACK_LINE(871)
		Float wz = (_quaternion->w * z2);		HX_STACK_VAR(wz,"wz");
		HX_STACK_LINE(871)
		te[(int)0] = ((int)1 - ((yy + zz)));
		HX_STACK_LINE(871)
		te[(int)4] = (xy - wz);
		HX_STACK_LINE(871)
		te[(int)8] = (xz + wy);
		HX_STACK_LINE(871)
		te[(int)1] = (xy + wz);
		HX_STACK_LINE(871)
		te[(int)5] = ((int)1 - ((xx + zz)));
		HX_STACK_LINE(871)
		te[(int)9] = (yz - wx);
		HX_STACK_LINE(871)
		te[(int)2] = (xz - wy);
		HX_STACK_LINE(871)
		te[(int)6] = (yz + wx);
		HX_STACK_LINE(871)
		te[(int)10] = ((int)1 - ((xx + yy)));
		HX_STACK_LINE(871)
		te[(int)3] = (int)0;
		HX_STACK_LINE(871)
		te[(int)7] = (int)0;
		HX_STACK_LINE(871)
		te[(int)11] = (int)0;
		HX_STACK_LINE(871)
		te[(int)12] = (int)0;
		HX_STACK_LINE(871)
		te[(int)13] = (int)0;
		HX_STACK_LINE(871)
		te[(int)14] = (int)0;
		HX_STACK_LINE(871)
		te[(int)15] = (int)1;
		HX_STACK_LINE(871)
		hx::ObjectPtr<OBJ_>(this);
	}
	HX_STACK_LINE(872)
	{
		HX_STACK_LINE(872)
		Array< Float > te = this->elements;		HX_STACK_VAR(te,"te");
		HX_STACK_LINE(872)
		Float _x = _scale->x;		HX_STACK_VAR(_x,"_x");
		HX_STACK_LINE(872)
		Float _y = _scale->y;		HX_STACK_VAR(_y,"_y");
		HX_STACK_LINE(872)
		Float _z = _scale->z;		HX_STACK_VAR(_z,"_z");
		HX_STACK_LINE(872)
		hx::MultEq(te[(int)0],_x);
		HX_STACK_LINE(872)
		hx::MultEq(te[(int)4],_y);
		HX_STACK_LINE(872)
		hx::MultEq(te[(int)8],_z);
		HX_STACK_LINE(872)
		hx::MultEq(te[(int)1],_x);
		HX_STACK_LINE(872)
		hx::MultEq(te[(int)5],_y);
		HX_STACK_LINE(872)
		hx::MultEq(te[(int)9],_z);
		HX_STACK_LINE(872)
		hx::MultEq(te[(int)2],_x);
		HX_STACK_LINE(872)
		hx::MultEq(te[(int)6],_y);
		HX_STACK_LINE(872)
		hx::MultEq(te[(int)10],_z);
		HX_STACK_LINE(872)
		hx::MultEq(te[(int)3],_x);
		HX_STACK_LINE(872)
		hx::MultEq(te[(int)7],_y);
		HX_STACK_LINE(872)
		hx::MultEq(te[(int)11],_z);
		HX_STACK_LINE(872)
		hx::ObjectPtr<OBJ_>(this);
	}
	HX_STACK_LINE(873)
	{
		HX_STACK_LINE(873)
		Array< Float > te = this->elements;		HX_STACK_VAR(te,"te");
		HX_STACK_LINE(873)
		te[(int)12] = _position->x;
		HX_STACK_LINE(873)
		te[(int)13] = _position->y;
		HX_STACK_LINE(873)
		te[(int)14] = _position->z;
		HX_STACK_LINE(873)
		hx::ObjectPtr<OBJ_>(this);
	}
	HX_STACK_LINE(875)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC3(Matrix_obj,compose,return )

::phoenix::MatrixTransform Matrix_obj::decompose( ::phoenix::Vector _position,::phoenix::Quaternion _quaternion,::phoenix::Vector _scale){
	HX_STACK_FRAME("phoenix.Matrix","decompose",0xe8fe2723,"phoenix.Matrix.decompose","phoenix/Matrix.hx",881,0x938b753d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_position,"_position")
	HX_STACK_ARG(_quaternion,"_quaternion")
	HX_STACK_ARG(_scale,"_scale")
	HX_STACK_LINE(883)
	Array< Float > te = this->elements;		HX_STACK_VAR(te,"te");
	HX_STACK_LINE(884)
	::phoenix::Matrix matrix = ::phoenix::Matrix_obj::__new(null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(matrix,"matrix");
	HX_STACK_LINE(886)
	Float _ax_x = te->__get((int)0);		HX_STACK_VAR(_ax_x,"_ax_x");
	HX_STACK_LINE(886)
	Float _ax_y = te->__get((int)1);		HX_STACK_VAR(_ax_y,"_ax_y");
	HX_STACK_LINE(886)
	Float _ax_z = te->__get((int)2);		HX_STACK_VAR(_ax_z,"_ax_z");
	HX_STACK_LINE(887)
	Float _ay_x = te->__get((int)4);		HX_STACK_VAR(_ay_x,"_ay_x");
	HX_STACK_LINE(887)
	Float _ay_y = te->__get((int)5);		HX_STACK_VAR(_ay_y,"_ay_y");
	HX_STACK_LINE(887)
	Float _ay_z = te->__get((int)6);		HX_STACK_VAR(_ay_z,"_ay_z");
	HX_STACK_LINE(888)
	Float _az_x = te->__get((int)8);		HX_STACK_VAR(_az_x,"_az_x");
	HX_STACK_LINE(888)
	Float _az_y = te->__get((int)9);		HX_STACK_VAR(_az_y,"_az_y");
	HX_STACK_LINE(888)
	Float _az_z = te->__get((int)10);		HX_STACK_VAR(_az_z,"_az_z");
	HX_STACK_LINE(890)
	Float _ax_length = ::Math_obj::sqrt((((_ax_x * _ax_x) + (_ax_y * _ax_y)) + (_ax_z * _ax_z)));		HX_STACK_VAR(_ax_length,"_ax_length");
	HX_STACK_LINE(891)
	Float _ay_length = ::Math_obj::sqrt((((_ay_x * _ay_x) + (_ay_y * _ay_y)) + (_ay_z * _ay_z)));		HX_STACK_VAR(_ay_length,"_ay_length");
	HX_STACK_LINE(892)
	Float _az_length = ::Math_obj::sqrt((((_az_x * _az_x) + (_az_y * _az_y)) + (_az_z * _az_z)));		HX_STACK_VAR(_az_length,"_az_length");
	HX_STACK_LINE(895)
	if (((_quaternion == null()))){
		HX_STACK_LINE(896)
		::phoenix::Quaternion _g = ::phoenix::Quaternion_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(896)
		_quaternion = _g;
	}
	HX_STACK_LINE(899)
	if (((_position == null()))){
		HX_STACK_LINE(900)
		::phoenix::Vector _g1 = ::phoenix::Vector_obj::__new(te->__get((int)12),te->__get((int)13),te->__get((int)14),null());		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(900)
		_position = _g1;
	}
	else{
		HX_STACK_LINE(902)
		{
			HX_STACK_LINE(902)
			Float _x = te->__get((int)12);		HX_STACK_VAR(_x,"_x");
			HX_STACK_LINE(902)
			_position->x = _x;
			HX_STACK_LINE(902)
			if ((_position->_construct)){
				HX_STACK_LINE(902)
				_position->x;
			}
			else{
				HX_STACK_LINE(902)
				if (((bool((_position->listen_x != null())) && bool(!(_position->ignore_listeners))))){
					HX_STACK_LINE(902)
					_position->listen_x(_x);
				}
				HX_STACK_LINE(902)
				_position->x;
			}
		}
		HX_STACK_LINE(903)
		{
			HX_STACK_LINE(903)
			Float _y = te->__get((int)13);		HX_STACK_VAR(_y,"_y");
			HX_STACK_LINE(903)
			_position->y = _y;
			HX_STACK_LINE(903)
			if ((_position->_construct)){
				HX_STACK_LINE(903)
				_position->y;
			}
			else{
				HX_STACK_LINE(903)
				if (((bool((_position->listen_y != null())) && bool(!(_position->ignore_listeners))))){
					HX_STACK_LINE(903)
					_position->listen_y(_y);
				}
				HX_STACK_LINE(903)
				_position->y;
			}
		}
		HX_STACK_LINE(904)
		{
			HX_STACK_LINE(904)
			Float _z = te->__get((int)14);		HX_STACK_VAR(_z,"_z");
			HX_STACK_LINE(904)
			_position->z = _z;
			HX_STACK_LINE(904)
			if ((_position->_construct)){
				HX_STACK_LINE(904)
				_position->z;
			}
			else{
				HX_STACK_LINE(904)
				if (((bool((_position->listen_z != null())) && bool(!(_position->ignore_listeners))))){
					HX_STACK_LINE(904)
					_position->listen_z(_z);
				}
				HX_STACK_LINE(904)
				_position->z;
			}
		}
	}
	HX_STACK_LINE(907)
	if (((_scale == null()))){
		HX_STACK_LINE(908)
		::phoenix::Vector _g2 = ::phoenix::Vector_obj::__new(_ax_length,_ay_length,_az_length,null());		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(908)
		_scale = _g2;
	}
	else{
		HX_STACK_LINE(910)
		{
			HX_STACK_LINE(910)
			_scale->x = _ax_length;
			HX_STACK_LINE(910)
			if ((_scale->_construct)){
				HX_STACK_LINE(910)
				_scale->x;
			}
			else{
				HX_STACK_LINE(910)
				if (((bool((_scale->listen_x != null())) && bool(!(_scale->ignore_listeners))))){
					HX_STACK_LINE(910)
					_scale->listen_x(_ax_length);
				}
				HX_STACK_LINE(910)
				_scale->x;
			}
		}
		HX_STACK_LINE(911)
		{
			HX_STACK_LINE(911)
			_scale->y = _ay_length;
			HX_STACK_LINE(911)
			if ((_scale->_construct)){
				HX_STACK_LINE(911)
				_scale->y;
			}
			else{
				HX_STACK_LINE(911)
				if (((bool((_scale->listen_y != null())) && bool(!(_scale->ignore_listeners))))){
					HX_STACK_LINE(911)
					_scale->listen_y(_ay_length);
				}
				HX_STACK_LINE(911)
				_scale->y;
			}
		}
		HX_STACK_LINE(912)
		{
			HX_STACK_LINE(912)
			_scale->z = _az_length;
			HX_STACK_LINE(912)
			if ((_scale->_construct)){
				HX_STACK_LINE(912)
				_scale->z;
			}
			else{
				HX_STACK_LINE(912)
				if (((bool((_scale->listen_z != null())) && bool(!(_scale->ignore_listeners))))){
					HX_STACK_LINE(912)
					_scale->listen_z(_az_length);
				}
				HX_STACK_LINE(912)
				_scale->z;
			}
		}
	}
	HX_STACK_LINE(916)
	Array< Float > _g3 = this->elements->concat(Array_obj< Float >::__new());		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(916)
	matrix->elements = _g3;
	HX_STACK_LINE(918)
	Array< Float > me = matrix->elements;		HX_STACK_VAR(me,"me");
	HX_STACK_LINE(920)
	hx::DivEq(me[(int)0],_ax_length);
	HX_STACK_LINE(921)
	hx::DivEq(me[(int)1],_ax_length);
	HX_STACK_LINE(922)
	hx::DivEq(me[(int)2],_ax_length);
	HX_STACK_LINE(924)
	hx::DivEq(me[(int)4],_ay_length);
	HX_STACK_LINE(925)
	hx::DivEq(me[(int)5],_ay_length);
	HX_STACK_LINE(926)
	hx::DivEq(me[(int)6],_ay_length);
	HX_STACK_LINE(928)
	hx::DivEq(me[(int)8],_az_length);
	HX_STACK_LINE(929)
	hx::DivEq(me[(int)9],_az_length);
	HX_STACK_LINE(930)
	hx::DivEq(me[(int)10],_az_length);
	HX_STACK_LINE(932)
	_quaternion->setFromRotationMatrix(matrix);
	HX_STACK_LINE(935)
	if (((this->_transform == null()))){
		HX_STACK_LINE(936)
		::phoenix::MatrixTransform _g4 = ::phoenix::MatrixTransform_obj::__new(_position,_quaternion,_scale);		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(936)
		this->_transform = _g4;
	}
	else{
		HX_STACK_LINE(938)
		this->_transform->pos = _position;
		HX_STACK_LINE(939)
		this->_transform->rotation = _quaternion;
		HX_STACK_LINE(940)
		this->_transform->scale = _scale;
	}
	HX_STACK_LINE(943)
	return this->_transform;
}


HX_DEFINE_DYNAMIC_FUNC3(Matrix_obj,decompose,return )

::phoenix::Matrix Matrix_obj::makeFrustum( Float _left,Float _right,Float _bottom,Float _top,Float _near,Float _far){
	HX_STACK_FRAME("phoenix.Matrix","makeFrustum",0x8fd01306,"phoenix.Matrix.makeFrustum","phoenix/Matrix.hx",948,0x938b753d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_left,"_left")
	HX_STACK_ARG(_right,"_right")
	HX_STACK_ARG(_bottom,"_bottom")
	HX_STACK_ARG(_top,"_top")
	HX_STACK_ARG(_near,"_near")
	HX_STACK_ARG(_far,"_far")
	HX_STACK_LINE(950)
	Array< Float > te = this->elements;		HX_STACK_VAR(te,"te");
	HX_STACK_LINE(952)
	Float tx = (Float(((int)2 * _near)) / Float(((_right - _left))));		HX_STACK_VAR(tx,"tx");
	HX_STACK_LINE(953)
	Float ty = (Float(((int)2 * _near)) / Float(((_top - _bottom))));		HX_STACK_VAR(ty,"ty");
	HX_STACK_LINE(955)
	Float a = (Float(((_right + _left))) / Float(((_right - _left))));		HX_STACK_VAR(a,"a");
	HX_STACK_LINE(956)
	Float b = (Float(((_top + _bottom))) / Float(((_top - _bottom))));		HX_STACK_VAR(b,"b");
	HX_STACK_LINE(957)
	Float c = (Float(-(((_far + _near)))) / Float(((_far - _near))));		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(958)
	Float d = (Float((((int)-2 * _far) * _near)) / Float(((_far - _near))));		HX_STACK_VAR(d,"d");
	HX_STACK_LINE(960)
	te[(int)0] = tx;
	HX_STACK_LINE(960)
	te[(int)4] = (int)0;
	HX_STACK_LINE(960)
	te[(int)8] = a;
	HX_STACK_LINE(960)
	te[(int)12] = (int)0;
	HX_STACK_LINE(961)
	te[(int)1] = (int)0;
	HX_STACK_LINE(961)
	te[(int)5] = ty;
	HX_STACK_LINE(961)
	te[(int)9] = b;
	HX_STACK_LINE(961)
	te[(int)13] = (int)0;
	HX_STACK_LINE(962)
	te[(int)2] = (int)0;
	HX_STACK_LINE(962)
	te[(int)6] = (int)0;
	HX_STACK_LINE(962)
	te[(int)10] = c;
	HX_STACK_LINE(962)
	te[(int)14] = d;
	HX_STACK_LINE(963)
	te[(int)3] = (int)0;
	HX_STACK_LINE(963)
	te[(int)7] = (int)0;
	HX_STACK_LINE(963)
	te[(int)11] = (int)-1;
	HX_STACK_LINE(963)
	te[(int)15] = (int)0;
	HX_STACK_LINE(965)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC6(Matrix_obj,makeFrustum,return )

::phoenix::Matrix Matrix_obj::makePerspective( Float _fov,Float _aspect,Float _near,Float _far){
	HX_STACK_FRAME("phoenix.Matrix","makePerspective",0x14405320,"phoenix.Matrix.makePerspective","phoenix/Matrix.hx",970,0x938b753d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_fov,"_fov")
	HX_STACK_ARG(_aspect,"_aspect")
	HX_STACK_ARG(_near,"_near")
	HX_STACK_ARG(_far,"_far")
	HX_STACK_LINE(972)
	Float _g = ::Math_obj::tan(((_fov * 0.5) * 0.017453292519943278));		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(972)
	Float ymax = (_near * _g);		HX_STACK_VAR(ymax,"ymax");
	HX_STACK_LINE(973)
	Float ymin = -(ymax);		HX_STACK_VAR(ymin,"ymin");
	HX_STACK_LINE(974)
	Float xmin = (ymin * _aspect);		HX_STACK_VAR(xmin,"xmin");
	HX_STACK_LINE(975)
	Float xmax = (ymax * _aspect);		HX_STACK_VAR(xmax,"xmax");
	HX_STACK_LINE(977)
	Array< Float > te = this->elements;		HX_STACK_VAR(te,"te");
	HX_STACK_LINE(977)
	Float tx = (Float(((int)2 * _near)) / Float(((xmax - xmin))));		HX_STACK_VAR(tx,"tx");
	HX_STACK_LINE(977)
	Float ty = (Float(((int)2 * _near)) / Float(((ymax - ymin))));		HX_STACK_VAR(ty,"ty");
	HX_STACK_LINE(977)
	Float a = (Float(((xmax + xmin))) / Float(((xmax - xmin))));		HX_STACK_VAR(a,"a");
	HX_STACK_LINE(977)
	Float b = (Float(((ymax + ymin))) / Float(((ymax - ymin))));		HX_STACK_VAR(b,"b");
	HX_STACK_LINE(977)
	Float c = (Float(-(((_far + _near)))) / Float(((_far - _near))));		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(977)
	Float d = (Float((((int)-2 * _far) * _near)) / Float(((_far - _near))));		HX_STACK_VAR(d,"d");
	HX_STACK_LINE(977)
	te[(int)0] = tx;
	HX_STACK_LINE(977)
	te[(int)4] = (int)0;
	HX_STACK_LINE(977)
	te[(int)8] = a;
	HX_STACK_LINE(977)
	te[(int)12] = (int)0;
	HX_STACK_LINE(977)
	te[(int)1] = (int)0;
	HX_STACK_LINE(977)
	te[(int)5] = ty;
	HX_STACK_LINE(977)
	te[(int)9] = b;
	HX_STACK_LINE(977)
	te[(int)13] = (int)0;
	HX_STACK_LINE(977)
	te[(int)2] = (int)0;
	HX_STACK_LINE(977)
	te[(int)6] = (int)0;
	HX_STACK_LINE(977)
	te[(int)10] = c;
	HX_STACK_LINE(977)
	te[(int)14] = d;
	HX_STACK_LINE(977)
	te[(int)3] = (int)0;
	HX_STACK_LINE(977)
	te[(int)7] = (int)0;
	HX_STACK_LINE(977)
	te[(int)11] = (int)-1;
	HX_STACK_LINE(977)
	te[(int)15] = (int)0;
	HX_STACK_LINE(977)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC4(Matrix_obj,makePerspective,return )

::phoenix::Matrix Matrix_obj::makeOrthographic( Float _left,Float _right,Float _top,Float _bottom,Float _near,Float _far){
	HX_STACK_FRAME("phoenix.Matrix","makeOrthographic",0x8b159c4c,"phoenix.Matrix.makeOrthographic","phoenix/Matrix.hx",982,0x938b753d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_left,"_left")
	HX_STACK_ARG(_right,"_right")
	HX_STACK_ARG(_top,"_top")
	HX_STACK_ARG(_bottom,"_bottom")
	HX_STACK_ARG(_near,"_near")
	HX_STACK_ARG(_far,"_far")
	HX_STACK_LINE(984)
	Array< Float > te = this->elements;		HX_STACK_VAR(te,"te");
	HX_STACK_LINE(986)
	Float w = (_right - _left);		HX_STACK_VAR(w,"w");
	HX_STACK_LINE(987)
	Float h = (_top - _bottom);		HX_STACK_VAR(h,"h");
	HX_STACK_LINE(988)
	Float p = (_far - _near);		HX_STACK_VAR(p,"p");
	HX_STACK_LINE(990)
	Float tx = (Float(((_right + _left))) / Float(w));		HX_STACK_VAR(tx,"tx");
	HX_STACK_LINE(991)
	Float ty = (Float(((_top + _bottom))) / Float(h));		HX_STACK_VAR(ty,"ty");
	HX_STACK_LINE(992)
	Float tz = (Float(((_far + _near))) / Float(p));		HX_STACK_VAR(tz,"tz");
	HX_STACK_LINE(994)
	te[(int)0] = (Float((int)2) / Float(w));
	HX_STACK_LINE(994)
	te[(int)4] = (int)0;
	HX_STACK_LINE(994)
	te[(int)8] = (int)0;
	HX_STACK_LINE(994)
	te[(int)12] = -(tx);
	HX_STACK_LINE(995)
	te[(int)1] = (int)0;
	HX_STACK_LINE(995)
	te[(int)5] = (Float((int)2) / Float(h));
	HX_STACK_LINE(995)
	te[(int)9] = (int)0;
	HX_STACK_LINE(995)
	te[(int)13] = -(ty);
	HX_STACK_LINE(996)
	te[(int)2] = (int)0;
	HX_STACK_LINE(996)
	te[(int)6] = (int)0;
	HX_STACK_LINE(996)
	te[(int)10] = (Float((int)-2) / Float(p));
	HX_STACK_LINE(996)
	te[(int)14] = -(tz);
	HX_STACK_LINE(997)
	te[(int)3] = (int)0;
	HX_STACK_LINE(997)
	te[(int)7] = (int)0;
	HX_STACK_LINE(997)
	te[(int)11] = (int)0;
	HX_STACK_LINE(997)
	te[(int)15] = (int)1;
	HX_STACK_LINE(999)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC6(Matrix_obj,makeOrthographic,return )

Void Matrix_obj::fromArray( Array< Float > _from){
{
		HX_STACK_FRAME("phoenix.Matrix","fromArray",0x486ebb41,"phoenix.Matrix.fromArray","phoenix/Matrix.hx",1003,0x938b753d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_from,"_from")
		HX_STACK_LINE(1005)
		Array< Float > _g = _from->concat(Array_obj< Float >::__new());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1005)
		this->elements = _g;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Matrix_obj,fromArray,(void))

Array< Float > Matrix_obj::toArray( ){
	HX_STACK_FRAME("phoenix.Matrix","toArray",0x571dfd10,"phoenix.Matrix.toArray","phoenix/Matrix.hx",1009,0x938b753d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1011)
	Array< Float > te = this->elements;		HX_STACK_VAR(te,"te");
	HX_STACK_LINE(1013)
	return Array_obj< Float >::__new().Add(te->__get((int)0)).Add(te->__get((int)1)).Add(te->__get((int)2)).Add(te->__get((int)3)).Add(te->__get((int)4)).Add(te->__get((int)5)).Add(te->__get((int)6)).Add(te->__get((int)7)).Add(te->__get((int)8)).Add(te->__get((int)9)).Add(te->__get((int)10)).Add(te->__get((int)11)).Add(te->__get((int)12)).Add(te->__get((int)13)).Add(te->__get((int)14)).Add(te->__get((int)15));
}


HX_DEFINE_DYNAMIC_FUNC0(Matrix_obj,toArray,return )

::phoenix::Matrix Matrix_obj::clone( ){
	HX_STACK_FRAME("phoenix.Matrix","clone",0x454255cf,"phoenix.Matrix.clone","phoenix/Matrix.hx",1022,0x938b753d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1024)
	Array< Float > te = this->elements;		HX_STACK_VAR(te,"te");
	HX_STACK_LINE(1026)
	return ::phoenix::Matrix_obj::__new(te->__get((int)0),te->__get((int)4),te->__get((int)8),te->__get((int)12),te->__get((int)1),te->__get((int)5),te->__get((int)9),te->__get((int)13),te->__get((int)2),te->__get((int)6),te->__get((int)10),te->__get((int)14),te->__get((int)3),te->__get((int)7),te->__get((int)11),te->__get((int)15));
}


HX_DEFINE_DYNAMIC_FUNC0(Matrix_obj,clone,return )

::phoenix::Vector Matrix_obj::up( ){
	HX_STACK_FRAME("phoenix.Matrix","up",0xd34108a9,"phoenix.Matrix.up","phoenix/Matrix.hx",1036,0x938b753d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1036)
	return ::phoenix::Vector_obj::__new(this->elements->__get((int)4),this->elements->__get((int)5),this->elements->__get((int)10),null());
}


HX_DEFINE_DYNAMIC_FUNC0(Matrix_obj,up,return )

::phoenix::Vector Matrix_obj::down( ){
	HX_STACK_FRAME("phoenix.Matrix","down",0xe0d64a30,"phoenix.Matrix.down","phoenix/Matrix.hx",1040,0x938b753d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1040)
	::phoenix::Vector _this = ::phoenix::Vector_obj::__new(this->elements->__get((int)4),this->elements->__get((int)5),this->elements->__get((int)10),null());		HX_STACK_VAR(_this,"_this");
	HX_STACK_LINE(1040)
	return ::phoenix::Vector_obj::__new(-(_this->x),-(_this->y),-(_this->z),null());
}


HX_DEFINE_DYNAMIC_FUNC0(Matrix_obj,down,return )

::phoenix::Vector Matrix_obj::left( ){
	HX_STACK_FRAME("phoenix.Matrix","left",0xe61859d5,"phoenix.Matrix.left","phoenix/Matrix.hx",1044,0x938b753d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1044)
	::phoenix::Vector _this = ::phoenix::Vector_obj::__new(this->elements->__get((int)0),this->elements->__get((int)1),this->elements->__get((int)2),null());		HX_STACK_VAR(_this,"_this");
	HX_STACK_LINE(1044)
	return ::phoenix::Vector_obj::__new(-(_this->x),-(_this->y),-(_this->z),null());
}


HX_DEFINE_DYNAMIC_FUNC0(Matrix_obj,left,return )

::phoenix::Vector Matrix_obj::right( ){
	HX_STACK_FRAME("phoenix.Matrix","right",0xe6434e4e,"phoenix.Matrix.right","phoenix/Matrix.hx",1048,0x938b753d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1048)
	return ::phoenix::Vector_obj::__new(this->elements->__get((int)0),this->elements->__get((int)1),this->elements->__get((int)2),null());
}


HX_DEFINE_DYNAMIC_FUNC0(Matrix_obj,right,return )

::phoenix::Vector Matrix_obj::backward( ){
	HX_STACK_FRAME("phoenix.Matrix","backward",0x2b092cb1,"phoenix.Matrix.backward","phoenix/Matrix.hx",1052,0x938b753d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1052)
	return ::phoenix::Vector_obj::__new(this->elements->__get((int)8),this->elements->__get((int)9),this->elements->__get((int)10),null());
}


HX_DEFINE_DYNAMIC_FUNC0(Matrix_obj,backward,return )

::phoenix::Vector Matrix_obj::forward( ){
	HX_STACK_FRAME("phoenix.Matrix","forward",0x4ad524b7,"phoenix.Matrix.forward","phoenix/Matrix.hx",1056,0x938b753d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1056)
	::phoenix::Vector _this = ::phoenix::Vector_obj::__new(this->elements->__get((int)8),this->elements->__get((int)9),this->elements->__get((int)10),null());		HX_STACK_VAR(_this,"_this");
	HX_STACK_LINE(1056)
	return ::phoenix::Vector_obj::__new(-(_this->x),-(_this->y),-(_this->z),null());
}


HX_DEFINE_DYNAMIC_FUNC0(Matrix_obj,forward,return )


Matrix_obj::Matrix_obj()
{
}

void Matrix_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Matrix);
	HX_MARK_MEMBER_NAME(elements,"elements");
	HX_MARK_MEMBER_NAME(_float32array,"_float32array");
	HX_MARK_MEMBER_NAME(M11,"M11");
	HX_MARK_MEMBER_NAME(M21,"M21");
	HX_MARK_MEMBER_NAME(M31,"M31");
	HX_MARK_MEMBER_NAME(M41,"M41");
	HX_MARK_MEMBER_NAME(M12,"M12");
	HX_MARK_MEMBER_NAME(M22,"M22");
	HX_MARK_MEMBER_NAME(M32,"M32");
	HX_MARK_MEMBER_NAME(M42,"M42");
	HX_MARK_MEMBER_NAME(M13,"M13");
	HX_MARK_MEMBER_NAME(M23,"M23");
	HX_MARK_MEMBER_NAME(M33,"M33");
	HX_MARK_MEMBER_NAME(M43,"M43");
	HX_MARK_MEMBER_NAME(M14,"M14");
	HX_MARK_MEMBER_NAME(M24,"M24");
	HX_MARK_MEMBER_NAME(M34,"M34");
	HX_MARK_MEMBER_NAME(M44,"M44");
	HX_MARK_MEMBER_NAME(_transform,"_transform");
	HX_MARK_END_CLASS();
}

void Matrix_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(elements,"elements");
	HX_VISIT_MEMBER_NAME(_float32array,"_float32array");
	HX_VISIT_MEMBER_NAME(M11,"M11");
	HX_VISIT_MEMBER_NAME(M21,"M21");
	HX_VISIT_MEMBER_NAME(M31,"M31");
	HX_VISIT_MEMBER_NAME(M41,"M41");
	HX_VISIT_MEMBER_NAME(M12,"M12");
	HX_VISIT_MEMBER_NAME(M22,"M22");
	HX_VISIT_MEMBER_NAME(M32,"M32");
	HX_VISIT_MEMBER_NAME(M42,"M42");
	HX_VISIT_MEMBER_NAME(M13,"M13");
	HX_VISIT_MEMBER_NAME(M23,"M23");
	HX_VISIT_MEMBER_NAME(M33,"M33");
	HX_VISIT_MEMBER_NAME(M43,"M43");
	HX_VISIT_MEMBER_NAME(M14,"M14");
	HX_VISIT_MEMBER_NAME(M24,"M24");
	HX_VISIT_MEMBER_NAME(M34,"M34");
	HX_VISIT_MEMBER_NAME(M44,"M44");
	HX_VISIT_MEMBER_NAME(_transform,"_transform");
}

Dynamic Matrix_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"up") ) { return up_dyn(); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"M11") ) { return inCallProp ? get_M11() : M11; }
		if (HX_FIELD_EQ(inName,"M21") ) { return inCallProp ? get_M21() : M21; }
		if (HX_FIELD_EQ(inName,"M31") ) { return inCallProp ? get_M31() : M31; }
		if (HX_FIELD_EQ(inName,"M41") ) { return inCallProp ? get_M41() : M41; }
		if (HX_FIELD_EQ(inName,"M12") ) { return inCallProp ? get_M12() : M12; }
		if (HX_FIELD_EQ(inName,"M22") ) { return inCallProp ? get_M22() : M22; }
		if (HX_FIELD_EQ(inName,"M32") ) { return inCallProp ? get_M32() : M32; }
		if (HX_FIELD_EQ(inName,"M42") ) { return inCallProp ? get_M42() : M42; }
		if (HX_FIELD_EQ(inName,"M13") ) { return inCallProp ? get_M13() : M13; }
		if (HX_FIELD_EQ(inName,"M23") ) { return inCallProp ? get_M23() : M23; }
		if (HX_FIELD_EQ(inName,"M33") ) { return inCallProp ? get_M33() : M33; }
		if (HX_FIELD_EQ(inName,"M43") ) { return inCallProp ? get_M43() : M43; }
		if (HX_FIELD_EQ(inName,"M14") ) { return inCallProp ? get_M14() : M14; }
		if (HX_FIELD_EQ(inName,"M24") ) { return inCallProp ? get_M24() : M24; }
		if (HX_FIELD_EQ(inName,"M34") ) { return inCallProp ? get_M34() : M34; }
		if (HX_FIELD_EQ(inName,"M44") ) { return inCallProp ? get_M44() : M44; }
		if (HX_FIELD_EQ(inName,"set") ) { return set_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"copy") ) { return copy_dyn(); }
		if (HX_FIELD_EQ(inName,"down") ) { return down_dyn(); }
		if (HX_FIELD_EQ(inName,"left") ) { return left_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"scale") ) { return scale_dyn(); }
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		if (HX_FIELD_EQ(inName,"right") ) { return right_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"make2D") ) { return make2D_dyn(); }
		if (HX_FIELD_EQ(inName,"lookAt") ) { return lookAt_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"get_M11") ) { return get_M11_dyn(); }
		if (HX_FIELD_EQ(inName,"get_M12") ) { return get_M12_dyn(); }
		if (HX_FIELD_EQ(inName,"get_M13") ) { return get_M13_dyn(); }
		if (HX_FIELD_EQ(inName,"get_M14") ) { return get_M14_dyn(); }
		if (HX_FIELD_EQ(inName,"get_M21") ) { return get_M21_dyn(); }
		if (HX_FIELD_EQ(inName,"get_M22") ) { return get_M22_dyn(); }
		if (HX_FIELD_EQ(inName,"get_M23") ) { return get_M23_dyn(); }
		if (HX_FIELD_EQ(inName,"get_M24") ) { return get_M24_dyn(); }
		if (HX_FIELD_EQ(inName,"get_M31") ) { return get_M31_dyn(); }
		if (HX_FIELD_EQ(inName,"get_M32") ) { return get_M32_dyn(); }
		if (HX_FIELD_EQ(inName,"get_M33") ) { return get_M33_dyn(); }
		if (HX_FIELD_EQ(inName,"get_M34") ) { return get_M34_dyn(); }
		if (HX_FIELD_EQ(inName,"get_M41") ) { return get_M41_dyn(); }
		if (HX_FIELD_EQ(inName,"get_M42") ) { return get_M42_dyn(); }
		if (HX_FIELD_EQ(inName,"get_M43") ) { return get_M43_dyn(); }
		if (HX_FIELD_EQ(inName,"get_M44") ) { return get_M44_dyn(); }
		if (HX_FIELD_EQ(inName,"set_M11") ) { return set_M11_dyn(); }
		if (HX_FIELD_EQ(inName,"set_M12") ) { return set_M12_dyn(); }
		if (HX_FIELD_EQ(inName,"set_M13") ) { return set_M13_dyn(); }
		if (HX_FIELD_EQ(inName,"set_M14") ) { return set_M14_dyn(); }
		if (HX_FIELD_EQ(inName,"set_M21") ) { return set_M21_dyn(); }
		if (HX_FIELD_EQ(inName,"set_M22") ) { return set_M22_dyn(); }
		if (HX_FIELD_EQ(inName,"set_M23") ) { return set_M23_dyn(); }
		if (HX_FIELD_EQ(inName,"set_M24") ) { return set_M24_dyn(); }
		if (HX_FIELD_EQ(inName,"set_M31") ) { return set_M31_dyn(); }
		if (HX_FIELD_EQ(inName,"set_M32") ) { return set_M32_dyn(); }
		if (HX_FIELD_EQ(inName,"set_M33") ) { return set_M33_dyn(); }
		if (HX_FIELD_EQ(inName,"set_M34") ) { return set_M34_dyn(); }
		if (HX_FIELD_EQ(inName,"set_M41") ) { return set_M41_dyn(); }
		if (HX_FIELD_EQ(inName,"set_M42") ) { return set_M42_dyn(); }
		if (HX_FIELD_EQ(inName,"set_M43") ) { return set_M43_dyn(); }
		if (HX_FIELD_EQ(inName,"set_M44") ) { return set_M44_dyn(); }
		if (HX_FIELD_EQ(inName,"inverse") ) { return inverse_dyn(); }
		if (HX_FIELD_EQ(inName,"compose") ) { return compose_dyn(); }
		if (HX_FIELD_EQ(inName,"toArray") ) { return toArray_dyn(); }
		if (HX_FIELD_EQ(inName,"forward") ) { return forward_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"elements") ) { return elements; }
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		if (HX_FIELD_EQ(inName,"identity") ) { return identity_dyn(); }
		if (HX_FIELD_EQ(inName,"multiply") ) { return multiply_dyn(); }
		if (HX_FIELD_EQ(inName,"backward") ) { return backward_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"transpose") ) { return transpose_dyn(); }
		if (HX_FIELD_EQ(inName,"makeScale") ) { return makeScale_dyn(); }
		if (HX_FIELD_EQ(inName,"decompose") ) { return decompose_dyn(); }
		if (HX_FIELD_EQ(inName,"fromArray") ) { return fromArray_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"getInverse") ) { return getInverse_dyn(); }
		if (HX_FIELD_EQ(inName,"_transform") ) { return _transform; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"getPosition") ) { return getPosition_dyn(); }
		if (HX_FIELD_EQ(inName,"determinant") ) { return determinant_dyn(); }
		if (HX_FIELD_EQ(inName,"setPosition") ) { return setPosition_dyn(); }
		if (HX_FIELD_EQ(inName,"makeFrustum") ) { return makeFrustum_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"float32array") ) { return float32array_dyn(); }
		if (HX_FIELD_EQ(inName,"copyPosition") ) { return copyPosition_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_float32array") ) { return _float32array; }
		if (HX_FIELD_EQ(inName,"makeRotationX") ) { return makeRotationX_dyn(); }
		if (HX_FIELD_EQ(inName,"makeRotationY") ) { return makeRotationY_dyn(); }
		if (HX_FIELD_EQ(inName,"makeRotationZ") ) { return makeRotationZ_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"multiplyScalar") ) { return multiplyScalar_dyn(); }
		if (HX_FIELD_EQ(inName,"flattenToArray") ) { return flattenToArray_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"extractRotation") ) { return extractRotation_dyn(); }
		if (HX_FIELD_EQ(inName,"multiplyToArray") ) { return multiplyToArray_dyn(); }
		if (HX_FIELD_EQ(inName,"makeTranslation") ) { return makeTranslation_dyn(); }
		if (HX_FIELD_EQ(inName,"makePerspective") ) { return makePerspective_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"multiplyMatrices") ) { return multiplyMatrices_dyn(); }
		if (HX_FIELD_EQ(inName,"makeRotationAxis") ) { return makeRotationAxis_dyn(); }
		if (HX_FIELD_EQ(inName,"makeOrthographic") ) { return makeOrthographic_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"getMaxScaleOnAxis") ) { return getMaxScaleOnAxis_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"compose_with_origin") ) { return compose_with_origin_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"multiplyVector3Array") ) { return multiplyVector3Array_dyn(); }
		if (HX_FIELD_EQ(inName,"flattenToArrayOffset") ) { return flattenToArrayOffset_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"makeRotationFromEuler") ) { return makeRotationFromEuler_dyn(); }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"makeRotationFromQuaternion") ) { return makeRotationFromQuaternion_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Matrix_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"M11") ) { if (inCallProp) return set_M11(inValue);M11=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"M21") ) { if (inCallProp) return set_M21(inValue);M21=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"M31") ) { if (inCallProp) return set_M31(inValue);M31=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"M41") ) { if (inCallProp) return set_M41(inValue);M41=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"M12") ) { if (inCallProp) return set_M12(inValue);M12=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"M22") ) { if (inCallProp) return set_M22(inValue);M22=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"M32") ) { if (inCallProp) return set_M32(inValue);M32=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"M42") ) { if (inCallProp) return set_M42(inValue);M42=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"M13") ) { if (inCallProp) return set_M13(inValue);M13=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"M23") ) { if (inCallProp) return set_M23(inValue);M23=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"M33") ) { if (inCallProp) return set_M33(inValue);M33=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"M43") ) { if (inCallProp) return set_M43(inValue);M43=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"M14") ) { if (inCallProp) return set_M14(inValue);M14=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"M24") ) { if (inCallProp) return set_M24(inValue);M24=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"M34") ) { if (inCallProp) return set_M34(inValue);M34=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"M44") ) { if (inCallProp) return set_M44(inValue);M44=inValue.Cast< Float >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"elements") ) { elements=inValue.Cast< Array< Float > >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_transform") ) { _transform=inValue.Cast< ::phoenix::MatrixTransform >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_float32array") ) { _float32array=inValue.Cast< ::snow::platform::native::utils::Float32Array >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Matrix_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("elements"));
	outFields->push(HX_CSTRING("_float32array"));
	outFields->push(HX_CSTRING("M11"));
	outFields->push(HX_CSTRING("M21"));
	outFields->push(HX_CSTRING("M31"));
	outFields->push(HX_CSTRING("M41"));
	outFields->push(HX_CSTRING("M12"));
	outFields->push(HX_CSTRING("M22"));
	outFields->push(HX_CSTRING("M32"));
	outFields->push(HX_CSTRING("M42"));
	outFields->push(HX_CSTRING("M13"));
	outFields->push(HX_CSTRING("M23"));
	outFields->push(HX_CSTRING("M33"));
	outFields->push(HX_CSTRING("M43"));
	outFields->push(HX_CSTRING("M14"));
	outFields->push(HX_CSTRING("M24"));
	outFields->push(HX_CSTRING("M34"));
	outFields->push(HX_CSTRING("M44"));
	outFields->push(HX_CSTRING("_transform"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Array< Float >*/ ,(int)offsetof(Matrix_obj,elements),HX_CSTRING("elements")},
	{hx::fsObject /*::snow::platform::native::utils::Float32Array*/ ,(int)offsetof(Matrix_obj,_float32array),HX_CSTRING("_float32array")},
	{hx::fsFloat,(int)offsetof(Matrix_obj,M11),HX_CSTRING("M11")},
	{hx::fsFloat,(int)offsetof(Matrix_obj,M21),HX_CSTRING("M21")},
	{hx::fsFloat,(int)offsetof(Matrix_obj,M31),HX_CSTRING("M31")},
	{hx::fsFloat,(int)offsetof(Matrix_obj,M41),HX_CSTRING("M41")},
	{hx::fsFloat,(int)offsetof(Matrix_obj,M12),HX_CSTRING("M12")},
	{hx::fsFloat,(int)offsetof(Matrix_obj,M22),HX_CSTRING("M22")},
	{hx::fsFloat,(int)offsetof(Matrix_obj,M32),HX_CSTRING("M32")},
	{hx::fsFloat,(int)offsetof(Matrix_obj,M42),HX_CSTRING("M42")},
	{hx::fsFloat,(int)offsetof(Matrix_obj,M13),HX_CSTRING("M13")},
	{hx::fsFloat,(int)offsetof(Matrix_obj,M23),HX_CSTRING("M23")},
	{hx::fsFloat,(int)offsetof(Matrix_obj,M33),HX_CSTRING("M33")},
	{hx::fsFloat,(int)offsetof(Matrix_obj,M43),HX_CSTRING("M43")},
	{hx::fsFloat,(int)offsetof(Matrix_obj,M14),HX_CSTRING("M14")},
	{hx::fsFloat,(int)offsetof(Matrix_obj,M24),HX_CSTRING("M24")},
	{hx::fsFloat,(int)offsetof(Matrix_obj,M34),HX_CSTRING("M34")},
	{hx::fsFloat,(int)offsetof(Matrix_obj,M44),HX_CSTRING("M44")},
	{hx::fsObject /*::phoenix::MatrixTransform*/ ,(int)offsetof(Matrix_obj,_transform),HX_CSTRING("_transform")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("elements"),
	HX_CSTRING("_float32array"),
	HX_CSTRING("M11"),
	HX_CSTRING("M21"),
	HX_CSTRING("M31"),
	HX_CSTRING("M41"),
	HX_CSTRING("M12"),
	HX_CSTRING("M22"),
	HX_CSTRING("M32"),
	HX_CSTRING("M42"),
	HX_CSTRING("M13"),
	HX_CSTRING("M23"),
	HX_CSTRING("M33"),
	HX_CSTRING("M43"),
	HX_CSTRING("M14"),
	HX_CSTRING("M24"),
	HX_CSTRING("M34"),
	HX_CSTRING("M44"),
	HX_CSTRING("set"),
	HX_CSTRING("toString"),
	HX_CSTRING("get_M11"),
	HX_CSTRING("get_M12"),
	HX_CSTRING("get_M13"),
	HX_CSTRING("get_M14"),
	HX_CSTRING("get_M21"),
	HX_CSTRING("get_M22"),
	HX_CSTRING("get_M23"),
	HX_CSTRING("get_M24"),
	HX_CSTRING("get_M31"),
	HX_CSTRING("get_M32"),
	HX_CSTRING("get_M33"),
	HX_CSTRING("get_M34"),
	HX_CSTRING("get_M41"),
	HX_CSTRING("get_M42"),
	HX_CSTRING("get_M43"),
	HX_CSTRING("get_M44"),
	HX_CSTRING("set_M11"),
	HX_CSTRING("set_M12"),
	HX_CSTRING("set_M13"),
	HX_CSTRING("set_M14"),
	HX_CSTRING("set_M21"),
	HX_CSTRING("set_M22"),
	HX_CSTRING("set_M23"),
	HX_CSTRING("set_M24"),
	HX_CSTRING("set_M31"),
	HX_CSTRING("set_M32"),
	HX_CSTRING("set_M33"),
	HX_CSTRING("set_M34"),
	HX_CSTRING("set_M41"),
	HX_CSTRING("set_M42"),
	HX_CSTRING("set_M43"),
	HX_CSTRING("set_M44"),
	HX_CSTRING("float32array"),
	HX_CSTRING("identity"),
	HX_CSTRING("copy"),
	HX_CSTRING("make2D"),
	HX_CSTRING("copyPosition"),
	HX_CSTRING("getPosition"),
	HX_CSTRING("extractRotation"),
	HX_CSTRING("makeRotationFromEuler"),
	HX_CSTRING("makeRotationFromQuaternion"),
	HX_CSTRING("lookAt"),
	HX_CSTRING("multiply"),
	HX_CSTRING("multiplyMatrices"),
	HX_CSTRING("multiplyToArray"),
	HX_CSTRING("multiplyScalar"),
	HX_CSTRING("multiplyVector3Array"),
	HX_CSTRING("determinant"),
	HX_CSTRING("transpose"),
	HX_CSTRING("flattenToArray"),
	HX_CSTRING("flattenToArrayOffset"),
	HX_CSTRING("setPosition"),
	HX_CSTRING("inverse"),
	HX_CSTRING("getInverse"),
	HX_CSTRING("scale"),
	HX_CSTRING("getMaxScaleOnAxis"),
	HX_CSTRING("makeTranslation"),
	HX_CSTRING("makeRotationX"),
	HX_CSTRING("makeRotationY"),
	HX_CSTRING("makeRotationZ"),
	HX_CSTRING("makeRotationAxis"),
	HX_CSTRING("makeScale"),
	HX_CSTRING("compose_with_origin"),
	HX_CSTRING("compose"),
	HX_CSTRING("_transform"),
	HX_CSTRING("decompose"),
	HX_CSTRING("makeFrustum"),
	HX_CSTRING("makePerspective"),
	HX_CSTRING("makeOrthographic"),
	HX_CSTRING("fromArray"),
	HX_CSTRING("toArray"),
	HX_CSTRING("clone"),
	HX_CSTRING("up"),
	HX_CSTRING("down"),
	HX_CSTRING("left"),
	HX_CSTRING("right"),
	HX_CSTRING("backward"),
	HX_CSTRING("forward"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Matrix_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Matrix_obj::__mClass,"__mClass");
};

#endif

Class Matrix_obj::__mClass;

void Matrix_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("phoenix.Matrix"), hx::TCanCast< Matrix_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatics
#endif
#ifdef HXCPP_SCRIPTABLE
    , sMemberStorageInfo
#endif
);
}

void Matrix_obj::__boot()
{
}

} // end namespace phoenix
