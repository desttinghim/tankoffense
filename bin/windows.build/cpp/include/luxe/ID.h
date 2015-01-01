#ifndef INCLUDED_luxe_ID
#define INCLUDED_luxe_ID

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(luxe,ID)
namespace luxe{


class HXCPP_CLASS_ATTRIBUTES  ID_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ID_obj OBJ_;
		ID_obj();
		Void __construct(::String __o__name,::String __o__id);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< ID_obj > __new(::String __o__name,::String __o__id);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ID_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("ID"); }

		::String id;
		::String name;
};

} // end namespace luxe

#endif /* INCLUDED_luxe_ID */ 
