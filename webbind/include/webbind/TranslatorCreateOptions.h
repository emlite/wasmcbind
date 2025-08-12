#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "TranslatorCreateCoreOptions.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct AbortSignal AbortSignal;

/** @brief Dictionary type TranslatorCreateOptions */
DECLARE_EMLITE_TYPE(TranslatorCreateOptions, TranslatorCreateCoreOptions);

/** @brief Getter of the signal property */
AbortSignal TranslatorCreateOptions_signal(const TranslatorCreateOptions *self);

/** @brief Setter of the signal property */
void TranslatorCreateOptions_set_signal(TranslatorCreateOptions* self, AbortSignal * value);

/** @brief Getter of the monitor property */
jb_Function TranslatorCreateOptions_monitor(const TranslatorCreateOptions *self);

/** @brief Setter of the monitor property */
void TranslatorCreateOptions_set_monitor(TranslatorCreateOptions* self, jb_Function * value);

/** @brief Constructor of the TranslatorCreateOptions dictionary type */
TranslatorCreateOptions TranslatorCreateOptions_new();

#ifdef __cplusplus
}
#endif
