#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "CSSStyleValue.h"
#include "enums.h"

typedef struct CSSNumericValue CSSNumericValue;
typedef struct CSSUnitValue CSSUnitValue;
typedef struct CSSMathSum CSSMathSum;
typedef struct CSSNumericType CSSNumericType;


typedef struct {
  em_Val inner;
} CSSNumericType;


DECLARE_EMLITE_TYPE(CSSNumericType, em_Val);

long CSSNumericType_length( const CSSNumericType *self);

void CSSNumericType_set_length(CSSNumericType* self, long value);

long CSSNumericType_angle( const CSSNumericType *self);

void CSSNumericType_set_angle(CSSNumericType* self, long value);

long CSSNumericType_time( const CSSNumericType *self);

void CSSNumericType_set_time(CSSNumericType* self, long value);

long CSSNumericType_frequency( const CSSNumericType *self);

void CSSNumericType_set_frequency(CSSNumericType* self, long value);

long CSSNumericType_resolution( const CSSNumericType *self);

void CSSNumericType_set_resolution(CSSNumericType* self, long value);

long CSSNumericType_flex( const CSSNumericType *self);

void CSSNumericType_set_flex(CSSNumericType* self, long value);

long CSSNumericType_percent( const CSSNumericType *self);

void CSSNumericType_set_percent(CSSNumericType* self, long value);

CSSNumericBaseType CSSNumericType_percentHint( const CSSNumericType *self);

void CSSNumericType_set_percentHint(CSSNumericType* self, const CSSNumericBaseType* value);
typedef struct {
  CSSStyleValue inner;
} CSSNumericValue;


DECLARE_EMLITE_TYPE(CSSNumericValue, CSSStyleValue);

CSSNumericValue CSSNumericValue_add(CSSNumericValue* self , const jb_Any* values);

CSSNumericValue CSSNumericValue_sub(CSSNumericValue* self , const jb_Any* values);

CSSNumericValue CSSNumericValue_mul(CSSNumericValue* self , const jb_Any* values);

CSSNumericValue CSSNumericValue_div(CSSNumericValue* self , const jb_Any* values);

CSSNumericValue CSSNumericValue_min(CSSNumericValue* self , const jb_Any* values);

CSSNumericValue CSSNumericValue_max(CSSNumericValue* self , const jb_Any* values);

bool CSSNumericValue_equals(CSSNumericValue* self , const jb_Any* value);

CSSUnitValue CSSNumericValue_to(CSSNumericValue* self , const jb_USVString* unit);

CSSMathSum CSSNumericValue_toSum(CSSNumericValue* self , const jb_USVString* units);

CSSNumericType CSSNumericValue_type(CSSNumericValue* self );

CSSNumericValue CSSNumericValue_parse(CSSNumericValue* self , const jb_USVString* cssText);
