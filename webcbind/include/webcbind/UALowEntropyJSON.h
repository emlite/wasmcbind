#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "NavigatorUABrandVersion.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type UALowEntropyJSON */
DECLARE_EMLITE_TYPE(UALowEntropyJSON, em_Val);

/** @brief Getter of the brands property */
jb_Array UALowEntropyJSON_brands(const UALowEntropyJSON *self);

/** @brief Setter of the brands property */
void UALowEntropyJSON_set_brands(UALowEntropyJSON* self, jb_Array * value);

/** @brief Getter of the mobile property */
bool UALowEntropyJSON_mobile(const UALowEntropyJSON *self);

/** @brief Setter of the mobile property */
void UALowEntropyJSON_set_mobile(UALowEntropyJSON* self, bool value);

/** @brief Getter of the platform property */
jb_String UALowEntropyJSON_platform(const UALowEntropyJSON *self);

/** @brief Setter of the platform property */
void UALowEntropyJSON_set_platform(UALowEntropyJSON* self, jb_String * value);

/** @brief Constructor of the UALowEntropyJSON dictionary type */
UALowEntropyJSON UALowEntropyJSON_new();

#ifdef __cplusplus
}
#endif
