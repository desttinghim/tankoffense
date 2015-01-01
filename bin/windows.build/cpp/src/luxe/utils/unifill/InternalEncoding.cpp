#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_io_BytesBuffer
#include <haxe/io/BytesBuffer.h>
#endif
#ifndef INCLUDED_luxe_utils_unifill_Exception
#include <luxe/utils/unifill/Exception.h>
#endif
#ifndef INCLUDED_luxe_utils_unifill_InternalEncoding
#include <luxe/utils/unifill/InternalEncoding.h>
#endif
#ifndef INCLUDED_luxe_utils_unifill_Utf
#include <luxe/utils/unifill/Utf.h>
#endif
#ifndef INCLUDED_luxe_utils_unifill_Utf8
#include <luxe/utils/unifill/Utf8.h>
#endif
#ifndef INCLUDED_luxe_utils_unifill__Utf8_Utf8Impl
#include <luxe/utils/unifill/_Utf8/Utf8Impl.h>
#endif
namespace luxe{
namespace utils{
namespace unifill{

Void InternalEncoding_obj::__construct()
{
	return null();
}

//InternalEncoding_obj::~InternalEncoding_obj() { }

Dynamic InternalEncoding_obj::__CreateEmpty() { return  new InternalEncoding_obj; }
hx::ObjectPtr< InternalEncoding_obj > InternalEncoding_obj::__new()
{  hx::ObjectPtr< InternalEncoding_obj > result = new InternalEncoding_obj();
	result->__construct();
	return result;}

Dynamic InternalEncoding_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< InternalEncoding_obj > result = new InternalEncoding_obj();
	result->__construct();
	return result;}

::String InternalEncoding_obj::get_internalEncoding( ){
	HX_STACK_FRAME("luxe.utils.unifill.InternalEncoding","get_internalEncoding",0x28a1da27,"luxe.utils.unifill.InternalEncoding.get_internalEncoding","luxe/utils/unifill/InternalEncoding.hx",24,0x3061c49b)
	HX_STACK_LINE(24)
	return HX_CSTRING("UTF-8");
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(InternalEncoding_obj,get_internalEncoding,return )

int InternalEncoding_obj::codeUnitAt( ::String s,int index){
	HX_STACK_FRAME("luxe.utils.unifill.InternalEncoding","codeUnitAt",0x2c559c12,"luxe.utils.unifill.InternalEncoding.codeUnitAt","luxe/utils/unifill/InternalEncoding.hx",35,0x3061c49b)
	HX_STACK_ARG(s,"s")
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(36)
	::String u_str = s;		HX_STACK_VAR(u_str,"u_str");
	HX_STACK_LINE(37)
	return u_str.cca(index);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(InternalEncoding_obj,codeUnitAt,return )

int InternalEncoding_obj::codePointAt( ::String s,int index){
	HX_STACK_FRAME("luxe.utils.unifill.InternalEncoding","codePointAt",0x31323d88,"luxe.utils.unifill.InternalEncoding.codePointAt","luxe/utils/unifill/InternalEncoding.hx",44,0x3061c49b)
	HX_STACK_ARG(s,"s")
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(45)
	::luxe::utils::unifill::Utf8 u = ::luxe::utils::unifill::Utf8_obj::__new(s);		HX_STACK_VAR(u,"u");
	HX_STACK_LINE(46)
	return u->codePointAt(index);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(InternalEncoding_obj,codePointAt,return )

::String InternalEncoding_obj::charAt( ::String s,int index){
	HX_STACK_FRAME("luxe.utils.unifill.InternalEncoding","charAt",0x38df54d7,"luxe.utils.unifill.InternalEncoding.charAt","luxe/utils/unifill/InternalEncoding.hx",53,0x3061c49b)
	HX_STACK_ARG(s,"s")
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(54)
	::String u_str = s;		HX_STACK_VAR(u_str,"u_str");
	HX_STACK_LINE(55)
	::String _g;		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(55)
	{
		HX_STACK_LINE(55)
		Dynamic len;		HX_STACK_VAR(len,"len");
		HX_STACK_LINE(55)
		{
			HX_STACK_LINE(55)
			int c = u_str.cca(index);		HX_STACK_VAR(c,"c");
			HX_STACK_LINE(55)
			if (((c < (int)192))){
				HX_STACK_LINE(55)
				len = (int)1;
			}
			else{
				HX_STACK_LINE(55)
				if (((c < (int)224))){
					HX_STACK_LINE(55)
					len = (int)2;
				}
				else{
					HX_STACK_LINE(55)
					if (((c < (int)240))){
						HX_STACK_LINE(55)
						len = (int)3;
					}
					else{
						HX_STACK_LINE(55)
						if (((c < (int)248))){
							HX_STACK_LINE(55)
							len = (int)4;
						}
						else{
							HX_STACK_LINE(55)
							len = (int)1;
						}
					}
				}
			}
		}
		HX_STACK_LINE(55)
		{
			HX_STACK_LINE(55)
			::String s1 = u_str.substr(index,len);		HX_STACK_VAR(s1,"s1");
			HX_STACK_LINE(55)
			_g = s1;
		}
	}
	HX_STACK_LINE(55)
	::String _this_str = _g;		HX_STACK_VAR(_this_str,"_this_str");
	HX_STACK_LINE(55)
	return _this_str;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(InternalEncoding_obj,charAt,return )

int InternalEncoding_obj::codePointCount( ::String s,int beginIndex,int endIndex){
	HX_STACK_FRAME("luxe.utils.unifill.InternalEncoding","codePointCount",0xe9cf275a,"luxe.utils.unifill.InternalEncoding.codePointCount","luxe/utils/unifill/InternalEncoding.hx",62,0x3061c49b)
	HX_STACK_ARG(s,"s")
	HX_STACK_ARG(beginIndex,"beginIndex")
	HX_STACK_ARG(endIndex,"endIndex")
	HX_STACK_LINE(63)
	::luxe::utils::unifill::Utf8 u = ::luxe::utils::unifill::Utf8_obj::__new(s);		HX_STACK_VAR(u,"u");
	HX_STACK_LINE(64)
	return u->codePointCount(beginIndex,endIndex);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(InternalEncoding_obj,codePointCount,return )

int InternalEncoding_obj::codePointWidthAt( ::String s,int index){
	HX_STACK_FRAME("luxe.utils.unifill.InternalEncoding","codePointWidthAt",0x6d12d7e4,"luxe.utils.unifill.InternalEncoding.codePointWidthAt","luxe/utils/unifill/InternalEncoding.hx",71,0x3061c49b)
	HX_STACK_ARG(s,"s")
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(72)
	::String u_str = s;		HX_STACK_VAR(u_str,"u_str");
	HX_STACK_LINE(73)
	int c = u_str.cca(index);		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(73)
	if (((c < (int)192))){
		HX_STACK_LINE(73)
		return (int)1;
	}
	else{
		HX_STACK_LINE(73)
		if (((c < (int)224))){
			HX_STACK_LINE(73)
			return (int)2;
		}
		else{
			HX_STACK_LINE(73)
			if (((c < (int)240))){
				HX_STACK_LINE(73)
				return (int)3;
			}
			else{
				HX_STACK_LINE(73)
				if (((c < (int)248))){
					HX_STACK_LINE(73)
					return (int)4;
				}
				else{
					HX_STACK_LINE(73)
					return (int)1;
				}
			}
		}
	}
	HX_STACK_LINE(73)
	return (int)0;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(InternalEncoding_obj,codePointWidthAt,return )

int InternalEncoding_obj::codePointWidthBefore( ::String s,int index){
	HX_STACK_FRAME("luxe.utils.unifill.InternalEncoding","codePointWidthBefore",0xd33fa3f0,"luxe.utils.unifill.InternalEncoding.codePointWidthBefore","luxe/utils/unifill/InternalEncoding.hx",80,0x3061c49b)
	HX_STACK_ARG(s,"s")
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(81)
	::luxe::utils::unifill::Utf8 u = ::luxe::utils::unifill::Utf8_obj::__new(s);		HX_STACK_VAR(u,"u");
	HX_STACK_LINE(82)
	Dynamic accessor = u->codeUnitAt_dyn();		HX_STACK_VAR(accessor,"accessor");
	HX_STACK_LINE(82)
	int c1 = accessor((index - (int)1)).Cast< int >();		HX_STACK_VAR(c1,"c1");
	HX_STACK_LINE(82)
	if (((bool((c1 < (int)128)) || bool((c1 >= (int)192))))){
		HX_STACK_LINE(82)
		return (int)1;
	}
	else{
		HX_STACK_LINE(82)
		int _g = accessor((index - (int)2)).Cast< int >();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(82)
		int _g1 = (int(_g) & int((int)224));		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(82)
		if (((_g1 == (int)192))){
			HX_STACK_LINE(82)
			return (int)2;
		}
		else{
			HX_STACK_LINE(82)
			int _g2 = accessor((index - (int)3)).Cast< int >();		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(82)
			int _g3 = (int(_g2) & int((int)240));		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(82)
			if (((_g3 == (int)224))){
				HX_STACK_LINE(82)
				return (int)3;
			}
			else{
				HX_STACK_LINE(82)
				int _g4 = accessor((index - (int)4)).Cast< int >();		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(82)
				int _g5 = (int(_g4) & int((int)248));		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(82)
				if (((_g5 == (int)240))){
					HX_STACK_LINE(82)
					return (int)4;
				}
				else{
					HX_STACK_LINE(82)
					return (int)1;
				}
			}
		}
	}
	HX_STACK_LINE(82)
	return (int)0;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(InternalEncoding_obj,codePointWidthBefore,return )

int InternalEncoding_obj::offsetByCodePoints( ::String s,int index,int codePointOffset){
	HX_STACK_FRAME("luxe.utils.unifill.InternalEncoding","offsetByCodePoints",0x8b5e4088,"luxe.utils.unifill.InternalEncoding.offsetByCodePoints","luxe/utils/unifill/InternalEncoding.hx",89,0x3061c49b)
	HX_STACK_ARG(s,"s")
	HX_STACK_ARG(index,"index")
	HX_STACK_ARG(codePointOffset,"codePointOffset")
	HX_STACK_LINE(90)
	::luxe::utils::unifill::Utf8 u = ::luxe::utils::unifill::Utf8_obj::__new(s);		HX_STACK_VAR(u,"u");
	HX_STACK_LINE(91)
	if (((codePointOffset >= (int)0))){
		HX_STACK_LINE(91)
		int index1 = index;		HX_STACK_VAR(index1,"index1");
		HX_STACK_LINE(91)
		int len = u->str.length;		HX_STACK_VAR(len,"len");
		HX_STACK_LINE(91)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(91)
		while((true)){
			HX_STACK_LINE(91)
			if ((!(((bool((i < codePointOffset)) && bool((index1 < len))))))){
				HX_STACK_LINE(91)
				break;
			}
			HX_STACK_LINE(91)
			int _g;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(91)
			{
				HX_STACK_LINE(91)
				int c = u->str.cca(index1);		HX_STACK_VAR(c,"c");
				HX_STACK_LINE(91)
				if (((c < (int)192))){
					HX_STACK_LINE(91)
					_g = (int)1;
				}
				else{
					HX_STACK_LINE(91)
					if (((c < (int)224))){
						HX_STACK_LINE(91)
						_g = (int)2;
					}
					else{
						HX_STACK_LINE(91)
						if (((c < (int)240))){
							HX_STACK_LINE(91)
							_g = (int)3;
						}
						else{
							HX_STACK_LINE(91)
							if (((c < (int)248))){
								HX_STACK_LINE(91)
								_g = (int)4;
							}
							else{
								HX_STACK_LINE(91)
								_g = (int)1;
							}
						}
					}
				}
			}
			HX_STACK_LINE(91)
			hx::AddEq(index1,_g);
			HX_STACK_LINE(91)
			++(i);
		}
		HX_STACK_LINE(91)
		return index1;
	}
	else{
		HX_STACK_LINE(91)
		int index1 = index;		HX_STACK_VAR(index1,"index1");
		HX_STACK_LINE(91)
		int count = (int)0;		HX_STACK_VAR(count,"count");
		HX_STACK_LINE(91)
		while((true)){
			HX_STACK_LINE(91)
			if ((!(((bool((count < -(codePointOffset))) && bool(((int)0 < index1))))))){
				HX_STACK_LINE(91)
				break;
			}
			HX_STACK_LINE(91)
			int _g7;		HX_STACK_VAR(_g7,"_g7");
			HX_STACK_LINE(91)
			{
				HX_STACK_LINE(91)
				Dynamic accessor = u->codeUnitAt_dyn();		HX_STACK_VAR(accessor,"accessor");
				HX_STACK_LINE(91)
				int c1 = accessor((index1 - (int)1)).Cast< int >();		HX_STACK_VAR(c1,"c1");
				HX_STACK_LINE(91)
				if (((bool((c1 < (int)128)) || bool((c1 >= (int)192))))){
					HX_STACK_LINE(91)
					_g7 = (int)1;
				}
				else{
					HX_STACK_LINE(91)
					int _g1 = accessor((index1 - (int)2)).Cast< int >();		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(91)
					int _g2 = (int(_g1) & int((int)224));		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(91)
					if (((_g2 == (int)192))){
						HX_STACK_LINE(91)
						_g7 = (int)2;
					}
					else{
						HX_STACK_LINE(91)
						int _g3 = accessor((index1 - (int)3)).Cast< int >();		HX_STACK_VAR(_g3,"_g3");
						HX_STACK_LINE(91)
						int _g4 = (int(_g3) & int((int)240));		HX_STACK_VAR(_g4,"_g4");
						HX_STACK_LINE(91)
						if (((_g4 == (int)224))){
							HX_STACK_LINE(91)
							_g7 = (int)3;
						}
						else{
							HX_STACK_LINE(91)
							int _g5 = accessor((index1 - (int)4)).Cast< int >();		HX_STACK_VAR(_g5,"_g5");
							HX_STACK_LINE(91)
							int _g6 = (int(_g5) & int((int)248));		HX_STACK_VAR(_g6,"_g6");
							HX_STACK_LINE(91)
							if (((_g6 == (int)240))){
								HX_STACK_LINE(91)
								_g7 = (int)4;
							}
							else{
								HX_STACK_LINE(91)
								_g7 = (int)1;
							}
						}
					}
				}
			}
			HX_STACK_LINE(91)
			hx::SubEq(index1,_g7);
			HX_STACK_LINE(91)
			++(count);
		}
		HX_STACK_LINE(91)
		return index1;
	}
	HX_STACK_LINE(91)
	return (int)0;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(InternalEncoding_obj,offsetByCodePoints,return )

int InternalEncoding_obj::backwardOffsetByCodePoints( ::String s,int index,int codePointOffset){
	HX_STACK_FRAME("luxe.utils.unifill.InternalEncoding","backwardOffsetByCodePoints",0x9c28134b,"luxe.utils.unifill.InternalEncoding.backwardOffsetByCodePoints","luxe/utils/unifill/InternalEncoding.hx",99,0x3061c49b)
	HX_STACK_ARG(s,"s")
	HX_STACK_ARG(index,"index")
	HX_STACK_ARG(codePointOffset,"codePointOffset")
	HX_STACK_LINE(100)
	::luxe::utils::unifill::Utf8 u = ::luxe::utils::unifill::Utf8_obj::__new(s);		HX_STACK_VAR(u,"u");
	HX_STACK_LINE(101)
	int codePointOffset1 = -(codePointOffset);		HX_STACK_VAR(codePointOffset1,"codePointOffset1");
	HX_STACK_LINE(101)
	if (((codePointOffset1 >= (int)0))){
		HX_STACK_LINE(101)
		int index1 = index;		HX_STACK_VAR(index1,"index1");
		HX_STACK_LINE(101)
		int len = u->str.length;		HX_STACK_VAR(len,"len");
		HX_STACK_LINE(101)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(101)
		while((true)){
			HX_STACK_LINE(101)
			if ((!(((bool((i < codePointOffset1)) && bool((index1 < len))))))){
				HX_STACK_LINE(101)
				break;
			}
			HX_STACK_LINE(101)
			int _g;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(101)
			{
				HX_STACK_LINE(101)
				int c = u->str.cca(index1);		HX_STACK_VAR(c,"c");
				HX_STACK_LINE(101)
				if (((c < (int)192))){
					HX_STACK_LINE(101)
					_g = (int)1;
				}
				else{
					HX_STACK_LINE(101)
					if (((c < (int)224))){
						HX_STACK_LINE(101)
						_g = (int)2;
					}
					else{
						HX_STACK_LINE(101)
						if (((c < (int)240))){
							HX_STACK_LINE(101)
							_g = (int)3;
						}
						else{
							HX_STACK_LINE(101)
							if (((c < (int)248))){
								HX_STACK_LINE(101)
								_g = (int)4;
							}
							else{
								HX_STACK_LINE(101)
								_g = (int)1;
							}
						}
					}
				}
			}
			HX_STACK_LINE(101)
			hx::AddEq(index1,_g);
			HX_STACK_LINE(101)
			++(i);
		}
		HX_STACK_LINE(101)
		return index1;
	}
	else{
		HX_STACK_LINE(101)
		int index1 = index;		HX_STACK_VAR(index1,"index1");
		HX_STACK_LINE(101)
		int count = (int)0;		HX_STACK_VAR(count,"count");
		HX_STACK_LINE(101)
		while((true)){
			HX_STACK_LINE(101)
			if ((!(((bool((count < -(codePointOffset1))) && bool(((int)0 < index1))))))){
				HX_STACK_LINE(101)
				break;
			}
			HX_STACK_LINE(101)
			int _g7;		HX_STACK_VAR(_g7,"_g7");
			HX_STACK_LINE(101)
			{
				HX_STACK_LINE(101)
				Dynamic accessor = u->codeUnitAt_dyn();		HX_STACK_VAR(accessor,"accessor");
				HX_STACK_LINE(101)
				int c1 = accessor((index1 - (int)1)).Cast< int >();		HX_STACK_VAR(c1,"c1");
				HX_STACK_LINE(101)
				if (((bool((c1 < (int)128)) || bool((c1 >= (int)192))))){
					HX_STACK_LINE(101)
					_g7 = (int)1;
				}
				else{
					HX_STACK_LINE(101)
					int _g1 = accessor((index1 - (int)2)).Cast< int >();		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(101)
					int _g2 = (int(_g1) & int((int)224));		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(101)
					if (((_g2 == (int)192))){
						HX_STACK_LINE(101)
						_g7 = (int)2;
					}
					else{
						HX_STACK_LINE(101)
						int _g3 = accessor((index1 - (int)3)).Cast< int >();		HX_STACK_VAR(_g3,"_g3");
						HX_STACK_LINE(101)
						int _g4 = (int(_g3) & int((int)240));		HX_STACK_VAR(_g4,"_g4");
						HX_STACK_LINE(101)
						if (((_g4 == (int)224))){
							HX_STACK_LINE(101)
							_g7 = (int)3;
						}
						else{
							HX_STACK_LINE(101)
							int _g5 = accessor((index1 - (int)4)).Cast< int >();		HX_STACK_VAR(_g5,"_g5");
							HX_STACK_LINE(101)
							int _g6 = (int(_g5) & int((int)248));		HX_STACK_VAR(_g6,"_g6");
							HX_STACK_LINE(101)
							if (((_g6 == (int)240))){
								HX_STACK_LINE(101)
								_g7 = (int)4;
							}
							else{
								HX_STACK_LINE(101)
								_g7 = (int)1;
							}
						}
					}
				}
			}
			HX_STACK_LINE(101)
			hx::SubEq(index1,_g7);
			HX_STACK_LINE(101)
			++(count);
		}
		HX_STACK_LINE(101)
		return index1;
	}
	HX_STACK_LINE(101)
	return (int)0;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(InternalEncoding_obj,backwardOffsetByCodePoints,return )

::String InternalEncoding_obj::fromCodePoint( int codePoint){
	HX_STACK_FRAME("luxe.utils.unifill.InternalEncoding","fromCodePoint",0xf753db6b,"luxe.utils.unifill.InternalEncoding.fromCodePoint","luxe/utils/unifill/InternalEncoding.hx",108,0x3061c49b)
	HX_STACK_ARG(codePoint,"codePoint")
	HX_STACK_LINE(108)
	::haxe::io::BytesBuffer buf = ::haxe::io::BytesBuffer_obj::__new();		HX_STACK_VAR(buf,"buf");
	HX_STACK_LINE(108)
	::luxe::utils::unifill::_Utf8::Utf8Impl_obj::encode_code_point(buf->addByte_dyn(),codePoint);
	HX_STACK_LINE(108)
	::String _g;		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(108)
	{
		HX_STACK_LINE(108)
		::haxe::io::Bytes b = buf->getBytes();		HX_STACK_VAR(b,"b");
		HX_STACK_LINE(108)
		{
			HX_STACK_LINE(108)
			::String s = b->toString();		HX_STACK_VAR(s,"s");
			HX_STACK_LINE(108)
			_g = s;
		}
	}
	HX_STACK_LINE(108)
	::String _this_str = _g;		HX_STACK_VAR(_this_str,"_this_str");
	HX_STACK_LINE(108)
	return _this_str;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(InternalEncoding_obj,fromCodePoint,return )

::String InternalEncoding_obj::fromCodePoints( Dynamic codePoints){
	HX_STACK_FRAME("luxe.utils.unifill.InternalEncoding","fromCodePoints",0x720c22a8,"luxe.utils.unifill.InternalEncoding.fromCodePoints","luxe/utils/unifill/InternalEncoding.hx",115,0x3061c49b)
	HX_STACK_ARG(codePoints,"codePoints")
	HX_STACK_LINE(115)
	::haxe::io::BytesBuffer buf = ::haxe::io::BytesBuffer_obj::__new();		HX_STACK_VAR(buf,"buf");
	HX_STACK_LINE(115)
	for(::cpp::FastIterator_obj< int > *__it = ::cpp::CreateFastIterator< int >(codePoints->__Field(HX_CSTRING("iterator"),true)());  __it->hasNext(); ){
		int c = __it->next();
		::luxe::utils::unifill::_Utf8::Utf8Impl_obj::encode_code_point(buf->addByte_dyn(),c);
	}
	HX_STACK_LINE(115)
	::String _g;		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(115)
	{
		HX_STACK_LINE(115)
		::haxe::io::Bytes b = buf->getBytes();		HX_STACK_VAR(b,"b");
		HX_STACK_LINE(115)
		{
			HX_STACK_LINE(115)
			::String s = b->toString();		HX_STACK_VAR(s,"s");
			HX_STACK_LINE(115)
			_g = s;
		}
	}
	HX_STACK_LINE(115)
	::String _this_str = _g;		HX_STACK_VAR(_this_str,"_this_str");
	HX_STACK_LINE(115)
	return _this_str;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(InternalEncoding_obj,fromCodePoints,return )

Void InternalEncoding_obj::validate( ::String s){
{
		HX_STACK_FRAME("luxe.utils.unifill.InternalEncoding","validate",0x190de384,"luxe.utils.unifill.InternalEncoding.validate","luxe/utils/unifill/InternalEncoding.hx",124,0x3061c49b)
		HX_STACK_ARG(s,"s")
		HX_STACK_LINE(125)
		::luxe::utils::unifill::Utf8 u = ::luxe::utils::unifill::Utf8_obj::__new(s);		HX_STACK_VAR(u,"u");
		HX_STACK_LINE(126)
		u->validate();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(InternalEncoding_obj,validate,(void))

bool InternalEncoding_obj::isValidString( ::String s){
	HX_STACK_FRAME("luxe.utils.unifill.InternalEncoding","isValidString",0x6c95d575,"luxe.utils.unifill.InternalEncoding.isValidString","luxe/utils/unifill/InternalEncoding.hx",133,0x3061c49b)
	HX_STACK_ARG(s,"s")
	HX_STACK_LINE(133)
	try
	{
	HX_STACK_CATCHABLE(::luxe::utils::unifill::Exception, 0);
	{
		HX_STACK_LINE(134)
		{
			HX_STACK_LINE(134)
			::luxe::utils::unifill::Utf8 u = ::luxe::utils::unifill::Utf8_obj::__new(s);		HX_STACK_VAR(u,"u");
			HX_STACK_LINE(134)
			u->validate();
		}
		HX_STACK_LINE(135)
		return true;
	}
	}
	catch(Dynamic __e){
		if (__e.IsClass< ::luxe::utils::unifill::Exception >() ){
			HX_STACK_BEGIN_CATCH
			::luxe::utils::unifill::Exception e = __e;{
				HX_STACK_LINE(137)
				switch( (int)(e->__Index())){
					case (int)1: {
						HX_STACK_LINE(137)
						int index = (::luxe::utils::unifill::Exception(e))->__Param(0);		HX_STACK_VAR(index,"index");
						HX_STACK_LINE(139)
						return false;
					}
					;break;
					default: {
						HX_STACK_LINE(141)
						HX_STACK_DO_THROW(e);
					}
				}
			}
		}
		else {
		    HX_STACK_DO_THROW(__e);
		}
	}
	HX_STACK_LINE(133)
	return false;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(InternalEncoding_obj,isValidString,return )


InternalEncoding_obj::InternalEncoding_obj()
{
}

Dynamic InternalEncoding_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"charAt") ) { return charAt_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"validate") ) { return validate_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"codeUnitAt") ) { return codeUnitAt_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"codePointAt") ) { return codePointAt_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"fromCodePoint") ) { return fromCodePoint_dyn(); }
		if (HX_FIELD_EQ(inName,"isValidString") ) { return isValidString_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"codePointCount") ) { return codePointCount_dyn(); }
		if (HX_FIELD_EQ(inName,"fromCodePoints") ) { return fromCodePoints_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"internalEncoding") ) { return get_internalEncoding(); }
		if (HX_FIELD_EQ(inName,"codePointWidthAt") ) { return codePointWidthAt_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"offsetByCodePoints") ) { return offsetByCodePoints_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"get_internalEncoding") ) { return get_internalEncoding_dyn(); }
		if (HX_FIELD_EQ(inName,"codePointWidthBefore") ) { return codePointWidthBefore_dyn(); }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"backwardOffsetByCodePoints") ) { return backwardOffsetByCodePoints_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic InternalEncoding_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void InternalEncoding_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("get_internalEncoding"),
	HX_CSTRING("codeUnitAt"),
	HX_CSTRING("codePointAt"),
	HX_CSTRING("charAt"),
	HX_CSTRING("codePointCount"),
	HX_CSTRING("codePointWidthAt"),
	HX_CSTRING("codePointWidthBefore"),
	HX_CSTRING("offsetByCodePoints"),
	HX_CSTRING("backwardOffsetByCodePoints"),
	HX_CSTRING("fromCodePoint"),
	HX_CSTRING("fromCodePoints"),
	HX_CSTRING("validate"),
	HX_CSTRING("isValidString"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(InternalEncoding_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(InternalEncoding_obj::__mClass,"__mClass");
};

#endif

Class InternalEncoding_obj::__mClass;

void InternalEncoding_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("luxe.utils.unifill.InternalEncoding"), hx::TCanCast< InternalEncoding_obj> ,sStaticFields,sMemberFields,
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

void InternalEncoding_obj::__boot()
{
}

} // end namespace luxe
} // end namespace utils
} // end namespace unifill
