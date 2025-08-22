#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "MouseEventInit.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type WheelEventInit */
DECLARE_EMLITE_TYPE(WheelEventInit, MouseEventInit);

/** @brief Getter of the deltaX property */
double WheelEventInit_deltaX(const WheelEventInit *self);

/** @brief Setter of the deltaX property */
void WheelEventInit_set_deltaX(WheelEventInit* self, double value);

/** @brief Getter of the deltaY property */
double WheelEventInit_deltaY(const WheelEventInit *self);

/** @brief Setter of the deltaY property */
void WheelEventInit_set_deltaY(WheelEventInit* self, double value);

/** @brief Getter of the deltaZ property */
double WheelEventInit_deltaZ(const WheelEventInit *self);

/** @brief Setter of the deltaZ property */
void WheelEventInit_set_deltaZ(WheelEventInit* self, double value);

/** @brief Getter of the deltaMode property */
unsigned long WheelEventInit_deltaMode(const WheelEventInit *self);

/** @brief Setter of the deltaMode property */
void WheelEventInit_set_deltaMode(WheelEventInit* self, unsigned long value);

/** @brief Constructor of the WheelEventInit dictionary type */
WheelEventInit WheelEventInit_new();

#ifdef __cplusplus
}
#endif
