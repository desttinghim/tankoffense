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
#ifndef INCLUDED_snow_assets_AssetBytes
#include <snow/assets/AssetBytes.h>
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

Void AssetBytes_obj::__construct(::snow::assets::Assets _assets,Dynamic _info,Dynamic __o__async)
{
HX_STACK_FRAME("snow.assets.AssetBytes","new",0x04ea784d,"snow.assets.AssetBytes.new","snow/assets/AssetBytes.hx",11,0x414889a3)
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
	this->type = (int)0;
	HX_STACK_LINE(25)
	this->async = _async;
}
;
	return null();
}

//AssetBytes_obj::~AssetBytes_obj() { }

Dynamic AssetBytes_obj::__CreateEmpty() { return  new AssetBytes_obj; }
hx::ObjectPtr< AssetBytes_obj > AssetBytes_obj::__new(::snow::assets::Assets _assets,Dynamic _info,Dynamic __o__async)
{  hx::ObjectPtr< AssetBytes_obj > result = new AssetBytes_obj();
	result->__construct(_assets,_info,__o__async);
	return result;}

Dynamic AssetBytes_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< AssetBytes_obj > result = new AssetBytes_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

Void AssetBytes_obj::load( Dynamic onload){
{
		HX_STACK_FRAME("snow.assets.AssetBytes","load",0x46f3e199,"snow.assets.AssetBytes.load","snow/assets/AssetBytes.hx",31,0x414889a3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(onload,"onload")
		HX_STACK_LINE(31)
		Dynamic onload1 = Dynamic( Array_obj<Dynamic>::__new().Add(onload));		HX_STACK_VAR(onload1,"onload1");
		HX_STACK_LINE(31)
		Array< ::Dynamic > _g = Array_obj< ::Dynamic >::__new().Add(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(33)
		this->loaded = false;
		HX_STACK_LINE(35)
		this->bytes = null();
		HX_STACK_LINE(37)
		{
			HX_STACK_LINE(37)
			::snow::platform::native::utils::ByteArray array = ::snow::platform::native::utils::ByteArray_obj::snow_byte_array_read_file(this->info->__Field(HX_CSTRING("path"),true));		HX_STACK_VAR(array,"array");
			HX_STACK_LINE(37)
			{
				HX_STACK_LINE(39)
				_g->__get((int)0).StaticCast< ::snow::assets::AssetBytes >()->bytes = array;
				HX_STACK_LINE(41)
				_g->__get((int)0).StaticCast< ::snow::assets::AssetBytes >()->loaded = true;
				HX_STACK_LINE(43)
				if (((onload1->__GetItem((int)0) != null()))){

					HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_4_1,Array< ::Dynamic >,_g,Dynamic,onload1)
					Void run(){
						HX_STACK_FRAME("*","_Function_4_1",0x520333fa,"*._Function_4_1","snow/assets/AssetBytes.hx",45,0x414889a3)
						{
							HX_STACK_LINE(45)
							onload1->__GetItem((int)0)(_g->__get((int)0).StaticCast< ::snow::assets::AssetBytes >()).Cast< Void >();
						}
						return null();
					}
					HX_END_LOCAL_FUNC0((void))

					HX_STACK_LINE(44)
					::snow::Snow_obj::next( Dynamic(new _Function_4_1(_g,onload1)));
				}
			}
			HX_STACK_LINE(37)
			array;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(AssetBytes_obj,load,(void))

Void AssetBytes_obj::load_from_bytes( ::snow::platform::native::utils::ByteArray _bytes,Dynamic onload){
{
		HX_STACK_FRAME("snow.assets.AssetBytes","load_from_bytes",0xad66f0bc,"snow.assets.AssetBytes.load_from_bytes","snow/assets/AssetBytes.hx",53,0x414889a3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_bytes,"_bytes")
		HX_STACK_ARG(onload,"onload")
		HX_STACK_LINE(53)
		Dynamic onload1 = Dynamic( Array_obj<Dynamic>::__new().Add(onload));		HX_STACK_VAR(onload1,"onload1");
		HX_STACK_LINE(53)
		Array< ::Dynamic > _g = Array_obj< ::Dynamic >::__new().Add(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(55)
		this->loaded = false;
		HX_STACK_LINE(57)
		this->bytes = _bytes;
		HX_STACK_LINE(59)
		this->loaded = true;
		HX_STACK_LINE(61)
		if (((onload1->__GetItem((int)0) != null()))){

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,Array< ::Dynamic >,_g,Dynamic,onload1)
			Void run(){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","snow/assets/AssetBytes.hx",63,0x414889a3)
				{
					HX_STACK_LINE(63)
					onload1->__GetItem((int)0)(_g->__get((int)0).StaticCast< ::snow::assets::AssetBytes >()).Cast< Void >();
				}
				return null();
			}
			HX_END_LOCAL_FUNC0((void))

			HX_STACK_LINE(62)
			::snow::Snow_obj::next( Dynamic(new _Function_2_1(_g,onload1)));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(AssetBytes_obj,load_from_bytes,(void))


AssetBytes_obj::AssetBytes_obj()
{
}

void AssetBytes_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(AssetBytes);
	HX_MARK_MEMBER_NAME(bytes,"bytes");
	HX_MARK_MEMBER_NAME(async,"async");
	::snow::assets::Asset_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void AssetBytes_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(bytes,"bytes");
	HX_VISIT_MEMBER_NAME(async,"async");
	::snow::assets::Asset_obj::__Visit(HX_VISIT_ARG);
}

Dynamic AssetBytes_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"load") ) { return load_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"bytes") ) { return bytes; }
		if (HX_FIELD_EQ(inName,"async") ) { return async; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"load_from_bytes") ) { return load_from_bytes_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic AssetBytes_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"bytes") ) { bytes=inValue.Cast< ::snow::platform::native::utils::ByteArray >(); return inValue; }
		if (HX_FIELD_EQ(inName,"async") ) { async=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void AssetBytes_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("bytes"));
	outFields->push(HX_CSTRING("async"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::snow::platform::native::utils::ByteArray*/ ,(int)offsetof(AssetBytes_obj,bytes),HX_CSTRING("bytes")},
	{hx::fsBool,(int)offsetof(AssetBytes_obj,async),HX_CSTRING("async")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("bytes"),
	HX_CSTRING("async"),
	HX_CSTRING("load"),
	HX_CSTRING("load_from_bytes"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AssetBytes_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AssetBytes_obj::__mClass,"__mClass");
};

#endif

Class AssetBytes_obj::__mClass;

void AssetBytes_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("snow.assets.AssetBytes"), hx::TCanCast< AssetBytes_obj> ,sStaticFields,sMemberFields,
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

void AssetBytes_obj::__boot()
{
}

} // end namespace snow
} // end namespace assets
