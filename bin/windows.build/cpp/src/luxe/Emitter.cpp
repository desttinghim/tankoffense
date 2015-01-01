#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_List
#include <List.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_luxe_Emitter
#include <luxe/Emitter.h>
#endif
namespace luxe{

Void Emitter_obj::__construct()
{
HX_STACK_FRAME("luxe.Emitter","new",0xbd9e6488,"luxe.Emitter.new","luxe/Emitter.hx",14,0xe597ef29)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(118)
	this->_checking = false;
	HX_STACK_LINE(26)
	::List _g = ::List_obj::__new();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(26)
	this->_to_remove = _g;
	HX_STACK_LINE(27)
	::List _g1 = ::List_obj::__new();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(27)
	this->connected = _g1;
	HX_STACK_LINE(29)
	::haxe::ds::StringMap _g2 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(29)
	this->bindings = _g2;
}
;
	return null();
}

//Emitter_obj::~Emitter_obj() { }

Dynamic Emitter_obj::__CreateEmpty() { return  new Emitter_obj; }
hx::ObjectPtr< Emitter_obj > Emitter_obj::__new()
{  hx::ObjectPtr< Emitter_obj > result = new Emitter_obj();
	result->__construct();
	return result;}

Dynamic Emitter_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Emitter_obj > result = new Emitter_obj();
	result->__construct();
	return result;}

Void Emitter_obj::emit( ::String event,Dynamic data,Dynamic pos){
{
		HX_STACK_FRAME("luxe.Emitter","emit",0x270cad2b,"luxe.Emitter.emit","luxe/Emitter.hx",34,0xe597ef29)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_ARG(data,"data")
		HX_STACK_ARG(pos,"pos")
		HX_STACK_LINE(36)
		this->_check();
		HX_STACK_LINE(38)
		if ((this->bindings->exists(event))){
			HX_STACK_LINE(39)
			Dynamic list = this->bindings->get(event);		HX_STACK_VAR(list,"list");
			HX_STACK_LINE(40)
			if (((list->__Field(HX_CSTRING("length"),true) > (int)0))){
				HX_STACK_LINE(41)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(41)
				while((true)){
					HX_STACK_LINE(41)
					if ((!(((_g < list->__Field(HX_CSTRING("length"),true)))))){
						HX_STACK_LINE(41)
						break;
					}
					HX_STACK_LINE(41)
					Dynamic handler = list->__GetItem(_g);		HX_STACK_VAR(handler,"handler");
					HX_STACK_LINE(41)
					++(_g);
					HX_STACK_LINE(43)
					handler(data).Cast< Void >();
				}
			}
		}
		HX_STACK_LINE(50)
		this->_check();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Emitter_obj,emit,(void))

Void Emitter_obj::on( ::String event,Dynamic handler,Dynamic pos){
{
		HX_STACK_FRAME("luxe.Emitter","on",0x64b989f7,"luxe.Emitter.on","luxe/Emitter.hx",55,0xe597ef29)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_ARG(handler,"handler")
		HX_STACK_ARG(pos,"pos")
		HX_STACK_LINE(57)
		this->_check();
		HX_STACK_LINE(61)
		if ((!(this->bindings->exists(event)))){
			HX_STACK_LINE(63)
			this->bindings->set(event,Dynamic( Array_obj<Dynamic>::__new().Add(handler)));
			struct _Function_2_1{
				inline static Dynamic Block( Dynamic &pos,Dynamic &handler,::String &event){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/Emitter.hx",64,0xe597ef29)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_CSTRING("handler") , handler,false);
						__result->Add(HX_CSTRING("event") , event,false);
						__result->Add(HX_CSTRING("pos") , pos,false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(64)
			this->connected->push(_Function_2_1::Block(pos,handler,event));
		}
		else{
			HX_STACK_LINE(67)
			Dynamic list = this->bindings->get(event);		HX_STACK_VAR(list,"list");
			HX_STACK_LINE(68)
			int _g = list->__Field(HX_CSTRING("indexOf"),true)(handler,null());		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(68)
			if (((_g == (int)-1))){
				HX_STACK_LINE(69)
				list->__Field(HX_CSTRING("push"),true)(handler);
				struct _Function_3_1{
					inline static Dynamic Block( Dynamic &pos,Dynamic &handler,::String &event){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/Emitter.hx",70,0xe597ef29)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_CSTRING("handler") , handler,false);
							__result->Add(HX_CSTRING("event") , event,false);
							__result->Add(HX_CSTRING("pos") , pos,false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(70)
				this->connected->push(_Function_3_1::Block(pos,handler,event));
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Emitter_obj,on,(void))

bool Emitter_obj::off( ::String event,Dynamic handler,Dynamic pos){
	HX_STACK_FRAME("luxe.Emitter","off",0xbd9f2797,"luxe.Emitter.off","luxe/Emitter.hx",77,0xe597ef29)
	HX_STACK_THIS(this)
	HX_STACK_ARG(event,"event")
	HX_STACK_ARG(handler,"handler")
	HX_STACK_ARG(pos,"pos")
	HX_STACK_LINE(79)
	this->_check();
	HX_STACK_LINE(81)
	bool success = false;		HX_STACK_VAR(success,"success");
	HX_STACK_LINE(83)
	if ((this->bindings->exists(event))){
		struct _Function_2_1{
			inline static Dynamic Block( Dynamic &handler,::String &event){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/Emitter.hx",87,0xe597ef29)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("event") , event,false);
					__result->Add(HX_CSTRING("handler") , handler,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(87)
		this->_to_remove->push(_Function_2_1::Block(handler,event));
		HX_STACK_LINE(89)
		for(::cpp::FastIterator_obj< Dynamic > *__it = ::cpp::CreateFastIterator< Dynamic >(this->connected->iterator());  __it->hasNext(); ){
			Dynamic _info = __it->next();
			if (((bool((_info->__Field(HX_CSTRING("event"),true) == event)) && bool((_info->__Field(HX_CSTRING("handler"),true) == handler))))){
				HX_STACK_LINE(91)
				this->connected->remove(_info);
			}
;
		}
		HX_STACK_LINE(96)
		success = true;
	}
	HX_STACK_LINE(100)
	return success;
}


HX_DEFINE_DYNAMIC_FUNC3(Emitter_obj,off,return )

Dynamic Emitter_obj::connections( Dynamic handler){
	HX_STACK_FRAME("luxe.Emitter","connections",0x18f076bd,"luxe.Emitter.connections","luxe/Emitter.hx",104,0xe597ef29)
	HX_STACK_THIS(this)
	HX_STACK_ARG(handler,"handler")
	HX_STACK_LINE(106)
	Dynamic list = Dynamic( Array_obj<Dynamic>::__new());		HX_STACK_VAR(list,"list");
	HX_STACK_LINE(108)
	for(::cpp::FastIterator_obj< Dynamic > *__it = ::cpp::CreateFastIterator< Dynamic >(this->connected->iterator());  __it->hasNext(); ){
		Dynamic _info = __it->next();
		if (((_info->__Field(HX_CSTRING("handler"),true) == handler))){
			HX_STACK_LINE(110)
			list->__Field(HX_CSTRING("push"),true)(_info);
		}
;
	}
	HX_STACK_LINE(114)
	return list;
}


HX_DEFINE_DYNAMIC_FUNC1(Emitter_obj,connections,return )

Void Emitter_obj::_check( ){
{
		HX_STACK_FRAME("luxe.Emitter","_check",0x5c9854e1,"luxe.Emitter._check","luxe/Emitter.hx",120,0xe597ef29)
		HX_STACK_THIS(this)
		HX_STACK_LINE(122)
		if ((this->_checking)){
			HX_STACK_LINE(123)
			return null();
		}
		HX_STACK_LINE(126)
		this->_checking = true;
		HX_STACK_LINE(128)
		if (((this->_to_remove->length > (int)0))){
			HX_STACK_LINE(130)
			for(::cpp::FastIterator_obj< Dynamic > *__it = ::cpp::CreateFastIterator< Dynamic >(this->_to_remove->iterator());  __it->hasNext(); ){
				Dynamic _node = __it->next();
				{
					HX_STACK_LINE(132)
					Dynamic list = this->bindings->get(_node->__Field(HX_CSTRING("event"),true));		HX_STACK_VAR(list,"list");
					HX_STACK_LINE(133)
					list->__Field(HX_CSTRING("remove"),true)(_node->__Field(HX_CSTRING("handler"),true));
					HX_STACK_LINE(136)
					if (((list->__Field(HX_CSTRING("length"),true) == (int)0))){
						HX_STACK_LINE(137)
						this->bindings->remove(_node->__Field(HX_CSTRING("event"),true));
					}
				}
;
			}
			HX_STACK_LINE(142)
			this->_to_remove = null();
			HX_STACK_LINE(143)
			::List _g = ::List_obj::__new();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(143)
			this->_to_remove = _g;
		}
		HX_STACK_LINE(147)
		this->_checking = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Emitter_obj,_check,(void))


Emitter_obj::Emitter_obj()
{
}

void Emitter_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Emitter);
	HX_MARK_MEMBER_NAME(bindings,"bindings");
	HX_MARK_MEMBER_NAME(connected,"connected");
	HX_MARK_MEMBER_NAME(_to_remove,"_to_remove");
	HX_MARK_MEMBER_NAME(_checking,"_checking");
	HX_MARK_END_CLASS();
}

void Emitter_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(bindings,"bindings");
	HX_VISIT_MEMBER_NAME(connected,"connected");
	HX_VISIT_MEMBER_NAME(_to_remove,"_to_remove");
	HX_VISIT_MEMBER_NAME(_checking,"_checking");
}

Dynamic Emitter_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"on") ) { return on_dyn(); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"off") ) { return off_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"emit") ) { return emit_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_check") ) { return _check_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"bindings") ) { return bindings; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"connected") ) { return connected; }
		if (HX_FIELD_EQ(inName,"_checking") ) { return _checking; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_to_remove") ) { return _to_remove; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"connections") ) { return connections_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Emitter_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"bindings") ) { bindings=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"connected") ) { connected=inValue.Cast< ::List >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_checking") ) { _checking=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_to_remove") ) { _to_remove=inValue.Cast< ::List >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Emitter_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("bindings"));
	outFields->push(HX_CSTRING("connected"));
	outFields->push(HX_CSTRING("_to_remove"));
	outFields->push(HX_CSTRING("_checking"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(Emitter_obj,bindings),HX_CSTRING("bindings")},
	{hx::fsObject /*::List*/ ,(int)offsetof(Emitter_obj,connected),HX_CSTRING("connected")},
	{hx::fsObject /*::List*/ ,(int)offsetof(Emitter_obj,_to_remove),HX_CSTRING("_to_remove")},
	{hx::fsBool,(int)offsetof(Emitter_obj,_checking),HX_CSTRING("_checking")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("bindings"),
	HX_CSTRING("connected"),
	HX_CSTRING("_to_remove"),
	HX_CSTRING("emit"),
	HX_CSTRING("on"),
	HX_CSTRING("off"),
	HX_CSTRING("connections"),
	HX_CSTRING("_checking"),
	HX_CSTRING("_check"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Emitter_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Emitter_obj::__mClass,"__mClass");
};

#endif

Class Emitter_obj::__mClass;

void Emitter_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("luxe.Emitter"), hx::TCanCast< Emitter_obj> ,sStaticFields,sMemberFields,
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

void Emitter_obj::__boot()
{
}

} // end namespace luxe
