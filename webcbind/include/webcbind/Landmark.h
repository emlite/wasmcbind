#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "Point2D.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type Landmark */
DECLARE_EMLITE_TYPE(Landmark, em_Val);

/** @brief Getter of the locations property */
jb_Array Landmark_locations(const Landmark *self);

/** @brief Setter of the locations property */
void Landmark_set_locations(Landmark* self, jb_Array * value);

/** @brief Getter of the type property */
LandmarkType Landmark_type(const Landmark *self);

/** @brief Setter of the type property */
void Landmark_set_type(Landmark* self, LandmarkType * value);

/** @brief Constructor of the Landmark dictionary type */
Landmark Landmark_new();

#ifdef __cplusplus
}
#endif
