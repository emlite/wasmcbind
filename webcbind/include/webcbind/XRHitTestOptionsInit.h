#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct XRSpace XRSpace;
typedef struct XRRay XRRay;

/** @brief Dictionary type XRHitTestOptionsInit */
DECLARE_EMLITE_TYPE(XRHitTestOptionsInit, em_Val);

/** @brief Getter of the space property */
XRSpace XRHitTestOptionsInit_space(const XRHitTestOptionsInit *self);

/** @brief Setter of the space property */
void XRHitTestOptionsInit_set_space(XRHitTestOptionsInit* self, XRSpace * value);

/** @brief Getter of the entityTypes property */
jb_Array XRHitTestOptionsInit_entityTypes(const XRHitTestOptionsInit *self);

/** @brief Setter of the entityTypes property */
void XRHitTestOptionsInit_set_entityTypes(XRHitTestOptionsInit* self, jb_Array * value);

/** @brief Getter of the offsetRay property */
XRRay XRHitTestOptionsInit_offsetRay(const XRHitTestOptionsInit *self);

/** @brief Setter of the offsetRay property */
void XRHitTestOptionsInit_set_offsetRay(XRHitTestOptionsInit* self, XRRay * value);

/** @brief Constructor of the XRHitTestOptionsInit dictionary type */
XRHitTestOptionsInit XRHitTestOptionsInit_new();

#ifdef __cplusplus
}
#endif
