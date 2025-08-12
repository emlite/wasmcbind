#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "HandwritingDrawingSegment.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type HandwritingSegment */
DECLARE_EMLITE_TYPE(HandwritingSegment, em_Val);

/** @brief Getter of the grapheme property */
jb_String HandwritingSegment_grapheme(const HandwritingSegment *self);

/** @brief Setter of the grapheme property */
void HandwritingSegment_set_grapheme(HandwritingSegment* self, jb_String * value);

/** @brief Getter of the beginIndex property */
unsigned long HandwritingSegment_beginIndex(const HandwritingSegment *self);

/** @brief Setter of the beginIndex property */
void HandwritingSegment_set_beginIndex(HandwritingSegment* self, unsigned long value);

/** @brief Getter of the endIndex property */
unsigned long HandwritingSegment_endIndex(const HandwritingSegment *self);

/** @brief Setter of the endIndex property */
void HandwritingSegment_set_endIndex(HandwritingSegment* self, unsigned long value);

/** @brief Getter of the drawingSegments property */
jb_Array HandwritingSegment_drawingSegments(const HandwritingSegment *self);

/** @brief Setter of the drawingSegments property */
void HandwritingSegment_set_drawingSegments(HandwritingSegment* self, jb_Array * value);

/** @brief Constructor of the HandwritingSegment dictionary type */
HandwritingSegment HandwritingSegment_new();

#ifdef __cplusplus
}
#endif
