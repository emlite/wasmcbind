#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type ReadableStreamReadResult */
DECLARE_EMLITE_TYPE(ReadableStreamReadResult, em_Val);

/** @brief Getter of the value property */
jb_Any ReadableStreamReadResult_value(const ReadableStreamReadResult *self);

/** @brief Setter of the value property */
void ReadableStreamReadResult_set_value(ReadableStreamReadResult* self, jb_Any * value);

/** @brief Getter of the done property */
bool ReadableStreamReadResult_done(const ReadableStreamReadResult *self);

/** @brief Setter of the done property */
void ReadableStreamReadResult_set_done(ReadableStreamReadResult* self, bool value);

/** @brief Constructor of the ReadableStreamReadResult dictionary type */
ReadableStreamReadResult ReadableStreamReadResult_new();

#ifdef __cplusplus
}
#endif
