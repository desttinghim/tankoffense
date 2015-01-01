#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_luxe_resource_DataResource
#include <luxe/resource/DataResource.h>
#endif
#ifndef INCLUDED_luxe_resource_JSONResource
#include <luxe/resource/JSONResource.h>
#endif
#ifndef INCLUDED_luxe_resource_Resource
#include <luxe/resource/Resource.h>
#endif
#ifndef INCLUDED_luxe_resource_ResourceManager
#include <luxe/resource/ResourceManager.h>
#endif
#ifndef INCLUDED_luxe_resource_ResourceStats
#include <luxe/resource/ResourceStats.h>
#endif
#ifndef INCLUDED_luxe_resource_ResourceType
#include <luxe/resource/ResourceType.h>
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
#ifndef INCLUDED_phoenix_RenderTexture
#include <phoenix/RenderTexture.h>
#endif
#ifndef INCLUDED_phoenix_Shader
#include <phoenix/Shader.h>
#endif
#ifndef INCLUDED_phoenix_Texture
#include <phoenix/Texture.h>
#endif
namespace luxe{
namespace resource{

Void ResourceManager_obj::__construct()
{
HX_STACK_FRAME("luxe.resource.ResourceManager","new",0x3e5aeba9,"luxe.resource.ResourceManager.new","luxe/resource/ResourceManager.hx",83,0x658bebc7)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(85)
	Array< ::Dynamic > _g = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(85)
	this->resourcelist = _g;
	HX_STACK_LINE(86)
	::haxe::ds::StringMap _g1 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(86)
	this->textures = _g1;
	HX_STACK_LINE(87)
	::haxe::ds::StringMap _g2 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(87)
	this->render_textures = _g2;
	HX_STACK_LINE(88)
	::haxe::ds::StringMap _g3 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(88)
	this->fonts = _g3;
	HX_STACK_LINE(89)
	::haxe::ds::StringMap _g4 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(89)
	this->shaders = _g4;
	HX_STACK_LINE(90)
	::haxe::ds::StringMap _g5 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(_g5,"_g5");
	HX_STACK_LINE(90)
	this->sounds = _g5;
	HX_STACK_LINE(91)
	::haxe::ds::StringMap _g6 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(_g6,"_g6");
	HX_STACK_LINE(91)
	this->data = _g6;
	HX_STACK_LINE(92)
	::haxe::ds::StringMap _g7 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(_g7,"_g7");
	HX_STACK_LINE(92)
	this->text = _g7;
	HX_STACK_LINE(93)
	::haxe::ds::StringMap _g8 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(_g8,"_g8");
	HX_STACK_LINE(93)
	this->json = _g8;
	HX_STACK_LINE(94)
	::luxe::resource::ResourceStats _g9 = ::luxe::resource::ResourceStats_obj::__new();		HX_STACK_VAR(_g9,"_g9");
	HX_STACK_LINE(94)
	this->stats = _g9;
}
;
	return null();
}

//ResourceManager_obj::~ResourceManager_obj() { }

Dynamic ResourceManager_obj::__CreateEmpty() { return  new ResourceManager_obj; }
hx::ObjectPtr< ResourceManager_obj > ResourceManager_obj::__new()
{  hx::ObjectPtr< ResourceManager_obj > result = new ResourceManager_obj();
	result->__construct();
	return result;}

Dynamic ResourceManager_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ResourceManager_obj > result = new ResourceManager_obj();
	result->__construct();
	return result;}

Void ResourceManager_obj::add( ::luxe::resource::Resource res){
{
		HX_STACK_FRAME("luxe.resource.ResourceManager","add",0x3e510d6a,"luxe.resource.ResourceManager.add","luxe/resource/ResourceManager.hx",98,0x658bebc7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(res,"res")
		HX_STACK_LINE(100)
		this->resourcelist->push(res);
		HX_STACK_LINE(102)
		{
			HX_STACK_LINE(102)
			::luxe::resource::ResourceType _g = res->type;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(102)
			switch( (int)(_g->__Index())){
				case (int)4: {
					HX_STACK_LINE(105)
					(this->stats->textures)++;
				}
				;break;
				case (int)6: {
					HX_STACK_LINE(107)
					(this->stats->render_textures)++;
				}
				;break;
				case (int)7: {
					HX_STACK_LINE(109)
					(this->stats->fonts)++;
				}
				;break;
				case (int)8: {
					HX_STACK_LINE(111)
					(this->stats->shaders)++;
				}
				;break;
				case (int)5: {
					HX_STACK_LINE(113)
					(this->stats->sounds)++;
				}
				;break;
				case (int)1: {
					HX_STACK_LINE(115)
					(this->stats->texts)++;
				}
				;break;
				case (int)2: {
					HX_STACK_LINE(117)
					(this->stats->jsons)++;
				}
				;break;
				case (int)3: {
					HX_STACK_LINE(119)
					(this->stats->datas)++;
				}
				;break;
				case (int)0: {
					HX_STACK_LINE(121)
					(this->stats->unknown)++;
				}
				;break;
			}
		}
		HX_STACK_LINE(125)
		(this->stats->resources)++;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ResourceManager_obj,add,(void))

Void ResourceManager_obj::remove( ::luxe::resource::Resource res){
{
		HX_STACK_FRAME("luxe.resource.ResourceManager","remove",0x0de4f49b,"luxe.resource.ResourceManager.remove","luxe/resource/ResourceManager.hx",129,0x658bebc7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(res,"res")
		HX_STACK_LINE(131)
		this->resourcelist->remove(res);
		HX_STACK_LINE(132)
		this->uncache(res);
		HX_STACK_LINE(134)
		{
			HX_STACK_LINE(134)
			::luxe::resource::ResourceType _g = res->type;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(134)
			switch( (int)(_g->__Index())){
				case (int)4: {
					HX_STACK_LINE(137)
					(this->stats->textures)--;
				}
				;break;
				case (int)6: {
					HX_STACK_LINE(139)
					(this->stats->render_textures)--;
				}
				;break;
				case (int)7: {
					HX_STACK_LINE(141)
					(this->stats->fonts)--;
				}
				;break;
				case (int)8: {
					HX_STACK_LINE(143)
					(this->stats->shaders)--;
				}
				;break;
				case (int)5: {
					HX_STACK_LINE(145)
					(this->stats->sounds)--;
				}
				;break;
				case (int)1: {
					HX_STACK_LINE(147)
					(this->stats->texts)--;
				}
				;break;
				case (int)2: {
					HX_STACK_LINE(149)
					(this->stats->jsons)--;
				}
				;break;
				case (int)3: {
					HX_STACK_LINE(151)
					(this->stats->datas)--;
				}
				;break;
				case (int)0: {
					HX_STACK_LINE(153)
					(this->stats->unknown)--;
				}
				;break;
			}
		}
		HX_STACK_LINE(156)
		(this->stats->resources)--;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ResourceManager_obj,remove,(void))

Void ResourceManager_obj::uncache( ::luxe::resource::Resource res){
{
		HX_STACK_FRAME("luxe.resource.ResourceManager","uncache",0x65168512,"luxe.resource.ResourceManager.uncache","luxe/resource/ResourceManager.hx",162,0x658bebc7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(res,"res")
		HX_STACK_LINE(162)
		::luxe::resource::ResourceType _g = res->type;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(162)
		switch( (int)(_g->__Index())){
			case (int)4: {
				HX_STACK_LINE(165)
				this->textures->remove(res->id);
			}
			;break;
			case (int)6: {
				HX_STACK_LINE(167)
				this->render_textures->remove(res->id);
			}
			;break;
			case (int)7: {
				HX_STACK_LINE(169)
				this->fonts->remove(res->id);
			}
			;break;
			case (int)8: {
				HX_STACK_LINE(171)
				this->shaders->remove(res->id);
			}
			;break;
			case (int)5: {
				HX_STACK_LINE(173)
				this->sounds->remove(res->id);
			}
			;break;
			case (int)3: {
				HX_STACK_LINE(175)
				this->data->remove(res->id);
			}
			;break;
			case (int)1: {
				HX_STACK_LINE(177)
				this->text->remove(res->id);
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(179)
				this->json->remove(res->id);
			}
			;break;
			case (int)0: {
			}
			;break;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ResourceManager_obj,uncache,(void))

Void ResourceManager_obj::cache( ::luxe::resource::Resource res){
{
		HX_STACK_FRAME("luxe.resource.ResourceManager","cache",0x638fd9cb,"luxe.resource.ResourceManager.cache","luxe/resource/ResourceManager.hx",188,0x658bebc7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(res,"res")
		HX_STACK_LINE(188)
		::luxe::resource::ResourceType _g = res->type;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(188)
		switch( (int)(_g->__Index())){
			case (int)4: {
				HX_STACK_LINE(191)
				this->textures->set(res->id,res);
			}
			;break;
			case (int)6: {
				HX_STACK_LINE(193)
				this->render_textures->set(res->id,res);
			}
			;break;
			case (int)7: {
				HX_STACK_LINE(195)
				this->fonts->set(res->id,res);
			}
			;break;
			case (int)8: {
				HX_STACK_LINE(197)
				this->shaders->set(res->id,res);
			}
			;break;
			case (int)5: {
				HX_STACK_LINE(199)
				this->sounds->set(res->id,res);
			}
			;break;
			case (int)1: {
				HX_STACK_LINE(201)
				this->text->set(res->id,res);
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(203)
				this->json->set(res->id,res);
			}
			;break;
			case (int)3: {
				HX_STACK_LINE(205)
				this->data->set(res->id,res);
			}
			;break;
			case (int)0: {
			}
			;break;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ResourceManager_obj,cache,(void))

::phoenix::RenderTexture ResourceManager_obj::find_render_texture( ::String _name){
	HX_STACK_FRAME("luxe.resource.ResourceManager","find_render_texture",0x689a7181,"luxe.resource.ResourceManager.find_render_texture","luxe/resource/ResourceManager.hx",213,0x658bebc7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_name,"_name")
	HX_STACK_LINE(213)
	return this->render_textures->get(_name);
}


HX_DEFINE_DYNAMIC_FUNC1(ResourceManager_obj,find_render_texture,return )

::phoenix::Texture ResourceManager_obj::find_texture( ::String _name){
	HX_STACK_FRAME("luxe.resource.ResourceManager","find_texture",0xe55f072c,"luxe.resource.ResourceManager.find_texture","luxe/resource/ResourceManager.hx",217,0x658bebc7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_name,"_name")
	HX_STACK_LINE(217)
	return this->textures->get(_name);
}


HX_DEFINE_DYNAMIC_FUNC1(ResourceManager_obj,find_texture,return )

::phoenix::Shader ResourceManager_obj::find_shader( ::String _name){
	HX_STACK_FRAME("luxe.resource.ResourceManager","find_shader",0x782275f4,"luxe.resource.ResourceManager.find_shader","luxe/resource/ResourceManager.hx",221,0x658bebc7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_name,"_name")
	HX_STACK_LINE(221)
	return this->shaders->get(_name);
}


HX_DEFINE_DYNAMIC_FUNC1(ResourceManager_obj,find_shader,return )

::phoenix::BitmapFont ResourceManager_obj::find_font( ::String _name){
	HX_STACK_FRAME("luxe.resource.ResourceManager","find_font",0xef0772de,"luxe.resource.ResourceManager.find_font","luxe/resource/ResourceManager.hx",225,0x658bebc7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_name,"_name")
	HX_STACK_LINE(225)
	return this->fonts->get(_name);
}


HX_DEFINE_DYNAMIC_FUNC1(ResourceManager_obj,find_font,return )

::luxe::resource::SoundResource ResourceManager_obj::find_sound( ::String _name){
	HX_STACK_FRAME("luxe.resource.ResourceManager","find_sound",0xb3b7e4e0,"luxe.resource.ResourceManager.find_sound","luxe/resource/ResourceManager.hx",229,0x658bebc7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_name,"_name")
	HX_STACK_LINE(229)
	return this->sounds->get(_name);
}


HX_DEFINE_DYNAMIC_FUNC1(ResourceManager_obj,find_sound,return )

::luxe::resource::TextResource ResourceManager_obj::find_text( ::String _name){
	HX_STACK_FRAME("luxe.resource.ResourceManager","find_text",0xf840e1bc,"luxe.resource.ResourceManager.find_text","luxe/resource/ResourceManager.hx",233,0x658bebc7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_name,"_name")
	HX_STACK_LINE(233)
	return this->text->get(_name);
}


HX_DEFINE_DYNAMIC_FUNC1(ResourceManager_obj,find_text,return )

::luxe::resource::JSONResource ResourceManager_obj::find_json( ::String _name){
	HX_STACK_FRAME("luxe.resource.ResourceManager","find_json",0xf1af5737,"luxe.resource.ResourceManager.find_json","luxe/resource/ResourceManager.hx",237,0x658bebc7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_name,"_name")
	HX_STACK_LINE(237)
	return this->json->get(_name);
}


HX_DEFINE_DYNAMIC_FUNC1(ResourceManager_obj,find_json,return )

::luxe::resource::DataResource ResourceManager_obj::find_data( ::String _name){
	HX_STACK_FRAME("luxe.resource.ResourceManager","find_data",0xedaa6b39,"luxe.resource.ResourceManager.find_data","luxe/resource/ResourceManager.hx",241,0x658bebc7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_name,"_name")
	HX_STACK_LINE(241)
	return this->data->get(_name);
}


HX_DEFINE_DYNAMIC_FUNC1(ResourceManager_obj,find_data,return )

Void ResourceManager_obj::clear( Dynamic __o_and_persistent){
Dynamic and_persistent = __o_and_persistent.Default(false);
	HX_STACK_FRAME("luxe.resource.ResourceManager","clear",0x6ad6b116,"luxe.resource.ResourceManager.clear","luxe/resource/ResourceManager.hx",244,0x658bebc7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(and_persistent,"and_persistent")
{
		HX_STACK_LINE(246)
		Array< ::Dynamic > keep = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(keep,"keep");
		HX_STACK_LINE(247)
		{
			HX_STACK_LINE(247)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(247)
			Array< ::Dynamic > _g1 = this->resourcelist;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(247)
			while((true)){
				HX_STACK_LINE(247)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(247)
					break;
				}
				HX_STACK_LINE(247)
				::luxe::resource::Resource res = _g1->__get(_g).StaticCast< ::luxe::resource::Resource >();		HX_STACK_VAR(res,"res");
				HX_STACK_LINE(247)
				++(_g);
				HX_STACK_LINE(248)
				if (((bool(!(res->persistent)) || bool(and_persistent)))){
					HX_STACK_LINE(249)
					res->drop();
				}
				else{
					HX_STACK_LINE(251)
					keep->push(res);
				}
			}
		}
		HX_STACK_LINE(257)
		this->resourcelist->splice((int)0,this->resourcelist->length);
		HX_STACK_LINE(258)
		Array< ::Dynamic > _g = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(258)
		this->resourcelist = _g;
		HX_STACK_LINE(259)
		this->stats->reset();
		HX_STACK_LINE(262)
		{
			HX_STACK_LINE(262)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(262)
			while((true)){
				HX_STACK_LINE(262)
				if ((!(((_g1 < keep->length))))){
					HX_STACK_LINE(262)
					break;
				}
				HX_STACK_LINE(262)
				::luxe::resource::Resource res = keep->__get(_g1).StaticCast< ::luxe::resource::Resource >();		HX_STACK_VAR(res,"res");
				HX_STACK_LINE(262)
				++(_g1);
				HX_STACK_LINE(263)
				this->add(res);
			}
		}
		HX_STACK_LINE(266)
		keep = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ResourceManager_obj,clear,(void))

::luxe::resource::Resource ResourceManager_obj::find( ::String id){
	HX_STACK_FRAME("luxe.resource.ResourceManager","find",0x4bec94d0,"luxe.resource.ResourceManager.find","luxe/resource/ResourceManager.hx",270,0x658bebc7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(272)
	{
		HX_STACK_LINE(272)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(272)
		Array< ::Dynamic > _g1 = this->resourcelist;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(272)
		while((true)){
			HX_STACK_LINE(272)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(272)
				break;
			}
			HX_STACK_LINE(272)
			::luxe::resource::Resource resource = _g1->__get(_g).StaticCast< ::luxe::resource::Resource >();		HX_STACK_VAR(resource,"resource");
			HX_STACK_LINE(272)
			++(_g);
			HX_STACK_LINE(273)
			if (((resource->id == id))){
				HX_STACK_LINE(274)
				return resource;
			}
		}
	}
	HX_STACK_LINE(278)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ResourceManager_obj,find,return )


ResourceManager_obj::ResourceManager_obj()
{
}

void ResourceManager_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ResourceManager);
	HX_MARK_MEMBER_NAME(resourcelist,"resourcelist");
	HX_MARK_MEMBER_NAME(render_textures,"render_textures");
	HX_MARK_MEMBER_NAME(textures,"textures");
	HX_MARK_MEMBER_NAME(shaders,"shaders");
	HX_MARK_MEMBER_NAME(fonts,"fonts");
	HX_MARK_MEMBER_NAME(data,"data");
	HX_MARK_MEMBER_NAME(text,"text");
	HX_MARK_MEMBER_NAME(json,"json");
	HX_MARK_MEMBER_NAME(sounds,"sounds");
	HX_MARK_MEMBER_NAME(stats,"stats");
	HX_MARK_END_CLASS();
}

void ResourceManager_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(resourcelist,"resourcelist");
	HX_VISIT_MEMBER_NAME(render_textures,"render_textures");
	HX_VISIT_MEMBER_NAME(textures,"textures");
	HX_VISIT_MEMBER_NAME(shaders,"shaders");
	HX_VISIT_MEMBER_NAME(fonts,"fonts");
	HX_VISIT_MEMBER_NAME(data,"data");
	HX_VISIT_MEMBER_NAME(text,"text");
	HX_VISIT_MEMBER_NAME(json,"json");
	HX_VISIT_MEMBER_NAME(sounds,"sounds");
	HX_VISIT_MEMBER_NAME(stats,"stats");
}

Dynamic ResourceManager_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return add_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { return data; }
		if (HX_FIELD_EQ(inName,"text") ) { return text; }
		if (HX_FIELD_EQ(inName,"json") ) { return json; }
		if (HX_FIELD_EQ(inName,"find") ) { return find_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"fonts") ) { return fonts; }
		if (HX_FIELD_EQ(inName,"stats") ) { return stats; }
		if (HX_FIELD_EQ(inName,"cache") ) { return cache_dyn(); }
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"sounds") ) { return sounds; }
		if (HX_FIELD_EQ(inName,"remove") ) { return remove_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"shaders") ) { return shaders; }
		if (HX_FIELD_EQ(inName,"uncache") ) { return uncache_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"textures") ) { return textures; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"find_font") ) { return find_font_dyn(); }
		if (HX_FIELD_EQ(inName,"find_text") ) { return find_text_dyn(); }
		if (HX_FIELD_EQ(inName,"find_json") ) { return find_json_dyn(); }
		if (HX_FIELD_EQ(inName,"find_data") ) { return find_data_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"find_sound") ) { return find_sound_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"find_shader") ) { return find_shader_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"resourcelist") ) { return resourcelist; }
		if (HX_FIELD_EQ(inName,"find_texture") ) { return find_texture_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"render_textures") ) { return render_textures; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"find_render_texture") ) { return find_render_texture_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ResourceManager_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { data=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"text") ) { text=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"json") ) { json=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"fonts") ) { fonts=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"stats") ) { stats=inValue.Cast< ::luxe::resource::ResourceStats >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"sounds") ) { sounds=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"shaders") ) { shaders=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"textures") ) { textures=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"resourcelist") ) { resourcelist=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"render_textures") ) { render_textures=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ResourceManager_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("resourcelist"));
	outFields->push(HX_CSTRING("render_textures"));
	outFields->push(HX_CSTRING("textures"));
	outFields->push(HX_CSTRING("shaders"));
	outFields->push(HX_CSTRING("fonts"));
	outFields->push(HX_CSTRING("data"));
	outFields->push(HX_CSTRING("text"));
	outFields->push(HX_CSTRING("json"));
	outFields->push(HX_CSTRING("sounds"));
	outFields->push(HX_CSTRING("stats"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(ResourceManager_obj,resourcelist),HX_CSTRING("resourcelist")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(ResourceManager_obj,render_textures),HX_CSTRING("render_textures")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(ResourceManager_obj,textures),HX_CSTRING("textures")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(ResourceManager_obj,shaders),HX_CSTRING("shaders")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(ResourceManager_obj,fonts),HX_CSTRING("fonts")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(ResourceManager_obj,data),HX_CSTRING("data")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(ResourceManager_obj,text),HX_CSTRING("text")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(ResourceManager_obj,json),HX_CSTRING("json")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(ResourceManager_obj,sounds),HX_CSTRING("sounds")},
	{hx::fsObject /*::luxe::resource::ResourceStats*/ ,(int)offsetof(ResourceManager_obj,stats),HX_CSTRING("stats")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("resourcelist"),
	HX_CSTRING("render_textures"),
	HX_CSTRING("textures"),
	HX_CSTRING("shaders"),
	HX_CSTRING("fonts"),
	HX_CSTRING("data"),
	HX_CSTRING("text"),
	HX_CSTRING("json"),
	HX_CSTRING("sounds"),
	HX_CSTRING("stats"),
	HX_CSTRING("add"),
	HX_CSTRING("remove"),
	HX_CSTRING("uncache"),
	HX_CSTRING("cache"),
	HX_CSTRING("find_render_texture"),
	HX_CSTRING("find_texture"),
	HX_CSTRING("find_shader"),
	HX_CSTRING("find_font"),
	HX_CSTRING("find_sound"),
	HX_CSTRING("find_text"),
	HX_CSTRING("find_json"),
	HX_CSTRING("find_data"),
	HX_CSTRING("clear"),
	HX_CSTRING("find"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ResourceManager_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ResourceManager_obj::__mClass,"__mClass");
};

#endif

Class ResourceManager_obj::__mClass;

void ResourceManager_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("luxe.resource.ResourceManager"), hx::TCanCast< ResourceManager_obj> ,sStaticFields,sMemberFields,
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

void ResourceManager_obj::__boot()
{
}

} // end namespace luxe
} // end namespace resource
