#ifndef INCLUDED_luxe_utils_UUID
#define INCLUDED_luxe_utils_UUID

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(StringBuf)
HX_DECLARE_CLASS2(luxe,utils,UUID)
HX_DECLARE_CLASS3(luxe,utils,_UUID,Rule30)
namespace luxe{
namespace utils{


class HXCPP_CLASS_ATTRIBUTES  UUID_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef UUID_obj OBJ_;
		UUID_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< UUID_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~UUID_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("UUID"); }

		static ::luxe::utils::_UUID::Rule30 rule30;
		static ::String hexChars;
		static ::String generate_undashed( );
		static Dynamic generate_undashed_dyn();

		static ::String get( );
		static Dynamic get_dyn();

		static Void hex( ::StringBuf sbuf,int n);
		static Dynamic hex_dyn();

};

} // end namespace luxe
} // end namespace utils

#endif /* INCLUDED_luxe_utils_UUID */ 
