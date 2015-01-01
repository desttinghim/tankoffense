#include <hxcpp.h>

#ifndef INCLUDED_Luxe
#include <Luxe.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_luxe_Debug
#include <luxe/Debug.h>
#endif
#ifndef INCLUDED_luxe_Draw
#include <luxe/Draw.h>
#endif
#ifndef INCLUDED_luxe_Emitter
#include <luxe/Emitter.h>
#endif
#ifndef INCLUDED_luxe_Entity
#include <luxe/Entity.h>
#endif
#ifndef INCLUDED_luxe_ID
#include <luxe/ID.h>
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
#ifndef INCLUDED_luxe_debug__ProfilerDebugView_ProfilerBar
#include <luxe/debug/_ProfilerDebugView/ProfilerBar.h>
#endif
#ifndef INCLUDED_phoenix_Batcher
#include <phoenix/Batcher.h>
#endif
#ifndef INCLUDED_phoenix_Color
#include <phoenix/Color.h>
#endif
#ifndef INCLUDED_phoenix_Spatial
#include <phoenix/Spatial.h>
#endif
#ifndef INCLUDED_phoenix_Transform
#include <phoenix/Transform.h>
#endif
#ifndef INCLUDED_phoenix_Vector
#include <phoenix/Vector.h>
#endif
#ifndef INCLUDED_phoenix_geometry_Geometry
#include <phoenix/geometry/Geometry.h>
#endif
#ifndef INCLUDED_phoenix_geometry_QuadGeometry
#include <phoenix/geometry/QuadGeometry.h>
#endif
#ifndef INCLUDED_phoenix_geometry_Vertex
#include <phoenix/geometry/Vertex.h>
#endif
namespace luxe{
namespace debug{
namespace _ProfilerDebugView{

Void ProfilerBar_obj::__construct(::String _name,Dynamic __o__max,::phoenix::Color _color)
{
HX_STACK_FRAME("luxe.debug._ProfilerDebugView.ProfilerBar","new",0x0df3bd11,"luxe.debug._ProfilerDebugView.ProfilerBar.new","luxe/debug/ProfilerDebugView.hx",150,0xef83e3c4)
HX_STACK_THIS(this)
HX_STACK_ARG(_name,"_name")
HX_STACK_ARG(__o__max,"_max")
HX_STACK_ARG(_color,"_color")
Dynamic _max = __o__max.Default(0.0);
{
	HX_STACK_LINE(165)
	this->visible = false;
	HX_STACK_LINE(164)
	this->history = (int)33;
	HX_STACK_LINE(163)
	this->max = 16.6;
	HX_STACK_LINE(162)
	this->height2 = (int)8;
	HX_STACK_LINE(161)
	this->height = (int)8;
	HX_STACK_LINE(160)
	this->width = (int)128;
	HX_STACK_LINE(179)
	::phoenix::Color _g = ::phoenix::Color_obj::__new(null(),null(),null(),null())->rgb((int)13369344);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(179)
	this->color_red = _g;
	HX_STACK_LINE(180)
	::phoenix::Color _g1 = ::phoenix::Color_obj::__new(null(),null(),null(),null())->rgb((int)2263108);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(180)
	this->color_green = _g1;
	HX_STACK_LINE(181)
	::phoenix::Color _g2 = ::phoenix::Color_obj::__new(null(),null(),null(),null())->rgb((int)15790320);		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(181)
	this->color_normal = _g2;
	HX_STACK_LINE(183)
	if (((_max == 0.0))){
		HX_STACK_LINE(183)
		this->max = 16.666666666666668;
	}
	else{
		HX_STACK_LINE(183)
		this->max = _max;
	}
	HX_STACK_LINE(184)
	Float _g4;		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(184)
	{
		HX_STACK_LINE(184)
		Float n = ::Math_obj::pow((int)10,(int)1);		HX_STACK_VAR(n,"n");
		HX_STACK_LINE(184)
		int _g3 = ::Std_obj::_int((this->max * n));		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(184)
		_g4 = (Float(_g3) / Float(n));
	}
	HX_STACK_LINE(184)
	this->max = _g4;
	HX_STACK_LINE(185)
	this->name = _name;
	HX_STACK_LINE(186)
	this->segment = (Float(this->width) / Float(this->history));
	HX_STACK_LINE(187)
	this->height2 = (this->height * (int)2);
	HX_STACK_LINE(192)
	::phoenix::Vector _g5 = ::phoenix::Vector_obj::__new((int)0,(int)0,null(),null());		HX_STACK_VAR(_g5,"_g5");
	struct _Function_1_1{
		inline static Dynamic Block( ::phoenix::Vector &_g5,::phoenix::Color &_color,hx::ObjectPtr< ::luxe::debug::_ProfilerDebugView::ProfilerBar_obj > __this,::String &_name){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/debug/ProfilerDebugView.hx",189,0xef83e3c4)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("no_scene") , true,false);
				__result->Add(HX_CSTRING("name") , (HX_CSTRING("profiler.text.") + _name),false);
				__result->Add(HX_CSTRING("pos") , _g5,false);
				__result->Add(HX_CSTRING("color") , _color,false);
				__result->Add(HX_CSTRING("point_size") , (__this->height * 1.8),false);
				__result->Add(HX_CSTRING("depth") , 999.3,false);
				__result->Add(HX_CSTRING("text") , HX_CSTRING(""),false);
				__result->Add(HX_CSTRING("batcher") , ::Luxe_obj::debug->batcher,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(189)
	Dynamic _g6 = _Function_1_1::Block(_g5,_color,this,_name);		HX_STACK_VAR(_g6,"_g6");
	HX_STACK_LINE(189)
	::luxe::Text _g7 = ::luxe::Text_obj::__new(_g6);		HX_STACK_VAR(_g7,"_g7");
	HX_STACK_LINE(189)
	this->text_item = _g7;
	HX_STACK_LINE(201)
	::phoenix::Color _g8 = ::phoenix::Color_obj::__new(null(),null(),null(),null())->rgb((int)592137);		HX_STACK_VAR(_g8,"_g8");
	struct _Function_1_2{
		inline static Dynamic Block( hx::ObjectPtr< ::luxe::debug::_ProfilerDebugView::ProfilerBar_obj > __this,::phoenix::Color &_g8){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/debug/ProfilerDebugView.hx",200,0xef83e3c4)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("color") , _g8,false);
				__result->Add(HX_CSTRING("depth") , 999.3,false);
				__result->Add(HX_CSTRING("batcher") , ::Luxe_obj::debug->batcher,false);
				__result->Add(HX_CSTRING("x") , (int)0,false);
				__result->Add(HX_CSTRING("y") , (int)0,false);
				__result->Add(HX_CSTRING("w") , __this->width,false);
				__result->Add(HX_CSTRING("h") , __this->height,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(200)
	Dynamic _g9 = _Function_1_2::Block(this,_g8);		HX_STACK_VAR(_g9,"_g9");
	HX_STACK_LINE(200)
	::phoenix::geometry::QuadGeometry _g10 = ::Luxe_obj::draw->box(_g9);		HX_STACK_VAR(_g10,"_g10");
	HX_STACK_LINE(200)
	this->bg_geometry = _g10;
	HX_STACK_LINE(208)
	::phoenix::Color _g11 = ::phoenix::Color_obj::__new(null(),null(),null(),null())->rgb((int)2236962);		HX_STACK_VAR(_g11,"_g11");
	struct _Function_1_3{
		inline static Dynamic Block( ::phoenix::Color &_g11,hx::ObjectPtr< ::luxe::debug::_ProfilerDebugView::ProfilerBar_obj > __this){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/debug/ProfilerDebugView.hx",207,0xef83e3c4)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("color") , _g11,false);
				__result->Add(HX_CSTRING("depth") , 999.3,false);
				__result->Add(HX_CSTRING("batcher") , ::Luxe_obj::debug->batcher,false);
				__result->Add(HX_CSTRING("x") , (int)0,false);
				__result->Add(HX_CSTRING("y") , (int)0,false);
				__result->Add(HX_CSTRING("w") , (__this->width - __this->segment),false);
				__result->Add(HX_CSTRING("h") , (__this->height * (int)2),false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(207)
	Dynamic _g12 = _Function_1_3::Block(_g11,this);		HX_STACK_VAR(_g12,"_g12");
	HX_STACK_LINE(207)
	::phoenix::geometry::QuadGeometry _g13 = ::Luxe_obj::draw->box(_g12);		HX_STACK_VAR(_g13,"_g13");
	HX_STACK_LINE(207)
	this->graphbg_geometry = _g13;
	struct _Function_1_4{
		inline static Dynamic Block( ::phoenix::Color &_color,hx::ObjectPtr< ::luxe::debug::_ProfilerDebugView::ProfilerBar_obj > __this){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/debug/ProfilerDebugView.hx",214,0xef83e3c4)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("color") , _color,false);
				__result->Add(HX_CSTRING("depth") , 999.33,false);
				__result->Add(HX_CSTRING("batcher") , ::Luxe_obj::debug->batcher,false);
				__result->Add(HX_CSTRING("x") , (int)1,false);
				__result->Add(HX_CSTRING("y") , (int)1,false);
				__result->Add(HX_CSTRING("w") , (__this->width - (int)2),false);
				__result->Add(HX_CSTRING("h") , (__this->height - (int)2),false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(214)
	::phoenix::geometry::QuadGeometry _g14 = ::Luxe_obj::draw->box(_Function_1_4::Block(_color,this));		HX_STACK_VAR(_g14,"_g14");
	HX_STACK_LINE(214)
	this->bar_geometry = _g14;
	struct _Function_1_5{
		inline static Dynamic Block( ::phoenix::Color &_color){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/debug/ProfilerDebugView.hx",221,0xef83e3c4)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("color") , _color,false);
				__result->Add(HX_CSTRING("depth") , 999.33,false);
				__result->Add(HX_CSTRING("batcher") , ::Luxe_obj::debug->batcher,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(221)
	::phoenix::geometry::Geometry _g15 = ::phoenix::geometry::Geometry_obj::__new(_Function_1_5::Block(_color));		HX_STACK_VAR(_g15,"_g15");
	HX_STACK_LINE(221)
	this->graph_geometry = _g15;
	HX_STACK_LINE(227)
	{
		HX_STACK_LINE(227)
		int _g16 = (int)0;		HX_STACK_VAR(_g16,"_g16");
		HX_STACK_LINE(227)
		int _g3 = this->history;		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(227)
		while((true)){
			HX_STACK_LINE(227)
			if ((!(((_g16 < _g3))))){
				HX_STACK_LINE(227)
				break;
			}
			HX_STACK_LINE(227)
			int i = (_g16)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(228)
			::phoenix::Vector _g161 = ::phoenix::Vector_obj::__new((this->segment * i),(int)0,null(),null());		HX_STACK_VAR(_g161,"_g161");
			HX_STACK_LINE(228)
			::phoenix::geometry::Vertex _b = ::phoenix::geometry::Vertex_obj::__new(_g161,_color,null());		HX_STACK_VAR(_b,"_b");
			HX_STACK_LINE(229)
			this->graph_geometry->add(_b);
		}
	}
	HX_STACK_LINE(232)
	this->graph_geometry->set_primitive_type((int)3);
	HX_STACK_LINE(234)
	this->hide();
}
;
	return null();
}

//ProfilerBar_obj::~ProfilerBar_obj() { }

Dynamic ProfilerBar_obj::__CreateEmpty() { return  new ProfilerBar_obj; }
hx::ObjectPtr< ProfilerBar_obj > ProfilerBar_obj::__new(::String _name,Dynamic __o__max,::phoenix::Color _color)
{  hx::ObjectPtr< ProfilerBar_obj > result = new ProfilerBar_obj();
	result->__construct(_name,__o__max,_color);
	return result;}

Dynamic ProfilerBar_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ProfilerBar_obj > result = new ProfilerBar_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

Void ProfilerBar_obj::hide( ){
{
		HX_STACK_FRAME("luxe.debug._ProfilerDebugView.ProfilerBar","hide",0x235d62f1,"luxe.debug._ProfilerDebugView.ProfilerBar.hide","luxe/debug/ProfilerDebugView.hx",238,0xef83e3c4)
		HX_STACK_THIS(this)
		HX_STACK_LINE(239)
		this->visible = false;
		HX_STACK_LINE(240)
		this->bar_geometry->set_visible(false);
		HX_STACK_LINE(241)
		this->bg_geometry->set_visible(false);
		HX_STACK_LINE(242)
		this->graph_geometry->set_visible(false);
		HX_STACK_LINE(243)
		this->graphbg_geometry->set_visible(false);
		HX_STACK_LINE(244)
		this->text_item->set_visible(false);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ProfilerBar_obj,hide,(void))

Void ProfilerBar_obj::show( ){
{
		HX_STACK_FRAME("luxe.debug._ProfilerDebugView.ProfilerBar","show",0x2aa2032c,"luxe.debug._ProfilerDebugView.ProfilerBar.show","luxe/debug/ProfilerDebugView.hx",246,0xef83e3c4)
		HX_STACK_THIS(this)
		HX_STACK_LINE(247)
		this->visible = true;
		HX_STACK_LINE(248)
		this->bar_geometry->set_visible(true);
		HX_STACK_LINE(249)
		this->bg_geometry->set_visible(true);
		HX_STACK_LINE(250)
		this->graph_geometry->set_visible(true);
		HX_STACK_LINE(251)
		this->graphbg_geometry->set_visible(true);
		HX_STACK_LINE(252)
		this->text_item->set_visible(true);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ProfilerBar_obj,show,(void))

Float ProfilerBar_obj::set_ping( Float _v){
	HX_STACK_FRAME("luxe.debug._ProfilerDebugView.ProfilerBar","set_ping",0xa8c3791e,"luxe.debug._ProfilerDebugView.ProfilerBar.set_ping","luxe/debug/ProfilerDebugView.hx",255,0xef83e3c4)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_v,"_v")
	HX_STACK_LINE(257)
	Float _vv;		HX_STACK_VAR(_vv,"_vv");
	HX_STACK_LINE(257)
	{
		HX_STACK_LINE(257)
		Float n = ::Math_obj::pow((int)10,(int)4);		HX_STACK_VAR(n,"n");
		HX_STACK_LINE(257)
		int _g = ::Std_obj::_int(((_v * (int)1000) * n));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(257)
		_vv = (Float(_g) / Float(n));
	}
	HX_STACK_LINE(258)
	Float _p = (Float(_vv) / Float(this->max));		HX_STACK_VAR(_p,"_p");
	HX_STACK_LINE(261)
	{
		HX_STACK_LINE(261)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(261)
		int _g = this->history;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(261)
		while((true)){
			HX_STACK_LINE(261)
			if ((!(((_g1 < _g))))){
				HX_STACK_LINE(261)
				break;
			}
			HX_STACK_LINE(261)
			int i = (_g1)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(263)
			::phoenix::geometry::Vertex v = this->graph_geometry->vertices->__get(i).StaticCast< ::phoenix::geometry::Vertex >();		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(264)
			if (((i < (this->history - (int)1)))){
				HX_STACK_LINE(265)
				::phoenix::geometry::Vertex v1 = this->graph_geometry->vertices->__get((i + (int)1)).StaticCast< ::phoenix::geometry::Vertex >();		HX_STACK_VAR(v1,"v1");
				HX_STACK_LINE(266)
				if (((v1 != null()))){
					HX_STACK_LINE(267)
					{
						HX_STACK_LINE(267)
						::phoenix::Vector _this = v->pos;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(267)
						Float _y = ::Math_obj::floor(v1->pos->y);		HX_STACK_VAR(_y,"_y");
						HX_STACK_LINE(267)
						_this->y = _y;
						HX_STACK_LINE(267)
						if ((_this->_construct)){
							HX_STACK_LINE(267)
							_this->y;
						}
						else{
							HX_STACK_LINE(267)
							if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
								HX_STACK_LINE(267)
								_this->listen_y(_y);
							}
							HX_STACK_LINE(267)
							_this->y;
						}
					}
					HX_STACK_LINE(268)
					v->color = v1->color;
				}
			}
		}
	}
	HX_STACK_LINE(273)
	if (((_p > (int)1))){
		HX_STACK_LINE(274)
		_p = (int)1;
		HX_STACK_LINE(275)
		this->graph_geometry->vertices->__get((this->history - (int)1)).StaticCast< ::phoenix::geometry::Vertex >()->color = this->color_red;
	}
	else{
		HX_STACK_LINE(276)
		if (((_p < 0.2))){
			HX_STACK_LINE(277)
			this->graph_geometry->vertices->__get((this->history - (int)1)).StaticCast< ::phoenix::geometry::Vertex >()->color = this->color_green;
		}
		else{
			HX_STACK_LINE(279)
			this->graph_geometry->vertices->__get((this->history - (int)1)).StaticCast< ::phoenix::geometry::Vertex >()->color = this->color_normal;
		}
	}
	HX_STACK_LINE(282)
	if (((_p < 0.001))){
		HX_STACK_LINE(283)
		_p = 0.001;
	}
	HX_STACK_LINE(286)
	{
		HX_STACK_LINE(286)
		::phoenix::Vector _this = this->graph_geometry->vertices->__get((this->history - (int)1)).StaticCast< ::phoenix::geometry::Vertex >()->pos;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(286)
		Float _y = ::Math_obj::floor((this->height2 * ((1.0 - _p))));		HX_STACK_VAR(_y,"_y");
		HX_STACK_LINE(286)
		_this->y = _y;
		HX_STACK_LINE(286)
		if ((_this->_construct)){
			HX_STACK_LINE(286)
			_this->y;
		}
		else{
			HX_STACK_LINE(286)
			if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
				HX_STACK_LINE(286)
				_this->listen_y(_y);
			}
			HX_STACK_LINE(286)
			_this->y;
		}
	}
	HX_STACK_LINE(288)
	return this->ping = _v;
}


HX_DEFINE_DYNAMIC_FUNC1(ProfilerBar_obj,set_ping,return )

Float ProfilerBar_obj::set_value( Float _v){
	HX_STACK_FRAME("luxe.debug._ProfilerDebugView.ProfilerBar","set_value",0x7162cf45,"luxe.debug._ProfilerDebugView.ProfilerBar.set_value","luxe/debug/ProfilerDebugView.hx",291,0xef83e3c4)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_v,"_v")
	HX_STACK_LINE(292)
	Float _vv;		HX_STACK_VAR(_vv,"_vv");
	HX_STACK_LINE(292)
	{
		HX_STACK_LINE(292)
		Float n = ::Math_obj::pow((int)10,(int)4);		HX_STACK_VAR(n,"n");
		HX_STACK_LINE(292)
		int _g = ::Std_obj::_int(((_v * (int)1000) * n));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(292)
		_vv = (Float(_g) / Float(n));
	}
	HX_STACK_LINE(293)
	Float _p = (Float(_vv) / Float(this->max));		HX_STACK_VAR(_p,"_p");
	HX_STACK_LINE(294)
	if (((_p > (int)1))){
		HX_STACK_LINE(295)
		_p = (int)1;
		HX_STACK_LINE(296)
		this->bar_geometry->set_color(this->color_red);
	}
	else{
		HX_STACK_LINE(297)
		if (((_p < 0.15))){
			HX_STACK_LINE(298)
			this->bar_geometry->set_color(this->color_green);
		}
		else{
			HX_STACK_LINE(300)
			this->bar_geometry->set_color(this->color_normal);
		}
	}
	HX_STACK_LINE(303)
	if (((_p < 0.005))){
		HX_STACK_LINE(304)
		_p = 0.005;
	}
	HX_STACK_LINE(307)
	Float nx = (((this->width - (int)2)) * _p);		HX_STACK_VAR(nx,"nx");
	HX_STACK_LINE(309)
	::phoenix::Vector _g1 = ::phoenix::Vector_obj::__new(nx,(this->height - (int)2),null(),null());		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(309)
	this->bar_geometry->resize(_g1);
	HX_STACK_LINE(312)
	return this->value = _v;
}


HX_DEFINE_DYNAMIC_FUNC1(ProfilerBar_obj,set_value,return )

::phoenix::Vector ProfilerBar_obj::set_pos( ::phoenix::Vector _p){
	HX_STACK_FRAME("luxe.debug._ProfilerDebugView.ProfilerBar","set_pos",0x5dbe5068,"luxe.debug._ProfilerDebugView.ProfilerBar.set_pos","luxe/debug/ProfilerDebugView.hx",315,0xef83e3c4)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_p,"_p")
	HX_STACK_LINE(316)
	{
		HX_STACK_LINE(316)
		::phoenix::Spatial _this = this->bg_geometry->transform->local;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(316)
		_this->pos = _p;
		HX_STACK_LINE(316)
		if (((_p != null()))){
			HX_STACK_LINE(316)
			::phoenix::Vector_obj::Listen(_this->pos,_this->_pos_change_dyn());
			HX_STACK_LINE(316)
			if (((bool((_this->pos_changed != null())) && bool(!(_this->ignore_listeners))))){
				HX_STACK_LINE(316)
				_this->pos_changed(_this->pos);
			}
		}
		HX_STACK_LINE(316)
		_this->pos;
	}
	HX_STACK_LINE(317)
	{
		HX_STACK_LINE(317)
		::phoenix::Vector value = ::phoenix::Vector_obj::__new((_p->x + (int)1),(_p->y + (int)1),null(),null());		HX_STACK_VAR(value,"value");
		HX_STACK_LINE(317)
		{
			HX_STACK_LINE(317)
			::phoenix::Spatial _this = this->bar_geometry->transform->local;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(317)
			_this->pos = value;
			HX_STACK_LINE(317)
			if (((value != null()))){
				HX_STACK_LINE(317)
				::phoenix::Vector_obj::Listen(_this->pos,_this->_pos_change_dyn());
				HX_STACK_LINE(317)
				if (((bool((_this->pos_changed != null())) && bool(!(_this->ignore_listeners))))){
					HX_STACK_LINE(317)
					_this->pos_changed(_this->pos);
				}
			}
			HX_STACK_LINE(317)
			_this->pos;
		}
	}
	HX_STACK_LINE(318)
	::phoenix::Vector _g = ::phoenix::Vector_obj::__new(((_p->x + (this->width * (int)2)) + (int)10),(_p->y - (int)6),null(),null());		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(318)
	this->text_item->set_pos(_g);
	HX_STACK_LINE(319)
	{
		HX_STACK_LINE(319)
		::phoenix::Vector value = ::phoenix::Vector_obj::__new(((_p->x + this->width) + (int)2),(_p->y - (int)4),null(),null());		HX_STACK_VAR(value,"value");
		HX_STACK_LINE(319)
		{
			HX_STACK_LINE(319)
			::phoenix::Spatial _this = this->graphbg_geometry->transform->local;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(319)
			_this->pos = value;
			HX_STACK_LINE(319)
			if (((value != null()))){
				HX_STACK_LINE(319)
				::phoenix::Vector_obj::Listen(_this->pos,_this->_pos_change_dyn());
				HX_STACK_LINE(319)
				if (((bool((_this->pos_changed != null())) && bool(!(_this->ignore_listeners))))){
					HX_STACK_LINE(319)
					_this->pos_changed(_this->pos);
				}
			}
			HX_STACK_LINE(319)
			_this->pos;
		}
	}
	HX_STACK_LINE(320)
	{
		HX_STACK_LINE(320)
		::phoenix::Vector value = this->graphbg_geometry->transform->local->pos;		HX_STACK_VAR(value,"value");
		HX_STACK_LINE(320)
		{
			HX_STACK_LINE(320)
			::phoenix::Spatial _this = this->graph_geometry->transform->local;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(320)
			_this->pos = value;
			HX_STACK_LINE(320)
			if (((value != null()))){
				HX_STACK_LINE(320)
				::phoenix::Vector_obj::Listen(_this->pos,_this->_pos_change_dyn());
				HX_STACK_LINE(320)
				if (((bool((_this->pos_changed != null())) && bool(!(_this->ignore_listeners))))){
					HX_STACK_LINE(320)
					_this->pos_changed(_this->pos);
				}
			}
			HX_STACK_LINE(320)
			_this->pos;
		}
	}
	HX_STACK_LINE(321)
	return this->pos = _p;
}


HX_DEFINE_DYNAMIC_FUNC1(ProfilerBar_obj,set_pos,return )

::String ProfilerBar_obj::set_text( ::String _t){
	HX_STACK_FRAME("luxe.debug._ProfilerDebugView.ProfilerBar","set_text",0xab655359,"luxe.debug._ProfilerDebugView.ProfilerBar.set_text","luxe/debug/ProfilerDebugView.hx",324,0xef83e3c4)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_t,"_t")
	HX_STACK_LINE(325)
	this->text_item->set_text(((((((HX_CSTRING("") + this->name) + HX_CSTRING(" (")) + this->max) + HX_CSTRING("ms) | ")) + _t) + HX_CSTRING("ms")));
	HX_STACK_LINE(326)
	return this->text = _t;
}


HX_DEFINE_DYNAMIC_FUNC1(ProfilerBar_obj,set_text,return )


ProfilerBar_obj::ProfilerBar_obj()
{
}

void ProfilerBar_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ProfilerBar);
	HX_MARK_MEMBER_NAME(bar_geometry,"bar_geometry");
	HX_MARK_MEMBER_NAME(bg_geometry,"bg_geometry");
	HX_MARK_MEMBER_NAME(graphbg_geometry,"graphbg_geometry");
	HX_MARK_MEMBER_NAME(graph_geometry,"graph_geometry");
	HX_MARK_MEMBER_NAME(text_item,"text_item");
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(height2,"height2");
	HX_MARK_MEMBER_NAME(max,"max");
	HX_MARK_MEMBER_NAME(history,"history");
	HX_MARK_MEMBER_NAME(visible,"visible");
	HX_MARK_MEMBER_NAME(segment,"segment");
	HX_MARK_MEMBER_NAME(color_red,"color_red");
	HX_MARK_MEMBER_NAME(color_green,"color_green");
	HX_MARK_MEMBER_NAME(color_normal,"color_normal");
	HX_MARK_MEMBER_NAME(text,"text");
	HX_MARK_MEMBER_NAME(pos,"pos");
	HX_MARK_MEMBER_NAME(value,"value");
	HX_MARK_MEMBER_NAME(ping,"ping");
	HX_MARK_END_CLASS();
}

void ProfilerBar_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(bar_geometry,"bar_geometry");
	HX_VISIT_MEMBER_NAME(bg_geometry,"bg_geometry");
	HX_VISIT_MEMBER_NAME(graphbg_geometry,"graphbg_geometry");
	HX_VISIT_MEMBER_NAME(graph_geometry,"graph_geometry");
	HX_VISIT_MEMBER_NAME(text_item,"text_item");
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(width,"width");
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(height2,"height2");
	HX_VISIT_MEMBER_NAME(max,"max");
	HX_VISIT_MEMBER_NAME(history,"history");
	HX_VISIT_MEMBER_NAME(visible,"visible");
	HX_VISIT_MEMBER_NAME(segment,"segment");
	HX_VISIT_MEMBER_NAME(color_red,"color_red");
	HX_VISIT_MEMBER_NAME(color_green,"color_green");
	HX_VISIT_MEMBER_NAME(color_normal,"color_normal");
	HX_VISIT_MEMBER_NAME(text,"text");
	HX_VISIT_MEMBER_NAME(pos,"pos");
	HX_VISIT_MEMBER_NAME(value,"value");
	HX_VISIT_MEMBER_NAME(ping,"ping");
}

Dynamic ProfilerBar_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"max") ) { return max; }
		if (HX_FIELD_EQ(inName,"pos") ) { return pos; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return name; }
		if (HX_FIELD_EQ(inName,"text") ) { return text; }
		if (HX_FIELD_EQ(inName,"ping") ) { return ping; }
		if (HX_FIELD_EQ(inName,"hide") ) { return hide_dyn(); }
		if (HX_FIELD_EQ(inName,"show") ) { return show_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { return width; }
		if (HX_FIELD_EQ(inName,"value") ) { return value; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { return height; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"height2") ) { return height2; }
		if (HX_FIELD_EQ(inName,"history") ) { return history; }
		if (HX_FIELD_EQ(inName,"visible") ) { return visible; }
		if (HX_FIELD_EQ(inName,"segment") ) { return segment; }
		if (HX_FIELD_EQ(inName,"set_pos") ) { return set_pos_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"set_ping") ) { return set_ping_dyn(); }
		if (HX_FIELD_EQ(inName,"set_text") ) { return set_text_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"text_item") ) { return text_item; }
		if (HX_FIELD_EQ(inName,"color_red") ) { return color_red; }
		if (HX_FIELD_EQ(inName,"set_value") ) { return set_value_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"bg_geometry") ) { return bg_geometry; }
		if (HX_FIELD_EQ(inName,"color_green") ) { return color_green; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"bar_geometry") ) { return bar_geometry; }
		if (HX_FIELD_EQ(inName,"color_normal") ) { return color_normal; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"graph_geometry") ) { return graph_geometry; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"graphbg_geometry") ) { return graphbg_geometry; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ProfilerBar_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"max") ) { max=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"pos") ) { if (inCallProp) return set_pos(inValue);pos=inValue.Cast< ::phoenix::Vector >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"text") ) { if (inCallProp) return set_text(inValue);text=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ping") ) { if (inCallProp) return set_ping(inValue);ping=inValue.Cast< Float >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"value") ) { if (inCallProp) return set_value(inValue);value=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"height2") ) { height2=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"history") ) { history=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"visible") ) { visible=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"segment") ) { segment=inValue.Cast< Float >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"text_item") ) { text_item=inValue.Cast< ::luxe::Text >(); return inValue; }
		if (HX_FIELD_EQ(inName,"color_red") ) { color_red=inValue.Cast< ::phoenix::Color >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"bg_geometry") ) { bg_geometry=inValue.Cast< ::phoenix::geometry::QuadGeometry >(); return inValue; }
		if (HX_FIELD_EQ(inName,"color_green") ) { color_green=inValue.Cast< ::phoenix::Color >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"bar_geometry") ) { bar_geometry=inValue.Cast< ::phoenix::geometry::QuadGeometry >(); return inValue; }
		if (HX_FIELD_EQ(inName,"color_normal") ) { color_normal=inValue.Cast< ::phoenix::Color >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"graph_geometry") ) { graph_geometry=inValue.Cast< ::phoenix::geometry::Geometry >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"graphbg_geometry") ) { graphbg_geometry=inValue.Cast< ::phoenix::geometry::QuadGeometry >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ProfilerBar_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("bar_geometry"));
	outFields->push(HX_CSTRING("bg_geometry"));
	outFields->push(HX_CSTRING("graphbg_geometry"));
	outFields->push(HX_CSTRING("graph_geometry"));
	outFields->push(HX_CSTRING("text_item"));
	outFields->push(HX_CSTRING("name"));
	outFields->push(HX_CSTRING("width"));
	outFields->push(HX_CSTRING("height"));
	outFields->push(HX_CSTRING("height2"));
	outFields->push(HX_CSTRING("max"));
	outFields->push(HX_CSTRING("history"));
	outFields->push(HX_CSTRING("visible"));
	outFields->push(HX_CSTRING("segment"));
	outFields->push(HX_CSTRING("color_red"));
	outFields->push(HX_CSTRING("color_green"));
	outFields->push(HX_CSTRING("color_normal"));
	outFields->push(HX_CSTRING("text"));
	outFields->push(HX_CSTRING("pos"));
	outFields->push(HX_CSTRING("value"));
	outFields->push(HX_CSTRING("ping"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::phoenix::geometry::QuadGeometry*/ ,(int)offsetof(ProfilerBar_obj,bar_geometry),HX_CSTRING("bar_geometry")},
	{hx::fsObject /*::phoenix::geometry::QuadGeometry*/ ,(int)offsetof(ProfilerBar_obj,bg_geometry),HX_CSTRING("bg_geometry")},
	{hx::fsObject /*::phoenix::geometry::QuadGeometry*/ ,(int)offsetof(ProfilerBar_obj,graphbg_geometry),HX_CSTRING("graphbg_geometry")},
	{hx::fsObject /*::phoenix::geometry::Geometry*/ ,(int)offsetof(ProfilerBar_obj,graph_geometry),HX_CSTRING("graph_geometry")},
	{hx::fsObject /*::luxe::Text*/ ,(int)offsetof(ProfilerBar_obj,text_item),HX_CSTRING("text_item")},
	{hx::fsString,(int)offsetof(ProfilerBar_obj,name),HX_CSTRING("name")},
	{hx::fsFloat,(int)offsetof(ProfilerBar_obj,width),HX_CSTRING("width")},
	{hx::fsFloat,(int)offsetof(ProfilerBar_obj,height),HX_CSTRING("height")},
	{hx::fsFloat,(int)offsetof(ProfilerBar_obj,height2),HX_CSTRING("height2")},
	{hx::fsFloat,(int)offsetof(ProfilerBar_obj,max),HX_CSTRING("max")},
	{hx::fsInt,(int)offsetof(ProfilerBar_obj,history),HX_CSTRING("history")},
	{hx::fsBool,(int)offsetof(ProfilerBar_obj,visible),HX_CSTRING("visible")},
	{hx::fsFloat,(int)offsetof(ProfilerBar_obj,segment),HX_CSTRING("segment")},
	{hx::fsObject /*::phoenix::Color*/ ,(int)offsetof(ProfilerBar_obj,color_red),HX_CSTRING("color_red")},
	{hx::fsObject /*::phoenix::Color*/ ,(int)offsetof(ProfilerBar_obj,color_green),HX_CSTRING("color_green")},
	{hx::fsObject /*::phoenix::Color*/ ,(int)offsetof(ProfilerBar_obj,color_normal),HX_CSTRING("color_normal")},
	{hx::fsString,(int)offsetof(ProfilerBar_obj,text),HX_CSTRING("text")},
	{hx::fsObject /*::phoenix::Vector*/ ,(int)offsetof(ProfilerBar_obj,pos),HX_CSTRING("pos")},
	{hx::fsFloat,(int)offsetof(ProfilerBar_obj,value),HX_CSTRING("value")},
	{hx::fsFloat,(int)offsetof(ProfilerBar_obj,ping),HX_CSTRING("ping")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("bar_geometry"),
	HX_CSTRING("bg_geometry"),
	HX_CSTRING("graphbg_geometry"),
	HX_CSTRING("graph_geometry"),
	HX_CSTRING("text_item"),
	HX_CSTRING("name"),
	HX_CSTRING("width"),
	HX_CSTRING("height"),
	HX_CSTRING("height2"),
	HX_CSTRING("max"),
	HX_CSTRING("history"),
	HX_CSTRING("visible"),
	HX_CSTRING("segment"),
	HX_CSTRING("color_red"),
	HX_CSTRING("color_green"),
	HX_CSTRING("color_normal"),
	HX_CSTRING("text"),
	HX_CSTRING("pos"),
	HX_CSTRING("value"),
	HX_CSTRING("ping"),
	HX_CSTRING("hide"),
	HX_CSTRING("show"),
	HX_CSTRING("set_ping"),
	HX_CSTRING("set_value"),
	HX_CSTRING("set_pos"),
	HX_CSTRING("set_text"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ProfilerBar_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ProfilerBar_obj::__mClass,"__mClass");
};

#endif

Class ProfilerBar_obj::__mClass;

void ProfilerBar_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("luxe.debug._ProfilerDebugView.ProfilerBar"), hx::TCanCast< ProfilerBar_obj> ,sStaticFields,sMemberFields,
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

void ProfilerBar_obj::__boot()
{
}

} // end namespace luxe
} // end namespace debug
} // end namespace _ProfilerDebugView
