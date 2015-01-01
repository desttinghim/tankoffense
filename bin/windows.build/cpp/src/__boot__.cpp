#include <hxcpp.h>

#include <sys/FileSystem.h>
#include <snow/window/_Windowing/WindowHandleMap.h>
#include <snow/window/Windowing.h>
#include <snow/window/Window.h>
#include <snow/utils/Timer.h>
#include <snow/utils/AbstractClassBuilder.h>
#include <snow/types/_Types/FileEventType_Impl_.h>
#include <snow/types/_Types/InputEventType_Impl_.h>
#include <snow/types/_Types/WindowEventType_Impl_.h>
#include <snow/types/_Types/SystemEventType_Impl_.h>
#include <snow/types/_Types/GamepadDeviceEventType_Impl_.h>
#include <snow/types/_Types/TextEventType_Impl_.h>
#include <snow/types/_Types/OpenGLProfile_Impl_.h>
#include <snow/types/_Types/AudioFormatType_Impl_.h>
#include <snow/types/_Types/AssetType_Impl_.h>
#include <snow/platform/native/window/sdl/WindowSystem.h>
#include <snow/platform/native/window/WindowSystem.h>
#include <snow/window/WindowSystemBinding.h>
#include <snow/platform/native/utils/UInt8Array.h>
#include <snow/platform/native/utils/Int32Array.h>
#include <snow/platform/native/utils/Float32Array.h>
#include <snow/platform/native/utils/Compression.h>
#include <snow/platform/native/utils/ByteArray.h>
#include <snow/utils/IDataInput.h>
#include <snow/platform/native/utils/ArrayBufferView.h>
#include <snow/utils/IMemoryRange.h>
#include <snow/platform/native/render/opengl/GL.h>
#include <snow/platform/native/render/opengl/GLProgram.h>
#include <snow/platform/native/render/opengl/GLTexture.h>
#include <snow/platform/native/render/opengl/GLShader.h>
#include <snow/platform/native/render/opengl/_GL/GLRenderbuffer_Impl_.h>
#include <snow/platform/native/render/opengl/_GL/GLFramebuffer_Impl_.h>
#include <snow/platform/native/render/opengl/GLRBO.h>
#include <snow/platform/native/render/opengl/GLFBO.h>
#include <snow/platform/native/render/opengl/GLBuffer.h>
#include <snow/platform/native/render/opengl/GLObject.h>
#include <snow/platform/native/io/IOSystem.h>
#include <snow/platform/native/input/sdl/_InputSystem/ModValue_Impl_.h>
#include <snow/platform/native/input/sdl/_InputSystem/MouseEventType_Impl_.h>
#include <snow/platform/native/input/sdl/_InputSystem/TouchEventType_Impl_.h>
#include <snow/platform/native/input/sdl/_InputSystem/ControllerEventType_Impl_.h>
#include <snow/platform/native/input/sdl/_InputSystem/KeyEventType_Impl_.h>
#include <snow/platform/native/input/sdl/InputSystem.h>
#include <snow/platform/native/input/InputSystem.h>
#include <snow/platform/native/audio/openal/SoundStream.h>
#include <snow/platform/native/audio/openal/OpenALHelper.h>
#include <snow/platform/native/audio/openal/AudioSystem.h>
#include <snow/platform/native/audio/openal/ALC.h>
#include <snow/platform/native/audio/openal/AL.h>
#include <snow/platform/native/audio/SoundStream.h>
#include <snow/platform/native/audio/openal/Sound.h>
#include <snow/platform/native/audio/Sound.h>
#include <snow/platform/native/audio/AudioSystem.h>
#include <snow/platform/native/assets/AssetSystem.h>
#include <snow/platform/native/StaticSnow.h>
#include <snow/platform/native/Core.h>
#include <sys/io/_Process/Stdout.h>
#include <sys/io/_Process/Stdin.h>
#include <sys/io/Process.h>
#include <snow/utils/Libs.h>
#include <snow/io/IOSystemBinding.h>
#include <snow/io/IO.h>
#include <snow/input/Keycodes.h>
#include <snow/input/Scancodes.h>
#include <snow/input/InputSystemBinding.h>
#include <snow/input/Input.h>
#include <snow/audio/SoundBinding.h>
#include <snow/audio/AudioSystemBinding.h>
#include <snow/audio/_Audio/AudioHandleMap.h>
#include <snow/audio/Audio.h>
#include <snow/assets/Assets.h>
#include <snow/assets/AssetText.h>
#include <snow/assets/AssetSystemBinding.h>
#include <snow/assets/AssetImage.h>
#include <snow/assets/AssetBytes.h>
#include <snow/assets/AssetAudio.h>
#include <snow/assets/Asset.h>
#include <snow/Snow.h>
#include <snow/Log.h>
#include <snow/CoreBinding.h>
#include <snow/utils/AbstractClass.h>
#include <snow/AppFixedTimestep.h>
#include <phoenix/utils/Rendering.h>
#include <phoenix/geometry/Vertex.h>
#include <phoenix/geometry/TextureCoord.h>
#include <phoenix/geometry/TextureCoordSet.h>
#include <phoenix/geometry/TextGeometry.h>
#include <phoenix/geometry/RectangleGeometry.h>
#include <phoenix/geometry/QuadPackGeometry.h>
#include <phoenix/geometry/QuadGeometry.h>
#include <phoenix/geometry/PlaneGeometry.h>
#include <phoenix/geometry/LineGeometry.h>
#include <phoenix/geometry/GeometryState.h>
#include <phoenix/geometry/GeometryKey.h>
#include <phoenix/geometry/CompositeGeometry.h>
#include <phoenix/geometry/ArcGeometry.h>
#include <phoenix/geometry/RingGeometry.h>
#include <phoenix/geometry/CircleGeometry.h>
#include <phoenix/geometry/Geometry.h>
#include <phoenix/_Vector/Vec_Impl_.h>
#include <phoenix/_Vector/ComponentOrder_Impl_.h>
#include <phoenix/Vector.h>
#include <phoenix/Spatial.h>
#include <phoenix/Transform.h>
#include <phoenix/ClampType.h>
#include <phoenix/FilterType.h>
#include <phoenix/_Shader/UniformType_Impl_.h>
#include <phoenix/Shader.h>
#include <phoenix/RendererStats.h>
#include <phoenix/Renderer.h>
#include <phoenix/RenderTexture.h>
#include <phoenix/Texture.h>
#include <phoenix/RenderState.h>
#include <phoenix/RenderPath.h>
#include <phoenix/Rectangle.h>
#include <phoenix/Ray.h>
#include <phoenix/Quaternion.h>
#include <phoenix/Matrix.h>
#include <phoenix/MatrixTransform.h>
#include <phoenix/ColorHSV.h>
#include <phoenix/ColorHSL.h>
#include <phoenix/Color.h>
#include <phoenix/Circle.h>
#include <phoenix/FOVType.h>
#include <phoenix/Camera.h>
#include <phoenix/ProjectionType.h>
#include <phoenix/_BitmapFont/Parser.h>
#include <phoenix/BitmapFont.h>
#include <phoenix/_BitmapFont/TextAlign_Impl_.h>
#include <phoenix/Batcher.h>
#include <phoenix/BatchGroup.h>
#include <phoenix/_Batcher/BlendEquation_Impl_.h>
#include <phoenix/_Batcher/BlendMode_Impl_.h>
#include <phoenix/_Batcher/PrimitiveType_Impl_.h>
#include <phoenix/BatchState.h>
#include <luxe/utils/unifill/_Utf8/StringU8_Impl_.h>
#include <luxe/utils/unifill/_Utf8/Utf8Impl.h>
#include <luxe/utils/unifill/Utf8.h>
#include <luxe/utils/unifill/Utf.h>
#include <luxe/utils/unifill/Unifill.h>
#include <luxe/utils/unifill/Unicode.h>
#include <luxe/utils/unifill/InternalEncodingIter.h>
#include <luxe/utils/unifill/InternalEncoding.h>
#include <luxe/utils/unifill/Exception.h>
#include <luxe/utils/unifill/CodePointIter.h>
#include <luxe/utils/unifill/_CodePoint/CodePoint_Impl_.h>
#include <luxe/utils/Utils.h>
#include <luxe/utils/UUID.h>
#include <luxe/utils/_UUID/Rule30.h>
#include <luxe/utils/Murmur3.h>
#include <luxe/utils/Maths.h>
#include <luxe/utils/GeometryUtils.h>
#include <luxe/tween/easing/QuadEaseInOut.h>
#include <luxe/tween/easing/QuadEaseIn.h>
#include <luxe/tween/actuators/PropertyPathDetails.h>
#include <luxe/tween/actuators/PropertyDetails.h>
#include <luxe/tween/actuators/MotionPathActuator.h>
#include <luxe/tween/actuators/MethodActuator.h>
#include <luxe/tween/RotationPath.h>
#include <luxe/tween/LinearPath.h>
#include <luxe/tween/BezierPath.h>
#include <luxe/tween/ComponentPath.h>
#include <luxe/tween/IComponentPath.h>
#include <luxe/tween/MotionPath.h>
#include <luxe/tween/_Actuate/TweenTimer.h>
#include <luxe/tween/Actuate.h>
#include <luxe/tween/easing/QuadEaseOut.h>
#include <luxe/tween/easing/IEasing.h>
#include <luxe/tween/easing/Quad.h>
#include <luxe/tween/actuators/SimpleActuator.h>
#include <luxe/tween/actuators/GenericActuator.h>
#include <luxe/tween/actuators/IGenericActuator.h>
#include <luxe/structural/BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry.h>
#include <luxe/structural/BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry.h>
#include <luxe/structural/BalancedBSTTraverseMethod.h>
#include <luxe/structural/_BalancedBST/NodeColor.h>
#include <luxe/resource/ResourceStats.h>
#include <luxe/resource/SoundResource.h>
#include <luxe/resource/DataResource.h>
#include <luxe/resource/JSONResource.h>
#include <luxe/resource/TextResource.h>
#include <luxe/resource/Resource.h>
#include <luxe/resource/ResourceType.h>
#include <luxe/options/_DrawOptions/DrawOptions.h>
#include <luxe/macros/BuildVersion.h>
#include <luxe/debug/TraceDebugView.h>
#include <luxe/debug/StatsDebugView.h>
#include <luxe/debug/_ProfilerDebugView/ProfilerBar.h>
#include <luxe/debug/_ProfilerDebugView/ProfilerValue.h>
#include <luxe/debug/ProfilerDebugView.h>
#include <luxe/debug/Inspector.h>
#include <luxe/debug/BatcherDebugView.h>
#include <luxe/debug/DebugView.h>
#include <luxe/components/Components.h>
#include <luxe/Timer.h>
#include <luxe/Text.h>
#include <luxe/Cursor.h>
#include <luxe/Screen.h>
#include <luxe/Scene.h>
#include <luxe/PhysicsEngine.h>
#include <luxe/Physics.h>
#include <luxe/ParcelProgress.h>
#include <luxe/Parcel.h>
#include <luxe/resource/ResourceManager.h>
#include <luxe/NineSlice.h>
#include <luxe/Sprite.h>
#include <luxe/Visual.h>
#include <luxe/Log.h>
#include <luxe/Input.h>
#include <luxe/InputType.h>
#include <luxe/GamepadEventType.h>
#include <luxe/TextEventType.h>
#include <luxe/InteractState.h>
#include <luxe/_Input/MouseButton_Impl_.h>
#include <luxe/_Events/EventObject.h>
#include <luxe/_Events/EventConnection.h>
#include <luxe/Events.h>
#include <luxe/Draw.h>
#include <luxe/Debug.h>
#include <luxe/Core.h>
#include <snow/App.h>
#include <luxe/_Core/CoreThreadRequest.h>
#include <luxe/Component.h>
#include <luxe/ID.h>
#include <luxe/Camera.h>
#include <luxe/Entity.h>
#include <luxe/Objects.h>
#include <luxe/SizeMode.h>
#include <luxe/Audio.h>
#include <hxcpp/StaticZlib.h>
#include <hxcpp/StaticStd.h>
#include <hxcpp/StaticRegexp.h>
#include <haxe/zip/Uncompress.h>
#include <haxe/zip/FlushMode.h>
#include <haxe/zip/Compress.h>
#include <haxe/io/Path.h>
#include <haxe/io/Error.h>
#include <haxe/io/Eof.h>
#include <haxe/io/Output.h>
#include <haxe/io/BytesInput.h>
#include <haxe/io/Input.h>
#include <haxe/io/BytesBuffer.h>
#include <haxe/io/Bytes.h>
#include <haxe/format/JsonParser.h>
#include <haxe/ds/StringMap.h>
#include <haxe/ds/ObjectMap.h>
#include <haxe/ds/IntMap.h>
#include <haxe/ds/TreeNode.h>
#include <haxe/ds/BalancedTree.h>
#include <haxe/crypto/Md5.h>
#include <haxe/Utf8.h>
#include <haxe/Timer.h>
#include <haxe/Resource.h>
#include <haxe/Log.h>
#include <haxe/CallStack.h>
#include <haxe/StackItem.h>
#include <cpp/vm/Thread.h>
#include <Type.h>
#include <Sys.h>
#include <StringTools.h>
#include <StringBuf.h>
#include <Std.h>
#include <Reflect.h>
#include <IMap.h>
#include <Main.h>
#include <luxe/Game.h>
#include <luxe/Emitter.h>
#include <LuxeApp.h>
#include <Luxe.h>
#include <List.h>
#include <Lambda.h>
#include <EReg.h>
#include <cpp/Lib.h>

void __files__boot();

void __boot_all()
{
__files__boot();
hx::RegisterResources( hx::GetResources() );
::sys::FileSystem_obj::__register();
::snow::window::_Windowing::WindowHandleMap_obj::__register();
::snow::window::Windowing_obj::__register();
::snow::window::Window_obj::__register();
::snow::utils::Timer_obj::__register();
::snow::utils::AbstractClassBuilder_obj::__register();
::snow::types::_Types::FileEventType_Impl__obj::__register();
::snow::types::_Types::InputEventType_Impl__obj::__register();
::snow::types::_Types::WindowEventType_Impl__obj::__register();
::snow::types::_Types::SystemEventType_Impl__obj::__register();
::snow::types::_Types::GamepadDeviceEventType_Impl__obj::__register();
::snow::types::_Types::TextEventType_Impl__obj::__register();
::snow::types::_Types::OpenGLProfile_Impl__obj::__register();
::snow::types::_Types::AudioFormatType_Impl__obj::__register();
::snow::types::_Types::AssetType_Impl__obj::__register();
::snow::platform::native::window::sdl::WindowSystem_obj::__register();
::snow::platform::native::window::WindowSystem_obj::__register();
::snow::window::WindowSystemBinding_obj::__register();
::snow::platform::native::utils::UInt8Array_obj::__register();
::snow::platform::native::utils::Int32Array_obj::__register();
::snow::platform::native::utils::Float32Array_obj::__register();
::snow::platform::native::utils::Compression_obj::__register();
::snow::platform::native::utils::ByteArray_obj::__register();
::snow::utils::IDataInput_obj::__register();
::snow::platform::native::utils::ArrayBufferView_obj::__register();
::snow::utils::IMemoryRange_obj::__register();
::snow::platform::native::render::opengl::GL_obj::__register();
::snow::platform::native::render::opengl::GLProgram_obj::__register();
::snow::platform::native::render::opengl::GLTexture_obj::__register();
::snow::platform::native::render::opengl::GLShader_obj::__register();
::snow::platform::native::render::opengl::_GL::GLRenderbuffer_Impl__obj::__register();
::snow::platform::native::render::opengl::_GL::GLFramebuffer_Impl__obj::__register();
::snow::platform::native::render::opengl::GLRBO_obj::__register();
::snow::platform::native::render::opengl::GLFBO_obj::__register();
::snow::platform::native::render::opengl::GLBuffer_obj::__register();
::snow::platform::native::render::opengl::GLObject_obj::__register();
::snow::platform::native::io::IOSystem_obj::__register();
::snow::platform::native::input::sdl::_InputSystem::ModValue_Impl__obj::__register();
::snow::platform::native::input::sdl::_InputSystem::MouseEventType_Impl__obj::__register();
::snow::platform::native::input::sdl::_InputSystem::TouchEventType_Impl__obj::__register();
::snow::platform::native::input::sdl::_InputSystem::ControllerEventType_Impl__obj::__register();
::snow::platform::native::input::sdl::_InputSystem::KeyEventType_Impl__obj::__register();
::snow::platform::native::input::sdl::InputSystem_obj::__register();
::snow::platform::native::input::InputSystem_obj::__register();
::snow::platform::native::audio::openal::SoundStream_obj::__register();
::snow::platform::native::audio::openal::OpenALHelper_obj::__register();
::snow::platform::native::audio::openal::AudioSystem_obj::__register();
::snow::platform::native::audio::openal::ALC_obj::__register();
::snow::platform::native::audio::openal::AL_obj::__register();
::snow::platform::native::audio::SoundStream_obj::__register();
::snow::platform::native::audio::openal::Sound_obj::__register();
::snow::platform::native::audio::Sound_obj::__register();
::snow::platform::native::audio::AudioSystem_obj::__register();
::snow::platform::native::assets::AssetSystem_obj::__register();
::snow::platform::native::StaticSnow_obj::__register();
::snow::platform::native::Core_obj::__register();
::sys::io::_Process::Stdout_obj::__register();
::sys::io::_Process::Stdin_obj::__register();
::sys::io::Process_obj::__register();
::snow::utils::Libs_obj::__register();
::snow::io::IOSystemBinding_obj::__register();
::snow::io::IO_obj::__register();
::snow::input::Keycodes_obj::__register();
::snow::input::Scancodes_obj::__register();
::snow::input::InputSystemBinding_obj::__register();
::snow::input::Input_obj::__register();
::snow::audio::SoundBinding_obj::__register();
::snow::audio::AudioSystemBinding_obj::__register();
::snow::audio::_Audio::AudioHandleMap_obj::__register();
::snow::audio::Audio_obj::__register();
::snow::assets::Assets_obj::__register();
::snow::assets::AssetText_obj::__register();
::snow::assets::AssetSystemBinding_obj::__register();
::snow::assets::AssetImage_obj::__register();
::snow::assets::AssetBytes_obj::__register();
::snow::assets::AssetAudio_obj::__register();
::snow::assets::Asset_obj::__register();
::snow::Snow_obj::__register();
::snow::Log_obj::__register();
::snow::CoreBinding_obj::__register();
::snow::utils::AbstractClass_obj::__register();
::snow::AppFixedTimestep_obj::__register();
::phoenix::utils::Rendering_obj::__register();
::phoenix::geometry::Vertex_obj::__register();
::phoenix::geometry::TextureCoord_obj::__register();
::phoenix::geometry::TextureCoordSet_obj::__register();
::phoenix::geometry::TextGeometry_obj::__register();
::phoenix::geometry::RectangleGeometry_obj::__register();
::phoenix::geometry::QuadPackGeometry_obj::__register();
::phoenix::geometry::QuadGeometry_obj::__register();
::phoenix::geometry::PlaneGeometry_obj::__register();
::phoenix::geometry::LineGeometry_obj::__register();
::phoenix::geometry::GeometryState_obj::__register();
::phoenix::geometry::GeometryKey_obj::__register();
::phoenix::geometry::CompositeGeometry_obj::__register();
::phoenix::geometry::ArcGeometry_obj::__register();
::phoenix::geometry::RingGeometry_obj::__register();
::phoenix::geometry::CircleGeometry_obj::__register();
::phoenix::geometry::Geometry_obj::__register();
::phoenix::_Vector::Vec_Impl__obj::__register();
::phoenix::_Vector::ComponentOrder_Impl__obj::__register();
::phoenix::Vector_obj::__register();
::phoenix::Spatial_obj::__register();
::phoenix::Transform_obj::__register();
::phoenix::ClampType_obj::__register();
::phoenix::FilterType_obj::__register();
::phoenix::_Shader::UniformType_Impl__obj::__register();
::phoenix::Shader_obj::__register();
::phoenix::RendererStats_obj::__register();
::phoenix::Renderer_obj::__register();
::phoenix::RenderTexture_obj::__register();
::phoenix::Texture_obj::__register();
::phoenix::RenderState_obj::__register();
::phoenix::RenderPath_obj::__register();
::phoenix::Rectangle_obj::__register();
::phoenix::Ray_obj::__register();
::phoenix::Quaternion_obj::__register();
::phoenix::Matrix_obj::__register();
::phoenix::MatrixTransform_obj::__register();
::phoenix::ColorHSV_obj::__register();
::phoenix::ColorHSL_obj::__register();
::phoenix::Color_obj::__register();
::phoenix::Circle_obj::__register();
::phoenix::FOVType_obj::__register();
::phoenix::Camera_obj::__register();
::phoenix::ProjectionType_obj::__register();
::phoenix::_BitmapFont::Parser_obj::__register();
::phoenix::BitmapFont_obj::__register();
::phoenix::_BitmapFont::TextAlign_Impl__obj::__register();
::phoenix::Batcher_obj::__register();
::phoenix::BatchGroup_obj::__register();
::phoenix::_Batcher::BlendEquation_Impl__obj::__register();
::phoenix::_Batcher::BlendMode_Impl__obj::__register();
::phoenix::_Batcher::PrimitiveType_Impl__obj::__register();
::phoenix::BatchState_obj::__register();
::luxe::utils::unifill::_Utf8::StringU8_Impl__obj::__register();
::luxe::utils::unifill::_Utf8::Utf8Impl_obj::__register();
::luxe::utils::unifill::Utf8_obj::__register();
::luxe::utils::unifill::Utf_obj::__register();
::luxe::utils::unifill::Unifill_obj::__register();
::luxe::utils::unifill::Unicode_obj::__register();
::luxe::utils::unifill::InternalEncodingIter_obj::__register();
::luxe::utils::unifill::InternalEncoding_obj::__register();
::luxe::utils::unifill::Exception_obj::__register();
::luxe::utils::unifill::CodePointIter_obj::__register();
::luxe::utils::unifill::_CodePoint::CodePoint_Impl__obj::__register();
::luxe::utils::Utils_obj::__register();
::luxe::utils::UUID_obj::__register();
::luxe::utils::_UUID::Rule30_obj::__register();
::luxe::utils::Murmur3_obj::__register();
::luxe::utils::Maths_obj::__register();
::luxe::utils::GeometryUtils_obj::__register();
::luxe::tween::easing::QuadEaseInOut_obj::__register();
::luxe::tween::easing::QuadEaseIn_obj::__register();
::luxe::tween::actuators::PropertyPathDetails_obj::__register();
::luxe::tween::actuators::PropertyDetails_obj::__register();
::luxe::tween::actuators::MotionPathActuator_obj::__register();
::luxe::tween::actuators::MethodActuator_obj::__register();
::luxe::tween::RotationPath_obj::__register();
::luxe::tween::LinearPath_obj::__register();
::luxe::tween::BezierPath_obj::__register();
::luxe::tween::ComponentPath_obj::__register();
::luxe::tween::IComponentPath_obj::__register();
::luxe::tween::MotionPath_obj::__register();
::luxe::tween::_Actuate::TweenTimer_obj::__register();
::luxe::tween::Actuate_obj::__register();
::luxe::tween::easing::QuadEaseOut_obj::__register();
::luxe::tween::easing::IEasing_obj::__register();
::luxe::tween::easing::Quad_obj::__register();
::luxe::tween::actuators::SimpleActuator_obj::__register();
::luxe::tween::actuators::GenericActuator_obj::__register();
::luxe::tween::actuators::IGenericActuator_obj::__register();
::luxe::structural::BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj::__register();
::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj::__register();
::luxe::structural::BalancedBSTTraverseMethod_obj::__register();
::luxe::structural::_BalancedBST::NodeColor_obj::__register();
::luxe::resource::ResourceStats_obj::__register();
::luxe::resource::SoundResource_obj::__register();
::luxe::resource::DataResource_obj::__register();
::luxe::resource::JSONResource_obj::__register();
::luxe::resource::TextResource_obj::__register();
::luxe::resource::Resource_obj::__register();
::luxe::resource::ResourceType_obj::__register();
::luxe::options::_DrawOptions::DrawOptions_obj::__register();
::luxe::macros::BuildVersion_obj::__register();
::luxe::debug::TraceDebugView_obj::__register();
::luxe::debug::StatsDebugView_obj::__register();
::luxe::debug::_ProfilerDebugView::ProfilerBar_obj::__register();
::luxe::debug::_ProfilerDebugView::ProfilerValue_obj::__register();
::luxe::debug::ProfilerDebugView_obj::__register();
::luxe::debug::Inspector_obj::__register();
::luxe::debug::BatcherDebugView_obj::__register();
::luxe::debug::DebugView_obj::__register();
::luxe::components::Components_obj::__register();
::luxe::Timer_obj::__register();
::luxe::Text_obj::__register();
::luxe::Cursor_obj::__register();
::luxe::Screen_obj::__register();
::luxe::Scene_obj::__register();
::luxe::PhysicsEngine_obj::__register();
::luxe::Physics_obj::__register();
::luxe::ParcelProgress_obj::__register();
::luxe::Parcel_obj::__register();
::luxe::resource::ResourceManager_obj::__register();
::luxe::NineSlice_obj::__register();
::luxe::Sprite_obj::__register();
::luxe::Visual_obj::__register();
::luxe::Log_obj::__register();
::luxe::Input_obj::__register();
::luxe::InputType_obj::__register();
::luxe::GamepadEventType_obj::__register();
::luxe::TextEventType_obj::__register();
::luxe::InteractState_obj::__register();
::luxe::_Input::MouseButton_Impl__obj::__register();
::luxe::_Events::EventObject_obj::__register();
::luxe::_Events::EventConnection_obj::__register();
::luxe::Events_obj::__register();
::luxe::Draw_obj::__register();
::luxe::Debug_obj::__register();
::luxe::Core_obj::__register();
::snow::App_obj::__register();
::luxe::_Core::CoreThreadRequest_obj::__register();
::luxe::Component_obj::__register();
::luxe::ID_obj::__register();
::luxe::Camera_obj::__register();
::luxe::Entity_obj::__register();
::luxe::Objects_obj::__register();
::luxe::SizeMode_obj::__register();
::luxe::Audio_obj::__register();
::hxcpp::StaticZlib_obj::__register();
::hxcpp::StaticStd_obj::__register();
::hxcpp::StaticRegexp_obj::__register();
::haxe::zip::Uncompress_obj::__register();
::haxe::zip::FlushMode_obj::__register();
::haxe::zip::Compress_obj::__register();
::haxe::io::Path_obj::__register();
::haxe::io::Error_obj::__register();
::haxe::io::Eof_obj::__register();
::haxe::io::Output_obj::__register();
::haxe::io::BytesInput_obj::__register();
::haxe::io::Input_obj::__register();
::haxe::io::BytesBuffer_obj::__register();
::haxe::io::Bytes_obj::__register();
::haxe::format::JsonParser_obj::__register();
::haxe::ds::StringMap_obj::__register();
::haxe::ds::ObjectMap_obj::__register();
::haxe::ds::IntMap_obj::__register();
::haxe::ds::TreeNode_obj::__register();
::haxe::ds::BalancedTree_obj::__register();
::haxe::crypto::Md5_obj::__register();
::haxe::Utf8_obj::__register();
::haxe::Timer_obj::__register();
::haxe::Resource_obj::__register();
::haxe::Log_obj::__register();
::haxe::CallStack_obj::__register();
::haxe::StackItem_obj::__register();
::cpp::vm::Thread_obj::__register();
::Type_obj::__register();
::Sys_obj::__register();
::StringTools_obj::__register();
::StringBuf_obj::__register();
::Std_obj::__register();
::Reflect_obj::__register();
::IMap_obj::__register();
::Main_obj::__register();
::luxe::Game_obj::__register();
::luxe::Emitter_obj::__register();
::LuxeApp_obj::__register();
::Luxe_obj::__register();
::List_obj::__register();
::Lambda_obj::__register();
::EReg_obj::__register();
::cpp::Lib_obj::__register();
::hxcpp::StaticRegexp_obj::__init__();
::hxcpp::StaticStd_obj::__init__();
::hxcpp::StaticZlib_obj::__init__();
::snow::platform::native::StaticSnow_obj::__init__();
::snow::platform::native::utils::ByteArray_obj::__init__();
::cpp::Lib_obj::__boot();
::EReg_obj::__boot();
::cpp::vm::Thread_obj::__boot();
::haxe::Log_obj::__boot();
::Lambda_obj::__boot();
::List_obj::__boot();
::Luxe_obj::__boot();
::LuxeApp_obj::__boot();
::luxe::Emitter_obj::__boot();
::luxe::Game_obj::__boot();
::Main_obj::__boot();
::IMap_obj::__boot();
::Reflect_obj::__boot();
::Std_obj::__boot();
::StringBuf_obj::__boot();
::StringTools_obj::__boot();
::Sys_obj::__boot();
::Type_obj::__boot();
::haxe::StackItem_obj::__boot();
::haxe::CallStack_obj::__boot();
::haxe::Resource_obj::__boot();
::haxe::Timer_obj::__boot();
::haxe::Utf8_obj::__boot();
::haxe::crypto::Md5_obj::__boot();
::haxe::ds::BalancedTree_obj::__boot();
::haxe::ds::TreeNode_obj::__boot();
::haxe::ds::IntMap_obj::__boot();
::haxe::ds::ObjectMap_obj::__boot();
::haxe::ds::StringMap_obj::__boot();
::haxe::format::JsonParser_obj::__boot();
::haxe::io::Bytes_obj::__boot();
::haxe::io::BytesBuffer_obj::__boot();
::haxe::io::Input_obj::__boot();
::haxe::io::BytesInput_obj::__boot();
::haxe::io::Output_obj::__boot();
::haxe::io::Eof_obj::__boot();
::haxe::io::Error_obj::__boot();
::haxe::io::Path_obj::__boot();
::haxe::zip::Compress_obj::__boot();
::haxe::zip::FlushMode_obj::__boot();
::haxe::zip::Uncompress_obj::__boot();
::hxcpp::StaticRegexp_obj::__boot();
::hxcpp::StaticStd_obj::__boot();
::hxcpp::StaticZlib_obj::__boot();
::luxe::Audio_obj::__boot();
::luxe::SizeMode_obj::__boot();
::luxe::Objects_obj::__boot();
::luxe::Entity_obj::__boot();
::luxe::Camera_obj::__boot();
::luxe::ID_obj::__boot();
::luxe::Component_obj::__boot();
::luxe::_Core::CoreThreadRequest_obj::__boot();
::snow::App_obj::__boot();
::luxe::Core_obj::__boot();
::luxe::Debug_obj::__boot();
::luxe::Draw_obj::__boot();
::luxe::Events_obj::__boot();
::luxe::_Events::EventConnection_obj::__boot();
::luxe::_Events::EventObject_obj::__boot();
::luxe::_Input::MouseButton_Impl__obj::__boot();
::luxe::InteractState_obj::__boot();
::luxe::TextEventType_obj::__boot();
::luxe::GamepadEventType_obj::__boot();
::luxe::InputType_obj::__boot();
::luxe::Input_obj::__boot();
::luxe::Log_obj::__boot();
::luxe::Visual_obj::__boot();
::luxe::Sprite_obj::__boot();
::luxe::NineSlice_obj::__boot();
::luxe::resource::ResourceManager_obj::__boot();
::luxe::Parcel_obj::__boot();
::luxe::ParcelProgress_obj::__boot();
::luxe::Physics_obj::__boot();
::luxe::PhysicsEngine_obj::__boot();
::luxe::Scene_obj::__boot();
::luxe::Screen_obj::__boot();
::luxe::Cursor_obj::__boot();
::luxe::Text_obj::__boot();
::luxe::Timer_obj::__boot();
::luxe::components::Components_obj::__boot();
::luxe::debug::DebugView_obj::__boot();
::luxe::debug::BatcherDebugView_obj::__boot();
::luxe::debug::Inspector_obj::__boot();
::luxe::debug::ProfilerDebugView_obj::__boot();
::luxe::debug::_ProfilerDebugView::ProfilerValue_obj::__boot();
::luxe::debug::_ProfilerDebugView::ProfilerBar_obj::__boot();
::luxe::debug::StatsDebugView_obj::__boot();
::luxe::debug::TraceDebugView_obj::__boot();
::luxe::macros::BuildVersion_obj::__boot();
::luxe::options::_DrawOptions::DrawOptions_obj::__boot();
::luxe::resource::ResourceType_obj::__boot();
::luxe::resource::Resource_obj::__boot();
::luxe::resource::TextResource_obj::__boot();
::luxe::resource::JSONResource_obj::__boot();
::luxe::resource::DataResource_obj::__boot();
::luxe::resource::SoundResource_obj::__boot();
::luxe::resource::ResourceStats_obj::__boot();
::luxe::structural::_BalancedBST::NodeColor_obj::__boot();
::luxe::structural::BalancedBSTTraverseMethod_obj::__boot();
::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj::__boot();
::luxe::structural::BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj::__boot();
::luxe::tween::actuators::IGenericActuator_obj::__boot();
::luxe::tween::actuators::GenericActuator_obj::__boot();
::luxe::tween::actuators::SimpleActuator_obj::__boot();
::luxe::tween::easing::Quad_obj::__boot();
::luxe::tween::easing::IEasing_obj::__boot();
::luxe::tween::easing::QuadEaseOut_obj::__boot();
::luxe::tween::Actuate_obj::__boot();
::luxe::tween::_Actuate::TweenTimer_obj::__boot();
::luxe::tween::MotionPath_obj::__boot();
::luxe::tween::IComponentPath_obj::__boot();
::luxe::tween::ComponentPath_obj::__boot();
::luxe::tween::BezierPath_obj::__boot();
::luxe::tween::LinearPath_obj::__boot();
::luxe::tween::RotationPath_obj::__boot();
::luxe::tween::actuators::MethodActuator_obj::__boot();
::luxe::tween::actuators::MotionPathActuator_obj::__boot();
::luxe::tween::actuators::PropertyDetails_obj::__boot();
::luxe::tween::actuators::PropertyPathDetails_obj::__boot();
::luxe::tween::easing::QuadEaseIn_obj::__boot();
::luxe::tween::easing::QuadEaseInOut_obj::__boot();
::luxe::utils::GeometryUtils_obj::__boot();
::luxe::utils::Maths_obj::__boot();
::luxe::utils::Murmur3_obj::__boot();
::luxe::utils::_UUID::Rule30_obj::__boot();
::luxe::utils::UUID_obj::__boot();
::luxe::utils::Utils_obj::__boot();
::luxe::utils::unifill::_CodePoint::CodePoint_Impl__obj::__boot();
::luxe::utils::unifill::CodePointIter_obj::__boot();
::luxe::utils::unifill::Exception_obj::__boot();
::luxe::utils::unifill::InternalEncoding_obj::__boot();
::luxe::utils::unifill::InternalEncodingIter_obj::__boot();
::luxe::utils::unifill::Unicode_obj::__boot();
::luxe::utils::unifill::Unifill_obj::__boot();
::luxe::utils::unifill::Utf_obj::__boot();
::luxe::utils::unifill::Utf8_obj::__boot();
::luxe::utils::unifill::_Utf8::Utf8Impl_obj::__boot();
::luxe::utils::unifill::_Utf8::StringU8_Impl__obj::__boot();
::phoenix::BatchState_obj::__boot();
::phoenix::_Batcher::PrimitiveType_Impl__obj::__boot();
::phoenix::_Batcher::BlendMode_Impl__obj::__boot();
::phoenix::_Batcher::BlendEquation_Impl__obj::__boot();
::phoenix::BatchGroup_obj::__boot();
::phoenix::Batcher_obj::__boot();
::phoenix::_BitmapFont::TextAlign_Impl__obj::__boot();
::phoenix::BitmapFont_obj::__boot();
::phoenix::_BitmapFont::Parser_obj::__boot();
::phoenix::ProjectionType_obj::__boot();
::phoenix::Camera_obj::__boot();
::phoenix::FOVType_obj::__boot();
::phoenix::Circle_obj::__boot();
::phoenix::Color_obj::__boot();
::phoenix::ColorHSL_obj::__boot();
::phoenix::ColorHSV_obj::__boot();
::phoenix::MatrixTransform_obj::__boot();
::phoenix::Matrix_obj::__boot();
::phoenix::Quaternion_obj::__boot();
::phoenix::Ray_obj::__boot();
::phoenix::Rectangle_obj::__boot();
::phoenix::RenderPath_obj::__boot();
::phoenix::RenderState_obj::__boot();
::phoenix::Texture_obj::__boot();
::phoenix::RenderTexture_obj::__boot();
::phoenix::Renderer_obj::__boot();
::phoenix::RendererStats_obj::__boot();
::phoenix::Shader_obj::__boot();
::phoenix::_Shader::UniformType_Impl__obj::__boot();
::phoenix::FilterType_obj::__boot();
::phoenix::ClampType_obj::__boot();
::phoenix::Transform_obj::__boot();
::phoenix::Spatial_obj::__boot();
::phoenix::Vector_obj::__boot();
::phoenix::_Vector::ComponentOrder_Impl__obj::__boot();
::phoenix::_Vector::Vec_Impl__obj::__boot();
::phoenix::geometry::Geometry_obj::__boot();
::phoenix::geometry::CircleGeometry_obj::__boot();
::phoenix::geometry::RingGeometry_obj::__boot();
::phoenix::geometry::ArcGeometry_obj::__boot();
::phoenix::geometry::CompositeGeometry_obj::__boot();
::phoenix::geometry::GeometryKey_obj::__boot();
::phoenix::geometry::GeometryState_obj::__boot();
::phoenix::geometry::LineGeometry_obj::__boot();
::phoenix::geometry::PlaneGeometry_obj::__boot();
::phoenix::geometry::QuadGeometry_obj::__boot();
::phoenix::geometry::QuadPackGeometry_obj::__boot();
::phoenix::geometry::RectangleGeometry_obj::__boot();
::phoenix::geometry::TextGeometry_obj::__boot();
::phoenix::geometry::TextureCoordSet_obj::__boot();
::phoenix::geometry::TextureCoord_obj::__boot();
::phoenix::geometry::Vertex_obj::__boot();
::phoenix::utils::Rendering_obj::__boot();
::snow::AppFixedTimestep_obj::__boot();
::snow::utils::AbstractClass_obj::__boot();
::snow::CoreBinding_obj::__boot();
::snow::Log_obj::__boot();
::snow::Snow_obj::__boot();
::snow::assets::Asset_obj::__boot();
::snow::assets::AssetAudio_obj::__boot();
::snow::assets::AssetBytes_obj::__boot();
::snow::assets::AssetImage_obj::__boot();
::snow::assets::AssetSystemBinding_obj::__boot();
::snow::assets::AssetText_obj::__boot();
::snow::assets::Assets_obj::__boot();
::snow::audio::Audio_obj::__boot();
::snow::audio::_Audio::AudioHandleMap_obj::__boot();
::snow::audio::AudioSystemBinding_obj::__boot();
::snow::audio::SoundBinding_obj::__boot();
::snow::input::Input_obj::__boot();
::snow::input::InputSystemBinding_obj::__boot();
::snow::input::Scancodes_obj::__boot();
::snow::input::Keycodes_obj::__boot();
::snow::io::IO_obj::__boot();
::snow::io::IOSystemBinding_obj::__boot();
::snow::utils::Libs_obj::__boot();
::sys::io::Process_obj::__boot();
::sys::io::_Process::Stdin_obj::__boot();
::sys::io::_Process::Stdout_obj::__boot();
::snow::platform::native::Core_obj::__boot();
::snow::platform::native::StaticSnow_obj::__boot();
::snow::platform::native::assets::AssetSystem_obj::__boot();
::snow::platform::native::audio::AudioSystem_obj::__boot();
::snow::platform::native::audio::Sound_obj::__boot();
::snow::platform::native::audio::openal::Sound_obj::__boot();
::snow::platform::native::audio::SoundStream_obj::__boot();
::snow::platform::native::audio::openal::AL_obj::__boot();
::snow::platform::native::audio::openal::ALC_obj::__boot();
::snow::platform::native::audio::openal::AudioSystem_obj::__boot();
::snow::platform::native::audio::openal::OpenALHelper_obj::__boot();
::snow::platform::native::audio::openal::SoundStream_obj::__boot();
::snow::platform::native::input::InputSystem_obj::__boot();
::snow::platform::native::input::sdl::InputSystem_obj::__boot();
::snow::platform::native::input::sdl::_InputSystem::KeyEventType_Impl__obj::__boot();
::snow::platform::native::input::sdl::_InputSystem::ControllerEventType_Impl__obj::__boot();
::snow::platform::native::input::sdl::_InputSystem::TouchEventType_Impl__obj::__boot();
::snow::platform::native::input::sdl::_InputSystem::MouseEventType_Impl__obj::__boot();
::snow::platform::native::input::sdl::_InputSystem::ModValue_Impl__obj::__boot();
::snow::platform::native::io::IOSystem_obj::__boot();
::snow::platform::native::render::opengl::GLObject_obj::__boot();
::snow::platform::native::render::opengl::GLBuffer_obj::__boot();
::snow::platform::native::render::opengl::GLFBO_obj::__boot();
::snow::platform::native::render::opengl::GLRBO_obj::__boot();
::snow::platform::native::render::opengl::_GL::GLFramebuffer_Impl__obj::__boot();
::snow::platform::native::render::opengl::_GL::GLRenderbuffer_Impl__obj::__boot();
::snow::platform::native::render::opengl::GLShader_obj::__boot();
::snow::platform::native::render::opengl::GLTexture_obj::__boot();
::snow::platform::native::render::opengl::GLProgram_obj::__boot();
::snow::platform::native::render::opengl::GL_obj::__boot();
::snow::utils::IMemoryRange_obj::__boot();
::snow::platform::native::utils::ArrayBufferView_obj::__boot();
::snow::utils::IDataInput_obj::__boot();
::snow::platform::native::utils::ByteArray_obj::__boot();
::snow::platform::native::utils::Compression_obj::__boot();
::snow::platform::native::utils::Float32Array_obj::__boot();
::snow::platform::native::utils::Int32Array_obj::__boot();
::snow::platform::native::utils::UInt8Array_obj::__boot();
::snow::window::WindowSystemBinding_obj::__boot();
::snow::platform::native::window::WindowSystem_obj::__boot();
::snow::platform::native::window::sdl::WindowSystem_obj::__boot();
::snow::types::_Types::AssetType_Impl__obj::__boot();
::snow::types::_Types::AudioFormatType_Impl__obj::__boot();
::snow::types::_Types::OpenGLProfile_Impl__obj::__boot();
::snow::types::_Types::TextEventType_Impl__obj::__boot();
::snow::types::_Types::GamepadDeviceEventType_Impl__obj::__boot();
::snow::types::_Types::SystemEventType_Impl__obj::__boot();
::snow::types::_Types::WindowEventType_Impl__obj::__boot();
::snow::types::_Types::InputEventType_Impl__obj::__boot();
::snow::types::_Types::FileEventType_Impl__obj::__boot();
::snow::utils::AbstractClassBuilder_obj::__boot();
::snow::utils::Timer_obj::__boot();
::snow::window::Window_obj::__boot();
::snow::window::Windowing_obj::__boot();
::snow::window::_Windowing::WindowHandleMap_obj::__boot();
::sys::FileSystem_obj::__boot();
}

