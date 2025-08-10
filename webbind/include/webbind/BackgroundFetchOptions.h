#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "BackgroundFetchUIOptions.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(BackgroundFetchOptions, BackgroundFetchUIOptions);

long long BackgroundFetchOptions_downloadTotal(const BackgroundFetchOptions *self);

void BackgroundFetchOptions_set_downloadTotal(BackgroundFetchOptions* self, long long value);

BackgroundFetchOptions BackgroundFetchOptions_new();

#ifdef __cplusplus
}
#endif
