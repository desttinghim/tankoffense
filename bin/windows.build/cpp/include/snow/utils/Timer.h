#ifndef INCLUDED_snow_utils_Timer
#define INCLUDED_snow_utils_Timer

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(snow,utils,Timer)
namespace snow{
namespace utils{


class HXCPP_CLASS_ATTRIBUTES  Timer_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Timer_obj OBJ_;
		Timer_obj();
		Void __construct(Float _time);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Timer_obj > __new(Float _time);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Timer_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Timer"); }

		Float time;
		Float fire_at;
		bool running;
		Dynamic run;
		inline Dynamic &run_dyn() {return run; }

		virtual Void stop( );
		Dynamic stop_dyn();

		static Array< ::Dynamic > running_timers;
		static Dynamic measure( Dynamic f,Dynamic pos);
		static Dynamic measure_dyn();

		static Void update( );
		static Dynamic update_dyn();

		static ::snow::utils::Timer delay( Float _time,Dynamic _f);
		static Dynamic delay_dyn();

		static Float stamp( );
		static Dynamic stamp_dyn();

};

} // end namespace snow
} // end namespace utils

#endif /* INCLUDED_snow_utils_Timer */ 
