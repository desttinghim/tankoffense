#ifndef INCLUDED_luxe_tween_actuators_PropertyPathDetails
#define INCLUDED_luxe_tween_actuators_PropertyPathDetails

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <luxe/tween/actuators/PropertyDetails.h>
HX_DECLARE_CLASS2(luxe,tween,IComponentPath)
HX_DECLARE_CLASS3(luxe,tween,actuators,PropertyDetails)
HX_DECLARE_CLASS3(luxe,tween,actuators,PropertyPathDetails)
namespace luxe{
namespace tween{
namespace actuators{


class HXCPP_CLASS_ATTRIBUTES  PropertyPathDetails_obj : public ::luxe::tween::actuators::PropertyDetails_obj{
	public:
		typedef ::luxe::tween::actuators::PropertyDetails_obj super;
		typedef PropertyPathDetails_obj OBJ_;
		PropertyPathDetails_obj();
		Void __construct(Dynamic target,::String propertyName,::luxe::tween::IComponentPath path,hx::Null< bool >  __o_isField);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< PropertyPathDetails_obj > __new(Dynamic target,::String propertyName,::luxe::tween::IComponentPath path,hx::Null< bool >  __o_isField);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~PropertyPathDetails_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("PropertyPathDetails"); }

		::luxe::tween::IComponentPath path;
};

} // end namespace luxe
} // end namespace tween
} // end namespace actuators

#endif /* INCLUDED_luxe_tween_actuators_PropertyPathDetails */ 
