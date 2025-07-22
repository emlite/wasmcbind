#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "CSSStyleValue.h"
#include "enums.h"


typedef struct {
  CSSStyleValue inner;
} CSSImageValue;


DECLARE_EMLITE_TYPE(CSSImageValue, CSSStyleValue);
