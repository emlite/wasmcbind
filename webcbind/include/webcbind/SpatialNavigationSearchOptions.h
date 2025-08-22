#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct Node Node;

/** @brief Dictionary type SpatialNavigationSearchOptions */
DECLARE_EMLITE_TYPE(SpatialNavigationSearchOptions, em_Val);

/** @brief Getter of the candidates property */
jb_Array SpatialNavigationSearchOptions_candidates(const SpatialNavigationSearchOptions *self);

/** @brief Setter of the candidates property */
void SpatialNavigationSearchOptions_set_candidates(SpatialNavigationSearchOptions* self, jb_Array * value);

/** @brief Getter of the container property */
Node SpatialNavigationSearchOptions_container(const SpatialNavigationSearchOptions *self);

/** @brief Setter of the container property */
void SpatialNavigationSearchOptions_set_container(SpatialNavigationSearchOptions* self, Node * value);

/** @brief Constructor of the SpatialNavigationSearchOptions dictionary type */
SpatialNavigationSearchOptions SpatialNavigationSearchOptions_new();

#ifdef __cplusplus
}
#endif
