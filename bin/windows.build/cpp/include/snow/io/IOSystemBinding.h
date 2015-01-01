#ifndef INCLUDED_snow_io_IOSystemBinding
#define INCLUDED_snow_io_IOSystemBinding

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <snow/utils/AbstractClass.h>
HX_DECLARE_CLASS1(snow,Snow)
HX_DECLARE_CLASS2(snow,io,IO)
HX_DECLARE_CLASS2(snow,io,IOSystemBinding)
HX_DECLARE_CLASS2(snow,utils,AbstractClass)
namespace snow{
namespace io{


class HXCPP_CLASS_ATTRIBUTES  IOSystemBinding_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef IOSystemBinding_obj OBJ_;
		IOSystemBinding_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< IOSystemBinding_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~IOSystemBinding_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		inline operator ::snow::utils::AbstractClass_obj *()
			{ return new ::snow::utils::AbstractClass_delegate_< IOSystemBinding_obj >(this); }
		hx::Object *__ToInterface(const hx::type_info &inType);
		::String __ToString() const { return HX_CSTRING("IOSystemBinding"); }

		::snow::io::IO manager;
		::snow::Snow lib;
		virtual Void init( );
		Dynamic init_dyn();

		virtual Void process( );
		Dynamic process_dyn();

		virtual Void destroy( );
		Dynamic destroy_dyn();

		virtual Void on_event( Dynamic _event);
		Dynamic on_event_dyn();

		virtual Void url_open( ::String _url);
		Dynamic url_open_dyn();

		virtual Void watch_add( ::String _path);
		Dynamic watch_add_dyn();

		virtual Void watch_remove( ::String _path);
		Dynamic watch_remove_dyn();

		virtual ::String dialog_open( ::String _title,Dynamic _filters);
		Dynamic dialog_open_dyn();

		virtual ::String dialog_save( ::String _title,Dynamic _filter);
		Dynamic dialog_save_dyn();

		virtual ::String dialog_folder( ::String _title);
		Dynamic dialog_folder_dyn();

};

} // end namespace snow
} // end namespace io

#endif /* INCLUDED_snow_io_IOSystemBinding */ 
