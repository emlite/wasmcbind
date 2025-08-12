#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "HandwritingSegment.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type HandwritingPrediction */
DECLARE_EMLITE_TYPE(HandwritingPrediction, em_Val);

/** @brief Getter of the text property */
jb_String HandwritingPrediction_text(const HandwritingPrediction *self);

/** @brief Setter of the text property */
void HandwritingPrediction_set_text(HandwritingPrediction* self, jb_String * value);

/** @brief Getter of the segmentationResult property */
jb_Array HandwritingPrediction_segmentationResult(const HandwritingPrediction *self);

/** @brief Setter of the segmentationResult property */
void HandwritingPrediction_set_segmentationResult(HandwritingPrediction* self, jb_Array * value);

/** @brief Constructor of the HandwritingPrediction dictionary type */
HandwritingPrediction HandwritingPrediction_new();

#ifdef __cplusplus
}
#endif
