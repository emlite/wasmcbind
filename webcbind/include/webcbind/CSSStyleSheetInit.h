#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type CSSStyleSheetInit */
DECLARE_EMLITE_TYPE(CSSStyleSheetInit, em_Val);

/** @brief Getter of the baseURL property */
jb_String CSSStyleSheetInit_baseURL(const CSSStyleSheetInit *self);

/** @brief Setter of the baseURL property */
void CSSStyleSheetInit_set_baseURL(CSSStyleSheetInit* self, jb_String * value);

/** @brief Getter of the media property */
jb_Any CSSStyleSheetInit_media(const CSSStyleSheetInit *self);

/** @brief Setter of the media property */
void CSSStyleSheetInit_set_media(CSSStyleSheetInit* self, jb_Any * value);

/** @brief Getter of the disabled property */
bool CSSStyleSheetInit_disabled(const CSSStyleSheetInit *self);

/** @brief Setter of the disabled property */
void CSSStyleSheetInit_set_disabled(CSSStyleSheetInit* self, bool value);

/** @brief Constructor of the CSSStyleSheetInit dictionary type */
CSSStyleSheetInit CSSStyleSheetInit_new();

#ifdef __cplusplus
}
#endif
