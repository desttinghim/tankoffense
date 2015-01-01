#ifndef INCLUDED_luxe_utils__UUID_Rule30
#define INCLUDED_luxe_utils__UUID_Rule30

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(luxe,utils,_UUID,Rule30)
namespace luxe{
namespace utils{
namespace _UUID{


class HXCPP_CLASS_ATTRIBUTES  Rule30_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Rule30_obj OBJ_;
		Rule30_obj();
		Void __construct(::String cells);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Rule30_obj > __new(::String cells);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Rule30_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Rule30"); }

		::String cells;
		int cellsLength;
		virtual int getBits( int length);
		Dynamic getBits_dyn();

		virtual int getBit( );
		Dynamic getBit_dyn();

		static ::luxe::utils::_UUID::Rule30 createWithLength( int length);
		static Dynamic createWithLength_dyn();

};

} // end namespace luxe
} // end namespace utils
} // end namespace _UUID

#endif /* INCLUDED_luxe_utils__UUID_Rule30 */ 
