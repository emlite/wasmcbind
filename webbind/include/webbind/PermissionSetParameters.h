#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(PermissionSetParameters, em_Val);

jb_Object PermissionSetParameters_descriptor(const PermissionSetParameters *self);

void PermissionSetParameters_set_descriptor(PermissionSetParameters* self, jb_Object * value);

PermissionState PermissionSetParameters_state(const PermissionSetParameters *self);

void PermissionSetParameters_set_state(PermissionSetParameters* self, PermissionState * value);

PermissionSetParameters PermissionSetParameters_new();

#ifdef __cplusplus
}
#endif
