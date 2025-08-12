#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "DigitalCredentialCreateRequest.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type DigitalCredentialCreationOptions */
DECLARE_EMLITE_TYPE(DigitalCredentialCreationOptions, em_Val);

/** @brief Getter of the requests property */
jb_Array DigitalCredentialCreationOptions_requests(const DigitalCredentialCreationOptions *self);

/** @brief Setter of the requests property */
void DigitalCredentialCreationOptions_set_requests(DigitalCredentialCreationOptions* self, jb_Array * value);

/** @brief Constructor of the DigitalCredentialCreationOptions dictionary type */
DigitalCredentialCreationOptions DigitalCredentialCreationOptions_new();

#ifdef __cplusplus
}
#endif
