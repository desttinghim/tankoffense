#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_zip_Compress
#include <haxe/zip/Compress.h>
#endif
#ifndef INCLUDED_haxe_zip_Uncompress
#include <haxe/zip/Uncompress.h>
#endif
#ifndef INCLUDED_snow_platform_native_utils_ByteArray
#include <snow/platform/native/utils/ByteArray.h>
#endif
#ifndef INCLUDED_snow_platform_native_utils_Compression
#include <snow/platform/native/utils/Compression.h>
#endif
#ifndef INCLUDED_snow_utils_IDataInput
#include <snow/utils/IDataInput.h>
#endif
#ifndef INCLUDED_snow_utils_IMemoryRange
#include <snow/utils/IMemoryRange.h>
#endif
#ifndef INCLUDED_snow_utils_Libs
#include <snow/utils/Libs.h>
#endif
namespace snow{
namespace platform{
namespace native{
namespace utils{

Void ByteArray_obj::__construct(hx::Null< int >  __o_inSize)
{
HX_STACK_FRAME("snow.platform.native.utils.ByteArray","new",0x7c390fdf,"snow.platform.native.utils.ByteArray.new","snow/platform/native/utils/ByteArray.hx",37,0xdcd92e53)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_inSize,"inSize")
int inSize = __o_inSize.Default(0);
{
	HX_STACK_LINE(39)
	this->bigEndian = true;
	HX_STACK_LINE(40)
	this->position = (int)0;
	HX_STACK_LINE(42)
	if (((inSize >= (int)0))){
		HX_STACK_LINE(53)
		Array< unsigned char > data = Array_obj< unsigned char >::__new();		HX_STACK_VAR(data,"data");
		HX_STACK_LINE(54)
		if (((inSize > (int)0))){
			HX_STACK_LINE(55)
			data[(inSize - (int)1)] = (int)0;
		}
		HX_STACK_LINE(58)
		super::__construct(inSize,data);
	}
}
;
	return null();
}

//ByteArray_obj::~ByteArray_obj() { }

Dynamic ByteArray_obj::__CreateEmpty() { return  new ByteArray_obj; }
hx::ObjectPtr< ByteArray_obj > ByteArray_obj::__new(hx::Null< int >  __o_inSize)
{  hx::ObjectPtr< ByteArray_obj > result = new ByteArray_obj();
	result->__construct(__o_inSize);
	return result;}

Dynamic ByteArray_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ByteArray_obj > result = new ByteArray_obj();
	result->__construct(inArgs[0]);
	return result;}

hx::Object *ByteArray_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::snow::utils::IDataInput_obj)) return operator ::snow::utils::IDataInput_obj *();
	if (inType==typeid( ::snow::utils::IMemoryRange_obj)) return operator ::snow::utils::IMemoryRange_obj *();
	return super::__ToInterface(inType);
}

void ByteArray_obj::__init__() {
HX_STACK_FRAME("snow.platform.native.utils.ByteArray","__init__",0xc8851171,"snow.platform.native.utils.ByteArray.__init__","snow/platform/native/utils/ByteArray.hx",640,0xdcd92e53)
{

	HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_1)
	::snow::platform::native::utils::ByteArray run(int inLen){
		HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","snow/platform/native/utils/ByteArray.hx",643,0xdcd92e53)
		HX_STACK_ARG(inLen,"inLen")
		{
			HX_STACK_LINE(643)
			return ::snow::platform::native::utils::ByteArray_obj::__new(inLen);
		}
		return null();
	}
	HX_END_LOCAL_FUNC1(return)

	HX_STACK_LINE(642)
	Dynamic factory =  Dynamic(new _Function_1_1());		HX_STACK_VAR(factory,"factory");

	HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_2)
	Void run(::snow::platform::native::utils::ByteArray inArray,int inLen){
		HX_STACK_FRAME("*","_Function_1_2",0x5200ed38,"*._Function_1_2","snow/platform/native/utils/ByteArray.hx",646,0xdcd92e53)
		HX_STACK_ARG(inArray,"inArray")
		HX_STACK_ARG(inLen,"inLen")
		{
			HX_STACK_LINE(648)
			if (((inLen > (int)0))){
				HX_STACK_LINE(649)
				int len = ((inLen - (int)1) + (int)1);		HX_STACK_VAR(len,"len");
				HX_STACK_LINE(649)
				if (((inArray->__Field(HX_CSTRING("b"),true)->__Field(HX_CSTRING("length"),true) < len))){
					HX_STACK_LINE(649)
					inArray->__Field(HX_CSTRING("b"),true)->__Field(HX_CSTRING("__SetSize"),true)(len);
				}
				HX_STACK_LINE(649)
				if (((inArray->__Field(HX_CSTRING("length"),true) < len))){
					HX_STACK_LINE(649)
					inArray->__FieldRef(HX_CSTRING("length")) = len;
				}
			}
			HX_STACK_LINE(652)
			inArray->__FieldRef(HX_CSTRING("length")) = inLen;
		}
		return null();
	}
	HX_END_LOCAL_FUNC2((void))

	HX_STACK_LINE(646)
	Dynamic resize =  Dynamic(new _Function_1_2());		HX_STACK_VAR(resize,"resize");

	HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_3)
	Array< unsigned char > run(::snow::platform::native::utils::ByteArray inArray){
		HX_STACK_FRAME("*","_Function_1_3",0x5200ed39,"*._Function_1_3","snow/platform/native/utils/ByteArray.hx",657,0xdcd92e53)
		HX_STACK_ARG(inArray,"inArray")
		{
			HX_STACK_LINE(657)
			if (((inArray == null()))){
				HX_STACK_LINE(657)
				return null();
			}
			else{
				HX_STACK_LINE(657)
				return inArray->__Field(HX_CSTRING("b"),true);
			}
			HX_STACK_LINE(657)
			return null();
		}
		return null();
	}
	HX_END_LOCAL_FUNC1(return)

	HX_STACK_LINE(656)
	Dynamic bytes =  Dynamic(new _Function_1_3());		HX_STACK_VAR(bytes,"bytes");

	HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_4)
	int run(::snow::platform::native::utils::ByteArray inArray){
		HX_STACK_FRAME("*","_Function_1_4",0x5200ed3a,"*._Function_1_4","snow/platform/native/utils/ByteArray.hx",661,0xdcd92e53)
		HX_STACK_ARG(inArray,"inArray")
		{
			HX_STACK_LINE(661)
			if (((inArray == null()))){
				HX_STACK_LINE(661)
				return (int)0;
			}
			else{
				HX_STACK_LINE(661)
				return inArray->__Field(HX_CSTRING("length"),true);
			}
			HX_STACK_LINE(661)
			return (int)0;
		}
		return null();
	}
	HX_END_LOCAL_FUNC1(return)

	HX_STACK_LINE(660)
	Dynamic slen =  Dynamic(new _Function_1_4());		HX_STACK_VAR(slen,"slen");
	HX_STACK_LINE(664)
	Dynamic init = ::snow::utils::Libs_obj::load(HX_CSTRING("snow"),HX_CSTRING("snow_byte_array_init"),(int)4);		HX_STACK_VAR(init,"init");
	HX_STACK_LINE(666)
	if (((init == null()))){
		HX_STACK_LINE(667)
		HX_STACK_DO_THROW(HX_CSTRING("ByteArray cannot initialize because the function cannot be loaded from snow."));
	}
	HX_STACK_LINE(670)
	init(factory,slen,resize,bytes);
}
}

int ByteArray_obj::__get( int pos){
	HX_STACK_FRAME("snow.platform.native.utils.ByteArray","__get",0x217e3eb5,"snow.platform.native.utils.ByteArray.__get","snow/platform/native/utils/ByteArray.hx",72,0xdcd92e53)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pos,"pos")
	HX_STACK_LINE(72)
	return this->b->__get(pos);
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArray_obj,__get,return )

Void ByteArray_obj::__set( int pos,int v){
{
		HX_STACK_FRAME("snow.platform.native.utils.ByteArray","__set",0x218759c1,"snow.platform.native.utils.ByteArray.__set","snow/platform/native/utils/ByteArray.hx",83,0xdcd92e53)
		HX_STACK_THIS(this)
		HX_STACK_ARG(pos,"pos")
		HX_STACK_ARG(v,"v")
		HX_STACK_LINE(83)
		this->b[pos] = v;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(ByteArray_obj,__set,(void))

::String ByteArray_obj::asString( ){
	HX_STACK_FRAME("snow.platform.native.utils.ByteArray","asString",0x290f6784,"snow.platform.native.utils.ByteArray.asString","snow/platform/native/utils/ByteArray.hx",90,0xdcd92e53)
	HX_STACK_THIS(this)
	HX_STACK_LINE(90)
	int inLen = this->length;		HX_STACK_VAR(inLen,"inLen");
	HX_STACK_LINE(90)
	if ((((this->position + inLen) > this->length))){
		HX_STACK_LINE(90)
		HX_STACK_DO_THROW(HX_CSTRING("/ ByteArray / EOFError"));
	}
	HX_STACK_LINE(90)
	int p = this->position;		HX_STACK_VAR(p,"p");
	HX_STACK_LINE(90)
	hx::AddEq(this->position,inLen);
	HX_STACK_LINE(90)
	::String result = HX_CSTRING("");		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(90)
	::__hxcpp_string_of_bytes(this->b,result,p,inLen);
	HX_STACK_LINE(90)
	return result;
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArray_obj,asString,return )

Void ByteArray_obj::checkData( int inLength){
{
		HX_STACK_FRAME("snow.platform.native.utils.ByteArray","checkData",0xf54787d1,"snow.platform.native.utils.ByteArray.checkData","snow/platform/native/utils/ByteArray.hx",96,0xdcd92e53)
		HX_STACK_THIS(this)
		HX_STACK_ARG(inLength,"inLength")
		HX_STACK_LINE(96)
		if ((((inLength + this->position) > this->length))){
			HX_STACK_LINE(97)
			HX_STACK_DO_THROW(HX_CSTRING("/ ByteArray / EOFError"));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArray_obj,checkData,(void))

Void ByteArray_obj::clear( ){
{
		HX_STACK_FRAME("snow.platform.native.utils.ByteArray","clear",0x77aececc,"snow.platform.native.utils.ByteArray.clear","snow/platform/native/utils/ByteArray.hx",102,0xdcd92e53)
		HX_STACK_THIS(this)
		HX_STACK_LINE(104)
		this->position = (int)0;
		HX_STACK_LINE(105)
		this->length = (int)0;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArray_obj,clear,(void))

Void ByteArray_obj::compress( ::snow::platform::native::utils::Compression algorithm){
{
		HX_STACK_FRAME("snow.platform.native.utils.ByteArray","compress",0x0cc87bc3,"snow.platform.native.utils.ByteArray.compress","snow/platform/native/utils/ByteArray.hx",110,0xdcd92e53)
		HX_STACK_THIS(this)
		HX_STACK_ARG(algorithm,"algorithm")
		HX_STACK_LINE(115)
		::snow::platform::native::utils::ByteArray src = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(src,"src");
		HX_STACK_LINE(118)
		::haxe::io::Bytes result;		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(120)
		if (((algorithm == ::snow::platform::native::utils::Compression_obj::LZMA))){
			HX_STACK_LINE(122)
			Array< unsigned char > _g = ::snow::platform::native::utils::ByteArray_obj::snow_lzma_encode(src->b);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(122)
			::haxe::io::Bytes _g1 = ::haxe::io::Bytes_obj::ofData(_g);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(122)
			result = _g1;
		}
		else{
			HX_STACK_LINE(126)
			int windowBits;		HX_STACK_VAR(windowBits,"windowBits");
			HX_STACK_LINE(126)
			switch( (int)(algorithm->__Index())){
				case (int)0: {
					HX_STACK_LINE(127)
					windowBits = (int)-15;
				}
				;break;
				case (int)3: {
					HX_STACK_LINE(128)
					windowBits = (int)31;
				}
				;break;
				default: {
					HX_STACK_LINE(129)
					windowBits = (int)15;
				}
			}
			HX_STACK_LINE(135)
			::haxe::io::Bytes _g2 = ::haxe::zip::Compress_obj::run(src,(int)8);		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(135)
			result = _g2;
		}
		HX_STACK_LINE(140)
		this->b = result->b;
		HX_STACK_LINE(141)
		this->length = result->length;
		HX_STACK_LINE(142)
		this->position = this->length;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArray_obj,compress,(void))

Void ByteArray_obj::uncompress( ::snow::platform::native::utils::Compression algorithm){
{
		HX_STACK_FRAME("snow.platform.native.utils.ByteArray","uncompress",0xce5a6d5c,"snow.platform.native.utils.ByteArray.uncompress","snow/platform/native/utils/ByteArray.hx",150,0xdcd92e53)
		HX_STACK_THIS(this)
		HX_STACK_ARG(algorithm,"algorithm")
		HX_STACK_LINE(152)
		if (((algorithm == null()))){
			HX_STACK_LINE(153)
			algorithm = ::snow::platform::native::utils::Compression_obj::GZIP;
		}
		HX_STACK_LINE(159)
		::snow::platform::native::utils::ByteArray src = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(src,"src");
		HX_STACK_LINE(162)
		::haxe::io::Bytes result;		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(164)
		if (((algorithm == ::snow::platform::native::utils::Compression_obj::LZMA))){
			HX_STACK_LINE(166)
			Array< unsigned char > _g = ::snow::platform::native::utils::ByteArray_obj::snow_lzma_decode(src->b);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(166)
			::haxe::io::Bytes _g1 = ::haxe::io::Bytes_obj::ofData(_g);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(166)
			result = _g1;
		}
		else{
			HX_STACK_LINE(170)
			int windowBits;		HX_STACK_VAR(windowBits,"windowBits");
			HX_STACK_LINE(170)
			switch( (int)(algorithm->__Index())){
				case (int)0: {
					HX_STACK_LINE(171)
					windowBits = (int)-15;
				}
				;break;
				case (int)3: {
					HX_STACK_LINE(172)
					windowBits = (int)31;
				}
				;break;
				default: {
					HX_STACK_LINE(173)
					windowBits = (int)15;
				}
			}
			HX_STACK_LINE(179)
			::haxe::io::Bytes _g2 = ::haxe::zip::Uncompress_obj::run(src,null());		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(179)
			result = _g2;
		}
		HX_STACK_LINE(184)
		this->b = result->b;
		HX_STACK_LINE(185)
		this->length = result->length;
		HX_STACK_LINE(186)
		this->position = (int)0;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArray_obj,uncompress,(void))

Void ByteArray_obj::deflate( ){
{
		HX_STACK_FRAME("snow.platform.native.utils.ByteArray","deflate",0xd3ce766a,"snow.platform.native.utils.ByteArray.deflate","snow/platform/native/utils/ByteArray.hx",196,0xdcd92e53)
		HX_STACK_THIS(this)
		HX_STACK_LINE(196)
		this->compress(::snow::platform::native::utils::Compression_obj::DEFLATE);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArray_obj,deflate,(void))

Void ByteArray_obj::inflate( ){
{
		HX_STACK_FRAME("snow.platform.native.utils.ByteArray","inflate",0x3cf00786,"snow.platform.native.utils.ByteArray.inflate","snow/platform/native/utils/ByteArray.hx",202,0xdcd92e53)
		HX_STACK_THIS(this)
		HX_STACK_LINE(202)
		this->uncompress(::snow::platform::native::utils::Compression_obj::DEFLATE);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArray_obj,inflate,(void))

int ByteArray_obj::getLength( ){
	HX_STACK_FRAME("snow.platform.native.utils.ByteArray","getLength",0x7a6286db,"snow.platform.native.utils.ByteArray.getLength","snow/platform/native/utils/ByteArray.hx",218,0xdcd92e53)
	HX_STACK_THIS(this)
	HX_STACK_LINE(218)
	return this->length;
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArray_obj,getLength,return )

::snow::platform::native::utils::ByteArray ByteArray_obj::getByteBuffer( ){
	HX_STACK_FRAME("snow.platform.native.utils.ByteArray","getByteBuffer",0xdbecd69d,"snow.platform.native.utils.ByteArray.getByteBuffer","snow/platform/native/utils/ByteArray.hx",225,0xdcd92e53)
	HX_STACK_THIS(this)
	HX_STACK_LINE(225)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArray_obj,getByteBuffer,return )

int ByteArray_obj::getStart( ){
	HX_STACK_FRAME("snow.platform.native.utils.ByteArray","getStart",0x6cebb80d,"snow.platform.native.utils.ByteArray.getStart","snow/platform/native/utils/ByteArray.hx",231,0xdcd92e53)
	HX_STACK_THIS(this)
	HX_STACK_LINE(231)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArray_obj,getStart,return )

Void ByteArray_obj::setLength( int inLength){
{
		HX_STACK_FRAME("snow.platform.native.utils.ByteArray","setLength",0x5db372e7,"snow.platform.native.utils.ByteArray.setLength","snow/platform/native/utils/ByteArray.hx",236,0xdcd92e53)
		HX_STACK_THIS(this)
		HX_STACK_ARG(inLength,"inLength")
		HX_STACK_LINE(238)
		if (((inLength > (int)0))){
			HX_STACK_LINE(239)
			int len = ((inLength - (int)1) + (int)1);		HX_STACK_VAR(len,"len");
			HX_STACK_LINE(239)
			if (((this->b->length < len))){
				HX_STACK_LINE(239)
				this->b->__SetSize(len);
			}
			HX_STACK_LINE(239)
			{
			}
		}
		HX_STACK_LINE(242)
		this->length = inLength;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArray_obj,setLength,(void))

::snow::platform::native::utils::ByteArray ByteArray_obj::slice( int inBegin,Dynamic inEnd){
	HX_STACK_FRAME("snow.platform.native.utils.ByteArray","slice",0xae1b2191,"snow.platform.native.utils.ByteArray.slice","snow/platform/native/utils/ByteArray.hx",247,0xdcd92e53)
	HX_STACK_THIS(this)
	HX_STACK_ARG(inBegin,"inBegin")
	HX_STACK_ARG(inEnd,"inEnd")
	HX_STACK_LINE(249)
	int begin = inBegin;		HX_STACK_VAR(begin,"begin");
	HX_STACK_LINE(251)
	if (((begin < (int)0))){
		HX_STACK_LINE(253)
		hx::AddEq(begin,this->length);
		HX_STACK_LINE(255)
		if (((begin < (int)0))){
			HX_STACK_LINE(256)
			begin = (int)0;
		}
	}
	HX_STACK_LINE(261)
	int end;		HX_STACK_VAR(end,"end");
	HX_STACK_LINE(261)
	if (((inEnd == null()))){
		HX_STACK_LINE(261)
		end = this->length;
	}
	else{
		HX_STACK_LINE(261)
		end = inEnd;
	}
	HX_STACK_LINE(263)
	if (((end < (int)0))){
		HX_STACK_LINE(265)
		hx::AddEq(end,this->length);
		HX_STACK_LINE(267)
		if (((end < (int)0))){
			HX_STACK_LINE(268)
			end = (int)0;
		}
	}
	HX_STACK_LINE(273)
	if (((begin >= end))){
		HX_STACK_LINE(274)
		return ::snow::platform::native::utils::ByteArray_obj::__new(null());
	}
	HX_STACK_LINE(277)
	::snow::platform::native::utils::ByteArray result = ::snow::platform::native::utils::ByteArray_obj::__new((end - begin));		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(279)
	int opos = this->position;		HX_STACK_VAR(opos,"opos");
	HX_STACK_LINE(281)
	result->blit((int)0,hx::ObjectPtr<OBJ_>(this),begin,(end - begin));
	HX_STACK_LINE(283)
	return result;
}


HX_DEFINE_DYNAMIC_FUNC2(ByteArray_obj,slice,return )

bool ByteArray_obj::readBoolean( ){
	HX_STACK_FRAME("snow.platform.native.utils.ByteArray","readBoolean",0x4869d471,"snow.platform.native.utils.ByteArray.readBoolean","snow/platform/native/utils/ByteArray.hx",293,0xdcd92e53)
	HX_STACK_THIS(this)
	HX_STACK_LINE(293)
	if (((this->position < this->length))){
		HX_STACK_LINE(293)
		int _g;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(293)
		{
			HX_STACK_LINE(293)
			int pos = (this->position)++;		HX_STACK_VAR(pos,"pos");
			HX_STACK_LINE(293)
			_g = this->b->__get(pos);
		}
		HX_STACK_LINE(293)
		return (_g != (int)0);
	}
	else{
		HX_STACK_LINE(293)
		int _g1 = HX_STACK_DO_THROW(HX_CSTRING("/ ByteArray / EOFError"));		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(293)
		return (_g1 != (int)0);
	}
	HX_STACK_LINE(293)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArray_obj,readBoolean,return )

int ByteArray_obj::readByte( ){
	HX_STACK_FRAME("snow.platform.native.utils.ByteArray","readByte",0xf2242d9f,"snow.platform.native.utils.ByteArray.readByte","snow/platform/native/utils/ByteArray.hx",297,0xdcd92e53)
	HX_STACK_THIS(this)
	HX_STACK_LINE(299)
	int val;		HX_STACK_VAR(val,"val");
	HX_STACK_LINE(299)
	if (((this->position < this->length))){
		HX_STACK_LINE(299)
		int pos = (this->position)++;		HX_STACK_VAR(pos,"pos");
		HX_STACK_LINE(299)
		val = this->b->__get(pos);
	}
	else{
		HX_STACK_LINE(299)
		HX_STACK_DO_THROW(HX_CSTRING("/ ByteArray / EOFError"));
	}
	HX_STACK_LINE(301)
	if (((((int(val) & int((int)128))) != (int)0))){
		HX_STACK_LINE(301)
		return (val - (int)256);
	}
	else{
		HX_STACK_LINE(301)
		return val;
	}
	HX_STACK_LINE(301)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArray_obj,readByte,return )

Void ByteArray_obj::readBytes( ::snow::platform::native::utils::ByteArray outData,hx::Null< int >  __o_inOffset,hx::Null< int >  __o_inLen){
int inOffset = __o_inOffset.Default(0);
int inLen = __o_inLen.Default(0);
	HX_STACK_FRAME("snow.platform.native.utils.ByteArray","readBytes",0xed83bdf4,"snow.platform.native.utils.ByteArray.readBytes","snow/platform/native/utils/ByteArray.hx",305,0xdcd92e53)
	HX_STACK_THIS(this)
	HX_STACK_ARG(outData,"outData")
	HX_STACK_ARG(inOffset,"inOffset")
	HX_STACK_ARG(inLen,"inLen")
{
		HX_STACK_LINE(307)
		if (((inLen == (int)0))){
			HX_STACK_LINE(308)
			inLen = (this->length - this->position);
		}
		HX_STACK_LINE(311)
		if ((((this->position + inLen) > this->length))){
			HX_STACK_LINE(312)
			HX_STACK_DO_THROW(HX_CSTRING("/ ByteArray / EOFError"));
		}
		HX_STACK_LINE(315)
		if (((outData->length < (inOffset + inLen)))){
			HX_STACK_LINE(316)
			int len = (((inOffset + inLen) - (int)1) + (int)1);		HX_STACK_VAR(len,"len");
			HX_STACK_LINE(316)
			if (((outData->b->length < len))){
				HX_STACK_LINE(316)
				outData->b->__SetSize(len);
			}
			HX_STACK_LINE(316)
			if (((outData->length < len))){
				HX_STACK_LINE(316)
				outData->length = len;
			}
		}
		HX_STACK_LINE(325)
		Array< unsigned char > b1 = this->b;		HX_STACK_VAR(b1,"b1");
		HX_STACK_LINE(326)
		Array< unsigned char > b2 = outData->b;		HX_STACK_VAR(b2,"b2");
		HX_STACK_LINE(327)
		int p = this->position;		HX_STACK_VAR(p,"p");
		HX_STACK_LINE(329)
		{
			HX_STACK_LINE(329)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(329)
			while((true)){
				HX_STACK_LINE(329)
				if ((!(((_g < inLen))))){
					HX_STACK_LINE(329)
					break;
				}
				HX_STACK_LINE(329)
				int i = (_g)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(330)
				b2[(inOffset + i)] = b1->__get((p + i));
			}
		}
		HX_STACK_LINE(334)
		hx::AddEq(this->position,inLen);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(ByteArray_obj,readBytes,(void))

Float ByteArray_obj::readDouble( ){
	HX_STACK_FRAME("snow.platform.native.utils.ByteArray","readDouble",0xf11e4d68,"snow.platform.native.utils.ByteArray.readDouble","snow/platform/native/utils/ByteArray.hx",338,0xdcd92e53)
	HX_STACK_THIS(this)
	HX_STACK_LINE(340)
	if ((((this->position + (int)8) > this->length))){
		HX_STACK_LINE(341)
		HX_STACK_DO_THROW(HX_CSTRING("/ ByteArray / EOFError"));
	}
	HX_STACK_LINE(347)
	Array< unsigned char > _g = this->b->slice(this->position,(this->position + (int)8));		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(347)
	::haxe::io::Bytes bytes = ::haxe::io::Bytes_obj::__new((int)8,_g);		HX_STACK_VAR(bytes,"bytes");
	HX_STACK_LINE(350)
	hx::AddEq(this->position,(int)8);
	HX_STACK_LINE(352)
	return ::snow::platform::native::utils::ByteArray_obj::std_double_of_bytes(bytes->b,this->bigEndian);
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArray_obj,readDouble,return )

Float ByteArray_obj::readFloat( ){
	HX_STACK_FRAME("snow.platform.native.utils.ByteArray","readFloat",0x32827b25,"snow.platform.native.utils.ByteArray.readFloat","snow/platform/native/utils/ByteArray.hx",356,0xdcd92e53)
	HX_STACK_THIS(this)
	HX_STACK_LINE(358)
	if ((((this->position + (int)4) > this->length))){
		HX_STACK_LINE(359)
		HX_STACK_DO_THROW(HX_CSTRING("/ ByteArray / EOFError"));
	}
	HX_STACK_LINE(365)
	Array< unsigned char > _g = this->b->slice(this->position,(this->position + (int)4));		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(365)
	::haxe::io::Bytes bytes = ::haxe::io::Bytes_obj::__new((int)4,_g);		HX_STACK_VAR(bytes,"bytes");
	HX_STACK_LINE(368)
	hx::AddEq(this->position,(int)4);
	HX_STACK_LINE(370)
	return ::snow::platform::native::utils::ByteArray_obj::std_float_of_bytes(bytes->b,this->bigEndian);
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArray_obj,readFloat,return )

int ByteArray_obj::readInt( ){
	HX_STACK_FRAME("snow.platform.native.utils.ByteArray","readInt",0x339e1e38,"snow.platform.native.utils.ByteArray.readInt","snow/platform/native/utils/ByteArray.hx",374,0xdcd92e53)
	HX_STACK_THIS(this)
	HX_STACK_LINE(376)
	int ch1;		HX_STACK_VAR(ch1,"ch1");
	HX_STACK_LINE(376)
	if (((this->position < this->length))){
		HX_STACK_LINE(376)
		int pos = (this->position)++;		HX_STACK_VAR(pos,"pos");
		HX_STACK_LINE(376)
		ch1 = this->b->__get(pos);
	}
	else{
		HX_STACK_LINE(376)
		HX_STACK_DO_THROW(HX_CSTRING("/ ByteArray / EOFError"));
	}
	HX_STACK_LINE(377)
	int ch2;		HX_STACK_VAR(ch2,"ch2");
	HX_STACK_LINE(377)
	if (((this->position < this->length))){
		HX_STACK_LINE(377)
		int pos = (this->position)++;		HX_STACK_VAR(pos,"pos");
		HX_STACK_LINE(377)
		ch2 = this->b->__get(pos);
	}
	else{
		HX_STACK_LINE(377)
		HX_STACK_DO_THROW(HX_CSTRING("/ ByteArray / EOFError"));
	}
	HX_STACK_LINE(378)
	int ch3;		HX_STACK_VAR(ch3,"ch3");
	HX_STACK_LINE(378)
	if (((this->position < this->length))){
		HX_STACK_LINE(378)
		int pos = (this->position)++;		HX_STACK_VAR(pos,"pos");
		HX_STACK_LINE(378)
		ch3 = this->b->__get(pos);
	}
	else{
		HX_STACK_LINE(378)
		HX_STACK_DO_THROW(HX_CSTRING("/ ByteArray / EOFError"));
	}
	HX_STACK_LINE(379)
	int ch4;		HX_STACK_VAR(ch4,"ch4");
	HX_STACK_LINE(379)
	if (((this->position < this->length))){
		HX_STACK_LINE(379)
		int pos = (this->position)++;		HX_STACK_VAR(pos,"pos");
		HX_STACK_LINE(379)
		ch4 = this->b->__get(pos);
	}
	else{
		HX_STACK_LINE(379)
		HX_STACK_DO_THROW(HX_CSTRING("/ ByteArray / EOFError"));
	}
	HX_STACK_LINE(382)
	if ((this->bigEndian)){
		HX_STACK_LINE(383)
		return (int((int((int((int(ch1) << int((int)24))) | int((int(ch2) << int((int)16))))) | int((int(ch3) << int((int)8))))) | int(ch4));
	}
	else{
		HX_STACK_LINE(384)
		return (int((int((int((int(ch4) << int((int)24))) | int((int(ch3) << int((int)16))))) | int((int(ch2) << int((int)8))))) | int(ch1));
	}
	HX_STACK_LINE(382)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArray_obj,readInt,return )

::String ByteArray_obj::readMultiByte( int inLen,::String charSet){
	HX_STACK_FRAME("snow.platform.native.utils.ByteArray","readMultiByte",0xecaab42a,"snow.platform.native.utils.ByteArray.readMultiByte","snow/platform/native/utils/ByteArray.hx",391,0xdcd92e53)
	HX_STACK_THIS(this)
	HX_STACK_ARG(inLen,"inLen")
	HX_STACK_ARG(charSet,"charSet")
	HX_STACK_LINE(391)
	if ((((this->position + inLen) > this->length))){
		HX_STACK_LINE(391)
		HX_STACK_DO_THROW(HX_CSTRING("/ ByteArray / EOFError"));
	}
	HX_STACK_LINE(391)
	int p = this->position;		HX_STACK_VAR(p,"p");
	HX_STACK_LINE(391)
	hx::AddEq(this->position,inLen);
	HX_STACK_LINE(391)
	::String result = HX_CSTRING("");		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(391)
	::__hxcpp_string_of_bytes(this->b,result,p,inLen);
	HX_STACK_LINE(391)
	return result;
}


HX_DEFINE_DYNAMIC_FUNC2(ByteArray_obj,readMultiByte,return )

int ByteArray_obj::readShort( ){
	HX_STACK_FRAME("snow.platform.native.utils.ByteArray","readShort",0xac133a05,"snow.platform.native.utils.ByteArray.readShort","snow/platform/native/utils/ByteArray.hx",395,0xdcd92e53)
	HX_STACK_THIS(this)
	HX_STACK_LINE(397)
	int ch1;		HX_STACK_VAR(ch1,"ch1");
	HX_STACK_LINE(397)
	if (((this->position < this->length))){
		HX_STACK_LINE(397)
		int pos = (this->position)++;		HX_STACK_VAR(pos,"pos");
		HX_STACK_LINE(397)
		ch1 = this->b->__get(pos);
	}
	else{
		HX_STACK_LINE(397)
		HX_STACK_DO_THROW(HX_CSTRING("/ ByteArray / EOFError"));
	}
	HX_STACK_LINE(398)
	int ch2;		HX_STACK_VAR(ch2,"ch2");
	HX_STACK_LINE(398)
	if (((this->position < this->length))){
		HX_STACK_LINE(398)
		int pos = (this->position)++;		HX_STACK_VAR(pos,"pos");
		HX_STACK_LINE(398)
		ch2 = this->b->__get(pos);
	}
	else{
		HX_STACK_LINE(398)
		HX_STACK_DO_THROW(HX_CSTRING("/ ByteArray / EOFError"));
	}
	HX_STACK_LINE(401)
	int val;		HX_STACK_VAR(val,"val");
	HX_STACK_LINE(401)
	if ((this->bigEndian)){
		HX_STACK_LINE(402)
		val = (int((int(ch1) << int((int)8))) | int(ch2));
	}
	else{
		HX_STACK_LINE(403)
		val = (int((int(ch2) << int((int)8))) | int(ch1));
	}
	HX_STACK_LINE(406)
	if (((((int(val) & int((int)32768))) != (int)0))){
		HX_STACK_LINE(407)
		return (val - (int)65536);
	}
	else{
		HX_STACK_LINE(407)
		return val;
	}
	HX_STACK_LINE(406)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArray_obj,readShort,return )

int ByteArray_obj::readUnsignedByte( ){
	HX_STACK_FRAME("snow.platform.native.utils.ByteArray","readUnsignedByte",0x1049c834,"snow.platform.native.utils.ByteArray.readUnsignedByte","snow/platform/native/utils/ByteArray.hx",413,0xdcd92e53)
	HX_STACK_THIS(this)
	HX_STACK_LINE(413)
	if (((this->position < this->length))){
		HX_STACK_LINE(413)
		int pos = (this->position)++;		HX_STACK_VAR(pos,"pos");
		HX_STACK_LINE(413)
		return this->b->__get(pos);
	}
	else{
		HX_STACK_LINE(413)
		HX_STACK_DO_THROW(HX_CSTRING("/ ByteArray / EOFError"));
	}
	HX_STACK_LINE(413)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArray_obj,readUnsignedByte,return )

int ByteArray_obj::readUnsignedInt( ){
	HX_STACK_FRAME("snow.platform.native.utils.ByteArray","readUnsignedInt",0x3e15ad43,"snow.platform.native.utils.ByteArray.readUnsignedInt","snow/platform/native/utils/ByteArray.hx",417,0xdcd92e53)
	HX_STACK_THIS(this)
	HX_STACK_LINE(419)
	int ch1;		HX_STACK_VAR(ch1,"ch1");
	HX_STACK_LINE(419)
	if (((this->position < this->length))){
		HX_STACK_LINE(419)
		int pos = (this->position)++;		HX_STACK_VAR(pos,"pos");
		HX_STACK_LINE(419)
		ch1 = this->b->__get(pos);
	}
	else{
		HX_STACK_LINE(419)
		HX_STACK_DO_THROW(HX_CSTRING("/ ByteArray / EOFError"));
	}
	HX_STACK_LINE(420)
	int ch2;		HX_STACK_VAR(ch2,"ch2");
	HX_STACK_LINE(420)
	if (((this->position < this->length))){
		HX_STACK_LINE(420)
		int pos = (this->position)++;		HX_STACK_VAR(pos,"pos");
		HX_STACK_LINE(420)
		ch2 = this->b->__get(pos);
	}
	else{
		HX_STACK_LINE(420)
		HX_STACK_DO_THROW(HX_CSTRING("/ ByteArray / EOFError"));
	}
	HX_STACK_LINE(421)
	int ch3;		HX_STACK_VAR(ch3,"ch3");
	HX_STACK_LINE(421)
	if (((this->position < this->length))){
		HX_STACK_LINE(421)
		int pos = (this->position)++;		HX_STACK_VAR(pos,"pos");
		HX_STACK_LINE(421)
		ch3 = this->b->__get(pos);
	}
	else{
		HX_STACK_LINE(421)
		HX_STACK_DO_THROW(HX_CSTRING("/ ByteArray / EOFError"));
	}
	HX_STACK_LINE(422)
	int ch4;		HX_STACK_VAR(ch4,"ch4");
	HX_STACK_LINE(422)
	if (((this->position < this->length))){
		HX_STACK_LINE(422)
		int pos = (this->position)++;		HX_STACK_VAR(pos,"pos");
		HX_STACK_LINE(422)
		ch4 = this->b->__get(pos);
	}
	else{
		HX_STACK_LINE(422)
		HX_STACK_DO_THROW(HX_CSTRING("/ ByteArray / EOFError"));
	}
	HX_STACK_LINE(425)
	if ((this->bigEndian)){
		HX_STACK_LINE(426)
		return (int((int((int((int(ch1) << int((int)24))) | int((int(ch2) << int((int)16))))) | int((int(ch3) << int((int)8))))) | int(ch4));
	}
	else{
		HX_STACK_LINE(427)
		return (int((int((int((int(ch4) << int((int)24))) | int((int(ch3) << int((int)16))))) | int((int(ch2) << int((int)8))))) | int(ch1));
	}
	HX_STACK_LINE(425)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArray_obj,readUnsignedInt,return )

int ByteArray_obj::readUnsignedShort( ){
	HX_STACK_FRAME("snow.platform.native.utils.ByteArray","readUnsignedShort",0xeed4e1d0,"snow.platform.native.utils.ByteArray.readUnsignedShort","snow/platform/native/utils/ByteArray.hx",431,0xdcd92e53)
	HX_STACK_THIS(this)
	HX_STACK_LINE(433)
	int ch1;		HX_STACK_VAR(ch1,"ch1");
	HX_STACK_LINE(433)
	if (((this->position < this->length))){
		HX_STACK_LINE(433)
		int pos = (this->position)++;		HX_STACK_VAR(pos,"pos");
		HX_STACK_LINE(433)
		ch1 = this->b->__get(pos);
	}
	else{
		HX_STACK_LINE(433)
		HX_STACK_DO_THROW(HX_CSTRING("/ ByteArray / EOFError"));
	}
	HX_STACK_LINE(434)
	int ch2;		HX_STACK_VAR(ch2,"ch2");
	HX_STACK_LINE(434)
	if (((this->position < this->length))){
		HX_STACK_LINE(434)
		int pos = (this->position)++;		HX_STACK_VAR(pos,"pos");
		HX_STACK_LINE(434)
		ch2 = this->b->__get(pos);
	}
	else{
		HX_STACK_LINE(434)
		HX_STACK_DO_THROW(HX_CSTRING("/ ByteArray / EOFError"));
	}
	HX_STACK_LINE(437)
	if ((this->bigEndian)){
		HX_STACK_LINE(438)
		return (int((int(ch1) << int((int)8))) | int(ch2));
	}
	else{
		HX_STACK_LINE(439)
		return (((int(ch2) << int((int)8))) + ch1);
	}
	HX_STACK_LINE(437)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArray_obj,readUnsignedShort,return )

::String ByteArray_obj::readUTF( ){
	HX_STACK_FRAME("snow.platform.native.utils.ByteArray","readUTF",0x33a72270,"snow.platform.native.utils.ByteArray.readUTF","snow/platform/native/utils/ByteArray.hx",443,0xdcd92e53)
	HX_STACK_THIS(this)
	HX_STACK_LINE(445)
	int len;		HX_STACK_VAR(len,"len");
	HX_STACK_LINE(445)
	{
		HX_STACK_LINE(445)
		int ch1;		HX_STACK_VAR(ch1,"ch1");
		HX_STACK_LINE(445)
		if (((this->position < this->length))){
			HX_STACK_LINE(445)
			int pos = (this->position)++;		HX_STACK_VAR(pos,"pos");
			HX_STACK_LINE(445)
			ch1 = this->b->__get(pos);
		}
		else{
			HX_STACK_LINE(445)
			HX_STACK_DO_THROW(HX_CSTRING("/ ByteArray / EOFError"));
		}
		HX_STACK_LINE(445)
		int ch2;		HX_STACK_VAR(ch2,"ch2");
		HX_STACK_LINE(445)
		if (((this->position < this->length))){
			HX_STACK_LINE(445)
			int pos = (this->position)++;		HX_STACK_VAR(pos,"pos");
			HX_STACK_LINE(445)
			ch2 = this->b->__get(pos);
		}
		else{
			HX_STACK_LINE(445)
			HX_STACK_DO_THROW(HX_CSTRING("/ ByteArray / EOFError"));
		}
		HX_STACK_LINE(445)
		if ((this->bigEndian)){
			HX_STACK_LINE(445)
			len = (int((int(ch1) << int((int)8))) | int(ch2));
		}
		else{
			HX_STACK_LINE(445)
			len = (((int(ch2) << int((int)8))) + ch1);
		}
	}
	HX_STACK_LINE(447)
	if ((((this->position + len) > this->length))){
		HX_STACK_LINE(447)
		HX_STACK_DO_THROW(HX_CSTRING("/ ByteArray / EOFError"));
	}
	HX_STACK_LINE(447)
	int p = this->position;		HX_STACK_VAR(p,"p");
	HX_STACK_LINE(447)
	hx::AddEq(this->position,len);
	HX_STACK_LINE(447)
	::String result = HX_CSTRING("");		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(447)
	::__hxcpp_string_of_bytes(this->b,result,p,len);
	HX_STACK_LINE(447)
	return result;
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArray_obj,readUTF,return )

::String ByteArray_obj::readUTFBytes( int inLen){
	HX_STACK_FRAME("snow.platform.native.utils.ByteArray","readUTFBytes",0x69fb7fdb,"snow.platform.native.utils.ByteArray.readUTFBytes","snow/platform/native/utils/ByteArray.hx",451,0xdcd92e53)
	HX_STACK_THIS(this)
	HX_STACK_ARG(inLen,"inLen")
	HX_STACK_LINE(453)
	if ((((this->position + inLen) > this->length))){
		HX_STACK_LINE(454)
		HX_STACK_DO_THROW(HX_CSTRING("/ ByteArray / EOFError"));
	}
	HX_STACK_LINE(457)
	int p = this->position;		HX_STACK_VAR(p,"p");
	HX_STACK_LINE(458)
	hx::AddEq(this->position,inLen);
	HX_STACK_LINE(466)
	::String result = HX_CSTRING("");		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(467)
	::__hxcpp_string_of_bytes(this->b,result,p,inLen);
	HX_STACK_LINE(469)
	return result;
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArray_obj,readUTFBytes,return )

Void ByteArray_obj::write_uncheck( int inByte){
{
		HX_STACK_FRAME("snow.platform.native.utils.ByteArray","write_uncheck",0x3cd1016e,"snow.platform.native.utils.ByteArray.write_uncheck","snow/platform/native/utils/ByteArray.hx",479,0xdcd92e53)
		HX_STACK_THIS(this)
		HX_STACK_ARG(inByte,"inByte")
		HX_STACK_LINE(484)
		int _g = (this->position)++;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(484)
		this->b->__unsafe_set(_g,inByte);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArray_obj,write_uncheck,(void))

Void ByteArray_obj::writeBoolean( bool value){
{
		HX_STACK_FRAME("snow.platform.native.utils.ByteArray","writeBoolean",0x5b19e82a,"snow.platform.native.utils.ByteArray.writeBoolean","snow/platform/native/utils/ByteArray.hx",491,0xdcd92e53)
		HX_STACK_THIS(this)
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(491)
		{
			HX_STACK_LINE(491)
			int len = (this->position + (int)1);		HX_STACK_VAR(len,"len");
			HX_STACK_LINE(491)
			if (((this->b->length < len))){
				HX_STACK_LINE(491)
				this->b->__SetSize(len);
			}
			HX_STACK_LINE(491)
			if (((this->length < len))){
				HX_STACK_LINE(491)
				this->length = len;
			}
		}
		HX_STACK_LINE(491)
		int _g = (this->position)++;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(491)
		if ((value)){
			HX_STACK_LINE(491)
			this->b[_g] = (int)1;
		}
		else{
			HX_STACK_LINE(491)
			this->b[_g] = (int)0;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArray_obj,writeBoolean,(void))

Void ByteArray_obj::writeByte( int value){
{
		HX_STACK_FRAME("snow.platform.native.utils.ByteArray","writeByte",0xa8db7c46,"snow.platform.native.utils.ByteArray.writeByte","snow/platform/native/utils/ByteArray.hx",495,0xdcd92e53)
		HX_STACK_THIS(this)
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(497)
		{
			HX_STACK_LINE(497)
			int len = (this->position + (int)1);		HX_STACK_VAR(len,"len");
			HX_STACK_LINE(497)
			if (((this->b->length < len))){
				HX_STACK_LINE(497)
				this->b->__SetSize(len);
			}
			HX_STACK_LINE(497)
			if (((this->length < len))){
				HX_STACK_LINE(497)
				this->length = len;
			}
		}
		HX_STACK_LINE(502)
		int _g = (this->position)++;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(502)
		this->b[_g] = value;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArray_obj,writeByte,(void))

Void ByteArray_obj::writeBytes( ::haxe::io::Bytes bytes,hx::Null< int >  __o_inOffset,hx::Null< int >  __o_inLength){
int inOffset = __o_inOffset.Default(0);
int inLength = __o_inLength.Default(0);
	HX_STACK_FRAME("snow.platform.native.utils.ByteArray","writeBytes",0x1731416d,"snow.platform.native.utils.ByteArray.writeBytes","snow/platform/native/utils/ByteArray.hx",507,0xdcd92e53)
	HX_STACK_THIS(this)
	HX_STACK_ARG(bytes,"bytes")
	HX_STACK_ARG(inOffset,"inOffset")
	HX_STACK_ARG(inLength,"inLength")
{
		HX_STACK_LINE(509)
		if (((inLength == (int)0))){
			HX_STACK_LINE(510)
			inLength = (bytes->length - inOffset);
		}
		HX_STACK_LINE(513)
		{
			HX_STACK_LINE(513)
			int len = (((this->position + inLength) - (int)1) + (int)1);		HX_STACK_VAR(len,"len");
			HX_STACK_LINE(513)
			if (((this->b->length < len))){
				HX_STACK_LINE(513)
				this->b->__SetSize(len);
			}
			HX_STACK_LINE(513)
			if (((this->length < len))){
				HX_STACK_LINE(513)
				this->length = len;
			}
		}
		HX_STACK_LINE(515)
		int opos = this->position;		HX_STACK_VAR(opos,"opos");
		HX_STACK_LINE(516)
		hx::AddEq(this->position,inLength);
		HX_STACK_LINE(518)
		this->blit(opos,bytes,inOffset,inLength);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(ByteArray_obj,writeBytes,(void))

Void ByteArray_obj::writeDouble( Float x){
{
		HX_STACK_FRAME("snow.platform.native.utils.ByteArray","writeDouble",0x3f43d3cf,"snow.platform.native.utils.ByteArray.writeDouble","snow/platform/native/utils/ByteArray.hx",522,0xdcd92e53)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_LINE(527)
		Array< unsigned char > _g = ::snow::platform::native::utils::ByteArray_obj::std_double_bytes(x,this->bigEndian);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(527)
		::haxe::io::Bytes bytes = ::haxe::io::Bytes_obj::ofData(_g);		HX_STACK_VAR(bytes,"bytes");
		HX_STACK_LINE(530)
		{
			HX_STACK_LINE(530)
			int inOffset = (int)0;		HX_STACK_VAR(inOffset,"inOffset");
			HX_STACK_LINE(530)
			int inLength = (int)0;		HX_STACK_VAR(inLength,"inLength");
			HX_STACK_LINE(530)
			if (((inLength == (int)0))){
				HX_STACK_LINE(530)
				inLength = (bytes->length - inOffset);
			}
			HX_STACK_LINE(530)
			{
				HX_STACK_LINE(530)
				int len = (((this->position + inLength) - (int)1) + (int)1);		HX_STACK_VAR(len,"len");
				HX_STACK_LINE(530)
				if (((this->b->length < len))){
					HX_STACK_LINE(530)
					this->b->__SetSize(len);
				}
				HX_STACK_LINE(530)
				if (((this->length < len))){
					HX_STACK_LINE(530)
					this->length = len;
				}
			}
			HX_STACK_LINE(530)
			int opos = this->position;		HX_STACK_VAR(opos,"opos");
			HX_STACK_LINE(530)
			hx::AddEq(this->position,inLength);
			HX_STACK_LINE(530)
			this->blit(opos,bytes,inOffset,inLength);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArray_obj,writeDouble,(void))

Void ByteArray_obj::writeFloat( Float x){
{
		HX_STACK_FRAME("snow.platform.native.utils.ByteArray","writeFloat",0x5c2ffe9e,"snow.platform.native.utils.ByteArray.writeFloat","snow/platform/native/utils/ByteArray.hx",534,0xdcd92e53)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_LINE(539)
		Array< unsigned char > _g = ::snow::platform::native::utils::ByteArray_obj::std_float_bytes(x,this->bigEndian);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(539)
		::haxe::io::Bytes bytes = ::haxe::io::Bytes_obj::ofData(_g);		HX_STACK_VAR(bytes,"bytes");
		HX_STACK_LINE(542)
		{
			HX_STACK_LINE(542)
			int inOffset = (int)0;		HX_STACK_VAR(inOffset,"inOffset");
			HX_STACK_LINE(542)
			int inLength = (int)0;		HX_STACK_VAR(inLength,"inLength");
			HX_STACK_LINE(542)
			if (((inLength == (int)0))){
				HX_STACK_LINE(542)
				inLength = (bytes->length - inOffset);
			}
			HX_STACK_LINE(542)
			{
				HX_STACK_LINE(542)
				int len = (((this->position + inLength) - (int)1) + (int)1);		HX_STACK_VAR(len,"len");
				HX_STACK_LINE(542)
				if (((this->b->length < len))){
					HX_STACK_LINE(542)
					this->b->__SetSize(len);
				}
				HX_STACK_LINE(542)
				if (((this->length < len))){
					HX_STACK_LINE(542)
					this->length = len;
				}
			}
			HX_STACK_LINE(542)
			int opos = this->position;		HX_STACK_VAR(opos,"opos");
			HX_STACK_LINE(542)
			hx::AddEq(this->position,inLength);
			HX_STACK_LINE(542)
			this->blit(opos,bytes,inOffset,inLength);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArray_obj,writeFloat,(void))

Void ByteArray_obj::writeInt( int value){
{
		HX_STACK_FRAME("snow.platform.native.utils.ByteArray","writeInt",0xacf9a171,"snow.platform.native.utils.ByteArray.writeInt","snow/platform/native/utils/ByteArray.hx",546,0xdcd92e53)
		HX_STACK_THIS(this)
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(548)
		{
			HX_STACK_LINE(548)
			int len = ((this->position + (int)3) + (int)1);		HX_STACK_VAR(len,"len");
			HX_STACK_LINE(548)
			if (((this->b->length < len))){
				HX_STACK_LINE(548)
				this->b->__SetSize(len);
			}
			HX_STACK_LINE(548)
			if (((this->length < len))){
				HX_STACK_LINE(548)
				this->length = len;
			}
		}
		HX_STACK_LINE(550)
		if ((this->bigEndian)){
			HX_STACK_LINE(551)
			{
				HX_STACK_LINE(551)
				int _g = (this->position)++;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(551)
				this->b->__unsafe_set(_g,(int(value) >> int((int)24)));
			}
			HX_STACK_LINE(552)
			{
				HX_STACK_LINE(552)
				int _g1 = (this->position)++;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(552)
				this->b->__unsafe_set(_g1,(int(value) >> int((int)16)));
			}
			HX_STACK_LINE(553)
			{
				HX_STACK_LINE(553)
				int _g2 = (this->position)++;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(553)
				this->b->__unsafe_set(_g2,(int(value) >> int((int)8)));
			}
			HX_STACK_LINE(554)
			{
				HX_STACK_LINE(554)
				int _g3 = (this->position)++;		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(554)
				this->b->__unsafe_set(_g3,value);
			}
		}
		else{
			HX_STACK_LINE(556)
			{
				HX_STACK_LINE(556)
				int _g4 = (this->position)++;		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(556)
				this->b->__unsafe_set(_g4,value);
			}
			HX_STACK_LINE(557)
			{
				HX_STACK_LINE(557)
				int _g5 = (this->position)++;		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(557)
				this->b->__unsafe_set(_g5,(int(value) >> int((int)8)));
			}
			HX_STACK_LINE(558)
			{
				HX_STACK_LINE(558)
				int _g6 = (this->position)++;		HX_STACK_VAR(_g6,"_g6");
				HX_STACK_LINE(558)
				this->b->__unsafe_set(_g6,(int(value) >> int((int)16)));
			}
			HX_STACK_LINE(559)
			{
				HX_STACK_LINE(559)
				int _g7 = (this->position)++;		HX_STACK_VAR(_g7,"_g7");
				HX_STACK_LINE(559)
				this->b->__unsafe_set(_g7,(int(value) >> int((int)24)));
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArray_obj,writeInt,(void))

Void ByteArray_obj::writeShort( int value){
{
		HX_STACK_FRAME("snow.platform.native.utils.ByteArray","writeShort",0xd5c0bd7e,"snow.platform.native.utils.ByteArray.writeShort","snow/platform/native/utils/ByteArray.hx",570,0xdcd92e53)
		HX_STACK_THIS(this)
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(572)
		{
			HX_STACK_LINE(572)
			int len = ((this->position + (int)1) + (int)1);		HX_STACK_VAR(len,"len");
			HX_STACK_LINE(572)
			if (((this->b->length < len))){
				HX_STACK_LINE(572)
				this->b->__SetSize(len);
			}
			HX_STACK_LINE(572)
			if (((this->length < len))){
				HX_STACK_LINE(572)
				this->length = len;
			}
		}
		HX_STACK_LINE(574)
		if ((this->bigEndian)){
			HX_STACK_LINE(575)
			{
				HX_STACK_LINE(575)
				int _g = (this->position)++;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(575)
				this->b->__unsafe_set(_g,(int(value) >> int((int)8)));
			}
			HX_STACK_LINE(576)
			{
				HX_STACK_LINE(576)
				int _g1 = (this->position)++;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(576)
				this->b->__unsafe_set(_g1,value);
			}
		}
		else{
			HX_STACK_LINE(578)
			{
				HX_STACK_LINE(578)
				int _g2 = (this->position)++;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(578)
				this->b->__unsafe_set(_g2,value);
			}
			HX_STACK_LINE(579)
			{
				HX_STACK_LINE(579)
				int _g3 = (this->position)++;		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(579)
				this->b->__unsafe_set(_g3,(int(value) >> int((int)8)));
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArray_obj,writeShort,(void))

Void ByteArray_obj::writeUnsignedInt( int value){
{
		HX_STACK_FRAME("snow.platform.native.utils.ByteArray","writeUnsignedInt",0x8aec917c,"snow.platform.native.utils.ByteArray.writeUnsignedInt","snow/platform/native/utils/ByteArray.hx",586,0xdcd92e53)
		HX_STACK_THIS(this)
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(586)
		{
			HX_STACK_LINE(586)
			int len = ((this->position + (int)3) + (int)1);		HX_STACK_VAR(len,"len");
			HX_STACK_LINE(586)
			if (((this->b->length < len))){
				HX_STACK_LINE(586)
				this->b->__SetSize(len);
			}
			HX_STACK_LINE(586)
			if (((this->length < len))){
				HX_STACK_LINE(586)
				this->length = len;
			}
		}
		HX_STACK_LINE(586)
		if ((this->bigEndian)){
			HX_STACK_LINE(586)
			{
				HX_STACK_LINE(586)
				int _g = (this->position)++;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(586)
				this->b->__unsafe_set(_g,(int(value) >> int((int)24)));
			}
			HX_STACK_LINE(586)
			{
				HX_STACK_LINE(586)
				int _g1 = (this->position)++;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(586)
				this->b->__unsafe_set(_g1,(int(value) >> int((int)16)));
			}
			HX_STACK_LINE(586)
			{
				HX_STACK_LINE(586)
				int _g2 = (this->position)++;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(586)
				this->b->__unsafe_set(_g2,(int(value) >> int((int)8)));
			}
			HX_STACK_LINE(586)
			{
				HX_STACK_LINE(586)
				int _g3 = (this->position)++;		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(586)
				this->b->__unsafe_set(_g3,value);
			}
		}
		else{
			HX_STACK_LINE(586)
			{
				HX_STACK_LINE(586)
				int _g4 = (this->position)++;		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(586)
				this->b->__unsafe_set(_g4,value);
			}
			HX_STACK_LINE(586)
			{
				HX_STACK_LINE(586)
				int _g5 = (this->position)++;		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(586)
				this->b->__unsafe_set(_g5,(int(value) >> int((int)8)));
			}
			HX_STACK_LINE(586)
			{
				HX_STACK_LINE(586)
				int _g6 = (this->position)++;		HX_STACK_VAR(_g6,"_g6");
				HX_STACK_LINE(586)
				this->b->__unsafe_set(_g6,(int(value) >> int((int)16)));
			}
			HX_STACK_LINE(586)
			{
				HX_STACK_LINE(586)
				int _g7 = (this->position)++;		HX_STACK_VAR(_g7,"_g7");
				HX_STACK_LINE(586)
				this->b->__unsafe_set(_g7,(int(value) >> int((int)24)));
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArray_obj,writeUnsignedInt,(void))

Void ByteArray_obj::writeUTF( ::String s){
{
		HX_STACK_FRAME("snow.platform.native.utils.ByteArray","writeUTF",0xad02a5a9,"snow.platform.native.utils.ByteArray.writeUTF","snow/platform/native/utils/ByteArray.hx",590,0xdcd92e53)
		HX_STACK_THIS(this)
		HX_STACK_ARG(s,"s")
		HX_STACK_LINE(595)
		::haxe::io::Bytes bytes = ::haxe::io::Bytes_obj::ofString(s);		HX_STACK_VAR(bytes,"bytes");
		HX_STACK_LINE(598)
		{
			HX_STACK_LINE(598)
			int value = bytes->length;		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(598)
			{
				HX_STACK_LINE(598)
				int len = ((this->position + (int)1) + (int)1);		HX_STACK_VAR(len,"len");
				HX_STACK_LINE(598)
				if (((this->b->length < len))){
					HX_STACK_LINE(598)
					this->b->__SetSize(len);
				}
				HX_STACK_LINE(598)
				if (((this->length < len))){
					HX_STACK_LINE(598)
					this->length = len;
				}
			}
			HX_STACK_LINE(598)
			if ((this->bigEndian)){
				HX_STACK_LINE(598)
				{
					HX_STACK_LINE(598)
					int _g = (this->position)++;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(598)
					this->b->__unsafe_set(_g,(int(value) >> int((int)8)));
				}
				HX_STACK_LINE(598)
				{
					HX_STACK_LINE(598)
					int _g1 = (this->position)++;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(598)
					this->b->__unsafe_set(_g1,value);
				}
			}
			else{
				HX_STACK_LINE(598)
				{
					HX_STACK_LINE(598)
					int _g2 = (this->position)++;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(598)
					this->b->__unsafe_set(_g2,value);
				}
				HX_STACK_LINE(598)
				{
					HX_STACK_LINE(598)
					int _g3 = (this->position)++;		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(598)
					this->b->__unsafe_set(_g3,(int(value) >> int((int)8)));
				}
			}
		}
		HX_STACK_LINE(599)
		{
			HX_STACK_LINE(599)
			int inOffset = (int)0;		HX_STACK_VAR(inOffset,"inOffset");
			HX_STACK_LINE(599)
			int inLength = (int)0;		HX_STACK_VAR(inLength,"inLength");
			HX_STACK_LINE(599)
			if (((inLength == (int)0))){
				HX_STACK_LINE(599)
				inLength = (bytes->length - inOffset);
			}
			HX_STACK_LINE(599)
			{
				HX_STACK_LINE(599)
				int len = (((this->position + inLength) - (int)1) + (int)1);		HX_STACK_VAR(len,"len");
				HX_STACK_LINE(599)
				if (((this->b->length < len))){
					HX_STACK_LINE(599)
					this->b->__SetSize(len);
				}
				HX_STACK_LINE(599)
				if (((this->length < len))){
					HX_STACK_LINE(599)
					this->length = len;
				}
			}
			HX_STACK_LINE(599)
			int opos = this->position;		HX_STACK_VAR(opos,"opos");
			HX_STACK_LINE(599)
			hx::AddEq(this->position,inLength);
			HX_STACK_LINE(599)
			this->blit(opos,bytes,inOffset,inLength);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArray_obj,writeUTF,(void))

Void ByteArray_obj::writeUTFBytes( ::String s){
{
		HX_STACK_FRAME("snow.platform.native.utils.ByteArray","writeUTFBytes",0xb15cae02,"snow.platform.native.utils.ByteArray.writeUTFBytes","snow/platform/native/utils/ByteArray.hx",603,0xdcd92e53)
		HX_STACK_THIS(this)
		HX_STACK_ARG(s,"s")
		HX_STACK_LINE(608)
		::haxe::io::Bytes bytes = ::haxe::io::Bytes_obj::ofString(s);		HX_STACK_VAR(bytes,"bytes");
		HX_STACK_LINE(611)
		{
			HX_STACK_LINE(611)
			int inOffset = (int)0;		HX_STACK_VAR(inOffset,"inOffset");
			HX_STACK_LINE(611)
			int inLength = (int)0;		HX_STACK_VAR(inLength,"inLength");
			HX_STACK_LINE(611)
			if (((inLength == (int)0))){
				HX_STACK_LINE(611)
				inLength = (bytes->length - inOffset);
			}
			HX_STACK_LINE(611)
			{
				HX_STACK_LINE(611)
				int len = (((this->position + inLength) - (int)1) + (int)1);		HX_STACK_VAR(len,"len");
				HX_STACK_LINE(611)
				if (((this->b->length < len))){
					HX_STACK_LINE(611)
					this->b->__SetSize(len);
				}
				HX_STACK_LINE(611)
				if (((this->length < len))){
					HX_STACK_LINE(611)
					this->length = len;
				}
			}
			HX_STACK_LINE(611)
			int opos = this->position;		HX_STACK_VAR(opos,"opos");
			HX_STACK_LINE(611)
			hx::AddEq(this->position,inLength);
			HX_STACK_LINE(611)
			this->blit(opos,bytes,inOffset,inLength);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArray_obj,writeUTFBytes,(void))

Void ByteArray_obj::writeFile( ::String inString){
{
		HX_STACK_FRAME("snow.platform.native.utils.ByteArray","writeFile",0xab742bba,"snow.platform.native.utils.ByteArray.writeFile","snow/platform/native/utils/ByteArray.hx",634,0xdcd92e53)
		HX_STACK_THIS(this)
		HX_STACK_ARG(inString,"inString")
		HX_STACK_LINE(634)
		::snow::platform::native::utils::ByteArray_obj::snow_byte_array_overwrite_file(inString,hx::ObjectPtr<OBJ_>(this));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArray_obj,writeFile,(void))

Void ByteArray_obj::ensureElem( int inSize,bool inUpdateLength){
{
		HX_STACK_FRAME("snow.platform.native.utils.ByteArray","ensureElem",0xe301efce,"snow.platform.native.utils.ByteArray.ensureElem","snow/platform/native/utils/ByteArray.hx",678,0xdcd92e53)
		HX_STACK_THIS(this)
		HX_STACK_ARG(inSize,"inSize")
		HX_STACK_ARG(inUpdateLength,"inUpdateLength")
		HX_STACK_LINE(680)
		int len = (inSize + (int)1);		HX_STACK_VAR(len,"len");
		HX_STACK_LINE(693)
		if (((this->b->length < len))){
			HX_STACK_LINE(694)
			this->b->__SetSize(len);
		}
		HX_STACK_LINE(699)
		if (((bool(inUpdateLength) && bool((this->length < len))))){
			HX_STACK_LINE(700)
			this->length = len;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(ByteArray_obj,ensureElem,(void))

Void ByteArray_obj::internal_from_bytes( ::haxe::io::Bytes inBytes){
{
		HX_STACK_FRAME("snow.platform.native.utils.ByteArray","internal_from_bytes",0xf7433317,"snow.platform.native.utils.ByteArray.internal_from_bytes","snow/platform/native/utils/ByteArray.hx",705,0xdcd92e53)
		HX_STACK_THIS(this)
		HX_STACK_ARG(inBytes,"inBytes")
		HX_STACK_LINE(707)
		this->b = inBytes->b;
		HX_STACK_LINE(708)
		this->length = inBytes->length;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArray_obj,internal_from_bytes,(void))

int ByteArray_obj::ThrowEOFi( ){
	HX_STACK_FRAME("snow.platform.native.utils.ByteArray","ThrowEOFi",0x6b6c1912,"snow.platform.native.utils.ByteArray.ThrowEOFi","snow/platform/native/utils/ByteArray.hx",719,0xdcd92e53)
	HX_STACK_THIS(this)
	HX_STACK_LINE(719)
	HX_STACK_DO_THROW(HX_CSTRING("/ ByteArray / EOFError"));
	HX_STACK_LINE(719)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArray_obj,ThrowEOFi,return )

int ByteArray_obj::get_bytesAvailable( ){
	HX_STACK_FRAME("snow.platform.native.utils.ByteArray","get_bytesAvailable",0x8ff53408,"snow.platform.native.utils.ByteArray.get_bytesAvailable","snow/platform/native/utils/ByteArray.hx",730,0xdcd92e53)
	HX_STACK_THIS(this)
	HX_STACK_LINE(730)
	return (this->length - this->position);
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArray_obj,get_bytesAvailable,return )

int ByteArray_obj::get_byteLength( ){
	HX_STACK_FRAME("snow.platform.native.utils.ByteArray","get_byteLength",0x1b2e2938,"snow.platform.native.utils.ByteArray.get_byteLength","snow/platform/native/utils/ByteArray.hx",734,0xdcd92e53)
	HX_STACK_THIS(this)
	HX_STACK_LINE(734)
	return this->length;
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArray_obj,get_byteLength,return )

::String ByteArray_obj::get_endian( ){
	HX_STACK_FRAME("snow.platform.native.utils.ByteArray","get_endian",0xafe746c5,"snow.platform.native.utils.ByteArray.get_endian","snow/platform/native/utils/ByteArray.hx",738,0xdcd92e53)
	HX_STACK_THIS(this)
	HX_STACK_LINE(738)
	if ((this->bigEndian)){
		HX_STACK_LINE(738)
		return HX_CSTRING("bigEndian");
	}
	else{
		HX_STACK_LINE(738)
		return HX_CSTRING("littleEndian");
	}
	HX_STACK_LINE(738)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArray_obj,get_endian,return )

::String ByteArray_obj::set_endian( ::String s){
	HX_STACK_FRAME("snow.platform.native.utils.ByteArray","set_endian",0xb364e539,"snow.platform.native.utils.ByteArray.set_endian","snow/platform/native/utils/ByteArray.hx",741,0xdcd92e53)
	HX_STACK_THIS(this)
	HX_STACK_ARG(s,"s")
	HX_STACK_LINE(743)
	this->bigEndian = (s == HX_CSTRING("bigEndian"));
	HX_STACK_LINE(745)
	return s;
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArray_obj,set_endian,return )

::snow::platform::native::utils::ByteArray ByteArray_obj::fromBytes( ::haxe::io::Bytes inBytes){
	HX_STACK_FRAME("snow.platform.native.utils.ByteArray","fromBytes",0xd1255b60,"snow.platform.native.utils.ByteArray.fromBytes","snow/platform/native/utils/ByteArray.hx",206,0xdcd92e53)
	HX_STACK_ARG(inBytes,"inBytes")
	HX_STACK_LINE(208)
	::snow::platform::native::utils::ByteArray result = ::snow::platform::native::utils::ByteArray_obj::__new((int)-1);		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(210)
	{
		HX_STACK_LINE(210)
		result->b = inBytes->b;
		HX_STACK_LINE(210)
		result->length = inBytes->length;
	}
	HX_STACK_LINE(212)
	return result;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ByteArray_obj,fromBytes,return )

::snow::platform::native::utils::ByteArray ByteArray_obj::readFile( ::String inString,Dynamic __o_async,Dynamic onload){
Dynamic async = __o_async.Default(false);
	HX_STACK_FRAME("snow.platform.native.utils.ByteArray","readFile",0xf4bcdd13,"snow.platform.native.utils.ByteArray.readFile","snow/platform/native/utils/ByteArray.hx",620,0xdcd92e53)
	HX_STACK_ARG(inString,"inString")
	HX_STACK_ARG(async,"async")
	HX_STACK_ARG(onload,"onload")
{
		HX_STACK_LINE(622)
		::snow::platform::native::utils::ByteArray array = ::snow::platform::native::utils::ByteArray_obj::snow_byte_array_read_file(inString);		HX_STACK_VAR(array,"array");
		HX_STACK_LINE(624)
		if (((onload != null()))){
			HX_STACK_LINE(625)
			onload(array).Cast< Void >();
		}
		HX_STACK_LINE(628)
		return array;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(ByteArray_obj,readFile,return )

::String ByteArray_obj::_BIG_ENDIAN;

::String ByteArray_obj::_LITTLE_ENDIAN;

Dynamic ByteArray_obj::std_double_bytes;

Dynamic ByteArray_obj::std_double_of_bytes;

Dynamic ByteArray_obj::std_float_bytes;

Dynamic ByteArray_obj::std_float_of_bytes;

Dynamic ByteArray_obj::snow_lzma_encode;

Dynamic ByteArray_obj::snow_lzma_decode;

Dynamic ByteArray_obj::snow_byte_array_overwrite_file;

Dynamic ByteArray_obj::snow_byte_array_read_file;


ByteArray_obj::ByteArray_obj()
{
}

Dynamic ByteArray_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"__get") ) { return __get_dyn(); }
		if (HX_FIELD_EQ(inName,"__set") ) { return __set_dyn(); }
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		if (HX_FIELD_EQ(inName,"slice") ) { return slice_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"endian") ) { return get_endian(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"deflate") ) { return deflate_dyn(); }
		if (HX_FIELD_EQ(inName,"inflate") ) { return inflate_dyn(); }
		if (HX_FIELD_EQ(inName,"readInt") ) { return readInt_dyn(); }
		if (HX_FIELD_EQ(inName,"readUTF") ) { return readUTF_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"readFile") ) { return readFile_dyn(); }
		if (HX_FIELD_EQ(inName,"position") ) { return position; }
		if (HX_FIELD_EQ(inName,"asString") ) { return asString_dyn(); }
		if (HX_FIELD_EQ(inName,"compress") ) { return compress_dyn(); }
		if (HX_FIELD_EQ(inName,"getStart") ) { return getStart_dyn(); }
		if (HX_FIELD_EQ(inName,"readByte") ) { return readByte_dyn(); }
		if (HX_FIELD_EQ(inName,"writeInt") ) { return writeInt_dyn(); }
		if (HX_FIELD_EQ(inName,"writeUTF") ) { return writeUTF_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"fromBytes") ) { return fromBytes_dyn(); }
		if (HX_FIELD_EQ(inName,"bigEndian") ) { return bigEndian; }
		if (HX_FIELD_EQ(inName,"checkData") ) { return checkData_dyn(); }
		if (HX_FIELD_EQ(inName,"getLength") ) { return getLength_dyn(); }
		if (HX_FIELD_EQ(inName,"setLength") ) { return setLength_dyn(); }
		if (HX_FIELD_EQ(inName,"readBytes") ) { return readBytes_dyn(); }
		if (HX_FIELD_EQ(inName,"readFloat") ) { return readFloat_dyn(); }
		if (HX_FIELD_EQ(inName,"readShort") ) { return readShort_dyn(); }
		if (HX_FIELD_EQ(inName,"writeByte") ) { return writeByte_dyn(); }
		if (HX_FIELD_EQ(inName,"writeFile") ) { return writeFile_dyn(); }
		if (HX_FIELD_EQ(inName,"ThrowEOFi") ) { return ThrowEOFi_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"byteLength") ) { return inCallProp ? get_byteLength() : byteLength; }
		if (HX_FIELD_EQ(inName,"uncompress") ) { return uncompress_dyn(); }
		if (HX_FIELD_EQ(inName,"readDouble") ) { return readDouble_dyn(); }
		if (HX_FIELD_EQ(inName,"writeBytes") ) { return writeBytes_dyn(); }
		if (HX_FIELD_EQ(inName,"writeFloat") ) { return writeFloat_dyn(); }
		if (HX_FIELD_EQ(inName,"writeShort") ) { return writeShort_dyn(); }
		if (HX_FIELD_EQ(inName,"ensureElem") ) { return ensureElem_dyn(); }
		if (HX_FIELD_EQ(inName,"get_endian") ) { return get_endian_dyn(); }
		if (HX_FIELD_EQ(inName,"set_endian") ) { return set_endian_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"readBoolean") ) { return readBoolean_dyn(); }
		if (HX_FIELD_EQ(inName,"writeDouble") ) { return writeDouble_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"readUTFBytes") ) { return readUTFBytes_dyn(); }
		if (HX_FIELD_EQ(inName,"writeBoolean") ) { return writeBoolean_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"getByteBuffer") ) { return getByteBuffer_dyn(); }
		if (HX_FIELD_EQ(inName,"readMultiByte") ) { return readMultiByte_dyn(); }
		if (HX_FIELD_EQ(inName,"write_uncheck") ) { return write_uncheck_dyn(); }
		if (HX_FIELD_EQ(inName,"writeUTFBytes") ) { return writeUTFBytes_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"bytesAvailable") ) { return inCallProp ? get_bytesAvailable() : bytesAvailable; }
		if (HX_FIELD_EQ(inName,"get_byteLength") ) { return get_byteLength_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"std_float_bytes") ) { return std_float_bytes; }
		if (HX_FIELD_EQ(inName,"readUnsignedInt") ) { return readUnsignedInt_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"std_double_bytes") ) { return std_double_bytes; }
		if (HX_FIELD_EQ(inName,"snow_lzma_encode") ) { return snow_lzma_encode; }
		if (HX_FIELD_EQ(inName,"snow_lzma_decode") ) { return snow_lzma_decode; }
		if (HX_FIELD_EQ(inName,"readUnsignedByte") ) { return readUnsignedByte_dyn(); }
		if (HX_FIELD_EQ(inName,"writeUnsignedInt") ) { return writeUnsignedInt_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"readUnsignedShort") ) { return readUnsignedShort_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"std_float_of_bytes") ) { return std_float_of_bytes; }
		if (HX_FIELD_EQ(inName,"get_bytesAvailable") ) { return get_bytesAvailable_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"std_double_of_bytes") ) { return std_double_of_bytes; }
		if (HX_FIELD_EQ(inName,"internal_from_bytes") ) { return internal_from_bytes_dyn(); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"snow_byte_array_read_file") ) { return snow_byte_array_read_file; }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"snow_byte_array_overwrite_file") ) { return snow_byte_array_overwrite_file; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ByteArray_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"endian") ) { return set_endian(inValue); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"position") ) { position=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"bigEndian") ) { bigEndian=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"byteLength") ) { byteLength=inValue.Cast< int >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"bytesAvailable") ) { bytesAvailable=inValue.Cast< int >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"std_float_bytes") ) { std_float_bytes=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"std_double_bytes") ) { std_double_bytes=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"snow_lzma_encode") ) { snow_lzma_encode=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"snow_lzma_decode") ) { snow_lzma_decode=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"std_float_of_bytes") ) { std_float_of_bytes=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"std_double_of_bytes") ) { std_double_of_bytes=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"snow_byte_array_read_file") ) { snow_byte_array_read_file=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"snow_byte_array_overwrite_file") ) { snow_byte_array_overwrite_file=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ByteArray_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("bigEndian"));
	outFields->push(HX_CSTRING("bytesAvailable"));
	outFields->push(HX_CSTRING("endian"));
	outFields->push(HX_CSTRING("position"));
	outFields->push(HX_CSTRING("byteLength"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("fromBytes"),
	HX_CSTRING("readFile"),
	HX_CSTRING("BIG_ENDIAN"),
	HX_CSTRING("LITTLE_ENDIAN"),
	HX_CSTRING("std_double_bytes"),
	HX_CSTRING("std_double_of_bytes"),
	HX_CSTRING("std_float_bytes"),
	HX_CSTRING("std_float_of_bytes"),
	HX_CSTRING("snow_lzma_encode"),
	HX_CSTRING("snow_lzma_decode"),
	HX_CSTRING("snow_byte_array_overwrite_file"),
	HX_CSTRING("snow_byte_array_read_file"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(ByteArray_obj,bigEndian),HX_CSTRING("bigEndian")},
	{hx::fsInt,(int)offsetof(ByteArray_obj,bytesAvailable),HX_CSTRING("bytesAvailable")},
	{hx::fsInt,(int)offsetof(ByteArray_obj,position),HX_CSTRING("position")},
	{hx::fsInt,(int)offsetof(ByteArray_obj,byteLength),HX_CSTRING("byteLength")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("bigEndian"),
	HX_CSTRING("bytesAvailable"),
	HX_CSTRING("position"),
	HX_CSTRING("byteLength"),
	HX_CSTRING("__get"),
	HX_CSTRING("__set"),
	HX_CSTRING("asString"),
	HX_CSTRING("checkData"),
	HX_CSTRING("clear"),
	HX_CSTRING("compress"),
	HX_CSTRING("uncompress"),
	HX_CSTRING("deflate"),
	HX_CSTRING("inflate"),
	HX_CSTRING("getLength"),
	HX_CSTRING("getByteBuffer"),
	HX_CSTRING("getStart"),
	HX_CSTRING("setLength"),
	HX_CSTRING("slice"),
	HX_CSTRING("readBoolean"),
	HX_CSTRING("readByte"),
	HX_CSTRING("readBytes"),
	HX_CSTRING("readDouble"),
	HX_CSTRING("readFloat"),
	HX_CSTRING("readInt"),
	HX_CSTRING("readMultiByte"),
	HX_CSTRING("readShort"),
	HX_CSTRING("readUnsignedByte"),
	HX_CSTRING("readUnsignedInt"),
	HX_CSTRING("readUnsignedShort"),
	HX_CSTRING("readUTF"),
	HX_CSTRING("readUTFBytes"),
	HX_CSTRING("write_uncheck"),
	HX_CSTRING("writeBoolean"),
	HX_CSTRING("writeByte"),
	HX_CSTRING("writeBytes"),
	HX_CSTRING("writeDouble"),
	HX_CSTRING("writeFloat"),
	HX_CSTRING("writeInt"),
	HX_CSTRING("writeShort"),
	HX_CSTRING("writeUnsignedInt"),
	HX_CSTRING("writeUTF"),
	HX_CSTRING("writeUTFBytes"),
	HX_CSTRING("writeFile"),
	HX_CSTRING("ensureElem"),
	HX_CSTRING("internal_from_bytes"),
	HX_CSTRING("ThrowEOFi"),
	HX_CSTRING("get_bytesAvailable"),
	HX_CSTRING("get_byteLength"),
	HX_CSTRING("get_endian"),
	HX_CSTRING("set_endian"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ByteArray_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ByteArray_obj::_BIG_ENDIAN,"BIG_ENDIAN");
	HX_MARK_MEMBER_NAME(ByteArray_obj::_LITTLE_ENDIAN,"LITTLE_ENDIAN");
	HX_MARK_MEMBER_NAME(ByteArray_obj::std_double_bytes,"std_double_bytes");
	HX_MARK_MEMBER_NAME(ByteArray_obj::std_double_of_bytes,"std_double_of_bytes");
	HX_MARK_MEMBER_NAME(ByteArray_obj::std_float_bytes,"std_float_bytes");
	HX_MARK_MEMBER_NAME(ByteArray_obj::std_float_of_bytes,"std_float_of_bytes");
	HX_MARK_MEMBER_NAME(ByteArray_obj::snow_lzma_encode,"snow_lzma_encode");
	HX_MARK_MEMBER_NAME(ByteArray_obj::snow_lzma_decode,"snow_lzma_decode");
	HX_MARK_MEMBER_NAME(ByteArray_obj::snow_byte_array_overwrite_file,"snow_byte_array_overwrite_file");
	HX_MARK_MEMBER_NAME(ByteArray_obj::snow_byte_array_read_file,"snow_byte_array_read_file");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ByteArray_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ByteArray_obj::_BIG_ENDIAN,"BIG_ENDIAN");
	HX_VISIT_MEMBER_NAME(ByteArray_obj::_LITTLE_ENDIAN,"LITTLE_ENDIAN");
	HX_VISIT_MEMBER_NAME(ByteArray_obj::std_double_bytes,"std_double_bytes");
	HX_VISIT_MEMBER_NAME(ByteArray_obj::std_double_of_bytes,"std_double_of_bytes");
	HX_VISIT_MEMBER_NAME(ByteArray_obj::std_float_bytes,"std_float_bytes");
	HX_VISIT_MEMBER_NAME(ByteArray_obj::std_float_of_bytes,"std_float_of_bytes");
	HX_VISIT_MEMBER_NAME(ByteArray_obj::snow_lzma_encode,"snow_lzma_encode");
	HX_VISIT_MEMBER_NAME(ByteArray_obj::snow_lzma_decode,"snow_lzma_decode");
	HX_VISIT_MEMBER_NAME(ByteArray_obj::snow_byte_array_overwrite_file,"snow_byte_array_overwrite_file");
	HX_VISIT_MEMBER_NAME(ByteArray_obj::snow_byte_array_read_file,"snow_byte_array_read_file");
};

#endif

Class ByteArray_obj::__mClass;

void ByteArray_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("snow.platform.native.utils.ByteArray"), hx::TCanCast< ByteArray_obj> ,sStaticFields,sMemberFields,
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

void ByteArray_obj::__boot()
{
	_BIG_ENDIAN= HX_CSTRING("bigEndian");
	_LITTLE_ENDIAN= HX_CSTRING("littleEndian");
	std_double_bytes= ::snow::utils::Libs_obj::load(HX_CSTRING("std"),HX_CSTRING("double_bytes"),(int)2);
	std_double_of_bytes= ::snow::utils::Libs_obj::load(HX_CSTRING("std"),HX_CSTRING("double_of_bytes"),(int)2);
	std_float_bytes= ::snow::utils::Libs_obj::load(HX_CSTRING("std"),HX_CSTRING("float_bytes"),(int)2);
	std_float_of_bytes= ::snow::utils::Libs_obj::load(HX_CSTRING("std"),HX_CSTRING("float_of_bytes"),(int)2);
	snow_lzma_encode= ::snow::utils::Libs_obj::load(HX_CSTRING("snow"),HX_CSTRING("snow_lzma_encode"),(int)1);
	snow_lzma_decode= ::snow::utils::Libs_obj::load(HX_CSTRING("snow"),HX_CSTRING("snow_lzma_decode"),(int)1);
	snow_byte_array_overwrite_file= ::snow::utils::Libs_obj::load(HX_CSTRING("snow"),HX_CSTRING("snow_byte_array_overwrite_file"),(int)2);
	snow_byte_array_read_file= ::snow::utils::Libs_obj::load(HX_CSTRING("snow"),HX_CSTRING("snow_byte_array_read_file"),(int)1);
}

} // end namespace snow
} // end namespace platform
} // end namespace native
} // end namespace utils
