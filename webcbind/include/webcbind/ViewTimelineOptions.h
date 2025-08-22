#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct Element Element;

/** @brief Dictionary type ViewTimelineOptions */
DECLARE_EMLITE_TYPE(ViewTimelineOptions, em_Val);

/** @brief Getter of the subject property */
Element ViewTimelineOptions_subject(const ViewTimelineOptions *self);

/** @brief Setter of the subject property */
void ViewTimelineOptions_set_subject(ViewTimelineOptions* self, Element * value);

/** @brief Getter of the axis property */
ScrollAxis ViewTimelineOptions_axis(const ViewTimelineOptions *self);

/** @brief Setter of the axis property */
void ViewTimelineOptions_set_axis(ViewTimelineOptions* self, ScrollAxis * value);

/** @brief Getter of the inset property */
jb_Any ViewTimelineOptions_inset(const ViewTimelineOptions *self);

/** @brief Setter of the inset property */
void ViewTimelineOptions_set_inset(ViewTimelineOptions* self, jb_Any * value);

/** @brief Constructor of the ViewTimelineOptions dictionary type */
ViewTimelineOptions ViewTimelineOptions_new();

#ifdef __cplusplus
}
#endif
