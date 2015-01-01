#ifndef INCLUDED_luxe_utils_unifill_CodePointIter
#define INCLUDED_luxe_utils_unifill_CodePointIter

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(luxe,utils,unifill,CodePointIter)
HX_DECLARE_CLASS3(luxe,utils,unifill,InternalEncodingIter)
namespace luxe{
namespace utils{
namespace unifill{


class HXCPP_CLASS_ATTRIBUTES  CodePointIter_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef CodePointIter_obj OBJ_;
		CodePointIter_obj();
		Void __construct(::String s);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< CodePointIter_obj > __new(::String s);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~CodePointIter_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("CodePointIter"); }

		::String s;
		::luxe::utils::unifill::InternalEncodingIter itr;
		virtual bool hasNext( );
		Dynamic hasNext_dyn();

		virtual int next( );
		Dynamic next_dyn();

};

} // end namespace luxe
} // end namespace utils
} // end namespace unifill

#endif /* INCLUDED_luxe_utils_unifill_CodePointIter */ 
