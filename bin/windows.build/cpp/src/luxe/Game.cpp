#include <hxcpp.h>

#ifndef INCLUDED_luxe_Core
#include <luxe/Core.h>
#endif
#ifndef INCLUDED_luxe_Emitter
#include <luxe/Emitter.h>
#endif
#ifndef INCLUDED_luxe_Game
#include <luxe/Game.h>
#endif
#ifndef INCLUDED_snow_App
#include <snow/App.h>
#endif
namespace luxe{

Void Game_obj::__construct()
{
HX_STACK_FRAME("luxe.Game","new",0x2070adbc,"luxe.Game.new","luxe/Game.hx",17,0xd577cf53)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(17)
	super::__construct();
}
;
	return null();
}

//Game_obj::~Game_obj() { }

Dynamic Game_obj::__CreateEmpty() { return  new Game_obj; }
hx::ObjectPtr< Game_obj > Game_obj::__new()
{  hx::ObjectPtr< Game_obj > result = new Game_obj();
	result->__construct();
	return result;}

Dynamic Game_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Game_obj > result = new Game_obj();
	result->__construct();
	return result;}

Dynamic Game_obj::config( Dynamic config){
	HX_STACK_FRAME("luxe.Game","config",0xf22d3ae6,"luxe.Game.config","luxe/Game.hx",22,0xd577cf53)
	HX_STACK_THIS(this)
	HX_STACK_ARG(config,"config")
	HX_STACK_LINE(22)
	return config;
}


HX_DEFINE_DYNAMIC_FUNC1(Game_obj,config,return )

Void Game_obj::ready( ){
{
		HX_STACK_FRAME("luxe.Game","ready",0xedce8cbf,"luxe.Game.ready","luxe/Game.hx",24,0xd577cf53)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Game_obj,ready,(void))

Void Game_obj::update( Float dt){
{
		HX_STACK_FRAME("luxe.Game","update",0xb1606a2d,"luxe.Game.update","luxe/Game.hx",26,0xd577cf53)
		HX_STACK_THIS(this)
		HX_STACK_ARG(dt,"dt")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Game_obj,update,(void))

Void Game_obj::onevent( Dynamic event){
{
		HX_STACK_FRAME("luxe.Game","onevent",0x5e01b1f7,"luxe.Game.onevent","luxe/Game.hx",29,0xd577cf53)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Game_obj,onevent,(void))

Void Game_obj::ondestroy( ){
{
		HX_STACK_FRAME("luxe.Game","ondestroy",0x45370817,"luxe.Game.ondestroy","luxe/Game.hx",32,0xd577cf53)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Game_obj,ondestroy,(void))

Void Game_obj::onprerender( ){
{
		HX_STACK_FRAME("luxe.Game","onprerender",0x8229a416,"luxe.Game.onprerender","luxe/Game.hx",35,0xd577cf53)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Game_obj,onprerender,(void))

Void Game_obj::onrender( ){
{
		HX_STACK_FRAME("luxe.Game","onrender",0x523922d9,"luxe.Game.onrender","luxe/Game.hx",37,0xd577cf53)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Game_obj,onrender,(void))

Void Game_obj::onpostrender( ){
{
		HX_STACK_FRAME("luxe.Game","onpostrender",0x6802acb9,"luxe.Game.onpostrender","luxe/Game.hx",39,0xd577cf53)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Game_obj,onpostrender,(void))

Void Game_obj::oninputdown( ::String _name,Dynamic e){
{
		HX_STACK_FRAME("luxe.Game","oninputdown",0x71b325c9,"luxe.Game.oninputdown","luxe/Game.hx",42,0xd577cf53)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_name,"_name")
		HX_STACK_ARG(e,"e")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Game_obj,oninputdown,(void))

Void Game_obj::oninputup( ::String _name,Dynamic e){
{
		HX_STACK_FRAME("luxe.Game","oninputup",0xf4cf9c02,"luxe.Game.oninputup","luxe/Game.hx",44,0xd577cf53)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_name,"_name")
		HX_STACK_ARG(e,"e")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Game_obj,oninputup,(void))

Void Game_obj::onmousedown( Dynamic event){
{
		HX_STACK_FRAME("luxe.Game","onmousedown",0x56dd2164,"luxe.Game.onmousedown","luxe/Game.hx",47,0xd577cf53)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Game_obj,onmousedown,(void))

Void Game_obj::onmouseup( Dynamic event){
{
		HX_STACK_FRAME("luxe.Game","onmouseup",0xe123eadd,"luxe.Game.onmouseup","luxe/Game.hx",49,0xd577cf53)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Game_obj,onmouseup,(void))

Void Game_obj::onmousewheel( Dynamic event){
{
		HX_STACK_FRAME("luxe.Game","onmousewheel",0x968eed59,"luxe.Game.onmousewheel","luxe/Game.hx",51,0xd577cf53)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Game_obj,onmousewheel,(void))

Void Game_obj::onmousemove( Dynamic event){
{
		HX_STACK_FRAME("luxe.Game","onmousemove",0x5cd00c13,"luxe.Game.onmousemove","luxe/Game.hx",53,0xd577cf53)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Game_obj,onmousemove,(void))

Void Game_obj::onkeydown( Dynamic event){
{
		HX_STACK_FRAME("luxe.Game","onkeydown",0xd21f189e,"luxe.Game.onkeydown","luxe/Game.hx",56,0xd577cf53)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Game_obj,onkeydown,(void))

Void Game_obj::onkeyup( Dynamic event){
{
		HX_STACK_FRAME("luxe.Game","onkeyup",0xc73bbf97,"luxe.Game.onkeyup","luxe/Game.hx",58,0xd577cf53)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Game_obj,onkeyup,(void))

Void Game_obj::ontextinput( Dynamic event){
{
		HX_STACK_FRAME("luxe.Game","ontextinput",0x16d1809a,"luxe.Game.ontextinput","luxe/Game.hx",60,0xd577cf53)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Game_obj,ontextinput,(void))

Void Game_obj::ontouchdown( Dynamic event){
{
		HX_STACK_FRAME("luxe.Game","ontouchdown",0x6ff4f7fe,"luxe.Game.ontouchdown","luxe/Game.hx",63,0xd577cf53)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Game_obj,ontouchdown,(void))

Void Game_obj::ontouchup( Dynamic event){
{
		HX_STACK_FRAME("luxe.Game","ontouchup",0xf9a906f7,"luxe.Game.ontouchup","luxe/Game.hx",65,0xd577cf53)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Game_obj,ontouchup,(void))

Void Game_obj::ontouchmove( Dynamic event){
{
		HX_STACK_FRAME("luxe.Game","ontouchmove",0x75e7e2ad,"luxe.Game.ontouchmove","luxe/Game.hx",67,0xd577cf53)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Game_obj,ontouchmove,(void))

Void Game_obj::ongamepadaxis( Dynamic event){
{
		HX_STACK_FRAME("luxe.Game","ongamepadaxis",0x924b8f5f,"luxe.Game.ongamepadaxis","luxe/Game.hx",70,0xd577cf53)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Game_obj,ongamepadaxis,(void))

Void Game_obj::ongamepaddown( Dynamic event){
{
		HX_STACK_FRAME("luxe.Game","ongamepaddown",0x94406b20,"luxe.Game.ongamepaddown","luxe/Game.hx",72,0xd577cf53)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Game_obj,ongamepaddown,(void))

Void Game_obj::ongamepadup( Dynamic event){
{
		HX_STACK_FRAME("luxe.Game","ongamepadup",0xb22c0d99,"luxe.Game.ongamepadup","luxe/Game.hx",74,0xd577cf53)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Game_obj,ongamepadup,(void))

Void Game_obj::ongamepaddevice( Dynamic event){
{
		HX_STACK_FRAME("luxe.Game","ongamepaddevice",0xb2dafad4,"luxe.Game.ongamepaddevice","luxe/Game.hx",76,0xd577cf53)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Game_obj,ongamepaddevice,(void))


Game_obj::Game_obj()
{
}

void Game_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Game);
	HX_MARK_MEMBER_NAME(app,"app");
	::luxe::Emitter_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Game_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(app,"app");
	::luxe::Emitter_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Game_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"app") ) { return app; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"ready") ) { return ready_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"config") ) { return config_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"onevent") ) { return onevent_dyn(); }
		if (HX_FIELD_EQ(inName,"onkeyup") ) { return onkeyup_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"onrender") ) { return onrender_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"ondestroy") ) { return ondestroy_dyn(); }
		if (HX_FIELD_EQ(inName,"oninputup") ) { return oninputup_dyn(); }
		if (HX_FIELD_EQ(inName,"onmouseup") ) { return onmouseup_dyn(); }
		if (HX_FIELD_EQ(inName,"onkeydown") ) { return onkeydown_dyn(); }
		if (HX_FIELD_EQ(inName,"ontouchup") ) { return ontouchup_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"onprerender") ) { return onprerender_dyn(); }
		if (HX_FIELD_EQ(inName,"oninputdown") ) { return oninputdown_dyn(); }
		if (HX_FIELD_EQ(inName,"onmousedown") ) { return onmousedown_dyn(); }
		if (HX_FIELD_EQ(inName,"onmousemove") ) { return onmousemove_dyn(); }
		if (HX_FIELD_EQ(inName,"ontextinput") ) { return ontextinput_dyn(); }
		if (HX_FIELD_EQ(inName,"ontouchdown") ) { return ontouchdown_dyn(); }
		if (HX_FIELD_EQ(inName,"ontouchmove") ) { return ontouchmove_dyn(); }
		if (HX_FIELD_EQ(inName,"ongamepadup") ) { return ongamepadup_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"onpostrender") ) { return onpostrender_dyn(); }
		if (HX_FIELD_EQ(inName,"onmousewheel") ) { return onmousewheel_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"ongamepadaxis") ) { return ongamepadaxis_dyn(); }
		if (HX_FIELD_EQ(inName,"ongamepaddown") ) { return ongamepaddown_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"ongamepaddevice") ) { return ongamepaddevice_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Game_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"app") ) { app=inValue.Cast< ::luxe::Core >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Game_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("app"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::luxe::Core*/ ,(int)offsetof(Game_obj,app),HX_CSTRING("app")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("app"),
	HX_CSTRING("config"),
	HX_CSTRING("ready"),
	HX_CSTRING("update"),
	HX_CSTRING("onevent"),
	HX_CSTRING("ondestroy"),
	HX_CSTRING("onprerender"),
	HX_CSTRING("onrender"),
	HX_CSTRING("onpostrender"),
	HX_CSTRING("oninputdown"),
	HX_CSTRING("oninputup"),
	HX_CSTRING("onmousedown"),
	HX_CSTRING("onmouseup"),
	HX_CSTRING("onmousewheel"),
	HX_CSTRING("onmousemove"),
	HX_CSTRING("onkeydown"),
	HX_CSTRING("onkeyup"),
	HX_CSTRING("ontextinput"),
	HX_CSTRING("ontouchdown"),
	HX_CSTRING("ontouchup"),
	HX_CSTRING("ontouchmove"),
	HX_CSTRING("ongamepadaxis"),
	HX_CSTRING("ongamepaddown"),
	HX_CSTRING("ongamepadup"),
	HX_CSTRING("ongamepaddevice"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Game_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Game_obj::__mClass,"__mClass");
};

#endif

Class Game_obj::__mClass;

void Game_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("luxe.Game"), hx::TCanCast< Game_obj> ,sStaticFields,sMemberFields,
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

void Game_obj::__boot()
{
}

} // end namespace luxe
