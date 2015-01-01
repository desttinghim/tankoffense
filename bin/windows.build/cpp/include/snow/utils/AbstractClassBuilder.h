#ifndef INCLUDED_snow_utils_AbstractClassBuilder
#define INCLUDED_snow_utils_AbstractClassBuilder

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(snow,utils,AbstractClassBuilder)
namespace snow{
namespace utils{


class HXCPP_CLASS_ATTRIBUTES  AbstractClassBuilder_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef AbstractClassBuilder_obj OBJ_;
		AbstractClassBuilder_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< AbstractClassBuilder_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~AbstractClassBuilder_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("AbstractClassBuilder"); }

};

} // end namespace snow
} // end namespace utils

#endif /* INCLUDED_snow_utils_AbstractClassBuilder */ 
