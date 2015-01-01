#ifndef INCLUDED_snow_platform_native_input_sdl__InputSystem_ModValue_Impl_
#define INCLUDED_snow_platform_native_input_sdl__InputSystem_ModValue_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS6(snow,platform,native,input,sdl,_InputSystem,ModValue_Impl_)
namespace snow{
namespace platform{
namespace native{
namespace input{
namespace sdl{
namespace _InputSystem{


class HXCPP_CLASS_ATTRIBUTES  ModValue_Impl__obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ModValue_Impl__obj OBJ_;
		ModValue_Impl__obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< ModValue_Impl__obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ModValue_Impl__obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("ModValue_Impl_"); }

		static int NONE;
		static int LSHIFT;
		static int RSHIFT;
		static int LCTRL;
		static int RCTRL;
		static int LALT;
		static int RALT;
		static int LMETA;
		static int RMETA;
		static int NUM;
		static int CAPS;
		static int MODE;
};

} // end namespace snow
} // end namespace platform
} // end namespace native
} // end namespace input
} // end namespace sdl
} // end namespace _InputSystem

#endif /* INCLUDED_snow_platform_native_input_sdl__InputSystem_ModValue_Impl_ */ 
