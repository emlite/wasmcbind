#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type ReadableStreamGetReaderOptions */
DECLARE_EMLITE_TYPE(ReadableStreamGetReaderOptions, em_Val);

/** @brief Getter of the mode property */
ReadableStreamReaderMode ReadableStreamGetReaderOptions_mode(const ReadableStreamGetReaderOptions *self);

/** @brief Setter of the mode property */
void ReadableStreamGetReaderOptions_set_mode(ReadableStreamGetReaderOptions* self, ReadableStreamReaderMode * value);

/** @brief Constructor of the ReadableStreamGetReaderOptions dictionary type */
ReadableStreamGetReaderOptions ReadableStreamGetReaderOptions_new();

#ifdef __cplusplus
}
#endif
