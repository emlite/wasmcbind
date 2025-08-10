#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(CSSStyleSheetInit, em_Val);

jb_String CSSStyleSheetInit_baseURL(const CSSStyleSheetInit *self);

void CSSStyleSheetInit_set_baseURL(CSSStyleSheetInit* self, jb_String * value);

jb_Any CSSStyleSheetInit_media(const CSSStyleSheetInit *self);

void CSSStyleSheetInit_set_media(CSSStyleSheetInit* self, jb_Any * value);

bool CSSStyleSheetInit_disabled(const CSSStyleSheetInit *self);

void CSSStyleSheetInit_set_disabled(CSSStyleSheetInit* self, bool value);

CSSStyleSheetInit CSSStyleSheetInit_new();

#ifdef __cplusplus
}
#endif
