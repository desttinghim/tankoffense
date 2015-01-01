#include <hxcpp.h>

#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_haxe_io_Path
#include <haxe/io/Path.h>
#endif
#ifndef INCLUDED_snow_Snow
#include <snow/Snow.h>
#endif
#ifndef INCLUDED_snow_io_IO
#include <snow/io/IO.h>
#endif
#ifndef INCLUDED_snow_io_IOSystemBinding
#include <snow/io/IOSystemBinding.h>
#endif
#ifndef INCLUDED_snow_platform_native_io_IOSystem
#include <snow/platform/native/io/IOSystem.h>
#endif
#ifndef INCLUDED_snow_utils_AbstractClass
#include <snow/utils/AbstractClass.h>
#endif
#ifndef INCLUDED_snow_utils_Libs
#include <snow/utils/Libs.h>
#endif
#ifndef INCLUDED_sys_FileSystem
#include <sys/FileSystem.h>
#endif
namespace snow{
namespace platform{
namespace native{
namespace io{

Void IOSystem_obj::__construct(::snow::io::IO _manager,::snow::Snow _lib)
{
HX_STACK_FRAME("snow.platform.native.io.IOSystem","new",0xeec64c08,"snow.platform.native.io.IOSystem.new","snow/platform/native/io/IOSystem.hx",20,0x546d55e8)
HX_STACK_THIS(this)
HX_STACK_ARG(_manager,"_manager")
HX_STACK_ARG(_lib,"_lib")
{
	HX_STACK_LINE(22)
	this->manager = _manager;
	HX_STACK_LINE(23)
	this->lib = _lib;
}
;
	return null();
}

//IOSystem_obj::~IOSystem_obj() { }

Dynamic IOSystem_obj::__CreateEmpty() { return  new IOSystem_obj; }
hx::ObjectPtr< IOSystem_obj > IOSystem_obj::__new(::snow::io::IO _manager,::snow::Snow _lib)
{  hx::ObjectPtr< IOSystem_obj > result = new IOSystem_obj();
	result->__construct(_manager,_lib);
	return result;}

Dynamic IOSystem_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< IOSystem_obj > result = new IOSystem_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

Void IOSystem_obj::url_open( ::String _url){
{
		HX_STACK_FRAME("snow.platform.native.io.IOSystem","url_open",0x59916532,"snow.platform.native.io.IOSystem.url_open","snow/platform/native/io/IOSystem.hx",32,0x546d55e8)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_url,"_url")
		HX_STACK_LINE(32)
		if (((bool((_url != null())) && bool((_url.length > (int)0))))){
			HX_STACK_LINE(33)
			::snow::platform::native::io::IOSystem_obj::snow_io_url_open(_url);
		}
	}
return null();
}


Void IOSystem_obj::watch_add( ::String _path){
{
		HX_STACK_FRAME("snow.platform.native.io.IOSystem","watch_add",0xb23bca99,"snow.platform.native.io.IOSystem.watch_add","snow/platform/native/io/IOSystem.hx",48,0x546d55e8)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_path,"_path")
		HX_STACK_LINE(48)
		if (((bool((_path != null())) && bool((_path.length > (int)0))))){
			HX_STACK_LINE(49)
			::String _g = ::snow::platform::native::io::IOSystem_obj::resolve(_path);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(49)
			::snow::platform::native::io::IOSystem_obj::snow_io_add_watch(_g);
		}
	}
return null();
}


Void IOSystem_obj::watch_remove( ::String _path){
{
		HX_STACK_FRAME("snow.platform.native.io.IOSystem","watch_remove",0x749f5ecc,"snow.platform.native.io.IOSystem.watch_remove","snow/platform/native/io/IOSystem.hx",58,0x546d55e8)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_path,"_path")
		HX_STACK_LINE(58)
		if (((bool((_path != null())) && bool((_path.length > (int)0))))){
			HX_STACK_LINE(59)
			::String _g = ::snow::platform::native::io::IOSystem_obj::resolve(_path);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(59)
			::snow::platform::native::io::IOSystem_obj::snow_io_remove_watch(_g);
		}
	}
return null();
}


::String IOSystem_obj::dialog_open( ::String __o__title,Dynamic _filters){
::String _title = __o__title.Default(HX_CSTRING("Select file"));
	HX_STACK_FRAME("snow.platform.native.io.IOSystem","dialog_open",0x93d62989,"snow.platform.native.io.IOSystem.dialog_open","snow/platform/native/io/IOSystem.hx",69,0x546d55e8)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_title,"_title")
	HX_STACK_ARG(_filters,"_filters")
{
		HX_STACK_LINE(72)
		if (((_filters == null()))){
			HX_STACK_LINE(73)
			_filters = Dynamic( Array_obj<Dynamic>::__new());
		}
		HX_STACK_LINE(76)
		return ::snow::platform::native::io::IOSystem_obj::snow_io_dialog_open(_title,_filters);
	}
}


::String IOSystem_obj::dialog_save( ::String __o__title,Dynamic _filter){
::String _title = __o__title.Default(HX_CSTRING("Save file"));
	HX_STACK_FRAME("snow.platform.native.io.IOSystem","dialog_save",0x966fb0fc,"snow.platform.native.io.IOSystem.dialog_save","snow/platform/native/io/IOSystem.hx",83,0x546d55e8)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_title,"_title")
	HX_STACK_ARG(_filter,"_filter")
{
		HX_STACK_LINE(88)
		Dynamic _filters = Dynamic( Array_obj<Dynamic>::__new());		HX_STACK_VAR(_filters,"_filters");
		HX_STACK_LINE(90)
		if (((_filter != null()))){
			HX_STACK_LINE(91)
			_filters->__Field(HX_CSTRING("push"),true)(_filter);
		}
		HX_STACK_LINE(94)
		return ::snow::platform::native::io::IOSystem_obj::snow_io_dialog_save(_title,_filters);
	}
}


::String IOSystem_obj::dialog_folder( ::String __o__title){
::String _title = __o__title.Default(HX_CSTRING("Select folder"));
	HX_STACK_FRAME("snow.platform.native.io.IOSystem","dialog_folder",0xacd6ca2d,"snow.platform.native.io.IOSystem.dialog_folder","snow/platform/native/io/IOSystem.hx",103,0x546d55e8)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_title,"_title")
{
		HX_STACK_LINE(103)
		return ::snow::platform::native::io::IOSystem_obj::snow_io_dialog_folder(_title);
	}
}


Void IOSystem_obj::init( ){
{
		HX_STACK_FRAME("snow.platform.native.io.IOSystem","init",0xfb74f268,"snow.platform.native.io.IOSystem.init","snow/platform/native/io/IOSystem.hx",111,0x546d55e8)
		HX_STACK_THIS(this)
	}
return null();
}


Void IOSystem_obj::process( ){
{
		HX_STACK_FRAME("snow.platform.native.io.IOSystem","process",0x05681217,"snow.platform.native.io.IOSystem.process","snow/platform/native/io/IOSystem.hx",113,0x546d55e8)
		HX_STACK_THIS(this)
	}
return null();
}


Void IOSystem_obj::destroy( ){
{
		HX_STACK_FRAME("snow.platform.native.io.IOSystem","destroy",0x38a39ca2,"snow.platform.native.io.IOSystem.destroy","snow/platform/native/io/IOSystem.hx",115,0x546d55e8)
		HX_STACK_THIS(this)
	}
return null();
}


Void IOSystem_obj::on_event( Dynamic _event){
{
		HX_STACK_FRAME("snow.platform.native.io.IOSystem","on_event",0xa268d512,"snow.platform.native.io.IOSystem.on_event","snow/platform/native/io/IOSystem.hx",117,0x546d55e8)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_event,"_event")
	}
return null();
}


bool IOSystem_obj::isAbsolute( ::String path){
	HX_STACK_FRAME("snow.platform.native.io.IOSystem","isAbsolute",0xa802a9d9,"snow.platform.native.io.IOSystem.isAbsolute","snow/platform/native/io/IOSystem.hx",123,0x546d55e8)
	HX_STACK_ARG(path,"path")
	HX_STACK_LINE(124)
	if ((::StringTools_obj::startsWith(path,HX_CSTRING("/")))){
		HX_STACK_LINE(124)
		return true;
	}
	HX_STACK_LINE(125)
	::String _g = path.charAt((int)2);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(125)
	if (((_g == HX_CSTRING(":")))){
		HX_STACK_LINE(125)
		return true;
	}
	HX_STACK_LINE(126)
	return false;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(IOSystem_obj,isAbsolute,return )

::String IOSystem_obj::resolve( ::String _path){
	HX_STACK_FRAME("snow.platform.native.io.IOSystem","resolve",0x7b7d8294,"snow.platform.native.io.IOSystem.resolve","snow/platform/native/io/IOSystem.hx",130,0x546d55e8)
	HX_STACK_ARG(_path,"_path")
	HX_STACK_LINE(132)
	if ((!(::snow::platform::native::io::IOSystem_obj::isAbsolute(_path)))){
		HX_STACK_LINE(133)
		::String _g = ::sys::FileSystem_obj::fullPath(_path);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(133)
		_path = _g;
	}
	HX_STACK_LINE(136)
	::String _g1 = ::haxe::io::Path_obj::normalize(_path);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(136)
	_path = _g1;
	HX_STACK_LINE(137)
	::String _g2 = ::haxe::io::Path_obj::removeTrailingSlashes(_path);		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(137)
	_path = _g2;
	HX_STACK_LINE(139)
	return _path;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(IOSystem_obj,resolve,return )

Dynamic IOSystem_obj::snow_io_url_open;

Dynamic IOSystem_obj::snow_io_add_watch;

Dynamic IOSystem_obj::snow_io_remove_watch;

Dynamic IOSystem_obj::snow_io_dialog_open;

Dynamic IOSystem_obj::snow_io_dialog_save;

Dynamic IOSystem_obj::snow_io_dialog_folder;


IOSystem_obj::IOSystem_obj()
{
}

Dynamic IOSystem_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"resolve") ) { return resolve_dyn(); }
		if (HX_FIELD_EQ(inName,"process") ) { return process_dyn(); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"url_open") ) { return url_open_dyn(); }
		if (HX_FIELD_EQ(inName,"on_event") ) { return on_event_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"watch_add") ) { return watch_add_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"isAbsolute") ) { return isAbsolute_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"dialog_open") ) { return dialog_open_dyn(); }
		if (HX_FIELD_EQ(inName,"dialog_save") ) { return dialog_save_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"watch_remove") ) { return watch_remove_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"dialog_folder") ) { return dialog_folder_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"snow_io_url_open") ) { return snow_io_url_open; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"snow_io_add_watch") ) { return snow_io_add_watch; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"snow_io_dialog_open") ) { return snow_io_dialog_open; }
		if (HX_FIELD_EQ(inName,"snow_io_dialog_save") ) { return snow_io_dialog_save; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"snow_io_remove_watch") ) { return snow_io_remove_watch; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"snow_io_dialog_folder") ) { return snow_io_dialog_folder; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic IOSystem_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 16:
		if (HX_FIELD_EQ(inName,"snow_io_url_open") ) { snow_io_url_open=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"snow_io_add_watch") ) { snow_io_add_watch=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"snow_io_dialog_open") ) { snow_io_dialog_open=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"snow_io_dialog_save") ) { snow_io_dialog_save=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"snow_io_remove_watch") ) { snow_io_remove_watch=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"snow_io_dialog_folder") ) { snow_io_dialog_folder=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void IOSystem_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("isAbsolute"),
	HX_CSTRING("resolve"),
	HX_CSTRING("snow_io_url_open"),
	HX_CSTRING("snow_io_add_watch"),
	HX_CSTRING("snow_io_remove_watch"),
	HX_CSTRING("snow_io_dialog_open"),
	HX_CSTRING("snow_io_dialog_save"),
	HX_CSTRING("snow_io_dialog_folder"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("url_open"),
	HX_CSTRING("watch_add"),
	HX_CSTRING("watch_remove"),
	HX_CSTRING("dialog_open"),
	HX_CSTRING("dialog_save"),
	HX_CSTRING("dialog_folder"),
	HX_CSTRING("init"),
	HX_CSTRING("process"),
	HX_CSTRING("destroy"),
	HX_CSTRING("on_event"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(IOSystem_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(IOSystem_obj::snow_io_url_open,"snow_io_url_open");
	HX_MARK_MEMBER_NAME(IOSystem_obj::snow_io_add_watch,"snow_io_add_watch");
	HX_MARK_MEMBER_NAME(IOSystem_obj::snow_io_remove_watch,"snow_io_remove_watch");
	HX_MARK_MEMBER_NAME(IOSystem_obj::snow_io_dialog_open,"snow_io_dialog_open");
	HX_MARK_MEMBER_NAME(IOSystem_obj::snow_io_dialog_save,"snow_io_dialog_save");
	HX_MARK_MEMBER_NAME(IOSystem_obj::snow_io_dialog_folder,"snow_io_dialog_folder");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(IOSystem_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(IOSystem_obj::snow_io_url_open,"snow_io_url_open");
	HX_VISIT_MEMBER_NAME(IOSystem_obj::snow_io_add_watch,"snow_io_add_watch");
	HX_VISIT_MEMBER_NAME(IOSystem_obj::snow_io_remove_watch,"snow_io_remove_watch");
	HX_VISIT_MEMBER_NAME(IOSystem_obj::snow_io_dialog_open,"snow_io_dialog_open");
	HX_VISIT_MEMBER_NAME(IOSystem_obj::snow_io_dialog_save,"snow_io_dialog_save");
	HX_VISIT_MEMBER_NAME(IOSystem_obj::snow_io_dialog_folder,"snow_io_dialog_folder");
};

#endif

Class IOSystem_obj::__mClass;

void IOSystem_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("snow.platform.native.io.IOSystem"), hx::TCanCast< IOSystem_obj> ,sStaticFields,sMemberFields,
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

void IOSystem_obj::__boot()
{
	snow_io_url_open= ::snow::utils::Libs_obj::load(HX_CSTRING("snow"),HX_CSTRING("snow_io_url_open"),(int)1);
	snow_io_add_watch= ::snow::utils::Libs_obj::load(HX_CSTRING("snow"),HX_CSTRING("snow_io_add_watch"),(int)1);
	snow_io_remove_watch= ::snow::utils::Libs_obj::load(HX_CSTRING("snow"),HX_CSTRING("snow_io_remove_watch"),(int)1);
	snow_io_dialog_open= ::snow::utils::Libs_obj::load(HX_CSTRING("snow"),HX_CSTRING("snow_io_dialog_open"),(int)2);
	snow_io_dialog_save= ::snow::utils::Libs_obj::load(HX_CSTRING("snow"),HX_CSTRING("snow_io_dialog_save"),(int)2);
	snow_io_dialog_folder= ::snow::utils::Libs_obj::load(HX_CSTRING("snow"),HX_CSTRING("snow_io_dialog_folder"),(int)1);
}

} // end namespace snow
} // end namespace platform
} // end namespace native
} // end namespace io
