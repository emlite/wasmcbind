#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "CSSTransformComponent.h"
#include "enums.h"

typedef struct CSSNumericValue CSSNumericValue;


typedef struct {
  CSSTransformComponent inner;
} CSSSkew;


DECLARE_EMLITE_TYPE(CSSSkew, CSSTransformComponent);

CSSSkew CSSSkew_new(const CSSNumericValue* ax, const CSSNumericValue* ay);

CSSNumericValue CSSSkew_ax( const CSSSkew *self);

void CSSSkew_set_ax(CSSSkew* self, const CSSNumericValue* value);

CSSNumericValue CSSSkew_ay( const CSSSkew *self);

void CSSSkew_set_ay(CSSSkew* self, const CSSNumericValue* value);
