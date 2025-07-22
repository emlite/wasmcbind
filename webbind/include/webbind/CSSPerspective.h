#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "CSSTransformComponent.h"
#include "enums.h"


typedef struct {
  CSSTransformComponent inner;
} CSSPerspective;


DECLARE_EMLITE_TYPE(CSSPerspective, CSSTransformComponent);

CSSPerspective CSSPerspective_new(const jb_Any* length);

jb_Any CSSPerspective_length( const CSSPerspective *self);

void CSSPerspective_set_length(CSSPerspective* self, const jb_Any* value);
