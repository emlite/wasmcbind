#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "SummarizerCreateCoreOptions.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct AbortSignal AbortSignal;

/** @brief Dictionary type SummarizerCreateOptions */
DECLARE_EMLITE_TYPE(SummarizerCreateOptions, SummarizerCreateCoreOptions);

/** @brief Getter of the signal property */
AbortSignal SummarizerCreateOptions_signal(const SummarizerCreateOptions *self);

/** @brief Setter of the signal property */
void SummarizerCreateOptions_set_signal(SummarizerCreateOptions* self, AbortSignal * value);

/** @brief Getter of the monitor property */
jb_Function SummarizerCreateOptions_monitor(const SummarizerCreateOptions *self);

/** @brief Setter of the monitor property */
void SummarizerCreateOptions_set_monitor(SummarizerCreateOptions* self, jb_Function * value);

/** @brief Getter of the sharedContext property */
jb_String SummarizerCreateOptions_sharedContext(const SummarizerCreateOptions *self);

/** @brief Setter of the sharedContext property */
void SummarizerCreateOptions_set_sharedContext(SummarizerCreateOptions* self, jb_String * value);

/** @brief Constructor of the SummarizerCreateOptions dictionary type */
SummarizerCreateOptions SummarizerCreateOptions_new();

#ifdef __cplusplus
}
#endif
