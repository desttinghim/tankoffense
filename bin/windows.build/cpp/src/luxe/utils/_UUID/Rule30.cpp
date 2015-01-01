#include <hxcpp.h>

#ifndef INCLUDED_StringBuf
#include <StringBuf.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_luxe_utils__UUID_Rule30
#include <luxe/utils/_UUID/Rule30.h>
#endif
namespace luxe{
namespace utils{
namespace _UUID{

Void Rule30_obj::__construct(::String cells)
{
HX_STACK_FRAME("luxe.utils._UUID.Rule30","new",0x910b8494,"luxe.utils._UUID.Rule30.new","luxe/utils/UUID.hx",139,0x68a04aec)
HX_STACK_THIS(this)
HX_STACK_ARG(cells,"cells")
{
	HX_STACK_LINE(141)
	this->cellsLength = cells.length;
	HX_STACK_LINE(142)
	this->cells = cells;
	HX_STACK_LINE(143)
	::StringBuf str = ::StringBuf_obj::__new();		HX_STACK_VAR(str,"str");
	HX_STACK_LINE(145)
	int stir = (this->cellsLength * (int)16);		HX_STACK_VAR(stir,"stir");
	HX_STACK_LINE(146)
	{
		HX_STACK_LINE(146)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(146)
		while((true)){
			HX_STACK_LINE(146)
			if ((!(((_g < stir))))){
				HX_STACK_LINE(146)
				break;
			}
			HX_STACK_LINE(146)
			int i = (_g)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(147)
			this->getBit();
		}
	}
	HX_STACK_LINE(148)
	{
		HX_STACK_LINE(148)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(148)
		int _g = this->cellsLength;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(148)
		while((true)){
			HX_STACK_LINE(148)
			if ((!(((_g1 < _g))))){
				HX_STACK_LINE(148)
				break;
			}
			HX_STACK_LINE(148)
			int i = (_g1)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(149)
			int c = this->getBits((int)8);		HX_STACK_VAR(c,"c");
			HX_STACK_LINE(149)
			::String _g2 = ::String::fromCharCode(c);		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(149)
			str->b->push(_g2);
		}
	}
	HX_STACK_LINE(151)
	::String _g1 = str->b->join(HX_CSTRING(""));		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(151)
	this->cells = _g1;
}
;
	return null();
}

//Rule30_obj::~Rule30_obj() { }

Dynamic Rule30_obj::__CreateEmpty() { return  new Rule30_obj; }
hx::ObjectPtr< Rule30_obj > Rule30_obj::__new(::String cells)
{  hx::ObjectPtr< Rule30_obj > result = new Rule30_obj();
	result->__construct(cells);
	return result;}

Dynamic Rule30_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Rule30_obj > result = new Rule30_obj();
	result->__construct(inArgs[0]);
	return result;}

int Rule30_obj::getBits( int length){
	HX_STACK_FRAME("luxe.utils._UUID.Rule30","getBits",0xdd1188f0,"luxe.utils._UUID.Rule30.getBits","luxe/utils/UUID.hx",155,0x68a04aec)
	HX_STACK_THIS(this)
	HX_STACK_ARG(length,"length")
	HX_STACK_LINE(157)
	if (((length > (int)30))){
		HX_STACK_LINE(157)
		length = (int)30;
	}
	HX_STACK_LINE(159)
	int bits = (int)0;		HX_STACK_VAR(bits,"bits");
	HX_STACK_LINE(160)
	{
		HX_STACK_LINE(160)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(160)
		while((true)){
			HX_STACK_LINE(160)
			if ((!(((_g < length))))){
				HX_STACK_LINE(160)
				break;
			}
			HX_STACK_LINE(160)
			int i = (_g)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(161)
			int _g1 = this->getBit();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(161)
			int _g11 = (int((int(bits) << int((int)1))) | int(_g1));		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(161)
			bits = _g11;
		}
	}
	HX_STACK_LINE(163)
	return bits;
}


HX_DEFINE_DYNAMIC_FUNC1(Rule30_obj,getBits,return )

int Rule30_obj::getBit( ){
	HX_STACK_FRAME("luxe.utils._UUID.Rule30","getBit",0x3b89d623,"luxe.utils._UUID.Rule30.getBit","luxe/utils/UUID.hx",167,0x68a04aec)
	HX_STACK_THIS(this)
	HX_STACK_LINE(169)
	::String cells = this->cells;		HX_STACK_VAR(cells,"cells");
	HX_STACK_LINE(170)
	::StringBuf newCells = ::StringBuf_obj::__new();		HX_STACK_VAR(newCells,"newCells");
	HX_STACK_LINE(171)
	Dynamic C = newCells->addChar_dyn();		HX_STACK_VAR(C,"C");
	HX_STACK_LINE(172)
	int newCell = (int)0;		HX_STACK_VAR(newCell,"newCell");
	HX_STACK_LINE(173)
	Dynamic _g = cells.charCodeAt((this->cellsLength - (int)1));		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(173)
	int _g1 = (int(_g) << int((int)8));		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(173)
	Dynamic _g2 = cells.charCodeAt((int)0);		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(173)
	int section = (int(_g1) | int(_g2));		HX_STACK_VAR(section,"section");
	HX_STACK_LINE(175)
	{
		HX_STACK_LINE(175)
		int _g11 = (int)0;		HX_STACK_VAR(_g11,"_g11");
		HX_STACK_LINE(175)
		int _g3 = this->cellsLength;		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(175)
		while((true)){
			HX_STACK_LINE(175)
			if ((!(((_g11 < _g3))))){
				HX_STACK_LINE(175)
				break;
			}
			HX_STACK_LINE(175)
			int pos = (_g11)++;		HX_STACK_VAR(pos,"pos");
			HX_STACK_LINE(177)
			Dynamic _g31 = cells.charCodeAt(hx::Mod(pos,this->cellsLength));		HX_STACK_VAR(_g31,"_g31");
			HX_STACK_LINE(177)
			int _g4 = (int((int(section) << int((int)8))) | int(_g31));		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(177)
			section = _g4;
			HX_STACK_LINE(178)
			newCell = (int)0;
			HX_STACK_LINE(179)
			int i = (int)16;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(180)
			while((true)){
				HX_STACK_LINE(180)
				int _g5 = (i)--;		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(180)
				if ((!(((_g5 > (int)8))))){
					HX_STACK_LINE(180)
					break;
				}
				HX_STACK_LINE(181)
				newCell = (int((int(newCell) << int((int)1))) | int((int((int((int)30) >> int(((int((int(section) >> int(i))) & int((int)7)))))) & int((int)1))));
			}
			HX_STACK_LINE(182)
			{
				HX_STACK_LINE(182)
				::String _g6 = ::String::fromCharCode(newCell);		HX_STACK_VAR(_g6,"_g6");
				HX_STACK_LINE(182)
				newCells->b->push(_g6);
			}
		}
	}
	HX_STACK_LINE(185)
	::String _g7 = newCells->b->join(HX_CSTRING(""));		HX_STACK_VAR(_g7,"_g7");
	HX_STACK_LINE(185)
	this->cells = _g7;
	HX_STACK_LINE(186)
	return (int(newCell) & int((int)1));
}


HX_DEFINE_DYNAMIC_FUNC0(Rule30_obj,getBit,return )

::luxe::utils::_UUID::Rule30 Rule30_obj::createWithLength( int length){
	HX_STACK_FRAME("luxe.utils._UUID.Rule30","createWithLength",0x32bc00f4,"luxe.utils._UUID.Rule30.createWithLength","luxe/utils/UUID.hx",124,0x68a04aec)
	HX_STACK_ARG(length,"length")
	HX_STACK_LINE(126)
	::StringBuf str = ::StringBuf_obj::__new();		HX_STACK_VAR(str,"str");
	HX_STACK_LINE(127)
	Dynamic f = ::Math_obj::floor_dyn();		HX_STACK_VAR(f,"f");
	HX_STACK_LINE(127)
	Dynamic r = ::Math_obj::random_dyn();		HX_STACK_VAR(r,"r");
	HX_STACK_LINE(129)
	{
		HX_STACK_LINE(129)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(129)
		while((true)){
			HX_STACK_LINE(129)
			if ((!(((_g < length))))){
				HX_STACK_LINE(129)
				break;
			}
			HX_STACK_LINE(129)
			int i = (_g)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(130)
			Float _g1 = r().Cast< Float >();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(130)
			Float _g11 = (_g1 * (int)256);		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(130)
			int c = f(_g11).Cast< int >();		HX_STACK_VAR(c,"c");
			HX_STACK_LINE(130)
			::String _g2 = ::String::fromCharCode(c);		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(130)
			str->b->push(_g2);
		}
	}
	HX_STACK_LINE(132)
	::String _g3 = str->b->join(HX_CSTRING(""));		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(132)
	return ::luxe::utils::_UUID::Rule30_obj::__new(_g3);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Rule30_obj,createWithLength,return )


Rule30_obj::Rule30_obj()
{
}

void Rule30_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Rule30);
	HX_MARK_MEMBER_NAME(cells,"cells");
	HX_MARK_MEMBER_NAME(cellsLength,"cellsLength");
	HX_MARK_END_CLASS();
}

void Rule30_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(cells,"cells");
	HX_VISIT_MEMBER_NAME(cellsLength,"cellsLength");
}

Dynamic Rule30_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"cells") ) { return cells; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"getBit") ) { return getBit_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"getBits") ) { return getBits_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"cellsLength") ) { return cellsLength; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"createWithLength") ) { return createWithLength_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Rule30_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"cells") ) { cells=inValue.Cast< ::String >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"cellsLength") ) { cellsLength=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Rule30_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("cells"));
	outFields->push(HX_CSTRING("cellsLength"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("createWithLength"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(Rule30_obj,cells),HX_CSTRING("cells")},
	{hx::fsInt,(int)offsetof(Rule30_obj,cellsLength),HX_CSTRING("cellsLength")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("cells"),
	HX_CSTRING("cellsLength"),
	HX_CSTRING("getBits"),
	HX_CSTRING("getBit"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Rule30_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Rule30_obj::__mClass,"__mClass");
};

#endif

Class Rule30_obj::__mClass;

void Rule30_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("luxe.utils._UUID.Rule30"), hx::TCanCast< Rule30_obj> ,sStaticFields,sMemberFields,
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

void Rule30_obj::__boot()
{
}

} // end namespace luxe
} // end namespace utils
} // end namespace _UUID
