#include <hxcpp.h>

#ifndef INCLUDED_EReg
#include <EReg.h>
#endif
#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_Luxe
#include <Luxe.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_haxe_CallStack
#include <haxe/CallStack.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_StackItem
#include <haxe/StackItem.h>
#endif
#ifndef INCLUDED_haxe_crypto_Md5
#include <haxe/crypto/Md5.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_luxe_Core
#include <luxe/Core.h>
#endif
#ifndef INCLUDED_luxe_utils_GeometryUtils
#include <luxe/utils/GeometryUtils.h>
#endif
#ifndef INCLUDED_luxe_utils_Murmur3
#include <luxe/utils/Murmur3.h>
#endif
#ifndef INCLUDED_luxe_utils_UUID
#include <luxe/utils/UUID.h>
#endif
#ifndef INCLUDED_luxe_utils_Utils
#include <luxe/utils/Utils.h>
#endif
#ifndef INCLUDED_snow_App
#include <snow/App.h>
#endif
#ifndef INCLUDED_snow_Snow
#include <snow/Snow.h>
#endif
#ifndef INCLUDED_snow_assets_Assets
#include <snow/assets/Assets.h>
#endif
namespace luxe{
namespace utils{

Void Utils_obj::__construct(::luxe::Core _luxe)
{
HX_STACK_FRAME("luxe.utils.Utils","new",0x3458be4e,"luxe.utils.Utils.new","luxe/utils/Utils.hx",18,0x2d9d0da4)
HX_STACK_THIS(this)
HX_STACK_ARG(_luxe,"_luxe")
{
	HX_STACK_LINE(21)
	this->core = _luxe;
	HX_STACK_LINE(23)
	::luxe::utils::GeometryUtils _g = ::luxe::utils::GeometryUtils_obj::__new(this->core);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(23)
	this->geometry = _g;
	HX_STACK_LINE(25)
	this->_byte_levels = Array_obj< ::String >::__new().Add(HX_CSTRING("bytes")).Add(HX_CSTRING("Kb")).Add(HX_CSTRING("MB")).Add(HX_CSTRING("GB")).Add(HX_CSTRING("TB"));
}
;
	return null();
}

//Utils_obj::~Utils_obj() { }

Dynamic Utils_obj::__CreateEmpty() { return  new Utils_obj; }
hx::ObjectPtr< Utils_obj > Utils_obj::__new(::luxe::Core _luxe)
{  hx::ObjectPtr< Utils_obj > result = new Utils_obj();
	result->__construct(_luxe);
	return result;}

Dynamic Utils_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Utils_obj > result = new Utils_obj();
	result->__construct(inArgs[0]);
	return result;}

::String Utils_obj::uniqueid( Dynamic val){
	HX_STACK_FRAME("luxe.utils.Utils","uniqueid",0xd69a687e,"luxe.utils.Utils.uniqueid","luxe/utils/Utils.hx",31,0x2d9d0da4)
	HX_STACK_THIS(this)
	HX_STACK_ARG(val,"val")
	HX_STACK_LINE(35)
	if (((val == null()))){
		HX_STACK_LINE(35)
		int _g = ::Std_obj::random((int)2147483647);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(35)
		val = _g;
	}

	HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_1)
	::String run(int value){
		HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","luxe/utils/Utils.hx",38,0x2d9d0da4)
		HX_STACK_ARG(value,"value")
		{
			HX_STACK_LINE(38)
			if (((value > (int)9))){
				HX_STACK_LINE(39)
				int ascii = ((int)65 + ((value - (int)10)));		HX_STACK_VAR(ascii,"ascii");
				HX_STACK_LINE(40)
				if (((ascii > (int)90))){
					HX_STACK_LINE(40)
					hx::AddEq(ascii,(int)6);
				}
				HX_STACK_LINE(41)
				return ::String::fromCharCode(ascii);
			}
			else{
				HX_STACK_LINE(42)
				return ::Std_obj::string(value).charAt((int)0);
			}
			HX_STACK_LINE(38)
			return null();
		}
		return null();
	}
	HX_END_LOCAL_FUNC1(return)

	HX_STACK_LINE(37)
	Dynamic to_char =  Dynamic(new _Function_1_1());		HX_STACK_VAR(to_char,"to_char");
	HX_STACK_LINE(45)
	int r = ::Std_obj::_int(hx::Mod(val,(int)62));		HX_STACK_VAR(r,"r");
	HX_STACK_LINE(46)
	int q = ::Std_obj::_int((Float(val) / Float((int)62)));		HX_STACK_VAR(q,"q");
	HX_STACK_LINE(47)
	if (((q > (int)0))){
		HX_STACK_LINE(47)
		::String _g1 = this->uniqueid(q);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(47)
		::String _g2 = to_char(r).Cast< ::String >();		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(47)
		return (_g1 + _g2);
	}
	else{
		HX_STACK_LINE(48)
		::String _g3 = to_char(r).Cast< ::String >();		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(48)
		return ::Std_obj::string(_g3);
	}
	HX_STACK_LINE(47)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Utils_obj,uniqueid,return )

int Utils_obj::uniquehash( ){
	HX_STACK_FRAME("luxe.utils.Utils","uniquehash",0x7fb8eb31,"luxe.utils.Utils.uniquehash","luxe/utils/Utils.hx",55,0x2d9d0da4)
	HX_STACK_THIS(this)
	HX_STACK_LINE(56)
	::String _g = this->uniqueid(null());		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(56)
	return this->hash(_g);
}


HX_DEFINE_DYNAMIC_FUNC0(Utils_obj,uniquehash,return )

int Utils_obj::hash( ::String string){
	HX_STACK_FRAME("luxe.utils.Utils","hash",0x95537220,"luxe.utils.Utils.hash","luxe/utils/Utils.hx",62,0x2d9d0da4)
	HX_STACK_THIS(this)
	HX_STACK_ARG(string,"string")
	HX_STACK_LINE(62)
	return this->hashdjb2(string);
}


HX_DEFINE_DYNAMIC_FUNC1(Utils_obj,hash,return )

int Utils_obj::hashmurmur( ::haxe::io::Bytes _bytes,Dynamic __o__seed){
Dynamic _seed = __o__seed.Default(0);
	HX_STACK_FRAME("luxe.utils.Utils","hashmurmur",0xd5996c60,"luxe.utils.Utils.hashmurmur","luxe/utils/Utils.hx",69,0x2d9d0da4)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_bytes,"_bytes")
	HX_STACK_ARG(_seed,"_seed")
{
		HX_STACK_LINE(69)
		return ::luxe::utils::Murmur3_obj::hash(_bytes,_seed);
	}
}


HX_DEFINE_DYNAMIC_FUNC2(Utils_obj,hashmurmur,return )

int Utils_obj::hashdjb2( ::String string){
	HX_STACK_FRAME("luxe.utils.Utils","hashdjb2",0x98311cb6,"luxe.utils.Utils.hashdjb2","luxe/utils/Utils.hx",74,0x2d9d0da4)
	HX_STACK_THIS(this)
	HX_STACK_ARG(string,"string")
	HX_STACK_LINE(77)
	int _hash = (int)5381;		HX_STACK_VAR(_hash,"_hash");
	HX_STACK_LINE(78)
	{
		HX_STACK_LINE(78)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(78)
		int _g = string.length;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(78)
		while((true)){
			HX_STACK_LINE(78)
			if ((!(((_g1 < _g))))){
				HX_STACK_LINE(78)
				break;
			}
			HX_STACK_LINE(78)
			int i = (_g1)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(79)
			Dynamic _g2 = string.charCodeAt(i);		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(79)
			int _g11 = ((((int(_hash) << int((int)5))) + _hash) + _g2);		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(79)
			_hash = _g11;
		}
	}
	HX_STACK_LINE(82)
	return _hash;
}


HX_DEFINE_DYNAMIC_FUNC1(Utils_obj,hashdjb2,return )

::String Utils_obj::uniqueid2( ){
	HX_STACK_FRAME("luxe.utils.Utils","uniqueid2",0xf08105f4,"luxe.utils.Utils.uniqueid2","luxe/utils/Utils.hx",87,0x2d9d0da4)
	HX_STACK_THIS(this)
	HX_STACK_LINE(89)
	Float _g = ::Luxe_obj::get_time();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(89)
	Float _g1 = ::Math_obj::random();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(89)
	Float _g2 = (_g * _g1);		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(89)
	::String _g3 = ::Std_obj::string(_g2);		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(89)
	return ::haxe::crypto::Md5_obj::encode(_g3);
}


HX_DEFINE_DYNAMIC_FUNC0(Utils_obj,uniqueid2,return )

::String Utils_obj::uuid( ){
	HX_STACK_FRAME("luxe.utils.Utils","uuid",0x9dfa5c8d,"luxe.utils.Utils.uuid","luxe/utils/Utils.hx",96,0x2d9d0da4)
	HX_STACK_THIS(this)
	HX_STACK_LINE(96)
	return ::luxe::utils::UUID_obj::get();
}


HX_DEFINE_DYNAMIC_FUNC0(Utils_obj,uuid,return )

::String Utils_obj::stacktrace( Dynamic __o__depth){
Dynamic _depth = __o__depth.Default(100);
	HX_STACK_FRAME("luxe.utils.Utils","stacktrace",0x8b198e0f,"luxe.utils.Utils.stacktrace","luxe/utils/Utils.hx",101,0x2d9d0da4)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_depth,"_depth")
{
		HX_STACK_LINE(103)
		::String result = HX_CSTRING("\n");		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(105)
		Array< ::Dynamic > stack = ::haxe::CallStack_obj::callStack();		HX_STACK_VAR(stack,"stack");
		HX_STACK_LINE(107)
		stack->shift().StaticCast< ::haxe::StackItem >();
		HX_STACK_LINE(108)
		stack->reverse();
		HX_STACK_LINE(110)
		Float _g = ::Math_obj::min(stack->length,_depth);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(110)
		int total = ::Std_obj::_int(_g);		HX_STACK_VAR(total,"total");
		HX_STACK_LINE(112)
		{
			HX_STACK_LINE(112)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(112)
			while((true)){
				HX_STACK_LINE(112)
				if ((!(((_g1 < total))))){
					HX_STACK_LINE(112)
					break;
				}
				HX_STACK_LINE(112)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(113)
				::haxe::StackItem stackitem = stack->__get(i).StaticCast< ::haxe::StackItem >();		HX_STACK_VAR(stackitem,"stackitem");
				HX_STACK_LINE(115)
				{
					HX_STACK_LINE(115)
					::haxe::StackItem _g11 = stack->__get(i).StaticCast< ::haxe::StackItem >();		HX_STACK_VAR(_g11,"_g11");
					HX_STACK_LINE(115)
					switch( (int)(_g11->__Index())){
						case (int)2: {
							HX_STACK_LINE(115)
							int line = (::haxe::StackItem(_g11))->__Param(2);		HX_STACK_VAR(line,"line");
							HX_STACK_LINE(115)
							::String file = (::haxe::StackItem(_g11))->__Param(1);		HX_STACK_VAR(file,"file");
							HX_STACK_LINE(115)
							::haxe::StackItem s = (::haxe::StackItem(_g11))->__Param(0);		HX_STACK_VAR(s,"s");
							HX_STACK_LINE(117)
							switch( (int)(s->__Index())){
								case (int)3: {
									HX_STACK_LINE(117)
									::String method = (::haxe::StackItem(s))->__Param(1);		HX_STACK_VAR(method,"method");
									HX_STACK_LINE(117)
									::String classname = (::haxe::StackItem(s))->__Param(0);		HX_STACK_VAR(classname,"classname");
									HX_STACK_LINE(119)
									hx::AddEq(result,(((((((HX_CSTRING("   at ") + file) + HX_CSTRING(":")) + line) + HX_CSTRING(": ")) + classname) + HX_CSTRING(".")) + method));
								}
								;break;
								default: {
								}
							}
						}
						;break;
						default: {
						}
					}
				}
				HX_STACK_LINE(125)
				if (((i != (total - (int)1)))){
					HX_STACK_LINE(126)
					hx::AddEq(result,HX_CSTRING("\n"));
				}
			}
		}
		HX_STACK_LINE(130)
		return result;
	}
}


HX_DEFINE_DYNAMIC_FUNC1(Utils_obj,stacktrace,return )

bool Utils_obj::path_is_relative( ::String _path){
	HX_STACK_FRAME("luxe.utils.Utils","path_is_relative",0x5216f779,"luxe.utils.Utils.path_is_relative","luxe/utils/Utils.hx",135,0x2d9d0da4)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_path,"_path")
	HX_STACK_LINE(137)
	::String _g = _path.charAt((int)0);		HX_STACK_VAR(_g,"_g");
	struct _Function_1_1{
		inline static bool Block( ::String &_path){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/utils/Utils.hx",138,0x2d9d0da4)
			{
				HX_STACK_LINE(138)
				::String _g1 = _path.charAt((int)0);		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(138)
				return (_g1 != HX_CSTRING("/"));
			}
			return null();
		}
	};
	struct _Function_1_2{
		inline static bool Block( ::String &_path){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/utils/Utils.hx",139,0x2d9d0da4)
			{
				HX_STACK_LINE(139)
				int _g2 = _path.indexOf(HX_CSTRING(":\\"),null());		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(139)
				return (_g2 == (int)-1);
			}
			return null();
		}
	};
	struct _Function_1_3{
		inline static bool Block( ::String &_path){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/utils/Utils.hx",140,0x2d9d0da4)
			{
				HX_STACK_LINE(140)
				int _g3 = _path.indexOf(HX_CSTRING(":/"),null());		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(140)
				return (_g3 == (int)-1);
			}
			return null();
		}
	};
	HX_STACK_LINE(137)
	if (((  (((  (((  (((_g != HX_CSTRING("#")))) ? bool(_Function_1_1::Block(_path)) : bool(false) ))) ? bool(_Function_1_2::Block(_path)) : bool(false) ))) ? bool(_Function_1_3::Block(_path)) : bool(false) ))){
		HX_STACK_LINE(142)
		int _g4 = _path.indexOf(HX_CSTRING("//"),null());		HX_STACK_VAR(_g4,"_g4");
		struct _Function_2_1{
			inline static bool Block( ::String &_path){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/utils/Utils.hx",143,0x2d9d0da4)
				{
					HX_STACK_LINE(143)
					int _g5 = _path.indexOf(HX_CSTRING("//"),null());		HX_STACK_VAR(_g5,"_g5");
					HX_STACK_LINE(143)
					int _g6 = _path.indexOf(HX_CSTRING("#"),null());		HX_STACK_VAR(_g6,"_g6");
					HX_STACK_LINE(143)
					return (_g5 > _g6);
				}
				return null();
			}
		};
		HX_STACK_LINE(142)
		if ((!(((  ((!(((_g4 == (int)-1))))) ? bool(_Function_2_1::Block(_path)) : bool(true) ))))){
			HX_STACK_LINE(144)
			int _g7 = _path.indexOf(HX_CSTRING("//"),null());		HX_STACK_VAR(_g7,"_g7");
			HX_STACK_LINE(144)
			int _g8 = _path.indexOf(HX_CSTRING("?"),null());		HX_STACK_VAR(_g8,"_g8");
			HX_STACK_LINE(144)
			return (_g7 > _g8);
		}
		else{
			HX_STACK_LINE(142)
			return true;
		}
	}
	else{
		HX_STACK_LINE(137)
		return false;
	}
	HX_STACK_LINE(137)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(Utils_obj,path_is_relative,return )

Array< ::String > Utils_obj::find_assets_image_sequence( ::String _name,::String __o__ext,::String __o__start){
::String _ext = __o__ext.Default(HX_CSTRING(".png"));
::String _start = __o__start.Default(HX_CSTRING("1"));
	HX_STACK_FRAME("luxe.utils.Utils","find_assets_image_sequence",0x66eeea6d,"luxe.utils.Utils.find_assets_image_sequence","luxe/utils/Utils.hx",148,0x2d9d0da4)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_name,"_name")
	HX_STACK_ARG(_ext,"_ext")
	HX_STACK_ARG(_start,"_start")
{
		HX_STACK_LINE(150)
		Array< ::String > _final = Array_obj< ::String >::__new();		HX_STACK_VAR(_final,"_final");
		HX_STACK_LINE(152)
		::String _sequence_type = HX_CSTRING("");		HX_STACK_VAR(_sequence_type,"_sequence_type");
		HX_STACK_LINE(153)
		::EReg _pattern_regex = null();		HX_STACK_VAR(_pattern_regex,"_pattern_regex");
		HX_STACK_LINE(155)
		::String _type0 = ((_name + _start) + _ext);		HX_STACK_VAR(_type0,"_type0");
		HX_STACK_LINE(156)
		::EReg _type0_re = ::EReg_obj::__new(((HX_CSTRING("(") + _name) + HX_CSTRING(")(\\d\\b)")),HX_CSTRING("gi"));		HX_STACK_VAR(_type0_re,"_type0_re");
		HX_STACK_LINE(157)
		::String _type1 = (((_name + HX_CSTRING("_")) + _start) + _ext);		HX_STACK_VAR(_type1,"_type1");
		HX_STACK_LINE(158)
		::EReg _type1_re = ::EReg_obj::__new(((HX_CSTRING("(") + _name) + HX_CSTRING(")(_\\d\\b)")),HX_CSTRING("gi"));		HX_STACK_VAR(_type1_re,"_type1_re");
		HX_STACK_LINE(159)
		::String _type2 = (((_name + HX_CSTRING("-")) + _start) + _ext);		HX_STACK_VAR(_type2,"_type2");
		HX_STACK_LINE(160)
		::EReg _type2_re = ::EReg_obj::__new(((HX_CSTRING("(") + _name) + HX_CSTRING(")(-\\d\\b)")),HX_CSTRING("gi"));		HX_STACK_VAR(_type2_re,"_type2_re");
		HX_STACK_LINE(163)
		if ((this->core->app->assets->listed(_type0))){
			HX_STACK_LINE(164)
			_sequence_type = _type0;
			HX_STACK_LINE(165)
			_pattern_regex = _type0_re;
		}
		else{
			HX_STACK_LINE(166)
			if ((this->core->app->assets->listed(_type1))){
				HX_STACK_LINE(167)
				_sequence_type = _type1;
				HX_STACK_LINE(168)
				_pattern_regex = _type1_re;
			}
			else{
				HX_STACK_LINE(169)
				if ((this->core->app->assets->listed(_type2))){
					HX_STACK_LINE(170)
					_sequence_type = _type2;
					HX_STACK_LINE(171)
					_pattern_regex = _type2_re;
				}
				else{
					HX_STACK_LINE(173)
					::haxe::Log_obj::trace(((((((((HX_CSTRING("Sequence requested from ") + _name) + HX_CSTRING(" but no assets found like `")) + _type0) + HX_CSTRING("` or `")) + _type1) + HX_CSTRING("` or `")) + _type2) + HX_CSTRING("`")),hx::SourceInfo(HX_CSTRING("Utils.hx"),173,HX_CSTRING("luxe.utils.Utils"),HX_CSTRING("find_assets_image_sequence")));
				}
			}
		}
		HX_STACK_LINE(176)
		if (((_sequence_type != HX_CSTRING("")))){
			HX_STACK_LINE(177)
			for(::cpp::FastIterator_obj< Dynamic > *__it = ::cpp::CreateFastIterator< Dynamic >(this->core->app->assets->list->iterator());  __it->hasNext(); ){
				Dynamic _asset = __it->next();
				if ((_pattern_regex->match(_asset->__Field(HX_CSTRING("id"),true)))){
					HX_STACK_LINE(180)
					_final->push(_asset->__Field(HX_CSTRING("id"),true));
				}
;
			}

			HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_2_1)
			int run(::String a,::String b){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","luxe/utils/Utils.hx",184,0x2d9d0da4)
				HX_STACK_ARG(a,"a")
				HX_STACK_ARG(b,"b")
				{
					HX_STACK_LINE(184)
					if (((a == b))){
						HX_STACK_LINE(184)
						return (int)0;
					}
					HX_STACK_LINE(184)
					if (((a < b))){
						HX_STACK_LINE(184)
						return (int)-1;
					}
					HX_STACK_LINE(184)
					return (int)1;
				}
				return null();
			}
			HX_END_LOCAL_FUNC2(return)

			HX_STACK_LINE(184)
			_final->sort( Dynamic(new _Function_2_1()));
		}
		HX_STACK_LINE(187)
		return _final;
	}
}


HX_DEFINE_DYNAMIC_FUNC3(Utils_obj,find_assets_image_sequence,return )

Array< ::String > Utils_obj::text_wrap_column_knuth_plass( ::String _string,hx::Null< int >  __o__column){
int _column = __o__column.Default(80);
	HX_STACK_FRAME("luxe.utils.Utils","text_wrap_column_knuth_plass",0x0e2647d8,"luxe.utils.Utils.text_wrap_column_knuth_plass","luxe/utils/Utils.hx",193,0x2d9d0da4)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_string,"_string")
	HX_STACK_ARG(_column,"_column")
{
		HX_STACK_LINE(195)
		Array< ::String > result = Array_obj< ::String >::__new();		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(221)
		Array< ::String > words = Array_obj< ::String >::__new();		HX_STACK_VAR(words,"words");
		HX_STACK_LINE(222)
		Array< ::Dynamic > lengths = Array_obj< ::Dynamic >::__new().Add(Array_obj< int >::__new());		HX_STACK_VAR(lengths,"lengths");
		HX_STACK_LINE(223)
		::haxe::ds::IntMap badness;		HX_STACK_VAR(badness,"badness");
		HX_STACK_LINE(223)
		{
			HX_STACK_LINE(223)
			::haxe::ds::IntMap _g = ::haxe::ds::IntMap_obj::__new();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(223)
			_g->set((int)0,(int)0);
			HX_STACK_LINE(223)
			badness = _g;
		}
		HX_STACK_LINE(224)
		::haxe::ds::IntMap extra = ::haxe::ds::IntMap_obj::__new();		HX_STACK_VAR(extra,"extra");
		HX_STACK_LINE(226)
		{
			HX_STACK_LINE(226)
			::String s = _string;		HX_STACK_VAR(s,"s");
			HX_STACK_LINE(226)
			::EReg rgx = ::EReg_obj::__new(HX_CSTRING("(\\b[^\\s]+\\b)"),HX_CSTRING("gm"));		HX_STACK_VAR(rgx,"rgx");
			HX_STACK_LINE(226)
			while((true)){
				HX_STACK_LINE(226)
				if ((!(rgx->match(s)))){
					HX_STACK_LINE(226)
					break;
				}
				HX_STACK_LINE(226)
				::String _g = rgx->matched((int)1);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(226)
				words->push(_g);
				HX_STACK_LINE(226)
				::String _g1 = rgx->matchedRight();		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(226)
				s = _g1;
			}
			HX_STACK_LINE(226)
			if (((words->length == (int)0))){
				HX_STACK_LINE(226)
				words->push(_string);
			}
			HX_STACK_LINE(226)
			words;
		}

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,Array< ::Dynamic >,lengths)
		Void run(::String w){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","luxe/utils/Utils.hx",227,0x2d9d0da4)
			HX_STACK_ARG(w,"w")
			{
				HX_STACK_LINE(227)
				lengths->__get((int)0).StaticCast< Array< int > >()->push(w.length);
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(227)
		words->map( Dynamic(new _Function_1_1(lengths))).StaticCast< Array<Dynamic> >();
		HX_STACK_LINE(229)
		int n = words->length;		HX_STACK_VAR(n,"n");
		HX_STACK_LINE(231)
		{
			HX_STACK_LINE(231)
			int _g2 = (int)1;		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(231)
			int _g1 = (n + (int)1);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(231)
			while((true)){
				HX_STACK_LINE(231)
				if ((!(((_g2 < _g1))))){
					HX_STACK_LINE(231)
					break;
				}
				HX_STACK_LINE(231)
				int i = (_g2)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(233)
				::haxe::ds::IntMap sums = ::haxe::ds::IntMap_obj::__new();		HX_STACK_VAR(sums,"sums");
				HX_STACK_LINE(234)
				int k = i;		HX_STACK_VAR(k,"k");
				HX_STACK_LINE(236)
				while((true)){
					HX_STACK_LINE(236)
					int _g21;		HX_STACK_VAR(_g21,"_g21");
					HX_STACK_LINE(236)
					{
						HX_STACK_LINE(236)
						int total = (int)0;		HX_STACK_VAR(total,"total");
						HX_STACK_LINE(236)
						{
							HX_STACK_LINE(236)
							int _g = (k - (int)1);		HX_STACK_VAR(_g,"_g");
							HX_STACK_LINE(236)
							while((true)){
								HX_STACK_LINE(236)
								if ((!(((_g < i))))){
									HX_STACK_LINE(236)
									break;
								}
								HX_STACK_LINE(236)
								int i1 = (_g)++;		HX_STACK_VAR(i1,"i1");
								HX_STACK_LINE(236)
								hx::AddEq(total,lengths->__get((int)0).StaticCast< Array< int > >()->__get(i1));
							}
						}
						HX_STACK_LINE(236)
						_g21 = (total + (((i - k) + (int)1)));
					}
					HX_STACK_LINE(236)
					if ((!(((  (((_g21 <= _column))) ? bool((k > (int)0)) : bool(false) ))))){
						HX_STACK_LINE(236)
						break;
					}
					HX_STACK_LINE(237)
					int _g3;		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(237)
					{
						HX_STACK_LINE(237)
						int total = (int)0;		HX_STACK_VAR(total,"total");
						HX_STACK_LINE(237)
						{
							HX_STACK_LINE(237)
							int _g = (k - (int)1);		HX_STACK_VAR(_g,"_g");
							HX_STACK_LINE(237)
							while((true)){
								HX_STACK_LINE(237)
								if ((!(((_g < i))))){
									HX_STACK_LINE(237)
									break;
								}
								HX_STACK_LINE(237)
								int i1 = (_g)++;		HX_STACK_VAR(i1,"i1");
								HX_STACK_LINE(237)
								hx::AddEq(total,lengths->__get((int)0).StaticCast< Array< int > >()->__get(i1));
							}
						}
						HX_STACK_LINE(237)
						_g3 = (total + (((i - k) + (int)1)));
					}
					HX_STACK_LINE(237)
					int a = (_column - _g3);		HX_STACK_VAR(a,"a");
					HX_STACK_LINE(238)
					{
						HX_STACK_LINE(238)
						Float _g4 = ::Math_obj::pow(a,(int)3);		HX_STACK_VAR(_g4,"_g4");
						HX_STACK_LINE(238)
						Dynamic _g5 = badness->get((k - (int)1));		HX_STACK_VAR(_g5,"_g5");
						HX_STACK_LINE(238)
						Float _g6 = (_g4 + _g5);		HX_STACK_VAR(_g6,"_g6");
						HX_STACK_LINE(238)
						int k1 = ::Std_obj::_int(_g6);		HX_STACK_VAR(k1,"k1");
						HX_STACK_LINE(238)
						sums->set(k1,k);
						HX_STACK_LINE(238)
						k;
					}
					HX_STACK_LINE(239)
					hx::SubEq(k,(int)1);
				}
				HX_STACK_LINE(242)
				int mn;		HX_STACK_VAR(mn,"mn");
				HX_STACK_LINE(242)
				{
					HX_STACK_LINE(242)
					int min = (int)1073741823;		HX_STACK_VAR(min,"min");
					HX_STACK_LINE(242)
					for(::cpp::FastIterator_obj< int > *__it = ::cpp::CreateFastIterator< int >(sums->keys());  __it->hasNext(); ){
						int item = __it->next();
						if (((item < min))){
							HX_STACK_LINE(242)
							min = item;
						}
;
					}
					HX_STACK_LINE(242)
					mn = min;
				}
				HX_STACK_LINE(243)
				{
					HX_STACK_LINE(243)
					badness->set(i,mn);
					HX_STACK_LINE(243)
					mn;
				}
				HX_STACK_LINE(244)
				{
					HX_STACK_LINE(244)
					int v = sums->get(mn);		HX_STACK_VAR(v,"v");
					HX_STACK_LINE(244)
					extra->set(i,v);
					HX_STACK_LINE(244)
					v;
				}
			}
		}
		HX_STACK_LINE(248)
		int line = (int)1;		HX_STACK_VAR(line,"line");
		HX_STACK_LINE(249)
		while((true)){
			HX_STACK_LINE(249)
			if ((!(((n > (int)1))))){
				HX_STACK_LINE(249)
				break;
			}
			HX_STACK_LINE(250)
			Dynamic _g7 = extra->get(n);		HX_STACK_VAR(_g7,"_g7");
			HX_STACK_LINE(250)
			int _g8 = (_g7 - (int)1);		HX_STACK_VAR(_g8,"_g8");
			HX_STACK_LINE(250)
			::String _g9 = words->slice(_g8,n)->join(HX_CSTRING(" "));		HX_STACK_VAR(_g9,"_g9");
			HX_STACK_LINE(250)
			result->unshift(_g9);
			HX_STACK_LINE(251)
			Dynamic _g10 = extra->get(n);		HX_STACK_VAR(_g10,"_g10");
			HX_STACK_LINE(251)
			int _g11 = (_g10 - (int)1);		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(251)
			n = _g11;
			HX_STACK_LINE(252)
			hx::AddEq(line,(int)1);
		}
		HX_STACK_LINE(255)
		if (((result->length == (int)0))){
			HX_STACK_LINE(255)
			result->push(_string);
		}
		HX_STACK_LINE(256)
		return result;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(Utils_obj,text_wrap_column_knuth_plass,return )

::String Utils_obj::text_wrap_column( ::String _text,::String __o__brk,hx::Null< int >  __o__column){
::String _brk = __o__brk.Default(HX_CSTRING("\n"));
int _column = __o__column.Default(80);
	HX_STACK_FRAME("luxe.utils.Utils","text_wrap_column",0x0983136b,"luxe.utils.Utils.text_wrap_column","luxe/utils/Utils.hx",262,0x2d9d0da4)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_text,"_text")
	HX_STACK_ARG(_brk,"_brk")
	HX_STACK_ARG(_column,"_column")
{
		HX_STACK_LINE(268)
		::String result = ::EReg_obj::__new(((((HX_CSTRING("(.{1,") + _column) + HX_CSTRING("})(?: +|$)\n?|(.{")) + _column) + HX_CSTRING("})")),HX_CSTRING("gimu"))->replace(_text,(HX_CSTRING("$1$2") + _brk));		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(270)
		return ::StringTools_obj::rtrim(result);
	}
}


HX_DEFINE_DYNAMIC_FUNC3(Utils_obj,text_wrap_column,return )

::String Utils_obj::bytes_to_string( int bytes){
	HX_STACK_FRAME("luxe.utils.Utils","bytes_to_string",0xf09ebd2f,"luxe.utils.Utils.bytes_to_string","luxe/utils/Utils.hx",275,0x2d9d0da4)
	HX_STACK_THIS(this)
	HX_STACK_ARG(bytes,"bytes")
	HX_STACK_LINE(277)
	Float _g = ::Math_obj::log(bytes);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(277)
	Float _g1 = ::Math_obj::log((int)1024);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(277)
	Float _g2 = (Float(_g) / Float(_g1));		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(277)
	int index = ::Math_obj::floor(_g2);		HX_STACK_VAR(index,"index");
	HX_STACK_LINE(278)
	Float _g3 = ::Math_obj::pow((int)1024,index);		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(278)
	Float _byte_value = (Float(bytes) / Float(_g3));		HX_STACK_VAR(_byte_value,"_byte_value");
	HX_STACK_LINE(280)
	return (_byte_value + this->_byte_levels->__get(index));
}


HX_DEFINE_DYNAMIC_FUNC1(Utils_obj,bytes_to_string,return )

::haxe::io::Bytes Utils_obj::array_to_bytes( Array< int > array){
	HX_STACK_FRAME("luxe.utils.Utils","array_to_bytes",0x20cc2edf,"luxe.utils.Utils.array_to_bytes","luxe/utils/Utils.hx",285,0x2d9d0da4)
	HX_STACK_THIS(this)
	HX_STACK_ARG(array,"array")
	HX_STACK_LINE(287)
	if (((array == null()))){
		HX_STACK_LINE(287)
		return null();
	}
	HX_STACK_LINE(288)
	::haxe::io::Bytes bytes = ::haxe::io::Bytes_obj::alloc(array->length);		HX_STACK_VAR(bytes,"bytes");
	HX_STACK_LINE(289)
	{
		HX_STACK_LINE(289)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(289)
		int _g = bytes->length;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(289)
		while((true)){
			HX_STACK_LINE(289)
			if ((!(((_g1 < _g))))){
				HX_STACK_LINE(289)
				break;
			}
			HX_STACK_LINE(289)
			int n = (_g1)++;		HX_STACK_VAR(n,"n");
			HX_STACK_LINE(289)
			bytes->b[n] = array->__get(n);
		}
	}
	HX_STACK_LINE(291)
	return bytes;
}


HX_DEFINE_DYNAMIC_FUNC1(Utils_obj,array_to_bytes,return )


Utils_obj::Utils_obj()
{
}

void Utils_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Utils);
	HX_MARK_MEMBER_NAME(geometry,"geometry");
	HX_MARK_MEMBER_NAME(core,"core");
	HX_MARK_MEMBER_NAME(_byte_levels,"_byte_levels");
	HX_MARK_END_CLASS();
}

void Utils_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(geometry,"geometry");
	HX_VISIT_MEMBER_NAME(core,"core");
	HX_VISIT_MEMBER_NAME(_byte_levels,"_byte_levels");
}

Dynamic Utils_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"core") ) { return core; }
		if (HX_FIELD_EQ(inName,"hash") ) { return hash_dyn(); }
		if (HX_FIELD_EQ(inName,"uuid") ) { return uuid_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"geometry") ) { return geometry; }
		if (HX_FIELD_EQ(inName,"uniqueid") ) { return uniqueid_dyn(); }
		if (HX_FIELD_EQ(inName,"hashdjb2") ) { return hashdjb2_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"uniqueid2") ) { return uniqueid2_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"uniquehash") ) { return uniquehash_dyn(); }
		if (HX_FIELD_EQ(inName,"hashmurmur") ) { return hashmurmur_dyn(); }
		if (HX_FIELD_EQ(inName,"stacktrace") ) { return stacktrace_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_byte_levels") ) { return _byte_levels; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"array_to_bytes") ) { return array_to_bytes_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"bytes_to_string") ) { return bytes_to_string_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"path_is_relative") ) { return path_is_relative_dyn(); }
		if (HX_FIELD_EQ(inName,"text_wrap_column") ) { return text_wrap_column_dyn(); }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"find_assets_image_sequence") ) { return find_assets_image_sequence_dyn(); }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"text_wrap_column_knuth_plass") ) { return text_wrap_column_knuth_plass_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Utils_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"core") ) { core=inValue.Cast< ::luxe::Core >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"geometry") ) { geometry=inValue.Cast< ::luxe::utils::GeometryUtils >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_byte_levels") ) { _byte_levels=inValue.Cast< Array< ::String > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Utils_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("geometry"));
	outFields->push(HX_CSTRING("core"));
	outFields->push(HX_CSTRING("_byte_levels"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::luxe::utils::GeometryUtils*/ ,(int)offsetof(Utils_obj,geometry),HX_CSTRING("geometry")},
	{hx::fsObject /*::luxe::Core*/ ,(int)offsetof(Utils_obj,core),HX_CSTRING("core")},
	{hx::fsObject /*Array< ::String >*/ ,(int)offsetof(Utils_obj,_byte_levels),HX_CSTRING("_byte_levels")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("geometry"),
	HX_CSTRING("core"),
	HX_CSTRING("_byte_levels"),
	HX_CSTRING("uniqueid"),
	HX_CSTRING("uniquehash"),
	HX_CSTRING("hash"),
	HX_CSTRING("hashmurmur"),
	HX_CSTRING("hashdjb2"),
	HX_CSTRING("uniqueid2"),
	HX_CSTRING("uuid"),
	HX_CSTRING("stacktrace"),
	HX_CSTRING("path_is_relative"),
	HX_CSTRING("find_assets_image_sequence"),
	HX_CSTRING("text_wrap_column_knuth_plass"),
	HX_CSTRING("text_wrap_column"),
	HX_CSTRING("bytes_to_string"),
	HX_CSTRING("array_to_bytes"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Utils_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Utils_obj::__mClass,"__mClass");
};

#endif

Class Utils_obj::__mClass;

void Utils_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("luxe.utils.Utils"), hx::TCanCast< Utils_obj> ,sStaticFields,sMemberFields,
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

void Utils_obj::__boot()
{
}

} // end namespace luxe
} // end namespace utils
