#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_phoenix_Matrix
#include <phoenix/Matrix.h>
#endif
#ifndef INCLUDED_phoenix_MatrixTransform
#include <phoenix/MatrixTransform.h>
#endif
#ifndef INCLUDED_phoenix_Quaternion
#include <phoenix/Quaternion.h>
#endif
#ifndef INCLUDED_phoenix_Spatial
#include <phoenix/Spatial.h>
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

Void Spatial_obj::__construct()
{
HX_STACK_FRAME("phoenix.Spatial","new",0x51d44037,"phoenix.Spatial.new","phoenix/Transform.hx",547,0x44da8ab2)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(563)
	this->_setup = true;
	HX_STACK_LINE(557)
	this->auto_decompose = false;
	HX_STACK_LINE(556)
	this->ignore_listeners = false;
	HX_STACK_LINE(567)
	{
		HX_STACK_LINE(567)
		::phoenix::Matrix _m = ::phoenix::Matrix_obj::__new(null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(_m,"_m");
		HX_STACK_LINE(567)
		this->matrix = _m;
		HX_STACK_LINE(567)
		if (((_m != null()))){
			HX_STACK_LINE(567)
			::snow::platform::native::utils::Float32Array _g;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(567)
			{
				HX_STACK_LINE(567)
				::phoenix::Matrix _this = this->matrix;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(567)
				{
					HX_STACK_LINE(567)
					::snow::platform::native::utils::Float32Array _this1 = _this->_float32array;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(567)
					Dynamic bufferOrArray = _this->elements;		HX_STACK_VAR(bufferOrArray,"bufferOrArray");
					HX_STACK_LINE(567)
					int offset = (int)0;		HX_STACK_VAR(offset,"offset");
					HX_STACK_LINE(567)
					if ((::Std_obj::is(bufferOrArray,hx::ClassOf< Array<int> >()))){
						HX_STACK_LINE(567)
						Array< Float > floats = bufferOrArray;		HX_STACK_VAR(floats,"floats");
						HX_STACK_LINE(567)
						{
							HX_STACK_LINE(567)
							int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
							HX_STACK_LINE(567)
							int _g2 = floats->length;		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(567)
							while((true)){
								HX_STACK_LINE(567)
								if ((!(((_g1 < _g2))))){
									HX_STACK_LINE(567)
									break;
								}
								HX_STACK_LINE(567)
								int i = (_g1)++;		HX_STACK_VAR(i,"i");
								HX_STACK_LINE(567)
								::__hxcpp_memory_set_float(_this1->bytes,(((int((i + offset)) << int((int)2))) + _this1->byteOffset),floats->__get(i));
							}
						}
					}
					else{
						HX_STACK_LINE(567)
						if ((::Std_obj::is(bufferOrArray,hx::ClassOf< ::snow::platform::native::utils::Float32Array >()))){
							HX_STACK_LINE(567)
							::snow::platform::native::utils::Float32Array floats = bufferOrArray;		HX_STACK_VAR(floats,"floats");
							HX_STACK_LINE(567)
							{
								HX_STACK_LINE(567)
								int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
								HX_STACK_LINE(567)
								int _g2 = floats->length;		HX_STACK_VAR(_g2,"_g2");
								HX_STACK_LINE(567)
								while((true)){
									HX_STACK_LINE(567)
									if ((!(((_g1 < _g2))))){
										HX_STACK_LINE(567)
										break;
									}
									HX_STACK_LINE(567)
									int i = (_g1)++;		HX_STACK_VAR(i,"i");
									HX_STACK_LINE(567)
									::__hxcpp_memory_set_float(_this1->bytes,(((int((i + offset)) << int((int)2))) + _this1->byteOffset),floats->__get(i));
								}
							}
						}
						else{
							HX_STACK_LINE(567)
							HX_STACK_DO_THROW(HX_CSTRING("Invalid input buffer"));
						}
					}
				}
				HX_STACK_LINE(567)
				_g = ::snow::platform::native::utils::Float32Array_obj::__new(_this->_float32array,null(),null());
			}
			HX_STACK_LINE(567)
			this->floats = _g;
		}
		HX_STACK_LINE(567)
		this->matrix;
	}
	HX_STACK_LINE(568)
	::snow::platform::native::utils::Float32Array _g1;		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(568)
	{
		HX_STACK_LINE(568)
		::phoenix::Matrix _this = this->matrix;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(568)
		{
			HX_STACK_LINE(568)
			::snow::platform::native::utils::Float32Array _this1 = _this->_float32array;		HX_STACK_VAR(_this1,"_this1");
			HX_STACK_LINE(568)
			Dynamic bufferOrArray = _this->elements;		HX_STACK_VAR(bufferOrArray,"bufferOrArray");
			HX_STACK_LINE(568)
			int offset = (int)0;		HX_STACK_VAR(offset,"offset");
			HX_STACK_LINE(568)
			if ((::Std_obj::is(bufferOrArray,hx::ClassOf< Array<int> >()))){
				HX_STACK_LINE(568)
				Array< Float > floats = bufferOrArray;		HX_STACK_VAR(floats,"floats");
				HX_STACK_LINE(568)
				{
					HX_STACK_LINE(568)
					int _g11 = (int)0;		HX_STACK_VAR(_g11,"_g11");
					HX_STACK_LINE(568)
					int _g = floats->length;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(568)
					while((true)){
						HX_STACK_LINE(568)
						if ((!(((_g11 < _g))))){
							HX_STACK_LINE(568)
							break;
						}
						HX_STACK_LINE(568)
						int i = (_g11)++;		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(568)
						::__hxcpp_memory_set_float(_this1->bytes,(((int((i + offset)) << int((int)2))) + _this1->byteOffset),floats->__get(i));
					}
				}
			}
			else{
				HX_STACK_LINE(568)
				if ((::Std_obj::is(bufferOrArray,hx::ClassOf< ::snow::platform::native::utils::Float32Array >()))){
					HX_STACK_LINE(568)
					::snow::platform::native::utils::Float32Array floats = bufferOrArray;		HX_STACK_VAR(floats,"floats");
					HX_STACK_LINE(568)
					{
						HX_STACK_LINE(568)
						int _g11 = (int)0;		HX_STACK_VAR(_g11,"_g11");
						HX_STACK_LINE(568)
						int _g = floats->length;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(568)
						while((true)){
							HX_STACK_LINE(568)
							if ((!(((_g11 < _g))))){
								HX_STACK_LINE(568)
								break;
							}
							HX_STACK_LINE(568)
							int i = (_g11)++;		HX_STACK_VAR(i,"i");
							HX_STACK_LINE(568)
							::__hxcpp_memory_set_float(_this1->bytes,(((int((i + offset)) << int((int)2))) + _this1->byteOffset),floats->__get(i));
						}
					}
				}
				else{
					HX_STACK_LINE(568)
					HX_STACK_DO_THROW(HX_CSTRING("Invalid input buffer"));
				}
			}
		}
		HX_STACK_LINE(568)
		_g1 = ::snow::platform::native::utils::Float32Array_obj::__new(_this->_float32array,null(),null());
	}
	HX_STACK_LINE(568)
	this->floats = _g1;
	HX_STACK_LINE(570)
	{
		HX_STACK_LINE(570)
		::phoenix::Vector _p = ::phoenix::Vector_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(_p,"_p");
		HX_STACK_LINE(570)
		this->pos = _p;
		HX_STACK_LINE(570)
		if (((_p != null()))){
			HX_STACK_LINE(570)
			::phoenix::Vector_obj::Listen(this->pos,this->_pos_change_dyn());
			HX_STACK_LINE(570)
			if (((bool((this->pos_changed_dyn() != null())) && bool(!(this->ignore_listeners))))){
				HX_STACK_LINE(570)
				this->pos_changed(this->pos);
			}
		}
		HX_STACK_LINE(570)
		this->pos;
	}
	HX_STACK_LINE(571)
	{
		HX_STACK_LINE(571)
		::phoenix::Quaternion _r = ::phoenix::Quaternion_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(_r,"_r");
		HX_STACK_LINE(571)
		this->rotation = _r;
		HX_STACK_LINE(571)
		if (((_r != null()))){
			HX_STACK_LINE(571)
			{
				HX_STACK_LINE(571)
				::phoenix::Quaternion _q = this->rotation;		HX_STACK_VAR(_q,"_q");
				HX_STACK_LINE(571)
				Dynamic listener = this->_rotation_change_dyn();		HX_STACK_VAR(listener,"listener");
				HX_STACK_LINE(571)
				_q->listen_x = listener;
				HX_STACK_LINE(571)
				_q->listen_y = listener;
				HX_STACK_LINE(571)
				_q->listen_z = listener;
				HX_STACK_LINE(571)
				_q->listen_w = listener;
			}
			HX_STACK_LINE(571)
			if (((bool((this->rotation_changed_dyn() != null())) && bool(!(this->ignore_listeners))))){
				HX_STACK_LINE(571)
				this->rotation_changed(this->rotation);
			}
		}
		HX_STACK_LINE(571)
		this->rotation;
	}
	HX_STACK_LINE(572)
	{
		HX_STACK_LINE(572)
		::phoenix::Vector _s = ::phoenix::Vector_obj::__new((int)1,(int)1,(int)1,null());		HX_STACK_VAR(_s,"_s");
		HX_STACK_LINE(572)
		this->scale = _s;
		HX_STACK_LINE(572)
		if (((_s != null()))){
			HX_STACK_LINE(572)
			::phoenix::Vector_obj::Listen(this->scale,this->_scale_change_dyn());
			HX_STACK_LINE(572)
			if (((bool((this->scale_changed_dyn() != null())) && bool(!(this->ignore_listeners))))){
				HX_STACK_LINE(572)
				this->scale_changed(this->scale);
			}
		}
		HX_STACK_LINE(572)
		this->scale;
	}
	HX_STACK_LINE(574)
	this->_setup = false;
}
;
	return null();
}

//Spatial_obj::~Spatial_obj() { }

Dynamic Spatial_obj::__CreateEmpty() { return  new Spatial_obj; }
hx::ObjectPtr< Spatial_obj > Spatial_obj::__new()
{  hx::ObjectPtr< Spatial_obj > result = new Spatial_obj();
	result->__construct();
	return result;}

Dynamic Spatial_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Spatial_obj > result = new Spatial_obj();
	result->__construct();
	return result;}

Void Spatial_obj::destroy( ){
{
		HX_STACK_FRAME("phoenix.Spatial","destroy",0x7b90d451,"phoenix.Spatial.destroy","phoenix/Transform.hx",578,0x44da8ab2)
		HX_STACK_THIS(this)
		HX_STACK_LINE(580)
		{
			HX_STACK_LINE(580)
			this->matrix = null();
			HX_STACK_LINE(580)
			this->matrix;
		}
		HX_STACK_LINE(581)
		this->floats = null();
		HX_STACK_LINE(582)
		{
			HX_STACK_LINE(582)
			this->pos = null();
			HX_STACK_LINE(582)
			this->pos;
		}
		HX_STACK_LINE(583)
		{
			HX_STACK_LINE(583)
			this->rotation = null();
			HX_STACK_LINE(583)
			this->rotation;
		}
		HX_STACK_LINE(584)
		{
			HX_STACK_LINE(584)
			this->scale = null();
			HX_STACK_LINE(584)
			this->scale;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Spatial_obj,destroy,(void))

::phoenix::Spatial Spatial_obj::decompose( hx::Null< bool >  __o__force){
bool _force = __o__force.Default(true);
	HX_STACK_FRAME("phoenix.Spatial","decompose",0xa72c2ec8,"phoenix.Spatial.decompose","phoenix/Transform.hx",591,0x44da8ab2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_force,"_force")
{
		HX_STACK_LINE(593)
		if (((bool(this->auto_decompose) || bool(_force)))){
			HX_STACK_LINE(595)
			::phoenix::MatrixTransform _transform;		HX_STACK_VAR(_transform,"_transform");
			HX_STACK_LINE(595)
			{
				HX_STACK_LINE(595)
				::phoenix::Matrix _this = this->matrix;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(595)
				::phoenix::Vector _position = null();		HX_STACK_VAR(_position,"_position");
				HX_STACK_LINE(595)
				::phoenix::Quaternion _quaternion = null();		HX_STACK_VAR(_quaternion,"_quaternion");
				HX_STACK_LINE(595)
				::phoenix::Vector _scale = null();		HX_STACK_VAR(_scale,"_scale");
				HX_STACK_LINE(595)
				Array< Float > te = _this->elements;		HX_STACK_VAR(te,"te");
				HX_STACK_LINE(595)
				::phoenix::Matrix matrix = ::phoenix::Matrix_obj::__new(null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(matrix,"matrix");
				HX_STACK_LINE(595)
				Float _ax_x = te->__get((int)0);		HX_STACK_VAR(_ax_x,"_ax_x");
				HX_STACK_LINE(595)
				Float _ax_y = te->__get((int)1);		HX_STACK_VAR(_ax_y,"_ax_y");
				HX_STACK_LINE(595)
				Float _ax_z = te->__get((int)2);		HX_STACK_VAR(_ax_z,"_ax_z");
				HX_STACK_LINE(595)
				Float _ay_x = te->__get((int)4);		HX_STACK_VAR(_ay_x,"_ay_x");
				HX_STACK_LINE(595)
				Float _ay_y = te->__get((int)5);		HX_STACK_VAR(_ay_y,"_ay_y");
				HX_STACK_LINE(595)
				Float _ay_z = te->__get((int)6);		HX_STACK_VAR(_ay_z,"_ay_z");
				HX_STACK_LINE(595)
				Float _az_x = te->__get((int)8);		HX_STACK_VAR(_az_x,"_az_x");
				HX_STACK_LINE(595)
				Float _az_y = te->__get((int)9);		HX_STACK_VAR(_az_y,"_az_y");
				HX_STACK_LINE(595)
				Float _az_z = te->__get((int)10);		HX_STACK_VAR(_az_z,"_az_z");
				HX_STACK_LINE(595)
				Float _ax_length = ::Math_obj::sqrt((((_ax_x * _ax_x) + (_ax_y * _ax_y)) + (_ax_z * _ax_z)));		HX_STACK_VAR(_ax_length,"_ax_length");
				HX_STACK_LINE(595)
				Float _ay_length = ::Math_obj::sqrt((((_ay_x * _ay_x) + (_ay_y * _ay_y)) + (_ay_z * _ay_z)));		HX_STACK_VAR(_ay_length,"_ay_length");
				HX_STACK_LINE(595)
				Float _az_length = ::Math_obj::sqrt((((_az_x * _az_x) + (_az_y * _az_y)) + (_az_z * _az_z)));		HX_STACK_VAR(_az_length,"_az_length");
				HX_STACK_LINE(595)
				if (((_quaternion == null()))){
					HX_STACK_LINE(595)
					::phoenix::Quaternion _g = ::phoenix::Quaternion_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(595)
					_quaternion = _g;
				}
				HX_STACK_LINE(595)
				if (((_position == null()))){
					HX_STACK_LINE(595)
					::phoenix::Vector _g1 = ::phoenix::Vector_obj::__new(te->__get((int)12),te->__get((int)13),te->__get((int)14),null());		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(595)
					_position = _g1;
				}
				else{
					HX_STACK_LINE(595)
					{
						HX_STACK_LINE(595)
						Float _x = te->__get((int)12);		HX_STACK_VAR(_x,"_x");
						HX_STACK_LINE(595)
						_position->x = _x;
						HX_STACK_LINE(595)
						if ((_position->_construct)){
							HX_STACK_LINE(595)
							_position->x;
						}
						else{
							HX_STACK_LINE(595)
							if (((bool((_position->listen_x != null())) && bool(!(_position->ignore_listeners))))){
								HX_STACK_LINE(595)
								_position->listen_x(_x);
							}
							HX_STACK_LINE(595)
							_position->x;
						}
					}
					HX_STACK_LINE(595)
					{
						HX_STACK_LINE(595)
						Float _y = te->__get((int)13);		HX_STACK_VAR(_y,"_y");
						HX_STACK_LINE(595)
						_position->y = _y;
						HX_STACK_LINE(595)
						if ((_position->_construct)){
							HX_STACK_LINE(595)
							_position->y;
						}
						else{
							HX_STACK_LINE(595)
							if (((bool((_position->listen_y != null())) && bool(!(_position->ignore_listeners))))){
								HX_STACK_LINE(595)
								_position->listen_y(_y);
							}
							HX_STACK_LINE(595)
							_position->y;
						}
					}
					HX_STACK_LINE(595)
					{
						HX_STACK_LINE(595)
						Float _z = te->__get((int)14);		HX_STACK_VAR(_z,"_z");
						HX_STACK_LINE(595)
						_position->z = _z;
						HX_STACK_LINE(595)
						if ((_position->_construct)){
							HX_STACK_LINE(595)
							_position->z;
						}
						else{
							HX_STACK_LINE(595)
							if (((bool((_position->listen_z != null())) && bool(!(_position->ignore_listeners))))){
								HX_STACK_LINE(595)
								_position->listen_z(_z);
							}
							HX_STACK_LINE(595)
							_position->z;
						}
					}
				}
				HX_STACK_LINE(595)
				if (((_scale == null()))){
					HX_STACK_LINE(595)
					::phoenix::Vector _g2 = ::phoenix::Vector_obj::__new(_ax_length,_ay_length,_az_length,null());		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(595)
					_scale = _g2;
				}
				else{
					HX_STACK_LINE(595)
					{
						HX_STACK_LINE(595)
						_scale->x = _ax_length;
						HX_STACK_LINE(595)
						if ((_scale->_construct)){
							HX_STACK_LINE(595)
							_scale->x;
						}
						else{
							HX_STACK_LINE(595)
							if (((bool((_scale->listen_x != null())) && bool(!(_scale->ignore_listeners))))){
								HX_STACK_LINE(595)
								_scale->listen_x(_ax_length);
							}
							HX_STACK_LINE(595)
							_scale->x;
						}
					}
					HX_STACK_LINE(595)
					{
						HX_STACK_LINE(595)
						_scale->y = _ay_length;
						HX_STACK_LINE(595)
						if ((_scale->_construct)){
							HX_STACK_LINE(595)
							_scale->y;
						}
						else{
							HX_STACK_LINE(595)
							if (((bool((_scale->listen_y != null())) && bool(!(_scale->ignore_listeners))))){
								HX_STACK_LINE(595)
								_scale->listen_y(_ay_length);
							}
							HX_STACK_LINE(595)
							_scale->y;
						}
					}
					HX_STACK_LINE(595)
					{
						HX_STACK_LINE(595)
						_scale->z = _az_length;
						HX_STACK_LINE(595)
						if ((_scale->_construct)){
							HX_STACK_LINE(595)
							_scale->z;
						}
						else{
							HX_STACK_LINE(595)
							if (((bool((_scale->listen_z != null())) && bool(!(_scale->ignore_listeners))))){
								HX_STACK_LINE(595)
								_scale->listen_z(_az_length);
							}
							HX_STACK_LINE(595)
							_scale->z;
						}
					}
				}
				HX_STACK_LINE(595)
				Array< Float > _g3 = _this->elements->concat(Array_obj< Float >::__new());		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(595)
				matrix->elements = _g3;
				HX_STACK_LINE(595)
				Array< Float > me = matrix->elements;		HX_STACK_VAR(me,"me");
				HX_STACK_LINE(595)
				hx::DivEq(me[(int)0],_ax_length);
				HX_STACK_LINE(595)
				hx::DivEq(me[(int)1],_ax_length);
				HX_STACK_LINE(595)
				hx::DivEq(me[(int)2],_ax_length);
				HX_STACK_LINE(595)
				hx::DivEq(me[(int)4],_ay_length);
				HX_STACK_LINE(595)
				hx::DivEq(me[(int)5],_ay_length);
				HX_STACK_LINE(595)
				hx::DivEq(me[(int)6],_ay_length);
				HX_STACK_LINE(595)
				hx::DivEq(me[(int)8],_az_length);
				HX_STACK_LINE(595)
				hx::DivEq(me[(int)9],_az_length);
				HX_STACK_LINE(595)
				hx::DivEq(me[(int)10],_az_length);
				HX_STACK_LINE(595)
				_quaternion->setFromRotationMatrix(matrix);
				HX_STACK_LINE(595)
				if (((_this->_transform == null()))){
					HX_STACK_LINE(595)
					::phoenix::MatrixTransform _g4 = ::phoenix::MatrixTransform_obj::__new(_position,_quaternion,_scale);		HX_STACK_VAR(_g4,"_g4");
					HX_STACK_LINE(595)
					_this->_transform = _g4;
				}
				else{
					HX_STACK_LINE(595)
					_this->_transform->pos = _position;
					HX_STACK_LINE(595)
					_this->_transform->rotation = _quaternion;
					HX_STACK_LINE(595)
					_this->_transform->scale = _scale;
				}
				HX_STACK_LINE(595)
				_transform = _this->_transform;
			}
			HX_STACK_LINE(597)
			{
				HX_STACK_LINE(597)
				::phoenix::Vector _p = _transform->pos;		HX_STACK_VAR(_p,"_p");
				HX_STACK_LINE(597)
				this->pos = _p;
				HX_STACK_LINE(597)
				if (((_p != null()))){
					HX_STACK_LINE(597)
					::phoenix::Vector_obj::Listen(this->pos,this->_pos_change_dyn());
					HX_STACK_LINE(597)
					if (((bool((this->pos_changed_dyn() != null())) && bool(!(this->ignore_listeners))))){
						HX_STACK_LINE(597)
						this->pos_changed(this->pos);
					}
				}
				HX_STACK_LINE(597)
				this->pos;
			}
			HX_STACK_LINE(598)
			{
				HX_STACK_LINE(598)
				::phoenix::Quaternion _r = _transform->rotation;		HX_STACK_VAR(_r,"_r");
				HX_STACK_LINE(598)
				this->rotation = _r;
				HX_STACK_LINE(598)
				if (((_r != null()))){
					HX_STACK_LINE(598)
					{
						HX_STACK_LINE(598)
						::phoenix::Quaternion _q = this->rotation;		HX_STACK_VAR(_q,"_q");
						HX_STACK_LINE(598)
						Dynamic listener = this->_rotation_change_dyn();		HX_STACK_VAR(listener,"listener");
						HX_STACK_LINE(598)
						_q->listen_x = listener;
						HX_STACK_LINE(598)
						_q->listen_y = listener;
						HX_STACK_LINE(598)
						_q->listen_z = listener;
						HX_STACK_LINE(598)
						_q->listen_w = listener;
					}
					HX_STACK_LINE(598)
					if (((bool((this->rotation_changed_dyn() != null())) && bool(!(this->ignore_listeners))))){
						HX_STACK_LINE(598)
						this->rotation_changed(this->rotation);
					}
				}
				HX_STACK_LINE(598)
				this->rotation;
			}
			HX_STACK_LINE(599)
			{
				HX_STACK_LINE(599)
				::phoenix::Vector _s = _transform->scale;		HX_STACK_VAR(_s,"_s");
				HX_STACK_LINE(599)
				this->scale = _s;
				HX_STACK_LINE(599)
				if (((_s != null()))){
					HX_STACK_LINE(599)
					::phoenix::Vector_obj::Listen(this->scale,this->_scale_change_dyn());
					HX_STACK_LINE(599)
					if (((bool((this->scale_changed_dyn() != null())) && bool(!(this->ignore_listeners))))){
						HX_STACK_LINE(599)
						this->scale_changed(this->scale);
					}
				}
				HX_STACK_LINE(599)
				this->scale;
			}
		}
		HX_STACK_LINE(603)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC1(Spatial_obj,decompose,return )

::phoenix::Matrix Spatial_obj::get_matrix( ){
	HX_STACK_FRAME("phoenix.Spatial","get_matrix",0x73a8ef13,"phoenix.Spatial.get_matrix","phoenix/Transform.hx",609,0x44da8ab2)
	HX_STACK_THIS(this)
	HX_STACK_LINE(609)
	return this->matrix;
}


HX_DEFINE_DYNAMIC_FUNC0(Spatial_obj,get_matrix,return )

::phoenix::Matrix Spatial_obj::set_matrix( ::phoenix::Matrix _m){
	HX_STACK_FRAME("phoenix.Spatial","set_matrix",0x77268d87,"phoenix.Spatial.set_matrix","phoenix/Transform.hx",613,0x44da8ab2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_m,"_m")
	HX_STACK_LINE(615)
	this->matrix = _m;
	HX_STACK_LINE(618)
	if (((_m != null()))){
		HX_STACK_LINE(619)
		::snow::platform::native::utils::Float32Array _g;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(619)
		{
			HX_STACK_LINE(619)
			::phoenix::Matrix _this = this->matrix;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(619)
			{
				HX_STACK_LINE(619)
				::snow::platform::native::utils::Float32Array _this1 = _this->_float32array;		HX_STACK_VAR(_this1,"_this1");
				HX_STACK_LINE(619)
				Dynamic bufferOrArray = _this->elements;		HX_STACK_VAR(bufferOrArray,"bufferOrArray");
				HX_STACK_LINE(619)
				int offset = (int)0;		HX_STACK_VAR(offset,"offset");
				HX_STACK_LINE(619)
				if ((::Std_obj::is(bufferOrArray,hx::ClassOf< Array<int> >()))){
					HX_STACK_LINE(619)
					Array< Float > floats = bufferOrArray;		HX_STACK_VAR(floats,"floats");
					HX_STACK_LINE(619)
					{
						HX_STACK_LINE(619)
						int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(619)
						int _g2 = floats->length;		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(619)
						while((true)){
							HX_STACK_LINE(619)
							if ((!(((_g1 < _g2))))){
								HX_STACK_LINE(619)
								break;
							}
							HX_STACK_LINE(619)
							int i = (_g1)++;		HX_STACK_VAR(i,"i");
							HX_STACK_LINE(619)
							::__hxcpp_memory_set_float(_this1->bytes,(((int((i + offset)) << int((int)2))) + _this1->byteOffset),floats->__get(i));
						}
					}
				}
				else{
					HX_STACK_LINE(619)
					if ((::Std_obj::is(bufferOrArray,hx::ClassOf< ::snow::platform::native::utils::Float32Array >()))){
						HX_STACK_LINE(619)
						::snow::platform::native::utils::Float32Array floats = bufferOrArray;		HX_STACK_VAR(floats,"floats");
						HX_STACK_LINE(619)
						{
							HX_STACK_LINE(619)
							int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
							HX_STACK_LINE(619)
							int _g2 = floats->length;		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(619)
							while((true)){
								HX_STACK_LINE(619)
								if ((!(((_g1 < _g2))))){
									HX_STACK_LINE(619)
									break;
								}
								HX_STACK_LINE(619)
								int i = (_g1)++;		HX_STACK_VAR(i,"i");
								HX_STACK_LINE(619)
								::__hxcpp_memory_set_float(_this1->bytes,(((int((i + offset)) << int((int)2))) + _this1->byteOffset),floats->__get(i));
							}
						}
					}
					else{
						HX_STACK_LINE(619)
						HX_STACK_DO_THROW(HX_CSTRING("Invalid input buffer"));
					}
				}
			}
			HX_STACK_LINE(619)
			_g = ::snow::platform::native::utils::Float32Array_obj::__new(_this->_float32array,null(),null());
		}
		HX_STACK_LINE(619)
		this->floats = _g;
	}
	HX_STACK_LINE(622)
	return this->matrix;
}


HX_DEFINE_DYNAMIC_FUNC1(Spatial_obj,set_matrix,return )

Void Spatial_obj::propagate_pos( ::phoenix::Vector _p){
{
		HX_STACK_FRAME("phoenix.Spatial","propagate_pos",0x23adb615,"phoenix.Spatial.propagate_pos","phoenix/Transform.hx",627,0x44da8ab2)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_p,"_p")
		HX_STACK_LINE(627)
		if (((bool((this->pos_changed_dyn() != null())) && bool(!(this->ignore_listeners))))){
			HX_STACK_LINE(628)
			this->pos_changed(_p);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Spatial_obj,propagate_pos,(void))

Void Spatial_obj::propagate_rotation( ::phoenix::Quaternion _r){
{
		HX_STACK_FRAME("phoenix.Spatial","propagate_rotation",0xc1f8711d,"phoenix.Spatial.propagate_rotation","phoenix/Transform.hx",633,0x44da8ab2)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_r,"_r")
		HX_STACK_LINE(633)
		if (((bool((this->rotation_changed_dyn() != null())) && bool(!(this->ignore_listeners))))){
			HX_STACK_LINE(634)
			this->rotation_changed(_r);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Spatial_obj,propagate_rotation,(void))

Void Spatial_obj::propagate_scale( ::phoenix::Vector _s){
{
		HX_STACK_FRAME("phoenix.Spatial","propagate_scale",0x654f094b,"phoenix.Spatial.propagate_scale","phoenix/Transform.hx",639,0x44da8ab2)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_s,"_s")
		HX_STACK_LINE(639)
		if (((bool((this->scale_changed_dyn() != null())) && bool(!(this->ignore_listeners))))){
			HX_STACK_LINE(640)
			this->scale_changed(_s);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Spatial_obj,propagate_scale,(void))

::phoenix::Vector Spatial_obj::set_pos( ::phoenix::Vector _p){
	HX_STACK_FRAME("phoenix.Spatial","set_pos",0x70d65e8e,"phoenix.Spatial.set_pos","phoenix/Transform.hx",644,0x44da8ab2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_p,"_p")
	HX_STACK_LINE(646)
	this->pos = _p;
	HX_STACK_LINE(648)
	if (((_p != null()))){
		HX_STACK_LINE(650)
		::phoenix::Vector_obj::Listen(this->pos,this->_pos_change_dyn());
		HX_STACK_LINE(652)
		if (((bool((this->pos_changed_dyn() != null())) && bool(!(this->ignore_listeners))))){
			HX_STACK_LINE(652)
			this->pos_changed(this->pos);
		}
	}
	HX_STACK_LINE(656)
	return this->pos;
}


HX_DEFINE_DYNAMIC_FUNC1(Spatial_obj,set_pos,return )

::phoenix::Quaternion Spatial_obj::set_rotation( ::phoenix::Quaternion _r){
	HX_STACK_FRAME("phoenix.Spatial","set_rotation",0x199d7204,"phoenix.Spatial.set_rotation","phoenix/Transform.hx",660,0x44da8ab2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_r,"_r")
	HX_STACK_LINE(662)
	this->rotation = _r;
	HX_STACK_LINE(664)
	if (((_r != null()))){
		HX_STACK_LINE(666)
		{
			HX_STACK_LINE(666)
			::phoenix::Quaternion _q = this->rotation;		HX_STACK_VAR(_q,"_q");
			HX_STACK_LINE(666)
			Dynamic listener = this->_rotation_change_dyn();		HX_STACK_VAR(listener,"listener");
			HX_STACK_LINE(666)
			_q->listen_x = listener;
			HX_STACK_LINE(666)
			_q->listen_y = listener;
			HX_STACK_LINE(666)
			_q->listen_z = listener;
			HX_STACK_LINE(666)
			_q->listen_w = listener;
		}
		HX_STACK_LINE(668)
		if (((bool((this->rotation_changed_dyn() != null())) && bool(!(this->ignore_listeners))))){
			HX_STACK_LINE(668)
			this->rotation_changed(this->rotation);
		}
	}
	HX_STACK_LINE(672)
	return this->rotation;
}


HX_DEFINE_DYNAMIC_FUNC1(Spatial_obj,set_rotation,return )

::phoenix::Vector Spatial_obj::set_scale( ::phoenix::Vector _s){
	HX_STACK_FRAME("phoenix.Spatial","set_scale",0xcc4d8204,"phoenix.Spatial.set_scale","phoenix/Transform.hx",676,0x44da8ab2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_s,"_s")
	HX_STACK_LINE(678)
	this->scale = _s;
	HX_STACK_LINE(680)
	if (((_s != null()))){
		HX_STACK_LINE(682)
		::phoenix::Vector_obj::Listen(this->scale,this->_scale_change_dyn());
		HX_STACK_LINE(684)
		if (((bool((this->scale_changed_dyn() != null())) && bool(!(this->ignore_listeners))))){
			HX_STACK_LINE(684)
			this->scale_changed(this->scale);
		}
	}
	HX_STACK_LINE(688)
	return this->scale;
}


HX_DEFINE_DYNAMIC_FUNC1(Spatial_obj,set_scale,return )

Void Spatial_obj::_pos_change( Float _v){
{
		HX_STACK_FRAME("phoenix.Spatial","_pos_change",0xe8244bf1,"phoenix.Spatial._pos_change","phoenix/Transform.hx",695,0x44da8ab2)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_v,"_v")
		HX_STACK_LINE(695)
		this->set_pos(this->pos);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Spatial_obj,_pos_change,(void))

Void Spatial_obj::_scale_change( Float _v){
{
		HX_STACK_FRAME("phoenix.Spatial","_scale_change",0xaf1def3b,"phoenix.Spatial._scale_change","phoenix/Transform.hx",697,0x44da8ab2)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_v,"_v")
		HX_STACK_LINE(697)
		this->set_scale(this->scale);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Spatial_obj,_scale_change,(void))

Void Spatial_obj::_rotation_change( Float _v){
{
		HX_STACK_FRAME("phoenix.Spatial","_rotation_change",0x09a321db,"phoenix.Spatial._rotation_change","phoenix/Transform.hx",699,0x44da8ab2)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_v,"_v")
		HX_STACK_LINE(699)
		this->set_rotation(this->rotation);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Spatial_obj,_rotation_change,(void))


Spatial_obj::Spatial_obj()
{
}

void Spatial_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Spatial);
	HX_MARK_MEMBER_NAME(pos,"pos");
	HX_MARK_MEMBER_NAME(rotation,"rotation");
	HX_MARK_MEMBER_NAME(scale,"scale");
	HX_MARK_MEMBER_NAME(matrix,"matrix");
	HX_MARK_MEMBER_NAME(floats,"floats");
	HX_MARK_MEMBER_NAME(ignore_listeners,"ignore_listeners");
	HX_MARK_MEMBER_NAME(auto_decompose,"auto_decompose");
	HX_MARK_MEMBER_NAME(pos_changed,"pos_changed");
	HX_MARK_MEMBER_NAME(rotation_changed,"rotation_changed");
	HX_MARK_MEMBER_NAME(scale_changed,"scale_changed");
	HX_MARK_MEMBER_NAME(_setup,"_setup");
	HX_MARK_END_CLASS();
}

void Spatial_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(pos,"pos");
	HX_VISIT_MEMBER_NAME(rotation,"rotation");
	HX_VISIT_MEMBER_NAME(scale,"scale");
	HX_VISIT_MEMBER_NAME(matrix,"matrix");
	HX_VISIT_MEMBER_NAME(floats,"floats");
	HX_VISIT_MEMBER_NAME(ignore_listeners,"ignore_listeners");
	HX_VISIT_MEMBER_NAME(auto_decompose,"auto_decompose");
	HX_VISIT_MEMBER_NAME(pos_changed,"pos_changed");
	HX_VISIT_MEMBER_NAME(rotation_changed,"rotation_changed");
	HX_VISIT_MEMBER_NAME(scale_changed,"scale_changed");
	HX_VISIT_MEMBER_NAME(_setup,"_setup");
}

Dynamic Spatial_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"pos") ) { return pos; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"scale") ) { return scale; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"matrix") ) { return inCallProp ? get_matrix() : matrix; }
		if (HX_FIELD_EQ(inName,"floats") ) { return floats; }
		if (HX_FIELD_EQ(inName,"_setup") ) { return _setup; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"set_pos") ) { return set_pos_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"rotation") ) { return rotation; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"decompose") ) { return decompose_dyn(); }
		if (HX_FIELD_EQ(inName,"set_scale") ) { return set_scale_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_matrix") ) { return get_matrix_dyn(); }
		if (HX_FIELD_EQ(inName,"set_matrix") ) { return set_matrix_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"pos_changed") ) { return pos_changed; }
		if (HX_FIELD_EQ(inName,"_pos_change") ) { return _pos_change_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"set_rotation") ) { return set_rotation_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"scale_changed") ) { return scale_changed; }
		if (HX_FIELD_EQ(inName,"propagate_pos") ) { return propagate_pos_dyn(); }
		if (HX_FIELD_EQ(inName,"_scale_change") ) { return _scale_change_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"auto_decompose") ) { return auto_decompose; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"propagate_scale") ) { return propagate_scale_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"ignore_listeners") ) { return ignore_listeners; }
		if (HX_FIELD_EQ(inName,"rotation_changed") ) { return rotation_changed; }
		if (HX_FIELD_EQ(inName,"_rotation_change") ) { return _rotation_change_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"propagate_rotation") ) { return propagate_rotation_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Spatial_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"pos") ) { if (inCallProp) return set_pos(inValue);pos=inValue.Cast< ::phoenix::Vector >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"scale") ) { if (inCallProp) return set_scale(inValue);scale=inValue.Cast< ::phoenix::Vector >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"matrix") ) { if (inCallProp) return set_matrix(inValue);matrix=inValue.Cast< ::phoenix::Matrix >(); return inValue; }
		if (HX_FIELD_EQ(inName,"floats") ) { floats=inValue.Cast< ::snow::platform::native::utils::Float32Array >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_setup") ) { _setup=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"rotation") ) { if (inCallProp) return set_rotation(inValue);rotation=inValue.Cast< ::phoenix::Quaternion >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"pos_changed") ) { pos_changed=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"scale_changed") ) { scale_changed=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"auto_decompose") ) { auto_decompose=inValue.Cast< bool >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"ignore_listeners") ) { ignore_listeners=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"rotation_changed") ) { rotation_changed=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Spatial_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("pos"));
	outFields->push(HX_CSTRING("rotation"));
	outFields->push(HX_CSTRING("scale"));
	outFields->push(HX_CSTRING("matrix"));
	outFields->push(HX_CSTRING("floats"));
	outFields->push(HX_CSTRING("ignore_listeners"));
	outFields->push(HX_CSTRING("auto_decompose"));
	outFields->push(HX_CSTRING("_setup"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::phoenix::Vector*/ ,(int)offsetof(Spatial_obj,pos),HX_CSTRING("pos")},
	{hx::fsObject /*::phoenix::Quaternion*/ ,(int)offsetof(Spatial_obj,rotation),HX_CSTRING("rotation")},
	{hx::fsObject /*::phoenix::Vector*/ ,(int)offsetof(Spatial_obj,scale),HX_CSTRING("scale")},
	{hx::fsObject /*::phoenix::Matrix*/ ,(int)offsetof(Spatial_obj,matrix),HX_CSTRING("matrix")},
	{hx::fsObject /*::snow::platform::native::utils::Float32Array*/ ,(int)offsetof(Spatial_obj,floats),HX_CSTRING("floats")},
	{hx::fsBool,(int)offsetof(Spatial_obj,ignore_listeners),HX_CSTRING("ignore_listeners")},
	{hx::fsBool,(int)offsetof(Spatial_obj,auto_decompose),HX_CSTRING("auto_decompose")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Spatial_obj,pos_changed),HX_CSTRING("pos_changed")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Spatial_obj,rotation_changed),HX_CSTRING("rotation_changed")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Spatial_obj,scale_changed),HX_CSTRING("scale_changed")},
	{hx::fsBool,(int)offsetof(Spatial_obj,_setup),HX_CSTRING("_setup")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("pos"),
	HX_CSTRING("rotation"),
	HX_CSTRING("scale"),
	HX_CSTRING("matrix"),
	HX_CSTRING("floats"),
	HX_CSTRING("ignore_listeners"),
	HX_CSTRING("auto_decompose"),
	HX_CSTRING("pos_changed"),
	HX_CSTRING("rotation_changed"),
	HX_CSTRING("scale_changed"),
	HX_CSTRING("_setup"),
	HX_CSTRING("destroy"),
	HX_CSTRING("decompose"),
	HX_CSTRING("get_matrix"),
	HX_CSTRING("set_matrix"),
	HX_CSTRING("propagate_pos"),
	HX_CSTRING("propagate_rotation"),
	HX_CSTRING("propagate_scale"),
	HX_CSTRING("set_pos"),
	HX_CSTRING("set_rotation"),
	HX_CSTRING("set_scale"),
	HX_CSTRING("_pos_change"),
	HX_CSTRING("_scale_change"),
	HX_CSTRING("_rotation_change"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Spatial_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Spatial_obj::__mClass,"__mClass");
};

#endif

Class Spatial_obj::__mClass;

void Spatial_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("phoenix.Spatial"), hx::TCanCast< Spatial_obj> ,sStaticFields,sMemberFields,
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

void Spatial_obj::__boot()
{
}

} // end namespace phoenix
