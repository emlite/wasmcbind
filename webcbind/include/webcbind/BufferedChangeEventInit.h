#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "EventInit.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct TimeRanges TimeRanges;

/** @brief Dictionary type BufferedChangeEventInit */
DECLARE_EMLITE_TYPE(BufferedChangeEventInit, EventInit);

/** @brief Getter of the addedRanges property */
TimeRanges BufferedChangeEventInit_addedRanges(const BufferedChangeEventInit *self);

/** @brief Setter of the addedRanges property */
void BufferedChangeEventInit_set_addedRanges(BufferedChangeEventInit* self, TimeRanges * value);

/** @brief Getter of the removedRanges property */
TimeRanges BufferedChangeEventInit_removedRanges(const BufferedChangeEventInit *self);

/** @brief Setter of the removedRanges property */
void BufferedChangeEventInit_set_removedRanges(BufferedChangeEventInit* self, TimeRanges * value);

/** @brief Constructor of the BufferedChangeEventInit dictionary type */
BufferedChangeEventInit BufferedChangeEventInit_new();

#ifdef __cplusplus
}
#endif
