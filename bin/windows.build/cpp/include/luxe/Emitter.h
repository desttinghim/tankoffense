#ifndef INCLUDED_luxe_Emitter
#define INCLUDED_luxe_Emitter

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(IMap)
HX_DECLARE_CLASS0(List)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS1(luxe,Emitter)
namespace luxe{


class HXCPP_CLASS_ATTRIBUTES  Emitter_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Emitter_obj OBJ_;
		Emitter_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Emitter_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Emitter_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Emitter"); }

		::haxe::ds::StringMap bindings;
		::List connected;
		::List _to_remove;
		virtual Void emit( ::String event,Dynamic data,Dynamic pos);
		Dynamic emit_dyn();

		virtual Void on( ::String event,Dynamic handler,Dynamic pos);
		Dynamic on_dyn();

		virtual bool off( ::String event,Dynamic handler,Dynamic pos);
		Dynamic off_dyn();

		virtual Dynamic connections( Dynamic handler);
		Dynamic connections_dyn();

		bool _checking;
		virtual Void _check( );
		Dynamic _check_dyn();

};

} // end namespace luxe

#endif /* INCLUDED_luxe_Emitter */ 
