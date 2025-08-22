#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct Element Element;

/** @brief Dictionary type XRDOMOverlayInit */
DECLARE_EMLITE_TYPE(XRDOMOverlayInit, em_Val);

/** @brief Getter of the root property */
Element XRDOMOverlayInit_root(const XRDOMOverlayInit *self);

/** @brief Setter of the root property */
void XRDOMOverlayInit_set_root(XRDOMOverlayInit* self, Element * value);

/** @brief Constructor of the XRDOMOverlayInit dictionary type */
XRDOMOverlayInit XRDOMOverlayInit_new();

#ifdef __cplusplus
}
#endif
