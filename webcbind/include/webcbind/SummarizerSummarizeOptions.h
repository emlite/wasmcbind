#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct AbortSignal AbortSignal;

/** @brief Dictionary type SummarizerSummarizeOptions */
DECLARE_EMLITE_TYPE(SummarizerSummarizeOptions, em_Val);

/** @brief Getter of the signal property */
AbortSignal SummarizerSummarizeOptions_signal(const SummarizerSummarizeOptions *self);

/** @brief Setter of the signal property */
void SummarizerSummarizeOptions_set_signal(SummarizerSummarizeOptions* self, AbortSignal * value);

/** @brief Getter of the context property */
jb_String SummarizerSummarizeOptions_context(const SummarizerSummarizeOptions *self);

/** @brief Setter of the context property */
void SummarizerSummarizeOptions_set_context(SummarizerSummarizeOptions* self, jb_String * value);

/** @brief Constructor of the SummarizerSummarizeOptions dictionary type */
SummarizerSummarizeOptions SummarizerSummarizeOptions_new();

#ifdef __cplusplus
}
#endif
