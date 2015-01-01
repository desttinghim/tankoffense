#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_luxe_resource_Resource
#include <luxe/resource/Resource.h>
#endif
#ifndef INCLUDED_phoenix_Rectangle
#include <phoenix/Rectangle.h>
#endif
#ifndef INCLUDED_phoenix_Shader
#include <phoenix/Shader.h>
#endif
#ifndef INCLUDED_phoenix_Texture
#include <phoenix/Texture.h>
#endif
#ifndef INCLUDED_phoenix_geometry_GeometryState
#include <phoenix/geometry/GeometryState.h>
#endif
#ifndef INCLUDED_snow_platform_native_render_opengl_GLObject
#include <snow/platform/native/render/opengl/GLObject.h>
#endif
#ifndef INCLUDED_snow_platform_native_render_opengl_GLTexture
#include <snow/platform/native/render/opengl/GLTexture.h>
#endif
namespace phoenix{
namespace geometry{

Void GeometryState_obj::__construct()
{
HX_STACK_FRAME("phoenix.geometry.GeometryState","new",0xdad5fe14,"phoenix.geometry.GeometryState.new","phoenix/geometry/GeometryState.hx",8,0xdf8297bc)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(20)
	this->log = false;
	HX_STACK_LINE(24)
	this->set_clip(false);
	HX_STACK_LINE(25)
	::phoenix::Rectangle _g = ::phoenix::Rectangle_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(25)
	this->set_clip_rect(_g);
	HX_STACK_LINE(26)
	this->set_texture(null());
	HX_STACK_LINE(27)
	this->set_shader(null());
	HX_STACK_LINE(28)
	this->set_group((int)0);
	HX_STACK_LINE(29)
	this->set_depth(0.0);
	HX_STACK_LINE(30)
	this->set_primitive_type((int)0);
	HX_STACK_LINE(32)
	this->dirty = false;
}
;
	return null();
}

//GeometryState_obj::~GeometryState_obj() { }

Dynamic GeometryState_obj::__CreateEmpty() { return  new GeometryState_obj; }
hx::ObjectPtr< GeometryState_obj > GeometryState_obj::__new()
{  hx::ObjectPtr< GeometryState_obj > result = new GeometryState_obj();
	result->__construct();
	return result;}

Dynamic GeometryState_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< GeometryState_obj > result = new GeometryState_obj();
	result->__construct();
	return result;}

Void GeometryState_obj::clone_onto( ::phoenix::geometry::GeometryState _other){
{
		HX_STACK_FRAME("phoenix.geometry.GeometryState","clone_onto",0xd3d1f488,"phoenix.geometry.GeometryState.clone_onto","phoenix/geometry/GeometryState.hx",36,0xdf8297bc)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_other,"_other")
		HX_STACK_LINE(38)
		_other->dirty = this->dirty;
		HX_STACK_LINE(39)
		_other->set_texture(this->texture);
		HX_STACK_LINE(40)
		_other->set_shader(this->shader);
		HX_STACK_LINE(41)
		_other->set_group(this->group);
		HX_STACK_LINE(42)
		_other->set_depth(this->depth);
		HX_STACK_LINE(43)
		_other->set_primitive_type(this->primitive_type);
		HX_STACK_LINE(44)
		_other->set_clip(this->clip);
		HX_STACK_LINE(45)
		_other->clip_rect->copy_from(this->clip_rect);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(GeometryState_obj,clone_onto,(void))

Void GeometryState_obj::str( ){
{
		HX_STACK_FRAME("phoenix.geometry.GeometryState","str",0xdad9d665,"phoenix.geometry.GeometryState.str","phoenix/geometry/GeometryState.hx",49,0xdf8297bc)
		HX_STACK_THIS(this)
		HX_STACK_LINE(51)
		if ((!(this->log))){
			HX_STACK_LINE(51)
			return null();
		}
		HX_STACK_LINE(53)
		::String _g = ::Std_obj::string(this->dirty);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(53)
		::String _g1 = (HX_CSTRING("\t+ GEOMETRYSTATE ") + _g);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(53)
		::haxe::Log_obj::trace(_g1,hx::SourceInfo(HX_CSTRING("GeometryState.hx"),53,HX_CSTRING("phoenix.geometry.GeometryState"),HX_CSTRING("str")));
		HX_STACK_LINE(54)
		::haxe::Log_obj::trace((HX_CSTRING("\t\tdepth - ") + this->depth),hx::SourceInfo(HX_CSTRING("GeometryState.hx"),54,HX_CSTRING("phoenix.geometry.GeometryState"),HX_CSTRING("str")));
		HX_STACK_LINE(55)
		::haxe::Log_obj::trace((HX_CSTRING("\t\tgroup - ") + this->group),hx::SourceInfo(HX_CSTRING("GeometryState.hx"),55,HX_CSTRING("phoenix.geometry.GeometryState"),HX_CSTRING("str")));
		HX_STACK_LINE(56)
		::haxe::Log_obj::trace((HX_CSTRING("\t\ttexture - ") + ((  (((this->texture == null()))) ? ::String(HX_CSTRING("null")) : ::String(this->texture->id) ))),hx::SourceInfo(HX_CSTRING("GeometryState.hx"),56,HX_CSTRING("phoenix.geometry.GeometryState"),HX_CSTRING("str")));
		HX_STACK_LINE(57)
		if (((this->texture != null()))){
			HX_STACK_LINE(58)
			::String _g2 = ::Std_obj::string(this->texture->texture);		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(58)
			::String _g3 = (HX_CSTRING("\t\t\t ") + _g2);		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(58)
			::haxe::Log_obj::trace(_g3,hx::SourceInfo(HX_CSTRING("GeometryState.hx"),58,HX_CSTRING("phoenix.geometry.GeometryState"),HX_CSTRING("str")));
		}
		HX_STACK_LINE(60)
		::haxe::Log_obj::trace((HX_CSTRING("\t\tshader - ") + ((  (((this->shader == null()))) ? ::String(HX_CSTRING("null")) : ::String(this->shader->id) ))),hx::SourceInfo(HX_CSTRING("GeometryState.hx"),60,HX_CSTRING("phoenix.geometry.GeometryState"),HX_CSTRING("str")));
		HX_STACK_LINE(61)
		::String _g4 = ::Std_obj::string(this->primitive_type);		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(61)
		::String _g5 = (HX_CSTRING("\t\tprimitive_type - ") + _g4);		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(61)
		::haxe::Log_obj::trace(_g5,hx::SourceInfo(HX_CSTRING("GeometryState.hx"),61,HX_CSTRING("phoenix.geometry.GeometryState"),HX_CSTRING("str")));
		HX_STACK_LINE(62)
		::String _g6 = ::Std_obj::string(this->clip);		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(62)
		::String _g7 = (HX_CSTRING("\t\tclip - ") + _g6);		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(62)
		::haxe::Log_obj::trace(_g7,hx::SourceInfo(HX_CSTRING("GeometryState.hx"),62,HX_CSTRING("phoenix.geometry.GeometryState"),HX_CSTRING("str")));
		HX_STACK_LINE(63)
		::String _g8 = ::Std_obj::string(this->clip_rect);		HX_STACK_VAR(_g8,"_g8");
		HX_STACK_LINE(63)
		::String _g9 = (HX_CSTRING("\t\tclip rect - ") + _g8);		HX_STACK_VAR(_g9,"_g9");
		HX_STACK_LINE(63)
		::haxe::Log_obj::trace(_g9,hx::SourceInfo(HX_CSTRING("GeometryState.hx"),63,HX_CSTRING("phoenix.geometry.GeometryState"),HX_CSTRING("str")));
		HX_STACK_LINE(64)
		::haxe::Log_obj::trace(HX_CSTRING("\t- GEOMETRYSTATE"),hx::SourceInfo(HX_CSTRING("GeometryState.hx"),64,HX_CSTRING("phoenix.geometry.GeometryState"),HX_CSTRING("str")));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(GeometryState_obj,str,(void))

Void GeometryState_obj::clean( ){
{
		HX_STACK_FRAME("phoenix.geometry.GeometryState","clean",0x6a0b743d,"phoenix.geometry.GeometryState.clean","phoenix/geometry/GeometryState.hx",70,0xdf8297bc)
		HX_STACK_THIS(this)
		HX_STACK_LINE(70)
		this->dirty = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(GeometryState_obj,clean,(void))

Void GeometryState_obj::update( ::phoenix::geometry::GeometryState other){
{
		HX_STACK_FRAME("phoenix.geometry.GeometryState","update",0xdf57e0d5,"phoenix.geometry.GeometryState.update","phoenix/geometry/GeometryState.hx",74,0xdf8297bc)
		HX_STACK_THIS(this)
		HX_STACK_ARG(other,"other")
		HX_STACK_LINE(76)
		if (((this->depth != other->depth))){
			HX_STACK_LINE(77)
			this->set_depth(other->depth);
		}
		HX_STACK_LINE(80)
		if (((this->group != other->group))){
			HX_STACK_LINE(81)
			this->set_group(other->group);
		}
		HX_STACK_LINE(84)
		if (((this->texture != other->texture))){
			HX_STACK_LINE(85)
			this->set_texture(other->texture);
		}
		HX_STACK_LINE(88)
		if (((this->shader != other->shader))){
			HX_STACK_LINE(89)
			this->set_shader(other->shader);
		}
		HX_STACK_LINE(92)
		if (((this->primitive_type != other->primitive_type))){
			HX_STACK_LINE(93)
			this->set_primitive_type(other->primitive_type);
		}
		HX_STACK_LINE(96)
		if (((this->clip != other->clip))){
			HX_STACK_LINE(97)
			this->set_clip(other->clip);
		}
		HX_STACK_LINE(100)
		if (((this->clip_rect != null()))){
			HX_STACK_LINE(101)
			if (((  (((other->clip_rect != null()))) ? bool(!(this->clip_rect->equal(other->clip_rect))) : bool(false) ))){
				HX_STACK_LINE(102)
				this->clip_rect->set(other->clip_rect->x,other->clip_rect->y,other->clip_rect->w,other->clip_rect->h);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(GeometryState_obj,update,(void))

int GeometryState_obj::set_primitive_type( int val){
	HX_STACK_FRAME("phoenix.geometry.GeometryState","set_primitive_type",0xcd8c389b,"phoenix.geometry.GeometryState.set_primitive_type","phoenix/geometry/GeometryState.hx",109,0xdf8297bc)
	HX_STACK_THIS(this)
	HX_STACK_ARG(val,"val")
	HX_STACK_LINE(110)
	this->dirty = true;
	HX_STACK_LINE(111)
	return this->primitive_type = val;
}


HX_DEFINE_DYNAMIC_FUNC1(GeometryState_obj,set_primitive_type,return )

::phoenix::Texture GeometryState_obj::set_texture( ::phoenix::Texture val){
	HX_STACK_FRAME("phoenix.geometry.GeometryState","set_texture",0x1cfd31b2,"phoenix.geometry.GeometryState.set_texture","phoenix/geometry/GeometryState.hx",114,0xdf8297bc)
	HX_STACK_THIS(this)
	HX_STACK_ARG(val,"val")
	HX_STACK_LINE(115)
	this->dirty = true;
	HX_STACK_LINE(116)
	return this->texture = val;
}


HX_DEFINE_DYNAMIC_FUNC1(GeometryState_obj,set_texture,return )

::phoenix::Shader GeometryState_obj::set_shader( ::phoenix::Shader val){
	HX_STACK_FRAME("phoenix.geometry.GeometryState","set_shader",0x806b7e2e,"phoenix.geometry.GeometryState.set_shader","phoenix/geometry/GeometryState.hx",119,0xdf8297bc)
	HX_STACK_THIS(this)
	HX_STACK_ARG(val,"val")
	HX_STACK_LINE(120)
	this->dirty = true;
	HX_STACK_LINE(121)
	return this->shader = val;
}


HX_DEFINE_DYNAMIC_FUNC1(GeometryState_obj,set_shader,return )

Float GeometryState_obj::set_depth( Float val){
	HX_STACK_FRAME("phoenix.geometry.GeometryState","set_depth",0x291da61a,"phoenix.geometry.GeometryState.set_depth","phoenix/geometry/GeometryState.hx",125,0xdf8297bc)
	HX_STACK_THIS(this)
	HX_STACK_ARG(val,"val")
	HX_STACK_LINE(125)
	return this->depth = val;
}


HX_DEFINE_DYNAMIC_FUNC1(GeometryState_obj,set_depth,return )

int GeometryState_obj::set_group( int val){
	HX_STACK_FRAME("phoenix.geometry.GeometryState","set_group",0xebe86856,"phoenix.geometry.GeometryState.set_group","phoenix/geometry/GeometryState.hx",128,0xdf8297bc)
	HX_STACK_THIS(this)
	HX_STACK_ARG(val,"val")
	HX_STACK_LINE(129)
	this->dirty = true;
	HX_STACK_LINE(130)
	return this->group = val;
}


HX_DEFINE_DYNAMIC_FUNC1(GeometryState_obj,set_group,return )

bool GeometryState_obj::set_clip( bool val){
	HX_STACK_FRAME("phoenix.geometry.GeometryState","set_clip",0x45922999,"phoenix.geometry.GeometryState.set_clip","phoenix/geometry/GeometryState.hx",133,0xdf8297bc)
	HX_STACK_THIS(this)
	HX_STACK_ARG(val,"val")
	HX_STACK_LINE(134)
	this->dirty = true;
	HX_STACK_LINE(135)
	return this->clip = val;
}


HX_DEFINE_DYNAMIC_FUNC1(GeometryState_obj,set_clip,return )

::phoenix::Rectangle GeometryState_obj::set_clip_rect( ::phoenix::Rectangle val){
	HX_STACK_FRAME("phoenix.geometry.GeometryState","set_clip_rect",0x164bd4ca,"phoenix.geometry.GeometryState.set_clip_rect","phoenix/geometry/GeometryState.hx",138,0xdf8297bc)
	HX_STACK_THIS(this)
	HX_STACK_ARG(val,"val")
	HX_STACK_LINE(139)
	this->dirty = true;
	HX_STACK_LINE(140)
	return this->clip_rect = val;
}


HX_DEFINE_DYNAMIC_FUNC1(GeometryState_obj,set_clip_rect,return )


GeometryState_obj::GeometryState_obj()
{
}

void GeometryState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(GeometryState);
	HX_MARK_MEMBER_NAME(dirty,"dirty");
	HX_MARK_MEMBER_NAME(primitive_type,"primitive_type");
	HX_MARK_MEMBER_NAME(shader,"shader");
	HX_MARK_MEMBER_NAME(texture,"texture");
	HX_MARK_MEMBER_NAME(depth,"depth");
	HX_MARK_MEMBER_NAME(group,"group");
	HX_MARK_MEMBER_NAME(clip,"clip");
	HX_MARK_MEMBER_NAME(clip_rect,"clip_rect");
	HX_MARK_MEMBER_NAME(log,"log");
	HX_MARK_END_CLASS();
}

void GeometryState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(dirty,"dirty");
	HX_VISIT_MEMBER_NAME(primitive_type,"primitive_type");
	HX_VISIT_MEMBER_NAME(shader,"shader");
	HX_VISIT_MEMBER_NAME(texture,"texture");
	HX_VISIT_MEMBER_NAME(depth,"depth");
	HX_VISIT_MEMBER_NAME(group,"group");
	HX_VISIT_MEMBER_NAME(clip,"clip");
	HX_VISIT_MEMBER_NAME(clip_rect,"clip_rect");
	HX_VISIT_MEMBER_NAME(log,"log");
}

Dynamic GeometryState_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"log") ) { return log; }
		if (HX_FIELD_EQ(inName,"str") ) { return str_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"clip") ) { return clip; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"dirty") ) { return dirty; }
		if (HX_FIELD_EQ(inName,"depth") ) { return depth; }
		if (HX_FIELD_EQ(inName,"group") ) { return group; }
		if (HX_FIELD_EQ(inName,"clean") ) { return clean_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"shader") ) { return shader; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"texture") ) { return texture; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"set_clip") ) { return set_clip_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"clip_rect") ) { return clip_rect; }
		if (HX_FIELD_EQ(inName,"set_depth") ) { return set_depth_dyn(); }
		if (HX_FIELD_EQ(inName,"set_group") ) { return set_group_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"clone_onto") ) { return clone_onto_dyn(); }
		if (HX_FIELD_EQ(inName,"set_shader") ) { return set_shader_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"set_texture") ) { return set_texture_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"set_clip_rect") ) { return set_clip_rect_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"primitive_type") ) { return primitive_type; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"set_primitive_type") ) { return set_primitive_type_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic GeometryState_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"log") ) { log=inValue.Cast< bool >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"clip") ) { if (inCallProp) return set_clip(inValue);clip=inValue.Cast< bool >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"dirty") ) { dirty=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"depth") ) { if (inCallProp) return set_depth(inValue);depth=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"group") ) { if (inCallProp) return set_group(inValue);group=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"shader") ) { if (inCallProp) return set_shader(inValue);shader=inValue.Cast< ::phoenix::Shader >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"texture") ) { if (inCallProp) return set_texture(inValue);texture=inValue.Cast< ::phoenix::Texture >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"clip_rect") ) { if (inCallProp) return set_clip_rect(inValue);clip_rect=inValue.Cast< ::phoenix::Rectangle >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"primitive_type") ) { if (inCallProp) return set_primitive_type(inValue);primitive_type=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void GeometryState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("dirty"));
	outFields->push(HX_CSTRING("primitive_type"));
	outFields->push(HX_CSTRING("shader"));
	outFields->push(HX_CSTRING("texture"));
	outFields->push(HX_CSTRING("depth"));
	outFields->push(HX_CSTRING("group"));
	outFields->push(HX_CSTRING("clip"));
	outFields->push(HX_CSTRING("clip_rect"));
	outFields->push(HX_CSTRING("log"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(GeometryState_obj,dirty),HX_CSTRING("dirty")},
	{hx::fsInt,(int)offsetof(GeometryState_obj,primitive_type),HX_CSTRING("primitive_type")},
	{hx::fsObject /*::phoenix::Shader*/ ,(int)offsetof(GeometryState_obj,shader),HX_CSTRING("shader")},
	{hx::fsObject /*::phoenix::Texture*/ ,(int)offsetof(GeometryState_obj,texture),HX_CSTRING("texture")},
	{hx::fsFloat,(int)offsetof(GeometryState_obj,depth),HX_CSTRING("depth")},
	{hx::fsInt,(int)offsetof(GeometryState_obj,group),HX_CSTRING("group")},
	{hx::fsBool,(int)offsetof(GeometryState_obj,clip),HX_CSTRING("clip")},
	{hx::fsObject /*::phoenix::Rectangle*/ ,(int)offsetof(GeometryState_obj,clip_rect),HX_CSTRING("clip_rect")},
	{hx::fsBool,(int)offsetof(GeometryState_obj,log),HX_CSTRING("log")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("dirty"),
	HX_CSTRING("primitive_type"),
	HX_CSTRING("shader"),
	HX_CSTRING("texture"),
	HX_CSTRING("depth"),
	HX_CSTRING("group"),
	HX_CSTRING("clip"),
	HX_CSTRING("clip_rect"),
	HX_CSTRING("log"),
	HX_CSTRING("clone_onto"),
	HX_CSTRING("str"),
	HX_CSTRING("clean"),
	HX_CSTRING("update"),
	HX_CSTRING("set_primitive_type"),
	HX_CSTRING("set_texture"),
	HX_CSTRING("set_shader"),
	HX_CSTRING("set_depth"),
	HX_CSTRING("set_group"),
	HX_CSTRING("set_clip"),
	HX_CSTRING("set_clip_rect"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GeometryState_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GeometryState_obj::__mClass,"__mClass");
};

#endif

Class GeometryState_obj::__mClass;

void GeometryState_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("phoenix.geometry.GeometryState"), hx::TCanCast< GeometryState_obj> ,sStaticFields,sMemberFields,
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

void GeometryState_obj::__boot()
{
}

} // end namespace phoenix
} // end namespace geometry
