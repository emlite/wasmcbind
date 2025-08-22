#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "BackgroundFetchUIOptions.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type BackgroundFetchOptions */
DECLARE_EMLITE_TYPE(BackgroundFetchOptions, BackgroundFetchUIOptions);

/** @brief Getter of the downloadTotal property */
long long BackgroundFetchOptions_downloadTotal(const BackgroundFetchOptions *self);

/** @brief Setter of the downloadTotal property */
void BackgroundFetchOptions_set_downloadTotal(BackgroundFetchOptions* self, long long value);

/** @brief Constructor of the BackgroundFetchOptions dictionary type */
BackgroundFetchOptions BackgroundFetchOptions_new();

#ifdef __cplusplus
}
#endif
