#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "RewriterCreateCoreOptions.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct AbortSignal AbortSignal;

DECLARE_EMLITE_TYPE(RewriterCreateOptions, RewriterCreateCoreOptions);

AbortSignal RewriterCreateOptions_signal(const RewriterCreateOptions *self);

void RewriterCreateOptions_set_signal(RewriterCreateOptions* self, AbortSignal * value);

jb_Function RewriterCreateOptions_monitor(const RewriterCreateOptions *self);

void RewriterCreateOptions_set_monitor(RewriterCreateOptions* self, jb_Function * value);

jb_String RewriterCreateOptions_sharedContext(const RewriterCreateOptions *self);

void RewriterCreateOptions_set_sharedContext(RewriterCreateOptions* self, jb_String * value);

RewriterCreateOptions RewriterCreateOptions_new();

#ifdef __cplusplus
}
#endif
