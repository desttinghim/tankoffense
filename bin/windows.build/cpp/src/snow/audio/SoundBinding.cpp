#include <hxcpp.h>

#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_snow_audio_Audio
#include <snow/audio/Audio.h>
#endif
#ifndef INCLUDED_snow_audio_SoundBinding
#include <snow/audio/SoundBinding.h>
#endif
#ifndef INCLUDED_snow_platform_native_audio_Sound
#include <snow/platform/native/audio/Sound.h>
#endif
#ifndef INCLUDED_snow_platform_native_audio_openal_Sound
#include <snow/platform/native/audio/openal/Sound.h>
#endif
namespace snow{
namespace audio{

Void SoundBinding_obj::__construct(::snow::audio::Audio _manager,::String _name)
{
HX_STACK_FRAME("snow.audio.SoundBinding","new",0x58bc516b,"snow.audio.SoundBinding.new","snow/audio/Sound.hx",41,0x219c5e54)
HX_STACK_THIS(this)
HX_STACK_ARG(_manager,"_manager")
HX_STACK_ARG(_name,"_name")
{
	HX_STACK_LINE(70)
	this->duration = 0.0;
	HX_STACK_LINE(68)
	this->position = 0.0;
	HX_STACK_LINE(66)
	this->looping = false;
	HX_STACK_LINE(64)
	this->pan = 0.0;
	HX_STACK_LINE(62)
	this->volume = 1.0;
	HX_STACK_LINE(60)
	this->pitch = 1.0;
	HX_STACK_LINE(55)
	this->is_stream = false;
	HX_STACK_LINE(53)
	this->loaded = false;
	HX_STACK_LINE(51)
	this->paused = false;
	HX_STACK_LINE(49)
	this->playing = false;
	HX_STACK_LINE(46)
	this->name = HX_CSTRING("");
	HX_STACK_LINE(113)
	this->name = _name;
	HX_STACK_LINE(114)
	this->manager = _manager;
	HX_STACK_LINE(115)
	this->onload_list = Dynamic( Array_obj<Dynamic>::__new());
	HX_STACK_LINE(116)
	this->onend_list = Dynamic( Array_obj<Dynamic>::__new());
}
;
	return null();
}

//SoundBinding_obj::~SoundBinding_obj() { }

Dynamic SoundBinding_obj::__CreateEmpty() { return  new SoundBinding_obj; }
hx::ObjectPtr< SoundBinding_obj > SoundBinding_obj::__new(::snow::audio::Audio _manager,::String _name)
{  hx::ObjectPtr< SoundBinding_obj > result = new SoundBinding_obj();
	result->__construct(_manager,_name);
	return result;}

Dynamic SoundBinding_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< SoundBinding_obj > result = new SoundBinding_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

Void SoundBinding_obj::emit( ::String _event){
{
		HX_STACK_FRAME("snow.audio.SoundBinding","emit",0x461e06e8,"snow.audio.SoundBinding.emit","snow/audio/Sound.hx",74,0x219c5e54)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_event,"_event")
		HX_STACK_LINE(74)
		::String _switch_1 = (_event);
		if (  ( _switch_1==HX_CSTRING("end"))){
			HX_STACK_LINE(76)
			this->do_onend();
		}
		else if (  ( _switch_1==HX_CSTRING("load"))){
			HX_STACK_LINE(78)
			this->do_onload();
		}
		else  {
			HX_STACK_LINE(80)
			::haxe::Log_obj::trace((HX_CSTRING("    i / sound / ") + (((HX_CSTRING("no event {") + _event) + HX_CSTRING("}")))),hx::SourceInfo(HX_CSTRING("Sound.hx"),80,HX_CSTRING("snow.audio.SoundBinding"),HX_CSTRING("emit")));
		}
;
;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(SoundBinding_obj,emit,(void))

Void SoundBinding_obj::on( ::String _event,Dynamic _handler){
{
		HX_STACK_FRAME("snow.audio.SoundBinding","on",0x39cc0a74,"snow.audio.SoundBinding.on","snow/audio/Sound.hx",85,0x219c5e54)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_event,"_event")
		HX_STACK_ARG(_handler,"_handler")
		HX_STACK_LINE(85)
		::String _switch_2 = (_event);
		if (  ( _switch_2==HX_CSTRING("end"))){
			HX_STACK_LINE(87)
			this->onend_list->__Field(HX_CSTRING("push"),true)(_handler);
		}
		else if (  ( _switch_2==HX_CSTRING("load"))){
			HX_STACK_LINE(89)
			this->add_onload(_handler);
		}
		else  {
			HX_STACK_LINE(91)
			::haxe::Log_obj::trace((HX_CSTRING("    i / sound / ") + (((HX_CSTRING("no event {") + _event) + HX_CSTRING("}")))),hx::SourceInfo(HX_CSTRING("Sound.hx"),91,HX_CSTRING("snow.audio.SoundBinding"),HX_CSTRING("on")));
		}
;
;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(SoundBinding_obj,on,(void))

Void SoundBinding_obj::off( ::String _event,Dynamic _handler){
{
		HX_STACK_FRAME("snow.audio.SoundBinding","off",0x58bd147a,"snow.audio.SoundBinding.off","snow/audio/Sound.hx",96,0x219c5e54)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_event,"_event")
		HX_STACK_ARG(_handler,"_handler")
		HX_STACK_LINE(96)
		::String _switch_3 = (_event);
		if (  ( _switch_3==HX_CSTRING("end"))){
			HX_STACK_LINE(98)
			this->onend_list->__Field(HX_CSTRING("remove"),true)(_handler);
		}
		else if (  ( _switch_3==HX_CSTRING("load"))){
			HX_STACK_LINE(100)
			this->onload_list->__Field(HX_CSTRING("remove"),true)(_handler);
		}
		else  {
			HX_STACK_LINE(102)
			::haxe::Log_obj::trace((HX_CSTRING("    i / sound / ") + (((HX_CSTRING("no event {") + _event) + HX_CSTRING("}")))),hx::SourceInfo(HX_CSTRING("Sound.hx"),102,HX_CSTRING("snow.audio.SoundBinding"),HX_CSTRING("off")));
		}
;
;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(SoundBinding_obj,off,(void))

Void SoundBinding_obj::play( ){
{
		HX_STACK_FRAME("snow.audio.SoundBinding","play",0x4d629689,"snow.audio.SoundBinding.play","snow/audio/Sound.hx",123,0x219c5e54)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(SoundBinding_obj,play,(void))

Void SoundBinding_obj::loop( ){
{
		HX_STACK_FRAME("snow.audio.SoundBinding","loop",0x4ac00ef9,"snow.audio.SoundBinding.loop","snow/audio/Sound.hx",125,0x219c5e54)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(SoundBinding_obj,loop,(void))

Void SoundBinding_obj::stop( ){
{
		HX_STACK_FRAME("snow.audio.SoundBinding","stop",0x4f645897,"snow.audio.SoundBinding.stop","snow/audio/Sound.hx",127,0x219c5e54)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(SoundBinding_obj,stop,(void))

Void SoundBinding_obj::pause( ){
{
		HX_STACK_FRAME("snow.audio.SoundBinding","pause",0x61aaf0c1,"snow.audio.SoundBinding.pause","snow/audio/Sound.hx",129,0x219c5e54)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(SoundBinding_obj,pause,(void))

Void SoundBinding_obj::destroy( ){
{
		HX_STACK_FRAME("snow.audio.SoundBinding","destroy",0xd72b8f85,"snow.audio.SoundBinding.destroy","snow/audio/Sound.hx",131,0x219c5e54)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(SoundBinding_obj,destroy,(void))

Void SoundBinding_obj::internal_update( ){
{
		HX_STACK_FRAME("snow.audio.SoundBinding","internal_update",0xa7a1a796,"snow.audio.SoundBinding.internal_update","snow/audio/Sound.hx",135,0x219c5e54)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(SoundBinding_obj,internal_update,(void))

Void SoundBinding_obj::internal_play( ){
{
		HX_STACK_FRAME("snow.audio.SoundBinding","internal_play",0x1726e241,"snow.audio.SoundBinding.internal_play","snow/audio/Sound.hx",136,0x219c5e54)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(SoundBinding_obj,internal_play,(void))

Void SoundBinding_obj::internal_loop( ){
{
		HX_STACK_FRAME("snow.audio.SoundBinding","internal_loop",0x14845ab1,"snow.audio.SoundBinding.internal_loop","snow/audio/Sound.hx",137,0x219c5e54)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(SoundBinding_obj,internal_loop,(void))

Void SoundBinding_obj::internal_stop( ){
{
		HX_STACK_FRAME("snow.audio.SoundBinding","internal_stop",0x1928a44f,"snow.audio.SoundBinding.internal_stop","snow/audio/Sound.hx",138,0x219c5e54)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(SoundBinding_obj,internal_stop,(void))

Void SoundBinding_obj::internal_pause( ){
{
		HX_STACK_FRAME("snow.audio.SoundBinding","internal_pause",0x23a8e609,"snow.audio.SoundBinding.internal_pause","snow/audio/Sound.hx",139,0x219c5e54)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(SoundBinding_obj,internal_pause,(void))

Void SoundBinding_obj::toggle( ){
{
		HX_STACK_FRAME("snow.audio.SoundBinding","toggle",0xb3a73769,"snow.audio.SoundBinding.toggle","snow/audio/Sound.hx",144,0x219c5e54)
		HX_STACK_THIS(this)
		HX_STACK_LINE(146)
		this->playing = !(this->playing);
		HX_STACK_LINE(148)
		if ((this->playing)){
			HX_STACK_LINE(149)
			if ((this->get_looping())){
				HX_STACK_LINE(150)
				this->loop();
			}
			else{
				HX_STACK_LINE(152)
				this->play();
			}
		}
		else{
			HX_STACK_LINE(155)
			this->pause();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(SoundBinding_obj,toggle,(void))

Dynamic SoundBinding_obj::get_info( ){
	HX_STACK_FRAME("snow.audio.SoundBinding","get_info",0x6386cb0c,"snow.audio.SoundBinding.get_info","snow/audio/Sound.hx",163,0x219c5e54)
	HX_STACK_THIS(this)
	HX_STACK_LINE(163)
	return this->info;
}


HX_DEFINE_DYNAMIC_FUNC0(SoundBinding_obj,get_info,return )

Dynamic SoundBinding_obj::set_info( Dynamic _info){
	HX_STACK_FRAME("snow.audio.SoundBinding","set_info",0x11e42480,"snow.audio.SoundBinding.set_info","snow/audio/Sound.hx",167,0x219c5e54)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_info,"_info")
	HX_STACK_LINE(167)
	return this->info = _info;
}


HX_DEFINE_DYNAMIC_FUNC1(SoundBinding_obj,set_info,return )

Float SoundBinding_obj::get_pan( ){
	HX_STACK_FRAME("snow.audio.SoundBinding","get_pan",0xd96f7c7f,"snow.audio.SoundBinding.get_pan","snow/audio/Sound.hx",171,0x219c5e54)
	HX_STACK_THIS(this)
	HX_STACK_LINE(171)
	return this->pan;
}


HX_DEFINE_DYNAMIC_FUNC0(SoundBinding_obj,get_pan,return )

Float SoundBinding_obj::get_pitch( ){
	HX_STACK_FRAME("snow.audio.SoundBinding","get_pitch",0xb6f57362,"snow.audio.SoundBinding.get_pitch","snow/audio/Sound.hx",175,0x219c5e54)
	HX_STACK_THIS(this)
	HX_STACK_LINE(175)
	return this->pitch;
}


HX_DEFINE_DYNAMIC_FUNC0(SoundBinding_obj,get_pitch,return )

Float SoundBinding_obj::get_volume( ){
	HX_STACK_FRAME("snow.audio.SoundBinding","get_volume",0x351f1ff8,"snow.audio.SoundBinding.get_volume","snow/audio/Sound.hx",179,0x219c5e54)
	HX_STACK_THIS(this)
	HX_STACK_LINE(179)
	return this->volume;
}


HX_DEFINE_DYNAMIC_FUNC0(SoundBinding_obj,get_volume,return )

bool SoundBinding_obj::get_looping( ){
	HX_STACK_FRAME("snow.audio.SoundBinding","get_looping",0x5d28e120,"snow.audio.SoundBinding.get_looping","snow/audio/Sound.hx",183,0x219c5e54)
	HX_STACK_THIS(this)
	HX_STACK_LINE(183)
	return this->looping;
}


HX_DEFINE_DYNAMIC_FUNC0(SoundBinding_obj,get_looping,return )

Float SoundBinding_obj::get_position( ){
	HX_STACK_FRAME("snow.audio.SoundBinding","get_position",0xa446da47,"snow.audio.SoundBinding.get_position","snow/audio/Sound.hx",187,0x219c5e54)
	HX_STACK_THIS(this)
	HX_STACK_LINE(187)
	return this->position;
}


HX_DEFINE_DYNAMIC_FUNC0(SoundBinding_obj,get_position,return )

Float SoundBinding_obj::get_duration( ){
	HX_STACK_FRAME("snow.audio.SoundBinding","get_duration",0xedda48f2,"snow.audio.SoundBinding.get_duration","snow/audio/Sound.hx",192,0x219c5e54)
	HX_STACK_THIS(this)
	HX_STACK_LINE(192)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC0(SoundBinding_obj,get_duration,return )

Float SoundBinding_obj::set_pan( Float _pan){
	HX_STACK_FRAME("snow.audio.SoundBinding","set_pan",0xcc710d8b,"snow.audio.SoundBinding.set_pan","snow/audio/Sound.hx",196,0x219c5e54)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_pan,"_pan")
	HX_STACK_LINE(196)
	return this->pan = _pan;
}


HX_DEFINE_DYNAMIC_FUNC1(SoundBinding_obj,set_pan,return )

Float SoundBinding_obj::set_pitch( Float _pitch){
	HX_STACK_FRAME("snow.audio.SoundBinding","set_pitch",0x9a465f6e,"snow.audio.SoundBinding.set_pitch","snow/audio/Sound.hx",200,0x219c5e54)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_pitch,"_pitch")
	HX_STACK_LINE(200)
	return this->pitch = _pitch;
}


HX_DEFINE_DYNAMIC_FUNC1(SoundBinding_obj,set_pitch,return )

Float SoundBinding_obj::set_volume( Float _volume){
	HX_STACK_FRAME("snow.audio.SoundBinding","set_volume",0x389cbe6c,"snow.audio.SoundBinding.set_volume","snow/audio/Sound.hx",204,0x219c5e54)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_volume,"_volume")
	HX_STACK_LINE(204)
	return this->volume = _volume;
}


HX_DEFINE_DYNAMIC_FUNC1(SoundBinding_obj,set_volume,return )

Float SoundBinding_obj::set_position( Float _position){
	HX_STACK_FRAME("snow.audio.SoundBinding","set_position",0xb93ffdbb,"snow.audio.SoundBinding.set_position","snow/audio/Sound.hx",208,0x219c5e54)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_position,"_position")
	HX_STACK_LINE(208)
	return this->position = _position;
}


HX_DEFINE_DYNAMIC_FUNC1(SoundBinding_obj,set_position,return )

bool SoundBinding_obj::set_looping( bool _looping){
	HX_STACK_FRAME("snow.audio.SoundBinding","set_looping",0x6795e82c,"snow.audio.SoundBinding.set_looping","snow/audio/Sound.hx",212,0x219c5e54)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_looping,"_looping")
	HX_STACK_LINE(212)
	return this->looping = _looping;
}


HX_DEFINE_DYNAMIC_FUNC1(SoundBinding_obj,set_looping,return )

Void SoundBinding_obj::do_onload( ){
{
		HX_STACK_FRAME("snow.audio.SoundBinding","do_onload",0x51b76384,"snow.audio.SoundBinding.do_onload","snow/audio/Sound.hx",217,0x219c5e54)
		HX_STACK_THIS(this)
		HX_STACK_LINE(219)
		{
			HX_STACK_LINE(219)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(219)
			Dynamic _g1 = this->onload_list;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(219)
			while((true)){
				HX_STACK_LINE(219)
				if ((!(((_g < _g1->__Field(HX_CSTRING("length"),true)))))){
					HX_STACK_LINE(219)
					break;
				}
				HX_STACK_LINE(219)
				Dynamic _f = _g1->__GetItem(_g);		HX_STACK_VAR(_f,"_f");
				HX_STACK_LINE(219)
				++(_g);
				HX_STACK_LINE(220)
				_f(hx::ObjectPtr<OBJ_>(this)).Cast< Void >();
			}
		}
		HX_STACK_LINE(223)
		this->onload_list = null();
		HX_STACK_LINE(224)
		this->onload_list = Dynamic( Array_obj<Dynamic>::__new());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(SoundBinding_obj,do_onload,(void))

Void SoundBinding_obj::do_onend( ){
{
		HX_STACK_FRAME("snow.audio.SoundBinding","do_onend",0x2bf8103d,"snow.audio.SoundBinding.do_onend","snow/audio/Sound.hx",230,0x219c5e54)
		HX_STACK_THIS(this)
		HX_STACK_LINE(230)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(230)
		Dynamic _g1 = this->onend_list;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(230)
		while((true)){
			HX_STACK_LINE(230)
			if ((!(((_g < _g1->__Field(HX_CSTRING("length"),true)))))){
				HX_STACK_LINE(230)
				break;
			}
			HX_STACK_LINE(230)
			Dynamic _f = _g1->__GetItem(_g);		HX_STACK_VAR(_f,"_f");
			HX_STACK_LINE(230)
			++(_g);
			HX_STACK_LINE(231)
			_f(hx::ObjectPtr<OBJ_>(this)).Cast< Void >();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(SoundBinding_obj,do_onend,(void))

Dynamic SoundBinding_obj::add_onload( Dynamic _onload){
	HX_STACK_FRAME("snow.audio.SoundBinding","add_onload",0xed5d12b8,"snow.audio.SoundBinding.add_onload","snow/audio/Sound.hx",236,0x219c5e54)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_onload,"_onload")
	HX_STACK_LINE(239)
	if ((this->loaded)){
		HX_STACK_LINE(240)
		_onload(hx::ObjectPtr<OBJ_>(this)).Cast< Void >();
	}
	else{
		HX_STACK_LINE(242)
		this->onload_list->__Field(HX_CSTRING("push"),true)(_onload);
	}
	HX_STACK_LINE(245)
	return _onload;
}


HX_DEFINE_DYNAMIC_FUNC1(SoundBinding_obj,add_onload,return )


SoundBinding_obj::SoundBinding_obj()
{
}

void SoundBinding_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SoundBinding);
	HX_MARK_MEMBER_NAME(manager,"manager");
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(playing,"playing");
	HX_MARK_MEMBER_NAME(paused,"paused");
	HX_MARK_MEMBER_NAME(loaded,"loaded");
	HX_MARK_MEMBER_NAME(is_stream,"is_stream");
	HX_MARK_MEMBER_NAME(info,"info");
	HX_MARK_MEMBER_NAME(pitch,"pitch");
	HX_MARK_MEMBER_NAME(volume,"volume");
	HX_MARK_MEMBER_NAME(pan,"pan");
	HX_MARK_MEMBER_NAME(looping,"looping");
	HX_MARK_MEMBER_NAME(position,"position");
	HX_MARK_MEMBER_NAME(duration,"duration");
	HX_MARK_MEMBER_NAME(onload_list,"onload_list");
	HX_MARK_MEMBER_NAME(onend_list,"onend_list");
	HX_MARK_END_CLASS();
}

void SoundBinding_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(manager,"manager");
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(playing,"playing");
	HX_VISIT_MEMBER_NAME(paused,"paused");
	HX_VISIT_MEMBER_NAME(loaded,"loaded");
	HX_VISIT_MEMBER_NAME(is_stream,"is_stream");
	HX_VISIT_MEMBER_NAME(info,"info");
	HX_VISIT_MEMBER_NAME(pitch,"pitch");
	HX_VISIT_MEMBER_NAME(volume,"volume");
	HX_VISIT_MEMBER_NAME(pan,"pan");
	HX_VISIT_MEMBER_NAME(looping,"looping");
	HX_VISIT_MEMBER_NAME(position,"position");
	HX_VISIT_MEMBER_NAME(duration,"duration");
	HX_VISIT_MEMBER_NAME(onload_list,"onload_list");
	HX_VISIT_MEMBER_NAME(onend_list,"onend_list");
}

Dynamic SoundBinding_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"on") ) { return on_dyn(); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"pan") ) { return inCallProp ? get_pan() : pan; }
		if (HX_FIELD_EQ(inName,"off") ) { return off_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return name; }
		if (HX_FIELD_EQ(inName,"info") ) { return inCallProp ? get_info() : info; }
		if (HX_FIELD_EQ(inName,"emit") ) { return emit_dyn(); }
		if (HX_FIELD_EQ(inName,"play") ) { return play_dyn(); }
		if (HX_FIELD_EQ(inName,"loop") ) { return loop_dyn(); }
		if (HX_FIELD_EQ(inName,"stop") ) { return stop_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"pitch") ) { return inCallProp ? get_pitch() : pitch; }
		if (HX_FIELD_EQ(inName,"pause") ) { return pause_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"paused") ) { return paused; }
		if (HX_FIELD_EQ(inName,"loaded") ) { return loaded; }
		if (HX_FIELD_EQ(inName,"volume") ) { return inCallProp ? get_volume() : volume; }
		if (HX_FIELD_EQ(inName,"toggle") ) { return toggle_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"manager") ) { return manager; }
		if (HX_FIELD_EQ(inName,"playing") ) { return playing; }
		if (HX_FIELD_EQ(inName,"looping") ) { return inCallProp ? get_looping() : looping; }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"get_pan") ) { return get_pan_dyn(); }
		if (HX_FIELD_EQ(inName,"set_pan") ) { return set_pan_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"position") ) { return inCallProp ? get_position() : position; }
		if (HX_FIELD_EQ(inName,"duration") ) { return inCallProp ? get_duration() : duration; }
		if (HX_FIELD_EQ(inName,"get_info") ) { return get_info_dyn(); }
		if (HX_FIELD_EQ(inName,"set_info") ) { return set_info_dyn(); }
		if (HX_FIELD_EQ(inName,"do_onend") ) { return do_onend_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"is_stream") ) { return is_stream; }
		if (HX_FIELD_EQ(inName,"get_pitch") ) { return get_pitch_dyn(); }
		if (HX_FIELD_EQ(inName,"set_pitch") ) { return set_pitch_dyn(); }
		if (HX_FIELD_EQ(inName,"do_onload") ) { return do_onload_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"onend_list") ) { return onend_list; }
		if (HX_FIELD_EQ(inName,"get_volume") ) { return get_volume_dyn(); }
		if (HX_FIELD_EQ(inName,"set_volume") ) { return set_volume_dyn(); }
		if (HX_FIELD_EQ(inName,"add_onload") ) { return add_onload_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"onload_list") ) { return onload_list; }
		if (HX_FIELD_EQ(inName,"get_looping") ) { return get_looping_dyn(); }
		if (HX_FIELD_EQ(inName,"set_looping") ) { return set_looping_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_position") ) { return get_position_dyn(); }
		if (HX_FIELD_EQ(inName,"get_duration") ) { return get_duration_dyn(); }
		if (HX_FIELD_EQ(inName,"set_position") ) { return set_position_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"internal_play") ) { return internal_play_dyn(); }
		if (HX_FIELD_EQ(inName,"internal_loop") ) { return internal_loop_dyn(); }
		if (HX_FIELD_EQ(inName,"internal_stop") ) { return internal_stop_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"internal_pause") ) { return internal_pause_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"internal_update") ) { return internal_update_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic SoundBinding_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"pan") ) { if (inCallProp) return set_pan(inValue);pan=inValue.Cast< Float >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"info") ) { if (inCallProp) return set_info(inValue);info=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"pitch") ) { if (inCallProp) return set_pitch(inValue);pitch=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"paused") ) { paused=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"loaded") ) { loaded=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"volume") ) { if (inCallProp) return set_volume(inValue);volume=inValue.Cast< Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"manager") ) { manager=inValue.Cast< ::snow::audio::Audio >(); return inValue; }
		if (HX_FIELD_EQ(inName,"playing") ) { playing=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"looping") ) { if (inCallProp) return set_looping(inValue);looping=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"position") ) { if (inCallProp) return set_position(inValue);position=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"duration") ) { duration=inValue.Cast< Float >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"is_stream") ) { is_stream=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"onend_list") ) { onend_list=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"onload_list") ) { onload_list=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void SoundBinding_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("manager"));
	outFields->push(HX_CSTRING("name"));
	outFields->push(HX_CSTRING("playing"));
	outFields->push(HX_CSTRING("paused"));
	outFields->push(HX_CSTRING("loaded"));
	outFields->push(HX_CSTRING("is_stream"));
	outFields->push(HX_CSTRING("info"));
	outFields->push(HX_CSTRING("pitch"));
	outFields->push(HX_CSTRING("volume"));
	outFields->push(HX_CSTRING("pan"));
	outFields->push(HX_CSTRING("looping"));
	outFields->push(HX_CSTRING("position"));
	outFields->push(HX_CSTRING("duration"));
	outFields->push(HX_CSTRING("onload_list"));
	outFields->push(HX_CSTRING("onend_list"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::snow::audio::Audio*/ ,(int)offsetof(SoundBinding_obj,manager),HX_CSTRING("manager")},
	{hx::fsString,(int)offsetof(SoundBinding_obj,name),HX_CSTRING("name")},
	{hx::fsBool,(int)offsetof(SoundBinding_obj,playing),HX_CSTRING("playing")},
	{hx::fsBool,(int)offsetof(SoundBinding_obj,paused),HX_CSTRING("paused")},
	{hx::fsBool,(int)offsetof(SoundBinding_obj,loaded),HX_CSTRING("loaded")},
	{hx::fsBool,(int)offsetof(SoundBinding_obj,is_stream),HX_CSTRING("is_stream")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(SoundBinding_obj,info),HX_CSTRING("info")},
	{hx::fsFloat,(int)offsetof(SoundBinding_obj,pitch),HX_CSTRING("pitch")},
	{hx::fsFloat,(int)offsetof(SoundBinding_obj,volume),HX_CSTRING("volume")},
	{hx::fsFloat,(int)offsetof(SoundBinding_obj,pan),HX_CSTRING("pan")},
	{hx::fsBool,(int)offsetof(SoundBinding_obj,looping),HX_CSTRING("looping")},
	{hx::fsFloat,(int)offsetof(SoundBinding_obj,position),HX_CSTRING("position")},
	{hx::fsFloat,(int)offsetof(SoundBinding_obj,duration),HX_CSTRING("duration")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(SoundBinding_obj,onload_list),HX_CSTRING("onload_list")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(SoundBinding_obj,onend_list),HX_CSTRING("onend_list")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("manager"),
	HX_CSTRING("name"),
	HX_CSTRING("playing"),
	HX_CSTRING("paused"),
	HX_CSTRING("loaded"),
	HX_CSTRING("is_stream"),
	HX_CSTRING("info"),
	HX_CSTRING("pitch"),
	HX_CSTRING("volume"),
	HX_CSTRING("pan"),
	HX_CSTRING("looping"),
	HX_CSTRING("position"),
	HX_CSTRING("duration"),
	HX_CSTRING("emit"),
	HX_CSTRING("on"),
	HX_CSTRING("off"),
	HX_CSTRING("onload_list"),
	HX_CSTRING("onend_list"),
	HX_CSTRING("play"),
	HX_CSTRING("loop"),
	HX_CSTRING("stop"),
	HX_CSTRING("pause"),
	HX_CSTRING("destroy"),
	HX_CSTRING("internal_update"),
	HX_CSTRING("internal_play"),
	HX_CSTRING("internal_loop"),
	HX_CSTRING("internal_stop"),
	HX_CSTRING("internal_pause"),
	HX_CSTRING("toggle"),
	HX_CSTRING("get_info"),
	HX_CSTRING("set_info"),
	HX_CSTRING("get_pan"),
	HX_CSTRING("get_pitch"),
	HX_CSTRING("get_volume"),
	HX_CSTRING("get_looping"),
	HX_CSTRING("get_position"),
	HX_CSTRING("get_duration"),
	HX_CSTRING("set_pan"),
	HX_CSTRING("set_pitch"),
	HX_CSTRING("set_volume"),
	HX_CSTRING("set_position"),
	HX_CSTRING("set_looping"),
	HX_CSTRING("do_onload"),
	HX_CSTRING("do_onend"),
	HX_CSTRING("add_onload"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SoundBinding_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SoundBinding_obj::__mClass,"__mClass");
};

#endif

Class SoundBinding_obj::__mClass;

void SoundBinding_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("snow.audio.SoundBinding"), hx::TCanCast< SoundBinding_obj> ,sStaticFields,sMemberFields,
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

void SoundBinding_obj::__boot()
{
}

} // end namespace snow
} // end namespace audio
