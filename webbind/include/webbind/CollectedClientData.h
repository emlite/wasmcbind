#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(CollectedClientData, em_Val);

jb_String CollectedClientData_type(const CollectedClientData *self);

void CollectedClientData_set_type(CollectedClientData* self, jb_String * value);

jb_String CollectedClientData_challenge(const CollectedClientData *self);

void CollectedClientData_set_challenge(CollectedClientData* self, jb_String * value);

jb_String CollectedClientData_origin(const CollectedClientData *self);

void CollectedClientData_set_origin(CollectedClientData* self, jb_String * value);

bool CollectedClientData_crossOrigin(const CollectedClientData *self);

void CollectedClientData_set_crossOrigin(CollectedClientData* self, bool value);

jb_String CollectedClientData_topOrigin(const CollectedClientData *self);

void CollectedClientData_set_topOrigin(CollectedClientData* self, jb_String * value);

CollectedClientData CollectedClientData_new();

#ifdef __cplusplus
}
#endif
