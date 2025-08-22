#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "EventInit.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type CapturedMouseEventInit */
DECLARE_EMLITE_TYPE(CapturedMouseEventInit, EventInit);

/** @brief Getter of the surfaceX property */
long CapturedMouseEventInit_surfaceX(const CapturedMouseEventInit *self);

/** @brief Setter of the surfaceX property */
void CapturedMouseEventInit_set_surfaceX(CapturedMouseEventInit* self, long value);

/** @brief Getter of the surfaceY property */
long CapturedMouseEventInit_surfaceY(const CapturedMouseEventInit *self);

/** @brief Setter of the surfaceY property */
void CapturedMouseEventInit_set_surfaceY(CapturedMouseEventInit* self, long value);

/** @brief Constructor of the CapturedMouseEventInit dictionary type */
CapturedMouseEventInit CapturedMouseEventInit_new();

#ifdef __cplusplus
}
#endif
