#include <hxcpp.h>

#ifndef INCLUDED_Luxe
#include <Luxe.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_luxe_Emitter
#include <luxe/Emitter.h>
#endif
#ifndef INCLUDED_luxe_Entity
#include <luxe/Entity.h>
#endif
#ifndef INCLUDED_luxe_NineSlice
#include <luxe/NineSlice.h>
#endif
#ifndef INCLUDED_luxe_Objects
#include <luxe/Objects.h>
#endif
#ifndef INCLUDED_luxe_Screen
#include <luxe/Screen.h>
#endif
#ifndef INCLUDED_luxe_Sprite
#include <luxe/Sprite.h>
#endif
#ifndef INCLUDED_luxe_Text
#include <luxe/Text.h>
#endif
#ifndef INCLUDED_luxe_Visual
#include <luxe/Visual.h>
#endif
#ifndef INCLUDED_luxe_debug_Inspector
#include <luxe/debug/Inspector.h>
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
#ifndef INCLUDED_phoenix_Renderer
#include <phoenix/Renderer.h>
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
#ifndef INCLUDED_phoenix_geometry_QuadPackGeometry
#include <phoenix/geometry/QuadPackGeometry.h>
#endif
namespace luxe{
namespace debug{

Void Inspector_obj::__construct(Dynamic _options)
{
HX_STACK_FRAME("luxe.debug.Inspector","new",0x11b57a36,"luxe.debug.Inspector.new","luxe/debug/Inspector.hx",36,0x41b2cfbc)
HX_STACK_THIS(this)
HX_STACK_ARG(_options,"_options")
{
	HX_STACK_LINE(38)
	this->title = HX_CSTRING("Inspector");
	HX_STACK_LINE(39)
	this->font = ::Luxe_obj::renderer->font;
	HX_STACK_LINE(40)
	int _g = ::Std_obj::_int((::Luxe_obj::get_screen()->w * 0.2));		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(40)
	int _g1 = ::Std_obj::_int((::Luxe_obj::get_screen()->h * 0.6));		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(40)
	::phoenix::Vector _g2 = ::phoenix::Vector_obj::__new(_g,_g1,null(),null());		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(40)
	this->set_size(_g2);
	HX_STACK_LINE(41)
	::phoenix::Vector _g3 = ::phoenix::Vector_obj::__new(((Float(::Luxe_obj::get_screen()->w) / Float((int)2)) - (Float(this->size->x) / Float((int)2))),((Float(::Luxe_obj::get_screen()->h) / Float((int)2)) - (Float(this->size->y) / Float((int)2))),null(),null());		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(41)
	this->pos = _g3;
	HX_STACK_LINE(44)
	::phoenix::Texture _g4 = ::phoenix::Texture_obj::load_from_resource(HX_CSTRING("tiny.ui.png"),null());		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(44)
	this->uitexture = _g4;
	HX_STACK_LINE(45)
	::phoenix::Texture _g5 = ::phoenix::Texture_obj::load_from_resource(HX_CSTRING("tiny.button.png"),null());		HX_STACK_VAR(_g5,"_g5");
	HX_STACK_LINE(45)
	this->uibutton = _g5;
	HX_STACK_LINE(48)
	this->_batcher = ::Luxe_obj::renderer->batcher;
	HX_STACK_LINE(50)
	if (((_options != null()))){
		HX_STACK_LINE(52)
		if (((_options->__Field(HX_CSTRING("title"),true) != null()))){
			HX_STACK_LINE(52)
			this->title = _options->__Field(HX_CSTRING("title"),true);
		}
		HX_STACK_LINE(53)
		if (((_options->__Field(HX_CSTRING("font"),true) != null()))){
			HX_STACK_LINE(53)
			this->font = _options->__Field(HX_CSTRING("font"),true);
		}
		HX_STACK_LINE(54)
		if (((_options->__Field(HX_CSTRING("pos"),true) != null()))){
			HX_STACK_LINE(54)
			this->pos = _options->__Field(HX_CSTRING("pos"),true);
		}
		HX_STACK_LINE(55)
		if (((_options->__Field(HX_CSTRING("size"),true) != null()))){
			HX_STACK_LINE(55)
			this->set_size(_options->__Field(HX_CSTRING("size"),true));
		}
		HX_STACK_LINE(56)
		if (((_options->__Field(HX_CSTRING("batcher"),true) != null()))){
			HX_STACK_LINE(56)
			this->_batcher = _options->__Field(HX_CSTRING("batcher"),true);
		}
	}
}
;
	return null();
}

//Inspector_obj::~Inspector_obj() { }

Dynamic Inspector_obj::__CreateEmpty() { return  new Inspector_obj; }
hx::ObjectPtr< Inspector_obj > Inspector_obj::__new(Dynamic _options)
{  hx::ObjectPtr< Inspector_obj > result = new Inspector_obj();
	result->__construct(_options);
	return result;}

Dynamic Inspector_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Inspector_obj > result = new Inspector_obj();
	result->__construct(inArgs[0]);
	return result;}

Void Inspector_obj::refresh( ){
{
		HX_STACK_FRAME("luxe.debug.Inspector","refresh",0xb2cb26b1,"luxe.debug.Inspector.refresh","luxe/debug/Inspector.hx",62,0x41b2cfbc)
		HX_STACK_THIS(this)
		HX_STACK_LINE(63)
		if (((this->_window == null()))){
			HX_STACK_LINE(64)
			this->_create_window();
		}
		HX_STACK_LINE(67)
		if (((this->onrefresh_dyn() != null()))){
			HX_STACK_LINE(68)
			this->onrefresh();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Inspector_obj,refresh,(void))

Void Inspector_obj::show( ){
{
		HX_STACK_FRAME("luxe.debug.Inspector","show",0x7065c667,"luxe.debug.Inspector.show","luxe/debug/Inspector.hx",72,0x41b2cfbc)
		HX_STACK_THIS(this)
		HX_STACK_LINE(73)
		this->refresh();
		HX_STACK_LINE(74)
		this->_window->set_visible(true);
		HX_STACK_LINE(75)
		this->_title_text->set_visible(true);
		HX_STACK_LINE(76)
		this->_version_text->set_visible(true);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Inspector_obj,show,(void))

Void Inspector_obj::hide( ){
{
		HX_STACK_FRAME("luxe.debug.Inspector","hide",0x6921262c,"luxe.debug.Inspector.hide","luxe/debug/Inspector.hx",78,0x41b2cfbc)
		HX_STACK_THIS(this)
		HX_STACK_LINE(79)
		this->_window->set_visible(false);
		HX_STACK_LINE(80)
		this->_title_text->set_visible(false);
		HX_STACK_LINE(81)
		this->_version_text->set_visible(false);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Inspector_obj,hide,(void))

::phoenix::Vector Inspector_obj::set_size( ::phoenix::Vector _size){
	HX_STACK_FRAME("luxe.debug.Inspector","set_size",0xa9c4a428,"luxe.debug.Inspector.set_size","luxe/debug/Inspector.hx",84,0x41b2cfbc)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_size,"_size")
	HX_STACK_LINE(86)
	if (((bool((this->size != null())) && bool((this->_window != null()))))){
		HX_STACK_LINE(87)
		this->_window->set_size(_size);
	}
	HX_STACK_LINE(90)
	return this->size = _size;
}


HX_DEFINE_DYNAMIC_FUNC1(Inspector_obj,set_size,return )

Void Inspector_obj::_create_window( ){
{
		HX_STACK_FRAME("luxe.debug.Inspector","_create_window",0x87e9e03e,"luxe.debug.Inspector._create_window","luxe/debug/Inspector.hx",93,0x41b2cfbc)
		HX_STACK_THIS(this)
		HX_STACK_LINE(96)
		if (((this->_window != null()))){
			HX_STACK_LINE(97)
			this->_window->destroy(null());
		}
		struct _Function_1_1{
			inline static Dynamic Block( hx::ObjectPtr< ::luxe::debug::Inspector_obj > __this){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/debug/Inspector.hx",100,0x41b2cfbc)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("depth") , 999.1,false);
					__result->Add(HX_CSTRING("texture") , __this->uitexture,false);
					__result->Add(HX_CSTRING("batcher") , __this->_batcher,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(100)
		::luxe::NineSlice _g = ::luxe::NineSlice_obj::__new(_Function_1_1::Block(this));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(100)
		this->_window = _g;
		HX_STACK_LINE(106)
		this->_window->create(this->pos,this->size->x,this->size->y,null());
		HX_STACK_LINE(107)
		this->_window->_geometry->id = HX_CSTRING("debug.Inspector");
		HX_STACK_LINE(110)
		this->_window->lock();
		HX_STACK_LINE(117)
		::phoenix::Color _g1 = ::phoenix::Color_obj::__new(null(),null(),null(),null())->rgb((int)16121979);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(118)
		::phoenix::Vector _g2 = ::phoenix::Vector_obj::__new((this->pos->x + (int)14),(this->pos->y + (int)6),null(),null());		HX_STACK_VAR(_g2,"_g2");
		struct _Function_1_2{
			inline static Dynamic Block( hx::ObjectPtr< ::luxe::debug::Inspector_obj > __this,::phoenix::Color &_g1,::phoenix::Vector &_g2){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/debug/Inspector.hx",112,0x41b2cfbc)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("name") , HX_CSTRING("debug.title"),false);
					__result->Add(HX_CSTRING("batcher") , __this->_batcher,false);
					__result->Add(HX_CSTRING("no_scene") , true,false);
					__result->Add(HX_CSTRING("depth") , 999.2,false);
					__result->Add(HX_CSTRING("color") , _g1,false);
					__result->Add(HX_CSTRING("pos") , _g2,false);
					__result->Add(HX_CSTRING("align") , (int)0,false);
					__result->Add(HX_CSTRING("font") , __this->font,false);
					__result->Add(HX_CSTRING("text") , __this->title,false);
					__result->Add(HX_CSTRING("point_size") , (int)15,false);
					__result->Add(HX_CSTRING("visible") , false,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(112)
		Dynamic _g3 = _Function_1_2::Block(this,_g1,_g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(112)
		::luxe::Text _g4 = ::luxe::Text_obj::__new(_g3);		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(112)
		this->_title_text = _g4;
		HX_STACK_LINE(131)
		::phoenix::Color _g5 = ::phoenix::Color_obj::__new(null(),null(),null(),null())->rgb((int)3355443);		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(132)
		::phoenix::Vector _g6 = ::phoenix::Vector_obj::__new((this->pos->x + ((this->size->x - (int)14))),(this->pos->y + (int)6),null(),null());		HX_STACK_VAR(_g6,"_g6");
		struct _Function_1_3{
			inline static Dynamic Block( hx::ObjectPtr< ::luxe::debug::Inspector_obj > __this,::phoenix::Color &_g5,::phoenix::Vector &_g6){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/debug/Inspector.hx",126,0x41b2cfbc)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("name") , HX_CSTRING("debug.version"),false);
					__result->Add(HX_CSTRING("batcher") , __this->_batcher,false);
					__result->Add(HX_CSTRING("no_scene") , true,false);
					__result->Add(HX_CSTRING("depth") , 999.2,false);
					__result->Add(HX_CSTRING("color") , _g5,false);
					__result->Add(HX_CSTRING("pos") , _g6,false);
					__result->Add(HX_CSTRING("align") , (int)1,false);
					__result->Add(HX_CSTRING("font") , __this->font,false);
					__result->Add(HX_CSTRING("text") , (HX_CSTRING("") + ::Luxe_obj::build),false);
					__result->Add(HX_CSTRING("point_size") , (int)16,false);
					__result->Add(HX_CSTRING("visible") , false,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(126)
		Dynamic _g7 = _Function_1_3::Block(this,_g5,_g6);		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(126)
		::luxe::Text _g8 = ::luxe::Text_obj::__new(_g7);		HX_STACK_VAR(_g8,"_g8");
		HX_STACK_LINE(126)
		this->_version_text = _g8;
		HX_STACK_LINE(140)
		if (((this->_title_text->geometry != null()))){
			HX_STACK_LINE(141)
			this->_title_text->geometry->id = HX_CSTRING("debug.title.text");
		}
		HX_STACK_LINE(144)
		if (((this->_version_text->geometry != null()))){
			HX_STACK_LINE(145)
			this->_version_text->geometry->id = HX_CSTRING("debug.version.text");
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Inspector_obj,_create_window,(void))


Inspector_obj::Inspector_obj()
{
}

void Inspector_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Inspector);
	HX_MARK_MEMBER_NAME(title,"title");
	HX_MARK_MEMBER_NAME(font,"font");
	HX_MARK_MEMBER_NAME(pos,"pos");
	HX_MARK_MEMBER_NAME(size,"size");
	HX_MARK_MEMBER_NAME(_title_text,"_title_text");
	HX_MARK_MEMBER_NAME(_version_text,"_version_text");
	HX_MARK_MEMBER_NAME(uitexture,"uitexture");
	HX_MARK_MEMBER_NAME(uibutton,"uibutton");
	HX_MARK_MEMBER_NAME(_window,"_window");
	HX_MARK_MEMBER_NAME(onrefresh,"onrefresh");
	HX_MARK_MEMBER_NAME(_batcher,"_batcher");
	HX_MARK_END_CLASS();
}

void Inspector_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(title,"title");
	HX_VISIT_MEMBER_NAME(font,"font");
	HX_VISIT_MEMBER_NAME(pos,"pos");
	HX_VISIT_MEMBER_NAME(size,"size");
	HX_VISIT_MEMBER_NAME(_title_text,"_title_text");
	HX_VISIT_MEMBER_NAME(_version_text,"_version_text");
	HX_VISIT_MEMBER_NAME(uitexture,"uitexture");
	HX_VISIT_MEMBER_NAME(uibutton,"uibutton");
	HX_VISIT_MEMBER_NAME(_window,"_window");
	HX_VISIT_MEMBER_NAME(onrefresh,"onrefresh");
	HX_VISIT_MEMBER_NAME(_batcher,"_batcher");
}

Dynamic Inspector_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"pos") ) { return pos; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"font") ) { return font; }
		if (HX_FIELD_EQ(inName,"size") ) { return size; }
		if (HX_FIELD_EQ(inName,"show") ) { return show_dyn(); }
		if (HX_FIELD_EQ(inName,"hide") ) { return hide_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"title") ) { return title; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_window") ) { return _window; }
		if (HX_FIELD_EQ(inName,"refresh") ) { return refresh_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"uibutton") ) { return uibutton; }
		if (HX_FIELD_EQ(inName,"_batcher") ) { return _batcher; }
		if (HX_FIELD_EQ(inName,"set_size") ) { return set_size_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"uitexture") ) { return uitexture; }
		if (HX_FIELD_EQ(inName,"onrefresh") ) { return onrefresh; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_title_text") ) { return _title_text; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_version_text") ) { return _version_text; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_create_window") ) { return _create_window_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Inspector_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"pos") ) { pos=inValue.Cast< ::phoenix::Vector >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"font") ) { font=inValue.Cast< ::phoenix::BitmapFont >(); return inValue; }
		if (HX_FIELD_EQ(inName,"size") ) { if (inCallProp) return set_size(inValue);size=inValue.Cast< ::phoenix::Vector >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"title") ) { title=inValue.Cast< ::String >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_window") ) { _window=inValue.Cast< ::luxe::NineSlice >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"uibutton") ) { uibutton=inValue.Cast< ::phoenix::Texture >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_batcher") ) { _batcher=inValue.Cast< ::phoenix::Batcher >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"uitexture") ) { uitexture=inValue.Cast< ::phoenix::Texture >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onrefresh") ) { onrefresh=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_title_text") ) { _title_text=inValue.Cast< ::luxe::Text >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_version_text") ) { _version_text=inValue.Cast< ::luxe::Text >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Inspector_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("title"));
	outFields->push(HX_CSTRING("font"));
	outFields->push(HX_CSTRING("pos"));
	outFields->push(HX_CSTRING("size"));
	outFields->push(HX_CSTRING("_title_text"));
	outFields->push(HX_CSTRING("_version_text"));
	outFields->push(HX_CSTRING("uitexture"));
	outFields->push(HX_CSTRING("uibutton"));
	outFields->push(HX_CSTRING("_window"));
	outFields->push(HX_CSTRING("_batcher"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(Inspector_obj,title),HX_CSTRING("title")},
	{hx::fsObject /*::phoenix::BitmapFont*/ ,(int)offsetof(Inspector_obj,font),HX_CSTRING("font")},
	{hx::fsObject /*::phoenix::Vector*/ ,(int)offsetof(Inspector_obj,pos),HX_CSTRING("pos")},
	{hx::fsObject /*::phoenix::Vector*/ ,(int)offsetof(Inspector_obj,size),HX_CSTRING("size")},
	{hx::fsObject /*::luxe::Text*/ ,(int)offsetof(Inspector_obj,_title_text),HX_CSTRING("_title_text")},
	{hx::fsObject /*::luxe::Text*/ ,(int)offsetof(Inspector_obj,_version_text),HX_CSTRING("_version_text")},
	{hx::fsObject /*::phoenix::Texture*/ ,(int)offsetof(Inspector_obj,uitexture),HX_CSTRING("uitexture")},
	{hx::fsObject /*::phoenix::Texture*/ ,(int)offsetof(Inspector_obj,uibutton),HX_CSTRING("uibutton")},
	{hx::fsObject /*::luxe::NineSlice*/ ,(int)offsetof(Inspector_obj,_window),HX_CSTRING("_window")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Inspector_obj,onrefresh),HX_CSTRING("onrefresh")},
	{hx::fsObject /*::phoenix::Batcher*/ ,(int)offsetof(Inspector_obj,_batcher),HX_CSTRING("_batcher")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("title"),
	HX_CSTRING("font"),
	HX_CSTRING("pos"),
	HX_CSTRING("size"),
	HX_CSTRING("_title_text"),
	HX_CSTRING("_version_text"),
	HX_CSTRING("uitexture"),
	HX_CSTRING("uibutton"),
	HX_CSTRING("_window"),
	HX_CSTRING("onrefresh"),
	HX_CSTRING("_batcher"),
	HX_CSTRING("refresh"),
	HX_CSTRING("show"),
	HX_CSTRING("hide"),
	HX_CSTRING("set_size"),
	HX_CSTRING("_create_window"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Inspector_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Inspector_obj::__mClass,"__mClass");
};

#endif

Class Inspector_obj::__mClass;

void Inspector_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("luxe.debug.Inspector"), hx::TCanCast< Inspector_obj> ,sStaticFields,sMemberFields,
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

void Inspector_obj::__boot()
{
}

} // end namespace luxe
} // end namespace debug
