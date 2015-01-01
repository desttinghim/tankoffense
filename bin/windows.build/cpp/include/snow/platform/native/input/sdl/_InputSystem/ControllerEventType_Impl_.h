#ifndef INCLUDED_snow_platform_native_input_sdl__InputSystem_ControllerEventType_Impl_
#define INCLUDED_snow_platform_native_input_sdl__InputSystem_ControllerEventType_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS6(snow,platform,native,input,sdl,_InputSystem,ControllerEventType_Impl_)
namespace snow{
namespace platform{
namespace native{
namespace input{
namespace sdl{
namespace _InputSystem{


class HXCPP_CLASS_ATTRIBUTES  ControllerEventType_Impl__obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ControllerEventType_Impl__obj OBJ_;
		ControllerEventType_Impl__obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< ControllerEventType_Impl__obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ControllerEventType_Impl__obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("ControllerEventType_Impl_"); }

		static int axis;
		static int button_down;
		static int button_up;
		static int added;
		static int removed;
		static int remapped;
};

} // end namespace snow
} // end namespace platform
} // end namespace native
} // end namespace input
} // end namespace sdl
} // end namespace _InputSystem

#endif /* INCLUDED_snow_platform_native_input_sdl__InputSystem_ControllerEventType_Impl_ */ 
