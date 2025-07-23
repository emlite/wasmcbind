#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

typedef struct ChildBreakToken ChildBreakToken;


DECLARE_EMLITE_TYPE(BreakToken, em_Val);

jb_FrozenArray BreakToken_childBreakTokens(const BreakToken *self);

jb_Any BreakToken_data(const BreakToken *self);
