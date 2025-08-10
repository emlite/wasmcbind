#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "Point2D.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(Landmark, em_Val);

jb_Array Landmark_locations(const Landmark *self);

void Landmark_set_locations(Landmark* self, jb_Array * value);

LandmarkType Landmark_type(const Landmark *self);

void Landmark_set_type(Landmark* self, LandmarkType * value);

Landmark Landmark_new();

#ifdef __cplusplus
}
#endif
