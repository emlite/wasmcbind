#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type PermissionSetParameters */
DECLARE_EMLITE_TYPE(PermissionSetParameters, em_Val);

/** @brief Getter of the descriptor property */
jb_Object PermissionSetParameters_descriptor(const PermissionSetParameters *self);

/** @brief Setter of the descriptor property */
void PermissionSetParameters_set_descriptor(PermissionSetParameters* self, jb_Object * value);

/** @brief Getter of the state property */
PermissionState PermissionSetParameters_state(const PermissionSetParameters *self);

/** @brief Setter of the state property */
void PermissionSetParameters_set_state(PermissionSetParameters* self, PermissionState * value);

/** @brief Constructor of the PermissionSetParameters dictionary type */
PermissionSetParameters PermissionSetParameters_new();

#ifdef __cplusplus
}
#endif
