#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type GetAnimationsOptions */
DECLARE_EMLITE_TYPE(GetAnimationsOptions, em_Val);

/** @brief Getter of the subtree property */
bool GetAnimationsOptions_subtree(const GetAnimationsOptions *self);

/** @brief Setter of the subtree property */
void GetAnimationsOptions_set_subtree(GetAnimationsOptions* self, bool value);

/** @brief Getter of the pseudoElement property */
jb_String GetAnimationsOptions_pseudoElement(const GetAnimationsOptions *self);

/** @brief Setter of the pseudoElement property */
void GetAnimationsOptions_set_pseudoElement(GetAnimationsOptions* self, jb_String * value);

/** @brief Constructor of the GetAnimationsOptions dictionary type */
GetAnimationsOptions GetAnimationsOptions_new();

#ifdef __cplusplus
}
#endif
