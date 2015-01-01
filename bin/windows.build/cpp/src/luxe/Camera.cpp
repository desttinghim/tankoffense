#include <hxcpp.h>

#ifndef INCLUDED_Luxe
#include <Luxe.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_luxe_Camera
#include <luxe/Camera.h>
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
#ifndef INCLUDED_luxe_SizeMode
#include <luxe/SizeMode.h>
#endif
#ifndef INCLUDED_luxe_tween_Actuate
#include <luxe/tween/Actuate.h>
#endif
#ifndef INCLUDED_luxe_tween_actuators_IGenericActuator
#include <luxe/tween/actuators/IGenericActuator.h>
#endif
#ifndef INCLUDED_luxe_tween_easing_IEasing
#include <luxe/tween/easing/IEasing.h>
#endif
#ifndef INCLUDED_luxe_tween_easing_Quad
#include <luxe/tween/easing/Quad.h>
#endif
#ifndef INCLUDED_luxe_utils_GeometryUtils
#include <luxe/utils/GeometryUtils.h>
#endif
#ifndef INCLUDED_luxe_utils_Utils
#include <luxe/utils/Utils.h>
#endif
#ifndef INCLUDED_phoenix_Camera
#include <phoenix/Camera.h>
#endif
#ifndef INCLUDED_phoenix_Quaternion
#include <phoenix/Quaternion.h>
#endif
#ifndef INCLUDED_phoenix_Rectangle
#include <phoenix/Rectangle.h>
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
namespace luxe{

Void Camera_obj::__construct(Dynamic options)
{
HX_STACK_FRAME("luxe.Camera","new",0x2ec87bef,"luxe.Camera.new","luxe/Camera.hx",29,0xd52a0e40)
HX_STACK_THIS(this)
HX_STACK_ARG(options,"options")
{
	HX_STACK_LINE(57)
	this->minimum_shake = 0.1;
	HX_STACK_LINE(55)
	this->shaking = false;
	HX_STACK_LINE(70)
	::phoenix::Vector _g = ::phoenix::Vector_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(70)
	this->_size_factor = _g;
	HX_STACK_LINE(71)
	::phoenix::Vector _g1 = ::phoenix::Vector_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(71)
	this->_rotation_radian = _g1;
	HX_STACK_LINE(72)
	::phoenix::Quaternion _g2 = ::phoenix::Quaternion_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(72)
	this->_rotation_cache = _g2;
	HX_STACK_LINE(73)
	this->set_size_mode(::luxe::SizeMode_obj::fit);
	HX_STACK_LINE(75)
	::String _name = HX_CSTRING("untitled camera");		HX_STACK_VAR(_name,"_name");
	HX_STACK_LINE(77)
	if (((options != null()))){
		HX_STACK_LINE(78)
		if (((options->__Field(HX_CSTRING("name"),true) != null()))){
			HX_STACK_LINE(79)
			_name = options->__Field(HX_CSTRING("name"),true);
		}
	}
	else{
		struct _Function_2_1{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/Camera.hx",82,0xd52a0e40)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("no_scene") , false,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(82)
		options = _Function_2_1::Block();
	}
	struct _Function_1_1{
		inline static Dynamic Block( ::String &_name,Dynamic &options){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/Camera.hx",88,0xd52a0e40)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("name") , _name,false);
				__result->Add(HX_CSTRING("no_scene") , options->__Field(HX_CSTRING("no_scene"),true),false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(88)
	super::__construct(_Function_1_1::Block(_name,options));
	HX_STACK_LINE(94)
	::phoenix::Camera _g3;		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(94)
	if (((options->__Field(HX_CSTRING("view"),true) == null()))){
		HX_STACK_LINE(94)
		_g3 = ::phoenix::Camera_obj::__new(options);
	}
	else{
		HX_STACK_LINE(94)
		_g3 = options->__Field(HX_CSTRING("view"),true);
	}
	HX_STACK_LINE(94)
	this->view = _g3;
	HX_STACK_LINE(97)
	::phoenix::Vector _g4 = this->view->get_pos();		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(97)
	this->_final_pos = _g4;
}
;
	return null();
}

//Camera_obj::~Camera_obj() { }

Dynamic Camera_obj::__CreateEmpty() { return  new Camera_obj; }
hx::ObjectPtr< Camera_obj > Camera_obj::__new(Dynamic options)
{  hx::ObjectPtr< Camera_obj > result = new Camera_obj();
	result->__construct(options);
	return result;}

Dynamic Camera_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Camera_obj > result = new Camera_obj();
	result->__construct(inArgs[0]);
	return result;}

::phoenix::Rectangle Camera_obj::get_viewport( ){
	HX_STACK_FRAME("luxe.Camera","get_viewport",0xdc75eb00,"luxe.Camera.get_viewport","luxe/Camera.hx",102,0xd52a0e40)
	HX_STACK_THIS(this)
	HX_STACK_LINE(102)
	return this->view->get_viewport();
}


HX_DEFINE_DYNAMIC_FUNC0(Camera_obj,get_viewport,return )

::phoenix::Rectangle Camera_obj::set_viewport( ::phoenix::Rectangle _v){
	HX_STACK_FRAME("luxe.Camera","set_viewport",0xf16f0e74,"luxe.Camera.set_viewport","luxe/Camera.hx",106,0xd52a0e40)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_v,"_v")
	HX_STACK_LINE(106)
	return this->view->set_viewport(_v);
}


HX_DEFINE_DYNAMIC_FUNC1(Camera_obj,set_viewport,return )

::phoenix::Vector Camera_obj::get_center( ){
	HX_STACK_FRAME("luxe.Camera","get_center",0xe3d709ef,"luxe.Camera.get_center","luxe/Camera.hx",110,0xd52a0e40)
	HX_STACK_THIS(this)
	HX_STACK_LINE(110)
	return this->view->get_center();
}


HX_DEFINE_DYNAMIC_FUNC0(Camera_obj,get_center,return )

::phoenix::Vector Camera_obj::set_center( ::phoenix::Vector _c){
	HX_STACK_FRAME("luxe.Camera","set_center",0xe754a863,"luxe.Camera.set_center","luxe/Camera.hx",113,0xd52a0e40)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_c,"_c")
	HX_STACK_LINE(115)
	::phoenix::Vector _g = ::phoenix::Vector_obj::__new((_c->x - (Float(this->get_viewport()->w) / Float((int)2))),(_c->y - (Float(this->get_viewport()->h) / Float((int)2))),null(),null());		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(115)
	this->set_pos(_g);
	HX_STACK_LINE(116)
	return this->view->set_center(_c);
}


HX_DEFINE_DYNAMIC_FUNC1(Camera_obj,set_center,return )

Float Camera_obj::get_minimum_zoom( ){
	HX_STACK_FRAME("luxe.Camera","get_minimum_zoom",0x56a621fe,"luxe.Camera.get_minimum_zoom","luxe/Camera.hx",121,0xd52a0e40)
	HX_STACK_THIS(this)
	HX_STACK_LINE(121)
	return this->view->minimum_zoom;
}


HX_DEFINE_DYNAMIC_FUNC0(Camera_obj,get_minimum_zoom,return )

Float Camera_obj::set_minimum_zoom( Float _m){
	HX_STACK_FRAME("luxe.Camera","set_minimum_zoom",0xace80f72,"luxe.Camera.set_minimum_zoom","luxe/Camera.hx",125,0xd52a0e40)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_m,"_m")
	HX_STACK_LINE(125)
	return this->view->minimum_zoom = _m;
}


HX_DEFINE_DYNAMIC_FUNC1(Camera_obj,set_minimum_zoom,return )

Float Camera_obj::get_zoom( ){
	HX_STACK_FRAME("luxe.Camera","get_zoom",0xf17b6cad,"luxe.Camera.get_zoom","luxe/Camera.hx",129,0xd52a0e40)
	HX_STACK_THIS(this)
	HX_STACK_LINE(129)
	return this->view->zoom;
}


HX_DEFINE_DYNAMIC_FUNC0(Camera_obj,get_zoom,return )

Float Camera_obj::set_zoom( Float _z){
	HX_STACK_FRAME("luxe.Camera","set_zoom",0x9fd8c621,"luxe.Camera.set_zoom","luxe/Camera.hx",132,0xd52a0e40)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_z,"_z")
	HX_STACK_LINE(135)
	this->view->set_zoom(_z);
	HX_STACK_LINE(138)
	::phoenix::Vector _g = this->get_size();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(138)
	if (((_g != null()))){
		HX_STACK_LINE(139)
		{
			HX_STACK_LINE(139)
			::phoenix::Vector _g1 = this->view->get_scale();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(139)
			{
				HX_STACK_LINE(139)
				Float _x = (_g1->x * ((Float((int)1) / Float(this->_size_factor->x))));		HX_STACK_VAR(_x,"_x");
				HX_STACK_LINE(139)
				_g1->x = _x;
				HX_STACK_LINE(139)
				if ((_g1->_construct)){
					HX_STACK_LINE(139)
					_g1->x;
				}
				else{
					HX_STACK_LINE(139)
					if (((bool((_g1->listen_x != null())) && bool(!(_g1->ignore_listeners))))){
						HX_STACK_LINE(139)
						_g1->listen_x(_x);
					}
					HX_STACK_LINE(139)
					_g1->x;
				}
			}
		}
		HX_STACK_LINE(140)
		{
			HX_STACK_LINE(140)
			::phoenix::Vector _g1 = this->view->get_scale();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(140)
			{
				HX_STACK_LINE(140)
				Float _y = (_g1->y * ((Float((int)1) / Float(this->_size_factor->y))));		HX_STACK_VAR(_y,"_y");
				HX_STACK_LINE(140)
				_g1->y = _y;
				HX_STACK_LINE(140)
				if ((_g1->_construct)){
					HX_STACK_LINE(140)
					_g1->y;
				}
				else{
					HX_STACK_LINE(140)
					if (((bool((_g1->listen_y != null())) && bool(!(_g1->ignore_listeners))))){
						HX_STACK_LINE(140)
						_g1->listen_y(_y);
					}
					HX_STACK_LINE(140)
					_g1->y;
				}
			}
		}
	}
	HX_STACK_LINE(143)
	return this->view->zoom;
}


HX_DEFINE_DYNAMIC_FUNC1(Camera_obj,set_zoom,return )

::phoenix::Vector Camera_obj::get_size( ){
	HX_STACK_FRAME("luxe.Camera","get_size",0xecd66a5b,"luxe.Camera.get_size","luxe/Camera.hx",148,0xd52a0e40)
	HX_STACK_THIS(this)
	HX_STACK_LINE(148)
	return this->size;
}


HX_DEFINE_DYNAMIC_FUNC0(Camera_obj,get_size,return )

::luxe::SizeMode Camera_obj::get_size_mode( ){
	HX_STACK_FRAME("luxe.Camera","get_size_mode",0xfd951b07,"luxe.Camera.get_size_mode","luxe/Camera.hx",152,0xd52a0e40)
	HX_STACK_THIS(this)
	HX_STACK_LINE(152)
	return this->size_mode;
}


HX_DEFINE_DYNAMIC_FUNC0(Camera_obj,get_size_mode,return )

::luxe::SizeMode Camera_obj::set_size_mode( ::luxe::SizeMode _m){
	HX_STACK_FRAME("luxe.Camera","set_size_mode",0x429afd13,"luxe.Camera.set_size_mode","luxe/Camera.hx",155,0xd52a0e40)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_m,"_m")
	HX_STACK_LINE(157)
	::luxe::SizeMode _g = this->get_size_mode();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(157)
	if (((_g != null()))){
		HX_STACK_LINE(158)
		this->size_mode = _m;
		HX_STACK_LINE(159)
		::phoenix::Vector _g1 = this->get_size();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(159)
		if (((_g1 != null()))){
			HX_STACK_LINE(160)
			::phoenix::Vector _g2 = this->get_size();		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(160)
			this->set_size(_g2);
		}
	}
	HX_STACK_LINE(164)
	return this->size_mode = _m;
}


HX_DEFINE_DYNAMIC_FUNC1(Camera_obj,set_size_mode,return )

::phoenix::Vector Camera_obj::set_size( ::phoenix::Vector _size){
	HX_STACK_FRAME("luxe.Camera","set_size",0x9b33c3cf,"luxe.Camera.set_size","luxe/Camera.hx",168,0xd52a0e40)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_size,"_size")
	HX_STACK_LINE(171)
	if (((_size == null()))){
		HX_STACK_LINE(172)
		::phoenix::Vector _g = ::phoenix::Vector_obj::__new((Float(this->get_viewport()->w) / Float((int)2)),(Float(this->get_viewport()->h) / Float((int)2)),null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(172)
		this->set_center(_g);
		HX_STACK_LINE(173)
		this->size = _size;
		HX_STACK_LINE(174)
		{
			HX_STACK_LINE(174)
			::phoenix::Vector _this = this->_size_factor;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(174)
			Float _x;		HX_STACK_VAR(_x,"_x");
			HX_STACK_LINE(174)
			{
				HX_STACK_LINE(174)
				::phoenix::Vector _this1 = this->_size_factor;		HX_STACK_VAR(_this1,"_this1");
				HX_STACK_LINE(174)
				_this1->y = (int)1;
				HX_STACK_LINE(174)
				if ((_this1->_construct)){
					HX_STACK_LINE(174)
					_x = _this1->y;
				}
				else{
					HX_STACK_LINE(174)
					if (((bool((_this1->listen_y != null())) && bool(!(_this1->ignore_listeners))))){
						HX_STACK_LINE(174)
						_this1->listen_y((int)1);
					}
					HX_STACK_LINE(174)
					_x = _this1->y;
				}
			}
			HX_STACK_LINE(174)
			_this->x = _x;
			HX_STACK_LINE(174)
			if ((_this->_construct)){
				HX_STACK_LINE(174)
				_this->x;
			}
			else{
				HX_STACK_LINE(174)
				if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
					HX_STACK_LINE(174)
					_this->listen_x(_x);
				}
				HX_STACK_LINE(174)
				_this->x;
			}
		}
		HX_STACK_LINE(175)
		Float _g1 = this->get_zoom();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(175)
		this->set_zoom(_g1);
		HX_STACK_LINE(176)
		return this->get_size();
	}
	HX_STACK_LINE(183)
	Float _ratio_x = (Float(this->get_viewport()->w) / Float(_size->x));		HX_STACK_VAR(_ratio_x,"_ratio_x");
	HX_STACK_LINE(184)
	Float _ratio_y = (Float(this->get_viewport()->h) / Float(_size->y));		HX_STACK_VAR(_ratio_y,"_ratio_y");
	HX_STACK_LINE(185)
	Float _shortest = ::Math_obj::max(_ratio_x,_ratio_y);		HX_STACK_VAR(_shortest,"_shortest");
	HX_STACK_LINE(186)
	Float _longest = ::Math_obj::min(_ratio_x,_ratio_y);		HX_STACK_VAR(_longest,"_longest");
	HX_STACK_LINE(188)
	{
		HX_STACK_LINE(188)
		::luxe::SizeMode _g = this->get_size_mode();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(188)
		switch( (int)(_g->__Index())){
			case (int)0: {
				HX_STACK_LINE(191)
				Float _g2 = _ratio_y = _longest;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(191)
				_ratio_x = _g2;
			}
			;break;
			case (int)1: {
				HX_STACK_LINE(195)
				Float _g3 = _ratio_y = _shortest;		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(195)
				_ratio_x = _g3;
			}
			;break;
			case (int)2: {
			}
			;break;
		}
	}
	HX_STACK_LINE(205)
	{
		HX_STACK_LINE(205)
		::phoenix::Vector _this = this->_size_factor;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(205)
		_this->x = _ratio_x;
		HX_STACK_LINE(205)
		if ((_this->_construct)){
			HX_STACK_LINE(205)
			_this->x;
		}
		else{
			HX_STACK_LINE(205)
			if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
				HX_STACK_LINE(205)
				_this->listen_x(_ratio_x);
			}
			HX_STACK_LINE(205)
			_this->x;
		}
	}
	HX_STACK_LINE(206)
	{
		HX_STACK_LINE(206)
		::phoenix::Vector _this = this->_size_factor;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(206)
		_this->y = _ratio_y;
		HX_STACK_LINE(206)
		if ((_this->_construct)){
			HX_STACK_LINE(206)
			_this->y;
		}
		else{
			HX_STACK_LINE(206)
			if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
				HX_STACK_LINE(206)
				_this->listen_y(_ratio_y);
			}
			HX_STACK_LINE(206)
			_this->y;
		}
	}
	HX_STACK_LINE(208)
	{
		HX_STACK_LINE(208)
		::phoenix::Vector _this = this->view->get_scale();		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(208)
		Float _g4 = this->get_zoom();		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(208)
		Float _g5 = (this->_size_factor->x * _g4);		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(208)
		Float _x = (Float((int)1) / Float(_g5));		HX_STACK_VAR(_x,"_x");
		HX_STACK_LINE(208)
		_this->x = _x;
		HX_STACK_LINE(208)
		if ((_this->_construct)){
			HX_STACK_LINE(208)
			_this->x;
		}
		else{
			HX_STACK_LINE(208)
			if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
				HX_STACK_LINE(208)
				_this->listen_x(_x);
			}
			HX_STACK_LINE(208)
			_this->x;
		}
	}
	HX_STACK_LINE(209)
	{
		HX_STACK_LINE(209)
		::phoenix::Vector _this = this->view->get_scale();		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(209)
		Float _g6 = this->get_zoom();		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(209)
		Float _g7 = (this->_size_factor->y * _g6);		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(209)
		Float _y = (Float((int)1) / Float(_g7));		HX_STACK_VAR(_y,"_y");
		HX_STACK_LINE(209)
		_this->y = _y;
		HX_STACK_LINE(209)
		if ((_this->_construct)){
			HX_STACK_LINE(209)
			_this->y;
		}
		else{
			HX_STACK_LINE(209)
			if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
				HX_STACK_LINE(209)
				_this->listen_y(_y);
			}
			HX_STACK_LINE(209)
			_this->y;
		}
	}
	HX_STACK_LINE(212)
	::phoenix::Vector _g8 = ::phoenix::Vector_obj::__new((Float(_size->x) / Float((int)2)),(Float(_size->y) / Float((int)2)),null(),null());		HX_STACK_VAR(_g8,"_g8");
	HX_STACK_LINE(212)
	this->set_center(_g8);
	HX_STACK_LINE(215)
	::phoenix::Vector _g9 = ::phoenix::Vector_obj::__new(_size->x,_size->y,_size->z,_size->w);		HX_STACK_VAR(_g9,"_g9");
	HX_STACK_LINE(215)
	return this->size = _g9;
}


HX_DEFINE_DYNAMIC_FUNC1(Camera_obj,set_size,return )

Void Camera_obj::focus( ::phoenix::Vector _p,hx::Null< Float >  __o__t,Dynamic oncomplete){
Float _t = __o__t.Default(0.6);
	HX_STACK_FRAME("luxe.Camera","focus",0x3a2b4d27,"luxe.Camera.focus","luxe/Camera.hx",221,0xd52a0e40)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_p,"_p")
	HX_STACK_ARG(_t,"_t")
	HX_STACK_ARG(oncomplete,"oncomplete")
{
		HX_STACK_LINE(221)
		Array< ::Dynamic > _g = Array_obj< ::Dynamic >::__new().Add(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(223)
		::phoenix::Vector _g1 = this->view->get_center();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(224)
		::luxe::tween::easing::IEasing _g11 = ::luxe::tween::easing::Quad_obj::get_easeInOut();		HX_STACK_VAR(_g11,"_g11");
		struct _Function_1_1{
			inline static Dynamic Block( ::phoenix::Vector &_p){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/Camera.hx",223,0xd52a0e40)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("x") , _p->x,false);
					__result->Add(HX_CSTRING("y") , _p->y,false);
					return __result;
				}
				return null();
			}
		};

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_2,Array< ::Dynamic >,_g)
		Void run(){
			HX_STACK_FRAME("*","_Function_1_2",0x5200ed38,"*._Function_1_2","luxe/Camera.hx",226,0xd52a0e40)
			{
				HX_STACK_LINE(226)
				::phoenix::Vector _this = _g->__get((int)0).StaticCast< ::luxe::Camera >()->transform->local->pos;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(226)
				Float _x = _g->__get((int)0).StaticCast< ::luxe::Camera >()->view->get_pos()->x;		HX_STACK_VAR(_x,"_x");
				HX_STACK_LINE(226)
				Float _y = _g->__get((int)0).StaticCast< ::luxe::Camera >()->view->get_pos()->y;		HX_STACK_VAR(_y,"_y");
				HX_STACK_LINE(226)
				bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
				HX_STACK_LINE(226)
				_this->ignore_listeners = true;
				HX_STACK_LINE(226)
				{
					HX_STACK_LINE(226)
					_this->x = _x;
					HX_STACK_LINE(226)
					if ((_this->_construct)){
						HX_STACK_LINE(226)
						_this->x;
					}
					else{
						HX_STACK_LINE(226)
						if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
							HX_STACK_LINE(226)
							_this->listen_x(_x);
						}
						HX_STACK_LINE(226)
						_this->x;
					}
				}
				HX_STACK_LINE(226)
				{
					HX_STACK_LINE(226)
					_this->y = _y;
					HX_STACK_LINE(226)
					if ((_this->_construct)){
						HX_STACK_LINE(226)
						_this->y;
					}
					else{
						HX_STACK_LINE(226)
						if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
							HX_STACK_LINE(226)
							_this->listen_y(_y);
						}
						HX_STACK_LINE(226)
						_this->y;
					}
				}
				HX_STACK_LINE(226)
				_this->ignore_listeners = prev;
				HX_STACK_LINE(226)
				if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
					HX_STACK_LINE(226)
					_this->listen_x(_this->x);
				}
				HX_STACK_LINE(226)
				if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
					HX_STACK_LINE(226)
					_this->listen_y(_this->y);
				}
				HX_STACK_LINE(226)
				_this;
			}
			return null();
		}
		HX_END_LOCAL_FUNC0((void))

		HX_STACK_LINE(223)
		::luxe::tween::Actuate_obj::tween(_g1,_t,_Function_1_1::Block(_p),true,null())->onComplete(oncomplete,null())->ease(_g11)->onUpdate( Dynamic(new _Function_1_2(_g)),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Camera_obj,focus,(void))

::phoenix::Vector Camera_obj::screen_point_to_world( ::phoenix::Vector _vector){
	HX_STACK_FRAME("luxe.Camera","screen_point_to_world",0x4663cc5f,"luxe.Camera.screen_point_to_world","luxe/Camera.hx",234,0xd52a0e40)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_vector,"_vector")
	HX_STACK_LINE(234)
	return this->view->screen_point_to_world(_vector);
}


HX_DEFINE_DYNAMIC_FUNC1(Camera_obj,screen_point_to_world,return )

::phoenix::Vector Camera_obj::world_point_to_screen( ::phoenix::Vector _vector,::phoenix::Rectangle _viewport){
	HX_STACK_FRAME("luxe.Camera","world_point_to_screen",0x46a6e923,"luxe.Camera.world_point_to_screen","luxe/Camera.hx",241,0xd52a0e40)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_vector,"_vector")
	HX_STACK_ARG(_viewport,"_viewport")
	HX_STACK_LINE(241)
	return this->view->world_point_to_screen(_vector,_viewport);
}


HX_DEFINE_DYNAMIC_FUNC2(Camera_obj,world_point_to_screen,return )

Void Camera_obj::set_pos_from_transform( ::phoenix::Vector _pos){
{
		HX_STACK_FRAME("luxe.Camera","set_pos_from_transform",0x5d9e6830,"luxe.Camera.set_pos_from_transform","luxe/Camera.hx",245,0xd52a0e40)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_pos,"_pos")
		HX_STACK_LINE(247)
		Float hvw = (Float(this->view->get_viewport()->w) / Float((int)2));		HX_STACK_VAR(hvw,"hvw");
		HX_STACK_LINE(248)
		Float hvh = (Float(this->view->get_viewport()->h) / Float((int)2));		HX_STACK_VAR(hvh,"hvh");
		HX_STACK_LINE(250)
		if (((this->bounds != null()))){
			HX_STACK_LINE(251)
			if (((_pos->x < this->bounds->x))){
				HX_STACK_LINE(251)
				Float _x = this->bounds->x;		HX_STACK_VAR(_x,"_x");
				HX_STACK_LINE(251)
				_pos->x = _x;
				HX_STACK_LINE(251)
				if ((_pos->_construct)){
					HX_STACK_LINE(251)
					_pos->x;
				}
				else{
					HX_STACK_LINE(251)
					if (((bool((_pos->listen_x != null())) && bool(!(_pos->ignore_listeners))))){
						HX_STACK_LINE(251)
						_pos->listen_x(_x);
					}
					HX_STACK_LINE(251)
					_pos->x;
				}
			}
			HX_STACK_LINE(252)
			if (((_pos->y < this->bounds->y))){
				HX_STACK_LINE(252)
				Float _y = this->bounds->y;		HX_STACK_VAR(_y,"_y");
				HX_STACK_LINE(252)
				_pos->y = _y;
				HX_STACK_LINE(252)
				if ((_pos->_construct)){
					HX_STACK_LINE(252)
					_pos->y;
				}
				else{
					HX_STACK_LINE(252)
					if (((bool((_pos->listen_y != null())) && bool(!(_pos->ignore_listeners))))){
						HX_STACK_LINE(252)
						_pos->listen_y(_y);
					}
					HX_STACK_LINE(252)
					_pos->y;
				}
			}
			HX_STACK_LINE(253)
			if ((((_pos->x + hvw) > (this->bounds->w - this->view->get_viewport()->w)))){
				HX_STACK_LINE(253)
				Float _x = ((this->bounds->w - this->view->get_viewport()->w) - hvw);		HX_STACK_VAR(_x,"_x");
				HX_STACK_LINE(253)
				_pos->x = _x;
				HX_STACK_LINE(253)
				if ((_pos->_construct)){
					HX_STACK_LINE(253)
					_pos->x;
				}
				else{
					HX_STACK_LINE(253)
					if (((bool((_pos->listen_x != null())) && bool(!(_pos->ignore_listeners))))){
						HX_STACK_LINE(253)
						_pos->listen_x(_x);
					}
					HX_STACK_LINE(253)
					_pos->x;
				}
			}
			HX_STACK_LINE(254)
			if ((((_pos->y + hvh) > (this->bounds->h - this->view->get_viewport()->h)))){
				HX_STACK_LINE(254)
				Float _y = ((this->bounds->h - this->view->get_viewport()->h) - hvh);		HX_STACK_VAR(_y,"_y");
				HX_STACK_LINE(254)
				_pos->y = _y;
				HX_STACK_LINE(254)
				if ((_pos->_construct)){
					HX_STACK_LINE(254)
					_pos->y;
				}
				else{
					HX_STACK_LINE(254)
					if (((bool((_pos->listen_y != null())) && bool(!(_pos->ignore_listeners))))){
						HX_STACK_LINE(254)
						_pos->listen_y(_y);
					}
					HX_STACK_LINE(254)
					_pos->y;
				}
			}
		}
		HX_STACK_LINE(257)
		this->super::set_pos_from_transform(_pos);
		HX_STACK_LINE(260)
		this->update_view_pos = _pos;
	}
return null();
}


Void Camera_obj::set_rotation_from_transform( ::phoenix::Quaternion _rotation){
{
		HX_STACK_FRAME("luxe.Camera","set_rotation_from_transform",0xfae455ea,"luxe.Camera.set_rotation_from_transform","luxe/Camera.hx",264,0xd52a0e40)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_rotation,"_rotation")
		HX_STACK_LINE(266)
		this->super::set_rotation_from_transform(_rotation);
		HX_STACK_LINE(268)
		if (((this->view != null()))){
			HX_STACK_LINE(269)
			this->view->set_rotation(_rotation);
		}
	}
return null();
}


Void Camera_obj::set_scale_from_transform( ::phoenix::Vector _scale){
{
		HX_STACK_FRAME("luxe.Camera","set_scale_from_transform",0x39fbfb7a,"luxe.Camera.set_scale_from_transform","luxe/Camera.hx",274,0xd52a0e40)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_scale,"_scale")
		HX_STACK_LINE(276)
		this->super::set_scale_from_transform(_scale);
		HX_STACK_LINE(278)
		if (((this->view != null()))){
			HX_STACK_LINE(279)
			this->view->set_scale(_scale);
		}
	}
return null();
}


Void Camera_obj::shake( Float amount){
{
		HX_STACK_FRAME("luxe.Camera","shake",0xb1becc15,"luxe.Camera.shake","luxe/Camera.hx",285,0xd52a0e40)
		HX_STACK_THIS(this)
		HX_STACK_ARG(amount,"amount")
		HX_STACK_LINE(287)
		this->shake_amount = amount;
		HX_STACK_LINE(288)
		this->shaking = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Camera_obj,shake,(void))

Void Camera_obj::update( Float dt){
{
		HX_STACK_FRAME("luxe.Camera","update",0x3f133dda,"luxe.Camera.update","luxe/Camera.hx",293,0xd52a0e40)
		HX_STACK_THIS(this)
		HX_STACK_ARG(dt,"dt")
		HX_STACK_LINE(296)
		if ((this->shaking)){
			HX_STACK_LINE(299)
			{
				HX_STACK_LINE(299)
				::phoenix::Vector _this = this->_final_pos;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(299)
				Float _x = this->transform->local->pos->x;		HX_STACK_VAR(_x,"_x");
				HX_STACK_LINE(299)
				Float _y = this->transform->local->pos->y;		HX_STACK_VAR(_y,"_y");
				HX_STACK_LINE(299)
				Float _z = this->transform->local->pos->z;		HX_STACK_VAR(_z,"_z");
				HX_STACK_LINE(299)
				bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
				HX_STACK_LINE(299)
				_this->ignore_listeners = true;
				HX_STACK_LINE(299)
				{
					HX_STACK_LINE(299)
					_this->x = _x;
					HX_STACK_LINE(299)
					if ((_this->_construct)){
						HX_STACK_LINE(299)
						_this->x;
					}
					else{
						HX_STACK_LINE(299)
						if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
							HX_STACK_LINE(299)
							_this->listen_x(_x);
						}
						HX_STACK_LINE(299)
						_this->x;
					}
				}
				HX_STACK_LINE(299)
				{
					HX_STACK_LINE(299)
					_this->y = _y;
					HX_STACK_LINE(299)
					if ((_this->_construct)){
						HX_STACK_LINE(299)
						_this->y;
					}
					else{
						HX_STACK_LINE(299)
						if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
							HX_STACK_LINE(299)
							_this->listen_y(_y);
						}
						HX_STACK_LINE(299)
						_this->y;
					}
				}
				HX_STACK_LINE(299)
				{
					HX_STACK_LINE(299)
					_this->z = _z;
					HX_STACK_LINE(299)
					if ((_this->_construct)){
						HX_STACK_LINE(299)
						_this->z;
					}
					else{
						HX_STACK_LINE(299)
						if (((bool((_this->listen_z != null())) && bool(!(_this->ignore_listeners))))){
							HX_STACK_LINE(299)
							_this->listen_z(_z);
						}
						HX_STACK_LINE(299)
						_this->z;
					}
				}
				HX_STACK_LINE(299)
				_this->ignore_listeners = prev;
				HX_STACK_LINE(299)
				if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
					HX_STACK_LINE(299)
					_this->listen_x(_this->x);
				}
				HX_STACK_LINE(299)
				if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
					HX_STACK_LINE(299)
					_this->listen_y(_this->y);
				}
				HX_STACK_LINE(299)
				if (((bool((_this->listen_z != null())) && bool(!(_this->ignore_listeners))))){
					HX_STACK_LINE(299)
					_this->listen_z(_this->z);
				}
				HX_STACK_LINE(299)
				_this;
			}
			HX_STACK_LINE(302)
			::phoenix::Vector _g = ::Luxe_obj::utils->geometry->random_point_in_unit_circle();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(302)
			this->shake_vector = _g;
			HX_STACK_LINE(305)
			{
				HX_STACK_LINE(305)
				::phoenix::Vector _g1 = this->shake_vector;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(305)
				{
					HX_STACK_LINE(305)
					Float _x = (_g1->x * this->shake_amount);		HX_STACK_VAR(_x,"_x");
					HX_STACK_LINE(305)
					_g1->x = _x;
					HX_STACK_LINE(305)
					if ((_g1->_construct)){
						HX_STACK_LINE(305)
						_g1->x;
					}
					else{
						HX_STACK_LINE(305)
						if (((bool((_g1->listen_x != null())) && bool(!(_g1->ignore_listeners))))){
							HX_STACK_LINE(305)
							_g1->listen_x(_x);
						}
						HX_STACK_LINE(305)
						_g1->x;
					}
				}
			}
			HX_STACK_LINE(306)
			{
				HX_STACK_LINE(306)
				::phoenix::Vector _g1 = this->shake_vector;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(306)
				{
					HX_STACK_LINE(306)
					Float _y = (_g1->y * this->shake_amount);		HX_STACK_VAR(_y,"_y");
					HX_STACK_LINE(306)
					_g1->y = _y;
					HX_STACK_LINE(306)
					if ((_g1->_construct)){
						HX_STACK_LINE(306)
						_g1->y;
					}
					else{
						HX_STACK_LINE(306)
						if (((bool((_g1->listen_y != null())) && bool(!(_g1->ignore_listeners))))){
							HX_STACK_LINE(306)
							_g1->listen_y(_y);
						}
						HX_STACK_LINE(306)
						_g1->y;
					}
				}
			}
			HX_STACK_LINE(307)
			{
				HX_STACK_LINE(307)
				::phoenix::Vector _g1 = this->shake_vector;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(307)
				{
					HX_STACK_LINE(307)
					Float _z = (_g1->z * this->shake_amount);		HX_STACK_VAR(_z,"_z");
					HX_STACK_LINE(307)
					_g1->z = _z;
					HX_STACK_LINE(307)
					if ((_g1->_construct)){
						HX_STACK_LINE(307)
						_g1->z;
					}
					else{
						HX_STACK_LINE(307)
						if (((bool((_g1->listen_z != null())) && bool(!(_g1->ignore_listeners))))){
							HX_STACK_LINE(307)
							_g1->listen_z(_z);
						}
						HX_STACK_LINE(307)
						_g1->z;
					}
				}
			}
			HX_STACK_LINE(310)
			hx::MultEq(this->shake_amount,0.9);
			HX_STACK_LINE(313)
			if (((this->shake_amount <= this->minimum_shake))){
				HX_STACK_LINE(314)
				this->shake_amount = (int)0;
				HX_STACK_LINE(315)
				this->shaking = false;
			}
			HX_STACK_LINE(319)
			{
				HX_STACK_LINE(319)
				::phoenix::Vector _this = this->_final_pos;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(319)
				Float _x = (this->_final_pos->x + this->shake_vector->x);		HX_STACK_VAR(_x,"_x");
				HX_STACK_LINE(319)
				Float _y = (this->_final_pos->y + this->shake_vector->y);		HX_STACK_VAR(_y,"_y");
				HX_STACK_LINE(319)
				Float _z = (this->_final_pos->z + this->shake_vector->z);		HX_STACK_VAR(_z,"_z");
				HX_STACK_LINE(319)
				bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
				HX_STACK_LINE(319)
				_this->ignore_listeners = true;
				HX_STACK_LINE(319)
				{
					HX_STACK_LINE(319)
					_this->x = _x;
					HX_STACK_LINE(319)
					if ((_this->_construct)){
						HX_STACK_LINE(319)
						_this->x;
					}
					else{
						HX_STACK_LINE(319)
						if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
							HX_STACK_LINE(319)
							_this->listen_x(_x);
						}
						HX_STACK_LINE(319)
						_this->x;
					}
				}
				HX_STACK_LINE(319)
				{
					HX_STACK_LINE(319)
					_this->y = _y;
					HX_STACK_LINE(319)
					if ((_this->_construct)){
						HX_STACK_LINE(319)
						_this->y;
					}
					else{
						HX_STACK_LINE(319)
						if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
							HX_STACK_LINE(319)
							_this->listen_y(_y);
						}
						HX_STACK_LINE(319)
						_this->y;
					}
				}
				HX_STACK_LINE(319)
				{
					HX_STACK_LINE(319)
					_this->z = _z;
					HX_STACK_LINE(319)
					if ((_this->_construct)){
						HX_STACK_LINE(319)
						_this->z;
					}
					else{
						HX_STACK_LINE(319)
						if (((bool((_this->listen_z != null())) && bool(!(_this->ignore_listeners))))){
							HX_STACK_LINE(319)
							_this->listen_z(_z);
						}
						HX_STACK_LINE(319)
						_this->z;
					}
				}
				HX_STACK_LINE(319)
				_this->ignore_listeners = prev;
				HX_STACK_LINE(319)
				if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
					HX_STACK_LINE(319)
					_this->listen_x(_this->x);
				}
				HX_STACK_LINE(319)
				if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
					HX_STACK_LINE(319)
					_this->listen_y(_this->y);
				}
				HX_STACK_LINE(319)
				if (((bool((_this->listen_z != null())) && bool(!(_this->ignore_listeners))))){
					HX_STACK_LINE(319)
					_this->listen_z(_this->z);
				}
				HX_STACK_LINE(319)
				_this;
			}
			HX_STACK_LINE(322)
			this->update_view_pos = this->_final_pos;
		}
		HX_STACK_LINE(326)
		if (((bool((this->update_view_pos != null())) && bool((this->view != null()))))){
			HX_STACK_LINE(327)
			::phoenix::Vector _g1;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(327)
			{
				HX_STACK_LINE(327)
				::phoenix::Vector _this = this->update_view_pos;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(327)
				_g1 = ::phoenix::Vector_obj::__new(_this->x,_this->y,_this->z,_this->w);
			}
			HX_STACK_LINE(327)
			this->view->set_pos(_g1);
			HX_STACK_LINE(328)
			this->update_view_pos = null();
		}
	}
return null();
}


Void Camera_obj::init( ){
{
		HX_STACK_FRAME("luxe.Camera","init",0xbd5caca1,"luxe.Camera.init","luxe/macros/EntityRules.hx",35,0xed942299)
		HX_STACK_THIS(this)
	}
return null();
}


Void Camera_obj::ondestroy( ){
{
		HX_STACK_FRAME("luxe.Camera","ondestroy",0xbd23fe8a,"luxe.Camera.ondestroy","luxe/macros/EntityRules.hx",47,0xed942299)
		HX_STACK_THIS(this)
		HX_STACK_LINE(47)
		this->super::ondestroy();
	}
return null();
}



Camera_obj::Camera_obj()
{
}

void Camera_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Camera);
	HX_MARK_MEMBER_NAME(size,"size");
	HX_MARK_MEMBER_NAME(size_mode,"size_mode");
	HX_MARK_MEMBER_NAME(view,"view");
	HX_MARK_MEMBER_NAME(bounds,"bounds");
	HX_MARK_MEMBER_NAME(shake_vector,"shake_vector");
	HX_MARK_MEMBER_NAME(shake_amount,"shake_amount");
	HX_MARK_MEMBER_NAME(shaking,"shaking");
	HX_MARK_MEMBER_NAME(minimum_shake,"minimum_shake");
	HX_MARK_MEMBER_NAME(update_view_pos,"update_view_pos");
	HX_MARK_MEMBER_NAME(_size_factor,"_size_factor");
	HX_MARK_MEMBER_NAME(_final_pos,"_final_pos");
	HX_MARK_MEMBER_NAME(_rotation_radian,"_rotation_radian");
	HX_MARK_MEMBER_NAME(_rotation_cache,"_rotation_cache");
	::luxe::Entity_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Camera_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(size,"size");
	HX_VISIT_MEMBER_NAME(size_mode,"size_mode");
	HX_VISIT_MEMBER_NAME(view,"view");
	HX_VISIT_MEMBER_NAME(bounds,"bounds");
	HX_VISIT_MEMBER_NAME(shake_vector,"shake_vector");
	HX_VISIT_MEMBER_NAME(shake_amount,"shake_amount");
	HX_VISIT_MEMBER_NAME(shaking,"shaking");
	HX_VISIT_MEMBER_NAME(minimum_shake,"minimum_shake");
	HX_VISIT_MEMBER_NAME(update_view_pos,"update_view_pos");
	HX_VISIT_MEMBER_NAME(_size_factor,"_size_factor");
	HX_VISIT_MEMBER_NAME(_final_pos,"_final_pos");
	HX_VISIT_MEMBER_NAME(_rotation_radian,"_rotation_radian");
	HX_VISIT_MEMBER_NAME(_rotation_cache,"_rotation_cache");
	::luxe::Entity_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Camera_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"zoom") ) { return get_zoom(); }
		if (HX_FIELD_EQ(inName,"size") ) { return inCallProp ? get_size() : size; }
		if (HX_FIELD_EQ(inName,"view") ) { return view; }
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"focus") ) { return focus_dyn(); }
		if (HX_FIELD_EQ(inName,"shake") ) { return shake_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"center") ) { return get_center(); }
		if (HX_FIELD_EQ(inName,"bounds") ) { return bounds; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"shaking") ) { return shaking; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"viewport") ) { return get_viewport(); }
		if (HX_FIELD_EQ(inName,"get_zoom") ) { return get_zoom_dyn(); }
		if (HX_FIELD_EQ(inName,"set_zoom") ) { return set_zoom_dyn(); }
		if (HX_FIELD_EQ(inName,"get_size") ) { return get_size_dyn(); }
		if (HX_FIELD_EQ(inName,"set_size") ) { return set_size_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"size_mode") ) { return inCallProp ? get_size_mode() : size_mode; }
		if (HX_FIELD_EQ(inName,"ondestroy") ) { return ondestroy_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_final_pos") ) { return _final_pos; }
		if (HX_FIELD_EQ(inName,"get_center") ) { return get_center_dyn(); }
		if (HX_FIELD_EQ(inName,"set_center") ) { return set_center_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"minimum_zoom") ) { return get_minimum_zoom(); }
		if (HX_FIELD_EQ(inName,"shake_vector") ) { return shake_vector; }
		if (HX_FIELD_EQ(inName,"shake_amount") ) { return shake_amount; }
		if (HX_FIELD_EQ(inName,"_size_factor") ) { return _size_factor; }
		if (HX_FIELD_EQ(inName,"get_viewport") ) { return get_viewport_dyn(); }
		if (HX_FIELD_EQ(inName,"set_viewport") ) { return set_viewport_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"minimum_shake") ) { return minimum_shake; }
		if (HX_FIELD_EQ(inName,"get_size_mode") ) { return get_size_mode_dyn(); }
		if (HX_FIELD_EQ(inName,"set_size_mode") ) { return set_size_mode_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"update_view_pos") ) { return update_view_pos; }
		if (HX_FIELD_EQ(inName,"_rotation_cache") ) { return _rotation_cache; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_rotation_radian") ) { return _rotation_radian; }
		if (HX_FIELD_EQ(inName,"get_minimum_zoom") ) { return get_minimum_zoom_dyn(); }
		if (HX_FIELD_EQ(inName,"set_minimum_zoom") ) { return set_minimum_zoom_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"screen_point_to_world") ) { return screen_point_to_world_dyn(); }
		if (HX_FIELD_EQ(inName,"world_point_to_screen") ) { return world_point_to_screen_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"set_pos_from_transform") ) { return set_pos_from_transform_dyn(); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"set_scale_from_transform") ) { return set_scale_from_transform_dyn(); }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"set_rotation_from_transform") ) { return set_rotation_from_transform_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Camera_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"zoom") ) { return set_zoom(inValue); }
		if (HX_FIELD_EQ(inName,"size") ) { if (inCallProp) return set_size(inValue);size=inValue.Cast< ::phoenix::Vector >(); return inValue; }
		if (HX_FIELD_EQ(inName,"view") ) { view=inValue.Cast< ::phoenix::Camera >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"center") ) { return set_center(inValue); }
		if (HX_FIELD_EQ(inName,"bounds") ) { bounds=inValue.Cast< ::phoenix::Rectangle >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"shaking") ) { shaking=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"viewport") ) { return set_viewport(inValue); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"size_mode") ) { if (inCallProp) return set_size_mode(inValue);size_mode=inValue.Cast< ::luxe::SizeMode >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_final_pos") ) { _final_pos=inValue.Cast< ::phoenix::Vector >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"minimum_zoom") ) { return set_minimum_zoom(inValue); }
		if (HX_FIELD_EQ(inName,"shake_vector") ) { shake_vector=inValue.Cast< ::phoenix::Vector >(); return inValue; }
		if (HX_FIELD_EQ(inName,"shake_amount") ) { shake_amount=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_size_factor") ) { _size_factor=inValue.Cast< ::phoenix::Vector >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"minimum_shake") ) { minimum_shake=inValue.Cast< Float >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"update_view_pos") ) { update_view_pos=inValue.Cast< ::phoenix::Vector >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_rotation_cache") ) { _rotation_cache=inValue.Cast< ::phoenix::Quaternion >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_rotation_radian") ) { _rotation_radian=inValue.Cast< ::phoenix::Vector >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Camera_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("viewport"));
	outFields->push(HX_CSTRING("center"));
	outFields->push(HX_CSTRING("zoom"));
	outFields->push(HX_CSTRING("minimum_zoom"));
	outFields->push(HX_CSTRING("size"));
	outFields->push(HX_CSTRING("size_mode"));
	outFields->push(HX_CSTRING("view"));
	outFields->push(HX_CSTRING("bounds"));
	outFields->push(HX_CSTRING("shake_vector"));
	outFields->push(HX_CSTRING("shake_amount"));
	outFields->push(HX_CSTRING("shaking"));
	outFields->push(HX_CSTRING("minimum_shake"));
	outFields->push(HX_CSTRING("update_view_pos"));
	outFields->push(HX_CSTRING("_size_factor"));
	outFields->push(HX_CSTRING("_final_pos"));
	outFields->push(HX_CSTRING("_rotation_radian"));
	outFields->push(HX_CSTRING("_rotation_cache"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::phoenix::Vector*/ ,(int)offsetof(Camera_obj,size),HX_CSTRING("size")},
	{hx::fsObject /*::luxe::SizeMode*/ ,(int)offsetof(Camera_obj,size_mode),HX_CSTRING("size_mode")},
	{hx::fsObject /*::phoenix::Camera*/ ,(int)offsetof(Camera_obj,view),HX_CSTRING("view")},
	{hx::fsObject /*::phoenix::Rectangle*/ ,(int)offsetof(Camera_obj,bounds),HX_CSTRING("bounds")},
	{hx::fsObject /*::phoenix::Vector*/ ,(int)offsetof(Camera_obj,shake_vector),HX_CSTRING("shake_vector")},
	{hx::fsFloat,(int)offsetof(Camera_obj,shake_amount),HX_CSTRING("shake_amount")},
	{hx::fsBool,(int)offsetof(Camera_obj,shaking),HX_CSTRING("shaking")},
	{hx::fsFloat,(int)offsetof(Camera_obj,minimum_shake),HX_CSTRING("minimum_shake")},
	{hx::fsObject /*::phoenix::Vector*/ ,(int)offsetof(Camera_obj,update_view_pos),HX_CSTRING("update_view_pos")},
	{hx::fsObject /*::phoenix::Vector*/ ,(int)offsetof(Camera_obj,_size_factor),HX_CSTRING("_size_factor")},
	{hx::fsObject /*::phoenix::Vector*/ ,(int)offsetof(Camera_obj,_final_pos),HX_CSTRING("_final_pos")},
	{hx::fsObject /*::phoenix::Vector*/ ,(int)offsetof(Camera_obj,_rotation_radian),HX_CSTRING("_rotation_radian")},
	{hx::fsObject /*::phoenix::Quaternion*/ ,(int)offsetof(Camera_obj,_rotation_cache),HX_CSTRING("_rotation_cache")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("size"),
	HX_CSTRING("size_mode"),
	HX_CSTRING("view"),
	HX_CSTRING("bounds"),
	HX_CSTRING("shake_vector"),
	HX_CSTRING("shake_amount"),
	HX_CSTRING("shaking"),
	HX_CSTRING("minimum_shake"),
	HX_CSTRING("update_view_pos"),
	HX_CSTRING("_size_factor"),
	HX_CSTRING("_final_pos"),
	HX_CSTRING("_rotation_radian"),
	HX_CSTRING("_rotation_cache"),
	HX_CSTRING("get_viewport"),
	HX_CSTRING("set_viewport"),
	HX_CSTRING("get_center"),
	HX_CSTRING("set_center"),
	HX_CSTRING("get_minimum_zoom"),
	HX_CSTRING("set_minimum_zoom"),
	HX_CSTRING("get_zoom"),
	HX_CSTRING("set_zoom"),
	HX_CSTRING("get_size"),
	HX_CSTRING("get_size_mode"),
	HX_CSTRING("set_size_mode"),
	HX_CSTRING("set_size"),
	HX_CSTRING("focus"),
	HX_CSTRING("screen_point_to_world"),
	HX_CSTRING("world_point_to_screen"),
	HX_CSTRING("set_pos_from_transform"),
	HX_CSTRING("set_rotation_from_transform"),
	HX_CSTRING("set_scale_from_transform"),
	HX_CSTRING("shake"),
	HX_CSTRING("update"),
	HX_CSTRING("init"),
	HX_CSTRING("ondestroy"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Camera_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Camera_obj::__mClass,"__mClass");
};

#endif

Class Camera_obj::__mClass;

void Camera_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("luxe.Camera"), hx::TCanCast< Camera_obj> ,sStaticFields,sMemberFields,
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

void Camera_obj::__boot()
{
}

} // end namespace luxe
