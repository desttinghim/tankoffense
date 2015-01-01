#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_phoenix__BitmapFont_Parser
#include <phoenix/_BitmapFont/Parser.h>
#endif
namespace phoenix{
namespace _BitmapFont{

Void Parser_obj::__construct()
{
	return null();
}

//Parser_obj::~Parser_obj() { }

Dynamic Parser_obj::__CreateEmpty() { return  new Parser_obj; }
hx::ObjectPtr< Parser_obj > Parser_obj::__new()
{  hx::ObjectPtr< Parser_obj > result = new Parser_obj();
	result->__construct();
	return result;}

Dynamic Parser_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Parser_obj > result = new Parser_obj();
	result->__construct();
	return result;}

Dynamic Parser_obj::parse( ::String _font_data){
	HX_STACK_FRAME("phoenix._BitmapFont.Parser","parse",0xd76d46b4,"phoenix._BitmapFont.Parser.parse","phoenix/BitmapFont.hx",459,0xdfcf0e40)
	HX_STACK_ARG(_font_data,"_font_data")
	HX_STACK_LINE(461)
	if (((_font_data.length == (int)0))){
		HX_STACK_LINE(462)
		HX_STACK_DO_THROW(HX_CSTRING("BitmapFont:Parser: _font_data is 0 length"));
	}
	HX_STACK_LINE(467)
	::haxe::ds::IntMap _g = ::haxe::ds::IntMap_obj::__new();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(470)
	::haxe::ds::IntMap _g1 = ::haxe::ds::IntMap_obj::__new();		HX_STACK_VAR(_g1,"_g1");
	struct _Function_1_1{
		inline static Dynamic Block( ::haxe::ds::IntMap &_g1,::haxe::ds::IntMap &_g){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/BitmapFont.hx",465,0xdfcf0e40)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("face") , null(),false);
				__result->Add(HX_CSTRING("chars") , _g,false);
				__result->Add(HX_CSTRING("point_size") , (int)0,false);
				__result->Add(HX_CSTRING("base_size") , (int)0,false);
				__result->Add(HX_CSTRING("char_count") , (int)0,false);
				__result->Add(HX_CSTRING("line_height") , (int)0,false);
				__result->Add(HX_CSTRING("pages") , Dynamic( Array_obj<Dynamic>::__new()),false);
				__result->Add(HX_CSTRING("kernings") , _g1,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(465)
	Dynamic _info = _Function_1_1::Block(_g1,_g);		HX_STACK_VAR(_info,"_info");
	HX_STACK_LINE(473)
	Array< ::String > _lines = _font_data.split(HX_CSTRING("\n"));		HX_STACK_VAR(_lines,"_lines");
	HX_STACK_LINE(475)
	if (((_lines->length == (int)0))){
		HX_STACK_LINE(475)
		HX_STACK_DO_THROW(HX_CSTRING("BitmapFont; invalid font data specified for parser."));
	}
	HX_STACK_LINE(477)
	::String _first = _lines->__get((int)0);		HX_STACK_VAR(_first,"_first");
	HX_STACK_LINE(478)
	::String _g2 = ::StringTools_obj::ltrim(_first).substr((int)0,(int)4);		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(478)
	if (((_g2 != HX_CSTRING("info")))){
		HX_STACK_LINE(479)
		HX_STACK_DO_THROW(HX_CSTRING("BitmapFont; invalid font data specified for parser. Format should be plain ascii text .fnt file only currently."));
	}
	HX_STACK_LINE(482)
	{
		HX_STACK_LINE(482)
		int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(482)
		while((true)){
			HX_STACK_LINE(482)
			if ((!(((_g3 < _lines->length))))){
				HX_STACK_LINE(482)
				break;
			}
			HX_STACK_LINE(482)
			::String _line = _lines->__get(_g3);		HX_STACK_VAR(_line,"_line");
			HX_STACK_LINE(482)
			++(_g3);
			HX_STACK_LINE(483)
			Array< ::String > _tokens = _line.split(HX_CSTRING(" "));		HX_STACK_VAR(_tokens,"_tokens");
			HX_STACK_LINE(484)
			{
				HX_STACK_LINE(484)
				int _g11 = (int)0;		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(484)
				while((true)){
					HX_STACK_LINE(484)
					if ((!(((_g11 < _tokens->length))))){
						HX_STACK_LINE(484)
						break;
					}
					HX_STACK_LINE(484)
					::String _current = _tokens->__get(_g11);		HX_STACK_VAR(_current,"_current");
					HX_STACK_LINE(484)
					++(_g11);
					HX_STACK_LINE(485)
					::phoenix::_BitmapFont::Parser_obj::parse_token(_current,_tokens,_info);
				}
			}
		}
	}
	HX_STACK_LINE(489)
	return _info;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Parser_obj,parse,return )

Void Parser_obj::parse_token( ::String _token,Array< ::String > _tokens,Dynamic _info){
{
		HX_STACK_FRAME("phoenix._BitmapFont.Parser","parse_token",0xd2d00fee,"phoenix._BitmapFont.Parser.parse_token","phoenix/BitmapFont.hx",495,0xdfcf0e40)
		HX_STACK_ARG(_token,"_token")
		HX_STACK_ARG(_tokens,"_tokens")
		HX_STACK_ARG(_info,"_info")
		HX_STACK_LINE(498)
		_tokens->shift();
		HX_STACK_LINE(500)
		::haxe::ds::StringMap _items = ::phoenix::_BitmapFont::Parser_obj::tokenize_line(_tokens);		HX_STACK_VAR(_items,"_items");
		HX_STACK_LINE(502)
		::String _switch_1 = (_token);
		if (  ( _switch_1==HX_CSTRING("info"))){
			HX_STACK_LINE(505)
			::String _g2;		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(505)
			{
				HX_STACK_LINE(505)
				::String _s = _items->get(HX_CSTRING("face"));		HX_STACK_VAR(_s,"_s");
				HX_STACK_LINE(505)
				int _g = _s.indexOf(HX_CSTRING("\""),null());		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(505)
				if (((_g != (int)-1))){
					HX_STACK_LINE(505)
					::String _g1 = ::StringTools_obj::replace(_s,HX_CSTRING("\""),HX_CSTRING(""));		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(505)
					_s = _g1;
				}
				HX_STACK_LINE(505)
				_g2 = _s;
			}
			HX_STACK_LINE(505)
			_info->__FieldRef(HX_CSTRING("face")) = _g2;
			HX_STACK_LINE(506)
			::String _g3 = _items->get(HX_CSTRING("size"));		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(506)
			Float _g4 = ::Std_obj::parseFloat(_g3);		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(506)
			_info->__FieldRef(HX_CSTRING("point_size")) = _g4;
		}
		else if (  ( _switch_1==HX_CSTRING("common"))){
			HX_STACK_LINE(510)
			::String _g5 = _items->get(HX_CSTRING("lineHeight"));		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(510)
			Float _g6 = ::Std_obj::parseFloat(_g5);		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(510)
			_info->__FieldRef(HX_CSTRING("line_height")) = _g6;
			HX_STACK_LINE(511)
			::String _g7 = _items->get(HX_CSTRING("base"));		HX_STACK_VAR(_g7,"_g7");
			HX_STACK_LINE(511)
			Float _g8 = ::Std_obj::parseFloat(_g7);		HX_STACK_VAR(_g8,"_g8");
			HX_STACK_LINE(511)
			_info->__FieldRef(HX_CSTRING("base_size")) = _g8;
		}
		else if (  ( _switch_1==HX_CSTRING("page"))){
			HX_STACK_LINE(516)
			::String _g9 = _items->get(HX_CSTRING("id"));		HX_STACK_VAR(_g9,"_g9");
			HX_STACK_LINE(516)
			Dynamic _g10 = ::Std_obj::parseInt(_g9);		HX_STACK_VAR(_g10,"_g10");
			HX_STACK_LINE(517)
			::String _g13;		HX_STACK_VAR(_g13,"_g13");
			HX_STACK_LINE(517)
			{
				HX_STACK_LINE(517)
				::String _s;		HX_STACK_VAR(_s,"_s");
				HX_STACK_LINE(517)
				{
					HX_STACK_LINE(517)
					::String _s1 = _items->get(HX_CSTRING("file"));		HX_STACK_VAR(_s1,"_s1");
					HX_STACK_LINE(517)
					int _g11 = _s1.indexOf(HX_CSTRING("\""),null());		HX_STACK_VAR(_g11,"_g11");
					HX_STACK_LINE(517)
					if (((_g11 != (int)-1))){
						HX_STACK_LINE(517)
						::String _g12 = ::StringTools_obj::replace(_s1,HX_CSTRING("\""),HX_CSTRING(""));		HX_STACK_VAR(_g12,"_g12");
						HX_STACK_LINE(517)
						_s1 = _g12;
					}
					HX_STACK_LINE(517)
					_s = _s1;
				}
				HX_STACK_LINE(517)
				_g13 = ::StringTools_obj::trim(_s);
			}
			struct _Function_2_1{
				inline static Dynamic Block( ::String &_g13,Dynamic &_g10){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/BitmapFont.hx",515,0xdfcf0e40)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_CSTRING("id") , _g10,false);
						__result->Add(HX_CSTRING("file") , _g13,false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(515)
			Dynamic _g14 = _Function_2_1::Block(_g13,_g10);		HX_STACK_VAR(_g14,"_g14");
			HX_STACK_LINE(515)
			_info->__Field(HX_CSTRING("pages"),true)->__Field(HX_CSTRING("push"),true)(_g14);
		}
		else if (  ( _switch_1==HX_CSTRING("chars"))){
			HX_STACK_LINE(522)
			::String _g15 = _items->get(HX_CSTRING("count"));		HX_STACK_VAR(_g15,"_g15");
			HX_STACK_LINE(522)
			Dynamic _g16 = ::Std_obj::parseInt(_g15);		HX_STACK_VAR(_g16,"_g16");
			HX_STACK_LINE(522)
			_info->__FieldRef(HX_CSTRING("char_count")) = _g16;
		}
		else if (  ( _switch_1==HX_CSTRING("char"))){
			HX_STACK_LINE(528)
			::String _g17 = _items->get(HX_CSTRING("id"));		HX_STACK_VAR(_g17,"_g17");
			HX_STACK_LINE(528)
			Dynamic _g18 = ::Std_obj::parseInt(_g17);		HX_STACK_VAR(_g18,"_g18");
			HX_STACK_LINE(529)
			::String _g19 = _items->get(HX_CSTRING("x"));		HX_STACK_VAR(_g19,"_g19");
			HX_STACK_LINE(529)
			Float _g20 = ::Std_obj::parseFloat(_g19);		HX_STACK_VAR(_g20,"_g20");
			HX_STACK_LINE(530)
			::String _g21 = _items->get(HX_CSTRING("y"));		HX_STACK_VAR(_g21,"_g21");
			HX_STACK_LINE(530)
			Float _g22 = ::Std_obj::parseFloat(_g21);		HX_STACK_VAR(_g22,"_g22");
			HX_STACK_LINE(531)
			::String _g23 = _items->get(HX_CSTRING("width"));		HX_STACK_VAR(_g23,"_g23");
			HX_STACK_LINE(531)
			Float _g24 = ::Std_obj::parseFloat(_g23);		HX_STACK_VAR(_g24,"_g24");
			HX_STACK_LINE(532)
			::String _g25 = _items->get(HX_CSTRING("height"));		HX_STACK_VAR(_g25,"_g25");
			HX_STACK_LINE(532)
			Float _g26 = ::Std_obj::parseFloat(_g25);		HX_STACK_VAR(_g26,"_g26");
			HX_STACK_LINE(533)
			::String _g27 = _items->get(HX_CSTRING("xoffset"));		HX_STACK_VAR(_g27,"_g27");
			HX_STACK_LINE(533)
			Float _g28 = ::Std_obj::parseFloat(_g27);		HX_STACK_VAR(_g28,"_g28");
			HX_STACK_LINE(534)
			::String _g29 = _items->get(HX_CSTRING("yoffset"));		HX_STACK_VAR(_g29,"_g29");
			HX_STACK_LINE(534)
			Float _g30 = ::Std_obj::parseFloat(_g29);		HX_STACK_VAR(_g30,"_g30");
			HX_STACK_LINE(535)
			::String _g31 = _items->get(HX_CSTRING("xadvance"));		HX_STACK_VAR(_g31,"_g31");
			HX_STACK_LINE(535)
			Float _g32 = ::Std_obj::parseFloat(_g31);		HX_STACK_VAR(_g32,"_g32");
			HX_STACK_LINE(536)
			::String _g33 = _items->get(HX_CSTRING("page"));		HX_STACK_VAR(_g33,"_g33");
			HX_STACK_LINE(536)
			Dynamic _g34 = ::Std_obj::parseInt(_g33);		HX_STACK_VAR(_g34,"_g34");
			struct _Function_2_1{
				inline static Dynamic Block( Float &_g24,Float &_g32,Float &_g22,Float &_g28,Dynamic &_g34,Float &_g26,Dynamic &_g18,Float &_g30,Float &_g20){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/BitmapFont.hx",527,0xdfcf0e40)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_CSTRING("id") , _g18,false);
						__result->Add(HX_CSTRING("x") , _g20,false);
						__result->Add(HX_CSTRING("y") , _g22,false);
						__result->Add(HX_CSTRING("width") , _g24,false);
						__result->Add(HX_CSTRING("height") , _g26,false);
						__result->Add(HX_CSTRING("xoffset") , _g28,false);
						__result->Add(HX_CSTRING("yoffset") , _g30,false);
						__result->Add(HX_CSTRING("xadvance") , _g32,false);
						__result->Add(HX_CSTRING("page") , _g34,false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(527)
			Dynamic _char = _Function_2_1::Block(_g24,_g32,_g22,_g28,_g34,_g26,_g18,_g30,_g20);		HX_STACK_VAR(_char,"_char");
			HX_STACK_LINE(539)
			_info->__Field(HX_CSTRING("chars"),true)->__Field(HX_CSTRING("set"),true)(_char->__Field(HX_CSTRING("id"),true),_char);
		}
		else if (  ( _switch_1==HX_CSTRING("kerning"))){
			HX_STACK_LINE(545)
			::String _g35 = _items->get(HX_CSTRING("first"));		HX_STACK_VAR(_g35,"_g35");
			HX_STACK_LINE(545)
			Dynamic _first = ::Std_obj::parseInt(_g35);		HX_STACK_VAR(_first,"_first");
			HX_STACK_LINE(546)
			::String _g36 = _items->get(HX_CSTRING("second"));		HX_STACK_VAR(_g36,"_g36");
			HX_STACK_LINE(546)
			Dynamic _second = ::Std_obj::parseInt(_g36);		HX_STACK_VAR(_second,"_second");
			HX_STACK_LINE(547)
			::String _g37 = _items->get(HX_CSTRING("amount"));		HX_STACK_VAR(_g37,"_g37");
			HX_STACK_LINE(547)
			Float _amount = ::Std_obj::parseFloat(_g37);		HX_STACK_VAR(_amount,"_amount");
			HX_STACK_LINE(549)
			::haxe::ds::IntMap _map = _info->__Field(HX_CSTRING("kernings"),true)->__Field(HX_CSTRING("get"),true)(_first);		HX_STACK_VAR(_map,"_map");
			HX_STACK_LINE(550)
			if (((_map == null()))){
				HX_STACK_LINE(551)
				::haxe::ds::IntMap _g38 = ::haxe::ds::IntMap_obj::__new();		HX_STACK_VAR(_g38,"_g38");
				HX_STACK_LINE(551)
				_map = _g38;
				HX_STACK_LINE(552)
				_info->__Field(HX_CSTRING("kernings"),true)->__Field(HX_CSTRING("set"),true)(_first,_map);
			}
			HX_STACK_LINE(555)
			_map->set(_second,_amount);
		}
		else  {
		}
;
;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Parser_obj,parse_token,(void))

::haxe::ds::StringMap Parser_obj::tokenize_line( Array< ::String > _tokens){
	HX_STACK_FRAME("phoenix._BitmapFont.Parser","tokenize_line",0x946b4f79,"phoenix._BitmapFont.Parser.tokenize_line","phoenix/BitmapFont.hx",564,0xdfcf0e40)
	HX_STACK_ARG(_tokens,"_tokens")
	HX_STACK_LINE(566)
	::haxe::ds::StringMap _item_map = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(_item_map,"_item_map");
	HX_STACK_LINE(568)
	{
		HX_STACK_LINE(568)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(568)
		while((true)){
			HX_STACK_LINE(568)
			if ((!(((_g < _tokens->length))))){
				HX_STACK_LINE(568)
				break;
			}
			HX_STACK_LINE(568)
			::String _token = _tokens->__get(_g);		HX_STACK_VAR(_token,"_token");
			HX_STACK_LINE(568)
			++(_g);
			HX_STACK_LINE(569)
			Array< ::String > _items = _token.split(HX_CSTRING("="));		HX_STACK_VAR(_items,"_items");
			HX_STACK_LINE(570)
			_item_map->set(_items->__get((int)0),_items->__get((int)1));
		}
	}
	HX_STACK_LINE(573)
	return _item_map;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Parser_obj,tokenize_line,return )

::String Parser_obj::trim( ::String _s){
	HX_STACK_FRAME("phoenix._BitmapFont.Parser","trim",0xe6f5f181,"phoenix._BitmapFont.Parser.trim","phoenix/BitmapFont.hx",577,0xdfcf0e40)
	HX_STACK_ARG(_s,"_s")
	HX_STACK_LINE(577)
	return ::StringTools_obj::trim(_s);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Parser_obj,trim,return )

::String Parser_obj::unquote( ::String _s){
	HX_STACK_FRAME("phoenix._BitmapFont.Parser","unquote",0xf2d63304,"phoenix._BitmapFont.Parser.unquote","phoenix/BitmapFont.hx",578,0xdfcf0e40)
	HX_STACK_ARG(_s,"_s")
	HX_STACK_LINE(579)
	int _g = _s.indexOf(HX_CSTRING("\""),null());		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(579)
	if (((_g != (int)-1))){
		HX_STACK_LINE(580)
		::String _g1 = ::StringTools_obj::replace(_s,HX_CSTRING("\""),HX_CSTRING(""));		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(580)
		_s = _g1;
	}
	HX_STACK_LINE(581)
	return _s;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Parser_obj,unquote,return )


Parser_obj::Parser_obj()
{
}

Dynamic Parser_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"trim") ) { return trim_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"parse") ) { return parse_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"unquote") ) { return unquote_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"parse_token") ) { return parse_token_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"tokenize_line") ) { return tokenize_line_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Parser_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void Parser_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("parse"),
	HX_CSTRING("parse_token"),
	HX_CSTRING("tokenize_line"),
	HX_CSTRING("trim"),
	HX_CSTRING("unquote"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Parser_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Parser_obj::__mClass,"__mClass");
};

#endif

Class Parser_obj::__mClass;

void Parser_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("phoenix._BitmapFont.Parser"), hx::TCanCast< Parser_obj> ,sStaticFields,sMemberFields,
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

void Parser_obj::__boot()
{
}

} // end namespace phoenix
} // end namespace _BitmapFont
