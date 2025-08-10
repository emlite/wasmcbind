#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct AbortSignal AbortSignal;

DECLARE_EMLITE_TYPE(RewriterRewriteOptions, em_Val);

jb_String RewriterRewriteOptions_context(const RewriterRewriteOptions *self);

void RewriterRewriteOptions_set_context(RewriterRewriteOptions* self, jb_String * value);

AbortSignal RewriterRewriteOptions_signal(const RewriterRewriteOptions *self);

void RewriterRewriteOptions_set_signal(RewriterRewriteOptions* self, AbortSignal * value);

RewriterRewriteOptions RewriterRewriteOptions_new();

#ifdef __cplusplus
}
#endif
