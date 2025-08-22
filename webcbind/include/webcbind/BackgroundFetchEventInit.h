#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "ExtendableEventInit.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct BackgroundFetchRegistration BackgroundFetchRegistration;

/** @brief Dictionary type BackgroundFetchEventInit */
DECLARE_EMLITE_TYPE(BackgroundFetchEventInit, ExtendableEventInit);

/** @brief Getter of the registration property */
BackgroundFetchRegistration BackgroundFetchEventInit_registration(const BackgroundFetchEventInit *self);

/** @brief Setter of the registration property */
void BackgroundFetchEventInit_set_registration(BackgroundFetchEventInit* self, BackgroundFetchRegistration * value);

/** @brief Constructor of the BackgroundFetchEventInit dictionary type */
BackgroundFetchEventInit BackgroundFetchEventInit_new();

#ifdef __cplusplus
}
#endif
