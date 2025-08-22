#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type DigitalCredentialCreateRequest */
DECLARE_EMLITE_TYPE(DigitalCredentialCreateRequest, em_Val);

/** @brief Getter of the protocol property */
jb_String DigitalCredentialCreateRequest_protocol(const DigitalCredentialCreateRequest *self);

/** @brief Setter of the protocol property */
void DigitalCredentialCreateRequest_set_protocol(DigitalCredentialCreateRequest* self, jb_String * value);

/** @brief Getter of the data property */
jb_Object DigitalCredentialCreateRequest_data(const DigitalCredentialCreateRequest *self);

/** @brief Setter of the data property */
void DigitalCredentialCreateRequest_set_data(DigitalCredentialCreateRequest* self, jb_Object * value);

/** @brief Constructor of the DigitalCredentialCreateRequest dictionary type */
DigitalCredentialCreateRequest DigitalCredentialCreateRequest_new();

#ifdef __cplusplus
}
#endif
