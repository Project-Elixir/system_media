/*
 * Copyright (C) 2021 The Android Open Source Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef ANDROID_EFFECT_VIRTUALIZER_STAGE_CORE_H_
#define ANDROID_EFFECT_VIRTUALIZER_STAGE_CORE_H_

#include <system/audio_effect.h>

#if __cplusplus
extern "C" {
#endif

#define FX_IID_VIRTUALIZER_STAGE__ \
        { 0xccd4cf09, 0xa79d, 0x46c2, 0x9aae, { 0x06, 0xa1, 0x69, 0x8d, 0x6c, 0x8f } }
static const effect_uuid_t FX_IID_VIRTUALIZER_STAGE_ = FX_IID_VIRTUALIZER_STAGE__;
const effect_uuid_t * const FX_IID_VIRTUALIZER_STAGE = &FX_IID_VIRTUALIZER_STAGE_;

typedef enum
{
    VIRTUALIZER_STAGE_PARAM_TYPE,
    VIRTUALIZER_STAGE_PARAM_LEVEL,
    VIRTUALIZER_STAGE_PARAM_SUPPORTED_HEADTRACKING_MODE,
    VIRTUALIZER_STAGE_PARAM_HEADTRACKING_MODE
} t_virtualizer_stage_params;

#if __cplusplus
}  // extern "C"
#endif


#endif /*ANDROID_EFFECT_VIRTUALIZER_STAGE_CORE_H_*/
