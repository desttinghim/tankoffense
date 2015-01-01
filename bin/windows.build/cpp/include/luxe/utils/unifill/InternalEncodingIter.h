#ifndef INCLUDED_luxe_utils_unifill_InternalEncodingIter
#define INCLUDED_luxe_utils_unifill_InternalEncodingIter

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(luxe,utils,unifill,InternalEncodingIter)
namespace luxe{
namespace utils{
namespace unifill{


class HXCPP_CLASS_ATTRIBUTES  InternalEncodingIter_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef InternalEncodingIter_obj OBJ_;
		InternalEncodingIter_obj();
		Void __construct(::String s,int beginIndex,int endIndex);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< InternalEncodingIter_obj > __new(::String s,int beginIndex,int endIndex);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~InternalEncodingIter_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("InternalEncodingIter"); }

		::String string;
		int index;
		int endIndex;
		virtual bool hasNext( );
		Dynamic hasNext_dyn();

		virtual int next( );
		Dynamic next_dyn();

};

} // end namespace luxe
} // end namespace utils
} // end namespace unifill

#endif /* INCLUDED_luxe_utils_unifill_InternalEncodingIter */ 
