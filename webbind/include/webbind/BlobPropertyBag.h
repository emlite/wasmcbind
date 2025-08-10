#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(BlobPropertyBag, em_Val);

jb_String BlobPropertyBag_type(const BlobPropertyBag *self);

void BlobPropertyBag_set_type(BlobPropertyBag* self, jb_String * value);

EndingType BlobPropertyBag_endings(const BlobPropertyBag *self);

void BlobPropertyBag_set_endings(BlobPropertyBag* self, EndingType * value);

BlobPropertyBag BlobPropertyBag_new();

#ifdef __cplusplus
}
#endif
