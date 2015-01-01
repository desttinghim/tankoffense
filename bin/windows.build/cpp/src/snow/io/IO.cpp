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
#ifndef INCLUDED_snow_platform_native_io_IOSystem
#include <snow/platform/native/io/IOSystem.h>
#endif
#ifndef INCLUDED_snow_utils_AbstractClass
#include <snow/utils/AbstractClass.h>
#endif
namespace snow{
namespace io{

Void IO_obj::__construct(::snow::Snow _lib)
{
HX_STACK_FRAME("snow.io.IO","new",0xf987fdb5,"snow.io.IO.new","snow/io/IO.hx",14,0x17fab4bb)
HX_STACK_THIS(this)
HX_STACK_ARG(_lib,"_lib")
{
	HX_STACK_LINE(16)
	this->lib = _lib;
	HX_STACK_LINE(18)
	::snow::platform::native::io::IOSystem _g = ::snow::platform::native::io::IOSystem_obj::__new(hx::ObjectPtr<OBJ_>(this),this->lib);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(18)
	this->platform = _g;
	HX_STACK_LINE(20)
	this->platform->init();
}
;
	return null();
}

//IO_obj::~IO_obj() { }

Dynamic IO_obj::__CreateEmpty() { return  new IO_obj; }
hx::ObjectPtr< IO_obj > IO_obj::__new(::snow::Snow _lib)
{  hx::ObjectPtr< IO_obj > result = new IO_obj();
	result->__construct(_lib);
	return result;}

Dynamic IO_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< IO_obj > result = new IO_obj();
	result->__construct(inArgs[0]);
	return result;}

Void IO_obj::url_open( ::String _url){
{
		HX_STACK_FRAME("snow.io.IO","url_open",0x09cb8065,"snow.io.IO.url_open","snow/io/IO.hx",27,0x17fab4bb)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_url,"_url")
		HX_STACK_LINE(27)
		this->platform->url_open(_url);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(IO_obj,url_open,(void))

Void IO_obj::on_event( Dynamic _event){
{
		HX_STACK_FRAME("snow.io.IO","on_event",0x52a2f045,"snow.io.IO.on_event","snow/io/IO.hx",35,0x17fab4bb)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_event,"_event")
		HX_STACK_LINE(35)
		this->platform->on_event(_event);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(IO_obj,on_event,(void))

Void IO_obj::update( ){
{
		HX_STACK_FRAME("snow.io.IO","update",0x3d1a9bd4,"snow.io.IO.update","snow/io/IO.hx",43,0x17fab4bb)
		HX_STACK_THIS(this)
		HX_STACK_LINE(43)
		this->platform->process();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(IO_obj,update,(void))

Void IO_obj::destroy( ){
{
		HX_STACK_FRAME("snow.io.IO","destroy",0xc0e428cf,"snow.io.IO.destroy","snow/io/IO.hx",51,0x17fab4bb)
		HX_STACK_THIS(this)
		HX_STACK_LINE(51)
		this->platform->destroy();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(IO_obj,destroy,(void))


IO_obj::IO_obj()
{
}

void IO_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(IO);
	HX_MARK_MEMBER_NAME(lib,"lib");
	HX_MARK_MEMBER_NAME(platform,"platform");
	HX_MARK_END_CLASS();
}

void IO_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(lib,"lib");
	HX_VISIT_MEMBER_NAME(platform,"platform");
}

Dynamic IO_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"lib") ) { return lib; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"platform") ) { return platform; }
		if (HX_FIELD_EQ(inName,"url_open") ) { return url_open_dyn(); }
		if (HX_FIELD_EQ(inName,"on_event") ) { return on_event_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic IO_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"lib") ) { lib=inValue.Cast< ::snow::Snow >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"platform") ) { platform=inValue.Cast< ::snow::platform::native::io::IOSystem >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void IO_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("lib"));
	outFields->push(HX_CSTRING("platform"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::snow::Snow*/ ,(int)offsetof(IO_obj,lib),HX_CSTRING("lib")},
	{hx::fsObject /*::snow::platform::native::io::IOSystem*/ ,(int)offsetof(IO_obj,platform),HX_CSTRING("platform")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("lib"),
	HX_CSTRING("platform"),
	HX_CSTRING("url_open"),
	HX_CSTRING("on_event"),
	HX_CSTRING("update"),
	HX_CSTRING("destroy"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(IO_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(IO_obj::__mClass,"__mClass");
};

#endif

Class IO_obj::__mClass;

void IO_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("snow.io.IO"), hx::TCanCast< IO_obj> ,sStaticFields,sMemberFields,
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

void IO_obj::__boot()
{
}

} // end namespace snow
} // end namespace io
