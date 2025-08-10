#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct AbortSignal AbortSignal;

DECLARE_EMLITE_TYPE(WriterWriteOptions, em_Val);

jb_String WriterWriteOptions_context(const WriterWriteOptions *self);

void WriterWriteOptions_set_context(WriterWriteOptions* self, jb_String * value);

AbortSignal WriterWriteOptions_signal(const WriterWriteOptions *self);

void WriterWriteOptions_set_signal(WriterWriteOptions* self, AbortSignal * value);

WriterWriteOptions WriterWriteOptions_new();

#ifdef __cplusplus
}
#endif
