#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(TrustedTypePolicyOptions, em_Val);

jb_Function TrustedTypePolicyOptions_createHTML(const TrustedTypePolicyOptions *self);

void TrustedTypePolicyOptions_set_createHTML(TrustedTypePolicyOptions* self, jb_Function * value);

jb_Function TrustedTypePolicyOptions_createScript(const TrustedTypePolicyOptions *self);

void TrustedTypePolicyOptions_set_createScript(TrustedTypePolicyOptions* self, jb_Function * value);

jb_Function TrustedTypePolicyOptions_createScriptURL(const TrustedTypePolicyOptions *self);

void TrustedTypePolicyOptions_set_createScriptURL(TrustedTypePolicyOptions* self, jb_Function * value);

TrustedTypePolicyOptions TrustedTypePolicyOptions_new();

#ifdef __cplusplus
}
#endif
