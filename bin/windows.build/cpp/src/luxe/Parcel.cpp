#include <hxcpp.h>

#ifndef INCLUDED_Luxe
#include <Luxe.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_luxe_Parcel
#include <luxe/Parcel.h>
#endif
#ifndef INCLUDED_luxe_Timer
#include <luxe/Timer.h>
#endif
#ifndef INCLUDED_luxe_resource_DataResource
#include <luxe/resource/DataResource.h>
#endif
#ifndef INCLUDED_luxe_resource_Resource
#include <luxe/resource/Resource.h>
#endif
#ifndef INCLUDED_luxe_resource_ResourceManager
#include <luxe/resource/ResourceManager.h>
#endif
#ifndef INCLUDED_luxe_resource_SoundResource
#include <luxe/resource/SoundResource.h>
#endif
#ifndef INCLUDED_luxe_resource_TextResource
#include <luxe/resource/TextResource.h>
#endif
#ifndef INCLUDED_phoenix_BitmapFont
#include <phoenix/BitmapFont.h>
#endif
#ifndef INCLUDED_phoenix_Shader
#include <phoenix/Shader.h>
#endif
#ifndef INCLUDED_phoenix_Texture
#include <phoenix/Texture.h>
#endif
#ifndef INCLUDED_snow_utils_Timer
#include <snow/utils/Timer.h>
#endif
namespace luxe{

Void Parcel_obj::__construct(Dynamic _options)
{
HX_STACK_FRAME("luxe.Parcel","new",0xe0269013,"luxe.Parcel.new","luxe/Parcel.hx",44,0x19b0ca9c)
HX_STACK_THIS(this)
HX_STACK_ARG(_options,"_options")
{
	HX_STACK_LINE(88)
	this->index_texts = (int)0;
	HX_STACK_LINE(87)
	this->index_datas = (int)0;
	HX_STACK_LINE(86)
	this->index_sounds = (int)0;
	HX_STACK_LINE(85)
	this->index_shaders = (int)0;
	HX_STACK_LINE(84)
	this->index_fonts = (int)0;
	HX_STACK_LINE(83)
	this->index_textures = (int)0;
	HX_STACK_LINE(57)
	this->current_count = (int)0;
	HX_STACK_LINE(56)
	this->total_items = (int)0;
	HX_STACK_LINE(47)
	this->time_start_load = (int)0;
	HX_STACK_LINE(46)
	this->time_to_load = (int)0;
	HX_STACK_LINE(62)
	super::__construct();
	HX_STACK_LINE(64)
	if (((_options != null()))){
		HX_STACK_LINE(64)
		this->options = _options;
	}
	else{
		struct _Function_2_1{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/Parcel.hx",64,0x19b0ca9c)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(64)
		this->options = _Function_2_1::Block();
	}
	HX_STACK_LINE(66)
	if (((this->options->__Field(HX_CSTRING("load_spacing"),true) == null()))){
		HX_STACK_LINE(66)
		this->options->__FieldRef(HX_CSTRING("load_spacing")) = 0.1;
	}
	HX_STACK_LINE(67)
	if (((this->options->__Field(HX_CSTRING("start_spacing"),true) == null()))){
		HX_STACK_LINE(67)
		this->options->__FieldRef(HX_CSTRING("start_spacing")) = 0.4;
	}
	HX_STACK_LINE(68)
	if (((this->options->__Field(HX_CSTRING("sequential"),true) == null()))){
		HX_STACK_LINE(68)
		this->options->__FieldRef(HX_CSTRING("sequential")) = false;
	}
	HX_STACK_LINE(69)
	if (((this->options->__Field(HX_CSTRING("threaded"),true) == null()))){
		HX_STACK_LINE(69)
		this->options->__FieldRef(HX_CSTRING("threaded")) = false;
	}
	HX_STACK_LINE(70)
	if (((this->options->__Field(HX_CSTRING("silent"),true) == null()))){
		HX_STACK_LINE(70)
		this->options->__FieldRef(HX_CSTRING("silent")) = false;
	}
	HX_STACK_LINE(72)
	this->texture_list = Array_obj< ::String >::__new();
	HX_STACK_LINE(73)
	this->font_list = Dynamic( Array_obj<Dynamic>::__new());
	HX_STACK_LINE(74)
	this->shader_list = Dynamic( Array_obj<Dynamic>::__new());
	HX_STACK_LINE(75)
	this->sound_list = Dynamic( Array_obj<Dynamic>::__new());
	HX_STACK_LINE(76)
	this->text_list = Dynamic( Array_obj<Dynamic>::__new());
	HX_STACK_LINE(77)
	this->data_list = Dynamic( Array_obj<Dynamic>::__new());
}
;
	return null();
}

//Parcel_obj::~Parcel_obj() { }

Dynamic Parcel_obj::__CreateEmpty() { return  new Parcel_obj; }
hx::ObjectPtr< Parcel_obj > Parcel_obj::__new(Dynamic _options)
{  hx::ObjectPtr< Parcel_obj > result = new Parcel_obj();
	result->__construct(_options);
	return result;}

Dynamic Parcel_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Parcel_obj > result = new Parcel_obj();
	result->__construct(inArgs[0]);
	return result;}

Void Parcel_obj::refresh_total_items( ){
{
		HX_STACK_FRAME("luxe.Parcel","refresh_total_items",0x46c96c14,"luxe.Parcel.refresh_total_items","luxe/Parcel.hx",92,0x19b0ca9c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(92)
		this->total_items = (((((this->texture_list->length + this->shader_list->__Field(HX_CSTRING("length"),true)) + this->font_list->__Field(HX_CSTRING("length"),true)) + this->sound_list->__Field(HX_CSTRING("length"),true)) + this->text_list->__Field(HX_CSTRING("length"),true)) + this->data_list->__Field(HX_CSTRING("length"),true));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Parcel_obj,refresh_total_items,(void))

Void Parcel_obj::load( ){
{
		HX_STACK_FRAME("luxe.Parcel","load",0x404c9713,"luxe.Parcel.load","luxe/Parcel.hx",101,0x19b0ca9c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(101)
		Array< ::Dynamic > _g = Array_obj< ::Dynamic >::__new().Add(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(103)
		Float _g1 = ::Luxe_obj::get_time();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(103)
		this->time_start_load = _g1;
		HX_STACK_LINE(104)
		this->current_count = (int)0;
		HX_STACK_LINE(106)
		this->refresh_total_items();
		HX_STACK_LINE(108)
		if (((this->total_items == (int)0))){
			HX_STACK_LINE(109)
			this->do_complete();
			HX_STACK_LINE(110)
			return null();
		}

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,Array< ::Dynamic >,_g)
		Void run(){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","luxe/Parcel.hx",115,0x19b0ca9c)
			{
				HX_STACK_LINE(117)
				if ((!(_g->__get((int)0).StaticCast< ::luxe::Parcel >()->options->__Field(HX_CSTRING("silent"),true)))){
					HX_STACK_LINE(117)
					::haxe::Log_obj::trace(HX_CSTRING("   i / parcel / starting load"),hx::SourceInfo(HX_CSTRING("Parcel.hx"),117,HX_CSTRING("luxe.Parcel"),HX_CSTRING("load")));
				}
				HX_STACK_LINE(123)
				if ((!(_g->__get((int)0).StaticCast< ::luxe::Parcel >()->options->__Field(HX_CSTRING("sequential"),true)))){
					HX_STACK_LINE(125)
					_g->__get((int)0).StaticCast< ::luxe::Parcel >()->start_textures_load();
					HX_STACK_LINE(126)
					_g->__get((int)0).StaticCast< ::luxe::Parcel >()->start_fonts_load();
					HX_STACK_LINE(127)
					_g->__get((int)0).StaticCast< ::luxe::Parcel >()->start_shaders_load();
					HX_STACK_LINE(128)
					_g->__get((int)0).StaticCast< ::luxe::Parcel >()->start_sounds_load();
					HX_STACK_LINE(129)
					_g->__get((int)0).StaticCast< ::luxe::Parcel >()->start_texts_load();
					HX_STACK_LINE(130)
					_g->__get((int)0).StaticCast< ::luxe::Parcel >()->start_datas_load();
				}
				else{
					HX_STACK_LINE(134)
					_g->__get((int)0).StaticCast< ::luxe::Parcel >()->start_textures_load();
				}
			}
			return null();
		}
		HX_END_LOCAL_FUNC0((void))

		HX_STACK_LINE(115)
		::Luxe_obj::timer->schedule(this->options->__Field(HX_CSTRING("start_spacing"),true), Dynamic(new _Function_1_1(_g)),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Parcel_obj,load,(void))

Void Parcel_obj::from_json( Dynamic _json_object){
{
		HX_STACK_FRAME("luxe.Parcel","from_json",0x3b42e050,"luxe.Parcel.from_json","luxe/Parcel.hx",147,0x19b0ca9c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_json_object,"_json_object")
		HX_STACK_LINE(149)
		if (((_json_object != null()))){
			HX_STACK_LINE(151)
			if (((_json_object->__Field(HX_CSTRING("textures"),true) != null()))){
				HX_STACK_LINE(152)
				Dynamic _textures = _json_object->__Field(HX_CSTRING("textures"),true);		HX_STACK_VAR(_textures,"_textures");
				HX_STACK_LINE(153)
				{
					HX_STACK_LINE(153)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(153)
					while((true)){
						HX_STACK_LINE(153)
						if ((!(((_g < _textures->__Field(HX_CSTRING("length"),true)))))){
							HX_STACK_LINE(153)
							break;
						}
						HX_STACK_LINE(153)
						Dynamic item = _textures->__GetItem(_g);		HX_STACK_VAR(item,"item");
						HX_STACK_LINE(153)
						++(_g);
						HX_STACK_LINE(154)
						if (((item != null()))){
							HX_STACK_LINE(155)
							::String id;		HX_STACK_VAR(id,"id");
							HX_STACK_LINE(155)
							if (((item->__Field(HX_CSTRING("id"),true) == null()))){
								HX_STACK_LINE(155)
								id = HX_CSTRING("");
							}
							else{
								HX_STACK_LINE(155)
								id = item->__Field(HX_CSTRING("id"),true);
							}
							HX_STACK_LINE(156)
							if (((id != HX_CSTRING("")))){
								HX_STACK_LINE(157)
								this->add_texture(id);
							}
							else{
								HX_STACK_LINE(159)
								::String _g1 = ::Std_obj::string(item);		HX_STACK_VAR(_g1,"_g1");
								HX_STACK_LINE(159)
								::String _g11 = (HX_CSTRING("texture not added due to incomplete info: ") + _g1);		HX_STACK_VAR(_g11,"_g11");
								HX_STACK_LINE(159)
								::String _g2 = (HX_CSTRING("   i / parcel / ") + _g11);		HX_STACK_VAR(_g2,"_g2");
								HX_STACK_LINE(159)
								::haxe::Log_obj::trace(_g2,hx::SourceInfo(HX_CSTRING("Parcel.hx"),159,HX_CSTRING("luxe.Parcel"),HX_CSTRING("from_json")));
							}
						}
					}
				}
			}
			HX_STACK_LINE(165)
			if (((_json_object->__Field(HX_CSTRING("shaders"),true) != null()))){
				HX_STACK_LINE(166)
				Dynamic _shaders = _json_object->__Field(HX_CSTRING("shaders"),true);		HX_STACK_VAR(_shaders,"_shaders");
				HX_STACK_LINE(167)
				{
					HX_STACK_LINE(167)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(167)
					while((true)){
						HX_STACK_LINE(167)
						if ((!(((_g < _shaders->__Field(HX_CSTRING("length"),true)))))){
							HX_STACK_LINE(167)
							break;
						}
						HX_STACK_LINE(167)
						Dynamic item = _shaders->__GetItem(_g);		HX_STACK_VAR(item,"item");
						HX_STACK_LINE(167)
						++(_g);
						HX_STACK_LINE(168)
						if (((item != null()))){
							HX_STACK_LINE(169)
							::String ps_id;		HX_STACK_VAR(ps_id,"ps_id");
							HX_STACK_LINE(169)
							if (((item->__Field(HX_CSTRING("ps_id"),true) == null()))){
								HX_STACK_LINE(169)
								ps_id = HX_CSTRING("default");
							}
							else{
								HX_STACK_LINE(169)
								ps_id = item->__Field(HX_CSTRING("ps_id"),true);
							}
							HX_STACK_LINE(170)
							::String vs_id;		HX_STACK_VAR(vs_id,"vs_id");
							HX_STACK_LINE(170)
							if (((item->__Field(HX_CSTRING("vs_id"),true) == null()))){
								HX_STACK_LINE(170)
								vs_id = HX_CSTRING("default");
							}
							else{
								HX_STACK_LINE(170)
								vs_id = item->__Field(HX_CSTRING("vs_id"),true);
							}
							HX_STACK_LINE(172)
							this->add_shader(ps_id,vs_id);
						}
					}
				}
			}
			HX_STACK_LINE(178)
			if (((_json_object->__Field(HX_CSTRING("fonts"),true) != null()))){
				HX_STACK_LINE(179)
				Dynamic _fonts = _json_object->__Field(HX_CSTRING("fonts"),true);		HX_STACK_VAR(_fonts,"_fonts");
				HX_STACK_LINE(180)
				{
					HX_STACK_LINE(180)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(180)
					while((true)){
						HX_STACK_LINE(180)
						if ((!(((_g < _fonts->__Field(HX_CSTRING("length"),true)))))){
							HX_STACK_LINE(180)
							break;
						}
						HX_STACK_LINE(180)
						Dynamic item = _fonts->__GetItem(_g);		HX_STACK_VAR(item,"item");
						HX_STACK_LINE(180)
						++(_g);
						HX_STACK_LINE(181)
						if (((item != null()))){
							HX_STACK_LINE(182)
							::String id;		HX_STACK_VAR(id,"id");
							HX_STACK_LINE(182)
							if (((item->__Field(HX_CSTRING("id"),true) == null()))){
								HX_STACK_LINE(182)
								id = HX_CSTRING("");
							}
							else{
								HX_STACK_LINE(182)
								id = item->__Field(HX_CSTRING("id"),true);
							}
							HX_STACK_LINE(183)
							::String path;		HX_STACK_VAR(path,"path");
							HX_STACK_LINE(183)
							if (((item->__Field(HX_CSTRING("path"),true) == null()))){
								HX_STACK_LINE(183)
								path = HX_CSTRING("");
							}
							else{
								HX_STACK_LINE(183)
								path = item->__Field(HX_CSTRING("path"),true);
							}
							HX_STACK_LINE(184)
							if (((bool((id != HX_CSTRING(""))) && bool((path != HX_CSTRING("")))))){
								HX_STACK_LINE(185)
								this->add_font(id,path);
							}
							else{
								HX_STACK_LINE(187)
								::String _g3 = ::Std_obj::string(item);		HX_STACK_VAR(_g3,"_g3");
								HX_STACK_LINE(187)
								::String _g4 = (HX_CSTRING("font not added due to incomplete info: ") + _g3);		HX_STACK_VAR(_g4,"_g4");
								HX_STACK_LINE(187)
								::String _g5 = (HX_CSTRING("   i / parcel / ") + _g4);		HX_STACK_VAR(_g5,"_g5");
								HX_STACK_LINE(187)
								::haxe::Log_obj::trace(_g5,hx::SourceInfo(HX_CSTRING("Parcel.hx"),187,HX_CSTRING("luxe.Parcel"),HX_CSTRING("from_json")));
							}
						}
					}
				}
			}
			HX_STACK_LINE(193)
			if (((_json_object->__Field(HX_CSTRING("sounds"),true) != null()))){
				HX_STACK_LINE(194)
				Dynamic _sounds = _json_object->__Field(HX_CSTRING("sounds"),true);		HX_STACK_VAR(_sounds,"_sounds");
				HX_STACK_LINE(195)
				{
					HX_STACK_LINE(195)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(195)
					while((true)){
						HX_STACK_LINE(195)
						if ((!(((_g < _sounds->__Field(HX_CSTRING("length"),true)))))){
							HX_STACK_LINE(195)
							break;
						}
						HX_STACK_LINE(195)
						Dynamic item = _sounds->__GetItem(_g);		HX_STACK_VAR(item,"item");
						HX_STACK_LINE(195)
						++(_g);
						HX_STACK_LINE(196)
						if (((item != null()))){
							HX_STACK_LINE(197)
							::String id;		HX_STACK_VAR(id,"id");
							HX_STACK_LINE(197)
							if (((item->__Field(HX_CSTRING("id"),true) == null()))){
								HX_STACK_LINE(197)
								id = HX_CSTRING("");
							}
							else{
								HX_STACK_LINE(197)
								id = item->__Field(HX_CSTRING("id"),true);
							}
							HX_STACK_LINE(198)
							::String name;		HX_STACK_VAR(name,"name");
							HX_STACK_LINE(198)
							if (((item->__Field(HX_CSTRING("name"),true) == null()))){
								HX_STACK_LINE(198)
								name = HX_CSTRING("");
							}
							else{
								HX_STACK_LINE(198)
								name = item->__Field(HX_CSTRING("name"),true);
							}
							HX_STACK_LINE(199)
							bool is_stream;		HX_STACK_VAR(is_stream,"is_stream");
							HX_STACK_LINE(199)
							if (((item->__Field(HX_CSTRING("is_stream"),true) == null()))){
								HX_STACK_LINE(199)
								is_stream = false;
							}
							else{
								HX_STACK_LINE(199)
								is_stream = item->__Field(HX_CSTRING("is_stream"),true);
							}
							HX_STACK_LINE(200)
							if (((bool((id != HX_CSTRING(""))) && bool((name != HX_CSTRING("")))))){
								HX_STACK_LINE(201)
								this->add_sound(id,name,is_stream);
							}
							else{
								HX_STACK_LINE(203)
								::String _g6 = ::Std_obj::string(item);		HX_STACK_VAR(_g6,"_g6");
								HX_STACK_LINE(203)
								::String _g7 = (HX_CSTRING("sounds not added due to incomplete info: ") + _g6);		HX_STACK_VAR(_g7,"_g7");
								HX_STACK_LINE(203)
								::String _g8 = (HX_CSTRING("   i / parcel / ") + _g7);		HX_STACK_VAR(_g8,"_g8");
								HX_STACK_LINE(203)
								::haxe::Log_obj::trace(_g8,hx::SourceInfo(HX_CSTRING("Parcel.hx"),203,HX_CSTRING("luxe.Parcel"),HX_CSTRING("from_json")));
							}
						}
					}
				}
			}
			HX_STACK_LINE(209)
			if (((_json_object->__Field(HX_CSTRING("text"),true) != null()))){
				HX_STACK_LINE(210)
				Dynamic _texts = _json_object->__Field(HX_CSTRING("text"),true);		HX_STACK_VAR(_texts,"_texts");
				HX_STACK_LINE(211)
				{
					HX_STACK_LINE(211)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(211)
					while((true)){
						HX_STACK_LINE(211)
						if ((!(((_g < _texts->__Field(HX_CSTRING("length"),true)))))){
							HX_STACK_LINE(211)
							break;
						}
						HX_STACK_LINE(211)
						Dynamic item = _texts->__GetItem(_g);		HX_STACK_VAR(item,"item");
						HX_STACK_LINE(211)
						++(_g);
						HX_STACK_LINE(212)
						if (((item != null()))){
							HX_STACK_LINE(213)
							::String id;		HX_STACK_VAR(id,"id");
							HX_STACK_LINE(213)
							if (((item->__Field(HX_CSTRING("id"),true) == null()))){
								HX_STACK_LINE(213)
								id = HX_CSTRING("");
							}
							else{
								HX_STACK_LINE(213)
								id = item->__Field(HX_CSTRING("id"),true);
							}
							HX_STACK_LINE(214)
							bool async;		HX_STACK_VAR(async,"async");
							HX_STACK_LINE(214)
							if (((item->__Field(HX_CSTRING("async"),true) == null()))){
								HX_STACK_LINE(214)
								async = false;
							}
							else{
								HX_STACK_LINE(214)
								async = item->__Field(HX_CSTRING("async"),true);
							}
							HX_STACK_LINE(215)
							if (((id != HX_CSTRING("")))){
								HX_STACK_LINE(216)
								this->add_text(id,async);
							}
							else{
								HX_STACK_LINE(218)
								::String _g9 = ::Std_obj::string(item);		HX_STACK_VAR(_g9,"_g9");
								HX_STACK_LINE(218)
								::String _g10 = (HX_CSTRING("text not added due to incomplete info: ") + _g9);		HX_STACK_VAR(_g10,"_g10");
								HX_STACK_LINE(218)
								::String _g11 = (HX_CSTRING("   i / parcel / ") + _g10);		HX_STACK_VAR(_g11,"_g11");
								HX_STACK_LINE(218)
								::haxe::Log_obj::trace(_g11,hx::SourceInfo(HX_CSTRING("Parcel.hx"),218,HX_CSTRING("luxe.Parcel"),HX_CSTRING("from_json")));
							}
						}
					}
				}
			}
			HX_STACK_LINE(224)
			if (((_json_object->__Field(HX_CSTRING("data"),true) != null()))){
				HX_STACK_LINE(225)
				Dynamic _datas = _json_object->__Field(HX_CSTRING("data"),true);		HX_STACK_VAR(_datas,"_datas");
				HX_STACK_LINE(226)
				{
					HX_STACK_LINE(226)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(226)
					while((true)){
						HX_STACK_LINE(226)
						if ((!(((_g < _datas->__Field(HX_CSTRING("length"),true)))))){
							HX_STACK_LINE(226)
							break;
						}
						HX_STACK_LINE(226)
						Dynamic item = _datas->__GetItem(_g);		HX_STACK_VAR(item,"item");
						HX_STACK_LINE(226)
						++(_g);
						HX_STACK_LINE(227)
						if (((item != null()))){
							HX_STACK_LINE(228)
							::String id;		HX_STACK_VAR(id,"id");
							HX_STACK_LINE(228)
							if (((item->__Field(HX_CSTRING("id"),true) == null()))){
								HX_STACK_LINE(228)
								id = HX_CSTRING("");
							}
							else{
								HX_STACK_LINE(228)
								id = item->__Field(HX_CSTRING("id"),true);
							}
							HX_STACK_LINE(229)
							bool async;		HX_STACK_VAR(async,"async");
							HX_STACK_LINE(229)
							if (((item->__Field(HX_CSTRING("async"),true) == null()))){
								HX_STACK_LINE(229)
								async = false;
							}
							else{
								HX_STACK_LINE(229)
								async = item->__Field(HX_CSTRING("async"),true);
							}
							HX_STACK_LINE(230)
							if (((id != HX_CSTRING("")))){
								HX_STACK_LINE(231)
								this->add_data(id,async);
							}
							else{
								HX_STACK_LINE(233)
								::String _g12 = ::Std_obj::string(item);		HX_STACK_VAR(_g12,"_g12");
								HX_STACK_LINE(233)
								::String _g13 = (HX_CSTRING("data not added due to incomplete info: ") + _g12);		HX_STACK_VAR(_g13,"_g13");
								HX_STACK_LINE(233)
								::String _g14 = (HX_CSTRING("   i / parcel / ") + _g13);		HX_STACK_VAR(_g14,"_g14");
								HX_STACK_LINE(233)
								::haxe::Log_obj::trace(_g14,hx::SourceInfo(HX_CSTRING("Parcel.hx"),233,HX_CSTRING("luxe.Parcel"),HX_CSTRING("from_json")));
							}
						}
					}
				}
			}
		}
		HX_STACK_LINE(241)
		this->refresh_total_items();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Parcel_obj,from_json,(void))

Void Parcel_obj::start_textures_load( ){
{
		HX_STACK_FRAME("luxe.Parcel","start_textures_load",0x9ea6b5a3,"luxe.Parcel.start_textures_load","luxe/Parcel.hx",249,0x19b0ca9c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(249)
		if (((this->texture_list->length > (int)0))){
			HX_STACK_LINE(251)
			this->index_textures = (int)0;
			HX_STACK_LINE(253)
			if ((this->options->__Field(HX_CSTRING("sequential"),true))){
				HX_STACK_LINE(256)
				this->recursive_load_textures(null());
			}
			else{
				HX_STACK_LINE(262)
				this->load_textures();
			}
		}
		else{
			HX_STACK_LINE(269)
			if ((this->options->__Field(HX_CSTRING("sequential"),true))){
				HX_STACK_LINE(270)
				this->start_fonts_load();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Parcel_obj,start_textures_load,(void))

Void Parcel_obj::start_fonts_load( ){
{
		HX_STACK_FRAME("luxe.Parcel","start_fonts_load",0x7838542b,"luxe.Parcel.start_fonts_load","luxe/Parcel.hx",281,0x19b0ca9c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(281)
		if (((this->font_list->__Field(HX_CSTRING("length"),true) > (int)0))){
			HX_STACK_LINE(283)
			this->index_fonts = (int)0;
			HX_STACK_LINE(285)
			if ((this->options->__Field(HX_CSTRING("sequential"),true))){
				HX_STACK_LINE(288)
				this->recursive_load_fonts(null());
			}
			else{
				HX_STACK_LINE(294)
				this->load_fonts();
			}
		}
		else{
			HX_STACK_LINE(300)
			if ((this->options->__Field(HX_CSTRING("sequential"),true))){
				HX_STACK_LINE(301)
				this->start_shaders_load();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Parcel_obj,start_fonts_load,(void))

Void Parcel_obj::start_shaders_load( ){
{
		HX_STACK_FRAME("luxe.Parcel","start_shaders_load",0xa694c881,"luxe.Parcel.start_shaders_load","luxe/Parcel.hx",312,0x19b0ca9c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(312)
		if (((this->shader_list->__Field(HX_CSTRING("length"),true) > (int)0))){
			HX_STACK_LINE(314)
			this->index_shaders = (int)0;
			HX_STACK_LINE(316)
			if ((this->options->__Field(HX_CSTRING("sequential"),true))){
				HX_STACK_LINE(319)
				this->recursive_load_shaders(null());
			}
			else{
				HX_STACK_LINE(325)
				this->load_shaders();
			}
		}
		else{
			HX_STACK_LINE(331)
			if ((this->options->__Field(HX_CSTRING("sequential"),true))){
				HX_STACK_LINE(332)
				this->start_sounds_load();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Parcel_obj,start_shaders_load,(void))

Void Parcel_obj::start_sounds_load( ){
{
		HX_STACK_FRAME("luxe.Parcel","start_sounds_load",0xc302a717,"luxe.Parcel.start_sounds_load","luxe/Parcel.hx",343,0x19b0ca9c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(343)
		if (((this->sound_list->__Field(HX_CSTRING("length"),true) > (int)0))){
			HX_STACK_LINE(345)
			this->index_sounds = (int)0;
			HX_STACK_LINE(347)
			if ((this->options->__Field(HX_CSTRING("sequential"),true))){
				HX_STACK_LINE(350)
				this->recursive_load_sounds(null());
			}
			else{
				HX_STACK_LINE(356)
				this->load_sounds();
			}
		}
		else{
			HX_STACK_LINE(362)
			if ((this->options->__Field(HX_CSTRING("sequential"),true))){
				HX_STACK_LINE(363)
				this->start_texts_load();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Parcel_obj,start_sounds_load,(void))

Void Parcel_obj::start_datas_load( ){
{
		HX_STACK_FRAME("luxe.Parcel","start_datas_load",0xaf8682c6,"luxe.Parcel.start_datas_load","luxe/Parcel.hx",374,0x19b0ca9c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(374)
		if (((this->data_list->__Field(HX_CSTRING("length"),true) > (int)0))){
			HX_STACK_LINE(376)
			this->index_datas = (int)0;
			HX_STACK_LINE(378)
			if ((this->options->__Field(HX_CSTRING("sequential"),true))){
				HX_STACK_LINE(381)
				this->recursive_load_datas(null());
			}
			else{
				HX_STACK_LINE(387)
				this->load_datas();
			}
		}
		else{
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Parcel_obj,start_datas_load,(void))

Void Parcel_obj::start_texts_load( ){
{
		HX_STACK_FRAME("luxe.Parcel","start_texts_load",0xfad53d89,"luxe.Parcel.start_texts_load","luxe/Parcel.hx",401,0x19b0ca9c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(401)
		if (((this->text_list->__Field(HX_CSTRING("length"),true) > (int)0))){
			HX_STACK_LINE(403)
			this->index_texts = (int)0;
			HX_STACK_LINE(405)
			if ((this->options->__Field(HX_CSTRING("sequential"),true))){
				HX_STACK_LINE(408)
				this->recursive_load_texts(null());
			}
			else{
				HX_STACK_LINE(414)
				this->load_texts();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Parcel_obj,start_texts_load,(void))

Void Parcel_obj::load_textures( ){
{
		HX_STACK_FRAME("luxe.Parcel","load_textures",0x35d45d24,"luxe.Parcel.load_textures","luxe/Parcel.hx",426,0x19b0ca9c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(426)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(426)
		Array< ::String > _g1 = this->texture_list;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(426)
		while((true)){
			HX_STACK_LINE(426)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(426)
				break;
			}
			HX_STACK_LINE(426)
			::String tex = _g1->__get(_g);		HX_STACK_VAR(tex,"tex");
			HX_STACK_LINE(426)
			++(_g);
			HX_STACK_LINE(427)
			this->load_texture(tex,this->single_item_complete_dyn());
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Parcel_obj,load_textures,(void))

Void Parcel_obj::load_fonts( ){
{
		HX_STACK_FRAME("luxe.Parcel","load_fonts",0xc0e8a658,"luxe.Parcel.load_fonts","luxe/Parcel.hx",434,0x19b0ca9c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(434)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(434)
		Dynamic _g1 = this->font_list;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(434)
		while((true)){
			HX_STACK_LINE(434)
			if ((!(((_g < _g1->__Field(HX_CSTRING("length"),true)))))){
				HX_STACK_LINE(434)
				break;
			}
			HX_STACK_LINE(434)
			Dynamic fnt = _g1->__GetItem(_g);		HX_STACK_VAR(fnt,"fnt");
			HX_STACK_LINE(434)
			++(_g);
			HX_STACK_LINE(435)
			this->load_font(fnt,this->single_item_complete_dyn());
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Parcel_obj,load_fonts,(void))

Void Parcel_obj::load_shaders( ){
{
		HX_STACK_FRAME("luxe.Parcel","load_shaders",0x12653d42,"luxe.Parcel.load_shaders","luxe/Parcel.hx",442,0x19b0ca9c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(442)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(442)
		Dynamic _g1 = this->shader_list;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(442)
		while((true)){
			HX_STACK_LINE(442)
			if ((!(((_g < _g1->__Field(HX_CSTRING("length"),true)))))){
				HX_STACK_LINE(442)
				break;
			}
			HX_STACK_LINE(442)
			Dynamic shader = _g1->__GetItem(_g);		HX_STACK_VAR(shader,"shader");
			HX_STACK_LINE(442)
			++(_g);
			HX_STACK_LINE(443)
			this->load_shader(shader,this->single_item_complete_dyn());
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Parcel_obj,load_shaders,(void))

Void Parcel_obj::load_sounds( ){
{
		HX_STACK_FRAME("luxe.Parcel","load_sounds",0x41e87bb0,"luxe.Parcel.load_sounds","luxe/Parcel.hx",450,0x19b0ca9c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(450)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(450)
		Dynamic _g1 = this->sound_list;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(450)
		while((true)){
			HX_STACK_LINE(450)
			if ((!(((_g < _g1->__Field(HX_CSTRING("length"),true)))))){
				HX_STACK_LINE(450)
				break;
			}
			HX_STACK_LINE(450)
			Dynamic sound = _g1->__GetItem(_g);		HX_STACK_VAR(sound,"sound");
			HX_STACK_LINE(450)
			++(_g);
			HX_STACK_LINE(451)
			this->load_sound(sound,this->single_item_complete_dyn());
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Parcel_obj,load_sounds,(void))

Void Parcel_obj::load_datas( ){
{
		HX_STACK_FRAME("luxe.Parcel","load_datas",0x90defd9d,"luxe.Parcel.load_datas","luxe/Parcel.hx",458,0x19b0ca9c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(458)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(458)
		Dynamic _g1 = this->data_list;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(458)
		while((true)){
			HX_STACK_LINE(458)
			if ((!(((_g < _g1->__Field(HX_CSTRING("length"),true)))))){
				HX_STACK_LINE(458)
				break;
			}
			HX_STACK_LINE(458)
			Dynamic data = _g1->__GetItem(_g);		HX_STACK_VAR(data,"data");
			HX_STACK_LINE(458)
			++(_g);
			HX_STACK_LINE(459)
			this->load_data(data,this->single_item_complete_dyn());
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Parcel_obj,load_datas,(void))

Void Parcel_obj::load_texts( ){
{
		HX_STACK_FRAME("luxe.Parcel","load_texts",0xc9f039ba,"luxe.Parcel.load_texts","luxe/Parcel.hx",466,0x19b0ca9c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(466)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(466)
		Dynamic _g1 = this->text_list;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(466)
		while((true)){
			HX_STACK_LINE(466)
			if ((!(((_g < _g1->__Field(HX_CSTRING("length"),true)))))){
				HX_STACK_LINE(466)
				break;
			}
			HX_STACK_LINE(466)
			Dynamic text = _g1->__GetItem(_g);		HX_STACK_VAR(text,"text");
			HX_STACK_LINE(466)
			++(_g);
			HX_STACK_LINE(467)
			this->load_text(text,this->single_item_complete_dyn());
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Parcel_obj,load_texts,(void))

Void Parcel_obj::recursive_load_textures( ::luxe::resource::Resource item){
{
		HX_STACK_FRAME("luxe.Parcel","recursive_load_textures",0xb868ca17,"luxe.Parcel.recursive_load_textures","luxe/Parcel.hx",474,0x19b0ca9c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(item,"item")
		HX_STACK_LINE(476)
		if (((item != null()))){
			HX_STACK_LINE(478)
			this->single_item_complete(item);
			HX_STACK_LINE(480)
			if (((bool((this->index_textures == this->texture_list->length)) && bool(this->options->__Field(HX_CSTRING("sequential"),true))))){
				HX_STACK_LINE(481)
				this->start_fonts_load();
			}
		}
		HX_STACK_LINE(489)
		if (((this->index_textures < this->texture_list->length))){
			HX_STACK_LINE(491)
			int current = this->index_textures;		HX_STACK_VAR(current,"current");
			HX_STACK_LINE(493)
			(this->index_textures)++;
			HX_STACK_LINE(495)
			this->load_texture(this->texture_list->__get(current),this->recursive_load_textures_dyn());
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Parcel_obj,recursive_load_textures,(void))

Void Parcel_obj::recursive_load_shaders( ::luxe::resource::Resource item){
{
		HX_STACK_FRAME("luxe.Parcel","recursive_load_shaders",0xb28cefaf,"luxe.Parcel.recursive_load_shaders","luxe/Parcel.hx",505,0x19b0ca9c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(item,"item")
		HX_STACK_LINE(507)
		if (((item != null()))){
			HX_STACK_LINE(509)
			this->single_item_complete(item);
			HX_STACK_LINE(511)
			if (((bool((this->index_shaders == this->shader_list->__Field(HX_CSTRING("length"),true))) && bool(this->options->__Field(HX_CSTRING("sequential"),true))))){
				HX_STACK_LINE(512)
				this->start_sounds_load();
			}
		}
		HX_STACK_LINE(520)
		if (((this->index_shaders < this->shader_list->__Field(HX_CSTRING("length"),true)))){
			HX_STACK_LINE(522)
			int current = this->index_shaders;		HX_STACK_VAR(current,"current");
			HX_STACK_LINE(524)
			(this->index_shaders)++;
			HX_STACK_LINE(526)
			this->load_shader(this->shader_list->__GetItem(current),this->recursive_load_shaders_dyn());
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Parcel_obj,recursive_load_shaders,(void))

Void Parcel_obj::recursive_load_fonts( ::luxe::resource::Resource item){
{
		HX_STACK_FRAME("luxe.Parcel","recursive_load_fonts",0x1080f385,"luxe.Parcel.recursive_load_fonts","luxe/Parcel.hx",536,0x19b0ca9c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(item,"item")
		HX_STACK_LINE(538)
		if (((item != null()))){
			HX_STACK_LINE(540)
			this->single_item_complete(item);
			HX_STACK_LINE(542)
			if (((bool((this->index_fonts == this->font_list->__Field(HX_CSTRING("length"),true))) && bool(this->options->__Field(HX_CSTRING("sequential"),true))))){
				HX_STACK_LINE(543)
				this->start_shaders_load();
			}
		}
		HX_STACK_LINE(551)
		if (((this->index_fonts < this->font_list->__Field(HX_CSTRING("length"),true)))){
			HX_STACK_LINE(553)
			int current = this->index_fonts;		HX_STACK_VAR(current,"current");
			HX_STACK_LINE(555)
			(this->index_fonts)++;
			HX_STACK_LINE(557)
			this->load_font(this->font_list->__GetItem(current),this->recursive_load_fonts_dyn());
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Parcel_obj,recursive_load_fonts,(void))

Void Parcel_obj::recursive_load_sounds( ::luxe::resource::Resource item){
{
		HX_STACK_FRAME("luxe.Parcel","recursive_load_sounds",0x9793b5e3,"luxe.Parcel.recursive_load_sounds","luxe/Parcel.hx",567,0x19b0ca9c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(item,"item")
		HX_STACK_LINE(569)
		if (((item != null()))){
			HX_STACK_LINE(571)
			this->single_item_complete(item);
			HX_STACK_LINE(573)
			if (((bool((this->index_sounds == this->sound_list->__Field(HX_CSTRING("length"),true))) && bool(this->options->__Field(HX_CSTRING("sequential"),true))))){
				HX_STACK_LINE(574)
				this->start_texts_load();
			}
		}
		HX_STACK_LINE(582)
		if (((this->index_sounds < this->sound_list->__Field(HX_CSTRING("length"),true)))){
			HX_STACK_LINE(584)
			int current = this->index_sounds;		HX_STACK_VAR(current,"current");
			HX_STACK_LINE(586)
			(this->index_sounds)++;
			HX_STACK_LINE(588)
			this->load_sound(this->sound_list->__GetItem(current),this->recursive_load_sounds_dyn());
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Parcel_obj,recursive_load_sounds,(void))

Void Parcel_obj::recursive_load_datas( ::luxe::resource::Resource item){
{
		HX_STACK_FRAME("luxe.Parcel","recursive_load_datas",0xe0774aca,"luxe.Parcel.recursive_load_datas","luxe/Parcel.hx",598,0x19b0ca9c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(item,"item")
		HX_STACK_LINE(600)
		if (((item != null()))){
			HX_STACK_LINE(601)
			this->single_item_complete(item);
		}
		HX_STACK_LINE(607)
		if (((this->index_datas < this->data_list->__Field(HX_CSTRING("length"),true)))){
			HX_STACK_LINE(609)
			int current = this->index_datas;		HX_STACK_VAR(current,"current");
			HX_STACK_LINE(611)
			(this->index_datas)++;
			HX_STACK_LINE(613)
			this->load_data(this->data_list->__GetItem(current),this->recursive_load_datas_dyn());
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Parcel_obj,recursive_load_datas,(void))

Void Parcel_obj::recursive_load_texts( ::luxe::resource::Resource item){
{
		HX_STACK_FRAME("luxe.Parcel","recursive_load_texts",0x198886e7,"luxe.Parcel.recursive_load_texts","luxe/Parcel.hx",623,0x19b0ca9c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(item,"item")
		HX_STACK_LINE(625)
		if (((item != null()))){
			HX_STACK_LINE(627)
			this->single_item_complete(item);
			HX_STACK_LINE(629)
			if (((bool((this->index_texts == this->text_list->__Field(HX_CSTRING("length"),true))) && bool(this->options->__Field(HX_CSTRING("sequential"),true))))){
				HX_STACK_LINE(630)
				this->start_datas_load();
			}
		}
		HX_STACK_LINE(638)
		if (((this->index_texts < this->text_list->__Field(HX_CSTRING("length"),true)))){
			HX_STACK_LINE(640)
			int current = this->index_texts;		HX_STACK_VAR(current,"current");
			HX_STACK_LINE(642)
			(this->index_texts)++;
			HX_STACK_LINE(644)
			this->load_text(this->text_list->__GetItem(current),this->recursive_load_texts_dyn());
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Parcel_obj,recursive_load_texts,(void))

Void Parcel_obj::add_texture( ::String _id){
{
		HX_STACK_FRAME("luxe.Parcel","add_texture",0xce39c830,"luxe.Parcel.add_texture","luxe/Parcel.hx",657,0x19b0ca9c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_id,"_id")
		HX_STACK_LINE(657)
		this->texture_list->push(_id);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Parcel_obj,add_texture,(void))

Void Parcel_obj::add_textures( Array< ::String > list){
{
		HX_STACK_FRAME("luxe.Parcel","add_textures",0xa4556243,"luxe.Parcel.add_textures","luxe/Parcel.hx",661,0x19b0ca9c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(list,"list")
		HX_STACK_LINE(661)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(661)
		while((true)){
			HX_STACK_LINE(661)
			if ((!(((_g < list->length))))){
				HX_STACK_LINE(661)
				break;
			}
			HX_STACK_LINE(661)
			::String texture = list->__get(_g);		HX_STACK_VAR(texture,"texture");
			HX_STACK_LINE(661)
			++(_g);
			HX_STACK_LINE(662)
			this->texture_list->push(texture);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Parcel_obj,add_textures,(void))

Void Parcel_obj::add_shader( ::String __o_ps_id,::String __o_vs_id){
::String ps_id = __o_ps_id.Default(HX_CSTRING("default"));
::String vs_id = __o_vs_id.Default(HX_CSTRING("default"));
	HX_STACK_FRAME("luxe.Parcel","add_shader",0x65a9c170,"luxe.Parcel.add_shader","luxe/Parcel.hx",669,0x19b0ca9c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ps_id,"ps_id")
	HX_STACK_ARG(vs_id,"vs_id")
{
		struct _Function_1_1{
			inline static Dynamic Block( ::String &ps_id,::String &vs_id){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/Parcel.hx",669,0x19b0ca9c)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("ps_id") , ps_id,false);
					__result->Add(HX_CSTRING("vs_id") , vs_id,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(669)
		this->shader_list->__Field(HX_CSTRING("push"),true)(_Function_1_1::Block(ps_id,vs_id));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Parcel_obj,add_shader,(void))

Void Parcel_obj::add_shaders( Dynamic list){
{
		HX_STACK_FRAME("luxe.Parcel","add_shaders",0x8edf8103,"luxe.Parcel.add_shaders","luxe/Parcel.hx",673,0x19b0ca9c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(list,"list")
		HX_STACK_LINE(673)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(673)
		while((true)){
			HX_STACK_LINE(673)
			if ((!(((_g < list->__Field(HX_CSTRING("length"),true)))))){
				HX_STACK_LINE(673)
				break;
			}
			HX_STACK_LINE(673)
			Dynamic shader_info = list->__GetItem(_g);		HX_STACK_VAR(shader_info,"shader_info");
			HX_STACK_LINE(673)
			++(_g);
			HX_STACK_LINE(674)
			this->shader_list->__Field(HX_CSTRING("push"),true)(shader_info);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Parcel_obj,add_shaders,(void))

Void Parcel_obj::add_font( ::String _id,::String _path){
{
		HX_STACK_FRAME("luxe.Parcel","add_font",0x1fbba75a,"luxe.Parcel.add_font","luxe/Parcel.hx",681,0x19b0ca9c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_id,"_id")
		HX_STACK_ARG(_path,"_path")
		struct _Function_1_1{
			inline static Dynamic Block( ::String &_id,::String &_path){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/Parcel.hx",681,0x19b0ca9c)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("id") , _id,false);
					__result->Add(HX_CSTRING("path") , _path,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(681)
		this->font_list->__Field(HX_CSTRING("push"),true)(_Function_1_1::Block(_id,_path));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Parcel_obj,add_font,(void))

Void Parcel_obj::add_fonts( Dynamic list){
{
		HX_STACK_FRAME("luxe.Parcel","add_fonts",0xa476c7d9,"luxe.Parcel.add_fonts","luxe/Parcel.hx",685,0x19b0ca9c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(list,"list")
		HX_STACK_LINE(685)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(685)
		while((true)){
			HX_STACK_LINE(685)
			if ((!(((_g < list->__Field(HX_CSTRING("length"),true)))))){
				HX_STACK_LINE(685)
				break;
			}
			HX_STACK_LINE(685)
			Dynamic font_info = list->__GetItem(_g);		HX_STACK_VAR(font_info,"font_info");
			HX_STACK_LINE(685)
			++(_g);
			HX_STACK_LINE(686)
			this->font_list->__Field(HX_CSTRING("push"),true)(font_info);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Parcel_obj,add_fonts,(void))

Void Parcel_obj::add_sound( ::String _id,::String _name,hx::Null< bool >  __o__is_stream){
bool _is_stream = __o__is_stream.Default(false);
	HX_STACK_FRAME("luxe.Parcel","add_sound",0x20b19ce4,"luxe.Parcel.add_sound","luxe/Parcel.hx",693,0x19b0ca9c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_id,"_id")
	HX_STACK_ARG(_name,"_name")
	HX_STACK_ARG(_is_stream,"_is_stream")
{
		struct _Function_1_1{
			inline static Dynamic Block( ::String &_name,::String &_id,bool &_is_stream){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/Parcel.hx",693,0x19b0ca9c)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("id") , _id,false);
					__result->Add(HX_CSTRING("name") , _name,false);
					__result->Add(HX_CSTRING("is_stream") , _is_stream,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(693)
		this->sound_list->__Field(HX_CSTRING("push"),true)(_Function_1_1::Block(_name,_id,_is_stream));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Parcel_obj,add_sound,(void))

Void Parcel_obj::add_sounds( Dynamic list){
{
		HX_STACK_FRAME("luxe.Parcel","add_sounds",0x7ab7ab0f,"luxe.Parcel.add_sounds","luxe/Parcel.hx",697,0x19b0ca9c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(list,"list")
		HX_STACK_LINE(697)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(697)
		while((true)){
			HX_STACK_LINE(697)
			if ((!(((_g < list->__Field(HX_CSTRING("length"),true)))))){
				HX_STACK_LINE(697)
				break;
			}
			HX_STACK_LINE(697)
			Dynamic sound_info = list->__GetItem(_g);		HX_STACK_VAR(sound_info,"sound_info");
			HX_STACK_LINE(697)
			++(_g);
			HX_STACK_LINE(698)
			this->sound_list->__Field(HX_CSTRING("push"),true)(sound_info);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Parcel_obj,add_sounds,(void))

Void Parcel_obj::add_text( ::String _id,Dynamic __o__async){
Dynamic _async = __o__async.Default(false);
	HX_STACK_FRAME("luxe.Parcel","add_text",0x28f51638,"luxe.Parcel.add_text","luxe/Parcel.hx",705,0x19b0ca9c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_id,"_id")
	HX_STACK_ARG(_async,"_async")
{
		struct _Function_1_1{
			inline static Dynamic Block( Dynamic &_async,::String &_id){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/Parcel.hx",705,0x19b0ca9c)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("id") , _id,false);
					__result->Add(HX_CSTRING("async") , _async,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(705)
		this->text_list->__Field(HX_CSTRING("push"),true)(_Function_1_1::Block(_async,_id));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Parcel_obj,add_text,(void))

Void Parcel_obj::add_texts( Dynamic list){
{
		HX_STACK_FRAME("luxe.Parcel","add_texts",0xad7e5b3b,"luxe.Parcel.add_texts","luxe/Parcel.hx",709,0x19b0ca9c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(list,"list")
		HX_STACK_LINE(709)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(709)
		while((true)){
			HX_STACK_LINE(709)
			if ((!(((_g < list->__Field(HX_CSTRING("length"),true)))))){
				HX_STACK_LINE(709)
				break;
			}
			HX_STACK_LINE(709)
			Dynamic text_info = list->__GetItem(_g);		HX_STACK_VAR(text_info,"text_info");
			HX_STACK_LINE(709)
			++(_g);
			HX_STACK_LINE(710)
			this->text_list->__Field(HX_CSTRING("push"),true)(text_info);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Parcel_obj,add_texts,(void))

Void Parcel_obj::add_data( ::String _id,Dynamic __o__async){
Dynamic _async = __o__async.Default(false);
	HX_STACK_FRAME("luxe.Parcel","add_data",0x1e5e9fb5,"luxe.Parcel.add_data","luxe/Parcel.hx",717,0x19b0ca9c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_id,"_id")
	HX_STACK_ARG(_async,"_async")
{
		struct _Function_1_1{
			inline static Dynamic Block( Dynamic &_async,::String &_id){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/Parcel.hx",717,0x19b0ca9c)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("id") , _id,false);
					__result->Add(HX_CSTRING("async") , _async,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(717)
		this->data_list->__Field(HX_CSTRING("push"),true)(_Function_1_1::Block(_async,_id));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Parcel_obj,add_data,(void))

Void Parcel_obj::add_datas( Dynamic list){
{
		HX_STACK_FRAME("luxe.Parcel","add_datas",0x746d1f1e,"luxe.Parcel.add_datas","luxe/Parcel.hx",721,0x19b0ca9c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(list,"list")
		HX_STACK_LINE(721)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(721)
		while((true)){
			HX_STACK_LINE(721)
			if ((!(((_g < list->__Field(HX_CSTRING("length"),true)))))){
				HX_STACK_LINE(721)
				break;
			}
			HX_STACK_LINE(721)
			Dynamic data = list->__GetItem(_g);		HX_STACK_VAR(data,"data");
			HX_STACK_LINE(721)
			++(_g);
			HX_STACK_LINE(722)
			this->data_list->__Field(HX_CSTRING("push"),true)(data);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Parcel_obj,add_datas,(void))

Void Parcel_obj::load_texture( ::String _tex,Dynamic _complete){
{
		HX_STACK_FRAME("luxe.Parcel","load_texture",0x51bf846f,"luxe.Parcel.load_texture","luxe/Parcel.hx",729,0x19b0ca9c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_tex,"_tex")
		HX_STACK_ARG(_complete,"_complete")
		HX_STACK_LINE(729)
		Dynamic _complete1 = Dynamic( Array_obj<Dynamic>::__new().Add(_complete));		HX_STACK_VAR(_complete1,"_complete1");
		HX_STACK_LINE(729)
		Array< ::String > _tex1 = Array_obj< ::String >::__new().Add(_tex);		HX_STACK_VAR(_tex1,"_tex1");
		HX_STACK_LINE(729)
		Array< ::Dynamic > _g = Array_obj< ::Dynamic >::__new().Add(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(_g,"_g");

		HX_BEGIN_LOCAL_FUNC_S3(hx::LocalFunc,_Function_1_1,Array< ::Dynamic >,_g,Dynamic,_complete1,Array< ::String >,_tex1)
		Void run(){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","luxe/Parcel.hx",755,0x19b0ca9c)
			{
				HX_STACK_LINE(755)
				::Luxe_obj::loadTexture(_tex1->__get((int)0),_complete1->__GetItem((int)0),_g->__get((int)0).StaticCast< ::luxe::Parcel >()->options->__Field(HX_CSTRING("silent"),true));
			}
			return null();
		}
		HX_END_LOCAL_FUNC0((void))

		HX_STACK_LINE(754)
		::Luxe_obj::timer->schedule(this->options->__Field(HX_CSTRING("load_spacing"),true), Dynamic(new _Function_1_1(_g,_complete1,_tex1)),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Parcel_obj,load_texture,(void))

Void Parcel_obj::load_shader( Dynamic _shader,Dynamic _complete){
{
		HX_STACK_FRAME("luxe.Parcel","load_shader",0x2cda9211,"luxe.Parcel.load_shader","luxe/Parcel.hx",762,0x19b0ca9c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_shader,"_shader")
		HX_STACK_ARG(_complete,"_complete")
		HX_STACK_LINE(762)
		Dynamic _complete1 = Dynamic( Array_obj<Dynamic>::__new().Add(_complete));		HX_STACK_VAR(_complete1,"_complete1");
		HX_STACK_LINE(762)
		Dynamic _shader1 = Dynamic( Array_obj<Dynamic>::__new().Add(_shader));		HX_STACK_VAR(_shader1,"_shader1");
		HX_STACK_LINE(762)
		Array< ::Dynamic > _g = Array_obj< ::Dynamic >::__new().Add(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(_g,"_g");

		HX_BEGIN_LOCAL_FUNC_S3(hx::LocalFunc,_Function_1_1,Array< ::Dynamic >,_g,Dynamic,_complete1,Dynamic,_shader1)
		Void run(){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","luxe/Parcel.hx",780,0x19b0ca9c)
			{
				HX_STACK_LINE(780)
				::Luxe_obj::loadShader(_shader1->__GetItem((int)0)->__Field(HX_CSTRING("ps_id"),true),_shader1->__GetItem((int)0)->__Field(HX_CSTRING("vs_id"),true),_complete1->__GetItem((int)0),_g->__get((int)0).StaticCast< ::luxe::Parcel >()->options->__Field(HX_CSTRING("silent"),true));
			}
			return null();
		}
		HX_END_LOCAL_FUNC0((void))

		HX_STACK_LINE(779)
		::Luxe_obj::timer->schedule(this->options->__Field(HX_CSTRING("load_spacing"),true), Dynamic(new _Function_1_1(_g,_complete1,_shader1)),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Parcel_obj,load_shader,(void))

Void Parcel_obj::load_font( Dynamic _font,Dynamic _complete){
{
		HX_STACK_FRAME("luxe.Parcel","load_font",0x9f495dbb,"luxe.Parcel.load_font","luxe/Parcel.hx",787,0x19b0ca9c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_font,"_font")
		HX_STACK_ARG(_complete,"_complete")
		HX_STACK_LINE(787)
		Dynamic _complete1 = Dynamic( Array_obj<Dynamic>::__new().Add(_complete));		HX_STACK_VAR(_complete1,"_complete1");
		HX_STACK_LINE(787)
		Dynamic _font1 = Dynamic( Array_obj<Dynamic>::__new().Add(_font));		HX_STACK_VAR(_font1,"_font1");
		HX_STACK_LINE(787)
		Array< ::Dynamic > _g = Array_obj< ::Dynamic >::__new().Add(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(_g,"_g");

		HX_BEGIN_LOCAL_FUNC_S3(hx::LocalFunc,_Function_1_1,Array< ::Dynamic >,_g,Dynamic,_complete1,Dynamic,_font1)
		Void run(){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","luxe/Parcel.hx",791,0x19b0ca9c)
			{
				HX_STACK_LINE(791)
				::Luxe_obj::loadFont(_font1->__GetItem((int)0)->__Field(HX_CSTRING("id"),true),_font1->__GetItem((int)0)->__Field(HX_CSTRING("path"),true),_complete1->__GetItem((int)0),_g->__get((int)0).StaticCast< ::luxe::Parcel >()->options->__Field(HX_CSTRING("silent"),true));
			}
			return null();
		}
		HX_END_LOCAL_FUNC0((void))

		HX_STACK_LINE(790)
		::Luxe_obj::timer->schedule(this->options->__Field(HX_CSTRING("load_spacing"),true), Dynamic(new _Function_1_1(_g,_complete1,_font1)),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Parcel_obj,load_font,(void))

Void Parcel_obj::load_data( Dynamic _data_info,Dynamic _complete){
{
		HX_STACK_FRAME("luxe.Parcel","load_data",0x9dec5616,"luxe.Parcel.load_data","luxe/Parcel.hx",796,0x19b0ca9c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_data_info,"_data_info")
		HX_STACK_ARG(_complete,"_complete")
		HX_STACK_LINE(796)
		Dynamic _complete1 = Dynamic( Array_obj<Dynamic>::__new().Add(_complete));		HX_STACK_VAR(_complete1,"_complete1");
		HX_STACK_LINE(796)
		Dynamic _data_info1 = Dynamic( Array_obj<Dynamic>::__new().Add(_data_info));		HX_STACK_VAR(_data_info1,"_data_info1");

		HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_1_1,Dynamic,_complete1,Dynamic,_data_info1)
		Void run(){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","luxe/Parcel.hx",800,0x19b0ca9c)
			{
				HX_STACK_LINE(800)
				::Luxe_obj::loadData(_data_info1->__GetItem((int)0)->__Field(HX_CSTRING("id"),true),_complete1->__GetItem((int)0),_data_info1->__GetItem((int)0)->__Field(HX_CSTRING("async"),true));
			}
			return null();
		}
		HX_END_LOCAL_FUNC0((void))

		HX_STACK_LINE(799)
		::Luxe_obj::timer->schedule(this->options->__Field(HX_CSTRING("load_spacing"),true), Dynamic(new _Function_1_1(_complete1,_data_info1)),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Parcel_obj,load_data,(void))

Void Parcel_obj::load_text( Dynamic _text_info,Dynamic _complete){
{
		HX_STACK_FRAME("luxe.Parcel","load_text",0xa882cc99,"luxe.Parcel.load_text","luxe/Parcel.hx",805,0x19b0ca9c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_text_info,"_text_info")
		HX_STACK_ARG(_complete,"_complete")
		HX_STACK_LINE(805)
		Dynamic _complete1 = Dynamic( Array_obj<Dynamic>::__new().Add(_complete));		HX_STACK_VAR(_complete1,"_complete1");
		HX_STACK_LINE(805)
		Dynamic _text_info1 = Dynamic( Array_obj<Dynamic>::__new().Add(_text_info));		HX_STACK_VAR(_text_info1,"_text_info1");

		HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_1_1,Dynamic,_complete1,Dynamic,_text_info1)
		Void run(){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","luxe/Parcel.hx",809,0x19b0ca9c)
			{
				HX_STACK_LINE(809)
				::Luxe_obj::loadText(_text_info1->__GetItem((int)0)->__Field(HX_CSTRING("id"),true),_complete1->__GetItem((int)0),_text_info1->__GetItem((int)0)->__Field(HX_CSTRING("async"),true));
			}
			return null();
		}
		HX_END_LOCAL_FUNC0((void))

		HX_STACK_LINE(808)
		::Luxe_obj::timer->schedule(this->options->__Field(HX_CSTRING("load_spacing"),true), Dynamic(new _Function_1_1(_complete1,_text_info1)),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Parcel_obj,load_text,(void))

Void Parcel_obj::load_sound( Dynamic _sound,Dynamic _complete){
{
		HX_STACK_FRAME("luxe.Parcel","load_sound",0x3d237b63,"luxe.Parcel.load_sound","luxe/Parcel.hx",814,0x19b0ca9c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_sound,"_sound")
		HX_STACK_ARG(_complete,"_complete")
		HX_STACK_LINE(814)
		Dynamic _complete1 = Dynamic( Array_obj<Dynamic>::__new().Add(_complete));		HX_STACK_VAR(_complete1,"_complete1");
		HX_STACK_LINE(814)
		Dynamic _sound1 = Dynamic( Array_obj<Dynamic>::__new().Add(_sound));		HX_STACK_VAR(_sound1,"_sound1");

		HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_1_1,Dynamic,_complete1,Dynamic,_sound1)
		Void run(){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","luxe/Parcel.hx",818,0x19b0ca9c)
			{
				HX_STACK_LINE(818)
				::Luxe_obj::loadSound(_sound1->__GetItem((int)0)->__Field(HX_CSTRING("name"),true),_sound1->__GetItem((int)0)->__Field(HX_CSTRING("id"),true),_sound1->__GetItem((int)0)->__Field(HX_CSTRING("is_stream"),true),_complete1->__GetItem((int)0));
			}
			return null();
		}
		HX_END_LOCAL_FUNC0((void))

		HX_STACK_LINE(817)
		::Luxe_obj::timer->schedule(this->options->__Field(HX_CSTRING("load_spacing"),true), Dynamic(new _Function_1_1(_complete1,_sound1)),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Parcel_obj,load_sound,(void))

Void Parcel_obj::do_complete( ){
{
		HX_STACK_FRAME("luxe.Parcel","do_complete",0x1c8001e0,"luxe.Parcel.do_complete","luxe/Parcel.hx",825,0x19b0ca9c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(828)
		Float _g = ::Luxe_obj::get_time();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(828)
		Float _g1 = (_g - this->time_start_load);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(828)
		this->time_to_load = _g1;
		HX_STACK_LINE(831)
		if (((this->options->__Field(HX_CSTRING("oncomplete"),true) != null()))){
			HX_STACK_LINE(832)
			this->options->__Field(HX_CSTRING("oncomplete"),true)(hx::ObjectPtr<OBJ_>(this));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Parcel_obj,do_complete,(void))

Void Parcel_obj::single_item_complete( ::luxe::resource::Resource item){
{
		HX_STACK_FRAME("luxe.Parcel","single_item_complete",0x3b11945b,"luxe.Parcel.single_item_complete","luxe/Parcel.hx",839,0x19b0ca9c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(item,"item")
		HX_STACK_LINE(839)
		Array< ::Dynamic > _g = Array_obj< ::Dynamic >::__new().Add(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(841)
		Float _g1 = ::Luxe_obj::get_time();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(841)
		Float _g11 = (_g1 - item->time_created);		HX_STACK_VAR(_g11,"_g11");
		HX_STACK_LINE(841)
		item->time_to_load = _g11;
		HX_STACK_LINE(843)
		(this->current_count)++;
		HX_STACK_LINE(849)
		if (((this->options->__Field(HX_CSTRING("onprogress"),true) != null()))){
			HX_STACK_LINE(850)
			this->options->__Field(HX_CSTRING("onprogress"),true)(item);
		}
		HX_STACK_LINE(855)
		if (((this->current_count >= this->total_items))){

			HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_1,Array< ::Dynamic >,_g)
			Void run(){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","luxe/Parcel.hx",857,0x19b0ca9c)
				{
					HX_STACK_LINE(857)
					_g->__get((int)0).StaticCast< ::luxe::Parcel >()->do_complete();
				}
				return null();
			}
			HX_END_LOCAL_FUNC0((void))

			HX_STACK_LINE(856)
			::Luxe_obj::timer->schedule(0.1, Dynamic(new _Function_2_1(_g)),null());
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Parcel_obj,single_item_complete,(void))


Parcel_obj::Parcel_obj()
{
}

void Parcel_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Parcel);
	HX_MARK_MEMBER_NAME(time_to_load,"time_to_load");
	HX_MARK_MEMBER_NAME(time_start_load,"time_start_load");
	HX_MARK_MEMBER_NAME(texture_list,"texture_list");
	HX_MARK_MEMBER_NAME(shader_list,"shader_list");
	HX_MARK_MEMBER_NAME(font_list,"font_list");
	HX_MARK_MEMBER_NAME(sound_list,"sound_list");
	HX_MARK_MEMBER_NAME(text_list,"text_list");
	HX_MARK_MEMBER_NAME(data_list,"data_list");
	HX_MARK_MEMBER_NAME(total_items,"total_items");
	HX_MARK_MEMBER_NAME(current_count,"current_count");
	HX_MARK_MEMBER_NAME(options,"options");
	HX_MARK_MEMBER_NAME(index_textures,"index_textures");
	HX_MARK_MEMBER_NAME(index_fonts,"index_fonts");
	HX_MARK_MEMBER_NAME(index_shaders,"index_shaders");
	HX_MARK_MEMBER_NAME(index_sounds,"index_sounds");
	HX_MARK_MEMBER_NAME(index_datas,"index_datas");
	HX_MARK_MEMBER_NAME(index_texts,"index_texts");
	::luxe::resource::ResourceManager_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Parcel_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(time_to_load,"time_to_load");
	HX_VISIT_MEMBER_NAME(time_start_load,"time_start_load");
	HX_VISIT_MEMBER_NAME(texture_list,"texture_list");
	HX_VISIT_MEMBER_NAME(shader_list,"shader_list");
	HX_VISIT_MEMBER_NAME(font_list,"font_list");
	HX_VISIT_MEMBER_NAME(sound_list,"sound_list");
	HX_VISIT_MEMBER_NAME(text_list,"text_list");
	HX_VISIT_MEMBER_NAME(data_list,"data_list");
	HX_VISIT_MEMBER_NAME(total_items,"total_items");
	HX_VISIT_MEMBER_NAME(current_count,"current_count");
	HX_VISIT_MEMBER_NAME(options,"options");
	HX_VISIT_MEMBER_NAME(index_textures,"index_textures");
	HX_VISIT_MEMBER_NAME(index_fonts,"index_fonts");
	HX_VISIT_MEMBER_NAME(index_shaders,"index_shaders");
	HX_VISIT_MEMBER_NAME(index_sounds,"index_sounds");
	HX_VISIT_MEMBER_NAME(index_datas,"index_datas");
	HX_VISIT_MEMBER_NAME(index_texts,"index_texts");
	::luxe::resource::ResourceManager_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Parcel_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"load") ) { return load_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"options") ) { return options; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"add_font") ) { return add_font_dyn(); }
		if (HX_FIELD_EQ(inName,"add_text") ) { return add_text_dyn(); }
		if (HX_FIELD_EQ(inName,"add_data") ) { return add_data_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"font_list") ) { return font_list; }
		if (HX_FIELD_EQ(inName,"text_list") ) { return text_list; }
		if (HX_FIELD_EQ(inName,"data_list") ) { return data_list; }
		if (HX_FIELD_EQ(inName,"from_json") ) { return from_json_dyn(); }
		if (HX_FIELD_EQ(inName,"add_fonts") ) { return add_fonts_dyn(); }
		if (HX_FIELD_EQ(inName,"add_sound") ) { return add_sound_dyn(); }
		if (HX_FIELD_EQ(inName,"add_texts") ) { return add_texts_dyn(); }
		if (HX_FIELD_EQ(inName,"add_datas") ) { return add_datas_dyn(); }
		if (HX_FIELD_EQ(inName,"load_font") ) { return load_font_dyn(); }
		if (HX_FIELD_EQ(inName,"load_data") ) { return load_data_dyn(); }
		if (HX_FIELD_EQ(inName,"load_text") ) { return load_text_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"sound_list") ) { return sound_list; }
		if (HX_FIELD_EQ(inName,"load_fonts") ) { return load_fonts_dyn(); }
		if (HX_FIELD_EQ(inName,"load_datas") ) { return load_datas_dyn(); }
		if (HX_FIELD_EQ(inName,"load_texts") ) { return load_texts_dyn(); }
		if (HX_FIELD_EQ(inName,"add_shader") ) { return add_shader_dyn(); }
		if (HX_FIELD_EQ(inName,"add_sounds") ) { return add_sounds_dyn(); }
		if (HX_FIELD_EQ(inName,"load_sound") ) { return load_sound_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"shader_list") ) { return shader_list; }
		if (HX_FIELD_EQ(inName,"total_items") ) { return total_items; }
		if (HX_FIELD_EQ(inName,"index_fonts") ) { return index_fonts; }
		if (HX_FIELD_EQ(inName,"index_datas") ) { return index_datas; }
		if (HX_FIELD_EQ(inName,"index_texts") ) { return index_texts; }
		if (HX_FIELD_EQ(inName,"load_sounds") ) { return load_sounds_dyn(); }
		if (HX_FIELD_EQ(inName,"add_texture") ) { return add_texture_dyn(); }
		if (HX_FIELD_EQ(inName,"add_shaders") ) { return add_shaders_dyn(); }
		if (HX_FIELD_EQ(inName,"load_shader") ) { return load_shader_dyn(); }
		if (HX_FIELD_EQ(inName,"do_complete") ) { return do_complete_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"time_to_load") ) { return time_to_load; }
		if (HX_FIELD_EQ(inName,"texture_list") ) { return texture_list; }
		if (HX_FIELD_EQ(inName,"index_sounds") ) { return index_sounds; }
		if (HX_FIELD_EQ(inName,"load_shaders") ) { return load_shaders_dyn(); }
		if (HX_FIELD_EQ(inName,"add_textures") ) { return add_textures_dyn(); }
		if (HX_FIELD_EQ(inName,"load_texture") ) { return load_texture_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"current_count") ) { return current_count; }
		if (HX_FIELD_EQ(inName,"index_shaders") ) { return index_shaders; }
		if (HX_FIELD_EQ(inName,"load_textures") ) { return load_textures_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"index_textures") ) { return index_textures; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"time_start_load") ) { return time_start_load; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"start_fonts_load") ) { return start_fonts_load_dyn(); }
		if (HX_FIELD_EQ(inName,"start_datas_load") ) { return start_datas_load_dyn(); }
		if (HX_FIELD_EQ(inName,"start_texts_load") ) { return start_texts_load_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"start_sounds_load") ) { return start_sounds_load_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"start_shaders_load") ) { return start_shaders_load_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"refresh_total_items") ) { return refresh_total_items_dyn(); }
		if (HX_FIELD_EQ(inName,"start_textures_load") ) { return start_textures_load_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"recursive_load_fonts") ) { return recursive_load_fonts_dyn(); }
		if (HX_FIELD_EQ(inName,"recursive_load_datas") ) { return recursive_load_datas_dyn(); }
		if (HX_FIELD_EQ(inName,"recursive_load_texts") ) { return recursive_load_texts_dyn(); }
		if (HX_FIELD_EQ(inName,"single_item_complete") ) { return single_item_complete_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"recursive_load_sounds") ) { return recursive_load_sounds_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"recursive_load_shaders") ) { return recursive_load_shaders_dyn(); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"recursive_load_textures") ) { return recursive_load_textures_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Parcel_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"options") ) { options=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"font_list") ) { font_list=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"text_list") ) { text_list=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"data_list") ) { data_list=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"sound_list") ) { sound_list=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"shader_list") ) { shader_list=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"total_items") ) { total_items=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"index_fonts") ) { index_fonts=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"index_datas") ) { index_datas=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"index_texts") ) { index_texts=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"time_to_load") ) { time_to_load=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"texture_list") ) { texture_list=inValue.Cast< Array< ::String > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"index_sounds") ) { index_sounds=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"current_count") ) { current_count=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"index_shaders") ) { index_shaders=inValue.Cast< int >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"index_textures") ) { index_textures=inValue.Cast< int >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"time_start_load") ) { time_start_load=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Parcel_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("time_to_load"));
	outFields->push(HX_CSTRING("time_start_load"));
	outFields->push(HX_CSTRING("texture_list"));
	outFields->push(HX_CSTRING("shader_list"));
	outFields->push(HX_CSTRING("font_list"));
	outFields->push(HX_CSTRING("sound_list"));
	outFields->push(HX_CSTRING("text_list"));
	outFields->push(HX_CSTRING("data_list"));
	outFields->push(HX_CSTRING("total_items"));
	outFields->push(HX_CSTRING("current_count"));
	outFields->push(HX_CSTRING("options"));
	outFields->push(HX_CSTRING("index_textures"));
	outFields->push(HX_CSTRING("index_fonts"));
	outFields->push(HX_CSTRING("index_shaders"));
	outFields->push(HX_CSTRING("index_sounds"));
	outFields->push(HX_CSTRING("index_datas"));
	outFields->push(HX_CSTRING("index_texts"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(Parcel_obj,time_to_load),HX_CSTRING("time_to_load")},
	{hx::fsFloat,(int)offsetof(Parcel_obj,time_start_load),HX_CSTRING("time_start_load")},
	{hx::fsObject /*Array< ::String >*/ ,(int)offsetof(Parcel_obj,texture_list),HX_CSTRING("texture_list")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Parcel_obj,shader_list),HX_CSTRING("shader_list")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Parcel_obj,font_list),HX_CSTRING("font_list")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Parcel_obj,sound_list),HX_CSTRING("sound_list")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Parcel_obj,text_list),HX_CSTRING("text_list")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Parcel_obj,data_list),HX_CSTRING("data_list")},
	{hx::fsInt,(int)offsetof(Parcel_obj,total_items),HX_CSTRING("total_items")},
	{hx::fsInt,(int)offsetof(Parcel_obj,current_count),HX_CSTRING("current_count")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Parcel_obj,options),HX_CSTRING("options")},
	{hx::fsInt,(int)offsetof(Parcel_obj,index_textures),HX_CSTRING("index_textures")},
	{hx::fsInt,(int)offsetof(Parcel_obj,index_fonts),HX_CSTRING("index_fonts")},
	{hx::fsInt,(int)offsetof(Parcel_obj,index_shaders),HX_CSTRING("index_shaders")},
	{hx::fsInt,(int)offsetof(Parcel_obj,index_sounds),HX_CSTRING("index_sounds")},
	{hx::fsInt,(int)offsetof(Parcel_obj,index_datas),HX_CSTRING("index_datas")},
	{hx::fsInt,(int)offsetof(Parcel_obj,index_texts),HX_CSTRING("index_texts")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("time_to_load"),
	HX_CSTRING("time_start_load"),
	HX_CSTRING("texture_list"),
	HX_CSTRING("shader_list"),
	HX_CSTRING("font_list"),
	HX_CSTRING("sound_list"),
	HX_CSTRING("text_list"),
	HX_CSTRING("data_list"),
	HX_CSTRING("total_items"),
	HX_CSTRING("current_count"),
	HX_CSTRING("options"),
	HX_CSTRING("index_textures"),
	HX_CSTRING("index_fonts"),
	HX_CSTRING("index_shaders"),
	HX_CSTRING("index_sounds"),
	HX_CSTRING("index_datas"),
	HX_CSTRING("index_texts"),
	HX_CSTRING("refresh_total_items"),
	HX_CSTRING("load"),
	HX_CSTRING("from_json"),
	HX_CSTRING("start_textures_load"),
	HX_CSTRING("start_fonts_load"),
	HX_CSTRING("start_shaders_load"),
	HX_CSTRING("start_sounds_load"),
	HX_CSTRING("start_datas_load"),
	HX_CSTRING("start_texts_load"),
	HX_CSTRING("load_textures"),
	HX_CSTRING("load_fonts"),
	HX_CSTRING("load_shaders"),
	HX_CSTRING("load_sounds"),
	HX_CSTRING("load_datas"),
	HX_CSTRING("load_texts"),
	HX_CSTRING("recursive_load_textures"),
	HX_CSTRING("recursive_load_shaders"),
	HX_CSTRING("recursive_load_fonts"),
	HX_CSTRING("recursive_load_sounds"),
	HX_CSTRING("recursive_load_datas"),
	HX_CSTRING("recursive_load_texts"),
	HX_CSTRING("add_texture"),
	HX_CSTRING("add_textures"),
	HX_CSTRING("add_shader"),
	HX_CSTRING("add_shaders"),
	HX_CSTRING("add_font"),
	HX_CSTRING("add_fonts"),
	HX_CSTRING("add_sound"),
	HX_CSTRING("add_sounds"),
	HX_CSTRING("add_text"),
	HX_CSTRING("add_texts"),
	HX_CSTRING("add_data"),
	HX_CSTRING("add_datas"),
	HX_CSTRING("load_texture"),
	HX_CSTRING("load_shader"),
	HX_CSTRING("load_font"),
	HX_CSTRING("load_data"),
	HX_CSTRING("load_text"),
	HX_CSTRING("load_sound"),
	HX_CSTRING("do_complete"),
	HX_CSTRING("single_item_complete"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Parcel_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Parcel_obj::__mClass,"__mClass");
};

#endif

Class Parcel_obj::__mClass;

void Parcel_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("luxe.Parcel"), hx::TCanCast< Parcel_obj> ,sStaticFields,sMemberFields,
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

void Parcel_obj::__boot()
{
}

} // end namespace luxe
