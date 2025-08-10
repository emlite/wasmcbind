#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "DOMPointInit.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(DOMQuadInit, em_Val);

DOMPointInit DOMQuadInit_p1(const DOMQuadInit *self);

void DOMQuadInit_set_p1(DOMQuadInit* self, DOMPointInit * value);

DOMPointInit DOMQuadInit_p2(const DOMQuadInit *self);

void DOMQuadInit_set_p2(DOMQuadInit* self, DOMPointInit * value);

DOMPointInit DOMQuadInit_p3(const DOMQuadInit *self);

void DOMQuadInit_set_p3(DOMQuadInit* self, DOMPointInit * value);

DOMPointInit DOMQuadInit_p4(const DOMQuadInit *self);

void DOMQuadInit_set_p4(DOMQuadInit* self, DOMPointInit * value);

DOMQuadInit DOMQuadInit_new();

#ifdef __cplusplus
}
#endif
