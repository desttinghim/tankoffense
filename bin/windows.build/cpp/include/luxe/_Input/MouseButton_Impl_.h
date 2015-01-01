#ifndef INCLUDED_luxe__Input_MouseButton_Impl_
#define INCLUDED_luxe__Input_MouseButton_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(luxe,_Input,MouseButton_Impl_)
namespace luxe{
namespace _Input{


class HXCPP_CLASS_ATTRIBUTES  MouseButton_Impl__obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef MouseButton_Impl__obj OBJ_;
		MouseButton_Impl__obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< MouseButton_Impl__obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~MouseButton_Impl__obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("MouseButton_Impl_"); }

		static int none;
		static int left;
		static int middle;
		static int right;
		static int extra1;
		static int extra2;
};

} // end namespace luxe
} // end namespace _Input

#endif /* INCLUDED_luxe__Input_MouseButton_Impl_ */ 
