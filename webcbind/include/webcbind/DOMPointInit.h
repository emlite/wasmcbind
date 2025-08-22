#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type DOMPointInit */
DECLARE_EMLITE_TYPE(DOMPointInit, em_Val);

/** @brief Getter of the x property */
double DOMPointInit_x(const DOMPointInit *self);

/** @brief Setter of the x property */
void DOMPointInit_set_x(DOMPointInit* self, double value);

/** @brief Getter of the y property */
double DOMPointInit_y(const DOMPointInit *self);

/** @brief Setter of the y property */
void DOMPointInit_set_y(DOMPointInit* self, double value);

/** @brief Getter of the z property */
double DOMPointInit_z(const DOMPointInit *self);

/** @brief Setter of the z property */
void DOMPointInit_set_z(DOMPointInit* self, double value);

/** @brief Getter of the w property */
double DOMPointInit_w(const DOMPointInit *self);

/** @brief Setter of the w property */
void DOMPointInit_set_w(DOMPointInit* self, double value);

/** @brief Constructor of the DOMPointInit dictionary type */
DOMPointInit DOMPointInit_new();

#ifdef __cplusplus
}
#endif
