#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_luxe_ID
#include <luxe/ID.h>
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

Void Transform_obj::__construct()
{
HX_STACK_FRAME("phoenix.Transform","new",0x37b5fb1f,"phoenix.Transform.new","phoenix/Transform.hx",11,0x44da8ab2)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(65)
	this->_destroying = false;
	HX_STACK_LINE(31)
	this->_cleaning = false;
	HX_STACK_LINE(30)
	this->_setup = true;
	HX_STACK_LINE(20)
	this->dirty = true;
	HX_STACK_LINE(44)
	super::__construct(HX_CSTRING("transform"),null());
	HX_STACK_LINE(46)
	{
		HX_STACK_LINE(46)
		::phoenix::Spatial l = ::phoenix::Spatial_obj::__new();		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(46)
		if (((l != null()))){
			HX_STACK_LINE(46)
			{
				HX_STACK_LINE(46)
				this->dirty = true;
				HX_STACK_LINE(46)
				if (((bool((bool((bool(this->dirty) && bool(!(this->_setup)))) && bool((this->_dirty_handlers != null())))) && bool((this->_dirty_handlers->__Field(HX_CSTRING("length"),true) > (int)0))))){
					HX_STACK_LINE(46)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(46)
					Dynamic _g1 = this->_dirty_handlers;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(46)
					while((true)){
						HX_STACK_LINE(46)
						if ((!(((_g < _g1->__Field(HX_CSTRING("length"),true)))))){
							HX_STACK_LINE(46)
							break;
						}
						HX_STACK_LINE(46)
						Dynamic _handler = _g1->__GetItem(_g);		HX_STACK_VAR(_handler,"_handler");
						HX_STACK_LINE(46)
						++(_g);
						HX_STACK_LINE(46)
						if (((_handler != null()))){
							HX_STACK_LINE(46)
							_handler(hx::ObjectPtr<OBJ_>(this)).Cast< Void >();
						}
					}
				}
				HX_STACK_LINE(46)
				this->dirty;
			}
			HX_STACK_LINE(46)
			l->pos_changed = this->on_local_pos_change_dyn();
			HX_STACK_LINE(46)
			l->rotation_changed = this->on_local_rotation_change_dyn();
			HX_STACK_LINE(46)
			l->scale_changed = this->on_local_scale_change_dyn();
		}
		HX_STACK_LINE(46)
		this->local = l;
	}
	HX_STACK_LINE(47)
	{
		HX_STACK_LINE(47)
		::phoenix::Spatial w = ::phoenix::Spatial_obj::__new();		HX_STACK_VAR(w,"w");
		HX_STACK_LINE(47)
		if (((w == null()))){
			HX_STACK_LINE(47)
			this->world = w;
		}
		else{
			HX_STACK_LINE(47)
			{
				HX_STACK_LINE(47)
				this->dirty = true;
				HX_STACK_LINE(47)
				if (((bool((bool((bool(this->dirty) && bool(!(this->_setup)))) && bool((this->_dirty_handlers != null())))) && bool((this->_dirty_handlers->__Field(HX_CSTRING("length"),true) > (int)0))))){
					HX_STACK_LINE(47)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(47)
					Dynamic _g1 = this->_dirty_handlers;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(47)
					while((true)){
						HX_STACK_LINE(47)
						if ((!(((_g < _g1->__Field(HX_CSTRING("length"),true)))))){
							HX_STACK_LINE(47)
							break;
						}
						HX_STACK_LINE(47)
						Dynamic _handler = _g1->__GetItem(_g);		HX_STACK_VAR(_handler,"_handler");
						HX_STACK_LINE(47)
						++(_g);
						HX_STACK_LINE(47)
						if (((_handler != null()))){
							HX_STACK_LINE(47)
							_handler(hx::ObjectPtr<OBJ_>(this)).Cast< Void >();
						}
					}
				}
				HX_STACK_LINE(47)
				this->dirty;
			}
			HX_STACK_LINE(47)
			this->world = w;
		}
	}
	HX_STACK_LINE(49)
	::phoenix::Matrix _g = ::phoenix::Matrix_obj::__new(null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(49)
	this->_origin_undo_matrix = _g;
	HX_STACK_LINE(50)
	::phoenix::Matrix _g1 = ::phoenix::Matrix_obj::__new(null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(50)
	this->_pos_matrix = _g1;
	HX_STACK_LINE(51)
	::phoenix::Matrix _g2 = ::phoenix::Matrix_obj::__new(null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(51)
	this->_rotation_matrix = _g2;
	HX_STACK_LINE(53)
	{
		HX_STACK_LINE(53)
		::phoenix::Vector o = ::phoenix::Vector_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(o,"o");
		HX_STACK_LINE(53)
		{
			HX_STACK_LINE(53)
			this->dirty = true;
			HX_STACK_LINE(53)
			if (((bool((bool((bool(this->dirty) && bool(!(this->_setup)))) && bool((this->_dirty_handlers != null())))) && bool((this->_dirty_handlers->__Field(HX_CSTRING("length"),true) > (int)0))))){
				HX_STACK_LINE(53)
				int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(53)
				Dynamic _g11 = this->_dirty_handlers;		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(53)
				while((true)){
					HX_STACK_LINE(53)
					if ((!(((_g3 < _g11->__Field(HX_CSTRING("length"),true)))))){
						HX_STACK_LINE(53)
						break;
					}
					HX_STACK_LINE(53)
					Dynamic _handler = _g11->__GetItem(_g3);		HX_STACK_VAR(_handler,"_handler");
					HX_STACK_LINE(53)
					++(_g3);
					HX_STACK_LINE(53)
					if (((_handler != null()))){
						HX_STACK_LINE(53)
						_handler(hx::ObjectPtr<OBJ_>(this)).Cast< Void >();
					}
				}
			}
			HX_STACK_LINE(53)
			this->dirty;
		}
		HX_STACK_LINE(53)
		this->origin = o;
		HX_STACK_LINE(53)
		if (((bool((this->_origin_handlers != null())) && bool((this->_origin_handlers->__Field(HX_CSTRING("length"),true) > (int)0))))){
			HX_STACK_LINE(53)
			::phoenix::Vector _origin = this->origin;		HX_STACK_VAR(_origin,"_origin");
			HX_STACK_LINE(53)
			{
				HX_STACK_LINE(53)
				int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(53)
				Dynamic _g11 = this->_origin_handlers;		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(53)
				while((true)){
					HX_STACK_LINE(53)
					if ((!(((_g3 < _g11->__Field(HX_CSTRING("length"),true)))))){
						HX_STACK_LINE(53)
						break;
					}
					HX_STACK_LINE(53)
					Dynamic _handler = _g11->__GetItem(_g3);		HX_STACK_VAR(_handler,"_handler");
					HX_STACK_LINE(53)
					++(_g3);
					HX_STACK_LINE(53)
					if (((_handler != null()))){
						HX_STACK_LINE(53)
						_handler(_origin).Cast< Void >();
					}
				}
			}
		}
		HX_STACK_LINE(53)
		this->origin;
	}
	HX_STACK_LINE(56)
	this->local->pos_changed = this->on_local_pos_change_dyn();
	HX_STACK_LINE(57)
	this->local->rotation_changed = this->on_local_rotation_change_dyn();
	HX_STACK_LINE(58)
	this->local->scale_changed = this->on_local_scale_change_dyn();
	HX_STACK_LINE(60)
	this->_setup = false;
}
;
	return null();
}

//Transform_obj::~Transform_obj() { }

Dynamic Transform_obj::__CreateEmpty() { return  new Transform_obj; }
hx::ObjectPtr< Transform_obj > Transform_obj::__new()
{  hx::ObjectPtr< Transform_obj > result = new Transform_obj();
	result->__construct();
	return result;}

Dynamic Transform_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Transform_obj > result = new Transform_obj();
	result->__construct();
	return result;}

Void Transform_obj::destroy( ){
{
		HX_STACK_FRAME("phoenix.Transform","destroy",0x82ce2339,"phoenix.Transform.destroy","phoenix/Transform.hx",67,0x44da8ab2)
		HX_STACK_THIS(this)
		HX_STACK_LINE(69)
		this->_destroying = true;
		HX_STACK_LINE(72)
		if (((this->parent != null()))){
			HX_STACK_LINE(73)
			::phoenix::Transform _this = this->parent;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(73)
			if (((_this->_clean_handlers == null()))){
				HX_STACK_LINE(73)
				false;
			}
			else{
				HX_STACK_LINE(73)
				_this->_clean_handlers->__Field(HX_CSTRING("remove"),true)(this->on_parent_cleaned_dyn());
			}
		}
		HX_STACK_LINE(77)
		this->_clean_handlers = null();
		HX_STACK_LINE(78)
		this->_dirty_handlers = null();
		HX_STACK_LINE(79)
		this->_pos_handlers = null();
		HX_STACK_LINE(80)
		this->_rotation_handlers = null();
		HX_STACK_LINE(81)
		this->_scale_handlers = null();
		HX_STACK_LINE(82)
		this->_origin_handlers = null();
		HX_STACK_LINE(83)
		this->_parent_handlers = null();
		HX_STACK_LINE(86)
		{
			HX_STACK_LINE(86)
			::phoenix::Spatial _this = this->local;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(86)
			{
				HX_STACK_LINE(86)
				_this->matrix = null();
				HX_STACK_LINE(86)
				_this->matrix;
			}
			HX_STACK_LINE(86)
			_this->floats = null();
			HX_STACK_LINE(86)
			{
				HX_STACK_LINE(86)
				_this->pos = null();
				HX_STACK_LINE(86)
				_this->pos;
			}
			HX_STACK_LINE(86)
			{
				HX_STACK_LINE(86)
				_this->rotation = null();
				HX_STACK_LINE(86)
				_this->rotation;
			}
			HX_STACK_LINE(86)
			{
				HX_STACK_LINE(86)
				_this->scale = null();
				HX_STACK_LINE(86)
				_this->scale;
			}
		}
		HX_STACK_LINE(87)
		{
			HX_STACK_LINE(87)
			::phoenix::Spatial _this;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(87)
			{
				HX_STACK_LINE(87)
				if ((!(this->_destroying))){
					HX_STACK_LINE(87)
					if (((this->parent != null()))){
						HX_STACK_LINE(87)
						if ((this->parent->dirty)){
							HX_STACK_LINE(87)
							::phoenix::Transform _this1 = this->parent;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(87)
							if ((!(_this1->dirty))){
								HX_STACK_LINE(87)
								Dynamic();
							}
							else{
								HX_STACK_LINE(87)
								_this1->_cleaning = true;
								HX_STACK_LINE(87)
								{
									HX_STACK_LINE(87)
									::phoenix::Matrix _this2 = _this1->_pos_matrix;		HX_STACK_VAR(_this2,"_this2");
									HX_STACK_LINE(87)
									{
										HX_STACK_LINE(87)
										Array< Float > e = _this2->elements;		HX_STACK_VAR(e,"e");
										HX_STACK_LINE(87)
										e[(int)0] = (int)1;
										HX_STACK_LINE(87)
										e[(int)4] = (int)0;
										HX_STACK_LINE(87)
										e[(int)8] = (int)0;
										HX_STACK_LINE(87)
										e[(int)12] = _this1->local->pos->x;
										HX_STACK_LINE(87)
										e[(int)1] = (int)0;
										HX_STACK_LINE(87)
										e[(int)5] = (int)1;
										HX_STACK_LINE(87)
										e[(int)9] = (int)0;
										HX_STACK_LINE(87)
										e[(int)13] = _this1->local->pos->y;
										HX_STACK_LINE(87)
										e[(int)2] = (int)0;
										HX_STACK_LINE(87)
										e[(int)6] = (int)0;
										HX_STACK_LINE(87)
										e[(int)10] = (int)1;
										HX_STACK_LINE(87)
										e[(int)14] = _this1->local->pos->z;
										HX_STACK_LINE(87)
										e[(int)3] = (int)0;
										HX_STACK_LINE(87)
										e[(int)7] = (int)0;
										HX_STACK_LINE(87)
										e[(int)11] = (int)0;
										HX_STACK_LINE(87)
										e[(int)15] = (int)1;
										HX_STACK_LINE(87)
										_this2;
									}
									HX_STACK_LINE(87)
									_this2;
								}
								HX_STACK_LINE(87)
								{
									HX_STACK_LINE(87)
									::phoenix::Matrix _this2 = _this1->_rotation_matrix;		HX_STACK_VAR(_this2,"_this2");
									HX_STACK_LINE(87)
									::phoenix::Quaternion q = _this1->local->rotation;		HX_STACK_VAR(q,"q");
									HX_STACK_LINE(87)
									Array< Float > te = _this2->elements;		HX_STACK_VAR(te,"te");
									HX_STACK_LINE(87)
									Float x2 = (q->x + q->x);		HX_STACK_VAR(x2,"x2");
									HX_STACK_LINE(87)
									Float y2 = (q->y + q->y);		HX_STACK_VAR(y2,"y2");
									HX_STACK_LINE(87)
									Float z2 = (q->z + q->z);		HX_STACK_VAR(z2,"z2");
									HX_STACK_LINE(87)
									Float xx = (q->x * x2);		HX_STACK_VAR(xx,"xx");
									HX_STACK_LINE(87)
									Float xy = (q->x * y2);		HX_STACK_VAR(xy,"xy");
									HX_STACK_LINE(87)
									Float xz = (q->x * z2);		HX_STACK_VAR(xz,"xz");
									HX_STACK_LINE(87)
									Float yy = (q->y * y2);		HX_STACK_VAR(yy,"yy");
									HX_STACK_LINE(87)
									Float yz = (q->y * z2);		HX_STACK_VAR(yz,"yz");
									HX_STACK_LINE(87)
									Float zz = (q->z * z2);		HX_STACK_VAR(zz,"zz");
									HX_STACK_LINE(87)
									Float wx = (q->w * x2);		HX_STACK_VAR(wx,"wx");
									HX_STACK_LINE(87)
									Float wy = (q->w * y2);		HX_STACK_VAR(wy,"wy");
									HX_STACK_LINE(87)
									Float wz = (q->w * z2);		HX_STACK_VAR(wz,"wz");
									HX_STACK_LINE(87)
									te[(int)0] = ((int)1 - ((yy + zz)));
									HX_STACK_LINE(87)
									te[(int)4] = (xy - wz);
									HX_STACK_LINE(87)
									te[(int)8] = (xz + wy);
									HX_STACK_LINE(87)
									te[(int)1] = (xy + wz);
									HX_STACK_LINE(87)
									te[(int)5] = ((int)1 - ((xx + zz)));
									HX_STACK_LINE(87)
									te[(int)9] = (yz - wx);
									HX_STACK_LINE(87)
									te[(int)2] = (xz - wy);
									HX_STACK_LINE(87)
									te[(int)6] = (yz + wx);
									HX_STACK_LINE(87)
									te[(int)10] = ((int)1 - ((xx + yy)));
									HX_STACK_LINE(87)
									te[(int)3] = (int)0;
									HX_STACK_LINE(87)
									te[(int)7] = (int)0;
									HX_STACK_LINE(87)
									te[(int)11] = (int)0;
									HX_STACK_LINE(87)
									te[(int)12] = (int)0;
									HX_STACK_LINE(87)
									te[(int)13] = (int)0;
									HX_STACK_LINE(87)
									te[(int)14] = (int)0;
									HX_STACK_LINE(87)
									te[(int)15] = (int)1;
									HX_STACK_LINE(87)
									_this2;
								}
								HX_STACK_LINE(87)
								{
									HX_STACK_LINE(87)
									::phoenix::Matrix _this2 = _this1->_origin_undo_matrix;		HX_STACK_VAR(_this2,"_this2");
									HX_STACK_LINE(87)
									{
										HX_STACK_LINE(87)
										Array< Float > e = _this2->elements;		HX_STACK_VAR(e,"e");
										HX_STACK_LINE(87)
										e[(int)0] = (int)1;
										HX_STACK_LINE(87)
										e[(int)4] = (int)0;
										HX_STACK_LINE(87)
										e[(int)8] = (int)0;
										HX_STACK_LINE(87)
										e[(int)12] = -(_this1->origin->x);
										HX_STACK_LINE(87)
										e[(int)1] = (int)0;
										HX_STACK_LINE(87)
										e[(int)5] = (int)1;
										HX_STACK_LINE(87)
										e[(int)9] = (int)0;
										HX_STACK_LINE(87)
										e[(int)13] = -(_this1->origin->y);
										HX_STACK_LINE(87)
										e[(int)2] = (int)0;
										HX_STACK_LINE(87)
										e[(int)6] = (int)0;
										HX_STACK_LINE(87)
										e[(int)10] = (int)1;
										HX_STACK_LINE(87)
										e[(int)14] = -(_this1->origin->z);
										HX_STACK_LINE(87)
										e[(int)3] = (int)0;
										HX_STACK_LINE(87)
										e[(int)7] = (int)0;
										HX_STACK_LINE(87)
										e[(int)11] = (int)0;
										HX_STACK_LINE(87)
										e[(int)15] = (int)1;
										HX_STACK_LINE(87)
										_this2;
									}
									HX_STACK_LINE(87)
									_this2;
								}
								HX_STACK_LINE(87)
								{
									HX_STACK_LINE(87)
									::phoenix::Matrix _this2 = _this1->local->matrix;		HX_STACK_VAR(_this2,"_this2");
									HX_STACK_LINE(87)
									{
										HX_STACK_LINE(87)
										Array< Float > e = _this2->elements;		HX_STACK_VAR(e,"e");
										HX_STACK_LINE(87)
										e[(int)0] = (int)1;
										HX_STACK_LINE(87)
										e[(int)4] = (int)0;
										HX_STACK_LINE(87)
										e[(int)8] = (int)0;
										HX_STACK_LINE(87)
										e[(int)12] = _this1->origin->x;
										HX_STACK_LINE(87)
										e[(int)1] = (int)0;
										HX_STACK_LINE(87)
										e[(int)5] = (int)1;
										HX_STACK_LINE(87)
										e[(int)9] = (int)0;
										HX_STACK_LINE(87)
										e[(int)13] = _this1->origin->y;
										HX_STACK_LINE(87)
										e[(int)2] = (int)0;
										HX_STACK_LINE(87)
										e[(int)6] = (int)0;
										HX_STACK_LINE(87)
										e[(int)10] = (int)1;
										HX_STACK_LINE(87)
										e[(int)14] = _this1->origin->z;
										HX_STACK_LINE(87)
										e[(int)3] = (int)0;
										HX_STACK_LINE(87)
										e[(int)7] = (int)0;
										HX_STACK_LINE(87)
										e[(int)11] = (int)0;
										HX_STACK_LINE(87)
										e[(int)15] = (int)1;
										HX_STACK_LINE(87)
										_this2;
									}
									HX_STACK_LINE(87)
									_this2;
								}
								HX_STACK_LINE(87)
								{
									HX_STACK_LINE(87)
									::phoenix::Matrix _this2 = _this1->local->matrix;		HX_STACK_VAR(_this2,"_this2");
									HX_STACK_LINE(87)
									::phoenix::Vector _v = _this1->local->scale;		HX_STACK_VAR(_v,"_v");
									HX_STACK_LINE(87)
									Array< Float > te = _this2->elements;		HX_STACK_VAR(te,"te");
									HX_STACK_LINE(87)
									Float _x = _v->x;		HX_STACK_VAR(_x,"_x");
									HX_STACK_LINE(87)
									Float _y = _v->y;		HX_STACK_VAR(_y,"_y");
									HX_STACK_LINE(87)
									Float _z = _v->z;		HX_STACK_VAR(_z,"_z");
									HX_STACK_LINE(87)
									hx::MultEq(te[(int)0],_x);
									HX_STACK_LINE(87)
									hx::MultEq(te[(int)4],_y);
									HX_STACK_LINE(87)
									hx::MultEq(te[(int)8],_z);
									HX_STACK_LINE(87)
									hx::MultEq(te[(int)1],_x);
									HX_STACK_LINE(87)
									hx::MultEq(te[(int)5],_y);
									HX_STACK_LINE(87)
									hx::MultEq(te[(int)9],_z);
									HX_STACK_LINE(87)
									hx::MultEq(te[(int)2],_x);
									HX_STACK_LINE(87)
									hx::MultEq(te[(int)6],_y);
									HX_STACK_LINE(87)
									hx::MultEq(te[(int)10],_z);
									HX_STACK_LINE(87)
									hx::MultEq(te[(int)3],_x);
									HX_STACK_LINE(87)
									hx::MultEq(te[(int)7],_y);
									HX_STACK_LINE(87)
									hx::MultEq(te[(int)11],_z);
									HX_STACK_LINE(87)
									_this2;
								}
								HX_STACK_LINE(87)
								{
									HX_STACK_LINE(87)
									::phoenix::Matrix _this2 = _this1->local->matrix;		HX_STACK_VAR(_this2,"_this2");
									HX_STACK_LINE(87)
									{
										HX_STACK_LINE(87)
										Array< Float > ae = _this2->elements;		HX_STACK_VAR(ae,"ae");
										HX_STACK_LINE(87)
										Array< Float > be = _this1->_rotation_matrix->elements;		HX_STACK_VAR(be,"be");
										HX_STACK_LINE(87)
										Array< Float > te = _this2->elements;		HX_STACK_VAR(te,"te");
										HX_STACK_LINE(87)
										Float a11 = ae->__get((int)0);		HX_STACK_VAR(a11,"a11");
										HX_STACK_LINE(87)
										Float a12 = ae->__get((int)4);		HX_STACK_VAR(a12,"a12");
										HX_STACK_LINE(87)
										Float a13 = ae->__get((int)8);		HX_STACK_VAR(a13,"a13");
										HX_STACK_LINE(87)
										Float a14 = ae->__get((int)12);		HX_STACK_VAR(a14,"a14");
										HX_STACK_LINE(87)
										Float a21 = ae->__get((int)1);		HX_STACK_VAR(a21,"a21");
										HX_STACK_LINE(87)
										Float a22 = ae->__get((int)5);		HX_STACK_VAR(a22,"a22");
										HX_STACK_LINE(87)
										Float a23 = ae->__get((int)9);		HX_STACK_VAR(a23,"a23");
										HX_STACK_LINE(87)
										Float a24 = ae->__get((int)13);		HX_STACK_VAR(a24,"a24");
										HX_STACK_LINE(87)
										Float a31 = ae->__get((int)2);		HX_STACK_VAR(a31,"a31");
										HX_STACK_LINE(87)
										Float a32 = ae->__get((int)6);		HX_STACK_VAR(a32,"a32");
										HX_STACK_LINE(87)
										Float a33 = ae->__get((int)10);		HX_STACK_VAR(a33,"a33");
										HX_STACK_LINE(87)
										Float a34 = ae->__get((int)14);		HX_STACK_VAR(a34,"a34");
										HX_STACK_LINE(87)
										Float a41 = ae->__get((int)3);		HX_STACK_VAR(a41,"a41");
										HX_STACK_LINE(87)
										Float a42 = ae->__get((int)7);		HX_STACK_VAR(a42,"a42");
										HX_STACK_LINE(87)
										Float a43 = ae->__get((int)11);		HX_STACK_VAR(a43,"a43");
										HX_STACK_LINE(87)
										Float a44 = ae->__get((int)15);		HX_STACK_VAR(a44,"a44");
										HX_STACK_LINE(87)
										Float b11 = be->__get((int)0);		HX_STACK_VAR(b11,"b11");
										HX_STACK_LINE(87)
										Float b12 = be->__get((int)4);		HX_STACK_VAR(b12,"b12");
										HX_STACK_LINE(87)
										Float b13 = be->__get((int)8);		HX_STACK_VAR(b13,"b13");
										HX_STACK_LINE(87)
										Float b14 = be->__get((int)12);		HX_STACK_VAR(b14,"b14");
										HX_STACK_LINE(87)
										Float b21 = be->__get((int)1);		HX_STACK_VAR(b21,"b21");
										HX_STACK_LINE(87)
										Float b22 = be->__get((int)5);		HX_STACK_VAR(b22,"b22");
										HX_STACK_LINE(87)
										Float b23 = be->__get((int)9);		HX_STACK_VAR(b23,"b23");
										HX_STACK_LINE(87)
										Float b24 = be->__get((int)13);		HX_STACK_VAR(b24,"b24");
										HX_STACK_LINE(87)
										Float b31 = be->__get((int)2);		HX_STACK_VAR(b31,"b31");
										HX_STACK_LINE(87)
										Float b32 = be->__get((int)6);		HX_STACK_VAR(b32,"b32");
										HX_STACK_LINE(87)
										Float b33 = be->__get((int)10);		HX_STACK_VAR(b33,"b33");
										HX_STACK_LINE(87)
										Float b34 = be->__get((int)14);		HX_STACK_VAR(b34,"b34");
										HX_STACK_LINE(87)
										Float b41 = be->__get((int)3);		HX_STACK_VAR(b41,"b41");
										HX_STACK_LINE(87)
										Float b42 = be->__get((int)7);		HX_STACK_VAR(b42,"b42");
										HX_STACK_LINE(87)
										Float b43 = be->__get((int)11);		HX_STACK_VAR(b43,"b43");
										HX_STACK_LINE(87)
										Float b44 = be->__get((int)15);		HX_STACK_VAR(b44,"b44");
										HX_STACK_LINE(87)
										te[(int)0] = ((((a11 * b11) + (a12 * b21)) + (a13 * b31)) + (a14 * b41));
										HX_STACK_LINE(87)
										te[(int)4] = ((((a11 * b12) + (a12 * b22)) + (a13 * b32)) + (a14 * b42));
										HX_STACK_LINE(87)
										te[(int)8] = ((((a11 * b13) + (a12 * b23)) + (a13 * b33)) + (a14 * b43));
										HX_STACK_LINE(87)
										te[(int)12] = ((((a11 * b14) + (a12 * b24)) + (a13 * b34)) + (a14 * b44));
										HX_STACK_LINE(87)
										te[(int)1] = ((((a21 * b11) + (a22 * b21)) + (a23 * b31)) + (a24 * b41));
										HX_STACK_LINE(87)
										te[(int)5] = ((((a21 * b12) + (a22 * b22)) + (a23 * b32)) + (a24 * b42));
										HX_STACK_LINE(87)
										te[(int)9] = ((((a21 * b13) + (a22 * b23)) + (a23 * b33)) + (a24 * b43));
										HX_STACK_LINE(87)
										te[(int)13] = ((((a21 * b14) + (a22 * b24)) + (a23 * b34)) + (a24 * b44));
										HX_STACK_LINE(87)
										te[(int)2] = ((((a31 * b11) + (a32 * b21)) + (a33 * b31)) + (a34 * b41));
										HX_STACK_LINE(87)
										te[(int)6] = ((((a31 * b12) + (a32 * b22)) + (a33 * b32)) + (a34 * b42));
										HX_STACK_LINE(87)
										te[(int)10] = ((((a31 * b13) + (a32 * b23)) + (a33 * b33)) + (a34 * b43));
										HX_STACK_LINE(87)
										te[(int)14] = ((((a31 * b14) + (a32 * b24)) + (a33 * b34)) + (a34 * b44));
										HX_STACK_LINE(87)
										te[(int)3] = ((((a41 * b11) + (a42 * b21)) + (a43 * b31)) + (a44 * b41));
										HX_STACK_LINE(87)
										te[(int)7] = ((((a41 * b12) + (a42 * b22)) + (a43 * b32)) + (a44 * b42));
										HX_STACK_LINE(87)
										te[(int)11] = ((((a41 * b13) + (a42 * b23)) + (a43 * b33)) + (a44 * b43));
										HX_STACK_LINE(87)
										te[(int)15] = ((((a41 * b14) + (a42 * b24)) + (a43 * b34)) + (a44 * b44));
										HX_STACK_LINE(87)
										_this2;
									}
								}
								HX_STACK_LINE(87)
								{
									HX_STACK_LINE(87)
									::phoenix::Matrix _this2 = _this1->local->matrix;		HX_STACK_VAR(_this2,"_this2");
									HX_STACK_LINE(87)
									::phoenix::Vector _v = _this1->local->pos;		HX_STACK_VAR(_v,"_v");
									HX_STACK_LINE(87)
									Array< Float > te = _this2->elements;		HX_STACK_VAR(te,"te");
									HX_STACK_LINE(87)
									te[(int)12] = _v->x;
									HX_STACK_LINE(87)
									te[(int)13] = _v->y;
									HX_STACK_LINE(87)
									te[(int)14] = _v->z;
									HX_STACK_LINE(87)
									_this2;
								}
								HX_STACK_LINE(87)
								{
									HX_STACK_LINE(87)
									::phoenix::Matrix _this2 = _this1->local->matrix;		HX_STACK_VAR(_this2,"_this2");
									HX_STACK_LINE(87)
									{
										HX_STACK_LINE(87)
										Array< Float > ae = _this2->elements;		HX_STACK_VAR(ae,"ae");
										HX_STACK_LINE(87)
										Array< Float > be = _this1->_origin_undo_matrix->elements;		HX_STACK_VAR(be,"be");
										HX_STACK_LINE(87)
										Array< Float > te = _this2->elements;		HX_STACK_VAR(te,"te");
										HX_STACK_LINE(87)
										Float a11 = ae->__get((int)0);		HX_STACK_VAR(a11,"a11");
										HX_STACK_LINE(87)
										Float a12 = ae->__get((int)4);		HX_STACK_VAR(a12,"a12");
										HX_STACK_LINE(87)
										Float a13 = ae->__get((int)8);		HX_STACK_VAR(a13,"a13");
										HX_STACK_LINE(87)
										Float a14 = ae->__get((int)12);		HX_STACK_VAR(a14,"a14");
										HX_STACK_LINE(87)
										Float a21 = ae->__get((int)1);		HX_STACK_VAR(a21,"a21");
										HX_STACK_LINE(87)
										Float a22 = ae->__get((int)5);		HX_STACK_VAR(a22,"a22");
										HX_STACK_LINE(87)
										Float a23 = ae->__get((int)9);		HX_STACK_VAR(a23,"a23");
										HX_STACK_LINE(87)
										Float a24 = ae->__get((int)13);		HX_STACK_VAR(a24,"a24");
										HX_STACK_LINE(87)
										Float a31 = ae->__get((int)2);		HX_STACK_VAR(a31,"a31");
										HX_STACK_LINE(87)
										Float a32 = ae->__get((int)6);		HX_STACK_VAR(a32,"a32");
										HX_STACK_LINE(87)
										Float a33 = ae->__get((int)10);		HX_STACK_VAR(a33,"a33");
										HX_STACK_LINE(87)
										Float a34 = ae->__get((int)14);		HX_STACK_VAR(a34,"a34");
										HX_STACK_LINE(87)
										Float a41 = ae->__get((int)3);		HX_STACK_VAR(a41,"a41");
										HX_STACK_LINE(87)
										Float a42 = ae->__get((int)7);		HX_STACK_VAR(a42,"a42");
										HX_STACK_LINE(87)
										Float a43 = ae->__get((int)11);		HX_STACK_VAR(a43,"a43");
										HX_STACK_LINE(87)
										Float a44 = ae->__get((int)15);		HX_STACK_VAR(a44,"a44");
										HX_STACK_LINE(87)
										Float b11 = be->__get((int)0);		HX_STACK_VAR(b11,"b11");
										HX_STACK_LINE(87)
										Float b12 = be->__get((int)4);		HX_STACK_VAR(b12,"b12");
										HX_STACK_LINE(87)
										Float b13 = be->__get((int)8);		HX_STACK_VAR(b13,"b13");
										HX_STACK_LINE(87)
										Float b14 = be->__get((int)12);		HX_STACK_VAR(b14,"b14");
										HX_STACK_LINE(87)
										Float b21 = be->__get((int)1);		HX_STACK_VAR(b21,"b21");
										HX_STACK_LINE(87)
										Float b22 = be->__get((int)5);		HX_STACK_VAR(b22,"b22");
										HX_STACK_LINE(87)
										Float b23 = be->__get((int)9);		HX_STACK_VAR(b23,"b23");
										HX_STACK_LINE(87)
										Float b24 = be->__get((int)13);		HX_STACK_VAR(b24,"b24");
										HX_STACK_LINE(87)
										Float b31 = be->__get((int)2);		HX_STACK_VAR(b31,"b31");
										HX_STACK_LINE(87)
										Float b32 = be->__get((int)6);		HX_STACK_VAR(b32,"b32");
										HX_STACK_LINE(87)
										Float b33 = be->__get((int)10);		HX_STACK_VAR(b33,"b33");
										HX_STACK_LINE(87)
										Float b34 = be->__get((int)14);		HX_STACK_VAR(b34,"b34");
										HX_STACK_LINE(87)
										Float b41 = be->__get((int)3);		HX_STACK_VAR(b41,"b41");
										HX_STACK_LINE(87)
										Float b42 = be->__get((int)7);		HX_STACK_VAR(b42,"b42");
										HX_STACK_LINE(87)
										Float b43 = be->__get((int)11);		HX_STACK_VAR(b43,"b43");
										HX_STACK_LINE(87)
										Float b44 = be->__get((int)15);		HX_STACK_VAR(b44,"b44");
										HX_STACK_LINE(87)
										te[(int)0] = ((((a11 * b11) + (a12 * b21)) + (a13 * b31)) + (a14 * b41));
										HX_STACK_LINE(87)
										te[(int)4] = ((((a11 * b12) + (a12 * b22)) + (a13 * b32)) + (a14 * b42));
										HX_STACK_LINE(87)
										te[(int)8] = ((((a11 * b13) + (a12 * b23)) + (a13 * b33)) + (a14 * b43));
										HX_STACK_LINE(87)
										te[(int)12] = ((((a11 * b14) + (a12 * b24)) + (a13 * b34)) + (a14 * b44));
										HX_STACK_LINE(87)
										te[(int)1] = ((((a21 * b11) + (a22 * b21)) + (a23 * b31)) + (a24 * b41));
										HX_STACK_LINE(87)
										te[(int)5] = ((((a21 * b12) + (a22 * b22)) + (a23 * b32)) + (a24 * b42));
										HX_STACK_LINE(87)
										te[(int)9] = ((((a21 * b13) + (a22 * b23)) + (a23 * b33)) + (a24 * b43));
										HX_STACK_LINE(87)
										te[(int)13] = ((((a21 * b14) + (a22 * b24)) + (a23 * b34)) + (a24 * b44));
										HX_STACK_LINE(87)
										te[(int)2] = ((((a31 * b11) + (a32 * b21)) + (a33 * b31)) + (a34 * b41));
										HX_STACK_LINE(87)
										te[(int)6] = ((((a31 * b12) + (a32 * b22)) + (a33 * b32)) + (a34 * b42));
										HX_STACK_LINE(87)
										te[(int)10] = ((((a31 * b13) + (a32 * b23)) + (a33 * b33)) + (a34 * b43));
										HX_STACK_LINE(87)
										te[(int)14] = ((((a31 * b14) + (a32 * b24)) + (a33 * b34)) + (a34 * b44));
										HX_STACK_LINE(87)
										te[(int)3] = ((((a41 * b11) + (a42 * b21)) + (a43 * b31)) + (a44 * b41));
										HX_STACK_LINE(87)
										te[(int)7] = ((((a41 * b12) + (a42 * b22)) + (a43 * b32)) + (a44 * b42));
										HX_STACK_LINE(87)
										te[(int)11] = ((((a41 * b13) + (a42 * b23)) + (a43 * b33)) + (a44 * b43));
										HX_STACK_LINE(87)
										te[(int)15] = ((((a41 * b14) + (a42 * b24)) + (a43 * b34)) + (a44 * b44));
										HX_STACK_LINE(87)
										_this2;
									}
								}
								HX_STACK_LINE(87)
								if (((_this1->parent != null()))){
									HX_STACK_LINE(87)
									::phoenix::Spatial _this2 = _this1->get_world();		HX_STACK_VAR(_this2,"_this2");
									HX_STACK_LINE(87)
									::phoenix::Matrix _m;		HX_STACK_VAR(_m,"_m");
									HX_STACK_LINE(87)
									{
										HX_STACK_LINE(87)
										::phoenix::Matrix _this3;		HX_STACK_VAR(_this3,"_this3");
										HX_STACK_LINE(87)
										{
											HX_STACK_LINE(87)
											::phoenix::Spatial _this4 = _this1->get_world();		HX_STACK_VAR(_this4,"_this4");
											HX_STACK_LINE(87)
											_this3 = _this4->matrix;
										}
										HX_STACK_LINE(87)
										::phoenix::Matrix _a;		HX_STACK_VAR(_a,"_a");
										HX_STACK_LINE(87)
										{
											HX_STACK_LINE(87)
											::phoenix::Spatial _this4 = _this1->parent->get_world();		HX_STACK_VAR(_this4,"_this4");
											HX_STACK_LINE(87)
											_a = _this4->matrix;
										}
										HX_STACK_LINE(87)
										Array< Float > ae = _a->elements;		HX_STACK_VAR(ae,"ae");
										HX_STACK_LINE(87)
										Array< Float > be = _this1->local->matrix->elements;		HX_STACK_VAR(be,"be");
										HX_STACK_LINE(87)
										Array< Float > te = _this3->elements;		HX_STACK_VAR(te,"te");
										HX_STACK_LINE(87)
										Float a11 = ae->__get((int)0);		HX_STACK_VAR(a11,"a11");
										HX_STACK_LINE(87)
										Float a12 = ae->__get((int)4);		HX_STACK_VAR(a12,"a12");
										HX_STACK_LINE(87)
										Float a13 = ae->__get((int)8);		HX_STACK_VAR(a13,"a13");
										HX_STACK_LINE(87)
										Float a14 = ae->__get((int)12);		HX_STACK_VAR(a14,"a14");
										HX_STACK_LINE(87)
										Float a21 = ae->__get((int)1);		HX_STACK_VAR(a21,"a21");
										HX_STACK_LINE(87)
										Float a22 = ae->__get((int)5);		HX_STACK_VAR(a22,"a22");
										HX_STACK_LINE(87)
										Float a23 = ae->__get((int)9);		HX_STACK_VAR(a23,"a23");
										HX_STACK_LINE(87)
										Float a24 = ae->__get((int)13);		HX_STACK_VAR(a24,"a24");
										HX_STACK_LINE(87)
										Float a31 = ae->__get((int)2);		HX_STACK_VAR(a31,"a31");
										HX_STACK_LINE(87)
										Float a32 = ae->__get((int)6);		HX_STACK_VAR(a32,"a32");
										HX_STACK_LINE(87)
										Float a33 = ae->__get((int)10);		HX_STACK_VAR(a33,"a33");
										HX_STACK_LINE(87)
										Float a34 = ae->__get((int)14);		HX_STACK_VAR(a34,"a34");
										HX_STACK_LINE(87)
										Float a41 = ae->__get((int)3);		HX_STACK_VAR(a41,"a41");
										HX_STACK_LINE(87)
										Float a42 = ae->__get((int)7);		HX_STACK_VAR(a42,"a42");
										HX_STACK_LINE(87)
										Float a43 = ae->__get((int)11);		HX_STACK_VAR(a43,"a43");
										HX_STACK_LINE(87)
										Float a44 = ae->__get((int)15);		HX_STACK_VAR(a44,"a44");
										HX_STACK_LINE(87)
										Float b11 = be->__get((int)0);		HX_STACK_VAR(b11,"b11");
										HX_STACK_LINE(87)
										Float b12 = be->__get((int)4);		HX_STACK_VAR(b12,"b12");
										HX_STACK_LINE(87)
										Float b13 = be->__get((int)8);		HX_STACK_VAR(b13,"b13");
										HX_STACK_LINE(87)
										Float b14 = be->__get((int)12);		HX_STACK_VAR(b14,"b14");
										HX_STACK_LINE(87)
										Float b21 = be->__get((int)1);		HX_STACK_VAR(b21,"b21");
										HX_STACK_LINE(87)
										Float b22 = be->__get((int)5);		HX_STACK_VAR(b22,"b22");
										HX_STACK_LINE(87)
										Float b23 = be->__get((int)9);		HX_STACK_VAR(b23,"b23");
										HX_STACK_LINE(87)
										Float b24 = be->__get((int)13);		HX_STACK_VAR(b24,"b24");
										HX_STACK_LINE(87)
										Float b31 = be->__get((int)2);		HX_STACK_VAR(b31,"b31");
										HX_STACK_LINE(87)
										Float b32 = be->__get((int)6);		HX_STACK_VAR(b32,"b32");
										HX_STACK_LINE(87)
										Float b33 = be->__get((int)10);		HX_STACK_VAR(b33,"b33");
										HX_STACK_LINE(87)
										Float b34 = be->__get((int)14);		HX_STACK_VAR(b34,"b34");
										HX_STACK_LINE(87)
										Float b41 = be->__get((int)3);		HX_STACK_VAR(b41,"b41");
										HX_STACK_LINE(87)
										Float b42 = be->__get((int)7);		HX_STACK_VAR(b42,"b42");
										HX_STACK_LINE(87)
										Float b43 = be->__get((int)11);		HX_STACK_VAR(b43,"b43");
										HX_STACK_LINE(87)
										Float b44 = be->__get((int)15);		HX_STACK_VAR(b44,"b44");
										HX_STACK_LINE(87)
										te[(int)0] = ((((a11 * b11) + (a12 * b21)) + (a13 * b31)) + (a14 * b41));
										HX_STACK_LINE(87)
										te[(int)4] = ((((a11 * b12) + (a12 * b22)) + (a13 * b32)) + (a14 * b42));
										HX_STACK_LINE(87)
										te[(int)8] = ((((a11 * b13) + (a12 * b23)) + (a13 * b33)) + (a14 * b43));
										HX_STACK_LINE(87)
										te[(int)12] = ((((a11 * b14) + (a12 * b24)) + (a13 * b34)) + (a14 * b44));
										HX_STACK_LINE(87)
										te[(int)1] = ((((a21 * b11) + (a22 * b21)) + (a23 * b31)) + (a24 * b41));
										HX_STACK_LINE(87)
										te[(int)5] = ((((a21 * b12) + (a22 * b22)) + (a23 * b32)) + (a24 * b42));
										HX_STACK_LINE(87)
										te[(int)9] = ((((a21 * b13) + (a22 * b23)) + (a23 * b33)) + (a24 * b43));
										HX_STACK_LINE(87)
										te[(int)13] = ((((a21 * b14) + (a22 * b24)) + (a23 * b34)) + (a24 * b44));
										HX_STACK_LINE(87)
										te[(int)2] = ((((a31 * b11) + (a32 * b21)) + (a33 * b31)) + (a34 * b41));
										HX_STACK_LINE(87)
										te[(int)6] = ((((a31 * b12) + (a32 * b22)) + (a33 * b32)) + (a34 * b42));
										HX_STACK_LINE(87)
										te[(int)10] = ((((a31 * b13) + (a32 * b23)) + (a33 * b33)) + (a34 * b43));
										HX_STACK_LINE(87)
										te[(int)14] = ((((a31 * b14) + (a32 * b24)) + (a33 * b34)) + (a34 * b44));
										HX_STACK_LINE(87)
										te[(int)3] = ((((a41 * b11) + (a42 * b21)) + (a43 * b31)) + (a44 * b41));
										HX_STACK_LINE(87)
										te[(int)7] = ((((a41 * b12) + (a42 * b22)) + (a43 * b32)) + (a44 * b42));
										HX_STACK_LINE(87)
										te[(int)11] = ((((a41 * b13) + (a42 * b23)) + (a43 * b33)) + (a44 * b43));
										HX_STACK_LINE(87)
										te[(int)15] = ((((a41 * b14) + (a42 * b24)) + (a43 * b34)) + (a44 * b44));
										HX_STACK_LINE(87)
										_m = _this3;
									}
									HX_STACK_LINE(87)
									_this2->matrix = _m;
									HX_STACK_LINE(87)
									if (((_m != null()))){
										HX_STACK_LINE(87)
										::snow::platform::native::utils::Float32Array _g1;		HX_STACK_VAR(_g1,"_g1");
										HX_STACK_LINE(87)
										{
											HX_STACK_LINE(87)
											::phoenix::Matrix _this3 = _this2->matrix;		HX_STACK_VAR(_this3,"_this3");
											HX_STACK_LINE(87)
											{
												HX_STACK_LINE(87)
												::snow::platform::native::utils::Float32Array _this4 = _this3->_float32array;		HX_STACK_VAR(_this4,"_this4");
												HX_STACK_LINE(87)
												Dynamic bufferOrArray = _this3->elements;		HX_STACK_VAR(bufferOrArray,"bufferOrArray");
												HX_STACK_LINE(87)
												int offset = (int)0;		HX_STACK_VAR(offset,"offset");
												HX_STACK_LINE(87)
												if ((::Std_obj::is(bufferOrArray,hx::ClassOf< Array<int> >()))){
													HX_STACK_LINE(87)
													Array< Float > floats = bufferOrArray;		HX_STACK_VAR(floats,"floats");
													HX_STACK_LINE(87)
													{
														HX_STACK_LINE(87)
														int _g11 = (int)0;		HX_STACK_VAR(_g11,"_g11");
														HX_STACK_LINE(87)
														int _g = floats->length;		HX_STACK_VAR(_g,"_g");
														HX_STACK_LINE(87)
														while((true)){
															HX_STACK_LINE(87)
															if ((!(((_g11 < _g))))){
																HX_STACK_LINE(87)
																break;
															}
															HX_STACK_LINE(87)
															int i = (_g11)++;		HX_STACK_VAR(i,"i");
															HX_STACK_LINE(87)
															::__hxcpp_memory_set_float(_this4->bytes,(((int((i + offset)) << int((int)2))) + _this4->byteOffset),floats->__get(i));
														}
													}
												}
												else{
													HX_STACK_LINE(87)
													if ((::Std_obj::is(bufferOrArray,hx::ClassOf< ::snow::platform::native::utils::Float32Array >()))){
														HX_STACK_LINE(87)
														::snow::platform::native::utils::Float32Array floats = bufferOrArray;		HX_STACK_VAR(floats,"floats");
														HX_STACK_LINE(87)
														{
															HX_STACK_LINE(87)
															int _g11 = (int)0;		HX_STACK_VAR(_g11,"_g11");
															HX_STACK_LINE(87)
															int _g = floats->length;		HX_STACK_VAR(_g,"_g");
															HX_STACK_LINE(87)
															while((true)){
																HX_STACK_LINE(87)
																if ((!(((_g11 < _g))))){
																	HX_STACK_LINE(87)
																	break;
																}
																HX_STACK_LINE(87)
																int i = (_g11)++;		HX_STACK_VAR(i,"i");
																HX_STACK_LINE(87)
																::__hxcpp_memory_set_float(_this4->bytes,(((int((i + offset)) << int((int)2))) + _this4->byteOffset),floats->__get(i));
															}
														}
													}
													else{
														HX_STACK_LINE(87)
														HX_STACK_DO_THROW(HX_CSTRING("Invalid input buffer"));
													}
												}
											}
											HX_STACK_LINE(87)
											_g1 = ::snow::platform::native::utils::Float32Array_obj::__new(_this3->_float32array,null(),null());
										}
										HX_STACK_LINE(87)
										_this2->floats = _g1;
									}
									HX_STACK_LINE(87)
									_this2->matrix;
								}
								else{
									HX_STACK_LINE(87)
									::phoenix::Spatial _this2 = _this1->get_world();		HX_STACK_VAR(_this2,"_this2");
									HX_STACK_LINE(87)
									::phoenix::Matrix _m;		HX_STACK_VAR(_m,"_m");
									HX_STACK_LINE(87)
									{
										HX_STACK_LINE(87)
										Array< Float > te = _this1->local->matrix->elements;		HX_STACK_VAR(te,"te");
										HX_STACK_LINE(87)
										_m = ::phoenix::Matrix_obj::__new(te->__get((int)0),te->__get((int)4),te->__get((int)8),te->__get((int)12),te->__get((int)1),te->__get((int)5),te->__get((int)9),te->__get((int)13),te->__get((int)2),te->__get((int)6),te->__get((int)10),te->__get((int)14),te->__get((int)3),te->__get((int)7),te->__get((int)11),te->__get((int)15));
									}
									HX_STACK_LINE(87)
									_this2->matrix = _m;
									HX_STACK_LINE(87)
									if (((_m != null()))){
										HX_STACK_LINE(87)
										::snow::platform::native::utils::Float32Array _g2;		HX_STACK_VAR(_g2,"_g2");
										HX_STACK_LINE(87)
										{
											HX_STACK_LINE(87)
											::phoenix::Matrix _this3 = _this2->matrix;		HX_STACK_VAR(_this3,"_this3");
											HX_STACK_LINE(87)
											{
												HX_STACK_LINE(87)
												::snow::platform::native::utils::Float32Array _this4 = _this3->_float32array;		HX_STACK_VAR(_this4,"_this4");
												HX_STACK_LINE(87)
												Dynamic bufferOrArray = _this3->elements;		HX_STACK_VAR(bufferOrArray,"bufferOrArray");
												HX_STACK_LINE(87)
												int offset = (int)0;		HX_STACK_VAR(offset,"offset");
												HX_STACK_LINE(87)
												if ((::Std_obj::is(bufferOrArray,hx::ClassOf< Array<int> >()))){
													HX_STACK_LINE(87)
													Array< Float > floats = bufferOrArray;		HX_STACK_VAR(floats,"floats");
													HX_STACK_LINE(87)
													{
														HX_STACK_LINE(87)
														int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
														HX_STACK_LINE(87)
														int _g = floats->length;		HX_STACK_VAR(_g,"_g");
														HX_STACK_LINE(87)
														while((true)){
															HX_STACK_LINE(87)
															if ((!(((_g1 < _g))))){
																HX_STACK_LINE(87)
																break;
															}
															HX_STACK_LINE(87)
															int i = (_g1)++;		HX_STACK_VAR(i,"i");
															HX_STACK_LINE(87)
															::__hxcpp_memory_set_float(_this4->bytes,(((int((i + offset)) << int((int)2))) + _this4->byteOffset),floats->__get(i));
														}
													}
												}
												else{
													HX_STACK_LINE(87)
													if ((::Std_obj::is(bufferOrArray,hx::ClassOf< ::snow::platform::native::utils::Float32Array >()))){
														HX_STACK_LINE(87)
														::snow::platform::native::utils::Float32Array floats = bufferOrArray;		HX_STACK_VAR(floats,"floats");
														HX_STACK_LINE(87)
														{
															HX_STACK_LINE(87)
															int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
															HX_STACK_LINE(87)
															int _g = floats->length;		HX_STACK_VAR(_g,"_g");
															HX_STACK_LINE(87)
															while((true)){
																HX_STACK_LINE(87)
																if ((!(((_g1 < _g))))){
																	HX_STACK_LINE(87)
																	break;
																}
																HX_STACK_LINE(87)
																int i = (_g1)++;		HX_STACK_VAR(i,"i");
																HX_STACK_LINE(87)
																::__hxcpp_memory_set_float(_this4->bytes,(((int((i + offset)) << int((int)2))) + _this4->byteOffset),floats->__get(i));
															}
														}
													}
													else{
														HX_STACK_LINE(87)
														HX_STACK_DO_THROW(HX_CSTRING("Invalid input buffer"));
													}
												}
											}
											HX_STACK_LINE(87)
											_g2 = ::snow::platform::native::utils::Float32Array_obj::__new(_this3->_float32array,null(),null());
										}
										HX_STACK_LINE(87)
										_this2->floats = _g2;
									}
									HX_STACK_LINE(87)
									_this2->matrix;
								}
								HX_STACK_LINE(87)
								{
									HX_STACK_LINE(87)
									::phoenix::Spatial _this2 = _this1->get_world();		HX_STACK_VAR(_this2,"_this2");
									HX_STACK_LINE(87)
									if ((_this2->auto_decompose)){
										HX_STACK_LINE(87)
										::phoenix::MatrixTransform _transform;		HX_STACK_VAR(_transform,"_transform");
										HX_STACK_LINE(87)
										{
											HX_STACK_LINE(87)
											::phoenix::Matrix _this3 = _this2->matrix;		HX_STACK_VAR(_this3,"_this3");
											HX_STACK_LINE(87)
											::phoenix::Vector _position = null();		HX_STACK_VAR(_position,"_position");
											HX_STACK_LINE(87)
											::phoenix::Quaternion _quaternion = null();		HX_STACK_VAR(_quaternion,"_quaternion");
											HX_STACK_LINE(87)
											::phoenix::Vector _scale = null();		HX_STACK_VAR(_scale,"_scale");
											HX_STACK_LINE(87)
											Array< Float > te = _this3->elements;		HX_STACK_VAR(te,"te");
											HX_STACK_LINE(87)
											::phoenix::Matrix matrix = ::phoenix::Matrix_obj::__new(null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(matrix,"matrix");
											HX_STACK_LINE(87)
											Float _ax_x = te->__get((int)0);		HX_STACK_VAR(_ax_x,"_ax_x");
											HX_STACK_LINE(87)
											Float _ax_y = te->__get((int)1);		HX_STACK_VAR(_ax_y,"_ax_y");
											HX_STACK_LINE(87)
											Float _ax_z = te->__get((int)2);		HX_STACK_VAR(_ax_z,"_ax_z");
											HX_STACK_LINE(87)
											Float _ay_x = te->__get((int)4);		HX_STACK_VAR(_ay_x,"_ay_x");
											HX_STACK_LINE(87)
											Float _ay_y = te->__get((int)5);		HX_STACK_VAR(_ay_y,"_ay_y");
											HX_STACK_LINE(87)
											Float _ay_z = te->__get((int)6);		HX_STACK_VAR(_ay_z,"_ay_z");
											HX_STACK_LINE(87)
											Float _az_x = te->__get((int)8);		HX_STACK_VAR(_az_x,"_az_x");
											HX_STACK_LINE(87)
											Float _az_y = te->__get((int)9);		HX_STACK_VAR(_az_y,"_az_y");
											HX_STACK_LINE(87)
											Float _az_z = te->__get((int)10);		HX_STACK_VAR(_az_z,"_az_z");
											HX_STACK_LINE(87)
											Float _ax_length = ::Math_obj::sqrt((((_ax_x * _ax_x) + (_ax_y * _ax_y)) + (_ax_z * _ax_z)));		HX_STACK_VAR(_ax_length,"_ax_length");
											HX_STACK_LINE(87)
											Float _ay_length = ::Math_obj::sqrt((((_ay_x * _ay_x) + (_ay_y * _ay_y)) + (_ay_z * _ay_z)));		HX_STACK_VAR(_ay_length,"_ay_length");
											HX_STACK_LINE(87)
											Float _az_length = ::Math_obj::sqrt((((_az_x * _az_x) + (_az_y * _az_y)) + (_az_z * _az_z)));		HX_STACK_VAR(_az_length,"_az_length");
											HX_STACK_LINE(87)
											if (((_quaternion == null()))){
												HX_STACK_LINE(87)
												::phoenix::Quaternion _g3 = ::phoenix::Quaternion_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(_g3,"_g3");
												HX_STACK_LINE(87)
												_quaternion = _g3;
											}
											HX_STACK_LINE(87)
											if (((_position == null()))){
												HX_STACK_LINE(87)
												::phoenix::Vector _g4 = ::phoenix::Vector_obj::__new(te->__get((int)12),te->__get((int)13),te->__get((int)14),null());		HX_STACK_VAR(_g4,"_g4");
												HX_STACK_LINE(87)
												_position = _g4;
											}
											else{
												HX_STACK_LINE(87)
												{
													HX_STACK_LINE(87)
													Float _x = te->__get((int)12);		HX_STACK_VAR(_x,"_x");
													HX_STACK_LINE(87)
													_position->x = _x;
													HX_STACK_LINE(87)
													if ((_position->_construct)){
														HX_STACK_LINE(87)
														_position->x;
													}
													else{
														HX_STACK_LINE(87)
														if (((bool((_position->listen_x != null())) && bool(!(_position->ignore_listeners))))){
															HX_STACK_LINE(87)
															_position->listen_x(_x);
														}
														HX_STACK_LINE(87)
														_position->x;
													}
												}
												HX_STACK_LINE(87)
												{
													HX_STACK_LINE(87)
													Float _y = te->__get((int)13);		HX_STACK_VAR(_y,"_y");
													HX_STACK_LINE(87)
													_position->y = _y;
													HX_STACK_LINE(87)
													if ((_position->_construct)){
														HX_STACK_LINE(87)
														_position->y;
													}
													else{
														HX_STACK_LINE(87)
														if (((bool((_position->listen_y != null())) && bool(!(_position->ignore_listeners))))){
															HX_STACK_LINE(87)
															_position->listen_y(_y);
														}
														HX_STACK_LINE(87)
														_position->y;
													}
												}
												HX_STACK_LINE(87)
												{
													HX_STACK_LINE(87)
													Float _z = te->__get((int)14);		HX_STACK_VAR(_z,"_z");
													HX_STACK_LINE(87)
													_position->z = _z;
													HX_STACK_LINE(87)
													if ((_position->_construct)){
														HX_STACK_LINE(87)
														_position->z;
													}
													else{
														HX_STACK_LINE(87)
														if (((bool((_position->listen_z != null())) && bool(!(_position->ignore_listeners))))){
															HX_STACK_LINE(87)
															_position->listen_z(_z);
														}
														HX_STACK_LINE(87)
														_position->z;
													}
												}
											}
											HX_STACK_LINE(87)
											if (((_scale == null()))){
												HX_STACK_LINE(87)
												::phoenix::Vector _g5 = ::phoenix::Vector_obj::__new(_ax_length,_ay_length,_az_length,null());		HX_STACK_VAR(_g5,"_g5");
												HX_STACK_LINE(87)
												_scale = _g5;
											}
											else{
												HX_STACK_LINE(87)
												{
													HX_STACK_LINE(87)
													_scale->x = _ax_length;
													HX_STACK_LINE(87)
													if ((_scale->_construct)){
														HX_STACK_LINE(87)
														_scale->x;
													}
													else{
														HX_STACK_LINE(87)
														if (((bool((_scale->listen_x != null())) && bool(!(_scale->ignore_listeners))))){
															HX_STACK_LINE(87)
															_scale->listen_x(_ax_length);
														}
														HX_STACK_LINE(87)
														_scale->x;
													}
												}
												HX_STACK_LINE(87)
												{
													HX_STACK_LINE(87)
													_scale->y = _ay_length;
													HX_STACK_LINE(87)
													if ((_scale->_construct)){
														HX_STACK_LINE(87)
														_scale->y;
													}
													else{
														HX_STACK_LINE(87)
														if (((bool((_scale->listen_y != null())) && bool(!(_scale->ignore_listeners))))){
															HX_STACK_LINE(87)
															_scale->listen_y(_ay_length);
														}
														HX_STACK_LINE(87)
														_scale->y;
													}
												}
												HX_STACK_LINE(87)
												{
													HX_STACK_LINE(87)
													_scale->z = _az_length;
													HX_STACK_LINE(87)
													if ((_scale->_construct)){
														HX_STACK_LINE(87)
														_scale->z;
													}
													else{
														HX_STACK_LINE(87)
														if (((bool((_scale->listen_z != null())) && bool(!(_scale->ignore_listeners))))){
															HX_STACK_LINE(87)
															_scale->listen_z(_az_length);
														}
														HX_STACK_LINE(87)
														_scale->z;
													}
												}
											}
											HX_STACK_LINE(87)
											Array< Float > _g6 = _this3->elements->concat(Array_obj< Float >::__new());		HX_STACK_VAR(_g6,"_g6");
											HX_STACK_LINE(87)
											matrix->elements = _g6;
											HX_STACK_LINE(87)
											Array< Float > me = matrix->elements;		HX_STACK_VAR(me,"me");
											HX_STACK_LINE(87)
											hx::DivEq(me[(int)0],_ax_length);
											HX_STACK_LINE(87)
											hx::DivEq(me[(int)1],_ax_length);
											HX_STACK_LINE(87)
											hx::DivEq(me[(int)2],_ax_length);
											HX_STACK_LINE(87)
											hx::DivEq(me[(int)4],_ay_length);
											HX_STACK_LINE(87)
											hx::DivEq(me[(int)5],_ay_length);
											HX_STACK_LINE(87)
											hx::DivEq(me[(int)6],_ay_length);
											HX_STACK_LINE(87)
											hx::DivEq(me[(int)8],_az_length);
											HX_STACK_LINE(87)
											hx::DivEq(me[(int)9],_az_length);
											HX_STACK_LINE(87)
											hx::DivEq(me[(int)10],_az_length);
											HX_STACK_LINE(87)
											_quaternion->setFromRotationMatrix(matrix);
											HX_STACK_LINE(87)
											if (((_this3->_transform == null()))){
												HX_STACK_LINE(87)
												::phoenix::MatrixTransform _g7 = ::phoenix::MatrixTransform_obj::__new(_position,_quaternion,_scale);		HX_STACK_VAR(_g7,"_g7");
												HX_STACK_LINE(87)
												_this3->_transform = _g7;
											}
											else{
												HX_STACK_LINE(87)
												_this3->_transform->pos = _position;
												HX_STACK_LINE(87)
												_this3->_transform->rotation = _quaternion;
												HX_STACK_LINE(87)
												_this3->_transform->scale = _scale;
											}
											HX_STACK_LINE(87)
											_transform = _this3->_transform;
										}
										HX_STACK_LINE(87)
										{
											HX_STACK_LINE(87)
											::phoenix::Vector _p = _transform->pos;		HX_STACK_VAR(_p,"_p");
											HX_STACK_LINE(87)
											_this2->pos = _p;
											HX_STACK_LINE(87)
											if (((_p != null()))){
												HX_STACK_LINE(87)
												::phoenix::Vector_obj::Listen(_this2->pos,_this2->_pos_change_dyn());
												HX_STACK_LINE(87)
												if (((bool((_this2->pos_changed != null())) && bool(!(_this2->ignore_listeners))))){
													HX_STACK_LINE(87)
													_this2->pos_changed(_this2->pos);
												}
											}
											HX_STACK_LINE(87)
											_this2->pos;
										}
										HX_STACK_LINE(87)
										{
											HX_STACK_LINE(87)
											::phoenix::Quaternion _r = _transform->rotation;		HX_STACK_VAR(_r,"_r");
											HX_STACK_LINE(87)
											_this2->rotation = _r;
											HX_STACK_LINE(87)
											if (((_r != null()))){
												HX_STACK_LINE(87)
												{
													HX_STACK_LINE(87)
													::phoenix::Quaternion _q = _this2->rotation;		HX_STACK_VAR(_q,"_q");
													HX_STACK_LINE(87)
													Dynamic listener = _this2->_rotation_change_dyn();		HX_STACK_VAR(listener,"listener");
													HX_STACK_LINE(87)
													_q->listen_x = listener;
													HX_STACK_LINE(87)
													_q->listen_y = listener;
													HX_STACK_LINE(87)
													_q->listen_z = listener;
													HX_STACK_LINE(87)
													_q->listen_w = listener;
												}
												HX_STACK_LINE(87)
												if (((bool((_this2->rotation_changed != null())) && bool(!(_this2->ignore_listeners))))){
													HX_STACK_LINE(87)
													_this2->rotation_changed(_this2->rotation);
												}
											}
											HX_STACK_LINE(87)
											_this2->rotation;
										}
										HX_STACK_LINE(87)
										{
											HX_STACK_LINE(87)
											::phoenix::Vector _s = _transform->scale;		HX_STACK_VAR(_s,"_s");
											HX_STACK_LINE(87)
											_this2->scale = _s;
											HX_STACK_LINE(87)
											if (((_s != null()))){
												HX_STACK_LINE(87)
												::phoenix::Vector_obj::Listen(_this2->scale,_this2->_scale_change_dyn());
												HX_STACK_LINE(87)
												if (((bool((_this2->scale_changed != null())) && bool(!(_this2->ignore_listeners))))){
													HX_STACK_LINE(87)
													_this2->scale_changed(_this2->scale);
												}
											}
											HX_STACK_LINE(87)
											_this2->scale;
										}
									}
									HX_STACK_LINE(87)
									_this2;
								}
								HX_STACK_LINE(87)
								{
									HX_STACK_LINE(87)
									_this1->dirty = false;
									HX_STACK_LINE(87)
									if (((bool((bool((bool(_this1->dirty) && bool(!(_this1->_setup)))) && bool((_this1->_dirty_handlers != null())))) && bool((_this1->_dirty_handlers->__Field(HX_CSTRING("length"),true) > (int)0))))){
										HX_STACK_LINE(87)
										int _g = (int)0;		HX_STACK_VAR(_g,"_g");
										HX_STACK_LINE(87)
										Dynamic _g1 = _this1->_dirty_handlers;		HX_STACK_VAR(_g1,"_g1");
										HX_STACK_LINE(87)
										while((true)){
											HX_STACK_LINE(87)
											if ((!(((_g < _g1->__Field(HX_CSTRING("length"),true)))))){
												HX_STACK_LINE(87)
												break;
											}
											HX_STACK_LINE(87)
											Dynamic _handler = _g1->__GetItem(_g);		HX_STACK_VAR(_handler,"_handler");
											HX_STACK_LINE(87)
											++(_g);
											HX_STACK_LINE(87)
											if (((_handler != null()))){
												HX_STACK_LINE(87)
												_handler(_this1).Cast< Void >();
											}
										}
									}
									HX_STACK_LINE(87)
									_this1->dirty;
								}
								HX_STACK_LINE(87)
								_this1->_cleaning = false;
								HX_STACK_LINE(87)
								if (((bool((_this1->_clean_handlers != null())) && bool((_this1->_clean_handlers->__Field(HX_CSTRING("length"),true) > (int)0))))){
									HX_STACK_LINE(87)
									int _g = (int)0;		HX_STACK_VAR(_g,"_g");
									HX_STACK_LINE(87)
									Dynamic _g1 = _this1->_clean_handlers;		HX_STACK_VAR(_g1,"_g1");
									HX_STACK_LINE(87)
									while((true)){
										HX_STACK_LINE(87)
										if ((!(((_g < _g1->__Field(HX_CSTRING("length"),true)))))){
											HX_STACK_LINE(87)
											break;
										}
										HX_STACK_LINE(87)
										Dynamic _handler = _g1->__GetItem(_g);		HX_STACK_VAR(_handler,"_handler");
										HX_STACK_LINE(87)
										++(_g);
										HX_STACK_LINE(87)
										if (((_handler != null()))){
											HX_STACK_LINE(87)
											_handler(_this1).Cast< Void >();
										}
									}
								}
							}
						}
					}
					HX_STACK_LINE(87)
					if (((bool(this->dirty) && bool(!(this->_cleaning))))){
						HX_STACK_LINE(87)
						if ((!(this->dirty))){
							HX_STACK_LINE(87)
							Dynamic();
						}
						else{
							HX_STACK_LINE(87)
							this->_cleaning = true;
							HX_STACK_LINE(87)
							{
								HX_STACK_LINE(87)
								::phoenix::Matrix _this1 = this->_pos_matrix;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(87)
								{
									HX_STACK_LINE(87)
									Array< Float > e = _this1->elements;		HX_STACK_VAR(e,"e");
									HX_STACK_LINE(87)
									e[(int)0] = (int)1;
									HX_STACK_LINE(87)
									e[(int)4] = (int)0;
									HX_STACK_LINE(87)
									e[(int)8] = (int)0;
									HX_STACK_LINE(87)
									e[(int)12] = this->local->pos->x;
									HX_STACK_LINE(87)
									e[(int)1] = (int)0;
									HX_STACK_LINE(87)
									e[(int)5] = (int)1;
									HX_STACK_LINE(87)
									e[(int)9] = (int)0;
									HX_STACK_LINE(87)
									e[(int)13] = this->local->pos->y;
									HX_STACK_LINE(87)
									e[(int)2] = (int)0;
									HX_STACK_LINE(87)
									e[(int)6] = (int)0;
									HX_STACK_LINE(87)
									e[(int)10] = (int)1;
									HX_STACK_LINE(87)
									e[(int)14] = this->local->pos->z;
									HX_STACK_LINE(87)
									e[(int)3] = (int)0;
									HX_STACK_LINE(87)
									e[(int)7] = (int)0;
									HX_STACK_LINE(87)
									e[(int)11] = (int)0;
									HX_STACK_LINE(87)
									e[(int)15] = (int)1;
									HX_STACK_LINE(87)
									_this1;
								}
								HX_STACK_LINE(87)
								_this1;
							}
							HX_STACK_LINE(87)
							{
								HX_STACK_LINE(87)
								::phoenix::Matrix _this1 = this->_rotation_matrix;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(87)
								::phoenix::Quaternion q = this->local->rotation;		HX_STACK_VAR(q,"q");
								HX_STACK_LINE(87)
								Array< Float > te = _this1->elements;		HX_STACK_VAR(te,"te");
								HX_STACK_LINE(87)
								Float x2 = (q->x + q->x);		HX_STACK_VAR(x2,"x2");
								HX_STACK_LINE(87)
								Float y2 = (q->y + q->y);		HX_STACK_VAR(y2,"y2");
								HX_STACK_LINE(87)
								Float z2 = (q->z + q->z);		HX_STACK_VAR(z2,"z2");
								HX_STACK_LINE(87)
								Float xx = (q->x * x2);		HX_STACK_VAR(xx,"xx");
								HX_STACK_LINE(87)
								Float xy = (q->x * y2);		HX_STACK_VAR(xy,"xy");
								HX_STACK_LINE(87)
								Float xz = (q->x * z2);		HX_STACK_VAR(xz,"xz");
								HX_STACK_LINE(87)
								Float yy = (q->y * y2);		HX_STACK_VAR(yy,"yy");
								HX_STACK_LINE(87)
								Float yz = (q->y * z2);		HX_STACK_VAR(yz,"yz");
								HX_STACK_LINE(87)
								Float zz = (q->z * z2);		HX_STACK_VAR(zz,"zz");
								HX_STACK_LINE(87)
								Float wx = (q->w * x2);		HX_STACK_VAR(wx,"wx");
								HX_STACK_LINE(87)
								Float wy = (q->w * y2);		HX_STACK_VAR(wy,"wy");
								HX_STACK_LINE(87)
								Float wz = (q->w * z2);		HX_STACK_VAR(wz,"wz");
								HX_STACK_LINE(87)
								te[(int)0] = ((int)1 - ((yy + zz)));
								HX_STACK_LINE(87)
								te[(int)4] = (xy - wz);
								HX_STACK_LINE(87)
								te[(int)8] = (xz + wy);
								HX_STACK_LINE(87)
								te[(int)1] = (xy + wz);
								HX_STACK_LINE(87)
								te[(int)5] = ((int)1 - ((xx + zz)));
								HX_STACK_LINE(87)
								te[(int)9] = (yz - wx);
								HX_STACK_LINE(87)
								te[(int)2] = (xz - wy);
								HX_STACK_LINE(87)
								te[(int)6] = (yz + wx);
								HX_STACK_LINE(87)
								te[(int)10] = ((int)1 - ((xx + yy)));
								HX_STACK_LINE(87)
								te[(int)3] = (int)0;
								HX_STACK_LINE(87)
								te[(int)7] = (int)0;
								HX_STACK_LINE(87)
								te[(int)11] = (int)0;
								HX_STACK_LINE(87)
								te[(int)12] = (int)0;
								HX_STACK_LINE(87)
								te[(int)13] = (int)0;
								HX_STACK_LINE(87)
								te[(int)14] = (int)0;
								HX_STACK_LINE(87)
								te[(int)15] = (int)1;
								HX_STACK_LINE(87)
								_this1;
							}
							HX_STACK_LINE(87)
							{
								HX_STACK_LINE(87)
								::phoenix::Matrix _this1 = this->_origin_undo_matrix;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(87)
								{
									HX_STACK_LINE(87)
									Array< Float > e = _this1->elements;		HX_STACK_VAR(e,"e");
									HX_STACK_LINE(87)
									e[(int)0] = (int)1;
									HX_STACK_LINE(87)
									e[(int)4] = (int)0;
									HX_STACK_LINE(87)
									e[(int)8] = (int)0;
									HX_STACK_LINE(87)
									e[(int)12] = -(this->origin->x);
									HX_STACK_LINE(87)
									e[(int)1] = (int)0;
									HX_STACK_LINE(87)
									e[(int)5] = (int)1;
									HX_STACK_LINE(87)
									e[(int)9] = (int)0;
									HX_STACK_LINE(87)
									e[(int)13] = -(this->origin->y);
									HX_STACK_LINE(87)
									e[(int)2] = (int)0;
									HX_STACK_LINE(87)
									e[(int)6] = (int)0;
									HX_STACK_LINE(87)
									e[(int)10] = (int)1;
									HX_STACK_LINE(87)
									e[(int)14] = -(this->origin->z);
									HX_STACK_LINE(87)
									e[(int)3] = (int)0;
									HX_STACK_LINE(87)
									e[(int)7] = (int)0;
									HX_STACK_LINE(87)
									e[(int)11] = (int)0;
									HX_STACK_LINE(87)
									e[(int)15] = (int)1;
									HX_STACK_LINE(87)
									_this1;
								}
								HX_STACK_LINE(87)
								_this1;
							}
							HX_STACK_LINE(87)
							{
								HX_STACK_LINE(87)
								::phoenix::Matrix _this1 = this->local->matrix;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(87)
								{
									HX_STACK_LINE(87)
									Array< Float > e = _this1->elements;		HX_STACK_VAR(e,"e");
									HX_STACK_LINE(87)
									e[(int)0] = (int)1;
									HX_STACK_LINE(87)
									e[(int)4] = (int)0;
									HX_STACK_LINE(87)
									e[(int)8] = (int)0;
									HX_STACK_LINE(87)
									e[(int)12] = this->origin->x;
									HX_STACK_LINE(87)
									e[(int)1] = (int)0;
									HX_STACK_LINE(87)
									e[(int)5] = (int)1;
									HX_STACK_LINE(87)
									e[(int)9] = (int)0;
									HX_STACK_LINE(87)
									e[(int)13] = this->origin->y;
									HX_STACK_LINE(87)
									e[(int)2] = (int)0;
									HX_STACK_LINE(87)
									e[(int)6] = (int)0;
									HX_STACK_LINE(87)
									e[(int)10] = (int)1;
									HX_STACK_LINE(87)
									e[(int)14] = this->origin->z;
									HX_STACK_LINE(87)
									e[(int)3] = (int)0;
									HX_STACK_LINE(87)
									e[(int)7] = (int)0;
									HX_STACK_LINE(87)
									e[(int)11] = (int)0;
									HX_STACK_LINE(87)
									e[(int)15] = (int)1;
									HX_STACK_LINE(87)
									_this1;
								}
								HX_STACK_LINE(87)
								_this1;
							}
							HX_STACK_LINE(87)
							{
								HX_STACK_LINE(87)
								::phoenix::Matrix _this1 = this->local->matrix;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(87)
								::phoenix::Vector _v = this->local->scale;		HX_STACK_VAR(_v,"_v");
								HX_STACK_LINE(87)
								Array< Float > te = _this1->elements;		HX_STACK_VAR(te,"te");
								HX_STACK_LINE(87)
								Float _x = _v->x;		HX_STACK_VAR(_x,"_x");
								HX_STACK_LINE(87)
								Float _y = _v->y;		HX_STACK_VAR(_y,"_y");
								HX_STACK_LINE(87)
								Float _z = _v->z;		HX_STACK_VAR(_z,"_z");
								HX_STACK_LINE(87)
								hx::MultEq(te[(int)0],_x);
								HX_STACK_LINE(87)
								hx::MultEq(te[(int)4],_y);
								HX_STACK_LINE(87)
								hx::MultEq(te[(int)8],_z);
								HX_STACK_LINE(87)
								hx::MultEq(te[(int)1],_x);
								HX_STACK_LINE(87)
								hx::MultEq(te[(int)5],_y);
								HX_STACK_LINE(87)
								hx::MultEq(te[(int)9],_z);
								HX_STACK_LINE(87)
								hx::MultEq(te[(int)2],_x);
								HX_STACK_LINE(87)
								hx::MultEq(te[(int)6],_y);
								HX_STACK_LINE(87)
								hx::MultEq(te[(int)10],_z);
								HX_STACK_LINE(87)
								hx::MultEq(te[(int)3],_x);
								HX_STACK_LINE(87)
								hx::MultEq(te[(int)7],_y);
								HX_STACK_LINE(87)
								hx::MultEq(te[(int)11],_z);
								HX_STACK_LINE(87)
								_this1;
							}
							HX_STACK_LINE(87)
							{
								HX_STACK_LINE(87)
								::phoenix::Matrix _this1 = this->local->matrix;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(87)
								{
									HX_STACK_LINE(87)
									Array< Float > ae = _this1->elements;		HX_STACK_VAR(ae,"ae");
									HX_STACK_LINE(87)
									Array< Float > be = this->_rotation_matrix->elements;		HX_STACK_VAR(be,"be");
									HX_STACK_LINE(87)
									Array< Float > te = _this1->elements;		HX_STACK_VAR(te,"te");
									HX_STACK_LINE(87)
									Float a11 = ae->__get((int)0);		HX_STACK_VAR(a11,"a11");
									HX_STACK_LINE(87)
									Float a12 = ae->__get((int)4);		HX_STACK_VAR(a12,"a12");
									HX_STACK_LINE(87)
									Float a13 = ae->__get((int)8);		HX_STACK_VAR(a13,"a13");
									HX_STACK_LINE(87)
									Float a14 = ae->__get((int)12);		HX_STACK_VAR(a14,"a14");
									HX_STACK_LINE(87)
									Float a21 = ae->__get((int)1);		HX_STACK_VAR(a21,"a21");
									HX_STACK_LINE(87)
									Float a22 = ae->__get((int)5);		HX_STACK_VAR(a22,"a22");
									HX_STACK_LINE(87)
									Float a23 = ae->__get((int)9);		HX_STACK_VAR(a23,"a23");
									HX_STACK_LINE(87)
									Float a24 = ae->__get((int)13);		HX_STACK_VAR(a24,"a24");
									HX_STACK_LINE(87)
									Float a31 = ae->__get((int)2);		HX_STACK_VAR(a31,"a31");
									HX_STACK_LINE(87)
									Float a32 = ae->__get((int)6);		HX_STACK_VAR(a32,"a32");
									HX_STACK_LINE(87)
									Float a33 = ae->__get((int)10);		HX_STACK_VAR(a33,"a33");
									HX_STACK_LINE(87)
									Float a34 = ae->__get((int)14);		HX_STACK_VAR(a34,"a34");
									HX_STACK_LINE(87)
									Float a41 = ae->__get((int)3);		HX_STACK_VAR(a41,"a41");
									HX_STACK_LINE(87)
									Float a42 = ae->__get((int)7);		HX_STACK_VAR(a42,"a42");
									HX_STACK_LINE(87)
									Float a43 = ae->__get((int)11);		HX_STACK_VAR(a43,"a43");
									HX_STACK_LINE(87)
									Float a44 = ae->__get((int)15);		HX_STACK_VAR(a44,"a44");
									HX_STACK_LINE(87)
									Float b11 = be->__get((int)0);		HX_STACK_VAR(b11,"b11");
									HX_STACK_LINE(87)
									Float b12 = be->__get((int)4);		HX_STACK_VAR(b12,"b12");
									HX_STACK_LINE(87)
									Float b13 = be->__get((int)8);		HX_STACK_VAR(b13,"b13");
									HX_STACK_LINE(87)
									Float b14 = be->__get((int)12);		HX_STACK_VAR(b14,"b14");
									HX_STACK_LINE(87)
									Float b21 = be->__get((int)1);		HX_STACK_VAR(b21,"b21");
									HX_STACK_LINE(87)
									Float b22 = be->__get((int)5);		HX_STACK_VAR(b22,"b22");
									HX_STACK_LINE(87)
									Float b23 = be->__get((int)9);		HX_STACK_VAR(b23,"b23");
									HX_STACK_LINE(87)
									Float b24 = be->__get((int)13);		HX_STACK_VAR(b24,"b24");
									HX_STACK_LINE(87)
									Float b31 = be->__get((int)2);		HX_STACK_VAR(b31,"b31");
									HX_STACK_LINE(87)
									Float b32 = be->__get((int)6);		HX_STACK_VAR(b32,"b32");
									HX_STACK_LINE(87)
									Float b33 = be->__get((int)10);		HX_STACK_VAR(b33,"b33");
									HX_STACK_LINE(87)
									Float b34 = be->__get((int)14);		HX_STACK_VAR(b34,"b34");
									HX_STACK_LINE(87)
									Float b41 = be->__get((int)3);		HX_STACK_VAR(b41,"b41");
									HX_STACK_LINE(87)
									Float b42 = be->__get((int)7);		HX_STACK_VAR(b42,"b42");
									HX_STACK_LINE(87)
									Float b43 = be->__get((int)11);		HX_STACK_VAR(b43,"b43");
									HX_STACK_LINE(87)
									Float b44 = be->__get((int)15);		HX_STACK_VAR(b44,"b44");
									HX_STACK_LINE(87)
									te[(int)0] = ((((a11 * b11) + (a12 * b21)) + (a13 * b31)) + (a14 * b41));
									HX_STACK_LINE(87)
									te[(int)4] = ((((a11 * b12) + (a12 * b22)) + (a13 * b32)) + (a14 * b42));
									HX_STACK_LINE(87)
									te[(int)8] = ((((a11 * b13) + (a12 * b23)) + (a13 * b33)) + (a14 * b43));
									HX_STACK_LINE(87)
									te[(int)12] = ((((a11 * b14) + (a12 * b24)) + (a13 * b34)) + (a14 * b44));
									HX_STACK_LINE(87)
									te[(int)1] = ((((a21 * b11) + (a22 * b21)) + (a23 * b31)) + (a24 * b41));
									HX_STACK_LINE(87)
									te[(int)5] = ((((a21 * b12) + (a22 * b22)) + (a23 * b32)) + (a24 * b42));
									HX_STACK_LINE(87)
									te[(int)9] = ((((a21 * b13) + (a22 * b23)) + (a23 * b33)) + (a24 * b43));
									HX_STACK_LINE(87)
									te[(int)13] = ((((a21 * b14) + (a22 * b24)) + (a23 * b34)) + (a24 * b44));
									HX_STACK_LINE(87)
									te[(int)2] = ((((a31 * b11) + (a32 * b21)) + (a33 * b31)) + (a34 * b41));
									HX_STACK_LINE(87)
									te[(int)6] = ((((a31 * b12) + (a32 * b22)) + (a33 * b32)) + (a34 * b42));
									HX_STACK_LINE(87)
									te[(int)10] = ((((a31 * b13) + (a32 * b23)) + (a33 * b33)) + (a34 * b43));
									HX_STACK_LINE(87)
									te[(int)14] = ((((a31 * b14) + (a32 * b24)) + (a33 * b34)) + (a34 * b44));
									HX_STACK_LINE(87)
									te[(int)3] = ((((a41 * b11) + (a42 * b21)) + (a43 * b31)) + (a44 * b41));
									HX_STACK_LINE(87)
									te[(int)7] = ((((a41 * b12) + (a42 * b22)) + (a43 * b32)) + (a44 * b42));
									HX_STACK_LINE(87)
									te[(int)11] = ((((a41 * b13) + (a42 * b23)) + (a43 * b33)) + (a44 * b43));
									HX_STACK_LINE(87)
									te[(int)15] = ((((a41 * b14) + (a42 * b24)) + (a43 * b34)) + (a44 * b44));
									HX_STACK_LINE(87)
									_this1;
								}
							}
							HX_STACK_LINE(87)
							{
								HX_STACK_LINE(87)
								::phoenix::Matrix _this1 = this->local->matrix;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(87)
								::phoenix::Vector _v = this->local->pos;		HX_STACK_VAR(_v,"_v");
								HX_STACK_LINE(87)
								Array< Float > te = _this1->elements;		HX_STACK_VAR(te,"te");
								HX_STACK_LINE(87)
								te[(int)12] = _v->x;
								HX_STACK_LINE(87)
								te[(int)13] = _v->y;
								HX_STACK_LINE(87)
								te[(int)14] = _v->z;
								HX_STACK_LINE(87)
								_this1;
							}
							HX_STACK_LINE(87)
							{
								HX_STACK_LINE(87)
								::phoenix::Matrix _this1 = this->local->matrix;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(87)
								{
									HX_STACK_LINE(87)
									Array< Float > ae = _this1->elements;		HX_STACK_VAR(ae,"ae");
									HX_STACK_LINE(87)
									Array< Float > be = this->_origin_undo_matrix->elements;		HX_STACK_VAR(be,"be");
									HX_STACK_LINE(87)
									Array< Float > te = _this1->elements;		HX_STACK_VAR(te,"te");
									HX_STACK_LINE(87)
									Float a11 = ae->__get((int)0);		HX_STACK_VAR(a11,"a11");
									HX_STACK_LINE(87)
									Float a12 = ae->__get((int)4);		HX_STACK_VAR(a12,"a12");
									HX_STACK_LINE(87)
									Float a13 = ae->__get((int)8);		HX_STACK_VAR(a13,"a13");
									HX_STACK_LINE(87)
									Float a14 = ae->__get((int)12);		HX_STACK_VAR(a14,"a14");
									HX_STACK_LINE(87)
									Float a21 = ae->__get((int)1);		HX_STACK_VAR(a21,"a21");
									HX_STACK_LINE(87)
									Float a22 = ae->__get((int)5);		HX_STACK_VAR(a22,"a22");
									HX_STACK_LINE(87)
									Float a23 = ae->__get((int)9);		HX_STACK_VAR(a23,"a23");
									HX_STACK_LINE(87)
									Float a24 = ae->__get((int)13);		HX_STACK_VAR(a24,"a24");
									HX_STACK_LINE(87)
									Float a31 = ae->__get((int)2);		HX_STACK_VAR(a31,"a31");
									HX_STACK_LINE(87)
									Float a32 = ae->__get((int)6);		HX_STACK_VAR(a32,"a32");
									HX_STACK_LINE(87)
									Float a33 = ae->__get((int)10);		HX_STACK_VAR(a33,"a33");
									HX_STACK_LINE(87)
									Float a34 = ae->__get((int)14);		HX_STACK_VAR(a34,"a34");
									HX_STACK_LINE(87)
									Float a41 = ae->__get((int)3);		HX_STACK_VAR(a41,"a41");
									HX_STACK_LINE(87)
									Float a42 = ae->__get((int)7);		HX_STACK_VAR(a42,"a42");
									HX_STACK_LINE(87)
									Float a43 = ae->__get((int)11);		HX_STACK_VAR(a43,"a43");
									HX_STACK_LINE(87)
									Float a44 = ae->__get((int)15);		HX_STACK_VAR(a44,"a44");
									HX_STACK_LINE(87)
									Float b11 = be->__get((int)0);		HX_STACK_VAR(b11,"b11");
									HX_STACK_LINE(87)
									Float b12 = be->__get((int)4);		HX_STACK_VAR(b12,"b12");
									HX_STACK_LINE(87)
									Float b13 = be->__get((int)8);		HX_STACK_VAR(b13,"b13");
									HX_STACK_LINE(87)
									Float b14 = be->__get((int)12);		HX_STACK_VAR(b14,"b14");
									HX_STACK_LINE(87)
									Float b21 = be->__get((int)1);		HX_STACK_VAR(b21,"b21");
									HX_STACK_LINE(87)
									Float b22 = be->__get((int)5);		HX_STACK_VAR(b22,"b22");
									HX_STACK_LINE(87)
									Float b23 = be->__get((int)9);		HX_STACK_VAR(b23,"b23");
									HX_STACK_LINE(87)
									Float b24 = be->__get((int)13);		HX_STACK_VAR(b24,"b24");
									HX_STACK_LINE(87)
									Float b31 = be->__get((int)2);		HX_STACK_VAR(b31,"b31");
									HX_STACK_LINE(87)
									Float b32 = be->__get((int)6);		HX_STACK_VAR(b32,"b32");
									HX_STACK_LINE(87)
									Float b33 = be->__get((int)10);		HX_STACK_VAR(b33,"b33");
									HX_STACK_LINE(87)
									Float b34 = be->__get((int)14);		HX_STACK_VAR(b34,"b34");
									HX_STACK_LINE(87)
									Float b41 = be->__get((int)3);		HX_STACK_VAR(b41,"b41");
									HX_STACK_LINE(87)
									Float b42 = be->__get((int)7);		HX_STACK_VAR(b42,"b42");
									HX_STACK_LINE(87)
									Float b43 = be->__get((int)11);		HX_STACK_VAR(b43,"b43");
									HX_STACK_LINE(87)
									Float b44 = be->__get((int)15);		HX_STACK_VAR(b44,"b44");
									HX_STACK_LINE(87)
									te[(int)0] = ((((a11 * b11) + (a12 * b21)) + (a13 * b31)) + (a14 * b41));
									HX_STACK_LINE(87)
									te[(int)4] = ((((a11 * b12) + (a12 * b22)) + (a13 * b32)) + (a14 * b42));
									HX_STACK_LINE(87)
									te[(int)8] = ((((a11 * b13) + (a12 * b23)) + (a13 * b33)) + (a14 * b43));
									HX_STACK_LINE(87)
									te[(int)12] = ((((a11 * b14) + (a12 * b24)) + (a13 * b34)) + (a14 * b44));
									HX_STACK_LINE(87)
									te[(int)1] = ((((a21 * b11) + (a22 * b21)) + (a23 * b31)) + (a24 * b41));
									HX_STACK_LINE(87)
									te[(int)5] = ((((a21 * b12) + (a22 * b22)) + (a23 * b32)) + (a24 * b42));
									HX_STACK_LINE(87)
									te[(int)9] = ((((a21 * b13) + (a22 * b23)) + (a23 * b33)) + (a24 * b43));
									HX_STACK_LINE(87)
									te[(int)13] = ((((a21 * b14) + (a22 * b24)) + (a23 * b34)) + (a24 * b44));
									HX_STACK_LINE(87)
									te[(int)2] = ((((a31 * b11) + (a32 * b21)) + (a33 * b31)) + (a34 * b41));
									HX_STACK_LINE(87)
									te[(int)6] = ((((a31 * b12) + (a32 * b22)) + (a33 * b32)) + (a34 * b42));
									HX_STACK_LINE(87)
									te[(int)10] = ((((a31 * b13) + (a32 * b23)) + (a33 * b33)) + (a34 * b43));
									HX_STACK_LINE(87)
									te[(int)14] = ((((a31 * b14) + (a32 * b24)) + (a33 * b34)) + (a34 * b44));
									HX_STACK_LINE(87)
									te[(int)3] = ((((a41 * b11) + (a42 * b21)) + (a43 * b31)) + (a44 * b41));
									HX_STACK_LINE(87)
									te[(int)7] = ((((a41 * b12) + (a42 * b22)) + (a43 * b32)) + (a44 * b42));
									HX_STACK_LINE(87)
									te[(int)11] = ((((a41 * b13) + (a42 * b23)) + (a43 * b33)) + (a44 * b43));
									HX_STACK_LINE(87)
									te[(int)15] = ((((a41 * b14) + (a42 * b24)) + (a43 * b34)) + (a44 * b44));
									HX_STACK_LINE(87)
									_this1;
								}
							}
							HX_STACK_LINE(87)
							if (((this->parent != null()))){
								HX_STACK_LINE(87)
								::phoenix::Spatial _this1 = this->get_world();		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(87)
								::phoenix::Matrix _m;		HX_STACK_VAR(_m,"_m");
								HX_STACK_LINE(87)
								{
									HX_STACK_LINE(87)
									::phoenix::Matrix _this2;		HX_STACK_VAR(_this2,"_this2");
									HX_STACK_LINE(87)
									{
										HX_STACK_LINE(87)
										::phoenix::Spatial _this3 = this->get_world();		HX_STACK_VAR(_this3,"_this3");
										HX_STACK_LINE(87)
										_this2 = _this3->matrix;
									}
									HX_STACK_LINE(87)
									::phoenix::Matrix _a;		HX_STACK_VAR(_a,"_a");
									HX_STACK_LINE(87)
									{
										HX_STACK_LINE(87)
										::phoenix::Spatial _this3 = this->parent->get_world();		HX_STACK_VAR(_this3,"_this3");
										HX_STACK_LINE(87)
										_a = _this3->matrix;
									}
									HX_STACK_LINE(87)
									Array< Float > ae = _a->elements;		HX_STACK_VAR(ae,"ae");
									HX_STACK_LINE(87)
									Array< Float > be = this->local->matrix->elements;		HX_STACK_VAR(be,"be");
									HX_STACK_LINE(87)
									Array< Float > te = _this2->elements;		HX_STACK_VAR(te,"te");
									HX_STACK_LINE(87)
									Float a11 = ae->__get((int)0);		HX_STACK_VAR(a11,"a11");
									HX_STACK_LINE(87)
									Float a12 = ae->__get((int)4);		HX_STACK_VAR(a12,"a12");
									HX_STACK_LINE(87)
									Float a13 = ae->__get((int)8);		HX_STACK_VAR(a13,"a13");
									HX_STACK_LINE(87)
									Float a14 = ae->__get((int)12);		HX_STACK_VAR(a14,"a14");
									HX_STACK_LINE(87)
									Float a21 = ae->__get((int)1);		HX_STACK_VAR(a21,"a21");
									HX_STACK_LINE(87)
									Float a22 = ae->__get((int)5);		HX_STACK_VAR(a22,"a22");
									HX_STACK_LINE(87)
									Float a23 = ae->__get((int)9);		HX_STACK_VAR(a23,"a23");
									HX_STACK_LINE(87)
									Float a24 = ae->__get((int)13);		HX_STACK_VAR(a24,"a24");
									HX_STACK_LINE(87)
									Float a31 = ae->__get((int)2);		HX_STACK_VAR(a31,"a31");
									HX_STACK_LINE(87)
									Float a32 = ae->__get((int)6);		HX_STACK_VAR(a32,"a32");
									HX_STACK_LINE(87)
									Float a33 = ae->__get((int)10);		HX_STACK_VAR(a33,"a33");
									HX_STACK_LINE(87)
									Float a34 = ae->__get((int)14);		HX_STACK_VAR(a34,"a34");
									HX_STACK_LINE(87)
									Float a41 = ae->__get((int)3);		HX_STACK_VAR(a41,"a41");
									HX_STACK_LINE(87)
									Float a42 = ae->__get((int)7);		HX_STACK_VAR(a42,"a42");
									HX_STACK_LINE(87)
									Float a43 = ae->__get((int)11);		HX_STACK_VAR(a43,"a43");
									HX_STACK_LINE(87)
									Float a44 = ae->__get((int)15);		HX_STACK_VAR(a44,"a44");
									HX_STACK_LINE(87)
									Float b11 = be->__get((int)0);		HX_STACK_VAR(b11,"b11");
									HX_STACK_LINE(87)
									Float b12 = be->__get((int)4);		HX_STACK_VAR(b12,"b12");
									HX_STACK_LINE(87)
									Float b13 = be->__get((int)8);		HX_STACK_VAR(b13,"b13");
									HX_STACK_LINE(87)
									Float b14 = be->__get((int)12);		HX_STACK_VAR(b14,"b14");
									HX_STACK_LINE(87)
									Float b21 = be->__get((int)1);		HX_STACK_VAR(b21,"b21");
									HX_STACK_LINE(87)
									Float b22 = be->__get((int)5);		HX_STACK_VAR(b22,"b22");
									HX_STACK_LINE(87)
									Float b23 = be->__get((int)9);		HX_STACK_VAR(b23,"b23");
									HX_STACK_LINE(87)
									Float b24 = be->__get((int)13);		HX_STACK_VAR(b24,"b24");
									HX_STACK_LINE(87)
									Float b31 = be->__get((int)2);		HX_STACK_VAR(b31,"b31");
									HX_STACK_LINE(87)
									Float b32 = be->__get((int)6);		HX_STACK_VAR(b32,"b32");
									HX_STACK_LINE(87)
									Float b33 = be->__get((int)10);		HX_STACK_VAR(b33,"b33");
									HX_STACK_LINE(87)
									Float b34 = be->__get((int)14);		HX_STACK_VAR(b34,"b34");
									HX_STACK_LINE(87)
									Float b41 = be->__get((int)3);		HX_STACK_VAR(b41,"b41");
									HX_STACK_LINE(87)
									Float b42 = be->__get((int)7);		HX_STACK_VAR(b42,"b42");
									HX_STACK_LINE(87)
									Float b43 = be->__get((int)11);		HX_STACK_VAR(b43,"b43");
									HX_STACK_LINE(87)
									Float b44 = be->__get((int)15);		HX_STACK_VAR(b44,"b44");
									HX_STACK_LINE(87)
									te[(int)0] = ((((a11 * b11) + (a12 * b21)) + (a13 * b31)) + (a14 * b41));
									HX_STACK_LINE(87)
									te[(int)4] = ((((a11 * b12) + (a12 * b22)) + (a13 * b32)) + (a14 * b42));
									HX_STACK_LINE(87)
									te[(int)8] = ((((a11 * b13) + (a12 * b23)) + (a13 * b33)) + (a14 * b43));
									HX_STACK_LINE(87)
									te[(int)12] = ((((a11 * b14) + (a12 * b24)) + (a13 * b34)) + (a14 * b44));
									HX_STACK_LINE(87)
									te[(int)1] = ((((a21 * b11) + (a22 * b21)) + (a23 * b31)) + (a24 * b41));
									HX_STACK_LINE(87)
									te[(int)5] = ((((a21 * b12) + (a22 * b22)) + (a23 * b32)) + (a24 * b42));
									HX_STACK_LINE(87)
									te[(int)9] = ((((a21 * b13) + (a22 * b23)) + (a23 * b33)) + (a24 * b43));
									HX_STACK_LINE(87)
									te[(int)13] = ((((a21 * b14) + (a22 * b24)) + (a23 * b34)) + (a24 * b44));
									HX_STACK_LINE(87)
									te[(int)2] = ((((a31 * b11) + (a32 * b21)) + (a33 * b31)) + (a34 * b41));
									HX_STACK_LINE(87)
									te[(int)6] = ((((a31 * b12) + (a32 * b22)) + (a33 * b32)) + (a34 * b42));
									HX_STACK_LINE(87)
									te[(int)10] = ((((a31 * b13) + (a32 * b23)) + (a33 * b33)) + (a34 * b43));
									HX_STACK_LINE(87)
									te[(int)14] = ((((a31 * b14) + (a32 * b24)) + (a33 * b34)) + (a34 * b44));
									HX_STACK_LINE(87)
									te[(int)3] = ((((a41 * b11) + (a42 * b21)) + (a43 * b31)) + (a44 * b41));
									HX_STACK_LINE(87)
									te[(int)7] = ((((a41 * b12) + (a42 * b22)) + (a43 * b32)) + (a44 * b42));
									HX_STACK_LINE(87)
									te[(int)11] = ((((a41 * b13) + (a42 * b23)) + (a43 * b33)) + (a44 * b43));
									HX_STACK_LINE(87)
									te[(int)15] = ((((a41 * b14) + (a42 * b24)) + (a43 * b34)) + (a44 * b44));
									HX_STACK_LINE(87)
									_m = _this2;
								}
								HX_STACK_LINE(87)
								_this1->matrix = _m;
								HX_STACK_LINE(87)
								if (((_m != null()))){
									HX_STACK_LINE(87)
									::snow::platform::native::utils::Float32Array _g8;		HX_STACK_VAR(_g8,"_g8");
									HX_STACK_LINE(87)
									{
										HX_STACK_LINE(87)
										::phoenix::Matrix _this2 = _this1->matrix;		HX_STACK_VAR(_this2,"_this2");
										HX_STACK_LINE(87)
										{
											HX_STACK_LINE(87)
											::snow::platform::native::utils::Float32Array _this3 = _this2->_float32array;		HX_STACK_VAR(_this3,"_this3");
											HX_STACK_LINE(87)
											Dynamic bufferOrArray = _this2->elements;		HX_STACK_VAR(bufferOrArray,"bufferOrArray");
											HX_STACK_LINE(87)
											int offset = (int)0;		HX_STACK_VAR(offset,"offset");
											HX_STACK_LINE(87)
											if ((::Std_obj::is(bufferOrArray,hx::ClassOf< Array<int> >()))){
												HX_STACK_LINE(87)
												Array< Float > floats = bufferOrArray;		HX_STACK_VAR(floats,"floats");
												HX_STACK_LINE(87)
												{
													HX_STACK_LINE(87)
													int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
													HX_STACK_LINE(87)
													int _g = floats->length;		HX_STACK_VAR(_g,"_g");
													HX_STACK_LINE(87)
													while((true)){
														HX_STACK_LINE(87)
														if ((!(((_g1 < _g))))){
															HX_STACK_LINE(87)
															break;
														}
														HX_STACK_LINE(87)
														int i = (_g1)++;		HX_STACK_VAR(i,"i");
														HX_STACK_LINE(87)
														::__hxcpp_memory_set_float(_this3->bytes,(((int((i + offset)) << int((int)2))) + _this3->byteOffset),floats->__get(i));
													}
												}
											}
											else{
												HX_STACK_LINE(87)
												if ((::Std_obj::is(bufferOrArray,hx::ClassOf< ::snow::platform::native::utils::Float32Array >()))){
													HX_STACK_LINE(87)
													::snow::platform::native::utils::Float32Array floats = bufferOrArray;		HX_STACK_VAR(floats,"floats");
													HX_STACK_LINE(87)
													{
														HX_STACK_LINE(87)
														int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
														HX_STACK_LINE(87)
														int _g = floats->length;		HX_STACK_VAR(_g,"_g");
														HX_STACK_LINE(87)
														while((true)){
															HX_STACK_LINE(87)
															if ((!(((_g1 < _g))))){
																HX_STACK_LINE(87)
																break;
															}
															HX_STACK_LINE(87)
															int i = (_g1)++;		HX_STACK_VAR(i,"i");
															HX_STACK_LINE(87)
															::__hxcpp_memory_set_float(_this3->bytes,(((int((i + offset)) << int((int)2))) + _this3->byteOffset),floats->__get(i));
														}
													}
												}
												else{
													HX_STACK_LINE(87)
													HX_STACK_DO_THROW(HX_CSTRING("Invalid input buffer"));
												}
											}
										}
										HX_STACK_LINE(87)
										_g8 = ::snow::platform::native::utils::Float32Array_obj::__new(_this2->_float32array,null(),null());
									}
									HX_STACK_LINE(87)
									_this1->floats = _g8;
								}
								HX_STACK_LINE(87)
								_this1->matrix;
							}
							else{
								HX_STACK_LINE(87)
								::phoenix::Spatial _this1 = this->get_world();		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(87)
								::phoenix::Matrix _m;		HX_STACK_VAR(_m,"_m");
								HX_STACK_LINE(87)
								{
									HX_STACK_LINE(87)
									Array< Float > te = this->local->matrix->elements;		HX_STACK_VAR(te,"te");
									HX_STACK_LINE(87)
									_m = ::phoenix::Matrix_obj::__new(te->__get((int)0),te->__get((int)4),te->__get((int)8),te->__get((int)12),te->__get((int)1),te->__get((int)5),te->__get((int)9),te->__get((int)13),te->__get((int)2),te->__get((int)6),te->__get((int)10),te->__get((int)14),te->__get((int)3),te->__get((int)7),te->__get((int)11),te->__get((int)15));
								}
								HX_STACK_LINE(87)
								_this1->matrix = _m;
								HX_STACK_LINE(87)
								if (((_m != null()))){
									HX_STACK_LINE(87)
									::snow::platform::native::utils::Float32Array _g9;		HX_STACK_VAR(_g9,"_g9");
									HX_STACK_LINE(87)
									{
										HX_STACK_LINE(87)
										::phoenix::Matrix _this2 = _this1->matrix;		HX_STACK_VAR(_this2,"_this2");
										HX_STACK_LINE(87)
										{
											HX_STACK_LINE(87)
											::snow::platform::native::utils::Float32Array _this3 = _this2->_float32array;		HX_STACK_VAR(_this3,"_this3");
											HX_STACK_LINE(87)
											Dynamic bufferOrArray = _this2->elements;		HX_STACK_VAR(bufferOrArray,"bufferOrArray");
											HX_STACK_LINE(87)
											int offset = (int)0;		HX_STACK_VAR(offset,"offset");
											HX_STACK_LINE(87)
											if ((::Std_obj::is(bufferOrArray,hx::ClassOf< Array<int> >()))){
												HX_STACK_LINE(87)
												Array< Float > floats = bufferOrArray;		HX_STACK_VAR(floats,"floats");
												HX_STACK_LINE(87)
												{
													HX_STACK_LINE(87)
													int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
													HX_STACK_LINE(87)
													int _g = floats->length;		HX_STACK_VAR(_g,"_g");
													HX_STACK_LINE(87)
													while((true)){
														HX_STACK_LINE(87)
														if ((!(((_g1 < _g))))){
															HX_STACK_LINE(87)
															break;
														}
														HX_STACK_LINE(87)
														int i = (_g1)++;		HX_STACK_VAR(i,"i");
														HX_STACK_LINE(87)
														::__hxcpp_memory_set_float(_this3->bytes,(((int((i + offset)) << int((int)2))) + _this3->byteOffset),floats->__get(i));
													}
												}
											}
											else{
												HX_STACK_LINE(87)
												if ((::Std_obj::is(bufferOrArray,hx::ClassOf< ::snow::platform::native::utils::Float32Array >()))){
													HX_STACK_LINE(87)
													::snow::platform::native::utils::Float32Array floats = bufferOrArray;		HX_STACK_VAR(floats,"floats");
													HX_STACK_LINE(87)
													{
														HX_STACK_LINE(87)
														int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
														HX_STACK_LINE(87)
														int _g = floats->length;		HX_STACK_VAR(_g,"_g");
														HX_STACK_LINE(87)
														while((true)){
															HX_STACK_LINE(87)
															if ((!(((_g1 < _g))))){
																HX_STACK_LINE(87)
																break;
															}
															HX_STACK_LINE(87)
															int i = (_g1)++;		HX_STACK_VAR(i,"i");
															HX_STACK_LINE(87)
															::__hxcpp_memory_set_float(_this3->bytes,(((int((i + offset)) << int((int)2))) + _this3->byteOffset),floats->__get(i));
														}
													}
												}
												else{
													HX_STACK_LINE(87)
													HX_STACK_DO_THROW(HX_CSTRING("Invalid input buffer"));
												}
											}
										}
										HX_STACK_LINE(87)
										_g9 = ::snow::platform::native::utils::Float32Array_obj::__new(_this2->_float32array,null(),null());
									}
									HX_STACK_LINE(87)
									_this1->floats = _g9;
								}
								HX_STACK_LINE(87)
								_this1->matrix;
							}
							HX_STACK_LINE(87)
							{
								HX_STACK_LINE(87)
								::phoenix::Spatial _this1 = this->get_world();		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(87)
								if ((_this1->auto_decompose)){
									HX_STACK_LINE(87)
									::phoenix::MatrixTransform _transform;		HX_STACK_VAR(_transform,"_transform");
									HX_STACK_LINE(87)
									{
										HX_STACK_LINE(87)
										::phoenix::Matrix _this2 = _this1->matrix;		HX_STACK_VAR(_this2,"_this2");
										HX_STACK_LINE(87)
										::phoenix::Vector _position = null();		HX_STACK_VAR(_position,"_position");
										HX_STACK_LINE(87)
										::phoenix::Quaternion _quaternion = null();		HX_STACK_VAR(_quaternion,"_quaternion");
										HX_STACK_LINE(87)
										::phoenix::Vector _scale = null();		HX_STACK_VAR(_scale,"_scale");
										HX_STACK_LINE(87)
										Array< Float > te = _this2->elements;		HX_STACK_VAR(te,"te");
										HX_STACK_LINE(87)
										::phoenix::Matrix matrix = ::phoenix::Matrix_obj::__new(null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(matrix,"matrix");
										HX_STACK_LINE(87)
										Float _ax_x = te->__get((int)0);		HX_STACK_VAR(_ax_x,"_ax_x");
										HX_STACK_LINE(87)
										Float _ax_y = te->__get((int)1);		HX_STACK_VAR(_ax_y,"_ax_y");
										HX_STACK_LINE(87)
										Float _ax_z = te->__get((int)2);		HX_STACK_VAR(_ax_z,"_ax_z");
										HX_STACK_LINE(87)
										Float _ay_x = te->__get((int)4);		HX_STACK_VAR(_ay_x,"_ay_x");
										HX_STACK_LINE(87)
										Float _ay_y = te->__get((int)5);		HX_STACK_VAR(_ay_y,"_ay_y");
										HX_STACK_LINE(87)
										Float _ay_z = te->__get((int)6);		HX_STACK_VAR(_ay_z,"_ay_z");
										HX_STACK_LINE(87)
										Float _az_x = te->__get((int)8);		HX_STACK_VAR(_az_x,"_az_x");
										HX_STACK_LINE(87)
										Float _az_y = te->__get((int)9);		HX_STACK_VAR(_az_y,"_az_y");
										HX_STACK_LINE(87)
										Float _az_z = te->__get((int)10);		HX_STACK_VAR(_az_z,"_az_z");
										HX_STACK_LINE(87)
										Float _ax_length = ::Math_obj::sqrt((((_ax_x * _ax_x) + (_ax_y * _ax_y)) + (_ax_z * _ax_z)));		HX_STACK_VAR(_ax_length,"_ax_length");
										HX_STACK_LINE(87)
										Float _ay_length = ::Math_obj::sqrt((((_ay_x * _ay_x) + (_ay_y * _ay_y)) + (_ay_z * _ay_z)));		HX_STACK_VAR(_ay_length,"_ay_length");
										HX_STACK_LINE(87)
										Float _az_length = ::Math_obj::sqrt((((_az_x * _az_x) + (_az_y * _az_y)) + (_az_z * _az_z)));		HX_STACK_VAR(_az_length,"_az_length");
										HX_STACK_LINE(87)
										if (((_quaternion == null()))){
											HX_STACK_LINE(87)
											::phoenix::Quaternion _g10 = ::phoenix::Quaternion_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(_g10,"_g10");
											HX_STACK_LINE(87)
											_quaternion = _g10;
										}
										HX_STACK_LINE(87)
										if (((_position == null()))){
											HX_STACK_LINE(87)
											::phoenix::Vector _g11 = ::phoenix::Vector_obj::__new(te->__get((int)12),te->__get((int)13),te->__get((int)14),null());		HX_STACK_VAR(_g11,"_g11");
											HX_STACK_LINE(87)
											_position = _g11;
										}
										else{
											HX_STACK_LINE(87)
											{
												HX_STACK_LINE(87)
												Float _x = te->__get((int)12);		HX_STACK_VAR(_x,"_x");
												HX_STACK_LINE(87)
												_position->x = _x;
												HX_STACK_LINE(87)
												if ((_position->_construct)){
													HX_STACK_LINE(87)
													_position->x;
												}
												else{
													HX_STACK_LINE(87)
													if (((bool((_position->listen_x != null())) && bool(!(_position->ignore_listeners))))){
														HX_STACK_LINE(87)
														_position->listen_x(_x);
													}
													HX_STACK_LINE(87)
													_position->x;
												}
											}
											HX_STACK_LINE(87)
											{
												HX_STACK_LINE(87)
												Float _y = te->__get((int)13);		HX_STACK_VAR(_y,"_y");
												HX_STACK_LINE(87)
												_position->y = _y;
												HX_STACK_LINE(87)
												if ((_position->_construct)){
													HX_STACK_LINE(87)
													_position->y;
												}
												else{
													HX_STACK_LINE(87)
													if (((bool((_position->listen_y != null())) && bool(!(_position->ignore_listeners))))){
														HX_STACK_LINE(87)
														_position->listen_y(_y);
													}
													HX_STACK_LINE(87)
													_position->y;
												}
											}
											HX_STACK_LINE(87)
											{
												HX_STACK_LINE(87)
												Float _z = te->__get((int)14);		HX_STACK_VAR(_z,"_z");
												HX_STACK_LINE(87)
												_position->z = _z;
												HX_STACK_LINE(87)
												if ((_position->_construct)){
													HX_STACK_LINE(87)
													_position->z;
												}
												else{
													HX_STACK_LINE(87)
													if (((bool((_position->listen_z != null())) && bool(!(_position->ignore_listeners))))){
														HX_STACK_LINE(87)
														_position->listen_z(_z);
													}
													HX_STACK_LINE(87)
													_position->z;
												}
											}
										}
										HX_STACK_LINE(87)
										if (((_scale == null()))){
											HX_STACK_LINE(87)
											::phoenix::Vector _g12 = ::phoenix::Vector_obj::__new(_ax_length,_ay_length,_az_length,null());		HX_STACK_VAR(_g12,"_g12");
											HX_STACK_LINE(87)
											_scale = _g12;
										}
										else{
											HX_STACK_LINE(87)
											{
												HX_STACK_LINE(87)
												_scale->x = _ax_length;
												HX_STACK_LINE(87)
												if ((_scale->_construct)){
													HX_STACK_LINE(87)
													_scale->x;
												}
												else{
													HX_STACK_LINE(87)
													if (((bool((_scale->listen_x != null())) && bool(!(_scale->ignore_listeners))))){
														HX_STACK_LINE(87)
														_scale->listen_x(_ax_length);
													}
													HX_STACK_LINE(87)
													_scale->x;
												}
											}
											HX_STACK_LINE(87)
											{
												HX_STACK_LINE(87)
												_scale->y = _ay_length;
												HX_STACK_LINE(87)
												if ((_scale->_construct)){
													HX_STACK_LINE(87)
													_scale->y;
												}
												else{
													HX_STACK_LINE(87)
													if (((bool((_scale->listen_y != null())) && bool(!(_scale->ignore_listeners))))){
														HX_STACK_LINE(87)
														_scale->listen_y(_ay_length);
													}
													HX_STACK_LINE(87)
													_scale->y;
												}
											}
											HX_STACK_LINE(87)
											{
												HX_STACK_LINE(87)
												_scale->z = _az_length;
												HX_STACK_LINE(87)
												if ((_scale->_construct)){
													HX_STACK_LINE(87)
													_scale->z;
												}
												else{
													HX_STACK_LINE(87)
													if (((bool((_scale->listen_z != null())) && bool(!(_scale->ignore_listeners))))){
														HX_STACK_LINE(87)
														_scale->listen_z(_az_length);
													}
													HX_STACK_LINE(87)
													_scale->z;
												}
											}
										}
										HX_STACK_LINE(87)
										Array< Float > _g13 = _this2->elements->concat(Array_obj< Float >::__new());		HX_STACK_VAR(_g13,"_g13");
										HX_STACK_LINE(87)
										matrix->elements = _g13;
										HX_STACK_LINE(87)
										Array< Float > me = matrix->elements;		HX_STACK_VAR(me,"me");
										HX_STACK_LINE(87)
										hx::DivEq(me[(int)0],_ax_length);
										HX_STACK_LINE(87)
										hx::DivEq(me[(int)1],_ax_length);
										HX_STACK_LINE(87)
										hx::DivEq(me[(int)2],_ax_length);
										HX_STACK_LINE(87)
										hx::DivEq(me[(int)4],_ay_length);
										HX_STACK_LINE(87)
										hx::DivEq(me[(int)5],_ay_length);
										HX_STACK_LINE(87)
										hx::DivEq(me[(int)6],_ay_length);
										HX_STACK_LINE(87)
										hx::DivEq(me[(int)8],_az_length);
										HX_STACK_LINE(87)
										hx::DivEq(me[(int)9],_az_length);
										HX_STACK_LINE(87)
										hx::DivEq(me[(int)10],_az_length);
										HX_STACK_LINE(87)
										_quaternion->setFromRotationMatrix(matrix);
										HX_STACK_LINE(87)
										if (((_this2->_transform == null()))){
											HX_STACK_LINE(87)
											::phoenix::MatrixTransform _g14 = ::phoenix::MatrixTransform_obj::__new(_position,_quaternion,_scale);		HX_STACK_VAR(_g14,"_g14");
											HX_STACK_LINE(87)
											_this2->_transform = _g14;
										}
										else{
											HX_STACK_LINE(87)
											_this2->_transform->pos = _position;
											HX_STACK_LINE(87)
											_this2->_transform->rotation = _quaternion;
											HX_STACK_LINE(87)
											_this2->_transform->scale = _scale;
										}
										HX_STACK_LINE(87)
										_transform = _this2->_transform;
									}
									HX_STACK_LINE(87)
									{
										HX_STACK_LINE(87)
										::phoenix::Vector _p = _transform->pos;		HX_STACK_VAR(_p,"_p");
										HX_STACK_LINE(87)
										_this1->pos = _p;
										HX_STACK_LINE(87)
										if (((_p != null()))){
											HX_STACK_LINE(87)
											::phoenix::Vector_obj::Listen(_this1->pos,_this1->_pos_change_dyn());
											HX_STACK_LINE(87)
											if (((bool((_this1->pos_changed != null())) && bool(!(_this1->ignore_listeners))))){
												HX_STACK_LINE(87)
												_this1->pos_changed(_this1->pos);
											}
										}
										HX_STACK_LINE(87)
										_this1->pos;
									}
									HX_STACK_LINE(87)
									{
										HX_STACK_LINE(87)
										::phoenix::Quaternion _r = _transform->rotation;		HX_STACK_VAR(_r,"_r");
										HX_STACK_LINE(87)
										_this1->rotation = _r;
										HX_STACK_LINE(87)
										if (((_r != null()))){
											HX_STACK_LINE(87)
											{
												HX_STACK_LINE(87)
												::phoenix::Quaternion _q = _this1->rotation;		HX_STACK_VAR(_q,"_q");
												HX_STACK_LINE(87)
												Dynamic listener = _this1->_rotation_change_dyn();		HX_STACK_VAR(listener,"listener");
												HX_STACK_LINE(87)
												_q->listen_x = listener;
												HX_STACK_LINE(87)
												_q->listen_y = listener;
												HX_STACK_LINE(87)
												_q->listen_z = listener;
												HX_STACK_LINE(87)
												_q->listen_w = listener;
											}
											HX_STACK_LINE(87)
											if (((bool((_this1->rotation_changed != null())) && bool(!(_this1->ignore_listeners))))){
												HX_STACK_LINE(87)
												_this1->rotation_changed(_this1->rotation);
											}
										}
										HX_STACK_LINE(87)
										_this1->rotation;
									}
									HX_STACK_LINE(87)
									{
										HX_STACK_LINE(87)
										::phoenix::Vector _s = _transform->scale;		HX_STACK_VAR(_s,"_s");
										HX_STACK_LINE(87)
										_this1->scale = _s;
										HX_STACK_LINE(87)
										if (((_s != null()))){
											HX_STACK_LINE(87)
											::phoenix::Vector_obj::Listen(_this1->scale,_this1->_scale_change_dyn());
											HX_STACK_LINE(87)
											if (((bool((_this1->scale_changed != null())) && bool(!(_this1->ignore_listeners))))){
												HX_STACK_LINE(87)
												_this1->scale_changed(_this1->scale);
											}
										}
										HX_STACK_LINE(87)
										_this1->scale;
									}
								}
								HX_STACK_LINE(87)
								_this1;
							}
							HX_STACK_LINE(87)
							{
								HX_STACK_LINE(87)
								this->dirty = false;
								HX_STACK_LINE(87)
								if (((bool((bool((bool(this->dirty) && bool(!(this->_setup)))) && bool((this->_dirty_handlers != null())))) && bool((this->_dirty_handlers->__Field(HX_CSTRING("length"),true) > (int)0))))){
									HX_STACK_LINE(87)
									int _g = (int)0;		HX_STACK_VAR(_g,"_g");
									HX_STACK_LINE(87)
									Dynamic _g1 = this->_dirty_handlers;		HX_STACK_VAR(_g1,"_g1");
									HX_STACK_LINE(87)
									while((true)){
										HX_STACK_LINE(87)
										if ((!(((_g < _g1->__Field(HX_CSTRING("length"),true)))))){
											HX_STACK_LINE(87)
											break;
										}
										HX_STACK_LINE(87)
										Dynamic _handler = _g1->__GetItem(_g);		HX_STACK_VAR(_handler,"_handler");
										HX_STACK_LINE(87)
										++(_g);
										HX_STACK_LINE(87)
										if (((_handler != null()))){
											HX_STACK_LINE(87)
											_handler(hx::ObjectPtr<OBJ_>(this)).Cast< Void >();
										}
									}
								}
								HX_STACK_LINE(87)
								this->dirty;
							}
							HX_STACK_LINE(87)
							this->_cleaning = false;
							HX_STACK_LINE(87)
							if (((bool((this->_clean_handlers != null())) && bool((this->_clean_handlers->__Field(HX_CSTRING("length"),true) > (int)0))))){
								HX_STACK_LINE(87)
								int _g = (int)0;		HX_STACK_VAR(_g,"_g");
								HX_STACK_LINE(87)
								Dynamic _g1 = this->_clean_handlers;		HX_STACK_VAR(_g1,"_g1");
								HX_STACK_LINE(87)
								while((true)){
									HX_STACK_LINE(87)
									if ((!(((_g < _g1->__Field(HX_CSTRING("length"),true)))))){
										HX_STACK_LINE(87)
										break;
									}
									HX_STACK_LINE(87)
									Dynamic _handler = _g1->__GetItem(_g);		HX_STACK_VAR(_handler,"_handler");
									HX_STACK_LINE(87)
									++(_g);
									HX_STACK_LINE(87)
									if (((_handler != null()))){
										HX_STACK_LINE(87)
										_handler(hx::ObjectPtr<OBJ_>(this)).Cast< Void >();
									}
								}
							}
						}
					}
				}
				HX_STACK_LINE(87)
				_this = this->world;
			}
			HX_STACK_LINE(87)
			{
				HX_STACK_LINE(87)
				_this->matrix = null();
				HX_STACK_LINE(87)
				_this->matrix;
			}
			HX_STACK_LINE(87)
			_this->floats = null();
			HX_STACK_LINE(87)
			{
				HX_STACK_LINE(87)
				_this->pos = null();
				HX_STACK_LINE(87)
				_this->pos;
			}
			HX_STACK_LINE(87)
			{
				HX_STACK_LINE(87)
				_this->rotation = null();
				HX_STACK_LINE(87)
				_this->rotation;
			}
			HX_STACK_LINE(87)
			{
				HX_STACK_LINE(87)
				_this->scale = null();
				HX_STACK_LINE(87)
				_this->scale;
			}
		}
		HX_STACK_LINE(89)
		this->local = null();
		HX_STACK_LINE(90)
		this->world = null();
		HX_STACK_LINE(91)
		{
			HX_STACK_LINE(91)
			{
				HX_STACK_LINE(91)
				this->dirty = true;
				HX_STACK_LINE(91)
				if (((bool((bool((bool(this->dirty) && bool(!(this->_setup)))) && bool((this->_dirty_handlers != null())))) && bool((this->_dirty_handlers->__Field(HX_CSTRING("length"),true) > (int)0))))){
					HX_STACK_LINE(91)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(91)
					Dynamic _g1 = this->_dirty_handlers;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(91)
					while((true)){
						HX_STACK_LINE(91)
						if ((!(((_g < _g1->__Field(HX_CSTRING("length"),true)))))){
							HX_STACK_LINE(91)
							break;
						}
						HX_STACK_LINE(91)
						Dynamic _handler = _g1->__GetItem(_g);		HX_STACK_VAR(_handler,"_handler");
						HX_STACK_LINE(91)
						++(_g);
						HX_STACK_LINE(91)
						if (((_handler != null()))){
							HX_STACK_LINE(91)
							_handler(hx::ObjectPtr<OBJ_>(this)).Cast< Void >();
						}
					}
				}
				HX_STACK_LINE(91)
				this->dirty;
			}
			HX_STACK_LINE(91)
			this->origin = null();
			HX_STACK_LINE(91)
			if (((bool((this->_origin_handlers != null())) && bool((this->_origin_handlers->__Field(HX_CSTRING("length"),true) > (int)0))))){
				HX_STACK_LINE(91)
				::phoenix::Vector _origin = this->origin;		HX_STACK_VAR(_origin,"_origin");
				HX_STACK_LINE(91)
				{
					HX_STACK_LINE(91)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(91)
					Dynamic _g1 = this->_origin_handlers;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(91)
					while((true)){
						HX_STACK_LINE(91)
						if ((!(((_g < _g1->__Field(HX_CSTRING("length"),true)))))){
							HX_STACK_LINE(91)
							break;
						}
						HX_STACK_LINE(91)
						Dynamic _handler = _g1->__GetItem(_g);		HX_STACK_VAR(_handler,"_handler");
						HX_STACK_LINE(91)
						++(_g);
						HX_STACK_LINE(91)
						if (((_handler != null()))){
							HX_STACK_LINE(91)
							_handler(_origin).Cast< Void >();
						}
					}
				}
			}
			HX_STACK_LINE(91)
			this->origin;
		}
		HX_STACK_LINE(92)
		this->_origin_undo_matrix = null();
		HX_STACK_LINE(93)
		this->_pos_matrix = null();
		HX_STACK_LINE(94)
		this->_rotation_matrix = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Transform_obj,destroy,(void))

bool Transform_obj::set_dirty( bool _dirty){
	HX_STACK_FRAME("phoenix.Transform","set_dirty",0x79abdc74,"phoenix.Transform.set_dirty","phoenix/Transform.hx",98,0x44da8ab2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_dirty,"_dirty")
	HX_STACK_LINE(100)
	this->dirty = _dirty;
	HX_STACK_LINE(102)
	if (((bool((bool((bool(this->dirty) && bool(!(this->_setup)))) && bool((this->_dirty_handlers != null())))) && bool((this->_dirty_handlers->__Field(HX_CSTRING("length"),true) > (int)0))))){
		HX_STACK_LINE(107)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(107)
		Dynamic _g1 = this->_dirty_handlers;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(107)
		while((true)){
			HX_STACK_LINE(107)
			if ((!(((_g < _g1->__Field(HX_CSTRING("length"),true)))))){
				HX_STACK_LINE(107)
				break;
			}
			HX_STACK_LINE(107)
			Dynamic _handler = _g1->__GetItem(_g);		HX_STACK_VAR(_handler,"_handler");
			HX_STACK_LINE(107)
			++(_g);
			HX_STACK_LINE(107)
			if (((_handler != null()))){
				HX_STACK_LINE(107)
				_handler(hx::ObjectPtr<OBJ_>(this)).Cast< Void >();
			}
		}
	}
	HX_STACK_LINE(110)
	return this->dirty;
}


HX_DEFINE_DYNAMIC_FUNC1(Transform_obj,set_dirty,return )

Void Transform_obj::on_local_pos_change( ::phoenix::Vector v){
{
		HX_STACK_FRAME("phoenix.Transform","on_local_pos_change",0x565988ae,"phoenix.Transform.on_local_pos_change","phoenix/Transform.hx",115,0x44da8ab2)
		HX_STACK_THIS(this)
		HX_STACK_ARG(v,"v")
		HX_STACK_LINE(117)
		{
			HX_STACK_LINE(117)
			this->dirty = true;
			HX_STACK_LINE(117)
			if (((bool((bool((bool(this->dirty) && bool(!(this->_setup)))) && bool((this->_dirty_handlers != null())))) && bool((this->_dirty_handlers->__Field(HX_CSTRING("length"),true) > (int)0))))){
				HX_STACK_LINE(117)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(117)
				Dynamic _g1 = this->_dirty_handlers;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(117)
				while((true)){
					HX_STACK_LINE(117)
					if ((!(((_g < _g1->__Field(HX_CSTRING("length"),true)))))){
						HX_STACK_LINE(117)
						break;
					}
					HX_STACK_LINE(117)
					Dynamic _handler = _g1->__GetItem(_g);		HX_STACK_VAR(_handler,"_handler");
					HX_STACK_LINE(117)
					++(_g);
					HX_STACK_LINE(117)
					if (((_handler != null()))){
						HX_STACK_LINE(117)
						_handler(hx::ObjectPtr<OBJ_>(this)).Cast< Void >();
					}
				}
			}
			HX_STACK_LINE(117)
			this->dirty;
		}
		HX_STACK_LINE(119)
		if (((bool((this->_pos_handlers != null())) && bool((this->_pos_handlers->__Field(HX_CSTRING("length"),true) > (int)0))))){
			HX_STACK_LINE(121)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(121)
			Dynamic _g1 = this->_pos_handlers;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(121)
			while((true)){
				HX_STACK_LINE(121)
				if ((!(((_g < _g1->__Field(HX_CSTRING("length"),true)))))){
					HX_STACK_LINE(121)
					break;
				}
				HX_STACK_LINE(121)
				Dynamic _handler = _g1->__GetItem(_g);		HX_STACK_VAR(_handler,"_handler");
				HX_STACK_LINE(121)
				++(_g);
				HX_STACK_LINE(121)
				if (((_handler != null()))){
					HX_STACK_LINE(121)
					_handler(v).Cast< Void >();
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Transform_obj,on_local_pos_change,(void))

Void Transform_obj::on_local_rotation_change( ::phoenix::Quaternion r){
{
		HX_STACK_FRAME("phoenix.Transform","on_local_rotation_change",0xf66797fe,"phoenix.Transform.on_local_rotation_change","phoenix/Transform.hx",126,0x44da8ab2)
		HX_STACK_THIS(this)
		HX_STACK_ARG(r,"r")
		HX_STACK_LINE(128)
		{
			HX_STACK_LINE(128)
			this->dirty = true;
			HX_STACK_LINE(128)
			if (((bool((bool((bool(this->dirty) && bool(!(this->_setup)))) && bool((this->_dirty_handlers != null())))) && bool((this->_dirty_handlers->__Field(HX_CSTRING("length"),true) > (int)0))))){
				HX_STACK_LINE(128)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(128)
				Dynamic _g1 = this->_dirty_handlers;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(128)
				while((true)){
					HX_STACK_LINE(128)
					if ((!(((_g < _g1->__Field(HX_CSTRING("length"),true)))))){
						HX_STACK_LINE(128)
						break;
					}
					HX_STACK_LINE(128)
					Dynamic _handler = _g1->__GetItem(_g);		HX_STACK_VAR(_handler,"_handler");
					HX_STACK_LINE(128)
					++(_g);
					HX_STACK_LINE(128)
					if (((_handler != null()))){
						HX_STACK_LINE(128)
						_handler(hx::ObjectPtr<OBJ_>(this)).Cast< Void >();
					}
				}
			}
			HX_STACK_LINE(128)
			this->dirty;
		}
		HX_STACK_LINE(130)
		if (((bool((this->_rotation_handlers != null())) && bool((this->_rotation_handlers->__Field(HX_CSTRING("length"),true) > (int)0))))){
			HX_STACK_LINE(132)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(132)
			Dynamic _g1 = this->_rotation_handlers;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(132)
			while((true)){
				HX_STACK_LINE(132)
				if ((!(((_g < _g1->__Field(HX_CSTRING("length"),true)))))){
					HX_STACK_LINE(132)
					break;
				}
				HX_STACK_LINE(132)
				Dynamic _handler = _g1->__GetItem(_g);		HX_STACK_VAR(_handler,"_handler");
				HX_STACK_LINE(132)
				++(_g);
				HX_STACK_LINE(132)
				if (((_handler != null()))){
					HX_STACK_LINE(132)
					_handler(r).Cast< Void >();
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Transform_obj,on_local_rotation_change,(void))

Void Transform_obj::on_local_scale_change( ::phoenix::Vector s){
{
		HX_STACK_FRAME("phoenix.Transform","on_local_scale_change",0x02a99538,"phoenix.Transform.on_local_scale_change","phoenix/Transform.hx",137,0x44da8ab2)
		HX_STACK_THIS(this)
		HX_STACK_ARG(s,"s")
		HX_STACK_LINE(139)
		{
			HX_STACK_LINE(139)
			this->dirty = true;
			HX_STACK_LINE(139)
			if (((bool((bool((bool(this->dirty) && bool(!(this->_setup)))) && bool((this->_dirty_handlers != null())))) && bool((this->_dirty_handlers->__Field(HX_CSTRING("length"),true) > (int)0))))){
				HX_STACK_LINE(139)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(139)
				Dynamic _g1 = this->_dirty_handlers;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(139)
				while((true)){
					HX_STACK_LINE(139)
					if ((!(((_g < _g1->__Field(HX_CSTRING("length"),true)))))){
						HX_STACK_LINE(139)
						break;
					}
					HX_STACK_LINE(139)
					Dynamic _handler = _g1->__GetItem(_g);		HX_STACK_VAR(_handler,"_handler");
					HX_STACK_LINE(139)
					++(_g);
					HX_STACK_LINE(139)
					if (((_handler != null()))){
						HX_STACK_LINE(139)
						_handler(hx::ObjectPtr<OBJ_>(this)).Cast< Void >();
					}
				}
			}
			HX_STACK_LINE(139)
			this->dirty;
		}
		HX_STACK_LINE(141)
		if (((bool((this->_scale_handlers != null())) && bool((this->_scale_handlers->__Field(HX_CSTRING("length"),true) > (int)0))))){
			HX_STACK_LINE(143)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(143)
			Dynamic _g1 = this->_scale_handlers;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(143)
			while((true)){
				HX_STACK_LINE(143)
				if ((!(((_g < _g1->__Field(HX_CSTRING("length"),true)))))){
					HX_STACK_LINE(143)
					break;
				}
				HX_STACK_LINE(143)
				Dynamic _handler = _g1->__GetItem(_g);		HX_STACK_VAR(_handler,"_handler");
				HX_STACK_LINE(143)
				++(_g);
				HX_STACK_LINE(143)
				if (((_handler != null()))){
					HX_STACK_LINE(143)
					_handler(s).Cast< Void >();
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Transform_obj,on_local_scale_change,(void))

Void Transform_obj::on_parent_cleaned( ::phoenix::Transform p){
{
		HX_STACK_FRAME("phoenix.Transform","on_parent_cleaned",0x89be7432,"phoenix.Transform.on_parent_cleaned","phoenix/Transform.hx",150,0x44da8ab2)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p,"p")
		HX_STACK_LINE(150)
		this->dirty = true;
		HX_STACK_LINE(150)
		if (((bool((bool((bool(this->dirty) && bool(!(this->_setup)))) && bool((this->_dirty_handlers != null())))) && bool((this->_dirty_handlers->__Field(HX_CSTRING("length"),true) > (int)0))))){
			HX_STACK_LINE(150)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(150)
			Dynamic _g1 = this->_dirty_handlers;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(150)
			while((true)){
				HX_STACK_LINE(150)
				if ((!(((_g < _g1->__Field(HX_CSTRING("length"),true)))))){
					HX_STACK_LINE(150)
					break;
				}
				HX_STACK_LINE(150)
				Dynamic _handler = _g1->__GetItem(_g);		HX_STACK_VAR(_handler,"_handler");
				HX_STACK_LINE(150)
				++(_g);
				HX_STACK_LINE(150)
				if (((_handler != null()))){
					HX_STACK_LINE(150)
					_handler(hx::ObjectPtr<OBJ_>(this)).Cast< Void >();
				}
			}
		}
		HX_STACK_LINE(150)
		this->dirty;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Transform_obj,on_parent_cleaned,(void))

::phoenix::Spatial Transform_obj::get_local( ){
	HX_STACK_FRAME("phoenix.Transform","get_local",0x357b69c1,"phoenix.Transform.get_local","phoenix/Transform.hx",156,0x44da8ab2)
	HX_STACK_THIS(this)
	HX_STACK_LINE(156)
	return this->local;
}


HX_DEFINE_DYNAMIC_FUNC0(Transform_obj,get_local,return )

::phoenix::Spatial Transform_obj::set_local( ::phoenix::Spatial l){
	HX_STACK_FRAME("phoenix.Transform","set_local",0x18cc55cd,"phoenix.Transform.set_local","phoenix/Transform.hx",160,0x44da8ab2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(l,"l")
	HX_STACK_LINE(162)
	if (((l != null()))){
		HX_STACK_LINE(164)
		{
			HX_STACK_LINE(164)
			this->dirty = true;
			HX_STACK_LINE(164)
			if (((bool((bool((bool(this->dirty) && bool(!(this->_setup)))) && bool((this->_dirty_handlers != null())))) && bool((this->_dirty_handlers->__Field(HX_CSTRING("length"),true) > (int)0))))){
				HX_STACK_LINE(164)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(164)
				Dynamic _g1 = this->_dirty_handlers;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(164)
				while((true)){
					HX_STACK_LINE(164)
					if ((!(((_g < _g1->__Field(HX_CSTRING("length"),true)))))){
						HX_STACK_LINE(164)
						break;
					}
					HX_STACK_LINE(164)
					Dynamic _handler = _g1->__GetItem(_g);		HX_STACK_VAR(_handler,"_handler");
					HX_STACK_LINE(164)
					++(_g);
					HX_STACK_LINE(164)
					if (((_handler != null()))){
						HX_STACK_LINE(164)
						_handler(hx::ObjectPtr<OBJ_>(this)).Cast< Void >();
					}
				}
			}
			HX_STACK_LINE(164)
			this->dirty;
		}
		HX_STACK_LINE(166)
		l->pos_changed = this->on_local_pos_change_dyn();
		HX_STACK_LINE(167)
		l->rotation_changed = this->on_local_rotation_change_dyn();
		HX_STACK_LINE(168)
		l->scale_changed = this->on_local_scale_change_dyn();
	}
	HX_STACK_LINE(172)
	return this->local = l;
}


HX_DEFINE_DYNAMIC_FUNC1(Transform_obj,set_local,return )

::phoenix::Spatial Transform_obj::get_world( ){
	HX_STACK_FRAME("phoenix.Transform","get_world",0x8aef36a8,"phoenix.Transform.get_world","phoenix/Transform.hx",177,0x44da8ab2)
	HX_STACK_THIS(this)
	HX_STACK_LINE(179)
	if ((!(this->_destroying))){
		HX_STACK_LINE(180)
		if (((this->parent != null()))){
			HX_STACK_LINE(180)
			if ((this->parent->dirty)){
				HX_STACK_LINE(180)
				::phoenix::Transform _this = this->parent;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(180)
				if ((!(_this->dirty))){
					HX_STACK_LINE(180)
					Dynamic();
				}
				else{
					HX_STACK_LINE(180)
					_this->_cleaning = true;
					HX_STACK_LINE(180)
					{
						HX_STACK_LINE(180)
						::phoenix::Matrix _this1 = _this->_pos_matrix;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(180)
						{
							HX_STACK_LINE(180)
							Array< Float > e = _this1->elements;		HX_STACK_VAR(e,"e");
							HX_STACK_LINE(180)
							e[(int)0] = (int)1;
							HX_STACK_LINE(180)
							e[(int)4] = (int)0;
							HX_STACK_LINE(180)
							e[(int)8] = (int)0;
							HX_STACK_LINE(180)
							e[(int)12] = _this->local->pos->x;
							HX_STACK_LINE(180)
							e[(int)1] = (int)0;
							HX_STACK_LINE(180)
							e[(int)5] = (int)1;
							HX_STACK_LINE(180)
							e[(int)9] = (int)0;
							HX_STACK_LINE(180)
							e[(int)13] = _this->local->pos->y;
							HX_STACK_LINE(180)
							e[(int)2] = (int)0;
							HX_STACK_LINE(180)
							e[(int)6] = (int)0;
							HX_STACK_LINE(180)
							e[(int)10] = (int)1;
							HX_STACK_LINE(180)
							e[(int)14] = _this->local->pos->z;
							HX_STACK_LINE(180)
							e[(int)3] = (int)0;
							HX_STACK_LINE(180)
							e[(int)7] = (int)0;
							HX_STACK_LINE(180)
							e[(int)11] = (int)0;
							HX_STACK_LINE(180)
							e[(int)15] = (int)1;
							HX_STACK_LINE(180)
							_this1;
						}
						HX_STACK_LINE(180)
						_this1;
					}
					HX_STACK_LINE(180)
					{
						HX_STACK_LINE(180)
						::phoenix::Matrix _this1 = _this->_rotation_matrix;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(180)
						::phoenix::Quaternion q = _this->local->rotation;		HX_STACK_VAR(q,"q");
						HX_STACK_LINE(180)
						Array< Float > te = _this1->elements;		HX_STACK_VAR(te,"te");
						HX_STACK_LINE(180)
						Float x2 = (q->x + q->x);		HX_STACK_VAR(x2,"x2");
						HX_STACK_LINE(180)
						Float y2 = (q->y + q->y);		HX_STACK_VAR(y2,"y2");
						HX_STACK_LINE(180)
						Float z2 = (q->z + q->z);		HX_STACK_VAR(z2,"z2");
						HX_STACK_LINE(180)
						Float xx = (q->x * x2);		HX_STACK_VAR(xx,"xx");
						HX_STACK_LINE(180)
						Float xy = (q->x * y2);		HX_STACK_VAR(xy,"xy");
						HX_STACK_LINE(180)
						Float xz = (q->x * z2);		HX_STACK_VAR(xz,"xz");
						HX_STACK_LINE(180)
						Float yy = (q->y * y2);		HX_STACK_VAR(yy,"yy");
						HX_STACK_LINE(180)
						Float yz = (q->y * z2);		HX_STACK_VAR(yz,"yz");
						HX_STACK_LINE(180)
						Float zz = (q->z * z2);		HX_STACK_VAR(zz,"zz");
						HX_STACK_LINE(180)
						Float wx = (q->w * x2);		HX_STACK_VAR(wx,"wx");
						HX_STACK_LINE(180)
						Float wy = (q->w * y2);		HX_STACK_VAR(wy,"wy");
						HX_STACK_LINE(180)
						Float wz = (q->w * z2);		HX_STACK_VAR(wz,"wz");
						HX_STACK_LINE(180)
						te[(int)0] = ((int)1 - ((yy + zz)));
						HX_STACK_LINE(180)
						te[(int)4] = (xy - wz);
						HX_STACK_LINE(180)
						te[(int)8] = (xz + wy);
						HX_STACK_LINE(180)
						te[(int)1] = (xy + wz);
						HX_STACK_LINE(180)
						te[(int)5] = ((int)1 - ((xx + zz)));
						HX_STACK_LINE(180)
						te[(int)9] = (yz - wx);
						HX_STACK_LINE(180)
						te[(int)2] = (xz - wy);
						HX_STACK_LINE(180)
						te[(int)6] = (yz + wx);
						HX_STACK_LINE(180)
						te[(int)10] = ((int)1 - ((xx + yy)));
						HX_STACK_LINE(180)
						te[(int)3] = (int)0;
						HX_STACK_LINE(180)
						te[(int)7] = (int)0;
						HX_STACK_LINE(180)
						te[(int)11] = (int)0;
						HX_STACK_LINE(180)
						te[(int)12] = (int)0;
						HX_STACK_LINE(180)
						te[(int)13] = (int)0;
						HX_STACK_LINE(180)
						te[(int)14] = (int)0;
						HX_STACK_LINE(180)
						te[(int)15] = (int)1;
						HX_STACK_LINE(180)
						_this1;
					}
					HX_STACK_LINE(180)
					{
						HX_STACK_LINE(180)
						::phoenix::Matrix _this1 = _this->_origin_undo_matrix;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(180)
						{
							HX_STACK_LINE(180)
							Array< Float > e = _this1->elements;		HX_STACK_VAR(e,"e");
							HX_STACK_LINE(180)
							e[(int)0] = (int)1;
							HX_STACK_LINE(180)
							e[(int)4] = (int)0;
							HX_STACK_LINE(180)
							e[(int)8] = (int)0;
							HX_STACK_LINE(180)
							e[(int)12] = -(_this->origin->x);
							HX_STACK_LINE(180)
							e[(int)1] = (int)0;
							HX_STACK_LINE(180)
							e[(int)5] = (int)1;
							HX_STACK_LINE(180)
							e[(int)9] = (int)0;
							HX_STACK_LINE(180)
							e[(int)13] = -(_this->origin->y);
							HX_STACK_LINE(180)
							e[(int)2] = (int)0;
							HX_STACK_LINE(180)
							e[(int)6] = (int)0;
							HX_STACK_LINE(180)
							e[(int)10] = (int)1;
							HX_STACK_LINE(180)
							e[(int)14] = -(_this->origin->z);
							HX_STACK_LINE(180)
							e[(int)3] = (int)0;
							HX_STACK_LINE(180)
							e[(int)7] = (int)0;
							HX_STACK_LINE(180)
							e[(int)11] = (int)0;
							HX_STACK_LINE(180)
							e[(int)15] = (int)1;
							HX_STACK_LINE(180)
							_this1;
						}
						HX_STACK_LINE(180)
						_this1;
					}
					HX_STACK_LINE(180)
					{
						HX_STACK_LINE(180)
						::phoenix::Matrix _this1 = _this->local->matrix;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(180)
						{
							HX_STACK_LINE(180)
							Array< Float > e = _this1->elements;		HX_STACK_VAR(e,"e");
							HX_STACK_LINE(180)
							e[(int)0] = (int)1;
							HX_STACK_LINE(180)
							e[(int)4] = (int)0;
							HX_STACK_LINE(180)
							e[(int)8] = (int)0;
							HX_STACK_LINE(180)
							e[(int)12] = _this->origin->x;
							HX_STACK_LINE(180)
							e[(int)1] = (int)0;
							HX_STACK_LINE(180)
							e[(int)5] = (int)1;
							HX_STACK_LINE(180)
							e[(int)9] = (int)0;
							HX_STACK_LINE(180)
							e[(int)13] = _this->origin->y;
							HX_STACK_LINE(180)
							e[(int)2] = (int)0;
							HX_STACK_LINE(180)
							e[(int)6] = (int)0;
							HX_STACK_LINE(180)
							e[(int)10] = (int)1;
							HX_STACK_LINE(180)
							e[(int)14] = _this->origin->z;
							HX_STACK_LINE(180)
							e[(int)3] = (int)0;
							HX_STACK_LINE(180)
							e[(int)7] = (int)0;
							HX_STACK_LINE(180)
							e[(int)11] = (int)0;
							HX_STACK_LINE(180)
							e[(int)15] = (int)1;
							HX_STACK_LINE(180)
							_this1;
						}
						HX_STACK_LINE(180)
						_this1;
					}
					HX_STACK_LINE(180)
					{
						HX_STACK_LINE(180)
						::phoenix::Matrix _this1 = _this->local->matrix;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(180)
						::phoenix::Vector _v = _this->local->scale;		HX_STACK_VAR(_v,"_v");
						HX_STACK_LINE(180)
						Array< Float > te = _this1->elements;		HX_STACK_VAR(te,"te");
						HX_STACK_LINE(180)
						Float _x = _v->x;		HX_STACK_VAR(_x,"_x");
						HX_STACK_LINE(180)
						Float _y = _v->y;		HX_STACK_VAR(_y,"_y");
						HX_STACK_LINE(180)
						Float _z = _v->z;		HX_STACK_VAR(_z,"_z");
						HX_STACK_LINE(180)
						hx::MultEq(te[(int)0],_x);
						HX_STACK_LINE(180)
						hx::MultEq(te[(int)4],_y);
						HX_STACK_LINE(180)
						hx::MultEq(te[(int)8],_z);
						HX_STACK_LINE(180)
						hx::MultEq(te[(int)1],_x);
						HX_STACK_LINE(180)
						hx::MultEq(te[(int)5],_y);
						HX_STACK_LINE(180)
						hx::MultEq(te[(int)9],_z);
						HX_STACK_LINE(180)
						hx::MultEq(te[(int)2],_x);
						HX_STACK_LINE(180)
						hx::MultEq(te[(int)6],_y);
						HX_STACK_LINE(180)
						hx::MultEq(te[(int)10],_z);
						HX_STACK_LINE(180)
						hx::MultEq(te[(int)3],_x);
						HX_STACK_LINE(180)
						hx::MultEq(te[(int)7],_y);
						HX_STACK_LINE(180)
						hx::MultEq(te[(int)11],_z);
						HX_STACK_LINE(180)
						_this1;
					}
					HX_STACK_LINE(180)
					{
						HX_STACK_LINE(180)
						::phoenix::Matrix _this1 = _this->local->matrix;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(180)
						{
							HX_STACK_LINE(180)
							Array< Float > ae = _this1->elements;		HX_STACK_VAR(ae,"ae");
							HX_STACK_LINE(180)
							Array< Float > be = _this->_rotation_matrix->elements;		HX_STACK_VAR(be,"be");
							HX_STACK_LINE(180)
							Array< Float > te = _this1->elements;		HX_STACK_VAR(te,"te");
							HX_STACK_LINE(180)
							Float a11 = ae->__get((int)0);		HX_STACK_VAR(a11,"a11");
							HX_STACK_LINE(180)
							Float a12 = ae->__get((int)4);		HX_STACK_VAR(a12,"a12");
							HX_STACK_LINE(180)
							Float a13 = ae->__get((int)8);		HX_STACK_VAR(a13,"a13");
							HX_STACK_LINE(180)
							Float a14 = ae->__get((int)12);		HX_STACK_VAR(a14,"a14");
							HX_STACK_LINE(180)
							Float a21 = ae->__get((int)1);		HX_STACK_VAR(a21,"a21");
							HX_STACK_LINE(180)
							Float a22 = ae->__get((int)5);		HX_STACK_VAR(a22,"a22");
							HX_STACK_LINE(180)
							Float a23 = ae->__get((int)9);		HX_STACK_VAR(a23,"a23");
							HX_STACK_LINE(180)
							Float a24 = ae->__get((int)13);		HX_STACK_VAR(a24,"a24");
							HX_STACK_LINE(180)
							Float a31 = ae->__get((int)2);		HX_STACK_VAR(a31,"a31");
							HX_STACK_LINE(180)
							Float a32 = ae->__get((int)6);		HX_STACK_VAR(a32,"a32");
							HX_STACK_LINE(180)
							Float a33 = ae->__get((int)10);		HX_STACK_VAR(a33,"a33");
							HX_STACK_LINE(180)
							Float a34 = ae->__get((int)14);		HX_STACK_VAR(a34,"a34");
							HX_STACK_LINE(180)
							Float a41 = ae->__get((int)3);		HX_STACK_VAR(a41,"a41");
							HX_STACK_LINE(180)
							Float a42 = ae->__get((int)7);		HX_STACK_VAR(a42,"a42");
							HX_STACK_LINE(180)
							Float a43 = ae->__get((int)11);		HX_STACK_VAR(a43,"a43");
							HX_STACK_LINE(180)
							Float a44 = ae->__get((int)15);		HX_STACK_VAR(a44,"a44");
							HX_STACK_LINE(180)
							Float b11 = be->__get((int)0);		HX_STACK_VAR(b11,"b11");
							HX_STACK_LINE(180)
							Float b12 = be->__get((int)4);		HX_STACK_VAR(b12,"b12");
							HX_STACK_LINE(180)
							Float b13 = be->__get((int)8);		HX_STACK_VAR(b13,"b13");
							HX_STACK_LINE(180)
							Float b14 = be->__get((int)12);		HX_STACK_VAR(b14,"b14");
							HX_STACK_LINE(180)
							Float b21 = be->__get((int)1);		HX_STACK_VAR(b21,"b21");
							HX_STACK_LINE(180)
							Float b22 = be->__get((int)5);		HX_STACK_VAR(b22,"b22");
							HX_STACK_LINE(180)
							Float b23 = be->__get((int)9);		HX_STACK_VAR(b23,"b23");
							HX_STACK_LINE(180)
							Float b24 = be->__get((int)13);		HX_STACK_VAR(b24,"b24");
							HX_STACK_LINE(180)
							Float b31 = be->__get((int)2);		HX_STACK_VAR(b31,"b31");
							HX_STACK_LINE(180)
							Float b32 = be->__get((int)6);		HX_STACK_VAR(b32,"b32");
							HX_STACK_LINE(180)
							Float b33 = be->__get((int)10);		HX_STACK_VAR(b33,"b33");
							HX_STACK_LINE(180)
							Float b34 = be->__get((int)14);		HX_STACK_VAR(b34,"b34");
							HX_STACK_LINE(180)
							Float b41 = be->__get((int)3);		HX_STACK_VAR(b41,"b41");
							HX_STACK_LINE(180)
							Float b42 = be->__get((int)7);		HX_STACK_VAR(b42,"b42");
							HX_STACK_LINE(180)
							Float b43 = be->__get((int)11);		HX_STACK_VAR(b43,"b43");
							HX_STACK_LINE(180)
							Float b44 = be->__get((int)15);		HX_STACK_VAR(b44,"b44");
							HX_STACK_LINE(180)
							te[(int)0] = ((((a11 * b11) + (a12 * b21)) + (a13 * b31)) + (a14 * b41));
							HX_STACK_LINE(180)
							te[(int)4] = ((((a11 * b12) + (a12 * b22)) + (a13 * b32)) + (a14 * b42));
							HX_STACK_LINE(180)
							te[(int)8] = ((((a11 * b13) + (a12 * b23)) + (a13 * b33)) + (a14 * b43));
							HX_STACK_LINE(180)
							te[(int)12] = ((((a11 * b14) + (a12 * b24)) + (a13 * b34)) + (a14 * b44));
							HX_STACK_LINE(180)
							te[(int)1] = ((((a21 * b11) + (a22 * b21)) + (a23 * b31)) + (a24 * b41));
							HX_STACK_LINE(180)
							te[(int)5] = ((((a21 * b12) + (a22 * b22)) + (a23 * b32)) + (a24 * b42));
							HX_STACK_LINE(180)
							te[(int)9] = ((((a21 * b13) + (a22 * b23)) + (a23 * b33)) + (a24 * b43));
							HX_STACK_LINE(180)
							te[(int)13] = ((((a21 * b14) + (a22 * b24)) + (a23 * b34)) + (a24 * b44));
							HX_STACK_LINE(180)
							te[(int)2] = ((((a31 * b11) + (a32 * b21)) + (a33 * b31)) + (a34 * b41));
							HX_STACK_LINE(180)
							te[(int)6] = ((((a31 * b12) + (a32 * b22)) + (a33 * b32)) + (a34 * b42));
							HX_STACK_LINE(180)
							te[(int)10] = ((((a31 * b13) + (a32 * b23)) + (a33 * b33)) + (a34 * b43));
							HX_STACK_LINE(180)
							te[(int)14] = ((((a31 * b14) + (a32 * b24)) + (a33 * b34)) + (a34 * b44));
							HX_STACK_LINE(180)
							te[(int)3] = ((((a41 * b11) + (a42 * b21)) + (a43 * b31)) + (a44 * b41));
							HX_STACK_LINE(180)
							te[(int)7] = ((((a41 * b12) + (a42 * b22)) + (a43 * b32)) + (a44 * b42));
							HX_STACK_LINE(180)
							te[(int)11] = ((((a41 * b13) + (a42 * b23)) + (a43 * b33)) + (a44 * b43));
							HX_STACK_LINE(180)
							te[(int)15] = ((((a41 * b14) + (a42 * b24)) + (a43 * b34)) + (a44 * b44));
							HX_STACK_LINE(180)
							_this1;
						}
					}
					HX_STACK_LINE(180)
					{
						HX_STACK_LINE(180)
						::phoenix::Matrix _this1 = _this->local->matrix;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(180)
						::phoenix::Vector _v = _this->local->pos;		HX_STACK_VAR(_v,"_v");
						HX_STACK_LINE(180)
						Array< Float > te = _this1->elements;		HX_STACK_VAR(te,"te");
						HX_STACK_LINE(180)
						te[(int)12] = _v->x;
						HX_STACK_LINE(180)
						te[(int)13] = _v->y;
						HX_STACK_LINE(180)
						te[(int)14] = _v->z;
						HX_STACK_LINE(180)
						_this1;
					}
					HX_STACK_LINE(180)
					{
						HX_STACK_LINE(180)
						::phoenix::Matrix _this1 = _this->local->matrix;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(180)
						{
							HX_STACK_LINE(180)
							Array< Float > ae = _this1->elements;		HX_STACK_VAR(ae,"ae");
							HX_STACK_LINE(180)
							Array< Float > be = _this->_origin_undo_matrix->elements;		HX_STACK_VAR(be,"be");
							HX_STACK_LINE(180)
							Array< Float > te = _this1->elements;		HX_STACK_VAR(te,"te");
							HX_STACK_LINE(180)
							Float a11 = ae->__get((int)0);		HX_STACK_VAR(a11,"a11");
							HX_STACK_LINE(180)
							Float a12 = ae->__get((int)4);		HX_STACK_VAR(a12,"a12");
							HX_STACK_LINE(180)
							Float a13 = ae->__get((int)8);		HX_STACK_VAR(a13,"a13");
							HX_STACK_LINE(180)
							Float a14 = ae->__get((int)12);		HX_STACK_VAR(a14,"a14");
							HX_STACK_LINE(180)
							Float a21 = ae->__get((int)1);		HX_STACK_VAR(a21,"a21");
							HX_STACK_LINE(180)
							Float a22 = ae->__get((int)5);		HX_STACK_VAR(a22,"a22");
							HX_STACK_LINE(180)
							Float a23 = ae->__get((int)9);		HX_STACK_VAR(a23,"a23");
							HX_STACK_LINE(180)
							Float a24 = ae->__get((int)13);		HX_STACK_VAR(a24,"a24");
							HX_STACK_LINE(180)
							Float a31 = ae->__get((int)2);		HX_STACK_VAR(a31,"a31");
							HX_STACK_LINE(180)
							Float a32 = ae->__get((int)6);		HX_STACK_VAR(a32,"a32");
							HX_STACK_LINE(180)
							Float a33 = ae->__get((int)10);		HX_STACK_VAR(a33,"a33");
							HX_STACK_LINE(180)
							Float a34 = ae->__get((int)14);		HX_STACK_VAR(a34,"a34");
							HX_STACK_LINE(180)
							Float a41 = ae->__get((int)3);		HX_STACK_VAR(a41,"a41");
							HX_STACK_LINE(180)
							Float a42 = ae->__get((int)7);		HX_STACK_VAR(a42,"a42");
							HX_STACK_LINE(180)
							Float a43 = ae->__get((int)11);		HX_STACK_VAR(a43,"a43");
							HX_STACK_LINE(180)
							Float a44 = ae->__get((int)15);		HX_STACK_VAR(a44,"a44");
							HX_STACK_LINE(180)
							Float b11 = be->__get((int)0);		HX_STACK_VAR(b11,"b11");
							HX_STACK_LINE(180)
							Float b12 = be->__get((int)4);		HX_STACK_VAR(b12,"b12");
							HX_STACK_LINE(180)
							Float b13 = be->__get((int)8);		HX_STACK_VAR(b13,"b13");
							HX_STACK_LINE(180)
							Float b14 = be->__get((int)12);		HX_STACK_VAR(b14,"b14");
							HX_STACK_LINE(180)
							Float b21 = be->__get((int)1);		HX_STACK_VAR(b21,"b21");
							HX_STACK_LINE(180)
							Float b22 = be->__get((int)5);		HX_STACK_VAR(b22,"b22");
							HX_STACK_LINE(180)
							Float b23 = be->__get((int)9);		HX_STACK_VAR(b23,"b23");
							HX_STACK_LINE(180)
							Float b24 = be->__get((int)13);		HX_STACK_VAR(b24,"b24");
							HX_STACK_LINE(180)
							Float b31 = be->__get((int)2);		HX_STACK_VAR(b31,"b31");
							HX_STACK_LINE(180)
							Float b32 = be->__get((int)6);		HX_STACK_VAR(b32,"b32");
							HX_STACK_LINE(180)
							Float b33 = be->__get((int)10);		HX_STACK_VAR(b33,"b33");
							HX_STACK_LINE(180)
							Float b34 = be->__get((int)14);		HX_STACK_VAR(b34,"b34");
							HX_STACK_LINE(180)
							Float b41 = be->__get((int)3);		HX_STACK_VAR(b41,"b41");
							HX_STACK_LINE(180)
							Float b42 = be->__get((int)7);		HX_STACK_VAR(b42,"b42");
							HX_STACK_LINE(180)
							Float b43 = be->__get((int)11);		HX_STACK_VAR(b43,"b43");
							HX_STACK_LINE(180)
							Float b44 = be->__get((int)15);		HX_STACK_VAR(b44,"b44");
							HX_STACK_LINE(180)
							te[(int)0] = ((((a11 * b11) + (a12 * b21)) + (a13 * b31)) + (a14 * b41));
							HX_STACK_LINE(180)
							te[(int)4] = ((((a11 * b12) + (a12 * b22)) + (a13 * b32)) + (a14 * b42));
							HX_STACK_LINE(180)
							te[(int)8] = ((((a11 * b13) + (a12 * b23)) + (a13 * b33)) + (a14 * b43));
							HX_STACK_LINE(180)
							te[(int)12] = ((((a11 * b14) + (a12 * b24)) + (a13 * b34)) + (a14 * b44));
							HX_STACK_LINE(180)
							te[(int)1] = ((((a21 * b11) + (a22 * b21)) + (a23 * b31)) + (a24 * b41));
							HX_STACK_LINE(180)
							te[(int)5] = ((((a21 * b12) + (a22 * b22)) + (a23 * b32)) + (a24 * b42));
							HX_STACK_LINE(180)
							te[(int)9] = ((((a21 * b13) + (a22 * b23)) + (a23 * b33)) + (a24 * b43));
							HX_STACK_LINE(180)
							te[(int)13] = ((((a21 * b14) + (a22 * b24)) + (a23 * b34)) + (a24 * b44));
							HX_STACK_LINE(180)
							te[(int)2] = ((((a31 * b11) + (a32 * b21)) + (a33 * b31)) + (a34 * b41));
							HX_STACK_LINE(180)
							te[(int)6] = ((((a31 * b12) + (a32 * b22)) + (a33 * b32)) + (a34 * b42));
							HX_STACK_LINE(180)
							te[(int)10] = ((((a31 * b13) + (a32 * b23)) + (a33 * b33)) + (a34 * b43));
							HX_STACK_LINE(180)
							te[(int)14] = ((((a31 * b14) + (a32 * b24)) + (a33 * b34)) + (a34 * b44));
							HX_STACK_LINE(180)
							te[(int)3] = ((((a41 * b11) + (a42 * b21)) + (a43 * b31)) + (a44 * b41));
							HX_STACK_LINE(180)
							te[(int)7] = ((((a41 * b12) + (a42 * b22)) + (a43 * b32)) + (a44 * b42));
							HX_STACK_LINE(180)
							te[(int)11] = ((((a41 * b13) + (a42 * b23)) + (a43 * b33)) + (a44 * b43));
							HX_STACK_LINE(180)
							te[(int)15] = ((((a41 * b14) + (a42 * b24)) + (a43 * b34)) + (a44 * b44));
							HX_STACK_LINE(180)
							_this1;
						}
					}
					HX_STACK_LINE(180)
					if (((_this->parent != null()))){
						HX_STACK_LINE(180)
						::phoenix::Spatial _this1 = _this->get_world();		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(180)
						::phoenix::Matrix _m;		HX_STACK_VAR(_m,"_m");
						HX_STACK_LINE(180)
						{
							HX_STACK_LINE(180)
							::phoenix::Matrix _this2;		HX_STACK_VAR(_this2,"_this2");
							HX_STACK_LINE(180)
							{
								HX_STACK_LINE(180)
								::phoenix::Spatial _this3 = _this->get_world();		HX_STACK_VAR(_this3,"_this3");
								HX_STACK_LINE(180)
								_this2 = _this3->matrix;
							}
							HX_STACK_LINE(180)
							::phoenix::Matrix _a;		HX_STACK_VAR(_a,"_a");
							HX_STACK_LINE(180)
							{
								HX_STACK_LINE(180)
								::phoenix::Spatial _this3 = _this->parent->get_world();		HX_STACK_VAR(_this3,"_this3");
								HX_STACK_LINE(180)
								_a = _this3->matrix;
							}
							HX_STACK_LINE(180)
							Array< Float > ae = _a->elements;		HX_STACK_VAR(ae,"ae");
							HX_STACK_LINE(180)
							Array< Float > be = _this->local->matrix->elements;		HX_STACK_VAR(be,"be");
							HX_STACK_LINE(180)
							Array< Float > te = _this2->elements;		HX_STACK_VAR(te,"te");
							HX_STACK_LINE(180)
							Float a11 = ae->__get((int)0);		HX_STACK_VAR(a11,"a11");
							HX_STACK_LINE(180)
							Float a12 = ae->__get((int)4);		HX_STACK_VAR(a12,"a12");
							HX_STACK_LINE(180)
							Float a13 = ae->__get((int)8);		HX_STACK_VAR(a13,"a13");
							HX_STACK_LINE(180)
							Float a14 = ae->__get((int)12);		HX_STACK_VAR(a14,"a14");
							HX_STACK_LINE(180)
							Float a21 = ae->__get((int)1);		HX_STACK_VAR(a21,"a21");
							HX_STACK_LINE(180)
							Float a22 = ae->__get((int)5);		HX_STACK_VAR(a22,"a22");
							HX_STACK_LINE(180)
							Float a23 = ae->__get((int)9);		HX_STACK_VAR(a23,"a23");
							HX_STACK_LINE(180)
							Float a24 = ae->__get((int)13);		HX_STACK_VAR(a24,"a24");
							HX_STACK_LINE(180)
							Float a31 = ae->__get((int)2);		HX_STACK_VAR(a31,"a31");
							HX_STACK_LINE(180)
							Float a32 = ae->__get((int)6);		HX_STACK_VAR(a32,"a32");
							HX_STACK_LINE(180)
							Float a33 = ae->__get((int)10);		HX_STACK_VAR(a33,"a33");
							HX_STACK_LINE(180)
							Float a34 = ae->__get((int)14);		HX_STACK_VAR(a34,"a34");
							HX_STACK_LINE(180)
							Float a41 = ae->__get((int)3);		HX_STACK_VAR(a41,"a41");
							HX_STACK_LINE(180)
							Float a42 = ae->__get((int)7);		HX_STACK_VAR(a42,"a42");
							HX_STACK_LINE(180)
							Float a43 = ae->__get((int)11);		HX_STACK_VAR(a43,"a43");
							HX_STACK_LINE(180)
							Float a44 = ae->__get((int)15);		HX_STACK_VAR(a44,"a44");
							HX_STACK_LINE(180)
							Float b11 = be->__get((int)0);		HX_STACK_VAR(b11,"b11");
							HX_STACK_LINE(180)
							Float b12 = be->__get((int)4);		HX_STACK_VAR(b12,"b12");
							HX_STACK_LINE(180)
							Float b13 = be->__get((int)8);		HX_STACK_VAR(b13,"b13");
							HX_STACK_LINE(180)
							Float b14 = be->__get((int)12);		HX_STACK_VAR(b14,"b14");
							HX_STACK_LINE(180)
							Float b21 = be->__get((int)1);		HX_STACK_VAR(b21,"b21");
							HX_STACK_LINE(180)
							Float b22 = be->__get((int)5);		HX_STACK_VAR(b22,"b22");
							HX_STACK_LINE(180)
							Float b23 = be->__get((int)9);		HX_STACK_VAR(b23,"b23");
							HX_STACK_LINE(180)
							Float b24 = be->__get((int)13);		HX_STACK_VAR(b24,"b24");
							HX_STACK_LINE(180)
							Float b31 = be->__get((int)2);		HX_STACK_VAR(b31,"b31");
							HX_STACK_LINE(180)
							Float b32 = be->__get((int)6);		HX_STACK_VAR(b32,"b32");
							HX_STACK_LINE(180)
							Float b33 = be->__get((int)10);		HX_STACK_VAR(b33,"b33");
							HX_STACK_LINE(180)
							Float b34 = be->__get((int)14);		HX_STACK_VAR(b34,"b34");
							HX_STACK_LINE(180)
							Float b41 = be->__get((int)3);		HX_STACK_VAR(b41,"b41");
							HX_STACK_LINE(180)
							Float b42 = be->__get((int)7);		HX_STACK_VAR(b42,"b42");
							HX_STACK_LINE(180)
							Float b43 = be->__get((int)11);		HX_STACK_VAR(b43,"b43");
							HX_STACK_LINE(180)
							Float b44 = be->__get((int)15);		HX_STACK_VAR(b44,"b44");
							HX_STACK_LINE(180)
							te[(int)0] = ((((a11 * b11) + (a12 * b21)) + (a13 * b31)) + (a14 * b41));
							HX_STACK_LINE(180)
							te[(int)4] = ((((a11 * b12) + (a12 * b22)) + (a13 * b32)) + (a14 * b42));
							HX_STACK_LINE(180)
							te[(int)8] = ((((a11 * b13) + (a12 * b23)) + (a13 * b33)) + (a14 * b43));
							HX_STACK_LINE(180)
							te[(int)12] = ((((a11 * b14) + (a12 * b24)) + (a13 * b34)) + (a14 * b44));
							HX_STACK_LINE(180)
							te[(int)1] = ((((a21 * b11) + (a22 * b21)) + (a23 * b31)) + (a24 * b41));
							HX_STACK_LINE(180)
							te[(int)5] = ((((a21 * b12) + (a22 * b22)) + (a23 * b32)) + (a24 * b42));
							HX_STACK_LINE(180)
							te[(int)9] = ((((a21 * b13) + (a22 * b23)) + (a23 * b33)) + (a24 * b43));
							HX_STACK_LINE(180)
							te[(int)13] = ((((a21 * b14) + (a22 * b24)) + (a23 * b34)) + (a24 * b44));
							HX_STACK_LINE(180)
							te[(int)2] = ((((a31 * b11) + (a32 * b21)) + (a33 * b31)) + (a34 * b41));
							HX_STACK_LINE(180)
							te[(int)6] = ((((a31 * b12) + (a32 * b22)) + (a33 * b32)) + (a34 * b42));
							HX_STACK_LINE(180)
							te[(int)10] = ((((a31 * b13) + (a32 * b23)) + (a33 * b33)) + (a34 * b43));
							HX_STACK_LINE(180)
							te[(int)14] = ((((a31 * b14) + (a32 * b24)) + (a33 * b34)) + (a34 * b44));
							HX_STACK_LINE(180)
							te[(int)3] = ((((a41 * b11) + (a42 * b21)) + (a43 * b31)) + (a44 * b41));
							HX_STACK_LINE(180)
							te[(int)7] = ((((a41 * b12) + (a42 * b22)) + (a43 * b32)) + (a44 * b42));
							HX_STACK_LINE(180)
							te[(int)11] = ((((a41 * b13) + (a42 * b23)) + (a43 * b33)) + (a44 * b43));
							HX_STACK_LINE(180)
							te[(int)15] = ((((a41 * b14) + (a42 * b24)) + (a43 * b34)) + (a44 * b44));
							HX_STACK_LINE(180)
							_m = _this2;
						}
						HX_STACK_LINE(180)
						_this1->matrix = _m;
						HX_STACK_LINE(180)
						if (((_m != null()))){
							HX_STACK_LINE(180)
							::snow::platform::native::utils::Float32Array _g;		HX_STACK_VAR(_g,"_g");
							HX_STACK_LINE(180)
							{
								HX_STACK_LINE(180)
								::phoenix::Matrix _this2 = _this1->matrix;		HX_STACK_VAR(_this2,"_this2");
								HX_STACK_LINE(180)
								{
									HX_STACK_LINE(180)
									::snow::platform::native::utils::Float32Array _this3 = _this2->_float32array;		HX_STACK_VAR(_this3,"_this3");
									HX_STACK_LINE(180)
									Dynamic bufferOrArray = _this2->elements;		HX_STACK_VAR(bufferOrArray,"bufferOrArray");
									HX_STACK_LINE(180)
									int offset = (int)0;		HX_STACK_VAR(offset,"offset");
									HX_STACK_LINE(180)
									if ((::Std_obj::is(bufferOrArray,hx::ClassOf< Array<int> >()))){
										HX_STACK_LINE(180)
										Array< Float > floats = bufferOrArray;		HX_STACK_VAR(floats,"floats");
										HX_STACK_LINE(180)
										{
											HX_STACK_LINE(180)
											int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
											HX_STACK_LINE(180)
											int _g2 = floats->length;		HX_STACK_VAR(_g2,"_g2");
											HX_STACK_LINE(180)
											while((true)){
												HX_STACK_LINE(180)
												if ((!(((_g1 < _g2))))){
													HX_STACK_LINE(180)
													break;
												}
												HX_STACK_LINE(180)
												int i = (_g1)++;		HX_STACK_VAR(i,"i");
												HX_STACK_LINE(180)
												::__hxcpp_memory_set_float(_this3->bytes,(((int((i + offset)) << int((int)2))) + _this3->byteOffset),floats->__get(i));
											}
										}
									}
									else{
										HX_STACK_LINE(180)
										if ((::Std_obj::is(bufferOrArray,hx::ClassOf< ::snow::platform::native::utils::Float32Array >()))){
											HX_STACK_LINE(180)
											::snow::platform::native::utils::Float32Array floats = bufferOrArray;		HX_STACK_VAR(floats,"floats");
											HX_STACK_LINE(180)
											{
												HX_STACK_LINE(180)
												int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
												HX_STACK_LINE(180)
												int _g2 = floats->length;		HX_STACK_VAR(_g2,"_g2");
												HX_STACK_LINE(180)
												while((true)){
													HX_STACK_LINE(180)
													if ((!(((_g1 < _g2))))){
														HX_STACK_LINE(180)
														break;
													}
													HX_STACK_LINE(180)
													int i = (_g1)++;		HX_STACK_VAR(i,"i");
													HX_STACK_LINE(180)
													::__hxcpp_memory_set_float(_this3->bytes,(((int((i + offset)) << int((int)2))) + _this3->byteOffset),floats->__get(i));
												}
											}
										}
										else{
											HX_STACK_LINE(180)
											HX_STACK_DO_THROW(HX_CSTRING("Invalid input buffer"));
										}
									}
								}
								HX_STACK_LINE(180)
								_g = ::snow::platform::native::utils::Float32Array_obj::__new(_this2->_float32array,null(),null());
							}
							HX_STACK_LINE(180)
							_this1->floats = _g;
						}
						HX_STACK_LINE(180)
						_this1->matrix;
					}
					else{
						HX_STACK_LINE(180)
						::phoenix::Spatial _this1 = _this->get_world();		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(180)
						::phoenix::Matrix _m;		HX_STACK_VAR(_m,"_m");
						HX_STACK_LINE(180)
						{
							HX_STACK_LINE(180)
							Array< Float > te = _this->local->matrix->elements;		HX_STACK_VAR(te,"te");
							HX_STACK_LINE(180)
							_m = ::phoenix::Matrix_obj::__new(te->__get((int)0),te->__get((int)4),te->__get((int)8),te->__get((int)12),te->__get((int)1),te->__get((int)5),te->__get((int)9),te->__get((int)13),te->__get((int)2),te->__get((int)6),te->__get((int)10),te->__get((int)14),te->__get((int)3),te->__get((int)7),te->__get((int)11),te->__get((int)15));
						}
						HX_STACK_LINE(180)
						_this1->matrix = _m;
						HX_STACK_LINE(180)
						if (((_m != null()))){
							HX_STACK_LINE(180)
							::snow::platform::native::utils::Float32Array _g1;		HX_STACK_VAR(_g1,"_g1");
							HX_STACK_LINE(180)
							{
								HX_STACK_LINE(180)
								::phoenix::Matrix _this2 = _this1->matrix;		HX_STACK_VAR(_this2,"_this2");
								HX_STACK_LINE(180)
								{
									HX_STACK_LINE(180)
									::snow::platform::native::utils::Float32Array _this3 = _this2->_float32array;		HX_STACK_VAR(_this3,"_this3");
									HX_STACK_LINE(180)
									Dynamic bufferOrArray = _this2->elements;		HX_STACK_VAR(bufferOrArray,"bufferOrArray");
									HX_STACK_LINE(180)
									int offset = (int)0;		HX_STACK_VAR(offset,"offset");
									HX_STACK_LINE(180)
									if ((::Std_obj::is(bufferOrArray,hx::ClassOf< Array<int> >()))){
										HX_STACK_LINE(180)
										Array< Float > floats = bufferOrArray;		HX_STACK_VAR(floats,"floats");
										HX_STACK_LINE(180)
										{
											HX_STACK_LINE(180)
											int _g11 = (int)0;		HX_STACK_VAR(_g11,"_g11");
											HX_STACK_LINE(180)
											int _g = floats->length;		HX_STACK_VAR(_g,"_g");
											HX_STACK_LINE(180)
											while((true)){
												HX_STACK_LINE(180)
												if ((!(((_g11 < _g))))){
													HX_STACK_LINE(180)
													break;
												}
												HX_STACK_LINE(180)
												int i = (_g11)++;		HX_STACK_VAR(i,"i");
												HX_STACK_LINE(180)
												::__hxcpp_memory_set_float(_this3->bytes,(((int((i + offset)) << int((int)2))) + _this3->byteOffset),floats->__get(i));
											}
										}
									}
									else{
										HX_STACK_LINE(180)
										if ((::Std_obj::is(bufferOrArray,hx::ClassOf< ::snow::platform::native::utils::Float32Array >()))){
											HX_STACK_LINE(180)
											::snow::platform::native::utils::Float32Array floats = bufferOrArray;		HX_STACK_VAR(floats,"floats");
											HX_STACK_LINE(180)
											{
												HX_STACK_LINE(180)
												int _g11 = (int)0;		HX_STACK_VAR(_g11,"_g11");
												HX_STACK_LINE(180)
												int _g = floats->length;		HX_STACK_VAR(_g,"_g");
												HX_STACK_LINE(180)
												while((true)){
													HX_STACK_LINE(180)
													if ((!(((_g11 < _g))))){
														HX_STACK_LINE(180)
														break;
													}
													HX_STACK_LINE(180)
													int i = (_g11)++;		HX_STACK_VAR(i,"i");
													HX_STACK_LINE(180)
													::__hxcpp_memory_set_float(_this3->bytes,(((int((i + offset)) << int((int)2))) + _this3->byteOffset),floats->__get(i));
												}
											}
										}
										else{
											HX_STACK_LINE(180)
											HX_STACK_DO_THROW(HX_CSTRING("Invalid input buffer"));
										}
									}
								}
								HX_STACK_LINE(180)
								_g1 = ::snow::platform::native::utils::Float32Array_obj::__new(_this2->_float32array,null(),null());
							}
							HX_STACK_LINE(180)
							_this1->floats = _g1;
						}
						HX_STACK_LINE(180)
						_this1->matrix;
					}
					HX_STACK_LINE(180)
					{
						HX_STACK_LINE(180)
						::phoenix::Spatial _this1 = _this->get_world();		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(180)
						if ((_this1->auto_decompose)){
							HX_STACK_LINE(180)
							::phoenix::MatrixTransform _transform;		HX_STACK_VAR(_transform,"_transform");
							HX_STACK_LINE(180)
							{
								HX_STACK_LINE(180)
								::phoenix::Matrix _this2 = _this1->matrix;		HX_STACK_VAR(_this2,"_this2");
								HX_STACK_LINE(180)
								::phoenix::Vector _position = null();		HX_STACK_VAR(_position,"_position");
								HX_STACK_LINE(180)
								::phoenix::Quaternion _quaternion = null();		HX_STACK_VAR(_quaternion,"_quaternion");
								HX_STACK_LINE(180)
								::phoenix::Vector _scale = null();		HX_STACK_VAR(_scale,"_scale");
								HX_STACK_LINE(180)
								Array< Float > te = _this2->elements;		HX_STACK_VAR(te,"te");
								HX_STACK_LINE(180)
								::phoenix::Matrix matrix = ::phoenix::Matrix_obj::__new(null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(matrix,"matrix");
								HX_STACK_LINE(180)
								Float _ax_x = te->__get((int)0);		HX_STACK_VAR(_ax_x,"_ax_x");
								HX_STACK_LINE(180)
								Float _ax_y = te->__get((int)1);		HX_STACK_VAR(_ax_y,"_ax_y");
								HX_STACK_LINE(180)
								Float _ax_z = te->__get((int)2);		HX_STACK_VAR(_ax_z,"_ax_z");
								HX_STACK_LINE(180)
								Float _ay_x = te->__get((int)4);		HX_STACK_VAR(_ay_x,"_ay_x");
								HX_STACK_LINE(180)
								Float _ay_y = te->__get((int)5);		HX_STACK_VAR(_ay_y,"_ay_y");
								HX_STACK_LINE(180)
								Float _ay_z = te->__get((int)6);		HX_STACK_VAR(_ay_z,"_ay_z");
								HX_STACK_LINE(180)
								Float _az_x = te->__get((int)8);		HX_STACK_VAR(_az_x,"_az_x");
								HX_STACK_LINE(180)
								Float _az_y = te->__get((int)9);		HX_STACK_VAR(_az_y,"_az_y");
								HX_STACK_LINE(180)
								Float _az_z = te->__get((int)10);		HX_STACK_VAR(_az_z,"_az_z");
								HX_STACK_LINE(180)
								Float _ax_length = ::Math_obj::sqrt((((_ax_x * _ax_x) + (_ax_y * _ax_y)) + (_ax_z * _ax_z)));		HX_STACK_VAR(_ax_length,"_ax_length");
								HX_STACK_LINE(180)
								Float _ay_length = ::Math_obj::sqrt((((_ay_x * _ay_x) + (_ay_y * _ay_y)) + (_ay_z * _ay_z)));		HX_STACK_VAR(_ay_length,"_ay_length");
								HX_STACK_LINE(180)
								Float _az_length = ::Math_obj::sqrt((((_az_x * _az_x) + (_az_y * _az_y)) + (_az_z * _az_z)));		HX_STACK_VAR(_az_length,"_az_length");
								HX_STACK_LINE(180)
								if (((_quaternion == null()))){
									HX_STACK_LINE(180)
									::phoenix::Quaternion _g2 = ::phoenix::Quaternion_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(_g2,"_g2");
									HX_STACK_LINE(180)
									_quaternion = _g2;
								}
								HX_STACK_LINE(180)
								if (((_position == null()))){
									HX_STACK_LINE(180)
									::phoenix::Vector _g3 = ::phoenix::Vector_obj::__new(te->__get((int)12),te->__get((int)13),te->__get((int)14),null());		HX_STACK_VAR(_g3,"_g3");
									HX_STACK_LINE(180)
									_position = _g3;
								}
								else{
									HX_STACK_LINE(180)
									{
										HX_STACK_LINE(180)
										Float _x = te->__get((int)12);		HX_STACK_VAR(_x,"_x");
										HX_STACK_LINE(180)
										_position->x = _x;
										HX_STACK_LINE(180)
										if ((_position->_construct)){
											HX_STACK_LINE(180)
											_position->x;
										}
										else{
											HX_STACK_LINE(180)
											if (((bool((_position->listen_x != null())) && bool(!(_position->ignore_listeners))))){
												HX_STACK_LINE(180)
												_position->listen_x(_x);
											}
											HX_STACK_LINE(180)
											_position->x;
										}
									}
									HX_STACK_LINE(180)
									{
										HX_STACK_LINE(180)
										Float _y = te->__get((int)13);		HX_STACK_VAR(_y,"_y");
										HX_STACK_LINE(180)
										_position->y = _y;
										HX_STACK_LINE(180)
										if ((_position->_construct)){
											HX_STACK_LINE(180)
											_position->y;
										}
										else{
											HX_STACK_LINE(180)
											if (((bool((_position->listen_y != null())) && bool(!(_position->ignore_listeners))))){
												HX_STACK_LINE(180)
												_position->listen_y(_y);
											}
											HX_STACK_LINE(180)
											_position->y;
										}
									}
									HX_STACK_LINE(180)
									{
										HX_STACK_LINE(180)
										Float _z = te->__get((int)14);		HX_STACK_VAR(_z,"_z");
										HX_STACK_LINE(180)
										_position->z = _z;
										HX_STACK_LINE(180)
										if ((_position->_construct)){
											HX_STACK_LINE(180)
											_position->z;
										}
										else{
											HX_STACK_LINE(180)
											if (((bool((_position->listen_z != null())) && bool(!(_position->ignore_listeners))))){
												HX_STACK_LINE(180)
												_position->listen_z(_z);
											}
											HX_STACK_LINE(180)
											_position->z;
										}
									}
								}
								HX_STACK_LINE(180)
								if (((_scale == null()))){
									HX_STACK_LINE(180)
									::phoenix::Vector _g4 = ::phoenix::Vector_obj::__new(_ax_length,_ay_length,_az_length,null());		HX_STACK_VAR(_g4,"_g4");
									HX_STACK_LINE(180)
									_scale = _g4;
								}
								else{
									HX_STACK_LINE(180)
									{
										HX_STACK_LINE(180)
										_scale->x = _ax_length;
										HX_STACK_LINE(180)
										if ((_scale->_construct)){
											HX_STACK_LINE(180)
											_scale->x;
										}
										else{
											HX_STACK_LINE(180)
											if (((bool((_scale->listen_x != null())) && bool(!(_scale->ignore_listeners))))){
												HX_STACK_LINE(180)
												_scale->listen_x(_ax_length);
											}
											HX_STACK_LINE(180)
											_scale->x;
										}
									}
									HX_STACK_LINE(180)
									{
										HX_STACK_LINE(180)
										_scale->y = _ay_length;
										HX_STACK_LINE(180)
										if ((_scale->_construct)){
											HX_STACK_LINE(180)
											_scale->y;
										}
										else{
											HX_STACK_LINE(180)
											if (((bool((_scale->listen_y != null())) && bool(!(_scale->ignore_listeners))))){
												HX_STACK_LINE(180)
												_scale->listen_y(_ay_length);
											}
											HX_STACK_LINE(180)
											_scale->y;
										}
									}
									HX_STACK_LINE(180)
									{
										HX_STACK_LINE(180)
										_scale->z = _az_length;
										HX_STACK_LINE(180)
										if ((_scale->_construct)){
											HX_STACK_LINE(180)
											_scale->z;
										}
										else{
											HX_STACK_LINE(180)
											if (((bool((_scale->listen_z != null())) && bool(!(_scale->ignore_listeners))))){
												HX_STACK_LINE(180)
												_scale->listen_z(_az_length);
											}
											HX_STACK_LINE(180)
											_scale->z;
										}
									}
								}
								HX_STACK_LINE(180)
								Array< Float > _g5 = _this2->elements->concat(Array_obj< Float >::__new());		HX_STACK_VAR(_g5,"_g5");
								HX_STACK_LINE(180)
								matrix->elements = _g5;
								HX_STACK_LINE(180)
								Array< Float > me = matrix->elements;		HX_STACK_VAR(me,"me");
								HX_STACK_LINE(180)
								hx::DivEq(me[(int)0],_ax_length);
								HX_STACK_LINE(180)
								hx::DivEq(me[(int)1],_ax_length);
								HX_STACK_LINE(180)
								hx::DivEq(me[(int)2],_ax_length);
								HX_STACK_LINE(180)
								hx::DivEq(me[(int)4],_ay_length);
								HX_STACK_LINE(180)
								hx::DivEq(me[(int)5],_ay_length);
								HX_STACK_LINE(180)
								hx::DivEq(me[(int)6],_ay_length);
								HX_STACK_LINE(180)
								hx::DivEq(me[(int)8],_az_length);
								HX_STACK_LINE(180)
								hx::DivEq(me[(int)9],_az_length);
								HX_STACK_LINE(180)
								hx::DivEq(me[(int)10],_az_length);
								HX_STACK_LINE(180)
								_quaternion->setFromRotationMatrix(matrix);
								HX_STACK_LINE(180)
								if (((_this2->_transform == null()))){
									HX_STACK_LINE(180)
									::phoenix::MatrixTransform _g6 = ::phoenix::MatrixTransform_obj::__new(_position,_quaternion,_scale);		HX_STACK_VAR(_g6,"_g6");
									HX_STACK_LINE(180)
									_this2->_transform = _g6;
								}
								else{
									HX_STACK_LINE(180)
									_this2->_transform->pos = _position;
									HX_STACK_LINE(180)
									_this2->_transform->rotation = _quaternion;
									HX_STACK_LINE(180)
									_this2->_transform->scale = _scale;
								}
								HX_STACK_LINE(180)
								_transform = _this2->_transform;
							}
							HX_STACK_LINE(180)
							{
								HX_STACK_LINE(180)
								::phoenix::Vector _p = _transform->pos;		HX_STACK_VAR(_p,"_p");
								HX_STACK_LINE(180)
								_this1->pos = _p;
								HX_STACK_LINE(180)
								if (((_p != null()))){
									HX_STACK_LINE(180)
									::phoenix::Vector_obj::Listen(_this1->pos,_this1->_pos_change_dyn());
									HX_STACK_LINE(180)
									if (((bool((_this1->pos_changed != null())) && bool(!(_this1->ignore_listeners))))){
										HX_STACK_LINE(180)
										_this1->pos_changed(_this1->pos);
									}
								}
								HX_STACK_LINE(180)
								_this1->pos;
							}
							HX_STACK_LINE(180)
							{
								HX_STACK_LINE(180)
								::phoenix::Quaternion _r = _transform->rotation;		HX_STACK_VAR(_r,"_r");
								HX_STACK_LINE(180)
								_this1->rotation = _r;
								HX_STACK_LINE(180)
								if (((_r != null()))){
									HX_STACK_LINE(180)
									{
										HX_STACK_LINE(180)
										::phoenix::Quaternion _q = _this1->rotation;		HX_STACK_VAR(_q,"_q");
										HX_STACK_LINE(180)
										Dynamic listener = _this1->_rotation_change_dyn();		HX_STACK_VAR(listener,"listener");
										HX_STACK_LINE(180)
										_q->listen_x = listener;
										HX_STACK_LINE(180)
										_q->listen_y = listener;
										HX_STACK_LINE(180)
										_q->listen_z = listener;
										HX_STACK_LINE(180)
										_q->listen_w = listener;
									}
									HX_STACK_LINE(180)
									if (((bool((_this1->rotation_changed != null())) && bool(!(_this1->ignore_listeners))))){
										HX_STACK_LINE(180)
										_this1->rotation_changed(_this1->rotation);
									}
								}
								HX_STACK_LINE(180)
								_this1->rotation;
							}
							HX_STACK_LINE(180)
							{
								HX_STACK_LINE(180)
								::phoenix::Vector _s = _transform->scale;		HX_STACK_VAR(_s,"_s");
								HX_STACK_LINE(180)
								_this1->scale = _s;
								HX_STACK_LINE(180)
								if (((_s != null()))){
									HX_STACK_LINE(180)
									::phoenix::Vector_obj::Listen(_this1->scale,_this1->_scale_change_dyn());
									HX_STACK_LINE(180)
									if (((bool((_this1->scale_changed != null())) && bool(!(_this1->ignore_listeners))))){
										HX_STACK_LINE(180)
										_this1->scale_changed(_this1->scale);
									}
								}
								HX_STACK_LINE(180)
								_this1->scale;
							}
						}
						HX_STACK_LINE(180)
						_this1;
					}
					HX_STACK_LINE(180)
					{
						HX_STACK_LINE(180)
						_this->dirty = false;
						HX_STACK_LINE(180)
						if (((bool((bool((bool(_this->dirty) && bool(!(_this->_setup)))) && bool((_this->_dirty_handlers != null())))) && bool((_this->_dirty_handlers->__Field(HX_CSTRING("length"),true) > (int)0))))){
							HX_STACK_LINE(180)
							int _g = (int)0;		HX_STACK_VAR(_g,"_g");
							HX_STACK_LINE(180)
							Dynamic _g1 = _this->_dirty_handlers;		HX_STACK_VAR(_g1,"_g1");
							HX_STACK_LINE(180)
							while((true)){
								HX_STACK_LINE(180)
								if ((!(((_g < _g1->__Field(HX_CSTRING("length"),true)))))){
									HX_STACK_LINE(180)
									break;
								}
								HX_STACK_LINE(180)
								Dynamic _handler = _g1->__GetItem(_g);		HX_STACK_VAR(_handler,"_handler");
								HX_STACK_LINE(180)
								++(_g);
								HX_STACK_LINE(180)
								if (((_handler != null()))){
									HX_STACK_LINE(180)
									_handler(_this).Cast< Void >();
								}
							}
						}
						HX_STACK_LINE(180)
						_this->dirty;
					}
					HX_STACK_LINE(180)
					_this->_cleaning = false;
					HX_STACK_LINE(180)
					if (((bool((_this->_clean_handlers != null())) && bool((_this->_clean_handlers->__Field(HX_CSTRING("length"),true) > (int)0))))){
						HX_STACK_LINE(180)
						int _g = (int)0;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(180)
						Dynamic _g1 = _this->_clean_handlers;		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(180)
						while((true)){
							HX_STACK_LINE(180)
							if ((!(((_g < _g1->__Field(HX_CSTRING("length"),true)))))){
								HX_STACK_LINE(180)
								break;
							}
							HX_STACK_LINE(180)
							Dynamic _handler = _g1->__GetItem(_g);		HX_STACK_VAR(_handler,"_handler");
							HX_STACK_LINE(180)
							++(_g);
							HX_STACK_LINE(180)
							if (((_handler != null()))){
								HX_STACK_LINE(180)
								_handler(_this).Cast< Void >();
							}
						}
					}
				}
			}
		}
		HX_STACK_LINE(180)
		if (((bool(this->dirty) && bool(!(this->_cleaning))))){
			HX_STACK_LINE(180)
			if ((!(this->dirty))){
				HX_STACK_LINE(180)
				Dynamic();
			}
			else{
				HX_STACK_LINE(180)
				this->_cleaning = true;
				HX_STACK_LINE(180)
				{
					HX_STACK_LINE(180)
					::phoenix::Matrix _this = this->_pos_matrix;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(180)
					{
						HX_STACK_LINE(180)
						Array< Float > e = _this->elements;		HX_STACK_VAR(e,"e");
						HX_STACK_LINE(180)
						e[(int)0] = (int)1;
						HX_STACK_LINE(180)
						e[(int)4] = (int)0;
						HX_STACK_LINE(180)
						e[(int)8] = (int)0;
						HX_STACK_LINE(180)
						e[(int)12] = this->local->pos->x;
						HX_STACK_LINE(180)
						e[(int)1] = (int)0;
						HX_STACK_LINE(180)
						e[(int)5] = (int)1;
						HX_STACK_LINE(180)
						e[(int)9] = (int)0;
						HX_STACK_LINE(180)
						e[(int)13] = this->local->pos->y;
						HX_STACK_LINE(180)
						e[(int)2] = (int)0;
						HX_STACK_LINE(180)
						e[(int)6] = (int)0;
						HX_STACK_LINE(180)
						e[(int)10] = (int)1;
						HX_STACK_LINE(180)
						e[(int)14] = this->local->pos->z;
						HX_STACK_LINE(180)
						e[(int)3] = (int)0;
						HX_STACK_LINE(180)
						e[(int)7] = (int)0;
						HX_STACK_LINE(180)
						e[(int)11] = (int)0;
						HX_STACK_LINE(180)
						e[(int)15] = (int)1;
						HX_STACK_LINE(180)
						_this;
					}
					HX_STACK_LINE(180)
					_this;
				}
				HX_STACK_LINE(180)
				{
					HX_STACK_LINE(180)
					::phoenix::Matrix _this = this->_rotation_matrix;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(180)
					::phoenix::Quaternion q = this->local->rotation;		HX_STACK_VAR(q,"q");
					HX_STACK_LINE(180)
					Array< Float > te = _this->elements;		HX_STACK_VAR(te,"te");
					HX_STACK_LINE(180)
					Float x2 = (q->x + q->x);		HX_STACK_VAR(x2,"x2");
					HX_STACK_LINE(180)
					Float y2 = (q->y + q->y);		HX_STACK_VAR(y2,"y2");
					HX_STACK_LINE(180)
					Float z2 = (q->z + q->z);		HX_STACK_VAR(z2,"z2");
					HX_STACK_LINE(180)
					Float xx = (q->x * x2);		HX_STACK_VAR(xx,"xx");
					HX_STACK_LINE(180)
					Float xy = (q->x * y2);		HX_STACK_VAR(xy,"xy");
					HX_STACK_LINE(180)
					Float xz = (q->x * z2);		HX_STACK_VAR(xz,"xz");
					HX_STACK_LINE(180)
					Float yy = (q->y * y2);		HX_STACK_VAR(yy,"yy");
					HX_STACK_LINE(180)
					Float yz = (q->y * z2);		HX_STACK_VAR(yz,"yz");
					HX_STACK_LINE(180)
					Float zz = (q->z * z2);		HX_STACK_VAR(zz,"zz");
					HX_STACK_LINE(180)
					Float wx = (q->w * x2);		HX_STACK_VAR(wx,"wx");
					HX_STACK_LINE(180)
					Float wy = (q->w * y2);		HX_STACK_VAR(wy,"wy");
					HX_STACK_LINE(180)
					Float wz = (q->w * z2);		HX_STACK_VAR(wz,"wz");
					HX_STACK_LINE(180)
					te[(int)0] = ((int)1 - ((yy + zz)));
					HX_STACK_LINE(180)
					te[(int)4] = (xy - wz);
					HX_STACK_LINE(180)
					te[(int)8] = (xz + wy);
					HX_STACK_LINE(180)
					te[(int)1] = (xy + wz);
					HX_STACK_LINE(180)
					te[(int)5] = ((int)1 - ((xx + zz)));
					HX_STACK_LINE(180)
					te[(int)9] = (yz - wx);
					HX_STACK_LINE(180)
					te[(int)2] = (xz - wy);
					HX_STACK_LINE(180)
					te[(int)6] = (yz + wx);
					HX_STACK_LINE(180)
					te[(int)10] = ((int)1 - ((xx + yy)));
					HX_STACK_LINE(180)
					te[(int)3] = (int)0;
					HX_STACK_LINE(180)
					te[(int)7] = (int)0;
					HX_STACK_LINE(180)
					te[(int)11] = (int)0;
					HX_STACK_LINE(180)
					te[(int)12] = (int)0;
					HX_STACK_LINE(180)
					te[(int)13] = (int)0;
					HX_STACK_LINE(180)
					te[(int)14] = (int)0;
					HX_STACK_LINE(180)
					te[(int)15] = (int)1;
					HX_STACK_LINE(180)
					_this;
				}
				HX_STACK_LINE(180)
				{
					HX_STACK_LINE(180)
					::phoenix::Matrix _this = this->_origin_undo_matrix;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(180)
					{
						HX_STACK_LINE(180)
						Array< Float > e = _this->elements;		HX_STACK_VAR(e,"e");
						HX_STACK_LINE(180)
						e[(int)0] = (int)1;
						HX_STACK_LINE(180)
						e[(int)4] = (int)0;
						HX_STACK_LINE(180)
						e[(int)8] = (int)0;
						HX_STACK_LINE(180)
						e[(int)12] = -(this->origin->x);
						HX_STACK_LINE(180)
						e[(int)1] = (int)0;
						HX_STACK_LINE(180)
						e[(int)5] = (int)1;
						HX_STACK_LINE(180)
						e[(int)9] = (int)0;
						HX_STACK_LINE(180)
						e[(int)13] = -(this->origin->y);
						HX_STACK_LINE(180)
						e[(int)2] = (int)0;
						HX_STACK_LINE(180)
						e[(int)6] = (int)0;
						HX_STACK_LINE(180)
						e[(int)10] = (int)1;
						HX_STACK_LINE(180)
						e[(int)14] = -(this->origin->z);
						HX_STACK_LINE(180)
						e[(int)3] = (int)0;
						HX_STACK_LINE(180)
						e[(int)7] = (int)0;
						HX_STACK_LINE(180)
						e[(int)11] = (int)0;
						HX_STACK_LINE(180)
						e[(int)15] = (int)1;
						HX_STACK_LINE(180)
						_this;
					}
					HX_STACK_LINE(180)
					_this;
				}
				HX_STACK_LINE(180)
				{
					HX_STACK_LINE(180)
					::phoenix::Matrix _this = this->local->matrix;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(180)
					{
						HX_STACK_LINE(180)
						Array< Float > e = _this->elements;		HX_STACK_VAR(e,"e");
						HX_STACK_LINE(180)
						e[(int)0] = (int)1;
						HX_STACK_LINE(180)
						e[(int)4] = (int)0;
						HX_STACK_LINE(180)
						e[(int)8] = (int)0;
						HX_STACK_LINE(180)
						e[(int)12] = this->origin->x;
						HX_STACK_LINE(180)
						e[(int)1] = (int)0;
						HX_STACK_LINE(180)
						e[(int)5] = (int)1;
						HX_STACK_LINE(180)
						e[(int)9] = (int)0;
						HX_STACK_LINE(180)
						e[(int)13] = this->origin->y;
						HX_STACK_LINE(180)
						e[(int)2] = (int)0;
						HX_STACK_LINE(180)
						e[(int)6] = (int)0;
						HX_STACK_LINE(180)
						e[(int)10] = (int)1;
						HX_STACK_LINE(180)
						e[(int)14] = this->origin->z;
						HX_STACK_LINE(180)
						e[(int)3] = (int)0;
						HX_STACK_LINE(180)
						e[(int)7] = (int)0;
						HX_STACK_LINE(180)
						e[(int)11] = (int)0;
						HX_STACK_LINE(180)
						e[(int)15] = (int)1;
						HX_STACK_LINE(180)
						_this;
					}
					HX_STACK_LINE(180)
					_this;
				}
				HX_STACK_LINE(180)
				{
					HX_STACK_LINE(180)
					::phoenix::Matrix _this = this->local->matrix;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(180)
					::phoenix::Vector _v = this->local->scale;		HX_STACK_VAR(_v,"_v");
					HX_STACK_LINE(180)
					Array< Float > te = _this->elements;		HX_STACK_VAR(te,"te");
					HX_STACK_LINE(180)
					Float _x = _v->x;		HX_STACK_VAR(_x,"_x");
					HX_STACK_LINE(180)
					Float _y = _v->y;		HX_STACK_VAR(_y,"_y");
					HX_STACK_LINE(180)
					Float _z = _v->z;		HX_STACK_VAR(_z,"_z");
					HX_STACK_LINE(180)
					hx::MultEq(te[(int)0],_x);
					HX_STACK_LINE(180)
					hx::MultEq(te[(int)4],_y);
					HX_STACK_LINE(180)
					hx::MultEq(te[(int)8],_z);
					HX_STACK_LINE(180)
					hx::MultEq(te[(int)1],_x);
					HX_STACK_LINE(180)
					hx::MultEq(te[(int)5],_y);
					HX_STACK_LINE(180)
					hx::MultEq(te[(int)9],_z);
					HX_STACK_LINE(180)
					hx::MultEq(te[(int)2],_x);
					HX_STACK_LINE(180)
					hx::MultEq(te[(int)6],_y);
					HX_STACK_LINE(180)
					hx::MultEq(te[(int)10],_z);
					HX_STACK_LINE(180)
					hx::MultEq(te[(int)3],_x);
					HX_STACK_LINE(180)
					hx::MultEq(te[(int)7],_y);
					HX_STACK_LINE(180)
					hx::MultEq(te[(int)11],_z);
					HX_STACK_LINE(180)
					_this;
				}
				HX_STACK_LINE(180)
				{
					HX_STACK_LINE(180)
					::phoenix::Matrix _this = this->local->matrix;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(180)
					{
						HX_STACK_LINE(180)
						Array< Float > ae = _this->elements;		HX_STACK_VAR(ae,"ae");
						HX_STACK_LINE(180)
						Array< Float > be = this->_rotation_matrix->elements;		HX_STACK_VAR(be,"be");
						HX_STACK_LINE(180)
						Array< Float > te = _this->elements;		HX_STACK_VAR(te,"te");
						HX_STACK_LINE(180)
						Float a11 = ae->__get((int)0);		HX_STACK_VAR(a11,"a11");
						HX_STACK_LINE(180)
						Float a12 = ae->__get((int)4);		HX_STACK_VAR(a12,"a12");
						HX_STACK_LINE(180)
						Float a13 = ae->__get((int)8);		HX_STACK_VAR(a13,"a13");
						HX_STACK_LINE(180)
						Float a14 = ae->__get((int)12);		HX_STACK_VAR(a14,"a14");
						HX_STACK_LINE(180)
						Float a21 = ae->__get((int)1);		HX_STACK_VAR(a21,"a21");
						HX_STACK_LINE(180)
						Float a22 = ae->__get((int)5);		HX_STACK_VAR(a22,"a22");
						HX_STACK_LINE(180)
						Float a23 = ae->__get((int)9);		HX_STACK_VAR(a23,"a23");
						HX_STACK_LINE(180)
						Float a24 = ae->__get((int)13);		HX_STACK_VAR(a24,"a24");
						HX_STACK_LINE(180)
						Float a31 = ae->__get((int)2);		HX_STACK_VAR(a31,"a31");
						HX_STACK_LINE(180)
						Float a32 = ae->__get((int)6);		HX_STACK_VAR(a32,"a32");
						HX_STACK_LINE(180)
						Float a33 = ae->__get((int)10);		HX_STACK_VAR(a33,"a33");
						HX_STACK_LINE(180)
						Float a34 = ae->__get((int)14);		HX_STACK_VAR(a34,"a34");
						HX_STACK_LINE(180)
						Float a41 = ae->__get((int)3);		HX_STACK_VAR(a41,"a41");
						HX_STACK_LINE(180)
						Float a42 = ae->__get((int)7);		HX_STACK_VAR(a42,"a42");
						HX_STACK_LINE(180)
						Float a43 = ae->__get((int)11);		HX_STACK_VAR(a43,"a43");
						HX_STACK_LINE(180)
						Float a44 = ae->__get((int)15);		HX_STACK_VAR(a44,"a44");
						HX_STACK_LINE(180)
						Float b11 = be->__get((int)0);		HX_STACK_VAR(b11,"b11");
						HX_STACK_LINE(180)
						Float b12 = be->__get((int)4);		HX_STACK_VAR(b12,"b12");
						HX_STACK_LINE(180)
						Float b13 = be->__get((int)8);		HX_STACK_VAR(b13,"b13");
						HX_STACK_LINE(180)
						Float b14 = be->__get((int)12);		HX_STACK_VAR(b14,"b14");
						HX_STACK_LINE(180)
						Float b21 = be->__get((int)1);		HX_STACK_VAR(b21,"b21");
						HX_STACK_LINE(180)
						Float b22 = be->__get((int)5);		HX_STACK_VAR(b22,"b22");
						HX_STACK_LINE(180)
						Float b23 = be->__get((int)9);		HX_STACK_VAR(b23,"b23");
						HX_STACK_LINE(180)
						Float b24 = be->__get((int)13);		HX_STACK_VAR(b24,"b24");
						HX_STACK_LINE(180)
						Float b31 = be->__get((int)2);		HX_STACK_VAR(b31,"b31");
						HX_STACK_LINE(180)
						Float b32 = be->__get((int)6);		HX_STACK_VAR(b32,"b32");
						HX_STACK_LINE(180)
						Float b33 = be->__get((int)10);		HX_STACK_VAR(b33,"b33");
						HX_STACK_LINE(180)
						Float b34 = be->__get((int)14);		HX_STACK_VAR(b34,"b34");
						HX_STACK_LINE(180)
						Float b41 = be->__get((int)3);		HX_STACK_VAR(b41,"b41");
						HX_STACK_LINE(180)
						Float b42 = be->__get((int)7);		HX_STACK_VAR(b42,"b42");
						HX_STACK_LINE(180)
						Float b43 = be->__get((int)11);		HX_STACK_VAR(b43,"b43");
						HX_STACK_LINE(180)
						Float b44 = be->__get((int)15);		HX_STACK_VAR(b44,"b44");
						HX_STACK_LINE(180)
						te[(int)0] = ((((a11 * b11) + (a12 * b21)) + (a13 * b31)) + (a14 * b41));
						HX_STACK_LINE(180)
						te[(int)4] = ((((a11 * b12) + (a12 * b22)) + (a13 * b32)) + (a14 * b42));
						HX_STACK_LINE(180)
						te[(int)8] = ((((a11 * b13) + (a12 * b23)) + (a13 * b33)) + (a14 * b43));
						HX_STACK_LINE(180)
						te[(int)12] = ((((a11 * b14) + (a12 * b24)) + (a13 * b34)) + (a14 * b44));
						HX_STACK_LINE(180)
						te[(int)1] = ((((a21 * b11) + (a22 * b21)) + (a23 * b31)) + (a24 * b41));
						HX_STACK_LINE(180)
						te[(int)5] = ((((a21 * b12) + (a22 * b22)) + (a23 * b32)) + (a24 * b42));
						HX_STACK_LINE(180)
						te[(int)9] = ((((a21 * b13) + (a22 * b23)) + (a23 * b33)) + (a24 * b43));
						HX_STACK_LINE(180)
						te[(int)13] = ((((a21 * b14) + (a22 * b24)) + (a23 * b34)) + (a24 * b44));
						HX_STACK_LINE(180)
						te[(int)2] = ((((a31 * b11) + (a32 * b21)) + (a33 * b31)) + (a34 * b41));
						HX_STACK_LINE(180)
						te[(int)6] = ((((a31 * b12) + (a32 * b22)) + (a33 * b32)) + (a34 * b42));
						HX_STACK_LINE(180)
						te[(int)10] = ((((a31 * b13) + (a32 * b23)) + (a33 * b33)) + (a34 * b43));
						HX_STACK_LINE(180)
						te[(int)14] = ((((a31 * b14) + (a32 * b24)) + (a33 * b34)) + (a34 * b44));
						HX_STACK_LINE(180)
						te[(int)3] = ((((a41 * b11) + (a42 * b21)) + (a43 * b31)) + (a44 * b41));
						HX_STACK_LINE(180)
						te[(int)7] = ((((a41 * b12) + (a42 * b22)) + (a43 * b32)) + (a44 * b42));
						HX_STACK_LINE(180)
						te[(int)11] = ((((a41 * b13) + (a42 * b23)) + (a43 * b33)) + (a44 * b43));
						HX_STACK_LINE(180)
						te[(int)15] = ((((a41 * b14) + (a42 * b24)) + (a43 * b34)) + (a44 * b44));
						HX_STACK_LINE(180)
						_this;
					}
				}
				HX_STACK_LINE(180)
				{
					HX_STACK_LINE(180)
					::phoenix::Matrix _this = this->local->matrix;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(180)
					::phoenix::Vector _v = this->local->pos;		HX_STACK_VAR(_v,"_v");
					HX_STACK_LINE(180)
					Array< Float > te = _this->elements;		HX_STACK_VAR(te,"te");
					HX_STACK_LINE(180)
					te[(int)12] = _v->x;
					HX_STACK_LINE(180)
					te[(int)13] = _v->y;
					HX_STACK_LINE(180)
					te[(int)14] = _v->z;
					HX_STACK_LINE(180)
					_this;
				}
				HX_STACK_LINE(180)
				{
					HX_STACK_LINE(180)
					::phoenix::Matrix _this = this->local->matrix;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(180)
					{
						HX_STACK_LINE(180)
						Array< Float > ae = _this->elements;		HX_STACK_VAR(ae,"ae");
						HX_STACK_LINE(180)
						Array< Float > be = this->_origin_undo_matrix->elements;		HX_STACK_VAR(be,"be");
						HX_STACK_LINE(180)
						Array< Float > te = _this->elements;		HX_STACK_VAR(te,"te");
						HX_STACK_LINE(180)
						Float a11 = ae->__get((int)0);		HX_STACK_VAR(a11,"a11");
						HX_STACK_LINE(180)
						Float a12 = ae->__get((int)4);		HX_STACK_VAR(a12,"a12");
						HX_STACK_LINE(180)
						Float a13 = ae->__get((int)8);		HX_STACK_VAR(a13,"a13");
						HX_STACK_LINE(180)
						Float a14 = ae->__get((int)12);		HX_STACK_VAR(a14,"a14");
						HX_STACK_LINE(180)
						Float a21 = ae->__get((int)1);		HX_STACK_VAR(a21,"a21");
						HX_STACK_LINE(180)
						Float a22 = ae->__get((int)5);		HX_STACK_VAR(a22,"a22");
						HX_STACK_LINE(180)
						Float a23 = ae->__get((int)9);		HX_STACK_VAR(a23,"a23");
						HX_STACK_LINE(180)
						Float a24 = ae->__get((int)13);		HX_STACK_VAR(a24,"a24");
						HX_STACK_LINE(180)
						Float a31 = ae->__get((int)2);		HX_STACK_VAR(a31,"a31");
						HX_STACK_LINE(180)
						Float a32 = ae->__get((int)6);		HX_STACK_VAR(a32,"a32");
						HX_STACK_LINE(180)
						Float a33 = ae->__get((int)10);		HX_STACK_VAR(a33,"a33");
						HX_STACK_LINE(180)
						Float a34 = ae->__get((int)14);		HX_STACK_VAR(a34,"a34");
						HX_STACK_LINE(180)
						Float a41 = ae->__get((int)3);		HX_STACK_VAR(a41,"a41");
						HX_STACK_LINE(180)
						Float a42 = ae->__get((int)7);		HX_STACK_VAR(a42,"a42");
						HX_STACK_LINE(180)
						Float a43 = ae->__get((int)11);		HX_STACK_VAR(a43,"a43");
						HX_STACK_LINE(180)
						Float a44 = ae->__get((int)15);		HX_STACK_VAR(a44,"a44");
						HX_STACK_LINE(180)
						Float b11 = be->__get((int)0);		HX_STACK_VAR(b11,"b11");
						HX_STACK_LINE(180)
						Float b12 = be->__get((int)4);		HX_STACK_VAR(b12,"b12");
						HX_STACK_LINE(180)
						Float b13 = be->__get((int)8);		HX_STACK_VAR(b13,"b13");
						HX_STACK_LINE(180)
						Float b14 = be->__get((int)12);		HX_STACK_VAR(b14,"b14");
						HX_STACK_LINE(180)
						Float b21 = be->__get((int)1);		HX_STACK_VAR(b21,"b21");
						HX_STACK_LINE(180)
						Float b22 = be->__get((int)5);		HX_STACK_VAR(b22,"b22");
						HX_STACK_LINE(180)
						Float b23 = be->__get((int)9);		HX_STACK_VAR(b23,"b23");
						HX_STACK_LINE(180)
						Float b24 = be->__get((int)13);		HX_STACK_VAR(b24,"b24");
						HX_STACK_LINE(180)
						Float b31 = be->__get((int)2);		HX_STACK_VAR(b31,"b31");
						HX_STACK_LINE(180)
						Float b32 = be->__get((int)6);		HX_STACK_VAR(b32,"b32");
						HX_STACK_LINE(180)
						Float b33 = be->__get((int)10);		HX_STACK_VAR(b33,"b33");
						HX_STACK_LINE(180)
						Float b34 = be->__get((int)14);		HX_STACK_VAR(b34,"b34");
						HX_STACK_LINE(180)
						Float b41 = be->__get((int)3);		HX_STACK_VAR(b41,"b41");
						HX_STACK_LINE(180)
						Float b42 = be->__get((int)7);		HX_STACK_VAR(b42,"b42");
						HX_STACK_LINE(180)
						Float b43 = be->__get((int)11);		HX_STACK_VAR(b43,"b43");
						HX_STACK_LINE(180)
						Float b44 = be->__get((int)15);		HX_STACK_VAR(b44,"b44");
						HX_STACK_LINE(180)
						te[(int)0] = ((((a11 * b11) + (a12 * b21)) + (a13 * b31)) + (a14 * b41));
						HX_STACK_LINE(180)
						te[(int)4] = ((((a11 * b12) + (a12 * b22)) + (a13 * b32)) + (a14 * b42));
						HX_STACK_LINE(180)
						te[(int)8] = ((((a11 * b13) + (a12 * b23)) + (a13 * b33)) + (a14 * b43));
						HX_STACK_LINE(180)
						te[(int)12] = ((((a11 * b14) + (a12 * b24)) + (a13 * b34)) + (a14 * b44));
						HX_STACK_LINE(180)
						te[(int)1] = ((((a21 * b11) + (a22 * b21)) + (a23 * b31)) + (a24 * b41));
						HX_STACK_LINE(180)
						te[(int)5] = ((((a21 * b12) + (a22 * b22)) + (a23 * b32)) + (a24 * b42));
						HX_STACK_LINE(180)
						te[(int)9] = ((((a21 * b13) + (a22 * b23)) + (a23 * b33)) + (a24 * b43));
						HX_STACK_LINE(180)
						te[(int)13] = ((((a21 * b14) + (a22 * b24)) + (a23 * b34)) + (a24 * b44));
						HX_STACK_LINE(180)
						te[(int)2] = ((((a31 * b11) + (a32 * b21)) + (a33 * b31)) + (a34 * b41));
						HX_STACK_LINE(180)
						te[(int)6] = ((((a31 * b12) + (a32 * b22)) + (a33 * b32)) + (a34 * b42));
						HX_STACK_LINE(180)
						te[(int)10] = ((((a31 * b13) + (a32 * b23)) + (a33 * b33)) + (a34 * b43));
						HX_STACK_LINE(180)
						te[(int)14] = ((((a31 * b14) + (a32 * b24)) + (a33 * b34)) + (a34 * b44));
						HX_STACK_LINE(180)
						te[(int)3] = ((((a41 * b11) + (a42 * b21)) + (a43 * b31)) + (a44 * b41));
						HX_STACK_LINE(180)
						te[(int)7] = ((((a41 * b12) + (a42 * b22)) + (a43 * b32)) + (a44 * b42));
						HX_STACK_LINE(180)
						te[(int)11] = ((((a41 * b13) + (a42 * b23)) + (a43 * b33)) + (a44 * b43));
						HX_STACK_LINE(180)
						te[(int)15] = ((((a41 * b14) + (a42 * b24)) + (a43 * b34)) + (a44 * b44));
						HX_STACK_LINE(180)
						_this;
					}
				}
				HX_STACK_LINE(180)
				if (((this->parent != null()))){
					HX_STACK_LINE(180)
					::phoenix::Spatial _this = this->get_world();		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(180)
					::phoenix::Matrix _m;		HX_STACK_VAR(_m,"_m");
					HX_STACK_LINE(180)
					{
						HX_STACK_LINE(180)
						::phoenix::Matrix _this1;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(180)
						{
							HX_STACK_LINE(180)
							::phoenix::Spatial _this2 = this->get_world();		HX_STACK_VAR(_this2,"_this2");
							HX_STACK_LINE(180)
							_this1 = _this2->matrix;
						}
						HX_STACK_LINE(180)
						::phoenix::Matrix _a;		HX_STACK_VAR(_a,"_a");
						HX_STACK_LINE(180)
						{
							HX_STACK_LINE(180)
							::phoenix::Spatial _this2 = this->parent->get_world();		HX_STACK_VAR(_this2,"_this2");
							HX_STACK_LINE(180)
							_a = _this2->matrix;
						}
						HX_STACK_LINE(180)
						Array< Float > ae = _a->elements;		HX_STACK_VAR(ae,"ae");
						HX_STACK_LINE(180)
						Array< Float > be = this->local->matrix->elements;		HX_STACK_VAR(be,"be");
						HX_STACK_LINE(180)
						Array< Float > te = _this1->elements;		HX_STACK_VAR(te,"te");
						HX_STACK_LINE(180)
						Float a11 = ae->__get((int)0);		HX_STACK_VAR(a11,"a11");
						HX_STACK_LINE(180)
						Float a12 = ae->__get((int)4);		HX_STACK_VAR(a12,"a12");
						HX_STACK_LINE(180)
						Float a13 = ae->__get((int)8);		HX_STACK_VAR(a13,"a13");
						HX_STACK_LINE(180)
						Float a14 = ae->__get((int)12);		HX_STACK_VAR(a14,"a14");
						HX_STACK_LINE(180)
						Float a21 = ae->__get((int)1);		HX_STACK_VAR(a21,"a21");
						HX_STACK_LINE(180)
						Float a22 = ae->__get((int)5);		HX_STACK_VAR(a22,"a22");
						HX_STACK_LINE(180)
						Float a23 = ae->__get((int)9);		HX_STACK_VAR(a23,"a23");
						HX_STACK_LINE(180)
						Float a24 = ae->__get((int)13);		HX_STACK_VAR(a24,"a24");
						HX_STACK_LINE(180)
						Float a31 = ae->__get((int)2);		HX_STACK_VAR(a31,"a31");
						HX_STACK_LINE(180)
						Float a32 = ae->__get((int)6);		HX_STACK_VAR(a32,"a32");
						HX_STACK_LINE(180)
						Float a33 = ae->__get((int)10);		HX_STACK_VAR(a33,"a33");
						HX_STACK_LINE(180)
						Float a34 = ae->__get((int)14);		HX_STACK_VAR(a34,"a34");
						HX_STACK_LINE(180)
						Float a41 = ae->__get((int)3);		HX_STACK_VAR(a41,"a41");
						HX_STACK_LINE(180)
						Float a42 = ae->__get((int)7);		HX_STACK_VAR(a42,"a42");
						HX_STACK_LINE(180)
						Float a43 = ae->__get((int)11);		HX_STACK_VAR(a43,"a43");
						HX_STACK_LINE(180)
						Float a44 = ae->__get((int)15);		HX_STACK_VAR(a44,"a44");
						HX_STACK_LINE(180)
						Float b11 = be->__get((int)0);		HX_STACK_VAR(b11,"b11");
						HX_STACK_LINE(180)
						Float b12 = be->__get((int)4);		HX_STACK_VAR(b12,"b12");
						HX_STACK_LINE(180)
						Float b13 = be->__get((int)8);		HX_STACK_VAR(b13,"b13");
						HX_STACK_LINE(180)
						Float b14 = be->__get((int)12);		HX_STACK_VAR(b14,"b14");
						HX_STACK_LINE(180)
						Float b21 = be->__get((int)1);		HX_STACK_VAR(b21,"b21");
						HX_STACK_LINE(180)
						Float b22 = be->__get((int)5);		HX_STACK_VAR(b22,"b22");
						HX_STACK_LINE(180)
						Float b23 = be->__get((int)9);		HX_STACK_VAR(b23,"b23");
						HX_STACK_LINE(180)
						Float b24 = be->__get((int)13);		HX_STACK_VAR(b24,"b24");
						HX_STACK_LINE(180)
						Float b31 = be->__get((int)2);		HX_STACK_VAR(b31,"b31");
						HX_STACK_LINE(180)
						Float b32 = be->__get((int)6);		HX_STACK_VAR(b32,"b32");
						HX_STACK_LINE(180)
						Float b33 = be->__get((int)10);		HX_STACK_VAR(b33,"b33");
						HX_STACK_LINE(180)
						Float b34 = be->__get((int)14);		HX_STACK_VAR(b34,"b34");
						HX_STACK_LINE(180)
						Float b41 = be->__get((int)3);		HX_STACK_VAR(b41,"b41");
						HX_STACK_LINE(180)
						Float b42 = be->__get((int)7);		HX_STACK_VAR(b42,"b42");
						HX_STACK_LINE(180)
						Float b43 = be->__get((int)11);		HX_STACK_VAR(b43,"b43");
						HX_STACK_LINE(180)
						Float b44 = be->__get((int)15);		HX_STACK_VAR(b44,"b44");
						HX_STACK_LINE(180)
						te[(int)0] = ((((a11 * b11) + (a12 * b21)) + (a13 * b31)) + (a14 * b41));
						HX_STACK_LINE(180)
						te[(int)4] = ((((a11 * b12) + (a12 * b22)) + (a13 * b32)) + (a14 * b42));
						HX_STACK_LINE(180)
						te[(int)8] = ((((a11 * b13) + (a12 * b23)) + (a13 * b33)) + (a14 * b43));
						HX_STACK_LINE(180)
						te[(int)12] = ((((a11 * b14) + (a12 * b24)) + (a13 * b34)) + (a14 * b44));
						HX_STACK_LINE(180)
						te[(int)1] = ((((a21 * b11) + (a22 * b21)) + (a23 * b31)) + (a24 * b41));
						HX_STACK_LINE(180)
						te[(int)5] = ((((a21 * b12) + (a22 * b22)) + (a23 * b32)) + (a24 * b42));
						HX_STACK_LINE(180)
						te[(int)9] = ((((a21 * b13) + (a22 * b23)) + (a23 * b33)) + (a24 * b43));
						HX_STACK_LINE(180)
						te[(int)13] = ((((a21 * b14) + (a22 * b24)) + (a23 * b34)) + (a24 * b44));
						HX_STACK_LINE(180)
						te[(int)2] = ((((a31 * b11) + (a32 * b21)) + (a33 * b31)) + (a34 * b41));
						HX_STACK_LINE(180)
						te[(int)6] = ((((a31 * b12) + (a32 * b22)) + (a33 * b32)) + (a34 * b42));
						HX_STACK_LINE(180)
						te[(int)10] = ((((a31 * b13) + (a32 * b23)) + (a33 * b33)) + (a34 * b43));
						HX_STACK_LINE(180)
						te[(int)14] = ((((a31 * b14) + (a32 * b24)) + (a33 * b34)) + (a34 * b44));
						HX_STACK_LINE(180)
						te[(int)3] = ((((a41 * b11) + (a42 * b21)) + (a43 * b31)) + (a44 * b41));
						HX_STACK_LINE(180)
						te[(int)7] = ((((a41 * b12) + (a42 * b22)) + (a43 * b32)) + (a44 * b42));
						HX_STACK_LINE(180)
						te[(int)11] = ((((a41 * b13) + (a42 * b23)) + (a43 * b33)) + (a44 * b43));
						HX_STACK_LINE(180)
						te[(int)15] = ((((a41 * b14) + (a42 * b24)) + (a43 * b34)) + (a44 * b44));
						HX_STACK_LINE(180)
						_m = _this1;
					}
					HX_STACK_LINE(180)
					_this->matrix = _m;
					HX_STACK_LINE(180)
					if (((_m != null()))){
						HX_STACK_LINE(180)
						::snow::platform::native::utils::Float32Array _g7;		HX_STACK_VAR(_g7,"_g7");
						HX_STACK_LINE(180)
						{
							HX_STACK_LINE(180)
							::phoenix::Matrix _this1 = _this->matrix;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(180)
							{
								HX_STACK_LINE(180)
								::snow::platform::native::utils::Float32Array _this2 = _this1->_float32array;		HX_STACK_VAR(_this2,"_this2");
								HX_STACK_LINE(180)
								Dynamic bufferOrArray = _this1->elements;		HX_STACK_VAR(bufferOrArray,"bufferOrArray");
								HX_STACK_LINE(180)
								int offset = (int)0;		HX_STACK_VAR(offset,"offset");
								HX_STACK_LINE(180)
								if ((::Std_obj::is(bufferOrArray,hx::ClassOf< Array<int> >()))){
									HX_STACK_LINE(180)
									Array< Float > floats = bufferOrArray;		HX_STACK_VAR(floats,"floats");
									HX_STACK_LINE(180)
									{
										HX_STACK_LINE(180)
										int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
										HX_STACK_LINE(180)
										int _g = floats->length;		HX_STACK_VAR(_g,"_g");
										HX_STACK_LINE(180)
										while((true)){
											HX_STACK_LINE(180)
											if ((!(((_g1 < _g))))){
												HX_STACK_LINE(180)
												break;
											}
											HX_STACK_LINE(180)
											int i = (_g1)++;		HX_STACK_VAR(i,"i");
											HX_STACK_LINE(180)
											::__hxcpp_memory_set_float(_this2->bytes,(((int((i + offset)) << int((int)2))) + _this2->byteOffset),floats->__get(i));
										}
									}
								}
								else{
									HX_STACK_LINE(180)
									if ((::Std_obj::is(bufferOrArray,hx::ClassOf< ::snow::platform::native::utils::Float32Array >()))){
										HX_STACK_LINE(180)
										::snow::platform::native::utils::Float32Array floats = bufferOrArray;		HX_STACK_VAR(floats,"floats");
										HX_STACK_LINE(180)
										{
											HX_STACK_LINE(180)
											int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
											HX_STACK_LINE(180)
											int _g = floats->length;		HX_STACK_VAR(_g,"_g");
											HX_STACK_LINE(180)
											while((true)){
												HX_STACK_LINE(180)
												if ((!(((_g1 < _g))))){
													HX_STACK_LINE(180)
													break;
												}
												HX_STACK_LINE(180)
												int i = (_g1)++;		HX_STACK_VAR(i,"i");
												HX_STACK_LINE(180)
												::__hxcpp_memory_set_float(_this2->bytes,(((int((i + offset)) << int((int)2))) + _this2->byteOffset),floats->__get(i));
											}
										}
									}
									else{
										HX_STACK_LINE(180)
										HX_STACK_DO_THROW(HX_CSTRING("Invalid input buffer"));
									}
								}
							}
							HX_STACK_LINE(180)
							_g7 = ::snow::platform::native::utils::Float32Array_obj::__new(_this1->_float32array,null(),null());
						}
						HX_STACK_LINE(180)
						_this->floats = _g7;
					}
					HX_STACK_LINE(180)
					_this->matrix;
				}
				else{
					HX_STACK_LINE(180)
					::phoenix::Spatial _this = this->get_world();		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(180)
					::phoenix::Matrix _m;		HX_STACK_VAR(_m,"_m");
					HX_STACK_LINE(180)
					{
						HX_STACK_LINE(180)
						Array< Float > te = this->local->matrix->elements;		HX_STACK_VAR(te,"te");
						HX_STACK_LINE(180)
						_m = ::phoenix::Matrix_obj::__new(te->__get((int)0),te->__get((int)4),te->__get((int)8),te->__get((int)12),te->__get((int)1),te->__get((int)5),te->__get((int)9),te->__get((int)13),te->__get((int)2),te->__get((int)6),te->__get((int)10),te->__get((int)14),te->__get((int)3),te->__get((int)7),te->__get((int)11),te->__get((int)15));
					}
					HX_STACK_LINE(180)
					_this->matrix = _m;
					HX_STACK_LINE(180)
					if (((_m != null()))){
						HX_STACK_LINE(180)
						::snow::platform::native::utils::Float32Array _g8;		HX_STACK_VAR(_g8,"_g8");
						HX_STACK_LINE(180)
						{
							HX_STACK_LINE(180)
							::phoenix::Matrix _this1 = _this->matrix;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(180)
							{
								HX_STACK_LINE(180)
								::snow::platform::native::utils::Float32Array _this2 = _this1->_float32array;		HX_STACK_VAR(_this2,"_this2");
								HX_STACK_LINE(180)
								Dynamic bufferOrArray = _this1->elements;		HX_STACK_VAR(bufferOrArray,"bufferOrArray");
								HX_STACK_LINE(180)
								int offset = (int)0;		HX_STACK_VAR(offset,"offset");
								HX_STACK_LINE(180)
								if ((::Std_obj::is(bufferOrArray,hx::ClassOf< Array<int> >()))){
									HX_STACK_LINE(180)
									Array< Float > floats = bufferOrArray;		HX_STACK_VAR(floats,"floats");
									HX_STACK_LINE(180)
									{
										HX_STACK_LINE(180)
										int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
										HX_STACK_LINE(180)
										int _g = floats->length;		HX_STACK_VAR(_g,"_g");
										HX_STACK_LINE(180)
										while((true)){
											HX_STACK_LINE(180)
											if ((!(((_g1 < _g))))){
												HX_STACK_LINE(180)
												break;
											}
											HX_STACK_LINE(180)
											int i = (_g1)++;		HX_STACK_VAR(i,"i");
											HX_STACK_LINE(180)
											::__hxcpp_memory_set_float(_this2->bytes,(((int((i + offset)) << int((int)2))) + _this2->byteOffset),floats->__get(i));
										}
									}
								}
								else{
									HX_STACK_LINE(180)
									if ((::Std_obj::is(bufferOrArray,hx::ClassOf< ::snow::platform::native::utils::Float32Array >()))){
										HX_STACK_LINE(180)
										::snow::platform::native::utils::Float32Array floats = bufferOrArray;		HX_STACK_VAR(floats,"floats");
										HX_STACK_LINE(180)
										{
											HX_STACK_LINE(180)
											int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
											HX_STACK_LINE(180)
											int _g = floats->length;		HX_STACK_VAR(_g,"_g");
											HX_STACK_LINE(180)
											while((true)){
												HX_STACK_LINE(180)
												if ((!(((_g1 < _g))))){
													HX_STACK_LINE(180)
													break;
												}
												HX_STACK_LINE(180)
												int i = (_g1)++;		HX_STACK_VAR(i,"i");
												HX_STACK_LINE(180)
												::__hxcpp_memory_set_float(_this2->bytes,(((int((i + offset)) << int((int)2))) + _this2->byteOffset),floats->__get(i));
											}
										}
									}
									else{
										HX_STACK_LINE(180)
										HX_STACK_DO_THROW(HX_CSTRING("Invalid input buffer"));
									}
								}
							}
							HX_STACK_LINE(180)
							_g8 = ::snow::platform::native::utils::Float32Array_obj::__new(_this1->_float32array,null(),null());
						}
						HX_STACK_LINE(180)
						_this->floats = _g8;
					}
					HX_STACK_LINE(180)
					_this->matrix;
				}
				HX_STACK_LINE(180)
				{
					HX_STACK_LINE(180)
					::phoenix::Spatial _this = this->get_world();		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(180)
					if ((_this->auto_decompose)){
						HX_STACK_LINE(180)
						::phoenix::MatrixTransform _transform;		HX_STACK_VAR(_transform,"_transform");
						HX_STACK_LINE(180)
						{
							HX_STACK_LINE(180)
							::phoenix::Matrix _this1 = _this->matrix;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(180)
							::phoenix::Vector _position = null();		HX_STACK_VAR(_position,"_position");
							HX_STACK_LINE(180)
							::phoenix::Quaternion _quaternion = null();		HX_STACK_VAR(_quaternion,"_quaternion");
							HX_STACK_LINE(180)
							::phoenix::Vector _scale = null();		HX_STACK_VAR(_scale,"_scale");
							HX_STACK_LINE(180)
							Array< Float > te = _this1->elements;		HX_STACK_VAR(te,"te");
							HX_STACK_LINE(180)
							::phoenix::Matrix matrix = ::phoenix::Matrix_obj::__new(null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(matrix,"matrix");
							HX_STACK_LINE(180)
							Float _ax_x = te->__get((int)0);		HX_STACK_VAR(_ax_x,"_ax_x");
							HX_STACK_LINE(180)
							Float _ax_y = te->__get((int)1);		HX_STACK_VAR(_ax_y,"_ax_y");
							HX_STACK_LINE(180)
							Float _ax_z = te->__get((int)2);		HX_STACK_VAR(_ax_z,"_ax_z");
							HX_STACK_LINE(180)
							Float _ay_x = te->__get((int)4);		HX_STACK_VAR(_ay_x,"_ay_x");
							HX_STACK_LINE(180)
							Float _ay_y = te->__get((int)5);		HX_STACK_VAR(_ay_y,"_ay_y");
							HX_STACK_LINE(180)
							Float _ay_z = te->__get((int)6);		HX_STACK_VAR(_ay_z,"_ay_z");
							HX_STACK_LINE(180)
							Float _az_x = te->__get((int)8);		HX_STACK_VAR(_az_x,"_az_x");
							HX_STACK_LINE(180)
							Float _az_y = te->__get((int)9);		HX_STACK_VAR(_az_y,"_az_y");
							HX_STACK_LINE(180)
							Float _az_z = te->__get((int)10);		HX_STACK_VAR(_az_z,"_az_z");
							HX_STACK_LINE(180)
							Float _ax_length = ::Math_obj::sqrt((((_ax_x * _ax_x) + (_ax_y * _ax_y)) + (_ax_z * _ax_z)));		HX_STACK_VAR(_ax_length,"_ax_length");
							HX_STACK_LINE(180)
							Float _ay_length = ::Math_obj::sqrt((((_ay_x * _ay_x) + (_ay_y * _ay_y)) + (_ay_z * _ay_z)));		HX_STACK_VAR(_ay_length,"_ay_length");
							HX_STACK_LINE(180)
							Float _az_length = ::Math_obj::sqrt((((_az_x * _az_x) + (_az_y * _az_y)) + (_az_z * _az_z)));		HX_STACK_VAR(_az_length,"_az_length");
							HX_STACK_LINE(180)
							if (((_quaternion == null()))){
								HX_STACK_LINE(180)
								::phoenix::Quaternion _g9 = ::phoenix::Quaternion_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(_g9,"_g9");
								HX_STACK_LINE(180)
								_quaternion = _g9;
							}
							HX_STACK_LINE(180)
							if (((_position == null()))){
								HX_STACK_LINE(180)
								::phoenix::Vector _g10 = ::phoenix::Vector_obj::__new(te->__get((int)12),te->__get((int)13),te->__get((int)14),null());		HX_STACK_VAR(_g10,"_g10");
								HX_STACK_LINE(180)
								_position = _g10;
							}
							else{
								HX_STACK_LINE(180)
								{
									HX_STACK_LINE(180)
									Float _x = te->__get((int)12);		HX_STACK_VAR(_x,"_x");
									HX_STACK_LINE(180)
									_position->x = _x;
									HX_STACK_LINE(180)
									if ((_position->_construct)){
										HX_STACK_LINE(180)
										_position->x;
									}
									else{
										HX_STACK_LINE(180)
										if (((bool((_position->listen_x != null())) && bool(!(_position->ignore_listeners))))){
											HX_STACK_LINE(180)
											_position->listen_x(_x);
										}
										HX_STACK_LINE(180)
										_position->x;
									}
								}
								HX_STACK_LINE(180)
								{
									HX_STACK_LINE(180)
									Float _y = te->__get((int)13);		HX_STACK_VAR(_y,"_y");
									HX_STACK_LINE(180)
									_position->y = _y;
									HX_STACK_LINE(180)
									if ((_position->_construct)){
										HX_STACK_LINE(180)
										_position->y;
									}
									else{
										HX_STACK_LINE(180)
										if (((bool((_position->listen_y != null())) && bool(!(_position->ignore_listeners))))){
											HX_STACK_LINE(180)
											_position->listen_y(_y);
										}
										HX_STACK_LINE(180)
										_position->y;
									}
								}
								HX_STACK_LINE(180)
								{
									HX_STACK_LINE(180)
									Float _z = te->__get((int)14);		HX_STACK_VAR(_z,"_z");
									HX_STACK_LINE(180)
									_position->z = _z;
									HX_STACK_LINE(180)
									if ((_position->_construct)){
										HX_STACK_LINE(180)
										_position->z;
									}
									else{
										HX_STACK_LINE(180)
										if (((bool((_position->listen_z != null())) && bool(!(_position->ignore_listeners))))){
											HX_STACK_LINE(180)
											_position->listen_z(_z);
										}
										HX_STACK_LINE(180)
										_position->z;
									}
								}
							}
							HX_STACK_LINE(180)
							if (((_scale == null()))){
								HX_STACK_LINE(180)
								::phoenix::Vector _g11 = ::phoenix::Vector_obj::__new(_ax_length,_ay_length,_az_length,null());		HX_STACK_VAR(_g11,"_g11");
								HX_STACK_LINE(180)
								_scale = _g11;
							}
							else{
								HX_STACK_LINE(180)
								{
									HX_STACK_LINE(180)
									_scale->x = _ax_length;
									HX_STACK_LINE(180)
									if ((_scale->_construct)){
										HX_STACK_LINE(180)
										_scale->x;
									}
									else{
										HX_STACK_LINE(180)
										if (((bool((_scale->listen_x != null())) && bool(!(_scale->ignore_listeners))))){
											HX_STACK_LINE(180)
											_scale->listen_x(_ax_length);
										}
										HX_STACK_LINE(180)
										_scale->x;
									}
								}
								HX_STACK_LINE(180)
								{
									HX_STACK_LINE(180)
									_scale->y = _ay_length;
									HX_STACK_LINE(180)
									if ((_scale->_construct)){
										HX_STACK_LINE(180)
										_scale->y;
									}
									else{
										HX_STACK_LINE(180)
										if (((bool((_scale->listen_y != null())) && bool(!(_scale->ignore_listeners))))){
											HX_STACK_LINE(180)
											_scale->listen_y(_ay_length);
										}
										HX_STACK_LINE(180)
										_scale->y;
									}
								}
								HX_STACK_LINE(180)
								{
									HX_STACK_LINE(180)
									_scale->z = _az_length;
									HX_STACK_LINE(180)
									if ((_scale->_construct)){
										HX_STACK_LINE(180)
										_scale->z;
									}
									else{
										HX_STACK_LINE(180)
										if (((bool((_scale->listen_z != null())) && bool(!(_scale->ignore_listeners))))){
											HX_STACK_LINE(180)
											_scale->listen_z(_az_length);
										}
										HX_STACK_LINE(180)
										_scale->z;
									}
								}
							}
							HX_STACK_LINE(180)
							Array< Float > _g12 = _this1->elements->concat(Array_obj< Float >::__new());		HX_STACK_VAR(_g12,"_g12");
							HX_STACK_LINE(180)
							matrix->elements = _g12;
							HX_STACK_LINE(180)
							Array< Float > me = matrix->elements;		HX_STACK_VAR(me,"me");
							HX_STACK_LINE(180)
							hx::DivEq(me[(int)0],_ax_length);
							HX_STACK_LINE(180)
							hx::DivEq(me[(int)1],_ax_length);
							HX_STACK_LINE(180)
							hx::DivEq(me[(int)2],_ax_length);
							HX_STACK_LINE(180)
							hx::DivEq(me[(int)4],_ay_length);
							HX_STACK_LINE(180)
							hx::DivEq(me[(int)5],_ay_length);
							HX_STACK_LINE(180)
							hx::DivEq(me[(int)6],_ay_length);
							HX_STACK_LINE(180)
							hx::DivEq(me[(int)8],_az_length);
							HX_STACK_LINE(180)
							hx::DivEq(me[(int)9],_az_length);
							HX_STACK_LINE(180)
							hx::DivEq(me[(int)10],_az_length);
							HX_STACK_LINE(180)
							_quaternion->setFromRotationMatrix(matrix);
							HX_STACK_LINE(180)
							if (((_this1->_transform == null()))){
								HX_STACK_LINE(180)
								::phoenix::MatrixTransform _g13 = ::phoenix::MatrixTransform_obj::__new(_position,_quaternion,_scale);		HX_STACK_VAR(_g13,"_g13");
								HX_STACK_LINE(180)
								_this1->_transform = _g13;
							}
							else{
								HX_STACK_LINE(180)
								_this1->_transform->pos = _position;
								HX_STACK_LINE(180)
								_this1->_transform->rotation = _quaternion;
								HX_STACK_LINE(180)
								_this1->_transform->scale = _scale;
							}
							HX_STACK_LINE(180)
							_transform = _this1->_transform;
						}
						HX_STACK_LINE(180)
						{
							HX_STACK_LINE(180)
							::phoenix::Vector _p = _transform->pos;		HX_STACK_VAR(_p,"_p");
							HX_STACK_LINE(180)
							_this->pos = _p;
							HX_STACK_LINE(180)
							if (((_p != null()))){
								HX_STACK_LINE(180)
								::phoenix::Vector_obj::Listen(_this->pos,_this->_pos_change_dyn());
								HX_STACK_LINE(180)
								if (((bool((_this->pos_changed != null())) && bool(!(_this->ignore_listeners))))){
									HX_STACK_LINE(180)
									_this->pos_changed(_this->pos);
								}
							}
							HX_STACK_LINE(180)
							_this->pos;
						}
						HX_STACK_LINE(180)
						{
							HX_STACK_LINE(180)
							::phoenix::Quaternion _r = _transform->rotation;		HX_STACK_VAR(_r,"_r");
							HX_STACK_LINE(180)
							_this->rotation = _r;
							HX_STACK_LINE(180)
							if (((_r != null()))){
								HX_STACK_LINE(180)
								{
									HX_STACK_LINE(180)
									::phoenix::Quaternion _q = _this->rotation;		HX_STACK_VAR(_q,"_q");
									HX_STACK_LINE(180)
									Dynamic listener = _this->_rotation_change_dyn();		HX_STACK_VAR(listener,"listener");
									HX_STACK_LINE(180)
									_q->listen_x = listener;
									HX_STACK_LINE(180)
									_q->listen_y = listener;
									HX_STACK_LINE(180)
									_q->listen_z = listener;
									HX_STACK_LINE(180)
									_q->listen_w = listener;
								}
								HX_STACK_LINE(180)
								if (((bool((_this->rotation_changed != null())) && bool(!(_this->ignore_listeners))))){
									HX_STACK_LINE(180)
									_this->rotation_changed(_this->rotation);
								}
							}
							HX_STACK_LINE(180)
							_this->rotation;
						}
						HX_STACK_LINE(180)
						{
							HX_STACK_LINE(180)
							::phoenix::Vector _s = _transform->scale;		HX_STACK_VAR(_s,"_s");
							HX_STACK_LINE(180)
							_this->scale = _s;
							HX_STACK_LINE(180)
							if (((_s != null()))){
								HX_STACK_LINE(180)
								::phoenix::Vector_obj::Listen(_this->scale,_this->_scale_change_dyn());
								HX_STACK_LINE(180)
								if (((bool((_this->scale_changed != null())) && bool(!(_this->ignore_listeners))))){
									HX_STACK_LINE(180)
									_this->scale_changed(_this->scale);
								}
							}
							HX_STACK_LINE(180)
							_this->scale;
						}
					}
					HX_STACK_LINE(180)
					_this;
				}
				HX_STACK_LINE(180)
				{
					HX_STACK_LINE(180)
					this->dirty = false;
					HX_STACK_LINE(180)
					if (((bool((bool((bool(this->dirty) && bool(!(this->_setup)))) && bool((this->_dirty_handlers != null())))) && bool((this->_dirty_handlers->__Field(HX_CSTRING("length"),true) > (int)0))))){
						HX_STACK_LINE(180)
						int _g = (int)0;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(180)
						Dynamic _g1 = this->_dirty_handlers;		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(180)
						while((true)){
							HX_STACK_LINE(180)
							if ((!(((_g < _g1->__Field(HX_CSTRING("length"),true)))))){
								HX_STACK_LINE(180)
								break;
							}
							HX_STACK_LINE(180)
							Dynamic _handler = _g1->__GetItem(_g);		HX_STACK_VAR(_handler,"_handler");
							HX_STACK_LINE(180)
							++(_g);
							HX_STACK_LINE(180)
							if (((_handler != null()))){
								HX_STACK_LINE(180)
								_handler(hx::ObjectPtr<OBJ_>(this)).Cast< Void >();
							}
						}
					}
					HX_STACK_LINE(180)
					this->dirty;
				}
				HX_STACK_LINE(180)
				this->_cleaning = false;
				HX_STACK_LINE(180)
				if (((bool((this->_clean_handlers != null())) && bool((this->_clean_handlers->__Field(HX_CSTRING("length"),true) > (int)0))))){
					HX_STACK_LINE(180)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(180)
					Dynamic _g1 = this->_clean_handlers;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(180)
					while((true)){
						HX_STACK_LINE(180)
						if ((!(((_g < _g1->__Field(HX_CSTRING("length"),true)))))){
							HX_STACK_LINE(180)
							break;
						}
						HX_STACK_LINE(180)
						Dynamic _handler = _g1->__GetItem(_g);		HX_STACK_VAR(_handler,"_handler");
						HX_STACK_LINE(180)
						++(_g);
						HX_STACK_LINE(180)
						if (((_handler != null()))){
							HX_STACK_LINE(180)
							_handler(hx::ObjectPtr<OBJ_>(this)).Cast< Void >();
						}
					}
				}
			}
		}
	}
	HX_STACK_LINE(183)
	return this->world;
}


HX_DEFINE_DYNAMIC_FUNC0(Transform_obj,get_world,return )

Void Transform_obj::clean_check( ){
{
		HX_STACK_FRAME("phoenix.Transform","clean_check",0x615a2011,"phoenix.Transform.clean_check","phoenix/Transform.hx",187,0x44da8ab2)
		HX_STACK_THIS(this)
		HX_STACK_LINE(190)
		if (((this->parent != null()))){
			HX_STACK_LINE(192)
			if ((this->parent->dirty)){
				HX_STACK_LINE(193)
				::phoenix::Transform _this = this->parent;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(193)
				if ((!(_this->dirty))){
					HX_STACK_LINE(193)
					Dynamic();
				}
				else{
					HX_STACK_LINE(193)
					_this->_cleaning = true;
					HX_STACK_LINE(193)
					{
						HX_STACK_LINE(193)
						::phoenix::Matrix _this1 = _this->_pos_matrix;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(193)
						{
							HX_STACK_LINE(193)
							Array< Float > e = _this1->elements;		HX_STACK_VAR(e,"e");
							HX_STACK_LINE(193)
							e[(int)0] = (int)1;
							HX_STACK_LINE(193)
							e[(int)4] = (int)0;
							HX_STACK_LINE(193)
							e[(int)8] = (int)0;
							HX_STACK_LINE(193)
							e[(int)12] = _this->local->pos->x;
							HX_STACK_LINE(193)
							e[(int)1] = (int)0;
							HX_STACK_LINE(193)
							e[(int)5] = (int)1;
							HX_STACK_LINE(193)
							e[(int)9] = (int)0;
							HX_STACK_LINE(193)
							e[(int)13] = _this->local->pos->y;
							HX_STACK_LINE(193)
							e[(int)2] = (int)0;
							HX_STACK_LINE(193)
							e[(int)6] = (int)0;
							HX_STACK_LINE(193)
							e[(int)10] = (int)1;
							HX_STACK_LINE(193)
							e[(int)14] = _this->local->pos->z;
							HX_STACK_LINE(193)
							e[(int)3] = (int)0;
							HX_STACK_LINE(193)
							e[(int)7] = (int)0;
							HX_STACK_LINE(193)
							e[(int)11] = (int)0;
							HX_STACK_LINE(193)
							e[(int)15] = (int)1;
							HX_STACK_LINE(193)
							_this1;
						}
						HX_STACK_LINE(193)
						_this1;
					}
					HX_STACK_LINE(193)
					{
						HX_STACK_LINE(193)
						::phoenix::Matrix _this1 = _this->_rotation_matrix;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(193)
						::phoenix::Quaternion q = _this->local->rotation;		HX_STACK_VAR(q,"q");
						HX_STACK_LINE(193)
						Array< Float > te = _this1->elements;		HX_STACK_VAR(te,"te");
						HX_STACK_LINE(193)
						Float x2 = (q->x + q->x);		HX_STACK_VAR(x2,"x2");
						HX_STACK_LINE(193)
						Float y2 = (q->y + q->y);		HX_STACK_VAR(y2,"y2");
						HX_STACK_LINE(193)
						Float z2 = (q->z + q->z);		HX_STACK_VAR(z2,"z2");
						HX_STACK_LINE(193)
						Float xx = (q->x * x2);		HX_STACK_VAR(xx,"xx");
						HX_STACK_LINE(193)
						Float xy = (q->x * y2);		HX_STACK_VAR(xy,"xy");
						HX_STACK_LINE(193)
						Float xz = (q->x * z2);		HX_STACK_VAR(xz,"xz");
						HX_STACK_LINE(193)
						Float yy = (q->y * y2);		HX_STACK_VAR(yy,"yy");
						HX_STACK_LINE(193)
						Float yz = (q->y * z2);		HX_STACK_VAR(yz,"yz");
						HX_STACK_LINE(193)
						Float zz = (q->z * z2);		HX_STACK_VAR(zz,"zz");
						HX_STACK_LINE(193)
						Float wx = (q->w * x2);		HX_STACK_VAR(wx,"wx");
						HX_STACK_LINE(193)
						Float wy = (q->w * y2);		HX_STACK_VAR(wy,"wy");
						HX_STACK_LINE(193)
						Float wz = (q->w * z2);		HX_STACK_VAR(wz,"wz");
						HX_STACK_LINE(193)
						te[(int)0] = ((int)1 - ((yy + zz)));
						HX_STACK_LINE(193)
						te[(int)4] = (xy - wz);
						HX_STACK_LINE(193)
						te[(int)8] = (xz + wy);
						HX_STACK_LINE(193)
						te[(int)1] = (xy + wz);
						HX_STACK_LINE(193)
						te[(int)5] = ((int)1 - ((xx + zz)));
						HX_STACK_LINE(193)
						te[(int)9] = (yz - wx);
						HX_STACK_LINE(193)
						te[(int)2] = (xz - wy);
						HX_STACK_LINE(193)
						te[(int)6] = (yz + wx);
						HX_STACK_LINE(193)
						te[(int)10] = ((int)1 - ((xx + yy)));
						HX_STACK_LINE(193)
						te[(int)3] = (int)0;
						HX_STACK_LINE(193)
						te[(int)7] = (int)0;
						HX_STACK_LINE(193)
						te[(int)11] = (int)0;
						HX_STACK_LINE(193)
						te[(int)12] = (int)0;
						HX_STACK_LINE(193)
						te[(int)13] = (int)0;
						HX_STACK_LINE(193)
						te[(int)14] = (int)0;
						HX_STACK_LINE(193)
						te[(int)15] = (int)1;
						HX_STACK_LINE(193)
						_this1;
					}
					HX_STACK_LINE(193)
					{
						HX_STACK_LINE(193)
						::phoenix::Matrix _this1 = _this->_origin_undo_matrix;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(193)
						{
							HX_STACK_LINE(193)
							Array< Float > e = _this1->elements;		HX_STACK_VAR(e,"e");
							HX_STACK_LINE(193)
							e[(int)0] = (int)1;
							HX_STACK_LINE(193)
							e[(int)4] = (int)0;
							HX_STACK_LINE(193)
							e[(int)8] = (int)0;
							HX_STACK_LINE(193)
							e[(int)12] = -(_this->origin->x);
							HX_STACK_LINE(193)
							e[(int)1] = (int)0;
							HX_STACK_LINE(193)
							e[(int)5] = (int)1;
							HX_STACK_LINE(193)
							e[(int)9] = (int)0;
							HX_STACK_LINE(193)
							e[(int)13] = -(_this->origin->y);
							HX_STACK_LINE(193)
							e[(int)2] = (int)0;
							HX_STACK_LINE(193)
							e[(int)6] = (int)0;
							HX_STACK_LINE(193)
							e[(int)10] = (int)1;
							HX_STACK_LINE(193)
							e[(int)14] = -(_this->origin->z);
							HX_STACK_LINE(193)
							e[(int)3] = (int)0;
							HX_STACK_LINE(193)
							e[(int)7] = (int)0;
							HX_STACK_LINE(193)
							e[(int)11] = (int)0;
							HX_STACK_LINE(193)
							e[(int)15] = (int)1;
							HX_STACK_LINE(193)
							_this1;
						}
						HX_STACK_LINE(193)
						_this1;
					}
					HX_STACK_LINE(193)
					{
						HX_STACK_LINE(193)
						::phoenix::Matrix _this1 = _this->local->matrix;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(193)
						{
							HX_STACK_LINE(193)
							Array< Float > e = _this1->elements;		HX_STACK_VAR(e,"e");
							HX_STACK_LINE(193)
							e[(int)0] = (int)1;
							HX_STACK_LINE(193)
							e[(int)4] = (int)0;
							HX_STACK_LINE(193)
							e[(int)8] = (int)0;
							HX_STACK_LINE(193)
							e[(int)12] = _this->origin->x;
							HX_STACK_LINE(193)
							e[(int)1] = (int)0;
							HX_STACK_LINE(193)
							e[(int)5] = (int)1;
							HX_STACK_LINE(193)
							e[(int)9] = (int)0;
							HX_STACK_LINE(193)
							e[(int)13] = _this->origin->y;
							HX_STACK_LINE(193)
							e[(int)2] = (int)0;
							HX_STACK_LINE(193)
							e[(int)6] = (int)0;
							HX_STACK_LINE(193)
							e[(int)10] = (int)1;
							HX_STACK_LINE(193)
							e[(int)14] = _this->origin->z;
							HX_STACK_LINE(193)
							e[(int)3] = (int)0;
							HX_STACK_LINE(193)
							e[(int)7] = (int)0;
							HX_STACK_LINE(193)
							e[(int)11] = (int)0;
							HX_STACK_LINE(193)
							e[(int)15] = (int)1;
							HX_STACK_LINE(193)
							_this1;
						}
						HX_STACK_LINE(193)
						_this1;
					}
					HX_STACK_LINE(193)
					{
						HX_STACK_LINE(193)
						::phoenix::Matrix _this1 = _this->local->matrix;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(193)
						::phoenix::Vector _v = _this->local->scale;		HX_STACK_VAR(_v,"_v");
						HX_STACK_LINE(193)
						Array< Float > te = _this1->elements;		HX_STACK_VAR(te,"te");
						HX_STACK_LINE(193)
						Float _x = _v->x;		HX_STACK_VAR(_x,"_x");
						HX_STACK_LINE(193)
						Float _y = _v->y;		HX_STACK_VAR(_y,"_y");
						HX_STACK_LINE(193)
						Float _z = _v->z;		HX_STACK_VAR(_z,"_z");
						HX_STACK_LINE(193)
						hx::MultEq(te[(int)0],_x);
						HX_STACK_LINE(193)
						hx::MultEq(te[(int)4],_y);
						HX_STACK_LINE(193)
						hx::MultEq(te[(int)8],_z);
						HX_STACK_LINE(193)
						hx::MultEq(te[(int)1],_x);
						HX_STACK_LINE(193)
						hx::MultEq(te[(int)5],_y);
						HX_STACK_LINE(193)
						hx::MultEq(te[(int)9],_z);
						HX_STACK_LINE(193)
						hx::MultEq(te[(int)2],_x);
						HX_STACK_LINE(193)
						hx::MultEq(te[(int)6],_y);
						HX_STACK_LINE(193)
						hx::MultEq(te[(int)10],_z);
						HX_STACK_LINE(193)
						hx::MultEq(te[(int)3],_x);
						HX_STACK_LINE(193)
						hx::MultEq(te[(int)7],_y);
						HX_STACK_LINE(193)
						hx::MultEq(te[(int)11],_z);
						HX_STACK_LINE(193)
						_this1;
					}
					HX_STACK_LINE(193)
					{
						HX_STACK_LINE(193)
						::phoenix::Matrix _this1 = _this->local->matrix;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(193)
						{
							HX_STACK_LINE(193)
							Array< Float > ae = _this1->elements;		HX_STACK_VAR(ae,"ae");
							HX_STACK_LINE(193)
							Array< Float > be = _this->_rotation_matrix->elements;		HX_STACK_VAR(be,"be");
							HX_STACK_LINE(193)
							Array< Float > te = _this1->elements;		HX_STACK_VAR(te,"te");
							HX_STACK_LINE(193)
							Float a11 = ae->__get((int)0);		HX_STACK_VAR(a11,"a11");
							HX_STACK_LINE(193)
							Float a12 = ae->__get((int)4);		HX_STACK_VAR(a12,"a12");
							HX_STACK_LINE(193)
							Float a13 = ae->__get((int)8);		HX_STACK_VAR(a13,"a13");
							HX_STACK_LINE(193)
							Float a14 = ae->__get((int)12);		HX_STACK_VAR(a14,"a14");
							HX_STACK_LINE(193)
							Float a21 = ae->__get((int)1);		HX_STACK_VAR(a21,"a21");
							HX_STACK_LINE(193)
							Float a22 = ae->__get((int)5);		HX_STACK_VAR(a22,"a22");
							HX_STACK_LINE(193)
							Float a23 = ae->__get((int)9);		HX_STACK_VAR(a23,"a23");
							HX_STACK_LINE(193)
							Float a24 = ae->__get((int)13);		HX_STACK_VAR(a24,"a24");
							HX_STACK_LINE(193)
							Float a31 = ae->__get((int)2);		HX_STACK_VAR(a31,"a31");
							HX_STACK_LINE(193)
							Float a32 = ae->__get((int)6);		HX_STACK_VAR(a32,"a32");
							HX_STACK_LINE(193)
							Float a33 = ae->__get((int)10);		HX_STACK_VAR(a33,"a33");
							HX_STACK_LINE(193)
							Float a34 = ae->__get((int)14);		HX_STACK_VAR(a34,"a34");
							HX_STACK_LINE(193)
							Float a41 = ae->__get((int)3);		HX_STACK_VAR(a41,"a41");
							HX_STACK_LINE(193)
							Float a42 = ae->__get((int)7);		HX_STACK_VAR(a42,"a42");
							HX_STACK_LINE(193)
							Float a43 = ae->__get((int)11);		HX_STACK_VAR(a43,"a43");
							HX_STACK_LINE(193)
							Float a44 = ae->__get((int)15);		HX_STACK_VAR(a44,"a44");
							HX_STACK_LINE(193)
							Float b11 = be->__get((int)0);		HX_STACK_VAR(b11,"b11");
							HX_STACK_LINE(193)
							Float b12 = be->__get((int)4);		HX_STACK_VAR(b12,"b12");
							HX_STACK_LINE(193)
							Float b13 = be->__get((int)8);		HX_STACK_VAR(b13,"b13");
							HX_STACK_LINE(193)
							Float b14 = be->__get((int)12);		HX_STACK_VAR(b14,"b14");
							HX_STACK_LINE(193)
							Float b21 = be->__get((int)1);		HX_STACK_VAR(b21,"b21");
							HX_STACK_LINE(193)
							Float b22 = be->__get((int)5);		HX_STACK_VAR(b22,"b22");
							HX_STACK_LINE(193)
							Float b23 = be->__get((int)9);		HX_STACK_VAR(b23,"b23");
							HX_STACK_LINE(193)
							Float b24 = be->__get((int)13);		HX_STACK_VAR(b24,"b24");
							HX_STACK_LINE(193)
							Float b31 = be->__get((int)2);		HX_STACK_VAR(b31,"b31");
							HX_STACK_LINE(193)
							Float b32 = be->__get((int)6);		HX_STACK_VAR(b32,"b32");
							HX_STACK_LINE(193)
							Float b33 = be->__get((int)10);		HX_STACK_VAR(b33,"b33");
							HX_STACK_LINE(193)
							Float b34 = be->__get((int)14);		HX_STACK_VAR(b34,"b34");
							HX_STACK_LINE(193)
							Float b41 = be->__get((int)3);		HX_STACK_VAR(b41,"b41");
							HX_STACK_LINE(193)
							Float b42 = be->__get((int)7);		HX_STACK_VAR(b42,"b42");
							HX_STACK_LINE(193)
							Float b43 = be->__get((int)11);		HX_STACK_VAR(b43,"b43");
							HX_STACK_LINE(193)
							Float b44 = be->__get((int)15);		HX_STACK_VAR(b44,"b44");
							HX_STACK_LINE(193)
							te[(int)0] = ((((a11 * b11) + (a12 * b21)) + (a13 * b31)) + (a14 * b41));
							HX_STACK_LINE(193)
							te[(int)4] = ((((a11 * b12) + (a12 * b22)) + (a13 * b32)) + (a14 * b42));
							HX_STACK_LINE(193)
							te[(int)8] = ((((a11 * b13) + (a12 * b23)) + (a13 * b33)) + (a14 * b43));
							HX_STACK_LINE(193)
							te[(int)12] = ((((a11 * b14) + (a12 * b24)) + (a13 * b34)) + (a14 * b44));
							HX_STACK_LINE(193)
							te[(int)1] = ((((a21 * b11) + (a22 * b21)) + (a23 * b31)) + (a24 * b41));
							HX_STACK_LINE(193)
							te[(int)5] = ((((a21 * b12) + (a22 * b22)) + (a23 * b32)) + (a24 * b42));
							HX_STACK_LINE(193)
							te[(int)9] = ((((a21 * b13) + (a22 * b23)) + (a23 * b33)) + (a24 * b43));
							HX_STACK_LINE(193)
							te[(int)13] = ((((a21 * b14) + (a22 * b24)) + (a23 * b34)) + (a24 * b44));
							HX_STACK_LINE(193)
							te[(int)2] = ((((a31 * b11) + (a32 * b21)) + (a33 * b31)) + (a34 * b41));
							HX_STACK_LINE(193)
							te[(int)6] = ((((a31 * b12) + (a32 * b22)) + (a33 * b32)) + (a34 * b42));
							HX_STACK_LINE(193)
							te[(int)10] = ((((a31 * b13) + (a32 * b23)) + (a33 * b33)) + (a34 * b43));
							HX_STACK_LINE(193)
							te[(int)14] = ((((a31 * b14) + (a32 * b24)) + (a33 * b34)) + (a34 * b44));
							HX_STACK_LINE(193)
							te[(int)3] = ((((a41 * b11) + (a42 * b21)) + (a43 * b31)) + (a44 * b41));
							HX_STACK_LINE(193)
							te[(int)7] = ((((a41 * b12) + (a42 * b22)) + (a43 * b32)) + (a44 * b42));
							HX_STACK_LINE(193)
							te[(int)11] = ((((a41 * b13) + (a42 * b23)) + (a43 * b33)) + (a44 * b43));
							HX_STACK_LINE(193)
							te[(int)15] = ((((a41 * b14) + (a42 * b24)) + (a43 * b34)) + (a44 * b44));
							HX_STACK_LINE(193)
							_this1;
						}
					}
					HX_STACK_LINE(193)
					{
						HX_STACK_LINE(193)
						::phoenix::Matrix _this1 = _this->local->matrix;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(193)
						::phoenix::Vector _v = _this->local->pos;		HX_STACK_VAR(_v,"_v");
						HX_STACK_LINE(193)
						Array< Float > te = _this1->elements;		HX_STACK_VAR(te,"te");
						HX_STACK_LINE(193)
						te[(int)12] = _v->x;
						HX_STACK_LINE(193)
						te[(int)13] = _v->y;
						HX_STACK_LINE(193)
						te[(int)14] = _v->z;
						HX_STACK_LINE(193)
						_this1;
					}
					HX_STACK_LINE(193)
					{
						HX_STACK_LINE(193)
						::phoenix::Matrix _this1 = _this->local->matrix;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(193)
						{
							HX_STACK_LINE(193)
							Array< Float > ae = _this1->elements;		HX_STACK_VAR(ae,"ae");
							HX_STACK_LINE(193)
							Array< Float > be = _this->_origin_undo_matrix->elements;		HX_STACK_VAR(be,"be");
							HX_STACK_LINE(193)
							Array< Float > te = _this1->elements;		HX_STACK_VAR(te,"te");
							HX_STACK_LINE(193)
							Float a11 = ae->__get((int)0);		HX_STACK_VAR(a11,"a11");
							HX_STACK_LINE(193)
							Float a12 = ae->__get((int)4);		HX_STACK_VAR(a12,"a12");
							HX_STACK_LINE(193)
							Float a13 = ae->__get((int)8);		HX_STACK_VAR(a13,"a13");
							HX_STACK_LINE(193)
							Float a14 = ae->__get((int)12);		HX_STACK_VAR(a14,"a14");
							HX_STACK_LINE(193)
							Float a21 = ae->__get((int)1);		HX_STACK_VAR(a21,"a21");
							HX_STACK_LINE(193)
							Float a22 = ae->__get((int)5);		HX_STACK_VAR(a22,"a22");
							HX_STACK_LINE(193)
							Float a23 = ae->__get((int)9);		HX_STACK_VAR(a23,"a23");
							HX_STACK_LINE(193)
							Float a24 = ae->__get((int)13);		HX_STACK_VAR(a24,"a24");
							HX_STACK_LINE(193)
							Float a31 = ae->__get((int)2);		HX_STACK_VAR(a31,"a31");
							HX_STACK_LINE(193)
							Float a32 = ae->__get((int)6);		HX_STACK_VAR(a32,"a32");
							HX_STACK_LINE(193)
							Float a33 = ae->__get((int)10);		HX_STACK_VAR(a33,"a33");
							HX_STACK_LINE(193)
							Float a34 = ae->__get((int)14);		HX_STACK_VAR(a34,"a34");
							HX_STACK_LINE(193)
							Float a41 = ae->__get((int)3);		HX_STACK_VAR(a41,"a41");
							HX_STACK_LINE(193)
							Float a42 = ae->__get((int)7);		HX_STACK_VAR(a42,"a42");
							HX_STACK_LINE(193)
							Float a43 = ae->__get((int)11);		HX_STACK_VAR(a43,"a43");
							HX_STACK_LINE(193)
							Float a44 = ae->__get((int)15);		HX_STACK_VAR(a44,"a44");
							HX_STACK_LINE(193)
							Float b11 = be->__get((int)0);		HX_STACK_VAR(b11,"b11");
							HX_STACK_LINE(193)
							Float b12 = be->__get((int)4);		HX_STACK_VAR(b12,"b12");
							HX_STACK_LINE(193)
							Float b13 = be->__get((int)8);		HX_STACK_VAR(b13,"b13");
							HX_STACK_LINE(193)
							Float b14 = be->__get((int)12);		HX_STACK_VAR(b14,"b14");
							HX_STACK_LINE(193)
							Float b21 = be->__get((int)1);		HX_STACK_VAR(b21,"b21");
							HX_STACK_LINE(193)
							Float b22 = be->__get((int)5);		HX_STACK_VAR(b22,"b22");
							HX_STACK_LINE(193)
							Float b23 = be->__get((int)9);		HX_STACK_VAR(b23,"b23");
							HX_STACK_LINE(193)
							Float b24 = be->__get((int)13);		HX_STACK_VAR(b24,"b24");
							HX_STACK_LINE(193)
							Float b31 = be->__get((int)2);		HX_STACK_VAR(b31,"b31");
							HX_STACK_LINE(193)
							Float b32 = be->__get((int)6);		HX_STACK_VAR(b32,"b32");
							HX_STACK_LINE(193)
							Float b33 = be->__get((int)10);		HX_STACK_VAR(b33,"b33");
							HX_STACK_LINE(193)
							Float b34 = be->__get((int)14);		HX_STACK_VAR(b34,"b34");
							HX_STACK_LINE(193)
							Float b41 = be->__get((int)3);		HX_STACK_VAR(b41,"b41");
							HX_STACK_LINE(193)
							Float b42 = be->__get((int)7);		HX_STACK_VAR(b42,"b42");
							HX_STACK_LINE(193)
							Float b43 = be->__get((int)11);		HX_STACK_VAR(b43,"b43");
							HX_STACK_LINE(193)
							Float b44 = be->__get((int)15);		HX_STACK_VAR(b44,"b44");
							HX_STACK_LINE(193)
							te[(int)0] = ((((a11 * b11) + (a12 * b21)) + (a13 * b31)) + (a14 * b41));
							HX_STACK_LINE(193)
							te[(int)4] = ((((a11 * b12) + (a12 * b22)) + (a13 * b32)) + (a14 * b42));
							HX_STACK_LINE(193)
							te[(int)8] = ((((a11 * b13) + (a12 * b23)) + (a13 * b33)) + (a14 * b43));
							HX_STACK_LINE(193)
							te[(int)12] = ((((a11 * b14) + (a12 * b24)) + (a13 * b34)) + (a14 * b44));
							HX_STACK_LINE(193)
							te[(int)1] = ((((a21 * b11) + (a22 * b21)) + (a23 * b31)) + (a24 * b41));
							HX_STACK_LINE(193)
							te[(int)5] = ((((a21 * b12) + (a22 * b22)) + (a23 * b32)) + (a24 * b42));
							HX_STACK_LINE(193)
							te[(int)9] = ((((a21 * b13) + (a22 * b23)) + (a23 * b33)) + (a24 * b43));
							HX_STACK_LINE(193)
							te[(int)13] = ((((a21 * b14) + (a22 * b24)) + (a23 * b34)) + (a24 * b44));
							HX_STACK_LINE(193)
							te[(int)2] = ((((a31 * b11) + (a32 * b21)) + (a33 * b31)) + (a34 * b41));
							HX_STACK_LINE(193)
							te[(int)6] = ((((a31 * b12) + (a32 * b22)) + (a33 * b32)) + (a34 * b42));
							HX_STACK_LINE(193)
							te[(int)10] = ((((a31 * b13) + (a32 * b23)) + (a33 * b33)) + (a34 * b43));
							HX_STACK_LINE(193)
							te[(int)14] = ((((a31 * b14) + (a32 * b24)) + (a33 * b34)) + (a34 * b44));
							HX_STACK_LINE(193)
							te[(int)3] = ((((a41 * b11) + (a42 * b21)) + (a43 * b31)) + (a44 * b41));
							HX_STACK_LINE(193)
							te[(int)7] = ((((a41 * b12) + (a42 * b22)) + (a43 * b32)) + (a44 * b42));
							HX_STACK_LINE(193)
							te[(int)11] = ((((a41 * b13) + (a42 * b23)) + (a43 * b33)) + (a44 * b43));
							HX_STACK_LINE(193)
							te[(int)15] = ((((a41 * b14) + (a42 * b24)) + (a43 * b34)) + (a44 * b44));
							HX_STACK_LINE(193)
							_this1;
						}
					}
					HX_STACK_LINE(193)
					if (((_this->parent != null()))){
						HX_STACK_LINE(193)
						::phoenix::Spatial _this1 = _this->get_world();		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(193)
						::phoenix::Matrix _m;		HX_STACK_VAR(_m,"_m");
						HX_STACK_LINE(193)
						{
							HX_STACK_LINE(193)
							::phoenix::Matrix _this2;		HX_STACK_VAR(_this2,"_this2");
							HX_STACK_LINE(193)
							{
								HX_STACK_LINE(193)
								::phoenix::Spatial _this3 = _this->get_world();		HX_STACK_VAR(_this3,"_this3");
								HX_STACK_LINE(193)
								_this2 = _this3->matrix;
							}
							HX_STACK_LINE(193)
							::phoenix::Matrix _a;		HX_STACK_VAR(_a,"_a");
							HX_STACK_LINE(193)
							{
								HX_STACK_LINE(193)
								::phoenix::Spatial _this3 = _this->parent->get_world();		HX_STACK_VAR(_this3,"_this3");
								HX_STACK_LINE(193)
								_a = _this3->matrix;
							}
							HX_STACK_LINE(193)
							Array< Float > ae = _a->elements;		HX_STACK_VAR(ae,"ae");
							HX_STACK_LINE(193)
							Array< Float > be = _this->local->matrix->elements;		HX_STACK_VAR(be,"be");
							HX_STACK_LINE(193)
							Array< Float > te = _this2->elements;		HX_STACK_VAR(te,"te");
							HX_STACK_LINE(193)
							Float a11 = ae->__get((int)0);		HX_STACK_VAR(a11,"a11");
							HX_STACK_LINE(193)
							Float a12 = ae->__get((int)4);		HX_STACK_VAR(a12,"a12");
							HX_STACK_LINE(193)
							Float a13 = ae->__get((int)8);		HX_STACK_VAR(a13,"a13");
							HX_STACK_LINE(193)
							Float a14 = ae->__get((int)12);		HX_STACK_VAR(a14,"a14");
							HX_STACK_LINE(193)
							Float a21 = ae->__get((int)1);		HX_STACK_VAR(a21,"a21");
							HX_STACK_LINE(193)
							Float a22 = ae->__get((int)5);		HX_STACK_VAR(a22,"a22");
							HX_STACK_LINE(193)
							Float a23 = ae->__get((int)9);		HX_STACK_VAR(a23,"a23");
							HX_STACK_LINE(193)
							Float a24 = ae->__get((int)13);		HX_STACK_VAR(a24,"a24");
							HX_STACK_LINE(193)
							Float a31 = ae->__get((int)2);		HX_STACK_VAR(a31,"a31");
							HX_STACK_LINE(193)
							Float a32 = ae->__get((int)6);		HX_STACK_VAR(a32,"a32");
							HX_STACK_LINE(193)
							Float a33 = ae->__get((int)10);		HX_STACK_VAR(a33,"a33");
							HX_STACK_LINE(193)
							Float a34 = ae->__get((int)14);		HX_STACK_VAR(a34,"a34");
							HX_STACK_LINE(193)
							Float a41 = ae->__get((int)3);		HX_STACK_VAR(a41,"a41");
							HX_STACK_LINE(193)
							Float a42 = ae->__get((int)7);		HX_STACK_VAR(a42,"a42");
							HX_STACK_LINE(193)
							Float a43 = ae->__get((int)11);		HX_STACK_VAR(a43,"a43");
							HX_STACK_LINE(193)
							Float a44 = ae->__get((int)15);		HX_STACK_VAR(a44,"a44");
							HX_STACK_LINE(193)
							Float b11 = be->__get((int)0);		HX_STACK_VAR(b11,"b11");
							HX_STACK_LINE(193)
							Float b12 = be->__get((int)4);		HX_STACK_VAR(b12,"b12");
							HX_STACK_LINE(193)
							Float b13 = be->__get((int)8);		HX_STACK_VAR(b13,"b13");
							HX_STACK_LINE(193)
							Float b14 = be->__get((int)12);		HX_STACK_VAR(b14,"b14");
							HX_STACK_LINE(193)
							Float b21 = be->__get((int)1);		HX_STACK_VAR(b21,"b21");
							HX_STACK_LINE(193)
							Float b22 = be->__get((int)5);		HX_STACK_VAR(b22,"b22");
							HX_STACK_LINE(193)
							Float b23 = be->__get((int)9);		HX_STACK_VAR(b23,"b23");
							HX_STACK_LINE(193)
							Float b24 = be->__get((int)13);		HX_STACK_VAR(b24,"b24");
							HX_STACK_LINE(193)
							Float b31 = be->__get((int)2);		HX_STACK_VAR(b31,"b31");
							HX_STACK_LINE(193)
							Float b32 = be->__get((int)6);		HX_STACK_VAR(b32,"b32");
							HX_STACK_LINE(193)
							Float b33 = be->__get((int)10);		HX_STACK_VAR(b33,"b33");
							HX_STACK_LINE(193)
							Float b34 = be->__get((int)14);		HX_STACK_VAR(b34,"b34");
							HX_STACK_LINE(193)
							Float b41 = be->__get((int)3);		HX_STACK_VAR(b41,"b41");
							HX_STACK_LINE(193)
							Float b42 = be->__get((int)7);		HX_STACK_VAR(b42,"b42");
							HX_STACK_LINE(193)
							Float b43 = be->__get((int)11);		HX_STACK_VAR(b43,"b43");
							HX_STACK_LINE(193)
							Float b44 = be->__get((int)15);		HX_STACK_VAR(b44,"b44");
							HX_STACK_LINE(193)
							te[(int)0] = ((((a11 * b11) + (a12 * b21)) + (a13 * b31)) + (a14 * b41));
							HX_STACK_LINE(193)
							te[(int)4] = ((((a11 * b12) + (a12 * b22)) + (a13 * b32)) + (a14 * b42));
							HX_STACK_LINE(193)
							te[(int)8] = ((((a11 * b13) + (a12 * b23)) + (a13 * b33)) + (a14 * b43));
							HX_STACK_LINE(193)
							te[(int)12] = ((((a11 * b14) + (a12 * b24)) + (a13 * b34)) + (a14 * b44));
							HX_STACK_LINE(193)
							te[(int)1] = ((((a21 * b11) + (a22 * b21)) + (a23 * b31)) + (a24 * b41));
							HX_STACK_LINE(193)
							te[(int)5] = ((((a21 * b12) + (a22 * b22)) + (a23 * b32)) + (a24 * b42));
							HX_STACK_LINE(193)
							te[(int)9] = ((((a21 * b13) + (a22 * b23)) + (a23 * b33)) + (a24 * b43));
							HX_STACK_LINE(193)
							te[(int)13] = ((((a21 * b14) + (a22 * b24)) + (a23 * b34)) + (a24 * b44));
							HX_STACK_LINE(193)
							te[(int)2] = ((((a31 * b11) + (a32 * b21)) + (a33 * b31)) + (a34 * b41));
							HX_STACK_LINE(193)
							te[(int)6] = ((((a31 * b12) + (a32 * b22)) + (a33 * b32)) + (a34 * b42));
							HX_STACK_LINE(193)
							te[(int)10] = ((((a31 * b13) + (a32 * b23)) + (a33 * b33)) + (a34 * b43));
							HX_STACK_LINE(193)
							te[(int)14] = ((((a31 * b14) + (a32 * b24)) + (a33 * b34)) + (a34 * b44));
							HX_STACK_LINE(193)
							te[(int)3] = ((((a41 * b11) + (a42 * b21)) + (a43 * b31)) + (a44 * b41));
							HX_STACK_LINE(193)
							te[(int)7] = ((((a41 * b12) + (a42 * b22)) + (a43 * b32)) + (a44 * b42));
							HX_STACK_LINE(193)
							te[(int)11] = ((((a41 * b13) + (a42 * b23)) + (a43 * b33)) + (a44 * b43));
							HX_STACK_LINE(193)
							te[(int)15] = ((((a41 * b14) + (a42 * b24)) + (a43 * b34)) + (a44 * b44));
							HX_STACK_LINE(193)
							_m = _this2;
						}
						HX_STACK_LINE(193)
						_this1->matrix = _m;
						HX_STACK_LINE(193)
						if (((_m != null()))){
							HX_STACK_LINE(193)
							::snow::platform::native::utils::Float32Array _g;		HX_STACK_VAR(_g,"_g");
							HX_STACK_LINE(193)
							{
								HX_STACK_LINE(193)
								::phoenix::Matrix _this2 = _this1->matrix;		HX_STACK_VAR(_this2,"_this2");
								HX_STACK_LINE(193)
								{
									HX_STACK_LINE(193)
									::snow::platform::native::utils::Float32Array _this3 = _this2->_float32array;		HX_STACK_VAR(_this3,"_this3");
									HX_STACK_LINE(193)
									Dynamic bufferOrArray = _this2->elements;		HX_STACK_VAR(bufferOrArray,"bufferOrArray");
									HX_STACK_LINE(193)
									int offset = (int)0;		HX_STACK_VAR(offset,"offset");
									HX_STACK_LINE(193)
									if ((::Std_obj::is(bufferOrArray,hx::ClassOf< Array<int> >()))){
										HX_STACK_LINE(193)
										Array< Float > floats = bufferOrArray;		HX_STACK_VAR(floats,"floats");
										HX_STACK_LINE(193)
										{
											HX_STACK_LINE(193)
											int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
											HX_STACK_LINE(193)
											int _g2 = floats->length;		HX_STACK_VAR(_g2,"_g2");
											HX_STACK_LINE(193)
											while((true)){
												HX_STACK_LINE(193)
												if ((!(((_g1 < _g2))))){
													HX_STACK_LINE(193)
													break;
												}
												HX_STACK_LINE(193)
												int i = (_g1)++;		HX_STACK_VAR(i,"i");
												HX_STACK_LINE(193)
												::__hxcpp_memory_set_float(_this3->bytes,(((int((i + offset)) << int((int)2))) + _this3->byteOffset),floats->__get(i));
											}
										}
									}
									else{
										HX_STACK_LINE(193)
										if ((::Std_obj::is(bufferOrArray,hx::ClassOf< ::snow::platform::native::utils::Float32Array >()))){
											HX_STACK_LINE(193)
											::snow::platform::native::utils::Float32Array floats = bufferOrArray;		HX_STACK_VAR(floats,"floats");
											HX_STACK_LINE(193)
											{
												HX_STACK_LINE(193)
												int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
												HX_STACK_LINE(193)
												int _g2 = floats->length;		HX_STACK_VAR(_g2,"_g2");
												HX_STACK_LINE(193)
												while((true)){
													HX_STACK_LINE(193)
													if ((!(((_g1 < _g2))))){
														HX_STACK_LINE(193)
														break;
													}
													HX_STACK_LINE(193)
													int i = (_g1)++;		HX_STACK_VAR(i,"i");
													HX_STACK_LINE(193)
													::__hxcpp_memory_set_float(_this3->bytes,(((int((i + offset)) << int((int)2))) + _this3->byteOffset),floats->__get(i));
												}
											}
										}
										else{
											HX_STACK_LINE(193)
											HX_STACK_DO_THROW(HX_CSTRING("Invalid input buffer"));
										}
									}
								}
								HX_STACK_LINE(193)
								_g = ::snow::platform::native::utils::Float32Array_obj::__new(_this2->_float32array,null(),null());
							}
							HX_STACK_LINE(193)
							_this1->floats = _g;
						}
						HX_STACK_LINE(193)
						_this1->matrix;
					}
					else{
						HX_STACK_LINE(193)
						::phoenix::Spatial _this1 = _this->get_world();		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(193)
						::phoenix::Matrix _m;		HX_STACK_VAR(_m,"_m");
						HX_STACK_LINE(193)
						{
							HX_STACK_LINE(193)
							Array< Float > te = _this->local->matrix->elements;		HX_STACK_VAR(te,"te");
							HX_STACK_LINE(193)
							_m = ::phoenix::Matrix_obj::__new(te->__get((int)0),te->__get((int)4),te->__get((int)8),te->__get((int)12),te->__get((int)1),te->__get((int)5),te->__get((int)9),te->__get((int)13),te->__get((int)2),te->__get((int)6),te->__get((int)10),te->__get((int)14),te->__get((int)3),te->__get((int)7),te->__get((int)11),te->__get((int)15));
						}
						HX_STACK_LINE(193)
						_this1->matrix = _m;
						HX_STACK_LINE(193)
						if (((_m != null()))){
							HX_STACK_LINE(193)
							::snow::platform::native::utils::Float32Array _g1;		HX_STACK_VAR(_g1,"_g1");
							HX_STACK_LINE(193)
							{
								HX_STACK_LINE(193)
								::phoenix::Matrix _this2 = _this1->matrix;		HX_STACK_VAR(_this2,"_this2");
								HX_STACK_LINE(193)
								{
									HX_STACK_LINE(193)
									::snow::platform::native::utils::Float32Array _this3 = _this2->_float32array;		HX_STACK_VAR(_this3,"_this3");
									HX_STACK_LINE(193)
									Dynamic bufferOrArray = _this2->elements;		HX_STACK_VAR(bufferOrArray,"bufferOrArray");
									HX_STACK_LINE(193)
									int offset = (int)0;		HX_STACK_VAR(offset,"offset");
									HX_STACK_LINE(193)
									if ((::Std_obj::is(bufferOrArray,hx::ClassOf< Array<int> >()))){
										HX_STACK_LINE(193)
										Array< Float > floats = bufferOrArray;		HX_STACK_VAR(floats,"floats");
										HX_STACK_LINE(193)
										{
											HX_STACK_LINE(193)
											int _g11 = (int)0;		HX_STACK_VAR(_g11,"_g11");
											HX_STACK_LINE(193)
											int _g = floats->length;		HX_STACK_VAR(_g,"_g");
											HX_STACK_LINE(193)
											while((true)){
												HX_STACK_LINE(193)
												if ((!(((_g11 < _g))))){
													HX_STACK_LINE(193)
													break;
												}
												HX_STACK_LINE(193)
												int i = (_g11)++;		HX_STACK_VAR(i,"i");
												HX_STACK_LINE(193)
												::__hxcpp_memory_set_float(_this3->bytes,(((int((i + offset)) << int((int)2))) + _this3->byteOffset),floats->__get(i));
											}
										}
									}
									else{
										HX_STACK_LINE(193)
										if ((::Std_obj::is(bufferOrArray,hx::ClassOf< ::snow::platform::native::utils::Float32Array >()))){
											HX_STACK_LINE(193)
											::snow::platform::native::utils::Float32Array floats = bufferOrArray;		HX_STACK_VAR(floats,"floats");
											HX_STACK_LINE(193)
											{
												HX_STACK_LINE(193)
												int _g11 = (int)0;		HX_STACK_VAR(_g11,"_g11");
												HX_STACK_LINE(193)
												int _g = floats->length;		HX_STACK_VAR(_g,"_g");
												HX_STACK_LINE(193)
												while((true)){
													HX_STACK_LINE(193)
													if ((!(((_g11 < _g))))){
														HX_STACK_LINE(193)
														break;
													}
													HX_STACK_LINE(193)
													int i = (_g11)++;		HX_STACK_VAR(i,"i");
													HX_STACK_LINE(193)
													::__hxcpp_memory_set_float(_this3->bytes,(((int((i + offset)) << int((int)2))) + _this3->byteOffset),floats->__get(i));
												}
											}
										}
										else{
											HX_STACK_LINE(193)
											HX_STACK_DO_THROW(HX_CSTRING("Invalid input buffer"));
										}
									}
								}
								HX_STACK_LINE(193)
								_g1 = ::snow::platform::native::utils::Float32Array_obj::__new(_this2->_float32array,null(),null());
							}
							HX_STACK_LINE(193)
							_this1->floats = _g1;
						}
						HX_STACK_LINE(193)
						_this1->matrix;
					}
					HX_STACK_LINE(193)
					{
						HX_STACK_LINE(193)
						::phoenix::Spatial _this1 = _this->get_world();		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(193)
						if ((_this1->auto_decompose)){
							HX_STACK_LINE(193)
							::phoenix::MatrixTransform _transform;		HX_STACK_VAR(_transform,"_transform");
							HX_STACK_LINE(193)
							{
								HX_STACK_LINE(193)
								::phoenix::Matrix _this2 = _this1->matrix;		HX_STACK_VAR(_this2,"_this2");
								HX_STACK_LINE(193)
								::phoenix::Vector _position = null();		HX_STACK_VAR(_position,"_position");
								HX_STACK_LINE(193)
								::phoenix::Quaternion _quaternion = null();		HX_STACK_VAR(_quaternion,"_quaternion");
								HX_STACK_LINE(193)
								::phoenix::Vector _scale = null();		HX_STACK_VAR(_scale,"_scale");
								HX_STACK_LINE(193)
								Array< Float > te = _this2->elements;		HX_STACK_VAR(te,"te");
								HX_STACK_LINE(193)
								::phoenix::Matrix matrix = ::phoenix::Matrix_obj::__new(null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(matrix,"matrix");
								HX_STACK_LINE(193)
								Float _ax_x = te->__get((int)0);		HX_STACK_VAR(_ax_x,"_ax_x");
								HX_STACK_LINE(193)
								Float _ax_y = te->__get((int)1);		HX_STACK_VAR(_ax_y,"_ax_y");
								HX_STACK_LINE(193)
								Float _ax_z = te->__get((int)2);		HX_STACK_VAR(_ax_z,"_ax_z");
								HX_STACK_LINE(193)
								Float _ay_x = te->__get((int)4);		HX_STACK_VAR(_ay_x,"_ay_x");
								HX_STACK_LINE(193)
								Float _ay_y = te->__get((int)5);		HX_STACK_VAR(_ay_y,"_ay_y");
								HX_STACK_LINE(193)
								Float _ay_z = te->__get((int)6);		HX_STACK_VAR(_ay_z,"_ay_z");
								HX_STACK_LINE(193)
								Float _az_x = te->__get((int)8);		HX_STACK_VAR(_az_x,"_az_x");
								HX_STACK_LINE(193)
								Float _az_y = te->__get((int)9);		HX_STACK_VAR(_az_y,"_az_y");
								HX_STACK_LINE(193)
								Float _az_z = te->__get((int)10);		HX_STACK_VAR(_az_z,"_az_z");
								HX_STACK_LINE(193)
								Float _ax_length = ::Math_obj::sqrt((((_ax_x * _ax_x) + (_ax_y * _ax_y)) + (_ax_z * _ax_z)));		HX_STACK_VAR(_ax_length,"_ax_length");
								HX_STACK_LINE(193)
								Float _ay_length = ::Math_obj::sqrt((((_ay_x * _ay_x) + (_ay_y * _ay_y)) + (_ay_z * _ay_z)));		HX_STACK_VAR(_ay_length,"_ay_length");
								HX_STACK_LINE(193)
								Float _az_length = ::Math_obj::sqrt((((_az_x * _az_x) + (_az_y * _az_y)) + (_az_z * _az_z)));		HX_STACK_VAR(_az_length,"_az_length");
								HX_STACK_LINE(193)
								if (((_quaternion == null()))){
									HX_STACK_LINE(193)
									::phoenix::Quaternion _g2 = ::phoenix::Quaternion_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(_g2,"_g2");
									HX_STACK_LINE(193)
									_quaternion = _g2;
								}
								HX_STACK_LINE(193)
								if (((_position == null()))){
									HX_STACK_LINE(193)
									::phoenix::Vector _g3 = ::phoenix::Vector_obj::__new(te->__get((int)12),te->__get((int)13),te->__get((int)14),null());		HX_STACK_VAR(_g3,"_g3");
									HX_STACK_LINE(193)
									_position = _g3;
								}
								else{
									HX_STACK_LINE(193)
									{
										HX_STACK_LINE(193)
										Float _x = te->__get((int)12);		HX_STACK_VAR(_x,"_x");
										HX_STACK_LINE(193)
										_position->x = _x;
										HX_STACK_LINE(193)
										if ((_position->_construct)){
											HX_STACK_LINE(193)
											_position->x;
										}
										else{
											HX_STACK_LINE(193)
											if (((bool((_position->listen_x != null())) && bool(!(_position->ignore_listeners))))){
												HX_STACK_LINE(193)
												_position->listen_x(_x);
											}
											HX_STACK_LINE(193)
											_position->x;
										}
									}
									HX_STACK_LINE(193)
									{
										HX_STACK_LINE(193)
										Float _y = te->__get((int)13);		HX_STACK_VAR(_y,"_y");
										HX_STACK_LINE(193)
										_position->y = _y;
										HX_STACK_LINE(193)
										if ((_position->_construct)){
											HX_STACK_LINE(193)
											_position->y;
										}
										else{
											HX_STACK_LINE(193)
											if (((bool((_position->listen_y != null())) && bool(!(_position->ignore_listeners))))){
												HX_STACK_LINE(193)
												_position->listen_y(_y);
											}
											HX_STACK_LINE(193)
											_position->y;
										}
									}
									HX_STACK_LINE(193)
									{
										HX_STACK_LINE(193)
										Float _z = te->__get((int)14);		HX_STACK_VAR(_z,"_z");
										HX_STACK_LINE(193)
										_position->z = _z;
										HX_STACK_LINE(193)
										if ((_position->_construct)){
											HX_STACK_LINE(193)
											_position->z;
										}
										else{
											HX_STACK_LINE(193)
											if (((bool((_position->listen_z != null())) && bool(!(_position->ignore_listeners))))){
												HX_STACK_LINE(193)
												_position->listen_z(_z);
											}
											HX_STACK_LINE(193)
											_position->z;
										}
									}
								}
								HX_STACK_LINE(193)
								if (((_scale == null()))){
									HX_STACK_LINE(193)
									::phoenix::Vector _g4 = ::phoenix::Vector_obj::__new(_ax_length,_ay_length,_az_length,null());		HX_STACK_VAR(_g4,"_g4");
									HX_STACK_LINE(193)
									_scale = _g4;
								}
								else{
									HX_STACK_LINE(193)
									{
										HX_STACK_LINE(193)
										_scale->x = _ax_length;
										HX_STACK_LINE(193)
										if ((_scale->_construct)){
											HX_STACK_LINE(193)
											_scale->x;
										}
										else{
											HX_STACK_LINE(193)
											if (((bool((_scale->listen_x != null())) && bool(!(_scale->ignore_listeners))))){
												HX_STACK_LINE(193)
												_scale->listen_x(_ax_length);
											}
											HX_STACK_LINE(193)
											_scale->x;
										}
									}
									HX_STACK_LINE(193)
									{
										HX_STACK_LINE(193)
										_scale->y = _ay_length;
										HX_STACK_LINE(193)
										if ((_scale->_construct)){
											HX_STACK_LINE(193)
											_scale->y;
										}
										else{
											HX_STACK_LINE(193)
											if (((bool((_scale->listen_y != null())) && bool(!(_scale->ignore_listeners))))){
												HX_STACK_LINE(193)
												_scale->listen_y(_ay_length);
											}
											HX_STACK_LINE(193)
											_scale->y;
										}
									}
									HX_STACK_LINE(193)
									{
										HX_STACK_LINE(193)
										_scale->z = _az_length;
										HX_STACK_LINE(193)
										if ((_scale->_construct)){
											HX_STACK_LINE(193)
											_scale->z;
										}
										else{
											HX_STACK_LINE(193)
											if (((bool((_scale->listen_z != null())) && bool(!(_scale->ignore_listeners))))){
												HX_STACK_LINE(193)
												_scale->listen_z(_az_length);
											}
											HX_STACK_LINE(193)
											_scale->z;
										}
									}
								}
								HX_STACK_LINE(193)
								Array< Float > _g5 = _this2->elements->concat(Array_obj< Float >::__new());		HX_STACK_VAR(_g5,"_g5");
								HX_STACK_LINE(193)
								matrix->elements = _g5;
								HX_STACK_LINE(193)
								Array< Float > me = matrix->elements;		HX_STACK_VAR(me,"me");
								HX_STACK_LINE(193)
								hx::DivEq(me[(int)0],_ax_length);
								HX_STACK_LINE(193)
								hx::DivEq(me[(int)1],_ax_length);
								HX_STACK_LINE(193)
								hx::DivEq(me[(int)2],_ax_length);
								HX_STACK_LINE(193)
								hx::DivEq(me[(int)4],_ay_length);
								HX_STACK_LINE(193)
								hx::DivEq(me[(int)5],_ay_length);
								HX_STACK_LINE(193)
								hx::DivEq(me[(int)6],_ay_length);
								HX_STACK_LINE(193)
								hx::DivEq(me[(int)8],_az_length);
								HX_STACK_LINE(193)
								hx::DivEq(me[(int)9],_az_length);
								HX_STACK_LINE(193)
								hx::DivEq(me[(int)10],_az_length);
								HX_STACK_LINE(193)
								_quaternion->setFromRotationMatrix(matrix);
								HX_STACK_LINE(193)
								if (((_this2->_transform == null()))){
									HX_STACK_LINE(193)
									::phoenix::MatrixTransform _g6 = ::phoenix::MatrixTransform_obj::__new(_position,_quaternion,_scale);		HX_STACK_VAR(_g6,"_g6");
									HX_STACK_LINE(193)
									_this2->_transform = _g6;
								}
								else{
									HX_STACK_LINE(193)
									_this2->_transform->pos = _position;
									HX_STACK_LINE(193)
									_this2->_transform->rotation = _quaternion;
									HX_STACK_LINE(193)
									_this2->_transform->scale = _scale;
								}
								HX_STACK_LINE(193)
								_transform = _this2->_transform;
							}
							HX_STACK_LINE(193)
							{
								HX_STACK_LINE(193)
								::phoenix::Vector _p = _transform->pos;		HX_STACK_VAR(_p,"_p");
								HX_STACK_LINE(193)
								_this1->pos = _p;
								HX_STACK_LINE(193)
								if (((_p != null()))){
									HX_STACK_LINE(193)
									::phoenix::Vector_obj::Listen(_this1->pos,_this1->_pos_change_dyn());
									HX_STACK_LINE(193)
									if (((bool((_this1->pos_changed != null())) && bool(!(_this1->ignore_listeners))))){
										HX_STACK_LINE(193)
										_this1->pos_changed(_this1->pos);
									}
								}
								HX_STACK_LINE(193)
								_this1->pos;
							}
							HX_STACK_LINE(193)
							{
								HX_STACK_LINE(193)
								::phoenix::Quaternion _r = _transform->rotation;		HX_STACK_VAR(_r,"_r");
								HX_STACK_LINE(193)
								_this1->rotation = _r;
								HX_STACK_LINE(193)
								if (((_r != null()))){
									HX_STACK_LINE(193)
									{
										HX_STACK_LINE(193)
										::phoenix::Quaternion _q = _this1->rotation;		HX_STACK_VAR(_q,"_q");
										HX_STACK_LINE(193)
										Dynamic listener = _this1->_rotation_change_dyn();		HX_STACK_VAR(listener,"listener");
										HX_STACK_LINE(193)
										_q->listen_x = listener;
										HX_STACK_LINE(193)
										_q->listen_y = listener;
										HX_STACK_LINE(193)
										_q->listen_z = listener;
										HX_STACK_LINE(193)
										_q->listen_w = listener;
									}
									HX_STACK_LINE(193)
									if (((bool((_this1->rotation_changed != null())) && bool(!(_this1->ignore_listeners))))){
										HX_STACK_LINE(193)
										_this1->rotation_changed(_this1->rotation);
									}
								}
								HX_STACK_LINE(193)
								_this1->rotation;
							}
							HX_STACK_LINE(193)
							{
								HX_STACK_LINE(193)
								::phoenix::Vector _s = _transform->scale;		HX_STACK_VAR(_s,"_s");
								HX_STACK_LINE(193)
								_this1->scale = _s;
								HX_STACK_LINE(193)
								if (((_s != null()))){
									HX_STACK_LINE(193)
									::phoenix::Vector_obj::Listen(_this1->scale,_this1->_scale_change_dyn());
									HX_STACK_LINE(193)
									if (((bool((_this1->scale_changed != null())) && bool(!(_this1->ignore_listeners))))){
										HX_STACK_LINE(193)
										_this1->scale_changed(_this1->scale);
									}
								}
								HX_STACK_LINE(193)
								_this1->scale;
							}
						}
						HX_STACK_LINE(193)
						_this1;
					}
					HX_STACK_LINE(193)
					{
						HX_STACK_LINE(193)
						_this->dirty = false;
						HX_STACK_LINE(193)
						if (((bool((bool((bool(_this->dirty) && bool(!(_this->_setup)))) && bool((_this->_dirty_handlers != null())))) && bool((_this->_dirty_handlers->__Field(HX_CSTRING("length"),true) > (int)0))))){
							HX_STACK_LINE(193)
							int _g = (int)0;		HX_STACK_VAR(_g,"_g");
							HX_STACK_LINE(193)
							Dynamic _g1 = _this->_dirty_handlers;		HX_STACK_VAR(_g1,"_g1");
							HX_STACK_LINE(193)
							while((true)){
								HX_STACK_LINE(193)
								if ((!(((_g < _g1->__Field(HX_CSTRING("length"),true)))))){
									HX_STACK_LINE(193)
									break;
								}
								HX_STACK_LINE(193)
								Dynamic _handler = _g1->__GetItem(_g);		HX_STACK_VAR(_handler,"_handler");
								HX_STACK_LINE(193)
								++(_g);
								HX_STACK_LINE(193)
								if (((_handler != null()))){
									HX_STACK_LINE(193)
									_handler(_this).Cast< Void >();
								}
							}
						}
						HX_STACK_LINE(193)
						_this->dirty;
					}
					HX_STACK_LINE(193)
					_this->_cleaning = false;
					HX_STACK_LINE(193)
					if (((bool((_this->_clean_handlers != null())) && bool((_this->_clean_handlers->__Field(HX_CSTRING("length"),true) > (int)0))))){
						HX_STACK_LINE(193)
						int _g = (int)0;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(193)
						Dynamic _g1 = _this->_clean_handlers;		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(193)
						while((true)){
							HX_STACK_LINE(193)
							if ((!(((_g < _g1->__Field(HX_CSTRING("length"),true)))))){
								HX_STACK_LINE(193)
								break;
							}
							HX_STACK_LINE(193)
							Dynamic _handler = _g1->__GetItem(_g);		HX_STACK_VAR(_handler,"_handler");
							HX_STACK_LINE(193)
							++(_g);
							HX_STACK_LINE(193)
							if (((_handler != null()))){
								HX_STACK_LINE(193)
								_handler(_this).Cast< Void >();
							}
						}
					}
				}
			}
		}
		HX_STACK_LINE(198)
		if (((bool(this->dirty) && bool(!(this->_cleaning))))){
			HX_STACK_LINE(199)
			if ((!(this->dirty))){
				HX_STACK_LINE(199)
				Dynamic();
			}
			else{
				HX_STACK_LINE(199)
				this->_cleaning = true;
				HX_STACK_LINE(199)
				{
					HX_STACK_LINE(199)
					::phoenix::Matrix _this = this->_pos_matrix;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(199)
					{
						HX_STACK_LINE(199)
						Array< Float > e = _this->elements;		HX_STACK_VAR(e,"e");
						HX_STACK_LINE(199)
						e[(int)0] = (int)1;
						HX_STACK_LINE(199)
						e[(int)4] = (int)0;
						HX_STACK_LINE(199)
						e[(int)8] = (int)0;
						HX_STACK_LINE(199)
						e[(int)12] = this->local->pos->x;
						HX_STACK_LINE(199)
						e[(int)1] = (int)0;
						HX_STACK_LINE(199)
						e[(int)5] = (int)1;
						HX_STACK_LINE(199)
						e[(int)9] = (int)0;
						HX_STACK_LINE(199)
						e[(int)13] = this->local->pos->y;
						HX_STACK_LINE(199)
						e[(int)2] = (int)0;
						HX_STACK_LINE(199)
						e[(int)6] = (int)0;
						HX_STACK_LINE(199)
						e[(int)10] = (int)1;
						HX_STACK_LINE(199)
						e[(int)14] = this->local->pos->z;
						HX_STACK_LINE(199)
						e[(int)3] = (int)0;
						HX_STACK_LINE(199)
						e[(int)7] = (int)0;
						HX_STACK_LINE(199)
						e[(int)11] = (int)0;
						HX_STACK_LINE(199)
						e[(int)15] = (int)1;
						HX_STACK_LINE(199)
						_this;
					}
					HX_STACK_LINE(199)
					_this;
				}
				HX_STACK_LINE(199)
				{
					HX_STACK_LINE(199)
					::phoenix::Matrix _this = this->_rotation_matrix;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(199)
					::phoenix::Quaternion q = this->local->rotation;		HX_STACK_VAR(q,"q");
					HX_STACK_LINE(199)
					Array< Float > te = _this->elements;		HX_STACK_VAR(te,"te");
					HX_STACK_LINE(199)
					Float x2 = (q->x + q->x);		HX_STACK_VAR(x2,"x2");
					HX_STACK_LINE(199)
					Float y2 = (q->y + q->y);		HX_STACK_VAR(y2,"y2");
					HX_STACK_LINE(199)
					Float z2 = (q->z + q->z);		HX_STACK_VAR(z2,"z2");
					HX_STACK_LINE(199)
					Float xx = (q->x * x2);		HX_STACK_VAR(xx,"xx");
					HX_STACK_LINE(199)
					Float xy = (q->x * y2);		HX_STACK_VAR(xy,"xy");
					HX_STACK_LINE(199)
					Float xz = (q->x * z2);		HX_STACK_VAR(xz,"xz");
					HX_STACK_LINE(199)
					Float yy = (q->y * y2);		HX_STACK_VAR(yy,"yy");
					HX_STACK_LINE(199)
					Float yz = (q->y * z2);		HX_STACK_VAR(yz,"yz");
					HX_STACK_LINE(199)
					Float zz = (q->z * z2);		HX_STACK_VAR(zz,"zz");
					HX_STACK_LINE(199)
					Float wx = (q->w * x2);		HX_STACK_VAR(wx,"wx");
					HX_STACK_LINE(199)
					Float wy = (q->w * y2);		HX_STACK_VAR(wy,"wy");
					HX_STACK_LINE(199)
					Float wz = (q->w * z2);		HX_STACK_VAR(wz,"wz");
					HX_STACK_LINE(199)
					te[(int)0] = ((int)1 - ((yy + zz)));
					HX_STACK_LINE(199)
					te[(int)4] = (xy - wz);
					HX_STACK_LINE(199)
					te[(int)8] = (xz + wy);
					HX_STACK_LINE(199)
					te[(int)1] = (xy + wz);
					HX_STACK_LINE(199)
					te[(int)5] = ((int)1 - ((xx + zz)));
					HX_STACK_LINE(199)
					te[(int)9] = (yz - wx);
					HX_STACK_LINE(199)
					te[(int)2] = (xz - wy);
					HX_STACK_LINE(199)
					te[(int)6] = (yz + wx);
					HX_STACK_LINE(199)
					te[(int)10] = ((int)1 - ((xx + yy)));
					HX_STACK_LINE(199)
					te[(int)3] = (int)0;
					HX_STACK_LINE(199)
					te[(int)7] = (int)0;
					HX_STACK_LINE(199)
					te[(int)11] = (int)0;
					HX_STACK_LINE(199)
					te[(int)12] = (int)0;
					HX_STACK_LINE(199)
					te[(int)13] = (int)0;
					HX_STACK_LINE(199)
					te[(int)14] = (int)0;
					HX_STACK_LINE(199)
					te[(int)15] = (int)1;
					HX_STACK_LINE(199)
					_this;
				}
				HX_STACK_LINE(199)
				{
					HX_STACK_LINE(199)
					::phoenix::Matrix _this = this->_origin_undo_matrix;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(199)
					{
						HX_STACK_LINE(199)
						Array< Float > e = _this->elements;		HX_STACK_VAR(e,"e");
						HX_STACK_LINE(199)
						e[(int)0] = (int)1;
						HX_STACK_LINE(199)
						e[(int)4] = (int)0;
						HX_STACK_LINE(199)
						e[(int)8] = (int)0;
						HX_STACK_LINE(199)
						e[(int)12] = -(this->origin->x);
						HX_STACK_LINE(199)
						e[(int)1] = (int)0;
						HX_STACK_LINE(199)
						e[(int)5] = (int)1;
						HX_STACK_LINE(199)
						e[(int)9] = (int)0;
						HX_STACK_LINE(199)
						e[(int)13] = -(this->origin->y);
						HX_STACK_LINE(199)
						e[(int)2] = (int)0;
						HX_STACK_LINE(199)
						e[(int)6] = (int)0;
						HX_STACK_LINE(199)
						e[(int)10] = (int)1;
						HX_STACK_LINE(199)
						e[(int)14] = -(this->origin->z);
						HX_STACK_LINE(199)
						e[(int)3] = (int)0;
						HX_STACK_LINE(199)
						e[(int)7] = (int)0;
						HX_STACK_LINE(199)
						e[(int)11] = (int)0;
						HX_STACK_LINE(199)
						e[(int)15] = (int)1;
						HX_STACK_LINE(199)
						_this;
					}
					HX_STACK_LINE(199)
					_this;
				}
				HX_STACK_LINE(199)
				{
					HX_STACK_LINE(199)
					::phoenix::Matrix _this = this->local->matrix;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(199)
					{
						HX_STACK_LINE(199)
						Array< Float > e = _this->elements;		HX_STACK_VAR(e,"e");
						HX_STACK_LINE(199)
						e[(int)0] = (int)1;
						HX_STACK_LINE(199)
						e[(int)4] = (int)0;
						HX_STACK_LINE(199)
						e[(int)8] = (int)0;
						HX_STACK_LINE(199)
						e[(int)12] = this->origin->x;
						HX_STACK_LINE(199)
						e[(int)1] = (int)0;
						HX_STACK_LINE(199)
						e[(int)5] = (int)1;
						HX_STACK_LINE(199)
						e[(int)9] = (int)0;
						HX_STACK_LINE(199)
						e[(int)13] = this->origin->y;
						HX_STACK_LINE(199)
						e[(int)2] = (int)0;
						HX_STACK_LINE(199)
						e[(int)6] = (int)0;
						HX_STACK_LINE(199)
						e[(int)10] = (int)1;
						HX_STACK_LINE(199)
						e[(int)14] = this->origin->z;
						HX_STACK_LINE(199)
						e[(int)3] = (int)0;
						HX_STACK_LINE(199)
						e[(int)7] = (int)0;
						HX_STACK_LINE(199)
						e[(int)11] = (int)0;
						HX_STACK_LINE(199)
						e[(int)15] = (int)1;
						HX_STACK_LINE(199)
						_this;
					}
					HX_STACK_LINE(199)
					_this;
				}
				HX_STACK_LINE(199)
				{
					HX_STACK_LINE(199)
					::phoenix::Matrix _this = this->local->matrix;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(199)
					::phoenix::Vector _v = this->local->scale;		HX_STACK_VAR(_v,"_v");
					HX_STACK_LINE(199)
					Array< Float > te = _this->elements;		HX_STACK_VAR(te,"te");
					HX_STACK_LINE(199)
					Float _x = _v->x;		HX_STACK_VAR(_x,"_x");
					HX_STACK_LINE(199)
					Float _y = _v->y;		HX_STACK_VAR(_y,"_y");
					HX_STACK_LINE(199)
					Float _z = _v->z;		HX_STACK_VAR(_z,"_z");
					HX_STACK_LINE(199)
					hx::MultEq(te[(int)0],_x);
					HX_STACK_LINE(199)
					hx::MultEq(te[(int)4],_y);
					HX_STACK_LINE(199)
					hx::MultEq(te[(int)8],_z);
					HX_STACK_LINE(199)
					hx::MultEq(te[(int)1],_x);
					HX_STACK_LINE(199)
					hx::MultEq(te[(int)5],_y);
					HX_STACK_LINE(199)
					hx::MultEq(te[(int)9],_z);
					HX_STACK_LINE(199)
					hx::MultEq(te[(int)2],_x);
					HX_STACK_LINE(199)
					hx::MultEq(te[(int)6],_y);
					HX_STACK_LINE(199)
					hx::MultEq(te[(int)10],_z);
					HX_STACK_LINE(199)
					hx::MultEq(te[(int)3],_x);
					HX_STACK_LINE(199)
					hx::MultEq(te[(int)7],_y);
					HX_STACK_LINE(199)
					hx::MultEq(te[(int)11],_z);
					HX_STACK_LINE(199)
					_this;
				}
				HX_STACK_LINE(199)
				{
					HX_STACK_LINE(199)
					::phoenix::Matrix _this = this->local->matrix;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(199)
					{
						HX_STACK_LINE(199)
						Array< Float > ae = _this->elements;		HX_STACK_VAR(ae,"ae");
						HX_STACK_LINE(199)
						Array< Float > be = this->_rotation_matrix->elements;		HX_STACK_VAR(be,"be");
						HX_STACK_LINE(199)
						Array< Float > te = _this->elements;		HX_STACK_VAR(te,"te");
						HX_STACK_LINE(199)
						Float a11 = ae->__get((int)0);		HX_STACK_VAR(a11,"a11");
						HX_STACK_LINE(199)
						Float a12 = ae->__get((int)4);		HX_STACK_VAR(a12,"a12");
						HX_STACK_LINE(199)
						Float a13 = ae->__get((int)8);		HX_STACK_VAR(a13,"a13");
						HX_STACK_LINE(199)
						Float a14 = ae->__get((int)12);		HX_STACK_VAR(a14,"a14");
						HX_STACK_LINE(199)
						Float a21 = ae->__get((int)1);		HX_STACK_VAR(a21,"a21");
						HX_STACK_LINE(199)
						Float a22 = ae->__get((int)5);		HX_STACK_VAR(a22,"a22");
						HX_STACK_LINE(199)
						Float a23 = ae->__get((int)9);		HX_STACK_VAR(a23,"a23");
						HX_STACK_LINE(199)
						Float a24 = ae->__get((int)13);		HX_STACK_VAR(a24,"a24");
						HX_STACK_LINE(199)
						Float a31 = ae->__get((int)2);		HX_STACK_VAR(a31,"a31");
						HX_STACK_LINE(199)
						Float a32 = ae->__get((int)6);		HX_STACK_VAR(a32,"a32");
						HX_STACK_LINE(199)
						Float a33 = ae->__get((int)10);		HX_STACK_VAR(a33,"a33");
						HX_STACK_LINE(199)
						Float a34 = ae->__get((int)14);		HX_STACK_VAR(a34,"a34");
						HX_STACK_LINE(199)
						Float a41 = ae->__get((int)3);		HX_STACK_VAR(a41,"a41");
						HX_STACK_LINE(199)
						Float a42 = ae->__get((int)7);		HX_STACK_VAR(a42,"a42");
						HX_STACK_LINE(199)
						Float a43 = ae->__get((int)11);		HX_STACK_VAR(a43,"a43");
						HX_STACK_LINE(199)
						Float a44 = ae->__get((int)15);		HX_STACK_VAR(a44,"a44");
						HX_STACK_LINE(199)
						Float b11 = be->__get((int)0);		HX_STACK_VAR(b11,"b11");
						HX_STACK_LINE(199)
						Float b12 = be->__get((int)4);		HX_STACK_VAR(b12,"b12");
						HX_STACK_LINE(199)
						Float b13 = be->__get((int)8);		HX_STACK_VAR(b13,"b13");
						HX_STACK_LINE(199)
						Float b14 = be->__get((int)12);		HX_STACK_VAR(b14,"b14");
						HX_STACK_LINE(199)
						Float b21 = be->__get((int)1);		HX_STACK_VAR(b21,"b21");
						HX_STACK_LINE(199)
						Float b22 = be->__get((int)5);		HX_STACK_VAR(b22,"b22");
						HX_STACK_LINE(199)
						Float b23 = be->__get((int)9);		HX_STACK_VAR(b23,"b23");
						HX_STACK_LINE(199)
						Float b24 = be->__get((int)13);		HX_STACK_VAR(b24,"b24");
						HX_STACK_LINE(199)
						Float b31 = be->__get((int)2);		HX_STACK_VAR(b31,"b31");
						HX_STACK_LINE(199)
						Float b32 = be->__get((int)6);		HX_STACK_VAR(b32,"b32");
						HX_STACK_LINE(199)
						Float b33 = be->__get((int)10);		HX_STACK_VAR(b33,"b33");
						HX_STACK_LINE(199)
						Float b34 = be->__get((int)14);		HX_STACK_VAR(b34,"b34");
						HX_STACK_LINE(199)
						Float b41 = be->__get((int)3);		HX_STACK_VAR(b41,"b41");
						HX_STACK_LINE(199)
						Float b42 = be->__get((int)7);		HX_STACK_VAR(b42,"b42");
						HX_STACK_LINE(199)
						Float b43 = be->__get((int)11);		HX_STACK_VAR(b43,"b43");
						HX_STACK_LINE(199)
						Float b44 = be->__get((int)15);		HX_STACK_VAR(b44,"b44");
						HX_STACK_LINE(199)
						te[(int)0] = ((((a11 * b11) + (a12 * b21)) + (a13 * b31)) + (a14 * b41));
						HX_STACK_LINE(199)
						te[(int)4] = ((((a11 * b12) + (a12 * b22)) + (a13 * b32)) + (a14 * b42));
						HX_STACK_LINE(199)
						te[(int)8] = ((((a11 * b13) + (a12 * b23)) + (a13 * b33)) + (a14 * b43));
						HX_STACK_LINE(199)
						te[(int)12] = ((((a11 * b14) + (a12 * b24)) + (a13 * b34)) + (a14 * b44));
						HX_STACK_LINE(199)
						te[(int)1] = ((((a21 * b11) + (a22 * b21)) + (a23 * b31)) + (a24 * b41));
						HX_STACK_LINE(199)
						te[(int)5] = ((((a21 * b12) + (a22 * b22)) + (a23 * b32)) + (a24 * b42));
						HX_STACK_LINE(199)
						te[(int)9] = ((((a21 * b13) + (a22 * b23)) + (a23 * b33)) + (a24 * b43));
						HX_STACK_LINE(199)
						te[(int)13] = ((((a21 * b14) + (a22 * b24)) + (a23 * b34)) + (a24 * b44));
						HX_STACK_LINE(199)
						te[(int)2] = ((((a31 * b11) + (a32 * b21)) + (a33 * b31)) + (a34 * b41));
						HX_STACK_LINE(199)
						te[(int)6] = ((((a31 * b12) + (a32 * b22)) + (a33 * b32)) + (a34 * b42));
						HX_STACK_LINE(199)
						te[(int)10] = ((((a31 * b13) + (a32 * b23)) + (a33 * b33)) + (a34 * b43));
						HX_STACK_LINE(199)
						te[(int)14] = ((((a31 * b14) + (a32 * b24)) + (a33 * b34)) + (a34 * b44));
						HX_STACK_LINE(199)
						te[(int)3] = ((((a41 * b11) + (a42 * b21)) + (a43 * b31)) + (a44 * b41));
						HX_STACK_LINE(199)
						te[(int)7] = ((((a41 * b12) + (a42 * b22)) + (a43 * b32)) + (a44 * b42));
						HX_STACK_LINE(199)
						te[(int)11] = ((((a41 * b13) + (a42 * b23)) + (a43 * b33)) + (a44 * b43));
						HX_STACK_LINE(199)
						te[(int)15] = ((((a41 * b14) + (a42 * b24)) + (a43 * b34)) + (a44 * b44));
						HX_STACK_LINE(199)
						_this;
					}
				}
				HX_STACK_LINE(199)
				{
					HX_STACK_LINE(199)
					::phoenix::Matrix _this = this->local->matrix;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(199)
					::phoenix::Vector _v = this->local->pos;		HX_STACK_VAR(_v,"_v");
					HX_STACK_LINE(199)
					Array< Float > te = _this->elements;		HX_STACK_VAR(te,"te");
					HX_STACK_LINE(199)
					te[(int)12] = _v->x;
					HX_STACK_LINE(199)
					te[(int)13] = _v->y;
					HX_STACK_LINE(199)
					te[(int)14] = _v->z;
					HX_STACK_LINE(199)
					_this;
				}
				HX_STACK_LINE(199)
				{
					HX_STACK_LINE(199)
					::phoenix::Matrix _this = this->local->matrix;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(199)
					{
						HX_STACK_LINE(199)
						Array< Float > ae = _this->elements;		HX_STACK_VAR(ae,"ae");
						HX_STACK_LINE(199)
						Array< Float > be = this->_origin_undo_matrix->elements;		HX_STACK_VAR(be,"be");
						HX_STACK_LINE(199)
						Array< Float > te = _this->elements;		HX_STACK_VAR(te,"te");
						HX_STACK_LINE(199)
						Float a11 = ae->__get((int)0);		HX_STACK_VAR(a11,"a11");
						HX_STACK_LINE(199)
						Float a12 = ae->__get((int)4);		HX_STACK_VAR(a12,"a12");
						HX_STACK_LINE(199)
						Float a13 = ae->__get((int)8);		HX_STACK_VAR(a13,"a13");
						HX_STACK_LINE(199)
						Float a14 = ae->__get((int)12);		HX_STACK_VAR(a14,"a14");
						HX_STACK_LINE(199)
						Float a21 = ae->__get((int)1);		HX_STACK_VAR(a21,"a21");
						HX_STACK_LINE(199)
						Float a22 = ae->__get((int)5);		HX_STACK_VAR(a22,"a22");
						HX_STACK_LINE(199)
						Float a23 = ae->__get((int)9);		HX_STACK_VAR(a23,"a23");
						HX_STACK_LINE(199)
						Float a24 = ae->__get((int)13);		HX_STACK_VAR(a24,"a24");
						HX_STACK_LINE(199)
						Float a31 = ae->__get((int)2);		HX_STACK_VAR(a31,"a31");
						HX_STACK_LINE(199)
						Float a32 = ae->__get((int)6);		HX_STACK_VAR(a32,"a32");
						HX_STACK_LINE(199)
						Float a33 = ae->__get((int)10);		HX_STACK_VAR(a33,"a33");
						HX_STACK_LINE(199)
						Float a34 = ae->__get((int)14);		HX_STACK_VAR(a34,"a34");
						HX_STACK_LINE(199)
						Float a41 = ae->__get((int)3);		HX_STACK_VAR(a41,"a41");
						HX_STACK_LINE(199)
						Float a42 = ae->__get((int)7);		HX_STACK_VAR(a42,"a42");
						HX_STACK_LINE(199)
						Float a43 = ae->__get((int)11);		HX_STACK_VAR(a43,"a43");
						HX_STACK_LINE(199)
						Float a44 = ae->__get((int)15);		HX_STACK_VAR(a44,"a44");
						HX_STACK_LINE(199)
						Float b11 = be->__get((int)0);		HX_STACK_VAR(b11,"b11");
						HX_STACK_LINE(199)
						Float b12 = be->__get((int)4);		HX_STACK_VAR(b12,"b12");
						HX_STACK_LINE(199)
						Float b13 = be->__get((int)8);		HX_STACK_VAR(b13,"b13");
						HX_STACK_LINE(199)
						Float b14 = be->__get((int)12);		HX_STACK_VAR(b14,"b14");
						HX_STACK_LINE(199)
						Float b21 = be->__get((int)1);		HX_STACK_VAR(b21,"b21");
						HX_STACK_LINE(199)
						Float b22 = be->__get((int)5);		HX_STACK_VAR(b22,"b22");
						HX_STACK_LINE(199)
						Float b23 = be->__get((int)9);		HX_STACK_VAR(b23,"b23");
						HX_STACK_LINE(199)
						Float b24 = be->__get((int)13);		HX_STACK_VAR(b24,"b24");
						HX_STACK_LINE(199)
						Float b31 = be->__get((int)2);		HX_STACK_VAR(b31,"b31");
						HX_STACK_LINE(199)
						Float b32 = be->__get((int)6);		HX_STACK_VAR(b32,"b32");
						HX_STACK_LINE(199)
						Float b33 = be->__get((int)10);		HX_STACK_VAR(b33,"b33");
						HX_STACK_LINE(199)
						Float b34 = be->__get((int)14);		HX_STACK_VAR(b34,"b34");
						HX_STACK_LINE(199)
						Float b41 = be->__get((int)3);		HX_STACK_VAR(b41,"b41");
						HX_STACK_LINE(199)
						Float b42 = be->__get((int)7);		HX_STACK_VAR(b42,"b42");
						HX_STACK_LINE(199)
						Float b43 = be->__get((int)11);		HX_STACK_VAR(b43,"b43");
						HX_STACK_LINE(199)
						Float b44 = be->__get((int)15);		HX_STACK_VAR(b44,"b44");
						HX_STACK_LINE(199)
						te[(int)0] = ((((a11 * b11) + (a12 * b21)) + (a13 * b31)) + (a14 * b41));
						HX_STACK_LINE(199)
						te[(int)4] = ((((a11 * b12) + (a12 * b22)) + (a13 * b32)) + (a14 * b42));
						HX_STACK_LINE(199)
						te[(int)8] = ((((a11 * b13) + (a12 * b23)) + (a13 * b33)) + (a14 * b43));
						HX_STACK_LINE(199)
						te[(int)12] = ((((a11 * b14) + (a12 * b24)) + (a13 * b34)) + (a14 * b44));
						HX_STACK_LINE(199)
						te[(int)1] = ((((a21 * b11) + (a22 * b21)) + (a23 * b31)) + (a24 * b41));
						HX_STACK_LINE(199)
						te[(int)5] = ((((a21 * b12) + (a22 * b22)) + (a23 * b32)) + (a24 * b42));
						HX_STACK_LINE(199)
						te[(int)9] = ((((a21 * b13) + (a22 * b23)) + (a23 * b33)) + (a24 * b43));
						HX_STACK_LINE(199)
						te[(int)13] = ((((a21 * b14) + (a22 * b24)) + (a23 * b34)) + (a24 * b44));
						HX_STACK_LINE(199)
						te[(int)2] = ((((a31 * b11) + (a32 * b21)) + (a33 * b31)) + (a34 * b41));
						HX_STACK_LINE(199)
						te[(int)6] = ((((a31 * b12) + (a32 * b22)) + (a33 * b32)) + (a34 * b42));
						HX_STACK_LINE(199)
						te[(int)10] = ((((a31 * b13) + (a32 * b23)) + (a33 * b33)) + (a34 * b43));
						HX_STACK_LINE(199)
						te[(int)14] = ((((a31 * b14) + (a32 * b24)) + (a33 * b34)) + (a34 * b44));
						HX_STACK_LINE(199)
						te[(int)3] = ((((a41 * b11) + (a42 * b21)) + (a43 * b31)) + (a44 * b41));
						HX_STACK_LINE(199)
						te[(int)7] = ((((a41 * b12) + (a42 * b22)) + (a43 * b32)) + (a44 * b42));
						HX_STACK_LINE(199)
						te[(int)11] = ((((a41 * b13) + (a42 * b23)) + (a43 * b33)) + (a44 * b43));
						HX_STACK_LINE(199)
						te[(int)15] = ((((a41 * b14) + (a42 * b24)) + (a43 * b34)) + (a44 * b44));
						HX_STACK_LINE(199)
						_this;
					}
				}
				HX_STACK_LINE(199)
				if (((this->parent != null()))){
					HX_STACK_LINE(199)
					::phoenix::Spatial _this = this->get_world();		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(199)
					::phoenix::Matrix _m;		HX_STACK_VAR(_m,"_m");
					HX_STACK_LINE(199)
					{
						HX_STACK_LINE(199)
						::phoenix::Matrix _this1;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(199)
						{
							HX_STACK_LINE(199)
							::phoenix::Spatial _this2 = this->get_world();		HX_STACK_VAR(_this2,"_this2");
							HX_STACK_LINE(199)
							_this1 = _this2->matrix;
						}
						HX_STACK_LINE(199)
						::phoenix::Matrix _a;		HX_STACK_VAR(_a,"_a");
						HX_STACK_LINE(199)
						{
							HX_STACK_LINE(199)
							::phoenix::Spatial _this2 = this->parent->get_world();		HX_STACK_VAR(_this2,"_this2");
							HX_STACK_LINE(199)
							_a = _this2->matrix;
						}
						HX_STACK_LINE(199)
						Array< Float > ae = _a->elements;		HX_STACK_VAR(ae,"ae");
						HX_STACK_LINE(199)
						Array< Float > be = this->local->matrix->elements;		HX_STACK_VAR(be,"be");
						HX_STACK_LINE(199)
						Array< Float > te = _this1->elements;		HX_STACK_VAR(te,"te");
						HX_STACK_LINE(199)
						Float a11 = ae->__get((int)0);		HX_STACK_VAR(a11,"a11");
						HX_STACK_LINE(199)
						Float a12 = ae->__get((int)4);		HX_STACK_VAR(a12,"a12");
						HX_STACK_LINE(199)
						Float a13 = ae->__get((int)8);		HX_STACK_VAR(a13,"a13");
						HX_STACK_LINE(199)
						Float a14 = ae->__get((int)12);		HX_STACK_VAR(a14,"a14");
						HX_STACK_LINE(199)
						Float a21 = ae->__get((int)1);		HX_STACK_VAR(a21,"a21");
						HX_STACK_LINE(199)
						Float a22 = ae->__get((int)5);		HX_STACK_VAR(a22,"a22");
						HX_STACK_LINE(199)
						Float a23 = ae->__get((int)9);		HX_STACK_VAR(a23,"a23");
						HX_STACK_LINE(199)
						Float a24 = ae->__get((int)13);		HX_STACK_VAR(a24,"a24");
						HX_STACK_LINE(199)
						Float a31 = ae->__get((int)2);		HX_STACK_VAR(a31,"a31");
						HX_STACK_LINE(199)
						Float a32 = ae->__get((int)6);		HX_STACK_VAR(a32,"a32");
						HX_STACK_LINE(199)
						Float a33 = ae->__get((int)10);		HX_STACK_VAR(a33,"a33");
						HX_STACK_LINE(199)
						Float a34 = ae->__get((int)14);		HX_STACK_VAR(a34,"a34");
						HX_STACK_LINE(199)
						Float a41 = ae->__get((int)3);		HX_STACK_VAR(a41,"a41");
						HX_STACK_LINE(199)
						Float a42 = ae->__get((int)7);		HX_STACK_VAR(a42,"a42");
						HX_STACK_LINE(199)
						Float a43 = ae->__get((int)11);		HX_STACK_VAR(a43,"a43");
						HX_STACK_LINE(199)
						Float a44 = ae->__get((int)15);		HX_STACK_VAR(a44,"a44");
						HX_STACK_LINE(199)
						Float b11 = be->__get((int)0);		HX_STACK_VAR(b11,"b11");
						HX_STACK_LINE(199)
						Float b12 = be->__get((int)4);		HX_STACK_VAR(b12,"b12");
						HX_STACK_LINE(199)
						Float b13 = be->__get((int)8);		HX_STACK_VAR(b13,"b13");
						HX_STACK_LINE(199)
						Float b14 = be->__get((int)12);		HX_STACK_VAR(b14,"b14");
						HX_STACK_LINE(199)
						Float b21 = be->__get((int)1);		HX_STACK_VAR(b21,"b21");
						HX_STACK_LINE(199)
						Float b22 = be->__get((int)5);		HX_STACK_VAR(b22,"b22");
						HX_STACK_LINE(199)
						Float b23 = be->__get((int)9);		HX_STACK_VAR(b23,"b23");
						HX_STACK_LINE(199)
						Float b24 = be->__get((int)13);		HX_STACK_VAR(b24,"b24");
						HX_STACK_LINE(199)
						Float b31 = be->__get((int)2);		HX_STACK_VAR(b31,"b31");
						HX_STACK_LINE(199)
						Float b32 = be->__get((int)6);		HX_STACK_VAR(b32,"b32");
						HX_STACK_LINE(199)
						Float b33 = be->__get((int)10);		HX_STACK_VAR(b33,"b33");
						HX_STACK_LINE(199)
						Float b34 = be->__get((int)14);		HX_STACK_VAR(b34,"b34");
						HX_STACK_LINE(199)
						Float b41 = be->__get((int)3);		HX_STACK_VAR(b41,"b41");
						HX_STACK_LINE(199)
						Float b42 = be->__get((int)7);		HX_STACK_VAR(b42,"b42");
						HX_STACK_LINE(199)
						Float b43 = be->__get((int)11);		HX_STACK_VAR(b43,"b43");
						HX_STACK_LINE(199)
						Float b44 = be->__get((int)15);		HX_STACK_VAR(b44,"b44");
						HX_STACK_LINE(199)
						te[(int)0] = ((((a11 * b11) + (a12 * b21)) + (a13 * b31)) + (a14 * b41));
						HX_STACK_LINE(199)
						te[(int)4] = ((((a11 * b12) + (a12 * b22)) + (a13 * b32)) + (a14 * b42));
						HX_STACK_LINE(199)
						te[(int)8] = ((((a11 * b13) + (a12 * b23)) + (a13 * b33)) + (a14 * b43));
						HX_STACK_LINE(199)
						te[(int)12] = ((((a11 * b14) + (a12 * b24)) + (a13 * b34)) + (a14 * b44));
						HX_STACK_LINE(199)
						te[(int)1] = ((((a21 * b11) + (a22 * b21)) + (a23 * b31)) + (a24 * b41));
						HX_STACK_LINE(199)
						te[(int)5] = ((((a21 * b12) + (a22 * b22)) + (a23 * b32)) + (a24 * b42));
						HX_STACK_LINE(199)
						te[(int)9] = ((((a21 * b13) + (a22 * b23)) + (a23 * b33)) + (a24 * b43));
						HX_STACK_LINE(199)
						te[(int)13] = ((((a21 * b14) + (a22 * b24)) + (a23 * b34)) + (a24 * b44));
						HX_STACK_LINE(199)
						te[(int)2] = ((((a31 * b11) + (a32 * b21)) + (a33 * b31)) + (a34 * b41));
						HX_STACK_LINE(199)
						te[(int)6] = ((((a31 * b12) + (a32 * b22)) + (a33 * b32)) + (a34 * b42));
						HX_STACK_LINE(199)
						te[(int)10] = ((((a31 * b13) + (a32 * b23)) + (a33 * b33)) + (a34 * b43));
						HX_STACK_LINE(199)
						te[(int)14] = ((((a31 * b14) + (a32 * b24)) + (a33 * b34)) + (a34 * b44));
						HX_STACK_LINE(199)
						te[(int)3] = ((((a41 * b11) + (a42 * b21)) + (a43 * b31)) + (a44 * b41));
						HX_STACK_LINE(199)
						te[(int)7] = ((((a41 * b12) + (a42 * b22)) + (a43 * b32)) + (a44 * b42));
						HX_STACK_LINE(199)
						te[(int)11] = ((((a41 * b13) + (a42 * b23)) + (a43 * b33)) + (a44 * b43));
						HX_STACK_LINE(199)
						te[(int)15] = ((((a41 * b14) + (a42 * b24)) + (a43 * b34)) + (a44 * b44));
						HX_STACK_LINE(199)
						_m = _this1;
					}
					HX_STACK_LINE(199)
					_this->matrix = _m;
					HX_STACK_LINE(199)
					if (((_m != null()))){
						HX_STACK_LINE(199)
						::snow::platform::native::utils::Float32Array _g7;		HX_STACK_VAR(_g7,"_g7");
						HX_STACK_LINE(199)
						{
							HX_STACK_LINE(199)
							::phoenix::Matrix _this1 = _this->matrix;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(199)
							{
								HX_STACK_LINE(199)
								::snow::platform::native::utils::Float32Array _this2 = _this1->_float32array;		HX_STACK_VAR(_this2,"_this2");
								HX_STACK_LINE(199)
								Dynamic bufferOrArray = _this1->elements;		HX_STACK_VAR(bufferOrArray,"bufferOrArray");
								HX_STACK_LINE(199)
								int offset = (int)0;		HX_STACK_VAR(offset,"offset");
								HX_STACK_LINE(199)
								if ((::Std_obj::is(bufferOrArray,hx::ClassOf< Array<int> >()))){
									HX_STACK_LINE(199)
									Array< Float > floats = bufferOrArray;		HX_STACK_VAR(floats,"floats");
									HX_STACK_LINE(199)
									{
										HX_STACK_LINE(199)
										int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
										HX_STACK_LINE(199)
										int _g = floats->length;		HX_STACK_VAR(_g,"_g");
										HX_STACK_LINE(199)
										while((true)){
											HX_STACK_LINE(199)
											if ((!(((_g1 < _g))))){
												HX_STACK_LINE(199)
												break;
											}
											HX_STACK_LINE(199)
											int i = (_g1)++;		HX_STACK_VAR(i,"i");
											HX_STACK_LINE(199)
											::__hxcpp_memory_set_float(_this2->bytes,(((int((i + offset)) << int((int)2))) + _this2->byteOffset),floats->__get(i));
										}
									}
								}
								else{
									HX_STACK_LINE(199)
									if ((::Std_obj::is(bufferOrArray,hx::ClassOf< ::snow::platform::native::utils::Float32Array >()))){
										HX_STACK_LINE(199)
										::snow::platform::native::utils::Float32Array floats = bufferOrArray;		HX_STACK_VAR(floats,"floats");
										HX_STACK_LINE(199)
										{
											HX_STACK_LINE(199)
											int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
											HX_STACK_LINE(199)
											int _g = floats->length;		HX_STACK_VAR(_g,"_g");
											HX_STACK_LINE(199)
											while((true)){
												HX_STACK_LINE(199)
												if ((!(((_g1 < _g))))){
													HX_STACK_LINE(199)
													break;
												}
												HX_STACK_LINE(199)
												int i = (_g1)++;		HX_STACK_VAR(i,"i");
												HX_STACK_LINE(199)
												::__hxcpp_memory_set_float(_this2->bytes,(((int((i + offset)) << int((int)2))) + _this2->byteOffset),floats->__get(i));
											}
										}
									}
									else{
										HX_STACK_LINE(199)
										HX_STACK_DO_THROW(HX_CSTRING("Invalid input buffer"));
									}
								}
							}
							HX_STACK_LINE(199)
							_g7 = ::snow::platform::native::utils::Float32Array_obj::__new(_this1->_float32array,null(),null());
						}
						HX_STACK_LINE(199)
						_this->floats = _g7;
					}
					HX_STACK_LINE(199)
					_this->matrix;
				}
				else{
					HX_STACK_LINE(199)
					::phoenix::Spatial _this = this->get_world();		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(199)
					::phoenix::Matrix _m;		HX_STACK_VAR(_m,"_m");
					HX_STACK_LINE(199)
					{
						HX_STACK_LINE(199)
						Array< Float > te = this->local->matrix->elements;		HX_STACK_VAR(te,"te");
						HX_STACK_LINE(199)
						_m = ::phoenix::Matrix_obj::__new(te->__get((int)0),te->__get((int)4),te->__get((int)8),te->__get((int)12),te->__get((int)1),te->__get((int)5),te->__get((int)9),te->__get((int)13),te->__get((int)2),te->__get((int)6),te->__get((int)10),te->__get((int)14),te->__get((int)3),te->__get((int)7),te->__get((int)11),te->__get((int)15));
					}
					HX_STACK_LINE(199)
					_this->matrix = _m;
					HX_STACK_LINE(199)
					if (((_m != null()))){
						HX_STACK_LINE(199)
						::snow::platform::native::utils::Float32Array _g8;		HX_STACK_VAR(_g8,"_g8");
						HX_STACK_LINE(199)
						{
							HX_STACK_LINE(199)
							::phoenix::Matrix _this1 = _this->matrix;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(199)
							{
								HX_STACK_LINE(199)
								::snow::platform::native::utils::Float32Array _this2 = _this1->_float32array;		HX_STACK_VAR(_this2,"_this2");
								HX_STACK_LINE(199)
								Dynamic bufferOrArray = _this1->elements;		HX_STACK_VAR(bufferOrArray,"bufferOrArray");
								HX_STACK_LINE(199)
								int offset = (int)0;		HX_STACK_VAR(offset,"offset");
								HX_STACK_LINE(199)
								if ((::Std_obj::is(bufferOrArray,hx::ClassOf< Array<int> >()))){
									HX_STACK_LINE(199)
									Array< Float > floats = bufferOrArray;		HX_STACK_VAR(floats,"floats");
									HX_STACK_LINE(199)
									{
										HX_STACK_LINE(199)
										int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
										HX_STACK_LINE(199)
										int _g = floats->length;		HX_STACK_VAR(_g,"_g");
										HX_STACK_LINE(199)
										while((true)){
											HX_STACK_LINE(199)
											if ((!(((_g1 < _g))))){
												HX_STACK_LINE(199)
												break;
											}
											HX_STACK_LINE(199)
											int i = (_g1)++;		HX_STACK_VAR(i,"i");
											HX_STACK_LINE(199)
											::__hxcpp_memory_set_float(_this2->bytes,(((int((i + offset)) << int((int)2))) + _this2->byteOffset),floats->__get(i));
										}
									}
								}
								else{
									HX_STACK_LINE(199)
									if ((::Std_obj::is(bufferOrArray,hx::ClassOf< ::snow::platform::native::utils::Float32Array >()))){
										HX_STACK_LINE(199)
										::snow::platform::native::utils::Float32Array floats = bufferOrArray;		HX_STACK_VAR(floats,"floats");
										HX_STACK_LINE(199)
										{
											HX_STACK_LINE(199)
											int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
											HX_STACK_LINE(199)
											int _g = floats->length;		HX_STACK_VAR(_g,"_g");
											HX_STACK_LINE(199)
											while((true)){
												HX_STACK_LINE(199)
												if ((!(((_g1 < _g))))){
													HX_STACK_LINE(199)
													break;
												}
												HX_STACK_LINE(199)
												int i = (_g1)++;		HX_STACK_VAR(i,"i");
												HX_STACK_LINE(199)
												::__hxcpp_memory_set_float(_this2->bytes,(((int((i + offset)) << int((int)2))) + _this2->byteOffset),floats->__get(i));
											}
										}
									}
									else{
										HX_STACK_LINE(199)
										HX_STACK_DO_THROW(HX_CSTRING("Invalid input buffer"));
									}
								}
							}
							HX_STACK_LINE(199)
							_g8 = ::snow::platform::native::utils::Float32Array_obj::__new(_this1->_float32array,null(),null());
						}
						HX_STACK_LINE(199)
						_this->floats = _g8;
					}
					HX_STACK_LINE(199)
					_this->matrix;
				}
				HX_STACK_LINE(199)
				{
					HX_STACK_LINE(199)
					::phoenix::Spatial _this = this->get_world();		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(199)
					if ((_this->auto_decompose)){
						HX_STACK_LINE(199)
						::phoenix::MatrixTransform _transform;		HX_STACK_VAR(_transform,"_transform");
						HX_STACK_LINE(199)
						{
							HX_STACK_LINE(199)
							::phoenix::Matrix _this1 = _this->matrix;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(199)
							::phoenix::Vector _position = null();		HX_STACK_VAR(_position,"_position");
							HX_STACK_LINE(199)
							::phoenix::Quaternion _quaternion = null();		HX_STACK_VAR(_quaternion,"_quaternion");
							HX_STACK_LINE(199)
							::phoenix::Vector _scale = null();		HX_STACK_VAR(_scale,"_scale");
							HX_STACK_LINE(199)
							Array< Float > te = _this1->elements;		HX_STACK_VAR(te,"te");
							HX_STACK_LINE(199)
							::phoenix::Matrix matrix = ::phoenix::Matrix_obj::__new(null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(matrix,"matrix");
							HX_STACK_LINE(199)
							Float _ax_x = te->__get((int)0);		HX_STACK_VAR(_ax_x,"_ax_x");
							HX_STACK_LINE(199)
							Float _ax_y = te->__get((int)1);		HX_STACK_VAR(_ax_y,"_ax_y");
							HX_STACK_LINE(199)
							Float _ax_z = te->__get((int)2);		HX_STACK_VAR(_ax_z,"_ax_z");
							HX_STACK_LINE(199)
							Float _ay_x = te->__get((int)4);		HX_STACK_VAR(_ay_x,"_ay_x");
							HX_STACK_LINE(199)
							Float _ay_y = te->__get((int)5);		HX_STACK_VAR(_ay_y,"_ay_y");
							HX_STACK_LINE(199)
							Float _ay_z = te->__get((int)6);		HX_STACK_VAR(_ay_z,"_ay_z");
							HX_STACK_LINE(199)
							Float _az_x = te->__get((int)8);		HX_STACK_VAR(_az_x,"_az_x");
							HX_STACK_LINE(199)
							Float _az_y = te->__get((int)9);		HX_STACK_VAR(_az_y,"_az_y");
							HX_STACK_LINE(199)
							Float _az_z = te->__get((int)10);		HX_STACK_VAR(_az_z,"_az_z");
							HX_STACK_LINE(199)
							Float _ax_length = ::Math_obj::sqrt((((_ax_x * _ax_x) + (_ax_y * _ax_y)) + (_ax_z * _ax_z)));		HX_STACK_VAR(_ax_length,"_ax_length");
							HX_STACK_LINE(199)
							Float _ay_length = ::Math_obj::sqrt((((_ay_x * _ay_x) + (_ay_y * _ay_y)) + (_ay_z * _ay_z)));		HX_STACK_VAR(_ay_length,"_ay_length");
							HX_STACK_LINE(199)
							Float _az_length = ::Math_obj::sqrt((((_az_x * _az_x) + (_az_y * _az_y)) + (_az_z * _az_z)));		HX_STACK_VAR(_az_length,"_az_length");
							HX_STACK_LINE(199)
							if (((_quaternion == null()))){
								HX_STACK_LINE(199)
								::phoenix::Quaternion _g9 = ::phoenix::Quaternion_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(_g9,"_g9");
								HX_STACK_LINE(199)
								_quaternion = _g9;
							}
							HX_STACK_LINE(199)
							if (((_position == null()))){
								HX_STACK_LINE(199)
								::phoenix::Vector _g10 = ::phoenix::Vector_obj::__new(te->__get((int)12),te->__get((int)13),te->__get((int)14),null());		HX_STACK_VAR(_g10,"_g10");
								HX_STACK_LINE(199)
								_position = _g10;
							}
							else{
								HX_STACK_LINE(199)
								{
									HX_STACK_LINE(199)
									Float _x = te->__get((int)12);		HX_STACK_VAR(_x,"_x");
									HX_STACK_LINE(199)
									_position->x = _x;
									HX_STACK_LINE(199)
									if ((_position->_construct)){
										HX_STACK_LINE(199)
										_position->x;
									}
									else{
										HX_STACK_LINE(199)
										if (((bool((_position->listen_x != null())) && bool(!(_position->ignore_listeners))))){
											HX_STACK_LINE(199)
											_position->listen_x(_x);
										}
										HX_STACK_LINE(199)
										_position->x;
									}
								}
								HX_STACK_LINE(199)
								{
									HX_STACK_LINE(199)
									Float _y = te->__get((int)13);		HX_STACK_VAR(_y,"_y");
									HX_STACK_LINE(199)
									_position->y = _y;
									HX_STACK_LINE(199)
									if ((_position->_construct)){
										HX_STACK_LINE(199)
										_position->y;
									}
									else{
										HX_STACK_LINE(199)
										if (((bool((_position->listen_y != null())) && bool(!(_position->ignore_listeners))))){
											HX_STACK_LINE(199)
											_position->listen_y(_y);
										}
										HX_STACK_LINE(199)
										_position->y;
									}
								}
								HX_STACK_LINE(199)
								{
									HX_STACK_LINE(199)
									Float _z = te->__get((int)14);		HX_STACK_VAR(_z,"_z");
									HX_STACK_LINE(199)
									_position->z = _z;
									HX_STACK_LINE(199)
									if ((_position->_construct)){
										HX_STACK_LINE(199)
										_position->z;
									}
									else{
										HX_STACK_LINE(199)
										if (((bool((_position->listen_z != null())) && bool(!(_position->ignore_listeners))))){
											HX_STACK_LINE(199)
											_position->listen_z(_z);
										}
										HX_STACK_LINE(199)
										_position->z;
									}
								}
							}
							HX_STACK_LINE(199)
							if (((_scale == null()))){
								HX_STACK_LINE(199)
								::phoenix::Vector _g11 = ::phoenix::Vector_obj::__new(_ax_length,_ay_length,_az_length,null());		HX_STACK_VAR(_g11,"_g11");
								HX_STACK_LINE(199)
								_scale = _g11;
							}
							else{
								HX_STACK_LINE(199)
								{
									HX_STACK_LINE(199)
									_scale->x = _ax_length;
									HX_STACK_LINE(199)
									if ((_scale->_construct)){
										HX_STACK_LINE(199)
										_scale->x;
									}
									else{
										HX_STACK_LINE(199)
										if (((bool((_scale->listen_x != null())) && bool(!(_scale->ignore_listeners))))){
											HX_STACK_LINE(199)
											_scale->listen_x(_ax_length);
										}
										HX_STACK_LINE(199)
										_scale->x;
									}
								}
								HX_STACK_LINE(199)
								{
									HX_STACK_LINE(199)
									_scale->y = _ay_length;
									HX_STACK_LINE(199)
									if ((_scale->_construct)){
										HX_STACK_LINE(199)
										_scale->y;
									}
									else{
										HX_STACK_LINE(199)
										if (((bool((_scale->listen_y != null())) && bool(!(_scale->ignore_listeners))))){
											HX_STACK_LINE(199)
											_scale->listen_y(_ay_length);
										}
										HX_STACK_LINE(199)
										_scale->y;
									}
								}
								HX_STACK_LINE(199)
								{
									HX_STACK_LINE(199)
									_scale->z = _az_length;
									HX_STACK_LINE(199)
									if ((_scale->_construct)){
										HX_STACK_LINE(199)
										_scale->z;
									}
									else{
										HX_STACK_LINE(199)
										if (((bool((_scale->listen_z != null())) && bool(!(_scale->ignore_listeners))))){
											HX_STACK_LINE(199)
											_scale->listen_z(_az_length);
										}
										HX_STACK_LINE(199)
										_scale->z;
									}
								}
							}
							HX_STACK_LINE(199)
							Array< Float > _g12 = _this1->elements->concat(Array_obj< Float >::__new());		HX_STACK_VAR(_g12,"_g12");
							HX_STACK_LINE(199)
							matrix->elements = _g12;
							HX_STACK_LINE(199)
							Array< Float > me = matrix->elements;		HX_STACK_VAR(me,"me");
							HX_STACK_LINE(199)
							hx::DivEq(me[(int)0],_ax_length);
							HX_STACK_LINE(199)
							hx::DivEq(me[(int)1],_ax_length);
							HX_STACK_LINE(199)
							hx::DivEq(me[(int)2],_ax_length);
							HX_STACK_LINE(199)
							hx::DivEq(me[(int)4],_ay_length);
							HX_STACK_LINE(199)
							hx::DivEq(me[(int)5],_ay_length);
							HX_STACK_LINE(199)
							hx::DivEq(me[(int)6],_ay_length);
							HX_STACK_LINE(199)
							hx::DivEq(me[(int)8],_az_length);
							HX_STACK_LINE(199)
							hx::DivEq(me[(int)9],_az_length);
							HX_STACK_LINE(199)
							hx::DivEq(me[(int)10],_az_length);
							HX_STACK_LINE(199)
							_quaternion->setFromRotationMatrix(matrix);
							HX_STACK_LINE(199)
							if (((_this1->_transform == null()))){
								HX_STACK_LINE(199)
								::phoenix::MatrixTransform _g13 = ::phoenix::MatrixTransform_obj::__new(_position,_quaternion,_scale);		HX_STACK_VAR(_g13,"_g13");
								HX_STACK_LINE(199)
								_this1->_transform = _g13;
							}
							else{
								HX_STACK_LINE(199)
								_this1->_transform->pos = _position;
								HX_STACK_LINE(199)
								_this1->_transform->rotation = _quaternion;
								HX_STACK_LINE(199)
								_this1->_transform->scale = _scale;
							}
							HX_STACK_LINE(199)
							_transform = _this1->_transform;
						}
						HX_STACK_LINE(199)
						{
							HX_STACK_LINE(199)
							::phoenix::Vector _p = _transform->pos;		HX_STACK_VAR(_p,"_p");
							HX_STACK_LINE(199)
							_this->pos = _p;
							HX_STACK_LINE(199)
							if (((_p != null()))){
								HX_STACK_LINE(199)
								::phoenix::Vector_obj::Listen(_this->pos,_this->_pos_change_dyn());
								HX_STACK_LINE(199)
								if (((bool((_this->pos_changed != null())) && bool(!(_this->ignore_listeners))))){
									HX_STACK_LINE(199)
									_this->pos_changed(_this->pos);
								}
							}
							HX_STACK_LINE(199)
							_this->pos;
						}
						HX_STACK_LINE(199)
						{
							HX_STACK_LINE(199)
							::phoenix::Quaternion _r = _transform->rotation;		HX_STACK_VAR(_r,"_r");
							HX_STACK_LINE(199)
							_this->rotation = _r;
							HX_STACK_LINE(199)
							if (((_r != null()))){
								HX_STACK_LINE(199)
								{
									HX_STACK_LINE(199)
									::phoenix::Quaternion _q = _this->rotation;		HX_STACK_VAR(_q,"_q");
									HX_STACK_LINE(199)
									Dynamic listener = _this->_rotation_change_dyn();		HX_STACK_VAR(listener,"listener");
									HX_STACK_LINE(199)
									_q->listen_x = listener;
									HX_STACK_LINE(199)
									_q->listen_y = listener;
									HX_STACK_LINE(199)
									_q->listen_z = listener;
									HX_STACK_LINE(199)
									_q->listen_w = listener;
								}
								HX_STACK_LINE(199)
								if (((bool((_this->rotation_changed != null())) && bool(!(_this->ignore_listeners))))){
									HX_STACK_LINE(199)
									_this->rotation_changed(_this->rotation);
								}
							}
							HX_STACK_LINE(199)
							_this->rotation;
						}
						HX_STACK_LINE(199)
						{
							HX_STACK_LINE(199)
							::phoenix::Vector _s = _transform->scale;		HX_STACK_VAR(_s,"_s");
							HX_STACK_LINE(199)
							_this->scale = _s;
							HX_STACK_LINE(199)
							if (((_s != null()))){
								HX_STACK_LINE(199)
								::phoenix::Vector_obj::Listen(_this->scale,_this->_scale_change_dyn());
								HX_STACK_LINE(199)
								if (((bool((_this->scale_changed != null())) && bool(!(_this->ignore_listeners))))){
									HX_STACK_LINE(199)
									_this->scale_changed(_this->scale);
								}
							}
							HX_STACK_LINE(199)
							_this->scale;
						}
					}
					HX_STACK_LINE(199)
					_this;
				}
				HX_STACK_LINE(199)
				{
					HX_STACK_LINE(199)
					this->dirty = false;
					HX_STACK_LINE(199)
					if (((bool((bool((bool(this->dirty) && bool(!(this->_setup)))) && bool((this->_dirty_handlers != null())))) && bool((this->_dirty_handlers->__Field(HX_CSTRING("length"),true) > (int)0))))){
						HX_STACK_LINE(199)
						int _g = (int)0;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(199)
						Dynamic _g1 = this->_dirty_handlers;		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(199)
						while((true)){
							HX_STACK_LINE(199)
							if ((!(((_g < _g1->__Field(HX_CSTRING("length"),true)))))){
								HX_STACK_LINE(199)
								break;
							}
							HX_STACK_LINE(199)
							Dynamic _handler = _g1->__GetItem(_g);		HX_STACK_VAR(_handler,"_handler");
							HX_STACK_LINE(199)
							++(_g);
							HX_STACK_LINE(199)
							if (((_handler != null()))){
								HX_STACK_LINE(199)
								_handler(hx::ObjectPtr<OBJ_>(this)).Cast< Void >();
							}
						}
					}
					HX_STACK_LINE(199)
					this->dirty;
				}
				HX_STACK_LINE(199)
				this->_cleaning = false;
				HX_STACK_LINE(199)
				if (((bool((this->_clean_handlers != null())) && bool((this->_clean_handlers->__Field(HX_CSTRING("length"),true) > (int)0))))){
					HX_STACK_LINE(199)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(199)
					Dynamic _g1 = this->_clean_handlers;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(199)
					while((true)){
						HX_STACK_LINE(199)
						if ((!(((_g < _g1->__Field(HX_CSTRING("length"),true)))))){
							HX_STACK_LINE(199)
							break;
						}
						HX_STACK_LINE(199)
						Dynamic _handler = _g1->__GetItem(_g);		HX_STACK_VAR(_handler,"_handler");
						HX_STACK_LINE(199)
						++(_g);
						HX_STACK_LINE(199)
						if (((_handler != null()))){
							HX_STACK_LINE(199)
							_handler(hx::ObjectPtr<OBJ_>(this)).Cast< Void >();
						}
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Transform_obj,clean_check,(void))

Void Transform_obj::clean( ){
{
		HX_STACK_FRAME("phoenix.Transform","clean",0xbcad0a08,"phoenix.Transform.clean","phoenix/Transform.hx",204,0x44da8ab2)
		HX_STACK_THIS(this)
		HX_STACK_LINE(206)
		if ((!(this->dirty))){
			HX_STACK_LINE(207)
			return null();
		}
		HX_STACK_LINE(211)
		this->_cleaning = true;
		HX_STACK_LINE(214)
		{
			HX_STACK_LINE(214)
			::phoenix::Matrix _this = this->_pos_matrix;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(214)
			{
				HX_STACK_LINE(214)
				Array< Float > e = _this->elements;		HX_STACK_VAR(e,"e");
				HX_STACK_LINE(214)
				e[(int)0] = (int)1;
				HX_STACK_LINE(214)
				e[(int)4] = (int)0;
				HX_STACK_LINE(214)
				e[(int)8] = (int)0;
				HX_STACK_LINE(214)
				e[(int)12] = this->local->pos->x;
				HX_STACK_LINE(214)
				e[(int)1] = (int)0;
				HX_STACK_LINE(214)
				e[(int)5] = (int)1;
				HX_STACK_LINE(214)
				e[(int)9] = (int)0;
				HX_STACK_LINE(214)
				e[(int)13] = this->local->pos->y;
				HX_STACK_LINE(214)
				e[(int)2] = (int)0;
				HX_STACK_LINE(214)
				e[(int)6] = (int)0;
				HX_STACK_LINE(214)
				e[(int)10] = (int)1;
				HX_STACK_LINE(214)
				e[(int)14] = this->local->pos->z;
				HX_STACK_LINE(214)
				e[(int)3] = (int)0;
				HX_STACK_LINE(214)
				e[(int)7] = (int)0;
				HX_STACK_LINE(214)
				e[(int)11] = (int)0;
				HX_STACK_LINE(214)
				e[(int)15] = (int)1;
				HX_STACK_LINE(214)
				_this;
			}
			HX_STACK_LINE(214)
			_this;
		}
		HX_STACK_LINE(215)
		{
			HX_STACK_LINE(215)
			::phoenix::Matrix _this = this->_rotation_matrix;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(215)
			::phoenix::Quaternion q = this->local->rotation;		HX_STACK_VAR(q,"q");
			HX_STACK_LINE(215)
			Array< Float > te = _this->elements;		HX_STACK_VAR(te,"te");
			HX_STACK_LINE(215)
			Float x2 = (q->x + q->x);		HX_STACK_VAR(x2,"x2");
			HX_STACK_LINE(215)
			Float y2 = (q->y + q->y);		HX_STACK_VAR(y2,"y2");
			HX_STACK_LINE(215)
			Float z2 = (q->z + q->z);		HX_STACK_VAR(z2,"z2");
			HX_STACK_LINE(215)
			Float xx = (q->x * x2);		HX_STACK_VAR(xx,"xx");
			HX_STACK_LINE(215)
			Float xy = (q->x * y2);		HX_STACK_VAR(xy,"xy");
			HX_STACK_LINE(215)
			Float xz = (q->x * z2);		HX_STACK_VAR(xz,"xz");
			HX_STACK_LINE(215)
			Float yy = (q->y * y2);		HX_STACK_VAR(yy,"yy");
			HX_STACK_LINE(215)
			Float yz = (q->y * z2);		HX_STACK_VAR(yz,"yz");
			HX_STACK_LINE(215)
			Float zz = (q->z * z2);		HX_STACK_VAR(zz,"zz");
			HX_STACK_LINE(215)
			Float wx = (q->w * x2);		HX_STACK_VAR(wx,"wx");
			HX_STACK_LINE(215)
			Float wy = (q->w * y2);		HX_STACK_VAR(wy,"wy");
			HX_STACK_LINE(215)
			Float wz = (q->w * z2);		HX_STACK_VAR(wz,"wz");
			HX_STACK_LINE(215)
			te[(int)0] = ((int)1 - ((yy + zz)));
			HX_STACK_LINE(215)
			te[(int)4] = (xy - wz);
			HX_STACK_LINE(215)
			te[(int)8] = (xz + wy);
			HX_STACK_LINE(215)
			te[(int)1] = (xy + wz);
			HX_STACK_LINE(215)
			te[(int)5] = ((int)1 - ((xx + zz)));
			HX_STACK_LINE(215)
			te[(int)9] = (yz - wx);
			HX_STACK_LINE(215)
			te[(int)2] = (xz - wy);
			HX_STACK_LINE(215)
			te[(int)6] = (yz + wx);
			HX_STACK_LINE(215)
			te[(int)10] = ((int)1 - ((xx + yy)));
			HX_STACK_LINE(215)
			te[(int)3] = (int)0;
			HX_STACK_LINE(215)
			te[(int)7] = (int)0;
			HX_STACK_LINE(215)
			te[(int)11] = (int)0;
			HX_STACK_LINE(215)
			te[(int)12] = (int)0;
			HX_STACK_LINE(215)
			te[(int)13] = (int)0;
			HX_STACK_LINE(215)
			te[(int)14] = (int)0;
			HX_STACK_LINE(215)
			te[(int)15] = (int)1;
			HX_STACK_LINE(215)
			_this;
		}
		HX_STACK_LINE(216)
		{
			HX_STACK_LINE(216)
			::phoenix::Matrix _this = this->_origin_undo_matrix;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(216)
			{
				HX_STACK_LINE(216)
				Array< Float > e = _this->elements;		HX_STACK_VAR(e,"e");
				HX_STACK_LINE(216)
				e[(int)0] = (int)1;
				HX_STACK_LINE(216)
				e[(int)4] = (int)0;
				HX_STACK_LINE(216)
				e[(int)8] = (int)0;
				HX_STACK_LINE(216)
				e[(int)12] = -(this->origin->x);
				HX_STACK_LINE(216)
				e[(int)1] = (int)0;
				HX_STACK_LINE(216)
				e[(int)5] = (int)1;
				HX_STACK_LINE(216)
				e[(int)9] = (int)0;
				HX_STACK_LINE(216)
				e[(int)13] = -(this->origin->y);
				HX_STACK_LINE(216)
				e[(int)2] = (int)0;
				HX_STACK_LINE(216)
				e[(int)6] = (int)0;
				HX_STACK_LINE(216)
				e[(int)10] = (int)1;
				HX_STACK_LINE(216)
				e[(int)14] = -(this->origin->z);
				HX_STACK_LINE(216)
				e[(int)3] = (int)0;
				HX_STACK_LINE(216)
				e[(int)7] = (int)0;
				HX_STACK_LINE(216)
				e[(int)11] = (int)0;
				HX_STACK_LINE(216)
				e[(int)15] = (int)1;
				HX_STACK_LINE(216)
				_this;
			}
			HX_STACK_LINE(216)
			_this;
		}
		HX_STACK_LINE(219)
		{
			HX_STACK_LINE(219)
			::phoenix::Matrix _this = this->local->matrix;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(219)
			{
				HX_STACK_LINE(219)
				Array< Float > e = _this->elements;		HX_STACK_VAR(e,"e");
				HX_STACK_LINE(219)
				e[(int)0] = (int)1;
				HX_STACK_LINE(219)
				e[(int)4] = (int)0;
				HX_STACK_LINE(219)
				e[(int)8] = (int)0;
				HX_STACK_LINE(219)
				e[(int)12] = this->origin->x;
				HX_STACK_LINE(219)
				e[(int)1] = (int)0;
				HX_STACK_LINE(219)
				e[(int)5] = (int)1;
				HX_STACK_LINE(219)
				e[(int)9] = (int)0;
				HX_STACK_LINE(219)
				e[(int)13] = this->origin->y;
				HX_STACK_LINE(219)
				e[(int)2] = (int)0;
				HX_STACK_LINE(219)
				e[(int)6] = (int)0;
				HX_STACK_LINE(219)
				e[(int)10] = (int)1;
				HX_STACK_LINE(219)
				e[(int)14] = this->origin->z;
				HX_STACK_LINE(219)
				e[(int)3] = (int)0;
				HX_STACK_LINE(219)
				e[(int)7] = (int)0;
				HX_STACK_LINE(219)
				e[(int)11] = (int)0;
				HX_STACK_LINE(219)
				e[(int)15] = (int)1;
				HX_STACK_LINE(219)
				_this;
			}
			HX_STACK_LINE(219)
			_this;
		}
		HX_STACK_LINE(222)
		{
			HX_STACK_LINE(222)
			::phoenix::Matrix _this = this->local->matrix;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(222)
			::phoenix::Vector _v = this->local->scale;		HX_STACK_VAR(_v,"_v");
			HX_STACK_LINE(222)
			Array< Float > te = _this->elements;		HX_STACK_VAR(te,"te");
			HX_STACK_LINE(222)
			Float _x = _v->x;		HX_STACK_VAR(_x,"_x");
			HX_STACK_LINE(222)
			Float _y = _v->y;		HX_STACK_VAR(_y,"_y");
			HX_STACK_LINE(222)
			Float _z = _v->z;		HX_STACK_VAR(_z,"_z");
			HX_STACK_LINE(222)
			hx::MultEq(te[(int)0],_x);
			HX_STACK_LINE(222)
			hx::MultEq(te[(int)4],_y);
			HX_STACK_LINE(222)
			hx::MultEq(te[(int)8],_z);
			HX_STACK_LINE(222)
			hx::MultEq(te[(int)1],_x);
			HX_STACK_LINE(222)
			hx::MultEq(te[(int)5],_y);
			HX_STACK_LINE(222)
			hx::MultEq(te[(int)9],_z);
			HX_STACK_LINE(222)
			hx::MultEq(te[(int)2],_x);
			HX_STACK_LINE(222)
			hx::MultEq(te[(int)6],_y);
			HX_STACK_LINE(222)
			hx::MultEq(te[(int)10],_z);
			HX_STACK_LINE(222)
			hx::MultEq(te[(int)3],_x);
			HX_STACK_LINE(222)
			hx::MultEq(te[(int)7],_y);
			HX_STACK_LINE(222)
			hx::MultEq(te[(int)11],_z);
			HX_STACK_LINE(222)
			_this;
		}
		HX_STACK_LINE(224)
		{
			HX_STACK_LINE(224)
			::phoenix::Matrix _this = this->local->matrix;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(224)
			{
				HX_STACK_LINE(224)
				Array< Float > ae = _this->elements;		HX_STACK_VAR(ae,"ae");
				HX_STACK_LINE(224)
				Array< Float > be = this->_rotation_matrix->elements;		HX_STACK_VAR(be,"be");
				HX_STACK_LINE(224)
				Array< Float > te = _this->elements;		HX_STACK_VAR(te,"te");
				HX_STACK_LINE(224)
				Float a11 = ae->__get((int)0);		HX_STACK_VAR(a11,"a11");
				HX_STACK_LINE(224)
				Float a12 = ae->__get((int)4);		HX_STACK_VAR(a12,"a12");
				HX_STACK_LINE(224)
				Float a13 = ae->__get((int)8);		HX_STACK_VAR(a13,"a13");
				HX_STACK_LINE(224)
				Float a14 = ae->__get((int)12);		HX_STACK_VAR(a14,"a14");
				HX_STACK_LINE(224)
				Float a21 = ae->__get((int)1);		HX_STACK_VAR(a21,"a21");
				HX_STACK_LINE(224)
				Float a22 = ae->__get((int)5);		HX_STACK_VAR(a22,"a22");
				HX_STACK_LINE(224)
				Float a23 = ae->__get((int)9);		HX_STACK_VAR(a23,"a23");
				HX_STACK_LINE(224)
				Float a24 = ae->__get((int)13);		HX_STACK_VAR(a24,"a24");
				HX_STACK_LINE(224)
				Float a31 = ae->__get((int)2);		HX_STACK_VAR(a31,"a31");
				HX_STACK_LINE(224)
				Float a32 = ae->__get((int)6);		HX_STACK_VAR(a32,"a32");
				HX_STACK_LINE(224)
				Float a33 = ae->__get((int)10);		HX_STACK_VAR(a33,"a33");
				HX_STACK_LINE(224)
				Float a34 = ae->__get((int)14);		HX_STACK_VAR(a34,"a34");
				HX_STACK_LINE(224)
				Float a41 = ae->__get((int)3);		HX_STACK_VAR(a41,"a41");
				HX_STACK_LINE(224)
				Float a42 = ae->__get((int)7);		HX_STACK_VAR(a42,"a42");
				HX_STACK_LINE(224)
				Float a43 = ae->__get((int)11);		HX_STACK_VAR(a43,"a43");
				HX_STACK_LINE(224)
				Float a44 = ae->__get((int)15);		HX_STACK_VAR(a44,"a44");
				HX_STACK_LINE(224)
				Float b11 = be->__get((int)0);		HX_STACK_VAR(b11,"b11");
				HX_STACK_LINE(224)
				Float b12 = be->__get((int)4);		HX_STACK_VAR(b12,"b12");
				HX_STACK_LINE(224)
				Float b13 = be->__get((int)8);		HX_STACK_VAR(b13,"b13");
				HX_STACK_LINE(224)
				Float b14 = be->__get((int)12);		HX_STACK_VAR(b14,"b14");
				HX_STACK_LINE(224)
				Float b21 = be->__get((int)1);		HX_STACK_VAR(b21,"b21");
				HX_STACK_LINE(224)
				Float b22 = be->__get((int)5);		HX_STACK_VAR(b22,"b22");
				HX_STACK_LINE(224)
				Float b23 = be->__get((int)9);		HX_STACK_VAR(b23,"b23");
				HX_STACK_LINE(224)
				Float b24 = be->__get((int)13);		HX_STACK_VAR(b24,"b24");
				HX_STACK_LINE(224)
				Float b31 = be->__get((int)2);		HX_STACK_VAR(b31,"b31");
				HX_STACK_LINE(224)
				Float b32 = be->__get((int)6);		HX_STACK_VAR(b32,"b32");
				HX_STACK_LINE(224)
				Float b33 = be->__get((int)10);		HX_STACK_VAR(b33,"b33");
				HX_STACK_LINE(224)
				Float b34 = be->__get((int)14);		HX_STACK_VAR(b34,"b34");
				HX_STACK_LINE(224)
				Float b41 = be->__get((int)3);		HX_STACK_VAR(b41,"b41");
				HX_STACK_LINE(224)
				Float b42 = be->__get((int)7);		HX_STACK_VAR(b42,"b42");
				HX_STACK_LINE(224)
				Float b43 = be->__get((int)11);		HX_STACK_VAR(b43,"b43");
				HX_STACK_LINE(224)
				Float b44 = be->__get((int)15);		HX_STACK_VAR(b44,"b44");
				HX_STACK_LINE(224)
				te[(int)0] = ((((a11 * b11) + (a12 * b21)) + (a13 * b31)) + (a14 * b41));
				HX_STACK_LINE(224)
				te[(int)4] = ((((a11 * b12) + (a12 * b22)) + (a13 * b32)) + (a14 * b42));
				HX_STACK_LINE(224)
				te[(int)8] = ((((a11 * b13) + (a12 * b23)) + (a13 * b33)) + (a14 * b43));
				HX_STACK_LINE(224)
				te[(int)12] = ((((a11 * b14) + (a12 * b24)) + (a13 * b34)) + (a14 * b44));
				HX_STACK_LINE(224)
				te[(int)1] = ((((a21 * b11) + (a22 * b21)) + (a23 * b31)) + (a24 * b41));
				HX_STACK_LINE(224)
				te[(int)5] = ((((a21 * b12) + (a22 * b22)) + (a23 * b32)) + (a24 * b42));
				HX_STACK_LINE(224)
				te[(int)9] = ((((a21 * b13) + (a22 * b23)) + (a23 * b33)) + (a24 * b43));
				HX_STACK_LINE(224)
				te[(int)13] = ((((a21 * b14) + (a22 * b24)) + (a23 * b34)) + (a24 * b44));
				HX_STACK_LINE(224)
				te[(int)2] = ((((a31 * b11) + (a32 * b21)) + (a33 * b31)) + (a34 * b41));
				HX_STACK_LINE(224)
				te[(int)6] = ((((a31 * b12) + (a32 * b22)) + (a33 * b32)) + (a34 * b42));
				HX_STACK_LINE(224)
				te[(int)10] = ((((a31 * b13) + (a32 * b23)) + (a33 * b33)) + (a34 * b43));
				HX_STACK_LINE(224)
				te[(int)14] = ((((a31 * b14) + (a32 * b24)) + (a33 * b34)) + (a34 * b44));
				HX_STACK_LINE(224)
				te[(int)3] = ((((a41 * b11) + (a42 * b21)) + (a43 * b31)) + (a44 * b41));
				HX_STACK_LINE(224)
				te[(int)7] = ((((a41 * b12) + (a42 * b22)) + (a43 * b32)) + (a44 * b42));
				HX_STACK_LINE(224)
				te[(int)11] = ((((a41 * b13) + (a42 * b23)) + (a43 * b33)) + (a44 * b43));
				HX_STACK_LINE(224)
				te[(int)15] = ((((a41 * b14) + (a42 * b24)) + (a43 * b34)) + (a44 * b44));
				HX_STACK_LINE(224)
				_this;
			}
		}
		HX_STACK_LINE(226)
		{
			HX_STACK_LINE(226)
			::phoenix::Matrix _this = this->local->matrix;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(226)
			::phoenix::Vector _v = this->local->pos;		HX_STACK_VAR(_v,"_v");
			HX_STACK_LINE(226)
			Array< Float > te = _this->elements;		HX_STACK_VAR(te,"te");
			HX_STACK_LINE(226)
			te[(int)12] = _v->x;
			HX_STACK_LINE(226)
			te[(int)13] = _v->y;
			HX_STACK_LINE(226)
			te[(int)14] = _v->z;
			HX_STACK_LINE(226)
			_this;
		}
		HX_STACK_LINE(229)
		{
			HX_STACK_LINE(229)
			::phoenix::Matrix _this = this->local->matrix;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(229)
			{
				HX_STACK_LINE(229)
				Array< Float > ae = _this->elements;		HX_STACK_VAR(ae,"ae");
				HX_STACK_LINE(229)
				Array< Float > be = this->_origin_undo_matrix->elements;		HX_STACK_VAR(be,"be");
				HX_STACK_LINE(229)
				Array< Float > te = _this->elements;		HX_STACK_VAR(te,"te");
				HX_STACK_LINE(229)
				Float a11 = ae->__get((int)0);		HX_STACK_VAR(a11,"a11");
				HX_STACK_LINE(229)
				Float a12 = ae->__get((int)4);		HX_STACK_VAR(a12,"a12");
				HX_STACK_LINE(229)
				Float a13 = ae->__get((int)8);		HX_STACK_VAR(a13,"a13");
				HX_STACK_LINE(229)
				Float a14 = ae->__get((int)12);		HX_STACK_VAR(a14,"a14");
				HX_STACK_LINE(229)
				Float a21 = ae->__get((int)1);		HX_STACK_VAR(a21,"a21");
				HX_STACK_LINE(229)
				Float a22 = ae->__get((int)5);		HX_STACK_VAR(a22,"a22");
				HX_STACK_LINE(229)
				Float a23 = ae->__get((int)9);		HX_STACK_VAR(a23,"a23");
				HX_STACK_LINE(229)
				Float a24 = ae->__get((int)13);		HX_STACK_VAR(a24,"a24");
				HX_STACK_LINE(229)
				Float a31 = ae->__get((int)2);		HX_STACK_VAR(a31,"a31");
				HX_STACK_LINE(229)
				Float a32 = ae->__get((int)6);		HX_STACK_VAR(a32,"a32");
				HX_STACK_LINE(229)
				Float a33 = ae->__get((int)10);		HX_STACK_VAR(a33,"a33");
				HX_STACK_LINE(229)
				Float a34 = ae->__get((int)14);		HX_STACK_VAR(a34,"a34");
				HX_STACK_LINE(229)
				Float a41 = ae->__get((int)3);		HX_STACK_VAR(a41,"a41");
				HX_STACK_LINE(229)
				Float a42 = ae->__get((int)7);		HX_STACK_VAR(a42,"a42");
				HX_STACK_LINE(229)
				Float a43 = ae->__get((int)11);		HX_STACK_VAR(a43,"a43");
				HX_STACK_LINE(229)
				Float a44 = ae->__get((int)15);		HX_STACK_VAR(a44,"a44");
				HX_STACK_LINE(229)
				Float b11 = be->__get((int)0);		HX_STACK_VAR(b11,"b11");
				HX_STACK_LINE(229)
				Float b12 = be->__get((int)4);		HX_STACK_VAR(b12,"b12");
				HX_STACK_LINE(229)
				Float b13 = be->__get((int)8);		HX_STACK_VAR(b13,"b13");
				HX_STACK_LINE(229)
				Float b14 = be->__get((int)12);		HX_STACK_VAR(b14,"b14");
				HX_STACK_LINE(229)
				Float b21 = be->__get((int)1);		HX_STACK_VAR(b21,"b21");
				HX_STACK_LINE(229)
				Float b22 = be->__get((int)5);		HX_STACK_VAR(b22,"b22");
				HX_STACK_LINE(229)
				Float b23 = be->__get((int)9);		HX_STACK_VAR(b23,"b23");
				HX_STACK_LINE(229)
				Float b24 = be->__get((int)13);		HX_STACK_VAR(b24,"b24");
				HX_STACK_LINE(229)
				Float b31 = be->__get((int)2);		HX_STACK_VAR(b31,"b31");
				HX_STACK_LINE(229)
				Float b32 = be->__get((int)6);		HX_STACK_VAR(b32,"b32");
				HX_STACK_LINE(229)
				Float b33 = be->__get((int)10);		HX_STACK_VAR(b33,"b33");
				HX_STACK_LINE(229)
				Float b34 = be->__get((int)14);		HX_STACK_VAR(b34,"b34");
				HX_STACK_LINE(229)
				Float b41 = be->__get((int)3);		HX_STACK_VAR(b41,"b41");
				HX_STACK_LINE(229)
				Float b42 = be->__get((int)7);		HX_STACK_VAR(b42,"b42");
				HX_STACK_LINE(229)
				Float b43 = be->__get((int)11);		HX_STACK_VAR(b43,"b43");
				HX_STACK_LINE(229)
				Float b44 = be->__get((int)15);		HX_STACK_VAR(b44,"b44");
				HX_STACK_LINE(229)
				te[(int)0] = ((((a11 * b11) + (a12 * b21)) + (a13 * b31)) + (a14 * b41));
				HX_STACK_LINE(229)
				te[(int)4] = ((((a11 * b12) + (a12 * b22)) + (a13 * b32)) + (a14 * b42));
				HX_STACK_LINE(229)
				te[(int)8] = ((((a11 * b13) + (a12 * b23)) + (a13 * b33)) + (a14 * b43));
				HX_STACK_LINE(229)
				te[(int)12] = ((((a11 * b14) + (a12 * b24)) + (a13 * b34)) + (a14 * b44));
				HX_STACK_LINE(229)
				te[(int)1] = ((((a21 * b11) + (a22 * b21)) + (a23 * b31)) + (a24 * b41));
				HX_STACK_LINE(229)
				te[(int)5] = ((((a21 * b12) + (a22 * b22)) + (a23 * b32)) + (a24 * b42));
				HX_STACK_LINE(229)
				te[(int)9] = ((((a21 * b13) + (a22 * b23)) + (a23 * b33)) + (a24 * b43));
				HX_STACK_LINE(229)
				te[(int)13] = ((((a21 * b14) + (a22 * b24)) + (a23 * b34)) + (a24 * b44));
				HX_STACK_LINE(229)
				te[(int)2] = ((((a31 * b11) + (a32 * b21)) + (a33 * b31)) + (a34 * b41));
				HX_STACK_LINE(229)
				te[(int)6] = ((((a31 * b12) + (a32 * b22)) + (a33 * b32)) + (a34 * b42));
				HX_STACK_LINE(229)
				te[(int)10] = ((((a31 * b13) + (a32 * b23)) + (a33 * b33)) + (a34 * b43));
				HX_STACK_LINE(229)
				te[(int)14] = ((((a31 * b14) + (a32 * b24)) + (a33 * b34)) + (a34 * b44));
				HX_STACK_LINE(229)
				te[(int)3] = ((((a41 * b11) + (a42 * b21)) + (a43 * b31)) + (a44 * b41));
				HX_STACK_LINE(229)
				te[(int)7] = ((((a41 * b12) + (a42 * b22)) + (a43 * b32)) + (a44 * b42));
				HX_STACK_LINE(229)
				te[(int)11] = ((((a41 * b13) + (a42 * b23)) + (a43 * b33)) + (a44 * b43));
				HX_STACK_LINE(229)
				te[(int)15] = ((((a41 * b14) + (a42 * b24)) + (a43 * b34)) + (a44 * b44));
				HX_STACK_LINE(229)
				_this;
			}
		}
		HX_STACK_LINE(232)
		if (((this->parent != null()))){
			HX_STACK_LINE(233)
			::phoenix::Spatial _this = this->get_world();		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(233)
			::phoenix::Matrix _m;		HX_STACK_VAR(_m,"_m");
			HX_STACK_LINE(233)
			{
				HX_STACK_LINE(233)
				::phoenix::Matrix _this1;		HX_STACK_VAR(_this1,"_this1");
				HX_STACK_LINE(233)
				{
					HX_STACK_LINE(233)
					::phoenix::Spatial _this2 = this->get_world();		HX_STACK_VAR(_this2,"_this2");
					HX_STACK_LINE(233)
					_this1 = _this2->matrix;
				}
				HX_STACK_LINE(233)
				::phoenix::Matrix _a;		HX_STACK_VAR(_a,"_a");
				HX_STACK_LINE(233)
				{
					HX_STACK_LINE(233)
					::phoenix::Spatial _this2 = this->parent->get_world();		HX_STACK_VAR(_this2,"_this2");
					HX_STACK_LINE(233)
					_a = _this2->matrix;
				}
				HX_STACK_LINE(233)
				Array< Float > ae = _a->elements;		HX_STACK_VAR(ae,"ae");
				HX_STACK_LINE(233)
				Array< Float > be = this->local->matrix->elements;		HX_STACK_VAR(be,"be");
				HX_STACK_LINE(233)
				Array< Float > te = _this1->elements;		HX_STACK_VAR(te,"te");
				HX_STACK_LINE(233)
				Float a11 = ae->__get((int)0);		HX_STACK_VAR(a11,"a11");
				HX_STACK_LINE(233)
				Float a12 = ae->__get((int)4);		HX_STACK_VAR(a12,"a12");
				HX_STACK_LINE(233)
				Float a13 = ae->__get((int)8);		HX_STACK_VAR(a13,"a13");
				HX_STACK_LINE(233)
				Float a14 = ae->__get((int)12);		HX_STACK_VAR(a14,"a14");
				HX_STACK_LINE(233)
				Float a21 = ae->__get((int)1);		HX_STACK_VAR(a21,"a21");
				HX_STACK_LINE(233)
				Float a22 = ae->__get((int)5);		HX_STACK_VAR(a22,"a22");
				HX_STACK_LINE(233)
				Float a23 = ae->__get((int)9);		HX_STACK_VAR(a23,"a23");
				HX_STACK_LINE(233)
				Float a24 = ae->__get((int)13);		HX_STACK_VAR(a24,"a24");
				HX_STACK_LINE(233)
				Float a31 = ae->__get((int)2);		HX_STACK_VAR(a31,"a31");
				HX_STACK_LINE(233)
				Float a32 = ae->__get((int)6);		HX_STACK_VAR(a32,"a32");
				HX_STACK_LINE(233)
				Float a33 = ae->__get((int)10);		HX_STACK_VAR(a33,"a33");
				HX_STACK_LINE(233)
				Float a34 = ae->__get((int)14);		HX_STACK_VAR(a34,"a34");
				HX_STACK_LINE(233)
				Float a41 = ae->__get((int)3);		HX_STACK_VAR(a41,"a41");
				HX_STACK_LINE(233)
				Float a42 = ae->__get((int)7);		HX_STACK_VAR(a42,"a42");
				HX_STACK_LINE(233)
				Float a43 = ae->__get((int)11);		HX_STACK_VAR(a43,"a43");
				HX_STACK_LINE(233)
				Float a44 = ae->__get((int)15);		HX_STACK_VAR(a44,"a44");
				HX_STACK_LINE(233)
				Float b11 = be->__get((int)0);		HX_STACK_VAR(b11,"b11");
				HX_STACK_LINE(233)
				Float b12 = be->__get((int)4);		HX_STACK_VAR(b12,"b12");
				HX_STACK_LINE(233)
				Float b13 = be->__get((int)8);		HX_STACK_VAR(b13,"b13");
				HX_STACK_LINE(233)
				Float b14 = be->__get((int)12);		HX_STACK_VAR(b14,"b14");
				HX_STACK_LINE(233)
				Float b21 = be->__get((int)1);		HX_STACK_VAR(b21,"b21");
				HX_STACK_LINE(233)
				Float b22 = be->__get((int)5);		HX_STACK_VAR(b22,"b22");
				HX_STACK_LINE(233)
				Float b23 = be->__get((int)9);		HX_STACK_VAR(b23,"b23");
				HX_STACK_LINE(233)
				Float b24 = be->__get((int)13);		HX_STACK_VAR(b24,"b24");
				HX_STACK_LINE(233)
				Float b31 = be->__get((int)2);		HX_STACK_VAR(b31,"b31");
				HX_STACK_LINE(233)
				Float b32 = be->__get((int)6);		HX_STACK_VAR(b32,"b32");
				HX_STACK_LINE(233)
				Float b33 = be->__get((int)10);		HX_STACK_VAR(b33,"b33");
				HX_STACK_LINE(233)
				Float b34 = be->__get((int)14);		HX_STACK_VAR(b34,"b34");
				HX_STACK_LINE(233)
				Float b41 = be->__get((int)3);		HX_STACK_VAR(b41,"b41");
				HX_STACK_LINE(233)
				Float b42 = be->__get((int)7);		HX_STACK_VAR(b42,"b42");
				HX_STACK_LINE(233)
				Float b43 = be->__get((int)11);		HX_STACK_VAR(b43,"b43");
				HX_STACK_LINE(233)
				Float b44 = be->__get((int)15);		HX_STACK_VAR(b44,"b44");
				HX_STACK_LINE(233)
				te[(int)0] = ((((a11 * b11) + (a12 * b21)) + (a13 * b31)) + (a14 * b41));
				HX_STACK_LINE(233)
				te[(int)4] = ((((a11 * b12) + (a12 * b22)) + (a13 * b32)) + (a14 * b42));
				HX_STACK_LINE(233)
				te[(int)8] = ((((a11 * b13) + (a12 * b23)) + (a13 * b33)) + (a14 * b43));
				HX_STACK_LINE(233)
				te[(int)12] = ((((a11 * b14) + (a12 * b24)) + (a13 * b34)) + (a14 * b44));
				HX_STACK_LINE(233)
				te[(int)1] = ((((a21 * b11) + (a22 * b21)) + (a23 * b31)) + (a24 * b41));
				HX_STACK_LINE(233)
				te[(int)5] = ((((a21 * b12) + (a22 * b22)) + (a23 * b32)) + (a24 * b42));
				HX_STACK_LINE(233)
				te[(int)9] = ((((a21 * b13) + (a22 * b23)) + (a23 * b33)) + (a24 * b43));
				HX_STACK_LINE(233)
				te[(int)13] = ((((a21 * b14) + (a22 * b24)) + (a23 * b34)) + (a24 * b44));
				HX_STACK_LINE(233)
				te[(int)2] = ((((a31 * b11) + (a32 * b21)) + (a33 * b31)) + (a34 * b41));
				HX_STACK_LINE(233)
				te[(int)6] = ((((a31 * b12) + (a32 * b22)) + (a33 * b32)) + (a34 * b42));
				HX_STACK_LINE(233)
				te[(int)10] = ((((a31 * b13) + (a32 * b23)) + (a33 * b33)) + (a34 * b43));
				HX_STACK_LINE(233)
				te[(int)14] = ((((a31 * b14) + (a32 * b24)) + (a33 * b34)) + (a34 * b44));
				HX_STACK_LINE(233)
				te[(int)3] = ((((a41 * b11) + (a42 * b21)) + (a43 * b31)) + (a44 * b41));
				HX_STACK_LINE(233)
				te[(int)7] = ((((a41 * b12) + (a42 * b22)) + (a43 * b32)) + (a44 * b42));
				HX_STACK_LINE(233)
				te[(int)11] = ((((a41 * b13) + (a42 * b23)) + (a43 * b33)) + (a44 * b43));
				HX_STACK_LINE(233)
				te[(int)15] = ((((a41 * b14) + (a42 * b24)) + (a43 * b34)) + (a44 * b44));
				HX_STACK_LINE(233)
				_m = _this1;
			}
			HX_STACK_LINE(233)
			_this->matrix = _m;
			HX_STACK_LINE(233)
			if (((_m != null()))){
				HX_STACK_LINE(233)
				::snow::platform::native::utils::Float32Array _g;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(233)
				{
					HX_STACK_LINE(233)
					::phoenix::Matrix _this1 = _this->matrix;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(233)
					{
						HX_STACK_LINE(233)
						::snow::platform::native::utils::Float32Array _this2 = _this1->_float32array;		HX_STACK_VAR(_this2,"_this2");
						HX_STACK_LINE(233)
						Dynamic bufferOrArray = _this1->elements;		HX_STACK_VAR(bufferOrArray,"bufferOrArray");
						HX_STACK_LINE(233)
						int offset = (int)0;		HX_STACK_VAR(offset,"offset");
						HX_STACK_LINE(233)
						if ((::Std_obj::is(bufferOrArray,hx::ClassOf< Array<int> >()))){
							HX_STACK_LINE(233)
							Array< Float > floats = bufferOrArray;		HX_STACK_VAR(floats,"floats");
							HX_STACK_LINE(233)
							{
								HX_STACK_LINE(233)
								int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
								HX_STACK_LINE(233)
								int _g2 = floats->length;		HX_STACK_VAR(_g2,"_g2");
								HX_STACK_LINE(233)
								while((true)){
									HX_STACK_LINE(233)
									if ((!(((_g1 < _g2))))){
										HX_STACK_LINE(233)
										break;
									}
									HX_STACK_LINE(233)
									int i = (_g1)++;		HX_STACK_VAR(i,"i");
									HX_STACK_LINE(233)
									::__hxcpp_memory_set_float(_this2->bytes,(((int((i + offset)) << int((int)2))) + _this2->byteOffset),floats->__get(i));
								}
							}
						}
						else{
							HX_STACK_LINE(233)
							if ((::Std_obj::is(bufferOrArray,hx::ClassOf< ::snow::platform::native::utils::Float32Array >()))){
								HX_STACK_LINE(233)
								::snow::platform::native::utils::Float32Array floats = bufferOrArray;		HX_STACK_VAR(floats,"floats");
								HX_STACK_LINE(233)
								{
									HX_STACK_LINE(233)
									int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
									HX_STACK_LINE(233)
									int _g2 = floats->length;		HX_STACK_VAR(_g2,"_g2");
									HX_STACK_LINE(233)
									while((true)){
										HX_STACK_LINE(233)
										if ((!(((_g1 < _g2))))){
											HX_STACK_LINE(233)
											break;
										}
										HX_STACK_LINE(233)
										int i = (_g1)++;		HX_STACK_VAR(i,"i");
										HX_STACK_LINE(233)
										::__hxcpp_memory_set_float(_this2->bytes,(((int((i + offset)) << int((int)2))) + _this2->byteOffset),floats->__get(i));
									}
								}
							}
							else{
								HX_STACK_LINE(233)
								HX_STACK_DO_THROW(HX_CSTRING("Invalid input buffer"));
							}
						}
					}
					HX_STACK_LINE(233)
					_g = ::snow::platform::native::utils::Float32Array_obj::__new(_this1->_float32array,null(),null());
				}
				HX_STACK_LINE(233)
				_this->floats = _g;
			}
			HX_STACK_LINE(233)
			_this->matrix;
		}
		else{
			HX_STACK_LINE(235)
			::phoenix::Spatial _this = this->get_world();		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(235)
			::phoenix::Matrix _m;		HX_STACK_VAR(_m,"_m");
			HX_STACK_LINE(235)
			{
				HX_STACK_LINE(235)
				Array< Float > te = this->local->matrix->elements;		HX_STACK_VAR(te,"te");
				HX_STACK_LINE(235)
				_m = ::phoenix::Matrix_obj::__new(te->__get((int)0),te->__get((int)4),te->__get((int)8),te->__get((int)12),te->__get((int)1),te->__get((int)5),te->__get((int)9),te->__get((int)13),te->__get((int)2),te->__get((int)6),te->__get((int)10),te->__get((int)14),te->__get((int)3),te->__get((int)7),te->__get((int)11),te->__get((int)15));
			}
			HX_STACK_LINE(235)
			_this->matrix = _m;
			HX_STACK_LINE(235)
			if (((_m != null()))){
				HX_STACK_LINE(235)
				::snow::platform::native::utils::Float32Array _g1;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(235)
				{
					HX_STACK_LINE(235)
					::phoenix::Matrix _this1 = _this->matrix;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(235)
					{
						HX_STACK_LINE(235)
						::snow::platform::native::utils::Float32Array _this2 = _this1->_float32array;		HX_STACK_VAR(_this2,"_this2");
						HX_STACK_LINE(235)
						Dynamic bufferOrArray = _this1->elements;		HX_STACK_VAR(bufferOrArray,"bufferOrArray");
						HX_STACK_LINE(235)
						int offset = (int)0;		HX_STACK_VAR(offset,"offset");
						HX_STACK_LINE(235)
						if ((::Std_obj::is(bufferOrArray,hx::ClassOf< Array<int> >()))){
							HX_STACK_LINE(235)
							Array< Float > floats = bufferOrArray;		HX_STACK_VAR(floats,"floats");
							HX_STACK_LINE(235)
							{
								HX_STACK_LINE(235)
								int _g11 = (int)0;		HX_STACK_VAR(_g11,"_g11");
								HX_STACK_LINE(235)
								int _g = floats->length;		HX_STACK_VAR(_g,"_g");
								HX_STACK_LINE(235)
								while((true)){
									HX_STACK_LINE(235)
									if ((!(((_g11 < _g))))){
										HX_STACK_LINE(235)
										break;
									}
									HX_STACK_LINE(235)
									int i = (_g11)++;		HX_STACK_VAR(i,"i");
									HX_STACK_LINE(235)
									::__hxcpp_memory_set_float(_this2->bytes,(((int((i + offset)) << int((int)2))) + _this2->byteOffset),floats->__get(i));
								}
							}
						}
						else{
							HX_STACK_LINE(235)
							if ((::Std_obj::is(bufferOrArray,hx::ClassOf< ::snow::platform::native::utils::Float32Array >()))){
								HX_STACK_LINE(235)
								::snow::platform::native::utils::Float32Array floats = bufferOrArray;		HX_STACK_VAR(floats,"floats");
								HX_STACK_LINE(235)
								{
									HX_STACK_LINE(235)
									int _g11 = (int)0;		HX_STACK_VAR(_g11,"_g11");
									HX_STACK_LINE(235)
									int _g = floats->length;		HX_STACK_VAR(_g,"_g");
									HX_STACK_LINE(235)
									while((true)){
										HX_STACK_LINE(235)
										if ((!(((_g11 < _g))))){
											HX_STACK_LINE(235)
											break;
										}
										HX_STACK_LINE(235)
										int i = (_g11)++;		HX_STACK_VAR(i,"i");
										HX_STACK_LINE(235)
										::__hxcpp_memory_set_float(_this2->bytes,(((int((i + offset)) << int((int)2))) + _this2->byteOffset),floats->__get(i));
									}
								}
							}
							else{
								HX_STACK_LINE(235)
								HX_STACK_DO_THROW(HX_CSTRING("Invalid input buffer"));
							}
						}
					}
					HX_STACK_LINE(235)
					_g1 = ::snow::platform::native::utils::Float32Array_obj::__new(_this1->_float32array,null(),null());
				}
				HX_STACK_LINE(235)
				_this->floats = _g1;
			}
			HX_STACK_LINE(235)
			_this->matrix;
		}
		HX_STACK_LINE(241)
		{
			HX_STACK_LINE(241)
			::phoenix::Spatial _this = this->get_world();		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(241)
			if ((_this->auto_decompose)){
				HX_STACK_LINE(241)
				::phoenix::MatrixTransform _transform;		HX_STACK_VAR(_transform,"_transform");
				HX_STACK_LINE(241)
				{
					HX_STACK_LINE(241)
					::phoenix::Matrix _this1 = _this->matrix;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(241)
					::phoenix::Vector _position = null();		HX_STACK_VAR(_position,"_position");
					HX_STACK_LINE(241)
					::phoenix::Quaternion _quaternion = null();		HX_STACK_VAR(_quaternion,"_quaternion");
					HX_STACK_LINE(241)
					::phoenix::Vector _scale = null();		HX_STACK_VAR(_scale,"_scale");
					HX_STACK_LINE(241)
					Array< Float > te = _this1->elements;		HX_STACK_VAR(te,"te");
					HX_STACK_LINE(241)
					::phoenix::Matrix matrix = ::phoenix::Matrix_obj::__new(null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(matrix,"matrix");
					HX_STACK_LINE(241)
					Float _ax_x = te->__get((int)0);		HX_STACK_VAR(_ax_x,"_ax_x");
					HX_STACK_LINE(241)
					Float _ax_y = te->__get((int)1);		HX_STACK_VAR(_ax_y,"_ax_y");
					HX_STACK_LINE(241)
					Float _ax_z = te->__get((int)2);		HX_STACK_VAR(_ax_z,"_ax_z");
					HX_STACK_LINE(241)
					Float _ay_x = te->__get((int)4);		HX_STACK_VAR(_ay_x,"_ay_x");
					HX_STACK_LINE(241)
					Float _ay_y = te->__get((int)5);		HX_STACK_VAR(_ay_y,"_ay_y");
					HX_STACK_LINE(241)
					Float _ay_z = te->__get((int)6);		HX_STACK_VAR(_ay_z,"_ay_z");
					HX_STACK_LINE(241)
					Float _az_x = te->__get((int)8);		HX_STACK_VAR(_az_x,"_az_x");
					HX_STACK_LINE(241)
					Float _az_y = te->__get((int)9);		HX_STACK_VAR(_az_y,"_az_y");
					HX_STACK_LINE(241)
					Float _az_z = te->__get((int)10);		HX_STACK_VAR(_az_z,"_az_z");
					HX_STACK_LINE(241)
					Float _ax_length = ::Math_obj::sqrt((((_ax_x * _ax_x) + (_ax_y * _ax_y)) + (_ax_z * _ax_z)));		HX_STACK_VAR(_ax_length,"_ax_length");
					HX_STACK_LINE(241)
					Float _ay_length = ::Math_obj::sqrt((((_ay_x * _ay_x) + (_ay_y * _ay_y)) + (_ay_z * _ay_z)));		HX_STACK_VAR(_ay_length,"_ay_length");
					HX_STACK_LINE(241)
					Float _az_length = ::Math_obj::sqrt((((_az_x * _az_x) + (_az_y * _az_y)) + (_az_z * _az_z)));		HX_STACK_VAR(_az_length,"_az_length");
					HX_STACK_LINE(241)
					if (((_quaternion == null()))){
						HX_STACK_LINE(241)
						::phoenix::Quaternion _g2 = ::phoenix::Quaternion_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(241)
						_quaternion = _g2;
					}
					HX_STACK_LINE(241)
					if (((_position == null()))){
						HX_STACK_LINE(241)
						::phoenix::Vector _g3 = ::phoenix::Vector_obj::__new(te->__get((int)12),te->__get((int)13),te->__get((int)14),null());		HX_STACK_VAR(_g3,"_g3");
						HX_STACK_LINE(241)
						_position = _g3;
					}
					else{
						HX_STACK_LINE(241)
						{
							HX_STACK_LINE(241)
							Float _x = te->__get((int)12);		HX_STACK_VAR(_x,"_x");
							HX_STACK_LINE(241)
							_position->x = _x;
							HX_STACK_LINE(241)
							if ((_position->_construct)){
								HX_STACK_LINE(241)
								_position->x;
							}
							else{
								HX_STACK_LINE(241)
								if (((bool((_position->listen_x != null())) && bool(!(_position->ignore_listeners))))){
									HX_STACK_LINE(241)
									_position->listen_x(_x);
								}
								HX_STACK_LINE(241)
								_position->x;
							}
						}
						HX_STACK_LINE(241)
						{
							HX_STACK_LINE(241)
							Float _y = te->__get((int)13);		HX_STACK_VAR(_y,"_y");
							HX_STACK_LINE(241)
							_position->y = _y;
							HX_STACK_LINE(241)
							if ((_position->_construct)){
								HX_STACK_LINE(241)
								_position->y;
							}
							else{
								HX_STACK_LINE(241)
								if (((bool((_position->listen_y != null())) && bool(!(_position->ignore_listeners))))){
									HX_STACK_LINE(241)
									_position->listen_y(_y);
								}
								HX_STACK_LINE(241)
								_position->y;
							}
						}
						HX_STACK_LINE(241)
						{
							HX_STACK_LINE(241)
							Float _z = te->__get((int)14);		HX_STACK_VAR(_z,"_z");
							HX_STACK_LINE(241)
							_position->z = _z;
							HX_STACK_LINE(241)
							if ((_position->_construct)){
								HX_STACK_LINE(241)
								_position->z;
							}
							else{
								HX_STACK_LINE(241)
								if (((bool((_position->listen_z != null())) && bool(!(_position->ignore_listeners))))){
									HX_STACK_LINE(241)
									_position->listen_z(_z);
								}
								HX_STACK_LINE(241)
								_position->z;
							}
						}
					}
					HX_STACK_LINE(241)
					if (((_scale == null()))){
						HX_STACK_LINE(241)
						::phoenix::Vector _g4 = ::phoenix::Vector_obj::__new(_ax_length,_ay_length,_az_length,null());		HX_STACK_VAR(_g4,"_g4");
						HX_STACK_LINE(241)
						_scale = _g4;
					}
					else{
						HX_STACK_LINE(241)
						{
							HX_STACK_LINE(241)
							_scale->x = _ax_length;
							HX_STACK_LINE(241)
							if ((_scale->_construct)){
								HX_STACK_LINE(241)
								_scale->x;
							}
							else{
								HX_STACK_LINE(241)
								if (((bool((_scale->listen_x != null())) && bool(!(_scale->ignore_listeners))))){
									HX_STACK_LINE(241)
									_scale->listen_x(_ax_length);
								}
								HX_STACK_LINE(241)
								_scale->x;
							}
						}
						HX_STACK_LINE(241)
						{
							HX_STACK_LINE(241)
							_scale->y = _ay_length;
							HX_STACK_LINE(241)
							if ((_scale->_construct)){
								HX_STACK_LINE(241)
								_scale->y;
							}
							else{
								HX_STACK_LINE(241)
								if (((bool((_scale->listen_y != null())) && bool(!(_scale->ignore_listeners))))){
									HX_STACK_LINE(241)
									_scale->listen_y(_ay_length);
								}
								HX_STACK_LINE(241)
								_scale->y;
							}
						}
						HX_STACK_LINE(241)
						{
							HX_STACK_LINE(241)
							_scale->z = _az_length;
							HX_STACK_LINE(241)
							if ((_scale->_construct)){
								HX_STACK_LINE(241)
								_scale->z;
							}
							else{
								HX_STACK_LINE(241)
								if (((bool((_scale->listen_z != null())) && bool(!(_scale->ignore_listeners))))){
									HX_STACK_LINE(241)
									_scale->listen_z(_az_length);
								}
								HX_STACK_LINE(241)
								_scale->z;
							}
						}
					}
					HX_STACK_LINE(241)
					Array< Float > _g5 = _this1->elements->concat(Array_obj< Float >::__new());		HX_STACK_VAR(_g5,"_g5");
					HX_STACK_LINE(241)
					matrix->elements = _g5;
					HX_STACK_LINE(241)
					Array< Float > me = matrix->elements;		HX_STACK_VAR(me,"me");
					HX_STACK_LINE(241)
					hx::DivEq(me[(int)0],_ax_length);
					HX_STACK_LINE(241)
					hx::DivEq(me[(int)1],_ax_length);
					HX_STACK_LINE(241)
					hx::DivEq(me[(int)2],_ax_length);
					HX_STACK_LINE(241)
					hx::DivEq(me[(int)4],_ay_length);
					HX_STACK_LINE(241)
					hx::DivEq(me[(int)5],_ay_length);
					HX_STACK_LINE(241)
					hx::DivEq(me[(int)6],_ay_length);
					HX_STACK_LINE(241)
					hx::DivEq(me[(int)8],_az_length);
					HX_STACK_LINE(241)
					hx::DivEq(me[(int)9],_az_length);
					HX_STACK_LINE(241)
					hx::DivEq(me[(int)10],_az_length);
					HX_STACK_LINE(241)
					_quaternion->setFromRotationMatrix(matrix);
					HX_STACK_LINE(241)
					if (((_this1->_transform == null()))){
						HX_STACK_LINE(241)
						::phoenix::MatrixTransform _g6 = ::phoenix::MatrixTransform_obj::__new(_position,_quaternion,_scale);		HX_STACK_VAR(_g6,"_g6");
						HX_STACK_LINE(241)
						_this1->_transform = _g6;
					}
					else{
						HX_STACK_LINE(241)
						_this1->_transform->pos = _position;
						HX_STACK_LINE(241)
						_this1->_transform->rotation = _quaternion;
						HX_STACK_LINE(241)
						_this1->_transform->scale = _scale;
					}
					HX_STACK_LINE(241)
					_transform = _this1->_transform;
				}
				HX_STACK_LINE(241)
				{
					HX_STACK_LINE(241)
					::phoenix::Vector _p = _transform->pos;		HX_STACK_VAR(_p,"_p");
					HX_STACK_LINE(241)
					_this->pos = _p;
					HX_STACK_LINE(241)
					if (((_p != null()))){
						HX_STACK_LINE(241)
						::phoenix::Vector_obj::Listen(_this->pos,_this->_pos_change_dyn());
						HX_STACK_LINE(241)
						if (((bool((_this->pos_changed != null())) && bool(!(_this->ignore_listeners))))){
							HX_STACK_LINE(241)
							_this->pos_changed(_this->pos);
						}
					}
					HX_STACK_LINE(241)
					_this->pos;
				}
				HX_STACK_LINE(241)
				{
					HX_STACK_LINE(241)
					::phoenix::Quaternion _r = _transform->rotation;		HX_STACK_VAR(_r,"_r");
					HX_STACK_LINE(241)
					_this->rotation = _r;
					HX_STACK_LINE(241)
					if (((_r != null()))){
						HX_STACK_LINE(241)
						{
							HX_STACK_LINE(241)
							::phoenix::Quaternion _q = _this->rotation;		HX_STACK_VAR(_q,"_q");
							HX_STACK_LINE(241)
							Dynamic listener = _this->_rotation_change_dyn();		HX_STACK_VAR(listener,"listener");
							HX_STACK_LINE(241)
							_q->listen_x = listener;
							HX_STACK_LINE(241)
							_q->listen_y = listener;
							HX_STACK_LINE(241)
							_q->listen_z = listener;
							HX_STACK_LINE(241)
							_q->listen_w = listener;
						}
						HX_STACK_LINE(241)
						if (((bool((_this->rotation_changed != null())) && bool(!(_this->ignore_listeners))))){
							HX_STACK_LINE(241)
							_this->rotation_changed(_this->rotation);
						}
					}
					HX_STACK_LINE(241)
					_this->rotation;
				}
				HX_STACK_LINE(241)
				{
					HX_STACK_LINE(241)
					::phoenix::Vector _s = _transform->scale;		HX_STACK_VAR(_s,"_s");
					HX_STACK_LINE(241)
					_this->scale = _s;
					HX_STACK_LINE(241)
					if (((_s != null()))){
						HX_STACK_LINE(241)
						::phoenix::Vector_obj::Listen(_this->scale,_this->_scale_change_dyn());
						HX_STACK_LINE(241)
						if (((bool((_this->scale_changed != null())) && bool(!(_this->ignore_listeners))))){
							HX_STACK_LINE(241)
							_this->scale_changed(_this->scale);
						}
					}
					HX_STACK_LINE(241)
					_this->scale;
				}
			}
			HX_STACK_LINE(241)
			_this;
		}
		HX_STACK_LINE(244)
		{
			HX_STACK_LINE(244)
			this->dirty = false;
			HX_STACK_LINE(244)
			if (((bool((bool((bool(this->dirty) && bool(!(this->_setup)))) && bool((this->_dirty_handlers != null())))) && bool((this->_dirty_handlers->__Field(HX_CSTRING("length"),true) > (int)0))))){
				HX_STACK_LINE(244)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(244)
				Dynamic _g1 = this->_dirty_handlers;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(244)
				while((true)){
					HX_STACK_LINE(244)
					if ((!(((_g < _g1->__Field(HX_CSTRING("length"),true)))))){
						HX_STACK_LINE(244)
						break;
					}
					HX_STACK_LINE(244)
					Dynamic _handler = _g1->__GetItem(_g);		HX_STACK_VAR(_handler,"_handler");
					HX_STACK_LINE(244)
					++(_g);
					HX_STACK_LINE(244)
					if (((_handler != null()))){
						HX_STACK_LINE(244)
						_handler(hx::ObjectPtr<OBJ_>(this)).Cast< Void >();
					}
				}
			}
			HX_STACK_LINE(244)
			this->dirty;
		}
		HX_STACK_LINE(245)
		this->_cleaning = false;
		HX_STACK_LINE(247)
		if (((bool((this->_clean_handlers != null())) && bool((this->_clean_handlers->__Field(HX_CSTRING("length"),true) > (int)0))))){
			HX_STACK_LINE(249)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(249)
			Dynamic _g1 = this->_clean_handlers;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(249)
			while((true)){
				HX_STACK_LINE(249)
				if ((!(((_g < _g1->__Field(HX_CSTRING("length"),true)))))){
					HX_STACK_LINE(249)
					break;
				}
				HX_STACK_LINE(249)
				Dynamic _handler = _g1->__GetItem(_g);		HX_STACK_VAR(_handler,"_handler");
				HX_STACK_LINE(249)
				++(_g);
				HX_STACK_LINE(249)
				if (((_handler != null()))){
					HX_STACK_LINE(249)
					_handler(hx::ObjectPtr<OBJ_>(this)).Cast< Void >();
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Transform_obj,clean,(void))

::String Transform_obj::toString( ){
	HX_STACK_FRAME("phoenix.Transform","toString",0x591e518d,"phoenix.Transform.toString","phoenix/Transform.hx",255,0x44da8ab2)
	HX_STACK_THIS(this)
	HX_STACK_LINE(255)
	return ((HX_CSTRING("Transform (") + this->id) + HX_CSTRING(")"));
}


HX_DEFINE_DYNAMIC_FUNC0(Transform_obj,toString,return )

::phoenix::Vector Transform_obj::get_origin( ){
	HX_STACK_FRAME("phoenix.Transform","get_origin",0x87c2c4d0,"phoenix.Transform.get_origin","phoenix/Transform.hx",260,0x44da8ab2)
	HX_STACK_THIS(this)
	HX_STACK_LINE(260)
	return this->origin;
}


HX_DEFINE_DYNAMIC_FUNC0(Transform_obj,get_origin,return )

::phoenix::Vector Transform_obj::set_origin( ::phoenix::Vector o){
	HX_STACK_FRAME("phoenix.Transform","set_origin",0x8b406344,"phoenix.Transform.set_origin","phoenix/Transform.hx",264,0x44da8ab2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(266)
	{
		HX_STACK_LINE(266)
		this->dirty = true;
		HX_STACK_LINE(266)
		if (((bool((bool((bool(this->dirty) && bool(!(this->_setup)))) && bool((this->_dirty_handlers != null())))) && bool((this->_dirty_handlers->__Field(HX_CSTRING("length"),true) > (int)0))))){
			HX_STACK_LINE(266)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(266)
			Dynamic _g1 = this->_dirty_handlers;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(266)
			while((true)){
				HX_STACK_LINE(266)
				if ((!(((_g < _g1->__Field(HX_CSTRING("length"),true)))))){
					HX_STACK_LINE(266)
					break;
				}
				HX_STACK_LINE(266)
				Dynamic _handler = _g1->__GetItem(_g);		HX_STACK_VAR(_handler,"_handler");
				HX_STACK_LINE(266)
				++(_g);
				HX_STACK_LINE(266)
				if (((_handler != null()))){
					HX_STACK_LINE(266)
					_handler(hx::ObjectPtr<OBJ_>(this)).Cast< Void >();
				}
			}
		}
		HX_STACK_LINE(266)
		this->dirty;
	}
	HX_STACK_LINE(268)
	this->origin = o;
	HX_STACK_LINE(270)
	if (((bool((this->_origin_handlers != null())) && bool((this->_origin_handlers->__Field(HX_CSTRING("length"),true) > (int)0))))){
		HX_STACK_LINE(272)
		::phoenix::Vector _origin = this->origin;		HX_STACK_VAR(_origin,"_origin");
		HX_STACK_LINE(272)
		{
			HX_STACK_LINE(272)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(272)
			Dynamic _g1 = this->_origin_handlers;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(272)
			while((true)){
				HX_STACK_LINE(272)
				if ((!(((_g < _g1->__Field(HX_CSTRING("length"),true)))))){
					HX_STACK_LINE(272)
					break;
				}
				HX_STACK_LINE(272)
				Dynamic _handler = _g1->__GetItem(_g);		HX_STACK_VAR(_handler,"_handler");
				HX_STACK_LINE(272)
				++(_g);
				HX_STACK_LINE(272)
				if (((_handler != null()))){
					HX_STACK_LINE(272)
					_handler(_origin).Cast< Void >();
				}
			}
		}
	}
	HX_STACK_LINE(275)
	return this->origin;
}


HX_DEFINE_DYNAMIC_FUNC1(Transform_obj,set_origin,return )

::phoenix::Spatial Transform_obj::set_world( ::phoenix::Spatial w){
	HX_STACK_FRAME("phoenix.Transform","set_world",0x6e4022b4,"phoenix.Transform.set_world","phoenix/Transform.hx",279,0x44da8ab2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(w,"w")
	HX_STACK_LINE(281)
	if (((w == null()))){
		HX_STACK_LINE(282)
		return this->world = w;
	}
	HX_STACK_LINE(285)
	{
		HX_STACK_LINE(285)
		this->dirty = true;
		HX_STACK_LINE(285)
		if (((bool((bool((bool(this->dirty) && bool(!(this->_setup)))) && bool((this->_dirty_handlers != null())))) && bool((this->_dirty_handlers->__Field(HX_CSTRING("length"),true) > (int)0))))){
			HX_STACK_LINE(285)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(285)
			Dynamic _g1 = this->_dirty_handlers;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(285)
			while((true)){
				HX_STACK_LINE(285)
				if ((!(((_g < _g1->__Field(HX_CSTRING("length"),true)))))){
					HX_STACK_LINE(285)
					break;
				}
				HX_STACK_LINE(285)
				Dynamic _handler = _g1->__GetItem(_g);		HX_STACK_VAR(_handler,"_handler");
				HX_STACK_LINE(285)
				++(_g);
				HX_STACK_LINE(285)
				if (((_handler != null()))){
					HX_STACK_LINE(285)
					_handler(hx::ObjectPtr<OBJ_>(this)).Cast< Void >();
				}
			}
		}
		HX_STACK_LINE(285)
		this->dirty;
	}
	HX_STACK_LINE(287)
	return this->world = w;
}


HX_DEFINE_DYNAMIC_FUNC1(Transform_obj,set_world,return )

::phoenix::Transform Transform_obj::get_parent( ){
	HX_STACK_FRAME("phoenix.Transform","get_parent",0x2a3fb014,"phoenix.Transform.get_parent","phoenix/Transform.hx",293,0x44da8ab2)
	HX_STACK_THIS(this)
	HX_STACK_LINE(293)
	return this->parent;
}


HX_DEFINE_DYNAMIC_FUNC0(Transform_obj,get_parent,return )

::phoenix::Transform Transform_obj::set_parent( ::phoenix::Transform _p){
	HX_STACK_FRAME("phoenix.Transform","set_parent",0x2dbd4e88,"phoenix.Transform.set_parent","phoenix/Transform.hx",297,0x44da8ab2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_p,"_p")
	HX_STACK_LINE(299)
	{
		HX_STACK_LINE(299)
		this->dirty = true;
		HX_STACK_LINE(299)
		if (((bool((bool((bool(this->dirty) && bool(!(this->_setup)))) && bool((this->_dirty_handlers != null())))) && bool((this->_dirty_handlers->__Field(HX_CSTRING("length"),true) > (int)0))))){
			HX_STACK_LINE(299)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(299)
			Dynamic _g1 = this->_dirty_handlers;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(299)
			while((true)){
				HX_STACK_LINE(299)
				if ((!(((_g < _g1->__Field(HX_CSTRING("length"),true)))))){
					HX_STACK_LINE(299)
					break;
				}
				HX_STACK_LINE(299)
				Dynamic _handler = _g1->__GetItem(_g);		HX_STACK_VAR(_handler,"_handler");
				HX_STACK_LINE(299)
				++(_g);
				HX_STACK_LINE(299)
				if (((_handler != null()))){
					HX_STACK_LINE(299)
					_handler(hx::ObjectPtr<OBJ_>(this)).Cast< Void >();
				}
			}
		}
		HX_STACK_LINE(299)
		this->dirty;
	}
	HX_STACK_LINE(302)
	if (((this->parent != null()))){
		HX_STACK_LINE(303)
		::phoenix::Transform _this = this->parent;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(303)
		if (((_this->_clean_handlers == null()))){
			HX_STACK_LINE(303)
			false;
		}
		else{
			HX_STACK_LINE(303)
			_this->_clean_handlers->__Field(HX_CSTRING("remove"),true)(this->on_parent_cleaned_dyn());
		}
	}
	HX_STACK_LINE(306)
	this->parent = _p;
	HX_STACK_LINE(308)
	if (((bool((this->_parent_handlers != null())) && bool((this->_parent_handlers->__Field(HX_CSTRING("length"),true) > (int)0))))){
		HX_STACK_LINE(310)
		::phoenix::Transform _parent = this->parent;		HX_STACK_VAR(_parent,"_parent");
		HX_STACK_LINE(310)
		{
			HX_STACK_LINE(310)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(310)
			Dynamic _g1 = this->_parent_handlers;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(310)
			while((true)){
				HX_STACK_LINE(310)
				if ((!(((_g < _g1->__Field(HX_CSTRING("length"),true)))))){
					HX_STACK_LINE(310)
					break;
				}
				HX_STACK_LINE(310)
				Dynamic _handler = _g1->__GetItem(_g);		HX_STACK_VAR(_handler,"_handler");
				HX_STACK_LINE(310)
				++(_g);
				HX_STACK_LINE(310)
				if (((_handler != null()))){
					HX_STACK_LINE(310)
					_handler(_parent).Cast< Void >();
				}
			}
		}
	}
	HX_STACK_LINE(313)
	if (((this->parent != null()))){
		HX_STACK_LINE(316)
		::phoenix::Transform _this = this->parent;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(316)
		if (((_this->_clean_handlers == null()))){
			HX_STACK_LINE(316)
			_this->_clean_handlers = Dynamic( Array_obj<Dynamic>::__new());
		}
		HX_STACK_LINE(316)
		_this->_clean_handlers->__Field(HX_CSTRING("push"),true)(this->on_parent_cleaned_dyn());
	}
	HX_STACK_LINE(319)
	return this->parent;
}


HX_DEFINE_DYNAMIC_FUNC1(Transform_obj,set_parent,return )

::phoenix::Vector Transform_obj::get_pos( ){
	HX_STACK_FRAME("phoenix.Transform","get_pos",0x85121c6a,"phoenix.Transform.get_pos","phoenix/Transform.hx",324,0x44da8ab2)
	HX_STACK_THIS(this)
	HX_STACK_LINE(324)
	return this->local->pos;
}


HX_DEFINE_DYNAMIC_FUNC0(Transform_obj,get_pos,return )

::phoenix::Quaternion Transform_obj::get_rotation( ){
	HX_STACK_FRAME("phoenix.Transform","get_rotation",0x3937f6a8,"phoenix.Transform.get_rotation","phoenix/Transform.hx",328,0x44da8ab2)
	HX_STACK_THIS(this)
	HX_STACK_LINE(328)
	return this->local->rotation;
}


HX_DEFINE_DYNAMIC_FUNC0(Transform_obj,get_rotation,return )

::phoenix::Vector Transform_obj::get_scale( ){
	HX_STACK_FRAME("phoenix.Transform","get_scale",0x35596ee0,"phoenix.Transform.get_scale","phoenix/Transform.hx",332,0x44da8ab2)
	HX_STACK_THIS(this)
	HX_STACK_LINE(332)
	return this->local->scale;
}


HX_DEFINE_DYNAMIC_FUNC0(Transform_obj,get_scale,return )

::phoenix::Vector Transform_obj::set_pos( ::phoenix::Vector value){
	HX_STACK_FRAME("phoenix.Transform","set_pos",0x7813ad76,"phoenix.Transform.set_pos","phoenix/Transform.hx",337,0x44da8ab2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(337)
	::phoenix::Spatial _this = this->local;		HX_STACK_VAR(_this,"_this");
	HX_STACK_LINE(337)
	_this->pos = value;
	HX_STACK_LINE(337)
	if (((value != null()))){
		HX_STACK_LINE(337)
		::phoenix::Vector_obj::Listen(_this->pos,_this->_pos_change_dyn());
		HX_STACK_LINE(337)
		if (((bool((_this->pos_changed != null())) && bool(!(_this->ignore_listeners))))){
			HX_STACK_LINE(337)
			_this->pos_changed(_this->pos);
		}
	}
	HX_STACK_LINE(337)
	return _this->pos;
}


HX_DEFINE_DYNAMIC_FUNC1(Transform_obj,set_pos,return )

::phoenix::Quaternion Transform_obj::set_rotation( ::phoenix::Quaternion value){
	HX_STACK_FRAME("phoenix.Transform","set_rotation",0x4e311a1c,"phoenix.Transform.set_rotation","phoenix/Transform.hx",341,0x44da8ab2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(341)
	::phoenix::Spatial _this = this->local;		HX_STACK_VAR(_this,"_this");
	HX_STACK_LINE(341)
	_this->rotation = value;
	HX_STACK_LINE(341)
	if (((value != null()))){
		HX_STACK_LINE(341)
		{
			HX_STACK_LINE(341)
			::phoenix::Quaternion _q = _this->rotation;		HX_STACK_VAR(_q,"_q");
			HX_STACK_LINE(341)
			Dynamic listener = _this->_rotation_change_dyn();		HX_STACK_VAR(listener,"listener");
			HX_STACK_LINE(341)
			_q->listen_x = listener;
			HX_STACK_LINE(341)
			_q->listen_y = listener;
			HX_STACK_LINE(341)
			_q->listen_z = listener;
			HX_STACK_LINE(341)
			_q->listen_w = listener;
		}
		HX_STACK_LINE(341)
		if (((bool((_this->rotation_changed != null())) && bool(!(_this->ignore_listeners))))){
			HX_STACK_LINE(341)
			_this->rotation_changed(_this->rotation);
		}
	}
	HX_STACK_LINE(341)
	return _this->rotation;
}


HX_DEFINE_DYNAMIC_FUNC1(Transform_obj,set_rotation,return )

::phoenix::Vector Transform_obj::set_scale( ::phoenix::Vector value){
	HX_STACK_FRAME("phoenix.Transform","set_scale",0x18aa5aec,"phoenix.Transform.set_scale","phoenix/Transform.hx",345,0x44da8ab2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(345)
	::phoenix::Spatial _this = this->local;		HX_STACK_VAR(_this,"_this");
	HX_STACK_LINE(345)
	_this->scale = value;
	HX_STACK_LINE(345)
	if (((value != null()))){
		HX_STACK_LINE(345)
		::phoenix::Vector_obj::Listen(_this->scale,_this->_scale_change_dyn());
		HX_STACK_LINE(345)
		if (((bool((_this->scale_changed != null())) && bool(!(_this->ignore_listeners))))){
			HX_STACK_LINE(345)
			_this->scale_changed(_this->scale);
		}
	}
	HX_STACK_LINE(345)
	return _this->scale;
}


HX_DEFINE_DYNAMIC_FUNC1(Transform_obj,set_scale,return )

Void Transform_obj::propagate_clean( ){
{
		HX_STACK_FRAME("phoenix.Transform","propagate_clean",0xf9de2332,"phoenix.Transform.propagate_clean","phoenix/Transform.hx",350,0x44da8ab2)
		HX_STACK_THIS(this)
		HX_STACK_LINE(350)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(350)
		Dynamic _g1 = this->_clean_handlers;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(350)
		while((true)){
			HX_STACK_LINE(350)
			if ((!(((_g < _g1->__Field(HX_CSTRING("length"),true)))))){
				HX_STACK_LINE(350)
				break;
			}
			HX_STACK_LINE(350)
			Dynamic _handler = _g1->__GetItem(_g);		HX_STACK_VAR(_handler,"_handler");
			HX_STACK_LINE(350)
			++(_g);
			HX_STACK_LINE(351)
			if (((_handler != null()))){
				HX_STACK_LINE(352)
				_handler(hx::ObjectPtr<OBJ_>(this)).Cast< Void >();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Transform_obj,propagate_clean,(void))

Void Transform_obj::propagate_dirty( ){
{
		HX_STACK_FRAME("phoenix.Transform","propagate_dirty",0x8b5301bb,"phoenix.Transform.propagate_dirty","phoenix/Transform.hx",358,0x44da8ab2)
		HX_STACK_THIS(this)
		HX_STACK_LINE(358)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(358)
		Dynamic _g1 = this->_dirty_handlers;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(358)
		while((true)){
			HX_STACK_LINE(358)
			if ((!(((_g < _g1->__Field(HX_CSTRING("length"),true)))))){
				HX_STACK_LINE(358)
				break;
			}
			HX_STACK_LINE(358)
			Dynamic _handler = _g1->__GetItem(_g);		HX_STACK_VAR(_handler,"_handler");
			HX_STACK_LINE(358)
			++(_g);
			HX_STACK_LINE(359)
			if (((_handler != null()))){
				HX_STACK_LINE(360)
				_handler(hx::ObjectPtr<OBJ_>(this)).Cast< Void >();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Transform_obj,propagate_dirty,(void))

Void Transform_obj::propagate_pos( ::phoenix::Vector _pos){
{
		HX_STACK_FRAME("phoenix.Transform","propagate_pos",0xf04d22fd,"phoenix.Transform.propagate_pos","phoenix/Transform.hx",366,0x44da8ab2)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_pos,"_pos")
		HX_STACK_LINE(366)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(366)
		Dynamic _g1 = this->_pos_handlers;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(366)
		while((true)){
			HX_STACK_LINE(366)
			if ((!(((_g < _g1->__Field(HX_CSTRING("length"),true)))))){
				HX_STACK_LINE(366)
				break;
			}
			HX_STACK_LINE(366)
			Dynamic _handler = _g1->__GetItem(_g);		HX_STACK_VAR(_handler,"_handler");
			HX_STACK_LINE(366)
			++(_g);
			HX_STACK_LINE(367)
			if (((_handler != null()))){
				HX_STACK_LINE(368)
				_handler(_pos).Cast< Void >();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Transform_obj,propagate_pos,(void))

Void Transform_obj::propagate_rotation( ::phoenix::Quaternion _rotation){
{
		HX_STACK_FRAME("phoenix.Transform","propagate_rotation",0x22bd3b35,"phoenix.Transform.propagate_rotation","phoenix/Transform.hx",374,0x44da8ab2)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_rotation,"_rotation")
		HX_STACK_LINE(374)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(374)
		Dynamic _g1 = this->_rotation_handlers;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(374)
		while((true)){
			HX_STACK_LINE(374)
			if ((!(((_g < _g1->__Field(HX_CSTRING("length"),true)))))){
				HX_STACK_LINE(374)
				break;
			}
			HX_STACK_LINE(374)
			Dynamic _handler = _g1->__GetItem(_g);		HX_STACK_VAR(_handler,"_handler");
			HX_STACK_LINE(374)
			++(_g);
			HX_STACK_LINE(375)
			if (((_handler != null()))){
				HX_STACK_LINE(376)
				_handler(_rotation).Cast< Void >();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Transform_obj,propagate_rotation,(void))

Void Transform_obj::propagate_scale( ::phoenix::Vector _scale){
{
		HX_STACK_FRAME("phoenix.Transform","propagate_scale",0x2a518033,"phoenix.Transform.propagate_scale","phoenix/Transform.hx",382,0x44da8ab2)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_scale,"_scale")
		HX_STACK_LINE(382)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(382)
		Dynamic _g1 = this->_scale_handlers;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(382)
		while((true)){
			HX_STACK_LINE(382)
			if ((!(((_g < _g1->__Field(HX_CSTRING("length"),true)))))){
				HX_STACK_LINE(382)
				break;
			}
			HX_STACK_LINE(382)
			Dynamic _handler = _g1->__GetItem(_g);		HX_STACK_VAR(_handler,"_handler");
			HX_STACK_LINE(382)
			++(_g);
			HX_STACK_LINE(383)
			if (((_handler != null()))){
				HX_STACK_LINE(384)
				_handler(_scale).Cast< Void >();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Transform_obj,propagate_scale,(void))

Void Transform_obj::propagate_origin( ::phoenix::Vector _origin){
{
		HX_STACK_FRAME("phoenix.Transform","propagate_origin",0xebd9dc1d,"phoenix.Transform.propagate_origin","phoenix/Transform.hx",390,0x44da8ab2)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_origin,"_origin")
		HX_STACK_LINE(390)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(390)
		Dynamic _g1 = this->_origin_handlers;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(390)
		while((true)){
			HX_STACK_LINE(390)
			if ((!(((_g < _g1->__Field(HX_CSTRING("length"),true)))))){
				HX_STACK_LINE(390)
				break;
			}
			HX_STACK_LINE(390)
			Dynamic _handler = _g1->__GetItem(_g);		HX_STACK_VAR(_handler,"_handler");
			HX_STACK_LINE(390)
			++(_g);
			HX_STACK_LINE(391)
			if (((_handler != null()))){
				HX_STACK_LINE(392)
				_handler(_origin).Cast< Void >();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Transform_obj,propagate_origin,(void))

Void Transform_obj::propagate_parent( ::phoenix::Transform _parent){
{
		HX_STACK_FRAME("phoenix.Transform","propagate_parent",0x8e56c761,"phoenix.Transform.propagate_parent","phoenix/Transform.hx",398,0x44da8ab2)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_parent,"_parent")
		HX_STACK_LINE(398)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(398)
		Dynamic _g1 = this->_parent_handlers;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(398)
		while((true)){
			HX_STACK_LINE(398)
			if ((!(((_g < _g1->__Field(HX_CSTRING("length"),true)))))){
				HX_STACK_LINE(398)
				break;
			}
			HX_STACK_LINE(398)
			Dynamic _handler = _g1->__GetItem(_g);		HX_STACK_VAR(_handler,"_handler");
			HX_STACK_LINE(398)
			++(_g);
			HX_STACK_LINE(399)
			if (((_handler != null()))){
				HX_STACK_LINE(400)
				_handler(_parent).Cast< Void >();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Transform_obj,propagate_parent,(void))

Void Transform_obj::listen( Dynamic _handler){
{
		HX_STACK_FRAME("phoenix.Transform","listen",0x430d9ee8,"phoenix.Transform.listen","phoenix/Transform.hx",405,0x44da8ab2)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_handler,"_handler")
		HX_STACK_LINE(407)
		if (((this->_clean_handlers == null()))){
			HX_STACK_LINE(408)
			this->_clean_handlers = Dynamic( Array_obj<Dynamic>::__new());
		}
		HX_STACK_LINE(411)
		this->_clean_handlers->__Field(HX_CSTRING("push"),true)(_handler);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Transform_obj,listen,(void))

bool Transform_obj::unlisten( Dynamic _handler){
	HX_STACK_FRAME("phoenix.Transform","unlisten",0x12f07841,"phoenix.Transform.unlisten","phoenix/Transform.hx",415,0x44da8ab2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_handler,"_handler")
	HX_STACK_LINE(417)
	if (((this->_clean_handlers == null()))){
		HX_STACK_LINE(418)
		return false;
	}
	HX_STACK_LINE(421)
	return this->_clean_handlers->__Field(HX_CSTRING("remove"),true)(_handler);
}


HX_DEFINE_DYNAMIC_FUNC1(Transform_obj,unlisten,return )

Void Transform_obj::listen_dirty( Dynamic _handler){
{
		HX_STACK_FRAME("phoenix.Transform","listen_dirty",0x4f43543b,"phoenix.Transform.listen_dirty","phoenix/Transform.hx",425,0x44da8ab2)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_handler,"_handler")
		HX_STACK_LINE(427)
		if (((this->_dirty_handlers == null()))){
			HX_STACK_LINE(428)
			this->_dirty_handlers = Dynamic( Array_obj<Dynamic>::__new());
		}
		HX_STACK_LINE(431)
		this->_dirty_handlers->__Field(HX_CSTRING("push"),true)(_handler);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Transform_obj,listen_dirty,(void))

bool Transform_obj::unlisten_dirty( Dynamic _handler){
	HX_STACK_FRAME("phoenix.Transform","unlisten_dirty",0x5b453654,"phoenix.Transform.unlisten_dirty","phoenix/Transform.hx",435,0x44da8ab2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_handler,"_handler")
	HX_STACK_LINE(437)
	if (((this->_dirty_handlers == null()))){
		HX_STACK_LINE(438)
		return false;
	}
	HX_STACK_LINE(441)
	return this->_dirty_handlers->__Field(HX_CSTRING("remove"),true)(_handler);
}


HX_DEFINE_DYNAMIC_FUNC1(Transform_obj,unlisten_dirty,return )

Void Transform_obj::listen_pos( Dynamic _handler){
{
		HX_STACK_FRAME("phoenix.Transform","listen_pos",0x714bd57d,"phoenix.Transform.listen_pos","phoenix/Transform.hx",445,0x44da8ab2)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_handler,"_handler")
		HX_STACK_LINE(447)
		if (((this->_pos_handlers == null()))){
			HX_STACK_LINE(448)
			this->_pos_handlers = Dynamic( Array_obj<Dynamic>::__new());
		}
		HX_STACK_LINE(451)
		this->_pos_handlers->__Field(HX_CSTRING("push"),true)(_handler);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Transform_obj,listen_pos,(void))

bool Transform_obj::unlisten_pos( Dynamic _handler){
	HX_STACK_FRAME("phoenix.Transform","unlisten_pos",0x0cb8cf56,"phoenix.Transform.unlisten_pos","phoenix/Transform.hx",455,0x44da8ab2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_handler,"_handler")
	HX_STACK_LINE(457)
	if (((this->_pos_handlers == null()))){
		HX_STACK_LINE(458)
		return false;
	}
	HX_STACK_LINE(461)
	return this->_pos_handlers->__Field(HX_CSTRING("remove"),true)(_handler);
}


HX_DEFINE_DYNAMIC_FUNC1(Transform_obj,unlisten_pos,return )

Void Transform_obj::listen_scale( Dynamic _handler){
{
		HX_STACK_FRAME("phoenix.Transform","listen_scale",0xee41d2b3,"phoenix.Transform.listen_scale","phoenix/Transform.hx",465,0x44da8ab2)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_handler,"_handler")
		HX_STACK_LINE(467)
		if (((this->_scale_handlers == null()))){
			HX_STACK_LINE(468)
			this->_scale_handlers = Dynamic( Array_obj<Dynamic>::__new());
		}
		HX_STACK_LINE(471)
		this->_scale_handlers->__Field(HX_CSTRING("push"),true)(_handler);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Transform_obj,listen_scale,(void))

bool Transform_obj::unlisten_scale( Dynamic _handler){
	HX_STACK_FRAME("phoenix.Transform","unlisten_scale",0xfa43b4cc,"phoenix.Transform.unlisten_scale","phoenix/Transform.hx",475,0x44da8ab2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_handler,"_handler")
	HX_STACK_LINE(477)
	if (((this->_scale_handlers == null()))){
		HX_STACK_LINE(478)
		return false;
	}
	HX_STACK_LINE(481)
	return this->_scale_handlers->__Field(HX_CSTRING("remove"),true)(_handler);
}


HX_DEFINE_DYNAMIC_FUNC1(Transform_obj,unlisten_scale,return )

Void Transform_obj::listen_rotation( Dynamic _handler){
{
		HX_STACK_FRAME("phoenix.Transform","listen_rotation",0xfce778b5,"phoenix.Transform.listen_rotation","phoenix/Transform.hx",485,0x44da8ab2)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_handler,"_handler")
		HX_STACK_LINE(487)
		if (((this->_rotation_handlers == null()))){
			HX_STACK_LINE(488)
			this->_rotation_handlers = Dynamic( Array_obj<Dynamic>::__new());
		}
		HX_STACK_LINE(491)
		this->_rotation_handlers->__Field(HX_CSTRING("push"),true)(_handler);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Transform_obj,listen_rotation,(void))

bool Transform_obj::unlisten_rotation( Dynamic _handler){
	HX_STACK_FRAME("phoenix.Transform","unlisten_rotation",0x1a452c3c,"phoenix.Transform.unlisten_rotation","phoenix/Transform.hx",495,0x44da8ab2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_handler,"_handler")
	HX_STACK_LINE(497)
	if (((this->_rotation_handlers == null()))){
		HX_STACK_LINE(498)
		return false;
	}
	HX_STACK_LINE(501)
	return this->_rotation_handlers->__Field(HX_CSTRING("remove"),true)(_handler);
}


HX_DEFINE_DYNAMIC_FUNC1(Transform_obj,unlisten_rotation,return )

Void Transform_obj::listen_origin( Dynamic _handler){
{
		HX_STACK_FRAME("phoenix.Transform","listen_origin",0x9a31b99d,"phoenix.Transform.listen_origin","phoenix/Transform.hx",505,0x44da8ab2)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_handler,"_handler")
		HX_STACK_LINE(507)
		if (((this->_origin_handlers == null()))){
			HX_STACK_LINE(508)
			this->_origin_handlers = Dynamic( Array_obj<Dynamic>::__new());
		}
		HX_STACK_LINE(511)
		this->_origin_handlers->__Field(HX_CSTRING("push"),true)(_handler);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Transform_obj,listen_origin,(void))

bool Transform_obj::unlisten_origin( Dynamic _handler){
	HX_STACK_FRAME("phoenix.Transform","unlisten_origin",0x0fd5ad64,"phoenix.Transform.unlisten_origin","phoenix/Transform.hx",515,0x44da8ab2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_handler,"_handler")
	HX_STACK_LINE(517)
	if (((this->_origin_handlers == null()))){
		HX_STACK_LINE(518)
		return false;
	}
	HX_STACK_LINE(521)
	return this->_origin_handlers->__Field(HX_CSTRING("remove"),true)(_handler);
}


HX_DEFINE_DYNAMIC_FUNC1(Transform_obj,unlisten_origin,return )

Void Transform_obj::listen_parent( Dynamic _handler){
{
		HX_STACK_FRAME("phoenix.Transform","listen_parent",0x3caea4e1,"phoenix.Transform.listen_parent","phoenix/Transform.hx",525,0x44da8ab2)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_handler,"_handler")
		HX_STACK_LINE(527)
		if (((this->_parent_handlers == null()))){
			HX_STACK_LINE(528)
			this->_parent_handlers = Dynamic( Array_obj<Dynamic>::__new());
		}
		HX_STACK_LINE(531)
		this->_parent_handlers->__Field(HX_CSTRING("push"),true)(_handler);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Transform_obj,listen_parent,(void))

bool Transform_obj::unlisten_parent( Dynamic _handler){
	HX_STACK_FRAME("phoenix.Transform","unlisten_parent",0xb25298a8,"phoenix.Transform.unlisten_parent","phoenix/Transform.hx",535,0x44da8ab2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_handler,"_handler")
	HX_STACK_LINE(537)
	if (((this->_parent_handlers == null()))){
		HX_STACK_LINE(538)
		return false;
	}
	HX_STACK_LINE(541)
	return this->_parent_handlers->__Field(HX_CSTRING("remove"),true)(_handler);
}


HX_DEFINE_DYNAMIC_FUNC1(Transform_obj,unlisten_parent,return )


Transform_obj::Transform_obj()
{
}

void Transform_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Transform);
	HX_MARK_MEMBER_NAME(parent,"parent");
	HX_MARK_MEMBER_NAME(local,"local");
	HX_MARK_MEMBER_NAME(world,"world");
	HX_MARK_MEMBER_NAME(origin,"origin");
	HX_MARK_MEMBER_NAME(dirty,"dirty");
	HX_MARK_MEMBER_NAME(_origin_undo_matrix,"_origin_undo_matrix");
	HX_MARK_MEMBER_NAME(_pos_matrix,"_pos_matrix");
	HX_MARK_MEMBER_NAME(_rotation_matrix,"_rotation_matrix");
	HX_MARK_MEMBER_NAME(_setup,"_setup");
	HX_MARK_MEMBER_NAME(_cleaning,"_cleaning");
	HX_MARK_MEMBER_NAME(_clean_handlers,"_clean_handlers");
	HX_MARK_MEMBER_NAME(_dirty_handlers,"_dirty_handlers");
	HX_MARK_MEMBER_NAME(_pos_handlers,"_pos_handlers");
	HX_MARK_MEMBER_NAME(_rotation_handlers,"_rotation_handlers");
	HX_MARK_MEMBER_NAME(_scale_handlers,"_scale_handlers");
	HX_MARK_MEMBER_NAME(_origin_handlers,"_origin_handlers");
	HX_MARK_MEMBER_NAME(_parent_handlers,"_parent_handlers");
	HX_MARK_MEMBER_NAME(_destroying,"_destroying");
	::luxe::ID_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Transform_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(parent,"parent");
	HX_VISIT_MEMBER_NAME(local,"local");
	HX_VISIT_MEMBER_NAME(world,"world");
	HX_VISIT_MEMBER_NAME(origin,"origin");
	HX_VISIT_MEMBER_NAME(dirty,"dirty");
	HX_VISIT_MEMBER_NAME(_origin_undo_matrix,"_origin_undo_matrix");
	HX_VISIT_MEMBER_NAME(_pos_matrix,"_pos_matrix");
	HX_VISIT_MEMBER_NAME(_rotation_matrix,"_rotation_matrix");
	HX_VISIT_MEMBER_NAME(_setup,"_setup");
	HX_VISIT_MEMBER_NAME(_cleaning,"_cleaning");
	HX_VISIT_MEMBER_NAME(_clean_handlers,"_clean_handlers");
	HX_VISIT_MEMBER_NAME(_dirty_handlers,"_dirty_handlers");
	HX_VISIT_MEMBER_NAME(_pos_handlers,"_pos_handlers");
	HX_VISIT_MEMBER_NAME(_rotation_handlers,"_rotation_handlers");
	HX_VISIT_MEMBER_NAME(_scale_handlers,"_scale_handlers");
	HX_VISIT_MEMBER_NAME(_origin_handlers,"_origin_handlers");
	HX_VISIT_MEMBER_NAME(_parent_handlers,"_parent_handlers");
	HX_VISIT_MEMBER_NAME(_destroying,"_destroying");
	::luxe::ID_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Transform_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"pos") ) { return get_pos(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"local") ) { return inCallProp ? get_local() : local; }
		if (HX_FIELD_EQ(inName,"world") ) { return inCallProp ? get_world() : world; }
		if (HX_FIELD_EQ(inName,"dirty") ) { return dirty; }
		if (HX_FIELD_EQ(inName,"scale") ) { return get_scale(); }
		if (HX_FIELD_EQ(inName,"clean") ) { return clean_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"parent") ) { return inCallProp ? get_parent() : parent; }
		if (HX_FIELD_EQ(inName,"origin") ) { return inCallProp ? get_origin() : origin; }
		if (HX_FIELD_EQ(inName,"_setup") ) { return _setup; }
		if (HX_FIELD_EQ(inName,"listen") ) { return listen_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"get_pos") ) { return get_pos_dyn(); }
		if (HX_FIELD_EQ(inName,"set_pos") ) { return set_pos_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"rotation") ) { return get_rotation(); }
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		if (HX_FIELD_EQ(inName,"unlisten") ) { return unlisten_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_cleaning") ) { return _cleaning; }
		if (HX_FIELD_EQ(inName,"set_dirty") ) { return set_dirty_dyn(); }
		if (HX_FIELD_EQ(inName,"get_local") ) { return get_local_dyn(); }
		if (HX_FIELD_EQ(inName,"set_local") ) { return set_local_dyn(); }
		if (HX_FIELD_EQ(inName,"get_world") ) { return get_world_dyn(); }
		if (HX_FIELD_EQ(inName,"set_world") ) { return set_world_dyn(); }
		if (HX_FIELD_EQ(inName,"get_scale") ) { return get_scale_dyn(); }
		if (HX_FIELD_EQ(inName,"set_scale") ) { return set_scale_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_origin") ) { return get_origin_dyn(); }
		if (HX_FIELD_EQ(inName,"set_origin") ) { return set_origin_dyn(); }
		if (HX_FIELD_EQ(inName,"get_parent") ) { return get_parent_dyn(); }
		if (HX_FIELD_EQ(inName,"set_parent") ) { return set_parent_dyn(); }
		if (HX_FIELD_EQ(inName,"listen_pos") ) { return listen_pos_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_pos_matrix") ) { return _pos_matrix; }
		if (HX_FIELD_EQ(inName,"_destroying") ) { return _destroying; }
		if (HX_FIELD_EQ(inName,"clean_check") ) { return clean_check_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_rotation") ) { return get_rotation_dyn(); }
		if (HX_FIELD_EQ(inName,"set_rotation") ) { return set_rotation_dyn(); }
		if (HX_FIELD_EQ(inName,"listen_dirty") ) { return listen_dirty_dyn(); }
		if (HX_FIELD_EQ(inName,"unlisten_pos") ) { return unlisten_pos_dyn(); }
		if (HX_FIELD_EQ(inName,"listen_scale") ) { return listen_scale_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_pos_handlers") ) { return _pos_handlers; }
		if (HX_FIELD_EQ(inName,"propagate_pos") ) { return propagate_pos_dyn(); }
		if (HX_FIELD_EQ(inName,"listen_origin") ) { return listen_origin_dyn(); }
		if (HX_FIELD_EQ(inName,"listen_parent") ) { return listen_parent_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"unlisten_dirty") ) { return unlisten_dirty_dyn(); }
		if (HX_FIELD_EQ(inName,"unlisten_scale") ) { return unlisten_scale_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_clean_handlers") ) { return _clean_handlers; }
		if (HX_FIELD_EQ(inName,"_dirty_handlers") ) { return _dirty_handlers; }
		if (HX_FIELD_EQ(inName,"_scale_handlers") ) { return _scale_handlers; }
		if (HX_FIELD_EQ(inName,"propagate_clean") ) { return propagate_clean_dyn(); }
		if (HX_FIELD_EQ(inName,"propagate_dirty") ) { return propagate_dirty_dyn(); }
		if (HX_FIELD_EQ(inName,"propagate_scale") ) { return propagate_scale_dyn(); }
		if (HX_FIELD_EQ(inName,"listen_rotation") ) { return listen_rotation_dyn(); }
		if (HX_FIELD_EQ(inName,"unlisten_origin") ) { return unlisten_origin_dyn(); }
		if (HX_FIELD_EQ(inName,"unlisten_parent") ) { return unlisten_parent_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_rotation_matrix") ) { return _rotation_matrix; }
		if (HX_FIELD_EQ(inName,"_origin_handlers") ) { return _origin_handlers; }
		if (HX_FIELD_EQ(inName,"_parent_handlers") ) { return _parent_handlers; }
		if (HX_FIELD_EQ(inName,"propagate_origin") ) { return propagate_origin_dyn(); }
		if (HX_FIELD_EQ(inName,"propagate_parent") ) { return propagate_parent_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"on_parent_cleaned") ) { return on_parent_cleaned_dyn(); }
		if (HX_FIELD_EQ(inName,"unlisten_rotation") ) { return unlisten_rotation_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_rotation_handlers") ) { return _rotation_handlers; }
		if (HX_FIELD_EQ(inName,"propagate_rotation") ) { return propagate_rotation_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_origin_undo_matrix") ) { return _origin_undo_matrix; }
		if (HX_FIELD_EQ(inName,"on_local_pos_change") ) { return on_local_pos_change_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"on_local_scale_change") ) { return on_local_scale_change_dyn(); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"on_local_rotation_change") ) { return on_local_rotation_change_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Transform_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"pos") ) { return set_pos(inValue); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"local") ) { if (inCallProp) return set_local(inValue);local=inValue.Cast< ::phoenix::Spatial >(); return inValue; }
		if (HX_FIELD_EQ(inName,"world") ) { if (inCallProp) return set_world(inValue);world=inValue.Cast< ::phoenix::Spatial >(); return inValue; }
		if (HX_FIELD_EQ(inName,"dirty") ) { if (inCallProp) return set_dirty(inValue);dirty=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scale") ) { return set_scale(inValue); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"parent") ) { if (inCallProp) return set_parent(inValue);parent=inValue.Cast< ::phoenix::Transform >(); return inValue; }
		if (HX_FIELD_EQ(inName,"origin") ) { if (inCallProp) return set_origin(inValue);origin=inValue.Cast< ::phoenix::Vector >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_setup") ) { _setup=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"rotation") ) { return set_rotation(inValue); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_cleaning") ) { _cleaning=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_pos_matrix") ) { _pos_matrix=inValue.Cast< ::phoenix::Matrix >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_destroying") ) { _destroying=inValue.Cast< bool >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_pos_handlers") ) { _pos_handlers=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_clean_handlers") ) { _clean_handlers=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_dirty_handlers") ) { _dirty_handlers=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_scale_handlers") ) { _scale_handlers=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_rotation_matrix") ) { _rotation_matrix=inValue.Cast< ::phoenix::Matrix >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_origin_handlers") ) { _origin_handlers=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_parent_handlers") ) { _parent_handlers=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_rotation_handlers") ) { _rotation_handlers=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_origin_undo_matrix") ) { _origin_undo_matrix=inValue.Cast< ::phoenix::Matrix >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Transform_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("parent"));
	outFields->push(HX_CSTRING("local"));
	outFields->push(HX_CSTRING("world"));
	outFields->push(HX_CSTRING("origin"));
	outFields->push(HX_CSTRING("dirty"));
	outFields->push(HX_CSTRING("pos"));
	outFields->push(HX_CSTRING("rotation"));
	outFields->push(HX_CSTRING("scale"));
	outFields->push(HX_CSTRING("_origin_undo_matrix"));
	outFields->push(HX_CSTRING("_pos_matrix"));
	outFields->push(HX_CSTRING("_rotation_matrix"));
	outFields->push(HX_CSTRING("_setup"));
	outFields->push(HX_CSTRING("_cleaning"));
	outFields->push(HX_CSTRING("_clean_handlers"));
	outFields->push(HX_CSTRING("_dirty_handlers"));
	outFields->push(HX_CSTRING("_pos_handlers"));
	outFields->push(HX_CSTRING("_rotation_handlers"));
	outFields->push(HX_CSTRING("_scale_handlers"));
	outFields->push(HX_CSTRING("_origin_handlers"));
	outFields->push(HX_CSTRING("_parent_handlers"));
	outFields->push(HX_CSTRING("_destroying"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::phoenix::Transform*/ ,(int)offsetof(Transform_obj,parent),HX_CSTRING("parent")},
	{hx::fsObject /*::phoenix::Spatial*/ ,(int)offsetof(Transform_obj,local),HX_CSTRING("local")},
	{hx::fsObject /*::phoenix::Spatial*/ ,(int)offsetof(Transform_obj,world),HX_CSTRING("world")},
	{hx::fsObject /*::phoenix::Vector*/ ,(int)offsetof(Transform_obj,origin),HX_CSTRING("origin")},
	{hx::fsBool,(int)offsetof(Transform_obj,dirty),HX_CSTRING("dirty")},
	{hx::fsObject /*::phoenix::Matrix*/ ,(int)offsetof(Transform_obj,_origin_undo_matrix),HX_CSTRING("_origin_undo_matrix")},
	{hx::fsObject /*::phoenix::Matrix*/ ,(int)offsetof(Transform_obj,_pos_matrix),HX_CSTRING("_pos_matrix")},
	{hx::fsObject /*::phoenix::Matrix*/ ,(int)offsetof(Transform_obj,_rotation_matrix),HX_CSTRING("_rotation_matrix")},
	{hx::fsBool,(int)offsetof(Transform_obj,_setup),HX_CSTRING("_setup")},
	{hx::fsBool,(int)offsetof(Transform_obj,_cleaning),HX_CSTRING("_cleaning")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Transform_obj,_clean_handlers),HX_CSTRING("_clean_handlers")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Transform_obj,_dirty_handlers),HX_CSTRING("_dirty_handlers")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Transform_obj,_pos_handlers),HX_CSTRING("_pos_handlers")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Transform_obj,_rotation_handlers),HX_CSTRING("_rotation_handlers")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Transform_obj,_scale_handlers),HX_CSTRING("_scale_handlers")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Transform_obj,_origin_handlers),HX_CSTRING("_origin_handlers")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Transform_obj,_parent_handlers),HX_CSTRING("_parent_handlers")},
	{hx::fsBool,(int)offsetof(Transform_obj,_destroying),HX_CSTRING("_destroying")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("parent"),
	HX_CSTRING("local"),
	HX_CSTRING("world"),
	HX_CSTRING("origin"),
	HX_CSTRING("dirty"),
	HX_CSTRING("_origin_undo_matrix"),
	HX_CSTRING("_pos_matrix"),
	HX_CSTRING("_rotation_matrix"),
	HX_CSTRING("_setup"),
	HX_CSTRING("_cleaning"),
	HX_CSTRING("_clean_handlers"),
	HX_CSTRING("_dirty_handlers"),
	HX_CSTRING("_pos_handlers"),
	HX_CSTRING("_rotation_handlers"),
	HX_CSTRING("_scale_handlers"),
	HX_CSTRING("_origin_handlers"),
	HX_CSTRING("_parent_handlers"),
	HX_CSTRING("_destroying"),
	HX_CSTRING("destroy"),
	HX_CSTRING("set_dirty"),
	HX_CSTRING("on_local_pos_change"),
	HX_CSTRING("on_local_rotation_change"),
	HX_CSTRING("on_local_scale_change"),
	HX_CSTRING("on_parent_cleaned"),
	HX_CSTRING("get_local"),
	HX_CSTRING("set_local"),
	HX_CSTRING("get_world"),
	HX_CSTRING("clean_check"),
	HX_CSTRING("clean"),
	HX_CSTRING("toString"),
	HX_CSTRING("get_origin"),
	HX_CSTRING("set_origin"),
	HX_CSTRING("set_world"),
	HX_CSTRING("get_parent"),
	HX_CSTRING("set_parent"),
	HX_CSTRING("get_pos"),
	HX_CSTRING("get_rotation"),
	HX_CSTRING("get_scale"),
	HX_CSTRING("set_pos"),
	HX_CSTRING("set_rotation"),
	HX_CSTRING("set_scale"),
	HX_CSTRING("propagate_clean"),
	HX_CSTRING("propagate_dirty"),
	HX_CSTRING("propagate_pos"),
	HX_CSTRING("propagate_rotation"),
	HX_CSTRING("propagate_scale"),
	HX_CSTRING("propagate_origin"),
	HX_CSTRING("propagate_parent"),
	HX_CSTRING("listen"),
	HX_CSTRING("unlisten"),
	HX_CSTRING("listen_dirty"),
	HX_CSTRING("unlisten_dirty"),
	HX_CSTRING("listen_pos"),
	HX_CSTRING("unlisten_pos"),
	HX_CSTRING("listen_scale"),
	HX_CSTRING("unlisten_scale"),
	HX_CSTRING("listen_rotation"),
	HX_CSTRING("unlisten_rotation"),
	HX_CSTRING("listen_origin"),
	HX_CSTRING("unlisten_origin"),
	HX_CSTRING("listen_parent"),
	HX_CSTRING("unlisten_parent"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Transform_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Transform_obj::__mClass,"__mClass");
};

#endif

Class Transform_obj::__mClass;

void Transform_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("phoenix.Transform"), hx::TCanCast< Transform_obj> ,sStaticFields,sMemberFields,
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

void Transform_obj::__boot()
{
}

} // end namespace phoenix
