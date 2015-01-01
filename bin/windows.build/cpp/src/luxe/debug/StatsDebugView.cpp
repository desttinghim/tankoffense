#include <hxcpp.h>

#ifndef INCLUDED_Luxe
#include <Luxe.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_luxe_Debug
#include <luxe/Debug.h>
#endif
#ifndef INCLUDED_luxe_Emitter
#include <luxe/Emitter.h>
#endif
#ifndef INCLUDED_luxe_Entity
#include <luxe/Entity.h>
#endif
#ifndef INCLUDED_luxe_Objects
#include <luxe/Objects.h>
#endif
#ifndef INCLUDED_luxe_Text
#include <luxe/Text.h>
#endif
#ifndef INCLUDED_luxe_Visual
#include <luxe/Visual.h>
#endif
#ifndef INCLUDED_luxe_debug_DebugView
#include <luxe/debug/DebugView.h>
#endif
#ifndef INCLUDED_luxe_debug_StatsDebugView
#include <luxe/debug/StatsDebugView.h>
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
#ifndef INCLUDED_luxe_structural_BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry
#include <luxe/structural/BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry.h>
#endif
#ifndef INCLUDED_phoenix_Batcher
#include <phoenix/Batcher.h>
#endif
#ifndef INCLUDED_phoenix_BitmapFont
#include <phoenix/BitmapFont.h>
#endif
#ifndef INCLUDED_phoenix_Color
#include <phoenix/Color.h>
#endif
#ifndef INCLUDED_phoenix_Renderer
#include <phoenix/Renderer.h>
#endif
#ifndef INCLUDED_phoenix_RendererStats
#include <phoenix/RendererStats.h>
#endif
#ifndef INCLUDED_phoenix_Texture
#include <phoenix/Texture.h>
#endif
#ifndef INCLUDED_phoenix_Vector
#include <phoenix/Vector.h>
#endif
#ifndef INCLUDED_phoenix_geometry_Geometry
#include <phoenix/geometry/Geometry.h>
#endif
#ifndef INCLUDED_snow_input_Keycodes
#include <snow/input/Keycodes.h>
#endif
namespace luxe{
namespace debug{

Void StatsDebugView_obj::__construct()
{
HX_STACK_FRAME("luxe.debug.StatsDebugView","new",0x9c8136be,"luxe.debug.StatsDebugView.new","luxe/debug/StatsDebugView.hx",18,0x06813970)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(230)
	this->hide_debug = true;
	HX_STACK_LINE(25)
	this->font_size = (int)15;
	HX_STACK_LINE(24)
	this->debug_geometry_count = (int)13;
	HX_STACK_LINE(23)
	this->debug_draw_call_count = (int)3;
	HX_STACK_LINE(34)
	super::__construct();
	HX_STACK_LINE(36)
	this->name = HX_CSTRING("Statistics");
	struct _Function_1_1{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/debug/StatsDebugView.hx",38,0x06813970)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("batchers") , (int)0,false);
				__result->Add(HX_CSTRING("geometry_count") , (int)0,false);
				__result->Add(HX_CSTRING("dynamic_batched_count") , (int)0,false);
				__result->Add(HX_CSTRING("static_batched_count") , (int)0,false);
				__result->Add(HX_CSTRING("visible_count") , (int)0,false);
				__result->Add(HX_CSTRING("draw_calls") , (int)0,false);
				__result->Add(HX_CSTRING("vert_count") , (int)0,false);
				__result->Add(HX_CSTRING("group_count") , (int)0,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(38)
	this->_last_render_stats = _Function_1_1::Block();
	struct _Function_1_2{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/debug/StatsDebugView.hx",49,0x06813970)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("batchers") , (int)0,false);
				__result->Add(HX_CSTRING("geometry_count") , (int)0,false);
				__result->Add(HX_CSTRING("dynamic_batched_count") , (int)0,false);
				__result->Add(HX_CSTRING("static_batched_count") , (int)0,false);
				__result->Add(HX_CSTRING("visible_count") , (int)0,false);
				__result->Add(HX_CSTRING("draw_calls") , (int)0,false);
				__result->Add(HX_CSTRING("vert_count") , (int)0,false);
				__result->Add(HX_CSTRING("group_count") , (int)0,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(49)
	this->_render_stats = _Function_1_2::Block();
}
;
	return null();
}

//StatsDebugView_obj::~StatsDebugView_obj() { }

Dynamic StatsDebugView_obj::__CreateEmpty() { return  new StatsDebugView_obj; }
hx::ObjectPtr< StatsDebugView_obj > StatsDebugView_obj::__new()
{  hx::ObjectPtr< StatsDebugView_obj > result = new StatsDebugView_obj();
	result->__construct();
	return result;}

Dynamic StatsDebugView_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< StatsDebugView_obj > result = new StatsDebugView_obj();
	result->__construct();
	return result;}

::String StatsDebugView_obj::get_resource_stats_string( ){
	HX_STACK_FRAME("luxe.debug.StatsDebugView","get_resource_stats_string",0x687d7ab7,"luxe.debug.StatsDebugView.get_resource_stats_string","luxe/debug/StatsDebugView.hx",63,0x06813970)
	HX_STACK_THIS(this)
	HX_STACK_LINE(63)
	return ::Std_obj::string(::Luxe_obj::resources->stats);
}


HX_DEFINE_DYNAMIC_FUNC0(StatsDebugView_obj,get_resource_stats_string,return )

::String StatsDebugView_obj::get_render_stats_string( ){
	HX_STACK_FRAME("luxe.debug.StatsDebugView","get_render_stats_string",0xb1344fef,"luxe.debug.StatsDebugView.get_render_stats_string","luxe/debug/StatsDebugView.hx",67,0x06813970)
	HX_STACK_THIS(this)
	HX_STACK_LINE(68)
	return (((((((((((((((((((HX_CSTRING("Renderer Statistics\n\tbatcher count : ") + this->_render_stats->__Field(HX_CSTRING("batchers"),true)) + HX_CSTRING("\n")) + HX_CSTRING("\ttotal geometry : ")) + this->_render_stats->__Field(HX_CSTRING("geometry_count"),true)) + HX_CSTRING("\n")) + HX_CSTRING("\tvisible geometry : ")) + this->_render_stats->__Field(HX_CSTRING("visible_count"),true)) + HX_CSTRING("\n")) + HX_CSTRING("\tdynamic batch count : ")) + this->_render_stats->__Field(HX_CSTRING("dynamic_batched_count"),true)) + HX_CSTRING("\n")) + HX_CSTRING("\tstatic batch count : ")) + this->_render_stats->__Field(HX_CSTRING("static_batched_count"),true)) + HX_CSTRING("\n")) + HX_CSTRING("\ttotal draw calls : ")) + this->_render_stats->__Field(HX_CSTRING("draw_calls"),true)) + HX_CSTRING("\n")) + HX_CSTRING("\ttotal vert count : ")) + this->_render_stats->__Field(HX_CSTRING("vert_count"),true));
}


HX_DEFINE_DYNAMIC_FUNC0(StatsDebugView_obj,get_render_stats_string,return )

Void StatsDebugView_obj::create( ){
{
		HX_STACK_FRAME("luxe.debug.StatsDebugView","create",0xa3e7cf5e,"luxe.debug.StatsDebugView.create","luxe/debug/StatsDebugView.hx",78,0x06813970)
		HX_STACK_THIS(this)
		HX_STACK_LINE(80)
		::luxe::Debug debug = ::Luxe_obj::debug;		HX_STACK_VAR(debug,"debug");
		HX_STACK_LINE(85)
		::phoenix::Color _g = ::phoenix::Color_obj::__new((int)0,(int)0,(int)0,(int)1)->rgb((int)16121979);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(86)
		::phoenix::Vector _g1 = ::phoenix::Vector_obj::__new((debug->padding->x * (int)2),(debug->padding->y * (int)3),null(),null());		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(88)
		::String _g2 = this->get_render_stats_string();		HX_STACK_VAR(_g2,"_g2");
		struct _Function_1_1{
			inline static Dynamic Block( ::phoenix::Vector &_g1,hx::ObjectPtr< ::luxe::debug::StatsDebugView_obj > __this,::luxe::Debug &debug,::phoenix::Color &_g,::String &_g2){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/debug/StatsDebugView.hx",82,0x06813970)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("depth") , 999.3,false);
					__result->Add(HX_CSTRING("no_scene") , true,false);
					__result->Add(HX_CSTRING("color") , _g,false);
					__result->Add(HX_CSTRING("pos") , _g1,false);
					__result->Add(HX_CSTRING("font") , ::Luxe_obj::renderer->font,false);
					__result->Add(HX_CSTRING("text") , _g2,false);
					__result->Add(HX_CSTRING("point_size") , __this->font_size,false);
					__result->Add(HX_CSTRING("batcher") , debug->batcher,false);
					__result->Add(HX_CSTRING("visible") , false,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(82)
		Dynamic _g3 = _Function_1_1::Block(_g1,this,debug,_g,_g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(82)
		::luxe::Text _g4 = ::luxe::Text_obj::__new(_g3);		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(82)
		this->render_stats_text = _g4;
		HX_STACK_LINE(97)
		::phoenix::Color _g5 = ::phoenix::Color_obj::__new((int)0,(int)0,(int)0,(int)1)->rgb((int)16121979);		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(98)
		::phoenix::Vector _g6 = ::phoenix::Vector_obj::__new((debug->padding->x * (int)2),(debug->padding->y * 7.5),null(),null());		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(100)
		::String _g7 = this->get_resource_stats_string();		HX_STACK_VAR(_g7,"_g7");
		struct _Function_1_2{
			inline static Dynamic Block( ::String &_g7,::phoenix::Color &_g5,hx::ObjectPtr< ::luxe::debug::StatsDebugView_obj > __this,::luxe::Debug &debug,::phoenix::Vector &_g6){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/debug/StatsDebugView.hx",94,0x06813970)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("depth") , 999.3,false);
					__result->Add(HX_CSTRING("no_scene") , true,false);
					__result->Add(HX_CSTRING("color") , _g5,false);
					__result->Add(HX_CSTRING("pos") , _g6,false);
					__result->Add(HX_CSTRING("font") , ::Luxe_obj::renderer->font,false);
					__result->Add(HX_CSTRING("text") , _g7,false);
					__result->Add(HX_CSTRING("point_size") , __this->font_size,false);
					__result->Add(HX_CSTRING("batcher") , debug->batcher,false);
					__result->Add(HX_CSTRING("visible") , false,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(94)
		Dynamic _g8 = _Function_1_2::Block(_g7,_g5,this,debug,_g6);		HX_STACK_VAR(_g8,"_g8");
		HX_STACK_LINE(94)
		::luxe::Text _g9 = ::luxe::Text_obj::__new(_g8);		HX_STACK_VAR(_g9,"_g9");
		HX_STACK_LINE(94)
		this->resource_stats_text = _g9;
		HX_STACK_LINE(109)
		::phoenix::Color _g10 = ::phoenix::Color_obj::__new((int)0,(int)0,(int)0,(int)1)->rgb((int)16121979);		HX_STACK_VAR(_g10,"_g10");
		HX_STACK_LINE(110)
		::phoenix::Vector _g11 = ::phoenix::Vector_obj::__new((debug->padding->x * (int)7),(debug->padding->y * (int)3),null(),null());		HX_STACK_VAR(_g11,"_g11");
		struct _Function_1_3{
			inline static Dynamic Block( ::phoenix::Vector &_g11,hx::ObjectPtr< ::luxe::debug::StatsDebugView_obj > __this,::luxe::Debug &debug,::phoenix::Color &_g10){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/debug/StatsDebugView.hx",106,0x06813970)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("depth") , 999.3,false);
					__result->Add(HX_CSTRING("no_scene") , true,false);
					__result->Add(HX_CSTRING("color") , _g10,false);
					__result->Add(HX_CSTRING("pos") , _g11,false);
					__result->Add(HX_CSTRING("font") , ::Luxe_obj::renderer->font,false);
					__result->Add(HX_CSTRING("text") , HX_CSTRING(""),false);
					__result->Add(HX_CSTRING("point_size") , (__this->font_size * 0.8),false);
					__result->Add(HX_CSTRING("batcher") , debug->batcher,false);
					__result->Add(HX_CSTRING("visible") , false,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(106)
		Dynamic _g12 = _Function_1_3::Block(_g11,this,debug,_g10);		HX_STACK_VAR(_g12,"_g12");
		HX_STACK_LINE(106)
		::luxe::Text _g13 = ::luxe::Text_obj::__new(_g12);		HX_STACK_VAR(_g13,"_g13");
		HX_STACK_LINE(106)
		this->resource_list_text = _g13;
		HX_STACK_LINE(119)
		this->resource_list_text->set_locked(true);
		HX_STACK_LINE(120)
		this->resource_stats_text->set_locked(true);
	}
return null();
}


Void StatsDebugView_obj::refresh( ){
{
		HX_STACK_FRAME("luxe.debug.StatsDebugView","refresh",0xa2a3c739,"luxe.debug.StatsDebugView.refresh","luxe/debug/StatsDebugView.hx",124,0x06813970)
		HX_STACK_THIS(this)
		HX_STACK_LINE(126)
		::String texture_lists = HX_CSTRING("");		HX_STACK_VAR(texture_lists,"texture_lists");
		HX_STACK_LINE(127)
		::String shader_lists = HX_CSTRING("");		HX_STACK_VAR(shader_lists,"shader_lists");
		HX_STACK_LINE(128)
		::String font_lists = HX_CSTRING("");		HX_STACK_VAR(font_lists,"font_lists");
		HX_STACK_LINE(130)
		{
			HX_STACK_LINE(130)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(130)
			Array< ::Dynamic > _g1 = ::Luxe_obj::resources->resourcelist;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(130)
			while((true)){
				HX_STACK_LINE(130)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(130)
					break;
				}
				HX_STACK_LINE(130)
				::luxe::resource::Resource res = _g1->__get(_g).StaticCast< ::luxe::resource::Resource >();		HX_STACK_VAR(res,"res");
				HX_STACK_LINE(130)
				++(_g);
				HX_STACK_LINE(131)
				{
					HX_STACK_LINE(131)
					::luxe::resource::ResourceType _g2 = res->type;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(131)
					switch( (int)(_g2->__Index())){
						case (int)4: {
							HX_STACK_LINE(133)
							::phoenix::Texture t = res;		HX_STACK_VAR(t,"t");
							HX_STACK_LINE(134)
							::String _g3 = t->estimated_memory();		HX_STACK_VAR(_g3,"_g3");
							HX_STACK_LINE(134)
							::String _g11 = (((((((HX_CSTRING("\t") + t->id) + HX_CSTRING("    (")) + t->width_actual) + HX_CSTRING("x")) + t->height_actual) + HX_CSTRING("  ")) + _g3);		HX_STACK_VAR(_g11,"_g11");
							HX_STACK_LINE(134)
							::String _g21 = (_g11 + HX_CSTRING(" )\n"));		HX_STACK_VAR(_g21,"_g21");
							HX_STACK_LINE(134)
							hx::AddEq(texture_lists,_g21);
						}
						;break;
						case (int)7: {
							HX_STACK_LINE(136)
							hx::AddEq(font_lists,((HX_CSTRING("\t") + res->id) + HX_CSTRING("\n")));
						}
						;break;
						case (int)8: {
							HX_STACK_LINE(138)
							hx::AddEq(shader_lists,((HX_CSTRING("\t") + res->id) + HX_CSTRING("\n")));
						}
						;break;
						default: {
						}
					}
				}
			}
		}
		HX_STACK_LINE(143)
		::String lists = HX_CSTRING("Fonts\n");		HX_STACK_VAR(lists,"lists");
		HX_STACK_LINE(144)
		hx::AddEq(lists,font_lists);
		HX_STACK_LINE(145)
		hx::AddEq(lists,HX_CSTRING("Shader\n"));
		HX_STACK_LINE(146)
		hx::AddEq(lists,shader_lists);
		HX_STACK_LINE(147)
		hx::AddEq(lists,HX_CSTRING("Textures\n"));
		HX_STACK_LINE(148)
		hx::AddEq(lists,texture_lists);
		HX_STACK_LINE(150)
		this->resource_list_text->set_text(lists);
		HX_STACK_LINE(151)
		if (((this->resource_list_text->geometry != null()))){
			HX_STACK_LINE(152)
			this->resource_list_text->geometry->set_dirty(true);
		}
	}
return null();
}


Void StatsDebugView_obj::process( ){
{
		HX_STACK_FRAME("luxe.debug.StatsDebugView","process",0xa6cd8fcd,"luxe.debug.StatsDebugView.process","luxe/debug/StatsDebugView.hx",158,0x06813970)
		HX_STACK_THIS(this)
		HX_STACK_LINE(160)
		if ((!(this->visible))){
			HX_STACK_LINE(160)
			return null();
		}
		HX_STACK_LINE(162)
		bool dirty = false;		HX_STACK_VAR(dirty,"dirty");
		HX_STACK_LINE(165)
		this->update_render_stats();
		HX_STACK_LINE(167)
		if (((this->_last_render_stats->__Field(HX_CSTRING("batchers"),true) != this->_render_stats->__Field(HX_CSTRING("batchers"),true)))){
			HX_STACK_LINE(168)
			dirty = true;
			HX_STACK_LINE(168)
			this->_last_render_stats->__FieldRef(HX_CSTRING("batchers")) = this->_render_stats->__Field(HX_CSTRING("batchers"),true);
		}
		HX_STACK_LINE(169)
		if (((this->_last_render_stats->__Field(HX_CSTRING("geometry_count"),true) != this->_render_stats->__Field(HX_CSTRING("geometry_count"),true)))){
			HX_STACK_LINE(170)
			dirty = true;
			HX_STACK_LINE(170)
			this->_last_render_stats->__FieldRef(HX_CSTRING("geometry_count")) = this->_render_stats->__Field(HX_CSTRING("geometry_count"),true);
		}
		HX_STACK_LINE(171)
		if (((this->_last_render_stats->__Field(HX_CSTRING("dynamic_batched_count"),true) != this->_render_stats->__Field(HX_CSTRING("dynamic_batched_count"),true)))){
			HX_STACK_LINE(172)
			dirty = true;
			HX_STACK_LINE(172)
			this->_last_render_stats->__FieldRef(HX_CSTRING("dynamic_batched_count")) = this->_render_stats->__Field(HX_CSTRING("dynamic_batched_count"),true);
		}
		HX_STACK_LINE(173)
		if (((this->_last_render_stats->__Field(HX_CSTRING("static_batched_count"),true) != this->_render_stats->__Field(HX_CSTRING("static_batched_count"),true)))){
			HX_STACK_LINE(174)
			dirty = true;
			HX_STACK_LINE(174)
			this->_last_render_stats->__FieldRef(HX_CSTRING("static_batched_count")) = this->_render_stats->__Field(HX_CSTRING("static_batched_count"),true);
		}
		HX_STACK_LINE(175)
		if (((this->_last_render_stats->__Field(HX_CSTRING("visible_count"),true) != this->_render_stats->__Field(HX_CSTRING("visible_count"),true)))){
			HX_STACK_LINE(176)
			dirty = true;
			HX_STACK_LINE(176)
			this->_last_render_stats->__FieldRef(HX_CSTRING("visible_count")) = this->_render_stats->__Field(HX_CSTRING("visible_count"),true);
		}
		HX_STACK_LINE(177)
		if (((this->_last_render_stats->__Field(HX_CSTRING("draw_calls"),true) != this->_render_stats->__Field(HX_CSTRING("draw_calls"),true)))){
			HX_STACK_LINE(178)
			dirty = true;
			HX_STACK_LINE(178)
			this->_last_render_stats->__FieldRef(HX_CSTRING("draw_calls")) = this->_render_stats->__Field(HX_CSTRING("draw_calls"),true);
		}
		HX_STACK_LINE(179)
		if (((this->_last_render_stats->__Field(HX_CSTRING("group_count"),true) != this->_render_stats->__Field(HX_CSTRING("group_count"),true)))){
			HX_STACK_LINE(180)
			dirty = true;
			HX_STACK_LINE(180)
			this->_last_render_stats->__FieldRef(HX_CSTRING("group_count")) = this->_render_stats->__Field(HX_CSTRING("group_count"),true);
		}
		HX_STACK_LINE(181)
		if (((this->_last_render_stats->__Field(HX_CSTRING("vert_count"),true) != this->_render_stats->__Field(HX_CSTRING("vert_count"),true)))){
			HX_STACK_LINE(182)
			dirty = true;
			HX_STACK_LINE(182)
			this->_last_render_stats->__FieldRef(HX_CSTRING("vert_count")) = this->_render_stats->__Field(HX_CSTRING("vert_count"),true);
		}
		HX_STACK_LINE(184)
		if ((dirty)){
			HX_STACK_LINE(185)
			this->refresh_render_stats();
		}
	}
return null();
}


Void StatsDebugView_obj::onkeydown( Dynamic e){
{
		HX_STACK_FRAME("luxe.debug.StatsDebugView","onkeydown",0x09e74f20,"luxe.debug.StatsDebugView.onkeydown","luxe/debug/StatsDebugView.hx",191,0x06813970)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(191)
		if (((bool((e->__Field(HX_CSTRING("keycode"),true) == ::snow::input::Keycodes_obj::key_2)) && bool(this->visible)))){
			HX_STACK_LINE(192)
			this->toggle_debug_stats();
		}
	}
return null();
}


Void StatsDebugView_obj::show( ){
{
		HX_STACK_FRAME("luxe.debug.StatsDebugView","show",0x57df00df,"luxe.debug.StatsDebugView.show","luxe/debug/StatsDebugView.hx",196,0x06813970)
		HX_STACK_THIS(this)
		HX_STACK_LINE(197)
		this->super::show();
		HX_STACK_LINE(198)
		this->refresh();
		HX_STACK_LINE(199)
		this->render_stats_text->set_visible(true);
		HX_STACK_LINE(200)
		this->resource_stats_text->set_visible(true);
		HX_STACK_LINE(201)
		this->resource_list_text->set_visible(true);
	}
return null();
}


Void StatsDebugView_obj::hide( ){
{
		HX_STACK_FRAME("luxe.debug.StatsDebugView","hide",0x509a60a4,"luxe.debug.StatsDebugView.hide","luxe/debug/StatsDebugView.hx",204,0x06813970)
		HX_STACK_THIS(this)
		HX_STACK_LINE(205)
		this->super::hide();
		HX_STACK_LINE(206)
		this->render_stats_text->set_visible(false);
		HX_STACK_LINE(207)
		this->resource_stats_text->set_visible(false);
		HX_STACK_LINE(208)
		this->resource_list_text->set_visible(false);
	}
return null();
}


Void StatsDebugView_obj::refresh_render_stats( ){
{
		HX_STACK_FRAME("luxe.debug.StatsDebugView","refresh_render_stats",0xe506493c,"luxe.debug.StatsDebugView.refresh_render_stats","luxe/debug/StatsDebugView.hx",211,0x06813970)
		HX_STACK_THIS(this)
		HX_STACK_LINE(213)
		if ((!(this->visible))){
			HX_STACK_LINE(214)
			return null();
		}
		HX_STACK_LINE(217)
		::String _g = this->get_render_stats_string();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(217)
		this->render_stats_text->set_text(_g);
		HX_STACK_LINE(218)
		::String _g1 = this->get_resource_stats_string();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(218)
		this->resource_stats_text->set_text(_g1);
		HX_STACK_LINE(220)
		this->resource_stats_text->set_locked(true);
		HX_STACK_LINE(221)
		this->render_stats_text->set_locked(true);
		HX_STACK_LINE(223)
		if (((this->render_stats_text->geometry != null()))){
			HX_STACK_LINE(224)
			this->resource_stats_text->geometry->set_dirty(true);
			HX_STACK_LINE(225)
			this->render_stats_text->geometry->set_dirty(true);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(StatsDebugView_obj,refresh_render_stats,(void))

Void StatsDebugView_obj::toggle_debug_stats( ){
{
		HX_STACK_FRAME("luxe.debug.StatsDebugView","toggle_debug_stats",0x050dfeea,"luxe.debug.StatsDebugView.toggle_debug_stats","luxe/debug/StatsDebugView.hx",232,0x06813970)
		HX_STACK_THIS(this)
		HX_STACK_LINE(232)
		this->hide_debug = !(this->hide_debug);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(StatsDebugView_obj,toggle_debug_stats,(void))

Void StatsDebugView_obj::update_render_stats( ){
{
		HX_STACK_FRAME("luxe.debug.StatsDebugView","update_render_stats",0xaa1a0aca,"luxe.debug.StatsDebugView.update_render_stats","luxe/debug/StatsDebugView.hx",235,0x06813970)
		HX_STACK_THIS(this)
		HX_STACK_LINE(237)
		int _g = ::Luxe_obj::debug->batcher->geometry->size();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(237)
		this->debug_geometry_count = _g;
		HX_STACK_LINE(238)
		this->debug_draw_call_count = ::Luxe_obj::debug->batcher->draw_calls;
		HX_STACK_LINE(240)
		this->_render_stats->__FieldRef(HX_CSTRING("batchers")) = ::Luxe_obj::renderer->stats->batchers;
		HX_STACK_LINE(241)
		this->_render_stats->__FieldRef(HX_CSTRING("geometry_count")) = ::Luxe_obj::renderer->stats->geometry_count;
		HX_STACK_LINE(242)
		this->_render_stats->__FieldRef(HX_CSTRING("visible_count")) = ::Luxe_obj::renderer->stats->visible_count;
		HX_STACK_LINE(243)
		this->_render_stats->__FieldRef(HX_CSTRING("dynamic_batched_count")) = ::Luxe_obj::renderer->stats->dynamic_batched_count;
		HX_STACK_LINE(244)
		this->_render_stats->__FieldRef(HX_CSTRING("static_batched_count")) = ::Luxe_obj::renderer->stats->static_batched_count;
		HX_STACK_LINE(245)
		this->_render_stats->__FieldRef(HX_CSTRING("draw_calls")) = ::Luxe_obj::renderer->stats->draw_calls;
		HX_STACK_LINE(246)
		this->_render_stats->__FieldRef(HX_CSTRING("vert_count")) = ::Luxe_obj::renderer->stats->vert_count;
		HX_STACK_LINE(248)
		if ((this->hide_debug)){
			HX_STACK_LINE(250)
			this->_render_stats->__FieldRef(HX_CSTRING("batchers")) = (this->_render_stats->__Field(HX_CSTRING("batchers"),true) - (int)1);
			HX_STACK_LINE(251)
			this->_render_stats->__FieldRef(HX_CSTRING("geometry_count")) = (this->_render_stats->__Field(HX_CSTRING("geometry_count"),true) - this->debug_geometry_count);
			HX_STACK_LINE(252)
			this->_render_stats->__FieldRef(HX_CSTRING("visible_count")) = (this->_render_stats->__Field(HX_CSTRING("visible_count"),true) - ::Luxe_obj::debug->batcher->visible_count);
			HX_STACK_LINE(253)
			this->_render_stats->__FieldRef(HX_CSTRING("dynamic_batched_count")) = (this->_render_stats->__Field(HX_CSTRING("dynamic_batched_count"),true) - ::Luxe_obj::debug->batcher->dynamic_batched_count);
			HX_STACK_LINE(254)
			this->_render_stats->__FieldRef(HX_CSTRING("static_batched_count")) = (this->_render_stats->__Field(HX_CSTRING("static_batched_count"),true) - ::Luxe_obj::debug->batcher->static_batched_count);
			HX_STACK_LINE(255)
			hx::SubEq(this->_render_stats->__FieldRef(HX_CSTRING("draw_calls")),this->debug_draw_call_count);
			HX_STACK_LINE(256)
			hx::SubEq(this->_render_stats->__FieldRef(HX_CSTRING("vert_count")),::Luxe_obj::debug->batcher->vert_count);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(StatsDebugView_obj,update_render_stats,(void))


StatsDebugView_obj::StatsDebugView_obj()
{
}

void StatsDebugView_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(StatsDebugView);
	HX_MARK_MEMBER_NAME(_last_render_stats,"_last_render_stats");
	HX_MARK_MEMBER_NAME(_render_stats,"_render_stats");
	HX_MARK_MEMBER_NAME(debug_draw_call_count,"debug_draw_call_count");
	HX_MARK_MEMBER_NAME(debug_geometry_count,"debug_geometry_count");
	HX_MARK_MEMBER_NAME(font_size,"font_size");
	HX_MARK_MEMBER_NAME(render_stats_text,"render_stats_text");
	HX_MARK_MEMBER_NAME(resource_stats_text,"resource_stats_text");
	HX_MARK_MEMBER_NAME(resource_list_text,"resource_list_text");
	HX_MARK_MEMBER_NAME(hide_debug,"hide_debug");
	::luxe::Objects_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void StatsDebugView_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_last_render_stats,"_last_render_stats");
	HX_VISIT_MEMBER_NAME(_render_stats,"_render_stats");
	HX_VISIT_MEMBER_NAME(debug_draw_call_count,"debug_draw_call_count");
	HX_VISIT_MEMBER_NAME(debug_geometry_count,"debug_geometry_count");
	HX_VISIT_MEMBER_NAME(font_size,"font_size");
	HX_VISIT_MEMBER_NAME(render_stats_text,"render_stats_text");
	HX_VISIT_MEMBER_NAME(resource_stats_text,"resource_stats_text");
	HX_VISIT_MEMBER_NAME(resource_list_text,"resource_list_text");
	HX_VISIT_MEMBER_NAME(hide_debug,"hide_debug");
	::luxe::Objects_obj::__Visit(HX_VISIT_ARG);
}

Dynamic StatsDebugView_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"show") ) { return show_dyn(); }
		if (HX_FIELD_EQ(inName,"hide") ) { return hide_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"refresh") ) { return refresh_dyn(); }
		if (HX_FIELD_EQ(inName,"process") ) { return process_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"font_size") ) { return font_size; }
		if (HX_FIELD_EQ(inName,"onkeydown") ) { return onkeydown_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"hide_debug") ) { return hide_debug; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_render_stats") ) { return _render_stats; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"render_stats_text") ) { return render_stats_text; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_last_render_stats") ) { return _last_render_stats; }
		if (HX_FIELD_EQ(inName,"resource_list_text") ) { return resource_list_text; }
		if (HX_FIELD_EQ(inName,"toggle_debug_stats") ) { return toggle_debug_stats_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"resource_stats_text") ) { return resource_stats_text; }
		if (HX_FIELD_EQ(inName,"update_render_stats") ) { return update_render_stats_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"debug_geometry_count") ) { return debug_geometry_count; }
		if (HX_FIELD_EQ(inName,"refresh_render_stats") ) { return refresh_render_stats_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"debug_draw_call_count") ) { return debug_draw_call_count; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"get_render_stats_string") ) { return get_render_stats_string_dyn(); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"get_resource_stats_string") ) { return get_resource_stats_string_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic StatsDebugView_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"font_size") ) { font_size=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"hide_debug") ) { hide_debug=inValue.Cast< bool >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_render_stats") ) { _render_stats=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"render_stats_text") ) { render_stats_text=inValue.Cast< ::luxe::Text >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_last_render_stats") ) { _last_render_stats=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"resource_list_text") ) { resource_list_text=inValue.Cast< ::luxe::Text >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"resource_stats_text") ) { resource_stats_text=inValue.Cast< ::luxe::Text >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"debug_geometry_count") ) { debug_geometry_count=inValue.Cast< int >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"debug_draw_call_count") ) { debug_draw_call_count=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void StatsDebugView_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_last_render_stats"));
	outFields->push(HX_CSTRING("_render_stats"));
	outFields->push(HX_CSTRING("debug_draw_call_count"));
	outFields->push(HX_CSTRING("debug_geometry_count"));
	outFields->push(HX_CSTRING("font_size"));
	outFields->push(HX_CSTRING("render_stats_text"));
	outFields->push(HX_CSTRING("resource_stats_text"));
	outFields->push(HX_CSTRING("resource_list_text"));
	outFields->push(HX_CSTRING("hide_debug"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(StatsDebugView_obj,_last_render_stats),HX_CSTRING("_last_render_stats")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(StatsDebugView_obj,_render_stats),HX_CSTRING("_render_stats")},
	{hx::fsInt,(int)offsetof(StatsDebugView_obj,debug_draw_call_count),HX_CSTRING("debug_draw_call_count")},
	{hx::fsInt,(int)offsetof(StatsDebugView_obj,debug_geometry_count),HX_CSTRING("debug_geometry_count")},
	{hx::fsInt,(int)offsetof(StatsDebugView_obj,font_size),HX_CSTRING("font_size")},
	{hx::fsObject /*::luxe::Text*/ ,(int)offsetof(StatsDebugView_obj,render_stats_text),HX_CSTRING("render_stats_text")},
	{hx::fsObject /*::luxe::Text*/ ,(int)offsetof(StatsDebugView_obj,resource_stats_text),HX_CSTRING("resource_stats_text")},
	{hx::fsObject /*::luxe::Text*/ ,(int)offsetof(StatsDebugView_obj,resource_list_text),HX_CSTRING("resource_list_text")},
	{hx::fsBool,(int)offsetof(StatsDebugView_obj,hide_debug),HX_CSTRING("hide_debug")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("_last_render_stats"),
	HX_CSTRING("_render_stats"),
	HX_CSTRING("debug_draw_call_count"),
	HX_CSTRING("debug_geometry_count"),
	HX_CSTRING("font_size"),
	HX_CSTRING("render_stats_text"),
	HX_CSTRING("resource_stats_text"),
	HX_CSTRING("resource_list_text"),
	HX_CSTRING("get_resource_stats_string"),
	HX_CSTRING("get_render_stats_string"),
	HX_CSTRING("create"),
	HX_CSTRING("refresh"),
	HX_CSTRING("process"),
	HX_CSTRING("onkeydown"),
	HX_CSTRING("show"),
	HX_CSTRING("hide"),
	HX_CSTRING("refresh_render_stats"),
	HX_CSTRING("hide_debug"),
	HX_CSTRING("toggle_debug_stats"),
	HX_CSTRING("update_render_stats"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(StatsDebugView_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(StatsDebugView_obj::__mClass,"__mClass");
};

#endif

Class StatsDebugView_obj::__mClass;

void StatsDebugView_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("luxe.debug.StatsDebugView"), hx::TCanCast< StatsDebugView_obj> ,sStaticFields,sMemberFields,
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

void StatsDebugView_obj::__boot()
{
}

} // end namespace luxe
} // end namespace debug
