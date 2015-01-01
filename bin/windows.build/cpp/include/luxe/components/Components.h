#ifndef INCLUDED_luxe_components_Components
#define INCLUDED_luxe_components_Components

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS1(luxe,Emitter)
HX_DECLARE_CLASS1(luxe,Entity)
HX_DECLARE_CLASS1(luxe,Objects)
HX_DECLARE_CLASS2(luxe,components,Components)
namespace luxe{
namespace components{


class HXCPP_CLASS_ATTRIBUTES  Components_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Components_obj OBJ_;
		Components_obj();
		Void __construct(::luxe::Entity _entity);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Components_obj > __new(::luxe::Entity _entity);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Components_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Components"); }

		::haxe::ds::StringMap components;
		::luxe::Entity entity;
		virtual Dynamic add( Dynamic _component);
		Dynamic add_dyn();

		virtual bool remove( ::String _name);
		Dynamic remove_dyn();

		virtual Dynamic get( ::String _name,Dynamic in_children);
		Dynamic get_dyn();

		virtual Dynamic get_any( ::String _name,Dynamic in_children,Dynamic first_only);
		Dynamic get_any_dyn();

		virtual bool has( ::String _name);
		Dynamic has_dyn();

};

} // end namespace luxe
} // end namespace components

#endif /* INCLUDED_luxe_components_Components */ 
