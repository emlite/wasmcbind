#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"


typedef struct {
  em_Val inner;
} XRHitTestSource;


DECLARE_EMLITE_TYPE(XRHitTestSource, em_Val);

jb_Undefined XRHitTestSource_cancel(XRHitTestSource* self );
