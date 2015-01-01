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
#ifndef INCLUDED_luxe_Draw
#include <luxe/Draw.h>
#endif
#ifndef INCLUDED_luxe_Emitter
#include <luxe/Emitter.h>
#endif
#ifndef INCLUDED_luxe_Objects
#include <luxe/Objects.h>
#endif
#ifndef INCLUDED_luxe_Screen
#include <luxe/Screen.h>
#endif
#ifndef INCLUDED_luxe_debug_BatcherDebugView
#include <luxe/debug/BatcherDebugView.h>
#endif
#ifndef INCLUDED_luxe_debug_DebugView
#include <luxe/debug/DebugView.h>
#endif
#ifndef INCLUDED_luxe_resource_Resource
#include <luxe/resource/Resource.h>
#endif
#ifndef INCLUDED_luxe_structural_BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry
#include <luxe/structural/BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry.h>
#endif
#ifndef INCLUDED_luxe_structural_BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry
#include <luxe/structural/BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry.h>
#endif
#ifndef INCLUDED_phoenix_Batcher
#include <phoenix/Batcher.h>
#endif
#ifndef INCLUDED_phoenix_Camera
#include <phoenix/Camera.h>
#endif
#ifndef INCLUDED_phoenix_Color
#include <phoenix/Color.h>
#endif
#ifndef INCLUDED_phoenix_Rectangle
#include <phoenix/Rectangle.h>
#endif
#ifndef INCLUDED_phoenix_Renderer
#include <phoenix/Renderer.h>
#endif
#ifndef INCLUDED_phoenix_Shader
#include <phoenix/Shader.h>
#endif
#ifndef INCLUDED_phoenix_Texture
#include <phoenix/Texture.h>
#endif
#ifndef INCLUDED_phoenix_Vector
#include <phoenix/Vector.h>
#endif
#ifndef INCLUDED_phoenix_geometry_CompositeGeometry
#include <phoenix/geometry/CompositeGeometry.h>
#endif
#ifndef INCLUDED_phoenix_geometry_Geometry
#include <phoenix/geometry/Geometry.h>
#endif
#ifndef INCLUDED_phoenix_geometry_GeometryKey
#include <phoenix/geometry/GeometryKey.h>
#endif
#ifndef INCLUDED_phoenix_geometry_LineGeometry
#include <phoenix/geometry/LineGeometry.h>
#endif
#ifndef INCLUDED_phoenix_geometry_RectangleGeometry
#include <phoenix/geometry/RectangleGeometry.h>
#endif
#ifndef INCLUDED_phoenix_geometry_TextGeometry
#include <phoenix/geometry/TextGeometry.h>
#endif
#ifndef INCLUDED_snow_platform_native_render_opengl_GLObject
#include <snow/platform/native/render/opengl/GLObject.h>
#endif
#ifndef INCLUDED_snow_platform_native_render_opengl_GLTexture
#include <snow/platform/native/render/opengl/GLTexture.h>
#endif
namespace luxe{
namespace debug{

Void BatcherDebugView_obj::__construct()
{
HX_STACK_FRAME("luxe.debug.BatcherDebugView","new",0xed05fff6,"luxe.debug.BatcherDebugView.new","luxe/debug/BatcherDebugView.hx",11,0xdc49bab8)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(63)
	this->as_immediate = false;
	HX_STACK_LINE(35)
	this->dragging = false;
	HX_STACK_LINE(14)
	super::__construct();
	HX_STACK_LINE(15)
	this->name = HX_CSTRING("Batcher Debug");
}
;
	return null();
}

//BatcherDebugView_obj::~BatcherDebugView_obj() { }

Dynamic BatcherDebugView_obj::__CreateEmpty() { return  new BatcherDebugView_obj; }
hx::ObjectPtr< BatcherDebugView_obj > BatcherDebugView_obj::__new()
{  hx::ObjectPtr< BatcherDebugView_obj > result = new BatcherDebugView_obj();
	result->__construct();
	return result;}

Dynamic BatcherDebugView_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< BatcherDebugView_obj > result = new BatcherDebugView_obj();
	result->__construct();
	return result;}

Void BatcherDebugView_obj::create( ){
{
		HX_STACK_FRAME("luxe.debug.BatcherDebugView","create",0x7eca9926,"luxe.debug.BatcherDebugView.create","luxe/debug/BatcherDebugView.hx",20,0xdc49bab8)
		HX_STACK_THIS(this)
		struct _Function_1_1{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/debug/BatcherDebugView.hx",24,0xdc49bab8)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("camera_name") , HX_CSTRING("batcher_debug_view"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(24)
		::phoenix::Camera _g = ::phoenix::Camera_obj::__new(_Function_1_1::Block());		HX_STACK_VAR(_g,"_g");
		struct _Function_1_2{
			inline static Dynamic Block( ::phoenix::Camera &_g){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/debug/BatcherDebugView.hx",22,0xdc49bab8)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("name") , HX_CSTRING("debug_batcher_view"),false);
					__result->Add(HX_CSTRING("camera") , _g,false);
					__result->Add(HX_CSTRING("layer") , (int)1000,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(22)
		Dynamic _g1 = _Function_1_2::Block(_g);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(22)
		::phoenix::Batcher _g2 = ::Luxe_obj::renderer->create_batcher(_g1);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(22)
		this->batcher = _g2;
	}
return null();
}


Void BatcherDebugView_obj::refresh( ){
{
		HX_STACK_FRAME("luxe.debug.BatcherDebugView","refresh",0x4e318c71,"luxe.debug.BatcherDebugView.refresh","luxe/debug/BatcherDebugView.hx",30,0xdc49bab8)
		HX_STACK_THIS(this)
		HX_STACK_LINE(31)
		this->clear_batcher_tree();
		HX_STACK_LINE(32)
		this->draw_batcher_tree();
	}
return null();
}


Void BatcherDebugView_obj::onmousedown( Dynamic e){
{
		HX_STACK_FRAME("luxe.debug.BatcherDebugView","onmousedown",0x5ec63d9e,"luxe.debug.BatcherDebugView.onmousedown","luxe/debug/BatcherDebugView.hx",39,0xdc49bab8)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(40)
		::phoenix::Vector _g;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(40)
		{
			HX_STACK_LINE(40)
			::phoenix::Vector _this = e->__Field(HX_CSTRING("pos"),true);		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(40)
			_g = ::phoenix::Vector_obj::__new(_this->x,_this->y,_this->z,_this->w);
		}
		HX_STACK_LINE(40)
		this->dragmstart = _g;
		HX_STACK_LINE(41)
		::phoenix::Vector _g1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(41)
		{
			HX_STACK_LINE(41)
			::phoenix::Vector _this = this->batcher->view->get_pos();		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(41)
			_g1 = ::phoenix::Vector_obj::__new(_this->x,_this->y,_this->z,_this->w);
		}
		HX_STACK_LINE(41)
		this->dragstart = _g1;
		HX_STACK_LINE(42)
		this->dragging = true;
	}
return null();
}


Void BatcherDebugView_obj::onmouseup( Dynamic e){
{
		HX_STACK_FRAME("luxe.debug.BatcherDebugView","onmouseup",0x175fa497,"luxe.debug.BatcherDebugView.onmouseup","luxe/debug/BatcherDebugView.hx",45,0xdc49bab8)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(45)
		this->dragging = false;
	}
return null();
}


Void BatcherDebugView_obj::onmousemove( Dynamic e){
{
		HX_STACK_FRAME("luxe.debug.BatcherDebugView","onmousemove",0x64b9284d,"luxe.debug.BatcherDebugView.onmousemove","luxe/debug/BatcherDebugView.hx",48,0xdc49bab8)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(48)
		if ((this->dragging)){
			HX_STACK_LINE(49)
			::phoenix::Vector diff;		HX_STACK_VAR(diff,"diff");
			HX_STACK_LINE(49)
			{
				HX_STACK_LINE(49)
				::phoenix::Vector a = e->__Field(HX_CSTRING("pos"),true);		HX_STACK_VAR(a,"a");
				HX_STACK_LINE(49)
				::phoenix::Vector b = this->dragmstart;		HX_STACK_VAR(b,"b");
				HX_STACK_LINE(49)
				diff = ::phoenix::Vector_obj::__new((a->x - b->x),(a->y - b->y),(a->z - b->z),null());
			}
			HX_STACK_LINE(50)
			::phoenix::Vector _g;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(50)
			{
				HX_STACK_LINE(50)
				::phoenix::Vector a = this->dragstart;		HX_STACK_VAR(a,"a");
				HX_STACK_LINE(50)
				_g = ::phoenix::Vector_obj::__new((a->x - diff->x),(a->y - diff->y),(a->z - diff->z),null());
			}
			HX_STACK_LINE(50)
			this->batcher->view->set_pos(_g);
		}
	}
return null();
}


Void BatcherDebugView_obj::onmousewheel( Dynamic e){
{
		HX_STACK_FRAME("luxe.debug.BatcherDebugView","onmousewheel",0x7a9e83df,"luxe.debug.BatcherDebugView.onmousewheel","luxe/debug/BatcherDebugView.hx",55,0xdc49bab8)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(55)
		if (((e->__Field(HX_CSTRING("y"),true) < (int)0))){
			HX_STACK_LINE(56)
			::phoenix::Camera _g = this->batcher->view;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(56)
			_g->set_zoom((_g->zoom - 0.1));
		}
		else{
			HX_STACK_LINE(58)
			::phoenix::Camera _g = this->batcher->view;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(58)
			_g->set_zoom((_g->zoom + 0.1));
		}
	}
return null();
}


Void BatcherDebugView_obj::clear_batcher_tree( ){
{
		HX_STACK_FRAME("luxe.debug.BatcherDebugView","clear_batcher_tree",0x9faccb92,"luxe.debug.BatcherDebugView.clear_batcher_tree","luxe/debug/BatcherDebugView.hx",66,0xdc49bab8)
		HX_STACK_THIS(this)
		HX_STACK_LINE(66)
		if (((this->_tree_geom != null()))){
			HX_STACK_LINE(67)
			this->_tree_geom->drop(null());
			HX_STACK_LINE(68)
			this->_tree_geom = null();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(BatcherDebugView_obj,clear_batcher_tree,(void))

::String BatcherDebugView_obj::keystr( ::phoenix::geometry::GeometryKey key,::phoenix::geometry::GeometryKey key2){
	HX_STACK_FRAME("luxe.debug.BatcherDebugView","keystr",0x42b5de9c,"luxe.debug.BatcherDebugView.keystr","luxe/debug/BatcherDebugView.hx",72,0xdc49bab8)
	HX_STACK_THIS(this)
	HX_STACK_ARG(key,"key")
	HX_STACK_ARG(key2,"key2")
	HX_STACK_LINE(76)
	::String _g = ::Std_obj::string(key->primitive_type);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(74)
	::String _g1 = (((((((HX_CSTRING("ts: ") + key->timestamp) + HX_CSTRING("\n")) + HX_CSTRING("seq: ")) + key->sequence) + HX_CSTRING("\n")) + HX_CSTRING("primitive_type: ")) + _g);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(74)
	::String _g2 = (_g1 + HX_CSTRING(" "));		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(76)
	::String _g3 = ::Std_obj::string(key->primitive_type);		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(74)
	::String _g4 = (_g2 + _g3);		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(74)
	::String _g5 = (_g4 + HX_CSTRING("\n"));		HX_STACK_VAR(_g5,"_g5");
	HX_STACK_LINE(74)
	::String _g6 = (_g5 + HX_CSTRING("texture: "));		HX_STACK_VAR(_g6,"_g6");
	HX_STACK_LINE(77)
	::String _g7;		HX_STACK_VAR(_g7,"_g7");
	HX_STACK_LINE(77)
	if (((key->texture == null()))){
		HX_STACK_LINE(77)
		_g7 = HX_CSTRING("null");
	}
	else{
		HX_STACK_LINE(77)
		_g7 = ::Std_obj::string(key->texture->texture);
	}
	HX_STACK_LINE(74)
	::String _g8 = (_g6 + _g7);		HX_STACK_VAR(_g8,"_g8");
	HX_STACK_LINE(74)
	::String _g9 = (_g8 + HX_CSTRING("\n"));		HX_STACK_VAR(_g9,"_g9");
	HX_STACK_LINE(74)
	::String _g10 = (_g9 + HX_CSTRING("texture id: "));		HX_STACK_VAR(_g10,"_g10");
	HX_STACK_LINE(74)
	::String _g11;		HX_STACK_VAR(_g11,"_g11");
	HX_STACK_LINE(74)
	_g11 = (_g10 + ((  (((key->texture == null()))) ? ::String(HX_CSTRING("null")) : ::String(key->texture->id) )));
	HX_STACK_LINE(74)
	::String _g12 = (_g11 + HX_CSTRING("\n"));		HX_STACK_VAR(_g12,"_g12");
	HX_STACK_LINE(74)
	::String _g13 = (_g12 + HX_CSTRING("shader: "));		HX_STACK_VAR(_g13,"_g13");
	HX_STACK_LINE(74)
	::String _g14;		HX_STACK_VAR(_g14,"_g14");
	HX_STACK_LINE(74)
	_g14 = (_g13 + ((  (((key->shader == null()))) ? ::String(HX_CSTRING("null")) : ::String(key->shader->id) )));
	HX_STACK_LINE(74)
	::String _g15 = (_g14 + HX_CSTRING("\n"));		HX_STACK_VAR(_g15,"_g15");
	HX_STACK_LINE(74)
	::String _g16 = (_g15 + HX_CSTRING("group: "));		HX_STACK_VAR(_g16,"_g16");
	HX_STACK_LINE(74)
	::String _g17 = (_g16 + key->group);		HX_STACK_VAR(_g17,"_g17");
	HX_STACK_LINE(74)
	::String _g18 = (_g17 + HX_CSTRING("\n"));		HX_STACK_VAR(_g18,"_g18");
	HX_STACK_LINE(74)
	::String _g19 = (_g18 + HX_CSTRING("depth: "));		HX_STACK_VAR(_g19,"_g19");
	HX_STACK_LINE(74)
	::String _g20 = (_g19 + key->depth);		HX_STACK_VAR(_g20,"_g20");
	HX_STACK_LINE(74)
	::String _g21 = (_g20 + HX_CSTRING("\n"));		HX_STACK_VAR(_g21,"_g21");
	HX_STACK_LINE(74)
	::String _g22 = (_g21 + HX_CSTRING("clip: "));		HX_STACK_VAR(_g22,"_g22");
	HX_STACK_LINE(82)
	::String _g23 = ::Std_obj::string(key->clip);		HX_STACK_VAR(_g23,"_g23");
	HX_STACK_LINE(74)
	return (_g22 + _g23);
}


HX_DEFINE_DYNAMIC_FUNC2(BatcherDebugView_obj,keystr,return )

Void BatcherDebugView_obj::draw_geom_node( bool l,::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry _leaf,::phoenix::Vector _p,hx::Null< Float >  __o__bbw){
Float _bbw = __o__bbw.Default(20);
	HX_STACK_FRAME("luxe.debug.BatcherDebugView","draw_geom_node",0xc8abfe94,"luxe.debug.BatcherDebugView.draw_geom_node","luxe/debug/BatcherDebugView.hx",85,0xdc49bab8)
	HX_STACK_THIS(this)
	HX_STACK_ARG(l,"l")
	HX_STACK_ARG(_leaf,"_leaf")
	HX_STACK_ARG(_p,"_p")
	HX_STACK_ARG(_bbw,"_bbw")
{
		HX_STACK_LINE(87)
		Float _bw = (int)128;		HX_STACK_VAR(_bw,"_bw");
		HX_STACK_LINE(88)
		Float _bwhalf = (Float(_bw) / Float((int)2));		HX_STACK_VAR(_bwhalf,"_bwhalf");
		HX_STACK_LINE(89)
		Float _bh = (int)128;		HX_STACK_VAR(_bh,"_bh");
		HX_STACK_LINE(91)
		::phoenix::geometry::Geometry _g = _leaf->value;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(93)
		::phoenix::Color c = ::phoenix::Color_obj::__new((int)1,(int)1,(int)1,0.4)->rgb((int)16777215);		HX_STACK_VAR(c,"c");
		HX_STACK_LINE(95)
		if ((_g->dropped)){
			HX_STACK_LINE(96)
			::phoenix::Color _g1 = ::phoenix::Color_obj::__new((int)1,(int)1,(int)1,(int)1)->rgb((int)13369344);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(96)
			c = _g1;
		}
		struct _Function_1_1{
			inline static Dynamic Block( Float &_bh,hx::ObjectPtr< ::luxe::debug::BatcherDebugView_obj > __this,::phoenix::Color &c,Float &_bwhalf,Float &_bw,::phoenix::Vector &_p){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/debug/BatcherDebugView.hx",100,0xdc49bab8)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("immediate") , __this->as_immediate,false);
					__result->Add(HX_CSTRING("x") , (_p->x - _bwhalf),false);
					__result->Add(HX_CSTRING("y") , _p->y,false);
					__result->Add(HX_CSTRING("w") , _bw,false);
					__result->Add(HX_CSTRING("h") , _bh,false);
					__result->Add(HX_CSTRING("color") , c,false);
					__result->Add(HX_CSTRING("batcher") , __this->batcher,false);
					__result->Add(HX_CSTRING("depth") , 999.4,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(100)
		::phoenix::geometry::RectangleGeometry _g1 = ::Luxe_obj::draw->rectangle(_Function_1_1::Block(_bh,this,c,_bwhalf,_bw,_p));		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(99)
		this->_tree_geom->add_geometry(_g1);
		HX_STACK_LINE(113)
		::phoenix::Rectangle _g2 = ::phoenix::Rectangle_obj::__new((_p->x - _bwhalf),_p->y,_bw,_bh);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(118)
		::String _g3 = this->keystr(_leaf->key,_g->key);		HX_STACK_VAR(_g3,"_g3");
		struct _Function_1_2{
			inline static Dynamic Block( hx::ObjectPtr< ::luxe::debug::BatcherDebugView_obj > __this,::phoenix::Color &c,::phoenix::Rectangle &_g2,::String &_g3){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/debug/BatcherDebugView.hx",111,0xdc49bab8)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("immediate") , __this->as_immediate,false);
					__result->Add(HX_CSTRING("bounds") , _g2,false);
					__result->Add(HX_CSTRING("point_size") , (int)13,false);
					__result->Add(HX_CSTRING("color") , c,false);
					__result->Add(HX_CSTRING("batcher") , __this->batcher,false);
					__result->Add(HX_CSTRING("depth") , 999.4,false);
					__result->Add(HX_CSTRING("text") , _g3,false);
					__result->Add(HX_CSTRING("align") , (int)2,false);
					__result->Add(HX_CSTRING("align_vertical") , (int)2,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(111)
		Dynamic _g4 = _Function_1_2::Block(this,c,_g2,_g3);		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(111)
		::phoenix::geometry::TextGeometry _g5 = ::Luxe_obj::draw->text(_g4);		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(110)
		this->_tree_geom->add_geometry(_g5);
		HX_STACK_LINE(124)
		::phoenix::Vector t;		HX_STACK_VAR(t,"t");
		HX_STACK_LINE(124)
		{
			HX_STACK_LINE(124)
			::phoenix::Vector _this = ::phoenix::Vector_obj::__new(_p->x,_p->y,_p->z,_p->w);		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(124)
			Float _x = _p->x;		HX_STACK_VAR(_x,"_x");
			HX_STACK_LINE(124)
			Float _y = (_p->y - (int)16);		HX_STACK_VAR(_y,"_y");
			HX_STACK_LINE(124)
			bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
			HX_STACK_LINE(124)
			_this->ignore_listeners = true;
			HX_STACK_LINE(124)
			{
				HX_STACK_LINE(124)
				_this->x = _x;
				HX_STACK_LINE(124)
				if ((_this->_construct)){
					HX_STACK_LINE(124)
					_this->x;
				}
				else{
					HX_STACK_LINE(124)
					if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
						HX_STACK_LINE(124)
						_this->listen_x(_x);
					}
					HX_STACK_LINE(124)
					_this->x;
				}
			}
			HX_STACK_LINE(124)
			{
				HX_STACK_LINE(124)
				_this->y = _y;
				HX_STACK_LINE(124)
				if ((_this->_construct)){
					HX_STACK_LINE(124)
					_this->y;
				}
				else{
					HX_STACK_LINE(124)
					if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
						HX_STACK_LINE(124)
						_this->listen_y(_y);
					}
					HX_STACK_LINE(124)
					_this->y;
				}
			}
			HX_STACK_LINE(124)
			_this->ignore_listeners = prev;
			HX_STACK_LINE(124)
			if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
				HX_STACK_LINE(124)
				_this->listen_x(_this->x);
			}
			HX_STACK_LINE(124)
			if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
				HX_STACK_LINE(124)
				_this->listen_y(_this->y);
			}
			HX_STACK_LINE(124)
			t = _this;
		}
		HX_STACK_LINE(125)
		::phoenix::Vector t2;		HX_STACK_VAR(t2,"t2");
		HX_STACK_LINE(125)
		{
			HX_STACK_LINE(125)
			::phoenix::Vector _this = ::phoenix::Vector_obj::__new(_p->x,_p->y,_p->z,_p->w);		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(125)
			Float _x = _p->x;		HX_STACK_VAR(_x,"_x");
			HX_STACK_LINE(125)
			Float _y = ((_p->y + _bw) + (int)2);		HX_STACK_VAR(_y,"_y");
			HX_STACK_LINE(125)
			bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
			HX_STACK_LINE(125)
			_this->ignore_listeners = true;
			HX_STACK_LINE(125)
			{
				HX_STACK_LINE(125)
				_this->x = _x;
				HX_STACK_LINE(125)
				if ((_this->_construct)){
					HX_STACK_LINE(125)
					_this->x;
				}
				else{
					HX_STACK_LINE(125)
					if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
						HX_STACK_LINE(125)
						_this->listen_x(_x);
					}
					HX_STACK_LINE(125)
					_this->x;
				}
			}
			HX_STACK_LINE(125)
			{
				HX_STACK_LINE(125)
				_this->y = _y;
				HX_STACK_LINE(125)
				if ((_this->_construct)){
					HX_STACK_LINE(125)
					_this->y;
				}
				else{
					HX_STACK_LINE(125)
					if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
						HX_STACK_LINE(125)
						_this->listen_y(_y);
					}
					HX_STACK_LINE(125)
					_this->y;
				}
			}
			HX_STACK_LINE(125)
			_this->ignore_listeners = prev;
			HX_STACK_LINE(125)
			if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
				HX_STACK_LINE(125)
				_this->listen_x(_this->x);
			}
			HX_STACK_LINE(125)
			if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
				HX_STACK_LINE(125)
				_this->listen_y(_this->y);
			}
			HX_STACK_LINE(125)
			t2 = _this;
		}
		HX_STACK_LINE(126)
		int talign = (int)2;		HX_STACK_VAR(talign,"talign");
		struct _Function_1_3{
			inline static Dynamic Block( hx::ObjectPtr< ::luxe::debug::BatcherDebugView_obj > __this,::phoenix::Color &c,::phoenix::geometry::Geometry &_g,::phoenix::Vector &t,int &talign){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/debug/BatcherDebugView.hx",133,0xdc49bab8)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("immediate") , __this->as_immediate,false);
					__result->Add(HX_CSTRING("pos") , t,false);
					__result->Add(HX_CSTRING("point_size") , (int)13,false);
					__result->Add(HX_CSTRING("color") , c,false);
					__result->Add(HX_CSTRING("batcher") , __this->batcher,false);
					__result->Add(HX_CSTRING("depth") , 999.4,false);
					__result->Add(HX_CSTRING("text") , _g->id,false);
					__result->Add(HX_CSTRING("align") , talign,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(133)
		::phoenix::geometry::TextGeometry _g6 = ::Luxe_obj::draw->text(_Function_1_3::Block(this,c,_g,t,talign));		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(132)
		this->_tree_geom->add_geometry(_g6);
		HX_STACK_LINE(145)
		::phoenix::Color c2 = ::phoenix::Color_obj::__new((int)1,(int)1,(int)1,0.4)->rgb((int)16750916);		HX_STACK_VAR(c2,"c2");
		HX_STACK_LINE(146)
		::String notes_l = HX_CSTRING("none");		HX_STACK_VAR(notes_l,"notes_l");
		HX_STACK_LINE(147)
		::String notes_r = HX_CSTRING("none");		HX_STACK_VAR(notes_r,"notes_r");
		HX_STACK_LINE(149)
		if (((_leaf->left != null()))){
			HX_STACK_LINE(150)
			notes_l = HX_CSTRING("node");
			HX_STACK_LINE(151)
			int compare = ::Luxe_obj::renderer->batcher->compare_rule(_leaf->key,_leaf->left->key);		HX_STACK_VAR(compare,"compare");
			HX_STACK_LINE(152)
			::String _g7 = ::Luxe_obj::renderer->batcher->compare_rule_to_string(compare);		HX_STACK_VAR(_g7,"_g7");
			HX_STACK_LINE(152)
			notes_l = _g7;
		}
		HX_STACK_LINE(155)
		if (((_leaf->right != null()))){
			HX_STACK_LINE(156)
			notes_r = HX_CSTRING("node");
			HX_STACK_LINE(157)
			int compare = ::Luxe_obj::renderer->batcher->compare_rule(_leaf->key,_leaf->right->key);		HX_STACK_VAR(compare,"compare");
			HX_STACK_LINE(158)
			::String _g8 = ::Luxe_obj::renderer->batcher->compare_rule_to_string(compare);		HX_STACK_VAR(_g8,"_g8");
			HX_STACK_LINE(158)
			notes_r = _g8;
		}
		struct _Function_1_4{
			inline static Dynamic Block( hx::ObjectPtr< ::luxe::debug::BatcherDebugView_obj > __this,::phoenix::Color &c2,::phoenix::Vector &t2,int &talign,::String &notes_l,::String &notes_r){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/debug/BatcherDebugView.hx",162,0xdc49bab8)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("immediate") , __this->as_immediate,false);
					__result->Add(HX_CSTRING("pos") , t2,false);
					__result->Add(HX_CSTRING("point_size") , (int)13,false);
					__result->Add(HX_CSTRING("color") , c2,false);
					__result->Add(HX_CSTRING("batcher") , __this->batcher,false);
					__result->Add(HX_CSTRING("depth") , 999.4,false);
					__result->Add(HX_CSTRING("text") , ((notes_l + HX_CSTRING(" / ")) + notes_r),false);
					__result->Add(HX_CSTRING("align") , talign,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(162)
		::phoenix::geometry::TextGeometry _g9 = ::Luxe_obj::draw->text(_Function_1_4::Block(this,c2,t2,talign,notes_l,notes_r));		HX_STACK_VAR(_g9,"_g9");
		HX_STACK_LINE(161)
		this->_tree_geom->add_geometry(_g9);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(BatcherDebugView_obj,draw_geom_node,(void))

Void BatcherDebugView_obj::draw_geom_leaf( bool L,::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry _leaf,::phoenix::Vector _p){
{
		HX_STACK_FRAME("luxe.debug.BatcherDebugView","draw_geom_leaf",0xc751f830,"luxe.debug.BatcherDebugView.draw_geom_leaf","luxe/debug/BatcherDebugView.hx",175,0xdc49bab8)
		HX_STACK_THIS(this)
		HX_STACK_ARG(L,"L")
		HX_STACK_ARG(_leaf,"_leaf")
		HX_STACK_ARG(_p,"_p")
		HX_STACK_LINE(177)
		if (((_leaf == null()))){
			HX_STACK_LINE(178)
			return null();
		}
		HX_STACK_LINE(181)
		Float _bw = (Float(_leaf->nodecount) / Float((int)20));		HX_STACK_VAR(_bw,"_bw");
		HX_STACK_LINE(182)
		Float _bwb = (_leaf->nodecount * (int)25);		HX_STACK_VAR(_bwb,"_bwb");
		HX_STACK_LINE(183)
		Float _bh = (int)128;		HX_STACK_VAR(_bh,"_bh");
		HX_STACK_LINE(184)
		Float _bh2 = (int)148;		HX_STACK_VAR(_bh2,"_bh2");
		HX_STACK_LINE(185)
		Float _bwhalf = (Float(_bw) / Float((int)2));		HX_STACK_VAR(_bwhalf,"_bwhalf");
		HX_STACK_LINE(187)
		::phoenix::Color c = ::phoenix::Color_obj::__new((int)1,(int)1,(int)1,0.4)->rgb((int)16777215);		HX_STACK_VAR(c,"c");
		HX_STACK_LINE(189)
		if (((_leaf != null()))){
			HX_STACK_LINE(191)
			this->draw_geom_node(L,_leaf,_p,_bw);
			HX_STACK_LINE(193)
			if (((_leaf->left != null()))){
				HX_STACK_LINE(195)
				int _g = ::Luxe_obj::renderer->batcher->geometry_compare(_leaf->left->key,_leaf->key);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(195)
				if (((_g < (int)0))){
					HX_STACK_LINE(196)
					::phoenix::Color _g1 = ::phoenix::Color_obj::__new((int)1,(int)1,(int)1,(int)1)->rgb((int)52224);		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(196)
					c = _g1;
				}
				else{
					HX_STACK_LINE(198)
					::phoenix::Color _g2 = ::phoenix::Color_obj::__new((int)1,(int)1,(int)1,(int)1)->rgb((int)13369344);		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(198)
					c = _g2;
				}
				HX_STACK_LINE(204)
				::phoenix::Vector _g3 = ::phoenix::Vector_obj::__new((_p->x - _bwhalf),(_p->y + _bh),null(),null());		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(205)
				::phoenix::Vector _g4 = ::phoenix::Vector_obj::__new((_p->x - _bwb),(_p->y + _bh2),null(),null());		HX_STACK_VAR(_g4,"_g4");
				struct _Function_3_1{
					inline static Dynamic Block( hx::ObjectPtr< ::luxe::debug::BatcherDebugView_obj > __this,::phoenix::Color &c,::phoenix::Vector &_g4,::phoenix::Vector &_g3){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/debug/BatcherDebugView.hx",202,0xdc49bab8)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_CSTRING("immediate") , __this->as_immediate,false);
							__result->Add(HX_CSTRING("p0") , _g3,false);
							__result->Add(HX_CSTRING("p1") , _g4,false);
							__result->Add(HX_CSTRING("color") , c,false);
							__result->Add(HX_CSTRING("batcher") , __this->batcher,false);
							__result->Add(HX_CSTRING("depth") , 999.4,false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(202)
				Dynamic _g5 = _Function_3_1::Block(this,c,_g4,_g3);		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(202)
				::phoenix::geometry::LineGeometry _g6 = ::Luxe_obj::draw->line(_g5);		HX_STACK_VAR(_g6,"_g6");
				HX_STACK_LINE(201)
				this->_tree_geom->add_geometry(_g6);
				HX_STACK_LINE(212)
				::phoenix::Vector _g7 = ::phoenix::Vector_obj::__new((_p->x - _bwb),(_p->y + _bh2),null(),null());		HX_STACK_VAR(_g7,"_g7");
				HX_STACK_LINE(212)
				this->draw_geom_leaf(true,_leaf->left,_g7);
			}
			HX_STACK_LINE(214)
			if (((_leaf->right != null()))){
				HX_STACK_LINE(216)
				int _g8 = ::Luxe_obj::renderer->batcher->geometry_compare(_leaf->right->key,_leaf->key);		HX_STACK_VAR(_g8,"_g8");
				HX_STACK_LINE(216)
				if (((_g8 > (int)0))){
					HX_STACK_LINE(217)
					::phoenix::Color _g9 = ::phoenix::Color_obj::__new((int)1,(int)1,(int)1,(int)1)->rgb((int)52224);		HX_STACK_VAR(_g9,"_g9");
					HX_STACK_LINE(217)
					c = _g9;
				}
				else{
					HX_STACK_LINE(219)
					::phoenix::Color _g10 = ::phoenix::Color_obj::__new((int)1,(int)1,(int)1,(int)1)->rgb((int)13369344);		HX_STACK_VAR(_g10,"_g10");
					HX_STACK_LINE(219)
					c = _g10;
				}
				HX_STACK_LINE(225)
				::phoenix::Vector _g11 = ::phoenix::Vector_obj::__new((_p->x + _bwhalf),(_p->y + _bh),null(),null());		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(226)
				::phoenix::Vector _g12 = ::phoenix::Vector_obj::__new((_p->x + _bwb),(_p->y + _bh2),null(),null());		HX_STACK_VAR(_g12,"_g12");
				struct _Function_3_1{
					inline static Dynamic Block( hx::ObjectPtr< ::luxe::debug::BatcherDebugView_obj > __this,::phoenix::Vector &_g11,::phoenix::Color &c,::phoenix::Vector &_g12){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/debug/BatcherDebugView.hx",223,0xdc49bab8)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_CSTRING("immediate") , __this->as_immediate,false);
							__result->Add(HX_CSTRING("p0") , _g11,false);
							__result->Add(HX_CSTRING("p1") , _g12,false);
							__result->Add(HX_CSTRING("color") , c,false);
							__result->Add(HX_CSTRING("batcher") , __this->batcher,false);
							__result->Add(HX_CSTRING("depth") , 999.4,false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(223)
				Dynamic _g13 = _Function_3_1::Block(this,_g11,c,_g12);		HX_STACK_VAR(_g13,"_g13");
				HX_STACK_LINE(223)
				::phoenix::geometry::LineGeometry _g14 = ::Luxe_obj::draw->line(_g13);		HX_STACK_VAR(_g14,"_g14");
				HX_STACK_LINE(222)
				this->_tree_geom->add_geometry(_g14);
				HX_STACK_LINE(233)
				::phoenix::Vector _g15 = ::phoenix::Vector_obj::__new((_p->x + _bwb),(_p->y + _bh2),null(),null());		HX_STACK_VAR(_g15,"_g15");
				HX_STACK_LINE(233)
				this->draw_geom_leaf(false,_leaf->right,_g15);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(BatcherDebugView_obj,draw_geom_leaf,(void))

Void BatcherDebugView_obj::draw_batcher_tree( ){
{
		HX_STACK_FRAME("luxe.debug.BatcherDebugView","draw_batcher_tree",0x1ae0d3a7,"luxe.debug.BatcherDebugView.draw_batcher_tree","luxe/debug/BatcherDebugView.hx",238,0xdc49bab8)
		HX_STACK_THIS(this)
		HX_STACK_LINE(240)
		this->_tree_geom = null();
		struct _Function_1_1{
			inline static Dynamic Block( hx::ObjectPtr< ::luxe::debug::BatcherDebugView_obj > __this){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/debug/BatcherDebugView.hx",241,0xdc49bab8)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("batcher") , __this->batcher,false);
					__result->Add(HX_CSTRING("immediate") , __this->as_immediate,false);
					__result->Add(HX_CSTRING("depth") , 999.4,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(241)
		::phoenix::geometry::CompositeGeometry _g = ::phoenix::geometry::CompositeGeometry_obj::__new(_Function_1_1::Block(this));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(241)
		this->_tree_geom = _g;
		HX_STACK_LINE(248)
		::phoenix::Vector _p = ::phoenix::Vector_obj::__new((Float(::Luxe_obj::get_screen()->w) / Float((int)2)),((::Luxe_obj::debug->padding->y * (int)2) + (int)10),null(),null());		HX_STACK_VAR(_p,"_p");
		HX_STACK_LINE(250)
		::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry _node = ::Luxe_obj::renderer->batcher->geometry->root;		HX_STACK_VAR(_node,"_node");
		HX_STACK_LINE(252)
		this->draw_geom_leaf(true,_node,_p);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(BatcherDebugView_obj,draw_batcher_tree,(void))

Void BatcherDebugView_obj::process( ){
{
		HX_STACK_FRAME("luxe.debug.BatcherDebugView","process",0x525b5505,"luxe.debug.BatcherDebugView.process","luxe/debug/BatcherDebugView.hx",257,0xdc49bab8)
		HX_STACK_THIS(this)
		HX_STACK_LINE(257)
		if ((this->visible)){
			HX_STACK_LINE(258)
			if ((::Luxe_obj::renderer->batcher->tree_changed)){
				HX_STACK_LINE(259)
				this->refresh();
			}
		}
	}
return null();
}


Void BatcherDebugView_obj::show( ){
{
		HX_STACK_FRAME("luxe.debug.BatcherDebugView","show",0x7b8a48a7,"luxe.debug.BatcherDebugView.show","luxe/debug/BatcherDebugView.hx",264,0xdc49bab8)
		HX_STACK_THIS(this)
		HX_STACK_LINE(265)
		this->super::show();
		HX_STACK_LINE(266)
		this->refresh();
	}
return null();
}


Void BatcherDebugView_obj::hide( ){
{
		HX_STACK_FRAME("luxe.debug.BatcherDebugView","hide",0x7445a86c,"luxe.debug.BatcherDebugView.hide","luxe/debug/BatcherDebugView.hx",269,0xdc49bab8)
		HX_STACK_THIS(this)
		HX_STACK_LINE(270)
		this->super::hide();
		HX_STACK_LINE(271)
		this->clear_batcher_tree();
	}
return null();
}



BatcherDebugView_obj::BatcherDebugView_obj()
{
}

void BatcherDebugView_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BatcherDebugView);
	HX_MARK_MEMBER_NAME(batcher,"batcher");
	HX_MARK_MEMBER_NAME(dragging,"dragging");
	HX_MARK_MEMBER_NAME(dragstart,"dragstart");
	HX_MARK_MEMBER_NAME(dragmstart,"dragmstart");
	HX_MARK_MEMBER_NAME(_tree_geom,"_tree_geom");
	HX_MARK_MEMBER_NAME(as_immediate,"as_immediate");
	::luxe::Objects_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void BatcherDebugView_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(batcher,"batcher");
	HX_VISIT_MEMBER_NAME(dragging,"dragging");
	HX_VISIT_MEMBER_NAME(dragstart,"dragstart");
	HX_VISIT_MEMBER_NAME(dragmstart,"dragmstart");
	HX_VISIT_MEMBER_NAME(_tree_geom,"_tree_geom");
	HX_VISIT_MEMBER_NAME(as_immediate,"as_immediate");
	::luxe::Objects_obj::__Visit(HX_VISIT_ARG);
}

Dynamic BatcherDebugView_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"show") ) { return show_dyn(); }
		if (HX_FIELD_EQ(inName,"hide") ) { return hide_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		if (HX_FIELD_EQ(inName,"keystr") ) { return keystr_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"batcher") ) { return batcher; }
		if (HX_FIELD_EQ(inName,"refresh") ) { return refresh_dyn(); }
		if (HX_FIELD_EQ(inName,"process") ) { return process_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"dragging") ) { return dragging; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"dragstart") ) { return dragstart; }
		if (HX_FIELD_EQ(inName,"onmouseup") ) { return onmouseup_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"dragmstart") ) { return dragmstart; }
		if (HX_FIELD_EQ(inName,"_tree_geom") ) { return _tree_geom; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"onmousedown") ) { return onmousedown_dyn(); }
		if (HX_FIELD_EQ(inName,"onmousemove") ) { return onmousemove_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"onmousewheel") ) { return onmousewheel_dyn(); }
		if (HX_FIELD_EQ(inName,"as_immediate") ) { return as_immediate; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"draw_geom_node") ) { return draw_geom_node_dyn(); }
		if (HX_FIELD_EQ(inName,"draw_geom_leaf") ) { return draw_geom_leaf_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"draw_batcher_tree") ) { return draw_batcher_tree_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"clear_batcher_tree") ) { return clear_batcher_tree_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic BatcherDebugView_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"batcher") ) { batcher=inValue.Cast< ::phoenix::Batcher >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"dragging") ) { dragging=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"dragstart") ) { dragstart=inValue.Cast< ::phoenix::Vector >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"dragmstart") ) { dragmstart=inValue.Cast< ::phoenix::Vector >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_tree_geom") ) { _tree_geom=inValue.Cast< ::phoenix::geometry::CompositeGeometry >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"as_immediate") ) { as_immediate=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void BatcherDebugView_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("batcher"));
	outFields->push(HX_CSTRING("dragging"));
	outFields->push(HX_CSTRING("dragstart"));
	outFields->push(HX_CSTRING("dragmstart"));
	outFields->push(HX_CSTRING("_tree_geom"));
	outFields->push(HX_CSTRING("as_immediate"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::phoenix::Batcher*/ ,(int)offsetof(BatcherDebugView_obj,batcher),HX_CSTRING("batcher")},
	{hx::fsBool,(int)offsetof(BatcherDebugView_obj,dragging),HX_CSTRING("dragging")},
	{hx::fsObject /*::phoenix::Vector*/ ,(int)offsetof(BatcherDebugView_obj,dragstart),HX_CSTRING("dragstart")},
	{hx::fsObject /*::phoenix::Vector*/ ,(int)offsetof(BatcherDebugView_obj,dragmstart),HX_CSTRING("dragmstart")},
	{hx::fsObject /*::phoenix::geometry::CompositeGeometry*/ ,(int)offsetof(BatcherDebugView_obj,_tree_geom),HX_CSTRING("_tree_geom")},
	{hx::fsBool,(int)offsetof(BatcherDebugView_obj,as_immediate),HX_CSTRING("as_immediate")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("batcher"),
	HX_CSTRING("create"),
	HX_CSTRING("refresh"),
	HX_CSTRING("dragging"),
	HX_CSTRING("dragstart"),
	HX_CSTRING("dragmstart"),
	HX_CSTRING("onmousedown"),
	HX_CSTRING("onmouseup"),
	HX_CSTRING("onmousemove"),
	HX_CSTRING("onmousewheel"),
	HX_CSTRING("_tree_geom"),
	HX_CSTRING("as_immediate"),
	HX_CSTRING("clear_batcher_tree"),
	HX_CSTRING("keystr"),
	HX_CSTRING("draw_geom_node"),
	HX_CSTRING("draw_geom_leaf"),
	HX_CSTRING("draw_batcher_tree"),
	HX_CSTRING("process"),
	HX_CSTRING("show"),
	HX_CSTRING("hide"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BatcherDebugView_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BatcherDebugView_obj::__mClass,"__mClass");
};

#endif

Class BatcherDebugView_obj::__mClass;

void BatcherDebugView_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("luxe.debug.BatcherDebugView"), hx::TCanCast< BatcherDebugView_obj> ,sStaticFields,sMemberFields,
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

void BatcherDebugView_obj::__boot()
{
}

} // end namespace luxe
} // end namespace debug
