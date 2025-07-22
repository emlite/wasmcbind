#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"


typedef struct {
  em_Val inner;
} NotRestoredReasonDetails;


DECLARE_EMLITE_TYPE(NotRestoredReasonDetails, em_Val);

jb_DOMString NotRestoredReasonDetails_reason( const NotRestoredReasonDetails *self);

jb_Object NotRestoredReasonDetails_toJSON(NotRestoredReasonDetails* self );
