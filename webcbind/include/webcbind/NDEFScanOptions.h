#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct AbortSignal AbortSignal;

/** @brief Dictionary type NDEFScanOptions */
DECLARE_EMLITE_TYPE(NDEFScanOptions, em_Val);

/** @brief Getter of the signal property */
AbortSignal NDEFScanOptions_signal(const NDEFScanOptions *self);

/** @brief Setter of the signal property */
void NDEFScanOptions_set_signal(NDEFScanOptions* self, AbortSignal * value);

/** @brief Constructor of the NDEFScanOptions dictionary type */
NDEFScanOptions NDEFScanOptions_new();

#ifdef __cplusplus
}
#endif
