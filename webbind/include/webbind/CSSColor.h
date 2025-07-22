#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "CSSColorValue.h"
#include "enums.h"


typedef struct {
  CSSColorValue inner;
} CSSColor;


DECLARE_EMLITE_TYPE(CSSColor, CSSColorValue);

CSSColor CSSColor_new(const jb_Any* colorSpace, const jb_Sequence* channels);

CSSColor CSSColor_new(const jb_Any* colorSpace, const jb_Sequence* channels, const jb_Any* alpha);

jb_Any CSSColor_colorSpace( const CSSColor *self);

void CSSColor_set_colorSpace(CSSColor* self, const jb_Any* value);

jb_ObservableArray CSSColor_channels( const CSSColor *self);

void CSSColor_set_channels(CSSColor* self, const jb_ObservableArray* value);

jb_Any CSSColor_alpha( const CSSColor *self);

void CSSColor_set_alpha(CSSColor* self, const jb_Any* value);
