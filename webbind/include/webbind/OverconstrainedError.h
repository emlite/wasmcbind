#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "DOMException.h"
#include "enums.h"


DECLARE_EMLITE_TYPE(OverconstrainedError, DOMException);

OverconstrainedError OverconstrainedError_new0(jb_DOMString * constraint);

OverconstrainedError OverconstrainedError_new1(jb_DOMString * constraint, jb_DOMString * message);

jb_DOMString OverconstrainedError_constraint( const OverconstrainedError *self);
