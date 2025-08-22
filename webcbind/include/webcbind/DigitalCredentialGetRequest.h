#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type DigitalCredentialGetRequest */
DECLARE_EMLITE_TYPE(DigitalCredentialGetRequest, em_Val);

/** @brief Getter of the protocol property */
jb_String DigitalCredentialGetRequest_protocol(const DigitalCredentialGetRequest *self);

/** @brief Setter of the protocol property */
void DigitalCredentialGetRequest_set_protocol(DigitalCredentialGetRequest* self, jb_String * value);

/** @brief Getter of the data property */
jb_Object DigitalCredentialGetRequest_data(const DigitalCredentialGetRequest *self);

/** @brief Setter of the data property */
void DigitalCredentialGetRequest_set_data(DigitalCredentialGetRequest* self, jb_Object * value);

/** @brief Constructor of the DigitalCredentialGetRequest dictionary type */
DigitalCredentialGetRequest DigitalCredentialGetRequest_new();

#ifdef __cplusplus
}
#endif
