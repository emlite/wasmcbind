#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct Element Element;

/** @brief Dictionary type PointerTimelineOptions */
DECLARE_EMLITE_TYPE(PointerTimelineOptions, em_Val);

/** @brief Getter of the source property */
Element PointerTimelineOptions_source(const PointerTimelineOptions *self);

/** @brief Setter of the source property */
void PointerTimelineOptions_set_source(PointerTimelineOptions* self, Element * value);

/** @brief Getter of the axis property */
PointerAxis PointerTimelineOptions_axis(const PointerTimelineOptions *self);

/** @brief Setter of the axis property */
void PointerTimelineOptions_set_axis(PointerTimelineOptions* self, PointerAxis * value);

/** @brief Constructor of the PointerTimelineOptions dictionary type */
PointerTimelineOptions PointerTimelineOptions_new();

#ifdef __cplusplus
}
#endif
