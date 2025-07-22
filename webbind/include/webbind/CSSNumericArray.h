#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

typedef struct CSSNumericValue CSSNumericValue;


DECLARE_EMLITE_TYPE(CSSNumericArray, em_Val);

unsigned long CSSNumericArray_length( const CSSNumericArray *self);
