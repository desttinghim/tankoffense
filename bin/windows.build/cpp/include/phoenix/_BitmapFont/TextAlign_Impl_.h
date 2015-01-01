#ifndef INCLUDED_phoenix__BitmapFont_TextAlign_Impl_
#define INCLUDED_phoenix__BitmapFont_TextAlign_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(phoenix,_BitmapFont,TextAlign_Impl_)
namespace phoenix{
namespace _BitmapFont{


class HXCPP_CLASS_ATTRIBUTES  TextAlign_Impl__obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef TextAlign_Impl__obj OBJ_;
		TextAlign_Impl__obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< TextAlign_Impl__obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~TextAlign_Impl__obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("TextAlign_Impl_"); }

		static int left;
		static int right;
		static int center;
		static int top;
		static int bottom;
};

} // end namespace phoenix
} // end namespace _BitmapFont

#endif /* INCLUDED_phoenix__BitmapFont_TextAlign_Impl_ */ 
