#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct Element Element;

DECLARE_EMLITE_TYPE(XRDOMOverlayInit, em_Val);

Element XRDOMOverlayInit_root(const XRDOMOverlayInit *self);

void XRDOMOverlayInit_set_root(XRDOMOverlayInit* self, Element * value);

XRDOMOverlayInit XRDOMOverlayInit_new();

#ifdef __cplusplus
}
#endif
