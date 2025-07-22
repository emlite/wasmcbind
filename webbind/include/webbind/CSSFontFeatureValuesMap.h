#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"


DECLARE_EMLITE_TYPE(CSSFontFeatureValuesMap, em_Val);

jb_Undefined CSSFontFeatureValuesMap_set(CSSFontFeatureValuesMap* self , jb_CSSOMString * featureValueName, jb_Any * values);
