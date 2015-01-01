#include <hxcpp.h>

#ifndef INCLUDED_Luxe
#include <Luxe.h>
#endif
#ifndef INCLUDED_luxe_Screen
#include <luxe/Screen.h>
#endif
#ifndef INCLUDED_phoenix_Camera
#include <phoenix/Camera.h>
#endif
#ifndef INCLUDED_phoenix_Ray
#include <phoenix/Ray.h>
#endif
#ifndef INCLUDED_phoenix_Rectangle
#include <phoenix/Rectangle.h>
#endif
#ifndef INCLUDED_phoenix_Vector
#include <phoenix/Vector.h>
#endif
namespace phoenix{

Void Ray_obj::__construct(::phoenix::Vector _screen_pos,::phoenix::Camera _camera,::phoenix::Rectangle _viewport)
{
HX_STACK_FRAME("phoenix.Ray","new",0xbe8943dd,"phoenix.Ray.new","phoenix/Ray.hx",17,0x66221cf4)
HX_STACK_THIS(this)
HX_STACK_ARG(_screen_pos,"_screen_pos")
HX_STACK_ARG(_camera,"_camera")
HX_STACK_ARG(_viewport,"_viewport")
{
	HX_STACK_LINE(19)
	if (((_viewport == null()))){
		HX_STACK_LINE(20)
		::phoenix::Rectangle _g = ::phoenix::Rectangle_obj::__new((int)0,(int)0,::Luxe_obj::get_screen()->w,::Luxe_obj::get_screen()->h);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(20)
		_viewport = _g;
	}
	HX_STACK_LINE(23)
	if (((_camera == null()))){
		HX_STACK_LINE(23)
		HX_STACK_DO_THROW(HX_CSTRING("Camera required for a ray!"));
	}
	HX_STACK_LINE(25)
	this->camera = _camera;
	HX_STACK_LINE(26)
	this->viewport = _viewport;
	HX_STACK_LINE(28)
	this->refresh(_screen_pos);
}
;
	return null();
}

//Ray_obj::~Ray_obj() { }

Dynamic Ray_obj::__CreateEmpty() { return  new Ray_obj; }
hx::ObjectPtr< Ray_obj > Ray_obj::__new(::phoenix::Vector _screen_pos,::phoenix::Camera _camera,::phoenix::Rectangle _viewport)
{  hx::ObjectPtr< Ray_obj > result = new Ray_obj();
	result->__construct(_screen_pos,_camera,_viewport);
	return result;}

Dynamic Ray_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Ray_obj > result = new Ray_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

Void Ray_obj::refresh( ::phoenix::Vector _screen_pos){
{
		HX_STACK_FRAME("phoenix.Ray","refresh",0x77a24fd8,"phoenix.Ray.refresh","phoenix/Ray.hx",32,0x66221cf4)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_screen_pos,"_screen_pos")
		HX_STACK_LINE(35)
		Float ndc_x = ((((Float(_screen_pos->x) / Float(this->viewport->w)) - 0.5)) * 2.0);		HX_STACK_VAR(ndc_x,"ndc_x");
		HX_STACK_LINE(36)
		Float ndc_y = ((((Float(((this->viewport->h - _screen_pos->y))) / Float(this->viewport->h)) - 0.5)) * 2.0);		HX_STACK_VAR(ndc_y,"ndc_y");
		HX_STACK_LINE(39)
		::phoenix::Vector start_ndc = ::phoenix::Vector_obj::__new(ndc_x,ndc_y,0.0,1.0);		HX_STACK_VAR(start_ndc,"start_ndc");
		HX_STACK_LINE(40)
		::phoenix::Vector end_ndc = ::phoenix::Vector_obj::__new(ndc_x,ndc_y,1.0,1.0);		HX_STACK_VAR(end_ndc,"end_ndc");
		HX_STACK_LINE(42)
		::phoenix::Vector _g = this->camera->unproject(start_ndc);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(42)
		this->origin = _g;
		HX_STACK_LINE(43)
		::phoenix::Vector _g1 = this->camera->unproject(end_ndc);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(43)
		this->end = _g1;
		HX_STACK_LINE(44)
		::phoenix::Vector _g2;		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(44)
		{
			HX_STACK_LINE(44)
			::phoenix::Vector a = this->end;		HX_STACK_VAR(a,"a");
			HX_STACK_LINE(44)
			::phoenix::Vector b = this->origin;		HX_STACK_VAR(b,"b");
			HX_STACK_LINE(44)
			_g2 = ::phoenix::Vector_obj::__new((a->x - b->x),(a->y - b->y),(a->z - b->z),null());
		}
		HX_STACK_LINE(44)
		this->dir = _g2;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Ray_obj,refresh,(void))


Ray_obj::Ray_obj()
{
}

void Ray_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Ray);
	HX_MARK_MEMBER_NAME(origin,"origin");
	HX_MARK_MEMBER_NAME(end,"end");
	HX_MARK_MEMBER_NAME(dir,"dir");
	HX_MARK_MEMBER_NAME(camera,"camera");
	HX_MARK_MEMBER_NAME(viewport,"viewport");
	HX_MARK_END_CLASS();
}

void Ray_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(origin,"origin");
	HX_VISIT_MEMBER_NAME(end,"end");
	HX_VISIT_MEMBER_NAME(dir,"dir");
	HX_VISIT_MEMBER_NAME(camera,"camera");
	HX_VISIT_MEMBER_NAME(viewport,"viewport");
}

Dynamic Ray_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"end") ) { return end; }
		if (HX_FIELD_EQ(inName,"dir") ) { return dir; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"origin") ) { return origin; }
		if (HX_FIELD_EQ(inName,"camera") ) { return camera; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"refresh") ) { return refresh_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"viewport") ) { return viewport; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Ray_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"end") ) { end=inValue.Cast< ::phoenix::Vector >(); return inValue; }
		if (HX_FIELD_EQ(inName,"dir") ) { dir=inValue.Cast< ::phoenix::Vector >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"origin") ) { origin=inValue.Cast< ::phoenix::Vector >(); return inValue; }
		if (HX_FIELD_EQ(inName,"camera") ) { camera=inValue.Cast< ::phoenix::Camera >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"viewport") ) { viewport=inValue.Cast< ::phoenix::Rectangle >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Ray_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("origin"));
	outFields->push(HX_CSTRING("end"));
	outFields->push(HX_CSTRING("dir"));
	outFields->push(HX_CSTRING("camera"));
	outFields->push(HX_CSTRING("viewport"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::phoenix::Vector*/ ,(int)offsetof(Ray_obj,origin),HX_CSTRING("origin")},
	{hx::fsObject /*::phoenix::Vector*/ ,(int)offsetof(Ray_obj,end),HX_CSTRING("end")},
	{hx::fsObject /*::phoenix::Vector*/ ,(int)offsetof(Ray_obj,dir),HX_CSTRING("dir")},
	{hx::fsObject /*::phoenix::Camera*/ ,(int)offsetof(Ray_obj,camera),HX_CSTRING("camera")},
	{hx::fsObject /*::phoenix::Rectangle*/ ,(int)offsetof(Ray_obj,viewport),HX_CSTRING("viewport")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("origin"),
	HX_CSTRING("end"),
	HX_CSTRING("dir"),
	HX_CSTRING("camera"),
	HX_CSTRING("viewport"),
	HX_CSTRING("refresh"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Ray_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Ray_obj::__mClass,"__mClass");
};

#endif

Class Ray_obj::__mClass;

void Ray_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("phoenix.Ray"), hx::TCanCast< Ray_obj> ,sStaticFields,sMemberFields,
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

void Ray_obj::__boot()
{
}

} // end namespace phoenix
