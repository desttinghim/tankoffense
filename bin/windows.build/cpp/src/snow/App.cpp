#include <hxcpp.h>

#ifndef INCLUDED_snow_App
#include <snow/App.h>
#endif
#ifndef INCLUDED_snow_CoreBinding
#include <snow/CoreBinding.h>
#endif
#ifndef INCLUDED_snow_Snow
#include <snow/Snow.h>
#endif
#ifndef INCLUDED_snow_platform_native_Core
#include <snow/platform/native/Core.h>
#endif
#ifndef INCLUDED_snow_utils_AbstractClass
#include <snow/utils/AbstractClass.h>
#endif
namespace snow{

Void App_obj::__construct()
{
HX_STACK_FRAME("snow.App","new",0x90aac908,"snow.App.new","snow/App.hx",11,0xf7b8a629)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(51)
	this->next_render = (int)0;
	HX_STACK_LINE(49)
	this->next_tick = (int)0;
	HX_STACK_LINE(44)
	this->alpha = 1.0;
	HX_STACK_LINE(42)
	this->cur_frame_start = 0.0;
	HX_STACK_LINE(40)
	this->current_time = (int)0;
	HX_STACK_LINE(38)
	this->last_frame_start = 0.0;
	HX_STACK_LINE(36)
	this->delta_sim = 0.016666666666666666;
	HX_STACK_LINE(34)
	this->delta_time = 0.016666666666666666;
	HX_STACK_LINE(29)
	this->max_frame_time = 0.25;
	HX_STACK_LINE(27)
	this->update_rate = (int)0;
	HX_STACK_LINE(25)
	this->render_rate = 0.016666666666666666;
	HX_STACK_LINE(23)
	this->fixed_delta = (int)0;
	HX_STACK_LINE(21)
	this->timescale = (int)1;
}
;
	return null();
}

//App_obj::~App_obj() { }

Dynamic App_obj::__CreateEmpty() { return  new App_obj; }
hx::ObjectPtr< App_obj > App_obj::__new()
{  hx::ObjectPtr< App_obj > result = new App_obj();
	result->__construct();
	return result;}

Dynamic App_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< App_obj > result = new App_obj();
	result->__construct();
	return result;}

Dynamic App_obj::config( Dynamic config){
	HX_STACK_FRAME("snow.App","config",0xed32371a,"snow.App.config","snow/App.hx",59,0xf7b8a629)
	HX_STACK_THIS(this)
	HX_STACK_ARG(config,"config")
	HX_STACK_LINE(59)
	return config;
}


HX_DEFINE_DYNAMIC_FUNC1(App_obj,config,return )

Void App_obj::ready( ){
{
		HX_STACK_FRAME("snow.App","ready",0x753f130b,"snow.App.ready","snow/App.hx",61,0xf7b8a629)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(App_obj,ready,(void))

Void App_obj::update( Float dt){
{
		HX_STACK_FRAME("snow.App","update",0xac656661,"snow.App.update","snow/App.hx",63,0xf7b8a629)
		HX_STACK_THIS(this)
		HX_STACK_ARG(dt,"dt")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(App_obj,update,(void))

Void App_obj::ondestroy( ){
{
		HX_STACK_FRAME("snow.App","ondestroy",0xb8d6a463,"snow.App.ondestroy","snow/App.hx",65,0xf7b8a629)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(App_obj,ondestroy,(void))

Void App_obj::onevent( Dynamic event){
{
		HX_STACK_FRAME("snow.App","onevent",0x07596343,"snow.App.onevent","snow/App.hx",67,0xf7b8a629)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(App_obj,onevent,(void))

Void App_obj::onkeydown( int keycode,int scancode,bool repeat,Dynamic mod,Float timestamp,int window_id){
{
		HX_STACK_FRAME("snow.App","onkeydown",0x45beb4ea,"snow.App.onkeydown","snow/App.hx",70,0xf7b8a629)
		HX_STACK_THIS(this)
		HX_STACK_ARG(keycode,"keycode")
		HX_STACK_ARG(scancode,"scancode")
		HX_STACK_ARG(repeat,"repeat")
		HX_STACK_ARG(mod,"mod")
		HX_STACK_ARG(timestamp,"timestamp")
		HX_STACK_ARG(window_id,"window_id")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC6(App_obj,onkeydown,(void))

Void App_obj::onkeyup( int keycode,int scancode,bool repeat,Dynamic mod,Float timestamp,int window_id){
{
		HX_STACK_FRAME("snow.App","onkeyup",0x709370e3,"snow.App.onkeyup","snow/App.hx",72,0xf7b8a629)
		HX_STACK_THIS(this)
		HX_STACK_ARG(keycode,"keycode")
		HX_STACK_ARG(scancode,"scancode")
		HX_STACK_ARG(repeat,"repeat")
		HX_STACK_ARG(mod,"mod")
		HX_STACK_ARG(timestamp,"timestamp")
		HX_STACK_ARG(window_id,"window_id")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC6(App_obj,onkeyup,(void))

Void App_obj::ontextinput( ::String text,int start,int length,int type,Float timestamp,int window_id){
{
		HX_STACK_FRAME("snow.App","ontextinput",0x66c9c7e6,"snow.App.ontextinput","snow/App.hx",74,0xf7b8a629)
		HX_STACK_THIS(this)
		HX_STACK_ARG(text,"text")
		HX_STACK_ARG(start,"start")
		HX_STACK_ARG(length,"length")
		HX_STACK_ARG(type,"type")
		HX_STACK_ARG(timestamp,"timestamp")
		HX_STACK_ARG(window_id,"window_id")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC6(App_obj,ontextinput,(void))

Void App_obj::onmousedown( int x,int y,int button,Float timestamp,int window_id){
{
		HX_STACK_FRAME("snow.App","onmousedown",0xa6d568b0,"snow.App.onmousedown","snow/App.hx",77,0xf7b8a629)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(button,"button")
		HX_STACK_ARG(timestamp,"timestamp")
		HX_STACK_ARG(window_id,"window_id")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(App_obj,onmousedown,(void))

Void App_obj::onmouseup( int x,int y,int button,Float timestamp,int window_id){
{
		HX_STACK_FRAME("snow.App","onmouseup",0x54c38729,"snow.App.onmouseup","snow/App.hx",79,0xf7b8a629)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(button,"button")
		HX_STACK_ARG(timestamp,"timestamp")
		HX_STACK_ARG(window_id,"window_id")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(App_obj,onmouseup,(void))

Void App_obj::onmousewheel( int x,int y,Float timestamp,int window_id){
{
		HX_STACK_FRAME("snow.App","onmousewheel",0x3fd5088d,"snow.App.onmousewheel","snow/App.hx",81,0xf7b8a629)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(timestamp,"timestamp")
		HX_STACK_ARG(window_id,"window_id")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(App_obj,onmousewheel,(void))

Void App_obj::onmousemove( int x,int y,int xrel,int yrel,Float timestamp,int window_id){
{
		HX_STACK_FRAME("snow.App","onmousemove",0xacc8535f,"snow.App.onmousemove","snow/App.hx",83,0xf7b8a629)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(xrel,"xrel")
		HX_STACK_ARG(yrel,"yrel")
		HX_STACK_ARG(timestamp,"timestamp")
		HX_STACK_ARG(window_id,"window_id")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC6(App_obj,onmousemove,(void))

Void App_obj::ontouchdown( Float x,Float y,int touch_id,Float timestamp){
{
		HX_STACK_FRAME("snow.App","ontouchdown",0xbfed3f4a,"snow.App.ontouchdown","snow/App.hx",86,0xf7b8a629)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(touch_id,"touch_id")
		HX_STACK_ARG(timestamp,"timestamp")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(App_obj,ontouchdown,(void))

Void App_obj::ontouchup( Float x,Float y,int touch_id,Float timestamp){
{
		HX_STACK_FRAME("snow.App","ontouchup",0x6d48a343,"snow.App.ontouchup","snow/App.hx",88,0xf7b8a629)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(touch_id,"touch_id")
		HX_STACK_ARG(timestamp,"timestamp")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(App_obj,ontouchup,(void))

Void App_obj::ontouchmove( Float x,Float y,Float dx,Float dy,int touch_id,Float timestamp){
{
		HX_STACK_FRAME("snow.App","ontouchmove",0xc5e029f9,"snow.App.ontouchmove","snow/App.hx",90,0xf7b8a629)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(dx,"dx")
		HX_STACK_ARG(dy,"dy")
		HX_STACK_ARG(touch_id,"touch_id")
		HX_STACK_ARG(timestamp,"timestamp")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC6(App_obj,ontouchmove,(void))

Void App_obj::ongamepadaxis( int gamepad,int axis,Float value,Float timestamp){
{
		HX_STACK_FRAME("snow.App","ongamepadaxis",0x065d41ab,"snow.App.ongamepadaxis","snow/App.hx",93,0xf7b8a629)
		HX_STACK_THIS(this)
		HX_STACK_ARG(gamepad,"gamepad")
		HX_STACK_ARG(axis,"axis")
		HX_STACK_ARG(value,"value")
		HX_STACK_ARG(timestamp,"timestamp")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(App_obj,ongamepadaxis,(void))

Void App_obj::ongamepaddown( int gamepad,int button,Float value,Float timestamp){
{
		HX_STACK_FRAME("snow.App","ongamepaddown",0x08521d6c,"snow.App.ongamepaddown","snow/App.hx",95,0xf7b8a629)
		HX_STACK_THIS(this)
		HX_STACK_ARG(gamepad,"gamepad")
		HX_STACK_ARG(button,"button")
		HX_STACK_ARG(value,"value")
		HX_STACK_ARG(timestamp,"timestamp")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(App_obj,ongamepaddown,(void))

Void App_obj::ongamepadup( int gamepad,int button,Float value,Float timestamp){
{
		HX_STACK_FRAME("snow.App","ongamepadup",0x022454e5,"snow.App.ongamepadup","snow/App.hx",97,0xf7b8a629)
		HX_STACK_THIS(this)
		HX_STACK_ARG(gamepad,"gamepad")
		HX_STACK_ARG(button,"button")
		HX_STACK_ARG(value,"value")
		HX_STACK_ARG(timestamp,"timestamp")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(App_obj,ongamepadup,(void))

Void App_obj::ongamepaddevice( int gamepad,int type,Float timestamp){
{
		HX_STACK_FRAME("snow.App","ongamepaddevice",0x9476d820,"snow.App.ongamepaddevice","snow/App.hx",99,0xf7b8a629)
		HX_STACK_THIS(this)
		HX_STACK_ARG(gamepad,"gamepad")
		HX_STACK_ARG(type,"type")
		HX_STACK_ARG(timestamp,"timestamp")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(App_obj,ongamepaddevice,(void))

Void App_obj::on_internal_init( ){
{
		HX_STACK_FRAME("snow.App","on_internal_init",0x4744ba8a,"snow.App.on_internal_init","snow/App.hx",108,0xf7b8a629)
		HX_STACK_THIS(this)
		HX_STACK_LINE(110)
		Float _g = ::snow::Snow_obj::core->timestamp();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(110)
		this->cur_frame_start = _g;
		HX_STACK_LINE(111)
		this->last_frame_start = this->cur_frame_start;
		HX_STACK_LINE(112)
		this->current_time = (int)0;
		HX_STACK_LINE(113)
		this->delta_time = 0.016;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(App_obj,on_internal_init,(void))

Void App_obj::on_internal_update( ){
{
		HX_STACK_FRAME("snow.App","on_internal_update",0x1d895803,"snow.App.on_internal_update","snow/App.hx",118,0xf7b8a629)
		HX_STACK_THIS(this)
		HX_STACK_LINE(120)
		if (((this->update_rate != (int)0))){
			HX_STACK_LINE(121)
			Float _g = ::snow::Snow_obj::core->timestamp();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(121)
			if (((this->next_tick < _g))){
				HX_STACK_LINE(123)
				Float _g1 = ::snow::Snow_obj::core->timestamp();		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(123)
				Float _g2 = (_g1 + this->update_rate);		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(123)
				this->next_tick = _g2;
			}
			else{
				HX_STACK_LINE(126)
				return null();
			}
		}
		HX_STACK_LINE(131)
		Float _g3 = ::snow::Snow_obj::core->timestamp();		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(131)
		this->cur_frame_start = _g3;
		HX_STACK_LINE(133)
		this->delta_time = (this->cur_frame_start - this->last_frame_start);
		HX_STACK_LINE(135)
		this->last_frame_start = this->cur_frame_start;
		HX_STACK_LINE(138)
		Float used_delta;		HX_STACK_VAR(used_delta,"used_delta");
		HX_STACK_LINE(138)
		if (((this->fixed_delta == (int)0))){
			HX_STACK_LINE(138)
			used_delta = this->delta_time;
		}
		else{
			HX_STACK_LINE(138)
			used_delta = this->fixed_delta;
		}
		HX_STACK_LINE(140)
		hx::MultEq(used_delta,this->timescale);
		HX_STACK_LINE(142)
		this->delta_sim = used_delta;
		HX_STACK_LINE(145)
		hx::AddEq(this->current_time,used_delta);
		HX_STACK_LINE(147)
		this->app->do_internal_update(used_delta);
		HX_STACK_LINE(150)
		if (((this->render_rate != (int)0))){
			HX_STACK_LINE(151)
			Float _g4 = ::snow::Snow_obj::core->timestamp();		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(151)
			if (((this->next_render < _g4))){
				HX_STACK_LINE(152)
				this->app->render();
				HX_STACK_LINE(153)
				hx::AddEq(this->next_render,this->render_rate);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(App_obj,on_internal_update,(void))


App_obj::App_obj()
{
}

void App_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(App);
	HX_MARK_MEMBER_NAME(app,"app");
	HX_MARK_MEMBER_NAME(timescale,"timescale");
	HX_MARK_MEMBER_NAME(fixed_delta,"fixed_delta");
	HX_MARK_MEMBER_NAME(render_rate,"render_rate");
	HX_MARK_MEMBER_NAME(update_rate,"update_rate");
	HX_MARK_MEMBER_NAME(max_frame_time,"max_frame_time");
	HX_MARK_MEMBER_NAME(delta_time,"delta_time");
	HX_MARK_MEMBER_NAME(delta_sim,"delta_sim");
	HX_MARK_MEMBER_NAME(last_frame_start,"last_frame_start");
	HX_MARK_MEMBER_NAME(current_time,"current_time");
	HX_MARK_MEMBER_NAME(cur_frame_start,"cur_frame_start");
	HX_MARK_MEMBER_NAME(alpha,"alpha");
	HX_MARK_MEMBER_NAME(next_tick,"next_tick");
	HX_MARK_MEMBER_NAME(next_render,"next_render");
	HX_MARK_END_CLASS();
}

void App_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(app,"app");
	HX_VISIT_MEMBER_NAME(timescale,"timescale");
	HX_VISIT_MEMBER_NAME(fixed_delta,"fixed_delta");
	HX_VISIT_MEMBER_NAME(render_rate,"render_rate");
	HX_VISIT_MEMBER_NAME(update_rate,"update_rate");
	HX_VISIT_MEMBER_NAME(max_frame_time,"max_frame_time");
	HX_VISIT_MEMBER_NAME(delta_time,"delta_time");
	HX_VISIT_MEMBER_NAME(delta_sim,"delta_sim");
	HX_VISIT_MEMBER_NAME(last_frame_start,"last_frame_start");
	HX_VISIT_MEMBER_NAME(current_time,"current_time");
	HX_VISIT_MEMBER_NAME(cur_frame_start,"cur_frame_start");
	HX_VISIT_MEMBER_NAME(alpha,"alpha");
	HX_VISIT_MEMBER_NAME(next_tick,"next_tick");
	HX_VISIT_MEMBER_NAME(next_render,"next_render");
}

Dynamic App_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"app") ) { return app; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"alpha") ) { return alpha; }
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
	case 9:
		if (HX_FIELD_EQ(inName,"timescale") ) { return timescale; }
		if (HX_FIELD_EQ(inName,"delta_sim") ) { return delta_sim; }
		if (HX_FIELD_EQ(inName,"next_tick") ) { return next_tick; }
		if (HX_FIELD_EQ(inName,"ondestroy") ) { return ondestroy_dyn(); }
		if (HX_FIELD_EQ(inName,"onkeydown") ) { return onkeydown_dyn(); }
		if (HX_FIELD_EQ(inName,"onmouseup") ) { return onmouseup_dyn(); }
		if (HX_FIELD_EQ(inName,"ontouchup") ) { return ontouchup_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"delta_time") ) { return delta_time; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"fixed_delta") ) { return fixed_delta; }
		if (HX_FIELD_EQ(inName,"render_rate") ) { return render_rate; }
		if (HX_FIELD_EQ(inName,"update_rate") ) { return update_rate; }
		if (HX_FIELD_EQ(inName,"next_render") ) { return next_render; }
		if (HX_FIELD_EQ(inName,"ontextinput") ) { return ontextinput_dyn(); }
		if (HX_FIELD_EQ(inName,"onmousedown") ) { return onmousedown_dyn(); }
		if (HX_FIELD_EQ(inName,"onmousemove") ) { return onmousemove_dyn(); }
		if (HX_FIELD_EQ(inName,"ontouchdown") ) { return ontouchdown_dyn(); }
		if (HX_FIELD_EQ(inName,"ontouchmove") ) { return ontouchmove_dyn(); }
		if (HX_FIELD_EQ(inName,"ongamepadup") ) { return ongamepadup_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"current_time") ) { return current_time; }
		if (HX_FIELD_EQ(inName,"onmousewheel") ) { return onmousewheel_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"ongamepadaxis") ) { return ongamepadaxis_dyn(); }
		if (HX_FIELD_EQ(inName,"ongamepaddown") ) { return ongamepaddown_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"max_frame_time") ) { return max_frame_time; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"cur_frame_start") ) { return cur_frame_start; }
		if (HX_FIELD_EQ(inName,"ongamepaddevice") ) { return ongamepaddevice_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"last_frame_start") ) { return last_frame_start; }
		if (HX_FIELD_EQ(inName,"on_internal_init") ) { return on_internal_init_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"on_internal_update") ) { return on_internal_update_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic App_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"app") ) { app=inValue.Cast< ::snow::Snow >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"alpha") ) { alpha=inValue.Cast< Float >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"timescale") ) { timescale=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"delta_sim") ) { delta_sim=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"next_tick") ) { next_tick=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"delta_time") ) { delta_time=inValue.Cast< Float >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"fixed_delta") ) { fixed_delta=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"render_rate") ) { render_rate=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"update_rate") ) { update_rate=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"next_render") ) { next_render=inValue.Cast< Float >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"current_time") ) { current_time=inValue.Cast< Float >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"max_frame_time") ) { max_frame_time=inValue.Cast< Float >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"cur_frame_start") ) { cur_frame_start=inValue.Cast< Float >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"last_frame_start") ) { last_frame_start=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void App_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("app"));
	outFields->push(HX_CSTRING("timescale"));
	outFields->push(HX_CSTRING("fixed_delta"));
	outFields->push(HX_CSTRING("render_rate"));
	outFields->push(HX_CSTRING("update_rate"));
	outFields->push(HX_CSTRING("max_frame_time"));
	outFields->push(HX_CSTRING("delta_time"));
	outFields->push(HX_CSTRING("delta_sim"));
	outFields->push(HX_CSTRING("last_frame_start"));
	outFields->push(HX_CSTRING("current_time"));
	outFields->push(HX_CSTRING("cur_frame_start"));
	outFields->push(HX_CSTRING("alpha"));
	outFields->push(HX_CSTRING("next_tick"));
	outFields->push(HX_CSTRING("next_render"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::snow::Snow*/ ,(int)offsetof(App_obj,app),HX_CSTRING("app")},
	{hx::fsFloat,(int)offsetof(App_obj,timescale),HX_CSTRING("timescale")},
	{hx::fsFloat,(int)offsetof(App_obj,fixed_delta),HX_CSTRING("fixed_delta")},
	{hx::fsFloat,(int)offsetof(App_obj,render_rate),HX_CSTRING("render_rate")},
	{hx::fsFloat,(int)offsetof(App_obj,update_rate),HX_CSTRING("update_rate")},
	{hx::fsFloat,(int)offsetof(App_obj,max_frame_time),HX_CSTRING("max_frame_time")},
	{hx::fsFloat,(int)offsetof(App_obj,delta_time),HX_CSTRING("delta_time")},
	{hx::fsFloat,(int)offsetof(App_obj,delta_sim),HX_CSTRING("delta_sim")},
	{hx::fsFloat,(int)offsetof(App_obj,last_frame_start),HX_CSTRING("last_frame_start")},
	{hx::fsFloat,(int)offsetof(App_obj,current_time),HX_CSTRING("current_time")},
	{hx::fsFloat,(int)offsetof(App_obj,cur_frame_start),HX_CSTRING("cur_frame_start")},
	{hx::fsFloat,(int)offsetof(App_obj,alpha),HX_CSTRING("alpha")},
	{hx::fsFloat,(int)offsetof(App_obj,next_tick),HX_CSTRING("next_tick")},
	{hx::fsFloat,(int)offsetof(App_obj,next_render),HX_CSTRING("next_render")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("app"),
	HX_CSTRING("timescale"),
	HX_CSTRING("fixed_delta"),
	HX_CSTRING("render_rate"),
	HX_CSTRING("update_rate"),
	HX_CSTRING("max_frame_time"),
	HX_CSTRING("delta_time"),
	HX_CSTRING("delta_sim"),
	HX_CSTRING("last_frame_start"),
	HX_CSTRING("current_time"),
	HX_CSTRING("cur_frame_start"),
	HX_CSTRING("alpha"),
	HX_CSTRING("next_tick"),
	HX_CSTRING("next_render"),
	HX_CSTRING("config"),
	HX_CSTRING("ready"),
	HX_CSTRING("update"),
	HX_CSTRING("ondestroy"),
	HX_CSTRING("onevent"),
	HX_CSTRING("onkeydown"),
	HX_CSTRING("onkeyup"),
	HX_CSTRING("ontextinput"),
	HX_CSTRING("onmousedown"),
	HX_CSTRING("onmouseup"),
	HX_CSTRING("onmousewheel"),
	HX_CSTRING("onmousemove"),
	HX_CSTRING("ontouchdown"),
	HX_CSTRING("ontouchup"),
	HX_CSTRING("ontouchmove"),
	HX_CSTRING("ongamepadaxis"),
	HX_CSTRING("ongamepaddown"),
	HX_CSTRING("ongamepadup"),
	HX_CSTRING("ongamepaddevice"),
	HX_CSTRING("on_internal_init"),
	HX_CSTRING("on_internal_update"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(App_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(App_obj::__mClass,"__mClass");
};

#endif

Class App_obj::__mClass;

void App_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("snow.App"), hx::TCanCast< App_obj> ,sStaticFields,sMemberFields,
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

void App_obj::__boot()
{
}

} // end namespace snow
