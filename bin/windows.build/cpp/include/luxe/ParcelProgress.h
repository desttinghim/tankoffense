#ifndef INCLUDED_luxe_ParcelProgress
#define INCLUDED_luxe_ParcelProgress

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(luxe,Emitter)
HX_DECLARE_CLASS1(luxe,Entity)
HX_DECLARE_CLASS1(luxe,Objects)
HX_DECLARE_CLASS1(luxe,Parcel)
HX_DECLARE_CLASS1(luxe,ParcelProgress)
HX_DECLARE_CLASS1(luxe,Sprite)
HX_DECLARE_CLASS1(luxe,Visual)
HX_DECLARE_CLASS2(luxe,resource,Resource)
HX_DECLARE_CLASS2(luxe,resource,ResourceManager)
namespace luxe{


class HXCPP_CLASS_ATTRIBUTES  ParcelProgress_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ParcelProgress_obj OBJ_;
		ParcelProgress_obj();
		Void __construct(Dynamic _options);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< ParcelProgress_obj > __new(Dynamic _options);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ParcelProgress_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("ParcelProgress"); }

		::luxe::Parcel parcel;
		::luxe::Sprite progress_bar;
		::luxe::Sprite progress_border;
		::luxe::Sprite background;
		::luxe::Sprite image_logo;
		Dynamic options;
		Float width;
		Float height;
		virtual Void set_progress( Float amount);
		Dynamic set_progress_dyn();

		virtual Void onprogress( ::luxe::resource::Resource r);
		Dynamic onprogress_dyn();

		virtual Void oncomplete( ::luxe::Parcel p);
		Dynamic oncomplete_dyn();

		virtual Void do_complete( );
		Dynamic do_complete_dyn();

};

} // end namespace luxe

#endif /* INCLUDED_luxe_ParcelProgress */ 
