#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "WriterCreateCoreOptions.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct AbortSignal AbortSignal;

DECLARE_EMLITE_TYPE(WriterCreateOptions, WriterCreateCoreOptions);

AbortSignal WriterCreateOptions_signal(const WriterCreateOptions *self);

void WriterCreateOptions_set_signal(WriterCreateOptions* self, AbortSignal * value);

jb_Function WriterCreateOptions_monitor(const WriterCreateOptions *self);

void WriterCreateOptions_set_monitor(WriterCreateOptions* self, jb_Function * value);

jb_String WriterCreateOptions_sharedContext(const WriterCreateOptions *self);

void WriterCreateOptions_set_sharedContext(WriterCreateOptions* self, jb_String * value);

WriterCreateOptions WriterCreateOptions_new();

#ifdef __cplusplus
}
#endif
