#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct ShadowRoot ShadowRoot;

/** @brief Dictionary type GetHTMLOptions */
DECLARE_EMLITE_TYPE(GetHTMLOptions, em_Val);

/** @brief Getter of the serializableShadowRoots property */
bool GetHTMLOptions_serializableShadowRoots(const GetHTMLOptions *self);

/** @brief Setter of the serializableShadowRoots property */
void GetHTMLOptions_set_serializableShadowRoots(GetHTMLOptions* self, bool value);

/** @brief Getter of the shadowRoots property */
jb_Array GetHTMLOptions_shadowRoots(const GetHTMLOptions *self);

/** @brief Setter of the shadowRoots property */
void GetHTMLOptions_set_shadowRoots(GetHTMLOptions* self, jb_Array * value);

/** @brief Constructor of the GetHTMLOptions dictionary type */
GetHTMLOptions GetHTMLOptions_new();

#ifdef __cplusplus
}
#endif
