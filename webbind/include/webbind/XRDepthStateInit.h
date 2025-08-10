#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(XRDepthStateInit, em_Val);

jb_Array XRDepthStateInit_usagePreference(const XRDepthStateInit *self);

void XRDepthStateInit_set_usagePreference(XRDepthStateInit* self, jb_Array * value);

jb_Array XRDepthStateInit_dataFormatPreference(const XRDepthStateInit *self);

void XRDepthStateInit_set_dataFormatPreference(XRDepthStateInit* self, jb_Array * value);

jb_Array XRDepthStateInit_depthTypeRequest(const XRDepthStateInit *self);

void XRDepthStateInit_set_depthTypeRequest(XRDepthStateInit* self, jb_Array * value);

bool XRDepthStateInit_matchDepthView(const XRDepthStateInit *self);

void XRDepthStateInit_set_matchDepthView(XRDepthStateInit* self, bool value);

XRDepthStateInit XRDepthStateInit_new();

#ifdef __cplusplus
}
#endif
