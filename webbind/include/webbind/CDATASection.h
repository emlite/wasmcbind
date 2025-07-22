#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "Text.h"
#include "enums.h"


typedef struct {
  Text inner;
} CDATASection;


DECLARE_EMLITE_TYPE(CDATASection, Text);
