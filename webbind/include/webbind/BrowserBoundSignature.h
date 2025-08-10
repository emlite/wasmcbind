#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(BrowserBoundSignature, em_Val);

jb_ArrayBuffer BrowserBoundSignature_signature(const BrowserBoundSignature *self);

void BrowserBoundSignature_set_signature(BrowserBoundSignature* self, jb_ArrayBuffer * value);

BrowserBoundSignature BrowserBoundSignature_new();

#ifdef __cplusplus
}
#endif
