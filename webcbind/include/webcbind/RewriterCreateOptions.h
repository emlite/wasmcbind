#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "RewriterCreateCoreOptions.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct AbortSignal AbortSignal;

/** @brief Dictionary type RewriterCreateOptions */
DECLARE_EMLITE_TYPE(RewriterCreateOptions, RewriterCreateCoreOptions);

/** @brief Getter of the signal property */
AbortSignal RewriterCreateOptions_signal(const RewriterCreateOptions *self);

/** @brief Setter of the signal property */
void RewriterCreateOptions_set_signal(RewriterCreateOptions* self, AbortSignal * value);

/** @brief Getter of the monitor property */
jb_Function RewriterCreateOptions_monitor(const RewriterCreateOptions *self);

/** @brief Setter of the monitor property */
void RewriterCreateOptions_set_monitor(RewriterCreateOptions* self, jb_Function * value);

/** @brief Getter of the sharedContext property */
jb_String RewriterCreateOptions_sharedContext(const RewriterCreateOptions *self);

/** @brief Setter of the sharedContext property */
void RewriterCreateOptions_set_sharedContext(RewriterCreateOptions* self, jb_String * value);

/** @brief Constructor of the RewriterCreateOptions dictionary type */
RewriterCreateOptions RewriterCreateOptions_new();

#ifdef __cplusplus
}
#endif
