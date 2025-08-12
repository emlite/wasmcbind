#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct XRSpace XRSpace;

/** @brief Dictionary type XRMediaLayerInit */
DECLARE_EMLITE_TYPE(XRMediaLayerInit, em_Val);

/** @brief Getter of the space property */
XRSpace XRMediaLayerInit_space(const XRMediaLayerInit *self);

/** @brief Setter of the space property */
void XRMediaLayerInit_set_space(XRMediaLayerInit* self, XRSpace * value);

/** @brief Getter of the layout property */
XRLayerLayout XRMediaLayerInit_layout(const XRMediaLayerInit *self);

/** @brief Setter of the layout property */
void XRMediaLayerInit_set_layout(XRMediaLayerInit* self, XRLayerLayout * value);

/** @brief Getter of the invertStereo property */
bool XRMediaLayerInit_invertStereo(const XRMediaLayerInit *self);

/** @brief Setter of the invertStereo property */
void XRMediaLayerInit_set_invertStereo(XRMediaLayerInit* self, bool value);

/** @brief Constructor of the XRMediaLayerInit dictionary type */
XRMediaLayerInit XRMediaLayerInit_new();

#ifdef __cplusplus
}
#endif
