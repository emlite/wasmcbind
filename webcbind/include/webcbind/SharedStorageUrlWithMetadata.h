#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type SharedStorageUrlWithMetadata */
DECLARE_EMLITE_TYPE(SharedStorageUrlWithMetadata, em_Val);

/** @brief Getter of the url property */
jb_String SharedStorageUrlWithMetadata_url(const SharedStorageUrlWithMetadata *self);

/** @brief Setter of the url property */
void SharedStorageUrlWithMetadata_set_url(SharedStorageUrlWithMetadata* self, jb_String * value);

/** @brief Getter of the reportingMetadata property */
jb_Object SharedStorageUrlWithMetadata_reportingMetadata(const SharedStorageUrlWithMetadata *self);

/** @brief Setter of the reportingMetadata property */
void SharedStorageUrlWithMetadata_set_reportingMetadata(SharedStorageUrlWithMetadata* self, jb_Object * value);

/** @brief Constructor of the SharedStorageUrlWithMetadata dictionary type */
SharedStorageUrlWithMetadata SharedStorageUrlWithMetadata_new();

#ifdef __cplusplus
}
#endif
