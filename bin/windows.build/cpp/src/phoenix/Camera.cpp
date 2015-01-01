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
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_luxe_ID
#include <luxe/ID.h>
#endif
#ifndef INCLUDED_luxe_Screen
#include <luxe/Screen.h>
#endif
#ifndef INCLUDED_phoenix_Camera
#include <phoenix/Camera.h>
#endif
#ifndef INCLUDED_phoenix_FOVType
#include <phoenix/FOVType.h>
#endif
#ifndef INCLUDED_phoenix_Matrix
#include <phoenix/Matrix.h>
#endif
#ifndef INCLUDED_phoenix_MatrixTransform
#include <phoenix/MatrixTransform.h>
#endif
#ifndef INCLUDED_phoenix_ProjectionType
#include <phoenix/ProjectionType.h>
#endif
#ifndef INCLUDED_phoenix_Quaternion
#include <phoenix/Quaternion.h>
#endif
#ifndef INCLUDED_phoenix_Ray
#include <phoenix/Ray.h>
#endif
#ifndef INCLUDED_phoenix_Rectangle
#include <phoenix/Rectangle.h>
#endif
#ifndef INCLUDED_phoenix_RenderState
#include <phoenix/RenderState.h>
#endif
#ifndef INCLUDED_phoenix_Renderer
#include <phoenix/Renderer.h>
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
#ifndef INCLUDED_snow_platform_native_utils_ArrayBufferView
#include <snow/platform/native/utils/ArrayBufferView.h>
#endif
#ifndef INCLUDED_snow_platform_native_utils_Float32Array
#include <snow/platform/native/utils/Float32Array.h>
#endif
#ifndef INCLUDED_snow_utils_IMemoryRange
#include <snow/utils/IMemoryRange.h>
#endif
namespace phoenix{

Void Camera_obj::__construct(Dynamic _options)
{
HX_STACK_FRAME("phoenix.Camera","new",0x30bf44b6,"phoenix.Camera.new","phoenix/Camera.hx",25,0x1fcabb59)
HX_STACK_THIS(this)
HX_STACK_ARG(_options,"_options")
{
	HX_STACK_LINE(479)
	this->_refresh_pos = false;
	HX_STACK_LINE(72)
	this->_setup = true;
	HX_STACK_LINE(70)
	this->look_at_dirty = true;
	HX_STACK_LINE(68)
	this->projection_dirty = true;
	HX_STACK_LINE(66)
	this->transform_dirty = true;
	HX_STACK_LINE(49)
	this->minimum_zoom = 0.01;
	HX_STACK_LINE(38)
	this->aspect = 1.5;
	HX_STACK_LINE(37)
	this->fov_type = ::phoenix::FOVType_obj::horizontal;
	HX_STACK_LINE(36)
	this->fov = (int)60;
	HX_STACK_LINE(34)
	this->far = (int)-1000;
	HX_STACK_LINE(33)
	this->near = (int)1000;
	HX_STACK_LINE(31)
	this->zoom = 1.0;
	HX_STACK_LINE(27)
	this->name = HX_CSTRING("camera");
	HX_STACK_LINE(77)
	::phoenix::Transform _g = ::phoenix::Transform_obj::__new();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(77)
	this->transform = _g;
	HX_STACK_LINE(80)
	this->options = _options;
	HX_STACK_LINE(83)
	if (((this->options == null()))){
		HX_STACK_LINE(84)
		Dynamic _g1 = this->default_camera_options();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(84)
		this->options = _g1;
	}
	HX_STACK_LINE(88)
	if (((this->options->__Field(HX_CSTRING("camera_name"),true) != null()))){
		HX_STACK_LINE(89)
		this->name = this->options->__Field(HX_CSTRING("camera_name"),true);
	}
	HX_STACK_LINE(93)
	if (((this->options->__Field(HX_CSTRING("projection"),true) != null()))){
		HX_STACK_LINE(94)
		this->projection = this->options->__Field(HX_CSTRING("projection"),true);
	}
	else{
		HX_STACK_LINE(96)
		this->projection = ::phoenix::ProjectionType_obj::ortho;
	}
	HX_STACK_LINE(99)
	::phoenix::Vector _g2 = ::phoenix::Vector_obj::__new((Float(::Luxe_obj::get_screen()->w) / Float((int)2)),(Float(::Luxe_obj::get_screen()->h) / Float((int)2)),null(),null());		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(99)
	this->set_center(_g2);
	HX_STACK_LINE(100)
	::phoenix::Vector _g3 = ::phoenix::Vector_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(100)
	this->set_pos(_g3);
	HX_STACK_LINE(103)
	if (((this->options->__Field(HX_CSTRING("viewport"),true) != null()))){
		HX_STACK_LINE(104)
		this->set_viewport(this->options->__Field(HX_CSTRING("viewport"),true));
	}
	else{
		HX_STACK_LINE(106)
		::phoenix::Rectangle _g4 = ::phoenix::Rectangle_obj::__new((int)0,(int)0,::Luxe_obj::get_screen()->w,::Luxe_obj::get_screen()->h);		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(106)
		this->set_viewport(_g4);
	}
	HX_STACK_LINE(109)
	::phoenix::Vector _g5 = ::phoenix::Vector_obj::__new((int)0,(int)1,(int)0,null());		HX_STACK_VAR(_g5,"_g5");
	HX_STACK_LINE(109)
	this->up = _g5;
	HX_STACK_LINE(111)
	::phoenix::Matrix _g6 = ::phoenix::Matrix_obj::__new(null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(_g6,"_g6");
	HX_STACK_LINE(111)
	this->projection_matrix = _g6;
	HX_STACK_LINE(112)
	::phoenix::Matrix _g7 = ::phoenix::Matrix_obj::__new(null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(_g7,"_g7");
	HX_STACK_LINE(112)
	this->view_matrix = _g7;
	HX_STACK_LINE(113)
	::phoenix::Matrix _g8 = ::phoenix::Matrix_obj::__new(null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(_g8,"_g8");
	HX_STACK_LINE(113)
	this->view_matrix_inverse = _g8;
	HX_STACK_LINE(114)
	::phoenix::Matrix _g9 = ::phoenix::Matrix_obj::__new(null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(_g9,"_g9");
	HX_STACK_LINE(114)
	this->look_at_matrix = _g9;
	HX_STACK_LINE(116)
	{
		HX_STACK_LINE(116)
		::phoenix::Transform _this = this->transform;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(116)
		if (((_this->_clean_handlers == null()))){
			HX_STACK_LINE(116)
			_this->_clean_handlers = Dynamic( Array_obj<Dynamic>::__new());
		}
		HX_STACK_LINE(116)
		_this->_clean_handlers->__Field(HX_CSTRING("push"),true)(this->on_transform_cleaned_dyn());
	}
	HX_STACK_LINE(118)
	this->apply_default_camera_options();
	HX_STACK_LINE(120)
	{
		HX_STACK_LINE(120)
		::phoenix::ProjectionType _g1 = this->projection;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(120)
		switch( (int)(_g1->__Index())){
			case (int)0: {
				HX_STACK_LINE(123)
				this->set_ortho(this->options);
			}
			;break;
			case (int)1: {
				HX_STACK_LINE(125)
				this->set_perspective(this->options);
			}
			;break;
			case (int)2: {
			}
			;break;
		}
	}
	HX_STACK_LINE(132)
	this->_setup = false;
}
;
	return null();
}

//Camera_obj::~Camera_obj() { }

Dynamic Camera_obj::__CreateEmpty() { return  new Camera_obj; }
hx::ObjectPtr< Camera_obj > Camera_obj::__new(Dynamic _options)
{  hx::ObjectPtr< Camera_obj > result = new Camera_obj();
	result->__construct(_options);
	return result;}

Dynamic Camera_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Camera_obj > result = new Camera_obj();
	result->__construct(inArgs[0]);
	return result;}

Void Camera_obj::set_ortho( Dynamic _options){
{
		HX_STACK_FRAME("phoenix.Camera","set_ortho",0xe0d7b871,"phoenix.Camera.set_ortho","phoenix/Camera.hx",140,0x1fcabb59)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_options,"_options")
		HX_STACK_LINE(143)
		this->projection = ::phoenix::ProjectionType_obj::ortho;
		HX_STACK_LINE(145)
		this->_merge_options(_options);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Camera_obj,set_ortho,(void))

Void Camera_obj::set_perspective( Dynamic _options){
{
		HX_STACK_FRAME("phoenix.Camera","set_perspective",0xca12b775,"phoenix.Camera.set_perspective","phoenix/Camera.hx",149,0x1fcabb59)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_options,"_options")
		HX_STACK_LINE(152)
		this->projection = ::phoenix::ProjectionType_obj::perspective;
		HX_STACK_LINE(154)
		this->_merge_options(_options);
		HX_STACK_LINE(156)
		{
			HX_STACK_LINE(156)
			::phoenix::Vector _this = this->transform->origin;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(156)
			bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
			HX_STACK_LINE(156)
			_this->ignore_listeners = true;
			HX_STACK_LINE(156)
			{
				HX_STACK_LINE(156)
				_this->x = (int)0;
				HX_STACK_LINE(156)
				if ((_this->_construct)){
					HX_STACK_LINE(156)
					_this->x;
				}
				else{
					HX_STACK_LINE(156)
					if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
						HX_STACK_LINE(156)
						_this->listen_x((int)0);
					}
					HX_STACK_LINE(156)
					_this->x;
				}
			}
			HX_STACK_LINE(156)
			{
				HX_STACK_LINE(156)
				_this->y = (int)0;
				HX_STACK_LINE(156)
				if ((_this->_construct)){
					HX_STACK_LINE(156)
					_this->y;
				}
				else{
					HX_STACK_LINE(156)
					if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
						HX_STACK_LINE(156)
						_this->listen_y((int)0);
					}
					HX_STACK_LINE(156)
					_this->y;
				}
			}
			HX_STACK_LINE(156)
			{
				HX_STACK_LINE(156)
				_this->z = (int)0;
				HX_STACK_LINE(156)
				if ((_this->_construct)){
					HX_STACK_LINE(156)
					_this->z;
				}
				else{
					HX_STACK_LINE(156)
					if (((bool((_this->listen_z != null())) && bool(!(_this->ignore_listeners))))){
						HX_STACK_LINE(156)
						_this->listen_z((int)0);
					}
					HX_STACK_LINE(156)
					_this->z;
				}
			}
			HX_STACK_LINE(156)
			_this->ignore_listeners = prev;
			HX_STACK_LINE(156)
			if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
				HX_STACK_LINE(156)
				_this->listen_x(_this->x);
			}
			HX_STACK_LINE(156)
			if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
				HX_STACK_LINE(156)
				_this->listen_y(_this->y);
			}
			HX_STACK_LINE(156)
			if (((bool((_this->listen_z != null())) && bool(!(_this->ignore_listeners))))){
				HX_STACK_LINE(156)
				_this->listen_z(_this->z);
			}
			HX_STACK_LINE(156)
			_this;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Camera_obj,set_perspective,(void))

::phoenix::Vector Camera_obj::project( ::phoenix::Vector _vector){
	HX_STACK_FRAME("phoenix.Camera","project",0x37966a2f,"phoenix.Camera.project","phoenix/Camera.hx",161,0x1fcabb59)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_vector,"_vector")
	HX_STACK_LINE(163)
	this->update_view_matrix();
	HX_STACK_LINE(165)
	::phoenix::Matrix _transform;		HX_STACK_VAR(_transform,"_transform");
	HX_STACK_LINE(165)
	{
		HX_STACK_LINE(165)
		::phoenix::Matrix _this = ::phoenix::Matrix_obj::__new(null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(165)
		Array< Float > ae = this->projection_matrix->elements;		HX_STACK_VAR(ae,"ae");
		HX_STACK_LINE(165)
		Array< Float > be = this->view_matrix_inverse->elements;		HX_STACK_VAR(be,"be");
		HX_STACK_LINE(165)
		Array< Float > te = _this->elements;		HX_STACK_VAR(te,"te");
		HX_STACK_LINE(165)
		Float a11 = ae->__get((int)0);		HX_STACK_VAR(a11,"a11");
		HX_STACK_LINE(165)
		Float a12 = ae->__get((int)4);		HX_STACK_VAR(a12,"a12");
		HX_STACK_LINE(165)
		Float a13 = ae->__get((int)8);		HX_STACK_VAR(a13,"a13");
		HX_STACK_LINE(165)
		Float a14 = ae->__get((int)12);		HX_STACK_VAR(a14,"a14");
		HX_STACK_LINE(165)
		Float a21 = ae->__get((int)1);		HX_STACK_VAR(a21,"a21");
		HX_STACK_LINE(165)
		Float a22 = ae->__get((int)5);		HX_STACK_VAR(a22,"a22");
		HX_STACK_LINE(165)
		Float a23 = ae->__get((int)9);		HX_STACK_VAR(a23,"a23");
		HX_STACK_LINE(165)
		Float a24 = ae->__get((int)13);		HX_STACK_VAR(a24,"a24");
		HX_STACK_LINE(165)
		Float a31 = ae->__get((int)2);		HX_STACK_VAR(a31,"a31");
		HX_STACK_LINE(165)
		Float a32 = ae->__get((int)6);		HX_STACK_VAR(a32,"a32");
		HX_STACK_LINE(165)
		Float a33 = ae->__get((int)10);		HX_STACK_VAR(a33,"a33");
		HX_STACK_LINE(165)
		Float a34 = ae->__get((int)14);		HX_STACK_VAR(a34,"a34");
		HX_STACK_LINE(165)
		Float a41 = ae->__get((int)3);		HX_STACK_VAR(a41,"a41");
		HX_STACK_LINE(165)
		Float a42 = ae->__get((int)7);		HX_STACK_VAR(a42,"a42");
		HX_STACK_LINE(165)
		Float a43 = ae->__get((int)11);		HX_STACK_VAR(a43,"a43");
		HX_STACK_LINE(165)
		Float a44 = ae->__get((int)15);		HX_STACK_VAR(a44,"a44");
		HX_STACK_LINE(165)
		Float b11 = be->__get((int)0);		HX_STACK_VAR(b11,"b11");
		HX_STACK_LINE(165)
		Float b12 = be->__get((int)4);		HX_STACK_VAR(b12,"b12");
		HX_STACK_LINE(165)
		Float b13 = be->__get((int)8);		HX_STACK_VAR(b13,"b13");
		HX_STACK_LINE(165)
		Float b14 = be->__get((int)12);		HX_STACK_VAR(b14,"b14");
		HX_STACK_LINE(165)
		Float b21 = be->__get((int)1);		HX_STACK_VAR(b21,"b21");
		HX_STACK_LINE(165)
		Float b22 = be->__get((int)5);		HX_STACK_VAR(b22,"b22");
		HX_STACK_LINE(165)
		Float b23 = be->__get((int)9);		HX_STACK_VAR(b23,"b23");
		HX_STACK_LINE(165)
		Float b24 = be->__get((int)13);		HX_STACK_VAR(b24,"b24");
		HX_STACK_LINE(165)
		Float b31 = be->__get((int)2);		HX_STACK_VAR(b31,"b31");
		HX_STACK_LINE(165)
		Float b32 = be->__get((int)6);		HX_STACK_VAR(b32,"b32");
		HX_STACK_LINE(165)
		Float b33 = be->__get((int)10);		HX_STACK_VAR(b33,"b33");
		HX_STACK_LINE(165)
		Float b34 = be->__get((int)14);		HX_STACK_VAR(b34,"b34");
		HX_STACK_LINE(165)
		Float b41 = be->__get((int)3);		HX_STACK_VAR(b41,"b41");
		HX_STACK_LINE(165)
		Float b42 = be->__get((int)7);		HX_STACK_VAR(b42,"b42");
		HX_STACK_LINE(165)
		Float b43 = be->__get((int)11);		HX_STACK_VAR(b43,"b43");
		HX_STACK_LINE(165)
		Float b44 = be->__get((int)15);		HX_STACK_VAR(b44,"b44");
		HX_STACK_LINE(165)
		te[(int)0] = ((((a11 * b11) + (a12 * b21)) + (a13 * b31)) + (a14 * b41));
		HX_STACK_LINE(165)
		te[(int)4] = ((((a11 * b12) + (a12 * b22)) + (a13 * b32)) + (a14 * b42));
		HX_STACK_LINE(165)
		te[(int)8] = ((((a11 * b13) + (a12 * b23)) + (a13 * b33)) + (a14 * b43));
		HX_STACK_LINE(165)
		te[(int)12] = ((((a11 * b14) + (a12 * b24)) + (a13 * b34)) + (a14 * b44));
		HX_STACK_LINE(165)
		te[(int)1] = ((((a21 * b11) + (a22 * b21)) + (a23 * b31)) + (a24 * b41));
		HX_STACK_LINE(165)
		te[(int)5] = ((((a21 * b12) + (a22 * b22)) + (a23 * b32)) + (a24 * b42));
		HX_STACK_LINE(165)
		te[(int)9] = ((((a21 * b13) + (a22 * b23)) + (a23 * b33)) + (a24 * b43));
		HX_STACK_LINE(165)
		te[(int)13] = ((((a21 * b14) + (a22 * b24)) + (a23 * b34)) + (a24 * b44));
		HX_STACK_LINE(165)
		te[(int)2] = ((((a31 * b11) + (a32 * b21)) + (a33 * b31)) + (a34 * b41));
		HX_STACK_LINE(165)
		te[(int)6] = ((((a31 * b12) + (a32 * b22)) + (a33 * b32)) + (a34 * b42));
		HX_STACK_LINE(165)
		te[(int)10] = ((((a31 * b13) + (a32 * b23)) + (a33 * b33)) + (a34 * b43));
		HX_STACK_LINE(165)
		te[(int)14] = ((((a31 * b14) + (a32 * b24)) + (a33 * b34)) + (a34 * b44));
		HX_STACK_LINE(165)
		te[(int)3] = ((((a41 * b11) + (a42 * b21)) + (a43 * b31)) + (a44 * b41));
		HX_STACK_LINE(165)
		te[(int)7] = ((((a41 * b12) + (a42 * b22)) + (a43 * b32)) + (a44 * b42));
		HX_STACK_LINE(165)
		te[(int)11] = ((((a41 * b13) + (a42 * b23)) + (a43 * b33)) + (a44 * b43));
		HX_STACK_LINE(165)
		te[(int)15] = ((((a41 * b14) + (a42 * b24)) + (a43 * b34)) + (a44 * b44));
		HX_STACK_LINE(165)
		_transform = _this;
	}
	HX_STACK_LINE(166)
	::phoenix::Vector _this = ::phoenix::Vector_obj::__new(_vector->x,_vector->y,_vector->z,_vector->w);		HX_STACK_VAR(_this,"_this");
	HX_STACK_LINE(166)
	Array< Float > e = _transform->elements;		HX_STACK_VAR(e,"e");
	HX_STACK_LINE(166)
	Float x = _this->x;		HX_STACK_VAR(x,"x");
	HX_STACK_LINE(166)
	Float y = _this->y;		HX_STACK_VAR(y,"y");
	HX_STACK_LINE(166)
	Float z = _this->z;		HX_STACK_VAR(z,"z");
	HX_STACK_LINE(166)
	Float d = (Float((int)1) / Float((((((e->__get((int)3) * x) + (e->__get((int)7) * y)) + (e->__get((int)11) * z)) + e->__get((int)15)))));		HX_STACK_VAR(d,"d");
	HX_STACK_LINE(166)
	{
		HX_STACK_LINE(166)
		Float _x = ((((((e->__get((int)0) * x) + (e->__get((int)4) * y)) + (e->__get((int)8) * z)) + e->__get((int)12))) * d);		HX_STACK_VAR(_x,"_x");
		HX_STACK_LINE(166)
		Float _y = ((((((e->__get((int)1) * x) + (e->__get((int)5) * y)) + (e->__get((int)9) * z)) + e->__get((int)13))) * d);		HX_STACK_VAR(_y,"_y");
		HX_STACK_LINE(166)
		Float _z = ((((((e->__get((int)2) * x) + (e->__get((int)6) * y)) + (e->__get((int)10) * z)) + e->__get((int)14))) * d);		HX_STACK_VAR(_z,"_z");
		HX_STACK_LINE(166)
		bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
		HX_STACK_LINE(166)
		_this->ignore_listeners = true;
		HX_STACK_LINE(166)
		{
			HX_STACK_LINE(166)
			_this->x = _x;
			HX_STACK_LINE(166)
			if ((_this->_construct)){
				HX_STACK_LINE(166)
				_this->x;
			}
			else{
				HX_STACK_LINE(166)
				if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
					HX_STACK_LINE(166)
					_this->listen_x(_x);
				}
				HX_STACK_LINE(166)
				_this->x;
			}
		}
		HX_STACK_LINE(166)
		{
			HX_STACK_LINE(166)
			_this->y = _y;
			HX_STACK_LINE(166)
			if ((_this->_construct)){
				HX_STACK_LINE(166)
				_this->y;
			}
			else{
				HX_STACK_LINE(166)
				if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
					HX_STACK_LINE(166)
					_this->listen_y(_y);
				}
				HX_STACK_LINE(166)
				_this->y;
			}
		}
		HX_STACK_LINE(166)
		{
			HX_STACK_LINE(166)
			_this->z = _z;
			HX_STACK_LINE(166)
			if ((_this->_construct)){
				HX_STACK_LINE(166)
				_this->z;
			}
			else{
				HX_STACK_LINE(166)
				if (((bool((_this->listen_z != null())) && bool(!(_this->ignore_listeners))))){
					HX_STACK_LINE(166)
					_this->listen_z(_z);
				}
				HX_STACK_LINE(166)
				_this->z;
			}
		}
		HX_STACK_LINE(166)
		_this->ignore_listeners = prev;
		HX_STACK_LINE(166)
		if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
			HX_STACK_LINE(166)
			_this->listen_x(_this->x);
		}
		HX_STACK_LINE(166)
		if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
			HX_STACK_LINE(166)
			_this->listen_y(_this->y);
		}
		HX_STACK_LINE(166)
		if (((bool((_this->listen_z != null())) && bool(!(_this->ignore_listeners))))){
			HX_STACK_LINE(166)
			_this->listen_z(_this->z);
		}
		HX_STACK_LINE(166)
		_this;
	}
	HX_STACK_LINE(166)
	return _this;
}


HX_DEFINE_DYNAMIC_FUNC1(Camera_obj,project,return )

::phoenix::Vector Camera_obj::unproject( ::phoenix::Vector _vector){
	HX_STACK_FRAME("phoenix.Camera","unproject",0x769d7276,"phoenix.Camera.unproject","phoenix/Camera.hx",171,0x1fcabb59)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_vector,"_vector")
	HX_STACK_LINE(173)
	this->update_view_matrix();
	HX_STACK_LINE(175)
	::phoenix::Matrix _inverted;		HX_STACK_VAR(_inverted,"_inverted");
	HX_STACK_LINE(175)
	{
		HX_STACK_LINE(175)
		::phoenix::Matrix _this = ::phoenix::Matrix_obj::__new(null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(175)
		Array< Float > ae = this->projection_matrix->elements;		HX_STACK_VAR(ae,"ae");
		HX_STACK_LINE(175)
		Array< Float > be = this->view_matrix_inverse->elements;		HX_STACK_VAR(be,"be");
		HX_STACK_LINE(175)
		Array< Float > te = _this->elements;		HX_STACK_VAR(te,"te");
		HX_STACK_LINE(175)
		Float a11 = ae->__get((int)0);		HX_STACK_VAR(a11,"a11");
		HX_STACK_LINE(175)
		Float a12 = ae->__get((int)4);		HX_STACK_VAR(a12,"a12");
		HX_STACK_LINE(175)
		Float a13 = ae->__get((int)8);		HX_STACK_VAR(a13,"a13");
		HX_STACK_LINE(175)
		Float a14 = ae->__get((int)12);		HX_STACK_VAR(a14,"a14");
		HX_STACK_LINE(175)
		Float a21 = ae->__get((int)1);		HX_STACK_VAR(a21,"a21");
		HX_STACK_LINE(175)
		Float a22 = ae->__get((int)5);		HX_STACK_VAR(a22,"a22");
		HX_STACK_LINE(175)
		Float a23 = ae->__get((int)9);		HX_STACK_VAR(a23,"a23");
		HX_STACK_LINE(175)
		Float a24 = ae->__get((int)13);		HX_STACK_VAR(a24,"a24");
		HX_STACK_LINE(175)
		Float a31 = ae->__get((int)2);		HX_STACK_VAR(a31,"a31");
		HX_STACK_LINE(175)
		Float a32 = ae->__get((int)6);		HX_STACK_VAR(a32,"a32");
		HX_STACK_LINE(175)
		Float a33 = ae->__get((int)10);		HX_STACK_VAR(a33,"a33");
		HX_STACK_LINE(175)
		Float a34 = ae->__get((int)14);		HX_STACK_VAR(a34,"a34");
		HX_STACK_LINE(175)
		Float a41 = ae->__get((int)3);		HX_STACK_VAR(a41,"a41");
		HX_STACK_LINE(175)
		Float a42 = ae->__get((int)7);		HX_STACK_VAR(a42,"a42");
		HX_STACK_LINE(175)
		Float a43 = ae->__get((int)11);		HX_STACK_VAR(a43,"a43");
		HX_STACK_LINE(175)
		Float a44 = ae->__get((int)15);		HX_STACK_VAR(a44,"a44");
		HX_STACK_LINE(175)
		Float b11 = be->__get((int)0);		HX_STACK_VAR(b11,"b11");
		HX_STACK_LINE(175)
		Float b12 = be->__get((int)4);		HX_STACK_VAR(b12,"b12");
		HX_STACK_LINE(175)
		Float b13 = be->__get((int)8);		HX_STACK_VAR(b13,"b13");
		HX_STACK_LINE(175)
		Float b14 = be->__get((int)12);		HX_STACK_VAR(b14,"b14");
		HX_STACK_LINE(175)
		Float b21 = be->__get((int)1);		HX_STACK_VAR(b21,"b21");
		HX_STACK_LINE(175)
		Float b22 = be->__get((int)5);		HX_STACK_VAR(b22,"b22");
		HX_STACK_LINE(175)
		Float b23 = be->__get((int)9);		HX_STACK_VAR(b23,"b23");
		HX_STACK_LINE(175)
		Float b24 = be->__get((int)13);		HX_STACK_VAR(b24,"b24");
		HX_STACK_LINE(175)
		Float b31 = be->__get((int)2);		HX_STACK_VAR(b31,"b31");
		HX_STACK_LINE(175)
		Float b32 = be->__get((int)6);		HX_STACK_VAR(b32,"b32");
		HX_STACK_LINE(175)
		Float b33 = be->__get((int)10);		HX_STACK_VAR(b33,"b33");
		HX_STACK_LINE(175)
		Float b34 = be->__get((int)14);		HX_STACK_VAR(b34,"b34");
		HX_STACK_LINE(175)
		Float b41 = be->__get((int)3);		HX_STACK_VAR(b41,"b41");
		HX_STACK_LINE(175)
		Float b42 = be->__get((int)7);		HX_STACK_VAR(b42,"b42");
		HX_STACK_LINE(175)
		Float b43 = be->__get((int)11);		HX_STACK_VAR(b43,"b43");
		HX_STACK_LINE(175)
		Float b44 = be->__get((int)15);		HX_STACK_VAR(b44,"b44");
		HX_STACK_LINE(175)
		te[(int)0] = ((((a11 * b11) + (a12 * b21)) + (a13 * b31)) + (a14 * b41));
		HX_STACK_LINE(175)
		te[(int)4] = ((((a11 * b12) + (a12 * b22)) + (a13 * b32)) + (a14 * b42));
		HX_STACK_LINE(175)
		te[(int)8] = ((((a11 * b13) + (a12 * b23)) + (a13 * b33)) + (a14 * b43));
		HX_STACK_LINE(175)
		te[(int)12] = ((((a11 * b14) + (a12 * b24)) + (a13 * b34)) + (a14 * b44));
		HX_STACK_LINE(175)
		te[(int)1] = ((((a21 * b11) + (a22 * b21)) + (a23 * b31)) + (a24 * b41));
		HX_STACK_LINE(175)
		te[(int)5] = ((((a21 * b12) + (a22 * b22)) + (a23 * b32)) + (a24 * b42));
		HX_STACK_LINE(175)
		te[(int)9] = ((((a21 * b13) + (a22 * b23)) + (a23 * b33)) + (a24 * b43));
		HX_STACK_LINE(175)
		te[(int)13] = ((((a21 * b14) + (a22 * b24)) + (a23 * b34)) + (a24 * b44));
		HX_STACK_LINE(175)
		te[(int)2] = ((((a31 * b11) + (a32 * b21)) + (a33 * b31)) + (a34 * b41));
		HX_STACK_LINE(175)
		te[(int)6] = ((((a31 * b12) + (a32 * b22)) + (a33 * b32)) + (a34 * b42));
		HX_STACK_LINE(175)
		te[(int)10] = ((((a31 * b13) + (a32 * b23)) + (a33 * b33)) + (a34 * b43));
		HX_STACK_LINE(175)
		te[(int)14] = ((((a31 * b14) + (a32 * b24)) + (a33 * b34)) + (a34 * b44));
		HX_STACK_LINE(175)
		te[(int)3] = ((((a41 * b11) + (a42 * b21)) + (a43 * b31)) + (a44 * b41));
		HX_STACK_LINE(175)
		te[(int)7] = ((((a41 * b12) + (a42 * b22)) + (a43 * b32)) + (a44 * b42));
		HX_STACK_LINE(175)
		te[(int)11] = ((((a41 * b13) + (a42 * b23)) + (a43 * b33)) + (a44 * b43));
		HX_STACK_LINE(175)
		te[(int)15] = ((((a41 * b14) + (a42 * b24)) + (a43 * b34)) + (a44 * b44));
		HX_STACK_LINE(175)
		_inverted = _this;
	}
	HX_STACK_LINE(176)
	::phoenix::Vector _this = ::phoenix::Vector_obj::__new(_vector->x,_vector->y,_vector->z,_vector->w);		HX_STACK_VAR(_this,"_this");
	HX_STACK_LINE(176)
	::phoenix::Matrix m;		HX_STACK_VAR(m,"m");
	HX_STACK_LINE(176)
	{
		HX_STACK_LINE(176)
		Array< Float > te = _inverted->elements;		HX_STACK_VAR(te,"te");
		HX_STACK_LINE(176)
		Array< Float > me = _inverted->elements;		HX_STACK_VAR(me,"me");
		HX_STACK_LINE(176)
		Float n11 = me->__get((int)0);		HX_STACK_VAR(n11,"n11");
		HX_STACK_LINE(176)
		Float n12 = me->__get((int)4);		HX_STACK_VAR(n12,"n12");
		HX_STACK_LINE(176)
		Float n13 = me->__get((int)8);		HX_STACK_VAR(n13,"n13");
		HX_STACK_LINE(176)
		Float n14 = me->__get((int)12);		HX_STACK_VAR(n14,"n14");
		HX_STACK_LINE(176)
		Float n21 = me->__get((int)1);		HX_STACK_VAR(n21,"n21");
		HX_STACK_LINE(176)
		Float n22 = me->__get((int)5);		HX_STACK_VAR(n22,"n22");
		HX_STACK_LINE(176)
		Float n23 = me->__get((int)9);		HX_STACK_VAR(n23,"n23");
		HX_STACK_LINE(176)
		Float n24 = me->__get((int)13);		HX_STACK_VAR(n24,"n24");
		HX_STACK_LINE(176)
		Float n31 = me->__get((int)2);		HX_STACK_VAR(n31,"n31");
		HX_STACK_LINE(176)
		Float n32 = me->__get((int)6);		HX_STACK_VAR(n32,"n32");
		HX_STACK_LINE(176)
		Float n33 = me->__get((int)10);		HX_STACK_VAR(n33,"n33");
		HX_STACK_LINE(176)
		Float n34 = me->__get((int)14);		HX_STACK_VAR(n34,"n34");
		HX_STACK_LINE(176)
		Float n41 = me->__get((int)3);		HX_STACK_VAR(n41,"n41");
		HX_STACK_LINE(176)
		Float n42 = me->__get((int)7);		HX_STACK_VAR(n42,"n42");
		HX_STACK_LINE(176)
		Float n43 = me->__get((int)11);		HX_STACK_VAR(n43,"n43");
		HX_STACK_LINE(176)
		Float n44 = me->__get((int)15);		HX_STACK_VAR(n44,"n44");
		HX_STACK_LINE(176)
		te[(int)0] = (((((((n23 * n34) * n42) - ((n24 * n33) * n42)) + ((n24 * n32) * n43)) - ((n22 * n34) * n43)) - ((n23 * n32) * n44)) + ((n22 * n33) * n44));
		HX_STACK_LINE(176)
		te[(int)4] = (((((((n14 * n33) * n42) - ((n13 * n34) * n42)) - ((n14 * n32) * n43)) + ((n12 * n34) * n43)) + ((n13 * n32) * n44)) - ((n12 * n33) * n44));
		HX_STACK_LINE(176)
		te[(int)8] = (((((((n13 * n24) * n42) - ((n14 * n23) * n42)) + ((n14 * n22) * n43)) - ((n12 * n24) * n43)) - ((n13 * n22) * n44)) + ((n12 * n23) * n44));
		HX_STACK_LINE(176)
		te[(int)12] = (((((((n14 * n23) * n32) - ((n13 * n24) * n32)) - ((n14 * n22) * n33)) + ((n12 * n24) * n33)) + ((n13 * n22) * n34)) - ((n12 * n23) * n34));
		HX_STACK_LINE(176)
		te[(int)1] = (((((((n24 * n33) * n41) - ((n23 * n34) * n41)) - ((n24 * n31) * n43)) + ((n21 * n34) * n43)) + ((n23 * n31) * n44)) - ((n21 * n33) * n44));
		HX_STACK_LINE(176)
		te[(int)5] = (((((((n13 * n34) * n41) - ((n14 * n33) * n41)) + ((n14 * n31) * n43)) - ((n11 * n34) * n43)) - ((n13 * n31) * n44)) + ((n11 * n33) * n44));
		HX_STACK_LINE(176)
		te[(int)9] = (((((((n14 * n23) * n41) - ((n13 * n24) * n41)) - ((n14 * n21) * n43)) + ((n11 * n24) * n43)) + ((n13 * n21) * n44)) - ((n11 * n23) * n44));
		HX_STACK_LINE(176)
		te[(int)13] = (((((((n13 * n24) * n31) - ((n14 * n23) * n31)) + ((n14 * n21) * n33)) - ((n11 * n24) * n33)) - ((n13 * n21) * n34)) + ((n11 * n23) * n34));
		HX_STACK_LINE(176)
		te[(int)2] = (((((((n22 * n34) * n41) - ((n24 * n32) * n41)) + ((n24 * n31) * n42)) - ((n21 * n34) * n42)) - ((n22 * n31) * n44)) + ((n21 * n32) * n44));
		HX_STACK_LINE(176)
		te[(int)6] = (((((((n14 * n32) * n41) - ((n12 * n34) * n41)) - ((n14 * n31) * n42)) + ((n11 * n34) * n42)) + ((n12 * n31) * n44)) - ((n11 * n32) * n44));
		HX_STACK_LINE(176)
		te[(int)10] = (((((((n12 * n24) * n41) - ((n14 * n22) * n41)) + ((n14 * n21) * n42)) - ((n11 * n24) * n42)) - ((n12 * n21) * n44)) + ((n11 * n22) * n44));
		HX_STACK_LINE(176)
		te[(int)14] = (((((((n14 * n22) * n31) - ((n12 * n24) * n31)) - ((n14 * n21) * n32)) + ((n11 * n24) * n32)) + ((n12 * n21) * n34)) - ((n11 * n22) * n34));
		HX_STACK_LINE(176)
		te[(int)3] = (((((((n23 * n32) * n41) - ((n22 * n33) * n41)) - ((n23 * n31) * n42)) + ((n21 * n33) * n42)) + ((n22 * n31) * n43)) - ((n21 * n32) * n43));
		HX_STACK_LINE(176)
		te[(int)7] = (((((((n12 * n33) * n41) - ((n13 * n32) * n41)) + ((n13 * n31) * n42)) - ((n11 * n33) * n42)) - ((n12 * n31) * n43)) + ((n11 * n32) * n43));
		HX_STACK_LINE(176)
		te[(int)11] = (((((((n13 * n22) * n41) - ((n12 * n23) * n41)) - ((n13 * n21) * n42)) + ((n11 * n23) * n42)) + ((n12 * n21) * n43)) - ((n11 * n22) * n43));
		HX_STACK_LINE(176)
		te[(int)15] = (((((((n12 * n23) * n31) - ((n13 * n22) * n31)) + ((n13 * n21) * n32)) - ((n11 * n23) * n32)) - ((n12 * n21) * n33)) + ((n11 * n22) * n33));
		HX_STACK_LINE(176)
		Float det = ((((me->__get((int)0) * te->__get((int)0)) + (me->__get((int)1) * te->__get((int)4))) + (me->__get((int)2) * te->__get((int)8))) + (me->__get((int)3) * te->__get((int)12)));		HX_STACK_VAR(det,"det");
		HX_STACK_LINE(176)
		if (((det == (int)0))){
			HX_STACK_LINE(176)
			::haxe::Log_obj::trace(HX_CSTRING("Matrix.getInverse: cant invert matrix, determinant is 0"),hx::SourceInfo(HX_CSTRING("Matrix.hx"),699,HX_CSTRING("phoenix.Matrix"),HX_CSTRING("getInverse")));
			HX_STACK_LINE(176)
			{
				HX_STACK_LINE(176)
				{
					HX_STACK_LINE(176)
					Array< Float > e = _inverted->elements;		HX_STACK_VAR(e,"e");
					HX_STACK_LINE(176)
					e[(int)0] = (int)1;
					HX_STACK_LINE(176)
					e[(int)4] = (int)0;
					HX_STACK_LINE(176)
					e[(int)8] = (int)0;
					HX_STACK_LINE(176)
					e[(int)12] = (int)0;
					HX_STACK_LINE(176)
					e[(int)1] = (int)0;
					HX_STACK_LINE(176)
					e[(int)5] = (int)1;
					HX_STACK_LINE(176)
					e[(int)9] = (int)0;
					HX_STACK_LINE(176)
					e[(int)13] = (int)0;
					HX_STACK_LINE(176)
					e[(int)2] = (int)0;
					HX_STACK_LINE(176)
					e[(int)6] = (int)0;
					HX_STACK_LINE(176)
					e[(int)10] = (int)1;
					HX_STACK_LINE(176)
					e[(int)14] = (int)0;
					HX_STACK_LINE(176)
					e[(int)3] = (int)0;
					HX_STACK_LINE(176)
					e[(int)7] = (int)0;
					HX_STACK_LINE(176)
					e[(int)11] = (int)0;
					HX_STACK_LINE(176)
					e[(int)15] = (int)1;
					HX_STACK_LINE(176)
					_inverted;
				}
				HX_STACK_LINE(176)
				_inverted;
			}
			HX_STACK_LINE(176)
			m = _inverted;
		}
		else{
			HX_STACK_LINE(176)
			{
				HX_STACK_LINE(176)
				Float _s = (Float((int)1) / Float(det));		HX_STACK_VAR(_s,"_s");
				HX_STACK_LINE(176)
				Array< Float > te1 = _inverted->elements;		HX_STACK_VAR(te1,"te1");
				HX_STACK_LINE(176)
				hx::MultEq(te1[(int)0],_s);
				HX_STACK_LINE(176)
				hx::MultEq(te1[(int)4],_s);
				HX_STACK_LINE(176)
				hx::MultEq(te1[(int)8],_s);
				HX_STACK_LINE(176)
				hx::MultEq(te1[(int)12],_s);
				HX_STACK_LINE(176)
				hx::MultEq(te1[(int)1],_s);
				HX_STACK_LINE(176)
				hx::MultEq(te1[(int)5],_s);
				HX_STACK_LINE(176)
				hx::MultEq(te1[(int)9],_s);
				HX_STACK_LINE(176)
				hx::MultEq(te1[(int)13],_s);
				HX_STACK_LINE(176)
				hx::MultEq(te1[(int)2],_s);
				HX_STACK_LINE(176)
				hx::MultEq(te1[(int)6],_s);
				HX_STACK_LINE(176)
				hx::MultEq(te1[(int)10],_s);
				HX_STACK_LINE(176)
				hx::MultEq(te1[(int)14],_s);
				HX_STACK_LINE(176)
				hx::MultEq(te1[(int)3],_s);
				HX_STACK_LINE(176)
				hx::MultEq(te1[(int)7],_s);
				HX_STACK_LINE(176)
				hx::MultEq(te1[(int)11],_s);
				HX_STACK_LINE(176)
				hx::MultEq(te1[(int)15],_s);
				HX_STACK_LINE(176)
				_inverted;
			}
			HX_STACK_LINE(176)
			m = _inverted;
		}
	}
	HX_STACK_LINE(176)
	Array< Float > e = m->elements;		HX_STACK_VAR(e,"e");
	HX_STACK_LINE(176)
	Float x = _this->x;		HX_STACK_VAR(x,"x");
	HX_STACK_LINE(176)
	Float y = _this->y;		HX_STACK_VAR(y,"y");
	HX_STACK_LINE(176)
	Float z = _this->z;		HX_STACK_VAR(z,"z");
	HX_STACK_LINE(176)
	Float d = (Float((int)1) / Float((((((e->__get((int)3) * x) + (e->__get((int)7) * y)) + (e->__get((int)11) * z)) + e->__get((int)15)))));		HX_STACK_VAR(d,"d");
	HX_STACK_LINE(176)
	{
		HX_STACK_LINE(176)
		Float _x = ((((((e->__get((int)0) * x) + (e->__get((int)4) * y)) + (e->__get((int)8) * z)) + e->__get((int)12))) * d);		HX_STACK_VAR(_x,"_x");
		HX_STACK_LINE(176)
		Float _y = ((((((e->__get((int)1) * x) + (e->__get((int)5) * y)) + (e->__get((int)9) * z)) + e->__get((int)13))) * d);		HX_STACK_VAR(_y,"_y");
		HX_STACK_LINE(176)
		Float _z = ((((((e->__get((int)2) * x) + (e->__get((int)6) * y)) + (e->__get((int)10) * z)) + e->__get((int)14))) * d);		HX_STACK_VAR(_z,"_z");
		HX_STACK_LINE(176)
		bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
		HX_STACK_LINE(176)
		_this->ignore_listeners = true;
		HX_STACK_LINE(176)
		{
			HX_STACK_LINE(176)
			_this->x = _x;
			HX_STACK_LINE(176)
			if ((_this->_construct)){
				HX_STACK_LINE(176)
				_this->x;
			}
			else{
				HX_STACK_LINE(176)
				if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
					HX_STACK_LINE(176)
					_this->listen_x(_x);
				}
				HX_STACK_LINE(176)
				_this->x;
			}
		}
		HX_STACK_LINE(176)
		{
			HX_STACK_LINE(176)
			_this->y = _y;
			HX_STACK_LINE(176)
			if ((_this->_construct)){
				HX_STACK_LINE(176)
				_this->y;
			}
			else{
				HX_STACK_LINE(176)
				if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
					HX_STACK_LINE(176)
					_this->listen_y(_y);
				}
				HX_STACK_LINE(176)
				_this->y;
			}
		}
		HX_STACK_LINE(176)
		{
			HX_STACK_LINE(176)
			_this->z = _z;
			HX_STACK_LINE(176)
			if ((_this->_construct)){
				HX_STACK_LINE(176)
				_this->z;
			}
			else{
				HX_STACK_LINE(176)
				if (((bool((_this->listen_z != null())) && bool(!(_this->ignore_listeners))))){
					HX_STACK_LINE(176)
					_this->listen_z(_z);
				}
				HX_STACK_LINE(176)
				_this->z;
			}
		}
		HX_STACK_LINE(176)
		_this->ignore_listeners = prev;
		HX_STACK_LINE(176)
		if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
			HX_STACK_LINE(176)
			_this->listen_x(_this->x);
		}
		HX_STACK_LINE(176)
		if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
			HX_STACK_LINE(176)
			_this->listen_y(_this->y);
		}
		HX_STACK_LINE(176)
		if (((bool((_this->listen_z != null())) && bool(!(_this->ignore_listeners))))){
			HX_STACK_LINE(176)
			_this->listen_z(_this->z);
		}
		HX_STACK_LINE(176)
		_this;
	}
	HX_STACK_LINE(176)
	return _this;
}


HX_DEFINE_DYNAMIC_FUNC1(Camera_obj,unproject,return )

::phoenix::Ray Camera_obj::screen_point_to_ray( ::phoenix::Vector _vector){
	HX_STACK_FRAME("phoenix.Camera","screen_point_to_ray",0x118f857e,"phoenix.Camera.screen_point_to_ray","phoenix/Camera.hx",182,0x1fcabb59)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_vector,"_vector")
	HX_STACK_LINE(182)
	return ::phoenix::Ray_obj::__new(_vector,hx::ObjectPtr<OBJ_>(this),null());
}


HX_DEFINE_DYNAMIC_FUNC1(Camera_obj,screen_point_to_ray,return )

::phoenix::Vector Camera_obj::screen_point_to_world( ::phoenix::Vector _vector){
	HX_STACK_FRAME("phoenix.Camera","screen_point_to_world",0x22d752e6,"phoenix.Camera.screen_point_to_world","phoenix/Camera.hx",186,0x1fcabb59)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_vector,"_vector")
	HX_STACK_LINE(188)
	if (((this->projection == ::phoenix::ProjectionType_obj::ortho))){
		HX_STACK_LINE(189)
		return this->ortho_screen_to_world(_vector);
	}
	else{
		HX_STACK_LINE(190)
		if (((this->projection == ::phoenix::ProjectionType_obj::perspective))){
			HX_STACK_LINE(191)
			return this->screen_point_to_ray(_vector)->end;
		}
	}
	HX_STACK_LINE(195)
	return this->ortho_screen_to_world(_vector);
}


HX_DEFINE_DYNAMIC_FUNC1(Camera_obj,screen_point_to_world,return )

::phoenix::Vector Camera_obj::world_point_to_screen( ::phoenix::Vector _vector,::phoenix::Rectangle _viewport){
	HX_STACK_FRAME("phoenix.Camera","world_point_to_screen",0x231a6faa,"phoenix.Camera.world_point_to_screen","phoenix/Camera.hx",199,0x1fcabb59)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_vector,"_vector")
	HX_STACK_ARG(_viewport,"_viewport")
	HX_STACK_LINE(201)
	if (((this->projection == ::phoenix::ProjectionType_obj::ortho))){
		HX_STACK_LINE(202)
		return this->ortho_world_to_screen(_vector);
	}
	else{
		HX_STACK_LINE(203)
		if (((this->projection == ::phoenix::ProjectionType_obj::perspective))){
			HX_STACK_LINE(204)
			return this->persepective_world_to_screen(_vector,_viewport);
		}
	}
	HX_STACK_LINE(208)
	return this->ortho_world_to_screen(_vector);
}


HX_DEFINE_DYNAMIC_FUNC2(Camera_obj,world_point_to_screen,return )

Void Camera_obj::process( ){
{
		HX_STACK_FRAME("phoenix.Camera","process",0x32f5f9c5,"phoenix.Camera.process","phoenix/Camera.hx",216,0x1fcabb59)
		HX_STACK_THIS(this)
		HX_STACK_LINE(221)
		if (((this->target != null()))){
			HX_STACK_LINE(222)
			this->update_look_at();
		}
		HX_STACK_LINE(226)
		this->update_projection_matrix();
		HX_STACK_LINE(227)
		this->update_view_matrix();
		HX_STACK_LINE(230)
		this->apply_state((int)2884,this->options->__Field(HX_CSTRING("cull_backfaces"),true));
		HX_STACK_LINE(231)
		this->apply_state((int)2929,this->options->__Field(HX_CSTRING("depth_test"),true));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Camera_obj,process,(void))

Void Camera_obj::on_transform_cleaned( ::phoenix::Transform t){
{
		HX_STACK_FRAME("phoenix.Camera","on_transform_cleaned",0x6436d59f,"phoenix.Camera.on_transform_cleaned","phoenix/Camera.hx",240,0x1fcabb59)
		HX_STACK_THIS(this)
		HX_STACK_ARG(t,"t")
		HX_STACK_LINE(240)
		this->transform_dirty = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Camera_obj,on_transform_cleaned,(void))

Void Camera_obj::update_look_at( ){
{
		HX_STACK_FRAME("phoenix.Camera","update_look_at",0x27c83a07,"phoenix.Camera.update_look_at","phoenix/Camera.hx",246,0x1fcabb59)
		HX_STACK_THIS(this)
		HX_STACK_LINE(246)
		if (((bool(this->look_at_dirty) && bool((this->target != null()))))){
			HX_STACK_LINE(248)
			{
				HX_STACK_LINE(248)
				::phoenix::Matrix _this = this->look_at_matrix;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(248)
				::phoenix::Vector _eye = this->target;		HX_STACK_VAR(_eye,"_eye");
				HX_STACK_LINE(248)
				::phoenix::Vector _target = this->get_pos();		HX_STACK_VAR(_target,"_target");
				HX_STACK_LINE(248)
				::phoenix::Vector _up = this->up;		HX_STACK_VAR(_up,"_up");
				HX_STACK_LINE(248)
				::phoenix::Vector _x = ::phoenix::Vector_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(_x,"_x");
				HX_STACK_LINE(248)
				::phoenix::Vector _y = ::phoenix::Vector_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(_y,"_y");
				HX_STACK_LINE(248)
				::phoenix::Vector _z = ::phoenix::Vector_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(_z,"_z");
				HX_STACK_LINE(248)
				Array< Float > te = _this->elements;		HX_STACK_VAR(te,"te");
				HX_STACK_LINE(248)
				::phoenix::Vector _g;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(248)
				{
					HX_STACK_LINE(248)
					::phoenix::Vector _this1 = ::phoenix::Vector_obj::__new((_target->x - _eye->x),(_target->y - _eye->y),(_target->z - _eye->z),null());		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(248)
					{
						HX_STACK_LINE(248)
						Float b = ::Math_obj::sqrt((((_this1->x * _this1->x) + (_this1->y * _this1->y)) + (_this1->z * _this1->z)));		HX_STACK_VAR(b,"b");
						HX_STACK_LINE(248)
						_g = ::phoenix::Vector_obj::__new((Float(_this1->x) / Float(b)),(Float(_this1->y) / Float(b)),(Float(_this1->z) / Float(b)),null());
					}
				}
				HX_STACK_LINE(248)
				_z = _g;
				HX_STACK_LINE(248)
				Float _g1 = ::Math_obj::sqrt((((_z->x * _z->x) + (_z->y * _z->y)) + (_z->z * _z->z)));		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(248)
				if (((_g1 == (int)0))){
					HX_STACK_LINE(248)
					_z->z = (int)1;
					HX_STACK_LINE(248)
					if ((_z->_construct)){
						HX_STACK_LINE(248)
						_z->z;
					}
					else{
						HX_STACK_LINE(248)
						if (((bool((_z->listen_z != null())) && bool(!(_z->ignore_listeners))))){
							HX_STACK_LINE(248)
							_z->listen_z((int)1);
						}
						HX_STACK_LINE(248)
						_z->z;
					}
				}
				HX_STACK_LINE(248)
				::phoenix::Vector _g2;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(248)
				{
					HX_STACK_LINE(248)
					::phoenix::Vector _this1 = ::phoenix::Vector_obj::__new(((_up->y * _z->z) - (_up->z * _z->y)),((_up->z * _z->x) - (_up->x * _z->z)),((_up->x * _z->y) - (_up->y * _z->x)),null());		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(248)
					{
						HX_STACK_LINE(248)
						Float b = ::Math_obj::sqrt((((_this1->x * _this1->x) + (_this1->y * _this1->y)) + (_this1->z * _this1->z)));		HX_STACK_VAR(b,"b");
						HX_STACK_LINE(248)
						_g2 = ::phoenix::Vector_obj::__new((Float(_this1->x) / Float(b)),(Float(_this1->y) / Float(b)),(Float(_this1->z) / Float(b)),null());
					}
				}
				HX_STACK_LINE(248)
				_x = _g2;
				HX_STACK_LINE(248)
				Float _g3 = ::Math_obj::sqrt((((_x->x * _x->x) + (_x->y * _x->y)) + (_x->z * _x->z)));		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(248)
				if (((_g3 == (int)0))){
					HX_STACK_LINE(248)
					{
						HX_STACK_LINE(248)
						::phoenix::Vector _g4 = _z;		HX_STACK_VAR(_g4,"_g4");
						HX_STACK_LINE(248)
						{
							HX_STACK_LINE(248)
							Float _x1 = (_g4->x + 0.0001);		HX_STACK_VAR(_x1,"_x1");
							HX_STACK_LINE(248)
							_g4->x = _x1;
							HX_STACK_LINE(248)
							if ((_g4->_construct)){
								HX_STACK_LINE(248)
								_g4->x;
							}
							else{
								HX_STACK_LINE(248)
								if (((bool((_g4->listen_x != null())) && bool(!(_g4->ignore_listeners))))){
									HX_STACK_LINE(248)
									_g4->listen_x(_x1);
								}
								HX_STACK_LINE(248)
								_g4->x;
							}
						}
					}
					HX_STACK_LINE(248)
					::phoenix::Vector _g4;		HX_STACK_VAR(_g4,"_g4");
					HX_STACK_LINE(248)
					{
						HX_STACK_LINE(248)
						::phoenix::Vector _this1 = ::phoenix::Vector_obj::__new(((_up->y * _z->z) - (_up->z * _z->y)),((_up->z * _z->x) - (_up->x * _z->z)),((_up->x * _z->y) - (_up->y * _z->x)),null());		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(248)
						{
							HX_STACK_LINE(248)
							Float b = ::Math_obj::sqrt((((_this1->x * _this1->x) + (_this1->y * _this1->y)) + (_this1->z * _this1->z)));		HX_STACK_VAR(b,"b");
							HX_STACK_LINE(248)
							_g4 = ::phoenix::Vector_obj::__new((Float(_this1->x) / Float(b)),(Float(_this1->y) / Float(b)),(Float(_this1->z) / Float(b)),null());
						}
					}
					HX_STACK_LINE(248)
					_x = _g4;
				}
				HX_STACK_LINE(248)
				::phoenix::Vector _g5 = ::phoenix::Vector_obj::__new(((_z->y * _x->z) - (_z->z * _x->y)),((_z->z * _x->x) - (_z->x * _x->z)),((_z->x * _x->y) - (_z->y * _x->x)),null());		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(248)
				_y = _g5;
				HX_STACK_LINE(248)
				te[(int)0] = _x->x;
				HX_STACK_LINE(248)
				te[(int)4] = _y->x;
				HX_STACK_LINE(248)
				te[(int)8] = _z->x;
				HX_STACK_LINE(248)
				te[(int)1] = _x->y;
				HX_STACK_LINE(248)
				te[(int)5] = _y->y;
				HX_STACK_LINE(248)
				te[(int)9] = _z->y;
				HX_STACK_LINE(248)
				te[(int)2] = _x->z;
				HX_STACK_LINE(248)
				te[(int)6] = _y->z;
				HX_STACK_LINE(248)
				te[(int)10] = _z->z;
				HX_STACK_LINE(248)
				_this;
			}
			HX_STACK_LINE(250)
			this->get_rotation()->setFromRotationMatrix(this->look_at_matrix);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Camera_obj,update_look_at,(void))

Void Camera_obj::update_view_matrix( ){
{
		HX_STACK_FRAME("phoenix.Camera","update_view_matrix",0x11cad60f,"phoenix.Camera.update_view_matrix","phoenix/Camera.hx",256,0x1fcabb59)
		HX_STACK_THIS(this)
		HX_STACK_LINE(258)
		::phoenix::Matrix _g14;		HX_STACK_VAR(_g14,"_g14");
		HX_STACK_LINE(258)
		{
			HX_STACK_LINE(258)
			::phoenix::Spatial _this;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(258)
			{
				HX_STACK_LINE(258)
				::phoenix::Transform _this1 = this->transform;		HX_STACK_VAR(_this1,"_this1");
				HX_STACK_LINE(258)
				if ((!(_this1->_destroying))){
					HX_STACK_LINE(258)
					if (((_this1->parent != null()))){
						HX_STACK_LINE(258)
						if ((_this1->parent->dirty)){
							HX_STACK_LINE(258)
							::phoenix::Transform _this2 = _this1->parent;		HX_STACK_VAR(_this2,"_this2");
							HX_STACK_LINE(258)
							if ((!(_this2->dirty))){
								HX_STACK_LINE(258)
								Dynamic();
							}
							else{
								HX_STACK_LINE(258)
								_this2->_cleaning = true;
								HX_STACK_LINE(258)
								{
									HX_STACK_LINE(258)
									::phoenix::Matrix _this3 = _this2->_pos_matrix;		HX_STACK_VAR(_this3,"_this3");
									HX_STACK_LINE(258)
									{
										HX_STACK_LINE(258)
										Array< Float > e = _this3->elements;		HX_STACK_VAR(e,"e");
										HX_STACK_LINE(258)
										e[(int)0] = (int)1;
										HX_STACK_LINE(258)
										e[(int)4] = (int)0;
										HX_STACK_LINE(258)
										e[(int)8] = (int)0;
										HX_STACK_LINE(258)
										e[(int)12] = _this2->local->pos->x;
										HX_STACK_LINE(258)
										e[(int)1] = (int)0;
										HX_STACK_LINE(258)
										e[(int)5] = (int)1;
										HX_STACK_LINE(258)
										e[(int)9] = (int)0;
										HX_STACK_LINE(258)
										e[(int)13] = _this2->local->pos->y;
										HX_STACK_LINE(258)
										e[(int)2] = (int)0;
										HX_STACK_LINE(258)
										e[(int)6] = (int)0;
										HX_STACK_LINE(258)
										e[(int)10] = (int)1;
										HX_STACK_LINE(258)
										e[(int)14] = _this2->local->pos->z;
										HX_STACK_LINE(258)
										e[(int)3] = (int)0;
										HX_STACK_LINE(258)
										e[(int)7] = (int)0;
										HX_STACK_LINE(258)
										e[(int)11] = (int)0;
										HX_STACK_LINE(258)
										e[(int)15] = (int)1;
										HX_STACK_LINE(258)
										_this3;
									}
									HX_STACK_LINE(258)
									_this3;
								}
								HX_STACK_LINE(258)
								{
									HX_STACK_LINE(258)
									::phoenix::Matrix _this3 = _this2->_rotation_matrix;		HX_STACK_VAR(_this3,"_this3");
									HX_STACK_LINE(258)
									::phoenix::Quaternion q = _this2->local->rotation;		HX_STACK_VAR(q,"q");
									HX_STACK_LINE(258)
									Array< Float > te = _this3->elements;		HX_STACK_VAR(te,"te");
									HX_STACK_LINE(258)
									Float x2 = (q->x + q->x);		HX_STACK_VAR(x2,"x2");
									HX_STACK_LINE(258)
									Float y2 = (q->y + q->y);		HX_STACK_VAR(y2,"y2");
									HX_STACK_LINE(258)
									Float z2 = (q->z + q->z);		HX_STACK_VAR(z2,"z2");
									HX_STACK_LINE(258)
									Float xx = (q->x * x2);		HX_STACK_VAR(xx,"xx");
									HX_STACK_LINE(258)
									Float xy = (q->x * y2);		HX_STACK_VAR(xy,"xy");
									HX_STACK_LINE(258)
									Float xz = (q->x * z2);		HX_STACK_VAR(xz,"xz");
									HX_STACK_LINE(258)
									Float yy = (q->y * y2);		HX_STACK_VAR(yy,"yy");
									HX_STACK_LINE(258)
									Float yz = (q->y * z2);		HX_STACK_VAR(yz,"yz");
									HX_STACK_LINE(258)
									Float zz = (q->z * z2);		HX_STACK_VAR(zz,"zz");
									HX_STACK_LINE(258)
									Float wx = (q->w * x2);		HX_STACK_VAR(wx,"wx");
									HX_STACK_LINE(258)
									Float wy = (q->w * y2);		HX_STACK_VAR(wy,"wy");
									HX_STACK_LINE(258)
									Float wz = (q->w * z2);		HX_STACK_VAR(wz,"wz");
									HX_STACK_LINE(258)
									te[(int)0] = ((int)1 - ((yy + zz)));
									HX_STACK_LINE(258)
									te[(int)4] = (xy - wz);
									HX_STACK_LINE(258)
									te[(int)8] = (xz + wy);
									HX_STACK_LINE(258)
									te[(int)1] = (xy + wz);
									HX_STACK_LINE(258)
									te[(int)5] = ((int)1 - ((xx + zz)));
									HX_STACK_LINE(258)
									te[(int)9] = (yz - wx);
									HX_STACK_LINE(258)
									te[(int)2] = (xz - wy);
									HX_STACK_LINE(258)
									te[(int)6] = (yz + wx);
									HX_STACK_LINE(258)
									te[(int)10] = ((int)1 - ((xx + yy)));
									HX_STACK_LINE(258)
									te[(int)3] = (int)0;
									HX_STACK_LINE(258)
									te[(int)7] = (int)0;
									HX_STACK_LINE(258)
									te[(int)11] = (int)0;
									HX_STACK_LINE(258)
									te[(int)12] = (int)0;
									HX_STACK_LINE(258)
									te[(int)13] = (int)0;
									HX_STACK_LINE(258)
									te[(int)14] = (int)0;
									HX_STACK_LINE(258)
									te[(int)15] = (int)1;
									HX_STACK_LINE(258)
									_this3;
								}
								HX_STACK_LINE(258)
								{
									HX_STACK_LINE(258)
									::phoenix::Matrix _this3 = _this2->_origin_undo_matrix;		HX_STACK_VAR(_this3,"_this3");
									HX_STACK_LINE(258)
									{
										HX_STACK_LINE(258)
										Array< Float > e = _this3->elements;		HX_STACK_VAR(e,"e");
										HX_STACK_LINE(258)
										e[(int)0] = (int)1;
										HX_STACK_LINE(258)
										e[(int)4] = (int)0;
										HX_STACK_LINE(258)
										e[(int)8] = (int)0;
										HX_STACK_LINE(258)
										e[(int)12] = -(_this2->origin->x);
										HX_STACK_LINE(258)
										e[(int)1] = (int)0;
										HX_STACK_LINE(258)
										e[(int)5] = (int)1;
										HX_STACK_LINE(258)
										e[(int)9] = (int)0;
										HX_STACK_LINE(258)
										e[(int)13] = -(_this2->origin->y);
										HX_STACK_LINE(258)
										e[(int)2] = (int)0;
										HX_STACK_LINE(258)
										e[(int)6] = (int)0;
										HX_STACK_LINE(258)
										e[(int)10] = (int)1;
										HX_STACK_LINE(258)
										e[(int)14] = -(_this2->origin->z);
										HX_STACK_LINE(258)
										e[(int)3] = (int)0;
										HX_STACK_LINE(258)
										e[(int)7] = (int)0;
										HX_STACK_LINE(258)
										e[(int)11] = (int)0;
										HX_STACK_LINE(258)
										e[(int)15] = (int)1;
										HX_STACK_LINE(258)
										_this3;
									}
									HX_STACK_LINE(258)
									_this3;
								}
								HX_STACK_LINE(258)
								{
									HX_STACK_LINE(258)
									::phoenix::Matrix _this3 = _this2->local->matrix;		HX_STACK_VAR(_this3,"_this3");
									HX_STACK_LINE(258)
									{
										HX_STACK_LINE(258)
										Array< Float > e = _this3->elements;		HX_STACK_VAR(e,"e");
										HX_STACK_LINE(258)
										e[(int)0] = (int)1;
										HX_STACK_LINE(258)
										e[(int)4] = (int)0;
										HX_STACK_LINE(258)
										e[(int)8] = (int)0;
										HX_STACK_LINE(258)
										e[(int)12] = _this2->origin->x;
										HX_STACK_LINE(258)
										e[(int)1] = (int)0;
										HX_STACK_LINE(258)
										e[(int)5] = (int)1;
										HX_STACK_LINE(258)
										e[(int)9] = (int)0;
										HX_STACK_LINE(258)
										e[(int)13] = _this2->origin->y;
										HX_STACK_LINE(258)
										e[(int)2] = (int)0;
										HX_STACK_LINE(258)
										e[(int)6] = (int)0;
										HX_STACK_LINE(258)
										e[(int)10] = (int)1;
										HX_STACK_LINE(258)
										e[(int)14] = _this2->origin->z;
										HX_STACK_LINE(258)
										e[(int)3] = (int)0;
										HX_STACK_LINE(258)
										e[(int)7] = (int)0;
										HX_STACK_LINE(258)
										e[(int)11] = (int)0;
										HX_STACK_LINE(258)
										e[(int)15] = (int)1;
										HX_STACK_LINE(258)
										_this3;
									}
									HX_STACK_LINE(258)
									_this3;
								}
								HX_STACK_LINE(258)
								{
									HX_STACK_LINE(258)
									::phoenix::Matrix _this3 = _this2->local->matrix;		HX_STACK_VAR(_this3,"_this3");
									HX_STACK_LINE(258)
									::phoenix::Vector _v = _this2->local->scale;		HX_STACK_VAR(_v,"_v");
									HX_STACK_LINE(258)
									Array< Float > te = _this3->elements;		HX_STACK_VAR(te,"te");
									HX_STACK_LINE(258)
									Float _x = _v->x;		HX_STACK_VAR(_x,"_x");
									HX_STACK_LINE(258)
									Float _y = _v->y;		HX_STACK_VAR(_y,"_y");
									HX_STACK_LINE(258)
									Float _z = _v->z;		HX_STACK_VAR(_z,"_z");
									HX_STACK_LINE(258)
									hx::MultEq(te[(int)0],_x);
									HX_STACK_LINE(258)
									hx::MultEq(te[(int)4],_y);
									HX_STACK_LINE(258)
									hx::MultEq(te[(int)8],_z);
									HX_STACK_LINE(258)
									hx::MultEq(te[(int)1],_x);
									HX_STACK_LINE(258)
									hx::MultEq(te[(int)5],_y);
									HX_STACK_LINE(258)
									hx::MultEq(te[(int)9],_z);
									HX_STACK_LINE(258)
									hx::MultEq(te[(int)2],_x);
									HX_STACK_LINE(258)
									hx::MultEq(te[(int)6],_y);
									HX_STACK_LINE(258)
									hx::MultEq(te[(int)10],_z);
									HX_STACK_LINE(258)
									hx::MultEq(te[(int)3],_x);
									HX_STACK_LINE(258)
									hx::MultEq(te[(int)7],_y);
									HX_STACK_LINE(258)
									hx::MultEq(te[(int)11],_z);
									HX_STACK_LINE(258)
									_this3;
								}
								HX_STACK_LINE(258)
								{
									HX_STACK_LINE(258)
									::phoenix::Matrix _this3 = _this2->local->matrix;		HX_STACK_VAR(_this3,"_this3");
									HX_STACK_LINE(258)
									{
										HX_STACK_LINE(258)
										Array< Float > ae = _this3->elements;		HX_STACK_VAR(ae,"ae");
										HX_STACK_LINE(258)
										Array< Float > be = _this2->_rotation_matrix->elements;		HX_STACK_VAR(be,"be");
										HX_STACK_LINE(258)
										Array< Float > te = _this3->elements;		HX_STACK_VAR(te,"te");
										HX_STACK_LINE(258)
										Float a11 = ae->__get((int)0);		HX_STACK_VAR(a11,"a11");
										HX_STACK_LINE(258)
										Float a12 = ae->__get((int)4);		HX_STACK_VAR(a12,"a12");
										HX_STACK_LINE(258)
										Float a13 = ae->__get((int)8);		HX_STACK_VAR(a13,"a13");
										HX_STACK_LINE(258)
										Float a14 = ae->__get((int)12);		HX_STACK_VAR(a14,"a14");
										HX_STACK_LINE(258)
										Float a21 = ae->__get((int)1);		HX_STACK_VAR(a21,"a21");
										HX_STACK_LINE(258)
										Float a22 = ae->__get((int)5);		HX_STACK_VAR(a22,"a22");
										HX_STACK_LINE(258)
										Float a23 = ae->__get((int)9);		HX_STACK_VAR(a23,"a23");
										HX_STACK_LINE(258)
										Float a24 = ae->__get((int)13);		HX_STACK_VAR(a24,"a24");
										HX_STACK_LINE(258)
										Float a31 = ae->__get((int)2);		HX_STACK_VAR(a31,"a31");
										HX_STACK_LINE(258)
										Float a32 = ae->__get((int)6);		HX_STACK_VAR(a32,"a32");
										HX_STACK_LINE(258)
										Float a33 = ae->__get((int)10);		HX_STACK_VAR(a33,"a33");
										HX_STACK_LINE(258)
										Float a34 = ae->__get((int)14);		HX_STACK_VAR(a34,"a34");
										HX_STACK_LINE(258)
										Float a41 = ae->__get((int)3);		HX_STACK_VAR(a41,"a41");
										HX_STACK_LINE(258)
										Float a42 = ae->__get((int)7);		HX_STACK_VAR(a42,"a42");
										HX_STACK_LINE(258)
										Float a43 = ae->__get((int)11);		HX_STACK_VAR(a43,"a43");
										HX_STACK_LINE(258)
										Float a44 = ae->__get((int)15);		HX_STACK_VAR(a44,"a44");
										HX_STACK_LINE(258)
										Float b11 = be->__get((int)0);		HX_STACK_VAR(b11,"b11");
										HX_STACK_LINE(258)
										Float b12 = be->__get((int)4);		HX_STACK_VAR(b12,"b12");
										HX_STACK_LINE(258)
										Float b13 = be->__get((int)8);		HX_STACK_VAR(b13,"b13");
										HX_STACK_LINE(258)
										Float b14 = be->__get((int)12);		HX_STACK_VAR(b14,"b14");
										HX_STACK_LINE(258)
										Float b21 = be->__get((int)1);		HX_STACK_VAR(b21,"b21");
										HX_STACK_LINE(258)
										Float b22 = be->__get((int)5);		HX_STACK_VAR(b22,"b22");
										HX_STACK_LINE(258)
										Float b23 = be->__get((int)9);		HX_STACK_VAR(b23,"b23");
										HX_STACK_LINE(258)
										Float b24 = be->__get((int)13);		HX_STACK_VAR(b24,"b24");
										HX_STACK_LINE(258)
										Float b31 = be->__get((int)2);		HX_STACK_VAR(b31,"b31");
										HX_STACK_LINE(258)
										Float b32 = be->__get((int)6);		HX_STACK_VAR(b32,"b32");
										HX_STACK_LINE(258)
										Float b33 = be->__get((int)10);		HX_STACK_VAR(b33,"b33");
										HX_STACK_LINE(258)
										Float b34 = be->__get((int)14);		HX_STACK_VAR(b34,"b34");
										HX_STACK_LINE(258)
										Float b41 = be->__get((int)3);		HX_STACK_VAR(b41,"b41");
										HX_STACK_LINE(258)
										Float b42 = be->__get((int)7);		HX_STACK_VAR(b42,"b42");
										HX_STACK_LINE(258)
										Float b43 = be->__get((int)11);		HX_STACK_VAR(b43,"b43");
										HX_STACK_LINE(258)
										Float b44 = be->__get((int)15);		HX_STACK_VAR(b44,"b44");
										HX_STACK_LINE(258)
										te[(int)0] = ((((a11 * b11) + (a12 * b21)) + (a13 * b31)) + (a14 * b41));
										HX_STACK_LINE(258)
										te[(int)4] = ((((a11 * b12) + (a12 * b22)) + (a13 * b32)) + (a14 * b42));
										HX_STACK_LINE(258)
										te[(int)8] = ((((a11 * b13) + (a12 * b23)) + (a13 * b33)) + (a14 * b43));
										HX_STACK_LINE(258)
										te[(int)12] = ((((a11 * b14) + (a12 * b24)) + (a13 * b34)) + (a14 * b44));
										HX_STACK_LINE(258)
										te[(int)1] = ((((a21 * b11) + (a22 * b21)) + (a23 * b31)) + (a24 * b41));
										HX_STACK_LINE(258)
										te[(int)5] = ((((a21 * b12) + (a22 * b22)) + (a23 * b32)) + (a24 * b42));
										HX_STACK_LINE(258)
										te[(int)9] = ((((a21 * b13) + (a22 * b23)) + (a23 * b33)) + (a24 * b43));
										HX_STACK_LINE(258)
										te[(int)13] = ((((a21 * b14) + (a22 * b24)) + (a23 * b34)) + (a24 * b44));
										HX_STACK_LINE(258)
										te[(int)2] = ((((a31 * b11) + (a32 * b21)) + (a33 * b31)) + (a34 * b41));
										HX_STACK_LINE(258)
										te[(int)6] = ((((a31 * b12) + (a32 * b22)) + (a33 * b32)) + (a34 * b42));
										HX_STACK_LINE(258)
										te[(int)10] = ((((a31 * b13) + (a32 * b23)) + (a33 * b33)) + (a34 * b43));
										HX_STACK_LINE(258)
										te[(int)14] = ((((a31 * b14) + (a32 * b24)) + (a33 * b34)) + (a34 * b44));
										HX_STACK_LINE(258)
										te[(int)3] = ((((a41 * b11) + (a42 * b21)) + (a43 * b31)) + (a44 * b41));
										HX_STACK_LINE(258)
										te[(int)7] = ((((a41 * b12) + (a42 * b22)) + (a43 * b32)) + (a44 * b42));
										HX_STACK_LINE(258)
										te[(int)11] = ((((a41 * b13) + (a42 * b23)) + (a43 * b33)) + (a44 * b43));
										HX_STACK_LINE(258)
										te[(int)15] = ((((a41 * b14) + (a42 * b24)) + (a43 * b34)) + (a44 * b44));
										HX_STACK_LINE(258)
										_this3;
									}
								}
								HX_STACK_LINE(258)
								{
									HX_STACK_LINE(258)
									::phoenix::Matrix _this3 = _this2->local->matrix;		HX_STACK_VAR(_this3,"_this3");
									HX_STACK_LINE(258)
									::phoenix::Vector _v = _this2->local->pos;		HX_STACK_VAR(_v,"_v");
									HX_STACK_LINE(258)
									Array< Float > te = _this3->elements;		HX_STACK_VAR(te,"te");
									HX_STACK_LINE(258)
									te[(int)12] = _v->x;
									HX_STACK_LINE(258)
									te[(int)13] = _v->y;
									HX_STACK_LINE(258)
									te[(int)14] = _v->z;
									HX_STACK_LINE(258)
									_this3;
								}
								HX_STACK_LINE(258)
								{
									HX_STACK_LINE(258)
									::phoenix::Matrix _this3 = _this2->local->matrix;		HX_STACK_VAR(_this3,"_this3");
									HX_STACK_LINE(258)
									{
										HX_STACK_LINE(258)
										Array< Float > ae = _this3->elements;		HX_STACK_VAR(ae,"ae");
										HX_STACK_LINE(258)
										Array< Float > be = _this2->_origin_undo_matrix->elements;		HX_STACK_VAR(be,"be");
										HX_STACK_LINE(258)
										Array< Float > te = _this3->elements;		HX_STACK_VAR(te,"te");
										HX_STACK_LINE(258)
										Float a11 = ae->__get((int)0);		HX_STACK_VAR(a11,"a11");
										HX_STACK_LINE(258)
										Float a12 = ae->__get((int)4);		HX_STACK_VAR(a12,"a12");
										HX_STACK_LINE(258)
										Float a13 = ae->__get((int)8);		HX_STACK_VAR(a13,"a13");
										HX_STACK_LINE(258)
										Float a14 = ae->__get((int)12);		HX_STACK_VAR(a14,"a14");
										HX_STACK_LINE(258)
										Float a21 = ae->__get((int)1);		HX_STACK_VAR(a21,"a21");
										HX_STACK_LINE(258)
										Float a22 = ae->__get((int)5);		HX_STACK_VAR(a22,"a22");
										HX_STACK_LINE(258)
										Float a23 = ae->__get((int)9);		HX_STACK_VAR(a23,"a23");
										HX_STACK_LINE(258)
										Float a24 = ae->__get((int)13);		HX_STACK_VAR(a24,"a24");
										HX_STACK_LINE(258)
										Float a31 = ae->__get((int)2);		HX_STACK_VAR(a31,"a31");
										HX_STACK_LINE(258)
										Float a32 = ae->__get((int)6);		HX_STACK_VAR(a32,"a32");
										HX_STACK_LINE(258)
										Float a33 = ae->__get((int)10);		HX_STACK_VAR(a33,"a33");
										HX_STACK_LINE(258)
										Float a34 = ae->__get((int)14);		HX_STACK_VAR(a34,"a34");
										HX_STACK_LINE(258)
										Float a41 = ae->__get((int)3);		HX_STACK_VAR(a41,"a41");
										HX_STACK_LINE(258)
										Float a42 = ae->__get((int)7);		HX_STACK_VAR(a42,"a42");
										HX_STACK_LINE(258)
										Float a43 = ae->__get((int)11);		HX_STACK_VAR(a43,"a43");
										HX_STACK_LINE(258)
										Float a44 = ae->__get((int)15);		HX_STACK_VAR(a44,"a44");
										HX_STACK_LINE(258)
										Float b11 = be->__get((int)0);		HX_STACK_VAR(b11,"b11");
										HX_STACK_LINE(258)
										Float b12 = be->__get((int)4);		HX_STACK_VAR(b12,"b12");
										HX_STACK_LINE(258)
										Float b13 = be->__get((int)8);		HX_STACK_VAR(b13,"b13");
										HX_STACK_LINE(258)
										Float b14 = be->__get((int)12);		HX_STACK_VAR(b14,"b14");
										HX_STACK_LINE(258)
										Float b21 = be->__get((int)1);		HX_STACK_VAR(b21,"b21");
										HX_STACK_LINE(258)
										Float b22 = be->__get((int)5);		HX_STACK_VAR(b22,"b22");
										HX_STACK_LINE(258)
										Float b23 = be->__get((int)9);		HX_STACK_VAR(b23,"b23");
										HX_STACK_LINE(258)
										Float b24 = be->__get((int)13);		HX_STACK_VAR(b24,"b24");
										HX_STACK_LINE(258)
										Float b31 = be->__get((int)2);		HX_STACK_VAR(b31,"b31");
										HX_STACK_LINE(258)
										Float b32 = be->__get((int)6);		HX_STACK_VAR(b32,"b32");
										HX_STACK_LINE(258)
										Float b33 = be->__get((int)10);		HX_STACK_VAR(b33,"b33");
										HX_STACK_LINE(258)
										Float b34 = be->__get((int)14);		HX_STACK_VAR(b34,"b34");
										HX_STACK_LINE(258)
										Float b41 = be->__get((int)3);		HX_STACK_VAR(b41,"b41");
										HX_STACK_LINE(258)
										Float b42 = be->__get((int)7);		HX_STACK_VAR(b42,"b42");
										HX_STACK_LINE(258)
										Float b43 = be->__get((int)11);		HX_STACK_VAR(b43,"b43");
										HX_STACK_LINE(258)
										Float b44 = be->__get((int)15);		HX_STACK_VAR(b44,"b44");
										HX_STACK_LINE(258)
										te[(int)0] = ((((a11 * b11) + (a12 * b21)) + (a13 * b31)) + (a14 * b41));
										HX_STACK_LINE(258)
										te[(int)4] = ((((a11 * b12) + (a12 * b22)) + (a13 * b32)) + (a14 * b42));
										HX_STACK_LINE(258)
										te[(int)8] = ((((a11 * b13) + (a12 * b23)) + (a13 * b33)) + (a14 * b43));
										HX_STACK_LINE(258)
										te[(int)12] = ((((a11 * b14) + (a12 * b24)) + (a13 * b34)) + (a14 * b44));
										HX_STACK_LINE(258)
										te[(int)1] = ((((a21 * b11) + (a22 * b21)) + (a23 * b31)) + (a24 * b41));
										HX_STACK_LINE(258)
										te[(int)5] = ((((a21 * b12) + (a22 * b22)) + (a23 * b32)) + (a24 * b42));
										HX_STACK_LINE(258)
										te[(int)9] = ((((a21 * b13) + (a22 * b23)) + (a23 * b33)) + (a24 * b43));
										HX_STACK_LINE(258)
										te[(int)13] = ((((a21 * b14) + (a22 * b24)) + (a23 * b34)) + (a24 * b44));
										HX_STACK_LINE(258)
										te[(int)2] = ((((a31 * b11) + (a32 * b21)) + (a33 * b31)) + (a34 * b41));
										HX_STACK_LINE(258)
										te[(int)6] = ((((a31 * b12) + (a32 * b22)) + (a33 * b32)) + (a34 * b42));
										HX_STACK_LINE(258)
										te[(int)10] = ((((a31 * b13) + (a32 * b23)) + (a33 * b33)) + (a34 * b43));
										HX_STACK_LINE(258)
										te[(int)14] = ((((a31 * b14) + (a32 * b24)) + (a33 * b34)) + (a34 * b44));
										HX_STACK_LINE(258)
										te[(int)3] = ((((a41 * b11) + (a42 * b21)) + (a43 * b31)) + (a44 * b41));
										HX_STACK_LINE(258)
										te[(int)7] = ((((a41 * b12) + (a42 * b22)) + (a43 * b32)) + (a44 * b42));
										HX_STACK_LINE(258)
										te[(int)11] = ((((a41 * b13) + (a42 * b23)) + (a43 * b33)) + (a44 * b43));
										HX_STACK_LINE(258)
										te[(int)15] = ((((a41 * b14) + (a42 * b24)) + (a43 * b34)) + (a44 * b44));
										HX_STACK_LINE(258)
										_this3;
									}
								}
								HX_STACK_LINE(258)
								if (((_this2->parent != null()))){
									HX_STACK_LINE(258)
									::phoenix::Spatial _this3 = _this2->get_world();		HX_STACK_VAR(_this3,"_this3");
									HX_STACK_LINE(258)
									::phoenix::Matrix _m;		HX_STACK_VAR(_m,"_m");
									HX_STACK_LINE(258)
									{
										HX_STACK_LINE(258)
										::phoenix::Matrix _this4;		HX_STACK_VAR(_this4,"_this4");
										HX_STACK_LINE(258)
										{
											HX_STACK_LINE(258)
											::phoenix::Spatial _this5 = _this2->get_world();		HX_STACK_VAR(_this5,"_this5");
											HX_STACK_LINE(258)
											_this4 = _this5->matrix;
										}
										HX_STACK_LINE(258)
										::phoenix::Matrix _a;		HX_STACK_VAR(_a,"_a");
										HX_STACK_LINE(258)
										{
											HX_STACK_LINE(258)
											::phoenix::Spatial _this5 = _this2->parent->get_world();		HX_STACK_VAR(_this5,"_this5");
											HX_STACK_LINE(258)
											_a = _this5->matrix;
										}
										HX_STACK_LINE(258)
										Array< Float > ae = _a->elements;		HX_STACK_VAR(ae,"ae");
										HX_STACK_LINE(258)
										Array< Float > be = _this2->local->matrix->elements;		HX_STACK_VAR(be,"be");
										HX_STACK_LINE(258)
										Array< Float > te = _this4->elements;		HX_STACK_VAR(te,"te");
										HX_STACK_LINE(258)
										Float a11 = ae->__get((int)0);		HX_STACK_VAR(a11,"a11");
										HX_STACK_LINE(258)
										Float a12 = ae->__get((int)4);		HX_STACK_VAR(a12,"a12");
										HX_STACK_LINE(258)
										Float a13 = ae->__get((int)8);		HX_STACK_VAR(a13,"a13");
										HX_STACK_LINE(258)
										Float a14 = ae->__get((int)12);		HX_STACK_VAR(a14,"a14");
										HX_STACK_LINE(258)
										Float a21 = ae->__get((int)1);		HX_STACK_VAR(a21,"a21");
										HX_STACK_LINE(258)
										Float a22 = ae->__get((int)5);		HX_STACK_VAR(a22,"a22");
										HX_STACK_LINE(258)
										Float a23 = ae->__get((int)9);		HX_STACK_VAR(a23,"a23");
										HX_STACK_LINE(258)
										Float a24 = ae->__get((int)13);		HX_STACK_VAR(a24,"a24");
										HX_STACK_LINE(258)
										Float a31 = ae->__get((int)2);		HX_STACK_VAR(a31,"a31");
										HX_STACK_LINE(258)
										Float a32 = ae->__get((int)6);		HX_STACK_VAR(a32,"a32");
										HX_STACK_LINE(258)
										Float a33 = ae->__get((int)10);		HX_STACK_VAR(a33,"a33");
										HX_STACK_LINE(258)
										Float a34 = ae->__get((int)14);		HX_STACK_VAR(a34,"a34");
										HX_STACK_LINE(258)
										Float a41 = ae->__get((int)3);		HX_STACK_VAR(a41,"a41");
										HX_STACK_LINE(258)
										Float a42 = ae->__get((int)7);		HX_STACK_VAR(a42,"a42");
										HX_STACK_LINE(258)
										Float a43 = ae->__get((int)11);		HX_STACK_VAR(a43,"a43");
										HX_STACK_LINE(258)
										Float a44 = ae->__get((int)15);		HX_STACK_VAR(a44,"a44");
										HX_STACK_LINE(258)
										Float b11 = be->__get((int)0);		HX_STACK_VAR(b11,"b11");
										HX_STACK_LINE(258)
										Float b12 = be->__get((int)4);		HX_STACK_VAR(b12,"b12");
										HX_STACK_LINE(258)
										Float b13 = be->__get((int)8);		HX_STACK_VAR(b13,"b13");
										HX_STACK_LINE(258)
										Float b14 = be->__get((int)12);		HX_STACK_VAR(b14,"b14");
										HX_STACK_LINE(258)
										Float b21 = be->__get((int)1);		HX_STACK_VAR(b21,"b21");
										HX_STACK_LINE(258)
										Float b22 = be->__get((int)5);		HX_STACK_VAR(b22,"b22");
										HX_STACK_LINE(258)
										Float b23 = be->__get((int)9);		HX_STACK_VAR(b23,"b23");
										HX_STACK_LINE(258)
										Float b24 = be->__get((int)13);		HX_STACK_VAR(b24,"b24");
										HX_STACK_LINE(258)
										Float b31 = be->__get((int)2);		HX_STACK_VAR(b31,"b31");
										HX_STACK_LINE(258)
										Float b32 = be->__get((int)6);		HX_STACK_VAR(b32,"b32");
										HX_STACK_LINE(258)
										Float b33 = be->__get((int)10);		HX_STACK_VAR(b33,"b33");
										HX_STACK_LINE(258)
										Float b34 = be->__get((int)14);		HX_STACK_VAR(b34,"b34");
										HX_STACK_LINE(258)
										Float b41 = be->__get((int)3);		HX_STACK_VAR(b41,"b41");
										HX_STACK_LINE(258)
										Float b42 = be->__get((int)7);		HX_STACK_VAR(b42,"b42");
										HX_STACK_LINE(258)
										Float b43 = be->__get((int)11);		HX_STACK_VAR(b43,"b43");
										HX_STACK_LINE(258)
										Float b44 = be->__get((int)15);		HX_STACK_VAR(b44,"b44");
										HX_STACK_LINE(258)
										te[(int)0] = ((((a11 * b11) + (a12 * b21)) + (a13 * b31)) + (a14 * b41));
										HX_STACK_LINE(258)
										te[(int)4] = ((((a11 * b12) + (a12 * b22)) + (a13 * b32)) + (a14 * b42));
										HX_STACK_LINE(258)
										te[(int)8] = ((((a11 * b13) + (a12 * b23)) + (a13 * b33)) + (a14 * b43));
										HX_STACK_LINE(258)
										te[(int)12] = ((((a11 * b14) + (a12 * b24)) + (a13 * b34)) + (a14 * b44));
										HX_STACK_LINE(258)
										te[(int)1] = ((((a21 * b11) + (a22 * b21)) + (a23 * b31)) + (a24 * b41));
										HX_STACK_LINE(258)
										te[(int)5] = ((((a21 * b12) + (a22 * b22)) + (a23 * b32)) + (a24 * b42));
										HX_STACK_LINE(258)
										te[(int)9] = ((((a21 * b13) + (a22 * b23)) + (a23 * b33)) + (a24 * b43));
										HX_STACK_LINE(258)
										te[(int)13] = ((((a21 * b14) + (a22 * b24)) + (a23 * b34)) + (a24 * b44));
										HX_STACK_LINE(258)
										te[(int)2] = ((((a31 * b11) + (a32 * b21)) + (a33 * b31)) + (a34 * b41));
										HX_STACK_LINE(258)
										te[(int)6] = ((((a31 * b12) + (a32 * b22)) + (a33 * b32)) + (a34 * b42));
										HX_STACK_LINE(258)
										te[(int)10] = ((((a31 * b13) + (a32 * b23)) + (a33 * b33)) + (a34 * b43));
										HX_STACK_LINE(258)
										te[(int)14] = ((((a31 * b14) + (a32 * b24)) + (a33 * b34)) + (a34 * b44));
										HX_STACK_LINE(258)
										te[(int)3] = ((((a41 * b11) + (a42 * b21)) + (a43 * b31)) + (a44 * b41));
										HX_STACK_LINE(258)
										te[(int)7] = ((((a41 * b12) + (a42 * b22)) + (a43 * b32)) + (a44 * b42));
										HX_STACK_LINE(258)
										te[(int)11] = ((((a41 * b13) + (a42 * b23)) + (a43 * b33)) + (a44 * b43));
										HX_STACK_LINE(258)
										te[(int)15] = ((((a41 * b14) + (a42 * b24)) + (a43 * b34)) + (a44 * b44));
										HX_STACK_LINE(258)
										_m = _this4;
									}
									HX_STACK_LINE(258)
									_this3->matrix = _m;
									HX_STACK_LINE(258)
									if (((_m != null()))){
										HX_STACK_LINE(258)
										::snow::platform::native::utils::Float32Array _g;		HX_STACK_VAR(_g,"_g");
										HX_STACK_LINE(258)
										{
											HX_STACK_LINE(258)
											::phoenix::Matrix _this4 = _this3->matrix;		HX_STACK_VAR(_this4,"_this4");
											HX_STACK_LINE(258)
											{
												HX_STACK_LINE(258)
												::snow::platform::native::utils::Float32Array _this5 = _this4->_float32array;		HX_STACK_VAR(_this5,"_this5");
												HX_STACK_LINE(258)
												Dynamic bufferOrArray = _this4->elements;		HX_STACK_VAR(bufferOrArray,"bufferOrArray");
												HX_STACK_LINE(258)
												int offset = (int)0;		HX_STACK_VAR(offset,"offset");
												HX_STACK_LINE(258)
												if ((::Std_obj::is(bufferOrArray,hx::ClassOf< Array<int> >()))){
													HX_STACK_LINE(258)
													Array< Float > floats = bufferOrArray;		HX_STACK_VAR(floats,"floats");
													HX_STACK_LINE(258)
													{
														HX_STACK_LINE(258)
														int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
														HX_STACK_LINE(258)
														int _g2 = floats->length;		HX_STACK_VAR(_g2,"_g2");
														HX_STACK_LINE(258)
														while((true)){
															HX_STACK_LINE(258)
															if ((!(((_g1 < _g2))))){
																HX_STACK_LINE(258)
																break;
															}
															HX_STACK_LINE(258)
															int i = (_g1)++;		HX_STACK_VAR(i,"i");
															HX_STACK_LINE(258)
															::__hxcpp_memory_set_float(_this5->bytes,(((int((i + offset)) << int((int)2))) + _this5->byteOffset),floats->__get(i));
														}
													}
												}
												else{
													HX_STACK_LINE(258)
													if ((::Std_obj::is(bufferOrArray,hx::ClassOf< ::snow::platform::native::utils::Float32Array >()))){
														HX_STACK_LINE(258)
														::snow::platform::native::utils::Float32Array floats = bufferOrArray;		HX_STACK_VAR(floats,"floats");
														HX_STACK_LINE(258)
														{
															HX_STACK_LINE(258)
															int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
															HX_STACK_LINE(258)
															int _g2 = floats->length;		HX_STACK_VAR(_g2,"_g2");
															HX_STACK_LINE(258)
															while((true)){
																HX_STACK_LINE(258)
																if ((!(((_g1 < _g2))))){
																	HX_STACK_LINE(258)
																	break;
																}
																HX_STACK_LINE(258)
																int i = (_g1)++;		HX_STACK_VAR(i,"i");
																HX_STACK_LINE(258)
																::__hxcpp_memory_set_float(_this5->bytes,(((int((i + offset)) << int((int)2))) + _this5->byteOffset),floats->__get(i));
															}
														}
													}
													else{
														HX_STACK_LINE(258)
														HX_STACK_DO_THROW(HX_CSTRING("Invalid input buffer"));
													}
												}
											}
											HX_STACK_LINE(258)
											_g = ::snow::platform::native::utils::Float32Array_obj::__new(_this4->_float32array,null(),null());
										}
										HX_STACK_LINE(258)
										_this3->floats = _g;
									}
									HX_STACK_LINE(258)
									_this3->matrix;
								}
								else{
									HX_STACK_LINE(258)
									::phoenix::Spatial _this3 = _this2->get_world();		HX_STACK_VAR(_this3,"_this3");
									HX_STACK_LINE(258)
									::phoenix::Matrix _m;		HX_STACK_VAR(_m,"_m");
									HX_STACK_LINE(258)
									{
										HX_STACK_LINE(258)
										Array< Float > te = _this2->local->matrix->elements;		HX_STACK_VAR(te,"te");
										HX_STACK_LINE(258)
										_m = ::phoenix::Matrix_obj::__new(te->__get((int)0),te->__get((int)4),te->__get((int)8),te->__get((int)12),te->__get((int)1),te->__get((int)5),te->__get((int)9),te->__get((int)13),te->__get((int)2),te->__get((int)6),te->__get((int)10),te->__get((int)14),te->__get((int)3),te->__get((int)7),te->__get((int)11),te->__get((int)15));
									}
									HX_STACK_LINE(258)
									_this3->matrix = _m;
									HX_STACK_LINE(258)
									if (((_m != null()))){
										HX_STACK_LINE(258)
										::snow::platform::native::utils::Float32Array _g1;		HX_STACK_VAR(_g1,"_g1");
										HX_STACK_LINE(258)
										{
											HX_STACK_LINE(258)
											::phoenix::Matrix _this4 = _this3->matrix;		HX_STACK_VAR(_this4,"_this4");
											HX_STACK_LINE(258)
											{
												HX_STACK_LINE(258)
												::snow::platform::native::utils::Float32Array _this5 = _this4->_float32array;		HX_STACK_VAR(_this5,"_this5");
												HX_STACK_LINE(258)
												Dynamic bufferOrArray = _this4->elements;		HX_STACK_VAR(bufferOrArray,"bufferOrArray");
												HX_STACK_LINE(258)
												int offset = (int)0;		HX_STACK_VAR(offset,"offset");
												HX_STACK_LINE(258)
												if ((::Std_obj::is(bufferOrArray,hx::ClassOf< Array<int> >()))){
													HX_STACK_LINE(258)
													Array< Float > floats = bufferOrArray;		HX_STACK_VAR(floats,"floats");
													HX_STACK_LINE(258)
													{
														HX_STACK_LINE(258)
														int _g11 = (int)0;		HX_STACK_VAR(_g11,"_g11");
														HX_STACK_LINE(258)
														int _g = floats->length;		HX_STACK_VAR(_g,"_g");
														HX_STACK_LINE(258)
														while((true)){
															HX_STACK_LINE(258)
															if ((!(((_g11 < _g))))){
																HX_STACK_LINE(258)
																break;
															}
															HX_STACK_LINE(258)
															int i = (_g11)++;		HX_STACK_VAR(i,"i");
															HX_STACK_LINE(258)
															::__hxcpp_memory_set_float(_this5->bytes,(((int((i + offset)) << int((int)2))) + _this5->byteOffset),floats->__get(i));
														}
													}
												}
												else{
													HX_STACK_LINE(258)
													if ((::Std_obj::is(bufferOrArray,hx::ClassOf< ::snow::platform::native::utils::Float32Array >()))){
														HX_STACK_LINE(258)
														::snow::platform::native::utils::Float32Array floats = bufferOrArray;		HX_STACK_VAR(floats,"floats");
														HX_STACK_LINE(258)
														{
															HX_STACK_LINE(258)
															int _g11 = (int)0;		HX_STACK_VAR(_g11,"_g11");
															HX_STACK_LINE(258)
															int _g = floats->length;		HX_STACK_VAR(_g,"_g");
															HX_STACK_LINE(258)
															while((true)){
																HX_STACK_LINE(258)
																if ((!(((_g11 < _g))))){
																	HX_STACK_LINE(258)
																	break;
																}
																HX_STACK_LINE(258)
																int i = (_g11)++;		HX_STACK_VAR(i,"i");
																HX_STACK_LINE(258)
																::__hxcpp_memory_set_float(_this5->bytes,(((int((i + offset)) << int((int)2))) + _this5->byteOffset),floats->__get(i));
															}
														}
													}
													else{
														HX_STACK_LINE(258)
														HX_STACK_DO_THROW(HX_CSTRING("Invalid input buffer"));
													}
												}
											}
											HX_STACK_LINE(258)
											_g1 = ::snow::platform::native::utils::Float32Array_obj::__new(_this4->_float32array,null(),null());
										}
										HX_STACK_LINE(258)
										_this3->floats = _g1;
									}
									HX_STACK_LINE(258)
									_this3->matrix;
								}
								HX_STACK_LINE(258)
								{
									HX_STACK_LINE(258)
									::phoenix::Spatial _this3 = _this2->get_world();		HX_STACK_VAR(_this3,"_this3");
									HX_STACK_LINE(258)
									if ((_this3->auto_decompose)){
										HX_STACK_LINE(258)
										::phoenix::MatrixTransform _transform;		HX_STACK_VAR(_transform,"_transform");
										HX_STACK_LINE(258)
										{
											HX_STACK_LINE(258)
											::phoenix::Matrix _this4 = _this3->matrix;		HX_STACK_VAR(_this4,"_this4");
											HX_STACK_LINE(258)
											::phoenix::Vector _position = null();		HX_STACK_VAR(_position,"_position");
											HX_STACK_LINE(258)
											::phoenix::Quaternion _quaternion = null();		HX_STACK_VAR(_quaternion,"_quaternion");
											HX_STACK_LINE(258)
											::phoenix::Vector _scale = null();		HX_STACK_VAR(_scale,"_scale");
											HX_STACK_LINE(258)
											Array< Float > te = _this4->elements;		HX_STACK_VAR(te,"te");
											HX_STACK_LINE(258)
											::phoenix::Matrix matrix = ::phoenix::Matrix_obj::__new(null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(matrix,"matrix");
											HX_STACK_LINE(258)
											Float _ax_x = te->__get((int)0);		HX_STACK_VAR(_ax_x,"_ax_x");
											HX_STACK_LINE(258)
											Float _ax_y = te->__get((int)1);		HX_STACK_VAR(_ax_y,"_ax_y");
											HX_STACK_LINE(258)
											Float _ax_z = te->__get((int)2);		HX_STACK_VAR(_ax_z,"_ax_z");
											HX_STACK_LINE(258)
											Float _ay_x = te->__get((int)4);		HX_STACK_VAR(_ay_x,"_ay_x");
											HX_STACK_LINE(258)
											Float _ay_y = te->__get((int)5);		HX_STACK_VAR(_ay_y,"_ay_y");
											HX_STACK_LINE(258)
											Float _ay_z = te->__get((int)6);		HX_STACK_VAR(_ay_z,"_ay_z");
											HX_STACK_LINE(258)
											Float _az_x = te->__get((int)8);		HX_STACK_VAR(_az_x,"_az_x");
											HX_STACK_LINE(258)
											Float _az_y = te->__get((int)9);		HX_STACK_VAR(_az_y,"_az_y");
											HX_STACK_LINE(258)
											Float _az_z = te->__get((int)10);		HX_STACK_VAR(_az_z,"_az_z");
											HX_STACK_LINE(258)
											Float _ax_length = ::Math_obj::sqrt((((_ax_x * _ax_x) + (_ax_y * _ax_y)) + (_ax_z * _ax_z)));		HX_STACK_VAR(_ax_length,"_ax_length");
											HX_STACK_LINE(258)
											Float _ay_length = ::Math_obj::sqrt((((_ay_x * _ay_x) + (_ay_y * _ay_y)) + (_ay_z * _ay_z)));		HX_STACK_VAR(_ay_length,"_ay_length");
											HX_STACK_LINE(258)
											Float _az_length = ::Math_obj::sqrt((((_az_x * _az_x) + (_az_y * _az_y)) + (_az_z * _az_z)));		HX_STACK_VAR(_az_length,"_az_length");
											HX_STACK_LINE(258)
											if (((_quaternion == null()))){
												HX_STACK_LINE(258)
												::phoenix::Quaternion _g2 = ::phoenix::Quaternion_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(_g2,"_g2");
												HX_STACK_LINE(258)
												_quaternion = _g2;
											}
											HX_STACK_LINE(258)
											if (((_position == null()))){
												HX_STACK_LINE(258)
												::phoenix::Vector _g3 = ::phoenix::Vector_obj::__new(te->__get((int)12),te->__get((int)13),te->__get((int)14),null());		HX_STACK_VAR(_g3,"_g3");
												HX_STACK_LINE(258)
												_position = _g3;
											}
											else{
												HX_STACK_LINE(258)
												{
													HX_STACK_LINE(258)
													Float _x = te->__get((int)12);		HX_STACK_VAR(_x,"_x");
													HX_STACK_LINE(258)
													_position->x = _x;
													HX_STACK_LINE(258)
													if ((_position->_construct)){
														HX_STACK_LINE(258)
														_position->x;
													}
													else{
														HX_STACK_LINE(258)
														if (((bool((_position->listen_x != null())) && bool(!(_position->ignore_listeners))))){
															HX_STACK_LINE(258)
															_position->listen_x(_x);
														}
														HX_STACK_LINE(258)
														_position->x;
													}
												}
												HX_STACK_LINE(258)
												{
													HX_STACK_LINE(258)
													Float _y = te->__get((int)13);		HX_STACK_VAR(_y,"_y");
													HX_STACK_LINE(258)
													_position->y = _y;
													HX_STACK_LINE(258)
													if ((_position->_construct)){
														HX_STACK_LINE(258)
														_position->y;
													}
													else{
														HX_STACK_LINE(258)
														if (((bool((_position->listen_y != null())) && bool(!(_position->ignore_listeners))))){
															HX_STACK_LINE(258)
															_position->listen_y(_y);
														}
														HX_STACK_LINE(258)
														_position->y;
													}
												}
												HX_STACK_LINE(258)
												{
													HX_STACK_LINE(258)
													Float _z = te->__get((int)14);		HX_STACK_VAR(_z,"_z");
													HX_STACK_LINE(258)
													_position->z = _z;
													HX_STACK_LINE(258)
													if ((_position->_construct)){
														HX_STACK_LINE(258)
														_position->z;
													}
													else{
														HX_STACK_LINE(258)
														if (((bool((_position->listen_z != null())) && bool(!(_position->ignore_listeners))))){
															HX_STACK_LINE(258)
															_position->listen_z(_z);
														}
														HX_STACK_LINE(258)
														_position->z;
													}
												}
											}
											HX_STACK_LINE(258)
											if (((_scale == null()))){
												HX_STACK_LINE(258)
												::phoenix::Vector _g4 = ::phoenix::Vector_obj::__new(_ax_length,_ay_length,_az_length,null());		HX_STACK_VAR(_g4,"_g4");
												HX_STACK_LINE(258)
												_scale = _g4;
											}
											else{
												HX_STACK_LINE(258)
												{
													HX_STACK_LINE(258)
													_scale->x = _ax_length;
													HX_STACK_LINE(258)
													if ((_scale->_construct)){
														HX_STACK_LINE(258)
														_scale->x;
													}
													else{
														HX_STACK_LINE(258)
														if (((bool((_scale->listen_x != null())) && bool(!(_scale->ignore_listeners))))){
															HX_STACK_LINE(258)
															_scale->listen_x(_ax_length);
														}
														HX_STACK_LINE(258)
														_scale->x;
													}
												}
												HX_STACK_LINE(258)
												{
													HX_STACK_LINE(258)
													_scale->y = _ay_length;
													HX_STACK_LINE(258)
													if ((_scale->_construct)){
														HX_STACK_LINE(258)
														_scale->y;
													}
													else{
														HX_STACK_LINE(258)
														if (((bool((_scale->listen_y != null())) && bool(!(_scale->ignore_listeners))))){
															HX_STACK_LINE(258)
															_scale->listen_y(_ay_length);
														}
														HX_STACK_LINE(258)
														_scale->y;
													}
												}
												HX_STACK_LINE(258)
												{
													HX_STACK_LINE(258)
													_scale->z = _az_length;
													HX_STACK_LINE(258)
													if ((_scale->_construct)){
														HX_STACK_LINE(258)
														_scale->z;
													}
													else{
														HX_STACK_LINE(258)
														if (((bool((_scale->listen_z != null())) && bool(!(_scale->ignore_listeners))))){
															HX_STACK_LINE(258)
															_scale->listen_z(_az_length);
														}
														HX_STACK_LINE(258)
														_scale->z;
													}
												}
											}
											HX_STACK_LINE(258)
											Array< Float > _g5 = _this4->elements->concat(Array_obj< Float >::__new());		HX_STACK_VAR(_g5,"_g5");
											HX_STACK_LINE(258)
											matrix->elements = _g5;
											HX_STACK_LINE(258)
											Array< Float > me = matrix->elements;		HX_STACK_VAR(me,"me");
											HX_STACK_LINE(258)
											hx::DivEq(me[(int)0],_ax_length);
											HX_STACK_LINE(258)
											hx::DivEq(me[(int)1],_ax_length);
											HX_STACK_LINE(258)
											hx::DivEq(me[(int)2],_ax_length);
											HX_STACK_LINE(258)
											hx::DivEq(me[(int)4],_ay_length);
											HX_STACK_LINE(258)
											hx::DivEq(me[(int)5],_ay_length);
											HX_STACK_LINE(258)
											hx::DivEq(me[(int)6],_ay_length);
											HX_STACK_LINE(258)
											hx::DivEq(me[(int)8],_az_length);
											HX_STACK_LINE(258)
											hx::DivEq(me[(int)9],_az_length);
											HX_STACK_LINE(258)
											hx::DivEq(me[(int)10],_az_length);
											HX_STACK_LINE(258)
											_quaternion->setFromRotationMatrix(matrix);
											HX_STACK_LINE(258)
											if (((_this4->_transform == null()))){
												HX_STACK_LINE(258)
												::phoenix::MatrixTransform _g6 = ::phoenix::MatrixTransform_obj::__new(_position,_quaternion,_scale);		HX_STACK_VAR(_g6,"_g6");
												HX_STACK_LINE(258)
												_this4->_transform = _g6;
											}
											else{
												HX_STACK_LINE(258)
												_this4->_transform->pos = _position;
												HX_STACK_LINE(258)
												_this4->_transform->rotation = _quaternion;
												HX_STACK_LINE(258)
												_this4->_transform->scale = _scale;
											}
											HX_STACK_LINE(258)
											_transform = _this4->_transform;
										}
										HX_STACK_LINE(258)
										{
											HX_STACK_LINE(258)
											::phoenix::Vector _p = _transform->pos;		HX_STACK_VAR(_p,"_p");
											HX_STACK_LINE(258)
											_this3->pos = _p;
											HX_STACK_LINE(258)
											if (((_p != null()))){
												HX_STACK_LINE(258)
												::phoenix::Vector_obj::Listen(_this3->pos,_this3->_pos_change_dyn());
												HX_STACK_LINE(258)
												if (((bool((_this3->pos_changed != null())) && bool(!(_this3->ignore_listeners))))){
													HX_STACK_LINE(258)
													_this3->pos_changed(_this3->pos);
												}
											}
											HX_STACK_LINE(258)
											_this3->pos;
										}
										HX_STACK_LINE(258)
										{
											HX_STACK_LINE(258)
											::phoenix::Quaternion _r = _transform->rotation;		HX_STACK_VAR(_r,"_r");
											HX_STACK_LINE(258)
											_this3->rotation = _r;
											HX_STACK_LINE(258)
											if (((_r != null()))){
												HX_STACK_LINE(258)
												{
													HX_STACK_LINE(258)
													::phoenix::Quaternion _q = _this3->rotation;		HX_STACK_VAR(_q,"_q");
													HX_STACK_LINE(258)
													Dynamic listener = _this3->_rotation_change_dyn();		HX_STACK_VAR(listener,"listener");
													HX_STACK_LINE(258)
													_q->listen_x = listener;
													HX_STACK_LINE(258)
													_q->listen_y = listener;
													HX_STACK_LINE(258)
													_q->listen_z = listener;
													HX_STACK_LINE(258)
													_q->listen_w = listener;
												}
												HX_STACK_LINE(258)
												if (((bool((_this3->rotation_changed != null())) && bool(!(_this3->ignore_listeners))))){
													HX_STACK_LINE(258)
													_this3->rotation_changed(_this3->rotation);
												}
											}
											HX_STACK_LINE(258)
											_this3->rotation;
										}
										HX_STACK_LINE(258)
										{
											HX_STACK_LINE(258)
											::phoenix::Vector _s = _transform->scale;		HX_STACK_VAR(_s,"_s");
											HX_STACK_LINE(258)
											_this3->scale = _s;
											HX_STACK_LINE(258)
											if (((_s != null()))){
												HX_STACK_LINE(258)
												::phoenix::Vector_obj::Listen(_this3->scale,_this3->_scale_change_dyn());
												HX_STACK_LINE(258)
												if (((bool((_this3->scale_changed != null())) && bool(!(_this3->ignore_listeners))))){
													HX_STACK_LINE(258)
													_this3->scale_changed(_this3->scale);
												}
											}
											HX_STACK_LINE(258)
											_this3->scale;
										}
									}
									HX_STACK_LINE(258)
									_this3;
								}
								HX_STACK_LINE(258)
								{
									HX_STACK_LINE(258)
									_this2->dirty = false;
									HX_STACK_LINE(258)
									if (((bool((bool((bool(_this2->dirty) && bool(!(_this2->_setup)))) && bool((_this2->_dirty_handlers != null())))) && bool((_this2->_dirty_handlers->__Field(HX_CSTRING("length"),true) > (int)0))))){
										HX_STACK_LINE(258)
										int _g = (int)0;		HX_STACK_VAR(_g,"_g");
										HX_STACK_LINE(258)
										Dynamic _g1 = _this2->_dirty_handlers;		HX_STACK_VAR(_g1,"_g1");
										HX_STACK_LINE(258)
										while((true)){
											HX_STACK_LINE(258)
											if ((!(((_g < _g1->__Field(HX_CSTRING("length"),true)))))){
												HX_STACK_LINE(258)
												break;
											}
											HX_STACK_LINE(258)
											Dynamic _handler = _g1->__GetItem(_g);		HX_STACK_VAR(_handler,"_handler");
											HX_STACK_LINE(258)
											++(_g);
											HX_STACK_LINE(258)
											if (((_handler != null()))){
												HX_STACK_LINE(258)
												_handler(_this2).Cast< Void >();
											}
										}
									}
									HX_STACK_LINE(258)
									_this2->dirty;
								}
								HX_STACK_LINE(258)
								_this2->_cleaning = false;
								HX_STACK_LINE(258)
								if (((bool((_this2->_clean_handlers != null())) && bool((_this2->_clean_handlers->__Field(HX_CSTRING("length"),true) > (int)0))))){
									HX_STACK_LINE(258)
									int _g = (int)0;		HX_STACK_VAR(_g,"_g");
									HX_STACK_LINE(258)
									Dynamic _g1 = _this2->_clean_handlers;		HX_STACK_VAR(_g1,"_g1");
									HX_STACK_LINE(258)
									while((true)){
										HX_STACK_LINE(258)
										if ((!(((_g < _g1->__Field(HX_CSTRING("length"),true)))))){
											HX_STACK_LINE(258)
											break;
										}
										HX_STACK_LINE(258)
										Dynamic _handler = _g1->__GetItem(_g);		HX_STACK_VAR(_handler,"_handler");
										HX_STACK_LINE(258)
										++(_g);
										HX_STACK_LINE(258)
										if (((_handler != null()))){
											HX_STACK_LINE(258)
											_handler(_this2).Cast< Void >();
										}
									}
								}
							}
						}
					}
					HX_STACK_LINE(258)
					if (((bool(_this1->dirty) && bool(!(_this1->_cleaning))))){
						HX_STACK_LINE(258)
						if ((!(_this1->dirty))){
							HX_STACK_LINE(258)
							Dynamic();
						}
						else{
							HX_STACK_LINE(258)
							_this1->_cleaning = true;
							HX_STACK_LINE(258)
							{
								HX_STACK_LINE(258)
								::phoenix::Matrix _this2 = _this1->_pos_matrix;		HX_STACK_VAR(_this2,"_this2");
								HX_STACK_LINE(258)
								{
									HX_STACK_LINE(258)
									Array< Float > e = _this2->elements;		HX_STACK_VAR(e,"e");
									HX_STACK_LINE(258)
									e[(int)0] = (int)1;
									HX_STACK_LINE(258)
									e[(int)4] = (int)0;
									HX_STACK_LINE(258)
									e[(int)8] = (int)0;
									HX_STACK_LINE(258)
									e[(int)12] = _this1->local->pos->x;
									HX_STACK_LINE(258)
									e[(int)1] = (int)0;
									HX_STACK_LINE(258)
									e[(int)5] = (int)1;
									HX_STACK_LINE(258)
									e[(int)9] = (int)0;
									HX_STACK_LINE(258)
									e[(int)13] = _this1->local->pos->y;
									HX_STACK_LINE(258)
									e[(int)2] = (int)0;
									HX_STACK_LINE(258)
									e[(int)6] = (int)0;
									HX_STACK_LINE(258)
									e[(int)10] = (int)1;
									HX_STACK_LINE(258)
									e[(int)14] = _this1->local->pos->z;
									HX_STACK_LINE(258)
									e[(int)3] = (int)0;
									HX_STACK_LINE(258)
									e[(int)7] = (int)0;
									HX_STACK_LINE(258)
									e[(int)11] = (int)0;
									HX_STACK_LINE(258)
									e[(int)15] = (int)1;
									HX_STACK_LINE(258)
									_this2;
								}
								HX_STACK_LINE(258)
								_this2;
							}
							HX_STACK_LINE(258)
							{
								HX_STACK_LINE(258)
								::phoenix::Matrix _this2 = _this1->_rotation_matrix;		HX_STACK_VAR(_this2,"_this2");
								HX_STACK_LINE(258)
								::phoenix::Quaternion q = _this1->local->rotation;		HX_STACK_VAR(q,"q");
								HX_STACK_LINE(258)
								Array< Float > te = _this2->elements;		HX_STACK_VAR(te,"te");
								HX_STACK_LINE(258)
								Float x2 = (q->x + q->x);		HX_STACK_VAR(x2,"x2");
								HX_STACK_LINE(258)
								Float y2 = (q->y + q->y);		HX_STACK_VAR(y2,"y2");
								HX_STACK_LINE(258)
								Float z2 = (q->z + q->z);		HX_STACK_VAR(z2,"z2");
								HX_STACK_LINE(258)
								Float xx = (q->x * x2);		HX_STACK_VAR(xx,"xx");
								HX_STACK_LINE(258)
								Float xy = (q->x * y2);		HX_STACK_VAR(xy,"xy");
								HX_STACK_LINE(258)
								Float xz = (q->x * z2);		HX_STACK_VAR(xz,"xz");
								HX_STACK_LINE(258)
								Float yy = (q->y * y2);		HX_STACK_VAR(yy,"yy");
								HX_STACK_LINE(258)
								Float yz = (q->y * z2);		HX_STACK_VAR(yz,"yz");
								HX_STACK_LINE(258)
								Float zz = (q->z * z2);		HX_STACK_VAR(zz,"zz");
								HX_STACK_LINE(258)
								Float wx = (q->w * x2);		HX_STACK_VAR(wx,"wx");
								HX_STACK_LINE(258)
								Float wy = (q->w * y2);		HX_STACK_VAR(wy,"wy");
								HX_STACK_LINE(258)
								Float wz = (q->w * z2);		HX_STACK_VAR(wz,"wz");
								HX_STACK_LINE(258)
								te[(int)0] = ((int)1 - ((yy + zz)));
								HX_STACK_LINE(258)
								te[(int)4] = (xy - wz);
								HX_STACK_LINE(258)
								te[(int)8] = (xz + wy);
								HX_STACK_LINE(258)
								te[(int)1] = (xy + wz);
								HX_STACK_LINE(258)
								te[(int)5] = ((int)1 - ((xx + zz)));
								HX_STACK_LINE(258)
								te[(int)9] = (yz - wx);
								HX_STACK_LINE(258)
								te[(int)2] = (xz - wy);
								HX_STACK_LINE(258)
								te[(int)6] = (yz + wx);
								HX_STACK_LINE(258)
								te[(int)10] = ((int)1 - ((xx + yy)));
								HX_STACK_LINE(258)
								te[(int)3] = (int)0;
								HX_STACK_LINE(258)
								te[(int)7] = (int)0;
								HX_STACK_LINE(258)
								te[(int)11] = (int)0;
								HX_STACK_LINE(258)
								te[(int)12] = (int)0;
								HX_STACK_LINE(258)
								te[(int)13] = (int)0;
								HX_STACK_LINE(258)
								te[(int)14] = (int)0;
								HX_STACK_LINE(258)
								te[(int)15] = (int)1;
								HX_STACK_LINE(258)
								_this2;
							}
							HX_STACK_LINE(258)
							{
								HX_STACK_LINE(258)
								::phoenix::Matrix _this2 = _this1->_origin_undo_matrix;		HX_STACK_VAR(_this2,"_this2");
								HX_STACK_LINE(258)
								{
									HX_STACK_LINE(258)
									Array< Float > e = _this2->elements;		HX_STACK_VAR(e,"e");
									HX_STACK_LINE(258)
									e[(int)0] = (int)1;
									HX_STACK_LINE(258)
									e[(int)4] = (int)0;
									HX_STACK_LINE(258)
									e[(int)8] = (int)0;
									HX_STACK_LINE(258)
									e[(int)12] = -(_this1->origin->x);
									HX_STACK_LINE(258)
									e[(int)1] = (int)0;
									HX_STACK_LINE(258)
									e[(int)5] = (int)1;
									HX_STACK_LINE(258)
									e[(int)9] = (int)0;
									HX_STACK_LINE(258)
									e[(int)13] = -(_this1->origin->y);
									HX_STACK_LINE(258)
									e[(int)2] = (int)0;
									HX_STACK_LINE(258)
									e[(int)6] = (int)0;
									HX_STACK_LINE(258)
									e[(int)10] = (int)1;
									HX_STACK_LINE(258)
									e[(int)14] = -(_this1->origin->z);
									HX_STACK_LINE(258)
									e[(int)3] = (int)0;
									HX_STACK_LINE(258)
									e[(int)7] = (int)0;
									HX_STACK_LINE(258)
									e[(int)11] = (int)0;
									HX_STACK_LINE(258)
									e[(int)15] = (int)1;
									HX_STACK_LINE(258)
									_this2;
								}
								HX_STACK_LINE(258)
								_this2;
							}
							HX_STACK_LINE(258)
							{
								HX_STACK_LINE(258)
								::phoenix::Matrix _this2 = _this1->local->matrix;		HX_STACK_VAR(_this2,"_this2");
								HX_STACK_LINE(258)
								{
									HX_STACK_LINE(258)
									Array< Float > e = _this2->elements;		HX_STACK_VAR(e,"e");
									HX_STACK_LINE(258)
									e[(int)0] = (int)1;
									HX_STACK_LINE(258)
									e[(int)4] = (int)0;
									HX_STACK_LINE(258)
									e[(int)8] = (int)0;
									HX_STACK_LINE(258)
									e[(int)12] = _this1->origin->x;
									HX_STACK_LINE(258)
									e[(int)1] = (int)0;
									HX_STACK_LINE(258)
									e[(int)5] = (int)1;
									HX_STACK_LINE(258)
									e[(int)9] = (int)0;
									HX_STACK_LINE(258)
									e[(int)13] = _this1->origin->y;
									HX_STACK_LINE(258)
									e[(int)2] = (int)0;
									HX_STACK_LINE(258)
									e[(int)6] = (int)0;
									HX_STACK_LINE(258)
									e[(int)10] = (int)1;
									HX_STACK_LINE(258)
									e[(int)14] = _this1->origin->z;
									HX_STACK_LINE(258)
									e[(int)3] = (int)0;
									HX_STACK_LINE(258)
									e[(int)7] = (int)0;
									HX_STACK_LINE(258)
									e[(int)11] = (int)0;
									HX_STACK_LINE(258)
									e[(int)15] = (int)1;
									HX_STACK_LINE(258)
									_this2;
								}
								HX_STACK_LINE(258)
								_this2;
							}
							HX_STACK_LINE(258)
							{
								HX_STACK_LINE(258)
								::phoenix::Matrix _this2 = _this1->local->matrix;		HX_STACK_VAR(_this2,"_this2");
								HX_STACK_LINE(258)
								::phoenix::Vector _v = _this1->local->scale;		HX_STACK_VAR(_v,"_v");
								HX_STACK_LINE(258)
								Array< Float > te = _this2->elements;		HX_STACK_VAR(te,"te");
								HX_STACK_LINE(258)
								Float _x = _v->x;		HX_STACK_VAR(_x,"_x");
								HX_STACK_LINE(258)
								Float _y = _v->y;		HX_STACK_VAR(_y,"_y");
								HX_STACK_LINE(258)
								Float _z = _v->z;		HX_STACK_VAR(_z,"_z");
								HX_STACK_LINE(258)
								hx::MultEq(te[(int)0],_x);
								HX_STACK_LINE(258)
								hx::MultEq(te[(int)4],_y);
								HX_STACK_LINE(258)
								hx::MultEq(te[(int)8],_z);
								HX_STACK_LINE(258)
								hx::MultEq(te[(int)1],_x);
								HX_STACK_LINE(258)
								hx::MultEq(te[(int)5],_y);
								HX_STACK_LINE(258)
								hx::MultEq(te[(int)9],_z);
								HX_STACK_LINE(258)
								hx::MultEq(te[(int)2],_x);
								HX_STACK_LINE(258)
								hx::MultEq(te[(int)6],_y);
								HX_STACK_LINE(258)
								hx::MultEq(te[(int)10],_z);
								HX_STACK_LINE(258)
								hx::MultEq(te[(int)3],_x);
								HX_STACK_LINE(258)
								hx::MultEq(te[(int)7],_y);
								HX_STACK_LINE(258)
								hx::MultEq(te[(int)11],_z);
								HX_STACK_LINE(258)
								_this2;
							}
							HX_STACK_LINE(258)
							{
								HX_STACK_LINE(258)
								::phoenix::Matrix _this2 = _this1->local->matrix;		HX_STACK_VAR(_this2,"_this2");
								HX_STACK_LINE(258)
								{
									HX_STACK_LINE(258)
									Array< Float > ae = _this2->elements;		HX_STACK_VAR(ae,"ae");
									HX_STACK_LINE(258)
									Array< Float > be = _this1->_rotation_matrix->elements;		HX_STACK_VAR(be,"be");
									HX_STACK_LINE(258)
									Array< Float > te = _this2->elements;		HX_STACK_VAR(te,"te");
									HX_STACK_LINE(258)
									Float a11 = ae->__get((int)0);		HX_STACK_VAR(a11,"a11");
									HX_STACK_LINE(258)
									Float a12 = ae->__get((int)4);		HX_STACK_VAR(a12,"a12");
									HX_STACK_LINE(258)
									Float a13 = ae->__get((int)8);		HX_STACK_VAR(a13,"a13");
									HX_STACK_LINE(258)
									Float a14 = ae->__get((int)12);		HX_STACK_VAR(a14,"a14");
									HX_STACK_LINE(258)
									Float a21 = ae->__get((int)1);		HX_STACK_VAR(a21,"a21");
									HX_STACK_LINE(258)
									Float a22 = ae->__get((int)5);		HX_STACK_VAR(a22,"a22");
									HX_STACK_LINE(258)
									Float a23 = ae->__get((int)9);		HX_STACK_VAR(a23,"a23");
									HX_STACK_LINE(258)
									Float a24 = ae->__get((int)13);		HX_STACK_VAR(a24,"a24");
									HX_STACK_LINE(258)
									Float a31 = ae->__get((int)2);		HX_STACK_VAR(a31,"a31");
									HX_STACK_LINE(258)
									Float a32 = ae->__get((int)6);		HX_STACK_VAR(a32,"a32");
									HX_STACK_LINE(258)
									Float a33 = ae->__get((int)10);		HX_STACK_VAR(a33,"a33");
									HX_STACK_LINE(258)
									Float a34 = ae->__get((int)14);		HX_STACK_VAR(a34,"a34");
									HX_STACK_LINE(258)
									Float a41 = ae->__get((int)3);		HX_STACK_VAR(a41,"a41");
									HX_STACK_LINE(258)
									Float a42 = ae->__get((int)7);		HX_STACK_VAR(a42,"a42");
									HX_STACK_LINE(258)
									Float a43 = ae->__get((int)11);		HX_STACK_VAR(a43,"a43");
									HX_STACK_LINE(258)
									Float a44 = ae->__get((int)15);		HX_STACK_VAR(a44,"a44");
									HX_STACK_LINE(258)
									Float b11 = be->__get((int)0);		HX_STACK_VAR(b11,"b11");
									HX_STACK_LINE(258)
									Float b12 = be->__get((int)4);		HX_STACK_VAR(b12,"b12");
									HX_STACK_LINE(258)
									Float b13 = be->__get((int)8);		HX_STACK_VAR(b13,"b13");
									HX_STACK_LINE(258)
									Float b14 = be->__get((int)12);		HX_STACK_VAR(b14,"b14");
									HX_STACK_LINE(258)
									Float b21 = be->__get((int)1);		HX_STACK_VAR(b21,"b21");
									HX_STACK_LINE(258)
									Float b22 = be->__get((int)5);		HX_STACK_VAR(b22,"b22");
									HX_STACK_LINE(258)
									Float b23 = be->__get((int)9);		HX_STACK_VAR(b23,"b23");
									HX_STACK_LINE(258)
									Float b24 = be->__get((int)13);		HX_STACK_VAR(b24,"b24");
									HX_STACK_LINE(258)
									Float b31 = be->__get((int)2);		HX_STACK_VAR(b31,"b31");
									HX_STACK_LINE(258)
									Float b32 = be->__get((int)6);		HX_STACK_VAR(b32,"b32");
									HX_STACK_LINE(258)
									Float b33 = be->__get((int)10);		HX_STACK_VAR(b33,"b33");
									HX_STACK_LINE(258)
									Float b34 = be->__get((int)14);		HX_STACK_VAR(b34,"b34");
									HX_STACK_LINE(258)
									Float b41 = be->__get((int)3);		HX_STACK_VAR(b41,"b41");
									HX_STACK_LINE(258)
									Float b42 = be->__get((int)7);		HX_STACK_VAR(b42,"b42");
									HX_STACK_LINE(258)
									Float b43 = be->__get((int)11);		HX_STACK_VAR(b43,"b43");
									HX_STACK_LINE(258)
									Float b44 = be->__get((int)15);		HX_STACK_VAR(b44,"b44");
									HX_STACK_LINE(258)
									te[(int)0] = ((((a11 * b11) + (a12 * b21)) + (a13 * b31)) + (a14 * b41));
									HX_STACK_LINE(258)
									te[(int)4] = ((((a11 * b12) + (a12 * b22)) + (a13 * b32)) + (a14 * b42));
									HX_STACK_LINE(258)
									te[(int)8] = ((((a11 * b13) + (a12 * b23)) + (a13 * b33)) + (a14 * b43));
									HX_STACK_LINE(258)
									te[(int)12] = ((((a11 * b14) + (a12 * b24)) + (a13 * b34)) + (a14 * b44));
									HX_STACK_LINE(258)
									te[(int)1] = ((((a21 * b11) + (a22 * b21)) + (a23 * b31)) + (a24 * b41));
									HX_STACK_LINE(258)
									te[(int)5] = ((((a21 * b12) + (a22 * b22)) + (a23 * b32)) + (a24 * b42));
									HX_STACK_LINE(258)
									te[(int)9] = ((((a21 * b13) + (a22 * b23)) + (a23 * b33)) + (a24 * b43));
									HX_STACK_LINE(258)
									te[(int)13] = ((((a21 * b14) + (a22 * b24)) + (a23 * b34)) + (a24 * b44));
									HX_STACK_LINE(258)
									te[(int)2] = ((((a31 * b11) + (a32 * b21)) + (a33 * b31)) + (a34 * b41));
									HX_STACK_LINE(258)
									te[(int)6] = ((((a31 * b12) + (a32 * b22)) + (a33 * b32)) + (a34 * b42));
									HX_STACK_LINE(258)
									te[(int)10] = ((((a31 * b13) + (a32 * b23)) + (a33 * b33)) + (a34 * b43));
									HX_STACK_LINE(258)
									te[(int)14] = ((((a31 * b14) + (a32 * b24)) + (a33 * b34)) + (a34 * b44));
									HX_STACK_LINE(258)
									te[(int)3] = ((((a41 * b11) + (a42 * b21)) + (a43 * b31)) + (a44 * b41));
									HX_STACK_LINE(258)
									te[(int)7] = ((((a41 * b12) + (a42 * b22)) + (a43 * b32)) + (a44 * b42));
									HX_STACK_LINE(258)
									te[(int)11] = ((((a41 * b13) + (a42 * b23)) + (a43 * b33)) + (a44 * b43));
									HX_STACK_LINE(258)
									te[(int)15] = ((((a41 * b14) + (a42 * b24)) + (a43 * b34)) + (a44 * b44));
									HX_STACK_LINE(258)
									_this2;
								}
							}
							HX_STACK_LINE(258)
							{
								HX_STACK_LINE(258)
								::phoenix::Matrix _this2 = _this1->local->matrix;		HX_STACK_VAR(_this2,"_this2");
								HX_STACK_LINE(258)
								::phoenix::Vector _v = _this1->local->pos;		HX_STACK_VAR(_v,"_v");
								HX_STACK_LINE(258)
								Array< Float > te = _this2->elements;		HX_STACK_VAR(te,"te");
								HX_STACK_LINE(258)
								te[(int)12] = _v->x;
								HX_STACK_LINE(258)
								te[(int)13] = _v->y;
								HX_STACK_LINE(258)
								te[(int)14] = _v->z;
								HX_STACK_LINE(258)
								_this2;
							}
							HX_STACK_LINE(258)
							{
								HX_STACK_LINE(258)
								::phoenix::Matrix _this2 = _this1->local->matrix;		HX_STACK_VAR(_this2,"_this2");
								HX_STACK_LINE(258)
								{
									HX_STACK_LINE(258)
									Array< Float > ae = _this2->elements;		HX_STACK_VAR(ae,"ae");
									HX_STACK_LINE(258)
									Array< Float > be = _this1->_origin_undo_matrix->elements;		HX_STACK_VAR(be,"be");
									HX_STACK_LINE(258)
									Array< Float > te = _this2->elements;		HX_STACK_VAR(te,"te");
									HX_STACK_LINE(258)
									Float a11 = ae->__get((int)0);		HX_STACK_VAR(a11,"a11");
									HX_STACK_LINE(258)
									Float a12 = ae->__get((int)4);		HX_STACK_VAR(a12,"a12");
									HX_STACK_LINE(258)
									Float a13 = ae->__get((int)8);		HX_STACK_VAR(a13,"a13");
									HX_STACK_LINE(258)
									Float a14 = ae->__get((int)12);		HX_STACK_VAR(a14,"a14");
									HX_STACK_LINE(258)
									Float a21 = ae->__get((int)1);		HX_STACK_VAR(a21,"a21");
									HX_STACK_LINE(258)
									Float a22 = ae->__get((int)5);		HX_STACK_VAR(a22,"a22");
									HX_STACK_LINE(258)
									Float a23 = ae->__get((int)9);		HX_STACK_VAR(a23,"a23");
									HX_STACK_LINE(258)
									Float a24 = ae->__get((int)13);		HX_STACK_VAR(a24,"a24");
									HX_STACK_LINE(258)
									Float a31 = ae->__get((int)2);		HX_STACK_VAR(a31,"a31");
									HX_STACK_LINE(258)
									Float a32 = ae->__get((int)6);		HX_STACK_VAR(a32,"a32");
									HX_STACK_LINE(258)
									Float a33 = ae->__get((int)10);		HX_STACK_VAR(a33,"a33");
									HX_STACK_LINE(258)
									Float a34 = ae->__get((int)14);		HX_STACK_VAR(a34,"a34");
									HX_STACK_LINE(258)
									Float a41 = ae->__get((int)3);		HX_STACK_VAR(a41,"a41");
									HX_STACK_LINE(258)
									Float a42 = ae->__get((int)7);		HX_STACK_VAR(a42,"a42");
									HX_STACK_LINE(258)
									Float a43 = ae->__get((int)11);		HX_STACK_VAR(a43,"a43");
									HX_STACK_LINE(258)
									Float a44 = ae->__get((int)15);		HX_STACK_VAR(a44,"a44");
									HX_STACK_LINE(258)
									Float b11 = be->__get((int)0);		HX_STACK_VAR(b11,"b11");
									HX_STACK_LINE(258)
									Float b12 = be->__get((int)4);		HX_STACK_VAR(b12,"b12");
									HX_STACK_LINE(258)
									Float b13 = be->__get((int)8);		HX_STACK_VAR(b13,"b13");
									HX_STACK_LINE(258)
									Float b14 = be->__get((int)12);		HX_STACK_VAR(b14,"b14");
									HX_STACK_LINE(258)
									Float b21 = be->__get((int)1);		HX_STACK_VAR(b21,"b21");
									HX_STACK_LINE(258)
									Float b22 = be->__get((int)5);		HX_STACK_VAR(b22,"b22");
									HX_STACK_LINE(258)
									Float b23 = be->__get((int)9);		HX_STACK_VAR(b23,"b23");
									HX_STACK_LINE(258)
									Float b24 = be->__get((int)13);		HX_STACK_VAR(b24,"b24");
									HX_STACK_LINE(258)
									Float b31 = be->__get((int)2);		HX_STACK_VAR(b31,"b31");
									HX_STACK_LINE(258)
									Float b32 = be->__get((int)6);		HX_STACK_VAR(b32,"b32");
									HX_STACK_LINE(258)
									Float b33 = be->__get((int)10);		HX_STACK_VAR(b33,"b33");
									HX_STACK_LINE(258)
									Float b34 = be->__get((int)14);		HX_STACK_VAR(b34,"b34");
									HX_STACK_LINE(258)
									Float b41 = be->__get((int)3);		HX_STACK_VAR(b41,"b41");
									HX_STACK_LINE(258)
									Float b42 = be->__get((int)7);		HX_STACK_VAR(b42,"b42");
									HX_STACK_LINE(258)
									Float b43 = be->__get((int)11);		HX_STACK_VAR(b43,"b43");
									HX_STACK_LINE(258)
									Float b44 = be->__get((int)15);		HX_STACK_VAR(b44,"b44");
									HX_STACK_LINE(258)
									te[(int)0] = ((((a11 * b11) + (a12 * b21)) + (a13 * b31)) + (a14 * b41));
									HX_STACK_LINE(258)
									te[(int)4] = ((((a11 * b12) + (a12 * b22)) + (a13 * b32)) + (a14 * b42));
									HX_STACK_LINE(258)
									te[(int)8] = ((((a11 * b13) + (a12 * b23)) + (a13 * b33)) + (a14 * b43));
									HX_STACK_LINE(258)
									te[(int)12] = ((((a11 * b14) + (a12 * b24)) + (a13 * b34)) + (a14 * b44));
									HX_STACK_LINE(258)
									te[(int)1] = ((((a21 * b11) + (a22 * b21)) + (a23 * b31)) + (a24 * b41));
									HX_STACK_LINE(258)
									te[(int)5] = ((((a21 * b12) + (a22 * b22)) + (a23 * b32)) + (a24 * b42));
									HX_STACK_LINE(258)
									te[(int)9] = ((((a21 * b13) + (a22 * b23)) + (a23 * b33)) + (a24 * b43));
									HX_STACK_LINE(258)
									te[(int)13] = ((((a21 * b14) + (a22 * b24)) + (a23 * b34)) + (a24 * b44));
									HX_STACK_LINE(258)
									te[(int)2] = ((((a31 * b11) + (a32 * b21)) + (a33 * b31)) + (a34 * b41));
									HX_STACK_LINE(258)
									te[(int)6] = ((((a31 * b12) + (a32 * b22)) + (a33 * b32)) + (a34 * b42));
									HX_STACK_LINE(258)
									te[(int)10] = ((((a31 * b13) + (a32 * b23)) + (a33 * b33)) + (a34 * b43));
									HX_STACK_LINE(258)
									te[(int)14] = ((((a31 * b14) + (a32 * b24)) + (a33 * b34)) + (a34 * b44));
									HX_STACK_LINE(258)
									te[(int)3] = ((((a41 * b11) + (a42 * b21)) + (a43 * b31)) + (a44 * b41));
									HX_STACK_LINE(258)
									te[(int)7] = ((((a41 * b12) + (a42 * b22)) + (a43 * b32)) + (a44 * b42));
									HX_STACK_LINE(258)
									te[(int)11] = ((((a41 * b13) + (a42 * b23)) + (a43 * b33)) + (a44 * b43));
									HX_STACK_LINE(258)
									te[(int)15] = ((((a41 * b14) + (a42 * b24)) + (a43 * b34)) + (a44 * b44));
									HX_STACK_LINE(258)
									_this2;
								}
							}
							HX_STACK_LINE(258)
							if (((_this1->parent != null()))){
								HX_STACK_LINE(258)
								::phoenix::Spatial _this2 = _this1->get_world();		HX_STACK_VAR(_this2,"_this2");
								HX_STACK_LINE(258)
								::phoenix::Matrix _m;		HX_STACK_VAR(_m,"_m");
								HX_STACK_LINE(258)
								{
									HX_STACK_LINE(258)
									::phoenix::Matrix _this3;		HX_STACK_VAR(_this3,"_this3");
									HX_STACK_LINE(258)
									{
										HX_STACK_LINE(258)
										::phoenix::Spatial _this4 = _this1->get_world();		HX_STACK_VAR(_this4,"_this4");
										HX_STACK_LINE(258)
										_this3 = _this4->matrix;
									}
									HX_STACK_LINE(258)
									::phoenix::Matrix _a;		HX_STACK_VAR(_a,"_a");
									HX_STACK_LINE(258)
									{
										HX_STACK_LINE(258)
										::phoenix::Spatial _this4 = _this1->parent->get_world();		HX_STACK_VAR(_this4,"_this4");
										HX_STACK_LINE(258)
										_a = _this4->matrix;
									}
									HX_STACK_LINE(258)
									Array< Float > ae = _a->elements;		HX_STACK_VAR(ae,"ae");
									HX_STACK_LINE(258)
									Array< Float > be = _this1->local->matrix->elements;		HX_STACK_VAR(be,"be");
									HX_STACK_LINE(258)
									Array< Float > te = _this3->elements;		HX_STACK_VAR(te,"te");
									HX_STACK_LINE(258)
									Float a11 = ae->__get((int)0);		HX_STACK_VAR(a11,"a11");
									HX_STACK_LINE(258)
									Float a12 = ae->__get((int)4);		HX_STACK_VAR(a12,"a12");
									HX_STACK_LINE(258)
									Float a13 = ae->__get((int)8);		HX_STACK_VAR(a13,"a13");
									HX_STACK_LINE(258)
									Float a14 = ae->__get((int)12);		HX_STACK_VAR(a14,"a14");
									HX_STACK_LINE(258)
									Float a21 = ae->__get((int)1);		HX_STACK_VAR(a21,"a21");
									HX_STACK_LINE(258)
									Float a22 = ae->__get((int)5);		HX_STACK_VAR(a22,"a22");
									HX_STACK_LINE(258)
									Float a23 = ae->__get((int)9);		HX_STACK_VAR(a23,"a23");
									HX_STACK_LINE(258)
									Float a24 = ae->__get((int)13);		HX_STACK_VAR(a24,"a24");
									HX_STACK_LINE(258)
									Float a31 = ae->__get((int)2);		HX_STACK_VAR(a31,"a31");
									HX_STACK_LINE(258)
									Float a32 = ae->__get((int)6);		HX_STACK_VAR(a32,"a32");
									HX_STACK_LINE(258)
									Float a33 = ae->__get((int)10);		HX_STACK_VAR(a33,"a33");
									HX_STACK_LINE(258)
									Float a34 = ae->__get((int)14);		HX_STACK_VAR(a34,"a34");
									HX_STACK_LINE(258)
									Float a41 = ae->__get((int)3);		HX_STACK_VAR(a41,"a41");
									HX_STACK_LINE(258)
									Float a42 = ae->__get((int)7);		HX_STACK_VAR(a42,"a42");
									HX_STACK_LINE(258)
									Float a43 = ae->__get((int)11);		HX_STACK_VAR(a43,"a43");
									HX_STACK_LINE(258)
									Float a44 = ae->__get((int)15);		HX_STACK_VAR(a44,"a44");
									HX_STACK_LINE(258)
									Float b11 = be->__get((int)0);		HX_STACK_VAR(b11,"b11");
									HX_STACK_LINE(258)
									Float b12 = be->__get((int)4);		HX_STACK_VAR(b12,"b12");
									HX_STACK_LINE(258)
									Float b13 = be->__get((int)8);		HX_STACK_VAR(b13,"b13");
									HX_STACK_LINE(258)
									Float b14 = be->__get((int)12);		HX_STACK_VAR(b14,"b14");
									HX_STACK_LINE(258)
									Float b21 = be->__get((int)1);		HX_STACK_VAR(b21,"b21");
									HX_STACK_LINE(258)
									Float b22 = be->__get((int)5);		HX_STACK_VAR(b22,"b22");
									HX_STACK_LINE(258)
									Float b23 = be->__get((int)9);		HX_STACK_VAR(b23,"b23");
									HX_STACK_LINE(258)
									Float b24 = be->__get((int)13);		HX_STACK_VAR(b24,"b24");
									HX_STACK_LINE(258)
									Float b31 = be->__get((int)2);		HX_STACK_VAR(b31,"b31");
									HX_STACK_LINE(258)
									Float b32 = be->__get((int)6);		HX_STACK_VAR(b32,"b32");
									HX_STACK_LINE(258)
									Float b33 = be->__get((int)10);		HX_STACK_VAR(b33,"b33");
									HX_STACK_LINE(258)
									Float b34 = be->__get((int)14);		HX_STACK_VAR(b34,"b34");
									HX_STACK_LINE(258)
									Float b41 = be->__get((int)3);		HX_STACK_VAR(b41,"b41");
									HX_STACK_LINE(258)
									Float b42 = be->__get((int)7);		HX_STACK_VAR(b42,"b42");
									HX_STACK_LINE(258)
									Float b43 = be->__get((int)11);		HX_STACK_VAR(b43,"b43");
									HX_STACK_LINE(258)
									Float b44 = be->__get((int)15);		HX_STACK_VAR(b44,"b44");
									HX_STACK_LINE(258)
									te[(int)0] = ((((a11 * b11) + (a12 * b21)) + (a13 * b31)) + (a14 * b41));
									HX_STACK_LINE(258)
									te[(int)4] = ((((a11 * b12) + (a12 * b22)) + (a13 * b32)) + (a14 * b42));
									HX_STACK_LINE(258)
									te[(int)8] = ((((a11 * b13) + (a12 * b23)) + (a13 * b33)) + (a14 * b43));
									HX_STACK_LINE(258)
									te[(int)12] = ((((a11 * b14) + (a12 * b24)) + (a13 * b34)) + (a14 * b44));
									HX_STACK_LINE(258)
									te[(int)1] = ((((a21 * b11) + (a22 * b21)) + (a23 * b31)) + (a24 * b41));
									HX_STACK_LINE(258)
									te[(int)5] = ((((a21 * b12) + (a22 * b22)) + (a23 * b32)) + (a24 * b42));
									HX_STACK_LINE(258)
									te[(int)9] = ((((a21 * b13) + (a22 * b23)) + (a23 * b33)) + (a24 * b43));
									HX_STACK_LINE(258)
									te[(int)13] = ((((a21 * b14) + (a22 * b24)) + (a23 * b34)) + (a24 * b44));
									HX_STACK_LINE(258)
									te[(int)2] = ((((a31 * b11) + (a32 * b21)) + (a33 * b31)) + (a34 * b41));
									HX_STACK_LINE(258)
									te[(int)6] = ((((a31 * b12) + (a32 * b22)) + (a33 * b32)) + (a34 * b42));
									HX_STACK_LINE(258)
									te[(int)10] = ((((a31 * b13) + (a32 * b23)) + (a33 * b33)) + (a34 * b43));
									HX_STACK_LINE(258)
									te[(int)14] = ((((a31 * b14) + (a32 * b24)) + (a33 * b34)) + (a34 * b44));
									HX_STACK_LINE(258)
									te[(int)3] = ((((a41 * b11) + (a42 * b21)) + (a43 * b31)) + (a44 * b41));
									HX_STACK_LINE(258)
									te[(int)7] = ((((a41 * b12) + (a42 * b22)) + (a43 * b32)) + (a44 * b42));
									HX_STACK_LINE(258)
									te[(int)11] = ((((a41 * b13) + (a42 * b23)) + (a43 * b33)) + (a44 * b43));
									HX_STACK_LINE(258)
									te[(int)15] = ((((a41 * b14) + (a42 * b24)) + (a43 * b34)) + (a44 * b44));
									HX_STACK_LINE(258)
									_m = _this3;
								}
								HX_STACK_LINE(258)
								_this2->matrix = _m;
								HX_STACK_LINE(258)
								if (((_m != null()))){
									HX_STACK_LINE(258)
									::snow::platform::native::utils::Float32Array _g7;		HX_STACK_VAR(_g7,"_g7");
									HX_STACK_LINE(258)
									{
										HX_STACK_LINE(258)
										::phoenix::Matrix _this3 = _this2->matrix;		HX_STACK_VAR(_this3,"_this3");
										HX_STACK_LINE(258)
										{
											HX_STACK_LINE(258)
											::snow::platform::native::utils::Float32Array _this4 = _this3->_float32array;		HX_STACK_VAR(_this4,"_this4");
											HX_STACK_LINE(258)
											Dynamic bufferOrArray = _this3->elements;		HX_STACK_VAR(bufferOrArray,"bufferOrArray");
											HX_STACK_LINE(258)
											int offset = (int)0;		HX_STACK_VAR(offset,"offset");
											HX_STACK_LINE(258)
											if ((::Std_obj::is(bufferOrArray,hx::ClassOf< Array<int> >()))){
												HX_STACK_LINE(258)
												Array< Float > floats = bufferOrArray;		HX_STACK_VAR(floats,"floats");
												HX_STACK_LINE(258)
												{
													HX_STACK_LINE(258)
													int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
													HX_STACK_LINE(258)
													int _g = floats->length;		HX_STACK_VAR(_g,"_g");
													HX_STACK_LINE(258)
													while((true)){
														HX_STACK_LINE(258)
														if ((!(((_g1 < _g))))){
															HX_STACK_LINE(258)
															break;
														}
														HX_STACK_LINE(258)
														int i = (_g1)++;		HX_STACK_VAR(i,"i");
														HX_STACK_LINE(258)
														::__hxcpp_memory_set_float(_this4->bytes,(((int((i + offset)) << int((int)2))) + _this4->byteOffset),floats->__get(i));
													}
												}
											}
											else{
												HX_STACK_LINE(258)
												if ((::Std_obj::is(bufferOrArray,hx::ClassOf< ::snow::platform::native::utils::Float32Array >()))){
													HX_STACK_LINE(258)
													::snow::platform::native::utils::Float32Array floats = bufferOrArray;		HX_STACK_VAR(floats,"floats");
													HX_STACK_LINE(258)
													{
														HX_STACK_LINE(258)
														int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
														HX_STACK_LINE(258)
														int _g = floats->length;		HX_STACK_VAR(_g,"_g");
														HX_STACK_LINE(258)
														while((true)){
															HX_STACK_LINE(258)
															if ((!(((_g1 < _g))))){
																HX_STACK_LINE(258)
																break;
															}
															HX_STACK_LINE(258)
															int i = (_g1)++;		HX_STACK_VAR(i,"i");
															HX_STACK_LINE(258)
															::__hxcpp_memory_set_float(_this4->bytes,(((int((i + offset)) << int((int)2))) + _this4->byteOffset),floats->__get(i));
														}
													}
												}
												else{
													HX_STACK_LINE(258)
													HX_STACK_DO_THROW(HX_CSTRING("Invalid input buffer"));
												}
											}
										}
										HX_STACK_LINE(258)
										_g7 = ::snow::platform::native::utils::Float32Array_obj::__new(_this3->_float32array,null(),null());
									}
									HX_STACK_LINE(258)
									_this2->floats = _g7;
								}
								HX_STACK_LINE(258)
								_this2->matrix;
							}
							else{
								HX_STACK_LINE(258)
								::phoenix::Spatial _this2 = _this1->get_world();		HX_STACK_VAR(_this2,"_this2");
								HX_STACK_LINE(258)
								::phoenix::Matrix _m;		HX_STACK_VAR(_m,"_m");
								HX_STACK_LINE(258)
								{
									HX_STACK_LINE(258)
									Array< Float > te = _this1->local->matrix->elements;		HX_STACK_VAR(te,"te");
									HX_STACK_LINE(258)
									_m = ::phoenix::Matrix_obj::__new(te->__get((int)0),te->__get((int)4),te->__get((int)8),te->__get((int)12),te->__get((int)1),te->__get((int)5),te->__get((int)9),te->__get((int)13),te->__get((int)2),te->__get((int)6),te->__get((int)10),te->__get((int)14),te->__get((int)3),te->__get((int)7),te->__get((int)11),te->__get((int)15));
								}
								HX_STACK_LINE(258)
								_this2->matrix = _m;
								HX_STACK_LINE(258)
								if (((_m != null()))){
									HX_STACK_LINE(258)
									::snow::platform::native::utils::Float32Array _g8;		HX_STACK_VAR(_g8,"_g8");
									HX_STACK_LINE(258)
									{
										HX_STACK_LINE(258)
										::phoenix::Matrix _this3 = _this2->matrix;		HX_STACK_VAR(_this3,"_this3");
										HX_STACK_LINE(258)
										{
											HX_STACK_LINE(258)
											::snow::platform::native::utils::Float32Array _this4 = _this3->_float32array;		HX_STACK_VAR(_this4,"_this4");
											HX_STACK_LINE(258)
											Dynamic bufferOrArray = _this3->elements;		HX_STACK_VAR(bufferOrArray,"bufferOrArray");
											HX_STACK_LINE(258)
											int offset = (int)0;		HX_STACK_VAR(offset,"offset");
											HX_STACK_LINE(258)
											if ((::Std_obj::is(bufferOrArray,hx::ClassOf< Array<int> >()))){
												HX_STACK_LINE(258)
												Array< Float > floats = bufferOrArray;		HX_STACK_VAR(floats,"floats");
												HX_STACK_LINE(258)
												{
													HX_STACK_LINE(258)
													int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
													HX_STACK_LINE(258)
													int _g = floats->length;		HX_STACK_VAR(_g,"_g");
													HX_STACK_LINE(258)
													while((true)){
														HX_STACK_LINE(258)
														if ((!(((_g1 < _g))))){
															HX_STACK_LINE(258)
															break;
														}
														HX_STACK_LINE(258)
														int i = (_g1)++;		HX_STACK_VAR(i,"i");
														HX_STACK_LINE(258)
														::__hxcpp_memory_set_float(_this4->bytes,(((int((i + offset)) << int((int)2))) + _this4->byteOffset),floats->__get(i));
													}
												}
											}
											else{
												HX_STACK_LINE(258)
												if ((::Std_obj::is(bufferOrArray,hx::ClassOf< ::snow::platform::native::utils::Float32Array >()))){
													HX_STACK_LINE(258)
													::snow::platform::native::utils::Float32Array floats = bufferOrArray;		HX_STACK_VAR(floats,"floats");
													HX_STACK_LINE(258)
													{
														HX_STACK_LINE(258)
														int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
														HX_STACK_LINE(258)
														int _g = floats->length;		HX_STACK_VAR(_g,"_g");
														HX_STACK_LINE(258)
														while((true)){
															HX_STACK_LINE(258)
															if ((!(((_g1 < _g))))){
																HX_STACK_LINE(258)
																break;
															}
															HX_STACK_LINE(258)
															int i = (_g1)++;		HX_STACK_VAR(i,"i");
															HX_STACK_LINE(258)
															::__hxcpp_memory_set_float(_this4->bytes,(((int((i + offset)) << int((int)2))) + _this4->byteOffset),floats->__get(i));
														}
													}
												}
												else{
													HX_STACK_LINE(258)
													HX_STACK_DO_THROW(HX_CSTRING("Invalid input buffer"));
												}
											}
										}
										HX_STACK_LINE(258)
										_g8 = ::snow::platform::native::utils::Float32Array_obj::__new(_this3->_float32array,null(),null());
									}
									HX_STACK_LINE(258)
									_this2->floats = _g8;
								}
								HX_STACK_LINE(258)
								_this2->matrix;
							}
							HX_STACK_LINE(258)
							{
								HX_STACK_LINE(258)
								::phoenix::Spatial _this2 = _this1->get_world();		HX_STACK_VAR(_this2,"_this2");
								HX_STACK_LINE(258)
								if ((_this2->auto_decompose)){
									HX_STACK_LINE(258)
									::phoenix::MatrixTransform _transform;		HX_STACK_VAR(_transform,"_transform");
									HX_STACK_LINE(258)
									{
										HX_STACK_LINE(258)
										::phoenix::Matrix _this3 = _this2->matrix;		HX_STACK_VAR(_this3,"_this3");
										HX_STACK_LINE(258)
										::phoenix::Vector _position = null();		HX_STACK_VAR(_position,"_position");
										HX_STACK_LINE(258)
										::phoenix::Quaternion _quaternion = null();		HX_STACK_VAR(_quaternion,"_quaternion");
										HX_STACK_LINE(258)
										::phoenix::Vector _scale = null();		HX_STACK_VAR(_scale,"_scale");
										HX_STACK_LINE(258)
										Array< Float > te = _this3->elements;		HX_STACK_VAR(te,"te");
										HX_STACK_LINE(258)
										::phoenix::Matrix matrix = ::phoenix::Matrix_obj::__new(null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(matrix,"matrix");
										HX_STACK_LINE(258)
										Float _ax_x = te->__get((int)0);		HX_STACK_VAR(_ax_x,"_ax_x");
										HX_STACK_LINE(258)
										Float _ax_y = te->__get((int)1);		HX_STACK_VAR(_ax_y,"_ax_y");
										HX_STACK_LINE(258)
										Float _ax_z = te->__get((int)2);		HX_STACK_VAR(_ax_z,"_ax_z");
										HX_STACK_LINE(258)
										Float _ay_x = te->__get((int)4);		HX_STACK_VAR(_ay_x,"_ay_x");
										HX_STACK_LINE(258)
										Float _ay_y = te->__get((int)5);		HX_STACK_VAR(_ay_y,"_ay_y");
										HX_STACK_LINE(258)
										Float _ay_z = te->__get((int)6);		HX_STACK_VAR(_ay_z,"_ay_z");
										HX_STACK_LINE(258)
										Float _az_x = te->__get((int)8);		HX_STACK_VAR(_az_x,"_az_x");
										HX_STACK_LINE(258)
										Float _az_y = te->__get((int)9);		HX_STACK_VAR(_az_y,"_az_y");
										HX_STACK_LINE(258)
										Float _az_z = te->__get((int)10);		HX_STACK_VAR(_az_z,"_az_z");
										HX_STACK_LINE(258)
										Float _ax_length = ::Math_obj::sqrt((((_ax_x * _ax_x) + (_ax_y * _ax_y)) + (_ax_z * _ax_z)));		HX_STACK_VAR(_ax_length,"_ax_length");
										HX_STACK_LINE(258)
										Float _ay_length = ::Math_obj::sqrt((((_ay_x * _ay_x) + (_ay_y * _ay_y)) + (_ay_z * _ay_z)));		HX_STACK_VAR(_ay_length,"_ay_length");
										HX_STACK_LINE(258)
										Float _az_length = ::Math_obj::sqrt((((_az_x * _az_x) + (_az_y * _az_y)) + (_az_z * _az_z)));		HX_STACK_VAR(_az_length,"_az_length");
										HX_STACK_LINE(258)
										if (((_quaternion == null()))){
											HX_STACK_LINE(258)
											::phoenix::Quaternion _g9 = ::phoenix::Quaternion_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(_g9,"_g9");
											HX_STACK_LINE(258)
											_quaternion = _g9;
										}
										HX_STACK_LINE(258)
										if (((_position == null()))){
											HX_STACK_LINE(258)
											::phoenix::Vector _g10 = ::phoenix::Vector_obj::__new(te->__get((int)12),te->__get((int)13),te->__get((int)14),null());		HX_STACK_VAR(_g10,"_g10");
											HX_STACK_LINE(258)
											_position = _g10;
										}
										else{
											HX_STACK_LINE(258)
											{
												HX_STACK_LINE(258)
												Float _x = te->__get((int)12);		HX_STACK_VAR(_x,"_x");
												HX_STACK_LINE(258)
												_position->x = _x;
												HX_STACK_LINE(258)
												if ((_position->_construct)){
													HX_STACK_LINE(258)
													_position->x;
												}
												else{
													HX_STACK_LINE(258)
													if (((bool((_position->listen_x != null())) && bool(!(_position->ignore_listeners))))){
														HX_STACK_LINE(258)
														_position->listen_x(_x);
													}
													HX_STACK_LINE(258)
													_position->x;
												}
											}
											HX_STACK_LINE(258)
											{
												HX_STACK_LINE(258)
												Float _y = te->__get((int)13);		HX_STACK_VAR(_y,"_y");
												HX_STACK_LINE(258)
												_position->y = _y;
												HX_STACK_LINE(258)
												if ((_position->_construct)){
													HX_STACK_LINE(258)
													_position->y;
												}
												else{
													HX_STACK_LINE(258)
													if (((bool((_position->listen_y != null())) && bool(!(_position->ignore_listeners))))){
														HX_STACK_LINE(258)
														_position->listen_y(_y);
													}
													HX_STACK_LINE(258)
													_position->y;
												}
											}
											HX_STACK_LINE(258)
											{
												HX_STACK_LINE(258)
												Float _z = te->__get((int)14);		HX_STACK_VAR(_z,"_z");
												HX_STACK_LINE(258)
												_position->z = _z;
												HX_STACK_LINE(258)
												if ((_position->_construct)){
													HX_STACK_LINE(258)
													_position->z;
												}
												else{
													HX_STACK_LINE(258)
													if (((bool((_position->listen_z != null())) && bool(!(_position->ignore_listeners))))){
														HX_STACK_LINE(258)
														_position->listen_z(_z);
													}
													HX_STACK_LINE(258)
													_position->z;
												}
											}
										}
										HX_STACK_LINE(258)
										if (((_scale == null()))){
											HX_STACK_LINE(258)
											::phoenix::Vector _g11 = ::phoenix::Vector_obj::__new(_ax_length,_ay_length,_az_length,null());		HX_STACK_VAR(_g11,"_g11");
											HX_STACK_LINE(258)
											_scale = _g11;
										}
										else{
											HX_STACK_LINE(258)
											{
												HX_STACK_LINE(258)
												_scale->x = _ax_length;
												HX_STACK_LINE(258)
												if ((_scale->_construct)){
													HX_STACK_LINE(258)
													_scale->x;
												}
												else{
													HX_STACK_LINE(258)
													if (((bool((_scale->listen_x != null())) && bool(!(_scale->ignore_listeners))))){
														HX_STACK_LINE(258)
														_scale->listen_x(_ax_length);
													}
													HX_STACK_LINE(258)
													_scale->x;
												}
											}
											HX_STACK_LINE(258)
											{
												HX_STACK_LINE(258)
												_scale->y = _ay_length;
												HX_STACK_LINE(258)
												if ((_scale->_construct)){
													HX_STACK_LINE(258)
													_scale->y;
												}
												else{
													HX_STACK_LINE(258)
													if (((bool((_scale->listen_y != null())) && bool(!(_scale->ignore_listeners))))){
														HX_STACK_LINE(258)
														_scale->listen_y(_ay_length);
													}
													HX_STACK_LINE(258)
													_scale->y;
												}
											}
											HX_STACK_LINE(258)
											{
												HX_STACK_LINE(258)
												_scale->z = _az_length;
												HX_STACK_LINE(258)
												if ((_scale->_construct)){
													HX_STACK_LINE(258)
													_scale->z;
												}
												else{
													HX_STACK_LINE(258)
													if (((bool((_scale->listen_z != null())) && bool(!(_scale->ignore_listeners))))){
														HX_STACK_LINE(258)
														_scale->listen_z(_az_length);
													}
													HX_STACK_LINE(258)
													_scale->z;
												}
											}
										}
										HX_STACK_LINE(258)
										Array< Float > _g12 = _this3->elements->concat(Array_obj< Float >::__new());		HX_STACK_VAR(_g12,"_g12");
										HX_STACK_LINE(258)
										matrix->elements = _g12;
										HX_STACK_LINE(258)
										Array< Float > me = matrix->elements;		HX_STACK_VAR(me,"me");
										HX_STACK_LINE(258)
										hx::DivEq(me[(int)0],_ax_length);
										HX_STACK_LINE(258)
										hx::DivEq(me[(int)1],_ax_length);
										HX_STACK_LINE(258)
										hx::DivEq(me[(int)2],_ax_length);
										HX_STACK_LINE(258)
										hx::DivEq(me[(int)4],_ay_length);
										HX_STACK_LINE(258)
										hx::DivEq(me[(int)5],_ay_length);
										HX_STACK_LINE(258)
										hx::DivEq(me[(int)6],_ay_length);
										HX_STACK_LINE(258)
										hx::DivEq(me[(int)8],_az_length);
										HX_STACK_LINE(258)
										hx::DivEq(me[(int)9],_az_length);
										HX_STACK_LINE(258)
										hx::DivEq(me[(int)10],_az_length);
										HX_STACK_LINE(258)
										_quaternion->setFromRotationMatrix(matrix);
										HX_STACK_LINE(258)
										if (((_this3->_transform == null()))){
											HX_STACK_LINE(258)
											::phoenix::MatrixTransform _g13 = ::phoenix::MatrixTransform_obj::__new(_position,_quaternion,_scale);		HX_STACK_VAR(_g13,"_g13");
											HX_STACK_LINE(258)
											_this3->_transform = _g13;
										}
										else{
											HX_STACK_LINE(258)
											_this3->_transform->pos = _position;
											HX_STACK_LINE(258)
											_this3->_transform->rotation = _quaternion;
											HX_STACK_LINE(258)
											_this3->_transform->scale = _scale;
										}
										HX_STACK_LINE(258)
										_transform = _this3->_transform;
									}
									HX_STACK_LINE(258)
									{
										HX_STACK_LINE(258)
										::phoenix::Vector _p = _transform->pos;		HX_STACK_VAR(_p,"_p");
										HX_STACK_LINE(258)
										_this2->pos = _p;
										HX_STACK_LINE(258)
										if (((_p != null()))){
											HX_STACK_LINE(258)
											::phoenix::Vector_obj::Listen(_this2->pos,_this2->_pos_change_dyn());
											HX_STACK_LINE(258)
											if (((bool((_this2->pos_changed != null())) && bool(!(_this2->ignore_listeners))))){
												HX_STACK_LINE(258)
												_this2->pos_changed(_this2->pos);
											}
										}
										HX_STACK_LINE(258)
										_this2->pos;
									}
									HX_STACK_LINE(258)
									{
										HX_STACK_LINE(258)
										::phoenix::Quaternion _r = _transform->rotation;		HX_STACK_VAR(_r,"_r");
										HX_STACK_LINE(258)
										_this2->rotation = _r;
										HX_STACK_LINE(258)
										if (((_r != null()))){
											HX_STACK_LINE(258)
											{
												HX_STACK_LINE(258)
												::phoenix::Quaternion _q = _this2->rotation;		HX_STACK_VAR(_q,"_q");
												HX_STACK_LINE(258)
												Dynamic listener = _this2->_rotation_change_dyn();		HX_STACK_VAR(listener,"listener");
												HX_STACK_LINE(258)
												_q->listen_x = listener;
												HX_STACK_LINE(258)
												_q->listen_y = listener;
												HX_STACK_LINE(258)
												_q->listen_z = listener;
												HX_STACK_LINE(258)
												_q->listen_w = listener;
											}
											HX_STACK_LINE(258)
											if (((bool((_this2->rotation_changed != null())) && bool(!(_this2->ignore_listeners))))){
												HX_STACK_LINE(258)
												_this2->rotation_changed(_this2->rotation);
											}
										}
										HX_STACK_LINE(258)
										_this2->rotation;
									}
									HX_STACK_LINE(258)
									{
										HX_STACK_LINE(258)
										::phoenix::Vector _s = _transform->scale;		HX_STACK_VAR(_s,"_s");
										HX_STACK_LINE(258)
										_this2->scale = _s;
										HX_STACK_LINE(258)
										if (((_s != null()))){
											HX_STACK_LINE(258)
											::phoenix::Vector_obj::Listen(_this2->scale,_this2->_scale_change_dyn());
											HX_STACK_LINE(258)
											if (((bool((_this2->scale_changed != null())) && bool(!(_this2->ignore_listeners))))){
												HX_STACK_LINE(258)
												_this2->scale_changed(_this2->scale);
											}
										}
										HX_STACK_LINE(258)
										_this2->scale;
									}
								}
								HX_STACK_LINE(258)
								_this2;
							}
							HX_STACK_LINE(258)
							{
								HX_STACK_LINE(258)
								_this1->dirty = false;
								HX_STACK_LINE(258)
								if (((bool((bool((bool(_this1->dirty) && bool(!(_this1->_setup)))) && bool((_this1->_dirty_handlers != null())))) && bool((_this1->_dirty_handlers->__Field(HX_CSTRING("length"),true) > (int)0))))){
									HX_STACK_LINE(258)
									int _g = (int)0;		HX_STACK_VAR(_g,"_g");
									HX_STACK_LINE(258)
									Dynamic _g1 = _this1->_dirty_handlers;		HX_STACK_VAR(_g1,"_g1");
									HX_STACK_LINE(258)
									while((true)){
										HX_STACK_LINE(258)
										if ((!(((_g < _g1->__Field(HX_CSTRING("length"),true)))))){
											HX_STACK_LINE(258)
											break;
										}
										HX_STACK_LINE(258)
										Dynamic _handler = _g1->__GetItem(_g);		HX_STACK_VAR(_handler,"_handler");
										HX_STACK_LINE(258)
										++(_g);
										HX_STACK_LINE(258)
										if (((_handler != null()))){
											HX_STACK_LINE(258)
											_handler(_this1).Cast< Void >();
										}
									}
								}
								HX_STACK_LINE(258)
								_this1->dirty;
							}
							HX_STACK_LINE(258)
							_this1->_cleaning = false;
							HX_STACK_LINE(258)
							if (((bool((_this1->_clean_handlers != null())) && bool((_this1->_clean_handlers->__Field(HX_CSTRING("length"),true) > (int)0))))){
								HX_STACK_LINE(258)
								int _g = (int)0;		HX_STACK_VAR(_g,"_g");
								HX_STACK_LINE(258)
								Dynamic _g1 = _this1->_clean_handlers;		HX_STACK_VAR(_g1,"_g1");
								HX_STACK_LINE(258)
								while((true)){
									HX_STACK_LINE(258)
									if ((!(((_g < _g1->__Field(HX_CSTRING("length"),true)))))){
										HX_STACK_LINE(258)
										break;
									}
									HX_STACK_LINE(258)
									Dynamic _handler = _g1->__GetItem(_g);		HX_STACK_VAR(_handler,"_handler");
									HX_STACK_LINE(258)
									++(_g);
									HX_STACK_LINE(258)
									if (((_handler != null()))){
										HX_STACK_LINE(258)
										_handler(_this1).Cast< Void >();
									}
								}
							}
						}
					}
				}
				HX_STACK_LINE(258)
				_this = _this1->world;
			}
			HX_STACK_LINE(258)
			_g14 = _this->matrix;
		}
		HX_STACK_LINE(258)
		this->view_matrix = _g14;
		HX_STACK_LINE(260)
		if ((!(this->transform_dirty))){
			HX_STACK_LINE(261)
			return null();
		}
		HX_STACK_LINE(264)
		::phoenix::Matrix _g15;		HX_STACK_VAR(_g15,"_g15");
		HX_STACK_LINE(264)
		{
			HX_STACK_LINE(264)
			::phoenix::Matrix _this = this->view_matrix;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(264)
			{
				HX_STACK_LINE(264)
				::phoenix::Matrix _this1;		HX_STACK_VAR(_this1,"_this1");
				HX_STACK_LINE(264)
				{
					HX_STACK_LINE(264)
					Array< Float > te = _this->elements;		HX_STACK_VAR(te,"te");
					HX_STACK_LINE(264)
					_this1 = ::phoenix::Matrix_obj::__new(te->__get((int)0),te->__get((int)4),te->__get((int)8),te->__get((int)12),te->__get((int)1),te->__get((int)5),te->__get((int)9),te->__get((int)13),te->__get((int)2),te->__get((int)6),te->__get((int)10),te->__get((int)14),te->__get((int)3),te->__get((int)7),te->__get((int)11),te->__get((int)15));
				}
				HX_STACK_LINE(264)
				Array< Float > te = _this1->elements;		HX_STACK_VAR(te,"te");
				HX_STACK_LINE(264)
				Array< Float > me = _this->elements;		HX_STACK_VAR(me,"me");
				HX_STACK_LINE(264)
				Float n11 = me->__get((int)0);		HX_STACK_VAR(n11,"n11");
				HX_STACK_LINE(264)
				Float n12 = me->__get((int)4);		HX_STACK_VAR(n12,"n12");
				HX_STACK_LINE(264)
				Float n13 = me->__get((int)8);		HX_STACK_VAR(n13,"n13");
				HX_STACK_LINE(264)
				Float n14 = me->__get((int)12);		HX_STACK_VAR(n14,"n14");
				HX_STACK_LINE(264)
				Float n21 = me->__get((int)1);		HX_STACK_VAR(n21,"n21");
				HX_STACK_LINE(264)
				Float n22 = me->__get((int)5);		HX_STACK_VAR(n22,"n22");
				HX_STACK_LINE(264)
				Float n23 = me->__get((int)9);		HX_STACK_VAR(n23,"n23");
				HX_STACK_LINE(264)
				Float n24 = me->__get((int)13);		HX_STACK_VAR(n24,"n24");
				HX_STACK_LINE(264)
				Float n31 = me->__get((int)2);		HX_STACK_VAR(n31,"n31");
				HX_STACK_LINE(264)
				Float n32 = me->__get((int)6);		HX_STACK_VAR(n32,"n32");
				HX_STACK_LINE(264)
				Float n33 = me->__get((int)10);		HX_STACK_VAR(n33,"n33");
				HX_STACK_LINE(264)
				Float n34 = me->__get((int)14);		HX_STACK_VAR(n34,"n34");
				HX_STACK_LINE(264)
				Float n41 = me->__get((int)3);		HX_STACK_VAR(n41,"n41");
				HX_STACK_LINE(264)
				Float n42 = me->__get((int)7);		HX_STACK_VAR(n42,"n42");
				HX_STACK_LINE(264)
				Float n43 = me->__get((int)11);		HX_STACK_VAR(n43,"n43");
				HX_STACK_LINE(264)
				Float n44 = me->__get((int)15);		HX_STACK_VAR(n44,"n44");
				HX_STACK_LINE(264)
				te[(int)0] = (((((((n23 * n34) * n42) - ((n24 * n33) * n42)) + ((n24 * n32) * n43)) - ((n22 * n34) * n43)) - ((n23 * n32) * n44)) + ((n22 * n33) * n44));
				HX_STACK_LINE(264)
				te[(int)4] = (((((((n14 * n33) * n42) - ((n13 * n34) * n42)) - ((n14 * n32) * n43)) + ((n12 * n34) * n43)) + ((n13 * n32) * n44)) - ((n12 * n33) * n44));
				HX_STACK_LINE(264)
				te[(int)8] = (((((((n13 * n24) * n42) - ((n14 * n23) * n42)) + ((n14 * n22) * n43)) - ((n12 * n24) * n43)) - ((n13 * n22) * n44)) + ((n12 * n23) * n44));
				HX_STACK_LINE(264)
				te[(int)12] = (((((((n14 * n23) * n32) - ((n13 * n24) * n32)) - ((n14 * n22) * n33)) + ((n12 * n24) * n33)) + ((n13 * n22) * n34)) - ((n12 * n23) * n34));
				HX_STACK_LINE(264)
				te[(int)1] = (((((((n24 * n33) * n41) - ((n23 * n34) * n41)) - ((n24 * n31) * n43)) + ((n21 * n34) * n43)) + ((n23 * n31) * n44)) - ((n21 * n33) * n44));
				HX_STACK_LINE(264)
				te[(int)5] = (((((((n13 * n34) * n41) - ((n14 * n33) * n41)) + ((n14 * n31) * n43)) - ((n11 * n34) * n43)) - ((n13 * n31) * n44)) + ((n11 * n33) * n44));
				HX_STACK_LINE(264)
				te[(int)9] = (((((((n14 * n23) * n41) - ((n13 * n24) * n41)) - ((n14 * n21) * n43)) + ((n11 * n24) * n43)) + ((n13 * n21) * n44)) - ((n11 * n23) * n44));
				HX_STACK_LINE(264)
				te[(int)13] = (((((((n13 * n24) * n31) - ((n14 * n23) * n31)) + ((n14 * n21) * n33)) - ((n11 * n24) * n33)) - ((n13 * n21) * n34)) + ((n11 * n23) * n34));
				HX_STACK_LINE(264)
				te[(int)2] = (((((((n22 * n34) * n41) - ((n24 * n32) * n41)) + ((n24 * n31) * n42)) - ((n21 * n34) * n42)) - ((n22 * n31) * n44)) + ((n21 * n32) * n44));
				HX_STACK_LINE(264)
				te[(int)6] = (((((((n14 * n32) * n41) - ((n12 * n34) * n41)) - ((n14 * n31) * n42)) + ((n11 * n34) * n42)) + ((n12 * n31) * n44)) - ((n11 * n32) * n44));
				HX_STACK_LINE(264)
				te[(int)10] = (((((((n12 * n24) * n41) - ((n14 * n22) * n41)) + ((n14 * n21) * n42)) - ((n11 * n24) * n42)) - ((n12 * n21) * n44)) + ((n11 * n22) * n44));
				HX_STACK_LINE(264)
				te[(int)14] = (((((((n14 * n22) * n31) - ((n12 * n24) * n31)) - ((n14 * n21) * n32)) + ((n11 * n24) * n32)) + ((n12 * n21) * n34)) - ((n11 * n22) * n34));
				HX_STACK_LINE(264)
				te[(int)3] = (((((((n23 * n32) * n41) - ((n22 * n33) * n41)) - ((n23 * n31) * n42)) + ((n21 * n33) * n42)) + ((n22 * n31) * n43)) - ((n21 * n32) * n43));
				HX_STACK_LINE(264)
				te[(int)7] = (((((((n12 * n33) * n41) - ((n13 * n32) * n41)) + ((n13 * n31) * n42)) - ((n11 * n33) * n42)) - ((n12 * n31) * n43)) + ((n11 * n32) * n43));
				HX_STACK_LINE(264)
				te[(int)11] = (((((((n13 * n22) * n41) - ((n12 * n23) * n41)) - ((n13 * n21) * n42)) + ((n11 * n23) * n42)) + ((n12 * n21) * n43)) - ((n11 * n22) * n43));
				HX_STACK_LINE(264)
				te[(int)15] = (((((((n12 * n23) * n31) - ((n13 * n22) * n31)) + ((n13 * n21) * n32)) - ((n11 * n23) * n32)) - ((n12 * n21) * n33)) + ((n11 * n22) * n33));
				HX_STACK_LINE(264)
				Float det = ((((me->__get((int)0) * te->__get((int)0)) + (me->__get((int)1) * te->__get((int)4))) + (me->__get((int)2) * te->__get((int)8))) + (me->__get((int)3) * te->__get((int)12)));		HX_STACK_VAR(det,"det");
				HX_STACK_LINE(264)
				if (((det == (int)0))){
					HX_STACK_LINE(264)
					::haxe::Log_obj::trace(HX_CSTRING("Matrix.getInverse: cant invert matrix, determinant is 0"),hx::SourceInfo(HX_CSTRING("Matrix.hx"),699,HX_CSTRING("phoenix.Matrix"),HX_CSTRING("getInverse")));
					HX_STACK_LINE(264)
					{
						HX_STACK_LINE(264)
						{
							HX_STACK_LINE(264)
							Array< Float > e = _this1->elements;		HX_STACK_VAR(e,"e");
							HX_STACK_LINE(264)
							e[(int)0] = (int)1;
							HX_STACK_LINE(264)
							e[(int)4] = (int)0;
							HX_STACK_LINE(264)
							e[(int)8] = (int)0;
							HX_STACK_LINE(264)
							e[(int)12] = (int)0;
							HX_STACK_LINE(264)
							e[(int)1] = (int)0;
							HX_STACK_LINE(264)
							e[(int)5] = (int)1;
							HX_STACK_LINE(264)
							e[(int)9] = (int)0;
							HX_STACK_LINE(264)
							e[(int)13] = (int)0;
							HX_STACK_LINE(264)
							e[(int)2] = (int)0;
							HX_STACK_LINE(264)
							e[(int)6] = (int)0;
							HX_STACK_LINE(264)
							e[(int)10] = (int)1;
							HX_STACK_LINE(264)
							e[(int)14] = (int)0;
							HX_STACK_LINE(264)
							e[(int)3] = (int)0;
							HX_STACK_LINE(264)
							e[(int)7] = (int)0;
							HX_STACK_LINE(264)
							e[(int)11] = (int)0;
							HX_STACK_LINE(264)
							e[(int)15] = (int)1;
							HX_STACK_LINE(264)
							_this1;
						}
						HX_STACK_LINE(264)
						_this1;
					}
					HX_STACK_LINE(264)
					_g15 = _this1;
				}
				else{
					HX_STACK_LINE(264)
					{
						HX_STACK_LINE(264)
						Float _s = (Float((int)1) / Float(det));		HX_STACK_VAR(_s,"_s");
						HX_STACK_LINE(264)
						Array< Float > te1 = _this1->elements;		HX_STACK_VAR(te1,"te1");
						HX_STACK_LINE(264)
						hx::MultEq(te1[(int)0],_s);
						HX_STACK_LINE(264)
						hx::MultEq(te1[(int)4],_s);
						HX_STACK_LINE(264)
						hx::MultEq(te1[(int)8],_s);
						HX_STACK_LINE(264)
						hx::MultEq(te1[(int)12],_s);
						HX_STACK_LINE(264)
						hx::MultEq(te1[(int)1],_s);
						HX_STACK_LINE(264)
						hx::MultEq(te1[(int)5],_s);
						HX_STACK_LINE(264)
						hx::MultEq(te1[(int)9],_s);
						HX_STACK_LINE(264)
						hx::MultEq(te1[(int)13],_s);
						HX_STACK_LINE(264)
						hx::MultEq(te1[(int)2],_s);
						HX_STACK_LINE(264)
						hx::MultEq(te1[(int)6],_s);
						HX_STACK_LINE(264)
						hx::MultEq(te1[(int)10],_s);
						HX_STACK_LINE(264)
						hx::MultEq(te1[(int)14],_s);
						HX_STACK_LINE(264)
						hx::MultEq(te1[(int)3],_s);
						HX_STACK_LINE(264)
						hx::MultEq(te1[(int)7],_s);
						HX_STACK_LINE(264)
						hx::MultEq(te1[(int)11],_s);
						HX_STACK_LINE(264)
						hx::MultEq(te1[(int)15],_s);
						HX_STACK_LINE(264)
						_this1;
					}
					HX_STACK_LINE(264)
					_g15 = _this1;
				}
			}
		}
		HX_STACK_LINE(264)
		this->view_matrix_inverse = _g15;
		HX_STACK_LINE(265)
		::snow::platform::native::utils::Float32Array _g16;		HX_STACK_VAR(_g16,"_g16");
		HX_STACK_LINE(265)
		{
			HX_STACK_LINE(265)
			::phoenix::Matrix _this = this->view_matrix_inverse;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(265)
			{
				HX_STACK_LINE(265)
				::snow::platform::native::utils::Float32Array _this1 = _this->_float32array;		HX_STACK_VAR(_this1,"_this1");
				HX_STACK_LINE(265)
				Dynamic bufferOrArray = _this->elements;		HX_STACK_VAR(bufferOrArray,"bufferOrArray");
				HX_STACK_LINE(265)
				int offset = (int)0;		HX_STACK_VAR(offset,"offset");
				HX_STACK_LINE(265)
				if ((::Std_obj::is(bufferOrArray,hx::ClassOf< Array<int> >()))){
					HX_STACK_LINE(265)
					Array< Float > floats = bufferOrArray;		HX_STACK_VAR(floats,"floats");
					HX_STACK_LINE(265)
					{
						HX_STACK_LINE(265)
						int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(265)
						int _g = floats->length;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(265)
						while((true)){
							HX_STACK_LINE(265)
							if ((!(((_g1 < _g))))){
								HX_STACK_LINE(265)
								break;
							}
							HX_STACK_LINE(265)
							int i = (_g1)++;		HX_STACK_VAR(i,"i");
							HX_STACK_LINE(265)
							::__hxcpp_memory_set_float(_this1->bytes,(((int((i + offset)) << int((int)2))) + _this1->byteOffset),floats->__get(i));
						}
					}
				}
				else{
					HX_STACK_LINE(265)
					if ((::Std_obj::is(bufferOrArray,hx::ClassOf< ::snow::platform::native::utils::Float32Array >()))){
						HX_STACK_LINE(265)
						::snow::platform::native::utils::Float32Array floats = bufferOrArray;		HX_STACK_VAR(floats,"floats");
						HX_STACK_LINE(265)
						{
							HX_STACK_LINE(265)
							int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
							HX_STACK_LINE(265)
							int _g = floats->length;		HX_STACK_VAR(_g,"_g");
							HX_STACK_LINE(265)
							while((true)){
								HX_STACK_LINE(265)
								if ((!(((_g1 < _g))))){
									HX_STACK_LINE(265)
									break;
								}
								HX_STACK_LINE(265)
								int i = (_g1)++;		HX_STACK_VAR(i,"i");
								HX_STACK_LINE(265)
								::__hxcpp_memory_set_float(_this1->bytes,(((int((i + offset)) << int((int)2))) + _this1->byteOffset),floats->__get(i));
							}
						}
					}
					else{
						HX_STACK_LINE(265)
						HX_STACK_DO_THROW(HX_CSTRING("Invalid input buffer"));
					}
				}
			}
			HX_STACK_LINE(265)
			_g16 = ::snow::platform::native::utils::Float32Array_obj::__new(_this->_float32array,null(),null());
		}
		HX_STACK_LINE(265)
		this->view_inverse_float32array = _g16;
		HX_STACK_LINE(267)
		this->transform_dirty = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Camera_obj,update_view_matrix,(void))

Void Camera_obj::update_projection_matrix( ){
{
		HX_STACK_FRAME("phoenix.Camera","update_projection_matrix",0x7401e825,"phoenix.Camera.update_projection_matrix","phoenix/Camera.hx",271,0x1fcabb59)
		HX_STACK_THIS(this)
		HX_STACK_LINE(273)
		if ((!(this->projection_dirty))){
			HX_STACK_LINE(274)
			return null();
		}
		HX_STACK_LINE(277)
		{
			HX_STACK_LINE(277)
			::phoenix::ProjectionType _g = this->projection;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(277)
			switch( (int)(_g->__Index())){
				case (int)1: {
					HX_STACK_LINE(280)
					::phoenix::Matrix _this = this->projection_matrix;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(280)
					Float _aspect = this->aspect;		HX_STACK_VAR(_aspect,"_aspect");
					HX_STACK_LINE(280)
					Float _near = this->near;		HX_STACK_VAR(_near,"_near");
					HX_STACK_LINE(280)
					Float _far = this->far;		HX_STACK_VAR(_far,"_far");
					HX_STACK_LINE(280)
					Float _g1 = ::Math_obj::tan(((this->fov_y * 0.5) * 0.017453292519943278));		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(280)
					Float ymax = (_near * _g1);		HX_STACK_VAR(ymax,"ymax");
					HX_STACK_LINE(280)
					Float ymin = -(ymax);		HX_STACK_VAR(ymin,"ymin");
					HX_STACK_LINE(280)
					Float xmin = (ymin * _aspect);		HX_STACK_VAR(xmin,"xmin");
					HX_STACK_LINE(280)
					Float xmax = (ymax * _aspect);		HX_STACK_VAR(xmax,"xmax");
					HX_STACK_LINE(280)
					{
						HX_STACK_LINE(280)
						Array< Float > te = _this->elements;		HX_STACK_VAR(te,"te");
						HX_STACK_LINE(280)
						Float tx = (Float(((int)2 * _near)) / Float(((xmax - xmin))));		HX_STACK_VAR(tx,"tx");
						HX_STACK_LINE(280)
						Float ty = (Float(((int)2 * _near)) / Float(((ymax - ymin))));		HX_STACK_VAR(ty,"ty");
						HX_STACK_LINE(280)
						Float a = (Float(((xmax + xmin))) / Float(((xmax - xmin))));		HX_STACK_VAR(a,"a");
						HX_STACK_LINE(280)
						Float b = (Float(((ymax + ymin))) / Float(((ymax - ymin))));		HX_STACK_VAR(b,"b");
						HX_STACK_LINE(280)
						Float c = (Float(-(((_far + _near)))) / Float(((_far - _near))));		HX_STACK_VAR(c,"c");
						HX_STACK_LINE(280)
						Float d = (Float((((int)-2 * _far) * _near)) / Float(((_far - _near))));		HX_STACK_VAR(d,"d");
						HX_STACK_LINE(280)
						te[(int)0] = tx;
						HX_STACK_LINE(280)
						te[(int)4] = (int)0;
						HX_STACK_LINE(280)
						te[(int)8] = a;
						HX_STACK_LINE(280)
						te[(int)12] = (int)0;
						HX_STACK_LINE(280)
						te[(int)1] = (int)0;
						HX_STACK_LINE(280)
						te[(int)5] = ty;
						HX_STACK_LINE(280)
						te[(int)9] = b;
						HX_STACK_LINE(280)
						te[(int)13] = (int)0;
						HX_STACK_LINE(280)
						te[(int)2] = (int)0;
						HX_STACK_LINE(280)
						te[(int)6] = (int)0;
						HX_STACK_LINE(280)
						te[(int)10] = c;
						HX_STACK_LINE(280)
						te[(int)14] = d;
						HX_STACK_LINE(280)
						te[(int)3] = (int)0;
						HX_STACK_LINE(280)
						te[(int)7] = (int)0;
						HX_STACK_LINE(280)
						te[(int)11] = (int)-1;
						HX_STACK_LINE(280)
						te[(int)15] = (int)0;
						HX_STACK_LINE(280)
						_this;
					}
				}
				;break;
				case (int)0: {
					HX_STACK_LINE(282)
					::phoenix::Matrix _this = this->projection_matrix;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(282)
					Float _right = this->get_viewport()->w;		HX_STACK_VAR(_right,"_right");
					HX_STACK_LINE(282)
					Float _bottom = this->get_viewport()->h;		HX_STACK_VAR(_bottom,"_bottom");
					HX_STACK_LINE(282)
					Float _near = this->near;		HX_STACK_VAR(_near,"_near");
					HX_STACK_LINE(282)
					Float _far = this->far;		HX_STACK_VAR(_far,"_far");
					HX_STACK_LINE(282)
					Array< Float > te = _this->elements;		HX_STACK_VAR(te,"te");
					HX_STACK_LINE(282)
					Float w = _right;		HX_STACK_VAR(w,"w");
					HX_STACK_LINE(282)
					Float h = ((int)0 - _bottom);		HX_STACK_VAR(h,"h");
					HX_STACK_LINE(282)
					Float p = (_far - _near);		HX_STACK_VAR(p,"p");
					HX_STACK_LINE(282)
					Float tx = (Float(_right) / Float(w));		HX_STACK_VAR(tx,"tx");
					HX_STACK_LINE(282)
					Float ty = (Float(_bottom) / Float(h));		HX_STACK_VAR(ty,"ty");
					HX_STACK_LINE(282)
					Float tz = (Float(((_far + _near))) / Float(p));		HX_STACK_VAR(tz,"tz");
					HX_STACK_LINE(282)
					te[(int)0] = (Float((int)2) / Float(w));
					HX_STACK_LINE(282)
					te[(int)4] = (int)0;
					HX_STACK_LINE(282)
					te[(int)8] = (int)0;
					HX_STACK_LINE(282)
					te[(int)12] = -(tx);
					HX_STACK_LINE(282)
					te[(int)1] = (int)0;
					HX_STACK_LINE(282)
					te[(int)5] = (Float((int)2) / Float(h));
					HX_STACK_LINE(282)
					te[(int)9] = (int)0;
					HX_STACK_LINE(282)
					te[(int)13] = -(ty);
					HX_STACK_LINE(282)
					te[(int)2] = (int)0;
					HX_STACK_LINE(282)
					te[(int)6] = (int)0;
					HX_STACK_LINE(282)
					te[(int)10] = (Float((int)-2) / Float(p));
					HX_STACK_LINE(282)
					te[(int)14] = -(tz);
					HX_STACK_LINE(282)
					te[(int)3] = (int)0;
					HX_STACK_LINE(282)
					te[(int)7] = (int)0;
					HX_STACK_LINE(282)
					te[(int)11] = (int)0;
					HX_STACK_LINE(282)
					te[(int)15] = (int)1;
					HX_STACK_LINE(282)
					_this;
				}
				;break;
				case (int)2: {
				}
				;break;
			}
		}
		HX_STACK_LINE(287)
		::snow::platform::native::utils::Float32Array _g1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(287)
		{
			HX_STACK_LINE(287)
			::phoenix::Matrix _this = this->projection_matrix;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(287)
			{
				HX_STACK_LINE(287)
				::snow::platform::native::utils::Float32Array _this1 = _this->_float32array;		HX_STACK_VAR(_this1,"_this1");
				HX_STACK_LINE(287)
				Dynamic bufferOrArray = _this->elements;		HX_STACK_VAR(bufferOrArray,"bufferOrArray");
				HX_STACK_LINE(287)
				int offset = (int)0;		HX_STACK_VAR(offset,"offset");
				HX_STACK_LINE(287)
				if ((::Std_obj::is(bufferOrArray,hx::ClassOf< Array<int> >()))){
					HX_STACK_LINE(287)
					Array< Float > floats = bufferOrArray;		HX_STACK_VAR(floats,"floats");
					HX_STACK_LINE(287)
					{
						HX_STACK_LINE(287)
						int _g11 = (int)0;		HX_STACK_VAR(_g11,"_g11");
						HX_STACK_LINE(287)
						int _g = floats->length;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(287)
						while((true)){
							HX_STACK_LINE(287)
							if ((!(((_g11 < _g))))){
								HX_STACK_LINE(287)
								break;
							}
							HX_STACK_LINE(287)
							int i = (_g11)++;		HX_STACK_VAR(i,"i");
							HX_STACK_LINE(287)
							::__hxcpp_memory_set_float(_this1->bytes,(((int((i + offset)) << int((int)2))) + _this1->byteOffset),floats->__get(i));
						}
					}
				}
				else{
					HX_STACK_LINE(287)
					if ((::Std_obj::is(bufferOrArray,hx::ClassOf< ::snow::platform::native::utils::Float32Array >()))){
						HX_STACK_LINE(287)
						::snow::platform::native::utils::Float32Array floats = bufferOrArray;		HX_STACK_VAR(floats,"floats");
						HX_STACK_LINE(287)
						{
							HX_STACK_LINE(287)
							int _g11 = (int)0;		HX_STACK_VAR(_g11,"_g11");
							HX_STACK_LINE(287)
							int _g = floats->length;		HX_STACK_VAR(_g,"_g");
							HX_STACK_LINE(287)
							while((true)){
								HX_STACK_LINE(287)
								if ((!(((_g11 < _g))))){
									HX_STACK_LINE(287)
									break;
								}
								HX_STACK_LINE(287)
								int i = (_g11)++;		HX_STACK_VAR(i,"i");
								HX_STACK_LINE(287)
								::__hxcpp_memory_set_float(_this1->bytes,(((int((i + offset)) << int((int)2))) + _this1->byteOffset),floats->__get(i));
							}
						}
					}
					else{
						HX_STACK_LINE(287)
						HX_STACK_DO_THROW(HX_CSTRING("Invalid input buffer"));
					}
				}
			}
			HX_STACK_LINE(287)
			_g1 = ::snow::platform::native::utils::Float32Array_obj::__new(_this->_float32array,null(),null());
		}
		HX_STACK_LINE(287)
		this->projection_float32array = _g1;
		HX_STACK_LINE(289)
		this->projection_dirty = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Camera_obj,update_projection_matrix,(void))

Void Camera_obj::apply_state( int state,bool value){
{
		HX_STACK_FRAME("phoenix.Camera","apply_state",0xdb71c396,"phoenix.Camera.apply_state","phoenix/Camera.hx",299,0x1fcabb59)
		HX_STACK_THIS(this)
		HX_STACK_ARG(state,"state")
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(299)
		if ((value)){
			HX_STACK_LINE(300)
			::Luxe_obj::renderer->state->enable(state);
		}
		else{
			HX_STACK_LINE(302)
			::Luxe_obj::renderer->state->disable(state);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Camera_obj,apply_state,(void))

Void Camera_obj::apply_default_camera_options( ){
{
		HX_STACK_FRAME("phoenix.Camera","apply_default_camera_options",0xf72e1e5d,"phoenix.Camera.apply_default_camera_options","phoenix/Camera.hx",309,0x1fcabb59)
		HX_STACK_THIS(this)
		HX_STACK_LINE(309)
		::phoenix::ProjectionType _g = this->projection;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(309)
		switch( (int)(_g->__Index())){
			case (int)0: {
				HX_STACK_LINE(313)
				this->options->__FieldRef(HX_CSTRING("cull_backfaces")) = false;
				HX_STACK_LINE(314)
				this->options->__FieldRef(HX_CSTRING("depth_test")) = false;
			}
			;break;
			case (int)1: {
				HX_STACK_LINE(320)
				this->options->__FieldRef(HX_CSTRING("cull_backfaces")) = true;
				HX_STACK_LINE(321)
				this->options->__FieldRef(HX_CSTRING("depth_test")) = true;
			}
			;break;
			case (int)2: {
			}
			;break;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Camera_obj,apply_default_camera_options,(void))

Dynamic Camera_obj::default_camera_options( ){
	HX_STACK_FRAME("phoenix.Camera","default_camera_options",0x036c4aec,"phoenix.Camera.default_camera_options","phoenix/Camera.hx",333,0x1fcabb59)
	HX_STACK_THIS(this)
	struct _Function_1_1{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Camera.hx",333,0x1fcabb59)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("projection") , ::phoenix::ProjectionType_obj::ortho,false);
				__result->Add(HX_CSTRING("depth_test") , false,false);
				__result->Add(HX_CSTRING("cull_backfaces") , false,false);
				__result->Add(HX_CSTRING("near") , (int)1000,false);
				__result->Add(HX_CSTRING("far") , (int)-1000,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(333)
	return _Function_1_1::Block();
}


HX_DEFINE_DYNAMIC_FUNC0(Camera_obj,default_camera_options,return )

::phoenix::Vector Camera_obj::ortho_screen_to_world( ::phoenix::Vector _vector){
	HX_STACK_FRAME("phoenix.Camera","ortho_screen_to_world",0x90978b50,"phoenix.Camera.ortho_screen_to_world","phoenix/Camera.hx",347,0x1fcabb59)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_vector,"_vector")
	HX_STACK_LINE(349)
	this->update_view_matrix();
	HX_STACK_LINE(351)
	::phoenix::Vector _this = ::phoenix::Vector_obj::__new(_vector->x,_vector->y,_vector->z,_vector->w);		HX_STACK_VAR(_this,"_this");
	HX_STACK_LINE(351)
	Float _x = _this->x;		HX_STACK_VAR(_x,"_x");
	HX_STACK_LINE(351)
	Float _y = _this->y;		HX_STACK_VAR(_y,"_y");
	HX_STACK_LINE(351)
	Float _z = _this->z;		HX_STACK_VAR(_z,"_z");
	HX_STACK_LINE(351)
	Array< Float > e = this->view_matrix->elements;		HX_STACK_VAR(e,"e");
	HX_STACK_LINE(351)
	{
		HX_STACK_LINE(351)
		Float _x1 = ((((e->__get((int)0) * _x) + (e->__get((int)4) * _y)) + (e->__get((int)8) * _z)) + e->__get((int)12));		HX_STACK_VAR(_x1,"_x1");
		HX_STACK_LINE(351)
		Float _y1 = ((((e->__get((int)1) * _x) + (e->__get((int)5) * _y)) + (e->__get((int)9) * _z)) + e->__get((int)13));		HX_STACK_VAR(_y1,"_y1");
		HX_STACK_LINE(351)
		Float _z1 = ((((e->__get((int)2) * _x) + (e->__get((int)6) * _y)) + (e->__get((int)10) * _z)) + e->__get((int)14));		HX_STACK_VAR(_z1,"_z1");
		HX_STACK_LINE(351)
		bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
		HX_STACK_LINE(351)
		_this->ignore_listeners = true;
		HX_STACK_LINE(351)
		{
			HX_STACK_LINE(351)
			_this->x = _x1;
			HX_STACK_LINE(351)
			if ((_this->_construct)){
				HX_STACK_LINE(351)
				_this->x;
			}
			else{
				HX_STACK_LINE(351)
				if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
					HX_STACK_LINE(351)
					_this->listen_x(_x1);
				}
				HX_STACK_LINE(351)
				_this->x;
			}
		}
		HX_STACK_LINE(351)
		{
			HX_STACK_LINE(351)
			_this->y = _y1;
			HX_STACK_LINE(351)
			if ((_this->_construct)){
				HX_STACK_LINE(351)
				_this->y;
			}
			else{
				HX_STACK_LINE(351)
				if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
					HX_STACK_LINE(351)
					_this->listen_y(_y1);
				}
				HX_STACK_LINE(351)
				_this->y;
			}
		}
		HX_STACK_LINE(351)
		{
			HX_STACK_LINE(351)
			_this->z = _z1;
			HX_STACK_LINE(351)
			if ((_this->_construct)){
				HX_STACK_LINE(351)
				_this->z;
			}
			else{
				HX_STACK_LINE(351)
				if (((bool((_this->listen_z != null())) && bool(!(_this->ignore_listeners))))){
					HX_STACK_LINE(351)
					_this->listen_z(_z1);
				}
				HX_STACK_LINE(351)
				_this->z;
			}
		}
		HX_STACK_LINE(351)
		_this->ignore_listeners = prev;
		HX_STACK_LINE(351)
		if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
			HX_STACK_LINE(351)
			_this->listen_x(_this->x);
		}
		HX_STACK_LINE(351)
		if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
			HX_STACK_LINE(351)
			_this->listen_y(_this->y);
		}
		HX_STACK_LINE(351)
		if (((bool((_this->listen_z != null())) && bool(!(_this->ignore_listeners))))){
			HX_STACK_LINE(351)
			_this->listen_z(_this->z);
		}
		HX_STACK_LINE(351)
		_this;
	}
	HX_STACK_LINE(351)
	return _this;
}


HX_DEFINE_DYNAMIC_FUNC1(Camera_obj,ortho_screen_to_world,return )

::phoenix::Vector Camera_obj::ortho_world_to_screen( ::phoenix::Vector _vector){
	HX_STACK_FRAME("phoenix.Camera","ortho_world_to_screen",0x1f31d512,"phoenix.Camera.ortho_world_to_screen","phoenix/Camera.hx",355,0x1fcabb59)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_vector,"_vector")
	HX_STACK_LINE(357)
	this->update_view_matrix();
	HX_STACK_LINE(359)
	::phoenix::Vector _this = ::phoenix::Vector_obj::__new(_vector->x,_vector->y,_vector->z,_vector->w);		HX_STACK_VAR(_this,"_this");
	HX_STACK_LINE(359)
	Float _x = _this->x;		HX_STACK_VAR(_x,"_x");
	HX_STACK_LINE(359)
	Float _y = _this->y;		HX_STACK_VAR(_y,"_y");
	HX_STACK_LINE(359)
	Float _z = _this->z;		HX_STACK_VAR(_z,"_z");
	HX_STACK_LINE(359)
	Array< Float > e = this->view_matrix_inverse->elements;		HX_STACK_VAR(e,"e");
	HX_STACK_LINE(359)
	{
		HX_STACK_LINE(359)
		Float _x1 = ((((e->__get((int)0) * _x) + (e->__get((int)4) * _y)) + (e->__get((int)8) * _z)) + e->__get((int)12));		HX_STACK_VAR(_x1,"_x1");
		HX_STACK_LINE(359)
		Float _y1 = ((((e->__get((int)1) * _x) + (e->__get((int)5) * _y)) + (e->__get((int)9) * _z)) + e->__get((int)13));		HX_STACK_VAR(_y1,"_y1");
		HX_STACK_LINE(359)
		Float _z1 = ((((e->__get((int)2) * _x) + (e->__get((int)6) * _y)) + (e->__get((int)10) * _z)) + e->__get((int)14));		HX_STACK_VAR(_z1,"_z1");
		HX_STACK_LINE(359)
		bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
		HX_STACK_LINE(359)
		_this->ignore_listeners = true;
		HX_STACK_LINE(359)
		{
			HX_STACK_LINE(359)
			_this->x = _x1;
			HX_STACK_LINE(359)
			if ((_this->_construct)){
				HX_STACK_LINE(359)
				_this->x;
			}
			else{
				HX_STACK_LINE(359)
				if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
					HX_STACK_LINE(359)
					_this->listen_x(_x1);
				}
				HX_STACK_LINE(359)
				_this->x;
			}
		}
		HX_STACK_LINE(359)
		{
			HX_STACK_LINE(359)
			_this->y = _y1;
			HX_STACK_LINE(359)
			if ((_this->_construct)){
				HX_STACK_LINE(359)
				_this->y;
			}
			else{
				HX_STACK_LINE(359)
				if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
					HX_STACK_LINE(359)
					_this->listen_y(_y1);
				}
				HX_STACK_LINE(359)
				_this->y;
			}
		}
		HX_STACK_LINE(359)
		{
			HX_STACK_LINE(359)
			_this->z = _z1;
			HX_STACK_LINE(359)
			if ((_this->_construct)){
				HX_STACK_LINE(359)
				_this->z;
			}
			else{
				HX_STACK_LINE(359)
				if (((bool((_this->listen_z != null())) && bool(!(_this->ignore_listeners))))){
					HX_STACK_LINE(359)
					_this->listen_z(_z1);
				}
				HX_STACK_LINE(359)
				_this->z;
			}
		}
		HX_STACK_LINE(359)
		_this->ignore_listeners = prev;
		HX_STACK_LINE(359)
		if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
			HX_STACK_LINE(359)
			_this->listen_x(_this->x);
		}
		HX_STACK_LINE(359)
		if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
			HX_STACK_LINE(359)
			_this->listen_y(_this->y);
		}
		HX_STACK_LINE(359)
		if (((bool((_this->listen_z != null())) && bool(!(_this->ignore_listeners))))){
			HX_STACK_LINE(359)
			_this->listen_z(_this->z);
		}
		HX_STACK_LINE(359)
		_this;
	}
	HX_STACK_LINE(359)
	return _this;
}


HX_DEFINE_DYNAMIC_FUNC1(Camera_obj,ortho_world_to_screen,return )

::phoenix::Vector Camera_obj::persepective_world_to_screen( ::phoenix::Vector _vector,::phoenix::Rectangle _viewport){
	HX_STACK_FRAME("phoenix.Camera","persepective_world_to_screen",0x526987d1,"phoenix.Camera.persepective_world_to_screen","phoenix/Camera.hx",363,0x1fcabb59)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_vector,"_vector")
	HX_STACK_ARG(_viewport,"_viewport")
	HX_STACK_LINE(365)
	if (((_viewport == null()))){
		HX_STACK_LINE(365)
		::phoenix::Rectangle _g = this->get_viewport();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(365)
		_viewport = _g;
	}
	HX_STACK_LINE(367)
	::phoenix::Vector _projected = this->project(_vector);		HX_STACK_VAR(_projected,"_projected");
	HX_STACK_LINE(369)
	Float width_half = (Float(_viewport->w) / Float((int)2));		HX_STACK_VAR(width_half,"width_half");
	HX_STACK_LINE(370)
	Float height_half = (Float(_viewport->h) / Float((int)2));		HX_STACK_VAR(height_half,"height_half");
	HX_STACK_LINE(372)
	return ::phoenix::Vector_obj::__new(((_projected->x * width_half) + width_half),(-(((_projected->y * height_half))) + height_half),null(),null());
}


HX_DEFINE_DYNAMIC_FUNC2(Camera_obj,persepective_world_to_screen,return )

::phoenix::Vector Camera_obj::set_target( ::phoenix::Vector _target){
	HX_STACK_FRAME("phoenix.Camera","set_target",0x108f63f8,"phoenix.Camera.set_target","phoenix/Camera.hx",382,0x1fcabb59)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_target,"_target")
	HX_STACK_LINE(384)
	if (((_target != null()))){
		HX_STACK_LINE(385)
		this->look_at_dirty = true;
	}
	HX_STACK_LINE(388)
	return this->target = _target;
}


HX_DEFINE_DYNAMIC_FUNC1(Camera_obj,set_target,return )

Float Camera_obj::set_fov( Float _fov){
	HX_STACK_FRAME("phoenix.Camera","set_fov",0x5b6f7806,"phoenix.Camera.set_fov","phoenix/Camera.hx",392,0x1fcabb59)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_fov,"_fov")
	HX_STACK_LINE(394)
	this->projection_dirty = true;
	HX_STACK_LINE(395)
	this->options->__FieldRef(HX_CSTRING("fov")) = _fov;
	HX_STACK_LINE(397)
	if (((this->fov_type == ::phoenix::FOVType_obj::horizontal))){
		HX_STACK_LINE(398)
		Float _g = ::Math_obj::tan((Float((_fov * ((Float(::Math_obj::PI) / Float((int)180))))) / Float((int)2)));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(398)
		Float _g1 = (_g * ((Float((int)1) / Float(this->aspect))));		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(398)
		Float _g2 = ::Math_obj::atan(_g1);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(398)
		Float _g3 = ((int)2 * _g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(398)
		Float _g4 = ((Float((int)180) / Float(::Math_obj::PI)) * _g3);		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(398)
		this->fov_y = _g4;
	}
	else{
		HX_STACK_LINE(400)
		this->fov_y = _fov;
	}
	HX_STACK_LINE(403)
	return this->fov = _fov;
}


HX_DEFINE_DYNAMIC_FUNC1(Camera_obj,set_fov,return )

::phoenix::FOVType Camera_obj::set_fov_type( ::phoenix::FOVType _fov_type){
	HX_STACK_FRAME("phoenix.Camera","set_fov_type",0x0bbbc0d3,"phoenix.Camera.set_fov_type","phoenix/Camera.hx",407,0x1fcabb59)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_fov_type,"_fov_type")
	HX_STACK_LINE(408)
	this->options->__FieldRef(HX_CSTRING("fov_type")) = _fov_type;
	HX_STACK_LINE(409)
	this->fov_type = _fov_type;
	HX_STACK_LINE(411)
	this->set_fov(this->fov);
	HX_STACK_LINE(412)
	return this->fov_type;
}


HX_DEFINE_DYNAMIC_FUNC1(Camera_obj,set_fov_type,return )

Float Camera_obj::set_aspect( Float _aspect){
	HX_STACK_FRAME("phoenix.Camera","set_aspect",0xd3aa067f,"phoenix.Camera.set_aspect","phoenix/Camera.hx",415,0x1fcabb59)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_aspect,"_aspect")
	HX_STACK_LINE(417)
	this->projection_dirty = true;
	HX_STACK_LINE(418)
	this->options->__FieldRef(HX_CSTRING("aspect")) = _aspect;
	HX_STACK_LINE(420)
	return this->aspect = _aspect;
}


HX_DEFINE_DYNAMIC_FUNC1(Camera_obj,set_aspect,return )

Float Camera_obj::set_near( Float _near){
	HX_STACK_FRAME("phoenix.Camera","set_near",0xab5b99cf,"phoenix.Camera.set_near","phoenix/Camera.hx",424,0x1fcabb59)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_near,"_near")
	HX_STACK_LINE(426)
	this->projection_dirty = true;
	HX_STACK_LINE(427)
	this->options->__FieldRef(HX_CSTRING("near")) = _near;
	HX_STACK_LINE(429)
	return this->near = _near;
}


HX_DEFINE_DYNAMIC_FUNC1(Camera_obj,set_near,return )

Float Camera_obj::set_far( Float _far){
	HX_STACK_FRAME("phoenix.Camera","set_far",0x5b6f6bd0,"phoenix.Camera.set_far","phoenix/Camera.hx",433,0x1fcabb59)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_far,"_far")
	HX_STACK_LINE(435)
	this->projection_dirty = true;
	HX_STACK_LINE(436)
	this->options->__FieldRef(HX_CSTRING("far")) = _far;
	HX_STACK_LINE(438)
	return this->far = _far;
}


HX_DEFINE_DYNAMIC_FUNC1(Camera_obj,set_far,return )

Float Camera_obj::set_zoom( Float _z){
	HX_STACK_FRAME("phoenix.Camera","set_zoom",0xb351cbfa,"phoenix.Camera.set_zoom","phoenix/Camera.hx",444,0x1fcabb59)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_z,"_z")
	HX_STACK_LINE(447)
	Float _new_zoom = _z;		HX_STACK_VAR(_new_zoom,"_new_zoom");
	HX_STACK_LINE(451)
	if (((_new_zoom < this->minimum_zoom))){
		HX_STACK_LINE(452)
		_new_zoom = this->minimum_zoom;
	}
	HX_STACK_LINE(455)
	{
		HX_STACK_LINE(455)
		::phoenix::ProjectionType _g = this->projection;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(455)
		switch( (int)(_g->__Index())){
			case (int)0: {
				HX_STACK_LINE(460)
				{
					HX_STACK_LINE(460)
					::phoenix::Vector _this = this->transform->local->scale;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(460)
					Float _x = (Float((int)1) / Float(_new_zoom));		HX_STACK_VAR(_x,"_x");
					HX_STACK_LINE(460)
					_this->x = _x;
					HX_STACK_LINE(460)
					if ((_this->_construct)){
						HX_STACK_LINE(460)
						_this->x;
					}
					else{
						HX_STACK_LINE(460)
						if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
							HX_STACK_LINE(460)
							_this->listen_x(_x);
						}
						HX_STACK_LINE(460)
						_this->x;
					}
				}
				HX_STACK_LINE(461)
				{
					HX_STACK_LINE(461)
					::phoenix::Vector _this = this->transform->local->scale;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(461)
					Float _y = (Float((int)1) / Float(_new_zoom));		HX_STACK_VAR(_y,"_y");
					HX_STACK_LINE(461)
					_this->y = _y;
					HX_STACK_LINE(461)
					if ((_this->_construct)){
						HX_STACK_LINE(461)
						_this->y;
					}
					else{
						HX_STACK_LINE(461)
						if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
							HX_STACK_LINE(461)
							_this->listen_y(_y);
						}
						HX_STACK_LINE(461)
						_this->y;
					}
				}
				HX_STACK_LINE(462)
				{
					HX_STACK_LINE(462)
					::phoenix::Vector _this = this->transform->local->scale;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(462)
					Float _z1 = (Float((int)1) / Float(_new_zoom));		HX_STACK_VAR(_z1,"_z1");
					HX_STACK_LINE(462)
					_this->z = _z1;
					HX_STACK_LINE(462)
					if ((_this->_construct)){
						HX_STACK_LINE(462)
						_this->z;
					}
					else{
						HX_STACK_LINE(462)
						if (((bool((_this->listen_z != null())) && bool(!(_this->ignore_listeners))))){
							HX_STACK_LINE(462)
							_this->listen_z(_z1);
						}
						HX_STACK_LINE(462)
						_this->z;
					}
				}
			}
			;break;
			case (int)1: {
			}
			;break;
			case (int)2: {
			}
			;break;
		}
	}
	HX_STACK_LINE(475)
	return this->zoom = _new_zoom;
}


HX_DEFINE_DYNAMIC_FUNC1(Camera_obj,set_zoom,return )

::phoenix::Vector Camera_obj::set_center( ::phoenix::Vector _p){
	HX_STACK_FRAME("phoenix.Camera","set_center",0x8f7d967c,"phoenix.Camera.set_center","phoenix/Camera.hx",480,0x1fcabb59)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_p,"_p")
	HX_STACK_LINE(482)
	this->center = _p;
	HX_STACK_LINE(484)
	{
		HX_STACK_LINE(484)
		::phoenix::ProjectionType _g = this->projection;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(484)
		switch( (int)(_g->__Index())){
			case (int)0: {
				HX_STACK_LINE(488)
				if (((bool(!(this->_refresh_pos)) && bool(!(this->_setup))))){
					HX_STACK_LINE(491)
					this->get_pos()->ignore_listeners = true;
					HX_STACK_LINE(492)
					{
						HX_STACK_LINE(492)
						::phoenix::Vector _this = this->get_pos();		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(492)
						Float _x = (_p->x - (Float(this->get_viewport()->w) / Float((int)2)));		HX_STACK_VAR(_x,"_x");
						HX_STACK_LINE(492)
						_this->x = _x;
						HX_STACK_LINE(492)
						if ((_this->_construct)){
							HX_STACK_LINE(492)
							_this->x;
						}
						else{
							HX_STACK_LINE(492)
							if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
								HX_STACK_LINE(492)
								_this->listen_x(_x);
							}
							HX_STACK_LINE(492)
							_this->x;
						}
					}
					HX_STACK_LINE(493)
					{
						HX_STACK_LINE(493)
						::phoenix::Vector _this = this->get_pos();		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(493)
						Float _y = (_p->y - (Float(this->get_viewport()->h) / Float((int)2)));		HX_STACK_VAR(_y,"_y");
						HX_STACK_LINE(493)
						_this->y = _y;
						HX_STACK_LINE(493)
						if ((_this->_construct)){
							HX_STACK_LINE(493)
							_this->y;
						}
						else{
							HX_STACK_LINE(493)
							if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
								HX_STACK_LINE(493)
								_this->listen_y(_y);
							}
							HX_STACK_LINE(493)
							_this->y;
						}
					}
					HX_STACK_LINE(494)
					this->get_pos()->ignore_listeners = false;
				}
			}
			;break;
			case (int)1: {
			}
			;break;
			case (int)2: {
			}
			;break;
		}
	}
	HX_STACK_LINE(504)
	::phoenix::Vector _g = this->get_center();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(504)
	::phoenix::Vector_obj::Listen(_g,this->_center_changed_dyn());
	HX_STACK_LINE(506)
	return this->get_center();
}


HX_DEFINE_DYNAMIC_FUNC1(Camera_obj,set_center,return )

::phoenix::Vector Camera_obj::get_center( ){
	HX_STACK_FRAME("phoenix.Camera","get_center",0x8bfff808,"phoenix.Camera.get_center","phoenix/Camera.hx",511,0x1fcabb59)
	HX_STACK_THIS(this)
	HX_STACK_LINE(511)
	return this->center;
}


HX_DEFINE_DYNAMIC_FUNC0(Camera_obj,get_center,return )

::phoenix::Vector Camera_obj::get_pos( ){
	HX_STACK_FRAME("phoenix.Camera","get_pos",0x68757d81,"phoenix.Camera.get_pos","phoenix/Camera.hx",515,0x1fcabb59)
	HX_STACK_THIS(this)
	HX_STACK_LINE(515)
	return this->pos;
}


HX_DEFINE_DYNAMIC_FUNC0(Camera_obj,get_pos,return )

::phoenix::Quaternion Camera_obj::get_rotation( ){
	HX_STACK_FRAME("phoenix.Camera","get_rotation",0xff2a4231,"phoenix.Camera.get_rotation","phoenix/Camera.hx",519,0x1fcabb59)
	HX_STACK_THIS(this)
	HX_STACK_LINE(519)
	return this->transform->local->rotation;
}


HX_DEFINE_DYNAMIC_FUNC0(Camera_obj,get_rotation,return )

::phoenix::Vector Camera_obj::get_scale( ){
	HX_STACK_FRAME("phoenix.Camera","get_scale",0x412883b7,"phoenix.Camera.get_scale","phoenix/Camera.hx",523,0x1fcabb59)
	HX_STACK_THIS(this)
	HX_STACK_LINE(523)
	return this->transform->local->scale;
}


HX_DEFINE_DYNAMIC_FUNC0(Camera_obj,get_scale,return )

::phoenix::Rectangle Camera_obj::get_viewport( ){
	HX_STACK_FRAME("phoenix.Camera","get_viewport",0x93495159,"phoenix.Camera.get_viewport","phoenix/Camera.hx",527,0x1fcabb59)
	HX_STACK_THIS(this)
	HX_STACK_LINE(527)
	return this->viewport;
}


HX_DEFINE_DYNAMIC_FUNC0(Camera_obj,get_viewport,return )

::phoenix::Rectangle Camera_obj::set_viewport( ::phoenix::Rectangle _r){
	HX_STACK_FRAME("phoenix.Camera","set_viewport",0xa84274cd,"phoenix.Camera.set_viewport","phoenix/Camera.hx",530,0x1fcabb59)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_r,"_r")
	HX_STACK_LINE(532)
	this->projection_dirty = true;
	HX_STACK_LINE(534)
	this->viewport = _r;
	HX_STACK_LINE(536)
	{
		HX_STACK_LINE(536)
		::phoenix::ProjectionType _g = this->projection;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(536)
		switch( (int)(_g->__Index())){
			case (int)0: {
				HX_STACK_LINE(541)
				{
					HX_STACK_LINE(541)
					::phoenix::Transform _this = this->transform;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(541)
					::phoenix::Vector o = ::phoenix::Vector_obj::__new((Float(_r->w) / Float((int)2)),(Float(_r->h) / Float((int)2)),null(),null());		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(541)
					{
						HX_STACK_LINE(541)
						_this->dirty = true;
						HX_STACK_LINE(541)
						if (((bool((bool((bool(_this->dirty) && bool(!(_this->_setup)))) && bool((_this->_dirty_handlers != null())))) && bool((_this->_dirty_handlers->__Field(HX_CSTRING("length"),true) > (int)0))))){
							HX_STACK_LINE(541)
							int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
							HX_STACK_LINE(541)
							Dynamic _g11 = _this->_dirty_handlers;		HX_STACK_VAR(_g11,"_g11");
							HX_STACK_LINE(541)
							while((true)){
								HX_STACK_LINE(541)
								if ((!(((_g1 < _g11->__Field(HX_CSTRING("length"),true)))))){
									HX_STACK_LINE(541)
									break;
								}
								HX_STACK_LINE(541)
								Dynamic _handler = _g11->__GetItem(_g1);		HX_STACK_VAR(_handler,"_handler");
								HX_STACK_LINE(541)
								++(_g1);
								HX_STACK_LINE(541)
								if (((_handler != null()))){
									HX_STACK_LINE(541)
									_handler(_this).Cast< Void >();
								}
							}
						}
						HX_STACK_LINE(541)
						_this->dirty;
					}
					HX_STACK_LINE(541)
					_this->origin = o;
					HX_STACK_LINE(541)
					if (((bool((_this->_origin_handlers != null())) && bool((_this->_origin_handlers->__Field(HX_CSTRING("length"),true) > (int)0))))){
						HX_STACK_LINE(541)
						::phoenix::Vector _origin = _this->origin;		HX_STACK_VAR(_origin,"_origin");
						HX_STACK_LINE(541)
						{
							HX_STACK_LINE(541)
							int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
							HX_STACK_LINE(541)
							Dynamic _g11 = _this->_origin_handlers;		HX_STACK_VAR(_g11,"_g11");
							HX_STACK_LINE(541)
							while((true)){
								HX_STACK_LINE(541)
								if ((!(((_g1 < _g11->__Field(HX_CSTRING("length"),true)))))){
									HX_STACK_LINE(541)
									break;
								}
								HX_STACK_LINE(541)
								Dynamic _handler = _g11->__GetItem(_g1);		HX_STACK_VAR(_handler,"_handler");
								HX_STACK_LINE(541)
								++(_g1);
								HX_STACK_LINE(541)
								if (((_handler != null()))){
									HX_STACK_LINE(541)
									_handler(_origin).Cast< Void >();
								}
							}
						}
					}
					HX_STACK_LINE(541)
					_this->origin;
				}
				HX_STACK_LINE(543)
				::phoenix::Vector _g1 = this->get_pos();		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(543)
				this->set_pos(_g1);
			}
			;break;
			case (int)1: {
			}
			;break;
			case (int)2: {
			}
			;break;
		}
	}
	HX_STACK_LINE(552)
	return this->get_viewport();
}


HX_DEFINE_DYNAMIC_FUNC1(Camera_obj,set_viewport,return )

::phoenix::Quaternion Camera_obj::set_rotation( ::phoenix::Quaternion _q){
	HX_STACK_FRAME("phoenix.Camera","set_rotation",0x142365a5,"phoenix.Camera.set_rotation","phoenix/Camera.hx",557,0x1fcabb59)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_q,"_q")
	HX_STACK_LINE(557)
	::phoenix::Spatial _this = this->transform->local;		HX_STACK_VAR(_this,"_this");
	HX_STACK_LINE(557)
	_this->rotation = _q;
	HX_STACK_LINE(557)
	if (((_q != null()))){
		HX_STACK_LINE(557)
		{
			HX_STACK_LINE(557)
			::phoenix::Quaternion _q1 = _this->rotation;		HX_STACK_VAR(_q1,"_q1");
			HX_STACK_LINE(557)
			Dynamic listener = _this->_rotation_change_dyn();		HX_STACK_VAR(listener,"listener");
			HX_STACK_LINE(557)
			_q1->listen_x = listener;
			HX_STACK_LINE(557)
			_q1->listen_y = listener;
			HX_STACK_LINE(557)
			_q1->listen_z = listener;
			HX_STACK_LINE(557)
			_q1->listen_w = listener;
		}
		HX_STACK_LINE(557)
		if (((bool((_this->rotation_changed != null())) && bool(!(_this->ignore_listeners))))){
			HX_STACK_LINE(557)
			_this->rotation_changed(_this->rotation);
		}
	}
	HX_STACK_LINE(557)
	return _this->rotation;
}


HX_DEFINE_DYNAMIC_FUNC1(Camera_obj,set_rotation,return )

::phoenix::Vector Camera_obj::set_scale( ::phoenix::Vector _s){
	HX_STACK_FRAME("phoenix.Camera","set_scale",0x24796fc3,"phoenix.Camera.set_scale","phoenix/Camera.hx",561,0x1fcabb59)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_s,"_s")
	HX_STACK_LINE(561)
	::phoenix::Spatial _this = this->transform->local;		HX_STACK_VAR(_this,"_this");
	HX_STACK_LINE(561)
	_this->scale = _s;
	HX_STACK_LINE(561)
	if (((_s != null()))){
		HX_STACK_LINE(561)
		::phoenix::Vector_obj::Listen(_this->scale,_this->_scale_change_dyn());
		HX_STACK_LINE(561)
		if (((bool((_this->scale_changed != null())) && bool(!(_this->ignore_listeners))))){
			HX_STACK_LINE(561)
			_this->scale_changed(_this->scale);
		}
	}
	HX_STACK_LINE(561)
	return _this->scale;
}


HX_DEFINE_DYNAMIC_FUNC1(Camera_obj,set_scale,return )

::phoenix::Vector Camera_obj::set_pos( ::phoenix::Vector _p){
	HX_STACK_FRAME("phoenix.Camera","set_pos",0x5b770e8d,"phoenix.Camera.set_pos","phoenix/Camera.hx",564,0x1fcabb59)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_p,"_p")
	HX_STACK_LINE(566)
	this->pos = _p;
	HX_STACK_LINE(568)
	{
		HX_STACK_LINE(568)
		::phoenix::ProjectionType _g = this->projection;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(568)
		switch( (int)(_g->__Index())){
			case (int)0: {
				HX_STACK_LINE(572)
				Float _cx = this->get_center()->x;		HX_STACK_VAR(_cx,"_cx");
				HX_STACK_LINE(573)
				Float _cy = this->get_center()->y;		HX_STACK_VAR(_cy,"_cy");
				HX_STACK_LINE(575)
				::phoenix::Rectangle _g1 = this->get_viewport();		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(575)
				if (((_g1 != null()))){
					HX_STACK_LINE(576)
					_cx = (_p->x + (Float(this->get_viewport()->w) / Float((int)2)));
					HX_STACK_LINE(577)
					_cy = (_p->y + (Float(this->get_viewport()->h) / Float((int)2)));
				}
				HX_STACK_LINE(580)
				this->_refresh_pos = true;
				HX_STACK_LINE(581)
				this->get_center()->ignore_listeners = true;
				HX_STACK_LINE(582)
				{
					HX_STACK_LINE(582)
					::phoenix::Vector _this = this->get_center();		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(582)
					_this->x = _cx;
					HX_STACK_LINE(582)
					if ((_this->_construct)){
						HX_STACK_LINE(582)
						_this->x;
					}
					else{
						HX_STACK_LINE(582)
						if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
							HX_STACK_LINE(582)
							_this->listen_x(_cx);
						}
						HX_STACK_LINE(582)
						_this->x;
					}
				}
				HX_STACK_LINE(583)
				{
					HX_STACK_LINE(583)
					::phoenix::Vector _this = this->get_center();		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(583)
					_this->y = _cy;
					HX_STACK_LINE(583)
					if ((_this->_construct)){
						HX_STACK_LINE(583)
						_this->y;
					}
					else{
						HX_STACK_LINE(583)
						if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
							HX_STACK_LINE(583)
							_this->listen_y(_cy);
						}
						HX_STACK_LINE(583)
						_this->y;
					}
				}
				HX_STACK_LINE(584)
				this->get_center()->ignore_listeners = false;
				HX_STACK_LINE(585)
				this->_refresh_pos = false;
				HX_STACK_LINE(587)
				{
					HX_STACK_LINE(587)
					::phoenix::Vector _this = this->transform->local->pos;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(587)
					_this->x = _cx;
					HX_STACK_LINE(587)
					if ((_this->_construct)){
						HX_STACK_LINE(587)
						_this->x;
					}
					else{
						HX_STACK_LINE(587)
						if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
							HX_STACK_LINE(587)
							_this->listen_x(_cx);
						}
						HX_STACK_LINE(587)
						_this->x;
					}
				}
				HX_STACK_LINE(588)
				{
					HX_STACK_LINE(588)
					::phoenix::Vector _this = this->transform->local->pos;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(588)
					_this->y = _cy;
					HX_STACK_LINE(588)
					if ((_this->_construct)){
						HX_STACK_LINE(588)
						_this->y;
					}
					else{
						HX_STACK_LINE(588)
						if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
							HX_STACK_LINE(588)
							_this->listen_y(_cy);
						}
						HX_STACK_LINE(588)
						_this->y;
					}
				}
			}
			;break;
			case (int)1: {
				HX_STACK_LINE(592)
				::phoenix::Vector value = this->get_pos();		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(592)
				{
					HX_STACK_LINE(592)
					::phoenix::Spatial _this = this->transform->local;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(592)
					_this->pos = value;
					HX_STACK_LINE(592)
					if (((value != null()))){
						HX_STACK_LINE(592)
						::phoenix::Vector_obj::Listen(_this->pos,_this->_pos_change_dyn());
						HX_STACK_LINE(592)
						if (((bool((_this->pos_changed != null())) && bool(!(_this->ignore_listeners))))){
							HX_STACK_LINE(592)
							_this->pos_changed(_this->pos);
						}
					}
					HX_STACK_LINE(592)
					_this->pos;
				}
			}
			;break;
			case (int)2: {
			}
			;break;
		}
	}
	HX_STACK_LINE(598)
	::phoenix::Vector _g1 = this->get_pos();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(598)
	::phoenix::Vector_obj::Listen(_g1,this->_pos_changed_dyn());
	HX_STACK_LINE(600)
	return this->get_pos();
}


HX_DEFINE_DYNAMIC_FUNC1(Camera_obj,set_pos,return )

Void Camera_obj::_merge_options( Dynamic _options){
{
		HX_STACK_FRAME("phoenix.Camera","_merge_options",0x6b347742,"phoenix.Camera._merge_options","phoenix/Camera.hx",605,0x1fcabb59)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_options,"_options")
		HX_STACK_LINE(607)
		if (((_options->__Field(HX_CSTRING("aspect"),true) != null()))){
			HX_STACK_LINE(608)
			this->options->__FieldRef(HX_CSTRING("aspect")) = _options->__Field(HX_CSTRING("aspect"),true);
			HX_STACK_LINE(609)
			this->set_aspect(this->options->__Field(HX_CSTRING("aspect"),true));
		}
		HX_STACK_LINE(612)
		if (((_options->__Field(HX_CSTRING("far"),true) != null()))){
			HX_STACK_LINE(613)
			this->options->__FieldRef(HX_CSTRING("far")) = _options->__Field(HX_CSTRING("far"),true);
			HX_STACK_LINE(614)
			this->set_far(this->options->__Field(HX_CSTRING("far"),true));
		}
		HX_STACK_LINE(618)
		if (((_options->__Field(HX_CSTRING("fov"),true) != null()))){
			HX_STACK_LINE(619)
			this->options->__FieldRef(HX_CSTRING("fov")) = _options->__Field(HX_CSTRING("fov"),true);
			HX_STACK_LINE(620)
			this->set_fov(this->options->__Field(HX_CSTRING("fov"),true));
		}
		HX_STACK_LINE(623)
		if (((_options->__Field(HX_CSTRING("fov_type"),true) != null()))){
			HX_STACK_LINE(624)
			this->options->__FieldRef(HX_CSTRING("fov_type")) = _options->__Field(HX_CSTRING("fov_type"),true);
			HX_STACK_LINE(625)
			this->set_fov_type(_options->__Field(HX_CSTRING("fov_type"),true));
		}
		else{
			HX_STACK_LINE(629)
			this->options->__FieldRef(HX_CSTRING("fov_type")) = ::phoenix::FOVType_obj::horizontal;
			HX_STACK_LINE(630)
			this->set_fov_type(::phoenix::FOVType_obj::horizontal);
		}
		HX_STACK_LINE(633)
		if (((_options->__Field(HX_CSTRING("near"),true) != null()))){
			HX_STACK_LINE(634)
			this->options->__FieldRef(HX_CSTRING("near")) = _options->__Field(HX_CSTRING("near"),true);
			HX_STACK_LINE(635)
			this->set_near(this->options->__Field(HX_CSTRING("near"),true));
		}
		HX_STACK_LINE(638)
		if (((_options->__Field(HX_CSTRING("viewport"),true) != null()))){
			HX_STACK_LINE(639)
			this->options->__FieldRef(HX_CSTRING("viewport")) = _options->__Field(HX_CSTRING("viewport"),true);
			HX_STACK_LINE(640)
			this->set_viewport(this->options->__Field(HX_CSTRING("viewport"),true));
		}
		HX_STACK_LINE(644)
		this->apply_default_camera_options();
		HX_STACK_LINE(646)
		if (((_options->__Field(HX_CSTRING("cull_backfaces"),true) != null()))){
			HX_STACK_LINE(647)
			this->options->__FieldRef(HX_CSTRING("cull_backfaces")) = _options->__Field(HX_CSTRING("cull_backfaces"),true);
		}
		HX_STACK_LINE(650)
		if (((_options->__Field(HX_CSTRING("depth_test"),true) != null()))){
			HX_STACK_LINE(651)
			this->options->__FieldRef(HX_CSTRING("depth_test")) = _options->__Field(HX_CSTRING("depth_test"),true);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Camera_obj,_merge_options,(void))

Void Camera_obj::_pos_changed( Float v){
{
		HX_STACK_FRAME("phoenix.Camera","_pos_changed",0x32241af4,"phoenix.Camera._pos_changed","phoenix/Camera.hx",656,0x1fcabb59)
		HX_STACK_THIS(this)
		HX_STACK_ARG(v,"v")
		HX_STACK_LINE(658)
		::phoenix::Vector _g = this->get_pos();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(658)
		this->set_pos(_g);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Camera_obj,_pos_changed,(void))

Void Camera_obj::_center_changed( Float v){
{
		HX_STACK_FRAME("phoenix.Camera","_center_changed",0xdc3d733f,"phoenix.Camera._center_changed","phoenix/Camera.hx",662,0x1fcabb59)
		HX_STACK_THIS(this)
		HX_STACK_ARG(v,"v")
		HX_STACK_LINE(664)
		::phoenix::Vector _g = this->get_center();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(664)
		this->set_center(_g);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Camera_obj,_center_changed,(void))


Camera_obj::Camera_obj()
{
}

void Camera_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Camera);
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(viewport,"viewport");
	HX_MARK_MEMBER_NAME(center,"center");
	HX_MARK_MEMBER_NAME(zoom,"zoom");
	HX_MARK_MEMBER_NAME(near,"near");
	HX_MARK_MEMBER_NAME(far,"far");
	HX_MARK_MEMBER_NAME(fov,"fov");
	HX_MARK_MEMBER_NAME(fov_type,"fov_type");
	HX_MARK_MEMBER_NAME(aspect,"aspect");
	HX_MARK_MEMBER_NAME(target,"target");
	HX_MARK_MEMBER_NAME(pos,"pos");
	HX_MARK_MEMBER_NAME(transform,"transform");
	HX_MARK_MEMBER_NAME(minimum_zoom,"minimum_zoom");
	HX_MARK_MEMBER_NAME(projection_matrix,"projection_matrix");
	HX_MARK_MEMBER_NAME(view_matrix,"view_matrix");
	HX_MARK_MEMBER_NAME(view_matrix_inverse,"view_matrix_inverse");
	HX_MARK_MEMBER_NAME(look_at_matrix,"look_at_matrix");
	HX_MARK_MEMBER_NAME(options,"options");
	HX_MARK_MEMBER_NAME(projection,"projection");
	HX_MARK_MEMBER_NAME(up,"up");
	HX_MARK_MEMBER_NAME(projection_float32array,"projection_float32array");
	HX_MARK_MEMBER_NAME(view_inverse_float32array,"view_inverse_float32array");
	HX_MARK_MEMBER_NAME(fov_y,"fov_y");
	HX_MARK_MEMBER_NAME(transform_dirty,"transform_dirty");
	HX_MARK_MEMBER_NAME(projection_dirty,"projection_dirty");
	HX_MARK_MEMBER_NAME(look_at_dirty,"look_at_dirty");
	HX_MARK_MEMBER_NAME(_setup,"_setup");
	HX_MARK_MEMBER_NAME(_refresh_pos,"_refresh_pos");
	HX_MARK_END_CLASS();
}

void Camera_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(viewport,"viewport");
	HX_VISIT_MEMBER_NAME(center,"center");
	HX_VISIT_MEMBER_NAME(zoom,"zoom");
	HX_VISIT_MEMBER_NAME(near,"near");
	HX_VISIT_MEMBER_NAME(far,"far");
	HX_VISIT_MEMBER_NAME(fov,"fov");
	HX_VISIT_MEMBER_NAME(fov_type,"fov_type");
	HX_VISIT_MEMBER_NAME(aspect,"aspect");
	HX_VISIT_MEMBER_NAME(target,"target");
	HX_VISIT_MEMBER_NAME(pos,"pos");
	HX_VISIT_MEMBER_NAME(transform,"transform");
	HX_VISIT_MEMBER_NAME(minimum_zoom,"minimum_zoom");
	HX_VISIT_MEMBER_NAME(projection_matrix,"projection_matrix");
	HX_VISIT_MEMBER_NAME(view_matrix,"view_matrix");
	HX_VISIT_MEMBER_NAME(view_matrix_inverse,"view_matrix_inverse");
	HX_VISIT_MEMBER_NAME(look_at_matrix,"look_at_matrix");
	HX_VISIT_MEMBER_NAME(options,"options");
	HX_VISIT_MEMBER_NAME(projection,"projection");
	HX_VISIT_MEMBER_NAME(up,"up");
	HX_VISIT_MEMBER_NAME(projection_float32array,"projection_float32array");
	HX_VISIT_MEMBER_NAME(view_inverse_float32array,"view_inverse_float32array");
	HX_VISIT_MEMBER_NAME(fov_y,"fov_y");
	HX_VISIT_MEMBER_NAME(transform_dirty,"transform_dirty");
	HX_VISIT_MEMBER_NAME(projection_dirty,"projection_dirty");
	HX_VISIT_MEMBER_NAME(look_at_dirty,"look_at_dirty");
	HX_VISIT_MEMBER_NAME(_setup,"_setup");
	HX_VISIT_MEMBER_NAME(_refresh_pos,"_refresh_pos");
}

Dynamic Camera_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"up") ) { return up; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"far") ) { return far; }
		if (HX_FIELD_EQ(inName,"fov") ) { return fov; }
		if (HX_FIELD_EQ(inName,"pos") ) { return inCallProp ? get_pos() : pos; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return name; }
		if (HX_FIELD_EQ(inName,"zoom") ) { return zoom; }
		if (HX_FIELD_EQ(inName,"near") ) { return near; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"scale") ) { return get_scale(); }
		if (HX_FIELD_EQ(inName,"fov_y") ) { return fov_y; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"center") ) { return inCallProp ? get_center() : center; }
		if (HX_FIELD_EQ(inName,"aspect") ) { return aspect; }
		if (HX_FIELD_EQ(inName,"target") ) { return target; }
		if (HX_FIELD_EQ(inName,"_setup") ) { return _setup; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"options") ) { return options; }
		if (HX_FIELD_EQ(inName,"project") ) { return project_dyn(); }
		if (HX_FIELD_EQ(inName,"process") ) { return process_dyn(); }
		if (HX_FIELD_EQ(inName,"set_fov") ) { return set_fov_dyn(); }
		if (HX_FIELD_EQ(inName,"set_far") ) { return set_far_dyn(); }
		if (HX_FIELD_EQ(inName,"get_pos") ) { return get_pos_dyn(); }
		if (HX_FIELD_EQ(inName,"set_pos") ) { return set_pos_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"viewport") ) { return inCallProp ? get_viewport() : viewport; }
		if (HX_FIELD_EQ(inName,"fov_type") ) { return fov_type; }
		if (HX_FIELD_EQ(inName,"rotation") ) { return get_rotation(); }
		if (HX_FIELD_EQ(inName,"set_near") ) { return set_near_dyn(); }
		if (HX_FIELD_EQ(inName,"set_zoom") ) { return set_zoom_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"transform") ) { return transform; }
		if (HX_FIELD_EQ(inName,"set_ortho") ) { return set_ortho_dyn(); }
		if (HX_FIELD_EQ(inName,"unproject") ) { return unproject_dyn(); }
		if (HX_FIELD_EQ(inName,"get_scale") ) { return get_scale_dyn(); }
		if (HX_FIELD_EQ(inName,"set_scale") ) { return set_scale_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"projection") ) { return projection; }
		if (HX_FIELD_EQ(inName,"set_target") ) { return set_target_dyn(); }
		if (HX_FIELD_EQ(inName,"set_aspect") ) { return set_aspect_dyn(); }
		if (HX_FIELD_EQ(inName,"set_center") ) { return set_center_dyn(); }
		if (HX_FIELD_EQ(inName,"get_center") ) { return get_center_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"view_matrix") ) { return view_matrix; }
		if (HX_FIELD_EQ(inName,"apply_state") ) { return apply_state_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"minimum_zoom") ) { return minimum_zoom; }
		if (HX_FIELD_EQ(inName,"set_fov_type") ) { return set_fov_type_dyn(); }
		if (HX_FIELD_EQ(inName,"_refresh_pos") ) { return _refresh_pos; }
		if (HX_FIELD_EQ(inName,"get_rotation") ) { return get_rotation_dyn(); }
		if (HX_FIELD_EQ(inName,"get_viewport") ) { return get_viewport_dyn(); }
		if (HX_FIELD_EQ(inName,"set_viewport") ) { return set_viewport_dyn(); }
		if (HX_FIELD_EQ(inName,"set_rotation") ) { return set_rotation_dyn(); }
		if (HX_FIELD_EQ(inName,"_pos_changed") ) { return _pos_changed_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"look_at_dirty") ) { return look_at_dirty; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"look_at_matrix") ) { return look_at_matrix; }
		if (HX_FIELD_EQ(inName,"update_look_at") ) { return update_look_at_dyn(); }
		if (HX_FIELD_EQ(inName,"_merge_options") ) { return _merge_options_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"transform_dirty") ) { return transform_dirty; }
		if (HX_FIELD_EQ(inName,"set_perspective") ) { return set_perspective_dyn(); }
		if (HX_FIELD_EQ(inName,"_center_changed") ) { return _center_changed_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"projection_dirty") ) { return projection_dirty; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"projection_matrix") ) { return projection_matrix; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"update_view_matrix") ) { return update_view_matrix_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"view_matrix_inverse") ) { return view_matrix_inverse; }
		if (HX_FIELD_EQ(inName,"screen_point_to_ray") ) { return screen_point_to_ray_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"on_transform_cleaned") ) { return on_transform_cleaned_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"screen_point_to_world") ) { return screen_point_to_world_dyn(); }
		if (HX_FIELD_EQ(inName,"world_point_to_screen") ) { return world_point_to_screen_dyn(); }
		if (HX_FIELD_EQ(inName,"ortho_screen_to_world") ) { return ortho_screen_to_world_dyn(); }
		if (HX_FIELD_EQ(inName,"ortho_world_to_screen") ) { return ortho_world_to_screen_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"default_camera_options") ) { return default_camera_options_dyn(); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"projection_float32array") ) { return projection_float32array; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"update_projection_matrix") ) { return update_projection_matrix_dyn(); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"view_inverse_float32array") ) { return view_inverse_float32array; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"apply_default_camera_options") ) { return apply_default_camera_options_dyn(); }
		if (HX_FIELD_EQ(inName,"persepective_world_to_screen") ) { return persepective_world_to_screen_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Camera_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"up") ) { up=inValue.Cast< ::phoenix::Vector >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"far") ) { if (inCallProp) return set_far(inValue);far=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"fov") ) { if (inCallProp) return set_fov(inValue);fov=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"pos") ) { if (inCallProp) return set_pos(inValue);pos=inValue.Cast< ::phoenix::Vector >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"zoom") ) { if (inCallProp) return set_zoom(inValue);zoom=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"near") ) { if (inCallProp) return set_near(inValue);near=inValue.Cast< Float >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"scale") ) { return set_scale(inValue); }
		if (HX_FIELD_EQ(inName,"fov_y") ) { fov_y=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"center") ) { if (inCallProp) return set_center(inValue);center=inValue.Cast< ::phoenix::Vector >(); return inValue; }
		if (HX_FIELD_EQ(inName,"aspect") ) { if (inCallProp) return set_aspect(inValue);aspect=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"target") ) { if (inCallProp) return set_target(inValue);target=inValue.Cast< ::phoenix::Vector >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_setup") ) { _setup=inValue.Cast< bool >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"options") ) { options=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"viewport") ) { if (inCallProp) return set_viewport(inValue);viewport=inValue.Cast< ::phoenix::Rectangle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"fov_type") ) { if (inCallProp) return set_fov_type(inValue);fov_type=inValue.Cast< ::phoenix::FOVType >(); return inValue; }
		if (HX_FIELD_EQ(inName,"rotation") ) { return set_rotation(inValue); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"transform") ) { transform=inValue.Cast< ::phoenix::Transform >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"projection") ) { projection=inValue.Cast< ::phoenix::ProjectionType >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"view_matrix") ) { view_matrix=inValue.Cast< ::phoenix::Matrix >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"minimum_zoom") ) { minimum_zoom=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_refresh_pos") ) { _refresh_pos=inValue.Cast< bool >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"look_at_dirty") ) { look_at_dirty=inValue.Cast< bool >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"look_at_matrix") ) { look_at_matrix=inValue.Cast< ::phoenix::Matrix >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"transform_dirty") ) { transform_dirty=inValue.Cast< bool >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"projection_dirty") ) { projection_dirty=inValue.Cast< bool >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"projection_matrix") ) { projection_matrix=inValue.Cast< ::phoenix::Matrix >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"view_matrix_inverse") ) { view_matrix_inverse=inValue.Cast< ::phoenix::Matrix >(); return inValue; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"projection_float32array") ) { projection_float32array=inValue.Cast< ::snow::platform::native::utils::Float32Array >(); return inValue; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"view_inverse_float32array") ) { view_inverse_float32array=inValue.Cast< ::snow::platform::native::utils::Float32Array >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Camera_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("name"));
	outFields->push(HX_CSTRING("viewport"));
	outFields->push(HX_CSTRING("center"));
	outFields->push(HX_CSTRING("zoom"));
	outFields->push(HX_CSTRING("near"));
	outFields->push(HX_CSTRING("far"));
	outFields->push(HX_CSTRING("fov"));
	outFields->push(HX_CSTRING("fov_type"));
	outFields->push(HX_CSTRING("aspect"));
	outFields->push(HX_CSTRING("target"));
	outFields->push(HX_CSTRING("pos"));
	outFields->push(HX_CSTRING("scale"));
	outFields->push(HX_CSTRING("rotation"));
	outFields->push(HX_CSTRING("transform"));
	outFields->push(HX_CSTRING("minimum_zoom"));
	outFields->push(HX_CSTRING("projection_matrix"));
	outFields->push(HX_CSTRING("view_matrix"));
	outFields->push(HX_CSTRING("view_matrix_inverse"));
	outFields->push(HX_CSTRING("look_at_matrix"));
	outFields->push(HX_CSTRING("options"));
	outFields->push(HX_CSTRING("projection"));
	outFields->push(HX_CSTRING("up"));
	outFields->push(HX_CSTRING("projection_float32array"));
	outFields->push(HX_CSTRING("view_inverse_float32array"));
	outFields->push(HX_CSTRING("fov_y"));
	outFields->push(HX_CSTRING("transform_dirty"));
	outFields->push(HX_CSTRING("projection_dirty"));
	outFields->push(HX_CSTRING("look_at_dirty"));
	outFields->push(HX_CSTRING("_setup"));
	outFields->push(HX_CSTRING("_refresh_pos"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(Camera_obj,name),HX_CSTRING("name")},
	{hx::fsObject /*::phoenix::Rectangle*/ ,(int)offsetof(Camera_obj,viewport),HX_CSTRING("viewport")},
	{hx::fsObject /*::phoenix::Vector*/ ,(int)offsetof(Camera_obj,center),HX_CSTRING("center")},
	{hx::fsFloat,(int)offsetof(Camera_obj,zoom),HX_CSTRING("zoom")},
	{hx::fsFloat,(int)offsetof(Camera_obj,near),HX_CSTRING("near")},
	{hx::fsFloat,(int)offsetof(Camera_obj,far),HX_CSTRING("far")},
	{hx::fsFloat,(int)offsetof(Camera_obj,fov),HX_CSTRING("fov")},
	{hx::fsObject /*::phoenix::FOVType*/ ,(int)offsetof(Camera_obj,fov_type),HX_CSTRING("fov_type")},
	{hx::fsFloat,(int)offsetof(Camera_obj,aspect),HX_CSTRING("aspect")},
	{hx::fsObject /*::phoenix::Vector*/ ,(int)offsetof(Camera_obj,target),HX_CSTRING("target")},
	{hx::fsObject /*::phoenix::Vector*/ ,(int)offsetof(Camera_obj,pos),HX_CSTRING("pos")},
	{hx::fsObject /*::phoenix::Transform*/ ,(int)offsetof(Camera_obj,transform),HX_CSTRING("transform")},
	{hx::fsFloat,(int)offsetof(Camera_obj,minimum_zoom),HX_CSTRING("minimum_zoom")},
	{hx::fsObject /*::phoenix::Matrix*/ ,(int)offsetof(Camera_obj,projection_matrix),HX_CSTRING("projection_matrix")},
	{hx::fsObject /*::phoenix::Matrix*/ ,(int)offsetof(Camera_obj,view_matrix),HX_CSTRING("view_matrix")},
	{hx::fsObject /*::phoenix::Matrix*/ ,(int)offsetof(Camera_obj,view_matrix_inverse),HX_CSTRING("view_matrix_inverse")},
	{hx::fsObject /*::phoenix::Matrix*/ ,(int)offsetof(Camera_obj,look_at_matrix),HX_CSTRING("look_at_matrix")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Camera_obj,options),HX_CSTRING("options")},
	{hx::fsObject /*::phoenix::ProjectionType*/ ,(int)offsetof(Camera_obj,projection),HX_CSTRING("projection")},
	{hx::fsObject /*::phoenix::Vector*/ ,(int)offsetof(Camera_obj,up),HX_CSTRING("up")},
	{hx::fsObject /*::snow::platform::native::utils::Float32Array*/ ,(int)offsetof(Camera_obj,projection_float32array),HX_CSTRING("projection_float32array")},
	{hx::fsObject /*::snow::platform::native::utils::Float32Array*/ ,(int)offsetof(Camera_obj,view_inverse_float32array),HX_CSTRING("view_inverse_float32array")},
	{hx::fsFloat,(int)offsetof(Camera_obj,fov_y),HX_CSTRING("fov_y")},
	{hx::fsBool,(int)offsetof(Camera_obj,transform_dirty),HX_CSTRING("transform_dirty")},
	{hx::fsBool,(int)offsetof(Camera_obj,projection_dirty),HX_CSTRING("projection_dirty")},
	{hx::fsBool,(int)offsetof(Camera_obj,look_at_dirty),HX_CSTRING("look_at_dirty")},
	{hx::fsBool,(int)offsetof(Camera_obj,_setup),HX_CSTRING("_setup")},
	{hx::fsBool,(int)offsetof(Camera_obj,_refresh_pos),HX_CSTRING("_refresh_pos")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("name"),
	HX_CSTRING("viewport"),
	HX_CSTRING("center"),
	HX_CSTRING("zoom"),
	HX_CSTRING("near"),
	HX_CSTRING("far"),
	HX_CSTRING("fov"),
	HX_CSTRING("fov_type"),
	HX_CSTRING("aspect"),
	HX_CSTRING("target"),
	HX_CSTRING("pos"),
	HX_CSTRING("transform"),
	HX_CSTRING("minimum_zoom"),
	HX_CSTRING("projection_matrix"),
	HX_CSTRING("view_matrix"),
	HX_CSTRING("view_matrix_inverse"),
	HX_CSTRING("look_at_matrix"),
	HX_CSTRING("options"),
	HX_CSTRING("projection"),
	HX_CSTRING("up"),
	HX_CSTRING("projection_float32array"),
	HX_CSTRING("view_inverse_float32array"),
	HX_CSTRING("fov_y"),
	HX_CSTRING("transform_dirty"),
	HX_CSTRING("projection_dirty"),
	HX_CSTRING("look_at_dirty"),
	HX_CSTRING("_setup"),
	HX_CSTRING("set_ortho"),
	HX_CSTRING("set_perspective"),
	HX_CSTRING("project"),
	HX_CSTRING("unproject"),
	HX_CSTRING("screen_point_to_ray"),
	HX_CSTRING("screen_point_to_world"),
	HX_CSTRING("world_point_to_screen"),
	HX_CSTRING("process"),
	HX_CSTRING("on_transform_cleaned"),
	HX_CSTRING("update_look_at"),
	HX_CSTRING("update_view_matrix"),
	HX_CSTRING("update_projection_matrix"),
	HX_CSTRING("apply_state"),
	HX_CSTRING("apply_default_camera_options"),
	HX_CSTRING("default_camera_options"),
	HX_CSTRING("ortho_screen_to_world"),
	HX_CSTRING("ortho_world_to_screen"),
	HX_CSTRING("persepective_world_to_screen"),
	HX_CSTRING("set_target"),
	HX_CSTRING("set_fov"),
	HX_CSTRING("set_fov_type"),
	HX_CSTRING("set_aspect"),
	HX_CSTRING("set_near"),
	HX_CSTRING("set_far"),
	HX_CSTRING("set_zoom"),
	HX_CSTRING("_refresh_pos"),
	HX_CSTRING("set_center"),
	HX_CSTRING("get_center"),
	HX_CSTRING("get_pos"),
	HX_CSTRING("get_rotation"),
	HX_CSTRING("get_scale"),
	HX_CSTRING("get_viewport"),
	HX_CSTRING("set_viewport"),
	HX_CSTRING("set_rotation"),
	HX_CSTRING("set_scale"),
	HX_CSTRING("set_pos"),
	HX_CSTRING("_merge_options"),
	HX_CSTRING("_pos_changed"),
	HX_CSTRING("_center_changed"),
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
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("phoenix.Camera"), hx::TCanCast< Camera_obj> ,sStaticFields,sMemberFields,
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

} // end namespace phoenix
