#include <hxcpp.h>

#ifndef INCLUDED_Luxe
#include <Luxe.h>
#endif
#ifndef INCLUDED_luxe_Emitter
#include <luxe/Emitter.h>
#endif
#ifndef INCLUDED_luxe_Entity
#include <luxe/Entity.h>
#endif
#ifndef INCLUDED_luxe_Objects
#include <luxe/Objects.h>
#endif
#ifndef INCLUDED_luxe_Text
#include <luxe/Text.h>
#endif
#ifndef INCLUDED_luxe_Visual
#include <luxe/Visual.h>
#endif
#ifndef INCLUDED_luxe_resource_Resource
#include <luxe/resource/Resource.h>
#endif
#ifndef INCLUDED_phoenix_Batcher
#include <phoenix/Batcher.h>
#endif
#ifndef INCLUDED_phoenix_BitmapFont
#include <phoenix/BitmapFont.h>
#endif
#ifndef INCLUDED_phoenix_Color
#include <phoenix/Color.h>
#endif
#ifndef INCLUDED_phoenix_Rectangle
#include <phoenix/Rectangle.h>
#endif
#ifndef INCLUDED_phoenix_Renderer
#include <phoenix/Renderer.h>
#endif
#ifndef INCLUDED_phoenix_Shader
#include <phoenix/Shader.h>
#endif
#ifndef INCLUDED_phoenix_Texture
#include <phoenix/Texture.h>
#endif
#ifndef INCLUDED_phoenix_Vector
#include <phoenix/Vector.h>
#endif
#ifndef INCLUDED_phoenix_geometry_Geometry
#include <phoenix/geometry/Geometry.h>
#endif
#ifndef INCLUDED_phoenix_geometry_TextGeometry
#include <phoenix/geometry/TextGeometry.h>
#endif
namespace luxe{

Void Text_obj::__construct(Dynamic _options)
{
HX_STACK_FRAME("luxe.Text","new",0xb745fff7,"luxe.Text.new","luxe/Text.hx",83,0xeacedd78)
HX_STACK_THIS(this)
HX_STACK_ARG(_options,"_options")
{
	HX_STACK_LINE(86)
	this->text_options = _options;
	HX_STACK_LINE(88)
	::phoenix::Batcher _batcher;		HX_STACK_VAR(_batcher,"_batcher");
	HX_STACK_LINE(88)
	if (((_options->__Field(HX_CSTRING("batcher"),true) == null()))){
		HX_STACK_LINE(88)
		_batcher = ::Luxe_obj::renderer->batcher;
	}
	else{
		HX_STACK_LINE(88)
		_batcher = _options->__Field(HX_CSTRING("batcher"),true);
	}
	struct _Function_1_1{
		inline static Dynamic Block( Dynamic &_options,::phoenix::Batcher &_batcher){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/Text.hx",91,0xeacedd78)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("batcher") , _batcher,false);
				__result->Add(HX_CSTRING("depth") , _options->__Field(HX_CSTRING("depth"),true),false);
				__result->Add(HX_CSTRING("group") , _options->__Field(HX_CSTRING("group"),true),false);
				__result->Add(HX_CSTRING("visible") , _options->__Field(HX_CSTRING("visible"),true),false);
				__result->Add(HX_CSTRING("immediate") , _options->__Field(HX_CSTRING("immediate"),true),false);
				__result->Add(HX_CSTRING("color") , _options->__Field(HX_CSTRING("color"),true),false);
				__result->Add(HX_CSTRING("shader") , _options->__Field(HX_CSTRING("shader"),true),false);
				__result->Add(HX_CSTRING("texture") , _options->__Field(HX_CSTRING("texture"),true),false);
				__result->Add(HX_CSTRING("text") , _options->__Field(HX_CSTRING("text"),true),false);
				__result->Add(HX_CSTRING("font") , _options->__Field(HX_CSTRING("font"),true),false);
				__result->Add(HX_CSTRING("point_size") , _options->__Field(HX_CSTRING("point_size"),true),false);
				__result->Add(HX_CSTRING("line_spacing") , _options->__Field(HX_CSTRING("line_spacing"),true),false);
				__result->Add(HX_CSTRING("letter_spacing") , _options->__Field(HX_CSTRING("letter_spacing"),true),false);
				__result->Add(HX_CSTRING("bounds") , _options->__Field(HX_CSTRING("bounds"),true),false);
				__result->Add(HX_CSTRING("bounds_wrap") , _options->__Field(HX_CSTRING("bounds_wrap"),true),false);
				__result->Add(HX_CSTRING("align") , _options->__Field(HX_CSTRING("align"),true),false);
				__result->Add(HX_CSTRING("align_vertical") , _options->__Field(HX_CSTRING("align_vertical"),true),false);
				__result->Add(HX_CSTRING("sdf") , _options->__Field(HX_CSTRING("sdf"),true),false);
				__result->Add(HX_CSTRING("smoothness") , _options->__Field(HX_CSTRING("smoothness"),true),false);
				__result->Add(HX_CSTRING("thickness") , _options->__Field(HX_CSTRING("thickness"),true),false);
				__result->Add(HX_CSTRING("outline") , _options->__Field(HX_CSTRING("outline"),true),false);
				__result->Add(HX_CSTRING("outline_color") , _options->__Field(HX_CSTRING("outline_color"),true),false);
				__result->Add(HX_CSTRING("glow_threshold") , _options->__Field(HX_CSTRING("glow_threshold"),true),false);
				__result->Add(HX_CSTRING("glow_amount") , _options->__Field(HX_CSTRING("glow_amount"),true),false);
				__result->Add(HX_CSTRING("glow_color") , _options->__Field(HX_CSTRING("glow_color"),true),false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(91)
	::phoenix::geometry::TextGeometry _g = ::phoenix::geometry::TextGeometry_obj::__new(_Function_1_1::Block(_options,_batcher));		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(91)
	this->geom = _g;
	HX_STACK_LINE(134)
	_options->__FieldRef(HX_CSTRING("geometry")) = this->geom;
	HX_STACK_LINE(135)
	::phoenix::Shader _g1 = this->geom->get_shader();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(135)
	_options->__FieldRef(HX_CSTRING("shader")) = _g1;
	HX_STACK_LINE(138)
	super::__construct(_options);
}
;
	return null();
}

//Text_obj::~Text_obj() { }

Dynamic Text_obj::__CreateEmpty() { return  new Text_obj; }
hx::ObjectPtr< Text_obj > Text_obj::__new(Dynamic _options)
{  hx::ObjectPtr< Text_obj > result = new Text_obj();
	result->__construct(_options);
	return result;}

Dynamic Text_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Text_obj > result = new Text_obj();
	result->__construct(inArgs[0]);
	return result;}

::String Text_obj::get_text( ){
	HX_STACK_FRAME("luxe.Text","get_text",0xce5b753f,"luxe.Text.get_text","luxe/Text.hx",22,0xeacedd78)
	HX_STACK_THIS(this)
	HX_STACK_LINE(22)
	return this->geom->text;
}


HX_DEFINE_DYNAMIC_FUNC0(Text_obj,get_text,return )

::String Text_obj::set_text( ::String _s){
	HX_STACK_FRAME("luxe.Text","set_text",0x7cb8ceb3,"luxe.Text.set_text","luxe/Text.hx",23,0xeacedd78)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_s,"_s")
	HX_STACK_LINE(23)
	return this->geom->set_text(_s);
}


HX_DEFINE_DYNAMIC_FUNC1(Text_obj,set_text,return )

::phoenix::BitmapFont Text_obj::get_font( ){
	HX_STACK_FRAME("luxe.Text","get_font",0xc5220661,"luxe.Text.get_font","luxe/Text.hx",25,0xeacedd78)
	HX_STACK_THIS(this)
	HX_STACK_LINE(25)
	return this->geom->font;
}


HX_DEFINE_DYNAMIC_FUNC0(Text_obj,get_font,return )

::phoenix::BitmapFont Text_obj::set_font( ::phoenix::BitmapFont _f){
	HX_STACK_FRAME("luxe.Text","set_font",0x737f5fd5,"luxe.Text.set_font","luxe/Text.hx",26,0xeacedd78)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_f,"_f")
	HX_STACK_LINE(26)
	return this->geom->font = _f;
}


HX_DEFINE_DYNAMIC_FUNC1(Text_obj,set_font,return )

Float Text_obj::get_point_size( ){
	HX_STACK_FRAME("luxe.Text","get_point_size",0x5942c862,"luxe.Text.get_point_size","luxe/Text.hx",28,0xeacedd78)
	HX_STACK_THIS(this)
	HX_STACK_LINE(28)
	return this->geom->point_size;
}


HX_DEFINE_DYNAMIC_FUNC0(Text_obj,get_point_size,return )

Float Text_obj::set_point_size( Float _s){
	HX_STACK_FRAME("luxe.Text","set_point_size",0x7962b0d6,"luxe.Text.set_point_size","luxe/Text.hx",29,0xeacedd78)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_s,"_s")
	HX_STACK_LINE(29)
	return this->geom->set_point_size(_s);
}


HX_DEFINE_DYNAMIC_FUNC1(Text_obj,set_point_size,return )

Float Text_obj::get_letter_spacing( ){
	HX_STACK_FRAME("luxe.Text","get_letter_spacing",0x47c962fc,"luxe.Text.get_letter_spacing","luxe/Text.hx",31,0xeacedd78)
	HX_STACK_THIS(this)
	HX_STACK_LINE(31)
	return this->geom->letter_spacing;
}


HX_DEFINE_DYNAMIC_FUNC0(Text_obj,get_letter_spacing,return )

Float Text_obj::set_letter_spacing( Float _s){
	HX_STACK_FRAME("luxe.Text","set_letter_spacing",0x24789570,"luxe.Text.set_letter_spacing","luxe/Text.hx",32,0xeacedd78)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_s,"_s")
	HX_STACK_LINE(32)
	return this->geom->set_letter_spacing(_s);
}


HX_DEFINE_DYNAMIC_FUNC1(Text_obj,set_letter_spacing,return )

Float Text_obj::get_line_spacing( ){
	HX_STACK_FRAME("luxe.Text","get_line_spacing",0x41a5438a,"luxe.Text.get_line_spacing","luxe/Text.hx",34,0xeacedd78)
	HX_STACK_THIS(this)
	HX_STACK_LINE(34)
	return this->geom->line_spacing;
}


HX_DEFINE_DYNAMIC_FUNC0(Text_obj,get_line_spacing,return )

Float Text_obj::set_line_spacing( Float _s){
	HX_STACK_FRAME("luxe.Text","set_line_spacing",0x97e730fe,"luxe.Text.set_line_spacing","luxe/Text.hx",35,0xeacedd78)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_s,"_s")
	HX_STACK_LINE(35)
	return this->geom->set_line_spacing(_s);
}


HX_DEFINE_DYNAMIC_FUNC1(Text_obj,set_line_spacing,return )

::phoenix::Rectangle Text_obj::get_bounds( ){
	HX_STACK_FRAME("luxe.Text","get_bounds",0x41a7f787,"luxe.Text.get_bounds","luxe/Text.hx",38,0xeacedd78)
	HX_STACK_THIS(this)
	HX_STACK_LINE(38)
	return this->geom->bounds;
}


HX_DEFINE_DYNAMIC_FUNC0(Text_obj,get_bounds,return )

::phoenix::Rectangle Text_obj::set_bounds( ::phoenix::Rectangle _b){
	HX_STACK_FRAME("luxe.Text","set_bounds",0x452595fb,"luxe.Text.set_bounds","luxe/Text.hx",39,0xeacedd78)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_b,"_b")
	HX_STACK_LINE(39)
	return this->geom->set_bounds(_b);
}


HX_DEFINE_DYNAMIC_FUNC1(Text_obj,set_bounds,return )

bool Text_obj::get_bounds_wrap( ){
	HX_STACK_FRAME("luxe.Text","get_bounds_wrap",0x8356b4c2,"luxe.Text.get_bounds_wrap","luxe/Text.hx",41,0xeacedd78)
	HX_STACK_THIS(this)
	HX_STACK_LINE(41)
	return this->geom->bounds_wrap;
}


HX_DEFINE_DYNAMIC_FUNC0(Text_obj,get_bounds_wrap,return )

bool Text_obj::set_bounds_wrap( bool _b){
	HX_STACK_FRAME("luxe.Text","set_bounds_wrap",0x7f2231ce,"luxe.Text.set_bounds_wrap","luxe/Text.hx",42,0xeacedd78)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_b,"_b")
	HX_STACK_LINE(42)
	return this->geom->set_bounds_wrap(_b);
}


HX_DEFINE_DYNAMIC_FUNC1(Text_obj,set_bounds_wrap,return )

int Text_obj::get_align( ){
	HX_STACK_FRAME("luxe.Text","get_align",0xd5a32df3,"luxe.Text.get_align","luxe/Text.hx",45,0xeacedd78)
	HX_STACK_THIS(this)
	HX_STACK_LINE(45)
	return this->geom->align;
}


HX_DEFINE_DYNAMIC_FUNC0(Text_obj,get_align,return )

int Text_obj::set_align( int _a){
	HX_STACK_FRAME("luxe.Text","set_align",0xb8f419ff,"luxe.Text.set_align","luxe/Text.hx",46,0xeacedd78)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_a,"_a")
	HX_STACK_LINE(46)
	return this->geom->set_align(_a);
}


HX_DEFINE_DYNAMIC_FUNC1(Text_obj,set_align,return )

int Text_obj::get_align_vertical( ){
	HX_STACK_FRAME("luxe.Text","get_align_vertical",0x2d6aaf82,"luxe.Text.get_align_vertical","luxe/Text.hx",48,0xeacedd78)
	HX_STACK_THIS(this)
	HX_STACK_LINE(48)
	return this->geom->align_vertical;
}


HX_DEFINE_DYNAMIC_FUNC0(Text_obj,get_align_vertical,return )

int Text_obj::set_align_vertical( int _a){
	HX_STACK_FRAME("luxe.Text","set_align_vertical",0x0a19e1f6,"luxe.Text.set_align_vertical","luxe/Text.hx",49,0xeacedd78)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_a,"_a")
	HX_STACK_LINE(49)
	return this->geom->set_align_vertical(_a);
}


HX_DEFINE_DYNAMIC_FUNC1(Text_obj,set_align_vertical,return )

bool Text_obj::get_sdf( ){
	HX_STACK_FRAME("luxe.Text","get_sdf",0x0583aa63,"luxe.Text.get_sdf","luxe/Text.hx",54,0xeacedd78)
	HX_STACK_THIS(this)
	HX_STACK_LINE(54)
	return this->geom->sdf;
}


HX_DEFINE_DYNAMIC_FUNC0(Text_obj,get_sdf,return )

bool Text_obj::set_sdf( bool _s){
	HX_STACK_FRAME("luxe.Text","set_sdf",0xf8853b6f,"luxe.Text.set_sdf","luxe/Text.hx",55,0xeacedd78)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_s,"_s")
	HX_STACK_LINE(55)
	return this->geom->sdf = _s;
}


HX_DEFINE_DYNAMIC_FUNC1(Text_obj,set_sdf,return )

Float Text_obj::get_smoothness( ){
	HX_STACK_FRAME("luxe.Text","get_smoothness",0xa04d99d7,"luxe.Text.get_smoothness","luxe/Text.hx",58,0xeacedd78)
	HX_STACK_THIS(this)
	HX_STACK_LINE(58)
	return this->geom->smoothness;
}


HX_DEFINE_DYNAMIC_FUNC0(Text_obj,get_smoothness,return )

Float Text_obj::set_smoothness( Float _s){
	HX_STACK_FRAME("luxe.Text","set_smoothness",0xc06d824b,"luxe.Text.set_smoothness","luxe/Text.hx",59,0xeacedd78)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_s,"_s")
	HX_STACK_LINE(59)
	return this->geom->set_smoothness(_s);
}


HX_DEFINE_DYNAMIC_FUNC1(Text_obj,set_smoothness,return )

Float Text_obj::get_thickness( ){
	HX_STACK_FRAME("luxe.Text","get_thickness",0x8e1ef7a2,"luxe.Text.get_thickness","luxe/Text.hx",61,0xeacedd78)
	HX_STACK_THIS(this)
	HX_STACK_LINE(61)
	return this->geom->thickness;
}


HX_DEFINE_DYNAMIC_FUNC0(Text_obj,get_thickness,return )

Float Text_obj::set_thickness( Float _t){
	HX_STACK_FRAME("luxe.Text","set_thickness",0xd324d9ae,"luxe.Text.set_thickness","luxe/Text.hx",62,0xeacedd78)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_t,"_t")
	HX_STACK_LINE(62)
	return this->geom->set_thickness(_t);
}


HX_DEFINE_DYNAMIC_FUNC1(Text_obj,set_thickness,return )

Float Text_obj::get_outline( ){
	HX_STACK_FRAME("luxe.Text","get_outline",0x1f569630,"luxe.Text.get_outline","luxe/Text.hx",65,0xeacedd78)
	HX_STACK_THIS(this)
	HX_STACK_LINE(65)
	return this->geom->outline;
}


HX_DEFINE_DYNAMIC_FUNC0(Text_obj,get_outline,return )

Float Text_obj::set_outline( Float _o){
	HX_STACK_FRAME("luxe.Text","set_outline",0x29c39d3c,"luxe.Text.set_outline","luxe/Text.hx",66,0xeacedd78)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_o,"_o")
	HX_STACK_LINE(66)
	return this->geom->set_outline(_o);
}


HX_DEFINE_DYNAMIC_FUNC1(Text_obj,set_outline,return )

::phoenix::Color Text_obj::get_outline_color( ){
	HX_STACK_FRAME("luxe.Text","get_outline_color",0xe9b512d4,"luxe.Text.get_outline_color","luxe/Text.hx",68,0xeacedd78)
	HX_STACK_THIS(this)
	HX_STACK_LINE(68)
	return this->geom->outline_color;
}


HX_DEFINE_DYNAMIC_FUNC0(Text_obj,get_outline_color,return )

::phoenix::Color Text_obj::set_outline_color( ::phoenix::Color _c){
	HX_STACK_FRAME("luxe.Text","set_outline_color",0x0d22eae0,"luxe.Text.set_outline_color","luxe/Text.hx",69,0xeacedd78)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_c,"_c")
	HX_STACK_LINE(69)
	return this->geom->set_outline_color(_c);
}


HX_DEFINE_DYNAMIC_FUNC1(Text_obj,set_outline_color,return )

Float Text_obj::get_glow_threshold( ){
	HX_STACK_FRAME("luxe.Text","get_glow_threshold",0x9478f34b,"luxe.Text.get_glow_threshold","luxe/Text.hx",72,0xeacedd78)
	HX_STACK_THIS(this)
	HX_STACK_LINE(72)
	return this->geom->glow_threshold;
}


HX_DEFINE_DYNAMIC_FUNC0(Text_obj,get_glow_threshold,return )

Float Text_obj::set_glow_threshold( Float _s){
	HX_STACK_FRAME("luxe.Text","set_glow_threshold",0x712825bf,"luxe.Text.set_glow_threshold","luxe/Text.hx",73,0xeacedd78)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_s,"_s")
	HX_STACK_LINE(73)
	return this->geom->set_glow_threshold(_s);
}


HX_DEFINE_DYNAMIC_FUNC1(Text_obj,set_glow_threshold,return )

Float Text_obj::get_glow_amount( ){
	HX_STACK_FRAME("luxe.Text","get_glow_amount",0xdfe9de38,"luxe.Text.get_glow_amount","luxe/Text.hx",75,0xeacedd78)
	HX_STACK_THIS(this)
	HX_STACK_LINE(75)
	return this->geom->glow_amount;
}


HX_DEFINE_DYNAMIC_FUNC0(Text_obj,get_glow_amount,return )

Float Text_obj::set_glow_amount( Float _e){
	HX_STACK_FRAME("luxe.Text","set_glow_amount",0xdbb55b44,"luxe.Text.set_glow_amount","luxe/Text.hx",76,0xeacedd78)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_e,"_e")
	HX_STACK_LINE(76)
	return this->geom->set_glow_amount(_e);
}


HX_DEFINE_DYNAMIC_FUNC1(Text_obj,set_glow_amount,return )

::phoenix::Color Text_obj::get_glow_color( ){
	HX_STACK_FRAME("luxe.Text","get_glow_color",0xd0b95103,"luxe.Text.get_glow_color","luxe/Text.hx",78,0xeacedd78)
	HX_STACK_THIS(this)
	HX_STACK_LINE(78)
	return this->geom->glow_color;
}


HX_DEFINE_DYNAMIC_FUNC0(Text_obj,get_glow_color,return )

::phoenix::Color Text_obj::set_glow_color( ::phoenix::Color _c){
	HX_STACK_FRAME("luxe.Text","set_glow_color",0xf0d93977,"luxe.Text.set_glow_color","luxe/Text.hx",79,0xeacedd78)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_c,"_c")
	HX_STACK_LINE(79)
	return this->geom->set_glow_color(_c);
}


HX_DEFINE_DYNAMIC_FUNC1(Text_obj,set_glow_color,return )

bool Text_obj::point_inside( ::phoenix::Vector p){
	HX_STACK_FRAME("luxe.Text","point_inside",0x10666cd4,"luxe.Text.point_inside","luxe/Text.hx",147,0xeacedd78)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p,"p")
	HX_STACK_LINE(147)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(Text_obj,point_inside,return )

Void Text_obj::set_pos_from_transform( ::phoenix::Vector _p){
{
		HX_STACK_FRAME("luxe.Text","set_pos_from_transform",0x4f488928,"luxe.Text.set_pos_from_transform","luxe/Text.hx",151,0xeacedd78)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_p,"_p")
		HX_STACK_LINE(153)
		this->super::set_pos_from_transform(_p);
		HX_STACK_LINE(154)
		::phoenix::Vector _g = this->get_pos();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(154)
		this->text_options->__FieldRef(HX_CSTRING("pos")) = _g;
	}
return null();
}


Void Text_obj::init( ){
{
		HX_STACK_FRAME("luxe.Text","init",0xa2b2af99,"luxe.Text.init","luxe/macros/EntityRules.hx",35,0xed942299)
		HX_STACK_THIS(this)
	}
return null();
}


Void Text_obj::ondestroy( ){
{
		HX_STACK_FRAME("luxe.Text","ondestroy",0x9f483892,"luxe.Text.ondestroy","luxe/macros/EntityRules.hx",47,0xed942299)
		HX_STACK_THIS(this)
		HX_STACK_LINE(47)
		this->super::ondestroy();
	}
return null();
}



Text_obj::Text_obj()
{
}

void Text_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Text);
	HX_MARK_MEMBER_NAME(geom,"geom");
	HX_MARK_MEMBER_NAME(text_options,"text_options");
	::luxe::Visual_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Text_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(geom,"geom");
	HX_VISIT_MEMBER_NAME(text_options,"text_options");
	::luxe::Visual_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Text_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"sdf") ) { return get_sdf(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"geom") ) { return geom; }
		if (HX_FIELD_EQ(inName,"text") ) { return get_text(); }
		if (HX_FIELD_EQ(inName,"font") ) { return get_font(); }
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"align") ) { return get_align(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"bounds") ) { return get_bounds(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"get_sdf") ) { return get_sdf_dyn(); }
		if (HX_FIELD_EQ(inName,"set_sdf") ) { return set_sdf_dyn(); }
		if (HX_FIELD_EQ(inName,"outline") ) { return get_outline(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_text") ) { return get_text_dyn(); }
		if (HX_FIELD_EQ(inName,"set_text") ) { return set_text_dyn(); }
		if (HX_FIELD_EQ(inName,"get_font") ) { return get_font_dyn(); }
		if (HX_FIELD_EQ(inName,"set_font") ) { return set_font_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_align") ) { return get_align_dyn(); }
		if (HX_FIELD_EQ(inName,"set_align") ) { return set_align_dyn(); }
		if (HX_FIELD_EQ(inName,"thickness") ) { return get_thickness(); }
		if (HX_FIELD_EQ(inName,"ondestroy") ) { return ondestroy_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"point_size") ) { return get_point_size(); }
		if (HX_FIELD_EQ(inName,"get_bounds") ) { return get_bounds_dyn(); }
		if (HX_FIELD_EQ(inName,"set_bounds") ) { return set_bounds_dyn(); }
		if (HX_FIELD_EQ(inName,"smoothness") ) { return get_smoothness(); }
		if (HX_FIELD_EQ(inName,"glow_color") ) { return get_glow_color(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"bounds_wrap") ) { return get_bounds_wrap(); }
		if (HX_FIELD_EQ(inName,"get_outline") ) { return get_outline_dyn(); }
		if (HX_FIELD_EQ(inName,"set_outline") ) { return set_outline_dyn(); }
		if (HX_FIELD_EQ(inName,"glow_amount") ) { return get_glow_amount(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"line_spacing") ) { return get_line_spacing(); }
		if (HX_FIELD_EQ(inName,"text_options") ) { return text_options; }
		if (HX_FIELD_EQ(inName,"point_inside") ) { return point_inside_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"get_thickness") ) { return get_thickness_dyn(); }
		if (HX_FIELD_EQ(inName,"set_thickness") ) { return set_thickness_dyn(); }
		if (HX_FIELD_EQ(inName,"outline_color") ) { return get_outline_color(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"get_point_size") ) { return get_point_size_dyn(); }
		if (HX_FIELD_EQ(inName,"set_point_size") ) { return set_point_size_dyn(); }
		if (HX_FIELD_EQ(inName,"letter_spacing") ) { return get_letter_spacing(); }
		if (HX_FIELD_EQ(inName,"align_vertical") ) { return get_align_vertical(); }
		if (HX_FIELD_EQ(inName,"get_smoothness") ) { return get_smoothness_dyn(); }
		if (HX_FIELD_EQ(inName,"set_smoothness") ) { return set_smoothness_dyn(); }
		if (HX_FIELD_EQ(inName,"glow_threshold") ) { return get_glow_threshold(); }
		if (HX_FIELD_EQ(inName,"get_glow_color") ) { return get_glow_color_dyn(); }
		if (HX_FIELD_EQ(inName,"set_glow_color") ) { return set_glow_color_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_bounds_wrap") ) { return get_bounds_wrap_dyn(); }
		if (HX_FIELD_EQ(inName,"set_bounds_wrap") ) { return set_bounds_wrap_dyn(); }
		if (HX_FIELD_EQ(inName,"get_glow_amount") ) { return get_glow_amount_dyn(); }
		if (HX_FIELD_EQ(inName,"set_glow_amount") ) { return set_glow_amount_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"get_line_spacing") ) { return get_line_spacing_dyn(); }
		if (HX_FIELD_EQ(inName,"set_line_spacing") ) { return set_line_spacing_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"get_outline_color") ) { return get_outline_color_dyn(); }
		if (HX_FIELD_EQ(inName,"set_outline_color") ) { return set_outline_color_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"get_letter_spacing") ) { return get_letter_spacing_dyn(); }
		if (HX_FIELD_EQ(inName,"set_letter_spacing") ) { return set_letter_spacing_dyn(); }
		if (HX_FIELD_EQ(inName,"get_align_vertical") ) { return get_align_vertical_dyn(); }
		if (HX_FIELD_EQ(inName,"set_align_vertical") ) { return set_align_vertical_dyn(); }
		if (HX_FIELD_EQ(inName,"get_glow_threshold") ) { return get_glow_threshold_dyn(); }
		if (HX_FIELD_EQ(inName,"set_glow_threshold") ) { return set_glow_threshold_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"set_pos_from_transform") ) { return set_pos_from_transform_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Text_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"sdf") ) { return set_sdf(inValue); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"geom") ) { geom=inValue.Cast< ::phoenix::geometry::TextGeometry >(); return inValue; }
		if (HX_FIELD_EQ(inName,"text") ) { return set_text(inValue); }
		if (HX_FIELD_EQ(inName,"font") ) { return set_font(inValue); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"align") ) { return set_align(inValue); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"bounds") ) { return set_bounds(inValue); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"outline") ) { return set_outline(inValue); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"thickness") ) { return set_thickness(inValue); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"point_size") ) { return set_point_size(inValue); }
		if (HX_FIELD_EQ(inName,"smoothness") ) { return set_smoothness(inValue); }
		if (HX_FIELD_EQ(inName,"glow_color") ) { return set_glow_color(inValue); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"bounds_wrap") ) { return set_bounds_wrap(inValue); }
		if (HX_FIELD_EQ(inName,"glow_amount") ) { return set_glow_amount(inValue); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"line_spacing") ) { return set_line_spacing(inValue); }
		if (HX_FIELD_EQ(inName,"text_options") ) { text_options=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"outline_color") ) { return set_outline_color(inValue); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"letter_spacing") ) { return set_letter_spacing(inValue); }
		if (HX_FIELD_EQ(inName,"align_vertical") ) { return set_align_vertical(inValue); }
		if (HX_FIELD_EQ(inName,"glow_threshold") ) { return set_glow_threshold(inValue); }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Text_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("geom"));
	outFields->push(HX_CSTRING("text"));
	outFields->push(HX_CSTRING("font"));
	outFields->push(HX_CSTRING("point_size"));
	outFields->push(HX_CSTRING("letter_spacing"));
	outFields->push(HX_CSTRING("line_spacing"));
	outFields->push(HX_CSTRING("bounds"));
	outFields->push(HX_CSTRING("bounds_wrap"));
	outFields->push(HX_CSTRING("align"));
	outFields->push(HX_CSTRING("align_vertical"));
	outFields->push(HX_CSTRING("sdf"));
	outFields->push(HX_CSTRING("smoothness"));
	outFields->push(HX_CSTRING("thickness"));
	outFields->push(HX_CSTRING("outline"));
	outFields->push(HX_CSTRING("outline_color"));
	outFields->push(HX_CSTRING("glow_threshold"));
	outFields->push(HX_CSTRING("glow_amount"));
	outFields->push(HX_CSTRING("glow_color"));
	outFields->push(HX_CSTRING("text_options"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::phoenix::geometry::TextGeometry*/ ,(int)offsetof(Text_obj,geom),HX_CSTRING("geom")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Text_obj,text_options),HX_CSTRING("text_options")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("geom"),
	HX_CSTRING("get_text"),
	HX_CSTRING("set_text"),
	HX_CSTRING("get_font"),
	HX_CSTRING("set_font"),
	HX_CSTRING("get_point_size"),
	HX_CSTRING("set_point_size"),
	HX_CSTRING("get_letter_spacing"),
	HX_CSTRING("set_letter_spacing"),
	HX_CSTRING("get_line_spacing"),
	HX_CSTRING("set_line_spacing"),
	HX_CSTRING("get_bounds"),
	HX_CSTRING("set_bounds"),
	HX_CSTRING("get_bounds_wrap"),
	HX_CSTRING("set_bounds_wrap"),
	HX_CSTRING("get_align"),
	HX_CSTRING("set_align"),
	HX_CSTRING("get_align_vertical"),
	HX_CSTRING("set_align_vertical"),
	HX_CSTRING("get_sdf"),
	HX_CSTRING("set_sdf"),
	HX_CSTRING("get_smoothness"),
	HX_CSTRING("set_smoothness"),
	HX_CSTRING("get_thickness"),
	HX_CSTRING("set_thickness"),
	HX_CSTRING("get_outline"),
	HX_CSTRING("set_outline"),
	HX_CSTRING("get_outline_color"),
	HX_CSTRING("set_outline_color"),
	HX_CSTRING("get_glow_threshold"),
	HX_CSTRING("set_glow_threshold"),
	HX_CSTRING("get_glow_amount"),
	HX_CSTRING("set_glow_amount"),
	HX_CSTRING("get_glow_color"),
	HX_CSTRING("set_glow_color"),
	HX_CSTRING("text_options"),
	HX_CSTRING("point_inside"),
	HX_CSTRING("set_pos_from_transform"),
	HX_CSTRING("init"),
	HX_CSTRING("ondestroy"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Text_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Text_obj::__mClass,"__mClass");
};

#endif

Class Text_obj::__mClass;

void Text_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("luxe.Text"), hx::TCanCast< Text_obj> ,sStaticFields,sMemberFields,
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

void Text_obj::__boot()
{
}

} // end namespace luxe
