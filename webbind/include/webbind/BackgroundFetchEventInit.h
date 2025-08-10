#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "ExtendableEventInit.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct BackgroundFetchRegistration BackgroundFetchRegistration;

DECLARE_EMLITE_TYPE(BackgroundFetchEventInit, ExtendableEventInit);

BackgroundFetchRegistration BackgroundFetchEventInit_registration(const BackgroundFetchEventInit *self);

void BackgroundFetchEventInit_set_registration(BackgroundFetchEventInit* self, BackgroundFetchRegistration * value);

BackgroundFetchEventInit BackgroundFetchEventInit_new();

#ifdef __cplusplus
}
#endif
