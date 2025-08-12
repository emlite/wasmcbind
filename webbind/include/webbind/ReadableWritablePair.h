#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct ReadableStream ReadableStream;
typedef struct WritableStream WritableStream;

/** @brief Dictionary type ReadableWritablePair */
DECLARE_EMLITE_TYPE(ReadableWritablePair, em_Val);

/** @brief Getter of the readable property */
ReadableStream ReadableWritablePair_readable(const ReadableWritablePair *self);

/** @brief Setter of the readable property */
void ReadableWritablePair_set_readable(ReadableWritablePair* self, ReadableStream * value);

/** @brief Getter of the writable property */
WritableStream ReadableWritablePair_writable(const ReadableWritablePair *self);

/** @brief Setter of the writable property */
void ReadableWritablePair_set_writable(ReadableWritablePair* self, WritableStream * value);

/** @brief Constructor of the ReadableWritablePair dictionary type */
ReadableWritablePair ReadableWritablePair_new();

#ifdef __cplusplus
}
#endif
