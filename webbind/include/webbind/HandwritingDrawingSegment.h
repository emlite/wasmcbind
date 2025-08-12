#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type HandwritingDrawingSegment */
DECLARE_EMLITE_TYPE(HandwritingDrawingSegment, em_Val);

/** @brief Getter of the strokeIndex property */
unsigned long HandwritingDrawingSegment_strokeIndex(const HandwritingDrawingSegment *self);

/** @brief Setter of the strokeIndex property */
void HandwritingDrawingSegment_set_strokeIndex(HandwritingDrawingSegment* self, unsigned long value);

/** @brief Getter of the beginPointIndex property */
unsigned long HandwritingDrawingSegment_beginPointIndex(const HandwritingDrawingSegment *self);

/** @brief Setter of the beginPointIndex property */
void HandwritingDrawingSegment_set_beginPointIndex(HandwritingDrawingSegment* self, unsigned long value);

/** @brief Getter of the endPointIndex property */
unsigned long HandwritingDrawingSegment_endPointIndex(const HandwritingDrawingSegment *self);

/** @brief Setter of the endPointIndex property */
void HandwritingDrawingSegment_set_endPointIndex(HandwritingDrawingSegment* self, unsigned long value);

/** @brief Constructor of the HandwritingDrawingSegment dictionary type */
HandwritingDrawingSegment HandwritingDrawingSegment_new();

#ifdef __cplusplus
}
#endif
