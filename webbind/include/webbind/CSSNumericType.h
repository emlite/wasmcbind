#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(CSSNumericType, em_Val);

long CSSNumericType_length(const CSSNumericType *self);

void CSSNumericType_set_length(CSSNumericType* self, long value);

long CSSNumericType_angle(const CSSNumericType *self);

void CSSNumericType_set_angle(CSSNumericType* self, long value);

long CSSNumericType_time(const CSSNumericType *self);

void CSSNumericType_set_time(CSSNumericType* self, long value);

long CSSNumericType_frequency(const CSSNumericType *self);

void CSSNumericType_set_frequency(CSSNumericType* self, long value);

long CSSNumericType_resolution(const CSSNumericType *self);

void CSSNumericType_set_resolution(CSSNumericType* self, long value);

long CSSNumericType_flex(const CSSNumericType *self);

void CSSNumericType_set_flex(CSSNumericType* self, long value);

long CSSNumericType_percent(const CSSNumericType *self);

void CSSNumericType_set_percent(CSSNumericType* self, long value);

CSSNumericBaseType CSSNumericType_percentHint(const CSSNumericType *self);

void CSSNumericType_set_percentHint(CSSNumericType* self, CSSNumericBaseType * value);

CSSNumericType CSSNumericType_new();

#ifdef __cplusplus
}
#endif
