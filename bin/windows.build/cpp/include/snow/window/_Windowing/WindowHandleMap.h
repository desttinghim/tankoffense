#ifndef INCLUDED_snow_window__Windowing_WindowHandleMap
#define INCLUDED_snow_window__Windowing_WindowHandleMap

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <haxe/ds/BalancedTree.h>
HX_DECLARE_CLASS2(haxe,ds,BalancedTree)
HX_DECLARE_CLASS3(snow,window,_Windowing,WindowHandleMap)
namespace snow{
namespace window{
namespace _Windowing{


class HXCPP_CLASS_ATTRIBUTES  WindowHandleMap_obj : public ::haxe::ds::BalancedTree_obj{
	public:
		typedef ::haxe::ds::BalancedTree_obj super;
		typedef WindowHandleMap_obj OBJ_;
		WindowHandleMap_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< WindowHandleMap_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~WindowHandleMap_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("WindowHandleMap"); }

		virtual int compare( Dynamic _tmp_k1,Dynamic _tmp_k2);

};

} // end namespace snow
} // end namespace window
} // end namespace _Windowing

#endif /* INCLUDED_snow_window__Windowing_WindowHandleMap */ 
