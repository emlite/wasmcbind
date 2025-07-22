#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"


typedef struct {
  em_Val inner;
} FontFaceVariations;


DECLARE_EMLITE_TYPE(FontFaceVariations, em_Val);
