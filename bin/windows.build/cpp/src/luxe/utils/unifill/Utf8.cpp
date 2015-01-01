#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_io_BytesBuffer
#include <haxe/io/BytesBuffer.h>
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

Void Utf8_obj::__construct(::String s)
{
HX_STACK_FRAME("luxe.utils.unifill.Utf8","new",0x60e100b3,"luxe.utils.unifill.Utf8.new","luxe/utils/unifill/Utf8.hx",138,0xbecfbbba)
HX_STACK_THIS(this)
HX_STACK_ARG(s,"s")
{
	HX_STACK_LINE(138)
	this->str = s;
}
;
	return null();
}

//Utf8_obj::~Utf8_obj() { }

Dynamic Utf8_obj::__CreateEmpty() { return  new Utf8_obj; }
hx::ObjectPtr< Utf8_obj > Utf8_obj::__new(::String s)
{  hx::ObjectPtr< Utf8_obj > result = new Utf8_obj();
	result->__construct(s);
	return result;}

Dynamic Utf8_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Utf8_obj > result = new Utf8_obj();
	result->__construct(inArgs[0]);
	return result;}

hx::Object *Utf8_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::luxe::utils::unifill::Utf_obj)) return operator ::luxe::utils::unifill::Utf_obj *();
	return super::__ToInterface(inType);
}

int Utf8_obj::codeUnitAt( int index){
	HX_STACK_FRAME("luxe.utils.unifill.Utf8","codeUnitAt",0xa72241b1,"luxe.utils.unifill.Utf8.codeUnitAt","luxe/utils/unifill/Utf8.hx",42,0xbecfbbba)
	HX_STACK_THIS(this)
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(42)
	return this->str.cca(index);
}


HX_DEFINE_DYNAMIC_FUNC1(Utf8_obj,codeUnitAt,return )

int Utf8_obj::codePointAt( int index){
	HX_STACK_FRAME("luxe.utils.unifill.Utf8","codePointAt",0x29768309,"luxe.utils.unifill.Utf8.codePointAt","luxe/utils/unifill/Utf8.hx",50,0xbecfbbba)
	HX_STACK_THIS(this)
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(50)
	return ::luxe::utils::unifill::_Utf8::Utf8Impl_obj::decode_code_point(this->str.length,this->codeUnitAt_dyn(),index);
}


HX_DEFINE_DYNAMIC_FUNC1(Utf8_obj,codePointAt,return )

::luxe::utils::unifill::Utf8 Utf8_obj::charAt( int index){
	HX_STACK_FRAME("luxe.utils.unifill.Utf8","charAt",0x5e22fef6,"luxe.utils.unifill.Utf8.charAt","luxe/utils/unifill/Utf8.hx",57,0xbecfbbba)
	HX_STACK_THIS(this)
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(58)
	::String _g;		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(58)
	{
		HX_STACK_LINE(58)
		Dynamic len;		HX_STACK_VAR(len,"len");
		HX_STACK_LINE(58)
		{
			HX_STACK_LINE(58)
			int c = this->str.cca(index);		HX_STACK_VAR(c,"c");
			HX_STACK_LINE(58)
			if (((c < (int)192))){
				HX_STACK_LINE(58)
				len = (int)1;
			}
			else{
				HX_STACK_LINE(58)
				if (((c < (int)224))){
					HX_STACK_LINE(58)
					len = (int)2;
				}
				else{
					HX_STACK_LINE(58)
					if (((c < (int)240))){
						HX_STACK_LINE(58)
						len = (int)3;
					}
					else{
						HX_STACK_LINE(58)
						if (((c < (int)248))){
							HX_STACK_LINE(58)
							len = (int)4;
						}
						else{
							HX_STACK_LINE(58)
							len = (int)1;
						}
					}
				}
			}
		}
		HX_STACK_LINE(58)
		{
			HX_STACK_LINE(58)
			::String s = this->str.substr(index,len);		HX_STACK_VAR(s,"s");
			HX_STACK_LINE(58)
			_g = s;
		}
	}
	HX_STACK_LINE(58)
	return ::luxe::utils::unifill::Utf8_obj::__new(_g);
}


HX_DEFINE_DYNAMIC_FUNC1(Utf8_obj,charAt,return )

int Utf8_obj::codePointCount( int beginIndex,int endIndex){
	HX_STACK_FRAME("luxe.utils.unifill.Utf8","codePointCount",0x65088879,"luxe.utils.unifill.Utf8.codePointCount","luxe/utils/unifill/Utf8.hx",65,0xbecfbbba)
	HX_STACK_THIS(this)
	HX_STACK_ARG(beginIndex,"beginIndex")
	HX_STACK_ARG(endIndex,"endIndex")
	HX_STACK_LINE(66)
	int index = beginIndex;		HX_STACK_VAR(index,"index");
	HX_STACK_LINE(67)
	int i = (int)0;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(68)
	while((true)){
		HX_STACK_LINE(68)
		if ((!(((index < endIndex))))){
			HX_STACK_LINE(68)
			break;
		}
		HX_STACK_LINE(69)
		int _g;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(69)
		{
			HX_STACK_LINE(69)
			int c = this->str.cca(index);		HX_STACK_VAR(c,"c");
			HX_STACK_LINE(69)
			if (((c < (int)192))){
				HX_STACK_LINE(69)
				_g = (int)1;
			}
			else{
				HX_STACK_LINE(69)
				if (((c < (int)224))){
					HX_STACK_LINE(69)
					_g = (int)2;
				}
				else{
					HX_STACK_LINE(69)
					if (((c < (int)240))){
						HX_STACK_LINE(69)
						_g = (int)3;
					}
					else{
						HX_STACK_LINE(69)
						if (((c < (int)248))){
							HX_STACK_LINE(69)
							_g = (int)4;
						}
						else{
							HX_STACK_LINE(69)
							_g = (int)1;
						}
					}
				}
			}
		}
		HX_STACK_LINE(69)
		hx::AddEq(index,_g);
		HX_STACK_LINE(70)
		++(i);
	}
	HX_STACK_LINE(72)
	return i;
}


HX_DEFINE_DYNAMIC_FUNC2(Utf8_obj,codePointCount,return )

int Utf8_obj::codePointWidthAt( int index){
	HX_STACK_FRAME("luxe.utils.unifill.Utf8","codePointWidthAt",0x323dfec3,"luxe.utils.unifill.Utf8.codePointWidthAt","luxe/utils/unifill/Utf8.hx",79,0xbecfbbba)
	HX_STACK_THIS(this)
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(80)
	int c = this->str.cca(index);		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(81)
	if (((c < (int)192))){
		HX_STACK_LINE(81)
		return (int)1;
	}
	else{
		HX_STACK_LINE(81)
		if (((c < (int)224))){
			HX_STACK_LINE(81)
			return (int)2;
		}
		else{
			HX_STACK_LINE(81)
			if (((c < (int)240))){
				HX_STACK_LINE(81)
				return (int)3;
			}
			else{
				HX_STACK_LINE(81)
				if (((c < (int)248))){
					HX_STACK_LINE(81)
					return (int)4;
				}
				else{
					HX_STACK_LINE(81)
					return (int)1;
				}
			}
		}
	}
	HX_STACK_LINE(81)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC1(Utf8_obj,codePointWidthAt,return )

int Utf8_obj::codePointWidthBefore( int index){
	HX_STACK_FRAME("luxe.utils.unifill.Utf8","codePointWidthBefore",0xaa51264f,"luxe.utils.unifill.Utf8.codePointWidthBefore","luxe/utils/unifill/Utf8.hx",89,0xbecfbbba)
	HX_STACK_THIS(this)
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(89)
	Dynamic accessor = this->codeUnitAt_dyn();		HX_STACK_VAR(accessor,"accessor");
	HX_STACK_LINE(89)
	int c1 = accessor((index - (int)1)).Cast< int >();		HX_STACK_VAR(c1,"c1");
	HX_STACK_LINE(89)
	if (((bool((c1 < (int)128)) || bool((c1 >= (int)192))))){
		HX_STACK_LINE(89)
		return (int)1;
	}
	else{
		HX_STACK_LINE(89)
		int _g = accessor((index - (int)2)).Cast< int >();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(89)
		int _g1 = (int(_g) & int((int)224));		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(89)
		if (((_g1 == (int)192))){
			HX_STACK_LINE(89)
			return (int)2;
		}
		else{
			HX_STACK_LINE(89)
			int _g2 = accessor((index - (int)3)).Cast< int >();		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(89)
			int _g3 = (int(_g2) & int((int)240));		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(89)
			if (((_g3 == (int)224))){
				HX_STACK_LINE(89)
				return (int)3;
			}
			else{
				HX_STACK_LINE(89)
				int _g4 = accessor((index - (int)4)).Cast< int >();		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(89)
				int _g5 = (int(_g4) & int((int)248));		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(89)
				if (((_g5 == (int)240))){
					HX_STACK_LINE(89)
					return (int)4;
				}
				else{
					HX_STACK_LINE(89)
					return (int)1;
				}
			}
		}
	}
	HX_STACK_LINE(89)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC1(Utf8_obj,codePointWidthBefore,return )

int Utf8_obj::offsetByCodePoints( int index,int codePointOffset){
	HX_STACK_FRAME("luxe.utils.unifill.Utf8","offsetByCodePoints",0x4ec81d27,"luxe.utils.unifill.Utf8.offsetByCodePoints","luxe/utils/unifill/Utf8.hx",97,0xbecfbbba)
	HX_STACK_THIS(this)
	HX_STACK_ARG(index,"index")
	HX_STACK_ARG(codePointOffset,"codePointOffset")
	HX_STACK_LINE(97)
	if (((codePointOffset >= (int)0))){
		HX_STACK_LINE(98)
		int index1 = index;		HX_STACK_VAR(index1,"index1");
		HX_STACK_LINE(98)
		int len = this->str.length;		HX_STACK_VAR(len,"len");
		HX_STACK_LINE(98)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(98)
		while((true)){
			HX_STACK_LINE(98)
			if ((!(((bool((i < codePointOffset)) && bool((index1 < len))))))){
				HX_STACK_LINE(98)
				break;
			}
			HX_STACK_LINE(98)
			int _g;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(98)
			{
				HX_STACK_LINE(98)
				int c = this->str.cca(index1);		HX_STACK_VAR(c,"c");
				HX_STACK_LINE(98)
				if (((c < (int)192))){
					HX_STACK_LINE(98)
					_g = (int)1;
				}
				else{
					HX_STACK_LINE(98)
					if (((c < (int)224))){
						HX_STACK_LINE(98)
						_g = (int)2;
					}
					else{
						HX_STACK_LINE(98)
						if (((c < (int)240))){
							HX_STACK_LINE(98)
							_g = (int)3;
						}
						else{
							HX_STACK_LINE(98)
							if (((c < (int)248))){
								HX_STACK_LINE(98)
								_g = (int)4;
							}
							else{
								HX_STACK_LINE(98)
								_g = (int)1;
							}
						}
					}
				}
			}
			HX_STACK_LINE(98)
			hx::AddEq(index1,_g);
			HX_STACK_LINE(98)
			++(i);
		}
		HX_STACK_LINE(98)
		return index1;
	}
	else{
		HX_STACK_LINE(100)
		int index1 = index;		HX_STACK_VAR(index1,"index1");
		HX_STACK_LINE(100)
		int count = (int)0;		HX_STACK_VAR(count,"count");
		HX_STACK_LINE(100)
		while((true)){
			HX_STACK_LINE(100)
			if ((!(((bool((count < -(codePointOffset))) && bool(((int)0 < index1))))))){
				HX_STACK_LINE(100)
				break;
			}
			HX_STACK_LINE(100)
			int _g7;		HX_STACK_VAR(_g7,"_g7");
			HX_STACK_LINE(100)
			{
				HX_STACK_LINE(100)
				Dynamic accessor = this->codeUnitAt_dyn();		HX_STACK_VAR(accessor,"accessor");
				HX_STACK_LINE(100)
				int c1 = accessor((index1 - (int)1)).Cast< int >();		HX_STACK_VAR(c1,"c1");
				HX_STACK_LINE(100)
				if (((bool((c1 < (int)128)) || bool((c1 >= (int)192))))){
					HX_STACK_LINE(100)
					_g7 = (int)1;
				}
				else{
					HX_STACK_LINE(100)
					int _g1 = accessor((index1 - (int)2)).Cast< int >();		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(100)
					int _g2 = (int(_g1) & int((int)224));		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(100)
					if (((_g2 == (int)192))){
						HX_STACK_LINE(100)
						_g7 = (int)2;
					}
					else{
						HX_STACK_LINE(100)
						int _g3 = accessor((index1 - (int)3)).Cast< int >();		HX_STACK_VAR(_g3,"_g3");
						HX_STACK_LINE(100)
						int _g4 = (int(_g3) & int((int)240));		HX_STACK_VAR(_g4,"_g4");
						HX_STACK_LINE(100)
						if (((_g4 == (int)224))){
							HX_STACK_LINE(100)
							_g7 = (int)3;
						}
						else{
							HX_STACK_LINE(100)
							int _g5 = accessor((index1 - (int)4)).Cast< int >();		HX_STACK_VAR(_g5,"_g5");
							HX_STACK_LINE(100)
							int _g6 = (int(_g5) & int((int)248));		HX_STACK_VAR(_g6,"_g6");
							HX_STACK_LINE(100)
							if (((_g6 == (int)240))){
								HX_STACK_LINE(100)
								_g7 = (int)4;
							}
							else{
								HX_STACK_LINE(100)
								_g7 = (int)1;
							}
						}
					}
				}
			}
			HX_STACK_LINE(100)
			hx::SubEq(index1,_g7);
			HX_STACK_LINE(100)
			++(count);
		}
		HX_STACK_LINE(100)
		return index1;
	}
	HX_STACK_LINE(97)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC2(Utf8_obj,offsetByCodePoints,return )

::luxe::utils::unifill::Utf8 Utf8_obj::substr( int index,Dynamic len){
	HX_STACK_FRAME("luxe.utils.unifill.Utf8","substr",0x40b874be,"luxe.utils.unifill.Utf8.substr","luxe/utils/unifill/Utf8.hx",107,0xbecfbbba)
	HX_STACK_THIS(this)
	HX_STACK_ARG(index,"index")
	HX_STACK_ARG(len,"len")
	HX_STACK_LINE(108)
	::String _g;		HX_STACK_VAR(_g,"_g");
	struct _Function_1_1{
		inline static ::String Block( hx::ObjectPtr< ::luxe::utils::unifill::Utf8_obj > __this,Dynamic &len,int &index){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/utils/unifill/Utf8.hx",108,0xbecfbbba)
			{
				HX_STACK_LINE(108)
				::String s = __this->str.substr(index,len);		HX_STACK_VAR(s,"s");
				HX_STACK_LINE(108)
				return s;
			}
			return null();
		}
	};
	HX_STACK_LINE(108)
	_g = _Function_1_1::Block(this,len,index);
	HX_STACK_LINE(108)
	return ::luxe::utils::unifill::Utf8_obj::__new(_g);
}


HX_DEFINE_DYNAMIC_FUNC2(Utf8_obj,substr,return )

Void Utf8_obj::validate( ){
{
		HX_STACK_FRAME("luxe.utils.unifill.Utf8","validate",0xd6279363,"luxe.utils.unifill.Utf8.validate","luxe/utils/unifill/Utf8.hx",117,0xbecfbbba)
		HX_STACK_THIS(this)
		HX_STACK_LINE(118)
		int len = this->str.length;		HX_STACK_VAR(len,"len");
		HX_STACK_LINE(119)
		Dynamic accessor = this->codeUnitAt_dyn();		HX_STACK_VAR(accessor,"accessor");
		HX_STACK_LINE(120)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(121)
		while((true)){
			HX_STACK_LINE(121)
			if ((!(((i < len))))){
				HX_STACK_LINE(121)
				break;
			}
			HX_STACK_LINE(122)
			::luxe::utils::unifill::_Utf8::Utf8Impl_obj::decode_code_point(len,accessor,i);
			HX_STACK_LINE(123)
			int _g;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(123)
			{
				HX_STACK_LINE(123)
				int c = this->str.cca(i);		HX_STACK_VAR(c,"c");
				HX_STACK_LINE(123)
				if (((c < (int)192))){
					HX_STACK_LINE(123)
					_g = (int)1;
				}
				else{
					HX_STACK_LINE(123)
					if (((c < (int)224))){
						HX_STACK_LINE(123)
						_g = (int)2;
					}
					else{
						HX_STACK_LINE(123)
						if (((c < (int)240))){
							HX_STACK_LINE(123)
							_g = (int)3;
						}
						else{
							HX_STACK_LINE(123)
							if (((c < (int)248))){
								HX_STACK_LINE(123)
								_g = (int)4;
							}
							else{
								HX_STACK_LINE(123)
								_g = (int)1;
							}
						}
					}
				}
			}
			HX_STACK_LINE(123)
			hx::AddEq(i,_g);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Utf8_obj,validate,(void))

::String Utf8_obj::toString( ){
	HX_STACK_FRAME("luxe.utils.unifill.Utf8","toString",0x09b29379,"luxe.utils.unifill.Utf8.toString","luxe/utils/unifill/Utf8.hx",128,0xbecfbbba)
	HX_STACK_THIS(this)
	HX_STACK_LINE(128)
	return this->str;
}


HX_DEFINE_DYNAMIC_FUNC0(Utf8_obj,toString,return )

::haxe::io::Bytes Utf8_obj::toBytes( ){
	HX_STACK_FRAME("luxe.utils.unifill.Utf8","toBytes",0xbb43aac3,"luxe.utils.unifill.Utf8.toBytes","luxe/utils/unifill/Utf8.hx",132,0xbecfbbba)
	HX_STACK_THIS(this)
	HX_STACK_LINE(132)
	return ::haxe::io::Bytes_obj::ofString(this->str);
}


HX_DEFINE_DYNAMIC_FUNC0(Utf8_obj,toBytes,return )

int Utf8_obj::get_length( ){
	HX_STACK_FRAME("luxe.utils.unifill.Utf8","get_length",0x0b62d4bc,"luxe.utils.unifill.Utf8.get_length","luxe/utils/unifill/Utf8.hx",142,0xbecfbbba)
	HX_STACK_THIS(this)
	HX_STACK_LINE(142)
	return this->str.length;
}


HX_DEFINE_DYNAMIC_FUNC0(Utf8_obj,get_length,return )

int Utf8_obj::forward_offset_by_code_points( int index,int codePointOffset){
	HX_STACK_FRAME("luxe.utils.unifill.Utf8","forward_offset_by_code_points",0x0537fdd2,"luxe.utils.unifill.Utf8.forward_offset_by_code_points","luxe/utils/unifill/Utf8.hx",145,0xbecfbbba)
	HX_STACK_THIS(this)
	HX_STACK_ARG(index,"index")
	HX_STACK_ARG(codePointOffset,"codePointOffset")
	HX_STACK_LINE(146)
	int len = this->str.length;		HX_STACK_VAR(len,"len");
	HX_STACK_LINE(147)
	int i = (int)0;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(148)
	while((true)){
		HX_STACK_LINE(148)
		if ((!(((bool((i < codePointOffset)) && bool((index < len))))))){
			HX_STACK_LINE(148)
			break;
		}
		HX_STACK_LINE(149)
		int _g;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(149)
		{
			HX_STACK_LINE(149)
			int c = this->str.cca(index);		HX_STACK_VAR(c,"c");
			HX_STACK_LINE(149)
			if (((c < (int)192))){
				HX_STACK_LINE(149)
				_g = (int)1;
			}
			else{
				HX_STACK_LINE(149)
				if (((c < (int)224))){
					HX_STACK_LINE(149)
					_g = (int)2;
				}
				else{
					HX_STACK_LINE(149)
					if (((c < (int)240))){
						HX_STACK_LINE(149)
						_g = (int)3;
					}
					else{
						HX_STACK_LINE(149)
						if (((c < (int)248))){
							HX_STACK_LINE(149)
							_g = (int)4;
						}
						else{
							HX_STACK_LINE(149)
							_g = (int)1;
						}
					}
				}
			}
		}
		HX_STACK_LINE(149)
		hx::AddEq(index,_g);
		HX_STACK_LINE(150)
		++(i);
	}
	HX_STACK_LINE(152)
	return index;
}


HX_DEFINE_DYNAMIC_FUNC2(Utf8_obj,forward_offset_by_code_points,return )

int Utf8_obj::backward_offset_by_code_points( int index,int codePointOffset){
	HX_STACK_FRAME("luxe.utils.unifill.Utf8","backward_offset_by_code_points",0x39aa76ea,"luxe.utils.unifill.Utf8.backward_offset_by_code_points","luxe/utils/unifill/Utf8.hx",155,0xbecfbbba)
	HX_STACK_THIS(this)
	HX_STACK_ARG(index,"index")
	HX_STACK_ARG(codePointOffset,"codePointOffset")
	HX_STACK_LINE(156)
	int count = (int)0;		HX_STACK_VAR(count,"count");
	HX_STACK_LINE(157)
	while((true)){
		HX_STACK_LINE(157)
		if ((!(((bool((count < codePointOffset)) && bool(((int)0 < index))))))){
			HX_STACK_LINE(157)
			break;
		}
		HX_STACK_LINE(158)
		int _g6;		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(158)
		{
			HX_STACK_LINE(158)
			Dynamic accessor = this->codeUnitAt_dyn();		HX_STACK_VAR(accessor,"accessor");
			HX_STACK_LINE(158)
			int c1 = accessor((index - (int)1)).Cast< int >();		HX_STACK_VAR(c1,"c1");
			HX_STACK_LINE(158)
			if (((bool((c1 < (int)128)) || bool((c1 >= (int)192))))){
				HX_STACK_LINE(158)
				_g6 = (int)1;
			}
			else{
				HX_STACK_LINE(158)
				int _g = accessor((index - (int)2)).Cast< int >();		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(158)
				int _g1 = (int(_g) & int((int)224));		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(158)
				if (((_g1 == (int)192))){
					HX_STACK_LINE(158)
					_g6 = (int)2;
				}
				else{
					HX_STACK_LINE(158)
					int _g2 = accessor((index - (int)3)).Cast< int >();		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(158)
					int _g3 = (int(_g2) & int((int)240));		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(158)
					if (((_g3 == (int)224))){
						HX_STACK_LINE(158)
						_g6 = (int)3;
					}
					else{
						HX_STACK_LINE(158)
						int _g4 = accessor((index - (int)4)).Cast< int >();		HX_STACK_VAR(_g4,"_g4");
						HX_STACK_LINE(158)
						int _g5 = (int(_g4) & int((int)248));		HX_STACK_VAR(_g5,"_g5");
						HX_STACK_LINE(158)
						if (((_g5 == (int)240))){
							HX_STACK_LINE(158)
							_g6 = (int)4;
						}
						else{
							HX_STACK_LINE(158)
							_g6 = (int)1;
						}
					}
				}
			}
		}
		HX_STACK_LINE(158)
		hx::SubEq(index,_g6);
		HX_STACK_LINE(159)
		++(count);
	}
	HX_STACK_LINE(161)
	return index;
}


HX_DEFINE_DYNAMIC_FUNC2(Utf8_obj,backward_offset_by_code_points,return )

::luxe::utils::unifill::Utf8 Utf8_obj::fromCodePoint( int codePoint){
	HX_STACK_FRAME("luxe.utils.unifill.Utf8","fromCodePoint",0xbd55432c,"luxe.utils.unifill.Utf8.fromCodePoint","luxe/utils/unifill/Utf8.hx",11,0xbecfbbba)
	HX_STACK_ARG(codePoint,"codePoint")
	HX_STACK_LINE(12)
	::haxe::io::BytesBuffer buf = ::haxe::io::BytesBuffer_obj::__new();		HX_STACK_VAR(buf,"buf");
	HX_STACK_LINE(13)
	::luxe::utils::unifill::_Utf8::Utf8Impl_obj::encode_code_point(buf->addByte_dyn(),codePoint);
	HX_STACK_LINE(14)
	::String _g;		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(14)
	{
		HX_STACK_LINE(14)
		::haxe::io::Bytes b = buf->getBytes();		HX_STACK_VAR(b,"b");
		HX_STACK_LINE(14)
		{
			HX_STACK_LINE(14)
			::String s = b->toString();		HX_STACK_VAR(s,"s");
			HX_STACK_LINE(14)
			_g = s;
		}
	}
	HX_STACK_LINE(14)
	return ::luxe::utils::unifill::Utf8_obj::__new(_g);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Utf8_obj,fromCodePoint,return )

::luxe::utils::unifill::Utf8 Utf8_obj::fromCodePoints( Dynamic codePoints){
	HX_STACK_FRAME("luxe.utils.unifill.Utf8","fromCodePoints",0xed4583c7,"luxe.utils.unifill.Utf8.fromCodePoints","luxe/utils/unifill/Utf8.hx",20,0xbecfbbba)
	HX_STACK_ARG(codePoints,"codePoints")
	HX_STACK_LINE(21)
	::haxe::io::BytesBuffer buf = ::haxe::io::BytesBuffer_obj::__new();		HX_STACK_VAR(buf,"buf");
	HX_STACK_LINE(22)
	for(::cpp::FastIterator_obj< int > *__it = ::cpp::CreateFastIterator< int >(codePoints->__Field(HX_CSTRING("iterator"),true)());  __it->hasNext(); ){
		int c = __it->next();
		::luxe::utils::unifill::_Utf8::Utf8Impl_obj::encode_code_point(buf->addByte_dyn(),c);
	}
	HX_STACK_LINE(25)
	::String _g;		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(25)
	{
		HX_STACK_LINE(25)
		::haxe::io::Bytes b = buf->getBytes();		HX_STACK_VAR(b,"b");
		HX_STACK_LINE(25)
		{
			HX_STACK_LINE(25)
			::String s = b->toString();		HX_STACK_VAR(s,"s");
			HX_STACK_LINE(25)
			_g = s;
		}
	}
	HX_STACK_LINE(25)
	return ::luxe::utils::unifill::Utf8_obj::__new(_g);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Utf8_obj,fromCodePoints,return )

::luxe::utils::unifill::Utf8 Utf8_obj::fromString( ::String s){
	HX_STACK_FRAME("luxe.utils.unifill.Utf8","fromString",0xd047fde8,"luxe.utils.unifill.Utf8.fromString","luxe/utils/unifill/Utf8.hx",29,0xbecfbbba)
	HX_STACK_ARG(s,"s")
	HX_STACK_LINE(29)
	return ::luxe::utils::unifill::Utf8_obj::__new(s);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Utf8_obj,fromString,return )

::luxe::utils::unifill::Utf8 Utf8_obj::fromBytes( ::haxe::io::Bytes b){
	HX_STACK_FRAME("luxe.utils.unifill.Utf8","fromBytes",0xbc27a334,"luxe.utils.unifill.Utf8.fromBytes","luxe/utils/unifill/Utf8.hx",32,0xbecfbbba)
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(33)
	::String _g;		HX_STACK_VAR(_g,"_g");
	struct _Function_1_1{
		inline static ::String Block( ::haxe::io::Bytes &b){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/utils/unifill/Utf8.hx",33,0xbecfbbba)
			{
				HX_STACK_LINE(33)
				::String s = b->toString();		HX_STACK_VAR(s,"s");
				HX_STACK_LINE(33)
				return s;
			}
			return null();
		}
	};
	HX_STACK_LINE(33)
	_g = _Function_1_1::Block(b);
	HX_STACK_LINE(33)
	return ::luxe::utils::unifill::Utf8_obj::__new(_g);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Utf8_obj,fromBytes,return )


Utf8_obj::Utf8_obj()
{
}

void Utf8_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Utf8);
	HX_MARK_MEMBER_NAME(str,"str");
	HX_MARK_END_CLASS();
}

void Utf8_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(str,"str");
}

Dynamic Utf8_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"str") ) { return str; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { return get_length(); }
		if (HX_FIELD_EQ(inName,"charAt") ) { return charAt_dyn(); }
		if (HX_FIELD_EQ(inName,"substr") ) { return substr_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"toBytes") ) { return toBytes_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"validate") ) { return validate_dyn(); }
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"fromBytes") ) { return fromBytes_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"fromString") ) { return fromString_dyn(); }
		if (HX_FIELD_EQ(inName,"codeUnitAt") ) { return codeUnitAt_dyn(); }
		if (HX_FIELD_EQ(inName,"get_length") ) { return get_length_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"codePointAt") ) { return codePointAt_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"fromCodePoint") ) { return fromCodePoint_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"fromCodePoints") ) { return fromCodePoints_dyn(); }
		if (HX_FIELD_EQ(inName,"codePointCount") ) { return codePointCount_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"codePointWidthAt") ) { return codePointWidthAt_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"offsetByCodePoints") ) { return offsetByCodePoints_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"codePointWidthBefore") ) { return codePointWidthBefore_dyn(); }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"forward_offset_by_code_points") ) { return forward_offset_by_code_points_dyn(); }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"backward_offset_by_code_points") ) { return backward_offset_by_code_points_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Utf8_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"str") ) { str=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Utf8_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("length"));
	outFields->push(HX_CSTRING("str"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("fromCodePoint"),
	HX_CSTRING("fromCodePoints"),
	HX_CSTRING("fromString"),
	HX_CSTRING("fromBytes"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(Utf8_obj,str),HX_CSTRING("str")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("codeUnitAt"),
	HX_CSTRING("codePointAt"),
	HX_CSTRING("charAt"),
	HX_CSTRING("codePointCount"),
	HX_CSTRING("codePointWidthAt"),
	HX_CSTRING("codePointWidthBefore"),
	HX_CSTRING("offsetByCodePoints"),
	HX_CSTRING("substr"),
	HX_CSTRING("validate"),
	HX_CSTRING("toString"),
	HX_CSTRING("toBytes"),
	HX_CSTRING("str"),
	HX_CSTRING("get_length"),
	HX_CSTRING("forward_offset_by_code_points"),
	HX_CSTRING("backward_offset_by_code_points"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Utf8_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Utf8_obj::__mClass,"__mClass");
};

#endif

Class Utf8_obj::__mClass;

void Utf8_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("luxe.utils.unifill.Utf8"), hx::TCanCast< Utf8_obj> ,sStaticFields,sMemberFields,
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

void Utf8_obj::__boot()
{
}

} // end namespace luxe
} // end namespace utils
} // end namespace unifill
