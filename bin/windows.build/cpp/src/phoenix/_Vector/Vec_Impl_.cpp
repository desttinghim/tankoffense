#include <hxcpp.h>

#ifndef INCLUDED_phoenix_Vector
#include <phoenix/Vector.h>
#endif
#ifndef INCLUDED_phoenix__Vector_Vec_Impl_
#include <phoenix/_Vector/Vec_Impl_.h>
#endif
namespace phoenix{
namespace _Vector{

Void Vec_Impl__obj::__construct()
{
	return null();
}

//Vec_Impl__obj::~Vec_Impl__obj() { }

Dynamic Vec_Impl__obj::__CreateEmpty() { return  new Vec_Impl__obj; }
hx::ObjectPtr< Vec_Impl__obj > Vec_Impl__obj::__new()
{  hx::ObjectPtr< Vec_Impl__obj > result = new Vec_Impl__obj();
	result->__construct();
	return result;}

Dynamic Vec_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Vec_Impl__obj > result = new Vec_Impl__obj();
	result->__construct();
	return result;}

::phoenix::Vector Vec_Impl__obj::_new( Dynamic _x,Dynamic _y,Dynamic _z,Dynamic _w){
	HX_STACK_FRAME("phoenix._Vector.Vec_Impl_","_new",0x7addb3a6,"phoenix._Vector.Vec_Impl_._new","phoenix/Vector.hx",801,0x5d0bf7fb)
	HX_STACK_ARG(_x,"_x")
	HX_STACK_ARG(_y,"_y")
	HX_STACK_ARG(_z,"_z")
	HX_STACK_ARG(_w,"_w")
	HX_STACK_LINE(801)
	return ::phoenix::Vector_obj::__new(_x,_y,_z,_w);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Vec_Impl__obj,_new,return )

::phoenix::Vector Vec_Impl__obj::_multiply( ::phoenix::Vector lhs,::phoenix::Vector rhs){
	HX_STACK_FRAME("phoenix._Vector.Vec_Impl_","_multiply",0x4f47611e,"phoenix._Vector.Vec_Impl_._multiply","phoenix/Vector.hx",805,0x5d0bf7fb)
	HX_STACK_ARG(lhs,"lhs")
	HX_STACK_ARG(rhs,"rhs")
	HX_STACK_LINE(805)
	return ::phoenix::Vector_obj::__new((lhs->x * rhs->x),(lhs->y * rhs->y),(lhs->z * rhs->z),null());
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Vec_Impl__obj,_multiply,return )

::phoenix::Vector Vec_Impl__obj::_multiply_scalar( ::phoenix::Vector lhs,Float rhs){
	HX_STACK_FRAME("phoenix._Vector.Vec_Impl_","_multiply_scalar",0xb35d176d,"phoenix._Vector.Vec_Impl_._multiply_scalar","phoenix/Vector.hx",808,0x5d0bf7fb)
	HX_STACK_ARG(lhs,"lhs")
	HX_STACK_ARG(rhs,"rhs")
	HX_STACK_LINE(808)
	return ::phoenix::Vector_obj::Multiply(lhs,rhs);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Vec_Impl__obj,_multiply_scalar,return )

::phoenix::Vector Vec_Impl__obj::_multiply_scalar_int( ::phoenix::Vector lhs,int rhs){
	HX_STACK_FRAME("phoenix._Vector.Vec_Impl_","_multiply_scalar_int",0x5efd23dd,"phoenix._Vector.Vec_Impl_._multiply_scalar_int","phoenix/Vector.hx",811,0x5d0bf7fb)
	HX_STACK_ARG(lhs,"lhs")
	HX_STACK_ARG(rhs,"rhs")
	HX_STACK_LINE(811)
	return ::phoenix::Vector_obj::Multiply(lhs,rhs);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Vec_Impl__obj,_multiply_scalar_int,return )

::phoenix::Vector Vec_Impl__obj::_divide( ::phoenix::Vector lhs,::phoenix::Vector rhs){
	HX_STACK_FRAME("phoenix._Vector.Vec_Impl_","_divide",0xf9dd1bf3,"phoenix._Vector.Vec_Impl_._divide","phoenix/Vector.hx",815,0x5d0bf7fb)
	HX_STACK_ARG(lhs,"lhs")
	HX_STACK_ARG(rhs,"rhs")
	HX_STACK_LINE(815)
	return ::phoenix::Vector_obj::__new((Float(lhs->x) / Float(rhs->x)),(Float(lhs->y) / Float(rhs->y)),(Float(lhs->z) / Float(rhs->z)),null());
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Vec_Impl__obj,_divide,return )

::phoenix::Vector Vec_Impl__obj::_divide_scalar( ::phoenix::Vector lhs,Float rhs){
	HX_STACK_FRAME("phoenix._Vector.Vec_Impl_","_divide_scalar",0xf34b9138,"phoenix._Vector.Vec_Impl_._divide_scalar","phoenix/Vector.hx",818,0x5d0bf7fb)
	HX_STACK_ARG(lhs,"lhs")
	HX_STACK_ARG(rhs,"rhs")
	HX_STACK_LINE(818)
	return ::phoenix::Vector_obj::__new((Float(lhs->x) / Float(rhs)),(Float(lhs->y) / Float(rhs)),(Float(lhs->z) / Float(rhs)),null());
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Vec_Impl__obj,_divide_scalar,return )

::phoenix::Vector Vec_Impl__obj::_divide_scalar_int( ::phoenix::Vector lhs,int rhs){
	HX_STACK_FRAME("phoenix._Vector.Vec_Impl_","_divide_scalar_int",0x8c73df28,"phoenix._Vector.Vec_Impl_._divide_scalar_int","phoenix/Vector.hx",821,0x5d0bf7fb)
	HX_STACK_ARG(lhs,"lhs")
	HX_STACK_ARG(rhs,"rhs")
	HX_STACK_LINE(821)
	return ::phoenix::Vector_obj::__new((Float(lhs->x) / Float(rhs)),(Float(lhs->y) / Float(rhs)),(Float(lhs->z) / Float(rhs)),null());
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Vec_Impl__obj,_divide_scalar_int,return )

::phoenix::Vector Vec_Impl__obj::_add( ::phoenix::Vector lhs,::phoenix::Vector rhs){
	HX_STACK_FRAME("phoenix._Vector.Vec_Impl_","_add",0x7ad3d567,"phoenix._Vector.Vec_Impl_._add","phoenix/Vector.hx",825,0x5d0bf7fb)
	HX_STACK_ARG(lhs,"lhs")
	HX_STACK_ARG(rhs,"rhs")
	HX_STACK_LINE(825)
	return ::phoenix::Vector_obj::__new((lhs->x + rhs->x),(lhs->y + rhs->y),(lhs->z + rhs->z),null());
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Vec_Impl__obj,_add,return )

::phoenix::Vector Vec_Impl__obj::_add_scalar( ::phoenix::Vector lhs,Float rhs){
	HX_STACK_FRAME("phoenix._Vector.Vec_Impl_","_add_scalar",0x7c69ae44,"phoenix._Vector.Vec_Impl_._add_scalar","phoenix/Vector.hx",828,0x5d0bf7fb)
	HX_STACK_ARG(lhs,"lhs")
	HX_STACK_ARG(rhs,"rhs")
	HX_STACK_LINE(828)
	return ::phoenix::Vector_obj::__new((lhs->x + rhs),(lhs->y + rhs),(lhs->z + rhs),null());
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Vec_Impl__obj,_add_scalar,return )

::phoenix::Vector Vec_Impl__obj::_add_scalar_int( ::phoenix::Vector lhs,int rhs){
	HX_STACK_FRAME("phoenix._Vector.Vec_Impl_","_add_scalar_int",0x84337234,"phoenix._Vector.Vec_Impl_._add_scalar_int","phoenix/Vector.hx",831,0x5d0bf7fb)
	HX_STACK_ARG(lhs,"lhs")
	HX_STACK_ARG(rhs,"rhs")
	HX_STACK_LINE(831)
	return ::phoenix::Vector_obj::__new((lhs->x + rhs),(lhs->y + rhs),(lhs->z + rhs),null());
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Vec_Impl__obj,_add_scalar_int,return )

::phoenix::Vector Vec_Impl__obj::_subtract( ::phoenix::Vector lhs,::phoenix::Vector rhs){
	HX_STACK_FRAME("phoenix._Vector.Vec_Impl_","_subtract",0xaccbf40e,"phoenix._Vector.Vec_Impl_._subtract","phoenix/Vector.hx",835,0x5d0bf7fb)
	HX_STACK_ARG(lhs,"lhs")
	HX_STACK_ARG(rhs,"rhs")
	HX_STACK_LINE(835)
	return ::phoenix::Vector_obj::__new((lhs->x - rhs->x),(lhs->y - rhs->y),(lhs->z - rhs->z),null());
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Vec_Impl__obj,_subtract,return )

::phoenix::Vector Vec_Impl__obj::_subtract_scalar( ::phoenix::Vector lhs,Float rhs){
	HX_STACK_FRAME("phoenix._Vector.Vec_Impl_","_subtract_scalar",0x32b9c27d,"phoenix._Vector.Vec_Impl_._subtract_scalar","phoenix/Vector.hx",838,0x5d0bf7fb)
	HX_STACK_ARG(lhs,"lhs")
	HX_STACK_ARG(rhs,"rhs")
	HX_STACK_LINE(838)
	return ::phoenix::Vector_obj::__new((lhs->x - rhs),(lhs->y - rhs),(lhs->z - rhs),null());
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Vec_Impl__obj,_subtract_scalar,return )

::phoenix::Vector Vec_Impl__obj::_subtract_scalar_int( ::phoenix::Vector lhs,int rhs){
	HX_STACK_FRAME("phoenix._Vector.Vec_Impl_","_subtract_scalar_int",0x77f496ed,"phoenix._Vector.Vec_Impl_._subtract_scalar_int","phoenix/Vector.hx",841,0x5d0bf7fb)
	HX_STACK_ARG(lhs,"lhs")
	HX_STACK_ARG(rhs,"rhs")
	HX_STACK_LINE(841)
	return ::phoenix::Vector_obj::__new((lhs->x - rhs),(lhs->y - rhs),(lhs->z - rhs),null());
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Vec_Impl__obj,_subtract_scalar_int,return )


Vec_Impl__obj::Vec_Impl__obj()
{
}

Dynamic Vec_Impl__obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_new") ) { return _new_dyn(); }
		if (HX_FIELD_EQ(inName,"_add") ) { return _add_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_divide") ) { return _divide_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_multiply") ) { return _multiply_dyn(); }
		if (HX_FIELD_EQ(inName,"_subtract") ) { return _subtract_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_add_scalar") ) { return _add_scalar_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_divide_scalar") ) { return _divide_scalar_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_add_scalar_int") ) { return _add_scalar_int_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_multiply_scalar") ) { return _multiply_scalar_dyn(); }
		if (HX_FIELD_EQ(inName,"_subtract_scalar") ) { return _subtract_scalar_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_divide_scalar_int") ) { return _divide_scalar_int_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"_multiply_scalar_int") ) { return _multiply_scalar_int_dyn(); }
		if (HX_FIELD_EQ(inName,"_subtract_scalar_int") ) { return _subtract_scalar_int_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Vec_Impl__obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void Vec_Impl__obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("_new"),
	HX_CSTRING("_multiply"),
	HX_CSTRING("_multiply_scalar"),
	HX_CSTRING("_multiply_scalar_int"),
	HX_CSTRING("_divide"),
	HX_CSTRING("_divide_scalar"),
	HX_CSTRING("_divide_scalar_int"),
	HX_CSTRING("_add"),
	HX_CSTRING("_add_scalar"),
	HX_CSTRING("_add_scalar_int"),
	HX_CSTRING("_subtract"),
	HX_CSTRING("_subtract_scalar"),
	HX_CSTRING("_subtract_scalar_int"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Vec_Impl__obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Vec_Impl__obj::__mClass,"__mClass");
};

#endif

Class Vec_Impl__obj::__mClass;

void Vec_Impl__obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("phoenix._Vector.Vec_Impl_"), hx::TCanCast< Vec_Impl__obj> ,sStaticFields,sMemberFields,
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

void Vec_Impl__obj::__boot()
{
}

} // end namespace phoenix
} // end namespace _Vector
