#ifndef INCLUDED_luxe_Objects
#define INCLUDED_luxe_Objects

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <luxe/Emitter.h>
HX_DECLARE_CLASS1(luxe,Emitter)
HX_DECLARE_CLASS1(luxe,Objects)
namespace luxe{


class HXCPP_CLASS_ATTRIBUTES  Objects_obj : public ::luxe::Emitter_obj{
	public:
		typedef ::luxe::Emitter_obj super;
		typedef Objects_obj OBJ_;
		Objects_obj();
		Void __construct(::String __o__name,::String __o__id);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Objects_obj > __new(::String __o__name,::String __o__id);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Objects_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Objects"); }

		::String id;
		::String name;
};

} // end namespace luxe

#endif /* INCLUDED_luxe_Objects */ 
