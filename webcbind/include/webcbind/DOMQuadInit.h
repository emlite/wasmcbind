#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "DOMPointInit.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type DOMQuadInit */
DECLARE_EMLITE_TYPE(DOMQuadInit, em_Val);

/** @brief Getter of the p1 property */
DOMPointInit DOMQuadInit_p1(const DOMQuadInit *self);

/** @brief Setter of the p1 property */
void DOMQuadInit_set_p1(DOMQuadInit* self, DOMPointInit * value);

/** @brief Getter of the p2 property */
DOMPointInit DOMQuadInit_p2(const DOMQuadInit *self);

/** @brief Setter of the p2 property */
void DOMQuadInit_set_p2(DOMQuadInit* self, DOMPointInit * value);

/** @brief Getter of the p3 property */
DOMPointInit DOMQuadInit_p3(const DOMQuadInit *self);

/** @brief Setter of the p3 property */
void DOMQuadInit_set_p3(DOMQuadInit* self, DOMPointInit * value);

/** @brief Getter of the p4 property */
DOMPointInit DOMQuadInit_p4(const DOMQuadInit *self);

/** @brief Setter of the p4 property */
void DOMQuadInit_set_p4(DOMQuadInit* self, DOMPointInit * value);

/** @brief Constructor of the DOMQuadInit dictionary type */
DOMQuadInit DOMQuadInit_new();

#ifdef __cplusplus
}
#endif
