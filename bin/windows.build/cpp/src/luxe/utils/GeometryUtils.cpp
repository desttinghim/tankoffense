#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_luxe_Core
#include <luxe/Core.h>
#endif
#ifndef INCLUDED_luxe_ID
#include <luxe/ID.h>
#endif
#ifndef INCLUDED_luxe_utils_GeometryUtils
#include <luxe/utils/GeometryUtils.h>
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
#ifndef INCLUDED_phoenix_geometry_Geometry
#include <phoenix/geometry/Geometry.h>
#endif
#ifndef INCLUDED_phoenix_geometry_Vertex
#include <phoenix/geometry/Vertex.h>
#endif
#ifndef INCLUDED_snow_App
#include <snow/App.h>
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
namespace luxe{
namespace utils{

Void GeometryUtils_obj::__construct(::luxe::Core _luxe)
{
HX_STACK_FRAME("luxe.utils.GeometryUtils","new",0xd5d0d83c,"luxe.utils.GeometryUtils.new","luxe/utils/GeometryUtils.hx",17,0x749c9d76)
HX_STACK_THIS(this)
HX_STACK_ARG(_luxe,"_luxe")
{
	HX_STACK_LINE(17)
	this->luxe = _luxe;
}
;
	return null();
}

//GeometryUtils_obj::~GeometryUtils_obj() { }

Dynamic GeometryUtils_obj::__CreateEmpty() { return  new GeometryUtils_obj; }
hx::ObjectPtr< GeometryUtils_obj > GeometryUtils_obj::__new(::luxe::Core _luxe)
{  hx::ObjectPtr< GeometryUtils_obj > result = new GeometryUtils_obj();
	result->__construct(_luxe);
	return result;}

Dynamic GeometryUtils_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< GeometryUtils_obj > result = new GeometryUtils_obj();
	result->__construct(inArgs[0]);
	return result;}

int GeometryUtils_obj::segments_for_smooth_circle( Float _radius,hx::Null< Float >  __o__smooth){
Float _smooth = __o__smooth.Default(6);
	HX_STACK_FRAME("luxe.utils.GeometryUtils","segments_for_smooth_circle",0xd8797010,"luxe.utils.GeometryUtils.segments_for_smooth_circle","luxe/utils/GeometryUtils.hx",21,0x749c9d76)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_radius,"_radius")
	HX_STACK_ARG(_smooth,"_smooth")
{
		HX_STACK_LINE(23)
		Float _g = ::Math_obj::sqrt(_radius);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(23)
		Float _g1 = (_smooth * _g);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(23)
		return ::Std_obj::_int(_g1);
	}
}


HX_DEFINE_DYNAMIC_FUNC2(GeometryUtils_obj,segments_for_smooth_circle,return )

::phoenix::Vector GeometryUtils_obj::random_point_in_unit_circle( ){
	HX_STACK_FRAME("luxe.utils.GeometryUtils","random_point_in_unit_circle",0xf851d038,"luxe.utils.GeometryUtils.random_point_in_unit_circle","luxe/utils/GeometryUtils.hx",27,0x749c9d76)
	HX_STACK_THIS(this)
	HX_STACK_LINE(30)
	Float _g = ::Math_obj::random();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(30)
	Float _r = ::Math_obj::sqrt(_g);		HX_STACK_VAR(_r,"_r");
	HX_STACK_LINE(34)
	Float _g1 = ::Math_obj::random();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(34)
	Float _g2 = ((int)2 * _g1);		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(34)
	Float _g3 = ((int)-1 + _g2);		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(34)
	Float _t = (_g3 * 6.283185307179586);		HX_STACK_VAR(_t,"_t");
	HX_STACK_LINE(37)
	Float _g4 = ::Math_obj::cos(_t);		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(37)
	Float _g5 = (_r * _g4);		HX_STACK_VAR(_g5,"_g5");
	HX_STACK_LINE(37)
	Float _g6 = ::Math_obj::sin(_t);		HX_STACK_VAR(_g6,"_g6");
	HX_STACK_LINE(37)
	Float _g7 = (_r * _g6);		HX_STACK_VAR(_g7,"_g7");
	HX_STACK_LINE(37)
	return ::phoenix::Vector_obj::__new(_g5,_g7,null(),null());
}


HX_DEFINE_DYNAMIC_FUNC0(GeometryUtils_obj,random_point_in_unit_circle,return )

bool GeometryUtils_obj::point_in_polygon( ::phoenix::Vector _point,::phoenix::Vector _offset,Array< ::Dynamic > _verts){
	HX_STACK_FRAME("luxe.utils.GeometryUtils","point_in_polygon",0xc66ebe53,"luxe.utils.GeometryUtils.point_in_polygon","luxe/utils/GeometryUtils.hx",41,0x749c9d76)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_point,"_point")
	HX_STACK_ARG(_offset,"_offset")
	HX_STACK_ARG(_verts,"_verts")
	HX_STACK_LINE(43)
	if (((_offset == null()))){
		HX_STACK_LINE(43)
		::phoenix::Vector _g = ::phoenix::Vector_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(43)
		_offset = _g;
	}
	HX_STACK_LINE(44)
	bool c = false;		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(45)
	int nvert = _verts->length;		HX_STACK_VAR(nvert,"nvert");
	HX_STACK_LINE(46)
	int j = (nvert - (int)1);		HX_STACK_VAR(j,"j");
	HX_STACK_LINE(48)
	{
		HX_STACK_LINE(48)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(48)
		while((true)){
			HX_STACK_LINE(48)
			if ((!(((_g < nvert))))){
				HX_STACK_LINE(48)
				break;
			}
			HX_STACK_LINE(48)
			int i = (_g)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(50)
			if (((bool((((_verts->__get(i).StaticCast< ::phoenix::Vector >()->y + _offset->y) > _point->y) != ((_verts->__get(j).StaticCast< ::phoenix::Vector >()->y + _offset->y) > _point->y))) && bool((_point->x < ((Float(((((_verts->__get(j).StaticCast< ::phoenix::Vector >()->x + _offset->x) - ((_verts->__get(i).StaticCast< ::phoenix::Vector >()->x + _offset->x)))) * ((_point->y - ((_verts->__get(i).StaticCast< ::phoenix::Vector >()->y + _offset->y)))))) / Float((((_verts->__get(j).StaticCast< ::phoenix::Vector >()->y + _offset->y) - ((_verts->__get(i).StaticCast< ::phoenix::Vector >()->y + _offset->y)))))) + ((_verts->__get(i).StaticCast< ::phoenix::Vector >()->x + _offset->x)))))))){
				HX_STACK_LINE(53)
				c = !(c);
			}
			HX_STACK_LINE(56)
			j = i;
		}
	}
	HX_STACK_LINE(59)
	return c;
}


HX_DEFINE_DYNAMIC_FUNC3(GeometryUtils_obj,point_in_polygon,return )

bool GeometryUtils_obj::point_in_geometry( ::phoenix::Vector _point,::phoenix::geometry::Geometry _geometry){
	HX_STACK_FRAME("luxe.utils.GeometryUtils","point_in_geometry",0x80cfa4b9,"luxe.utils.GeometryUtils.point_in_geometry","luxe/utils/GeometryUtils.hx",66,0x749c9d76)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_point,"_point")
	HX_STACK_ARG(_geometry,"_geometry")
	HX_STACK_LINE(68)
	bool c = false;		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(69)
	int nvert = _geometry->vertices->length;		HX_STACK_VAR(nvert,"nvert");
	HX_STACK_LINE(70)
	int j = (nvert - (int)1);		HX_STACK_VAR(j,"j");
	HX_STACK_LINE(72)
	{
		HX_STACK_LINE(72)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(72)
		while((true)){
			HX_STACK_LINE(72)
			if ((!(((_g < nvert))))){
				HX_STACK_LINE(72)
				break;
			}
			HX_STACK_LINE(72)
			int i = (_g)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(74)
			::phoenix::Vector _vert_i_pos;		HX_STACK_VAR(_vert_i_pos,"_vert_i_pos");
			HX_STACK_LINE(74)
			{
				HX_STACK_LINE(74)
				::phoenix::Vector _this;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(74)
				{
					HX_STACK_LINE(74)
					::phoenix::Vector _this1 = _geometry->vertices->__get(i).StaticCast< ::phoenix::geometry::Vertex >()->pos;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(74)
					_this = ::phoenix::Vector_obj::__new(_this1->x,_this1->y,_this1->z,_this1->w);
				}
				HX_STACK_LINE(74)
				::phoenix::Matrix _m;		HX_STACK_VAR(_m,"_m");
				HX_STACK_LINE(74)
				{
					HX_STACK_LINE(74)
					::phoenix::Spatial _this1;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(74)
					{
						HX_STACK_LINE(74)
						::phoenix::Transform _this2 = _geometry->transform;		HX_STACK_VAR(_this2,"_this2");
						HX_STACK_LINE(74)
						if ((!(_this2->_destroying))){
							HX_STACK_LINE(74)
							if (((_this2->parent != null()))){
								HX_STACK_LINE(74)
								if ((_this2->parent->dirty)){
									HX_STACK_LINE(74)
									::phoenix::Transform _this3 = _this2->parent;		HX_STACK_VAR(_this3,"_this3");
									HX_STACK_LINE(74)
									if ((!(_this3->dirty))){
										HX_STACK_LINE(74)
										Dynamic();
									}
									else{
										HX_STACK_LINE(74)
										_this3->_cleaning = true;
										HX_STACK_LINE(74)
										{
											HX_STACK_LINE(74)
											::phoenix::Matrix _this4 = _this3->_pos_matrix;		HX_STACK_VAR(_this4,"_this4");
											HX_STACK_LINE(74)
											{
												HX_STACK_LINE(74)
												Array< Float > e = _this4->elements;		HX_STACK_VAR(e,"e");
												HX_STACK_LINE(74)
												e[(int)0] = (int)1;
												HX_STACK_LINE(74)
												e[(int)4] = (int)0;
												HX_STACK_LINE(74)
												e[(int)8] = (int)0;
												HX_STACK_LINE(74)
												e[(int)12] = _this3->local->pos->x;
												HX_STACK_LINE(74)
												e[(int)1] = (int)0;
												HX_STACK_LINE(74)
												e[(int)5] = (int)1;
												HX_STACK_LINE(74)
												e[(int)9] = (int)0;
												HX_STACK_LINE(74)
												e[(int)13] = _this3->local->pos->y;
												HX_STACK_LINE(74)
												e[(int)2] = (int)0;
												HX_STACK_LINE(74)
												e[(int)6] = (int)0;
												HX_STACK_LINE(74)
												e[(int)10] = (int)1;
												HX_STACK_LINE(74)
												e[(int)14] = _this3->local->pos->z;
												HX_STACK_LINE(74)
												e[(int)3] = (int)0;
												HX_STACK_LINE(74)
												e[(int)7] = (int)0;
												HX_STACK_LINE(74)
												e[(int)11] = (int)0;
												HX_STACK_LINE(74)
												e[(int)15] = (int)1;
												HX_STACK_LINE(74)
												_this4;
											}
											HX_STACK_LINE(74)
											_this4;
										}
										HX_STACK_LINE(74)
										{
											HX_STACK_LINE(74)
											::phoenix::Matrix _this4 = _this3->_rotation_matrix;		HX_STACK_VAR(_this4,"_this4");
											HX_STACK_LINE(74)
											::phoenix::Quaternion q = _this3->local->rotation;		HX_STACK_VAR(q,"q");
											HX_STACK_LINE(74)
											Array< Float > te = _this4->elements;		HX_STACK_VAR(te,"te");
											HX_STACK_LINE(74)
											Float x2 = (q->x + q->x);		HX_STACK_VAR(x2,"x2");
											HX_STACK_LINE(74)
											Float y2 = (q->y + q->y);		HX_STACK_VAR(y2,"y2");
											HX_STACK_LINE(74)
											Float z2 = (q->z + q->z);		HX_STACK_VAR(z2,"z2");
											HX_STACK_LINE(74)
											Float xx = (q->x * x2);		HX_STACK_VAR(xx,"xx");
											HX_STACK_LINE(74)
											Float xy = (q->x * y2);		HX_STACK_VAR(xy,"xy");
											HX_STACK_LINE(74)
											Float xz = (q->x * z2);		HX_STACK_VAR(xz,"xz");
											HX_STACK_LINE(74)
											Float yy = (q->y * y2);		HX_STACK_VAR(yy,"yy");
											HX_STACK_LINE(74)
											Float yz = (q->y * z2);		HX_STACK_VAR(yz,"yz");
											HX_STACK_LINE(74)
											Float zz = (q->z * z2);		HX_STACK_VAR(zz,"zz");
											HX_STACK_LINE(74)
											Float wx = (q->w * x2);		HX_STACK_VAR(wx,"wx");
											HX_STACK_LINE(74)
											Float wy = (q->w * y2);		HX_STACK_VAR(wy,"wy");
											HX_STACK_LINE(74)
											Float wz = (q->w * z2);		HX_STACK_VAR(wz,"wz");
											HX_STACK_LINE(74)
											te[(int)0] = ((int)1 - ((yy + zz)));
											HX_STACK_LINE(74)
											te[(int)4] = (xy - wz);
											HX_STACK_LINE(74)
											te[(int)8] = (xz + wy);
											HX_STACK_LINE(74)
											te[(int)1] = (xy + wz);
											HX_STACK_LINE(74)
											te[(int)5] = ((int)1 - ((xx + zz)));
											HX_STACK_LINE(74)
											te[(int)9] = (yz - wx);
											HX_STACK_LINE(74)
											te[(int)2] = (xz - wy);
											HX_STACK_LINE(74)
											te[(int)6] = (yz + wx);
											HX_STACK_LINE(74)
											te[(int)10] = ((int)1 - ((xx + yy)));
											HX_STACK_LINE(74)
											te[(int)3] = (int)0;
											HX_STACK_LINE(74)
											te[(int)7] = (int)0;
											HX_STACK_LINE(74)
											te[(int)11] = (int)0;
											HX_STACK_LINE(74)
											te[(int)12] = (int)0;
											HX_STACK_LINE(74)
											te[(int)13] = (int)0;
											HX_STACK_LINE(74)
											te[(int)14] = (int)0;
											HX_STACK_LINE(74)
											te[(int)15] = (int)1;
											HX_STACK_LINE(74)
											_this4;
										}
										HX_STACK_LINE(74)
										{
											HX_STACK_LINE(74)
											::phoenix::Matrix _this4 = _this3->_origin_undo_matrix;		HX_STACK_VAR(_this4,"_this4");
											HX_STACK_LINE(74)
											{
												HX_STACK_LINE(74)
												Array< Float > e = _this4->elements;		HX_STACK_VAR(e,"e");
												HX_STACK_LINE(74)
												e[(int)0] = (int)1;
												HX_STACK_LINE(74)
												e[(int)4] = (int)0;
												HX_STACK_LINE(74)
												e[(int)8] = (int)0;
												HX_STACK_LINE(74)
												e[(int)12] = -(_this3->origin->x);
												HX_STACK_LINE(74)
												e[(int)1] = (int)0;
												HX_STACK_LINE(74)
												e[(int)5] = (int)1;
												HX_STACK_LINE(74)
												e[(int)9] = (int)0;
												HX_STACK_LINE(74)
												e[(int)13] = -(_this3->origin->y);
												HX_STACK_LINE(74)
												e[(int)2] = (int)0;
												HX_STACK_LINE(74)
												e[(int)6] = (int)0;
												HX_STACK_LINE(74)
												e[(int)10] = (int)1;
												HX_STACK_LINE(74)
												e[(int)14] = -(_this3->origin->z);
												HX_STACK_LINE(74)
												e[(int)3] = (int)0;
												HX_STACK_LINE(74)
												e[(int)7] = (int)0;
												HX_STACK_LINE(74)
												e[(int)11] = (int)0;
												HX_STACK_LINE(74)
												e[(int)15] = (int)1;
												HX_STACK_LINE(74)
												_this4;
											}
											HX_STACK_LINE(74)
											_this4;
										}
										HX_STACK_LINE(74)
										{
											HX_STACK_LINE(74)
											::phoenix::Matrix _this4 = _this3->local->matrix;		HX_STACK_VAR(_this4,"_this4");
											HX_STACK_LINE(74)
											{
												HX_STACK_LINE(74)
												Array< Float > e = _this4->elements;		HX_STACK_VAR(e,"e");
												HX_STACK_LINE(74)
												e[(int)0] = (int)1;
												HX_STACK_LINE(74)
												e[(int)4] = (int)0;
												HX_STACK_LINE(74)
												e[(int)8] = (int)0;
												HX_STACK_LINE(74)
												e[(int)12] = _this3->origin->x;
												HX_STACK_LINE(74)
												e[(int)1] = (int)0;
												HX_STACK_LINE(74)
												e[(int)5] = (int)1;
												HX_STACK_LINE(74)
												e[(int)9] = (int)0;
												HX_STACK_LINE(74)
												e[(int)13] = _this3->origin->y;
												HX_STACK_LINE(74)
												e[(int)2] = (int)0;
												HX_STACK_LINE(74)
												e[(int)6] = (int)0;
												HX_STACK_LINE(74)
												e[(int)10] = (int)1;
												HX_STACK_LINE(74)
												e[(int)14] = _this3->origin->z;
												HX_STACK_LINE(74)
												e[(int)3] = (int)0;
												HX_STACK_LINE(74)
												e[(int)7] = (int)0;
												HX_STACK_LINE(74)
												e[(int)11] = (int)0;
												HX_STACK_LINE(74)
												e[(int)15] = (int)1;
												HX_STACK_LINE(74)
												_this4;
											}
											HX_STACK_LINE(74)
											_this4;
										}
										HX_STACK_LINE(74)
										{
											HX_STACK_LINE(74)
											::phoenix::Matrix _this4 = _this3->local->matrix;		HX_STACK_VAR(_this4,"_this4");
											HX_STACK_LINE(74)
											::phoenix::Vector _v = _this3->local->scale;		HX_STACK_VAR(_v,"_v");
											HX_STACK_LINE(74)
											Array< Float > te = _this4->elements;		HX_STACK_VAR(te,"te");
											HX_STACK_LINE(74)
											Float _x = _v->x;		HX_STACK_VAR(_x,"_x");
											HX_STACK_LINE(74)
											Float _y = _v->y;		HX_STACK_VAR(_y,"_y");
											HX_STACK_LINE(74)
											Float _z = _v->z;		HX_STACK_VAR(_z,"_z");
											HX_STACK_LINE(74)
											hx::MultEq(te[(int)0],_x);
											HX_STACK_LINE(74)
											hx::MultEq(te[(int)4],_y);
											HX_STACK_LINE(74)
											hx::MultEq(te[(int)8],_z);
											HX_STACK_LINE(74)
											hx::MultEq(te[(int)1],_x);
											HX_STACK_LINE(74)
											hx::MultEq(te[(int)5],_y);
											HX_STACK_LINE(74)
											hx::MultEq(te[(int)9],_z);
											HX_STACK_LINE(74)
											hx::MultEq(te[(int)2],_x);
											HX_STACK_LINE(74)
											hx::MultEq(te[(int)6],_y);
											HX_STACK_LINE(74)
											hx::MultEq(te[(int)10],_z);
											HX_STACK_LINE(74)
											hx::MultEq(te[(int)3],_x);
											HX_STACK_LINE(74)
											hx::MultEq(te[(int)7],_y);
											HX_STACK_LINE(74)
											hx::MultEq(te[(int)11],_z);
											HX_STACK_LINE(74)
											_this4;
										}
										HX_STACK_LINE(74)
										{
											HX_STACK_LINE(74)
											::phoenix::Matrix _this4 = _this3->local->matrix;		HX_STACK_VAR(_this4,"_this4");
											HX_STACK_LINE(74)
											{
												HX_STACK_LINE(74)
												Array< Float > ae = _this4->elements;		HX_STACK_VAR(ae,"ae");
												HX_STACK_LINE(74)
												Array< Float > be = _this3->_rotation_matrix->elements;		HX_STACK_VAR(be,"be");
												HX_STACK_LINE(74)
												Array< Float > te = _this4->elements;		HX_STACK_VAR(te,"te");
												HX_STACK_LINE(74)
												Float a11 = ae->__get((int)0);		HX_STACK_VAR(a11,"a11");
												HX_STACK_LINE(74)
												Float a12 = ae->__get((int)4);		HX_STACK_VAR(a12,"a12");
												HX_STACK_LINE(74)
												Float a13 = ae->__get((int)8);		HX_STACK_VAR(a13,"a13");
												HX_STACK_LINE(74)
												Float a14 = ae->__get((int)12);		HX_STACK_VAR(a14,"a14");
												HX_STACK_LINE(74)
												Float a21 = ae->__get((int)1);		HX_STACK_VAR(a21,"a21");
												HX_STACK_LINE(74)
												Float a22 = ae->__get((int)5);		HX_STACK_VAR(a22,"a22");
												HX_STACK_LINE(74)
												Float a23 = ae->__get((int)9);		HX_STACK_VAR(a23,"a23");
												HX_STACK_LINE(74)
												Float a24 = ae->__get((int)13);		HX_STACK_VAR(a24,"a24");
												HX_STACK_LINE(74)
												Float a31 = ae->__get((int)2);		HX_STACK_VAR(a31,"a31");
												HX_STACK_LINE(74)
												Float a32 = ae->__get((int)6);		HX_STACK_VAR(a32,"a32");
												HX_STACK_LINE(74)
												Float a33 = ae->__get((int)10);		HX_STACK_VAR(a33,"a33");
												HX_STACK_LINE(74)
												Float a34 = ae->__get((int)14);		HX_STACK_VAR(a34,"a34");
												HX_STACK_LINE(74)
												Float a41 = ae->__get((int)3);		HX_STACK_VAR(a41,"a41");
												HX_STACK_LINE(74)
												Float a42 = ae->__get((int)7);		HX_STACK_VAR(a42,"a42");
												HX_STACK_LINE(74)
												Float a43 = ae->__get((int)11);		HX_STACK_VAR(a43,"a43");
												HX_STACK_LINE(74)
												Float a44 = ae->__get((int)15);		HX_STACK_VAR(a44,"a44");
												HX_STACK_LINE(74)
												Float b11 = be->__get((int)0);		HX_STACK_VAR(b11,"b11");
												HX_STACK_LINE(74)
												Float b12 = be->__get((int)4);		HX_STACK_VAR(b12,"b12");
												HX_STACK_LINE(74)
												Float b13 = be->__get((int)8);		HX_STACK_VAR(b13,"b13");
												HX_STACK_LINE(74)
												Float b14 = be->__get((int)12);		HX_STACK_VAR(b14,"b14");
												HX_STACK_LINE(74)
												Float b21 = be->__get((int)1);		HX_STACK_VAR(b21,"b21");
												HX_STACK_LINE(74)
												Float b22 = be->__get((int)5);		HX_STACK_VAR(b22,"b22");
												HX_STACK_LINE(74)
												Float b23 = be->__get((int)9);		HX_STACK_VAR(b23,"b23");
												HX_STACK_LINE(74)
												Float b24 = be->__get((int)13);		HX_STACK_VAR(b24,"b24");
												HX_STACK_LINE(74)
												Float b31 = be->__get((int)2);		HX_STACK_VAR(b31,"b31");
												HX_STACK_LINE(74)
												Float b32 = be->__get((int)6);		HX_STACK_VAR(b32,"b32");
												HX_STACK_LINE(74)
												Float b33 = be->__get((int)10);		HX_STACK_VAR(b33,"b33");
												HX_STACK_LINE(74)
												Float b34 = be->__get((int)14);		HX_STACK_VAR(b34,"b34");
												HX_STACK_LINE(74)
												Float b41 = be->__get((int)3);		HX_STACK_VAR(b41,"b41");
												HX_STACK_LINE(74)
												Float b42 = be->__get((int)7);		HX_STACK_VAR(b42,"b42");
												HX_STACK_LINE(74)
												Float b43 = be->__get((int)11);		HX_STACK_VAR(b43,"b43");
												HX_STACK_LINE(74)
												Float b44 = be->__get((int)15);		HX_STACK_VAR(b44,"b44");
												HX_STACK_LINE(74)
												te[(int)0] = ((((a11 * b11) + (a12 * b21)) + (a13 * b31)) + (a14 * b41));
												HX_STACK_LINE(74)
												te[(int)4] = ((((a11 * b12) + (a12 * b22)) + (a13 * b32)) + (a14 * b42));
												HX_STACK_LINE(74)
												te[(int)8] = ((((a11 * b13) + (a12 * b23)) + (a13 * b33)) + (a14 * b43));
												HX_STACK_LINE(74)
												te[(int)12] = ((((a11 * b14) + (a12 * b24)) + (a13 * b34)) + (a14 * b44));
												HX_STACK_LINE(74)
												te[(int)1] = ((((a21 * b11) + (a22 * b21)) + (a23 * b31)) + (a24 * b41));
												HX_STACK_LINE(74)
												te[(int)5] = ((((a21 * b12) + (a22 * b22)) + (a23 * b32)) + (a24 * b42));
												HX_STACK_LINE(74)
												te[(int)9] = ((((a21 * b13) + (a22 * b23)) + (a23 * b33)) + (a24 * b43));
												HX_STACK_LINE(74)
												te[(int)13] = ((((a21 * b14) + (a22 * b24)) + (a23 * b34)) + (a24 * b44));
												HX_STACK_LINE(74)
												te[(int)2] = ((((a31 * b11) + (a32 * b21)) + (a33 * b31)) + (a34 * b41));
												HX_STACK_LINE(74)
												te[(int)6] = ((((a31 * b12) + (a32 * b22)) + (a33 * b32)) + (a34 * b42));
												HX_STACK_LINE(74)
												te[(int)10] = ((((a31 * b13) + (a32 * b23)) + (a33 * b33)) + (a34 * b43));
												HX_STACK_LINE(74)
												te[(int)14] = ((((a31 * b14) + (a32 * b24)) + (a33 * b34)) + (a34 * b44));
												HX_STACK_LINE(74)
												te[(int)3] = ((((a41 * b11) + (a42 * b21)) + (a43 * b31)) + (a44 * b41));
												HX_STACK_LINE(74)
												te[(int)7] = ((((a41 * b12) + (a42 * b22)) + (a43 * b32)) + (a44 * b42));
												HX_STACK_LINE(74)
												te[(int)11] = ((((a41 * b13) + (a42 * b23)) + (a43 * b33)) + (a44 * b43));
												HX_STACK_LINE(74)
												te[(int)15] = ((((a41 * b14) + (a42 * b24)) + (a43 * b34)) + (a44 * b44));
												HX_STACK_LINE(74)
												_this4;
											}
										}
										HX_STACK_LINE(74)
										{
											HX_STACK_LINE(74)
											::phoenix::Matrix _this4 = _this3->local->matrix;		HX_STACK_VAR(_this4,"_this4");
											HX_STACK_LINE(74)
											::phoenix::Vector _v = _this3->local->pos;		HX_STACK_VAR(_v,"_v");
											HX_STACK_LINE(74)
											Array< Float > te = _this4->elements;		HX_STACK_VAR(te,"te");
											HX_STACK_LINE(74)
											te[(int)12] = _v->x;
											HX_STACK_LINE(74)
											te[(int)13] = _v->y;
											HX_STACK_LINE(74)
											te[(int)14] = _v->z;
											HX_STACK_LINE(74)
											_this4;
										}
										HX_STACK_LINE(74)
										{
											HX_STACK_LINE(74)
											::phoenix::Matrix _this4 = _this3->local->matrix;		HX_STACK_VAR(_this4,"_this4");
											HX_STACK_LINE(74)
											{
												HX_STACK_LINE(74)
												Array< Float > ae = _this4->elements;		HX_STACK_VAR(ae,"ae");
												HX_STACK_LINE(74)
												Array< Float > be = _this3->_origin_undo_matrix->elements;		HX_STACK_VAR(be,"be");
												HX_STACK_LINE(74)
												Array< Float > te = _this4->elements;		HX_STACK_VAR(te,"te");
												HX_STACK_LINE(74)
												Float a11 = ae->__get((int)0);		HX_STACK_VAR(a11,"a11");
												HX_STACK_LINE(74)
												Float a12 = ae->__get((int)4);		HX_STACK_VAR(a12,"a12");
												HX_STACK_LINE(74)
												Float a13 = ae->__get((int)8);		HX_STACK_VAR(a13,"a13");
												HX_STACK_LINE(74)
												Float a14 = ae->__get((int)12);		HX_STACK_VAR(a14,"a14");
												HX_STACK_LINE(74)
												Float a21 = ae->__get((int)1);		HX_STACK_VAR(a21,"a21");
												HX_STACK_LINE(74)
												Float a22 = ae->__get((int)5);		HX_STACK_VAR(a22,"a22");
												HX_STACK_LINE(74)
												Float a23 = ae->__get((int)9);		HX_STACK_VAR(a23,"a23");
												HX_STACK_LINE(74)
												Float a24 = ae->__get((int)13);		HX_STACK_VAR(a24,"a24");
												HX_STACK_LINE(74)
												Float a31 = ae->__get((int)2);		HX_STACK_VAR(a31,"a31");
												HX_STACK_LINE(74)
												Float a32 = ae->__get((int)6);		HX_STACK_VAR(a32,"a32");
												HX_STACK_LINE(74)
												Float a33 = ae->__get((int)10);		HX_STACK_VAR(a33,"a33");
												HX_STACK_LINE(74)
												Float a34 = ae->__get((int)14);		HX_STACK_VAR(a34,"a34");
												HX_STACK_LINE(74)
												Float a41 = ae->__get((int)3);		HX_STACK_VAR(a41,"a41");
												HX_STACK_LINE(74)
												Float a42 = ae->__get((int)7);		HX_STACK_VAR(a42,"a42");
												HX_STACK_LINE(74)
												Float a43 = ae->__get((int)11);		HX_STACK_VAR(a43,"a43");
												HX_STACK_LINE(74)
												Float a44 = ae->__get((int)15);		HX_STACK_VAR(a44,"a44");
												HX_STACK_LINE(74)
												Float b11 = be->__get((int)0);		HX_STACK_VAR(b11,"b11");
												HX_STACK_LINE(74)
												Float b12 = be->__get((int)4);		HX_STACK_VAR(b12,"b12");
												HX_STACK_LINE(74)
												Float b13 = be->__get((int)8);		HX_STACK_VAR(b13,"b13");
												HX_STACK_LINE(74)
												Float b14 = be->__get((int)12);		HX_STACK_VAR(b14,"b14");
												HX_STACK_LINE(74)
												Float b21 = be->__get((int)1);		HX_STACK_VAR(b21,"b21");
												HX_STACK_LINE(74)
												Float b22 = be->__get((int)5);		HX_STACK_VAR(b22,"b22");
												HX_STACK_LINE(74)
												Float b23 = be->__get((int)9);		HX_STACK_VAR(b23,"b23");
												HX_STACK_LINE(74)
												Float b24 = be->__get((int)13);		HX_STACK_VAR(b24,"b24");
												HX_STACK_LINE(74)
												Float b31 = be->__get((int)2);		HX_STACK_VAR(b31,"b31");
												HX_STACK_LINE(74)
												Float b32 = be->__get((int)6);		HX_STACK_VAR(b32,"b32");
												HX_STACK_LINE(74)
												Float b33 = be->__get((int)10);		HX_STACK_VAR(b33,"b33");
												HX_STACK_LINE(74)
												Float b34 = be->__get((int)14);		HX_STACK_VAR(b34,"b34");
												HX_STACK_LINE(74)
												Float b41 = be->__get((int)3);		HX_STACK_VAR(b41,"b41");
												HX_STACK_LINE(74)
												Float b42 = be->__get((int)7);		HX_STACK_VAR(b42,"b42");
												HX_STACK_LINE(74)
												Float b43 = be->__get((int)11);		HX_STACK_VAR(b43,"b43");
												HX_STACK_LINE(74)
												Float b44 = be->__get((int)15);		HX_STACK_VAR(b44,"b44");
												HX_STACK_LINE(74)
												te[(int)0] = ((((a11 * b11) + (a12 * b21)) + (a13 * b31)) + (a14 * b41));
												HX_STACK_LINE(74)
												te[(int)4] = ((((a11 * b12) + (a12 * b22)) + (a13 * b32)) + (a14 * b42));
												HX_STACK_LINE(74)
												te[(int)8] = ((((a11 * b13) + (a12 * b23)) + (a13 * b33)) + (a14 * b43));
												HX_STACK_LINE(74)
												te[(int)12] = ((((a11 * b14) + (a12 * b24)) + (a13 * b34)) + (a14 * b44));
												HX_STACK_LINE(74)
												te[(int)1] = ((((a21 * b11) + (a22 * b21)) + (a23 * b31)) + (a24 * b41));
												HX_STACK_LINE(74)
												te[(int)5] = ((((a21 * b12) + (a22 * b22)) + (a23 * b32)) + (a24 * b42));
												HX_STACK_LINE(74)
												te[(int)9] = ((((a21 * b13) + (a22 * b23)) + (a23 * b33)) + (a24 * b43));
												HX_STACK_LINE(74)
												te[(int)13] = ((((a21 * b14) + (a22 * b24)) + (a23 * b34)) + (a24 * b44));
												HX_STACK_LINE(74)
												te[(int)2] = ((((a31 * b11) + (a32 * b21)) + (a33 * b31)) + (a34 * b41));
												HX_STACK_LINE(74)
												te[(int)6] = ((((a31 * b12) + (a32 * b22)) + (a33 * b32)) + (a34 * b42));
												HX_STACK_LINE(74)
												te[(int)10] = ((((a31 * b13) + (a32 * b23)) + (a33 * b33)) + (a34 * b43));
												HX_STACK_LINE(74)
												te[(int)14] = ((((a31 * b14) + (a32 * b24)) + (a33 * b34)) + (a34 * b44));
												HX_STACK_LINE(74)
												te[(int)3] = ((((a41 * b11) + (a42 * b21)) + (a43 * b31)) + (a44 * b41));
												HX_STACK_LINE(74)
												te[(int)7] = ((((a41 * b12) + (a42 * b22)) + (a43 * b32)) + (a44 * b42));
												HX_STACK_LINE(74)
												te[(int)11] = ((((a41 * b13) + (a42 * b23)) + (a43 * b33)) + (a44 * b43));
												HX_STACK_LINE(74)
												te[(int)15] = ((((a41 * b14) + (a42 * b24)) + (a43 * b34)) + (a44 * b44));
												HX_STACK_LINE(74)
												_this4;
											}
										}
										HX_STACK_LINE(74)
										if (((_this3->parent != null()))){
											HX_STACK_LINE(74)
											::phoenix::Spatial _this4 = _this3->get_world();		HX_STACK_VAR(_this4,"_this4");
											HX_STACK_LINE(74)
											::phoenix::Matrix _m1;		HX_STACK_VAR(_m1,"_m1");
											HX_STACK_LINE(74)
											{
												HX_STACK_LINE(74)
												::phoenix::Matrix _this5;		HX_STACK_VAR(_this5,"_this5");
												HX_STACK_LINE(74)
												{
													HX_STACK_LINE(74)
													::phoenix::Spatial _this6 = _this3->get_world();		HX_STACK_VAR(_this6,"_this6");
													HX_STACK_LINE(74)
													_this5 = _this6->matrix;
												}
												HX_STACK_LINE(74)
												::phoenix::Matrix _a;		HX_STACK_VAR(_a,"_a");
												HX_STACK_LINE(74)
												{
													HX_STACK_LINE(74)
													::phoenix::Spatial _this6 = _this3->parent->get_world();		HX_STACK_VAR(_this6,"_this6");
													HX_STACK_LINE(74)
													_a = _this6->matrix;
												}
												HX_STACK_LINE(74)
												Array< Float > ae = _a->elements;		HX_STACK_VAR(ae,"ae");
												HX_STACK_LINE(74)
												Array< Float > be = _this3->local->matrix->elements;		HX_STACK_VAR(be,"be");
												HX_STACK_LINE(74)
												Array< Float > te = _this5->elements;		HX_STACK_VAR(te,"te");
												HX_STACK_LINE(74)
												Float a11 = ae->__get((int)0);		HX_STACK_VAR(a11,"a11");
												HX_STACK_LINE(74)
												Float a12 = ae->__get((int)4);		HX_STACK_VAR(a12,"a12");
												HX_STACK_LINE(74)
												Float a13 = ae->__get((int)8);		HX_STACK_VAR(a13,"a13");
												HX_STACK_LINE(74)
												Float a14 = ae->__get((int)12);		HX_STACK_VAR(a14,"a14");
												HX_STACK_LINE(74)
												Float a21 = ae->__get((int)1);		HX_STACK_VAR(a21,"a21");
												HX_STACK_LINE(74)
												Float a22 = ae->__get((int)5);		HX_STACK_VAR(a22,"a22");
												HX_STACK_LINE(74)
												Float a23 = ae->__get((int)9);		HX_STACK_VAR(a23,"a23");
												HX_STACK_LINE(74)
												Float a24 = ae->__get((int)13);		HX_STACK_VAR(a24,"a24");
												HX_STACK_LINE(74)
												Float a31 = ae->__get((int)2);		HX_STACK_VAR(a31,"a31");
												HX_STACK_LINE(74)
												Float a32 = ae->__get((int)6);		HX_STACK_VAR(a32,"a32");
												HX_STACK_LINE(74)
												Float a33 = ae->__get((int)10);		HX_STACK_VAR(a33,"a33");
												HX_STACK_LINE(74)
												Float a34 = ae->__get((int)14);		HX_STACK_VAR(a34,"a34");
												HX_STACK_LINE(74)
												Float a41 = ae->__get((int)3);		HX_STACK_VAR(a41,"a41");
												HX_STACK_LINE(74)
												Float a42 = ae->__get((int)7);		HX_STACK_VAR(a42,"a42");
												HX_STACK_LINE(74)
												Float a43 = ae->__get((int)11);		HX_STACK_VAR(a43,"a43");
												HX_STACK_LINE(74)
												Float a44 = ae->__get((int)15);		HX_STACK_VAR(a44,"a44");
												HX_STACK_LINE(74)
												Float b11 = be->__get((int)0);		HX_STACK_VAR(b11,"b11");
												HX_STACK_LINE(74)
												Float b12 = be->__get((int)4);		HX_STACK_VAR(b12,"b12");
												HX_STACK_LINE(74)
												Float b13 = be->__get((int)8);		HX_STACK_VAR(b13,"b13");
												HX_STACK_LINE(74)
												Float b14 = be->__get((int)12);		HX_STACK_VAR(b14,"b14");
												HX_STACK_LINE(74)
												Float b21 = be->__get((int)1);		HX_STACK_VAR(b21,"b21");
												HX_STACK_LINE(74)
												Float b22 = be->__get((int)5);		HX_STACK_VAR(b22,"b22");
												HX_STACK_LINE(74)
												Float b23 = be->__get((int)9);		HX_STACK_VAR(b23,"b23");
												HX_STACK_LINE(74)
												Float b24 = be->__get((int)13);		HX_STACK_VAR(b24,"b24");
												HX_STACK_LINE(74)
												Float b31 = be->__get((int)2);		HX_STACK_VAR(b31,"b31");
												HX_STACK_LINE(74)
												Float b32 = be->__get((int)6);		HX_STACK_VAR(b32,"b32");
												HX_STACK_LINE(74)
												Float b33 = be->__get((int)10);		HX_STACK_VAR(b33,"b33");
												HX_STACK_LINE(74)
												Float b34 = be->__get((int)14);		HX_STACK_VAR(b34,"b34");
												HX_STACK_LINE(74)
												Float b41 = be->__get((int)3);		HX_STACK_VAR(b41,"b41");
												HX_STACK_LINE(74)
												Float b42 = be->__get((int)7);		HX_STACK_VAR(b42,"b42");
												HX_STACK_LINE(74)
												Float b43 = be->__get((int)11);		HX_STACK_VAR(b43,"b43");
												HX_STACK_LINE(74)
												Float b44 = be->__get((int)15);		HX_STACK_VAR(b44,"b44");
												HX_STACK_LINE(74)
												te[(int)0] = ((((a11 * b11) + (a12 * b21)) + (a13 * b31)) + (a14 * b41));
												HX_STACK_LINE(74)
												te[(int)4] = ((((a11 * b12) + (a12 * b22)) + (a13 * b32)) + (a14 * b42));
												HX_STACK_LINE(74)
												te[(int)8] = ((((a11 * b13) + (a12 * b23)) + (a13 * b33)) + (a14 * b43));
												HX_STACK_LINE(74)
												te[(int)12] = ((((a11 * b14) + (a12 * b24)) + (a13 * b34)) + (a14 * b44));
												HX_STACK_LINE(74)
												te[(int)1] = ((((a21 * b11) + (a22 * b21)) + (a23 * b31)) + (a24 * b41));
												HX_STACK_LINE(74)
												te[(int)5] = ((((a21 * b12) + (a22 * b22)) + (a23 * b32)) + (a24 * b42));
												HX_STACK_LINE(74)
												te[(int)9] = ((((a21 * b13) + (a22 * b23)) + (a23 * b33)) + (a24 * b43));
												HX_STACK_LINE(74)
												te[(int)13] = ((((a21 * b14) + (a22 * b24)) + (a23 * b34)) + (a24 * b44));
												HX_STACK_LINE(74)
												te[(int)2] = ((((a31 * b11) + (a32 * b21)) + (a33 * b31)) + (a34 * b41));
												HX_STACK_LINE(74)
												te[(int)6] = ((((a31 * b12) + (a32 * b22)) + (a33 * b32)) + (a34 * b42));
												HX_STACK_LINE(74)
												te[(int)10] = ((((a31 * b13) + (a32 * b23)) + (a33 * b33)) + (a34 * b43));
												HX_STACK_LINE(74)
												te[(int)14] = ((((a31 * b14) + (a32 * b24)) + (a33 * b34)) + (a34 * b44));
												HX_STACK_LINE(74)
												te[(int)3] = ((((a41 * b11) + (a42 * b21)) + (a43 * b31)) + (a44 * b41));
												HX_STACK_LINE(74)
												te[(int)7] = ((((a41 * b12) + (a42 * b22)) + (a43 * b32)) + (a44 * b42));
												HX_STACK_LINE(74)
												te[(int)11] = ((((a41 * b13) + (a42 * b23)) + (a43 * b33)) + (a44 * b43));
												HX_STACK_LINE(74)
												te[(int)15] = ((((a41 * b14) + (a42 * b24)) + (a43 * b34)) + (a44 * b44));
												HX_STACK_LINE(74)
												_m1 = _this5;
											}
											HX_STACK_LINE(74)
											_this4->matrix = _m1;
											HX_STACK_LINE(74)
											if (((_m1 != null()))){
												HX_STACK_LINE(74)
												::snow::platform::native::utils::Float32Array _g1;		HX_STACK_VAR(_g1,"_g1");
												HX_STACK_LINE(74)
												{
													HX_STACK_LINE(74)
													::phoenix::Matrix _this5 = _this4->matrix;		HX_STACK_VAR(_this5,"_this5");
													HX_STACK_LINE(74)
													{
														HX_STACK_LINE(74)
														::snow::platform::native::utils::Float32Array _this6 = _this5->_float32array;		HX_STACK_VAR(_this6,"_this6");
														HX_STACK_LINE(74)
														Dynamic bufferOrArray = _this5->elements;		HX_STACK_VAR(bufferOrArray,"bufferOrArray");
														HX_STACK_LINE(74)
														int offset = (int)0;		HX_STACK_VAR(offset,"offset");
														HX_STACK_LINE(74)
														if ((::Std_obj::is(bufferOrArray,hx::ClassOf< Array<int> >()))){
															HX_STACK_LINE(74)
															Array< Float > floats = bufferOrArray;		HX_STACK_VAR(floats,"floats");
															HX_STACK_LINE(74)
															{
																HX_STACK_LINE(74)
																int _g11 = (int)0;		HX_STACK_VAR(_g11,"_g11");
																HX_STACK_LINE(74)
																int _g2 = floats->length;		HX_STACK_VAR(_g2,"_g2");
																HX_STACK_LINE(74)
																while((true)){
																	HX_STACK_LINE(74)
																	if ((!(((_g11 < _g2))))){
																		HX_STACK_LINE(74)
																		break;
																	}
																	HX_STACK_LINE(74)
																	int i1 = (_g11)++;		HX_STACK_VAR(i1,"i1");
																	HX_STACK_LINE(74)
																	::__hxcpp_memory_set_float(_this6->bytes,(((int((i1 + offset)) << int((int)2))) + _this6->byteOffset),floats->__get(i1));
																}
															}
														}
														else{
															HX_STACK_LINE(74)
															if ((::Std_obj::is(bufferOrArray,hx::ClassOf< ::snow::platform::native::utils::Float32Array >()))){
																HX_STACK_LINE(74)
																::snow::platform::native::utils::Float32Array floats = bufferOrArray;		HX_STACK_VAR(floats,"floats");
																HX_STACK_LINE(74)
																{
																	HX_STACK_LINE(74)
																	int _g11 = (int)0;		HX_STACK_VAR(_g11,"_g11");
																	HX_STACK_LINE(74)
																	int _g2 = floats->length;		HX_STACK_VAR(_g2,"_g2");
																	HX_STACK_LINE(74)
																	while((true)){
																		HX_STACK_LINE(74)
																		if ((!(((_g11 < _g2))))){
																			HX_STACK_LINE(74)
																			break;
																		}
																		HX_STACK_LINE(74)
																		int i1 = (_g11)++;		HX_STACK_VAR(i1,"i1");
																		HX_STACK_LINE(74)
																		::__hxcpp_memory_set_float(_this6->bytes,(((int((i1 + offset)) << int((int)2))) + _this6->byteOffset),floats->__get(i1));
																	}
																}
															}
															else{
																HX_STACK_LINE(74)
																HX_STACK_DO_THROW(HX_CSTRING("Invalid input buffer"));
															}
														}
													}
													HX_STACK_LINE(74)
													_g1 = ::snow::platform::native::utils::Float32Array_obj::__new(_this5->_float32array,null(),null());
												}
												HX_STACK_LINE(74)
												_this4->floats = _g1;
											}
											HX_STACK_LINE(74)
											_this4->matrix;
										}
										else{
											HX_STACK_LINE(74)
											::phoenix::Spatial _this4 = _this3->get_world();		HX_STACK_VAR(_this4,"_this4");
											HX_STACK_LINE(74)
											::phoenix::Matrix _m1;		HX_STACK_VAR(_m1,"_m1");
											HX_STACK_LINE(74)
											{
												HX_STACK_LINE(74)
												Array< Float > te = _this3->local->matrix->elements;		HX_STACK_VAR(te,"te");
												HX_STACK_LINE(74)
												_m1 = ::phoenix::Matrix_obj::__new(te->__get((int)0),te->__get((int)4),te->__get((int)8),te->__get((int)12),te->__get((int)1),te->__get((int)5),te->__get((int)9),te->__get((int)13),te->__get((int)2),te->__get((int)6),te->__get((int)10),te->__get((int)14),te->__get((int)3),te->__get((int)7),te->__get((int)11),te->__get((int)15));
											}
											HX_STACK_LINE(74)
											_this4->matrix = _m1;
											HX_STACK_LINE(74)
											if (((_m1 != null()))){
												HX_STACK_LINE(74)
												::snow::platform::native::utils::Float32Array _g1;		HX_STACK_VAR(_g1,"_g1");
												HX_STACK_LINE(74)
												{
													HX_STACK_LINE(74)
													::phoenix::Matrix _this5 = _this4->matrix;		HX_STACK_VAR(_this5,"_this5");
													HX_STACK_LINE(74)
													{
														HX_STACK_LINE(74)
														::snow::platform::native::utils::Float32Array _this6 = _this5->_float32array;		HX_STACK_VAR(_this6,"_this6");
														HX_STACK_LINE(74)
														Dynamic bufferOrArray = _this5->elements;		HX_STACK_VAR(bufferOrArray,"bufferOrArray");
														HX_STACK_LINE(74)
														int offset = (int)0;		HX_STACK_VAR(offset,"offset");
														HX_STACK_LINE(74)
														if ((::Std_obj::is(bufferOrArray,hx::ClassOf< Array<int> >()))){
															HX_STACK_LINE(74)
															Array< Float > floats = bufferOrArray;		HX_STACK_VAR(floats,"floats");
															HX_STACK_LINE(74)
															{
																HX_STACK_LINE(74)
																int _g11 = (int)0;		HX_STACK_VAR(_g11,"_g11");
																HX_STACK_LINE(74)
																int _g2 = floats->length;		HX_STACK_VAR(_g2,"_g2");
																HX_STACK_LINE(74)
																while((true)){
																	HX_STACK_LINE(74)
																	if ((!(((_g11 < _g2))))){
																		HX_STACK_LINE(74)
																		break;
																	}
																	HX_STACK_LINE(74)
																	int i1 = (_g11)++;		HX_STACK_VAR(i1,"i1");
																	HX_STACK_LINE(74)
																	::__hxcpp_memory_set_float(_this6->bytes,(((int((i1 + offset)) << int((int)2))) + _this6->byteOffset),floats->__get(i1));
																}
															}
														}
														else{
															HX_STACK_LINE(74)
															if ((::Std_obj::is(bufferOrArray,hx::ClassOf< ::snow::platform::native::utils::Float32Array >()))){
																HX_STACK_LINE(74)
																::snow::platform::native::utils::Float32Array floats = bufferOrArray;		HX_STACK_VAR(floats,"floats");
																HX_STACK_LINE(74)
																{
																	HX_STACK_LINE(74)
																	int _g11 = (int)0;		HX_STACK_VAR(_g11,"_g11");
																	HX_STACK_LINE(74)
																	int _g2 = floats->length;		HX_STACK_VAR(_g2,"_g2");
																	HX_STACK_LINE(74)
																	while((true)){
																		HX_STACK_LINE(74)
																		if ((!(((_g11 < _g2))))){
																			HX_STACK_LINE(74)
																			break;
																		}
																		HX_STACK_LINE(74)
																		int i1 = (_g11)++;		HX_STACK_VAR(i1,"i1");
																		HX_STACK_LINE(74)
																		::__hxcpp_memory_set_float(_this6->bytes,(((int((i1 + offset)) << int((int)2))) + _this6->byteOffset),floats->__get(i1));
																	}
																}
															}
															else{
																HX_STACK_LINE(74)
																HX_STACK_DO_THROW(HX_CSTRING("Invalid input buffer"));
															}
														}
													}
													HX_STACK_LINE(74)
													_g1 = ::snow::platform::native::utils::Float32Array_obj::__new(_this5->_float32array,null(),null());
												}
												HX_STACK_LINE(74)
												_this4->floats = _g1;
											}
											HX_STACK_LINE(74)
											_this4->matrix;
										}
										HX_STACK_LINE(74)
										{
											HX_STACK_LINE(74)
											::phoenix::Spatial _this4 = _this3->get_world();		HX_STACK_VAR(_this4,"_this4");
											HX_STACK_LINE(74)
											if ((_this4->auto_decompose)){
												HX_STACK_LINE(74)
												::phoenix::MatrixTransform _transform;		HX_STACK_VAR(_transform,"_transform");
												HX_STACK_LINE(74)
												{
													HX_STACK_LINE(74)
													::phoenix::Matrix _this5 = _this4->matrix;		HX_STACK_VAR(_this5,"_this5");
													HX_STACK_LINE(74)
													::phoenix::Vector _position = null();		HX_STACK_VAR(_position,"_position");
													HX_STACK_LINE(74)
													::phoenix::Quaternion _quaternion = null();		HX_STACK_VAR(_quaternion,"_quaternion");
													HX_STACK_LINE(74)
													::phoenix::Vector _scale = null();		HX_STACK_VAR(_scale,"_scale");
													HX_STACK_LINE(74)
													Array< Float > te = _this5->elements;		HX_STACK_VAR(te,"te");
													HX_STACK_LINE(74)
													::phoenix::Matrix matrix = ::phoenix::Matrix_obj::__new(null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(matrix,"matrix");
													HX_STACK_LINE(74)
													Float _ax_x = te->__get((int)0);		HX_STACK_VAR(_ax_x,"_ax_x");
													HX_STACK_LINE(74)
													Float _ax_y = te->__get((int)1);		HX_STACK_VAR(_ax_y,"_ax_y");
													HX_STACK_LINE(74)
													Float _ax_z = te->__get((int)2);		HX_STACK_VAR(_ax_z,"_ax_z");
													HX_STACK_LINE(74)
													Float _ay_x = te->__get((int)4);		HX_STACK_VAR(_ay_x,"_ay_x");
													HX_STACK_LINE(74)
													Float _ay_y = te->__get((int)5);		HX_STACK_VAR(_ay_y,"_ay_y");
													HX_STACK_LINE(74)
													Float _ay_z = te->__get((int)6);		HX_STACK_VAR(_ay_z,"_ay_z");
													HX_STACK_LINE(74)
													Float _az_x = te->__get((int)8);		HX_STACK_VAR(_az_x,"_az_x");
													HX_STACK_LINE(74)
													Float _az_y = te->__get((int)9);		HX_STACK_VAR(_az_y,"_az_y");
													HX_STACK_LINE(74)
													Float _az_z = te->__get((int)10);		HX_STACK_VAR(_az_z,"_az_z");
													HX_STACK_LINE(74)
													Float _ax_length = ::Math_obj::sqrt((((_ax_x * _ax_x) + (_ax_y * _ax_y)) + (_ax_z * _ax_z)));		HX_STACK_VAR(_ax_length,"_ax_length");
													HX_STACK_LINE(74)
													Float _ay_length = ::Math_obj::sqrt((((_ay_x * _ay_x) + (_ay_y * _ay_y)) + (_ay_z * _ay_z)));		HX_STACK_VAR(_ay_length,"_ay_length");
													HX_STACK_LINE(74)
													Float _az_length = ::Math_obj::sqrt((((_az_x * _az_x) + (_az_y * _az_y)) + (_az_z * _az_z)));		HX_STACK_VAR(_az_length,"_az_length");
													HX_STACK_LINE(74)
													if (((_quaternion == null()))){
														HX_STACK_LINE(74)
														::phoenix::Quaternion _g2 = ::phoenix::Quaternion_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(_g2,"_g2");
														HX_STACK_LINE(74)
														_quaternion = _g2;
													}
													HX_STACK_LINE(74)
													if (((_position == null()))){
														HX_STACK_LINE(74)
														::phoenix::Vector _g3 = ::phoenix::Vector_obj::__new(te->__get((int)12),te->__get((int)13),te->__get((int)14),null());		HX_STACK_VAR(_g3,"_g3");
														HX_STACK_LINE(74)
														_position = _g3;
													}
													else{
														HX_STACK_LINE(74)
														{
															HX_STACK_LINE(74)
															Float _x = te->__get((int)12);		HX_STACK_VAR(_x,"_x");
															HX_STACK_LINE(74)
															_position->x = _x;
															HX_STACK_LINE(74)
															if ((_position->_construct)){
																HX_STACK_LINE(74)
																_position->x;
															}
															else{
																HX_STACK_LINE(74)
																if (((bool((_position->listen_x != null())) && bool(!(_position->ignore_listeners))))){
																	HX_STACK_LINE(74)
																	_position->listen_x(_x);
																}
																HX_STACK_LINE(74)
																_position->x;
															}
														}
														HX_STACK_LINE(74)
														{
															HX_STACK_LINE(74)
															Float _y = te->__get((int)13);		HX_STACK_VAR(_y,"_y");
															HX_STACK_LINE(74)
															_position->y = _y;
															HX_STACK_LINE(74)
															if ((_position->_construct)){
																HX_STACK_LINE(74)
																_position->y;
															}
															else{
																HX_STACK_LINE(74)
																if (((bool((_position->listen_y != null())) && bool(!(_position->ignore_listeners))))){
																	HX_STACK_LINE(74)
																	_position->listen_y(_y);
																}
																HX_STACK_LINE(74)
																_position->y;
															}
														}
														HX_STACK_LINE(74)
														{
															HX_STACK_LINE(74)
															Float _z = te->__get((int)14);		HX_STACK_VAR(_z,"_z");
															HX_STACK_LINE(74)
															_position->z = _z;
															HX_STACK_LINE(74)
															if ((_position->_construct)){
																HX_STACK_LINE(74)
																_position->z;
															}
															else{
																HX_STACK_LINE(74)
																if (((bool((_position->listen_z != null())) && bool(!(_position->ignore_listeners))))){
																	HX_STACK_LINE(74)
																	_position->listen_z(_z);
																}
																HX_STACK_LINE(74)
																_position->z;
															}
														}
													}
													HX_STACK_LINE(74)
													if (((_scale == null()))){
														HX_STACK_LINE(74)
														::phoenix::Vector _g4 = ::phoenix::Vector_obj::__new(_ax_length,_ay_length,_az_length,null());		HX_STACK_VAR(_g4,"_g4");
														HX_STACK_LINE(74)
														_scale = _g4;
													}
													else{
														HX_STACK_LINE(74)
														{
															HX_STACK_LINE(74)
															_scale->x = _ax_length;
															HX_STACK_LINE(74)
															if ((_scale->_construct)){
																HX_STACK_LINE(74)
																_scale->x;
															}
															else{
																HX_STACK_LINE(74)
																if (((bool((_scale->listen_x != null())) && bool(!(_scale->ignore_listeners))))){
																	HX_STACK_LINE(74)
																	_scale->listen_x(_ax_length);
																}
																HX_STACK_LINE(74)
																_scale->x;
															}
														}
														HX_STACK_LINE(74)
														{
															HX_STACK_LINE(74)
															_scale->y = _ay_length;
															HX_STACK_LINE(74)
															if ((_scale->_construct)){
																HX_STACK_LINE(74)
																_scale->y;
															}
															else{
																HX_STACK_LINE(74)
																if (((bool((_scale->listen_y != null())) && bool(!(_scale->ignore_listeners))))){
																	HX_STACK_LINE(74)
																	_scale->listen_y(_ay_length);
																}
																HX_STACK_LINE(74)
																_scale->y;
															}
														}
														HX_STACK_LINE(74)
														{
															HX_STACK_LINE(74)
															_scale->z = _az_length;
															HX_STACK_LINE(74)
															if ((_scale->_construct)){
																HX_STACK_LINE(74)
																_scale->z;
															}
															else{
																HX_STACK_LINE(74)
																if (((bool((_scale->listen_z != null())) && bool(!(_scale->ignore_listeners))))){
																	HX_STACK_LINE(74)
																	_scale->listen_z(_az_length);
																}
																HX_STACK_LINE(74)
																_scale->z;
															}
														}
													}
													HX_STACK_LINE(74)
													Array< Float > _g5 = _this5->elements->concat(Array_obj< Float >::__new());		HX_STACK_VAR(_g5,"_g5");
													HX_STACK_LINE(74)
													matrix->elements = _g5;
													HX_STACK_LINE(74)
													Array< Float > me = matrix->elements;		HX_STACK_VAR(me,"me");
													HX_STACK_LINE(74)
													hx::DivEq(me[(int)0],_ax_length);
													HX_STACK_LINE(74)
													hx::DivEq(me[(int)1],_ax_length);
													HX_STACK_LINE(74)
													hx::DivEq(me[(int)2],_ax_length);
													HX_STACK_LINE(74)
													hx::DivEq(me[(int)4],_ay_length);
													HX_STACK_LINE(74)
													hx::DivEq(me[(int)5],_ay_length);
													HX_STACK_LINE(74)
													hx::DivEq(me[(int)6],_ay_length);
													HX_STACK_LINE(74)
													hx::DivEq(me[(int)8],_az_length);
													HX_STACK_LINE(74)
													hx::DivEq(me[(int)9],_az_length);
													HX_STACK_LINE(74)
													hx::DivEq(me[(int)10],_az_length);
													HX_STACK_LINE(74)
													_quaternion->setFromRotationMatrix(matrix);
													HX_STACK_LINE(74)
													if (((_this5->_transform == null()))){
														HX_STACK_LINE(74)
														::phoenix::MatrixTransform _g6 = ::phoenix::MatrixTransform_obj::__new(_position,_quaternion,_scale);		HX_STACK_VAR(_g6,"_g6");
														HX_STACK_LINE(74)
														_this5->_transform = _g6;
													}
													else{
														HX_STACK_LINE(74)
														_this5->_transform->pos = _position;
														HX_STACK_LINE(74)
														_this5->_transform->rotation = _quaternion;
														HX_STACK_LINE(74)
														_this5->_transform->scale = _scale;
													}
													HX_STACK_LINE(74)
													_transform = _this5->_transform;
												}
												HX_STACK_LINE(74)
												{
													HX_STACK_LINE(74)
													::phoenix::Vector _p = _transform->pos;		HX_STACK_VAR(_p,"_p");
													HX_STACK_LINE(74)
													_this4->pos = _p;
													HX_STACK_LINE(74)
													if (((_p != null()))){
														HX_STACK_LINE(74)
														::phoenix::Vector_obj::Listen(_this4->pos,_this4->_pos_change_dyn());
														HX_STACK_LINE(74)
														if (((bool((_this4->pos_changed != null())) && bool(!(_this4->ignore_listeners))))){
															HX_STACK_LINE(74)
															_this4->pos_changed(_this4->pos);
														}
													}
													HX_STACK_LINE(74)
													_this4->pos;
												}
												HX_STACK_LINE(74)
												{
													HX_STACK_LINE(74)
													::phoenix::Quaternion _r = _transform->rotation;		HX_STACK_VAR(_r,"_r");
													HX_STACK_LINE(74)
													_this4->rotation = _r;
													HX_STACK_LINE(74)
													if (((_r != null()))){
														HX_STACK_LINE(74)
														{
															HX_STACK_LINE(74)
															::phoenix::Quaternion _q = _this4->rotation;		HX_STACK_VAR(_q,"_q");
															HX_STACK_LINE(74)
															Dynamic listener = _this4->_rotation_change_dyn();		HX_STACK_VAR(listener,"listener");
															HX_STACK_LINE(74)
															_q->listen_x = listener;
															HX_STACK_LINE(74)
															_q->listen_y = listener;
															HX_STACK_LINE(74)
															_q->listen_z = listener;
															HX_STACK_LINE(74)
															_q->listen_w = listener;
														}
														HX_STACK_LINE(74)
														if (((bool((_this4->rotation_changed != null())) && bool(!(_this4->ignore_listeners))))){
															HX_STACK_LINE(74)
															_this4->rotation_changed(_this4->rotation);
														}
													}
													HX_STACK_LINE(74)
													_this4->rotation;
												}
												HX_STACK_LINE(74)
												{
													HX_STACK_LINE(74)
													::phoenix::Vector _s = _transform->scale;		HX_STACK_VAR(_s,"_s");
													HX_STACK_LINE(74)
													_this4->scale = _s;
													HX_STACK_LINE(74)
													if (((_s != null()))){
														HX_STACK_LINE(74)
														::phoenix::Vector_obj::Listen(_this4->scale,_this4->_scale_change_dyn());
														HX_STACK_LINE(74)
														if (((bool((_this4->scale_changed != null())) && bool(!(_this4->ignore_listeners))))){
															HX_STACK_LINE(74)
															_this4->scale_changed(_this4->scale);
														}
													}
													HX_STACK_LINE(74)
													_this4->scale;
												}
											}
											HX_STACK_LINE(74)
											_this4;
										}
										HX_STACK_LINE(74)
										{
											HX_STACK_LINE(74)
											_this3->dirty = false;
											HX_STACK_LINE(74)
											if (((bool((bool((bool(_this3->dirty) && bool(!(_this3->_setup)))) && bool((_this3->_dirty_handlers != null())))) && bool((_this3->_dirty_handlers->__Field(HX_CSTRING("length"),true) > (int)0))))){
												HX_STACK_LINE(74)
												int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
												HX_STACK_LINE(74)
												Dynamic _g11 = _this3->_dirty_handlers;		HX_STACK_VAR(_g11,"_g11");
												HX_STACK_LINE(74)
												while((true)){
													HX_STACK_LINE(74)
													if ((!(((_g1 < _g11->__Field(HX_CSTRING("length"),true)))))){
														HX_STACK_LINE(74)
														break;
													}
													HX_STACK_LINE(74)
													Dynamic _handler = _g11->__GetItem(_g1);		HX_STACK_VAR(_handler,"_handler");
													HX_STACK_LINE(74)
													++(_g1);
													HX_STACK_LINE(74)
													if (((_handler != null()))){
														HX_STACK_LINE(74)
														_handler(_this3).Cast< Void >();
													}
												}
											}
											HX_STACK_LINE(74)
											_this3->dirty;
										}
										HX_STACK_LINE(74)
										_this3->_cleaning = false;
										HX_STACK_LINE(74)
										if (((bool((_this3->_clean_handlers != null())) && bool((_this3->_clean_handlers->__Field(HX_CSTRING("length"),true) > (int)0))))){
											HX_STACK_LINE(74)
											int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
											HX_STACK_LINE(74)
											Dynamic _g11 = _this3->_clean_handlers;		HX_STACK_VAR(_g11,"_g11");
											HX_STACK_LINE(74)
											while((true)){
												HX_STACK_LINE(74)
												if ((!(((_g1 < _g11->__Field(HX_CSTRING("length"),true)))))){
													HX_STACK_LINE(74)
													break;
												}
												HX_STACK_LINE(74)
												Dynamic _handler = _g11->__GetItem(_g1);		HX_STACK_VAR(_handler,"_handler");
												HX_STACK_LINE(74)
												++(_g1);
												HX_STACK_LINE(74)
												if (((_handler != null()))){
													HX_STACK_LINE(74)
													_handler(_this3).Cast< Void >();
												}
											}
										}
									}
								}
							}
							HX_STACK_LINE(74)
							if (((bool(_this2->dirty) && bool(!(_this2->_cleaning))))){
								HX_STACK_LINE(74)
								if ((!(_this2->dirty))){
									HX_STACK_LINE(74)
									Dynamic();
								}
								else{
									HX_STACK_LINE(74)
									_this2->_cleaning = true;
									HX_STACK_LINE(74)
									{
										HX_STACK_LINE(74)
										::phoenix::Matrix _this3 = _this2->_pos_matrix;		HX_STACK_VAR(_this3,"_this3");
										HX_STACK_LINE(74)
										{
											HX_STACK_LINE(74)
											Array< Float > e = _this3->elements;		HX_STACK_VAR(e,"e");
											HX_STACK_LINE(74)
											e[(int)0] = (int)1;
											HX_STACK_LINE(74)
											e[(int)4] = (int)0;
											HX_STACK_LINE(74)
											e[(int)8] = (int)0;
											HX_STACK_LINE(74)
											e[(int)12] = _this2->local->pos->x;
											HX_STACK_LINE(74)
											e[(int)1] = (int)0;
											HX_STACK_LINE(74)
											e[(int)5] = (int)1;
											HX_STACK_LINE(74)
											e[(int)9] = (int)0;
											HX_STACK_LINE(74)
											e[(int)13] = _this2->local->pos->y;
											HX_STACK_LINE(74)
											e[(int)2] = (int)0;
											HX_STACK_LINE(74)
											e[(int)6] = (int)0;
											HX_STACK_LINE(74)
											e[(int)10] = (int)1;
											HX_STACK_LINE(74)
											e[(int)14] = _this2->local->pos->z;
											HX_STACK_LINE(74)
											e[(int)3] = (int)0;
											HX_STACK_LINE(74)
											e[(int)7] = (int)0;
											HX_STACK_LINE(74)
											e[(int)11] = (int)0;
											HX_STACK_LINE(74)
											e[(int)15] = (int)1;
											HX_STACK_LINE(74)
											_this3;
										}
										HX_STACK_LINE(74)
										_this3;
									}
									HX_STACK_LINE(74)
									{
										HX_STACK_LINE(74)
										::phoenix::Matrix _this3 = _this2->_rotation_matrix;		HX_STACK_VAR(_this3,"_this3");
										HX_STACK_LINE(74)
										::phoenix::Quaternion q = _this2->local->rotation;		HX_STACK_VAR(q,"q");
										HX_STACK_LINE(74)
										Array< Float > te = _this3->elements;		HX_STACK_VAR(te,"te");
										HX_STACK_LINE(74)
										Float x2 = (q->x + q->x);		HX_STACK_VAR(x2,"x2");
										HX_STACK_LINE(74)
										Float y2 = (q->y + q->y);		HX_STACK_VAR(y2,"y2");
										HX_STACK_LINE(74)
										Float z2 = (q->z + q->z);		HX_STACK_VAR(z2,"z2");
										HX_STACK_LINE(74)
										Float xx = (q->x * x2);		HX_STACK_VAR(xx,"xx");
										HX_STACK_LINE(74)
										Float xy = (q->x * y2);		HX_STACK_VAR(xy,"xy");
										HX_STACK_LINE(74)
										Float xz = (q->x * z2);		HX_STACK_VAR(xz,"xz");
										HX_STACK_LINE(74)
										Float yy = (q->y * y2);		HX_STACK_VAR(yy,"yy");
										HX_STACK_LINE(74)
										Float yz = (q->y * z2);		HX_STACK_VAR(yz,"yz");
										HX_STACK_LINE(74)
										Float zz = (q->z * z2);		HX_STACK_VAR(zz,"zz");
										HX_STACK_LINE(74)
										Float wx = (q->w * x2);		HX_STACK_VAR(wx,"wx");
										HX_STACK_LINE(74)
										Float wy = (q->w * y2);		HX_STACK_VAR(wy,"wy");
										HX_STACK_LINE(74)
										Float wz = (q->w * z2);		HX_STACK_VAR(wz,"wz");
										HX_STACK_LINE(74)
										te[(int)0] = ((int)1 - ((yy + zz)));
										HX_STACK_LINE(74)
										te[(int)4] = (xy - wz);
										HX_STACK_LINE(74)
										te[(int)8] = (xz + wy);
										HX_STACK_LINE(74)
										te[(int)1] = (xy + wz);
										HX_STACK_LINE(74)
										te[(int)5] = ((int)1 - ((xx + zz)));
										HX_STACK_LINE(74)
										te[(int)9] = (yz - wx);
										HX_STACK_LINE(74)
										te[(int)2] = (xz - wy);
										HX_STACK_LINE(74)
										te[(int)6] = (yz + wx);
										HX_STACK_LINE(74)
										te[(int)10] = ((int)1 - ((xx + yy)));
										HX_STACK_LINE(74)
										te[(int)3] = (int)0;
										HX_STACK_LINE(74)
										te[(int)7] = (int)0;
										HX_STACK_LINE(74)
										te[(int)11] = (int)0;
										HX_STACK_LINE(74)
										te[(int)12] = (int)0;
										HX_STACK_LINE(74)
										te[(int)13] = (int)0;
										HX_STACK_LINE(74)
										te[(int)14] = (int)0;
										HX_STACK_LINE(74)
										te[(int)15] = (int)1;
										HX_STACK_LINE(74)
										_this3;
									}
									HX_STACK_LINE(74)
									{
										HX_STACK_LINE(74)
										::phoenix::Matrix _this3 = _this2->_origin_undo_matrix;		HX_STACK_VAR(_this3,"_this3");
										HX_STACK_LINE(74)
										{
											HX_STACK_LINE(74)
											Array< Float > e = _this3->elements;		HX_STACK_VAR(e,"e");
											HX_STACK_LINE(74)
											e[(int)0] = (int)1;
											HX_STACK_LINE(74)
											e[(int)4] = (int)0;
											HX_STACK_LINE(74)
											e[(int)8] = (int)0;
											HX_STACK_LINE(74)
											e[(int)12] = -(_this2->origin->x);
											HX_STACK_LINE(74)
											e[(int)1] = (int)0;
											HX_STACK_LINE(74)
											e[(int)5] = (int)1;
											HX_STACK_LINE(74)
											e[(int)9] = (int)0;
											HX_STACK_LINE(74)
											e[(int)13] = -(_this2->origin->y);
											HX_STACK_LINE(74)
											e[(int)2] = (int)0;
											HX_STACK_LINE(74)
											e[(int)6] = (int)0;
											HX_STACK_LINE(74)
											e[(int)10] = (int)1;
											HX_STACK_LINE(74)
											e[(int)14] = -(_this2->origin->z);
											HX_STACK_LINE(74)
											e[(int)3] = (int)0;
											HX_STACK_LINE(74)
											e[(int)7] = (int)0;
											HX_STACK_LINE(74)
											e[(int)11] = (int)0;
											HX_STACK_LINE(74)
											e[(int)15] = (int)1;
											HX_STACK_LINE(74)
											_this3;
										}
										HX_STACK_LINE(74)
										_this3;
									}
									HX_STACK_LINE(74)
									{
										HX_STACK_LINE(74)
										::phoenix::Matrix _this3 = _this2->local->matrix;		HX_STACK_VAR(_this3,"_this3");
										HX_STACK_LINE(74)
										{
											HX_STACK_LINE(74)
											Array< Float > e = _this3->elements;		HX_STACK_VAR(e,"e");
											HX_STACK_LINE(74)
											e[(int)0] = (int)1;
											HX_STACK_LINE(74)
											e[(int)4] = (int)0;
											HX_STACK_LINE(74)
											e[(int)8] = (int)0;
											HX_STACK_LINE(74)
											e[(int)12] = _this2->origin->x;
											HX_STACK_LINE(74)
											e[(int)1] = (int)0;
											HX_STACK_LINE(74)
											e[(int)5] = (int)1;
											HX_STACK_LINE(74)
											e[(int)9] = (int)0;
											HX_STACK_LINE(74)
											e[(int)13] = _this2->origin->y;
											HX_STACK_LINE(74)
											e[(int)2] = (int)0;
											HX_STACK_LINE(74)
											e[(int)6] = (int)0;
											HX_STACK_LINE(74)
											e[(int)10] = (int)1;
											HX_STACK_LINE(74)
											e[(int)14] = _this2->origin->z;
											HX_STACK_LINE(74)
											e[(int)3] = (int)0;
											HX_STACK_LINE(74)
											e[(int)7] = (int)0;
											HX_STACK_LINE(74)
											e[(int)11] = (int)0;
											HX_STACK_LINE(74)
											e[(int)15] = (int)1;
											HX_STACK_LINE(74)
											_this3;
										}
										HX_STACK_LINE(74)
										_this3;
									}
									HX_STACK_LINE(74)
									{
										HX_STACK_LINE(74)
										::phoenix::Matrix _this3 = _this2->local->matrix;		HX_STACK_VAR(_this3,"_this3");
										HX_STACK_LINE(74)
										::phoenix::Vector _v = _this2->local->scale;		HX_STACK_VAR(_v,"_v");
										HX_STACK_LINE(74)
										Array< Float > te = _this3->elements;		HX_STACK_VAR(te,"te");
										HX_STACK_LINE(74)
										Float _x = _v->x;		HX_STACK_VAR(_x,"_x");
										HX_STACK_LINE(74)
										Float _y = _v->y;		HX_STACK_VAR(_y,"_y");
										HX_STACK_LINE(74)
										Float _z = _v->z;		HX_STACK_VAR(_z,"_z");
										HX_STACK_LINE(74)
										hx::MultEq(te[(int)0],_x);
										HX_STACK_LINE(74)
										hx::MultEq(te[(int)4],_y);
										HX_STACK_LINE(74)
										hx::MultEq(te[(int)8],_z);
										HX_STACK_LINE(74)
										hx::MultEq(te[(int)1],_x);
										HX_STACK_LINE(74)
										hx::MultEq(te[(int)5],_y);
										HX_STACK_LINE(74)
										hx::MultEq(te[(int)9],_z);
										HX_STACK_LINE(74)
										hx::MultEq(te[(int)2],_x);
										HX_STACK_LINE(74)
										hx::MultEq(te[(int)6],_y);
										HX_STACK_LINE(74)
										hx::MultEq(te[(int)10],_z);
										HX_STACK_LINE(74)
										hx::MultEq(te[(int)3],_x);
										HX_STACK_LINE(74)
										hx::MultEq(te[(int)7],_y);
										HX_STACK_LINE(74)
										hx::MultEq(te[(int)11],_z);
										HX_STACK_LINE(74)
										_this3;
									}
									HX_STACK_LINE(74)
									{
										HX_STACK_LINE(74)
										::phoenix::Matrix _this3 = _this2->local->matrix;		HX_STACK_VAR(_this3,"_this3");
										HX_STACK_LINE(74)
										{
											HX_STACK_LINE(74)
											Array< Float > ae = _this3->elements;		HX_STACK_VAR(ae,"ae");
											HX_STACK_LINE(74)
											Array< Float > be = _this2->_rotation_matrix->elements;		HX_STACK_VAR(be,"be");
											HX_STACK_LINE(74)
											Array< Float > te = _this3->elements;		HX_STACK_VAR(te,"te");
											HX_STACK_LINE(74)
											Float a11 = ae->__get((int)0);		HX_STACK_VAR(a11,"a11");
											HX_STACK_LINE(74)
											Float a12 = ae->__get((int)4);		HX_STACK_VAR(a12,"a12");
											HX_STACK_LINE(74)
											Float a13 = ae->__get((int)8);		HX_STACK_VAR(a13,"a13");
											HX_STACK_LINE(74)
											Float a14 = ae->__get((int)12);		HX_STACK_VAR(a14,"a14");
											HX_STACK_LINE(74)
											Float a21 = ae->__get((int)1);		HX_STACK_VAR(a21,"a21");
											HX_STACK_LINE(74)
											Float a22 = ae->__get((int)5);		HX_STACK_VAR(a22,"a22");
											HX_STACK_LINE(74)
											Float a23 = ae->__get((int)9);		HX_STACK_VAR(a23,"a23");
											HX_STACK_LINE(74)
											Float a24 = ae->__get((int)13);		HX_STACK_VAR(a24,"a24");
											HX_STACK_LINE(74)
											Float a31 = ae->__get((int)2);		HX_STACK_VAR(a31,"a31");
											HX_STACK_LINE(74)
											Float a32 = ae->__get((int)6);		HX_STACK_VAR(a32,"a32");
											HX_STACK_LINE(74)
											Float a33 = ae->__get((int)10);		HX_STACK_VAR(a33,"a33");
											HX_STACK_LINE(74)
											Float a34 = ae->__get((int)14);		HX_STACK_VAR(a34,"a34");
											HX_STACK_LINE(74)
											Float a41 = ae->__get((int)3);		HX_STACK_VAR(a41,"a41");
											HX_STACK_LINE(74)
											Float a42 = ae->__get((int)7);		HX_STACK_VAR(a42,"a42");
											HX_STACK_LINE(74)
											Float a43 = ae->__get((int)11);		HX_STACK_VAR(a43,"a43");
											HX_STACK_LINE(74)
											Float a44 = ae->__get((int)15);		HX_STACK_VAR(a44,"a44");
											HX_STACK_LINE(74)
											Float b11 = be->__get((int)0);		HX_STACK_VAR(b11,"b11");
											HX_STACK_LINE(74)
											Float b12 = be->__get((int)4);		HX_STACK_VAR(b12,"b12");
											HX_STACK_LINE(74)
											Float b13 = be->__get((int)8);		HX_STACK_VAR(b13,"b13");
											HX_STACK_LINE(74)
											Float b14 = be->__get((int)12);		HX_STACK_VAR(b14,"b14");
											HX_STACK_LINE(74)
											Float b21 = be->__get((int)1);		HX_STACK_VAR(b21,"b21");
											HX_STACK_LINE(74)
											Float b22 = be->__get((int)5);		HX_STACK_VAR(b22,"b22");
											HX_STACK_LINE(74)
											Float b23 = be->__get((int)9);		HX_STACK_VAR(b23,"b23");
											HX_STACK_LINE(74)
											Float b24 = be->__get((int)13);		HX_STACK_VAR(b24,"b24");
											HX_STACK_LINE(74)
											Float b31 = be->__get((int)2);		HX_STACK_VAR(b31,"b31");
											HX_STACK_LINE(74)
											Float b32 = be->__get((int)6);		HX_STACK_VAR(b32,"b32");
											HX_STACK_LINE(74)
											Float b33 = be->__get((int)10);		HX_STACK_VAR(b33,"b33");
											HX_STACK_LINE(74)
											Float b34 = be->__get((int)14);		HX_STACK_VAR(b34,"b34");
											HX_STACK_LINE(74)
											Float b41 = be->__get((int)3);		HX_STACK_VAR(b41,"b41");
											HX_STACK_LINE(74)
											Float b42 = be->__get((int)7);		HX_STACK_VAR(b42,"b42");
											HX_STACK_LINE(74)
											Float b43 = be->__get((int)11);		HX_STACK_VAR(b43,"b43");
											HX_STACK_LINE(74)
											Float b44 = be->__get((int)15);		HX_STACK_VAR(b44,"b44");
											HX_STACK_LINE(74)
											te[(int)0] = ((((a11 * b11) + (a12 * b21)) + (a13 * b31)) + (a14 * b41));
											HX_STACK_LINE(74)
											te[(int)4] = ((((a11 * b12) + (a12 * b22)) + (a13 * b32)) + (a14 * b42));
											HX_STACK_LINE(74)
											te[(int)8] = ((((a11 * b13) + (a12 * b23)) + (a13 * b33)) + (a14 * b43));
											HX_STACK_LINE(74)
											te[(int)12] = ((((a11 * b14) + (a12 * b24)) + (a13 * b34)) + (a14 * b44));
											HX_STACK_LINE(74)
											te[(int)1] = ((((a21 * b11) + (a22 * b21)) + (a23 * b31)) + (a24 * b41));
											HX_STACK_LINE(74)
											te[(int)5] = ((((a21 * b12) + (a22 * b22)) + (a23 * b32)) + (a24 * b42));
											HX_STACK_LINE(74)
											te[(int)9] = ((((a21 * b13) + (a22 * b23)) + (a23 * b33)) + (a24 * b43));
											HX_STACK_LINE(74)
											te[(int)13] = ((((a21 * b14) + (a22 * b24)) + (a23 * b34)) + (a24 * b44));
											HX_STACK_LINE(74)
											te[(int)2] = ((((a31 * b11) + (a32 * b21)) + (a33 * b31)) + (a34 * b41));
											HX_STACK_LINE(74)
											te[(int)6] = ((((a31 * b12) + (a32 * b22)) + (a33 * b32)) + (a34 * b42));
											HX_STACK_LINE(74)
											te[(int)10] = ((((a31 * b13) + (a32 * b23)) + (a33 * b33)) + (a34 * b43));
											HX_STACK_LINE(74)
											te[(int)14] = ((((a31 * b14) + (a32 * b24)) + (a33 * b34)) + (a34 * b44));
											HX_STACK_LINE(74)
											te[(int)3] = ((((a41 * b11) + (a42 * b21)) + (a43 * b31)) + (a44 * b41));
											HX_STACK_LINE(74)
											te[(int)7] = ((((a41 * b12) + (a42 * b22)) + (a43 * b32)) + (a44 * b42));
											HX_STACK_LINE(74)
											te[(int)11] = ((((a41 * b13) + (a42 * b23)) + (a43 * b33)) + (a44 * b43));
											HX_STACK_LINE(74)
											te[(int)15] = ((((a41 * b14) + (a42 * b24)) + (a43 * b34)) + (a44 * b44));
											HX_STACK_LINE(74)
											_this3;
										}
									}
									HX_STACK_LINE(74)
									{
										HX_STACK_LINE(74)
										::phoenix::Matrix _this3 = _this2->local->matrix;		HX_STACK_VAR(_this3,"_this3");
										HX_STACK_LINE(74)
										::phoenix::Vector _v = _this2->local->pos;		HX_STACK_VAR(_v,"_v");
										HX_STACK_LINE(74)
										Array< Float > te = _this3->elements;		HX_STACK_VAR(te,"te");
										HX_STACK_LINE(74)
										te[(int)12] = _v->x;
										HX_STACK_LINE(74)
										te[(int)13] = _v->y;
										HX_STACK_LINE(74)
										te[(int)14] = _v->z;
										HX_STACK_LINE(74)
										_this3;
									}
									HX_STACK_LINE(74)
									{
										HX_STACK_LINE(74)
										::phoenix::Matrix _this3 = _this2->local->matrix;		HX_STACK_VAR(_this3,"_this3");
										HX_STACK_LINE(74)
										{
											HX_STACK_LINE(74)
											Array< Float > ae = _this3->elements;		HX_STACK_VAR(ae,"ae");
											HX_STACK_LINE(74)
											Array< Float > be = _this2->_origin_undo_matrix->elements;		HX_STACK_VAR(be,"be");
											HX_STACK_LINE(74)
											Array< Float > te = _this3->elements;		HX_STACK_VAR(te,"te");
											HX_STACK_LINE(74)
											Float a11 = ae->__get((int)0);		HX_STACK_VAR(a11,"a11");
											HX_STACK_LINE(74)
											Float a12 = ae->__get((int)4);		HX_STACK_VAR(a12,"a12");
											HX_STACK_LINE(74)
											Float a13 = ae->__get((int)8);		HX_STACK_VAR(a13,"a13");
											HX_STACK_LINE(74)
											Float a14 = ae->__get((int)12);		HX_STACK_VAR(a14,"a14");
											HX_STACK_LINE(74)
											Float a21 = ae->__get((int)1);		HX_STACK_VAR(a21,"a21");
											HX_STACK_LINE(74)
											Float a22 = ae->__get((int)5);		HX_STACK_VAR(a22,"a22");
											HX_STACK_LINE(74)
											Float a23 = ae->__get((int)9);		HX_STACK_VAR(a23,"a23");
											HX_STACK_LINE(74)
											Float a24 = ae->__get((int)13);		HX_STACK_VAR(a24,"a24");
											HX_STACK_LINE(74)
											Float a31 = ae->__get((int)2);		HX_STACK_VAR(a31,"a31");
											HX_STACK_LINE(74)
											Float a32 = ae->__get((int)6);		HX_STACK_VAR(a32,"a32");
											HX_STACK_LINE(74)
											Float a33 = ae->__get((int)10);		HX_STACK_VAR(a33,"a33");
											HX_STACK_LINE(74)
											Float a34 = ae->__get((int)14);		HX_STACK_VAR(a34,"a34");
											HX_STACK_LINE(74)
											Float a41 = ae->__get((int)3);		HX_STACK_VAR(a41,"a41");
											HX_STACK_LINE(74)
											Float a42 = ae->__get((int)7);		HX_STACK_VAR(a42,"a42");
											HX_STACK_LINE(74)
											Float a43 = ae->__get((int)11);		HX_STACK_VAR(a43,"a43");
											HX_STACK_LINE(74)
											Float a44 = ae->__get((int)15);		HX_STACK_VAR(a44,"a44");
											HX_STACK_LINE(74)
											Float b11 = be->__get((int)0);		HX_STACK_VAR(b11,"b11");
											HX_STACK_LINE(74)
											Float b12 = be->__get((int)4);		HX_STACK_VAR(b12,"b12");
											HX_STACK_LINE(74)
											Float b13 = be->__get((int)8);		HX_STACK_VAR(b13,"b13");
											HX_STACK_LINE(74)
											Float b14 = be->__get((int)12);		HX_STACK_VAR(b14,"b14");
											HX_STACK_LINE(74)
											Float b21 = be->__get((int)1);		HX_STACK_VAR(b21,"b21");
											HX_STACK_LINE(74)
											Float b22 = be->__get((int)5);		HX_STACK_VAR(b22,"b22");
											HX_STACK_LINE(74)
											Float b23 = be->__get((int)9);		HX_STACK_VAR(b23,"b23");
											HX_STACK_LINE(74)
											Float b24 = be->__get((int)13);		HX_STACK_VAR(b24,"b24");
											HX_STACK_LINE(74)
											Float b31 = be->__get((int)2);		HX_STACK_VAR(b31,"b31");
											HX_STACK_LINE(74)
											Float b32 = be->__get((int)6);		HX_STACK_VAR(b32,"b32");
											HX_STACK_LINE(74)
											Float b33 = be->__get((int)10);		HX_STACK_VAR(b33,"b33");
											HX_STACK_LINE(74)
											Float b34 = be->__get((int)14);		HX_STACK_VAR(b34,"b34");
											HX_STACK_LINE(74)
											Float b41 = be->__get((int)3);		HX_STACK_VAR(b41,"b41");
											HX_STACK_LINE(74)
											Float b42 = be->__get((int)7);		HX_STACK_VAR(b42,"b42");
											HX_STACK_LINE(74)
											Float b43 = be->__get((int)11);		HX_STACK_VAR(b43,"b43");
											HX_STACK_LINE(74)
											Float b44 = be->__get((int)15);		HX_STACK_VAR(b44,"b44");
											HX_STACK_LINE(74)
											te[(int)0] = ((((a11 * b11) + (a12 * b21)) + (a13 * b31)) + (a14 * b41));
											HX_STACK_LINE(74)
											te[(int)4] = ((((a11 * b12) + (a12 * b22)) + (a13 * b32)) + (a14 * b42));
											HX_STACK_LINE(74)
											te[(int)8] = ((((a11 * b13) + (a12 * b23)) + (a13 * b33)) + (a14 * b43));
											HX_STACK_LINE(74)
											te[(int)12] = ((((a11 * b14) + (a12 * b24)) + (a13 * b34)) + (a14 * b44));
											HX_STACK_LINE(74)
											te[(int)1] = ((((a21 * b11) + (a22 * b21)) + (a23 * b31)) + (a24 * b41));
											HX_STACK_LINE(74)
											te[(int)5] = ((((a21 * b12) + (a22 * b22)) + (a23 * b32)) + (a24 * b42));
											HX_STACK_LINE(74)
											te[(int)9] = ((((a21 * b13) + (a22 * b23)) + (a23 * b33)) + (a24 * b43));
											HX_STACK_LINE(74)
											te[(int)13] = ((((a21 * b14) + (a22 * b24)) + (a23 * b34)) + (a24 * b44));
											HX_STACK_LINE(74)
											te[(int)2] = ((((a31 * b11) + (a32 * b21)) + (a33 * b31)) + (a34 * b41));
											HX_STACK_LINE(74)
											te[(int)6] = ((((a31 * b12) + (a32 * b22)) + (a33 * b32)) + (a34 * b42));
											HX_STACK_LINE(74)
											te[(int)10] = ((((a31 * b13) + (a32 * b23)) + (a33 * b33)) + (a34 * b43));
											HX_STACK_LINE(74)
											te[(int)14] = ((((a31 * b14) + (a32 * b24)) + (a33 * b34)) + (a34 * b44));
											HX_STACK_LINE(74)
											te[(int)3] = ((((a41 * b11) + (a42 * b21)) + (a43 * b31)) + (a44 * b41));
											HX_STACK_LINE(74)
											te[(int)7] = ((((a41 * b12) + (a42 * b22)) + (a43 * b32)) + (a44 * b42));
											HX_STACK_LINE(74)
											te[(int)11] = ((((a41 * b13) + (a42 * b23)) + (a43 * b33)) + (a44 * b43));
											HX_STACK_LINE(74)
											te[(int)15] = ((((a41 * b14) + (a42 * b24)) + (a43 * b34)) + (a44 * b44));
											HX_STACK_LINE(74)
											_this3;
										}
									}
									HX_STACK_LINE(74)
									if (((_this2->parent != null()))){
										HX_STACK_LINE(74)
										::phoenix::Spatial _this3 = _this2->get_world();		HX_STACK_VAR(_this3,"_this3");
										HX_STACK_LINE(74)
										::phoenix::Matrix _m1;		HX_STACK_VAR(_m1,"_m1");
										HX_STACK_LINE(74)
										{
											HX_STACK_LINE(74)
											::phoenix::Matrix _this4;		HX_STACK_VAR(_this4,"_this4");
											HX_STACK_LINE(74)
											{
												HX_STACK_LINE(74)
												::phoenix::Spatial _this5 = _this2->get_world();		HX_STACK_VAR(_this5,"_this5");
												HX_STACK_LINE(74)
												_this4 = _this5->matrix;
											}
											HX_STACK_LINE(74)
											::phoenix::Matrix _a;		HX_STACK_VAR(_a,"_a");
											HX_STACK_LINE(74)
											{
												HX_STACK_LINE(74)
												::phoenix::Spatial _this5 = _this2->parent->get_world();		HX_STACK_VAR(_this5,"_this5");
												HX_STACK_LINE(74)
												_a = _this5->matrix;
											}
											HX_STACK_LINE(74)
											Array< Float > ae = _a->elements;		HX_STACK_VAR(ae,"ae");
											HX_STACK_LINE(74)
											Array< Float > be = _this2->local->matrix->elements;		HX_STACK_VAR(be,"be");
											HX_STACK_LINE(74)
											Array< Float > te = _this4->elements;		HX_STACK_VAR(te,"te");
											HX_STACK_LINE(74)
											Float a11 = ae->__get((int)0);		HX_STACK_VAR(a11,"a11");
											HX_STACK_LINE(74)
											Float a12 = ae->__get((int)4);		HX_STACK_VAR(a12,"a12");
											HX_STACK_LINE(74)
											Float a13 = ae->__get((int)8);		HX_STACK_VAR(a13,"a13");
											HX_STACK_LINE(74)
											Float a14 = ae->__get((int)12);		HX_STACK_VAR(a14,"a14");
											HX_STACK_LINE(74)
											Float a21 = ae->__get((int)1);		HX_STACK_VAR(a21,"a21");
											HX_STACK_LINE(74)
											Float a22 = ae->__get((int)5);		HX_STACK_VAR(a22,"a22");
											HX_STACK_LINE(74)
											Float a23 = ae->__get((int)9);		HX_STACK_VAR(a23,"a23");
											HX_STACK_LINE(74)
											Float a24 = ae->__get((int)13);		HX_STACK_VAR(a24,"a24");
											HX_STACK_LINE(74)
											Float a31 = ae->__get((int)2);		HX_STACK_VAR(a31,"a31");
											HX_STACK_LINE(74)
											Float a32 = ae->__get((int)6);		HX_STACK_VAR(a32,"a32");
											HX_STACK_LINE(74)
											Float a33 = ae->__get((int)10);		HX_STACK_VAR(a33,"a33");
											HX_STACK_LINE(74)
											Float a34 = ae->__get((int)14);		HX_STACK_VAR(a34,"a34");
											HX_STACK_LINE(74)
											Float a41 = ae->__get((int)3);		HX_STACK_VAR(a41,"a41");
											HX_STACK_LINE(74)
											Float a42 = ae->__get((int)7);		HX_STACK_VAR(a42,"a42");
											HX_STACK_LINE(74)
											Float a43 = ae->__get((int)11);		HX_STACK_VAR(a43,"a43");
											HX_STACK_LINE(74)
											Float a44 = ae->__get((int)15);		HX_STACK_VAR(a44,"a44");
											HX_STACK_LINE(74)
											Float b11 = be->__get((int)0);		HX_STACK_VAR(b11,"b11");
											HX_STACK_LINE(74)
											Float b12 = be->__get((int)4);		HX_STACK_VAR(b12,"b12");
											HX_STACK_LINE(74)
											Float b13 = be->__get((int)8);		HX_STACK_VAR(b13,"b13");
											HX_STACK_LINE(74)
											Float b14 = be->__get((int)12);		HX_STACK_VAR(b14,"b14");
											HX_STACK_LINE(74)
											Float b21 = be->__get((int)1);		HX_STACK_VAR(b21,"b21");
											HX_STACK_LINE(74)
											Float b22 = be->__get((int)5);		HX_STACK_VAR(b22,"b22");
											HX_STACK_LINE(74)
											Float b23 = be->__get((int)9);		HX_STACK_VAR(b23,"b23");
											HX_STACK_LINE(74)
											Float b24 = be->__get((int)13);		HX_STACK_VAR(b24,"b24");
											HX_STACK_LINE(74)
											Float b31 = be->__get((int)2);		HX_STACK_VAR(b31,"b31");
											HX_STACK_LINE(74)
											Float b32 = be->__get((int)6);		HX_STACK_VAR(b32,"b32");
											HX_STACK_LINE(74)
											Float b33 = be->__get((int)10);		HX_STACK_VAR(b33,"b33");
											HX_STACK_LINE(74)
											Float b34 = be->__get((int)14);		HX_STACK_VAR(b34,"b34");
											HX_STACK_LINE(74)
											Float b41 = be->__get((int)3);		HX_STACK_VAR(b41,"b41");
											HX_STACK_LINE(74)
											Float b42 = be->__get((int)7);		HX_STACK_VAR(b42,"b42");
											HX_STACK_LINE(74)
											Float b43 = be->__get((int)11);		HX_STACK_VAR(b43,"b43");
											HX_STACK_LINE(74)
											Float b44 = be->__get((int)15);		HX_STACK_VAR(b44,"b44");
											HX_STACK_LINE(74)
											te[(int)0] = ((((a11 * b11) + (a12 * b21)) + (a13 * b31)) + (a14 * b41));
											HX_STACK_LINE(74)
											te[(int)4] = ((((a11 * b12) + (a12 * b22)) + (a13 * b32)) + (a14 * b42));
											HX_STACK_LINE(74)
											te[(int)8] = ((((a11 * b13) + (a12 * b23)) + (a13 * b33)) + (a14 * b43));
											HX_STACK_LINE(74)
											te[(int)12] = ((((a11 * b14) + (a12 * b24)) + (a13 * b34)) + (a14 * b44));
											HX_STACK_LINE(74)
											te[(int)1] = ((((a21 * b11) + (a22 * b21)) + (a23 * b31)) + (a24 * b41));
											HX_STACK_LINE(74)
											te[(int)5] = ((((a21 * b12) + (a22 * b22)) + (a23 * b32)) + (a24 * b42));
											HX_STACK_LINE(74)
											te[(int)9] = ((((a21 * b13) + (a22 * b23)) + (a23 * b33)) + (a24 * b43));
											HX_STACK_LINE(74)
											te[(int)13] = ((((a21 * b14) + (a22 * b24)) + (a23 * b34)) + (a24 * b44));
											HX_STACK_LINE(74)
											te[(int)2] = ((((a31 * b11) + (a32 * b21)) + (a33 * b31)) + (a34 * b41));
											HX_STACK_LINE(74)
											te[(int)6] = ((((a31 * b12) + (a32 * b22)) + (a33 * b32)) + (a34 * b42));
											HX_STACK_LINE(74)
											te[(int)10] = ((((a31 * b13) + (a32 * b23)) + (a33 * b33)) + (a34 * b43));
											HX_STACK_LINE(74)
											te[(int)14] = ((((a31 * b14) + (a32 * b24)) + (a33 * b34)) + (a34 * b44));
											HX_STACK_LINE(74)
											te[(int)3] = ((((a41 * b11) + (a42 * b21)) + (a43 * b31)) + (a44 * b41));
											HX_STACK_LINE(74)
											te[(int)7] = ((((a41 * b12) + (a42 * b22)) + (a43 * b32)) + (a44 * b42));
											HX_STACK_LINE(74)
											te[(int)11] = ((((a41 * b13) + (a42 * b23)) + (a43 * b33)) + (a44 * b43));
											HX_STACK_LINE(74)
											te[(int)15] = ((((a41 * b14) + (a42 * b24)) + (a43 * b34)) + (a44 * b44));
											HX_STACK_LINE(74)
											_m1 = _this4;
										}
										HX_STACK_LINE(74)
										_this3->matrix = _m1;
										HX_STACK_LINE(74)
										if (((_m1 != null()))){
											HX_STACK_LINE(74)
											::snow::platform::native::utils::Float32Array _g7;		HX_STACK_VAR(_g7,"_g7");
											HX_STACK_LINE(74)
											{
												HX_STACK_LINE(74)
												::phoenix::Matrix _this4 = _this3->matrix;		HX_STACK_VAR(_this4,"_this4");
												HX_STACK_LINE(74)
												{
													HX_STACK_LINE(74)
													::snow::platform::native::utils::Float32Array _this5 = _this4->_float32array;		HX_STACK_VAR(_this5,"_this5");
													HX_STACK_LINE(74)
													Dynamic bufferOrArray = _this4->elements;		HX_STACK_VAR(bufferOrArray,"bufferOrArray");
													HX_STACK_LINE(74)
													int offset = (int)0;		HX_STACK_VAR(offset,"offset");
													HX_STACK_LINE(74)
													if ((::Std_obj::is(bufferOrArray,hx::ClassOf< Array<int> >()))){
														HX_STACK_LINE(74)
														Array< Float > floats = bufferOrArray;		HX_STACK_VAR(floats,"floats");
														HX_STACK_LINE(74)
														{
															HX_STACK_LINE(74)
															int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
															HX_STACK_LINE(74)
															int _g2 = floats->length;		HX_STACK_VAR(_g2,"_g2");
															HX_STACK_LINE(74)
															while((true)){
																HX_STACK_LINE(74)
																if ((!(((_g1 < _g2))))){
																	HX_STACK_LINE(74)
																	break;
																}
																HX_STACK_LINE(74)
																int i1 = (_g1)++;		HX_STACK_VAR(i1,"i1");
																HX_STACK_LINE(74)
																::__hxcpp_memory_set_float(_this5->bytes,(((int((i1 + offset)) << int((int)2))) + _this5->byteOffset),floats->__get(i1));
															}
														}
													}
													else{
														HX_STACK_LINE(74)
														if ((::Std_obj::is(bufferOrArray,hx::ClassOf< ::snow::platform::native::utils::Float32Array >()))){
															HX_STACK_LINE(74)
															::snow::platform::native::utils::Float32Array floats = bufferOrArray;		HX_STACK_VAR(floats,"floats");
															HX_STACK_LINE(74)
															{
																HX_STACK_LINE(74)
																int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
																HX_STACK_LINE(74)
																int _g2 = floats->length;		HX_STACK_VAR(_g2,"_g2");
																HX_STACK_LINE(74)
																while((true)){
																	HX_STACK_LINE(74)
																	if ((!(((_g1 < _g2))))){
																		HX_STACK_LINE(74)
																		break;
																	}
																	HX_STACK_LINE(74)
																	int i1 = (_g1)++;		HX_STACK_VAR(i1,"i1");
																	HX_STACK_LINE(74)
																	::__hxcpp_memory_set_float(_this5->bytes,(((int((i1 + offset)) << int((int)2))) + _this5->byteOffset),floats->__get(i1));
																}
															}
														}
														else{
															HX_STACK_LINE(74)
															HX_STACK_DO_THROW(HX_CSTRING("Invalid input buffer"));
														}
													}
												}
												HX_STACK_LINE(74)
												_g7 = ::snow::platform::native::utils::Float32Array_obj::__new(_this4->_float32array,null(),null());
											}
											HX_STACK_LINE(74)
											_this3->floats = _g7;
										}
										HX_STACK_LINE(74)
										_this3->matrix;
									}
									else{
										HX_STACK_LINE(74)
										::phoenix::Spatial _this3 = _this2->get_world();		HX_STACK_VAR(_this3,"_this3");
										HX_STACK_LINE(74)
										::phoenix::Matrix _m1;		HX_STACK_VAR(_m1,"_m1");
										HX_STACK_LINE(74)
										{
											HX_STACK_LINE(74)
											Array< Float > te = _this2->local->matrix->elements;		HX_STACK_VAR(te,"te");
											HX_STACK_LINE(74)
											_m1 = ::phoenix::Matrix_obj::__new(te->__get((int)0),te->__get((int)4),te->__get((int)8),te->__get((int)12),te->__get((int)1),te->__get((int)5),te->__get((int)9),te->__get((int)13),te->__get((int)2),te->__get((int)6),te->__get((int)10),te->__get((int)14),te->__get((int)3),te->__get((int)7),te->__get((int)11),te->__get((int)15));
										}
										HX_STACK_LINE(74)
										_this3->matrix = _m1;
										HX_STACK_LINE(74)
										if (((_m1 != null()))){
											HX_STACK_LINE(74)
											::snow::platform::native::utils::Float32Array _g8;		HX_STACK_VAR(_g8,"_g8");
											HX_STACK_LINE(74)
											{
												HX_STACK_LINE(74)
												::phoenix::Matrix _this4 = _this3->matrix;		HX_STACK_VAR(_this4,"_this4");
												HX_STACK_LINE(74)
												{
													HX_STACK_LINE(74)
													::snow::platform::native::utils::Float32Array _this5 = _this4->_float32array;		HX_STACK_VAR(_this5,"_this5");
													HX_STACK_LINE(74)
													Dynamic bufferOrArray = _this4->elements;		HX_STACK_VAR(bufferOrArray,"bufferOrArray");
													HX_STACK_LINE(74)
													int offset = (int)0;		HX_STACK_VAR(offset,"offset");
													HX_STACK_LINE(74)
													if ((::Std_obj::is(bufferOrArray,hx::ClassOf< Array<int> >()))){
														HX_STACK_LINE(74)
														Array< Float > floats = bufferOrArray;		HX_STACK_VAR(floats,"floats");
														HX_STACK_LINE(74)
														{
															HX_STACK_LINE(74)
															int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
															HX_STACK_LINE(74)
															int _g2 = floats->length;		HX_STACK_VAR(_g2,"_g2");
															HX_STACK_LINE(74)
															while((true)){
																HX_STACK_LINE(74)
																if ((!(((_g1 < _g2))))){
																	HX_STACK_LINE(74)
																	break;
																}
																HX_STACK_LINE(74)
																int i1 = (_g1)++;		HX_STACK_VAR(i1,"i1");
																HX_STACK_LINE(74)
																::__hxcpp_memory_set_float(_this5->bytes,(((int((i1 + offset)) << int((int)2))) + _this5->byteOffset),floats->__get(i1));
															}
														}
													}
													else{
														HX_STACK_LINE(74)
														if ((::Std_obj::is(bufferOrArray,hx::ClassOf< ::snow::platform::native::utils::Float32Array >()))){
															HX_STACK_LINE(74)
															::snow::platform::native::utils::Float32Array floats = bufferOrArray;		HX_STACK_VAR(floats,"floats");
															HX_STACK_LINE(74)
															{
																HX_STACK_LINE(74)
																int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
																HX_STACK_LINE(74)
																int _g2 = floats->length;		HX_STACK_VAR(_g2,"_g2");
																HX_STACK_LINE(74)
																while((true)){
																	HX_STACK_LINE(74)
																	if ((!(((_g1 < _g2))))){
																		HX_STACK_LINE(74)
																		break;
																	}
																	HX_STACK_LINE(74)
																	int i1 = (_g1)++;		HX_STACK_VAR(i1,"i1");
																	HX_STACK_LINE(74)
																	::__hxcpp_memory_set_float(_this5->bytes,(((int((i1 + offset)) << int((int)2))) + _this5->byteOffset),floats->__get(i1));
																}
															}
														}
														else{
															HX_STACK_LINE(74)
															HX_STACK_DO_THROW(HX_CSTRING("Invalid input buffer"));
														}
													}
												}
												HX_STACK_LINE(74)
												_g8 = ::snow::platform::native::utils::Float32Array_obj::__new(_this4->_float32array,null(),null());
											}
											HX_STACK_LINE(74)
											_this3->floats = _g8;
										}
										HX_STACK_LINE(74)
										_this3->matrix;
									}
									HX_STACK_LINE(74)
									{
										HX_STACK_LINE(74)
										::phoenix::Spatial _this3 = _this2->get_world();		HX_STACK_VAR(_this3,"_this3");
										HX_STACK_LINE(74)
										if ((_this3->auto_decompose)){
											HX_STACK_LINE(74)
											::phoenix::MatrixTransform _transform;		HX_STACK_VAR(_transform,"_transform");
											HX_STACK_LINE(74)
											{
												HX_STACK_LINE(74)
												::phoenix::Matrix _this4 = _this3->matrix;		HX_STACK_VAR(_this4,"_this4");
												HX_STACK_LINE(74)
												::phoenix::Vector _position = null();		HX_STACK_VAR(_position,"_position");
												HX_STACK_LINE(74)
												::phoenix::Quaternion _quaternion = null();		HX_STACK_VAR(_quaternion,"_quaternion");
												HX_STACK_LINE(74)
												::phoenix::Vector _scale = null();		HX_STACK_VAR(_scale,"_scale");
												HX_STACK_LINE(74)
												Array< Float > te = _this4->elements;		HX_STACK_VAR(te,"te");
												HX_STACK_LINE(74)
												::phoenix::Matrix matrix = ::phoenix::Matrix_obj::__new(null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(matrix,"matrix");
												HX_STACK_LINE(74)
												Float _ax_x = te->__get((int)0);		HX_STACK_VAR(_ax_x,"_ax_x");
												HX_STACK_LINE(74)
												Float _ax_y = te->__get((int)1);		HX_STACK_VAR(_ax_y,"_ax_y");
												HX_STACK_LINE(74)
												Float _ax_z = te->__get((int)2);		HX_STACK_VAR(_ax_z,"_ax_z");
												HX_STACK_LINE(74)
												Float _ay_x = te->__get((int)4);		HX_STACK_VAR(_ay_x,"_ay_x");
												HX_STACK_LINE(74)
												Float _ay_y = te->__get((int)5);		HX_STACK_VAR(_ay_y,"_ay_y");
												HX_STACK_LINE(74)
												Float _ay_z = te->__get((int)6);		HX_STACK_VAR(_ay_z,"_ay_z");
												HX_STACK_LINE(74)
												Float _az_x = te->__get((int)8);		HX_STACK_VAR(_az_x,"_az_x");
												HX_STACK_LINE(74)
												Float _az_y = te->__get((int)9);		HX_STACK_VAR(_az_y,"_az_y");
												HX_STACK_LINE(74)
												Float _az_z = te->__get((int)10);		HX_STACK_VAR(_az_z,"_az_z");
												HX_STACK_LINE(74)
												Float _ax_length = ::Math_obj::sqrt((((_ax_x * _ax_x) + (_ax_y * _ax_y)) + (_ax_z * _ax_z)));		HX_STACK_VAR(_ax_length,"_ax_length");
												HX_STACK_LINE(74)
												Float _ay_length = ::Math_obj::sqrt((((_ay_x * _ay_x) + (_ay_y * _ay_y)) + (_ay_z * _ay_z)));		HX_STACK_VAR(_ay_length,"_ay_length");
												HX_STACK_LINE(74)
												Float _az_length = ::Math_obj::sqrt((((_az_x * _az_x) + (_az_y * _az_y)) + (_az_z * _az_z)));		HX_STACK_VAR(_az_length,"_az_length");
												HX_STACK_LINE(74)
												if (((_quaternion == null()))){
													HX_STACK_LINE(74)
													::phoenix::Quaternion _g9 = ::phoenix::Quaternion_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(_g9,"_g9");
													HX_STACK_LINE(74)
													_quaternion = _g9;
												}
												HX_STACK_LINE(74)
												if (((_position == null()))){
													HX_STACK_LINE(74)
													::phoenix::Vector _g10 = ::phoenix::Vector_obj::__new(te->__get((int)12),te->__get((int)13),te->__get((int)14),null());		HX_STACK_VAR(_g10,"_g10");
													HX_STACK_LINE(74)
													_position = _g10;
												}
												else{
													HX_STACK_LINE(74)
													{
														HX_STACK_LINE(74)
														Float _x = te->__get((int)12);		HX_STACK_VAR(_x,"_x");
														HX_STACK_LINE(74)
														_position->x = _x;
														HX_STACK_LINE(74)
														if ((_position->_construct)){
															HX_STACK_LINE(74)
															_position->x;
														}
														else{
															HX_STACK_LINE(74)
															if (((bool((_position->listen_x != null())) && bool(!(_position->ignore_listeners))))){
																HX_STACK_LINE(74)
																_position->listen_x(_x);
															}
															HX_STACK_LINE(74)
															_position->x;
														}
													}
													HX_STACK_LINE(74)
													{
														HX_STACK_LINE(74)
														Float _y = te->__get((int)13);		HX_STACK_VAR(_y,"_y");
														HX_STACK_LINE(74)
														_position->y = _y;
														HX_STACK_LINE(74)
														if ((_position->_construct)){
															HX_STACK_LINE(74)
															_position->y;
														}
														else{
															HX_STACK_LINE(74)
															if (((bool((_position->listen_y != null())) && bool(!(_position->ignore_listeners))))){
																HX_STACK_LINE(74)
																_position->listen_y(_y);
															}
															HX_STACK_LINE(74)
															_position->y;
														}
													}
													HX_STACK_LINE(74)
													{
														HX_STACK_LINE(74)
														Float _z = te->__get((int)14);		HX_STACK_VAR(_z,"_z");
														HX_STACK_LINE(74)
														_position->z = _z;
														HX_STACK_LINE(74)
														if ((_position->_construct)){
															HX_STACK_LINE(74)
															_position->z;
														}
														else{
															HX_STACK_LINE(74)
															if (((bool((_position->listen_z != null())) && bool(!(_position->ignore_listeners))))){
																HX_STACK_LINE(74)
																_position->listen_z(_z);
															}
															HX_STACK_LINE(74)
															_position->z;
														}
													}
												}
												HX_STACK_LINE(74)
												if (((_scale == null()))){
													HX_STACK_LINE(74)
													::phoenix::Vector _g11 = ::phoenix::Vector_obj::__new(_ax_length,_ay_length,_az_length,null());		HX_STACK_VAR(_g11,"_g11");
													HX_STACK_LINE(74)
													_scale = _g11;
												}
												else{
													HX_STACK_LINE(74)
													{
														HX_STACK_LINE(74)
														_scale->x = _ax_length;
														HX_STACK_LINE(74)
														if ((_scale->_construct)){
															HX_STACK_LINE(74)
															_scale->x;
														}
														else{
															HX_STACK_LINE(74)
															if (((bool((_scale->listen_x != null())) && bool(!(_scale->ignore_listeners))))){
																HX_STACK_LINE(74)
																_scale->listen_x(_ax_length);
															}
															HX_STACK_LINE(74)
															_scale->x;
														}
													}
													HX_STACK_LINE(74)
													{
														HX_STACK_LINE(74)
														_scale->y = _ay_length;
														HX_STACK_LINE(74)
														if ((_scale->_construct)){
															HX_STACK_LINE(74)
															_scale->y;
														}
														else{
															HX_STACK_LINE(74)
															if (((bool((_scale->listen_y != null())) && bool(!(_scale->ignore_listeners))))){
																HX_STACK_LINE(74)
																_scale->listen_y(_ay_length);
															}
															HX_STACK_LINE(74)
															_scale->y;
														}
													}
													HX_STACK_LINE(74)
													{
														HX_STACK_LINE(74)
														_scale->z = _az_length;
														HX_STACK_LINE(74)
														if ((_scale->_construct)){
															HX_STACK_LINE(74)
															_scale->z;
														}
														else{
															HX_STACK_LINE(74)
															if (((bool((_scale->listen_z != null())) && bool(!(_scale->ignore_listeners))))){
																HX_STACK_LINE(74)
																_scale->listen_z(_az_length);
															}
															HX_STACK_LINE(74)
															_scale->z;
														}
													}
												}
												HX_STACK_LINE(74)
												Array< Float > _g12 = _this4->elements->concat(Array_obj< Float >::__new());		HX_STACK_VAR(_g12,"_g12");
												HX_STACK_LINE(74)
												matrix->elements = _g12;
												HX_STACK_LINE(74)
												Array< Float > me = matrix->elements;		HX_STACK_VAR(me,"me");
												HX_STACK_LINE(74)
												hx::DivEq(me[(int)0],_ax_length);
												HX_STACK_LINE(74)
												hx::DivEq(me[(int)1],_ax_length);
												HX_STACK_LINE(74)
												hx::DivEq(me[(int)2],_ax_length);
												HX_STACK_LINE(74)
												hx::DivEq(me[(int)4],_ay_length);
												HX_STACK_LINE(74)
												hx::DivEq(me[(int)5],_ay_length);
												HX_STACK_LINE(74)
												hx::DivEq(me[(int)6],_ay_length);
												HX_STACK_LINE(74)
												hx::DivEq(me[(int)8],_az_length);
												HX_STACK_LINE(74)
												hx::DivEq(me[(int)9],_az_length);
												HX_STACK_LINE(74)
												hx::DivEq(me[(int)10],_az_length);
												HX_STACK_LINE(74)
												_quaternion->setFromRotationMatrix(matrix);
												HX_STACK_LINE(74)
												if (((_this4->_transform == null()))){
													HX_STACK_LINE(74)
													::phoenix::MatrixTransform _g13 = ::phoenix::MatrixTransform_obj::__new(_position,_quaternion,_scale);		HX_STACK_VAR(_g13,"_g13");
													HX_STACK_LINE(74)
													_this4->_transform = _g13;
												}
												else{
													HX_STACK_LINE(74)
													_this4->_transform->pos = _position;
													HX_STACK_LINE(74)
													_this4->_transform->rotation = _quaternion;
													HX_STACK_LINE(74)
													_this4->_transform->scale = _scale;
												}
												HX_STACK_LINE(74)
												_transform = _this4->_transform;
											}
											HX_STACK_LINE(74)
											{
												HX_STACK_LINE(74)
												::phoenix::Vector _p = _transform->pos;		HX_STACK_VAR(_p,"_p");
												HX_STACK_LINE(74)
												_this3->pos = _p;
												HX_STACK_LINE(74)
												if (((_p != null()))){
													HX_STACK_LINE(74)
													::phoenix::Vector_obj::Listen(_this3->pos,_this3->_pos_change_dyn());
													HX_STACK_LINE(74)
													if (((bool((_this3->pos_changed != null())) && bool(!(_this3->ignore_listeners))))){
														HX_STACK_LINE(74)
														_this3->pos_changed(_this3->pos);
													}
												}
												HX_STACK_LINE(74)
												_this3->pos;
											}
											HX_STACK_LINE(74)
											{
												HX_STACK_LINE(74)
												::phoenix::Quaternion _r = _transform->rotation;		HX_STACK_VAR(_r,"_r");
												HX_STACK_LINE(74)
												_this3->rotation = _r;
												HX_STACK_LINE(74)
												if (((_r != null()))){
													HX_STACK_LINE(74)
													{
														HX_STACK_LINE(74)
														::phoenix::Quaternion _q = _this3->rotation;		HX_STACK_VAR(_q,"_q");
														HX_STACK_LINE(74)
														Dynamic listener = _this3->_rotation_change_dyn();		HX_STACK_VAR(listener,"listener");
														HX_STACK_LINE(74)
														_q->listen_x = listener;
														HX_STACK_LINE(74)
														_q->listen_y = listener;
														HX_STACK_LINE(74)
														_q->listen_z = listener;
														HX_STACK_LINE(74)
														_q->listen_w = listener;
													}
													HX_STACK_LINE(74)
													if (((bool((_this3->rotation_changed != null())) && bool(!(_this3->ignore_listeners))))){
														HX_STACK_LINE(74)
														_this3->rotation_changed(_this3->rotation);
													}
												}
												HX_STACK_LINE(74)
												_this3->rotation;
											}
											HX_STACK_LINE(74)
											{
												HX_STACK_LINE(74)
												::phoenix::Vector _s = _transform->scale;		HX_STACK_VAR(_s,"_s");
												HX_STACK_LINE(74)
												_this3->scale = _s;
												HX_STACK_LINE(74)
												if (((_s != null()))){
													HX_STACK_LINE(74)
													::phoenix::Vector_obj::Listen(_this3->scale,_this3->_scale_change_dyn());
													HX_STACK_LINE(74)
													if (((bool((_this3->scale_changed != null())) && bool(!(_this3->ignore_listeners))))){
														HX_STACK_LINE(74)
														_this3->scale_changed(_this3->scale);
													}
												}
												HX_STACK_LINE(74)
												_this3->scale;
											}
										}
										HX_STACK_LINE(74)
										_this3;
									}
									HX_STACK_LINE(74)
									{
										HX_STACK_LINE(74)
										_this2->dirty = false;
										HX_STACK_LINE(74)
										if (((bool((bool((bool(_this2->dirty) && bool(!(_this2->_setup)))) && bool((_this2->_dirty_handlers != null())))) && bool((_this2->_dirty_handlers->__Field(HX_CSTRING("length"),true) > (int)0))))){
											HX_STACK_LINE(74)
											int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
											HX_STACK_LINE(74)
											Dynamic _g11 = _this2->_dirty_handlers;		HX_STACK_VAR(_g11,"_g11");
											HX_STACK_LINE(74)
											while((true)){
												HX_STACK_LINE(74)
												if ((!(((_g1 < _g11->__Field(HX_CSTRING("length"),true)))))){
													HX_STACK_LINE(74)
													break;
												}
												HX_STACK_LINE(74)
												Dynamic _handler = _g11->__GetItem(_g1);		HX_STACK_VAR(_handler,"_handler");
												HX_STACK_LINE(74)
												++(_g1);
												HX_STACK_LINE(74)
												if (((_handler != null()))){
													HX_STACK_LINE(74)
													_handler(_this2).Cast< Void >();
												}
											}
										}
										HX_STACK_LINE(74)
										_this2->dirty;
									}
									HX_STACK_LINE(74)
									_this2->_cleaning = false;
									HX_STACK_LINE(74)
									if (((bool((_this2->_clean_handlers != null())) && bool((_this2->_clean_handlers->__Field(HX_CSTRING("length"),true) > (int)0))))){
										HX_STACK_LINE(74)
										int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
										HX_STACK_LINE(74)
										Dynamic _g11 = _this2->_clean_handlers;		HX_STACK_VAR(_g11,"_g11");
										HX_STACK_LINE(74)
										while((true)){
											HX_STACK_LINE(74)
											if ((!(((_g1 < _g11->__Field(HX_CSTRING("length"),true)))))){
												HX_STACK_LINE(74)
												break;
											}
											HX_STACK_LINE(74)
											Dynamic _handler = _g11->__GetItem(_g1);		HX_STACK_VAR(_handler,"_handler");
											HX_STACK_LINE(74)
											++(_g1);
											HX_STACK_LINE(74)
											if (((_handler != null()))){
												HX_STACK_LINE(74)
												_handler(_this2).Cast< Void >();
											}
										}
									}
								}
							}
						}
						HX_STACK_LINE(74)
						_this1 = _this2->world;
					}
					HX_STACK_LINE(74)
					_m = _this1->matrix;
				}
				HX_STACK_LINE(74)
				Float _x = _this->x;		HX_STACK_VAR(_x,"_x");
				HX_STACK_LINE(74)
				Float _y = _this->y;		HX_STACK_VAR(_y,"_y");
				HX_STACK_LINE(74)
				Float _z = _this->z;		HX_STACK_VAR(_z,"_z");
				HX_STACK_LINE(74)
				Array< Float > e = _m->elements;		HX_STACK_VAR(e,"e");
				HX_STACK_LINE(74)
				{
					HX_STACK_LINE(74)
					Float _x1 = ((((e->__get((int)0) * _x) + (e->__get((int)4) * _y)) + (e->__get((int)8) * _z)) + e->__get((int)12));		HX_STACK_VAR(_x1,"_x1");
					HX_STACK_LINE(74)
					Float _y1 = ((((e->__get((int)1) * _x) + (e->__get((int)5) * _y)) + (e->__get((int)9) * _z)) + e->__get((int)13));		HX_STACK_VAR(_y1,"_y1");
					HX_STACK_LINE(74)
					Float _z1 = ((((e->__get((int)2) * _x) + (e->__get((int)6) * _y)) + (e->__get((int)10) * _z)) + e->__get((int)14));		HX_STACK_VAR(_z1,"_z1");
					HX_STACK_LINE(74)
					bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
					HX_STACK_LINE(74)
					_this->ignore_listeners = true;
					HX_STACK_LINE(74)
					{
						HX_STACK_LINE(74)
						_this->x = _x1;
						HX_STACK_LINE(74)
						if ((_this->_construct)){
							HX_STACK_LINE(74)
							_this->x;
						}
						else{
							HX_STACK_LINE(74)
							if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
								HX_STACK_LINE(74)
								_this->listen_x(_x1);
							}
							HX_STACK_LINE(74)
							_this->x;
						}
					}
					HX_STACK_LINE(74)
					{
						HX_STACK_LINE(74)
						_this->y = _y1;
						HX_STACK_LINE(74)
						if ((_this->_construct)){
							HX_STACK_LINE(74)
							_this->y;
						}
						else{
							HX_STACK_LINE(74)
							if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
								HX_STACK_LINE(74)
								_this->listen_y(_y1);
							}
							HX_STACK_LINE(74)
							_this->y;
						}
					}
					HX_STACK_LINE(74)
					{
						HX_STACK_LINE(74)
						_this->z = _z1;
						HX_STACK_LINE(74)
						if ((_this->_construct)){
							HX_STACK_LINE(74)
							_this->z;
						}
						else{
							HX_STACK_LINE(74)
							if (((bool((_this->listen_z != null())) && bool(!(_this->ignore_listeners))))){
								HX_STACK_LINE(74)
								_this->listen_z(_z1);
							}
							HX_STACK_LINE(74)
							_this->z;
						}
					}
					HX_STACK_LINE(74)
					_this->ignore_listeners = prev;
					HX_STACK_LINE(74)
					if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
						HX_STACK_LINE(74)
						_this->listen_x(_this->x);
					}
					HX_STACK_LINE(74)
					if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
						HX_STACK_LINE(74)
						_this->listen_y(_this->y);
					}
					HX_STACK_LINE(74)
					if (((bool((_this->listen_z != null())) && bool(!(_this->ignore_listeners))))){
						HX_STACK_LINE(74)
						_this->listen_z(_this->z);
					}
					HX_STACK_LINE(74)
					_this;
				}
				HX_STACK_LINE(74)
				_vert_i_pos = _this;
			}
			HX_STACK_LINE(75)
			::phoenix::Vector _vert_j_pos;		HX_STACK_VAR(_vert_j_pos,"_vert_j_pos");
			HX_STACK_LINE(75)
			{
				HX_STACK_LINE(75)
				::phoenix::Vector _this;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(75)
				{
					HX_STACK_LINE(75)
					::phoenix::Vector _this1 = _geometry->vertices->__get(j).StaticCast< ::phoenix::geometry::Vertex >()->pos;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(75)
					_this = ::phoenix::Vector_obj::__new(_this1->x,_this1->y,_this1->z,_this1->w);
				}
				HX_STACK_LINE(75)
				::phoenix::Matrix _m;		HX_STACK_VAR(_m,"_m");
				HX_STACK_LINE(75)
				{
					HX_STACK_LINE(75)
					::phoenix::Spatial _this1;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(75)
					{
						HX_STACK_LINE(75)
						::phoenix::Transform _this2 = _geometry->transform;		HX_STACK_VAR(_this2,"_this2");
						HX_STACK_LINE(75)
						if ((!(_this2->_destroying))){
							HX_STACK_LINE(75)
							if (((_this2->parent != null()))){
								HX_STACK_LINE(75)
								if ((_this2->parent->dirty)){
									HX_STACK_LINE(75)
									::phoenix::Transform _this3 = _this2->parent;		HX_STACK_VAR(_this3,"_this3");
									HX_STACK_LINE(75)
									if ((!(_this3->dirty))){
										HX_STACK_LINE(75)
										Dynamic();
									}
									else{
										HX_STACK_LINE(75)
										_this3->_cleaning = true;
										HX_STACK_LINE(75)
										{
											HX_STACK_LINE(75)
											::phoenix::Matrix _this4 = _this3->_pos_matrix;		HX_STACK_VAR(_this4,"_this4");
											HX_STACK_LINE(75)
											{
												HX_STACK_LINE(75)
												Array< Float > e = _this4->elements;		HX_STACK_VAR(e,"e");
												HX_STACK_LINE(75)
												e[(int)0] = (int)1;
												HX_STACK_LINE(75)
												e[(int)4] = (int)0;
												HX_STACK_LINE(75)
												e[(int)8] = (int)0;
												HX_STACK_LINE(75)
												e[(int)12] = _this3->local->pos->x;
												HX_STACK_LINE(75)
												e[(int)1] = (int)0;
												HX_STACK_LINE(75)
												e[(int)5] = (int)1;
												HX_STACK_LINE(75)
												e[(int)9] = (int)0;
												HX_STACK_LINE(75)
												e[(int)13] = _this3->local->pos->y;
												HX_STACK_LINE(75)
												e[(int)2] = (int)0;
												HX_STACK_LINE(75)
												e[(int)6] = (int)0;
												HX_STACK_LINE(75)
												e[(int)10] = (int)1;
												HX_STACK_LINE(75)
												e[(int)14] = _this3->local->pos->z;
												HX_STACK_LINE(75)
												e[(int)3] = (int)0;
												HX_STACK_LINE(75)
												e[(int)7] = (int)0;
												HX_STACK_LINE(75)
												e[(int)11] = (int)0;
												HX_STACK_LINE(75)
												e[(int)15] = (int)1;
												HX_STACK_LINE(75)
												_this4;
											}
											HX_STACK_LINE(75)
											_this4;
										}
										HX_STACK_LINE(75)
										{
											HX_STACK_LINE(75)
											::phoenix::Matrix _this4 = _this3->_rotation_matrix;		HX_STACK_VAR(_this4,"_this4");
											HX_STACK_LINE(75)
											::phoenix::Quaternion q = _this3->local->rotation;		HX_STACK_VAR(q,"q");
											HX_STACK_LINE(75)
											Array< Float > te = _this4->elements;		HX_STACK_VAR(te,"te");
											HX_STACK_LINE(75)
											Float x2 = (q->x + q->x);		HX_STACK_VAR(x2,"x2");
											HX_STACK_LINE(75)
											Float y2 = (q->y + q->y);		HX_STACK_VAR(y2,"y2");
											HX_STACK_LINE(75)
											Float z2 = (q->z + q->z);		HX_STACK_VAR(z2,"z2");
											HX_STACK_LINE(75)
											Float xx = (q->x * x2);		HX_STACK_VAR(xx,"xx");
											HX_STACK_LINE(75)
											Float xy = (q->x * y2);		HX_STACK_VAR(xy,"xy");
											HX_STACK_LINE(75)
											Float xz = (q->x * z2);		HX_STACK_VAR(xz,"xz");
											HX_STACK_LINE(75)
											Float yy = (q->y * y2);		HX_STACK_VAR(yy,"yy");
											HX_STACK_LINE(75)
											Float yz = (q->y * z2);		HX_STACK_VAR(yz,"yz");
											HX_STACK_LINE(75)
											Float zz = (q->z * z2);		HX_STACK_VAR(zz,"zz");
											HX_STACK_LINE(75)
											Float wx = (q->w * x2);		HX_STACK_VAR(wx,"wx");
											HX_STACK_LINE(75)
											Float wy = (q->w * y2);		HX_STACK_VAR(wy,"wy");
											HX_STACK_LINE(75)
											Float wz = (q->w * z2);		HX_STACK_VAR(wz,"wz");
											HX_STACK_LINE(75)
											te[(int)0] = ((int)1 - ((yy + zz)));
											HX_STACK_LINE(75)
											te[(int)4] = (xy - wz);
											HX_STACK_LINE(75)
											te[(int)8] = (xz + wy);
											HX_STACK_LINE(75)
											te[(int)1] = (xy + wz);
											HX_STACK_LINE(75)
											te[(int)5] = ((int)1 - ((xx + zz)));
											HX_STACK_LINE(75)
											te[(int)9] = (yz - wx);
											HX_STACK_LINE(75)
											te[(int)2] = (xz - wy);
											HX_STACK_LINE(75)
											te[(int)6] = (yz + wx);
											HX_STACK_LINE(75)
											te[(int)10] = ((int)1 - ((xx + yy)));
											HX_STACK_LINE(75)
											te[(int)3] = (int)0;
											HX_STACK_LINE(75)
											te[(int)7] = (int)0;
											HX_STACK_LINE(75)
											te[(int)11] = (int)0;
											HX_STACK_LINE(75)
											te[(int)12] = (int)0;
											HX_STACK_LINE(75)
											te[(int)13] = (int)0;
											HX_STACK_LINE(75)
											te[(int)14] = (int)0;
											HX_STACK_LINE(75)
											te[(int)15] = (int)1;
											HX_STACK_LINE(75)
											_this4;
										}
										HX_STACK_LINE(75)
										{
											HX_STACK_LINE(75)
											::phoenix::Matrix _this4 = _this3->_origin_undo_matrix;		HX_STACK_VAR(_this4,"_this4");
											HX_STACK_LINE(75)
											{
												HX_STACK_LINE(75)
												Array< Float > e = _this4->elements;		HX_STACK_VAR(e,"e");
												HX_STACK_LINE(75)
												e[(int)0] = (int)1;
												HX_STACK_LINE(75)
												e[(int)4] = (int)0;
												HX_STACK_LINE(75)
												e[(int)8] = (int)0;
												HX_STACK_LINE(75)
												e[(int)12] = -(_this3->origin->x);
												HX_STACK_LINE(75)
												e[(int)1] = (int)0;
												HX_STACK_LINE(75)
												e[(int)5] = (int)1;
												HX_STACK_LINE(75)
												e[(int)9] = (int)0;
												HX_STACK_LINE(75)
												e[(int)13] = -(_this3->origin->y);
												HX_STACK_LINE(75)
												e[(int)2] = (int)0;
												HX_STACK_LINE(75)
												e[(int)6] = (int)0;
												HX_STACK_LINE(75)
												e[(int)10] = (int)1;
												HX_STACK_LINE(75)
												e[(int)14] = -(_this3->origin->z);
												HX_STACK_LINE(75)
												e[(int)3] = (int)0;
												HX_STACK_LINE(75)
												e[(int)7] = (int)0;
												HX_STACK_LINE(75)
												e[(int)11] = (int)0;
												HX_STACK_LINE(75)
												e[(int)15] = (int)1;
												HX_STACK_LINE(75)
												_this4;
											}
											HX_STACK_LINE(75)
											_this4;
										}
										HX_STACK_LINE(75)
										{
											HX_STACK_LINE(75)
											::phoenix::Matrix _this4 = _this3->local->matrix;		HX_STACK_VAR(_this4,"_this4");
											HX_STACK_LINE(75)
											{
												HX_STACK_LINE(75)
												Array< Float > e = _this4->elements;		HX_STACK_VAR(e,"e");
												HX_STACK_LINE(75)
												e[(int)0] = (int)1;
												HX_STACK_LINE(75)
												e[(int)4] = (int)0;
												HX_STACK_LINE(75)
												e[(int)8] = (int)0;
												HX_STACK_LINE(75)
												e[(int)12] = _this3->origin->x;
												HX_STACK_LINE(75)
												e[(int)1] = (int)0;
												HX_STACK_LINE(75)
												e[(int)5] = (int)1;
												HX_STACK_LINE(75)
												e[(int)9] = (int)0;
												HX_STACK_LINE(75)
												e[(int)13] = _this3->origin->y;
												HX_STACK_LINE(75)
												e[(int)2] = (int)0;
												HX_STACK_LINE(75)
												e[(int)6] = (int)0;
												HX_STACK_LINE(75)
												e[(int)10] = (int)1;
												HX_STACK_LINE(75)
												e[(int)14] = _this3->origin->z;
												HX_STACK_LINE(75)
												e[(int)3] = (int)0;
												HX_STACK_LINE(75)
												e[(int)7] = (int)0;
												HX_STACK_LINE(75)
												e[(int)11] = (int)0;
												HX_STACK_LINE(75)
												e[(int)15] = (int)1;
												HX_STACK_LINE(75)
												_this4;
											}
											HX_STACK_LINE(75)
											_this4;
										}
										HX_STACK_LINE(75)
										{
											HX_STACK_LINE(75)
											::phoenix::Matrix _this4 = _this3->local->matrix;		HX_STACK_VAR(_this4,"_this4");
											HX_STACK_LINE(75)
											::phoenix::Vector _v = _this3->local->scale;		HX_STACK_VAR(_v,"_v");
											HX_STACK_LINE(75)
											Array< Float > te = _this4->elements;		HX_STACK_VAR(te,"te");
											HX_STACK_LINE(75)
											Float _x = _v->x;		HX_STACK_VAR(_x,"_x");
											HX_STACK_LINE(75)
											Float _y = _v->y;		HX_STACK_VAR(_y,"_y");
											HX_STACK_LINE(75)
											Float _z = _v->z;		HX_STACK_VAR(_z,"_z");
											HX_STACK_LINE(75)
											hx::MultEq(te[(int)0],_x);
											HX_STACK_LINE(75)
											hx::MultEq(te[(int)4],_y);
											HX_STACK_LINE(75)
											hx::MultEq(te[(int)8],_z);
											HX_STACK_LINE(75)
											hx::MultEq(te[(int)1],_x);
											HX_STACK_LINE(75)
											hx::MultEq(te[(int)5],_y);
											HX_STACK_LINE(75)
											hx::MultEq(te[(int)9],_z);
											HX_STACK_LINE(75)
											hx::MultEq(te[(int)2],_x);
											HX_STACK_LINE(75)
											hx::MultEq(te[(int)6],_y);
											HX_STACK_LINE(75)
											hx::MultEq(te[(int)10],_z);
											HX_STACK_LINE(75)
											hx::MultEq(te[(int)3],_x);
											HX_STACK_LINE(75)
											hx::MultEq(te[(int)7],_y);
											HX_STACK_LINE(75)
											hx::MultEq(te[(int)11],_z);
											HX_STACK_LINE(75)
											_this4;
										}
										HX_STACK_LINE(75)
										{
											HX_STACK_LINE(75)
											::phoenix::Matrix _this4 = _this3->local->matrix;		HX_STACK_VAR(_this4,"_this4");
											HX_STACK_LINE(75)
											{
												HX_STACK_LINE(75)
												Array< Float > ae = _this4->elements;		HX_STACK_VAR(ae,"ae");
												HX_STACK_LINE(75)
												Array< Float > be = _this3->_rotation_matrix->elements;		HX_STACK_VAR(be,"be");
												HX_STACK_LINE(75)
												Array< Float > te = _this4->elements;		HX_STACK_VAR(te,"te");
												HX_STACK_LINE(75)
												Float a11 = ae->__get((int)0);		HX_STACK_VAR(a11,"a11");
												HX_STACK_LINE(75)
												Float a12 = ae->__get((int)4);		HX_STACK_VAR(a12,"a12");
												HX_STACK_LINE(75)
												Float a13 = ae->__get((int)8);		HX_STACK_VAR(a13,"a13");
												HX_STACK_LINE(75)
												Float a14 = ae->__get((int)12);		HX_STACK_VAR(a14,"a14");
												HX_STACK_LINE(75)
												Float a21 = ae->__get((int)1);		HX_STACK_VAR(a21,"a21");
												HX_STACK_LINE(75)
												Float a22 = ae->__get((int)5);		HX_STACK_VAR(a22,"a22");
												HX_STACK_LINE(75)
												Float a23 = ae->__get((int)9);		HX_STACK_VAR(a23,"a23");
												HX_STACK_LINE(75)
												Float a24 = ae->__get((int)13);		HX_STACK_VAR(a24,"a24");
												HX_STACK_LINE(75)
												Float a31 = ae->__get((int)2);		HX_STACK_VAR(a31,"a31");
												HX_STACK_LINE(75)
												Float a32 = ae->__get((int)6);		HX_STACK_VAR(a32,"a32");
												HX_STACK_LINE(75)
												Float a33 = ae->__get((int)10);		HX_STACK_VAR(a33,"a33");
												HX_STACK_LINE(75)
												Float a34 = ae->__get((int)14);		HX_STACK_VAR(a34,"a34");
												HX_STACK_LINE(75)
												Float a41 = ae->__get((int)3);		HX_STACK_VAR(a41,"a41");
												HX_STACK_LINE(75)
												Float a42 = ae->__get((int)7);		HX_STACK_VAR(a42,"a42");
												HX_STACK_LINE(75)
												Float a43 = ae->__get((int)11);		HX_STACK_VAR(a43,"a43");
												HX_STACK_LINE(75)
												Float a44 = ae->__get((int)15);		HX_STACK_VAR(a44,"a44");
												HX_STACK_LINE(75)
												Float b11 = be->__get((int)0);		HX_STACK_VAR(b11,"b11");
												HX_STACK_LINE(75)
												Float b12 = be->__get((int)4);		HX_STACK_VAR(b12,"b12");
												HX_STACK_LINE(75)
												Float b13 = be->__get((int)8);		HX_STACK_VAR(b13,"b13");
												HX_STACK_LINE(75)
												Float b14 = be->__get((int)12);		HX_STACK_VAR(b14,"b14");
												HX_STACK_LINE(75)
												Float b21 = be->__get((int)1);		HX_STACK_VAR(b21,"b21");
												HX_STACK_LINE(75)
												Float b22 = be->__get((int)5);		HX_STACK_VAR(b22,"b22");
												HX_STACK_LINE(75)
												Float b23 = be->__get((int)9);		HX_STACK_VAR(b23,"b23");
												HX_STACK_LINE(75)
												Float b24 = be->__get((int)13);		HX_STACK_VAR(b24,"b24");
												HX_STACK_LINE(75)
												Float b31 = be->__get((int)2);		HX_STACK_VAR(b31,"b31");
												HX_STACK_LINE(75)
												Float b32 = be->__get((int)6);		HX_STACK_VAR(b32,"b32");
												HX_STACK_LINE(75)
												Float b33 = be->__get((int)10);		HX_STACK_VAR(b33,"b33");
												HX_STACK_LINE(75)
												Float b34 = be->__get((int)14);		HX_STACK_VAR(b34,"b34");
												HX_STACK_LINE(75)
												Float b41 = be->__get((int)3);		HX_STACK_VAR(b41,"b41");
												HX_STACK_LINE(75)
												Float b42 = be->__get((int)7);		HX_STACK_VAR(b42,"b42");
												HX_STACK_LINE(75)
												Float b43 = be->__get((int)11);		HX_STACK_VAR(b43,"b43");
												HX_STACK_LINE(75)
												Float b44 = be->__get((int)15);		HX_STACK_VAR(b44,"b44");
												HX_STACK_LINE(75)
												te[(int)0] = ((((a11 * b11) + (a12 * b21)) + (a13 * b31)) + (a14 * b41));
												HX_STACK_LINE(75)
												te[(int)4] = ((((a11 * b12) + (a12 * b22)) + (a13 * b32)) + (a14 * b42));
												HX_STACK_LINE(75)
												te[(int)8] = ((((a11 * b13) + (a12 * b23)) + (a13 * b33)) + (a14 * b43));
												HX_STACK_LINE(75)
												te[(int)12] = ((((a11 * b14) + (a12 * b24)) + (a13 * b34)) + (a14 * b44));
												HX_STACK_LINE(75)
												te[(int)1] = ((((a21 * b11) + (a22 * b21)) + (a23 * b31)) + (a24 * b41));
												HX_STACK_LINE(75)
												te[(int)5] = ((((a21 * b12) + (a22 * b22)) + (a23 * b32)) + (a24 * b42));
												HX_STACK_LINE(75)
												te[(int)9] = ((((a21 * b13) + (a22 * b23)) + (a23 * b33)) + (a24 * b43));
												HX_STACK_LINE(75)
												te[(int)13] = ((((a21 * b14) + (a22 * b24)) + (a23 * b34)) + (a24 * b44));
												HX_STACK_LINE(75)
												te[(int)2] = ((((a31 * b11) + (a32 * b21)) + (a33 * b31)) + (a34 * b41));
												HX_STACK_LINE(75)
												te[(int)6] = ((((a31 * b12) + (a32 * b22)) + (a33 * b32)) + (a34 * b42));
												HX_STACK_LINE(75)
												te[(int)10] = ((((a31 * b13) + (a32 * b23)) + (a33 * b33)) + (a34 * b43));
												HX_STACK_LINE(75)
												te[(int)14] = ((((a31 * b14) + (a32 * b24)) + (a33 * b34)) + (a34 * b44));
												HX_STACK_LINE(75)
												te[(int)3] = ((((a41 * b11) + (a42 * b21)) + (a43 * b31)) + (a44 * b41));
												HX_STACK_LINE(75)
												te[(int)7] = ((((a41 * b12) + (a42 * b22)) + (a43 * b32)) + (a44 * b42));
												HX_STACK_LINE(75)
												te[(int)11] = ((((a41 * b13) + (a42 * b23)) + (a43 * b33)) + (a44 * b43));
												HX_STACK_LINE(75)
												te[(int)15] = ((((a41 * b14) + (a42 * b24)) + (a43 * b34)) + (a44 * b44));
												HX_STACK_LINE(75)
												_this4;
											}
										}
										HX_STACK_LINE(75)
										{
											HX_STACK_LINE(75)
											::phoenix::Matrix _this4 = _this3->local->matrix;		HX_STACK_VAR(_this4,"_this4");
											HX_STACK_LINE(75)
											::phoenix::Vector _v = _this3->local->pos;		HX_STACK_VAR(_v,"_v");
											HX_STACK_LINE(75)
											Array< Float > te = _this4->elements;		HX_STACK_VAR(te,"te");
											HX_STACK_LINE(75)
											te[(int)12] = _v->x;
											HX_STACK_LINE(75)
											te[(int)13] = _v->y;
											HX_STACK_LINE(75)
											te[(int)14] = _v->z;
											HX_STACK_LINE(75)
											_this4;
										}
										HX_STACK_LINE(75)
										{
											HX_STACK_LINE(75)
											::phoenix::Matrix _this4 = _this3->local->matrix;		HX_STACK_VAR(_this4,"_this4");
											HX_STACK_LINE(75)
											{
												HX_STACK_LINE(75)
												Array< Float > ae = _this4->elements;		HX_STACK_VAR(ae,"ae");
												HX_STACK_LINE(75)
												Array< Float > be = _this3->_origin_undo_matrix->elements;		HX_STACK_VAR(be,"be");
												HX_STACK_LINE(75)
												Array< Float > te = _this4->elements;		HX_STACK_VAR(te,"te");
												HX_STACK_LINE(75)
												Float a11 = ae->__get((int)0);		HX_STACK_VAR(a11,"a11");
												HX_STACK_LINE(75)
												Float a12 = ae->__get((int)4);		HX_STACK_VAR(a12,"a12");
												HX_STACK_LINE(75)
												Float a13 = ae->__get((int)8);		HX_STACK_VAR(a13,"a13");
												HX_STACK_LINE(75)
												Float a14 = ae->__get((int)12);		HX_STACK_VAR(a14,"a14");
												HX_STACK_LINE(75)
												Float a21 = ae->__get((int)1);		HX_STACK_VAR(a21,"a21");
												HX_STACK_LINE(75)
												Float a22 = ae->__get((int)5);		HX_STACK_VAR(a22,"a22");
												HX_STACK_LINE(75)
												Float a23 = ae->__get((int)9);		HX_STACK_VAR(a23,"a23");
												HX_STACK_LINE(75)
												Float a24 = ae->__get((int)13);		HX_STACK_VAR(a24,"a24");
												HX_STACK_LINE(75)
												Float a31 = ae->__get((int)2);		HX_STACK_VAR(a31,"a31");
												HX_STACK_LINE(75)
												Float a32 = ae->__get((int)6);		HX_STACK_VAR(a32,"a32");
												HX_STACK_LINE(75)
												Float a33 = ae->__get((int)10);		HX_STACK_VAR(a33,"a33");
												HX_STACK_LINE(75)
												Float a34 = ae->__get((int)14);		HX_STACK_VAR(a34,"a34");
												HX_STACK_LINE(75)
												Float a41 = ae->__get((int)3);		HX_STACK_VAR(a41,"a41");
												HX_STACK_LINE(75)
												Float a42 = ae->__get((int)7);		HX_STACK_VAR(a42,"a42");
												HX_STACK_LINE(75)
												Float a43 = ae->__get((int)11);		HX_STACK_VAR(a43,"a43");
												HX_STACK_LINE(75)
												Float a44 = ae->__get((int)15);		HX_STACK_VAR(a44,"a44");
												HX_STACK_LINE(75)
												Float b11 = be->__get((int)0);		HX_STACK_VAR(b11,"b11");
												HX_STACK_LINE(75)
												Float b12 = be->__get((int)4);		HX_STACK_VAR(b12,"b12");
												HX_STACK_LINE(75)
												Float b13 = be->__get((int)8);		HX_STACK_VAR(b13,"b13");
												HX_STACK_LINE(75)
												Float b14 = be->__get((int)12);		HX_STACK_VAR(b14,"b14");
												HX_STACK_LINE(75)
												Float b21 = be->__get((int)1);		HX_STACK_VAR(b21,"b21");
												HX_STACK_LINE(75)
												Float b22 = be->__get((int)5);		HX_STACK_VAR(b22,"b22");
												HX_STACK_LINE(75)
												Float b23 = be->__get((int)9);		HX_STACK_VAR(b23,"b23");
												HX_STACK_LINE(75)
												Float b24 = be->__get((int)13);		HX_STACK_VAR(b24,"b24");
												HX_STACK_LINE(75)
												Float b31 = be->__get((int)2);		HX_STACK_VAR(b31,"b31");
												HX_STACK_LINE(75)
												Float b32 = be->__get((int)6);		HX_STACK_VAR(b32,"b32");
												HX_STACK_LINE(75)
												Float b33 = be->__get((int)10);		HX_STACK_VAR(b33,"b33");
												HX_STACK_LINE(75)
												Float b34 = be->__get((int)14);		HX_STACK_VAR(b34,"b34");
												HX_STACK_LINE(75)
												Float b41 = be->__get((int)3);		HX_STACK_VAR(b41,"b41");
												HX_STACK_LINE(75)
												Float b42 = be->__get((int)7);		HX_STACK_VAR(b42,"b42");
												HX_STACK_LINE(75)
												Float b43 = be->__get((int)11);		HX_STACK_VAR(b43,"b43");
												HX_STACK_LINE(75)
												Float b44 = be->__get((int)15);		HX_STACK_VAR(b44,"b44");
												HX_STACK_LINE(75)
												te[(int)0] = ((((a11 * b11) + (a12 * b21)) + (a13 * b31)) + (a14 * b41));
												HX_STACK_LINE(75)
												te[(int)4] = ((((a11 * b12) + (a12 * b22)) + (a13 * b32)) + (a14 * b42));
												HX_STACK_LINE(75)
												te[(int)8] = ((((a11 * b13) + (a12 * b23)) + (a13 * b33)) + (a14 * b43));
												HX_STACK_LINE(75)
												te[(int)12] = ((((a11 * b14) + (a12 * b24)) + (a13 * b34)) + (a14 * b44));
												HX_STACK_LINE(75)
												te[(int)1] = ((((a21 * b11) + (a22 * b21)) + (a23 * b31)) + (a24 * b41));
												HX_STACK_LINE(75)
												te[(int)5] = ((((a21 * b12) + (a22 * b22)) + (a23 * b32)) + (a24 * b42));
												HX_STACK_LINE(75)
												te[(int)9] = ((((a21 * b13) + (a22 * b23)) + (a23 * b33)) + (a24 * b43));
												HX_STACK_LINE(75)
												te[(int)13] = ((((a21 * b14) + (a22 * b24)) + (a23 * b34)) + (a24 * b44));
												HX_STACK_LINE(75)
												te[(int)2] = ((((a31 * b11) + (a32 * b21)) + (a33 * b31)) + (a34 * b41));
												HX_STACK_LINE(75)
												te[(int)6] = ((((a31 * b12) + (a32 * b22)) + (a33 * b32)) + (a34 * b42));
												HX_STACK_LINE(75)
												te[(int)10] = ((((a31 * b13) + (a32 * b23)) + (a33 * b33)) + (a34 * b43));
												HX_STACK_LINE(75)
												te[(int)14] = ((((a31 * b14) + (a32 * b24)) + (a33 * b34)) + (a34 * b44));
												HX_STACK_LINE(75)
												te[(int)3] = ((((a41 * b11) + (a42 * b21)) + (a43 * b31)) + (a44 * b41));
												HX_STACK_LINE(75)
												te[(int)7] = ((((a41 * b12) + (a42 * b22)) + (a43 * b32)) + (a44 * b42));
												HX_STACK_LINE(75)
												te[(int)11] = ((((a41 * b13) + (a42 * b23)) + (a43 * b33)) + (a44 * b43));
												HX_STACK_LINE(75)
												te[(int)15] = ((((a41 * b14) + (a42 * b24)) + (a43 * b34)) + (a44 * b44));
												HX_STACK_LINE(75)
												_this4;
											}
										}
										HX_STACK_LINE(75)
										if (((_this3->parent != null()))){
											HX_STACK_LINE(75)
											::phoenix::Spatial _this4 = _this3->get_world();		HX_STACK_VAR(_this4,"_this4");
											HX_STACK_LINE(75)
											::phoenix::Matrix _m1;		HX_STACK_VAR(_m1,"_m1");
											HX_STACK_LINE(75)
											{
												HX_STACK_LINE(75)
												::phoenix::Matrix _this5;		HX_STACK_VAR(_this5,"_this5");
												HX_STACK_LINE(75)
												{
													HX_STACK_LINE(75)
													::phoenix::Spatial _this6 = _this3->get_world();		HX_STACK_VAR(_this6,"_this6");
													HX_STACK_LINE(75)
													_this5 = _this6->matrix;
												}
												HX_STACK_LINE(75)
												::phoenix::Matrix _a;		HX_STACK_VAR(_a,"_a");
												HX_STACK_LINE(75)
												{
													HX_STACK_LINE(75)
													::phoenix::Spatial _this6 = _this3->parent->get_world();		HX_STACK_VAR(_this6,"_this6");
													HX_STACK_LINE(75)
													_a = _this6->matrix;
												}
												HX_STACK_LINE(75)
												Array< Float > ae = _a->elements;		HX_STACK_VAR(ae,"ae");
												HX_STACK_LINE(75)
												Array< Float > be = _this3->local->matrix->elements;		HX_STACK_VAR(be,"be");
												HX_STACK_LINE(75)
												Array< Float > te = _this5->elements;		HX_STACK_VAR(te,"te");
												HX_STACK_LINE(75)
												Float a11 = ae->__get((int)0);		HX_STACK_VAR(a11,"a11");
												HX_STACK_LINE(75)
												Float a12 = ae->__get((int)4);		HX_STACK_VAR(a12,"a12");
												HX_STACK_LINE(75)
												Float a13 = ae->__get((int)8);		HX_STACK_VAR(a13,"a13");
												HX_STACK_LINE(75)
												Float a14 = ae->__get((int)12);		HX_STACK_VAR(a14,"a14");
												HX_STACK_LINE(75)
												Float a21 = ae->__get((int)1);		HX_STACK_VAR(a21,"a21");
												HX_STACK_LINE(75)
												Float a22 = ae->__get((int)5);		HX_STACK_VAR(a22,"a22");
												HX_STACK_LINE(75)
												Float a23 = ae->__get((int)9);		HX_STACK_VAR(a23,"a23");
												HX_STACK_LINE(75)
												Float a24 = ae->__get((int)13);		HX_STACK_VAR(a24,"a24");
												HX_STACK_LINE(75)
												Float a31 = ae->__get((int)2);		HX_STACK_VAR(a31,"a31");
												HX_STACK_LINE(75)
												Float a32 = ae->__get((int)6);		HX_STACK_VAR(a32,"a32");
												HX_STACK_LINE(75)
												Float a33 = ae->__get((int)10);		HX_STACK_VAR(a33,"a33");
												HX_STACK_LINE(75)
												Float a34 = ae->__get((int)14);		HX_STACK_VAR(a34,"a34");
												HX_STACK_LINE(75)
												Float a41 = ae->__get((int)3);		HX_STACK_VAR(a41,"a41");
												HX_STACK_LINE(75)
												Float a42 = ae->__get((int)7);		HX_STACK_VAR(a42,"a42");
												HX_STACK_LINE(75)
												Float a43 = ae->__get((int)11);		HX_STACK_VAR(a43,"a43");
												HX_STACK_LINE(75)
												Float a44 = ae->__get((int)15);		HX_STACK_VAR(a44,"a44");
												HX_STACK_LINE(75)
												Float b11 = be->__get((int)0);		HX_STACK_VAR(b11,"b11");
												HX_STACK_LINE(75)
												Float b12 = be->__get((int)4);		HX_STACK_VAR(b12,"b12");
												HX_STACK_LINE(75)
												Float b13 = be->__get((int)8);		HX_STACK_VAR(b13,"b13");
												HX_STACK_LINE(75)
												Float b14 = be->__get((int)12);		HX_STACK_VAR(b14,"b14");
												HX_STACK_LINE(75)
												Float b21 = be->__get((int)1);		HX_STACK_VAR(b21,"b21");
												HX_STACK_LINE(75)
												Float b22 = be->__get((int)5);		HX_STACK_VAR(b22,"b22");
												HX_STACK_LINE(75)
												Float b23 = be->__get((int)9);		HX_STACK_VAR(b23,"b23");
												HX_STACK_LINE(75)
												Float b24 = be->__get((int)13);		HX_STACK_VAR(b24,"b24");
												HX_STACK_LINE(75)
												Float b31 = be->__get((int)2);		HX_STACK_VAR(b31,"b31");
												HX_STACK_LINE(75)
												Float b32 = be->__get((int)6);		HX_STACK_VAR(b32,"b32");
												HX_STACK_LINE(75)
												Float b33 = be->__get((int)10);		HX_STACK_VAR(b33,"b33");
												HX_STACK_LINE(75)
												Float b34 = be->__get((int)14);		HX_STACK_VAR(b34,"b34");
												HX_STACK_LINE(75)
												Float b41 = be->__get((int)3);		HX_STACK_VAR(b41,"b41");
												HX_STACK_LINE(75)
												Float b42 = be->__get((int)7);		HX_STACK_VAR(b42,"b42");
												HX_STACK_LINE(75)
												Float b43 = be->__get((int)11);		HX_STACK_VAR(b43,"b43");
												HX_STACK_LINE(75)
												Float b44 = be->__get((int)15);		HX_STACK_VAR(b44,"b44");
												HX_STACK_LINE(75)
												te[(int)0] = ((((a11 * b11) + (a12 * b21)) + (a13 * b31)) + (a14 * b41));
												HX_STACK_LINE(75)
												te[(int)4] = ((((a11 * b12) + (a12 * b22)) + (a13 * b32)) + (a14 * b42));
												HX_STACK_LINE(75)
												te[(int)8] = ((((a11 * b13) + (a12 * b23)) + (a13 * b33)) + (a14 * b43));
												HX_STACK_LINE(75)
												te[(int)12] = ((((a11 * b14) + (a12 * b24)) + (a13 * b34)) + (a14 * b44));
												HX_STACK_LINE(75)
												te[(int)1] = ((((a21 * b11) + (a22 * b21)) + (a23 * b31)) + (a24 * b41));
												HX_STACK_LINE(75)
												te[(int)5] = ((((a21 * b12) + (a22 * b22)) + (a23 * b32)) + (a24 * b42));
												HX_STACK_LINE(75)
												te[(int)9] = ((((a21 * b13) + (a22 * b23)) + (a23 * b33)) + (a24 * b43));
												HX_STACK_LINE(75)
												te[(int)13] = ((((a21 * b14) + (a22 * b24)) + (a23 * b34)) + (a24 * b44));
												HX_STACK_LINE(75)
												te[(int)2] = ((((a31 * b11) + (a32 * b21)) + (a33 * b31)) + (a34 * b41));
												HX_STACK_LINE(75)
												te[(int)6] = ((((a31 * b12) + (a32 * b22)) + (a33 * b32)) + (a34 * b42));
												HX_STACK_LINE(75)
												te[(int)10] = ((((a31 * b13) + (a32 * b23)) + (a33 * b33)) + (a34 * b43));
												HX_STACK_LINE(75)
												te[(int)14] = ((((a31 * b14) + (a32 * b24)) + (a33 * b34)) + (a34 * b44));
												HX_STACK_LINE(75)
												te[(int)3] = ((((a41 * b11) + (a42 * b21)) + (a43 * b31)) + (a44 * b41));
												HX_STACK_LINE(75)
												te[(int)7] = ((((a41 * b12) + (a42 * b22)) + (a43 * b32)) + (a44 * b42));
												HX_STACK_LINE(75)
												te[(int)11] = ((((a41 * b13) + (a42 * b23)) + (a43 * b33)) + (a44 * b43));
												HX_STACK_LINE(75)
												te[(int)15] = ((((a41 * b14) + (a42 * b24)) + (a43 * b34)) + (a44 * b44));
												HX_STACK_LINE(75)
												_m1 = _this5;
											}
											HX_STACK_LINE(75)
											_this4->matrix = _m1;
											HX_STACK_LINE(75)
											if (((_m1 != null()))){
												HX_STACK_LINE(75)
												::snow::platform::native::utils::Float32Array _g14;		HX_STACK_VAR(_g14,"_g14");
												HX_STACK_LINE(75)
												{
													HX_STACK_LINE(75)
													::phoenix::Matrix _this5 = _this4->matrix;		HX_STACK_VAR(_this5,"_this5");
													HX_STACK_LINE(75)
													{
														HX_STACK_LINE(75)
														::snow::platform::native::utils::Float32Array _this6 = _this5->_float32array;		HX_STACK_VAR(_this6,"_this6");
														HX_STACK_LINE(75)
														Dynamic bufferOrArray = _this5->elements;		HX_STACK_VAR(bufferOrArray,"bufferOrArray");
														HX_STACK_LINE(75)
														int offset = (int)0;		HX_STACK_VAR(offset,"offset");
														HX_STACK_LINE(75)
														if ((::Std_obj::is(bufferOrArray,hx::ClassOf< Array<int> >()))){
															HX_STACK_LINE(75)
															Array< Float > floats = bufferOrArray;		HX_STACK_VAR(floats,"floats");
															HX_STACK_LINE(75)
															{
																HX_STACK_LINE(75)
																int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
																HX_STACK_LINE(75)
																int _g2 = floats->length;		HX_STACK_VAR(_g2,"_g2");
																HX_STACK_LINE(75)
																while((true)){
																	HX_STACK_LINE(75)
																	if ((!(((_g1 < _g2))))){
																		HX_STACK_LINE(75)
																		break;
																	}
																	HX_STACK_LINE(75)
																	int i1 = (_g1)++;		HX_STACK_VAR(i1,"i1");
																	HX_STACK_LINE(75)
																	::__hxcpp_memory_set_float(_this6->bytes,(((int((i1 + offset)) << int((int)2))) + _this6->byteOffset),floats->__get(i1));
																}
															}
														}
														else{
															HX_STACK_LINE(75)
															if ((::Std_obj::is(bufferOrArray,hx::ClassOf< ::snow::platform::native::utils::Float32Array >()))){
																HX_STACK_LINE(75)
																::snow::platform::native::utils::Float32Array floats = bufferOrArray;		HX_STACK_VAR(floats,"floats");
																HX_STACK_LINE(75)
																{
																	HX_STACK_LINE(75)
																	int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
																	HX_STACK_LINE(75)
																	int _g2 = floats->length;		HX_STACK_VAR(_g2,"_g2");
																	HX_STACK_LINE(75)
																	while((true)){
																		HX_STACK_LINE(75)
																		if ((!(((_g1 < _g2))))){
																			HX_STACK_LINE(75)
																			break;
																		}
																		HX_STACK_LINE(75)
																		int i1 = (_g1)++;		HX_STACK_VAR(i1,"i1");
																		HX_STACK_LINE(75)
																		::__hxcpp_memory_set_float(_this6->bytes,(((int((i1 + offset)) << int((int)2))) + _this6->byteOffset),floats->__get(i1));
																	}
																}
															}
															else{
																HX_STACK_LINE(75)
																HX_STACK_DO_THROW(HX_CSTRING("Invalid input buffer"));
															}
														}
													}
													HX_STACK_LINE(75)
													_g14 = ::snow::platform::native::utils::Float32Array_obj::__new(_this5->_float32array,null(),null());
												}
												HX_STACK_LINE(75)
												_this4->floats = _g14;
											}
											HX_STACK_LINE(75)
											_this4->matrix;
										}
										else{
											HX_STACK_LINE(75)
											::phoenix::Spatial _this4 = _this3->get_world();		HX_STACK_VAR(_this4,"_this4");
											HX_STACK_LINE(75)
											::phoenix::Matrix _m1;		HX_STACK_VAR(_m1,"_m1");
											HX_STACK_LINE(75)
											{
												HX_STACK_LINE(75)
												Array< Float > te = _this3->local->matrix->elements;		HX_STACK_VAR(te,"te");
												HX_STACK_LINE(75)
												_m1 = ::phoenix::Matrix_obj::__new(te->__get((int)0),te->__get((int)4),te->__get((int)8),te->__get((int)12),te->__get((int)1),te->__get((int)5),te->__get((int)9),te->__get((int)13),te->__get((int)2),te->__get((int)6),te->__get((int)10),te->__get((int)14),te->__get((int)3),te->__get((int)7),te->__get((int)11),te->__get((int)15));
											}
											HX_STACK_LINE(75)
											_this4->matrix = _m1;
											HX_STACK_LINE(75)
											if (((_m1 != null()))){
												HX_STACK_LINE(75)
												::snow::platform::native::utils::Float32Array _g15;		HX_STACK_VAR(_g15,"_g15");
												HX_STACK_LINE(75)
												{
													HX_STACK_LINE(75)
													::phoenix::Matrix _this5 = _this4->matrix;		HX_STACK_VAR(_this5,"_this5");
													HX_STACK_LINE(75)
													{
														HX_STACK_LINE(75)
														::snow::platform::native::utils::Float32Array _this6 = _this5->_float32array;		HX_STACK_VAR(_this6,"_this6");
														HX_STACK_LINE(75)
														Dynamic bufferOrArray = _this5->elements;		HX_STACK_VAR(bufferOrArray,"bufferOrArray");
														HX_STACK_LINE(75)
														int offset = (int)0;		HX_STACK_VAR(offset,"offset");
														HX_STACK_LINE(75)
														if ((::Std_obj::is(bufferOrArray,hx::ClassOf< Array<int> >()))){
															HX_STACK_LINE(75)
															Array< Float > floats = bufferOrArray;		HX_STACK_VAR(floats,"floats");
															HX_STACK_LINE(75)
															{
																HX_STACK_LINE(75)
																int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
																HX_STACK_LINE(75)
																int _g2 = floats->length;		HX_STACK_VAR(_g2,"_g2");
																HX_STACK_LINE(75)
																while((true)){
																	HX_STACK_LINE(75)
																	if ((!(((_g1 < _g2))))){
																		HX_STACK_LINE(75)
																		break;
																	}
																	HX_STACK_LINE(75)
																	int i1 = (_g1)++;		HX_STACK_VAR(i1,"i1");
																	HX_STACK_LINE(75)
																	::__hxcpp_memory_set_float(_this6->bytes,(((int((i1 + offset)) << int((int)2))) + _this6->byteOffset),floats->__get(i1));
																}
															}
														}
														else{
															HX_STACK_LINE(75)
															if ((::Std_obj::is(bufferOrArray,hx::ClassOf< ::snow::platform::native::utils::Float32Array >()))){
																HX_STACK_LINE(75)
																::snow::platform::native::utils::Float32Array floats = bufferOrArray;		HX_STACK_VAR(floats,"floats");
																HX_STACK_LINE(75)
																{
																	HX_STACK_LINE(75)
																	int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
																	HX_STACK_LINE(75)
																	int _g2 = floats->length;		HX_STACK_VAR(_g2,"_g2");
																	HX_STACK_LINE(75)
																	while((true)){
																		HX_STACK_LINE(75)
																		if ((!(((_g1 < _g2))))){
																			HX_STACK_LINE(75)
																			break;
																		}
																		HX_STACK_LINE(75)
																		int i1 = (_g1)++;		HX_STACK_VAR(i1,"i1");
																		HX_STACK_LINE(75)
																		::__hxcpp_memory_set_float(_this6->bytes,(((int((i1 + offset)) << int((int)2))) + _this6->byteOffset),floats->__get(i1));
																	}
																}
															}
															else{
																HX_STACK_LINE(75)
																HX_STACK_DO_THROW(HX_CSTRING("Invalid input buffer"));
															}
														}
													}
													HX_STACK_LINE(75)
													_g15 = ::snow::platform::native::utils::Float32Array_obj::__new(_this5->_float32array,null(),null());
												}
												HX_STACK_LINE(75)
												_this4->floats = _g15;
											}
											HX_STACK_LINE(75)
											_this4->matrix;
										}
										HX_STACK_LINE(75)
										{
											HX_STACK_LINE(75)
											::phoenix::Spatial _this4 = _this3->get_world();		HX_STACK_VAR(_this4,"_this4");
											HX_STACK_LINE(75)
											if ((_this4->auto_decompose)){
												HX_STACK_LINE(75)
												::phoenix::MatrixTransform _transform;		HX_STACK_VAR(_transform,"_transform");
												HX_STACK_LINE(75)
												{
													HX_STACK_LINE(75)
													::phoenix::Matrix _this5 = _this4->matrix;		HX_STACK_VAR(_this5,"_this5");
													HX_STACK_LINE(75)
													::phoenix::Vector _position = null();		HX_STACK_VAR(_position,"_position");
													HX_STACK_LINE(75)
													::phoenix::Quaternion _quaternion = null();		HX_STACK_VAR(_quaternion,"_quaternion");
													HX_STACK_LINE(75)
													::phoenix::Vector _scale = null();		HX_STACK_VAR(_scale,"_scale");
													HX_STACK_LINE(75)
													Array< Float > te = _this5->elements;		HX_STACK_VAR(te,"te");
													HX_STACK_LINE(75)
													::phoenix::Matrix matrix = ::phoenix::Matrix_obj::__new(null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(matrix,"matrix");
													HX_STACK_LINE(75)
													Float _ax_x = te->__get((int)0);		HX_STACK_VAR(_ax_x,"_ax_x");
													HX_STACK_LINE(75)
													Float _ax_y = te->__get((int)1);		HX_STACK_VAR(_ax_y,"_ax_y");
													HX_STACK_LINE(75)
													Float _ax_z = te->__get((int)2);		HX_STACK_VAR(_ax_z,"_ax_z");
													HX_STACK_LINE(75)
													Float _ay_x = te->__get((int)4);		HX_STACK_VAR(_ay_x,"_ay_x");
													HX_STACK_LINE(75)
													Float _ay_y = te->__get((int)5);		HX_STACK_VAR(_ay_y,"_ay_y");
													HX_STACK_LINE(75)
													Float _ay_z = te->__get((int)6);		HX_STACK_VAR(_ay_z,"_ay_z");
													HX_STACK_LINE(75)
													Float _az_x = te->__get((int)8);		HX_STACK_VAR(_az_x,"_az_x");
													HX_STACK_LINE(75)
													Float _az_y = te->__get((int)9);		HX_STACK_VAR(_az_y,"_az_y");
													HX_STACK_LINE(75)
													Float _az_z = te->__get((int)10);		HX_STACK_VAR(_az_z,"_az_z");
													HX_STACK_LINE(75)
													Float _ax_length = ::Math_obj::sqrt((((_ax_x * _ax_x) + (_ax_y * _ax_y)) + (_ax_z * _ax_z)));		HX_STACK_VAR(_ax_length,"_ax_length");
													HX_STACK_LINE(75)
													Float _ay_length = ::Math_obj::sqrt((((_ay_x * _ay_x) + (_ay_y * _ay_y)) + (_ay_z * _ay_z)));		HX_STACK_VAR(_ay_length,"_ay_length");
													HX_STACK_LINE(75)
													Float _az_length = ::Math_obj::sqrt((((_az_x * _az_x) + (_az_y * _az_y)) + (_az_z * _az_z)));		HX_STACK_VAR(_az_length,"_az_length");
													HX_STACK_LINE(75)
													if (((_quaternion == null()))){
														HX_STACK_LINE(75)
														::phoenix::Quaternion _g16 = ::phoenix::Quaternion_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(_g16,"_g16");
														HX_STACK_LINE(75)
														_quaternion = _g16;
													}
													HX_STACK_LINE(75)
													if (((_position == null()))){
														HX_STACK_LINE(75)
														::phoenix::Vector _g17 = ::phoenix::Vector_obj::__new(te->__get((int)12),te->__get((int)13),te->__get((int)14),null());		HX_STACK_VAR(_g17,"_g17");
														HX_STACK_LINE(75)
														_position = _g17;
													}
													else{
														HX_STACK_LINE(75)
														{
															HX_STACK_LINE(75)
															Float _x = te->__get((int)12);		HX_STACK_VAR(_x,"_x");
															HX_STACK_LINE(75)
															_position->x = _x;
															HX_STACK_LINE(75)
															if ((_position->_construct)){
																HX_STACK_LINE(75)
																_position->x;
															}
															else{
																HX_STACK_LINE(75)
																if (((bool((_position->listen_x != null())) && bool(!(_position->ignore_listeners))))){
																	HX_STACK_LINE(75)
																	_position->listen_x(_x);
																}
																HX_STACK_LINE(75)
																_position->x;
															}
														}
														HX_STACK_LINE(75)
														{
															HX_STACK_LINE(75)
															Float _y = te->__get((int)13);		HX_STACK_VAR(_y,"_y");
															HX_STACK_LINE(75)
															_position->y = _y;
															HX_STACK_LINE(75)
															if ((_position->_construct)){
																HX_STACK_LINE(75)
																_position->y;
															}
															else{
																HX_STACK_LINE(75)
																if (((bool((_position->listen_y != null())) && bool(!(_position->ignore_listeners))))){
																	HX_STACK_LINE(75)
																	_position->listen_y(_y);
																}
																HX_STACK_LINE(75)
																_position->y;
															}
														}
														HX_STACK_LINE(75)
														{
															HX_STACK_LINE(75)
															Float _z = te->__get((int)14);		HX_STACK_VAR(_z,"_z");
															HX_STACK_LINE(75)
															_position->z = _z;
															HX_STACK_LINE(75)
															if ((_position->_construct)){
																HX_STACK_LINE(75)
																_position->z;
															}
															else{
																HX_STACK_LINE(75)
																if (((bool((_position->listen_z != null())) && bool(!(_position->ignore_listeners))))){
																	HX_STACK_LINE(75)
																	_position->listen_z(_z);
																}
																HX_STACK_LINE(75)
																_position->z;
															}
														}
													}
													HX_STACK_LINE(75)
													if (((_scale == null()))){
														HX_STACK_LINE(75)
														::phoenix::Vector _g18 = ::phoenix::Vector_obj::__new(_ax_length,_ay_length,_az_length,null());		HX_STACK_VAR(_g18,"_g18");
														HX_STACK_LINE(75)
														_scale = _g18;
													}
													else{
														HX_STACK_LINE(75)
														{
															HX_STACK_LINE(75)
															_scale->x = _ax_length;
															HX_STACK_LINE(75)
															if ((_scale->_construct)){
																HX_STACK_LINE(75)
																_scale->x;
															}
															else{
																HX_STACK_LINE(75)
																if (((bool((_scale->listen_x != null())) && bool(!(_scale->ignore_listeners))))){
																	HX_STACK_LINE(75)
																	_scale->listen_x(_ax_length);
																}
																HX_STACK_LINE(75)
																_scale->x;
															}
														}
														HX_STACK_LINE(75)
														{
															HX_STACK_LINE(75)
															_scale->y = _ay_length;
															HX_STACK_LINE(75)
															if ((_scale->_construct)){
																HX_STACK_LINE(75)
																_scale->y;
															}
															else{
																HX_STACK_LINE(75)
																if (((bool((_scale->listen_y != null())) && bool(!(_scale->ignore_listeners))))){
																	HX_STACK_LINE(75)
																	_scale->listen_y(_ay_length);
																}
																HX_STACK_LINE(75)
																_scale->y;
															}
														}
														HX_STACK_LINE(75)
														{
															HX_STACK_LINE(75)
															_scale->z = _az_length;
															HX_STACK_LINE(75)
															if ((_scale->_construct)){
																HX_STACK_LINE(75)
																_scale->z;
															}
															else{
																HX_STACK_LINE(75)
																if (((bool((_scale->listen_z != null())) && bool(!(_scale->ignore_listeners))))){
																	HX_STACK_LINE(75)
																	_scale->listen_z(_az_length);
																}
																HX_STACK_LINE(75)
																_scale->z;
															}
														}
													}
													HX_STACK_LINE(75)
													Array< Float > _g19 = _this5->elements->concat(Array_obj< Float >::__new());		HX_STACK_VAR(_g19,"_g19");
													HX_STACK_LINE(75)
													matrix->elements = _g19;
													HX_STACK_LINE(75)
													Array< Float > me = matrix->elements;		HX_STACK_VAR(me,"me");
													HX_STACK_LINE(75)
													hx::DivEq(me[(int)0],_ax_length);
													HX_STACK_LINE(75)
													hx::DivEq(me[(int)1],_ax_length);
													HX_STACK_LINE(75)
													hx::DivEq(me[(int)2],_ax_length);
													HX_STACK_LINE(75)
													hx::DivEq(me[(int)4],_ay_length);
													HX_STACK_LINE(75)
													hx::DivEq(me[(int)5],_ay_length);
													HX_STACK_LINE(75)
													hx::DivEq(me[(int)6],_ay_length);
													HX_STACK_LINE(75)
													hx::DivEq(me[(int)8],_az_length);
													HX_STACK_LINE(75)
													hx::DivEq(me[(int)9],_az_length);
													HX_STACK_LINE(75)
													hx::DivEq(me[(int)10],_az_length);
													HX_STACK_LINE(75)
													_quaternion->setFromRotationMatrix(matrix);
													HX_STACK_LINE(75)
													if (((_this5->_transform == null()))){
														HX_STACK_LINE(75)
														::phoenix::MatrixTransform _g20 = ::phoenix::MatrixTransform_obj::__new(_position,_quaternion,_scale);		HX_STACK_VAR(_g20,"_g20");
														HX_STACK_LINE(75)
														_this5->_transform = _g20;
													}
													else{
														HX_STACK_LINE(75)
														_this5->_transform->pos = _position;
														HX_STACK_LINE(75)
														_this5->_transform->rotation = _quaternion;
														HX_STACK_LINE(75)
														_this5->_transform->scale = _scale;
													}
													HX_STACK_LINE(75)
													_transform = _this5->_transform;
												}
												HX_STACK_LINE(75)
												{
													HX_STACK_LINE(75)
													::phoenix::Vector _p = _transform->pos;		HX_STACK_VAR(_p,"_p");
													HX_STACK_LINE(75)
													_this4->pos = _p;
													HX_STACK_LINE(75)
													if (((_p != null()))){
														HX_STACK_LINE(75)
														::phoenix::Vector_obj::Listen(_this4->pos,_this4->_pos_change_dyn());
														HX_STACK_LINE(75)
														if (((bool((_this4->pos_changed != null())) && bool(!(_this4->ignore_listeners))))){
															HX_STACK_LINE(75)
															_this4->pos_changed(_this4->pos);
														}
													}
													HX_STACK_LINE(75)
													_this4->pos;
												}
												HX_STACK_LINE(75)
												{
													HX_STACK_LINE(75)
													::phoenix::Quaternion _r = _transform->rotation;		HX_STACK_VAR(_r,"_r");
													HX_STACK_LINE(75)
													_this4->rotation = _r;
													HX_STACK_LINE(75)
													if (((_r != null()))){
														HX_STACK_LINE(75)
														{
															HX_STACK_LINE(75)
															::phoenix::Quaternion _q = _this4->rotation;		HX_STACK_VAR(_q,"_q");
															HX_STACK_LINE(75)
															Dynamic listener = _this4->_rotation_change_dyn();		HX_STACK_VAR(listener,"listener");
															HX_STACK_LINE(75)
															_q->listen_x = listener;
															HX_STACK_LINE(75)
															_q->listen_y = listener;
															HX_STACK_LINE(75)
															_q->listen_z = listener;
															HX_STACK_LINE(75)
															_q->listen_w = listener;
														}
														HX_STACK_LINE(75)
														if (((bool((_this4->rotation_changed != null())) && bool(!(_this4->ignore_listeners))))){
															HX_STACK_LINE(75)
															_this4->rotation_changed(_this4->rotation);
														}
													}
													HX_STACK_LINE(75)
													_this4->rotation;
												}
												HX_STACK_LINE(75)
												{
													HX_STACK_LINE(75)
													::phoenix::Vector _s = _transform->scale;		HX_STACK_VAR(_s,"_s");
													HX_STACK_LINE(75)
													_this4->scale = _s;
													HX_STACK_LINE(75)
													if (((_s != null()))){
														HX_STACK_LINE(75)
														::phoenix::Vector_obj::Listen(_this4->scale,_this4->_scale_change_dyn());
														HX_STACK_LINE(75)
														if (((bool((_this4->scale_changed != null())) && bool(!(_this4->ignore_listeners))))){
															HX_STACK_LINE(75)
															_this4->scale_changed(_this4->scale);
														}
													}
													HX_STACK_LINE(75)
													_this4->scale;
												}
											}
											HX_STACK_LINE(75)
											_this4;
										}
										HX_STACK_LINE(75)
										{
											HX_STACK_LINE(75)
											_this3->dirty = false;
											HX_STACK_LINE(75)
											if (((bool((bool((bool(_this3->dirty) && bool(!(_this3->_setup)))) && bool((_this3->_dirty_handlers != null())))) && bool((_this3->_dirty_handlers->__Field(HX_CSTRING("length"),true) > (int)0))))){
												HX_STACK_LINE(75)
												int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
												HX_STACK_LINE(75)
												Dynamic _g11 = _this3->_dirty_handlers;		HX_STACK_VAR(_g11,"_g11");
												HX_STACK_LINE(75)
												while((true)){
													HX_STACK_LINE(75)
													if ((!(((_g1 < _g11->__Field(HX_CSTRING("length"),true)))))){
														HX_STACK_LINE(75)
														break;
													}
													HX_STACK_LINE(75)
													Dynamic _handler = _g11->__GetItem(_g1);		HX_STACK_VAR(_handler,"_handler");
													HX_STACK_LINE(75)
													++(_g1);
													HX_STACK_LINE(75)
													if (((_handler != null()))){
														HX_STACK_LINE(75)
														_handler(_this3).Cast< Void >();
													}
												}
											}
											HX_STACK_LINE(75)
											_this3->dirty;
										}
										HX_STACK_LINE(75)
										_this3->_cleaning = false;
										HX_STACK_LINE(75)
										if (((bool((_this3->_clean_handlers != null())) && bool((_this3->_clean_handlers->__Field(HX_CSTRING("length"),true) > (int)0))))){
											HX_STACK_LINE(75)
											int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
											HX_STACK_LINE(75)
											Dynamic _g11 = _this3->_clean_handlers;		HX_STACK_VAR(_g11,"_g11");
											HX_STACK_LINE(75)
											while((true)){
												HX_STACK_LINE(75)
												if ((!(((_g1 < _g11->__Field(HX_CSTRING("length"),true)))))){
													HX_STACK_LINE(75)
													break;
												}
												HX_STACK_LINE(75)
												Dynamic _handler = _g11->__GetItem(_g1);		HX_STACK_VAR(_handler,"_handler");
												HX_STACK_LINE(75)
												++(_g1);
												HX_STACK_LINE(75)
												if (((_handler != null()))){
													HX_STACK_LINE(75)
													_handler(_this3).Cast< Void >();
												}
											}
										}
									}
								}
							}
							HX_STACK_LINE(75)
							if (((bool(_this2->dirty) && bool(!(_this2->_cleaning))))){
								HX_STACK_LINE(75)
								if ((!(_this2->dirty))){
									HX_STACK_LINE(75)
									Dynamic();
								}
								else{
									HX_STACK_LINE(75)
									_this2->_cleaning = true;
									HX_STACK_LINE(75)
									{
										HX_STACK_LINE(75)
										::phoenix::Matrix _this3 = _this2->_pos_matrix;		HX_STACK_VAR(_this3,"_this3");
										HX_STACK_LINE(75)
										{
											HX_STACK_LINE(75)
											Array< Float > e = _this3->elements;		HX_STACK_VAR(e,"e");
											HX_STACK_LINE(75)
											e[(int)0] = (int)1;
											HX_STACK_LINE(75)
											e[(int)4] = (int)0;
											HX_STACK_LINE(75)
											e[(int)8] = (int)0;
											HX_STACK_LINE(75)
											e[(int)12] = _this2->local->pos->x;
											HX_STACK_LINE(75)
											e[(int)1] = (int)0;
											HX_STACK_LINE(75)
											e[(int)5] = (int)1;
											HX_STACK_LINE(75)
											e[(int)9] = (int)0;
											HX_STACK_LINE(75)
											e[(int)13] = _this2->local->pos->y;
											HX_STACK_LINE(75)
											e[(int)2] = (int)0;
											HX_STACK_LINE(75)
											e[(int)6] = (int)0;
											HX_STACK_LINE(75)
											e[(int)10] = (int)1;
											HX_STACK_LINE(75)
											e[(int)14] = _this2->local->pos->z;
											HX_STACK_LINE(75)
											e[(int)3] = (int)0;
											HX_STACK_LINE(75)
											e[(int)7] = (int)0;
											HX_STACK_LINE(75)
											e[(int)11] = (int)0;
											HX_STACK_LINE(75)
											e[(int)15] = (int)1;
											HX_STACK_LINE(75)
											_this3;
										}
										HX_STACK_LINE(75)
										_this3;
									}
									HX_STACK_LINE(75)
									{
										HX_STACK_LINE(75)
										::phoenix::Matrix _this3 = _this2->_rotation_matrix;		HX_STACK_VAR(_this3,"_this3");
										HX_STACK_LINE(75)
										::phoenix::Quaternion q = _this2->local->rotation;		HX_STACK_VAR(q,"q");
										HX_STACK_LINE(75)
										Array< Float > te = _this3->elements;		HX_STACK_VAR(te,"te");
										HX_STACK_LINE(75)
										Float x2 = (q->x + q->x);		HX_STACK_VAR(x2,"x2");
										HX_STACK_LINE(75)
										Float y2 = (q->y + q->y);		HX_STACK_VAR(y2,"y2");
										HX_STACK_LINE(75)
										Float z2 = (q->z + q->z);		HX_STACK_VAR(z2,"z2");
										HX_STACK_LINE(75)
										Float xx = (q->x * x2);		HX_STACK_VAR(xx,"xx");
										HX_STACK_LINE(75)
										Float xy = (q->x * y2);		HX_STACK_VAR(xy,"xy");
										HX_STACK_LINE(75)
										Float xz = (q->x * z2);		HX_STACK_VAR(xz,"xz");
										HX_STACK_LINE(75)
										Float yy = (q->y * y2);		HX_STACK_VAR(yy,"yy");
										HX_STACK_LINE(75)
										Float yz = (q->y * z2);		HX_STACK_VAR(yz,"yz");
										HX_STACK_LINE(75)
										Float zz = (q->z * z2);		HX_STACK_VAR(zz,"zz");
										HX_STACK_LINE(75)
										Float wx = (q->w * x2);		HX_STACK_VAR(wx,"wx");
										HX_STACK_LINE(75)
										Float wy = (q->w * y2);		HX_STACK_VAR(wy,"wy");
										HX_STACK_LINE(75)
										Float wz = (q->w * z2);		HX_STACK_VAR(wz,"wz");
										HX_STACK_LINE(75)
										te[(int)0] = ((int)1 - ((yy + zz)));
										HX_STACK_LINE(75)
										te[(int)4] = (xy - wz);
										HX_STACK_LINE(75)
										te[(int)8] = (xz + wy);
										HX_STACK_LINE(75)
										te[(int)1] = (xy + wz);
										HX_STACK_LINE(75)
										te[(int)5] = ((int)1 - ((xx + zz)));
										HX_STACK_LINE(75)
										te[(int)9] = (yz - wx);
										HX_STACK_LINE(75)
										te[(int)2] = (xz - wy);
										HX_STACK_LINE(75)
										te[(int)6] = (yz + wx);
										HX_STACK_LINE(75)
										te[(int)10] = ((int)1 - ((xx + yy)));
										HX_STACK_LINE(75)
										te[(int)3] = (int)0;
										HX_STACK_LINE(75)
										te[(int)7] = (int)0;
										HX_STACK_LINE(75)
										te[(int)11] = (int)0;
										HX_STACK_LINE(75)
										te[(int)12] = (int)0;
										HX_STACK_LINE(75)
										te[(int)13] = (int)0;
										HX_STACK_LINE(75)
										te[(int)14] = (int)0;
										HX_STACK_LINE(75)
										te[(int)15] = (int)1;
										HX_STACK_LINE(75)
										_this3;
									}
									HX_STACK_LINE(75)
									{
										HX_STACK_LINE(75)
										::phoenix::Matrix _this3 = _this2->_origin_undo_matrix;		HX_STACK_VAR(_this3,"_this3");
										HX_STACK_LINE(75)
										{
											HX_STACK_LINE(75)
											Array< Float > e = _this3->elements;		HX_STACK_VAR(e,"e");
											HX_STACK_LINE(75)
											e[(int)0] = (int)1;
											HX_STACK_LINE(75)
											e[(int)4] = (int)0;
											HX_STACK_LINE(75)
											e[(int)8] = (int)0;
											HX_STACK_LINE(75)
											e[(int)12] = -(_this2->origin->x);
											HX_STACK_LINE(75)
											e[(int)1] = (int)0;
											HX_STACK_LINE(75)
											e[(int)5] = (int)1;
											HX_STACK_LINE(75)
											e[(int)9] = (int)0;
											HX_STACK_LINE(75)
											e[(int)13] = -(_this2->origin->y);
											HX_STACK_LINE(75)
											e[(int)2] = (int)0;
											HX_STACK_LINE(75)
											e[(int)6] = (int)0;
											HX_STACK_LINE(75)
											e[(int)10] = (int)1;
											HX_STACK_LINE(75)
											e[(int)14] = -(_this2->origin->z);
											HX_STACK_LINE(75)
											e[(int)3] = (int)0;
											HX_STACK_LINE(75)
											e[(int)7] = (int)0;
											HX_STACK_LINE(75)
											e[(int)11] = (int)0;
											HX_STACK_LINE(75)
											e[(int)15] = (int)1;
											HX_STACK_LINE(75)
											_this3;
										}
										HX_STACK_LINE(75)
										_this3;
									}
									HX_STACK_LINE(75)
									{
										HX_STACK_LINE(75)
										::phoenix::Matrix _this3 = _this2->local->matrix;		HX_STACK_VAR(_this3,"_this3");
										HX_STACK_LINE(75)
										{
											HX_STACK_LINE(75)
											Array< Float > e = _this3->elements;		HX_STACK_VAR(e,"e");
											HX_STACK_LINE(75)
											e[(int)0] = (int)1;
											HX_STACK_LINE(75)
											e[(int)4] = (int)0;
											HX_STACK_LINE(75)
											e[(int)8] = (int)0;
											HX_STACK_LINE(75)
											e[(int)12] = _this2->origin->x;
											HX_STACK_LINE(75)
											e[(int)1] = (int)0;
											HX_STACK_LINE(75)
											e[(int)5] = (int)1;
											HX_STACK_LINE(75)
											e[(int)9] = (int)0;
											HX_STACK_LINE(75)
											e[(int)13] = _this2->origin->y;
											HX_STACK_LINE(75)
											e[(int)2] = (int)0;
											HX_STACK_LINE(75)
											e[(int)6] = (int)0;
											HX_STACK_LINE(75)
											e[(int)10] = (int)1;
											HX_STACK_LINE(75)
											e[(int)14] = _this2->origin->z;
											HX_STACK_LINE(75)
											e[(int)3] = (int)0;
											HX_STACK_LINE(75)
											e[(int)7] = (int)0;
											HX_STACK_LINE(75)
											e[(int)11] = (int)0;
											HX_STACK_LINE(75)
											e[(int)15] = (int)1;
											HX_STACK_LINE(75)
											_this3;
										}
										HX_STACK_LINE(75)
										_this3;
									}
									HX_STACK_LINE(75)
									{
										HX_STACK_LINE(75)
										::phoenix::Matrix _this3 = _this2->local->matrix;		HX_STACK_VAR(_this3,"_this3");
										HX_STACK_LINE(75)
										::phoenix::Vector _v = _this2->local->scale;		HX_STACK_VAR(_v,"_v");
										HX_STACK_LINE(75)
										Array< Float > te = _this3->elements;		HX_STACK_VAR(te,"te");
										HX_STACK_LINE(75)
										Float _x = _v->x;		HX_STACK_VAR(_x,"_x");
										HX_STACK_LINE(75)
										Float _y = _v->y;		HX_STACK_VAR(_y,"_y");
										HX_STACK_LINE(75)
										Float _z = _v->z;		HX_STACK_VAR(_z,"_z");
										HX_STACK_LINE(75)
										hx::MultEq(te[(int)0],_x);
										HX_STACK_LINE(75)
										hx::MultEq(te[(int)4],_y);
										HX_STACK_LINE(75)
										hx::MultEq(te[(int)8],_z);
										HX_STACK_LINE(75)
										hx::MultEq(te[(int)1],_x);
										HX_STACK_LINE(75)
										hx::MultEq(te[(int)5],_y);
										HX_STACK_LINE(75)
										hx::MultEq(te[(int)9],_z);
										HX_STACK_LINE(75)
										hx::MultEq(te[(int)2],_x);
										HX_STACK_LINE(75)
										hx::MultEq(te[(int)6],_y);
										HX_STACK_LINE(75)
										hx::MultEq(te[(int)10],_z);
										HX_STACK_LINE(75)
										hx::MultEq(te[(int)3],_x);
										HX_STACK_LINE(75)
										hx::MultEq(te[(int)7],_y);
										HX_STACK_LINE(75)
										hx::MultEq(te[(int)11],_z);
										HX_STACK_LINE(75)
										_this3;
									}
									HX_STACK_LINE(75)
									{
										HX_STACK_LINE(75)
										::phoenix::Matrix _this3 = _this2->local->matrix;		HX_STACK_VAR(_this3,"_this3");
										HX_STACK_LINE(75)
										{
											HX_STACK_LINE(75)
											Array< Float > ae = _this3->elements;		HX_STACK_VAR(ae,"ae");
											HX_STACK_LINE(75)
											Array< Float > be = _this2->_rotation_matrix->elements;		HX_STACK_VAR(be,"be");
											HX_STACK_LINE(75)
											Array< Float > te = _this3->elements;		HX_STACK_VAR(te,"te");
											HX_STACK_LINE(75)
											Float a11 = ae->__get((int)0);		HX_STACK_VAR(a11,"a11");
											HX_STACK_LINE(75)
											Float a12 = ae->__get((int)4);		HX_STACK_VAR(a12,"a12");
											HX_STACK_LINE(75)
											Float a13 = ae->__get((int)8);		HX_STACK_VAR(a13,"a13");
											HX_STACK_LINE(75)
											Float a14 = ae->__get((int)12);		HX_STACK_VAR(a14,"a14");
											HX_STACK_LINE(75)
											Float a21 = ae->__get((int)1);		HX_STACK_VAR(a21,"a21");
											HX_STACK_LINE(75)
											Float a22 = ae->__get((int)5);		HX_STACK_VAR(a22,"a22");
											HX_STACK_LINE(75)
											Float a23 = ae->__get((int)9);		HX_STACK_VAR(a23,"a23");
											HX_STACK_LINE(75)
											Float a24 = ae->__get((int)13);		HX_STACK_VAR(a24,"a24");
											HX_STACK_LINE(75)
											Float a31 = ae->__get((int)2);		HX_STACK_VAR(a31,"a31");
											HX_STACK_LINE(75)
											Float a32 = ae->__get((int)6);		HX_STACK_VAR(a32,"a32");
											HX_STACK_LINE(75)
											Float a33 = ae->__get((int)10);		HX_STACK_VAR(a33,"a33");
											HX_STACK_LINE(75)
											Float a34 = ae->__get((int)14);		HX_STACK_VAR(a34,"a34");
											HX_STACK_LINE(75)
											Float a41 = ae->__get((int)3);		HX_STACK_VAR(a41,"a41");
											HX_STACK_LINE(75)
											Float a42 = ae->__get((int)7);		HX_STACK_VAR(a42,"a42");
											HX_STACK_LINE(75)
											Float a43 = ae->__get((int)11);		HX_STACK_VAR(a43,"a43");
											HX_STACK_LINE(75)
											Float a44 = ae->__get((int)15);		HX_STACK_VAR(a44,"a44");
											HX_STACK_LINE(75)
											Float b11 = be->__get((int)0);		HX_STACK_VAR(b11,"b11");
											HX_STACK_LINE(75)
											Float b12 = be->__get((int)4);		HX_STACK_VAR(b12,"b12");
											HX_STACK_LINE(75)
											Float b13 = be->__get((int)8);		HX_STACK_VAR(b13,"b13");
											HX_STACK_LINE(75)
											Float b14 = be->__get((int)12);		HX_STACK_VAR(b14,"b14");
											HX_STACK_LINE(75)
											Float b21 = be->__get((int)1);		HX_STACK_VAR(b21,"b21");
											HX_STACK_LINE(75)
											Float b22 = be->__get((int)5);		HX_STACK_VAR(b22,"b22");
											HX_STACK_LINE(75)
											Float b23 = be->__get((int)9);		HX_STACK_VAR(b23,"b23");
											HX_STACK_LINE(75)
											Float b24 = be->__get((int)13);		HX_STACK_VAR(b24,"b24");
											HX_STACK_LINE(75)
											Float b31 = be->__get((int)2);		HX_STACK_VAR(b31,"b31");
											HX_STACK_LINE(75)
											Float b32 = be->__get((int)6);		HX_STACK_VAR(b32,"b32");
											HX_STACK_LINE(75)
											Float b33 = be->__get((int)10);		HX_STACK_VAR(b33,"b33");
											HX_STACK_LINE(75)
											Float b34 = be->__get((int)14);		HX_STACK_VAR(b34,"b34");
											HX_STACK_LINE(75)
											Float b41 = be->__get((int)3);		HX_STACK_VAR(b41,"b41");
											HX_STACK_LINE(75)
											Float b42 = be->__get((int)7);		HX_STACK_VAR(b42,"b42");
											HX_STACK_LINE(75)
											Float b43 = be->__get((int)11);		HX_STACK_VAR(b43,"b43");
											HX_STACK_LINE(75)
											Float b44 = be->__get((int)15);		HX_STACK_VAR(b44,"b44");
											HX_STACK_LINE(75)
											te[(int)0] = ((((a11 * b11) + (a12 * b21)) + (a13 * b31)) + (a14 * b41));
											HX_STACK_LINE(75)
											te[(int)4] = ((((a11 * b12) + (a12 * b22)) + (a13 * b32)) + (a14 * b42));
											HX_STACK_LINE(75)
											te[(int)8] = ((((a11 * b13) + (a12 * b23)) + (a13 * b33)) + (a14 * b43));
											HX_STACK_LINE(75)
											te[(int)12] = ((((a11 * b14) + (a12 * b24)) + (a13 * b34)) + (a14 * b44));
											HX_STACK_LINE(75)
											te[(int)1] = ((((a21 * b11) + (a22 * b21)) + (a23 * b31)) + (a24 * b41));
											HX_STACK_LINE(75)
											te[(int)5] = ((((a21 * b12) + (a22 * b22)) + (a23 * b32)) + (a24 * b42));
											HX_STACK_LINE(75)
											te[(int)9] = ((((a21 * b13) + (a22 * b23)) + (a23 * b33)) + (a24 * b43));
											HX_STACK_LINE(75)
											te[(int)13] = ((((a21 * b14) + (a22 * b24)) + (a23 * b34)) + (a24 * b44));
											HX_STACK_LINE(75)
											te[(int)2] = ((((a31 * b11) + (a32 * b21)) + (a33 * b31)) + (a34 * b41));
											HX_STACK_LINE(75)
											te[(int)6] = ((((a31 * b12) + (a32 * b22)) + (a33 * b32)) + (a34 * b42));
											HX_STACK_LINE(75)
											te[(int)10] = ((((a31 * b13) + (a32 * b23)) + (a33 * b33)) + (a34 * b43));
											HX_STACK_LINE(75)
											te[(int)14] = ((((a31 * b14) + (a32 * b24)) + (a33 * b34)) + (a34 * b44));
											HX_STACK_LINE(75)
											te[(int)3] = ((((a41 * b11) + (a42 * b21)) + (a43 * b31)) + (a44 * b41));
											HX_STACK_LINE(75)
											te[(int)7] = ((((a41 * b12) + (a42 * b22)) + (a43 * b32)) + (a44 * b42));
											HX_STACK_LINE(75)
											te[(int)11] = ((((a41 * b13) + (a42 * b23)) + (a43 * b33)) + (a44 * b43));
											HX_STACK_LINE(75)
											te[(int)15] = ((((a41 * b14) + (a42 * b24)) + (a43 * b34)) + (a44 * b44));
											HX_STACK_LINE(75)
											_this3;
										}
									}
									HX_STACK_LINE(75)
									{
										HX_STACK_LINE(75)
										::phoenix::Matrix _this3 = _this2->local->matrix;		HX_STACK_VAR(_this3,"_this3");
										HX_STACK_LINE(75)
										::phoenix::Vector _v = _this2->local->pos;		HX_STACK_VAR(_v,"_v");
										HX_STACK_LINE(75)
										Array< Float > te = _this3->elements;		HX_STACK_VAR(te,"te");
										HX_STACK_LINE(75)
										te[(int)12] = _v->x;
										HX_STACK_LINE(75)
										te[(int)13] = _v->y;
										HX_STACK_LINE(75)
										te[(int)14] = _v->z;
										HX_STACK_LINE(75)
										_this3;
									}
									HX_STACK_LINE(75)
									{
										HX_STACK_LINE(75)
										::phoenix::Matrix _this3 = _this2->local->matrix;		HX_STACK_VAR(_this3,"_this3");
										HX_STACK_LINE(75)
										{
											HX_STACK_LINE(75)
											Array< Float > ae = _this3->elements;		HX_STACK_VAR(ae,"ae");
											HX_STACK_LINE(75)
											Array< Float > be = _this2->_origin_undo_matrix->elements;		HX_STACK_VAR(be,"be");
											HX_STACK_LINE(75)
											Array< Float > te = _this3->elements;		HX_STACK_VAR(te,"te");
											HX_STACK_LINE(75)
											Float a11 = ae->__get((int)0);		HX_STACK_VAR(a11,"a11");
											HX_STACK_LINE(75)
											Float a12 = ae->__get((int)4);		HX_STACK_VAR(a12,"a12");
											HX_STACK_LINE(75)
											Float a13 = ae->__get((int)8);		HX_STACK_VAR(a13,"a13");
											HX_STACK_LINE(75)
											Float a14 = ae->__get((int)12);		HX_STACK_VAR(a14,"a14");
											HX_STACK_LINE(75)
											Float a21 = ae->__get((int)1);		HX_STACK_VAR(a21,"a21");
											HX_STACK_LINE(75)
											Float a22 = ae->__get((int)5);		HX_STACK_VAR(a22,"a22");
											HX_STACK_LINE(75)
											Float a23 = ae->__get((int)9);		HX_STACK_VAR(a23,"a23");
											HX_STACK_LINE(75)
											Float a24 = ae->__get((int)13);		HX_STACK_VAR(a24,"a24");
											HX_STACK_LINE(75)
											Float a31 = ae->__get((int)2);		HX_STACK_VAR(a31,"a31");
											HX_STACK_LINE(75)
											Float a32 = ae->__get((int)6);		HX_STACK_VAR(a32,"a32");
											HX_STACK_LINE(75)
											Float a33 = ae->__get((int)10);		HX_STACK_VAR(a33,"a33");
											HX_STACK_LINE(75)
											Float a34 = ae->__get((int)14);		HX_STACK_VAR(a34,"a34");
											HX_STACK_LINE(75)
											Float a41 = ae->__get((int)3);		HX_STACK_VAR(a41,"a41");
											HX_STACK_LINE(75)
											Float a42 = ae->__get((int)7);		HX_STACK_VAR(a42,"a42");
											HX_STACK_LINE(75)
											Float a43 = ae->__get((int)11);		HX_STACK_VAR(a43,"a43");
											HX_STACK_LINE(75)
											Float a44 = ae->__get((int)15);		HX_STACK_VAR(a44,"a44");
											HX_STACK_LINE(75)
											Float b11 = be->__get((int)0);		HX_STACK_VAR(b11,"b11");
											HX_STACK_LINE(75)
											Float b12 = be->__get((int)4);		HX_STACK_VAR(b12,"b12");
											HX_STACK_LINE(75)
											Float b13 = be->__get((int)8);		HX_STACK_VAR(b13,"b13");
											HX_STACK_LINE(75)
											Float b14 = be->__get((int)12);		HX_STACK_VAR(b14,"b14");
											HX_STACK_LINE(75)
											Float b21 = be->__get((int)1);		HX_STACK_VAR(b21,"b21");
											HX_STACK_LINE(75)
											Float b22 = be->__get((int)5);		HX_STACK_VAR(b22,"b22");
											HX_STACK_LINE(75)
											Float b23 = be->__get((int)9);		HX_STACK_VAR(b23,"b23");
											HX_STACK_LINE(75)
											Float b24 = be->__get((int)13);		HX_STACK_VAR(b24,"b24");
											HX_STACK_LINE(75)
											Float b31 = be->__get((int)2);		HX_STACK_VAR(b31,"b31");
											HX_STACK_LINE(75)
											Float b32 = be->__get((int)6);		HX_STACK_VAR(b32,"b32");
											HX_STACK_LINE(75)
											Float b33 = be->__get((int)10);		HX_STACK_VAR(b33,"b33");
											HX_STACK_LINE(75)
											Float b34 = be->__get((int)14);		HX_STACK_VAR(b34,"b34");
											HX_STACK_LINE(75)
											Float b41 = be->__get((int)3);		HX_STACK_VAR(b41,"b41");
											HX_STACK_LINE(75)
											Float b42 = be->__get((int)7);		HX_STACK_VAR(b42,"b42");
											HX_STACK_LINE(75)
											Float b43 = be->__get((int)11);		HX_STACK_VAR(b43,"b43");
											HX_STACK_LINE(75)
											Float b44 = be->__get((int)15);		HX_STACK_VAR(b44,"b44");
											HX_STACK_LINE(75)
											te[(int)0] = ((((a11 * b11) + (a12 * b21)) + (a13 * b31)) + (a14 * b41));
											HX_STACK_LINE(75)
											te[(int)4] = ((((a11 * b12) + (a12 * b22)) + (a13 * b32)) + (a14 * b42));
											HX_STACK_LINE(75)
											te[(int)8] = ((((a11 * b13) + (a12 * b23)) + (a13 * b33)) + (a14 * b43));
											HX_STACK_LINE(75)
											te[(int)12] = ((((a11 * b14) + (a12 * b24)) + (a13 * b34)) + (a14 * b44));
											HX_STACK_LINE(75)
											te[(int)1] = ((((a21 * b11) + (a22 * b21)) + (a23 * b31)) + (a24 * b41));
											HX_STACK_LINE(75)
											te[(int)5] = ((((a21 * b12) + (a22 * b22)) + (a23 * b32)) + (a24 * b42));
											HX_STACK_LINE(75)
											te[(int)9] = ((((a21 * b13) + (a22 * b23)) + (a23 * b33)) + (a24 * b43));
											HX_STACK_LINE(75)
											te[(int)13] = ((((a21 * b14) + (a22 * b24)) + (a23 * b34)) + (a24 * b44));
											HX_STACK_LINE(75)
											te[(int)2] = ((((a31 * b11) + (a32 * b21)) + (a33 * b31)) + (a34 * b41));
											HX_STACK_LINE(75)
											te[(int)6] = ((((a31 * b12) + (a32 * b22)) + (a33 * b32)) + (a34 * b42));
											HX_STACK_LINE(75)
											te[(int)10] = ((((a31 * b13) + (a32 * b23)) + (a33 * b33)) + (a34 * b43));
											HX_STACK_LINE(75)
											te[(int)14] = ((((a31 * b14) + (a32 * b24)) + (a33 * b34)) + (a34 * b44));
											HX_STACK_LINE(75)
											te[(int)3] = ((((a41 * b11) + (a42 * b21)) + (a43 * b31)) + (a44 * b41));
											HX_STACK_LINE(75)
											te[(int)7] = ((((a41 * b12) + (a42 * b22)) + (a43 * b32)) + (a44 * b42));
											HX_STACK_LINE(75)
											te[(int)11] = ((((a41 * b13) + (a42 * b23)) + (a43 * b33)) + (a44 * b43));
											HX_STACK_LINE(75)
											te[(int)15] = ((((a41 * b14) + (a42 * b24)) + (a43 * b34)) + (a44 * b44));
											HX_STACK_LINE(75)
											_this3;
										}
									}
									HX_STACK_LINE(75)
									if (((_this2->parent != null()))){
										HX_STACK_LINE(75)
										::phoenix::Spatial _this3 = _this2->get_world();		HX_STACK_VAR(_this3,"_this3");
										HX_STACK_LINE(75)
										::phoenix::Matrix _m1;		HX_STACK_VAR(_m1,"_m1");
										HX_STACK_LINE(75)
										{
											HX_STACK_LINE(75)
											::phoenix::Matrix _this4;		HX_STACK_VAR(_this4,"_this4");
											HX_STACK_LINE(75)
											{
												HX_STACK_LINE(75)
												::phoenix::Spatial _this5 = _this2->get_world();		HX_STACK_VAR(_this5,"_this5");
												HX_STACK_LINE(75)
												_this4 = _this5->matrix;
											}
											HX_STACK_LINE(75)
											::phoenix::Matrix _a;		HX_STACK_VAR(_a,"_a");
											HX_STACK_LINE(75)
											{
												HX_STACK_LINE(75)
												::phoenix::Spatial _this5 = _this2->parent->get_world();		HX_STACK_VAR(_this5,"_this5");
												HX_STACK_LINE(75)
												_a = _this5->matrix;
											}
											HX_STACK_LINE(75)
											Array< Float > ae = _a->elements;		HX_STACK_VAR(ae,"ae");
											HX_STACK_LINE(75)
											Array< Float > be = _this2->local->matrix->elements;		HX_STACK_VAR(be,"be");
											HX_STACK_LINE(75)
											Array< Float > te = _this4->elements;		HX_STACK_VAR(te,"te");
											HX_STACK_LINE(75)
											Float a11 = ae->__get((int)0);		HX_STACK_VAR(a11,"a11");
											HX_STACK_LINE(75)
											Float a12 = ae->__get((int)4);		HX_STACK_VAR(a12,"a12");
											HX_STACK_LINE(75)
											Float a13 = ae->__get((int)8);		HX_STACK_VAR(a13,"a13");
											HX_STACK_LINE(75)
											Float a14 = ae->__get((int)12);		HX_STACK_VAR(a14,"a14");
											HX_STACK_LINE(75)
											Float a21 = ae->__get((int)1);		HX_STACK_VAR(a21,"a21");
											HX_STACK_LINE(75)
											Float a22 = ae->__get((int)5);		HX_STACK_VAR(a22,"a22");
											HX_STACK_LINE(75)
											Float a23 = ae->__get((int)9);		HX_STACK_VAR(a23,"a23");
											HX_STACK_LINE(75)
											Float a24 = ae->__get((int)13);		HX_STACK_VAR(a24,"a24");
											HX_STACK_LINE(75)
											Float a31 = ae->__get((int)2);		HX_STACK_VAR(a31,"a31");
											HX_STACK_LINE(75)
											Float a32 = ae->__get((int)6);		HX_STACK_VAR(a32,"a32");
											HX_STACK_LINE(75)
											Float a33 = ae->__get((int)10);		HX_STACK_VAR(a33,"a33");
											HX_STACK_LINE(75)
											Float a34 = ae->__get((int)14);		HX_STACK_VAR(a34,"a34");
											HX_STACK_LINE(75)
											Float a41 = ae->__get((int)3);		HX_STACK_VAR(a41,"a41");
											HX_STACK_LINE(75)
											Float a42 = ae->__get((int)7);		HX_STACK_VAR(a42,"a42");
											HX_STACK_LINE(75)
											Float a43 = ae->__get((int)11);		HX_STACK_VAR(a43,"a43");
											HX_STACK_LINE(75)
											Float a44 = ae->__get((int)15);		HX_STACK_VAR(a44,"a44");
											HX_STACK_LINE(75)
											Float b11 = be->__get((int)0);		HX_STACK_VAR(b11,"b11");
											HX_STACK_LINE(75)
											Float b12 = be->__get((int)4);		HX_STACK_VAR(b12,"b12");
											HX_STACK_LINE(75)
											Float b13 = be->__get((int)8);		HX_STACK_VAR(b13,"b13");
											HX_STACK_LINE(75)
											Float b14 = be->__get((int)12);		HX_STACK_VAR(b14,"b14");
											HX_STACK_LINE(75)
											Float b21 = be->__get((int)1);		HX_STACK_VAR(b21,"b21");
											HX_STACK_LINE(75)
											Float b22 = be->__get((int)5);		HX_STACK_VAR(b22,"b22");
											HX_STACK_LINE(75)
											Float b23 = be->__get((int)9);		HX_STACK_VAR(b23,"b23");
											HX_STACK_LINE(75)
											Float b24 = be->__get((int)13);		HX_STACK_VAR(b24,"b24");
											HX_STACK_LINE(75)
											Float b31 = be->__get((int)2);		HX_STACK_VAR(b31,"b31");
											HX_STACK_LINE(75)
											Float b32 = be->__get((int)6);		HX_STACK_VAR(b32,"b32");
											HX_STACK_LINE(75)
											Float b33 = be->__get((int)10);		HX_STACK_VAR(b33,"b33");
											HX_STACK_LINE(75)
											Float b34 = be->__get((int)14);		HX_STACK_VAR(b34,"b34");
											HX_STACK_LINE(75)
											Float b41 = be->__get((int)3);		HX_STACK_VAR(b41,"b41");
											HX_STACK_LINE(75)
											Float b42 = be->__get((int)7);		HX_STACK_VAR(b42,"b42");
											HX_STACK_LINE(75)
											Float b43 = be->__get((int)11);		HX_STACK_VAR(b43,"b43");
											HX_STACK_LINE(75)
											Float b44 = be->__get((int)15);		HX_STACK_VAR(b44,"b44");
											HX_STACK_LINE(75)
											te[(int)0] = ((((a11 * b11) + (a12 * b21)) + (a13 * b31)) + (a14 * b41));
											HX_STACK_LINE(75)
											te[(int)4] = ((((a11 * b12) + (a12 * b22)) + (a13 * b32)) + (a14 * b42));
											HX_STACK_LINE(75)
											te[(int)8] = ((((a11 * b13) + (a12 * b23)) + (a13 * b33)) + (a14 * b43));
											HX_STACK_LINE(75)
											te[(int)12] = ((((a11 * b14) + (a12 * b24)) + (a13 * b34)) + (a14 * b44));
											HX_STACK_LINE(75)
											te[(int)1] = ((((a21 * b11) + (a22 * b21)) + (a23 * b31)) + (a24 * b41));
											HX_STACK_LINE(75)
											te[(int)5] = ((((a21 * b12) + (a22 * b22)) + (a23 * b32)) + (a24 * b42));
											HX_STACK_LINE(75)
											te[(int)9] = ((((a21 * b13) + (a22 * b23)) + (a23 * b33)) + (a24 * b43));
											HX_STACK_LINE(75)
											te[(int)13] = ((((a21 * b14) + (a22 * b24)) + (a23 * b34)) + (a24 * b44));
											HX_STACK_LINE(75)
											te[(int)2] = ((((a31 * b11) + (a32 * b21)) + (a33 * b31)) + (a34 * b41));
											HX_STACK_LINE(75)
											te[(int)6] = ((((a31 * b12) + (a32 * b22)) + (a33 * b32)) + (a34 * b42));
											HX_STACK_LINE(75)
											te[(int)10] = ((((a31 * b13) + (a32 * b23)) + (a33 * b33)) + (a34 * b43));
											HX_STACK_LINE(75)
											te[(int)14] = ((((a31 * b14) + (a32 * b24)) + (a33 * b34)) + (a34 * b44));
											HX_STACK_LINE(75)
											te[(int)3] = ((((a41 * b11) + (a42 * b21)) + (a43 * b31)) + (a44 * b41));
											HX_STACK_LINE(75)
											te[(int)7] = ((((a41 * b12) + (a42 * b22)) + (a43 * b32)) + (a44 * b42));
											HX_STACK_LINE(75)
											te[(int)11] = ((((a41 * b13) + (a42 * b23)) + (a43 * b33)) + (a44 * b43));
											HX_STACK_LINE(75)
											te[(int)15] = ((((a41 * b14) + (a42 * b24)) + (a43 * b34)) + (a44 * b44));
											HX_STACK_LINE(75)
											_m1 = _this4;
										}
										HX_STACK_LINE(75)
										_this3->matrix = _m1;
										HX_STACK_LINE(75)
										if (((_m1 != null()))){
											HX_STACK_LINE(75)
											::snow::platform::native::utils::Float32Array _g21;		HX_STACK_VAR(_g21,"_g21");
											HX_STACK_LINE(75)
											{
												HX_STACK_LINE(75)
												::phoenix::Matrix _this4 = _this3->matrix;		HX_STACK_VAR(_this4,"_this4");
												HX_STACK_LINE(75)
												{
													HX_STACK_LINE(75)
													::snow::platform::native::utils::Float32Array _this5 = _this4->_float32array;		HX_STACK_VAR(_this5,"_this5");
													HX_STACK_LINE(75)
													Dynamic bufferOrArray = _this4->elements;		HX_STACK_VAR(bufferOrArray,"bufferOrArray");
													HX_STACK_LINE(75)
													int offset = (int)0;		HX_STACK_VAR(offset,"offset");
													HX_STACK_LINE(75)
													if ((::Std_obj::is(bufferOrArray,hx::ClassOf< Array<int> >()))){
														HX_STACK_LINE(75)
														Array< Float > floats = bufferOrArray;		HX_STACK_VAR(floats,"floats");
														HX_STACK_LINE(75)
														{
															HX_STACK_LINE(75)
															int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
															HX_STACK_LINE(75)
															int _g2 = floats->length;		HX_STACK_VAR(_g2,"_g2");
															HX_STACK_LINE(75)
															while((true)){
																HX_STACK_LINE(75)
																if ((!(((_g1 < _g2))))){
																	HX_STACK_LINE(75)
																	break;
																}
																HX_STACK_LINE(75)
																int i1 = (_g1)++;		HX_STACK_VAR(i1,"i1");
																HX_STACK_LINE(75)
																::__hxcpp_memory_set_float(_this5->bytes,(((int((i1 + offset)) << int((int)2))) + _this5->byteOffset),floats->__get(i1));
															}
														}
													}
													else{
														HX_STACK_LINE(75)
														if ((::Std_obj::is(bufferOrArray,hx::ClassOf< ::snow::platform::native::utils::Float32Array >()))){
															HX_STACK_LINE(75)
															::snow::platform::native::utils::Float32Array floats = bufferOrArray;		HX_STACK_VAR(floats,"floats");
															HX_STACK_LINE(75)
															{
																HX_STACK_LINE(75)
																int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
																HX_STACK_LINE(75)
																int _g2 = floats->length;		HX_STACK_VAR(_g2,"_g2");
																HX_STACK_LINE(75)
																while((true)){
																	HX_STACK_LINE(75)
																	if ((!(((_g1 < _g2))))){
																		HX_STACK_LINE(75)
																		break;
																	}
																	HX_STACK_LINE(75)
																	int i1 = (_g1)++;		HX_STACK_VAR(i1,"i1");
																	HX_STACK_LINE(75)
																	::__hxcpp_memory_set_float(_this5->bytes,(((int((i1 + offset)) << int((int)2))) + _this5->byteOffset),floats->__get(i1));
																}
															}
														}
														else{
															HX_STACK_LINE(75)
															HX_STACK_DO_THROW(HX_CSTRING("Invalid input buffer"));
														}
													}
												}
												HX_STACK_LINE(75)
												_g21 = ::snow::platform::native::utils::Float32Array_obj::__new(_this4->_float32array,null(),null());
											}
											HX_STACK_LINE(75)
											_this3->floats = _g21;
										}
										HX_STACK_LINE(75)
										_this3->matrix;
									}
									else{
										HX_STACK_LINE(75)
										::phoenix::Spatial _this3 = _this2->get_world();		HX_STACK_VAR(_this3,"_this3");
										HX_STACK_LINE(75)
										::phoenix::Matrix _m1;		HX_STACK_VAR(_m1,"_m1");
										HX_STACK_LINE(75)
										{
											HX_STACK_LINE(75)
											Array< Float > te = _this2->local->matrix->elements;		HX_STACK_VAR(te,"te");
											HX_STACK_LINE(75)
											_m1 = ::phoenix::Matrix_obj::__new(te->__get((int)0),te->__get((int)4),te->__get((int)8),te->__get((int)12),te->__get((int)1),te->__get((int)5),te->__get((int)9),te->__get((int)13),te->__get((int)2),te->__get((int)6),te->__get((int)10),te->__get((int)14),te->__get((int)3),te->__get((int)7),te->__get((int)11),te->__get((int)15));
										}
										HX_STACK_LINE(75)
										_this3->matrix = _m1;
										HX_STACK_LINE(75)
										if (((_m1 != null()))){
											HX_STACK_LINE(75)
											::snow::platform::native::utils::Float32Array _g22;		HX_STACK_VAR(_g22,"_g22");
											HX_STACK_LINE(75)
											{
												HX_STACK_LINE(75)
												::phoenix::Matrix _this4 = _this3->matrix;		HX_STACK_VAR(_this4,"_this4");
												HX_STACK_LINE(75)
												{
													HX_STACK_LINE(75)
													::snow::platform::native::utils::Float32Array _this5 = _this4->_float32array;		HX_STACK_VAR(_this5,"_this5");
													HX_STACK_LINE(75)
													Dynamic bufferOrArray = _this4->elements;		HX_STACK_VAR(bufferOrArray,"bufferOrArray");
													HX_STACK_LINE(75)
													int offset = (int)0;		HX_STACK_VAR(offset,"offset");
													HX_STACK_LINE(75)
													if ((::Std_obj::is(bufferOrArray,hx::ClassOf< Array<int> >()))){
														HX_STACK_LINE(75)
														Array< Float > floats = bufferOrArray;		HX_STACK_VAR(floats,"floats");
														HX_STACK_LINE(75)
														{
															HX_STACK_LINE(75)
															int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
															HX_STACK_LINE(75)
															int _g2 = floats->length;		HX_STACK_VAR(_g2,"_g2");
															HX_STACK_LINE(75)
															while((true)){
																HX_STACK_LINE(75)
																if ((!(((_g1 < _g2))))){
																	HX_STACK_LINE(75)
																	break;
																}
																HX_STACK_LINE(75)
																int i1 = (_g1)++;		HX_STACK_VAR(i1,"i1");
																HX_STACK_LINE(75)
																::__hxcpp_memory_set_float(_this5->bytes,(((int((i1 + offset)) << int((int)2))) + _this5->byteOffset),floats->__get(i1));
															}
														}
													}
													else{
														HX_STACK_LINE(75)
														if ((::Std_obj::is(bufferOrArray,hx::ClassOf< ::snow::platform::native::utils::Float32Array >()))){
															HX_STACK_LINE(75)
															::snow::platform::native::utils::Float32Array floats = bufferOrArray;		HX_STACK_VAR(floats,"floats");
															HX_STACK_LINE(75)
															{
																HX_STACK_LINE(75)
																int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
																HX_STACK_LINE(75)
																int _g2 = floats->length;		HX_STACK_VAR(_g2,"_g2");
																HX_STACK_LINE(75)
																while((true)){
																	HX_STACK_LINE(75)
																	if ((!(((_g1 < _g2))))){
																		HX_STACK_LINE(75)
																		break;
																	}
																	HX_STACK_LINE(75)
																	int i1 = (_g1)++;		HX_STACK_VAR(i1,"i1");
																	HX_STACK_LINE(75)
																	::__hxcpp_memory_set_float(_this5->bytes,(((int((i1 + offset)) << int((int)2))) + _this5->byteOffset),floats->__get(i1));
																}
															}
														}
														else{
															HX_STACK_LINE(75)
															HX_STACK_DO_THROW(HX_CSTRING("Invalid input buffer"));
														}
													}
												}
												HX_STACK_LINE(75)
												_g22 = ::snow::platform::native::utils::Float32Array_obj::__new(_this4->_float32array,null(),null());
											}
											HX_STACK_LINE(75)
											_this3->floats = _g22;
										}
										HX_STACK_LINE(75)
										_this3->matrix;
									}
									HX_STACK_LINE(75)
									{
										HX_STACK_LINE(75)
										::phoenix::Spatial _this3 = _this2->get_world();		HX_STACK_VAR(_this3,"_this3");
										HX_STACK_LINE(75)
										if ((_this3->auto_decompose)){
											HX_STACK_LINE(75)
											::phoenix::MatrixTransform _transform;		HX_STACK_VAR(_transform,"_transform");
											HX_STACK_LINE(75)
											{
												HX_STACK_LINE(75)
												::phoenix::Matrix _this4 = _this3->matrix;		HX_STACK_VAR(_this4,"_this4");
												HX_STACK_LINE(75)
												::phoenix::Vector _position = null();		HX_STACK_VAR(_position,"_position");
												HX_STACK_LINE(75)
												::phoenix::Quaternion _quaternion = null();		HX_STACK_VAR(_quaternion,"_quaternion");
												HX_STACK_LINE(75)
												::phoenix::Vector _scale = null();		HX_STACK_VAR(_scale,"_scale");
												HX_STACK_LINE(75)
												Array< Float > te = _this4->elements;		HX_STACK_VAR(te,"te");
												HX_STACK_LINE(75)
												::phoenix::Matrix matrix = ::phoenix::Matrix_obj::__new(null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(matrix,"matrix");
												HX_STACK_LINE(75)
												Float _ax_x = te->__get((int)0);		HX_STACK_VAR(_ax_x,"_ax_x");
												HX_STACK_LINE(75)
												Float _ax_y = te->__get((int)1);		HX_STACK_VAR(_ax_y,"_ax_y");
												HX_STACK_LINE(75)
												Float _ax_z = te->__get((int)2);		HX_STACK_VAR(_ax_z,"_ax_z");
												HX_STACK_LINE(75)
												Float _ay_x = te->__get((int)4);		HX_STACK_VAR(_ay_x,"_ay_x");
												HX_STACK_LINE(75)
												Float _ay_y = te->__get((int)5);		HX_STACK_VAR(_ay_y,"_ay_y");
												HX_STACK_LINE(75)
												Float _ay_z = te->__get((int)6);		HX_STACK_VAR(_ay_z,"_ay_z");
												HX_STACK_LINE(75)
												Float _az_x = te->__get((int)8);		HX_STACK_VAR(_az_x,"_az_x");
												HX_STACK_LINE(75)
												Float _az_y = te->__get((int)9);		HX_STACK_VAR(_az_y,"_az_y");
												HX_STACK_LINE(75)
												Float _az_z = te->__get((int)10);		HX_STACK_VAR(_az_z,"_az_z");
												HX_STACK_LINE(75)
												Float _ax_length = ::Math_obj::sqrt((((_ax_x * _ax_x) + (_ax_y * _ax_y)) + (_ax_z * _ax_z)));		HX_STACK_VAR(_ax_length,"_ax_length");
												HX_STACK_LINE(75)
												Float _ay_length = ::Math_obj::sqrt((((_ay_x * _ay_x) + (_ay_y * _ay_y)) + (_ay_z * _ay_z)));		HX_STACK_VAR(_ay_length,"_ay_length");
												HX_STACK_LINE(75)
												Float _az_length = ::Math_obj::sqrt((((_az_x * _az_x) + (_az_y * _az_y)) + (_az_z * _az_z)));		HX_STACK_VAR(_az_length,"_az_length");
												HX_STACK_LINE(75)
												if (((_quaternion == null()))){
													HX_STACK_LINE(75)
													::phoenix::Quaternion _g23 = ::phoenix::Quaternion_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(_g23,"_g23");
													HX_STACK_LINE(75)
													_quaternion = _g23;
												}
												HX_STACK_LINE(75)
												if (((_position == null()))){
													HX_STACK_LINE(75)
													::phoenix::Vector _g24 = ::phoenix::Vector_obj::__new(te->__get((int)12),te->__get((int)13),te->__get((int)14),null());		HX_STACK_VAR(_g24,"_g24");
													HX_STACK_LINE(75)
													_position = _g24;
												}
												else{
													HX_STACK_LINE(75)
													{
														HX_STACK_LINE(75)
														Float _x = te->__get((int)12);		HX_STACK_VAR(_x,"_x");
														HX_STACK_LINE(75)
														_position->x = _x;
														HX_STACK_LINE(75)
														if ((_position->_construct)){
															HX_STACK_LINE(75)
															_position->x;
														}
														else{
															HX_STACK_LINE(75)
															if (((bool((_position->listen_x != null())) && bool(!(_position->ignore_listeners))))){
																HX_STACK_LINE(75)
																_position->listen_x(_x);
															}
															HX_STACK_LINE(75)
															_position->x;
														}
													}
													HX_STACK_LINE(75)
													{
														HX_STACK_LINE(75)
														Float _y = te->__get((int)13);		HX_STACK_VAR(_y,"_y");
														HX_STACK_LINE(75)
														_position->y = _y;
														HX_STACK_LINE(75)
														if ((_position->_construct)){
															HX_STACK_LINE(75)
															_position->y;
														}
														else{
															HX_STACK_LINE(75)
															if (((bool((_position->listen_y != null())) && bool(!(_position->ignore_listeners))))){
																HX_STACK_LINE(75)
																_position->listen_y(_y);
															}
															HX_STACK_LINE(75)
															_position->y;
														}
													}
													HX_STACK_LINE(75)
													{
														HX_STACK_LINE(75)
														Float _z = te->__get((int)14);		HX_STACK_VAR(_z,"_z");
														HX_STACK_LINE(75)
														_position->z = _z;
														HX_STACK_LINE(75)
														if ((_position->_construct)){
															HX_STACK_LINE(75)
															_position->z;
														}
														else{
															HX_STACK_LINE(75)
															if (((bool((_position->listen_z != null())) && bool(!(_position->ignore_listeners))))){
																HX_STACK_LINE(75)
																_position->listen_z(_z);
															}
															HX_STACK_LINE(75)
															_position->z;
														}
													}
												}
												HX_STACK_LINE(75)
												if (((_scale == null()))){
													HX_STACK_LINE(75)
													::phoenix::Vector _g25 = ::phoenix::Vector_obj::__new(_ax_length,_ay_length,_az_length,null());		HX_STACK_VAR(_g25,"_g25");
													HX_STACK_LINE(75)
													_scale = _g25;
												}
												else{
													HX_STACK_LINE(75)
													{
														HX_STACK_LINE(75)
														_scale->x = _ax_length;
														HX_STACK_LINE(75)
														if ((_scale->_construct)){
															HX_STACK_LINE(75)
															_scale->x;
														}
														else{
															HX_STACK_LINE(75)
															if (((bool((_scale->listen_x != null())) && bool(!(_scale->ignore_listeners))))){
																HX_STACK_LINE(75)
																_scale->listen_x(_ax_length);
															}
															HX_STACK_LINE(75)
															_scale->x;
														}
													}
													HX_STACK_LINE(75)
													{
														HX_STACK_LINE(75)
														_scale->y = _ay_length;
														HX_STACK_LINE(75)
														if ((_scale->_construct)){
															HX_STACK_LINE(75)
															_scale->y;
														}
														else{
															HX_STACK_LINE(75)
															if (((bool((_scale->listen_y != null())) && bool(!(_scale->ignore_listeners))))){
																HX_STACK_LINE(75)
																_scale->listen_y(_ay_length);
															}
															HX_STACK_LINE(75)
															_scale->y;
														}
													}
													HX_STACK_LINE(75)
													{
														HX_STACK_LINE(75)
														_scale->z = _az_length;
														HX_STACK_LINE(75)
														if ((_scale->_construct)){
															HX_STACK_LINE(75)
															_scale->z;
														}
														else{
															HX_STACK_LINE(75)
															if (((bool((_scale->listen_z != null())) && bool(!(_scale->ignore_listeners))))){
																HX_STACK_LINE(75)
																_scale->listen_z(_az_length);
															}
															HX_STACK_LINE(75)
															_scale->z;
														}
													}
												}
												HX_STACK_LINE(75)
												Array< Float > _g26 = _this4->elements->concat(Array_obj< Float >::__new());		HX_STACK_VAR(_g26,"_g26");
												HX_STACK_LINE(75)
												matrix->elements = _g26;
												HX_STACK_LINE(75)
												Array< Float > me = matrix->elements;		HX_STACK_VAR(me,"me");
												HX_STACK_LINE(75)
												hx::DivEq(me[(int)0],_ax_length);
												HX_STACK_LINE(75)
												hx::DivEq(me[(int)1],_ax_length);
												HX_STACK_LINE(75)
												hx::DivEq(me[(int)2],_ax_length);
												HX_STACK_LINE(75)
												hx::DivEq(me[(int)4],_ay_length);
												HX_STACK_LINE(75)
												hx::DivEq(me[(int)5],_ay_length);
												HX_STACK_LINE(75)
												hx::DivEq(me[(int)6],_ay_length);
												HX_STACK_LINE(75)
												hx::DivEq(me[(int)8],_az_length);
												HX_STACK_LINE(75)
												hx::DivEq(me[(int)9],_az_length);
												HX_STACK_LINE(75)
												hx::DivEq(me[(int)10],_az_length);
												HX_STACK_LINE(75)
												_quaternion->setFromRotationMatrix(matrix);
												HX_STACK_LINE(75)
												if (((_this4->_transform == null()))){
													HX_STACK_LINE(75)
													::phoenix::MatrixTransform _g27 = ::phoenix::MatrixTransform_obj::__new(_position,_quaternion,_scale);		HX_STACK_VAR(_g27,"_g27");
													HX_STACK_LINE(75)
													_this4->_transform = _g27;
												}
												else{
													HX_STACK_LINE(75)
													_this4->_transform->pos = _position;
													HX_STACK_LINE(75)
													_this4->_transform->rotation = _quaternion;
													HX_STACK_LINE(75)
													_this4->_transform->scale = _scale;
												}
												HX_STACK_LINE(75)
												_transform = _this4->_transform;
											}
											HX_STACK_LINE(75)
											{
												HX_STACK_LINE(75)
												::phoenix::Vector _p = _transform->pos;		HX_STACK_VAR(_p,"_p");
												HX_STACK_LINE(75)
												_this3->pos = _p;
												HX_STACK_LINE(75)
												if (((_p != null()))){
													HX_STACK_LINE(75)
													::phoenix::Vector_obj::Listen(_this3->pos,_this3->_pos_change_dyn());
													HX_STACK_LINE(75)
													if (((bool((_this3->pos_changed != null())) && bool(!(_this3->ignore_listeners))))){
														HX_STACK_LINE(75)
														_this3->pos_changed(_this3->pos);
													}
												}
												HX_STACK_LINE(75)
												_this3->pos;
											}
											HX_STACK_LINE(75)
											{
												HX_STACK_LINE(75)
												::phoenix::Quaternion _r = _transform->rotation;		HX_STACK_VAR(_r,"_r");
												HX_STACK_LINE(75)
												_this3->rotation = _r;
												HX_STACK_LINE(75)
												if (((_r != null()))){
													HX_STACK_LINE(75)
													{
														HX_STACK_LINE(75)
														::phoenix::Quaternion _q = _this3->rotation;		HX_STACK_VAR(_q,"_q");
														HX_STACK_LINE(75)
														Dynamic listener = _this3->_rotation_change_dyn();		HX_STACK_VAR(listener,"listener");
														HX_STACK_LINE(75)
														_q->listen_x = listener;
														HX_STACK_LINE(75)
														_q->listen_y = listener;
														HX_STACK_LINE(75)
														_q->listen_z = listener;
														HX_STACK_LINE(75)
														_q->listen_w = listener;
													}
													HX_STACK_LINE(75)
													if (((bool((_this3->rotation_changed != null())) && bool(!(_this3->ignore_listeners))))){
														HX_STACK_LINE(75)
														_this3->rotation_changed(_this3->rotation);
													}
												}
												HX_STACK_LINE(75)
												_this3->rotation;
											}
											HX_STACK_LINE(75)
											{
												HX_STACK_LINE(75)
												::phoenix::Vector _s = _transform->scale;		HX_STACK_VAR(_s,"_s");
												HX_STACK_LINE(75)
												_this3->scale = _s;
												HX_STACK_LINE(75)
												if (((_s != null()))){
													HX_STACK_LINE(75)
													::phoenix::Vector_obj::Listen(_this3->scale,_this3->_scale_change_dyn());
													HX_STACK_LINE(75)
													if (((bool((_this3->scale_changed != null())) && bool(!(_this3->ignore_listeners))))){
														HX_STACK_LINE(75)
														_this3->scale_changed(_this3->scale);
													}
												}
												HX_STACK_LINE(75)
												_this3->scale;
											}
										}
										HX_STACK_LINE(75)
										_this3;
									}
									HX_STACK_LINE(75)
									{
										HX_STACK_LINE(75)
										_this2->dirty = false;
										HX_STACK_LINE(75)
										if (((bool((bool((bool(_this2->dirty) && bool(!(_this2->_setup)))) && bool((_this2->_dirty_handlers != null())))) && bool((_this2->_dirty_handlers->__Field(HX_CSTRING("length"),true) > (int)0))))){
											HX_STACK_LINE(75)
											int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
											HX_STACK_LINE(75)
											Dynamic _g11 = _this2->_dirty_handlers;		HX_STACK_VAR(_g11,"_g11");
											HX_STACK_LINE(75)
											while((true)){
												HX_STACK_LINE(75)
												if ((!(((_g1 < _g11->__Field(HX_CSTRING("length"),true)))))){
													HX_STACK_LINE(75)
													break;
												}
												HX_STACK_LINE(75)
												Dynamic _handler = _g11->__GetItem(_g1);		HX_STACK_VAR(_handler,"_handler");
												HX_STACK_LINE(75)
												++(_g1);
												HX_STACK_LINE(75)
												if (((_handler != null()))){
													HX_STACK_LINE(75)
													_handler(_this2).Cast< Void >();
												}
											}
										}
										HX_STACK_LINE(75)
										_this2->dirty;
									}
									HX_STACK_LINE(75)
									_this2->_cleaning = false;
									HX_STACK_LINE(75)
									if (((bool((_this2->_clean_handlers != null())) && bool((_this2->_clean_handlers->__Field(HX_CSTRING("length"),true) > (int)0))))){
										HX_STACK_LINE(75)
										int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
										HX_STACK_LINE(75)
										Dynamic _g11 = _this2->_clean_handlers;		HX_STACK_VAR(_g11,"_g11");
										HX_STACK_LINE(75)
										while((true)){
											HX_STACK_LINE(75)
											if ((!(((_g1 < _g11->__Field(HX_CSTRING("length"),true)))))){
												HX_STACK_LINE(75)
												break;
											}
											HX_STACK_LINE(75)
											Dynamic _handler = _g11->__GetItem(_g1);		HX_STACK_VAR(_handler,"_handler");
											HX_STACK_LINE(75)
											++(_g1);
											HX_STACK_LINE(75)
											if (((_handler != null()))){
												HX_STACK_LINE(75)
												_handler(_this2).Cast< Void >();
											}
										}
									}
								}
							}
						}
						HX_STACK_LINE(75)
						_this1 = _this2->world;
					}
					HX_STACK_LINE(75)
					_m = _this1->matrix;
				}
				HX_STACK_LINE(75)
				Float _x = _this->x;		HX_STACK_VAR(_x,"_x");
				HX_STACK_LINE(75)
				Float _y = _this->y;		HX_STACK_VAR(_y,"_y");
				HX_STACK_LINE(75)
				Float _z = _this->z;		HX_STACK_VAR(_z,"_z");
				HX_STACK_LINE(75)
				Array< Float > e = _m->elements;		HX_STACK_VAR(e,"e");
				HX_STACK_LINE(75)
				{
					HX_STACK_LINE(75)
					Float _x1 = ((((e->__get((int)0) * _x) + (e->__get((int)4) * _y)) + (e->__get((int)8) * _z)) + e->__get((int)12));		HX_STACK_VAR(_x1,"_x1");
					HX_STACK_LINE(75)
					Float _y1 = ((((e->__get((int)1) * _x) + (e->__get((int)5) * _y)) + (e->__get((int)9) * _z)) + e->__get((int)13));		HX_STACK_VAR(_y1,"_y1");
					HX_STACK_LINE(75)
					Float _z1 = ((((e->__get((int)2) * _x) + (e->__get((int)6) * _y)) + (e->__get((int)10) * _z)) + e->__get((int)14));		HX_STACK_VAR(_z1,"_z1");
					HX_STACK_LINE(75)
					bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
					HX_STACK_LINE(75)
					_this->ignore_listeners = true;
					HX_STACK_LINE(75)
					{
						HX_STACK_LINE(75)
						_this->x = _x1;
						HX_STACK_LINE(75)
						if ((_this->_construct)){
							HX_STACK_LINE(75)
							_this->x;
						}
						else{
							HX_STACK_LINE(75)
							if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
								HX_STACK_LINE(75)
								_this->listen_x(_x1);
							}
							HX_STACK_LINE(75)
							_this->x;
						}
					}
					HX_STACK_LINE(75)
					{
						HX_STACK_LINE(75)
						_this->y = _y1;
						HX_STACK_LINE(75)
						if ((_this->_construct)){
							HX_STACK_LINE(75)
							_this->y;
						}
						else{
							HX_STACK_LINE(75)
							if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
								HX_STACK_LINE(75)
								_this->listen_y(_y1);
							}
							HX_STACK_LINE(75)
							_this->y;
						}
					}
					HX_STACK_LINE(75)
					{
						HX_STACK_LINE(75)
						_this->z = _z1;
						HX_STACK_LINE(75)
						if ((_this->_construct)){
							HX_STACK_LINE(75)
							_this->z;
						}
						else{
							HX_STACK_LINE(75)
							if (((bool((_this->listen_z != null())) && bool(!(_this->ignore_listeners))))){
								HX_STACK_LINE(75)
								_this->listen_z(_z1);
							}
							HX_STACK_LINE(75)
							_this->z;
						}
					}
					HX_STACK_LINE(75)
					_this->ignore_listeners = prev;
					HX_STACK_LINE(75)
					if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
						HX_STACK_LINE(75)
						_this->listen_x(_this->x);
					}
					HX_STACK_LINE(75)
					if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
						HX_STACK_LINE(75)
						_this->listen_y(_this->y);
					}
					HX_STACK_LINE(75)
					if (((bool((_this->listen_z != null())) && bool(!(_this->ignore_listeners))))){
						HX_STACK_LINE(75)
						_this->listen_z(_this->z);
					}
					HX_STACK_LINE(75)
					_this;
				}
				HX_STACK_LINE(75)
				_vert_j_pos = _this;
			}
			HX_STACK_LINE(77)
			if (((bool(((_vert_i_pos->y > _point->y) != (_vert_j_pos->y > _point->y))) && bool((_point->x < ((Float((((_vert_j_pos->x - _vert_i_pos->x)) * ((_point->y - _vert_i_pos->y)))) / Float(((_vert_j_pos->y - _vert_i_pos->y)))) + _vert_i_pos->x)))))){
				HX_STACK_LINE(80)
				c = !(c);
			}
			HX_STACK_LINE(83)
			j = i;
		}
	}
	HX_STACK_LINE(86)
	return c;
}


HX_DEFINE_DYNAMIC_FUNC2(GeometryUtils_obj,point_in_geometry,return )

::phoenix::Vector GeometryUtils_obj::intersect_ray_plane( ::phoenix::Vector _ray_start,::phoenix::Vector _ray_dir,::phoenix::Vector _plane_normal,::phoenix::Vector _plane_point){
	HX_STACK_FRAME("luxe.utils.GeometryUtils","intersect_ray_plane",0xfb92d043,"luxe.utils.GeometryUtils.intersect_ray_plane","luxe/utils/GeometryUtils.hx",92,0x749c9d76)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_ray_start,"_ray_start")
	HX_STACK_ARG(_ray_dir,"_ray_dir")
	HX_STACK_ARG(_plane_normal,"_plane_normal")
	HX_STACK_ARG(_plane_point,"_plane_point")
	HX_STACK_LINE(98)
	Float part1;		HX_STACK_VAR(part1,"part1");
	HX_STACK_LINE(98)
	{
		HX_STACK_LINE(98)
		::phoenix::Vector other = ::phoenix::Vector_obj::__new((_plane_point->x - _ray_start->x),(_plane_point->y - _ray_start->y),(_plane_point->z - _ray_start->z),null());		HX_STACK_VAR(other,"other");
		HX_STACK_LINE(98)
		part1 = (((_plane_normal->x * other->x) + (_plane_normal->y * other->y)) + (_plane_normal->z * other->z));
	}
	HX_STACK_LINE(99)
	Float part2 = (((_plane_normal->x * _ray_dir->x) + (_plane_normal->y * _ray_dir->y)) + (_plane_normal->z * _ray_dir->z));		HX_STACK_VAR(part2,"part2");
	HX_STACK_LINE(101)
	Float T = (Float(part1) / Float(part2));		HX_STACK_VAR(T,"T");
	HX_STACK_LINE(103)
	::phoenix::Vector b = ::phoenix::Vector_obj::Multiply(_ray_dir,T);		HX_STACK_VAR(b,"b");
	HX_STACK_LINE(103)
	return ::phoenix::Vector_obj::__new((_ray_start->x + b->x),(_ray_start->y + b->y),(_ray_start->z + b->z),null());
}


HX_DEFINE_DYNAMIC_FUNC4(GeometryUtils_obj,intersect_ray_plane,return )

Float GeometryUtils_obj::two_pi;


GeometryUtils_obj::GeometryUtils_obj()
{
}

void GeometryUtils_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(GeometryUtils);
	HX_MARK_MEMBER_NAME(luxe,"luxe");
	HX_MARK_END_CLASS();
}

void GeometryUtils_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(luxe,"luxe");
}

Dynamic GeometryUtils_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"luxe") ) { return luxe; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"point_in_polygon") ) { return point_in_polygon_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"point_in_geometry") ) { return point_in_geometry_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"intersect_ray_plane") ) { return intersect_ray_plane_dyn(); }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"segments_for_smooth_circle") ) { return segments_for_smooth_circle_dyn(); }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"random_point_in_unit_circle") ) { return random_point_in_unit_circle_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic GeometryUtils_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"luxe") ) { luxe=inValue.Cast< ::luxe::Core >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void GeometryUtils_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("luxe"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("two_pi"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::luxe::Core*/ ,(int)offsetof(GeometryUtils_obj,luxe),HX_CSTRING("luxe")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("luxe"),
	HX_CSTRING("segments_for_smooth_circle"),
	HX_CSTRING("random_point_in_unit_circle"),
	HX_CSTRING("point_in_polygon"),
	HX_CSTRING("point_in_geometry"),
	HX_CSTRING("intersect_ray_plane"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GeometryUtils_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(GeometryUtils_obj::two_pi,"two_pi");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GeometryUtils_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(GeometryUtils_obj::two_pi,"two_pi");
};

#endif

Class GeometryUtils_obj::__mClass;

void GeometryUtils_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("luxe.utils.GeometryUtils"), hx::TCanCast< GeometryUtils_obj> ,sStaticFields,sMemberFields,
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

void GeometryUtils_obj::__boot()
{
	two_pi= 6.283185307179586;
}

} // end namespace luxe
} // end namespace utils
