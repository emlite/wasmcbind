#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type CollectedClientData */
DECLARE_EMLITE_TYPE(CollectedClientData, em_Val);

/** @brief Getter of the type property */
jb_String CollectedClientData_type(const CollectedClientData *self);

/** @brief Setter of the type property */
void CollectedClientData_set_type(CollectedClientData* self, jb_String * value);

/** @brief Getter of the challenge property */
jb_String CollectedClientData_challenge(const CollectedClientData *self);

/** @brief Setter of the challenge property */
void CollectedClientData_set_challenge(CollectedClientData* self, jb_String * value);

/** @brief Getter of the origin property */
jb_String CollectedClientData_origin(const CollectedClientData *self);

/** @brief Setter of the origin property */
void CollectedClientData_set_origin(CollectedClientData* self, jb_String * value);

/** @brief Getter of the crossOrigin property */
bool CollectedClientData_crossOrigin(const CollectedClientData *self);

/** @brief Setter of the crossOrigin property */
void CollectedClientData_set_crossOrigin(CollectedClientData* self, bool value);

/** @brief Getter of the topOrigin property */
jb_String CollectedClientData_topOrigin(const CollectedClientData *self);

/** @brief Setter of the topOrigin property */
void CollectedClientData_set_topOrigin(CollectedClientData* self, jb_String * value);

/** @brief Constructor of the CollectedClientData dictionary type */
CollectedClientData CollectedClientData_new();

#ifdef __cplusplus
}
#endif
