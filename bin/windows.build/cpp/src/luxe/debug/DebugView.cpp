#include <hxcpp.h>

#ifndef INCLUDED_luxe_Emitter
#include <luxe/Emitter.h>
#endif
#ifndef INCLUDED_luxe_Objects
#include <luxe/Objects.h>
#endif
#ifndef INCLUDED_luxe_debug_DebugView
#include <luxe/debug/DebugView.h>
#endif
namespace luxe{
namespace debug{

Void DebugView_obj::__construct()
{
HX_STACK_FRAME("luxe.debug.DebugView","new",0x6e3d9b17,"luxe.debug.DebugView.new","luxe/debug/DebugView.hx",7,0xfc1625fb)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(12)
	this->visible = false;
	HX_STACK_LINE(9)
	super::__construct(null(),null());
}
;
	return null();
}

//DebugView_obj::~DebugView_obj() { }

Dynamic DebugView_obj::__CreateEmpty() { return  new DebugView_obj; }
hx::ObjectPtr< DebugView_obj > DebugView_obj::__new()
{  hx::ObjectPtr< DebugView_obj > result = new DebugView_obj();
	result->__construct();
	return result;}

Dynamic DebugView_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< DebugView_obj > result = new DebugView_obj();
	result->__construct();
	return result;}

Void DebugView_obj::refresh( ){
{
		HX_STACK_FRAME("luxe.debug.DebugView","refresh",0x530bcc12,"luxe.debug.DebugView.refresh","luxe/debug/DebugView.hx",14,0xfc1625fb)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(DebugView_obj,refresh,(void))

Void DebugView_obj::process( ){
{
		HX_STACK_FRAME("luxe.debug.DebugView","process",0x573594a6,"luxe.debug.DebugView.process","luxe/debug/DebugView.hx",17,0xfc1625fb)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(DebugView_obj,process,(void))

Void DebugView_obj::onmousedown( Dynamic e){
{
		HX_STACK_FRAME("luxe.debug.DebugView","onmousedown",0xcaaf61bf,"luxe.debug.DebugView.onmousedown","luxe/debug/DebugView.hx",20,0xfc1625fb)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DebugView_obj,onmousedown,(void))

Void DebugView_obj::onmousewheel( Dynamic e){
{
		HX_STACK_FRAME("luxe.debug.DebugView","onmousewheel",0x7ab4fc9e,"luxe.debug.DebugView.onmousewheel","luxe/debug/DebugView.hx",23,0xfc1625fb)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DebugView_obj,onmousewheel,(void))

Void DebugView_obj::onmouseup( Dynamic e){
{
		HX_STACK_FRAME("luxe.debug.DebugView","onmouseup",0xb701ce78,"luxe.debug.DebugView.onmouseup","luxe/debug/DebugView.hx",26,0xfc1625fb)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DebugView_obj,onmouseup,(void))

Void DebugView_obj::onmousemove( Dynamic e){
{
		HX_STACK_FRAME("luxe.debug.DebugView","onmousemove",0xd0a24c6e,"luxe.debug.DebugView.onmousemove","luxe/debug/DebugView.hx",29,0xfc1625fb)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DebugView_obj,onmousemove,(void))

Void DebugView_obj::onkeydown( Dynamic e){
{
		HX_STACK_FRAME("luxe.debug.DebugView","onkeydown",0xa7fcfc39,"luxe.debug.DebugView.onkeydown","luxe/debug/DebugView.hx",32,0xfc1625fb)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DebugView_obj,onkeydown,(void))

Void DebugView_obj::onkeyup( Dynamic e){
{
		HX_STACK_FRAME("luxe.debug.DebugView","onkeyup",0x47f9f672,"luxe.debug.DebugView.onkeyup","luxe/debug/DebugView.hx",35,0xfc1625fb)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DebugView_obj,onkeyup,(void))

Void DebugView_obj::create( ){
{
		HX_STACK_FRAME("luxe.debug.DebugView","create",0xe3d5e8a5,"luxe.debug.DebugView.create","luxe/debug/DebugView.hx",38,0xfc1625fb)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(DebugView_obj,create,(void))

Void DebugView_obj::show( ){
{
		HX_STACK_FRAME("luxe.debug.DebugView","show",0x0afa6a66,"luxe.debug.DebugView.show","luxe/debug/DebugView.hx",42,0xfc1625fb)
		HX_STACK_THIS(this)
		HX_STACK_LINE(42)
		this->visible = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(DebugView_obj,show,(void))

Void DebugView_obj::hide( ){
{
		HX_STACK_FRAME("luxe.debug.DebugView","hide",0x03b5ca2b,"luxe.debug.DebugView.hide","luxe/debug/DebugView.hx",45,0xfc1625fb)
		HX_STACK_THIS(this)
		HX_STACK_LINE(45)
		this->visible = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(DebugView_obj,hide,(void))


DebugView_obj::DebugView_obj()
{
}

Dynamic DebugView_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"show") ) { return show_dyn(); }
		if (HX_FIELD_EQ(inName,"hide") ) { return hide_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"visible") ) { return visible; }
		if (HX_FIELD_EQ(inName,"refresh") ) { return refresh_dyn(); }
		if (HX_FIELD_EQ(inName,"process") ) { return process_dyn(); }
		if (HX_FIELD_EQ(inName,"onkeyup") ) { return onkeyup_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"onmouseup") ) { return onmouseup_dyn(); }
		if (HX_FIELD_EQ(inName,"onkeydown") ) { return onkeydown_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"onmousedown") ) { return onmousedown_dyn(); }
		if (HX_FIELD_EQ(inName,"onmousemove") ) { return onmousemove_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"onmousewheel") ) { return onmousewheel_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic DebugView_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"visible") ) { visible=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void DebugView_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("visible"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(DebugView_obj,visible),HX_CSTRING("visible")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("visible"),
	HX_CSTRING("refresh"),
	HX_CSTRING("process"),
	HX_CSTRING("onmousedown"),
	HX_CSTRING("onmousewheel"),
	HX_CSTRING("onmouseup"),
	HX_CSTRING("onmousemove"),
	HX_CSTRING("onkeydown"),
	HX_CSTRING("onkeyup"),
	HX_CSTRING("create"),
	HX_CSTRING("show"),
	HX_CSTRING("hide"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DebugView_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DebugView_obj::__mClass,"__mClass");
};

#endif

Class DebugView_obj::__mClass;

void DebugView_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("luxe.debug.DebugView"), hx::TCanCast< DebugView_obj> ,sStaticFields,sMemberFields,
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

void DebugView_obj::__boot()
{
}

} // end namespace luxe
} // end namespace debug
