#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type DocumentTimelineOptions */
DECLARE_EMLITE_TYPE(DocumentTimelineOptions, em_Val);

/** @brief Getter of the originTime property */
jb_Any DocumentTimelineOptions_originTime(const DocumentTimelineOptions *self);

/** @brief Setter of the originTime property */
void DocumentTimelineOptions_set_originTime(DocumentTimelineOptions* self, jb_Any * value);

/** @brief Constructor of the DocumentTimelineOptions dictionary type */
DocumentTimelineOptions DocumentTimelineOptions_new();

#ifdef __cplusplus
}
#endif
