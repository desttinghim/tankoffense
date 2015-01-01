#include <hxcpp.h>

#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_phoenix_Matrix
#include <phoenix/Matrix.h>
#endif
#ifndef INCLUDED_phoenix_Quaternion
#include <phoenix/Quaternion.h>
#endif
#ifndef INCLUDED_phoenix_Vector
#include <phoenix/Vector.h>
#endif
namespace phoenix{

Void Vector_obj::__construct(hx::Null< Float >  __o__x,hx::Null< Float >  __o__y,hx::Null< Float >  __o__z,hx::Null< Float >  __o__w)
{
HX_STACK_FRAME("phoenix.Vector","new",0x8c9315d4,"phoenix.Vector.new","phoenix/Vector.hx",5,0x5d0bf7fb)
HX_STACK_THIS(this)
HX_STACK_ARG(__o__x,"_x")
HX_STACK_ARG(__o__y,"_y")
HX_STACK_ARG(__o__z,"_z")
HX_STACK_ARG(__o__w,"_w")
Float _x = __o__x.Default(0);
Float _y = __o__y.Default(0);
Float _z = __o__z.Default(0);
Float _w = __o__w.Default(0);
{
	HX_STACK_LINE(24)
	this->_construct = false;
	HX_STACK_LINE(18)
	this->ignore_listeners = false;
	HX_STACK_LINE(10)
	this->w = (int)0;
	HX_STACK_LINE(9)
	this->z = (int)0;
	HX_STACK_LINE(8)
	this->y = (int)0;
	HX_STACK_LINE(7)
	this->x = (int)0;
	HX_STACK_LINE(28)
	this->_construct = true;
	HX_STACK_LINE(30)
	{
		HX_STACK_LINE(30)
		this->x = _x;
		HX_STACK_LINE(30)
		if ((this->_construct)){
			HX_STACK_LINE(30)
			this->x;
		}
		else{
			HX_STACK_LINE(30)
			if (((bool((this->listen_x_dyn() != null())) && bool(!(this->ignore_listeners))))){
				HX_STACK_LINE(30)
				this->listen_x(_x);
			}
			HX_STACK_LINE(30)
			this->x;
		}
	}
	HX_STACK_LINE(31)
	{
		HX_STACK_LINE(31)
		this->y = _y;
		HX_STACK_LINE(31)
		if ((this->_construct)){
			HX_STACK_LINE(31)
			this->y;
		}
		else{
			HX_STACK_LINE(31)
			if (((bool((this->listen_y_dyn() != null())) && bool(!(this->ignore_listeners))))){
				HX_STACK_LINE(31)
				this->listen_y(_y);
			}
			HX_STACK_LINE(31)
			this->y;
		}
	}
	HX_STACK_LINE(32)
	{
		HX_STACK_LINE(32)
		this->z = _z;
		HX_STACK_LINE(32)
		if ((this->_construct)){
			HX_STACK_LINE(32)
			this->z;
		}
		else{
			HX_STACK_LINE(32)
			if (((bool((this->listen_z_dyn() != null())) && bool(!(this->ignore_listeners))))){
				HX_STACK_LINE(32)
				this->listen_z(_z);
			}
			HX_STACK_LINE(32)
			this->z;
		}
	}
	HX_STACK_LINE(33)
	this->w = _w;
	HX_STACK_LINE(35)
	this->_construct = false;
}
;
	return null();
}

//Vector_obj::~Vector_obj() { }

Dynamic Vector_obj::__CreateEmpty() { return  new Vector_obj; }
hx::ObjectPtr< Vector_obj > Vector_obj::__new(hx::Null< Float >  __o__x,hx::Null< Float >  __o__y,hx::Null< Float >  __o__z,hx::Null< Float >  __o__w)
{  hx::ObjectPtr< Vector_obj > result = new Vector_obj();
	result->__construct(__o__x,__o__y,__o__z,__o__w);
	return result;}

Dynamic Vector_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Vector_obj > result = new Vector_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return result;}

::phoenix::Vector Vector_obj::copy_from( ::phoenix::Vector _other){
	HX_STACK_FRAME("phoenix.Vector","copy_from",0xcfdc49e8,"phoenix.Vector.copy_from","phoenix/Vector.hx",39,0x5d0bf7fb)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_other,"_other")
	HX_STACK_LINE(41)
	{
		HX_STACK_LINE(41)
		Float _x = _other->x;		HX_STACK_VAR(_x,"_x");
		HX_STACK_LINE(41)
		Float _y = _other->y;		HX_STACK_VAR(_y,"_y");
		HX_STACK_LINE(41)
		Float _z = _other->z;		HX_STACK_VAR(_z,"_z");
		HX_STACK_LINE(41)
		bool prev = this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
		HX_STACK_LINE(41)
		this->ignore_listeners = true;
		HX_STACK_LINE(41)
		{
			HX_STACK_LINE(41)
			this->x = _x;
			HX_STACK_LINE(41)
			if ((this->_construct)){
				HX_STACK_LINE(41)
				this->x;
			}
			else{
				HX_STACK_LINE(41)
				if (((bool((this->listen_x_dyn() != null())) && bool(!(this->ignore_listeners))))){
					HX_STACK_LINE(41)
					this->listen_x(_x);
				}
				HX_STACK_LINE(41)
				this->x;
			}
		}
		HX_STACK_LINE(41)
		{
			HX_STACK_LINE(41)
			this->y = _y;
			HX_STACK_LINE(41)
			if ((this->_construct)){
				HX_STACK_LINE(41)
				this->y;
			}
			else{
				HX_STACK_LINE(41)
				if (((bool((this->listen_y_dyn() != null())) && bool(!(this->ignore_listeners))))){
					HX_STACK_LINE(41)
					this->listen_y(_y);
				}
				HX_STACK_LINE(41)
				this->y;
			}
		}
		HX_STACK_LINE(41)
		{
			HX_STACK_LINE(41)
			this->z = _z;
			HX_STACK_LINE(41)
			if ((this->_construct)){
				HX_STACK_LINE(41)
				this->z;
			}
			else{
				HX_STACK_LINE(41)
				if (((bool((this->listen_z_dyn() != null())) && bool(!(this->ignore_listeners))))){
					HX_STACK_LINE(41)
					this->listen_z(_z);
				}
				HX_STACK_LINE(41)
				this->z;
			}
		}
		HX_STACK_LINE(41)
		this->w = _other->w;
		HX_STACK_LINE(41)
		this->ignore_listeners = prev;
		HX_STACK_LINE(41)
		if (((bool((this->listen_x_dyn() != null())) && bool(!(this->ignore_listeners))))){
			HX_STACK_LINE(41)
			this->listen_x(this->x);
		}
		HX_STACK_LINE(41)
		if (((bool((this->listen_y_dyn() != null())) && bool(!(this->ignore_listeners))))){
			HX_STACK_LINE(41)
			this->listen_y(this->y);
		}
		HX_STACK_LINE(41)
		if (((bool((this->listen_z_dyn() != null())) && bool(!(this->ignore_listeners))))){
			HX_STACK_LINE(41)
			this->listen_z(this->z);
		}
		HX_STACK_LINE(41)
		hx::ObjectPtr<OBJ_>(this);
	}
	HX_STACK_LINE(43)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(Vector_obj,copy_from,return )

::phoenix::Vector Vector_obj::set( Float _x,Float _y,Float _z,Float _w){
	HX_STACK_FRAME("phoenix.Vector","set",0x8c96e116,"phoenix.Vector.set","phoenix/Vector.hx",47,0x5d0bf7fb)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_x,"_x")
	HX_STACK_ARG(_y,"_y")
	HX_STACK_ARG(_z,"_z")
	HX_STACK_ARG(_w,"_w")
	HX_STACK_LINE(49)
	bool prev = this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
	HX_STACK_LINE(51)
	this->ignore_listeners = true;
	HX_STACK_LINE(53)
	{
		HX_STACK_LINE(53)
		this->x = _x;
		HX_STACK_LINE(53)
		if ((this->_construct)){
			HX_STACK_LINE(53)
			this->x;
		}
		else{
			HX_STACK_LINE(53)
			if (((bool((this->listen_x_dyn() != null())) && bool(!(this->ignore_listeners))))){
				HX_STACK_LINE(53)
				this->listen_x(_x);
			}
			HX_STACK_LINE(53)
			this->x;
		}
	}
	HX_STACK_LINE(54)
	{
		HX_STACK_LINE(54)
		this->y = _y;
		HX_STACK_LINE(54)
		if ((this->_construct)){
			HX_STACK_LINE(54)
			this->y;
		}
		else{
			HX_STACK_LINE(54)
			if (((bool((this->listen_y_dyn() != null())) && bool(!(this->ignore_listeners))))){
				HX_STACK_LINE(54)
				this->listen_y(_y);
			}
			HX_STACK_LINE(54)
			this->y;
		}
	}
	HX_STACK_LINE(55)
	{
		HX_STACK_LINE(55)
		this->z = _z;
		HX_STACK_LINE(55)
		if ((this->_construct)){
			HX_STACK_LINE(55)
			this->z;
		}
		else{
			HX_STACK_LINE(55)
			if (((bool((this->listen_z_dyn() != null())) && bool(!(this->ignore_listeners))))){
				HX_STACK_LINE(55)
				this->listen_z(_z);
			}
			HX_STACK_LINE(55)
			this->z;
		}
	}
	HX_STACK_LINE(56)
	this->w = _w;
	HX_STACK_LINE(58)
	this->ignore_listeners = prev;
	HX_STACK_LINE(60)
	if (((bool((this->listen_x_dyn() != null())) && bool(!(this->ignore_listeners))))){
		HX_STACK_LINE(60)
		this->listen_x(this->x);
	}
	HX_STACK_LINE(61)
	if (((bool((this->listen_y_dyn() != null())) && bool(!(this->ignore_listeners))))){
		HX_STACK_LINE(61)
		this->listen_y(this->y);
	}
	HX_STACK_LINE(62)
	if (((bool((this->listen_z_dyn() != null())) && bool(!(this->ignore_listeners))))){
		HX_STACK_LINE(62)
		this->listen_z(this->z);
	}
	HX_STACK_LINE(64)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC4(Vector_obj,set,return )

::phoenix::Vector Vector_obj::set_xy( Float _x,Float _y){
	HX_STACK_FRAME("phoenix.Vector","set_xy",0xbcfeefca,"phoenix.Vector.set_xy","phoenix/Vector.hx",68,0x5d0bf7fb)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_x,"_x")
	HX_STACK_ARG(_y,"_y")
	HX_STACK_LINE(70)
	bool prev = this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
	HX_STACK_LINE(72)
	this->ignore_listeners = true;
	HX_STACK_LINE(74)
	{
		HX_STACK_LINE(74)
		this->x = _x;
		HX_STACK_LINE(74)
		if ((this->_construct)){
			HX_STACK_LINE(74)
			this->x;
		}
		else{
			HX_STACK_LINE(74)
			if (((bool((this->listen_x_dyn() != null())) && bool(!(this->ignore_listeners))))){
				HX_STACK_LINE(74)
				this->listen_x(_x);
			}
			HX_STACK_LINE(74)
			this->x;
		}
	}
	HX_STACK_LINE(75)
	{
		HX_STACK_LINE(75)
		this->y = _y;
		HX_STACK_LINE(75)
		if ((this->_construct)){
			HX_STACK_LINE(75)
			this->y;
		}
		else{
			HX_STACK_LINE(75)
			if (((bool((this->listen_y_dyn() != null())) && bool(!(this->ignore_listeners))))){
				HX_STACK_LINE(75)
				this->listen_y(_y);
			}
			HX_STACK_LINE(75)
			this->y;
		}
	}
	HX_STACK_LINE(77)
	this->ignore_listeners = prev;
	HX_STACK_LINE(79)
	if (((bool((this->listen_x_dyn() != null())) && bool(!(this->ignore_listeners))))){
		HX_STACK_LINE(79)
		this->listen_x(this->x);
	}
	HX_STACK_LINE(80)
	if (((bool((this->listen_y_dyn() != null())) && bool(!(this->ignore_listeners))))){
		HX_STACK_LINE(80)
		this->listen_y(this->y);
	}
	HX_STACK_LINE(82)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC2(Vector_obj,set_xy,return )

::phoenix::Vector Vector_obj::set_xyz( Float _x,Float _y,Float _z){
	HX_STACK_FRAME("phoenix.Vector","set_xyz",0xa212e170,"phoenix.Vector.set_xyz","phoenix/Vector.hx",86,0x5d0bf7fb)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_x,"_x")
	HX_STACK_ARG(_y,"_y")
	HX_STACK_ARG(_z,"_z")
	HX_STACK_LINE(88)
	bool prev = this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
	HX_STACK_LINE(90)
	this->ignore_listeners = true;
	HX_STACK_LINE(92)
	{
		HX_STACK_LINE(92)
		this->x = _x;
		HX_STACK_LINE(92)
		if ((this->_construct)){
			HX_STACK_LINE(92)
			this->x;
		}
		else{
			HX_STACK_LINE(92)
			if (((bool((this->listen_x_dyn() != null())) && bool(!(this->ignore_listeners))))){
				HX_STACK_LINE(92)
				this->listen_x(_x);
			}
			HX_STACK_LINE(92)
			this->x;
		}
	}
	HX_STACK_LINE(93)
	{
		HX_STACK_LINE(93)
		this->y = _y;
		HX_STACK_LINE(93)
		if ((this->_construct)){
			HX_STACK_LINE(93)
			this->y;
		}
		else{
			HX_STACK_LINE(93)
			if (((bool((this->listen_y_dyn() != null())) && bool(!(this->ignore_listeners))))){
				HX_STACK_LINE(93)
				this->listen_y(_y);
			}
			HX_STACK_LINE(93)
			this->y;
		}
	}
	HX_STACK_LINE(94)
	{
		HX_STACK_LINE(94)
		this->z = _z;
		HX_STACK_LINE(94)
		if ((this->_construct)){
			HX_STACK_LINE(94)
			this->z;
		}
		else{
			HX_STACK_LINE(94)
			if (((bool((this->listen_z_dyn() != null())) && bool(!(this->ignore_listeners))))){
				HX_STACK_LINE(94)
				this->listen_z(_z);
			}
			HX_STACK_LINE(94)
			this->z;
		}
	}
	HX_STACK_LINE(96)
	this->ignore_listeners = prev;
	HX_STACK_LINE(98)
	if (((bool((this->listen_x_dyn() != null())) && bool(!(this->ignore_listeners))))){
		HX_STACK_LINE(98)
		this->listen_x(this->x);
	}
	HX_STACK_LINE(99)
	if (((bool((this->listen_y_dyn() != null())) && bool(!(this->ignore_listeners))))){
		HX_STACK_LINE(99)
		this->listen_y(this->y);
	}
	HX_STACK_LINE(100)
	if (((bool((this->listen_z_dyn() != null())) && bool(!(this->ignore_listeners))))){
		HX_STACK_LINE(100)
		this->listen_z(this->z);
	}
	HX_STACK_LINE(102)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC3(Vector_obj,set_xyz,return )

::phoenix::Vector Vector_obj::lerp_xy( Float _dest_x,Float _dest_y,Float _t){
	HX_STACK_FRAME("phoenix.Vector","lerp_xy",0x6359207d,"phoenix.Vector.lerp_xy","phoenix/Vector.hx",107,0x5d0bf7fb)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_dest_x,"_dest_x")
	HX_STACK_ARG(_dest_y,"_dest_y")
	HX_STACK_ARG(_t,"_t")
	HX_STACK_LINE(109)
	{
		HX_STACK_LINE(110)
		Float _x;		HX_STACK_VAR(_x,"_x");
		HX_STACK_LINE(110)
		{
			HX_STACK_LINE(110)
			Float value = this->x;		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(110)
			Float t = _t;		HX_STACK_VAR(t,"t");
			HX_STACK_LINE(110)
			if (((t < (int)0))){
				HX_STACK_LINE(110)
				t = (int)0;
			}
			else{
				HX_STACK_LINE(110)
				if (((t > (int)1))){
					HX_STACK_LINE(110)
					t = (int)1;
				}
				else{
					HX_STACK_LINE(110)
					t = t;
				}
			}
			HX_STACK_LINE(110)
			_x = (value + (t * ((_dest_x - value))));
		}
		HX_STACK_LINE(111)
		Float _y;		HX_STACK_VAR(_y,"_y");
		HX_STACK_LINE(111)
		{
			HX_STACK_LINE(111)
			Float value = this->y;		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(111)
			Float t = _t;		HX_STACK_VAR(t,"t");
			HX_STACK_LINE(111)
			if (((t < (int)0))){
				HX_STACK_LINE(111)
				t = (int)0;
			}
			else{
				HX_STACK_LINE(111)
				if (((t > (int)1))){
					HX_STACK_LINE(111)
					t = (int)1;
				}
				else{
					HX_STACK_LINE(111)
					t = t;
				}
			}
			HX_STACK_LINE(111)
			_y = (value + (t * ((_dest_y - value))));
		}
		HX_STACK_LINE(109)
		bool prev = this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
		HX_STACK_LINE(109)
		this->ignore_listeners = true;
		HX_STACK_LINE(109)
		{
			HX_STACK_LINE(109)
			this->x = _x;
			HX_STACK_LINE(109)
			if ((this->_construct)){
				HX_STACK_LINE(109)
				this->x;
			}
			else{
				HX_STACK_LINE(109)
				if (((bool((this->listen_x_dyn() != null())) && bool(!(this->ignore_listeners))))){
					HX_STACK_LINE(109)
					this->listen_x(_x);
				}
				HX_STACK_LINE(109)
				this->x;
			}
		}
		HX_STACK_LINE(109)
		{
			HX_STACK_LINE(109)
			this->y = _y;
			HX_STACK_LINE(109)
			if ((this->_construct)){
				HX_STACK_LINE(109)
				this->y;
			}
			else{
				HX_STACK_LINE(109)
				if (((bool((this->listen_y_dyn() != null())) && bool(!(this->ignore_listeners))))){
					HX_STACK_LINE(109)
					this->listen_y(_y);
				}
				HX_STACK_LINE(109)
				this->y;
			}
		}
		HX_STACK_LINE(109)
		this->ignore_listeners = prev;
		HX_STACK_LINE(109)
		if (((bool((this->listen_x_dyn() != null())) && bool(!(this->ignore_listeners))))){
			HX_STACK_LINE(109)
			this->listen_x(this->x);
		}
		HX_STACK_LINE(109)
		if (((bool((this->listen_y_dyn() != null())) && bool(!(this->ignore_listeners))))){
			HX_STACK_LINE(109)
			this->listen_y(this->y);
		}
		HX_STACK_LINE(109)
		hx::ObjectPtr<OBJ_>(this);
	}
	HX_STACK_LINE(114)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC3(Vector_obj,lerp_xy,return )

::phoenix::Vector Vector_obj::lerp_xyz( Float _dest_x,Float _dest_y,Float _dest_z,Float _t){
	HX_STACK_FRAME("phoenix.Vector","lerp_xyz",0x8aa34d5d,"phoenix.Vector.lerp_xyz","phoenix/Vector.hx",119,0x5d0bf7fb)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_dest_x,"_dest_x")
	HX_STACK_ARG(_dest_y,"_dest_y")
	HX_STACK_ARG(_dest_z,"_dest_z")
	HX_STACK_ARG(_t,"_t")
	HX_STACK_LINE(121)
	{
		HX_STACK_LINE(122)
		Float _x;		HX_STACK_VAR(_x,"_x");
		HX_STACK_LINE(122)
		{
			HX_STACK_LINE(122)
			Float value = this->x;		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(122)
			Float t = _t;		HX_STACK_VAR(t,"t");
			HX_STACK_LINE(122)
			if (((t < (int)0))){
				HX_STACK_LINE(122)
				t = (int)0;
			}
			else{
				HX_STACK_LINE(122)
				if (((t > (int)1))){
					HX_STACK_LINE(122)
					t = (int)1;
				}
				else{
					HX_STACK_LINE(122)
					t = t;
				}
			}
			HX_STACK_LINE(122)
			_x = (value + (t * ((_dest_x - value))));
		}
		HX_STACK_LINE(123)
		Float _y;		HX_STACK_VAR(_y,"_y");
		HX_STACK_LINE(123)
		{
			HX_STACK_LINE(123)
			Float value = this->y;		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(123)
			Float t = _t;		HX_STACK_VAR(t,"t");
			HX_STACK_LINE(123)
			if (((t < (int)0))){
				HX_STACK_LINE(123)
				t = (int)0;
			}
			else{
				HX_STACK_LINE(123)
				if (((t > (int)1))){
					HX_STACK_LINE(123)
					t = (int)1;
				}
				else{
					HX_STACK_LINE(123)
					t = t;
				}
			}
			HX_STACK_LINE(123)
			_y = (value + (t * ((_dest_y - value))));
		}
		HX_STACK_LINE(124)
		Float _z;		HX_STACK_VAR(_z,"_z");
		HX_STACK_LINE(124)
		{
			HX_STACK_LINE(124)
			Float value = this->z;		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(124)
			Float t = _t;		HX_STACK_VAR(t,"t");
			HX_STACK_LINE(124)
			if (((t < (int)0))){
				HX_STACK_LINE(124)
				t = (int)0;
			}
			else{
				HX_STACK_LINE(124)
				if (((t > (int)1))){
					HX_STACK_LINE(124)
					t = (int)1;
				}
				else{
					HX_STACK_LINE(124)
					t = t;
				}
			}
			HX_STACK_LINE(124)
			_z = (value + (t * ((_dest_z - value))));
		}
		HX_STACK_LINE(121)
		bool prev = this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
		HX_STACK_LINE(121)
		this->ignore_listeners = true;
		HX_STACK_LINE(121)
		{
			HX_STACK_LINE(121)
			this->x = _x;
			HX_STACK_LINE(121)
			if ((this->_construct)){
				HX_STACK_LINE(121)
				this->x;
			}
			else{
				HX_STACK_LINE(121)
				if (((bool((this->listen_x_dyn() != null())) && bool(!(this->ignore_listeners))))){
					HX_STACK_LINE(121)
					this->listen_x(_x);
				}
				HX_STACK_LINE(121)
				this->x;
			}
		}
		HX_STACK_LINE(121)
		{
			HX_STACK_LINE(121)
			this->y = _y;
			HX_STACK_LINE(121)
			if ((this->_construct)){
				HX_STACK_LINE(121)
				this->y;
			}
			else{
				HX_STACK_LINE(121)
				if (((bool((this->listen_y_dyn() != null())) && bool(!(this->ignore_listeners))))){
					HX_STACK_LINE(121)
					this->listen_y(_y);
				}
				HX_STACK_LINE(121)
				this->y;
			}
		}
		HX_STACK_LINE(121)
		{
			HX_STACK_LINE(121)
			this->z = _z;
			HX_STACK_LINE(121)
			if ((this->_construct)){
				HX_STACK_LINE(121)
				this->z;
			}
			else{
				HX_STACK_LINE(121)
				if (((bool((this->listen_z_dyn() != null())) && bool(!(this->ignore_listeners))))){
					HX_STACK_LINE(121)
					this->listen_z(_z);
				}
				HX_STACK_LINE(121)
				this->z;
			}
		}
		HX_STACK_LINE(121)
		this->ignore_listeners = prev;
		HX_STACK_LINE(121)
		if (((bool((this->listen_x_dyn() != null())) && bool(!(this->ignore_listeners))))){
			HX_STACK_LINE(121)
			this->listen_x(this->x);
		}
		HX_STACK_LINE(121)
		if (((bool((this->listen_y_dyn() != null())) && bool(!(this->ignore_listeners))))){
			HX_STACK_LINE(121)
			this->listen_y(this->y);
		}
		HX_STACK_LINE(121)
		if (((bool((this->listen_z_dyn() != null())) && bool(!(this->ignore_listeners))))){
			HX_STACK_LINE(121)
			this->listen_z(this->z);
		}
		HX_STACK_LINE(121)
		hx::ObjectPtr<OBJ_>(this);
	}
	HX_STACK_LINE(127)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC4(Vector_obj,lerp_xyz,return )

::phoenix::Vector Vector_obj::weighted_average_xy( Float _dest_x,Float _dest_y,Float _slowness){
	HX_STACK_FRAME("phoenix.Vector","weighted_average_xy",0x071f19ff,"phoenix.Vector.weighted_average_xy","phoenix/Vector.hx",131,0x5d0bf7fb)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_dest_x,"_dest_x")
	HX_STACK_ARG(_dest_y,"_dest_y")
	HX_STACK_ARG(_slowness,"_slowness")
	HX_STACK_LINE(133)
	{
		HX_STACK_LINE(134)
		Float _x;		HX_STACK_VAR(_x,"_x");
		HX_STACK_LINE(134)
		{
			HX_STACK_LINE(134)
			Float slowness = _slowness;		HX_STACK_VAR(slowness,"slowness");
			HX_STACK_LINE(134)
			if (((slowness == (int)0))){
				HX_STACK_LINE(134)
				slowness = 0.00000001;
			}
			HX_STACK_LINE(134)
			_x = (Float((((this->x * ((slowness - (int)1))) + _dest_x))) / Float(slowness));
		}
		HX_STACK_LINE(135)
		Float _y;		HX_STACK_VAR(_y,"_y");
		HX_STACK_LINE(135)
		{
			HX_STACK_LINE(135)
			Float slowness = _slowness;		HX_STACK_VAR(slowness,"slowness");
			HX_STACK_LINE(135)
			if (((slowness == (int)0))){
				HX_STACK_LINE(135)
				slowness = 0.00000001;
			}
			HX_STACK_LINE(135)
			_y = (Float((((this->y * ((slowness - (int)1))) + _dest_y))) / Float(slowness));
		}
		HX_STACK_LINE(133)
		bool prev = this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
		HX_STACK_LINE(133)
		this->ignore_listeners = true;
		HX_STACK_LINE(133)
		{
			HX_STACK_LINE(133)
			this->x = _x;
			HX_STACK_LINE(133)
			if ((this->_construct)){
				HX_STACK_LINE(133)
				this->x;
			}
			else{
				HX_STACK_LINE(133)
				if (((bool((this->listen_x_dyn() != null())) && bool(!(this->ignore_listeners))))){
					HX_STACK_LINE(133)
					this->listen_x(_x);
				}
				HX_STACK_LINE(133)
				this->x;
			}
		}
		HX_STACK_LINE(133)
		{
			HX_STACK_LINE(133)
			this->y = _y;
			HX_STACK_LINE(133)
			if ((this->_construct)){
				HX_STACK_LINE(133)
				this->y;
			}
			else{
				HX_STACK_LINE(133)
				if (((bool((this->listen_y_dyn() != null())) && bool(!(this->ignore_listeners))))){
					HX_STACK_LINE(133)
					this->listen_y(_y);
				}
				HX_STACK_LINE(133)
				this->y;
			}
		}
		HX_STACK_LINE(133)
		this->ignore_listeners = prev;
		HX_STACK_LINE(133)
		if (((bool((this->listen_x_dyn() != null())) && bool(!(this->ignore_listeners))))){
			HX_STACK_LINE(133)
			this->listen_x(this->x);
		}
		HX_STACK_LINE(133)
		if (((bool((this->listen_y_dyn() != null())) && bool(!(this->ignore_listeners))))){
			HX_STACK_LINE(133)
			this->listen_y(this->y);
		}
		HX_STACK_LINE(133)
		hx::ObjectPtr<OBJ_>(this);
	}
	HX_STACK_LINE(138)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC3(Vector_obj,weighted_average_xy,return )

::phoenix::Vector Vector_obj::weighted_average_xyz( Float _dest_x,Float _dest_y,Float _dest_z,Float _slowness){
	HX_STACK_FRAME("phoenix.Vector","weighted_average_xyz",0x3417a59b,"phoenix.Vector.weighted_average_xyz","phoenix/Vector.hx",142,0x5d0bf7fb)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_dest_x,"_dest_x")
	HX_STACK_ARG(_dest_y,"_dest_y")
	HX_STACK_ARG(_dest_z,"_dest_z")
	HX_STACK_ARG(_slowness,"_slowness")
	HX_STACK_LINE(144)
	{
		HX_STACK_LINE(145)
		Float _x;		HX_STACK_VAR(_x,"_x");
		HX_STACK_LINE(145)
		{
			HX_STACK_LINE(145)
			Float slowness = _slowness;		HX_STACK_VAR(slowness,"slowness");
			HX_STACK_LINE(145)
			if (((slowness == (int)0))){
				HX_STACK_LINE(145)
				slowness = 0.00000001;
			}
			HX_STACK_LINE(145)
			_x = (Float((((this->x * ((slowness - (int)1))) + _dest_x))) / Float(slowness));
		}
		HX_STACK_LINE(146)
		Float _y;		HX_STACK_VAR(_y,"_y");
		HX_STACK_LINE(146)
		{
			HX_STACK_LINE(146)
			Float slowness = _slowness;		HX_STACK_VAR(slowness,"slowness");
			HX_STACK_LINE(146)
			if (((slowness == (int)0))){
				HX_STACK_LINE(146)
				slowness = 0.00000001;
			}
			HX_STACK_LINE(146)
			_y = (Float((((this->y * ((slowness - (int)1))) + _dest_y))) / Float(slowness));
		}
		HX_STACK_LINE(147)
		Float _z;		HX_STACK_VAR(_z,"_z");
		HX_STACK_LINE(147)
		{
			HX_STACK_LINE(147)
			Float slowness = _slowness;		HX_STACK_VAR(slowness,"slowness");
			HX_STACK_LINE(147)
			if (((slowness == (int)0))){
				HX_STACK_LINE(147)
				slowness = 0.00000001;
			}
			HX_STACK_LINE(147)
			_z = (Float((((this->z * ((slowness - (int)1))) + _dest_z))) / Float(slowness));
		}
		HX_STACK_LINE(144)
		bool prev = this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
		HX_STACK_LINE(144)
		this->ignore_listeners = true;
		HX_STACK_LINE(144)
		{
			HX_STACK_LINE(144)
			this->x = _x;
			HX_STACK_LINE(144)
			if ((this->_construct)){
				HX_STACK_LINE(144)
				this->x;
			}
			else{
				HX_STACK_LINE(144)
				if (((bool((this->listen_x_dyn() != null())) && bool(!(this->ignore_listeners))))){
					HX_STACK_LINE(144)
					this->listen_x(_x);
				}
				HX_STACK_LINE(144)
				this->x;
			}
		}
		HX_STACK_LINE(144)
		{
			HX_STACK_LINE(144)
			this->y = _y;
			HX_STACK_LINE(144)
			if ((this->_construct)){
				HX_STACK_LINE(144)
				this->y;
			}
			else{
				HX_STACK_LINE(144)
				if (((bool((this->listen_y_dyn() != null())) && bool(!(this->ignore_listeners))))){
					HX_STACK_LINE(144)
					this->listen_y(_y);
				}
				HX_STACK_LINE(144)
				this->y;
			}
		}
		HX_STACK_LINE(144)
		{
			HX_STACK_LINE(144)
			this->z = _z;
			HX_STACK_LINE(144)
			if ((this->_construct)){
				HX_STACK_LINE(144)
				this->z;
			}
			else{
				HX_STACK_LINE(144)
				if (((bool((this->listen_z_dyn() != null())) && bool(!(this->ignore_listeners))))){
					HX_STACK_LINE(144)
					this->listen_z(_z);
				}
				HX_STACK_LINE(144)
				this->z;
			}
		}
		HX_STACK_LINE(144)
		this->ignore_listeners = prev;
		HX_STACK_LINE(144)
		if (((bool((this->listen_x_dyn() != null())) && bool(!(this->ignore_listeners))))){
			HX_STACK_LINE(144)
			this->listen_x(this->x);
		}
		HX_STACK_LINE(144)
		if (((bool((this->listen_y_dyn() != null())) && bool(!(this->ignore_listeners))))){
			HX_STACK_LINE(144)
			this->listen_y(this->y);
		}
		HX_STACK_LINE(144)
		if (((bool((this->listen_z_dyn() != null())) && bool(!(this->ignore_listeners))))){
			HX_STACK_LINE(144)
			this->listen_z(this->z);
		}
		HX_STACK_LINE(144)
		hx::ObjectPtr<OBJ_>(this);
	}
	HX_STACK_LINE(150)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC4(Vector_obj,weighted_average_xyz,return )

::phoenix::Vector Vector_obj::_int( ){
	HX_STACK_FRAME("phoenix.Vector","int",0x8c8f5263,"phoenix.Vector.int","phoenix/Vector.hx",154,0x5d0bf7fb)
	HX_STACK_THIS(this)
	HX_STACK_LINE(156)
	{
		HX_STACK_LINE(156)
		Float _x = ::Math_obj::round(this->x);		HX_STACK_VAR(_x,"_x");
		HX_STACK_LINE(156)
		Float _y = ::Math_obj::round(this->y);		HX_STACK_VAR(_y,"_y");
		HX_STACK_LINE(156)
		Float _z = ::Math_obj::round(this->z);		HX_STACK_VAR(_z,"_z");
		HX_STACK_LINE(156)
		bool prev = this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
		HX_STACK_LINE(156)
		this->ignore_listeners = true;
		HX_STACK_LINE(156)
		{
			HX_STACK_LINE(156)
			this->x = _x;
			HX_STACK_LINE(156)
			if ((this->_construct)){
				HX_STACK_LINE(156)
				this->x;
			}
			else{
				HX_STACK_LINE(156)
				if (((bool((this->listen_x_dyn() != null())) && bool(!(this->ignore_listeners))))){
					HX_STACK_LINE(156)
					this->listen_x(_x);
				}
				HX_STACK_LINE(156)
				this->x;
			}
		}
		HX_STACK_LINE(156)
		{
			HX_STACK_LINE(156)
			this->y = _y;
			HX_STACK_LINE(156)
			if ((this->_construct)){
				HX_STACK_LINE(156)
				this->y;
			}
			else{
				HX_STACK_LINE(156)
				if (((bool((this->listen_y_dyn() != null())) && bool(!(this->ignore_listeners))))){
					HX_STACK_LINE(156)
					this->listen_y(_y);
				}
				HX_STACK_LINE(156)
				this->y;
			}
		}
		HX_STACK_LINE(156)
		{
			HX_STACK_LINE(156)
			this->z = _z;
			HX_STACK_LINE(156)
			if ((this->_construct)){
				HX_STACK_LINE(156)
				this->z;
			}
			else{
				HX_STACK_LINE(156)
				if (((bool((this->listen_z_dyn() != null())) && bool(!(this->ignore_listeners))))){
					HX_STACK_LINE(156)
					this->listen_z(_z);
				}
				HX_STACK_LINE(156)
				this->z;
			}
		}
		HX_STACK_LINE(156)
		this->ignore_listeners = prev;
		HX_STACK_LINE(156)
		if (((bool((this->listen_x_dyn() != null())) && bool(!(this->ignore_listeners))))){
			HX_STACK_LINE(156)
			this->listen_x(this->x);
		}
		HX_STACK_LINE(156)
		if (((bool((this->listen_y_dyn() != null())) && bool(!(this->ignore_listeners))))){
			HX_STACK_LINE(156)
			this->listen_y(this->y);
		}
		HX_STACK_LINE(156)
		if (((bool((this->listen_z_dyn() != null())) && bool(!(this->ignore_listeners))))){
			HX_STACK_LINE(156)
			this->listen_z(this->z);
		}
		HX_STACK_LINE(156)
		hx::ObjectPtr<OBJ_>(this);
	}
	HX_STACK_LINE(158)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC0(Vector_obj,_int,return )

::phoenix::Vector Vector_obj::int_x( ){
	HX_STACK_FRAME("phoenix.Vector","int_x",0x4cd3445c,"phoenix.Vector.int_x","phoenix/Vector.hx",162,0x5d0bf7fb)
	HX_STACK_THIS(this)
	HX_STACK_LINE(164)
	{
		HX_STACK_LINE(164)
		Float _x = ::Math_obj::round(this->x);		HX_STACK_VAR(_x,"_x");
		HX_STACK_LINE(164)
		this->x = _x;
		HX_STACK_LINE(164)
		if ((this->_construct)){
			HX_STACK_LINE(164)
			this->x;
		}
		else{
			HX_STACK_LINE(164)
			if (((bool((this->listen_x_dyn() != null())) && bool(!(this->ignore_listeners))))){
				HX_STACK_LINE(164)
				this->listen_x(_x);
			}
			HX_STACK_LINE(164)
			this->x;
		}
	}
	HX_STACK_LINE(166)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC0(Vector_obj,int_x,return )

::phoenix::Vector Vector_obj::int_y( ){
	HX_STACK_FRAME("phoenix.Vector","int_y",0x4cd3445d,"phoenix.Vector.int_y","phoenix/Vector.hx",170,0x5d0bf7fb)
	HX_STACK_THIS(this)
	HX_STACK_LINE(172)
	{
		HX_STACK_LINE(172)
		Float _y = ::Math_obj::round(this->y);		HX_STACK_VAR(_y,"_y");
		HX_STACK_LINE(172)
		this->y = _y;
		HX_STACK_LINE(172)
		if ((this->_construct)){
			HX_STACK_LINE(172)
			this->y;
		}
		else{
			HX_STACK_LINE(172)
			if (((bool((this->listen_y_dyn() != null())) && bool(!(this->ignore_listeners))))){
				HX_STACK_LINE(172)
				this->listen_y(_y);
			}
			HX_STACK_LINE(172)
			this->y;
		}
	}
	HX_STACK_LINE(174)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC0(Vector_obj,int_y,return )

::phoenix::Vector Vector_obj::int_z( ){
	HX_STACK_FRAME("phoenix.Vector","int_z",0x4cd3445e,"phoenix.Vector.int_z","phoenix/Vector.hx",178,0x5d0bf7fb)
	HX_STACK_THIS(this)
	HX_STACK_LINE(180)
	{
		HX_STACK_LINE(180)
		Float _z = ::Math_obj::round(this->z);		HX_STACK_VAR(_z,"_z");
		HX_STACK_LINE(180)
		this->z = _z;
		HX_STACK_LINE(180)
		if ((this->_construct)){
			HX_STACK_LINE(180)
			this->z;
		}
		else{
			HX_STACK_LINE(180)
			if (((bool((this->listen_z_dyn() != null())) && bool(!(this->ignore_listeners))))){
				HX_STACK_LINE(180)
				this->listen_z(_z);
			}
			HX_STACK_LINE(180)
			this->z;
		}
	}
	HX_STACK_LINE(182)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC0(Vector_obj,int_z,return )

::String Vector_obj::toString( ){
	HX_STACK_FRAME("phoenix.Vector","toString",0xe91b46b8,"phoenix.Vector.toString","phoenix/Vector.hx",188,0x5d0bf7fb)
	HX_STACK_THIS(this)
	HX_STACK_LINE(188)
	return ((((((HX_CSTRING("{ x:") + this->x) + HX_CSTRING(", y:")) + this->y) + HX_CSTRING(", z:")) + this->z) + HX_CSTRING(" }"));
}


HX_DEFINE_DYNAMIC_FUNC0(Vector_obj,toString,return )

bool Vector_obj::equals( ::phoenix::Vector other){
	HX_STACK_FRAME("phoenix.Vector","equals",0x0d79894b,"phoenix.Vector.equals","phoenix/Vector.hx",193,0x5d0bf7fb)
	HX_STACK_THIS(this)
	HX_STACK_ARG(other,"other")
	HX_STACK_LINE(193)
	return (bool((bool((bool((this->x == other->x)) && bool((this->y == other->y)))) && bool((this->z == other->z)))) && bool((this->w == other->w)));
}


HX_DEFINE_DYNAMIC_FUNC1(Vector_obj,equals,return )

::phoenix::Vector Vector_obj::clone( ){
	HX_STACK_FRAME("phoenix.Vector","clone",0xd7159dd1,"phoenix.Vector.clone","phoenix/Vector.hx",197,0x5d0bf7fb)
	HX_STACK_THIS(this)
	HX_STACK_LINE(197)
	return ::phoenix::Vector_obj::__new(this->x,this->y,this->z,this->w);
}


HX_DEFINE_DYNAMIC_FUNC0(Vector_obj,clone,return )

::phoenix::Vector Vector_obj::normalize( ){
	HX_STACK_FRAME("phoenix.Vector","normalize",0x91dc0c01,"phoenix.Vector.normalize","phoenix/Vector.hx",201,0x5d0bf7fb)
	HX_STACK_THIS(this)
	HX_STACK_LINE(201)
	Float v = ::Math_obj::sqrt((((this->x * this->x) + (this->y * this->y)) + (this->z * this->z)));		HX_STACK_VAR(v,"v");
	HX_STACK_LINE(201)
	if (((v != (int)0))){
		HX_STACK_LINE(201)
		Float _x = (Float(this->x) / Float(v));		HX_STACK_VAR(_x,"_x");
		HX_STACK_LINE(201)
		Float _y = (Float(this->y) / Float(v));		HX_STACK_VAR(_y,"_y");
		HX_STACK_LINE(201)
		Float _z = (Float(this->z) / Float(v));		HX_STACK_VAR(_z,"_z");
		HX_STACK_LINE(201)
		bool prev = this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
		HX_STACK_LINE(201)
		this->ignore_listeners = true;
		HX_STACK_LINE(201)
		{
			HX_STACK_LINE(201)
			this->x = _x;
			HX_STACK_LINE(201)
			if ((this->_construct)){
				HX_STACK_LINE(201)
				this->x;
			}
			else{
				HX_STACK_LINE(201)
				if (((bool((this->listen_x_dyn() != null())) && bool(!(this->ignore_listeners))))){
					HX_STACK_LINE(201)
					this->listen_x(_x);
				}
				HX_STACK_LINE(201)
				this->x;
			}
		}
		HX_STACK_LINE(201)
		{
			HX_STACK_LINE(201)
			this->y = _y;
			HX_STACK_LINE(201)
			if ((this->_construct)){
				HX_STACK_LINE(201)
				this->y;
			}
			else{
				HX_STACK_LINE(201)
				if (((bool((this->listen_y_dyn() != null())) && bool(!(this->ignore_listeners))))){
					HX_STACK_LINE(201)
					this->listen_y(_y);
				}
				HX_STACK_LINE(201)
				this->y;
			}
		}
		HX_STACK_LINE(201)
		{
			HX_STACK_LINE(201)
			this->z = _z;
			HX_STACK_LINE(201)
			if ((this->_construct)){
				HX_STACK_LINE(201)
				this->z;
			}
			else{
				HX_STACK_LINE(201)
				if (((bool((this->listen_z_dyn() != null())) && bool(!(this->ignore_listeners))))){
					HX_STACK_LINE(201)
					this->listen_z(_z);
				}
				HX_STACK_LINE(201)
				this->z;
			}
		}
		HX_STACK_LINE(201)
		this->ignore_listeners = prev;
		HX_STACK_LINE(201)
		if (((bool((this->listen_x_dyn() != null())) && bool(!(this->ignore_listeners))))){
			HX_STACK_LINE(201)
			this->listen_x(this->x);
		}
		HX_STACK_LINE(201)
		if (((bool((this->listen_y_dyn() != null())) && bool(!(this->ignore_listeners))))){
			HX_STACK_LINE(201)
			this->listen_y(this->y);
		}
		HX_STACK_LINE(201)
		if (((bool((this->listen_z_dyn() != null())) && bool(!(this->ignore_listeners))))){
			HX_STACK_LINE(201)
			this->listen_z(this->z);
		}
		HX_STACK_LINE(201)
		hx::ObjectPtr<OBJ_>(this);
	}
	else{
		HX_STACK_LINE(201)
		bool prev = this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
		HX_STACK_LINE(201)
		this->ignore_listeners = true;
		HX_STACK_LINE(201)
		{
			HX_STACK_LINE(201)
			this->x = (int)0;
			HX_STACK_LINE(201)
			if ((this->_construct)){
				HX_STACK_LINE(201)
				this->x;
			}
			else{
				HX_STACK_LINE(201)
				if (((bool((this->listen_x_dyn() != null())) && bool(!(this->ignore_listeners))))){
					HX_STACK_LINE(201)
					this->listen_x((int)0);
				}
				HX_STACK_LINE(201)
				this->x;
			}
		}
		HX_STACK_LINE(201)
		{
			HX_STACK_LINE(201)
			this->y = (int)0;
			HX_STACK_LINE(201)
			if ((this->_construct)){
				HX_STACK_LINE(201)
				this->y;
			}
			else{
				HX_STACK_LINE(201)
				if (((bool((this->listen_y_dyn() != null())) && bool(!(this->ignore_listeners))))){
					HX_STACK_LINE(201)
					this->listen_y((int)0);
				}
				HX_STACK_LINE(201)
				this->y;
			}
		}
		HX_STACK_LINE(201)
		{
			HX_STACK_LINE(201)
			this->z = (int)0;
			HX_STACK_LINE(201)
			if ((this->_construct)){
				HX_STACK_LINE(201)
				this->z;
			}
			else{
				HX_STACK_LINE(201)
				if (((bool((this->listen_z_dyn() != null())) && bool(!(this->ignore_listeners))))){
					HX_STACK_LINE(201)
					this->listen_z((int)0);
				}
				HX_STACK_LINE(201)
				this->z;
			}
		}
		HX_STACK_LINE(201)
		this->ignore_listeners = prev;
		HX_STACK_LINE(201)
		if (((bool((this->listen_x_dyn() != null())) && bool(!(this->ignore_listeners))))){
			HX_STACK_LINE(201)
			this->listen_x(this->x);
		}
		HX_STACK_LINE(201)
		if (((bool((this->listen_y_dyn() != null())) && bool(!(this->ignore_listeners))))){
			HX_STACK_LINE(201)
			this->listen_y(this->y);
		}
		HX_STACK_LINE(201)
		if (((bool((this->listen_z_dyn() != null())) && bool(!(this->ignore_listeners))))){
			HX_STACK_LINE(201)
			this->listen_z(this->z);
		}
		HX_STACK_LINE(201)
		hx::ObjectPtr<OBJ_>(this);
	}
	HX_STACK_LINE(201)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC0(Vector_obj,normalize,return )

Float Vector_obj::dot( ::phoenix::Vector other){
	HX_STACK_FRAME("phoenix.Vector","dot",0x8c8b87fd,"phoenix.Vector.dot","phoenix/Vector.hx",206,0x5d0bf7fb)
	HX_STACK_THIS(this)
	HX_STACK_ARG(other,"other")
	HX_STACK_LINE(206)
	return (((this->x * other->x) + (this->y * other->y)) + (this->z * other->z));
}


HX_DEFINE_DYNAMIC_FUNC1(Vector_obj,dot,return )

::phoenix::Vector Vector_obj::cross( ::phoenix::Vector a,::phoenix::Vector b){
	HX_STACK_FRAME("phoenix.Vector","cross",0xdb0ce9f4,"phoenix.Vector.cross","phoenix/Vector.hx",211,0x5d0bf7fb)
	HX_STACK_THIS(this)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(213)
	{
		HX_STACK_LINE(213)
		Float _x = ((a->y * b->z) - (a->z * b->y));		HX_STACK_VAR(_x,"_x");
		HX_STACK_LINE(214)
		Float _y = ((a->z * b->x) - (a->x * b->z));		HX_STACK_VAR(_y,"_y");
		HX_STACK_LINE(215)
		Float _z = ((a->x * b->y) - (a->y * b->x));		HX_STACK_VAR(_z,"_z");
		HX_STACK_LINE(213)
		bool prev = this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
		HX_STACK_LINE(213)
		this->ignore_listeners = true;
		HX_STACK_LINE(213)
		{
			HX_STACK_LINE(213)
			this->x = _x;
			HX_STACK_LINE(213)
			if ((this->_construct)){
				HX_STACK_LINE(213)
				this->x;
			}
			else{
				HX_STACK_LINE(213)
				if (((bool((this->listen_x_dyn() != null())) && bool(!(this->ignore_listeners))))){
					HX_STACK_LINE(213)
					this->listen_x(_x);
				}
				HX_STACK_LINE(213)
				this->x;
			}
		}
		HX_STACK_LINE(213)
		{
			HX_STACK_LINE(213)
			this->y = _y;
			HX_STACK_LINE(213)
			if ((this->_construct)){
				HX_STACK_LINE(213)
				this->y;
			}
			else{
				HX_STACK_LINE(213)
				if (((bool((this->listen_y_dyn() != null())) && bool(!(this->ignore_listeners))))){
					HX_STACK_LINE(213)
					this->listen_y(_y);
				}
				HX_STACK_LINE(213)
				this->y;
			}
		}
		HX_STACK_LINE(213)
		{
			HX_STACK_LINE(213)
			this->z = _z;
			HX_STACK_LINE(213)
			if ((this->_construct)){
				HX_STACK_LINE(213)
				this->z;
			}
			else{
				HX_STACK_LINE(213)
				if (((bool((this->listen_z_dyn() != null())) && bool(!(this->ignore_listeners))))){
					HX_STACK_LINE(213)
					this->listen_z(_z);
				}
				HX_STACK_LINE(213)
				this->z;
			}
		}
		HX_STACK_LINE(213)
		this->ignore_listeners = prev;
		HX_STACK_LINE(213)
		if (((bool((this->listen_x_dyn() != null())) && bool(!(this->ignore_listeners))))){
			HX_STACK_LINE(213)
			this->listen_x(this->x);
		}
		HX_STACK_LINE(213)
		if (((bool((this->listen_y_dyn() != null())) && bool(!(this->ignore_listeners))))){
			HX_STACK_LINE(213)
			this->listen_y(this->y);
		}
		HX_STACK_LINE(213)
		if (((bool((this->listen_z_dyn() != null())) && bool(!(this->ignore_listeners))))){
			HX_STACK_LINE(213)
			this->listen_z(this->z);
		}
		HX_STACK_LINE(213)
		hx::ObjectPtr<OBJ_>(this);
	}
	HX_STACK_LINE(217)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC2(Vector_obj,cross,return )

::phoenix::Vector Vector_obj::invert( ){
	HX_STACK_FRAME("phoenix.Vector","invert",0xed5f8222,"phoenix.Vector.invert","phoenix/Vector.hx",221,0x5d0bf7fb)
	HX_STACK_THIS(this)
	HX_STACK_LINE(223)
	{
		HX_STACK_LINE(223)
		Float _x = -(this->x);		HX_STACK_VAR(_x,"_x");
		HX_STACK_LINE(223)
		Float _y = -(this->y);		HX_STACK_VAR(_y,"_y");
		HX_STACK_LINE(223)
		Float _z = -(this->z);		HX_STACK_VAR(_z,"_z");
		HX_STACK_LINE(223)
		bool prev = this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
		HX_STACK_LINE(223)
		this->ignore_listeners = true;
		HX_STACK_LINE(223)
		{
			HX_STACK_LINE(223)
			this->x = _x;
			HX_STACK_LINE(223)
			if ((this->_construct)){
				HX_STACK_LINE(223)
				this->x;
			}
			else{
				HX_STACK_LINE(223)
				if (((bool((this->listen_x_dyn() != null())) && bool(!(this->ignore_listeners))))){
					HX_STACK_LINE(223)
					this->listen_x(_x);
				}
				HX_STACK_LINE(223)
				this->x;
			}
		}
		HX_STACK_LINE(223)
		{
			HX_STACK_LINE(223)
			this->y = _y;
			HX_STACK_LINE(223)
			if ((this->_construct)){
				HX_STACK_LINE(223)
				this->y;
			}
			else{
				HX_STACK_LINE(223)
				if (((bool((this->listen_y_dyn() != null())) && bool(!(this->ignore_listeners))))){
					HX_STACK_LINE(223)
					this->listen_y(_y);
				}
				HX_STACK_LINE(223)
				this->y;
			}
		}
		HX_STACK_LINE(223)
		{
			HX_STACK_LINE(223)
			this->z = _z;
			HX_STACK_LINE(223)
			if ((this->_construct)){
				HX_STACK_LINE(223)
				this->z;
			}
			else{
				HX_STACK_LINE(223)
				if (((bool((this->listen_z_dyn() != null())) && bool(!(this->ignore_listeners))))){
					HX_STACK_LINE(223)
					this->listen_z(_z);
				}
				HX_STACK_LINE(223)
				this->z;
			}
		}
		HX_STACK_LINE(223)
		this->ignore_listeners = prev;
		HX_STACK_LINE(223)
		if (((bool((this->listen_x_dyn() != null())) && bool(!(this->ignore_listeners))))){
			HX_STACK_LINE(223)
			this->listen_x(this->x);
		}
		HX_STACK_LINE(223)
		if (((bool((this->listen_y_dyn() != null())) && bool(!(this->ignore_listeners))))){
			HX_STACK_LINE(223)
			this->listen_y(this->y);
		}
		HX_STACK_LINE(223)
		if (((bool((this->listen_z_dyn() != null())) && bool(!(this->ignore_listeners))))){
			HX_STACK_LINE(223)
			this->listen_z(this->z);
		}
		HX_STACK_LINE(223)
		hx::ObjectPtr<OBJ_>(this);
	}
	HX_STACK_LINE(225)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC0(Vector_obj,invert,return )

::phoenix::Vector Vector_obj::add( ::phoenix::Vector other){
	HX_STACK_FRAME("phoenix.Vector","add",0x8c893795,"phoenix.Vector.add","phoenix/Vector.hx",319,0x5d0bf7fb)
	HX_STACK_THIS(this)
	HX_STACK_ARG(other,"other")
	HX_STACK_LINE(321)
	if (((other == null()))){
		HX_STACK_LINE(322)
		HX_STACK_DO_THROW(HX_CSTRING("vector.add other was handed in as null"));
	}
	HX_STACK_LINE(325)
	{
		HX_STACK_LINE(325)
		Float _x = (this->x + other->x);		HX_STACK_VAR(_x,"_x");
		HX_STACK_LINE(325)
		Float _y = (this->y + other->y);		HX_STACK_VAR(_y,"_y");
		HX_STACK_LINE(325)
		Float _z = (this->z + other->z);		HX_STACK_VAR(_z,"_z");
		HX_STACK_LINE(325)
		bool prev = this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
		HX_STACK_LINE(325)
		this->ignore_listeners = true;
		HX_STACK_LINE(325)
		{
			HX_STACK_LINE(325)
			this->x = _x;
			HX_STACK_LINE(325)
			if ((this->_construct)){
				HX_STACK_LINE(325)
				this->x;
			}
			else{
				HX_STACK_LINE(325)
				if (((bool((this->listen_x_dyn() != null())) && bool(!(this->ignore_listeners))))){
					HX_STACK_LINE(325)
					this->listen_x(_x);
				}
				HX_STACK_LINE(325)
				this->x;
			}
		}
		HX_STACK_LINE(325)
		{
			HX_STACK_LINE(325)
			this->y = _y;
			HX_STACK_LINE(325)
			if ((this->_construct)){
				HX_STACK_LINE(325)
				this->y;
			}
			else{
				HX_STACK_LINE(325)
				if (((bool((this->listen_y_dyn() != null())) && bool(!(this->ignore_listeners))))){
					HX_STACK_LINE(325)
					this->listen_y(_y);
				}
				HX_STACK_LINE(325)
				this->y;
			}
		}
		HX_STACK_LINE(325)
		{
			HX_STACK_LINE(325)
			this->z = _z;
			HX_STACK_LINE(325)
			if ((this->_construct)){
				HX_STACK_LINE(325)
				this->z;
			}
			else{
				HX_STACK_LINE(325)
				if (((bool((this->listen_z_dyn() != null())) && bool(!(this->ignore_listeners))))){
					HX_STACK_LINE(325)
					this->listen_z(_z);
				}
				HX_STACK_LINE(325)
				this->z;
			}
		}
		HX_STACK_LINE(325)
		this->ignore_listeners = prev;
		HX_STACK_LINE(325)
		if (((bool((this->listen_x_dyn() != null())) && bool(!(this->ignore_listeners))))){
			HX_STACK_LINE(325)
			this->listen_x(this->x);
		}
		HX_STACK_LINE(325)
		if (((bool((this->listen_y_dyn() != null())) && bool(!(this->ignore_listeners))))){
			HX_STACK_LINE(325)
			this->listen_y(this->y);
		}
		HX_STACK_LINE(325)
		if (((bool((this->listen_z_dyn() != null())) && bool(!(this->ignore_listeners))))){
			HX_STACK_LINE(325)
			this->listen_z(this->z);
		}
		HX_STACK_LINE(325)
		hx::ObjectPtr<OBJ_>(this);
	}
	HX_STACK_LINE(327)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(Vector_obj,add,return )

::phoenix::Vector Vector_obj::add_xyz( hx::Null< Float >  __o__x,hx::Null< Float >  __o__y,hx::Null< Float >  __o__z){
Float _x = __o__x.Default(0);
Float _y = __o__y.Default(0);
Float _z = __o__z.Default(0);
	HX_STACK_FRAME("phoenix.Vector","add_xyz",0x18cbe36f,"phoenix.Vector.add_xyz","phoenix/Vector.hx",331,0x5d0bf7fb)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_x,"_x")
	HX_STACK_ARG(_y,"_y")
	HX_STACK_ARG(_z,"_z")
{
		HX_STACK_LINE(333)
		{
			HX_STACK_LINE(333)
			Float _x1 = (this->x + _x);		HX_STACK_VAR(_x1,"_x1");
			HX_STACK_LINE(333)
			Float _y1 = (this->y + _y);		HX_STACK_VAR(_y1,"_y1");
			HX_STACK_LINE(333)
			Float _z1 = (this->z + _z);		HX_STACK_VAR(_z1,"_z1");
			HX_STACK_LINE(333)
			bool prev = this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
			HX_STACK_LINE(333)
			this->ignore_listeners = true;
			HX_STACK_LINE(333)
			{
				HX_STACK_LINE(333)
				this->x = _x1;
				HX_STACK_LINE(333)
				if ((this->_construct)){
					HX_STACK_LINE(333)
					this->x;
				}
				else{
					HX_STACK_LINE(333)
					if (((bool((this->listen_x_dyn() != null())) && bool(!(this->ignore_listeners))))){
						HX_STACK_LINE(333)
						this->listen_x(_x1);
					}
					HX_STACK_LINE(333)
					this->x;
				}
			}
			HX_STACK_LINE(333)
			{
				HX_STACK_LINE(333)
				this->y = _y1;
				HX_STACK_LINE(333)
				if ((this->_construct)){
					HX_STACK_LINE(333)
					this->y;
				}
				else{
					HX_STACK_LINE(333)
					if (((bool((this->listen_y_dyn() != null())) && bool(!(this->ignore_listeners))))){
						HX_STACK_LINE(333)
						this->listen_y(_y1);
					}
					HX_STACK_LINE(333)
					this->y;
				}
			}
			HX_STACK_LINE(333)
			{
				HX_STACK_LINE(333)
				this->z = _z1;
				HX_STACK_LINE(333)
				if ((this->_construct)){
					HX_STACK_LINE(333)
					this->z;
				}
				else{
					HX_STACK_LINE(333)
					if (((bool((this->listen_z_dyn() != null())) && bool(!(this->ignore_listeners))))){
						HX_STACK_LINE(333)
						this->listen_z(_z1);
					}
					HX_STACK_LINE(333)
					this->z;
				}
			}
			HX_STACK_LINE(333)
			this->ignore_listeners = prev;
			HX_STACK_LINE(333)
			if (((bool((this->listen_x_dyn() != null())) && bool(!(this->ignore_listeners))))){
				HX_STACK_LINE(333)
				this->listen_x(this->x);
			}
			HX_STACK_LINE(333)
			if (((bool((this->listen_y_dyn() != null())) && bool(!(this->ignore_listeners))))){
				HX_STACK_LINE(333)
				this->listen_y(this->y);
			}
			HX_STACK_LINE(333)
			if (((bool((this->listen_z_dyn() != null())) && bool(!(this->ignore_listeners))))){
				HX_STACK_LINE(333)
				this->listen_z(this->z);
			}
			HX_STACK_LINE(333)
			hx::ObjectPtr<OBJ_>(this);
		}
		HX_STACK_LINE(335)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC3(Vector_obj,add_xyz,return )

::phoenix::Vector Vector_obj::subtract( ::phoenix::Vector other){
	HX_STACK_FRAME("phoenix.Vector","subtract",0xa8bdeb20,"phoenix.Vector.subtract","phoenix/Vector.hx",340,0x5d0bf7fb)
	HX_STACK_THIS(this)
	HX_STACK_ARG(other,"other")
	HX_STACK_LINE(342)
	if (((other == null()))){
		HX_STACK_LINE(343)
		HX_STACK_DO_THROW(HX_CSTRING("vector.subtract other was handed in as null"));
	}
	HX_STACK_LINE(346)
	{
		HX_STACK_LINE(346)
		Float _x = (this->x - other->x);		HX_STACK_VAR(_x,"_x");
		HX_STACK_LINE(346)
		Float _y = (this->y - other->y);		HX_STACK_VAR(_y,"_y");
		HX_STACK_LINE(346)
		Float _z = (this->z - other->z);		HX_STACK_VAR(_z,"_z");
		HX_STACK_LINE(346)
		bool prev = this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
		HX_STACK_LINE(346)
		this->ignore_listeners = true;
		HX_STACK_LINE(346)
		{
			HX_STACK_LINE(346)
			this->x = _x;
			HX_STACK_LINE(346)
			if ((this->_construct)){
				HX_STACK_LINE(346)
				this->x;
			}
			else{
				HX_STACK_LINE(346)
				if (((bool((this->listen_x_dyn() != null())) && bool(!(this->ignore_listeners))))){
					HX_STACK_LINE(346)
					this->listen_x(_x);
				}
				HX_STACK_LINE(346)
				this->x;
			}
		}
		HX_STACK_LINE(346)
		{
			HX_STACK_LINE(346)
			this->y = _y;
			HX_STACK_LINE(346)
			if ((this->_construct)){
				HX_STACK_LINE(346)
				this->y;
			}
			else{
				HX_STACK_LINE(346)
				if (((bool((this->listen_y_dyn() != null())) && bool(!(this->ignore_listeners))))){
					HX_STACK_LINE(346)
					this->listen_y(_y);
				}
				HX_STACK_LINE(346)
				this->y;
			}
		}
		HX_STACK_LINE(346)
		{
			HX_STACK_LINE(346)
			this->z = _z;
			HX_STACK_LINE(346)
			if ((this->_construct)){
				HX_STACK_LINE(346)
				this->z;
			}
			else{
				HX_STACK_LINE(346)
				if (((bool((this->listen_z_dyn() != null())) && bool(!(this->ignore_listeners))))){
					HX_STACK_LINE(346)
					this->listen_z(_z);
				}
				HX_STACK_LINE(346)
				this->z;
			}
		}
		HX_STACK_LINE(346)
		this->ignore_listeners = prev;
		HX_STACK_LINE(346)
		if (((bool((this->listen_x_dyn() != null())) && bool(!(this->ignore_listeners))))){
			HX_STACK_LINE(346)
			this->listen_x(this->x);
		}
		HX_STACK_LINE(346)
		if (((bool((this->listen_y_dyn() != null())) && bool(!(this->ignore_listeners))))){
			HX_STACK_LINE(346)
			this->listen_y(this->y);
		}
		HX_STACK_LINE(346)
		if (((bool((this->listen_z_dyn() != null())) && bool(!(this->ignore_listeners))))){
			HX_STACK_LINE(346)
			this->listen_z(this->z);
		}
		HX_STACK_LINE(346)
		hx::ObjectPtr<OBJ_>(this);
	}
	HX_STACK_LINE(348)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(Vector_obj,subtract,return )

::phoenix::Vector Vector_obj::subtract_xyz( hx::Null< Float >  __o__x,hx::Null< Float >  __o__y,hx::Null< Float >  __o__z){
Float _x = __o__x.Default(0);
Float _y = __o__y.Default(0);
Float _z = __o__z.Default(0);
	HX_STACK_FRAME("phoenix.Vector","subtract_xyz",0x2188b87a,"phoenix.Vector.subtract_xyz","phoenix/Vector.hx",352,0x5d0bf7fb)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_x,"_x")
	HX_STACK_ARG(_y,"_y")
	HX_STACK_ARG(_z,"_z")
{
		HX_STACK_LINE(354)
		{
			HX_STACK_LINE(354)
			Float _x1 = (this->x - _x);		HX_STACK_VAR(_x1,"_x1");
			HX_STACK_LINE(354)
			Float _y1 = (this->y - _y);		HX_STACK_VAR(_y1,"_y1");
			HX_STACK_LINE(354)
			Float _z1 = (this->z - _z);		HX_STACK_VAR(_z1,"_z1");
			HX_STACK_LINE(354)
			bool prev = this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
			HX_STACK_LINE(354)
			this->ignore_listeners = true;
			HX_STACK_LINE(354)
			{
				HX_STACK_LINE(354)
				this->x = _x1;
				HX_STACK_LINE(354)
				if ((this->_construct)){
					HX_STACK_LINE(354)
					this->x;
				}
				else{
					HX_STACK_LINE(354)
					if (((bool((this->listen_x_dyn() != null())) && bool(!(this->ignore_listeners))))){
						HX_STACK_LINE(354)
						this->listen_x(_x1);
					}
					HX_STACK_LINE(354)
					this->x;
				}
			}
			HX_STACK_LINE(354)
			{
				HX_STACK_LINE(354)
				this->y = _y1;
				HX_STACK_LINE(354)
				if ((this->_construct)){
					HX_STACK_LINE(354)
					this->y;
				}
				else{
					HX_STACK_LINE(354)
					if (((bool((this->listen_y_dyn() != null())) && bool(!(this->ignore_listeners))))){
						HX_STACK_LINE(354)
						this->listen_y(_y1);
					}
					HX_STACK_LINE(354)
					this->y;
				}
			}
			HX_STACK_LINE(354)
			{
				HX_STACK_LINE(354)
				this->z = _z1;
				HX_STACK_LINE(354)
				if ((this->_construct)){
					HX_STACK_LINE(354)
					this->z;
				}
				else{
					HX_STACK_LINE(354)
					if (((bool((this->listen_z_dyn() != null())) && bool(!(this->ignore_listeners))))){
						HX_STACK_LINE(354)
						this->listen_z(_z1);
					}
					HX_STACK_LINE(354)
					this->z;
				}
			}
			HX_STACK_LINE(354)
			this->ignore_listeners = prev;
			HX_STACK_LINE(354)
			if (((bool((this->listen_x_dyn() != null())) && bool(!(this->ignore_listeners))))){
				HX_STACK_LINE(354)
				this->listen_x(this->x);
			}
			HX_STACK_LINE(354)
			if (((bool((this->listen_y_dyn() != null())) && bool(!(this->ignore_listeners))))){
				HX_STACK_LINE(354)
				this->listen_y(this->y);
			}
			HX_STACK_LINE(354)
			if (((bool((this->listen_z_dyn() != null())) && bool(!(this->ignore_listeners))))){
				HX_STACK_LINE(354)
				this->listen_z(this->z);
			}
			HX_STACK_LINE(354)
			hx::ObjectPtr<OBJ_>(this);
		}
		HX_STACK_LINE(356)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC3(Vector_obj,subtract_xyz,return )

::phoenix::Vector Vector_obj::multiply( ::phoenix::Vector other){
	HX_STACK_FRAME("phoenix.Vector","multiply",0x4b395830,"phoenix.Vector.multiply","phoenix/Vector.hx",360,0x5d0bf7fb)
	HX_STACK_THIS(this)
	HX_STACK_ARG(other,"other")
	HX_STACK_LINE(362)
	if (((other == null()))){
		HX_STACK_LINE(363)
		HX_STACK_DO_THROW(HX_CSTRING("vector.multiply other was handed in as null"));
	}
	HX_STACK_LINE(366)
	{
		HX_STACK_LINE(366)
		Float _x = (this->x * other->x);		HX_STACK_VAR(_x,"_x");
		HX_STACK_LINE(366)
		Float _y = (this->y * other->y);		HX_STACK_VAR(_y,"_y");
		HX_STACK_LINE(366)
		Float _z = (this->z * other->z);		HX_STACK_VAR(_z,"_z");
		HX_STACK_LINE(366)
		bool prev = this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
		HX_STACK_LINE(366)
		this->ignore_listeners = true;
		HX_STACK_LINE(366)
		{
			HX_STACK_LINE(366)
			this->x = _x;
			HX_STACK_LINE(366)
			if ((this->_construct)){
				HX_STACK_LINE(366)
				this->x;
			}
			else{
				HX_STACK_LINE(366)
				if (((bool((this->listen_x_dyn() != null())) && bool(!(this->ignore_listeners))))){
					HX_STACK_LINE(366)
					this->listen_x(_x);
				}
				HX_STACK_LINE(366)
				this->x;
			}
		}
		HX_STACK_LINE(366)
		{
			HX_STACK_LINE(366)
			this->y = _y;
			HX_STACK_LINE(366)
			if ((this->_construct)){
				HX_STACK_LINE(366)
				this->y;
			}
			else{
				HX_STACK_LINE(366)
				if (((bool((this->listen_y_dyn() != null())) && bool(!(this->ignore_listeners))))){
					HX_STACK_LINE(366)
					this->listen_y(_y);
				}
				HX_STACK_LINE(366)
				this->y;
			}
		}
		HX_STACK_LINE(366)
		{
			HX_STACK_LINE(366)
			this->z = _z;
			HX_STACK_LINE(366)
			if ((this->_construct)){
				HX_STACK_LINE(366)
				this->z;
			}
			else{
				HX_STACK_LINE(366)
				if (((bool((this->listen_z_dyn() != null())) && bool(!(this->ignore_listeners))))){
					HX_STACK_LINE(366)
					this->listen_z(_z);
				}
				HX_STACK_LINE(366)
				this->z;
			}
		}
		HX_STACK_LINE(366)
		this->ignore_listeners = prev;
		HX_STACK_LINE(366)
		if (((bool((this->listen_x_dyn() != null())) && bool(!(this->ignore_listeners))))){
			HX_STACK_LINE(366)
			this->listen_x(this->x);
		}
		HX_STACK_LINE(366)
		if (((bool((this->listen_y_dyn() != null())) && bool(!(this->ignore_listeners))))){
			HX_STACK_LINE(366)
			this->listen_y(this->y);
		}
		HX_STACK_LINE(366)
		if (((bool((this->listen_z_dyn() != null())) && bool(!(this->ignore_listeners))))){
			HX_STACK_LINE(366)
			this->listen_z(this->z);
		}
		HX_STACK_LINE(366)
		hx::ObjectPtr<OBJ_>(this);
	}
	HX_STACK_LINE(368)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(Vector_obj,multiply,return )

::phoenix::Vector Vector_obj::multiply_xyz( hx::Null< Float >  __o__x,hx::Null< Float >  __o__y,hx::Null< Float >  __o__z){
Float _x = __o__x.Default(1);
Float _y = __o__y.Default(1);
Float _z = __o__z.Default(1);
	HX_STACK_FRAME("phoenix.Vector","multiply_xyz",0x0127ed8a,"phoenix.Vector.multiply_xyz","phoenix/Vector.hx",372,0x5d0bf7fb)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_x,"_x")
	HX_STACK_ARG(_y,"_y")
	HX_STACK_ARG(_z,"_z")
{
		HX_STACK_LINE(374)
		{
			HX_STACK_LINE(374)
			Float _x1 = (this->x * _x);		HX_STACK_VAR(_x1,"_x1");
			HX_STACK_LINE(374)
			Float _y1 = (this->y * _y);		HX_STACK_VAR(_y1,"_y1");
			HX_STACK_LINE(374)
			Float _z1 = (this->z * _z);		HX_STACK_VAR(_z1,"_z1");
			HX_STACK_LINE(374)
			bool prev = this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
			HX_STACK_LINE(374)
			this->ignore_listeners = true;
			HX_STACK_LINE(374)
			{
				HX_STACK_LINE(374)
				this->x = _x1;
				HX_STACK_LINE(374)
				if ((this->_construct)){
					HX_STACK_LINE(374)
					this->x;
				}
				else{
					HX_STACK_LINE(374)
					if (((bool((this->listen_x_dyn() != null())) && bool(!(this->ignore_listeners))))){
						HX_STACK_LINE(374)
						this->listen_x(_x1);
					}
					HX_STACK_LINE(374)
					this->x;
				}
			}
			HX_STACK_LINE(374)
			{
				HX_STACK_LINE(374)
				this->y = _y1;
				HX_STACK_LINE(374)
				if ((this->_construct)){
					HX_STACK_LINE(374)
					this->y;
				}
				else{
					HX_STACK_LINE(374)
					if (((bool((this->listen_y_dyn() != null())) && bool(!(this->ignore_listeners))))){
						HX_STACK_LINE(374)
						this->listen_y(_y1);
					}
					HX_STACK_LINE(374)
					this->y;
				}
			}
			HX_STACK_LINE(374)
			{
				HX_STACK_LINE(374)
				this->z = _z1;
				HX_STACK_LINE(374)
				if ((this->_construct)){
					HX_STACK_LINE(374)
					this->z;
				}
				else{
					HX_STACK_LINE(374)
					if (((bool((this->listen_z_dyn() != null())) && bool(!(this->ignore_listeners))))){
						HX_STACK_LINE(374)
						this->listen_z(_z1);
					}
					HX_STACK_LINE(374)
					this->z;
				}
			}
			HX_STACK_LINE(374)
			this->ignore_listeners = prev;
			HX_STACK_LINE(374)
			if (((bool((this->listen_x_dyn() != null())) && bool(!(this->ignore_listeners))))){
				HX_STACK_LINE(374)
				this->listen_x(this->x);
			}
			HX_STACK_LINE(374)
			if (((bool((this->listen_y_dyn() != null())) && bool(!(this->ignore_listeners))))){
				HX_STACK_LINE(374)
				this->listen_y(this->y);
			}
			HX_STACK_LINE(374)
			if (((bool((this->listen_z_dyn() != null())) && bool(!(this->ignore_listeners))))){
				HX_STACK_LINE(374)
				this->listen_z(this->z);
			}
			HX_STACK_LINE(374)
			hx::ObjectPtr<OBJ_>(this);
		}
		HX_STACK_LINE(376)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC3(Vector_obj,multiply_xyz,return )

::phoenix::Vector Vector_obj::divide( ::phoenix::Vector other){
	HX_STACK_FRAME("phoenix.Vector","divide",0x0c98ca85,"phoenix.Vector.divide","phoenix/Vector.hx",381,0x5d0bf7fb)
	HX_STACK_THIS(this)
	HX_STACK_ARG(other,"other")
	HX_STACK_LINE(383)
	if (((other == null()))){
		HX_STACK_LINE(384)
		HX_STACK_DO_THROW(HX_CSTRING("vector.divide other was handed in as null"));
	}
	HX_STACK_LINE(387)
	{
		HX_STACK_LINE(387)
		Float _x = (Float(this->x) / Float(other->x));		HX_STACK_VAR(_x,"_x");
		HX_STACK_LINE(387)
		Float _y = (Float(this->y) / Float(other->y));		HX_STACK_VAR(_y,"_y");
		HX_STACK_LINE(387)
		Float _z = (Float(this->z) / Float(other->z));		HX_STACK_VAR(_z,"_z");
		HX_STACK_LINE(387)
		bool prev = this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
		HX_STACK_LINE(387)
		this->ignore_listeners = true;
		HX_STACK_LINE(387)
		{
			HX_STACK_LINE(387)
			this->x = _x;
			HX_STACK_LINE(387)
			if ((this->_construct)){
				HX_STACK_LINE(387)
				this->x;
			}
			else{
				HX_STACK_LINE(387)
				if (((bool((this->listen_x_dyn() != null())) && bool(!(this->ignore_listeners))))){
					HX_STACK_LINE(387)
					this->listen_x(_x);
				}
				HX_STACK_LINE(387)
				this->x;
			}
		}
		HX_STACK_LINE(387)
		{
			HX_STACK_LINE(387)
			this->y = _y;
			HX_STACK_LINE(387)
			if ((this->_construct)){
				HX_STACK_LINE(387)
				this->y;
			}
			else{
				HX_STACK_LINE(387)
				if (((bool((this->listen_y_dyn() != null())) && bool(!(this->ignore_listeners))))){
					HX_STACK_LINE(387)
					this->listen_y(_y);
				}
				HX_STACK_LINE(387)
				this->y;
			}
		}
		HX_STACK_LINE(387)
		{
			HX_STACK_LINE(387)
			this->z = _z;
			HX_STACK_LINE(387)
			if ((this->_construct)){
				HX_STACK_LINE(387)
				this->z;
			}
			else{
				HX_STACK_LINE(387)
				if (((bool((this->listen_z_dyn() != null())) && bool(!(this->ignore_listeners))))){
					HX_STACK_LINE(387)
					this->listen_z(_z);
				}
				HX_STACK_LINE(387)
				this->z;
			}
		}
		HX_STACK_LINE(387)
		this->ignore_listeners = prev;
		HX_STACK_LINE(387)
		if (((bool((this->listen_x_dyn() != null())) && bool(!(this->ignore_listeners))))){
			HX_STACK_LINE(387)
			this->listen_x(this->x);
		}
		HX_STACK_LINE(387)
		if (((bool((this->listen_y_dyn() != null())) && bool(!(this->ignore_listeners))))){
			HX_STACK_LINE(387)
			this->listen_y(this->y);
		}
		HX_STACK_LINE(387)
		if (((bool((this->listen_z_dyn() != null())) && bool(!(this->ignore_listeners))))){
			HX_STACK_LINE(387)
			this->listen_z(this->z);
		}
		HX_STACK_LINE(387)
		hx::ObjectPtr<OBJ_>(this);
	}
	HX_STACK_LINE(389)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(Vector_obj,divide,return )

::phoenix::Vector Vector_obj::divide_xyz( hx::Null< Float >  __o__x,hx::Null< Float >  __o__y,hx::Null< Float >  __o__z){
Float _x = __o__x.Default(1);
Float _y = __o__y.Default(1);
Float _z = __o__z.Default(1);
	HX_STACK_FRAME("phoenix.Vector","divide_xyz",0xfd37ae5f,"phoenix.Vector.divide_xyz","phoenix/Vector.hx",393,0x5d0bf7fb)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_x,"_x")
	HX_STACK_ARG(_y,"_y")
	HX_STACK_ARG(_z,"_z")
{
		HX_STACK_LINE(395)
		{
			HX_STACK_LINE(395)
			Float _x1 = (Float(this->x) / Float(_x));		HX_STACK_VAR(_x1,"_x1");
			HX_STACK_LINE(395)
			Float _y1 = (Float(this->y) / Float(_y));		HX_STACK_VAR(_y1,"_y1");
			HX_STACK_LINE(395)
			Float _z1 = (Float(this->z) / Float(_z));		HX_STACK_VAR(_z1,"_z1");
			HX_STACK_LINE(395)
			bool prev = this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
			HX_STACK_LINE(395)
			this->ignore_listeners = true;
			HX_STACK_LINE(395)
			{
				HX_STACK_LINE(395)
				this->x = _x1;
				HX_STACK_LINE(395)
				if ((this->_construct)){
					HX_STACK_LINE(395)
					this->x;
				}
				else{
					HX_STACK_LINE(395)
					if (((bool((this->listen_x_dyn() != null())) && bool(!(this->ignore_listeners))))){
						HX_STACK_LINE(395)
						this->listen_x(_x1);
					}
					HX_STACK_LINE(395)
					this->x;
				}
			}
			HX_STACK_LINE(395)
			{
				HX_STACK_LINE(395)
				this->y = _y1;
				HX_STACK_LINE(395)
				if ((this->_construct)){
					HX_STACK_LINE(395)
					this->y;
				}
				else{
					HX_STACK_LINE(395)
					if (((bool((this->listen_y_dyn() != null())) && bool(!(this->ignore_listeners))))){
						HX_STACK_LINE(395)
						this->listen_y(_y1);
					}
					HX_STACK_LINE(395)
					this->y;
				}
			}
			HX_STACK_LINE(395)
			{
				HX_STACK_LINE(395)
				this->z = _z1;
				HX_STACK_LINE(395)
				if ((this->_construct)){
					HX_STACK_LINE(395)
					this->z;
				}
				else{
					HX_STACK_LINE(395)
					if (((bool((this->listen_z_dyn() != null())) && bool(!(this->ignore_listeners))))){
						HX_STACK_LINE(395)
						this->listen_z(_z1);
					}
					HX_STACK_LINE(395)
					this->z;
				}
			}
			HX_STACK_LINE(395)
			this->ignore_listeners = prev;
			HX_STACK_LINE(395)
			if (((bool((this->listen_x_dyn() != null())) && bool(!(this->ignore_listeners))))){
				HX_STACK_LINE(395)
				this->listen_x(this->x);
			}
			HX_STACK_LINE(395)
			if (((bool((this->listen_y_dyn() != null())) && bool(!(this->ignore_listeners))))){
				HX_STACK_LINE(395)
				this->listen_y(this->y);
			}
			HX_STACK_LINE(395)
			if (((bool((this->listen_z_dyn() != null())) && bool(!(this->ignore_listeners))))){
				HX_STACK_LINE(395)
				this->listen_z(this->z);
			}
			HX_STACK_LINE(395)
			hx::ObjectPtr<OBJ_>(this);
		}
		HX_STACK_LINE(397)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC3(Vector_obj,divide_xyz,return )

::phoenix::Vector Vector_obj::addScalar( Float v){
	HX_STACK_FRAME("phoenix.Vector","addScalar",0xda84f0a1,"phoenix.Vector.addScalar","phoenix/Vector.hx",402,0x5d0bf7fb)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(404)
	{
		HX_STACK_LINE(404)
		Float _x = (this->x + v);		HX_STACK_VAR(_x,"_x");
		HX_STACK_LINE(404)
		Float _y = (this->y + v);		HX_STACK_VAR(_y,"_y");
		HX_STACK_LINE(404)
		Float _z = (this->z + v);		HX_STACK_VAR(_z,"_z");
		HX_STACK_LINE(404)
		bool prev = this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
		HX_STACK_LINE(404)
		this->ignore_listeners = true;
		HX_STACK_LINE(404)
		{
			HX_STACK_LINE(404)
			this->x = _x;
			HX_STACK_LINE(404)
			if ((this->_construct)){
				HX_STACK_LINE(404)
				this->x;
			}
			else{
				HX_STACK_LINE(404)
				if (((bool((this->listen_x_dyn() != null())) && bool(!(this->ignore_listeners))))){
					HX_STACK_LINE(404)
					this->listen_x(_x);
				}
				HX_STACK_LINE(404)
				this->x;
			}
		}
		HX_STACK_LINE(404)
		{
			HX_STACK_LINE(404)
			this->y = _y;
			HX_STACK_LINE(404)
			if ((this->_construct)){
				HX_STACK_LINE(404)
				this->y;
			}
			else{
				HX_STACK_LINE(404)
				if (((bool((this->listen_y_dyn() != null())) && bool(!(this->ignore_listeners))))){
					HX_STACK_LINE(404)
					this->listen_y(_y);
				}
				HX_STACK_LINE(404)
				this->y;
			}
		}
		HX_STACK_LINE(404)
		{
			HX_STACK_LINE(404)
			this->z = _z;
			HX_STACK_LINE(404)
			if ((this->_construct)){
				HX_STACK_LINE(404)
				this->z;
			}
			else{
				HX_STACK_LINE(404)
				if (((bool((this->listen_z_dyn() != null())) && bool(!(this->ignore_listeners))))){
					HX_STACK_LINE(404)
					this->listen_z(_z);
				}
				HX_STACK_LINE(404)
				this->z;
			}
		}
		HX_STACK_LINE(404)
		this->ignore_listeners = prev;
		HX_STACK_LINE(404)
		if (((bool((this->listen_x_dyn() != null())) && bool(!(this->ignore_listeners))))){
			HX_STACK_LINE(404)
			this->listen_x(this->x);
		}
		HX_STACK_LINE(404)
		if (((bool((this->listen_y_dyn() != null())) && bool(!(this->ignore_listeners))))){
			HX_STACK_LINE(404)
			this->listen_y(this->y);
		}
		HX_STACK_LINE(404)
		if (((bool((this->listen_z_dyn() != null())) && bool(!(this->ignore_listeners))))){
			HX_STACK_LINE(404)
			this->listen_z(this->z);
		}
		HX_STACK_LINE(404)
		hx::ObjectPtr<OBJ_>(this);
	}
	HX_STACK_LINE(406)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(Vector_obj,addScalar,return )

::phoenix::Vector Vector_obj::subtractScalar( Float v){
	HX_STACK_FRAME("phoenix.Vector","subtractScalar",0x2be95e6c,"phoenix.Vector.subtractScalar","phoenix/Vector.hx",410,0x5d0bf7fb)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(412)
	{
		HX_STACK_LINE(412)
		Float _x = (this->x - v);		HX_STACK_VAR(_x,"_x");
		HX_STACK_LINE(412)
		Float _y = (this->y - v);		HX_STACK_VAR(_y,"_y");
		HX_STACK_LINE(412)
		Float _z = (this->z - v);		HX_STACK_VAR(_z,"_z");
		HX_STACK_LINE(412)
		bool prev = this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
		HX_STACK_LINE(412)
		this->ignore_listeners = true;
		HX_STACK_LINE(412)
		{
			HX_STACK_LINE(412)
			this->x = _x;
			HX_STACK_LINE(412)
			if ((this->_construct)){
				HX_STACK_LINE(412)
				this->x;
			}
			else{
				HX_STACK_LINE(412)
				if (((bool((this->listen_x_dyn() != null())) && bool(!(this->ignore_listeners))))){
					HX_STACK_LINE(412)
					this->listen_x(_x);
				}
				HX_STACK_LINE(412)
				this->x;
			}
		}
		HX_STACK_LINE(412)
		{
			HX_STACK_LINE(412)
			this->y = _y;
			HX_STACK_LINE(412)
			if ((this->_construct)){
				HX_STACK_LINE(412)
				this->y;
			}
			else{
				HX_STACK_LINE(412)
				if (((bool((this->listen_y_dyn() != null())) && bool(!(this->ignore_listeners))))){
					HX_STACK_LINE(412)
					this->listen_y(_y);
				}
				HX_STACK_LINE(412)
				this->y;
			}
		}
		HX_STACK_LINE(412)
		{
			HX_STACK_LINE(412)
			this->z = _z;
			HX_STACK_LINE(412)
			if ((this->_construct)){
				HX_STACK_LINE(412)
				this->z;
			}
			else{
				HX_STACK_LINE(412)
				if (((bool((this->listen_z_dyn() != null())) && bool(!(this->ignore_listeners))))){
					HX_STACK_LINE(412)
					this->listen_z(_z);
				}
				HX_STACK_LINE(412)
				this->z;
			}
		}
		HX_STACK_LINE(412)
		this->ignore_listeners = prev;
		HX_STACK_LINE(412)
		if (((bool((this->listen_x_dyn() != null())) && bool(!(this->ignore_listeners))))){
			HX_STACK_LINE(412)
			this->listen_x(this->x);
		}
		HX_STACK_LINE(412)
		if (((bool((this->listen_y_dyn() != null())) && bool(!(this->ignore_listeners))))){
			HX_STACK_LINE(412)
			this->listen_y(this->y);
		}
		HX_STACK_LINE(412)
		if (((bool((this->listen_z_dyn() != null())) && bool(!(this->ignore_listeners))))){
			HX_STACK_LINE(412)
			this->listen_z(this->z);
		}
		HX_STACK_LINE(412)
		hx::ObjectPtr<OBJ_>(this);
	}
	HX_STACK_LINE(414)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(Vector_obj,subtractScalar,return )

::phoenix::Vector Vector_obj::multiplyScalar( Float v){
	HX_STACK_FRAME("phoenix.Vector","multiplyScalar",0x998bf77c,"phoenix.Vector.multiplyScalar","phoenix/Vector.hx",418,0x5d0bf7fb)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(420)
	{
		HX_STACK_LINE(420)
		Float _x = (this->x * v);		HX_STACK_VAR(_x,"_x");
		HX_STACK_LINE(420)
		Float _y = (this->y * v);		HX_STACK_VAR(_y,"_y");
		HX_STACK_LINE(420)
		Float _z = (this->z * v);		HX_STACK_VAR(_z,"_z");
		HX_STACK_LINE(420)
		bool prev = this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
		HX_STACK_LINE(420)
		this->ignore_listeners = true;
		HX_STACK_LINE(420)
		{
			HX_STACK_LINE(420)
			this->x = _x;
			HX_STACK_LINE(420)
			if ((this->_construct)){
				HX_STACK_LINE(420)
				this->x;
			}
			else{
				HX_STACK_LINE(420)
				if (((bool((this->listen_x_dyn() != null())) && bool(!(this->ignore_listeners))))){
					HX_STACK_LINE(420)
					this->listen_x(_x);
				}
				HX_STACK_LINE(420)
				this->x;
			}
		}
		HX_STACK_LINE(420)
		{
			HX_STACK_LINE(420)
			this->y = _y;
			HX_STACK_LINE(420)
			if ((this->_construct)){
				HX_STACK_LINE(420)
				this->y;
			}
			else{
				HX_STACK_LINE(420)
				if (((bool((this->listen_y_dyn() != null())) && bool(!(this->ignore_listeners))))){
					HX_STACK_LINE(420)
					this->listen_y(_y);
				}
				HX_STACK_LINE(420)
				this->y;
			}
		}
		HX_STACK_LINE(420)
		{
			HX_STACK_LINE(420)
			this->z = _z;
			HX_STACK_LINE(420)
			if ((this->_construct)){
				HX_STACK_LINE(420)
				this->z;
			}
			else{
				HX_STACK_LINE(420)
				if (((bool((this->listen_z_dyn() != null())) && bool(!(this->ignore_listeners))))){
					HX_STACK_LINE(420)
					this->listen_z(_z);
				}
				HX_STACK_LINE(420)
				this->z;
			}
		}
		HX_STACK_LINE(420)
		this->ignore_listeners = prev;
		HX_STACK_LINE(420)
		if (((bool((this->listen_x_dyn() != null())) && bool(!(this->ignore_listeners))))){
			HX_STACK_LINE(420)
			this->listen_x(this->x);
		}
		HX_STACK_LINE(420)
		if (((bool((this->listen_y_dyn() != null())) && bool(!(this->ignore_listeners))))){
			HX_STACK_LINE(420)
			this->listen_y(this->y);
		}
		HX_STACK_LINE(420)
		if (((bool((this->listen_z_dyn() != null())) && bool(!(this->ignore_listeners))))){
			HX_STACK_LINE(420)
			this->listen_z(this->z);
		}
		HX_STACK_LINE(420)
		hx::ObjectPtr<OBJ_>(this);
	}
	HX_STACK_LINE(422)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(Vector_obj,multiplyScalar,return )

::phoenix::Vector Vector_obj::divideScalar( Float v){
	HX_STACK_FRAME("phoenix.Vector","divideScalar",0x89ad5791,"phoenix.Vector.divideScalar","phoenix/Vector.hx",426,0x5d0bf7fb)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(428)
	if (((v != (int)0))){
		HX_STACK_LINE(430)
		Float _x = (Float(this->x) / Float(v));		HX_STACK_VAR(_x,"_x");
		HX_STACK_LINE(430)
		Float _y = (Float(this->y) / Float(v));		HX_STACK_VAR(_y,"_y");
		HX_STACK_LINE(430)
		Float _z = (Float(this->z) / Float(v));		HX_STACK_VAR(_z,"_z");
		HX_STACK_LINE(430)
		bool prev = this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
		HX_STACK_LINE(430)
		this->ignore_listeners = true;
		HX_STACK_LINE(430)
		{
			HX_STACK_LINE(430)
			this->x = _x;
			HX_STACK_LINE(430)
			if ((this->_construct)){
				HX_STACK_LINE(430)
				this->x;
			}
			else{
				HX_STACK_LINE(430)
				if (((bool((this->listen_x_dyn() != null())) && bool(!(this->ignore_listeners))))){
					HX_STACK_LINE(430)
					this->listen_x(_x);
				}
				HX_STACK_LINE(430)
				this->x;
			}
		}
		HX_STACK_LINE(430)
		{
			HX_STACK_LINE(430)
			this->y = _y;
			HX_STACK_LINE(430)
			if ((this->_construct)){
				HX_STACK_LINE(430)
				this->y;
			}
			else{
				HX_STACK_LINE(430)
				if (((bool((this->listen_y_dyn() != null())) && bool(!(this->ignore_listeners))))){
					HX_STACK_LINE(430)
					this->listen_y(_y);
				}
				HX_STACK_LINE(430)
				this->y;
			}
		}
		HX_STACK_LINE(430)
		{
			HX_STACK_LINE(430)
			this->z = _z;
			HX_STACK_LINE(430)
			if ((this->_construct)){
				HX_STACK_LINE(430)
				this->z;
			}
			else{
				HX_STACK_LINE(430)
				if (((bool((this->listen_z_dyn() != null())) && bool(!(this->ignore_listeners))))){
					HX_STACK_LINE(430)
					this->listen_z(_z);
				}
				HX_STACK_LINE(430)
				this->z;
			}
		}
		HX_STACK_LINE(430)
		this->ignore_listeners = prev;
		HX_STACK_LINE(430)
		if (((bool((this->listen_x_dyn() != null())) && bool(!(this->ignore_listeners))))){
			HX_STACK_LINE(430)
			this->listen_x(this->x);
		}
		HX_STACK_LINE(430)
		if (((bool((this->listen_y_dyn() != null())) && bool(!(this->ignore_listeners))))){
			HX_STACK_LINE(430)
			this->listen_y(this->y);
		}
		HX_STACK_LINE(430)
		if (((bool((this->listen_z_dyn() != null())) && bool(!(this->ignore_listeners))))){
			HX_STACK_LINE(430)
			this->listen_z(this->z);
		}
		HX_STACK_LINE(430)
		hx::ObjectPtr<OBJ_>(this);
	}
	else{
		HX_STACK_LINE(434)
		bool prev = this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
		HX_STACK_LINE(434)
		this->ignore_listeners = true;
		HX_STACK_LINE(434)
		{
			HX_STACK_LINE(434)
			this->x = (int)0;
			HX_STACK_LINE(434)
			if ((this->_construct)){
				HX_STACK_LINE(434)
				this->x;
			}
			else{
				HX_STACK_LINE(434)
				if (((bool((this->listen_x_dyn() != null())) && bool(!(this->ignore_listeners))))){
					HX_STACK_LINE(434)
					this->listen_x((int)0);
				}
				HX_STACK_LINE(434)
				this->x;
			}
		}
		HX_STACK_LINE(434)
		{
			HX_STACK_LINE(434)
			this->y = (int)0;
			HX_STACK_LINE(434)
			if ((this->_construct)){
				HX_STACK_LINE(434)
				this->y;
			}
			else{
				HX_STACK_LINE(434)
				if (((bool((this->listen_y_dyn() != null())) && bool(!(this->ignore_listeners))))){
					HX_STACK_LINE(434)
					this->listen_y((int)0);
				}
				HX_STACK_LINE(434)
				this->y;
			}
		}
		HX_STACK_LINE(434)
		{
			HX_STACK_LINE(434)
			this->z = (int)0;
			HX_STACK_LINE(434)
			if ((this->_construct)){
				HX_STACK_LINE(434)
				this->z;
			}
			else{
				HX_STACK_LINE(434)
				if (((bool((this->listen_z_dyn() != null())) && bool(!(this->ignore_listeners))))){
					HX_STACK_LINE(434)
					this->listen_z((int)0);
				}
				HX_STACK_LINE(434)
				this->z;
			}
		}
		HX_STACK_LINE(434)
		this->ignore_listeners = prev;
		HX_STACK_LINE(434)
		if (((bool((this->listen_x_dyn() != null())) && bool(!(this->ignore_listeners))))){
			HX_STACK_LINE(434)
			this->listen_x(this->x);
		}
		HX_STACK_LINE(434)
		if (((bool((this->listen_y_dyn() != null())) && bool(!(this->ignore_listeners))))){
			HX_STACK_LINE(434)
			this->listen_y(this->y);
		}
		HX_STACK_LINE(434)
		if (((bool((this->listen_z_dyn() != null())) && bool(!(this->ignore_listeners))))){
			HX_STACK_LINE(434)
			this->listen_z(this->z);
		}
		HX_STACK_LINE(434)
		hx::ObjectPtr<OBJ_>(this);
	}
	HX_STACK_LINE(438)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(Vector_obj,divideScalar,return )

Float Vector_obj::set_length( Float value){
	HX_STACK_FRAME("phoenix.Vector","set_length",0x204bb42f,"phoenix.Vector.set_length","phoenix/Vector.hx",445,0x5d0bf7fb)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(447)
	{
		HX_STACK_LINE(447)
		::phoenix::Vector _this;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(447)
		{
			HX_STACK_LINE(447)
			Float v = ::Math_obj::sqrt((((this->x * this->x) + (this->y * this->y)) + (this->z * this->z)));		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(447)
			if (((v != (int)0))){
				HX_STACK_LINE(447)
				Float _x = (Float(this->x) / Float(v));		HX_STACK_VAR(_x,"_x");
				HX_STACK_LINE(447)
				Float _y = (Float(this->y) / Float(v));		HX_STACK_VAR(_y,"_y");
				HX_STACK_LINE(447)
				Float _z = (Float(this->z) / Float(v));		HX_STACK_VAR(_z,"_z");
				HX_STACK_LINE(447)
				bool prev = this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
				HX_STACK_LINE(447)
				this->ignore_listeners = true;
				HX_STACK_LINE(447)
				{
					HX_STACK_LINE(447)
					this->x = _x;
					HX_STACK_LINE(447)
					if ((this->_construct)){
						HX_STACK_LINE(447)
						this->x;
					}
					else{
						HX_STACK_LINE(447)
						if (((bool((this->listen_x_dyn() != null())) && bool(!(this->ignore_listeners))))){
							HX_STACK_LINE(447)
							this->listen_x(_x);
						}
						HX_STACK_LINE(447)
						this->x;
					}
				}
				HX_STACK_LINE(447)
				{
					HX_STACK_LINE(447)
					this->y = _y;
					HX_STACK_LINE(447)
					if ((this->_construct)){
						HX_STACK_LINE(447)
						this->y;
					}
					else{
						HX_STACK_LINE(447)
						if (((bool((this->listen_y_dyn() != null())) && bool(!(this->ignore_listeners))))){
							HX_STACK_LINE(447)
							this->listen_y(_y);
						}
						HX_STACK_LINE(447)
						this->y;
					}
				}
				HX_STACK_LINE(447)
				{
					HX_STACK_LINE(447)
					this->z = _z;
					HX_STACK_LINE(447)
					if ((this->_construct)){
						HX_STACK_LINE(447)
						this->z;
					}
					else{
						HX_STACK_LINE(447)
						if (((bool((this->listen_z_dyn() != null())) && bool(!(this->ignore_listeners))))){
							HX_STACK_LINE(447)
							this->listen_z(_z);
						}
						HX_STACK_LINE(447)
						this->z;
					}
				}
				HX_STACK_LINE(447)
				this->ignore_listeners = prev;
				HX_STACK_LINE(447)
				if (((bool((this->listen_x_dyn() != null())) && bool(!(this->ignore_listeners))))){
					HX_STACK_LINE(447)
					this->listen_x(this->x);
				}
				HX_STACK_LINE(447)
				if (((bool((this->listen_y_dyn() != null())) && bool(!(this->ignore_listeners))))){
					HX_STACK_LINE(447)
					this->listen_y(this->y);
				}
				HX_STACK_LINE(447)
				if (((bool((this->listen_z_dyn() != null())) && bool(!(this->ignore_listeners))))){
					HX_STACK_LINE(447)
					this->listen_z(this->z);
				}
				HX_STACK_LINE(447)
				hx::ObjectPtr<OBJ_>(this);
			}
			else{
				HX_STACK_LINE(447)
				bool prev = this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
				HX_STACK_LINE(447)
				this->ignore_listeners = true;
				HX_STACK_LINE(447)
				{
					HX_STACK_LINE(447)
					this->x = (int)0;
					HX_STACK_LINE(447)
					if ((this->_construct)){
						HX_STACK_LINE(447)
						this->x;
					}
					else{
						HX_STACK_LINE(447)
						if (((bool((this->listen_x_dyn() != null())) && bool(!(this->ignore_listeners))))){
							HX_STACK_LINE(447)
							this->listen_x((int)0);
						}
						HX_STACK_LINE(447)
						this->x;
					}
				}
				HX_STACK_LINE(447)
				{
					HX_STACK_LINE(447)
					this->y = (int)0;
					HX_STACK_LINE(447)
					if ((this->_construct)){
						HX_STACK_LINE(447)
						this->y;
					}
					else{
						HX_STACK_LINE(447)
						if (((bool((this->listen_y_dyn() != null())) && bool(!(this->ignore_listeners))))){
							HX_STACK_LINE(447)
							this->listen_y((int)0);
						}
						HX_STACK_LINE(447)
						this->y;
					}
				}
				HX_STACK_LINE(447)
				{
					HX_STACK_LINE(447)
					this->z = (int)0;
					HX_STACK_LINE(447)
					if ((this->_construct)){
						HX_STACK_LINE(447)
						this->z;
					}
					else{
						HX_STACK_LINE(447)
						if (((bool((this->listen_z_dyn() != null())) && bool(!(this->ignore_listeners))))){
							HX_STACK_LINE(447)
							this->listen_z((int)0);
						}
						HX_STACK_LINE(447)
						this->z;
					}
				}
				HX_STACK_LINE(447)
				this->ignore_listeners = prev;
				HX_STACK_LINE(447)
				if (((bool((this->listen_x_dyn() != null())) && bool(!(this->ignore_listeners))))){
					HX_STACK_LINE(447)
					this->listen_x(this->x);
				}
				HX_STACK_LINE(447)
				if (((bool((this->listen_y_dyn() != null())) && bool(!(this->ignore_listeners))))){
					HX_STACK_LINE(447)
					this->listen_y(this->y);
				}
				HX_STACK_LINE(447)
				if (((bool((this->listen_z_dyn() != null())) && bool(!(this->ignore_listeners))))){
					HX_STACK_LINE(447)
					this->listen_z(this->z);
				}
				HX_STACK_LINE(447)
				hx::ObjectPtr<OBJ_>(this);
			}
			HX_STACK_LINE(447)
			_this = hx::ObjectPtr<OBJ_>(this);
		}
		HX_STACK_LINE(447)
		{
			HX_STACK_LINE(447)
			Float _x = (_this->x * value);		HX_STACK_VAR(_x,"_x");
			HX_STACK_LINE(447)
			Float _y = (_this->y * value);		HX_STACK_VAR(_y,"_y");
			HX_STACK_LINE(447)
			Float _z = (_this->z * value);		HX_STACK_VAR(_z,"_z");
			HX_STACK_LINE(447)
			bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
			HX_STACK_LINE(447)
			_this->ignore_listeners = true;
			HX_STACK_LINE(447)
			{
				HX_STACK_LINE(447)
				_this->x = _x;
				HX_STACK_LINE(447)
				if ((_this->_construct)){
					HX_STACK_LINE(447)
					_this->x;
				}
				else{
					HX_STACK_LINE(447)
					if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
						HX_STACK_LINE(447)
						_this->listen_x(_x);
					}
					HX_STACK_LINE(447)
					_this->x;
				}
			}
			HX_STACK_LINE(447)
			{
				HX_STACK_LINE(447)
				_this->y = _y;
				HX_STACK_LINE(447)
				if ((_this->_construct)){
					HX_STACK_LINE(447)
					_this->y;
				}
				else{
					HX_STACK_LINE(447)
					if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
						HX_STACK_LINE(447)
						_this->listen_y(_y);
					}
					HX_STACK_LINE(447)
					_this->y;
				}
			}
			HX_STACK_LINE(447)
			{
				HX_STACK_LINE(447)
				_this->z = _z;
				HX_STACK_LINE(447)
				if ((_this->_construct)){
					HX_STACK_LINE(447)
					_this->z;
				}
				else{
					HX_STACK_LINE(447)
					if (((bool((_this->listen_z != null())) && bool(!(_this->ignore_listeners))))){
						HX_STACK_LINE(447)
						_this->listen_z(_z);
					}
					HX_STACK_LINE(447)
					_this->z;
				}
			}
			HX_STACK_LINE(447)
			_this->ignore_listeners = prev;
			HX_STACK_LINE(447)
			if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
				HX_STACK_LINE(447)
				_this->listen_x(_this->x);
			}
			HX_STACK_LINE(447)
			if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
				HX_STACK_LINE(447)
				_this->listen_y(_this->y);
			}
			HX_STACK_LINE(447)
			if (((bool((_this->listen_z != null())) && bool(!(_this->ignore_listeners))))){
				HX_STACK_LINE(447)
				_this->listen_z(_this->z);
			}
			HX_STACK_LINE(447)
			_this;
		}
		HX_STACK_LINE(447)
		_this;
	}
	HX_STACK_LINE(449)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(Vector_obj,set_length,return )

Float Vector_obj::get_length( ){
	HX_STACK_FRAME("phoenix.Vector","get_length",0x1cce15bb,"phoenix.Vector.get_length","phoenix/Vector.hx",455,0x5d0bf7fb)
	HX_STACK_THIS(this)
	HX_STACK_LINE(455)
	return ::Math_obj::sqrt((((this->x * this->x) + (this->y * this->y)) + (this->z * this->z)));
}


HX_DEFINE_DYNAMIC_FUNC0(Vector_obj,get_length,return )

Float Vector_obj::get_lengthsq( ){
	HX_STACK_FRAME("phoenix.Vector","get_lengthsq",0x7ccb9f19,"phoenix.Vector.get_lengthsq","phoenix/Vector.hx",462,0x5d0bf7fb)
	HX_STACK_THIS(this)
	HX_STACK_LINE(462)
	return (((this->x * this->x) + (this->y * this->y)) + (this->z * this->z));
}


HX_DEFINE_DYNAMIC_FUNC0(Vector_obj,get_lengthsq,return )

::phoenix::Vector Vector_obj::get_normalized( ){
	HX_STACK_FRAME("phoenix.Vector","get_normalized",0x48cf738c,"phoenix.Vector.get_normalized","phoenix/Vector.hx",468,0x5d0bf7fb)
	HX_STACK_THIS(this)
	HX_STACK_LINE(468)
	Float b = ::Math_obj::sqrt((((this->x * this->x) + (this->y * this->y)) + (this->z * this->z)));		HX_STACK_VAR(b,"b");
	HX_STACK_LINE(468)
	return ::phoenix::Vector_obj::__new((Float(this->x) / Float(b)),(Float(this->y) / Float(b)),(Float(this->z) / Float(b)),null());
}


HX_DEFINE_DYNAMIC_FUNC0(Vector_obj,get_normalized,return )

Float Vector_obj::set_x( Float _x){
	HX_STACK_FRAME("phoenix.Vector","set_x",0x08e225cf,"phoenix.Vector.set_x","phoenix/Vector.hx",472,0x5d0bf7fb)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_x,"_x")
	HX_STACK_LINE(474)
	this->x = _x;
	HX_STACK_LINE(476)
	if ((this->_construct)){
		HX_STACK_LINE(476)
		return this->x;
	}
	HX_STACK_LINE(478)
	if (((bool((this->listen_x_dyn() != null())) && bool(!(this->ignore_listeners))))){
		HX_STACK_LINE(478)
		this->listen_x(_x);
	}
	HX_STACK_LINE(480)
	return this->x;
}


HX_DEFINE_DYNAMIC_FUNC1(Vector_obj,set_x,return )

Float Vector_obj::set_y( Float _y){
	HX_STACK_FRAME("phoenix.Vector","set_y",0x08e225d0,"phoenix.Vector.set_y","phoenix/Vector.hx",484,0x5d0bf7fb)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_y,"_y")
	HX_STACK_LINE(486)
	this->y = _y;
	HX_STACK_LINE(488)
	if ((this->_construct)){
		HX_STACK_LINE(488)
		return this->y;
	}
	HX_STACK_LINE(490)
	if (((bool((this->listen_y_dyn() != null())) && bool(!(this->ignore_listeners))))){
		HX_STACK_LINE(490)
		this->listen_y(_y);
	}
	HX_STACK_LINE(492)
	return this->y;
}


HX_DEFINE_DYNAMIC_FUNC1(Vector_obj,set_y,return )

Float Vector_obj::set_z( Float _z){
	HX_STACK_FRAME("phoenix.Vector","set_z",0x08e225d1,"phoenix.Vector.set_z","phoenix/Vector.hx",496,0x5d0bf7fb)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_z,"_z")
	HX_STACK_LINE(498)
	this->z = _z;
	HX_STACK_LINE(500)
	if ((this->_construct)){
		HX_STACK_LINE(500)
		return this->z;
	}
	HX_STACK_LINE(502)
	if (((bool((this->listen_z_dyn() != null())) && bool(!(this->ignore_listeners))))){
		HX_STACK_LINE(502)
		this->listen_z(_z);
	}
	HX_STACK_LINE(504)
	return this->z;
}


HX_DEFINE_DYNAMIC_FUNC1(Vector_obj,set_z,return )

::phoenix::Vector Vector_obj::get_inverted( ){
	HX_STACK_FRAME("phoenix.Vector","get_inverted",0x5239d10a,"phoenix.Vector.get_inverted","phoenix/Vector.hx",510,0x5d0bf7fb)
	HX_STACK_THIS(this)
	HX_STACK_LINE(510)
	return ::phoenix::Vector_obj::__new(-(this->x),-(this->y),-(this->z),null());
}


HX_DEFINE_DYNAMIC_FUNC0(Vector_obj,get_inverted,return )

Float Vector_obj::set_angle2D( Float value){
	HX_STACK_FRAME("phoenix.Vector","set_angle2D",0xed308afc,"phoenix.Vector.set_angle2D","phoenix/Vector.hx",517,0x5d0bf7fb)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(519)
	Float len = ::Math_obj::sqrt((((this->x * this->x) + (this->y * this->y)) + (this->z * this->z)));		HX_STACK_VAR(len,"len");
	HX_STACK_LINE(521)
	{
		HX_STACK_LINE(521)
		Float _g = ::Math_obj::cos(value);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(521)
		Float _x = (_g * len);		HX_STACK_VAR(_x,"_x");
		HX_STACK_LINE(521)
		Float _g1 = ::Math_obj::sin(value);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(521)
		Float _y = (_g1 * len);		HX_STACK_VAR(_y,"_y");
		HX_STACK_LINE(521)
		bool prev = this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
		HX_STACK_LINE(521)
		this->ignore_listeners = true;
		HX_STACK_LINE(521)
		{
			HX_STACK_LINE(521)
			this->x = _x;
			HX_STACK_LINE(521)
			if ((this->_construct)){
				HX_STACK_LINE(521)
				this->x;
			}
			else{
				HX_STACK_LINE(521)
				if (((bool((this->listen_x_dyn() != null())) && bool(!(this->ignore_listeners))))){
					HX_STACK_LINE(521)
					this->listen_x(_x);
				}
				HX_STACK_LINE(521)
				this->x;
			}
		}
		HX_STACK_LINE(521)
		{
			HX_STACK_LINE(521)
			this->y = _y;
			HX_STACK_LINE(521)
			if ((this->_construct)){
				HX_STACK_LINE(521)
				this->y;
			}
			else{
				HX_STACK_LINE(521)
				if (((bool((this->listen_y_dyn() != null())) && bool(!(this->ignore_listeners))))){
					HX_STACK_LINE(521)
					this->listen_y(_y);
				}
				HX_STACK_LINE(521)
				this->y;
			}
		}
		HX_STACK_LINE(521)
		this->ignore_listeners = prev;
		HX_STACK_LINE(521)
		if (((bool((this->listen_x_dyn() != null())) && bool(!(this->ignore_listeners))))){
			HX_STACK_LINE(521)
			this->listen_x(this->x);
		}
		HX_STACK_LINE(521)
		if (((bool((this->listen_y_dyn() != null())) && bool(!(this->ignore_listeners))))){
			HX_STACK_LINE(521)
			this->listen_y(this->y);
		}
		HX_STACK_LINE(521)
		hx::ObjectPtr<OBJ_>(this);
	}
	HX_STACK_LINE(523)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(Vector_obj,set_angle2D,return )

Float Vector_obj::get_angle2D( ){
	HX_STACK_FRAME("phoenix.Vector","get_angle2D",0xe2c383f0,"phoenix.Vector.get_angle2D","phoenix/Vector.hx",529,0x5d0bf7fb)
	HX_STACK_THIS(this)
	HX_STACK_LINE(529)
	return ::Math_obj::atan2(this->y,this->x);
}


HX_DEFINE_DYNAMIC_FUNC0(Vector_obj,get_angle2D,return )

::phoenix::Vector Vector_obj::truncate( Float max){
	HX_STACK_FRAME("phoenix.Vector","truncate",0x7fa63472,"phoenix.Vector.truncate","phoenix/Vector.hx",538,0x5d0bf7fb)
	HX_STACK_THIS(this)
	HX_STACK_ARG(max,"max")
	HX_STACK_LINE(540)
	{
		HX_STACK_LINE(540)
		Float _g = ::Math_obj::sqrt((((this->x * this->x) + (this->y * this->y)) + (this->z * this->z)));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(540)
		Float value = ::Math_obj::min(max,_g);		HX_STACK_VAR(value,"value");
		HX_STACK_LINE(540)
		{
			HX_STACK_LINE(540)
			::phoenix::Vector _this;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(540)
			{
				HX_STACK_LINE(540)
				Float v = ::Math_obj::sqrt((((this->x * this->x) + (this->y * this->y)) + (this->z * this->z)));		HX_STACK_VAR(v,"v");
				HX_STACK_LINE(540)
				if (((v != (int)0))){
					HX_STACK_LINE(540)
					Float _x = (Float(this->x) / Float(v));		HX_STACK_VAR(_x,"_x");
					HX_STACK_LINE(540)
					Float _y = (Float(this->y) / Float(v));		HX_STACK_VAR(_y,"_y");
					HX_STACK_LINE(540)
					Float _z = (Float(this->z) / Float(v));		HX_STACK_VAR(_z,"_z");
					HX_STACK_LINE(540)
					bool prev = this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
					HX_STACK_LINE(540)
					this->ignore_listeners = true;
					HX_STACK_LINE(540)
					{
						HX_STACK_LINE(540)
						this->x = _x;
						HX_STACK_LINE(540)
						if ((this->_construct)){
							HX_STACK_LINE(540)
							this->x;
						}
						else{
							HX_STACK_LINE(540)
							if (((bool((this->listen_x_dyn() != null())) && bool(!(this->ignore_listeners))))){
								HX_STACK_LINE(540)
								this->listen_x(_x);
							}
							HX_STACK_LINE(540)
							this->x;
						}
					}
					HX_STACK_LINE(540)
					{
						HX_STACK_LINE(540)
						this->y = _y;
						HX_STACK_LINE(540)
						if ((this->_construct)){
							HX_STACK_LINE(540)
							this->y;
						}
						else{
							HX_STACK_LINE(540)
							if (((bool((this->listen_y_dyn() != null())) && bool(!(this->ignore_listeners))))){
								HX_STACK_LINE(540)
								this->listen_y(_y);
							}
							HX_STACK_LINE(540)
							this->y;
						}
					}
					HX_STACK_LINE(540)
					{
						HX_STACK_LINE(540)
						this->z = _z;
						HX_STACK_LINE(540)
						if ((this->_construct)){
							HX_STACK_LINE(540)
							this->z;
						}
						else{
							HX_STACK_LINE(540)
							if (((bool((this->listen_z_dyn() != null())) && bool(!(this->ignore_listeners))))){
								HX_STACK_LINE(540)
								this->listen_z(_z);
							}
							HX_STACK_LINE(540)
							this->z;
						}
					}
					HX_STACK_LINE(540)
					this->ignore_listeners = prev;
					HX_STACK_LINE(540)
					if (((bool((this->listen_x_dyn() != null())) && bool(!(this->ignore_listeners))))){
						HX_STACK_LINE(540)
						this->listen_x(this->x);
					}
					HX_STACK_LINE(540)
					if (((bool((this->listen_y_dyn() != null())) && bool(!(this->ignore_listeners))))){
						HX_STACK_LINE(540)
						this->listen_y(this->y);
					}
					HX_STACK_LINE(540)
					if (((bool((this->listen_z_dyn() != null())) && bool(!(this->ignore_listeners))))){
						HX_STACK_LINE(540)
						this->listen_z(this->z);
					}
					HX_STACK_LINE(540)
					hx::ObjectPtr<OBJ_>(this);
				}
				else{
					HX_STACK_LINE(540)
					bool prev = this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
					HX_STACK_LINE(540)
					this->ignore_listeners = true;
					HX_STACK_LINE(540)
					{
						HX_STACK_LINE(540)
						this->x = (int)0;
						HX_STACK_LINE(540)
						if ((this->_construct)){
							HX_STACK_LINE(540)
							this->x;
						}
						else{
							HX_STACK_LINE(540)
							if (((bool((this->listen_x_dyn() != null())) && bool(!(this->ignore_listeners))))){
								HX_STACK_LINE(540)
								this->listen_x((int)0);
							}
							HX_STACK_LINE(540)
							this->x;
						}
					}
					HX_STACK_LINE(540)
					{
						HX_STACK_LINE(540)
						this->y = (int)0;
						HX_STACK_LINE(540)
						if ((this->_construct)){
							HX_STACK_LINE(540)
							this->y;
						}
						else{
							HX_STACK_LINE(540)
							if (((bool((this->listen_y_dyn() != null())) && bool(!(this->ignore_listeners))))){
								HX_STACK_LINE(540)
								this->listen_y((int)0);
							}
							HX_STACK_LINE(540)
							this->y;
						}
					}
					HX_STACK_LINE(540)
					{
						HX_STACK_LINE(540)
						this->z = (int)0;
						HX_STACK_LINE(540)
						if ((this->_construct)){
							HX_STACK_LINE(540)
							this->z;
						}
						else{
							HX_STACK_LINE(540)
							if (((bool((this->listen_z_dyn() != null())) && bool(!(this->ignore_listeners))))){
								HX_STACK_LINE(540)
								this->listen_z((int)0);
							}
							HX_STACK_LINE(540)
							this->z;
						}
					}
					HX_STACK_LINE(540)
					this->ignore_listeners = prev;
					HX_STACK_LINE(540)
					if (((bool((this->listen_x_dyn() != null())) && bool(!(this->ignore_listeners))))){
						HX_STACK_LINE(540)
						this->listen_x(this->x);
					}
					HX_STACK_LINE(540)
					if (((bool((this->listen_y_dyn() != null())) && bool(!(this->ignore_listeners))))){
						HX_STACK_LINE(540)
						this->listen_y(this->y);
					}
					HX_STACK_LINE(540)
					if (((bool((this->listen_z_dyn() != null())) && bool(!(this->ignore_listeners))))){
						HX_STACK_LINE(540)
						this->listen_z(this->z);
					}
					HX_STACK_LINE(540)
					hx::ObjectPtr<OBJ_>(this);
				}
				HX_STACK_LINE(540)
				_this = hx::ObjectPtr<OBJ_>(this);
			}
			HX_STACK_LINE(540)
			{
				HX_STACK_LINE(540)
				Float _x = (_this->x * value);		HX_STACK_VAR(_x,"_x");
				HX_STACK_LINE(540)
				Float _y = (_this->y * value);		HX_STACK_VAR(_y,"_y");
				HX_STACK_LINE(540)
				Float _z = (_this->z * value);		HX_STACK_VAR(_z,"_z");
				HX_STACK_LINE(540)
				bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
				HX_STACK_LINE(540)
				_this->ignore_listeners = true;
				HX_STACK_LINE(540)
				{
					HX_STACK_LINE(540)
					_this->x = _x;
					HX_STACK_LINE(540)
					if ((_this->_construct)){
						HX_STACK_LINE(540)
						_this->x;
					}
					else{
						HX_STACK_LINE(540)
						if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
							HX_STACK_LINE(540)
							_this->listen_x(_x);
						}
						HX_STACK_LINE(540)
						_this->x;
					}
				}
				HX_STACK_LINE(540)
				{
					HX_STACK_LINE(540)
					_this->y = _y;
					HX_STACK_LINE(540)
					if ((_this->_construct)){
						HX_STACK_LINE(540)
						_this->y;
					}
					else{
						HX_STACK_LINE(540)
						if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
							HX_STACK_LINE(540)
							_this->listen_y(_y);
						}
						HX_STACK_LINE(540)
						_this->y;
					}
				}
				HX_STACK_LINE(540)
				{
					HX_STACK_LINE(540)
					_this->z = _z;
					HX_STACK_LINE(540)
					if ((_this->_construct)){
						HX_STACK_LINE(540)
						_this->z;
					}
					else{
						HX_STACK_LINE(540)
						if (((bool((_this->listen_z != null())) && bool(!(_this->ignore_listeners))))){
							HX_STACK_LINE(540)
							_this->listen_z(_z);
						}
						HX_STACK_LINE(540)
						_this->z;
					}
				}
				HX_STACK_LINE(540)
				_this->ignore_listeners = prev;
				HX_STACK_LINE(540)
				if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
					HX_STACK_LINE(540)
					_this->listen_x(_this->x);
				}
				HX_STACK_LINE(540)
				if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
					HX_STACK_LINE(540)
					_this->listen_y(_this->y);
				}
				HX_STACK_LINE(540)
				if (((bool((_this->listen_z != null())) && bool(!(_this->ignore_listeners))))){
					HX_STACK_LINE(540)
					_this->listen_z(_this->z);
				}
				HX_STACK_LINE(540)
				_this;
			}
			HX_STACK_LINE(540)
			_this;
		}
		HX_STACK_LINE(540)
		value;
	}
	HX_STACK_LINE(542)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(Vector_obj,truncate,return )

Float Vector_obj::rotationTo( ::phoenix::Vector other){
	HX_STACK_FRAME("phoenix.Vector","rotationTo",0x71bde365,"phoenix.Vector.rotationTo","phoenix/Vector.hx",546,0x5d0bf7fb)
	HX_STACK_THIS(this)
	HX_STACK_ARG(other,"other")
	HX_STACK_LINE(547)
	Float theta = ::Math_obj::atan2((other->x - this->x),(other->y - this->y));		HX_STACK_VAR(theta,"theta");
	HX_STACK_LINE(548)
	Float r = -(((180.0 + (Float((theta * 180.0)) / Float(::Math_obj::PI)))));		HX_STACK_VAR(r,"r");
	HX_STACK_LINE(549)
	return r;
}


HX_DEFINE_DYNAMIC_FUNC1(Vector_obj,rotationTo,return )

::phoenix::Vector Vector_obj::applyQuaternion( ::phoenix::Quaternion q){
	HX_STACK_FRAME("phoenix.Vector","applyQuaternion",0xc78c8fa0,"phoenix.Vector.applyQuaternion","phoenix/Vector.hx",554,0x5d0bf7fb)
	HX_STACK_THIS(this)
	HX_STACK_ARG(q,"q")
	HX_STACK_LINE(556)
	Float qx = q->x;		HX_STACK_VAR(qx,"qx");
	HX_STACK_LINE(557)
	Float qy = q->y;		HX_STACK_VAR(qy,"qy");
	HX_STACK_LINE(558)
	Float qz = q->z;		HX_STACK_VAR(qz,"qz");
	HX_STACK_LINE(559)
	Float qw = q->w;		HX_STACK_VAR(qw,"qw");
	HX_STACK_LINE(561)
	Float ix = (((qw * this->x) + (qy * this->z)) - (qz * this->y));		HX_STACK_VAR(ix,"ix");
	HX_STACK_LINE(562)
	Float iy = (((qw * this->y) + (qz * this->x)) - (qx * this->z));		HX_STACK_VAR(iy,"iy");
	HX_STACK_LINE(563)
	Float iz = (((qw * this->z) + (qx * this->y)) - (qy * this->x));		HX_STACK_VAR(iz,"iz");
	HX_STACK_LINE(564)
	Float iw = (((-(qx) * this->x) - (qy * this->y)) - (qz * this->z));		HX_STACK_VAR(iw,"iw");
	HX_STACK_LINE(566)
	{
		HX_STACK_LINE(566)
		Float _x = ((((ix * qw) + (iw * -(qx))) + (iy * -(qz))) - (iz * -(qy)));		HX_STACK_VAR(_x,"_x");
		HX_STACK_LINE(567)
		Float _y = ((((iy * qw) + (iw * -(qy))) + (iz * -(qx))) - (ix * -(qz)));		HX_STACK_VAR(_y,"_y");
		HX_STACK_LINE(568)
		Float _z = ((((iz * qw) + (iw * -(qz))) + (ix * -(qy))) - (iy * -(qx)));		HX_STACK_VAR(_z,"_z");
		HX_STACK_LINE(566)
		bool prev = this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
		HX_STACK_LINE(566)
		this->ignore_listeners = true;
		HX_STACK_LINE(566)
		{
			HX_STACK_LINE(566)
			this->x = _x;
			HX_STACK_LINE(566)
			if ((this->_construct)){
				HX_STACK_LINE(566)
				this->x;
			}
			else{
				HX_STACK_LINE(566)
				if (((bool((this->listen_x_dyn() != null())) && bool(!(this->ignore_listeners))))){
					HX_STACK_LINE(566)
					this->listen_x(_x);
				}
				HX_STACK_LINE(566)
				this->x;
			}
		}
		HX_STACK_LINE(566)
		{
			HX_STACK_LINE(566)
			this->y = _y;
			HX_STACK_LINE(566)
			if ((this->_construct)){
				HX_STACK_LINE(566)
				this->y;
			}
			else{
				HX_STACK_LINE(566)
				if (((bool((this->listen_y_dyn() != null())) && bool(!(this->ignore_listeners))))){
					HX_STACK_LINE(566)
					this->listen_y(_y);
				}
				HX_STACK_LINE(566)
				this->y;
			}
		}
		HX_STACK_LINE(566)
		{
			HX_STACK_LINE(566)
			this->z = _z;
			HX_STACK_LINE(566)
			if ((this->_construct)){
				HX_STACK_LINE(566)
				this->z;
			}
			else{
				HX_STACK_LINE(566)
				if (((bool((this->listen_z_dyn() != null())) && bool(!(this->ignore_listeners))))){
					HX_STACK_LINE(566)
					this->listen_z(_z);
				}
				HX_STACK_LINE(566)
				this->z;
			}
		}
		HX_STACK_LINE(566)
		this->ignore_listeners = prev;
		HX_STACK_LINE(566)
		if (((bool((this->listen_x_dyn() != null())) && bool(!(this->ignore_listeners))))){
			HX_STACK_LINE(566)
			this->listen_x(this->x);
		}
		HX_STACK_LINE(566)
		if (((bool((this->listen_y_dyn() != null())) && bool(!(this->ignore_listeners))))){
			HX_STACK_LINE(566)
			this->listen_y(this->y);
		}
		HX_STACK_LINE(566)
		if (((bool((this->listen_z_dyn() != null())) && bool(!(this->ignore_listeners))))){
			HX_STACK_LINE(566)
			this->listen_z(this->z);
		}
		HX_STACK_LINE(566)
		hx::ObjectPtr<OBJ_>(this);
	}
	HX_STACK_LINE(570)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(Vector_obj,applyQuaternion,return )

::phoenix::Vector Vector_obj::applyProjection( ::phoenix::Matrix m){
	HX_STACK_FRAME("phoenix.Vector","applyProjection",0x704e0b11,"phoenix.Vector.applyProjection","phoenix/Vector.hx",574,0x5d0bf7fb)
	HX_STACK_THIS(this)
	HX_STACK_ARG(m,"m")
	HX_STACK_LINE(576)
	Array< Float > e = m->elements;		HX_STACK_VAR(e,"e");
	HX_STACK_LINE(577)
	Float x = this->x;		HX_STACK_VAR(x,"x");
	HX_STACK_LINE(577)
	Float y = this->y;		HX_STACK_VAR(y,"y");
	HX_STACK_LINE(577)
	Float z = this->z;		HX_STACK_VAR(z,"z");
	HX_STACK_LINE(578)
	Float d = (Float((int)1) / Float((((((e->__get((int)3) * x) + (e->__get((int)7) * y)) + (e->__get((int)11) * z)) + e->__get((int)15)))));		HX_STACK_VAR(d,"d");
	HX_STACK_LINE(580)
	{
		HX_STACK_LINE(580)
		Float _x = ((((((e->__get((int)0) * x) + (e->__get((int)4) * y)) + (e->__get((int)8) * z)) + e->__get((int)12))) * d);		HX_STACK_VAR(_x,"_x");
		HX_STACK_LINE(581)
		Float _y = ((((((e->__get((int)1) * x) + (e->__get((int)5) * y)) + (e->__get((int)9) * z)) + e->__get((int)13))) * d);		HX_STACK_VAR(_y,"_y");
		HX_STACK_LINE(582)
		Float _z = ((((((e->__get((int)2) * x) + (e->__get((int)6) * y)) + (e->__get((int)10) * z)) + e->__get((int)14))) * d);		HX_STACK_VAR(_z,"_z");
		HX_STACK_LINE(580)
		bool prev = this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
		HX_STACK_LINE(580)
		this->ignore_listeners = true;
		HX_STACK_LINE(580)
		{
			HX_STACK_LINE(580)
			this->x = _x;
			HX_STACK_LINE(580)
			if ((this->_construct)){
				HX_STACK_LINE(580)
				this->x;
			}
			else{
				HX_STACK_LINE(580)
				if (((bool((this->listen_x_dyn() != null())) && bool(!(this->ignore_listeners))))){
					HX_STACK_LINE(580)
					this->listen_x(_x);
				}
				HX_STACK_LINE(580)
				this->x;
			}
		}
		HX_STACK_LINE(580)
		{
			HX_STACK_LINE(580)
			this->y = _y;
			HX_STACK_LINE(580)
			if ((this->_construct)){
				HX_STACK_LINE(580)
				this->y;
			}
			else{
				HX_STACK_LINE(580)
				if (((bool((this->listen_y_dyn() != null())) && bool(!(this->ignore_listeners))))){
					HX_STACK_LINE(580)
					this->listen_y(_y);
				}
				HX_STACK_LINE(580)
				this->y;
			}
		}
		HX_STACK_LINE(580)
		{
			HX_STACK_LINE(580)
			this->z = _z;
			HX_STACK_LINE(580)
			if ((this->_construct)){
				HX_STACK_LINE(580)
				this->z;
			}
			else{
				HX_STACK_LINE(580)
				if (((bool((this->listen_z_dyn() != null())) && bool(!(this->ignore_listeners))))){
					HX_STACK_LINE(580)
					this->listen_z(_z);
				}
				HX_STACK_LINE(580)
				this->z;
			}
		}
		HX_STACK_LINE(580)
		this->ignore_listeners = prev;
		HX_STACK_LINE(580)
		if (((bool((this->listen_x_dyn() != null())) && bool(!(this->ignore_listeners))))){
			HX_STACK_LINE(580)
			this->listen_x(this->x);
		}
		HX_STACK_LINE(580)
		if (((bool((this->listen_y_dyn() != null())) && bool(!(this->ignore_listeners))))){
			HX_STACK_LINE(580)
			this->listen_y(this->y);
		}
		HX_STACK_LINE(580)
		if (((bool((this->listen_z_dyn() != null())) && bool(!(this->ignore_listeners))))){
			HX_STACK_LINE(580)
			this->listen_z(this->z);
		}
		HX_STACK_LINE(580)
		hx::ObjectPtr<OBJ_>(this);
	}
	HX_STACK_LINE(584)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(Vector_obj,applyProjection,return )

::phoenix::Vector Vector_obj::transform( ::phoenix::Matrix _m){
	HX_STACK_FRAME("phoenix.Vector","transform",0x2bce01e0,"phoenix.Vector.transform","phoenix/Vector.hx",588,0x5d0bf7fb)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_m,"_m")
	HX_STACK_LINE(590)
	Float _x = this->x;		HX_STACK_VAR(_x,"_x");
	HX_STACK_LINE(591)
	Float _y = this->y;		HX_STACK_VAR(_y,"_y");
	HX_STACK_LINE(592)
	Float _z = this->z;		HX_STACK_VAR(_z,"_z");
	HX_STACK_LINE(594)
	Array< Float > e = _m->elements;		HX_STACK_VAR(e,"e");
	HX_STACK_LINE(596)
	{
		HX_STACK_LINE(596)
		Float _x1 = ((((e->__get((int)0) * _x) + (e->__get((int)4) * _y)) + (e->__get((int)8) * _z)) + e->__get((int)12));		HX_STACK_VAR(_x1,"_x1");
		HX_STACK_LINE(597)
		Float _y1 = ((((e->__get((int)1) * _x) + (e->__get((int)5) * _y)) + (e->__get((int)9) * _z)) + e->__get((int)13));		HX_STACK_VAR(_y1,"_y1");
		HX_STACK_LINE(598)
		Float _z1 = ((((e->__get((int)2) * _x) + (e->__get((int)6) * _y)) + (e->__get((int)10) * _z)) + e->__get((int)14));		HX_STACK_VAR(_z1,"_z1");
		HX_STACK_LINE(596)
		bool prev = this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
		HX_STACK_LINE(596)
		this->ignore_listeners = true;
		HX_STACK_LINE(596)
		{
			HX_STACK_LINE(596)
			this->x = _x1;
			HX_STACK_LINE(596)
			if ((this->_construct)){
				HX_STACK_LINE(596)
				this->x;
			}
			else{
				HX_STACK_LINE(596)
				if (((bool((this->listen_x_dyn() != null())) && bool(!(this->ignore_listeners))))){
					HX_STACK_LINE(596)
					this->listen_x(_x1);
				}
				HX_STACK_LINE(596)
				this->x;
			}
		}
		HX_STACK_LINE(596)
		{
			HX_STACK_LINE(596)
			this->y = _y1;
			HX_STACK_LINE(596)
			if ((this->_construct)){
				HX_STACK_LINE(596)
				this->y;
			}
			else{
				HX_STACK_LINE(596)
				if (((bool((this->listen_y_dyn() != null())) && bool(!(this->ignore_listeners))))){
					HX_STACK_LINE(596)
					this->listen_y(_y1);
				}
				HX_STACK_LINE(596)
				this->y;
			}
		}
		HX_STACK_LINE(596)
		{
			HX_STACK_LINE(596)
			this->z = _z1;
			HX_STACK_LINE(596)
			if ((this->_construct)){
				HX_STACK_LINE(596)
				this->z;
			}
			else{
				HX_STACK_LINE(596)
				if (((bool((this->listen_z_dyn() != null())) && bool(!(this->ignore_listeners))))){
					HX_STACK_LINE(596)
					this->listen_z(_z1);
				}
				HX_STACK_LINE(596)
				this->z;
			}
		}
		HX_STACK_LINE(596)
		this->ignore_listeners = prev;
		HX_STACK_LINE(596)
		if (((bool((this->listen_x_dyn() != null())) && bool(!(this->ignore_listeners))))){
			HX_STACK_LINE(596)
			this->listen_x(this->x);
		}
		HX_STACK_LINE(596)
		if (((bool((this->listen_y_dyn() != null())) && bool(!(this->ignore_listeners))))){
			HX_STACK_LINE(596)
			this->listen_y(this->y);
		}
		HX_STACK_LINE(596)
		if (((bool((this->listen_z_dyn() != null())) && bool(!(this->ignore_listeners))))){
			HX_STACK_LINE(596)
			this->listen_z(this->z);
		}
		HX_STACK_LINE(596)
		hx::ObjectPtr<OBJ_>(this);
	}
	HX_STACK_LINE(600)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(Vector_obj,transform,return )

::phoenix::Vector Vector_obj::transformDirection( ::phoenix::Matrix m){
	HX_STACK_FRAME("phoenix.Vector","transformDirection",0x2826043f,"phoenix.Vector.transformDirection","phoenix/Vector.hx",604,0x5d0bf7fb)
	HX_STACK_THIS(this)
	HX_STACK_ARG(m,"m")
	HX_STACK_LINE(606)
	Array< Float > e = m->elements;		HX_STACK_VAR(e,"e");
	HX_STACK_LINE(607)
	Float x = this->x;		HX_STACK_VAR(x,"x");
	HX_STACK_LINE(607)
	Float y = this->y;		HX_STACK_VAR(y,"y");
	HX_STACK_LINE(607)
	Float z = this->z;		HX_STACK_VAR(z,"z");
	HX_STACK_LINE(609)
	{
		HX_STACK_LINE(609)
		Float _x = (((e->__get((int)0) * x) + (e->__get((int)4) * y)) + (e->__get((int)8) * z));		HX_STACK_VAR(_x,"_x");
		HX_STACK_LINE(610)
		Float _y = (((e->__get((int)1) * x) + (e->__get((int)5) * y)) + (e->__get((int)9) * z));		HX_STACK_VAR(_y,"_y");
		HX_STACK_LINE(611)
		Float _z = (((e->__get((int)2) * x) + (e->__get((int)6) * y)) + (e->__get((int)10) * z));		HX_STACK_VAR(_z,"_z");
		HX_STACK_LINE(609)
		bool prev = this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
		HX_STACK_LINE(609)
		this->ignore_listeners = true;
		HX_STACK_LINE(609)
		{
			HX_STACK_LINE(609)
			this->x = _x;
			HX_STACK_LINE(609)
			if ((this->_construct)){
				HX_STACK_LINE(609)
				this->x;
			}
			else{
				HX_STACK_LINE(609)
				if (((bool((this->listen_x_dyn() != null())) && bool(!(this->ignore_listeners))))){
					HX_STACK_LINE(609)
					this->listen_x(_x);
				}
				HX_STACK_LINE(609)
				this->x;
			}
		}
		HX_STACK_LINE(609)
		{
			HX_STACK_LINE(609)
			this->y = _y;
			HX_STACK_LINE(609)
			if ((this->_construct)){
				HX_STACK_LINE(609)
				this->y;
			}
			else{
				HX_STACK_LINE(609)
				if (((bool((this->listen_y_dyn() != null())) && bool(!(this->ignore_listeners))))){
					HX_STACK_LINE(609)
					this->listen_y(_y);
				}
				HX_STACK_LINE(609)
				this->y;
			}
		}
		HX_STACK_LINE(609)
		{
			HX_STACK_LINE(609)
			this->z = _z;
			HX_STACK_LINE(609)
			if ((this->_construct)){
				HX_STACK_LINE(609)
				this->z;
			}
			else{
				HX_STACK_LINE(609)
				if (((bool((this->listen_z_dyn() != null())) && bool(!(this->ignore_listeners))))){
					HX_STACK_LINE(609)
					this->listen_z(_z);
				}
				HX_STACK_LINE(609)
				this->z;
			}
		}
		HX_STACK_LINE(609)
		this->ignore_listeners = prev;
		HX_STACK_LINE(609)
		if (((bool((this->listen_x_dyn() != null())) && bool(!(this->ignore_listeners))))){
			HX_STACK_LINE(609)
			this->listen_x(this->x);
		}
		HX_STACK_LINE(609)
		if (((bool((this->listen_y_dyn() != null())) && bool(!(this->ignore_listeners))))){
			HX_STACK_LINE(609)
			this->listen_y(this->y);
		}
		HX_STACK_LINE(609)
		if (((bool((this->listen_z_dyn() != null())) && bool(!(this->ignore_listeners))))){
			HX_STACK_LINE(609)
			this->listen_z(this->z);
		}
		HX_STACK_LINE(609)
		hx::ObjectPtr<OBJ_>(this);
	}
	HX_STACK_LINE(613)
	{
		HX_STACK_LINE(613)
		Float v = ::Math_obj::sqrt((((this->x * this->x) + (this->y * this->y)) + (this->z * this->z)));		HX_STACK_VAR(v,"v");
		HX_STACK_LINE(613)
		if (((v != (int)0))){
			HX_STACK_LINE(613)
			Float _x = (Float(this->x) / Float(v));		HX_STACK_VAR(_x,"_x");
			HX_STACK_LINE(613)
			Float _y = (Float(this->y) / Float(v));		HX_STACK_VAR(_y,"_y");
			HX_STACK_LINE(613)
			Float _z = (Float(this->z) / Float(v));		HX_STACK_VAR(_z,"_z");
			HX_STACK_LINE(613)
			bool prev = this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
			HX_STACK_LINE(613)
			this->ignore_listeners = true;
			HX_STACK_LINE(613)
			{
				HX_STACK_LINE(613)
				this->x = _x;
				HX_STACK_LINE(613)
				if ((this->_construct)){
					HX_STACK_LINE(613)
					this->x;
				}
				else{
					HX_STACK_LINE(613)
					if (((bool((this->listen_x_dyn() != null())) && bool(!(this->ignore_listeners))))){
						HX_STACK_LINE(613)
						this->listen_x(_x);
					}
					HX_STACK_LINE(613)
					this->x;
				}
			}
			HX_STACK_LINE(613)
			{
				HX_STACK_LINE(613)
				this->y = _y;
				HX_STACK_LINE(613)
				if ((this->_construct)){
					HX_STACK_LINE(613)
					this->y;
				}
				else{
					HX_STACK_LINE(613)
					if (((bool((this->listen_y_dyn() != null())) && bool(!(this->ignore_listeners))))){
						HX_STACK_LINE(613)
						this->listen_y(_y);
					}
					HX_STACK_LINE(613)
					this->y;
				}
			}
			HX_STACK_LINE(613)
			{
				HX_STACK_LINE(613)
				this->z = _z;
				HX_STACK_LINE(613)
				if ((this->_construct)){
					HX_STACK_LINE(613)
					this->z;
				}
				else{
					HX_STACK_LINE(613)
					if (((bool((this->listen_z_dyn() != null())) && bool(!(this->ignore_listeners))))){
						HX_STACK_LINE(613)
						this->listen_z(_z);
					}
					HX_STACK_LINE(613)
					this->z;
				}
			}
			HX_STACK_LINE(613)
			this->ignore_listeners = prev;
			HX_STACK_LINE(613)
			if (((bool((this->listen_x_dyn() != null())) && bool(!(this->ignore_listeners))))){
				HX_STACK_LINE(613)
				this->listen_x(this->x);
			}
			HX_STACK_LINE(613)
			if (((bool((this->listen_y_dyn() != null())) && bool(!(this->ignore_listeners))))){
				HX_STACK_LINE(613)
				this->listen_y(this->y);
			}
			HX_STACK_LINE(613)
			if (((bool((this->listen_z_dyn() != null())) && bool(!(this->ignore_listeners))))){
				HX_STACK_LINE(613)
				this->listen_z(this->z);
			}
			HX_STACK_LINE(613)
			hx::ObjectPtr<OBJ_>(this);
		}
		else{
			HX_STACK_LINE(613)
			bool prev = this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
			HX_STACK_LINE(613)
			this->ignore_listeners = true;
			HX_STACK_LINE(613)
			{
				HX_STACK_LINE(613)
				this->x = (int)0;
				HX_STACK_LINE(613)
				if ((this->_construct)){
					HX_STACK_LINE(613)
					this->x;
				}
				else{
					HX_STACK_LINE(613)
					if (((bool((this->listen_x_dyn() != null())) && bool(!(this->ignore_listeners))))){
						HX_STACK_LINE(613)
						this->listen_x((int)0);
					}
					HX_STACK_LINE(613)
					this->x;
				}
			}
			HX_STACK_LINE(613)
			{
				HX_STACK_LINE(613)
				this->y = (int)0;
				HX_STACK_LINE(613)
				if ((this->_construct)){
					HX_STACK_LINE(613)
					this->y;
				}
				else{
					HX_STACK_LINE(613)
					if (((bool((this->listen_y_dyn() != null())) && bool(!(this->ignore_listeners))))){
						HX_STACK_LINE(613)
						this->listen_y((int)0);
					}
					HX_STACK_LINE(613)
					this->y;
				}
			}
			HX_STACK_LINE(613)
			{
				HX_STACK_LINE(613)
				this->z = (int)0;
				HX_STACK_LINE(613)
				if ((this->_construct)){
					HX_STACK_LINE(613)
					this->z;
				}
				else{
					HX_STACK_LINE(613)
					if (((bool((this->listen_z_dyn() != null())) && bool(!(this->ignore_listeners))))){
						HX_STACK_LINE(613)
						this->listen_z((int)0);
					}
					HX_STACK_LINE(613)
					this->z;
				}
			}
			HX_STACK_LINE(613)
			this->ignore_listeners = prev;
			HX_STACK_LINE(613)
			if (((bool((this->listen_x_dyn() != null())) && bool(!(this->ignore_listeners))))){
				HX_STACK_LINE(613)
				this->listen_x(this->x);
			}
			HX_STACK_LINE(613)
			if (((bool((this->listen_y_dyn() != null())) && bool(!(this->ignore_listeners))))){
				HX_STACK_LINE(613)
				this->listen_y(this->y);
			}
			HX_STACK_LINE(613)
			if (((bool((this->listen_z_dyn() != null())) && bool(!(this->ignore_listeners))))){
				HX_STACK_LINE(613)
				this->listen_z(this->z);
			}
			HX_STACK_LINE(613)
			hx::ObjectPtr<OBJ_>(this);
		}
		HX_STACK_LINE(613)
		hx::ObjectPtr<OBJ_>(this);
	}
	HX_STACK_LINE(615)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(Vector_obj,transformDirection,return )

::phoenix::Vector Vector_obj::setEulerFromRotationMatrix( ::phoenix::Matrix m,hx::Null< int >  __o_order){
int order = __o_order.Default(0);
	HX_STACK_FRAME("phoenix.Vector","setEulerFromRotationMatrix",0x93d27e7c,"phoenix.Vector.setEulerFromRotationMatrix","phoenix/Vector.hx",619,0x5d0bf7fb)
	HX_STACK_THIS(this)
	HX_STACK_ARG(m,"m")
	HX_STACK_ARG(order,"order")
{
		HX_STACK_LINE(621)
		Array< Float > te = m->elements;		HX_STACK_VAR(te,"te");
		HX_STACK_LINE(622)
		Float m11 = te->__get((int)0);		HX_STACK_VAR(m11,"m11");
		HX_STACK_LINE(622)
		Float m12 = te->__get((int)4);		HX_STACK_VAR(m12,"m12");
		HX_STACK_LINE(622)
		Float m13 = te->__get((int)8);		HX_STACK_VAR(m13,"m13");
		HX_STACK_LINE(623)
		Float m21 = te->__get((int)1);		HX_STACK_VAR(m21,"m21");
		HX_STACK_LINE(623)
		Float m22 = te->__get((int)5);		HX_STACK_VAR(m22,"m22");
		HX_STACK_LINE(623)
		Float m23 = te->__get((int)9);		HX_STACK_VAR(m23,"m23");
		HX_STACK_LINE(624)
		Float m31 = te->__get((int)2);		HX_STACK_VAR(m31,"m31");
		HX_STACK_LINE(624)
		Float m32 = te->__get((int)6);		HX_STACK_VAR(m32,"m32");
		HX_STACK_LINE(624)
		Float m33 = te->__get((int)10);		HX_STACK_VAR(m33,"m33");
		HX_STACK_LINE(626)
		Float _x = this->x;		HX_STACK_VAR(_x,"_x");
		HX_STACK_LINE(627)
		Float _y = this->y;		HX_STACK_VAR(_y,"_y");
		HX_STACK_LINE(628)
		Float _z = this->z;		HX_STACK_VAR(_z,"_z");
		HX_STACK_LINE(630)
		if (((order == (int)0))){
			HX_STACK_LINE(632)
			Float _g = ::Math_obj::asin((  (((m13 < (int)-1))) ? Float((int)-1) : Float((  (((m13 > (int)1))) ? Float((int)1) : Float(m13) )) ));		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(632)
			_y = _g;
			HX_STACK_LINE(634)
			Float _g1 = ::Math_obj::abs(m13);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(634)
			if (((_g1 < 0.99999))){
				HX_STACK_LINE(636)
				Float _g2 = ::Math_obj::atan2(-(m23),m33);		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(636)
				_x = _g2;
				HX_STACK_LINE(637)
				Float _g3 = ::Math_obj::atan2(-(m12),m11);		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(637)
				_z = _g3;
			}
			else{
				HX_STACK_LINE(639)
				Float _g4 = ::Math_obj::atan2(m32,m22);		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(639)
				_x = _g4;
				HX_STACK_LINE(640)
				_z = (int)0;
			}
		}
		else{
			HX_STACK_LINE(643)
			if (((order == (int)1))){
				HX_STACK_LINE(645)
				Float _g5 = ::Math_obj::asin(-(((  (((m23 < (int)-1))) ? Float((int)-1) : Float((  (((m23 > (int)1))) ? Float((int)1) : Float(m23) )) ))));		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(645)
				_x = _g5;
				HX_STACK_LINE(647)
				Float _g6 = ::Math_obj::abs(m23);		HX_STACK_VAR(_g6,"_g6");
				HX_STACK_LINE(647)
				if (((_g6 < 0.99999))){
					HX_STACK_LINE(648)
					Float _g7 = ::Math_obj::atan2(m13,m33);		HX_STACK_VAR(_g7,"_g7");
					HX_STACK_LINE(648)
					_y = _g7;
					HX_STACK_LINE(649)
					Float _g8 = ::Math_obj::atan2(m21,m22);		HX_STACK_VAR(_g8,"_g8");
					HX_STACK_LINE(649)
					_z = _g8;
				}
				else{
					HX_STACK_LINE(651)
					Float _g9 = ::Math_obj::atan2(-(m31),m11);		HX_STACK_VAR(_g9,"_g9");
					HX_STACK_LINE(651)
					_y = _g9;
					HX_STACK_LINE(652)
					_z = (int)0;
				}
			}
			else{
				HX_STACK_LINE(655)
				if (((order == (int)2))){
					HX_STACK_LINE(657)
					Float _g10 = ::Math_obj::asin((  (((m32 < (int)-1))) ? Float((int)-1) : Float((  (((m32 > (int)1))) ? Float((int)1) : Float(m32) )) ));		HX_STACK_VAR(_g10,"_g10");
					HX_STACK_LINE(657)
					_x = _g10;
					HX_STACK_LINE(659)
					Float _g11 = ::Math_obj::abs(m32);		HX_STACK_VAR(_g11,"_g11");
					HX_STACK_LINE(659)
					if (((_g11 < 0.99999))){
						HX_STACK_LINE(660)
						Float _g12 = ::Math_obj::atan2(-(m31),m33);		HX_STACK_VAR(_g12,"_g12");
						HX_STACK_LINE(660)
						_y = _g12;
						HX_STACK_LINE(661)
						Float _g13 = ::Math_obj::atan2(-(m12),m22);		HX_STACK_VAR(_g13,"_g13");
						HX_STACK_LINE(661)
						_z = _g13;
					}
					else{
						HX_STACK_LINE(663)
						_y = (int)0;
						HX_STACK_LINE(664)
						Float _g14 = ::Math_obj::atan2(m21,m11);		HX_STACK_VAR(_g14,"_g14");
						HX_STACK_LINE(664)
						_z = _g14;
					}
				}
				else{
					HX_STACK_LINE(667)
					if (((order == (int)3))){
						HX_STACK_LINE(669)
						Float _g15 = ::Math_obj::asin(-(((  (((m31 < (int)-1))) ? Float((int)-1) : Float((  (((m31 > (int)1))) ? Float((int)1) : Float(m31) )) ))));		HX_STACK_VAR(_g15,"_g15");
						HX_STACK_LINE(669)
						_y = _g15;
						HX_STACK_LINE(671)
						Float _g16 = ::Math_obj::abs(m31);		HX_STACK_VAR(_g16,"_g16");
						HX_STACK_LINE(671)
						if (((_g16 < 0.99999))){
							HX_STACK_LINE(672)
							Float _g17 = ::Math_obj::atan2(m32,m33);		HX_STACK_VAR(_g17,"_g17");
							HX_STACK_LINE(672)
							_x = _g17;
							HX_STACK_LINE(673)
							Float _g18 = ::Math_obj::atan2(m21,m11);		HX_STACK_VAR(_g18,"_g18");
							HX_STACK_LINE(673)
							_z = _g18;
						}
						else{
							HX_STACK_LINE(675)
							_x = (int)0;
							HX_STACK_LINE(676)
							Float _g19 = ::Math_obj::atan2(-(m12),m22);		HX_STACK_VAR(_g19,"_g19");
							HX_STACK_LINE(676)
							_z = _g19;
						}
					}
					else{
						HX_STACK_LINE(679)
						if (((order == (int)4))){
							HX_STACK_LINE(681)
							Float _g20 = ::Math_obj::asin((  (((m21 < (int)-1))) ? Float((int)-1) : Float((  (((m21 > (int)1))) ? Float((int)1) : Float(m21) )) ));		HX_STACK_VAR(_g20,"_g20");
							HX_STACK_LINE(681)
							_z = _g20;
							HX_STACK_LINE(683)
							Float _g21 = ::Math_obj::abs(m21);		HX_STACK_VAR(_g21,"_g21");
							HX_STACK_LINE(683)
							if (((_g21 < 0.99999))){
								HX_STACK_LINE(684)
								Float _g22 = ::Math_obj::atan2(-(m23),m22);		HX_STACK_VAR(_g22,"_g22");
								HX_STACK_LINE(684)
								_x = _g22;
								HX_STACK_LINE(685)
								Float _g23 = ::Math_obj::atan2(-(m31),m11);		HX_STACK_VAR(_g23,"_g23");
								HX_STACK_LINE(685)
								_y = _g23;
							}
							else{
								HX_STACK_LINE(687)
								_x = (int)0;
								HX_STACK_LINE(688)
								Float _g24 = ::Math_obj::atan2(m13,m33);		HX_STACK_VAR(_g24,"_g24");
								HX_STACK_LINE(688)
								_y = _g24;
							}
						}
						else{
							HX_STACK_LINE(691)
							if (((order == (int)5))){
								HX_STACK_LINE(693)
								Float _g25 = ::Math_obj::asin(-(((  (((m12 < (int)-1))) ? Float((int)-1) : Float((  (((m12 > (int)1))) ? Float((int)1) : Float(m12) )) ))));		HX_STACK_VAR(_g25,"_g25");
								HX_STACK_LINE(693)
								_z = _g25;
								HX_STACK_LINE(695)
								Float _g26 = ::Math_obj::abs(m12);		HX_STACK_VAR(_g26,"_g26");
								HX_STACK_LINE(695)
								if (((_g26 < 0.99999))){
									HX_STACK_LINE(696)
									Float _g27 = ::Math_obj::atan2(m32,m22);		HX_STACK_VAR(_g27,"_g27");
									HX_STACK_LINE(696)
									_x = _g27;
									HX_STACK_LINE(697)
									Float _g28 = ::Math_obj::atan2(m13,m11);		HX_STACK_VAR(_g28,"_g28");
									HX_STACK_LINE(697)
									_y = _g28;
								}
								else{
									HX_STACK_LINE(699)
									Float _g29 = ::Math_obj::atan2(-(m23),m33);		HX_STACK_VAR(_g29,"_g29");
									HX_STACK_LINE(699)
									_x = _g29;
									HX_STACK_LINE(700)
									_y = (int)0;
								}
							}
						}
					}
				}
			}
		}
		HX_STACK_LINE(705)
		{
			HX_STACK_LINE(705)
			bool prev = this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
			HX_STACK_LINE(705)
			this->ignore_listeners = true;
			HX_STACK_LINE(705)
			{
				HX_STACK_LINE(705)
				this->x = _x;
				HX_STACK_LINE(705)
				if ((this->_construct)){
					HX_STACK_LINE(705)
					this->x;
				}
				else{
					HX_STACK_LINE(705)
					if (((bool((this->listen_x_dyn() != null())) && bool(!(this->ignore_listeners))))){
						HX_STACK_LINE(705)
						this->listen_x(_x);
					}
					HX_STACK_LINE(705)
					this->x;
				}
			}
			HX_STACK_LINE(705)
			{
				HX_STACK_LINE(705)
				this->y = _y;
				HX_STACK_LINE(705)
				if ((this->_construct)){
					HX_STACK_LINE(705)
					this->y;
				}
				else{
					HX_STACK_LINE(705)
					if (((bool((this->listen_y_dyn() != null())) && bool(!(this->ignore_listeners))))){
						HX_STACK_LINE(705)
						this->listen_y(_y);
					}
					HX_STACK_LINE(705)
					this->y;
				}
			}
			HX_STACK_LINE(705)
			{
				HX_STACK_LINE(705)
				this->z = _z;
				HX_STACK_LINE(705)
				if ((this->_construct)){
					HX_STACK_LINE(705)
					this->z;
				}
				else{
					HX_STACK_LINE(705)
					if (((bool((this->listen_z_dyn() != null())) && bool(!(this->ignore_listeners))))){
						HX_STACK_LINE(705)
						this->listen_z(_z);
					}
					HX_STACK_LINE(705)
					this->z;
				}
			}
			HX_STACK_LINE(705)
			this->ignore_listeners = prev;
			HX_STACK_LINE(705)
			if (((bool((this->listen_x_dyn() != null())) && bool(!(this->ignore_listeners))))){
				HX_STACK_LINE(705)
				this->listen_x(this->x);
			}
			HX_STACK_LINE(705)
			if (((bool((this->listen_y_dyn() != null())) && bool(!(this->ignore_listeners))))){
				HX_STACK_LINE(705)
				this->listen_y(this->y);
			}
			HX_STACK_LINE(705)
			if (((bool((this->listen_z_dyn() != null())) && bool(!(this->ignore_listeners))))){
				HX_STACK_LINE(705)
				this->listen_z(this->z);
			}
			HX_STACK_LINE(705)
			hx::ObjectPtr<OBJ_>(this);
		}
		HX_STACK_LINE(707)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC2(Vector_obj,setEulerFromRotationMatrix,return )

::phoenix::Vector Vector_obj::setEulerFromQuaternion( ::phoenix::Quaternion q,hx::Null< int >  __o_order){
int order = __o_order.Default(0);
	HX_STACK_FRAME("phoenix.Vector","setEulerFromQuaternion",0x59e86efb,"phoenix.Vector.setEulerFromQuaternion","phoenix/Vector.hx",711,0x5d0bf7fb)
	HX_STACK_THIS(this)
	HX_STACK_ARG(q,"q")
	HX_STACK_ARG(order,"order")
{
		HX_STACK_LINE(713)
		Float sqx = (q->x * q->x);		HX_STACK_VAR(sqx,"sqx");
		HX_STACK_LINE(714)
		Float sqy = (q->y * q->y);		HX_STACK_VAR(sqy,"sqy");
		HX_STACK_LINE(715)
		Float sqz = (q->z * q->z);		HX_STACK_VAR(sqz,"sqz");
		HX_STACK_LINE(716)
		Float sqw = (q->w * q->w);		HX_STACK_VAR(sqw,"sqw");
		HX_STACK_LINE(718)
		Float _x = this->x;		HX_STACK_VAR(_x,"_x");
		HX_STACK_LINE(719)
		Float _y = this->y;		HX_STACK_VAR(_y,"_y");
		HX_STACK_LINE(720)
		Float _z = this->z;		HX_STACK_VAR(_z,"_z");
		HX_STACK_LINE(722)
		if (((order == (int)0))){
			HX_STACK_LINE(723)
			Float _g = ::Math_obj::atan2(((int)2 * (((q->x * q->w) - (q->y * q->z)))),(((sqw - sqx) - sqy) + sqz));		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(723)
			_x = _g;
			struct _Function_2_1{
				inline static Float Block( ::phoenix::Quaternion &q){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Vector.hx",724,0x5d0bf7fb)
					{
						HX_STACK_LINE(724)
						Float value = ((int)2 * (((q->x * q->z) + (q->y * q->w))));		HX_STACK_VAR(value,"value");
						HX_STACK_LINE(724)
						return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
					}
					return null();
				}
			};
			HX_STACK_LINE(724)
			Float _g1 = ::Math_obj::asin(_Function_2_1::Block(q));		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(724)
			_y = _g1;
			HX_STACK_LINE(725)
			Float _g2 = ::Math_obj::atan2(((int)2 * (((q->z * q->w) - (q->x * q->y)))),(((sqw + sqx) - sqy) - sqz));		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(725)
			_z = _g2;
		}
		else{
			HX_STACK_LINE(726)
			if (((order == (int)1))){
				struct _Function_3_1{
					inline static Float Block( ::phoenix::Quaternion &q){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Vector.hx",727,0x5d0bf7fb)
						{
							HX_STACK_LINE(727)
							Float value = ((int)2 * (((q->x * q->w) - (q->y * q->z))));		HX_STACK_VAR(value,"value");
							HX_STACK_LINE(727)
							return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
						}
						return null();
					}
				};
				HX_STACK_LINE(727)
				Float _g3 = ::Math_obj::asin(_Function_3_1::Block(q));		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(727)
				_x = _g3;
				HX_STACK_LINE(728)
				Float _g4 = ::Math_obj::atan2(((int)2 * (((q->x * q->z) + (q->y * q->w)))),(((sqw - sqx) - sqy) + sqz));		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(728)
				_y = _g4;
				HX_STACK_LINE(729)
				Float _g5 = ::Math_obj::atan2(((int)2 * (((q->x * q->y) + (q->z * q->w)))),(((sqw - sqx) + sqy) - sqz));		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(729)
				_z = _g5;
			}
			else{
				HX_STACK_LINE(730)
				if (((order == (int)2))){
					struct _Function_4_1{
						inline static Float Block( ::phoenix::Quaternion &q){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Vector.hx",731,0x5d0bf7fb)
							{
								HX_STACK_LINE(731)
								Float value = ((int)2 * (((q->x * q->w) + (q->y * q->z))));		HX_STACK_VAR(value,"value");
								HX_STACK_LINE(731)
								return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
							}
							return null();
						}
					};
					HX_STACK_LINE(731)
					Float _g6 = ::Math_obj::asin(_Function_4_1::Block(q));		HX_STACK_VAR(_g6,"_g6");
					HX_STACK_LINE(731)
					_x = _g6;
					HX_STACK_LINE(732)
					Float _g7 = ::Math_obj::atan2(((int)2 * (((q->y * q->w) - (q->z * q->x)))),(((sqw - sqx) - sqy) + sqz));		HX_STACK_VAR(_g7,"_g7");
					HX_STACK_LINE(732)
					_y = _g7;
					HX_STACK_LINE(733)
					Float _g8 = ::Math_obj::atan2(((int)2 * (((q->z * q->w) - (q->x * q->y)))),(((sqw - sqx) + sqy) - sqz));		HX_STACK_VAR(_g8,"_g8");
					HX_STACK_LINE(733)
					_z = _g8;
				}
				else{
					HX_STACK_LINE(734)
					if (((order == (int)3))){
						HX_STACK_LINE(735)
						Float _g9 = ::Math_obj::atan2(((int)2 * (((q->x * q->w) + (q->z * q->y)))),(((sqw - sqx) - sqy) + sqz));		HX_STACK_VAR(_g9,"_g9");
						HX_STACK_LINE(735)
						_x = _g9;
						struct _Function_5_1{
							inline static Float Block( ::phoenix::Quaternion &q){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Vector.hx",736,0x5d0bf7fb)
								{
									HX_STACK_LINE(736)
									Float value = ((int)2 * (((q->y * q->w) - (q->x * q->z))));		HX_STACK_VAR(value,"value");
									HX_STACK_LINE(736)
									return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
								}
								return null();
							}
						};
						HX_STACK_LINE(736)
						Float _g10 = ::Math_obj::asin(_Function_5_1::Block(q));		HX_STACK_VAR(_g10,"_g10");
						HX_STACK_LINE(736)
						_y = _g10;
						HX_STACK_LINE(737)
						Float _g11 = ::Math_obj::atan2(((int)2 * (((q->x * q->y) + (q->z * q->w)))),(((sqw + sqx) - sqy) - sqz));		HX_STACK_VAR(_g11,"_g11");
						HX_STACK_LINE(737)
						_z = _g11;
					}
					else{
						HX_STACK_LINE(738)
						if (((order == (int)4))){
							HX_STACK_LINE(739)
							Float _g12 = ::Math_obj::atan2(((int)2 * (((q->x * q->w) - (q->z * q->y)))),(((sqw - sqx) + sqy) - sqz));		HX_STACK_VAR(_g12,"_g12");
							HX_STACK_LINE(739)
							_x = _g12;
							HX_STACK_LINE(740)
							Float _g13 = ::Math_obj::atan2(((int)2 * (((q->y * q->w) - (q->x * q->z)))),(((sqw + sqx) - sqy) - sqz));		HX_STACK_VAR(_g13,"_g13");
							HX_STACK_LINE(740)
							_y = _g13;
							struct _Function_6_1{
								inline static Float Block( ::phoenix::Quaternion &q){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Vector.hx",741,0x5d0bf7fb)
									{
										HX_STACK_LINE(741)
										Float value = ((int)2 * (((q->x * q->y) + (q->z * q->w))));		HX_STACK_VAR(value,"value");
										HX_STACK_LINE(741)
										return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
									}
									return null();
								}
							};
							HX_STACK_LINE(741)
							Float _g14 = ::Math_obj::asin(_Function_6_1::Block(q));		HX_STACK_VAR(_g14,"_g14");
							HX_STACK_LINE(741)
							_z = _g14;
						}
						else{
							HX_STACK_LINE(742)
							if (((order == (int)5))){
								HX_STACK_LINE(743)
								Float _g15 = ::Math_obj::atan2(((int)2 * (((q->x * q->w) + (q->y * q->z)))),(((sqw - sqx) + sqy) - sqz));		HX_STACK_VAR(_g15,"_g15");
								HX_STACK_LINE(743)
								_x = _g15;
								HX_STACK_LINE(744)
								Float _g16 = ::Math_obj::atan2(((int)2 * (((q->x * q->z) + (q->y * q->w)))),(((sqw + sqx) - sqy) - sqz));		HX_STACK_VAR(_g16,"_g16");
								HX_STACK_LINE(744)
								_y = _g16;
								struct _Function_7_1{
									inline static Float Block( ::phoenix::Quaternion &q){
										HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Vector.hx",745,0x5d0bf7fb)
										{
											HX_STACK_LINE(745)
											Float value = ((int)2 * (((q->z * q->w) - (q->x * q->y))));		HX_STACK_VAR(value,"value");
											HX_STACK_LINE(745)
											return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
										}
										return null();
									}
								};
								HX_STACK_LINE(745)
								Float _g17 = ::Math_obj::asin(_Function_7_1::Block(q));		HX_STACK_VAR(_g17,"_g17");
								HX_STACK_LINE(745)
								_z = _g17;
							}
						}
					}
				}
			}
		}
		HX_STACK_LINE(748)
		{
			HX_STACK_LINE(748)
			Float _x1 = this->x;		HX_STACK_VAR(_x1,"_x1");
			HX_STACK_LINE(748)
			Float _y1 = this->y;		HX_STACK_VAR(_y1,"_y1");
			HX_STACK_LINE(748)
			Float _z1 = this->z;		HX_STACK_VAR(_z1,"_z1");
			HX_STACK_LINE(748)
			bool prev = this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
			HX_STACK_LINE(748)
			this->ignore_listeners = true;
			HX_STACK_LINE(748)
			{
				HX_STACK_LINE(748)
				this->x = _x1;
				HX_STACK_LINE(748)
				if ((this->_construct)){
					HX_STACK_LINE(748)
					this->x;
				}
				else{
					HX_STACK_LINE(748)
					if (((bool((this->listen_x_dyn() != null())) && bool(!(this->ignore_listeners))))){
						HX_STACK_LINE(748)
						this->listen_x(_x1);
					}
					HX_STACK_LINE(748)
					this->x;
				}
			}
			HX_STACK_LINE(748)
			{
				HX_STACK_LINE(748)
				this->y = _y1;
				HX_STACK_LINE(748)
				if ((this->_construct)){
					HX_STACK_LINE(748)
					this->y;
				}
				else{
					HX_STACK_LINE(748)
					if (((bool((this->listen_y_dyn() != null())) && bool(!(this->ignore_listeners))))){
						HX_STACK_LINE(748)
						this->listen_y(_y1);
					}
					HX_STACK_LINE(748)
					this->y;
				}
			}
			HX_STACK_LINE(748)
			{
				HX_STACK_LINE(748)
				this->z = _z1;
				HX_STACK_LINE(748)
				if ((this->_construct)){
					HX_STACK_LINE(748)
					this->z;
				}
				else{
					HX_STACK_LINE(748)
					if (((bool((this->listen_z_dyn() != null())) && bool(!(this->ignore_listeners))))){
						HX_STACK_LINE(748)
						this->listen_z(_z1);
					}
					HX_STACK_LINE(748)
					this->z;
				}
			}
			HX_STACK_LINE(748)
			this->ignore_listeners = prev;
			HX_STACK_LINE(748)
			if (((bool((this->listen_x_dyn() != null())) && bool(!(this->ignore_listeners))))){
				HX_STACK_LINE(748)
				this->listen_x(this->x);
			}
			HX_STACK_LINE(748)
			if (((bool((this->listen_y_dyn() != null())) && bool(!(this->ignore_listeners))))){
				HX_STACK_LINE(748)
				this->listen_y(this->y);
			}
			HX_STACK_LINE(748)
			if (((bool((this->listen_z_dyn() != null())) && bool(!(this->ignore_listeners))))){
				HX_STACK_LINE(748)
				this->listen_z(this->z);
			}
			HX_STACK_LINE(748)
			hx::ObjectPtr<OBJ_>(this);
		}
		HX_STACK_LINE(750)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC2(Vector_obj,setEulerFromQuaternion,return )

::phoenix::Vector Vector_obj::degrees( ){
	HX_STACK_FRAME("phoenix.Vector","degrees",0xc29bf31b,"phoenix.Vector.degrees","phoenix/Vector.hx",754,0x5d0bf7fb)
	HX_STACK_THIS(this)
	HX_STACK_LINE(756)
	{
		HX_STACK_LINE(756)
		Float _x = (this->x * 57.29577951308238);		HX_STACK_VAR(_x,"_x");
		HX_STACK_LINE(756)
		Float _y = (this->y * 57.29577951308238);		HX_STACK_VAR(_y,"_y");
		HX_STACK_LINE(756)
		Float _z = (this->z * 57.29577951308238);		HX_STACK_VAR(_z,"_z");
		HX_STACK_LINE(756)
		bool prev = this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
		HX_STACK_LINE(756)
		this->ignore_listeners = true;
		HX_STACK_LINE(756)
		{
			HX_STACK_LINE(756)
			this->x = _x;
			HX_STACK_LINE(756)
			if ((this->_construct)){
				HX_STACK_LINE(756)
				this->x;
			}
			else{
				HX_STACK_LINE(756)
				if (((bool((this->listen_x_dyn() != null())) && bool(!(this->ignore_listeners))))){
					HX_STACK_LINE(756)
					this->listen_x(_x);
				}
				HX_STACK_LINE(756)
				this->x;
			}
		}
		HX_STACK_LINE(756)
		{
			HX_STACK_LINE(756)
			this->y = _y;
			HX_STACK_LINE(756)
			if ((this->_construct)){
				HX_STACK_LINE(756)
				this->y;
			}
			else{
				HX_STACK_LINE(756)
				if (((bool((this->listen_y_dyn() != null())) && bool(!(this->ignore_listeners))))){
					HX_STACK_LINE(756)
					this->listen_y(_y);
				}
				HX_STACK_LINE(756)
				this->y;
			}
		}
		HX_STACK_LINE(756)
		{
			HX_STACK_LINE(756)
			this->z = _z;
			HX_STACK_LINE(756)
			if ((this->_construct)){
				HX_STACK_LINE(756)
				this->z;
			}
			else{
				HX_STACK_LINE(756)
				if (((bool((this->listen_z_dyn() != null())) && bool(!(this->ignore_listeners))))){
					HX_STACK_LINE(756)
					this->listen_z(_z);
				}
				HX_STACK_LINE(756)
				this->z;
			}
		}
		HX_STACK_LINE(756)
		this->ignore_listeners = prev;
		HX_STACK_LINE(756)
		if (((bool((this->listen_x_dyn() != null())) && bool(!(this->ignore_listeners))))){
			HX_STACK_LINE(756)
			this->listen_x(this->x);
		}
		HX_STACK_LINE(756)
		if (((bool((this->listen_y_dyn() != null())) && bool(!(this->ignore_listeners))))){
			HX_STACK_LINE(756)
			this->listen_y(this->y);
		}
		HX_STACK_LINE(756)
		if (((bool((this->listen_z_dyn() != null())) && bool(!(this->ignore_listeners))))){
			HX_STACK_LINE(756)
			this->listen_z(this->z);
		}
		HX_STACK_LINE(756)
		hx::ObjectPtr<OBJ_>(this);
	}
	HX_STACK_LINE(758)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC0(Vector_obj,degrees,return )

::phoenix::Vector Vector_obj::radians( ){
	HX_STACK_FRAME("phoenix.Vector","radians",0xaf3155e6,"phoenix.Vector.radians","phoenix/Vector.hx",762,0x5d0bf7fb)
	HX_STACK_THIS(this)
	HX_STACK_LINE(764)
	{
		HX_STACK_LINE(764)
		Float _x = (this->x * 0.017453292519943278);		HX_STACK_VAR(_x,"_x");
		HX_STACK_LINE(764)
		Float _y = (this->y * 0.017453292519943278);		HX_STACK_VAR(_y,"_y");
		HX_STACK_LINE(764)
		Float _z = (this->z * 0.017453292519943278);		HX_STACK_VAR(_z,"_z");
		HX_STACK_LINE(764)
		bool prev = this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
		HX_STACK_LINE(764)
		this->ignore_listeners = true;
		HX_STACK_LINE(764)
		{
			HX_STACK_LINE(764)
			this->x = _x;
			HX_STACK_LINE(764)
			if ((this->_construct)){
				HX_STACK_LINE(764)
				this->x;
			}
			else{
				HX_STACK_LINE(764)
				if (((bool((this->listen_x_dyn() != null())) && bool(!(this->ignore_listeners))))){
					HX_STACK_LINE(764)
					this->listen_x(_x);
				}
				HX_STACK_LINE(764)
				this->x;
			}
		}
		HX_STACK_LINE(764)
		{
			HX_STACK_LINE(764)
			this->y = _y;
			HX_STACK_LINE(764)
			if ((this->_construct)){
				HX_STACK_LINE(764)
				this->y;
			}
			else{
				HX_STACK_LINE(764)
				if (((bool((this->listen_y_dyn() != null())) && bool(!(this->ignore_listeners))))){
					HX_STACK_LINE(764)
					this->listen_y(_y);
				}
				HX_STACK_LINE(764)
				this->y;
			}
		}
		HX_STACK_LINE(764)
		{
			HX_STACK_LINE(764)
			this->z = _z;
			HX_STACK_LINE(764)
			if ((this->_construct)){
				HX_STACK_LINE(764)
				this->z;
			}
			else{
				HX_STACK_LINE(764)
				if (((bool((this->listen_z_dyn() != null())) && bool(!(this->ignore_listeners))))){
					HX_STACK_LINE(764)
					this->listen_z(_z);
				}
				HX_STACK_LINE(764)
				this->z;
			}
		}
		HX_STACK_LINE(764)
		this->ignore_listeners = prev;
		HX_STACK_LINE(764)
		if (((bool((this->listen_x_dyn() != null())) && bool(!(this->ignore_listeners))))){
			HX_STACK_LINE(764)
			this->listen_x(this->x);
		}
		HX_STACK_LINE(764)
		if (((bool((this->listen_y_dyn() != null())) && bool(!(this->ignore_listeners))))){
			HX_STACK_LINE(764)
			this->listen_y(this->y);
		}
		HX_STACK_LINE(764)
		if (((bool((this->listen_z_dyn() != null())) && bool(!(this->ignore_listeners))))){
			HX_STACK_LINE(764)
			this->listen_z(this->z);
		}
		HX_STACK_LINE(764)
		hx::ObjectPtr<OBJ_>(this);
	}
	HX_STACK_LINE(766)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC0(Vector_obj,radians,return )

::phoenix::Vector Vector_obj::Add( ::phoenix::Vector a,::phoenix::Vector b){
	HX_STACK_FRAME("phoenix.Vector","Add",0x8c70ef75,"phoenix.Vector.Add","phoenix/Vector.hx",232,0x5d0bf7fb)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(232)
	return ::phoenix::Vector_obj::__new((a->x + b->x),(a->y + b->y),(a->z + b->z),null());
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Vector_obj,Add,return )

::phoenix::Vector Vector_obj::Subtract( ::phoenix::Vector a,::phoenix::Vector b){
	HX_STACK_FRAME("phoenix.Vector","Subtract",0x826fa740,"phoenix.Vector.Subtract","phoenix/Vector.hx",240,0x5d0bf7fb)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(240)
	return ::phoenix::Vector_obj::__new((a->x - b->x),(a->y - b->y),(a->z - b->z),null());
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Vector_obj,Subtract,return )

::phoenix::Vector Vector_obj::MultiplyVector( ::phoenix::Vector a,::phoenix::Vector b){
	HX_STACK_FRAME("phoenix.Vector","MultiplyVector",0x9f195533,"phoenix.Vector.MultiplyVector","phoenix/Vector.hx",248,0x5d0bf7fb)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(248)
	return ::phoenix::Vector_obj::__new((a->x * b->x),(a->y * b->y),(a->z * b->z),null());
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Vector_obj,MultiplyVector,return )

::phoenix::Vector Vector_obj::DivideVector( ::phoenix::Vector a,::phoenix::Vector b){
	HX_STACK_FRAME("phoenix.Vector","DivideVector",0xacf76d48,"phoenix.Vector.DivideVector","phoenix/Vector.hx",256,0x5d0bf7fb)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(256)
	return ::phoenix::Vector_obj::__new((Float(a->x) / Float(b->x)),(Float(a->y) / Float(b->y)),(Float(a->z) / Float(b->z)),null());
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Vector_obj,DivideVector,return )

::phoenix::Vector Vector_obj::Multiply( ::phoenix::Vector a,Float b){
	HX_STACK_FRAME("phoenix.Vector","Multiply",0x24eb1450,"phoenix.Vector.Multiply","phoenix/Vector.hx",264,0x5d0bf7fb)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(264)
	return ::phoenix::Vector_obj::__new((a->x * b),(a->y * b),(a->z * b),null());
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Vector_obj,Multiply,return )

::phoenix::Vector Vector_obj::Divide( ::phoenix::Vector a,Float b){
	HX_STACK_FRAME("phoenix.Vector","Divide",0x412d3ea5,"phoenix.Vector.Divide","phoenix/Vector.hx",272,0x5d0bf7fb)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(272)
	return ::phoenix::Vector_obj::__new((Float(a->x) / Float(b)),(Float(a->y) / Float(b)),(Float(a->z) / Float(b)),null());
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Vector_obj,Divide,return )

::phoenix::Vector Vector_obj::AddScalar( ::phoenix::Vector a,Float b){
	HX_STACK_FRAME("phoenix.Vector","AddScalar",0x7c57d081,"phoenix.Vector.AddScalar","phoenix/Vector.hx",280,0x5d0bf7fb)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(280)
	return ::phoenix::Vector_obj::__new((a->x + b),(a->y + b),(a->z + b),null());
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Vector_obj,AddScalar,return )

::phoenix::Vector Vector_obj::SubtractScalar( ::phoenix::Vector a,Float b){
	HX_STACK_FRAME("phoenix.Vector","SubtractScalar",0xd63ef28c,"phoenix.Vector.SubtractScalar","phoenix/Vector.hx",288,0x5d0bf7fb)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(288)
	return ::phoenix::Vector_obj::__new((a->x - b),(a->y - b),(a->z - b),null());
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Vector_obj,SubtractScalar,return )

::phoenix::Vector Vector_obj::Cross( ::phoenix::Vector a,::phoenix::Vector b){
	HX_STACK_FRAME("phoenix.Vector","Cross",0x6e3a59d4,"phoenix.Vector.Cross","phoenix/Vector.hx",296,0x5d0bf7fb)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(296)
	return ::phoenix::Vector_obj::__new(((a->y * b->z) - (a->z * b->y)),((a->z * b->x) - (a->x * b->z)),((a->x * b->y) - (a->y * b->x)),null());
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Vector_obj,Cross,return )

Float Vector_obj::RotationTo( ::phoenix::Vector a,::phoenix::Vector b){
	HX_STACK_FRAME("phoenix.Vector","RotationTo",0x686ee785,"phoenix.Vector.RotationTo","phoenix/Vector.hx",305,0x5d0bf7fb)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(305)
	Float theta = ::Math_obj::atan2((b->x - a->x),(b->y - a->y));		HX_STACK_VAR(theta,"theta");
	HX_STACK_LINE(305)
	Float r = -(((180.0 + (Float((theta * 180.0)) / Float(::Math_obj::PI)))));		HX_STACK_VAR(r,"r");
	HX_STACK_LINE(305)
	return r;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Vector_obj,RotationTo,return )

Void Vector_obj::Listen( ::phoenix::Vector _v,Dynamic listener){
{
		HX_STACK_FRAME("phoenix.Vector","Listen",0x7214d773,"phoenix.Vector.Listen","phoenix/Vector.hx",309,0x5d0bf7fb)
		HX_STACK_ARG(_v,"_v")
		HX_STACK_ARG(listener,"listener")
		HX_STACK_LINE(311)
		_v->listen_x = listener;
		HX_STACK_LINE(312)
		_v->listen_y = listener;
		HX_STACK_LINE(313)
		_v->listen_z = listener;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Vector_obj,Listen,(void))

::phoenix::Vector Vector_obj::Degrees( ::phoenix::Vector _radian_vector){
	HX_STACK_FRAME("phoenix.Vector","Degrees",0x8fed1afb,"phoenix.Vector.Degrees","phoenix/Vector.hx",772,0x5d0bf7fb)
	HX_STACK_ARG(_radian_vector,"_radian_vector")
	HX_STACK_LINE(772)
	::phoenix::Vector _this = ::phoenix::Vector_obj::__new(_radian_vector->x,_radian_vector->y,_radian_vector->z,_radian_vector->w);		HX_STACK_VAR(_this,"_this");
	HX_STACK_LINE(772)
	{
		HX_STACK_LINE(772)
		Float _x = (_this->x * 57.29577951308238);		HX_STACK_VAR(_x,"_x");
		HX_STACK_LINE(772)
		Float _y = (_this->y * 57.29577951308238);		HX_STACK_VAR(_y,"_y");
		HX_STACK_LINE(772)
		Float _z = (_this->z * 57.29577951308238);		HX_STACK_VAR(_z,"_z");
		HX_STACK_LINE(772)
		bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
		HX_STACK_LINE(772)
		_this->ignore_listeners = true;
		HX_STACK_LINE(772)
		{
			HX_STACK_LINE(772)
			_this->x = _x;
			HX_STACK_LINE(772)
			if ((_this->_construct)){
				HX_STACK_LINE(772)
				_this->x;
			}
			else{
				HX_STACK_LINE(772)
				if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
					HX_STACK_LINE(772)
					_this->listen_x(_x);
				}
				HX_STACK_LINE(772)
				_this->x;
			}
		}
		HX_STACK_LINE(772)
		{
			HX_STACK_LINE(772)
			_this->y = _y;
			HX_STACK_LINE(772)
			if ((_this->_construct)){
				HX_STACK_LINE(772)
				_this->y;
			}
			else{
				HX_STACK_LINE(772)
				if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
					HX_STACK_LINE(772)
					_this->listen_y(_y);
				}
				HX_STACK_LINE(772)
				_this->y;
			}
		}
		HX_STACK_LINE(772)
		{
			HX_STACK_LINE(772)
			_this->z = _z;
			HX_STACK_LINE(772)
			if ((_this->_construct)){
				HX_STACK_LINE(772)
				_this->z;
			}
			else{
				HX_STACK_LINE(772)
				if (((bool((_this->listen_z != null())) && bool(!(_this->ignore_listeners))))){
					HX_STACK_LINE(772)
					_this->listen_z(_z);
				}
				HX_STACK_LINE(772)
				_this->z;
			}
		}
		HX_STACK_LINE(772)
		_this->ignore_listeners = prev;
		HX_STACK_LINE(772)
		if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
			HX_STACK_LINE(772)
			_this->listen_x(_this->x);
		}
		HX_STACK_LINE(772)
		if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
			HX_STACK_LINE(772)
			_this->listen_y(_this->y);
		}
		HX_STACK_LINE(772)
		if (((bool((_this->listen_z != null())) && bool(!(_this->ignore_listeners))))){
			HX_STACK_LINE(772)
			_this->listen_z(_this->z);
		}
		HX_STACK_LINE(772)
		_this;
	}
	HX_STACK_LINE(772)
	return _this;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Vector_obj,Degrees,return )

::phoenix::Vector Vector_obj::Radians( ::phoenix::Vector _degree_vector){
	HX_STACK_FRAME("phoenix.Vector","Radians",0x7c827dc6,"phoenix.Vector.Radians","phoenix/Vector.hx",778,0x5d0bf7fb)
	HX_STACK_ARG(_degree_vector,"_degree_vector")
	HX_STACK_LINE(778)
	::phoenix::Vector _this = ::phoenix::Vector_obj::__new(_degree_vector->x,_degree_vector->y,_degree_vector->z,_degree_vector->w);		HX_STACK_VAR(_this,"_this");
	HX_STACK_LINE(778)
	{
		HX_STACK_LINE(778)
		Float _x = (_this->x * 0.017453292519943278);		HX_STACK_VAR(_x,"_x");
		HX_STACK_LINE(778)
		Float _y = (_this->y * 0.017453292519943278);		HX_STACK_VAR(_y,"_y");
		HX_STACK_LINE(778)
		Float _z = (_this->z * 0.017453292519943278);		HX_STACK_VAR(_z,"_z");
		HX_STACK_LINE(778)
		bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
		HX_STACK_LINE(778)
		_this->ignore_listeners = true;
		HX_STACK_LINE(778)
		{
			HX_STACK_LINE(778)
			_this->x = _x;
			HX_STACK_LINE(778)
			if ((_this->_construct)){
				HX_STACK_LINE(778)
				_this->x;
			}
			else{
				HX_STACK_LINE(778)
				if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
					HX_STACK_LINE(778)
					_this->listen_x(_x);
				}
				HX_STACK_LINE(778)
				_this->x;
			}
		}
		HX_STACK_LINE(778)
		{
			HX_STACK_LINE(778)
			_this->y = _y;
			HX_STACK_LINE(778)
			if ((_this->_construct)){
				HX_STACK_LINE(778)
				_this->y;
			}
			else{
				HX_STACK_LINE(778)
				if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
					HX_STACK_LINE(778)
					_this->listen_y(_y);
				}
				HX_STACK_LINE(778)
				_this->y;
			}
		}
		HX_STACK_LINE(778)
		{
			HX_STACK_LINE(778)
			_this->z = _z;
			HX_STACK_LINE(778)
			if ((_this->_construct)){
				HX_STACK_LINE(778)
				_this->z;
			}
			else{
				HX_STACK_LINE(778)
				if (((bool((_this->listen_z != null())) && bool(!(_this->ignore_listeners))))){
					HX_STACK_LINE(778)
					_this->listen_z(_z);
				}
				HX_STACK_LINE(778)
				_this->z;
			}
		}
		HX_STACK_LINE(778)
		_this->ignore_listeners = prev;
		HX_STACK_LINE(778)
		if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
			HX_STACK_LINE(778)
			_this->listen_x(_this->x);
		}
		HX_STACK_LINE(778)
		if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
			HX_STACK_LINE(778)
			_this->listen_y(_this->y);
		}
		HX_STACK_LINE(778)
		if (((bool((_this->listen_z != null())) && bool(!(_this->ignore_listeners))))){
			HX_STACK_LINE(778)
			_this->listen_z(_this->z);
		}
		HX_STACK_LINE(778)
		_this;
	}
	HX_STACK_LINE(778)
	return _this;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Vector_obj,Radians,return )


Vector_obj::Vector_obj()
{
}

void Vector_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Vector);
	HX_MARK_MEMBER_NAME(x,"x");
	HX_MARK_MEMBER_NAME(y,"y");
	HX_MARK_MEMBER_NAME(z,"z");
	HX_MARK_MEMBER_NAME(w,"w");
	HX_MARK_MEMBER_NAME(length,"length");
	HX_MARK_MEMBER_NAME(lengthsq,"lengthsq");
	HX_MARK_MEMBER_NAME(angle2D,"angle2D");
	HX_MARK_MEMBER_NAME(normalized,"normalized");
	HX_MARK_MEMBER_NAME(inverted,"inverted");
	HX_MARK_MEMBER_NAME(ignore_listeners,"ignore_listeners");
	HX_MARK_MEMBER_NAME(listen_x,"listen_x");
	HX_MARK_MEMBER_NAME(listen_y,"listen_y");
	HX_MARK_MEMBER_NAME(listen_z,"listen_z");
	HX_MARK_MEMBER_NAME(_construct,"_construct");
	HX_MARK_END_CLASS();
}

void Vector_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(x,"x");
	HX_VISIT_MEMBER_NAME(y,"y");
	HX_VISIT_MEMBER_NAME(z,"z");
	HX_VISIT_MEMBER_NAME(w,"w");
	HX_VISIT_MEMBER_NAME(length,"length");
	HX_VISIT_MEMBER_NAME(lengthsq,"lengthsq");
	HX_VISIT_MEMBER_NAME(angle2D,"angle2D");
	HX_VISIT_MEMBER_NAME(normalized,"normalized");
	HX_VISIT_MEMBER_NAME(inverted,"inverted");
	HX_VISIT_MEMBER_NAME(ignore_listeners,"ignore_listeners");
	HX_VISIT_MEMBER_NAME(listen_x,"listen_x");
	HX_VISIT_MEMBER_NAME(listen_y,"listen_y");
	HX_VISIT_MEMBER_NAME(listen_z,"listen_z");
	HX_VISIT_MEMBER_NAME(_construct,"_construct");
}

Dynamic Vector_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return x; }
		if (HX_FIELD_EQ(inName,"y") ) { return y; }
		if (HX_FIELD_EQ(inName,"z") ) { return z; }
		if (HX_FIELD_EQ(inName,"w") ) { return w; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"Add") ) { return Add_dyn(); }
		if (HX_FIELD_EQ(inName,"set") ) { return set_dyn(); }
		if (HX_FIELD_EQ(inName,"int") ) { return _int_dyn(); }
		if (HX_FIELD_EQ(inName,"dot") ) { return dot_dyn(); }
		if (HX_FIELD_EQ(inName,"add") ) { return add_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"Cross") ) { return Cross_dyn(); }
		if (HX_FIELD_EQ(inName,"int_x") ) { return int_x_dyn(); }
		if (HX_FIELD_EQ(inName,"int_y") ) { return int_y_dyn(); }
		if (HX_FIELD_EQ(inName,"int_z") ) { return int_z_dyn(); }
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		if (HX_FIELD_EQ(inName,"cross") ) { return cross_dyn(); }
		if (HX_FIELD_EQ(inName,"set_x") ) { return set_x_dyn(); }
		if (HX_FIELD_EQ(inName,"set_y") ) { return set_y_dyn(); }
		if (HX_FIELD_EQ(inName,"set_z") ) { return set_z_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"Divide") ) { return Divide_dyn(); }
		if (HX_FIELD_EQ(inName,"Listen") ) { return Listen_dyn(); }
		if (HX_FIELD_EQ(inName,"length") ) { return inCallProp ? get_length() : length; }
		if (HX_FIELD_EQ(inName,"set_xy") ) { return set_xy_dyn(); }
		if (HX_FIELD_EQ(inName,"equals") ) { return equals_dyn(); }
		if (HX_FIELD_EQ(inName,"invert") ) { return invert_dyn(); }
		if (HX_FIELD_EQ(inName,"divide") ) { return divide_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"Degrees") ) { return Degrees_dyn(); }
		if (HX_FIELD_EQ(inName,"Radians") ) { return Radians_dyn(); }
		if (HX_FIELD_EQ(inName,"angle2D") ) { return inCallProp ? get_angle2D() : angle2D; }
		if (HX_FIELD_EQ(inName,"set_xyz") ) { return set_xyz_dyn(); }
		if (HX_FIELD_EQ(inName,"lerp_xy") ) { return lerp_xy_dyn(); }
		if (HX_FIELD_EQ(inName,"add_xyz") ) { return add_xyz_dyn(); }
		if (HX_FIELD_EQ(inName,"degrees") ) { return degrees_dyn(); }
		if (HX_FIELD_EQ(inName,"radians") ) { return radians_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"Subtract") ) { return Subtract_dyn(); }
		if (HX_FIELD_EQ(inName,"Multiply") ) { return Multiply_dyn(); }
		if (HX_FIELD_EQ(inName,"lengthsq") ) { return inCallProp ? get_lengthsq() : lengthsq; }
		if (HX_FIELD_EQ(inName,"inverted") ) { return inCallProp ? get_inverted() : inverted; }
		if (HX_FIELD_EQ(inName,"listen_x") ) { return listen_x; }
		if (HX_FIELD_EQ(inName,"listen_y") ) { return listen_y; }
		if (HX_FIELD_EQ(inName,"listen_z") ) { return listen_z; }
		if (HX_FIELD_EQ(inName,"lerp_xyz") ) { return lerp_xyz_dyn(); }
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		if (HX_FIELD_EQ(inName,"subtract") ) { return subtract_dyn(); }
		if (HX_FIELD_EQ(inName,"multiply") ) { return multiply_dyn(); }
		if (HX_FIELD_EQ(inName,"truncate") ) { return truncate_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"AddScalar") ) { return AddScalar_dyn(); }
		if (HX_FIELD_EQ(inName,"copy_from") ) { return copy_from_dyn(); }
		if (HX_FIELD_EQ(inName,"normalize") ) { return normalize_dyn(); }
		if (HX_FIELD_EQ(inName,"addScalar") ) { return addScalar_dyn(); }
		if (HX_FIELD_EQ(inName,"transform") ) { return transform_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"RotationTo") ) { return RotationTo_dyn(); }
		if (HX_FIELD_EQ(inName,"normalized") ) { return inCallProp ? get_normalized() : normalized; }
		if (HX_FIELD_EQ(inName,"_construct") ) { return _construct; }
		if (HX_FIELD_EQ(inName,"divide_xyz") ) { return divide_xyz_dyn(); }
		if (HX_FIELD_EQ(inName,"set_length") ) { return set_length_dyn(); }
		if (HX_FIELD_EQ(inName,"get_length") ) { return get_length_dyn(); }
		if (HX_FIELD_EQ(inName,"rotationTo") ) { return rotationTo_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"set_angle2D") ) { return set_angle2D_dyn(); }
		if (HX_FIELD_EQ(inName,"get_angle2D") ) { return get_angle2D_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"DivideVector") ) { return DivideVector_dyn(); }
		if (HX_FIELD_EQ(inName,"subtract_xyz") ) { return subtract_xyz_dyn(); }
		if (HX_FIELD_EQ(inName,"multiply_xyz") ) { return multiply_xyz_dyn(); }
		if (HX_FIELD_EQ(inName,"divideScalar") ) { return divideScalar_dyn(); }
		if (HX_FIELD_EQ(inName,"get_lengthsq") ) { return get_lengthsq_dyn(); }
		if (HX_FIELD_EQ(inName,"get_inverted") ) { return get_inverted_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"MultiplyVector") ) { return MultiplyVector_dyn(); }
		if (HX_FIELD_EQ(inName,"SubtractScalar") ) { return SubtractScalar_dyn(); }
		if (HX_FIELD_EQ(inName,"subtractScalar") ) { return subtractScalar_dyn(); }
		if (HX_FIELD_EQ(inName,"multiplyScalar") ) { return multiplyScalar_dyn(); }
		if (HX_FIELD_EQ(inName,"get_normalized") ) { return get_normalized_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"applyQuaternion") ) { return applyQuaternion_dyn(); }
		if (HX_FIELD_EQ(inName,"applyProjection") ) { return applyProjection_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"ignore_listeners") ) { return ignore_listeners; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"transformDirection") ) { return transformDirection_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"weighted_average_xy") ) { return weighted_average_xy_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"weighted_average_xyz") ) { return weighted_average_xyz_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"setEulerFromQuaternion") ) { return setEulerFromQuaternion_dyn(); }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"setEulerFromRotationMatrix") ) { return setEulerFromRotationMatrix_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Vector_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { if (inCallProp) return set_x(inValue);x=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { if (inCallProp) return set_y(inValue);y=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"z") ) { if (inCallProp) return set_z(inValue);z=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"w") ) { w=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { if (inCallProp) return set_length(inValue);length=inValue.Cast< Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"angle2D") ) { if (inCallProp) return set_angle2D(inValue);angle2D=inValue.Cast< Float >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"lengthsq") ) { lengthsq=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"inverted") ) { inverted=inValue.Cast< ::phoenix::Vector >(); return inValue; }
		if (HX_FIELD_EQ(inName,"listen_x") ) { listen_x=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"listen_y") ) { listen_y=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"listen_z") ) { listen_z=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"normalized") ) { normalized=inValue.Cast< ::phoenix::Vector >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_construct") ) { _construct=inValue.Cast< bool >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"ignore_listeners") ) { ignore_listeners=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Vector_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("x"));
	outFields->push(HX_CSTRING("y"));
	outFields->push(HX_CSTRING("z"));
	outFields->push(HX_CSTRING("w"));
	outFields->push(HX_CSTRING("length"));
	outFields->push(HX_CSTRING("lengthsq"));
	outFields->push(HX_CSTRING("angle2D"));
	outFields->push(HX_CSTRING("normalized"));
	outFields->push(HX_CSTRING("inverted"));
	outFields->push(HX_CSTRING("ignore_listeners"));
	outFields->push(HX_CSTRING("_construct"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("Add"),
	HX_CSTRING("Subtract"),
	HX_CSTRING("MultiplyVector"),
	HX_CSTRING("DivideVector"),
	HX_CSTRING("Multiply"),
	HX_CSTRING("Divide"),
	HX_CSTRING("AddScalar"),
	HX_CSTRING("SubtractScalar"),
	HX_CSTRING("Cross"),
	HX_CSTRING("RotationTo"),
	HX_CSTRING("Listen"),
	HX_CSTRING("Degrees"),
	HX_CSTRING("Radians"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(Vector_obj,x),HX_CSTRING("x")},
	{hx::fsFloat,(int)offsetof(Vector_obj,y),HX_CSTRING("y")},
	{hx::fsFloat,(int)offsetof(Vector_obj,z),HX_CSTRING("z")},
	{hx::fsFloat,(int)offsetof(Vector_obj,w),HX_CSTRING("w")},
	{hx::fsFloat,(int)offsetof(Vector_obj,length),HX_CSTRING("length")},
	{hx::fsFloat,(int)offsetof(Vector_obj,lengthsq),HX_CSTRING("lengthsq")},
	{hx::fsFloat,(int)offsetof(Vector_obj,angle2D),HX_CSTRING("angle2D")},
	{hx::fsObject /*::phoenix::Vector*/ ,(int)offsetof(Vector_obj,normalized),HX_CSTRING("normalized")},
	{hx::fsObject /*::phoenix::Vector*/ ,(int)offsetof(Vector_obj,inverted),HX_CSTRING("inverted")},
	{hx::fsBool,(int)offsetof(Vector_obj,ignore_listeners),HX_CSTRING("ignore_listeners")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Vector_obj,listen_x),HX_CSTRING("listen_x")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Vector_obj,listen_y),HX_CSTRING("listen_y")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Vector_obj,listen_z),HX_CSTRING("listen_z")},
	{hx::fsBool,(int)offsetof(Vector_obj,_construct),HX_CSTRING("_construct")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("x"),
	HX_CSTRING("y"),
	HX_CSTRING("z"),
	HX_CSTRING("w"),
	HX_CSTRING("length"),
	HX_CSTRING("lengthsq"),
	HX_CSTRING("angle2D"),
	HX_CSTRING("normalized"),
	HX_CSTRING("inverted"),
	HX_CSTRING("ignore_listeners"),
	HX_CSTRING("listen_x"),
	HX_CSTRING("listen_y"),
	HX_CSTRING("listen_z"),
	HX_CSTRING("_construct"),
	HX_CSTRING("copy_from"),
	HX_CSTRING("set"),
	HX_CSTRING("set_xy"),
	HX_CSTRING("set_xyz"),
	HX_CSTRING("lerp_xy"),
	HX_CSTRING("lerp_xyz"),
	HX_CSTRING("weighted_average_xy"),
	HX_CSTRING("weighted_average_xyz"),
	HX_CSTRING("int"),
	HX_CSTRING("int_x"),
	HX_CSTRING("int_y"),
	HX_CSTRING("int_z"),
	HX_CSTRING("toString"),
	HX_CSTRING("equals"),
	HX_CSTRING("clone"),
	HX_CSTRING("normalize"),
	HX_CSTRING("dot"),
	HX_CSTRING("cross"),
	HX_CSTRING("invert"),
	HX_CSTRING("add"),
	HX_CSTRING("add_xyz"),
	HX_CSTRING("subtract"),
	HX_CSTRING("subtract_xyz"),
	HX_CSTRING("multiply"),
	HX_CSTRING("multiply_xyz"),
	HX_CSTRING("divide"),
	HX_CSTRING("divide_xyz"),
	HX_CSTRING("addScalar"),
	HX_CSTRING("subtractScalar"),
	HX_CSTRING("multiplyScalar"),
	HX_CSTRING("divideScalar"),
	HX_CSTRING("set_length"),
	HX_CSTRING("get_length"),
	HX_CSTRING("get_lengthsq"),
	HX_CSTRING("get_normalized"),
	HX_CSTRING("set_x"),
	HX_CSTRING("set_y"),
	HX_CSTRING("set_z"),
	HX_CSTRING("get_inverted"),
	HX_CSTRING("set_angle2D"),
	HX_CSTRING("get_angle2D"),
	HX_CSTRING("truncate"),
	HX_CSTRING("rotationTo"),
	HX_CSTRING("applyQuaternion"),
	HX_CSTRING("applyProjection"),
	HX_CSTRING("transform"),
	HX_CSTRING("transformDirection"),
	HX_CSTRING("setEulerFromRotationMatrix"),
	HX_CSTRING("setEulerFromQuaternion"),
	HX_CSTRING("degrees"),
	HX_CSTRING("radians"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Vector_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Vector_obj::__mClass,"__mClass");
};

#endif

Class Vector_obj::__mClass;

void Vector_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("phoenix.Vector"), hx::TCanCast< Vector_obj> ,sStaticFields,sMemberFields,
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

void Vector_obj::__boot()
{
}

} // end namespace phoenix
