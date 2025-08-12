#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type XRRayDirectionInit */
DECLARE_EMLITE_TYPE(XRRayDirectionInit, em_Val);

/** @brief Getter of the x property */
double XRRayDirectionInit_x(const XRRayDirectionInit *self);

/** @brief Setter of the x property */
void XRRayDirectionInit_set_x(XRRayDirectionInit* self, double value);

/** @brief Getter of the y property */
double XRRayDirectionInit_y(const XRRayDirectionInit *self);

/** @brief Setter of the y property */
void XRRayDirectionInit_set_y(XRRayDirectionInit* self, double value);

/** @brief Getter of the z property */
double XRRayDirectionInit_z(const XRRayDirectionInit *self);

/** @brief Setter of the z property */
void XRRayDirectionInit_set_z(XRRayDirectionInit* self, double value);

/** @brief Getter of the w property */
double XRRayDirectionInit_w(const XRRayDirectionInit *self);

/** @brief Setter of the w property */
void XRRayDirectionInit_set_w(XRRayDirectionInit* self, double value);

/** @brief Constructor of the XRRayDirectionInit dictionary type */
XRRayDirectionInit XRRayDirectionInit_new();

#ifdef __cplusplus
}
#endif
