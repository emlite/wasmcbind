#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type AllAcceptedCredentialsOptions */
DECLARE_EMLITE_TYPE(AllAcceptedCredentialsOptions, em_Val);

/** @brief Getter of the rpId property */
jb_String AllAcceptedCredentialsOptions_rpId(const AllAcceptedCredentialsOptions *self);

/** @brief Setter of the rpId property */
void AllAcceptedCredentialsOptions_set_rpId(AllAcceptedCredentialsOptions* self, jb_String * value);

/** @brief Getter of the userId property */
jb_Any AllAcceptedCredentialsOptions_userId(const AllAcceptedCredentialsOptions *self);

/** @brief Setter of the userId property */
void AllAcceptedCredentialsOptions_set_userId(AllAcceptedCredentialsOptions* self, jb_Any * value);

/** @brief Getter of the allAcceptedCredentialIds property */
jb_Array AllAcceptedCredentialsOptions_allAcceptedCredentialIds(const AllAcceptedCredentialsOptions *self);

/** @brief Setter of the allAcceptedCredentialIds property */
void AllAcceptedCredentialsOptions_set_allAcceptedCredentialIds(AllAcceptedCredentialsOptions* self, jb_Array * value);

/** @brief Constructor of the AllAcceptedCredentialsOptions dictionary type */
AllAcceptedCredentialsOptions AllAcceptedCredentialsOptions_new();

#ifdef __cplusplus
}
#endif
