#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct Node Node;

DECLARE_EMLITE_TYPE(SpatialNavigationSearchOptions, em_Val);

jb_Array SpatialNavigationSearchOptions_candidates(const SpatialNavigationSearchOptions *self);

void SpatialNavigationSearchOptions_set_candidates(SpatialNavigationSearchOptions* self, jb_Array * value);

Node SpatialNavigationSearchOptions_container(const SpatialNavigationSearchOptions *self);

void SpatialNavigationSearchOptions_set_container(SpatialNavigationSearchOptions* self, Node * value);

SpatialNavigationSearchOptions SpatialNavigationSearchOptions_new();

#ifdef __cplusplus
}
#endif
