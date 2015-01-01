#include <hxcpp.h>

#ifndef INCLUDED_phoenix_geometry_TextureCoord
#include <phoenix/geometry/TextureCoord.h>
#endif
#ifndef INCLUDED_phoenix_geometry_TextureCoordSet
#include <phoenix/geometry/TextureCoordSet.h>
#endif
namespace phoenix{
namespace geometry{

Void TextureCoordSet_obj::__construct()
{
HX_STACK_FRAME("phoenix.geometry.TextureCoordSet","new",0x918b073d,"phoenix.geometry.TextureCoordSet.new","phoenix/geometry/TextureCoord.hx",17,0x1af0f827)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(19)
	::phoenix::geometry::TextureCoord _g = ::phoenix::geometry::TextureCoord_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(19)
	this->uv0 = _g;
	HX_STACK_LINE(20)
	::phoenix::geometry::TextureCoord _g1 = ::phoenix::geometry::TextureCoord_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(20)
	this->uv1 = _g1;
	HX_STACK_LINE(21)
	::phoenix::geometry::TextureCoord _g2 = ::phoenix::geometry::TextureCoord_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(21)
	this->uv2 = _g2;
	HX_STACK_LINE(22)
	::phoenix::geometry::TextureCoord _g3 = ::phoenix::geometry::TextureCoord_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(22)
	this->uv3 = _g3;
	HX_STACK_LINE(23)
	::phoenix::geometry::TextureCoord _g4 = ::phoenix::geometry::TextureCoord_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(23)
	this->uv4 = _g4;
	HX_STACK_LINE(24)
	::phoenix::geometry::TextureCoord _g5 = ::phoenix::geometry::TextureCoord_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(_g5,"_g5");
	HX_STACK_LINE(24)
	this->uv5 = _g5;
	HX_STACK_LINE(25)
	::phoenix::geometry::TextureCoord _g6 = ::phoenix::geometry::TextureCoord_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(_g6,"_g6");
	HX_STACK_LINE(25)
	this->uv6 = _g6;
	HX_STACK_LINE(26)
	::phoenix::geometry::TextureCoord _g7 = ::phoenix::geometry::TextureCoord_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(_g7,"_g7");
	HX_STACK_LINE(26)
	this->uv7 = _g7;
}
;
	return null();
}

//TextureCoordSet_obj::~TextureCoordSet_obj() { }

Dynamic TextureCoordSet_obj::__CreateEmpty() { return  new TextureCoordSet_obj; }
hx::ObjectPtr< TextureCoordSet_obj > TextureCoordSet_obj::__new()
{  hx::ObjectPtr< TextureCoordSet_obj > result = new TextureCoordSet_obj();
	result->__construct();
	return result;}

Dynamic TextureCoordSet_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TextureCoordSet_obj > result = new TextureCoordSet_obj();
	result->__construct();
	return result;}

::phoenix::geometry::TextureCoordSet TextureCoordSet_obj::clone( ){
	HX_STACK_FRAME("phoenix.geometry.TextureCoordSet","clone",0xfefb7b7a,"phoenix.geometry.TextureCoordSet.clone","phoenix/geometry/TextureCoord.hx",30,0x1af0f827)
	HX_STACK_THIS(this)
	HX_STACK_LINE(32)
	::phoenix::geometry::TextureCoordSet _set = ::phoenix::geometry::TextureCoordSet_obj::__new();		HX_STACK_VAR(_set,"_set");
	HX_STACK_LINE(34)
	{
		HX_STACK_LINE(34)
		::phoenix::geometry::TextureCoord _this = _set->uv0;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(34)
		_this->u = this->uv0->u;
		HX_STACK_LINE(34)
		_this->v = this->uv0->v;
		HX_STACK_LINE(34)
		_this->w = this->uv0->w;
		HX_STACK_LINE(34)
		_this->t = this->uv0->t;
		HX_STACK_LINE(34)
		_this;
	}
	HX_STACK_LINE(35)
	{
		HX_STACK_LINE(35)
		::phoenix::geometry::TextureCoord _this = _set->uv1;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(35)
		_this->u = this->uv1->u;
		HX_STACK_LINE(35)
		_this->v = this->uv1->v;
		HX_STACK_LINE(35)
		_this->w = this->uv1->w;
		HX_STACK_LINE(35)
		_this->t = this->uv1->t;
		HX_STACK_LINE(35)
		_this;
	}
	HX_STACK_LINE(36)
	{
		HX_STACK_LINE(36)
		::phoenix::geometry::TextureCoord _this = _set->uv2;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(36)
		_this->u = this->uv2->u;
		HX_STACK_LINE(36)
		_this->v = this->uv2->v;
		HX_STACK_LINE(36)
		_this->w = this->uv2->w;
		HX_STACK_LINE(36)
		_this->t = this->uv2->t;
		HX_STACK_LINE(36)
		_this;
	}
	HX_STACK_LINE(37)
	{
		HX_STACK_LINE(37)
		::phoenix::geometry::TextureCoord _this = _set->uv3;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(37)
		_this->u = this->uv3->u;
		HX_STACK_LINE(37)
		_this->v = this->uv3->v;
		HX_STACK_LINE(37)
		_this->w = this->uv3->w;
		HX_STACK_LINE(37)
		_this->t = this->uv3->t;
		HX_STACK_LINE(37)
		_this;
	}
	HX_STACK_LINE(38)
	{
		HX_STACK_LINE(38)
		::phoenix::geometry::TextureCoord _this = _set->uv4;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(38)
		_this->u = this->uv4->u;
		HX_STACK_LINE(38)
		_this->v = this->uv4->v;
		HX_STACK_LINE(38)
		_this->w = this->uv4->w;
		HX_STACK_LINE(38)
		_this->t = this->uv4->t;
		HX_STACK_LINE(38)
		_this;
	}
	HX_STACK_LINE(39)
	{
		HX_STACK_LINE(39)
		::phoenix::geometry::TextureCoord _this = _set->uv5;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(39)
		_this->u = this->uv5->u;
		HX_STACK_LINE(39)
		_this->v = this->uv5->v;
		HX_STACK_LINE(39)
		_this->w = this->uv5->w;
		HX_STACK_LINE(39)
		_this->t = this->uv5->t;
		HX_STACK_LINE(39)
		_this;
	}
	HX_STACK_LINE(40)
	{
		HX_STACK_LINE(40)
		::phoenix::geometry::TextureCoord _this = _set->uv6;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(40)
		_this->u = this->uv6->u;
		HX_STACK_LINE(40)
		_this->v = this->uv6->v;
		HX_STACK_LINE(40)
		_this->w = this->uv6->w;
		HX_STACK_LINE(40)
		_this->t = this->uv6->t;
		HX_STACK_LINE(40)
		_this;
	}
	HX_STACK_LINE(41)
	{
		HX_STACK_LINE(41)
		::phoenix::geometry::TextureCoord _this = _set->uv7;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(41)
		_this->u = this->uv7->u;
		HX_STACK_LINE(41)
		_this->v = this->uv7->v;
		HX_STACK_LINE(41)
		_this->w = this->uv7->w;
		HX_STACK_LINE(41)
		_this->t = this->uv7->t;
		HX_STACK_LINE(41)
		_this;
	}
	HX_STACK_LINE(43)
	return _set;
}


HX_DEFINE_DYNAMIC_FUNC0(TextureCoordSet_obj,clone,return )


TextureCoordSet_obj::TextureCoordSet_obj()
{
}

void TextureCoordSet_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TextureCoordSet);
	HX_MARK_MEMBER_NAME(uv0,"uv0");
	HX_MARK_MEMBER_NAME(uv1,"uv1");
	HX_MARK_MEMBER_NAME(uv2,"uv2");
	HX_MARK_MEMBER_NAME(uv3,"uv3");
	HX_MARK_MEMBER_NAME(uv4,"uv4");
	HX_MARK_MEMBER_NAME(uv5,"uv5");
	HX_MARK_MEMBER_NAME(uv6,"uv6");
	HX_MARK_MEMBER_NAME(uv7,"uv7");
	HX_MARK_END_CLASS();
}

void TextureCoordSet_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(uv0,"uv0");
	HX_VISIT_MEMBER_NAME(uv1,"uv1");
	HX_VISIT_MEMBER_NAME(uv2,"uv2");
	HX_VISIT_MEMBER_NAME(uv3,"uv3");
	HX_VISIT_MEMBER_NAME(uv4,"uv4");
	HX_VISIT_MEMBER_NAME(uv5,"uv5");
	HX_VISIT_MEMBER_NAME(uv6,"uv6");
	HX_VISIT_MEMBER_NAME(uv7,"uv7");
}

Dynamic TextureCoordSet_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"uv0") ) { return uv0; }
		if (HX_FIELD_EQ(inName,"uv1") ) { return uv1; }
		if (HX_FIELD_EQ(inName,"uv2") ) { return uv2; }
		if (HX_FIELD_EQ(inName,"uv3") ) { return uv3; }
		if (HX_FIELD_EQ(inName,"uv4") ) { return uv4; }
		if (HX_FIELD_EQ(inName,"uv5") ) { return uv5; }
		if (HX_FIELD_EQ(inName,"uv6") ) { return uv6; }
		if (HX_FIELD_EQ(inName,"uv7") ) { return uv7; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic TextureCoordSet_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"uv0") ) { uv0=inValue.Cast< ::phoenix::geometry::TextureCoord >(); return inValue; }
		if (HX_FIELD_EQ(inName,"uv1") ) { uv1=inValue.Cast< ::phoenix::geometry::TextureCoord >(); return inValue; }
		if (HX_FIELD_EQ(inName,"uv2") ) { uv2=inValue.Cast< ::phoenix::geometry::TextureCoord >(); return inValue; }
		if (HX_FIELD_EQ(inName,"uv3") ) { uv3=inValue.Cast< ::phoenix::geometry::TextureCoord >(); return inValue; }
		if (HX_FIELD_EQ(inName,"uv4") ) { uv4=inValue.Cast< ::phoenix::geometry::TextureCoord >(); return inValue; }
		if (HX_FIELD_EQ(inName,"uv5") ) { uv5=inValue.Cast< ::phoenix::geometry::TextureCoord >(); return inValue; }
		if (HX_FIELD_EQ(inName,"uv6") ) { uv6=inValue.Cast< ::phoenix::geometry::TextureCoord >(); return inValue; }
		if (HX_FIELD_EQ(inName,"uv7") ) { uv7=inValue.Cast< ::phoenix::geometry::TextureCoord >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TextureCoordSet_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("uv0"));
	outFields->push(HX_CSTRING("uv1"));
	outFields->push(HX_CSTRING("uv2"));
	outFields->push(HX_CSTRING("uv3"));
	outFields->push(HX_CSTRING("uv4"));
	outFields->push(HX_CSTRING("uv5"));
	outFields->push(HX_CSTRING("uv6"));
	outFields->push(HX_CSTRING("uv7"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::phoenix::geometry::TextureCoord*/ ,(int)offsetof(TextureCoordSet_obj,uv0),HX_CSTRING("uv0")},
	{hx::fsObject /*::phoenix::geometry::TextureCoord*/ ,(int)offsetof(TextureCoordSet_obj,uv1),HX_CSTRING("uv1")},
	{hx::fsObject /*::phoenix::geometry::TextureCoord*/ ,(int)offsetof(TextureCoordSet_obj,uv2),HX_CSTRING("uv2")},
	{hx::fsObject /*::phoenix::geometry::TextureCoord*/ ,(int)offsetof(TextureCoordSet_obj,uv3),HX_CSTRING("uv3")},
	{hx::fsObject /*::phoenix::geometry::TextureCoord*/ ,(int)offsetof(TextureCoordSet_obj,uv4),HX_CSTRING("uv4")},
	{hx::fsObject /*::phoenix::geometry::TextureCoord*/ ,(int)offsetof(TextureCoordSet_obj,uv5),HX_CSTRING("uv5")},
	{hx::fsObject /*::phoenix::geometry::TextureCoord*/ ,(int)offsetof(TextureCoordSet_obj,uv6),HX_CSTRING("uv6")},
	{hx::fsObject /*::phoenix::geometry::TextureCoord*/ ,(int)offsetof(TextureCoordSet_obj,uv7),HX_CSTRING("uv7")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("uv0"),
	HX_CSTRING("uv1"),
	HX_CSTRING("uv2"),
	HX_CSTRING("uv3"),
	HX_CSTRING("uv4"),
	HX_CSTRING("uv5"),
	HX_CSTRING("uv6"),
	HX_CSTRING("uv7"),
	HX_CSTRING("clone"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TextureCoordSet_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TextureCoordSet_obj::__mClass,"__mClass");
};

#endif

Class TextureCoordSet_obj::__mClass;

void TextureCoordSet_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("phoenix.geometry.TextureCoordSet"), hx::TCanCast< TextureCoordSet_obj> ,sStaticFields,sMemberFields,
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

void TextureCoordSet_obj::__boot()
{
}

} // end namespace phoenix
} // end namespace geometry
