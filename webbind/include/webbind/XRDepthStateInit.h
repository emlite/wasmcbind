#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type XRDepthStateInit */
DECLARE_EMLITE_TYPE(XRDepthStateInit, em_Val);

/** @brief Getter of the usagePreference property */
jb_Array XRDepthStateInit_usagePreference(const XRDepthStateInit *self);

/** @brief Setter of the usagePreference property */
void XRDepthStateInit_set_usagePreference(XRDepthStateInit* self, jb_Array * value);

/** @brief Getter of the dataFormatPreference property */
jb_Array XRDepthStateInit_dataFormatPreference(const XRDepthStateInit *self);

/** @brief Setter of the dataFormatPreference property */
void XRDepthStateInit_set_dataFormatPreference(XRDepthStateInit* self, jb_Array * value);

/** @brief Getter of the depthTypeRequest property */
jb_Array XRDepthStateInit_depthTypeRequest(const XRDepthStateInit *self);

/** @brief Setter of the depthTypeRequest property */
void XRDepthStateInit_set_depthTypeRequest(XRDepthStateInit* self, jb_Array * value);

/** @brief Getter of the matchDepthView property */
bool XRDepthStateInit_matchDepthView(const XRDepthStateInit *self);

/** @brief Setter of the matchDepthView property */
void XRDepthStateInit_set_matchDepthView(XRDepthStateInit* self, bool value);

/** @brief Constructor of the XRDepthStateInit dictionary type */
XRDepthStateInit XRDepthStateInit_new();

#ifdef __cplusplus
}
#endif
