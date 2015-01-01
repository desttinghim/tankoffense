#include <hxcpp.h>

#ifndef INCLUDED_snow_Snow
#include <snow/Snow.h>
#endif
#ifndef INCLUDED_snow_io_IO
#include <snow/io/IO.h>
#endif
#ifndef INCLUDED_snow_io_IOSystemBinding
#include <snow/io/IOSystemBinding.h>
#endif
#ifndef INCLUDED_snow_utils_AbstractClass
#include <snow/utils/AbstractClass.h>
#endif
namespace snow{
namespace io{

Void IOSystemBinding_obj::__construct()
{
	return null();
}

//IOSystemBinding_obj::~IOSystemBinding_obj() { }

Dynamic IOSystemBinding_obj::__CreateEmpty() { return  new IOSystemBinding_obj; }
hx::ObjectPtr< IOSystemBinding_obj > IOSystemBinding_obj::__new()
{  hx::ObjectPtr< IOSystemBinding_obj > result = new IOSystemBinding_obj();
	result->__construct();
	return result;}

Dynamic IOSystemBinding_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< IOSystemBinding_obj > result = new IOSystemBinding_obj();
	result->__construct();
	return result;}

hx::Object *IOSystemBinding_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::snow::utils::AbstractClass_obj)) return operator ::snow::utils::AbstractClass_obj *();
	return super::__ToInterface(inType);
}

Void IOSystemBinding_obj::init( ){
{
		HX_STACK_FRAME("snow.io.IOSystemBinding","init",0x0439a28b,"snow.io.IOSystemBinding.init","snow/utils/AbstractClass.hx",140,0x08288ed2)
		HX_STACK_THIS(this)
		HX_STACK_LINE(140)
		HX_STACK_DO_THROW(HX_CSTRING("abstract method, must override"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(IOSystemBinding_obj,init,(void))

Void IOSystemBinding_obj::process( ){
{
		HX_STACK_FRAME("snow.io.IOSystemBinding","process",0x3bd3d9d4,"snow.io.IOSystemBinding.process","snow/utils/AbstractClass.hx",140,0x08288ed2)
		HX_STACK_THIS(this)
		HX_STACK_LINE(140)
		HX_STACK_DO_THROW(HX_CSTRING("abstract method, must override"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(IOSystemBinding_obj,process,(void))

Void IOSystemBinding_obj::destroy( ){
{
		HX_STACK_FRAME("snow.io.IOSystemBinding","destroy",0x6f0f645f,"snow.io.IOSystemBinding.destroy","snow/utils/AbstractClass.hx",140,0x08288ed2)
		HX_STACK_THIS(this)
		HX_STACK_LINE(140)
		HX_STACK_DO_THROW(HX_CSTRING("abstract method, must override"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(IOSystemBinding_obj,destroy,(void))

Void IOSystemBinding_obj::on_event( Dynamic _event){
{
		HX_STACK_FRAME("snow.io.IOSystemBinding","on_event",0x0a4bd2b5,"snow.io.IOSystemBinding.on_event","snow/utils/AbstractClass.hx",140,0x08288ed2)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_event,"_event")
		HX_STACK_LINE(140)
		HX_STACK_DO_THROW(HX_CSTRING("abstract method, must override"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(IOSystemBinding_obj,on_event,(void))

Void IOSystemBinding_obj::url_open( ::String _url){
{
		HX_STACK_FRAME("snow.io.IOSystemBinding","url_open",0xc17462d5,"snow.io.IOSystemBinding.url_open","snow/utils/AbstractClass.hx",140,0x08288ed2)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_url,"_url")
		HX_STACK_LINE(140)
		HX_STACK_DO_THROW(HX_CSTRING("abstract method, must override"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(IOSystemBinding_obj,url_open,(void))

Void IOSystemBinding_obj::watch_add( ::String _path){
{
		HX_STACK_FRAME("snow.io.IOSystemBinding","watch_add",0x30f6bb96,"snow.io.IOSystemBinding.watch_add","snow/utils/AbstractClass.hx",140,0x08288ed2)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_path,"_path")
		HX_STACK_LINE(140)
		HX_STACK_DO_THROW(HX_CSTRING("abstract method, must override"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(IOSystemBinding_obj,watch_add,(void))

Void IOSystemBinding_obj::watch_remove( ::String _path){
{
		HX_STACK_FRAME("snow.io.IOSystemBinding","watch_remove",0xb09569ef,"snow.io.IOSystemBinding.watch_remove","snow/utils/AbstractClass.hx",140,0x08288ed2)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_path,"_path")
		HX_STACK_LINE(140)
		HX_STACK_DO_THROW(HX_CSTRING("abstract method, must override"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(IOSystemBinding_obj,watch_remove,(void))

::String IOSystemBinding_obj::dialog_open( ::String __o__title,Dynamic _filters){
::String _title = __o__title.Default(HX_CSTRING("Select file"));
	HX_STACK_FRAME("snow.io.IOSystemBinding","dialog_open",0x6bed13c6,"snow.io.IOSystemBinding.dialog_open","snow/utils/AbstractClass.hx",142,0x08288ed2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_title,"_title")
	HX_STACK_ARG(_filters,"_filters")
{
		HX_STACK_LINE(142)
		HX_STACK_DO_THROW(HX_CSTRING("abstract method, must override"));
		HX_STACK_LINE(142)
		return null();
	}
}


HX_DEFINE_DYNAMIC_FUNC2(IOSystemBinding_obj,dialog_open,return )

::String IOSystemBinding_obj::dialog_save( ::String __o__title,Dynamic _filter){
::String _title = __o__title.Default(HX_CSTRING("Save file"));
	HX_STACK_FRAME("snow.io.IOSystemBinding","dialog_save",0x6e869b39,"snow.io.IOSystemBinding.dialog_save","snow/utils/AbstractClass.hx",142,0x08288ed2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_title,"_title")
	HX_STACK_ARG(_filter,"_filter")
{
		HX_STACK_LINE(142)
		HX_STACK_DO_THROW(HX_CSTRING("abstract method, must override"));
		HX_STACK_LINE(142)
		return null();
	}
}


HX_DEFINE_DYNAMIC_FUNC2(IOSystemBinding_obj,dialog_save,return )

::String IOSystemBinding_obj::dialog_folder( ::String __o__title){
::String _title = __o__title.Default(HX_CSTRING("Select folder"));
	HX_STACK_FRAME("snow.io.IOSystemBinding","dialog_folder",0xe82a7daa,"snow.io.IOSystemBinding.dialog_folder","snow/utils/AbstractClass.hx",142,0x08288ed2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_title,"_title")
{
		HX_STACK_LINE(142)
		HX_STACK_DO_THROW(HX_CSTRING("abstract method, must override"));
		HX_STACK_LINE(142)
		return null();
	}
}


HX_DEFINE_DYNAMIC_FUNC1(IOSystemBinding_obj,dialog_folder,return )


IOSystemBinding_obj::IOSystemBinding_obj()
{
}

void IOSystemBinding_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(IOSystemBinding);
	HX_MARK_MEMBER_NAME(manager,"manager");
	HX_MARK_MEMBER_NAME(lib,"lib");
	HX_MARK_END_CLASS();
}

void IOSystemBinding_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(manager,"manager");
	HX_VISIT_MEMBER_NAME(lib,"lib");
}

Dynamic IOSystemBinding_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"lib") ) { return lib; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"manager") ) { return manager; }
		if (HX_FIELD_EQ(inName,"process") ) { return process_dyn(); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"on_event") ) { return on_event_dyn(); }
		if (HX_FIELD_EQ(inName,"url_open") ) { return url_open_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"watch_add") ) { return watch_add_dyn(); }
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
	}
	return super::__Field(inName,inCallProp);
}

Dynamic IOSystemBinding_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"lib") ) { lib=inValue.Cast< ::snow::Snow >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"manager") ) { manager=inValue.Cast< ::snow::io::IO >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void IOSystemBinding_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("manager"));
	outFields->push(HX_CSTRING("lib"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::snow::io::IO*/ ,(int)offsetof(IOSystemBinding_obj,manager),HX_CSTRING("manager")},
	{hx::fsObject /*::snow::Snow*/ ,(int)offsetof(IOSystemBinding_obj,lib),HX_CSTRING("lib")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("manager"),
	HX_CSTRING("lib"),
	HX_CSTRING("init"),
	HX_CSTRING("process"),
	HX_CSTRING("destroy"),
	HX_CSTRING("on_event"),
	HX_CSTRING("url_open"),
	HX_CSTRING("watch_add"),
	HX_CSTRING("watch_remove"),
	HX_CSTRING("dialog_open"),
	HX_CSTRING("dialog_save"),
	HX_CSTRING("dialog_folder"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(IOSystemBinding_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(IOSystemBinding_obj::__mClass,"__mClass");
};

#endif

Class IOSystemBinding_obj::__mClass;

void IOSystemBinding_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("snow.io.IOSystemBinding"), hx::TCanCast< IOSystemBinding_obj> ,sStaticFields,sMemberFields,
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

void IOSystemBinding_obj::__boot()
{
}

} // end namespace snow
} // end namespace io
