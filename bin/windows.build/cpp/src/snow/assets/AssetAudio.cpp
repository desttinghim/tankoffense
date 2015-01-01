#include <hxcpp.h>

#ifndef INCLUDED_snow_Snow
#include <snow/Snow.h>
#endif
#ifndef INCLUDED_snow_assets_Asset
#include <snow/assets/Asset.h>
#endif
#ifndef INCLUDED_snow_assets_AssetAudio
#include <snow/assets/AssetAudio.h>
#endif
#ifndef INCLUDED_snow_assets_AssetSystemBinding
#include <snow/assets/AssetSystemBinding.h>
#endif
#ifndef INCLUDED_snow_assets_Assets
#include <snow/assets/Assets.h>
#endif
#ifndef INCLUDED_snow_platform_native_assets_AssetSystem
#include <snow/platform/native/assets/AssetSystem.h>
#endif
#ifndef INCLUDED_snow_utils_AbstractClass
#include <snow/utils/AbstractClass.h>
#endif
namespace snow{
namespace assets{

Void AssetAudio_obj::__construct(::snow::assets::Assets _assets,Dynamic _info,int _format,Dynamic __o__load)
{
HX_STACK_FRAME("snow.assets.AssetAudio","new",0xffaafa38,"snow.assets.AssetAudio.new","snow/assets/AssetAudio.hx",11,0x46ffee18)
HX_STACK_THIS(this)
HX_STACK_ARG(_assets,"_assets")
HX_STACK_ARG(_info,"_info")
HX_STACK_ARG(_format,"_format")
HX_STACK_ARG(__o__load,"_load")
Dynamic _load = __o__load.Default(true);
{
	HX_STACK_LINE(19)
	this->load_full = true;
	HX_STACK_LINE(25)
	super::__construct(_assets,_info);
	HX_STACK_LINE(26)
	this->type = (int)3;
	HX_STACK_LINE(27)
	this->format = _format;
	HX_STACK_LINE(28)
	this->load_full = _load;
}
;
	return null();
}

//AssetAudio_obj::~AssetAudio_obj() { }

Dynamic AssetAudio_obj::__CreateEmpty() { return  new AssetAudio_obj; }
hx::ObjectPtr< AssetAudio_obj > AssetAudio_obj::__new(::snow::assets::Assets _assets,Dynamic _info,int _format,Dynamic __o__load)
{  hx::ObjectPtr< AssetAudio_obj > result = new AssetAudio_obj();
	result->__construct(_assets,_info,_format,__o__load);
	return result;}

Dynamic AssetAudio_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< AssetAudio_obj > result = new AssetAudio_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return result;}

Void AssetAudio_obj::load( Dynamic onload){
{
		HX_STACK_FRAME("snow.assets.AssetAudio","load",0xb4a50d4e,"snow.assets.AssetAudio.load","snow/assets/AssetAudio.hx",35,0x46ffee18)
		HX_STACK_THIS(this)
		HX_STACK_ARG(onload,"onload")
		HX_STACK_LINE(35)
		Dynamic onload1 = Dynamic( Array_obj<Dynamic>::__new().Add(onload));		HX_STACK_VAR(onload1,"onload1");
		HX_STACK_LINE(35)
		Array< ::Dynamic > _g = Array_obj< ::Dynamic >::__new().Add(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(37)
		this->loaded = false;
		HX_STACK_LINE(39)
		this->audio = null();

		HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_1_1,Array< ::Dynamic >,_g,Dynamic,onload1)
		Void run(Dynamic _audio){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","snow/assets/AssetAudio.hx",42,0x46ffee18)
			HX_STACK_ARG(_audio,"_audio")
			{
				HX_STACK_LINE(44)
				_g->__get((int)0).StaticCast< ::snow::assets::AssetAudio >()->audio = _audio;
				HX_STACK_LINE(46)
				_g->__get((int)0).StaticCast< ::snow::assets::AssetAudio >()->loaded = true;
				HX_STACK_LINE(48)
				if (((onload1->__GetItem((int)0) != null()))){

					HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_3_1,Array< ::Dynamic >,_g,Dynamic,onload1)
					Void run(){
						HX_STACK_FRAME("*","_Function_3_1",0x520271b9,"*._Function_3_1","snow/assets/AssetAudio.hx",50,0x46ffee18)
						{
							HX_STACK_LINE(50)
							onload1->__GetItem((int)0)(_g->__get((int)0).StaticCast< ::snow::assets::AssetAudio >()).Cast< Void >();
						}
						return null();
					}
					HX_END_LOCAL_FUNC0((void))

					HX_STACK_LINE(49)
					::snow::Snow_obj::next( Dynamic(new _Function_3_1(_g,onload1)));
				}
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(42)
		this->assets->platform->audio_load_info(this->info->__Field(HX_CSTRING("path"),true),this->format,this->load_full, Dynamic(new _Function_1_1(_g,onload1)));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(AssetAudio_obj,load,(void))


AssetAudio_obj::AssetAudio_obj()
{
}

void AssetAudio_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(AssetAudio);
	HX_MARK_MEMBER_NAME(audio,"audio");
	HX_MARK_MEMBER_NAME(format,"format");
	HX_MARK_MEMBER_NAME(load_full,"load_full");
	::snow::assets::Asset_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void AssetAudio_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(audio,"audio");
	HX_VISIT_MEMBER_NAME(format,"format");
	HX_VISIT_MEMBER_NAME(load_full,"load_full");
	::snow::assets::Asset_obj::__Visit(HX_VISIT_ARG);
}

Dynamic AssetAudio_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"load") ) { return load_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"audio") ) { return audio; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"format") ) { return format; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"load_full") ) { return load_full; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic AssetAudio_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"audio") ) { audio=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"format") ) { format=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"load_full") ) { load_full=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void AssetAudio_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("audio"));
	outFields->push(HX_CSTRING("format"));
	outFields->push(HX_CSTRING("load_full"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(AssetAudio_obj,audio),HX_CSTRING("audio")},
	{hx::fsInt,(int)offsetof(AssetAudio_obj,format),HX_CSTRING("format")},
	{hx::fsBool,(int)offsetof(AssetAudio_obj,load_full),HX_CSTRING("load_full")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("audio"),
	HX_CSTRING("format"),
	HX_CSTRING("load_full"),
	HX_CSTRING("load"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AssetAudio_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AssetAudio_obj::__mClass,"__mClass");
};

#endif

Class AssetAudio_obj::__mClass;

void AssetAudio_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("snow.assets.AssetAudio"), hx::TCanCast< AssetAudio_obj> ,sStaticFields,sMemberFields,
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

void AssetAudio_obj::__boot()
{
}

} // end namespace snow
} // end namespace assets
