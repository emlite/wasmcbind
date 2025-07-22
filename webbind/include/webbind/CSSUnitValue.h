#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "CSSNumericValue.h"
#include "enums.h"


typedef struct {
  CSSNumericValue inner;
} CSSUnitValue;


DECLARE_EMLITE_TYPE(CSSUnitValue, CSSNumericValue);

CSSUnitValue CSSUnitValue_new(double value, const jb_USVString* unit);

double CSSUnitValue_value( const CSSUnitValue *self);

void CSSUnitValue_set_value(CSSUnitValue* self, double value);

jb_USVString CSSUnitValue_unit( const CSSUnitValue *self);
