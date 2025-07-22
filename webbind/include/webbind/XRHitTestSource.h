#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"


DECLARE_EMLITE_TYPE(XRHitTestSource, em_Val);

jb_Undefined XRHitTestSource_cancel(XRHitTestSource* self );
