#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct AbortSignal AbortSignal;

/** @brief Dictionary type WriterWriteOptions */
DECLARE_EMLITE_TYPE(WriterWriteOptions, em_Val);

/** @brief Getter of the context property */
jb_String WriterWriteOptions_context(const WriterWriteOptions *self);

/** @brief Setter of the context property */
void WriterWriteOptions_set_context(WriterWriteOptions* self, jb_String * value);

/** @brief Getter of the signal property */
AbortSignal WriterWriteOptions_signal(const WriterWriteOptions *self);

/** @brief Setter of the signal property */
void WriterWriteOptions_set_signal(WriterWriteOptions* self, AbortSignal * value);

/** @brief Constructor of the WriterWriteOptions dictionary type */
WriterWriteOptions WriterWriteOptions_new();

#ifdef __cplusplus
}
#endif
