#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_luxe_structural_BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry
#include <luxe/structural/BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry.h>
#endif
#ifndef INCLUDED_luxe_structural_BalancedBSTTraverseMethod
#include <luxe/structural/BalancedBSTTraverseMethod.h>
#endif
#ifndef INCLUDED_luxe_structural_BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry
#include <luxe/structural/BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry.h>
#endif
#ifndef INCLUDED_phoenix_geometry_Geometry
#include <phoenix/geometry/Geometry.h>
#endif
#ifndef INCLUDED_phoenix_geometry_GeometryKey
#include <phoenix/geometry/GeometryKey.h>
#endif
namespace luxe{
namespace structural{

Void BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj::__construct(Dynamic compare_function)
{
HX_STACK_FRAME("luxe.structural.BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry","new",0xa9e9064f,"luxe.structural.BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry.new","luxe/structural/BalancedBST.hx",32,0xa0b365fc)
HX_STACK_THIS(this)
HX_STACK_ARG(compare_function,"compare_function")
{
	HX_STACK_LINE(34)
	this->compare = compare_function;
	HX_STACK_LINE(35)
	this->_array = Array_obj< ::Dynamic >::__new();
}
;
	return null();
}

//BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj::~BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj() { }

Dynamic BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj::__CreateEmpty() { return  new BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj; }
hx::ObjectPtr< BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj > BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj::__new(Dynamic compare_function)
{  hx::ObjectPtr< BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj > result = new BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj();
	result->__construct(compare_function);
	return result;}

Dynamic BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj > result = new BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj();
	result->__construct(inArgs[0]);
	return result;}

int BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj::size( ){
	HX_STACK_FRAME("luxe.structural.BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry","size",0x054d9bf2,"luxe.structural.BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry.size","luxe/structural/BalancedBST.hx",44,0xa0b365fc)
	HX_STACK_THIS(this)
	HX_STACK_LINE(44)
	return this->node_count(this->root);
}


HX_DEFINE_DYNAMIC_FUNC0(BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj,size,return )

int BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj::depth( ){
	HX_STACK_FRAME("luxe.structural.BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry","depth",0xf8ebc0b2,"luxe.structural.BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry.depth","luxe/structural/BalancedBST.hx",51,0xa0b365fc)
	HX_STACK_THIS(this)
	HX_STACK_LINE(51)
	return this->node_depth(this->root);
}


HX_DEFINE_DYNAMIC_FUNC0(BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj,depth,return )

Void BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj::insert( ::phoenix::geometry::GeometryKey _key,::phoenix::geometry::Geometry _value){
{
		HX_STACK_FRAME("luxe.structural.BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry","insert",0x05b12caa,"luxe.structural.BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry.insert","luxe/structural/BalancedBST.hx",56,0xa0b365fc)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_key,"_key")
		HX_STACK_ARG(_value,"_value")
		HX_STACK_LINE(58)
		::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry _g = this->node_insert(this->root,_key,_value);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(58)
		this->root = _g;
		HX_STACK_LINE(59)
		this->root->color = false;
		HX_STACK_LINE(61)
		this->_array = null();
		HX_STACK_LINE(62)
		Array< ::Dynamic > _g1 = this->toArray();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(62)
		this->_array = _g1;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj,insert,(void))

bool BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj::contains( ::phoenix::geometry::GeometryKey _key){
	HX_STACK_FRAME("luxe.structural.BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry","contains",0x203141d0,"luxe.structural.BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry.contains","luxe/structural/BalancedBST.hx",67,0xa0b365fc)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_key,"_key")
	HX_STACK_LINE(70)
	::phoenix::geometry::Geometry _g = this->find(_key);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(70)
	return (_g != null());
}


HX_DEFINE_DYNAMIC_FUNC1(BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj,contains,return )

::phoenix::geometry::Geometry BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj::find( ::phoenix::geometry::GeometryKey _key){
	HX_STACK_FRAME("luxe.structural.BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry","find",0xfcb5cb6a,"luxe.structural.BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry.find","luxe/structural/BalancedBST.hx",77,0xa0b365fc)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_key,"_key")
	HX_STACK_LINE(77)
	return this->node_find(this->root,_key);
}


HX_DEFINE_DYNAMIC_FUNC1(BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj,find,return )

int BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj::rank( ::phoenix::geometry::GeometryKey _key){
	HX_STACK_FRAME("luxe.structural.BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry","rank",0x049e48dd,"luxe.structural.BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry.rank","luxe/structural/BalancedBST.hx",85,0xa0b365fc)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_key,"_key")
	HX_STACK_LINE(85)
	return this->node_rank(_key,this->root);
}


HX_DEFINE_DYNAMIC_FUNC1(BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj,rank,return )

::phoenix::geometry::GeometryKey BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj::select( int _rank){
	HX_STACK_FRAME("luxe.structural.BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry","select",0xd207046d,"luxe.structural.BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry.select","luxe/structural/BalancedBST.hx",91,0xa0b365fc)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_rank,"_rank")
	HX_STACK_LINE(93)
	::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry _node = this->node_select(this->root,_rank);		HX_STACK_VAR(_node,"_node");
	HX_STACK_LINE(95)
	if (((_node != null()))){
		HX_STACK_LINE(96)
		return _node->key;
	}
	else{
		HX_STACK_LINE(98)
		return null();
	}
	HX_STACK_LINE(95)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj,select,return )

::phoenix::geometry::GeometryKey BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj::smallest( ){
	HX_STACK_FRAME("luxe.structural.BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry","smallest",0x99977590,"luxe.structural.BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry.smallest","luxe/structural/BalancedBST.hx",104,0xa0b365fc)
	HX_STACK_THIS(this)
	HX_STACK_LINE(106)
	::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry _node = this->node_smallest(this->root);		HX_STACK_VAR(_node,"_node");
	HX_STACK_LINE(108)
	if (((_node != null()))){
		HX_STACK_LINE(109)
		return _node->key;
	}
	else{
		HX_STACK_LINE(111)
		return null();
	}
	HX_STACK_LINE(108)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj,smallest,return )

::phoenix::geometry::GeometryKey BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj::largest( ){
	HX_STACK_FRAME("luxe.structural.BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry","largest",0xad54968b,"luxe.structural.BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry.largest","luxe/structural/BalancedBST.hx",117,0xa0b365fc)
	HX_STACK_THIS(this)
	HX_STACK_LINE(119)
	::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry _node = this->node_largest(this->root);		HX_STACK_VAR(_node,"_node");
	HX_STACK_LINE(121)
	if (((_node != null()))){
		HX_STACK_LINE(122)
		return _node->key;
	}
	else{
		HX_STACK_LINE(124)
		return null();
	}
	HX_STACK_LINE(121)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj,largest,return )

bool BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj::remove( ::phoenix::geometry::GeometryKey _key){
	HX_STACK_FRAME("luxe.structural.BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry","remove",0x6c5c85b5,"luxe.structural.BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry.remove","luxe/structural/BalancedBST.hx",130,0xa0b365fc)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_key,"_key")
	struct _Function_1_1{
		inline static bool Block( hx::ObjectPtr< ::luxe::structural::BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj > __this){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/structural/BalancedBST.hx",132,0xa0b365fc)
			{
				HX_STACK_LINE(132)
				::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry _node = __this->root->left;		HX_STACK_VAR(_node,"_node");
				HX_STACK_LINE(132)
				return (  (((_node == null()))) ? bool(false) : bool((_node->color == true)) );
			}
			return null();
		}
	};
	struct _Function_1_2{
		inline static bool Block( hx::ObjectPtr< ::luxe::structural::BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj > __this){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/structural/BalancedBST.hx",132,0xa0b365fc)
			{
				HX_STACK_LINE(132)
				::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry _node = __this->root->right;		HX_STACK_VAR(_node,"_node");
				HX_STACK_LINE(132)
				return (  (((_node == null()))) ? bool(false) : bool((_node->color == true)) );
			}
			return null();
		}
	};
	HX_STACK_LINE(132)
	if (((bool(!(_Function_1_1::Block(this))) && bool(!(_Function_1_2::Block(this)))))){
		HX_STACK_LINE(133)
		this->root->color = true;
	}
	HX_STACK_LINE(136)
	if ((!(this->contains(_key)))){
		HX_STACK_LINE(137)
		return false;
	}
	HX_STACK_LINE(140)
	::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry _g = this->node_remove(this->root,_key);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(140)
	this->root = _g;
	HX_STACK_LINE(142)
	if (((this->root != null()))){
		HX_STACK_LINE(143)
		this->root->color = false;
	}
	HX_STACK_LINE(146)
	this->_array = null();
	HX_STACK_LINE(147)
	Array< ::Dynamic > _g1 = this->toArray();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(147)
	this->_array = _g1;
	HX_STACK_LINE(149)
	return true;
}


HX_DEFINE_DYNAMIC_FUNC1(BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj,remove,return )

bool BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj::remove_smallest( ){
	HX_STACK_FRAME("luxe.structural.BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry","remove_smallest",0xba8920e9,"luxe.structural.BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry.remove_smallest","luxe/structural/BalancedBST.hx",154,0xa0b365fc)
	HX_STACK_THIS(this)
	struct _Function_1_1{
		inline static bool Block( hx::ObjectPtr< ::luxe::structural::BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj > __this){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/structural/BalancedBST.hx",156,0xa0b365fc)
			{
				HX_STACK_LINE(156)
				::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry _node = __this->root->left;		HX_STACK_VAR(_node,"_node");
				HX_STACK_LINE(156)
				return (  (((_node == null()))) ? bool(false) : bool((_node->color == true)) );
			}
			return null();
		}
	};
	struct _Function_1_2{
		inline static bool Block( hx::ObjectPtr< ::luxe::structural::BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj > __this){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/structural/BalancedBST.hx",156,0xa0b365fc)
			{
				HX_STACK_LINE(156)
				::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry _node = __this->root->right;		HX_STACK_VAR(_node,"_node");
				HX_STACK_LINE(156)
				return (  (((_node == null()))) ? bool(false) : bool((_node->color == true)) );
			}
			return null();
		}
	};
	HX_STACK_LINE(156)
	if (((bool(!(_Function_1_1::Block(this))) && bool(!(_Function_1_2::Block(this)))))){
		HX_STACK_LINE(157)
		this->root->color = true;
	}
	HX_STACK_LINE(160)
	::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry _g = this->node_remove_smallest(this->root);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(160)
	this->root = _g;
	HX_STACK_LINE(162)
	if (((this->root != null()))){
		HX_STACK_LINE(163)
		this->root->color = false;
	}
	HX_STACK_LINE(166)
	this->_array = null();
	HX_STACK_LINE(167)
	Array< ::Dynamic > _g1 = this->toArray();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(167)
	this->_array = _g1;
	HX_STACK_LINE(169)
	return true;
}


HX_DEFINE_DYNAMIC_FUNC0(BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj,remove_smallest,return )

bool BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj::remove_largest( ){
	HX_STACK_FRAME("luxe.structural.BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry","remove_largest",0x2e0d5952,"luxe.structural.BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry.remove_largest","luxe/structural/BalancedBST.hx",174,0xa0b365fc)
	HX_STACK_THIS(this)
	struct _Function_1_1{
		inline static bool Block( hx::ObjectPtr< ::luxe::structural::BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj > __this){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/structural/BalancedBST.hx",177,0xa0b365fc)
			{
				HX_STACK_LINE(177)
				::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry _node = __this->root->left;		HX_STACK_VAR(_node,"_node");
				HX_STACK_LINE(177)
				return (  (((_node == null()))) ? bool(false) : bool((_node->color == true)) );
			}
			return null();
		}
	};
	struct _Function_1_2{
		inline static bool Block( hx::ObjectPtr< ::luxe::structural::BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj > __this){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/structural/BalancedBST.hx",177,0xa0b365fc)
			{
				HX_STACK_LINE(177)
				::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry _node = __this->root->right;		HX_STACK_VAR(_node,"_node");
				HX_STACK_LINE(177)
				return (  (((_node == null()))) ? bool(false) : bool((_node->color == true)) );
			}
			return null();
		}
	};
	HX_STACK_LINE(177)
	if (((bool(!(_Function_1_1::Block(this))) && bool(!(_Function_1_2::Block(this)))))){
		HX_STACK_LINE(178)
		this->root->color = true;
	}
	HX_STACK_LINE(181)
	::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry _g = this->node_remove_largest(this->root);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(181)
	this->root = _g;
	HX_STACK_LINE(183)
	if (((this->root != null()))){
		HX_STACK_LINE(184)
		this->root->color = false;
	}
	HX_STACK_LINE(187)
	this->_array = null();
	HX_STACK_LINE(188)
	Array< ::Dynamic > _g1 = this->toArray();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(188)
	this->_array = _g1;
	HX_STACK_LINE(190)
	return true;
}


HX_DEFINE_DYNAMIC_FUNC0(BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj,remove_largest,return )

::phoenix::geometry::GeometryKey BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj::floor( ::phoenix::geometry::GeometryKey _key){
	HX_STACK_FRAME("luxe.structural.BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry","floor",0x2458a17b,"luxe.structural.BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry.floor","luxe/structural/BalancedBST.hx",195,0xa0b365fc)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_key,"_key")
	HX_STACK_LINE(197)
	::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry _node = this->node_floor(this->root,_key);		HX_STACK_VAR(_node,"_node");
	HX_STACK_LINE(199)
	if (((_node == null()))){
		HX_STACK_LINE(200)
		return null();
	}
	HX_STACK_LINE(203)
	return _node->key;
}


HX_DEFINE_DYNAMIC_FUNC1(BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj,floor,return )

::phoenix::geometry::GeometryKey BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj::ceil( ::phoenix::geometry::GeometryKey _key){
	HX_STACK_FRAME("luxe.structural.BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry","ceil",0xfab71a36,"luxe.structural.BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry.ceil","luxe/structural/BalancedBST.hx",208,0xa0b365fc)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_key,"_key")
	HX_STACK_LINE(210)
	::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry _node = this->node_ceil(this->root,_key);		HX_STACK_VAR(_node,"_node");
	HX_STACK_LINE(212)
	if (((_node == null()))){
		HX_STACK_LINE(213)
		return null();
	}
	HX_STACK_LINE(216)
	return _node->key;
}


HX_DEFINE_DYNAMIC_FUNC1(BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj,ceil,return )

Array< ::Dynamic > BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj::toArray( ){
	HX_STACK_FRAME("luxe.structural.BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry","toArray",0x63ac138d,"luxe.structural.BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry.toArray","luxe/structural/BalancedBST.hx",221,0xa0b365fc)
	HX_STACK_THIS(this)
	HX_STACK_LINE(223)
	Array< ::Dynamic > a = Array_obj< ::Dynamic >::__new().Add(Array_obj< ::Dynamic >::__new());		HX_STACK_VAR(a,"a");

	HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,Array< ::Dynamic >,a)
	Void run(::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry _node){
		HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","luxe/structural/BalancedBST.hx",226,0xa0b365fc)
		HX_STACK_ARG(_node,"_node")
		{
			HX_STACK_LINE(226)
			a->__get((int)0).StaticCast< Array< ::Dynamic > >()->push(_node->value);
		}
		return null();
	}
	HX_END_LOCAL_FUNC1((void))

	HX_STACK_LINE(225)
	this->traverse_node(this->root,::luxe::structural::BalancedBSTTraverseMethod_obj::order_retain, Dynamic(new _Function_1_1(a)));
	HX_STACK_LINE(229)
	return a->__get((int)0).StaticCast< Array< ::Dynamic > >();
}


HX_DEFINE_DYNAMIC_FUNC0(BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj,toArray,return )

Array< ::Dynamic > BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj::keys( ){
	HX_STACK_FRAME("luxe.structural.BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry","keys",0x0000dd25,"luxe.structural.BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry.keys","luxe/structural/BalancedBST.hx",234,0xa0b365fc)
	HX_STACK_THIS(this)
	HX_STACK_LINE(236)
	Array< ::Dynamic > a = Array_obj< ::Dynamic >::__new().Add(Array_obj< ::Dynamic >::__new());		HX_STACK_VAR(a,"a");

	HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,Array< ::Dynamic >,a)
	Void run(::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry _node){
		HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","luxe/structural/BalancedBST.hx",239,0xa0b365fc)
		HX_STACK_ARG(_node,"_node")
		{
			HX_STACK_LINE(239)
			a->__get((int)0).StaticCast< Array< ::Dynamic > >()->push(_node->key);
		}
		return null();
	}
	HX_END_LOCAL_FUNC1((void))

	HX_STACK_LINE(238)
	this->traverse_node(this->root,::luxe::structural::BalancedBSTTraverseMethod_obj::order_retain, Dynamic(new _Function_1_1(a)));
	HX_STACK_LINE(242)
	return a->__get((int)0).StaticCast< Array< ::Dynamic > >();
}


HX_DEFINE_DYNAMIC_FUNC0(BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj,keys,return )

Dynamic BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj::iterator( ){
	HX_STACK_FRAME("luxe.structural.BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry","iterator",0x8750319f,"luxe.structural.BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry.iterator","luxe/structural/BalancedBST.hx",250,0xa0b365fc)
	HX_STACK_THIS(this)
	HX_STACK_LINE(250)
	return this->_array->iteratorFast< ::phoenix::geometry::Geometry >();
}


HX_DEFINE_DYNAMIC_FUNC0(BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj,iterator,return )

Void BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj::traverse_node( ::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry _node,::luxe::structural::BalancedBSTTraverseMethod _method,Dynamic _on_traverse){
{
		HX_STACK_FRAME("luxe.structural.BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry","traverse_node",0xc8c1599e,"luxe.structural.BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry.traverse_node","luxe/structural/BalancedBST.hx",258,0xa0b365fc)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_node,"_node")
		HX_STACK_ARG(_method,"_method")
		HX_STACK_ARG(_on_traverse,"_on_traverse")
		HX_STACK_LINE(258)
		if (((_node != null()))){
			HX_STACK_LINE(260)
			switch( (int)(_method->__Index())){
				case (int)0: {
					HX_STACK_LINE(263)
					_on_traverse(_node).Cast< Void >();
					HX_STACK_LINE(264)
					this->traverse_node(_node->left,_method,_on_traverse);
					HX_STACK_LINE(265)
					this->traverse_node(_node->right,_method,_on_traverse);
				}
				;break;
				case (int)1: {
					HX_STACK_LINE(268)
					this->traverse_node(_node->left,_method,_on_traverse);
					HX_STACK_LINE(269)
					_on_traverse(_node).Cast< Void >();
					HX_STACK_LINE(270)
					this->traverse_node(_node->right,_method,_on_traverse);
				}
				;break;
				case (int)2: {
					HX_STACK_LINE(273)
					this->traverse_node(_node->left,_method,_on_traverse);
					HX_STACK_LINE(274)
					this->traverse_node(_node->right,_method,_on_traverse);
					HX_STACK_LINE(275)
					_on_traverse(_node).Cast< Void >();
				}
				;break;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj,traverse_node,(void))

bool BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj::get_empty( ){
	HX_STACK_FRAME("luxe.structural.BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry","get_empty",0xfef86a13,"luxe.structural.BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry.get_empty","luxe/structural/BalancedBST.hx",288,0xa0b365fc)
	HX_STACK_THIS(this)
	HX_STACK_LINE(288)
	return (this->root == null());
}


HX_DEFINE_DYNAMIC_FUNC0(BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj,get_empty,return )

int BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj::node_depth( ::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry _node){
	HX_STACK_FRAME("luxe.structural.BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry","node_depth",0x642da5b7,"luxe.structural.BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry.node_depth","luxe/structural/BalancedBST.hx",293,0xa0b365fc)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_node,"_node")
	HX_STACK_LINE(295)
	if (((_node == null()))){
		HX_STACK_LINE(296)
		return (int)0;
	}
	HX_STACK_LINE(300)
	int _g = this->node_depth(_node->left);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(301)
	int _g1 = this->node_depth(_node->right);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(299)
	Float _n_depth = ::Math_obj::max(_g,_g1);		HX_STACK_VAR(_n_depth,"_n_depth");
	HX_STACK_LINE(304)
	int _g2 = ::Std_obj::_int(_n_depth);		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(304)
	return ((int)1 + _g2);
}


HX_DEFINE_DYNAMIC_FUNC1(BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj,node_depth,return )

int BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj::node_count( ::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry _node){
	HX_STACK_FRAME("luxe.structural.BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry","node_count",0xd766f983,"luxe.structural.BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry.node_count","luxe/structural/BalancedBST.hx",311,0xa0b365fc)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_node,"_node")
	HX_STACK_LINE(311)
	if (((_node == null()))){
		HX_STACK_LINE(311)
		return (int)0;
	}
	else{
		HX_STACK_LINE(311)
		return _node->nodecount;
	}
	HX_STACK_LINE(311)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC1(BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj,node_count,return )

::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj::node_insert( ::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry _node,::phoenix::geometry::GeometryKey _key,::phoenix::geometry::Geometry _value){
	HX_STACK_FRAME("luxe.structural.BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry","node_insert",0x7417ac05,"luxe.structural.BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry.node_insert","luxe/structural/BalancedBST.hx",316,0xa0b365fc)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_node,"_node")
	HX_STACK_ARG(_key,"_key")
	HX_STACK_ARG(_value,"_value")
	HX_STACK_LINE(318)
	if (((_node == null()))){
		HX_STACK_LINE(320)
		return ::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj::__new(_key,_value,(int)1,true);
	}
	HX_STACK_LINE(325)
	int comparison = this->compare(_key,_node->key);		HX_STACK_VAR(comparison,"comparison");
	HX_STACK_LINE(327)
	if (((comparison < (int)0))){
		HX_STACK_LINE(329)
		::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry _g = this->node_insert(_node->left,_key,_value);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(329)
		_node->left = _g;
	}
	else{
		HX_STACK_LINE(331)
		if (((comparison > (int)0))){
			HX_STACK_LINE(333)
			::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry _g1 = this->node_insert(_node->right,_key,_value);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(333)
			_node->right = _g1;
		}
		else{
			HX_STACK_LINE(337)
			_node->value = _value;
		}
	}
	struct _Function_1_1{
		inline static bool Block( ::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry &_node){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/structural/BalancedBST.hx",341,0xa0b365fc)
			{
				HX_STACK_LINE(341)
				::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry _node1 = _node->right;		HX_STACK_VAR(_node1,"_node1");
				HX_STACK_LINE(341)
				return (  (((_node1 == null()))) ? bool(false) : bool((_node1->color == true)) );
			}
			return null();
		}
	};
	struct _Function_1_2{
		inline static bool Block( ::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry &_node){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/structural/BalancedBST.hx",341,0xa0b365fc)
			{
				HX_STACK_LINE(341)
				::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry _node1 = _node->left;		HX_STACK_VAR(_node1,"_node1");
				HX_STACK_LINE(341)
				return (  (((_node1 == null()))) ? bool(false) : bool((_node1->color == true)) );
			}
			return null();
		}
	};
	HX_STACK_LINE(341)
	if (((bool(_Function_1_1::Block(_node)) && bool(!(_Function_1_2::Block(_node)))))){
		HX_STACK_LINE(342)
		::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry _g2 = this->rotate_left(_node);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(342)
		_node = _g2;
	}
	struct _Function_1_3{
		inline static bool Block( ::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry &_node){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/structural/BalancedBST.hx",345,0xa0b365fc)
			{
				HX_STACK_LINE(345)
				::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry _node1 = _node->left;		HX_STACK_VAR(_node1,"_node1");
				HX_STACK_LINE(345)
				return (  (((_node1 == null()))) ? bool(false) : bool((_node1->color == true)) );
			}
			return null();
		}
	};
	struct _Function_1_4{
		inline static bool Block( ::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry &_node){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/structural/BalancedBST.hx",345,0xa0b365fc)
			{
				HX_STACK_LINE(345)
				::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry _node1 = _node->left->left;		HX_STACK_VAR(_node1,"_node1");
				HX_STACK_LINE(345)
				return (  (((_node1 == null()))) ? bool(false) : bool((_node1->color == true)) );
			}
			return null();
		}
	};
	HX_STACK_LINE(345)
	if (((bool(_Function_1_3::Block(_node)) && bool(_Function_1_4::Block(_node))))){
		HX_STACK_LINE(346)
		::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry _g3 = this->rotate_right(_node);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(346)
		_node = _g3;
	}
	struct _Function_1_5{
		inline static bool Block( ::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry &_node){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/structural/BalancedBST.hx",349,0xa0b365fc)
			{
				HX_STACK_LINE(349)
				::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry _node1 = _node->left;		HX_STACK_VAR(_node1,"_node1");
				HX_STACK_LINE(349)
				return (  (((_node1 == null()))) ? bool(false) : bool((_node1->color == true)) );
			}
			return null();
		}
	};
	struct _Function_1_6{
		inline static bool Block( ::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry &_node){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/structural/BalancedBST.hx",349,0xa0b365fc)
			{
				HX_STACK_LINE(349)
				::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry _node1 = _node->right;		HX_STACK_VAR(_node1,"_node1");
				HX_STACK_LINE(349)
				return (  (((_node1 == null()))) ? bool(false) : bool((_node1->color == true)) );
			}
			return null();
		}
	};
	HX_STACK_LINE(349)
	if (((bool(_Function_1_5::Block(_node)) && bool(_Function_1_6::Block(_node))))){
		HX_STACK_LINE(350)
		this->swap_color(_node);
	}
	HX_STACK_LINE(353)
	this->node_update_count(_node);
	HX_STACK_LINE(355)
	return _node;
}


HX_DEFINE_DYNAMIC_FUNC3(BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj,node_insert,return )

::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj::node_update_count( ::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry _node){
	HX_STACK_FRAME("luxe.structural.BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry","node_update_count",0x2a8cc8a5,"luxe.structural.BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry.node_update_count","luxe/structural/BalancedBST.hx",360,0xa0b365fc)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_node,"_node")
	HX_STACK_LINE(362)
	int _g = this->node_count(_node->left);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(362)
	int _g1 = this->node_count(_node->right);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(362)
	int _g2 = (_g + _g1);		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(362)
	int _g3 = (_g2 + (int)1);		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(362)
	_node->nodecount = _g3;
	HX_STACK_LINE(364)
	return _node;
}


HX_DEFINE_DYNAMIC_FUNC1(BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj,node_update_count,return )

::phoenix::geometry::Geometry BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj::node_find( ::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry _node,::phoenix::geometry::GeometryKey _key){
	HX_STACK_FRAME("luxe.structural.BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry","node_find",0x534a2e05,"luxe.structural.BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry.node_find","luxe/structural/BalancedBST.hx",369,0xa0b365fc)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_node,"_node")
	HX_STACK_ARG(_key,"_key")
	HX_STACK_LINE(371)
	if (((_node == null()))){
		HX_STACK_LINE(372)
		return null();
	}
	HX_STACK_LINE(375)
	int comparison = this->compare(_key,_node->key);		HX_STACK_VAR(comparison,"comparison");
	HX_STACK_LINE(377)
	if (((comparison < (int)0))){
		HX_STACK_LINE(378)
		return this->node_find(_node->left,_key);
	}
	else{
		HX_STACK_LINE(379)
		if (((comparison > (int)0))){
			HX_STACK_LINE(380)
			return this->node_find(_node->right,_key);
		}
		else{
			HX_STACK_LINE(382)
			return _node->value;
		}
	}
	HX_STACK_LINE(377)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC2(BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj,node_find,return )

int BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj::node_rank( ::phoenix::geometry::GeometryKey _key,::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry _node){
	HX_STACK_FRAME("luxe.structural.BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry","node_rank",0x5b32ab78,"luxe.structural.BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry.node_rank","luxe/structural/BalancedBST.hx",388,0xa0b365fc)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_key,"_key")
	HX_STACK_ARG(_node,"_node")
	HX_STACK_LINE(390)
	if (((_node == null()))){
		HX_STACK_LINE(391)
		return (int)0;
	}
	HX_STACK_LINE(394)
	int comparison = this->compare(_key,_node->key);		HX_STACK_VAR(comparison,"comparison");
	HX_STACK_LINE(396)
	if (((comparison < (int)0))){
		HX_STACK_LINE(397)
		return this->node_rank(_key,_node->left);
	}
	else{
		HX_STACK_LINE(398)
		if (((comparison > (int)0))){
			HX_STACK_LINE(399)
			int _g = this->node_count(_node->left);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(399)
			int _g1 = ((int)1 + _g);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(399)
			int _g2 = this->node_rank(_key,_node->right);		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(399)
			return (_g1 + _g2);
		}
		else{
			HX_STACK_LINE(401)
			return this->node_count(_node->left);
		}
	}
	HX_STACK_LINE(396)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC2(BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj,node_rank,return )

::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj::node_select( ::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry _node,int _rank){
	HX_STACK_FRAME("luxe.structural.BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry","node_select",0x406d83c8,"luxe.structural.BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry.node_select","luxe/structural/BalancedBST.hx",407,0xa0b365fc)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_node,"_node")
	HX_STACK_ARG(_rank,"_rank")
	HX_STACK_LINE(409)
	if (((_node == null()))){
		HX_STACK_LINE(410)
		return null();
	}
	HX_STACK_LINE(413)
	int _r = this->node_count(_node->left);		HX_STACK_VAR(_r,"_r");
	HX_STACK_LINE(415)
	if (((_r > _rank))){
		HX_STACK_LINE(416)
		return this->node_select(_node->left,_rank);
	}
	else{
		HX_STACK_LINE(417)
		if (((_r < _rank))){
			HX_STACK_LINE(418)
			return this->node_select(_node->right,((_rank - _r) - (int)1));
		}
		else{
			HX_STACK_LINE(420)
			return _node;
		}
	}
	HX_STACK_LINE(415)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC2(BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj,node_select,return )

::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj::node_smallest( ::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry _node){
	HX_STACK_FRAME("luxe.structural.BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry","node_smallest",0x4e20c1ab,"luxe.structural.BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry.node_smallest","luxe/structural/BalancedBST.hx",426,0xa0b365fc)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_node,"_node")
	HX_STACK_LINE(428)
	if (((_node->left == null()))){
		HX_STACK_LINE(429)
		return _node;
	}
	HX_STACK_LINE(432)
	return this->node_smallest(_node->left);
}


HX_DEFINE_DYNAMIC_FUNC1(BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj,node_smallest,return )

::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj::node_largest( ::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry _node){
	HX_STACK_FRAME("luxe.structural.BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry","node_largest",0xd89d86d0,"luxe.structural.BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry.node_largest","luxe/structural/BalancedBST.hx",439,0xa0b365fc)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_node,"_node")
	HX_STACK_LINE(439)
	if (((_node->right == null()))){
		HX_STACK_LINE(440)
		return _node;
	}
	else{
		HX_STACK_LINE(442)
		return this->node_largest(_node->right);
	}
	HX_STACK_LINE(439)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj,node_largest,return )

::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj::node_floor( ::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry _node,::phoenix::geometry::GeometryKey _key){
	HX_STACK_FRAME("luxe.structural.BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry","node_floor",0x8f9a8680,"luxe.structural.BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry.node_floor","luxe/structural/BalancedBST.hx",448,0xa0b365fc)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_node,"_node")
	HX_STACK_ARG(_key,"_key")
	HX_STACK_LINE(450)
	if (((_node == null()))){
		HX_STACK_LINE(451)
		return null();
	}
	HX_STACK_LINE(454)
	int comparison = this->compare(_key,_node->key);		HX_STACK_VAR(comparison,"comparison");
	HX_STACK_LINE(456)
	if (((comparison == (int)0))){
		HX_STACK_LINE(457)
		return _node;
	}
	else{
		HX_STACK_LINE(458)
		if (((comparison < (int)0))){
			HX_STACK_LINE(459)
			return this->node_floor(_node->left,_key);
		}
	}
	HX_STACK_LINE(462)
	::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry _n = this->node_floor(_node->right,_key);		HX_STACK_VAR(_n,"_n");
	HX_STACK_LINE(464)
	if (((_n != null()))){
		HX_STACK_LINE(465)
		return _n;
	}
	else{
		HX_STACK_LINE(467)
		return _node;
	}
	HX_STACK_LINE(464)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC2(BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj,node_floor,return )

::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj::node_ceil( ::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry _node,::phoenix::geometry::GeometryKey _key){
	HX_STACK_FRAME("luxe.structural.BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry","node_ceil",0x514b7cd1,"luxe.structural.BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry.node_ceil","luxe/structural/BalancedBST.hx",473,0xa0b365fc)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_node,"_node")
	HX_STACK_ARG(_key,"_key")
	HX_STACK_LINE(475)
	if (((_node == null()))){
		HX_STACK_LINE(476)
		return null();
	}
	HX_STACK_LINE(479)
	int comparison = this->compare(_key,_node->key);		HX_STACK_VAR(comparison,"comparison");
	HX_STACK_LINE(481)
	if (((comparison == (int)0))){
		HX_STACK_LINE(483)
		return _node;
	}
	else{
		HX_STACK_LINE(485)
		if (((comparison < (int)0))){
			HX_STACK_LINE(487)
			::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry _n = this->node_ceil(_node->left,_key);		HX_STACK_VAR(_n,"_n");
			HX_STACK_LINE(489)
			if (((_n != null()))){
				HX_STACK_LINE(490)
				return _n;
			}
			else{
				HX_STACK_LINE(492)
				return _node;
			}
		}
	}
	HX_STACK_LINE(497)
	return this->node_ceil(_node->right,_key);
}


HX_DEFINE_DYNAMIC_FUNC2(BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj,node_ceil,return )

::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj::node_remove_smallest( ::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry _node){
	HX_STACK_FRAME("luxe.structural.BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry","node_remove_smallest",0x9b535e2e,"luxe.structural.BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry.node_remove_smallest","luxe/structural/BalancedBST.hx",502,0xa0b365fc)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_node,"_node")
	HX_STACK_LINE(504)
	if (((_node->left == null()))){
		HX_STACK_LINE(505)
		return null();
	}
	struct _Function_1_1{
		inline static bool Block( ::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry &_node){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/structural/BalancedBST.hx",508,0xa0b365fc)
			{
				HX_STACK_LINE(508)
				::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry _node1 = _node->left;		HX_STACK_VAR(_node1,"_node1");
				HX_STACK_LINE(508)
				return (  (((_node1 == null()))) ? bool(false) : bool((_node1->color == true)) );
			}
			return null();
		}
	};
	struct _Function_1_2{
		inline static bool Block( ::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry &_node){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/structural/BalancedBST.hx",508,0xa0b365fc)
			{
				HX_STACK_LINE(508)
				::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry _node1 = _node->left->left;		HX_STACK_VAR(_node1,"_node1");
				HX_STACK_LINE(508)
				return (  (((_node1 == null()))) ? bool(false) : bool((_node1->color == true)) );
			}
			return null();
		}
	};
	HX_STACK_LINE(508)
	if (((bool(!(_Function_1_1::Block(_node))) && bool(!(_Function_1_2::Block(_node)))))){
		HX_STACK_LINE(509)
		::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry _g = this->move_red_left(_node);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(509)
		_node = _g;
	}
	HX_STACK_LINE(512)
	::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry _g1 = this->node_remove_smallest(_node->left);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(512)
	_node->left = _g1;
	HX_STACK_LINE(513)
	this->node_update_count(_node);
	HX_STACK_LINE(515)
	return this->balance(_node);
}


HX_DEFINE_DYNAMIC_FUNC1(BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj,node_remove_smallest,return )

::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj::node_remove_largest( ::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry _node){
	HX_STACK_FRAME("luxe.structural.BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry","node_remove_largest",0x315b2bad,"luxe.structural.BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry.node_remove_largest","luxe/structural/BalancedBST.hx",520,0xa0b365fc)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_node,"_node")
	struct _Function_1_1{
		inline static bool Block( ::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry &_node){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/structural/BalancedBST.hx",522,0xa0b365fc)
			{
				HX_STACK_LINE(522)
				::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry _node1 = _node->left;		HX_STACK_VAR(_node1,"_node1");
				HX_STACK_LINE(522)
				return (  (((_node1 == null()))) ? bool(false) : bool((_node1->color == true)) );
			}
			return null();
		}
	};
	HX_STACK_LINE(522)
	if ((_Function_1_1::Block(_node))){
		HX_STACK_LINE(523)
		::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry _g = this->rotate_right(_node);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(523)
		_node = _g;
	}
	HX_STACK_LINE(526)
	if (((_node->right == null()))){
		HX_STACK_LINE(527)
		return null();
	}
	struct _Function_1_2{
		inline static bool Block( ::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry &_node){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/structural/BalancedBST.hx",530,0xa0b365fc)
			{
				HX_STACK_LINE(530)
				::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry _node1 = _node->right;		HX_STACK_VAR(_node1,"_node1");
				HX_STACK_LINE(530)
				return (  (((_node1 == null()))) ? bool(false) : bool((_node1->color == true)) );
			}
			return null();
		}
	};
	struct _Function_1_3{
		inline static bool Block( ::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry &_node){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/structural/BalancedBST.hx",530,0xa0b365fc)
			{
				HX_STACK_LINE(530)
				::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry _node1 = _node->right->left;		HX_STACK_VAR(_node1,"_node1");
				HX_STACK_LINE(530)
				return (  (((_node1 == null()))) ? bool(false) : bool((_node1->color == true)) );
			}
			return null();
		}
	};
	HX_STACK_LINE(530)
	if (((bool(!(_Function_1_2::Block(_node))) && bool(!(_Function_1_3::Block(_node)))))){
		HX_STACK_LINE(531)
		::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry _g1 = this->move_red_right(_node);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(531)
		_node = _g1;
	}
	HX_STACK_LINE(534)
	::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry _g2 = this->node_remove_largest(_node->right);		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(534)
	_node->right = _g2;
	HX_STACK_LINE(535)
	this->node_update_count(_node);
	HX_STACK_LINE(537)
	return this->balance(_node);
}


HX_DEFINE_DYNAMIC_FUNC1(BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj,node_remove_largest,return )

::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj::node_remove( ::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry _node,::phoenix::geometry::GeometryKey _key){
	HX_STACK_FRAME("luxe.structural.BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry","node_remove",0xdac30510,"luxe.structural.BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry.node_remove","luxe/structural/BalancedBST.hx",542,0xa0b365fc)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_node,"_node")
	HX_STACK_ARG(_key,"_key")
	HX_STACK_LINE(544)
	int comparison = this->compare(_key,_node->key);		HX_STACK_VAR(comparison,"comparison");
	HX_STACK_LINE(546)
	if (((comparison < (int)0))){
		struct _Function_2_1{
			inline static bool Block( ::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry &_node){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/structural/BalancedBST.hx",548,0xa0b365fc)
				{
					HX_STACK_LINE(548)
					::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry _node1 = _node->left;		HX_STACK_VAR(_node1,"_node1");
					HX_STACK_LINE(548)
					return (  (((_node1 == null()))) ? bool(false) : bool((_node1->color == true)) );
				}
				return null();
			}
		};
		struct _Function_2_2{
			inline static bool Block( ::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry &_node){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/structural/BalancedBST.hx",548,0xa0b365fc)
				{
					HX_STACK_LINE(548)
					::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry _node1 = _node->left->left;		HX_STACK_VAR(_node1,"_node1");
					HX_STACK_LINE(548)
					return (  (((_node1 == null()))) ? bool(false) : bool((_node1->color == true)) );
				}
				return null();
			}
		};
		HX_STACK_LINE(548)
		if (((bool(!(_Function_2_1::Block(_node))) && bool(!(_Function_2_2::Block(_node)))))){
			HX_STACK_LINE(549)
			::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry _g = this->move_red_left(_node);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(549)
			_node = _g;
		}
		HX_STACK_LINE(552)
		::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry _g1 = this->node_remove(_node->left,_key);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(552)
		_node->left = _g1;
	}
	else{
		struct _Function_2_1{
			inline static bool Block( ::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry &_node){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/structural/BalancedBST.hx",556,0xa0b365fc)
				{
					HX_STACK_LINE(556)
					::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry _node1 = _node->left;		HX_STACK_VAR(_node1,"_node1");
					HX_STACK_LINE(556)
					return (  (((_node1 == null()))) ? bool(false) : bool((_node1->color == true)) );
				}
				return null();
			}
		};
		HX_STACK_LINE(556)
		if ((_Function_2_1::Block(_node))){
			HX_STACK_LINE(557)
			::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry _g2 = this->rotate_right(_node);		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(557)
			_node = _g2;
		}
		HX_STACK_LINE(560)
		int comparison1 = this->compare(_key,_node->key);		HX_STACK_VAR(comparison1,"comparison1");
		HX_STACK_LINE(562)
		if (((bool((comparison1 == (int)0)) && bool((_node->right == null()))))){
			HX_STACK_LINE(563)
			return null();
		}
		struct _Function_2_2{
			inline static bool Block( ::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry &_node){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/structural/BalancedBST.hx",566,0xa0b365fc)
				{
					HX_STACK_LINE(566)
					::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry _node1 = _node->right;		HX_STACK_VAR(_node1,"_node1");
					HX_STACK_LINE(566)
					return (  (((_node1 == null()))) ? bool(false) : bool((_node1->color == true)) );
				}
				return null();
			}
		};
		struct _Function_2_3{
			inline static bool Block( ::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry &_node){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/structural/BalancedBST.hx",566,0xa0b365fc)
				{
					HX_STACK_LINE(566)
					::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry _node1 = _node->right->left;		HX_STACK_VAR(_node1,"_node1");
					HX_STACK_LINE(566)
					return (  (((_node1 == null()))) ? bool(false) : bool((_node1->color == true)) );
				}
				return null();
			}
		};
		HX_STACK_LINE(566)
		if (((bool(!(_Function_2_2::Block(_node))) && bool(!(_Function_2_3::Block(_node)))))){
			HX_STACK_LINE(567)
			::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry _g3 = this->move_red_right(_node);		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(567)
			_node = _g3;
		}
		HX_STACK_LINE(570)
		int comparison2 = this->compare(_key,_node->key);		HX_STACK_VAR(comparison2,"comparison2");
		HX_STACK_LINE(571)
		if (((comparison2 == (int)0))){
			HX_STACK_LINE(573)
			::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry _n = this->node_smallest(_node->right);		HX_STACK_VAR(_n,"_n");
			HX_STACK_LINE(574)
			_node->key = _n->key;
			HX_STACK_LINE(575)
			_node->value = _n->value;
			HX_STACK_LINE(577)
			::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry _g4 = this->node_remove_smallest(_node->right);		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(577)
			_node->right = _g4;
		}
		else{
			HX_STACK_LINE(580)
			::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry _g5 = this->node_remove(_node->right,_key);		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(580)
			_node->right = _g5;
		}
	}
	HX_STACK_LINE(585)
	return this->balance(_node);
}


HX_DEFINE_DYNAMIC_FUNC2(BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj,node_remove,return )

bool BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj::is_red( ::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry _node){
	HX_STACK_FRAME("luxe.structural.BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry","is_red",0xd983a0ad,"luxe.structural.BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry.is_red","luxe/structural/BalancedBST.hx",589,0xa0b365fc)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_node,"_node")
	HX_STACK_LINE(591)
	if (((_node == null()))){
		HX_STACK_LINE(592)
		return false;
	}
	HX_STACK_LINE(595)
	return (_node->color == true);
}


HX_DEFINE_DYNAMIC_FUNC1(BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj,is_red,return )

::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj::rotate_left( ::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry _node){
	HX_STACK_FRAME("luxe.structural.BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry","rotate_left",0xea10309a,"luxe.structural.BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry.rotate_left","luxe/structural/BalancedBST.hx",599,0xa0b365fc)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_node,"_node")
	HX_STACK_LINE(601)
	::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry _n = _node->right;		HX_STACK_VAR(_n,"_n");
	HX_STACK_LINE(604)
	_n->color = _node->color;
	HX_STACK_LINE(605)
	_node->color = true;
	HX_STACK_LINE(607)
	_node->right = _n->left;
	HX_STACK_LINE(608)
	_n->left = _node;
	HX_STACK_LINE(611)
	_n->nodecount = _node->nodecount;
	HX_STACK_LINE(612)
	this->node_update_count(_node);
	HX_STACK_LINE(614)
	return _n;
}


HX_DEFINE_DYNAMIC_FUNC1(BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj,rotate_left,return )

::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj::rotate_right( ::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry _node){
	HX_STACK_FRAME("luxe.structural.BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry","rotate_right",0x5b2763e9,"luxe.structural.BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry.rotate_right","luxe/structural/BalancedBST.hx",618,0xa0b365fc)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_node,"_node")
	HX_STACK_LINE(620)
	::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry _n = _node->left;		HX_STACK_VAR(_n,"_n");
	HX_STACK_LINE(623)
	_n->color = _node->color;
	HX_STACK_LINE(624)
	_node->color = true;
	HX_STACK_LINE(626)
	_node->left = _n->right;
	HX_STACK_LINE(627)
	_n->right = _node;
	HX_STACK_LINE(630)
	_n->nodecount = _node->nodecount;
	HX_STACK_LINE(631)
	this->node_update_count(_node);
	HX_STACK_LINE(633)
	return _n;
}


HX_DEFINE_DYNAMIC_FUNC1(BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj,rotate_right,return )

Void BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj::swap_color( ::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry _node){
{
		HX_STACK_FRAME("luxe.structural.BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry","swap_color",0x4e348968,"luxe.structural.BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry.swap_color","luxe/structural/BalancedBST.hx",637,0xa0b365fc)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_node,"_node")
		HX_STACK_LINE(639)
		_node->color = !(_node->color);
		HX_STACK_LINE(640)
		_node->left->color = !(_node->left->color);
		HX_STACK_LINE(641)
		_node->right->color = !(_node->right->color);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj,swap_color,(void))

::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj::move_red_left( ::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry _node){
	HX_STACK_FRAME("luxe.structural.BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry","move_red_left",0x490225d2,"luxe.structural.BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry.move_red_left","luxe/structural/BalancedBST.hx",645,0xa0b365fc)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_node,"_node")
	HX_STACK_LINE(647)
	this->swap_color(_node);
	struct _Function_1_1{
		inline static bool Block( ::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry &_node){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/structural/BalancedBST.hx",649,0xa0b365fc)
			{
				HX_STACK_LINE(649)
				::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry _node1 = _node->right->left;		HX_STACK_VAR(_node1,"_node1");
				HX_STACK_LINE(649)
				return (  (((_node1 == null()))) ? bool(false) : bool((_node1->color == true)) );
			}
			return null();
		}
	};
	HX_STACK_LINE(649)
	if ((_Function_1_1::Block(_node))){
		HX_STACK_LINE(650)
		::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry _g = this->rotate_right(_node->right);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(650)
		_node->right = _g;
		HX_STACK_LINE(651)
		::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry _g1 = this->rotate_left(_node);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(651)
		_node = _g1;
	}
	HX_STACK_LINE(654)
	return _node;
}


HX_DEFINE_DYNAMIC_FUNC1(BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj,move_red_left,return )

::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj::move_red_right( ::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry _node){
	HX_STACK_FRAME("luxe.structural.BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry","move_red_right",0x0febffb1,"luxe.structural.BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry.move_red_right","luxe/structural/BalancedBST.hx",657,0xa0b365fc)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_node,"_node")
	HX_STACK_LINE(659)
	this->swap_color(_node);
	struct _Function_1_1{
		inline static bool Block( ::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry &_node){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/structural/BalancedBST.hx",661,0xa0b365fc)
			{
				HX_STACK_LINE(661)
				::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry _node1 = _node->left->left;		HX_STACK_VAR(_node1,"_node1");
				HX_STACK_LINE(661)
				return (  (((_node1 == null()))) ? bool(false) : bool((_node1->color == true)) );
			}
			return null();
		}
	};
	HX_STACK_LINE(661)
	if ((_Function_1_1::Block(_node))){
		HX_STACK_LINE(662)
		::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry _g = this->rotate_right(_node);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(662)
		_node = _g;
	}
	HX_STACK_LINE(665)
	return _node;
}


HX_DEFINE_DYNAMIC_FUNC1(BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj,move_red_right,return )

::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj::balance( ::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry _node){
	HX_STACK_FRAME("luxe.structural.BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry","balance",0x9525f68b,"luxe.structural.BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry.balance","luxe/structural/BalancedBST.hx",668,0xa0b365fc)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_node,"_node")
	struct _Function_1_1{
		inline static bool Block( ::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry &_node){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/structural/BalancedBST.hx",670,0xa0b365fc)
			{
				HX_STACK_LINE(670)
				::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry _node1 = _node->right;		HX_STACK_VAR(_node1,"_node1");
				HX_STACK_LINE(670)
				return (  (((_node1 == null()))) ? bool(false) : bool((_node1->color == true)) );
			}
			return null();
		}
	};
	HX_STACK_LINE(670)
	if ((_Function_1_1::Block(_node))){
		HX_STACK_LINE(671)
		::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry _g = this->rotate_left(_node);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(671)
		_node = _g;
	}
	struct _Function_1_2{
		inline static bool Block( ::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry &_node){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/structural/BalancedBST.hx",674,0xa0b365fc)
			{
				HX_STACK_LINE(674)
				::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry _node1 = _node->left;		HX_STACK_VAR(_node1,"_node1");
				HX_STACK_LINE(674)
				return (  (((_node1 == null()))) ? bool(false) : bool((_node1->color == true)) );
			}
			return null();
		}
	};
	struct _Function_1_3{
		inline static bool Block( ::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry &_node){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/structural/BalancedBST.hx",674,0xa0b365fc)
			{
				HX_STACK_LINE(674)
				::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry _node1 = _node->left->left;		HX_STACK_VAR(_node1,"_node1");
				HX_STACK_LINE(674)
				return (  (((_node1 == null()))) ? bool(false) : bool((_node1->color == true)) );
			}
			return null();
		}
	};
	HX_STACK_LINE(674)
	if (((bool(_Function_1_2::Block(_node)) && bool(_Function_1_3::Block(_node))))){
		HX_STACK_LINE(675)
		::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry _g1 = this->rotate_right(_node);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(675)
		_node = _g1;
	}
	struct _Function_1_4{
		inline static bool Block( ::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry &_node){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/structural/BalancedBST.hx",678,0xa0b365fc)
			{
				HX_STACK_LINE(678)
				::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry _node1 = _node->left;		HX_STACK_VAR(_node1,"_node1");
				HX_STACK_LINE(678)
				return (  (((_node1 == null()))) ? bool(false) : bool((_node1->color == true)) );
			}
			return null();
		}
	};
	struct _Function_1_5{
		inline static bool Block( ::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry &_node){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/structural/BalancedBST.hx",678,0xa0b365fc)
			{
				HX_STACK_LINE(678)
				::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry _node1 = _node->right;		HX_STACK_VAR(_node1,"_node1");
				HX_STACK_LINE(678)
				return (  (((_node1 == null()))) ? bool(false) : bool((_node1->color == true)) );
			}
			return null();
		}
	};
	HX_STACK_LINE(678)
	if (((bool(_Function_1_4::Block(_node)) && bool(_Function_1_5::Block(_node))))){
		HX_STACK_LINE(679)
		this->swap_color(_node);
	}
	HX_STACK_LINE(682)
	this->node_update_count(_node);
	HX_STACK_LINE(684)
	return _node;
}


HX_DEFINE_DYNAMIC_FUNC1(BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj,balance,return )


BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj::BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj()
{
}

void BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry);
	HX_MARK_MEMBER_NAME(root,"root");
	HX_MARK_MEMBER_NAME(compare,"compare");
	HX_MARK_MEMBER_NAME(empty,"empty");
	HX_MARK_MEMBER_NAME(_array,"_array");
	HX_MARK_END_CLASS();
}

void BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(root,"root");
	HX_VISIT_MEMBER_NAME(compare,"compare");
	HX_VISIT_MEMBER_NAME(empty,"empty");
	HX_VISIT_MEMBER_NAME(_array,"_array");
}

Dynamic BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"root") ) { return root; }
		if (HX_FIELD_EQ(inName,"size") ) { return size_dyn(); }
		if (HX_FIELD_EQ(inName,"find") ) { return find_dyn(); }
		if (HX_FIELD_EQ(inName,"rank") ) { return rank_dyn(); }
		if (HX_FIELD_EQ(inName,"ceil") ) { return ceil_dyn(); }
		if (HX_FIELD_EQ(inName,"keys") ) { return keys_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"empty") ) { return inCallProp ? get_empty() : empty; }
		if (HX_FIELD_EQ(inName,"depth") ) { return depth_dyn(); }
		if (HX_FIELD_EQ(inName,"floor") ) { return floor_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_array") ) { return _array; }
		if (HX_FIELD_EQ(inName,"insert") ) { return insert_dyn(); }
		if (HX_FIELD_EQ(inName,"select") ) { return select_dyn(); }
		if (HX_FIELD_EQ(inName,"remove") ) { return remove_dyn(); }
		if (HX_FIELD_EQ(inName,"is_red") ) { return is_red_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"compare") ) { return compare; }
		if (HX_FIELD_EQ(inName,"largest") ) { return largest_dyn(); }
		if (HX_FIELD_EQ(inName,"toArray") ) { return toArray_dyn(); }
		if (HX_FIELD_EQ(inName,"balance") ) { return balance_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"contains") ) { return contains_dyn(); }
		if (HX_FIELD_EQ(inName,"smallest") ) { return smallest_dyn(); }
		if (HX_FIELD_EQ(inName,"iterator") ) { return iterator_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_empty") ) { return get_empty_dyn(); }
		if (HX_FIELD_EQ(inName,"node_find") ) { return node_find_dyn(); }
		if (HX_FIELD_EQ(inName,"node_rank") ) { return node_rank_dyn(); }
		if (HX_FIELD_EQ(inName,"node_ceil") ) { return node_ceil_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"node_depth") ) { return node_depth_dyn(); }
		if (HX_FIELD_EQ(inName,"node_count") ) { return node_count_dyn(); }
		if (HX_FIELD_EQ(inName,"node_floor") ) { return node_floor_dyn(); }
		if (HX_FIELD_EQ(inName,"swap_color") ) { return swap_color_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"node_insert") ) { return node_insert_dyn(); }
		if (HX_FIELD_EQ(inName,"node_select") ) { return node_select_dyn(); }
		if (HX_FIELD_EQ(inName,"node_remove") ) { return node_remove_dyn(); }
		if (HX_FIELD_EQ(inName,"rotate_left") ) { return rotate_left_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"node_largest") ) { return node_largest_dyn(); }
		if (HX_FIELD_EQ(inName,"rotate_right") ) { return rotate_right_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"traverse_node") ) { return traverse_node_dyn(); }
		if (HX_FIELD_EQ(inName,"node_smallest") ) { return node_smallest_dyn(); }
		if (HX_FIELD_EQ(inName,"move_red_left") ) { return move_red_left_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"remove_largest") ) { return remove_largest_dyn(); }
		if (HX_FIELD_EQ(inName,"move_red_right") ) { return move_red_right_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"remove_smallest") ) { return remove_smallest_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"node_update_count") ) { return node_update_count_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"node_remove_largest") ) { return node_remove_largest_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"node_remove_smallest") ) { return node_remove_smallest_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"root") ) { root=inValue.Cast< ::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"empty") ) { empty=inValue.Cast< bool >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_array") ) { _array=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"compare") ) { compare=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("root"));
	outFields->push(HX_CSTRING("empty"));
	outFields->push(HX_CSTRING("_array"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry*/ ,(int)offsetof(BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj,root),HX_CSTRING("root")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj,compare),HX_CSTRING("compare")},
	{hx::fsBool,(int)offsetof(BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj,empty),HX_CSTRING("empty")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj,_array),HX_CSTRING("_array")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("root"),
	HX_CSTRING("compare"),
	HX_CSTRING("empty"),
	HX_CSTRING("_array"),
	HX_CSTRING("size"),
	HX_CSTRING("depth"),
	HX_CSTRING("insert"),
	HX_CSTRING("contains"),
	HX_CSTRING("find"),
	HX_CSTRING("rank"),
	HX_CSTRING("select"),
	HX_CSTRING("smallest"),
	HX_CSTRING("largest"),
	HX_CSTRING("remove"),
	HX_CSTRING("remove_smallest"),
	HX_CSTRING("remove_largest"),
	HX_CSTRING("floor"),
	HX_CSTRING("ceil"),
	HX_CSTRING("toArray"),
	HX_CSTRING("keys"),
	HX_CSTRING("iterator"),
	HX_CSTRING("traverse_node"),
	HX_CSTRING("get_empty"),
	HX_CSTRING("node_depth"),
	HX_CSTRING("node_count"),
	HX_CSTRING("node_insert"),
	HX_CSTRING("node_update_count"),
	HX_CSTRING("node_find"),
	HX_CSTRING("node_rank"),
	HX_CSTRING("node_select"),
	HX_CSTRING("node_smallest"),
	HX_CSTRING("node_largest"),
	HX_CSTRING("node_floor"),
	HX_CSTRING("node_ceil"),
	HX_CSTRING("node_remove_smallest"),
	HX_CSTRING("node_remove_largest"),
	HX_CSTRING("node_remove"),
	HX_CSTRING("is_red"),
	HX_CSTRING("rotate_left"),
	HX_CSTRING("rotate_right"),
	HX_CSTRING("swap_color"),
	HX_CSTRING("move_red_left"),
	HX_CSTRING("move_red_right"),
	HX_CSTRING("balance"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj::__mClass,"__mClass");
};

#endif

Class BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj::__mClass;

void BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("luxe.structural.BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry"), hx::TCanCast< BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj> ,sStaticFields,sMemberFields,
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

void BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj::__boot()
{
}

} // end namespace luxe
} // end namespace structural
