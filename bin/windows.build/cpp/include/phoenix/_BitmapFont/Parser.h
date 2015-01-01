#ifndef INCLUDED_phoenix__BitmapFont_Parser
#define INCLUDED_phoenix__BitmapFont_Parser

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS2(phoenix,_BitmapFont,Parser)
namespace phoenix{
namespace _BitmapFont{


class HXCPP_CLASS_ATTRIBUTES  Parser_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Parser_obj OBJ_;
		Parser_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Parser_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Parser_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("Parser"); }

		static Dynamic parse( ::String _font_data);
		static Dynamic parse_dyn();

		static Void parse_token( ::String _token,Array< ::String > _tokens,Dynamic _info);
		static Dynamic parse_token_dyn();

		static ::haxe::ds::StringMap tokenize_line( Array< ::String > _tokens);
		static Dynamic tokenize_line_dyn();

		static ::String trim( ::String _s);
		static Dynamic trim_dyn();

		static ::String unquote( ::String _s);
		static Dynamic unquote_dyn();

};

} // end namespace phoenix
} // end namespace _BitmapFont

#endif /* INCLUDED_phoenix__BitmapFont_Parser */ 
