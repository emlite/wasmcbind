#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type ReadableStreamBYOBReaderReadOptions */
DECLARE_EMLITE_TYPE(ReadableStreamBYOBReaderReadOptions, em_Val);

/** @brief Getter of the min property */
long long ReadableStreamBYOBReaderReadOptions_min(const ReadableStreamBYOBReaderReadOptions *self);

/** @brief Setter of the min property */
void ReadableStreamBYOBReaderReadOptions_set_min(ReadableStreamBYOBReaderReadOptions* self, long long value);

/** @brief Constructor of the ReadableStreamBYOBReaderReadOptions dictionary type */
ReadableStreamBYOBReaderReadOptions ReadableStreamBYOBReaderReadOptions_new();

#ifdef __cplusplus
}
#endif
