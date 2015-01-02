#include <hxcpp.h>

#ifndef INCLUDED_Luxe
#include <Luxe.h>
#endif
#ifndef INCLUDED_Main
#include <Main.h>
#endif
#ifndef INCLUDED_Object
#include <Object.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_luxe_Camera
#include <luxe/Camera.h>
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
#ifndef INCLUDED_phoenix_Rectangle
#include <phoenix/Rectangle.h>
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
	HX_STACK_LINE(31)
	this->enemySide = (int)2;
	HX_STACK_LINE(30)
	this->playerSide = (int)1;
	HX_STACK_LINE(29)
	this->enemyAttack = true;
	HX_STACK_LINE(27)
	this->rows = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(26)
	this->units = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(25)
	this->loaded = false;
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
	HX_STACK_FRAME("Main","config",0xf87c7637,"Main.config","Main.hx",33,0x087e5c05)
	HX_STACK_THIS(this)
	HX_STACK_ARG(config,"config")
	HX_STACK_LINE(35)
	if (((config->__Field(HX_CSTRING("runtime"),true)->__Field(HX_CSTRING("window"),true) != null()))){
		HX_STACK_LINE(36)
		if (((config->__Field(HX_CSTRING("runtime"),true)->__Field(HX_CSTRING("window"),true)->__Field(HX_CSTRING("width"),true) != null()))){
			HX_STACK_LINE(37)
			int _g = ::Std_obj::_int(config->__Field(HX_CSTRING("runtime"),true)->__Field(HX_CSTRING("window"),true)->__Field(HX_CSTRING("width"),true));		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(37)
			config->__Field(HX_CSTRING("window"),true)->__FieldRef(HX_CSTRING("width")) = _g;
		}
		HX_STACK_LINE(39)
		if (((config->__Field(HX_CSTRING("runtime"),true)->__Field(HX_CSTRING("window"),true)->__Field(HX_CSTRING("height"),true) != null()))){
			HX_STACK_LINE(40)
			int _g1 = ::Std_obj::_int(config->__Field(HX_CSTRING("runtime"),true)->__Field(HX_CSTRING("window"),true)->__Field(HX_CSTRING("height"),true));		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(40)
			config->__Field(HX_CSTRING("window"),true)->__FieldRef(HX_CSTRING("height")) = _g1;
		}
	}
	HX_STACK_LINE(44)
	config->__Field(HX_CSTRING("window"),true)->__FieldRef(HX_CSTRING("title")) = HX_CSTRING("Tank Offense");
	HX_STACK_LINE(46)
	return config;
}


Void Main_obj::ready( ){
{
		HX_STACK_FRAME("Main","ready",0x62ede68e,"Main.ready","Main.hx",49,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_LINE(51)
		::luxe::resource::JSONResource json_asset = ::Luxe_obj::loadJSON(HX_CSTRING("assets/parcel.json"),null(),null());		HX_STACK_VAR(json_asset,"json_asset");
		HX_STACK_LINE(53)
		::luxe::Parcel preload = ::luxe::Parcel_obj::__new(null());		HX_STACK_VAR(preload,"preload");
		HX_STACK_LINE(54)
		preload->from_json(json_asset->json);
		HX_STACK_LINE(58)
		::phoenix::Color _g = ::phoenix::Color_obj::__new((int)1,(int)1,(int)1,0.85);		HX_STACK_VAR(_g,"_g");
		struct _Function_1_1{
			inline static Dynamic Block( hx::ObjectPtr< ::Main_obj > __this,::phoenix::Color &_g,::luxe::Parcel &preload){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Main.hx",56,0x087e5c05)
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
		HX_STACK_LINE(56)
		Dynamic _g1 = _Function_1_1::Block(this,_g,preload);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(56)
		::luxe::ParcelProgress_obj::__new(_g1);
		HX_STACK_LINE(62)
		preload->load();
	}
return null();
}


Void Main_obj::assets_loaded( ::luxe::Parcel _){
{
		HX_STACK_FRAME("Main","assets_loaded",0x9ea260ac,"Main.assets_loaded","Main.hx",66,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_,"_")
		HX_STACK_LINE(67)
		::haxe::Log_obj::trace(HX_CSTRING("Assets have been loaded."),hx::SourceInfo(HX_CSTRING("Main.hx"),67,HX_CSTRING("Main"),HX_CSTRING("assets_loaded")));
		HX_STACK_LINE(69)
		::phoenix::Texture _g = ::Luxe_obj::loadTexture(HX_CSTRING("assets/testingsquare.png"),null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(69)
		this->image = _g;
		HX_STACK_LINE(70)
		this->image->set_filter(::phoenix::FilterType_obj::nearest);
		HX_STACK_LINE(72)
		::Luxe_obj::input->bind_mouse(HX_CSTRING("select"),(int)1);
		HX_STACK_LINE(73)
		::Luxe_obj::input->bind_mouse(HX_CSTRING("pan"),(int)3);
		HX_STACK_LINE(75)
		{
			HX_STACK_LINE(75)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(75)
			while((true)){
				HX_STACK_LINE(75)
				if ((!(((_g1 < (int)3))))){
					HX_STACK_LINE(75)
					break;
				}
				HX_STACK_LINE(75)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(76)
				this->rows[i] = ::phoenix::Rectangle_obj::__new((int)0,(Float((::Luxe_obj::get_screen()->h * i)) / Float((int)3)),::Luxe_obj::get_screen()->w,(Float(::Luxe_obj::get_screen()->h) / Float((int)3)));
			}
		}
		HX_STACK_LINE(79)
		this->gameFieldWidth = (::Luxe_obj::get_screen()->h * (int)5);
		HX_STACK_LINE(81)
		::phoenix::Rectangle _g1 = ::phoenix::Rectangle_obj::__new((int)0,(int)0,this->gameFieldWidth,::Luxe_obj::get_screen()->h);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(81)
		::Luxe_obj::camera->bounds = _g1;
		HX_STACK_LINE(83)
		this->loaded = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Main_obj,assets_loaded,(void))

Void Main_obj::create_unit( Float xpos,Float ypos,Float speed,Dynamic side){
{
		HX_STACK_FRAME("Main","create_unit",0x960f6652,"Main.create_unit","Main.hx",86,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_ARG(xpos,"xpos")
		HX_STACK_ARG(ypos,"ypos")
		HX_STACK_ARG(speed,"speed")
		HX_STACK_ARG(side,"side")
		HX_STACK_LINE(87)
		::haxe::Log_obj::trace(HX_CSTRING("Unit created."),hx::SourceInfo(HX_CSTRING("Main.hx"),87,HX_CSTRING("Main"),HX_CSTRING("create_unit")));
		HX_STACK_LINE(88)
		int unitNum = this->units->length;		HX_STACK_VAR(unitNum,"unitNum");
		HX_STACK_LINE(93)
		::phoenix::Vector _g = ::phoenix::Vector_obj::__new(xpos,ypos,null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(94)
		::phoenix::Vector _g1 = ::phoenix::Vector_obj::__new((int)64,(int)64,null(),null());		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(95)
		::phoenix::Vector _g2 = ::phoenix::Vector_obj::__new((int)0,speed,null(),null());		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(96)
		::phoenix::Rectangle _g3 = ::phoenix::Rectangle_obj::__new((int)0,(int)0,(int)64,(int)64);		HX_STACK_VAR(_g3,"_g3");
		struct _Function_1_1{
			inline static Dynamic Block( hx::ObjectPtr< ::Main_obj > __this,::phoenix::Vector &_g1,::phoenix::Vector &_g,int &unitNum,::phoenix::Vector &_g2,::phoenix::Rectangle &_g3,Dynamic &side){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Main.hx",90,0x087e5c05)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("name") , (HX_CSTRING("unit") + unitNum),false);
					__result->Add(HX_CSTRING("texture") , __this->image,false);
					__result->Add(HX_CSTRING("pos") , _g,false);
					__result->Add(HX_CSTRING("size") , _g1,false);
					__result->Add(HX_CSTRING("movement") , _g2,false);
					__result->Add(HX_CSTRING("hitbox") , _g3,false);
					__result->Add(HX_CSTRING("side") , side,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(90)
		Dynamic _g4 = _Function_1_1::Block(this,_g1,_g,unitNum,_g2,_g3,side);		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(90)
		::Object _g5 = ::Object_obj::__new(_g4);		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(90)
		this->units->push(_g5);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Main_obj,create_unit,(void))

Void Main_obj::update( Float delta){
{
		HX_STACK_FRAME("Main","update",0xb7afa57e,"Main.update","Main.hx",109,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_ARG(delta,"delta")
		HX_STACK_LINE(111)
		if ((!(this->loaded))){
			HX_STACK_LINE(111)
			return null();
		}
		HX_STACK_LINE(114)
		if ((::Luxe_obj::input->inputreleased(HX_CSTRING("select")))){
			HX_STACK_LINE(115)
			if ((this->rows->__get((int)0).StaticCast< ::phoenix::Rectangle >()->point_inside(::Luxe_obj::mouse))){
				HX_STACK_LINE(116)
				this->create_unit((int)0,(this->rows->__get((int)0).StaticCast< ::phoenix::Rectangle >()->y + (Float(this->rows->__get((int)0).StaticCast< ::phoenix::Rectangle >()->h) / Float((int)2))),(int)200,this->playerSide);
			}
			else{
				HX_STACK_LINE(117)
				if ((this->rows->__get((int)1).StaticCast< ::phoenix::Rectangle >()->point_inside(::Luxe_obj::mouse))){
					HX_STACK_LINE(118)
					this->create_unit((int)0,(this->rows->__get((int)1).StaticCast< ::phoenix::Rectangle >()->y + (Float(this->rows->__get((int)1).StaticCast< ::phoenix::Rectangle >()->h) / Float((int)2))),(int)200,this->playerSide);
				}
				else{
					HX_STACK_LINE(119)
					if ((this->rows->__get((int)2).StaticCast< ::phoenix::Rectangle >()->point_inside(::Luxe_obj::mouse))){
						HX_STACK_LINE(120)
						this->create_unit((int)0,(this->rows->__get((int)2).StaticCast< ::phoenix::Rectangle >()->y + (Float(this->rows->__get((int)2).StaticCast< ::phoenix::Rectangle >()->h) / Float((int)2))),(int)200,this->playerSide);
					}
				}
			}
		}
		HX_STACK_LINE(124)
		if ((::Luxe_obj::input->inputpressed(HX_CSTRING("pan")))){
			HX_STACK_LINE(125)
			::haxe::Log_obj::trace(HX_CSTRING("Panning"),hx::SourceInfo(HX_CSTRING("Main.hx"),125,HX_CSTRING("Main"),HX_CSTRING("update")));
		}
		HX_STACK_LINE(128)
		if ((this->enemyAttack)){
			HX_STACK_LINE(129)
			Float _g = ::Math_obj::random();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(129)
			Float _g1 = (_g * (int)3);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(129)
			int rand = ::Math_obj::floor(_g1);		HX_STACK_VAR(rand,"rand");
			HX_STACK_LINE(130)
			this->create_unit(this->gameFieldWidth,(this->rows->__get(rand).StaticCast< ::phoenix::Rectangle >()->y + (Float(this->rows->__get(rand).StaticCast< ::phoenix::Rectangle >()->h) / Float((int)2))),(int)-200,this->enemySide);
			HX_STACK_LINE(131)
			this->enemyAttack = false;
		}
	}
return null();
}


Void Main_obj::onkeyup( Dynamic event){
{
		HX_STACK_FRAME("Main","onkeyup",0x46406b26,"Main.onkeyup","Main.hx",138,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(138)
		if (((event->__Field(HX_CSTRING("keycode"),true) == ::snow::input::Keycodes_obj::escape))){
			HX_STACK_LINE(139)
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
	HX_MARK_MEMBER_NAME(image,"image");
	HX_MARK_MEMBER_NAME(loaded,"loaded");
	HX_MARK_MEMBER_NAME(units,"units");
	HX_MARK_MEMBER_NAME(rows,"rows");
	HX_MARK_MEMBER_NAME(gameFieldWidth,"gameFieldWidth");
	HX_MARK_MEMBER_NAME(enemyAttack,"enemyAttack");
	HX_MARK_MEMBER_NAME(playerSide,"playerSide");
	HX_MARK_MEMBER_NAME(enemySide,"enemySide");
	::luxe::Game_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Main_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(image,"image");
	HX_VISIT_MEMBER_NAME(loaded,"loaded");
	HX_VISIT_MEMBER_NAME(units,"units");
	HX_VISIT_MEMBER_NAME(rows,"rows");
	HX_VISIT_MEMBER_NAME(gameFieldWidth,"gameFieldWidth");
	HX_VISIT_MEMBER_NAME(enemyAttack,"enemyAttack");
	HX_VISIT_MEMBER_NAME(playerSide,"playerSide");
	HX_VISIT_MEMBER_NAME(enemySide,"enemySide");
	::luxe::Game_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Main_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"rows") ) { return rows; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"image") ) { return image; }
		if (HX_FIELD_EQ(inName,"units") ) { return units; }
		if (HX_FIELD_EQ(inName,"ready") ) { return ready_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"loaded") ) { return loaded; }
		if (HX_FIELD_EQ(inName,"config") ) { return config_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"onkeyup") ) { return onkeyup_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"enemySide") ) { return enemySide; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"playerSide") ) { return playerSide; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"enemyAttack") ) { return enemyAttack; }
		if (HX_FIELD_EQ(inName,"create_unit") ) { return create_unit_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"assets_loaded") ) { return assets_loaded_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"gameFieldWidth") ) { return gameFieldWidth; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Main_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"rows") ) { rows=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"image") ) { image=inValue.Cast< ::phoenix::Texture >(); return inValue; }
		if (HX_FIELD_EQ(inName,"units") ) { units=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"loaded") ) { loaded=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"enemySide") ) { enemySide=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"playerSide") ) { playerSide=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"enemyAttack") ) { enemyAttack=inValue.Cast< bool >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"gameFieldWidth") ) { gameFieldWidth=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Main_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("image"));
	outFields->push(HX_CSTRING("loaded"));
	outFields->push(HX_CSTRING("units"));
	outFields->push(HX_CSTRING("rows"));
	outFields->push(HX_CSTRING("gameFieldWidth"));
	outFields->push(HX_CSTRING("enemyAttack"));
	outFields->push(HX_CSTRING("playerSide"));
	outFields->push(HX_CSTRING("enemySide"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::phoenix::Texture*/ ,(int)offsetof(Main_obj,image),HX_CSTRING("image")},
	{hx::fsBool,(int)offsetof(Main_obj,loaded),HX_CSTRING("loaded")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Main_obj,units),HX_CSTRING("units")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Main_obj,rows),HX_CSTRING("rows")},
	{hx::fsFloat,(int)offsetof(Main_obj,gameFieldWidth),HX_CSTRING("gameFieldWidth")},
	{hx::fsBool,(int)offsetof(Main_obj,enemyAttack),HX_CSTRING("enemyAttack")},
	{hx::fsInt,(int)offsetof(Main_obj,playerSide),HX_CSTRING("playerSide")},
	{hx::fsInt,(int)offsetof(Main_obj,enemySide),HX_CSTRING("enemySide")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("image"),
	HX_CSTRING("loaded"),
	HX_CSTRING("units"),
	HX_CSTRING("rows"),
	HX_CSTRING("gameFieldWidth"),
	HX_CSTRING("enemyAttack"),
	HX_CSTRING("playerSide"),
	HX_CSTRING("enemySide"),
	HX_CSTRING("config"),
	HX_CSTRING("ready"),
	HX_CSTRING("assets_loaded"),
	HX_CSTRING("create_unit"),
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

