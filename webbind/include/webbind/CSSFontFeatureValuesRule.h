#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "CSSRule.h"
#include "enums.h"

typedef struct CSSFontFeatureValuesMap CSSFontFeatureValuesMap;


typedef struct {
  CSSRule inner;
} CSSFontFeatureValuesRule;


DECLARE_EMLITE_TYPE(CSSFontFeatureValuesRule, CSSRule);

jb_CSSOMString CSSFontFeatureValuesRule_fontFamily( const CSSFontFeatureValuesRule *self);

void CSSFontFeatureValuesRule_set_fontFamily(CSSFontFeatureValuesRule* self, const jb_CSSOMString* value);

CSSFontFeatureValuesMap CSSFontFeatureValuesRule_annotation( const CSSFontFeatureValuesRule *self);

CSSFontFeatureValuesMap CSSFontFeatureValuesRule_ornaments( const CSSFontFeatureValuesRule *self);

CSSFontFeatureValuesMap CSSFontFeatureValuesRule_stylistic( const CSSFontFeatureValuesRule *self);

CSSFontFeatureValuesMap CSSFontFeatureValuesRule_swash( const CSSFontFeatureValuesRule *self);

CSSFontFeatureValuesMap CSSFontFeatureValuesRule_characterVariant( const CSSFontFeatureValuesRule *self);

CSSFontFeatureValuesMap CSSFontFeatureValuesRule_styleset( const CSSFontFeatureValuesRule *self);

CSSFontFeatureValuesMap CSSFontFeatureValuesRule_historicalForms( const CSSFontFeatureValuesRule *self);
