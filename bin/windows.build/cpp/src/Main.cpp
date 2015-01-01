#include <hxcpp.h>

#ifndef INCLUDED_Luxe
#include <Luxe.h>
#endif
#ifndef INCLUDED_Main
#include <Main.h>
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
#ifndef INCLUDED_luxe_Game
#include <luxe/Game.h>
#endif
#ifndef INCLUDED_luxe_Input
#include <luxe/Input.h>
#endif
#ifndef INCLUDED_luxe_Objects
#include <luxe/Objects.h>
#endif
#ifndef INCLUDED_luxe_Parcel
#include <luxe/Parcel.h>
#endif
#ifndef INCLUDED_luxe_ParcelProgress
#include <luxe/ParcelProgress.h>
#endif
#ifndef INCLUDED_luxe_Screen
#include <luxe/Screen.h>
#endif
#ifndef INCLUDED_luxe_Sprite
#include <luxe/Sprite.h>
#endif
#ifndef INCLUDED_luxe_Visual
#include <luxe/Visual.h>
#endif
#ifndef INCLUDED_luxe_resource_JSONResource
#include <luxe/resource/JSONResource.h>
#endif
#ifndef INCLUDED_luxe_resource_Resource
#include <luxe/resource/Resource.h>
#endif
#ifndef INCLUDED_luxe_resource_ResourceManager
#include <luxe/resource/ResourceManager.h>
#endif
#ifndef INCLUDED_phoenix_Color
#include <phoenix/Color.h>
#endif
#ifndef INCLUDED_phoenix_FilterType
#include <phoenix/FilterType.h>
#endif
#ifndef INCLUDED_phoenix_Texture
#include <phoenix/Texture.h>
#endif
#ifndef INCLUDED_phoenix_Vector
#include <phoenix/Vector.h>
#endif
#ifndef INCLUDED_snow_input_Keycodes
#include <snow/input/Keycodes.h>
#endif

Void Main_obj::__construct()
{
HX_STACK_FRAME("Main","new",0x6616a5cb,"Main.new","Main.hx",22,0x087e5c05)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(22)
	super::__construct();
}
;
	return null();
}

//Main_obj::~Main_obj() { }

Dynamic Main_obj::__CreateEmpty() { return  new Main_obj; }
hx::ObjectPtr< Main_obj > Main_obj::__new()
{  hx::ObjectPtr< Main_obj > result = new Main_obj();
	result->__construct();
	return result;}

Dynamic Main_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Main_obj > result = new Main_obj();
	result->__construct();
	return result;}

Dynamic Main_obj::config( Dynamic config){
	HX_STACK_FRAME("Main","config",0xf87c7637,"Main.config","Main.hx",27,0x087e5c05)
	HX_STACK_THIS(this)
	HX_STACK_ARG(config,"config")
	HX_STACK_LINE(29)
	if (((config->__Field(HX_CSTRING("runtime"),true)->__Field(HX_CSTRING("window"),true) != null()))){
		HX_STACK_LINE(30)
		if (((config->__Field(HX_CSTRING("runtime"),true)->__Field(HX_CSTRING("window"),true)->__Field(HX_CSTRING("width"),true) != null()))){
			HX_STACK_LINE(31)
			int _g = ::Std_obj::_int(config->__Field(HX_CSTRING("runtime"),true)->__Field(HX_CSTRING("window"),true)->__Field(HX_CSTRING("width"),true));		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(31)
			config->__Field(HX_CSTRING("window"),true)->__FieldRef(HX_CSTRING("width")) = _g;
		}
		HX_STACK_LINE(33)
		if (((config->__Field(HX_CSTRING("runtime"),true)->__Field(HX_CSTRING("window"),true)->__Field(HX_CSTRING("height"),true) != null()))){
			HX_STACK_LINE(34)
			int _g1 = ::Std_obj::_int(config->__Field(HX_CSTRING("runtime"),true)->__Field(HX_CSTRING("window"),true)->__Field(HX_CSTRING("height"),true));		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(34)
			config->__Field(HX_CSTRING("window"),true)->__FieldRef(HX_CSTRING("height")) = _g1;
		}
	}
	HX_STACK_LINE(38)
	config->__Field(HX_CSTRING("window"),true)->__FieldRef(HX_CSTRING("title")) = HX_CSTRING("Tank Offense");
	HX_STACK_LINE(40)
	return config;
}


Void Main_obj::ready( ){
{
		HX_STACK_FRAME("Main","ready",0x62ede68e,"Main.ready","Main.hx",43,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_LINE(45)
		::luxe::resource::JSONResource json_asset = ::Luxe_obj::loadJSON(HX_CSTRING("assets/parcel.json"),null(),null());		HX_STACK_VAR(json_asset,"json_asset");
		HX_STACK_LINE(47)
		::luxe::Parcel preload = ::luxe::Parcel_obj::__new(null());		HX_STACK_VAR(preload,"preload");
		HX_STACK_LINE(48)
		preload->from_json(json_asset->json);
		HX_STACK_LINE(52)
		::phoenix::Color _g = ::phoenix::Color_obj::__new((int)1,(int)1,(int)1,0.85);		HX_STACK_VAR(_g,"_g");
		struct _Function_1_1{
			inline static Dynamic Block( hx::ObjectPtr< ::Main_obj > __this,::phoenix::Color &_g,::luxe::Parcel &preload){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Main.hx",50,0x087e5c05)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("parcel") , preload,false);
					__result->Add(HX_CSTRING("background") , _g,false);
					__result->Add(HX_CSTRING("oncomplete") , __this->assets_loaded_dyn(),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(50)
		Dynamic _g1 = _Function_1_1::Block(this,_g,preload);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(50)
		::luxe::ParcelProgress_obj::__new(_g1);
		HX_STACK_LINE(56)
		preload->load();
	}
return null();
}


Void Main_obj::assets_loaded( ::luxe::Parcel _){
{
		HX_STACK_FRAME("Main","assets_loaded",0x9ea260ac,"Main.assets_loaded","Main.hx",60,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_,"_")
		HX_STACK_LINE(61)
		this->create_player();
		HX_STACK_LINE(62)
		::Luxe_obj::input->bind_key(HX_CSTRING("left"),::snow::input::Keycodes_obj::left);
		HX_STACK_LINE(63)
		::Luxe_obj::input->bind_key(HX_CSTRING("left"),::snow::input::Keycodes_obj::key_a);
		HX_STACK_LINE(65)
		::Luxe_obj::input->bind_key(HX_CSTRING("right"),::snow::input::Keycodes_obj::right);
		HX_STACK_LINE(66)
		::Luxe_obj::input->bind_key(HX_CSTRING("right"),::snow::input::Keycodes_obj::key_d);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Main_obj,assets_loaded,(void))

Void Main_obj::create_player( ){
{
		HX_STACK_FRAME("Main","create_player",0x999796af,"Main.create_player","Main.hx",69,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_LINE(70)
		::phoenix::Texture _g = ::Luxe_obj::loadTexture(HX_CSTRING("assets/testingsquare.png"),null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(70)
		this->image = _g;
		HX_STACK_LINE(71)
		this->image->set_filter(::phoenix::FilterType_obj::nearest);
		HX_STACK_LINE(76)
		::phoenix::Vector _g1 = ::Luxe_obj::get_screen()->get_mid();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(77)
		::phoenix::Vector _g2 = ::phoenix::Vector_obj::__new((int)128,(int)128,null(),null());		HX_STACK_VAR(_g2,"_g2");
		struct _Function_1_1{
			inline static Dynamic Block( hx::ObjectPtr< ::Main_obj > __this,::phoenix::Vector &_g1,::phoenix::Vector &_g2){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Main.hx",73,0x087e5c05)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("name") , HX_CSTRING("player"),false);
					__result->Add(HX_CSTRING("texture") , __this->image,false);
					__result->Add(HX_CSTRING("pos") , _g1,false);
					__result->Add(HX_CSTRING("size") , _g2,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(73)
		Dynamic _g3 = _Function_1_1::Block(this,_g1,_g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(73)
		::luxe::Sprite _g4 = ::luxe::Sprite_obj::__new(_g3);		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(73)
		this->player = _g4;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Main_obj,create_player,(void))

Void Main_obj::update( Float delta){
{
		HX_STACK_FRAME("Main","update",0xb7afa57e,"Main.update","Main.hx",81,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_ARG(delta,"delta")
		HX_STACK_LINE(83)
		if (((this->player == null()))){
			HX_STACK_LINE(84)
			return null();
		}
		HX_STACK_LINE(87)
		if ((::Luxe_obj::input->inputdown(HX_CSTRING("left")))){
			HX_STACK_LINE(88)
			::phoenix::Vector _g = this->player->get_pos();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(88)
			{
				HX_STACK_LINE(88)
				Float _x = (_g->x - ((int)200 * delta));		HX_STACK_VAR(_x,"_x");
				HX_STACK_LINE(88)
				_g->x = _x;
				HX_STACK_LINE(88)
				if ((_g->_construct)){
					HX_STACK_LINE(88)
					_g->x;
				}
				else{
					HX_STACK_LINE(88)
					if (((bool((_g->listen_x != null())) && bool(!(_g->ignore_listeners))))){
						HX_STACK_LINE(88)
						_g->listen_x(_x);
					}
					HX_STACK_LINE(88)
					_g->x;
				}
			}
		}
		HX_STACK_LINE(90)
		if ((::Luxe_obj::input->inputdown(HX_CSTRING("right")))){
			HX_STACK_LINE(91)
			::phoenix::Vector _g = this->player->get_pos();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(91)
			{
				HX_STACK_LINE(91)
				Float _x = (_g->x + ((int)200 * delta));		HX_STACK_VAR(_x,"_x");
				HX_STACK_LINE(91)
				_g->x = _x;
				HX_STACK_LINE(91)
				if ((_g->_construct)){
					HX_STACK_LINE(91)
					_g->x;
				}
				else{
					HX_STACK_LINE(91)
					if (((bool((_g->listen_x != null())) && bool(!(_g->ignore_listeners))))){
						HX_STACK_LINE(91)
						_g->listen_x(_x);
					}
					HX_STACK_LINE(91)
					_g->x;
				}
			}
		}
	}
return null();
}


Void Main_obj::onkeyup( Dynamic event){
{
		HX_STACK_FRAME("Main","onkeyup",0x46406b26,"Main.onkeyup","Main.hx",97,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(97)
		if (((event->__Field(HX_CSTRING("keycode"),true) == ::snow::input::Keycodes_obj::escape))){
			HX_STACK_LINE(98)
			::Luxe_obj::shutdown();
		}
	}
return null();
}



Main_obj::Main_obj()
{
}

void Main_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Main);
	HX_MARK_MEMBER_NAME(player,"player");
	HX_MARK_MEMBER_NAME(image,"image");
	::luxe::Game_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Main_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(player,"player");
	HX_VISIT_MEMBER_NAME(image,"image");
	::luxe::Game_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Main_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"image") ) { return image; }
		if (HX_FIELD_EQ(inName,"ready") ) { return ready_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"player") ) { return player; }
		if (HX_FIELD_EQ(inName,"config") ) { return config_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"onkeyup") ) { return onkeyup_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"assets_loaded") ) { return assets_loaded_dyn(); }
		if (HX_FIELD_EQ(inName,"create_player") ) { return create_player_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Main_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"image") ) { image=inValue.Cast< ::phoenix::Texture >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"player") ) { player=inValue.Cast< ::luxe::Sprite >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Main_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("player"));
	outFields->push(HX_CSTRING("image"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::luxe::Sprite*/ ,(int)offsetof(Main_obj,player),HX_CSTRING("player")},
	{hx::fsObject /*::phoenix::Texture*/ ,(int)offsetof(Main_obj,image),HX_CSTRING("image")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("player"),
	HX_CSTRING("image"),
	HX_CSTRING("config"),
	HX_CSTRING("ready"),
	HX_CSTRING("assets_loaded"),
	HX_CSTRING("create_player"),
	HX_CSTRING("update"),
	HX_CSTRING("onkeyup"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Main_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Main_obj::__mClass,"__mClass");
};

#endif

Class Main_obj::__mClass;

void Main_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("Main"), hx::TCanCast< Main_obj> ,sStaticFields,sMemberFields,
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

void Main_obj::__boot()
{
}

