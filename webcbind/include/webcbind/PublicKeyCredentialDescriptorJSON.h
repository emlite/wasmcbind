#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type PublicKeyCredentialDescriptorJSON */
DECLARE_EMLITE_TYPE(PublicKeyCredentialDescriptorJSON, em_Val);

/** @brief Getter of the type property */
jb_String PublicKeyCredentialDescriptorJSON_type(const PublicKeyCredentialDescriptorJSON *self);

/** @brief Setter of the type property */
void PublicKeyCredentialDescriptorJSON_set_type(PublicKeyCredentialDescriptorJSON* self, jb_String * value);

/** @brief Getter of the id property */
jb_Any PublicKeyCredentialDescriptorJSON_id(const PublicKeyCredentialDescriptorJSON *self);

/** @brief Setter of the id property */
void PublicKeyCredentialDescriptorJSON_set_id(PublicKeyCredentialDescriptorJSON* self, jb_Any * value);

/** @brief Getter of the transports property */
jb_Array PublicKeyCredentialDescriptorJSON_transports(const PublicKeyCredentialDescriptorJSON *self);

/** @brief Setter of the transports property */
void PublicKeyCredentialDescriptorJSON_set_transports(PublicKeyCredentialDescriptorJSON* self, jb_Array * value);

/** @brief Constructor of the PublicKeyCredentialDescriptorJSON dictionary type */
PublicKeyCredentialDescriptorJSON PublicKeyCredentialDescriptorJSON_new();

#ifdef __cplusplus
}
#endif
