#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

typedef struct Document Document;


typedef struct {
  em_Val inner;
} DOMParser;


DECLARE_EMLITE_TYPE(DOMParser, em_Val);

DOMParser DOMParser_new();

Document DOMParser_parseFromString(DOMParser* self , const jb_Any* string, const DOMParserSupportedType* type);
