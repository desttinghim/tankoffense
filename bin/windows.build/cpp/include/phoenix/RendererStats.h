#ifndef INCLUDED_phoenix_RendererStats
#define INCLUDED_phoenix_RendererStats

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(phoenix,RendererStats)
namespace phoenix{


class HXCPP_CLASS_ATTRIBUTES  RendererStats_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef RendererStats_obj OBJ_;
		RendererStats_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< RendererStats_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~RendererStats_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("RendererStats"); }

		int batchers;
		int geometry_count;
		int dynamic_batched_count;
		int static_batched_count;
		int visible_count;
		int draw_calls;
		int group_count;
		int vert_count;
		virtual Void reset( );
		Dynamic reset_dyn();

		virtual ::String toString( );
		Dynamic toString_dyn();

};

} // end namespace phoenix

#endif /* INCLUDED_phoenix_RendererStats */ 
