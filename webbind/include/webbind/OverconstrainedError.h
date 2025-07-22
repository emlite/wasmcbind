#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "DOMException.h"
#include "enums.h"


typedef struct {
  DOMException inner;
} OverconstrainedError;


DECLARE_EMLITE_TYPE(OverconstrainedError, DOMException);

OverconstrainedError OverconstrainedError_new(const jb_DOMString* constraint);

OverconstrainedError OverconstrainedError_new(const jb_DOMString* constraint, const jb_DOMString* message);

jb_DOMString OverconstrainedError_constraint( const OverconstrainedError *self);
