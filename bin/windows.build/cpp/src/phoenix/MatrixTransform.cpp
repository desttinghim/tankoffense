#include <hxcpp.h>

#ifndef INCLUDED_phoenix_MatrixTransform
#include <phoenix/MatrixTransform.h>
#endif
#ifndef INCLUDED_phoenix_Quaternion
#include <phoenix/Quaternion.h>
#endif
#ifndef INCLUDED_phoenix_Vector
#include <phoenix/Vector.h>
#endif
namespace phoenix{

Void MatrixTransform_obj::__construct(::phoenix::Vector p,::phoenix::Quaternion r,::phoenix::Vector s)
{
HX_STACK_FRAME("phoenix.MatrixTransform","new",0x876d86de,"phoenix.MatrixTransform.new","phoenix/Matrix.hx",15,0x938b753d)
HX_STACK_THIS(this)
HX_STACK_ARG(p,"p")
HX_STACK_ARG(r,"r")
HX_STACK_ARG(s,"s")
{
	HX_STACK_LINE(16)
	this->pos = p;
	HX_STACK_LINE(17)
	this->rotation = r;
	HX_STACK_LINE(18)
	this->scale = s;
}
;
	return null();
}

//MatrixTransform_obj::~MatrixTransform_obj() { }

Dynamic MatrixTransform_obj::__CreateEmpty() { return  new MatrixTransform_obj; }
hx::ObjectPtr< MatrixTransform_obj > MatrixTransform_obj::__new(::phoenix::Vector p,::phoenix::Quaternion r,::phoenix::Vector s)
{  hx::ObjectPtr< MatrixTransform_obj > result = new MatrixTransform_obj();
	result->__construct(p,r,s);
	return result;}

Dynamic MatrixTransform_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< MatrixTransform_obj > result = new MatrixTransform_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

Void MatrixTransform_obj::destroy( ){
{
		HX_STACK_FRAME("phoenix.MatrixTransform","destroy",0x262ffa78,"phoenix.MatrixTransform.destroy","phoenix/Matrix.hx",21,0x938b753d)
		HX_STACK_THIS(this)
		HX_STACK_LINE(22)
		this->pos = null();
		HX_STACK_LINE(22)
		this->rotation = null();
		HX_STACK_LINE(22)
		this->scale = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(MatrixTransform_obj,destroy,(void))


MatrixTransform_obj::MatrixTransform_obj()
{
}

void MatrixTransform_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(MatrixTransform);
	HX_MARK_MEMBER_NAME(pos,"pos");
	HX_MARK_MEMBER_NAME(rotation,"rotation");
	HX_MARK_MEMBER_NAME(scale,"scale");
	HX_MARK_END_CLASS();
}

void MatrixTransform_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(pos,"pos");
	HX_VISIT_MEMBER_NAME(rotation,"rotation");
	HX_VISIT_MEMBER_NAME(scale,"scale");
}

Dynamic MatrixTransform_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"pos") ) { return pos; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"scale") ) { return scale; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"rotation") ) { return rotation; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic MatrixTransform_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"pos") ) { pos=inValue.Cast< ::phoenix::Vector >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"scale") ) { scale=inValue.Cast< ::phoenix::Vector >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"rotation") ) { rotation=inValue.Cast< ::phoenix::Quaternion >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void MatrixTransform_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("pos"));
	outFields->push(HX_CSTRING("rotation"));
	outFields->push(HX_CSTRING("scale"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::phoenix::Vector*/ ,(int)offsetof(MatrixTransform_obj,pos),HX_CSTRING("pos")},
	{hx::fsObject /*::phoenix::Quaternion*/ ,(int)offsetof(MatrixTransform_obj,rotation),HX_CSTRING("rotation")},
	{hx::fsObject /*::phoenix::Vector*/ ,(int)offsetof(MatrixTransform_obj,scale),HX_CSTRING("scale")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("pos"),
	HX_CSTRING("rotation"),
	HX_CSTRING("scale"),
	HX_CSTRING("destroy"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MatrixTransform_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MatrixTransform_obj::__mClass,"__mClass");
};

#endif

Class MatrixTransform_obj::__mClass;

void MatrixTransform_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("phoenix.MatrixTransform"), hx::TCanCast< MatrixTransform_obj> ,sStaticFields,sMemberFields,
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

void MatrixTransform_obj::__boot()
{
}

} // end namespace phoenix
