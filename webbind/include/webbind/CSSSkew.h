#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "CSSTransformComponent.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct CSSNumericValue CSSNumericValue;

DECLARE_EMLITE_TYPE(CSSSkew, CSSTransformComponent);

CSSSkew CSSSkew_new(CSSNumericValue * ax, CSSNumericValue * ay);

CSSNumericValue CSSSkew_ax(const CSSSkew *self);

void CSSSkew_set_ax(CSSSkew* self, CSSNumericValue * value);

CSSNumericValue CSSSkew_ay(const CSSSkew *self);

void CSSSkew_set_ay(CSSSkew* self, CSSNumericValue * value);

#ifdef __cplusplus
}
#endif
