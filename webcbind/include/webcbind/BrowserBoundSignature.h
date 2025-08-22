#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type BrowserBoundSignature */
DECLARE_EMLITE_TYPE(BrowserBoundSignature, em_Val);

/** @brief Getter of the signature property */
jb_ArrayBuffer BrowserBoundSignature_signature(const BrowserBoundSignature *self);

/** @brief Setter of the signature property */
void BrowserBoundSignature_set_signature(BrowserBoundSignature* self, jb_ArrayBuffer * value);

/** @brief Constructor of the BrowserBoundSignature dictionary type */
BrowserBoundSignature BrowserBoundSignature_new();

#ifdef __cplusplus
}
#endif
