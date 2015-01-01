#ifndef INCLUDED_snow_platform_native_utils_Compression
#define INCLUDED_snow_platform_native_utils_Compression

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(snow,platform,native,utils,Compression)
namespace snow{
namespace platform{
namespace native{
namespace utils{


class Compression_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef Compression_obj OBJ_;

	public:
		Compression_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_CSTRING("snow.platform.native.utils.Compression"); }
		::String __ToString() const { return HX_CSTRING("Compression.") + tag; }

		static ::snow::platform::native::utils::Compression DEFLATE;
		static inline ::snow::platform::native::utils::Compression DEFLATE_dyn() { return DEFLATE; }
		static ::snow::platform::native::utils::Compression GZIP;
		static inline ::snow::platform::native::utils::Compression GZIP_dyn() { return GZIP; }
		static ::snow::platform::native::utils::Compression LZMA;
		static inline ::snow::platform::native::utils::Compression LZMA_dyn() { return LZMA; }
		static ::snow::platform::native::utils::Compression ZLIB;
		static inline ::snow::platform::native::utils::Compression ZLIB_dyn() { return ZLIB; }
};

} // end namespace snow
} // end namespace platform
} // end namespace native
} // end namespace utils

#endif /* INCLUDED_snow_platform_native_utils_Compression */ 
