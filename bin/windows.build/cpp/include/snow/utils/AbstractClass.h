#ifndef INCLUDED_snow_utils_AbstractClass
#define INCLUDED_snow_utils_AbstractClass

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(snow,utils,AbstractClass)
namespace snow{
namespace utils{


class HXCPP_CLASS_ATTRIBUTES  AbstractClass_obj : public hx::Interface{
	public:
		typedef hx::Interface super;
		typedef AbstractClass_obj OBJ_;
		HX_DO_INTERFACE_RTTI;
		static void __boot();
};

#define DELEGATE_snow_utils_AbstractClass \


template<typename IMPL>
class AbstractClass_delegate_ : public AbstractClass_obj
{
	protected:
		IMPL *mDelegate;
	public:
		AbstractClass_delegate_(IMPL *inDelegate) : mDelegate(inDelegate) {}
		hx::Object *__GetRealObject() { return mDelegate; }
		void __Visit(HX_VISIT_PARAMS) { HX_VISIT_OBJECT(mDelegate); }
		DELEGATE_snow_utils_AbstractClass
};

} // end namespace snow
} // end namespace utils

#endif /* INCLUDED_snow_utils_AbstractClass */ 
