#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type DOMRectInit */
DECLARE_EMLITE_TYPE(DOMRectInit, em_Val);

/** @brief Getter of the x property */
double DOMRectInit_x(const DOMRectInit *self);

/** @brief Setter of the x property */
void DOMRectInit_set_x(DOMRectInit* self, double value);

/** @brief Getter of the y property */
double DOMRectInit_y(const DOMRectInit *self);

/** @brief Setter of the y property */
void DOMRectInit_set_y(DOMRectInit* self, double value);

/** @brief Getter of the width property */
double DOMRectInit_width(const DOMRectInit *self);

/** @brief Setter of the width property */
void DOMRectInit_set_width(DOMRectInit* self, double value);

/** @brief Getter of the height property */
double DOMRectInit_height(const DOMRectInit *self);

/** @brief Setter of the height property */
void DOMRectInit_set_height(DOMRectInit* self, double value);

/** @brief Constructor of the DOMRectInit dictionary type */
DOMRectInit DOMRectInit_new();

#ifdef __cplusplus
}
#endif
