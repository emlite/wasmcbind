#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "CSSRule.h"
#include "enums.h"


typedef struct {
  CSSRule inner;
} CSSFontPaletteValuesRule;


DECLARE_EMLITE_TYPE(CSSFontPaletteValuesRule, CSSRule);

jb_CSSOMString CSSFontPaletteValuesRule_name( const CSSFontPaletteValuesRule *self);

jb_CSSOMString CSSFontPaletteValuesRule_fontFamily( const CSSFontPaletteValuesRule *self);

jb_CSSOMString CSSFontPaletteValuesRule_basePalette( const CSSFontPaletteValuesRule *self);

jb_CSSOMString CSSFontPaletteValuesRule_overrideColors( const CSSFontPaletteValuesRule *self);
