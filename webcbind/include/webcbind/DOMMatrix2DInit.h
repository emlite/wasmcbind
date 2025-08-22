#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type DOMMatrix2DInit */
DECLARE_EMLITE_TYPE(DOMMatrix2DInit, em_Val);

/** @brief Getter of the a property */
double DOMMatrix2DInit_a(const DOMMatrix2DInit *self);

/** @brief Setter of the a property */
void DOMMatrix2DInit_set_a(DOMMatrix2DInit* self, double value);

/** @brief Getter of the b property */
double DOMMatrix2DInit_b(const DOMMatrix2DInit *self);

/** @brief Setter of the b property */
void DOMMatrix2DInit_set_b(DOMMatrix2DInit* self, double value);

/** @brief Getter of the c property */
double DOMMatrix2DInit_c(const DOMMatrix2DInit *self);

/** @brief Setter of the c property */
void DOMMatrix2DInit_set_c(DOMMatrix2DInit* self, double value);

/** @brief Getter of the d property */
double DOMMatrix2DInit_d(const DOMMatrix2DInit *self);

/** @brief Setter of the d property */
void DOMMatrix2DInit_set_d(DOMMatrix2DInit* self, double value);

/** @brief Getter of the e property */
double DOMMatrix2DInit_e(const DOMMatrix2DInit *self);

/** @brief Setter of the e property */
void DOMMatrix2DInit_set_e(DOMMatrix2DInit* self, double value);

/** @brief Getter of the f property */
double DOMMatrix2DInit_f(const DOMMatrix2DInit *self);

/** @brief Setter of the f property */
void DOMMatrix2DInit_set_f(DOMMatrix2DInit* self, double value);

/** @brief Getter of the m11 property */
double DOMMatrix2DInit_m11(const DOMMatrix2DInit *self);

/** @brief Setter of the m11 property */
void DOMMatrix2DInit_set_m11(DOMMatrix2DInit* self, double value);

/** @brief Getter of the m12 property */
double DOMMatrix2DInit_m12(const DOMMatrix2DInit *self);

/** @brief Setter of the m12 property */
void DOMMatrix2DInit_set_m12(DOMMatrix2DInit* self, double value);

/** @brief Getter of the m21 property */
double DOMMatrix2DInit_m21(const DOMMatrix2DInit *self);

/** @brief Setter of the m21 property */
void DOMMatrix2DInit_set_m21(DOMMatrix2DInit* self, double value);

/** @brief Getter of the m22 property */
double DOMMatrix2DInit_m22(const DOMMatrix2DInit *self);

/** @brief Setter of the m22 property */
void DOMMatrix2DInit_set_m22(DOMMatrix2DInit* self, double value);

/** @brief Getter of the m41 property */
double DOMMatrix2DInit_m41(const DOMMatrix2DInit *self);

/** @brief Setter of the m41 property */
void DOMMatrix2DInit_set_m41(DOMMatrix2DInit* self, double value);

/** @brief Getter of the m42 property */
double DOMMatrix2DInit_m42(const DOMMatrix2DInit *self);

/** @brief Setter of the m42 property */
void DOMMatrix2DInit_set_m42(DOMMatrix2DInit* self, double value);

/** @brief Constructor of the DOMMatrix2DInit dictionary type */
DOMMatrix2DInit DOMMatrix2DInit_new();

#ifdef __cplusplus
}
#endif
