#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "DigitalCredentialGetRequest.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type DigitalCredentialRequestOptions */
DECLARE_EMLITE_TYPE(DigitalCredentialRequestOptions, em_Val);

/** @brief Getter of the requests property */
jb_Array DigitalCredentialRequestOptions_requests(const DigitalCredentialRequestOptions *self);

/** @brief Setter of the requests property */
void DigitalCredentialRequestOptions_set_requests(DigitalCredentialRequestOptions* self, jb_Array * value);

/** @brief Constructor of the DigitalCredentialRequestOptions dictionary type */
DigitalCredentialRequestOptions DigitalCredentialRequestOptions_new();

#ifdef __cplusplus
}
#endif
