#include <hxcpp.h>

#ifndef INCLUDED_Luxe
#include <Luxe.h>
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
#ifndef INCLUDED_luxe_Objects
#include <luxe/Objects.h>
#endif
#ifndef INCLUDED_luxe_Parcel
#include <luxe/Parcel.h>
#endif
#ifndef INCLUDED_luxe_ParcelProgress
#include <luxe/ParcelProgress.h>
#endif
#ifndef INCLUDED_luxe_Screen
#include <luxe/Screen.h>
#endif
#ifndef INCLUDED_luxe_Sprite
#include <luxe/Sprite.h>
#endif
#ifndef INCLUDED_luxe_Visual
#include <luxe/Visual.h>
#endif
#ifndef INCLUDED_luxe_resource_Resource
#include <luxe/resource/Resource.h>
#endif
#ifndef INCLUDED_luxe_resource_ResourceManager
#include <luxe/resource/ResourceManager.h>
#endif
#ifndef INCLUDED_luxe_tween_actuators_IGenericActuator
#include <luxe/tween/actuators/IGenericActuator.h>
#endif
#ifndef INCLUDED_phoenix_Color
#include <phoenix/Color.h>
#endif
#ifndef INCLUDED_phoenix_Vector
#include <phoenix/Vector.h>
#endif
#ifndef INCLUDED_phoenix_geometry_Geometry
#include <phoenix/geometry/Geometry.h>
#endif
#ifndef INCLUDED_phoenix_geometry_RectangleGeometry
#include <phoenix/geometry/RectangleGeometry.h>
#endif
namespace luxe{

Void ParcelProgress_obj::__construct(Dynamic _options)
{
HX_STACK_FRAME("luxe.ParcelProgress","new",0x2d233760,"luxe.ParcelProgress.new","luxe/ParcelProgress.hx",10,0xf4bec2ef)
HX_STACK_THIS(this)
HX_STACK_ARG(_options,"_options")
{
	HX_STACK_LINE(25)
	this->height = (int)0;
	HX_STACK_LINE(24)
	this->width = (int)0;
	HX_STACK_LINE(29)
	this->options = _options;
	HX_STACK_LINE(31)
	if (((this->options->__Field(HX_CSTRING("bar"),true) == null()))){
		HX_STACK_LINE(32)
		::phoenix::Color _g = ::phoenix::Color_obj::__new(null(),null(),null(),null())->rgb((int)3421236);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(32)
		this->options->__FieldRef(HX_CSTRING("bar")) = _g;
	}
	HX_STACK_LINE(35)
	if (((this->options->__Field(HX_CSTRING("bar_border"),true) == null()))){
		HX_STACK_LINE(36)
		::phoenix::Color _g1 = ::phoenix::Color_obj::__new(null(),null(),null(),null())->rgb((int)1447446);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(36)
		this->options->__FieldRef(HX_CSTRING("bar_border")) = _g1;
	}
	HX_STACK_LINE(39)
	if (((this->options->__Field(HX_CSTRING("background"),true) == null()))){
		HX_STACK_LINE(40)
		::phoenix::Color _g2 = ::phoenix::Color_obj::__new(null(),null(),null(),null())->rgb((int)592137);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(40)
		this->options->__FieldRef(HX_CSTRING("background")) = _g2;
	}
	HX_STACK_LINE(43)
	if (((this->options->__Field(HX_CSTRING("fade_in"),true) == null()))){
		HX_STACK_LINE(44)
		this->options->__FieldRef(HX_CSTRING("fade_in")) = true;
	}
	HX_STACK_LINE(47)
	if (((this->options->__Field(HX_CSTRING("fade_out"),true) == null()))){
		HX_STACK_LINE(48)
		this->options->__FieldRef(HX_CSTRING("fade_out")) = true;
	}
	HX_STACK_LINE(51)
	if (((this->options->__Field(HX_CSTRING("fade_time"),true) == null()))){
		HX_STACK_LINE(52)
		this->options->__FieldRef(HX_CSTRING("fade_time")) = 0.3;
	}
	HX_STACK_LINE(62)
	Float fade_alpha = this->options->__Field(HX_CSTRING("background"),true)->__Field(HX_CSTRING("a"),true);		HX_STACK_VAR(fade_alpha,"fade_alpha");
	HX_STACK_LINE(64)
	if ((this->options->__Field(HX_CSTRING("fade_in"),true))){
		HX_STACK_LINE(66)
		this->options->__Field(HX_CSTRING("background"),true)->__FieldRef(HX_CSTRING("a")) = (int)0;
		HX_STACK_LINE(67)
		this->options->__Field(HX_CSTRING("bar"),true)->__FieldRef(HX_CSTRING("a")) = (int)0;
		HX_STACK_LINE(68)
		this->options->__Field(HX_CSTRING("bar_border"),true)->__FieldRef(HX_CSTRING("a")) = (int)0;
	}
	HX_STACK_LINE(72)
	this->width = (::Luxe_obj::get_screen()->w * 0.75);
	HX_STACK_LINE(73)
	this->height = (::Luxe_obj::get_screen()->h * 0.002);
	HX_STACK_LINE(74)
	Float ypos = (::Luxe_obj::get_screen()->h * 0.60);		HX_STACK_VAR(ypos,"ypos");
	HX_STACK_LINE(77)
	::phoenix::Vector _g3 = ::phoenix::Vector_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(79)
	::phoenix::Vector _g4 = ::phoenix::Vector_obj::__new(::Luxe_obj::get_screen()->w,::Luxe_obj::get_screen()->h,null(),null());		HX_STACK_VAR(_g4,"_g4");
	struct _Function_1_1{
		inline static Dynamic Block( hx::ObjectPtr< ::luxe::ParcelProgress_obj > __this,::phoenix::Vector &_g4,::phoenix::Vector &_g3){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/ParcelProgress.hx",76,0xf4bec2ef)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("pos") , _g3,false);
				__result->Add(HX_CSTRING("no_scene") , true,false);
				__result->Add(HX_CSTRING("size") , _g4,false);
				__result->Add(HX_CSTRING("centered") , false,false);
				__result->Add(HX_CSTRING("color") , __this->options->__Field(HX_CSTRING("background"),true),false);
				__result->Add(HX_CSTRING("depth") , (int)998,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(76)
	Dynamic _g5 = _Function_1_1::Block(this,_g4,_g3);		HX_STACK_VAR(_g5,"_g5");
	HX_STACK_LINE(76)
	::luxe::Sprite _g6 = ::luxe::Sprite_obj::__new(_g5);		HX_STACK_VAR(_g6,"_g6");
	HX_STACK_LINE(76)
	this->background = _g6;
	HX_STACK_LINE(86)
	::phoenix::Vector _g7 = ::phoenix::Vector_obj::__new((::Luxe_obj::get_screen()->get_mid()->x - (Float(this->width) / Float((int)2))),(ypos - (Float(this->height) / Float((int)2))),null(),null());		HX_STACK_VAR(_g7,"_g7");
	HX_STACK_LINE(87)
	::phoenix::Vector _g8 = ::phoenix::Vector_obj::__new((int)2,this->height,null(),null());		HX_STACK_VAR(_g8,"_g8");
	struct _Function_1_2{
		inline static Dynamic Block( ::phoenix::Vector &_g7,hx::ObjectPtr< ::luxe::ParcelProgress_obj > __this,::phoenix::Vector &_g8){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/ParcelProgress.hx",85,0xf4bec2ef)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("pos") , _g7,false);
				__result->Add(HX_CSTRING("size") , _g8,false);
				__result->Add(HX_CSTRING("no_scene") , true,false);
				__result->Add(HX_CSTRING("centered") , false,false);
				__result->Add(HX_CSTRING("color") , __this->options->__Field(HX_CSTRING("bar"),true),false);
				__result->Add(HX_CSTRING("depth") , (int)998,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(85)
	Dynamic _g9 = _Function_1_2::Block(_g7,this,_g8);		HX_STACK_VAR(_g9,"_g9");
	HX_STACK_LINE(85)
	::luxe::Sprite _g10 = ::luxe::Sprite_obj::__new(_g9);		HX_STACK_VAR(_g10,"_g10");
	HX_STACK_LINE(85)
	this->progress_bar = _g10;
	HX_STACK_LINE(95)
	::phoenix::Vector _g11 = ::phoenix::Vector_obj::__new(this->width,this->height,null(),null());		HX_STACK_VAR(_g11,"_g11");
	HX_STACK_LINE(99)
	::phoenix::Vector _g12 = ::phoenix::Vector_obj::__new(((::Luxe_obj::get_screen()->get_mid()->x - (Float(this->width) / Float((int)2))) - (int)1),((ypos - (Float(this->height) / Float((int)2))) - (int)1),null(),null());		HX_STACK_VAR(_g12,"_g12");
	struct _Function_1_3{
		inline static Dynamic Block( hx::ObjectPtr< ::luxe::ParcelProgress_obj > __this){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/ParcelProgress.hx",100,0xf4bec2ef)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("w") , (__this->width + (int)2),false);
				__result->Add(HX_CSTRING("h") , (__this->height + (int)2),false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(100)
	::phoenix::geometry::Geometry _g13 = ::Luxe_obj::draw->rectangle(_Function_1_3::Block(this));		HX_STACK_VAR(_g13,"_g13");
	struct _Function_1_4{
		inline static Dynamic Block( ::phoenix::Vector &_g11,hx::ObjectPtr< ::luxe::ParcelProgress_obj > __this,::phoenix::Vector &_g12,::phoenix::geometry::Geometry &_g13){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/ParcelProgress.hx",94,0xf4bec2ef)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("size") , _g11,false);
				__result->Add(HX_CSTRING("color") , __this->options->__Field(HX_CSTRING("bar"),true),false);
				__result->Add(HX_CSTRING("no_scene") , true,false);
				__result->Add(HX_CSTRING("centered") , false,false);
				__result->Add(HX_CSTRING("pos") , _g12,false);
				__result->Add(HX_CSTRING("geometry") , _g13,false);
				__result->Add(HX_CSTRING("depth") , (int)998,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(94)
	Dynamic _g14 = _Function_1_4::Block(_g11,this,_g12,_g13);		HX_STACK_VAR(_g14,"_g14");
	HX_STACK_LINE(94)
	::luxe::Sprite _g15 = ::luxe::Sprite_obj::__new(_g14);		HX_STACK_VAR(_g15,"_g15");
	HX_STACK_LINE(94)
	this->progress_border = _g15;
	HX_STACK_LINE(108)
	this->options->__Field(HX_CSTRING("parcel"),true)->__Field(HX_CSTRING("options"),true)->__FieldRef(HX_CSTRING("oncomplete")) = this->oncomplete_dyn();
	HX_STACK_LINE(109)
	this->options->__Field(HX_CSTRING("parcel"),true)->__Field(HX_CSTRING("options"),true)->__FieldRef(HX_CSTRING("onprogress")) = this->onprogress_dyn();
	HX_STACK_LINE(111)
	if ((this->options->__Field(HX_CSTRING("fade_in"),true))){
		struct _Function_2_1{
			inline static Dynamic Block( Float &fade_alpha){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/ParcelProgress.hx",114,0xf4bec2ef)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("a") , fade_alpha,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(114)
		this->background->color->tween(this->options->__Field(HX_CSTRING("fade_time"),true),_Function_2_1::Block(fade_alpha),true);
		struct _Function_2_2{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/ParcelProgress.hx",115,0xf4bec2ef)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("a") , (int)1,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(115)
		this->progress_bar->color->tween(this->options->__Field(HX_CSTRING("fade_time"),true),_Function_2_2::Block(),true);
		struct _Function_2_3{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/ParcelProgress.hx",116,0xf4bec2ef)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("a") , (int)1,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(116)
		this->progress_border->color->tween(this->options->__Field(HX_CSTRING("fade_time"),true),_Function_2_3::Block(),true);
	}
}
;
	return null();
}

//ParcelProgress_obj::~ParcelProgress_obj() { }

Dynamic ParcelProgress_obj::__CreateEmpty() { return  new ParcelProgress_obj; }
hx::ObjectPtr< ParcelProgress_obj > ParcelProgress_obj::__new(Dynamic _options)
{  hx::ObjectPtr< ParcelProgress_obj > result = new ParcelProgress_obj();
	result->__construct(_options);
	return result;}

Dynamic ParcelProgress_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ParcelProgress_obj > result = new ParcelProgress_obj();
	result->__construct(inArgs[0]);
	return result;}

Void ParcelProgress_obj::set_progress( Float amount){
{
		HX_STACK_FRAME("luxe.ParcelProgress","set_progress",0x87c9882a,"luxe.ParcelProgress.set_progress","luxe/ParcelProgress.hx",122,0xf4bec2ef)
		HX_STACK_THIS(this)
		HX_STACK_ARG(amount,"amount")
		HX_STACK_LINE(124)
		if (((amount < (int)0))){
			HX_STACK_LINE(124)
			amount = (int)0;
		}
		HX_STACK_LINE(125)
		if (((amount > (int)1))){
			HX_STACK_LINE(125)
			amount = (int)1;
		}
		HX_STACK_LINE(127)
		{
			HX_STACK_LINE(127)
			::phoenix::Vector _this = this->progress_bar->size;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(127)
			Float _x = (this->width * amount);		HX_STACK_VAR(_x,"_x");
			HX_STACK_LINE(127)
			_this->x = _x;
			HX_STACK_LINE(127)
			if ((_this->_construct)){
				HX_STACK_LINE(127)
				_this->x;
			}
			else{
				HX_STACK_LINE(127)
				if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
					HX_STACK_LINE(127)
					_this->listen_x(_x);
				}
				HX_STACK_LINE(127)
				_this->x;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ParcelProgress_obj,set_progress,(void))

Void ParcelProgress_obj::onprogress( ::luxe::resource::Resource r){
{
		HX_STACK_FRAME("luxe.ParcelProgress","onprogress",0x712b88cc,"luxe.ParcelProgress.onprogress","luxe/ParcelProgress.hx",131,0xf4bec2ef)
		HX_STACK_THIS(this)
		HX_STACK_ARG(r,"r")
		HX_STACK_LINE(134)
		Float amount = (Float(this->options->__Field(HX_CSTRING("parcel"),true)->__Field(HX_CSTRING("current_count"),true)) / Float(this->options->__Field(HX_CSTRING("parcel"),true)->__Field(HX_CSTRING("total_items"),true)));		HX_STACK_VAR(amount,"amount");
		HX_STACK_LINE(137)
		this->set_progress(amount);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ParcelProgress_obj,onprogress,(void))

Void ParcelProgress_obj::oncomplete( ::luxe::Parcel p){
{
		HX_STACK_FRAME("luxe.ParcelProgress","oncomplete",0x6ac891d8,"luxe.ParcelProgress.oncomplete","luxe/ParcelProgress.hx",143,0xf4bec2ef)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p,"p")
		HX_STACK_LINE(143)
		if ((this->options->__Field(HX_CSTRING("fade_out"),true))){
			struct _Function_2_1{
				inline static Dynamic Block( ){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/ParcelProgress.hx",145,0xf4bec2ef)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_CSTRING("a") , (int)0,false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(145)
			this->background->color->tween(this->options->__Field(HX_CSTRING("fade_time"),true),_Function_2_1::Block(),true);
			struct _Function_2_2{
				inline static Dynamic Block( ){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/ParcelProgress.hx",146,0xf4bec2ef)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_CSTRING("a") , (int)0,false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(146)
			this->progress_bar->color->tween(this->options->__Field(HX_CSTRING("fade_time"),true),_Function_2_2::Block(),true);
			struct _Function_2_3{
				inline static Dynamic Block( ){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/ParcelProgress.hx",147,0xf4bec2ef)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_CSTRING("a") , (int)0,false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(147)
			this->progress_border->color->tween(this->options->__Field(HX_CSTRING("fade_time"),true),_Function_2_3::Block(),true)->onComplete(this->do_complete_dyn(),null());
		}
		else{
			HX_STACK_LINE(152)
			this->do_complete();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ParcelProgress_obj,oncomplete,(void))

Void ParcelProgress_obj::do_complete( ){
{
		HX_STACK_FRAME("luxe.ParcelProgress","do_complete",0xb3983e2d,"luxe.ParcelProgress.do_complete","luxe/ParcelProgress.hx",159,0xf4bec2ef)
		HX_STACK_THIS(this)
		HX_STACK_LINE(159)
		if (((this->options->__Field(HX_CSTRING("oncomplete"),true) != null()))){
			HX_STACK_LINE(160)
			this->options->__Field(HX_CSTRING("oncomplete"),true)(this->options->__Field(HX_CSTRING("parcel"),true));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ParcelProgress_obj,do_complete,(void))


ParcelProgress_obj::ParcelProgress_obj()
{
}

void ParcelProgress_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ParcelProgress);
	HX_MARK_MEMBER_NAME(parcel,"parcel");
	HX_MARK_MEMBER_NAME(progress_bar,"progress_bar");
	HX_MARK_MEMBER_NAME(progress_border,"progress_border");
	HX_MARK_MEMBER_NAME(background,"background");
	HX_MARK_MEMBER_NAME(image_logo,"image_logo");
	HX_MARK_MEMBER_NAME(options,"options");
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_END_CLASS();
}

void ParcelProgress_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(parcel,"parcel");
	HX_VISIT_MEMBER_NAME(progress_bar,"progress_bar");
	HX_VISIT_MEMBER_NAME(progress_border,"progress_border");
	HX_VISIT_MEMBER_NAME(background,"background");
	HX_VISIT_MEMBER_NAME(image_logo,"image_logo");
	HX_VISIT_MEMBER_NAME(options,"options");
	HX_VISIT_MEMBER_NAME(width,"width");
	HX_VISIT_MEMBER_NAME(height,"height");
}

Dynamic ParcelProgress_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { return width; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"parcel") ) { return parcel; }
		if (HX_FIELD_EQ(inName,"height") ) { return height; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"options") ) { return options; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"background") ) { return background; }
		if (HX_FIELD_EQ(inName,"image_logo") ) { return image_logo; }
		if (HX_FIELD_EQ(inName,"onprogress") ) { return onprogress_dyn(); }
		if (HX_FIELD_EQ(inName,"oncomplete") ) { return oncomplete_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"do_complete") ) { return do_complete_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"progress_bar") ) { return progress_bar; }
		if (HX_FIELD_EQ(inName,"set_progress") ) { return set_progress_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"progress_border") ) { return progress_border; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ParcelProgress_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"parcel") ) { parcel=inValue.Cast< ::luxe::Parcel >(); return inValue; }
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"options") ) { options=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"background") ) { background=inValue.Cast< ::luxe::Sprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"image_logo") ) { image_logo=inValue.Cast< ::luxe::Sprite >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"progress_bar") ) { progress_bar=inValue.Cast< ::luxe::Sprite >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"progress_border") ) { progress_border=inValue.Cast< ::luxe::Sprite >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ParcelProgress_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("parcel"));
	outFields->push(HX_CSTRING("progress_bar"));
	outFields->push(HX_CSTRING("progress_border"));
	outFields->push(HX_CSTRING("background"));
	outFields->push(HX_CSTRING("image_logo"));
	outFields->push(HX_CSTRING("options"));
	outFields->push(HX_CSTRING("width"));
	outFields->push(HX_CSTRING("height"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::luxe::Parcel*/ ,(int)offsetof(ParcelProgress_obj,parcel),HX_CSTRING("parcel")},
	{hx::fsObject /*::luxe::Sprite*/ ,(int)offsetof(ParcelProgress_obj,progress_bar),HX_CSTRING("progress_bar")},
	{hx::fsObject /*::luxe::Sprite*/ ,(int)offsetof(ParcelProgress_obj,progress_border),HX_CSTRING("progress_border")},
	{hx::fsObject /*::luxe::Sprite*/ ,(int)offsetof(ParcelProgress_obj,background),HX_CSTRING("background")},
	{hx::fsObject /*::luxe::Sprite*/ ,(int)offsetof(ParcelProgress_obj,image_logo),HX_CSTRING("image_logo")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(ParcelProgress_obj,options),HX_CSTRING("options")},
	{hx::fsFloat,(int)offsetof(ParcelProgress_obj,width),HX_CSTRING("width")},
	{hx::fsFloat,(int)offsetof(ParcelProgress_obj,height),HX_CSTRING("height")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("parcel"),
	HX_CSTRING("progress_bar"),
	HX_CSTRING("progress_border"),
	HX_CSTRING("background"),
	HX_CSTRING("image_logo"),
	HX_CSTRING("options"),
	HX_CSTRING("width"),
	HX_CSTRING("height"),
	HX_CSTRING("set_progress"),
	HX_CSTRING("onprogress"),
	HX_CSTRING("oncomplete"),
	HX_CSTRING("do_complete"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ParcelProgress_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ParcelProgress_obj::__mClass,"__mClass");
};

#endif

Class ParcelProgress_obj::__mClass;

void ParcelProgress_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("luxe.ParcelProgress"), hx::TCanCast< ParcelProgress_obj> ,sStaticFields,sMemberFields,
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

void ParcelProgress_obj::__boot()
{
}

} // end namespace luxe
