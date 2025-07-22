#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "CSSTransformComponent.h"
#include "enums.h"

typedef struct CSSNumericValue CSSNumericValue;


typedef struct {
  CSSTransformComponent inner;
} CSSTranslate;


DECLARE_EMLITE_TYPE(CSSTranslate, CSSTransformComponent);

CSSTranslate CSSTranslate_new(const CSSNumericValue* x, const CSSNumericValue* y);

CSSTranslate CSSTranslate_new(const CSSNumericValue* x, const CSSNumericValue* y, const CSSNumericValue* z);

CSSNumericValue CSSTranslate_x( const CSSTranslate *self);

void CSSTranslate_set_x(CSSTranslate* self, const CSSNumericValue* value);

CSSNumericValue CSSTranslate_y( const CSSTranslate *self);

void CSSTranslate_set_y(CSSTranslate* self, const CSSNumericValue* value);

CSSNumericValue CSSTranslate_z( const CSSTranslate *self);

void CSSTranslate_set_z(CSSTranslate* self, const CSSNumericValue* value);
