#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "CSSTransformComponent.h"
#include "enums.h"

typedef struct CSSNumericValue CSSNumericValue;


typedef struct {
  CSSTransformComponent inner;
} CSSRotate;


DECLARE_EMLITE_TYPE(CSSRotate, CSSTransformComponent);

CSSRotate CSSRotate_new(const jb_Any* x, const jb_Any* y, const jb_Any* z, const CSSNumericValue* angle);

jb_Any CSSRotate_x( const CSSRotate *self);

void CSSRotate_set_x(CSSRotate* self, const jb_Any* value);

jb_Any CSSRotate_y( const CSSRotate *self);

void CSSRotate_set_y(CSSRotate* self, const jb_Any* value);

jb_Any CSSRotate_z( const CSSRotate *self);

void CSSRotate_set_z(CSSRotate* self, const jb_Any* value);

CSSNumericValue CSSRotate_angle( const CSSRotate *self);

void CSSRotate_set_angle(CSSRotate* self, const CSSNumericValue* value);
