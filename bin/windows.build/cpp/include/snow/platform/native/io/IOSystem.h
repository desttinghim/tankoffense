#ifndef INCLUDED_snow_platform_native_io_IOSystem
#define INCLUDED_snow_platform_native_io_IOSystem

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <snow/io/IOSystemBinding.h>
HX_DECLARE_CLASS1(snow,Snow)
HX_DECLARE_CLASS2(snow,io,IO)
HX_DECLARE_CLASS2(snow,io,IOSystemBinding)
HX_DECLARE_CLASS4(snow,platform,native,io,IOSystem)
HX_DECLARE_CLASS2(snow,utils,AbstractClass)
namespace snow{
namespace platform{
namespace native{
namespace io{


class HXCPP_CLASS_ATTRIBUTES  IOSystem_obj : public ::snow::io::IOSystemBinding_obj{
	public:
		typedef ::snow::io::IOSystemBinding_obj super;
		typedef IOSystem_obj OBJ_;
		IOSystem_obj();
		Void __construct(::snow::io::IO _manager,::snow::Snow _lib);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< IOSystem_obj > __new(::snow::io::IO _manager,::snow::Snow _lib);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~IOSystem_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("IOSystem"); }

		virtual Void url_open( ::String _url);

		virtual Void watch_add( ::String _path);

		virtual Void watch_remove( ::String _path);

		virtual ::String dialog_open( ::String _title,Dynamic _filters);

		virtual ::String dialog_save( ::String _title,Dynamic _filter);

		virtual ::String dialog_folder( ::String _title);

		virtual Void init( );

		virtual Void process( );

		virtual Void destroy( );

		virtual Void on_event( Dynamic _event);

		static bool isAbsolute( ::String path);
		static Dynamic isAbsolute_dyn();

		static ::String resolve( ::String _path);
		static Dynamic resolve_dyn();

		static Dynamic snow_io_url_open;
		static Dynamic &snow_io_url_open_dyn() { return snow_io_url_open;}
		static Dynamic snow_io_add_watch;
		static Dynamic &snow_io_add_watch_dyn() { return snow_io_add_watch;}
		static Dynamic snow_io_remove_watch;
		static Dynamic &snow_io_remove_watch_dyn() { return snow_io_remove_watch;}
		static Dynamic snow_io_dialog_open;
		static Dynamic &snow_io_dialog_open_dyn() { return snow_io_dialog_open;}
		static Dynamic snow_io_dialog_save;
		static Dynamic &snow_io_dialog_save_dyn() { return snow_io_dialog_save;}
		static Dynamic snow_io_dialog_folder;
		static Dynamic &snow_io_dialog_folder_dyn() { return snow_io_dialog_folder;}
};

} // end namespace snow
} // end namespace platform
} // end namespace native
} // end namespace io

#endif /* INCLUDED_snow_platform_native_io_IOSystem */ 
