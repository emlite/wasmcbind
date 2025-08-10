#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(SharedStorageUrlWithMetadata, em_Val);

jb_String SharedStorageUrlWithMetadata_url(const SharedStorageUrlWithMetadata *self);

void SharedStorageUrlWithMetadata_set_url(SharedStorageUrlWithMetadata* self, jb_String * value);

jb_Object SharedStorageUrlWithMetadata_reportingMetadata(const SharedStorageUrlWithMetadata *self);

void SharedStorageUrlWithMetadata_set_reportingMetadata(SharedStorageUrlWithMetadata* self, jb_Object * value);

SharedStorageUrlWithMetadata SharedStorageUrlWithMetadata_new();

#ifdef __cplusplus
}
#endif
