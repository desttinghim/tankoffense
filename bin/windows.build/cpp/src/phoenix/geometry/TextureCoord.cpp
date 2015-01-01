#include <hxcpp.h>

#ifndef INCLUDED_phoenix_geometry_TextureCoord
#include <phoenix/geometry/TextureCoord.h>
#endif
namespace phoenix{
namespace geometry{

Void TextureCoord_obj::__construct(hx::Null< Float >  __o__u,hx::Null< Float >  __o__v,hx::Null< Float >  __o__w,hx::Null< Float >  __o__t)
{
HX_STACK_FRAME("phoenix.geometry.TextureCoord","new",0x17ac6f89,"phoenix.geometry.TextureCoord.new","phoenix/geometry/TextureCoord.hx",51,0x1af0f827)
HX_STACK_THIS(this)
HX_STACK_ARG(__o__u,"_u")
HX_STACK_ARG(__o__v,"_v")
HX_STACK_ARG(__o__w,"_w")
HX_STACK_ARG(__o__t,"_t")
Float _u = __o__u.Default(0.0);
Float _v = __o__v.Default(0.0);
Float _w = __o__w.Default(0.0);
Float _t = __o__t.Default(0.0);
{
	HX_STACK_LINE(57)
	this->t = 0.0;
	HX_STACK_LINE(56)
	this->w = 0.0;
	HX_STACK_LINE(55)
	this->v = 0.0;
	HX_STACK_LINE(54)
	this->u = 0.0;
	HX_STACK_LINE(62)
	this->u = _u;
	HX_STACK_LINE(63)
	this->v = _v;
	HX_STACK_LINE(64)
	this->w = _w;
	HX_STACK_LINE(65)
	this->t = _t;
}
;
	return null();
}

//TextureCoord_obj::~TextureCoord_obj() { }

Dynamic TextureCoord_obj::__CreateEmpty() { return  new TextureCoord_obj; }
hx::ObjectPtr< TextureCoord_obj > TextureCoord_obj::__new(hx::Null< Float >  __o__u,hx::Null< Float >  __o__v,hx::Null< Float >  __o__w,hx::Null< Float >  __o__t)
{  hx::ObjectPtr< TextureCoord_obj > result = new TextureCoord_obj();
	result->__construct(__o__u,__o__v,__o__w,__o__t);
	return result;}

Dynamic TextureCoord_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TextureCoord_obj > result = new TextureCoord_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return result;}

::phoenix::geometry::TextureCoord TextureCoord_obj::clone( ){
	HX_STACK_FRAME("phoenix.geometry.TextureCoord","clone",0x5e808ec6,"phoenix.geometry.TextureCoord.clone","phoenix/geometry/TextureCoord.hx",71,0x1af0f827)
	HX_STACK_THIS(this)
	HX_STACK_LINE(71)
	return ::phoenix::geometry::TextureCoord_obj::__new(this->u,this->v,this->w,this->t);
}


HX_DEFINE_DYNAMIC_FUNC0(TextureCoord_obj,clone,return )

::phoenix::geometry::TextureCoord TextureCoord_obj::set( Float _u,Float _v,Float _w,Float _t){
	HX_STACK_FRAME("phoenix.geometry.TextureCoord","set",0x17b03acb,"phoenix.geometry.TextureCoord.set","phoenix/geometry/TextureCoord.hx",75,0x1af0f827)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_u,"_u")
	HX_STACK_ARG(_v,"_v")
	HX_STACK_ARG(_w,"_w")
	HX_STACK_ARG(_t,"_t")
	HX_STACK_LINE(77)
	this->u = _u;
	HX_STACK_LINE(78)
	this->v = _v;
	HX_STACK_LINE(79)
	this->w = _w;
	HX_STACK_LINE(80)
	this->t = _t;
	HX_STACK_LINE(82)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC4(TextureCoord_obj,set,return )

::phoenix::geometry::TextureCoord TextureCoord_obj::set_uv( Float _u,Float _v){
	HX_STACK_FRAME("phoenix.geometry.TextureCoord","set_uv",0xb326d295,"phoenix.geometry.TextureCoord.set_uv","phoenix/geometry/TextureCoord.hx",86,0x1af0f827)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_u,"_u")
	HX_STACK_ARG(_v,"_v")
	HX_STACK_LINE(88)
	this->u = _u;
	HX_STACK_LINE(89)
	this->v = _v;
	HX_STACK_LINE(91)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC2(TextureCoord_obj,set_uv,return )

::String TextureCoord_obj::toString( ){
	HX_STACK_FRAME("phoenix.geometry.TextureCoord","toString",0xa5179ce3,"phoenix.geometry.TextureCoord.toString","phoenix/geometry/TextureCoord.hx",97,0x1af0f827)
	HX_STACK_THIS(this)
	HX_STACK_LINE(97)
	return ((((HX_CSTRING("{ u:") + this->v) + HX_CSTRING(", v:")) + this->v) + HX_CSTRING(" }"));
}


HX_DEFINE_DYNAMIC_FUNC0(TextureCoord_obj,toString,return )


TextureCoord_obj::TextureCoord_obj()
{
}

Dynamic TextureCoord_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"u") ) { return u; }
		if (HX_FIELD_EQ(inName,"v") ) { return v; }
		if (HX_FIELD_EQ(inName,"w") ) { return w; }
		if (HX_FIELD_EQ(inName,"t") ) { return t; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"set") ) { return set_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"set_uv") ) { return set_uv_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic TextureCoord_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"u") ) { u=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"v") ) { v=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"w") ) { w=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"t") ) { t=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TextureCoord_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("u"));
	outFields->push(HX_CSTRING("v"));
	outFields->push(HX_CSTRING("w"));
	outFields->push(HX_CSTRING("t"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(TextureCoord_obj,u),HX_CSTRING("u")},
	{hx::fsFloat,(int)offsetof(TextureCoord_obj,v),HX_CSTRING("v")},
	{hx::fsFloat,(int)offsetof(TextureCoord_obj,w),HX_CSTRING("w")},
	{hx::fsFloat,(int)offsetof(TextureCoord_obj,t),HX_CSTRING("t")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("u"),
	HX_CSTRING("v"),
	HX_CSTRING("w"),
	HX_CSTRING("t"),
	HX_CSTRING("clone"),
	HX_CSTRING("set"),
	HX_CSTRING("set_uv"),
	HX_CSTRING("toString"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TextureCoord_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TextureCoord_obj::__mClass,"__mClass");
};

#endif

Class TextureCoord_obj::__mClass;

void TextureCoord_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("phoenix.geometry.TextureCoord"), hx::TCanCast< TextureCoord_obj> ,sStaticFields,sMemberFields,
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

void TextureCoord_obj::__boot()
{
}

} // end namespace phoenix
} // end namespace geometry
