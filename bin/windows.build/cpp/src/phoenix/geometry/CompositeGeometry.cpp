#include <hxcpp.h>

#ifndef INCLUDED_Lambda
#include <Lambda.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_luxe_ID
#include <luxe/ID.h>
#endif
#ifndef INCLUDED_luxe_resource_Resource
#include <luxe/resource/Resource.h>
#endif
#ifndef INCLUDED_phoenix_Batcher
#include <phoenix/Batcher.h>
#endif
#ifndef INCLUDED_phoenix_Color
#include <phoenix/Color.h>
#endif
#ifndef INCLUDED_phoenix_Rectangle
#include <phoenix/Rectangle.h>
#endif
#ifndef INCLUDED_phoenix_Shader
#include <phoenix/Shader.h>
#endif
#ifndef INCLUDED_phoenix_Texture
#include <phoenix/Texture.h>
#endif
#ifndef INCLUDED_phoenix_Transform
#include <phoenix/Transform.h>
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
namespace phoenix{
namespace geometry{

Void CompositeGeometry_obj::__construct(Dynamic _options)
{
HX_STACK_FRAME("phoenix.geometry.CompositeGeometry","new",0x5514d06e,"phoenix.geometry.CompositeGeometry.new","phoenix/geometry/CompositeGeometry.hx",20,0xbffd3ea2)
HX_STACK_THIS(this)
HX_STACK_ARG(_options,"_options")
{
	HX_STACK_LINE(22)
	super::__construct(_options);
	HX_STACK_LINE(24)
	Array< ::Dynamic > _g = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(24)
	this->geometry = _g;
}
;
	return null();
}

//CompositeGeometry_obj::~CompositeGeometry_obj() { }

Dynamic CompositeGeometry_obj::__CreateEmpty() { return  new CompositeGeometry_obj; }
hx::ObjectPtr< CompositeGeometry_obj > CompositeGeometry_obj::__new(Dynamic _options)
{  hx::ObjectPtr< CompositeGeometry_obj > result = new CompositeGeometry_obj();
	result->__construct(_options);
	return result;}

Dynamic CompositeGeometry_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< CompositeGeometry_obj > result = new CompositeGeometry_obj();
	result->__construct(inArgs[0]);
	return result;}

::String CompositeGeometry_obj::toString( ){
	HX_STACK_FRAME("phoenix.geometry.CompositeGeometry","toString",0xa10cddde,"phoenix.geometry.CompositeGeometry.toString","phoenix/geometry/CompositeGeometry.hx",28,0xbffd3ea2)
	HX_STACK_THIS(this)
	HX_STACK_LINE(30)
	::String _g = ::Std_obj::string(this->geometry);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(30)
	::String _g1 = (HX_CSTRING("CompositeGeometry ") + _g);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(30)
	::String _g2 = (_g1 + HX_CSTRING(" : "));		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(30)
	::String _g3 = ::Std_obj::string(this->geometry);		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(30)
	return (_g2 + _g3);
}


HX_DEFINE_DYNAMIC_FUNC0(CompositeGeometry_obj,toString,return )

Void CompositeGeometry_obj::clear( ){
{
		HX_STACK_FRAME("phoenix.geometry.CompositeGeometry","clear",0x0f67111b,"phoenix.geometry.CompositeGeometry.clear","phoenix/geometry/CompositeGeometry.hx",34,0xbffd3ea2)
		HX_STACK_THIS(this)
		HX_STACK_LINE(37)
		{
			HX_STACK_LINE(37)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(37)
			Array< ::Dynamic > _g1 = this->geometry;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(37)
			while((true)){
				HX_STACK_LINE(37)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(37)
					break;
				}
				HX_STACK_LINE(37)
				::phoenix::geometry::Geometry geom = _g1->__get(_g).StaticCast< ::phoenix::geometry::Geometry >();		HX_STACK_VAR(geom,"geom");
				HX_STACK_LINE(37)
				++(_g);
				HX_STACK_LINE(38)
				{
					HX_STACK_LINE(38)
					::phoenix::Transform _this = geom->transform;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(38)
					{
						HX_STACK_LINE(38)
						_this->dirty = true;
						HX_STACK_LINE(38)
						if (((bool((bool((bool(_this->dirty) && bool(!(_this->_setup)))) && bool((_this->_dirty_handlers != null())))) && bool((_this->_dirty_handlers->__Field(HX_CSTRING("length"),true) > (int)0))))){
							HX_STACK_LINE(38)
							int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(38)
							Dynamic _g11 = _this->_dirty_handlers;		HX_STACK_VAR(_g11,"_g11");
							HX_STACK_LINE(38)
							while((true)){
								HX_STACK_LINE(38)
								if ((!(((_g2 < _g11->__Field(HX_CSTRING("length"),true)))))){
									HX_STACK_LINE(38)
									break;
								}
								HX_STACK_LINE(38)
								Dynamic _handler = _g11->__GetItem(_g2);		HX_STACK_VAR(_handler,"_handler");
								HX_STACK_LINE(38)
								++(_g2);
								HX_STACK_LINE(38)
								if (((_handler != null()))){
									HX_STACK_LINE(38)
									_handler(_this).Cast< Void >();
								}
							}
						}
						HX_STACK_LINE(38)
						_this->dirty;
					}
					HX_STACK_LINE(38)
					if (((_this->parent != null()))){
						HX_STACK_LINE(38)
						::phoenix::Transform _this1 = _this->parent;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(38)
						if (((_this1->_clean_handlers == null()))){
							HX_STACK_LINE(38)
							false;
						}
						else{
							HX_STACK_LINE(38)
							_this1->_clean_handlers->__Field(HX_CSTRING("remove"),true)(_this->on_parent_cleaned_dyn());
						}
					}
					HX_STACK_LINE(38)
					_this->parent = null();
					HX_STACK_LINE(38)
					if (((bool((_this->_parent_handlers != null())) && bool((_this->_parent_handlers->__Field(HX_CSTRING("length"),true) > (int)0))))){
						HX_STACK_LINE(38)
						::phoenix::Transform _parent = _this->parent;		HX_STACK_VAR(_parent,"_parent");
						HX_STACK_LINE(38)
						{
							HX_STACK_LINE(38)
							int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(38)
							Dynamic _g11 = _this->_parent_handlers;		HX_STACK_VAR(_g11,"_g11");
							HX_STACK_LINE(38)
							while((true)){
								HX_STACK_LINE(38)
								if ((!(((_g2 < _g11->__Field(HX_CSTRING("length"),true)))))){
									HX_STACK_LINE(38)
									break;
								}
								HX_STACK_LINE(38)
								Dynamic _handler = _g11->__GetItem(_g2);		HX_STACK_VAR(_handler,"_handler");
								HX_STACK_LINE(38)
								++(_g2);
								HX_STACK_LINE(38)
								if (((_handler != null()))){
									HX_STACK_LINE(38)
									_handler(_parent).Cast< Void >();
								}
							}
						}
					}
					HX_STACK_LINE(38)
					if (((_this->parent != null()))){
						HX_STACK_LINE(38)
						::phoenix::Transform _this1 = _this->parent;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(38)
						if (((_this1->_clean_handlers == null()))){
							HX_STACK_LINE(38)
							_this1->_clean_handlers = Dynamic( Array_obj<Dynamic>::__new());
						}
						HX_STACK_LINE(38)
						_this1->_clean_handlers->__Field(HX_CSTRING("push"),true)(_this->on_parent_cleaned_dyn());
					}
					HX_STACK_LINE(38)
					_this->parent;
				}
			}
		}
		HX_STACK_LINE(40)
		this->geometry->splice((int)0,this->geometry->length);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(CompositeGeometry_obj,clear,(void))

Void CompositeGeometry_obj::replace( Array< ::Dynamic > _geometry){
{
		HX_STACK_FRAME("phoenix.geometry.CompositeGeometry","replace",0x04056742,"phoenix.geometry.CompositeGeometry.replace","phoenix/geometry/CompositeGeometry.hx",45,0xbffd3ea2)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_geometry,"_geometry")
		HX_STACK_LINE(48)
		this->clear();
		HX_STACK_LINE(50)
		this->geometry = _geometry;
		HX_STACK_LINE(52)
		{
			HX_STACK_LINE(52)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(52)
			Array< ::Dynamic > _g1 = this->geometry;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(52)
			while((true)){
				HX_STACK_LINE(52)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(52)
					break;
				}
				HX_STACK_LINE(52)
				::phoenix::geometry::Geometry geom = _g1->__get(_g).StaticCast< ::phoenix::geometry::Geometry >();		HX_STACK_VAR(geom,"geom");
				HX_STACK_LINE(52)
				++(_g);
				HX_STACK_LINE(53)
				{
					HX_STACK_LINE(53)
					::phoenix::Transform _this = geom->transform;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(53)
					{
						HX_STACK_LINE(53)
						_this->dirty = true;
						HX_STACK_LINE(53)
						if (((bool((bool((bool(_this->dirty) && bool(!(_this->_setup)))) && bool((_this->_dirty_handlers != null())))) && bool((_this->_dirty_handlers->__Field(HX_CSTRING("length"),true) > (int)0))))){
							HX_STACK_LINE(53)
							int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(53)
							Dynamic _g11 = _this->_dirty_handlers;		HX_STACK_VAR(_g11,"_g11");
							HX_STACK_LINE(53)
							while((true)){
								HX_STACK_LINE(53)
								if ((!(((_g2 < _g11->__Field(HX_CSTRING("length"),true)))))){
									HX_STACK_LINE(53)
									break;
								}
								HX_STACK_LINE(53)
								Dynamic _handler = _g11->__GetItem(_g2);		HX_STACK_VAR(_handler,"_handler");
								HX_STACK_LINE(53)
								++(_g2);
								HX_STACK_LINE(53)
								if (((_handler != null()))){
									HX_STACK_LINE(53)
									_handler(_this).Cast< Void >();
								}
							}
						}
						HX_STACK_LINE(53)
						_this->dirty;
					}
					HX_STACK_LINE(53)
					if (((_this->parent != null()))){
						HX_STACK_LINE(53)
						::phoenix::Transform _this1 = _this->parent;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(53)
						if (((_this1->_clean_handlers == null()))){
							HX_STACK_LINE(53)
							false;
						}
						else{
							HX_STACK_LINE(53)
							_this1->_clean_handlers->__Field(HX_CSTRING("remove"),true)(_this->on_parent_cleaned_dyn());
						}
					}
					HX_STACK_LINE(53)
					_this->parent = this->transform;
					HX_STACK_LINE(53)
					if (((bool((_this->_parent_handlers != null())) && bool((_this->_parent_handlers->__Field(HX_CSTRING("length"),true) > (int)0))))){
						HX_STACK_LINE(53)
						::phoenix::Transform _parent = _this->parent;		HX_STACK_VAR(_parent,"_parent");
						HX_STACK_LINE(53)
						{
							HX_STACK_LINE(53)
							int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(53)
							Dynamic _g11 = _this->_parent_handlers;		HX_STACK_VAR(_g11,"_g11");
							HX_STACK_LINE(53)
							while((true)){
								HX_STACK_LINE(53)
								if ((!(((_g2 < _g11->__Field(HX_CSTRING("length"),true)))))){
									HX_STACK_LINE(53)
									break;
								}
								HX_STACK_LINE(53)
								Dynamic _handler = _g11->__GetItem(_g2);		HX_STACK_VAR(_handler,"_handler");
								HX_STACK_LINE(53)
								++(_g2);
								HX_STACK_LINE(53)
								if (((_handler != null()))){
									HX_STACK_LINE(53)
									_handler(_parent).Cast< Void >();
								}
							}
						}
					}
					HX_STACK_LINE(53)
					if (((_this->parent != null()))){
						HX_STACK_LINE(53)
						::phoenix::Transform _this1 = _this->parent;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(53)
						if (((_this1->_clean_handlers == null()))){
							HX_STACK_LINE(53)
							_this1->_clean_handlers = Dynamic( Array_obj<Dynamic>::__new());
						}
						HX_STACK_LINE(53)
						_this1->_clean_handlers->__Field(HX_CSTRING("push"),true)(_this->on_parent_cleaned_dyn());
					}
					HX_STACK_LINE(53)
					_this->parent;
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(CompositeGeometry_obj,replace,(void))

bool CompositeGeometry_obj::has_geometry( ::phoenix::geometry::Geometry geom){
	HX_STACK_FRAME("phoenix.geometry.CompositeGeometry","has_geometry",0x14ef8da9,"phoenix.geometry.CompositeGeometry.has_geometry","phoenix/geometry/CompositeGeometry.hx",60,0xbffd3ea2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(geom,"geom")
	HX_STACK_LINE(60)
	return ::Lambda_obj::has(this->geometry,geom);
}


HX_DEFINE_DYNAMIC_FUNC1(CompositeGeometry_obj,has_geometry,return )

Void CompositeGeometry_obj::add_geometry( ::phoenix::geometry::Geometry geom){
{
		HX_STACK_FRAME("phoenix.geometry.CompositeGeometry","add_geometry",0x86f1ca02,"phoenix.geometry.CompositeGeometry.add_geometry","phoenix/geometry/CompositeGeometry.hx",66,0xbffd3ea2)
		HX_STACK_THIS(this)
		HX_STACK_ARG(geom,"geom")
		HX_STACK_LINE(66)
		if (((geom != null()))){
			HX_STACK_LINE(67)
			{
				HX_STACK_LINE(67)
				::phoenix::Transform _this = geom->transform;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(67)
				{
					HX_STACK_LINE(67)
					_this->dirty = true;
					HX_STACK_LINE(67)
					if (((bool((bool((bool(_this->dirty) && bool(!(_this->_setup)))) && bool((_this->_dirty_handlers != null())))) && bool((_this->_dirty_handlers->__Field(HX_CSTRING("length"),true) > (int)0))))){
						HX_STACK_LINE(67)
						int _g = (int)0;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(67)
						Dynamic _g1 = _this->_dirty_handlers;		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(67)
						while((true)){
							HX_STACK_LINE(67)
							if ((!(((_g < _g1->__Field(HX_CSTRING("length"),true)))))){
								HX_STACK_LINE(67)
								break;
							}
							HX_STACK_LINE(67)
							Dynamic _handler = _g1->__GetItem(_g);		HX_STACK_VAR(_handler,"_handler");
							HX_STACK_LINE(67)
							++(_g);
							HX_STACK_LINE(67)
							if (((_handler != null()))){
								HX_STACK_LINE(67)
								_handler(_this).Cast< Void >();
							}
						}
					}
					HX_STACK_LINE(67)
					_this->dirty;
				}
				HX_STACK_LINE(67)
				if (((_this->parent != null()))){
					HX_STACK_LINE(67)
					::phoenix::Transform _this1 = _this->parent;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(67)
					if (((_this1->_clean_handlers == null()))){
						HX_STACK_LINE(67)
						false;
					}
					else{
						HX_STACK_LINE(67)
						_this1->_clean_handlers->__Field(HX_CSTRING("remove"),true)(_this->on_parent_cleaned_dyn());
					}
				}
				HX_STACK_LINE(67)
				_this->parent = this->transform;
				HX_STACK_LINE(67)
				if (((bool((_this->_parent_handlers != null())) && bool((_this->_parent_handlers->__Field(HX_CSTRING("length"),true) > (int)0))))){
					HX_STACK_LINE(67)
					::phoenix::Transform _parent = _this->parent;		HX_STACK_VAR(_parent,"_parent");
					HX_STACK_LINE(67)
					{
						HX_STACK_LINE(67)
						int _g = (int)0;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(67)
						Dynamic _g1 = _this->_parent_handlers;		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(67)
						while((true)){
							HX_STACK_LINE(67)
							if ((!(((_g < _g1->__Field(HX_CSTRING("length"),true)))))){
								HX_STACK_LINE(67)
								break;
							}
							HX_STACK_LINE(67)
							Dynamic _handler = _g1->__GetItem(_g);		HX_STACK_VAR(_handler,"_handler");
							HX_STACK_LINE(67)
							++(_g);
							HX_STACK_LINE(67)
							if (((_handler != null()))){
								HX_STACK_LINE(67)
								_handler(_parent).Cast< Void >();
							}
						}
					}
				}
				HX_STACK_LINE(67)
				if (((_this->parent != null()))){
					HX_STACK_LINE(67)
					::phoenix::Transform _this1 = _this->parent;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(67)
					if (((_this1->_clean_handlers == null()))){
						HX_STACK_LINE(67)
						_this1->_clean_handlers = Dynamic( Array_obj<Dynamic>::__new());
					}
					HX_STACK_LINE(67)
					_this1->_clean_handlers->__Field(HX_CSTRING("push"),true)(_this->on_parent_cleaned_dyn());
				}
				HX_STACK_LINE(67)
				_this->parent;
			}
			HX_STACK_LINE(68)
			this->geometry->push(geom);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(CompositeGeometry_obj,add_geometry,(void))

Void CompositeGeometry_obj::remove_geometry( ::phoenix::geometry::Geometry g){
{
		HX_STACK_FRAME("phoenix.geometry.CompositeGeometry","remove_geometry",0x7c52925b,"phoenix.geometry.CompositeGeometry.remove_geometry","phoenix/geometry/CompositeGeometry.hx",75,0xbffd3ea2)
		HX_STACK_THIS(this)
		HX_STACK_ARG(g,"g")
		HX_STACK_LINE(75)
		if ((this->geometry->remove(g))){
			HX_STACK_LINE(76)
			::phoenix::Transform _this = g->transform;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(76)
			{
				HX_STACK_LINE(76)
				_this->dirty = true;
				HX_STACK_LINE(76)
				if (((bool((bool((bool(_this->dirty) && bool(!(_this->_setup)))) && bool((_this->_dirty_handlers != null())))) && bool((_this->_dirty_handlers->__Field(HX_CSTRING("length"),true) > (int)0))))){
					HX_STACK_LINE(76)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(76)
					Dynamic _g1 = _this->_dirty_handlers;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(76)
					while((true)){
						HX_STACK_LINE(76)
						if ((!(((_g < _g1->__Field(HX_CSTRING("length"),true)))))){
							HX_STACK_LINE(76)
							break;
						}
						HX_STACK_LINE(76)
						Dynamic _handler = _g1->__GetItem(_g);		HX_STACK_VAR(_handler,"_handler");
						HX_STACK_LINE(76)
						++(_g);
						HX_STACK_LINE(76)
						if (((_handler != null()))){
							HX_STACK_LINE(76)
							_handler(_this).Cast< Void >();
						}
					}
				}
				HX_STACK_LINE(76)
				_this->dirty;
			}
			HX_STACK_LINE(76)
			if (((_this->parent != null()))){
				HX_STACK_LINE(76)
				::phoenix::Transform _this1 = _this->parent;		HX_STACK_VAR(_this1,"_this1");
				HX_STACK_LINE(76)
				if (((_this1->_clean_handlers == null()))){
					HX_STACK_LINE(76)
					false;
				}
				else{
					HX_STACK_LINE(76)
					_this1->_clean_handlers->__Field(HX_CSTRING("remove"),true)(_this->on_parent_cleaned_dyn());
				}
			}
			HX_STACK_LINE(76)
			_this->parent = null();
			HX_STACK_LINE(76)
			if (((bool((_this->_parent_handlers != null())) && bool((_this->_parent_handlers->__Field(HX_CSTRING("length"),true) > (int)0))))){
				HX_STACK_LINE(76)
				::phoenix::Transform _parent = _this->parent;		HX_STACK_VAR(_parent,"_parent");
				HX_STACK_LINE(76)
				{
					HX_STACK_LINE(76)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(76)
					Dynamic _g1 = _this->_parent_handlers;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(76)
					while((true)){
						HX_STACK_LINE(76)
						if ((!(((_g < _g1->__Field(HX_CSTRING("length"),true)))))){
							HX_STACK_LINE(76)
							break;
						}
						HX_STACK_LINE(76)
						Dynamic _handler = _g1->__GetItem(_g);		HX_STACK_VAR(_handler,"_handler");
						HX_STACK_LINE(76)
						++(_g);
						HX_STACK_LINE(76)
						if (((_handler != null()))){
							HX_STACK_LINE(76)
							_handler(_parent).Cast< Void >();
						}
					}
				}
			}
			HX_STACK_LINE(76)
			if (((_this->parent != null()))){
				HX_STACK_LINE(76)
				::phoenix::Transform _this1 = _this->parent;		HX_STACK_VAR(_this1,"_this1");
				HX_STACK_LINE(76)
				if (((_this1->_clean_handlers == null()))){
					HX_STACK_LINE(76)
					_this1->_clean_handlers = Dynamic( Array_obj<Dynamic>::__new());
				}
				HX_STACK_LINE(76)
				_this1->_clean_handlers->__Field(HX_CSTRING("push"),true)(_this->on_parent_cleaned_dyn());
			}
			HX_STACK_LINE(76)
			_this->parent;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(CompositeGeometry_obj,remove_geometry,(void))

Void CompositeGeometry_obj::add_to_batcher( ::phoenix::Batcher _batcher){
{
		HX_STACK_FRAME("phoenix.geometry.CompositeGeometry","add_to_batcher",0x7fb88ff3,"phoenix.geometry.CompositeGeometry.add_to_batcher","phoenix/geometry/CompositeGeometry.hx",83,0xbffd3ea2)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_batcher,"_batcher")
		HX_STACK_LINE(83)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(83)
		Array< ::Dynamic > _g1 = this->geometry;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(83)
		while((true)){
			HX_STACK_LINE(83)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(83)
				break;
			}
			HX_STACK_LINE(83)
			::phoenix::geometry::Geometry geom = _g1->__get(_g).StaticCast< ::phoenix::geometry::Geometry >();		HX_STACK_VAR(geom,"geom");
			HX_STACK_LINE(83)
			++(_g);
			HX_STACK_LINE(84)
			_batcher->add(geom,null());
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(CompositeGeometry_obj,add_to_batcher,(void))

Void CompositeGeometry_obj::drop( Dynamic __o_remove){
Dynamic remove = __o_remove.Default(true);
	HX_STACK_FRAME("phoenix.geometry.CompositeGeometry","drop",0x168f4461,"phoenix.geometry.CompositeGeometry.drop","phoenix/geometry/CompositeGeometry.hx",89,0xbffd3ea2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(remove,"remove")
{
		HX_STACK_LINE(91)
		this->super::drop(remove);
		HX_STACK_LINE(93)
		{
			HX_STACK_LINE(93)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(93)
			Array< ::Dynamic > _g1 = this->geometry;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(93)
			while((true)){
				HX_STACK_LINE(93)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(93)
					break;
				}
				HX_STACK_LINE(93)
				::phoenix::geometry::Geometry geom = _g1->__get(_g).StaticCast< ::phoenix::geometry::Geometry >();		HX_STACK_VAR(geom,"geom");
				HX_STACK_LINE(93)
				++(_g);
				HX_STACK_LINE(94)
				geom->drop(remove);
				HX_STACK_LINE(95)
				geom = null();
			}
		}
		HX_STACK_LINE(98)
		this->geometry = null();
		HX_STACK_LINE(99)
		this->geometry = Array_obj< ::Dynamic >::__new();
	}
return null();
}


Void CompositeGeometry_obj::translate( ::phoenix::Vector _offset){
{
		HX_STACK_FRAME("phoenix.geometry.CompositeGeometry","translate",0x6b2d55dc,"phoenix.geometry.CompositeGeometry.translate","phoenix/geometry/CompositeGeometry.hx",105,0xbffd3ea2)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_offset,"_offset")
		HX_STACK_LINE(105)
		if (((this->geometry != null()))){
			HX_STACK_LINE(106)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(106)
			Array< ::Dynamic > _g1 = this->geometry;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(106)
			while((true)){
				HX_STACK_LINE(106)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(106)
					break;
				}
				HX_STACK_LINE(106)
				::phoenix::geometry::Geometry geom = _g1->__get(_g).StaticCast< ::phoenix::geometry::Geometry >();		HX_STACK_VAR(geom,"geom");
				HX_STACK_LINE(106)
				++(_g);
				HX_STACK_LINE(107)
				geom->translate(_offset);
			}
		}
	}
return null();
}


::phoenix::Color CompositeGeometry_obj::set_color( ::phoenix::Color _color){
	HX_STACK_FRAME("phoenix.geometry.CompositeGeometry","set_color",0x93043854,"phoenix.geometry.CompositeGeometry.set_color","phoenix/geometry/CompositeGeometry.hx",117,0xbffd3ea2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_color,"_color")
	HX_STACK_LINE(119)
	if (((this->geometry != null()))){
		HX_STACK_LINE(120)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(120)
		Array< ::Dynamic > _g1 = this->geometry;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(120)
		while((true)){
			HX_STACK_LINE(120)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(120)
				break;
			}
			HX_STACK_LINE(120)
			::phoenix::geometry::Geometry geom = _g1->__get(_g).StaticCast< ::phoenix::geometry::Geometry >();		HX_STACK_VAR(geom,"geom");
			HX_STACK_LINE(120)
			++(_g);
			HX_STACK_LINE(121)
			geom->set_color(_color);
		}
	}
	HX_STACK_LINE(125)
	return this->color = _color;
}


int CompositeGeometry_obj::set_primitive_type( int val){
	HX_STACK_FRAME("phoenix.geometry.CompositeGeometry","set_primitive_type",0x11b81b81,"phoenix.geometry.CompositeGeometry.set_primitive_type","phoenix/geometry/CompositeGeometry.hx",129,0xbffd3ea2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(val,"val")
	HX_STACK_LINE(131)
	if (((this->geometry != null()))){
		HX_STACK_LINE(132)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(132)
		Array< ::Dynamic > _g1 = this->geometry;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(132)
		while((true)){
			HX_STACK_LINE(132)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(132)
				break;
			}
			HX_STACK_LINE(132)
			::phoenix::geometry::Geometry geom = _g1->__get(_g).StaticCast< ::phoenix::geometry::Geometry >();		HX_STACK_VAR(geom,"geom");
			HX_STACK_LINE(132)
			++(_g);
			HX_STACK_LINE(133)
			geom->set_primitive_type(val);
		}
	}
	HX_STACK_LINE(137)
	return this->primitive_type = val;
}


::phoenix::Shader CompositeGeometry_obj::set_shader( ::phoenix::Shader val){
	HX_STACK_FRAME("phoenix.geometry.CompositeGeometry","set_shader",0x67470b14,"phoenix.geometry.CompositeGeometry.set_shader","phoenix/geometry/CompositeGeometry.hx",141,0xbffd3ea2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(val,"val")
	HX_STACK_LINE(143)
	if (((this->geometry != null()))){
		HX_STACK_LINE(144)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(144)
		Array< ::Dynamic > _g1 = this->geometry;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(144)
		while((true)){
			HX_STACK_LINE(144)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(144)
				break;
			}
			HX_STACK_LINE(144)
			::phoenix::geometry::Geometry geom = _g1->__get(_g).StaticCast< ::phoenix::geometry::Geometry >();		HX_STACK_VAR(geom,"geom");
			HX_STACK_LINE(144)
			++(_g);
			HX_STACK_LINE(145)
			geom->set_shader(val);
		}
	}
	HX_STACK_LINE(149)
	return this->shader = val;
}


::phoenix::Texture CompositeGeometry_obj::set_texture( ::phoenix::Texture val){
	HX_STACK_FRAME("phoenix.geometry.CompositeGeometry","set_texture",0x363cee0c,"phoenix.geometry.CompositeGeometry.set_texture","phoenix/geometry/CompositeGeometry.hx",153,0xbffd3ea2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(val,"val")
	HX_STACK_LINE(155)
	if (((this->geometry != null()))){
		HX_STACK_LINE(157)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(157)
		Array< ::Dynamic > _g1 = this->geometry;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(157)
		while((true)){
			HX_STACK_LINE(157)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(157)
				break;
			}
			HX_STACK_LINE(157)
			::phoenix::geometry::Geometry geom = _g1->__get(_g).StaticCast< ::phoenix::geometry::Geometry >();		HX_STACK_VAR(geom,"geom");
			HX_STACK_LINE(157)
			++(_g);
			HX_STACK_LINE(158)
			geom->set_texture(val);
		}
	}
	HX_STACK_LINE(162)
	return this->texture = val;
}


Float CompositeGeometry_obj::set_depth( Float val){
	HX_STACK_FRAME("phoenix.geometry.CompositeGeometry","set_depth",0x1fd1b7f4,"phoenix.geometry.CompositeGeometry.set_depth","phoenix/geometry/CompositeGeometry.hx",166,0xbffd3ea2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(val,"val")
	HX_STACK_LINE(168)
	if (((this->geometry != null()))){
		HX_STACK_LINE(169)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(169)
		Array< ::Dynamic > _g1 = this->geometry;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(169)
		while((true)){
			HX_STACK_LINE(169)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(169)
				break;
			}
			HX_STACK_LINE(169)
			::phoenix::geometry::Geometry geom = _g1->__get(_g).StaticCast< ::phoenix::geometry::Geometry >();		HX_STACK_VAR(geom,"geom");
			HX_STACK_LINE(169)
			++(_g);
			HX_STACK_LINE(170)
			geom->set_depth(val);
		}
	}
	HX_STACK_LINE(174)
	return this->depth = val;
}


int CompositeGeometry_obj::set_group( int val){
	HX_STACK_FRAME("phoenix.geometry.CompositeGeometry","set_group",0xe29c7a30,"phoenix.geometry.CompositeGeometry.set_group","phoenix/geometry/CompositeGeometry.hx",178,0xbffd3ea2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(val,"val")
	HX_STACK_LINE(180)
	if (((this->geometry != null()))){
		HX_STACK_LINE(181)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(181)
		Array< ::Dynamic > _g1 = this->geometry;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(181)
		while((true)){
			HX_STACK_LINE(181)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(181)
				break;
			}
			HX_STACK_LINE(181)
			::phoenix::geometry::Geometry geom = _g1->__get(_g).StaticCast< ::phoenix::geometry::Geometry >();		HX_STACK_VAR(geom,"geom");
			HX_STACK_LINE(181)
			++(_g);
			HX_STACK_LINE(182)
			geom->set_group(val);
		}
	}
	HX_STACK_LINE(186)
	return this->group = val;
}


bool CompositeGeometry_obj::set_locked( bool val){
	HX_STACK_FRAME("phoenix.geometry.CompositeGeometry","set_locked",0xa3ed50f9,"phoenix.geometry.CompositeGeometry.set_locked","phoenix/geometry/CompositeGeometry.hx",190,0xbffd3ea2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(val,"val")
	HX_STACK_LINE(192)
	if (((this->geometry != null()))){
		HX_STACK_LINE(193)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(193)
		Array< ::Dynamic > _g1 = this->geometry;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(193)
		while((true)){
			HX_STACK_LINE(193)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(193)
				break;
			}
			HX_STACK_LINE(193)
			::phoenix::geometry::Geometry geom = _g1->__get(_g).StaticCast< ::phoenix::geometry::Geometry >();		HX_STACK_VAR(geom,"geom");
			HX_STACK_LINE(193)
			++(_g);
			HX_STACK_LINE(194)
			geom->set_locked(val);
		}
	}
	HX_STACK_LINE(198)
	return this->locked = val;
}


bool CompositeGeometry_obj::set_dirty( bool val){
	HX_STACK_FRAME("phoenix.geometry.CompositeGeometry","set_dirty",0x22781703,"phoenix.geometry.CompositeGeometry.set_dirty","phoenix/geometry/CompositeGeometry.hx",202,0xbffd3ea2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(val,"val")
	HX_STACK_LINE(204)
	if (((this->geometry != null()))){
		HX_STACK_LINE(205)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(205)
		Array< ::Dynamic > _g1 = this->geometry;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(205)
		while((true)){
			HX_STACK_LINE(205)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(205)
				break;
			}
			HX_STACK_LINE(205)
			::phoenix::geometry::Geometry geom = _g1->__get(_g).StaticCast< ::phoenix::geometry::Geometry >();		HX_STACK_VAR(geom,"geom");
			HX_STACK_LINE(205)
			++(_g);
			HX_STACK_LINE(206)
			geom->set_dirty(val);
		}
	}
	HX_STACK_LINE(210)
	return this->dirty = val;
}


::phoenix::Rectangle CompositeGeometry_obj::set_clip_rect( ::phoenix::Rectangle val){
	HX_STACK_FRAME("phoenix.geometry.CompositeGeometry","set_clip_rect",0xcc36dba4,"phoenix.geometry.CompositeGeometry.set_clip_rect","phoenix/geometry/CompositeGeometry.hx",214,0xbffd3ea2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(val,"val")
	HX_STACK_LINE(216)
	if (((this->geometry != null()))){
		HX_STACK_LINE(217)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(217)
		Array< ::Dynamic > _g1 = this->geometry;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(217)
		while((true)){
			HX_STACK_LINE(217)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(217)
				break;
			}
			HX_STACK_LINE(217)
			::phoenix::geometry::Geometry geom = _g1->__get(_g).StaticCast< ::phoenix::geometry::Geometry >();		HX_STACK_VAR(geom,"geom");
			HX_STACK_LINE(217)
			++(_g);
			HX_STACK_LINE(218)
			geom->set_clip_rect(val);
		}
	}
	HX_STACK_LINE(222)
	return this->clip_rect = val;
}


bool CompositeGeometry_obj::set_visible( bool val){
	HX_STACK_FRAME("phoenix.geometry.CompositeGeometry","set_visible",0x3a809da3,"phoenix.geometry.CompositeGeometry.set_visible","phoenix/geometry/CompositeGeometry.hx",226,0xbffd3ea2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(val,"val")
	HX_STACK_LINE(228)
	if (((this->geometry != null()))){
		HX_STACK_LINE(229)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(229)
		Array< ::Dynamic > _g1 = this->geometry;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(229)
		while((true)){
			HX_STACK_LINE(229)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(229)
				break;
			}
			HX_STACK_LINE(229)
			::phoenix::geometry::Geometry geom = _g1->__get(_g).StaticCast< ::phoenix::geometry::Geometry >();		HX_STACK_VAR(geom,"geom");
			HX_STACK_LINE(229)
			++(_g);
			HX_STACK_LINE(230)
			geom->set_visible(val);
		}
	}
	HX_STACK_LINE(234)
	return this->visible = val;
}



CompositeGeometry_obj::CompositeGeometry_obj()
{
}

void CompositeGeometry_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(CompositeGeometry);
	HX_MARK_MEMBER_NAME(geometry,"geometry");
	::phoenix::geometry::Geometry_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void CompositeGeometry_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(geometry,"geometry");
	::phoenix::geometry::Geometry_obj::__Visit(HX_VISIT_ARG);
}

Dynamic CompositeGeometry_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"drop") ) { return drop_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"replace") ) { return replace_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"geometry") ) { return geometry; }
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"translate") ) { return translate_dyn(); }
		if (HX_FIELD_EQ(inName,"set_color") ) { return set_color_dyn(); }
		if (HX_FIELD_EQ(inName,"set_depth") ) { return set_depth_dyn(); }
		if (HX_FIELD_EQ(inName,"set_group") ) { return set_group_dyn(); }
		if (HX_FIELD_EQ(inName,"set_dirty") ) { return set_dirty_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"set_shader") ) { return set_shader_dyn(); }
		if (HX_FIELD_EQ(inName,"set_locked") ) { return set_locked_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"set_texture") ) { return set_texture_dyn(); }
		if (HX_FIELD_EQ(inName,"set_visible") ) { return set_visible_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"has_geometry") ) { return has_geometry_dyn(); }
		if (HX_FIELD_EQ(inName,"add_geometry") ) { return add_geometry_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"set_clip_rect") ) { return set_clip_rect_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"add_to_batcher") ) { return add_to_batcher_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"remove_geometry") ) { return remove_geometry_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"set_primitive_type") ) { return set_primitive_type_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic CompositeGeometry_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"geometry") ) { geometry=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void CompositeGeometry_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("geometry"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(CompositeGeometry_obj,geometry),HX_CSTRING("geometry")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("geometry"),
	HX_CSTRING("toString"),
	HX_CSTRING("clear"),
	HX_CSTRING("replace"),
	HX_CSTRING("has_geometry"),
	HX_CSTRING("add_geometry"),
	HX_CSTRING("remove_geometry"),
	HX_CSTRING("add_to_batcher"),
	HX_CSTRING("drop"),
	HX_CSTRING("translate"),
	HX_CSTRING("set_color"),
	HX_CSTRING("set_primitive_type"),
	HX_CSTRING("set_shader"),
	HX_CSTRING("set_texture"),
	HX_CSTRING("set_depth"),
	HX_CSTRING("set_group"),
	HX_CSTRING("set_locked"),
	HX_CSTRING("set_dirty"),
	HX_CSTRING("set_clip_rect"),
	HX_CSTRING("set_visible"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CompositeGeometry_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CompositeGeometry_obj::__mClass,"__mClass");
};

#endif

Class CompositeGeometry_obj::__mClass;

void CompositeGeometry_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("phoenix.geometry.CompositeGeometry"), hx::TCanCast< CompositeGeometry_obj> ,sStaticFields,sMemberFields,
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

void CompositeGeometry_obj::__boot()
{
}

} // end namespace phoenix
} // end namespace geometry
