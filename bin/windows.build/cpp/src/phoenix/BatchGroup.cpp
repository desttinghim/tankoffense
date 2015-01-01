#include <hxcpp.h>

#ifndef INCLUDED_phoenix_BatchGroup
#include <phoenix/BatchGroup.h>
#endif
#ifndef INCLUDED_phoenix_Batcher
#include <phoenix/Batcher.h>
#endif
namespace phoenix{

Void BatchGroup_obj::__construct(Dynamic _pre,Dynamic _post)
{
HX_STACK_FRAME("phoenix.BatchGroup","new",0xf6a272b6,"phoenix.BatchGroup.new","phoenix/Batcher.hx",56,0xa9541457)
HX_STACK_THIS(this)
HX_STACK_ARG(_pre,"_pre")
HX_STACK_ARG(_post,"_post")
{
	HX_STACK_LINE(57)
	this->pre_render = _pre;
	HX_STACK_LINE(58)
	this->post_render = _post;
}
;
	return null();
}

//BatchGroup_obj::~BatchGroup_obj() { }

Dynamic BatchGroup_obj::__CreateEmpty() { return  new BatchGroup_obj; }
hx::ObjectPtr< BatchGroup_obj > BatchGroup_obj::__new(Dynamic _pre,Dynamic _post)
{  hx::ObjectPtr< BatchGroup_obj > result = new BatchGroup_obj();
	result->__construct(_pre,_post);
	return result;}

Dynamic BatchGroup_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< BatchGroup_obj > result = new BatchGroup_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}


BatchGroup_obj::BatchGroup_obj()
{
}

void BatchGroup_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BatchGroup);
	HX_MARK_MEMBER_NAME(pre_render,"pre_render");
	HX_MARK_MEMBER_NAME(post_render,"post_render");
	HX_MARK_END_CLASS();
}

void BatchGroup_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(pre_render,"pre_render");
	HX_VISIT_MEMBER_NAME(post_render,"post_render");
}

Dynamic BatchGroup_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"pre_render") ) { return pre_render; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"post_render") ) { return post_render; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic BatchGroup_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"pre_render") ) { pre_render=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"post_render") ) { post_render=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void BatchGroup_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(BatchGroup_obj,pre_render),HX_CSTRING("pre_render")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(BatchGroup_obj,post_render),HX_CSTRING("post_render")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("pre_render"),
	HX_CSTRING("post_render"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BatchGroup_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BatchGroup_obj::__mClass,"__mClass");
};

#endif

Class BatchGroup_obj::__mClass;

void BatchGroup_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("phoenix.BatchGroup"), hx::TCanCast< BatchGroup_obj> ,sStaticFields,sMemberFields,
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

void BatchGroup_obj::__boot()
{
}

} // end namespace phoenix
