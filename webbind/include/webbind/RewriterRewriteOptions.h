#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct AbortSignal AbortSignal;

/** @brief Dictionary type RewriterRewriteOptions */
DECLARE_EMLITE_TYPE(RewriterRewriteOptions, em_Val);

/** @brief Getter of the context property */
jb_String RewriterRewriteOptions_context(const RewriterRewriteOptions *self);

/** @brief Setter of the context property */
void RewriterRewriteOptions_set_context(RewriterRewriteOptions* self, jb_String * value);

/** @brief Getter of the signal property */
AbortSignal RewriterRewriteOptions_signal(const RewriterRewriteOptions *self);

/** @brief Setter of the signal property */
void RewriterRewriteOptions_set_signal(RewriterRewriteOptions* self, AbortSignal * value);

/** @brief Constructor of the RewriterRewriteOptions dictionary type */
RewriterRewriteOptions RewriterRewriteOptions_new();

#ifdef __cplusplus
}
#endif
