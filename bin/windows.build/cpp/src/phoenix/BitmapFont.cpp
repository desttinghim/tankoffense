#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_Lambda
#include <Lambda.h>
#endif
#ifndef INCLUDED_Luxe
#include <Luxe.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_Utf8
#include <haxe/Utf8.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_haxe_io_Path
#include <haxe/io/Path.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_luxe_resource_Resource
#include <luxe/resource/Resource.h>
#endif
#ifndef INCLUDED_luxe_resource_ResourceManager
#include <luxe/resource/ResourceManager.h>
#endif
#ifndef INCLUDED_luxe_resource_ResourceType
#include <luxe/resource/ResourceType.h>
#endif
#ifndef INCLUDED_luxe_resource_TextResource
#include <luxe/resource/TextResource.h>
#endif
#ifndef INCLUDED_luxe_utils_Utils
#include <luxe/utils/Utils.h>
#endif
#ifndef INCLUDED_luxe_utils_unifill_CodePointIter
#include <luxe/utils/unifill/CodePointIter.h>
#endif
#ifndef INCLUDED_luxe_utils_unifill_Utf
#include <luxe/utils/unifill/Utf.h>
#endif
#ifndef INCLUDED_luxe_utils_unifill_Utf8
#include <luxe/utils/unifill/Utf8.h>
#endif
#ifndef INCLUDED_phoenix_Batcher
#include <phoenix/Batcher.h>
#endif
#ifndef INCLUDED_phoenix_BitmapFont
#include <phoenix/BitmapFont.h>
#endif
#ifndef INCLUDED_phoenix_FilterType
#include <phoenix/FilterType.h>
#endif
#ifndef INCLUDED_phoenix_Rectangle
#include <phoenix/Rectangle.h>
#endif
#ifndef INCLUDED_phoenix_Renderer
#include <phoenix/Renderer.h>
#endif
#ifndef INCLUDED_phoenix_Texture
#include <phoenix/Texture.h>
#endif
#ifndef INCLUDED_phoenix_Vector
#include <phoenix/Vector.h>
#endif
#ifndef INCLUDED_phoenix__BitmapFont_Parser
#include <phoenix/_BitmapFont/Parser.h>
#endif
#ifndef INCLUDED_phoenix_geometry_Geometry
#include <phoenix/geometry/Geometry.h>
#endif
#ifndef INCLUDED_phoenix_geometry_TextGeometry
#include <phoenix/geometry/TextGeometry.h>
#endif
namespace phoenix{

Void BitmapFont_obj::__construct(Dynamic _options)
{
HX_STACK_FRAME("phoenix.BitmapFont","new",0x6066476f,"phoenix.BitmapFont.new","phoenix/BitmapFont.hx",60,0xdfcf0e40)
HX_STACK_THIS(this)
HX_STACK_ARG(_options,"_options")
{
	HX_STACK_LINE(74)
	this->items_total = (int)0;
	HX_STACK_LINE(73)
	this->items_loaded = (int)0;
	HX_STACK_LINE(67)
	this->loaded = false;
	HX_STACK_LINE(80)
	::String _g = ::Luxe_obj::utils->uniqueid(null());		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(80)
	::String _g1 = (HX_CSTRING("font.") + _g);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(80)
	this->id = _g1;
	HX_STACK_LINE(82)
	if (((_options == null()))){
		struct _Function_2_1{
			inline static Dynamic Block( hx::ObjectPtr< ::phoenix::BitmapFont_obj > __this){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/BitmapFont.hx",82,0xdfcf0e40)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("id") , __this->id,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(82)
		this->options = _Function_2_1::Block(this);
	}
	else{
		HX_STACK_LINE(82)
		this->options = _options;
	}
	HX_STACK_LINE(83)
	this->default_options();
	HX_STACK_LINE(85)
	super::__construct(this->options->__Field(HX_CSTRING("resources"),true),::luxe::resource::ResourceType_obj::font,null());
	HX_STACK_LINE(87)
	::haxe::ds::IntMap _g2 = ::haxe::ds::IntMap_obj::__new();		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(87)
	this->pages = _g2;
}
;
	return null();
}

//BitmapFont_obj::~BitmapFont_obj() { }

Dynamic BitmapFont_obj::__CreateEmpty() { return  new BitmapFont_obj; }
hx::ObjectPtr< BitmapFont_obj > BitmapFont_obj::__new(Dynamic _options)
{  hx::ObjectPtr< BitmapFont_obj > result = new BitmapFont_obj();
	result->__construct(_options);
	return result;}

Dynamic BitmapFont_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< BitmapFont_obj > result = new BitmapFont_obj();
	result->__construct(inArgs[0]);
	return result;}

Void BitmapFont_obj::from_string( ::String _id,::String _bitmapfont_data,::String __o__path,Dynamic _onload,Array< ::Dynamic > _custom_pages,Dynamic __o__silent){
::String _path = __o__path.Default(HX_CSTRING("assets/"));
Dynamic _silent = __o__silent.Default(false);
	HX_STACK_FRAME("phoenix.BitmapFont","from_string",0xa09d1455,"phoenix.BitmapFont.from_string","phoenix/BitmapFont.hx",103,0xdfcf0e40)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_id,"_id")
	HX_STACK_ARG(_bitmapfont_data,"_bitmapfont_data")
	HX_STACK_ARG(_path,"_path")
	HX_STACK_ARG(_onload,"_onload")
	HX_STACK_ARG(_custom_pages,"_custom_pages")
	HX_STACK_ARG(_silent,"_silent")
{
		HX_STACK_LINE(106)
		if (((_onload != null()))){
			HX_STACK_LINE(106)
			this->onload = _onload;
		}
		HX_STACK_LINE(108)
		Dynamic _g = ::phoenix::_BitmapFont::Parser_obj::parse(_bitmapfont_data);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(108)
		this->info = _g;
		HX_STACK_LINE(111)
		if (((bool((bool((this->info->__Field(HX_CSTRING("char_count"),true) == (int)0)) || bool((this->info->__Field(HX_CSTRING("face"),true) == null())))) || bool((bool((this->info->__Field(HX_CSTRING("pages"),true)->__Field(HX_CSTRING("length"),true) == (int)0)) && bool((_custom_pages->length == (int)0))))))){
			HX_STACK_LINE(115)
			::haxe::Log_obj::trace((HX_CSTRING("i / bitmapfont / ") + (((HX_CSTRING("error / ") + _id) + HX_CSTRING(" / invalid font data specified for this font, cannot load. This font will not be valid.")))),hx::SourceInfo(HX_CSTRING("BitmapFont.hx"),115,HX_CSTRING("phoenix.BitmapFont"),HX_CSTRING("from_string")));
			HX_STACK_LINE(116)
			this->do_onload(false);
			HX_STACK_LINE(117)
			return null();
		}
		HX_STACK_LINE(121)
		this->id = (HX_CSTRING("") + this->info->__Field(HX_CSTRING("face"),true));
		HX_STACK_LINE(123)
		Dynamic _g1 = this->info->__Field(HX_CSTRING("chars"),true)->__Field(HX_CSTRING("get"),true)((int)32);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(123)
		this->space_char = _g1;
		HX_STACK_LINE(125)
		this->load_pages(_path,_custom_pages);
		HX_STACK_LINE(127)
		int _g2 = ::phoenix::BitmapFont_obj::generic_names->indexOf(this->id,null());		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(127)
		if (((_g2 != (int)-1))){
			HX_STACK_LINE(128)
			::String _warning = ((HX_CSTRING("warning / font loaded with a generic or no name as \"") + this->id) + HX_CSTRING("\". "));		HX_STACK_VAR(_warning,"_warning");
			HX_STACK_LINE(129)
			hx::AddEq(_warning,HX_CSTRING("This could lead to bugs or confusion, or not being able to retrieve the font "));
			HX_STACK_LINE(130)
			hx::AddEq(_warning,HX_CSTRING("later from the resources. The font name is set in the \"face\" property inside the .fnt file."));
			HX_STACK_LINE(131)
			::haxe::Log_obj::trace((HX_CSTRING("i / bitmapfont / ") + _warning),hx::SourceInfo(HX_CSTRING("BitmapFont.hx"),131,HX_CSTRING("phoenix.BitmapFont"),HX_CSTRING("from_string")));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC6(BitmapFont_obj,from_string,(void))

Dynamic BitmapFont_obj::kerning( int _first,int _second){
	HX_STACK_FRAME("phoenix.BitmapFont","kerning",0xd354655b,"phoenix.BitmapFont.kerning","phoenix/BitmapFont.hx",139,0xdfcf0e40)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_first,"_first")
	HX_STACK_ARG(_second,"_second")
	HX_STACK_LINE(141)
	::haxe::ds::IntMap _map = this->info->__Field(HX_CSTRING("kernings"),true)->__Field(HX_CSTRING("get"),true)(_first);		HX_STACK_VAR(_map,"_map");
	HX_STACK_LINE(143)
	if (((  (((_map != null()))) ? bool(_map->exists(_second)) : bool(false) ))){
		HX_STACK_LINE(144)
		return _map->get(_second);
	}
	HX_STACK_LINE(147)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC2(BitmapFont_obj,kerning,return )

::String BitmapFont_obj::wrap_string_to_bounds( ::String _string,::phoenix::Rectangle _bounds,hx::Null< Float >  __o__point_size,hx::Null< Float >  __o__letter_spc){
Float _point_size = __o__point_size.Default(1.0);
Float _letter_spc = __o__letter_spc.Default(0.0);
	HX_STACK_FRAME("phoenix.BitmapFont","wrap_string_to_bounds",0x606853ef,"phoenix.BitmapFont.wrap_string_to_bounds","phoenix/BitmapFont.hx",151,0xdfcf0e40)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_string,"_string")
	HX_STACK_ARG(_bounds,"_bounds")
	HX_STACK_ARG(_point_size,"_point_size")
	HX_STACK_ARG(_letter_spc,"_letter_spc")
{
		HX_STACK_LINE(151)
		::phoenix::BitmapFont _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(153)
		if (((_bounds == null()))){
			HX_STACK_LINE(154)
			return _string;
		}
		HX_STACK_LINE(157)
		Float _cur_x = 0.0;		HX_STACK_VAR(_cur_x,"_cur_x");
		HX_STACK_LINE(157)
		int _idx = (int)0;		HX_STACK_VAR(_idx,"_idx");
		HX_STACK_LINE(158)
		::String _final_str = HX_CSTRING("");		HX_STACK_VAR(_final_str,"_final_str");
		HX_STACK_LINE(164)
		Float _spacew;		HX_STACK_VAR(_spacew,"_spacew");
		HX_STACK_LINE(164)
		{
			HX_STACK_LINE(164)
			Float _cur_x1 = 0.0;		HX_STACK_VAR(_cur_x1,"_cur_x1");
			HX_STACK_LINE(164)
			Float _max_w = 0.0;		HX_STACK_VAR(_max_w,"_max_w");
			HX_STACK_LINE(164)
			Float _ratio = (Float(_point_size) / Float(_g->info->__Field(HX_CSTRING("point_size"),true)));		HX_STACK_VAR(_ratio,"_ratio");
			HX_STACK_LINE(164)
			bool _push_widths = false;		HX_STACK_VAR(_push_widths,"_push_widths");
			HX_STACK_LINE(164)
			int i = (int)0;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(164)
			int _len;		HX_STACK_VAR(_len,"_len");
			HX_STACK_LINE(164)
			{
				HX_STACK_LINE(164)
				::luxe::utils::unifill::Utf8 u = ::luxe::utils::unifill::Utf8_obj::__new(HX_CSTRING(" "));		HX_STACK_VAR(u,"u");
				HX_STACK_LINE(164)
				_len = u->codePointCount((int)0,HX_CSTRING(" ").length);
			}
			HX_STACK_LINE(164)
			for(::cpp::FastIterator_obj< int > *__it = ::cpp::CreateFastIterator< int >(::luxe::utils::unifill::CodePointIter_obj::__new(HX_CSTRING(" ")));  __it->hasNext(); ){
				int _uglyph = __it->next();
				{
					HX_STACK_LINE(164)
					int _index = _uglyph;		HX_STACK_VAR(_index,"_index");
					HX_STACK_LINE(164)
					if (((_index == (int)10))){
						HX_STACK_LINE(164)
						Float _g1 = ::Math_obj::max(_max_w,_cur_x1);		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(164)
						_max_w = _g1;
						HX_STACK_LINE(164)
						if ((_push_widths)){
							HX_STACK_LINE(164)
							Dynamic()(_cur_x1);
						}
						HX_STACK_LINE(164)
						_cur_x1 = (int)0;
					}
					else{
						HX_STACK_LINE(164)
						Dynamic _char = _g->info->__Field(HX_CSTRING("chars"),true)->__Field(HX_CSTRING("get"),true)(_index);		HX_STACK_VAR(_char,"_char");
						HX_STACK_LINE(164)
						if (((_char == null()))){
							HX_STACK_LINE(164)
							_char = _g->space_char;
						}
						HX_STACK_LINE(164)
						Float _spacing = _char->__Field(HX_CSTRING("xadvance"),true);		HX_STACK_VAR(_spacing,"_spacing");
						HX_STACK_LINE(164)
						if (((i < (_len - (int)1)))){
							HX_STACK_LINE(164)
							int _next_index = ::haxe::Utf8_obj::charCodeAt(HX_CSTRING(" "),(i + (int)1));		HX_STACK_VAR(_next_index,"_next_index");
							HX_STACK_LINE(164)
							Dynamic _g1;		HX_STACK_VAR(_g1,"_g1");
							HX_STACK_LINE(164)
							{
								HX_STACK_LINE(164)
								::haxe::ds::IntMap _map = _g->info->__Field(HX_CSTRING("kernings"),true)->__Field(HX_CSTRING("get"),true)(_index);		HX_STACK_VAR(_map,"_map");
								HX_STACK_LINE(164)
								if (((  (((_map != null()))) ? bool(_map->exists(_next_index)) : bool(false) ))){
									HX_STACK_LINE(164)
									_g1 = _map->get(_next_index);
								}
								else{
									HX_STACK_LINE(164)
									_g1 = (int)0;
								}
							}
							HX_STACK_LINE(164)
							hx::AddEq(_spacing,_g1);
							HX_STACK_LINE(164)
							if (((_next_index >= (int)32))){
								HX_STACK_LINE(164)
								hx::AddEq(_spacing,_letter_spc);
							}
						}
						HX_STACK_LINE(164)
						hx::AddEq(_cur_x1,(_spacing * _ratio));
					}
					HX_STACK_LINE(164)
					++(i);
				}
;
			}
			HX_STACK_LINE(164)
			if ((_push_widths)){
				HX_STACK_LINE(164)
				Dynamic()(_cur_x1);
			}
			HX_STACK_LINE(164)
			_spacew = ::Math_obj::max(_max_w,_cur_x1);
		}
		HX_STACK_LINE(176)
		Array< ::String > _strings = _string.split(HX_CSTRING(" "));		HX_STACK_VAR(_strings,"_strings");
		HX_STACK_LINE(177)
		int _count = _strings->length;		HX_STACK_VAR(_count,"_count");
		HX_STACK_LINE(179)
		{
			HX_STACK_LINE(179)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(179)
			while((true)){
				HX_STACK_LINE(179)
				if ((!(((_g1 < _strings->length))))){
					HX_STACK_LINE(179)
					break;
				}
				HX_STACK_LINE(179)
				::String _str = _strings->__get(_g1);		HX_STACK_VAR(_str,"_str");
				HX_STACK_LINE(179)
				++(_g1);
				HX_STACK_LINE(180)
				int _g11;		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(180)
				{
					HX_STACK_LINE(180)
					int startIndex = (int)0;		HX_STACK_VAR(startIndex,"startIndex");
					HX_STACK_LINE(180)
					int _g10;		HX_STACK_VAR(_g10,"_g10");
					HX_STACK_LINE(180)
					{
						HX_STACK_LINE(180)
						::luxe::utils::unifill::Utf8 u = ::luxe::utils::unifill::Utf8_obj::__new(_str);		HX_STACK_VAR(u,"u");
						HX_STACK_LINE(180)
						if (((startIndex >= (int)0))){
							HX_STACK_LINE(180)
							int index = (int)0;		HX_STACK_VAR(index,"index");
							HX_STACK_LINE(180)
							int len = u->str.length;		HX_STACK_VAR(len,"len");
							HX_STACK_LINE(180)
							int i = (int)0;		HX_STACK_VAR(i,"i");
							HX_STACK_LINE(180)
							while((true)){
								HX_STACK_LINE(180)
								if ((!(((bool((i < startIndex)) && bool((index < len))))))){
									HX_STACK_LINE(180)
									break;
								}
								HX_STACK_LINE(180)
								int _g2;		HX_STACK_VAR(_g2,"_g2");
								HX_STACK_LINE(180)
								{
									HX_STACK_LINE(180)
									int c = u->str.cca(index);		HX_STACK_VAR(c,"c");
									HX_STACK_LINE(180)
									if (((c < (int)192))){
										HX_STACK_LINE(180)
										_g2 = (int)1;
									}
									else{
										HX_STACK_LINE(180)
										if (((c < (int)224))){
											HX_STACK_LINE(180)
											_g2 = (int)2;
										}
										else{
											HX_STACK_LINE(180)
											if (((c < (int)240))){
												HX_STACK_LINE(180)
												_g2 = (int)3;
											}
											else{
												HX_STACK_LINE(180)
												if (((c < (int)248))){
													HX_STACK_LINE(180)
													_g2 = (int)4;
												}
												else{
													HX_STACK_LINE(180)
													_g2 = (int)1;
												}
											}
										}
									}
								}
								HX_STACK_LINE(180)
								hx::AddEq(index,_g2);
								HX_STACK_LINE(180)
								++(i);
							}
							HX_STACK_LINE(180)
							_g10 = index;
						}
						else{
							HX_STACK_LINE(180)
							int index = (int)0;		HX_STACK_VAR(index,"index");
							HX_STACK_LINE(180)
							int count = (int)0;		HX_STACK_VAR(count,"count");
							HX_STACK_LINE(180)
							while((true)){
								HX_STACK_LINE(180)
								if ((!(((bool((count < -(startIndex))) && bool(((int)0 < index))))))){
									HX_STACK_LINE(180)
									break;
								}
								HX_STACK_LINE(180)
								int _g9;		HX_STACK_VAR(_g9,"_g9");
								HX_STACK_LINE(180)
								{
									HX_STACK_LINE(180)
									Dynamic accessor = u->codeUnitAt_dyn();		HX_STACK_VAR(accessor,"accessor");
									HX_STACK_LINE(180)
									int c1 = accessor((index - (int)1)).Cast< int >();		HX_STACK_VAR(c1,"c1");
									HX_STACK_LINE(180)
									if (((bool((c1 < (int)128)) || bool((c1 >= (int)192))))){
										HX_STACK_LINE(180)
										_g9 = (int)1;
									}
									else{
										HX_STACK_LINE(180)
										int _g3 = accessor((index - (int)2)).Cast< int >();		HX_STACK_VAR(_g3,"_g3");
										HX_STACK_LINE(180)
										int _g4 = (int(_g3) & int((int)224));		HX_STACK_VAR(_g4,"_g4");
										HX_STACK_LINE(180)
										if (((_g4 == (int)192))){
											HX_STACK_LINE(180)
											_g9 = (int)2;
										}
										else{
											HX_STACK_LINE(180)
											int _g5 = accessor((index - (int)3)).Cast< int >();		HX_STACK_VAR(_g5,"_g5");
											HX_STACK_LINE(180)
											int _g6 = (int(_g5) & int((int)240));		HX_STACK_VAR(_g6,"_g6");
											HX_STACK_LINE(180)
											if (((_g6 == (int)224))){
												HX_STACK_LINE(180)
												_g9 = (int)3;
											}
											else{
												HX_STACK_LINE(180)
												int _g7 = accessor((index - (int)4)).Cast< int >();		HX_STACK_VAR(_g7,"_g7");
												HX_STACK_LINE(180)
												int _g8 = (int(_g7) & int((int)248));		HX_STACK_VAR(_g8,"_g8");
												HX_STACK_LINE(180)
												if (((_g8 == (int)240))){
													HX_STACK_LINE(180)
													_g9 = (int)4;
												}
												else{
													HX_STACK_LINE(180)
													_g9 = (int)1;
												}
											}
										}
									}
								}
								HX_STACK_LINE(180)
								hx::SubEq(index,_g9);
								HX_STACK_LINE(180)
								++(count);
							}
							HX_STACK_LINE(180)
							_g10 = index;
						}
					}
					HX_STACK_LINE(180)
					int index = _str.indexOf(HX_CSTRING("\n"),_g10);		HX_STACK_VAR(index,"index");
					HX_STACK_LINE(180)
					if (((index >= (int)0))){
						HX_STACK_LINE(180)
						::luxe::utils::unifill::Utf8 u = ::luxe::utils::unifill::Utf8_obj::__new(_str);		HX_STACK_VAR(u,"u");
						HX_STACK_LINE(180)
						_g11 = u->codePointCount((int)0,index);
					}
					else{
						HX_STACK_LINE(180)
						_g11 = (int)-1;
					}
				}
				HX_STACK_LINE(180)
				if (((_g11 == (int)-1))){
					HX_STACK_LINE(181)
					if (((_str == HX_CSTRING("")))){
						HX_STACK_LINE(181)
						_str = HX_CSTRING(" ");
					}
					HX_STACK_LINE(182)
					{
						HX_STACK_LINE(182)
						Float _w;		HX_STACK_VAR(_w,"_w");
						HX_STACK_LINE(182)
						{
							HX_STACK_LINE(182)
							Float _cur_x1 = 0.0;		HX_STACK_VAR(_cur_x1,"_cur_x1");
							HX_STACK_LINE(182)
							Float _max_w = 0.0;		HX_STACK_VAR(_max_w,"_max_w");
							HX_STACK_LINE(182)
							Float _ratio = (Float(_point_size) / Float(_g->info->__Field(HX_CSTRING("point_size"),true)));		HX_STACK_VAR(_ratio,"_ratio");
							HX_STACK_LINE(182)
							bool _push_widths = false;		HX_STACK_VAR(_push_widths,"_push_widths");
							HX_STACK_LINE(182)
							int i = (int)0;		HX_STACK_VAR(i,"i");
							HX_STACK_LINE(182)
							int _len;		HX_STACK_VAR(_len,"_len");
							HX_STACK_LINE(182)
							{
								HX_STACK_LINE(182)
								::luxe::utils::unifill::Utf8 u = ::luxe::utils::unifill::Utf8_obj::__new(_str);		HX_STACK_VAR(u,"u");
								HX_STACK_LINE(182)
								_len = u->codePointCount((int)0,_str.length);
							}
							HX_STACK_LINE(182)
							for(::cpp::FastIterator_obj< int > *__it = ::cpp::CreateFastIterator< int >(::luxe::utils::unifill::CodePointIter_obj::__new(_str));  __it->hasNext(); ){
								int _uglyph = __it->next();
								{
									HX_STACK_LINE(182)
									int _index = _uglyph;		HX_STACK_VAR(_index,"_index");
									HX_STACK_LINE(182)
									if (((_index == (int)10))){
										HX_STACK_LINE(182)
										Float _g12 = ::Math_obj::max(_max_w,_cur_x1);		HX_STACK_VAR(_g12,"_g12");
										HX_STACK_LINE(182)
										_max_w = _g12;
										HX_STACK_LINE(182)
										if ((_push_widths)){
											HX_STACK_LINE(182)
											Dynamic()(_cur_x1);
										}
										HX_STACK_LINE(182)
										_cur_x1 = (int)0;
									}
									else{
										HX_STACK_LINE(182)
										Dynamic _char = _g->info->__Field(HX_CSTRING("chars"),true)->__Field(HX_CSTRING("get"),true)(_index);		HX_STACK_VAR(_char,"_char");
										HX_STACK_LINE(182)
										if (((_char == null()))){
											HX_STACK_LINE(182)
											_char = _g->space_char;
										}
										HX_STACK_LINE(182)
										Float _spacing = _char->__Field(HX_CSTRING("xadvance"),true);		HX_STACK_VAR(_spacing,"_spacing");
										HX_STACK_LINE(182)
										if (((i < (_len - (int)1)))){
											HX_STACK_LINE(182)
											int _next_index = ::haxe::Utf8_obj::charCodeAt(_str,(i + (int)1));		HX_STACK_VAR(_next_index,"_next_index");
											HX_STACK_LINE(182)
											Dynamic _g13;		HX_STACK_VAR(_g13,"_g13");
											HX_STACK_LINE(182)
											{
												HX_STACK_LINE(182)
												::haxe::ds::IntMap _map = _g->info->__Field(HX_CSTRING("kernings"),true)->__Field(HX_CSTRING("get"),true)(_index);		HX_STACK_VAR(_map,"_map");
												HX_STACK_LINE(182)
												if (((  (((_map != null()))) ? bool(_map->exists(_next_index)) : bool(false) ))){
													HX_STACK_LINE(182)
													_g13 = _map->get(_next_index);
												}
												else{
													HX_STACK_LINE(182)
													_g13 = (int)0;
												}
											}
											HX_STACK_LINE(182)
											hx::AddEq(_spacing,_g13);
											HX_STACK_LINE(182)
											if (((_next_index >= (int)32))){
												HX_STACK_LINE(182)
												hx::AddEq(_spacing,_letter_spc);
											}
										}
										HX_STACK_LINE(182)
										hx::AddEq(_cur_x1,(_spacing * _ratio));
									}
									HX_STACK_LINE(182)
									++(i);
								}
;
							}
							HX_STACK_LINE(182)
							if ((_push_widths)){
								HX_STACK_LINE(182)
								Dynamic()(_cur_x1);
							}
							HX_STACK_LINE(182)
							_w = ::Math_obj::max(_max_w,_cur_x1);
						}
						HX_STACK_LINE(182)
						if ((((_cur_x + _w) > _bounds->w))){
							HX_STACK_LINE(182)
							_cur_x = (int)0;
							HX_STACK_LINE(182)
							hx::AddEq(_final_str,HX_CSTRING("\n"));
						}
						HX_STACK_LINE(182)
						hx::AddEq(_cur_x,_w);
						HX_STACK_LINE(182)
						hx::AddEq(_final_str,_str);
					}
				}
				else{
					HX_STACK_LINE(184)
					int _widx = (int)0;		HX_STACK_VAR(_widx,"_widx");
					HX_STACK_LINE(185)
					Array< ::String > _words = _str.split(HX_CSTRING("\n"));		HX_STACK_VAR(_words,"_words");
					HX_STACK_LINE(186)
					{
						HX_STACK_LINE(186)
						int _g12 = (int)0;		HX_STACK_VAR(_g12,"_g12");
						HX_STACK_LINE(186)
						while((true)){
							HX_STACK_LINE(186)
							if ((!(((_g12 < _words->length))))){
								HX_STACK_LINE(186)
								break;
							}
							HX_STACK_LINE(186)
							::String _word = _words->__get(_g12);		HX_STACK_VAR(_word,"_word");
							HX_STACK_LINE(186)
							++(_g12);
							HX_STACK_LINE(188)
							if (((_word != HX_CSTRING("")))){
								HX_STACK_LINE(189)
								Float _w;		HX_STACK_VAR(_w,"_w");
								HX_STACK_LINE(189)
								{
									HX_STACK_LINE(189)
									Float _cur_x1 = 0.0;		HX_STACK_VAR(_cur_x1,"_cur_x1");
									HX_STACK_LINE(189)
									Float _max_w = 0.0;		HX_STACK_VAR(_max_w,"_max_w");
									HX_STACK_LINE(189)
									Float _ratio = (Float(_point_size) / Float(_g->info->__Field(HX_CSTRING("point_size"),true)));		HX_STACK_VAR(_ratio,"_ratio");
									HX_STACK_LINE(189)
									bool _push_widths = false;		HX_STACK_VAR(_push_widths,"_push_widths");
									HX_STACK_LINE(189)
									int i = (int)0;		HX_STACK_VAR(i,"i");
									HX_STACK_LINE(189)
									int _len;		HX_STACK_VAR(_len,"_len");
									HX_STACK_LINE(189)
									{
										HX_STACK_LINE(189)
										::luxe::utils::unifill::Utf8 u = ::luxe::utils::unifill::Utf8_obj::__new(_word);		HX_STACK_VAR(u,"u");
										HX_STACK_LINE(189)
										_len = u->codePointCount((int)0,_word.length);
									}
									HX_STACK_LINE(189)
									for(::cpp::FastIterator_obj< int > *__it = ::cpp::CreateFastIterator< int >(::luxe::utils::unifill::CodePointIter_obj::__new(_word));  __it->hasNext(); ){
										int _uglyph = __it->next();
										{
											HX_STACK_LINE(189)
											int _index = _uglyph;		HX_STACK_VAR(_index,"_index");
											HX_STACK_LINE(189)
											if (((_index == (int)10))){
												HX_STACK_LINE(189)
												Float _g14 = ::Math_obj::max(_max_w,_cur_x1);		HX_STACK_VAR(_g14,"_g14");
												HX_STACK_LINE(189)
												_max_w = _g14;
												HX_STACK_LINE(189)
												if ((_push_widths)){
													HX_STACK_LINE(189)
													Dynamic()(_cur_x1);
												}
												HX_STACK_LINE(189)
												_cur_x1 = (int)0;
											}
											else{
												HX_STACK_LINE(189)
												Dynamic _char = _g->info->__Field(HX_CSTRING("chars"),true)->__Field(HX_CSTRING("get"),true)(_index);		HX_STACK_VAR(_char,"_char");
												HX_STACK_LINE(189)
												if (((_char == null()))){
													HX_STACK_LINE(189)
													_char = _g->space_char;
												}
												HX_STACK_LINE(189)
												Float _spacing = _char->__Field(HX_CSTRING("xadvance"),true);		HX_STACK_VAR(_spacing,"_spacing");
												HX_STACK_LINE(189)
												if (((i < (_len - (int)1)))){
													HX_STACK_LINE(189)
													int _next_index = ::haxe::Utf8_obj::charCodeAt(_word,(i + (int)1));		HX_STACK_VAR(_next_index,"_next_index");
													HX_STACK_LINE(189)
													Dynamic _g15;		HX_STACK_VAR(_g15,"_g15");
													HX_STACK_LINE(189)
													{
														HX_STACK_LINE(189)
														::haxe::ds::IntMap _map = _g->info->__Field(HX_CSTRING("kernings"),true)->__Field(HX_CSTRING("get"),true)(_index);		HX_STACK_VAR(_map,"_map");
														HX_STACK_LINE(189)
														if (((  (((_map != null()))) ? bool(_map->exists(_next_index)) : bool(false) ))){
															HX_STACK_LINE(189)
															_g15 = _map->get(_next_index);
														}
														else{
															HX_STACK_LINE(189)
															_g15 = (int)0;
														}
													}
													HX_STACK_LINE(189)
													hx::AddEq(_spacing,_g15);
													HX_STACK_LINE(189)
													if (((_next_index >= (int)32))){
														HX_STACK_LINE(189)
														hx::AddEq(_spacing,_letter_spc);
													}
												}
												HX_STACK_LINE(189)
												hx::AddEq(_cur_x1,(_spacing * _ratio));
											}
											HX_STACK_LINE(189)
											++(i);
										}
;
									}
									HX_STACK_LINE(189)
									if ((_push_widths)){
										HX_STACK_LINE(189)
										Dynamic()(_cur_x1);
									}
									HX_STACK_LINE(189)
									_w = ::Math_obj::max(_max_w,_cur_x1);
								}
								HX_STACK_LINE(189)
								if ((((_cur_x + _w) > _bounds->w))){
									HX_STACK_LINE(189)
									_cur_x = (int)0;
									HX_STACK_LINE(189)
									hx::AddEq(_final_str,HX_CSTRING("\n"));
								}
								HX_STACK_LINE(189)
								hx::AddEq(_cur_x,_w);
								HX_STACK_LINE(189)
								hx::AddEq(_final_str,_word);
							}
							else{
								HX_STACK_LINE(191)
								_cur_x = (int)0;
							}
							HX_STACK_LINE(194)
							if (((_widx < (_words->length - (int)1)))){
								HX_STACK_LINE(195)
								hx::AddEq(_final_str,HX_CSTRING("\n"));
								HX_STACK_LINE(196)
								_cur_x = (int)0;
							}
							HX_STACK_LINE(199)
							(_widx)++;
						}
					}
				}
				HX_STACK_LINE(204)
				if (((_idx < (_count - (int)1)))){
					HX_STACK_LINE(205)
					hx::AddEq(_final_str,HX_CSTRING(" "));
					HX_STACK_LINE(206)
					hx::AddEq(_cur_x,(_spacew + _letter_spc));
				}
				HX_STACK_LINE(209)
				(_idx)++;
			}
		}
		HX_STACK_LINE(213)
		return _final_str;
	}
}


HX_DEFINE_DYNAMIC_FUNC4(BitmapFont_obj,wrap_string_to_bounds,return )

Float BitmapFont_obj::width_of( ::String _string,hx::Null< Float >  __o__point_size,hx::Null< Float >  __o__letter_spc,Array< Float > _line_widths){
Float _point_size = __o__point_size.Default(1.0);
Float _letter_spc = __o__letter_spc.Default(0.0);
	HX_STACK_FRAME("phoenix.BitmapFont","width_of",0x45eb5b81,"phoenix.BitmapFont.width_of","phoenix/BitmapFont.hx",217,0xdfcf0e40)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_string,"_string")
	HX_STACK_ARG(_point_size,"_point_size")
	HX_STACK_ARG(_letter_spc,"_letter_spc")
	HX_STACK_ARG(_line_widths,"_line_widths")
{
		HX_STACK_LINE(220)
		Float _cur_x = 0.0;		HX_STACK_VAR(_cur_x,"_cur_x");
		HX_STACK_LINE(222)
		Float _max_w = 0.0;		HX_STACK_VAR(_max_w,"_max_w");
		HX_STACK_LINE(224)
		Float _ratio = (Float(_point_size) / Float(this->info->__Field(HX_CSTRING("point_size"),true)));		HX_STACK_VAR(_ratio,"_ratio");
		HX_STACK_LINE(226)
		bool _push_widths = (_line_widths != null());		HX_STACK_VAR(_push_widths,"_push_widths");
		HX_STACK_LINE(230)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(231)
		int _len;		HX_STACK_VAR(_len,"_len");
		HX_STACK_LINE(231)
		{
			HX_STACK_LINE(231)
			::luxe::utils::unifill::Utf8 u = ::luxe::utils::unifill::Utf8_obj::__new(_string);		HX_STACK_VAR(u,"u");
			HX_STACK_LINE(231)
			_len = u->codePointCount((int)0,_string.length);
		}
		HX_STACK_LINE(232)
		for(::cpp::FastIterator_obj< int > *__it = ::cpp::CreateFastIterator< int >(::luxe::utils::unifill::CodePointIter_obj::__new(_string));  __it->hasNext(); ){
			int _uglyph = __it->next();
			{
				HX_STACK_LINE(234)
				int _index = _uglyph;		HX_STACK_VAR(_index,"_index");
				HX_STACK_LINE(237)
				if (((_index == (int)10))){
					HX_STACK_LINE(239)
					Float _g = ::Math_obj::max(_max_w,_cur_x);		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(239)
					_max_w = _g;
					HX_STACK_LINE(240)
					if ((_push_widths)){
						HX_STACK_LINE(240)
						_line_widths->push(_cur_x);
					}
					HX_STACK_LINE(241)
					_cur_x = (int)0;
				}
				else{
					HX_STACK_LINE(245)
					Dynamic _char = this->info->__Field(HX_CSTRING("chars"),true)->__Field(HX_CSTRING("get"),true)(_index);		HX_STACK_VAR(_char,"_char");
					HX_STACK_LINE(246)
					if (((_char == null()))){
						HX_STACK_LINE(247)
						_char = this->space_char;
					}
					HX_STACK_LINE(250)
					Float _spacing = _char->__Field(HX_CSTRING("xadvance"),true);		HX_STACK_VAR(_spacing,"_spacing");
					HX_STACK_LINE(253)
					if (((i < (_len - (int)1)))){
						HX_STACK_LINE(255)
						int _next_index = ::haxe::Utf8_obj::charCodeAt(_string,(i + (int)1));		HX_STACK_VAR(_next_index,"_next_index");
						HX_STACK_LINE(256)
						Dynamic _g1;		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(256)
						{
							HX_STACK_LINE(256)
							::haxe::ds::IntMap _map = this->info->__Field(HX_CSTRING("kernings"),true)->__Field(HX_CSTRING("get"),true)(_index);		HX_STACK_VAR(_map,"_map");
							HX_STACK_LINE(256)
							if (((  (((_map != null()))) ? bool(_map->exists(_next_index)) : bool(false) ))){
								HX_STACK_LINE(256)
								_g1 = _map->get(_next_index);
							}
							else{
								HX_STACK_LINE(256)
								_g1 = (int)0;
							}
						}
						HX_STACK_LINE(256)
						hx::AddEq(_spacing,_g1);
						HX_STACK_LINE(259)
						if (((_next_index >= (int)32))){
							HX_STACK_LINE(260)
							hx::AddEq(_spacing,_letter_spc);
						}
					}
					HX_STACK_LINE(264)
					hx::AddEq(_cur_x,(_spacing * _ratio));
				}
				HX_STACK_LINE(268)
				++(i);
			}
;
		}
		HX_STACK_LINE(273)
		if ((_push_widths)){
			HX_STACK_LINE(273)
			_line_widths->push(_cur_x);
		}
		HX_STACK_LINE(276)
		return ::Math_obj::max(_max_w,_cur_x);
	}
}


HX_DEFINE_DYNAMIC_FUNC4(BitmapFont_obj,width_of,return )

Float BitmapFont_obj::height_of( ::String _string,Float _point_size,hx::Null< Float >  __o__line_spc){
Float _line_spc = __o__line_spc.Default(0.0);
	HX_STACK_FRAME("phoenix.BitmapFont","height_of",0x5232c5fe,"phoenix.BitmapFont.height_of","phoenix/BitmapFont.hx",282,0xdfcf0e40)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_string,"_string")
	HX_STACK_ARG(_point_size,"_point_size")
	HX_STACK_ARG(_line_spc,"_line_spc")
{
		HX_STACK_LINE(282)
		Array< ::String > _lines = _string.split(HX_CSTRING("\n"));		HX_STACK_VAR(_lines,"_lines");
		HX_STACK_LINE(282)
		Float _ratio = (Float(_point_size) / Float(this->info->__Field(HX_CSTRING("point_size"),true)));		HX_STACK_VAR(_ratio,"_ratio");
		HX_STACK_LINE(282)
		return (_lines->length * ((((this->info->__Field(HX_CSTRING("line_height"),true) + _line_spc)) * _ratio)));
	}
}


HX_DEFINE_DYNAMIC_FUNC3(BitmapFont_obj,height_of,return )

::phoenix::Vector BitmapFont_obj::dimensions_of( ::String _string,Float _point_size,::phoenix::Vector _into,hx::Null< Float >  __o__letter_spc,hx::Null< Float >  __o__line_spc){
Float _letter_spc = __o__letter_spc.Default(0.0);
Float _line_spc = __o__line_spc.Default(0.0);
	HX_STACK_FRAME("phoenix.BitmapFont","dimensions_of",0x35ee66d8,"phoenix.BitmapFont.dimensions_of","phoenix/BitmapFont.hx",289,0xdfcf0e40)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_string,"_string")
	HX_STACK_ARG(_point_size,"_point_size")
	HX_STACK_ARG(_into,"_into")
	HX_STACK_ARG(_letter_spc,"_letter_spc")
	HX_STACK_ARG(_line_spc,"_line_spc")
{
		HX_STACK_LINE(291)
		Float _width;		HX_STACK_VAR(_width,"_width");
		HX_STACK_LINE(291)
		{
			HX_STACK_LINE(291)
			Float _cur_x = 0.0;		HX_STACK_VAR(_cur_x,"_cur_x");
			HX_STACK_LINE(291)
			Float _max_w = 0.0;		HX_STACK_VAR(_max_w,"_max_w");
			HX_STACK_LINE(291)
			Float _ratio = (Float(_point_size) / Float(this->info->__Field(HX_CSTRING("point_size"),true)));		HX_STACK_VAR(_ratio,"_ratio");
			HX_STACK_LINE(291)
			bool _push_widths = false;		HX_STACK_VAR(_push_widths,"_push_widths");
			HX_STACK_LINE(291)
			int i = (int)0;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(291)
			int _len;		HX_STACK_VAR(_len,"_len");
			HX_STACK_LINE(291)
			{
				HX_STACK_LINE(291)
				::luxe::utils::unifill::Utf8 u = ::luxe::utils::unifill::Utf8_obj::__new(_string);		HX_STACK_VAR(u,"u");
				HX_STACK_LINE(291)
				_len = u->codePointCount((int)0,_string.length);
			}
			HX_STACK_LINE(291)
			for(::cpp::FastIterator_obj< int > *__it = ::cpp::CreateFastIterator< int >(::luxe::utils::unifill::CodePointIter_obj::__new(_string));  __it->hasNext(); ){
				int _uglyph = __it->next();
				{
					HX_STACK_LINE(291)
					int _index = _uglyph;		HX_STACK_VAR(_index,"_index");
					HX_STACK_LINE(291)
					if (((_index == (int)10))){
						HX_STACK_LINE(291)
						Float _g = ::Math_obj::max(_max_w,_cur_x);		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(291)
						_max_w = _g;
						HX_STACK_LINE(291)
						if ((_push_widths)){
							HX_STACK_LINE(291)
							Dynamic()(_cur_x);
						}
						HX_STACK_LINE(291)
						_cur_x = (int)0;
					}
					else{
						HX_STACK_LINE(291)
						Dynamic _char = this->info->__Field(HX_CSTRING("chars"),true)->__Field(HX_CSTRING("get"),true)(_index);		HX_STACK_VAR(_char,"_char");
						HX_STACK_LINE(291)
						if (((_char == null()))){
							HX_STACK_LINE(291)
							_char = this->space_char;
						}
						HX_STACK_LINE(291)
						Float _spacing = _char->__Field(HX_CSTRING("xadvance"),true);		HX_STACK_VAR(_spacing,"_spacing");
						HX_STACK_LINE(291)
						if (((i < (_len - (int)1)))){
							HX_STACK_LINE(291)
							int _next_index = ::haxe::Utf8_obj::charCodeAt(_string,(i + (int)1));		HX_STACK_VAR(_next_index,"_next_index");
							HX_STACK_LINE(291)
							Dynamic _g1;		HX_STACK_VAR(_g1,"_g1");
							HX_STACK_LINE(291)
							{
								HX_STACK_LINE(291)
								::haxe::ds::IntMap _map = this->info->__Field(HX_CSTRING("kernings"),true)->__Field(HX_CSTRING("get"),true)(_index);		HX_STACK_VAR(_map,"_map");
								HX_STACK_LINE(291)
								if (((  (((_map != null()))) ? bool(_map->exists(_next_index)) : bool(false) ))){
									HX_STACK_LINE(291)
									_g1 = _map->get(_next_index);
								}
								else{
									HX_STACK_LINE(291)
									_g1 = (int)0;
								}
							}
							HX_STACK_LINE(291)
							hx::AddEq(_spacing,_g1);
							HX_STACK_LINE(291)
							if (((_next_index >= (int)32))){
								HX_STACK_LINE(291)
								hx::AddEq(_spacing,_letter_spc);
							}
						}
						HX_STACK_LINE(291)
						hx::AddEq(_cur_x,(_spacing * _ratio));
					}
					HX_STACK_LINE(291)
					++(i);
				}
;
			}
			HX_STACK_LINE(291)
			if ((_push_widths)){
				HX_STACK_LINE(291)
				Dynamic()(_cur_x);
			}
			HX_STACK_LINE(291)
			_width = ::Math_obj::max(_max_w,_cur_x);
		}
		HX_STACK_LINE(292)
		Float _height;		HX_STACK_VAR(_height,"_height");
		HX_STACK_LINE(292)
		{
			HX_STACK_LINE(292)
			Array< ::String > _lines = _string.split(HX_CSTRING("\n"));		HX_STACK_VAR(_lines,"_lines");
			HX_STACK_LINE(292)
			Float _ratio = (Float(_point_size) / Float(this->info->__Field(HX_CSTRING("point_size"),true)));		HX_STACK_VAR(_ratio,"_ratio");
			HX_STACK_LINE(292)
			_height = (_lines->length * ((((this->info->__Field(HX_CSTRING("line_height"),true) + _line_spc)) * _ratio)));
		}
		HX_STACK_LINE(294)
		bool prev = _into->ignore_listeners;		HX_STACK_VAR(prev,"prev");
		HX_STACK_LINE(294)
		_into->ignore_listeners = true;
		HX_STACK_LINE(294)
		{
			HX_STACK_LINE(294)
			_into->x = _width;
			HX_STACK_LINE(294)
			if ((_into->_construct)){
				HX_STACK_LINE(294)
				_into->x;
			}
			else{
				HX_STACK_LINE(294)
				if (((bool((_into->listen_x != null())) && bool(!(_into->ignore_listeners))))){
					HX_STACK_LINE(294)
					_into->listen_x(_width);
				}
				HX_STACK_LINE(294)
				_into->x;
			}
		}
		HX_STACK_LINE(294)
		{
			HX_STACK_LINE(294)
			_into->y = _height;
			HX_STACK_LINE(294)
			if ((_into->_construct)){
				HX_STACK_LINE(294)
				_into->y;
			}
			else{
				HX_STACK_LINE(294)
				if (((bool((_into->listen_y != null())) && bool(!(_into->ignore_listeners))))){
					HX_STACK_LINE(294)
					_into->listen_y(_height);
				}
				HX_STACK_LINE(294)
				_into->y;
			}
		}
		HX_STACK_LINE(294)
		_into->ignore_listeners = prev;
		HX_STACK_LINE(294)
		if (((bool((_into->listen_x != null())) && bool(!(_into->ignore_listeners))))){
			HX_STACK_LINE(294)
			_into->listen_x(_into->x);
		}
		HX_STACK_LINE(294)
		if (((bool((_into->listen_y != null())) && bool(!(_into->ignore_listeners))))){
			HX_STACK_LINE(294)
			_into->listen_y(_into->y);
		}
		HX_STACK_LINE(294)
		return _into;
	}
}


HX_DEFINE_DYNAMIC_FUNC5(BitmapFont_obj,dimensions_of,return )

Float BitmapFont_obj::height_of_lines( Array< ::String > _lines,Float _point_size,hx::Null< Float >  __o__line_spc){
Float _line_spc = __o__line_spc.Default(0.0);
	HX_STACK_FRAME("phoenix.BitmapFont","height_of_lines",0xbb497dbe,"phoenix.BitmapFont.height_of_lines","phoenix/BitmapFont.hx",324,0xdfcf0e40)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_lines,"_lines")
	HX_STACK_ARG(_point_size,"_point_size")
	HX_STACK_ARG(_line_spc,"_line_spc")
{
		HX_STACK_LINE(326)
		Float _ratio = (Float(_point_size) / Float(this->info->__Field(HX_CSTRING("point_size"),true)));		HX_STACK_VAR(_ratio,"_ratio");
		HX_STACK_LINE(327)
		return (_lines->length * ((((this->info->__Field(HX_CSTRING("line_height"),true) + _line_spc)) * _ratio)));
	}
}


HX_DEFINE_DYNAMIC_FUNC3(BitmapFont_obj,height_of_lines,return )

Void BitmapFont_obj::default_options( ){
{
		HX_STACK_FRAME("phoenix.BitmapFont","default_options",0x2cc2e02f,"phoenix.BitmapFont.default_options","phoenix/BitmapFont.hx",331,0xdfcf0e40)
		HX_STACK_THIS(this)
		HX_STACK_LINE(333)
		if (((this->options->__Field(HX_CSTRING("id"),true) == null()))){
			HX_STACK_LINE(334)
			this->options->__FieldRef(HX_CSTRING("id")) = this->id;
		}
		HX_STACK_LINE(337)
		if (((this->options->__Field(HX_CSTRING("path"),true) == null()))){
			HX_STACK_LINE(338)
			this->options->__FieldRef(HX_CSTRING("path")) = HX_CSTRING("assets/");
		}
		HX_STACK_LINE(341)
		if (((this->options->__Field(HX_CSTRING("resources"),true) == null()))){
			HX_STACK_LINE(342)
			this->options->__FieldRef(HX_CSTRING("resources")) = ::Luxe_obj::resources;
		}
		HX_STACK_LINE(345)
		if (((this->options->__Field(HX_CSTRING("mipmaps"),true) == null()))){
			HX_STACK_LINE(346)
			this->options->__FieldRef(HX_CSTRING("mipmaps")) = false;
		}
		HX_STACK_LINE(349)
		if (((this->options->__Field(HX_CSTRING("filter"),true) == null()))){
			HX_STACK_LINE(350)
			this->options->__FieldRef(HX_CSTRING("filter")) = ::phoenix::FilterType_obj::linear;
		}
		HX_STACK_LINE(353)
		if (((this->options->__Field(HX_CSTRING("filter_min"),true) == null()))){
			HX_STACK_LINE(354)
			this->options->__FieldRef(HX_CSTRING("filter_min")) = ::phoenix::FilterType_obj::linear;
		}
		HX_STACK_LINE(357)
		if (((this->options->__Field(HX_CSTRING("filter_mag"),true) == null()))){
			HX_STACK_LINE(358)
			this->options->__FieldRef(HX_CSTRING("filter_mag")) = ::phoenix::FilterType_obj::linear;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(BitmapFont_obj,default_options,(void))

Void BitmapFont_obj::do_onload( hx::Null< bool >  __o_success){
bool success = __o_success.Default(true);
	HX_STACK_FRAME("phoenix.BitmapFont","do_onload",0x4493b488,"phoenix.BitmapFont.do_onload","phoenix/BitmapFont.hx",365,0xdfcf0e40)
	HX_STACK_THIS(this)
	HX_STACK_ARG(success,"success")
{
		HX_STACK_LINE(367)
		this->loaded = success;
		HX_STACK_LINE(369)
		if (((this->onload_dyn() != null()))){
			HX_STACK_LINE(370)
			this->onload(hx::ObjectPtr<OBJ_>(this));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapFont_obj,do_onload,(void))

Void BitmapFont_obj::page_loaded( ::phoenix::Texture t){
{
		HX_STACK_FRAME("phoenix.BitmapFont","page_loaded",0xca7b9544,"phoenix.BitmapFont.page_loaded","phoenix/BitmapFont.hx",375,0xdfcf0e40)
		HX_STACK_THIS(this)
		HX_STACK_ARG(t,"t")
		HX_STACK_LINE(378)
		(this->items_loaded)++;
		HX_STACK_LINE(381)
		if (((this->items_loaded == this->items_total))){
			HX_STACK_LINE(382)
			this->do_onload(null());
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapFont_obj,page_loaded,(void))

Void BitmapFont_obj::load_pages( ::String __o__path,Array< ::Dynamic > _custom_pages){
::String _path = __o__path.Default(HX_CSTRING("assets/"));
	HX_STACK_FRAME("phoenix.BitmapFont","load_pages",0xacfa45fc,"phoenix.BitmapFont.load_pages","phoenix/BitmapFont.hx",387,0xdfcf0e40)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_path,"_path")
	HX_STACK_ARG(_custom_pages,"_custom_pages")
{
		HX_STACK_LINE(387)
		Array< ::Dynamic > _g2 = Array_obj< ::Dynamic >::__new().Add(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(389)
		if (((_custom_pages == null()))){
			HX_STACK_LINE(391)
			int _g = ::Lambda_obj::count(this->info->__Field(HX_CSTRING("pages"),true),null());		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(391)
			this->items_total = _g;
			HX_STACK_LINE(393)
			{
				HX_STACK_LINE(393)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(393)
				Dynamic _g11 = this->info->__Field(HX_CSTRING("pages"),true);		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(393)
				while((true)){
					HX_STACK_LINE(393)
					if ((!(((_g1 < _g11->__Field(HX_CSTRING("length"),true)))))){
						HX_STACK_LINE(393)
						break;
					}
					HX_STACK_LINE(393)
					Dynamic _page = Dynamic( Array_obj<Dynamic>::__new().Add(_g11->__GetItem(_g1)));		HX_STACK_VAR(_page,"_page");
					HX_STACK_LINE(393)
					++(_g1);
					HX_STACK_LINE(395)
					Array< ::Dynamic > _t = Array_obj< ::Dynamic >::__new().Add(::Luxe_obj::loadTexture((_path + _page->__GetItem((int)0)->__Field(HX_CSTRING("file"),true)),null(),this->options->__Field(HX_CSTRING("silent"),true)));		HX_STACK_VAR(_t,"_t");
					HX_STACK_LINE(396)
					if (((_t->__get((int)0).StaticCast< ::phoenix::Texture >() != null()))){

						HX_BEGIN_LOCAL_FUNC_S3(hx::LocalFunc,_Function_5_1,Dynamic,_page,Array< ::Dynamic >,_g2,Array< ::Dynamic >,_t)
						Void run(::phoenix::Texture _){
							HX_STACK_FRAME("*","_Function_5_1",0x5203f63b,"*._Function_5_1","phoenix/BitmapFont.hx",397,0xdfcf0e40)
							HX_STACK_ARG(_,"_")
							{
								HX_STACK_LINE(399)
								_g2->__get((int)0).StaticCast< ::phoenix::BitmapFont >()->pages->set(_page->__GetItem((int)0)->__Field(HX_CSTRING("id"),true),_t->__get((int)0).StaticCast< ::phoenix::Texture >());
								HX_STACK_LINE(401)
								_t->__get((int)0).StaticCast< ::phoenix::Texture >()->slot = _page->__GetItem((int)0)->__Field(HX_CSTRING("id"),true);
								HX_STACK_LINE(402)
								_t->__get((int)0).StaticCast< ::phoenix::Texture >()->set_filter(_g2->__get((int)0).StaticCast< ::phoenix::BitmapFont >()->options->__Field(HX_CSTRING("filter"),true));
								HX_STACK_LINE(403)
								_t->__get((int)0).StaticCast< ::phoenix::Texture >()->set_filter_min(_g2->__get((int)0).StaticCast< ::phoenix::BitmapFont >()->options->__Field(HX_CSTRING("filter_min"),true));
								HX_STACK_LINE(404)
								_t->__get((int)0).StaticCast< ::phoenix::Texture >()->set_filter_mag(_g2->__get((int)0).StaticCast< ::phoenix::BitmapFont >()->options->__Field(HX_CSTRING("filter_mag"),true));
								HX_STACK_LINE(406)
								if ((_g2->__get((int)0).StaticCast< ::phoenix::BitmapFont >()->options->__Field(HX_CSTRING("mipmaps"),true))){
									HX_STACK_LINE(407)
									_t->__get((int)0).StaticCast< ::phoenix::Texture >()->generate_mipmaps();
								}
								HX_STACK_LINE(410)
								_g2->__get((int)0).StaticCast< ::phoenix::BitmapFont >()->page_loaded(_t->__get((int)0).StaticCast< ::phoenix::Texture >());
							}
							return null();
						}
						HX_END_LOCAL_FUNC1((void))

						HX_STACK_LINE(397)
						_t->__get((int)0).StaticCast< ::phoenix::Texture >()->set_onload( Dynamic(new _Function_5_1(_page,_g2,_t)));
					}
					else{
						HX_STACK_LINE(414)
						HX_STACK_DO_THROW((((((HX_CSTRING("BitmapFont: \"") + this->info->__Field(HX_CSTRING("face"),true)) + HX_CSTRING("\" specified a page \"")) + _page->__GetItem((int)0)->__Field(HX_CSTRING("file"),true)) + HX_CSTRING("\" with a missing texture at ")) + _path));
					}
				}
			}
		}
		else{
			HX_STACK_LINE(421)
			this->items_total = _custom_pages->length;
			HX_STACK_LINE(423)
			int _id = (int)0;		HX_STACK_VAR(_id,"_id");
			HX_STACK_LINE(424)
			{
				HX_STACK_LINE(424)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(424)
				while((true)){
					HX_STACK_LINE(424)
					if ((!(((_g < _custom_pages->length))))){
						HX_STACK_LINE(424)
						break;
					}
					HX_STACK_LINE(424)
					::phoenix::Texture _page = _custom_pages->__get(_g).StaticCast< ::phoenix::Texture >();		HX_STACK_VAR(_page,"_page");
					HX_STACK_LINE(424)
					++(_g);
					HX_STACK_LINE(425)
					_page->slot = _id;
					HX_STACK_LINE(426)
					this->pages->set(_id,_page);
					HX_STACK_LINE(427)
					++(_id);
				}
			}
			HX_STACK_LINE(431)
			this->do_onload(null());
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(BitmapFont_obj,load_pages,(void))

::phoenix::geometry::TextGeometry BitmapFont_obj::draw_text( Dynamic opt){
	HX_STACK_FRAME("phoenix.BitmapFont","draw_text",0xd8705a57,"phoenix.BitmapFont.draw_text","phoenix/BitmapFont.hx",438,0xdfcf0e40)
	HX_STACK_THIS(this)
	HX_STACK_ARG(opt,"opt")
	HX_STACK_LINE(440)
	if (((opt->__Field(HX_CSTRING("batcher"),true) == null()))){
		HX_STACK_LINE(440)
		opt->__FieldRef(HX_CSTRING("batcher")) = ::Luxe_obj::renderer->batcher;
	}
	HX_STACK_LINE(442)
	opt->__FieldRef(HX_CSTRING("font")) = hx::ObjectPtr<OBJ_>(this);
	HX_STACK_LINE(444)
	return ::phoenix::geometry::TextGeometry_obj::__new(opt);
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapFont_obj,draw_text,return )

::String BitmapFont_obj::toString( ){
	HX_STACK_FRAME("phoenix.BitmapFont","toString",0xce67633d,"phoenix.BitmapFont.toString","phoenix/BitmapFont.hx",449,0xdfcf0e40)
	HX_STACK_THIS(this)
	HX_STACK_LINE(449)
	return ((HX_CSTRING("BitmapFont(") + this->id) + HX_CSTRING(")"));
}


HX_DEFINE_DYNAMIC_FUNC0(BitmapFont_obj,toString,return )

Array< ::String > BitmapFont_obj::generic_names;

::phoenix::BitmapFont BitmapFont_obj::load( Dynamic _options){
	HX_STACK_FRAME("phoenix.BitmapFont","load",0xf7cd5037,"phoenix.BitmapFont.load","phoenix/BitmapFont.hx",300,0xdfcf0e40)
	HX_STACK_ARG(_options,"_options")
	HX_STACK_LINE(300)
	Dynamic _options1 = Dynamic( Array_obj<Dynamic>::__new().Add(_options));		HX_STACK_VAR(_options1,"_options1");
	HX_STACK_LINE(302)
	if (((bool((_options1->__GetItem((int)0) == null())) || bool((_options1->__GetItem((int)0)->__Field(HX_CSTRING("id"),true) == null()))))){
		HX_STACK_LINE(303)
		HX_STACK_DO_THROW(HX_CSTRING("BitmapFont: load cannot work without a file id to load from."));
	}
	HX_STACK_LINE(306)
	if (((_options1->__GetItem((int)0)->__Field(HX_CSTRING("silent"),true) == null()))){
		HX_STACK_LINE(306)
		_options1->__GetItem((int)0)->__FieldRef(HX_CSTRING("silent")) = false;
	}
	HX_STACK_LINE(308)
	Array< ::Dynamic > font = Array_obj< ::Dynamic >::__new().Add(::phoenix::BitmapFont_obj::__new(_options1->__GetItem((int)0)));		HX_STACK_VAR(font,"font");
	HX_STACK_LINE(309)
	::String file_path = ::haxe::io::Path_obj::join(Array_obj< ::String >::__new().Add(font->__get((int)0).StaticCast< ::phoenix::BitmapFont >()->options->__Field(HX_CSTRING("path"),true)).Add(font->__get((int)0).StaticCast< ::phoenix::BitmapFont >()->options->__Field(HX_CSTRING("id"),true)));		HX_STACK_VAR(file_path,"file_path");

	HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_1_1,Dynamic,_options1,Array< ::Dynamic >,font)
	Void run(::luxe::resource::TextResource font_data){
		HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","phoenix/BitmapFont.hx",311,0xdfcf0e40)
		HX_STACK_ARG(font_data,"font_data")
		{
			HX_STACK_LINE(313)
			font->__get((int)0).StaticCast< ::phoenix::BitmapFont >()->from_string(_options1->__GetItem((int)0)->__Field(HX_CSTRING("id"),true),font_data->text,font->__get((int)0).StaticCast< ::phoenix::BitmapFont >()->options->__Field(HX_CSTRING("path"),true),font->__get((int)0).StaticCast< ::phoenix::BitmapFont >()->options->__Field(HX_CSTRING("onload"),true),null(),font->__get((int)0).StaticCast< ::phoenix::BitmapFont >()->options->__Field(HX_CSTRING("silent"),true));
			HX_STACK_LINE(314)
			font->__get((int)0).StaticCast< ::phoenix::BitmapFont >()->options->__Field(HX_CSTRING("resources"),true)->__Field(HX_CSTRING("cache"),true)(font->__get((int)0).StaticCast< ::phoenix::BitmapFont >());
		}
		return null();
	}
	HX_END_LOCAL_FUNC1((void))

	HX_STACK_LINE(311)
	::Luxe_obj::loadText(file_path, Dynamic(new _Function_1_1(_options1,font)),true);
	HX_STACK_LINE(318)
	return font->__get((int)0).StaticCast< ::phoenix::BitmapFont >();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(BitmapFont_obj,load,return )


BitmapFont_obj::BitmapFont_obj()
{
}

void BitmapFont_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BitmapFont);
	HX_MARK_MEMBER_NAME(pages,"pages");
	HX_MARK_MEMBER_NAME(info,"info");
	HX_MARK_MEMBER_NAME(options,"options");
	HX_MARK_MEMBER_NAME(onload,"onload");
	HX_MARK_MEMBER_NAME(loaded,"loaded");
	HX_MARK_MEMBER_NAME(space_char,"space_char");
	HX_MARK_MEMBER_NAME(items_loaded,"items_loaded");
	HX_MARK_MEMBER_NAME(items_total,"items_total");
	::luxe::resource::Resource_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void BitmapFont_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(pages,"pages");
	HX_VISIT_MEMBER_NAME(info,"info");
	HX_VISIT_MEMBER_NAME(options,"options");
	HX_VISIT_MEMBER_NAME(onload,"onload");
	HX_VISIT_MEMBER_NAME(loaded,"loaded");
	HX_VISIT_MEMBER_NAME(space_char,"space_char");
	HX_VISIT_MEMBER_NAME(items_loaded,"items_loaded");
	HX_VISIT_MEMBER_NAME(items_total,"items_total");
	::luxe::resource::Resource_obj::__Visit(HX_VISIT_ARG);
}

Dynamic BitmapFont_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"load") ) { return load_dyn(); }
		if (HX_FIELD_EQ(inName,"info") ) { return info; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"pages") ) { return pages; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"onload") ) { return onload; }
		if (HX_FIELD_EQ(inName,"loaded") ) { return loaded; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"options") ) { return options; }
		if (HX_FIELD_EQ(inName,"kerning") ) { return kerning_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"width_of") ) { return width_of_dyn(); }
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"height_of") ) { return height_of_dyn(); }
		if (HX_FIELD_EQ(inName,"do_onload") ) { return do_onload_dyn(); }
		if (HX_FIELD_EQ(inName,"draw_text") ) { return draw_text_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"space_char") ) { return space_char; }
		if (HX_FIELD_EQ(inName,"load_pages") ) { return load_pages_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"items_total") ) { return items_total; }
		if (HX_FIELD_EQ(inName,"from_string") ) { return from_string_dyn(); }
		if (HX_FIELD_EQ(inName,"page_loaded") ) { return page_loaded_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"items_loaded") ) { return items_loaded; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"generic_names") ) { return generic_names; }
		if (HX_FIELD_EQ(inName,"dimensions_of") ) { return dimensions_of_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"height_of_lines") ) { return height_of_lines_dyn(); }
		if (HX_FIELD_EQ(inName,"default_options") ) { return default_options_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"wrap_string_to_bounds") ) { return wrap_string_to_bounds_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic BitmapFont_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"info") ) { info=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"pages") ) { pages=inValue.Cast< ::haxe::ds::IntMap >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"onload") ) { onload=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"loaded") ) { loaded=inValue.Cast< bool >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"options") ) { options=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"space_char") ) { space_char=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"items_total") ) { items_total=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"items_loaded") ) { items_loaded=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"generic_names") ) { generic_names=inValue.Cast< Array< ::String > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void BitmapFont_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("pages"));
	outFields->push(HX_CSTRING("info"));
	outFields->push(HX_CSTRING("options"));
	outFields->push(HX_CSTRING("loaded"));
	outFields->push(HX_CSTRING("space_char"));
	outFields->push(HX_CSTRING("items_loaded"));
	outFields->push(HX_CSTRING("items_total"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("generic_names"),
	HX_CSTRING("load"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ds::IntMap*/ ,(int)offsetof(BitmapFont_obj,pages),HX_CSTRING("pages")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(BitmapFont_obj,info),HX_CSTRING("info")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(BitmapFont_obj,options),HX_CSTRING("options")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(BitmapFont_obj,onload),HX_CSTRING("onload")},
	{hx::fsBool,(int)offsetof(BitmapFont_obj,loaded),HX_CSTRING("loaded")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(BitmapFont_obj,space_char),HX_CSTRING("space_char")},
	{hx::fsInt,(int)offsetof(BitmapFont_obj,items_loaded),HX_CSTRING("items_loaded")},
	{hx::fsInt,(int)offsetof(BitmapFont_obj,items_total),HX_CSTRING("items_total")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("pages"),
	HX_CSTRING("info"),
	HX_CSTRING("options"),
	HX_CSTRING("onload"),
	HX_CSTRING("loaded"),
	HX_CSTRING("space_char"),
	HX_CSTRING("items_loaded"),
	HX_CSTRING("items_total"),
	HX_CSTRING("from_string"),
	HX_CSTRING("kerning"),
	HX_CSTRING("wrap_string_to_bounds"),
	HX_CSTRING("width_of"),
	HX_CSTRING("height_of"),
	HX_CSTRING("dimensions_of"),
	HX_CSTRING("height_of_lines"),
	HX_CSTRING("default_options"),
	HX_CSTRING("do_onload"),
	HX_CSTRING("page_loaded"),
	HX_CSTRING("load_pages"),
	HX_CSTRING("draw_text"),
	HX_CSTRING("toString"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BitmapFont_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(BitmapFont_obj::generic_names,"generic_names");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BitmapFont_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(BitmapFont_obj::generic_names,"generic_names");
};

#endif

Class BitmapFont_obj::__mClass;

void BitmapFont_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("phoenix.BitmapFont"), hx::TCanCast< BitmapFont_obj> ,sStaticFields,sMemberFields,
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

void BitmapFont_obj::__boot()
{
	generic_names= Array_obj< ::String >::__new().Add(HX_CSTRING("font")).Add(HX_CSTRING("")).Add(HX_CSTRING(" "));
}

} // end namespace phoenix
