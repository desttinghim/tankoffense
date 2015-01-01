#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Sys
#include <Sys.h>
#endif
#ifndef INCLUDED_cpp_Lib
#include <cpp/Lib.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_io_Input
#include <haxe/io/Input.h>
#endif
#ifndef INCLUDED_snow_utils_Libs
#include <snow/utils/Libs.h>
#endif
#ifndef INCLUDED_sys_io_Process
#include <sys/io/Process.h>
#endif
namespace snow{
namespace utils{

Void Libs_obj::__construct()
{
	return null();
}

//Libs_obj::~Libs_obj() { }

Dynamic Libs_obj::__CreateEmpty() { return  new Libs_obj; }
hx::ObjectPtr< Libs_obj > Libs_obj::__new()
{  hx::ObjectPtr< Libs_obj > result = new Libs_obj();
	result->__construct();
	return result;}

Dynamic Libs_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Libs_obj > result = new Libs_obj();
	result->__construct();
	return result;}

::haxe::ds::StringMap Libs_obj::__moduleNames;

Dynamic Libs_obj::tryLoad( ::String name,::String library,::String func,int args){
	HX_STACK_FRAME("snow.utils.Libs","tryLoad",0x92f359a9,"snow.utils.Libs.tryLoad","snow/utils/Libs.hx",8,0xdaa870e6)
	HX_STACK_ARG(name,"name")
	HX_STACK_ARG(library,"library")
	HX_STACK_ARG(func,"func")
	HX_STACK_ARG(args,"args")
	HX_STACK_LINE(12)
	try
	{
	HX_STACK_CATCHABLE(Dynamic, 0);
	{
		HX_STACK_LINE(15)
		Dynamic result = ::cpp::Lib_obj::load(name,func,args);		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(22)
		if (((result != null()))){
			HX_STACK_LINE(24)
			::snow::utils::Libs_obj::loaderTrace((HX_CSTRING("Got result ") + name));
			HX_STACK_LINE(25)
			::snow::utils::Libs_obj::__moduleNames->set(library,name);
			HX_STACK_LINE(27)
			return result;
		}
	}
	}
	catch(Dynamic __e){
		{
			HX_STACK_BEGIN_CATCH
			Dynamic e = __e;{
				HX_STACK_LINE(33)
				::snow::utils::Libs_obj::loaderTrace((HX_CSTRING("Failed to load : ") + name));
			}
		}
	}
	HX_STACK_LINE(39)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Libs_obj,tryLoad,return )

::String Libs_obj::findHaxeLib( ::String library){
	HX_STACK_FRAME("snow.utils.Libs","findHaxeLib",0x6f9a142e,"snow.utils.Libs.findHaxeLib","snow/utils/Libs.hx",64,0xdaa870e6)
	HX_STACK_ARG(library,"library")
	HX_STACK_LINE(66)
	try
	{
	HX_STACK_CATCHABLE(Dynamic, 0);
	{
		HX_STACK_LINE(70)
		::sys::io::Process proc = ::sys::io::Process_obj::__new(HX_CSTRING("haxelib"),Array_obj< ::String >::__new().Add(HX_CSTRING("path")).Add(library));		HX_STACK_VAR(proc,"proc");
		HX_STACK_LINE(72)
		if (((proc != null()))){
			HX_STACK_LINE(74)
			::haxe::io::Input stream = proc->_stdout;		HX_STACK_VAR(stream,"stream");
			HX_STACK_LINE(76)
			try
			{
			HX_STACK_CATCHABLE(Dynamic, 0);
			{
				HX_STACK_LINE(78)
				while((true)){
					HX_STACK_LINE(80)
					::String s = stream->readLine();		HX_STACK_VAR(s,"s");
					HX_STACK_LINE(82)
					::String _g = s.substr((int)0,(int)1);		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(82)
					if (((_g != HX_CSTRING("-")))){
						HX_STACK_LINE(84)
						stream->close();
						HX_STACK_LINE(85)
						proc->close();
						HX_STACK_LINE(86)
						::snow::utils::Libs_obj::loaderTrace((HX_CSTRING("Found haxelib ") + s));
						HX_STACK_LINE(87)
						return s;
					}
				}
			}
			}
			catch(Dynamic __e){
				{
					HX_STACK_BEGIN_CATCH
					Dynamic e = __e;{
					}
				}
			}
			HX_STACK_LINE(95)
			stream->close();
			HX_STACK_LINE(96)
			proc->close();
		}
	}
	}
	catch(Dynamic __e){
		{
			HX_STACK_BEGIN_CATCH
			Dynamic e = __e;{
			}
		}
	}
	HX_STACK_LINE(104)
	return HX_CSTRING("");
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Libs_obj,findHaxeLib,return )

::String Libs_obj::get_system_name( ){
	HX_STACK_FRAME("snow.utils.Libs","get_system_name",0xc815851a,"snow.utils.Libs.get_system_name","snow/utils/Libs.hx",108,0xdaa870e6)
	HX_STACK_LINE(112)
	Dynamic sys_string = ::cpp::Lib_obj::load(HX_CSTRING("std"),HX_CSTRING("sys_string"),(int)0);		HX_STACK_VAR(sys_string,"sys_string");
	HX_STACK_LINE(113)
	return sys_string().Cast< ::String >();
	HX_STACK_LINE(123)
	return HX_CSTRING("unknown");
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Libs_obj,get_system_name,return )

Dynamic Libs_obj::load( ::String library,::String method,hx::Null< int >  __o_args){
int args = __o_args.Default(0);
	HX_STACK_FRAME("snow.utils.Libs","load",0xa576b07e,"snow.utils.Libs.load","snow/utils/Libs.hx",160,0xdaa870e6)
	HX_STACK_ARG(library,"library")
	HX_STACK_ARG(method,"method")
	HX_STACK_ARG(args,"args")
{
		HX_STACK_LINE(173)
		if (((::snow::utils::Libs_obj::__moduleNames == null()))){
			HX_STACK_LINE(173)
			::haxe::ds::StringMap _g = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(173)
			::snow::utils::Libs_obj::__moduleNames = _g;
		}
		HX_STACK_LINE(174)
		if ((::snow::utils::Libs_obj::__moduleNames->exists(library))){
			HX_STACK_LINE(177)
			::String _g1 = ::snow::utils::Libs_obj::__moduleNames->get(library);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(177)
			return ::cpp::Lib_obj::load(_g1,method,args);
		}
		HX_STACK_LINE(184)
		::snow::utils::Libs_obj::__moduleNames->set(library,library);
		HX_STACK_LINE(186)
		Dynamic result = ::snow::utils::Libs_obj::tryLoad((HX_CSTRING("./") + library),library,method,args);		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(188)
		if (((result == null()))){
			HX_STACK_LINE(189)
			Dynamic _g2 = ::snow::utils::Libs_obj::tryLoad((HX_CSTRING(".\\") + library),library,method,args);		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(189)
			result = _g2;
		}
		HX_STACK_LINE(192)
		if (((result == null()))){
			HX_STACK_LINE(193)
			Dynamic _g3 = ::snow::utils::Libs_obj::tryLoad(library,library,method,args);		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(193)
			result = _g3;
		}
		HX_STACK_LINE(196)
		if (((result == null()))){
			HX_STACK_LINE(198)
			::String _g4 = ::snow::utils::Libs_obj::get_system_name().substr((int)7,null()).toLowerCase();		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(198)
			::String slash;		HX_STACK_VAR(slash,"slash");
			HX_STACK_LINE(198)
			if (((_g4 == HX_CSTRING("windows")))){
				HX_STACK_LINE(198)
				slash = HX_CSTRING("\\");
			}
			else{
				HX_STACK_LINE(198)
				slash = HX_CSTRING("/");
			}
			HX_STACK_LINE(199)
			::String haxelib = ::snow::utils::Libs_obj::findHaxeLib(HX_CSTRING("snow"));		HX_STACK_VAR(haxelib,"haxelib");
			HX_STACK_LINE(201)
			if (((haxelib != HX_CSTRING("")))){
				HX_STACK_LINE(202)
				::String _g5 = ::snow::utils::Libs_obj::get_system_name();		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(202)
				::String _g6 = ((((haxelib + slash) + HX_CSTRING("ndll")) + slash) + _g5);		HX_STACK_VAR(_g6,"_g6");
				HX_STACK_LINE(202)
				::String _g7 = (_g6 + slash);		HX_STACK_VAR(_g7,"_g7");
				HX_STACK_LINE(202)
				::String _g8 = (_g7 + library);		HX_STACK_VAR(_g8,"_g8");
				HX_STACK_LINE(202)
				Dynamic _g9 = ::snow::utils::Libs_obj::tryLoad(_g8,library,method,args);		HX_STACK_VAR(_g9,"_g9");
				HX_STACK_LINE(202)
				result = _g9;
				HX_STACK_LINE(203)
				if (((result == null()))){
					HX_STACK_LINE(204)
					::String _g10 = ::snow::utils::Libs_obj::get_system_name();		HX_STACK_VAR(_g10,"_g10");
					HX_STACK_LINE(204)
					::String _g11 = ((((haxelib + slash) + HX_CSTRING("ndll")) + slash) + _g10);		HX_STACK_VAR(_g11,"_g11");
					HX_STACK_LINE(204)
					::String _g12 = (_g11 + HX_CSTRING("64"));		HX_STACK_VAR(_g12,"_g12");
					HX_STACK_LINE(204)
					::String _g13 = (_g12 + slash);		HX_STACK_VAR(_g13,"_g13");
					HX_STACK_LINE(204)
					::String _g14 = (_g13 + library);		HX_STACK_VAR(_g14,"_g14");
					HX_STACK_LINE(204)
					Dynamic _g15 = ::snow::utils::Libs_obj::tryLoad(_g14,library,method,args);		HX_STACK_VAR(_g15,"_g15");
					HX_STACK_LINE(204)
					result = _g15;
				}
			}
		}
		HX_STACK_LINE(210)
		::String _g16 = ::Std_obj::string(result);		HX_STACK_VAR(_g16,"_g16");
		HX_STACK_LINE(210)
		::String _g17 = (HX_CSTRING("Result : ") + _g16);		HX_STACK_VAR(_g17,"_g17");
		HX_STACK_LINE(210)
		::snow::utils::Libs_obj::loaderTrace(_g17);
		HX_STACK_LINE(218)
		return result;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Libs_obj,load,return )

Void Libs_obj::loaderTrace( ::String message){
{
		HX_STACK_FRAME("snow.utils.Libs","loaderTrace",0x1087761a,"snow.utils.Libs.loaderTrace","snow/utils/Libs.hx",222,0xdaa870e6)
		HX_STACK_ARG(message,"message")
		HX_STACK_LINE(228)
		Dynamic get_env = ::cpp::Lib_obj::load(HX_CSTRING("std"),HX_CSTRING("get_env"),(int)1);		HX_STACK_VAR(get_env,"get_env");
		HX_STACK_LINE(229)
		Dynamic _g = get_env(HX_CSTRING("SNOW_LOAD_DEBUG"));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(229)
		bool debug = (_g != null());		HX_STACK_VAR(debug,"debug");
		HX_STACK_LINE(237)
		if ((debug)){
			HX_STACK_LINE(238)
			::Sys_obj::println(message);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Libs_obj,loaderTrace,(void))


Libs_obj::Libs_obj()
{
}

Dynamic Libs_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"load") ) { return load_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"tryLoad") ) { return tryLoad_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"findHaxeLib") ) { return findHaxeLib_dyn(); }
		if (HX_FIELD_EQ(inName,"loaderTrace") ) { return loaderTrace_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__moduleNames") ) { return __moduleNames; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_system_name") ) { return get_system_name_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Libs_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 13:
		if (HX_FIELD_EQ(inName,"__moduleNames") ) { __moduleNames=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Libs_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("__moduleNames"),
	HX_CSTRING("tryLoad"),
	HX_CSTRING("findHaxeLib"),
	HX_CSTRING("get_system_name"),
	HX_CSTRING("load"),
	HX_CSTRING("loaderTrace"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Libs_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Libs_obj::__moduleNames,"__moduleNames");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Libs_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Libs_obj::__moduleNames,"__moduleNames");
};

#endif

Class Libs_obj::__mClass;

void Libs_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("snow.utils.Libs"), hx::TCanCast< Libs_obj> ,sStaticFields,sMemberFields,
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

void Libs_obj::__boot()
{
	__moduleNames= null();
}

} // end namespace snow
} // end namespace utils
