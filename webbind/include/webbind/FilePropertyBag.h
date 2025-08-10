#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "BlobPropertyBag.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(FilePropertyBag, BlobPropertyBag);

long long FilePropertyBag_lastModified(const FilePropertyBag *self);

void FilePropertyBag_set_lastModified(FilePropertyBag* self, long long value);

FilePropertyBag FilePropertyBag_new();

#ifdef __cplusplus
}
#endif
