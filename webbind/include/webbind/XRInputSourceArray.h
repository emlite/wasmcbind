#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

typedef struct XRInputSource XRInputSource;


typedef struct {
  em_Val inner;
} XRInputSourceArray;


DECLARE_EMLITE_TYPE(XRInputSourceArray, em_Val);

unsigned long XRInputSourceArray_length( const XRInputSourceArray *self);
