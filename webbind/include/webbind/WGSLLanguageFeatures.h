#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"


typedef struct {
  em_Val inner;
} WGSLLanguageFeatures;


DECLARE_EMLITE_TYPE(WGSLLanguageFeatures, em_Val);
