#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_snow_platform_native_utils_ByteArray
#include <snow/platform/native/utils/ByteArray.h>
#endif
#ifndef INCLUDED_snow_utils_IDataInput
#include <snow/utils/IDataInput.h>
#endif
#ifndef INCLUDED_snow_utils_IMemoryRange
#include <snow/utils/IMemoryRange.h>
#endif
namespace snow{
namespace utils{

HX_DEFINE_DYNAMIC_FUNC0(IDataInput_obj,readBoolean,return )

HX_DEFINE_DYNAMIC_FUNC0(IDataInput_obj,readByte,return )

HX_DEFINE_DYNAMIC_FUNC3(IDataInput_obj,readBytes,)

HX_DEFINE_DYNAMIC_FUNC0(IDataInput_obj,readDouble,return )

HX_DEFINE_DYNAMIC_FUNC0(IDataInput_obj,readFloat,return )

HX_DEFINE_DYNAMIC_FUNC0(IDataInput_obj,readInt,return )

HX_DEFINE_DYNAMIC_FUNC0(IDataInput_obj,readShort,return )

HX_DEFINE_DYNAMIC_FUNC0(IDataInput_obj,readUnsignedByte,return )

HX_DEFINE_DYNAMIC_FUNC0(IDataInput_obj,readUnsignedInt,return )

HX_DEFINE_DYNAMIC_FUNC0(IDataInput_obj,readUnsignedShort,return )

HX_DEFINE_DYNAMIC_FUNC0(IDataInput_obj,readUTF,return )

HX_DEFINE_DYNAMIC_FUNC1(IDataInput_obj,readUTFBytes,return )

HX_DEFINE_DYNAMIC_FUNC0(IDataInput_obj,get_bytesAvailable,return )

HX_DEFINE_DYNAMIC_FUNC0(IDataInput_obj,get_endian,return )

HX_DEFINE_DYNAMIC_FUNC1(IDataInput_obj,set_endian,return )


static ::String sMemberFields[] = {
	HX_CSTRING("bytesAvailable"),
	HX_CSTRING("readBoolean"),
	HX_CSTRING("readByte"),
	HX_CSTRING("readBytes"),
	HX_CSTRING("readDouble"),
	HX_CSTRING("readFloat"),
	HX_CSTRING("readInt"),
	HX_CSTRING("readShort"),
	HX_CSTRING("readUnsignedByte"),
	HX_CSTRING("readUnsignedInt"),
	HX_CSTRING("readUnsignedShort"),
	HX_CSTRING("readUTF"),
	HX_CSTRING("readUTFBytes"),
	HX_CSTRING("get_bytesAvailable"),
	HX_CSTRING("get_endian"),
	HX_CSTRING("set_endian"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(IDataInput_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(IDataInput_obj::__mClass,"__mClass");
};

#endif

Class IDataInput_obj::__mClass;

void IDataInput_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("snow.utils.IDataInput"), hx::TCanCast< IDataInput_obj> ,0,sMemberFields,
	0, 0,
	&super::__SGetClass(), 0, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatics
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void IDataInput_obj::__boot()
{
}

} // end namespace snow
} // end namespace utils
