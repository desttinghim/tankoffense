#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_snow_Snow
#include <snow/Snow.h>
#endif
#ifndef INCLUDED_snow_assets_Asset
#include <snow/assets/Asset.h>
#endif
#ifndef INCLUDED_snow_assets_AssetText
#include <snow/assets/AssetText.h>
#endif
#ifndef INCLUDED_snow_assets_Assets
#include <snow/assets/Assets.h>
#endif
#ifndef INCLUDED_snow_platform_native_utils_ByteArray
#include <snow/platform/native/utils/ByteArray.h>
#endif
#ifndef INCLUDED_snow_utils_IDataInput
#include <snow/utils/IDataInput.h>
#endif
#ifndef INCLUDED_snow_utils_IMemoryRange
#include <snow/utils/IMemoryRange.h>
#endif
namespace snow{
namespace assets{

Void AssetText_obj::__construct(::snow::assets::Assets _assets,Dynamic _info,Dynamic __o__async)
{
HX_STACK_FRAME("snow.assets.AssetText","new",0x21d388af,"snow.assets.AssetText.new","snow/assets/AssetText.hx",11,0xd7eb83c1)
HX_STACK_THIS(this)
HX_STACK_ARG(_assets,"_assets")
HX_STACK_ARG(_info,"_info")
HX_STACK_ARG(__o__async,"_async")
Dynamic _async = __o__async.Default(false);
{
	HX_STACK_LINE(17)
	this->async = false;
	HX_STACK_LINE(23)
	super::__construct(_assets,_info);
	HX_STACK_LINE(24)
	this->type = (int)1;
	HX_STACK_LINE(25)
	this->async = _async;
}
;
	return null();
}

//AssetText_obj::~AssetText_obj() { }

Dynamic AssetText_obj::__CreateEmpty() { return  new AssetText_obj; }
hx::ObjectPtr< AssetText_obj > AssetText_obj::__new(::snow::assets::Assets _assets,Dynamic _info,Dynamic __o__async)
{  hx::ObjectPtr< AssetText_obj > result = new AssetText_obj();
	result->__construct(_assets,_info,__o__async);
	return result;}

Dynamic AssetText_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< AssetText_obj > result = new AssetText_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

Void AssetText_obj::load( Dynamic onload){
{
		HX_STACK_FRAME("snow.assets.AssetText","load",0x75f926f7,"snow.assets.AssetText.load","snow/assets/AssetText.hx",31,0xd7eb83c1)
		HX_STACK_THIS(this)
		HX_STACK_ARG(onload,"onload")
		HX_STACK_LINE(31)
		::snow::assets::AssetText _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(33)
		this->loaded = false;
		HX_STACK_LINE(35)
		this->text = null();
		HX_STACK_LINE(37)
		{
			HX_STACK_LINE(37)
			::snow::platform::native::utils::ByteArray array = ::snow::platform::native::utils::ByteArray_obj::snow_byte_array_read_file(this->info->__Field(HX_CSTRING("path"),true));		HX_STACK_VAR(array,"array");
			HX_STACK_LINE(37)
			{
				HX_STACK_LINE(39)
				if (((array != null()))){
					HX_STACK_LINE(40)
					::String _g1 = array->toString();		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(40)
					_g->text = _g1;
				}
				HX_STACK_LINE(43)
				_g->loaded = true;
				HX_STACK_LINE(45)
				if (((onload != null()))){
					HX_STACK_LINE(46)
					onload(_g).Cast< Void >();
				}
			}
			HX_STACK_LINE(37)
			array;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(AssetText_obj,load,(void))

Void AssetText_obj::load_from_string( ::String _string,Dynamic onload){
{
		HX_STACK_FRAME("snow.assets.AssetText","load_from_string",0x977361be,"snow.assets.AssetText.load_from_string","snow/assets/AssetText.hx",53,0xd7eb83c1)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_string,"_string")
		HX_STACK_ARG(onload,"onload")
		HX_STACK_LINE(53)
		Dynamic onload1 = Dynamic( Array_obj<Dynamic>::__new().Add(onload));		HX_STACK_VAR(onload1,"onload1");
		HX_STACK_LINE(53)
		Array< ::Dynamic > _g = Array_obj< ::Dynamic >::__new().Add(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(55)
		this->loaded = false;
		HX_STACK_LINE(57)
		this->text = _string;
		HX_STACK_LINE(59)
		if (((onload1->__GetItem((int)0) != null()))){

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,Array< ::Dynamic >,_g,Dynamic,onload1)
			Void run(){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","snow/assets/AssetText.hx",61,0xd7eb83c1)
				{
					HX_STACK_LINE(61)
					onload1->__GetItem((int)0)(_g->__get((int)0).StaticCast< ::snow::assets::AssetText >()).Cast< Void >();
				}
				return null();
			}
			HX_END_LOCAL_FUNC0((void))

			HX_STACK_LINE(60)
			::snow::Snow_obj::next( Dynamic(new _Function_2_1(_g,onload1)));
		}
		HX_STACK_LINE(65)
		this->loaded = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(AssetText_obj,load_from_string,(void))


AssetText_obj::AssetText_obj()
{
}

void AssetText_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(AssetText);
	HX_MARK_MEMBER_NAME(text,"text");
	HX_MARK_MEMBER_NAME(async,"async");
	::snow::assets::Asset_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void AssetText_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(text,"text");
	HX_VISIT_MEMBER_NAME(async,"async");
	::snow::assets::Asset_obj::__Visit(HX_VISIT_ARG);
}

Dynamic AssetText_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"text") ) { return text; }
		if (HX_FIELD_EQ(inName,"load") ) { return load_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"async") ) { return async; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"load_from_string") ) { return load_from_string_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic AssetText_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"text") ) { text=inValue.Cast< ::String >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"async") ) { async=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void AssetText_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("text"));
	outFields->push(HX_CSTRING("async"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(AssetText_obj,text),HX_CSTRING("text")},
	{hx::fsBool,(int)offsetof(AssetText_obj,async),HX_CSTRING("async")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("text"),
	HX_CSTRING("async"),
	HX_CSTRING("load"),
	HX_CSTRING("load_from_string"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AssetText_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AssetText_obj::__mClass,"__mClass");
};

#endif

Class AssetText_obj::__mClass;

void AssetText_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("snow.assets.AssetText"), hx::TCanCast< AssetText_obj> ,sStaticFields,sMemberFields,
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

void AssetText_obj::__boot()
{
}

} // end namespace snow
} // end namespace assets
