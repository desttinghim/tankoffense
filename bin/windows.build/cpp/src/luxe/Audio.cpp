#include <hxcpp.h>

#ifndef INCLUDED_luxe_Audio
#include <luxe/Audio.h>
#endif
#ifndef INCLUDED_luxe_Core
#include <luxe/Core.h>
#endif
#ifndef INCLUDED_snow_App
#include <snow/App.h>
#endif
#ifndef INCLUDED_snow_Snow
#include <snow/Snow.h>
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
namespace luxe{

Void Audio_obj::__construct(::luxe::Core _core)
{
HX_STACK_FRAME("luxe.Audio","new",0x2e60e1f0,"luxe.Audio.new","luxe/Audio.hx",13,0xbb0b1481)
HX_STACK_THIS(this)
HX_STACK_ARG(_core,"_core")
{
	HX_STACK_LINE(13)
	this->core = _core;
}
;
	return null();
}

//Audio_obj::~Audio_obj() { }

Dynamic Audio_obj::__CreateEmpty() { return  new Audio_obj; }
hx::ObjectPtr< Audio_obj > Audio_obj::__new(::luxe::Core _core)
{  hx::ObjectPtr< Audio_obj > result = new Audio_obj();
	result->__construct(_core);
	return result;}

Dynamic Audio_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Audio_obj > result = new Audio_obj();
	result->__construct(inArgs[0]);
	return result;}

Void Audio_obj::init( ){
{
		HX_STACK_FRAME("luxe.Audio","init",0x631d8780,"luxe.Audio.init","luxe/Log.hx",138,0xe5312153)
		HX_STACK_THIS(this)
		HX_STACK_LINE(138)
		Dynamic();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Audio_obj,init,(void))

Void Audio_obj::destroy( ){
{
		HX_STACK_FRAME("luxe.Audio","destroy",0x96a3468a,"luxe.Audio.destroy","luxe/Log.hx",138,0xe5312153)
		HX_STACK_THIS(this)
		HX_STACK_LINE(138)
		Dynamic();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Audio_obj,destroy,(void))

::snow::platform::native::audio::openal::Sound Audio_obj::create( ::String _id,::String __o__name,Dynamic __o__streaming){
::String _name = __o__name.Default(HX_CSTRING(""));
Dynamic _streaming = __o__streaming.Default(false);
	HX_STACK_FRAME("luxe.Audio","create",0x6ff1af6c,"luxe.Audio.create","luxe/Audio.hx",33,0xbb0b1481)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_id,"_id")
	HX_STACK_ARG(_name,"_name")
	HX_STACK_ARG(_streaming,"_streaming")
{
		HX_STACK_LINE(33)
		return this->core->app->audio->create(_id,_name,_streaming);
	}
}


HX_DEFINE_DYNAMIC_FUNC3(Audio_obj,create,return )

Void Audio_obj::uncreate( ::String _name){
{
		HX_STACK_FRAME("luxe.Audio","uncreate",0xe5afda85,"luxe.Audio.uncreate","luxe/Audio.hx",40,0xbb0b1481)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_name,"_name")
		HX_STACK_LINE(40)
		return null(this->core->app->audio->uncreate(_name));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Audio_obj,uncreate,(void))

Void Audio_obj::on( ::String _name,::String _event,Dynamic _handler){
{
		HX_STACK_FRAME("luxe.Audio","on",0xe819b18f,"luxe.Audio.on","luxe/Audio.hx",45,0xbb0b1481)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_name,"_name")
		HX_STACK_ARG(_event,"_event")
		HX_STACK_ARG(_handler,"_handler")
		HX_STACK_LINE(45)
		return null(this->core->app->audio->on(_name,_event,_handler));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Audio_obj,on,(void))

Void Audio_obj::off( ::String _name,::String _event,Dynamic _handler){
{
		HX_STACK_FRAME("luxe.Audio","off",0x2e61a4ff,"luxe.Audio.off","luxe/Audio.hx",50,0xbb0b1481)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_name,"_name")
		HX_STACK_ARG(_event,"_event")
		HX_STACK_ARG(_handler,"_handler")
		HX_STACK_LINE(50)
		return null(this->core->app->audio->off(_name,_event,_handler));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Audio_obj,off,(void))

::snow::platform::native::audio::openal::Sound Audio_obj::get( ::String _name){
	HX_STACK_FRAME("luxe.Audio","get",0x2e5b9226,"luxe.Audio.get","luxe/Audio.hx",59,0xbb0b1481)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_name,"_name")
	HX_STACK_LINE(59)
	return this->core->app->audio->get(_name);
}


HX_DEFINE_DYNAMIC_FUNC1(Audio_obj,get,return )

bool Audio_obj::exists( ::String _name){
	HX_STACK_FRAME("luxe.Audio","exists",0xb3c2664c,"luxe.Audio.exists","luxe/Audio.hx",67,0xbb0b1481)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_name,"_name")
	HX_STACK_LINE(68)
	::snow::platform::native::audio::openal::Sound _g = this->get(_name);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(68)
	return (_g != null());
}


HX_DEFINE_DYNAMIC_FUNC1(Audio_obj,exists,return )

Void Audio_obj::on_complete( ::String _name,Dynamic handler){
{
		HX_STACK_FRAME("luxe.Audio","on_complete",0x7a9f1ca9,"luxe.Audio.on_complete","luxe/Audio.hx",77,0xbb0b1481)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_name,"_name")
		HX_STACK_ARG(handler,"handler")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Audio_obj,on_complete,(void))

Void Audio_obj::loop( ::String _name){
{
		HX_STACK_FRAME("luxe.Audio","loop",0x6519f2d4,"luxe.Audio.loop","luxe/Audio.hx",87,0xbb0b1481)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_name,"_name")
		HX_STACK_LINE(87)
		return null(this->core->app->audio->loop(_name));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Audio_obj,loop,(void))

Void Audio_obj::stop( ::String _name){
{
		HX_STACK_FRAME("luxe.Audio","stop",0x69be3c72,"luxe.Audio.stop","luxe/Audio.hx",96,0xbb0b1481)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_name,"_name")
		HX_STACK_LINE(96)
		return null(this->core->app->audio->stop(_name));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Audio_obj,stop,(void))

Void Audio_obj::play( ::String _name){
{
		HX_STACK_FRAME("luxe.Audio","play",0x67bc7a64,"luxe.Audio.play","luxe/Audio.hx",105,0xbb0b1481)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_name,"_name")
		HX_STACK_LINE(105)
		return null(this->core->app->audio->play(_name));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Audio_obj,play,(void))

Void Audio_obj::pause( ::String _name){
{
		HX_STACK_FRAME("luxe.Audio","pause",0x55f86c86,"luxe.Audio.pause","luxe/Audio.hx",114,0xbb0b1481)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_name,"_name")
		HX_STACK_LINE(114)
		return null(this->core->app->audio->pause(_name));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Audio_obj,pause,(void))

Void Audio_obj::toggle( ::String _name){
{
		HX_STACK_FRAME("luxe.Audio","toggle",0x83260804,"luxe.Audio.toggle","luxe/Audio.hx",120,0xbb0b1481)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_name,"_name")
		HX_STACK_LINE(120)
		return null(this->core->app->audio->toggle(_name));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Audio_obj,toggle,(void))

Float Audio_obj::volume( ::String _name,Dynamic _volume){
	HX_STACK_FRAME("luxe.Audio","volume",0x5335724a,"luxe.Audio.volume","luxe/Audio.hx",130,0xbb0b1481)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_name,"_name")
	HX_STACK_ARG(_volume,"_volume")
	HX_STACK_LINE(130)
	return this->core->app->audio->volume(_name,_volume);
}


HX_DEFINE_DYNAMIC_FUNC2(Audio_obj,volume,return )

Float Audio_obj::pan( ::String _name,Dynamic _pan){
	HX_STACK_FRAME("luxe.Audio","pan",0x2e6262ed,"luxe.Audio.pan","luxe/Audio.hx",140,0xbb0b1481)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_name,"_name")
	HX_STACK_ARG(_pan,"_pan")
	HX_STACK_LINE(140)
	return this->core->app->audio->pan(_name,_pan);
}


HX_DEFINE_DYNAMIC_FUNC2(Audio_obj,pan,return )

Float Audio_obj::pitch( ::String _name,Dynamic _pitch){
	HX_STACK_FRAME("luxe.Audio","pitch",0x5b415150,"luxe.Audio.pitch","luxe/Audio.hx",150,0xbb0b1481)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_name,"_name")
	HX_STACK_ARG(_pitch,"_pitch")
	HX_STACK_LINE(150)
	return this->core->app->audio->pitch(_name,_pitch);
}


HX_DEFINE_DYNAMIC_FUNC2(Audio_obj,pitch,return )

Float Audio_obj::position( ::String _name,Dynamic _position){
	HX_STACK_FRAME("luxe.Audio","position",0x3253e519,"luxe.Audio.position","luxe/Audio.hx",159,0xbb0b1481)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_name,"_name")
	HX_STACK_ARG(_position,"_position")
	HX_STACK_LINE(159)
	return this->core->app->audio->position(_name,_position);
}


HX_DEFINE_DYNAMIC_FUNC2(Audio_obj,position,return )

Float Audio_obj::duration( ::String _name){
	HX_STACK_FRAME("luxe.Audio","duration",0x7be753c4,"luxe.Audio.duration","luxe/Audio.hx",167,0xbb0b1481)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_name,"_name")
	HX_STACK_LINE(167)
	return this->core->app->audio->duration(_name);
}


HX_DEFINE_DYNAMIC_FUNC1(Audio_obj,duration,return )

Void Audio_obj::process( ){
{
		HX_STACK_FRAME("luxe.Audio","process",0x6367bbff,"luxe.Audio.process","luxe/Audio.hx",170,0xbb0b1481)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Audio_obj,process,(void))


Audio_obj::Audio_obj()
{
}

void Audio_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Audio);
	HX_MARK_MEMBER_NAME(core,"core");
	HX_MARK_END_CLASS();
}

void Audio_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(core,"core");
}

Dynamic Audio_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"on") ) { return on_dyn(); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"off") ) { return off_dyn(); }
		if (HX_FIELD_EQ(inName,"get") ) { return get_dyn(); }
		if (HX_FIELD_EQ(inName,"pan") ) { return pan_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"core") ) { return core; }
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		if (HX_FIELD_EQ(inName,"loop") ) { return loop_dyn(); }
		if (HX_FIELD_EQ(inName,"stop") ) { return stop_dyn(); }
		if (HX_FIELD_EQ(inName,"play") ) { return play_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"pause") ) { return pause_dyn(); }
		if (HX_FIELD_EQ(inName,"pitch") ) { return pitch_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		if (HX_FIELD_EQ(inName,"exists") ) { return exists_dyn(); }
		if (HX_FIELD_EQ(inName,"toggle") ) { return toggle_dyn(); }
		if (HX_FIELD_EQ(inName,"volume") ) { return volume_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"process") ) { return process_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"uncreate") ) { return uncreate_dyn(); }
		if (HX_FIELD_EQ(inName,"position") ) { return position_dyn(); }
		if (HX_FIELD_EQ(inName,"duration") ) { return duration_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"on_complete") ) { return on_complete_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Audio_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"core") ) { core=inValue.Cast< ::luxe::Core >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Audio_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("core"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::luxe::Core*/ ,(int)offsetof(Audio_obj,core),HX_CSTRING("core")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("core"),
	HX_CSTRING("init"),
	HX_CSTRING("destroy"),
	HX_CSTRING("create"),
	HX_CSTRING("uncreate"),
	HX_CSTRING("on"),
	HX_CSTRING("off"),
	HX_CSTRING("get"),
	HX_CSTRING("exists"),
	HX_CSTRING("on_complete"),
	HX_CSTRING("loop"),
	HX_CSTRING("stop"),
	HX_CSTRING("play"),
	HX_CSTRING("pause"),
	HX_CSTRING("toggle"),
	HX_CSTRING("volume"),
	HX_CSTRING("pan"),
	HX_CSTRING("pitch"),
	HX_CSTRING("position"),
	HX_CSTRING("duration"),
	HX_CSTRING("process"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Audio_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Audio_obj::__mClass,"__mClass");
};

#endif

Class Audio_obj::__mClass;

void Audio_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("luxe.Audio"), hx::TCanCast< Audio_obj> ,sStaticFields,sMemberFields,
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

void Audio_obj::__boot()
{
}

} // end namespace luxe
