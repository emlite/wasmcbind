#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type ReadableStreamIteratorOptions */
DECLARE_EMLITE_TYPE(ReadableStreamIteratorOptions, em_Val);

/** @brief Getter of the preventCancel property */
bool ReadableStreamIteratorOptions_preventCancel(const ReadableStreamIteratorOptions *self);

/** @brief Setter of the preventCancel property */
void ReadableStreamIteratorOptions_set_preventCancel(ReadableStreamIteratorOptions* self, bool value);

/** @brief Constructor of the ReadableStreamIteratorOptions dictionary type */
ReadableStreamIteratorOptions ReadableStreamIteratorOptions_new();

#ifdef __cplusplus
}
#endif
