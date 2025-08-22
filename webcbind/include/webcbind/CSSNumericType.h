#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type CSSNumericType */
DECLARE_EMLITE_TYPE(CSSNumericType, em_Val);

/** @brief Getter of the length property */
long CSSNumericType_length(const CSSNumericType *self);

/** @brief Setter of the length property */
void CSSNumericType_set_length(CSSNumericType* self, long value);

/** @brief Getter of the angle property */
long CSSNumericType_angle(const CSSNumericType *self);

/** @brief Setter of the angle property */
void CSSNumericType_set_angle(CSSNumericType* self, long value);

/** @brief Getter of the time property */
long CSSNumericType_time(const CSSNumericType *self);

/** @brief Setter of the time property */
void CSSNumericType_set_time(CSSNumericType* self, long value);

/** @brief Getter of the frequency property */
long CSSNumericType_frequency(const CSSNumericType *self);

/** @brief Setter of the frequency property */
void CSSNumericType_set_frequency(CSSNumericType* self, long value);

/** @brief Getter of the resolution property */
long CSSNumericType_resolution(const CSSNumericType *self);

/** @brief Setter of the resolution property */
void CSSNumericType_set_resolution(CSSNumericType* self, long value);

/** @brief Getter of the flex property */
long CSSNumericType_flex(const CSSNumericType *self);

/** @brief Setter of the flex property */
void CSSNumericType_set_flex(CSSNumericType* self, long value);

/** @brief Getter of the percent property */
long CSSNumericType_percent(const CSSNumericType *self);

/** @brief Setter of the percent property */
void CSSNumericType_set_percent(CSSNumericType* self, long value);

/** @brief Getter of the percentHint property */
CSSNumericBaseType CSSNumericType_percentHint(const CSSNumericType *self);

/** @brief Setter of the percentHint property */
void CSSNumericType_set_percentHint(CSSNumericType* self, CSSNumericBaseType * value);

/** @brief Constructor of the CSSNumericType dictionary type */
CSSNumericType CSSNumericType_new();

#ifdef __cplusplus
}
#endif
