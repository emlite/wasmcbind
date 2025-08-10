#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "CSSTransformComponent.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct CSSNumericValue CSSNumericValue;

DECLARE_EMLITE_TYPE(CSSSkewX, CSSTransformComponent);

CSSSkewX CSSSkewX_new(CSSNumericValue * ax);

CSSNumericValue CSSSkewX_ax(const CSSSkewX *self);

void CSSSkewX_set_ax(CSSSkewX* self, CSSNumericValue * value);

#ifdef __cplusplus
}
#endif
