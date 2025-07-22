#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "CSSTransformComponent.h"
#include "enums.h"


typedef struct {
  CSSTransformComponent inner;
} CSSScale;


DECLARE_EMLITE_TYPE(CSSScale, CSSTransformComponent);

CSSScale CSSScale_new(const jb_Any* x, const jb_Any* y);

CSSScale CSSScale_new(const jb_Any* x, const jb_Any* y, const jb_Any* z);

jb_Any CSSScale_x( const CSSScale *self);

void CSSScale_set_x(CSSScale* self, const jb_Any* value);

jb_Any CSSScale_y( const CSSScale *self);

void CSSScale_set_y(CSSScale* self, const jb_Any* value);

jb_Any CSSScale_z( const CSSScale *self);

void CSSScale_set_z(CSSScale* self, const jb_Any* value);
