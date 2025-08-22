#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "BlobPropertyBag.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type FilePropertyBag */
DECLARE_EMLITE_TYPE(FilePropertyBag, BlobPropertyBag);

/** @brief Getter of the lastModified property */
long long FilePropertyBag_lastModified(const FilePropertyBag *self);

/** @brief Setter of the lastModified property */
void FilePropertyBag_set_lastModified(FilePropertyBag* self, long long value);

/** @brief Constructor of the FilePropertyBag dictionary type */
FilePropertyBag FilePropertyBag_new();

#ifdef __cplusplus
}
#endif
