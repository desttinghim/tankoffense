#include <hxcpp.h>

#ifndef INCLUDED_Luxe
#include <Luxe.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_Resource
#include <haxe/Resource.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_luxe_Core
#include <luxe/Core.h>
#endif
#ifndef INCLUDED_luxe_resource_Resource
#include <luxe/resource/Resource.h>
#endif
#ifndef INCLUDED_luxe_resource_ResourceManager
#include <luxe/resource/ResourceManager.h>
#endif
#ifndef INCLUDED_luxe_resource_ResourceType
#include <luxe/resource/ResourceType.h>
#endif
#ifndef INCLUDED_luxe_utils_Utils
#include <luxe/utils/Utils.h>
#endif
#ifndef INCLUDED_phoenix_ClampType
#include <phoenix/ClampType.h>
#endif
#ifndef INCLUDED_phoenix_Color
#include <phoenix/Color.h>
#endif
#ifndef INCLUDED_phoenix_FilterType
#include <phoenix/FilterType.h>
#endif
#ifndef INCLUDED_phoenix_RenderState
#include <phoenix/RenderState.h>
#endif
#ifndef INCLUDED_phoenix_Renderer
#include <phoenix/Renderer.h>
#endif
#ifndef INCLUDED_phoenix_Texture
#include <phoenix/Texture.h>
#endif
#ifndef INCLUDED_phoenix_Vector
#include <phoenix/Vector.h>
#endif
#ifndef INCLUDED_snow_App
#include <snow/App.h>
#endif
#ifndef INCLUDED_snow_Snow
#include <snow/Snow.h>
#endif
#ifndef INCLUDED_snow_assets_Asset
#include <snow/assets/Asset.h>
#endif
#ifndef INCLUDED_snow_assets_AssetImage
#include <snow/assets/AssetImage.h>
#endif
#ifndef INCLUDED_snow_assets_Assets
#include <snow/assets/Assets.h>
#endif
#ifndef INCLUDED_snow_platform_native_render_opengl_GL
#include <snow/platform/native/render/opengl/GL.h>
#endif
#ifndef INCLUDED_snow_platform_native_render_opengl_GLObject
#include <snow/platform/native/render/opengl/GLObject.h>
#endif
#ifndef INCLUDED_snow_platform_native_render_opengl_GLTexture
#include <snow/platform/native/render/opengl/GLTexture.h>
#endif
#ifndef INCLUDED_snow_platform_native_utils_ArrayBufferView
#include <snow/platform/native/utils/ArrayBufferView.h>
#endif
#ifndef INCLUDED_snow_platform_native_utils_ByteArray
#include <snow/platform/native/utils/ByteArray.h>
#endif
#ifndef INCLUDED_snow_platform_native_utils_UInt8Array
#include <snow/platform/native/utils/UInt8Array.h>
#endif
#ifndef INCLUDED_snow_utils_IDataInput
#include <snow/utils/IDataInput.h>
#endif
#ifndef INCLUDED_snow_utils_IMemoryRange
#include <snow/utils/IMemoryRange.h>
#endif
namespace phoenix{

Void Texture_obj::__construct(::luxe::resource::ResourceManager _manager,::luxe::resource::ResourceType _type)
{
HX_STACK_FRAME("phoenix.Texture","new",0x3a7497ce,"phoenix.Texture.new","phoenix/Texture.hx",35,0xc84e46a3)
HX_STACK_THIS(this)
HX_STACK_ARG(_manager,"_manager")
HX_STACK_ARG(_type,"_type")
{
	HX_STACK_LINE(46)
	this->slot = (int)0;
	HX_STACK_LINE(44)
	this->loaded = false;
	HX_STACK_LINE(43)
	this->height = (int)-1;
	HX_STACK_LINE(42)
	this->width = (int)-1;
	HX_STACK_LINE(41)
	this->height_actual = (int)-1;
	HX_STACK_LINE(40)
	this->width_actual = (int)-1;
	HX_STACK_LINE(59)
	if (((_type == null()))){
		HX_STACK_LINE(59)
		_type = ::luxe::resource::ResourceType_obj::texture;
	}
	HX_STACK_LINE(61)
	super::__construct(_manager,_type,null());
	HX_STACK_LINE(62)
	Dynamic _g = Dynamic( Array_obj<Dynamic>::__new() );		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(62)
	this->_onload_handlers = _g;
	HX_STACK_LINE(64)
	::String _g1 = ::Luxe_obj::utils->uniqueid(null());		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(64)
	this->id = _g1;
	HX_STACK_LINE(65)
	this->set_filter(::phoenix::FilterType_obj::linear);
	HX_STACK_LINE(66)
	this->set_clamp(::phoenix::ClampType_obj::edge);
}
;
	return null();
}

//Texture_obj::~Texture_obj() { }

Dynamic Texture_obj::__CreateEmpty() { return  new Texture_obj; }
hx::ObjectPtr< Texture_obj > Texture_obj::__new(::luxe::resource::ResourceManager _manager,::luxe::resource::ResourceType _type)
{  hx::ObjectPtr< Texture_obj > result = new Texture_obj();
	result->__construct(_manager,_type);
	return result;}

Dynamic Texture_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Texture_obj > result = new Texture_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

Dynamic Texture_obj::set_onload( Dynamic f){
	HX_STACK_FRAME("phoenix.Texture","set_onload",0x07b0a754,"phoenix.Texture.set_onload","phoenix/Texture.hx",70,0xc84e46a3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(f,"f")
	HX_STACK_LINE(73)
	if ((this->loaded)){
		HX_STACK_LINE(74)
		f(hx::ObjectPtr<OBJ_>(this)).Cast< Void >();
		HX_STACK_LINE(75)
		return f;
	}
	else{
		HX_STACK_LINE(78)
		this->_onload_handlers->__Field(HX_CSTRING("push"),true)(f);
	}
	HX_STACK_LINE(81)
	return f;
}


HX_DEFINE_DYNAMIC_FUNC1(Texture_obj,set_onload,return )

Void Texture_obj::do_onload( ){
{
		HX_STACK_FRAME("phoenix.Texture","do_onload",0x40b51627,"phoenix.Texture.do_onload","phoenix/Texture.hx",85,0xc84e46a3)
		HX_STACK_THIS(this)
		HX_STACK_LINE(87)
		this->loaded = true;
		HX_STACK_LINE(89)
		{
			HX_STACK_LINE(89)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(89)
			Dynamic _g1 = this->_onload_handlers;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(89)
			while((true)){
				HX_STACK_LINE(89)
				if ((!(((_g < _g1->__Field(HX_CSTRING("length"),true)))))){
					HX_STACK_LINE(89)
					break;
				}
				HX_STACK_LINE(89)
				Dynamic f = _g1->__GetItem(_g);		HX_STACK_VAR(f,"f");
				HX_STACK_LINE(89)
				++(_g);
				HX_STACK_LINE(90)
				if (((f != null()))){
					HX_STACK_LINE(91)
					f(hx::ObjectPtr<OBJ_>(this)).Cast< Void >();
				}
			}
		}
		HX_STACK_LINE(95)
		this->_onload_handlers->__Field(HX_CSTRING("splice"),true)((int)0,this->_onload_handlers->__Field(HX_CSTRING("length"),true));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Texture_obj,do_onload,(void))

::String Texture_obj::toString( ){
	HX_STACK_FRAME("phoenix.Texture","toString",0x4a5e5a7e,"phoenix.Texture.toString","phoenix/Texture.hx",99,0xc84e46a3)
	HX_STACK_THIS(this)
	HX_STACK_LINE(100)
	::String _g = ::Std_obj::string(this->texture);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(100)
	::String _g1 = (HX_CSTRING("Texture (") + _g);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(100)
	::String _g2 = (_g1 + HX_CSTRING(") ("));		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(100)
	::String _g3 = (_g2 + this->width);		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(100)
	::String _g4 = (_g3 + HX_CSTRING("x"));		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(100)
	::String _g5 = (_g4 + this->height);		HX_STACK_VAR(_g5,"_g5");
	HX_STACK_LINE(100)
	::String _g6 = (_g5 + HX_CSTRING(") real size("));		HX_STACK_VAR(_g6,"_g6");
	HX_STACK_LINE(100)
	::String _g7 = (_g6 + this->width_actual);		HX_STACK_VAR(_g7,"_g7");
	HX_STACK_LINE(100)
	::String _g8 = (_g7 + HX_CSTRING("x"));		HX_STACK_VAR(_g8,"_g8");
	HX_STACK_LINE(100)
	::String _g9 = (_g8 + this->height_actual);		HX_STACK_VAR(_g9,"_g9");
	HX_STACK_LINE(100)
	::String _g10 = (_g9 + HX_CSTRING(") "));		HX_STACK_VAR(_g10,"_g10");
	HX_STACK_LINE(100)
	::String _g11 = ::Std_obj::string(this->filter);		HX_STACK_VAR(_g11,"_g11");
	HX_STACK_LINE(100)
	::String _g12 = (_g10 + _g11);		HX_STACK_VAR(_g12,"_g12");
	HX_STACK_LINE(100)
	::String _g13 = (_g12 + HX_CSTRING(" filtering. "));		HX_STACK_VAR(_g13,"_g13");
	HX_STACK_LINE(100)
	::String _g14 = ::Std_obj::string(this->clamp);		HX_STACK_VAR(_g14,"_g14");
	HX_STACK_LINE(100)
	::String _g15 = (_g13 + _g14);		HX_STACK_VAR(_g15,"_g15");
	HX_STACK_LINE(100)
	::String _g16 = (_g15 + HX_CSTRING(" clamp. id: "));		HX_STACK_VAR(_g16,"_g16");
	HX_STACK_LINE(100)
	return (_g16 + this->id);
}


HX_DEFINE_DYNAMIC_FUNC0(Texture_obj,toString,return )

::String Texture_obj::estimated_memory( ){
	HX_STACK_FRAME("phoenix.Texture","estimated_memory",0xa25f6936,"phoenix.Texture.estimated_memory","phoenix/Texture.hx",103,0xc84e46a3)
	HX_STACK_THIS(this)
	HX_STACK_LINE(105)
	int _bytes = ((this->width_actual * this->height_actual) * (int)4);		HX_STACK_VAR(_bytes,"_bytes");
	HX_STACK_LINE(107)
	return ::Luxe_obj::utils->bytes_to_string(_bytes);
}


HX_DEFINE_DYNAMIC_FUNC0(Texture_obj,estimated_memory,return )

Void Texture_obj::check_size( ){
{
		HX_STACK_FRAME("phoenix.Texture","check_size",0x906a712a,"phoenix.Texture.check_size","phoenix/Texture.hx",254,0xc84e46a3)
		HX_STACK_THIS(this)
		HX_STACK_LINE(256)
		int max_size = ::snow::platform::native::render::opengl::GL_obj::getParameter((int)3379);		HX_STACK_VAR(max_size,"max_size");
		HX_STACK_LINE(258)
		if (((this->asset->image->__Field(HX_CSTRING("width_actual"),true) > max_size))){
			HX_STACK_LINE(258)
			HX_STACK_DO_THROW((((HX_CSTRING("texture bigger than MAX_TEXTURE_SIZE (") + max_size) + HX_CSTRING(") ")) + this->asset->id));
		}
		HX_STACK_LINE(259)
		if (((this->asset->image->__Field(HX_CSTRING("height_actual"),true) > max_size))){
			HX_STACK_LINE(259)
			HX_STACK_DO_THROW((((HX_CSTRING("texture bigger than MAX_TEXTURE_SIZE (") + max_size) + HX_CSTRING(") ")) + this->asset->id));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Texture_obj,check_size,(void))

Void Texture_obj::reset( ){
{
		HX_STACK_FRAME("phoenix.Texture","reset",0x803c48bd,"phoenix.Texture.reset","phoenix/Texture.hx",265,0xc84e46a3)
		HX_STACK_THIS(this)
		HX_STACK_LINE(268)
		::snow::platform::native::render::opengl::GLTexture _g = ::snow::platform::native::render::opengl::GL_obj::createTexture();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(268)
		this->texture = _g;
		HX_STACK_LINE(270)
		this->bind();
		HX_STACK_LINE(272)
		::snow::platform::native::render::opengl::GL_obj::texImage2D((int)3553,(int)0,(int)6408,this->width_actual,this->height_actual,(int)0,(int)6408,(int)5121,this->asset->image->__Field(HX_CSTRING("data"),true));
		HX_STACK_LINE(275)
		this->_set_filter(this->filter);
		HX_STACK_LINE(276)
		this->_set_clamp(this->clamp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Texture_obj,reset,(void))

Void Texture_obj::from_asset( ::snow::assets::AssetImage _asset){
{
		HX_STACK_FRAME("phoenix.Texture","from_asset",0x4513646d,"phoenix.Texture.from_asset","phoenix/Texture.hx",280,0xc84e46a3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_asset,"_asset")
		HX_STACK_LINE(282)
		if (((_asset == null()))){
			HX_STACK_LINE(283)
			HX_STACK_DO_THROW(HX_CSTRING("null asset passed to Texture.from_asset"));
		}
		HX_STACK_LINE(287)
		this->asset = _asset;
		HX_STACK_LINE(290)
		this->check_size();
		HX_STACK_LINE(293)
		this->id = this->asset->id;
		HX_STACK_LINE(296)
		this->width = this->asset->image->__Field(HX_CSTRING("width"),true);
		HX_STACK_LINE(297)
		this->height = this->asset->image->__Field(HX_CSTRING("height"),true);
		HX_STACK_LINE(298)
		this->width_actual = this->asset->image->__Field(HX_CSTRING("width_actual"),true);
		HX_STACK_LINE(299)
		this->height_actual = this->asset->image->__Field(HX_CSTRING("height_actual"),true);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Texture_obj,from_asset,(void))

Void Texture_obj::generate_mipmaps( ){
{
		HX_STACK_FRAME("phoenix.Texture","generate_mipmaps",0x90c8cb73,"phoenix.Texture.generate_mipmaps","phoenix/Texture.hx",303,0xc84e46a3)
		HX_STACK_THIS(this)
		HX_STACK_LINE(303)
		Array< ::Dynamic > _g = Array_obj< ::Dynamic >::__new().Add(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(_g,"_g");

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,Array< ::Dynamic >,_g)
		Void run(::phoenix::Texture t){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","phoenix/Texture.hx",305,0xc84e46a3)
			HX_STACK_ARG(t,"t")
			{
				HX_STACK_LINE(307)
				_g->__get((int)0).StaticCast< ::phoenix::Texture >()->bind();
				HX_STACK_LINE(309)
				::snow::platform::native::render::opengl::GL_obj::generateMipmap((int)3553);
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(305)
		this->set_onload( Dynamic(new _Function_1_1(_g)));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Texture_obj,generate_mipmaps,(void))

Void Texture_obj::bind( ){
{
		HX_STACK_FRAME("phoenix.Texture","bind",0xe3a4ae8f,"phoenix.Texture.bind","phoenix/Texture.hx",314,0xc84e46a3)
		HX_STACK_THIS(this)
		HX_STACK_LINE(315)
		::Luxe_obj::renderer->state->activeTexture(((int)33984 + this->slot));
		HX_STACK_LINE(316)
		::Luxe_obj::renderer->state->bindTexture2D(this->texture);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Texture_obj,bind,(void))

Dynamic Texture_obj::get_pixel( ::phoenix::Vector _pos){
	HX_STACK_FRAME("phoenix.Texture","get_pixel",0xa5f630cb,"phoenix.Texture.get_pixel","phoenix/Texture.hx",319,0xc84e46a3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_pos,"_pos")
	HX_STACK_LINE(321)
	if (((this->asset->image->__Field(HX_CSTRING("data"),true) == null()))){
		HX_STACK_LINE(321)
		return null();
	}
	HX_STACK_LINE(323)
	int x = ::Std_obj::_int(_pos->x);		HX_STACK_VAR(x,"x");
	HX_STACK_LINE(324)
	int y = ::Std_obj::_int(_pos->y);		HX_STACK_VAR(y,"y");
	struct _Function_1_1{
		inline static Dynamic Block( hx::ObjectPtr< ::phoenix::Texture_obj > __this,int &x,int &y){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Texture.hx",326,0xc84e46a3)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("r") , (Float(__this->asset->image->__Field(HX_CSTRING("data"),true)->__GetItem(((((y * __this->width) + x)) * (int)4))) / Float(255.0)),false);
				__result->Add(HX_CSTRING("g") , (Float(__this->asset->image->__Field(HX_CSTRING("data"),true)->__GetItem((((((y * __this->width) + x)) * (int)4) + (int)1))) / Float(255.0)),false);
				__result->Add(HX_CSTRING("b") , (Float(__this->asset->image->__Field(HX_CSTRING("data"),true)->__GetItem((((((y * __this->width) + x)) * (int)4) + (int)2))) / Float(255.0)),false);
				__result->Add(HX_CSTRING("a") , (Float(__this->asset->image->__Field(HX_CSTRING("data"),true)->__GetItem((((((y * __this->width) + x)) * (int)4) + (int)3))) / Float(255.0)),false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(326)
	return _Function_1_1::Block(this,x,y);
}


HX_DEFINE_DYNAMIC_FUNC1(Texture_obj,get_pixel,return )

Void Texture_obj::set_pixel( ::phoenix::Vector _pos,::phoenix::Color _color){
{
		HX_STACK_FRAME("phoenix.Texture","set_pixel",0x89471cd7,"phoenix.Texture.set_pixel","phoenix/Texture.hx",335,0xc84e46a3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_pos,"_pos")
		HX_STACK_ARG(_color,"_color")
		HX_STACK_LINE(337)
		if (((this->asset->image->__Field(HX_CSTRING("data"),true) == null()))){
			HX_STACK_LINE(337)
			return null();
		}
		HX_STACK_LINE(339)
		int x = ::Std_obj::_int(_pos->x);		HX_STACK_VAR(x,"x");
		HX_STACK_LINE(340)
		int y = ::Std_obj::_int(_pos->y);		HX_STACK_VAR(y,"y");
		HX_STACK_LINE(342)
		hx::IndexRef((this->asset->image->__Field(HX_CSTRING("data"),true)).mPtr,((((y * this->width) + x)) * (int)4)) = ::Std_obj::_int((_color->r * (int)255));
		HX_STACK_LINE(343)
		hx::IndexRef((this->asset->image->__Field(HX_CSTRING("data"),true)).mPtr,(((((y * this->width) + x)) * (int)4) + (int)1)) = ::Std_obj::_int((_color->g * (int)255));
		HX_STACK_LINE(344)
		hx::IndexRef((this->asset->image->__Field(HX_CSTRING("data"),true)).mPtr,(((((y * this->width) + x)) * (int)4) + (int)2)) = ::Std_obj::_int((_color->b * (int)255));
		HX_STACK_LINE(345)
		hx::IndexRef((this->asset->image->__Field(HX_CSTRING("data"),true)).mPtr,(((((y * this->width) + x)) * (int)4) + (int)3)) = ::Std_obj::_int((_color->a * (int)255));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Texture_obj,set_pixel,(void))

bool Texture_obj::lock( ){
	HX_STACK_FRAME("phoenix.Texture","lock",0xea4554bd,"phoenix.Texture.lock","phoenix/Texture.hx",358,0xc84e46a3)
	HX_STACK_THIS(this)
	HX_STACK_LINE(358)
	return true;
}


HX_DEFINE_DYNAMIC_FUNC0(Texture_obj,lock,return )

Void Texture_obj::unlock( ){
{
		HX_STACK_FRAME("phoenix.Texture","unlock",0x1197b416,"phoenix.Texture.unlock","phoenix/Texture.hx",363,0xc84e46a3)
		HX_STACK_THIS(this)
		HX_STACK_LINE(363)
		if (((this->asset->image->__Field(HX_CSTRING("data"),true) != null()))){
			HX_STACK_LINE(365)
			::Luxe_obj::renderer->state->bindTexture2D(this->texture);
			HX_STACK_LINE(366)
			::snow::platform::native::render::opengl::GL_obj::texImage2D((int)3553,(int)0,(int)6408,this->width,this->height,(int)0,(int)6408,(int)5121,this->asset->image->__Field(HX_CSTRING("data"),true));
			HX_STACK_LINE(368)
			this->asset->image->__FieldRef(HX_CSTRING("data")) = null();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Texture_obj,unlock,(void))

Void Texture_obj::drop( ){
{
		HX_STACK_FRAME("phoenix.Texture","drop",0xe4fdf101,"phoenix.Texture.drop","phoenix/Texture.hx",374,0xc84e46a3)
		HX_STACK_THIS(this)
		HX_STACK_LINE(376)
		this->super::drop();
		HX_STACK_LINE(377)
		this->destroy();
	}
return null();
}


Void Texture_obj::activate( int att){
{
		HX_STACK_FRAME("phoenix.Texture","activate",0xf79ba585,"phoenix.Texture.activate","phoenix/Texture.hx",381,0xc84e46a3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(att,"att")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Texture_obj,activate,(void))

Void Texture_obj::destroy( ){
{
		HX_STACK_FRAME("phoenix.Texture","destroy",0x022a4368,"phoenix.Texture.destroy","phoenix/Texture.hx",385,0xc84e46a3)
		HX_STACK_THIS(this)
		HX_STACK_LINE(385)
		::snow::platform::native::render::opengl::GL_obj::deleteTexture(this->texture);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Texture_obj,destroy,(void))

Void Texture_obj::_set_clamp( ::phoenix::ClampType _clamp){
{
		HX_STACK_FRAME("phoenix.Texture","_set_clamp",0xdf385971,"phoenix.Texture._set_clamp","phoenix/Texture.hx",393,0xc84e46a3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_clamp,"_clamp")
		HX_STACK_LINE(393)
		switch( (int)(_clamp->__Index())){
			case (int)0: {
				HX_STACK_LINE(395)
				::snow::platform::native::render::opengl::GL_obj::texParameteri((int)3553,(int)10242,(int)33071);
				HX_STACK_LINE(396)
				::snow::platform::native::render::opengl::GL_obj::texParameteri((int)3553,(int)10243,(int)33071);
			}
			;break;
			case (int)1: {
				HX_STACK_LINE(398)
				::snow::platform::native::render::opengl::GL_obj::texParameteri((int)3553,(int)10242,(int)10497);
				HX_STACK_LINE(399)
				::snow::platform::native::render::opengl::GL_obj::texParameteri((int)3553,(int)10243,(int)10497);
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(401)
				::snow::platform::native::render::opengl::GL_obj::texParameteri((int)3553,(int)10242,(int)33648);
				HX_STACK_LINE(402)
				::snow::platform::native::render::opengl::GL_obj::texParameteri((int)3553,(int)10243,(int)33648);
			}
			;break;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Texture_obj,_set_clamp,(void))

::phoenix::ClampType Texture_obj::set_clamp( ::phoenix::ClampType _clamp){
	HX_STACK_FRAME("phoenix.Texture","set_clamp",0x0efbc94c,"phoenix.Texture.set_clamp","phoenix/Texture.hx",407,0xc84e46a3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_clamp,"_clamp")
	HX_STACK_LINE(407)
	Array< ::Dynamic > _clamp1 = Array_obj< ::Dynamic >::__new().Add(_clamp);		HX_STACK_VAR(_clamp1,"_clamp1");
	HX_STACK_LINE(407)
	Array< ::Dynamic > _g = Array_obj< ::Dynamic >::__new().Add(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(409)
	if (((this->clamp == null()))){
		HX_STACK_LINE(410)
		return this->clamp = _clamp1->__get((int)0).StaticCast< ::phoenix::ClampType >();
	}
	HX_STACK_LINE(413)
	if (((this->loaded == false))){

		HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,Array< ::Dynamic >,_clamp1,Array< ::Dynamic >,_g)
		Void run(::phoenix::Texture t){
			HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","phoenix/Texture.hx",414,0xc84e46a3)
			HX_STACK_ARG(t,"t")
			{
				HX_STACK_LINE(415)
				_g->__get((int)0).StaticCast< ::phoenix::Texture >()->bind();
				HX_STACK_LINE(416)
				_g->__get((int)0).StaticCast< ::phoenix::Texture >()->_set_clamp(_clamp1->__get((int)0).StaticCast< ::phoenix::ClampType >());
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(414)
		this->set_onload( Dynamic(new _Function_2_1(_clamp1,_g)));
	}
	else{
		HX_STACK_LINE(419)
		this->bind();
		HX_STACK_LINE(420)
		this->_set_clamp(_clamp1->__get((int)0).StaticCast< ::phoenix::ClampType >());
	}
	HX_STACK_LINE(423)
	return _clamp1->__get((int)0).StaticCast< ::phoenix::ClampType >();
}


HX_DEFINE_DYNAMIC_FUNC1(Texture_obj,set_clamp,return )

Void Texture_obj::_set_filter( ::phoenix::FilterType _filter){
{
		HX_STACK_FRAME("phoenix.Texture","_set_filter",0xf23ee082,"phoenix.Texture._set_filter","phoenix/Texture.hx",429,0xc84e46a3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_filter,"_filter")
		HX_STACK_LINE(429)
		switch( (int)(_filter->__Index())){
			case (int)1: {
				HX_STACK_LINE(432)
				::snow::platform::native::render::opengl::GL_obj::texParameteri((int)3553,(int)10241,(int)9729);
				HX_STACK_LINE(433)
				::snow::platform::native::render::opengl::GL_obj::texParameteri((int)3553,(int)10240,(int)9729);
			}
			;break;
			case (int)0: {
				HX_STACK_LINE(436)
				::snow::platform::native::render::opengl::GL_obj::texParameteri((int)3553,(int)10241,(int)9728);
				HX_STACK_LINE(437)
				::snow::platform::native::render::opengl::GL_obj::texParameteri((int)3553,(int)10240,(int)9728);
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(441)
				::snow::platform::native::render::opengl::GL_obj::texParameteri((int)3553,(int)10241,(int)9984);
				HX_STACK_LINE(442)
				::snow::platform::native::render::opengl::GL_obj::texParameteri((int)3553,(int)10240,(int)9984);
			}
			;break;
			case (int)3: {
				HX_STACK_LINE(444)
				::snow::platform::native::render::opengl::GL_obj::texParameteri((int)3553,(int)10241,(int)9985);
				HX_STACK_LINE(445)
				::snow::platform::native::render::opengl::GL_obj::texParameteri((int)3553,(int)10240,(int)9985);
			}
			;break;
			case (int)4: {
				HX_STACK_LINE(447)
				::snow::platform::native::render::opengl::GL_obj::texParameteri((int)3553,(int)10241,(int)9986);
				HX_STACK_LINE(448)
				::snow::platform::native::render::opengl::GL_obj::texParameteri((int)3553,(int)10240,(int)9986);
			}
			;break;
			case (int)5: {
				HX_STACK_LINE(450)
				::snow::platform::native::render::opengl::GL_obj::texParameteri((int)3553,(int)10241,(int)9987);
				HX_STACK_LINE(451)
				::snow::platform::native::render::opengl::GL_obj::texParameteri((int)3553,(int)10240,(int)9987);
			}
			;break;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Texture_obj,_set_filter,(void))

Void Texture_obj::_set_filter_min( ::phoenix::FilterType _filter){
{
		HX_STACK_FRAME("phoenix.Texture","_set_filter_min",0xc464a015,"phoenix.Texture._set_filter_min","phoenix/Texture.hx",459,0xc84e46a3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_filter,"_filter")
		HX_STACK_LINE(459)
		switch( (int)(_filter->__Index())){
			case (int)1: {
				HX_STACK_LINE(462)
				::snow::platform::native::render::opengl::GL_obj::texParameteri((int)3553,(int)10241,(int)9729);
			}
			;break;
			case (int)0: {
				HX_STACK_LINE(464)
				::snow::platform::native::render::opengl::GL_obj::texParameteri((int)3553,(int)10241,(int)9728);
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(468)
				::snow::platform::native::render::opengl::GL_obj::texParameteri((int)3553,(int)10241,(int)9984);
			}
			;break;
			case (int)3: {
				HX_STACK_LINE(470)
				::snow::platform::native::render::opengl::GL_obj::texParameteri((int)3553,(int)10241,(int)9985);
			}
			;break;
			case (int)4: {
				HX_STACK_LINE(472)
				::snow::platform::native::render::opengl::GL_obj::texParameteri((int)3553,(int)10241,(int)9986);
			}
			;break;
			case (int)5: {
				HX_STACK_LINE(474)
				::snow::platform::native::render::opengl::GL_obj::texParameteri((int)3553,(int)10241,(int)9987);
			}
			;break;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Texture_obj,_set_filter_min,(void))

Void Texture_obj::_set_filter_mag( ::phoenix::FilterType _filter){
{
		HX_STACK_FRAME("phoenix.Texture","_set_filter_mag",0xc4649916,"phoenix.Texture._set_filter_mag","phoenix/Texture.hx",482,0xc84e46a3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_filter,"_filter")
		HX_STACK_LINE(482)
		switch( (int)(_filter->__Index())){
			case (int)1: {
				HX_STACK_LINE(485)
				::snow::platform::native::render::opengl::GL_obj::texParameteri((int)3553,(int)10240,(int)9729);
			}
			;break;
			case (int)0: {
				HX_STACK_LINE(487)
				::snow::platform::native::render::opengl::GL_obj::texParameteri((int)3553,(int)10240,(int)9728);
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(491)
				::snow::platform::native::render::opengl::GL_obj::texParameteri((int)3553,(int)10240,(int)9984);
			}
			;break;
			case (int)3: {
				HX_STACK_LINE(493)
				::snow::platform::native::render::opengl::GL_obj::texParameteri((int)3553,(int)10240,(int)9985);
			}
			;break;
			case (int)4: {
				HX_STACK_LINE(495)
				::snow::platform::native::render::opengl::GL_obj::texParameteri((int)3553,(int)10240,(int)9986);
			}
			;break;
			case (int)5: {
				HX_STACK_LINE(497)
				::snow::platform::native::render::opengl::GL_obj::texParameteri((int)3553,(int)10240,(int)9987);
			}
			;break;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Texture_obj,_set_filter_mag,(void))

::phoenix::FilterType Texture_obj::set_filter( ::phoenix::FilterType _filter){
	HX_STACK_FRAME("phoenix.Texture","set_filter",0x8d7d5047,"phoenix.Texture.set_filter","phoenix/Texture.hx",502,0xc84e46a3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_filter,"_filter")
	HX_STACK_LINE(502)
	Array< ::Dynamic > _filter1 = Array_obj< ::Dynamic >::__new().Add(_filter);		HX_STACK_VAR(_filter1,"_filter1");
	HX_STACK_LINE(502)
	Array< ::Dynamic > _g = Array_obj< ::Dynamic >::__new().Add(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(504)
	if (((this->filter == null()))){
		HX_STACK_LINE(505)
		return this->filter = _filter1->__get((int)0).StaticCast< ::phoenix::FilterType >();
	}
	HX_STACK_LINE(508)
	if (((this->loaded == false))){

		HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,Array< ::Dynamic >,_g,Array< ::Dynamic >,_filter1)
		Void run(::phoenix::Texture t){
			HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","phoenix/Texture.hx",509,0xc84e46a3)
			HX_STACK_ARG(t,"t")
			{
				HX_STACK_LINE(510)
				_g->__get((int)0).StaticCast< ::phoenix::Texture >()->bind();
				HX_STACK_LINE(511)
				_g->__get((int)0).StaticCast< ::phoenix::Texture >()->_set_filter(_filter1->__get((int)0).StaticCast< ::phoenix::FilterType >());
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(509)
		this->set_onload( Dynamic(new _Function_2_1(_g,_filter1)));
	}
	else{
		HX_STACK_LINE(514)
		this->bind();
		HX_STACK_LINE(515)
		this->_set_filter(_filter1->__get((int)0).StaticCast< ::phoenix::FilterType >());
	}
	HX_STACK_LINE(518)
	return this->filter = _filter1->__get((int)0).StaticCast< ::phoenix::FilterType >();
}


HX_DEFINE_DYNAMIC_FUNC1(Texture_obj,set_filter,return )

::phoenix::FilterType Texture_obj::set_filter_min( ::phoenix::FilterType _filter){
	HX_STACK_FRAME("phoenix.Texture","set_filter_min",0xbef6d65a,"phoenix.Texture.set_filter_min","phoenix/Texture.hx",522,0xc84e46a3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_filter,"_filter")
	HX_STACK_LINE(522)
	Array< ::Dynamic > _filter1 = Array_obj< ::Dynamic >::__new().Add(_filter);		HX_STACK_VAR(_filter1,"_filter1");
	HX_STACK_LINE(522)
	Array< ::Dynamic > _g = Array_obj< ::Dynamic >::__new().Add(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(524)
	if (((this->loaded == false))){

		HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,Array< ::Dynamic >,_g,Array< ::Dynamic >,_filter1)
		Void run(::phoenix::Texture t){
			HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","phoenix/Texture.hx",525,0xc84e46a3)
			HX_STACK_ARG(t,"t")
			{
				HX_STACK_LINE(526)
				_g->__get((int)0).StaticCast< ::phoenix::Texture >()->bind();
				HX_STACK_LINE(527)
				_g->__get((int)0).StaticCast< ::phoenix::Texture >()->_set_filter_min(_filter1->__get((int)0).StaticCast< ::phoenix::FilterType >());
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(525)
		this->set_onload( Dynamic(new _Function_2_1(_g,_filter1)));
	}
	else{
		HX_STACK_LINE(530)
		this->bind();
		HX_STACK_LINE(531)
		this->_set_filter_min(_filter1->__get((int)0).StaticCast< ::phoenix::FilterType >());
	}
	HX_STACK_LINE(534)
	return this->filter_min = _filter1->__get((int)0).StaticCast< ::phoenix::FilterType >();
}


HX_DEFINE_DYNAMIC_FUNC1(Texture_obj,set_filter_min,return )

::phoenix::FilterType Texture_obj::set_filter_mag( ::phoenix::FilterType _filter){
	HX_STACK_FRAME("phoenix.Texture","set_filter_mag",0xbef6cf5b,"phoenix.Texture.set_filter_mag","phoenix/Texture.hx",538,0xc84e46a3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_filter,"_filter")
	HX_STACK_LINE(538)
	Array< ::Dynamic > _filter1 = Array_obj< ::Dynamic >::__new().Add(_filter);		HX_STACK_VAR(_filter1,"_filter1");
	HX_STACK_LINE(538)
	Array< ::Dynamic > _g = Array_obj< ::Dynamic >::__new().Add(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(540)
	if (((this->loaded == false))){

		HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,Array< ::Dynamic >,_g,Array< ::Dynamic >,_filter1)
		Void run(::phoenix::Texture t){
			HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","phoenix/Texture.hx",541,0xc84e46a3)
			HX_STACK_ARG(t,"t")
			{
				HX_STACK_LINE(542)
				_g->__get((int)0).StaticCast< ::phoenix::Texture >()->bind();
				HX_STACK_LINE(543)
				_g->__get((int)0).StaticCast< ::phoenix::Texture >()->_set_filter_mag(_filter1->__get((int)0).StaticCast< ::phoenix::FilterType >());
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(541)
		this->set_onload( Dynamic(new _Function_2_1(_g,_filter1)));
	}
	else{
		HX_STACK_LINE(546)
		this->bind();
		HX_STACK_LINE(547)
		this->_set_filter_mag(_filter1->__get((int)0).StaticCast< ::phoenix::FilterType >());
	}
	HX_STACK_LINE(550)
	return this->filter_mag = _filter1->__get((int)0).StaticCast< ::phoenix::FilterType >();
}


HX_DEFINE_DYNAMIC_FUNC1(Texture_obj,set_filter_mag,return )

::phoenix::Texture Texture_obj::load( ::String _id,Dynamic _onloaded,Dynamic __o__silent){
Dynamic _silent = __o__silent.Default(false);
	HX_STACK_FRAME("phoenix.Texture","load",0xea4552f8,"phoenix.Texture.load","phoenix/Texture.hx",111,0xc84e46a3)
	HX_STACK_ARG(_id,"_id")
	HX_STACK_ARG(_onloaded,"_onloaded")
	HX_STACK_ARG(_silent,"_silent")
{
		HX_STACK_LINE(111)
		Array< ::Dynamic > _silent1 = Array_obj< ::Dynamic >::__new().Add(_silent);		HX_STACK_VAR(_silent1,"_silent1");
		HX_STACK_LINE(111)
		Array< ::String > _id1 = Array_obj< ::String >::__new().Add(_id);		HX_STACK_VAR(_id1,"_id1");
		HX_STACK_LINE(114)
		::luxe::resource::ResourceManager resources = ::Luxe_obj::resources;		HX_STACK_VAR(resources,"resources");
		HX_STACK_LINE(117)
		::phoenix::Texture _exists = resources->find_texture(_id1->__get((int)0));		HX_STACK_VAR(_exists,"_exists");
		HX_STACK_LINE(119)
		if (((_exists != null()))){
			HX_STACK_LINE(123)
			if (((_onloaded != null()))){
				HX_STACK_LINE(124)
				_onloaded(_exists).Cast< Void >();
			}
			HX_STACK_LINE(127)
			return _exists;
		}
		HX_STACK_LINE(133)
		Array< ::Dynamic > texture = Array_obj< ::Dynamic >::__new().Add(::phoenix::Texture_obj::__new(resources,null()));		HX_STACK_VAR(texture,"texture");
		HX_STACK_LINE(136)
		if (((_onloaded != null()))){
			HX_STACK_LINE(137)
			texture->__get((int)0).StaticCast< ::phoenix::Texture >()->set_onload(_onloaded);
		}
		struct _Function_1_1{
			inline static Dynamic Block( Array< ::Dynamic > &_silent1,Array< ::Dynamic > &texture,Array< ::String > &_id1){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Texture.hx",140,0xc84e46a3)
				{
					hx::Anon __result = hx::Anon_obj::Create();

					HX_BEGIN_LOCAL_FUNC_S3(hx::LocalFunc,_Function_2_1,Array< ::Dynamic >,_silent1,Array< ::Dynamic >,texture,Array< ::String >,_id1)
					Void run(::snow::assets::AssetImage asset){
						HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","phoenix/Texture.hx",142,0xc84e46a3)
						HX_STACK_ARG(asset,"asset")
						{
							HX_STACK_LINE(142)
							if (((bool((asset != null())) && bool((asset->image != null()))))){
								HX_STACK_LINE(144)
								texture->__get((int)0).StaticCast< ::phoenix::Texture >()->from_asset(asset);
								HX_STACK_LINE(145)
								texture->__get((int)0).StaticCast< ::phoenix::Texture >()->reset();
								HX_STACK_LINE(146)
								texture->__get((int)0).StaticCast< ::phoenix::Texture >()->do_onload();
								HX_STACK_LINE(148)
								if ((!(_silent1->__get((int)0)))){
									HX_STACK_LINE(149)
									::haxe::Log_obj::trace((HX_CSTRING("  i / texture / ") + (((((((((((HX_CSTRING("texture loaded ") + texture->__get((int)0).StaticCast< ::phoenix::Texture >()->id) + HX_CSTRING(" (")) + texture->__get((int)0).StaticCast< ::phoenix::Texture >()->width) + HX_CSTRING("x")) + texture->__get((int)0).StaticCast< ::phoenix::Texture >()->height) + HX_CSTRING(") real size (")) + texture->__get((int)0).StaticCast< ::phoenix::Texture >()->width_actual) + HX_CSTRING("x")) + texture->__get((int)0).StaticCast< ::phoenix::Texture >()->height_actual) + HX_CSTRING(")")))),hx::SourceInfo(HX_CSTRING("Texture.hx"),149,HX_CSTRING("phoenix.Texture"),HX_CSTRING("load")));
								}
							}
							else{
								HX_STACK_LINE(153)
								if ((!(_silent1->__get((int)0)))){
									HX_STACK_LINE(154)
									::haxe::Log_obj::trace((HX_CSTRING("  i / texture / ") + ((HX_CSTRING("texture failed to load! ") + _id1->__get((int)0)))),hx::SourceInfo(HX_CSTRING("Texture.hx"),154,HX_CSTRING("phoenix.Texture"),HX_CSTRING("load")));
								}
							}
						}
						return null();
					}
					HX_END_LOCAL_FUNC1((void))

					__result->Add(HX_CSTRING("onload") ,  Dynamic(new _Function_2_1(_silent1,texture,_id1)),true);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(140)
		::snow::assets::AssetImage _asset = ::Luxe_obj::core->app->assets->image(_id1->__get((int)0),_Function_1_1::Block(_silent1,texture,_id1));		HX_STACK_VAR(_asset,"_asset");
		HX_STACK_LINE(160)
		if (((_asset != null()))){
			HX_STACK_LINE(162)
			texture->__get((int)0).StaticCast< ::phoenix::Texture >()->id = _id1->__get((int)0);
			HX_STACK_LINE(164)
			resources->cache(texture->__get((int)0).StaticCast< ::phoenix::Texture >());
			HX_STACK_LINE(166)
			return texture->__get((int)0).StaticCast< ::phoenix::Texture >();
		}
		HX_STACK_LINE(170)
		return null();
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Texture_obj,load,return )

::phoenix::Texture Texture_obj::load_from_resource( ::String _name,Dynamic __o__cache){
Dynamic _cache = __o__cache.Default(true);
	HX_STACK_FRAME("phoenix.Texture","load_from_resource",0xd09236bc,"phoenix.Texture.load_from_resource","phoenix/Texture.hx",175,0xc84e46a3)
	HX_STACK_ARG(_name,"_name")
	HX_STACK_ARG(_cache,"_cache")
{
		HX_STACK_LINE(177)
		::haxe::io::Bytes texture_bytes = ::haxe::Resource_obj::getBytes(_name);		HX_STACK_VAR(texture_bytes,"texture_bytes");
		HX_STACK_LINE(179)
		if (((texture_bytes != null()))){
			HX_STACK_LINE(181)
			::snow::platform::native::utils::ByteArray _g;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(181)
			{
				HX_STACK_LINE(181)
				::snow::platform::native::utils::ByteArray result = ::snow::platform::native::utils::ByteArray_obj::__new((int)-1);		HX_STACK_VAR(result,"result");
				HX_STACK_LINE(181)
				{
					HX_STACK_LINE(181)
					result->b = texture_bytes->b;
					HX_STACK_LINE(181)
					result->length = texture_bytes->length;
				}
				HX_STACK_LINE(181)
				_g = result;
			}
			HX_STACK_LINE(181)
			::phoenix::Texture texture = ::phoenix::Texture_obj::load_from_bytearray(_name,_g,_cache);		HX_STACK_VAR(texture,"texture");
			HX_STACK_LINE(183)
			texture_bytes = null();
			HX_STACK_LINE(185)
			return texture;
		}
		HX_STACK_LINE(189)
		return null();
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Texture_obj,load_from_resource,return )

::phoenix::Texture Texture_obj::load_from_bytearray( ::String _name,::snow::platform::native::utils::ByteArray _bytes,Dynamic __o__cache){
Dynamic _cache = __o__cache.Default(true);
	HX_STACK_FRAME("phoenix.Texture","load_from_bytearray",0x9e43a7e3,"phoenix.Texture.load_from_bytearray","phoenix/Texture.hx",195,0xc84e46a3)
	HX_STACK_ARG(_name,"_name")
	HX_STACK_ARG(_bytes,"_bytes")
	HX_STACK_ARG(_cache,"_cache")
{
		HX_STACK_LINE(197)
		if (((_bytes != null()))){
			HX_STACK_LINE(200)
			::luxe::resource::ResourceManager resources = ::Luxe_obj::resources;		HX_STACK_VAR(resources,"resources");
			HX_STACK_LINE(201)
			::phoenix::Texture texture = ::phoenix::Texture_obj::__new(resources,null());		HX_STACK_VAR(texture,"texture");
			struct _Function_2_1{
				inline static Dynamic Block( ::snow::platform::native::utils::ByteArray &_bytes){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Texture.hx",203,0xc84e46a3)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_CSTRING("bytes") , _bytes,false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(203)
			::snow::assets::AssetImage _asset = ::Luxe_obj::core->app->assets->image(_name,_Function_2_1::Block(_bytes));		HX_STACK_VAR(_asset,"_asset");
			HX_STACK_LINE(205)
			if (((_asset != null()))){
				HX_STACK_LINE(207)
				texture->from_asset(_asset);
				HX_STACK_LINE(209)
				texture->reset();
				HX_STACK_LINE(210)
				texture->do_onload();
				HX_STACK_LINE(212)
				if ((_cache)){
					HX_STACK_LINE(213)
					resources->cache(texture);
				}
				HX_STACK_LINE(216)
				return texture;
			}
		}
		HX_STACK_LINE(222)
		return null();
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Texture_obj,load_from_bytearray,return )

::phoenix::Texture Texture_obj::load_from_pixels( ::String _id,int _width,int _height,::snow::platform::native::utils::UInt8Array _pixels,Dynamic __o__cache){
Dynamic _cache = __o__cache.Default(true);
	HX_STACK_FRAME("phoenix.Texture","load_from_pixels",0x248bd19b,"phoenix.Texture.load_from_pixels","phoenix/Texture.hx",226,0xc84e46a3)
	HX_STACK_ARG(_id,"_id")
	HX_STACK_ARG(_width,"_width")
	HX_STACK_ARG(_height,"_height")
	HX_STACK_ARG(_pixels,"_pixels")
	HX_STACK_ARG(_cache,"_cache")
{
		HX_STACK_LINE(228)
		if (((_pixels == null()))){
			HX_STACK_LINE(229)
			return null();
		}
		HX_STACK_LINE(232)
		::luxe::resource::ResourceManager resources = ::Luxe_obj::resources;		HX_STACK_VAR(resources,"resources");
		HX_STACK_LINE(233)
		::phoenix::Texture texture = ::phoenix::Texture_obj::__new(resources,null());		HX_STACK_VAR(texture,"texture");
		HX_STACK_LINE(235)
		Dynamic _asset_info = ::Luxe_obj::core->app->assets->info_from_id(_id,HX_CSTRING("image"));		HX_STACK_VAR(_asset_info,"_asset_info");
		HX_STACK_LINE(236)
		::snow::assets::AssetImage _asset = ::snow::assets::AssetImage_obj::__new(::Luxe_obj::core->app->assets,_asset_info,null());		HX_STACK_VAR(_asset,"_asset");
		HX_STACK_LINE(238)
		_asset->load_from_pixels(_id,_width,_height,_pixels,null());
		HX_STACK_LINE(241)
		texture->from_asset(_asset);
		HX_STACK_LINE(243)
		texture->reset();
		HX_STACK_LINE(244)
		texture->do_onload();
		HX_STACK_LINE(246)
		if ((_cache)){
			HX_STACK_LINE(247)
			resources->cache(texture);
		}
		HX_STACK_LINE(250)
		return texture;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(Texture_obj,load_from_pixels,return )


Texture_obj::Texture_obj()
{
}

void Texture_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Texture);
	HX_MARK_MEMBER_NAME(texture,"texture");
	HX_MARK_MEMBER_NAME(asset,"asset");
	HX_MARK_MEMBER_NAME(width_actual,"width_actual");
	HX_MARK_MEMBER_NAME(height_actual,"height_actual");
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(loaded,"loaded");
	HX_MARK_MEMBER_NAME(slot,"slot");
	HX_MARK_MEMBER_NAME(_onload_handlers,"_onload_handlers");
	HX_MARK_MEMBER_NAME(filter,"filter");
	HX_MARK_MEMBER_NAME(filter_min,"filter_min");
	HX_MARK_MEMBER_NAME(filter_mag,"filter_mag");
	HX_MARK_MEMBER_NAME(clamp,"clamp");
	::luxe::resource::Resource_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Texture_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(texture,"texture");
	HX_VISIT_MEMBER_NAME(asset,"asset");
	HX_VISIT_MEMBER_NAME(width_actual,"width_actual");
	HX_VISIT_MEMBER_NAME(height_actual,"height_actual");
	HX_VISIT_MEMBER_NAME(width,"width");
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(loaded,"loaded");
	HX_VISIT_MEMBER_NAME(slot,"slot");
	HX_VISIT_MEMBER_NAME(_onload_handlers,"_onload_handlers");
	HX_VISIT_MEMBER_NAME(filter,"filter");
	HX_VISIT_MEMBER_NAME(filter_min,"filter_min");
	HX_VISIT_MEMBER_NAME(filter_mag,"filter_mag");
	HX_VISIT_MEMBER_NAME(clamp,"clamp");
	::luxe::resource::Resource_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Texture_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"load") ) { return load_dyn(); }
		if (HX_FIELD_EQ(inName,"slot") ) { return slot; }
		if (HX_FIELD_EQ(inName,"bind") ) { return bind_dyn(); }
		if (HX_FIELD_EQ(inName,"lock") ) { return lock_dyn(); }
		if (HX_FIELD_EQ(inName,"drop") ) { return drop_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"asset") ) { return asset; }
		if (HX_FIELD_EQ(inName,"width") ) { return width; }
		if (HX_FIELD_EQ(inName,"clamp") ) { return clamp; }
		if (HX_FIELD_EQ(inName,"reset") ) { return reset_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { return height; }
		if (HX_FIELD_EQ(inName,"loaded") ) { return loaded; }
		if (HX_FIELD_EQ(inName,"filter") ) { return filter; }
		if (HX_FIELD_EQ(inName,"unlock") ) { return unlock_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"texture") ) { return texture; }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		if (HX_FIELD_EQ(inName,"activate") ) { return activate_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"do_onload") ) { return do_onload_dyn(); }
		if (HX_FIELD_EQ(inName,"get_pixel") ) { return get_pixel_dyn(); }
		if (HX_FIELD_EQ(inName,"set_pixel") ) { return set_pixel_dyn(); }
		if (HX_FIELD_EQ(inName,"set_clamp") ) { return set_clamp_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"filter_min") ) { return filter_min; }
		if (HX_FIELD_EQ(inName,"filter_mag") ) { return filter_mag; }
		if (HX_FIELD_EQ(inName,"set_onload") ) { return set_onload_dyn(); }
		if (HX_FIELD_EQ(inName,"check_size") ) { return check_size_dyn(); }
		if (HX_FIELD_EQ(inName,"from_asset") ) { return from_asset_dyn(); }
		if (HX_FIELD_EQ(inName,"_set_clamp") ) { return _set_clamp_dyn(); }
		if (HX_FIELD_EQ(inName,"set_filter") ) { return set_filter_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_set_filter") ) { return _set_filter_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"width_actual") ) { return width_actual; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"height_actual") ) { return height_actual; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"set_filter_min") ) { return set_filter_min_dyn(); }
		if (HX_FIELD_EQ(inName,"set_filter_mag") ) { return set_filter_mag_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_set_filter_min") ) { return _set_filter_min_dyn(); }
		if (HX_FIELD_EQ(inName,"_set_filter_mag") ) { return _set_filter_mag_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"load_from_pixels") ) { return load_from_pixels_dyn(); }
		if (HX_FIELD_EQ(inName,"_onload_handlers") ) { return _onload_handlers; }
		if (HX_FIELD_EQ(inName,"estimated_memory") ) { return estimated_memory_dyn(); }
		if (HX_FIELD_EQ(inName,"generate_mipmaps") ) { return generate_mipmaps_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"load_from_resource") ) { return load_from_resource_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"load_from_bytearray") ) { return load_from_bytearray_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Texture_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"slot") ) { slot=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"asset") ) { asset=inValue.Cast< ::snow::assets::AssetImage >(); return inValue; }
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"clamp") ) { if (inCallProp) return set_clamp(inValue);clamp=inValue.Cast< ::phoenix::ClampType >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"loaded") ) { loaded=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onload") ) { return set_onload(inValue); }
		if (HX_FIELD_EQ(inName,"filter") ) { if (inCallProp) return set_filter(inValue);filter=inValue.Cast< ::phoenix::FilterType >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"texture") ) { texture=inValue.Cast< ::snow::platform::native::render::opengl::GLTexture >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"filter_min") ) { if (inCallProp) return set_filter_min(inValue);filter_min=inValue.Cast< ::phoenix::FilterType >(); return inValue; }
		if (HX_FIELD_EQ(inName,"filter_mag") ) { if (inCallProp) return set_filter_mag(inValue);filter_mag=inValue.Cast< ::phoenix::FilterType >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"width_actual") ) { width_actual=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"height_actual") ) { height_actual=inValue.Cast< int >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_onload_handlers") ) { _onload_handlers=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Texture_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("texture"));
	outFields->push(HX_CSTRING("asset"));
	outFields->push(HX_CSTRING("width_actual"));
	outFields->push(HX_CSTRING("height_actual"));
	outFields->push(HX_CSTRING("width"));
	outFields->push(HX_CSTRING("height"));
	outFields->push(HX_CSTRING("loaded"));
	outFields->push(HX_CSTRING("slot"));
	outFields->push(HX_CSTRING("_onload_handlers"));
	outFields->push(HX_CSTRING("filter"));
	outFields->push(HX_CSTRING("filter_min"));
	outFields->push(HX_CSTRING("filter_mag"));
	outFields->push(HX_CSTRING("clamp"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("load"),
	HX_CSTRING("load_from_resource"),
	HX_CSTRING("load_from_bytearray"),
	HX_CSTRING("load_from_pixels"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::snow::platform::native::render::opengl::GLTexture*/ ,(int)offsetof(Texture_obj,texture),HX_CSTRING("texture")},
	{hx::fsObject /*::snow::assets::AssetImage*/ ,(int)offsetof(Texture_obj,asset),HX_CSTRING("asset")},
	{hx::fsInt,(int)offsetof(Texture_obj,width_actual),HX_CSTRING("width_actual")},
	{hx::fsInt,(int)offsetof(Texture_obj,height_actual),HX_CSTRING("height_actual")},
	{hx::fsInt,(int)offsetof(Texture_obj,width),HX_CSTRING("width")},
	{hx::fsInt,(int)offsetof(Texture_obj,height),HX_CSTRING("height")},
	{hx::fsBool,(int)offsetof(Texture_obj,loaded),HX_CSTRING("loaded")},
	{hx::fsInt,(int)offsetof(Texture_obj,slot),HX_CSTRING("slot")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Texture_obj,_onload_handlers),HX_CSTRING("_onload_handlers")},
	{hx::fsObject /*::phoenix::FilterType*/ ,(int)offsetof(Texture_obj,filter),HX_CSTRING("filter")},
	{hx::fsObject /*::phoenix::FilterType*/ ,(int)offsetof(Texture_obj,filter_min),HX_CSTRING("filter_min")},
	{hx::fsObject /*::phoenix::FilterType*/ ,(int)offsetof(Texture_obj,filter_mag),HX_CSTRING("filter_mag")},
	{hx::fsObject /*::phoenix::ClampType*/ ,(int)offsetof(Texture_obj,clamp),HX_CSTRING("clamp")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("texture"),
	HX_CSTRING("asset"),
	HX_CSTRING("width_actual"),
	HX_CSTRING("height_actual"),
	HX_CSTRING("width"),
	HX_CSTRING("height"),
	HX_CSTRING("loaded"),
	HX_CSTRING("slot"),
	HX_CSTRING("_onload_handlers"),
	HX_CSTRING("filter"),
	HX_CSTRING("filter_min"),
	HX_CSTRING("filter_mag"),
	HX_CSTRING("clamp"),
	HX_CSTRING("set_onload"),
	HX_CSTRING("do_onload"),
	HX_CSTRING("toString"),
	HX_CSTRING("estimated_memory"),
	HX_CSTRING("check_size"),
	HX_CSTRING("reset"),
	HX_CSTRING("from_asset"),
	HX_CSTRING("generate_mipmaps"),
	HX_CSTRING("bind"),
	HX_CSTRING("get_pixel"),
	HX_CSTRING("set_pixel"),
	HX_CSTRING("lock"),
	HX_CSTRING("unlock"),
	HX_CSTRING("drop"),
	HX_CSTRING("activate"),
	HX_CSTRING("destroy"),
	HX_CSTRING("_set_clamp"),
	HX_CSTRING("set_clamp"),
	HX_CSTRING("_set_filter"),
	HX_CSTRING("_set_filter_min"),
	HX_CSTRING("_set_filter_mag"),
	HX_CSTRING("set_filter"),
	HX_CSTRING("set_filter_min"),
	HX_CSTRING("set_filter_mag"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Texture_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Texture_obj::__mClass,"__mClass");
};

#endif

Class Texture_obj::__mClass;

void Texture_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("phoenix.Texture"), hx::TCanCast< Texture_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatics
#endif
#ifdef HXCPP_SCRIPTABLE
    , sMemberStorageInfo
#endif
);
}

void Texture_obj::__boot()
{
}

} // end namespace phoenix
