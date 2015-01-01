#ifndef INCLUDED_luxe_debug__ProfilerDebugView_ProfilerValue
#define INCLUDED_luxe_debug__ProfilerDebugView_ProfilerValue

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(luxe,debug,_ProfilerDebugView,ProfilerBar)
HX_DECLARE_CLASS3(luxe,debug,_ProfilerDebugView,ProfilerValue)
namespace luxe{
namespace debug{
namespace _ProfilerDebugView{


class HXCPP_CLASS_ATTRIBUTES  ProfilerValue_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ProfilerValue_obj OBJ_;
		ProfilerValue_obj();
		Void __construct(::String _name,::luxe::debug::_ProfilerDebugView::ProfilerBar _bar);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< ProfilerValue_obj > __new(::String _name,::luxe::debug::_ProfilerDebugView::ProfilerBar _bar);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ProfilerValue_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("ProfilerValue"); }

		Array< ::Dynamic > offsets;
		::luxe::debug::_ProfilerDebugView::ProfilerBar bar;
		::String name;
		Float start;
		Array< Float > history;
		int avg;
		bool hidden;
		int count;
		Float accum;
		virtual Void set( );
		Dynamic set_dyn();

};

} // end namespace luxe
} // end namespace debug
} // end namespace _ProfilerDebugView

#endif /* INCLUDED_luxe_debug__ProfilerDebugView_ProfilerValue */ 
