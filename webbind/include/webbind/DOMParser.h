#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

typedef struct Document Document;


DECLARE_EMLITE_TYPE(DOMParser, em_Val);

DOMParser DOMParser_new();

Document DOMParser_parseFromString(DOMParser* self , jb_Any * string, DOMParserSupportedType * type);
