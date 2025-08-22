#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type BlobPropertyBag */
DECLARE_EMLITE_TYPE(BlobPropertyBag, em_Val);

/** @brief Getter of the type property */
jb_String BlobPropertyBag_type(const BlobPropertyBag *self);

/** @brief Setter of the type property */
void BlobPropertyBag_set_type(BlobPropertyBag* self, jb_String * value);

/** @brief Getter of the endings property */
EndingType BlobPropertyBag_endings(const BlobPropertyBag *self);

/** @brief Setter of the endings property */
void BlobPropertyBag_set_endings(BlobPropertyBag* self, EndingType * value);

/** @brief Constructor of the BlobPropertyBag dictionary type */
BlobPropertyBag BlobPropertyBag_new();

#ifdef __cplusplus
}
#endif
