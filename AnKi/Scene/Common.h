// Copyright (C) 2009-2022, Panagiotis Christopoulos Charitos and contributors.
// All rights reserved.
// Code licensed under the BSD License.
// http://www.anki3d.org/LICENSE

#pragma once

#include <AnKi/Util/Allocator.h>
#include <AnKi/Util/String.h>
#include <AnKi/Scene/Forward.h>

namespace anki {

/// @addtogroup scene
/// @{

#define ANKI_SCENE_LOGI(...) ANKI_LOG("SCEN", kNormal, __VA_ARGS__)
#define ANKI_SCENE_LOGE(...) ANKI_LOG("SCEN", kError, __VA_ARGS__)
#define ANKI_SCENE_LOGW(...) ANKI_LOG("SCEN", kWarning, __VA_ARGS__)
#define ANKI_SCENE_LOGF(...) ANKI_LOG("SCEN", kFatal, __VA_ARGS__)

/// The type of the scene's allocator
template<typename T>
using SceneAllocator = HeapAllocator<T>;

/// The type of the scene's frame allocator
template<typename T>
using SceneFrameAllocator = StackAllocator<T>;
/// @}

} // end namespace anki
