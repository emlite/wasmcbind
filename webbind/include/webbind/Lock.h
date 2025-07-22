#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"


typedef struct {
  em_Val inner;
} Lock;


DECLARE_EMLITE_TYPE(Lock, em_Val);

jb_DOMString Lock_name( const Lock *self);

LockMode Lock_mode( const Lock *self);
