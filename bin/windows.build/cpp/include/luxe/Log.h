#ifndef INCLUDED_luxe_Log
#define INCLUDED_luxe_Log

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(luxe,Log)
namespace luxe{


class HXCPP_CLASS_ATTRIBUTES  Log_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Log_obj OBJ_;
		Log_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Log_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Log_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("Log"); }

		static int _level;
		static Array< ::String > _filter;
		static Array< ::String > _exclude;
		static int _log_width;
		static ::String _get_spacing( ::String _file);
		static Dynamic _get_spacing_dyn();

};

} // end namespace luxe

#endif /* INCLUDED_luxe_Log */ 
