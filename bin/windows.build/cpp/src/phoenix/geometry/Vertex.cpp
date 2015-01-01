#include <hxcpp.h>

#ifndef INCLUDED_phoenix_Color
#include <phoenix/Color.h>
#endif
#ifndef INCLUDED_phoenix_Vector
#include <phoenix/Vector.h>
#endif
#ifndef INCLUDED_phoenix_geometry_TextureCoord
#include <phoenix/geometry/TextureCoord.h>
#endif
#ifndef INCLUDED_phoenix_geometry_TextureCoordSet
#include <phoenix/geometry/TextureCoordSet.h>
#endif
#ifndef INCLUDED_phoenix_geometry_Vertex
#include <phoenix/geometry/Vertex.h>
#endif
namespace phoenix{
namespace geometry{

Void Vertex_obj::__construct(::phoenix::Vector _pos,::phoenix::Color _color,::phoenix::Vector _normal)
{
HX_STACK_FRAME("phoenix.geometry.Vertex","new",0xe0535453,"phoenix.geometry.Vertex.new","phoenix/geometry/Vertex.hx",18,0xf444629d)
HX_STACK_THIS(this)
HX_STACK_ARG(_pos,"_pos")
HX_STACK_ARG(_color,"_color")
HX_STACK_ARG(_normal,"_normal")
{
	HX_STACK_LINE(20)
	::phoenix::geometry::TextureCoordSet _g = ::phoenix::geometry::TextureCoordSet_obj::__new();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(20)
	this->uv = _g;
	HX_STACK_LINE(22)
	this->pos = _pos;
	HX_STACK_LINE(23)
	::phoenix::Color _g1;		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(23)
	if (((_color == null()))){
		HX_STACK_LINE(23)
		_g1 = ::phoenix::Color_obj::__new(null(),null(),null(),null());
	}
	else{
		HX_STACK_LINE(23)
		_g1 = _color;
	}
	HX_STACK_LINE(23)
	this->color = _g1;
	HX_STACK_LINE(24)
	::phoenix::Vector _g2;		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(24)
	if (((_normal == null()))){
		HX_STACK_LINE(24)
		_g2 = ::phoenix::Vector_obj::__new(null(),null(),null(),null());
	}
	else{
		HX_STACK_LINE(24)
		_g2 = _normal;
	}
	HX_STACK_LINE(24)
	this->normal = _g2;
}
;
	return null();
}

//Vertex_obj::~Vertex_obj() { }

Dynamic Vertex_obj::__CreateEmpty() { return  new Vertex_obj; }
hx::ObjectPtr< Vertex_obj > Vertex_obj::__new(::phoenix::Vector _pos,::phoenix::Color _color,::phoenix::Vector _normal)
{  hx::ObjectPtr< Vertex_obj > result = new Vertex_obj();
	result->__construct(_pos,_color,_normal);
	return result;}

Dynamic Vertex_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Vertex_obj > result = new Vertex_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

::phoenix::geometry::Vertex Vertex_obj::clone( ){
	HX_STACK_FRAME("phoenix.geometry.Vertex","clone",0xca41ba10,"phoenix.geometry.Vertex.clone","phoenix/geometry/Vertex.hx",28,0xf444629d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(30)
	::phoenix::Vector _g;		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(30)
	{
		HX_STACK_LINE(30)
		::phoenix::Vector _this = this->pos;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(30)
		_g = ::phoenix::Vector_obj::__new(_this->x,_this->y,_this->z,_this->w);
	}
	HX_STACK_LINE(30)
	::phoenix::Color _g1 = this->color->clone();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(30)
	::phoenix::Vector _g2;		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(30)
	{
		HX_STACK_LINE(30)
		::phoenix::Vector _this = this->normal;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(30)
		_g2 = ::phoenix::Vector_obj::__new(_this->x,_this->y,_this->z,_this->w);
	}
	HX_STACK_LINE(30)
	::phoenix::geometry::Vertex _new = ::phoenix::geometry::Vertex_obj::__new(_g,_g1,_g2);		HX_STACK_VAR(_new,"_new");
	HX_STACK_LINE(31)
	::phoenix::geometry::TextureCoordSet _g3;		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(31)
	{
		HX_STACK_LINE(31)
		::phoenix::geometry::TextureCoordSet _this = this->uv;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(31)
		::phoenix::geometry::TextureCoordSet _set = ::phoenix::geometry::TextureCoordSet_obj::__new();		HX_STACK_VAR(_set,"_set");
		HX_STACK_LINE(31)
		{
			HX_STACK_LINE(31)
			::phoenix::geometry::TextureCoord _this1 = _set->uv0;		HX_STACK_VAR(_this1,"_this1");
			HX_STACK_LINE(31)
			_this1->u = _this->uv0->u;
			HX_STACK_LINE(31)
			_this1->v = _this->uv0->v;
			HX_STACK_LINE(31)
			_this1->w = _this->uv0->w;
			HX_STACK_LINE(31)
			_this1->t = _this->uv0->t;
			HX_STACK_LINE(31)
			_this1;
		}
		HX_STACK_LINE(31)
		{
			HX_STACK_LINE(31)
			::phoenix::geometry::TextureCoord _this1 = _set->uv1;		HX_STACK_VAR(_this1,"_this1");
			HX_STACK_LINE(31)
			_this1->u = _this->uv1->u;
			HX_STACK_LINE(31)
			_this1->v = _this->uv1->v;
			HX_STACK_LINE(31)
			_this1->w = _this->uv1->w;
			HX_STACK_LINE(31)
			_this1->t = _this->uv1->t;
			HX_STACK_LINE(31)
			_this1;
		}
		HX_STACK_LINE(31)
		{
			HX_STACK_LINE(31)
			::phoenix::geometry::TextureCoord _this1 = _set->uv2;		HX_STACK_VAR(_this1,"_this1");
			HX_STACK_LINE(31)
			_this1->u = _this->uv2->u;
			HX_STACK_LINE(31)
			_this1->v = _this->uv2->v;
			HX_STACK_LINE(31)
			_this1->w = _this->uv2->w;
			HX_STACK_LINE(31)
			_this1->t = _this->uv2->t;
			HX_STACK_LINE(31)
			_this1;
		}
		HX_STACK_LINE(31)
		{
			HX_STACK_LINE(31)
			::phoenix::geometry::TextureCoord _this1 = _set->uv3;		HX_STACK_VAR(_this1,"_this1");
			HX_STACK_LINE(31)
			_this1->u = _this->uv3->u;
			HX_STACK_LINE(31)
			_this1->v = _this->uv3->v;
			HX_STACK_LINE(31)
			_this1->w = _this->uv3->w;
			HX_STACK_LINE(31)
			_this1->t = _this->uv3->t;
			HX_STACK_LINE(31)
			_this1;
		}
		HX_STACK_LINE(31)
		{
			HX_STACK_LINE(31)
			::phoenix::geometry::TextureCoord _this1 = _set->uv4;		HX_STACK_VAR(_this1,"_this1");
			HX_STACK_LINE(31)
			_this1->u = _this->uv4->u;
			HX_STACK_LINE(31)
			_this1->v = _this->uv4->v;
			HX_STACK_LINE(31)
			_this1->w = _this->uv4->w;
			HX_STACK_LINE(31)
			_this1->t = _this->uv4->t;
			HX_STACK_LINE(31)
			_this1;
		}
		HX_STACK_LINE(31)
		{
			HX_STACK_LINE(31)
			::phoenix::geometry::TextureCoord _this1 = _set->uv5;		HX_STACK_VAR(_this1,"_this1");
			HX_STACK_LINE(31)
			_this1->u = _this->uv5->u;
			HX_STACK_LINE(31)
			_this1->v = _this->uv5->v;
			HX_STACK_LINE(31)
			_this1->w = _this->uv5->w;
			HX_STACK_LINE(31)
			_this1->t = _this->uv5->t;
			HX_STACK_LINE(31)
			_this1;
		}
		HX_STACK_LINE(31)
		{
			HX_STACK_LINE(31)
			::phoenix::geometry::TextureCoord _this1 = _set->uv6;		HX_STACK_VAR(_this1,"_this1");
			HX_STACK_LINE(31)
			_this1->u = _this->uv6->u;
			HX_STACK_LINE(31)
			_this1->v = _this->uv6->v;
			HX_STACK_LINE(31)
			_this1->w = _this->uv6->w;
			HX_STACK_LINE(31)
			_this1->t = _this->uv6->t;
			HX_STACK_LINE(31)
			_this1;
		}
		HX_STACK_LINE(31)
		{
			HX_STACK_LINE(31)
			::phoenix::geometry::TextureCoord _this1 = _set->uv7;		HX_STACK_VAR(_this1,"_this1");
			HX_STACK_LINE(31)
			_this1->u = _this->uv7->u;
			HX_STACK_LINE(31)
			_this1->v = _this->uv7->v;
			HX_STACK_LINE(31)
			_this1->w = _this->uv7->w;
			HX_STACK_LINE(31)
			_this1->t = _this->uv7->t;
			HX_STACK_LINE(31)
			_this1;
		}
		HX_STACK_LINE(31)
		_g3 = _set;
	}
	HX_STACK_LINE(31)
	_new->uv = _g3;
	HX_STACK_LINE(33)
	return _new;
}


HX_DEFINE_DYNAMIC_FUNC0(Vertex_obj,clone,return )


Vertex_obj::Vertex_obj()
{
}

void Vertex_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Vertex);
	HX_MARK_MEMBER_NAME(pos,"pos");
	HX_MARK_MEMBER_NAME(color,"color");
	HX_MARK_MEMBER_NAME(uv,"uv");
	HX_MARK_MEMBER_NAME(normal,"normal");
	HX_MARK_END_CLASS();
}

void Vertex_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(pos,"pos");
	HX_VISIT_MEMBER_NAME(color,"color");
	HX_VISIT_MEMBER_NAME(uv,"uv");
	HX_VISIT_MEMBER_NAME(normal,"normal");
}

Dynamic Vertex_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"uv") ) { return uv; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"pos") ) { return pos; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"color") ) { return color; }
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"normal") ) { return normal; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Vertex_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"uv") ) { uv=inValue.Cast< ::phoenix::geometry::TextureCoordSet >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"pos") ) { pos=inValue.Cast< ::phoenix::Vector >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"color") ) { color=inValue.Cast< ::phoenix::Color >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"normal") ) { normal=inValue.Cast< ::phoenix::Vector >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Vertex_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("pos"));
	outFields->push(HX_CSTRING("color"));
	outFields->push(HX_CSTRING("uv"));
	outFields->push(HX_CSTRING("normal"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::phoenix::Vector*/ ,(int)offsetof(Vertex_obj,pos),HX_CSTRING("pos")},
	{hx::fsObject /*::phoenix::Color*/ ,(int)offsetof(Vertex_obj,color),HX_CSTRING("color")},
	{hx::fsObject /*::phoenix::geometry::TextureCoordSet*/ ,(int)offsetof(Vertex_obj,uv),HX_CSTRING("uv")},
	{hx::fsObject /*::phoenix::Vector*/ ,(int)offsetof(Vertex_obj,normal),HX_CSTRING("normal")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("pos"),
	HX_CSTRING("color"),
	HX_CSTRING("uv"),
	HX_CSTRING("normal"),
	HX_CSTRING("clone"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Vertex_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Vertex_obj::__mClass,"__mClass");
};

#endif

Class Vertex_obj::__mClass;

void Vertex_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("phoenix.geometry.Vertex"), hx::TCanCast< Vertex_obj> ,sStaticFields,sMemberFields,
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

void Vertex_obj::__boot()
{
}

} // end namespace phoenix
} // end namespace geometry
