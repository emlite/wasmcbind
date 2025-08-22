#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type PublicKeyCredentialUserEntityJSON */
DECLARE_EMLITE_TYPE(PublicKeyCredentialUserEntityJSON, em_Val);

/** @brief Getter of the id property */
jb_Any PublicKeyCredentialUserEntityJSON_id(const PublicKeyCredentialUserEntityJSON *self);

/** @brief Setter of the id property */
void PublicKeyCredentialUserEntityJSON_set_id(PublicKeyCredentialUserEntityJSON* self, jb_Any * value);

/** @brief Getter of the name property */
jb_String PublicKeyCredentialUserEntityJSON_name(const PublicKeyCredentialUserEntityJSON *self);

/** @brief Setter of the name property */
void PublicKeyCredentialUserEntityJSON_set_name(PublicKeyCredentialUserEntityJSON* self, jb_String * value);

/** @brief Getter of the displayName property */
jb_String PublicKeyCredentialUserEntityJSON_displayName(const PublicKeyCredentialUserEntityJSON *self);

/** @brief Setter of the displayName property */
void PublicKeyCredentialUserEntityJSON_set_displayName(PublicKeyCredentialUserEntityJSON* self, jb_String * value);

/** @brief Constructor of the PublicKeyCredentialUserEntityJSON dictionary type */
PublicKeyCredentialUserEntityJSON PublicKeyCredentialUserEntityJSON_new();

#ifdef __cplusplus
}
#endif
