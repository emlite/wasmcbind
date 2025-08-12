#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "DOMMatrix2DInit.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type DOMMatrixInit */
DECLARE_EMLITE_TYPE(DOMMatrixInit, DOMMatrix2DInit);

/** @brief Getter of the m13 property */
double DOMMatrixInit_m13(const DOMMatrixInit *self);

/** @brief Setter of the m13 property */
void DOMMatrixInit_set_m13(DOMMatrixInit* self, double value);

/** @brief Getter of the m14 property */
double DOMMatrixInit_m14(const DOMMatrixInit *self);

/** @brief Setter of the m14 property */
void DOMMatrixInit_set_m14(DOMMatrixInit* self, double value);

/** @brief Getter of the m23 property */
double DOMMatrixInit_m23(const DOMMatrixInit *self);

/** @brief Setter of the m23 property */
void DOMMatrixInit_set_m23(DOMMatrixInit* self, double value);

/** @brief Getter of the m24 property */
double DOMMatrixInit_m24(const DOMMatrixInit *self);

/** @brief Setter of the m24 property */
void DOMMatrixInit_set_m24(DOMMatrixInit* self, double value);

/** @brief Getter of the m31 property */
double DOMMatrixInit_m31(const DOMMatrixInit *self);

/** @brief Setter of the m31 property */
void DOMMatrixInit_set_m31(DOMMatrixInit* self, double value);

/** @brief Getter of the m32 property */
double DOMMatrixInit_m32(const DOMMatrixInit *self);

/** @brief Setter of the m32 property */
void DOMMatrixInit_set_m32(DOMMatrixInit* self, double value);

/** @brief Getter of the m33 property */
double DOMMatrixInit_m33(const DOMMatrixInit *self);

/** @brief Setter of the m33 property */
void DOMMatrixInit_set_m33(DOMMatrixInit* self, double value);

/** @brief Getter of the m34 property */
double DOMMatrixInit_m34(const DOMMatrixInit *self);

/** @brief Setter of the m34 property */
void DOMMatrixInit_set_m34(DOMMatrixInit* self, double value);

/** @brief Getter of the m43 property */
double DOMMatrixInit_m43(const DOMMatrixInit *self);

/** @brief Setter of the m43 property */
void DOMMatrixInit_set_m43(DOMMatrixInit* self, double value);

/** @brief Getter of the m44 property */
double DOMMatrixInit_m44(const DOMMatrixInit *self);

/** @brief Setter of the m44 property */
void DOMMatrixInit_set_m44(DOMMatrixInit* self, double value);

/** @brief Getter of the is2D property */
bool DOMMatrixInit_is2D(const DOMMatrixInit *self);

/** @brief Setter of the is2D property */
void DOMMatrixInit_set_is2D(DOMMatrixInit* self, bool value);

/** @brief Constructor of the DOMMatrixInit dictionary type */
DOMMatrixInit DOMMatrixInit_new();

#ifdef __cplusplus
}
#endif
