#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct Element Element;

/** @brief Dictionary type ScrollTimelineOptions */
DECLARE_EMLITE_TYPE(ScrollTimelineOptions, em_Val);

/** @brief Getter of the source property */
Element ScrollTimelineOptions_source(const ScrollTimelineOptions *self);

/** @brief Setter of the source property */
void ScrollTimelineOptions_set_source(ScrollTimelineOptions* self, Element * value);

/** @brief Getter of the axis property */
ScrollAxis ScrollTimelineOptions_axis(const ScrollTimelineOptions *self);

/** @brief Setter of the axis property */
void ScrollTimelineOptions_set_axis(ScrollTimelineOptions* self, ScrollAxis * value);

/** @brief Constructor of the ScrollTimelineOptions dictionary type */
ScrollTimelineOptions ScrollTimelineOptions_new();

#ifdef __cplusplus
}
#endif
