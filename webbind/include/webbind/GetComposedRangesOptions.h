#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct ShadowRoot ShadowRoot;

/** @brief Dictionary type GetComposedRangesOptions */
DECLARE_EMLITE_TYPE(GetComposedRangesOptions, em_Val);

/** @brief Getter of the shadowRoots property */
jb_Array GetComposedRangesOptions_shadowRoots(const GetComposedRangesOptions *self);

/** @brief Setter of the shadowRoots property */
void GetComposedRangesOptions_set_shadowRoots(GetComposedRangesOptions* self, jb_Array * value);

/** @brief Constructor of the GetComposedRangesOptions dictionary type */
GetComposedRangesOptions GetComposedRangesOptions_new();

#ifdef __cplusplus
}
#endif
