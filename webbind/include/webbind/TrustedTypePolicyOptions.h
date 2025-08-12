#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type TrustedTypePolicyOptions */
DECLARE_EMLITE_TYPE(TrustedTypePolicyOptions, em_Val);

/** @brief Getter of the createHTML property */
jb_Function TrustedTypePolicyOptions_createHTML(const TrustedTypePolicyOptions *self);

/** @brief Setter of the createHTML property */
void TrustedTypePolicyOptions_set_createHTML(TrustedTypePolicyOptions* self, jb_Function * value);

/** @brief Getter of the createScript property */
jb_Function TrustedTypePolicyOptions_createScript(const TrustedTypePolicyOptions *self);

/** @brief Setter of the createScript property */
void TrustedTypePolicyOptions_set_createScript(TrustedTypePolicyOptions* self, jb_Function * value);

/** @brief Getter of the createScriptURL property */
jb_Function TrustedTypePolicyOptions_createScriptURL(const TrustedTypePolicyOptions *self);

/** @brief Setter of the createScriptURL property */
void TrustedTypePolicyOptions_set_createScriptURL(TrustedTypePolicyOptions* self, jb_Function * value);

/** @brief Constructor of the TrustedTypePolicyOptions dictionary type */
TrustedTypePolicyOptions TrustedTypePolicyOptions_new();

#ifdef __cplusplus
}
#endif
