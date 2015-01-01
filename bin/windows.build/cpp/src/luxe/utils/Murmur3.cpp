#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_io_BytesInput
#include <haxe/io/BytesInput.h>
#endif
#ifndef INCLUDED_haxe_io_Input
#include <haxe/io/Input.h>
#endif
#ifndef INCLUDED_luxe_utils_Murmur3
#include <luxe/utils/Murmur3.h>
#endif
namespace luxe{
namespace utils{

Void Murmur3_obj::__construct()
{
	return null();
}

//Murmur3_obj::~Murmur3_obj() { }

Dynamic Murmur3_obj::__CreateEmpty() { return  new Murmur3_obj; }
hx::ObjectPtr< Murmur3_obj > Murmur3_obj::__new()
{  hx::ObjectPtr< Murmur3_obj > result = new Murmur3_obj();
	result->__construct();
	return result;}

Dynamic Murmur3_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Murmur3_obj > result = new Murmur3_obj();
	result->__construct();
	return result;}

int Murmur3_obj::C1;

int Murmur3_obj::C2;

int Murmur3_obj::R1;

int Murmur3_obj::R2;

int Murmur3_obj::M;

int Murmur3_obj::N;

int Murmur3_obj::hash( ::haxe::io::Bytes bytes,hx::Null< int >  __o_seed){
int seed = __o_seed.Default(0);
	HX_STACK_FRAME("luxe.utils.Murmur3","hash",0x17934e5e,"luxe.utils.Murmur3.hash","luxe/utils/Murmur3.hx",32,0x66e5f2e2)
	HX_STACK_ARG(bytes,"bytes")
	HX_STACK_ARG(seed,"seed")
{
		HX_STACK_LINE(33)
		int hash = seed;		HX_STACK_VAR(hash,"hash");
		HX_STACK_LINE(34)
		int nblocks = ::Std_obj::_int((Float(bytes->length) / Float((int)4)));		HX_STACK_VAR(nblocks,"nblocks");
		HX_STACK_LINE(35)
		::haxe::io::BytesInput blocks = ::haxe::io::BytesInput_obj::__new(bytes,null(),null());		HX_STACK_VAR(blocks,"blocks");
		HX_STACK_LINE(37)
		{
			HX_STACK_LINE(37)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(37)
			while((true)){
				HX_STACK_LINE(37)
				if ((!(((_g < nblocks))))){
					HX_STACK_LINE(37)
					break;
				}
				HX_STACK_LINE(37)
				int i = (_g)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(38)
				int k = blocks->readInt32();		HX_STACK_VAR(k,"k");
				HX_STACK_LINE(39)
				k = (k * (int)-862048943);
				HX_STACK_LINE(40)
				k = (int((int(k) << int((int)15))) | int(hx::UShr(k,(int)17)));
				HX_STACK_LINE(41)
				k = (k * (int)461845907);
				HX_STACK_LINE(42)
				hash = (int(hash) ^ int(k));
				HX_STACK_LINE(43)
				hash = (int((int(hash) << int((int)13))) | int(hx::UShr(hash,(int)19)));
				HX_STACK_LINE(44)
				hash = ((hash * (int)5) + (int)-430675100);
			}
		}
		HX_STACK_LINE(47)
		int offset = (nblocks * (int)4);		HX_STACK_VAR(offset,"offset");
		HX_STACK_LINE(48)
		int k1 = (int)0;		HX_STACK_VAR(k1,"k1");
		HX_STACK_LINE(49)
		{
			HX_STACK_LINE(49)
			int _g = hx::Mod(bytes->length,(int)4);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(49)
			switch( (int)(_g)){
				case (int)3: {
					HX_STACK_LINE(51)
					k1 = (int(k1) ^ int((int(bytes->b->__get((offset + (int)2))) << int((int)16))));
					HX_STACK_LINE(52)
					k1 = (int(k1) ^ int((int(bytes->b->__get((offset + (int)1))) << int((int)8))));
					HX_STACK_LINE(53)
					k1 = (int(k1) ^ int(bytes->b->__get(offset)));
					HX_STACK_LINE(54)
					k1 = (k1 * (int)-862048943);
					HX_STACK_LINE(55)
					k1 = (int((int(k1) << int((int)15))) | int(hx::UShr(k1,(int)17)));
					HX_STACK_LINE(56)
					k1 = (k1 * (int)461845907);
					HX_STACK_LINE(57)
					hash = (int(hash) ^ int(k1));
				}
				;break;
				case (int)2: {
					HX_STACK_LINE(60)
					k1 = (int(k1) ^ int((int(bytes->b->__get((offset + (int)1))) << int((int)8))));
					HX_STACK_LINE(61)
					k1 = (int(k1) ^ int(bytes->b->__get(offset)));
					HX_STACK_LINE(62)
					k1 = (k1 * (int)-862048943);
					HX_STACK_LINE(63)
					k1 = (int((int(k1) << int((int)15))) | int(hx::UShr(k1,(int)17)));
					HX_STACK_LINE(64)
					k1 = (k1 * (int)461845907);
					HX_STACK_LINE(65)
					hash = (int(hash) ^ int(k1));
				}
				;break;
				case (int)1: {
					HX_STACK_LINE(68)
					k1 = (int(k1) ^ int(bytes->b->__get(offset)));
					HX_STACK_LINE(69)
					k1 = (k1 * (int)-862048943);
					HX_STACK_LINE(70)
					k1 = (int((int(k1) << int((int)15))) | int(hx::UShr(k1,(int)17)));
					HX_STACK_LINE(71)
					k1 = (k1 * (int)461845907);
					HX_STACK_LINE(72)
					hash = (int(hash) ^ int(k1));
				}
				;break;
			}
		}
		HX_STACK_LINE(76)
		hash = (int(hash) ^ int(bytes->length));
		HX_STACK_LINE(77)
		hash = (int(hash) ^ int(hx::UShr(hash,(int)16)));
		HX_STACK_LINE(78)
		hash = (hash * (int)-2048144789);
		HX_STACK_LINE(79)
		hash = (int(hash) ^ int(hx::UShr(hash,(int)13)));
		HX_STACK_LINE(80)
		hash = (hash * (int)-1028477387);
		HX_STACK_LINE(81)
		hash = (int(hash) ^ int(hx::UShr(hash,(int)16)));
		HX_STACK_LINE(83)
		return hash;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Murmur3_obj,hash,return )


Murmur3_obj::Murmur3_obj()
{
}

Dynamic Murmur3_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"hash") ) { return hash_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Murmur3_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void Murmur3_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("C1"),
	HX_CSTRING("C2"),
	HX_CSTRING("R1"),
	HX_CSTRING("R2"),
	HX_CSTRING("M"),
	HX_CSTRING("N"),
	HX_CSTRING("hash"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Murmur3_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Murmur3_obj::C1,"C1");
	HX_MARK_MEMBER_NAME(Murmur3_obj::C2,"C2");
	HX_MARK_MEMBER_NAME(Murmur3_obj::R1,"R1");
	HX_MARK_MEMBER_NAME(Murmur3_obj::R2,"R2");
	HX_MARK_MEMBER_NAME(Murmur3_obj::M,"M");
	HX_MARK_MEMBER_NAME(Murmur3_obj::N,"N");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Murmur3_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Murmur3_obj::C1,"C1");
	HX_VISIT_MEMBER_NAME(Murmur3_obj::C2,"C2");
	HX_VISIT_MEMBER_NAME(Murmur3_obj::R1,"R1");
	HX_VISIT_MEMBER_NAME(Murmur3_obj::R2,"R2");
	HX_VISIT_MEMBER_NAME(Murmur3_obj::M,"M");
	HX_VISIT_MEMBER_NAME(Murmur3_obj::N,"N");
};

#endif

Class Murmur3_obj::__mClass;

void Murmur3_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("luxe.utils.Murmur3"), hx::TCanCast< Murmur3_obj> ,sStaticFields,sMemberFields,
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

void Murmur3_obj::__boot()
{
	C1= (int)-862048943;
	C2= (int)461845907;
	R1= (int)15;
	R2= (int)13;
	M= (int)5;
	N= (int)-430675100;
}

} // end namespace luxe
} // end namespace utils
