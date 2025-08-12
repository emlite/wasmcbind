#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type PublicKeyCredentialDescriptor */
DECLARE_EMLITE_TYPE(PublicKeyCredentialDescriptor, em_Val);

/** @brief Getter of the type property */
jb_String PublicKeyCredentialDescriptor_type(const PublicKeyCredentialDescriptor *self);

/** @brief Setter of the type property */
void PublicKeyCredentialDescriptor_set_type(PublicKeyCredentialDescriptor* self, jb_String * value);

/** @brief Getter of the id property */
jb_Any PublicKeyCredentialDescriptor_id(const PublicKeyCredentialDescriptor *self);

/** @brief Setter of the id property */
void PublicKeyCredentialDescriptor_set_id(PublicKeyCredentialDescriptor* self, jb_Any * value);

/** @brief Getter of the transports property */
jb_Array PublicKeyCredentialDescriptor_transports(const PublicKeyCredentialDescriptor *self);

/** @brief Setter of the transports property */
void PublicKeyCredentialDescriptor_set_transports(PublicKeyCredentialDescriptor* self, jb_Array * value);

/** @brief Constructor of the PublicKeyCredentialDescriptor dictionary type */
PublicKeyCredentialDescriptor PublicKeyCredentialDescriptor_new();

#ifdef __cplusplus
}
#endif
