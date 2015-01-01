#ifndef INCLUDED_snow_io_IO
#define INCLUDED_snow_io_IO

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(snow,Snow)
HX_DECLARE_CLASS2(snow,io,IO)
HX_DECLARE_CLASS2(snow,io,IOSystemBinding)
HX_DECLARE_CLASS4(snow,platform,native,io,IOSystem)
HX_DECLARE_CLASS2(snow,utils,AbstractClass)
namespace snow{
namespace io{


class HXCPP_CLASS_ATTRIBUTES  IO_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef IO_obj OBJ_;
		IO_obj();
		Void __construct(::snow::Snow _lib);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< IO_obj > __new(::snow::Snow _lib);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~IO_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("IO"); }

		::snow::Snow lib;
		::snow::platform::native::io::IOSystem platform;
		virtual Void url_open( ::String _url);
		Dynamic url_open_dyn();

		virtual Void on_event( Dynamic _event);
		Dynamic on_event_dyn();

		virtual Void update( );
		Dynamic update_dyn();

		virtual Void destroy( );
		Dynamic destroy_dyn();

};

} // end namespace snow
} // end namespace io

#endif /* INCLUDED_snow_io_IO */ 
