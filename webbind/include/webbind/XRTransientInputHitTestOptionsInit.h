#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct XRRay XRRay;

/** @brief Dictionary type XRTransientInputHitTestOptionsInit */
DECLARE_EMLITE_TYPE(XRTransientInputHitTestOptionsInit, em_Val);

/** @brief Getter of the profile property */
jb_String XRTransientInputHitTestOptionsInit_profile(const XRTransientInputHitTestOptionsInit *self);

/** @brief Setter of the profile property */
void XRTransientInputHitTestOptionsInit_set_profile(XRTransientInputHitTestOptionsInit* self, jb_String * value);

/** @brief Getter of the entityTypes property */
jb_Array XRTransientInputHitTestOptionsInit_entityTypes(const XRTransientInputHitTestOptionsInit *self);

/** @brief Setter of the entityTypes property */
void XRTransientInputHitTestOptionsInit_set_entityTypes(XRTransientInputHitTestOptionsInit* self, jb_Array * value);

/** @brief Getter of the offsetRay property */
XRRay XRTransientInputHitTestOptionsInit_offsetRay(const XRTransientInputHitTestOptionsInit *self);

/** @brief Setter of the offsetRay property */
void XRTransientInputHitTestOptionsInit_set_offsetRay(XRTransientInputHitTestOptionsInit* self, XRRay * value);

/** @brief Constructor of the XRTransientInputHitTestOptionsInit dictionary type */
XRTransientInputHitTestOptionsInit XRTransientInputHitTestOptionsInit_new();

#ifdef __cplusplus
}
#endif
