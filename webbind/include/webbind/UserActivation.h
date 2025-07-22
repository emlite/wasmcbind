#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"


typedef struct {
  em_Val inner;
} UserActivation;


DECLARE_EMLITE_TYPE(UserActivation, em_Val);

bool UserActivation_hasBeenActive( const UserActivation *self);

bool UserActivation_isActive( const UserActivation *self);
