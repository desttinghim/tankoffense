#ifndef INCLUDED_luxe_debug_Inspector
#define INCLUDED_luxe_debug_Inspector

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(luxe,Emitter)
HX_DECLARE_CLASS1(luxe,Entity)
HX_DECLARE_CLASS1(luxe,NineSlice)
HX_DECLARE_CLASS1(luxe,Objects)
HX_DECLARE_CLASS1(luxe,Sprite)
HX_DECLARE_CLASS1(luxe,Text)
HX_DECLARE_CLASS1(luxe,Visual)
HX_DECLARE_CLASS2(luxe,debug,Inspector)
HX_DECLARE_CLASS2(luxe,resource,Resource)
HX_DECLARE_CLASS1(phoenix,Batcher)
HX_DECLARE_CLASS1(phoenix,BitmapFont)
HX_DECLARE_CLASS1(phoenix,Texture)
HX_DECLARE_CLASS1(phoenix,Vector)
namespace luxe{
namespace debug{


class HXCPP_CLASS_ATTRIBUTES  Inspector_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Inspector_obj OBJ_;
		Inspector_obj();
		Void __construct(Dynamic _options);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Inspector_obj > __new(Dynamic _options);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Inspector_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Inspector"); }

		::String title;
		::phoenix::BitmapFont font;
		::phoenix::Vector pos;
		::phoenix::Vector size;
		::luxe::Text _title_text;
		::luxe::Text _version_text;
		::phoenix::Texture uitexture;
		::phoenix::Texture uibutton;
		::luxe::NineSlice _window;
		Dynamic onrefresh;
		Dynamic &onrefresh_dyn() { return onrefresh;}
		::phoenix::Batcher _batcher;
		virtual Void refresh( );
		Dynamic refresh_dyn();

		virtual Void show( );
		Dynamic show_dyn();

		virtual Void hide( );
		Dynamic hide_dyn();

		virtual ::phoenix::Vector set_size( ::phoenix::Vector _size);
		Dynamic set_size_dyn();

		virtual Void _create_window( );
		Dynamic _create_window_dyn();

};

} // end namespace luxe
} // end namespace debug

#endif /* INCLUDED_luxe_debug_Inspector */ 
